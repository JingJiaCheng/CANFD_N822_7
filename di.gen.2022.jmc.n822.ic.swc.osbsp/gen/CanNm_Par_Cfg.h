#if !defined(CANNM_PAR_CFG_H)
#define CANNM_PAR_CFG_H

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
**  Name:           CanNm_Par_Cfg.h
**
**  Description:    CAN NM parameter configuration file for global constants
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

/* ===========================================================================
** G L O B A L   C O N S T A N T   D E C L A R A T I O N S
** =========================================================================*/

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

#define Can_Ch0_Nm_Rx_Msg_NM_BaseId           44//MCAL HRH of NM
#define Can_Ch0_Nm_Tx_Msg_IC_NM_TMH           6//MCAL HTH of NM 

#define CANNM_MSG_RXPDUID                          Can_Ch0_Nm_Rx_Msg_NM_BaseId
#define CANNM_MSG_TXPDUID                          Can_Ch0_Nm_Tx_Msg_IC_NM_TMH

/* DIRECT NM parameters configuration */
#define VNM_PAD_BYTE          0x00
#define VNM_OWN_ADDR          0x30//ecu Addr defined by JMC
#define VNM_CAN_BASE_ID       0x400//base address
#define VNM_NODEADDR_MASK     0x7F//
#define VNM_MSG_SIZE          0x08
#define VNM_RXCNT_LIMIT       0x04
#define VNM_TXCNT_LIMIT       0x08

#define VNM_RINGMSG_TTYP      90   /* RING TYPICAL TIME = 100msec [70, 110]*/
#define VNM_RINGMSG_TMAX      260   /* RING MAXIMUM TIME = 260msec */
#define VNM_LHMSG_TERR        1000  /* LIMPHOME MSG TIME = 1000msec */
#define VNM_PERIODICITY       10    /* NM TASK PERIODICITY = 10msec */
#define VNM_SLEEP_TIME        5000  /* SLEEP STARTUP SLEEP DELAY = 5000msec */ /*tSleepRequestMin_N, requirement from JMC*/
#define VNM_SLEEP_TIME_L      5000  /* SLEEP ALONE   SLEEP DELAY = 5000msec */ /*tSleepRequestMin_L, requirement from JMC*/
#define VNM_TWBS_TIME         5000  /* WAIT BUS SLEEP TIME = 5000msec */

#define VNM_DIAGSTART_TIME    (3000u)  /* T[DiagStart_Initial] = 3000msec */ 

#define DATA_SIZE             8
#define MESSAGE_ID		      (VNM_CAN_BASE_ID + VNM_OWN_ADDR)
#define VNM_MSG_OPTION        0x0
#define VNM_MSG_HANDLE        Can_Ch0_Nm_Tx_Msg_IC_NM_TMH

#define MMCAN_CHANNEL         0x0

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANNM_PAR_CFG_H */

