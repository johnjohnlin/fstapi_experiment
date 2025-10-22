// direct include
#include "gtkwave/fstapi.h"
// C system headers
// C++ standard library headers
#include <iostream>
#include <string>
#include <string_view>
#include <cstdlib>
// Other libraries' .h files.
// Your project's .h files.
#include "fstcpp/Writer.hpp"

using namespace std;

struct fstWriterContext {
	fst::Writer writer;
	fstWriterContext() = default;
	explicit fstWriterContext(const char* name) : writer(name ? std::string_view(name) : std::string_view{}) {}
};

extern "C" {

[[maybe_unused]]
static inline void NotImplementedWarning(const char* func_name) {
#ifndef FSTCPP_IGNORE_NO_EFFECT_API
	cerr
	<< string(func_name) + " is not implemented and ignored in fstcpp backend "
	"(#define FSTCPP_IGNORE_NO_EFFECT_API and re-compile to suppress this warning)" << endl;
#endif
}

[[maybe_unused]]
static inline void TODO(const char* func_name) {
	cerr << string(func_name) + " is a TODO" << endl;
	throw runtime_error("TODO");
}

// File open/close
fstWriterContext *fstWriterCreate(const char *name, int use_compressed_hier) {
	(void)use_compressed_hier;
	// allocate context which constructs writer via forwarding ctor
	return new fstWriterContext(name);
}

void fstWriterClose(fstWriterContext *ctx) {
	if (not ctx) return;
	delete ctx;
}

void fstWriterFlushContext(fstWriterContext *ctx) {
	if (not ctx) return;
	ctx->writer.Close();
}

// Header related
void fstWriterSetTimescale(fstWriterContext *ctx, int ts) {
	if (not ctx) return;
	ctx->writer.SetTimecale(static_cast<int8_t>(ts));
}

void fstWriterSetTimescaleFromString(fstWriterContext *ctx, const char *s) {
	if (not ctx or not s) return;
	// Just use the original parsing logic from fstapi.c
	int mat = 0;
	int seconds_exp = -9;
	int tv = atoi(s);
	const char *pnt = s;

	while (*pnt) {
		switch (*pnt) {
			case 'm':
				seconds_exp = -3;
				mat = 1;
				break;
			case 'u':
				seconds_exp = -6;
				mat = 1;
				break;
			case 'n':
				seconds_exp = -9;
				mat = 1;
				break;
			case 'p':
				seconds_exp = -12;
				mat = 1;
				break;
			case 'f':
				seconds_exp = -15;
				mat = 1;
				break;
			case 'a':
				seconds_exp = -18;
				mat = 1;
				break;
			case 'z':
				seconds_exp = -21;
				mat = 1;
				break;
			case 's':
				seconds_exp = 0;
				mat = 1;
				break;
			default:
				break;
		}

		if (mat)
			break;
		pnt++;
	}

	if (tv == 10) {
		seconds_exp++;
	} else if (tv == 100) {
		seconds_exp += 2;
	}

	fstWriterSetTimescale(ctx, seconds_exp);
}

void fstWriterSetTimezero(fstWriterContext *ctx, int64_t tim) {
	if (not ctx) return;
	ctx->writer.SetTimezero(tim);
}

void fstWriterSetVersion(fstWriterContext *ctx, const char *vers) {
	if (not ctx) return;
	std::string_view sv = vers ? std::string_view(vers) : std::string_view{};
	if (sv.empty()) return;
	ctx->writer.SetWriter(std::string(sv));
}

void fstWriterSetDate(fstWriterContext *ctx, const char *dat) {
	if (not ctx) return;
	std::string_view sv = dat ? std::string_view(dat) : std::string_view{};
	if (sv.empty()) return;
	ctx->writer.SetDate(std::string(sv));
}

// Hierarchy related
void fstWriterSetScope(
	fstWriterContext *ctx,
	enum fstScopeType scopetype,
	const char *scopename,
	const char *scopecomp
) {
	if (not ctx) return;
	std::string_view sn = scopename ? std::string_view(scopename) : std::string_view{};
	std::string_view sc = scopecomp ? std::string_view(scopecomp) : std::string_view{};
	ctx->writer.SetScope(static_cast<fst::Hierarchy::ScopeType>(scopetype), std::string(sn), std::string(sc));
}

void fstWriterSetUpscope(fstWriterContext *ctx) {
	if (not ctx) return;
	ctx->writer.Upscope();
}

fstHandle fstWriterCreateVar(
	fstWriterContext *ctx,
	enum fstVarType vt,
	enum fstVarDir vd,
	uint32_t len,
	const char *nam,
	fstHandle aliasHandle
) {
	if (not ctx) return 0;
	std::string_view n = nam ? std::string_view(nam) : std::string_view{};
	return ctx->writer.CreateVar(static_cast<fst::Hierarchy::VarType>(vt), static_cast<fst::Hierarchy::VarDirection>(vd), len, std::string(n), aliasHandle);
}

fstHandle fstWriterCreateVar2(
	fstWriterContext *ctx,
	enum fstVarType vt,
	enum fstVarDir vd,
	uint32_t len,
	const char *nam,
	fstHandle aliasHandle,
	const char *type,
	enum fstSupplementalVarType svt,
	enum fstSupplementalDataType sdt
) {
	(void)ctx; (void)vt; (void)vd; (void)len; (void)nam; (void)aliasHandle; (void)type; (void)svt; (void)sdt; TODO(__func__);
	return 0;
}

void fstWriterSetValueList(fstWriterContext *ctx, const char *vl) {
	(void)ctx; (void)vl; TODO(__func__);
}

fstEnumHandle fstWriterCreateEnumTable(
	fstWriterContext *ctx,
	const char *name,
	uint32_t elem_count,
	unsigned int min_valbits,
	const char **literal_arr,
	const char **val_arr
) {
	(void)ctx; (void)name; (void)elem_count; (void)min_valbits; (void)literal_arr; (void)val_arr; TODO(__func__);
	return 0;
}

void fstWriterSetAttrBegin(
	fstWriterContext *ctx,
	enum fstAttrType attrtype,
	int subtype,
	const char *attrname,
	uint64_t arg
) {
	(void)ctx; (void)attrtype; (void)subtype; (void)attrname; (void)arg; TODO(__func__);
}

void fstWriterSetAttrEnd(fstWriterContext *ctx) {
	(void)ctx; TODO(__func__);
}

void fstWriterSetComment(fstWriterContext *ctx, const char *comm) {
	(void)ctx; (void)comm; TODO(__func__);
}

void fstWriterSetEnvVar(fstWriterContext *ctx, const char *envvar) {
	(void)ctx; (void)envvar; TODO(__func__);
}

void fstWriterSetSourceInstantiationStem(
	fstWriterContext *ctx,
	const char *path,
	unsigned int line,
	unsigned int use_realpath
) {
	(void)ctx; (void)path; (void)line; (void)use_realpath; TODO(__func__);
}

void fstWriterSetSourceStem(
	fstWriterContext *ctx,
	const char *path,
	unsigned int line,
	unsigned int use_realpath
) {
	(void)ctx; (void)path; (void)line; (void)use_realpath; TODO(__func__);
}

void fstWriterEmitEnumTableRef(fstWriterContext *ctx, fstEnumHandle handle) {
	(void)ctx; (void)handle; TODO(__func__);
}

// Waveform related
void fstWriterEmitTimeChange(fstWriterContext *ctx, uint64_t tim) {
	if (not ctx) return;
	ctx->writer.EmitTimeChange(tim);
}

void fstWriterEmitDumpActive(fstWriterContext *ctx, int enable) {
	if (not ctx) return;
	ctx->writer.EmitDumpActive(enable != 0);
}

void fstWriterEmitValueChange32(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	uint32_t val
) {
	if (not ctx) return;
	ctx->writer.EmitValueChange(handle, bits, &val);
}

void fstWriterEmitValueChange64(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	uint64_t val
) {
	if (not ctx) return;
	ctx->writer.EmitValueChange(handle, bits, &val);
}

void fstWriterEmitValueChangeVec32(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	const uint32_t *val
) {
	if (not ctx) return;
	ctx->writer.EmitValueChange(handle, bits, val);
}

void fstWriterEmitValueChangeVec64(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	const uint64_t *val
) {
	if (not ctx) return;
	ctx->writer.EmitValueChange(handle, bits, val);
}

void fstWriterEmitValueChange(
	fstWriterContext *ctx,
	fstHandle handle,
	const void *val
) {
	(void)ctx; (void)handle; (void)val; TODO(__func__);
}

void fstWriterEmitVariableLengthValueChange(
	fstWriterContext *ctx,
	fstHandle handle,
	const void *val,
	uint32_t len
) {
	(void)ctx; (void)handle; (void)val; (void)len; TODO(__func__);
}

// Misc (Ignored API calls, raise warnings if used)
int fstWriterGetFlushContextPending(fstWriterContext*) { NotImplementedWarning(__func__); return 0; }
int fstWriterGetFseekFailed(fstWriterContext*) { NotImplementedWarning(__func__); return 0; }
void fstWriterSetDumpSizeLimit(fstWriterContext*, uint64_t) { NotImplementedWarning(__func__); }
void fstWriterSetFileType(fstWriterContext*, enum fstFileType) { NotImplementedWarning(__func__); }
void fstWriterSetParallelMode(fstWriterContext*, int) { NotImplementedWarning(__func__); }
void fstWriterSetRepackOnClose(fstWriterContext*, int) { NotImplementedWarning(__func__); }
void fstWriterSetPackType(fstWriterContext *, enum fstWriterPackType) { NotImplementedWarning(__func__); }

} // extern "C"
