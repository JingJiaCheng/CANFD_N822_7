/******************************************************************************
 * $Revision: 212 $
 * $Date:: 2014-07-04 13:18:24 +0900#$
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
/** \file pdl_intern.h
 **
 ** Internal support header file for Traveo Peripheral Driver Library.
 ** In this file several common macros are defined and the PDL peripheral
 ** module enable switches are determined based on the settings in l3.h.
 **
 ** History:
 ** - 2014-08-07  0.01  SWi  First version
 *****************************************************************************/

#ifndef __PDL_INTERN_H__
#define __PDL_INTERN_H__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/


/* C binding of definitions if building with C++ compiler                    */
#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/* Global pre-processor symbols/macros ('define')                            */
/*****************************************************************************/


/**
 *****************************************************************************
 ** \defgroup PDLMacroGroup General PDL macros
 *****************************************************************************/
/*@{*/

/**
 *****************************************************************************
 ** Macro for writing one ore more bits in a register by one register
 ** write operation. It is recommended to use this macro to initialize
 ** full registers with constant bit settings and to use this macro to set
 ** and clear bits located in a dedicated set/clear register.
 **
 ** Using this macro prevents RMW operations on registers thus providing
 ** better performance and preventing lost update problems when using concurrent
 ** accesses on such registers.
 ** 
 ** \param name         name of register, lowercase (e.g. usartn_sscr)
 ** \param unRegister   register variable which should be set (must be of union type)
 ** \param ...          one or more bit assignment(s) in PDL_WRITE_BIT_REG_ACC#unRegister
 **                       (format: ".u1BIT1 = 1, .u1BIT2 = 1")
 ** 
 ** \note The macro will write the full PDL_WRITE_BIT_REG_ACC#unRegister with the given bit mask.
 **       All remaining bits in PDL_WRITE_BIT_REG_ACC#unRegister which are not given will
 **       be written to '0'!
 **
 ** Usage example:
 **   
 **   / Set ADCn_CSC1:INTC and ADCn_CSC1:PAUSC to clear ADCn_CS1:INT and ADCn_CS1:PAUS bits
 **   PDL_WRITE_BIT_REG_ACC(adcn_csc1, ADC0.unCSC1, .u1INTC = 1, .u1PAUSC = 1);
 ** 
 *****************************************************************************/
#define PDL_WRITE_BIT_REG_ACC(name, unRegister, ...)   \
        { \
            unRegister##.stcField = (stc_##name##_field_t) { __VA_ARGS__ }; \
        }

/**
 *****************************************************************************
 ** Same macro as PDL_WRITE_BIT_REG_ACC() but including a typecast
 ** for unRegister to type un_{name}_t.
 *****************************************************************************/
#define PDL_WRITE_BIT_REG_ACC_TC(name, unRegister, ...)   \
        { \
            (*((un_##name##_t*)&unRegister))##.stcField = (stc_##name##_field_t) { __VA_ARGS__ }; \
        } 
             
/**
 *****************************************************************************
 ** Same macro as PDL_WRITE_BIT_REG_ACC() but accessing only one sub-byte within
 ** the given register. The additional parameter #byte will address the
 ** sub-byte in the given register.
 **
 ** The macro should be used for byte accesses to registers which contain
 ** clear/set bits as well as configuration bits which must not be overwritten.
 ** 
 ** \param byte         sub-byte in PDL_WRITE_BIT_BYTE_ACC#unRegister (0, 1, ...)
 ** 
 ** \note The macro will write only the given byte of PDL_WRITE_BIT_BYTE_ACC#unRegister
 **       with the given bit mask. All remaining bits in that register
 **       byte which are not given will be written to '0'!
 **
 ** Usage example:
 **   
 **   / Set SGn_CR0:AMICLR to clear SGn_CR1:AMINT
 **   / (only byte0 of SGn_CR0 is written to preserve settings in byte1)
 **   PDL_WRITE_BIT_BYTE_ACC(sgn_cr0, SG0.unCR0, .u1AMICLR = 1);
 ** 
 *****************************************************************************/
#define PDL_WRITE_BIT_BYTE_ACC(name, unRegister, byte, ...)      \
        { \
            (*( un_##name##_t *)&( unRegister )).stcFieldBytes.stcByte##byte## = \
                          ( stc_##name##_field_byte##byte##_t ) { __VA_ARGS__ }; \
        }
   
/**
 *****************************************************************************
 ** Same macro as PDL_WRITE_BIT_REG_ACC() but including mechanism to
 ** synchronously write the register, including all latency time of bus bridges.
 ** This is ensured by reading back the register which will force the CPU to
 ** wait until the write/read-back operation is completed. Reading an address
 ** on the same bus as written before, will stall the CPU until all pending
 ** write operations in CPU write buffer to strictly ordered memory areas like
 ** I/O registers are completed.
 **
 ** This macro should be used to ensure a safe clearing of interrupt flags
 ** before returning from the ISR, to prevent ISR double execution in case of
 ** not-yet-cleared interrupt flags in a peripheral.
 **
 ** Typically the appropriate clear register is used to clear the
 ** interrupt status flag of a peripheral.
 *****************************************************************************/
#define PDL_WRITE_BIT_REG_ACC_SYNC(name, unRegister, ...)   \
        { \
            PDL_WRITE_BIT_REG_ACC(name, unRegister, __VA_ARGS__); \
            unRegister##; \
        }

/**
 *****************************************************************************
 ** Same macro as PDL_WRITE_BIT_REG_ACC_SYNC() but including a typecast
 ** for unRegister to type un_{name}_t.
 *****************************************************************************/
#define PDL_WRITE_BIT_REG_ACC_SYNC_TC(name, unRegister, ...)   \
        { \
            PDL_WRITE_BIT_REG_ACC_TC(name, unRegister, __VA_ARGS__); \
            unRegister##; \
        }
/**
 *****************************************************************************
 ** Same macro as PDL_WRITE_BIT_REG_ACC_SYNC() but accessing only one sub-byte within
 ** the given register. The additional parameter #byte will address the
 ** sub-byte in the given register - similar to PDL_WRITE_BIT_BYTE_ACC().
 *****************************************************************************/
#define PDL_WRITE_BIT_BYTE_ACC_SYNC(name, unRegister, byte, ...)   \
        { \
            PDL_WRITE_BIT_BYTE_ACC(name, unRegister, byte, __VA_ARGS__); \
            unRegister##; \
        }
             
/**
 *****************************************************************************
 ** Macro for synchronously disabling an interrupt of a peripheral
 ** including all latency time of bus bridges, interrupt status
 ** signal to the Interrupt Controller and interrupt priority evaluation.
 ** This macro should be used to ensure a safe, interrupt protected
 ** code execution after execution of this macro.
 **
 ** Typically the appropriate clear register is used to clear the
 ** interrupt enable flag of a peripheral (e.g. set bit TIEC of 
 ** Serial Status Clear Register USARTN_SSCR to clear the 
 ** Transmission Interrupt Enable (TIE) bit in the Serial Status
 ** Register USARTN_SSR).
 ** 
 ** \param name         name of register, lowercase (e.g. usartn_sscr)
 ** \param unRegister   register variable which should be set (must be of union type)
 ** \param ...          one or more bit assignment(s) in 
 **                      PDL_SAFELY_DISABLE_INTERRUPT#unRegister (format: ".u1BIT1 = 1, .u1BIT2 = 1")
 ** 
 ** \note The macro will write the full PDL_SAFELY_DISABLE_INTERRUPT#unRegister 
 **       with the given bit mask.
 **       All remaining bits in PDL_SAFELY_DISABLE_INTERRUPT#unRegister 
 **       which are not given will be written to '0'! That's why it is 
 **       recommended to use the appropriate clear register.
 **
 ** Usage example:
 **   
 **   / Set USARTN_SSCR:TIEC to clear USARTN_SSR:TIE
 **   PDL_SAFELY_DISABLE_INTERRUPT(usartn_sscr, USART0.unSSCR, .u1TIEC = 1);
 ** 
 *****************************************************************************/
#define PDL_SAFELY_DISABLE_INTERRUPT_SPEU(name, unRegister, ...)     \
                        { \
                          PDL_WRITE_BIT_REG_ACC(name, unRegister, __VA_ARGS__); \
                          unRegister##; \
                          NOP(); NOP(); NOP(); NOP(); NOP(); NOP(); \
                        }
/**
 *****************************************************************************
 ** Same macro as PDL_SAFELY_DISABLE_INTERRUPT() but including a typecast
 ** for unRegister to type un_{name}_t.
 *****************************************************************************/
#define PDL_SAFELY_DISABLE_INTERRUPT_TC_SPEU(name, unRegister, ...)     \
                        { \
                          PDL_WRITE_BIT_REG_ACC(name, (*((un_##name##_t*)&unRegister)), __VA_ARGS__); \
                          unRegister##; \
                          NOP(); NOP(); NOP(); NOP(); NOP(); NOP(); \
                        }


/*@} / PDLMacroGroup */


/**
 *****************************************************************************
 ** \defgroup DetGroup Debug and Error Trace (DET)
 **
 ** Debug and Error Trace (DET) is supported in 4 levels. The levels work
 ** hierarchically, i.e. each levels adds more output to the level before.
 *****************************************************************************/
/*@{*/

/* PDL_DET_LEVEL */
/*
 #define PDL_DET_LEVEL_OFF            0   /< No DET messages are reported
 #define PDL_DET_LEVEL_RETURN_ERROR   1   /< Errors only are reported
 #define PDL_DET_LEVEL_RETURN_ALL     2   /< Errors and OKs are reported
 #define PDL_DET_LEVEL_TRACE          3   /< Errors, OKs and trace information are reported

 #ifndef PDL_DET_LEVEL
     #warning PDL_DET_LEVEL is not defined, will be set to OFF!
     #define PDL_DET_LEVEL PDL_DET_LEVEL_OFF
 #endif
*/
/* PDL_DET_SCOPE */
/*
 #if (PDL_DET_SCOPE == PDL_DET_SCOPE_ALL)
     #define PDL_DET_SCOPE_ADC        PDL_ON
     #define PDL_DET_SCOPE_CAN        PDL_ON
     #define PDL_DET_SCOPE_EEFLASH    PDL_ON
     #define PDL_DET_SCOPE_DMA        PDL_ON
     #define PDL_DET_SCOPE_EIC        PDL_ON
     #define PDL_DET_SCOPE_EICU       PDL_ON
     #define PDL_DET_SCOPE_FRT        PDL_ON
     #define PDL_DET_SCOPE_GPIO       PDL_ON
     #define PDL_DET_SCOPE_HSSPI      PDL_ON
     #define PDL_DET_SCOPE_ICU        PDL_ON
     #define PDL_DET_SCOPE_MEM        PDL_ON
     #define PDL_DET_SCOPE_OCU        PDL_ON
     #define PDL_DET_SCOPE_PPG        PDL_ON
     #define PDL_DET_SCOPE_PPU        PDL_ON
     #define PDL_DET_SCOPE_R4         PDL_ON
     #define PDL_DET_SCOPE_RLT        PDL_ON
     #define PDL_DET_SCOPE_SYSCTRL    PDL_ON
     #define PDL_DET_SCOPE_USART      PDL_ON
     #define PDL_DET_SCOPE_WDG        PDL_ON
 #elif (PDL_DET_SCOPE == PDL_DET_SCOPE_CUSTOM)
     #define PDL_DET_SCOPE_ADC        PDL_DET_SCOPE_CUSTOM_ADC
     #define PDL_DET_SCOPE_CAN        PDL_DET_SCOPE_CUSTOM_CAN
     #define PDL_DET_SCOPE_EEFLASH    PDL_DET_SCOPE_CUSTOM_EEFLASH
     #define PDL_DET_SCOPE_DMA        PDL_DET_SCOPE_CUSTOM_DMA
     #define PDL_DET_SCOPE_EIC        PDL_DET_SCOPE_CUSTOM_EIC
     #define PDL_DET_SCOPE_EICU       PDL_DET_SCOPE_CUSTOM_EICU
     #define PDL_DET_SCOPE_FRT        PDL_DET_SCOPE_CUSTOM_FRT
     #define PDL_DET_SCOPE_GPIO       PDL_DET_SCOPE_CUSTOM_GPIO
     #define PDL_DET_SCOPE_HSSPI      PDL_DET_SCOPE_CUSTOM_HSSPI
     #define PDL_DET_SCOPE_ICU        PDL_DET_SCOPE_CUSTOM_ICU
     #define PDL_DET_SCOPE_MEM        PDL_DET_SCOPE_CUSTOM_MEM
     #define PDL_DET_SCOPE_OCU        PDL_DET_SCOPE_CUSTOM_OCU
     #define PDL_DET_SCOPE_PPG        PDL_DET_SCOPE_CUSTOM_PPG
     #define PDL_DET_SCOPE_PPU        PDL_DET_SCOPE_CUSTOM_PPU
     #define PDL_DET_SCOPE_R4         PDL_DET_SCOPE_CUSTOM_R4
     #define PDL_DET_SCOPE_RLT        PDL_DET_SCOPE_CUSTOM_RLT
     #define PDL_DET_SCOPE_SYSCTRL    PDL_DET_SCOPE_CUSTOM_SYSCTRL
     #define PDL_DET_SCOPE_USART      PDL_DET_SCOPE_CUSTOM_USART
     #define PDL_DET_SCOPE_WDG        PDL_DET_SCOPE_CUSTOM_WDG
 #else
     #error PDL_DET_LEVEL is not defined!
 #endif
*/
/*@} / DetGroup */


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

#ifdef __cplusplus
}
#endif

#endif /* __PDL_INTERN_H__ */
/*****************************************************************************/
/* EOF (not truncated)                                                       */
/*****************************************************************************/
