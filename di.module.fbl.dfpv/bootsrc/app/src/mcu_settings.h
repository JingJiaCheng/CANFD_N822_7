/******************************************************************************
 * $Revision: 8547 $
 * $Date:: 2014-12-01 09:55:03 +0100#$
 *****************************************************************************/
/* __DISCLAIMER_START__                                                      */
/******************************************************************************
* Copyright (C) 2014 Spansion LLC. All Rights Reserved. 
*
* This software is owned and published by: 
* Spansion LLC, 915 DeGuigne Dr. Sunnyvale, CA  94088-3453 ("Spansion").
*
* BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND 
* BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
*
* This software contains source code for use with Spansion 
* components. This software is licensed by Spansion to be adapted only 
* for use in systems utilizing Spansion components. Spansion shall not be 
* responsible for misuse or illegal use of this software for devices not 
* supported herein.  Spansion is providing this software "AS IS" and will 
* not be responsible for issues arising from incorrect user implementation 
* of the software.  
*
* SPANSION MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS), 
* ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING, 
* WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED 
* WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED 
* WARRANTY OF NONINFRINGEMENT.  
* SPANSION SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT, 
* NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT 
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, 
* LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR 
* INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT, 
* INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA, 
* SAVINGS OR PROFITS, 
* EVEN IF SPANSION HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES. 
* YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
* INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED 
* FROM, THE SOFTWARE.  
*
* This software may be replicated in part or whole for the licensed use, 
* with the restriction that this Disclaimer and Copyright notice must be 
* included with each copy of this software, whether used in part or whole, 
* at all times.
******************************************************************************/
/* __DISCLAIMER_END__                                                        */
/*****************************************************************************/
/** \file mcu_settings.h
 **
 ** MCU description file for Traveo
 **
 ** History:
 **   - 2014-09-01  0.01  HS  Initial version for Traveo
 **   - 2014-11-05  0.02  ST  New macro to access TC Flash via CPU-AXI-SLAVE
                              Fixed WorkFlash size
 *****************************************************************************/

#ifndef __MCU_SETTINGS_H__
#define __MCU_SETTINGS_H__

// File version 0xYYXX = vYY.XX
#define MCU_SETTINGS_H_VERSION          0x0001

#ifndef __FILE_VERSION_CHECK__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "s6j3200io.h"        // include mcu register header file

/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/

/** Macro to disable a feature */
#define MCU_DISABLE                     (0)
/** Macro to enable a feature */
#define MCU_ENABLE                      (1)

/* -------------------------------------------------------------------*/
/* M C U   S E R I E S                                                */
/* -------------------------------------------------------------------*/
/** MCU series setting */
#define MCU_DEVICE_S6J3200              (0x63200)     ///< MCU_SERIES: Traveo S6J3200

/** MCU type setting */
#define MCU_DEVICE                      MCU_DEVICE_S6J3200

/* -------------------------------------------------------------------*/
/* C L O C K   S E T T I N G S                                        */
/* -------------------------------------------------------------------*/

/*------------------------------------------------------------------*/
/*  Source clocks                                                   */
/*------------------------------------------------------------------*/

/** Input frequency of main oscillation in Hertz */
#define MCU_FREQ_CLK_MAIN_HZ    (4000000UL)        ///< set external main crystal frequency in Hertz

/** Input frequency of main oscillation in Hertz */
#define MCU_FREQ_CLK_SUB_HZ     (32768UL)          ///< set external sub crystal frequency in Hertz

/** Frequency of internal RC oscillator in Hertz */
#define MCU_FREQ_CLK_RC_HZ      (4000000UL)

/** Frequency of internal Slow RC oscillator in Hertz */
#define MCU_FREQ_CLK_SRC_HZ     (100000UL)

/*------------------------------------------------------------------*/
/*  Stabilization time settings                                     */
/*------------------------------------------------------------------*/

/** Stabilization time for main oscillation/crystal in milliseconds.
 ** The effective setting will be calculated with MCU_FREQ_CLK_MAIN_HZ in start.c.
 ** Please select the stabilization time with care and use confirmed start-up
 ** time value from crystal supplier!
 ** Minimum value : 5 ms
 ** Maximum value : checked in start.c (depending on prescaler) */
#define MCU_STAB_TIME_CLK_MAIN_MS   (30UL)   ///< set main osc./crystal stabilization time in milliseconds


/** fixed definition */
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_9      (0x8)     // main clock period * 2^9
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_10     (0x9)     // main clock period * 2^10
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_11     (0xA)     // main clock period * 2^11
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_12     (0xB)     // main clock period * 2^12
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_13     (0xC)     // main clock period * 2^13
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_14     (0xD)     // main clock period * 2^14
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_15     (0xE)     // main clock period * 2^15
#define MCU_STAB_TIME_CLK_PLL_MAIN_2_16     (0xF)     // main clock period * 2^16

/** Stabilization time for PLL oscillation. */
#define MCU_STAB_TIME_CLK_PLL   MCU_STAB_TIME_CLK_PLL_MAIN_2_16   ///< set PLL osc stabilization time. select from the above labels.


/*------------------------------------------------------------------*/
/*  PLL clocks                                                      */
/*------------------------------------------------------------------*/
/** fixed definition */
#define MCU_FREQ_CLK_240MHZ         (240000000UL)
#define MCU_FREQ_CLK_200MHZ         (200000000UL)
#define MCU_FREQ_CLK_160MHZ         (160000000UL)
#define MCU_FREQ_CLK_120MHZ         (120000000UL)

/** Frequency of Main PLL in Hertz (appropriate PLL settings will
 ** be calculated and set by start.c) */
#define MCU_FREQ_CLK_MAIN_PLL_HZ    MCU_FREQ_CLK_240MHZ     ///< set above label

/** Frequency of SSCG PLL in Hertz (appropriate PLL settings will
 ** be calculated and set by start.c) */
#define MCU_FREQ_CLK_SSCG_PLL_HZ    MCU_FREQ_CLK_240MHZ     ///< set above label

/*------------------------------------------------------------------*/
/*  Memory specification                                            */
/*------------------------------------------------------------------*/
/** Maximum operating frequency of the TCFLASH */
#define MCU_TCFLASH_MAXIMUM_FREQUENCY   (80000000UL)

/* -------------------------------------------------------------------*/
/* M E M O R Y   A R E A S                                            */
/* -------------------------------------------------------------------*/

/** Base address of TCM RAM interface connected to the TCM port of Traveo. */
#define MCU_TCMRAM_TCM_INTERFACE_BASE_ADDRESS       (0x00000000)

/** Base address of TCM RAM interface connected to the AXI bus
    (The TCM RAM addresses used by the Traveo core cannot be used for other bus
    masters (e.g. DMA) as the core has its own TCMRAM interface. All other bus
    masters need to access the TCMRAM via the AXI bus interface, which is
    located on the address given here.) */
#define MCU_TCMRAM_AXI_INTERFACE_BASE_ADDRESS       (0x04000000)

/** Size of TCM RAM in byte */
#define MCU_TCMRAM_SIZE_BYTE                        (64*1024)

/** Convert a TCM RAM TCM port address to a AXI port address. The resulting type will be uint32_t. */
#define MCU_TCMRAM_ADDRESS_TCM2AXI(addr)            ((MCU_TCMRAM_AXI_INTERFACE_BASE_ADDRESS) + (((uint32_t)(addr)) - (MCU_TCMRAM_TCM_INTERFACE_BASE_ADDRESS)))

/* -------------------------------------------------------------------*/

/** Base address of System RAM */
#define MCU_SYSRAM_BASE_ADDRESS                     (0x02000000)

/** Size of System RAM in byte */
#define MCU_SYSRAM_SIZE_BYTE                        (64*1024)

/* -------------------------------------------------------------------*/

/** Base address of BACKUP RAM */
#define MCU_BURAM_BASE_ADDRESS                      (0x0E800000)

/** Size of Backup RAM in byte */
#define MCU_BURAM_SIZE_BYTE                         (16*1024)

/* -------------------------------------------------------------------*/

/** Base address of Flash interface connected to the TCM port of Traveo. */
#define MCU_FLASH_TCM_INTERFACE_BASE_ADDRESS                (0x009F0000)

/** Base address of Flash interface connected to the Slave AXI port of Traveo. */
#define MCU_FLASH_TCM_CPUAXISLAVE_BASE_ADDRESS              (0x049F0000)

/** Base address of Flash interface connected to the private AXI bus
    This address area can only be accessed by the CPU core the Flash macro is assigned to. */
#define MCU_FLASH_AXI_PRIVATE_INTERFACE_BASE_ADDRESS        (0x019F0000)

/** Base address of Flash interface connected to the public AXI bus. This address area is unique in the whole MCU.
    All other bus masters (DMA controller, GFX sub-system, ...) need to access the Flash via the public AXI bus interface */
#define MCU_FLASH_AXI_PUBLIC_INTERFACE_CORE0_BASE_ADDRESS   (0x059F0000)

/** Convert a flash TCM port address to a public AXI port address. The resulting type will be uint32_t. */
#define MCU_FLASH_ADDRESS_TCM2AXI_PUBLIC_CORE0(addr)        ((MCU_FLASH_AXI_PUBLIC_INTERFACE_CORE0_BASE_ADDRESS) + (((uint32_t)(addr)) - (MCU_FLASH_TCM_INTERFACE_BASE_ADDRESS)))

/** Convert a flash TCM port address to a private AXI port address. The resulting type will be uint32_t. */
#define MCU_FLASH_ADDRESS_TCM2AXI_PRIVATE(addr)             ((MCU_FLASH_AXI_PRIVATE_INTERFACE_BASE_ADDRESS) + (((uint32_t)(addr)) - (MCU_FLASH_TCM_INTERFACE_BASE_ADDRESS)))

/** Convert a flash private AXI port address to a TCM port address. The resulting type will be uint32_t. */
#define MCU_FLASH_ADDRESS_PRIVATE_AXI2TCM(addr)             ((MCU_FLASH_TCM_INTERFACE_BASE_ADDRESS) + (((uint32_t)(addr)) - (MCU_FLASH_AXI_PRIVATE_INTERFACE_BASE_ADDRESS)))

/** Convert a flash public AXI port address (core 0) to a TCM port address. The resulting type will be uint32_t. */
#define MCU_FLASH_ADDRESS_CORE0_PUBLIC_AXI2TCM(addr)        ((MCU_FLASH_TCM_INTERFACE_BASE_ADDRESS) + (((uint32_t)(addr)) - (MCU_FLASH_AXI_PUBLIC_INTERFACE_CORE0_BASE_ADDRESS)))

/** Size of Flash in byte */
#define MCU_FLASH_SIZE_BYTE                 (1*1024*1024 + 8*8*1024) /* modified as Amethyst has only 1088KB flash size */

/* -------------------------------------------------------------------*/

/** Base address of WORK FLASH */
#define MCU_WORKFLASH_BASE_ADDRESS          (0x0E000000)

/** Size of Work Flash in byte (without sectors reserved for SHE) */
#define MCU_WORKFLASH_SIZE_BYTE             (96*1024)

/*------------------------------------------------------------------*/
/*  ECC memory settings                                             */
/*------------------------------------------------------------------*/

/** Enable/Disable the ECC logic of the System RAM */
#define MCU_SYSRAM_ECC_ENABLE               MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE

/** Enable/Disable the ECC logic of the Backup RAM */
#define MCU_BURAM_ECC_ENABLE                MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE

/** Enable/Disable the ECC logic of the TCFLASH */
#define MCU_TCFLASH_ECC_ENABLE              MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE

/** Enable/Disable the ECC logic of the WORK FLASH */
#define MCU_WORKFLASH_ECC_ENABLE            MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE
/*------------------------------------------------------------------*/
/*  L1 cache settings                                               */
/*------------------------------------------------------------------*/

/** Enable/Disable the L1 instruction cache */
#define MCU_I_CACHE_ENABLE                  MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE

/** Enable/Disable the L1 data cache */
#define MCU_D_CACHE_ENABLE                  MCU_DISABLE      ///< set MCU_ENABLE or MCU_DISABLE

/** Cache error control for the ECC errors (Common settings for the I-chace and the D-cache).
    ECC settings are effective only when the caches are enabled.
    ABORT_ENABLE and FORCE_WRITE_THROUGH are effective only when ECC is enabled.*/
/** Enable/Disable the  ECC check */
#define MCU_CACHE_ECC_ENABLE                MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE

/** Enable/Disable the abort generation on ECC errors */
#define MCU_CACHE_ECC_ABORT_ENABLE          MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE

/** Enable/Disable force write through */
#define MCU_CACHE_ECC_FORCE_WRITE_THROUGH   MCU_ENABLE      ///< set MCU_ENABLE or MCU_DISABLE

/* -------------------------------------------------------------------*/

/** Maximum number of supported ports, including possible gaps
 ** on certain derivates. */
#define MCU_MAX_PORT_COUNT                          7

/** Maximum number of supported pins within a port, including possible gaps
 ** on certain derivates. */
#define MCU_MAX_PORT_PIN_COUNT                      32

/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/

/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/

#endif /* __FILE_VERSION_CHECK__ */
#endif /* __MCU_SETTINGS_H__ */
