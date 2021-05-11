/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2016. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/

/*****************************************************************************

File Name        :  fbl_compress.h
Module Short Name:  vehiclecomm.core.fbl.compress
VOBName          :  vehiclecomm.core.fbl.compress\src\fbl_compress.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported 
                    by fbl_compress.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_COMPRESS_H
#define FBL_COMPRESS_H

/* Macro values used in the CFG File */
/* Supported libraries */
#define VECTOR_LZSS         0x01
#define HEATSHRINK_LZSS     0x02

/**  Include Files  **/
#include "fbl_main.h"
#include "fbl_compress_cfg.h"

#if COMPRESS_LIB == VECTOR_LZSS
    #include "lzss.h"
#elif COMPRESS_LIB == HEATSHRINK_LZSS
    #include "heatshrink_decoder.h"
#else
    #error Select a compression library
#endif

/** Fbl Compression Instance Structure
 ** Do not allocate as a local variable in stack
 */
typedef struct SFblCompress
{
    UINT8   *pInBuffer;     /* Pointer to the input buffer */
    UINT32   inSize;        /* Size of the input buffer */
    UINT32   inOffset;      /* Internal Variable */
#if COMPRESS_LIB == VECTOR_LZSS
    UINT8    cmprBitPos;    /* Internal Variable */
#elif COMPRESS_LIB == HEATSHRINK_LZSS
    heatshrink_decoder hsd; /* Internal Variable */
    UINT8    decompStatus;  /* Internal Variable */
#endif
} SFblCompress;

/*============================================================================
 ** Function Name:    FblCompress_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the compression module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCompress *pInst - Pointer to the instance structure
 **
 ** Return:           UINT8
 **                   FBL_OK                - Success
 **                   FBL_INVALID_PARAM     - Invalid Parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCompress_Init(SFblCompress *pInst);

/*============================================================================
 ** Function Name:    FblCompress_DeCompress 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to decompress data. This function may
 **                   be called multiple times to decompress all the input
 **                   data. Provide the input buffer pointer and size in the
 **                   variables in the instance structure.
 **                   FblCompress_Init must have been called beforehand.
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCompress *pInst - Pointer to crypto instance
 **                   UINT8  *pOutBuff    - Pointer to the output buffer
 **                   UINT32 *pSize       - Pointer to the variable that 
 **                                         containts the size of the buffer.
 **                                         When the function returns it contains
 **                                         the no. of bytes actually copied.
 **
 ** Return:           UINT8
 **                   FBL_OK            - Success
 **                   FBL_FAIL          - Failed
 **                   FBL_INVALID_PARAM - Invalid parameters
 **                   FBL_BUSY          - More data available, call again with
 **                                       empty out buffer
 **
 ** Critical Section: None.
 **==========================================================================*/
#ifdef DECOMPRESS_ENABLE
UINT8 FblCompress_DeCompress(SFblCompress *pInst, UINT8 *pOutBuff, UINT32 *pSize);
#endif

#endif /* FBL_COMPRESS_H */
/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change                     */
/******************************************************************************/
/*   Note: In the traceability column we need to trace back to the Design Doc.*/
/*   For the initial version it is traced to the Design Document section.     */
/*   For further changes it shall trace to the source of the change which may */
/*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  */
/*   other reason                                                             */
/******************************************************************************/
/*---------------------------------------------------------------------------
Date              : 26-SEP-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
