#if !defined(CAN_IL_PAR_H)
#define CAN_IL_PAR_H
/* ===========================================================================

                      CONFIDENTIAL VISTEON CORPORATION

   This is an unpublished work of authorship, which contains trade secrets,
   created in 2006.  Visteon Corporation owns all rights to this work and
   intends to maintain it in confidence to preserve its trade secret status.
   Visteon Corporation reserves the right, under the copyright laws of the
   United States or those of any other country that may have jurisdiction, to
   protect this work as an unpublished work, in the event of an inadvertent
   or deliberate unauthorized publication.  Visteon Corporation also reserves
   its rights under all copyright laws to protect this work as a published
   work, when appropriate.  Those having access to this work may not copy it,
   use it, modify it or disclose the information contained in it without the
   written authorization of Visteon Corporation.

  =========================================================================*/
/* ===========================================================================

    Name:           CanIl_Par_Cfg.h

    Description:    CAN Interaction Layer Tx, Rx Parameters Header File

    Organization:   Multiplex Core Technology

   =========================================================================*/ 

#include "CanIl_Defines.h" 

/* ===========================================================================
   P U B L I C   M A C R O S
  =========================================================================*/

/* ===========================================================================
   Interaction Layer Number of Transmit Messages, Signals
  =========================================================================*/


#define Can_Ch0_Il_Tx_Num_Burst_Periodic   (0u) /*no use*/


#define Can_Ch0_Il_Tx_Num_Periodic         (6u) /*no use*/


/* ===========================================================================
     Interaction Layer Number of Receive Messages, Signals
    =========================================================================*/


#define Can_Ch0_Il_Rx_Num_Periodic         (33u)	/*no use*/

#define Can_Ch0_Il_Rx_Num_Periodic_Signals (272u)	/*no use*/

#define Can_Ch0_Il_Rx_Num_Req_Frames       (0u)

/* ===========================================================================
      Interaction Layer support
     =========================================================================*/

  /* ===========================================================================
      Interaction Layer Transmit Message Enumerations
      NB: The below Tx message sequence should match one to one with the
          IL Tx Message Desription table.
          CAN_IL_CHANNEL0_TX_MESSAGE const
          Can_Ch0_Il_Tx_Messages[ Can_Ch0_Il_Tx_Num_Messages ]
     =========================================================================*/

/* ===========================================================================
    Interaction Layer Transmit Message (Frame) Handles
   =========================================================================*/

typedef enum
  {
Can_Ch0_Il_Tx_Msg_IC_0x386_TMH=0,
/*(0) */
Can_Ch0_Il_Tx_Msg_IC_0x387_TMH,
/*(1) */
Can_Ch0_Il_Tx_Msg_IC_0x510_TMH,
/*(2) */
Can_Ch0_Il_Tx_Msg_IC_0x525_TMH,
/*(3) */
Can_Ch0_Il_Tx_Msg_IC_time_0x581_TMH,
/*(4) */
Can_Ch0_Il_Tx_Msg_IC_0x637_TMH,
/*(5) */
Can_Ch0_Il_Tx_Num_Messages
/*(6) */
}Can_Ch0_Il_Tx_Messages_Macro;


/* ===========================================================================
     Interaction Layer Transmit Signal Enumerations
     NB: The below tx signal sequence should match one to one with the
           IL Tx Signal description table.
         CAN_IL_SIGNAL const
         Can_Il_Tx_signals[ CAN_IL_TX_NUM_SIGNALS  ]

    =========================================================================*/

typedef enum
  {
Can_Ch0_Il_Tx_Sig_IC_BSDSoundSts_902 = 0,
/*(0) */
Can_Ch0_Il_Tx_Sig_IC_Fuel_level_903,
/*(1) */
Can_Ch0_Il_Tx_Sig_IC_DriveTimehour_903,
/*(2) */
Can_Ch0_Il_Tx_Sig_IC_DriveTimeMinute_903,
/*(3) */
Can_Ch0_Il_Tx_Sig_IC_AverageSpeed_903,
/*(4) */
Can_Ch0_Il_Tx_Sig_IC_ChangOilDistance_903,
/*(5) */
Can_Ch0_Il_Tx_Sig_BackUpODO_903,
/*(6) */
Can_Ch0_Il_Tx_Sig_IC_OdometerMasterValue_1296,
/*(7) */
Can_Ch0_Il_Tx_Sig_IC_tirelearning_1296,
/*(8) */
Can_Ch0_Il_Tx_Sig_IC_SBR_Driver_1296,
/*(9) */
Can_Ch0_Il_Tx_Sig_IC_DISFail_1296,
/*(10) */
Can_Ch0_Il_Tx_Sig_IC_QDashACCFail_1296,
/*(11) */
Can_Ch0_Il_Tx_Sig_IC_VehSpd_HMI_1296,
/*(12) */
Can_Ch0_Il_Tx_Sig_IC_BrakeAirPressure_1296,
/*(13) */
Can_Ch0_Il_Tx_Sig_IC_Rolling_counter_0x510_1296,
/*(14) */
Can_Ch0_Il_Tx_Sig_IC_CabLockSts_1296,
/*(15) */
Can_Ch0_Il_Tx_Sig_IC_Checksum_0x510_1296,
/*(16) */
Can_Ch0_Il_Tx_Sig_IC_AFC_1317,
/*(17) */
Can_Ch0_Il_Tx_Sig_IC_DTE_1317,
/*(18) */
Can_Ch0_Il_Tx_Sig_IC_AlarmStatus_1317,
/*(19) */
Can_Ch0_Il_Tx_Sig_IC_AlarmOrNot_1317,
/*(20) */
Can_Ch0_Il_Tx_Sig_IC_Fuel_Level_percent_1317,
/*(21) */
Can_Ch0_Il_Tx_Sig_IC_Fuel_Level_Volumn_1317,
/*(22) */
Can_Ch0_Il_Tx_Sig_IC_Fuel_Level_VolumnQF_1317,
/*(23) */
Can_Ch0_Il_Tx_Sig_IC_Rolling_counter_0x525_1317,
/*(24) */
Can_Ch0_Il_Tx_Sig_IC_ManRgen_D_Rq_1317,
/*(25) */
Can_Ch0_Il_Tx_Sig_IC_AFC_Type_1317,
/*(26) */
Can_Ch0_Il_Tx_Sig_IC_Checksum_0x525_1317,
/*(27) */
Can_Ch0_Il_Tx_Sig_IC_Year_1409,
/*(28) */
Can_Ch0_Il_Tx_Sig_IC_Month_1409,
/*(29) */
Can_Ch0_Il_Tx_Sig_IC_Date_1409,
/*(30) */
Can_Ch0_Il_Tx_Sig_IC_Hour_1409,
/*(31) */
Can_Ch0_Il_Tx_Sig_IC_Minute_1409,
/*(32) */
Can_Ch0_Il_Tx_Sig_IC_Second_1409,
/*(33) */
Can_Ch0_Il_Tx_Sig_IC_OdometerMaster_1591,
/*(34) */
Can_Ch0_Il_Tx_Sig_IC_AFC_GB_1591,
/*(35) */
 Can_Ch0_Il_Tx_Num_Signals
/*(36) */
}Can_Ch0_Il_Tx_Signals_Macro;


/* ===========================================================================
      Interaction Layer Receive Message Enumerations
     =========================================================================*/
typedef enum
  {
Can_Ch0_Il_Rx_Msg_GW_EMS_Tq_0x101 =0,
/*(0) */
Can_Ch0_Il_Rx_Msg_GW_EMS_Torq_0x105,
/*(1) */
Can_Ch0_Il_Rx_Msg_GW_EMS_WhlTorq_0x107,
/*(2) */
Can_Ch0_Il_Rx_Msg_GW_EMS_MT_0x108,
/*(3) */
Can_Ch0_Il_Rx_Msg_BCM_Power_0x10B,
/*(4) */
Can_Ch0_Il_Rx_Msg_GW_TCU_GearInfo_Power_0x123,
/*(5) */
Can_Ch0_Il_Rx_Msg_GW_EMS_Engstatus_0x142,
/*(6) */
Can_Ch0_Il_Rx_Msg_GW_EMS_Sts_Power_0x151,
/*(7) */
Can_Ch0_Il_Rx_Msg_PEPS_Start_0x1A5,
/*(8) */
Can_Ch0_Il_Rx_Msg_GW_ABS_Sts_0x221,
/*(9) */
Can_Ch0_Il_Rx_Msg_GW_ESP_Status_Chassis_0x243,
/*(10) */
Can_Ch0_Il_Rx_Msg_GW_IPM_0x245,
/*(11) */
Can_Ch0_Il_Rx_Msg_GW_MRR_Chassis_0x246,
/*(12) */
Can_Ch0_Il_Rx_Msg_GW_EPS_Chassis_0x260,
/*(13) */
Can_Ch0_Il_Rx_Msg_GW_PAM_0x271,
/*(14) */
Can_Ch0_Il_Rx_Msg_GW_SOD_0x275,
/*(15) */
Can_Ch0_Il_Rx_Msg_GW_IPM_LeftLine_0x278,
/*(16) */
Can_Ch0_Il_Rx_Msg_GW_MRR_FrObj_0x279,
/*(17) */
Can_Ch0_Il_Rx_Msg_GW_IPM_LeftLine_0x280,
/*(18) */
Can_Ch0_Il_Rx_Msg_BCM_Door_0x310,
/*(19) */
Can_Ch0_Il_Rx_Msg_BCM_0x313,
/*(20) */
Can_Ch0_Il_Rx_Msg_BCM_Sts_0x315,
/*(21) */
Can_Ch0_Il_Rx_Msg_BCM_Lamp_0x318,
/*(22) */
Can_Ch0_Il_Rx_Msg_GW_SWM_Body_0x31A,
/*(23) */
Can_Ch0_Il_Rx_Msg_GW_SWM_MRR_0x31B,
/*(24) */
Can_Ch0_Il_Rx_Msg_PEPS_0x325,
/*(25) */
Can_Ch0_Il_Rx_Msg_TPMS_Tire_0x361,
/*(26) */
Can_Ch0_Il_Rx_Msg_TPMS_Tire_0x362,
/*(27) */
Can_Ch0_Il_Rx_Msg_GW_EMS_WarmLimp_0x364,
/*(28) */
Can_Ch0_Il_Rx_Msg_GW_EMS_Power_0x366,
/*(29) */
Can_Ch0_Il_Rx_Msg_GW_EMS_0x368,
/*(30) */
Can_Ch0_Il_Rx_Msg_MP5_0x382,
/*(31) */
Can_Ch0_Il_Rx_Msg_MP5_0x384,
/*(32) */
Can_Ch0_Il_Rx_Msg_GW_TCU_Info_0x395,
/*(33) */
Can_Ch0_Il_Rx_Msg_GW_MRR_FRObj_0x480,
/*(34) */
Can_Ch0_Il_Rx_Msg_GW_IPM_RightLine_0x490,
/*(35) */
Can_Ch0_Il_Rx_Msg_GW_IPM_RightLine_0x491,
/*(36) */
Can_Ch0_Il_Rx_Msg_GW_DMS_0x4A0,
/*(37) */
Can_Ch0_Il_Rx_Msg_MP5_0x530,
/*(38) */
Can_Ch0_Il_Rx_Msg_MP5_Windows_0x532,
/*(39) */
Can_Ch0_Il_Rx_Msg_GW_TBOX_time_0x582,
/*(40) */
Can_Ch0_Il_Rx_Msg_BCM_0x584,
/*(41) */
Can_Ch0_Il_Rx_Msg_GW_EMS_0x636,
/*(42) */
Can_Ch0_Il_Rx_Msg_EMS_TBOX_0x639,
/*(43) */
Can_Ch0_Il_Rx_Num_Messages
/*(44) */
}Can_Ch0_Il_Rx_Messages_Macro;


/* ===========================================================================
     Interaction Layer Receive Signal Enumerations
    =========================================================================*/
  

typedef enum
{
Can_Ch0_Il_Rx_Sig_EMS_EngSpeed_257 = 0,                             /*(0) */
Can_Ch0_Il_Rx_Sig_EMS_AirCompressorStatus_261,                      /*(1) */
Can_Ch0_Il_Rx_Sig_EMS_BrkPedalStasus_263,                           /*(2) */
Can_Ch0_Il_Rx_Sig_EMS_MTIndicateGearForN_264,                       /*(3) */
Can_Ch0_Il_Rx_Sig_DCM_EMS_RollingCounter_0x108_264,                 /*(4) */
Can_Ch0_Il_Rx_Sig_DCM_EMS_Checksum_0x108_264,                       /*(5) */
Can_Ch0_Il_Rx_Sig_Power_EMS_EngCoolanTemp_267,                      /*(6) */
Can_Ch0_Il_Rx_Sig_Power_EMS_EngOperationStatus_267,                 /*(7) */
Can_Ch0_Il_Rx_Sig_Power_EMS_BatteryVoltageError_267,                /*(8) */
Can_Ch0_Il_Rx_Sig_Power_EMS_EngSpeed_267,                           /*(9) */
Can_Ch0_Il_Rx_Sig_TCU_DisplayGear_291,                              /*(10) */
Can_Ch0_Il_Rx_Sig_TCU_GearSelectorReq_291,                          /*(11) */
Can_Ch0_Il_Rx_Sig_TCU_StGearMode_291,                               /*(12) */
Can_Ch0_Il_Rx_Sig_TCU_Status_AliveCounter0x123_291,                 /*(13) */
Can_Ch0_Il_Rx_Sig_TCU_Status_Checksum0x123_291,                     /*(14) */
Can_Ch0_Il_Rx_Sig_EMS_EngOperationStatus_322,                       /*(15) */
Can_Ch0_Il_Rx_Sig_EMS_TargCruiseSpeed_337,                          /*(16) */
Can_Ch0_Il_Rx_Sig_EMS_CruiseControlStatus_337,                      /*(17) */
Can_Ch0_Il_Rx_Sig_PEPS_Remotestartstatus_421,                       /*(18) */
Can_Ch0_Il_Rx_Sig_ABS_WhlMilgFrntLe_545,                            /*(19) */
Can_Ch0_Il_Rx_Sig_ABS_WhlMilgFrntRi_545,                            /*(20) */
Can_Ch0_Il_Rx_Sig_ABS_VehSpdLgt_545,                                /*(21) */
Can_Ch0_Il_Rx_Sig_ABS_EbdFlgFlt_545,                                /*(22) */
Can_Ch0_Il_Rx_Sig_ABS_AbsFlgFlt_545,                                /*(23) */
Can_Ch0_Il_Rx_Sig_ABS_RollingCounter_0x221_545,                     /*(24) */
Can_Ch0_Il_Rx_Sig_ABS_WhlMilgFrntLeStatus_545,                      /*(25) */
Can_Ch0_Il_Rx_Sig_ABS_WhlMilgFrntRiStatus_545,                      /*(26) */
Can_Ch0_Il_Rx_Sig_ABS_Checksum_0x221_545,                           /*(27) */
Can_Ch0_Il_Rx_Sig_ESP_HHCAvailable_579,                             /*(28) */
Can_Ch0_Il_Rx_Sig_ABS_HAZActive_579,                                /*(29) */
Can_Ch0_Il_Rx_Sig_ESP_EPBStatus_579,                                /*(30) */
Can_Ch0_Il_Rx_Sig_ESP_EPBErrorStatus_579,                           /*(31) */
Can_Ch0_Il_Rx_Sig_ESP_HDCAvailable_579,                             /*(32) */
Can_Ch0_Il_Rx_Sig_ESP_HDCActive_579,                                /*(33) */
Can_Ch0_Il_Rx_Sig_ESP_CdpAvailable_579,                             /*(34) */
Can_Ch0_Il_Rx_Sig_ESP_EPBWarningMessage3_579,                       /*(35) */
Can_Ch0_Il_Rx_Sig_ESP_EPBWarningMessage2_579,                       /*(36) */
Can_Ch0_Il_Rx_Sig_ESP_EPBWarningMessage1_579,                       /*(37) */
Can_Ch0_Il_Rx_Sig_ESP_AVHWarningMessage_579,                        /*(38) */
Can_Ch0_Il_Rx_Sig_ESP_AvhActive_579,                                /*(39) */
Can_Ch0_Il_Rx_Sig_ESP_AvhStandby_579,                               /*(40) */
Can_Ch0_Il_Rx_Sig_ESP_AvhAvabliable_579,                            /*(41) */
Can_Ch0_Il_Rx_Sig_ESP_VdcFlgFlt_579,                                /*(42) */
Can_Ch0_Il_Rx_Sig_ESP_TcsFlgFlt_579,                                /*(43) */
Can_Ch0_Il_Rx_Sig_EBS_TcsFlgFlt_579,                                /*(44) */
Can_Ch0_Il_Rx_Sig_ESP_ESPInfoLamp_579,                              /*(45) */
Can_Ch0_Il_Rx_Sig_ESP_EspEnableSts_579,                             /*(46) */
Can_Ch0_Il_Rx_Sig_ESP_RollingCounter_0x243_579,                     /*(47) */
Can_Ch0_Il_Rx_Sig_ESP_Checksum_0x243_579,                           /*(48) */
Can_Ch0_Il_Rx_Sig_IPM_LaneAssitType_581,                            /*(49) */
Can_Ch0_Il_Rx_Sig_IPM_LaneAssit_WarningVibration_581,               /*(50) */
Can_Ch0_Il_Rx_Sig_IPM_LaneAssit_WarningAudio_581,                   /*(51) */
Can_Ch0_Il_Rx_Sig_IPM_LaneAssit_LeftVisualization_581,              /*(52) */
Can_Ch0_Il_Rx_Sig_IPM_LaneAssit_RightVisualization_581,             /*(53) */
Can_Ch0_Il_Rx_Sig_IPM_SLASpdlimitUnits_581,                         /*(54) */
Can_Ch0_Il_Rx_Sig_IPM_SLAState_581,                                 /*(55) */
Can_Ch0_Il_Rx_Sig_IPM_LaneAssit_Status_581,                         /*(56) */
Can_Ch0_Il_Rx_Sig_IPM_SLASpdlimit_581,                              /*(57) */
Can_Ch0_Il_Rx_Sig_IPM_IHC_Status_581,                               /*(58) */
Can_Ch0_Il_Rx_Sig_IPM_DDD_IndexStatus_581,                          /*(59) */
Can_Ch0_Il_Rx_Sig_IPM_TJAICA_Status_581,                            /*(60) */
Can_Ch0_Il_Rx_Sig_IPM_LaneAssit_HandsonReq_581,                     /*(61) */
Can_Ch0_Il_Rx_Sig_ACC_SpdSetValue_582,                              /*(62) */
Can_Ch0_Il_Rx_Sig_ACC_ObjDetected_582,                              /*(63) */
Can_Ch0_Il_Rx_Sig_ACC_TimeGapSet_582,                               /*(64) */
Can_Ch0_Il_Rx_Sig_ACC_TarObjBarDis_582,                             /*(65) */
Can_Ch0_Il_Rx_Sig_ACCHMI_Mode_582,                                  /*(66) */
Can_Ch0_Il_Rx_Sig_ACCFailInfo_582,                                  /*(67) */
Can_Ch0_Il_Rx_Sig_ACC_TakeOverReq_582,                              /*(68) */
Can_Ch0_Il_Rx_Sig_AEB_STATE_582,                                    /*(69) */
Can_Ch0_Il_Rx_Sig_ACC_Startstop_infor_582,                          /*(70) */
Can_Ch0_Il_Rx_Sig_PCW_preWarning_582,                               /*(71) */
Can_Ch0_Il_Rx_Sig_PCW_latentWarning_582,                            /*(72) */
Can_Ch0_Il_Rx_Sig_Obj_Speed_582,                                    /*(73) */
Can_Ch0_Il_Rx_Sig_FCW_STATE_582,                                    /*(74) */
Can_Ch0_Il_Rx_Sig_ACC_Textinfo_582,                                 /*(75) */
Can_Ch0_Il_Rx_Sig_Rolling_counter_0x246_582,                        /*(76) */
Can_Ch0_Il_Rx_Sig_Checksum_0x246_582,                               /*(77) */
Can_Ch0_Il_Rx_Sig_EPS_S_WarningLampYellow_608,                      /*(78) */
Can_Ch0_Il_Rx_Sig_EPS_S_SafeLampRed_608,                            /*(79) */
Can_Ch0_Il_Rx_Sig_Rolling_counter_0x260_608,                        /*(80) */
Can_Ch0_Il_Rx_Sig_Checksum_0x260_608,                               /*(81) */
Can_Ch0_Il_Rx_Sig_PAM_objectStsRLM_625,                             /*(82) */
Can_Ch0_Il_Rx_Sig_PAM_objectStsRLC_625,                             /*(83) */
Can_Ch0_Il_Rx_Sig_PAM_objectStsRRC_625,                             /*(84) */
Can_Ch0_Il_Rx_Sig_PAM_objectStsRRM_625,                             /*(85) */
Can_Ch0_Il_Rx_Sig_PAM_ChimeCmdSoundStatus_625,                      /*(86) */
Can_Ch0_Il_Rx_Sig_PAM_RearSysTemWorkSts_625,                        /*(87) */
Can_Ch0_Il_Rx_Sig_PAM_FrontSysTemWorkSts_625,                       /*(88) */
Can_Ch0_Il_Rx_Sig_PAM_ChimeCmdSoundCadence_625,                     /*(89) */
Can_Ch0_Il_Rx_Sig_SOD_LCA_warningReqRight_629,                      /*(90) */
Can_Ch0_Il_Rx_Sig_SOD_DOA_warningReqRightRear_629,                  /*(91) */
Can_Ch0_Il_Rx_Sig_SOD_DOA_warningReqRightFront_629,                 /*(92) */
Can_Ch0_Il_Rx_Sig_SOD_CTA_warningReqRight_629,                      /*(93) */
Can_Ch0_Il_Rx_Sig_SOD_BLIS_display_629,                             /*(94) */
Can_Ch0_Il_Rx_Sig_SOD_LCA_warningReqLeft_629,                       /*(95) */
Can_Ch0_Il_Rx_Sig_SOD_DOA_warningReqLeftRear_629,                   /*(96) */
Can_Ch0_Il_Rx_Sig_SOD_DOA_warningReqLeftFront_629,                  /*(97) */
Can_Ch0_Il_Rx_Sig_SOD_CTA_warningReqLeft_629,                       /*(98) */
Can_Ch0_Il_Rx_Sig_DOA_OFFTelltale_629,                              /*(99) */
Can_Ch0_Il_Rx_Sig_CTA_OFFTelltale_629,                              /*(100) */
Can_Ch0_Il_Rx_Sig_SODLCA_OFFTelltale_629,                           /*(101) */
Can_Ch0_Il_Rx_Sig_IPM_LedtLine_dx_start_632,                        /*(102) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLine_dy_632,                              /*(103) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLine_dx_lookhead_632,                     /*(104) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLine_hor_curve_632,                       /*(105) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLine_yawangle_632,                        /*(106) */
Can_Ch0_Il_Rx_Sig_LeftLineHorCurvatureAlteration_632,               /*(107) */
Can_Ch0_Il_Rx_Sig_MRR_F_Object_dx_633,                              /*(108) */
Can_Ch0_Il_Rx_Sig_MRR_F_Object_dy_633,                              /*(109) */
Can_Ch0_Il_Rx_Sig_MRR_F_Obj_0x_class_633,                           /*(110) */
Can_Ch0_Il_Rx_Sig_MRR_FF_Object_dx_633,                             /*(111) */
Can_Ch0_Il_Rx_Sig_MRR_FF_Object_dy_633,                             /*(112) */
Can_Ch0_Il_Rx_Sig_MRR_FF_Obj_0x_class_633,                          /*(113) */
Can_Ch0_Il_Rx_Sig_MRR_FFTargrtDetection_633,                        /*(114) */
Can_Ch0_Il_Rx_Sig_MRR_PedDetection_633,                             /*(115) */
Can_Ch0_Il_Rx_Sig_LaneAssit_LeftLeftVisualization_640,              /*(116) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLine_Type_640,                            /*(117) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLine_Color_640,                           /*(118) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLeftLine_Type_640,                        /*(119) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLeftLine_Color_640,                       /*(120) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLeftLine_dy_640,                          /*(121) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLeftLine_hor_curve_640,                   /*(122) */
Can_Ch0_Il_Rx_Sig_IPM_LeftLeftLine_yawangle_640,                    /*(123) */
Can_Ch0_Il_Rx_Sig_LeftLeftLineCurvatureAlteration_640,              /*(124) */
Can_Ch0_Il_Rx_Sig_BCM_DoorStsRearRi_784,                            /*(125) */
Can_Ch0_Il_Rx_Sig_BCM_DoorStsRearLe_784,                            /*(126) */
Can_Ch0_Il_Rx_Sig_BCM_DoorStsFrntRi_784,                            /*(127) */
Can_Ch0_Il_Rx_Sig_BCM_DoorStsFrntLe_784,                            /*(128) */
Can_Ch0_Il_Rx_Sig_BCM_DoorLockStsRearRi_784,                        /*(129) */
Can_Ch0_Il_Rx_Sig_BCM_DoorLockStsRearLe_784,                        /*(130) */
Can_Ch0_Il_Rx_Sig_BCM_DoorLockStsFrntRi_784,                        /*(131) */
Can_Ch0_Il_Rx_Sig_BCM_DoorLockStsFrntLe_784,                        /*(132) */
Can_Ch0_Il_Rx_Sig_BCM_AntiTheftSts_784,                             /*(133) */
Can_Ch0_Il_Rx_Sig_BCM_LockUnlockFeedback_784,                       /*(134) */
Can_Ch0_Il_Rx_Sig_BCM_DoorLockStsTrunk_784,                         /*(135) */
Can_Ch0_Il_Rx_Sig_BCM_DoorStsTrunk_784,                             /*(136) */
Can_Ch0_Il_Rx_Sig_BCM_TrunkDoorPreUnlockSts_784,                    /*(137) */
Can_Ch0_Il_Rx_Sig_BCM_FrontWiperSts_784,                            /*(138) */
Can_Ch0_Il_Rx_Sig_BCM_EnginehoodSts_784,                            /*(139) */
Can_Ch0_Il_Rx_Sig_BCM_Rolling_counter_0x310_784,                    /*(140) */
Can_Ch0_Il_Rx_Sig_BCM_Reverse_gear_784,                             /*(141) */
Can_Ch0_Il_Rx_Sig_BCM_TurnIndicatorSts_784,                         /*(142) */
Can_Ch0_Il_Rx_Sig_BCM_Checksum_0x310_784,                           /*(143) */
Can_Ch0_Il_Rx_Sig_BCM_OutsideTempDig_787,                           /*(144) */
Can_Ch0_Il_Rx_Sig_BCM_Mechanical_Hand_Brake_787,                    /*(145) */
Can_Ch0_Il_Rx_Sig_BCM_BrakeFluidSts_787,                            /*(146) */
Can_Ch0_Il_Rx_Sig_BCM_OutsideTemp_787,                              /*(147) */
Can_Ch0_Il_Rx_Sig_BCM_Start_Switch_787,                             /*(148) */
Can_Ch0_Il_Rx_Sig_BCM_SS_EnableSts_787,                             /*(149) */
Can_Ch0_Il_Rx_Sig_BCM_PowerModeInvalid_787,                         /*(150) */
Can_Ch0_Il_Rx_Sig_BCM_PowerMode_787,                                /*(151) */
Can_Ch0_Il_Rx_Sig_BCM_Rollingcounter_0x313_787,                     /*(152) */
Can_Ch0_Il_Rx_Sig_BCM_Checksum_0x313_787,                           /*(153) */
Can_Ch0_Il_Rx_Sig_BCM_BGLLumLvlSettingStatus_789,                   /*(154) */
Can_Ch0_Il_Rx_Sig_BCM_FrntFogLmpSts_792,                            /*(155) */
Can_Ch0_Il_Rx_Sig_BCM_PosLmpSts_792,                                /*(156) */
Can_Ch0_Il_Rx_Sig_BCM_LowBeamSts_792,                               /*(157) */
Can_Ch0_Il_Rx_Sig_BCM_HighBeamSts_792,                              /*(158) */
Can_Ch0_Il_Rx_Sig_BCM_reversinglightSts_792,                        /*(159) */
Can_Ch0_Il_Rx_Sig_BCM_DayRunningLampSts_792,                        /*(160) */
Can_Ch0_Il_Rx_Sig_BCM_PosLmpIndicator_792,                          /*(161) */
Can_Ch0_Il_Rx_Sig_BCM_RearFogLmpSts_792,                            /*(162) */
Can_Ch0_Il_Rx_Sig_BCM_laserlightSts_792,                            /*(163) */
Can_Ch0_Il_Rx_Sig_BCM_AmbientLightSts_792,                          /*(164) */
Can_Ch0_Il_Rx_Sig_BCM_Highmountedstoplamp_792,                      /*(165) */
Can_Ch0_Il_Rx_Sig_BCM_BrakelightSts_792,                            /*(166) */
Can_Ch0_Il_Rx_Sig_BCM_WelcomeSts_792,                               /*(167) */
Can_Ch0_Il_Rx_Sig_BCM_BackHomeSts_792,                              /*(168) */
Can_Ch0_Il_Rx_Sig_BCM_AutolampSts_792,                              /*(169) */
Can_Ch0_Il_Rx_Sig_BCM_readinglampSts_792,                           /*(170) */
Can_Ch0_Il_Rx_Sig_BCM_DayRunningLampDig_792,                        /*(171) */
Can_Ch0_Il_Rx_Sig_BCM_BrakelightDig_792,                            /*(172) */
Can_Ch0_Il_Rx_Sig_BCM_reversinglightDig_792,                        /*(173) */
Can_Ch0_Il_Rx_Sig_BCM_TurnIndicatorDig_792,                         /*(174) */
Can_Ch0_Il_Rx_Sig_BCM_RearFogLmpDig_792,                            /*(175) */
Can_Ch0_Il_Rx_Sig_BCM_FrntFogLmpDig_792,                            /*(176) */
Can_Ch0_Il_Rx_Sig_BCM_PosLmpDig_792,                                /*(177) */
Can_Ch0_Il_Rx_Sig_BCM_LowBeamDig_792,                               /*(178) */
Can_Ch0_Il_Rx_Sig_BCM_Rollingcounter_0x318_792,                     /*(179) */
Can_Ch0_Il_Rx_Sig_BCM_Checksum_0x318_792,                           /*(180) */
Can_Ch0_Il_Rx_Sig_SWM_Menu_Right_794,                               /*(181) */
Can_Ch0_Il_Rx_Sig_SWM_Menu_Left_794,                                /*(182) */
Can_Ch0_Il_Rx_Sig_SWM_Menu_Down_794,                                /*(183) */
Can_Ch0_Il_Rx_Sig_SWM_Menu_Up_794,                                  /*(184) */
Can_Ch0_Il_Rx_Sig_Rolling_counter_0x31A_794,                        /*(185) */
Can_Ch0_Il_Rx_Sig_SWM_Menu_Return_794,                              /*(186) */
Can_Ch0_Il_Rx_Sig_SWM_Menu_Confirm_794,                             /*(187) */
Can_Ch0_Il_Rx_Sig_Checksum_0x31A_794,                               /*(188) */
Can_Ch0_Il_Rx_Sig_SWM_ACCtauGapSetPlus_795,                         /*(189) */
Can_Ch0_Il_Rx_Sig_SWM_ACCvSetMinus_795,                             /*(190) */
Can_Ch0_Il_Rx_Sig_SWM_ACCvSetPlus_795,                              /*(191) */
Can_Ch0_Il_Rx_Sig_SWM_ACCResume_795,                                /*(192) */
Can_Ch0_Il_Rx_Sig_SWM_ACCSet_795,                                   /*(193) */
Can_Ch0_Il_Rx_Sig_SWM_ACCEnableSwitch_795,                          /*(194) */
Can_Ch0_Il_Rx_Sig_SWM_LaneAssistSwitch_795,                         /*(195) */
Can_Ch0_Il_Rx_Sig_SWM_ACCtauGapSetMinus_795,                        /*(196) */
Can_Ch0_Il_Rx_Sig_PEPS_PowerModeInvalid_805,                        /*(197) */
Can_Ch0_Il_Rx_Sig_PEPS_PowerMode_805,                               /*(198) */
Can_Ch0_Il_Rx_Sig_PEPS_IMMO_MatchStatus_805,                        /*(199) */
Can_Ch0_Il_Rx_Sig_PEPS_SystemFailStatus_805,                        /*(200) */
Can_Ch0_Il_Rx_Sig_PEPS_ESCL_FailStatus_805,                         /*(201) */
Can_Ch0_Il_Rx_Sig_PEPS_SSB_FailStatus_805,                          /*(202) */
Can_Ch0_Il_Rx_Sig_PEPS_BrakeIndicationWarning_805,                  /*(203) */
Can_Ch0_Il_Rx_Sig_PEPS_NotPNWarning_805,                            /*(204) */
Can_Ch0_Il_Rx_Sig_PEPS_NotNWarning_805,                             /*(205) */
Can_Ch0_Il_Rx_Sig_PEPS_DoorOpenNotOFFWarning_805,                   /*(206) */
Can_Ch0_Il_Rx_Sig_PEPS_DoorOpenWarning_805,                         /*(207) */
Can_Ch0_Il_Rx_Sig_PEPS_KeyBatteryWarning_805,                       /*(208) */
Can_Ch0_Il_Rx_Sig_PEPS_KeyOutWarning1_805,                          /*(209) */
Can_Ch0_Il_Rx_Sig_PEPS_NoKeyFoundWarning_805,                       /*(210) */
Can_Ch0_Il_Rx_Sig_PEPS_KeyReminderWarning_805,                      /*(211) */
Can_Ch0_Il_Rx_Sig_PEPS_RemainingNumSts_805,                         /*(212) */
Can_Ch0_Il_Rx_Sig_TPMS_LF_Pressure_865,                             /*(213) */
Can_Ch0_Il_Rx_Sig_TPMS_RF_Pressure_865,                             /*(214) */
Can_Ch0_Il_Rx_Sig_TPMS_RR_Pressure_865,                             /*(215) */
Can_Ch0_Il_Rx_Sig_TPMS_LR_Pressure_865,                             /*(216) */
Can_Ch0_Il_Rx_Sig_TPMS_Tire_Temperature_865,                        /*(217) */
Can_Ch0_Il_Rx_Sig_TPMS_LF_Pressure_Warning_865,                     /*(218) */
Can_Ch0_Il_Rx_Sig_TPMS_RF_Pressure_Warning_865,                     /*(219) */
Can_Ch0_Il_Rx_Sig_TPMS_System_Status_865,                           /*(220) */
Can_Ch0_Il_Rx_Sig_TPMS_RR_Pressure_Warning_865,                     /*(221) */
Can_Ch0_Il_Rx_Sig_TPMS_LR_Pressure_Warning_865,                     /*(222) */
Can_Ch0_Il_Rx_Sig_TPMS_Temperature_Warning_865,                     /*(223) */
Can_Ch0_Il_Rx_Sig_TPMS_resrved_865,                                 /*(224) */
Can_Ch0_Il_Rx_Sig_Tire_Position_865,                                /*(225) */
Can_Ch0_Il_Rx_Sig_TPMS_Lamp_Status_865,                             /*(226) */
Can_Ch0_Il_Rx_Sig_TPMS_AL_State_865,                                /*(227) */
Can_Ch0_Il_Rx_Sig_RRI_Pressure_866,                                 /*(228) */
Can_Ch0_Il_Rx_Sig_LRI_Pressure_866,                                 /*(229) */
Can_Ch0_Il_Rx_Sig_RRI_Pressure_Warning_866,                         /*(230) */
Can_Ch0_Il_Rx_Sig_LRI_Pressure_Warning_866,                         /*(231) */
Can_Ch0_Il_Rx_Sig_EMS_EngCoolanTemp_868,                            /*(232) */
Can_Ch0_Il_Rx_Sig_EMS_BatterVoltage_868,                            /*(233) */
Can_Ch0_Il_Rx_Sig_EMS_BatteryVoltageError_868,                      /*(234) */
Can_Ch0_Il_Rx_Sig_EMS_Fuelcounter_870,                              /*(235) */
Can_Ch0_Il_Rx_Sig_EMS_FuelconsumptionInst_870,                      /*(236) */
Can_Ch0_Il_Rx_Sig_EMS_RemindShiftGear_MT_870,                       /*(237) */
Can_Ch0_Il_Rx_Sig_EMS_MIL_870,                                      /*(238) */
Can_Ch0_Il_Rx_Sig_EMS_SVS_870,                                      /*(239) */
Can_Ch0_Il_Rx_Sig_EMS_StartStopStatus_870,                          /*(240) */
Can_Ch0_Il_Rx_Sig_EMS_ExhaustbrakeSts_870,                          /*(241) */
Can_Ch0_Il_Rx_Sig_EMS_SpeedLimtHour_872,                            /*(242) */
Can_Ch0_Il_Rx_Sig_EMS_UreaTxt_872,                                  /*(243) */
Can_Ch0_Il_Rx_Sig_EMS_SpeedLimtMin_872,                             /*(244) */
Can_Ch0_Il_Rx_Sig_EMS_UreaLvl_872,                                  /*(245) */
Can_Ch0_Il_Rx_Sig_EMS_ManRgenTxt_D_872,                             /*(246) */
Can_Ch0_Il_Rx_Sig_DCM_GlowPlugLmpReq_872,                           /*(247) */
Can_Ch0_Il_Rx_Sig_DCM_WIFFullLmpReq_872,                            /*(248) */
Can_Ch0_Il_Rx_Sig_EMS_TroqLimtHour_872,                             /*(249) */
Can_Ch0_Il_Rx_Sig_EMS_TroqLimtMin_872,                              /*(250) */
Can_Ch0_Il_Rx_Sig_EMS_UreaQty_872,                                  /*(251) */
Can_Ch0_Il_Rx_Sig_EMS_OBDTxt_872,                                   /*(252) */
Can_Ch0_Il_Rx_Sig_EMS_ManRgenTxt_D_RqDsply_872,                     /*(253) */
Can_Ch0_Il_Rx_Sig_EMS_UreaWarn_872,                                 /*(254) */
Can_Ch0_Il_Rx_Sig_EMS_Soot_Pc_Dsply_872,                            /*(255) */
Can_Ch0_Il_Rx_Sig_MP5_AudioStatus_898,                              /*(256) */
Can_Ch0_Il_Rx_Sig_MP5_EnergyFlow_898,                               /*(257) */
Can_Ch0_Il_Rx_Sig_MP5_SetMultiButton_898,                           /*(258) */
Can_Ch0_Il_Rx_Sig_MP5_BSDSoundSwitchSts_898,                        /*(259) */
Can_Ch0_Il_Rx_Sig_MP5_NavStatus_898,                                /*(260) */
Can_Ch0_Il_Rx_Sig_MP5_NavICON_900,                                  /*(261) */
Can_Ch0_Il_Rx_Sig_MP5_ROUTE_REMAIN_DIS_900,                         /*(262) */
Can_Ch0_Il_Rx_Sig_MP5_ALModeSetting_900,                            /*(263) */
Can_Ch0_Il_Rx_Sig_MP5_ALStartAroundSetting_900,                     /*(264) */
Can_Ch0_Il_Rx_Sig_TrnSrvcRqd_B_Rq_917,                              /*(265) */
Can_Ch0_Il_Rx_Sig_TCU_GearPFault_917,                               /*(266) */
Can_Ch0_Il_Rx_Sig_TCU_WarningMessage_917,                           /*(267) */
Can_Ch0_Il_Rx_Sig_TCU_DrvShiftAllwCondRmd_917,                      /*(268) */
Can_Ch0_Il_Rx_Sig_MRR_L_Object_dx_1152,                             /*(269) */
Can_Ch0_Il_Rx_Sig_MRR_L_Object_dy_1152,                             /*(270) */
Can_Ch0_Il_Rx_Sig_MRR_L_Obj_0x_class_1152,                          /*(271) */
Can_Ch0_Il_Rx_Sig_MRR_R_Object_dx_1152,                             /*(272) */
Can_Ch0_Il_Rx_Sig_MRR_R_Object_dy_1152,                             /*(273) */
Can_Ch0_Il_Rx_Sig_MRR_R_Obj_0x_class_1152,                          /*(274) */
Can_Ch0_Il_Rx_Sig_MRR_LeftTargrtDetection_1152,                     /*(275) */
Can_Ch0_Il_Rx_Sig_MRR_RightTargrtDetection_1152,                    /*(276) */
Can_Ch0_Il_Rx_Sig_IPM_RightLine_dx_start_1168,                      /*(277) */
Can_Ch0_Il_Rx_Sig_IPM_RightLine_dy_1168,                            /*(278) */
Can_Ch0_Il_Rx_Sig_IPM_RightLine_dx_lookhead_1168,                   /*(279) */
Can_Ch0_Il_Rx_Sig_IPM_RightLine_hor_curve_1168,                     /*(280) */
Can_Ch0_Il_Rx_Sig_IPM_RightLine_yawangle_1168,                      /*(281) */
Can_Ch0_Il_Rx_Sig_RightLineHorCurvatureAlteration_1168,             /*(282) */
Can_Ch0_Il_Rx_Sig_LaneAssitRightRightVisualization_1169,            /*(283) */
Can_Ch0_Il_Rx_Sig_IPM_RightLine_Type_1169,                          /*(284) */
Can_Ch0_Il_Rx_Sig_IPM_RightLine_Color_1169,                         /*(285) */
Can_Ch0_Il_Rx_Sig_IPM_RightRighLine_Type_1169,                      /*(286) */
Can_Ch0_Il_Rx_Sig_IPM_RighRightLine_Color_1169,                     /*(287) */
Can_Ch0_Il_Rx_Sig_IPM_RightRightLine_dy_1169,                       /*(288) */
Can_Ch0_Il_Rx_Sig_IPM_RightRightLine_hor_curve_1169,                /*(289) */
Can_Ch0_Il_Rx_Sig_IPM_RightRightLine_yawangle_1169,                 /*(290) */
Can_Ch0_Il_Rx_Sig_RightLineCurvatureAlteration2_1169,               /*(291) */
Can_Ch0_Il_Rx_Sig_DMS_System_Status_1184,                           /*(292) */
Can_Ch0_Il_Rx_Sig_DMS_DriverPitch_1184,                             /*(293) */
Can_Ch0_Il_Rx_Sig_DMS_DriverYaw_1184,                               /*(294) */
Can_Ch0_Il_Rx_Sig_DMS_DriverWatchRegion_1184,                       /*(295) */
Can_Ch0_Il_Rx_Sig_DMS_DriverAttentionState_1184,                    /*(296) */
Can_Ch0_Il_Rx_Sig_DMS_DriverDrowsinessState_1184,                   /*(297) */
Can_Ch0_Il_Rx_Sig_DMS_IRSensorState_1184,                           /*(298) */
Can_Ch0_Il_Rx_Sig_DMS_DriverActionState_1184,                       /*(299) */
Can_Ch0_Il_Rx_Sig_RollingCounter_0x4A0_1184,                        /*(300) */
Can_Ch0_Il_Rx_Sig_Checksum_0x4A0_1184,                              /*(301) */
Can_Ch0_Il_Rx_Sig_MP5_ICMenuShift_Button_1328,                      /*(302) */
Can_Ch0_Il_Rx_Sig_MP5_ICMenuActive_Button_1328,                     /*(303) */
Can_Ch0_Il_Rx_Sig_MP5_AlarmStatus_1328,                             /*(304) */
Can_Ch0_Il_Rx_Sig_MP5_AlarmOrNot_1328,                              /*(305) */
Can_Ch0_Il_Rx_Sig_MP5_ICMenu_Cmd_1330,                              /*(306) */
Can_Ch0_Il_Rx_Sig_TBOX_Year_1410,                                   /*(307) */
Can_Ch0_Il_Rx_Sig_TBOX_Month_1410,                                  /*(308) */
Can_Ch0_Il_Rx_Sig_TBOX_Date_1410,                                   /*(309) */
Can_Ch0_Il_Rx_Sig_TBOX_Hour_1410,                                   /*(310) */
Can_Ch0_Il_Rx_Sig_TBOX_Minute_1410,                                 /*(311) */
Can_Ch0_Il_Rx_Sig_TBOX_Second_1410,                                 /*(312) */
Can_Ch0_Il_Rx_Sig_TBOX_ReTime_1410,                                 /*(313) */
Can_Ch0_Il_Rx_Sig_BCM_LoadManageLevel_1412,                         /*(314) */
Can_Ch0_Il_Rx_Sig_BCM_CarModeIndicator_1412,                        /*(315) */
Can_Ch0_Il_Rx_Sig_BCM_CarMode_1412,                                 /*(316) */
Can_Ch0_Il_Rx_Sig_BCM_RollingCounter_0x584_1412,                    /*(317) */
Can_Ch0_Il_Rx_Sig_BCM_Checksum_0x584_1412,                          /*(318) */
Can_Ch0_Il_Rx_Sig_EMS_BackupOdometer_1590,                          /*(319) */
Can_Ch0_Il_Rx_Sig_EMS_LockManagFeedback_1593,                       /*(320) */
Can_Ch0_Il_Rx_Sig_EMS_TBOXOlineFeedback_1593,                       /*(321) */
Can_Ch0_Il_Rx_Sig_EMS_PowerFeedback_1593,                           /*(322) */
Can_Ch0_Il_Rx_Sig_EMS_SpdLmtFeedback_1593,                          /*(323) */
Can_Ch0_Il_Rx_Sig_EMS_TBOXAuthentResult_1593,                       /*(324) */
Can_Ch0_Il_Rx_Sig_EMS_RollingCode_1593,                             /*(325) */
Can_Ch0_Il_Rx_Num_Signals              /*(326) */
}Can_Ch0_Il_Rx_Signals_Macro;


/* ===========================================================================
    Interaction Layer Receive Signal (Multiple Bytes) Rx Get Macros
   =========================================================================*/
/* ===========================================================================
   P U B L I C   M E M O R Y
  =========================================================================*/

extern CAN_IL_SIGNAL          const      Can_Ch0_Il_Tx_Signals[ Can_Ch0_Il_Tx_Num_Signals ];

extern CAN_IL_TX_MESSAGE      const      Can_Ch0_Il_Tx_Messages[ Can_Ch0_Il_Tx_Num_Messages ];

extern CAN_IL_TX_FRAME        const      Can_Ch0_Il_Tx_Frame_Table[ Can_Ch0_Il_Tx_Num_Messages ];

extern CAN_IL_SIGNAL          const      Can_Ch0_Il_Rx_Signals[Can_Ch0_Il_Rx_Num_Signals  ];

/*extern CAN_IL_RX_MESSAGE      const      Can_Ch0_Il_Rx_Messages[ ];*/

extern CAN_IL_RX_FRAME        const      Can_Ch0_Il_Rx_Frame_Table[ Can_Ch0_Il_Rx_Num_Messages ];

/*extern Can_Il_Rx_Data_Pointer const      Can_Ch0_Il_Receive_Data_Table[ ];*/

extern pTxPrecopyfn           const      Can_Ch0_Il_Tx_Precopy_Function_Table[ Can_Ch0_Il_Tx_Num_Messages ];

extern CAN_UINT8 Can_Ch0_Il_Rx_Frame_Data[ Can_Ch0_Il_Rx_Num_Messages ][ CAN_MAX_DATA_LENGTH ];

extern CAN_UINT8 Can_Ch0_Il_Rx_Frame_Status[ Can_Ch0_Il_Rx_Num_Messages ];

extern CAN_UINT16 Can_Ch0_Il_Rx_Timeout_Count[ Can_Ch0_Il_Rx_Num_Messages ];

extern Can_Il_Rx_Data_Pointer Can_Ch0_Il_Receive_Ptr[ Can_Ch0_Il_Rx_Num_Messages ][ CAN_MAX_DATA_LENGTH ];

#ifdef CAN_IL_TX_BURST_MODE

 #if ( Can_Ch0_Il_Tx_Num_Burst_Periodic > 0 )

  extern CAN_UINT8 Can_Ch0_Il_Tx_Burst_Count[ Can_Ch0_Il_Tx_Num_Burst_Periodic ];

 #endif

#endif

extern void Can_Ch0_Il_Precopy_Function(void);


#endif  /* CAN_IL_PAR_H */ 
/*****************************************************************************
    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date       By         Reason For Change
------------------------------------------------------------------------------

******************************************************************************/
/*****************************************************************************
Date          : 2021-04-07 09:22:03
By              : ChengJia
Traceability    : N822_7inch_BCAN_Matrix_20210315.dbc
Change Description  : Tool Generated code
*****************************************************************************/
