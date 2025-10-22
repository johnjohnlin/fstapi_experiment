#pragma once
// direct include
// C system headers
// C++ standard library headers
#include <iostream>
#include <sstream>
#include <stdexcept>
// Other libraries' .h files.
// Your project's .h files.

#define CHECK(a) \
	if (!(a)) [[unlikely]] { \
		std::ostringstream oss; \
		oss << "CHECK failed: " #a; \
		const auto e = oss.str(); \
		std::cerr << e << std::endl; \
		throw std::runtime_error(e); \
	}

#define CHECK_EQ(a, b) \
	if ((a) != (b)) [[unlikely]] { \
		std::ostringstream oss; \
		oss << "CHECK_EQ failed: " #a " != " #b << " (" << (a) << " vs. " << (b) << ")"; \
		const auto e = oss.str(); \
		std::cerr << e << std::endl; \
		throw std::runtime_error(e); \
	}

#define CHECK_GT(a, b) \
	if ((a) <= (b)) [[unlikely]] { \
		std::ostringstream oss; \
		oss << "CHECK_GT failed: " #a " <= " #b << " (" << (a) << " vs. " << (b) << ")"; \
		const auto e = oss.str(); \
		std::cerr << e << std::endl; \
		throw std::runtime_error(e); \
	}


// We turn on all DCHECKs to CHECKs temporarily for better safety.
#if 1
#  define DCHECK(a) CHECK(a)
#  define DCHECK_EQ(a, b) CHECK_EQ(a, b)
#  define DCHECK_GT(a, b) CHECK_GT(a, b)
#else
#  define DCHECK(a)
#  define DCHECK_EQ(a, b)
#  define DCHECK_GT(a, b)
#endif
