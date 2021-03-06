; \brief AUTOSAR BSW Basic Software Modules
;
; This file is used for initializing hardware watchdog description
; records. This file has no operation and includes data to which boot
; loader refers.
;
; Do not edit this file manually.
; Any change might compromise the safety integrity level of
; the software partition it is contained in.
;
; Product: SW-MCAL40-DRV
;
; (c) 2014-2017, Cypress Semiconductor Corporation. All rights reserved.
;
; Warranty and Disclaimer
;
; This software product is property of Cypress Semiconductor Corporation or
; its subsidiaries.
; Any use and/or distribution rights for this software product are provided
; only under the Cypress Software License Agreement.
; Any use and/or distribution of this software product not in accordance with
; the terms of the Cypress Software License Agreement are unauthorized and
; shall constitute an infringement of Cypress intellectual property rights.

   AREA WDG_66_IA_CFG_ARCH, DATA, READONLY

   EXPORT __ghsalwaysimport_Wdg_WDR_INTM

   ARM


__ghsalwaysimport_Wdg_WDR_INTM: .word   0xfffeffff
                                .word   0xffffffff
Wdg_WDR_TRG0CFGM:               .word   0xffffff55
                                .word   0xffffffff
Wdg_WDR_TRG1CFGM:               .word   0xffffffaa
                                .word   0xffffffff
Wdg_WDR_RUNLLM:                 .word   0x00000000
                                .word   0xffffffff
Wdg_WDR_RUNULM:                 .word   0x00061a80
                                .word   0xffffffff
Wdg_WDR_PSSLLM:                 .word   0x00000000
                                .word   0xffffffff
Wdg_WDR_PSSULM:                 .word   0x00061a80
                                .word   0xffffffff
Wdg_WDR_RSTDLYM:                .word   0xffff0000
                                .word   0xffffffff
Wdg_WDR_CFGM:                   .word   0xffe0ffff
                                .word   0xffffffff
Wdg_WDR_CEM:                    .word   0x292d3a7b
                                .word   0xffffffff
   END
