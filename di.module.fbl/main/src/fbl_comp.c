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

File Name        :  fbl_comp.c
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_comp.c
Author           :  kshanmu4
Description      :  Implements the Component management routines.
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "fbl_main.h"
#include "fbl_comp.h"
#include "fbl_memdrv.h"
#include "fbl_crc.h"
#include "fbl_app.h"

/**  Macro Definitions  **/
#define FBL_COMP_READ_BUFFER_SIZE       256u

/**  Structure Definitions  **/
struct SFblCompMemInfo
{
    UINT32 memStartAddr;
    UINT32 memEndAddr;
    UINT32 memDriverId;
    UINT32 memOffset;
    UINT32 maxReprogAttempts;
    UINT32 memHeaderOffset;
};

struct SCompProgInfo
{
    UINT16 reprogAttempts;
};

#ifdef FBL_COMP_STORE_PROG_INFO
#pragma pack 1
struct SFblCompStorageInfo
{
    struct SFblTesterInfoData testerInfo;
    UINT8  sha256[32];
    UINT8  authorization;
};

struct SFblCompPersistData
{
    UINT32 magicNumberStart;
    struct SFblCompStorageInfo compData[FBL_COMP_MAX];
    UINT32 magicNumberEnd;
};
#pragma unpack

/**  Private Function Definitions  **/
static UINT8 FblComp_SaveMem(void);
static UINT8 FblComp_LoadMem(void);

/**  Private Variables  **/

static struct SFblCompPersistData FblCompPersistData;
static struct SFblTesterInfoData  testerInfo;
#endif /* FBL_COMP_STORE_PROG_INFO */

static struct SCompProgInfo FblCompProgInfoTbl[FBL_COMP_MAX];
static UINT8 readBuffer[FBL_COMP_READ_BUFFER_SIZE];

const struct SFblCompMemInfo FblCompMemInfoTbl[FBL_COMP_MAX] =
{
    FBL_APP_COMP_INFO_CFG
};

/*============================================================================
 ** Function Name:    FblComp_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the component module.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void FblComp_Init(void)
{
    UINT8 i;

    /* Perform Memory Drivers Init */
    (void)FblApp_MemInit();

    for(i = 0u; i < FBL_COMP_MAX; i++)
    {
        FblCompProgInfoTbl[i].reprogAttempts = 0u;
    }
#ifdef FBL_COMP_STORE_PROG_INFO
    (void)FblComp_LoadMem();
#endif /* FBL_COMP_STORE_PROG_INFO */
}

/*============================================================================
 ** Function Name:    FblComp_DeInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to deinitialize the component module.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    FblComp_DeInit(void)
{
    (void)FblApp_MemDeInit();
}

/*============================================================================
 ** Function Name:    FblComp_Erase
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to erase an component.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 compId - Component to erase
 **
 ** Return:           UINT8
 **                   FBL_OK    - Erase Success
 **                   FBL_FAIL  - Erase Failed
 **                   Additional errors thrown by the underlying transport
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblComp_Erase(UINT8 compId,UINT32 startAddr,UINT32 len)
{
    UINT8 status = FBL_FAIL;

    if(compId < FBL_COMP_MAX)
    {
#ifdef FBL_COMP_STORE_PROG_INFO
        /* Store Programming Info into persistant memory */
        MEMCPY(&FblCompPersistData.compData[compId].testerInfo, &testerInfo, sizeof(struct SFblTesterInfoData));
        MEMSET(FblCompPersistData.compData[compId].sha256, 0u, 32u);
        (void)FblComp_SaveMem();
#endif /* FBL_COMP_STORE_PROG_INFO */

        status = FblMemDrv_Erase(FblCompMemInfoTbl[compId].memDriverId, startAddr, len);

        /* Increment reprogramming attempts */
    }
    return status;
}

/*============================================================================
 ** Function Name:    FblComp_Write
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to write data to memory.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 addr   - Address to write the data
 **                   UINT32 len    - Length of the data
 **                   UINT8 *pBuffer- Buffer pointer for the data
 **
 ** Return:           UINT8
 **                   FBL_OK    - Write Success
 **                   FBL_FAIL  - Write Failed
 **                   Additional errors thrown by the underlying transport
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblComp_Write(UINT32 addr, UINT32 len, UINT8 *pBuffer)
{
    UINT8 status = FBL_FAIL;
    UINT8 memDrvID;
    UINT8 i;

    for(i = 0u; i < FBL_COMP_MAX; i++)
    {
        if((addr >= FblCompMemInfoTbl[i].memStartAddr) && (addr <= FblCompMemInfoTbl[i].memEndAddr))
        {
            memDrvID = (UINT8)FblCompMemInfoTbl[i].memDriverId;
            status = FBL_OK;
            break;
        }
    }

    if(status == FBL_OK)
    {
        status = FblMemDrv_Write(memDrvID, (addr - FblCompMemInfoTbl[i].memOffset), &len, pBuffer);
    }

    return status;
}

/*============================================================================
 ** Function Name:    FblComp_Read
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read the data from memory.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 addr   - Address to read the data
 **                   UINT32 len    - Length of the data
 **                   UINT8 *pBuffer- Buffer pointer to copy the data
 **
 ** Return:           UINT8
 **                   FBL_OK    - Read Success
 **                   FBL_FAIL  - Read Failed
 **                   Additional errors thrown by the underlying transport
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblComp_Read(UINT32 addr, UINT32 len, UINT8 *pBuffer)
{
    UINT8 status = FBL_FAIL;
    UINT8 memDrvID;
    UINT8 i;

    for(i = 0u; i < FBL_COMP_MAX; i++)
    {
        if((addr >= FblCompMemInfoTbl[i].memStartAddr) && (addr <= FblCompMemInfoTbl[i].memEndAddr))
        {
            memDrvID = (UINT8)FblCompMemInfoTbl[i].memDriverId;
            status = FBL_OK;
            break;
        }
    }

    if(status == FBL_OK)
    {
        status = FblMemDrv_Read(memDrvID, (addr - FblCompMemInfoTbl[i].memOffset), &len, pBuffer);
    }

    return status;
}

/*============================================================================
 ** Function Name:    FblComp_GetCompIdFromAddress
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to get the component ID from address.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT32 addr   - Address to translate to component ID
 **
 ** Return:           UINT8             - Component ID
 **                   FBL_COMP_INVLAID  - Invalid Address
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblComp_GetCompIdFromAddress(UINT32 addr)
{
    UINT8 compId = FBL_COMP_INVLAID;

    UINT8 i;

    for(i = 0u; i < FBL_COMP_MAX; i++)
    {
        if((FblCompMemInfoTbl[i].memStartAddr <= addr) && (FblCompMemInfoTbl[i].memEndAddr >= addr))
        {
            compId = i;
            break;
        }
    }

    return compId;
}

/*============================================================================
 ** Function Name:    FblComp_GetSize
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to get the size of the component
 **                   in bytes
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 compId  - component ID
 **
 ** Return:           UINT32 - Size of the component in bytes
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT32  FblComp_GetSize(UINT8 compId)
{
    UINT32 size = 0u;

    if(compId < FBL_COMP_MAX)
    {
        size = (FblCompMemInfoTbl[compId].memEndAddr - FblCompMemInfoTbl[compId].memStartAddr) + 1u;
    }

    return size;
}

/*============================================================================
 ** Function Name:    FblComp_GetHeader
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to get the component header.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 compId  - component ID
 **                   struct SCompHeader *pCompHeader - Pointer to the header
 **                                   structure to copy the data
 **
 ** Return:           UINT8
 **                   FBL_FAIL  - Invalid Component ID
 **                   FBL_OK    - Success
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblComp_GetHeader(UINT8 compId, struct SCompHeader *pCompHeader)
{
    UINT8 status = FBL_FAIL;
    UINT32 size;

    if(compId < FBL_COMP_MAX)
    {
        status = FblMemDrv_Init(FblCompMemInfoTbl[compId].memDriverId, 0u);

        if(status == FBL_OK)
        {
            size = sizeof(struct SCompHeader);
            status = FblMemDrv_Read(FblCompMemInfoTbl[compId].memDriverId,
                                    FblCompMemInfoTbl[compId].memHeaderOffset,
                                    &size,
                                    (UINT8*)pCompHeader);
        }
        if(status == FBL_OK)
        {
            status = FblMemDrv_DeInit(FblCompMemInfoTbl[compId].memDriverId, 0u);
        }
    }

    return status;
}

/*============================================================================
 ** Function Name:    FblComp_GetNumReprogAttempts
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read the number of reprogramming
 **                   attempts for the specified component in this session.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 compId  - component ID
 **
 ** Return:           UINT8 - Number of reprogramming attempt
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT16  FblComp_GetNumReprogAttempts(UINT8 compId)
{
    UINT16 numAttempt = 0u;

    if(compId < FBL_COMP_MAX)
    {
        numAttempt = FblCompProgInfoTbl[compId].reprogAttempts;
    }

    return numAttempt;
}

/*============================================================================
 ** Function Name:    FblComp_GetMaxReprogAttempts
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read the maximum number of
 **                   reprogramming attempts for the specified component
 **                   in this session.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 compId  - component ID
 **
 ** Return:           UINT8 - Maximum of reprogramming attempt allowed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT16  FblComp_GetMaxReprogAttempts(UINT8 compId)
{
    UINT16 maxAttempt = 0u;

    if(compId < FBL_COMP_MAX)
    {
        maxAttempt = (UINT16)FblCompMemInfoTbl[compId].maxReprogAttempts;
    }

    return maxAttempt;
}

/*============================================================================
 ** Function Name:    FblComp_GetCrc64
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to get the Crc64 value of the
 **                   component
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 compId  - component ID
 **                   UINT64* crc64 - Pointer to store the CRC64 value
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    FblComp_GetCrc64(UINT8 compId, UINT64* crc64)
{
    UINT32 readIndex = 0u;
    UINT32 readLen;
    UINT32 startAddr = FblCompMemInfoTbl[compId].memStartAddr;
    UINT32 totalSize = FblCompMemInfoTbl[compId].memEndAddr - FblCompMemInfoTbl[compId].memStartAddr + 1u;

    *crc64 = 0u;

    while(readIndex < totalSize)
    {
        readLen = totalSize - readIndex;

        if(FBL_COMP_READ_BUFFER_SIZE < readLen)
        {
            readLen = FBL_COMP_READ_BUFFER_SIZE;
        }

        if(FBL_OK == FblComp_Read((startAddr + readIndex), readLen, readBuffer))
        {
            readIndex += readLen;

            FblCrypto_Crc64Iso(crc64, readBuffer, readLen);

            FblMain_RunTimer();
        }
        else
        {
            break;
        }
    }
    return;
}

#ifdef FBL_COMP_STORE_PROG_INFO
/*============================================================================
 ** Function Name:    FblComp_SaveSHA256
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to save the SHA256 value of the
 **                   component
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8  compId  - component ID
 **                   UINT8* pData   - Pointer to data buffer
 **                   UINT16 len     - Length of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    FblComp_SaveSHA256(UINT8 compId, const UINT8 *pData, UINT16 len)
{
    if((compId < FBL_COMP_MAX) && (FBL_COMP_SHA256_HASH_SIZE == len))
    {
        /* Copy the SHA-256 Signature */
        MEMCPY(FblCompPersistData.compData[compId].sha256, pData, len);
        /* Save in persistent memory */
        (void)FblComp_SaveMem();
    }
}

/*============================================================================
 ** Function Name:    FblComp_GetSHA256
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read the SHA256 value of the
 **                   component
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8  compId  - component ID
 **                   UINT8* pData   - Pointer to data buffer to copy
 **                   UINT16 len     - Length of the buffer
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblComp_GetSHA256(UINT8 compId, UINT8 *pData, UINT16 len)
{
    UINT8 status = FBL_FAIL;

    if((compId < FBL_COMP_MAX) && (FBL_COMP_SHA256_HASH_SIZE == len))
    {
        /* Copy the SHA-256 Signature */
        MEMCPY(pData, FblCompPersistData.compData[compId].sha256, len);
        status = FBL_OK;
    }
    return status;
}

/*============================================================================
 ** Function Name:    FblComp_WriteTesterInfo
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to store the Tester Information
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            struct SFblTesterInfoData *tInfo  - Tester Info
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblComp_WriteTesterInfo(const struct SFblTesterInfoData *tInfo)
{
    MEMCPY(&testerInfo, tInfo, sizeof(struct SFblTesterInfoData));
    return FBL_OK;
}

/*============================================================================
 ** Function Name:    FblComp_ReadTesterInfo
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to read the Tester Information
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 compId - Component ID
 **                   struct SFblTesterInfoData *tInfo  - Tester Info
 **
 ** Return:           UINT8
 **                   FBL_OK    - Success
 **                   FBL_FAIL  - Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblComp_ReadTesterInfo(UINT8 compId, struct SFblTesterInfoData *tInfo)
{
    UINT8 status = FBL_FAIL;

    if(compId < FBL_COMP_MAX)
    {
        MEMCPY(tInfo, &FblCompPersistData.compData[compId].testerInfo, sizeof(struct SFblTesterInfoData));
        status = FBL_OK;
    }

    return status;
}

#ifdef FBL_COMP_AUTHORIZATION
/*============================================================================
 ** Function Name:    FblComp_GetAuthorization
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to get the authorization status of
 **                   the component
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8  compId  - component ID
 **
 ** Return:           UINT8
 **                   FBL_COMP_APP_AUTHORIZED
 **                   FBL_COMP_NOT_AUTHORIZED
 **                   FBL_COMP_FACTORY_AUTHORIZED
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblComp_GetAuthorization(UINT8 compId)
{
    UINT8 status = FBL_COMP_NOT_AUTHORIZED;

    if(compId < FBL_COMP_MAX)
    {
        status = FblCompPersistData.compData[compId].authorization;
    }

    return status;
}

/*============================================================================
 ** Function Name:    FblComp_SetAuthorization
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to set the authorization status of
 **                   the component
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8  compId  - component ID
 **                   UINT8  authorization - Authorization Status
 **
 ** Return:           UINT8
 **                   FBL_FAIL - Operation failed
 **                   FBL_OK   - Operation success
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblComp_SetAuthorization(UINT8 compId, UINT8 authorization)
{
    UINT8 status = FBL_FAIL;

    if(compId < FBL_COMP_MAX)
    {
        FblCompPersistData.compData[compId].authorization = authorization;
        status = FblComp_SaveMem();
    }

    return status;
}

/*============================================================================
 ** Function Name:    FblComp_IsAuthorized
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to check if the component is
 **                   authorized to run
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8  compId  - component ID
 **
 ** Return:           UINT8
 **                   TRUE      - Component is authorized
 **                   FALSE     - Component is not authorized
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   FblComp_IsAuthorized(UINT8 compId)
{
    UINT8 valid = (UINT8)FALSE;
    UINT8 authorization;

    authorization = FblCompPersistData.compData[compId].authorization;

    if((FBL_COMP_FACTORY_AUTHORIZED == authorization) ||
       (FBL_COMP_APP_AUTHORIZED == authorization) ||
       (0x3Fu == authorization)) /* Virgin Memory */
    {
        valid = (UINT8)TRUE;
    }

    return valid;
}
#endif /* FBL_COMP_AUTHORIZATION */

/*============================================================================
 ** Function Name:    FblComp_SaveMem
 **
 ** Visibility:       Private
 **
 ** Description:      This function used to save the component persistant data
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FBL_OK    - Save success
 **                   FBL_FAIL  - Save failed
 **
 ** Critical Section: None.
 **==========================================================================*/
static UINT8 FblComp_SaveMem(void)
{
    UINT8 status;
    UINT32 size;

    size = sizeof(struct SFblCompPersistData);

    status = FblMemDrv_Erase(FBL_COMP_MEMDRV_ID, FBL_COMP_MEMDRV_OFFSET, size);

    if(status == FBL_OK)
    {
        status = FblMemDrv_Write(FBL_COMP_MEMDRV_ID, FBL_COMP_MEMDRV_OFFSET,
            &size, (UINT8*)&FblCompPersistData);
    }

#ifdef FBL_COMP_MEMDRV_MIRROR_OFFSET
    if(FBL_OK == status)
    {
        status = FblMemDrv_Erase(FBL_COMP_MEMDRV_ID, FBL_COMP_MEMDRV_MIRROR_OFFSET, size);

        if(status == FBL_OK)
        {
            status = FblMemDrv_Write(FBL_COMP_MEMDRV_ID, FBL_COMP_MEMDRV_MIRROR_OFFSET,
                &size, (UINT8*)&FblCompPersistData);
        }
    }
#endif

    return status;
}

/*============================================================================
 ** Function Name:    FblComp_LoadMem
 **
 ** Visibility:       Private
 **
 ** Description:      This function used to load the component persistant data
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FBL_OK    - Load success
 **                   FBL_FAIL  - Load failed
 **
 ** Critical Section: None.
 **==========================================================================*/
static UINT8 FblComp_LoadMem(void)
{
    UINT8 status;
    UINT32 size;

    size = sizeof(struct SFblCompPersistData);

    /* Read from primary copy */
    status = FblMemDrv_Read(FBL_COMP_MEMDRV_ID, FBL_COMP_MEMDRV_OFFSET,
                     &size, (UINT8*)&FblCompPersistData);

    if(status == FBL_OK)
    {
        if((FblCompPersistData.magicNumberStart != FBL_COMP_STORAGE_MAGIC_NUMBER_START) ||
           (FblCompPersistData.magicNumberEnd != FBL_COMP_STORAGE_MAGIC_NUMBER_END))
        {
            status = FBL_FAIL;
        }
    }

    /* Read from mirror copy, if primary copy is failed */
#ifdef FBL_COMP_MEMDRV_MIRROR_OFFSET
    if(FBL_FAIL == status)
    {
        status = FblMemDrv_Read(FBL_COMP_MEMDRV_ID, FBL_COMP_MEMDRV_MIRROR_OFFSET,
                        &size, (UINT8*)&FblCompPersistData);

        if(FBL_OK == status)
        {
            if((FblCompPersistData.magicNumberStart != FBL_COMP_STORAGE_MAGIC_NUMBER_START) ||
               (FblCompPersistData.magicNumberEnd != FBL_COMP_STORAGE_MAGIC_NUMBER_END))
            {
                status = FBL_FAIL;
            }
        }
    }
#endif

    /* Write default values if both primary and mirror failed */
    if(FBL_FAIL == status)
    {
        MEMSET(&FblCompPersistData, 0, sizeof(struct SFblCompPersistData));
        FblCompPersistData.magicNumberStart = FBL_COMP_STORAGE_MAGIC_NUMBER_START;
        FblCompPersistData.magicNumberEnd = FBL_COMP_STORAGE_MAGIC_NUMBER_END;

        /* This happens only once. Make the components as factory authorized */
        FblCompPersistData.compData[0].authorization = FBL_COMP_FACTORY_AUTHORIZED;
        FblCompPersistData.compData[1].authorization = FBL_COMP_FACTORY_AUTHORIZED;
        FblCompPersistData.compData[2].authorization = FBL_COMP_FACTORY_AUTHORIZED;

        status = FblComp_SaveMem();
    }

    return status;
}
#endif /* FBL_COMP_STORE_PROG_INFO */
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
