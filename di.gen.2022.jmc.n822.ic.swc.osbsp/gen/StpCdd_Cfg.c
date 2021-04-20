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
#include "Rte_StpCddMdl.h"
#include "StpCdd_Cfg.h"
#include "StpMgrCdd.h"
#include "StpMgrCdd_Cfg.h"
#include "string.h"
#define PositionInDegree                                   ((uint8) 0)
#define PositionInMicrosteps                               ((uint8) 1)
#define PositionInDegreeAbsolute                           ((uint8) 2)


Gauge_Correction_Table_X RPMPtrTable_X;
Gauge_Correction_Table_Y RPMPtrTable_Y;
/*
Gauge_Correction_Table_X EctPtrTable_X;
Gauge_Correction_Table_Y EctPtrTable_Y;
Gauge_Correction_Table_X FuelPtrTable_X;
Gauge_Correction_Table_Y FuelPtrTable_Y;
*/
Gauge_Correction_Table_X SpdPtrTable_X;
Gauge_Correction_Table_Y SpdPtrTable_Y;


void LoadGaugesConfig(void)
{
    SStpMgrCfg MotorCfg = { (void *)0, (void *)0, (uint8)0, (uint16)0, (uint16)500,(uint16)0, { TRUE , (uint8)0 }, (uint16)0 };
    SStpMgrCfg * const pMotorCfg = &MotorCfg;
    SStpIfCfg * const pHWALCfg = &pMotorCfg->HWALStprCfg;
    NV_Data_Interpolations StpGaugeTable;
    NV_Data_ClusterStpSettings StpPostion;
    #if 0
	RPMPtrTable_X[0] = 0;
	RPMPtrTable_X[1] = 18960;
	RPMPtrTable_X[2] = 18960;
	RPMPtrTable_X[3] = 18960;
	RPMPtrTable_X[4] = 18960;
	RPMPtrTable_X[5] = 18960;


	RPMPtrTable_Y[0] = 0;
	RPMPtrTable_Y[1] = 18960;
	RPMPtrTable_Y[2] = 18960;
	RPMPtrTable_Y[3] = 18960;
	RPMPtrTable_Y[4] = 18960;
	RPMPtrTable_Y[5] = 18960;

	SpdPtrTable_X[0] = 0;
	SpdPtrTable_X[1] = 14220;
	SpdPtrTable_X[2] = 18960;
	SpdPtrTable_X[3] = 18960;
	SpdPtrTable_X[4] = 18960;
	SpdPtrTable_X[5] = 18960;


	SpdPtrTable_Y[0] = 0;
	SpdPtrTable_Y[1] = 14220;
	SpdPtrTable_Y[2] = 18960;
	SpdPtrTable_Y[3] = 18960;
	SpdPtrTable_Y[4] = 18960;
	SpdPtrTable_Y[5] = 18960;
    #endif
    Rte_Read_NV_Cluster_Interpolations_Cluster_Interpolations(&StpGaugeTable);
    Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_NVM_V348STP(&StpPostion);
    #if 1
	(void)memcpy(SpdPtrTable_X, &(StpGaugeTable.Speedo_Gauge_Correction_Table_X), sizeof(SpdPtrTable_X));
	(void)memcpy(SpdPtrTable_Y, &(StpGaugeTable.Speedo_Gauge_Correction_Table_Y), sizeof(SpdPtrTable_Y));  
	(void)memcpy(RPMPtrTable_X, &(StpGaugeTable.RPM_Gauge_Correction_Table_X), sizeof(RPMPtrTable_X));
	(void)memcpy(RPMPtrTable_Y, &(StpGaugeTable.RPM_Gauge_Correction_Table_Y), sizeof(RPMPtrTable_Y));
    #endif
    pMotorCfg->hCorrectionTable_X = (uint16*)RPMPtrTable_X;
    pMotorCfg->hCorrectionTable_Y = (uint16*)RPMPtrTable_Y;
    pMotorCfg->DataSize = sizeof(Gauge_Correction_Table_X)/sizeof(uint16);
	pMotorCfg->SleepZeroOffset = StpPostion.RPM_Gauge_Sleep_Offset;
	pMotorCfg->RunZeroOffset = StpPostion.RPM_Gauge_Zero_Software;

    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_RPM_Gauge_Sleep_Offset(&pMotorCfg->SleepZeroOffset);
    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_RPM_Gauge_Zero_Software(&pMotorCfg->RunZeroOffset);
    pMotorCfg->BurnInFinalPosition = pMotorCfg->RunZeroOffset;//pMotorCfg->RunZeroOffset;
	
    pHWALCfg->bRotationDirection = cRPM_MOTOR_ROTATION_DIRECTION;
	pHWALCfg->MagneticOffset = StpPostion.RPM_Gauge_Magnetic_Offset;
	pMotorCfg->OverDriveOffset = StpPostion.RPM_OverDrive_Offset_Value;

    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_RPM_Gauge_Magnetic_Offset(&pHWALCfg->MagneticOffset);
    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_RPM_OverDrive_Offset_Value(&pMotorCfg->OverDriveOffset);
	//pMotorCfg->OverDriveOffset = 500;
	pHWALCfg->bHysteresisCompDirection = StpPostion.RPM_Hysteresis_Direction_Value;
	pHWALCfg->HysteresisAngleStorageInDeg = StpPostion.RPM_Hysteresis_Angle_Value;

    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_RPM_Hysteresis_Direction_Value(&pHWALCfg->bHysteresisCompDirection);
	//(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_RPM_OverDrive_Offset_Value(&pHWALCfg->HysteresisAngleStorageInDeg);
    (void) StpMgr_SetCfg(cPtrTachoView_MotorID, pMotorCfg);
	

    //(void)Rte_Read_NVM_V348_NV_Data_Interpolations_If_Speedo_Gauge_Correction_Table_X(SpdPtrTable_X);
    //(void)Rte_Read_NVM_V348_NV_Data_Interpolations_If_Speedo_Gauge_Correction_Table_Y(SpdPtrTable_Y);
    pMotorCfg->hCorrectionTable_X = (uint16*)SpdPtrTable_X;
    pMotorCfg->hCorrectionTable_Y = (uint16*)SpdPtrTable_Y;
	pMotorCfg->SleepZeroOffset = StpPostion.Spd_Gauge_Sleep_Offset;
	pMotorCfg->RunZeroOffset = StpPostion.Spd_Gauge_Zero_Software;

    //pMotorCfg->DataSize = 2;
    pMotorCfg->DataSize = sizeof(Gauge_Correction_Table_X)/sizeof(uint16);
    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_Spd_Gauge_Sleep_Offset(&pMotorCfg->SleepZeroOffset);
    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_Spd_Gauge_Zero_Software(&pMotorCfg->RunZeroOffset);
    pMotorCfg->BurnInFinalPosition = pMotorCfg->RunZeroOffset;
    
    pHWALCfg->bRotationDirection = cSPEED_MOTOR_ROTATION_DIRECTION;
	pHWALCfg->MagneticOffset =StpPostion.Spd_Gauge_Magnetic_Offset;

    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_Spd_Gauge_Magnetic_Offset(&pHWALCfg->MagneticOffset);
	//pMotorCfg->OverDriveOffset = 333;
    //(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_Spd_OverDrive_Offset_Value(&pMotorCfg->OverDriveOffset);
   // (void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_Spd_Hysteresis_Direction_Value(&pHWALCfg->bHysteresisCompDirection);
	//(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_Spd_Hysteresis_Angle_Value(&pHWALCfg->HysteresisAngleStorageInDeg);
	pMotorCfg->OverDriveOffset = StpPostion.Spd_OverDrive_Offset_Value;
	pHWALCfg->bHysteresisCompDirection = StpPostion.Spd_Hysteresis_Direction_Value;
	pHWALCfg->HysteresisAngleStorageInDeg = StpPostion.Spd_Hysteresis_Angle_Value;

    (void) StpMgr_SetCfg(cPtrSpeedoView_MotorID, pMotorCfg);
}

void LoadGaugesConfig_Cal(void)
{
    SStpMgrCfg MotorCfg = { (void *)0, (void *)0, (uint8)0, (uint16)0, (uint16)0,(uint16)0, { TRUE , (uint8)0 }, (uint16)0 };
    SStpMgrCfg * const pMotorCfg = &MotorCfg;
    SStpIfCfg * const pHWALCfg = &pMotorCfg->HWALStprCfg;

    //(void)Rte_Read_StpCdd_NV_RPM_Gauge_Correction_Table_X_Value(RPMPtrTable_X);
    //(void)Rte_Read_StpCdd_NV_RPM_Gauge_Correction_Table_Y_Value(RPMPtrTable_Y);
    //pMotorCfg->hCorrectionTable_X = (uint16*)RPMPtrTable_X;
    //pMotorCfg->hCorrectionTable_Y = (uint16*)RPMPtrTable_Y;
    //pMotorCfg->DataSize = sizeof(Gauge_Correction_Table_X)/sizeof(uint16);
    //(void)Rte_Read_StpCdd_NV_RPM_Sleep_Offset_Value(&pMotorCfg->SleepZeroOffset);
    //(void)Rte_Read_StpCdd_NV_RPM_Zero_Software_Value(&pMotorCfg->RunZeroOffset);
    //pMotorCfg->BurnInFinalPosition = pMotorCfg->RunZeroOffset;
    
    pHWALCfg->bRotationDirection = cRPM_MOTOR_ROTATION_DIRECTION;
	pHWALCfg->MagneticOffset = 0;
	
    //(void)Rte_Read_StpCdd_NV_RPM_Magnetic_Offset_Value(&pHWALCfg->MagneticOffset);
    //(void)Rte_Read_StpCdd_NV_RPM_OverDrive_Offset_Value_Value(&pMotorCfg->OverDriveOffset);
    //(void)Rte_Read_StpCdd_NV_RPM_Hysteresis_Direction_Value_Value(&pHWALCfg->bHysteresisCompDirection);
	//(void)Rte_Read_StpCdd_NV_RPM_Hysteresis_Angle_Value_Value(&pHWALCfg->HysteresisAngleStorageInDeg);
    (void) StpMgr_SetCfg(cPtrTachoView_MotorID, pMotorCfg);


    //(void)Rte_Read_StpCdd_NV_Spd_Gauge_Correction_Table_X_Value(SpdPtrTable_X);
    //(void)Rte_Read_StpCdd_NV_Spd_Gauge_Correction_Table_Y_Value(SpdPtrTable_Y);
    //pMotorCfg->hCorrectionTable_X = (uint16*)SpdPtrTable_X;
    //pMotorCfg->hCorrectionTable_Y = (uint16*)SpdPtrTable_Y;
	
    //pMotorCfg->DataSize = sizeof(Gauge_Correction_Table_X)/sizeof(uint16);
	
    //(void)Rte_Read_StpCdd_NV_Spd_Sleep_Offset_Value(&pMotorCfg->SleepZeroOffset);
    //(void)Rte_Read_StpCdd_NV_Spd_Zero_Software_Value(&pMotorCfg->RunZeroOffset);
    //pMotorCfg->BurnInFinalPosition = pMotorCfg->RunZeroOffset;
	
    pHWALCfg->bRotationDirection = cSPEED_MOTOR_ROTATION_DIRECTION;
	
    //(void)Rte_Read_StpCdd_NV_Spd_Magnetic_Offset_Value(&pHWALCfg->MagneticOffset);
	
	//pMotorCfg->OverDriveOffset = 333;
    //(void)Rte_Read_StpCdd_NV_Spd_OverDrive_Offset_Value_Element(&pMotorCfg->OverDriveOffset);
    //(void)Rte_Read_StpCdd_NV_Spd_Hysteresis_Direction_Value_Element(&pHWALCfg->bHysteresisCompDirection);
	//(void)Rte_Read_StpCdd_NV_Spd_Hysteresis_Angle_Value_Element(&pHWALCfg->HysteresisAngleStorageInDeg);
    (void) StpMgr_SetCfg(cPtrSpeedoView_MotorID, pMotorCfg);
}




void WriteSpeedRunZeroOffset_DiagnoseContrl(uint16 RunZeroOffset)
{
	NV_Data_ClusterStpSettings stpdata;
	(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_NVM_V348STP(&stpdata);
    stpdata.Spd_Gauge_Zero_Software = RunZeroOffset;
	(void)Rte_Write_NVM_V348_NV_Data_ClusterStpSettings_NVM_V348STP(&stpdata);
}

uint16 ReadSpeedRunZeroOffset_DiagnoseContrl(void)
{
	uint16	RunZeroOffset = 0x0;
	NV_Data_ClusterStpSettings stpdata;
	(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_NVM_V348STP(&stpdata);
    RunZeroOffset = stpdata.Spd_Gauge_Zero_Software;
	return(RunZeroOffset);
}

void WriteTachoRunZeroOffset_DiagnoseContrl(uint16 RunZeroOffset)
{
	NV_Data_ClusterStpSettings stpdata;
	(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_NVM_V348STP(&stpdata);
    stpdata.RPM_Gauge_Zero_Software = RunZeroOffset;
	Rte_Write_NVM_V348_NV_Data_ClusterStpSettings_NVM_V348STP(&stpdata);

}


uint16 ReadTachoRunZeroOffset_DiagnoseContrl(void)
{
	uint16	RunZeroOffset = 0x0;
	
	NV_Data_ClusterStpSettings stpdata;
	(void)Rte_Read_NVM_V348_NV_Data_ClusterStpSettings_NVM_V348STP(&stpdata);
    RunZeroOffset = stpdata.RPM_Gauge_Zero_Software;


	return(RunZeroOffset);
}



void GaugesStartRunInMode_Diagnose(void)
{
	(void)StpMgr_StartBurnIn();
}

void GaugesStopRunInMode_Diagnose(void)
{
	(void)StpMgr_StopBurnIn();
}
boolean TmExt_elapsed_Status_Wrapper(uint8 timer,uint32 timeout)
{
    boolean Timer_Elapsed_Status;
    (void)Rte_Call_rpTimer_TmExt_Timer_IsElapsed(timer,timeout,&Timer_Elapsed_Status);
    return Timer_Elapsed_Status;

}







































