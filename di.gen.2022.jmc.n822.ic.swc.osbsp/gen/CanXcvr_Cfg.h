#if !defined( CAN_XCVR_CFG )
#define CAN_XCVR_CFG

/******************************************************************************
 **
 **    FILE NAME: Can_Xcvr_Cfg.h
 **    Copyright(c) Visteon Corporation 2005
 **
 ******************************************************************************
 **                    CONFIDENTIAL VISTEON CORPORATION
 **
 **   This is an unpublished work of authorship, which contains trade secrets,
 **   created in 2005. Visteon Corporation owns all rights to this work and
 **   intends to maintain it in confidence to preserve its trade secret
 **   status. Visteon Corporation reserves the right, under the copyright laws
 **   of the United States or those of any other country that may have
 **   jurisdiction, to protect this work as an unpublished work, in the event
 **   of an inadvertent or deliberate unauthorized publication. Ford Motor
 **   Company also reserves its rights under all copyright laws to protect
 **   this work as a published work, when appropriate. Those having access to
 **   this work may not copy it, use it, modify it or disclose the information
 **   contained in it without the written authorization of Visteon Corporation.
 **
 ******************************************************************************
 **
 ** Name:      Can_Xcvr_Cfg.h
 **
 ** Description:  Configuration file for the CAN transceiver control.
 **
 ** Documentation: See revision information at bottom of file.
 **
 ******************************************************************************/

#define CANXCVR_CFG_VERSION             0x0101

/* --------------------------------------------------------------------------
 * Name: CANXCVR_NUM_OF_CHANNELS
 *
 * Description: Defines the number of CAN Channels
 *     
 *==========================================================================*/
#define CANXCVR_NUM_OF_CHANNELS              2

/* --------------------------------------------------------------------------
 * Name: PORT_PORTPIN_PIN_NUMBER
 *
 * Description: Microcontroller port number of pins details
 *              
 * Valid Values: 
*==========================================================================*/
#ifndef PORT_PORTPIN_PIN_NUMBER // Already defined onPort_Common_Defines.h
#define PORT_PORTPIN_PIN_NUMBER             32
#endif
#define PORT_NUMBER_OF_PORTS                10

/* --------------------------------------------------------------------------
 * Name: CANXCVR_STATE_CTRL_SUPPORT
 *
 * Description: CAN transceiver state control and indication to upper layer
 *              
 * Valid Values: 
*==========================================================================*/
#define CANXCVR_STATE_CTRL_SUPPORT          CANXCVR_YES

/* --------------------------------------------------------------------------
 * Name: CANnXCVR_TYPE
 *
 * Description: Defines the vendor part number of the CAN transceiver being
 *              used for this application for each channel.
 *==========================================================================*/
/* #define CANXCVR_TYPE  CANXCVR_TJA1040   */
#define CAN0XCVR_TYPE                       CANXCVR_TJA1042

#if (CANXCVR_NUM_OF_CHANNELS > 1)
#define CAN1XCVR_TYPE                       CANXCVR_TJA1042

 #if (CANXCVR_NUM_OF_CHANNELS > 2)
 #define CAN2XCVR_TYPE                      CANXCVR_TJA1042

  #if (CANXCVR_NUM_OF_CHANNELS > 3)
  #define CAN3XCVR_TYPE                     CANXCVR_TJA1042
  #endif /* (CANXCVR_NUM_OF_CHANNELS > 3) */

 #endif /* (CANXCVR_NUM_OF_CHANNELS > 2) */

#endif /* (CANXCVR_NUM_OF_CHANNELS > 1) */


/* --------------------------------------------------------------------------
 * Name:        CANXCVR_Xxx_SUPPORT
 *
 * Description: Defines the additional pin configurations for Transceiver control and 
 *               status

 * Example:     #define CANXCVR_ENABLE_PIN_SUPPORT
 *              #define CANXCVR_WAKE_PIN_SUPPORT
 *              #define CANXCVR_ERROR_PIN_SUPPORT
 *
 *==========================================================================*/

//#define CANXCVR_ENABLE_PIN_SUPPORT
 
/* --------------------------------------------------------------------------
 * Name: CANXCVR_PN_SUPPORT
 *
 * Description: Defines whether Partial networking is supported
 *
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_PN_SUPPORT                 CANXCVR_NO

/* --------------------------------------------------------------------------
 * Name: CANnXCVR_MODEPIN0_USED
 *
 * Description: Defines whether the mode pin 0 is being used for this
 *              application for each channel
 *
 * Valid Values: CANXCVR_YES - Mode pin 0 is being used
 *               CANXCVR_NO - Mode pin 0 is not being used
 *==========================================================================*/
#define CAN0XCVR_MODEPIN_USED              CANXCVR_YES

#if (CANXCVR_NUM_OF_CHANNELS > 1)
#define CAN1XCVR_MODEPIN_USED              CANXCVR_YES

 #if (CANXCVR_NUM_OF_CHANNELS > 2)
 #define CAN2XCVR_MODEPIN_USED             CANXCVR_YES

  #if (CANXCVR_NUM_OF_CHANNELS > 3)
  #define CAN3XCVR_MODEPIN_USED            CANXCVR_YES
  #endif /* (CANXCVR_NUM_OF_CHANNELS > 3) */

 #endif /* (CANXCVR_NUM_OF_CHANNELS > 2) */

#endif /* (CANXCVR_NUM_OF_CHANNELS > 1) */

/* --------------------------------------------------------------------------
 * Name: CANXCVR_INIT_FUNCTION
 *
 * Description: Enables the CANXCVR_Initialize function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_INIT_FUNCTION              CANXCVR_YES

/* --------------------------------------------------------------------------
 * Name: CANXCVR_SLEEPMODE_FUNCTION
 *
 * Description: Enables the CANXCVR_SleepMode function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_SLEEPMODE_FUNCTION         CANXCVR_YES

/* --------------------------------------------------------------------------
 * Name: CANXCVR_SLEEPCMD_FUNCTION
 *
 * Description: Enables the CANXCVR_SleepCommand function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_SLEEPCMD_FUNCTION          CANXCVR_NO

/* --------------------------------------------------------------------------
 * Name: CANXCVR_HSMODE_FUNCTION
 *
 * Description: Enables the CANXCVR_HighSpeedMode function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_HSMODE_FUNCTION            CANXCVR_NO

/* --------------------------------------------------------------------------
 * Name: CANXCVR_POMODE_FUNCTION
 *
 * Description: Enables the CANXCVR_PowerOnMode function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_POMODE_FUNCTION            CANXCVR_NO

/* --------------------------------------------------------------------------
 * Name: CANXCVR_STDBYMODE_FUNCTION
 *
 * Description: Enables the CANXCVR_Standby_Mode function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_STDBYMODE_FUNCTION         CANXCVR_YES

/* --------------------------------------------------------------------------
 * Name: CANXCVR_NORMALMODE_FUNCTION
 *
 * Description: Enables the CANXCVR_NormalMode function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_NORMALMODE_FUNCTION        CANXCVR_YES

/* --------------------------------------------------------------------------
 * Name: CANXCVR_WUMODE_FUNCTION
 *
 * Description: Enables the CANXCVR_WakeupMode function for use in this
 *              application.
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_WUMODE_FUNCTION            CANXCVR_YES

/* --------------------------------------------------------------------------
 * Name: CANXCVR_DIO_FUNCTION_SUPPORT
 *
 * Description: Defines whether Digital input output module is present to 
 *              control GPIOs.
 *
 * Valid Values: CANXCVR_YES - Function is enabled
 *               CANXCVR_NO - Function is disabled
 *==========================================================================*/
#define CANXCVR_DIO_FUNCTION_SUPPORT       CANXCVR_YES

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif  /* CAN_XCVR_CFG */
