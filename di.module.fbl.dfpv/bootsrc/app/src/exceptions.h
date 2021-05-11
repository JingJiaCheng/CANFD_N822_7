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
/** \file exceptions.h
 **
 ** Assignment of exception vectors to exception handlers. These vectors will
 ** be set to the BootROM Hardware Interface configuration registers to re-map
 ** the exception vectors of the ARM exception table inside the BootROM.
 **
 ** The default configuration assigns the exception handlers implemented in
 ** exceptions.c. Optionally, user handlers can be assigned.
 **
 ** \note Setting the exception vectors will only work if the high-boot
 **       option is enabled for the R5F core (HIVECS == 1, see ARM TRM). This
 **       means, the exception table is located at 0xFFFF0000, inside the
 **       build-in BootROM.
 **
 ** History:
 **   - 2014-04-10  0.01  HS  Initial version for Traveo
 **   - 2014-09-03  0.02  ST  Changed return type of Exceptions_Init() to void
 **                            (value was unconditionally 'Ok' anyway)
 *****************************************************************************/

#ifndef __EXCEPTIONS_H__
#define __EXCEPTIONS_H__

// File version 0xYYXX = vYY.XX
#define EXCEPTIONS_H_VERSION          0x0001

#ifndef __FILE_VERSION_CHECK__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "base_types.h"

/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/

/** Undefined Instruction Exception Handler */
#define EXCEPTIONS_EXC_HANDLER_UNDEF_INSTR     DefaultUndefinedInstructionExceptionHandler
/** Supervisor Call Exception Handler */
#define EXCEPTIONS_EXC_HANDLER_SVC             DefaultSupervisorCallExceptionHandler
/** Prefetch Abort Exception Handler */
#define EXCEPTIONS_EXC_HANDLER_PABORT          DefaultPrefetchAbortExceptionHandler
/** Data Abort Exception Handler */
#define EXCEPTIONS_EXC_HANDLER_DABORT          DefaultDataAbortExceptionHandler

/** Supervisor Callback Function */
#define EXCEPTIONS_SVC_HANDLER_CB              NULL


/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/
typedef void (*svc_hdl_func_ptr_t)(uint32_t u32ServiceNumber) ;


/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/
extern void Exceptions_Init(void);

#endif /* __FILE_VERSION_CHECK__ */
#endif /* __EXCEPTIONS_H__ */
