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

File Name        :  udsmgr_tester.c
Module Short Name:  vehiclecomm.core.fbl.hyundai
VOBName          :  vehiclecomm.core.fbl.hyundai\uds\src\udsmgr_download.c
Author           :  kshanmu4
Description      :  UDS Request Download, Transfer Data, Transfer Exit
                    Message Handlers
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "udsmgr.h"
#include "udsmgr_cfg.h"
#include "udsdiag.h"
#include "fbl_main.h"
#include "fbl_security.h"
#include "fbl_app_cfg.h"
#include "fbl_comp.h"
#include "fbl_comp_cfg.h"
#include "fbl_wdt_drv.h"

#define RAM_DRIVER_ENABLE  0

#ifdef COMPRESS_MODE_ENABLE
#include "fbl_compress.h"
#endif

/**  Macro Definitions  **/
#define UDS_TRANSFER_EXIT_REQ_SIZE      (0u)
#define UDS_REQ_DNLD_REQ_SIZE           (10u)
#define UDS_REQ_DNLD_RESP_SIZE          (2u)
#define UDS_REQ_DNLD_RESP_BLK_SIZE      (0x0102u)
#define UDS_DNLD_MAX_BLOCK_SIZE         (512u)
#define MASK         					(0x1021u)

#ifdef COMPRESS_MODE_ENABLE
#define UDS_DECOMP_BUFFER_SIZE          (2048u)
#define UDS_PROG_BUFFER_SIZE            (512u)
#endif

#define UDS_DNLD_COMPRESS_LZSS          (0x10u)
#define UDS_DNLD_STEP_REQUEST_DNLD      (0u)
#define UDS_DNLD_STEP_TRANSFER_DATA     (1u)
#define UDS_DNLD_STEP_TRANSFER_EXIT     (2u)
#define UDS_DNLD_STEP_TRANSFER_CHECK    (3u)

#define UDS_FLASH_WORD_SIZE             (0x04u)
#define UDS_NVM_READ_CHECKSUM_LEN       (1u)

#define UINT8_TO_UINT16(h, l)    ((UINT16)((UINT16)(h) << 8u) | ((UINT16)(l)))

/**  Private Variables  **/
static udsdiagu32   dnldAddr;
static udsdiagu32   dnldIndex;
static udsdiagu32   dnldTotalSize;
static udsdiagu8    dnldStep;
static udsdiagu8    dnldBlockSeqCntr;
static udsdiagu8    dnldDfi;

udsdiagu8 Activate_SBL = FALSE;
#ifdef COMPRESS_MODE_ENABLE
static udsdiagu32   progBufferLen;
static udsdiagu8    progBuffer[UDS_PROG_BUFFER_SIZE];
static udsdiagu8    decompBuffer[UDS_DECOMP_BUFFER_SIZE];
static struct SFblCompress  lzssInst;
#endif

udsdiagu32  Req_start_address;
udsdiagu32  Req_end_address;
udsdiagu32  fbl_calc_chksum			= 0xFFFFFFFFu;
udsdiagu32  fbl_checksum_start_addr = 0xffffffffUL;
unsigned int CRC_rau32CRCTabCal[256] = {0};
/**  Private Functions  **/
static udsdiagu8    UdsMgr_ProgramData(udsdiagu32 addr, udsdiagu32 len, udsdiagu8 *pData);
udsdiagu32 CRC_vMakeCRC(udsdiagu8 * pu8CRCDataIn, udsdiagu32 pu32CRCBuffer, udsdiagu32 u16CalcLen);
void CreateCRCTable(void);
#ifdef COMPRESS_MODE_ENABLE
static udsdiagu8    UdsMgr_ProgramCompressedData(udsdiagu32 addr, udsdiagu32 len, udsdiagu8 *pData);
#endif


/*============================================================================
 ** Function Name:    UdsMgr_RequestDownloadInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS request
 **                   download handler
 **
 ** Invocation:       Invoked by UDS Diag
 **
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_RequestDownloadInit(void)
{
    dnldAddr 			= 0UL;
    dnldIndex 			= 0UL;
    dnldTotalSize 		= 0UL;
    dnldBlockSeqCntr 	= 1u;

//    Req_start_address   = 0UL;
//    Req_end_address     = 0UL;
    
    #ifdef COMPRESS_MODE_ENABLE
	progBufferLen = 0UL;
    #endif
    dnldDfi 			= 0u;
    dnldStep 			= UDS_DNLD_STEP_REQUEST_DNLD;
    CreateCRCTable();
}

/*****************************************************************************
 Prototype    : UdsMgr_DownloadIsInEndState
 Description  : return Downloa is done or not; TRUE:transfer done; FALSE:transfer not done
 Input        : void  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2021/1/15
    Author       : chenyin
    Modification : Created function

*****************************************************************************/
udsdiagu8 UdsMgr_DownloadIsInEndState(void)
{
    udsdiagu8 return_vlaue = FALSE;
    
    if ( UDS_DNLD_STEP_TRANSFER_CHECK == dnldStep )
    {
        return_vlaue = TRUE;
    }
    else
    {
        /*  Do Nothing */
    }

    return return_vlaue;
}

/*============================================================================
 ** Function Name:    UdsMgr_RequestDownloadHandler
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Request Download
 **                   request
 **
 ** Invocation:       Invoked by UDS Diag
 **
 ** Inputs:           udsdiagu8 *pData   - Data associated with the request
 **                   UINT16 dataLen - Length of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_RequestDownloadHandler(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    udsdiagu8   status;
    udsdiagu32  address;
    udsdiagu32  size;
    udsdiagu8   compId;

    if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
    {
        status = NRC_CONDITIONS_NOT_CORRECT;                /*NRC - 22*/
    }
    else if((NULL == pData) || (UDS_REQ_DNLD_REQ_SIZE != dataLen))
    {
        status = NRC_INVALID_FORMAT;                        /*NRC - 13*/
    }
    else if(UDS_DNLD_STEP_REQUEST_DNLD != dnldStep)
    {
        status = NRC_CONDITIONS_NOT_CORRECT;                /*NRC - 22*/
    }
    else
    {
        if (0x44 == pData[1] )
        {
            address = (((udsdiagu32)pData[2] << 24u) |
                       ((udsdiagu32)pData[3] << 16u) |
                       ((udsdiagu32)pData[4] <<  8u) |
                       ((udsdiagu32)pData[5]));
            size    = (((udsdiagu32)pData[6] << 24u) |
                       ((udsdiagu32)pData[7] << 16u) |
                       ((udsdiagu32)pData[8] <<  8u) |
                       ((udsdiagu32)pData[9]));
        }
        else
        {
            status = NRC_REQUEST_OUT_OF_RANGE;
        }

        compId = FblComp_GetCompIdFromAddress(address);

        if((compId == FBL_COMP_INVLAID) || (compId != FblComp_GetCompIdFromAddress(address + size - 1u)))
        {
            status = NRC_REQUEST_OUT_OF_RANGE;              /*NRC - 31*/
        }
	#if( defined(D53_PBL) || defined(J59_PBL) )
        else if(FBL_OK != FblSec_VerifySecurityAccess())
        {
            status = NRC_SECURITY_ACCESS_DENIED;            /*NRC - 33*/
        }
	#endif
        else
        {
            /************************************************************************
            ***                        \compId For FLASH
            ***              Driver done\   T   |   F   |   
            ***                     T   |   T   |   T   |         
            ***                     F   |   F   |   T   |
            ************************************************************************/
            if (( FALSE == UdsMgr_GetDriverDoneFlag() ) && ( compId < FBL_COMP_RAM ))
            {
                status = NRC_CONDITIONS_NOT_CORRECT;              /*NRC - 22*/
            }
            else
            {
                dnldIndex       = 0UL;
                dnldAddr        = address;
                dnldTotalSize   = size;
                dnldBlockSeqCntr = 1u;
                dnldDfi         = pData[0];
            
                Req_start_address = address; 
                Req_end_address = address + size - (udsdiagu32)1;
            
                /* Prepare response */
                UdsMgr_InitResponseBuffer();
                UdsMgr_AddByteToRespBuffer(UDS_REQ_DNLD_RESP_SIZE << 4u);
                UdsMgr_AddByteToRespBuffer((udsdiagu8)((UDS_REQ_DNLD_RESP_BLK_SIZE >> 8u) & 0xFFu));
                UdsMgr_AddByteToRespBuffer((udsdiagu8)(UDS_REQ_DNLD_RESP_BLK_SIZE & 0xFFu));
            
                status      = NO_ERROR;
                dnldStep    = UDS_DNLD_STEP_TRANSFER_DATA;
            }

        }

    }

    if(NO_ERROR != status)
    {
        /* Reinit download parameters */
        UdsMgr_RequestDownloadInit();
//      fbl_calc_chksum = 0xffffffff;
    }
 
    /* Send response */
    UdsMgr_SendResponse(status);
}


/*============================================================================
 ** Function Name:    UdsMgr_TransferDataHandler
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Transfer data
 **                   request
 **
 ** Invocation:       Invoked by UDS Diag
 **
 ** Inputs:           udsdiagu8 *pData   - Data associated with the request
 **                   UINT16 dataLen - Length of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_TransferDataHandler(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    udsdiagu8   status;

    if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
    {
        status = NRC_CONDITIONS_NOT_CORRECT;				/*NRC - 22*/
    }
    else if(UDS_DNLD_STEP_TRANSFER_DATA != dnldStep)
    {
        status = NRC_REQUEST_SEQUENCE_ERROR;				/*NRC - 24*/
    }
    else if((dnldIndex + dataLen - 1u) > dnldTotalSize)
    {
        status = NRC_INVALID_FORMAT;						/*NRC - 13*/
    }
    else if((dataLen) > (UDS_REQ_DNLD_RESP_BLK_SIZE - 1u))
    {
        status = NRC_INVALID_FORMAT;						/*NRC - 13*/
    }
    else
    {
        /* Check if the same block is repeated or next block, reject anyother block number */
        if((dnldBlockSeqCntr == pData[0]) || ((udsdiagu8)((udsdiagu8)1 + dnldBlockSeqCntr) == pData[0]))
        {
            dnldBlockSeqCntr = pData[0];

			FblMain_SendRCRRP();

			#ifdef COMPRESS_MODE_ENABLE
			if(0UL == dnldIndex)
            {
                /* Init Compression */
                (void)FblCompress_Init(&lzssInst);
                progBufferLen = 0UL;
            }

			if(0u != (dnldDfi & UDS_DNLD_COMPRESS_LZSS))
            {
                fbl_checksum_start_addr = 0x00UL;
//              UdsMgr_ChecksumRoutine(fbl_checksum_start_addr,(dataLen - 2u), &pData[1]);
                fbl_calc_chksum = CRC_vMakeCRC((&pData[1]),fbl_calc_chksum,(((udsdiagu32)dataLen-(udsdiagu32)2u+(udsdiagu32)1u)));
                /* Program compressed data block */         /*NRC - 72*/
                status = UdsMgr_ProgramCompressedData(dnldAddr, (dataLen - 1u), &pData[1]);
            }
            else
			#endif
            {
                /* Program block */                         /*NRC - 72*/
                status = UdsMgr_ProgramData(dnldAddr, ((udsdiagu32)dataLen - (udsdiagu32)1u), &pData[1]);
            }

            /* Per ISO 1429-1_2013 size could be either compressed or uncompressed */
            dnldIndex   += (udsdiagu32)((udsdiagu32)dataLen - 1u);

            if(dnldIndex == dnldTotalSize)
            {
                dnldStep = UDS_DNLD_STEP_TRANSFER_EXIT;
            }

            if(0u == (dnldDfi & UDS_DNLD_COMPRESS_LZSS))
            {
                if(NO_ERROR == status)
                {
                    fbl_checksum_start_addr = dnldAddr - ((udsdiagu32)dataLen - (udsdiagu32)1u);
//                  UdsMgr_ChecksumRoutine(fbl_checksum_start_addr,(fbl_checksum_start_addr + ((udsdiagu32)dataLen - (udsdiagu32)2u)), NULL);
//                    CRC_vMakeCRC((udsdiagu8*)fbl_checksum_start_addr,fbl_calc_chksum,(((udsdiagu32)dataLen - (udsdiagu32)2u)/4));
#if RAM_DRIVER_ENABLE
                    fbl_calc_chksum = CRC_vMakeCRC(fbl_checksum_start_addr,fbl_calc_chksum,(((udsdiagu32)dataLen-(udsdiagu32)2u+(udsdiagu32)1u)));
#else
                    if ( FBL_COMP_RAM == FblComp_GetCompIdFromAddress(fbl_checksum_start_addr) )       //RAM DRIVE DO NOTHING
                    {
                        fbl_calc_chksum = CRC_vMakeCRC((&pData[1]),fbl_calc_chksum,(((udsdiagu32)dataLen-(udsdiagu32)2u+(udsdiagu32)1u)));
                    }
                    else
                    {
                        fbl_calc_chksum = CRC_vMakeCRC((udsdiagu8 *)fbl_checksum_start_addr,fbl_calc_chksum,(((udsdiagu32)dataLen-(udsdiagu32)2u+(udsdiagu32)1u)));
                    }
#endif
                }
            } 
        }
        else
        {
            status = NRC_WRONG_BLOCK_SEQ_COUNTER;			/*NRC - 73*/
        }
    }

    /*
    ** If request is valid, send positive response and take action for session change.
    */
    if(NO_ERROR != status)
    {
        /* Reinit download parameters */
        UdsMgr_RequestDownloadInit();
        fbl_calc_chksum = 0xffffffffu;
        UdsMgr_SendNegativeResponse(status);
    }
    else
    {
        UdsMgr_SendPositiveResponse(&dnldBlockSeqCntr, DATA_LEN_1_BYTE);
    }
}


void CreateCRCTable(void)
{
    udsdiagu32 i;
    udsdiagu32 bit;
    udsdiagu32 c;
    for (i = 0; i < 256; i++)
    {
        c = i;
        for (bit = 0; bit < 8; bit++)
        {
            if (c & 1)
            {
                c = (c >> 1) ^ (0xedb88320);//JMC
            }
            else
            {
                c = c >> 1;
            }
        }
        CRC_rau32CRCTabCal[i] = c;
    }
}

udsdiagu32 CRC_vMakeCRC(udsdiagu8 * pu8CRCDataIn, udsdiagu32 pu32CRCBuffer, udsdiagu32 u16CalcLen)
{
    udsdiagu32 u32CRCResult;
    udsdiagu32 u16Index;
	udsdiagu32 tempdata = 0;
    
    u32CRCResult = pu32CRCBuffer;
    for (u16Index = 0; u16Index < u16CalcLen; u16Index++)
    {
        tempdata = (udsdiagu32)pu8CRCDataIn[u16Index];
        u32CRCResult = CRC_rau32CRCTabCal[(u32CRCResult ^ tempdata) & 0xFF] ^ (u32CRCResult >> 8);
    }
//    pu32CRCBuffer = u32CRCResult;
    return u32CRCResult;
}

#if 0
void UdsMgr_ChecksumRoutine(udsdiagu32 chksum_start_add, udsdiagu32 chksum_end_add, udsdiagu8 *pData)
{
	udsdiagu32 *chksumptr;
	udsdiagu32 *chksumstartptr;
	udsdiagu32 *chksumendptr;
	udsdiagu32 calc_chksum = 0;

	chksumstartptr	= (udsdiagu32 *)chksum_start_add;
	chksumendptr 	= (udsdiagu32 *)chksum_end_add;

	if(pData == NULL)
	{
		while (chksumstartptr <= chksumendptr)/* Ex : 5000 - 5FFF*/
		{
			calc_chksum += (*chksumstartptr); /*Add previous data and current data in 32 bit format*/
			chksumstartptr++;
		}
	}
	else
	{
		chksumptr	= 	(udsdiagu32 *)pData;
		while (chksumstartptr <= chksumendptr)/* Ex : 5000 - 5FFF*/
		{
			calc_chksum += (*chksumptr); /*Add previous data and current data in 32 bit format*/
			chksumptr++;
			chksumstartptr++;
		}
	}

	fbl_calc_chksum	 +=	calc_chksum;
}
#endif
/*============================================================================
 ** Function Name:    UdsMgr_TransferExitHandler
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Transfer exit
 **                   request
 **
 ** Invocation:       Invoked by UDS Diag
 **
 ** Inputs:           udsdiagu8 *pData   - Data associated with the request
 **                   UINT16 dataLen - Length of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_TransferExitHandler(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    udsdiagu8   status	=	NO_ERROR;

    if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
    {
        status = NRC_CONDITIONS_NOT_CORRECT;				/*NRC - 22*/
        /* Reinit download parameters */
        UdsMgr_RequestDownloadInit();
    }
    else if((NULL == pData) || (UDS_TRANSFER_EXIT_REQ_SIZE != dataLen))
	{
		status = NRC_INVALID_FORMAT;						/*NRC - 13*/
        /* Reinit download parameters */
        UdsMgr_RequestDownloadInit();
	}
    else if(UDS_DNLD_STEP_TRANSFER_EXIT != dnldStep)
    {
        status = NRC_REQUEST_SEQUENCE_ERROR;				/*NRC - 24*/
        /* Reinit download parameters */
        UdsMgr_RequestDownloadInit();
    }
    /*To Avoid QAC Warning*/
    else
    {
        dnldStep = UDS_DNLD_STEP_TRANSFER_CHECK;
    }

    /* Reinit download parameters */
//    UdsMgr_RequestDownloadInit();

	/* Prepare response */
    UdsMgr_InitResponseBuffer();
//    UdsMgr_AddByteToRespBuffer((udsdiagu8)((fbl_calc_chksum >> 8u) & 0xFFu));
//    UdsMgr_AddByteToRespBuffer((udsdiagu8)(fbl_calc_chksum & 0xFFu));

	/* Send response */
    UdsMgr_SendResponse(status);

}

/*============================================================================
 ** Function Name:    UdsMgr_ProgramData
 **
 ** Visibility:       Private
 **
 ** Description:      This function is used to program the uncompressed data
 **
 ** Invocation:       Invoked by Transfer data handler
 **
 ** Inputs:           udsdiagu32 addr   - Starting address to program
 **                   udsdiagu32 len    - Length of the data
 **                   udsdiagu8 *pData  - Pointer to the data buffer
 **
 ** Return:           udsdiagu8
 **                   NO_ERROR - Programming Success
 **                   NRC_GENERAL_PROGRAMMING_FAILURE - Programming Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
static udsdiagu8 UdsMgr_ProgramData(udsdiagu32 addr, udsdiagu32 len, udsdiagu8 *pData)
{
    udsdiagu8 status = NRC_GENERAL_PROGRAMMING_FAILURE;

    /* Write Data */
    if(FBL_OK == FblComp_Write(addr, len, pData))
    {
        status = NO_ERROR;

        dnldAddr += len;
    }

    return status;
}

#ifdef COMPRESS_MODE_ENABLE
/*============================================================================
 ** Function Name:    UdsMgr_ProgramCompressedData
 **
 ** Visibility:       Private
 **
 ** Description:      This function is used to program the compressed data
 **
 ** Invocation:       Invoked by Transfer data handler
 **
 ** Inputs:           udsdiagu32 addr   - Starting address to program
 **                   udsdiagu32 len    - Length of the data
 **                   udsdiagu8 *pData  - Pointer to the data buffer
 **
 ** Return:           udsdiagu8
 **                   NO_ERROR - Programming Success
 **                   NRC_GENERAL_PROGRAMMING_FAILURE - Programming Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
static udsdiagu8 UdsMgr_ProgramCompressedData(udsdiagu32 addr, udsdiagu32 len, udsdiagu8 *pData)
{
    udsdiagu32 decompSize;
    udsdiagu32 decompRemain;
    udsdiagu32 copyLen;
    udsdiagu8 compRet = FBL_OK;
    udsdiagu8 progRet = NO_ERROR;
    udsdiagu8 status = NRC_GENERAL_PROGRAMMING_FAILURE;

    /* Update input data */
    lzssInst.pInBuffer = pData;
    lzssInst.inSize = len;
    lzssInst.inOffset = 0UL;

    do
    {
        /* Clear decompression buffer */
        MEMSET(decompBuffer, 0u, UDS_DECOMP_BUFFER_SIZE);
        decompSize = UDS_DECOMP_BUFFER_SIZE;

        /* Decompress chunk */
        compRet = FblCompress_DeCompress(&lzssInst, decompBuffer, &decompSize);
        decompRemain = decompSize;

        /* Program decompressed chunk */
        do
        {
            /* Copy decompressed data into programming buffer */
            if((progBufferLen + decompRemain) > UDS_PROG_BUFFER_SIZE)
            {
                copyLen = UDS_PROG_BUFFER_SIZE - progBufferLen;
            }
            else
            {
                copyLen  = decompRemain;
            }

            MEMCPY(&progBuffer[progBufferLen], &decompBuffer[decompSize - decompRemain], copyLen);
            progBufferLen += copyLen;
            decompRemain -= copyLen;

            /* Check if minimum programming block size is reached */
            if(UDS_PROG_BUFFER_SIZE == progBufferLen)
            {
                progRet = UdsMgr_ProgramData(addr, UDS_PROG_BUFFER_SIZE, progBuffer);
                if(NO_ERROR == progRet)
                {
                    addr += UDS_PROG_BUFFER_SIZE;
                }
                else
                {
                    compRet = FBL_FAIL;
                }
                progBufferLen = 0UL;
            }
        } while(decompRemain >= UDS_PROG_BUFFER_SIZE);

        /* Check if there is any left over decompressed data */
        if(decompRemain > 0UL)
        {
            MEMCPY(&progBuffer[progBufferLen], &decompBuffer[decompSize - decompRemain], decompRemain);
            progBufferLen = decompRemain;
        }

    } while(FBL_BUSY == compRet);

    if((FBL_OK == compRet) && (NO_ERROR == progRet))
    {
        status = NO_ERROR;
    }

    return status;
}
#endif

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
