/* Copyright (c) 2013-2021 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef M_SCRIPT_TYPES_H
#define M_SCRIPT_TYPES_H

#include <mgba-util/common.h>

CXX_GUARD_START

#include <mgba-util/macros.h>
#include <mgba-util/table.h>
#include <mgba-util/vector.h>

#define mSCRIPT_VALUE_UNREF -1
#define mSCRIPT_PARAMS_MAX 8
#define mSCRIPT_OVERLOADS_MAX 8

#define mSCRIPT_VALUE_DOC_FUNCTION(NAME) (&_mScriptDoc_ ## NAME)

#define mSCRIPT_TYPE_C_S8 int8_t
#define mSCRIPT_TYPE_C_U8 uint8_t
#define mSCRIPT_TYPE_C_S16 int16_t
#define mSCRIPT_TYPE_C_U16 uint16_t
#define mSCRIPT_TYPE_C_S32 int32_t
#define mSCRIPT_TYPE_C_U32 uint32_t
#define mSCRIPT_TYPE_C_F32 float
#define mSCRIPT_TYPE_C_S64 int64_t
#define mSCRIPT_TYPE_C_U64 uint64_t
#define mSCRIPT_TYPE_C_F64 double
#define mSCRIPT_TYPE_C_BOOL bool
#define mSCRIPT_TYPE_C_STR struct mScriptString*
#define mSCRIPT_TYPE_C_CHARP const char*
#define mSCRIPT_TYPE_C_PTR void*
#define mSCRIPT_TYPE_C_CPTR const void*
#define mSCRIPT_TYPE_C_LIST struct mScriptList*
#define mSCRIPT_TYPE_C_TABLE struct Table*
#define mSCRIPT_TYPE_C_WRAPPER struct mScriptValue*
#define mSCRIPT_TYPE_C_WEAKREF uint32_t
#define mSCRIPT_TYPE_C_NUL void*
#define mSCRIPT_TYPE_C_S(STRUCT) struct STRUCT*
#define mSCRIPT_TYPE_C_CS(STRUCT) const struct STRUCT*
#define mSCRIPT_TYPE_C_PS(X) void
#define mSCRIPT_TYPE_C_PCS(X) void
#define mSCRIPT_TYPE_C_WSTR struct mScriptValue*
#define mSCRIPT_TYPE_C_WLIST struct mScriptValue*
#define mSCRIPT_TYPE_C_WTABLE struct mScriptValue*
#define mSCRIPT_TYPE_C_W(X) struct mScriptValue*
#define mSCRIPT_TYPE_C_CW(X) const struct mScriptValue*

#define mSCRIPT_TYPE_FIELD_S8 s32
#define mSCRIPT_TYPE_FIELD_U8 s32
#define mSCRIPT_TYPE_FIELD_S16 s32
#define mSCRIPT_TYPE_FIELD_U16 s32
#define mSCRIPT_TYPE_FIELD_S32 s32
#define mSCRIPT_TYPE_FIELD_U32 u32
#define mSCRIPT_TYPE_FIELD_F32 f32
#define mSCRIPT_TYPE_FIELD_S64 s64
#define mSCRIPT_TYPE_FIELD_U64 u64
#define mSCRIPT_TYPE_FIELD_F64 f64
#define mSCRIPT_TYPE_FIELD_BOOL u32
#define mSCRIPT_TYPE_FIELD_STR string
#define mSCRIPT_TYPE_FIELD_CHARP copaque
#define mSCRIPT_TYPE_FIELD_PTR opaque
#define mSCRIPT_TYPE_FIELD_LIST list
#define mSCRIPT_TYPE_FIELD_TABLE table
#define mSCRIPT_TYPE_FIELD_WRAPPER opaque
#define mSCRIPT_TYPE_FIELD_WEAKREF u32
#define mSCRIPT_TYPE_FIELD_NUL opaque
#define mSCRIPT_TYPE_FIELD_S(STRUCT) opaque
#define mSCRIPT_TYPE_FIELD_CS(STRUCT) copaque
#define mSCRIPT_TYPE_FIELD_PS(STRUCT) opaque
#define mSCRIPT_TYPE_FIELD_PCS(STRUCT) copaque
#define mSCRIPT_TYPE_FIELD_WSTR opaque
#define mSCRIPT_TYPE_FIELD_WLIST opaque
#define mSCRIPT_TYPE_FIELD_WTABLE opaque
#define mSCRIPT_TYPE_FIELD_W(TYPE) opaque
#define mSCRIPT_TYPE_FIELD_CW(TYPE) opaque

#define mSCRIPT_TYPE_MS_VOID (&mSTVoid)
#define mSCRIPT_TYPE_MS_S8 (&mSTSInt8)
#define mSCRIPT_TYPE_MS_U8 (&mSTUInt8)
#define mSCRIPT_TYPE_MS_S16 (&mSTSInt16)
#define mSCRIPT_TYPE_MS_U16 (&mSTUInt16)
#define mSCRIPT_TYPE_MS_S32 (&mSTSInt32)
#define mSCRIPT_TYPE_MS_U32 (&mSTUInt32)
#define mSCRIPT_TYPE_MS_F32 (&mSTFloat32)
#define mSCRIPT_TYPE_MS_S64 (&mSTSInt64)
#define mSCRIPT_TYPE_MS_U64 (&mSTUInt64)
#define mSCRIPT_TYPE_MS_F64 (&mSTFloat64)
#define mSCRIPT_TYPE_MS_BOOL (&mSTBool)
#define mSCRIPT_TYPE_MS_STR (&mSTString)
#define mSCRIPT_TYPE_MS_CHARP (&mSTCharPtr)
#define mSCRIPT_TYPE_MS_LIST (&mSTList)
#define mSCRIPT_TYPE_MS_TABLE (&mSTTable)
#define mSCRIPT_TYPE_MS_WRAPPER (&mSTWrapper)
#define mSCRIPT_TYPE_MS_WEAKREF (&mSTWeakref)
#define mSCRIPT_TYPE_MS_NUL mSCRIPT_TYPE_MS_VOID
#define mSCRIPT_TYPE_MS_S(STRUCT) (&mSTStruct_ ## STRUCT)
#define mSCRIPT_TYPE_MS_CS(STRUCT) (&mSTStructConst_ ## STRUCT)
#define mSCRIPT_TYPE_MS_PS(STRUCT) (&mSTStructPtr_ ## STRUCT)
#define mSCRIPT_TYPE_MS_PCS(STRUCT) (&mSTStructPtrConst_ ## STRUCT)
#define mSCRIPT_TYPE_MS_WSTR (&mSTStringWrapper)
#define mSCRIPT_TYPE_MS_WLIST (&mSTListWrapper)
#define mSCRIPT_TYPE_MS_WTABLE (&mSTTableWrapper)
#define mSCRIPT_TYPE_MS_W(TYPE) (&mSTWrapper_ ## TYPE)
#define mSCRIPT_TYPE_MS_CW(TYPE) (&mSTWrapperConst_ ## TYPE)
#define mSCRIPT_TYPE_MS_DS(STRUCT) (&mSTStruct_doc_ ## STRUCT)

#define mSCRIPT_TYPE_CMP_GENERIC(TYPE, V) (TYPE == (V)->type)
#define mSCRIPT_TYPE_CMP_U8(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_U8, V)
#define mSCRIPT_TYPE_CMP_S8(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_S8, V)
#define mSCRIPT_TYPE_CMP_U16(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_U16, V)
#define mSCRIPT_TYPE_CMP_S16(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_S16, V)
#define mSCRIPT_TYPE_CMP_U32(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_U32, V)
#define mSCRIPT_TYPE_CMP_S32(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_S32, V)
#define mSCRIPT_TYPE_CMP_F32(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_F32, V)
#define mSCRIPT_TYPE_CMP_U64(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_U64, V)
#define mSCRIPT_TYPE_CMP_S64(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_S64, V)
#define mSCRIPT_TYPE_CMP_F64(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_F64, V)
#define mSCRIPT_TYPE_CMP_BOOL(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_BOOL, V)
#define mSCRIPT_TYPE_CMP_STR(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_STR, V)
#define mSCRIPT_TYPE_CMP_CHARP(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_CHARP, V)
#define mSCRIPT_TYPE_CMP_LIST(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_LIST, V)
#define mSCRIPT_TYPE_CMP_TABLE(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_TABLE, V)
#define mSCRIPT_TYPE_CMP_PTR(V) ((V)->type->base >= mSCRIPT_TYPE_OPAQUE)
#define mSCRIPT_TYPE_CMP_WRAPPER(V) (true)
#define mSCRIPT_TYPE_CMP_NUL(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_VOID, V)
#define mSCRIPT_TYPE_CMP_S(STRUCT) mSCRIPT_TYPE_MS_S(STRUCT)->name == _mSCRIPT_FIELD_NAME
#define mSCRIPT_TYPE_CMP_CS(STRUCT) mSCRIPT_TYPE_MS_CS(STRUCT)->name == _mSCRIPT_FIELD_NAME
#define mSCRIPT_TYPE_CMP_W(STRUCT) (false) _mVOID
#define mSCRIPT_TYPE_CMP_WSTR(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_WSTR, V)
#define mSCRIPT_TYPE_CMP_WLIST(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_WLIST, V)
#define mSCRIPT_TYPE_CMP_WTABLE(V) mSCRIPT_TYPE_CMP_GENERIC(mSCRIPT_TYPE_MS_WTABLE, V)
#define mSCRIPT_TYPE_CMP(TYPE, V) \
	((mSCRIPT_TYPE_CMP_ ## TYPE(V)) || ((V) && (V)->type->base == mSCRIPT_TYPE_WRAPPER && mSCRIPT_WRAPPER_CMP_ ## TYPE(V)))

#define mSCRIPT_WRAPPER_CMP_U8(V) (false)
#define mSCRIPT_WRAPPER_CMP_S8(V) (false)
#define mSCRIPT_WRAPPER_CMP_U16(V) (false)
#define mSCRIPT_WRAPPER_CMP_S16(V) (false)
#define mSCRIPT_WRAPPER_CMP_U32(V) (false)
#define mSCRIPT_WRAPPER_CMP_S32(V) (false)
#define mSCRIPT_WRAPPER_CMP_F32(V) (false)
#define mSCRIPT_WRAPPER_CMP_U64(V) (false)
#define mSCRIPT_WRAPPER_CMP_S64(V) (false)
#define mSCRIPT_WRAPPER_CMP_F64(V) (false)
#define mSCRIPT_WRAPPER_CMP_BOOL(V) (false)
#define mSCRIPT_WRAPPER_CMP_STR(V) (false)
#define mSCRIPT_WRAPPER_CMP_CHARP(V) (false)
#define mSCRIPT_WRAPPER_CMP_LIST(V) (false)
#define mSCRIPT_WRAPPER_CMP_TABLE(V) (false)
#define mSCRIPT_WRAPPER_CMP_PTR(V) (false)
#define mSCRIPT_WRAPPER_CMP_WRAPPER(V) (false)
#define mSCRIPT_WRAPPER_CMP_NUL(V) (false)
#define mSCRIPT_WRAPPER_CMP_S(STRUCT) (false) _mVOID
#define mSCRIPT_WRAPPER_CMP_CS(STRUCT) (false) _mVOID
#define mSCRIPT_WRAPPER_CMP_W(STRUCT) mSCRIPT_TYPE_MS_S(STRUCT)->name == _mSCRIPT_WRAPPED_FIELD_NAME
#define mSCRIPT_WRAPPER_CMP_WSTR(V) (false)
#define mSCRIPT_WRAPPER_CMP_WLIST(V) (false)
#define mSCRIPT_WRAPPER_CMP_WTABLE(V) (false)

enum mScriptTypeBase {
	mSCRIPT_TYPE_VOID = 0,
	mSCRIPT_TYPE_SINT,
	mSCRIPT_TYPE_UINT,
	mSCRIPT_TYPE_FLOAT,
	mSCRIPT_TYPE_STRING,
	mSCRIPT_TYPE_FUNCTION,
	mSCRIPT_TYPE_OPAQUE,
	mSCRIPT_TYPE_OBJECT,
	mSCRIPT_TYPE_LIST,
	mSCRIPT_TYPE_TABLE,
	mSCRIPT_TYPE_WRAPPER,
	mSCRIPT_TYPE_WEAKREF,
};

enum mScriptClassInitType {
	mSCRIPT_CLASS_INIT_END = 0,
	mSCRIPT_CLASS_INIT_CLASS_DOCSTRING,
	mSCRIPT_CLASS_INIT_DOCSTRING,
	mSCRIPT_CLASS_INIT_INSTANCE_MEMBER,
	mSCRIPT_CLASS_INIT_INHERIT,
	mSCRIPT_CLASS_INIT_CAST_TO_MEMBER,
	mSCRIPT_CLASS_INIT_INIT,
	mSCRIPT_CLASS_INIT_DEINIT,
	mSCRIPT_CLASS_INIT_GET,
	mSCRIPT_CLASS_INIT_SET,
	mSCRIPT_CLASS_INIT_INTERNAL,
};

enum {
	mSCRIPT_VALUE_FLAG_FREE_BUFFER = 1,
	mSCRIPT_VALUE_FLAG_DEINIT = 2,
};

struct mScriptType;
extern const struct mScriptType mSTVoid;
extern const struct mScriptType mSTSInt8;
extern const struct mScriptType mSTUInt8;
extern const struct mScriptType mSTSInt16;
extern const struct mScriptType mSTUInt16;
extern const struct mScriptType mSTSInt32;
extern const struct mScriptType mSTUInt32;
extern const struct mScriptType mSTFloat32;
extern const struct mScriptType mSTSInt64;
extern const struct mScriptType mSTUInt64;
extern const struct mScriptType mSTFloat64;
extern const struct mScriptType mSTBool;
extern const struct mScriptType mSTString;
extern const struct mScriptType mSTCharPtr;
extern const struct mScriptType mSTList;
extern const struct mScriptType mSTTable;
extern const struct mScriptType mSTWrapper;
extern const struct mScriptType mSTWeakref;
extern const struct mScriptType mSTStringWrapper;
extern const struct mScriptType mSTListWrapper;
extern const struct mScriptType mSTTableWrapper;

extern struct mScriptValue mScriptValueNull;

struct mScriptType;
struct mScriptValue {
	const struct mScriptType* type;
	int refs;
	uint32_t flags;
	union {
		int32_t s32;
		uint32_t u32;
		float f32;
		int64_t s64;
		uint64_t u64;
		double f64;
		void* opaque;
		const void* copaque;
		struct mScriptString* string;
		struct Table* table;
		struct mScriptList* list;
		struct mScriptValue* wrapped;
	} value;
};

struct mScriptTypeTuple {
	size_t count;
	const struct mScriptType* entries[mSCRIPT_PARAMS_MAX];
	const char* names[mSCRIPT_PARAMS_MAX];
	const struct mScriptValue* defaults;
	bool variable;
};

struct mScriptTypeFunction {
	struct mScriptTypeTuple parameters;
	struct mScriptTypeTuple returnType;
	// TODO: kwargs
};

struct mScriptClassMember {
	const char* name;
	const char* docstring;
	const struct mScriptType* type;
	const struct mScriptFunctionOverload* overloads;
	size_t offset;
	bool readonly;
};

struct mScriptClassCastMember {
	const struct mScriptType* type;
	const char* member;
};

struct mScriptClassInitDetails {
	enum mScriptClassInitType type;
	union {
		const char* comment;
		const struct mScriptType* parent;
		struct mScriptClassMember member;
		struct mScriptClassCastMember castMember;
		const struct mScriptFunctionOverload* overload;
	} info;
};

struct mScriptTypeClass {
	bool init;
	const struct mScriptClassInitDetails* details;
	const struct mScriptType* parent;
	const char* docstring;
	bool internal;
	struct Table instanceMembers;
	struct Table castToMembers;
	struct Table setters;
	struct mScriptClassMember* alloc; // TODO
	struct mScriptClassMember* free;
	struct mScriptClassMember* get;
};

struct mScriptType {
	enum mScriptTypeBase base : 8;
	bool isConst;

	size_t size;
	const char* name;
	union {
		struct mScriptTypeTuple tuple;
		struct mScriptTypeFunction function;
		struct mScriptTypeClass* cls;
		const struct mScriptType* type;
		void* opaque;
	} details;
	const struct mScriptType* constType;
	void (*alloc)(struct mScriptValue*);
	void (*free)(struct mScriptValue*);
	uint32_t (*hash)(const struct mScriptValue*);
	bool (*equal)(const struct mScriptValue*, const struct mScriptValue*);
	bool (*cast)(const struct mScriptValue*, const struct mScriptType*, struct mScriptValue*);
};

DECLARE_VECTOR(mScriptList, struct mScriptValue)

struct mScriptString {
	size_t length; // Size of the string in code points
	size_t size; // Size of the buffer in bytes, excluding NULL byte terminator
	char* buffer; // UTF-8 representation of the string
};

struct mScriptFrame {
	struct mScriptList stack;
	// TODO: Exception/failure codes
};

struct mScriptFunction {
	bool (*call)(struct mScriptFrame*, void* context);
	void* context;
};

struct mScriptFunctionOverload {
	const struct mScriptType* type;
	const struct mScriptFunction* function;
};

struct mScriptValue* mScriptValueAlloc(const struct mScriptType* type);
void mScriptValueRef(struct mScriptValue* val);
void mScriptValueDeref(struct mScriptValue* val);

void mScriptValueWrap(struct mScriptValue* val, struct mScriptValue* out);
struct mScriptValue* mScriptValueUnwrap(struct mScriptValue* val);
const struct mScriptValue* mScriptValueUnwrapConst(const struct mScriptValue* val);

void mScriptValueFollowPointer(struct mScriptValue* ptr, struct mScriptValue* out);

struct mScriptValue* mScriptStringCreateEmpty(size_t size);
struct mScriptValue* mScriptStringCreateFromBytes(const void* string, size_t size);
struct mScriptValue* mScriptStringCreateFromUTF8(const char* string);
struct mScriptValue* mScriptStringCreateFromASCII(const char* string);
struct mScriptValue* mScriptValueCreateFromUInt(uint32_t value);
struct mScriptValue* mScriptValueCreateFromSInt(int32_t value);

bool mScriptTableInsert(struct mScriptValue* table, struct mScriptValue* key, struct mScriptValue* value);
bool mScriptTableRemove(struct mScriptValue* table, struct mScriptValue* key);
struct mScriptValue* mScriptTableLookup(struct mScriptValue* table, struct mScriptValue* key);
bool mScriptTableClear(struct mScriptValue* table);
size_t mScriptTableSize(struct mScriptValue* table);
bool mScriptTableIteratorStart(struct mScriptValue* table, struct TableIterator*);
bool mScriptTableIteratorNext(struct mScriptValue* table, struct TableIterator*);
struct mScriptValue* mScriptTableIteratorGetKey(struct mScriptValue* table, struct TableIterator*);
struct mScriptValue* mScriptTableIteratorGetValue(struct mScriptValue* table, struct TableIterator*);
bool mScriptTableIteratorLookup(struct mScriptValue* table, struct TableIterator*, struct mScriptValue* key);

void mScriptFrameInit(struct mScriptFrame* frame);
void mScriptFrameDeinit(struct mScriptFrame* frame);

struct mScriptValue* mScriptLambdaCreate0(struct mScriptValue* fn, struct mScriptList* args);

void mScriptClassInit(struct mScriptTypeClass* cls);
void mScriptClassDeinit(struct mScriptTypeClass* cls);

bool mScriptObjectGet(struct mScriptValue* obj, const char* member, struct mScriptValue*);
bool mScriptObjectGetConst(const struct mScriptValue* obj, const char* member, struct mScriptValue*);
bool mScriptObjectSet(struct mScriptValue* obj, const char* member, struct mScriptValue*);
bool mScriptObjectCast(const struct mScriptValue* input, const struct mScriptType* type, struct mScriptValue* output) ;
void mScriptObjectFree(struct mScriptValue* obj);
struct mScriptValue* mScriptObjectBindLambda(struct mScriptValue* obj, const char* member, struct mScriptList* args);

bool mScriptPopS32(struct mScriptList* list, int32_t* out);
bool mScriptPopU32(struct mScriptList* list, uint32_t* out);
bool mScriptPopF32(struct mScriptList* list, float* out);
bool mScriptPopS64(struct mScriptList* list, int64_t* out);
bool mScriptPopU64(struct mScriptList* list, uint64_t* out);
bool mScriptPopF64(struct mScriptList* list, double* out);
bool mScriptPopBool(struct mScriptList* list, bool* out);
bool mScriptPopPointer(struct mScriptList* list, void** out);

bool mScriptCast(const struct mScriptType* type, const struct mScriptValue* input, struct mScriptValue* output);
bool mScriptCoerceFrame(const struct mScriptTypeTuple* types, const struct mScriptList* input, struct mScriptList* output);
const struct mScriptFunctionOverload* mScriptFunctionFindOverload(const struct mScriptFunctionOverload* overloads, struct mScriptList* frame);

CXX_GUARD_END

#endif
