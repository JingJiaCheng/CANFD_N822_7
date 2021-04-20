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
// File generated automatically using Visteon StpCdd Configurator 1.0
// Date:           Tue Jul 26 15:12:48 EEST 2016
// User:           amihayl1
// Configuration:  DIAGNOSTICS
// Comment:
//      Configuration for TA 1.4
//
//---------------------------------------------------------------------------------------------------------------------
#ifndef STPDRVCDD_CFG_H
#define STPDRVCDD_CFG_H

// @brief  List of commands with same prototype to be indexed.
typedef enum EStpCmd_t
{
  eStpCmd_Init,
  eStpCmd_DeInit,
  eStpCmd_EnterHZ,
  eStpCmd_LeaveHZ,
  eStpCmd_InitFullStep,
  eStpCmd_Count
} EStpCmd;

/// @brief  ROM context of stepper motor object
typedef struct SStp_t
{
    void (*pStpCmd[eStpCmd_Count])( void );
    void (*pSetPwm)( uint16, uint16, uint8 );
    void (*pSetFullStep)( uint8 );
} SStp;

/// @brief  Defines individual motor objects
#define STP_INSTANCE( Ix )      { { &StpDrv_Init_STP##Ix,             \
                                    &StpDrv_DeInit_STP##Ix,           \
                                    &StpDrv_EnterHZ_STP##Ix,          \
                                    &StpDrv_LeaveHZ_STP##Ix,          \
                                    &StpDrv_InitFullStep_STP##Ix      \
                                  },                                  \
                                    &StpDrv_SetPWM_STP##Ix,           \
                                    &StpDrv_FullStepOut_STP##Ix       \
                                }


/// @brief  Defines an array of motor objects
#define STP_ARRAY_INSTANCE \
     static const SStp StpArray[eStp_Count] = { \
         STP_INSTANCE( 3 ), \
		 STP_INSTANCE( 5 ), \
     };

// TODO:  to be outside ?
#define cMotAll     ((uint8)0xFFu)

//---------------------------------------------------------------------------------------------------------------------
// Forward declarations
//---------------------------------------------------------------------------------------------------------------------
void StpDrv_Init_STP0( void );
void StpDrv_DeInit_STP0( void );
void StpDrv_EnterHZ_STP0( void );
void StpDrv_LeaveHZ_STP0( void );
void StpDrv_InitFullStep_STP0( void );
void StpDrv_SetPWM_STP0( uint16 CoilA, uint16 CoilB, uint8 SignBits );
void StpDrv_FullStepOut_STP0( uint8 FullStepSta );

void StpDrv_Init_STP1( void );
void StpDrv_DeInit_STP1( void );
void StpDrv_EnterHZ_STP1( void );
void StpDrv_LeaveHZ_STP1( void );
void StpDrv_InitFullStep_STP1( void );
void StpDrv_SetPWM_STP1( uint16 CoilA, uint16 CoilB, uint8 SignBits );
void StpDrv_FullStepOut_STP1( uint8 FullStepSta );

void StpDrv_Init_STP2( void );
void StpDrv_DeInit_STP2( void );
void StpDrv_EnterHZ_STP2( void );
void StpDrv_LeaveHZ_STP2( void );
void StpDrv_InitFullStep_STP2( void );
void StpDrv_SetPWM_STP2( uint16 CoilA, uint16 CoilB, uint8 SignBits );
void StpDrv_FullStepOut_STP2( uint8 FullStepSta );

void StpDrv_Init_STP3( void );
void StpDrv_DeInit_STP3( void );
void StpDrv_EnterHZ_STP3( void );
void StpDrv_LeaveHZ_STP3( void );
void StpDrv_InitFullStep_STP3( void );
void StpDrv_SetPWM_STP3( uint16 CoilA, uint16 CoilB, uint8 SignBits );
void StpDrv_FullStepOut_STP3( uint8 FullStepSta );

void StpDrv_Init_STP4( void );
void StpDrv_DeInit_STP4( void );
void StpDrv_EnterHZ_STP4( void );
void StpDrv_LeaveHZ_STP4( void );
void StpDrv_InitFullStep_STP4( void );
void StpDrv_SetPWM_STP4( uint16 CoilA, uint16 CoilB, uint8 SignBits );
void StpDrv_FullStepOut_STP4( uint8 FullStepSta );

void StpDrv_Init_STP5( void );
void StpDrv_DeInit_STP5( void );
void StpDrv_EnterHZ_STP5( void );
void StpDrv_LeaveHZ_STP5( void );
void StpDrv_InitFullStep_STP5( void );
void StpDrv_SetPWM_STP5( uint16 CoilA, uint16 CoilB, uint8 SignBits );
void StpDrv_FullStepOut_STP5( uint8 FullStepSta );

//---------------------------------------------------------------------------------------------------------------------
///                                        R E V I S I O N    N O T E S
//---------------------------------------------------------------------------------------------------------------------
///
///   For each change to this file, be sure to record:
///       1.  Who made the change and when the change was made
///       2.  Why the change was made and the intended result
///       3.  Document version referenced
///
///       refer to comments below for rev #.
///
///
///   PVCS Revision           Date            By
///       Reason for Change
///
///   Revision 1.0  02-JUN-2016     BVIJAYKU  
//    Started Baseline: TA_1.4.24_Delivery snapshot and V16 local changes.
//    Reason for Changes: Coverity,MISRA and Compiler warnings fix.
//---------------------------------------------------------------------------------------------------------------------
#endif  // STPDRVCDD_CFG_H
