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

/**  Macro Definitions  **/
#define UDS_SEC_WAIT_FOR_SEED       0u
#define UDS_SEC_WAIT_FOR_KEY        1u

#define UDS_SEC_SUBFUNC_REQ_SEED    0x09 //0x03u lhan4
#define UDS_SEC_SUBFUNC_VERIFY_KEY  0x0A //0x04u lhan4

#define UDS_SEC_SEED_SIZE           4u
#define UDS_SEC_KEY_SIZE            4u

#define S27_FAIL_COUNT              (3u) 

/**  Private Variables  **/
static UINT8    securityState;
static UINT8    securityErrorCount;

/**  Private Functions  **/
static UINT8 UdsMgr_ProcessSeedRequest(void);
static UINT8 UdsMgr_ProcessKeyRequest(const UINT8 *pData);

/*============================================================================
 ** Function Name:    UdsMgr_SecurityAccessInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS security 
 **                   access handlers
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_SecurityAccessInit(void)
{
    securityState = UDS_SEC_WAIT_FOR_SEED;
    securityErrorCount = 0;
}

/*============================================================================
 ** Function Name:    UdsMgr_SecurityAccessHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Security Access
 **                   request
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           UINT8 *pData   - Data associated with the request
 **                   UINT16 dataLen - Length of the data 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_SecurityAccessHandler(udsdiagu8 *pData, udsdiagu16 dataLen)
{
	UINT8 status	=	NO_ERROR;
	UINT8 subfunc;
	UINT8 curSes;
	UINT8 Pos;

	curSes = UdsMgr_GetCurrentDiagnosticSession();

	if (Security_Level_Access != Active)
	{
		status = NRC_REQUEST_SEQUENCE_ERROR;
	}
	else
	{
		if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
		{
			status = NRC_CONDITIONS_NOT_CORRECT;
		}
		else if((curSes == SESSION_DEFAULT)||(curSes == SESSION_EXTENDED))
		{
			status = NRC_SUBFUNCTION_NOT_SUPPORTED_IN_ACTIVE_SESSION;
		}
		else if(NULL == pData)
		{
			status = NRC_INVALID_FORMAT;
		}
		else
		{
			subfunc = pData[0] & RESPONSE_SUPPRESS_MASK;

			UdsMgr_InitResponseBuffer();
			UdsMgr_AddByteToRespBuffer(pData[0]);

			if(UDS_SEC_SUBFUNC_REQ_SEED == subfunc)
			{            
				if (DATA_LEN_1_BYTE != dataLen)
				{
					status = NRC_INVALID_FORMAT;
				}
				else
				{
					if(FblSec_VerifySecurityAccess() == FBL_OK)
					{
						for(Pos=0u; Pos<UDS_SEC_SEED_SIZE; Pos++)
						{
							UdsMgr_AddByteToRespBuffer(0x00u);
						}
					}
					else
					{
						status = UdsMgr_ProcessSeedRequest();
					}
				}
			}
			else if(UDS_SEC_SUBFUNC_VERIFY_KEY == subfunc)
			{            
				if (DATA_LEN_5_BYTE != dataLen)
				{
					status = NRC_INVALID_FORMAT;
				}
				else if (UDS_SEC_WAIT_FOR_KEY != securityState)
				{
					status = NRC_REQUEST_SEQUENCE_ERROR;
				}
				else
				{
					status = UdsMgr_ProcessKeyRequest(pData);
				}
			}   
			else
			{
				status = DIAG_NRC_SUBFUNC_NOTSUPPORTED;
			}
		}
	}
	/* Send Response */
	UdsMgr_SendResponse(status);
}

/*============================================================================
 ** Function Name:    UdsMgr_SecurityAccessReset 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to clear the security access
 **                   
 ** Invocation:       Invoked by UDS
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_SecurityAccessReset(void)
{
    securityState = UDS_SEC_WAIT_FOR_SEED;
}

/*============================================================================
 ** Function Name:    UdsMgr_ProcessSeedRequest 
 **
 ** Visibility:       Private
 **
 ** Description:      This function is used request seed for a comp ID
 **                   
 ** Invocation:       Invoked by UDS
 **                   
 ** Inputs:           UINT8 compId - Component ID
 **
 ** Return:           UINT8
 **                   NO_ERROR - Request Success
 **                   NRC_REQUEST_OUT_OF_RANGE - Request Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
static UINT8 UdsMgr_ProcessSeedRequest(void)
{
    UINT8 status = NO_ERROR;

    if(FBL_OK == FblSec_RequestSeed( 
                    UdsMgr_GetByteArrayRespBuffer(UDS_SEC_SEED_SIZE), 
                    UDS_SEC_SEED_SIZE))
    {
        securityState = UDS_SEC_WAIT_FOR_KEY;
    }
    else
    {
        status = NRC_REQUEST_OUT_OF_RANGE;
    }

    return status;
} 

/*============================================================================
 ** Function Name:    UdsMgr_ProcessKeyRequest 
 **
 ** Visibility:       Private
 **
 ** Description:      This function is used verify the Key sent by tester
 **                   
 ** Invocation:       Invoked by UDS
 **                   
 ** Inputs:           UINT8 *pData - Pointer to the Key buffer
 **
 ** Return:           UINT8
 **                   NO_ERROR - Key Verified
 **                   NRC_INVALID_KEY - Invalid Key
 **
 ** Critical Section: None.
 **==========================================================================*/
static UINT8 UdsMgr_ProcessKeyRequest(const UINT8 *pData)
{
    UINT8 status = NO_ERROR;
    
    if(FBL_OK == FblSec_VerifyKey(&pData[1], UDS_SEC_KEY_SIZE))
    {
        securityState = UDS_SEC_WAIT_FOR_SEED;
        securityErrorCount = 0;
    }
    else
    {
        securityErrorCount++;
        if ( securityErrorCount <= S27_FAIL_COUNT )
        {
            status = NRC_INVALID_KEY;
        }
        else
        {
            status = NRC_EXCEEDED_NUMBER_ATTEMPTS;
        }
    }

    return status;
}
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
