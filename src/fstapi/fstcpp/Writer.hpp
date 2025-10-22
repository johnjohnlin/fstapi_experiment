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
#include <memory>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
// Other libraries' .h files.
// Your project's .h files.
#include "fstcpp/assertion.h"

namespace fst {

class Writer;

namespace detail {

// We define WriterWaveData here for better code inlining, no forward declaration
struct BlackoutData {
	std::ostringstream buffer;
	uint64_t previous_timestamp = 0;
	uint64_t count = 0;

	void EmitDumpActive(uint64_t current_timestamp, bool enable);
};

// We define WriterWaveData here for better code inlining, no forward declaration
struct WriterWaveData {
	std::ostringstream timestamp_data;
	uint64_t first_timestamp;
	uint64_t current_timestamp;
	uint64_t timestamp_index;
	uint64_t memory_usage;

	bool IsResetState() { return timestamp_index != uint64_t(-1); }
	void Reset() {
		first_timestamp = uint64_t(-1);
		timestamp_index = uint64_t(-1);
		current_timestamp = 0;
		timestamp_data.str("");
	}
	void AppendTimestamp(uint64_t ts);
	WriterWaveData() { Reset(); }
};

} // namespace detail

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

	// Waveform API
	void EmitTimeChange(uint64_t tim);
	void EmitDumpActive(bool enable);
	void EmitValueChange(Handle handle, uint32_t bits, const uint32_t *val);
	void EmitValueChange(Handle handle, uint32_t bits, const uint64_t *val);
private:
	// File/memory buffers
	// 1. For hierarchy and geometry, we do not keep the data structure, instead we just
	//    serialize them into buffers, and compress+write them at the end of file.
	// 2. For header, we keep the data structure in memory since it is quite small
	// 3. For wave data, we keep a complicated data structure in memory, and flush them to file when necessary
	std::ofstream main_fst_file_;
	std::ostringstream hierarchy_buffer_;
	std::ostringstream geometry_buffer_;
	Header header_{};
	detail::BlackoutData blackout_data_;
	detail::WriterWaveData wave_data_;
	bool hierearchy_finalized_ = false;

	// internal helpers
	void WriteHeader_(); // Always write header at the beginning of stream
	void AppendGeometry_(); // Always append hierarchy at the end of stream
	void AppendHierarchy_(); // Always append hierarchy at the end of stream
	void AppendBlackout_(); // Always append hierarchy at the end of stream
	void FlushWaveData_InitialBits_();
	void FlushWaveData_ValudChanges_();
	void FlushWaveData_Positinos_();
	void FlushWaveData_Timestamps_();
	void FlushWaveData_(bool force_flush); // Flush to main_fst_file_ directly (offseted by Header, whose space is reserved in constructor)
	void FinalizeHierarchy_();
};

} // namespace fst
