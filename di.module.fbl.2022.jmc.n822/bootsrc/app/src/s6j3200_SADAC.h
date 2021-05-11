/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SADAC_H
#define __S6J3200_SADAC_H

#include "s6j3200io_basetypes.h"

/* SADAC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SADAC	stcSADAC
#else /* __IO_DEFINE */
#define SADAC	(*((volatile stc_sadac_t*)0xB8020400))
#endif /* __IO_DEFINE */

/* DAOSR */
#define SADAC_DAOSR	(SADAC.unDAOSR.u32Register)  /*@rg@*/
#define SADAC_DAOSR_OSR	(SADAC.unDAOSR.stcField.u2OSR)  /*@bf@*/
#define SADAC_DAOSR_DACCLK	(SADAC.unDAOSR.stcField.u3DACCLK)  /*@bf@*/

typedef struct stc_sadac_daosr_field{
    uint_io32_t		u2OSR:2;
    uint_io32_t		:2;
    uint_io32_t		u3DACCLK:3;
    uint_io32_t		:25;
}stc_sadac_daosr_field_t;

typedef union un_sadac_daosr{
    uint_io32_t		u32Register;
    stc_sadac_daosr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_daosr_t;

/* DACR */
#define SADAC_DACR	(SADAC.unDACR.u32Register)  /*@rg@*/
#define SADAC_DACR_DAE	(SADAC.unDACR.stcField.u1DAE)  /*@bf@*/
#define SADAC_DACR_INIT	(SADAC.unDACR.stcField.u1INIT)  /*@bf@*/

typedef struct stc_sadac_dacr_field{
    uint_io32_t		u1DAE:1;
    uint_io32_t		:7;
    uint_io32_t		u1INIT:1;
    uint_io32_t		:23;
}stc_sadac_dacr_field_t;

typedef union un_sadac_dacr{
    uint_io32_t		u32Register;
    stc_sadac_dacr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_dacr_t;

/* DABUSY */
#define SADAC_DABUSY	(SADAC.unDABUSY.u32Register)  /*@rg@*/
#define SADAC_DABUSY_DABUSY	(SADAC.unDABUSY.stcField.u1DABUSY)  /*@bf@*/

typedef struct stc_sadac_dabusy_field{
    uint_io32_t		u1DABUSY:1;
    uint_io32_t		:31;
}stc_sadac_dabusy_field_t;

typedef union un_sadac_dabusy{
    uint_io32_t		u32Register;
    stc_sadac_dabusy_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_dabusy_t;

/* DACTRL */
#define SADAC_DACTRL	(SADAC.unDACTRL.u32Register)  /*@rg@*/
#define SADAC_DACTRL_DMAEN	(SADAC.unDACTRL.stcField.u1DMAEN)  /*@bf@*/
#define SADAC_DACTRL_FEST	(SADAC.unDACTRL.stcField.u5FEST)  /*@bf@*/

typedef struct stc_sadac_dactrl_field{
    uint_io32_t		:8;
    uint_io32_t		u1DMAEN:1;
    uint_io32_t		:7;
    uint_io32_t		u5FEST:5;
    uint_io32_t		:11;
}stc_sadac_dactrl_field_t;

typedef union un_sadac_dactrl{
    uint_io32_t		u32Register;
    stc_sadac_dactrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_dactrl_t;

/* DAFLUSH */
#define SADAC_DAFLUSH	(SADAC.unDAFLUSH.u32Register)  /*@rg@*/
#define SADAC_DAFLUSH_FLUSH	(SADAC.unDAFLUSH.stcField.u1FLUSH)  /*@bf@*/

typedef struct stc_sadac_daflush_field{
    uint_io32_t		u1FLUSH:1;
    uint_io32_t		:31;
}stc_sadac_daflush_field_t;

typedef union un_sadac_daflush{
    uint_io32_t		u32Register;
    stc_sadac_daflush_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_daflush_t;

/* INTREN */
#define SADAC_INTREN	(SADAC.unINTREN.u32Register)  /*@rg@*/
#define SADAC_INTREN_DREQ	(SADAC.unINTREN.stcField.u1DREQ)  /*@bf@*/
#define SADAC_INTREN_OVFL	(SADAC.unINTREN.stcField.u1OVFL)  /*@bf@*/
#define SADAC_INTREN_UDRN	(SADAC.unINTREN.stcField.u1UDRN)  /*@bf@*/
#define SADAC_INTREN_DMA_ERR	(SADAC.unINTREN.stcField.u1DMA_ERR)  /*@bf@*/

typedef struct stc_sadac_intren_field{
    uint_io32_t		u1DREQ:1;
    uint_io32_t		u1OVFL:1;
    uint_io32_t		u1UDRN:1;
    uint_io32_t		u1DMA_ERR:1;
    uint_io32_t		:28;
}stc_sadac_intren_field_t;

typedef union un_sadac_intren{
    uint_io32_t		u32Register;
    stc_sadac_intren_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_intren_t;

/* INTRSTAT */
#define SADAC_INTRSTAT	(SADAC.unINTRSTAT.u32Register)  /*@rg@*/
#define SADAC_INTRSTAT_DREQ	(SADAC.unINTRSTAT.stcField.u1DREQ)  /*@bf@*/
#define SADAC_INTRSTAT_OVFL	(SADAC.unINTRSTAT.stcField.u1OVFL)  /*@bf@*/
#define SADAC_INTRSTAT_UDRN	(SADAC.unINTRSTAT.stcField.u1UDRN)  /*@bf@*/
#define SADAC_INTRSTAT_DMA_ERR	(SADAC.unINTRSTAT.stcField.u1DMA_ERR)  /*@bf@*/

typedef struct stc_sadac_intrstat_field{
    uint_io32_t		u1DREQ:1;
    uint_io32_t		u1OVFL:1;
    uint_io32_t		u1UDRN:1;
    uint_io32_t		u1DMA_ERR:1;
    uint_io32_t		:28;
}stc_sadac_intrstat_field_t;

typedef union un_sadac_intrstat{
    uint_io32_t		u32Register;
    stc_sadac_intrstat_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_intrstat_t;

/* INTCTR */
#define SADAC_INTCTR	(SADAC.unINTCTR.u32Register)  /*@rg@*/
#define SADAC_INTCTR_DREQ	(SADAC.unINTCTR.stcField.u1DREQ)  /*@bf@*/
#define SADAC_INTCTR_OVFL	(SADAC.unINTCTR.stcField.u1OVFL)  /*@bf@*/
#define SADAC_INTCTR_UDRN	(SADAC.unINTCTR.stcField.u1UDRN)  /*@bf@*/
#define SADAC_INTCTR_DMA_ERR	(SADAC.unINTCTR.stcField.u1DMA_ERR)  /*@bf@*/

typedef struct stc_sadac_intctr_field{
    uint_io32_t		u1DREQ:1;
    uint_io32_t		u1OVFL:1;
    uint_io32_t		u1UDRN:1;
    uint_io32_t		u1DMA_ERR:1;
    uint_io32_t		:28;
}stc_sadac_intctr_field_t;

typedef union un_sadac_intctr{
    uint_io32_t		u32Register;
    stc_sadac_intctr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_intctr_t;

/* DPCR */
#define SADAC_DPCR	(SADAC.unDPCR.u32Register)  /*@rg@*/
#define SADAC_DPCR_PCR	(SADAC.unDPCR.stcField.u1PCR)  /*@bf@*/
#define SADAC_DPCR_PCL	(SADAC.unDPCR.stcField.u1PCL)  /*@bf@*/

typedef struct stc_sadac_dpcr_field{
    uint_io32_t		u1PCR:1;
    uint_io32_t		u1PCL:1;
    uint_io32_t		:30;
}stc_sadac_dpcr_field_t;

typedef union un_sadac_dpcr{
    uint_io32_t		u32Register;
    stc_sadac_dpcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_dpcr_t;

/* DADR[0-15] */
#define SADAC_DADR0	(SADAC.unDADR0.u32Register)  /*@rg@*/
#define SADAC_DADR0_DADR	SADAC_DADR0  /*@bfrg@*/

#define SADAC_DADR1	(SADAC.unDADR1.u32Register)  /*@rg@*/
#define SADAC_DADR1_DADR	SADAC_DADR1  /*@bfrg@*/

#define SADAC_DADR2	(SADAC.unDADR2.u32Register)  /*@rg@*/
#define SADAC_DADR2_DADR	SADAC_DADR2  /*@bfrg@*/

#define SADAC_DADR3	(SADAC.unDADR3.u32Register)  /*@rg@*/
#define SADAC_DADR3_DADR	SADAC_DADR3  /*@bfrg@*/

#define SADAC_DADR4	(SADAC.unDADR4.u32Register)  /*@rg@*/
#define SADAC_DADR4_DADR	SADAC_DADR4  /*@bfrg@*/

#define SADAC_DADR5	(SADAC.unDADR5.u32Register)  /*@rg@*/
#define SADAC_DADR5_DADR	SADAC_DADR5  /*@bfrg@*/

#define SADAC_DADR6	(SADAC.unDADR6.u32Register)  /*@rg@*/
#define SADAC_DADR6_DADR	SADAC_DADR6  /*@bfrg@*/

#define SADAC_DADR7	(SADAC.unDADR7.u32Register)  /*@rg@*/
#define SADAC_DADR7_DADR	SADAC_DADR7  /*@bfrg@*/

#define SADAC_DADR8	(SADAC.unDADR8.u32Register)  /*@rg@*/
#define SADAC_DADR8_DADR	SADAC_DADR8  /*@bfrg@*/

#define SADAC_DADR9	(SADAC.unDADR9.u32Register)  /*@rg@*/
#define SADAC_DADR9_DADR	SADAC_DADR9  /*@bfrg@*/

#define SADAC_DADR10	(SADAC.unDADR10.u32Register)  /*@rg@*/
#define SADAC_DADR10_DADR	SADAC_DADR10  /*@bfrg@*/

#define SADAC_DADR11	(SADAC.unDADR11.u32Register)  /*@rg@*/
#define SADAC_DADR11_DADR	SADAC_DADR11  /*@bfrg@*/

#define SADAC_DADR12	(SADAC.unDADR12.u32Register)  /*@rg@*/
#define SADAC_DADR12_DADR	SADAC_DADR12  /*@bfrg@*/

#define SADAC_DADR13	(SADAC.unDADR13.u32Register)  /*@rg@*/
#define SADAC_DADR13_DADR	SADAC_DADR13  /*@bfrg@*/

#define SADAC_DADR14	(SADAC.unDADR14.u32Register)  /*@rg@*/
#define SADAC_DADR14_DADR	SADAC_DADR14  /*@bfrg@*/

#define SADAC_DADR15	(SADAC.unDADR15.u32Register)  /*@rg@*/
#define SADAC_DADR15_DADR	SADAC_DADR15  /*@bfrg@*/

typedef union un_sadac_dadrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sadac_dadrn_t;


typedef struct stc_sadac{
    un_sadac_daosr_t	unDAOSR;	/* 0x00000000 */
    un_sadac_dacr_t	unDACR;	/* 0x00000004 */
    un_sadac_dabusy_t	unDABUSY;	/* 0x00000008 */
    un_sadac_dactrl_t	unDACTRL;	/* 0x0000000C */
    un_sadac_daflush_t	unDAFLUSH;	/* 0x00000010 */
    un_sadac_intren_t	unINTREN;	/* 0x00000014 */
    un_sadac_intrstat_t	unINTRSTAT;	/* 0x00000018 */
    un_sadac_intctr_t	unINTCTR;	/* 0x0000001C */
    un_sadac_dpcr_t	unDPCR;	/* 0x00000020 */
    uint_io8_t	au8Reserved0[28];	/* 0x00000024 */
    un_sadac_dadrn_t	unDADR0;	/* 0x00000040 */
    un_sadac_dadrn_t	unDADR1;	/* 0x00000044 */
    un_sadac_dadrn_t	unDADR2;	/* 0x00000048 */
    un_sadac_dadrn_t	unDADR3;	/* 0x0000004C */
    un_sadac_dadrn_t	unDADR4;	/* 0x00000050 */
    un_sadac_dadrn_t	unDADR5;	/* 0x00000054 */
    un_sadac_dadrn_t	unDADR6;	/* 0x00000058 */
    un_sadac_dadrn_t	unDADR7;	/* 0x0000005C */
    un_sadac_dadrn_t	unDADR8;	/* 0x00000060 */
    un_sadac_dadrn_t	unDADR9;	/* 0x00000064 */
    un_sadac_dadrn_t	unDADR10;	/* 0x00000068 */
    un_sadac_dadrn_t	unDADR11;	/* 0x0000006C */
    un_sadac_dadrn_t	unDADR12;	/* 0x00000070 */
    un_sadac_dadrn_t	unDADR13;	/* 0x00000074 */
    un_sadac_dadrn_t	unDADR14;	/* 0x00000078 */
    un_sadac_dadrn_t	unDADR15;	/* 0x0000007C */
    uint_io8_t	au8Reserved1[896];	/* 0x00000080 */
}stc_sadac_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sadac_t	stcSADAC;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_SADAC_H */
