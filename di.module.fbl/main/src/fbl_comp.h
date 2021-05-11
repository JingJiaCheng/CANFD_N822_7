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

File Name        :  fbl_comp.h
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_comp.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported
                    by fbl_comp.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_COMP_H
#define FBL_COMP_H

/**  Include Files  **/
#include "system.h"
#include "fbl_comp_cfg.h"

/**  Macro Definitions  **/
#define FBL_COMP_INVLAID            0xFFu

#define FBL_COMP_APP_AUTHORIZED     0x00u
#define FBL_COMP_NOT_AUTHORIZED     0x01u
#define FBL_COMP_FACTORY_AUTHORIZED 0xFFu

#define FBL_COMP_COMMIT_HASH_SIZE   5u
#define FBL_COMP_BUILD_NUM_SIZE     4u
#define FBL_COMP_SHA256_HASH_SIZE   32u

/**  Structure Definitions  **/

/**  Component Version Header Definition  **/
#ifdef COMPILER_RENESAS_SHC
#pragma pack 1
#endif
struct SCompVerHeader
{
    UINT8 majorVersion;
    UINT8 minorVersion;
    UINT8 patchVersionHigh;
    UINT8 patchVersionLow;
#ifdef FBL_COMP_VERSION_INFO_FULL
    UINT8 builderId;
    UINT8 buildYear;
    UINT8 buildMonth;
    UINT8 buildDay;
    UINT8 buildHour;
    UINT8 buildMinute;
    UINT8 commitHash[FBL_COMP_COMMIT_HASH_SIZE];
    UINT8 buildNumber[FBL_COMP_BUILD_NUM_SIZE];
#endif
};
#ifdef COMPILER_RENESAS_SHC
#pragma unpack
#endif

/**  Component Header Definition  **/
#ifdef COMPILER_RENESAS_SHC
#pragma pack 1
#endif
struct SCompHeader
{
    struct SCompVerHeader version;
};
#ifdef COMPILER_RENESAS_SHC
#pragma unpack
#endif

/**  Tester Info Definition  **/
#ifdef COMPILER_RENESAS_SHC
#pragma pack 1
#endif
struct SFblTesterInfoData
{
    UINT8   year;
    UINT8   month;
    UINT8   date;
    UINT8   testerId[FBL_COMP_TESTER_ID_BYTES];
};
#ifdef COMPILER_RENESAS_SHC
#pragma unpack
#endif
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
void    FblComp_Init(void);

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
void    FblComp_DeInit(void);

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
UINT8 FblComp_Erase(UINT8 compId,UINT32 startAddr,UINT32 len);

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
UINT8   FblComp_Write(UINT32 addr, UINT32 len, UINT8 *pBuffer);

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
UINT8   FblComp_Read(UINT32 addr, UINT32 len, UINT8 *pBuffer);

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
UINT8   FblComp_GetCompIdFromAddress(UINT32 addr);

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
UINT8   FblComp_GetHeader(UINT8 compId, struct SCompHeader *pCompHeader);

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
UINT16  FblComp_GetNumReprogAttempts(UINT8 compId);

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
UINT16  FblComp_GetMaxReprogAttempts(UINT8 compId);

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
UINT32  FblComp_GetSize(UINT8 compId);

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
void    FblComp_GetCrc64(UINT8 compId, UINT64* crc64);

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
UINT8   FblComp_GetAuthorization(UINT8 compId);

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
UINT8   FblComp_SetAuthorization(UINT8 compId, UINT8 authorization);

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
UINT8   FblComp_IsAuthorized(UINT8 compId);
#endif

#ifdef FBL_COMP_STORE_PROG_INFO
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
UINT8   FblComp_WriteTesterInfo(const struct SFblTesterInfoData *tInfo);

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
UINT8   FblComp_ReadTesterInfo(UINT8 compId, struct SFblTesterInfoData *tInfo);

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
UINT8   FblComp_GetSHA256(UINT8 compId, UINT8 *pData, UINT16 len);

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
void    FblComp_SaveSHA256(UINT8 compId, const UINT8 *pData, UINT16 len);
#endif /* FBL_COMP_STORE_PROG_INFO */

#endif /* FBL_COMP_H */
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
