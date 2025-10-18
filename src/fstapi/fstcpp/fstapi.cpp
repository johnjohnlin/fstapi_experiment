// direct include
#include "gtkwave/fstapi.h"
#include "fstcpp/Writer.hpp"
// C system headers
// C++ standard library headers
#include <iostream>
#include <string>
// Other libraries' .h files.
// Your project's .h files.

using namespace std;

struct fstWriterContext {
	fst::Writer writer;
};

extern "C" {

// File open/close
fstWriterContext *fstWriterCreate(const char *name, int use_compressed_hier) {
	(void)use_compressed_hier;
	return new fstWriterContext(name);
}

void fstWriterClose(fstWriterContext *ctx) { delete ctx; }
void fstWriterFlushContext(fstWriterContext *ctx) { ctx->writer.Close(); }

// Header related
void fstWriterSetTimescale(fstWriterContext *ctx, int ts) {
}

void fstWriterSetTimescaleFromString(fstWriterContext *ctx, const char *s) {
}

void fstWriterSetTimezero(fstWriterContext *ctx, int64_t tim) {
}

void fstWriterSetUpscope(fstWriterContext *ctx) {
}

void fstWriterSetValueList(fstWriterContext *ctx, const char *vl) {
}

void fstWriterSetVersion(fstWriterContext *ctx, const char *vers) {
}

void fstWriterSetDate(fstWriterContext *ctx, const char *dat) {
}

// Hierarchy related

// Waveform related
fstEnumHandle fstWriterCreateEnumTable(
	fstWriterContext *ctx,
	const char *name,
	uint32_t elem_count,
	unsigned int min_valbits,
	const char **literal_arr,
	const char **val_arr
) {
	return 0;
}

fstHandle fstWriterCreateVar(
	fstWriterContext *ctx,
	enum fstVarType vt,
	enum fstVarDir vd,
	uint32_t len,
	const char *nam,
	fstHandle aliasHandle
) {
	return 0;
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
	return 0;
}

void fstWriterEmitDumpActive(fstWriterContext *ctx, int enable) {
}

void fstWriterEmitEnumTableRef(fstWriterContext *ctx, fstEnumHandle handle) {
}

void fstWriterEmitValueChange(fstWriterContext *ctx, fstHandle handle, const void *val) {
}

void fstWriterEmitValueChange32(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	uint32_t val
) {
}

void fstWriterEmitValueChange64(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	uint64_t val
) {
}

void fstWriterEmitValueChangeVec32(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	const uint32_t *val
) {
}

void fstWriterEmitValueChangeVec64(
	fstWriterContext *ctx,
	fstHandle handle,
	uint32_t bits,
	const uint64_t *val
) {
}

void fstWriterEmitVariableLengthValueChange(
	fstWriterContext *ctx,
	fstHandle handle,
	const void *val,
	uint32_t len
) {
}

void fstWriterEmitTimeChange(fstWriterContext *ctx, uint64_t tim) {
}

void fstWriterSetAttrBegin(
	fstWriterContext *ctx,
	enum fstAttrType attrtype,
	int subtype,
	const char *attrname,
	uint64_t arg
) {
}

void fstWriterSetAttrEnd(fstWriterContext *ctx) {
}

void fstWriterSetComment(fstWriterContext *ctx, const char *comm) {
}

void fstWriterSetDumpSizeLimit(fstWriterContext *ctx, uint64_t numbytes) {
}

void fstWriterSetEnvVar(fstWriterContext *ctx, const char *envvar) {
}

void fstWriterSetPackType(fstWriterContext *ctx, enum fstWriterPackType typ) {
}

void fstWriterSetScope(
	fstWriterContext *ctx,
	enum fstScopeType scopetype,
	const char *scopename,
	const char *scopecomp
) {
}

void fstWriterSetSourceInstantiationStem(
	fstWriterContext *ctx,
	const char *path,
	unsigned int line,
	unsigned int use_realpath
) {
}

void fstWriterSetSourceStem(
	fstWriterContext *ctx,
	const char *path,
	unsigned int line,
	unsigned int use_realpath
) {
}


static inline void NotImplementedWarning(const char* func_name) {
	std::cerr << string(func_name) + " is not implemented and ignored in fstcpp backend";
}

// Misc (Ignored API calls, raise warnings if used)
int fstWriterGetFseekFailed(fstWriterContext*) { NotImplementedWarning(__func__); return 0; }
int fstWriterGetFlushContextPending(fstWriterContext*) { NotImplementedWarning(__func__); return 0; }
void fstWriterSetRepackOnClose(fstWriterContext*, int) { NotImplementedWarning(__func__); }
void fstWriterSetParallelMode(fstWriterContext*, int) { NotImplementedWarning(__func__); }
void fstWriterSetFileType(fstWriterContext*, enum fstFileType) { NotImplementedWarning(__func__); }

} // extern "C"
