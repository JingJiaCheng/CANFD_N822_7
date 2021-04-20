//---------------------------------------------------------------------------------------------------------------------
//
// VISTEON CORPORATION CONFIDENTIAL
// ________________________________
//
// [2016] Visteon Corporation
// All Rights Reserved.
//
// NOTICE: This is an unpublished work of authorship, which contains trade secrets.
// Visteon Corporation owns all rights to this work and intends to maintain it in confidence to preserve
// its trade secret status. Visteon Corporation reserves the right, under the copyright laws of the United States
// or those of any other country that may have jurisdiction, to protect this work as an unpublished work,
// in the event of an inadvertent or deliberate unauthorized publication. Visteon Corporation also reserves its rights
// under all copyright laws to protect this work as a published work, when appropriate.
// Those having access to this work may not copy it, use it, modify it, or disclose the information contained in it
// without the written authorization of Visteon Corporation.
//
//---------------------------------------------------------------------------------------------------------------------
//
// File generated automatically using Visteon TmExt Configurator 1.0
// Date:           Wed Jun 15 16:45:29 EEST 2016
// User:           rmitev
// Configuration:  MAZDA-J59
// Comment:
//      Configuration for TA 1.5
//
//---------------------------------------------------------------------------------------------------------------------
#ifndef TMEXT_CFG_H
#define TMEXT_CFG_H


//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================
//=====================================================================================================================
// <TmExt_Cfg.h - BEGIN GENERATED SECTION FOR TIMER>
 //#define	eTimerHandle0                 0
 #define   eStepperWowHandle1	          1
 #define   eStepperWowHandle2			  2
 #define   eBtnMdlHandle				  3
// #define   eNvmExtHandle				  4
 #define   eWrnCtrlHandleObsIterator	  5
 #define   eWrnCtrlHandleObsReady         6
 #define   eWrnCtrlHandleMinDispTime      7
 #define   eWrnCtrlHandleOldWrnTime       8
 #define   eHmiCtrlHandleETMEntry         9
 #define   eHmiCtrlHandleETMFunc          10
 #define   eHmiCtrlHandleObserver         11
// #define   eSndCdd_SleepTimeout_Handle    12


// #define   eTimerHandle6				  13
 
#ifndef eTimerHandleGdtCdd
#define eTimerHandleGdtCdd (14U)
#endif

 #define   eBtnMdlHandleDINBTN1 		  15	
 #define   eBtnMdlHandleDINBTN2				16
 #define   eBtnMdlHandleDINBTN3				17
 #define   eBtnMdlHandleDINBTN4				18
 #define   eBtnMdlHandleCINBTN1				19
 #define   eBtnMdlHandleCINBTN2				21
 #define   eBtnMdlHandleCINBTN3				22
 #define   eBtnMdlHandleCINBTN4				23
 #define   eBtnMdlHandleCINBTN5				24
 #define   eBtnMdlHandleSTUCKDINBTN1		25
 #define   eBtnMdlHandleSTUCKDINBTN2		26
 #define   eBtnMdlHandleSTUCKDINBTN3		27
 #define   eBtnMdlHandleSTUCKDINBTN4		28
 #define   eBtnMdlHandleSTUCKCINBTN1		29
 #define   eBtnMdlHandleSTUCKCINBTN2		30
 #define   eBtnMdlHandleSTUCKCINBTN3		31
 #define   eBtnMdlHandleSTUCKCINBTN4		32
 #define   eBtnMdlHandleSTUCKCINBTN5		33
 #define   eTimerHandleTripMdl				34
 #define   eWrnCtrlHandleRepeatWrn			35
 #define   eWrnCtrlHandleOldWrnCycleTime	36
 //#define   eTimerHandleAltiaCdd				37
// #define	eTimerHandleTftDrv				37
 #define	eEngMdlTachoValueInvalid		38
 #define    eSpdMdlSpeedValueInvalid 	    39
 #define    eDiagnoseBatteryDelay			40 
 #define    eDiagnoseInitialDelay		    41

 #define    eTTProveOutStatus				99


/*

#define cTIMER16_LIST \
    eTimerHandle0, \
    eStepperWowHandle1, \
    eStepperWowHandle2, \
    eBtnMdlHandle, \
    eNvmExtHandle, \
    eWrnCtrlHandleObsIterator, \
    eWrnCtrlHandleObsReady, \
    eWrnCtrlHandleMinDispTime, \
    eWrnCtrlHandleOldWrnTime, \
    eHmiCtrlHandleETMEntry, \
    eHmiCtrlHandleETMFunc, \
    eHmiCtrlHandleObserver, \
    eSndCdd_SleepTimeout_Handle, \

#define cTIMER32_LIST \
    eTimerHandle6, \
    eTimerHandleGdtCdd, \
    eBtnMdlHandleDINBTN1, \
    eBtnMdlHandleDINBTN2, \
    eBtnMdlHandleDINBTN3, \
    eBtnMdlHandleDINBTN4, \
    eBtnMdlHandleCINBTN1, \
    eBtnMdlHandleCINBTN2, \
    eBtnMdlHandleCINBTN3, \
    eBtnMdlHandleCINBTN4, \
    eBtnMdlHandleCINBTN5, \
    eBtnMdlHandleSTUCKDINBTN1, \
    eBtnMdlHandleSTUCKDINBTN2, \
    eBtnMdlHandleSTUCKDINBTN3, \
    eBtnMdlHandleSTUCKDINBTN4, \
    eBtnMdlHandleSTUCKCINBTN1, \
    eBtnMdlHandleSTUCKCINBTN2, \
    eBtnMdlHandleSTUCKCINBTN3, \
    eBtnMdlHandleSTUCKCINBTN4, \
    eBtnMdlHandleSTUCKCINBTN5, \
    eTimerHandleTripMdl, \
    eWrnCtrlHandleRepeatWrn, \
    eWrnCtrlHandleOldWrnCycleTime, \
    eTimerHandleAltiaCdd, \


typedef enum HTimer_t
{
    cTIMER16_LIST
    cTIMER32_LIST
    eTimerMax
}HTimer;
*/


//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================
// <TmExt_Cfg.h - BEGIN GENERATED SECTION FOR TIMER>
//User has to configure the 16bit & 32bit timers list in the "HTimer" data type in DaVinci.
//After 16bit & 32bit timers configuration, user has to also update the total number of 16bit & 32bit timers count in the configuration parameter "eTimerMax" in DaVinci.
//User has to manually update the number of 16bit timers in the configuration parameter "cTIMER16_COUNT"

// <TmExt_Cfg.h - BEGIN GENERATED SECTION FOR TIMER>
//User has to configure the 16bit & 32bit timers list in the "HTimer" data type in DaVinci.
//After 16bit & 32bit timers configuration, user has to also update the total number of 16bit & 32bit timers count in the configuration parameter "eTimerMax" in DaVinci.
//User has to manually update the number of 16bit timers in the configuration parameter "cTIMER16_COUNT"

#define cTIMER16_COUNT      (3UL)
#define cTIMER32_COUNT      ((uint32)eTimerMax - cTIMER16_COUNT)

// <TmExt_Cfg.h - END GENERATED SECTION FOR TIMER>

//----------------------------------------------------------------------------------------------------------------------
// TmExt_Pulse configuration
//----------------------------------------------------------------------------------------------------------------------

// <TmExt_Cfg.h - BEGIN GENERATED SECTION FOR PULSE>


//----------------------------------------------------------------------------------------------------------------------
// UML::TPulseClientId
//----------------------------------------------------------------------------------------------------------------------
#define eClientUnitTest1        ((TPulseClientId) 0)
#define eClientUnitTest2        ((TPulseClientId) 1)
#define eClientUnitTest3        ((TPulseClientId) 2)
#define eClientUnitTest4        ((TPulseClientId) 3)
#define eClientGdtCtrl        ((TPulseClientId) 4)
#define eClientSndView        ((TPulseClientId) 5)
#define eClientTtView        ((TPulseClientId) 6)
#define eClientCount        ((TPulseClientId) 7)

//----------------------------------------------------------------------------------------------------------------------
// UML::TPulseChannelId
//----------------------------------------------------------------------------------------------------------------------
#define ePulseChannelTestChannel0        ((TPulseChannelId) 0 )
#define ePulseChannelTestChannel1        ((TPulseChannelId) 1 )
#define ePulseChannelTestChannel2        ((TPulseChannelId) 2 )
#define ePulseChannelTestChannel3        ((TPulseChannelId) 3 )
#define ePulseChannelChnl1Hz        ((TPulseChannelId) 4 )
#define ePulseChannelCount        ((TPulseChannelId) 5)



// <TmExt_Cfg.h - END GENERATED SECTION FOR PULSE>

//----------------------------------------------------------------------------------------------------------------------
// TmExt_BusyWait configuration
//----------------------------------------------------------------------------------------------------------------------
// HW specific options:

#define GET_SYSTEM_TIMER(Value) 			(void)GetCounterValue(SystemTimer,(Value))

//Timer configured at 60 MHZ
#define cGPT_TIMER 					GptConf_GptChannelConfiguration_GptChCfg_60MHzFRT
#define cTIMER_ROLLOVER_VALUE 		0xFFFFFFFFUL

// Shift to obtain the resolution of 60MHz timer - 16 ns: shift with 4 bits
#define cTIMER_RESOLUTION_MIN  		4u

void TmExt_UpdateFreeRunningCounter( void );

#endif  // TMEXT_CFG_H
