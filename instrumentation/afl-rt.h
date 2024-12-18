#pragma once
#ifndef _NO_IJON_IN_ASM
#if defined(__cplusplus)  
extern "C" {
#endif

typedef __INT8_TYPE__  ijon_i8_t;
typedef __INT16_TYPE__ ijon_i16_t;
typedef __INT32_TYPE__ ijon_i32_t;
typedef __INT64_TYPE__ ijon_i64_t;

typedef __UINT8_TYPE__  ijon_u8_t;
typedef __UINT16_TYPE__ ijon_u16_t;
typedef __UINT32_TYPE__ ijon_u32_t;
typedef __UINT64_TYPE__ ijon_u64_t;

typedef __SIZE_TYPE__   ijon_size_t;

void ijon_map_set(ijon_u32_t);

ijon_u64_t ijon_simple_hash(ijon_u64_t val);
ijon_u32_t ijon_hashint(ijon_u32_t old, ijon_u32_t val);
ijon_u32_t ijon_hashstr(ijon_u32_t old, char* val);
ijon_u32_t ijon_hashmem(ijon_u32_t old, char* val, ijon_size_t len);

#define IJON_SET(x) ijon_map_set(ijon_hashstr(__LINE__,__FILE__)^(x))

#if defined(__cplusplus)  
}
#endif
#endif