#pragma once
// direct include
// C system headers
// C++ standard library headers
#include <iostream>
#include <sstream>
#include <stdexcept>
// Other libraries' .h files.
// Your project's .h files.

#define CHECK_EQ(a, b) \
	if ((a) != (b)) { \
		std::ostringstream oss; \
		oss << "CHECK_EQ failed: " #a " != " #b << " (" << (a) << " vs. " << (b) << ")"; \
		const auto e = oss.str(); \
		std::cerr << e << std::endl; \
		throw std::runtime_error(e); \
	}
