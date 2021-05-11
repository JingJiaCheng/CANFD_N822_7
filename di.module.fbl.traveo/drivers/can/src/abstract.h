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
/** \file abstract.h
 **
 ** Toolchain/Compiler abstraction. Assignment of build-in functions and macros.
 **
 ** History:
 **   - 2014-04-10  0.01  HS  Initial version for Traveo
 **   - 2014-06-27  0.02  HS  Add macro to insert a DMB
 **   - 2014-09-15  0.03  ST  Now using "volatile" IAR inline ASM macro
 *****************************************************************************/

#ifndef __ABSTRACT_H__
#define __ABSTRACT_H__

// File version 0xYYXX = vYY.XX
#define ABSTRACT_H_VERSION          0x0001

#ifndef __FILE_VERSION_CHECK__


#ifdef __ICCARM__
    #define __TOOLCHAIN_IAR__
#endif

#ifdef __ghs__
    #define __TOOLCHAIN_GHS_MULTI__
#endif


/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#ifdef __TOOLCHAIN_IAR__
    #include "intrinsics.h" // IAR intrinsic functions (e.g. __enable_interrupt())
#endif

#ifdef __TOOLCHAIN_GHS_MULTI__
    #include "arm_ghs.h"   // GHS MULTI intrinsic functions (e.g. __enable_interrupt())
#endif

/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/

#ifdef __TOOLCHAIN_IAR__

    /** Keyword for a function call using an SWI */
    #define SWI_NR_PRAGMA(arg) _Pragma(#arg)
    #define SWI_CALL(nr,intfn) SWI_NR_PRAGMA(swi_number=nr)     __swi void intfn (void)

    /** Macro to insert a No Operation instruction */
    #define NOP()               __no_operation()
    /** Macro to insert a Data Synchronization Barrier instruction */
    #define DSB()               __DSB()
    /** Macro to insert an Instruction Synchronization Barrier instruction */
    #define ISB()               __ISB()
    /** Macro to insert a Data Memory Barrier instruction */
    #define DMB()               __DMB()
    /** Macro to insert a CLZ instruction (returns leading zeros of a 32-bit value, started at bit31) */
    #define CLZ(u32Value)       __CLZ(u32Value)
    
    /** Macro to write the CPSR register */
    #define SET_CPSR(u32Value)  __set_CPSR(u32Value) ;
    /** Macro to read the CPSR register */
    #define GET_CPSR()          __get_CPSR() ;

    /** Macro for inline assembly */
    #define ASM_INLINE(instr)   __asm volatile(instr)

    /* -------------------------------------------------------------------*/
    /* M A C R O S   F O R   I N T E R R U P T S   ( I R Q )              */
    /* -------------------------------------------------------------------*/

    /** Macro to disable IRQs. This will set the i-flag in the CPSR to mask further IRQs. */
    #define IRQ_DISABLE()           ASM_INLINE("CPSID I")
    /** Macro to enable IRQs. This will clear the i-flag in the CPSR to accept IRQs. */
    #define IRQ_ENABLE()            ASM_INLINE("CPSIE I")

    /** Macro to disable IRQs. This will set the I-flag in the CPSR to mask further IRQs.*/
    /** This macro must be used in  a same block with IRQ_RESTORE() . */
    #define IRQ_DISABLE_LOCAL()     {}/*{\
                                        __istate_t interrupt_state;\
                                        interrupt_state = __get_interrupt_state();\
                                        __disable_irq();*/

    /** Macro to enable IRQs. This will set the I-flag in the CPSR to accept IRQs.*/
    /** This macro must be used in  a same block with IRQ_RESTORE() . */
    #define IRQ_ENABLE_LOCAL()      {}/*{\
                                        __istate_t interrupt_state;\
                                        interrupt_state = __get_interrupt_state();\
                                        __enable_irq();*/

    /** Macro to restore IRQ state. This will restore the I-flag */
    /** This macro must be used in  a same block with IRQ_DISABLE_LOCAL() or IRQ_ENABLE_LOCAL(). */
    #define IRQ_RESTORE()               __set_interrupt_state(interrupt_state);\
                                    }

    /** Macro to enable NMIs. This will clear the f-flag in the CPSR to accept NMIs (FIQ).
     ** After reset, NMIs can be enabled. After this, it is not possible to disable/mask them again,
     ** except by entering forcing a NMI to enter FIQ mode. */
    #define NMI_ENABLE()            ASM_INLINE("CPSIE F")
   
    /** Macro containing the keywords to mark a function as interrupt
     ** service routine (ISR) for IRQs supporting interrupt nesting.
     ** This will signal the compiler to create the required assembler
     ** entry and exit code for an IRQ handler supporting nested
     ** interrupts i.e. during execution of the ISR interrupts with
     ** higher priority level can interrupt the ISR.*/
    #define FN_IRQ_NESTED           __irq __arm __nested
        
    /** Macro containing the keywords to mark a function as interrupt
     ** service routine (ISR) for IRQs. This will signal the compiler
     ** to create the required assembler entry and exit code for
     ** an IRQ handler. During ISR execution, no other interrupts
     ** will be accepted. */
    #define FN_IRQ_NOT_NESTED       __irq __arm
            
    /* --------------------------------------------------------------------------------*/
    /* M A C R O S   F O R   N O N - M A S K A B L E   I N T E R R U P T S   ( N M I ) */
    /* --------------------------------------------------------------------------------*/

    /** Keyword for a NMI handler function definition */
    #define FN_NMI                  __fiq __arm
    
#endif

#ifdef __TOOLCHAIN_GHS_MULTI__

    /** Keyword for a function call using an SWI */
    #define SWI_CALL( nr, name ) __swi( nr ) void name(void) 
    
    /** Macro to insert a No Operation instruction */
    #define NOP()               __asm("NOP")
    /** Macro to insert a Data Synchronization Barrier instruction */
    #define DSB()               __asm("DSB")
    /** Macro to insert an Instruction Synchronization Barrier instruction */
    #define ISB()               __asm("ISB")
    /** Macro to insert a Data Memory Barrier instruction */
    #define DMB()               __asm("DMB")
    /** Macro to insert a CLZ instruction (returns leading zeros of a 32-bit value, started at bit31) */
    #define CLZ(u32Value)       __CLZ32(u32Value)

    /** Macro to write the CPSR register */
    #define SET_CPSR(u32Value)  __SETSR(u32Value) ;
    /** Macro to read the CPSR register */
    #define GET_CPSR()          __GETSR() ;

    /** Macro for inline assembly */
    #define ASM_INLINE(instr)   __asm(instr)

    /* -------------------------------------------------------------------*/
    /* M A C R O S   F O R   I N T E R R U P T S   ( I R Q )              */
    /* -------------------------------------------------------------------*/

    /** Macro to disable IRQs. This will set the i-flag in the CPSR to mask further IRQs. */
    #define IRQ_DISABLE()           ASM_INLINE("CPSID I")
    /** Macro to enable IRQs. This will clear the i-flag in the CPSR to accept IRQs. */
    #define IRQ_ENABLE()            ASM_INLINE("CPSIE I")
    
    /** Macro to disable IRQs. This will set the I-flag in the CPSR to mask further IRQs.*/
    /** This code also try to set the F-flag, but it is not possible to set the F-flag again */
    /** after the F-flag is cleared. So, setting the F-flag will be ignored. */
    /** This macro must be used in  a same block with IRQ_RESTORE(), */
    /** and be only used after the F-flag is cleared. */
    #define IRQ_DISABLE_LOCAL()     {\
                                        unsigned int interrupt_state;\
                                        interrupt_state = __DIR();

    /** Macro to enable IRQs. This will set the I-flag in the CPSR to accept IRQs.*/
    /** This macro must be used in  a same block with IRQ_RESTORE(), */
    /** and be only used after the F-flag is cleared. */
    #define IRQ_ENABLE_LOCAL()      {\
                                        unsigned int interrupt_state;\
                                        interrupt_state = __EIR();

    /** Macro to restore IRQ state. This will restore the I-flag */
    #define IRQ_RESTORE()               __RIR(interrupt_state);\
                                    }

    /** Macro to enable NMIs. This will clear the f-flag in the CPSR to accept NMIs (FIQ).
     ** After reset, NMIs can be enabled. After this, it is not possible to disable/mask them again,
     ** except by entering forcing a NMI to enter FIQ mode. */
    #define NMI_ENABLE()            ASM_INLINE("CPSIE F")
    
    /** Macro containing the keywords to mark a function as interrupt
     ** service routine (ISR) for IRQs supporting interrupt nesting.
     ** This will signal the compiler to create the required assembler
     ** entry and exit code for an IRQ handler supporting nested
     ** interrupts i.e. during execution of the ISR interrupts with
     ** higher priority level can interrupt the ISR.*/
    /* #define FN_IRQ_NESTED          __interrupt */
    /* Currently interrupt nesting is not supported by GHS compiler */
           
    /** Macro containing the keywords to mark a function as interrupt
     ** service routine (ISR) for IRQs. This will signal the compiler
     ** to create the required assembler entry and exit code for
     ** an IRQ handler. During ISR execution, no other interrupts
     ** will be accepted.
     ** GHS compiler will automatically compile __interrupt functions in ARM  mode. */
    #define FN_IRQ_NOT_NESTED       __interrupt

    /* --------------------------------------------------------------------------------*/
    /* M A C R O S   F O R   N O N - M A S K A B L E   I N T E R R U P T S   ( N M I ) */
    /* --------------------------------------------------------------------------------*/

    /** Keyword for a NMI handler function definition */
    #define FN_NMI                  __interrupt 

#endif

/** Macro to insert a coprocessor read instruction (MRC).
 ** Returns a 32-bit value from the co-processor. */
#define MRC(u32CoPrc, u32OpCode1, u32CRn, u32CRm, u32OpCode2)  \
                                __MRC(u32CoPrc, u32OpCode1, u32CRn, u32CRm, u32OpCode2)
/** Macro to insert a coprocessor write instruction (MCR).
 ** Passes a 32-bit value (u32Rd) to the co-processor. */
#define MCR(u32CoPrc, u32OpCode1, u32Rd, u32CRn, u32CRm, u32OpCode2)  \
                                __MCR(u32CoPrc, u32OpCode1, u32Rd, u32CRn, u32CRm, u32OpCode2)  \


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
#endif /* __ABSTRACT_H__ */
