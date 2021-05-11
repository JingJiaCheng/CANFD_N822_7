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
/*****************************************************************************
 ** \file cpu.h
 **
 ** Headerfile for Traveo CPU functions
 **
 ** History:
 **   - 2014-06-02  0.01  HS  Initial version for Traveo
 **   - 2014-11-21  0.02  CEy Added Cpu_InvalidateDCacheArea()
 *****************************************************************************/

#ifndef __CPU_H__
#define __CPU_H__


/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "base_types.h"
#include "abstract.h"

/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/* Global pre-processor symbols/macros ('define')                            */
/*****************************************************************************/


/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/


/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/


/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/


/*****************************************************************************
 * Global function prototypes
 *****************************************************************************/

/**
 *****************************************************************************
 ** \defgroup CpuGroup CPU Mode Functions (CPU)
 **
 ** \brief This section describes the interface for the CPU Mode functions.
 **
 ** Provided functions of CPU module:
 **
 ** - Cpu_CpuIsInPrivilegedMode()
 ** - Cpu_GetSystemMode()
 ** - CPU_SET_SYSTEMCONTROL()
 ** - CPU_GET_SYSTEMCONTROL()
 ** - CPU_GET_MPU_TYPE()
 ** - CPU_SET_MPU_REGIONNUMBER()
 ** - CPU_SET_MPU_REGIONBASE()
 ** - CPU_GET_MPU_REGIONBASE()
 ** - CPU_SET_MPU_REGIONSIZE_ENABLE()
 ** - CPU_GET_MPU_REGIONSIZE_ENABLE()
 ** - CPU_SET_MPU_REGIONACCESS()
 ** - CPU_GET_MPU_REGIONACCESS()
 **
 ** Cpu_CpuIsInPrivilegedMode() is used to check whether CPU is in privileged mode.
 ** Cpu_GetSystemMode() is used to get current CPU mode.
 ** On the CR5, cpu modes are follows:
 ** - User mode (unprivileged)
 ** - System mode
 ** - Supvervisor mode
 ** - IRQ mode
 ** - FIQ mode
 ** - Abort mode
 ** - Undefined mode
 **
 ** Other functions can be used to set/get a coprocesser registers.
 **
 *****************************************************************************/
/* @{ */

/** Macro for setting CP15 System Control Register */
#define CPU_SET_SYSTEMCONTROL(u32Value)         MCR(15, 0, u32Value, 1, 0, 0)

/** Macro for getting CP15 System Control Register */
#define CPU_GET_SYSTEMCONTROL()                 MRC(15, 0, 1, 0, 0)

/** Macro for getting CP15 MPU Type Register */
#define CPU_GET_MPU_TYPE()                      MRC(15, 0, 0, 0, 4)

/** Macro for setting CP15 Memory Region Number Register */
#define CPU_SET_MPU_REGIONNUMBER(u32Value)      MCR(15, 0, u32Value, 6, 2, 0)

/** Macro for setting CP15 Region Base Register */
#define CPU_SET_MPU_REGIONBASE(u32Value)        MCR(15, 0, u32Value, 6, 1, 0)

/** Macro for getting CP15 Region Base Register */
#define CPU_GET_MPU_REGIONBASE()                MRC(15, 0, 6, 1, 0)

/** Macro for setting CP15 Region Size and Enable Register */
#define CPU_SET_MPU_REGIONSIZE_ENABLE(u32Value) MCR(15, 0, u32Value, 6, 1, 2)

/** Macro for getting CP15 Region Size and Enable Register */
#define CPU_GET_MPU_REGIONSIZE_ENABLE()         MRC(15, 0, 6, 1, 2)

/** Macro for setting CP15 Region Access Control Register */
#define CPU_SET_MPU_REGIONACCESS(u32Value)      MCR(15, 0, u32Value, 6, 1, 4)

/** Macro for getting CP15 Region Access Control Register */
#define CPU_GET_MPU_REGIONACCESS()              MRC(15, 0, 6, 1, 4)


/**
 *****************************************************************************
 ** \brief CPU mode
 *****************************************************************************/
typedef enum en_cpu_mode
{
    CpuUserMode     = 0x10,     /*!< User mode */
    /* Privileged modes start here */
    CpuSystemMode   = 0x1F,     /*!< System mode */
    CpuFiqMode      = 0x11,     /*!< Fast interrupt mode */
    CpuIrqMode      = 0x12,     /*!< Interrupt mode */
    CpuSvcMode      = 0x13,     /*!< Supervisor mode */
    CpuAbtMode      = 0x17,     /*!< Data abort mode */
    CpuUndefMode    = 0x1B      /*!< Undefined mode */
} en_cpu_mode_t;

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/
extern boolean_t     Cpu_CpuIsInPrivilegedMode(void);
extern uint32_t      Cpu_GetSystemMode(void);
extern en_result_t   Cpu_InvalidateDCacheArea(uint32_t u32StartAddress, uint32_t u32ByteSize);

/* @} */

#ifdef __cplusplus
}
#endif


#endif /* __CPU_H__ */
/*****************************************************************************/
/* EOF (not truncated)                                                       */
/*****************************************************************************/
