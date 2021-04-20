#ifndef CAN_XCVR_H
#define CAN_XCVR_H

/******************************************************************************
 **
 **    FILE NAME: Can_Xcvr.h
 **    Copyright(c) Visteon Corporation 2005
 ******************************************************************************
 **                    CONFIDENTIAL VISTEON CORPORATION
 **
 **   This is an unpublished work of authorship, which contains trade secrets,
 **   created in 2005. Visteon Corporation owns all rights to this work and
 **   intends to maintain it in confidence to preserve its trade secret
 **   status. Visteon Corporation reserves the right, under the copyright laws
 **   of the United States or those of any other country that may have
 **   jurisdiction, to protect this work as an unpublished work, in the event
 **   of an inadvertent or deliberate unauthorized publication. Visteon
 **   Corporation reserves its rights under all copyright laws to protect
 **   this work as a published work, when appropriate. Those having access to
 **   this work may not copy it, use it, modify it or disclose the information
 **   contained in it without the written authorization of Visteon Corporation.
 **
 ******************************************************************************
 **
 ** Name:         Can_Xcvr.h
 **
 ** Description:  Transceiver Header file for the Spansion Traveo Platform.
 **
 ** Documentation: See revision information at bottom of file.
 **
 **
 ******************************************************************************/

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

/* Defines: -------------------------------------------------------------- */

#define CANXCVR_YES             0x01
#define CANXCVR_NO              0x00

#define CANXCVR_FAILURE         (CAN_UINT8)0x00
#define CANXCVR_SUCCESS         (CAN_UINT8)0x01

/* Valid transceiver modes */
#define CANXCVR_INIT            (CAN_UINT8)0x00
#define CANXCVR_NORMAL          (CAN_UINT8)0x01
#define CANXCVR_STANDBY         (CAN_UINT8)0x02
#define CANXCVR_SLEEP           (CAN_UINT8)0x03
#define CANXCVR_WAKE            (CAN_UINT8)0x04
#define CANXCVR_VALID_STATES    (CAN_UINT8)0x05
#define CANXCVR_UNINIT          (CAN_UINT8)0xFE
#define CANXCVR_ERROR           (CAN_UINT8)0xFF

/* Valid transceiver types */
#define CANXCVR_AU5790          1  /* CAN Transceiver Type  */
#define CANXCVR_TLE6255G        2  /* CAN Transceiver Type  */
#define CANXCVR_TJA1050         3  /* CAN Transceiver Type  */
#define CANXCVR_TJA1040         4  /* CAN Transceiver Type  */
#define CANXCVR_TJA1041         5  /* CAN Transceiver Type  */
#define CANXCVR_TJA1053         6  /* CAN Transceiver Type  */
#define CANXCVR_TJA1054         7  /* CAN Transceiver Type  */
#define CANXCVR_TLE6252G        8  /* CAN Transceiver Type  */
#define CANXCVR_MC33388         9  /* CAN Transceiver Type  */
#define CANXCVR_TJA1042         10 /* CAN Transceiver Type  */

/* Port Bit Control. */
#define CANXCVR_SETBIT8(x)      ((CAN_UINT8) (0x01 << (x)))
#define CANXCVR_CLRBIT8(x)      ((CAN_UINT8) (~(0x01 << (x))))

/***********************************************************************************
INIT      : Enables the CANXCVR_Initialize function for use in this application
NORMAL    : Enables the CANXCVR_SleepMode function for use in this application
STANDBY   : Enables the CANXCVR_SleepCommand function for use in this application
SLEEPMODE : Enables the CANXCVR_HighSpeedMode function for use in this application
SLEEPCMD  : Enables the CANXCVR_PowerOnMode function for use in this application
WAKEUP    : Enables the CANXCVR_Standby_Mode function for use in this application
HIGHSPEED : Enables the CANXCVR_NormalMode function for use in this application
POWERON   : Enables the CANXCVR_WakeupMode function for use in this application
***********************************************************************************/

#define BIT_INIT	            (BIT0)
#define BIT_NORMAL				(BIT1)
#define BIT_STANDBY				(BIT2)
#define BIT_SLEEPMODE			(BIT3)
#define BIT_SLEEPCMD			(BIT4)
#define BIT_WAKEUP				(BIT5)
#define BIT_HIGHSPEED			(BIT6)
#define BIT_POWERON				(BIT7)

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

/* Include files: ------------------------------------------------------ */
# include "can_defs.h"
# include "CanXcvr_Cfg.h"


#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)

#include "Dio.h"

#define CANXCVR_CHANNELCALC(PortNum, PinNum)     ((PortNum * PORT_PORTPIN_PIN_NUMBER) + PinNum)
#define CANXCVR_PORTCTRL(ChannelNum, Level)       Dio_WriteChannel(ChannelNum,(Dio_LevelType)Level)

#endif

typedef struct strCANXcvrConfigType
{
   CAN_UINT8  XcvrType;
   CAN_UINT8  PortNum;
   CAN_UINT8  ChannelNum;

#ifdef CANXCVR_ENABLE_PIN_SUPPORT
   CAN_UINT8  EnPortNum;
   CAN_UINT8  EnChannelNum;
#endif

#ifdef CANXCVR_WAKE_PIN_SUPPORT
   CAN_UINT8  WkPortNum;
   CAN_UINT8  WkChannelNum;
#endif

#ifdef CANXCVR_ERROR_PIN_SUPPORT
   CAN_UINT8  ErrPortNum;
   CAN_UINT8  ErrChannelNum;
#endif

   CAN_UINT8  ModeSupport;       /* POWERON | HIGHSPEED | WAKEUP | SLEEPCMD | SLEEPMODE | STANDBY | NORMAL | INIT */

#if (CANXCVR_STATE_CTRL_SUPPORT == CANXCVR_YES)
   CAN_UINT8  CtrlSupport;
#endif

}CANXcvrConfigType;

typedef void (*pXcvrStateFunc) (CAN_UINT8);


/* --- Version --- */
#if (CANXCVR_CFG_VERSION != 0x0101)
#error "Error in can_xcvr.h: Header and Configuration files are inconsistent!"
#endif

/* --------------------------------------------------------------------------
 * Name: CANXcvrSupportConfig
 *
 * Description: CAN Transceiver support configuration structure 
*==========================================================================*/
extern CANXcvrConfigType const CANXcvrConfiguration[CANXCVR_NUM_OF_CHANNELS];


/* Function Prototypes: ------------------------------------------------- */

extern void CanXcvr_Init(void);

extern void CANXCVR_XcvrModeIndication(CAN_UINT8 Channel);

extern CAN_UINT8 CANXCVR_SetMode(CAN_UINT8 Channel, CAN_UINT8 XcvrMode);

extern CAN_UINT8 CANXCVR_GetMode(CAN_UINT8 Channel);

extern void CanXcvr_DispLocalWakeup(CAN_UINT8 Channel);

extern void CanXcvr_DispWakeUp(CAN_UINT8 Channel);

extern void CanXcvr_DispInit(CAN_UINT8 Channel);

extern void CanXcvr_DispStandby(CAN_UINT8 Channel);

extern void CanXcvr_DispSleep(CAN_UINT8 Channel);

extern void CanXcvr_DispNormal(CAN_UINT8 Channel);

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CAN_XCVR_H */
