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

File Name        :  uds_tp.c
Module Short Name:  vehiclecomm.core.fbl.diag
VOBName          :  vehiclecomm.core.fbl.diag\uds\src\uds_tp.c
Author           :  kshanmu4
Description      :  Defines Logic for TP interface of UDS Stack
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
******************************************************************************/

#include "system.h"
#include "tp.h"
#include "tp_cfg.h"
#include "fbl_can_drv.h"

#ifndef CAN_MAX_DATA_LENGTH
#define CAN_MAX_DATA_LENGTH			(8u)
#endif

static VTP_UINT32 		Msg_ID = 0u;
static VTP_UINT8*       VTP_RxDataptr;
static VTP_UINT16       VTP_Datasize;

/*******************************************************************************
** FUNCTION NAME  :  VTP_Call_DllTransmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
VTP_UINT8 VTP_Call_DllTransmit(void)
{
	VTP_UINT8 ret;
	UINT8 status;

	status = FblCanDrv_Send(VTP_MESSAGE_HANDLE, VTP_RESPONSE_ID, &VTP_TxMsg.Data[0], CAN_MAX_DATA_LENGTH);

    if(FBL_OK == status)
    {
        ret = (VTP_UINT8)VTP_OK;
    }
    else
    {
        ret = (VTP_UINT8)VTP_NOTOK;
    }	
    return (ret);
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_ApplCB_RxIndication
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_ApplCB_RxIndication(VTP_UINT8 sts)
{
    if(sts == (VTP_UINT8)VTP_OK)
    {
		if((Msg_ID & VTP_DIAG_PHY_ID_MASK) == (VTP_UINT32)VTP_DIAG_PHY_PF)
		{
			ApplTpRxPhysIndication(VTP_Datasize);
		}
		else if((Msg_ID & VTP_DIAG_ID_MASK) == (VTP_UINT32)VTP_DIAG_FUNC_PF)
		{
			ApplTpRxFuncIndication(VTP_Datasize);
		}
		else
		{
		}
    }
    else
    {
        ApplTpRxErrorIndication(VTP_ERROR);
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VKD_ApplCB_RxStart
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
VTP_UINT8 VTP_ApplCB_RxStart(VTP_UINT32 msgid, VTP_UINT16 size)
{
    VTP_UINT8 ret;
   
    if (( msgid & VTP_DIAG_PHY_ID_MASK) == (VTP_UINT32)VTP_DIAG_PHY_PF)
    {
        VTP_Datasize = 0u;
        destination_address = 0u;
        VTP_RxDataptr = (VTP_UINT8*)ApplTpRxGetPhysBuffer(size);
        destination_address = (msgid & ((VTP_UINT32)VTP_DIAG_DEST_MASK));
    }
    else if (( msgid & VTP_DIAG_ID_MASK) == (VTP_UINT32)VTP_DIAG_FUNC_PF)
    {
        VTP_Datasize = 0u;
        destination_address = 0u;
        VTP_RxDataptr = (VTP_UINT8*)ApplTpRxGetFuncBuffer(size);
        destination_address = (msgid & ((VTP_UINT32)VTP_DIAG_DEST_MASK));
    }
    else
    {
        VTP_RxDataptr = NULL;
    }

    if(VTP_RxDataptr != NULL)
    {
        ret = (VTP_UINT8)VTP_OK;
    }
    else
    {
        ret = (VTP_UINT8)VTP_NOTOK;
    }
    return (ret);
}

/*******************************************************************************
** FUNCTION NAME  :  VKD_ApplCB_RxInProg
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_ApplCB_RxInProg(const VTP_UINT8 * msgptr,VTP_UINT8 size)
{
    for(;size != 0u;size--)
    {
        VTP_RxDataptr[VTP_Datasize] = *msgptr;
        msgptr++;
        VTP_Datasize++;
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VKD_ApplCB_TxConfirm
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_ApplCB_TxConfirm(VTP_UINT8 sts)
{
    if(sts == (VTP_UINT8)VTP_OK)
    {
        ApplTpTxConfirmation(VTP_SUCCESS);
    }
    else
    {

        ApplTpTxErrorIndication(VTP_ERROR);
    }

}

/* 
 * Callbacks from the CAN driver
 */
void FblCanDrv_TxConfirmCallback(UINT8 pdu)
{
    if(pdu == VTP_MESSAGE_HANDLE)
    {
        VTP_TxConfirm();
    }
}

void FblCanDrv_RxIndication(UINT32 MessageId, UINT8 MessageLength, UINT8 const* pDataPtr)
{
	VTP_PDU tp_rx_pdu;
	VTP_UINT8 dataidx;
	
    tp_rx_pdu.MsgID = (VTP_UINT32)MessageId;
    tp_rx_pdu.Size = MessageLength;
	
    if(VTP_Rx_GetStatus() != (VTP_UINT8)TRUE)
    {
    	Msg_ID = (VTP_UINT32)MessageId;

		for(dataidx=0u ; dataidx < MessageLength ; dataidx++ )
		{
			tp_rx_pdu.Data[dataidx] = pDataPtr[dataidx];
		}
		
		(void)ApplRestartTimer();
		
		if(FALSE == (((VTP_DIAG_FUNC_PF == MessageId)|| (VTP_DIAG_PHY_PF == MessageId)) && (0x02u == pDataPtr[0]) && (0x3Eu == pDataPtr[1]) && (0x80u == pDataPtr[2])))
		{
			VTP_RxIndication(&tp_rx_pdu);			
		}
	}
    else
    {

    }
}
