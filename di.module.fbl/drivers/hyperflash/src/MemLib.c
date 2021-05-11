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

#include <string.h>
#include "Std_Types.h"
#include "MemLib.h"
#include "AssertLib.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================
//----------------------------------------------------------------------------------------------------------------------

//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================

//=====================================================================================================================
//  PRIVATE
//=====================================================================================================================

//=====================================================================================================================
//  PUBLIC
//=====================================================================================================================

//----------------------------------------------------------------------------------------------------------------------
/// @brief    Copies given count bytes from pSrc to pDest buffer.
///
/// @param    pDestP:       Destination buffer.
/// @param    pSrc:         Source buffer.
/// @param    BytesCount:   Number of bytes to be copied.
//----------------------------------------------------------------------------------------------------------------------
void MemLib_MemCpy ( void * const pDest, const void * const pSrc, const uint32 BytesCount )
{
    uint8 * const pDestBuf = (uint8 *)pDest;
    const uint8 * const pSrcBuf = (const uint8 *)pSrc;

    if ( (NULL != pDestBuf ) && (NULL != pSrcBuf) && ((uint32)0 != BytesCount) )
    {
        // VECTORCAST: this statement cannot be covered 100% because vector cast allocates buffers sequentially,
        // so always Dest starts after Src or Src starts after Dest.
        if (
             // Dest buffer starts after Src buffer
             ( pDestBuf > ( &pSrcBuf[BytesCount - (uint32)1]) ) ||
             // Src buffer start after Dest buffer
             ( (&pDestBuf[BytesCount - (uint32)1]) < pSrcBuf )
           )
        {
#ifdef MEMLIB_USE_STD
            (void) memcpy(pDest, pSrc, BytesCount); // use standard memcpy compiler function
#else
            {
                uint32 Ix = ((uint32) 0);

                while ( Ix < BytesCount )
                {
                    // polyspace<RTE:IDP> There is no way to avoid this, both arrays and the count are not related from PolySpace point of view.
                    pDestBuf[Ix] = pSrcBuf[Ix];
                    ++Ix;
                }
            }
#endif // MEMLIB_USE_STD
        }
        else
        {
            DEBUG_ASSERT( FALSE );
        }
    }
}

//----------------------------------------------------------------------------------------------------------------------
/// @brief    Sets buffers to a specified byte value.
///
/// @param    pDestP:       Buffer with set value
/// @param    Value:        Byte value.
/// @param    BytesCount:   Number of bytes.
//----------------------------------------------------------------------------------------------------------------------
void MemLib_MemSet ( void * const pDest, const uint8 Value, const uint32 BytesCount )
{
#ifdef MEMLIB_USE_STD
    (void) memset(pDest, (sint32)Value, BytesCount);
#else
    uint32 Ix;
    uint8 * pBuf = (uint8 *)pDest;

    if ( NULL != pBuf )
    {
        Ix = BytesCount;

        while ( Ix > (uint32)0 )
        {
            --Ix;
            // polyspace<RTE:IDP> There is no way to avoid this, the array and the count are not related from PolySpace point of view.
            pBuf[Ix] = Value;
        }
    }
#endif  // MEMLIB_USE_STD
}

//----------------------------------------------------------------------------------------------------------------------
/// @brief    Compare characters in two buffers.
///
/// @param    pBuf1:        First buffer.
/// @param    pBuf2:        Second buffer.
/// @param    BytesCount:   Number of bytes to be compared.
///
/// @return   boolean   -   TRUE
///                         FALSE
///
//----------------------------------------------------------------------------------------------------------------------
boolean MemLib_MemCmp ( const void * const pBuf1, const void * const pBuf2, const uint32 BytesCount )
{
    boolean Result = (boolean)TRUE;
#ifdef MEMLIB_USE_STD
    sint32 ret;
    ret = memcmp(pBuf1, pBuf2, BytesCount);
    Result = (boolean)(ret == 0);
#else
    uint32 Ix;
    const uint8 * const pFirstBuf = (const uint8 * )pBuf1;
    const uint8 * const pSecondBuf = (const uint8 * )pBuf2;

    if ( (NULL != pFirstBuf) && (NULL != pSecondBuf) && ((uint32)0 != BytesCount) )
    {
        if ( pFirstBuf != pSecondBuf )
        {
            Ix = BytesCount;

            while ( (FALSE != Result) && (Ix > (uint32)0) )
            {
            	--Ix;
                // polyspace<RTE:IDP> There is no way to avoid this, both arrays and the count are not related from PolySpace point of view.
                if ( pFirstBuf[Ix] != pSecondBuf[Ix] )
                {
                    Result = FALSE;
                }
            }
        }
    }
    else
    {
        Result = FALSE;
    }
#endif  // MEMLIB_USE_STD

    return Result;
}
