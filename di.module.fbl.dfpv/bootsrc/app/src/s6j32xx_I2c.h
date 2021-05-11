/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2015. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/
/*****************************************************************************
*  File Name         :  s6j32xx_I2c.h                                        *
*  Module Short Name :  s6j32xx_I2c                                          *
*  Description       :  This file contains I2c Register Structures           *
*                       for S6J32xx series & S6J3120 microcontrollers.       *
*                                                                            *
* Organization     :  Driver Information Software Section,                   *
*                     Visteon Software Operation                             *
*                     Visteon Corporation                                    *
*                                                                            *
* ---------------------------------------------------------------------------*
* Compiler Name    :  GHS Multi                                              *
* Target Hardware  :  S6J32xx series & S6J120 micro based Hardware Platform  *
*                                                                            *
******************************************************************************/
#ifndef S6J32xx_I2C_H
#define S6J32xx_I2C_H

/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
//#include "Std_Types.h"
#include "s6j3200io_basetypes.h"

/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/

/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/

#define MSB_FIRST         0  /**< Big endian bit ordering        */
#define LSB_FIRST         1  /**< Little endian bit ordering     */
#define CPU_BIT_ORDER LSB_FIRST /** \brief LSB bit order */
/*****************************************************************************
*  GLOBAL DATA TYPES AND STRUCTURES
******************************************************************************/

    /* Define bit fields as type definitions for easier access
     * Bus Control Register (IBCR)
     * Serial Mode Register (SMR)
     * Bus Status Register (IBSR)
     * Serial Status Register (SSR)
     * Reception Data Register (RDR)
     * Transmission Data Register (TDR)
     * Serial Auxiliary Control Status Register (SACSR)
     * Serial Timer Register (STMR)
     * Serial Timer Comparison Register (STMCR)
     * Noise Filter Control Register (NFCR)
     * Extended I2C Bus Control Register (EIBCR)
     * 7-bit Slave Address Mask Register (ISMK)
     * 7-bit Slave Address Register (ISBA)
     * Baud Rate Generator Registers 1, 0 (BGR1, BGR0)
     * FIFO Control Register 1 (FCR1)
     * FIFO Control Register 0 (FCR0)
     * FIFO Byte Register (FBYTE)
     * Transmission FIFO Interrupt Control Register (FTICR)
     * Extended Control Register (ECR)
     * Transmission Block Size Register (TBSIZE)
     * I2C Bus Control Clear Register (IBCRC)
     * I2C Serial Mode Clear Register (SMRC)
     * I2C Bus Status Clear Register (IBSRC)
     * Serial Auxiliary Control Status Clear Register(SACSRC)
     * FIFO Control Clear Register 1 (FCR1C)
     * FIFO Control Clear Register 0 (FCR0C)
     * Extended Status Clear Register (ESRC)
     * I2C Bus Control Set Register (IBCRS)
     * Serial Mode Set Register (SMRS)
     * Serial Status Set Register (SSRS)
     * Serial Auxiliary Control Status Set Register (SACSRS)
     * FIFO Control Set Register 1 (FCR1S)
     * FIFO Control Set Register 0 (FCR0S)
     */

    /* Bus Control Register (IBCR)  15..8
     * Serial Mode Register (SMR)    7..0
     */
    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Mss:1;          /* MSS : Master/Slave selection bit, generates a start condition   */
        volatile uint_io8_t Scc:1;          /* ACT/SCC: Operation flag/Repeated start condition generation bit */
        volatile uint_io8_t Acke:1;         /* ACKE : Data byte acknowledgement enable bit     */
        volatile uint_io8_t Wsel:1;         /* Wait selection bit                              */
        volatile uint_io8_t Cnde:1;         /* CNDE : Condition detection interrupt enable bit */
        volatile uint_io8_t Inte:1;         /* INTE : Interrupt enable bit                     */
        volatile uint_io8_t Ber:1;          /* BER : Bus error flag bit                        */
        volatile uint_io8_t Int:1;          /* INT : Interrupt flag bit                        */
        #else
        volatile uint_io8_t Int:1;          /* INT : Interrupt flag bit                        */
        volatile uint_io8_t Ber:1;          /* BER : Bus error flag bit                        */
        volatile uint_io8_t Inte:1;         /* INTE : Interrupt enable bit                     */
        volatile uint_io8_t Cnde:1;         /* CNDE : Condition detection interrupt enable bit */
        volatile uint_io8_t Wsel:1;         /* Wait selection bit                              */
        volatile uint_io8_t Acke:1;         /* ACKE : Data byte acknowledgement enable bit     */
        volatile uint_io8_t Scc:1;          /* ACT/SCC: Operation flag/Repeated start condition generation bit */
        volatile uint_io8_t Mss:1;          /* MSS : Master/Slave selection bit                */
        #endif
    } I2c_IBCR_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_IBCR_t IBCR_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t IBCR_u8;
    } I2c_RegIbcrType;

    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Md:3;           /* MD2, MD1, MD0 : Operation mode setting bits */
        volatile uint_io8_t Wucr:1;         /* WUCR: WAKE UP control bit                   */
        volatile uint_io8_t Rie:1;          /* Reception interrupt enable bit              */
        volatile uint_io8_t Tie:1;          /* TIE: Transmission interrupt enable bit      */
        volatile uint_io8_t Res0:2;         /* reserved                                    */
        #else
        volatile uint_io8_t Res0:2;         /* reserved                                    */
        volatile uint_io8_t Tie:1;          /* TIE: Transmission interrupt enable bit      */
        volatile uint_io8_t Rie:1;          /* Reception interrupt enable bit              */
        volatile uint_io8_t Wucr:1;         /* WUCR: WAKE UP control bit                   */
        volatile uint_io8_t Md:3;           /* MD2, MD1, MD0 : Operation mode setting bits */
        #endif
    } I2c_SMR_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_SMR_t SMR_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t SMR_u8;
    } I2c_RegSmrType;

    /* Serial Status Register (SSR)  15..8
     * Bus Status Register (IBSR)     7..0
     */
    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Rec:1;          /* REC: Reception error flag clear bit            */
        volatile uint_io8_t Tset:1;         /* TSET: Transmission buffer empty flag set bit   */
        volatile uint_io8_t Dma:1;          /* DMA: DMA mode enable bit                       */
        volatile uint_io8_t Tbie:1;         /* TBIE : Transmission bus idle interrupt enable bit (DMA mode) */
        volatile uint_io8_t Ore:1;          /* ORE : Overrun error flag bit                   */
        volatile uint_io8_t Rdrf:1;         /* RDRF : Reception data full flag bit            */
        volatile uint_io8_t Tdre:1;         /* TDRE : Transmission data empty flag bit        */
        volatile uint_io8_t Tbi:1;          /* TBI: Transmission bus idle flag bit (DMA mode) */
        #else
        volatile uint_io8_t Tbi:1;          /* TBI: Transmission bus idle flag bit (DMA mode) */
        volatile uint_io8_t Tdre:1;         /* TDRE : Transmission data empty flag bit        */
        volatile uint_io8_t Rdrf:1;         /* RDRF : Reception data full flag bit            */
        volatile uint_io8_t Ore:1;          /* ORE : Overrun error flag bit                   */
        volatile uint_io8_t Tbie:1;         /* TBIE : Transmission bus idle interrupt enable bit (DMA mode) */
        volatile uint_io8_t Dma:1;          /* DMA: DMA mode enable bit                       */
        volatile uint_io8_t Tset:1;         /* TSET: Transmission buffer empty flag set bit   */
        volatile uint_io8_t Rec:1;          /* REC: Reception error flag clear bit            */
        #endif
    } I2c_SSR_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_SSR_t SSR_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t SSR_u8;
    } I2c_RegSsrType;

    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Fbt:1;         /* FBT : First byte bit                    */
        volatile uint_io8_t Rack:1;        /* RACK : Acknowledgement flag bit         */
        volatile uint_io8_t Rsa:1;         /* RSA : Reserved address detection bit    */
        volatile uint_io8_t Trx:1;         /* TRX : Data direction bit                */
        volatile uint_io8_t Al:1;          /* AL: Arbitration lost bit                */
        volatile uint_io8_t Rsc:1;         /* RSC: Repeated start condition check bit */
        volatile uint_io8_t Spc:1;         /* SPC: Stop condition check bit           */
        volatile uint_io8_t Bb:1;          /* BB : Bus status bit                     */
        #else
        volatile uint_io8_t Bb:1;          /* BB : Bus status bit                     */
        volatile uint_io8_t Spc:1;         /* SPC: Stop condition check bit           */
        volatile uint_io8_t Rsc:1;         /* RSC: Repeated start condition check bit */
        volatile uint_io8_t Al:1;          /* AL: Arbitration lost bit                */
        volatile uint_io8_t Trx:1;         /* TRX : Data direction bit                */
        volatile uint_io8_t Rsa:1;         /* RSA : Reserved address detection bit    */
        volatile uint_io8_t Rack:1;        /* RACK : Acknowledgement flag bit         */
        volatile uint_io8_t Fbt:1;         /* FBT : First byte bit                    */
        #endif
    } I2c_IBSR_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_IBSR_t IBSR_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t IBSR_u8;
    } I2c_RegIbsrType;

    /* Serial Auxiliary Control Status Register (SACSR) = 16 bit
     */
    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:5;         /* Reserved                           */
        volatile uint_io8_t Trg:2;          /* TRG1-0 : Trigger selection bits    */
        volatile uint_io8_t Tint:1;         /* TINT : Timer interrupt flag        */
        volatile uint_io8_t Tinte:1;        /* TINTE : Timer interrupt enable bit */
        volatile uint_io8_t Res1:1;         /* Reserved                           */
        volatile uint_io8_t Trge:1;         /* TRGE : External trigger enable bit */
        volatile uint_io8_t Tdiv:4;         /* TDIV3-0 : Timer operation clock division bits */
        volatile uint_io8_t Tmre:1;         /* TMRE : Serial timer enable bit     */
        #else
        volatile uint_io8_t Tmre:1;         /* TMRE : Serial timer enable bit     */
        volatile uint_io8_t Tdiv:4;         /* TDIV3-0 : Timer operation clock division bits */
        volatile uint_io8_t Trge:1;         /* TRGE : External trigger enable bit */
        volatile uint_io8_t Res1:1;         /* Reserved                           */
        volatile uint_io8_t Tinte:1;        /* TINTE : Timer interrupt enable bit */
        volatile uint_io8_t Tint:1;         /* TINT : Timer interrupt flag        */
        volatile uint_io8_t Trg:2;          /* TRG1-0 : Trigger selection bits    */
        volatile uint_io8_t Res0:5;         /* Reserved                           */
        #endif
    } I2c_SACSR_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_SACSR_t SACSR_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io16_t SACSR_u16;
    } I2c_RegSacsrType;

    /* Extended I2C Bus Control Register (EIBCR)  15..8
     * Noise Filter Control Register (NFCR)        7..0
     */
    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:3;         /* Reserved                                  */
        volatile uint_io8_t Trg:5;          /* NFT : Noise filter time selection bits    */
        #else
        volatile uint_io8_t Trg:5;          /* NFT : Noise filter time selection bits    */
        volatile uint_io8_t Res0:3;         /* Reserved                                  */
        #endif
    } I2c_NFCR_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_NFCR_t NFCR_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t NFCR_u8;
    }I2c_RegNfcrType;

    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:2;          /* Reserved                         */
        volatile uint_io8_t Sdas:1;          /* SDAS : SDA status bit            */
        volatile uint_io8_t Scls:1;          /* SCLS : SCL status bit            */
        volatile uint_io8_t Sdac:1;          /* SDAC : SDA output control bit    */
        volatile uint_io8_t Sclc:1;          /* SCLC : SCL output control bit    */
        volatile uint_io8_t Soce:1;          /* SOCE : Serial output enable bit  */
        volatile uint_io8_t Bec:1;           /* BEC : Bus error control bit      */
        #else
        volatile uint_io8_t Bec:1;           /* BEC : Bus error control bit      */
        volatile uint_io8_t Soce:1;          /* SOCE : Serial output enable bit  */
        volatile uint_io8_t Sclc:1;          /* SCLC : SCL output control bit    */
        volatile uint_io8_t Sdac:1;          /* SDAC : SDA output control bit    */
        volatile uint_io8_t Scls:1;          /* SCLS : SCL status bit            */
        volatile uint_io8_t Sdas:1;          /* SDAS : SDA status bit            */
        volatile uint_io8_t Res0:2;          /* Reserved                         */
        #endif
    } I2c_EIBCR_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_EIBCR_t EIBCR_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t EIBCR_u8;
    } I2c_RegEibcrType;

    /* 7-bit Slave Address Mask Register (ISMK) 15..8
     * 7-bit Slave Address Register (ISBA) 7..0
     */
    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t En:1;        /* EN : I2C interface operation enable bit */
        volatile uint_io8_t Sm:7;        /* SM6-0 : Slave address mask bits */
        #else
        volatile uint_io8_t Sm:7;        /* SM6-0 : Slave address mask bits */
        volatile uint_io8_t En:1;        /* EN : I2C interface operation enable bit */
        #endif
    } I2c_ISMK_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_ISMK_t ISMK_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t ISMK_u8;
    } I2c_RegIsmkType;

    typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Saen:1;      /* EN : I2C interface operation enable bit */
        volatile uint_io8_t Sa:7;        /*  SA6-0 : 7-bit slave address  */
        #else
        volatile uint_io8_t Sa:7;        /* EN : I2C interface operation enable bit */
        volatile uint_io8_t Saen:1;       /*  SA6-0 : 7-bit slave address  */
        #endif
    } I2c_ISBA_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_ISBA_t ISBA_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t ISBA_u8;
    } I2c_RegIsbaType;

    /* FIFO Control Register 1 (FCR1) 15..8
     * FIFO Control Register 0 (FCR0) 7..0
     */
    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:3;      /* Reserved */
        volatile uint_io8_t Flste:1;     /* FLSTE : Retransmission data lost detection enable bit */
        volatile uint_io8_t Friie:1;     /* FRIIE : Reception FIFO idle detection enable bit */
        volatile uint_io8_t Fdrq:1;      /* FDRQ : Transmission FIFO data request bit */
        volatile uint_io8_t Ftie:1;      /* FTIE : Transmission FIFO interrupt enable bit */
        volatile uint_io8_t Fsel:1;      /* FSEL : FIFO selection bit */
        #else
        volatile uint_io8_t Fsel:1;      /* FSEL : FIFO selection bit */
        volatile uint_io8_t Ftie:1;      /* FTIE : Transmission FIFO interrupt enable bit */
        volatile uint_io8_t Fdrq:1;      /* FDRQ : Transmission FIFO data request bit */
        volatile uint_io8_t Friie:1;     /* FRIIE : Reception FIFO idle detection enable bit */
        volatile uint_io8_t Flste:1;     /* FLSTE : Retransmission data lost detection enable bit */
        volatile uint_io8_t Res0:3;      /* Reserved */
        #endif
    } I2c_FCR1_t;

    typedef union
    {      /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_FCR1_t FCR1_t;  /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t FCR1_u8;
    } I2c_RegFcr1Type;

    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:1;      /* Reserved */
        volatile uint_io8_t Flst:1;      /* FLST : FIFO retransmission data lost flag bit */
        volatile uint_io8_t Fld:1;       /* FLD : FIFO pointer reload bit */
        volatile uint_io8_t Fset:1;      /* FSET : FIFO pointer saving bit */
        volatile uint_io8_t Fcl2:1;      /* FCL2 : FIFO2 reset bit */
        volatile uint_io8_t Fcl1:1;      /* FCL1 : FIFO1 reset bit */
        volatile uint_io8_t Fe2:1;       /* FE2 : FIFO2 operation enable bit */
        volatile uint_io8_t Fe1:1;       /* FE1 : FIFO1 operation enable bit */
        #else
        volatile uint_io8_t Fe1:1;       /* FE1 : FIFO1 operation enable bit */
        volatile uint_io8_t Fe2:1;       /* FE2 : FIFO2 operation enable bit */
        volatile uint_io8_t Fcl1:1;      /* FCL1 : FIFO1 reset bit */
        volatile uint_io8_t Fcl2:1;      /* FCL2 : FIFO2 reset bit */
        volatile uint_io8_t Fset:1;      /* FSET : FIFO pointer saving bit */
        volatile uint_io8_t Fld:1;       /* FLD : FIFO pointer reload bit */
        volatile uint_io8_t Flst:1;      /* FLST : FIFO retransmission data lost flag bit */
        volatile uint_io8_t Res0:1;      /* Reserved */
        #endif
    } I2c_FCR0_t;

    typedef union
    {      /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_FCR0_t FCR0_t;  /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t FCR0_u8;
    } I2c_RegFcr0Type;

    /* Extended Status Register (ESR) 15..8
     * Extended Control Register (ECR) 7..0
     */
    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:4;      /* Reserved */
        volatile uint_io8_t Rxudr:1;     /* RXUDR : Reception FIFO under run flag bit */
        volatile uint_io8_t Txovr:1;     /* TXOVR : Transmission FIFO overrun flag bit */
        volatile uint_io8_t Rberr:1;     /* RBERR : Reception block transfer error bit */
        volatile uint_io8_t Tberr:1;     /* TBERR : Transmission block transfer error bit */
        #else
        volatile uint_io8_t Tberr:1;     /* TBERR : Transmission block transfer error bit */
        volatile uint_io8_t Rberr:1;     /* RBERR : Reception block transfer error bit */
        volatile uint_io8_t Txovr:1;     /* TXOVR : Transmission FIFO overrun flag bit */
        volatile uint_io8_t Rxudr:1;     /* RXUDR : Reception FIFO under run flag bit */
        volatile uint_io8_t Res0:4;      /* Reserved */
        #endif
    } I2c_ESR_t;

    typedef union
    {       /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_ESR_t ESR_t;    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t ESR_u8;
    } I2c_RegEsrType;

    typedef struct       /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:3;      /* Reserved */
        volatile uint_io8_t Eisel:1;     /* EISEL : Error interrupt request output selection bit */
        volatile uint_io8_t Reie:1;      /* REIE : Reception error interrupt enable bit */
        volatile uint_io8_t Teie:1;      /* TEIE : Transmission error interrupt enable bit */
        volatile uint_io8_t Rxblken:1;   /* RXBLKEN : Reception block transfer setting bit */
        volatile uint_io8_t Txblken:1;   /* TXBLKEN : Transmission block transfer setting bit */
        #else
        volatile uint_io8_t Txblken:1;   /* TXBLKEN : Transmission block transfer setting bit */
        volatile uint_io8_t Rxblken:1;   /* RXBLKEN : Reception block transfer setting bit */
        volatile uint_io8_t Teie:1;      /* TEIE : Transmission error interrupt enable bit */
        volatile uint_io8_t Reie:1;      /* REIE : Reception error interrupt enable bit */
        volatile uint_io8_t Eisel:1;     /* EISEL : Error interrupt request output selection bit */
        volatile uint_io8_t Res0:3;      /* Reserved */
        #endif
    } I2c_ECR_t;

    typedef union
    {       /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_ECR_t ECR_t;    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t ECR_u8;
    } I2c_RegEcrType;

    /* -------------------------------------------------------
     *
     * Register structures for clearing values from registers
     *
     * -------------------------------------------------------
     */

    /* I2C Bus Control Clear Register (IBCRC) 15..8
     * Serial Mode Clear Register (SMRC) 7..0
     */
    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Mssc:1;      /* MSSC : Clearing the master/slave selection bit */
        volatile uint_io8_t Res0:1;      /* Reserved */
        volatile uint_io8_t Ackec:1;     /* ACKEC : Clearing the data byte acknowledgment enable bit */
        volatile uint_io8_t Wselc:1;     /* WSELC : Clearing the wait selection bit */
        volatile uint_io8_t Cndec:1;     /* CNDEC : Clearing the condition detection interrupt enable bit */
        volatile uint_io8_t Intec:1;     /* INTEC : Clearing the interrupt enable bit */
        volatile uint_io8_t Res1:1;      /* Reserved */
        volatile uint_io8_t Intc:1;      /* INTC : Clearing the interrupt flag */
        #else
        volatile uint_io8_t Intc:1;      /* INTC : Clearing the interrupt flag */
        volatile uint_io8_t Res1:1;      /* Reserved */
        volatile uint_io8_t Intec:1;     /* INTEC : Clearing the interrupt enable bit */
        volatile uint_io8_t Cndec:1;     /* CNDEC : Clearing the condition detection interrupt enable bit */
        volatile uint_io8_t Wselc:1;     /* WSELC : Clearing the wait selection bit */
        volatile uint_io8_t Ackec:1;     /* ACKEC : Clearing the data byte acknowledgment enable bit */
        volatile uint_io8_t Res0:1;      /* Reserved */
        volatile uint_io8_t Mssc:1;      /* MSSC : Clearing the master/slave selection bit */
        #endif
    } I2c_IBCRC_t;

    typedef union
    {   /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_IBCRC_t IBCRC_t;    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t IBCRC_u8;
    } I2c_RegIbcrcType;

    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:3;      /* Reserved */
        volatile uint_io8_t Wucrc:1;     /* WUCRC : Clearing the WAKE UP control bit  */
        volatile uint_io8_t Riec:1;      /* RIEC : Clearing the reception interrupt enable bit */
        volatile uint_io8_t Tiec:1;      /* TIEC : Clearing the transmission interrupt enable bit */
        volatile uint_io8_t Res1:2;      /* Reserved */
        #else
        volatile uint_io8_t Res1:2;      /* Reserved */
        volatile uint_io8_t Tiec:1;      /* TIEC : Clearing the transmission interrupt enable bit */
        volatile uint_io8_t Riec:1;      /* RIEC : Clearing the reception interrupt enable bit */
        volatile uint_io8_t Wucrc:1;     /* WUCRC : Clearing the WAKE UP control bit  */
        volatile uint_io8_t Res0:3;      /* Reserved */
        #endif
    } I2c_SMRC_t;

    typedef union
    {   /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_SMRC_t SMRC_t;      /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t SMRC_u8;
    } I2c_RegSmrcType;

    typedef struct     /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:2;      /* Reserved */
        volatile uint_io8_t Dmac:1;      /* DMAC : Clearing the DMA mode enable bit */
        volatile uint_io8_t Tbiec:1;     /* TBIEC : Clearing the transmission bus idle interrupt enable bit (valid only when DMA mode is enabled) */
        volatile uint_io8_t Res1:4;      /* Reserved */
        #else
        volatile uint_io8_t Res1:4;      /* Reserved */
        volatile uint_io8_t Tbiec:1;     /* TBIEC : Clearing the transmission bus idle interrupt enable bit (valid only when DMA mode is enabled) */
        volatile uint_io8_t Dmac:1;      /* DMAC : Clearing the DMA mode enable bit */
        volatile uint_io8_t Res0:2;      /* Reserved */
        #endif
    } I2c_SSRC_t;

    typedef union
    {   /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_SSRC_t SSRC_t;      /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t SSRC_u8;
    } I2c_RegSsrcType;

    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:5;      /* Reserved */
        volatile uint_io8_t Rscc:1;      /* RSCC : Clearing the repeated start condition check bit */
        volatile uint_io8_t Spcc:1;      /* SPCC : Clearing the stop condition check bit */
        volatile uint_io8_t Res1:1;      /* Reserved */
        #else
        volatile uint_io8_t Res1:1;      /* Reserved */
        volatile uint_io8_t Spcc:1;      /* SPCC : Clearing the stop condition check bit */
        volatile uint_io8_t Rscc:1;      /* RSCC : Clearing the repeated start condition check bit */
        volatile uint_io8_t Res0:5;      /* Reserved */
        #endif
    } I2c_IBSRC_t;

    typedef union
    {   /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_IBSRC_t IBSRC_t;    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t IBSRC_u8;
    } I2c_RegIbsrcType;

    /* Serial Auxiliary Control Status Clear Register(SACSRC)
     */
    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:7;      /* Reserved */
        volatile uint_io8_t Tintc:1;     /* TINTC : Clearing the timer interrupt flag */
        volatile uint_io8_t Tintec:1;    /* TINTEC : Clearing the timer interrupt enable bit */
        volatile uint_io8_t Res1:1;      /* Reserved */
        volatile uint_io8_t Trgec:1;     /* TRGEC : Clearing the external trigger enable bit */
        volatile uint_io8_t Res2:4;      /* Reserved */
        volatile uint_io8_t Tmrec:1;     /* TMREC : Clearing the serial timer enable bit */
        #else
        volatile uint_io8_t Tmrec:1;     /* TMREC : Clearing the serial timer enable bit */
        volatile uint_io8_t Res2:4;      /* Reserved */
        volatile uint_io8_t Trgec:1;     /* TRGEC : Clearing the external trigger enable bit */
        volatile uint_io8_t Res1:1;      /* Reserved */
        volatile uint_io8_t Tintec:1;    /* TINTEC : Clearing the timer interrupt enable bit */
        volatile uint_io8_t Tintc:1;     /* TINTC : Clearing the timer interrupt flag */
        volatile uint_io8_t Res0:7;      /* Reserved */
        #endif
    } I2c_SACSRC_t;

    typedef union
    {    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_SACSRC_t SACSRC_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io16_t SACSRC_u16;
    } I2c_RegSacsrcType;

    /* FIFO Control Clear Register 1 (FCR1C) 15..8
     * FIFO Control Clear Register 0 (FCR0C) 7..0
     */
    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:3;      /* Reserved */
        volatile uint_io8_t Flstec:1;    /* FLSTEC : Clearing the retransmission data lost detection enable bit */
        volatile uint_io8_t Friiec:1;    /* FRIIEC : Clearing the reception FIFO idle detection enable bit */
        volatile uint_io8_t Fdrqc:1;     /* FDRQC : Clearing the transmission FIFO data request bit */
        volatile uint_io8_t Ftiec:1;     /* FTIEC : Clearing the transmission FIFO interrupt enable bit */
        volatile uint_io8_t Fselc:1;     /* FSELC : Clearing the FIFO selection bit */
        #else
        volatile uint_io8_t Fselc:1;     /* FSELC : Clearing the FIFO selection bit */
        volatile uint_io8_t Ftiec:1;     /* FTIEC : Clearing the transmission FIFO interrupt enable bit */
        volatile uint_io8_t Fdrqc:1;     /* FDRQC : Clearing the transmission FIFO data request bit */
        volatile uint_io8_t Friiec:1;    /* FRIIEC : Clearing the reception FIFO idle detection enable bit */
        volatile uint_io8_t Flstec:1;    /* FLSTEC : Clearing the retransmission data lost detection enable bit */
        volatile uint_io8_t Res0:3;      /* Reserved */
        #endif
    } I2c_FCR1C_t;

    typedef union
    {       /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_FCR1C_t FCR1C_t;    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t FCR1C_u8;
    } I2c_RegFcr1cType;

    typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
    {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:6;      /* Reserved */
        volatile uint_io8_t Fe2c:1;      /* FE2C : Clearing the FIFO2 operation enable bit */
        volatile uint_io8_t Fe1c:1;      /* FE1C : Clearing the FIFO1 operation enable bit */
        #else
        volatile uint_io8_t Fe1c:1;      /* FE1C : Clearing the FIFO1 operation enable bit */
        volatile uint_io8_t Fe2c:1;      /* FE2C : Clearing the FIFO2 operation enable bit */
        volatile uint_io8_t Res0:6;      /* Reserved */
        #endif
    } I2c_FCR0C_t;

    typedef union
    {       /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile I2c_FCR0C_t FCR0C_t;    /* PRQA S 0750 */ /* MD_I2c_0750 */
        volatile uint_io8_t FCR0C_u8;
    } I2c_RegFcr0cType;

    /* Extended Status Clear Register (ESRC)
     */
      typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
      {
        #if (CPU_BIT_ORDER == MSB_FIRST)
        volatile uint_io8_t Res0:4;      /* Reserved */
        volatile uint_io8_t Rxudrc:1;    /* RXUDRC : Reception FIFO under run flag clear bit  */
        volatile uint_io8_t Txovrc:1;    /* TXOVRC : Transmission FIFO overrun flag clear bit */
        volatile uint_io8_t Rberrc:1;    /* RBERRC : Reception block transfer error clear bit */
        volatile uint_io8_t Tberrc:1;    /* TBERRC : Transmission block transfer error clear bit */
        #else
        volatile uint_io8_t Tberrc:1;    /* TBERRC : Transmission block transfer error clear bit */
        volatile uint_io8_t Rberrc:1;    /* RBERRC : Reception block transfer error clear bit */
        volatile uint_io8_t Txovrc:1;    /* TXOVRC : Transmission FIFO overrun flag clear bit */
        volatile uint_io8_t Rxudrc:1;    /* RXUDRC : Reception FIFO under run flag clear bit */
        volatile uint_io8_t Res0:4;      /* Reserved */
        #endif
      } I2c_ESRC_t;

      typedef union
      {   /* PRQA S 0750 */ /* MD_I2c_0750 */
          volatile I2c_ESRC_t ESRC_t;  /* PRQA S 0750 */ /* MD_I2c_0750 */
          volatile uint_io8_t ESRC_u8;
      } I2c_RegEsrcType;

      /* -------------------------------------------------------
       *
       * Register structures for setting values to registers
       *
       * -------------------------------------------------------
       */
        typedef struct    /* PRQA S 0635 */ /* MD_I2c_0635 */
        {
          #if (CPU_BIT_ORDER == MSB_FIRST)
          volatile uint_io8_t Msss:1;     /* MSSS : Setting the master/slave selection bit  */
          volatile uint_io8_t Sccs:1;     /* SCCS : Setting the repeated start condition generation bit   */
          volatile uint_io8_t Ackes:1;    /* ACKES : Setting the data byte acknowledgment enable bit  */
          volatile uint_io8_t Wsels:1;    /* WSELS : Setting the wait selection bit  */
          volatile uint_io8_t Cndes:1;    /* CNDES : Setting the condition detection interrupt enable bit  */
          volatile uint_io8_t Intes:1;    /* INTES : Setting the interrupt enable bit */
          volatile uint_io8_t Res0:1;     /* Reserved */
          volatile uint_io8_t Ints:1;     /* INTS : Setting the interrupt flag */
          #else
          volatile uint_io8_t Ints:1;     /* INTS : Setting the interrupt flag */
          volatile uint_io8_t Res0:1;     /* Reserved */
          volatile uint_io8_t Intes:1;    /* INTES : Setting the interrupt enable bit */
          volatile uint_io8_t Cndes:1;    /* CNDES : Setting the condition detection interrupt enable bit  */
          volatile uint_io8_t Wsels:1;    /* WSELS : Setting the wait selection bit  */
          volatile uint_io8_t Ackes:1;    /* ACKES : Setting the data byte acknowledgment enable bit  */
          volatile uint_io8_t Sccs:1;     /* SCCS : Setting the repeated start condition generation bit   */
          volatile uint_io8_t Msss:1;     /* MSSS : Setting the master/slave selection bit  */
          #endif
        } I2c_IBCRS_t;

        typedef union
        {   /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile I2c_IBCRS_t IBCRS_t;    /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile uint_io8_t IBCRS_u8;
        } I2c_RegIbcrsType;

        typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
        {
            #if (CPU_BIT_ORDER == MSB_FIRST)
            volatile uint_io8_t Res0:3;      /* Reserved */
            volatile uint_io8_t Wucrs:1;     /* WUCRS : Setting the WAKE UP control bit */
            volatile uint_io8_t Ries:1;      /* RIES : Setting the reception interrupt enable bit */
            volatile uint_io8_t Ties:1;      /* TIES : Setting the transmission interrupt enable bit */
            volatile uint_io8_t Res1:2;      /* Reserved */
            #else
            volatile uint_io8_t Res1:2;      /* Reserved */
            volatile uint_io8_t Ties:1;      /* TIES : Setting the transmission interrupt enable bit */
            volatile uint_io8_t Ries:1;      /* RIES : Setting the reception interrupt enable bit */
            volatile uint_io8_t Wucrs:1;     /* WUCRS : Setting the WAKE UP control bit */
            volatile uint_io8_t Res0:3;      /* Reserved */
            #endif
        } I2c_SMRS_t;

        typedef union
        {   /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile I2c_SMRS_t SMRS_t;  /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile uint_io8_t SMRS_u8;
        } I2c_RegSmrsType;

        /* Serial Status Set Register (SSRS)
         */
        typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
        {
            #if (CPU_BIT_ORDER == MSB_FIRST)
            volatile uint_io8_t Recs:1;  /* RECS : Setting the reception error flag clear bit */
            volatile uint_io8_t Tsets:1; /* TSETS : Setting the transmission buffer empty flag set bit */
            volatile uint_io8_t Dmas:1;  /* DMAS : Setting the DMA mode enable bit */
            volatile uint_io8_t Tbies:1; /* TBIES : Setting the transmission bus idle interrupt enable bit (valid only when DMA mode is enabled) */
            volatile uint_io8_t Res0:4;  /* Reserved */
            #else
            volatile uint_io8_t Res0:4;  /* Reserved */
            volatile uint_io8_t Tbies:1; /* TBIES : Setting the transmission bus idle interrupt enable bit (valid only when DMA mode is enabled) */
            volatile uint_io8_t Dmas:1;  /* DMAS : Setting the DMA mode enable bit */
            volatile uint_io8_t Tsets:1; /* TSETS : Setting the transmission buffer empty flag set bit */
            volatile uint_io8_t Recs:1;  /* RECS : Setting the reception error flag clear bit */
            #endif
        } I2c_SSRS_t;

        typedef union
        {   /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile I2c_SSRS_t SSRS_t;  /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile uint_io8_t SSRS_u8;
        } I2c_RegSsrsType;

        /* Serial Auxiliary Control Status Set Register (SACSRS)
         */

        typedef struct      /* PRQA S 0635 */ /* MD_I2c_0635 */
        {
            #if (CPU_BIT_ORDER == MSB_FIRST)
            volatile uint_io8_t Res0:8;      /* Reserved */
            volatile uint_io8_t Tintes:1;    /* TINTES : Setting the timer interrupt enable bit */
            volatile uint_io8_t Res1:1;      /* Reserved */
            volatile uint_io8_t Trges:1;     /* TRGES : Setting the external trigger enable bit */
            volatile uint_io8_t Res2:4;      /* Reserved */
            volatile uint_io8_t Tmres:1;     /* TMRES : Setting the serial timer enable bit */
            #else
            volatile uint_io8_t Tmres:1;    /* TMRES : Setting the serial timer enable bit */
            volatile uint_io8_t Res2:4;      /* Reserved */
            volatile uint_io8_t Trges:1;     /* TRGES : Setting the external trigger enable bit */
            volatile uint_io8_t Res1:1;      /* Reserved */
            volatile uint_io8_t Tintes:1;    /* TINTES : Setting the timer interrupt enable bit */
            volatile uint_io8_t Res0:8;      /* Reserved */
            #endif
        } I2c_SACSRS_t;

        typedef union
        {    /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile I2c_SACSRS_t SACSRS_t; /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile uint_io16_t SACSRS_u16;
        } I2c_RegSacsrsType;

        /* FIFO Control Set Register 1 (FCR1S)     15..8
         * FIFO Control Set Register 0 (FCR0S)      7..0
         */

        typedef struct     /* PRQA S 0635 */ /* MD_I2c_0635 */
        {
            #if (CPU_BIT_ORDER == MSB_FIRST)
            volatile uint_io8_t Res0:3;      /* Reserved */
            volatile uint_io8_t Flstes:1;    /* FLSTES : Setting the retransmission data lost detection enable bit */
            volatile uint_io8_t Friees:1;    /* FRIIES : Setting the reception FIFO idle detection enable bit */
            volatile uint_io8_t Res1:1;      /* Reserved */
            volatile uint_io8_t Fties:1;     /* FTIES : Setting the transmission FIFO interrupt enable bit */
            volatile uint_io8_t Fsels:1;     /* FSELS : Setting the FIFO selection bit */
            #else
            volatile uint_io8_t Fsels:1;     /* FSELS : Setting the FIFO selection bit */
            volatile uint_io8_t Fties:1;     /* FTIES : Setting the transmission FIFO interrupt enable bit */
            volatile uint_io8_t Res1:1;      /* Reserved */
            volatile uint_io8_t Friees:1;    /* FRIIES : Setting the reception FIFO idle detection enable bit */
            volatile uint_io8_t Flstes:1;    /* FLSTES : Setting the retransmission data lost detection enable bit */
            volatile uint_io8_t Res0:3;      /* Reserved */
            #endif
        } I2c_FCR1S_t;

        typedef union
        {      /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile I2c_FCR1S_t FCR1S_t;  /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile uint_io8_t FCR1S_u8;
        } I2c_RegFcr1SType;

        typedef struct     /* PRQA S 0635 */ /* MD_I2c_0635 */
        {
            #if (CPU_BIT_ORDER == MSB_FIRST)
            volatile uint_io8_t Res0:2;        /* Reserved */
            volatile uint_io8_t Flds:1;        /* FLDS : Setting the FIFO pointer reload bit  */
            volatile uint_io8_t Fsets:1;       /* FSETS : Setting the FIFO pointer saving bit  */
            volatile uint_io8_t Fcl2s:1;       /* FCL2S : Setting the FIFO2 reset bit  */
            volatile uint_io8_t Fcl1s:1;       /* FCL1S : Setting the FIFO1 reset bit  */
            volatile uint_io8_t Fe2s:1;        /* FE2S : Setting the FIFO2 operation enable bit  */
            volatile uint_io8_t Fe1s:1;        /* FE1S : Setting the FIFO1 operation enable bit */
            #else
            volatile uint_io8_t Fe1s:1;        /* FE1S : Setting the FIFO1 operation enable bit */
            volatile uint_io8_t Fe2s:1;        /* FE2S : Setting the FIFO2 operation enable bit */
            volatile uint_io8_t Fcl1s:1;       /* FCL1S : Setting the FIFO1 reset bit  */
            volatile uint_io8_t Fcl2s:1;       /* FCL2S : Setting the FIFO2 reset bit  */
            volatile uint_io8_t Fsets:1;       /* FSETS : Setting the FIFO pointer saving bit  */
            volatile uint_io8_t Flds:1;        /* FLDS : Setting the FIFO pointer reload bit  */
            volatile uint_io8_t Res0:2;        /* Reserved */
            #endif
        } I2c_FCR0S_t;

        typedef union
        {      /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile I2c_FCR0S_t FCR1_t;  /* PRQA S 0750 */ /* MD_I2c_0750 */
            volatile uint_io8_t FCR0S_u8;
        } I2c_RegFcr0SType;

    /* Abstraction between standard registers and specialized SET/ CLEAR registers. */
    typedef struct
    {
        volatile I2c_RegSmrType   RegSmr;         /* Offset: 0x00 Serial Mode Register (SMR)        7..0 */
        volatile I2c_RegIbcrType  RegIbcr;        /* Offset: 0x01 Bus Control Register (IBCR)      15..8 */
        volatile I2c_RegIbsrType  RegIbsr;        /* Offset: 0x02 Bus Status Register (IBSR)        7..0 */
        volatile I2c_RegSsrType   RegSsr;         /* Offset: 0x03 Serial Status Register (SSR)     15..8 */
        volatile uint_io8_t            RegDr;          /* Offset: 0x04 Data Register (RDR/TDR)           7..0 */
        volatile uint_io8_t            Res0[3];        /* Offset: 0x05 - 0x7 reserved                         */
        volatile I2c_RegSacsrType RegSacsr;       /* Offset: 0x08 Serial Auxiliary Control Status Register (SACSR) */
        volatile uint_io16_t           RegStmr;        /* Offset: 0x0A Serial Timer Register (STMR)                     */
        volatile uint_io16_t           RegStmcr;       /* Offset: 0x0C Serial Timer Comparison Register (STMCR)  */
        volatile uint_io16_t           Res1;           /* Offset: 0x0E - 0x0F reserved                                  */
        volatile I2c_RegNfcrType  RegNfcr;        /* Offset: 0x10 Noise Filter Control Register (NFCR)        7..0 */
        volatile I2c_RegEibcrType RegEibcr;       /* Offset: 0x11 Extended I2C Bus Control Register (EIBCR   15..8 */
        volatile uint_io16_t           Res2[5];        /* Offset: 0x12 - 0x1B reserved                                  */
        volatile uint_io16_t           RegBgr1Brg0;    /* Offset: 0x1C Baud Rate Generator Registers 1, 0 (BGR1, BGR0)  */
        volatile I2c_RegIsbaType  RegIsba;        /* Offset: 0x1E 7-bit Slave Address Register (ISBA)         7..0 */
        volatile I2c_RegIsmkType  RegIsmk;        /* Offset: 0x1F 7-bit Slave Address Mask Register (ISMK)   15..8 */
        volatile I2c_RegFcr0Type  RegFcr0;        /* Offset: 0x20 FIFO Control Register 0 (FCR0)              7..0 */
        volatile I2c_RegFcr1Type  RegFcr1;        /* Offset: 0x21 FIFO Control Register 1 (FCR1)             15..8 */
        volatile uint_io8_t            FBYTE1_u8;      /* Offset: 0x22 FIFO Byte Register (FBYTE1)                      */
        volatile uint_io8_t            FBYTE2_u8;      /* Offset: 0x23 FIFO Byte Register (FBYTE2)                      */
        volatile uint_io8_t            FTICR1_u8;      /* Offset: 0x24 Transmission FIFO Interrupt Control Register (FTICR1) */
        volatile uint_io8_t            FTICR2_u8;      /* Offset: 0x25 Transmission FIFO Interrupt Control Register (FTICR2) */
        volatile I2c_RegEcrType   RegEcr;         /* Offset: 0x26 Extended Control Register (ESR1)  7..0           */
        volatile I2c_RegEsrType   RegEsr;         /* Offset: 0x27 Extended Status Register (ESR2) 15..8            */
        uint_io8_t                     Tbsize;         /* Offset: 0x28 Transmission Block Size Register (TBSIZE)        */
        uint_io8_t                     Res3[3];        /* Offset: 0x29 - 0x2B reserved                                  */
        /* From here come the CLR 0x2C - 0x44 registers */
        /* From here come the SET 0x44 - 0x58 registers */
    } I2c_RegisterStd;

    typedef struct
    {   /* Register structure for clearing the bits. */
        volatile I2c_RegSmrcType  RegSmrC;        /* Offset: 0x2C Serial Mode Register (SMR)        7..0 */
        volatile I2c_RegIbcrcType RegIbcrC;       /* Offset: 0x2D Bus Control Register (IBCR)      15..8 */
        volatile I2c_RegIbsrcType RegIbsrC;       /* Offset: 0x2E Bus Status Register (IBSR)        7..0 */
        volatile I2c_RegSsrcType  RegSsrC;        /* Offset: 0x2F Serial Status Register (SSR)     15..8 */
        volatile I2c_RegSacsrcType RegSacsrC;     /* Offset: 0x30 Serial Auxiliary Control Status Register (SACSR) */
        volatile uint_io16_t           Res0[5];        /* Offset: 0x32 - 0x3B reserved                                  */
        volatile I2c_RegFcr0cType RegFcr0C;       /* Offset: 0x3C FIFO Control Register 0 (FCR0)              7..0 */
        volatile I2c_RegFcr1cType RegFcr1C;       /* Offset: 0x3D FIFO Control Register 1 (FCR1)             15..8 */
        volatile uint_io8_t            Res1[5];        /* Offset: 0x3E - 0x42 reserved                                  */
        volatile I2c_RegEsrcType  RegEsr2C;       /* Offset: 0x43 Extended Status Register (ESR2) 15..8            */
    } I2c_RegisterClr;

    typedef struct
    {   /* Register structure for setting the bits. */
        volatile I2c_RegSmrsType   RegSmrS;        /* Offset: 0x44 Serial Mode Register (SMR)        7..0 */
        volatile I2c_RegIbcrsType  RegIbcrS;       /* Offset: 0x45 Bus Control Register (IBCR)      15..8 */
        volatile uint_io8_t             Res0;           /* Offset: 0x46 Bus Status Register (IBSR)        7..0 */
        volatile I2c_RegSsrsType   RegSsrS;        /* Offset: 0x47 Serial Status Register (SSR)     15..8 */
        volatile I2c_RegSacsrsType RegSacsrS;      /* Offset: 0x48 Serial Auxiliary Control Status Register (SACSR) */
        volatile uint_io16_t            Res1[5];        /* Offset: 0x4A -0x53 reserved                                   */
        volatile I2c_RegFcr0SType  RegFcr0S;       /* Offset: 0x54 FIFO Control Register 0 (FCR0)              7..0 */
        volatile I2c_RegFcr1SType  RegFcr1S;       /* Offset: 0x55 FIFO Control Register 1 (FCR1)             15..8 */
        volatile uint_io16_t            Res2[1];        /* Offset: 0x56 - 0x57 reserved                                  */
    } I2c_RegisterSet;


    typedef struct
    {
        I2c_RegisterStd Std;      /* Offset: 0x00 Register for reading bits  */
        I2c_RegisterClr Clr;      /* Offset: 0x2C Register for clearing bits */
        I2c_RegisterSet Set;      /* Offset: 0x44 Register for setting bits  */
    } I2c_RegisterType;

/* definition of register pointer */
typedef I2c_RegisterType* I2c_RegisterPtrType;

typedef struct
{
    I2c_RegisterPtrType     BaseAddress;
}I2c_ConfigType;

/*****************************************************************************
*                                Globally  accessed Variable Declarations    *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

/*****************************************************************************
*                                 Locally used Variable Declarations         *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

/*****************************************************************************
*                               Functions                                    *
******************************************************************************/

#endif
/*============================================================================
**============================================================================
** R E V I S I O N    N O T E S
**============================================================================
**
** For each change to this file, be sure to record:
** 1.  Who made the change and when the change was made.
** 2.  Why the change was made and the intended result.
**
**===========================================================================*/
/*---------------------------------------------------------------------------
Date               : 16-Nov-2015
CDSID              : ssebast1
Traceability       : RTC #453910
Change Description : Initial Framework version of I2c
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date               : 29-Jan-2016
CDSID              : ssebast1
Traceability       : RTC #402180
Change Description : I2c Write, Read and Error Handling Implementation
-----------------------------------------------------------------------------*/
/* end of file =============================================================*/


