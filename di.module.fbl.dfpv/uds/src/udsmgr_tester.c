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
VOBName          :  vehiclecomm.core.fbl.hyundai\uds\src\udsmgr_tester.c
Author           :  kshanmu4
Description      :  UDS Tester Present Message Handler
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "fbl_main.h"
#include "udsmgr.h"
#include "udsmgr_cfg.h"
#include "udsdiag.h"

#define UDS_DO_NOT_SUPPRESS_RESPONSE			(0x00u)
#define UDS_RESPONSE_SUPPRESS					(0x80u)
/*============================================================================
 ** Function Name:    UdsMgr_TesterPresentInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the Tester present 
 **                   handler
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_TesterPresentInit(void)
{
    /* Do nothing */
}

/*============================================================================
 ** Function Name:    UdsMgr_TesterPresentHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the Tester present 
 **                   request
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs:           UINT8 *pData   - Data associated with the request
 **                   UINT16 dataLen - Length of the data 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_TesterPresentHandler(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    UINT8   status = NO_ERROR;
    UINT8	subfunc= NO_ERROR;
    
    if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
    {
        status = NRC_CONDITIONS_NOT_CORRECT;			/*NRC - 31*/
    }
    else if((NULL == pData) || (DATA_LEN_1_BYTE != dataLen))
    {
        status = NRC_INVALID_FORMAT;					/*NRC - 13*/
    }
    else
    {
    	subfunc = pData[0];
    	if( (subfunc != UDS_DO_NOT_SUPPRESS_RESPONSE) && (subfunc != UDS_RESPONSE_SUPPRESS) )
    	{
    		status	=	NRC_SUBFUNCTION_NOT_SUPPORTED;	/*NRC - 12*/
    	}
    }
    
    /*If request is valid, send positive response and take action for session change.*/
    if(NO_ERROR != status)
    {
        UdsMgr_SendNegativeResponse(status);
    }
    else
    {
        if(0u == UDS_INSPECT_POS_RSP_SUPPRESSED(pData))
        {
            UdsMgr_SendPositiveResponse(&status, 1u);
        }
        else
        {
            UdsMgr_SuppressResponse();
        }
    }   
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
