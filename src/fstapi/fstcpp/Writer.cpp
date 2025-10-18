// direct include
#include "fstcpp/Writer.hpp"
// C system headers
// C++ standard library headers
// Other libraries' .h files.
// Your project's .h files.
#include "fstcpp/assertion.h"
#include "fstcpp/fst_file.hpp"
#include "fstcpp/StreamWriteHelper.hpp"

using namespace std;

namespace fst {

void Writer::Open(const char* name) {
	main_fst_file_.open(name, std::ios::binary);
}

void Writer::Close() {
	if (not main_fst_file_.is_open()) return;

	WriteHeader_();

	main_fst_file_.close();
}

void Writer::WriteHeader_() {
	StreamWriteHelper h(main_fst_file_);

	// Finalize header fields
	SetDateAuto();
	header_.writer_memory_use = 1;
	header_.num_scopes = 2;
	header_.num_hiearchy_vars = 3;
	header_.num_vars = 4;
	header_.num_wave_data_blocks = 5;

	// Actual write
	h
	.Seek(streampos(0), std::ios_base::beg)
	.WriteBlockHeader(BlockType::Header, HeaderInfo::total_size)
	.WriteUInt(header_.start_time)
	.WriteUInt(header_.end_time)
	.WriteFloat(HeaderInfo::kEndianessMagicIdentifier)
	.WriteUInt(header_.writer_memory_use)
	.WriteUInt(header_.num_scopes)
	.WriteUInt(header_.num_hiearchy_vars)
	.WriteUInt(header_.num_vars)
	.WriteUInt(header_.num_wave_data_blocks)
	.WriteUInt(header_.timescale)
	.Write(header_.writer, sizeof(header_.writer))
	.Write(header_.date, sizeof(header_.date))
	.Fill('\0', HeaderInfo::Size::reserved)
	.WriteUInt(static_cast<uint8_t>(header_.filetype))
	.WriteUInt(header_.timezero);

	CHECK_EQ(main_fst_file_.tellp(), HeaderInfo::total_size + kSharedBlockHeaderSize);
};

} // namespace fst
