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
#ifndef STPMGRCDD_CFG
#define STPMGRCDD_CFG

#define cPtrTachoView_MotorID      	((uint8)0UL)
//#define cPtrFuelView_MotorID        ((uint8)1UL)
//#define cPtrEctView_MotorID    	    ((uint8)1UL)
#define cPtrSpeedoView_MotorID      ((uint8)1UL)

#define cAllMotorsAreConfigured         ((uint8)3)

#define cAngle_HighCalibration  ((uint16)30000UL) // Angle for the high calibration in 1/100 degrees

//Reference speed coefficients
#define mDeclareRefSpeedTable() \
{ \
    ((uint16) 422), \
    ((uint16) 422), \
}

//Time treshold in ms
#define mDeclareTableTresholdTime() \
{ \
    ((uint16) 162), \
    ((uint16) 162), \
}

// Describe the Sleep procedure
#define cDeinitSequence_PreStep1        cStep_NoAction
#define cDeinitSequence_CalibStep1      cStep_LowCalib
#define cDeinitSequence_PostStep1       cStep_GotoZeroSoft


// Describe the WakeUp procedure
#define cWakeUpSequence_PreStep         cStep_NoAction
#define cWakeUpSequence_CalibStep       cStep_NoAction
#define cWakeUpSequence_PostStep        cStep_NoAction


// Describe the Power Recover procedure
#define cPowerRecoverSequence_PreStep         cStep_NoAction
#define cPowerRecoverSequence_CalibStep       cStep_HighCalib
#define cPowerRecoverSequence_PostStep        cStep_NoAction


#define cNbSeries_Calibration  ((uint8) 3)
#define cNbSeries_ShortSeries  ((uint8) 3)
#define cNbSeries_LongSeries  ((uint8) 3)
#define cBurnInTorqieCoeff  ((uint8) 96)

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
///   Initial Version.
//---------------------------------------------------------------------------------------------------------------------
#endif // STPMGRCDD_CFG
