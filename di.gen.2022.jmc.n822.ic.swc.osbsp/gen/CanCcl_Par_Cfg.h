#if !defined( CCL_APP_CFG_H )
  #define CCL_APP_CFG_H

  /* ===========================================================================
  **
  **                     CONFIDENTIAL VISTEON CORPORATION
  **
  **  This is an unpublished work of authorship  which contains trade secrets 
  **  created in 2007.  Visteon Corporation owns all rights to this work and
  **  intends to maintain it in confidence to preserve its trade secret status.
  **  Visteon Corporation reserves the right  under the copyright laws of the
  **  United States or those of any other country that may have jurisdiction  to
  **  protect this work as an unpublished work  in the event of an inadvertent
  **  or deliberate unauthorized publication.  Visteon Corporation also reserves
  **  its rights under all copyright laws to protect this work as a published
  **  work  when appropriate.  Those having access to this work may not copy it 
  **  use it  modify it or disclose the information contained in it without the
  **  written authorization of Visteon Corporation.
  **
  ** =========================================================================*/

  /* ===========================================================================
  **
  **  Name:           CanCcl_Par_Cfg.h
  **
  **  Description:    CAN CCL configuration parameters for configured database
  **
  **  Organization:   Vehicle Communications
  **                  Visteon Corporation
  **
  ** =========================================================================*/

  /* ===========================================================================
  **  I N C L U D E   F I L E S
  ** =========================================================================*/

  #include "CanCcl_Cfg.h"
  #include "CanCcl_Defines.h"
  #include "Com_Handles.h"
   

/* ===========================================================================
  **  M A C R O   D E F I N I T I O N S
  ** =========================================================================*/

  /* DBC Tx & Rx CFG */

  #ifndef Can_ControllerId
  #define Can_ControllerId                        (0u)
  #endif

#define Can_Ccl_Rx_Num_Messages                 (44u)
#define Can_Ccl_Rx_Num_Periodic_Messages        (33u) /*no use*/
#define Can_Ccl_Rx_Num_Signals                  (326u)
#define Can_Ccl_Rx_Num_Periodic_Signals         (272u) /*no use*/
#define Can_Ccl_Rx_Num_RxAck_Ind                (326u)
#define Can_Ccl_Rx_Num_RxTOut_Ind               (326u)
#define Can_Ccl_Rx_Num_RxInv_Ind                (1u)

#define Can_Ccl_Tx_Num_Messages                 (6u)
#define Can_Ccl_Tx_Signal_Num_Signals           (36u)
#define Can_Ccl_Tx_Num_Periodic                 (6u)
#define Can_Ccl_Tx_Num_Burst_Periodic           (0u)

#define Can_Ccl_Num_Of_PduGroups                (2u)
  #define CCL_MAX_IPDUGROUPVECTOR_BYTES           (1u) 


/*Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
  /*      Symbolic Name                                  Value   Active in predefined variant(s) */
  #define CanCclConf_IPduGroup_TuringECU_CAN_Rx           1u
  #define CanCclConf_IPduGroup_TuringECU_CAN_Tx           0u



  /* Handle IDs of handle space CclRxSig [Rx Signals] */
	/*		Symbolic Name																	   Value   Active in predefined variant(s) */
#define CanCclRxHndlCh0_EMS_EngSpeed_257                                0u
#define CanCclRxHndlCh0_EMS_AirCompressorStatus_261                     1u
#define CanCclRxHndlCh0_EMS_BrkPedalStasus_263                          2u
#define CanCclRxHndlCh0_EMS_MTIndicateGearForN_264                      3u
#define CanCclRxHndlCh0_DCM_EMS_RollingCounter_0x108_264                4u
#define CanCclRxHndlCh0_DCM_EMS_Checksum_0x108_264                      5u
#define CanCclRxHndlCh0_Power_EMS_EngCoolanTemp_267                     6u
#define CanCclRxHndlCh0_Power_EMS_EngOperationStatus_267                7u
#define CanCclRxHndlCh0_Power_EMS_BatteryVoltageError_267               8u
#define CanCclRxHndlCh0_Power_EMS_EngSpeed_267                          9u
#define CanCclRxHndlCh0_TCU_DisplayGear_291                             10u
#define CanCclRxHndlCh0_TCU_GearSelectorReq_291                         11u
#define CanCclRxHndlCh0_TCU_StGearMode_291                              12u
#define CanCclRxHndlCh0_TCU_Status_AliveCounter0x123_291                13u
#define CanCclRxHndlCh0_TCU_Status_Checksum0x123_291                    14u
#define CanCclRxHndlCh0_EMS_EngOperationStatus_322                      15u
#define CanCclRxHndlCh0_EMS_TargCruiseSpeed_337                         16u
#define CanCclRxHndlCh0_EMS_CruiseControlStatus_337                     17u
#define CanCclRxHndlCh0_PEPS_Remotestartstatus_421                      18u
#define CanCclRxHndlCh0_ABS_WhlMilgFrntLe_545                           19u
#define CanCclRxHndlCh0_ABS_WhlMilgFrntRi_545                           20u
#define CanCclRxHndlCh0_ABS_VehSpdLgt_545                               21u
#define CanCclRxHndlCh0_ABS_EbdFlgFlt_545                               22u
#define CanCclRxHndlCh0_ABS_AbsFlgFlt_545                               23u
#define CanCclRxHndlCh0_ABS_RollingCounter_0x221_545                    24u
#define CanCclRxHndlCh0_ABS_WhlMilgFrntLeStatus_545                     25u
#define CanCclRxHndlCh0_ABS_WhlMilgFrntRiStatus_545                     26u
#define CanCclRxHndlCh0_ABS_Checksum_0x221_545                          27u
#define CanCclRxHndlCh0_ESP_HHCAvailable_579                            28u
#define CanCclRxHndlCh0_ABS_HAZActive_579                               29u
#define CanCclRxHndlCh0_ESP_EPBStatus_579                               30u
#define CanCclRxHndlCh0_ESP_EPBErrorStatus_579                          31u
#define CanCclRxHndlCh0_ESP_HDCAvailable_579                            32u
#define CanCclRxHndlCh0_ESP_HDCActive_579                               33u
#define CanCclRxHndlCh0_ESP_CdpAvailable_579                            34u
#define CanCclRxHndlCh0_ESP_EPBWarningMessage3_579                      35u
#define CanCclRxHndlCh0_ESP_EPBWarningMessage2_579                      36u
#define CanCclRxHndlCh0_ESP_EPBWarningMessage1_579                      37u
#define CanCclRxHndlCh0_ESP_AVHWarningMessage_579                       38u
#define CanCclRxHndlCh0_ESP_AvhActive_579                               39u
#define CanCclRxHndlCh0_ESP_AvhStandby_579                              40u
#define CanCclRxHndlCh0_ESP_AvhAvabliable_579                           41u
#define CanCclRxHndlCh0_ESP_VdcFlgFlt_579                               42u
#define CanCclRxHndlCh0_ESP_TcsFlgFlt_579                               43u
#define CanCclRxHndlCh0_EBS_TcsFlgFlt_579                               44u
#define CanCclRxHndlCh0_ESP_ESPInfoLamp_579                             45u
#define CanCclRxHndlCh0_ESP_EspEnableSts_579                            46u
#define CanCclRxHndlCh0_ESP_RollingCounter_0x243_579                    47u
#define CanCclRxHndlCh0_ESP_Checksum_0x243_579                          48u
#define CanCclRxHndlCh0_IPM_LaneAssitType_581                           49u
#define CanCclRxHndlCh0_IPM_LaneAssit_WarningVibration_581              50u
#define CanCclRxHndlCh0_IPM_LaneAssit_WarningAudio_581                  51u
#define CanCclRxHndlCh0_IPM_LaneAssit_LeftVisualization_581              52u
#define CanCclRxHndlCh0_IPM_LaneAssit_RightVisualization_581              53u
#define CanCclRxHndlCh0_IPM_SLASpdlimitUnits_581                        54u
#define CanCclRxHndlCh0_IPM_SLAState_581                                55u
#define CanCclRxHndlCh0_IPM_LaneAssit_Status_581                        56u
#define CanCclRxHndlCh0_IPM_SLASpdlimit_581                             57u
#define CanCclRxHndlCh0_IPM_IHC_Status_581                              58u
#define CanCclRxHndlCh0_IPM_DDD_IndexStatus_581                         59u
#define CanCclRxHndlCh0_IPM_TJAICA_Status_581                           60u
#define CanCclRxHndlCh0_IPM_LaneAssit_HandsonReq_581                    61u
#define CanCclRxHndlCh0_ACC_SpdSetValue_582                             62u
#define CanCclRxHndlCh0_ACC_ObjDetected_582                             63u
#define CanCclRxHndlCh0_ACC_TimeGapSet_582                              64u
#define CanCclRxHndlCh0_ACC_TarObjBarDis_582                            65u
#define CanCclRxHndlCh0_ACCHMI_Mode_582                                 66u
#define CanCclRxHndlCh0_ACCFailInfo_582                                 67u
#define CanCclRxHndlCh0_ACC_TakeOverReq_582                             68u
#define CanCclRxHndlCh0_AEB_STATE_582                                   69u
#define CanCclRxHndlCh0_ACC_Startstop_infor_582                         70u
#define CanCclRxHndlCh0_PCW_preWarning_582                              71u
#define CanCclRxHndlCh0_PCW_latentWarning_582                           72u
#define CanCclRxHndlCh0_Obj_Speed_582                                   73u
#define CanCclRxHndlCh0_FCW_STATE_582                                   74u
#define CanCclRxHndlCh0_ACC_Textinfo_582                                75u
#define CanCclRxHndlCh0_Rolling_counter_0x246_582                       76u
#define CanCclRxHndlCh0_Checksum_0x246_582                              77u
#define CanCclRxHndlCh0_EPS_S_WarningLampYellow_608                     78u
#define CanCclRxHndlCh0_EPS_S_SafeLampRed_608                           79u
#define CanCclRxHndlCh0_Rolling_counter_0x260_608                       80u
#define CanCclRxHndlCh0_Checksum_0x260_608                              81u
#define CanCclRxHndlCh0_PAM_objectStsRLM_625                            82u
#define CanCclRxHndlCh0_PAM_objectStsRLC_625                            83u
#define CanCclRxHndlCh0_PAM_objectStsRRC_625                            84u
#define CanCclRxHndlCh0_PAM_objectStsRRM_625                            85u
#define CanCclRxHndlCh0_PAM_ChimeCmdSoundStatus_625                     86u
#define CanCclRxHndlCh0_PAM_RearSysTemWorkSts_625                       87u
#define CanCclRxHndlCh0_PAM_FrontSysTemWorkSts_625                      88u
#define CanCclRxHndlCh0_PAM_ChimeCmdSoundCadence_625                    89u
#define CanCclRxHndlCh0_SOD_LCA_warningReqRight_629                     90u
#define CanCclRxHndlCh0_SOD_DOA_warningReqRightRear_629                 91u
#define CanCclRxHndlCh0_SOD_DOA_warningReqRightFront_629                92u
#define CanCclRxHndlCh0_SOD_CTA_warningReqRight_629                     93u
#define CanCclRxHndlCh0_SOD_BLIS_display_629                            94u
#define CanCclRxHndlCh0_SOD_LCA_warningReqLeft_629                      95u
#define CanCclRxHndlCh0_SOD_DOA_warningReqLeftRear_629                  96u
#define CanCclRxHndlCh0_SOD_DOA_warningReqLeftFront_629                 97u
#define CanCclRxHndlCh0_SOD_CTA_warningReqLeft_629                      98u
#define CanCclRxHndlCh0_DOA_OFFTelltale_629                             99u
#define CanCclRxHndlCh0_CTA_OFFTelltale_629                             100u
#define CanCclRxHndlCh0_SODLCA_OFFTelltale_629                          101u
#define CanCclRxHndlCh0_IPM_LedtLine_dx_start_632                       102u
#define CanCclRxHndlCh0_IPM_LeftLine_dy_632                             103u
#define CanCclRxHndlCh0_IPM_LeftLine_dx_lookhead_632                    104u
#define CanCclRxHndlCh0_IPM_LeftLine_hor_curve_632                      105u
#define CanCclRxHndlCh0_IPM_LeftLine_yawangle_632                       106u
#define CanCclRxHndlCh0_LeftLineHorCurvatureAlteration_632              107u
#define CanCclRxHndlCh0_MRR_F_Object_dx_633                             108u
#define CanCclRxHndlCh0_MRR_F_Object_dy_633                             109u
#define CanCclRxHndlCh0_MRR_F_Obj_0x_class_633                          110u
#define CanCclRxHndlCh0_MRR_FF_Object_dx_633                            111u
#define CanCclRxHndlCh0_MRR_FF_Object_dy_633                            112u
#define CanCclRxHndlCh0_MRR_FF_Obj_0x_class_633                         113u
#define CanCclRxHndlCh0_MRR_FFTargrtDetection_633                       114u
#define CanCclRxHndlCh0_MRR_PedDetection_633                            115u
#define CanCclRxHndlCh0_LaneAssit_LeftLeftVisualization_640              116u
#define CanCclRxHndlCh0_IPM_LeftLine_Type_640                           117u
#define CanCclRxHndlCh0_IPM_LeftLine_Color_640                          118u
#define CanCclRxHndlCh0_IPM_LeftLeftLine_Type_640                       119u
#define CanCclRxHndlCh0_IPM_LeftLeftLine_Color_640                      120u
#define CanCclRxHndlCh0_IPM_LeftLeftLine_dy_640                         121u
#define CanCclRxHndlCh0_IPM_LeftLeftLine_hor_curve_640                  122u
#define CanCclRxHndlCh0_IPM_LeftLeftLine_yawangle_640                   123u
#define CanCclRxHndlCh0_LeftLeftLineCurvatureAlteration_640              124u
#define CanCclRxHndlCh0_BCM_DoorStsRearRi_784                           125u
#define CanCclRxHndlCh0_BCM_DoorStsRearLe_784                           126u
#define CanCclRxHndlCh0_BCM_DoorStsFrntRi_784                           127u
#define CanCclRxHndlCh0_BCM_DoorStsFrntLe_784                           128u
#define CanCclRxHndlCh0_BCM_DoorLockStsRearRi_784                       129u
#define CanCclRxHndlCh0_BCM_DoorLockStsRearLe_784                       130u
#define CanCclRxHndlCh0_BCM_DoorLockStsFrntRi_784                       131u
#define CanCclRxHndlCh0_BCM_DoorLockStsFrntLe_784                       132u
#define CanCclRxHndlCh0_BCM_AntiTheftSts_784                            133u
#define CanCclRxHndlCh0_BCM_LockUnlockFeedback_784                      134u
#define CanCclRxHndlCh0_BCM_DoorLockStsTrunk_784                        135u
#define CanCclRxHndlCh0_BCM_DoorStsTrunk_784                            136u
#define CanCclRxHndlCh0_BCM_TrunkDoorPreUnlockSts_784                   137u
#define CanCclRxHndlCh0_BCM_FrontWiperSts_784                           138u
#define CanCclRxHndlCh0_BCM_EnginehoodSts_784                           139u
#define CanCclRxHndlCh0_BCM_Rolling_counter_0x310_784                   140u
#define CanCclRxHndlCh0_BCM_Reverse_gear_784                            141u
#define CanCclRxHndlCh0_BCM_TurnIndicatorSts_784                        142u
#define CanCclRxHndlCh0_BCM_Checksum_0x310_784                          143u
#define CanCclRxHndlCh0_BCM_OutsideTempDig_787                          144u
#define CanCclRxHndlCh0_BCM_Mechanical_Hand_Brake_787                   145u
#define CanCclRxHndlCh0_BCM_BrakeFluidSts_787                           146u
#define CanCclRxHndlCh0_BCM_OutsideTemp_787                             147u
#define CanCclRxHndlCh0_BCM_Start_Switch_787                            148u
#define CanCclRxHndlCh0_BCM_SS_EnableSts_787                            149u
#define CanCclRxHndlCh0_BCM_PowerModeInvalid_787                        150u
#define CanCclRxHndlCh0_BCM_PowerMode_787                               151u
#define CanCclRxHndlCh0_BCM_Rollingcounter_0x313_787                    152u
#define CanCclRxHndlCh0_BCM_Checksum_0x313_787                          153u
#define CanCclRxHndlCh0_BCM_BGLLumLvlSettingStatus_789                  154u
#define CanCclRxHndlCh0_BCM_FrntFogLmpSts_792                           155u
#define CanCclRxHndlCh0_BCM_PosLmpSts_792                               156u
#define CanCclRxHndlCh0_BCM_LowBeamSts_792                              157u
#define CanCclRxHndlCh0_BCM_HighBeamSts_792                             158u
#define CanCclRxHndlCh0_BCM_reversinglightSts_792                       159u
#define CanCclRxHndlCh0_BCM_DayRunningLampSts_792                       160u
#define CanCclRxHndlCh0_BCM_PosLmpIndicator_792                         161u
#define CanCclRxHndlCh0_BCM_RearFogLmpSts_792                           162u
#define CanCclRxHndlCh0_BCM_laserlightSts_792                           163u
#define CanCclRxHndlCh0_BCM_AmbientLightSts_792                         164u
#define CanCclRxHndlCh0_BCM_Highmountedstoplamp_792                     165u
#define CanCclRxHndlCh0_BCM_BrakelightSts_792                           166u
#define CanCclRxHndlCh0_BCM_WelcomeSts_792                              167u
#define CanCclRxHndlCh0_BCM_BackHomeSts_792                             168u
#define CanCclRxHndlCh0_BCM_AutolampSts_792                             169u
#define CanCclRxHndlCh0_BCM_readinglampSts_792                          170u
#define CanCclRxHndlCh0_BCM_DayRunningLampDig_792                       171u
#define CanCclRxHndlCh0_BCM_BrakelightDig_792                           172u
#define CanCclRxHndlCh0_BCM_reversinglightDig_792                       173u
#define CanCclRxHndlCh0_BCM_TurnIndicatorDig_792                        174u
#define CanCclRxHndlCh0_BCM_RearFogLmpDig_792                           175u
#define CanCclRxHndlCh0_BCM_FrntFogLmpDig_792                           176u
#define CanCclRxHndlCh0_BCM_PosLmpDig_792                               177u
#define CanCclRxHndlCh0_BCM_LowBeamDig_792                              178u
#define CanCclRxHndlCh0_BCM_Rollingcounter_0x318_792                    179u
#define CanCclRxHndlCh0_BCM_Checksum_0x318_792                          180u
#define CanCclRxHndlCh0_SWM_Menu_Right_794                              181u
#define CanCclRxHndlCh0_SWM_Menu_Left_794                               182u
#define CanCclRxHndlCh0_SWM_Menu_Down_794                               183u
#define CanCclRxHndlCh0_SWM_Menu_Up_794                                 184u
#define CanCclRxHndlCh0_Rolling_counter_0x31A_794                       185u
#define CanCclRxHndlCh0_SWM_Menu_Return_794                             186u
#define CanCclRxHndlCh0_SWM_Menu_Confirm_794                            187u
#define CanCclRxHndlCh0_Checksum_0x31A_794                              188u
#define CanCclRxHndlCh0_SWM_ACCtauGapSetPlus_795                        189u
#define CanCclRxHndlCh0_SWM_ACCvSetMinus_795                            190u
#define CanCclRxHndlCh0_SWM_ACCvSetPlus_795                             191u
#define CanCclRxHndlCh0_SWM_ACCResume_795                               192u
#define CanCclRxHndlCh0_SWM_ACCSet_795                                  193u
#define CanCclRxHndlCh0_SWM_ACCEnableSwitch_795                         194u
#define CanCclRxHndlCh0_SWM_LaneAssistSwitch_795                        195u
#define CanCclRxHndlCh0_SWM_ACCtauGapSetMinus_795                       196u
#define CanCclRxHndlCh0_PEPS_PowerModeInvalid_805                       197u
#define CanCclRxHndlCh0_PEPS_PowerMode_805                              198u
#define CanCclRxHndlCh0_PEPS_IMMO_MatchStatus_805                       199u
#define CanCclRxHndlCh0_PEPS_SystemFailStatus_805                       200u
#define CanCclRxHndlCh0_PEPS_ESCL_FailStatus_805                        201u
#define CanCclRxHndlCh0_PEPS_SSB_FailStatus_805                         202u
#define CanCclRxHndlCh0_PEPS_BrakeIndicationWarning_805                 203u
#define CanCclRxHndlCh0_PEPS_NotPNWarning_805                           204u
#define CanCclRxHndlCh0_PEPS_NotNWarning_805                            205u
#define CanCclRxHndlCh0_PEPS_DoorOpenNotOFFWarning_805                  206u
#define CanCclRxHndlCh0_PEPS_DoorOpenWarning_805                        207u
#define CanCclRxHndlCh0_PEPS_KeyBatteryWarning_805                      208u
#define CanCclRxHndlCh0_PEPS_KeyOutWarning1_805                         209u
#define CanCclRxHndlCh0_PEPS_NoKeyFoundWarning_805                      210u
#define CanCclRxHndlCh0_PEPS_KeyReminderWarning_805                     211u
#define CanCclRxHndlCh0_PEPS_RemainingNumSts_805                        212u
#define CanCclRxHndlCh0_TPMS_LF_Pressure_865                            213u
#define CanCclRxHndlCh0_TPMS_RF_Pressure_865                            214u
#define CanCclRxHndlCh0_TPMS_RR_Pressure_865                            215u
#define CanCclRxHndlCh0_TPMS_LR_Pressure_865                            216u
#define CanCclRxHndlCh0_TPMS_Tire_Temperature_865                       217u
#define CanCclRxHndlCh0_TPMS_LF_Pressure_Warning_865                    218u
#define CanCclRxHndlCh0_TPMS_RF_Pressure_Warning_865                    219u
#define CanCclRxHndlCh0_TPMS_System_Status_865                          220u
#define CanCclRxHndlCh0_TPMS_RR_Pressure_Warning_865                    221u
#define CanCclRxHndlCh0_TPMS_LR_Pressure_Warning_865                    222u
#define CanCclRxHndlCh0_TPMS_Temperature_Warning_865                    223u
#define CanCclRxHndlCh0_TPMS_resrved_865                                224u
#define CanCclRxHndlCh0_Tire_Position_865                               225u
#define CanCclRxHndlCh0_TPMS_Lamp_Status_865                            226u
#define CanCclRxHndlCh0_TPMS_AL_State_865                               227u
#define CanCclRxHndlCh0_RRI_Pressure_866                                228u
#define CanCclRxHndlCh0_LRI_Pressure_866                                229u
#define CanCclRxHndlCh0_RRI_Pressure_Warning_866                        230u
#define CanCclRxHndlCh0_LRI_Pressure_Warning_866                        231u
#define CanCclRxHndlCh0_EMS_EngCoolanTemp_868                           232u
#define CanCclRxHndlCh0_EMS_BatterVoltage_868                           233u
#define CanCclRxHndlCh0_EMS_BatteryVoltageError_868                     234u
#define CanCclRxHndlCh0_EMS_Fuelcounter_870                             235u
#define CanCclRxHndlCh0_EMS_FuelconsumptionInst_870                     236u
#define CanCclRxHndlCh0_EMS_RemindShiftGear_MT_870                      237u
#define CanCclRxHndlCh0_EMS_MIL_870                                     238u
#define CanCclRxHndlCh0_EMS_SVS_870                                     239u
#define CanCclRxHndlCh0_EMS_StartStopStatus_870                         240u
#define CanCclRxHndlCh0_EMS_ExhaustbrakeSts_870                         241u
#define CanCclRxHndlCh0_EMS_SpeedLimtHour_872                           242u
#define CanCclRxHndlCh0_EMS_UreaTxt_872                                 243u
#define CanCclRxHndlCh0_EMS_SpeedLimtMin_872                            244u
#define CanCclRxHndlCh0_EMS_UreaLvl_872                                 245u
#define CanCclRxHndlCh0_EMS_ManRgenTxt_D_872                            246u
#define CanCclRxHndlCh0_DCM_GlowPlugLmpReq_872                          247u
#define CanCclRxHndlCh0_DCM_WIFFullLmpReq_872                           248u
#define CanCclRxHndlCh0_EMS_TroqLimtHour_872                            249u
#define CanCclRxHndlCh0_EMS_TroqLimtMin_872                             250u
#define CanCclRxHndlCh0_EMS_UreaQty_872                                 251u
#define CanCclRxHndlCh0_EMS_OBDTxt_872                                  252u
#define CanCclRxHndlCh0_EMS_ManRgenTxt_D_RqDsply_872                    253u
#define CanCclRxHndlCh0_EMS_UreaWarn_872                                254u
#define CanCclRxHndlCh0_EMS_Soot_Pc_Dsply_872                           255u
#define CanCclRxHndlCh0_MP5_AudioStatus_898                             256u
#define CanCclRxHndlCh0_MP5_EnergyFlow_898                              257u
#define CanCclRxHndlCh0_MP5_SetMultiButton_898                          258u
#define CanCclRxHndlCh0_MP5_BSDSoundSwitchSts_898                       259u
#define CanCclRxHndlCh0_MP5_NavStatus_898                               260u
#define CanCclRxHndlCh0_MP5_NavICON_900                                 261u
#define CanCclRxHndlCh0_MP5_ROUTE_REMAIN_DIS_900                        262u
#define CanCclRxHndlCh0_MP5_ALModeSetting_900                           263u
#define CanCclRxHndlCh0_MP5_ALStartAroundSetting_900                    264u
#define CanCclRxHndlCh0_TrnSrvcRqd_B_Rq_917                             265u
#define CanCclRxHndlCh0_TCU_GearPFault_917                              266u
#define CanCclRxHndlCh0_TCU_WarningMessage_917                          267u
#define CanCclRxHndlCh0_TCU_DrvShiftAllwCondRmd_917                     268u
#define CanCclRxHndlCh0_MRR_L_Object_dx_1152                            269u
#define CanCclRxHndlCh0_MRR_L_Object_dy_1152                            270u
#define CanCclRxHndlCh0_MRR_L_Obj_0x_class_1152                         271u
#define CanCclRxHndlCh0_MRR_R_Object_dx_1152                            272u
#define CanCclRxHndlCh0_MRR_R_Object_dy_1152                            273u
#define CanCclRxHndlCh0_MRR_R_Obj_0x_class_1152                         274u
#define CanCclRxHndlCh0_MRR_LeftTargrtDetection_1152                    275u
#define CanCclRxHndlCh0_MRR_RightTargrtDetection_1152                   276u
#define CanCclRxHndlCh0_IPM_RightLine_dx_start_1168                     277u
#define CanCclRxHndlCh0_IPM_RightLine_dy_1168                           278u
#define CanCclRxHndlCh0_IPM_RightLine_dx_lookhead_1168                  279u
#define CanCclRxHndlCh0_IPM_RightLine_hor_curve_1168                    280u
#define CanCclRxHndlCh0_IPM_RightLine_yawangle_1168                     281u
#define CanCclRxHndlCh0_RightLineHorCurvatureAlteration_1168              282u
#define CanCclRxHndlCh0_LaneAssitRightRightVisualization_1169              283u
#define CanCclRxHndlCh0_IPM_RightLine_Type_1169                         284u
#define CanCclRxHndlCh0_IPM_RightLine_Color_1169                        285u
#define CanCclRxHndlCh0_IPM_RightRighLine_Type_1169                     286u
#define CanCclRxHndlCh0_IPM_RighRightLine_Color_1169                    287u
#define CanCclRxHndlCh0_IPM_RightRightLine_dy_1169                      288u
#define CanCclRxHndlCh0_IPM_RightRightLine_hor_curve_1169               289u
#define CanCclRxHndlCh0_IPM_RightRightLine_yawangle_1169                290u
#define CanCclRxHndlCh0_RightLineCurvatureAlteration2_1169              291u
#define CanCclRxHndlCh0_DMS_System_Status_1184                          292u
#define CanCclRxHndlCh0_DMS_DriverPitch_1184                            293u
#define CanCclRxHndlCh0_DMS_DriverYaw_1184                              294u
#define CanCclRxHndlCh0_DMS_DriverWatchRegion_1184                      295u
#define CanCclRxHndlCh0_DMS_DriverAttentionState_1184                   296u
#define CanCclRxHndlCh0_DMS_DriverDrowsinessState_1184                  297u
#define CanCclRxHndlCh0_DMS_IRSensorState_1184                          298u
#define CanCclRxHndlCh0_DMS_DriverActionState_1184                      299u
#define CanCclRxHndlCh0_RollingCounter_0x4A0_1184                       300u
#define CanCclRxHndlCh0_Checksum_0x4A0_1184                             301u
#define CanCclRxHndlCh0_MP5_ICMenuShift_Button_1328                     302u
#define CanCclRxHndlCh0_MP5_ICMenuActive_Button_1328                    303u
#define CanCclRxHndlCh0_MP5_AlarmStatus_1328                            304u
#define CanCclRxHndlCh0_MP5_AlarmOrNot_1328                             305u
#define CanCclRxHndlCh0_MP5_ICMenu_Cmd_1330                             306u
#define CanCclRxHndlCh0_TBOX_Year_1410                                  307u
#define CanCclRxHndlCh0_TBOX_Month_1410                                 308u
#define CanCclRxHndlCh0_TBOX_Date_1410                                  309u
#define CanCclRxHndlCh0_TBOX_Hour_1410                                  310u
#define CanCclRxHndlCh0_TBOX_Minute_1410                                311u
#define CanCclRxHndlCh0_TBOX_Second_1410                                312u
#define CanCclRxHndlCh0_TBOX_ReTime_1410                                313u
#define CanCclRxHndlCh0_BCM_LoadManageLevel_1412                        314u
#define CanCclRxHndlCh0_BCM_CarModeIndicator_1412                       315u
#define CanCclRxHndlCh0_BCM_CarMode_1412                                316u
#define CanCclRxHndlCh0_BCM_RollingCounter_0x584_1412                   317u
#define CanCclRxHndlCh0_BCM_Checksum_0x584_1412                         318u
#define CanCclRxHndlCh0_EMS_BackupOdometer_1590                         319u
#define CanCclRxHndlCh0_EMS_LockManagFeedback_1593                      320u
#define CanCclRxHndlCh0_EMS_TBOXOlineFeedback_1593                      321u
#define CanCclRxHndlCh0_EMS_PowerFeedback_1593                          322u
#define CanCclRxHndlCh0_EMS_SpdLmtFeedback_1593                         323u
#define CanCclRxHndlCh0_EMS_TBOXAuthentResult_1593                      324u
#define CanCclRxHndlCh0_EMS_RollingCode_1593                            325u




/* Handle IDs of handle space CclTxSig [Tx Signals] */
  /*      Symbolic Name                                                                      Value   Active in predefined variant(s) */
#define CanCclTxHndlCh0_IC_BSDSoundSts_902                              0u
#define CanCclTxHndlCh0_IC_Fuel_level_903                               1u
#define CanCclTxHndlCh0_IC_DriveTimehour_903                            2u
#define CanCclTxHndlCh0_IC_DriveTimeMinute_903                          3u
#define CanCclTxHndlCh0_IC_AverageSpeed_903                             4u
#define CanCclTxHndlCh0_IC_ChangOilDistance_903                         5u
#define CanCclTxHndlCh0_BackUpODO_903                                   6u
#define CanCclTxHndlCh0_IC_OdometerMasterValue_1296                     7u
#define CanCclTxHndlCh0_IC_tirelearning_1296                            8u
#define CanCclTxHndlCh0_IC_SBR_Driver_1296                              9u
#define CanCclTxHndlCh0_IC_DISFail_1296                                 10u
#define CanCclTxHndlCh0_IC_QDashACCFail_1296                            11u
#define CanCclTxHndlCh0_IC_VehSpd_HMI_1296                              12u
#define CanCclTxHndlCh0_IC_BrakeAirPressure_1296                        13u
#define CanCclTxHndlCh0_IC_Rolling_counter_0x510_1296                   14u
#define CanCclTxHndlCh0_IC_CabLockSts_1296                              15u
#define CanCclTxHndlCh0_IC_Checksum_0x510_1296                          16u
#define CanCclTxHndlCh0_IC_AFC_1317                                     17u
#define CanCclTxHndlCh0_IC_DTE_1317                                     18u
#define CanCclTxHndlCh0_IC_AlarmStatus_1317                             19u
#define CanCclTxHndlCh0_IC_AlarmOrNot_1317                              20u
#define CanCclTxHndlCh0_IC_Fuel_Level_percent_1317                      21u
#define CanCclTxHndlCh0_IC_Fuel_Level_Volumn_1317                       22u
#define CanCclTxHndlCh0_IC_Fuel_Level_VolumnQF_1317                     23u
#define CanCclTxHndlCh0_IC_Rolling_counter_0x525_1317                   24u
#define CanCclTxHndlCh0_IC_ManRgen_D_Rq_1317                            25u
#define CanCclTxHndlCh0_IC_AFC_Type_1317                                26u
#define CanCclTxHndlCh0_IC_Checksum_0x525_1317                          27u
#define CanCclTxHndlCh0_IC_Year_1409                                    28u
#define CanCclTxHndlCh0_IC_Month_1409                                   29u
#define CanCclTxHndlCh0_IC_Date_1409                                    30u
#define CanCclTxHndlCh0_IC_Hour_1409                                    31u
#define CanCclTxHndlCh0_IC_Minute_1409                                  32u
#define CanCclTxHndlCh0_IC_Second_1409                                  33u
#define CanCclTxHndlCh0_IC_OdometerMaster_1591                          34u
#define CanCclTxHndlCh0_IC_AFC_GB_1591                                  35u



typedef CAN_UINT8 Ccl_IpduGroupVector[CCL_MAX_IPDUGROUPVECTOR_BYTES];


  # include "CanCcl_Com.h"


/* ===========================================================================
** G L O B A L   C O N S T A N T   D E C L A R A T I O N S
** =========================================================================*/

extern CONST(Ccl_TxSigInfoType, CCL_CONST) Can_Ccl_TxSigInfo[Can_Ccl_Tx_Signal_Num_Signals];

extern CONST(Ccl_RxAccessInfoType, CCL_CONST) Can_Ccl_RxAccessInfo[Can_Ccl_Rx_Num_Signals];


/**********************************************************************************************************************
  Ccl_CbkRxAckFuncPtr
**********************************************************************************************************************/
/**
  \var    Ccl_CbkRxAckFuncPtr
  \brief  Function pointer table containing configured Rx indication notifications for signals and signal groups.
*/

extern CONST(CclCbkRxAckType, CCL_CONST) Can_Ccl_CbkRxAckFuncPtr[Can_Ccl_Rx_Num_RxAck_Ind];

/**********************************************************************************************************************
  Ccl_CbkRxTOutFuncPtr
**********************************************************************************************************************/
/**
  \var    Ccl_CbkRxTOutFuncPtr
  \brief  Function pointer table containing configured Rx timeout notifications for signals and signal groups.}
*/

extern CONST(CclCbkRxTOutType, CCL_CONST) Can_Ccl_CbkRxTOutFuncPtr[Can_Ccl_Rx_Num_RxTOut_Ind];


/**********************************************************************************************************************
  Ccl_CbkRxInvFuncPtr
**********************************************************************************************************************/
/**
  \var    Ccl_CbkRxInvFuncPtr
  \brief  Function pointer table containing configured Rx invalid notifications for signals and signal groups.
*/

#if (CCL_RX_INVINDICATION_API == STD_ON)
extern CONST(CclCbkInvType, CCL_CONST) Can_Ccl_CbkRxInvFuncPtr[Can_Ccl_Rx_Num_RxInv_Ind];
#endif

/**********************************************************************************************************************
  Ccl_NumOfContainedRxSignals
**********************************************************************************************************************/
/**
  \var    Ccl_NumOfContainedRxSignals
  \brief  Structure describing the starting signal handle and the number of signals contaiend in Rx messages
*/

extern CONST(Ccl_MessageContentInfo, CCL_CONST) Can_Ccl_NumOfContainedRxSignals[Can_Ccl_Rx_Num_Messages];


/**********************************************************************************************************************
  Ccl_NumOfContainedTxSignals
**********************************************************************************************************************/
/**
  \var    Ccl_NumOfContainedTxSignals
  \brief  Structure describing the starting signal handle and the number of signals contaiend in Tx messages
*/

extern CONST(Ccl_MessageContentInfo, CCL_CONST) Can_Ccl_NumOfContainedTxSignals[Can_Ccl_Tx_Num_Messages];


/**********************************************************************************************************************
  Ccl_NumOfContainedTxSignals
**********************************************************************************************************************/
extern CONST(Ccl_RxNotifFuncInfo, CCL_CONST) Can_Ccl_RxNotifFuncPtr[Can_Ccl_Rx_Num_Signals];


/**********************************************************************************************************************
  Ccl_PduGrpVector
**********************************************************************************************************************/
/**
  \var    Ccl_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU  mapping the I-PDU to the corresponding I-PDU-Groups.
  */
extern CONST(Ccl_PduGrpVectorType, CCL_CONST) Can_Ccl_PduGrpVector[Can_Ccl_Num_Of_PduGroups];


/**********************************************************************************************************************
  Ccl_TxPduGrpInfo
**********************************************************************************************************************/
/**
  \var    Ccl_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Ccl_PduGrpVector
*/
extern CONST(Ccl_TxPduGrpInfoType, CCL_CONST) Can_Ccl_TxPduGrpInfo[Can_Ccl_Tx_Num_Messages];


/**********************************************************************************************************************
  Ccl_RxPduGrpInfo
**********************************************************************************************************************/
/**
  \var    Ccl_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Ccl_PduGrpVector
*/
extern CONST(Ccl_RxPduGrpInfoType, CCL_CONST) Can_Ccl_RxPduGrpInfo[Can_Ccl_Rx_Num_Messages];


/**********************************************************************************************************************
  Ccl_DefRxPduInfo
**********************************************************************************************************************/
/**
  \var    Ccl_DefRxPduInfo
  \brief  Contains all relevant information for deferred Rx I-PDUs.
  \details
  Element                   Description
  RxDefPduBufferUsed        TRUE  if the 0:n relation has 1 relation pointing to ilRxBuffer
*/
extern CONST(Ccl_DefRxPduInfoType, CCL_CONST) Can_Ccl_DefRxPduInfo[Can_Ccl_Rx_Num_Messages];


#endif /* CCL_APP_CFG_H */


/*****************************************************************************
    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  -
For each change to this file  be sure to record:
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
