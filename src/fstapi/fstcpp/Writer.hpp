#pragma once
// direct include
#include "fstcpp/fst.hpp"
// C system headers
#include <cstdint>
#include <cstring>
#include <ctime>
// C++ standard library headers
#include <fstream>
// Other libraries' .h files.
// Your project's .h files.

namespace fst {

class Writer {
	Header header_;
	std::ofstream main_fst_file_;

	void WriteHeader_();

public:
	// File open/close
	void Open(const char* name);
	void Close();

	Writer(const char* name) { Open(name); }
	Writer() {}
	~Writer() { Close(); }

	Writer(const Writer&) = delete;
	Writer(Writer&&) = delete;
	Writer& operator=(const Writer&) = delete;
	Writer& operator=(Writer&&) = delete;


	// Manipulate header
	const Header& GetHeader() const {
		return header_;
	}

	void SetTimecale(int8_t timescale) {
		header_.timescale = timescale;
	}

	void SetWriter(const char* writer) {
		std::strncpy(header_.writer, writer, sizeof(header_.writer));
	}

	void SetDate(const std::tm* d) {
		std::strncpy(header_.date, std::asctime(d), sizeof(header_.date));
	}

	void SetDateAuto() {
		if (header_.date[0] != '\0') return;
		std::time_t t = std::time(nullptr);
		std::tm* now = std::localtime(&t);
		SetDate(now);
	}

	void SetFiletype(FileType filetype) {
		header_.filetype = filetype;
	}

	void SetTimezero(int64_t timezero) {
		header_.timezero = timezero;
	}
};

} // namespace fst
