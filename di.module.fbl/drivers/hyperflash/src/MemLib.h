//---------------------------------------------------------------------------------------------------------------------
//
// VISTEON CORPORATION CONFIDENTIAL
// ________________________________
//
// [2015] Visteon Corporation
// All Rights Reserved.
//
// NOTICE: This is an unpublished work of authorship, which contains trade secrets.
// Visteon Corporation owns all rights to this work and intends to maintain it in confidence to preserve
// its trade secret status. Visteon Corporation reserves the right, under the copyright laws of the United States
// or those of any other country that may have jurisdiction, to protect this work as an unpublished work,
// in the event of an inadvertent or deliberate unauthorized publication. Visteon Corporation also reserves its rights
// under all copyright laws to protect this work as a published work, when appropriate.
// Those having access to this work may not copy it, use it, modify it, or disclose the information contained in it
// without the written authorization of Visteon Corporation.
//
//---------------------------------------------------------------------------------------------------------------------
#ifndef MEMLIB_H_
#define MEMLIB_H_

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================
/// @brief Using standard memcpy, memset and memcmp functions
#define MEMLIB_USE_STD

//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================
void    MemLib_MemCpy ( void * const pDest, const void * const pSrc, const uint32 BytesCount );
void    MemLib_MemSet ( void * const pDest, const uint8 Value, const uint32 BytesCount );
boolean MemLib_MemCmp ( const void * const pBuf1, const void * const pBuf2, const uint32 BytesCount );

// use this macros for memory operations.
/* MISRA_PREPROCESS */ #define MEM_CPY(pDest, pSrc, BytesCount)        MemLib_MemCpy(pDest, pSrc, BytesCount)
/* MISRA_PREPROCESS */ #define MEM_SET(pDest, Value, BytesCount)       MemLib_MemSet(pDest, Value, BytesCount)
/* MISRA_PREPROCESS */ #define MEM_CMP(pBuf1, pBuf2, BytesCount)       MemLib_MemCmp(pBuf1, pBuf2, BytesCount)

#endif // MEMLIB_H_
