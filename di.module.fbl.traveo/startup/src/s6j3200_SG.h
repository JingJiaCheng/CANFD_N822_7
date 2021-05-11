/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SG_H
#define __S6J3200_SG_H

#include "s6j3200io_basetypes.h"

/* SG[0-3] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SG0	stcSG[0]
#define SG1	stcSG[1]
#define SG2	stcSG[2]
#define SG3	stcSG[3]
#else /* __IO_DEFINE */
#define SG0	(*((volatile stc_sgn_t*)0xB4840000))
#define SG1	(*((volatile stc_sgn_t*)0xB4840400))
#define SG2	(*((volatile stc_sgn_t*)0xB4840800))
#define SG3	(*((volatile stc_sgn_t*)0xB4840C00))
#endif /* __IO_DEFINE */

/* SGCR */
#define SG0_SGCR	(SG0.unSGCR.u16Register)  /*@rg@*/
#define SG0_SGCR_ST	(*(volatile uint_io8_t*)0xB7A00000)  /*@bfbba@*/
#define SG0_SGCR_INT	(*(volatile uint_io8_t*)0xB7A00001)  /*@bfbba@*/
#define SG0_SGCR_INTE	(*(volatile uint_io8_t*)0xB7A00002)  /*@bfbba@*/
#define SG0_SGCR_SGAOE	(*(volatile uint_io8_t*)0xB7A00003)  /*@bfbba@*/
#define SG0_SGCR_SGOOE	(*(volatile uint_io8_t*)0xB7A00004)  /*@bfbba@*/
#define SG0_SGCR_TONE	(*(volatile uint_io8_t*)0xB7A00005)  /*@bfbba@*/
#define SG0_SGCR_S	(SG0.unSGCR.stcField.u2S)  /*@bf@*/
#define SG0_SGCR_BUSY	(*(volatile uint_io8_t*)0xB7A00009)  /*@bfbba@*/
#define SG0_SGCR_GEN	(*(volatile uint_io8_t*)0xB7A0000B)  /*@bfbba@*/
#define SG0_SGCR_GID	(*(volatile uint_io8_t*)0xB7A0000C)  /*@bfbba@*/
#define SG0_SGCR_DMA	(*(volatile uint_io8_t*)0xB7A0000D)  /*@bfbba@*/
#define SG0_SGCR_SRST	(*(volatile uint_io8_t*)0xB7A0000E)  /*@bfbba@*/

#define SG1_SGCR	(SG1.unSGCR.u16Register)  /*@rg@*/
#define SG1_SGCR_ST	(*(volatile uint_io8_t*)0xB7A02000)  /*@bfbba@*/
#define SG1_SGCR_INT	(*(volatile uint_io8_t*)0xB7A02001)  /*@bfbba@*/
#define SG1_SGCR_INTE	(*(volatile uint_io8_t*)0xB7A02002)  /*@bfbba@*/
#define SG1_SGCR_SGAOE	(*(volatile uint_io8_t*)0xB7A02003)  /*@bfbba@*/
#define SG1_SGCR_SGOOE	(*(volatile uint_io8_t*)0xB7A02004)  /*@bfbba@*/
#define SG1_SGCR_TONE	(*(volatile uint_io8_t*)0xB7A02005)  /*@bfbba@*/
#define SG1_SGCR_S	(SG1.unSGCR.stcField.u2S)  /*@bf@*/
#define SG1_SGCR_BUSY	(*(volatile uint_io8_t*)0xB7A02009)  /*@bfbba@*/
#define SG1_SGCR_GEN	(*(volatile uint_io8_t*)0xB7A0200B)  /*@bfbba@*/
#define SG1_SGCR_GID	(*(volatile uint_io8_t*)0xB7A0200C)  /*@bfbba@*/
#define SG1_SGCR_DMA	(*(volatile uint_io8_t*)0xB7A0200D)  /*@bfbba@*/
#define SG1_SGCR_SRST	(*(volatile uint_io8_t*)0xB7A0200E)  /*@bfbba@*/

#define SG2_SGCR	(SG2.unSGCR.u16Register)  /*@rg@*/
#define SG2_SGCR_ST	(*(volatile uint_io8_t*)0xB7A04000)  /*@bfbba@*/
#define SG2_SGCR_INT	(*(volatile uint_io8_t*)0xB7A04001)  /*@bfbba@*/
#define SG2_SGCR_INTE	(*(volatile uint_io8_t*)0xB7A04002)  /*@bfbba@*/
#define SG2_SGCR_SGAOE	(*(volatile uint_io8_t*)0xB7A04003)  /*@bfbba@*/
#define SG2_SGCR_SGOOE	(*(volatile uint_io8_t*)0xB7A04004)  /*@bfbba@*/
#define SG2_SGCR_TONE	(*(volatile uint_io8_t*)0xB7A04005)  /*@bfbba@*/
#define SG2_SGCR_S	(SG2.unSGCR.stcField.u2S)  /*@bf@*/
#define SG2_SGCR_BUSY	(*(volatile uint_io8_t*)0xB7A04009)  /*@bfbba@*/
#define SG2_SGCR_GEN	(*(volatile uint_io8_t*)0xB7A0400B)  /*@bfbba@*/
#define SG2_SGCR_GID	(*(volatile uint_io8_t*)0xB7A0400C)  /*@bfbba@*/
#define SG2_SGCR_DMA	(*(volatile uint_io8_t*)0xB7A0400D)  /*@bfbba@*/
#define SG2_SGCR_SRST	(*(volatile uint_io8_t*)0xB7A0400E)  /*@bfbba@*/

#define SG3_SGCR	(SG3.unSGCR.u16Register)  /*@rg@*/
#define SG3_SGCR_ST	(*(volatile uint_io8_t*)0xB7A06000)  /*@bfbba@*/
#define SG3_SGCR_INT	(*(volatile uint_io8_t*)0xB7A06001)  /*@bfbba@*/
#define SG3_SGCR_INTE	(*(volatile uint_io8_t*)0xB7A06002)  /*@bfbba@*/
#define SG3_SGCR_SGAOE	(*(volatile uint_io8_t*)0xB7A06003)  /*@bfbba@*/
#define SG3_SGCR_SGOOE	(*(volatile uint_io8_t*)0xB7A06004)  /*@bfbba@*/
#define SG3_SGCR_TONE	(*(volatile uint_io8_t*)0xB7A06005)  /*@bfbba@*/
#define SG3_SGCR_S	(SG3.unSGCR.stcField.u2S)  /*@bf@*/
#define SG3_SGCR_BUSY	(*(volatile uint_io8_t*)0xB7A06009)  /*@bfbba@*/
#define SG3_SGCR_GEN	(*(volatile uint_io8_t*)0xB7A0600B)  /*@bfbba@*/
#define SG3_SGCR_GID	(*(volatile uint_io8_t*)0xB7A0600C)  /*@bfbba@*/
#define SG3_SGCR_DMA	(*(volatile uint_io8_t*)0xB7A0600D)  /*@bfbba@*/
#define SG3_SGCR_SRST	(*(volatile uint_io8_t*)0xB7A0600E)  /*@bfbba@*/

typedef struct stc_sgn_sgcr_field{
    uint_io16_t		u1ST:1;
    uint_io16_t		u1INT:1;
    uint_io16_t		u1INTE:1;
    uint_io16_t		u1SGAOE:1;
    uint_io16_t		u1SGOOE:1;
    uint_io16_t		u1TONE:1;
    uint_io16_t		u2S:2;
    uint_io16_t		:1;
    uint_io16_t		u1BUSY:1;
    uint_io16_t		:1;
    uint_io16_t		u1GEN:1;
    uint_io16_t		u1GID:1;
    uint_io16_t		u1DMA:1;
    uint_io16_t		u1SRST:1;
    uint_io16_t		:1;
}stc_sgn_sgcr_field_t;

typedef union un_sgn_sgcr{
    uint_io16_t		u16Register;
    stc_sgn_sgcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_sgn_sgcr_t;

/* SGDER */
#define SG0_SGDER	(SG0.unSGDER.u8Register)  /*@rg@*/
#define SG0_SGDER_PCRE0	(*(volatile uint_io8_t*)0xB7A00010)  /*@bfbba@*/
#define SG0_SGDER_PCRE1	(*(volatile uint_io8_t*)0xB7A00011)  /*@bfbba@*/
#define SG0_SGDER_IDRE	(*(volatile uint_io8_t*)0xB7A00012)  /*@bfbba@*/
#define SG0_SGDER_TCRE	(*(volatile uint_io8_t*)0xB7A00013)  /*@bfbba@*/
#define SG0_SGDER_NRE	(*(volatile uint_io8_t*)0xB7A00014)  /*@bfbba@*/
#define SG0_SGDER_FRE	(*(volatile uint_io8_t*)0xB7A00015)  /*@bfbba@*/
#define SG0_SGDER_ARE0	(*(volatile uint_io8_t*)0xB7A00016)  /*@bfbba@*/
#define SG0_SGDER_ARE1	(*(volatile uint_io8_t*)0xB7A00017)  /*@bfbba@*/

#define SG1_SGDER	(SG1.unSGDER.u8Register)  /*@rg@*/
#define SG1_SGDER_PCRE0	(*(volatile uint_io8_t*)0xB7A02010)  /*@bfbba@*/
#define SG1_SGDER_PCRE1	(*(volatile uint_io8_t*)0xB7A02011)  /*@bfbba@*/
#define SG1_SGDER_IDRE	(*(volatile uint_io8_t*)0xB7A02012)  /*@bfbba@*/
#define SG1_SGDER_TCRE	(*(volatile uint_io8_t*)0xB7A02013)  /*@bfbba@*/
#define SG1_SGDER_NRE	(*(volatile uint_io8_t*)0xB7A02014)  /*@bfbba@*/
#define SG1_SGDER_FRE	(*(volatile uint_io8_t*)0xB7A02015)  /*@bfbba@*/
#define SG1_SGDER_ARE0	(*(volatile uint_io8_t*)0xB7A02016)  /*@bfbba@*/
#define SG1_SGDER_ARE1	(*(volatile uint_io8_t*)0xB7A02017)  /*@bfbba@*/

#define SG2_SGDER	(SG2.unSGDER.u8Register)  /*@rg@*/
#define SG2_SGDER_PCRE0	(*(volatile uint_io8_t*)0xB7A04010)  /*@bfbba@*/
#define SG2_SGDER_PCRE1	(*(volatile uint_io8_t*)0xB7A04011)  /*@bfbba@*/
#define SG2_SGDER_IDRE	(*(volatile uint_io8_t*)0xB7A04012)  /*@bfbba@*/
#define SG2_SGDER_TCRE	(*(volatile uint_io8_t*)0xB7A04013)  /*@bfbba@*/
#define SG2_SGDER_NRE	(*(volatile uint_io8_t*)0xB7A04014)  /*@bfbba@*/
#define SG2_SGDER_FRE	(*(volatile uint_io8_t*)0xB7A04015)  /*@bfbba@*/
#define SG2_SGDER_ARE0	(*(volatile uint_io8_t*)0xB7A04016)  /*@bfbba@*/
#define SG2_SGDER_ARE1	(*(volatile uint_io8_t*)0xB7A04017)  /*@bfbba@*/

#define SG3_SGDER	(SG3.unSGDER.u8Register)  /*@rg@*/
#define SG3_SGDER_PCRE0	(*(volatile uint_io8_t*)0xB7A06010)  /*@bfbba@*/
#define SG3_SGDER_PCRE1	(*(volatile uint_io8_t*)0xB7A06011)  /*@bfbba@*/
#define SG3_SGDER_IDRE	(*(volatile uint_io8_t*)0xB7A06012)  /*@bfbba@*/
#define SG3_SGDER_TCRE	(*(volatile uint_io8_t*)0xB7A06013)  /*@bfbba@*/
#define SG3_SGDER_NRE	(*(volatile uint_io8_t*)0xB7A06014)  /*@bfbba@*/
#define SG3_SGDER_FRE	(*(volatile uint_io8_t*)0xB7A06015)  /*@bfbba@*/
#define SG3_SGDER_ARE0	(*(volatile uint_io8_t*)0xB7A06016)  /*@bfbba@*/
#define SG3_SGDER_ARE1	(*(volatile uint_io8_t*)0xB7A06017)  /*@bfbba@*/

typedef struct stc_sgn_sgder_field{
    uint_io8_t		u1PCRE0:1;
    uint_io8_t		u1PCRE1:1;
    uint_io8_t		u1IDRE:1;
    uint_io8_t		u1TCRE:1;
    uint_io8_t		u1NRE:1;
    uint_io8_t		u1FRE:1;
    uint_io8_t		u1ARE0:1;
    uint_io8_t		u1ARE1:1;
}stc_sgn_sgder_field_t;

typedef union un_sgn_sgder{
    uint_io8_t		u8Register;
    stc_sgn_sgder_field_t		stcField;
}un_sgn_sgder_t;

/* SGNR */
#define SG0_SGNR	(SG0.unSGNR.u8Register)  /*@rg@*/
#define SG0_SGNR_SGNR	SG0_SGNR  /*@bfrg@*/

#define SG1_SGNR	(SG1.unSGNR.u8Register)  /*@rg@*/
#define SG1_SGNR_SGNR	SG1_SGNR  /*@bfrg@*/

#define SG2_SGNR	(SG2.unSGNR.u8Register)  /*@rg@*/
#define SG2_SGNR_SGNR	SG2_SGNR  /*@bfrg@*/

#define SG3_SGNR	(SG3.unSGNR.u8Register)  /*@rg@*/
#define SG3_SGNR_SGNR	SG3_SGNR  /*@bfrg@*/

typedef union un_sgn_sgnr{
    uint_io8_t		u8Register;
}un_sgn_sgnr_t;

/* SGFR */
#define SG0_SGFR	(SG0.unSGFR.u8Register)  /*@rg@*/
#define SG0_SGFR_SGFR	SG0_SGFR  /*@bfrg@*/

#define SG1_SGFR	(SG1.unSGFR.u8Register)  /*@rg@*/
#define SG1_SGFR_SGFR	SG1_SGFR  /*@bfrg@*/

#define SG2_SGFR	(SG2.unSGFR.u8Register)  /*@rg@*/
#define SG2_SGFR_SGFR	SG2_SGFR  /*@bfrg@*/

#define SG3_SGFR	(SG3.unSGFR.u8Register)  /*@rg@*/
#define SG3_SGFR_SGFR	SG3_SGFR  /*@bfrg@*/

typedef union un_sgn_sgfr{
    uint_io8_t		u8Register;
}un_sgn_sgfr_t;

/* SGAR */
#define SG0_SGAR	(SG0.unSGAR.u16Register)  /*@rg@*/
#define SG0_SGAR_SGAR	SG0_SGAR  /*@bfrg@*/

#define SG1_SGAR	(SG1.unSGAR.u16Register)  /*@rg@*/
#define SG1_SGAR_SGAR	SG1_SGAR  /*@bfrg@*/

#define SG2_SGAR	(SG2.unSGAR.u16Register)  /*@rg@*/
#define SG2_SGAR_SGAR	SG2_SGAR  /*@bfrg@*/

#define SG3_SGAR	(SG3.unSGAR.u16Register)  /*@rg@*/
#define SG3_SGAR_SGAR	SG3_SGAR  /*@bfrg@*/

typedef union un_sgn_sgar{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_sgn_sgar_t;

/* SGPCR */
#define SG0_SGPCR	(SG0.unSGPCR.u16Register)  /*@rg@*/
#define SG0_SGPCR_SGPCR	SG0_SGPCR  /*@bfrg@*/

#define SG1_SGPCR	(SG1.unSGPCR.u16Register)  /*@rg@*/
#define SG1_SGPCR_SGPCR	SG1_SGPCR  /*@bfrg@*/

#define SG2_SGPCR	(SG2.unSGPCR.u16Register)  /*@rg@*/
#define SG2_SGPCR_SGPCR	SG2_SGPCR  /*@bfrg@*/

#define SG3_SGPCR	(SG3.unSGPCR.u16Register)  /*@rg@*/
#define SG3_SGPCR_SGPCR	SG3_SGPCR  /*@bfrg@*/

typedef union un_sgn_sgpcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_sgn_sgpcr_t;

/* SGIDR */
#define SG0_SGIDR	(SG0.unSGIDR.u8Register)  /*@rg@*/
#define SG0_SGIDR_SGIDR	SG0_SGIDR  /*@bfrg@*/

#define SG1_SGIDR	(SG1.unSGIDR.u8Register)  /*@rg@*/
#define SG1_SGIDR_SGIDR	SG1_SGIDR  /*@bfrg@*/

#define SG2_SGIDR	(SG2.unSGIDR.u8Register)  /*@rg@*/
#define SG2_SGIDR_SGIDR	SG2_SGIDR  /*@bfrg@*/

#define SG3_SGIDR	(SG3.unSGIDR.u8Register)  /*@rg@*/
#define SG3_SGIDR_SGIDR	SG3_SGIDR  /*@bfrg@*/

typedef union un_sgn_sgidr{
    uint_io8_t		u8Register;
}un_sgn_sgidr_t;

/* SGTCR */
#define SG0_SGTCR	(SG0.unSGTCR.u8Register)  /*@rg@*/
#define SG0_SGTCR_SGTCR	SG0_SGTCR  /*@bfrg@*/

#define SG1_SGTCR	(SG1.unSGTCR.u8Register)  /*@rg@*/
#define SG1_SGTCR_SGTCR	SG1_SGTCR  /*@bfrg@*/

#define SG2_SGTCR	(SG2.unSGTCR.u8Register)  /*@rg@*/
#define SG2_SGTCR_SGTCR	SG2_SGTCR  /*@bfrg@*/

#define SG3_SGTCR	(SG3.unSGTCR.u8Register)  /*@rg@*/
#define SG3_SGTCR_SGTCR	SG3_SGTCR  /*@bfrg@*/

typedef union un_sgn_sgtcr{
    uint_io8_t		u8Register;
}un_sgn_sgtcr_t;

/* SGDMAR */
#define SG0_SGDMAR	(SG0.unSGDMAR.u32Register)  /*@rg@*/
#define SG0_SGDMAR_SGDMAR	SG0_SGDMAR  /*@bfrg@*/

#define SG1_SGDMAR	(SG1.unSGDMAR.u32Register)  /*@rg@*/
#define SG1_SGDMAR_SGDMAR	SG1_SGDMAR  /*@bfrg@*/

#define SG2_SGDMAR	(SG2.unSGDMAR.u32Register)  /*@rg@*/
#define SG2_SGDMAR_SGDMAR	SG2_SGDMAR  /*@bfrg@*/

#define SG3_SGDMAR	(SG3.unSGDMAR.u32Register)  /*@rg@*/
#define SG3_SGDMAR_SGDMAR	SG3_SGDMAR  /*@bfrg@*/

typedef union un_sgn_sgdmar{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sgn_sgdmar_t;

/* SGCCR */
#define SG0_SGCCR	(SG0.unSGCCR.u16Register)  /*@rg@*/
#define SG0_SGCCR_INTC	(*(volatile uint_io8_t*)0xB7A00081)  /*@bfbba@*/

#define SG1_SGCCR	(SG1.unSGCCR.u16Register)  /*@rg@*/
#define SG1_SGCCR_INTC	(*(volatile uint_io8_t*)0xB7A02081)  /*@bfbba@*/

#define SG2_SGCCR	(SG2.unSGCCR.u16Register)  /*@rg@*/
#define SG2_SGCCR_INTC	(*(volatile uint_io8_t*)0xB7A04081)  /*@bfbba@*/

#define SG3_SGCCR	(SG3.unSGCCR.u16Register)  /*@rg@*/
#define SG3_SGCCR_INTC	(*(volatile uint_io8_t*)0xB7A06081)  /*@bfbba@*/

typedef struct stc_sgn_sgccr_field{
    uint_io16_t		:1;
    uint_io16_t		u1INTC:1;
    uint_io16_t		:14;
}stc_sgn_sgccr_field_t;

typedef union un_sgn_sgccr{
    uint_io16_t		u16Register;
    stc_sgn_sgccr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_sgn_sgccr_t;


typedef struct stc_sgn{
    un_sgn_sgcr_t	unSGCR;	/* 0x00000000 */
    un_sgn_sgder_t	unSGDER;	/* 0x00000002 */
    uint_io8_t	au8Reserved0[1];	/* 0x00000003 */
    un_sgn_sgnr_t	unSGNR;	/* 0x00000004 */
    un_sgn_sgfr_t	unSGFR;	/* 0x00000005 */
    un_sgn_sgar_t	unSGAR;	/* 0x00000006 */
    un_sgn_sgpcr_t	unSGPCR;	/* 0x00000008 */
    un_sgn_sgidr_t	unSGIDR;	/* 0x0000000A */
    un_sgn_sgtcr_t	unSGTCR;	/* 0x0000000B */
    un_sgn_sgdmar_t	unSGDMAR;	/* 0x0000000C */
    un_sgn_sgccr_t	unSGCCR;	/* 0x00000010 */
    uint_io8_t	au8Reserved1[1006];	/* 0x00000012 */
}stc_sgn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sgn_t	stcSG[4];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_SG_H */
