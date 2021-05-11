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

File Name        :  udsmgr.c
Module Short Name:  vehiclecomm.core.fbl.hyundai
VOBName          :  vehiclecomm.core.fbl.hyundai\uds\src\udsmgr.c
Author           :  kshanmu4
Description      :  UDS Manager functions
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
#include "fbl_app_cfg.h"
#include "fbl_app.h"

/**  Private Functions  **/
static BOOLEAN UdsMgr_TravBoolVoidLst(BOOLEAN (*const (*list_ptr))(void));

/**  Private Variables  **/
static UINT8  udsDiagResponseBuffer[MAX_DATA_RESPONSE];
static UINT16 udsDiagResponseBufferLen;
/*
** The 'deny_diag_request_process_list' lists pre-conditions for 
** executing the dianostic commands
*/
static BOOLEAN (*const DenyDiagReqProcessList[])(void)  =
{
  PROD_SPEC_DENY_DIAG_REQUEST_LIST
  NULL_PTR
};

/*============================================================================
 ** Function Name:    UdsMgr_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS Manager
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_Init(void)
{
	//#ifndef J59_SBL
	UdsMgr_DiagnosticSessionControlInit();
	UdsMgr_SecurityAccessInit();
	//#endif
	UdsMgr_RoutineControlInit();
	UdsMgr_RequestDownloadInit();
	UdsMgr_TesterPresentInit();
	UdsMgr_EcuResetInit();
    UdsMgr_Fingerprint_Data_Init();    
}

/*============================================================================
 ** Function Name:    UdsMgr_IsDiagReqPermitted 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to evaluate conditions if the 
 **                   digonstics request can be performed or not
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           BOOLEAN
 **                   TRUE  - Diagonstics can be performed
 **                   FALSE - Diagonstics cannot be performed
 **
 ** Critical Section: None.
 **==========================================================================*/
BOOLEAN UdsMgr_IsDiagReqPermitted(void)
{
	return UdsMgr_TravBoolVoidLst(DenyDiagReqProcessList);
}

/*============================================================================
 ** Function Name:    UdsMgr_SendPositiveResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to send positive response
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 *pBuffer - Data to be sent to the tester
 **                   UINT16 len - Size of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_SendPositiveResponse(const UINT8 *pBuffer, UINT16 len)
{
	udsdiag_setpositiveresponse(len, pBuffer);
	udsdiag_processingdone(udsdiag_currreq, len);	
}

/*============================================================================
 ** Function Name:    UdsMgr_SendResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to send postive/negative response
 **                   It is used when response buffer is used
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 status - Response Code
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_SendResponse(UINT8 status)
{
	if(NO_ERROR == status)
	{
		udsdiag_setpositiveresponse(udsDiagResponseBufferLen, udsDiagResponseBuffer);
		udsdiag_processingdone(udsdiag_currreq, udsDiagResponseBufferLen);			
	}
	else
	{
		udsdiag_setnegativeresponse (udsdiag_currreq, status);
		udsdiag_processingdone(udsdiag_currreq,1u);
	}
}

/*============================================================================
 ** Function Name:    UdsMgr_SendNegativeResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to send negative response
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 resp - Negative Response Code
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_SendNegativeResponse(UINT8 resp)
{
	udsdiag_setnegativeresponse (udsdiag_currreq, resp);
	udsdiag_processingdone(udsdiag_currreq,1u);
}

/*============================================================================
 ** Function Name:    UdsMgr_SuppressResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to suppress response for a request
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_SuppressResponse(void)
{
	udsdiag_postprocessing(udsdiag_currreq, 1u);
}

/*============================================================================
 ** Function Name:    UdsMgr_InitResponseBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_InitResponseBuffer(void)
{
	MEMSET(udsDiagResponseBuffer, 0, MAX_DATA_RESPONSE);
	udsDiagResponseBufferLen = 0u;
}

/*============================================================================
 ** Function Name:    UdsMgr_AddByteToRespBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used add a byte of data to the
 **                   response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 byte - data to add
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_AddByteToRespBuffer(UINT8 byte)
{
	udsDiagResponseBuffer[udsDiagResponseBufferLen] = byte;
	udsDiagResponseBufferLen++;
}

/*============================================================================
 ** Function Name:    UdsMgr_GetByteArrayRespBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used allocate data in the respone buffer
 **                   and return the pointer to copy the data
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT32 len - length to allocate
 **
 ** Return:           UINT8*
 **                   Pointer to the allocated buffer
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8* 	UdsMgr_GetByteArrayRespBuffer(UINT32 len)
{
	UINT8 *retPtr = NULL;
	
	if(MAX_DATA_RESPONSE > (udsDiagResponseBufferLen + len))
	{
		retPtr = &udsDiagResponseBuffer[udsDiagResponseBufferLen];
		udsDiagResponseBufferLen += (UINT16)len;
	}
	return retPtr;
}

/*============================================================================
 ** Function Name:    UdsMgr_GetByteArrayRespBufferPointer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used get the pointer to the response
 **                   buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT32 index - Index in the response buffer
 **
 ** Return:           UINT8*
 **                   Pointer to the response buffer
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8* 	UdsMgr_GetByteArrayRespBufferPointer(UINT32 index)
{
	UINT8 *retPtr = NULL;
	
	if(MAX_DATA_RESPONSE > index)
	{
		retPtr = &udsDiagResponseBuffer[index];
	}
	return retPtr;
}

/*============================================================================
 ** Function Name:    UdsMgr_GetRespBufferLength 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used get the size of the response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           UINT16
 **                   Size of the response buffer
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT16 	UdsMgr_GetRespBufferLength(void)
{
	return udsDiagResponseBufferLen;
}

/*============================================================================
 ** Function Name:    UdsMgr_AddByteArrayToRespBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used add byte array to the response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 *pBuffer - Pointer to the data
 **                   UINT32 len - Size of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_AddByteArrayToRespBuffer(const UINT8 *pBuffer, UINT32 len)
{
	if((NULL != pBuffer) && (MAX_DATA_RESPONSE > (udsDiagResponseBufferLen + len)))
	{
		MEMCPY(&udsDiagResponseBuffer[udsDiagResponseBufferLen], (UINT8 *)pBuffer, len);
		udsDiagResponseBufferLen += (UINT16)len;
	}
}

/*============================================================================
 ** Function Name:    UdsMgr_TravBoolVoidLst 
 **
 ** Visibility:       Private
 **
 ** Description:      This function is traverse array of funtion pointers and
 **                   returns the value
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           BOOLEAN (*const (*list_ptr))(void) - List of functions
 **
 ** Return:           BOOLEAN
 **                   1 - If any one function return TRUE
 **                   0 - If all functions return FALSE
 **
 ** Critical Section: None.
 **==========================================================================*/
static BOOLEAN UdsMgr_TravBoolVoidLst(BOOLEAN (*const (*list_ptr))(void))
{
    BOOLEAN status = 0u;

    if(NULL_PTR != list_ptr)
	{
        while((NULL_PTR != *list_ptr) /*&& (ZERO == status)*/)
        {
            if(FALSE != ((**list_ptr)()))
            {
                status = 1u;
                break;
            }
            ++list_ptr;
        }
    }
    return (status);
}

/*============================================================================
 ** Function Name:    ApplDiagSessionTimeout 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called when session timeout happens
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void ApplDiagSessionTimeout(void)
{
	/* Reset ECU */
	(void)FblApp_ResetECU();	
}

/*============================================================================
 ** Function Name:    ApplDiagServiceTimeout 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called when service timeout happens
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void ApplDiagServiceTimeout(void)
{
	/* TODO: Handle Service Timeout */
}

/*============================================================================
 ** Function Name:    ApplRcrrpcallback 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called for RCRRP
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void ApplRcrrpcallback(void)
{
	/* TODO: Handle Rcrrpcallback */
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
