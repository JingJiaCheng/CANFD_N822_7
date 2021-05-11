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

File Name        :  tp_lin_if.c
Module Short Name:  vehiclecomm.core.fbl.diag
VOBName          :  vehiclecomm.core.fbl.diag\tp_lin\src\tp_if_lin.c
Author           :  pchinnat
Description      :  Defines Logic for TP interface 
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
******************************************************************************/

#include "fbl_lin_drv.h"
#include "udsdiag_cfg.h"
#include "tp_lin.h"
#include "tp_lin_cfg.h"

#ifndef LIN_MAX_DATA_LENGTH
#define LIN_MAX_DATA_LENGTH         (8u)
#endif

static VTP_LIN_UINT32       Msg_ID = 0u;
static VTP_LIN_UINT8*       VTP_LIN_RxDataptr;
static VTP_LIN_UINT16       VTP_LIN_Datasize;

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_Call_DllTransmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
VTP_LIN_UINT8 VTP_LIN_Call_DllTransmit(void)
{
    VTP_LIN_UINT8 ret;
    UINT8 status;

    status = FblLinDrv_Send(VTP_LIN_MESSAGE_HANDLE, VTP_LIN_RESPONSE_ID, &VTP_LIN_TxMsg.Data[0], LIN_MAX_DATA_LENGTH);

    if(FBL_OK == status)
    {
        ret = (VTP_LIN_UINT8)VTP_LIN_OK;
    }
    else
    {
        ret = (VTP_LIN_UINT8)VTP_LIN_NOTOK;
    }   
    return (ret);
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_Call_DllHeaderTransmit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
VTP_LIN_UINT8 VTP_LIN_Call_DllHeaderTransmit(void)
{
    VTP_LIN_UINT8 ret;
    UINT8 status;

    status = FblLinDrv_Send(VTP_LIN_MESSAGE_HANDLE, VTP_LIN_DIAG_PHY_PF, &VTP_LIN_TxMsg.Data[0], LIN_MAX_DATA_LENGTH);

    if(FBL_OK == status)
    {
        ret = (VTP_LIN_UINT8)VTP_LIN_OK;
    }
    else
    {
        ret = (VTP_LIN_UINT8)VTP_LIN_NOTOK;
    }   
    return (ret);
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_ApplCB_RxIndication
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_LIN_ApplCB_RxIndication(VTP_LIN_UINT8 sts)
{
    if(sts == (VTP_LIN_UINT8)VTP_LIN_OK)
    {
        if((Msg_ID & VTP_LIN_DIAG_PHY_ID_MASK) == (VTP_LIN_UINT32)VTP_LIN_DIAG_PHY_PF)
        {
            ApplTpRxPhysIndication(VTP_LIN_Datasize);
        }
        else if((Msg_ID & VTP_LIN_DIAG_ID_MASK) == (VTP_LIN_UINT32)VTP_LIN_DIAG_FUNC_PF)
        {
            ApplTpRxFuncIndication(VTP_LIN_Datasize);
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
** FUNCTION NAME  :  VTP_LIN_ApplCB_RxStart
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
VTP_LIN_UINT8 VTP_LIN_ApplCB_RxStart(VTP_LIN_UINT32 msgid, VTP_LIN_UINT16 size)
{
    VTP_LIN_UINT8 ret;
   
    if (( msgid & VTP_LIN_DIAG_PHY_ID_MASK) == (VTP_LIN_UINT32)VTP_LIN_DIAG_PHY_PF)
    {
        VTP_LIN_Datasize = 0u;
        destination_address = 0u;
        VTP_LIN_RxDataptr = (VTP_LIN_UINT8*)ApplTpRxGetPhysBuffer(size);
        destination_address = (msgid & ((VTP_LIN_UINT32)VTP_LIN_DIAG_DEST_MASK));
    }
    else if (( msgid & VTP_LIN_DIAG_ID_MASK) == (VTP_LIN_UINT32)VTP_LIN_DIAG_FUNC_PF)
    {
        VTP_LIN_Datasize = 0u;
        destination_address = 0u;
        VTP_LIN_RxDataptr = (VTP_LIN_UINT8*)ApplTpRxGetFuncBuffer(size);
        destination_address = (msgid & ((VTP_LIN_UINT32)VTP_LIN_DIAG_DEST_MASK));
    }
    else
    {
        VTP_LIN_RxDataptr = NULL;
    }

    if(VTP_LIN_RxDataptr != NULL)
    {
        ret = (VTP_LIN_UINT8)VTP_LIN_OK;
    }
    else
    {
        ret = (VTP_LIN_UINT8)VTP_LIN_NOTOK;
    }
    return (ret);
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_ApplCB_RxInProg
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_LIN_ApplCB_RxInProg(const VTP_LIN_UINT8 * msgptr,VTP_LIN_UINT8 size)
{
    for(;size != 0u;size--)
    {
        VTP_LIN_RxDataptr[VTP_LIN_Datasize] = *msgptr;
        msgptr++;
        VTP_LIN_Datasize++;
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VTP_LIN_ApplCB_TxConfirm
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VTP_LIN_ApplCB_TxConfirm(VTP_LIN_UINT8 sts)
{
    if(sts == (VTP_LIN_UINT8)VTP_LIN_OK)
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
/*******************************************************************************
** FUNCTION NAME  :  FblLinDrv_TxConfirmCallback
** DESCRIPTION    :
** INPUT          :  pdu
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void FblLinDrv_TxConfirmCallback(UINT8 pdu)
{
    if(pdu == VTP_LIN_MESSAGE_HANDLE)
    {
        VTP_LIN_TxConfirm();
    }
}


/*******************************************************************************
** FUNCTION NAME  :  FblLinDrv_RxIndication
** DESCRIPTION    :
** INPUT          :  MessageId
**                   MessageLength
**                   pDataPtr
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void FblLinDrv_RxIndication(UINT32 MessageId, UINT8 MessageLength, UINT8 * pDataPtr)
{
    VTP_LIN_PDU tp_rx_pdu;
    VTP_LIN_UINT8 dataidx;
    #ifdef LIN_HEADER_POLLING
    if(MessageId == VTP_LIN_RESPONSE_ID)
    {
        
    }
    else
    #endif
    {
        tp_rx_pdu.MsgID = (VTP_LIN_UINT32)MessageId;
        tp_rx_pdu.Size = MessageLength;
        
        if(VTP_LIN_Rx_GetStatus() != (VTP_LIN_UINT8)VTP_LIN_OK)
        {
            Msg_ID = (VTP_LIN_UINT32)MessageId;

            for(dataidx=0u ; dataidx < MessageLength ; dataidx++ )
            {
                tp_rx_pdu.Data[dataidx] = pDataPtr[dataidx];
            }
            
            (void)ApplRestartTimer();
            
            if(VTP_LIN_OK == (((VTP_LIN_DIAG_FUNC_PF == MessageId)|| (VTP_LIN_DIAG_PHY_PF == MessageId))))
            {
                VTP_LIN_RxIndication(&tp_rx_pdu);           
            }
        }
        else
        {

        }
    }
    
}
