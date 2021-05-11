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

File Name        :  fbl_compress.c
Module Short Name:  fbl.compress
VOBName          :  vehiclecomm.core.fbl.compress\src\fbl_compress.c
Author           :  kshanmu4
Description      :  FBL Compression/DeCompression routines
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "fbl_compress.h"

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
UINT8 FblCompress_Init(SFblCompress *pInst)
{
    UINT8 status = FBL_OK;

    if(NULL == pInst)
    {
        status = FBL_INVALID_PARAM;
    }   
    else
    {
#if COMPRESS_LIB == VECTOR_LZSS 
        LZSS_Init();
        pInst->cmprBitPos = 0u;
#elif COMPRESS_LIB == HEATSHRINK_LZSS
        heatshrink_decoder_reset(&pInst->hsd);
        pInst->decompStatus = 0u;
#endif
        pInst->inOffset = 0u;
    }
    
    return status;
}

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
 **                   UINT8  *pOutBuffer  - Pointer to the output buffer
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
UINT8 FblCompress_DeCompress(SFblCompress *pInst, UINT8 *pOutBuff, UINT32 *pSize)
{
    UINT8 status = FBL_OK;
#if COMPRESS_LIB == VECTOR_LZSS 
    LZSS_InputBuffer_T inBuf;
    LZSS_OutputBuffer_T outBuf;
#elif COMPRESS_LIB == HEATSHRINK_LZSS
    UINT32L bytesSinked = 0u;
    UINT32L bytesPolled = 0u; /* QAC: size_t=unsigned long=unsigned int*/
    HSD_sink_res sinkRes;
    HSD_poll_res pollRes;
#endif

    /* Validate Input Parameters */
    if((NULL == pInst) || (NULL == pInst->pInBuffer) || (0u == pInst->inSize) ||
       (NULL == pOutBuff) || (NULL == pSize) || (0u == *pSize))
    {
        status = FBL_INVALID_PARAM;
    }   
    else
    {
#if COMPRESS_LIB == VECTOR_LZSS 
        /* Initialize decompression buffers */
        inBuf.buffer = &pInst->pInBuffer[pInst->inOffset];
        inBuf.length = pInst->inSize - pInst->inOffset;
        inBuf.bitPos = pInst->cmprBitPos;

        outBuf.buffer = pOutBuff;
        outBuf.length = *pSize;
        
        /* Decompress block */
        LZSS_ExpandData(&inBuf, &outBuf);

        /* Remember bit position */
        pInst->cmprBitPos = inBuf.bitPos;
        
        /* Increment processed length */
        pInst->inOffset += inBuf.length;
        
        if(pInst->inOffset < pInst->inSize)
        {
            /* More data available to decompress */
            status = FBL_BUSY;
        }
        else
        {
            /* All data decompressed */
            status = FBL_OK;
        }
        *pSize = outBuf.length;
#elif COMPRESS_LIB == HEATSHRINK_LZSS /*  VECTOR_LZSS */
        /* Send the Input */
        if((0u == pInst->decompStatus) && (pInst->inOffset < pInst->inSize))
        {
            sinkRes = heatshrink_decoder_sink(&pInst->hsd, 
                &pInst->pInBuffer[pInst->inOffset], 
                (pInst->inSize - pInst->inOffset),
                (size_t *)&bytesSinked);

            pInst->inOffset += bytesSinked;

            if(HSDR_SINK_OK != sinkRes)
            {
                status = FBL_FAIL;
            }
            
        }
            
        if(FBL_OK == status)
        {
            /* Read Uncompressed data */
            pollRes = heatshrink_decoder_poll(&pInst->hsd, pOutBuff, *pSize, (size_t *)&bytesPolled);
            *pSize = bytesPolled;
            
            if(HSDR_POLL_MORE == pollRes)
            {
                /* More decompressed data is available */
                status = FBL_BUSY;
                pInst->decompStatus = 1u;
            }
            else if (HSDR_POLL_EMPTY == pollRes)
            {
                /* All data decompressed */
                status = FBL_OK;
                pInst->decompStatus = 0u;
            }
            else
            {
                status = FBL_FAIL;
            }
        }
        
        if((FBL_OK == status) && (pInst->inOffset < pInst->inSize))
        {
            /* More input data available to decompress */
            status = FBL_BUSY;                  
        }
#endif /*  HEATSHRINK_LZSS */
    }       
    return status;
}
#endif /* DECOMPRESS_ENABLE */
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
