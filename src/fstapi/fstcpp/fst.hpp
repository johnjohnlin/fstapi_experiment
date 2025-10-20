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

typedef uint32_t Handle;

enum FileType : uint8_t {
	eVerilog = 0,
	eVhdl,
	eVerilogVhdl,
};

struct Hierarchy {
	enum ScopeType : uint8_t {
		eVcdModule = 0,
		eVcdTask = 1,
		eVcdFunction = 2,
		eVcdBegin = 3,
		eVcdFork = 4,
		eVcdGenerate = 5,
		eVcdStruct = 6,
		eVcdUnion = 7,
		eVcdClass = 8,
		eVcdInterface = 9,
		eVcdPackage = 10,
		eVcdprogram = 11,
		eVhdlArchitecture = 12,
		eVhdlProcedure = 13,
		eVhdlFunction = 14,
		eVhdlRecord = 15,
		eVhdlProcess = 16,
		eVhdlBlock = 17,
		eVhdlForGenerate = 18,
		eVhdlIfGenerate = 19,
		eVhdlGenerate = 20,
		eVhdlPackage = 21,
	};

	enum ScopeControlType : uint8_t {
		eGenAttrbegin = 252,
		eGenAttrend = 253,
		eVcdScope = 254,
		eVcdUpscope = 255,
	};

	enum VarType : uint8_t {
		eVcdEvent = 0,
		eVcdInteger = 1,
		eVcdParameter = 2,
		eVcdReal = 3,
		eVcdReal_parameter = 4,
		eVcdReg = 5,
		eVcdSupply0 = 6,
		eVcdSupply1 = 7,
		eVcdTime = 8,
		eVcdTri = 9,
		eVcdTriand = 10,
		eVcdTrior = 11,
		eVcdTrireg = 12,
		eVcdTri0 = 13,
		eVcdTri1 = 14,
		eVcdWand = 15,
		eVcdWire = 16,
		eVcdWor = 17,
		eVcdPort = 18,
		eVcdSparray = 19,
		eVcdRealtime = 20,
		eGenString = 21,
		eSvBit = 22,
		eSvLogic = 23,
		eSvInt = 24,
		eSvShortint = 25,
		eSvLongint = 26,
		eSvByte = 27,
		eSvEnum = 28,
		eSvShortreal = 29,
	};

	enum VarDirection : uint8_t {
	};

	enum SupplementalVarType : uint8_t {
	};

	enum SupplementalDataType : uint8_t {
	};
};

struct Header {
	uint64_t start_time = 0;
	uint64_t end_time = 0;
	int64_t timezero = 0;
	uint64_t writer_memory_use = 0;
	uint64_t num_scopes = 0;
	uint64_t num_vars = 0; // #CreateVar calls, including aliases
	uint64_t num_handles = 0; // #unique handles, excluding aliases, shall be <= num_vars
	uint64_t num_wave_data_blocks = 0;
	std::endian real_endianness = std::endian::native;
	char writer[128] {};
	char date[26] {};
	FileType filetype = FileType::eVerilog;
	int8_t timescale = -9;
};

} // namespace fst
