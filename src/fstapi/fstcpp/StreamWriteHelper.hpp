#pragma once
// direct include
// C system headers
// C++ standard library headers
#include <bit>
#include <cstdint>
#include <iostream>
// Other libraries' .h files.
// Your project's .h files.
#include "fstcpp/fst_file.hpp"

namespace fst {

namespace platform {
// C++23 byteswap fallback for C++20 (not constexpr, using intrinsics)
template<typename U>
U byteswap(U u) {
	if constexpr (sizeof(U) == 8) {
		u = __builtin_bswap64(u);
	} else if constexpr (sizeof(U) == 4) {
		u = __builtin_bswap32(u);
	} else if constexpr (sizeof(U) == 2) {
		u = __builtin_bswap16(u);
	}
	return u;
}

} // namespace platform

struct StreamWriteHelper {
	std::ostream* os;

	StreamWriteHelper(std::ostream& os_) : os(&os_) {}
	StreamWriteHelper(std::ostream* os_) : os(os_) {}

	template<typename U>
	StreamWriteHelper& WriteUInt(U u) {
		if constexpr (std::endian::native == std::endian::little) {
			u = platform::byteswap(u);
		}
		os->write(reinterpret_cast<const char*>(&u), sizeof(u));
		return *this;
	}

	StreamWriteHelper& WriteBlockHeader(fst::BlockType block_type, uint64_t block_length) {
		return this
		->WriteUInt(static_cast<uint8_t>(block_type))
		.WriteUInt(block_length + 8); // The 8 is required by FST, which is the size of this uint64_t
	}

	template<typename F>
	StreamWriteHelper& WriteFloat(F f) {
		// Always write in native endianness
		os->write(reinterpret_cast<const char*>(&f), sizeof(f));
		return *this;
	}

	StreamWriteHelper& Write(char* ptr, size_t size) {
		os->write(ptr, size);
		return *this;
	}

	StreamWriteHelper& Seek(std::streampos pos, std::ios_base::seekdir dir) {
		os->seekp(pos, dir);
		return *this;
	}

	StreamWriteHelper& Fill(char fill_char, size_t size) {
		if (size > 32) {
			// optimize large fills
			constexpr unsigned kChunkSize = 16;
			char buf[kChunkSize];
			std::memset(buf, fill_char, kChunkSize);
			for (size_t i = 0; i < size / kChunkSize; ++i) {
				os->write(buf, kChunkSize);
			}
			size %= kChunkSize;
		}
		for (size_t i = 0; i < size; ++i) {
			os->put(fill_char);
		}
		return *this;
	}

};

} // namespace fst
