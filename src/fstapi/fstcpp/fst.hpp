#pragma once
// direct include
// C system headers
// C++ standard library headers
#include <bit>
#include <cstdint>
#include <cstring>
#include <ctime>
#include <fstream>
#include <stdexcept>
#include <string>
// Other libraries' .h files.
// Your project's .h files.

namespace fst {

enum FileType : uint8_t {
	eVerilog = 0,
	eVhdl,
	eVerilogVhdl,
};

struct Header {
	uint64_t start_time = 0;
	uint64_t end_time = 0;
	int64_t timezero = 0;
	uint64_t writer_memory_use = 0;
	uint64_t num_scopes = 0;
	uint64_t num_hiearchy_vars = 0;
	uint64_t num_vars = 0;
	uint64_t num_wave_data_blocks = 0;
	std::endian real_endianness = std::endian::native;
	char writer[128] {};
	char date[26] {};
	FileType filetype = FileType::eVerilog;
	int8_t timescale = -9;
};

} // namespace fst
