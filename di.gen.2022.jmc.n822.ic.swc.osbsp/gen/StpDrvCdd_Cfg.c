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
#include "StpDrvCdd_Cfg.h"
#include "idd_driver.h"
#include "pdl_port.h"

// define SCM selection register values for each quadrant. There are 2 arrays
// for each coil. Values in the arrays are with the following meaning:
//  0x10 - P=PWM, M=0
//  0x02 - P=0, M=PWM
//  0x08 - P=1, M=0
//  0x01 - P=0, M=1
//  0x00 - P=0, M=0
static const uint8 SMCQuadA[4] = {(uint8)0x10u, (uint8)0x10u, (uint8)0x02u, (uint8)0x02u}; // PWM mode
static const uint8 SMCQuadB[4] = {(uint8)0x10u, (uint8)0x02u, (uint8)0x02u, (uint8)0x10u}; // PWM mode

static const uint8 cStpDrvFullStepDdrTbl[4] = {0x0C,0x03,0x0C,0x03};
static const uint8 cStpDrvFullStepPdrTbl[4] = {0x04,0x01,0x08,0x02};

//---------------------------------------------------------------------------------------------------------------------
// S S D   F U L L   S T E P   D R I V E   P O R T   S E T T I N G
//  SETTING DESCRIPTION:
//  POE     : 0   - Port Output As Hz
//  POD     : 0   - Low
//  PID     : 0   - Default
//  PIE     : 0   - Port Input Disabled / Analog Input
//  PIL     : 0   - CMOS
//  PUE     : 1   - Pull Up Enable
//  PDE     : 0   - Pull Down Disable
//  ODR     : 11  - 30mA Drive Current
//  NFE     : 0   - Noise Filter Disable
//  RES     : 00  - Reserved
//  POF     : 000 - GPIO
//  GENERAL CAUTIONS:
//
//---------------------------------------------------------------------------------------------------------------------
//#define cStpDrvPullUpCnfg                       0x02C0
#define cStpDrvPullUpCnfg                       0x00C0
//---------------------------------------------------------------------------------------------------------------------
// S S D   F U L L   S T E P   D R I V E   P O R T   S E T T I N G
//  SETTING DESCRIPTION:
//  POE     : 0   - Port Output As Hz
//  POD     : 0   - Low
//  PID     : 0   - Default
//  PIE     : 0   - Port Input Disabled / Analog Input
//  PIL     : 00   - CMOS
//  PUE     : 0   - Pull Up Disable
//  PDE     : 1   - Pull Down Enable
//  ODR     : 11  - 30mA Drive Current
//  NFE     : 0   - Noise Filter Disable
//  RES     : 00  - Reserved
//  POF     : 001 - GPIO
//  GENERAL CAUTIONS:
//
//---------------------------------------------------------------------------------------------------------------------
//#define cStpDrvPullDnCnfg                       0x01C0
#define cStpDrvPullDnCnfg                       0x00C0

void StpDrv_Init_STP0( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR117, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR118, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR119, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR120, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
    SMC0_PWC = (uint16)0u;
#endif
}

void StpDrv_DeInit_STP0( void )
{
    // Stop the PWM
   SMC0_PWC = (uint16)0u;
#if 0
   // Port input
   IDD_PORT_WPREG_PPC(PPC_PCFGR117, (uint16)0x1000u );
   IDD_PORT_WPREG_PPC(PPC_PCFGR118, (uint16)0x1000u );
   IDD_PORT_WPREG_PPC(PPC_PCFGR119, (uint16)0x1000u );
   IDD_PORT_WPREG_PPC(PPC_PCFGR120, (uint16)0x1000u );
#endif
  
}

void StpDrv_EnterHZ_STP0( void )
{
    // Stop the PWM
    SMC0_PWC = (uint16)0u;

#if 0
    // Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR117, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR118, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR119, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR120, (uint16)0x1000u );
#endif	
}

void StpDrv_LeaveHZ_STP0( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR117, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR118, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR119, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR120, (uint16)0x00C1u );
#endif	
    // 16kHz PWM, 8bit PWM
    SMC0_PWC = (uint16)0x0008u;
}

void StpDrv_SetPWM_STP0( uint16 CoilA, uint16 CoilB, uint8 SignBits )
{
#if 1
    SMC0_PWC1 = CoilA;      // set sine
    SMC0_PWC2 = CoilB;      // set cosine
    SMC0_PWS =  (uint16)((uint16)SMCQuadA[SignBits] |
              (uint16)( SMCQuadB[SignBits] << 8 )); // set signs
    SMC0_PWS_BS = 1;                   // apply position
#endif
}

void StpDrv_InitFullStep_STP0( void )
{
#if 0
    IDD_PORT_WPREG_PPC(PPC_PCFGR117, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR118, (uint16)cStpDrvPullDnCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR119, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR120, (uint16)cStpDrvPullDnCnfg );
    SMC0_PWC = (uint16)0u;
#endif
}

void StpDrv_FullStepOut_STP0( uint8 FullStepSta )
{
#if 0
    uint32 WrkA;

    WrkA = ((GPIO_DDR3 & 0xFE1FFFFF)|((uint32)cStpDrvFullStepDdrTbl[FullStepSta]<<21));
    IDD_PORT_WPREG_GPIO(GPIO_DDR3,WrkA);
    WrkA = ((GPIO_PODR3 & 0xFE1FFFFF)|((uint32)cStpDrvFullStepPdrTbl[FullStepSta]<<21));
    IDD_PORT_WPREG_GPIO(GPIO_PODR3,WrkA);
#endif
}


void StpDrv_Init_STP1( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR121, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR122, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR123, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR124, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
    SMC1_PWC = (uint16)0u;
#endif
}

void StpDrv_DeInit_STP1( void )
{
#if 0
    // Stop the PWM
    SMC1_PWC = (uint16)0u;
    // Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR121, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR122, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR123, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR124, (uint16)0x1000u );
#endif
}


void StpDrv_EnterHZ_STP1( void )
{
    // Stop the PWM
    SMC1_PWC = (uint16)0u;
	
#if 0
    // Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR121, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR122, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR123, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR124, (uint16)0x1000u );
#endif
}


void StpDrv_LeaveHZ_STP1( void )
{
#if 0
    // high output current - 20mA, PWM function
   IDD_PORT_WPREG_PPC(PPC_PCFGR121, (uint16)0x00C1u );
   IDD_PORT_WPREG_PPC(PPC_PCFGR122, (uint16)0x00C1u );
   IDD_PORT_WPREG_PPC(PPC_PCFGR123, (uint16)0x00C1u );
   IDD_PORT_WPREG_PPC(PPC_PCFGR124, (uint16)0x00C1u );
#endif
   // 16kHz PWM, 8bit PWM
   SMC1_PWC = (uint16)0x0008u;
}

void StpDrv_InitFullStep_STP1( void )
{
#if 0
    IDD_PORT_WPREG_PPC(PPC_PCFGR121, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR122, (uint16)cStpDrvPullDnCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR123, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR124, (uint16)cStpDrvPullDnCnfg );
    SMC1_PWC = (uint16)0u;
#endif
}

void StpDrv_SetPWM_STP1( uint16 CoilA, uint16 CoilB, uint8 SignBits )
{
#if 1
    SMC1_PWC1 = CoilA;      // set sine
    SMC1_PWC2 = CoilB;      // set cosine
    SMC1_PWS =  (uint16)((uint16)SMCQuadA[SignBits] |
              (uint16)( SMCQuadB[SignBits] << 8 )); // set signs
    SMC1_PWS_BS = 1;                   // apply position
#endif
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief   Full step port setting for SMC module 1
/// @param   FullStepSta:   Full Step State <0,1,2,3>
//---------------------------------------------------------------------------------------------------------------------
void StpDrv_FullStepOut_STP1( uint8 FullStepSta )
{
#if 0
    uint32 WrkA;

    WrkA = ((GPIO_DDR3 & 0xE1FFFFFF)|((uint32)cStpDrvFullStepDdrTbl[FullStepSta]<<25));
    IDD_PORT_WPREG_GPIO(GPIO_DDR3,WrkA);
    WrkA = ((GPIO_PODR3 & 0xE1FFFFFF)|((uint32)cStpDrvFullStepPdrTbl[FullStepSta]<<25));
    IDD_PORT_WPREG_GPIO(GPIO_PODR3,WrkA);
#endif
}


void StpDrv_Init_STP2( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR329, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR330, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR331, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR400, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
    SMC2_PWC = (uint16)0u;
#endif
}

void StpDrv_DeInit_STP2( void )
{
#if 0
    // Stop the PWM
    SMC2_PWC = (uint16)0u;
    // Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR329, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR330, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR331, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR400, (uint16)0x1000u );
#endif
}

void StpDrv_EnterHZ_STP2( void )
{
#if 0
    SMC2_PWC = (uint16)0u;
    // Port input
    IDD_PORT_WPREG_PPC( PPC_PCFGR329, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC( PPC_PCFGR330, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC( PPC_PCFGR331, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC( PPC_PCFGR400, (uint16)0x1000u );
#endif
}

void StpDrv_LeaveHZ_STP2( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR329, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR330, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR331, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR400, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
    SMC2_PWC = (uint16)0x0008u;
#endif
}

void StpDrv_InitFullStep_STP2( void )
{
#if 0
    IDD_PORT_WPREG_PPC(PPC_PCFGR329, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR330, (uint16)cStpDrvPullDnCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR331, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR400, (uint16)cStpDrvPullDnCnfg );
    SMC2_PWC = (uint16)0u;
#endif
}

void StpDrv_SetPWM_STP2( uint16 CoilA, uint16 CoilB, uint8 SignBits )
{
#if 0
    SMC2_PWC1 = CoilA;      // set sine
    SMC2_PWC2 = CoilB;      // set cosine
    SMC2_PWS =  (uint16)((uint16)SMCQuadA[SignBits] |
               (uint16)( SMCQuadB[SignBits] << 8 )); // set signs
    SMC2_PWS_BS = 1;                   // apply position
#endif
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief   Full step port setting for SMC module 2
/// @param   FullStepSta:   Full Step State <0,1,2,3>
//---------------------------------------------------------------------------------------------------------------------
void StpDrv_FullStepOut_STP2( uint8 FullStepSta )
{
#if 0
    uint32 WrkA;

    WrkA = ((GPIO_DDR3 & 0x1FFFFFFF)|((uint32)cStpDrvFullStepDdrTbl[FullStepSta]<<29));
    IDD_PORT_WPREG_GPIO(GPIO_DDR3,WrkA);
    WrkA = ((GPIO_PODR3 & 0x1FFFFFFF)|(uint32)cStpDrvFullStepPdrTbl[FullStepSta]<<29);
    IDD_PORT_WPREG_GPIO(GPIO_PODR3,WrkA);

    WrkA = ((GPIO_DDR4 & 0xFFFFFFFE)|((uint32)cStpDrvFullStepDdrTbl[FullStepSta]>>3));
    IDD_PORT_WPREG_GPIO(GPIO_DDR4,WrkA);
    WrkA = ((GPIO_PODR4 & 0xFFFFFFFE)|(uint32)cStpDrvFullStepPdrTbl[FullStepSta]>>3);
    IDD_PORT_WPREG_GPIO(GPIO_PODR4,WrkA);
#endif
}

void StpDrv_Init_STP3( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR401, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR402, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR403, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR404, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
#endif

    SMC3_PWC = (uint16)0u;

}

void StpDrv_DeInit_STP3( void )
{
    SMC3_PWC = (uint16)0u;

#if 0
    // Stop the PWM

    /// Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR401, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR402, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR403, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR404, (uint16)0x1000u );
#endif
}

void StpDrv_EnterHZ_STP3( void )
{
    SMC3_PWC = (uint16)0u;

#if 1
    // Stop the PWM
        stc_port_pin_config_t PpcConf = { PortOutputResourceGPIO };
    
        /******************/
        /* OUTPUT setting */
        /******************/
    
        // TXD0: Pin num = 46, Port = P0_04, Reg offset = PPC_PCFGR004, POF = 3 -> Standard Configration
        PpcConf.bInputEnable          = TRUE;                  /* set PIE(Port input enable) in PPC_PCFGRi reg */
        PpcConf.bNoiseFilterEnable    = FALSE;                  /* set NFE(Port noise filter enable/disable ) in PPC_PCFGRi reg */
        PpcConf.enGpioDirection       = PortGpioInput;         /* set GPIO_DDSRi */
        PpcConf.enInputLevel          = PortInputLevelCmosA;    /* set PIL(Port Input Level) in PPC_PCFGRi reg */
        PpcConf.enOutputDrive         = PortOutputDriveA;       /* set ODR(port Output DRive selection) in PPC_PCFGRi reg */
        PpcConf.enOutputFunction      = PortOutputResourceGPIO;    /* set POF(Port Output Function) in PPC_PCFGRi reg */
                                                                /*     011:Resource D */
        PpcConf.enPullResistor        = PortPullResistorNone;   /* set for PUE(Pull Up Enable) and PDE(Pull Down Enable) */
                                                                /*     None=0: no pull up & no pull down */
        PpcConf.enGpioInitOutputLevel = PortGpioLow;           /* set GPIO_POSRi(Port Output Set Register) */
        Port_SetPinConfig(4, 1, &PpcConf);
        Port_SetPinConfig(4, 2, &PpcConf);
        Port_SetPinConfig(4, 3, &PpcConf);
        Port_SetPinConfig(4, 4, &PpcConf);

    // Port input
    //IDD_PORT_WPREG_PPC( PPC_PCFGR401, (uint16)0x1000u );
    //IDD_PORT_WPREG_PPC( PPC_PCFGR402, (uint16)0x1000u );
    //IDD_PORT_WPREG_PPC( PPC_PCFGR403, (uint16)0x1000u );
    //IDD_PORT_WPREG_PPC( PPC_PCFGR404, (uint16)0x1000u );
#endif
}

void StpDrv_LeaveHZ_STP3( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR401, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR402, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR403, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR404, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
#endif
    stc_port_pin_config_t PpcConf = { PortOutputResourceGPIO };
    
    /******************/
    /* OUTPUT setting */
    /******************/
    
    // TXD0: Pin num = 46, Port = P0_04, Reg offset = PPC_PCFGR004, POF = 3 -> Standard Configration
    PpcConf.bInputEnable          = FALSE;                  /* set PIE(Port input enable) in PPC_PCFGRi reg */
    PpcConf.bNoiseFilterEnable    = FALSE;                  /* set NFE(Port noise filter enable/disable ) in PPC_PCFGRi reg */
    PpcConf.enGpioDirection       = PortGpioOutput;         /* set GPIO_DDSRi */
    PpcConf.enInputLevel          = PortInputLevelCmosA;    /* set PIL(Port Input Level) in PPC_PCFGRi reg */
    PpcConf.enOutputDrive         = PortOutputDriveD;       /* set ODR(port Output DRive selection) in PPC_PCFGRi reg */
    PpcConf.enOutputFunction      = PortOutputResourceB;    /* set POF(Port Output Function) in PPC_PCFGRi reg */
                                                            /*     011:Resource D */
    PpcConf.enPullResistor        = PortPullResistorNone;   /* set for PUE(Pull Up Enable) and PDE(Pull Down Enable) */
                                                            /*     None=0: no pull up & no pull down */
    PpcConf.enGpioInitOutputLevel = PortGpioHigh;           /* set GPIO_POSRi(Port Output Set Register) */
    Port_SetPinConfig(4, 1, &PpcConf);
    Port_SetPinConfig(4, 2, &PpcConf);
    Port_SetPinConfig(4, 3, &PpcConf);
    Port_SetPinConfig(4, 4, &PpcConf);


    SMC3_PWC = (uint16)0x0008u;

}

void StpDrv_InitFullStep_STP3( void )
{
#if 0
    IDD_PORT_WPREG_PPC(PPC_PCFGR401, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR402, (uint16)cStpDrvPullDnCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR403, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR404, (uint16)cStpDrvPullDnCnfg );
    SMC3_PWC = (uint16)0u;
#endif
}

void StpDrv_SetPWM_STP3( uint16 CoilA, uint16 CoilB, uint8 SignBits )
{
#if 1
    SMC3_PWC1 = CoilA;      // set sine
    SMC3_PWC2 = CoilB;      // set cosine
    SMC3_PWS =  (uint16)((uint16)SMCQuadA[SignBits] |
            (uint16)( SMCQuadB[SignBits] << 8 )); // set signs
    SMC3_PWS_BS = 1;                   // apply position
#endif
}

void StpDrv_FullStepOut_STP3( uint8 FullStepSta )
{
#if 0
    uint32 WrkA;

    WrkA = ((GPIO_DDR4 & 0xFFFFFFE1)|((uint32)cStpDrvFullStepDdrTbl[FullStepSta]<<1));
    IDD_PORT_WPREG_GPIO(GPIO_DDR4,WrkA);
    WrkA = ((GPIO_PODR4 & 0xFFFFFFE1)|(uint32)cStpDrvFullStepPdrTbl[FullStepSta]<<1);
    IDD_PORT_WPREG_GPIO(GPIO_PODR4,WrkA);
#endif
}

void StpDrv_Init_STP4( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR405, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR406, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR407, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR408, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
    SMC4_PWC = (uint16)0u;
#endif
}

void StpDrv_DeInit_STP4( void )
{
#if 0
    // Stop the PWM
    SMC4_PWC = (uint16)0u;
    // Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR405, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR406, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR407, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR408, (uint16)0x1000u );
#endif
}

void StpDrv_EnterHZ_STP4( void )
{
#if 0
    // Stop the PWM
    SMC4_PWC = (uint16)0u;
    // Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR405, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR406, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR407, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR408, (uint16)0x1000u );
#endif
}

void StpDrv_LeaveHZ_STP4( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR405, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR406, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR407, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR408, (uint16)0x00C1u );
    // 16kHz PWM, 8bit PWM
    SMC4_PWC = (uint16)0x0008u;
#endif
}

void StpDrv_SetPWM_STP4( uint16 CoilA, uint16 CoilB, uint8 SignBits )
{
#if 0
    SMC4_PWC1 = CoilA;      // set sine
    SMC4_PWC2 = CoilB;      // set cosine
    SMC4_PWS =  (uint16)((uint16)SMCQuadA[SignBits] |
              (uint16)( SMCQuadB[SignBits] << 8 )); // set signs
    SMC4_PWS_BS = 1;                   // apply position
#endif
}

void StpDrv_InitFullStep_STP4( void )
{
#if 0
    IDD_PORT_WPREG_PPC(PPC_PCFGR405, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR406, (uint16)cStpDrvPullDnCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR407, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR408, (uint16)cStpDrvPullDnCnfg );
    SMC4_PWC = (uint16)0u;
#endif
}

void StpDrv_FullStepOut_STP4( uint8 FullStepSta )
{
#if 0
    uint32 WrkA;

    WrkA = ((GPIO_DDR4 & 0xFFFFFE1F)|((uint32)cStpDrvFullStepDdrTbl[FullStepSta]<<5));
    IDD_PORT_WPREG_GPIO(GPIO_DDR4,WrkA);
    WrkA = ((GPIO_PODR4 & 0xFFFFFE1F)|((uint32)cStpDrvFullStepPdrTbl[FullStepSta]<<5));
    IDD_PORT_WPREG_GPIO(GPIO_PODR4,WrkA);
#endif
}

void StpDrv_Init_STP5( void )
{
#if 0
    // high output current - 20mA, PWM function
    IDD_PORT_WPREG_PPC(PPC_PCFGR409, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR410, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR411, (uint16)0x00C1u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR412, (uint16)0x00C1u );
#endif

    // 16kHz PWM, 8bit PWM
    SMC5_PWC = (uint16)0u;
}

void StpDrv_DeInit_STP5( void )
{

    // Stop the PWM
    SMC5_PWC = (uint16)0u;
#if 0

    // Port input
    IDD_PORT_WPREG_PPC(PPC_PCFGR409, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR410, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR411, (uint16)0x1000u );
    IDD_PORT_WPREG_PPC(PPC_PCFGR412, (uint16)0x1000u );
#endif
}


void StpDrv_EnterHZ_STP5( void )
{

    // Stop the PWM
    SMC5_PWC = (uint16)0u;
#if 1
    stc_port_pin_config_t PpcConf = { PortOutputResourceGPIO };
    
    /******************/
    /* OUTPUT setting */
    /******************/
    
    PpcConf.bInputEnable          = TRUE;                  /* set PIE(Port input enable) in PPC_PCFGRi reg */
    PpcConf.bNoiseFilterEnable    = FALSE;                  /* set NFE(Port noise filter enable/disable ) in PPC_PCFGRi reg */
    PpcConf.enGpioDirection       = PortGpioInput;         /* set GPIO_DDSRi */
    PpcConf.enInputLevel          = PortInputLevelCmosA;    /* set PIL(Port Input Level) in PPC_PCFGRi reg */
    PpcConf.enOutputDrive         = PortOutputDriveA;       /* set ODR(port Output DRive selection) in PPC_PCFGRi reg */
    PpcConf.enOutputFunction      = PortOutputResourceGPIO;    /* set POF(Port Output Function) in PPC_PCFGRi reg */
                                                            /*     011:Resource D */
    PpcConf.enPullResistor        = PortPullResistorNone;   /* set for PUE(Pull Up Enable) and PDE(Pull Down Enable) */
                                                            /*     None=0: no pull up & no pull down */
    PpcConf.enGpioInitOutputLevel = PortGpioLow;           /* set GPIO_POSRi(Port Output Set Register) */
    Port_SetPinConfig(4, 9, &PpcConf);
    Port_SetPinConfig(4, 10, &PpcConf);
    Port_SetPinConfig(4, 11, &PpcConf);
    Port_SetPinConfig(4, 12, &PpcConf);
#endif
}

void StpDrv_LeaveHZ_STP5( void )
{
#if 1
    stc_port_pin_config_t PpcConf = { PortOutputResourceGPIO };
    
    /******************/
    /* OUTPUT setting */
    /******************/
    
    PpcConf.bInputEnable          = FALSE;                  /* set PIE(Port input enable) in PPC_PCFGRi reg */
    PpcConf.bNoiseFilterEnable    = FALSE;                  /* set NFE(Port noise filter enable/disable ) in PPC_PCFGRi reg */
    PpcConf.enGpioDirection       = PortGpioOutput;         /* set GPIO_DDSRi */
    PpcConf.enInputLevel          = PortInputLevelCmosA;    /* set PIL(Port Input Level) in PPC_PCFGRi reg */
    PpcConf.enOutputDrive         = PortOutputDriveD;       /* set ODR(port Output DRive selection) in PPC_PCFGRi reg */
    PpcConf.enOutputFunction      = PortOutputResourceB;    /* set POF(Port Output Function) in PPC_PCFGRi reg */
                                                            /*     011:Resource D */
    PpcConf.enPullResistor        = PortPullResistorNone;   /* set for PUE(Pull Up Enable) and PDE(Pull Down Enable) */
                                                            /*     None=0: no pull up & no pull down */
    PpcConf.enGpioInitOutputLevel = PortGpioHigh;           /* set GPIO_POSRi(Port Output Set Register) */
    Port_SetPinConfig(4, 9, &PpcConf);
    Port_SetPinConfig(4, 10, &PpcConf);
    Port_SetPinConfig(4, 11, &PpcConf);
    Port_SetPinConfig(4, 12, &PpcConf);

    // high output current - 20mA, PWM function
    //IDD_PORT_WPREG_PPC(PPC_PCFGR409, (uint16)0x00C1u );
    // IDD_PORT_WPREG_PPC(PPC_PCFGR410, (uint16)0x00C1u );
    // IDD_PORT_WPREG_PPC(PPC_PCFGR411, (uint16)0x00C1u );
    //IDD_PORT_WPREG_PPC(PPC_PCFGR412, (uint16)0x00C1u );
#endif

    // 16kHz PWM, 8bit PWM
    SMC5_PWC = (uint16)0x0008u;

}


void StpDrv_SetPWM_STP5( uint16 CoilA, uint16 CoilB, uint8 SignBits )
{
#if 1
    SMC5_PWC1 = CoilA;      // set sine
    SMC5_PWC2 = CoilB;      // set cosine
    SMC5_PWS =  (uint16)((uint16)SMCQuadA[SignBits] |
               (uint16)( SMCQuadB[SignBits] << 8 )); // set signs
    SMC5_PWS_BS = 1;                   // apply position
#endif
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief   Initialization of SMC5 module for full step drive with BEMF biasing
//---------------------------------------------------------------------------------------------------------------------
void StpDrv_InitFullStep_STP5( void )
{
#if 0
    IDD_PORT_WPREG_PPC(PPC_PCFGR409, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR410, (uint16)cStpDrvPullDnCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR411, (uint16)cStpDrvPullUpCnfg );
    IDD_PORT_WPREG_PPC(PPC_PCFGR412, (uint16)cStpDrvPullDnCnfg );

    SMC5_PWC = (uint16)0u;
#endif

}

//---------------------------------------------------------------------------------------------------------------------
/// @brief   Full step port setting for SMC module 5
/// @param   FullStepSta:   Full Step State <0,1,2,3>
//---------------------------------------------------------------------------------------------------------------------
void StpDrv_FullStepOut_STP5( uint8 FullStepSta )
{
#if 0
    uint32 WrkA;

    WrkA = ((GPIO_DDR4 & 0xFFFFE1FF)|((uint32)cStpDrvFullStepDdrTbl[FullStepSta]<<9));
    IDD_PORT_WPREG_GPIO(GPIO_DDR4,WrkA);
    WrkA = ((GPIO_PODR4 & 0xFFFFE1FF)|((uint32)cStpDrvFullStepPdrTbl[FullStepSta]<<9));
    IDD_PORT_WPREG_GPIO(GPIO_PODR4,WrkA);
#endif
}


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
///   Revision 1.0  07-SEP-2016     BVIJAYKU  
//    Initial Version.
//---------------------------------------------------------------------------------------------------------------------



