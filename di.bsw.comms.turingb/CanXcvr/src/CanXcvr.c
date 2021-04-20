/******************************************************************************
 **    FILE NAME: Can_Xcvr.c
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
 ** Name:      Can_Xcvr.c
 **
 ** Description:  Transceiver Code file for the Spansion Traveo Platform.
 **
 ** Documentation: See revision information at bottom of file.
 **
 **
 ******************************************************************************/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

#include "Std_Types.h"
#include "can_defs.h"
#include "CanDisp.h"
#include "CanXcvr.h"
#include "CanXcvr_Cfg.h"
//#include "Can_CSec.h"
#include "Platform_Types.h"
#include "CanIl_Util.h"


/* ===========================================================================
  F I L E   S C O P E   V A R I A B L E   D E C L A R A T I O N S
 =========================================================================*/

/* Check for valid transceiver specified. */
#if ((CAN0XCVR_TYPE == CANXCVR_TJA1053) || (CAN0XCVR_TYPE == CANXCVR_TJA1054) || \
     (CAN0XCVR_TYPE == CANXCVR_TLE6252G) || (CAN0XCVR_TYPE == CANXCVR_MC33388) || \
     (CAN0XCVR_TYPE == CANXCVR_TJA1050) || (CAN0XCVR_TYPE == CANXCVR_TJA1040) || \
     (CAN0XCVR_TYPE == CANXCVR_TJA1041) || (CAN0XCVR_TYPE == CANXCVR_TJA1042))
#else
#error Error in CAN_XCVR.C: Invalid Transceiver Type Specified for CAN channel 0!
#endif

#if (CANXCVR_NUM_OF_CHANNELS > 1)

#if ((CAN1XCVR_TYPE == CANXCVR_TJA1053) || (CAN1XCVR_TYPE == CANXCVR_TJA1054) || \
     (CAN1XCVR_TYPE == CANXCVR_TLE6252G) || (CAN1XCVR_TYPE == CANXCVR_MC33388) || \
     (CAN1XCVR_TYPE == CANXCVR_TJA1050) || (CAN1XCVR_TYPE == CANXCVR_TJA1040) || \
     (CAN1XCVR_TYPE == CANXCVR_TJA1041) || (CAN1XCVR_TYPE == CANXCVR_TJA1042))
#else 
#error Error in CAN_XCVR.C: Invalid Transceiver Type Specified for CAN channel 1!
#endif

#if (CANXCVR_NUM_OF_CHANNELS > 2)

#if ((CAN2XCVR_TYPE == CANXCVR_TJA1053) || (CAN2XCVR_TYPE == CANXCVR_TJA1054) || \
     (CAN2XCVR_TYPE == CANXCVR_TLE6252G) || (CAN2XCVR_TYPE == CANXCVR_MC33388) || \
     (CAN2XCVR_TYPE == CANXCVR_TJA1050) || (CAN2XCVR_TYPE == CANXCVR_TJA1040) || \
     (CAN2XCVR_TYPE == CANXCVR_TJA1041) || (CAN2XCVR_TYPE == CANXCVR_TJA1042))
#else 
#error Error in CAN_XCVR.C: Invalid Transceiver Type Specified for CAN channel 2!
#endif

#if (CANXCVR_NUM_OF_CHANNELS > 3)

#if ((CAN3XCVR_TYPE == CANXCVR_TJA1053) || (CAN3XCVR_TYPE == CANXCVR_TJA1054) || \
     (CAN3XCVR_TYPE == CANXCVR_TLE6252G) || (CAN3XCVR_TYPE == CANXCVR_MC33388) || \
     (CAN3XCVR_TYPE == CANXCVR_TJA1050) || (CAN3XCVR_TYPE == CANXCVR_TJA1040) || \
     (CAN3XCVR_TYPE == CANXCVR_TJA1041) || (CAN3XCVR_TYPE == CANXCVR_TJA1042))
#else 
#error Error in CAN_XCVR.C: Invalid Transceiver Type Specified for CAN channel 3!
#endif

#endif
#endif
#endif

#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
#define DioXcvrChannelNumber(Channel)    ( (CAN_UINT16) CANXCVR_CHANNELCALC(CANXcvrConfiguration[Channel].PortNum, \
                                                              CANXcvrConfiguration[Channel].ChannelNum) )
#define DioXcvrEnChannelNumber(Channel)  ( (CAN_UINT16) CANXCVR_CHANNELCALC(CANXcvrConfiguration[Channel].EnPortNum, \
                                                              CANXcvrConfiguration[Channel].EnChannelNum) )
#endif

#if (CANXCVR_STATE_CTRL_SUPPORT == CANXCVR_YES)
static CAN_UINT8 TransceiverMode[CANXCVR_NUM_OF_CHANNELS];
#endif

#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)

static void CANXCVR_Initialize(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);
static void CANXCVR_NormalMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);
static void CANXCVR_SleepMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);

#if (CANXCVR_SLEEPCMD_FUNCTION == CANXCVR_YES)
static void CANXCVR_SleepCommand(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);
#endif

#if (CANXCVR_HSMODE_FUNCTION == CANXCVR_YES)
static void CANXCVR_HighSpeedMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);
#endif

#if (CANXCVR_POMODE_FUNCTION == CANXCVR_YES)
static void CANXCVR_PowerOnMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);
#endif

static void CANXCVR_Standby_Mode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);
static void CANXCVR_WakeUpMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum);

#else

static void CANXCVR_Initialize(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);
static void CANXCVR_NormalMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);
static void CANXCVR_SleepMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);

#if (CANXCVR_SLEEPCMD_FUNCTION == CANXCVR_YES)
static void CANXCVR_SleepCommand(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);
#endif

#if (CANXCVR_HSMODE_FUNCTION == CANXCVR_YES)
static void CANXCVR_HighSpeedMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);
#endif

#if (CANXCVR_POMODE_FUNCTION == CANXCVR_YES)
static void CANXCVR_PowerOnMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);
#endif

static void CANXCVR_Standby_Mode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);
static void CANXCVR_WakeUpMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);

#endif

static const pXcvrStateFunc TransceiverStates[CANXCVR_VALID_STATES] = {
                                                                        CanXcvr_DispInit,
														                CanXcvr_DispNormal,
														                CanXcvr_DispStandby,
														                CanXcvr_DispSleep,
														                CanXcvr_DispWakeUp                                                
                                                                      };



/* ===========================================================================
 * Name:        void CanXcvr_Init
 *
 * Description: This function initializes the Transceiver module
 *
 * Inputs:      none
 *
 * Outputs:     none
 *
 * =========================================================================*/
void CanXcvr_Init( void )
{
    CAN_UINT8 ChannelIndex;

    for(ChannelIndex = 0; ChannelIndex < CANXCVR_NUM_OF_CHANNELS; ChannelIndex++)
	{
        CanXcvr_DispInit(ChannelIndex);

	    TransceiverMode[ChannelIndex] = CANXCVR_INIT;
	}
}

#if (CANXCVR_INIT_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_Initialize
 *
 * Description: This function initializes the data direction register for the
 *              CAN transceiver mode pins.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_Initialize(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_Initialize(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum);
#endif
{
   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
		 CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_HIGH);
	   #else
	   #endif
   }
   else
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
		 CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_LOW);
	   #else
	   #endif
   }

}

#endif /* (CANXCVR_INIT_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_SLEEPMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_SleepMode
 *
 * Description: This function puts the CAN transceiver into a low power sleep
 *              mode.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_SleepMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_SleepMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum)
#endif
{
   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   /* Put the transceiver to sleep. */
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_HIGH);
	   #else
	   #endif
   }

}

#endif /* (CANXCVR_SLEEPMODE_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_SLEEPCMD_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_SleepCommand
 *
 * Description: This function issues a command to the CAN transceiver to begin
 *              entering a low power sleep mode.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_SleepCommand(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_SleepCommand(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum)
#endif
{

   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_HIGH);
	   #else
	   #endif
   }

}

#endif /* (CANXCVR_SLEEPCMD_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_HSMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_HighSpeedMode
 *
 * Description: This function puts the CAN transceiver into a high speed
 *              mode.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_HighSpeedMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_HighSpeedMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum)
#endif
{
   
   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_LOW);
	   #else
	   #endif
   }

}

#endif /* (CANXCVR_HSMODE_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_POMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_PowerOnMode
 *
 * Description: This function puts the CAN transceiver into a power on
 *              mode.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_PowerOnMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_PowerOnMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum)
#endif
{

   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_LOW);
	   #else
	   #endif
   }

}

#endif /* (CANXCVR_POMODE_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_STDBYMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_StandbyMode
 *
 * Description: This function puts the CAN transceiver into a standby
 *              mode.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_Standby_Mode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_Standby_Mode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum)
#endif
{

   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_HIGH);
	   #else
	   #endif
   }
   else
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     // CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_LOW); // is it required???????????
	   #else
	   #endif
       
   }

}

#endif /* (CANXCVR_STDBYMODE_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_NORMALMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_NormalMode
 *
 * Description: This function puts the CAN transceiver into normal
 *              mode.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_NormalMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_NormalMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum)
#endif
{

   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_LOW);
	   #else
	   #endif
   }
   else
   {
       #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
         CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_HIGH);
       #else
       #endif
   }   

}

#endif /* (CANXCVR_NORMALMODE_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_WUMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
 * Name:    void CANXCVR_WakeUpMode
 *
 * Description: This function puts the CAN transceiver into wake up
 *              mode.
 *
 * Inputs:      Channel
 *
 * Outputs:     none
 *
 * =========================================================================*/
#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
static void CANXCVR_WakeUpMode(CAN_HWINST hwInst, CAN_UINT16 ChannelNum)
#else
static void CANXCVR_WakeUpMode(CAN_HWINST hwInst, CAN_UINT8 PortNum, CAN_UINT8 ChannelNum)
#endif
{

   if( (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1040) ||
       (CANXcvrConfiguration[hwInst].XcvrType == CANXCVR_TJA1042) )
   {
	   #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	     CANXCVR_PORTCTRL(ChannelNum,(Dio_LevelType)STD_LOW);
	   #else
	   #endif
   }

}

#endif /* (CANXCVR_WUMODE_FUNCTION == CANXCVR_YES) */

#if (CANXCVR_WUMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
**
** Name:            CanXcvr_DispLocalWakeup
**
** Description:     The Network was Requested by the Application While Asleep
**
**                  This callback is made by the FNOS CCL layer to inform the
**                  application that a CclSet_Network call was made by the
**                  application while it was in the sleep state.
**
** =========================================================================*/
void CanXcvr_DispLocalWakeup(CAN_UINT8 Channel)
{
    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_NO)
	CAN_UINT8 PortNumber;
	CAN_UINT8 ChannelNumber;
	#endif
    
    CAN_UINT8 FuncExecSt = E_OK;
    
    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if(FuncExecSt != E_NOT_OK)
	{
	    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	    CANXCVR_WakeUpMode(Channel, DioXcvrChannelNumber(Channel));

	    #else

		PortNumber    = CANXcvrConfiguration[Channel].PortNum;
		ChannelNumber = CANXcvrConfiguration[Channel].ChannelNum;

		CANXCVR_WakeUpMode(Channel, PortNumber, ChannelNumber);

		#endif
	}
}

#endif


#if (CANXCVR_WUMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
**
** Name:            CanXcvr_DispWakeUp
**
** Description:     CCL Layer Callback to Configure the Transceiver for the
**                  Transition from the Sleep/Standby State to Normal
**                  Operation
**
** =========================================================================*/
void CanXcvr_DispWakeUp(CAN_UINT8 Channel)
{
    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_NO)
	CAN_UINT8 PortNumber;
	CAN_UINT8 ChannelNumber;
	#endif
    
    CAN_UINT8 FuncExecSt = E_OK;
    
    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if(FuncExecSt != E_NOT_OK)
	{    
		#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	    CANXCVR_WakeUpMode(Channel, DioXcvrChannelNumber(Channel));

	    #else

		PortNumber    = CANXcvrConfiguration[Channel].PortNum;
		ChannelNumber = CANXcvrConfiguration[Channel].ChannelNum;

		CANXCVR_WakeUpMode(Channel, PortNumber, ChannelNumber);

		#endif
	}
}

#endif


#if (CANXCVR_INIT_FUNCTION == CANXCVR_YES)
/* ===========================================================================
**
** Name:            CanXcvr_DispInit
**
** Description:     CCL Layer Callback to Initialize the CAN Transceiver at
**                  the Power ON Transition
**
** =========================================================================*/
void CanXcvr_DispInit(CAN_UINT8 Channel)
{
    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_NO)
	CAN_UINT8 PortNumber;
	CAN_UINT8 ChannelNumber;
	#endif
    
    CAN_UINT8 FuncExecSt = E_OK;
    
    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if(FuncExecSt != E_NOT_OK)
	{
	    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	    CANXCVR_Initialize(Channel, DioXcvrChannelNumber(Channel));
		#ifdef CANXCVR_ENABLE_PIN_SUPPORT
	    CANXCVR_Initialize(Channel, DioXcvrEnChannelNumber(Channel));
		#endif

	    #else

		PortNumber    = CANXcvrConfiguration[Channel].PortNum;
		ChannelNumber = CANXcvrConfiguration[Channel].ChannelNum;

		CANXCVR_Initialize(Channel, PortNumber, ChannelNumber);

		#endif
	}

}

#endif


#if (CANXCVR_STDBYMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
**
** Name:            CanXcvr_DispStandby
**
** Description:     CCL Layer Callback to Configure the Transceiver for the
**                  Transition from Normal Operation to the Standby State
**
** =========================================================================*/
void CanXcvr_DispStandby(CAN_UINT8 Channel)
{
    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_NO)
	CAN_UINT8 PortNumber;
	CAN_UINT8 ChannelNumber;
	#endif
    
    CAN_UINT8 FuncExecSt = E_OK;
    
    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if(FuncExecSt != E_NOT_OK)
	{
		#if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	    CANXCVR_Standby_Mode(Channel, DioXcvrChannelNumber(Channel));
		#ifdef CANXCVR_ENABLE_PIN_SUPPORT
	    CANXCVR_Standby_Mode(Channel, DioXcvrEnChannelNumber(Channel));
		#endif

	    #else

		PortNumber    = CANXcvrConfiguration[Channel].PortNum;
		ChannelNumber = CANXcvrConfiguration[Channel].ChannelNum;

		CANXCVR_Standby_Mode(Channel, PortNumber, ChannelNumber);

		#endif
	}
}

#endif

#if (CANXCVR_SLEEPMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
**
** Name:            CanXcvr_DispSleep
**
** Description:     CCL Layer Callback to Configure the Transceiver for the
**                  Transition from Normal Operation to the Sleep State
**
** =========================================================================*/
void CanXcvr_DispSleep(CAN_UINT8 Channel)
{
    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_NO)
	CAN_UINT8 PortNumber;
	CAN_UINT8 ChannelNumber;
	#endif

    CAN_UINT8 FuncExecSt = E_OK;
    
    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if(FuncExecSt != E_NOT_OK)
	{
	    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	    CANXCVR_SleepMode(Channel, DioXcvrChannelNumber(Channel));

		#else

		PortNumber    = CANXcvrConfiguration[Channel].PortNum;
		ChannelNumber = CANXcvrConfiguration[Channel].ChannelNum;

		CANXCVR_SleepMode(Channel, PortNumber, ChannelNumber);

		#endif
	}
}

#endif


#if (CANXCVR_NORMALMODE_FUNCTION == CANXCVR_YES)
/* ===========================================================================
**
** Name:            CanXcvr_DispNormal
**
** Description:     CCL Layer Callback to Configure the Transceiver for the
**                  Transition from the Init State to Normal
**                  Operation
**
** =========================================================================*/
void CanXcvr_DispNormal(CAN_UINT8 Channel)
{
    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_NO)
	CAN_UINT8 PortNumber;
	CAN_UINT8 ChannelNumber;
	#endif

    CAN_UINT8 FuncExecSt = E_OK;
    
    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if(FuncExecSt != E_NOT_OK)
	{    
	    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	    CANXCVR_NormalMode(Channel, DioXcvrChannelNumber(Channel));
		#ifdef CANXCVR_ENABLE_PIN_SUPPORT
	    CANXCVR_NormalMode(Channel, DioXcvrEnChannelNumber(Channel));
		#endif

	    #else

		PortNumber    = CANXcvrConfiguration[Channel].PortNum;
		ChannelNumber = CANXcvrConfiguration[Channel].ChannelNum;

		CANXCVR_NormalMode(Channel, PortNumber, ChannelNumber);

		#endif
	}
}


#endif


/* ===========================================================================
**
** Name:            CANXCVR_XcvrModeIndication
**
** Description:     CCL Layer Callback to Configure the Transceiver for the
**                  Transition from the Init State to Normal
**                  Operation
**
** =========================================================================*/
void CANXCVR_XcvrModeIndication(CAN_UINT8 Channel)
{
    CAN_UINT8 FuncExecSt = E_OK;
    
    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
    if(FuncExecSt != E_NOT_OK)
	{
	    #if (CANXCVR_DIO_FUNCTION_SUPPORT == CANXCVR_YES)
	    CanDisp_TrcvModeIndication(Channel, (CanXcvr_XcvrModeType) TransceiverMode[Channel]);
		#endif
	}
}

/* ===========================================================================
**
** Name:            CANXCVR_SetMode
**
** Description:     CCL Layer Callback to Configure the Transceiver for the
**                  Transition from the Init State to Normal
**                  Operation
**
** =========================================================================*/
CAN_UINT8 CANXCVR_SetMode(CAN_UINT8 Channel, CAN_UINT8 XcvrMode)
{
    CAN_UINT8 CanXcvrModeSt = CANXCVR_SUCCESS;
	CAN_UINT8 ModeSupported;

    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		CanXcvrModeSt = CANXCVR_FAILURE;
		#endif
	}

    if(CANXCVR_VALID_STATES <= XcvrMode)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		CanXcvrModeSt = CANXCVR_FAILURE;
		#endif
	}

    if(CanXcvrModeSt != CANXCVR_FAILURE)
	{
	    ModeSupported = ((CANXcvrConfiguration[Channel].ModeSupport >> XcvrMode) & BIT0);
	    
	    if( CANXCVR_NO == ModeSupported )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			CanXcvrModeSt = CANXCVR_FAILURE;
			#endif
		}

	    if(TransceiverMode[Channel] == XcvrMode)
		{
			#ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			CanXcvrModeSt = CANXCVR_FAILURE;
			#endif    
		}

	    if(CanXcvrModeSt != CANXCVR_FAILURE)
	    {
		    /*CanEnterCriticalSection();*/

		    switch(XcvrMode)
			{
			    case CANXCVR_INIT:

				if( (TransceiverMode[Channel] != CANXCVR_UNINIT) && (TransceiverMode[Channel] != CANXCVR_SLEEP)
				   && (TransceiverMode[Channel] != CANXCVR_STANDBY) )
				{
				    CanXcvrModeSt = CANXCVR_FAILURE;
				}

				break;

				case CANXCVR_NORMAL:

				if( TransceiverMode[Channel] != CANXCVR_INIT )
				{
				    CanXcvrModeSt = CANXCVR_FAILURE;
				}

				break;

		        case CANXCVR_STANDBY:
		        case CANXCVR_SLEEP:

		        if( TransceiverMode[Channel] != CANXCVR_NORMAL )
				{
				    CanXcvrModeSt = CANXCVR_FAILURE;
				}

				break;

		        case CANXCVR_WAKE:

		        if( (TransceiverMode[Channel] != CANXCVR_SLEEP) && (TransceiverMode[Channel] != CANXCVR_STANDBY) )
				{
				    CanXcvrModeSt = CANXCVR_FAILURE;
				}

				break;

				default:

				#ifdef CANUTIL_ENABLED
			    CanUtil_ReportError();
				#else
				CanXcvrModeSt = CANXCVR_FAILURE;
				#endif

				break;
			}

            /*CanExitCriticalSection();*/

		    if(CanXcvrModeSt != CANXCVR_FAILURE)
			{
		        (*(TransceiverStates[XcvrMode]))(Channel);
		        TransceiverMode[Channel] = XcvrMode;

		        CANXCVR_XcvrModeIndication(Channel);
			}
			else
			{
			}

		}
	}

    return(CanXcvrModeSt);
}

/* ===========================================================================
**
** Name:            CanXcvr_CclNormal
**
** Description:     CCL Layer Callback to Configure the Transceiver for the
**                  Transition from the Init State to Normal
**                  Operation
**
** =========================================================================*/
CAN_UINT8 CANXCVR_GetMode(CAN_UINT8 Channel)
{
    CAN_UINT8 CanXcvrModeSt = CANXCVR_SUCCESS;

    if(CANXCVR_NUM_OF_CHANNELS <= Channel)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		CanXcvrModeSt =  CANXCVR_FAILURE;
		#endif
	}
    
	if(CanXcvrModeSt != CANXCVR_FAILURE)
	{
	    CanXcvrModeSt = TransceiverMode[Channel];         
	}
	else
	{ 
	    CanXcvrModeSt = CANXCVR_ERROR;
	}

    return(CanXcvrModeSt);
}

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

