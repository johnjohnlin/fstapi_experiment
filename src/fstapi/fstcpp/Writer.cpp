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

void Writer::Open(const std::string_view name) {
	CHECK(not main_fst_file_.is_open());
	main_fst_file_.open(std::string(name), std::ios::binary);
}

void Writer::Close() {
	if (not main_fst_file_.is_open()) return;
	WriteHeader_();
	AppendGeometry_();
	AppendHierarchy_();
	main_fst_file_.close();
}

void Writer::SetScope(
	Hierarchy::ScopeType scopetype,
	const std::string_view scopename, const std::string_view scopecomp
) {
	StreamWriteHelper h(hierarchy_buffer_);
	h
	.WriteUInt(static_cast<uint8_t>(Hierarchy::ScopeControlType::eVcdScope))
	.WriteUInt(static_cast<uint8_t>(scopetype))
	.WriteString(scopename)
	.WriteString(scopecomp);
	++header_.num_scopes;
}

void Writer::Upscope() {
	// TODO: shall we inline it?
	StreamWriteHelper h(hierarchy_buffer_);
	h.WriteUInt(static_cast<uint8_t>(Hierarchy::ScopeControlType::eVcdUpscope));
}

Handle Writer::CreateVar(
	Hierarchy::VarType vartype, Hierarchy::VarDirection vardir,
	uint32_t len, const std::string_view name,
	Handle alias_handle
) {
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
	uint32_t len, const std::string_view name, Handle alias_handle, const std::string_view type,
	Hierarchy::SupplementalVarType svt, Hierarchy::SupplementalDataType sdt
) {
	(void)vartype; (void)vardir; (void)len; (void)name; (void)alias_handle; (void)type; (void)svt; (void)sdt;
	throw runtime_error("TODO");
	return 0;
}

void Writer::WriteHeader_() {
	StreamWriteHelper h(main_fst_file_);

	// Finalize header fields
	if (header_.date[0] == '\0') {
		// date is not set yet, set to the current date
		SetDate();
	}

	// Actual write
	h
	.Seek(streampos(0), std::ios_base::beg)
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

// AppendHierarchy_ and AppendGeometry_ shares a very similar structure
// But they are slightly different in the original C implementation...
void Writer::AppendGeometry_() {
	const std::string geometry_uncompressed_data = geometry_buffer_.str();
	if (geometry_uncompressed_data.empty()) {
		// skip the geometry block if there is no data
		return;
	}

	// compress geometry_buffer_ using zlib
	const uLong uncompressed_size = geometry_uncompressed_data.size();
	uLongf compressed_bound = compressBound(uncompressed_size);
	std::vector<char> geometry_compressed_data(compressed_bound);
	const auto z_status = compress2(
		reinterpret_cast<Bytef*>(geometry_compressed_data.data()),
		&compressed_bound,
		reinterpret_cast<const Bytef*>(geometry_uncompressed_data.data()),
		uncompressed_size,
		Z_BEST_COMPRESSION
	);
	if (z_status != Z_OK) {
		throw runtime_error("Failed to compress geometry data with zlib, error code: " + to_string(z_status));
	}

	auto SelectSmaller = [&]{
		pair<const char*, size_t> ret;
		if (compressed_bound < uncompressed_size) {
			ret.first = geometry_compressed_data.data();
			ret.second = compressed_bound;
		} else {
			ret.first = geometry_uncompressed_data.data();
			ret.second = uncompressed_size;
		}
		return ret;
	};
	const auto [selected_data, selected_size] = SelectSmaller();
	cout << "Geometry block: uncompressed size = " << uncompressed_size
	     << ", selected size = " << selected_size << endl;

	StreamWriteHelper h(main_fst_file_);
	h
	.Seek(0, std::ios_base::end)
	// 16 is for the uncompressed_size and header_.num_handles
	.WriteBlockHeader(BlockType::Geometry, selected_size + 16)
	.WriteUInt<uint64_t>(uncompressed_size)
	// I don't know why the original C implementation write num_handles again here
	// but we have to follow it
	.WriteUInt(header_.num_handles)
	.Write(selected_data, selected_size);
}

void Writer::AppendHierarchy_() {
	const std::string hierarchy_uncompressed_data = hierarchy_buffer_.str();
	if (hierarchy_uncompressed_data.empty()) {
		// skip the hierarchy block if there is no data
		return;
	}

	// compress hierarchy_buffer_ using LZ4.
	const int uncompressed_size = hierarchy_uncompressed_data.size();
	const int compressed_bound = LZ4_compressBound(uncompressed_size);
	std::vector<char> hierarchy_compressed_data(compressed_bound);
	const int compressed_size = LZ4_compress_default(
		hierarchy_uncompressed_data.data(),
		hierarchy_compressed_data.data(),
		uncompressed_size,
		compressed_bound
	);

	StreamWriteHelper h(main_fst_file_);
	h
	.Seek(0, std::ios_base::end)
	// +16 is for the uncompressed_size
	.WriteBlockHeader(BlockType::HierarchyLz4Compressed, compressed_size + 8)
	.WriteUInt<uint64_t>(uncompressed_size)
	.Write(hierarchy_compressed_data.data(), compressed_size);
}

} // namespace fst
