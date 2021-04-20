#if !defined( CAN_TP_CFG_H )
#define CAN_TP_CFG_H

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
**  Name:           CanTp_Cfg.h
**
**  Description:    CAN TP specific configuration parameters
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/


/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

//# include "CanTp_Defines.h"

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/


#define VTP_CAN_CHANNEL      0 /*not used*/
#define VTP_NUM_CHANNEL_COUNT      1u  /*virtual channel num*/ /*1 diagnosic ch, 1 ivi ch*/ /*more ivi ch to be added*/
#define VTP_TransmitCB_SUPPORT            VTP_YES
#define N_Cr_Rx_CF_Timeout                15
#define VTP_TransmitOnINT_SUPPORT         VTP_YES
#define N_WFTmax_No_OF_WAIT_FRAMES        0
#define N_Bs_FLOW_CONTROL_TIMEOUT         15
#define VTP_PADDING_VALUE                 0x00
#define N_Cs_TX_CF_Timeout                7
#define VTP_ReceiveCB_SUPPORT             VTP_YES
#define VTP_ReceiveQueue_SUPPORT          VTP_YES
#define Stmin                             10
#define VTP_PADDING_SUPPORT               VTP_YES
#define Blocksize                         8
#define VTP_FC_SUPPORT                    VTP_YES
#define CANTP_PERIODICITY                 10
#define VTP_INVALIDFRAME_NOTIFY           VTP_YES
#define N_As_Tx_CONFIRMATION_TIMEOUT      7
#define VTP_TURING_SUPPORT                VTP_YES
#define VTP_WAITFC_SUPPORT                VTP_YES


#endif /* CAN_TP_CFG_H */



