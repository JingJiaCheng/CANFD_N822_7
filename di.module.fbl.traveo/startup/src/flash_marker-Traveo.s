;************************************************************************
;*                                                                      *
;*  Flash marker setting file for security markers and bootrom markers  *
;*                                                                      *
;************************************************************************

;************************************************************************
;* 1  Disclaimer                                                        *
;************************************************************************
;* __DISCLAIMER_START__                                                 *
;************************************************************************
;* Copyright (C) 2014 Spansion LLC. All Rights Reserved. 
;*
;* This software is owned and published by: 
;* Spansion LLC, 915 DeGuigne Dr. Sunnyvale, CA  94088-3453 ("Spansion").
;*
;* BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND 
;* BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
;*
;* This software contains source code for use with Spansion 
;* components. This software is licensed by Spansion to be adapted only 
;* for use in systems utilizing Spansion components. Spansion shall not be 
;* responsible for misuse or illegal use of this software for devices not 
;* supported herein.  Spansion is providing this software "AS IS" and will 
;* not be responsible for issues arising from incorrect user implementation 
;* of the software.  
;*
;* SPANSION MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
;* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS), 
;* ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING, 
;* WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED 
;* WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED 
;* WARRANTY OF NONINFRINGEMENT.  
;* SPANSION SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT, 
;* NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT 
;* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, 
;* LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR 
;* INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT, 
;* INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA, 
;* SAVINGS OR PROFITS, 
;* EVEN IF SPANSION HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES. 
;* YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
;* INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED 
;* FROM, THE SOFTWARE.  
;*
;* This software may be replicated in part or whole for the licensed use, 
;* with the restriction that this Disclaimer and Copyright notice must be 
;* included with each copy of this software, whether used in part or whole, 
;* at all times.
;************************************************************************
; __DISCLAIMER_END__                                                    *
;************************************************************************
;************************************************************************
;* 2  Contents                                                          *
;************************************************************************
;*  1  Disclaimer                                                       *
;*  2  Contents                                                         *
;*  3  History                                                          *
;*  4  Include files                                                    *
;*  5  Configuration                                                    *
;*  5.1  Security Record (MK)                                           *
;*  5.2  Debug Authentication Record (DDR)                              *
;*  5.3  Boot Description Record (BDR)                                  *
;*  5.4  Watchdog Description Record (WDR)                              *
;*  6  Flash Marker Settings                                            *
;*  6.1  Fixed definition                                               *
;*  6.2  Security Record (MK)                                           *
;*  6.3  Debug Authentication Record (DDR)                              *
;*  6.4  Boot Description Record (BDR)                                  *
;*  6.5  Watchdog Description Record (WDR)                              *
;*  7  File end                                                         *
;************************************************************************
;* 3  History                                                           *
;************************************************************************
;* Version Date        Author   Description                             *
;* V0.01   2014-04-10  HS       Initial version for Traveo              *
;* V0.02   2014-11-05  ST       Changes to be compatible with IAR (ASM  *
;*                              directives, indentation, default start) *                  
;*                              Adding reserved words at end of sections*
;*                              so that MK-DDR-BDR-WDR are without gaps *
;*                              to allow easier linker config files.    *
;*                              Change to allow this module to be moved *
;*                              to the lib and always be pulled in      *
;************************************************************************
;* 4  Include files                                                     *
;************************************************************************
; abstract.h cannot be included because of build error with GHS due to 
; included files in abstract.h
#ifdef __ghs__
    #define __TOOLCHAIN_GHS_MULTI__
#endif
#ifdef __IASMARM__
    #define __TOOLCHAIN_IAR__
#endif

;************************************************************************
;* 5  Configurations                                                    *
;************************************************************************
;* For details of the function of each markers,
;* please see related hardware manuals.

;************************************************************************
;* 5.1  Security Record (MK)                                            *
;************************************************************************
;* This value is used to enable the security feature.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define MK_SER_ENABLE           (MARKER_DISABLE)

;* This value is used to select security scope of the device.
;* < set to MK_SCOPE_FLASH_PROTECTION or MK_SCOPE_DEVICE_PROTECTION
#define MK_SSR_SECURITY_SCOPE   (MK_SCOPE_FLASH_PROTECTION)

;* This value is the function of the Chip Erase Enable.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define MK_CEER_ENABLE          (MARKER_ENABLE)

;* This value is the function of the Security Overwrite Enable Marker.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define MK_SOER_ENABLE          (MARKER_ENABLE)

;* This section describes the function of the Sector Write Permission Overwrite Enable Marker.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define MK_SWPOER_ENABLE        (MARKER_ENABLE)

;* This configuration will be used to control the Work Flash Sector Write Permission.
;* Individual bits control the permission to write the each sector of the work flash.
#define MK_WSWPR_SETTING        (0xFFFFFFFF)

;* This configuration will be used to control the TCFLASH "small" sectors write permission.
#define MK_CS0SWPR_SETTING      (0xFFFFFFFF)

;* This configuration will be used to control the TCFLASH "large" sectors write permission.
#define MK_CS1SWPR_SETTING      (0xFFFFFFFF)

;* This configuration will be used to control the TCFLASH "large" sectors write permission.
;* This configuration is only effective for devices with 4MB+ Flash.
#define MK_CS2SWPR_SETTING      (0xFFFFFFFF)

;* This configuration will be used to control the TCFLASH "large" sectors write permission.
;* This configuration is only effective for devices with 6MB+ Flash.
#define MK_CS3SWPR_SETTING      (0xFFFFFFFF)


;************************************************************************
;* 5.2  Debug Authentication Record (DDR)                               *
;************************************************************************
;* Following settings are effective only when the security setting is enabled.
;* (MK_SER_ENABLE == MARKER_ENABLE) */

;* setting of Debugger Connection Enable Marker (DDR_DSM)
;* This value is used to enable debugger connection.
;* < set to MARKER_DISABLE or MARKER_ENABLE */
#define DDR_DSM_ENABLE          (MARKER_ENABLE)

;* Debugger Security Key Marker 0
;* This value are the bit127:96 of the key of the debugger authentication.
#define DDR_DSKM0_SETTING       (0xFFFFFFFF)

;* Debugger Security Key Marker 1 */
;* This value are the bit95:64 of the key of the debugger authentication.
#define DDR_DSKM1_SETTING       (0xFFFFFFFF)

;* Debugger Security Key Marker 2
;* This value are the bit63:32 of the key of the debugger authentication.
#define DDR_DSKM2_SETTING       (0xFFFFFFFF)

;* Debugger Security Key Marker 3
;* This value are the bit31:0 of the key of the debugger authentication.
#define DDR_DSKM3_SETTING       (0xFFFFFFFF)


;************************************************************************
;* 5.3  Boot Description Record (BDR)                                   *
;************************************************************************
;* SHE Secure Boot Mode Marker
;* When set to BDR_MEASURING_DURING_APPLICATION, user program will start
;* without waiting SHE Secure Boot processing completion.
;* < set to BDR_MEASURING_BEFORE_APPLICATION or BDR_MEASURING_DURING_APPLICATION
#define BDR_SBMM_SETTING            (BDR_MEASURING_BEFORE_APPLICATION)

;* SHE Secure Boot Size Marker
;* This value is the byte size of the memory area to be verified
;* if the Secure Boot is enabled by the Secure Boot MAC Key.
;* On the one hand, the byte size defines the size for the CMAC algorithm.
#define BDR_SBSM_SECURE_BOOT_SIZE   (0xFFFFFFFF)

;* Debugger Waiting Enable Marker
;* If set to MARKER_ENABLE, the user program is suspended after a hard/PD2
;* reset until the debugger is connected or a maximum waiting time is reached.
;* Otherwise, the user program immediately starts.
;* < set to MARKER_ENABLE or MARKER_DISABLE
#define BDR_DWEM_ENABLE              (MARKER_ENABLE)

;* Alternative Boot Vector Enable Marker
;* If set to MARKER_ENABLE, the user program is started
;* at the address stored in BDR_ABVM.
;* Otherwise, the user program starts at the fixed address.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define BDR_ABVEM_ENABLE             (MARKER_ENABLE)

;* Alternative Boot Vector Marker
;* This setting is effective only when BDR_ABVEM is set to enable.
;* < set to the user program start address.
;* !!CAUTION!! Must not be put parentheses around.
#ifdef __TOOLCHAIN_GHS_MULTI__
#define BDR_ABVM_SETTING             _start
#endif
#ifdef __TOOLCHAIN_IAR__
#define BDR_ABVM_SETTING             __iar_program_start
#endif


;************************************************************************
;* 5.4  Watchdog Description Record (WDR)                               *
;************************************************************************
;* Hardware Watchdog Interrupt Configuration Marker
;* Reset Enable Marker
;* If set to MARKER_ENABLE, a reset is generated when a watchdog error occurs.
;* Otherwise, an NMI interrupt is generated in the same condition.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define WDR_INTM_RSTENM_ENABLE              (MARKER_ENABLE)
;* Prior Warning Interrupt Enable Marker
;* If set to MARKER_ENABLE, piror warning interrupt is enabled.
;* Otherwise, it is disabled.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define WDR_INTM_IRQENM_ENABLE              (MARKER_DISABLE)

;* Watchdog Trigger 0 Configuration Marker
;* Following values are uset to clear hardware watch dog timer.
;* Valid range: 0x00...0xFF
#define WDR_TRG0CFGM_WDGTRG0CFGM_SETTING    (0x55)
#define WDR_TRG1CFGM_WDGTRG1CFGM_SETTING    (0xAA)

;* Hardware Watchdog Lower Limit RUN Setting Marker
;* This value defines the lower border of the Watchdog window for RUN state.
;* When set to "0x00000000", the window function does not work.
#define WDR_WDR_RUNLLM_SETTING              (0x00000000)

;* Hardware Watchdog Upper Limit RUN Setting Marker
;* This value defines the upper border of the Watchdog window for RUN state.
#define WDR_WDR_RUNULM_SETTING              (0x005B8D80)

;* Hardware Watchdog Lower Limit PSS Setting Marker
;* This value defines the lower border of the Watchdog window for PSS state.
;* When set to "0x00000000", the window function does not work.
#define WDR_WDR_PSSLLM_SETTING              (0x00000000)

;* Hardware Watchdog Upper Limit PSS Setting Marker
;* This value defines the upper border of the Watchdog window for PSS state.
#define WDR_WDR_PSSULM_SETTING              (0x005B8D80)

;* Hardware Watchdog Reset Delay Counter Marker
;* This value defines the delay to be inserted
;* in Watchdog reset/NMI generation in case of a Hardware Watchdog error.
;* valid range: 0 to 65535 (0xFFFF)
#define WDR_RSTDLYM_WDGRSTDLYM_SETTING      (0x0000)

;* Clock Selection Marker
;* This value is used to select a source clock of the watchdog counter.
;* < set to WDR_CFGM_CLKSELM_LOW_SPEDD_CR or WDR_CFGM_CLKSELM_HIGH_SPEDD_CR
#define WDR_CFGM_CLKSELM_CLK_SELECTION      (WDR_CFGM_CLKSELM_LOW_SPEDD_CR)

;* Watchdog Counter Monitor Bit Output Selection Marker
;* For this product, this setting has no effect.
#define WDR_CFGM_OBSSELM_SETTING            (0x00)

;* Hardware Watchdog Configuration Enable Marker
;* If set to MARKER_ENABLE, the hardware watchdog is started based
;* on the settings defined with the WDR.
;* Otherwise, the hardware watchdog operates based on the default settings.
;* < set to MARKER_DISABLE or MARKER_ENABLE
#define WDR_CEM_ENABLE                      (MARKER_ENABLE)



;************************************************************************
;* 5.2  Import symbols                                                  *
;************************************************************************

        ;* nothing

;************************************************************************
;* 5.3  Export symbols                                                  *
;************************************************************************

        EXPORT MK_SECTION_START
        EXPORT MK_SECTION_END
        EXPORT DDR_SECTION_START
        EXPORT DDR_SECTION_END
        EXPORT BDR_SECTION_START
        EXPORT BDR_SECTION_END
        EXPORT WDR_SECTION_START
        EXPORT WDR_SECTION_END
        

#ifdef __TOOLCHAIN_GHS_MULTI__
; Forces this object file to be always pulled in from projects using the
; generated library that contains this object file because usually a 
; project will not reference the other symbols in this object
; (an object file in library having a __ghsalwaysimport* symbol will be
; always pulled in from GHS linker)
        EXPORT __ghsalwaysimport_flash_marker
__ghsalwaysimport_flash_marker:

#elif defined __TOOLCHAIN_IAR__
; The following symbol name has no special meaning for IAR. The symbol name
; must be used with the -keep linker option
;(or GUI menu: Options->Linker->Input->Keep symbols)
        EXPORT __iar_keep_flash_marker
__iar_keep_flash_marker:
        
#endif

;************************************************************************
;* 6  Flash Marker Settings                                             *
;************************************************************************

;************************************************************************
;* 6.1  Fixed definitions                                               *
;************************************************************************
#define MARKER_ENABLE                       (1)
#define MARKER_DISABLE                      (0)
#define MK_SCOPE_FLASH_PROTECTION           (1)
#define MK_SCOPE_DEVICE_PROTECTION          (0)
#define BDR_MEASURING_DURING_APPLICATION    (1)
#define BDR_MEASURING_BEFORE_APPLICATION    (0)
#define BIT_POS_WDR_INTM_RSTENM             (17)
#define BIT_POS_WDR_INTM_IRQENM             (16)
#define BIT_POS_WDR_CFGM_OBSSELM            (16)
#define BIT_POS_WDR_CFGM_CLKSELM            (8)
#define WDR_CFGM_CLKSELM_LOW_SPEDD_CR       (1)
#define WDR_CFGM_CLKSELM_HIGH_SPEDD_CR      (0)

DEFAULT_VALUE           EQU    0xFFFFFFFF      ;* value of the erased flash memory

;*------------------------------------------------------------------*
;*  definitions for security markers (MK)                           *
;*------------------------------------------------------------------*
#if MK_SER_ENABLE == MARKER_ENABLE
VALUE_OF_MK_SER         EQU    0x00000001      ;* enable security
#else
VALUE_OF_MK_SER         EQU    DEFAULT_VALUE   ;* disable security
#endif
#if MK_SSR_SECURITY_SCOPE == MK_SCOPE_FLASH_PROTECTION
VALUE_OF_MK_SSR         EQU    DEFAULT_VALUE   ;* Flash protection
#else
VALUE_OF_MK_SSR         EQU    0x00000000      ;* Device protection
#endif
#if MK_CEER_ENABLE == MARKER_ENABLE
VALUE_OF_MK_CEER        EQU    DEFAULT_VALUE   ;* enable chip erase
#else
VALUE_OF_MK_CEER        EQU    0x00000000      ;* disable chip erase
#endif
#if MK_SOER_ENABLE == MARKER_ENABLE
VALUE_OF_MK_SOER        EQU    DEFAULT_VALUE   ;* enable overwrite
#else
VALUE_OF_MK_SOER        EQU    0x00000000      ;* disable overwrite
#endif
#if MK_SWPOER_ENABLE == MARKER_ENABLE
VALUE_OF_MK_SWPOER      EQU    DEFAULT_VALUE   ;* enable overwrite
#else
VALUE_OF_MK_SWPOER      EQU    0x00000000      ;* disable overwrite
#endif

VALUE_OF_MK_WSWPR       EQU    MK_WSWPR_SETTING
VALUE_OF_MK_CS0SWPR     EQU    MK_CS0SWPR_SETTING
VALUE_OF_MK_CS1SWPR     EQU    MK_CS1SWPR_SETTING
VALUE_OF_MK_CS2SWPR     EQU    MK_CS2SWPR_SETTING
VALUE_OF_MK_CS3SWPR     EQU    MK_CS3SWPR_SETTING


;*------------------------------------------------------------------*
;*  definitions for the Debugger Connection Record (DDR)            *
;*------------------------------------------------------------------*
#if DDR_DSM_ENABLE == MARKER_ENABLE
VALUE_OF_DDR_DSM        EQU    0x59F71234      ;* Debugger connection enabled
#else
VALUE_OF_DDR_DSM        EQU    DEFAULT_VALUE   ;* Debugger connection disabled
#endif
VALUE_OF_DDR_DSKM0      EQU    DDR_DSKM0_SETTING
VALUE_OF_DDR_DSKM1      EQU    DDR_DSKM1_SETTING
VALUE_OF_DDR_DSKM2      EQU    DDR_DSKM2_SETTING
VALUE_OF_DDR_DSKM3      EQU    DDR_DSKM3_SETTING


;*------------------------------------------------------------------*
;*  definitions for the Boot Description Record (BDR)               *
;*------------------------------------------------------------------*
#if BDR_SBMM_SETTING == BDR_MEASURING_DURING_APPLICATION
VALUE_OF_BDR_SBMM       EQU    0x00000000      ;* "Measuring during application" mode
#else
VALUE_OF_BDR_SBMM       EQU    DEFAULT_VALUE   ;* "Measuring before application" mode
#endif

VALUE_OF_BDR_SBSM       EQU    BDR_SBSM_SECURE_BOOT_SIZE

#if BDR_DWEM_ENABLE == MARKER_ENABLE
VALUE_OF_BDR_DWEM       EQU    DEFAULT_VALUE
#else
VALUE_OF_BDR_DWEM       EQU    0x292D3A7B
#endif

#if BDR_ABVEM_ENABLE == MARKER_ENABLE
    IMPORT BDR_ABVM_SETTING
VALUE_OF_BDR_ABVEM      EQU    0x292D3A7B
VALUE_OF_BDR_ABVM       EQU    BDR_ABVM_SETTING//BDR_ABVM_SETTING
#else
VALUE_OF_BDR_ABVEM      EQU    DEFAULT_VALUE
VALUE_OF_BDR_ABVM       EQU    DEFAULT_VALUE
#endif


;*------------------------------------------------------------------*
;*  definitions for the Watchdog Description Record (WDR)           *
;*------------------------------------------------------------------*
#if WDR_CFGM_CLKSELM_CLK_SELECTION == WDR_CFGM_CLKSELM_LOW_SPEDD_CR
#define WDR_CFGM_CLKSELM_SETTING    (1 << BIT_POS_WDR_CFGM_CLKSELM)
#else
#define WDR_CFGM_CLKSELM_SETTING    (0)
#endif

#if WDR_INTM_RSTENM_ENABLE == MARKER_ENABLE
#define WDR_INTM_RSTENM_SETTING     (1 << BIT_POS_WDR_INTM_RSTENM)
#else
#define WDR_INTM_RSTENM_SETTING     (0)
#endif
#if WDR_INTM_IRQENM_ENABLE == MARKER_ENABLE
#define WDR_INTM_IRQENM_SETTING     (1 << BIT_POS_WDR_INTM_IRQENM)
#else
#define WDR_INTM_IRQENM_SETTING     (0)
#endif

VALUE_OF_WDR_INTM       EQU    (0xFFFCFFFF | WDR_INTM_RSTENM_SETTING | WDR_INTM_IRQENM_SETTING)    ;* None functional bits must be "1"
VALUE_OF_WDR_TRG0CFGM   EQU    (0xFFFFFF00 | WDR_TRG0CFGM_WDGTRG0CFGM_SETTING)     ;* Upper 24bits must be "1"
VALUE_OF_WDR_TRG1CFGM   EQU    (0xFFFFFF00 | WDR_TRG1CFGM_WDGTRG1CFGM_SETTING)     ;* Upper 24bits must be "1"
VALUE_OF_WDR_RUNLLM     EQU    WDR_WDR_RUNLLM_SETTING
VALUE_OF_WDR_RUNULM     EQU    WDR_WDR_RUNULM_SETTING
VALUE_OF_WDR_PSSLLM     EQU    WDR_WDR_PSSLLM_SETTING
VALUE_OF_WDR_PSSULM     EQU    WDR_WDR_PSSULM_SETTING
VALUE_OF_WDR_RSTDLYM    EQU    (0xFFFF0000 | WDR_RSTDLYM_WDGRSTDLYM_SETTING)       ;* Upper 16bits must be "1"
VALUE_OF_WDR_CFGM       EQU    (0xFFE0FCFF | WDR_CFGM_CLKSELM_SETTING | (WDR_CFGM_OBSSELM_SETTING << BIT_POS_WDR_CFGM_OBSSELM))

#if WDR_CEM_ENABLE  == MARKER_ENABLE
VALUE_OF_WDR_CEM        EQU    0x292D3A7B
#else
VALUE_OF_WDR_CEM        EQU    DEFAULT_VALUE
#endif


;************************************************************************
;* 6.2  Security Record (MK)                                            *
;************************************************************************
#ifdef __TOOLCHAIN_GHS_MULTI__
        .SECTION ".MK", "a"
#elif defined __TOOLCHAIN_IAR__
        SECTION  .MK:CONST:ROOT (2)
#endif


MK_SECTION_START:
MK_SER:
        DCD VALUE_OF_MK_SER
MK_RSV1:
        DCD DEFAULT_VALUE   ;* reserved
MK_SSR:
        DCD VALUE_OF_MK_SSR
MK_RSV2:
        DCD DEFAULT_VALUE   ;* reserved
MK_CEER:
        DCD VALUE_OF_MK_CEER
MK_RSV3:
        DCD DEFAULT_VALUE   ;* reserved
MK_SOER:
        DCD VALUE_OF_MK_SOER
MK_RSV4:
        DCD DEFAULT_VALUE   ;* reserved
MK_SWPOER:
        DCD VALUE_OF_MK_SWPOER
MK_RSV5:
        DCD DEFAULT_VALUE   ;* reserved
MK_WSWPR:
        DCD VALUE_OF_MK_WSWPR
MK_RSV6:
        DCD DEFAULT_VALUE   ;* reserved
MK_CS0SWPR:
        DCD VALUE_OF_MK_CS0SWPR
MK_RSV7:
        DCD DEFAULT_VALUE   ;* reserved
MK_C1SWPR:
        DCD VALUE_OF_MK_CS1SWPR
MK_RSV8:
        DCD DEFAULT_VALUE   ;* reserved
MK_CS2SWPR:
        DCD VALUE_OF_MK_CS2SWPR
MK_RSV9:
        DCD DEFAULT_VALUE   ;* reserved
MK_C3SWPR:
        DCD VALUE_OF_MK_CS3SWPR
MK_RSV10:
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved        
MK_SECTION_END:

;************************************************************************
;* 6.3  Debug Authentication Record (DDR)                               *
;************************************************************************

#ifdef __TOOLCHAIN_GHS_MULTI__
        .SECTION ".DDR", "a"
#elif defined __TOOLCHAIN_IAR__
        SECTION  .DDR:CONST:ROOT (2)
#endif

DDR_SECTION_START:
DDR_RSV1:
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
DDR_DSM:
        DCD VALUE_OF_DDR_DSM
DDR_RSV2:
        DCD DEFAULT_VALUE   ;* reserved
DDR_DSKM0:
        DCD VALUE_OF_DDR_DSKM0
DDR_RSV3:
        DCD DEFAULT_VALUE   ;* reserved
DDR_DSKM1:
        DCD VALUE_OF_DDR_DSKM1
DDR_RSV4:
        DCD DEFAULT_VALUE   ;* reserved
DDR_DSKM2:
        DCD VALUE_OF_DDR_DSKM2
DDR_RSV5:
        DCD DEFAULT_VALUE   ;* reserved
DDR_DSKM3:
        DCD VALUE_OF_DDR_DSKM3
DDR_RSV6:
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved        
DDR_SECTION_END:

;************************************************************************
;* 6.4  Boot Description Record (BDR)                                   *
;************************************************************************

#ifdef __TOOLCHAIN_GHS_MULTI__
        .SECTION ".BDR", "a"
#elif defined __TOOLCHAIN_IAR__
        SECTION  .BDR:CONST:ROOT (2)
#endif

BDR_SECTION_START:
BDR_SBMM:
        DCD VALUE_OF_BDR_SBMM
BDR_RSV1:
        DCD DEFAULT_VALUE   ;* reserved
BDR_SBSM:
        DCD VALUE_OF_BDR_SBSM
BDR_RSV2:
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
BDR_DWEM:
        DCD VALUE_OF_BDR_DWEM
BDR_RSV3:
        DCD DEFAULT_VALUE   ;* reserved
BDR_ABVM:
        DCD VALUE_OF_BDR_ABVM
BDR_RSV4:
        DCD DEFAULT_VALUE   ;* reserved
BDR_ABVEM:
        DCD VALUE_OF_BDR_ABVEM
BDR_RSV5:
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved
        DCD DEFAULT_VALUE   ;* reserved        
BDR_SECTION_END:

;************************************************************************
;* 6.5  Watchdog Description Record (WDR)                               *
;************************************************************************

#ifdef __TOOLCHAIN_GHS_MULTI__
        .SECTION ".WDR", "a"
#elif defined __TOOLCHAIN_IAR__
        SECTION  .WDR:CONST:ROOT (2)
#endif

WDR_SECTION_START:
WDR_INTM:
        DCD VALUE_OF_WDR_INTM
WDR_RSV1:
        DCD DEFAULT_VALUE   ;* reserved
WDR_TRG0CFGM:
        DCD VALUE_OF_WDR_TRG0CFGM
WDR_RSV2:
        DCD DEFAULT_VALUE   ;* reserved
WDR_TRG1CFGM:
        DCD VALUE_OF_WDR_TRG1CFGM
WDR_RSV3:
        DCD DEFAULT_VALUE   ;* reserved
WDR_RUNLLM:
        DCD VALUE_OF_WDR_RUNLLM
WDR_RSV4:
        DCD DEFAULT_VALUE   ;* reserved
WDR_RUNULM:
        DCD VALUE_OF_WDR_RUNULM
WDR_RSV5:
        DCD DEFAULT_VALUE   ;* reserved
WDR_PSSLLM:
        DCD VALUE_OF_WDR_PSSLLM
WDR_RSV6:
        DCD DEFAULT_VALUE   ;* reserved
WDR_PSSULM:
        DCD VALUE_OF_WDR_PSSULM
WDR_RSV7:
        DCD DEFAULT_VALUE   ;* reserved
WDR_RSTDLYM:
        DCD VALUE_OF_WDR_RSTDLYM
WDR_RSV8:
        DCD DEFAULT_VALUE   ;* reserved
WDR_CFGM:
        DCD VALUE_OF_WDR_CFGM
WDR_RSV9:
        DCD DEFAULT_VALUE   ;* reserved
WDR_CEM:
        DCD VALUE_OF_WDR_CEM
WDR_RSV10:
        DCD DEFAULT_VALUE   ;* reserved        
WDR_SECTION_END:
        

;************************************************************************
;* 7  File end                                                          *
;************************************************************************

        END

