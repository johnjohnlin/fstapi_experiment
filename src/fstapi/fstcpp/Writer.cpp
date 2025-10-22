// direct include
#include "fstcpp/Writer.hpp"
// C system headers
// C++ standard library headers
#include <limits>
// Other libraries' .h files.
// Your project's .h files.
#include "fstcpp/assertion.h"
#include "fstcpp/fst_file.hpp"
#include "fstcpp/StreamWriteHelper.hpp"
#include <lz4.h>
#include <zlib.h>
#include <vector>
#include <stdexcept>

using namespace std;

namespace fst {

namespace detail {

void BlackoutData::EmitDumpActive(uint64_t current_timestamp, bool enable) {
	StreamWriteHelper h(buffer);
	h
	.WriteUInt(static_cast<uint8_t>(enable))
	.WriteLEB128(current_timestamp - previous_timestamp);
	++count;
}

void WriterWaveData::AppendTimestamp(uint64_t tim) {
	StreamWriteHelper h(timestamp_data);
	// Note: this also works when IsResetState() is true
	// Reason: timestamp_index == -1, so current_timestamp is 0
	// 1. tim - 0 is just tim, which is correct for the first timestamp
	// 2. After ++timestamp_index, it becomes 0, which is correct for the next timestamp
	// 3. first_timestamp is correct assuming it is initialized to -1, and tim is monotonically increasing
	h.WriteLEB128(tim-current_timestamp);
	++timestamp_index;
	first_timestamp = std::min(first_timestamp, tim);
}

} // namespace detail

void Writer::Open(const string_view name) {
	CHECK(not main_fst_file_.is_open());
	main_fst_file_.open(string(name), ios::binary);
	// reserve space for header, we will write it at Close(), append geometry and hierarchy at the end
	// wave data will be flushed in between by FlushWaveDataIfNecessary_()
	main_fst_file_.seekp(kSharedBlockHeaderSize + HeaderInfo::total_size, ios_base::beg);
}

void Writer::Close() {
	if (not main_fst_file_.is_open()) return;
	FlushWaveData_(true);
	WriteHeader_();
	AppendGeometry_();
	AppendHierarchy_();
	AppendBlackout_();
	main_fst_file_.close();
}

/////////////////////////////////////////
// Hierarchy / variable API
/////////////////////////////////////////
void Writer::SetScope(
	Hierarchy::ScopeType scopetype,
	const string_view scopename, const string_view scopecomp
) {
	CHECK(not hierearchy_finalized_);
	StreamWriteHelper h(hierarchy_buffer_);
	h
	.WriteUInt(static_cast<uint8_t>(Hierarchy::ScopeControlType::eVcdScope))
	.WriteUInt(static_cast<uint8_t>(scopetype))
	.WriteString(scopename)
	.WriteString(scopecomp);
	++header_.num_scopes;
}

void Writer::Upscope() {
	CHECK(not hierearchy_finalized_);
	// TODO: shall we inline it?
	StreamWriteHelper h(hierarchy_buffer_);
	h.WriteUInt(static_cast<uint8_t>(Hierarchy::ScopeControlType::eVcdUpscope));
}

Handle Writer::CreateVar(
	Hierarchy::VarType vartype, Hierarchy::VarDirection vardir,
	uint32_t len, const string_view name,
	Handle alias_handle
) {
	CHECK(not hierearchy_finalized_);
	// Write hierarchy entry: type, direction, name, length, alias
	StreamWriteHelper h(hierarchy_buffer_);

	// determine real/string handling like original C implementation
	bool is_real = false;
	switch (vartype) {
		case Hierarchy::VarType::eVcdReal:
		case Hierarchy::VarType::eVcdReal_parameter:
		case Hierarchy::VarType::eVcdRealtime:
		case Hierarchy::VarType::eSvShortreal:
			is_real = true;
			len = 8; // recast to double size
			break;
		case Hierarchy::VarType::eGenString:
			len = 0;
			break;
		default:
			break;
	}
	if (alias_handle > header_.num_handles) {
		// sanitize
		alias_handle = 0;
	}
	const bool is_alias = alias_handle != 0;
	// This counter is incremented whether alias or non-alias
	++header_.num_vars;
	if (not is_alias) {
		// This counter is incremented only for non-alias variables
		++header_.num_handles;
		alias_handle = header_.num_handles;
	}

	h
	.WriteUInt(static_cast<uint8_t>(vartype))
	.WriteUInt(static_cast<uint8_t>(vardir))
	.WriteString(name)
	.WriteLEB128(len)
	.WriteLEB128(alias_handle);

	// If alias_handle == 0, we must allocate geom/valpos/curval entries and create a new handle
	if (not is_alias) {
		StreamWriteHelper g(geometry_buffer_);
		// I don't know why the original C implementation encode len again
		const uint32_t geom_len = (
			len == 0 ? uint32_t(-1) :
			is_real  ? uint32_t(0) :
			           len
		);
		g.WriteLEB128(geom_len);
	}

	return alias_handle;
}

Handle Writer::CreateVar2(
	Hierarchy::VarType vartype, Hierarchy::VarDirection vardir,
	uint32_t len, const string_view name, Handle alias_handle, const string_view type,
	Hierarchy::SupplementalVarType svt, Hierarchy::SupplementalDataType sdt
) {
	CHECK(not hierearchy_finalized_);
	(void)vartype; (void)vardir; (void)len; (void)name; (void)alias_handle; (void)type; (void)svt; (void)sdt;
	throw runtime_error("TODO");
	return 0;
}

/////////////////////////////////////////
// Waveform API
/////////////////////////////////////////
void Writer::EmitTimeChange(uint64_t tim) {
	FinalizeHierarchy_();
	wave_data_.AppendTimestamp(tim);
}

void Writer::EmitDumpActive(bool enable) {
	blackout_data_.EmitDumpActive(wave_data_.current_timestamp, enable);
}

void Writer::EmitValueChange(Handle handle, uint32_t bits, const uint32_t *val) {
	CHECK(not wave_data_.IsResetState());
	FinalizeHierarchy_();
	throw runtime_error(__func__);
	(void)handle; (void)bits; (void)val; // TODO
}

void Writer::EmitValueChange(Handle handle, uint32_t bits, const uint64_t *val) {
	CHECK(not wave_data_.IsResetState());
	FinalizeHierarchy_();
	throw runtime_error(__func__);
	(void)handle; (void)bits; (void)val; // TODO
}

/////////////////////////////////////////
// File flushing functions
/////////////////////////////////////////
void Writer::WriteHeader_() {
	StreamWriteHelper h(main_fst_file_);

	// Finalize header fields
	if (header_.date[0] == '\0') {
		// date is not set yet, set to the current date
		SetDate();
	}

	// Actual write
	h
	.Seek(streampos(0), ios_base::beg)
	.WriteBlockHeader(BlockType::Header, HeaderInfo::total_size)
	.WriteUInt(header_.start_time)
	.WriteUInt(header_.end_time)
	.WriteFloat(HeaderInfo::kEndianessMagicIdentifier)
	.WriteUInt(header_.writer_memory_use)
	.WriteUInt(header_.num_scopes)
	.WriteUInt(header_.num_vars)
	.WriteUInt(header_.num_handles)
	.WriteUInt(header_.num_wave_data_blocks)
	.WriteUInt(header_.timescale)
	.Write(header_.writer, sizeof(header_.writer))
	.Write(header_.date, sizeof(header_.date))
	.Fill('\0', HeaderInfo::Size::reserved)
	.WriteUInt(static_cast<uint8_t>(header_.filetype))
	.WriteUInt(header_.timezero);

	DCHECK_EQ(main_fst_file_.tellp(), HeaderInfo::total_size + kSharedBlockHeaderSize);
};

static vector<char> CompressUsingZlib(const string& uncompressed_data) {
	// compress using zlib
	const uLong uncompressed_size = uncompressed_data.size();
	uLongf compressed_bound = compressBound(uncompressed_size);
	vector<char> compressed_data(compressed_bound);
	const auto z_status = compress2(
		reinterpret_cast<Bytef*>(compressed_data.data()),
		&compressed_bound,
		reinterpret_cast<const Bytef*>(uncompressed_data.data()),
		uncompressed_size,
		Z_BEST_COMPRESSION
	);
	if (z_status != Z_OK) {
		throw runtime_error("Failed to compress data with zlib, error code: " + to_string(z_status));
	}
	compressed_data.resize(compressed_bound);
	return compressed_data;
}

static auto SelectSmaller(const vector<char>& compressed_data, const string& uncompressed_data) {
	pair<const char*, size_t> ret;
	if (compressed_data.size() < uncompressed_data.size()) {
		ret.first = compressed_data.data();
		ret.second = compressed_data.size();
	} else {
		ret.first = uncompressed_data.data();
		ret.second = uncompressed_data.size();
	}
	return ret;
};

// AppendHierarchy_ and AppendGeometry_ shares a very similar structure
// But they are slightly different in the original C implementation...
void Writer::AppendGeometry_() {
	const string& geometry_uncompressed_data = geometry_buffer_.str();
	if (geometry_uncompressed_data.empty()) {
		// skip the geometry block if there is no data
		return;
	}
	vector<char> geometry_compressed_data = CompressUsingZlib(geometry_uncompressed_data);
	const auto [selected_data, selected_size] = SelectSmaller(geometry_compressed_data, geometry_uncompressed_data);

	StreamWriteHelper h(main_fst_file_);
	h
	.Seek(0, ios_base::end)
	// 16 is for the uncompressed_size and header_.num_handles
	.WriteBlockHeader(BlockType::Geometry, selected_size + 16)
	.WriteUInt<uint64_t>(geometry_uncompressed_data.size())
	// I don't know why the original C implementation write num_handles again here
	// but we have to follow it
	.WriteUInt(header_.num_handles)
	.Write(selected_data, selected_size);
}

void Writer::AppendHierarchy_() {
	const string& hierarchy_uncompressed_data = hierarchy_buffer_.str();
	if (hierarchy_uncompressed_data.empty()) {
		// skip the hierarchy block if there is no data
		return;
	}

	// compress hierarchy_buffer_ using LZ4.
	const int uncompressed_size = hierarchy_uncompressed_data.size();
	const int compressed_bound = LZ4_compressBound(uncompressed_size);
	vector<char> hierarchy_compressed_data(compressed_bound);
	const int compressed_size = LZ4_compress_default(
		hierarchy_uncompressed_data.data(),
		hierarchy_compressed_data.data(),
		uncompressed_size,
		compressed_bound
	);

	StreamWriteHelper h(main_fst_file_);
	h
	.Seek(0, ios_base::end)
	// +16 is for the uncompressed_size
	.WriteBlockHeader(BlockType::HierarchyLz4Compressed, compressed_size + 8)
	.WriteUInt<uint64_t>(uncompressed_size)
	.Write(hierarchy_compressed_data.data(), compressed_size);
}

void Writer::AppendBlackout_() {
	if (blackout_data_.count == 0) {
		// skip the blackout block if there is no data
		return;
	}
	const string& blackout_data = blackout_data_.buffer.str();
	const auto begin_of_blackout_block = main_fst_file_.tellp();
	StreamWriteHelper h(main_fst_file_);
	h
	// skip the block header
	.Seek(kSharedBlockHeaderSize, ios_base::end)
	// Note: we cannot know the size beforehand since this length is LEB128 encoded
	.WriteLEB128(blackout_data.size())
	.Write(blackout_data.data(), blackout_data.size());

	const auto size_of_blackout_block = main_fst_file_.tellp() - begin_of_blackout_block;
	h
	// go back to the beginning of the block
	.Seek(begin_of_blackout_block, ios_base::beg)
	// and write the block header
	.WriteBlockHeader(BlockType::Blackout, size_of_blackout_block - kSharedBlockHeaderSize);
}

void Writer::FlushWaveData_InitialBits_() {
	// TODO
}

void Writer::FlushWaveData_ValudChanges_() {
	// TODO
}

void Writer::FlushWaveData_Positinos_() {
	// TODO
}

void Writer::FlushWaveData_Timestamps_() {
	const string& timestamp_data = wave_data_.timestamp_data.str();
	vector<char> timestamp_compressed_data = CompressUsingZlib(timestamp_data);
	const auto [selected_data, selected_size] = SelectSmaller(timestamp_compressed_data, timestamp_data);
	StreamWriteHelper h(main_fst_file_);
	h
	.Write(selected_data, selected_size)
	.WriteUInt<uint64_t>(timestamp_data.size()) // uncompressed size
	.WriteUInt<uint64_t>(timestamp_compressed_data.size()) // compressed size
	.WriteUInt<uint64_t>(wave_data_.timestamp_index+1); // number of timestamps
}

void Writer::FlushWaveData_(bool force_flush) {
	// TODO
	(void)force_flush;

	const auto begin_of_wave_data_block = main_fst_file_.tellp();
	StreamWriteHelper h(main_fst_file_);
	h
	// skip the block header
	.Seek(kSharedBlockHeaderSize, ios_base::end)
	.WriteUInt(wave_data_.first_timestamp)
	.WriteUInt(wave_data_.current_timestamp)
	.WriteUInt(wave_data_.memory_usage);

	FlushWaveData_InitialBits_();
	FlushWaveData_ValudChanges_();
	FlushWaveData_Positinos_();
	FlushWaveData_Timestamps_();
	wave_data_.Reset();

	const auto size_of_wave_data_block = main_fst_file_.tellp() - begin_of_wave_data_block;
	h
	// go back to the beginning of the block
	.Seek(begin_of_wave_data_block, ios_base::beg)
	// and write the block header
	.WriteBlockHeader(BlockType::WaveDataVersion3, size_of_wave_data_block - kSharedBlockHeaderSize);
}

void Writer::FinalizeHierarchy_() {
	hierearchy_finalized_ = true;
}

} // namespace fst
