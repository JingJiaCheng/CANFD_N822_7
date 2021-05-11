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
/** \file exceptions.c
 **
 ** Definition of exception vectors initialization function and default
 ** exception handlers. The assignment of exception vectors must be done in
 ** exceptions.h.
 **
 ** \note Setting the exception vectors will only work if the high-boot
 **       option is enabled for the R5F core (HIVECS == 1, see ARM TRM). This
 **       means, the exception table is located at 0xFFFF0000, inside the
 **       build-in BootROM.
 **
 ** History:
 **   - 2014-04-10  0.01  HS  Initial version for Traveo
 **   - 2014-11-05  0.02  ST  Changed return type of Exceptions_Init() to void
 **                            (value was unconditionally 'Ok' anyway),
 **                            removed unnecessary "lock status" waiting
 *****************************************************************************/

// File version 0xYYXX = vYY.XX
#define EXCEPTIONS_C_VERSION          0x0001

#ifndef __FILE_VERSION_CHECK__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "exceptions.h"
#include "mcu_settings.h"
#include "abstract.h"

/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/

/** Key to unlock the BootROM Hardware Interface by writing to EXCFG_UNLOCK register */
#define BOOTROM_KEY_UNLOCK      0xACC5B007 
/** Key to lock the BootROM Hardware Interface by writing to EXCFG_UNLOCK register */
#define BOOTROM_KEY_LOCK        0xB007ECF6

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/

/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/
static void DefaultUndefinedInstructionExceptionHandler(void);
static void DefaultSupervisorCallExceptionHandler(void);
static void DefaultPrefetchAbortExceptionHandler(void);
static void DefaultDataAbortExceptionHandler(void);

/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/
/// Callback function pointer for the Supervisor Call (defined in exceptions.h)
static const svc_hdl_func_ptr_t m_pfnSupervisorCallHandlerCallback = EXCEPTIONS_SVC_HANDLER_CB ;


/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

/**
 ******************************************************************************
 ** \brief Initialize the BootROM Hardware Interface
 **
 ** This function will re-map the exception vectors of the ARM exception table
 ** inside the BootROM to the handlers which are defined in exceptions.h.
 ** During this operation the BootROM Hardware Interface will be unlocked
 ** to enable write access to the exception vector configuration registers.
 ** Before leaving this function, the new exception vector configuration will be
 ** swapped with the current configuration.
 **
 ** \note Setting the exception vectors will only work if the high-boot
 **       option is enabled for the R5F core (HIVECS == 1, see ARM TRM). This
 **       means, the exception table is located at 0xFFFF0000, inside the
 **       build-in BootROM.
 **
 ** \pre Must be in system mode
 **
 ******************************************************************************/
void Exceptions_Init(void)
{
    // Unlock BootROM Hardware Interface registers
    EXCFG_UNLOCK = BOOTROM_KEY_UNLOCK;
    
    // Set exception vector registers in inactive configuration set
    EXCFG_UNDEFINACT  = (uint32_t)EXCEPTIONS_EXC_HANDLER_UNDEF_INSTR;     // Undefined instruction handler
    EXCFG_SVCINACT    = (uint32_t)EXCEPTIONS_EXC_HANDLER_SVC;             // Supervisor call handler
    EXCFG_PABORTINACT = (uint32_t)EXCEPTIONS_EXC_HANDLER_PABORT;          // Prefetch abort handler
    EXCFG_DABORTINACT = (uint32_t)EXCEPTIONS_EXC_HANDLER_DABORT;          // Data abort handler
    // Note: EXCFG_IRQINACT for interrupt exception vector
    //       is not available
    // Note: EXCFG_NMIINACT for Non-maskable interrupt exception vector
    //       is not available due to Interrupt Controller providing
    //       the NMI (FIQ) vector at NMIVAS mirror register below BootROM

    // Swap inactive <-> active exception vector configuration sets
    EXCFG_CNFG_SWAP = 1;
    
    // Finally lock BootROM Hardware Interface registers
    EXCFG_UNLOCK = BOOTROM_KEY_LOCK;
}

/**
 ******************************************************************************
 ** \brief Default handler for Undefined Instruction Exception
 **
 ** ARM Cortex-R5(F) TRM: "When an instruction is encountered which is UNDEFINED,
 ** or is for the VFP when the VFP is not enabled, the processor takes the Undefined
 ** instruction exception. Software can use this mechanism to extend the ARM
 ** instruction set by emulating UNDEFINED coprocessor instructions. UNDEFINED
 ** exceptions also occur when a UDIV  or SDIV instruction is executed, the value
 ** in Rm is zero, and the DZ bit in the System Control Register is set."
 **
 ** If the handler is required to return after the instruction that caused the
 ** Undefined exception, please refer to the ARM Cortex-R5(F) TRM.
 **
 ** \todo add full implementation
 ******************************************************************************/
static void DefaultUndefinedInstructionExceptionHandler(void)
{
    // IRQs are disabled now.
    // Please refer to the ARM documentation on how to handle this exception.
		// Spin here or wait for Watchdog reset
    while (1)
    {
    	;		/* To avoid QAC Warnings */
    }
}

/**
 ******************************************************************************
 ** \brief Default handler for Supervisor Call Execution
 **
 ** This function is an internal wrapper and is called by the real SVC handler
 ** The callback function is user defined in exceptions.h and can be used to
 ** execute code in privileged mode.
 **
 ** \param u32ServiceNumber Number of SVC provided by the handler
 **
 ******************************************************************************/
#ifdef __TOOLCHAIN_IAR__
    __arm void SupervisorCallHandler( uint32_t u32ServiceNumber );
    __arm
#elif defined __TOOLCHAIN_GHS_MULTI__
    #if defined(__THUMB_AWARE__) && defined(__THUMB__)   
        # pragma ghs nothumb   
    #endif /* defined(__THUMB_AWARE__) && defined(__THUMB__) */   
#endif
void SupervisorCallHandler( uint32_t u32ServiceNumber )
{
    if ( m_pfnSupervisorCallHandlerCallback != NULL )
    {
        m_pfnSupervisorCallHandlerCallback( u32ServiceNumber ) ;
    }
} // SupervisorCallHandler
#if defined __TOOLCHAIN_GHS_MULTI__
    #if defined(__THUMB_AWARE__) && defined(__THUMB__)   
        # pragma ghs thumb   
    #endif /* defined(__THUMB_AWARE__) && defined(__THUMB__) */   
#endif

/**
 ******************************************************************************
 ** \brief Default handler for Supervisor Call Exception
 **
 ** ARM Cortex-R5(F) TRM: "You can use the SuperVisor Call (SVC) instruction
 ** (formerly SWI) to enter Supervisor mode, usually to request a particular
 ** supervisor function. The SVC handler reads the opcode to extract the SVC
 ** function number. A SVC handler returns by executing the following instruction,
 ** irrespective of the processor operating state: MOVS PC, R14_svc
 ** This action restores the PC and CPSR, and returns to the instruction following
 ** the SVC."
 **
 ******************************************************************************/
#ifdef __TOOLCHAIN_IAR__
    #pragma required=SupervisorCallHandler
    __arm
#elif defined __TOOLCHAIN_GHS_MULTI__
    #if defined(__THUMB_AWARE__) && defined(__THUMB__)   
        # pragma ghs nothumb   
    #endif /* defined(__THUMB_AWARE__) && defined(__THUMB__) */   
#endif
static void DefaultSupervisorCallExceptionHandler(void)
{
    ASM_INLINE( "STMFD   sp!, {r0-r12, r14}    " ) ; // Store registers
    ASM_INLINE( "MOV     r1, sp                " ) ; // Set pointer to parameters
    ASM_INLINE( "MRS     r0, spsr              " ) ; // Move SPSR into general purpose register
    ASM_INLINE( "TST     r0, #0x20             " ) ; // Test if bit 5 is set (THUMB mode)
    ASM_INLINE( "LDRNEH  r0, [lr, #-2]         " ) ; // T_bit set so load halfword (Thumb)
    ASM_INLINE( "BICNE   r0, r0, #0xFF00       " ) ; //  and clear top 8 bits of halfword
    ASM_INLINE( "LDREQ   r0, [lr, #-4]         " ) ; // T_bit clear so load word (ARM)
    ASM_INLINE( "BICEQ   r0, r0, #0xFF000000   " ) ; //  and clear top 8 bits of word

    // r0 now contains SVC number
    // r1 now contains pointer to stacked registers
    ASM_INLINE( "BL      SupervisorCallHandler       " ) ; // Call main SVC handler

    ASM_INLINE( "LDMFD   sp!, {r0-r12, r14}    " ) ; // Restore registers and return
    ASM_INLINE( "MOVS    PC, R14               " ) ; // Return from SVC exception (no re-execution, next instruction)

    // ToDo reenable IRQs
} // DefaultSupervisorCallExceptionHandler
#if defined __TOOLCHAIN_GHS_MULTI__
    #if defined(__THUMB_AWARE__) && defined(__THUMB__)   
        # pragma ghs thumb   
    #endif /* defined(__THUMB_AWARE__) && defined(__THUMB__) */   
#endif

/**
 ******************************************************************************
 ** \brief Default handler for Prefetch Abort Exception
 **
 ** ARM Cortex-R5(F) TRM: "When the processor's memory system cannot complete
 ** a memory access successfully, an abort is generated. Aborts can occur for
 ** a number of reasons, for example:
 **     - a permission fault indicated by the MPU
 **     - an error response to a transaction on the AXI memory bus
 **     - an error detected in the data by the ECC checking logic.
 ** An error occurring on an instruction fetch generates a prefetch abort.
 ** When a Prefetch Abort (PABT) occurs, the processor marks the prefetched
 ** instruction as invalid, but does not take the exception until the instruction
 ** is to be executed. If the instruction is not executed, for example because
 ** a branch occurs while it is in the pipeline, the abort does not take place.
 ** All prefetch aborts are precise."
 **
 ** \todo add full implementation
 ******************************************************************************/
static void DefaultPrefetchAbortExceptionHandler(void)
{
    // IRQs are disabled now.
    // Please refer to the ARM documentation on how to handle this exception.

    // For debugging purpose only
    #ifdef DEBUG
    // Collect some information about the cause of the prefetch abort
    volatile uint32_t u32InstructionFaultStatus    = MRC( 15, 0,  5, 0, 1 );
    volatile uint32_t u32AuxInstructionFaultStatus = MRC( 15, 0,  5, 1, 1 );
    volatile uint32_t u32InstructionFaultAddress   = MRC( 15, 0,  6, 0, 2 );
    #endif // DEBUG

		// Spin here or wait for Watchdog reset
    while (1)
    {
    	;		/* To avoid QAC Warnings */
    }
}

/**
 ******************************************************************************
 ** \brief Default handler for Prefetch Abort Exception
 **
 ** ARM Cortex-R5(F) TRM: "When the processor's memory system cannot complete
 ** a memory access successfully, an abort is generated. Aborts can occur for
 ** a number of reasons, for example:
 **     - a permission fault indicated by the MPU
 **     - an error response to a transaction on the AXI memory bus
 **     - an error detected in the data by the ECC checking logic.
 ** An error occurring on a data memory access can generate a data abort. [...]
 ** A Data Abort (DABT) can be either precise or imprecise, depending on the type
 ** of fault that caused it."
 **
 ** \todo add full implementation
 ******************************************************************************/
static void DefaultDataAbortExceptionHandler(void)
{
    // IRQs are disabled now.
    // Please refer to the ARM documentation on how to handle this exception.

    // For debugging purpose only
    #ifdef DEBUG
    // Collect some information about the cause of the data abort
    volatile uint32_t u32DataFaultStatus    = MRC( 15, 0,  5, 0, 0 );
    volatile uint32_t u32AuxDataFaultStatus = MRC( 15, 0,  5, 1, 0 );
    volatile uint32_t u32DataFaultAddress   = MRC( 15, 0,  6, 0, 0 );
    #endif // DEBUG

		// Spin here or wait for Watchdog reset
    while (1)
    {
    	;		/* To avoid QAC Warnings */
    }
}

#endif /* __FILE_VERSION_CHECK__ */

