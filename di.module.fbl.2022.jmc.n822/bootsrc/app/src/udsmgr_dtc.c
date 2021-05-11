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
File Name        :  udsmgr_did.c
Module Short Name:  di.module.fbl.china
VOBName          :  di.module.fbl.china\uds\src\udsmgr_did.c
Author           :  MABUBACK
Description      :  Now it supports only NRC .
 ******************************************************************************/
/**  Include Files  **/
#include "udsmgr.h"
#include "udsmgr_cfg.h"
#include "udsdiag.h"


#define KWPMGR_ENABLE_DTC_SUBFUNC_ID       	                	(0x01u)
#define KWPMGR_DISABLE_DTC_SUBFUNC_ID 		                   	(0x02u)

/* ==========================================================================
 Name		 : UdsMgr_Control_DTC_setting
 Description : Enable's or Disable's DTC setting
=============================================================================*/
void UdsMgr_Control_DTC_setting(UINT8 *pdiagdata,UINT16 dataLen)
{
	UINT8 status 	= NO_ERROR;
	UINT8 subfunc	= NO_ERROR;

	if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
	{
		status = NRC_CONDITIONS_NOT_CORRECT;		/*NRC - 22*/
	}
	else if((NULL == pdiagdata) || (DATA_LEN_1_BYTE != dataLen)) /*Check Whether the length is 1 byte and not a NULL pointer*/
	{
		status = NRC_INVALID_FORMAT;				/*NRC - 13*/
	}
	else
	{
		subfunc = pdiagdata[0];
		UdsMgr_InitResponseBuffer();/* Initialize Response Buffer with default value*/
		UdsMgr_AddByteToRespBuffer(subfunc);

        subfunc = subfunc & RESPONSE_SUPPRESS_MASK;        

		switch(subfunc)
		{
    		case KWPMGR_ENABLE_DTC_SUBFUNC_ID:
    			status 		= NO_ERROR;
    			break;
    		case KWPMGR_DISABLE_DTC_SUBFUNC_ID:
    			status 		= NO_ERROR;
    			break;
    		default:
    			status = NRC_SUBFUNCTION_NOT_SUPPORTED;	/*NRC - 12*/
    			break;
		}
	}
	/* Send response */
	UdsMgr_SendResponse(status);
}
