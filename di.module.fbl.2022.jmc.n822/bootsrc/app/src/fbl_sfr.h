/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Register definitions for Spansion Traveo
 *
 *  --------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/**********************************************************************************************************************/

/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Andreas Wenckebach            AWh           Vector Informatik GmbH
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  01.02.00   2015-06-12  AWh     -                Initial version
 *  01.02.01   2015-09-25  AWh     ESCAN00085490    Traveo: Add Hyperbus definitions to fbl_sfr.h
 **********************************************************************************************************************/
#ifndef __FBL_SFR_H__
#define __FBL_SFR_H__

  /* PRQA S 3453 TAG_SfrDefinitionMacros_1 */ /* MD_MSR_19.7 */
  /* PRQA S 857 TAG_SfrDefinitionMacros_2 */  /* MD_MSR_1.1_857 */

  /* Macro to define memory mapped registers */
  #define FBL_IOS(type, base, offset) ( *( (volatile type *)((base) + (offset)) ) )

  /*--- Base address definitions ---*/
  #define FBL_SRCFG_BASE                  0xB0108000ul
  #define FBL_TCRAM_BASE                  0xB0410000ul
  #define FBL_TCFLASH_BASE                0xB0411000ul
  #define FBL_WFLASH_BASE                 0xB0412000ul
  #define FBL_PPU_BASE                    0xB4750000ul
  #define FBL_ADC_BASE                    0xB4848000ul
  #define FBL_CANP_BASE                   0xB0688C00ul
  #define FBL_GPIO_BASE                   0xB4738000ul
  #define FBL_PPC_BASE                    0xB4740000ul
  #define FBL_RIC_BASE                    0xB4748000ul
  #define FBL_BOOT_ROM_BASE               0xFFFEFC00ul
  #define FBL_HWDG_BASE_ADDR              0xB060C000ul
  #define FBL_SWDG0_BASE_ADDR             0xB0308000ul
  #define FBL_SYSC0_BASE                  0xB0600000ul   /**< System Controller 0 base addresses  */
  #define FBL_SYSC1_BASE                  0xB0300000ul   /**< System Controller 1 base addresses  */
  #define FBL_CLOCK_SYSTEM_BASE           0xB0600600ul   /**< Clock System base address           */
  #define FBL_MCT_BASE                    0xB0600500ul   /**< Main Clock Timer base address       */
  #define FBL_MPU_BASE                    0xB8000800ul   /**< MPU Base address                    */
  #define FBL_HYPERBUSI0_BASE             0xB8028400ul

  /*--- MPU ---*/
  #define FBL_MPU_CTRL0           FBL_IOS(vuint32, FBL_MPU_BASE, 0x00u)
  #define FBL_MPU_NMIEN           FBL_IOS(vuint32, FBL_MPU_BASE, 0x04u)

  #define FBL_MPU_WERRC           FBL_IOS(vuint32, FBL_MPU_BASE, 0x08u)
  #define FBL_MPU_WERRA           FBL_IOS(vuint32, FBL_MPU_BASE, 0x0Cu)
  #define FBL_MPU_RERRC           FBL_IOS(vuint32, FBL_MPU_BASE, 0x10u)
  #define FBL_MPU_RERRA           FBL_IOS(vuint32, FBL_MPU_BASE, 0x14u)

  #define FBL_MPU_CTRL1(n)        FBL_IOS(vuint32, FBL_MPU_BASE, 0x18u + (n*0xCu))
  #define FBL_MPU_SADDR1(n)       FBL_IOS(vuint32, FBL_MPU_BASE, 0x1Cu + (n*0xCu))
  #define FBL_MPU_EADDR1(n)       FBL_IOS(vuint32, FBL_MPU_BASE, 0x20u + (n*0xCu))
  #define FBL_MPU_UNLOCK          FBL_IOS(vuint32, FBL_MPU_BASE, 0x78u)
  #define FBL_MPU_MID             FBL_IOS(vuint32, FBL_MPU_BASE, 0x7Cu)

  /*--- Hyperbus ---*/
  #define FBL_HYPERBUS0_CSR       FBL_IOS(vuint32, FBL_HYPERBUSI0_BASE, 0x00u)            /**< Currently unused */
  #define FBL_HYPERBUS0_IEN       FBL_IOS(vuint32, FBL_HYPERBUSI0_BASE, 0x04u)            /**< Currently unused */
  #define FBL_HYPERBUS0_MBR(n)    FBL_IOS(vuint32, FBL_HYPERBUSI0_BASE, 0x10u + (n*0x4u)) /**< Base address config  */
  #define FBL_HYPERBUS0_MCR(n)    FBL_IOS(vuint32, FBL_HYPERBUSI0_BASE, 0x20u + (n*0x4u)) /**< General config       */
  #define FBL_HYPERBUS0_MTR(n)    FBL_IOS(vuint32, FBL_HYPERBUSI0_BASE, 0x30u + (n*0x4u)) /**< Memory timing config */
  #define FBL_HYPERBUS0_GPOR      FBL_IOS(vuint32, FBL_HYPERBUSI0_BASE, 0x40u)            /**< GP output polarity, currently unused */
  #define FBL_HYPERBUS0_WPR       FBL_IOS(vuint32, FBL_HYPERBUSI0_BASE, 0x44u)            /**< WPN signal polarity, currently unused */

  /* Bit definitions */
  #define FBL_HYBUS_MCR_CRMO      17u
  #define FBL_HYBUS_MCR_ACS       16u
  #define FBL_HYBUS_MCR_CRT       5u   /**< Memory Space or configuration space; TODO: enable on init! disable thereafter... */
  #define FBL_HYBUS_MCR_DEVTYPE   4u
  #define FBL_HYBUS_MCR_WRAPSIZE  0u   /**< Ignored if ACS is 0 */

  /*--- EXCFG ---*/
  #define FBL_EXCFG_UNLOCK                FBL_IOS(vuint32, FBL_BOOT_ROM_BASE, 0x00000358ul)
  #define FBL_EXCFG_CNFG                  FBL_IOS(vuint32, FBL_BOOT_ROM_BASE, 0x00000360ul)
  #define FBL_EXCFG_UNDEFINACT            FBL_IOS(vuint32, FBL_BOOT_ROM_BASE, 0x00000384ul)
  #define FBL_EXCFG_SVCINACT              FBL_IOS(vuint32, FBL_BOOT_ROM_BASE, 0x00000388ul)
  #define FBL_EXCFG_PABORTINACT           FBL_IOS(vuint32, FBL_BOOT_ROM_BASE, 0x0000038Cul)
  #define FBL_EXCFG_DABORTINACT           FBL_IOS(vuint32, FBL_BOOT_ROM_BASE, 0x00000390ul)

  /*--- Bit definitions ---*/
  #define FBL_EXCFG_CNFG_SWAP             8u
  #define FBL_EXCFG_CNFG_LOCK_STATUS      0u

  /*--- CAN Prescaler  ---*/
  #define FBL_CANP_CTR_CPCKS              8u
  #define FBL_CANP_CTR_CANPRE             0u
  #define FBL_CANP_STR_BUSY               0u
  #define FBL_CANP_STR_SCKM               1u
  #define FBL_CANP_CTR                    FBL_IOS(vuint32, FBL_CANP_BASE, 0x00u)
  #define FBL_CANP_STR                    FBL_IOS(vuint32, FBL_CANP_BASE, 0x04u)

  /*--- 12Bit A/D Converter ---*/
  #define FBL_ADC_KEYCDR                  FBL_IOS(vuint32, FBL_ADC_BASE, 0x800u)
  #define FBL_ADC_ADER0                   FBL_IOS(vuint32, FBL_ADC_BASE, 0x804u)
  #define FBL_ADC_ADER1                   FBL_IOS(vuint32, FBL_ADC_BASE, 0x808u)

  /*--- Peripheral Protection Unit ---*/
  #define FBL_PPU_UNLOCK_KEY              0x35AB16CCu
  #define FBL_PPU_LOCK_KEY                0x30004000u
  #define FBL_PPU0_CR                     FBL_IOS(vuint32, FBL_PPU_BASE, 0x0000u)
  #define FBL_PPU0_SR                     FBL_IOS(vuint32, FBL_PPU_BASE, 0x0004u)
  #define FBL_PPU0_UNLOCK                 FBL_IOS(vuint32, FBL_PPU_BASE, 0x0008u)
  #define FBL_PPU0_PUWA(n)                FBL_IOS(vuint32, FBL_PPU_BASE, 0x0200u + ((n)*0x04u))
  #define FBL_PPU0_LOCK0                  FBL_IOS(vuint32, FBL_PPU_BASE, 0x00F8u)

  /*--- Register definitions ---*/
  /* System RAM (Scratch Pad RAM) registers */
  #define FBL_SRCFG_CFG(n)                FBL_IOS(vuint32, FBL_SRCFG_BASE, ((n)*0x04u)) /**< SRAM_IF Configuration Registers */
  #define FBL_SRCFG_KEY                   FBL_IOS(vuint32, FBL_SRCFG_BASE, 0x00Cu)      /**< SRAM_IF Unlock/Lock Key Register */

  #define FBL_SRCFG_ECCE                  FBL_IOS(vuint32, FBL_SRCFG_BASE, 0x018u)      /**< SRAM_IF ECC Enable Register */

  /* TCRAM registers  */
  #define FBL_TRCFG0_TCMCFG(n)            FBL_IOS(vuint32, FBL_TCRAM_BASE, ((n)*0x04u)) /**< TCRAM Configuration registers */
  #define FBL_TRCFG0_TCMUNLOCK            FBL_IOS(vuint32, FBL_TCRAM_BASE, 0x008u)      /**< TCRAM Unlock register          */

  /* TCFLASH registers */
  #define FBL_TCFCFG_FCPROTKEY            FBL_IOS(vuint32, FBL_TCFLASH_BASE, 0x00u)     /**< TCFLASH configuration protection key register  */
  #define FBL_TCFCFG_FCFGR                FBL_IOS(vuint32, FBL_TCFLASH_BASE, 0x08u)     /**< TCFLASH configuration register                 */
  #define FBL_TCFCFG_FECCCTRL             FBL_IOS(vuint32, FBL_TCFLASH_BASE, 0x10u)     /**< TCFLASH ECC control register                   */
  #define FBL_TCFCFG_FDATEIR              FBL_IOS(vuint32, FBL_TCFLASH_BASE, 0x1Cu)     /**< TCFLASH ECC bit error injection register       */
  #define FBL_TCFCFG_FUCEDIR              FBL_IOS(vuint32, FBL_TCFLASH_BASE, 0x80u)     /**< TCFLASH uncorrectable error detection interrupt register  */

  /* WorkFlash registers */
  #define FBL_WFCFG_CPR                   FBL_IOS(vuint32, FBL_WFLASH_BASE, 0x00u)      /**< WorkFLASH configuration protection key register */
  #define FBL_WFCFG_ECR                   FBL_IOS(vuint32, FBL_WFLASH_BASE, 0x0Cu)      /**< WorkFLASH ECC control register                  */

  /*--- Bit definitions ---*/
  /* SRCFG_CFG0 */
  #define FBL_SRCFG_CFG_LOCK_STATUS       8u
  #define FBL_SRCFG_CFG_RDWAIT            24u
  #define FBL_SRCFG_CFG_WRWAIT            16u

  /* TRCFG0_TCMCFG0 */
  #define FBL_TCMCFG_DWAIT                24u
  #define FBL_TCMCFG_LOCKSTATUS           8u
  #define FBL_TCMCFG_ERRECC               0u

  /* TCFCFG_FCFGR */
  #define FBL_FCFGR_FAWC                  0u

  #define FBL_FUCEDIR_UCEDDIC             8u
  #define FBL_FUCEDIR_UCEDINT             16u

  /*--- Configurations ---*/
  #define FBL_SYSRAM_KEY_UNLOCK           0x5ECC551Ful    /**< Key to unlock the System RAM configuration registers */
  #define FBL_SYSRAM_KEY_LOCK             0x551FB10Cul    /**< Key to lock the System RAM configuration registers   */

  #define FBL_TCMRAM_KEY_UNLOCK           0xACC55ECCul    /**< Key to unlock the TCMRAM configuration registers     */
  #define FBL_TCMRAM_KEY_LOCK             0x5ECCB10Cul    /**< Key to lock the TCMRAM configuration register        */

  #define FBL_TCFLASH_KEY_UNLOCK          0xCF61F1A5ul    /**< Key to unlock the TCFLASH configuration registers    */

  #define FBL_WFLASH_KEY_UNLOCK           0xCF6DF1A5ul    /**< Key to unlock the WorkFlash configuration registers  */

  #define FBL_BOOTROM_KEY_UNLOCK          0xACC5B007ul    /**< Key to unlock the BootROM Hw Interface registers     */
  #define FBL_BOOTROM_KEY_LOCK            0xB007ECF6ul    /**< Key to lock the BootROM Hw Interface registers     */

  #define FBL_FRT0_BASE                   0xB4820000ul    /**< Base address of the free running timer 0 */
  #define FBL_FRT1_BASE                   0xB4820400ul    /**< Base address of the free running timer 1 */

  /*******************************************************************************************************************/
  /*  HW Watchdog module                                                                                             */
  /*******************************************************************************************************************/
  #define FBL_HWDG_PROT          FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000000ul)
  #define FBL_HWDG_CNT           FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000008ul)
  #define FBL_HWDG_RSTCAUSE      FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x0000000Cul)
  #define FBL_HWDG_TRG0          FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000010ul)
  #define FBL_HWDG_TRG1          FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000018ul)
  #define FBL_HWDG_INT           FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000020ul)
  #define FBL_HWDG_INTCLR        FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000024ul)
  #define FBL_HWDG_TRG0CFG       FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x0000002Cul)
  #define FBL_HWDG_TRG1CFG       FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000030ul)
  #define FBL_HWDG_RUNLL         FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000034ul)
  #define FBL_HWDG_RUNul         FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000038ul)
  #define FBL_HWDG_PSSLL         FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x0000003Cul)
  #define FBL_HWDG_PSSul         FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000040ul)
  #define FBL_HWDG_RSTDLY        FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000044ul)
  #define FBL_HWDG_CFG           FBL_IOS(vuint32, FBL_HWDG_BASE_ADDR, 0x00000048ul)

  /* WDG_PROT defines */
  #define FBL_WDG_PROT_KEY      0xEDACCE55ul    /**< Required to access protected registers */
  #define FBL_WDG_PROT_LOCKED   0x00000000ul    /**< Read value when protection is active */
  #define FBL_WDG_PROT_UNLOCKED 0xFFFFFFFFul    /**< Read value when protection is inactive */

  /* WDG_CFG bit defines */
  #define FBL_WDG_CFG_LOCK      24u
  #define FBL_WDG_CFG_CLKSEL    8u
  #define FBL_WDG_CFG_DBGEN     3u
  #define FBL_WDG_CFG_WDENPSS   1u
  #define FBL_WDG_CFG_WDENRUN   0u

  /*******************************************************************************************************************/
  /*  SW Watchdog module                                                                                             */
  /*******************************************************************************************************************/
  #define FBL_SWDG_PROT          FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000000ul)
  #define FBL_SWDG_CNT           FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000008ul)
  #define FBL_SWDG_RSTCAUSE      FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x0000000Cul)
  #define FBL_SWDG_TRG0          FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000010ul)
  #define FBL_SWDG_TRG1          FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000018ul)
  #define FBL_SWDG_INT           FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000020ul)
  #define FBL_SWDG_INTCLR        FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000024ul)
  #define FBL_SWDG_TRG0CFG       FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x0000002Cul)
  #define FBL_SWDG_TRG1CFG       FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000030ul)
  #define FBL_SWDG_RUNLL         FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000034ul)
  #define FBL_SWDG_RUNul         FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000038ul)
  #define FBL_SWDG_PSSLL         FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x0000003Cul)
  #define FBL_SWDG_PSSul         FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000040ul)
  #define FBL_SWDG_RSTDLY        FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000044ul)
  #define FBL_SWDG_CFG           FBL_IOS(vuint32, FBL_SWDG0_BASE_ADDR, 0x00000048ul)

  /*******************************************************************************************************************/
  /*  32-bit FREE RUN TIMER                                                                                          */
  /*******************************************************************************************************************/

  /*--- Register definitions ---*/
  #define FBL_FRT0_CPCLRB_CPCLR         FBL_IOS(vuint32, FBL_FRT0_BASE, 0x000u) /**< Compare clear buffer register, compare clear register  */
  #define FBL_FRT0_TCDT                 FBL_IOS(vuint32, FBL_FRT0_BASE, 0x004u) /**< Timer data register                                    */
  #define FBL_FRT0_TCCS                 FBL_IOS(vuint32, FBL_FRT0_BASE, 0x008u) /**< Timer state control register                           */
  #define FBL_FRT0_TECCS                FBL_IOS(vuint32, FBL_FRT0_BASE, 0x00Cu) /**< Timer extended state control register                  */
  #define FBL_FRT0_TCCSC                FBL_IOS(vuint32, FBL_FRT0_BASE, 0x010u) /**< Timer state control clear register                     */
  #define FBL_FRT0_TCCSS                FBL_IOS(vuint32, FBL_FRT0_BASE, 0x014u) /**< Timer state control set register                       */

  #define FBL_FRT1_CPCLRB_CPCLR         FBL_IOS(vuint32, FBL_FRT1_BASE, 0x000u) /**< Compare clear buffer register, compare clear register  */
  #define FBL_FRT1_TCDT                 FBL_IOS(vuint32, FBL_FRT1_BASE, 0x004u) /**< Timer data register                                    */
  #define FBL_FRT1_TCCS                 FBL_IOS(vuint32, FBL_FRT1_BASE, 0x008u) /**< Timer state control register                           */
  #define FBL_FRT1_TECCS                FBL_IOS(vuint32, FBL_FRT1_BASE, 0x00Cu) /**< Timer extended state control register                  */
  #define FBL_FRT1_TCCSC                FBL_IOS(vuint32, FBL_FRT1_BASE, 0x010u) /**< Timer state control clear register                     */
  #define FBL_FRT1_TCCSS                FBL_IOS(vuint32, FBL_FRT1_BASE, 0x014u) /**< Timer state control set register                       */

  /*--- Bit definitions ---*/
  /* FRT0_TCCS */
  #define FBL_FRT_TCCS_ECKE            15u
  #define FBL_FRT_TCCS_IRQZF           14u
  #define FBL_FRT_TCCS_IRQZE           13u
  #define FBL_FRT_TCCS_MSI2_0          10u
  #define FBL_FRT_TCCS_ICLR            9u
  #define FBL_FRT_TCCS_ICRE            8u
  #define FBL_FRT_TCCS_BFE             7u
  #define FBL_FRT_TCCS_STOP            6u
  #define FBL_FRT_TCCS_MODE            5u
  #define FBL_FRT_TCCS_SCLR            4u
  #define FBL_FRT_TCCS_CLK3_0          0u

  /* FRT0_TCCSC */
  #define FBL_FRT_TCCSC_ECKEC          15u
  #define FBL_FRT_TCCSC_IRQZFC         14u
  #define FBL_FRT_TCCSC_IRQZEC         13u
  #define FBL_FRT_TCCSC_ICLRC          9u
  #define FBL_FRT_TCCSC_ICREC          8u
  #define FBL_FRT_TCCSC_BFEC           7u
  #define FBL_FRT_TCCSC_STOPC          6u
  #define FBL_FRT_TCCSC_MODEC          5u

  /*******************************************************************************************************************/
  /*  CLOCK SYSTEM                                                                                        */
  /*******************************************************************************************************************/

  /*--- Register definitions ---*/
  #define FBL_SYSC_CRCNTR                 FBL_IOS(vuint32, FBL_CLOCK_SYSTEM_BASE, 0x000u) /**< CR clock control register                    */
  #define FBL_SYSC_MOSCCNTR               FBL_IOS(vuint32, FBL_CLOCK_SYSTEM_BASE, 0x004u) /**< Main oscillator control register             */
  #define FBL_SYSC_SOSCCNTR               FBL_IOS(vuint32, FBL_CLOCK_SYSTEM_BASE, 0x008u) /**< Sub oscillator control register              */
  #define FBL_SYSC_PLLSSCGSTCNTR          FBL_IOS(vuint32, FBL_CLOCK_SYSTEM_BASE, 0x00Cu) /**< PLL/SSCG stabilization time control register */

  #define FBL_SYSC_PLLxCGCNTR(n)          FBL_IOS(vuint32, FBL_CLOCK_SYSTEM_BASE, 0x010u + ((n)*0x04u)) /**< PLLx clock gear control register             */
  #define FBL_SYSC_SSCGxCGCNTR(n)         FBL_IOS(vuint32, FBL_CLOCK_SYSTEM_BASE, 0x020u + ((n)*0x04u)) /**< SSCG PLLn clock gear control register        */

  #define FBL_SYSC_CKOTCNTR               FBL_IOS(vuint32, FBL_CLOCK_SYSTEM_BASE, 0x030u) /**< Clock output function control register       */

  /*********** SYSC0 Registers ***********/
  #define FBL_SYSC0_PROTKEYR              FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x000u) /**< Protection key setting register */

  #define FBL_SYSC0_SPECFGR               FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x680u) /**< System special setting register */

  /* RUN Profile Register Group */
  #define FBL_SYSC0_RUNPDCFGR             FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x080u) /**< RUN power domain setting register           */
  #define FBL_SYSC0_RUNCKSRER             FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x084u) /**< RUN clock source enable register            */
  #define FBL_SYSC0_RUNCKSELR             FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x088u) /**< RUN clock selection register                */
  #define FBL_SYSC0_RUNCKER               FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x08Cu) /**< RUN clock enable register                   */
  #define FBL_SYSC0_RUNCKDIVR             FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x090u) /**< RUN clock divider register                  */

  #define FBL_SYSC0_RUNPLLxCNTR(n)        FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x094u + ((n)*0x04u)) /**< RUN PLLx control register                   */

  #define FBL_SYSC0_RUNSSCGxCNTR0(n)      FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x0A4u + ((n)*0x08u)) /**< RUN SSCGn control register 0                */
  #define FBL_SYSC0_RUNSSCGxCNTR1(n)      FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x0A8u + ((n)*0x08u)) /**< RUN SSCGn control register 1                */

  #define FBL_SYSC0_RUNLVDCFGR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x0C4u)  /**< RUN low-voltage detection setting register  */
  #define FBL_SYSC0_RUNCSVCFGR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x0C8u)  /**< RUN clock supervisor setting register       */
  #define FBL_SYSC0_RUNREGCFGR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x0CCu)  /**< RUN regulator setting register              */

  #define FBL_SYSC0_TRGRUNCNTR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x0FCu)  /**< RUN profile update trigger register */

  /* STS Profile Register Group */
  #define FBL_SYSC0_STSCKSRER             FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x204u)  /**< STS clock source enable register */

  /* System Register Group */
  #define FBL_SYSC0_SYSSTSR               FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x288u)  /**< System status register                         */
  #define FBL_SYSC0_SYSINTER              FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x28Cu)  /**< System status interrupt enable register        */
  #define FBL_SYSC0_SYSICLR               FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x290u)  /**< System status flag interrupt clear register    */
  #define FBL_SYSC0_SYSERRIR0             FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x294u)  /**< System error interrupt factor register 0       */
  #define FBL_SYSC0_SYSERRIR1             FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x298u)  /**< System error interrupt factor register 1       */
  #define FBL_SYSC0_SYSERRICLR0           FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x29Cu)  /**< System error interrupt factor clear register 0 */
  #define FBL_SYSC0_SYSERRICLR1           FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x2A0u)  /**< System error interrupt factor clear register 1 */
  #define FBL_SYSC0_SYSPROSTSR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x2A4u)  /**< Profile status register                        */
  #define FBL_SYSC0_SYSRUNPEFR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x2A8u)  /**< RUN profile error flag register                */
  #define FBL_SYSC0_SYSPSSPEFR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x2ACu)  /**< PSS profile error flag register                */
  #define FBL_SYSC0_SYSRSTCNTR            FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x380u)  /**< Reset control register                         */
  #define FBL_SYSC0_SYSRSTCAUSER          FBL_IOS(vuint32, FBL_SYSC0_BASE, 0x390u)  /**< Reset control register                         */

  /* Main Clock Timer */
  #define FBL_SYSC_MOCTTRGR               FBL_IOS(vuint32, FBL_MCT_BASE, 0x000u)    /**< Main clock timer trigger register            */
  #define FBL_SYSC_MOCTCNTR               FBL_IOS(vuint32, FBL_MCT_BASE, 0x004u)    /**< Main clock timer control register            */
  #define FBL_SYSC_MOCTCPR                FBL_IOS(vuint32, FBL_MCT_BASE, 0x008u)    /**< Main clock timer compare prescaler register  */
  #define FBL_SYSC_MOCTSTR                FBL_IOS(vuint32, FBL_MCT_BASE, 0x00Cu)    /**< Main clock timer status register             */
  #define FBL_SYSC_MOCTINTER              FBL_IOS(vuint32, FBL_MCT_BASE, 0x010u)    /**< Main clock timer interrupt enable register   */
  #define FBL_SYSC_MOCTICLR               FBL_IOS(vuint32, FBL_MCT_BASE, 0x014u)    /**< Main clock timer interrupt clear register    */

  /*********** SYSC1 Registers ***********/
  #define FBL_SYSC1_PROTKEYR              FBL_IOS(vuint32, FBL_SYSC1_BASE, 0x000u)  /**< Protection key setting register  */

  /* RUN Profile Register Group */
  #define FBL_SYSC1_RUNCKSELR(n)          FBL_IOS(vuint32, FBL_SYSC1_BASE, 0x080u + ((n)*0x04u))  /**< RUN clock selection register n */
  #define FBL_SYSC1_RUNCKER(n)            FBL_IOS(vuint32, FBL_SYSC1_BASE, 0x08Cu + ((n)*0x04u))  /**< RUN clock enable register n    */
  #define FBL_SYSC1_RUNCKDIVR(n)          FBL_IOS(vuint32, FBL_SYSC1_BASE, 0x098u + ((n)*0x04u))  /**< RUN clock divider register n   */
  #define FBL_SYSC1_RUNENR                FBL_IOS(vuint8, FBL_SYSC1_BASE, 0x0FCu)   /**< RUN profile update enable register (byte access required! ) */

  /*--- Bit definitions ---*/
  /* SYSC_PLLSSCGSTCNTR */
  #define FBL_PLLSSCGSTCNTR_SSCGSTABS     4u
  #define FBL_PLLSSCGSTCNTR_PLLSTABS      0u

  /* SYSC_MOCTTRGR */
  #define FBL_MOCTTRGR_TCLR               2u
  #define FBL_MOCTTRGR_CSTOP              1u
  #define FBL_MOCTTRGR_CGCPT              0u

  /* SYSC_MOCTCPR */
  #define FBL_MOCTCPR_PSCL                16u
  #define FBL_MOCTCPR_CMPR                0u

  /* SYSC_PLLxCGCNTR */
  #define FBL_PLLxCGCNTR_PLLCGLP          16u
  #define FBL_PLLxCGCNTR_PLLCGSTP         14u
  #define FBL_PLLxCGCNTR_PLLCGSSN         8u
  #define FBL_PLLxCGCNTR_PLLCGSTS         6u
  #define FBL_PLLxCGCNTR_PLLCGSTR         1u
  #define FBL_PLLxCGCNTR_PLLCGEN          0u

  /* SYSC_SSCGxCGCNTR */
  #define FBL_SSCGxCGCNTR_SSCGCGLP        16u
  #define FBL_SSCGxCGCNTR_SSCGCGSTP       14u
  #define FBL_SSCGxCGCNTR_SSCGCGSSN       8u
  #define FBL_SSCGxCGCNTR_SSCGCGSTS       6u
  #define FBL_SSCGxCGCNTR_SSCGCGSTR       1u
  #define FBL_SSCGxCGCNTR_SSCGCGEN        0u

  /* SYSC0_SPECFGR */
  #define FBL_SYSC0_SPECFGR_IO35RSTC      21u
  #define FBL_SYSC0_SPECFGR_IO3RSTC       22u

  /* SYSC0_RUNPLLxCNTR */
  #define FBL_RUNPLLxCNTR_PLLxISEL        31u
  #define FBL_RUNPLLxCNTR_PLLxDIVN        16u
  #define FBL_RUNPLLxCNTR_PLLxDIVM        8u
  #define FBL_RUNPLLxCNTR_PLLDIVL         0u

  /* SYSC0_RUNSSCGxCNTR0 */
  #define FBL_RUNSSCGxCNTR0_SSCGxISEL     31u
  #define FBL_RUNSSCGxCNTR0_SSCGxDIVN     16u
  #define FBL_RUNSSCGxCNTR0_SSCGxDIVM     8u
  #define FBL_RUNSSCGxCNTR0_SSCGxDIVL     0u

  /* SYSC0_RUNCKDIVR */
  #define FBL_RUNCKDIVR_MCUCPDIV          8u
  #define FBL_RUNCKDIVR_MCUCHDIV          0u

  /* SYSC1_RUNCKSELR0 */
  #define FBL_RUNCKSELR0_HSSPICSL         24u
  #define FBL_RUNCKSELR0_LAPP1ACSL        20u
  #define FBL_RUNCKSELR0_LAPP0ACSL        16u
  #define FBL_RUNCKSELR0_LCP1ACSL         12u
  #define FBL_RUNCKSELR0_LCP0ACSL         8u
  #define FBL_RUNCKSELR0_CD0CSL           0u

  /* SYSC1_RUNCKSELR1 */
  #define FBL_RUNCKSELR1_CD4CSL           24u
  #define FBL_RUNCKSELR1_CD3CSL           16u
  #define FBL_RUNCKSELR1_CD2CSL           8u
  #define FBL_RUNCKSELR1_CD1CSL           0u

  /* SYSC1_RUNCKSELR2 */
  #define FBL_RUNCKSELR2_TRCCSL           8u
  #define FBL_RUNCKSELR2_CD5CSL           0u

  /* SYSC1_RUNCKDIVR0 */
  #define FBL_RUNCKDIVR0_HPMDIV           24u
  #define FBL_RUNCKDIVR0_TRCDIV           16u
  #define FBL_RUNCKDIVR0_DBGDIV           12u
  #define FBL_RUNCKDIVR0_ATBDIV           8u
  #define FBL_RUNCKDIVR0_SYSDIV           0u

  /* SYSC1_RUNCKDIVR1 */
  #define FBL_RUNCKDIVR1_HAPP1B1DIV       28u
  #define FBL_RUNCKDIVR1_HAPP1B0DIV       24u
  #define FBL_RUNCKDIVR1_HAPP0A1DIV       20u
  #define FBL_RUNCKDIVR1_HAPP0A0DIV       16u
  #define FBL_RUNCKDIVR1_SYSC1DIV         4u
  #define FBL_RUNCKDIVR1_EXTBUSDIV        0u

  /* SYSC1_RUNCKDIVR2 */
  #define FBL_RUNCKDIVR2_LAPP1DIV         24u
  #define FBL_RUNCKDIVR2_LAPP0DIV         16u
  #define FBL_RUNCKDIVR2_LCP1DIV          8u
  #define FBL_RUNCKDIVR2_LCP0DIV          4u
  #define FBL_RUNCKDIVR2_LCPDIV           0u

  /* SYSC1_RUNCKDIVR3 */
  #define FBL_RUNCKDIVR3_LAPP1ADIV        24u
  #define FBL_RUNCKDIVR3_LAPP0ADIV        16u
  #define FBL_RUNCKDIVR3_LCP1ADIV         8u
  #define FBL_RUNCKDIVR3_LCP0ADIV         0u

  /* SYSC1_RUNCKDIVR4 */
  #define FBL_RUNCKDIVR4_HSSPIDIV         0u

  /* SYSC1_RUNCKDIVR5 */
  #define FBL_RUNCKDIVR5_CD1B1DIV         20u
  #define FBL_RUNCKDIVR5_CD1B0DIV         16u
  #define FBL_RUNCKDIVR5_CD1A1DIV         12u
  #define FBL_RUNCKDIVR5_CD1A0DIV         8u
  #define FBL_RUNCKDIVR5_CD1DIV           0u

  /* SYSC1_RUNCKDIVR6 */
  #define FBL_RUNCKDIVR6_CD2B1DIV         20u
  #define FBL_RUNCKDIVR6_CD2B0DIV         16u
  #define FBL_RUNCKDIVR6_CD2A1DIV         12u
  #define FBL_RUNCKDIVR6_CD2A0DIV         8u
  #define FBL_RUNCKDIVR6_CD2DIV           0u

  /* SYSC1_RUNCKDIVR7 */
  #define FBL_RUNCKDIVR7_CD3B1DIV         20u
  #define FBL_RUNCKDIVR7_CD3B0DIV         16u
  #define FBL_RUNCKDIVR7_CD3A1DIV         12u
  #define FBL_RUNCKDIVR7_CD3A0DIV         8u
  #define FBL_RUNCKDIVR7_CD3DIV           0u

  /* SYSC1_RUNCKDIVR8 */
  #define FBL_RUNCKDIVR8_CD4B1DIV         20u
  #define FBL_RUNCKDIVR8_CD4B0DIV         16u
  #define FBL_RUNCKDIVR8_CD4A1DIV         12u
  #define FBL_RUNCKDIVR8_CD4A0DIV         8u
  #define FBL_RUNCKDIVR8_CD4DIV           0u

  /* SYSC1_RUNCKDIVR9 */
  #define FBL_RUNCKDIVR9_CD5B1DIV         20u
  #define FBL_RUNCKDIVR9_CD5B0DIV         16u
  #define FBL_RUNCKDIVR9_CD5A1DIV         12u
  #define FBL_RUNCKDIVR9_CD5A0DIV         8u
  #define FBL_RUNCKDIVR9_CD5DIV           0u

  /*--- Configurations ---*/
  #define FBL_SYSC_KEY_UNLOCK             0x5CACCE55ul /**< Value for releasing the protection of SYSC0/1 registers */

  /**********************************************************
   * GPIO, Port configuration
   *********************************************************/

  /*--- Register definitions ---*/
  #define FBL_GPIO_POSR(n)          FBL_IOS(vuint32, FBL_GPIO_BASE, 0x000u + ((n)*0x10u)) /**< Port output set register       */
  #define FBL_GPIO_POCR(n)          FBL_IOS(vuint32, FBL_GPIO_BASE, 0x004u + ((n)*0x10u)) /**< Port output clear register     */
  #define FBL_GPIO_DDSR(n)          FBL_IOS(vuint32, FBL_GPIO_BASE, 0x008u + ((n)*0x10u)) /**< Data direction set register    */
  #define FBL_GPIO_DDCR(n)          FBL_IOS(vuint32, FBL_GPIO_BASE, 0x00Cu + ((n)*0x10u)) /**< Data direction clear register  */

  #define FBL_GPIO_PODR(n)          FBL_IOS(vuint32, FBL_GPIO_BASE, 0x200u + ((n)*0x08u)) /**< Port output data register      */
  #define FBL_GPIO_DDR(n)           FBL_IOS(vuint32, FBL_GPIO_BASE, 0x204u + ((n)*0x08u)) /**< Data direction register        */

  #define FBL_GPIO_PORTEN           FBL_IOS(vuint32, FBL_GPIO_BASE, 0x400u)               /**< Port input enable register */
  #define FBL_GPIO_KEYCDR           FBL_IOS(vuint32, FBL_GPIO_BASE, 0x404u)               /**< GPIO key code register     */
  #define FBL_GPIO_PIDR(n)          FBL_IOS(vuint32, FBL_GPIO_BASE, 0x300u + ((n)*0x04u)) /**< Port input data register   */
  #define FBL_GPIO_PPER(n)          FBL_IOS(vuint32, FBL_GPIO_BASE, 0x380u + ((n)*0x04u)) /**< Port enable register       */

  #define FBL_PPC_PFCGR0_OFFSET(n)     (0x000u + ((n)*0x02u))
  #define FBL_PPC_PFCGR1_OFFSET(n)     (0x040u + ((n)*0x02u))
  #define FBL_PPC_PFCGR2_OFFSET(n)     (0x080u + ((n)*0x02u))
  #define FBL_PPC_PFCGR3_OFFSET(n)     (0x0C0u + ((n)*0x02u))
  #define FBL_PPC_PFCGR4_OFFSET(n)     (0x100u + ((n)*0x02u))

  #define FBL_PPC_PCFGR0(n)         FBL_IOS(vuint16, FBL_PPC_BASE, FBL_PPC_PFCGR0_OFFSET(n))  /**< Port setting register of P0_00 to P0_31  */
  #define FBL_PPC_PCFGR1(n)         FBL_IOS(vuint16, FBL_PPC_BASE, FBL_PPC_PFCGR1_OFFSET(n))  /**< Port setting register of P1_00 to P1_31  */
  #define FBL_PPC_PCFGR2(n)         FBL_IOS(vuint16, FBL_PPC_BASE, FBL_PPC_PFCGR2_OFFSET(n))  /**< Port setting register of P2_00 to P2_31  */
  #define FBL_PPC_PCFGR3(n)         FBL_IOS(vuint16, FBL_PPC_BASE, FBL_PPC_PFCGR3_OFFSET(n))  /**< Port setting register of P3_00 to P3_31  */
  #define FBL_PPC_PCFGR4(n)         FBL_IOS(vuint16, FBL_PPC_BASE, FBL_PPC_PFCGR4_OFFSET(n))  /**< Port setting register of P4_00 to P4_31  */
  #define FBL_PPC_KEYCDR            FBL_IOS(vuint32, FBL_PPC_BASE, 0x400u)                /**< PPC key code register                    */

  #define FBL_RIC_RESIN(n)          FBL_IOS(vuint16, FBL_RIC_BASE, ((n)*0x02u))           /**< Resource input setting n register  */
  #define FBL_RIC_KEYCDR            FBL_IOS(vuint32, FBL_RIC_BASE, 0x1400u)               /**< RIC key code register              */

  /* Bit definitions */
  /* FBL_PPC_PCFGR3(n) */
  #define FBL_PPC_PCFGRxxx_POE          15u
  #define FBL_PPC_PCFGRxxx_POD          14u
  #define FBL_PPC_PCFGRxxx_PID          13u
  #define FBL_PPC_PCFGRxxx_PIE          12u
  #define FBL_PPC_PCFGRxxx_PIL          10u
  #define FBL_PPC_PCFGRxxx_PUE          9u
  #define FBL_PPC_PCFGRxxx_PDE          8u
  #define FBL_PPC_PCFGRxxx_ODR          6u
  #define FBL_PPC_PCFGRxxx_NFE          5u
  #define FBL_PPC_PCFGRxxx_POF          0u

  /* xxx_KEYCDR */
  #define FBL_KEYCDR_KEY                30u
  #define FBL_KEYCDR_SIZE               28u
  #define FBL_KEYCDR_RADR               0u

  /* FBL_RIC_RESIN(n) */
  #define FBL_RIC_RESINx_PORTSEL        8u
  #define FBL_RIC_RESINx_RESSEL         0u

  /* Configurations */
  /* xxx_KEYCDR */
  #define FBL_KEYCDR_ACCESS_BYTE        0u
  #define FBL_KEYCDR_ACCESS_HALF_WORD   1u
  #define FBL_KEYCDR_ACCESS_WORD        2u

  #define FBL_UNLOCK_STEP(reg, accessType, offset, step) {\
                                                            (reg) = ((step) << 30u) | ((accessType) << 28u) | (offset);\
                                                         } /* PRQA S 3458 */ /* MD_CBD_19.4 */

  #define FBL_UNLOCK_SEQUENCE(reg, accessType, offset) {\
                                                           FBL_UNLOCK_STEP(reg, accessType, offset, 0ul);\
                                                           FBL_UNLOCK_STEP(reg, accessType, offset, 1ul);\
                                                           FBL_UNLOCK_STEP(reg, accessType, offset, 2ul);\
                                                           FBL_UNLOCK_STEP(reg, accessType, offset, 3ul);\
                                                       } /* PRQA S 3458 */ /* MD_CBD_19.4 */

  /* PRQA L:TAG_SfrDefinitionMacros_1 */
  /* PRQA L:TAG_SfrDefinitionMacros_2 */
#endif /* __FBL_SFR_H__ */

