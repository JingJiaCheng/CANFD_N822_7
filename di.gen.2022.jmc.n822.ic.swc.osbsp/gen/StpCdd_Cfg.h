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
#ifndef STPCDD_CFG_H
#define STPCDD_CFG_H


#define eDcmExt_Write (0U)

#define eDcmExt_Read (1U)

#define eDcmExt_IOCtrl (2U)

#define eDcmExt_RoutineCtrl (3U)


#define eStpCalibKind_Low (0U)

#define eStpCalibKind_High (1U)

#define eStpCalibKind_Angle (2U)

#define eStpCalibKind_Ssd (3U)

#define eStpCalibKind_Count (4U)


#define cIdAllMotors         ((uint8)3)

#define cAngle_HighCalibration  ((uint16)30000UL) // Angle for the high calibration in 1/100 degrees

#define cRPM_MOTOR_ROTATION_DIRECTION          (TRUE)
#define cSPEED_MOTOR_ROTATION_DIRECTION      	(FALSE)
//#define cECT_MOTOR_ROTATION_DIRECTION          (FALSE)
//#define cFUEL_MOTOR_ROTATION_DIRECTION         (FALSE)


#define STPCDD_CALIB_SSD

#define cNbSeries_Calibration  ((uint8) 3)
#define cNbSeries_ShortSeries  ((uint8) 3)
#define cNbSeries_LongSeries  ((uint8) 3)
#define cBurnInTorqieCoeff  ((uint8) 96)

//----------------------------------------------------------------------------------------------------------------------
// RI connections
//----------------------------------------------------------------------------------------------------------------------
// protection of shared data between tasks and motor interrupt
// enable and disable all interrupts
#define RI_EnterCriticalSection   // dapostol: todo
#define RI_LeaveCriticalSection   // dapostol: todo



// Interpolation functions
#define RI_InterpolationLinear(a,b,x,y,z)    Stp_InterpolateLinear((a),(b),(x),(y),(z))

// timer functions
#define RI_Timer_Start(a)                   TmExt_Timer_Start(a)
#define RI_Timer_IsElapsed(a,Timeout)       TmExt_elapsed_Status_Wrapper(a, Timeout)

#define eStp_Count    2

extern boolean isAllCfgFromNvMExtApplied;
void LoadGaugesConfig(void);
boolean TmExt_elapsed_Status_Wrapper(uint8 timer,uint32 timeout);


void	WriteSpeedRunZeroOffset_DiagnoseContrl(uint16 RunZeroOffset);
uint16	ReadSpeedRunZeroOffset_DiagnoseContrl(void);

void	WriteTachoRunZeroOffset_DiagnoseContrl(uint16 RunZeroOffset);
uint16	ReadTachoRunZeroOffset_DiagnoseContrl(void);




void GaugesStartRunInMode_Diagnose(void);
void GaugesStopRunInMode_Diagnose(void);


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
#endif  // STPCDD_CFG_H
