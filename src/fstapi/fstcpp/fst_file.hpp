#pragma once
// direct include
// C system headers
// C++ standard library headers
#include <cstdint>
// Other libraries' .h files.
// Your project's .h files.

namespace fst {

enum class BlockType : uint8_t {
	Header = 0,
	WaveDataVersion1 = 1, // not implemented
	Blackout = 2,
	Geometry = 3,
	HierarchyGzCompressed = 4, // not implemented
	WaveDataVersion2 = 5, // not implemented
	HierarchyLz4Compressed = 6,
	HierarchyLz4CompressedTwice = 7, // not implemented
	WaveDataVersion3 = 8,

	ZWrapper = 254, // not implemented
	Skip = 255 // not implemented
};

constexpr unsigned kSharedBlockHeaderSize = 1 /* BlockType */ + 8 /* size (u64) */;

struct HeaderInfo {
	struct Size {
		static constexpr unsigned start_time = 0;
		static constexpr unsigned end_time = 8;
		static constexpr unsigned real_endianness = 8;
		static constexpr unsigned writer_memory_use = 8;
		static constexpr unsigned num_scopes = 8;
		static constexpr unsigned num_vars = 8;
		static constexpr unsigned num_handles = 8;
		static constexpr unsigned num_wave_data_blocks = 8;
		static constexpr unsigned timescale = 1;
		static constexpr unsigned writer = 128;
		static constexpr unsigned date = 26;
		static constexpr unsigned reserved = 93;
		static constexpr unsigned filetype = 1;
		static constexpr unsigned timezero = 8;
	};
	struct Offset {
		static constexpr unsigned start_time = 0;
		static constexpr unsigned end_time = start_time + Size::end_time;
		static constexpr unsigned real_endianness = end_time + Size::real_endianness;
		static constexpr unsigned writer_memory_use = real_endianness + Size::writer_memory_use;
		static constexpr unsigned num_scopes = writer_memory_use + Size::num_scopes;
		static constexpr unsigned num_vars = num_scopes + Size::num_vars;
		static constexpr unsigned num_handles = num_vars + Size::num_vars;
		static constexpr unsigned num_wave_data_blocks = num_handles + Size::num_handles;
		static constexpr unsigned timescale = num_wave_data_blocks + Size::num_wave_data_blocks;
		static constexpr unsigned writer = timescale + Size::timescale;
		static constexpr unsigned date = writer + Size::writer;
		static constexpr unsigned reserved = date + Size::date;
		static constexpr unsigned filetype = reserved + Size::reserved;
		static constexpr unsigned timezero = filetype + Size::filetype;
	};
	static constexpr unsigned total_size = Offset::timezero + Size::timezero;
	static constexpr double kEndianessMagicIdentifier = 2.7182818284590452354;
	static_assert(total_size == 321);
};

} // namespace fst
