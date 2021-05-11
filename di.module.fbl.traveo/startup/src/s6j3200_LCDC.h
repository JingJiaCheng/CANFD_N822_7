/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_LCDC_H
#define __S6J3200_LCDC_H

#include "s6j3200io_basetypes.h"

/* LCDC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define LCDC	stcLCDC
#else /* __IO_DEFINE */
#define LCDC	(*((volatile stc_lcdc_t*)0xB48C5C00))
#endif /* __IO_DEFINE */

/* LCR1 */
#define LCDC_LCR1	(LCDC.unLCR1.u8Register)  /*@rg@*/

typedef union un_lcdc_lcr1{
    uint_io8_t		u8Register;
}un_lcdc_lcr1_t;

/* LCR0 */
#define LCDC_LCR0	(LCDC.unLCR0.u8Register)  /*@rg@*/
#define LCDC_LCR0_FP	(LCDC.unLCR0.stcField.u2FP)  /*@bf@*/
#define LCDC_LCR0_MS	(LCDC.unLCR0.stcField.u2MS)  /*@bf@*/
#define LCDC_LCR0_BK	(*(volatile uint_io8_t*)0xB7E2E00C)  /*@bfbba@*/
#define LCDC_LCR0_VSEL	(*(volatile uint_io8_t*)0xB7E2E00D)  /*@bfbba@*/
#define LCDC_LCR0_LCEN	(*(volatile uint_io8_t*)0xB7E2E00E)  /*@bfbba@*/
#define LCDC_LCR0_CSS	(*(volatile uint_io8_t*)0xB7E2E00F)  /*@bfbba@*/

typedef struct stc_lcdc_lcr0_field{
    uint_io8_t		u2FP:2;
    uint_io8_t		u2MS:2;
    uint_io8_t		u1BK:1;
    uint_io8_t		u1VSEL:1;
    uint_io8_t		u1LCEN:1;
    uint_io8_t		u1CSS:1;
}stc_lcdc_lcr0_field_t;

typedef union un_lcdc_lcr0{
    uint_io8_t		u8Register;
    stc_lcdc_lcr0_field_t		stcField;
}un_lcdc_lcr0_t;

/* LCRS */
#define LCDC_LCRS	(LCDC.unLCRS.u8Register)  /*@rg@*/
#define LCDC_LCRS_FPS	(LCDC.unLCRS.stcField.u2FPS)  /*@bf@*/
#define LCDC_LCRS_LCS	(LCDC.unLCRS.stcField.u4LCS)  /*@bf@*/
#define LCDC_LCRS_LCSEN	(*(volatile uint_io8_t*)0xB7E2E016)  /*@bfbba@*/
#define LCDC_LCRS_SCSS	(*(volatile uint_io8_t*)0xB7E2E017)  /*@bfbba@*/

typedef struct stc_lcdc_lcrs_field{
    uint_io8_t		u2FPS:2;
    uint_io8_t		u4LCS:4;
    uint_io8_t		u1LCSEN:1;
    uint_io8_t		u1SCSS:1;
}stc_lcdc_lcrs_field_t;

typedef union un_lcdc_lcrs{
    uint_io8_t		u8Register;
    stc_lcdc_lcrs_field_t		stcField;
}un_lcdc_lcrs_t;

/* LCDCMR */
#define LCDC_LCDCMR	(LCDC.unLCDCMR.u8Register)  /*@rg@*/
#define LCDC_LCDCMR_DTCH	(*(volatile uint_io8_t*)0xB7E2E01F)  /*@bfbba@*/

typedef struct stc_lcdc_lcdcmr_field{
    uint_io8_t		:7;
    uint_io8_t		u1DTCH:1;
}stc_lcdc_lcdcmr_field_t;

typedef union un_lcdc_lcdcmr{
    uint_io8_t		u8Register;
    stc_lcdc_lcdcmr_field_t		stcField;
}un_lcdc_lcdcmr_t;

/* VRAM3 */
#define LCDC_VRAM3	(LCDC.unVRAM3.u8Register)  /*@rg@*/
#define LCDC_VRAM3_D	LCDC_VRAM3  /*@bfrg@*/

typedef union un_lcdc_vram3{
    uint_io8_t		u8Register;
}un_lcdc_vram3_t;

/* VRAM2 */
#define LCDC_VRAM2	(LCDC.unVRAM2.u8Register)  /*@rg@*/
#define LCDC_VRAM2_D	LCDC_VRAM2  /*@bfrg@*/

typedef union un_lcdc_vram2{
    uint_io8_t		u8Register;
}un_lcdc_vram2_t;

/* VRAM1 */
#define LCDC_VRAM1	(LCDC.unVRAM1.u8Register)  /*@rg@*/
#define LCDC_VRAM1_D	LCDC_VRAM1  /*@bfrg@*/

typedef union un_lcdc_vram1{
    uint_io8_t		u8Register;
}un_lcdc_vram1_t;

/* VRAM0 */
#define LCDC_VRAM0	(LCDC.unVRAM0.u8Register)  /*@rg@*/
#define LCDC_VRAM0_D	LCDC_VRAM0  /*@bfrg@*/

typedef union un_lcdc_vram0{
    uint_io8_t		u8Register;
}un_lcdc_vram0_t;

/* VRAM7 */
#define LCDC_VRAM7	(LCDC.unVRAM7.u8Register)  /*@rg@*/
#define LCDC_VRAM7_D	LCDC_VRAM7  /*@bfrg@*/

typedef union un_lcdc_vram7{
    uint_io8_t		u8Register;
}un_lcdc_vram7_t;

/* VRAM6 */
#define LCDC_VRAM6	(LCDC.unVRAM6.u8Register)  /*@rg@*/
#define LCDC_VRAM6_D	LCDC_VRAM6  /*@bfrg@*/

typedef union un_lcdc_vram6{
    uint_io8_t		u8Register;
}un_lcdc_vram6_t;

/* VRAM5 */
#define LCDC_VRAM5	(LCDC.unVRAM5.u8Register)  /*@rg@*/
#define LCDC_VRAM5_D	LCDC_VRAM5  /*@bfrg@*/

typedef union un_lcdc_vram5{
    uint_io8_t		u8Register;
}un_lcdc_vram5_t;

/* VRAM4 */
#define LCDC_VRAM4	(LCDC.unVRAM4.u8Register)  /*@rg@*/
#define LCDC_VRAM4_D	LCDC_VRAM4  /*@bfrg@*/

typedef union un_lcdc_vram4{
    uint_io8_t		u8Register;
}un_lcdc_vram4_t;

/* VRAM11 */
#define LCDC_VRAM11	(LCDC.unVRAM11.u8Register)  /*@rg@*/
#define LCDC_VRAM11_D	LCDC_VRAM11  /*@bfrg@*/

typedef union un_lcdc_vram11{
    uint_io8_t		u8Register;
}un_lcdc_vram11_t;

/* VRAM10 */
#define LCDC_VRAM10	(LCDC.unVRAM10.u8Register)  /*@rg@*/
#define LCDC_VRAM10_D	LCDC_VRAM10  /*@bfrg@*/

typedef union un_lcdc_vram10{
    uint_io8_t		u8Register;
}un_lcdc_vram10_t;

/* VRAM9 */
#define LCDC_VRAM9	(LCDC.unVRAM9.u8Register)  /*@rg@*/
#define LCDC_VRAM9_D	LCDC_VRAM9  /*@bfrg@*/

typedef union un_lcdc_vram9{
    uint_io8_t		u8Register;
}un_lcdc_vram9_t;

/* VRAM8 */
#define LCDC_VRAM8	(LCDC.unVRAM8.u8Register)  /*@rg@*/
#define LCDC_VRAM8_D	LCDC_VRAM8  /*@bfrg@*/

typedef union un_lcdc_vram8{
    uint_io8_t		u8Register;
}un_lcdc_vram8_t;

/* VRAM15 */
#define LCDC_VRAM15	(LCDC.unVRAM15.u8Register)  /*@rg@*/
#define LCDC_VRAM15_D	LCDC_VRAM15  /*@bfrg@*/

typedef union un_lcdc_vram15{
    uint_io8_t		u8Register;
}un_lcdc_vram15_t;

/* VRAM14 */
#define LCDC_VRAM14	(LCDC.unVRAM14.u8Register)  /*@rg@*/
#define LCDC_VRAM14_D	LCDC_VRAM14  /*@bfrg@*/

typedef union un_lcdc_vram14{
    uint_io8_t		u8Register;
}un_lcdc_vram14_t;

/* VRAM13 */
#define LCDC_VRAM13	(LCDC.unVRAM13.u8Register)  /*@rg@*/
#define LCDC_VRAM13_D	LCDC_VRAM13  /*@bfrg@*/

typedef union un_lcdc_vram13{
    uint_io8_t		u8Register;
}un_lcdc_vram13_t;

/* VRAM12 */
#define LCDC_VRAM12	(LCDC.unVRAM12.u8Register)  /*@rg@*/
#define LCDC_VRAM12_D	LCDC_VRAM12  /*@bfrg@*/

typedef union un_lcdc_vram12{
    uint_io8_t		u8Register;
}un_lcdc_vram12_t;

/* LDR */
#define LCDC_LDR	(LCDC.unLDR.u16Register)  /*@rg@*/
#define LCDC_LDR1	(LCDC.unLDR.au8Byte[0])  /*@arbyte@*/
#define LCDC_LDR0	(LCDC.unLDR.au8Byte[1])  /*@arbyte@*/
#define LCDC_LDR_ST0	(*(volatile uint_io8_t*)0xB7E2E0B0)  /*@bfbba@*/
#define LCDC_LDR_ST1	(*(volatile uint_io8_t*)0xB7E2E0B1)  /*@bfbba@*/
#define LCDC_LDR_ST2	(*(volatile uint_io8_t*)0xB7E2E0B2)  /*@bfbba@*/
#define LCDC_LDR_ST3	(*(volatile uint_io8_t*)0xB7E2E0B3)  /*@bfbba@*/
#define LCDC_LDR_ST4	(*(volatile uint_io8_t*)0xB7E2E0B4)  /*@bfbba@*/
#define LCDC_LDR_ST5	(*(volatile uint_io8_t*)0xB7E2E0B5)  /*@bfbba@*/
#define LCDC_LDR_ST6	(*(volatile uint_io8_t*)0xB7E2E0B6)  /*@bfbba@*/
#define LCDC_LDR_ST7	(*(volatile uint_io8_t*)0xB7E2E0B7)  /*@bfbba@*/
#define LCDC_LDR_ST8	(*(volatile uint_io8_t*)0xB7E2E0B8)  /*@bfbba@*/

typedef struct stc_lcdc_ldr_field{
    uint_io16_t		u1ST0:1;
    uint_io16_t		u1ST1:1;
    uint_io16_t		u1ST2:1;
    uint_io16_t		u1ST3:1;
    uint_io16_t		u1ST4:1;
    uint_io16_t		u1ST5:1;
    uint_io16_t		u1ST6:1;
    uint_io16_t		u1ST7:1;
    uint_io16_t		u1ST8:1;
    uint_io16_t		:7;
}stc_lcdc_ldr_field_t;

typedef union un_lcdc_ldr{
    uint_io16_t		u16Register;
    stc_lcdc_ldr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_lcdc_ldr_t;


typedef struct stc_lcdc{
    un_lcdc_lcr1_t	unLCR1;	/* 0x00000000 */
    un_lcdc_lcr0_t	unLCR0;	/* 0x00000001 */
    un_lcdc_lcrs_t	unLCRS;	/* 0x00000002 */
    un_lcdc_lcdcmr_t	unLCDCMR;	/* 0x00000003 */
    un_lcdc_vram3_t	unVRAM3;	/* 0x00000004 */
    un_lcdc_vram2_t	unVRAM2;	/* 0x00000005 */
    un_lcdc_vram1_t	unVRAM1;	/* 0x00000006 */
    un_lcdc_vram0_t	unVRAM0;	/* 0x00000007 */
    un_lcdc_vram7_t	unVRAM7;	/* 0x00000008 */
    un_lcdc_vram6_t	unVRAM6;	/* 0x00000009 */
    un_lcdc_vram5_t	unVRAM5;	/* 0x0000000A */
    un_lcdc_vram4_t	unVRAM4;	/* 0x0000000B */
    un_lcdc_vram11_t	unVRAM11;	/* 0x0000000C */
    un_lcdc_vram10_t	unVRAM10;	/* 0x0000000D */
    un_lcdc_vram9_t	unVRAM9;	/* 0x0000000E */
    un_lcdc_vram8_t	unVRAM8;	/* 0x0000000F */
    un_lcdc_vram15_t	unVRAM15;	/* 0x00000010 */
    un_lcdc_vram14_t	unVRAM14;	/* 0x00000011 */
    un_lcdc_vram13_t	unVRAM13;	/* 0x00000012 */
    un_lcdc_vram12_t	unVRAM12;	/* 0x00000013 */
    uint_io8_t	au8Reserved0[2];	/* 0x00000014 */
    un_lcdc_ldr_t	unLDR;	/* 0x00000016 */
    uint_io8_t	au8Reserved1[1000];	/* 0x00000018 */
}stc_lcdc_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_lcdc_t	stcLCDC;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_LCDC_H */
