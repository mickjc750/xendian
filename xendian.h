#ifndef _XENDIAN_H_
	#define _XENDIAN_H_

	#include <stdint.h>

//********************************************************************************************************
// Public defines
//********************************************************************************************************

#ifndef __BYTE_ORDER__
	#error "__BYTE_ORDER__ is not defined" 
#else

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	#define xendian_little_pack_u64(arg1)	((uint64_t)(arg1))
	#define xendian_little_pack_u32(arg1)	((uint32_t)(arg1))
	#define xendian_little_pack_u16(arg1)	((uint16_t)(arg1))
	#define xendian_little_pack_64(arg1)	((int64_t)(arg1))
	#define xendian_little_pack_32(arg1)	((int32_t)(arg1))
	#define xendian_little_pack_16(arg1)	((int16_t)(arg1))
	#define xendian_little_unpack_u64(arg1)	((uint64_t)(arg1))
	#define xendian_little_unpack_u32(arg1)	((uint32_t)(arg1))
	#define xendian_little_unpack_u16(arg1)	((uint16_t)(arg1))
	#define xendian_little_unpack_64(arg1)	((int64_t)(arg1))
	#define xendian_little_unpack_32(arg1)	((int32_t)(arg1))
	#define xendian_little_unpack_16(arg1)	((int16_t)(arg1))

	#define xendian_big_pack_u64(arg1)		((uint64_t)xendian_swap64((uint64_t)arg1))
	#define xendian_big_pack_u32(arg1)		((uint32_t)xendian_swap32((uint32_t)arg1))
	#define xendian_big_pack_u16(arg1)		((uint16_t)xendian_swap16((uint16_t)arg1))
	#define xendian_big_pack_64(arg1)		((int64_t)xendian_swap64((int64_t)arg1))
	#define xendian_big_pack_32(arg1)		((int32_t)xendian_swap32((int32_t)arg1))
	#define xendian_big_pack_16(arg1)		((int16_t)xendian_swap16((int16_t)arg1))
	#define xendian_big_unpack_u64(arg1)	((uint64_t)xendian_swap64((uint64_t)arg1))
	#define xendian_big_unpack_u32(arg1)	((uint32_t)xendian_swap32((uint32_t)arg1))
	#define xendian_big_unpack_u16(arg1)	((uint16_t)xendian_swap16((uint16_t)arg1))
	#define xendian_big_unpack_64(arg1)		((int64_t)xendian_swap64((int64_t)arg1))
	#define xendian_big_unpack_32(arg1)		((int32_t)xendian_swap32((int32_t)arg1))
	#define xendian_big_unpack_16(arg1)		((int16_t)xendian_swap16((int16_t)arg1))

#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	#define xendian_little_pack_u64(arg1)	((uint64_t)xendian_swap64((uint64_t)arg1))
	#define xendian_little_pack_u32(arg1)	((uint32_t)xendian_swap32((uint32_t)arg1))
	#define xendian_little_pack_u16(arg1)	((uint16_t)xendian_swap16((uint16_t)arg1))
	#define xendian_little_pack_64(arg1)	((int64_t)xendian_swap64((int64_t)arg1))
	#define xendian_little_pack_32(arg1)	((int32_t)xendian_swap32((int32_t)arg1))
	#define xendian_little_pack_16(arg1)	((int16_t)xendian_swap16((int16_t)arg1))
	#define xendian_little_unpack_u64(arg1)	((uint64_t)xendian_swap64((uint64_t)arg1))
	#define xendian_little_unpack_u32(arg1)	((uint32_t)xendian_swap32((uint32_t)arg1))
	#define xendian_little_unpack_u16(arg1)	((uint16_t)xendian_swap16((uint16_t)arg1))
	#define xendian_little_unpack_64(arg1)	((int64_t)xendian_swap64((int64_t)arg1))
	#define xendian_little_unpack_32(arg1)	((int32_t)xendian_swap32((int32_t)arg1))
	#define xendian_little_unpack_16(arg1)	((int16_t)xendian_swap16((int16_t)arg1))

	#define xendian_big_pack_u64(arg1)		((uint64_t)(arg1))
	#define xendian_big_pack_u32(arg1)		((uint32_t)(arg1))
	#define xendian_big_pack_u16(arg1)		((uint16_t)(arg1))
	#define xendian_big_pack_64(arg1)		((int64_t)(arg1))
	#define xendian_big_pack_32(arg1)		((int32_t)(arg1))
	#define xendian_big_pack_16(arg1)		((int16_t)(arg1))
	#define xendian_big_unpack_u64(arg1)	((uint64_t)(arg1))
	#define xendian_big_unpack_u32(arg1)	((uint32_t)(arg1))
	#define xendian_big_unpack_u16(arg1)	((uint16_t)(arg1))
	#define xendian_big_unpack_64(arg1)		((int64_t)(arg1))
	#define xendian_big_unpack_32(arg1)		((int32_t)(arg1))
	#define xendian_big_unpack_16(arg1)		((int16_t)(arg1))

#else
	#error "Endianess not supported"
#endif
#endif

//********************************************************************************************************
// Public variables
//********************************************************************************************************

//********************************************************************************************************
// Public prototypes
//********************************************************************************************************
	
	int64_t xendian_swap64(int64_t x);
	int32_t xendian_swap32(int32_t x);
	int16_t xendian_swap16(int16_t x);

#endif
