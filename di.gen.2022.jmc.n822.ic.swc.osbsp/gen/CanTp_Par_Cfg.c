/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2007.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**   its rights under all copyright laws to protect this work as a published
**   work, when appropriate.  Those having access to this work may not copy it,
**   use it, modify it or disclose the information contained in it without the
**   written authorization of Visteon Corporation.
** 
**  =========================================================================*/

/* ===========================================================================
**
**  Name:           CanTp_Par_Cfg.c
**
**  Description:    CAN TP configuration parameters for configured 
**                    database
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/


/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

#include "CanTp_Par_Cfg.h"
#include "Dcm.h"
#include "Dcm_Cbk.h"

/* ===========================================================================
** C O N F I G U R A T I O N S  D E F I N I T I O N S
** =========================================================================*/


const sTP_Parameter_Config_Type CanTp_Parameter_Config[VTP_NUM_CHANNEL_COUNT] =
{
    {
        0,
        CanTp_Ch0_Start_ReqID_Handle,
        CanTp_Ch0_Stop_ReqID_Handle,
        CanTp_Ch0_Start_RespID_Handle,
        CANTP_DIAG_MESSAGE,
        VTP_YES,
	    VTP_YES,
		0xcc,	//PRS 4.2 Data link layer
		//0x55,//0x55 is recommended for padding to avoiding bit stuffing , chapter 8.0, JMC
        0,
        0
    },
#if VTP_NUM_CHANNEL_COUNT > 1     
	{
		1,/*physical controller ID*/
		CanTp_Ch1_Start_ReqID_Handle, /*ivi */
		CanTp_Ch1_Stop_ReqID_Handle, /*ivi*/
		CanTp_Ch1_Start_RespID_Handle, /*ivi*/
		CANTP_APPL_MESSAGE,
		VTP_YES,
		VTP_YES,
		0xcc,	//PRS 4.2 Data link layer
		//0x55,//0x55 is recommended for padding to avoiding bit stuffing , chapter 8.0, JMC
		0,
		0
	},
#endif
};


const sTP_RxTiming_Config_Type  CanTp_Receive_Timing_Config[VTP_NUM_CHANNEL_COUNT] =
{
    {
        15,//N_Cr ?
        0 //N_WFTmax, chapter 9.2 , JMC 
    },
#if VTP_NUM_CHANNEL_COUNT >1
							
#endif

};


const sTP_TxTiming_Config_Type  CanTp_Transmit_Timing_Config[VTP_NUM_CHANNEL_COUNT] =
{
    {
        7, //?
        15,//?
        {
            20,//STmin     chapter9.2, JMC
            8 //Block Size
        },
        0,//?
        7//?
    },
#if VTP_NUM_CHANNEL_COUNT >1
				
#endif

};


const sTP_RxCB_Config_Type   CanTp_Appl_ReceiveCB_FuncPtr[CanTp_Num_Of_RxCB_Func] =
{
    {   
        Dcm_StartOfReception, 
        Dcm_CopyRxData, 
        Dcm_TpRxIndication,
        NULL
    }
#if CanTp_Num_Of_RxCB_Func >1

#endif
};


const sTP_TxCB_Config_Type   CanTp_Appl_TransmitCB_FuncPtr[CanTp_Num_Of_TxCB_Func] =
{
    {   
        Dcm_CopyTxData, 
        Dcm_TpTxConfirmation, 
        Dcm_TxConfirmation 
    }
#if CanTp_Num_Of_TxCB_Func >1

#endif

};




