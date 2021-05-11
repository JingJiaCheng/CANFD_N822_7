/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2016. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/

/*****************************************************************************

File Name        :  fbl_startup.h
Module Short Name:  vehiclecomm.core.fbl.startup.s6j3200
VOBName          :  vehiclecomm.core.fbl.startup.s6j3200\src\fbl_startup.c
Author           :  kshanmu4
Description      :  Lists the Interface function exported by FBL Startup
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_STARTUP_C
#define FBL_STARTUP_C

/**  Include Files  **/
#include "system.h"
#include "fbl_main.h"
#include "fbl_startup.h"
#include "fbl_startup_cfg.h"
#include "exceptions.h"
#include "mcu_settings.h"
#include "s6j3200_SYSC.h"
#include "s6j3200_TCFCFG.h"

/** Main PLL output divider and multipilier settings. */
#if MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_240MHZ
    #define SYSC_MAIN_PLL_DIVN          (120u)
    #define SYSC_MAIN_PLL_DIVM          (2u / 2u)
    #define SYSC_PLL_DIVL               (2u / 2u)
#elif MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_200MHZ
    #define SYSC_MAIN_PLL_DIVN          (100u)
    #define SYSC_MAIN_PLL_DIVM          (2u / 2u)
    #define SYSC_PLL_DIVL               (1u/ 2u)
/* added by ssebast1 for Amethyst support (160MHz) */
#elif MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_160MHZ
    #define SYSC_MAIN_PLL_DIVN          (160u)
    #define SYSC_MAIN_PLL_DIVM          (4u / 2u)
    #define SYSC_PLL_DIVL               (1u / 2u)
#elif MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_120MHZ
    #define SYSC_MAIN_PLL_DIVN          (120u)
    #define SYSC_MAIN_PLL_DIVM          (4u / 2u)
    #define SYSC_PLL_DIVL               (1u / 2u)
#else
    #error MCU_FREQ_CLK_MAIN_PLL_HZ invalid (select in 240, 200, 160 or 120 MHz)
#endif

/** Main SSCG output divider and multipilier settings. */
#if MCU_FREQ_CLK_SSCG_PLL_HZ == MCU_FREQ_CLK_240MHZ
    #define SYSC_MAIN_SSCG_DIVN          (120u)
    #define SYSC_MAIN_SSCG_DIVM          (2u / 2u)
    #define SYSC_SSCG_DIVL               (2u / 2u)
#elif MCU_FREQ_CLK_SSCG_PLL_HZ == MCU_FREQ_CLK_200MHZ
    #define SYSC_MAIN_SSCG_DIVN          (100u)
    #define SYSC_MAIN_SSCG_DIVM          (2u / 2u)
    #define SYSC_SSCG_DIVL               (1u / 2u)
/* added by ssebast1 for Amethyst support (160MHz) */
#elif MCU_FREQ_CLK_SSCG_PLL_HZ == MCU_FREQ_CLK_160MHZ
    #define SYSC_MAIN_SSCG_DIVN          (160u)
    #define SYSC_MAIN_SSCG_DIVM          (4u / 2u)
    #define SYSC_SSCG_DIVL               (1u / 2u)
#elif MCU_FREQ_CLK_SSCG_PLL_HZ == MCU_FREQ_CLK_120MHZ
    #define SYSC_MAIN_SSCG_DIVN          (120u)
    #define SYSC_MAIN_SSCG_DIVM          (4u / 2u)
    #define SYSC_SSCG_DIVL               (1u / 2u)
#else
    #error MCU_FREQ_CLK_SSCG_PLL_HZ invalid (select in 240, 200, 160 or 120 MHz)
#endif

/** Key to unlock one access to a System Controller configuration register by writing to SYSC0_PROTKEYR/SYSC1_PROTKEYR register */
#define SYSC_KEY_UNLOCK				      0x5CACCE55UL
/** Key to unlock the TCFLASH configuration registers by writing to TCFCFG_FCPROTKEY register */
#define TCFLASH_KEY_UNLOCK          0xCF61F1A5UL
/** Key to unlock the WorkFlash configuration registers by writing to WFCFG_CPR register */
#define WFLASH_KEY_UNLOCK           0xCF6DF1A5UL
/** Key to unlock the TCMRAM configuration registers by writing to TRCFGn_TCMUNLOCK register */
#define TCMRAM_KEY_UNLOCK           0xACC55ECCUL
/** Key to lock the TCMRAM configuration registers by writing to TRCFGn_TCMUNLOCK register */
#define TCMRAM_KEY_LOCK             0x5ECCB10CUL

/** Calculate TCFLASH wait states setting */
#if (MCU_FREQ_CLK_MAIN_PLL_HZ % MCU_TCFLASH_MAXIMUM_FREQUENCY) != 0u
    #define TCFLASH_WAIT            (MCU_FREQ_CLK_MAIN_PLL_HZ / MCU_TCFLASH_MAXIMUM_FREQUENCY)
#else
    #define TCFLASH_WAIT            (MCU_FREQ_CLK_MAIN_PLL_HZ / MCU_TCFLASH_MAXIMUM_FREQUENCY - 1u)
#endif

/** Trigger to start state transition to RUN profile settings by writing to SYSC0_TRGRUNCNTR register */
#define SYSC_TRIGGER_APPLY_RUN_PROFILE      0xABu

/** Main source clock timer pre-scaler for main osc. stabilization time.
 ** Effective value: 2^SYSC_MAIN_SCT_PRESCALER */
#define SYSC_MAINSCT_PRESCALER     	6u

/** Calculate main oscillation stabilization time setting */
#define SYSC_MAINSCT_CMPR          (((MCU_FREQ_CLK_MAIN_HZ / (1u << (SYSC_MAINSCT_PRESCALER))) * MCU_STAB_TIME_CLK_MAIN_MS + 500UL) / 1000UL)

/** PLL oscillation stabilization time setting. */
#define SYSC_PLLST_PLLSTABS         (MCU_STAB_TIME_CLK_PLL)

static void FblStartup_ConfigureMemories(void);
/*static*/ void FblStartup_ConfigureClocks(void);
static void FblStartup_ConfigureMpu(void);
static void FblStartup_DisableMpu(void);
void I2c_Init (void);
/*============================================================================
 ** Function Name:    FblStartup_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the micro-controller
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           UINT8 - Startup Reason
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblStartup_Init(void)
{
    UINT8 resetReason = FblReset_POR;
		
    // Now we are running on Fast-CR Clock
    // Release I/O-resets (3V, 3/5V domains)
    SYSC0_PROTKEYR = SYSC_KEY_UNLOCK;
    SYSC0_SPECFGR_IO35RSTC = 0u;
    SYSC0_PROTKEYR = SYSC_KEY_UNLOCK;
    SYSC0_SPECFGR_IO3RSTC = 0u;

	// Re-map exception vectors of BootROM's vector table to
	// pbl specific exception handlers
	Exceptions_Init();

	// Configure Memories
	FblStartup_ConfigureMemories();

	// Configure MPU
	FblStartup_ConfigureMpu();

	return resetReason;
}

/*============================================================================
 ** Function Name:    FblStartup_DeInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to de-initialize the micro-controller
 **                   before jumping to the application
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void FblStartup_DeInit(void)
{
    // Disable MPU
	  FblStartup_DisableMpu();
}

/*============================================================================
 ** Function Name:    FblStartup_PostInit
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the micro-controller
 **                   After this call, a reset is required before jumping
 **                   to application.
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           UINT8 - Startup Reason
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblStartup_PostInit(void)
{
    FblStartup_ConfigureClocks();
    I2c_Init();
	return FBL_OK;
}

/*============================================================================
 ** Function Name:    FblStartup_InitRAM
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the RAM
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void  FblStartup_InitRAM(void)
{
  
}

/*============================================================================
 ** Function Name:    FblStartup_InterruptDisable
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to disable interrupts
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void  FblStartup_InterruptDisable(void)
{
    __asm("CPSID I");
}

/*============================================================================
 ** \brief Configures internal memories
 **
 ** This function will set TCMRAM, System RAM and Backup RAM
 ** to 0 wait states as all these RAMs support maximum clock without
 ** wait states). Additionally, the appropriate ECC logic will be enabled
 ** disabled according to the settings in start.h.
 **
 ** \note Some registers written here are write-once registers. Ensure to
 **       call this function only one time during system start-up, otherwise
 **       an exception will be generated.
 **
**==========================================================================*/
static void FblStartup_ConfigureMemories(void)
{
    //------------------------------------------------------------------
    //  TCFLASH
    //------------------------------------------------------------------

    // Unlock configuration registers for next write access
    TCFCFG_FCPROTKEY = TCFLASH_KEY_UNLOCK;

    // Set wait states
    TCFCFG_FCFGR_FAWC = TCFLASH_WAIT;

    // Unlock configuration registers for next write access
    TCFCFG_FCPROTKEY = TCFLASH_KEY_UNLOCK;
    // Enable/disable ECC logic (write-once register)
    TCFCFG_FECCCTRL_ECCOFF = (MCU_TCFLASH_ECC_ENABLE == MCU_ENABLE) ? 0u : 1u;

    //------------------------------------------------------------------
    //  WorkFlash
    //------------------------------------------------------------------

    // Unlock configuration registers for next write access
    WFCFG_CPR = WFLASH_KEY_UNLOCK;
    // Enable/disable ECC logic (write-once register)
    WFCFG_ECR_ECCOFF = (MCU_WORKFLASH_ECC_ENABLE == MCU_ENABLE) ? 0u : 1u;

    //------------------------------------------------------------------
    //  TCMRAM
    //------------------------------------------------------------------
    
    // Unlock configuration registers
    TRCFG0_TCMUNLOCK = TCMRAM_KEY_UNLOCK;
    while (TRCFG0_TCMCFG0_LOCKSTATUS == 1u)
    {
    }
    
    // Set 0 wait states
    TRCFG0_TCMCFG0_DWAIT = 0u;
    
    // Lock configuration registers
    TRCFG0_TCMUNLOCK = TCMRAM_KEY_LOCK;
    while (TRCFG0_TCMCFG0_LOCKSTATUS == 0u)
    {
    }

#ifdef FBL_STARTUP_INIT_SYSTEM_RAM
    /*------------------------------------------------------------------*/
    /*  System RAM                                                      */
    /*------------------------------------------------------------------*/

    // Avoid changing of settings if code is executed from System RAM
    if (Start_stcClearEccMemories.u32SysRamSizeByte > 0u) 
    {
        // Unlock configuration registers
        SRCFG_KEY = SYSRAM_KEY_UNLOCK;
        while (SRCFG_CFG0_LOCK_STATUS == 1u)
        {
        }

        // Set wait states for read and write access (1wait: over 180MHz(CLK_HPM))
        if (MCU_FREQ_CLK_SSCG_PLL_HZ == MCU_FREQ_CLK_200MHZ)
        {
            SRCFG_CFG0_RDWAIT = 1u;
        }
        else
        {
            SRCFG_CFG0_RDWAIT = 0u;
        }
        SRCFG_CFG0_WRWAIT = 0u;

        // Enable/disable ECC logic (write-once register)
        SRCFG_ECCE_ECCEN = (MCU_SYSRAM_ECC_ENABLE == MCU_ENABLE) ? 1u : 0u;

        // Lock configuration registers
        SRCFG_KEY = SYSRAM_KEY_LOCK;
        while (SRCFG_CFG0_LOCK_STATUS == 0u)
        {
        }
    }
#endif


#ifdef FBL_STARTUP_INIT_BACKUP_RAM
    //------------------------------------------------------------------
    //  Backup RAM
    //------------------------------------------------------------------
    // Unlock configuration registers
    BURIF_UNLOCK        =   BURAM_KEY_UNLOCK;
    while (BURIF_STATUS_LOCKSTATUS == 1u)
    {
    }
    
    // Enable/disable ECC logic
    BURIF_EDPCR_SKPG    =   (MCU_BURAM_ECC_ENABLE == MCU_ENABLE) ? 0u : 1u;
    
    // Lock configuration registers
    BURIF_UNLOCK        =   BURAM_KEY_LOCK;
    while (BURIF_STATUS_LOCKSTATUS == 0u)
    {
    }
#endif

}

/*============================================================================
 ** \brief Configures clocks
 **
 ** The function will configure a RUN profile according to the settings
 ** below. It will synchronously wait for the completion of the state
 ** transition to the new RUN profile.
 **
 ** RUN profile settings:
 ** - all Power Domains enabled (PD2,PD3,PD4,PD5,PD6)
 ** - Source oscillation:
 **   > Main Oscillation:           enabled
 **   > Sub Oscillation:            disabled
 **   > Fast RC Oscillation:        enabled
 **   > Slow RC Oscillation:        enabled
 ** - PLLs:
 **   > Main PLL:   enabled, configured for MCU_FREQ_CLK_MAIN_PLL_HZ
 **   > SSCG PLL:   enabled, configured for MCU_FREQ_CLK_SSCG_PLL_HZ
 **                 clock modulation is disabled.
 ** - Clock selection:
 **   > See comment below in the code
 ** - Oscillation stabilization wait time (default)
 ** - Low Voltage Detection (default settings, will cause reset in case of LV)
 ** - Clock Supervisors (all disabled)
 **
 ** \note The sub-oscillator will be disabled in this function, to speed up
 **       the start-up process. Otherwise the time for switching system
 **       clock to PLL would be prolonged by the sub-oscillator stabilization
 **       time, typically about 300 ms (default 2 s).
 **       It is recommended to enable the sub-oscillator after this function
 **       and without synchronously waiting for RUN-2-RUN completion.
 ============================================================================*/
/*static*/ void FblStartup_ConfigureClocks(void)
{
    // At first, disable PSS profile update.
    // This setting is for wakeup from shutdown mode.
    // note: SYSC1 was cleared by hardware after PSS profile is updated, but SYSC0 was not cleared.
    SYSC0_PROTKEYR      = SYSC_KEY_UNLOCK;
    SYSC0_PSSENR_0_PSSEN0 = 0u;

    //------------------------------------------------------------------
    //  Set main oscillator and main PLL stabilization time
    //------------------------------------------------------------------

    // Main Clock settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    
    SYSC_7.unMOSCCNTR.stcField      =   (stc_sysc_7_mosccntr_field_t){      .u1DIV2SEL  = 0u,    // Main clock not divided by 2
                                                                            .u2MCGAIN   = 1u,    // Main clock gain characteristic for 4MHz
                                                                            .u1MCMODE   = 0u,    // Main clock amplifier oscillation mdoe
                                                                            .u1FCIMEN   = 0u };  // Fast clock input mode is disabled

    // Set new main oscillation stabilization time and trigger data update
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_6.unMOCTCPR.stcField       =   (stc_sysc_6_moctcpr_field_t){      .u4PSCL      = SYSC_MAINSCT_PRESCALER,   // pre-scaler
                                                                           .u16CMPR     = SYSC_MAINSCT_CMPR };      // compare value
    // trigger configuration capture
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_6.unMOCTTRGR.stcField      =   (stc_sysc_6_mocttrgr_field_t){     .u1CGCPT     = 1u };
    
    // Set PLL / SSCG stabilization time
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unPLLSSCGSTCNTR.stcField = (stc_sysc_7_pllsscgstcntr_field_t){  .u4PLLSTABS  = SYSC_PLLST_PLLSTABS,
                                                                           .u4SSCGSTABS = SYSC_PLLST_PLLSTABS, };
    
    //------------------------------------------------------------------
    //  Configure run profile
    //------------------------------------------------------------------
    // Enable power domains
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNPDCFGR.stcField    =   (stc_sysc0_1_runpdcfgr_field_t){    .u1PD6_1EN  =   1u,  // switch on PD6_1 ()
                                                                            .u1PD6_0EN  =   1u,  // switch on PD6_0 ()
                                                                            .u1PD5_3EN  =   1u,  // switch on PD5_3 ()
                                                                            .u1PD5_2EN  =   1u,  // switch on PD5_2 ()
                                                                            .u1PD5_1EN  =   1u,  // switch on PD5_1 ()
                                                                            .u1PD5_0EN  =   1u,  // switch on PD5_0 ()
                                                                            .u1PD4_1EN  =   1u,  // switch on PD4_1 (Backup RAM1)
                                                                            .u1PD4_0EN  =   1u,  // switch on PD4_0 (Backup RAM0)
                                                                            .u1PD3EN    =   1u,  // always on (Core)
                                                                            .u1PD2EN    =   1u };// always on (Peripheral)
    
    // Enable oscillators
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNCKSRER.stcField    =   (stc_sysc0_1_runcksrer_field_t){    .u1SSCG3EN  =   1u,  // enalbe SSCG3
                                                                            .u1SSCG2EN  =   1u,  // enalbe SSCG2
                                                                            .u1SSCG1EN  =   1u,  // enalbe SSCG1
                                                                            .u1SSCG0EN  =   1u,  // enalbe SSCG0
                                                                            .u1PLL3EN   =   1u,  // enable PLL3
                                                                            .u1PLL2EN   =   1u,  // enable PLL2
                                                                            .u1PLL1EN   =   1u,  // enable PLL1
                                                                            .u1PLL0EN   =   1u,  // enable PLL0
                                                                            .u1SOSCEN   =   0u,  // disable Sub Oscillation
                                                                            .u1MOSCEN   =   1u,  // enable Main Oscillation
                                                                            .u1CROSCEN  =   1u,  // RC Osc. (always on in RUN state)
                                                                            .u1SCROSCEN =   1u };// Slow RC Osc. (always on in RUN state)
    
    //------------------------------------------------------------------
    // Write Main PLL0 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNPLL0CNTR.stcField  =   (stc_sysc0_1_runpll0cntr_field_t){  .u1PLL0ISEL =   0u,                     // use Main Clock as PLL input clock
                                                                            .u8PLL0DIVN =   (SYSC_MAIN_PLL_DIVN),  // set PLL input multiplication value
                                                                            .u4PLL0DIVM =   (SYSC_MAIN_PLL_DIVM),  // set PLL output divider
                                                                            .u2PLL0DIVL =   (SYSC_PLL_DIVL)};      // set PLL input divider

    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unPLL0CGCNTR.stcField    =   (stc_sysc_7_pllncgcntr_field_t){    .u8PLLCGLP  =   4u,  // Loops per step
                                                                            .u2PLLCGSTP =   1u,  // 2 steps
                                                                            .u6PLLCGSSN =   8u,  // Start step = 8
                                                                            .u1PLLCGSTR =   0u,  // Start gear operation
                                                                            .u1PLLCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Write Main PLL1 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNPLL1CNTR.stcField  =   (stc_sysc0_1_runpll1cntr_field_t){  .u1PLL1ISEL =   0u,      // use Main Clock as PLL input clock
                                                                            .u8PLL1DIVN =   180u,//0xA0,   // set PLL input multiplication value (4*180)/2 = 320MHz)
                                                                            .u4PLL1DIVM =   0x01u,   // set PLL output divider //For Iris Engine//GCC: change from 2 to 1 to get 360 MHz ref_clk instead of 180 Mhz 
                                                                            .u2PLL1DIVL =   SYSC_PLL_DIVL};  // set PLL input divider

    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unPLL1CGCNTR.stcField    =   (stc_sysc_7_pllncgcntr_field_t){    .u8PLLCGLP  =   4u,  // Loops per step
                                                                            .u2PLLCGSTP =   1u,  // 2 steps
                                                                            .u6PLLCGSSN =   8u,  // Start step = 8
                                                                            .u1PLLCGSTR =   0u,  // Start gear operation
                                                                            .u1PLLCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Write Main PLL2 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNPLL2CNTR.stcField  =   (stc_sysc0_1_runpll2cntr_field_t){  .u1PLL2ISEL =   0u,                     // use Main Clock as PLL input clock
                                                                            .u8PLL2DIVN =   (SYSC_MAIN_PLL_DIVN),  // set PLL input multiplication value
                                                                            .u4PLL2DIVM =   (SYSC_MAIN_PLL_DIVM),  // set PLL output divider
                                                                            .u2PLL2DIVL =   (SYSC_PLL_DIVL)};      // set PLL input divider

    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unPLL2CGCNTR.stcField    =   (stc_sysc_7_pllncgcntr_field_t){    .u8PLLCGLP  =   4u,  // Loops per step
                                                                            .u2PLLCGSTP =   1u,  // 2 steps
                                                                            .u6PLLCGSSN =   8u,  // Start step = 8
                                                                            .u1PLLCGSTR =   0u,  // Start gear operation
                                                                            .u1PLLCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Write Main PLL3 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNPLL3CNTR.stcField  =   (stc_sysc0_1_runpll3cntr_field_t){  .u1PLL3ISEL =   0u,                     // use Main Clock as PLL input clock
                                                                            .u8PLL3DIVN =   (SYSC_MAIN_PLL_DIVN),  // set PLL input multiplication value
                                                                            .u4PLL3DIVM =   (SYSC_MAIN_PLL_DIVM),  // set PLL output divider
                                                                            .u2PLL3DIVL =   (SYSC_PLL_DIVL)};      // set PLL input divider

    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unPLL3CGCNTR.stcField    =   (stc_sysc_7_pllncgcntr_field_t){    .u8PLLCGLP  =   4u,  // Loops per step
                                                                            .u2PLLCGSTP =   1u,  // 2 steps
                                                                            .u6PLLCGSSN =   8u,  // Start step = 8
                                                                            .u1PLLCGSTR =   0u,  // Start gear operation
                                                                            .u1PLLCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Write SSCG PLL0 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNSSCG0CNTR0.stcField = (stc_sysc0_1_runsscg0cntr0_field_t){ .u1SSCG0ISEL =  0u,                      // use Main Clock as PLL input clock
                                                                            .u8SSCG0DIVN =  (SYSC_MAIN_SSCG_DIVN),  // set SSCG PLL input multiplication value
                                                                            .u4SSCG0DIVM =  (SYSC_MAIN_SSCG_DIVM),  // set SSCG PLL output divider
                                                                            .u2SSCG0DIVL =  (SYSC_SSCG_DIVL)};      // set SSCG PLL input divider
#ifdef ENABLE_MODULATION_OF_SSCG_PLL0
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;        
    SYSC0_1.unRUNSSCG0CNTR1.stcField=   (stc_sysc0_1_runsscg0cntr1_field_t){.u10SSCG0RATE   =  0x19Au,   // set clock modulation ratio to 5%
                                                                            .u1SSCG0MODE    =  0u,      // set modulation mode to Down Spread Mode
                                                                            .u2SSCG0FREQ    =  0u,      // set modulation frequency to (1/1024) x Fin
                                                                            .u1SSCG0SSEN    =  1u };    // Enable modulation
#endif /* ENABLE_MODULATION_OF_SSCG_PLL0 */
    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unSSCG0CGCNTR.stcField    =   (stc_sysc_7_sscgncgcntr_field_t){  .u8SSCGCGLP  =   4u,  // Loops per step
                                                                            .u2SSCGCGSTP =   1u,  // 2 steps
                                                                            .u6SSCGCGSSN =   8u,  // Start step = 8
                                                                            .u1SSCGCGSTR =   0u,  // Start gear operation
                                                                            .u1SSCGCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Write SSCG PLL1 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNSSCG1CNTR0.stcField = (stc_sysc0_1_runsscg1cntr0_field_t){ .u1SSCG1ISEL =  0u,                      // use Main Clock as PLL input clock
                                                                            .u8SSCG1DIVN =  (SYSC_MAIN_SSCG_DIVN),  // set SSCG PLL input multiplication value
                                                                            .u4SSCG1DIVM =  (SYSC_MAIN_SSCG_DIVM),  // set SSCG PLL output divider
                                                                            .u2SSCG1DIVL =  (SYSC_SSCG_DIVL)};      // set SSCG PLL input divider

#ifdef ENABLE_MODULATION_OF_SSCG_PLL1 
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;        
    SYSC0_1.unRUNSSCG1CNTR1.stcField=   (stc_sysc0_1_runsscg1cntr1_field_t){.u10SSCG1RATE   =  0x19Au,   // set clock modulation ratio to 5%
                                                                            .u1SSCG1MODE    =  1u,      // set modulation mode to Center Spread Mode
                                                                            .u2SSCG1FREQ    =  0u,      // set modulation frequency to (1/1024) x Fin
                                                                            .u1SSCG1SSEN    =  1u };    // Enable modulation
#endif /* ENABLE_MODULATION_OF_AXI_CLK */
    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unSSCG1CGCNTR.stcField    =   (stc_sysc_7_sscgncgcntr_field_t){  .u8SSCGCGLP  =   4u,  // Loops per step
                                                                            .u2SSCGCGSTP =   1u,  // 2 steps
                                                                            .u6SSCGCGSSN =   8u,  // Start step = 8
                                                                            .u1SSCGCGSTR =   0u,  // Start gear operation
                                                                            .u1SSCGCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Write SSCG PLL2 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNSSCG2CNTR0.stcField = (stc_sysc0_1_runsscg2cntr0_field_t){ .u1SSCG2ISEL =  0u,     // use Main Clock as PLL input clock
                                                                            .u8SSCG2DIVN =  0x64u,  // set SSCG PLL input multiplication value (0x64=100)
                                                                            .u4SSCG2DIVM =  0x1u,   // set SSCG PLL output divider
                                                                            .u2SSCG2DIVL =  0x0u }; // set SSCG PLL input divider

    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unSSCG2CGCNTR.stcField    =   (stc_sysc_7_sscgncgcntr_field_t){  .u8SSCGCGLP  =   4u,  // Loops per step
                                                                            .u2SSCGCGSTP =   1u,  // 2 steps
                                                                            .u6SSCGCGSSN =   8u,  // Start step = 8
                                                                            .u1SSCGCGSTR =   0u,  // Start gear operation
                                                                            .u1SSCGCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Write SSCG PLL3 settings
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNSSCG3CNTR0.stcField = (stc_sysc0_1_runsscg3cntr0_field_t){ .u1SSCG3ISEL =  0u,                      // use Main Clock as PLL input clock
                                                                            .u8SSCG3DIVN =  (200u),  /* EMC spec default - Hyperflash @ 100 MHz; SSCGPLL3 = 400MHz*/ // set SSCG PLL input multiplication value                                                                           
                                                                            .u4SSCG3DIVM =  (1u),  // set SSCG PLL output divider
                                                                            .u2SSCG3DIVL =  (SYSC_SSCG_DIVL)};      // set SSCG PLL input divider
#ifdef ENABLE_MODULATION_OF_SSCG_PLL3
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;        
    SYSC0_1.unRUNSSCG3CNTR1.stcField=   (stc_sysc0_1_runsscg3cntr1_field_t){.u10SSCG3RATE   =  0x19Au,   // set clock modulation ratio to 5.0%
                                                                            .u1SSCG3MODE    =  0u,      // set modulation mode to Down Spread Mode
                                                                            .u2SSCG3FREQ    =  0u,      // set modulation frequency to (1/1024) x Fin
                                                                            .u1SSCG3SSEN    =  1u };    // Enable modulation
#endif /* ENABLE_MODULATION_OF_SSCG_PLL3 */

    // Clock gear
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC_7.unSSCG3CGCNTR.stcField    =   (stc_sysc_7_sscgncgcntr_field_t){  .u8SSCGCGLP  =   4u,  // Loops per step
                                                                            .u2SSCGCGSTP =   1u,  // 2 steps
                                                                            .u6SSCGCGSSN =   8u,  // Start step = 8
                                                                            .u1SSCGCGSTR =   0u,  // Start gear operation
                                                                            .u1SSCGCGEN  =   1u}; // Enable

    //------------------------------------------------------------------
    // Select clock sources
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0 
    SYSC0_1.unRUNCKSELR.stcField    =   (stc_sysc0_1_runckselr_field_t){    .u3CDMCUCCSL=   5u}; // Clock domain MCUC clock = SSCG0
    
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKSELR0.stcField     =   (stc_sysc1_runckselr0_field_t){     .u4HSSPICSL =   9u,  // Hsspi clock domain = SSCG1
                                                                            .u1LAPP1ACSL=   0u,  // LAPP1A clock = CD0 (1=PLL0)
                                                                            .u1LAPP0ACSL=   0u,  // LAPP0A clock = CD0 (1=PLL0)
                                                                            .u1LCP1ACSL =   0u,  // LCP1A clock = CD0 (1=PLL0)
                                                                            .u1LCP0ACSL =   0u,  // LCP0A clock = CD0 (1=PLL0)
                                                                            .u3CD0CSL   =   5u}; // CD0 clock domain = SSCG0
    
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKSELR1.stcField     =   (stc_sysc1_runckselr1_field_t){     .u4CD4CSL   =   6u,  // CD4 clock domain = PLL2
                                                                            .u4CD3CSL   =  10u,  // CD3 clock domain = SSCG2
                                                                            .u4CD2CSL   =   9u,  // CD2 clock domain = PLL1
                                                                            .u4CD1CSL   =  11u}; // CD1 clock domain = SSCG3

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKSELR2.stcField     =   (stc_sysc1_runckselr2_field_t){     .u3TRCCSL   =   6u,  // TRC clock = PLL1
                                                                            .u4CD5CSL   =   7u}; // CD5 clock domain = PLL3
    
    //------------------------------------------------------------------
    // Enable clocks
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    
    SYSC1.unRUNCKER0.stcField       =   (stc_sysc1_runcker0_field_t) {      .u1ENCLKCPU0    =   1u,      // Enable CPU0
                                                                            .u1ENCLKATB     =   1u,      // Enable ATB
                                                                            .u1ENCLKDBG     =   1u,      // Enable DBG
                                                                            .u1ENCLKTRC     =   1u,      // Enable TRC
                                                                            .u1ENCLKHPM2    =   1u,      // Enable HPM2
                                                                            .u1ENCLKHPM     =   1u,      // Enable HPM
                                                                            .u1ENCLKDMA     =   1u,      // Enable DMA
                                                                            .u1ENCLKMEMC    =   1u,      // Enable MEMC
                                                                            .u1ENCLKEXTBUS  =   1u,      // Enable EXTBUS
                                                                            .u1ENCLKSYSC1   =   1u,      // Enable SYSC1
                                                                            .u1ENCLKHAPP0A0 =   1u,      // Enable HAPP0A0
                                                                            .u1ENCLKHAPP0A1 =   1u,      // Enable HAPP0A1
                                                                            .u1ENCLKHAPP1B0 =   1u,      // Enable HAPP1B0
                                                                            .u1ENCLKHAPP1B1 =   1u,      // Enable HAPP1B1
                                                                            .u1ENCLKLLPBM   =   1u,      // Enable LLPBM
                                                                            .u1ENCLKLLPBM2  =   1u,      // Enable LLPBM2
                                                                            .u1ENCLKLCP     =   1u,      // Enable LCP
                                                                            .u1ENCLKLCP0    =   1u,      // Enable LCP0
                                                                            .u1ENCLKLCP1    =   1u,      // Enable LCP1
                                                                            .u1ENCLKLAPP0   =   1u,      // Enable LAPP0
                                                                            .u1ENCLKLAPP1   =   1u,      // Enable LAPP1
                                                                            .u1ENCLKLCP0A   =   1u,      // Enable LCP0A
                                                                            .u1ENCLKLCP1A   =   1u,      // Enable LCP1A
                                                                            .u1ENCLKLAPP0A  =   1u,      // Enable LAPP0A
                                                                            .u1ENCLKLAPP1A  =   1u };    // Enable LAPP1A

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKER1.stcField       =   (stc_sysc1_runcker1_field_t) {      .u1ENCLKCD3B1   =   1u,  // Enable CD3B1
                                                                            .u1ENCLKCD3B0   =   1u,  // Enable CD3B0
                                                                            .u1ENCLKCD3A1   =   1u,  // Enable CD3A1
                                                                            .u1ENCLKCD3A0   =   1u,  // Enable CD3A0
                                                                            .u1ENCLKCD3     =   1u,  // Enable CD3
                                                                            .u1ENCLKCD2B1   =   1u,  // Enable CD2B1
                                                                            .u1ENCLKCD2B0   =   1u,  // Enable CD2B0
                                                                            .u1ENCLKCD2A1   =   1u,  // Enable CD2A1
                                                                            .u1ENCLKCD2A0   =   1u,  // Enable CD2A0
                                                                            .u1ENCLKCD2     =   1u,  // Enable CD2
                                                                            .u1ENCLKCD1B1   =   1u,  // Enable CD1B1
                                                                            .u1ENCLKCD1B0   =   1u,  // Enable CD1B0
                                                                            .u1ENCLKCD1A1   =   1u,  // Enable CD1A1
                                                                            .u1ENCLKCD1A0   =   1u,  // Enable CD1A0
                                                                            .u1ENCLKCD1     =   1u,  // Enable CD1
                                                                            .u1ENCLKHSSPI   =   1u}; // Enable HSSPI

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKER2.stcField       =   (stc_sysc1_runcker2_field_t) {      .u1ENCLKCD5B1   =   1u,  // Enable CD5B1
                                                                            .u1ENCLKCD5B0   =   1u,  // Enable CD5B0
                                                                            .u1ENCLKCD5A1   =   1u,  // Enable CD5A1
                                                                            .u1ENCLKCD5A0   =   1u,  // Enable CD5A0
                                                                            .u1ENCLKCD5     =   1u,  // Enable CD5
                                                                            .u1ENCLKCD4B1   =   1u,  // Enable CD4B1
                                                                            .u1ENCLKCD4B0   =   1u,  // Enable CD4B0
                                                                            .u1ENCLKCD4A1   =   1u,  // Enable CD4A1
                                                                            .u1ENCLKCD4A0   =   1u,  // Enable CD4A0
                                                                            .u1ENCLKCD4     =   1u}; // Enable CD4

    //------------------------------------------------------------------
#if MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_240MHZ
    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNCKDIVR.stcField    =   (stc_sysc0_1_runckdivr_field_t) {   .u4MCUCPDIV     =   0u,  // MCUconfig APB clock divider = 1
                                                                            .u5MCUCHDIV     =   3u}; // MCUconfig AHB clock divider = 4

    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR0.stcField     =   (stc_sysc1_runckdivr0_field_t) {    .u3HPMDIV       =   1u,  // HPM clock divider = 2
                                                                            .u5TRCDIV       =   4u,  // TRC Clock divider = 5
                                                                            .u2DBGDIV       =   0u,  // DBG Clock divider = 1
                                                                            .u2ATBDIV       =   1u,  // ATB Clock divider = 2
                                                                            .u5SYSDIV       =   0u}; // System Clock divider = 1

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR1.stcField     =   (stc_sysc1_runckdivr1_field_t) {    .u4HAPP1B1DIV   =   1u,  // HAPP1B1 clock divider = 2
                                                                            .u4HAPP1B0DIV   =   1u,  // HAPP1B0 Clock divider = 2
                                                                            .u4HAPP0A1DIV   =   0u,  // HAPP0A1 Clock divider = 1
                                                                            .u4HAPP0A0DIV   =   2u,  // HAPP0A0 Clock divider = 3
                                                                            .u4SYSC1DIV     =   2u,  // SYSC1 Clock divider = 3
                                                                            .u3EXTBUSDIV    =   2u}; // EXTBUS Clock divider = 4

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR2.stcField     =   (stc_sysc1_runckdivr2_field_t) {    .u4LAPP1DIV     =   5u,  // LAPP1 clock divider = 6
                                                                            .u4LAPP0DIV     =   5u,  // LAPP0 Clock divider = 6
                                                                            .u4LCP1DIV      =   5u,  // LCP1 Clock divider = 6
                                                                            .u4LCP0DIV      =   5u,  // LCP0 Clock divider = 6
                                                                            .u2LCPDIV       =   2u}; // LCP Clock divider = 4

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR3.stcField     =   (stc_sysc1_runckdivr3_field_t) {    .u5LAPP1ADIV    =   5u,  // LAPP1A clock divider = 6
                                                                            .u5LAPP0ADIV    =   5u,  // LAPP0A Clock divider = 6
                                                                            .u5LCP1ADIV     =   3u,  // LCP1A Clock divider = 4
                                                                            .u5LCP0ADIV     =   3u}; // LCP0A Clock divider = 4

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR4.stcField     =   (stc_sysc1_runckdivr4_field_t){     .u5HSSPIDIV     =   0u };// HSSPI clock divider = 0

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR5.stcField     =   (stc_sysc1_runckdivr5_field_t){     .u4CD1B1DIV     =   0u,  // CD1B1DIV clock divider = 1
                                                                            .u4CD1B0DIV     =   3u,  // CD1B0DIV clock divider = 4
                                                                            .u4CD1A1DIV     =   0u,  // CD1A1DIV clock divider = 1
                                                                            .u4CD1A0DIV     =   3u,  // CD1A0DIV clock divider = 4
                                                                            .u5CD1DIV       =   0u}; // CD1DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR6.stcField     =   (stc_sysc1_runckdivr6_field_t){     .u4CD2B1DIV     =   0u,  // CD2B1DIV clock divider = 1
                                                                            .u4CD2B0DIV     =   0u,  // CD2B0DIV clock divider = 1
                                                                            .u4CD2A1DIV     =   0u,  // CD2A1DIV clock divider = 1
                                                                            .u4CD2A0DIV     =   0u,  // CD2A0DIV clock divider = 1
                                                                            .u5CD2DIV       =   0u}; // CD2DIV clock divider = 1 
 
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR7.stcField     =   (stc_sysc1_runckdivr7_field_t){     .u4CD3B1DIV     =   0u,  // CD3B1DIV clock divider = 1
                                                                            .u4CD3B0DIV     =   0u,  // CD3B0DIV clock divider = 1
                                                                            .u4CD3A1DIV     =   0u,  // CD3A1DIV clock divider = 1
                                                                            .u4CD3A0DIV     =   0u,  // CD3A0DIV clock divider = 1
                                                                            .u5CD3DIV       =   0u}; // CD3DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR8.stcField     =   (stc_sysc1_runckdivr8_field_t){     .u4CD4B1DIV     =   0u,  // CD4B1DIV clock divider = 1
                                                                            .u4CD4B0DIV     =   0u,  // CD4B0DIV clock divider = 1
                                                                            .u4CD4A1DIV     =   0u,  // CD4A1DIV clock divider = 1
                                                                            .u4CD4A0DIV     =   0u,  // CD4A0DIV clock divider = 1
                                                                            .u5CD4DIV       =   1u}; // CD4DIV clock divider = 2 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR9.stcField     =   (stc_sysc1_runckdivr9_field_t){     .u4CD5B1DIV     =   0u,  // CD5B1DIV clock divider = 1
                                                                            .u4CD5B0DIV     =   3u,  // CD5B0DIV clock divider = 4
                                                                            .u4CD5A1DIV     =   0u,  // CD5A1DIV clock divider = 1
                                                                            .u4CD5A0DIV     =   1u,  // CD5A0DIV clock divider = 2
                                                                            .u5CD5DIV       =   0u}; // CD5DIV clock divider = 1 

#elif MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_200MHZ
    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNCKDIVR.stcField    =   (stc_sysc0_1_runckdivr_field_t) {   .u4MCUCPDIV     =   0u,  // MCUconfig APB clock divider = 1
                                                                            .u5MCUCHDIV     =   2u}; // MCUconfig AHB clock divider = 3

    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR0.stcField     =   (stc_sysc1_runckdivr0_field_t) {    .u3HPMDIV       =   0u,  // HPM clock divider = 1
                                                                            .u5TRCDIV       =   3u,  // TRC Clock divider = 4
                                                                            .u2DBGDIV       =   0u,  // DBG Clock divider = 1
                                                                            .u2ATBDIV       =   1u,  // ATB Clock divider = 2
                                                                            .u5SYSDIV       =   0u}; // System Clock divider = 1

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR1.stcField     =   (stc_sysc1_runckdivr1_field_t) {    .u4HAPP1B1DIV   =   1u,  // HAPP1B1 clock divider = 2
                                                                            .u4HAPP1B0DIV   =   3u,  // HAPP1B0 Clock divider = 4
                                                                            .u4HAPP0A1DIV   =   0u,  // HAPP0A1 Clock divider = 1
                                                                            .u4HAPP0A0DIV   =   4u,  // HAPP0A0 Clock divider = 5
                                                                            .u4SYSC1DIV     =   4u,  // SYSC1 Clock divider = 5
                                                                            .u3EXTBUSDIV    =   3u}; // EXTBUS Clock divider = 8

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR2.stcField     =   (stc_sysc1_runckdivr2_field_t) {    .u4LAPP1DIV     =   4u,  // LAPP1 clock divider = 5
                                                                            .u4LAPP0DIV     =   4u,  // LAPP0 Clock divider = 5
                                                                            .u4LCP1DIV      =   4u,  // LCP1 Clock divider = 5
                                                                            .u4LCP0DIV      =   4u,  // LCP0 Clock divider = 5
                                                                            .u2LCPDIV       =   2u}; // LCP Clock divider = 4

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR3.stcField     =   (stc_sysc1_runckdivr3_field_t) {    .u5LAPP1ADIV    =   4u,  // LAPP1A clock divider = 5
                                                                            .u5LAPP0ADIV    =   4u,  // LAPP0A Clock divider = 5
                                                                            .u5LCP1ADIV     =   2u,  // LCP1A Clock divider = 3
                                                                            .u5LCP0ADIV     =   2u}; // LCP0A Clock divider = 3

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR4.stcField     =   (stc_sysc1_runckdivr4_field_t){     .u5HSSPIDIV     =   0u };// HSSPI clock divider = 1

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR5.stcField     =   (stc_sysc1_runckdivr5_field_t){     .u4CD1B1DIV     =   0u,  // CD1B1DIV clock divider = 1
                                                                            .u4CD1B0DIV     =   1u,  // CD1B0DIV clock divider = 2
                                                                            .u4CD1A1DIV     =   0u,  // CD1A1DIV clock divider = 1
                                                                            .u4CD1A0DIV     =   1u,  // CD1A0DIV clock divider = 2
                                                                            .u5CD1DIV       =   0u}; // CD1DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR6.stcField     =   (stc_sysc1_runckdivr6_field_t){     .u4CD2B1DIV     =   0u,  // CD2B1DIV clock divider = 1
                                                                            .u4CD2B0DIV     =   0u,  // CD2B0DIV clock divider = 1
                                                                            .u4CD2A1DIV     =   0u,  // CD2A1DIV clock divider = 1
                                                                            .u4CD2A0DIV     =   0u,  // CD2A0DIV clock divider = 1
                                                                            .u5CD2DIV       =   0u}; // CD2DIV clock divider = 1 
 
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR7.stcField     =   (stc_sysc1_runckdivr7_field_t){     .u4CD3B1DIV     =   0u,  // CD3B1DIV clock divider = 1
                                                                            .u4CD3B0DIV     =   0u,  // CD3B0DIV clock divider = 1
                                                                            .u4CD3A1DIV     =   0u,  // CD3A1DIV clock divider = 1
                                                                            .u4CD3A0DIV     =   0u,  // CD3A0DIV clock divider = 1
                                                                            .u5CD3DIV       =   0u}; // CD3DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR8.stcField     =   (stc_sysc1_runckdivr8_field_t){     .u4CD4B1DIV     =   0u,  // CD4B1DIV clock divider = 1
                                                                            .u4CD4B0DIV     =   0u,  // CD4B0DIV clock divider = 1
                                                                            .u4CD4A1DIV     =   0u,  // CD4A1DIV clock divider = 1
                                                                            .u4CD4A0DIV     =   0u,  // CD4A0DIV clock divider = 1
                                                                            .u5CD4DIV       =   0u}; // CD4DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR9.stcField     =   (stc_sysc1_runckdivr9_field_t){     .u4CD5B1DIV     =   0u,  // CD5B1DIV clock divider = 1
                                                                            .u4CD5B0DIV     =   3u,  // CD5B0DIV clock divider = 4
                                                                            .u4CD5A1DIV     =   0u,  // CD5A1DIV clock divider = 1
                                                                            .u4CD5A0DIV     =   1u,  // CD5A0DIV clock divider = 2
                                                                            .u5CD5DIV       =   0u}; // CD5DIV clock divider = 1 

/* added by ssebast1 for Amethyst support (160MHz) */
#elif MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_160MHZ
    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNCKDIVR.stcField    =   (stc_sysc0_1_runckdivr_field_t) {   .u4MCUCPDIV     =   0u,  // MCUconfig APB clock divider = 0
                                                                            .u5MCUCHDIV     =   1u}; // MCUconfig AHB clock divider = 2

    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR0.stcField     =   (stc_sysc1_runckdivr0_field_t) {    .u3HPMDIV       =   0u,  // HPM clock divider = 1
                                                                            .u5TRCDIV       =   4u,  // TRC Clock divider = 5
                                                                            .u2DBGDIV       =   0u,  // DBG Clock divider = 1
                                                                            .u2ATBDIV       =   1u,  // ATB Clock divider = 2
                                                                            .u5SYSDIV       =   0u}; // System Clock divider = 0

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR1.stcField     =   (stc_sysc1_runckdivr1_field_t) {    .u4HAPP1B1DIV   =   1u,  // HAPP1B1 clock divider = 2
                                                                            .u4HAPP1B0DIV   =   1u,  // HAPP1B0 Clock divider = 2
                                                                            .u4HAPP0A1DIV   =   0u,  // HAPP0A1 Clock divider = 1
                                                                            .u4HAPP0A0DIV   =   3u,  // HAPP0A0 Clock divider = 4
                                                                            .u4SYSC1DIV     =   3u,  // SYSC1 Clock divider = 4
                                                                            .u3EXTBUSDIV    =   3u}; // EXTBUS Clock divider = 8

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR2.stcField     =   (stc_sysc1_runckdivr2_field_t) {    .u4LAPP1DIV     =   3u,  // LAPP1 clock divider = 4
                                                                            .u4LAPP0DIV     =   3u,  // LAPP0 Clock divider = 4
                                                                            .u4LCP1DIV      =   3u,  // LCP1 Clock divider = 4
                                                                            .u4LCP0DIV      =   3u,  // LCP0 Clock divider = 4
                                                                            .u2LCPDIV       =   1u}; // LCP Clock divider = 2

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR3.stcField     =   (stc_sysc1_runckdivr3_field_t) {    .u5LAPP1ADIV    =   3u,  // LAPP1A clock divider = 4
                                                                            .u5LAPP0ADIV    =   3u,  // LAPP0A Clock divider = 4
                                                                            .u5LCP1ADIV     =   9u,  // LCP1A Clock divider = 2
                                                                            .u5LCP0ADIV     =   1u}; // LCP0A Clock divider = 2

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR4.stcField     =   (stc_sysc1_runckdivr4_field_t){     .u5HSSPIDIV     =   0u };// HSSPI clock divider = 1

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR5.stcField     =   (stc_sysc1_runckdivr5_field_t){     .u4CD1B1DIV     =   0u,  // CD1B1DIV clock divider = 1
                                                                            .u4CD1B0DIV     =   3u,  // CD1B0DIV clock divider = 4
                                                                            .u4CD1A1DIV     =   0u,  // CD1A1DIV clock divider = 1
                                                                            .u4CD1A0DIV     =   3u,  // CD1A0DIV clock divider = 2
                                                                            .u5CD1DIV       =   0u}; // CD1DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR6.stcField     =   (stc_sysc1_runckdivr6_field_t){     .u4CD2B1DIV     =   0u,  // CD2B1DIV clock divider = 1
                                                                            .u4CD2B0DIV     =   0u,  // CD2B0DIV clock divider = 1
                                                                            .u4CD2A1DIV     =   0u,  // CD2A1DIV clock divider = 1
                                                                            .u4CD2A0DIV     =   0u,  // CD2A0DIV clock divider = 1
                                                                            .u5CD2DIV       =   0u}; // CD2DIV clock divider = 1
 
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR7.stcField     =   (stc_sysc1_runckdivr7_field_t){     .u4CD3B1DIV     =   0u,  // CD3B1DIV clock divider = 1
                                                                            .u4CD3B0DIV     =   0u,  // CD3B0DIV clock divider = 1
                                                                            .u4CD3A1DIV     =   0u,  // CD3A1DIV clock divider = 1
                                                                            .u4CD3A0DIV     =   0u,  // CD3A0DIV clock divider = 1
                                                                            .u5CD3DIV       =   0u}; // CD3DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR8.stcField     =   (stc_sysc1_runckdivr8_field_t){     .u4CD4B1DIV     =   0u,  // CD4B1DIV clock divider = 1
                                                                            .u4CD4B0DIV     =   0u,  // CD4B0DIV clock divider = 4
                                                                            .u4CD4A1DIV     =   0u,  // CD4A1DIV clock divider = 1
                                                                            .u4CD4A0DIV     =   0u,  // CD4A0DIV clock divider = 2
                                                                            .u5CD4DIV       =   1u}; // CD4DIV clock divider = 2

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR9.stcField     =   (stc_sysc1_runckdivr9_field_t){     .u4CD5B1DIV     =   0u,  // CD5B1DIV clock divider = 1
                                                                            .u4CD5B0DIV     =   3u,  // CD5B0DIV clock divider = 4
                                                                            .u4CD5A1DIV     =   0u,  // CD5A1DIV clock divider = 1
                                                                            .u4CD5A0DIV     =   1u,  // CD5A0DIV clock divider = 2
                                                                            .u5CD5DIV       =   0u}; // CD5DIV clock divider = 1 
#else // MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_120MHZ
    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_1.unRUNCKDIVR.stcField    =   (stc_sysc0_1_runckdivr_field_t) {   .u4MCUCPDIV     =   0u,  // MCUconfig APB clock divider = 1
                                                                            .u5MCUCHDIV     =   1u}; // MCUconfig AHB clock divider = 2

    // Set clock dividers (valid setting for all main-PLL frequencys)
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR0.stcField     =   (stc_sysc1_runckdivr0_field_t) {    .u3HPMDIV       =   0u,  // HPM clock divider = 1
                                                                            .u5TRCDIV       =   2u,  // TRC Clock divider = 3
                                                                            .u2DBGDIV       =   0u,  // DBG Clock divider = 1
                                                                            .u2ATBDIV       =   0u,  // ATB Clock divider = 1
                                                                            .u5SYSDIV       =   0u}; // System Clock divider = 1

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR1.stcField     =   (stc_sysc1_runckdivr1_field_t) {    .u4HAPP1B1DIV   =   1u,  // HAPP1B1 clock divider = 2
                                                                            .u4HAPP1B0DIV   =   1u,  // HAPP1B0 Clock divider = 2
                                                                            .u4HAPP0A1DIV   =   0u,  // HAPP0A1 Clock divider = 1
                                                                            .u4HAPP0A0DIV   =   3u,  // HAPP0A0 Clock divider = 4
                                                                            .u4SYSC1DIV     =   2u,  // SYSC1 Clock divider = 3
                                                                            .u3EXTBUSDIV    =   2u}; // EXTBUS Clock divider = 4

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR2.stcField     =   (stc_sysc1_runckdivr2_field_t) {    .u4LAPP1DIV     =   2u,  // LAPP1 clock divider = 3
                                                                            .u4LAPP0DIV     =   2u,  // LAPP0 Clock divider = 3
                                                                            .u4LCP1DIV      =   2u,  // LCP1 Clock divider = 3
                                                                            .u4LCP0DIV      =   2u,  // LCP0 Clock divider = 3
                                                                            .u2LCPDIV       =   1u}; // LCP Clock divider = 2

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR3.stcField     =   (stc_sysc1_runckdivr3_field_t) {    .u5LAPP1ADIV    =   2u,  // LAPP1A clock divider = 3
                                                                            .u5LAPP0ADIV    =   2u,  // LAPP0A Clock divider = 3
                                                                            .u5LCP1ADIV     =   1u,  // LCP1A Clock divider = 2
                                                                            .u5LCP0ADIV     =   1u}; // LCP0A Clock divider = 2

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR4.stcField     =   (stc_sysc1_runckdivr4_field_t){     .u5HSSPIDIV     =   0u };// HSSPI clock divider = 1

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR5.stcField     =   (stc_sysc1_runckdivr5_field_t){     .u4CD1B1DIV     =   0u,  // CD1B1DIV clock divider = 1
                                                                            .u4CD1B0DIV     =   1u,  // CD1B0DIV clock divider = 2
                                                                            .u4CD1A1DIV     =   0u,  // CD1A1DIV clock divider = 1
                                                                            .u4CD1A0DIV     =   1u,  // CD1A0DIV clock divider = 2
                                                                            .u5CD1DIV       =   0u}; // CD1DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR6.stcField     =   (stc_sysc1_runckdivr6_field_t){     .u4CD2B1DIV     =   0u,  // CD2B1DIV clock divider = 1
                                                                            .u4CD2B0DIV     =   0u,  // CD2B0DIV clock divider = 1
                                                                            .u4CD2A1DIV     =   0u,  // CD2A1DIV clock divider = 1
                                                                            .u4CD2A0DIV     =   0u,  // CD2A0DIV clock divider = 1
                                                                            .u5CD2DIV       =   0u}; // CD2DIV clock divider = 1 
 
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR7.stcField     =   (stc_sysc1_runckdivr7_field_t){     .u4CD3B1DIV     =   0u,  // CD3B1DIV clock divider = 1
                                                                            .u4CD3B0DIV     =   0u,  // CD3B0DIV clock divider = 1
                                                                            .u4CD3A1DIV     =   0u,  // CD3A1DIV clock divider = 1
                                                                            .u4CD3A0DIV     =   0u,  // CD3A0DIV clock divider = 1
                                                                            .u5CD3DIV       =   0u}; // CD3DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR8.stcField     =   (stc_sysc1_runckdivr8_field_t){     .u4CD4B1DIV     =   0u,  // CD4B1DIV clock divider = 1
                                                                            .u4CD4B0DIV     =   0u,  // CD4B0DIV clock divider = 1
                                                                            .u4CD4A1DIV     =   0u,  // CD4A1DIV clock divider = 1
                                                                            .u4CD4A0DIV     =   0u,  // CD4A0DIV clock divider = 1
                                                                            .u5CD4DIV       =   0u}; // CD4DIV clock divider = 1 

    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1.unRUNCKDIVR9.stcField     =   (stc_sysc1_runckdivr9_field_t){     .u4CD5B1DIV     =   0u,  // CD5B1DIV clock divider = 1
                                                                            .u4CD5B0DIV     =   1u,  // CD5B0DIV clock divider = 2
                                                                            .u4CD5A1DIV     =   0u,  // CD5A1DIV clock divider = 1
                                                                            .u4CD5A0DIV     =   0u,  // CD5A0DIV clock divider = 1
                                                                            .u5CD5DIV       =   0u}; // CD5DIV clock divider = 1 
#endif // MCU_FREQ_CLK_MAIN_PLL_HZ == MCU_FREQ_CLK_120MHZ

    //------------------------------------------------------------------
    // RUN Profile update enable
    SYSC1_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC1
    SYSC1_RUNENR_0_RUNEN1           =   SYSC_TRIGGER_APPLY_RUN_PROFILE;

    // Write the trigger value to apply the RUN profile
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_TRGRUNCNTR                =   SYSC_TRIGGER_APPLY_RUN_PROFILE;    // trigger RUN-->RUN transition
    
    
    //------------------------------------------------------------------
    // Clock gear (Trigger)
    // Trigger (SSCG) PLL Clock gearing if it is not already geared up

    if (SYSC_PLL0CGCNTR_PLLCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_PLL0CGCNTR_PLLCGSTR    =   1u;                  // Start gear operation (PLL0)
    }
    if (SYSC_PLL1CGCNTR_PLLCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_PLL1CGCNTR_PLLCGSTR    =   1u;                  // Start gear operation (PLL1)
    }
    if (SYSC_PLL2CGCNTR_PLLCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_PLL2CGCNTR_PLLCGSTR    =   1u;                  // Start gear operation (PLL2)
    }
    if (SYSC_PLL3CGCNTR_PLLCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_PLL3CGCNTR_PLLCGSTR    =   1u;                  // Start gear operation (PLL3)
    }

    if (SYSC_SSCG0CGCNTR_SSCGCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_SSCG0CGCNTR_SSCGCGSTR  =   1u;                  // Start gear operation (SSCG0)
    }
    if (SYSC_SSCG1CGCNTR_SSCGCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_SSCG1CGCNTR_SSCGCGSTR  =   1u;                  // Start gear operation (SSCG1)
    }
    if (SYSC_SSCG2CGCNTR_SSCGCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_SSCG2CGCNTR_SSCGCGSTR  =   1u;                  // Start gear operation (SSCG2)
    }
    if (SYSC_SSCG3CGCNTR_SSCGCGSTS == 0u)  // Gear up status: 0 - stop gear at min freq
    {
        SYSC0_PROTKEYR              =   SYSC_KEY_UNLOCK;    // unlock SYSC0
        SYSC_SSCG3CGCNTR_SSCGCGSTR  =   1u;                  // Start gear operation (SSCG3)
    }

    //------------------------------------------------------------------
    // Wait until the RUN profile is applied
    while (SYSC0_SYSSTSR_RUNSTS0 == 1u)
    {
    }

    // Clear RUN Profile Done flag (SYSC_SYSSTSR_RUNDN)
    SYSC0_PROTKEYR                  =   SYSC_KEY_UNLOCK;    // unlock SYSC0
    SYSC0_SYSICLR_RUNDFCLR0         =   1u;

    // Ensure that PLL clock gearing has also finished
    while ((SYSC_PLL0CGCNTR_PLLCGSTS) != 2u)                 // Gear up status: 2 - stop gear at max freq
    {
    }

    while ((SYSC_PLL1CGCNTR_PLLCGSTS) != 2u)                 // Gear up status: 2 - stop gear at max freq
    {
    }

    while ((SYSC_PLL2CGCNTR_PLLCGSTS) != 2u)                 // Gear up status: 2 - stop gear at max freq
    {
    }

    while ((SYSC_PLL3CGCNTR_PLLCGSTS) != 2u)                 // Gear up status: 2 - stop gear at max freq
    {
    }

    while ((SYSC_SSCG0CGCNTR_SSCGCGSTS) != 2u)               // Gear up status: 2 - stop gear at max freq
    {
    }

    while ((SYSC_SSCG1CGCNTR_SSCGCGSTS) != 2u)               // Gear up status: 2 - stop gear at max freq
    {
    }

    while ((SYSC_SSCG2CGCNTR_SSCGCGSTS) != 2u)               // Gear up status: 2 - stop gear at max freq
    {
    }

    while ((SYSC_SSCG3CGCNTR_SSCGCGSTS) != 2u)               // Gear up status: 2 - stop gear at max freq
    {
    }
}

/*============================================================================
 ** Initialize the Memory region by MPU
 **==========================================================================*/
static void FblStartup_ConfigureMpu(void)
{
	UINT8 Idx;
    volatile unsigned long c1_reg ;
 
	for(Idx = 0u; Idx < APP_NUM_MPU_REGIONS; Idx++)
	{
		CPU_SET_MPU_REGIONNUMBER(AppMpuConfig[Idx].Number);
		CPU_SET_MPU_REGIONBASE(AppMpuConfig[Idx].StartAddress);
		CPU_SET_MPU_REGIONACCESS(AppMpuConfig[Idx].Access);
		#ifdef DFPV_D53
		CPU_SET_MPU_REGIONSIZE_ENABLE((AppMpuConfig[Idx].Size));
		#else
		CPU_SET_MPU_REGIONSIZE_ENABLE((AppMpuConfig[Idx].Size << 1UL) + 1U);
		#endif
	}

    /*Enable MPU */
    c1_reg = MRC(15UL, 0UL, 1UL, 0UL, 0UL);     // Read CP15 register 1
	DSB(); 										// Wait till data access is complete
    c1_reg = (c1_reg | 0x01u);
    MCR(15UL, 0UL,  c1_reg, 1UL, 0UL, 0UL);   	// Copy settings back to CP15
	ISB();										// Instruction Synchronization Barrier
}

/*============================================================================
 ** De-Initialize the Memory region by MPU
 **==========================================================================*/

static void FblStartup_DisableMpu(void)
{
    volatile unsigned long c1_reg ;
		
    /*Disable MPU */
    c1_reg = MRC(15UL,0UL,1UL,0UL,0UL);
	DSB(); 
    c1_reg = (c1_reg & ~0x01u);
    MCR(15UL,0UL,c1_reg,1UL,0UL,0UL); 
	ISB(); 
}

#endif /* FBL_STARTUP_C */
/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change                     */
/******************************************************************************/
/*   Note: In the traceability column we need to trace back to the Design Doc.*/
/*   For the initial version it is traced to the Design Document section.     */
/*   For further changes it shall trace to the source of the change which may */
/*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  */
/*   other reason                                                             */
/******************************************************************************/
/*---------------------------------------------------------------------------
Date              : 26-SEP-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
