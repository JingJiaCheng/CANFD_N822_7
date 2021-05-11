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

#include "Std_Types.h"
#include "HMemDrv.h"
#include "HMemDrvPrivate.h"
#include "HMemDrvPrivate_Cfg.h"
#include "Fbl_main.h"
#include "fbl_app.h"

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

#define cPAGE_SIZE              (uint32)0x00000200UL
#define cPAGE_MASK              (uint32)(0xFFFFFFFFUL-(cPAGE_SIZE - 1UL))

typedef enum EHMemDrvState_t
{
    EPendingErase,
    EPendingWrite,
    ENoPendingJob
}HMemDrvState;

//=====================================================================================================================
//  FORWARD DECLARATIONS
//=====================================================================================================================

static HMemDrv_JobResultType HMemDrvJobResult = EHMemDrvJobResult_OK;
static HMemDrvState HMemDrvCurrentState = ENoPendingJob;
static uint32 PendingEraseLength = 0;
static uint32 PendingEraseAddr   = 0;
static uint32 PendingWriteLength = 0;
static uint32 PendingWriteAddr   = 0;
static uint16* PendingWriteSrcAddrPtr = NULL;

//=====================================================================================================================
//  PRIVATE
//=====================================================================================================================

//=====================================================================================================================
//  PUBLIC
//=====================================================================================================================

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Initialization of HMemDrv
///
//---------------------------------------------------------------------------------------------------------------------
void HMemDrv_Init( void )
{
    HYPERBUS_INIT()
    HMemDrvJobResult    = EHMemDrvJobResult_OK;
    HMemDrvCurrentState = ENoPendingJob;
    PendingEraseLength  = 0UL;
    PendingEraseAddr    = 0UL;
    PendingWriteLength  = 0UL;
    PendingWriteAddr    = 0UL;
    PendingWriteSrcAddrPtr = NULL;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Deinitialization of HMemDrv
///
//---------------------------------------------------------------------------------------------------------------------
void HMemDrv_DeInit( void )
{

}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Check the status of DMA transfer
///
/// @return boolean:   TRUE  - DMA transfer is finished
/// <br>               FALSE - DMA transfer is in progress     
//---------------------------------------------------------------------------------------------------------------------
boolean HMemDrv_DmaFinished( void )
{
    boolean Ret = (boolean)FALSE;

    return Ret;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Initialization of DMA transfer
///
//---------------------------------------------------------------------------------------------------------------------
void HMemDrv_ISR_Dma( void )
{

}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Write data to HyperFlash
///
/// @param  TgtAddress:     Target address
/// @param  SrcAddressPtr:  Pointer to data buffer
/// @param  Length:         Size of data buffer
///
/// @return E_OK:           Write procedure is started successfully
///<br>     E_NOT_READY:    Write procedure is not stated due to pending operation in progress
///<br>     E_INVALID_ARG:  Invalid input parameter
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType HMemDrv_Write(const HMemDrv_AddressType TgtAddress, uint16* SrcAddressPtr, const HMemDrv_LengthType Length)
{
    Std_ReturnType Ret;
    uint32 DataLength;

    if((HMemDrvState)ENoPendingJob != HMemDrvCurrentState)
    {
        Ret = E_NOT_READY;
    }
    else
    {
        DataLength = (((TgtAddress & cPAGE_MASK) + cPAGE_SIZE) - TgtAddress) / (uint32)sizeof(uint16);
        if(DataLength >= Length)
        {
            PendingWriteAddr = TgtAddress;
            PendingWriteLength = 0UL;
            DataLength = Length;
        }
        else
        {
			PendingWriteAddr = TgtAddress + (DataLength * sizeof(uint16));	  /*address for the next part of writing*/
            PendingWriteLength = Length - DataLength;
            PendingWriteSrcAddrPtr = SrcAddressPtr + DataLength;
        }
        Ret = HFlash_Write(TgtAddress, SrcAddressPtr, DataLength);
        if(E_OK == Ret)
        {
            HMemDrvCurrentState = EPendingWrite;
            HMemDrvJobResult = EHMemDrvJobResult_JobPending;
        }
    }
    return Ret;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Read data from HyperFlash
///
/// @param  SrcAddress:     Source address
/// @param  TgtAddressPtr:  Pointer to data buffer
/// @param  Length:         Size of data buffer
///
/// @return E_OK:           Successful read
///<br>     E_INVALID_ARG:  Invalid input parameter
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType HMemDrv_Read(const HMemDrv_AddressType SrcAddress, uint8* TgtAddressPtr, const HMemDrv_LengthType Length)
{
    Std_ReturnType Ret;

    Ret = HFlash_Read(SrcAddress, TgtAddressPtr, Length);
    return Ret;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Erase data from HyperFlash
///
/// @param  TgtAddress:     Target address
/// @param  Length:         Size of area for erase
///
/// @return E_OK:           Erase procedure is started successfully
///<br>     E_NOT_READY:    Erase procedure is not stated due to pending operation in progress
///<br>     E_INVALID_ARG:  Invalid target address or area to erase
//---------------------------------------------------------------------------------------------------------------------
Std_ReturnType HMemDrv_Erase(const HMemDrv_AddressType TgtAddress, const HMemDrv_LengthType Length)
{
    Std_ReturnType Ret;
    uint32 BaseAddr;

    if((HMemDrvState)ENoPendingJob != HMemDrvCurrentState)
    {
        Ret = E_NOT_READY;
    }
    else
    {
        BaseAddr = TgtAddress & cSECTOR_ADDR_MASK;
        if((BaseAddr + cSECTOR_SIZE) >= (TgtAddress + Length))
        {
            PendingEraseAddr = BaseAddr;
            PendingEraseLength = 0UL;
        }
        else
        {
            PendingEraseAddr = BaseAddr + cSECTOR_SIZE; //next sector
            PendingEraseLength = Length - cSECTOR_SIZE;
        }
        Ret = HFlash_EraseSector(TgtAddress);
        if(E_OK == Ret)
        {
            HMemDrvCurrentState = EPendingErase;
            HMemDrvJobResult = EHMemDrvJobResult_JobPending;
        }
    }
    return Ret;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Get the status of last operation
///
/// @return Return value:
///<br>     EHMemDrvJobResult_OK:           Last jobs finished successfully
///<br>     EHMemDrvJobResult_JobPending:   Last job is ongoing
///<br>     EHMemDrvJobResult_JobFailed:    Last job terminated with error
//---------------------------------------------------------------------------------------------------------------------
HMemDrv_JobResultType HMemDrv_GetJobResult(void)
{
    return HMemDrvJobResult;
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  This function shall perform the processing of pending job after write or erase procedure to hyperflash is
///         started. It is called cyclically. On each pending states the status of last job is checked.
///         If the status is EHFlashJobResult_OK the remaining part of pending job is stated.
///         If the status is EHFlashJobResult_JobFailed the the remaining part of pending job is aborted.
//          Depending on job status HMemDrvJobResult is changed.
///
//---------------------------------------------------------------------------------------------------------------------
void HMemDrv_MainFunction(void)
{
    HFlash_JobResultType HFlash_JobResult;
    Std_ReturnType Ret;

	pbl_check_diag_response();
    switch(HMemDrvCurrentState)
    {
    case EPendingErase:
        HFlash_JobResult = HFlash_GetJobResult();
        if((HFlash_JobResultType)EHFlashJobResult_JobFailed == HFlash_JobResult)
        {
            HMemDrvJobResult    = EHMemDrvJobResult_JobFailed;
            HMemDrvCurrentState = ENoPendingJob;
        }
        else if((HFlash_JobResultType)EHFlashJobResult_OK == HFlash_JobResult)
        {
            if(0UL != PendingEraseLength)
            {
                Ret = HFlash_EraseSector(PendingEraseAddr);
                if(E_OK == Ret)
                {
                    if( cSECTOR_SIZE >  PendingEraseLength)
                    { // last sector for erase
                        PendingEraseLength = 0UL;
                    }
                    else
                    { // one more sector has to be erased at least
                        PendingEraseAddr   += cSECTOR_SIZE;
                        PendingEraseLength -= cSECTOR_SIZE;
                    }
                    HMemDrvJobResult = EHMemDrvJobResult_JobPending;
                }
                else
                {
                    HMemDrvJobResult    = EHMemDrvJobResult_JobFailed;
                    HMemDrvCurrentState = ENoPendingJob;
                }
            }
            else
            {// no more sectors for erase
                HMemDrvJobResult    = EHMemDrvJobResult_OK;
                HMemDrvCurrentState = ENoPendingJob;
            }
        }
        else
        {
            HMemDrvJobResult = EHMemDrvJobResult_JobPending;
        }
        break;

    case EPendingWrite:
        HFlash_JobResult = HFlash_GetJobResult();
        if((HFlash_JobResultType)EHFlashJobResult_JobFailed == HFlash_JobResult)
        {
            HMemDrvJobResult    = EHMemDrvJobResult_JobFailed;
            HMemDrvCurrentState = ENoPendingJob;
        }
        else if((HFlash_JobResultType)EHFlashJobResult_OK == HFlash_JobResult)
        {
            if(0UL != PendingWriteLength)
            {
                if(cHYPERFLASH_WORD_CNT >= PendingWriteLength)
                { // last data for writing
                    Ret = HFlash_Write(PendingWriteAddr, PendingWriteSrcAddrPtr, PendingWriteLength);
                    PendingWriteLength = 0UL;
                }
                else
                {
                    Ret = HFlash_Write(PendingWriteAddr, PendingWriteSrcAddrPtr, cHYPERFLASH_WORD_CNT);
                    PendingWriteAddr += (cHYPERFLASH_WORD_CNT * sizeof(uint16)); //address for the next part of writing
                    PendingWriteLength -= cHYPERFLASH_WORD_CNT;
                    PendingWriteSrcAddrPtr += cHYPERFLASH_WORD_CNT;
                }

                if(E_OK != Ret)
                {
                    HMemDrvJobResult = EHMemDrvJobResult_JobFailed;
                    HMemDrvCurrentState = ENoPendingJob;
                }
            }
            else
            {// no more data for writing
                HMemDrvJobResult    = EHMemDrvJobResult_OK;
                HMemDrvCurrentState = ENoPendingJob;
            }
        }
        else
        {
            HMemDrvJobResult = EHMemDrvJobResult_JobPending;
        }
        break;

    case ENoPendingJob:
    default:
        // Idle state
        break;
    }
}
