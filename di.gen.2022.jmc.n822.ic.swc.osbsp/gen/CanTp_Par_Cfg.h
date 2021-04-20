#if !defined( CAN_TP_APP_CFG_H )
#define CAN_TP_APP_CFG_H

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
**  Name:           CanTp_Par_Cfg.h
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
# include "CanTp_Cfg.h"
# include "CanTp_Defines.h"

/* ===========================================================================
** G L O B A L  M A C R O  D E F I N I T I O N S
** =========================================================================*/


/*   TP TX MESSAGE PDU MACRO  DEFINITIONS */ 

#define CanTp_Ch0_Start_RespID_Handle          						7u	//MCAL Transmit HTH_IC_DiagResp index value, for tp_par_cfg
#define Can_Ch0_Tp_Tx_Msg_IC_DiagResp_TMH							7u	//MCAL Transmit HTH_IC_DiagResp index value, for dcm

/*   TP RX MESSAGE PDU MACRO  DEFINITIONS */ 

#define Can_Ch0_Tp_Rx_Msg_Tester_DiagReqToIC                       45u	//MCAL Receive HRH_Tester_DiagReqToIC index value, for disp_par_cfg
#define Can_Ch0_Tp_Rx_Msg_Tester_DiagFuncReq                       46u	//MCAL Receive HRH_Tester_DiagFuncReq index value, for disp_par_cfg

#define CanTp_Ch0_Start_ReqID_Handle         45u		//the smaller HRH of Diagnostic Physical and Functional request, for tp_par_cfg
#define CanTp_Ch0_Stop_ReqID_Handle          46u		//the larger HRH of Diagnostic Physical and Functional request, for tp_par_cfg



#define CanTp_Num_Of_RxCB_Func          VTP_NUM_CHANNEL_COUNT
#define CanTp_Num_Of_TxCB_Func          VTP_NUM_CHANNEL_COUNT

/* ===========================================================================
** G L O B A L  C O N S T A N T  D E C L A R A T I O N S
** =========================================================================*/

extern const sTP_Parameter_Config_Type CanTp_Parameter_Config[VTP_NUM_CHANNEL_COUNT];

extern const sTP_RxTiming_Config_Type  CanTp_Receive_Timing_Config[VTP_NUM_CHANNEL_COUNT];

extern const sTP_TxTiming_Config_Type  CanTp_Transmit_Timing_Config[VTP_NUM_CHANNEL_COUNT];

extern const sTP_RxCB_Config_Type   CanTp_Appl_ReceiveCB_FuncPtr[CanTp_Num_Of_RxCB_Func];

extern const sTP_TxCB_Config_Type   CanTp_Appl_TransmitCB_FuncPtr[CanTp_Num_Of_TxCB_Func];


#endif  /* CAN_TP_APP_CFG_H */



