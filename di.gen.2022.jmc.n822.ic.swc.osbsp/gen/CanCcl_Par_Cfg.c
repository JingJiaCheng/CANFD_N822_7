/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2007.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/

/* ===========================================================================
**
**  Name:           CanCcl_Par_Cfg.c
**
**  Description:    CAN CCL configuration parameter Configuration file for
**                  configured database file
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
** =========================================================================*/

/* ===========================================================================
**  I N C L U D E   F I L E S
** =========================================================================*/

# include "Rte_Cbk.h"
# include "CanCcl_Par_Cfg.h"

/* ===========================================================================
** G L O B A L   C O N S T A N T   D E F I N I T I O N S
** =========================================================================*/

/*******************************************************/
/* DBC Tx & Rx CFG */
/*******************************************************/

/**********************************************************************************************************************
        Can_Ccl_TxSigInfo 
	      **********************************************************************************************************************/
CONST(Ccl_TxSigInfoType, CCL_CONST) Can_Ccl_TxSigInfo[Can_Ccl_Tx_Signal_Num_Signals] = {
	/* Index		CntrId	  InitValue 	SendType   */
	 { /*	  0 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_BSDSoundSts		*/
	 { /*	  1 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Fuel_level		*/
	 { /*	  2 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_DriveTimehour		*/
	 { /*	  3 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_DriveTimeMinute		*/
	 { /*	  4 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_AverageSpeed		*/
	 { /*	  5 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_ChangOilDistance		*/
	 { /*	  6 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* BackUpODO		*/
	 { /*	  7 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_OdometerMasterValue		*/
	 { /*	  8 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_tirelearning		*/
	 { /*	  9 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_SBR_Driver		*/
	 { /*	  10 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_DISFail		*/
	 { /*	  11 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_QDashACCFail		*/
	 { /*	  12 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_VehSpd_HMI		*/
	 { /*	  13 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_BrakeAirPressure		*/
	 { /*	  14 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Rolling_counter_0x510		*/
	 { /*	  15 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_CabLockSts		*/
	 { /*	  16 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Checksum_0x510		*/
	 { /*	  17 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_AFC		*/
	 { /*	  18 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_DTE		*/
	 { /*	  19 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_AlarmStatus		*/
	 { /*	  20 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_AlarmOrNot		*/
	 { /*	  21 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Fuel_Level_percent		*/
	 { /*	  22 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Fuel_Level_Volumn		*/
	 { /*	  23 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Fuel_Level_VolumnQF		*/
	 { /*	  24 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Rolling_counter_0x525		*/
	 { /*	  25 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_ManRgen_D_Rq		*/
	 { /*	  26 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_AFC_Type		*/
	 { /*	  27 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Checksum_0x525		*/
	 { /*	  28 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Year		*/
	 { /*	  29 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Month		*/
	 { /*	  30 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Date		*/
	 { /*	  31 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Hour		*/
	 { /*	  32 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Minute		*/
	 { /*	  33 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_Second		*/
	 { /*	  34 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_OdometerMaster		*/
	 { /*	  35 */		0 , 	 0x0,	  SIG_NOSENDTYPE	  },		  /* IC_AFC_GB		*/
};



/**********************************************************************************************************************
        Can_Ccl_NumOfContainedTxSignals
        **********************************************************************************************************************/
CONST(Ccl_MessageContentInfo, CCL_CONST) Can_Ccl_NumOfContainedTxSignals[Can_Ccl_Tx_Num_Messages] =
{
/* Index      SigStartIndex   SigCount   */
{ /*  0  */          0 ,          1   },/*IC_0x386*/
{ /*  1  */          0 ,          6   },/*IC_0x387*/
{ /*  2  */          0 ,          10   },/*IC_0x510*/
{ /*  3  */          0 ,          11   },/*IC_0x525*/
{ /*  4  */          0 ,          6   },/*IC_time_0x581*/
{ /*  5  */          0 ,          2   },/*IC_0x637*/
};

/**********************************************************************************************************************
    Can_Ccl_RxAccessInfo
  **********************************************************************************************************************/
CONST(Ccl_RxAccessInfoType, CCL_CONST) Can_Ccl_RxAccessInfo[Can_Ccl_Rx_Num_Signals] = {
	   /* Index 	 ControllerId */
{ /* 	0  */		   0	   },		/*EMS_EngSpeed                            	*/
{ /* 	1  */		   0	   },		/*EMS_AirCompressorStatus                 	*/
{ /* 	2  */		   0	   },		/*EMS_BrkPedalStasus                      	*/
{ /* 	3  */		   0	   },		/*EMS_MTIndicateGearForN                  	*/
{ /* 	4  */		   0	   },		/*DCM_EMS_RollingCounter_0x108            	*/
{ /* 	5  */		   0	   },		/*DCM_EMS_Checksum_0x108                  	*/
{ /* 	6  */		   0	   },		/*Power_EMS_EngCoolanTemp                 	*/
{ /* 	7  */		   0	   },		/*Power_EMS_EngOperationStatus            	*/
{ /* 	8  */		   0	   },		/*Power_EMS_BatteryVoltageError           	*/
{ /* 	9  */		   0	   },		/*Power_EMS_EngSpeed                      	*/
{ /* 	10  */		   0	   },		/*TCU_DisplayGear                         	*/
{ /* 	11  */		   0	   },		/*TCU_GearSelectorReq                     	*/
{ /* 	12  */		   0	   },		/*TCU_StGearMode                          	*/
{ /* 	13  */		   0	   },		/*TCU_Status_AliveCounter0x123            	*/
{ /* 	14  */		   0	   },		/*TCU_Status_Checksum0x123                	*/
{ /* 	15  */		   0	   },		/*EMS_EngOperationStatus                  	*/
{ /* 	16  */		   0	   },		/*EMS_TargCruiseSpeed                     	*/
{ /* 	17  */		   0	   },		/*EMS_CruiseControlStatus                 	*/
{ /* 	18  */		   0	   },		/*PEPS_Remotestartstatus                  	*/
{ /* 	19  */		   0	   },		/*ABS_WhlMilgFrntLe                       	*/
{ /* 	20  */		   0	   },		/*ABS_WhlMilgFrntRi                       	*/
{ /* 	21  */		   0	   },		/*ABS_VehSpdLgt                           	*/
{ /* 	22  */		   0	   },		/*ABS_EbdFlgFlt                           	*/
{ /* 	23  */		   0	   },		/*ABS_AbsFlgFlt                           	*/
{ /* 	24  */		   0	   },		/*ABS_RollingCounter_0x221                	*/
{ /* 	25  */		   0	   },		/*ABS_WhlMilgFrntLeStatus                 	*/
{ /* 	26  */		   0	   },		/*ABS_WhlMilgFrntRiStatus                 	*/
{ /* 	27  */		   0	   },		/*ABS_Checksum_0x221                      	*/
{ /* 	28  */		   0	   },		/*ESP_HHCAvailable                        	*/
{ /* 	29  */		   0	   },		/*ABS_HAZActive                           	*/
{ /* 	30  */		   0	   },		/*ESP_EPBStatus                           	*/
{ /* 	31  */		   0	   },		/*ESP_EPBErrorStatus                      	*/
{ /* 	32  */		   0	   },		/*ESP_HDCAvailable                        	*/
{ /* 	33  */		   0	   },		/*ESP_HDCActive                           	*/
{ /* 	34  */		   0	   },		/*ESP_CdpAvailable                        	*/
{ /* 	35  */		   0	   },		/*ESP_EPBWarningMessage3                  	*/
{ /* 	36  */		   0	   },		/*ESP_EPBWarningMessage2                  	*/
{ /* 	37  */		   0	   },		/*ESP_EPBWarningMessage1                  	*/
{ /* 	38  */		   0	   },		/*ESP_AVHWarningMessage                   	*/
{ /* 	39  */		   0	   },		/*ESP_AvhActive                           	*/
{ /* 	40  */		   0	   },		/*ESP_AvhStandby                          	*/
{ /* 	41  */		   0	   },		/*ESP_AvhAvabliable                       	*/
{ /* 	42  */		   0	   },		/*ESP_VdcFlgFlt                           	*/
{ /* 	43  */		   0	   },		/*ESP_TcsFlgFlt                           	*/
{ /* 	44  */		   0	   },		/*EBS_TcsFlgFlt                           	*/
{ /* 	45  */		   0	   },		/*ESP_ESPInfoLamp                         	*/
{ /* 	46  */		   0	   },		/*ESP_EspEnableSts                        	*/
{ /* 	47  */		   0	   },		/*ESP_RollingCounter_0x243                	*/
{ /* 	48  */		   0	   },		/*ESP_Checksum_0x243                      	*/
{ /* 	49  */		   0	   },		/*IPM_LaneAssitType                       	*/
{ /* 	50  */		   0	   },		/*IPM_LaneAssit_WarningVibration          	*/
{ /* 	51  */		   0	   },		/*IPM_LaneAssit_WarningAudio              	*/
{ /* 	52  */		   0	   },		/*IPM_LaneAssit_LeftVisualization         	*/
{ /* 	53  */		   0	   },		/*IPM_LaneAssit_RightVisualization        	*/
{ /* 	54  */		   0	   },		/*IPM_SLASpdlimitUnits                    	*/
{ /* 	55  */		   0	   },		/*IPM_SLAState                            	*/
{ /* 	56  */		   0	   },		/*IPM_LaneAssit_Status                    	*/
{ /* 	57  */		   0	   },		/*IPM_SLASpdlimit                         	*/
{ /* 	58  */		   0	   },		/*IPM_IHC_Status                          	*/
{ /* 	59  */		   0	   },		/*IPM_DDD_IndexStatus                     	*/
{ /* 	60  */		   0	   },		/*IPM_TJAICA_Status                       	*/
{ /* 	61  */		   0	   },		/*IPM_LaneAssit_HandsonReq                	*/
{ /* 	62  */		   0	   },		/*ACC_SpdSetValue                         	*/
{ /* 	63  */		   0	   },		/*ACC_ObjDetected                         	*/
{ /* 	64  */		   0	   },		/*ACC_TimeGapSet                          	*/
{ /* 	65  */		   0	   },		/*ACC_TarObjBarDis                        	*/
{ /* 	66  */		   0	   },		/*ACCHMI_Mode                             	*/
{ /* 	67  */		   0	   },		/*ACCFailInfo                             	*/
{ /* 	68  */		   0	   },		/*ACC_TakeOverReq                         	*/
{ /* 	69  */		   0	   },		/*AEB_STATE                               	*/
{ /* 	70  */		   0	   },		/*ACC_Startstop_infor                     	*/
{ /* 	71  */		   0	   },		/*PCW_preWarning                          	*/
{ /* 	72  */		   0	   },		/*PCW_latentWarning                       	*/
{ /* 	73  */		   0	   },		/*Obj_Speed                               	*/
{ /* 	74  */		   0	   },		/*FCW_STATE                               	*/
{ /* 	75  */		   0	   },		/*ACC_Textinfo                            	*/
{ /* 	76  */		   0	   },		/*Rolling_counter_0x246                   	*/
{ /* 	77  */		   0	   },		/*Checksum_0x246                          	*/
{ /* 	78  */		   0	   },		/*EPS_S_WarningLampYellow                 	*/
{ /* 	79  */		   0	   },		/*EPS_S_SafeLampRed                       	*/
{ /* 	80  */		   0	   },		/*Rolling_counter_0x260                   	*/
{ /* 	81  */		   0	   },		/*Checksum_0x260                          	*/
{ /* 	82  */		   0	   },		/*PAM_objectStsRLM                        	*/
{ /* 	83  */		   0	   },		/*PAM_objectStsRLC                        	*/
{ /* 	84  */		   0	   },		/*PAM_objectStsRRC                        	*/
{ /* 	85  */		   0	   },		/*PAM_objectStsRRM                        	*/
{ /* 	86  */		   0	   },		/*PAM_ChimeCmdSoundStatus                 	*/
{ /* 	87  */		   0	   },		/*PAM_RearSysTemWorkSts                   	*/
{ /* 	88  */		   0	   },		/*PAM_FrontSysTemWorkSts                  	*/
{ /* 	89  */		   0	   },		/*PAM_ChimeCmdSoundCadence                	*/
{ /* 	90  */		   0	   },		/*SOD_LCA_warningReqRight                 	*/
{ /* 	91  */		   0	   },		/*SOD_DOA_warningReqRightRear             	*/
{ /* 	92  */		   0	   },		/*SOD_DOA_warningReqRightFront            	*/
{ /* 	93  */		   0	   },		/*SOD_CTA_warningReqRight                 	*/
{ /* 	94  */		   0	   },		/*SOD_BLIS_display                        	*/
{ /* 	95  */		   0	   },		/*SOD_LCA_warningReqLeft                  	*/
{ /* 	96  */		   0	   },		/*SOD_DOA_warningReqLeftRear              	*/
{ /* 	97  */		   0	   },		/*SOD_DOA_warningReqLeftFront             	*/
{ /* 	98  */		   0	   },		/*SOD_CTA_warningReqLeft                  	*/
{ /* 	99  */		   0	   },		/*DOA_OFFTelltale                         	*/
{ /* 	100  */		   0	   },		/*CTA_OFFTelltale                         	*/
{ /* 	101  */		   0	   },		/*SODLCA_OFFTelltale                      	*/
{ /* 	102  */		   0	   },		/*IPM_LedtLine_dx_start                   	*/
{ /* 	103  */		   0	   },		/*IPM_LeftLine_dy                         	*/
{ /* 	104  */		   0	   },		/*IPM_LeftLine_dx_lookhead                	*/
{ /* 	105  */		   0	   },		/*IPM_LeftLine_hor_curve                  	*/
{ /* 	106  */		   0	   },		/*IPM_LeftLine_yawangle                   	*/
{ /* 	107  */		   0	   },		/*LeftLineHorCurvatureAlteration          	*/
{ /* 	108  */		   0	   },		/*MRR_F_Object_dx                         	*/
{ /* 	109  */		   0	   },		/*MRR_F_Object_dy                         	*/
{ /* 	110  */		   0	   },		/*MRR_F_Obj_0x_class                      	*/
{ /* 	111  */		   0	   },		/*MRR_FF_Object_dx                        	*/
{ /* 	112  */		   0	   },		/*MRR_FF_Object_dy                        	*/
{ /* 	113  */		   0	   },		/*MRR_FF_Obj_0x_class                     	*/
{ /* 	114  */		   0	   },		/*MRR_FFTargrtDetection                   	*/
{ /* 	115  */		   0	   },		/*MRR_PedDetection                        	*/
{ /* 	116  */		   0	   },		/*LaneAssit_LeftLeftVisualization         	*/
{ /* 	117  */		   0	   },		/*IPM_LeftLine_Type                       	*/
{ /* 	118  */		   0	   },		/*IPM_LeftLine_Color                      	*/
{ /* 	119  */		   0	   },		/*IPM_LeftLeftLine_Type                   	*/
{ /* 	120  */		   0	   },		/*IPM_LeftLeftLine_Color                  	*/
{ /* 	121  */		   0	   },		/*IPM_LeftLeftLine_dy                     	*/
{ /* 	122  */		   0	   },		/*IPM_LeftLeftLine_hor_curve              	*/
{ /* 	123  */		   0	   },		/*IPM_LeftLeftLine_yawangle               	*/
{ /* 	124  */		   0	   },		/*LeftLeftLineCurvatureAlteration         	*/
{ /* 	125  */		   0	   },		/*BCM_DoorStsRearRi                       	*/
{ /* 	126  */		   0	   },		/*BCM_DoorStsRearLe                       	*/
{ /* 	127  */		   0	   },		/*BCM_DoorStsFrntRi                       	*/
{ /* 	128  */		   0	   },		/*BCM_DoorStsFrntLe                       	*/
{ /* 	129  */		   0	   },		/*BCM_DoorLockStsRearRi                   	*/
{ /* 	130  */		   0	   },		/*BCM_DoorLockStsRearLe                   	*/
{ /* 	131  */		   0	   },		/*BCM_DoorLockStsFrntRi                   	*/
{ /* 	132  */		   0	   },		/*BCM_DoorLockStsFrntLe                   	*/
{ /* 	133  */		   0	   },		/*BCM_AntiTheftSts                        	*/
{ /* 	134  */		   0	   },		/*BCM_LockUnlockFeedback                  	*/
{ /* 	135  */		   0	   },		/*BCM_DoorLockStsTrunk                    	*/
{ /* 	136  */		   0	   },		/*BCM_DoorStsTrunk                        	*/
{ /* 	137  */		   0	   },		/*BCM_TrunkDoorPreUnlockSts               	*/
{ /* 	138  */		   0	   },		/*BCM_FrontWiperSts                       	*/
{ /* 	139  */		   0	   },		/*BCM_EnginehoodSts                       	*/
{ /* 	140  */		   0	   },		/*BCM_Rolling_counter_0x310               	*/
{ /* 	141  */		   0	   },		/*BCM_Reverse_gear                        	*/
{ /* 	142  */		   0	   },		/*BCM_TurnIndicatorSts                    	*/
{ /* 	143  */		   0	   },		/*BCM_Checksum_0x310                      	*/
{ /* 	144  */		   0	   },		/*BCM_OutsideTempDig                      	*/
{ /* 	145  */		   0	   },		/*BCM_Mechanical_Hand_Brake               	*/
{ /* 	146  */		   0	   },		/*BCM_BrakeFluidSts                       	*/
{ /* 	147  */		   0	   },		/*BCM_OutsideTemp                         	*/
{ /* 	148  */		   0	   },		/*BCM_Start_Switch                        	*/
{ /* 	149  */		   0	   },		/*BCM_SS_EnableSts                        	*/
{ /* 	150  */		   0	   },		/*BCM_PowerModeInvalid                    	*/
{ /* 	151  */		   0	   },		/*BCM_PowerMode                           	*/
{ /* 	152  */		   0	   },		/*BCM_Rollingcounter_0x313                	*/
{ /* 	153  */		   0	   },		/*BCM_Checksum_0x313                      	*/
{ /* 	154  */		   0	   },		/*BCM_BGLLumLvlSettingStatus              	*/
{ /* 	155  */		   0	   },		/*BCM_FrntFogLmpSts                       	*/
{ /* 	156  */		   0	   },		/*BCM_PosLmpSts                           	*/
{ /* 	157  */		   0	   },		/*BCM_LowBeamSts                          	*/
{ /* 	158  */		   0	   },		/*BCM_HighBeamSts                         	*/
{ /* 	159  */		   0	   },		/*BCM_reversinglightSts                   	*/
{ /* 	160  */		   0	   },		/*BCM_DayRunningLampSts                   	*/
{ /* 	161  */		   0	   },		/*BCM_PosLmpIndicator                     	*/
{ /* 	162  */		   0	   },		/*BCM_RearFogLmpSts                       	*/
{ /* 	163  */		   0	   },		/*BCM_laserlightSts                       	*/
{ /* 	164  */		   0	   },		/*BCM_AmbientLightSts                     	*/
{ /* 	165  */		   0	   },		/*BCM_Highmountedstoplamp                 	*/
{ /* 	166  */		   0	   },		/*BCM_BrakelightSts                       	*/
{ /* 	167  */		   0	   },		/*BCM_WelcomeSts                          	*/
{ /* 	168  */		   0	   },		/*BCM_BackHomeSts                         	*/
{ /* 	169  */		   0	   },		/*BCM_AutolampSts                         	*/
{ /* 	170  */		   0	   },		/*BCM_readinglampSts                      	*/
{ /* 	171  */		   0	   },		/*BCM_DayRunningLampDig                   	*/
{ /* 	172  */		   0	   },		/*BCM_BrakelightDig                       	*/
{ /* 	173  */		   0	   },		/*BCM_reversinglightDig                   	*/
{ /* 	174  */		   0	   },		/*BCM_TurnIndicatorDig                    	*/
{ /* 	175  */		   0	   },		/*BCM_RearFogLmpDig                       	*/
{ /* 	176  */		   0	   },		/*BCM_FrntFogLmpDig                       	*/
{ /* 	177  */		   0	   },		/*BCM_PosLmpDig                           	*/
{ /* 	178  */		   0	   },		/*BCM_LowBeamDig                          	*/
{ /* 	179  */		   0	   },		/*BCM_Rollingcounter_0x318                	*/
{ /* 	180  */		   0	   },		/*BCM_Checksum_0x318                      	*/
{ /* 	181  */		   0	   },		/*SWM_Menu_Right                          	*/
{ /* 	182  */		   0	   },		/*SWM_Menu_Left                           	*/
{ /* 	183  */		   0	   },		/*SWM_Menu_Down                           	*/
{ /* 	184  */		   0	   },		/*SWM_Menu_Up                             	*/
{ /* 	185  */		   0	   },		/*Rolling_counter_0x31A                   	*/
{ /* 	186  */		   0	   },		/*SWM_Menu_Return                         	*/
{ /* 	187  */		   0	   },		/*SWM_Menu_Confirm                        	*/
{ /* 	188  */		   0	   },		/*Checksum_0x31A                          	*/
{ /* 	189  */		   0	   },		/*SWM_ACCtauGapSetPlus                    	*/
{ /* 	190  */		   0	   },		/*SWM_ACCvSetMinus                        	*/
{ /* 	191  */		   0	   },		/*SWM_ACCvSetPlus                         	*/
{ /* 	192  */		   0	   },		/*SWM_ACCResume                           	*/
{ /* 	193  */		   0	   },		/*SWM_ACCSet                              	*/
{ /* 	194  */		   0	   },		/*SWM_ACCEnableSwitch                     	*/
{ /* 	195  */		   0	   },		/*SWM_LaneAssistSwitch                    	*/
{ /* 	196  */		   0	   },		/*SWM_ACCtauGapSetMinus                   	*/
{ /* 	197  */		   0	   },		/*PEPS_PowerModeInvalid                   	*/
{ /* 	198  */		   0	   },		/*PEPS_PowerMode                          	*/
{ /* 	199  */		   0	   },		/*PEPS_IMMO_MatchStatus                   	*/
{ /* 	200  */		   0	   },		/*PEPS_SystemFailStatus                   	*/
{ /* 	201  */		   0	   },		/*PEPS_ESCL_FailStatus                    	*/
{ /* 	202  */		   0	   },		/*PEPS_SSB_FailStatus                     	*/
{ /* 	203  */		   0	   },		/*PEPS_BrakeIndicationWarning             	*/
{ /* 	204  */		   0	   },		/*PEPS_NotPNWarning                       	*/
{ /* 	205  */		   0	   },		/*PEPS_NotNWarning                        	*/
{ /* 	206  */		   0	   },		/*PEPS_DoorOpenNotOFFWarning              	*/
{ /* 	207  */		   0	   },		/*PEPS_DoorOpenWarning                    	*/
{ /* 	208  */		   0	   },		/*PEPS_KeyBatteryWarning                  	*/
{ /* 	209  */		   0	   },		/*PEPS_KeyOutWarning1                     	*/
{ /* 	210  */		   0	   },		/*PEPS_NoKeyFoundWarning                  	*/
{ /* 	211  */		   0	   },		/*PEPS_KeyReminderWarning                 	*/
{ /* 	212  */		   0	   },		/*PEPS_RemainingNumSts                    	*/
{ /* 	213  */		   0	   },		/*TPMS_LF_Pressure                        	*/
{ /* 	214  */		   0	   },		/*TPMS_RF_Pressure                        	*/
{ /* 	215  */		   0	   },		/*TPMS_RR_Pressure                        	*/
{ /* 	216  */		   0	   },		/*TPMS_LR_Pressure                        	*/
{ /* 	217  */		   0	   },		/*TPMS_Tire_Temperature                   	*/
{ /* 	218  */		   0	   },		/*TPMS_LF_Pressure_Warning                	*/
{ /* 	219  */		   0	   },		/*TPMS_RF_Pressure_Warning                	*/
{ /* 	220  */		   0	   },		/*TPMS_System_Status                      	*/
{ /* 	221  */		   0	   },		/*TPMS_RR_Pressure_Warning                	*/
{ /* 	222  */		   0	   },		/*TPMS_LR_Pressure_Warning                	*/
{ /* 	223  */		   0	   },		/*TPMS_Temperature_Warning                	*/
{ /* 	224  */		   0	   },		/*TPMS_resrved                            	*/
{ /* 	225  */		   0	   },		/*Tire_Position                           	*/
{ /* 	226  */		   0	   },		/*TPMS_Lamp_Status                        	*/
{ /* 	227  */		   0	   },		/*TPMS_AL_State                           	*/
{ /* 	228  */		   0	   },		/*RRI_Pressure                            	*/
{ /* 	229  */		   0	   },		/*LRI_Pressure                            	*/
{ /* 	230  */		   0	   },		/*RRI_Pressure_Warning                    	*/
{ /* 	231  */		   0	   },		/*LRI_Pressure_Warning                    	*/
{ /* 	232  */		   0	   },		/*EMS_EngCoolanTemp                       	*/
{ /* 	233  */		   0	   },		/*EMS_BatterVoltage                       	*/
{ /* 	234  */		   0	   },		/*EMS_BatteryVoltageError                 	*/
{ /* 	235  */		   0	   },		/*EMS_Fuelcounter                         	*/
{ /* 	236  */		   0	   },		/*EMS_FuelconsumptionInst                 	*/
{ /* 	237  */		   0	   },		/*EMS_RemindShiftGear_MT                  	*/
{ /* 	238  */		   0	   },		/*EMS_MIL                                 	*/
{ /* 	239  */		   0	   },		/*EMS_SVS                                 	*/
{ /* 	240  */		   0	   },		/*EMS_StartStopStatus                     	*/
{ /* 	241  */		   0	   },		/*EMS_ExhaustbrakeSts                     	*/
{ /* 	242  */		   0	   },		/*EMS_SpeedLimtHour                       	*/
{ /* 	243  */		   0	   },		/*EMS_UreaTxt                             	*/
{ /* 	244  */		   0	   },		/*EMS_SpeedLimtMin                        	*/
{ /* 	245  */		   0	   },		/*EMS_UreaLvl                             	*/
{ /* 	246  */		   0	   },		/*EMS_ManRgenTxt_D                        	*/
{ /* 	247  */		   0	   },		/*DCM_GlowPlugLmpReq                      	*/
{ /* 	248  */		   0	   },		/*DCM_WIFFullLmpReq                       	*/
{ /* 	249  */		   0	   },		/*EMS_TroqLimtHour                        	*/
{ /* 	250  */		   0	   },		/*EMS_TroqLimtMin                         	*/
{ /* 	251  */		   0	   },		/*EMS_UreaQty                             	*/
{ /* 	252  */		   0	   },		/*EMS_OBDTxt                              	*/
{ /* 	253  */		   0	   },		/*EMS_ManRgenTxt_D_RqDsply                	*/
{ /* 	254  */		   0	   },		/*EMS_UreaWarn                            	*/
{ /* 	255  */		   0	   },		/*EMS_Soot_Pc_Dsply                       	*/
{ /* 	256  */		   0	   },		/*MP5_AudioStatus                         	*/
{ /* 	257  */		   0	   },		/*MP5_EnergyFlow                          	*/
{ /* 	258  */		   0	   },		/*MP5_SetMultiButton                      	*/
{ /* 	259  */		   0	   },		/*MP5_BSDSoundSwitchSts                   	*/
{ /* 	260  */		   0	   },		/*MP5_NavStatus                           	*/
{ /* 	261  */		   0	   },		/*MP5_NavICON                             	*/
{ /* 	262  */		   0	   },		/*MP5_ROUTE_REMAIN_DIS                    	*/
{ /* 	263  */		   0	   },		/*MP5_ALModeSetting                       	*/
{ /* 	264  */		   0	   },		/*MP5_ALStartAroundSetting                	*/
{ /* 	265  */		   0	   },		/*TrnSrvcRqd_B_Rq                         	*/
{ /* 	266  */		   0	   },		/*TCU_GearPFault                          	*/
{ /* 	267  */		   0	   },		/*TCU_WarningMessage                      	*/
{ /* 	268  */		   0	   },		/*TCU_DrvShiftAllwCondRmd                 	*/
{ /* 	269  */		   0	   },		/*MRR_L_Object_dx                         	*/
{ /* 	270  */		   0	   },		/*MRR_L_Object_dy                         	*/
{ /* 	271  */		   0	   },		/*MRR_L_Obj_0x_class                      	*/
{ /* 	272  */		   0	   },		/*MRR_R_Object_dx                         	*/
{ /* 	273  */		   0	   },		/*MRR_R_Object_dy                         	*/
{ /* 	274  */		   0	   },		/*MRR_R_Obj_0x_class                      	*/
{ /* 	275  */		   0	   },		/*MRR_LeftTargrtDetection                 	*/
{ /* 	276  */		   0	   },		/*MRR_RightTargrtDetection                	*/
{ /* 	277  */		   0	   },		/*IPM_RightLine_dx_start                  	*/
{ /* 	278  */		   0	   },		/*IPM_RightLine_dy                        	*/
{ /* 	279  */		   0	   },		/*IPM_RightLine_dx_lookhead               	*/
{ /* 	280  */		   0	   },		/*IPM_RightLine_hor_curve                 	*/
{ /* 	281  */		   0	   },		/*IPM_RightLine_yawangle                  	*/
{ /* 	282  */		   0	   },		/*RightLineHorCurvatureAlteration         	*/
{ /* 	283  */		   0	   },		/*LaneAssitRightRightVisualization        	*/
{ /* 	284  */		   0	   },		/*IPM_RightLine_Type                      	*/
{ /* 	285  */		   0	   },		/*IPM_RightLine_Color                     	*/
{ /* 	286  */		   0	   },		/*IPM_RightRighLine_Type                  	*/
{ /* 	287  */		   0	   },		/*IPM_RighRightLine_Color                 	*/
{ /* 	288  */		   0	   },		/*IPM_RightRightLine_dy                   	*/
{ /* 	289  */		   0	   },		/*IPM_RightRightLine_hor_curve            	*/
{ /* 	290  */		   0	   },		/*IPM_RightRightLine_yawangle             	*/
{ /* 	291  */		   0	   },		/*RightLineCurvatureAlteration2           	*/
{ /* 	292  */		   0	   },		/*DMS_System_Status                       	*/
{ /* 	293  */		   0	   },		/*DMS_DriverPitch                         	*/
{ /* 	294  */		   0	   },		/*DMS_DriverYaw                           	*/
{ /* 	295  */		   0	   },		/*DMS_DriverWatchRegion                   	*/
{ /* 	296  */		   0	   },		/*DMS_DriverAttentionState                	*/
{ /* 	297  */		   0	   },		/*DMS_DriverDrowsinessState               	*/
{ /* 	298  */		   0	   },		/*DMS_IRSensorState                       	*/
{ /* 	299  */		   0	   },		/*DMS_DriverActionState                   	*/
{ /* 	300  */		   0	   },		/*RollingCounter_0x4A0                    	*/
{ /* 	301  */		   0	   },		/*Checksum_0x4A0                          	*/
{ /* 	302  */		   0	   },		/*MP5_ICMenuShift_Button                  	*/
{ /* 	303  */		   0	   },		/*MP5_ICMenuActive_Button                 	*/
{ /* 	304  */		   0	   },		/*MP5_AlarmStatus                         	*/
{ /* 	305  */		   0	   },		/*MP5_AlarmOrNot                          	*/
{ /* 	306  */		   0	   },		/*MP5_ICMenu_Cmd                          	*/
{ /* 	307  */		   0	   },		/*TBOX_Year                               	*/
{ /* 	308  */		   0	   },		/*TBOX_Month                              	*/
{ /* 	309  */		   0	   },		/*TBOX_Date                               	*/
{ /* 	310  */		   0	   },		/*TBOX_Hour                               	*/
{ /* 	311  */		   0	   },		/*TBOX_Minute                             	*/
{ /* 	312  */		   0	   },		/*TBOX_Second                             	*/
{ /* 	313  */		   0	   },		/*TBOX_ReTime                             	*/
{ /* 	314  */		   0	   },		/*BCM_LoadManageLevel                     	*/
{ /* 	315  */		   0	   },		/*BCM_CarModeIndicator                    	*/
{ /* 	316  */		   0	   },		/*BCM_CarMode                             	*/
{ /* 	317  */		   0	   },		/*BCM_RollingCounter_0x584                	*/
{ /* 	318  */		   0	   },		/*BCM_Checksum_0x584                      	*/
{ /* 	319  */		   0	   },		/*EMS_BackupOdometer                      	*/
{ /* 	320  */		   0	   },		/*EMS_LockManagFeedback                   	*/
{ /* 	321  */		   0	   },		/*EMS_TBOXOlineFeedback                   	*/
{ /* 	322  */		   0	   },		/*EMS_PowerFeedback                       	*/
{ /* 	323  */		   0	   },		/*EMS_SpdLmtFeedback                      	*/
{ /* 	324  */		   0	   },		/*EMS_TBOXAuthentResult                   	*/
{ /* 	325  */		   0	   },		/*EMS_RollingCode                         	*/
};



/**********************************************************************************************************************
    Can_Ccl_NumOfContainedRxSignals
  **********************************************************************************************************************/
  CONST(Ccl_MessageContentInfo, CCL_CONST) Can_Ccl_NumOfContainedRxSignals[Can_Ccl_Rx_Num_Messages] =
  {
     /* Index      SigStartIndex   SigCount   */
     { /*  0  */            0,       1        },
     { /*  1  */            1,       1        },
     { /*  2  */            2,       1        },
     { /*  3  */            3,       3        },
     { /*  4  */            6,       4        },
     { /*  5  */            10,       5        },
     { /*  6  */            15,       1        },
     { /*  7  */            16,       2        },
     { /*  8  */            18,       1        },
     { /*  9  */            19,       9        },
     { /*  10  */            28,       21        },
     { /*  11  */            49,       13        },
     { /*  12  */            62,       16        },
     { /*  13  */            78,       4        },
     { /*  14  */            82,       8        },
     { /*  15  */            90,       12        },
     { /*  16  */            102,       6        },
     { /*  17  */            108,       8        },
     { /*  18  */            116,       9        },
     { /*  19  */            125,       19        },
     { /*  20  */            144,       10        },
     { /*  21  */            154,       1        },
     { /*  22  */            155,       26        },
     { /*  23  */            181,       8        },
     { /*  24  */            189,       8        },
     { /*  25  */            197,       16        },
     { /*  26  */            213,       15        },
     { /*  27  */            228,       4        },
     { /*  28  */            232,       3        },
     { /*  29  */            235,       7        },
     { /*  30  */            242,       14        },
     { /*  31  */            256,       5        },
     { /*  32  */            261,       4        },
     { /*  33  */            265,       4        },
     { /*  34  */            269,       8        },
     { /*  35  */            277,       6        },
     { /*  36  */            283,       9        },
     { /*  37  */            292,       10        },
     { /*  38  */            302,       4        },
     { /*  39  */            306,       1        },
     { /*  40  */            307,       7        },
     { /*  41  */            314,       5        },
     { /*  42  */            319,       1        },
     { /*  43  */            320,       6        },
};



  #if (CCL_RX_INDICATION_API == STD_ON)
  /**********************************************************************************************************************
    Ccl_CbkRxAckFuncPtr
  **********************************************************************************************************************/
  /**
    \var    Ccl_CbkRxAckFuncPtr
    \brief  Function pointer table containing configured Rx Indication notifications for signals and signal groups.*/

  CONST(CclCbkRxAckType, CCL_CONST) Can_Ccl_CbkRxAckFuncPtr[Can_Ccl_Rx_Num_RxAck_Ind] = {
    /* Index    CbkRxAckFuncPtr                              */
	/*	0	*/	NULL	,/*EMS_EngSpeed*/
	/*	1	*/	NULL	,/*EMS_AirCompressorStatus*/
	/*	2	*/	NULL	,/*EMS_BrkPedalStasus*/
	/*	3	*/	NULL	,/*EMS_MTIndicateGearForN*/
	/*	4	*/	NULL	,/*DCM_EMS_RollingCounter_0x108*/
	/*	5	*/	NULL	,/*DCM_EMS_Checksum_0x108*/
	/*	6	*/	Rte_COMCbk_Power_EMS_EngCoolanTemp_fe8b89d6	,/*Power_EMS_EngCoolanTemp*/
	/*	7	*/	Rte_COMCbk_Power_EMS_EngOperationStatus_fe8b89d6	,/*Power_EMS_EngOperationStatus*/
	/*	8	*/	Rte_COMCbk_Power_EMS_BatteryVoltageError_fe8b89d6	,/*Power_EMS_BatteryVoltageError*/
	/*	9	*/	Rte_COMCbk_Power_EMS_EngSpeed_fe8b89d6	,/*Power_EMS_EngSpeed*/
	/*	10	*/	Rte_COMCbk_TCU_DisplayGear_cb5c6a72	,/*TCU_DisplayGear*/
	/*	11	*/	Rte_COMCbk_TCU_GearSelectorReq_cb5c6a72	,/*TCU_GearSelectorReq*/
	/*	12	*/	Rte_COMCbk_TCU_StGearMode_cb5c6a72	,/*TCU_StGearMode*/
	/*	13	*/	NULL	,/*TCU_Status_AliveCounter0x123*/
	/*	14	*/	NULL	,/*TCU_Status_Checksum0x123*/
	/*	15	*/	NULL	,/*EMS_EngOperationStatus*/
	/*	16	*/	Rte_COMCbk_EMS_TargCruiseSpeed_341d7c91	,/*EMS_TargCruiseSpeed*/
	/*	17	*/	Rte_COMCbk_EMS_CruiseControlStatus_341d7c91	,/*EMS_CruiseControlStatus*/
	/*	18	*/	Rte_COMCbk_PEPS_Remotestartstatus_9dbbb616	,/*PEPS_Remotestartstatus*/
	/*	19	*/	Rte_COMCbk_ABS_WhlMilgFrntLe_2356a03c	,/*ABS_WhlMilgFrntLe*/
	/*	20	*/	Rte_COMCbk_ABS_WhlMilgFrntRi_2356a03c	,/*ABS_WhlMilgFrntRi*/
	/*	21	*/	Rte_COMCbk_ABS_VehSpdLgt_2356a03c	,/*ABS_VehSpdLgt*/
	/*	22	*/	Rte_COMCbk_ABS_EbdFlgFlt_2356a03c	,/*ABS_EbdFlgFlt*/
	/*	23	*/	Rte_COMCbk_ABS_AbsFlgFlt_2356a03c	,/*ABS_AbsFlgFlt*/
	/*	24	*/	NULL	,/*ABS_RollingCounter_0x221*/
	/*	25	*/	Rte_COMCbk_ABS_WhlMilgFrntLeStatus_2356a03c	,/*ABS_WhlMilgFrntLeStatus*/
	/*	26	*/	Rte_COMCbk_ABS_WhlMilgFrntRiStatus_2356a03c	,/*ABS_WhlMilgFrntRiStatus*/
	/*	27	*/	NULL	,/*ABS_Checksum_0x221*/
	/*	28	*/	NULL	,/*ESP_HHCAvailable*/
	/*	29	*/	NULL	,/*ABS_HAZActive*/
	/*	30	*/	Rte_COMCbk_ESP_EPBStatus_af66671b	,/*ESP_EPBStatus*/
	/*	31	*/	Rte_COMCbk_ESP_EPBErrorStatus_af66671b	,/*ESP_EPBErrorStatus*/
	/*	32	*/	Rte_COMCbk_ESP_HDCAvailable_af66671b	,/*ESP_HDCAvailable*/
	/*	33	*/	Rte_COMCbk_ESP_HDCActive_af66671b	,/*ESP_HDCActive*/
	/*	34	*/	Rte_COMCbk_ESP_CdpAvailable_af66671b	,/*ESP_CdpAvailable*/
	/*	35	*/	Rte_COMCbk_ESP_EPBWarningMessage3_af66671b	,/*ESP_EPBWarningMessage3*/
	/*	36	*/	Rte_COMCbk_ESP_EPBWarningMessage2_af66671b	,/*ESP_EPBWarningMessage2*/
	/*	37	*/	Rte_COMCbk_ESP_EPBWarningMessage1_af66671b	,/*ESP_EPBWarningMessage1*/
	/*	38	*/	Rte_COMCbk_ESP_AVHWarningMessage_af66671b	,/*ESP_AVHWarningMessage*/
	/*	39	*/	Rte_COMCbk_ESP_AvhActive_af66671b	,/*ESP_AvhActive*/
	/*	40	*/	Rte_COMCbk_ESP_AvhStandby_af66671b	,/*ESP_AvhStandby*/
	/*	41	*/	Rte_COMCbk_ESP_AvhAvabliable_af66671b	,/*ESP_AvhAvabliable*/
	/*	42	*/	Rte_COMCbk_ESP_VdcFlgFlt_af66671b	,/*ESP_VdcFlgFlt*/
	/*	43	*/	Rte_COMCbk_ESP_TcsFlgFlt_af66671b	,/*ESP_TcsFlgFlt*/
	/*	44	*/	Rte_COMCbk_EBS_TcsFlgFlt_af66671b	,/*EBS_TcsFlgFlt*/
	/*	45	*/	Rte_COMCbk_ESP_ESPInfoLamp_af66671b	,/*ESP_ESPInfoLamp*/
	/*	46	*/	Rte_COMCbk_ESP_EspEnableSts_af66671b	,/*ESP_EspEnableSts*/
	/*	47	*/	NULL	,/*ESP_RollingCounter_0x243*/
	/*	48	*/	NULL	,/*ESP_Checksum_0x243*/
	/*	49	*/	Rte_COMCbk_IPM_LaneAssitType_32f79b14	,/*IPM_LaneAssitType*/
	/*	50	*/	NULL	,/*IPM_LaneAssit_WarningVibration*/
	/*	51	*/	Rte_COMCbk_IPM_LaneAssit_WarningAudio_32f79b14	,/*IPM_LaneAssit_WarningAudio*/
	/*	52	*/	Rte_COMCbk_IPM_LaneAssit_LeftVisualization_32f79b14	,/*IPM_LaneAssit_LeftVisualization*/
	/*	53	*/	Rte_COMCbk_IPM_LaneAssit_RightVisualization_32f79b14	,/*IPM_LaneAssit_RightVisualization*/
	/*	54	*/	Rte_COMCbk_IPM_SLASpdlimitUnits_32f79b14	,/*IPM_SLASpdlimitUnits*/
	/*	55	*/	Rte_COMCbk_IPM_SLAState_32f79b14	,/*IPM_SLAState*/
	/*	56	*/	Rte_COMCbk_IPM_LaneAssit_Status_32f79b14	,/*IPM_LaneAssit_Status*/
	/*	57	*/	Rte_COMCbk_IPM_SLASpdlimit_32f79b14	,/*IPM_SLASpdlimit*/
	/*	58	*/	Rte_COMCbk_IPM_IHC_Status_32f79b14	,/*IPM_IHC_Status*/
	/*	59	*/	NULL	,/*IPM_DDD_IndexStatus*/
	/*	60	*/	Rte_COMCbk_IPM_TJAICA_Status_32f79b14	,/*IPM_TJAICA_Status*/
	/*	61	*/	Rte_COMCbk_IPM_LaneAssit_HandsonReq_32f79b14	,/*IPM_LaneAssit_HandsonReq*/
	/*	62	*/	NULL	,/*ACC_SpdSetValue*/
	/*	63	*/	NULL	,/*ACC_ObjDetected*/
	/*	64	*/	NULL	,/*ACC_TimeGapSet*/
	/*	65	*/	NULL	,/*ACC_TarObjBarDis*/
	/*	66	*/	Rte_COMCbk_ACCHMI_Mode_255e8a04	,/*ACCHMI_Mode*/
	/*	67	*/	NULL	,/*ACCFailInfo*/
	/*	68	*/	NULL	,/*ACC_TakeOverReq*/
	/*	69	*/	Rte_COMCbk_AEB_STATE_255e8a04	,/*AEB_STATE*/
	/*	70	*/	NULL	,/*ACC_Startstop_infor*/
	/*	71	*/	Rte_COMCbk_PCW_preWarning_255e8a04	,/*PCW_preWarning*/
	/*	72	*/	Rte_COMCbk_PCW_latentWarning_255e8a04	,/*PCW_latentWarning*/
	/*	73	*/	NULL	,/*Obj_Speed*/
	/*	74	*/	Rte_COMCbk_FCW_STATE_255e8a04	,/*FCW_STATE*/
	/*	75	*/	NULL	,/*ACC_Textinfo*/
	/*	76	*/	NULL	,/*Rolling_counter_0x246*/
	/*	77	*/	NULL	,/*Checksum_0x246*/
	/*	78	*/	Rte_COMCbk_EPS_S_WarningLampYellow_e5742092	,/*EPS_S_WarningLampYellow*/
	/*	79	*/	Rte_COMCbk_EPS_S_SafeLampRed_e5742092	,/*EPS_S_SafeLampRed*/
	/*	80	*/	NULL	,/*Rolling_counter_0x260*/
	/*	81	*/	NULL	,/*Checksum_0x260*/
	/*	82	*/	Rte_COMCbk_PAM_objectStsRLM_49f5ddcc	,/*PAM_objectStsRLM*/
	/*	83	*/	Rte_COMCbk_PAM_objectStsRLC_49f5ddcc	,/*PAM_objectStsRLC*/
	/*	84	*/	Rte_COMCbk_PAM_objectStsRRC_49f5ddcc	,/*PAM_objectStsRRC*/
	/*	85	*/	Rte_COMCbk_PAM_objectStsRRM_49f5ddcc	,/*PAM_objectStsRRM*/
	/*	86	*/	Rte_COMCbk_PAM_ChimeCmdSoundStatus_49f5ddcc	,/*PAM_ChimeCmdSoundStatus*/
	/*	87	*/	Rte_COMCbk_PAM_RearSysTemWorkSts_49f5ddcc	,/*PAM_RearSysTemWorkSts*/
	/*	88	*/	Rte_COMCbk_PAM_FrontSysTemWorkSts_49f5ddcc	,/*PAM_FrontSysTemWorkSts*/
	/*	89	*/	Rte_COMCbk_PAM_ChimeCmdSoundCadence_49f5ddcc	,/*PAM_ChimeCmdSoundCadence*/
	/*	90	*/	Rte_COMCbk_SOD_LCA_warningReqRight_a75280f1	,/*SOD_LCA_warningReqRight*/
	/*	91	*/	Rte_COMCbk_SOD_DOA_warningReqRightRear_a75280f1	,/*SOD_DOA_warningReqRightRear*/
	/*	92	*/	Rte_COMCbk_SOD_DOA_warningReqRightFront_a75280f1	,/*SOD_DOA_warningReqRightFront*/
	/*	93	*/	Rte_COMCbk_SOD_CTA_warningReqRight_a75280f1	,/*SOD_CTA_warningReqRight*/
	/*	94	*/	Rte_COMCbk_SOD_BLIS_display_a75280f1	,/*SOD_BLIS_display*/
	/*	95	*/	Rte_COMCbk_SOD_LCA_warningReqLeft_a75280f1	,/*SOD_LCA_warningReqLeft*/
	/*	96	*/	Rte_COMCbk_SOD_DOA_warningReqLeftRear_a75280f1	,/*SOD_DOA_warningReqLeftRear*/
	/*	97	*/	Rte_COMCbk_SOD_DOA_warningReqLeftFront_a75280f1	,/*SOD_DOA_warningReqLeftFront*/
	/*	98	*/	Rte_COMCbk_SOD_CTA_warningReqLeft_a75280f1	,/*SOD_CTA_warningReqLeft*/
	/*	99	*/	Rte_COMCbk_DOA_OFFTelltale_a75280f1	,/*DOA_OFFTelltale*/
	/*	100	*/	Rte_COMCbk_CTA_OFFTelltale_a75280f1	,/*CTA_OFFTelltale*/
	/*	101	*/	Rte_COMCbk_SODLCA_OFFTelltale_a75280f1	,/*SODLCA_OFFTelltale*/
	/*	102	*/	NULL	,/*IPM_LedtLine_dx_start*/
	/*	103	*/	NULL	,/*IPM_LeftLine_dy*/
	/*	104	*/	NULL	,/*IPM_LeftLine_dx_lookhead*/
	/*	105	*/	NULL	,/*IPM_LeftLine_hor_curve*/
	/*	106	*/	NULL	,/*IPM_LeftLine_yawangle*/
	/*	107	*/	NULL	,/*LeftLineHorCurvatureAlteration*/
	/*	108	*/	Rte_COMCbk_MRR_F_Object_dx_49708b05	,/*MRR_F_Object_dx*/
	/*	109	*/	Rte_COMCbk_MRR_F_Object_dy_49708b05	,/*MRR_F_Object_dy*/
	/*	110	*/	Rte_COMCbk_MRR_F_Obj_0x_class_49708b05	,/*MRR_F_Obj_0x_class*/
	/*	111	*/	NULL	,/*MRR_FF_Object_dx*/
	/*	112	*/	NULL	,/*MRR_FF_Object_dy*/
	/*	113	*/	NULL	,/*MRR_FF_Obj_0x_class*/
	/*	114	*/	NULL	,/*MRR_FFTargrtDetection*/
	/*	115	*/	NULL	,/*MRR_PedDetection*/
	/*	116	*/	NULL	,/*LaneAssit_LeftLeftVisualization*/
	/*	117	*/	NULL	,/*IPM_LeftLine_Type*/
	/*	118	*/	NULL	,/*IPM_LeftLine_Color*/
	/*	119	*/	NULL	,/*IPM_LeftLeftLine_Type*/
	/*	120	*/	NULL	,/*IPM_LeftLeftLine_Color*/
	/*	121	*/	NULL	,/*IPM_LeftLeftLine_dy*/
	/*	122	*/	NULL	,/*IPM_LeftLeftLine_hor_curve*/
	/*	123	*/	NULL	,/*IPM_LeftLeftLine_yawangle*/
	/*	124	*/	NULL	,/*LeftLeftLineCurvatureAlteration*/
	/*	125	*/	Rte_COMCbk_BCM_DoorStsRearRi_0edb943f	,/*BCM_DoorStsRearRi*/
	/*	126	*/	Rte_COMCbk_BCM_DoorStsRearLe_0edb943f	,/*BCM_DoorStsRearLe*/
	/*	127	*/	Rte_COMCbk_BCM_DoorStsFrntRi_0edb943f	,/*BCM_DoorStsFrntRi*/
	/*	128	*/	Rte_COMCbk_BCM_DoorStsFrntLe_0edb943f	,/*BCM_DoorStsFrntLe*/
	/*	129	*/	NULL	,/*BCM_DoorLockStsRearRi*/
	/*	130	*/	NULL	,/*BCM_DoorLockStsRearLe*/
	/*	131	*/	NULL	,/*BCM_DoorLockStsFrntRi*/
	/*	132	*/	NULL	,/*BCM_DoorLockStsFrntLe*/
	/*	133	*/	NULL	,/*BCM_AntiTheftSts*/
	/*	134	*/	NULL	,/*BCM_LockUnlockFeedback*/
	/*	135	*/	NULL	,/*BCM_DoorLockStsTrunk*/
	/*	136	*/	Rte_COMCbk_BCM_DoorStsTrunk_0edb943f	,/*BCM_DoorStsTrunk*/
	/*	137	*/	NULL	,/*BCM_TrunkDoorPreUnlockSts*/
	/*	138	*/	NULL	,/*BCM_FrontWiperSts*/
	/*	139	*/	Rte_COMCbk_BCM_EnginehoodSts_0edb943f	,/*BCM_EnginehoodSts*/
	/*	140	*/	NULL	,/*BCM_Rolling_counter_0x310*/
	/*	141	*/	Rte_COMCbk_BCM_Reverse_gear_0edb943f	,/*BCM_Reverse_gear*/
	/*	142	*/	Rte_COMCbk_BCM_TurnIndicatorSts_0edb943f	,/*BCM_TurnIndicatorSts*/
	/*	143	*/	NULL	,/*BCM_Checksum_0x310*/
	/*	144	*/	NULL	,/*BCM_OutsideTempDig*/
	/*	145	*/	Rte_COMCbk_BCM_Mechanical_Hand_Brake_abc8cd44	,/*BCM_Mechanical_Hand_Brake*/
	/*	146	*/	Rte_COMCbk_BCM_BrakeFluidSts_abc8cd44	,/*BCM_BrakeFluidSts*/
	/*	147	*/	Rte_COMCbk_BCM_OutsideTemp_abc8cd44	,/*BCM_OutsideTemp*/
	/*	148	*/	NULL	,/*BCM_Start_Switch*/
	/*	149	*/	NULL	,/*BCM_SS_EnableSts*/
	/*	150	*/	NULL	,/*BCM_PowerModeInvalid*/
	/*	151	*/	NULL	,/*BCM_PowerMode*/
	/*	152	*/	NULL	,/*BCM_Rollingcounter_0x313*/
	/*	153	*/	NULL	,/*BCM_Checksum_0x313*/
	/*	154	*/	Rte_COMCbk_BCM_BGLLumLvlSettingStatus_a1dcf71c	,/*BCM_BGLLumLvlSettingStatus*/
	/*	155	*/	Rte_COMCbk_BCM_FrntFogLmpSts_52444383	,/*BCM_FrntFogLmpSts*/
	/*	156	*/	Rte_COMCbk_BCM_PosLmpSts_52444383	,/*BCM_PosLmpSts*/
	/*	157	*/	Rte_COMCbk_BCM_LowBeamSts_52444383	,/*BCM_LowBeamSts*/
	/*	158	*/	Rte_COMCbk_BCM_HighBeamSts_52444383	,/*BCM_HighBeamSts*/
	/*	159	*/	NULL	,/*BCM_reversinglightSts*/
	/*	160	*/	NULL	,/*BCM_DayRunningLampSts*/
	/*	161	*/	Rte_COMCbk_BCM_PosLmpIndicator_52444383	,/*BCM_PosLmpIndicator*/
	/*	162	*/	Rte_COMCbk_BCM_RearFogLmpSts_52444383	,/*BCM_RearFogLmpSts*/
	/*	163	*/	NULL	,/*BCM_laserlightSts*/
	/*	164	*/	NULL	,/*BCM_AmbientLightSts*/
	/*	165	*/	NULL	,/*BCM_Highmountedstoplamp*/
	/*	166	*/	NULL	,/*BCM_BrakelightSts*/
	/*	167	*/	NULL	,/*BCM_WelcomeSts*/
	/*	168	*/	Rte_COMCbk_BCM_BackHomeSts_52444383	,/*BCM_BackHomeSts*/
	/*	169	*/	NULL	,/*BCM_AutolampSts*/
	/*	170	*/	NULL	,/*BCM_readinglampSts*/
	/*	171	*/	Rte_COMCbk_BCM_DayRunningLampDig_52444383	,/*BCM_DayRunningLampDig*/
	/*	172	*/	Rte_COMCbk_BCM_BrakelightDig_52444383	,/*BCM_BrakelightDig*/
	/*	173	*/	Rte_COMCbk_BCM_reversinglightDig_52444383	,/*BCM_reversinglightDig*/
	/*	174	*/	Rte_COMCbk_BCM_TurnIndicatorDig_52444383	,/*BCM_TurnIndicatorDig*/
	/*	175	*/	Rte_COMCbk_BCM_RearFogLmpDig_52444383	,/*BCM_RearFogLmpDig*/
	/*	176	*/	Rte_COMCbk_BCM_FrntFogLmpDig_52444383	,/*BCM_FrntFogLmpDig*/
	/*	177	*/	Rte_COMCbk_BCM_PosLmpDig_52444383	,/*BCM_PosLmpDig*/
	/*	178	*/	Rte_COMCbk_BCM_LowBeamDig_52444383	,/*BCM_LowBeamDig*/
	/*	179	*/	NULL	,/*BCM_Rollingcounter_0x318*/
	/*	180	*/	NULL	,/*BCM_Checksum_0x318*/
	/*	181	*/	Rte_COMCbk_SWM_Menu_Right_f733f54d	,/*SWM_Menu_Right*/
	/*	182	*/	Rte_COMCbk_SWM_Menu_Left_f733f54d	,/*SWM_Menu_Left*/
	/*	183	*/	Rte_COMCbk_SWM_Menu_Down_f733f54d	,/*SWM_Menu_Down*/
	/*	184	*/	Rte_COMCbk_SWM_Menu_Up_f733f54d	,/*SWM_Menu_Up*/
	/*	185	*/	NULL	,/*Rolling_counter_0x31A*/
	/*	186	*/	Rte_COMCbk_SWM_Menu_Return_f733f54d	,/*SWM_Menu_Return*/
	/*	187	*/	Rte_COMCbk_SWM_Menu_Confirm_f733f54d	,/*SWM_Menu_Confirm*/
	/*	188	*/	NULL	,/*Checksum_0x31A*/
	/*	189	*/	Rte_COMCbk_SWM_ACCtauGapSetPlus_db79ffcb	,/*SWM_ACCtauGapSetPlus*/
	/*	190	*/	Rte_COMCbk_SWM_ACCvSetMinus_db79ffcb	,/*SWM_ACCvSetMinus*/
	/*	191	*/	Rte_COMCbk_SWM_ACCvSetPlus_db79ffcb	,/*SWM_ACCvSetPlus*/
	/*	192	*/	Rte_COMCbk_SWM_ACCResume_db79ffcb	,/*SWM_ACCResume*/
	/*	193	*/	Rte_COMCbk_SWM_ACCSet_db79ffcb	,/*SWM_ACCSet*/
	/*	194	*/	Rte_COMCbk_SWM_ACCEnableSwitch_db79ffcb	,/*SWM_ACCEnableSwitch*/
	/*	195	*/	Rte_COMCbk_SWM_LaneAssistSwitch_db79ffcb	,/*SWM_LaneAssistSwitch*/
	/*	196	*/	Rte_COMCbk_SWM_ACCtauGapSetMinus_db79ffcb	,/*SWM_ACCtauGapSetMinus*/
	/*	197	*/	NULL	,/*PEPS_PowerModeInvalid*/
	/*	198	*/	Rte_COMCbk_PEPS_PowerMode_9b45c0e5	,/*PEPS_PowerMode*/
	/*	199	*/	Rte_COMCbk_PEPS_IMMO_MatchStatus_9b45c0e5	,/*PEPS_IMMO_MatchStatus*/
	/*	200	*/	Rte_COMCbk_PEPS_SystemFailStatus_9b45c0e5	,/*PEPS_SystemFailStatus*/
	/*	201	*/	Rte_COMCbk_PEPS_ESCL_FailStatus_9b45c0e5	,/*PEPS_ESCL_FailStatus*/
	/*	202	*/	Rte_COMCbk_PEPS_SSB_FailStatus_9b45c0e5	,/*PEPS_SSB_FailStatus*/
	/*	203	*/	Rte_COMCbk_PEPS_BrakeIndicationWarning_9b45c0e5	,/*PEPS_BrakeIndicationWarning*/
	/*	204	*/	Rte_COMCbk_PEPS_NotPNWarning_9b45c0e5	,/*PEPS_NotPNWarning*/
	/*	205	*/	Rte_COMCbk_PEPS_NotNWarning_9b45c0e5	,/*PEPS_NotNWarning*/
	/*	206	*/	Rte_COMCbk_PEPS_DoorOpenNotOFFWarning_9b45c0e5	,/*PEPS_DoorOpenNotOFFWarning*/
	/*	207	*/	Rte_COMCbk_PEPS_DoorOpenWarning_9b45c0e5	,/*PEPS_DoorOpenWarning*/
	/*	208	*/	Rte_COMCbk_PEPS_KeyBatteryWarning_9b45c0e5	,/*PEPS_KeyBatteryWarning*/
	/*	209	*/	Rte_COMCbk_PEPS_KeyOutWarning1_9b45c0e5	,/*PEPS_KeyOutWarning1*/
	/*	210	*/	Rte_COMCbk_PEPS_NoKeyFoundWarning_9b45c0e5	,/*PEPS_NoKeyFoundWarning*/
	/*	211	*/	Rte_COMCbk_PEPS_KeyReminderWarning_9b45c0e5	,/*PEPS_KeyReminderWarning*/
	/*	212	*/	Rte_COMCbk_PEPS_RemainingNumSts_9b45c0e5	,/*PEPS_RemainingNumSts*/
	/*	213	*/	Rte_COMCbk_TPMS_LF_Pressure_c030f382	,/*TPMS_LF_Pressure*/
	/*	214	*/	Rte_COMCbk_TPMS_RF_Pressure_c030f382	,/*TPMS_RF_Pressure*/
	/*	215	*/	Rte_COMCbk_TPMS_RR_Pressure_c030f382	,/*TPMS_RR_Pressure*/
	/*	216	*/	Rte_COMCbk_TPMS_LR_Pressure_c030f382	,/*TPMS_LR_Pressure*/
	/*	217	*/	Rte_COMCbk_TPMS_Tire_Temperature_c030f382	,/*TPMS_Tire_Temperature*/
	/*	218	*/	Rte_COMCbk_TPMS_LF_Pressure_Warning_c030f382	,/*TPMS_LF_Pressure_Warning*/
	/*	219	*/	Rte_COMCbk_TPMS_RF_Pressure_Warning_c030f382	,/*TPMS_RF_Pressure_Warning*/
	/*	220	*/	Rte_COMCbk_TPMS_System_Status_c030f382	,/*TPMS_System_Status*/
	/*	221	*/	Rte_COMCbk_TPMS_RR_Pressure_Warning_c030f382	,/*TPMS_RR_Pressure_Warning*/
	/*	222	*/	Rte_COMCbk_TPMS_LR_Pressure_Warning_c030f382	,/*TPMS_LR_Pressure_Warning*/
	/*	223	*/	Rte_COMCbk_TPMS_Temperature_Warning_c030f382	,/*TPMS_Temperature_Warning*/
	/*	224	*/	NULL	,/*TPMS_resrved*/
	/*	225	*/	Rte_COMCbk_Tire_Position_c030f382	,/*Tire_Position*/
	/*	226	*/	Rte_COMCbk_TPMS_Lamp_Status_c030f382	,/*TPMS_Lamp_Status*/
	/*	227	*/	NULL	,/*TPMS_AL_State*/
	/*	228	*/	Rte_COMCbk_RRI_Pressure_4ebff461	,/*RRI_Pressure*/
	/*	229	*/	Rte_COMCbk_LRI_Pressure_4ebff461	,/*LRI_Pressure*/
	/*	230	*/	Rte_COMCbk_RRI_Pressure_Warning_4ebff461	,/*RRI_Pressure_Warning*/
	/*	231	*/	Rte_COMCbk_LRI_Pressure_Warning_4ebff461	,/*LRI_Pressure_Warning*/
	/*	232	*/	NULL	,/*EMS_EngCoolanTemp*/
	/*	233	*/	NULL	,/*EMS_BatterVoltage*/
	/*	234	*/	NULL	,/*EMS_BatteryVoltageError*/
	/*	235	*/	Rte_COMCbk_EMS_Fuelcounter_daed4b4e	,/*EMS_Fuelcounter*/
	/*	236	*/	Rte_COMCbk_EMS_FuelconsumptionInst_daed4b4e	,/*EMS_FuelconsumptionInst*/
	/*	237	*/	Rte_COMCbk_EMS_RemindShiftGear_MT_daed4b4e	,/*EMS_RemindShiftGear_MT*/
	/*	238	*/	Rte_COMCbk_EMS_MIL_daed4b4e	,/*EMS_MIL*/
	/*	239	*/	Rte_COMCbk_EMS_SVS_daed4b4e	,/*EMS_SVS*/
	/*	240	*/	Rte_COMCbk_EMS_StartStopStatus_daed4b4e	,/*EMS_StartStopStatus*/
	/*	241	*/	Rte_COMCbk_EMS_ExhaustbrakeSts_daed4b4e	,/*EMS_ExhaustbrakeSts*/
	/*	242	*/	Rte_COMCbk_EMS_SpeedLimtHour_daa19a1a	,/*EMS_SpeedLimtHour*/
	/*	243	*/	Rte_COMCbk_EMS_UreaTxt_daa19a1a	,/*EMS_UreaTxt*/
	/*	244	*/	Rte_COMCbk_EMS_SpeedLimtMin_daa19a1a	,/*EMS_SpeedLimtMin*/
	/*	245	*/	Rte_COMCbk_EMS_UreaLvl_daa19a1a	,/*EMS_UreaLvl*/
	/*	246	*/	Rte_COMCbk_EMS_ManRgenTxt_D_daa19a1a	,/*EMS_ManRgenTxt_D*/
	/*	247	*/	Rte_COMCbk_DCM_GlowPlugLmpReq_daa19a1a	,/*DCM_GlowPlugLmpReq*/
	/*	248	*/	Rte_COMCbk_DCM_WIFFullLmpReq_daa19a1a	,/*DCM_WIFFullLmpReq*/
	/*	249	*/	Rte_COMCbk_EMS_TroqLimtHour_daa19a1a	,/*EMS_TroqLimtHour*/
	/*	250	*/	Rte_COMCbk_EMS_TroqLimtMin_daa19a1a	,/*EMS_TroqLimtMin*/
	/*	251	*/	Rte_COMCbk_EMS_UreaQty_daa19a1a	,/*EMS_UreaQty*/
	/*	252	*/	Rte_COMCbk_EMS_OBDTxt_daa19a1a	,/*EMS_OBDTxt*/
	/*	253	*/	Rte_COMCbk_EMS_ManRgenTxt_D_RqDsply_daa19a1a	,/*EMS_ManRgenTxt_D_RqDsply*/
	/*	254	*/	Rte_COMCbk_EMS_UreaWarn_daa19a1a	,/*EMS_UreaWarn*/
	/*	255	*/	Rte_COMCbk_EMS_Soot_Pc_Dsply_daa19a1a	,/*EMS_Soot_Pc_Dsply*/
	/*	256	*/	NULL	,/*MP5_AudioStatus*/
	/*	257	*/	NULL	,/*MP5_EnergyFlow*/
	/*	258	*/	NULL	,/*MP5_SetMultiButton*/
	/*	259	*/	Rte_COMCbk_MP5_BSDSoundSwitchSts_c90244fe	,/*MP5_BSDSoundSwitchSts*/
	/*	260	*/	Rte_COMCbk_MP5_NavStatus_c90244fe	,/*MP5_NavStatus*/
	/*	261	*/	Rte_COMCbk_MP5_NavICON_0f6d4d79	,/*MP5_NavICON*/
	/*	262	*/	Rte_COMCbk_MP5_ROUTE_REMAIN_DIS_0f6d4d79	,/*MP5_ROUTE_REMAIN_DIS*/
	/*	263	*/	NULL	,/*MP5_ALModeSetting*/
	/*	264	*/	NULL	,/*MP5_ALStartAroundSetting*/
	/*	265	*/	Rte_COMCbk_TrnSrvcRqd_B_Rq_94ca6b54	,/*TrnSrvcRqd_B_Rq*/
	/*	266	*/	Rte_COMCbk_TCU_GearPFault_94ca6b54	,/*TCU_GearPFault*/
	/*	267	*/	Rte_COMCbk_TCU_WarningMessage_94ca6b54	,/*TCU_WarningMessage*/
	/*	268	*/	Rte_COMCbk_TCU_DrvShiftAllwCondRmd_94ca6b54	,/*TCU_DrvShiftAllwCondRmd*/
	/*	269	*/	NULL	,/*MRR_L_Object_dx*/
	/*	270	*/	NULL	,/*MRR_L_Object_dy*/
	/*	271	*/	NULL	,/*MRR_L_Obj_0x_class*/
	/*	272	*/	NULL	,/*MRR_R_Object_dx*/
	/*	273	*/	NULL	,/*MRR_R_Object_dy*/
	/*	274	*/	NULL	,/*MRR_R_Obj_0x_class*/
	/*	275	*/	NULL	,/*MRR_LeftTargrtDetection*/
	/*	276	*/	NULL	,/*MRR_RightTargrtDetection*/
	/*	277	*/	NULL	,/*IPM_RightLine_dx_start*/
	/*	278	*/	NULL	,/*IPM_RightLine_dy*/
	/*	279	*/	NULL	,/*IPM_RightLine_dx_lookhead*/
	/*	280	*/	NULL	,/*IPM_RightLine_hor_curve*/
	/*	281	*/	NULL	,/*IPM_RightLine_yawangle*/
	/*	282	*/	NULL	,/*RightLineHorCurvatureAlteration*/
	/*	283	*/	NULL	,/*LaneAssitRightRightVisualization*/
	/*	284	*/	NULL	,/*IPM_RightLine_Type*/
	/*	285	*/	NULL	,/*IPM_RightLine_Color*/
	/*	286	*/	NULL	,/*IPM_RightRighLine_Type*/
	/*	287	*/	NULL	,/*IPM_RighRightLine_Color*/
	/*	288	*/	NULL	,/*IPM_RightRightLine_dy*/
	/*	289	*/	NULL	,/*IPM_RightRightLine_hor_curve*/
	/*	290	*/	NULL	,/*IPM_RightRightLine_yawangle*/
	/*	291	*/	NULL	,/*RightLineCurvatureAlteration2*/
	/*	292	*/	NULL	,/*DMS_System_Status*/
	/*	293	*/	NULL	,/*DMS_DriverPitch*/
	/*	294	*/	NULL	,/*DMS_DriverYaw*/
	/*	295	*/	NULL	,/*DMS_DriverWatchRegion*/
	/*	296	*/	NULL	,/*DMS_DriverAttentionState*/
	/*	297	*/	NULL	,/*DMS_DriverDrowsinessState*/
	/*	298	*/	NULL	,/*DMS_IRSensorState*/
	/*	299	*/	NULL	,/*DMS_DriverActionState*/
	/*	300	*/	NULL	,/*RollingCounter_0x4A0*/
	/*	301	*/	NULL	,/*Checksum_0x4A0*/
	/*	302	*/	Rte_COMCbk_MP5_ICMenuShift_Button_046cad19	,/*MP5_ICMenuShift_Button*/
	/*	303	*/	Rte_COMCbk_MP5_ICMenuActive_Button_046cad19	,/*MP5_ICMenuActive_Button*/
	/*	304	*/	Rte_COMCbk_MP5_AlarmStatus_046cad19	,/*MP5_AlarmStatus*/
	/*	305	*/	Rte_COMCbk_MP5_AlarmOrNot_046cad19	,/*MP5_AlarmOrNot*/
	/*	306	*/	Rte_COMCbk_MP5_ICMenu_Cmd_34a683c9	,/*MP5_ICMenu_Cmd*/
	/*	307	*/	Rte_COMCbk_TBOX_Year_4e88e95a	,/*TBOX_Year*/
	/*	308	*/	Rte_COMCbk_TBOX_Month_4e88e95a	,/*TBOX_Month*/
	/*	309	*/	Rte_COMCbk_TBOX_Date_4e88e95a	,/*TBOX_Date*/
	/*	310	*/	Rte_COMCbk_TBOX_Hour_4e88e95a	,/*TBOX_Hour*/
	/*	311	*/	Rte_COMCbk_TBOX_Minute_4e88e95a	,/*TBOX_Minute*/
	/*	312	*/	Rte_COMCbk_TBOX_Second_4e88e95a	,/*TBOX_Second*/
	/*	313	*/	Rte_COMCbk_TBOX_ReTime_4e88e95a	,/*TBOX_ReTime*/
	/*	314	*/	Rte_COMCbk_BCM_LoadManageLevel_00b00241	,/*BCM_LoadManageLevel*/
	/*	315	*/	Rte_COMCbk_BCM_CarModeIndicator_00b00241	,/*BCM_CarModeIndicator*/
	/*	316	*/	Rte_COMCbk_BCM_CarMode_00b00241	,/*BCM_CarMode*/
	/*	317	*/	NULL	,/*BCM_RollingCounter_0x584*/
	/*	318	*/	NULL	,/*BCM_Checksum_0x584*/
	/*	319	*/	Rte_COMCbk_EMS_BackupOdometer_63950623	,/*EMS_BackupOdometer*/
	/*	320	*/	NULL	,/*EMS_LockManagFeedback*/
	/*	321	*/	NULL	,/*EMS_TBOXOlineFeedback*/
	/*	322	*/	NULL	,/*EMS_PowerFeedback*/
	/*	323	*/	NULL	,/*EMS_SpdLmtFeedback*/
	/*	324	*/	NULL	,/*EMS_TBOXAuthentResult*/
	/*	325	*/	NULL	,/*EMS_RollingCode*/
  };
  #endif


  #if (CCL_RX_TOUTINDICATION_API == STD_ON)
  /**********************************************************************************************************************
    Ccl_CbkRxTOutFuncPtr
  **********************************************************************************************************************/
  /**
    \var    Ccl_CbkRxTOutFuncPtr
    \brief  Function pointer table containing configured Rx timeout notifications for signals and signal groups. ea:{71D75BEB-245A-468b-96DB-A4F1362E927C}
  */
CONST(CclCbkRxTOutType, CCL_CONST) Can_Ccl_CbkRxTOutFuncPtr[Can_Ccl_Rx_Num_RxTOut_Ind] = {
/* Index	  CbkRxTOutFuncPtr	   */
	/*	0	*/	NULL	,/*EMS_EngSpeed*/
	/*	1	*/	NULL	,/*EMS_AirCompressorStatus*/
	/*	2	*/	NULL	,/*EMS_BrkPedalStasus*/
	/*	3	*/	NULL	,/*EMS_MTIndicateGearForN*/
	/*	4	*/	NULL	,/*DCM_EMS_RollingCounter_0x108*/
	/*	5	*/	NULL	,/*DCM_EMS_Checksum_0x108*/
	/*	6	*/	Rte_COMCbkRxTOut_Power_EMS_EngCoolanTemp_fe8b89d6	,/*Power_EMS_EngCoolanTemp*/
	/*	7	*/	Rte_COMCbkRxTOut_Power_EMS_EngOperationStatus_fe8b89d6	,/*Power_EMS_EngOperationStatus*/
	/*	8	*/	Rte_COMCbkRxTOut_Power_EMS_BatteryVoltageError_fe8b89d6	,/*Power_EMS_BatteryVoltageError*/
	/*	9	*/	Rte_COMCbkRxTOut_Power_EMS_EngSpeed_fe8b89d6	,/*Power_EMS_EngSpeed*/
	/*	10	*/	Rte_COMCbkRxTOut_TCU_DisplayGear_cb5c6a72	,/*TCU_DisplayGear*/
	/*	11	*/	Rte_COMCbkRxTOut_TCU_GearSelectorReq_cb5c6a72	,/*TCU_GearSelectorReq*/
	/*	12	*/	Rte_COMCbkRxTOut_TCU_StGearMode_cb5c6a72	,/*TCU_StGearMode*/
	/*	13	*/	NULL	,/*TCU_Status_AliveCounter0x123*/
	/*	14	*/	NULL	,/*TCU_Status_Checksum0x123*/
	/*	15	*/	NULL	,/*EMS_EngOperationStatus*/
	/*	16	*/	Rte_COMCbkRxTOut_EMS_TargCruiseSpeed_341d7c91	,/*EMS_TargCruiseSpeed*/
	/*	17	*/	Rte_COMCbkRxTOut_EMS_CruiseControlStatus_341d7c91	,/*EMS_CruiseControlStatus*/
	/*	18	*/	Rte_COMCbkRxTOut_PEPS_Remotestartstatus_9dbbb616	,/*PEPS_Remotestartstatus*/
	/*	19	*/	Rte_COMCbkRxTOut_ABS_WhlMilgFrntLe_2356a03c	,/*ABS_WhlMilgFrntLe*/
	/*	20	*/	Rte_COMCbkRxTOut_ABS_WhlMilgFrntRi_2356a03c	,/*ABS_WhlMilgFrntRi*/
	/*	21	*/	Rte_COMCbkRxTOut_ABS_VehSpdLgt_2356a03c	,/*ABS_VehSpdLgt*/
	/*	22	*/	Rte_COMCbkRxTOut_ABS_EbdFlgFlt_2356a03c	,/*ABS_EbdFlgFlt*/
	/*	23	*/	Rte_COMCbkRxTOut_ABS_AbsFlgFlt_2356a03c	,/*ABS_AbsFlgFlt*/
	/*	24	*/	NULL	,/*ABS_RollingCounter_0x221*/
	/*	25	*/	Rte_COMCbkRxTOut_ABS_WhlMilgFrntLeStatus_2356a03c	,/*ABS_WhlMilgFrntLeStatus*/
	/*	26	*/	Rte_COMCbkRxTOut_ABS_WhlMilgFrntRiStatus_2356a03c	,/*ABS_WhlMilgFrntRiStatus*/
	/*	27	*/	NULL	,/*ABS_Checksum_0x221*/
	/*	28	*/	NULL	,/*ESP_HHCAvailable*/
	/*	29	*/	NULL	,/*ABS_HAZActive*/
	/*	30	*/	Rte_COMCbkRxTOut_ESP_EPBStatus_af66671b	,/*ESP_EPBStatus*/
	/*	31	*/	Rte_COMCbkRxTOut_ESP_EPBErrorStatus_af66671b	,/*ESP_EPBErrorStatus*/
	/*	32	*/	Rte_COMCbkRxTOut_ESP_HDCAvailable_af66671b	,/*ESP_HDCAvailable*/
	/*	33	*/	Rte_COMCbkRxTOut_ESP_HDCActive_af66671b	,/*ESP_HDCActive*/
	/*	34	*/	Rte_COMCbkRxTOut_ESP_CdpAvailable_af66671b	,/*ESP_CdpAvailable*/
	/*	35	*/	Rte_COMCbkRxTOut_ESP_EPBWarningMessage3_af66671b	,/*ESP_EPBWarningMessage3*/
	/*	36	*/	Rte_COMCbkRxTOut_ESP_EPBWarningMessage2_af66671b	,/*ESP_EPBWarningMessage2*/
	/*	37	*/	Rte_COMCbkRxTOut_ESP_EPBWarningMessage1_af66671b	,/*ESP_EPBWarningMessage1*/
	/*	38	*/	Rte_COMCbkRxTOut_ESP_AVHWarningMessage_af66671b	,/*ESP_AVHWarningMessage*/
	/*	39	*/	Rte_COMCbkRxTOut_ESP_AvhActive_af66671b	,/*ESP_AvhActive*/
	/*	40	*/	Rte_COMCbkRxTOut_ESP_AvhStandby_af66671b	,/*ESP_AvhStandby*/
	/*	41	*/	Rte_COMCbkRxTOut_ESP_AvhAvabliable_af66671b	,/*ESP_AvhAvabliable*/
	/*	42	*/	Rte_COMCbkRxTOut_ESP_VdcFlgFlt_af66671b	,/*ESP_VdcFlgFlt*/
	/*	43	*/	Rte_COMCbkRxTOut_ESP_TcsFlgFlt_af66671b	,/*ESP_TcsFlgFlt*/
	/*	44	*/	Rte_COMCbkRxTOut_EBS_TcsFlgFlt_af66671b	,/*EBS_TcsFlgFlt*/
	/*	45	*/	Rte_COMCbkRxTOut_ESP_ESPInfoLamp_af66671b	,/*ESP_ESPInfoLamp*/
	/*	46	*/	Rte_COMCbkRxTOut_ESP_EspEnableSts_af66671b	,/*ESP_EspEnableSts*/
	/*	47	*/	NULL	,/*ESP_RollingCounter_0x243*/
	/*	48	*/	NULL	,/*ESP_Checksum_0x243*/
	/*	49	*/	Rte_COMCbkRxTOut_IPM_LaneAssitType_32f79b14	,/*IPM_LaneAssitType*/
	/*	50	*/	NULL	,/*IPM_LaneAssit_WarningVibration*/
	/*	51	*/	Rte_COMCbkRxTOut_IPM_LaneAssit_WarningAudio_32f79b14	,/*IPM_LaneAssit_WarningAudio*/
	/*	52	*/	Rte_COMCbkRxTOut_IPM_LaneAssit_LeftVisualization_32f79b14	,/*IPM_LaneAssit_LeftVisualization*/
	/*	53	*/	Rte_COMCbkRxTOut_IPM_LaneAssit_RightVisualization_32f79b14	,/*IPM_LaneAssit_RightVisualization*/
	/*	54	*/	Rte_COMCbkRxTOut_IPM_SLASpdlimitUnits_32f79b14	,/*IPM_SLASpdlimitUnits*/
	/*	55	*/	Rte_COMCbkRxTOut_IPM_SLAState_32f79b14	,/*IPM_SLAState*/
	/*	56	*/	Rte_COMCbkRxTOut_IPM_LaneAssit_Status_32f79b14	,/*IPM_LaneAssit_Status*/
	/*	57	*/	Rte_COMCbkRxTOut_IPM_SLASpdlimit_32f79b14	,/*IPM_SLASpdlimit*/
	/*	58	*/	Rte_COMCbkRxTOut_IPM_IHC_Status_32f79b14	,/*IPM_IHC_Status*/
	/*	59	*/	NULL	,/*IPM_DDD_IndexStatus*/
	/*	60	*/	Rte_COMCbkRxTOut_IPM_TJAICA_Status_32f79b14	,/*IPM_TJAICA_Status*/
	/*	61	*/	Rte_COMCbkRxTOut_IPM_LaneAssit_HandsonReq_32f79b14	,/*IPM_LaneAssit_HandsonReq*/
	/*	62	*/	NULL	,/*ACC_SpdSetValue*/
	/*	63	*/	NULL	,/*ACC_ObjDetected*/
	/*	64	*/	NULL	,/*ACC_TimeGapSet*/
	/*	65	*/	NULL	,/*ACC_TarObjBarDis*/
	/*	66	*/	Rte_COMCbkRxTOut_ACCHMI_Mode_255e8a04	,/*ACCHMI_Mode*/
	/*	67	*/	NULL	,/*ACCFailInfo*/
	/*	68	*/	NULL	,/*ACC_TakeOverReq*/
	/*	69	*/	Rte_COMCbkRxTOut_AEB_STATE_255e8a04	,/*AEB_STATE*/
	/*	70	*/	NULL	,/*ACC_Startstop_infor*/
	/*	71	*/	Rte_COMCbkRxTOut_PCW_preWarning_255e8a04	,/*PCW_preWarning*/
	/*	72	*/	Rte_COMCbkRxTOut_PCW_latentWarning_255e8a04	,/*PCW_latentWarning*/
	/*	73	*/	NULL	,/*Obj_Speed*/
	/*	74	*/	Rte_COMCbkRxTOut_FCW_STATE_255e8a04	,/*FCW_STATE*/
	/*	75	*/	NULL	,/*ACC_Textinfo*/
	/*	76	*/	NULL	,/*Rolling_counter_0x246*/
	/*	77	*/	NULL	,/*Checksum_0x246*/
	/*	78	*/	Rte_COMCbkRxTOut_EPS_S_WarningLampYellow_e5742092	,/*EPS_S_WarningLampYellow*/
	/*	79	*/	Rte_COMCbkRxTOut_EPS_S_SafeLampRed_e5742092	,/*EPS_S_SafeLampRed*/
	/*	80	*/	NULL	,/*Rolling_counter_0x260*/
	/*	81	*/	NULL	,/*Checksum_0x260*/
	/*	82	*/	Rte_COMCbkRxTOut_PAM_objectStsRLM_49f5ddcc	,/*PAM_objectStsRLM*/
	/*	83	*/	Rte_COMCbkRxTOut_PAM_objectStsRLC_49f5ddcc	,/*PAM_objectStsRLC*/
	/*	84	*/	Rte_COMCbkRxTOut_PAM_objectStsRRC_49f5ddcc	,/*PAM_objectStsRRC*/
	/*	85	*/	Rte_COMCbkRxTOut_PAM_objectStsRRM_49f5ddcc	,/*PAM_objectStsRRM*/
	/*	86	*/	Rte_COMCbkRxTOut_PAM_ChimeCmdSoundStatus_49f5ddcc	,/*PAM_ChimeCmdSoundStatus*/
	/*	87	*/	Rte_COMCbkRxTOut_PAM_RearSysTemWorkSts_49f5ddcc	,/*PAM_RearSysTemWorkSts*/
	/*	88	*/	Rte_COMCbkRxTOut_PAM_FrontSysTemWorkSts_49f5ddcc	,/*PAM_FrontSysTemWorkSts*/
	/*	89	*/	Rte_COMCbkRxTOut_PAM_ChimeCmdSoundCadence_49f5ddcc	,/*PAM_ChimeCmdSoundCadence*/
	/*	90	*/	Rte_COMCbkRxTOut_SOD_LCA_warningReqRight_a75280f1	,/*SOD_LCA_warningReqRight*/
	/*	91	*/	Rte_COMCbkRxTOut_SOD_DOA_warningReqRightRear_a75280f1	,/*SOD_DOA_warningReqRightRear*/
	/*	92	*/	Rte_COMCbkRxTOut_SOD_DOA_warningReqRightFront_a75280f1	,/*SOD_DOA_warningReqRightFront*/
	/*	93	*/	Rte_COMCbkRxTOut_SOD_CTA_warningReqRight_a75280f1	,/*SOD_CTA_warningReqRight*/
	/*	94	*/	Rte_COMCbkRxTOut_SOD_BLIS_display_a75280f1	,/*SOD_BLIS_display*/
	/*	95	*/	Rte_COMCbkRxTOut_SOD_LCA_warningReqLeft_a75280f1	,/*SOD_LCA_warningReqLeft*/
	/*	96	*/	Rte_COMCbkRxTOut_SOD_DOA_warningReqLeftRear_a75280f1	,/*SOD_DOA_warningReqLeftRear*/
	/*	97	*/	Rte_COMCbkRxTOut_SOD_DOA_warningReqLeftFront_a75280f1	,/*SOD_DOA_warningReqLeftFront*/
	/*	98	*/	Rte_COMCbkRxTOut_SOD_CTA_warningReqLeft_a75280f1	,/*SOD_CTA_warningReqLeft*/
	/*	99	*/	Rte_COMCbkRxTOut_DOA_OFFTelltale_a75280f1	,/*DOA_OFFTelltale*/
	/*	100	*/	Rte_COMCbkRxTOut_CTA_OFFTelltale_a75280f1	,/*CTA_OFFTelltale*/
	/*	101	*/	Rte_COMCbkRxTOut_SODLCA_OFFTelltale_a75280f1	,/*SODLCA_OFFTelltale*/
	/*	102	*/	NULL	,/*IPM_LedtLine_dx_start*/
	/*	103	*/	NULL	,/*IPM_LeftLine_dy*/
	/*	104	*/	NULL	,/*IPM_LeftLine_dx_lookhead*/
	/*	105	*/	NULL	,/*IPM_LeftLine_hor_curve*/
	/*	106	*/	NULL	,/*IPM_LeftLine_yawangle*/
	/*	107	*/	NULL	,/*LeftLineHorCurvatureAlteration*/
	/*	108	*/	Rte_COMCbkRxTOut_MRR_F_Object_dx_49708b05	,/*MRR_F_Object_dx*/
	/*	109	*/	Rte_COMCbkRxTOut_MRR_F_Object_dy_49708b05	,/*MRR_F_Object_dy*/
	/*	110	*/	Rte_COMCbkRxTOut_MRR_F_Obj_0x_class_49708b05	,/*MRR_F_Obj_0x_class*/
	/*	111	*/	NULL	,/*MRR_FF_Object_dx*/
	/*	112	*/	NULL	,/*MRR_FF_Object_dy*/
	/*	113	*/	NULL	,/*MRR_FF_Obj_0x_class*/
	/*	114	*/	NULL	,/*MRR_FFTargrtDetection*/
	/*	115	*/	NULL	,/*MRR_PedDetection*/
	/*	116	*/	NULL	,/*LaneAssit_LeftLeftVisualization*/
	/*	117	*/	NULL	,/*IPM_LeftLine_Type*/
	/*	118	*/	NULL	,/*IPM_LeftLine_Color*/
	/*	119	*/	NULL	,/*IPM_LeftLeftLine_Type*/
	/*	120	*/	NULL	,/*IPM_LeftLeftLine_Color*/
	/*	121	*/	NULL	,/*IPM_LeftLeftLine_dy*/
	/*	122	*/	NULL	,/*IPM_LeftLeftLine_hor_curve*/
	/*	123	*/	NULL	,/*IPM_LeftLeftLine_yawangle*/
	/*	124	*/	NULL	,/*LeftLeftLineCurvatureAlteration*/
	/*	125	*/	Rte_COMCbkRxTOut_BCM_DoorStsRearRi_0edb943f	,/*BCM_DoorStsRearRi*/
	/*	126	*/	Rte_COMCbkRxTOut_BCM_DoorStsRearLe_0edb943f	,/*BCM_DoorStsRearLe*/
	/*	127	*/	Rte_COMCbkRxTOut_BCM_DoorStsFrntRi_0edb943f	,/*BCM_DoorStsFrntRi*/
	/*	128	*/	Rte_COMCbkRxTOut_BCM_DoorStsFrntLe_0edb943f	,/*BCM_DoorStsFrntLe*/
	/*	129	*/	NULL	,/*BCM_DoorLockStsRearRi*/
	/*	130	*/	NULL	,/*BCM_DoorLockStsRearLe*/
	/*	131	*/	NULL	,/*BCM_DoorLockStsFrntRi*/
	/*	132	*/	NULL	,/*BCM_DoorLockStsFrntLe*/
	/*	133	*/	NULL	,/*BCM_AntiTheftSts*/
	/*	134	*/	NULL	,/*BCM_LockUnlockFeedback*/
	/*	135	*/	NULL	,/*BCM_DoorLockStsTrunk*/
	/*	136	*/	Rte_COMCbkRxTOut_BCM_DoorStsTrunk_0edb943f	,/*BCM_DoorStsTrunk*/
	/*	137	*/	NULL	,/*BCM_TrunkDoorPreUnlockSts*/
	/*	138	*/	NULL	,/*BCM_FrontWiperSts*/
	/*	139	*/	Rte_COMCbkRxTOut_BCM_EnginehoodSts_0edb943f	,/*BCM_EnginehoodSts*/
	/*	140	*/	NULL	,/*BCM_Rolling_counter_0x310*/
	/*	141	*/	Rte_COMCbkRxTOut_BCM_Reverse_gear_0edb943f	,/*BCM_Reverse_gear*/
	/*	142	*/	Rte_COMCbkRxTOut_BCM_TurnIndicatorSts_0edb943f	,/*BCM_TurnIndicatorSts*/
	/*	143	*/	NULL	,/*BCM_Checksum_0x310*/
	/*	144	*/	NULL	,/*BCM_OutsideTempDig*/
	/*	145	*/	Rte_COMCbkRxTOut_BCM_Mechanical_Hand_Brake_abc8cd44	,/*BCM_Mechanical_Hand_Brake*/
	/*	146	*/	Rte_COMCbkRxTOut_BCM_BrakeFluidSts_abc8cd44	,/*BCM_BrakeFluidSts*/
	/*	147	*/	Rte_COMCbkRxTOut_BCM_OutsideTemp_abc8cd44	,/*BCM_OutsideTemp*/
	/*	148	*/	NULL	,/*BCM_Start_Switch*/
	/*	149	*/	NULL	,/*BCM_SS_EnableSts*/
	/*	150	*/	NULL	,/*BCM_PowerModeInvalid*/
	/*	151	*/	NULL	,/*BCM_PowerMode*/
	/*	152	*/	NULL	,/*BCM_Rollingcounter_0x313*/
	/*	153	*/	NULL	,/*BCM_Checksum_0x313*/
	/*	154	*/	Rte_COMCbkRxTOut_BCM_BGLLumLvlSettingStatus_a1dcf71c	,/*BCM_BGLLumLvlSettingStatus*/
	/*	155	*/	Rte_COMCbkRxTOut_BCM_FrntFogLmpSts_52444383	,/*BCM_FrntFogLmpSts*/
	/*	156	*/	Rte_COMCbkRxTOut_BCM_PosLmpSts_52444383	,/*BCM_PosLmpSts*/
	/*	157	*/	Rte_COMCbkRxTOut_BCM_LowBeamSts_52444383	,/*BCM_LowBeamSts*/
	/*	158	*/	Rte_COMCbkRxTOut_BCM_HighBeamSts_52444383	,/*BCM_HighBeamSts*/
	/*	159	*/	NULL	,/*BCM_reversinglightSts*/
	/*	160	*/	NULL	,/*BCM_DayRunningLampSts*/
	/*	161	*/	Rte_COMCbkRxTOut_BCM_PosLmpIndicator_52444383	,/*BCM_PosLmpIndicator*/
	/*	162	*/	Rte_COMCbkRxTOut_BCM_RearFogLmpSts_52444383	,/*BCM_RearFogLmpSts*/
	/*	163	*/	NULL	,/*BCM_laserlightSts*/
	/*	164	*/	NULL	,/*BCM_AmbientLightSts*/
	/*	165	*/	NULL	,/*BCM_Highmountedstoplamp*/
	/*	166	*/	NULL	,/*BCM_BrakelightSts*/
	/*	167	*/	NULL	,/*BCM_WelcomeSts*/
	/*	168	*/	Rte_COMCbkRxTOut_BCM_BackHomeSts_52444383	,/*BCM_BackHomeSts*/
	/*	169	*/	NULL	,/*BCM_AutolampSts*/
	/*	170	*/	NULL	,/*BCM_readinglampSts*/
	/*	171	*/	Rte_COMCbkRxTOut_BCM_DayRunningLampDig_52444383	,/*BCM_DayRunningLampDig*/
	/*	172	*/	Rte_COMCbkRxTOut_BCM_BrakelightDig_52444383	,/*BCM_BrakelightDig*/
	/*	173	*/	Rte_COMCbkRxTOut_BCM_reversinglightDig_52444383	,/*BCM_reversinglightDig*/
	/*	174	*/	Rte_COMCbkRxTOut_BCM_TurnIndicatorDig_52444383	,/*BCM_TurnIndicatorDig*/
	/*	175	*/	Rte_COMCbkRxTOut_BCM_RearFogLmpDig_52444383	,/*BCM_RearFogLmpDig*/
	/*	176	*/	Rte_COMCbkRxTOut_BCM_FrntFogLmpDig_52444383	,/*BCM_FrntFogLmpDig*/
	/*	177	*/	Rte_COMCbkRxTOut_BCM_PosLmpDig_52444383	,/*BCM_PosLmpDig*/
	/*	178	*/	Rte_COMCbkRxTOut_BCM_LowBeamDig_52444383	,/*BCM_LowBeamDig*/
	/*	179	*/	NULL	,/*BCM_Rollingcounter_0x318*/
	/*	180	*/	NULL	,/*BCM_Checksum_0x318*/
	/*	181	*/	Rte_COMCbkRxTOut_SWM_Menu_Right_f733f54d	,/*SWM_Menu_Right*/
	/*	182	*/	Rte_COMCbkRxTOut_SWM_Menu_Left_f733f54d	,/*SWM_Menu_Left*/
	/*	183	*/	Rte_COMCbkRxTOut_SWM_Menu_Down_f733f54d	,/*SWM_Menu_Down*/
	/*	184	*/	Rte_COMCbkRxTOut_SWM_Menu_Up_f733f54d	,/*SWM_Menu_Up*/
	/*	185	*/	NULL	,/*Rolling_counter_0x31A*/
	/*	186	*/	Rte_COMCbkRxTOut_SWM_Menu_Return_f733f54d	,/*SWM_Menu_Return*/
	/*	187	*/	Rte_COMCbkRxTOut_SWM_Menu_Confirm_f733f54d	,/*SWM_Menu_Confirm*/
	/*	188	*/	NULL	,/*Checksum_0x31A*/
	/*	189	*/	Rte_COMCbkRxTOut_SWM_ACCtauGapSetPlus_db79ffcb	,/*SWM_ACCtauGapSetPlus*/
	/*	190	*/	Rte_COMCbkRxTOut_SWM_ACCvSetMinus_db79ffcb	,/*SWM_ACCvSetMinus*/
	/*	191	*/	Rte_COMCbkRxTOut_SWM_ACCvSetPlus_db79ffcb	,/*SWM_ACCvSetPlus*/
	/*	192	*/	Rte_COMCbkRxTOut_SWM_ACCResume_db79ffcb	,/*SWM_ACCResume*/
	/*	193	*/	Rte_COMCbkRxTOut_SWM_ACCSet_db79ffcb	,/*SWM_ACCSet*/
	/*	194	*/	Rte_COMCbkRxTOut_SWM_ACCEnableSwitch_db79ffcb	,/*SWM_ACCEnableSwitch*/
	/*	195	*/	Rte_COMCbkRxTOut_SWM_LaneAssistSwitch_db79ffcb	,/*SWM_LaneAssistSwitch*/
	/*	196	*/	Rte_COMCbkRxTOut_SWM_ACCtauGapSetMinus_db79ffcb	,/*SWM_ACCtauGapSetMinus*/
	/*	197	*/	NULL	,/*PEPS_PowerModeInvalid*/
	/*	198	*/	Rte_COMCbkRxTOut_PEPS_PowerMode_9b45c0e5	,/*PEPS_PowerMode*/
	/*	199	*/	Rte_COMCbkRxTOut_PEPS_IMMO_MatchStatus_9b45c0e5	,/*PEPS_IMMO_MatchStatus*/
	/*	200	*/	Rte_COMCbkRxTOut_PEPS_SystemFailStatus_9b45c0e5	,/*PEPS_SystemFailStatus*/
	/*	201	*/	Rte_COMCbkRxTOut_PEPS_ESCL_FailStatus_9b45c0e5	,/*PEPS_ESCL_FailStatus*/
	/*	202	*/	Rte_COMCbkRxTOut_PEPS_SSB_FailStatus_9b45c0e5	,/*PEPS_SSB_FailStatus*/
	/*	203	*/	Rte_COMCbkRxTOut_PEPS_BrakeIndicationWarning_9b45c0e5	,/*PEPS_BrakeIndicationWarning*/
	/*	204	*/	Rte_COMCbkRxTOut_PEPS_NotPNWarning_9b45c0e5	,/*PEPS_NotPNWarning*/
	/*	205	*/	Rte_COMCbkRxTOut_PEPS_NotNWarning_9b45c0e5	,/*PEPS_NotNWarning*/
	/*	206	*/	Rte_COMCbkRxTOut_PEPS_DoorOpenNotOFFWarning_9b45c0e5	,/*PEPS_DoorOpenNotOFFWarning*/
	/*	207	*/	Rte_COMCbkRxTOut_PEPS_DoorOpenWarning_9b45c0e5	,/*PEPS_DoorOpenWarning*/
	/*	208	*/	Rte_COMCbkRxTOut_PEPS_KeyBatteryWarning_9b45c0e5	,/*PEPS_KeyBatteryWarning*/
	/*	209	*/	Rte_COMCbkRxTOut_PEPS_KeyOutWarning1_9b45c0e5	,/*PEPS_KeyOutWarning1*/
	/*	210	*/	Rte_COMCbkRxTOut_PEPS_NoKeyFoundWarning_9b45c0e5	,/*PEPS_NoKeyFoundWarning*/
	/*	211	*/	Rte_COMCbkRxTOut_PEPS_KeyReminderWarning_9b45c0e5	,/*PEPS_KeyReminderWarning*/
	/*	212	*/	Rte_COMCbkRxTOut_PEPS_RemainingNumSts_9b45c0e5	,/*PEPS_RemainingNumSts*/
	/*	213	*/	Rte_COMCbkRxTOut_TPMS_LF_Pressure_c030f382	,/*TPMS_LF_Pressure*/
	/*	214	*/	Rte_COMCbkRxTOut_TPMS_RF_Pressure_c030f382	,/*TPMS_RF_Pressure*/
	/*	215	*/	Rte_COMCbkRxTOut_TPMS_RR_Pressure_c030f382	,/*TPMS_RR_Pressure*/
	/*	216	*/	Rte_COMCbkRxTOut_TPMS_LR_Pressure_c030f382	,/*TPMS_LR_Pressure*/
	/*	217	*/	Rte_COMCbkRxTOut_TPMS_Tire_Temperature_c030f382	,/*TPMS_Tire_Temperature*/
	/*	218	*/	Rte_COMCbkRxTOut_TPMS_LF_Pressure_Warning_c030f382	,/*TPMS_LF_Pressure_Warning*/
	/*	219	*/	Rte_COMCbkRxTOut_TPMS_RF_Pressure_Warning_c030f382	,/*TPMS_RF_Pressure_Warning*/
	/*	220	*/	Rte_COMCbkRxTOut_TPMS_System_Status_c030f382	,/*TPMS_System_Status*/
	/*	221	*/	Rte_COMCbkRxTOut_TPMS_RR_Pressure_Warning_c030f382	,/*TPMS_RR_Pressure_Warning*/
	/*	222	*/	Rte_COMCbkRxTOut_TPMS_LR_Pressure_Warning_c030f382	,/*TPMS_LR_Pressure_Warning*/
	/*	223	*/	Rte_COMCbkRxTOut_TPMS_Temperature_Warning_c030f382	,/*TPMS_Temperature_Warning*/
	/*	224	*/	NULL	,/*TPMS_resrved*/
	/*	225	*/	Rte_COMCbkRxTOut_Tire_Position_c030f382	,/*Tire_Position*/
	/*	226	*/	Rte_COMCbkRxTOut_TPMS_Lamp_Status_c030f382	,/*TPMS_Lamp_Status*/
	/*	227	*/	NULL	,/*TPMS_AL_State*/
	/*	228	*/	Rte_COMCbkRxTOut_RRI_Pressure_4ebff461	,/*RRI_Pressure*/
	/*	229	*/	Rte_COMCbkRxTOut_LRI_Pressure_4ebff461	,/*LRI_Pressure*/
	/*	230	*/	Rte_COMCbkRxTOut_RRI_Pressure_Warning_4ebff461	,/*RRI_Pressure_Warning*/
	/*	231	*/	Rte_COMCbkRxTOut_LRI_Pressure_Warning_4ebff461	,/*LRI_Pressure_Warning*/
	/*	232	*/	NULL	,/*EMS_EngCoolanTemp*/
	/*	233	*/	NULL	,/*EMS_BatterVoltage*/
	/*	234	*/	NULL	,/*EMS_BatteryVoltageError*/
	/*	235	*/	Rte_COMCbkRxTOut_EMS_Fuelcounter_daed4b4e	,/*EMS_Fuelcounter*/
	/*	236	*/	Rte_COMCbkRxTOut_EMS_FuelconsumptionInst_daed4b4e	,/*EMS_FuelconsumptionInst*/
	/*	237	*/	Rte_COMCbkRxTOut_EMS_RemindShiftGear_MT_daed4b4e	,/*EMS_RemindShiftGear_MT*/
	/*	238	*/	Rte_COMCbkRxTOut_EMS_MIL_daed4b4e	,/*EMS_MIL*/
	/*	239	*/	Rte_COMCbkRxTOut_EMS_SVS_daed4b4e	,/*EMS_SVS*/
	/*	240	*/	Rte_COMCbkRxTOut_EMS_StartStopStatus_daed4b4e	,/*EMS_StartStopStatus*/
	/*	241	*/	Rte_COMCbkRxTOut_EMS_ExhaustbrakeSts_daed4b4e	,/*EMS_ExhaustbrakeSts*/
	/*	242	*/	Rte_COMCbkRxTOut_EMS_SpeedLimtHour_daa19a1a	,/*EMS_SpeedLimtHour*/
	/*	243	*/	Rte_COMCbkRxTOut_EMS_UreaTxt_daa19a1a	,/*EMS_UreaTxt*/
	/*	244	*/	Rte_COMCbkRxTOut_EMS_SpeedLimtMin_daa19a1a	,/*EMS_SpeedLimtMin*/
	/*	245	*/	Rte_COMCbkRxTOut_EMS_UreaLvl_daa19a1a	,/*EMS_UreaLvl*/
	/*	246	*/	Rte_COMCbkRxTOut_EMS_ManRgenTxt_D_daa19a1a	,/*EMS_ManRgenTxt_D*/
	/*	247	*/	Rte_COMCbkRxTOut_DCM_GlowPlugLmpReq_daa19a1a	,/*DCM_GlowPlugLmpReq*/
	/*	248	*/	Rte_COMCbkRxTOut_DCM_WIFFullLmpReq_daa19a1a	,/*DCM_WIFFullLmpReq*/
	/*	249	*/	Rte_COMCbkRxTOut_EMS_TroqLimtHour_daa19a1a	,/*EMS_TroqLimtHour*/
	/*	250	*/	Rte_COMCbkRxTOut_EMS_TroqLimtMin_daa19a1a	,/*EMS_TroqLimtMin*/
	/*	251	*/	Rte_COMCbkRxTOut_EMS_UreaQty_daa19a1a	,/*EMS_UreaQty*/
	/*	252	*/	Rte_COMCbkRxTOut_EMS_OBDTxt_daa19a1a	,/*EMS_OBDTxt*/
	/*	253	*/	Rte_COMCbkRxTOut_EMS_ManRgenTxt_D_RqDsply_daa19a1a	,/*EMS_ManRgenTxt_D_RqDsply*/
	/*	254	*/	Rte_COMCbkRxTOut_EMS_UreaWarn_daa19a1a	,/*EMS_UreaWarn*/
	/*	255	*/	Rte_COMCbkRxTOut_EMS_Soot_Pc_Dsply_daa19a1a	,/*EMS_Soot_Pc_Dsply*/
	/*	256	*/	NULL	,/*MP5_AudioStatus*/
	/*	257	*/	NULL	,/*MP5_EnergyFlow*/
	/*	258	*/	NULL	,/*MP5_SetMultiButton*/
	/*	259	*/	Rte_COMCbkRxTOut_MP5_BSDSoundSwitchSts_c90244fe	,/*MP5_BSDSoundSwitchSts*/
	/*	260	*/	Rte_COMCbkRxTOut_MP5_NavStatus_c90244fe	,/*MP5_NavStatus*/
	/*	261	*/	Rte_COMCbkRxTOut_MP5_NavICON_0f6d4d79	,/*MP5_NavICON*/
	/*	262	*/	Rte_COMCbkRxTOut_MP5_ROUTE_REMAIN_DIS_0f6d4d79	,/*MP5_ROUTE_REMAIN_DIS*/
	/*	263	*/	NULL	,/*MP5_ALModeSetting*/
	/*	264	*/	NULL	,/*MP5_ALStartAroundSetting*/
	/*	265	*/	Rte_COMCbkRxTOut_TrnSrvcRqd_B_Rq_94ca6b54	,/*TrnSrvcRqd_B_Rq*/
	/*	266	*/	Rte_COMCbkRxTOut_TCU_GearPFault_94ca6b54	,/*TCU_GearPFault*/
	/*	267	*/	Rte_COMCbkRxTOut_TCU_WarningMessage_94ca6b54	,/*TCU_WarningMessage*/
	/*	268	*/	Rte_COMCbkRxTOut_TCU_DrvShiftAllwCondRmd_94ca6b54	,/*TCU_DrvShiftAllwCondRmd*/
	/*	269	*/	NULL	,/*MRR_L_Object_dx*/
	/*	270	*/	NULL	,/*MRR_L_Object_dy*/
	/*	271	*/	NULL	,/*MRR_L_Obj_0x_class*/
	/*	272	*/	NULL	,/*MRR_R_Object_dx*/
	/*	273	*/	NULL	,/*MRR_R_Object_dy*/
	/*	274	*/	NULL	,/*MRR_R_Obj_0x_class*/
	/*	275	*/	NULL	,/*MRR_LeftTargrtDetection*/
	/*	276	*/	NULL	,/*MRR_RightTargrtDetection*/
	/*	277	*/	NULL	,/*IPM_RightLine_dx_start*/
	/*	278	*/	NULL	,/*IPM_RightLine_dy*/
	/*	279	*/	NULL	,/*IPM_RightLine_dx_lookhead*/
	/*	280	*/	NULL	,/*IPM_RightLine_hor_curve*/
	/*	281	*/	NULL	,/*IPM_RightLine_yawangle*/
	/*	282	*/	NULL	,/*RightLineHorCurvatureAlteration*/
	/*	283	*/	NULL	,/*LaneAssitRightRightVisualization*/
	/*	284	*/	NULL	,/*IPM_RightLine_Type*/
	/*	285	*/	NULL	,/*IPM_RightLine_Color*/
	/*	286	*/	NULL	,/*IPM_RightRighLine_Type*/
	/*	287	*/	NULL	,/*IPM_RighRightLine_Color*/
	/*	288	*/	NULL	,/*IPM_RightRightLine_dy*/
	/*	289	*/	NULL	,/*IPM_RightRightLine_hor_curve*/
	/*	290	*/	NULL	,/*IPM_RightRightLine_yawangle*/
	/*	291	*/	NULL	,/*RightLineCurvatureAlteration2*/
	/*	292	*/	NULL	,/*DMS_System_Status*/
	/*	293	*/	NULL	,/*DMS_DriverPitch*/
	/*	294	*/	NULL	,/*DMS_DriverYaw*/
	/*	295	*/	NULL	,/*DMS_DriverWatchRegion*/
	/*	296	*/	NULL	,/*DMS_DriverAttentionState*/
	/*	297	*/	NULL	,/*DMS_DriverDrowsinessState*/
	/*	298	*/	NULL	,/*DMS_IRSensorState*/
	/*	299	*/	NULL	,/*DMS_DriverActionState*/
	/*	300	*/	NULL	,/*RollingCounter_0x4A0*/
	/*	301	*/	NULL	,/*Checksum_0x4A0*/
	/*	302	*/	Rte_COMCbkRxTOut_MP5_ICMenuShift_Button_046cad19	,/*MP5_ICMenuShift_Button*/
	/*	303	*/	Rte_COMCbkRxTOut_MP5_ICMenuActive_Button_046cad19	,/*MP5_ICMenuActive_Button*/
	/*	304	*/	Rte_COMCbkRxTOut_MP5_AlarmStatus_046cad19	,/*MP5_AlarmStatus*/
	/*	305	*/	Rte_COMCbkRxTOut_MP5_AlarmOrNot_046cad19	,/*MP5_AlarmOrNot*/
	/*	306	*/	Rte_COMCbkRxTOut_MP5_ICMenu_Cmd_34a683c9	,/*MP5_ICMenu_Cmd*/
	/*	307	*/	Rte_COMCbkRxTOut_TBOX_Year_4e88e95a	,/*TBOX_Year*/
	/*	308	*/	Rte_COMCbkRxTOut_TBOX_Month_4e88e95a	,/*TBOX_Month*/
	/*	309	*/	Rte_COMCbkRxTOut_TBOX_Date_4e88e95a	,/*TBOX_Date*/
	/*	310	*/	Rte_COMCbkRxTOut_TBOX_Hour_4e88e95a	,/*TBOX_Hour*/
	/*	311	*/	Rte_COMCbkRxTOut_TBOX_Minute_4e88e95a	,/*TBOX_Minute*/
	/*	312	*/	Rte_COMCbkRxTOut_TBOX_Second_4e88e95a	,/*TBOX_Second*/
	/*	313	*/	Rte_COMCbkRxTOut_TBOX_ReTime_4e88e95a	,/*TBOX_ReTime*/
	/*	314	*/	Rte_COMCbkRxTOut_BCM_LoadManageLevel_00b00241	,/*BCM_LoadManageLevel*/
	/*	315	*/	Rte_COMCbkRxTOut_BCM_CarModeIndicator_00b00241	,/*BCM_CarModeIndicator*/
	/*	316	*/	Rte_COMCbkRxTOut_BCM_CarMode_00b00241	,/*BCM_CarMode*/
	/*	317	*/	NULL	,/*BCM_RollingCounter_0x584*/
	/*	318	*/	NULL	,/*BCM_Checksum_0x584*/
	/*	319	*/	Rte_COMCbkRxTOut_EMS_BackupOdometer_63950623	,/*EMS_BackupOdometer*/
	/*	320	*/	NULL	,/*EMS_LockManagFeedback*/
	/*	321	*/	NULL	,/*EMS_TBOXOlineFeedback*/
	/*	322	*/	NULL	,/*EMS_PowerFeedback*/
	/*	323	*/	NULL	,/*EMS_SpdLmtFeedback*/
	/*	324	*/	NULL	,/*EMS_TBOXAuthentResult*/
	/*	325	*/	NULL	,/*EMS_RollingCode*/
  };
  #endif


  #if (CCL_RX_INVINDICATION_API == STD_ON)
  /**********************************************************************************************************************
    Ccl_CbkRxInvFuncPtr
  **********************************************************************************************************************/
  /**
    \var    Ccl_CbkRxInvFuncPtr
    \brief  Function pointer table containing configured Rx Indication notifications for signals and signal groups.*/

  CONST(CclCbkInvType, CCL_CONST) Can_Ccl_CbkRxInvFuncPtr[Can_Ccl_Rx_Num_RxInv_Ind] = {
    /* Index    CbkRxAckFuncPtr                        */
    /*     0 */ NULL
  };
  #endif


  /**********************************************************************************************************************
    Can_Ccl_Channel0_RxNotifFuncPtr
  **********************************************************************************************************************/
  CONST(Ccl_RxNotifFuncInfo, CCL_CONST) Can_Ccl_RxNotifFuncPtr[Can_Ccl_Rx_Num_Signals] = {
        /* Index      RxAckIndex          RxToutIndex         RxInvIndex       */
  { /*  0  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_EngSpeed*/
  { /*  1  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_AirCompressorStatus*/
  { /*  2  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_BrkPedalStasus*/
  { /*  3  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_MTIndicateGearForN*/
  { /*  4  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DCM_EMS_RollingCounter_0x108*/
  { /*  5  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DCM_EMS_Checksum_0x108*/
  { /*  6  */    CanCclRxHndlCh0_Power_EMS_EngCoolanTemp_267,  CanCclRxHndlCh0_Power_EMS_EngCoolanTemp_267, CanCclRxHndlCh0_Power_EMS_EngCoolanTemp_267   },/*Power_EMS_EngCoolanTemp*/
  { /*  7  */    CanCclRxHndlCh0_Power_EMS_EngOperationStatus_267,  CanCclRxHndlCh0_Power_EMS_EngOperationStatus_267, CanCclRxHndlCh0_Power_EMS_EngOperationStatus_267   },/*Power_EMS_EngOperationStatus*/
  { /*  8  */    CanCclRxHndlCh0_Power_EMS_BatteryVoltageError_267,  CanCclRxHndlCh0_Power_EMS_BatteryVoltageError_267, CanCclRxHndlCh0_Power_EMS_BatteryVoltageError_267   },/*Power_EMS_BatteryVoltageError*/
  { /*  9  */    CanCclRxHndlCh0_Power_EMS_EngSpeed_267,  CanCclRxHndlCh0_Power_EMS_EngSpeed_267, CanCclRxHndlCh0_Power_EMS_EngSpeed_267   },/*Power_EMS_EngSpeed*/
  { /*  10  */    CanCclRxHndlCh0_TCU_DisplayGear_291,  CanCclRxHndlCh0_TCU_DisplayGear_291, CanCclRxHndlCh0_TCU_DisplayGear_291   },/*TCU_DisplayGear*/
  { /*  11  */    CanCclRxHndlCh0_TCU_GearSelectorReq_291,  CanCclRxHndlCh0_TCU_GearSelectorReq_291, CanCclRxHndlCh0_TCU_GearSelectorReq_291   },/*TCU_GearSelectorReq*/
  { /*  12  */    CanCclRxHndlCh0_TCU_StGearMode_291,  CanCclRxHndlCh0_TCU_StGearMode_291, CanCclRxHndlCh0_TCU_StGearMode_291   },/*TCU_StGearMode*/
  { /*  13  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*TCU_Status_AliveCounter0x123*/
  { /*  14  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*TCU_Status_Checksum0x123*/
  { /*  15  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_EngOperationStatus*/
  { /*  16  */    CanCclRxHndlCh0_EMS_TargCruiseSpeed_337,  CanCclRxHndlCh0_EMS_TargCruiseSpeed_337, CanCclRxHndlCh0_EMS_TargCruiseSpeed_337   },/*EMS_TargCruiseSpeed*/
  { /*  17  */    CanCclRxHndlCh0_EMS_CruiseControlStatus_337,  CanCclRxHndlCh0_EMS_CruiseControlStatus_337, CanCclRxHndlCh0_EMS_CruiseControlStatus_337   },/*EMS_CruiseControlStatus*/
  { /*  18  */    CanCclRxHndlCh0_PEPS_Remotestartstatus_421,  CanCclRxHndlCh0_PEPS_Remotestartstatus_421, CanCclRxHndlCh0_PEPS_Remotestartstatus_421   },/*PEPS_Remotestartstatus*/
  { /*  19  */    CanCclRxHndlCh0_ABS_WhlMilgFrntLe_545,  CanCclRxHndlCh0_ABS_WhlMilgFrntLe_545, CanCclRxHndlCh0_ABS_WhlMilgFrntLe_545   },/*ABS_WhlMilgFrntLe*/
  { /*  20  */    CanCclRxHndlCh0_ABS_WhlMilgFrntRi_545,  CanCclRxHndlCh0_ABS_WhlMilgFrntRi_545, CanCclRxHndlCh0_ABS_WhlMilgFrntRi_545   },/*ABS_WhlMilgFrntRi*/
  { /*  21  */    CanCclRxHndlCh0_ABS_VehSpdLgt_545,  CanCclRxHndlCh0_ABS_VehSpdLgt_545, CanCclRxHndlCh0_ABS_VehSpdLgt_545   },/*ABS_VehSpdLgt*/
  { /*  22  */    CanCclRxHndlCh0_ABS_EbdFlgFlt_545,  CanCclRxHndlCh0_ABS_EbdFlgFlt_545, CanCclRxHndlCh0_ABS_EbdFlgFlt_545   },/*ABS_EbdFlgFlt*/
  { /*  23  */    CanCclRxHndlCh0_ABS_AbsFlgFlt_545,  CanCclRxHndlCh0_ABS_AbsFlgFlt_545, CanCclRxHndlCh0_ABS_AbsFlgFlt_545   },/*ABS_AbsFlgFlt*/
  { /*  24  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ABS_RollingCounter_0x221*/
  { /*  25  */    CanCclRxHndlCh0_ABS_WhlMilgFrntLeStatus_545,  CanCclRxHndlCh0_ABS_WhlMilgFrntLeStatus_545, CanCclRxHndlCh0_ABS_WhlMilgFrntLeStatus_545   },/*ABS_WhlMilgFrntLeStatus*/
  { /*  26  */    CanCclRxHndlCh0_ABS_WhlMilgFrntRiStatus_545,  CanCclRxHndlCh0_ABS_WhlMilgFrntRiStatus_545, CanCclRxHndlCh0_ABS_WhlMilgFrntRiStatus_545   },/*ABS_WhlMilgFrntRiStatus*/
  { /*  27  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ABS_Checksum_0x221*/
  { /*  28  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ESP_HHCAvailable*/
  { /*  29  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ABS_HAZActive*/
  { /*  30  */    CanCclRxHndlCh0_ESP_EPBStatus_579,  CanCclRxHndlCh0_ESP_EPBStatus_579, CanCclRxHndlCh0_ESP_EPBStatus_579   },/*ESP_EPBStatus*/
  { /*  31  */    CanCclRxHndlCh0_ESP_EPBErrorStatus_579,  CanCclRxHndlCh0_ESP_EPBErrorStatus_579, CanCclRxHndlCh0_ESP_EPBErrorStatus_579   },/*ESP_EPBErrorStatus*/
  { /*  32  */    CanCclRxHndlCh0_ESP_HDCAvailable_579,  CanCclRxHndlCh0_ESP_HDCAvailable_579, CanCclRxHndlCh0_ESP_HDCAvailable_579   },/*ESP_HDCAvailable*/
  { /*  33  */    CanCclRxHndlCh0_ESP_HDCActive_579,  CanCclRxHndlCh0_ESP_HDCActive_579, CanCclRxHndlCh0_ESP_HDCActive_579   },/*ESP_HDCActive*/
  { /*  34  */    CanCclRxHndlCh0_ESP_CdpAvailable_579,  CanCclRxHndlCh0_ESP_CdpAvailable_579, CanCclRxHndlCh0_ESP_CdpAvailable_579   },/*ESP_CdpAvailable*/
  { /*  35  */    CanCclRxHndlCh0_ESP_EPBWarningMessage3_579,  CanCclRxHndlCh0_ESP_EPBWarningMessage3_579, CanCclRxHndlCh0_ESP_EPBWarningMessage3_579   },/*ESP_EPBWarningMessage3*/
  { /*  36  */    CanCclRxHndlCh0_ESP_EPBWarningMessage2_579,  CanCclRxHndlCh0_ESP_EPBWarningMessage2_579, CanCclRxHndlCh0_ESP_EPBWarningMessage2_579   },/*ESP_EPBWarningMessage2*/
  { /*  37  */    CanCclRxHndlCh0_ESP_EPBWarningMessage1_579,  CanCclRxHndlCh0_ESP_EPBWarningMessage1_579, CanCclRxHndlCh0_ESP_EPBWarningMessage1_579   },/*ESP_EPBWarningMessage1*/
  { /*  38  */    CanCclRxHndlCh0_ESP_AVHWarningMessage_579,  CanCclRxHndlCh0_ESP_AVHWarningMessage_579, CanCclRxHndlCh0_ESP_AVHWarningMessage_579   },/*ESP_AVHWarningMessage*/
  { /*  39  */    CanCclRxHndlCh0_ESP_AvhActive_579,  CanCclRxHndlCh0_ESP_AvhActive_579, CanCclRxHndlCh0_ESP_AvhActive_579   },/*ESP_AvhActive*/
  { /*  40  */    CanCclRxHndlCh0_ESP_AvhStandby_579,  CanCclRxHndlCh0_ESP_AvhStandby_579, CanCclRxHndlCh0_ESP_AvhStandby_579   },/*ESP_AvhStandby*/
  { /*  41  */    CanCclRxHndlCh0_ESP_AvhAvabliable_579,  CanCclRxHndlCh0_ESP_AvhAvabliable_579, CanCclRxHndlCh0_ESP_AvhAvabliable_579   },/*ESP_AvhAvabliable*/
  { /*  42  */    CanCclRxHndlCh0_ESP_VdcFlgFlt_579,  CanCclRxHndlCh0_ESP_VdcFlgFlt_579, CanCclRxHndlCh0_ESP_VdcFlgFlt_579   },/*ESP_VdcFlgFlt*/
  { /*  43  */    CanCclRxHndlCh0_ESP_TcsFlgFlt_579,  CanCclRxHndlCh0_ESP_TcsFlgFlt_579, CanCclRxHndlCh0_ESP_TcsFlgFlt_579   },/*ESP_TcsFlgFlt*/
  { /*  44  */    CanCclRxHndlCh0_EBS_TcsFlgFlt_579,  CanCclRxHndlCh0_EBS_TcsFlgFlt_579, CanCclRxHndlCh0_EBS_TcsFlgFlt_579   },/*EBS_TcsFlgFlt*/
  { /*  45  */    CanCclRxHndlCh0_ESP_ESPInfoLamp_579,  CanCclRxHndlCh0_ESP_ESPInfoLamp_579, CanCclRxHndlCh0_ESP_ESPInfoLamp_579   },/*ESP_ESPInfoLamp*/
  { /*  46  */    CanCclRxHndlCh0_ESP_EspEnableSts_579,  CanCclRxHndlCh0_ESP_EspEnableSts_579, CanCclRxHndlCh0_ESP_EspEnableSts_579   },/*ESP_EspEnableSts*/
  { /*  47  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ESP_RollingCounter_0x243*/
  { /*  48  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ESP_Checksum_0x243*/
  { /*  49  */    CanCclRxHndlCh0_IPM_LaneAssitType_581,  CanCclRxHndlCh0_IPM_LaneAssitType_581, CanCclRxHndlCh0_IPM_LaneAssitType_581   },/*IPM_LaneAssitType*/
  { /*  50  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LaneAssit_WarningVibration*/
  { /*  51  */    CanCclRxHndlCh0_IPM_LaneAssit_WarningAudio_581,  CanCclRxHndlCh0_IPM_LaneAssit_WarningAudio_581, CanCclRxHndlCh0_IPM_LaneAssit_WarningAudio_581   },/*IPM_LaneAssit_WarningAudio*/
  { /*  52  */    CanCclRxHndlCh0_IPM_LaneAssit_LeftVisualization_581,  CanCclRxHndlCh0_IPM_LaneAssit_LeftVisualization_581, CanCclRxHndlCh0_IPM_LaneAssit_LeftVisualization_581   },/*IPM_LaneAssit_LeftVisualization*/
  { /*  53  */    CanCclRxHndlCh0_IPM_LaneAssit_RightVisualization_581,  CanCclRxHndlCh0_IPM_LaneAssit_RightVisualization_581, CanCclRxHndlCh0_IPM_LaneAssit_RightVisualization_581   },/*IPM_LaneAssit_RightVisualization*/
  { /*  54  */    CanCclRxHndlCh0_IPM_SLASpdlimitUnits_581,  CanCclRxHndlCh0_IPM_SLASpdlimitUnits_581, CanCclRxHndlCh0_IPM_SLASpdlimitUnits_581   },/*IPM_SLASpdlimitUnits*/
  { /*  55  */    CanCclRxHndlCh0_IPM_SLAState_581,  CanCclRxHndlCh0_IPM_SLAState_581, CanCclRxHndlCh0_IPM_SLAState_581   },/*IPM_SLAState*/
  { /*  56  */    CanCclRxHndlCh0_IPM_LaneAssit_Status_581,  CanCclRxHndlCh0_IPM_LaneAssit_Status_581, CanCclRxHndlCh0_IPM_LaneAssit_Status_581   },/*IPM_LaneAssit_Status*/
  { /*  57  */    CanCclRxHndlCh0_IPM_SLASpdlimit_581,  CanCclRxHndlCh0_IPM_SLASpdlimit_581, CanCclRxHndlCh0_IPM_SLASpdlimit_581   },/*IPM_SLASpdlimit*/
  { /*  58  */    CanCclRxHndlCh0_IPM_IHC_Status_581,  CanCclRxHndlCh0_IPM_IHC_Status_581, CanCclRxHndlCh0_IPM_IHC_Status_581   },/*IPM_IHC_Status*/
  { /*  59  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_DDD_IndexStatus*/
  { /*  60  */    CanCclRxHndlCh0_IPM_TJAICA_Status_581,  CanCclRxHndlCh0_IPM_TJAICA_Status_581, CanCclRxHndlCh0_IPM_TJAICA_Status_581   },/*IPM_TJAICA_Status*/
  { /*  61  */    CanCclRxHndlCh0_IPM_LaneAssit_HandsonReq_581,  CanCclRxHndlCh0_IPM_LaneAssit_HandsonReq_581, CanCclRxHndlCh0_IPM_LaneAssit_HandsonReq_581   },/*IPM_LaneAssit_HandsonReq*/
  { /*  62  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACC_SpdSetValue*/
  { /*  63  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACC_ObjDetected*/
  { /*  64  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACC_TimeGapSet*/
  { /*  65  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACC_TarObjBarDis*/
  { /*  66  */    CanCclRxHndlCh0_ACCHMI_Mode_582,  CanCclRxHndlCh0_ACCHMI_Mode_582, CanCclRxHndlCh0_ACCHMI_Mode_582   },/*ACCHMI_Mode*/
  { /*  67  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACCFailInfo*/
  { /*  68  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACC_TakeOverReq*/
  { /*  69  */    CanCclRxHndlCh0_AEB_STATE_582,  CanCclRxHndlCh0_AEB_STATE_582, CanCclRxHndlCh0_AEB_STATE_582   },/*AEB_STATE*/
  { /*  70  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACC_Startstop_infor*/
  { /*  71  */    CanCclRxHndlCh0_PCW_preWarning_582,  CanCclRxHndlCh0_PCW_preWarning_582, CanCclRxHndlCh0_PCW_preWarning_582   },/*PCW_preWarning*/
  { /*  72  */    CanCclRxHndlCh0_PCW_latentWarning_582,  CanCclRxHndlCh0_PCW_latentWarning_582, CanCclRxHndlCh0_PCW_latentWarning_582   },/*PCW_latentWarning*/
  { /*  73  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Obj_Speed*/
  { /*  74  */    CanCclRxHndlCh0_FCW_STATE_582,  CanCclRxHndlCh0_FCW_STATE_582, CanCclRxHndlCh0_FCW_STATE_582   },/*FCW_STATE*/
  { /*  75  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*ACC_Textinfo*/
  { /*  76  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Rolling_counter_0x246*/
  { /*  77  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Checksum_0x246*/
  { /*  78  */    CanCclRxHndlCh0_EPS_S_WarningLampYellow_608,  CanCclRxHndlCh0_EPS_S_WarningLampYellow_608, CanCclRxHndlCh0_EPS_S_WarningLampYellow_608   },/*EPS_S_WarningLampYellow*/
  { /*  79  */    CanCclRxHndlCh0_EPS_S_SafeLampRed_608,  CanCclRxHndlCh0_EPS_S_SafeLampRed_608, CanCclRxHndlCh0_EPS_S_SafeLampRed_608   },/*EPS_S_SafeLampRed*/
  { /*  80  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Rolling_counter_0x260*/
  { /*  81  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Checksum_0x260*/
  { /*  82  */    CanCclRxHndlCh0_PAM_objectStsRLM_625,  CanCclRxHndlCh0_PAM_objectStsRLM_625, CanCclRxHndlCh0_PAM_objectStsRLM_625   },/*PAM_objectStsRLM*/
  { /*  83  */    CanCclRxHndlCh0_PAM_objectStsRLC_625,  CanCclRxHndlCh0_PAM_objectStsRLC_625, CanCclRxHndlCh0_PAM_objectStsRLC_625   },/*PAM_objectStsRLC*/
  { /*  84  */    CanCclRxHndlCh0_PAM_objectStsRRC_625,  CanCclRxHndlCh0_PAM_objectStsRRC_625, CanCclRxHndlCh0_PAM_objectStsRRC_625   },/*PAM_objectStsRRC*/
  { /*  85  */    CanCclRxHndlCh0_PAM_objectStsRRM_625,  CanCclRxHndlCh0_PAM_objectStsRRM_625, CanCclRxHndlCh0_PAM_objectStsRRM_625   },/*PAM_objectStsRRM*/
  { /*  86  */    CanCclRxHndlCh0_PAM_ChimeCmdSoundStatus_625,  CanCclRxHndlCh0_PAM_ChimeCmdSoundStatus_625, CanCclRxHndlCh0_PAM_ChimeCmdSoundStatus_625   },/*PAM_ChimeCmdSoundStatus*/
  { /*  87  */    CanCclRxHndlCh0_PAM_RearSysTemWorkSts_625,  CanCclRxHndlCh0_PAM_RearSysTemWorkSts_625, CanCclRxHndlCh0_PAM_RearSysTemWorkSts_625   },/*PAM_RearSysTemWorkSts*/
  { /*  88  */    CanCclRxHndlCh0_PAM_FrontSysTemWorkSts_625,  CanCclRxHndlCh0_PAM_FrontSysTemWorkSts_625, CanCclRxHndlCh0_PAM_FrontSysTemWorkSts_625   },/*PAM_FrontSysTemWorkSts*/
  { /*  89  */    CanCclRxHndlCh0_PAM_ChimeCmdSoundCadence_625,  CanCclRxHndlCh0_PAM_ChimeCmdSoundCadence_625, CanCclRxHndlCh0_PAM_ChimeCmdSoundCadence_625   },/*PAM_ChimeCmdSoundCadence*/
  { /*  90  */    CanCclRxHndlCh0_SOD_LCA_warningReqRight_629,  CanCclRxHndlCh0_SOD_LCA_warningReqRight_629, CanCclRxHndlCh0_SOD_LCA_warningReqRight_629   },/*SOD_LCA_warningReqRight*/
  { /*  91  */    CanCclRxHndlCh0_SOD_DOA_warningReqRightRear_629,  CanCclRxHndlCh0_SOD_DOA_warningReqRightRear_629, CanCclRxHndlCh0_SOD_DOA_warningReqRightRear_629   },/*SOD_DOA_warningReqRightRear*/
  { /*  92  */    CanCclRxHndlCh0_SOD_DOA_warningReqRightFront_629,  CanCclRxHndlCh0_SOD_DOA_warningReqRightFront_629, CanCclRxHndlCh0_SOD_DOA_warningReqRightFront_629   },/*SOD_DOA_warningReqRightFront*/
  { /*  93  */    CanCclRxHndlCh0_SOD_CTA_warningReqRight_629,  CanCclRxHndlCh0_SOD_CTA_warningReqRight_629, CanCclRxHndlCh0_SOD_CTA_warningReqRight_629   },/*SOD_CTA_warningReqRight*/
  { /*  94  */    CanCclRxHndlCh0_SOD_BLIS_display_629,  CanCclRxHndlCh0_SOD_BLIS_display_629, CanCclRxHndlCh0_SOD_BLIS_display_629   },/*SOD_BLIS_display*/
  { /*  95  */    CanCclRxHndlCh0_SOD_LCA_warningReqLeft_629,  CanCclRxHndlCh0_SOD_LCA_warningReqLeft_629, CanCclRxHndlCh0_SOD_LCA_warningReqLeft_629   },/*SOD_LCA_warningReqLeft*/
  { /*  96  */    CanCclRxHndlCh0_SOD_DOA_warningReqLeftRear_629,  CanCclRxHndlCh0_SOD_DOA_warningReqLeftRear_629, CanCclRxHndlCh0_SOD_DOA_warningReqLeftRear_629   },/*SOD_DOA_warningReqLeftRear*/
  { /*  97  */    CanCclRxHndlCh0_SOD_DOA_warningReqLeftFront_629,  CanCclRxHndlCh0_SOD_DOA_warningReqLeftFront_629, CanCclRxHndlCh0_SOD_DOA_warningReqLeftFront_629   },/*SOD_DOA_warningReqLeftFront*/
  { /*  98  */    CanCclRxHndlCh0_SOD_CTA_warningReqLeft_629,  CanCclRxHndlCh0_SOD_CTA_warningReqLeft_629, CanCclRxHndlCh0_SOD_CTA_warningReqLeft_629   },/*SOD_CTA_warningReqLeft*/
  { /*  99  */    CanCclRxHndlCh0_DOA_OFFTelltale_629,  CanCclRxHndlCh0_DOA_OFFTelltale_629, CanCclRxHndlCh0_DOA_OFFTelltale_629   },/*DOA_OFFTelltale*/
  { /*  100  */    CanCclRxHndlCh0_CTA_OFFTelltale_629,  CanCclRxHndlCh0_CTA_OFFTelltale_629, CanCclRxHndlCh0_CTA_OFFTelltale_629   },/*CTA_OFFTelltale*/
  { /*  101  */    CanCclRxHndlCh0_SODLCA_OFFTelltale_629,  CanCclRxHndlCh0_SODLCA_OFFTelltale_629, CanCclRxHndlCh0_SODLCA_OFFTelltale_629   },/*SODLCA_OFFTelltale*/
  { /*  102  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LedtLine_dx_start*/
  { /*  103  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLine_dy*/
  { /*  104  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLine_dx_lookhead*/
  { /*  105  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLine_hor_curve*/
  { /*  106  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLine_yawangle*/
  { /*  107  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*LeftLineHorCurvatureAlteration*/
  { /*  108  */    CanCclRxHndlCh0_MRR_F_Object_dx_633,  CanCclRxHndlCh0_MRR_F_Object_dx_633, CanCclRxHndlCh0_MRR_F_Object_dx_633   },/*MRR_F_Object_dx*/
  { /*  109  */    CanCclRxHndlCh0_MRR_F_Object_dy_633,  CanCclRxHndlCh0_MRR_F_Object_dy_633, CanCclRxHndlCh0_MRR_F_Object_dy_633   },/*MRR_F_Object_dy*/
  { /*  110  */    CanCclRxHndlCh0_MRR_F_Obj_0x_class_633,  CanCclRxHndlCh0_MRR_F_Obj_0x_class_633, CanCclRxHndlCh0_MRR_F_Obj_0x_class_633   },/*MRR_F_Obj_0x_class*/
  { /*  111  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_FF_Object_dx*/
  { /*  112  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_FF_Object_dy*/
  { /*  113  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_FF_Obj_0x_class*/
  { /*  114  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_FFTargrtDetection*/
  { /*  115  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_PedDetection*/
  { /*  116  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*LaneAssit_LeftLeftVisualization*/
  { /*  117  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLine_Type*/
  { /*  118  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLine_Color*/
  { /*  119  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLeftLine_Type*/
  { /*  120  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLeftLine_Color*/
  { /*  121  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLeftLine_dy*/
  { /*  122  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLeftLine_hor_curve*/
  { /*  123  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_LeftLeftLine_yawangle*/
  { /*  124  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*LeftLeftLineCurvatureAlteration*/
  { /*  125  */    CanCclRxHndlCh0_BCM_DoorStsRearRi_784,  CanCclRxHndlCh0_BCM_DoorStsRearRi_784, CanCclRxHndlCh0_BCM_DoorStsRearRi_784   },/*BCM_DoorStsRearRi*/
  { /*  126  */    CanCclRxHndlCh0_BCM_DoorStsRearLe_784,  CanCclRxHndlCh0_BCM_DoorStsRearLe_784, CanCclRxHndlCh0_BCM_DoorStsRearLe_784   },/*BCM_DoorStsRearLe*/
  { /*  127  */    CanCclRxHndlCh0_BCM_DoorStsFrntRi_784,  CanCclRxHndlCh0_BCM_DoorStsFrntRi_784, CanCclRxHndlCh0_BCM_DoorStsFrntRi_784   },/*BCM_DoorStsFrntRi*/
  { /*  128  */    CanCclRxHndlCh0_BCM_DoorStsFrntLe_784,  CanCclRxHndlCh0_BCM_DoorStsFrntLe_784, CanCclRxHndlCh0_BCM_DoorStsFrntLe_784   },/*BCM_DoorStsFrntLe*/
  { /*  129  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_DoorLockStsRearRi*/
  { /*  130  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_DoorLockStsRearLe*/
  { /*  131  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_DoorLockStsFrntRi*/
  { /*  132  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_DoorLockStsFrntLe*/
  { /*  133  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_AntiTheftSts*/
  { /*  134  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_LockUnlockFeedback*/
  { /*  135  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_DoorLockStsTrunk*/
  { /*  136  */    CanCclRxHndlCh0_BCM_DoorStsTrunk_784,  CanCclRxHndlCh0_BCM_DoorStsTrunk_784, CanCclRxHndlCh0_BCM_DoorStsTrunk_784   },/*BCM_DoorStsTrunk*/
  { /*  137  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_TrunkDoorPreUnlockSts*/
  { /*  138  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_FrontWiperSts*/
  { /*  139  */    CanCclRxHndlCh0_BCM_EnginehoodSts_784,  CanCclRxHndlCh0_BCM_EnginehoodSts_784, CanCclRxHndlCh0_BCM_EnginehoodSts_784   },/*BCM_EnginehoodSts*/
  { /*  140  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Rolling_counter_0x310*/
  { /*  141  */    CanCclRxHndlCh0_BCM_Reverse_gear_784,  CanCclRxHndlCh0_BCM_Reverse_gear_784, CanCclRxHndlCh0_BCM_Reverse_gear_784   },/*BCM_Reverse_gear*/
  { /*  142  */    CanCclRxHndlCh0_BCM_TurnIndicatorSts_784,  CanCclRxHndlCh0_BCM_TurnIndicatorSts_784, CanCclRxHndlCh0_BCM_TurnIndicatorSts_784   },/*BCM_TurnIndicatorSts*/
  { /*  143  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Checksum_0x310*/
  { /*  144  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_OutsideTempDig*/
  { /*  145  */    CanCclRxHndlCh0_BCM_Mechanical_Hand_Brake_787,  CanCclRxHndlCh0_BCM_Mechanical_Hand_Brake_787, CanCclRxHndlCh0_BCM_Mechanical_Hand_Brake_787   },/*BCM_Mechanical_Hand_Brake*/
  { /*  146  */    CanCclRxHndlCh0_BCM_BrakeFluidSts_787,  CanCclRxHndlCh0_BCM_BrakeFluidSts_787, CanCclRxHndlCh0_BCM_BrakeFluidSts_787   },/*BCM_BrakeFluidSts*/
  { /*  147  */    CanCclRxHndlCh0_BCM_OutsideTemp_787,  CanCclRxHndlCh0_BCM_OutsideTemp_787, CanCclRxHndlCh0_BCM_OutsideTemp_787   },/*BCM_OutsideTemp*/
  { /*  148  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Start_Switch*/
  { /*  149  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_SS_EnableSts*/
  { /*  150  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_PowerModeInvalid*/
  { /*  151  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_PowerMode*/
  { /*  152  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Rollingcounter_0x313*/
  { /*  153  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Checksum_0x313*/
  { /*  154  */    CanCclRxHndlCh0_BCM_BGLLumLvlSettingStatus_789,  CanCclRxHndlCh0_BCM_BGLLumLvlSettingStatus_789, CanCclRxHndlCh0_BCM_BGLLumLvlSettingStatus_789   },/*BCM_BGLLumLvlSettingStatus*/
  { /*  155  */    CanCclRxHndlCh0_BCM_FrntFogLmpSts_792,  CanCclRxHndlCh0_BCM_FrntFogLmpSts_792, CanCclRxHndlCh0_BCM_FrntFogLmpSts_792   },/*BCM_FrntFogLmpSts*/
  { /*  156  */    CanCclRxHndlCh0_BCM_PosLmpSts_792,  CanCclRxHndlCh0_BCM_PosLmpSts_792, CanCclRxHndlCh0_BCM_PosLmpSts_792   },/*BCM_PosLmpSts*/
  { /*  157  */    CanCclRxHndlCh0_BCM_LowBeamSts_792,  CanCclRxHndlCh0_BCM_LowBeamSts_792, CanCclRxHndlCh0_BCM_LowBeamSts_792   },/*BCM_LowBeamSts*/
  { /*  158  */    CanCclRxHndlCh0_BCM_HighBeamSts_792,  CanCclRxHndlCh0_BCM_HighBeamSts_792, CanCclRxHndlCh0_BCM_HighBeamSts_792   },/*BCM_HighBeamSts*/
  { /*  159  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_reversinglightSts*/
  { /*  160  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_DayRunningLampSts*/
  { /*  161  */    CanCclRxHndlCh0_BCM_PosLmpIndicator_792,  CanCclRxHndlCh0_BCM_PosLmpIndicator_792, CanCclRxHndlCh0_BCM_PosLmpIndicator_792   },/*BCM_PosLmpIndicator*/
  { /*  162  */    CanCclRxHndlCh0_BCM_RearFogLmpSts_792,  CanCclRxHndlCh0_BCM_RearFogLmpSts_792, CanCclRxHndlCh0_BCM_RearFogLmpSts_792   },/*BCM_RearFogLmpSts*/
  { /*  163  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_laserlightSts*/
  { /*  164  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_AmbientLightSts*/
  { /*  165  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Highmountedstoplamp*/
  { /*  166  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_BrakelightSts*/
  { /*  167  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_WelcomeSts*/
  { /*  168  */    CanCclRxHndlCh0_BCM_BackHomeSts_792,  CanCclRxHndlCh0_BCM_BackHomeSts_792, CanCclRxHndlCh0_BCM_BackHomeSts_792   },/*BCM_BackHomeSts*/
  { /*  169  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_AutolampSts*/
  { /*  170  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_readinglampSts*/
  { /*  171  */    CanCclRxHndlCh0_BCM_DayRunningLampDig_792,  CanCclRxHndlCh0_BCM_DayRunningLampDig_792, CanCclRxHndlCh0_BCM_DayRunningLampDig_792   },/*BCM_DayRunningLampDig*/
  { /*  172  */    CanCclRxHndlCh0_BCM_BrakelightDig_792,  CanCclRxHndlCh0_BCM_BrakelightDig_792, CanCclRxHndlCh0_BCM_BrakelightDig_792   },/*BCM_BrakelightDig*/
  { /*  173  */    CanCclRxHndlCh0_BCM_reversinglightDig_792,  CanCclRxHndlCh0_BCM_reversinglightDig_792, CanCclRxHndlCh0_BCM_reversinglightDig_792   },/*BCM_reversinglightDig*/
  { /*  174  */    CanCclRxHndlCh0_BCM_TurnIndicatorDig_792,  CanCclRxHndlCh0_BCM_TurnIndicatorDig_792, CanCclRxHndlCh0_BCM_TurnIndicatorDig_792   },/*BCM_TurnIndicatorDig*/
  { /*  175  */    CanCclRxHndlCh0_BCM_RearFogLmpDig_792,  CanCclRxHndlCh0_BCM_RearFogLmpDig_792, CanCclRxHndlCh0_BCM_RearFogLmpDig_792   },/*BCM_RearFogLmpDig*/
  { /*  176  */    CanCclRxHndlCh0_BCM_FrntFogLmpDig_792,  CanCclRxHndlCh0_BCM_FrntFogLmpDig_792, CanCclRxHndlCh0_BCM_FrntFogLmpDig_792   },/*BCM_FrntFogLmpDig*/
  { /*  177  */    CanCclRxHndlCh0_BCM_PosLmpDig_792,  CanCclRxHndlCh0_BCM_PosLmpDig_792, CanCclRxHndlCh0_BCM_PosLmpDig_792   },/*BCM_PosLmpDig*/
  { /*  178  */    CanCclRxHndlCh0_BCM_LowBeamDig_792,  CanCclRxHndlCh0_BCM_LowBeamDig_792, CanCclRxHndlCh0_BCM_LowBeamDig_792   },/*BCM_LowBeamDig*/
  { /*  179  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Rollingcounter_0x318*/
  { /*  180  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Checksum_0x318*/
  { /*  181  */    CanCclRxHndlCh0_SWM_Menu_Right_794,  CanCclRxHndlCh0_SWM_Menu_Right_794, CanCclRxHndlCh0_SWM_Menu_Right_794   },/*SWM_Menu_Right*/
  { /*  182  */    CanCclRxHndlCh0_SWM_Menu_Left_794,  CanCclRxHndlCh0_SWM_Menu_Left_794, CanCclRxHndlCh0_SWM_Menu_Left_794   },/*SWM_Menu_Left*/
  { /*  183  */    CanCclRxHndlCh0_SWM_Menu_Down_794,  CanCclRxHndlCh0_SWM_Menu_Down_794, CanCclRxHndlCh0_SWM_Menu_Down_794   },/*SWM_Menu_Down*/
  { /*  184  */    CanCclRxHndlCh0_SWM_Menu_Up_794,  CanCclRxHndlCh0_SWM_Menu_Up_794, CanCclRxHndlCh0_SWM_Menu_Up_794   },/*SWM_Menu_Up*/
  { /*  185  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Rolling_counter_0x31A*/
  { /*  186  */    CanCclRxHndlCh0_SWM_Menu_Return_794,  CanCclRxHndlCh0_SWM_Menu_Return_794, CanCclRxHndlCh0_SWM_Menu_Return_794   },/*SWM_Menu_Return*/
  { /*  187  */    CanCclRxHndlCh0_SWM_Menu_Confirm_794,  CanCclRxHndlCh0_SWM_Menu_Confirm_794, CanCclRxHndlCh0_SWM_Menu_Confirm_794   },/*SWM_Menu_Confirm*/
  { /*  188  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Checksum_0x31A*/
  { /*  189  */    CanCclRxHndlCh0_SWM_ACCtauGapSetPlus_795,  CanCclRxHndlCh0_SWM_ACCtauGapSetPlus_795, CanCclRxHndlCh0_SWM_ACCtauGapSetPlus_795   },/*SWM_ACCtauGapSetPlus*/
  { /*  190  */    CanCclRxHndlCh0_SWM_ACCvSetMinus_795,  CanCclRxHndlCh0_SWM_ACCvSetMinus_795, CanCclRxHndlCh0_SWM_ACCvSetMinus_795   },/*SWM_ACCvSetMinus*/
  { /*  191  */    CanCclRxHndlCh0_SWM_ACCvSetPlus_795,  CanCclRxHndlCh0_SWM_ACCvSetPlus_795, CanCclRxHndlCh0_SWM_ACCvSetPlus_795   },/*SWM_ACCvSetPlus*/
  { /*  192  */    CanCclRxHndlCh0_SWM_ACCResume_795,  CanCclRxHndlCh0_SWM_ACCResume_795, CanCclRxHndlCh0_SWM_ACCResume_795   },/*SWM_ACCResume*/
  { /*  193  */    CanCclRxHndlCh0_SWM_ACCSet_795,  CanCclRxHndlCh0_SWM_ACCSet_795, CanCclRxHndlCh0_SWM_ACCSet_795   },/*SWM_ACCSet*/
  { /*  194  */    CanCclRxHndlCh0_SWM_ACCEnableSwitch_795,  CanCclRxHndlCh0_SWM_ACCEnableSwitch_795, CanCclRxHndlCh0_SWM_ACCEnableSwitch_795   },/*SWM_ACCEnableSwitch*/
  { /*  195  */    CanCclRxHndlCh0_SWM_LaneAssistSwitch_795,  CanCclRxHndlCh0_SWM_LaneAssistSwitch_795, CanCclRxHndlCh0_SWM_LaneAssistSwitch_795   },/*SWM_LaneAssistSwitch*/
  { /*  196  */    CanCclRxHndlCh0_SWM_ACCtauGapSetMinus_795,  CanCclRxHndlCh0_SWM_ACCtauGapSetMinus_795, CanCclRxHndlCh0_SWM_ACCtauGapSetMinus_795   },/*SWM_ACCtauGapSetMinus*/
  { /*  197  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*PEPS_PowerModeInvalid*/
  { /*  198  */    CanCclRxHndlCh0_PEPS_PowerMode_805,  CanCclRxHndlCh0_PEPS_PowerMode_805, CanCclRxHndlCh0_PEPS_PowerMode_805   },/*PEPS_PowerMode*/
  { /*  199  */    CanCclRxHndlCh0_PEPS_IMMO_MatchStatus_805,  CanCclRxHndlCh0_PEPS_IMMO_MatchStatus_805, CanCclRxHndlCh0_PEPS_IMMO_MatchStatus_805   },/*PEPS_IMMO_MatchStatus*/
  { /*  200  */    CanCclRxHndlCh0_PEPS_SystemFailStatus_805,  CanCclRxHndlCh0_PEPS_SystemFailStatus_805, CanCclRxHndlCh0_PEPS_SystemFailStatus_805   },/*PEPS_SystemFailStatus*/
  { /*  201  */    CanCclRxHndlCh0_PEPS_ESCL_FailStatus_805,  CanCclRxHndlCh0_PEPS_ESCL_FailStatus_805, CanCclRxHndlCh0_PEPS_ESCL_FailStatus_805   },/*PEPS_ESCL_FailStatus*/
  { /*  202  */    CanCclRxHndlCh0_PEPS_SSB_FailStatus_805,  CanCclRxHndlCh0_PEPS_SSB_FailStatus_805, CanCclRxHndlCh0_PEPS_SSB_FailStatus_805   },/*PEPS_SSB_FailStatus*/
  { /*  203  */    CanCclRxHndlCh0_PEPS_BrakeIndicationWarning_805,  CanCclRxHndlCh0_PEPS_BrakeIndicationWarning_805, CanCclRxHndlCh0_PEPS_BrakeIndicationWarning_805   },/*PEPS_BrakeIndicationWarning*/
  { /*  204  */    CanCclRxHndlCh0_PEPS_NotPNWarning_805,  CanCclRxHndlCh0_PEPS_NotPNWarning_805, CanCclRxHndlCh0_PEPS_NotPNWarning_805   },/*PEPS_NotPNWarning*/
  { /*  205  */    CanCclRxHndlCh0_PEPS_NotNWarning_805,  CanCclRxHndlCh0_PEPS_NotNWarning_805, CanCclRxHndlCh0_PEPS_NotNWarning_805   },/*PEPS_NotNWarning*/
  { /*  206  */    CanCclRxHndlCh0_PEPS_DoorOpenNotOFFWarning_805,  CanCclRxHndlCh0_PEPS_DoorOpenNotOFFWarning_805, CanCclRxHndlCh0_PEPS_DoorOpenNotOFFWarning_805   },/*PEPS_DoorOpenNotOFFWarning*/
  { /*  207  */    CanCclRxHndlCh0_PEPS_DoorOpenWarning_805,  CanCclRxHndlCh0_PEPS_DoorOpenWarning_805, CanCclRxHndlCh0_PEPS_DoorOpenWarning_805   },/*PEPS_DoorOpenWarning*/
  { /*  208  */    CanCclRxHndlCh0_PEPS_KeyBatteryWarning_805,  CanCclRxHndlCh0_PEPS_KeyBatteryWarning_805, CanCclRxHndlCh0_PEPS_KeyBatteryWarning_805   },/*PEPS_KeyBatteryWarning*/
  { /*  209  */    CanCclRxHndlCh0_PEPS_KeyOutWarning1_805,  CanCclRxHndlCh0_PEPS_KeyOutWarning1_805, CanCclRxHndlCh0_PEPS_KeyOutWarning1_805   },/*PEPS_KeyOutWarning1*/
  { /*  210  */    CanCclRxHndlCh0_PEPS_NoKeyFoundWarning_805,  CanCclRxHndlCh0_PEPS_NoKeyFoundWarning_805, CanCclRxHndlCh0_PEPS_NoKeyFoundWarning_805   },/*PEPS_NoKeyFoundWarning*/
  { /*  211  */    CanCclRxHndlCh0_PEPS_KeyReminderWarning_805,  CanCclRxHndlCh0_PEPS_KeyReminderWarning_805, CanCclRxHndlCh0_PEPS_KeyReminderWarning_805   },/*PEPS_KeyReminderWarning*/
  { /*  212  */    CanCclRxHndlCh0_PEPS_RemainingNumSts_805,  CanCclRxHndlCh0_PEPS_RemainingNumSts_805, CanCclRxHndlCh0_PEPS_RemainingNumSts_805   },/*PEPS_RemainingNumSts*/
  { /*  213  */    CanCclRxHndlCh0_TPMS_LF_Pressure_865,  CanCclRxHndlCh0_TPMS_LF_Pressure_865, CanCclRxHndlCh0_TPMS_LF_Pressure_865   },/*TPMS_LF_Pressure*/
  { /*  214  */    CanCclRxHndlCh0_TPMS_RF_Pressure_865,  CanCclRxHndlCh0_TPMS_RF_Pressure_865, CanCclRxHndlCh0_TPMS_RF_Pressure_865   },/*TPMS_RF_Pressure*/
  { /*  215  */    CanCclRxHndlCh0_TPMS_RR_Pressure_865,  CanCclRxHndlCh0_TPMS_RR_Pressure_865, CanCclRxHndlCh0_TPMS_RR_Pressure_865   },/*TPMS_RR_Pressure*/
  { /*  216  */    CanCclRxHndlCh0_TPMS_LR_Pressure_865,  CanCclRxHndlCh0_TPMS_LR_Pressure_865, CanCclRxHndlCh0_TPMS_LR_Pressure_865   },/*TPMS_LR_Pressure*/
  { /*  217  */    CanCclRxHndlCh0_TPMS_Tire_Temperature_865,  CanCclRxHndlCh0_TPMS_Tire_Temperature_865, CanCclRxHndlCh0_TPMS_Tire_Temperature_865   },/*TPMS_Tire_Temperature*/
  { /*  218  */    CanCclRxHndlCh0_TPMS_LF_Pressure_Warning_865,  CanCclRxHndlCh0_TPMS_LF_Pressure_Warning_865, CanCclRxHndlCh0_TPMS_LF_Pressure_Warning_865   },/*TPMS_LF_Pressure_Warning*/
  { /*  219  */    CanCclRxHndlCh0_TPMS_RF_Pressure_Warning_865,  CanCclRxHndlCh0_TPMS_RF_Pressure_Warning_865, CanCclRxHndlCh0_TPMS_RF_Pressure_Warning_865   },/*TPMS_RF_Pressure_Warning*/
  { /*  220  */    CanCclRxHndlCh0_TPMS_System_Status_865,  CanCclRxHndlCh0_TPMS_System_Status_865, CanCclRxHndlCh0_TPMS_System_Status_865   },/*TPMS_System_Status*/
  { /*  221  */    CanCclRxHndlCh0_TPMS_RR_Pressure_Warning_865,  CanCclRxHndlCh0_TPMS_RR_Pressure_Warning_865, CanCclRxHndlCh0_TPMS_RR_Pressure_Warning_865   },/*TPMS_RR_Pressure_Warning*/
  { /*  222  */    CanCclRxHndlCh0_TPMS_LR_Pressure_Warning_865,  CanCclRxHndlCh0_TPMS_LR_Pressure_Warning_865, CanCclRxHndlCh0_TPMS_LR_Pressure_Warning_865   },/*TPMS_LR_Pressure_Warning*/
  { /*  223  */    CanCclRxHndlCh0_TPMS_Temperature_Warning_865,  CanCclRxHndlCh0_TPMS_Temperature_Warning_865, CanCclRxHndlCh0_TPMS_Temperature_Warning_865   },/*TPMS_Temperature_Warning*/
  { /*  224  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*TPMS_resrved*/
  { /*  225  */    CanCclRxHndlCh0_Tire_Position_865,  CanCclRxHndlCh0_Tire_Position_865, CanCclRxHndlCh0_Tire_Position_865   },/*Tire_Position*/
  { /*  226  */    CanCclRxHndlCh0_TPMS_Lamp_Status_865,  CanCclRxHndlCh0_TPMS_Lamp_Status_865, CanCclRxHndlCh0_TPMS_Lamp_Status_865   },/*TPMS_Lamp_Status*/
  { /*  227  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*TPMS_AL_State*/
  { /*  228  */    CanCclRxHndlCh0_RRI_Pressure_866,  CanCclRxHndlCh0_RRI_Pressure_866, CanCclRxHndlCh0_RRI_Pressure_866   },/*RRI_Pressure*/
  { /*  229  */    CanCclRxHndlCh0_LRI_Pressure_866,  CanCclRxHndlCh0_LRI_Pressure_866, CanCclRxHndlCh0_LRI_Pressure_866   },/*LRI_Pressure*/
  { /*  230  */    CanCclRxHndlCh0_RRI_Pressure_Warning_866,  CanCclRxHndlCh0_RRI_Pressure_Warning_866, CanCclRxHndlCh0_RRI_Pressure_Warning_866   },/*RRI_Pressure_Warning*/
  { /*  231  */    CanCclRxHndlCh0_LRI_Pressure_Warning_866,  CanCclRxHndlCh0_LRI_Pressure_Warning_866, CanCclRxHndlCh0_LRI_Pressure_Warning_866   },/*LRI_Pressure_Warning*/
  { /*  232  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_EngCoolanTemp*/
  { /*  233  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_BatterVoltage*/
  { /*  234  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_BatteryVoltageError*/
  { /*  235  */    CanCclRxHndlCh0_EMS_Fuelcounter_870,  CanCclRxHndlCh0_EMS_Fuelcounter_870, CanCclRxHndlCh0_EMS_Fuelcounter_870   },/*EMS_Fuelcounter*/
  { /*  236  */    CanCclRxHndlCh0_EMS_FuelconsumptionInst_870,  CanCclRxHndlCh0_EMS_FuelconsumptionInst_870, CanCclRxHndlCh0_EMS_FuelconsumptionInst_870   },/*EMS_FuelconsumptionInst*/
  { /*  237  */    CanCclRxHndlCh0_EMS_RemindShiftGear_MT_870,  CanCclRxHndlCh0_EMS_RemindShiftGear_MT_870, CanCclRxHndlCh0_EMS_RemindShiftGear_MT_870   },/*EMS_RemindShiftGear_MT*/
  { /*  238  */    CanCclRxHndlCh0_EMS_MIL_870,  CanCclRxHndlCh0_EMS_MIL_870, CanCclRxHndlCh0_EMS_MIL_870   },/*EMS_MIL*/
  { /*  239  */    CanCclRxHndlCh0_EMS_SVS_870,  CanCclRxHndlCh0_EMS_SVS_870, CanCclRxHndlCh0_EMS_SVS_870   },/*EMS_SVS*/
  { /*  240  */    CanCclRxHndlCh0_EMS_StartStopStatus_870,  CanCclRxHndlCh0_EMS_StartStopStatus_870, CanCclRxHndlCh0_EMS_StartStopStatus_870   },/*EMS_StartStopStatus*/
  { /*  241  */    CanCclRxHndlCh0_EMS_ExhaustbrakeSts_870,  CanCclRxHndlCh0_EMS_ExhaustbrakeSts_870, CanCclRxHndlCh0_EMS_ExhaustbrakeSts_870   },/*EMS_ExhaustbrakeSts*/
  { /*  242  */    CanCclRxHndlCh0_EMS_SpeedLimtHour_872,  CanCclRxHndlCh0_EMS_SpeedLimtHour_872, CanCclRxHndlCh0_EMS_SpeedLimtHour_872   },/*EMS_SpeedLimtHour*/
  { /*  243  */    CanCclRxHndlCh0_EMS_UreaTxt_872,  CanCclRxHndlCh0_EMS_UreaTxt_872, CanCclRxHndlCh0_EMS_UreaTxt_872   },/*EMS_UreaTxt*/
  { /*  244  */    CanCclRxHndlCh0_EMS_SpeedLimtMin_872,  CanCclRxHndlCh0_EMS_SpeedLimtMin_872, CanCclRxHndlCh0_EMS_SpeedLimtMin_872   },/*EMS_SpeedLimtMin*/
  { /*  245  */    CanCclRxHndlCh0_EMS_UreaLvl_872,  CanCclRxHndlCh0_EMS_UreaLvl_872, CanCclRxHndlCh0_EMS_UreaLvl_872   },/*EMS_UreaLvl*/
  { /*  246  */    CanCclRxHndlCh0_EMS_ManRgenTxt_D_872,  CanCclRxHndlCh0_EMS_ManRgenTxt_D_872, CanCclRxHndlCh0_EMS_ManRgenTxt_D_872   },/*EMS_ManRgenTxt_D*/
  { /*  247  */    CanCclRxHndlCh0_DCM_GlowPlugLmpReq_872,  CanCclRxHndlCh0_DCM_GlowPlugLmpReq_872, CanCclRxHndlCh0_DCM_GlowPlugLmpReq_872   },/*DCM_GlowPlugLmpReq*/
  { /*  248  */    CanCclRxHndlCh0_DCM_WIFFullLmpReq_872,  CanCclRxHndlCh0_DCM_WIFFullLmpReq_872, CanCclRxHndlCh0_DCM_WIFFullLmpReq_872   },/*DCM_WIFFullLmpReq*/
  { /*  249  */    CanCclRxHndlCh0_EMS_TroqLimtHour_872,  CanCclRxHndlCh0_EMS_TroqLimtHour_872, CanCclRxHndlCh0_EMS_TroqLimtHour_872   },/*EMS_TroqLimtHour*/
  { /*  250  */    CanCclRxHndlCh0_EMS_TroqLimtMin_872,  CanCclRxHndlCh0_EMS_TroqLimtMin_872, CanCclRxHndlCh0_EMS_TroqLimtMin_872   },/*EMS_TroqLimtMin*/
  { /*  251  */    CanCclRxHndlCh0_EMS_UreaQty_872,  CanCclRxHndlCh0_EMS_UreaQty_872, CanCclRxHndlCh0_EMS_UreaQty_872   },/*EMS_UreaQty*/
  { /*  252  */    CanCclRxHndlCh0_EMS_OBDTxt_872,  CanCclRxHndlCh0_EMS_OBDTxt_872, CanCclRxHndlCh0_EMS_OBDTxt_872   },/*EMS_OBDTxt*/
  { /*  253  */    CanCclRxHndlCh0_EMS_ManRgenTxt_D_RqDsply_872,  CanCclRxHndlCh0_EMS_ManRgenTxt_D_RqDsply_872, CanCclRxHndlCh0_EMS_ManRgenTxt_D_RqDsply_872   },/*EMS_ManRgenTxt_D_RqDsply*/
  { /*  254  */    CanCclRxHndlCh0_EMS_UreaWarn_872,  CanCclRxHndlCh0_EMS_UreaWarn_872, CanCclRxHndlCh0_EMS_UreaWarn_872   },/*EMS_UreaWarn*/
  { /*  255  */    CanCclRxHndlCh0_EMS_Soot_Pc_Dsply_872,  CanCclRxHndlCh0_EMS_Soot_Pc_Dsply_872, CanCclRxHndlCh0_EMS_Soot_Pc_Dsply_872   },/*EMS_Soot_Pc_Dsply*/
  { /*  256  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MP5_AudioStatus*/
  { /*  257  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MP5_EnergyFlow*/
  { /*  258  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MP5_SetMultiButton*/
  { /*  259  */    CanCclRxHndlCh0_MP5_BSDSoundSwitchSts_898,  CanCclRxHndlCh0_MP5_BSDSoundSwitchSts_898, CanCclRxHndlCh0_MP5_BSDSoundSwitchSts_898   },/*MP5_BSDSoundSwitchSts*/
  { /*  260  */    CanCclRxHndlCh0_MP5_NavStatus_898,  CanCclRxHndlCh0_MP5_NavStatus_898, CanCclRxHndlCh0_MP5_NavStatus_898   },/*MP5_NavStatus*/
  { /*  261  */    CanCclRxHndlCh0_MP5_NavICON_900,  CanCclRxHndlCh0_MP5_NavICON_900, CanCclRxHndlCh0_MP5_NavICON_900   },/*MP5_NavICON*/
  { /*  262  */    CanCclRxHndlCh0_MP5_ROUTE_REMAIN_DIS_900,  CanCclRxHndlCh0_MP5_ROUTE_REMAIN_DIS_900, CanCclRxHndlCh0_MP5_ROUTE_REMAIN_DIS_900   },/*MP5_ROUTE_REMAIN_DIS*/
  { /*  263  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MP5_ALModeSetting*/
  { /*  264  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MP5_ALStartAroundSetting*/
  { /*  265  */    CanCclRxHndlCh0_TrnSrvcRqd_B_Rq_917,  CanCclRxHndlCh0_TrnSrvcRqd_B_Rq_917, CanCclRxHndlCh0_TrnSrvcRqd_B_Rq_917   },/*TrnSrvcRqd_B_Rq*/
  { /*  266  */    CanCclRxHndlCh0_TCU_GearPFault_917,  CanCclRxHndlCh0_TCU_GearPFault_917, CanCclRxHndlCh0_TCU_GearPFault_917   },/*TCU_GearPFault*/
  { /*  267  */    CanCclRxHndlCh0_TCU_WarningMessage_917,  CanCclRxHndlCh0_TCU_WarningMessage_917, CanCclRxHndlCh0_TCU_WarningMessage_917   },/*TCU_WarningMessage*/
  { /*  268  */    CanCclRxHndlCh0_TCU_DrvShiftAllwCondRmd_917,  CanCclRxHndlCh0_TCU_DrvShiftAllwCondRmd_917, CanCclRxHndlCh0_TCU_DrvShiftAllwCondRmd_917   },/*TCU_DrvShiftAllwCondRmd*/
  { /*  269  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_L_Object_dx*/
  { /*  270  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_L_Object_dy*/
  { /*  271  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_L_Obj_0x_class*/
  { /*  272  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_R_Object_dx*/
  { /*  273  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_R_Object_dy*/
  { /*  274  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_R_Obj_0x_class*/
  { /*  275  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_LeftTargrtDetection*/
  { /*  276  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*MRR_RightTargrtDetection*/
  { /*  277  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightLine_dx_start*/
  { /*  278  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightLine_dy*/
  { /*  279  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightLine_dx_lookhead*/
  { /*  280  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightLine_hor_curve*/
  { /*  281  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightLine_yawangle*/
  { /*  282  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*RightLineHorCurvatureAlteration*/
  { /*  283  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*LaneAssitRightRightVisualization*/
  { /*  284  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightLine_Type*/
  { /*  285  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightLine_Color*/
  { /*  286  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightRighLine_Type*/
  { /*  287  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RighRightLine_Color*/
  { /*  288  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightRightLine_dy*/
  { /*  289  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightRightLine_hor_curve*/
  { /*  290  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*IPM_RightRightLine_yawangle*/
  { /*  291  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*RightLineCurvatureAlteration2*/
  { /*  292  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_System_Status*/
  { /*  293  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_DriverPitch*/
  { /*  294  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_DriverYaw*/
  { /*  295  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_DriverWatchRegion*/
  { /*  296  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_DriverAttentionState*/
  { /*  297  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_DriverDrowsinessState*/
  { /*  298  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_IRSensorState*/
  { /*  299  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*DMS_DriverActionState*/
  { /*  300  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*RollingCounter_0x4A0*/
  { /*  301  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*Checksum_0x4A0*/
  { /*  302  */    CanCclRxHndlCh0_MP5_ICMenuShift_Button_1328,  CanCclRxHndlCh0_MP5_ICMenuShift_Button_1328, CanCclRxHndlCh0_MP5_ICMenuShift_Button_1328   },/*MP5_ICMenuShift_Button*/
  { /*  303  */    CanCclRxHndlCh0_MP5_ICMenuActive_Button_1328,  CanCclRxHndlCh0_MP5_ICMenuActive_Button_1328, CanCclRxHndlCh0_MP5_ICMenuActive_Button_1328   },/*MP5_ICMenuActive_Button*/
  { /*  304  */    CanCclRxHndlCh0_MP5_AlarmStatus_1328,  CanCclRxHndlCh0_MP5_AlarmStatus_1328, CanCclRxHndlCh0_MP5_AlarmStatus_1328   },/*MP5_AlarmStatus*/
  { /*  305  */    CanCclRxHndlCh0_MP5_AlarmOrNot_1328,  CanCclRxHndlCh0_MP5_AlarmOrNot_1328, CanCclRxHndlCh0_MP5_AlarmOrNot_1328   },/*MP5_AlarmOrNot*/
  { /*  306  */    CanCclRxHndlCh0_MP5_ICMenu_Cmd_1330,  CanCclRxHndlCh0_MP5_ICMenu_Cmd_1330, CanCclRxHndlCh0_MP5_ICMenu_Cmd_1330   },/*MP5_ICMenu_Cmd*/
  { /*  307  */    CanCclRxHndlCh0_TBOX_Year_1410,  CanCclRxHndlCh0_TBOX_Year_1410, CanCclRxHndlCh0_TBOX_Year_1410   },/*TBOX_Year*/
  { /*  308  */    CanCclRxHndlCh0_TBOX_Month_1410,  CanCclRxHndlCh0_TBOX_Month_1410, CanCclRxHndlCh0_TBOX_Month_1410   },/*TBOX_Month*/
  { /*  309  */    CanCclRxHndlCh0_TBOX_Date_1410,  CanCclRxHndlCh0_TBOX_Date_1410, CanCclRxHndlCh0_TBOX_Date_1410   },/*TBOX_Date*/
  { /*  310  */    CanCclRxHndlCh0_TBOX_Hour_1410,  CanCclRxHndlCh0_TBOX_Hour_1410, CanCclRxHndlCh0_TBOX_Hour_1410   },/*TBOX_Hour*/
  { /*  311  */    CanCclRxHndlCh0_TBOX_Minute_1410,  CanCclRxHndlCh0_TBOX_Minute_1410, CanCclRxHndlCh0_TBOX_Minute_1410   },/*TBOX_Minute*/
  { /*  312  */    CanCclRxHndlCh0_TBOX_Second_1410,  CanCclRxHndlCh0_TBOX_Second_1410, CanCclRxHndlCh0_TBOX_Second_1410   },/*TBOX_Second*/
  { /*  313  */    CanCclRxHndlCh0_TBOX_ReTime_1410,  CanCclRxHndlCh0_TBOX_ReTime_1410, CanCclRxHndlCh0_TBOX_ReTime_1410   },/*TBOX_ReTime*/
  { /*  314  */    CanCclRxHndlCh0_BCM_LoadManageLevel_1412,  CanCclRxHndlCh0_BCM_LoadManageLevel_1412, CanCclRxHndlCh0_BCM_LoadManageLevel_1412   },/*BCM_LoadManageLevel*/
  { /*  315  */    CanCclRxHndlCh0_BCM_CarModeIndicator_1412,  CanCclRxHndlCh0_BCM_CarModeIndicator_1412, CanCclRxHndlCh0_BCM_CarModeIndicator_1412   },/*BCM_CarModeIndicator*/
  { /*  316  */    CanCclRxHndlCh0_BCM_CarMode_1412,  CanCclRxHndlCh0_BCM_CarMode_1412, CanCclRxHndlCh0_BCM_CarMode_1412   },/*BCM_CarMode*/
  { /*  317  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_RollingCounter_0x584*/
  { /*  318  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*BCM_Checksum_0x584*/
  { /*  319  */    CanCclRxHndlCh0_EMS_BackupOdometer_1590,  CanCclRxHndlCh0_EMS_BackupOdometer_1590, CanCclRxHndlCh0_EMS_BackupOdometer_1590   },/*EMS_BackupOdometer*/
  { /*  320  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_LockManagFeedback*/
  { /*  321  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_TBOXOlineFeedback*/
  { /*  322  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_PowerFeedback*/
  { /*  323  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_SpdLmtFeedback*/
  { /*  324  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_TBOXAuthentResult*/
  { /*  325  */    CCL_NO_CBKRXACK,  CCL_NO_CBKRXTOUT, CCL_NO_CBKRXINV   },/*EMS_RollingCode*/
};


  /**********************************************************************************************************************
    Ccl_PduGrpVector
  **********************************************************************************************************************/
  /**
    \var    Ccl_PduGrpVector
    \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
    */
  CONST(Ccl_PduGrpVectorType, CCL_CONST) Can_Ccl_PduGrpVector[Can_Ccl_Num_Of_PduGroups] = {
    /* Index    PduGrpVector   */
    /*     0 */        0x02,
    /*     1 */        0x01
  };

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
  CONST(Ccl_TxPduGrpInfoType, CCL_CONST) Can_Ccl_TxPduGrpInfo[Can_Ccl_Tx_Num_Messages] = {
    /* Index     PduGrpVectorStartIdx */ 
  { /*  0  */           0U  },
  { /*  1  */           0U  },
  { /*  2  */           0U  },
  { /*  3  */           0U  },
  { /*  4  */           0U  },
  { /*  5  */           0U  },
};

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
  CONST(Ccl_RxPduGrpInfoType, CCL_CONST) Can_Ccl_RxPduGrpInfo[Can_Ccl_Rx_Num_Messages] = {
    /* Index     PduGrpVectorStartIdx */ 
  { /*     0 */           1U  },
  { /*     1 */           1U  },
  { /*     2 */           1U  },
  { /*     3 */           1U  },
  { /*     4 */           1U  },
  { /*     5 */           1U  },
  { /*     6 */           1U  },
  { /*     7 */           1U  },
  { /*     8 */           1U  },
  { /*     9 */           1U  },
  { /*     10 */           1U  },
  { /*     11 */           1U  },
  { /*     12 */           1U  },
  { /*     13 */           1U  },
  { /*     14 */           1U  },
  { /*     15 */           1U  },
  { /*     16 */           1U  },
  { /*     17 */           1U  },
  { /*     18 */           1U  },
  { /*     19 */           1U  },
  { /*     20 */           1U  },
  { /*     21 */           1U  },
  { /*     22 */           1U  },
  { /*     23 */           1U  },
  { /*     24 */           1U  },
  { /*     25 */           1U  },
  { /*     26 */           1U  },
  { /*     27 */           1U  },
  { /*     28 */           1U  },
  { /*     29 */           1U  },
  { /*     30 */           1U  },
  { /*     31 */           1U  },
  { /*     32 */           1U  },
  { /*     33 */           1U  },
  { /*     34 */           1U  },
  { /*     35 */           1U  },
  { /*     36 */           1U  },
  { /*     37 */           1U  },
  { /*     38 */           1U  },
  { /*     39 */           1U  },
  { /*     40 */           1U  },
  { /*     41 */           1U  },
  { /*     42 */           1U  },
  { /*     43 */           1U  },
};

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
