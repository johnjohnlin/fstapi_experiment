#pragma once
// direct include
#include "fstcpp/fst.hpp"
// C system headers
// C++ standard library headers
#include <algorithm>
#include <cstdint>
#include <cstring>
#include <ctime>
#include <fstream>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
// Other libraries' .h files.
// Your project's .h files.
#include "fstcpp/assertion.h"

namespace fst {

class Writer {
public:
	Writer() {}
	Writer(const std::string_view name) { Open(name); }
	~Writer() { Close(); }

	Writer(const Writer&) = delete;
	Writer(Writer&&) = delete;
	Writer& operator=(const Writer&) = delete;
	Writer& operator=(Writer&&) = delete;

	// File control
	void Open(const std::string_view name);
	inline void Open(const std::string& name) { Open(std::string_view(name)); }
	void Close();

	// Header manipulation
	const Header& GetHeader() const;
	void SetTimecale(int8_t timescale) { header_.timescale = timescale; }
	void SetWriter(const std::string_view writer) {
		const auto len = std::min(writer.size(), sizeof(header_.writer));
		std::copy_n(writer.data(), len, header_.writer);
		if (len != sizeof(header_.writer)) {
			header_.writer[len] = '\0';
		}
	}
	inline void SetWriter(const std::string& writer) { SetWriter(std::string_view(writer)); }

	void SetDate(const std::string_view date_str) {
		const auto len = date_str.size();
		CHECK_EQ(len, sizeof(header_.date)-1);
		std::copy_n(date_str.data(), len, header_.date);
		header_.date[len] = '\0';
	}
	inline void SetDate(const std::string& date_str) { SetDate(std::string_view(date_str)); }
	void SetDate(const std::tm* d) {
		SetDate(std::string_view(std::asctime(d)));
	}
	void SetDate() {
		// set date to now
		std::time_t t = std::time(nullptr);
		SetDate(std::localtime(&t));
	}
	void SetTimezero(int64_t timezero) { header_.timezero = timezero; }

	// Hierarchy / variable API
	void SetScope(Hierarchy::ScopeType scopetype, const std::string_view scopename, const std::string_view scopecomp);
	inline void SetScope(Hierarchy::ScopeType scopetype, const std::string& scopename, const std::string& scopecomp) { SetScope(scopetype, std::string_view(scopename), std::string_view(scopecomp)); }

	void Upscope();

	Handle CreateVar(
		Hierarchy::VarType vartype, Hierarchy::VarDirection vardir,
		uint32_t len, const std::string_view name,
		uint32_t alias_handle
	);
	inline Handle CreateVar(
		Hierarchy::VarType vartype, Hierarchy::VarDirection vardir,
		uint32_t len, const std::string& name,
		uint32_t alias_handle
	) { return CreateVar(vartype, vardir, len, std::string_view(name), alias_handle); }

	Handle CreateVar2(
		Hierarchy::VarType vartype, Hierarchy::VarDirection vardir,
		uint32_t len, const std::string_view name, uint32_t alias_handle, const std::string_view type,
		Hierarchy::SupplementalVarType svt, Hierarchy::SupplementalDataType sdt
	);
	inline Handle CreateVar2(
		Hierarchy::VarType vartype, Hierarchy::VarDirection vardir,
		uint32_t len, const std::string& name, uint32_t alias_handle, const std::string& type,
		Hierarchy::SupplementalVarType svt, Hierarchy::SupplementalDataType sdt
	) { return CreateVar2(vartype, vardir, len, std::string_view(name), alias_handle, std::string_view(type), svt, sdt); }

private:
	// file/memory buffers
	std::ofstream main_fst_file_;
	std::ostringstream hierarchy_buffer_;
	std::ostringstream geometry_buffer_;

	// Header
	Header header_{};

	// internal helpers
	void WriteHeader_(); // Always write header at the beginning of stream
	void AppendGeometry_(); // Always append hierarchy at the end of stream
	void AppendHierarchy_(); // Always append hierarchy at the end of stream
};

} // namespace fst
