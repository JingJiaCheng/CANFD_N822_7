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
#if (!defined STPIFCDDCFG_H)
#define STPIFCDDCFG_H

// Converts Mili Seconds to  GPT timer Ticks in thick if the frequency is 60 Mhz
//Actual Frequency is 80Mhz
#define mMSEC_TO_TICKS(x) ((uint32)(x*80000UL))


#define RI_Stpr_StopTimer()                             \
    {                                                   \
        Gpt_DisableNotification((Gpt_ChannelType)GptConf_GptChannelConfiguration_StpCdd);    \
        Gpt_StopTimer((Gpt_ChannelType)GptConf_GptChannelConfiguration_StpCdd);              \
    }

#define RI_Stpr_StartTimer()                            \
    {                                                   \
        Gpt_EnableNotification((Gpt_ChannelType)GptConf_GptChannelConfiguration_StpCdd);              \
        Gpt_StartTimer((Gpt_ChannelType)GptConf_GptChannelConfiguration_StpCdd, (uint32)mMSEC_TO_TICKS(1));   \
    }

#define RI_Stpr_ConfigureTimer()

/* This defined to avoid the RTE interfaces for Hysteresis  
** for now RTE interfaces are not generated. This will be disabled once RTE interfaces are generated */
//#define HYST_STUB_CODE

/*#define cStprTacho        ((uint8) 0)
#define cStprSpeedo        ((uint8) 1)*/

#define cStprNbTypes    1

// Motor numbers
#define cPhysMot1       ((uint8) 1)//0)
#define cPhysMot2       ((uint8) 0)//1)
//#define cPhysMot3       ((uint8) 2)

// -> Motors specifications

/********************* S6403 MOTOR *************************/
#define cKmCoeffNumS6403        ((uint16) 192)  // Motor coefficient = 192/125
#define cKmCoeffDenS6403        ((uint16) 125)
/********************* S6405 MOTOR *************************/
#define cKmCoeffNumS6405        ((uint16) 32)  // Motor coefficient = 32/25
#define cKmCoeffDenS6405        ((uint16) 25)
/********************* S6407 MOTOR *************************/
#define cKmCoeffNumS6407        ((uint16) 32)  // Motor coefficient = 32/25
#define cKmCoeffDenS6407        ((uint16) 25)
/********************* NMB MOTOR *************************/
#define cKmCoeffNumNMB        ((uint16) 384)  // Motor coefficient = 192/125
#define cKmCoeffDenNMB        ((uint16) 125)

							    
#define cItPeriodInUs           ((uint16) 1000)/*Stepper motor interrupt period in Us*/


/********************* MOTOR RESOURCE 0 *************************/
// Mot1

// Sign Bits
#define cQ0SgnBitsMot1         ((uint8) 3)
#define cQ1SgnBitsMot1         ((uint8) 2)
#define cQ2SgnBitsMot1         ((uint8) 1)
#define cQ3SgnBitsMot1         ((uint8) 0)

/********************* MOTOR RESOURCE 1 *************************/
// Mot2

// Sign Bits
#define cQ0SgnBitsMot2         ((uint8) 3)
#define cQ1SgnBitsMot2         ((uint8) 2)
#define cQ2SgnBitsMot2         ((uint8) 1)
#define cQ3SgnBitsMot2         ((uint8) 0)


/********************* REFERENCE MOTOR 1 TACHO *************************/
// Sign Bits
#define cQ0SgnBitsTacho              cQ0SgnBitsMot1
#define cQ1SgnBitsTacho              cQ1SgnBitsMot1
#define cQ2SgnBitsTacho              cQ2SgnBitsMot1
#define cQ3SgnBitsTacho              cQ3SgnBitsMot1

/********************* REFERENCE MOTOR 2 Speed *************************/
// Sign Bits
#define cQ0SgnBitsSpeedo              cQ0SgnBitsMot2
#define cQ1SgnBitsSpeedo              cQ1SgnBitsMot2
#define cQ2SgnBitsSpeedo              cQ2SgnBitsMot2
#define cQ3SgnBitsSpeedo              cQ3SgnBitsMot2



//Only Change the cu8MaxJump from 32 to 23,because the pointer will be soft jitter when pointer returns to SW zero.
//The cu8MaxJump may decide Pointer ACC and the Old value 32 may be too large.
//when return ro SW zreo, the ACC of deceleration is too large.
//The value 23 is from STK platform and after the value changed, the jitter may not appear.
//@jyin5;
#define DECLARE_STPCTX_INSTANCES \
static  const SMotorType MotorTypes[cStprNbTypes] = \
{ \
    { ((uint8) 3)/*cu8CalibAccPeriod*/, ((uint8) 9)/*cu8CalibStartSpeed*/, ((uint8) 32)/*cu8HighCalibMaxSpeed*/, ((uint8) 16)/*cu8LowCalibMaxSpeed*/, ((uint16) (1*256))/*cu16EndOfCalibDistance*/,((uint8) 23)/*cu8MaxJump*/, ((uint8) 64)/*cu8MotorMaxJump*/, cKmCoeffNumS6405 /*cu8KmCoeffNum*/, cKmCoeffDenS6405 /*cu8KmCoeffDen*/, {((uint8) 5), ((uint8) 5), ((uint8) 5), ((uint8) 5), ((uint8) 5), ((uint8) 5), ((uint8) 5), ((uint8) 5), ((uint8) 5)}/*cu8ItCoeff*/, ((uint8) 10)/*cu8CalibDelay1*/, ((uint8) 5)/*cu8CalibConstSpeed*/, ((uint8) 2)/*cu8CalibDelay2*/, ((uint8) 64)/*cu8LowTorque*/, ((uint16) 3000)/*cu8LowAngle*/}, \
}; \
static       SStpCtxRam StpCtxRam[eStp_Count]; \
static const SStpCtx StpCtx[eStp_Count] = \
{ \
   { \
       {cQ0SgnBitsTacho, cQ1SgnBitsTacho, cQ2SgnBitsTacho, cQ3SgnBitsTacho }/*quadrants description*/, \
       cPhysMot1/*Number of SM port */, \
       ((uint8) 5)/*Filter sampling period*/, \
       ((uint8) (2<<4))/*Filter coefficient*/, \
       ((boolean) FALSE)/*SpeedLimitOn*/, \
       ((uint8) 10)/*Application Task period in ms*/, \
       ((uint16) 32)/*Adjust ramp NUM const*/, \
       ((uint16) 20)/*Adjust ramp DEN const*/, \
       &StpCtxRam[0], \
       &MotorTypes[0] \
   }, \
	{ \
		{cQ0SgnBitsSpeedo, cQ1SgnBitsSpeedo, cQ2SgnBitsSpeedo, cQ3SgnBitsSpeedo }/*quadrants description*/, \
		cPhysMot2/*Number of SM port */, \
		((uint8) 5)/*Filter sampling period*/, \
		((uint8) (2<<5))/*Filter coefficient*/, \
		((boolean) FALSE)/*SpeedLimitOn*/, \
		((uint8) 10)/*Application Task period in ms*/, \
		((uint16) 32)/*Adjust ramp NUM const*/, \
		((uint16) 20)/*Adjust ramp DEN const*/, \
		&StpCtxRam[1], \
		&MotorTypes[0] \
	}, \
}; \

//speed Filter coefficient(2<<5) is from STK Platform;

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
///   Revision 1.1  03-AUG-2016     BVIJAYKU  
//    Reason for Changes: Moved mDeclareDutyCycleTableConstTable() and SSD interfaces to StpIfCdd.h file.
//
///   Revision 1.0  02-JUN-2016     BVIJAYKU  
//    Started Baseline: TA_1.4.24_Delivery snapshot and V16 local changes.
//    Reason for Changes: Coverity,MISRA and Compiler warnings fix.
//---------------------------------------------------------------------------------------------------------------------
#endif //STPIFCDDCFG_H
