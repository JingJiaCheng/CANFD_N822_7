; \brief AUTOSAR BSW Basic Software Modules
;
; This file is used for triggering watchdog hardware.
; This code is expanded into RAM when WdgRunArea is set to RAM.
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



   AREA WDG_66_IA_TRIGGER, DATA, READONLY
   EXPORT Wdg_66_IA_TriggerFuncSize
Wdg_66_IA_TriggerFuncSize:
   .word    Wdg_66_IA_ActivateTrigger_end - Wdg_66_IA_ActivateTrigger + 8

   AREA WDG_66_IA_TRIGGER, CODE
   EXPORT Wdg_66_IA_ActivateTrigger

   ARM
; \brief Wdg_66_IA_ActivateTrigger
; This function triggers the watchdog.
Wdg_66_IA_ActivateTrigger:
#ifdef STACK_ANALYSIS_ENABLE
.scall Wdg_66_IA_ActivateTrigger, __leaf__
.maxstack Wdg_66_IA_ActivateTrigger, 4
#endif
   PUSH         { ip }         ; saves ip value

   ; Triggers the HARDWARE watchdog.
   ; Writes the trigger value into the trigger 0 register
   LDR          ip, =#0xB060C000
   MOVS         r1, #0x55
   STR          r1, [ip, 16]
   ; Writes the trigger value into the trigger 1 register
   MOVS         r1, #0xaa
   STR          r1, [ip, 24]
   NOP

   ; Triggers the SOFTWARE watchdog.
   ; Writes the trigger value into the trigger 0 register
   LDR          ip, =#0xB0308000
   MOVS         r1, #0x55
   STR          r1, [ip, 16]
   ; Writes the trigger value into the trigger 1 register
   MOVS         r1, #0xaa
   STR          r1, [ip, 24]
   NOP

   POP          { ip }         ; restore ip value
   BX           lr
Wdg_66_IA_ActivateTrigger_end:

   END

