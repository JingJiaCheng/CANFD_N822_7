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

File Name        :  fbl_can_drv.c
Module Short Name:  fbl.drivers.sh726x\can
VOBName          :  fbl.drivers.sh726x\can\src\fbl_can_drv.c
Author           :  kshanmu4
Description      :  Implements the CAN driver.
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/

/**  Include Files  **/
#include "fbl_can_drv.h"
#include "fbl_can_cfg.h"

#ifdef KWP_PROTOCOL
	#include "kwpmgr.h" 
#else
	#include "udsmgr.h"
#endif

#include "can_defs.h"
#include "tp_cfg.h" 
#include "fbl_wdt_drv.h"
#include "fbl_app.h"

#define GW_NUM_INSTANCE 1

/**  Private Variables  **/
static UINT8 transmitBuffer[CAN_MAX_DATA_LENGTH];

static CAN_TMD __far const tp_resp_tmd =
{
    CAN_GPNUM_8,                                   /* CAN message data length  */
    {VTP_RESPONSE_ID},                               /* CAN message identifier   */
    &transmitBuffer[0],                            /* Pointer to Data          */
    CANB_TX_STD_DATA,                              /* CAN message options      */
    VTP_MESSAGE_HANDLE                             /* Transmit Message Handle  */
};

static UINT8 fbl_can_tx_state;
static UINT8 busoff_time_cnt = 0u;

static void Can_ControllerBusOff(CAN_UINT8 ControllerId);
static void Can_MainFunction( CAN_UINT8 controllerIndex );

 /*============================================================================
 ** Function Name:    FblCanDrv_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the CAN Bus
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void FblCanDrv_Init(void)
{
#ifdef FBL_CAN_USE_XCVR
  CANXCVR_Initialize((UINT8)FBL_CAN_CHANNEL_ID);
  Can_BusTransceiverToNormal();
#endif
  (void)Can_Init((UINT8)FBL_CAN_CHANNEL_ID);
}

 /*============================================================================
 ** Function Name:    FblCanDrv_Send
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to send a frame over the CAN Bus
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 handle   - CAN Tramsit Handle
 **                   UINT16 canId   - CAN Message ID
 **                   UINT8 *pData   - Pointer to the data buffer
 **                   UINT8 len      - Length of the data buffer
 **
 ** Return:           FBL_OK - Success
 **                   FBL_FAIL - Transmit failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCanDrv_Send(UINT8 handle, UINT16 canId, const UINT8 *pData, UINT8 len)
{
    UINT8 status = FBL_FAIL;

  CAN_TMD __far const * pTxTmd;
    UINT8 i;

    for(i = 0u; ((i < len) && (i < CAN_MAX_DATA_LENGTH)); i++)
    {
        transmitBuffer[i] = pData[i];
    } 

  pTxTmd = &tp_resp_tmd;

    if(CANRC_OK == CanHwTransmit(CANH_MV_0, pTxTmd, FBL_CAN_CHANNEL_ID))
  {
    status = FBL_OK;
        fbl_can_tx_state = (UINT8)TRUE;
  }

    return (status);

}

 /*============================================================================
 ** Function Name:    FblCanDrv_Task
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to service the CAN Bus task
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void FblCanDrv_Task(void)
{
    Can_MainFunction(FBL_CAN_CHANNEL_ID);
}

 /*============================================================================
 ** Function Name:    Can_TxConfirmation
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called by the CAN driver to confirm the
 **                   transmission of the CAN frame
 **
 ** Invocation:       Invoked by CAN Driver
 **
 ** Inputs            PduIdType pdu - Transmit Handle
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void Can_TxConfirmation(CAN_UINT16 pdu)
{
    FblCanDrv_TxConfirmCallback((CAN_UINT8)pdu);
}

 /*============================================================================
 ** Function Name:    Can_ControllerBusOff
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called by the CAN driver during bus off
 **
 ** Invocation:       Invoked by CAN Driver
 **
 ** Inputs            CAN_UINT8 ControllerId - CAN Channel ID
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
static void Can_ControllerBusOff(CAN_UINT8 ControllerId)
{
  busoff_time_cnt++;
  if(busoff_time_cnt == FBL_BUS_OFF_CHECK_PERIOD)
  {
    busoff_time_cnt = 0u;
    if(CANRC_TRUE == CanHwGetBusOFFStatus(FBL_CAN_CHANNEL_ID))
    {
        (void)Can_Init((UINT8)FBL_CAN_CHANNEL_ID);
    }
    else
    {
    }
  }
}

 /*============================================================================
 ** Function Name:    Can_MainFunction
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called by the CAN driver when a
 **                   CAN Frame is received
 **
 ** Invocation:       Invoked by CAN Driver
 **
 ** Inputs            CAN_UINT8 controllerIndex - Channel ID
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
static void Can_MainFunction( CAN_UINT8 controllerIndex )
{
  CAN_RC rC=CANRC_FALSE;
  CAN_RC Busoff_status=CANRC_FALSE;
  CAN_RMD canTempRmd;
  UINT8 DataPtr[8]={0xFFu,0xFFu,0xFFu,0xFFu,0xFFu,0xFFu,0xFFu,0xFFu};
  UINT8 dataidx;
  UINT32 MessageId;
  UINT8 MessageLength;
  UINT8 mailbox;
    
  FblWdtDrv_Pet();
  
  mailbox = CanHwRxBufferIntStatusReq(FBL_CAN_CHANNEL_ID);

  if (mailbox < CAN0_NUM_MAILBOXES)
  {
  	rC = CanHwReceive((CAN_HMV )mailbox,&canTempRmd,FBL_CAN_CHANNEL_ID);
  	CanHwRxBufferIntStatusClr(mailbox, FBL_CAN_CHANNEL_ID);
  }  


    if(rC == CANRC_OK)
    {
        if((canTempRmd.Identifier.I32 == VTP_DIAG_PHY_PF) || (canTempRmd.Identifier.I32 == VTP_DIAG_FUNC_PF))
        { 
      MessageId = canTempRmd.Identifier.I32;
      MessageLength = canTempRmd.Size;
      for(dataidx=0u ; dataidx < MessageLength ; dataidx++ )
      {
        DataPtr[dataidx] = canTempRmd.Data[dataidx];
      }
      FblCanDrv_RxIndication(MessageId, MessageLength, DataPtr);

    }
    else
    {
    }
    }
  else
  {
  }

    if(fbl_can_tx_state  == (UINT8)TRUE)
    {
        rC = CanHwTxIsPending(CANH_MV_0, FBL_CAN_CHANNEL_ID);

        if(rC == CANRC_FALSE)
        {
        Busoff_status =  CanHwGetBusOFFStatus(FBL_CAN_CHANNEL_ID);
        if(Busoff_status==CANRC_FALSE)
        {
	        CanHwTxBufferIntStatusClr(CANH_MV_0, CAN_CH_CCAN);
            fbl_can_tx_state = (UINT8)FALSE;
            FblCanDrv_TxConfirmCallback(VTP_MESSAGE_HANDLE);
        }
        }
    else
    {
    }
    }
  else
  {
  }

  /* Bus Off handling */
  Can_ControllerBusOff(FBL_CAN_CHANNEL_ID);
  
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
Date              : 21-NOV-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
