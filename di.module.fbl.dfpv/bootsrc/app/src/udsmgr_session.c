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

#include "udsmgr_cfg.h"
#include "udsdiag.h"
#include "udsmgr.h"
#include "fbl_app.h"

/**  Private Variables  **/
UINT8    curSession;
UINT8   ResetFlag = FALSE; 
/*static UINT8    reqSession*/

/*============================================================================
 ** Function Name:    UdsMgr_DiagnosticSessionControlInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS diagnostic 
 **                   session request handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_DiagnosticSessionControlInit(void)
{
    curSession = SESSION_DEFAULT;
    /*reqSession = SESSION_DEFAULT*/
}

/*============================================================================
 ** Function Name:    UdsMgr_DiagnosticSessionControlPostHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the ECU Reset post
 **                   request handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_DiagnosticSessionControlPostHandler(void)
{
    if(ResetFlag == (UINT8) TRUE)
    {
        (void)FblApp_ResetECU();

        ResetFlag = (UINT8) FALSE;
    }
}

/*============================================================================
 ** Function Name:    UdsMgr_DiagnosticSessionControlHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS diagnostic
 **                   session request
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
void UdsMgr_DiagnosticSessionControlHandler(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    UINT8   reqSes;
    UINT8   status;  
	UINT8   pos_responce[5]; 
    UINT8   ResetFlag = FALSE; 

    status    = NRC_SUBFUNCTION_NOT_SUPPORTED;    /* Assume subfunction is not supported  */

    if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
    {
        status = NRC_CONDITIONS_NOT_CORRECT;
    }
    else if((NULL == pData) || (dataLen != DATA_LEN_1_BYTE))
    {
        status = NRC_INVALID_FORMAT;
    }
    else
    {
        reqSes    = pData[0] & RESPONSE_SUPPRESS_MASK;

        switch(GET_SESSION())
        {
            case SESSION_DEFAULT:
            if(reqSes == SESSION_DEFAULT)
            {
                status = NO_ERROR;
            }
            else if(reqSes == SESSION_PROGRAMMNG)
            {
                status = NRC_CONDITIONS_NOT_CORRECT;
            }
			else if(reqSes == SESSION_EXTENDED)
			{
				status = NO_ERROR;
			} 
            else
            {
                
            }
            break;
            
            case SESSION_PROGRAMMNG:
            if(reqSes == SESSION_DEFAULT)
            {
                /* Clear Security Access */
                /*UdsMgr_SecurityAccessReset();*/
                ResetFlag = TRUE; 
                status = NO_ERROR;
            }
            else if(reqSes == SESSION_PROGRAMMNG)
            {
                status = NO_ERROR;
            }
			else if(reqSes == SESSION_EXTENDED)
			{
				status = NRC_CONDITIONS_NOT_CORRECT;
			}			
            else
            {
                
            }
            break;
            
			case SESSION_EXTENDED:
            if(reqSes == SESSION_DEFAULT)
            {
                /* Clear Security Access */
                /*UdsMgr_SecurityAccessReset();*/

                status = NO_ERROR;
            }
            else if(reqSes == SESSION_PROGRAMMNG)
            {
                status = NO_ERROR;
            }
			else if(reqSes == SESSION_EXTENDED)
			{
				status = NO_ERROR;
			}			
            else
            {
                
            }			
			break;
			
            default:
            	status = NRC_SUBFUNCTION_NOT_SUPPORTED;
            break;
        }
    }
  
    /*
    ** If request is valid, send positive response and take action for session change.  
    */
    if(status != NO_ERROR)
    {
        UdsMgr_SendNegativeResponse(status);
    }
    else
    {
        /* Update the Session */
        UPDATE_SESSION(reqSes);
        
        curSession = reqSes;


        if ((udsdiagu8)FALSE == UDS_INSPECT_POS_RSP_SUPPRESSED(pData))
        {
			pos_responce[0]= curSession;
			pos_responce[1]= 0x00u;
			pos_responce[2]= 0x32u;
			pos_responce[3]= 0x01u;
			pos_responce[4]= 0xF4u;
            UdsMgr_SendPositiveResponse((UINT8 *)pos_responce,DATA_LEN_5_BYTE);
        } 
        else
        {
            UdsMgr_SuppressResponse();
        }
    }   
}

/*============================================================================
 ** Function Name:    UdsMgr_GetCurrentDiagnosticSession 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to retrieve the current 
 **                   diagnostic session
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None 
 **
 ** Return:           UINT8 - Current Diagnostic Session ID
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   UdsMgr_GetCurrentDiagnosticSession(void)
{
    return curSession;
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
