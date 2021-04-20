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
#ifndef STPSSD_SNZCDD_CFG_H
#define STPSSD_SNZCDD_CFG_H

#include <Adc.h>
#include "StpCdd_Cfg.h"
#include "StpIfCdd.h"
#include "StpDrvCdd.h"
#include "StpSsdSnzCdd.h"

//#define ADC_STUB_ENABLE

#ifdef ADC_STUB_ENABLE
const uint16 cAdcSampleStub[19][55] = 
{
    /* 0  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 1  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 2  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 3  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 4  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 5  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 6  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 7  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 8  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 9  FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 10 FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 11 FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 12 FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 13 FREE RUN */{2048,2349,2560,2628,2540,2327,2048,1780,1593,1534,1613,1802,2048,2048,2276,2434,2483,2415,2254,2048,1852,1719,1679,1738,1875,2048,2048,2204,2308,2338,2289,2181,2048,1925,1845,1824,1864,1947,2048,2048,2131,2183,2193,2163,2109,2048,1997,1970,1969,1990,2020,2048,2048,2059,2057},
    /* 14 COMPRESS */{2048,2344,2544,2600,2508,2303,2048,1812,1658,1618,1693,1853,2048,2048,2211,2313,2334,2278,2170,2048,1945,1888,1884,1923,1986,2048,2048,2078,2083,2068,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048},
    /* 15 COMPRESS */{2048,2344,2544,2600,2508,2303,2048,1812,1658,1618,1693,1853,2048,2048,2211,2313,2334,2278,2170,2048,1945,1888,1884,1923,1986,2048,2048,2078,2083,2068,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048},
    /* 16 STALL    */{2048,2121,2161,2162,2133,2088,2048,2023,2019,2031,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048},
    /* 17 STALL    */{2048,2121,2161,2162,2133,2088,2048,2023,2019,2031,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048},
    /* 18 STALL    */{2048,2121,2161,2162,2133,2088,2048,2023,2019,2031,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048},
};
#endif
//---------------------------------------------------------------------------------------------------------------------
/// S S D   T Y P E   D E F I N I T I O N
/// Description: cStpSsdType1:   CP Homing -> Recovery SSD -> CP2 Homing
///              cStpSsdType2:   CP Homing -> Recovery Open Loop -> CP2 Homing
///              cStpSsdTypeDef: cStpSsdType1
///  CAUTION:  Don't edit the below code.
//---------------------------------------------------------------------------------------------------------------------
#define cStpSsdType1                                (0)
#define cStpSsdType2                                (1)
#define cStpSsdTypeDef                              (cStpSsdType1)

//---------------------------------------------------------------------------------------------------------------------
/// S S D   D A T A   T Y P E   D E F I N I T I O N
//---------------------------------------------------------------------------------------------------------------------
#define SSsdPwmDat                                  SStpIfPwmDat

//---------------------------------------------------------------------------------------------------------------------
/// C P   P A R A M E T E R   S E T T I N G
///  PARAMETER DESCRIPTION:
///  uint8   : #no of BEMF Skip/Ignore Samples
///  uint8   : #no of valid BEMF samples
///  uint8   : #no of step for CP execution
///  uint8   : Differentiation Filter Delta value
///  uint8   : Excursion Amplitude Filter Thd
///  uint8   : BEMF Magnitude Integration Coefficient
///  uint8   : BEMF Magnitude Differentiation Coefficient
///  uint8   : Present -> Previous Magnitude Difference
///  uint16  : Stall Threshold
///  GENERAL CAUTIONS: Setting these bit affect the SSD position. Use SSD parameter definition
///                    tool for generating parameter table.
//---------------------------------------------------------------------------------------------------------------------
#define mDeclareCpSsdConst()                                                                     \
    {                                                                                            \
        {(uint8)5,(uint8)47,(uint8)19,(uint8)3,(uint8)5,(uint8)25,(uint8)75,(uint8)8,(uint16)12},\
        {(uint8)5,(uint8)47,(uint8)19,(uint8)3,(uint8)5,(uint8)25,(uint8)75,(uint8)8,(uint16)12}, \
    }

#define cSsdCpExcurStallCnt                         (2)

//---------------------------------------------------------------------------------------------------------------------
/// C P   D E T E C T I O N   T Y P E   S E L E C T I O N   F L A G S
///  BIT DEFINITION:
///    BIT0 : FREE RUNNING
///    BIT1 : COMPRESS
///    BIT2 : STALL
///    BIT3 : CRITICAL STALL
///    BIT4 : DELAYED FLIP
///    BIT5 : FLIP
///    BIT6 : UNKNOWN
///    BIT7 : RESERVED(DONT SET/RESET)
///  GENERAL CAUTIONS: Setting these bit affect the SSD position.
//---------------------------------------------------------------------------------------------------------------------
#define cSsdCpDetectStall                           ((uint8)0x04)
#define cSsdCpDetectFlip                            ((uint8)0x20)
#define cSsdCpDetectFlipStall                       ((uint8)0x24)
#define cSsdCpDetType                               (cSsdCpDetectFlipStall)

//---------------------------------------------------------------------------------------------------------------------
/// C L O S E   P R O X I M I T Y   T I M I N G   P A R A M E T E R S
///  PARAMETER DISCRIPTION
///  cSsdCpCpRoStableTime        : Wait time after move to RO.
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdCpCpRoStableTime                        (50)

//---------------------------------------------------------------------------------------------------------------------
/// R E C O V E R Y   H O M I N G   B E M F   T H R E S H O L D
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define mDeclareRecSsdStopThd()                                                                  \
    {                                                                                            \
        10,                                                                                     \
        10,                                                                                      \
    }

//---------------------------------------------------------------------------------------------------------------------
/// R E C O V E R Y   H O M I N G   M O V E   A W A Y   A C C L E R A T I O N   T B A L E
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdRecStartStep                            ((uint16)45)
#define cSsdRecAccelEnd                             ((uint8)13)
#define cSsdRecAccelTblEleMax                       ((uint8)14)
#define mDeclareRecAccelTbl()                                                                    \
    {                                                                                            \
        15,                                                                                      \
        9,                                                                                       \
        7,                                                                                       \
        7,                                                                                       \
        6,                                                                                       \
        6,                                                                                       \
        6,                                                                                       \
        5,                                                                                       \
        5,                                                                                       \
        5,                                                                                       \
        4,                                                                                       \
        4,                                                                                       \
        3,                                                                                       \
        3                                                                                        \
    }

//---------------------------------------------------------------------------------------------------------------------
/// M A X I M U M   R E C O V E R Y   S T E P S
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdRecStepMax                              ((uint16)768)

//---------------------------------------------------------------------------------------------------------------------
/// R E C O V E R Y   H O M I N G   T I M I N G   P A R A M E T E R S
///  PARAMETER DISCRIPTION
///  cSsdRecEndWaitTim            : Recovery Homing closure time.
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdRecEndWaitTim                           (50)

//---------------------------------------------------------------------------------------------------------------------
/// M O V E   A W A Y   S T E P S   A N D   V E L O C I T Y   S E T T I N G
///  PARAMETER DISCRIPTION
///  cSsdRecMoveAwyStep          : Move away angle, depends on BEMF stabilization.
///  cSsdRecMoveAwyRate          : Velocity of move away angle.
///  cSsdRecReleaseRate          : Velocity of Recovery Release.
///  cSsdMovToRoRate             : Velocity of Move To Ro.
///  cSsdRecReleaseStep          : Release Steps.
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdRecMoveAwyStep                          (3072)
#define cSsdRecMoveAwyRate                          (5)
#define cSsdRecReleaseRate                          (4)
#define cSsdMovToRoRate                             (5)
#define cSsdMovAwyStpRate                           (5)
#define cSsdRecReleaseStep                          (256)

//---------------------------------------------------------------------------------------------------------------------
/// R E C O V E R Y   B E M F   S A M P L I N G   S E T T I N G
///  PARAMETER DISCRIPTION
///  cSsdRecSkipSamples              : #no of BEMF sample ignore/skip blanking.
///  cSsdRecBemfSampleCount          : #no of BEMF sample for integration.
///  cSsdRecBemfDeltaThd             : BEMF sample difference threshold.
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdRecSkipSamples                          (1)
#define cSsdRecBemfSampleCount                      (2)
#define cSsdRecBemfDeltaThd                         (3)

//---------------------------------------------------------------------------------------------------------------------
/// M O V E   A W A Y   S T E P S   A N D   V E L O C I T Y   S E T T I N G
///  PARAMETER DISCRIPTION
///  cSsdCpMtsRate                  : Move towards stop velocity.
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdCpMtsRate                               (5)

//---------------------------------------------------------------------------------------------------------------------
/// O P E N   C O I L   R E F E R E N C E   A V E R A G E   S E T T I N G
///  PARAMETER DISCRIPTION
///  cSsdOpenCoilAvgNum        : #no of sample taken for average process.
///  cSsdOpenCoilAveSft        : Average shift number.
///  cSsdOpenCoilAveStart      : Open coil average start time.
///  GENERAL CAUTIONS:
//---------------------------------------------------------------------------------------------------------------------
#define cSsdOpenCoilWaitTime                        (200)
#define cSsdOpenCoilAvgNum                          (16)
#define cSsdOpenCoilAveSft                          (4)
#define cSsdOpenCoilAveStart                        (cSsdOpenCoilWaitTime + cSsdOpenCoilAvgNum)

//---------------------------------------------------------------------------------------------------------------------
/// C O I L   A D C   C H A N N E L   D E F I N I T I O N S
///
///  Default A/D Channel Definition from the IDD Handler.
///  Note: Change in Default channel can be defined in CFG file.
//---------------------------------------------------------------------------------------------------------------------
#define cSsdMot0SinPlusAdCh                         (26)
#define cSsdMot0CosPlusAdCh                         (28)

#define cSsdMot1SinPlusAdCh                         (30)
#define cSsdMot1CosPlusAdCh                         (32)

#define cSsdMot2SinPlusAdCh                         0//(AdcConf_AdcGroup_AdcGroup_MotorTacho_PWM1P)
#define cSsdMot2CosPlusAdCh                         0//(AdcConf_AdcGroup_AdcGroup_MotorTacho_PWM2P)

#define cSsdMot3SinPlusAdCh                         0//(AdcConf_AdcGroup_AdcGroup_MotorSpeed_PWM1P)
#define cSsdMot3CosPlusAdCh                         0//(AdcConf_AdcGroup_AdcGroup_MotorSpeed_PWM2P)

#define cSsdMot4SinPlusAdCh                         (42)
#define cSsdMot4CosPlusAdCh                         (44)

#define cSsdMot5SinPlusAdCh                         (46)
#define cSsdMot5CosPlusAdCh                         (48)

#define mDeclareCoilAdCh()                                                                       \
    {                                                                                            \
        {cSsdMot2SinPlusAdCh,cSsdMot2CosPlusAdCh,cSsdMot2SinPlusAdCh,cSsdMot2CosPlusAdCh},       \
        {cSsdMot3SinPlusAdCh,cSsdMot3CosPlusAdCh,cSsdMot3SinPlusAdCh,cSsdMot3CosPlusAdCh},       \
    }
//---------------------------------------------------------------------------------------------------------------------
/// A 2 D   C O N V E R S I O N   I N T E R F A C E   D E F I N I T I O N
///  Define ADC Conversion interface, which should start new conversion and
///  return the A/D value of requested channel[Current A/D value].
//---------------------------------------------------------------------------------------------------------------------
#define StpSsdSetupBuffer(HwId,Buffer)              Adc_SetupResultBuffer((Adc_GroupType)HwId,Buffer)
#define StpSsdReadAdc(HwId,Buffer)                  Adc_ReadGroup((Adc_GroupType)HwId,Buffer)
#define StpSsdStartAdc(HwId)                        Adc_StartGroupConversion((Adc_GroupType)HwId)

#define cSsdAdResMax                                (4096)
#define cSsdAdScalar                                (2)

//---------------------------------------------------------------------------------------------------------------------
/// I N T E R F A C E   D E F I N I T I O N
//---------------------------------------------------------------------------------------------------------------------
#define StpSsd_LeaveHighZMode(Ix)                   (StpDrv_LeaveHighZMode(Ix))
#define StpSsd_DrvEnterFullStepMode(Ix)             (StpDrv_EnterFullStepMode(Ix))
#define StpSsd_DrvSetFullStep(Ix, FulStp)           (StpDrv_SetFullStep(Ix,FulStp))
#define StpSsd_DrvSetPwmVal(Ix,Sn,Cs,Pl)            (StpDrv_SetPWMVal(Ix,Sn,Cs,Pl))

#define StpSsd_IfReadRo(Ix,Buf)                     (StpIf_GetMagneticOffset(Ix,Buf))
#define StpSsd_IfReadPwmIdx(Ix)                     (StpIf_GetPwmIndex(Ix))
#define StpSsd_IfReadSinCosTbl(Ix,Idx,Buf)          (StpIf_ReadSinCosTbl(Ix,Idx,Buf))
#define StpSsd_IfReadCurMicroStp(Ix,Buf)            (StpIf_GetCurrentPosMicroStp(Ix,Buf))
#define StpSsd_IfReadParkCount(Ix,Buf)              (StpIf_GetZeroSoftMicrostep(Ix,Buf))

//---------------------------------------------------------------------------------------------------------------------
/// M O T O R   M I C R O S T E P   S E T T I N G S
//---------------------------------------------------------------------------------------------------------------------
#define cSsdMicroStpTabSize                         ((uint16)256UL)
#define cSsdFullStepMicroStp                        ((uint16)(cSsdMicroStpTabSize/4))
#define cSsdMicroFullSft                            (6)
#define cSsdMinRoStep                               (102)

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
///   New Version             02-NOV-2105     MAHAMED(Ahamed Marzuk)

///   Revision 1.1  02-JUN-2016     BVIJAYKU  
//    Started Baseline: TA_1.4.24_Delivery snapshot and V16 local changes.
//    Reason for Changes: Coverity,MISRA and Compiler warnings fix.
//---------------------------------------------------------------------------------------------------------------------
#endif
