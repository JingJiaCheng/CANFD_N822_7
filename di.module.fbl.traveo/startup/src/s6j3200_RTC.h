/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_RTC_H
#define __S6J3200_RTC_H

#include "s6j3200io_basetypes.h"

/* RTC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define RTC	stcRTC
#else /* __IO_DEFINE */
#define RTC	(*((volatile stc_rtc_t*)0xB0618000))
#endif /* __IO_DEFINE */

/* WTCR */
#define RTC_WTCR	(RTC.unWTCR.u32Register)  /*@rg@*/
#define RTC_WTCR_ST	(*(volatile uint_io8_t*)0xB08C0000)  /*@bfbba@*/
#define RTC_WTCR_OE	(*(volatile uint_io8_t*)0xB08C0001)  /*@bfbba@*/
#define RTC_WTCR_UPDT	(*(volatile uint_io8_t*)0xB08C0002)  /*@bfbba@*/
#define RTC_WTCR_CSM	(*(volatile uint_io8_t*)0xB08C0003)  /*@bfbba@*/
#define RTC_WTCR_RCKSEL	(RTC.unWTCR.stcField.u2RCKSEL)  /*@bf@*/
#define RTC_WTCR_ACAL	(*(volatile uint_io8_t*)0xB08C0008)  /*@bfbba@*/
#define RTC_WTCR_MTRG	(*(volatile uint_io8_t*)0xB08C0009)  /*@bfbba@*/
#define RTC_WTCR_ENUP	(*(volatile uint_io8_t*)0xB08C000A)  /*@bfbba@*/
#define RTC_WTCR_CCKSEL	(*(volatile uint_io8_t*)0xB08C000B)  /*@bfbba@*/
#define RTC_WTCR_SCAL	(RTC.unWTCR.stcField.u3SCAL)  /*@bf@*/
#define RTC_WTCR_UPCAL	(*(volatile uint_io8_t*)0xB08C000F)  /*@bfbba@*/

typedef struct stc_rtc_wtcr_field{
    uint_io32_t		u1ST:1;
    uint_io32_t		u1OE:1;
    uint_io32_t		u1UPDT:1;
    uint_io32_t		u1CSM:1;
    uint_io32_t		u2RCKSEL:2;
    uint_io32_t		:2;
    uint_io32_t		u1ACAL:1;
    uint_io32_t		u1MTRG:1;
    uint_io32_t		u1ENUP:1;
    uint_io32_t		u1CCKSEL:1;
    uint_io32_t		u3SCAL:3;
    uint_io32_t		u1UPCAL:1;
    uint_io32_t		:16;
}stc_rtc_wtcr_field_t;

typedef union un_rtc_wtcr{
    uint_io32_t		u32Register;
    stc_rtc_wtcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_wtcr_t;

/* WTSR */
#define RTC_WTSR	(RTC.unWTSR.u32Register)  /*@rg@*/
#define RTC_WTSR_RUN	(*(volatile uint_io8_t*)0xB08C0020)  /*@bfbba@*/
#define RTC_WTSR_CSF	(*(volatile uint_io8_t*)0xB08C0021)  /*@bfbba@*/
#define RTC_WTSR_CLK_STS	(*(volatile uint_io8_t*)0xB08C0027)  /*@bfbba@*/
#define RTC_WTSR_RUNC	(*(volatile uint_io8_t*)0xB08C0028)  /*@bfbba@*/

typedef struct stc_rtc_wtsr_field{
    uint_io32_t		u1RUN:1;
    uint_io32_t		u1CSF:1;
    uint_io32_t		:5;
    uint_io32_t		u1CLK_STS:1;
    uint_io32_t		u1RUNC:1;
    uint_io32_t		:23;
}stc_rtc_wtsr_field_t;

typedef union un_rtc_wtsr{
    uint_io32_t		u32Register;
    stc_rtc_wtsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_wtsr_t;

/* WINS */
#define RTC_WINS	(RTC.unWINS.u32Register)  /*@rg@*/
#define RTC_WINS_SUBSEC	(*(volatile uint_io8_t*)0xB08C0040)  /*@bfbba@*/
#define RTC_WINS_SEC	(*(volatile uint_io8_t*)0xB08C0041)  /*@bfbba@*/
#define RTC_WINS_MIN	(*(volatile uint_io8_t*)0xB08C0042)  /*@bfbba@*/
#define RTC_WINS_HOUR	(*(volatile uint_io8_t*)0xB08C0043)  /*@bfbba@*/
#define RTC_WINS_DAY	(*(volatile uint_io8_t*)0xB08C0044)  /*@bfbba@*/
#define RTC_WINS_CFD	(*(volatile uint_io8_t*)0xB08C0045)  /*@bfbba@*/
#define RTC_WINS_CALD	(*(volatile uint_io8_t*)0xB08C0046)  /*@bfbba@*/

typedef struct stc_rtc_wins_field{
    uint_io32_t		u1SUBSEC:1;
    uint_io32_t		u1SEC:1;
    uint_io32_t		u1MIN:1;
    uint_io32_t		u1HOUR:1;
    uint_io32_t		u1DAY:1;
    uint_io32_t		u1CFD:1;
    uint_io32_t		u1CALD:1;
    uint_io32_t		:25;
}stc_rtc_wins_field_t;

typedef union un_rtc_wins{
    uint_io32_t		u32Register;
    stc_rtc_wins_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_wins_t;

/* WINE */
#define RTC_WINE	(RTC.unWINE.u32Register)  /*@rg@*/
#define RTC_WINE_SUBSECE	(*(volatile uint_io8_t*)0xB08C0060)  /*@bfbba@*/
#define RTC_WINE_SECE	(*(volatile uint_io8_t*)0xB08C0061)  /*@bfbba@*/
#define RTC_WINE_MINE	(*(volatile uint_io8_t*)0xB08C0062)  /*@bfbba@*/
#define RTC_WINE_HOURE	(*(volatile uint_io8_t*)0xB08C0063)  /*@bfbba@*/
#define RTC_WINE_DAYE	(*(volatile uint_io8_t*)0xB08C0064)  /*@bfbba@*/
#define RTC_WINE_CFDE	(*(volatile uint_io8_t*)0xB08C0065)  /*@bfbba@*/
#define RTC_WINE_CALDE	(*(volatile uint_io8_t*)0xB08C0066)  /*@bfbba@*/

typedef struct stc_rtc_wine_field{
    uint_io32_t		u1SUBSECE:1;
    uint_io32_t		u1SECE:1;
    uint_io32_t		u1MINE:1;
    uint_io32_t		u1HOURE:1;
    uint_io32_t		u1DAYE:1;
    uint_io32_t		u1CFDE:1;
    uint_io32_t		u1CALDE:1;
    uint_io32_t		:25;
}stc_rtc_wine_field_t;

typedef union un_rtc_wine{
    uint_io32_t		u32Register;
    stc_rtc_wine_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_wine_t;

/* WINC */
#define RTC_WINC	(RTC.unWINC.u32Register)  /*@rg@*/
#define RTC_WINC_SUBSECC	(*(volatile uint_io8_t*)0xB08C0080)  /*@bfbba@*/
#define RTC_WINC_SECC	(*(volatile uint_io8_t*)0xB08C0081)  /*@bfbba@*/
#define RTC_WINC_MINC	(*(volatile uint_io8_t*)0xB08C0082)  /*@bfbba@*/
#define RTC_WINC_HOURC	(*(volatile uint_io8_t*)0xB08C0083)  /*@bfbba@*/
#define RTC_WINC_DAYC	(*(volatile uint_io8_t*)0xB08C0084)  /*@bfbba@*/
#define RTC_WINC_CFDC	(*(volatile uint_io8_t*)0xB08C0085)  /*@bfbba@*/
#define RTC_WINC_CALDC	(*(volatile uint_io8_t*)0xB08C0086)  /*@bfbba@*/

typedef struct stc_rtc_winc_field{
    uint_io32_t		u1SUBSECC:1;
    uint_io32_t		u1SECC:1;
    uint_io32_t		u1MINC:1;
    uint_io32_t		u1HOURC:1;
    uint_io32_t		u1DAYC:1;
    uint_io32_t		u1CFDC:1;
    uint_io32_t		u1CALDC:1;
    uint_io32_t		:25;
}stc_rtc_winc_field_t;

typedef union un_rtc_winc{
    uint_io32_t		u32Register;
    stc_rtc_winc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_winc_t;

/* WTBR */
#define RTC_WTBR	(RTC.unWTBR.u32Register)  /*@rg@*/
#define RTC_WTBR_WTBR	(RTC.unWTBR.stcField.u24WTBR)  /*@bf@*/

typedef struct stc_rtc_wtbr_field{
    uint_io32_t		u24WTBR:24;
    uint_io32_t		:8;
}stc_rtc_wtbr_field_t;

typedef union un_rtc_wtbr{
    uint_io32_t		u32Register;
    stc_rtc_wtbr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_wtbr_t;

/* WRT */
#define RTC_WRT	(RTC.unWRT.u32Register)  /*@rg@*/
#define RTC_WRT_WTSR	(RTC.unWRT.stcField.u6WTSR)  /*@bf@*/
#define RTC_WRT_WTMR	(RTC.unWRT.stcField.u6WTMR)  /*@bf@*/
#define RTC_WRT_WTHR	(RTC.unWRT.stcField.u5WTHR)  /*@bf@*/

typedef struct stc_rtc_wrt_field{
    uint_io32_t		u6WTSR:6;
    uint_io32_t		:2;
    uint_io32_t		u6WTMR:6;
    uint_io32_t		:2;
    uint_io32_t		u5WTHR:5;
    uint_io32_t		:11;
}stc_rtc_wrt_field_t;

typedef union un_rtc_wrt{
    uint_io32_t		u32Register;
    stc_rtc_wrt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_wrt_t;

/* RTR1 */
#define RTC_RTR1	(RTC.unRTR1.u32Register)  /*@rg@*/
#define RTC_RTR1_WTDR	(RTC.unRTR1.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_rtc_rtr1_field{
    uint_io32_t		u16WTDR:16;
    uint_io32_t		:16;
}stc_rtc_rtr1_field_t;

typedef union un_rtc_rtr1{
    uint_io32_t		u32Register;
    stc_rtc_rtr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_rtr1_t;

/* CNTCAL */
#define RTC_CNTCAL	(RTC.unCNTCAL.u32Register)  /*@rg@*/
#define RTC_CNTCAL_CNTCAL	(RTC.unCNTCAL.stcField.u24CNTCAL)  /*@bf@*/

typedef struct stc_rtc_cntcal_field{
    uint_io32_t		u24CNTCAL:24;
    uint_io32_t		:8;
}stc_rtc_cntcal_field_t;

typedef union un_rtc_cntcal{
    uint_io32_t		u32Register;
    stc_rtc_cntcal_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_cntcal_t;

/* CNTPCAL */
#define RTC_CNTPCAL	(RTC.unCNTPCAL.u32Register)  /*@rg@*/
#define RTC_CNTPCAL_CNTPCAL	(RTC.unCNTPCAL.stcField.u11CNTPCAL)  /*@bf@*/

typedef struct stc_rtc_cntpcal_field{
    uint_io32_t		u11CNTPCAL:11;
    uint_io32_t		:21;
}stc_rtc_cntpcal_field_t;

typedef union un_rtc_cntpcal{
    uint_io32_t		u32Register;
    stc_rtc_cntpcal_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_cntpcal_t;

/* DURMW */
#define RTC_DURMW	(RTC.unDURMW.u32Register)  /*@rg@*/
#define RTC_DURMW_DURMW	(RTC.unDURMW.stcField.u24DURMW)  /*@bf@*/

typedef struct stc_rtc_durmw_field{
    uint_io32_t		u24DURMW:24;
    uint_io32_t		:8;
}stc_rtc_durmw_field_t;

typedef union un_rtc_durmw{
    uint_io32_t		u32Register;
    stc_rtc_durmw_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_durmw_t;

/* CALTRG */
#define RTC_CALTRG	(RTC.unCALTRG.u32Register)  /*@rg@*/
#define RTC_CALTRG_CALTRG	(RTC.unCALTRG.stcField.u12CALTRG)  /*@bf@*/

typedef struct stc_rtc_caltrg_field{
    uint_io32_t		u12CALTRG:12;
    uint_io32_t		:20;
}stc_rtc_caltrg_field_t;

typedef union un_rtc_caltrg{
    uint_io32_t		u32Register;
    stc_rtc_caltrg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_caltrg_t;

/* DEBUG */
#define RTC_DEBUG	(RTC.unDEBUG.u32Register)  /*@rg@*/
#define RTC_DEBUG_DBGEN	(*(volatile uint_io8_t*)0xB08C0180)  /*@bfbba@*/

typedef struct stc_rtc_debug_field{
    uint_io32_t		u1DBGEN:1;
    uint_io32_t		:31;
}stc_rtc_debug_field_t;

typedef union un_rtc_debug{
    uint_io32_t		u32Register;
    stc_rtc_debug_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_debug_t;

/* PWUTRGCR */
#define RTC_PWUTRGCR	(RTC.unPWUTRGCR.u32Register)  /*@rg@*/
#define RTC_PWUTRGCR_SEL	(RTC.unPWUTRGCR.stcField.u3SEL)  /*@bf@*/
#define RTC_PWUTRGCR_MD	(*(volatile uint_io8_t*)0xB08C01A4)  /*@bfbba@*/
#define RTC_PWUTRGCR_C8MRL	(RTC.unPWUTRGCR.stcField.u18C8MRL)  /*@bf@*/

typedef struct stc_rtc_pwutrgcr_field{
    uint_io32_t		u3SEL:3;
    uint_io32_t		:1;
    uint_io32_t		u1MD:1;
    uint_io32_t		:3;
    uint_io32_t		u18C8MRL:18;
    uint_io32_t		:6;
}stc_rtc_pwutrgcr_field_t;

typedef union un_rtc_pwutrgcr{
    uint_io32_t		u32Register;
    stc_rtc_pwutrgcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_pwutrgcr_t;

/* PWUTRGSR */
#define RTC_PWUTRGSR	(RTC.unPWUTRGSR.u32Register)  /*@rg@*/
#define RTC_PWUTRGSR_BUSY	(*(volatile uint_io8_t*)0xB08C01C0)  /*@bfbba@*/

typedef struct stc_rtc_pwutrgsr_field{
    uint_io32_t		u1BUSY:1;
    uint_io32_t		:31;
}stc_rtc_pwutrgsr_field_t;

typedef union un_rtc_pwutrgsr{
    uint_io32_t		u32Register;
    stc_rtc_pwutrgsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_rtc_pwutrgsr_t;


typedef struct stc_rtc{
    un_rtc_wtcr_t	unWTCR;	/* 0x00000000 */
    un_rtc_wtsr_t	unWTSR;	/* 0x00000004 */
    un_rtc_wins_t	unWINS;	/* 0x00000008 */
    un_rtc_wine_t	unWINE;	/* 0x0000000C */
    un_rtc_winc_t	unWINC;	/* 0x00000010 */
    un_rtc_wtbr_t	unWTBR;	/* 0x00000014 */
    un_rtc_wrt_t	unWRT;	/* 0x00000018 */
    un_rtc_rtr1_t	unRTR1;	/* 0x0000001C */
    un_rtc_cntcal_t	unCNTCAL;	/* 0x00000020 */
    un_rtc_cntpcal_t	unCNTPCAL;	/* 0x00000024 */
    un_rtc_durmw_t	unDURMW;	/* 0x00000028 */
    un_rtc_caltrg_t	unCALTRG;	/* 0x0000002C */
    un_rtc_debug_t	unDEBUG;	/* 0x00000030 */
    un_rtc_pwutrgcr_t	unPWUTRGCR;	/* 0x00000034 */
    un_rtc_pwutrgsr_t	unPWUTRGSR;	/* 0x00000038 */
    uint_io8_t	au8Reserved0[32708];	/* 0x0000003C */
}stc_rtc_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_rtc_t	stcRTC;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


#endif /* __S6J3200_RTC_H */
