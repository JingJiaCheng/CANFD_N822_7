/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_HWDG_H
#define __S6J3200_HWDG_H

#include "s6j3200io_basetypes.h"

/* HWDG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define HWDG	stcHWDG
#else /* __IO_DEFINE */
#define HWDG	(*((volatile stc_hwdg_t*)0xB060C000))
#endif /* __IO_DEFINE */

/* PROT */
#define HWDG_PROT	(HWDG.unPROT.u32Register)  /*@rg@*/
#define HWDG_PROT_KEY	HWDG_PROT  /*@bfrg@*/

typedef union un_hwdg_prot{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_prot_t;

/* CNT */
#define HWDG_CNT	(HWDG.unCNT.u32Register)  /*@rg@*/
#define HWDG_CNT_WDGCNT	HWDG_CNT  /*@bfrg@*/

typedef union un_hwdg_cnt{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_cnt_t;

/* RSTCAUSE */
#define HWDG_RSTCAUSE	(HWDG.unRSTCAUSE.u32Register)  /*@rg@*/
#define HWDG_RSTCAUSE_RSTCAUSE0	(*(volatile uint_io8_t*)0xB0860060)  /*@bfbba@*/
#define HWDG_RSTCAUSE_RSTCAUSE1	(*(volatile uint_io8_t*)0xB0860061)  /*@bfbba@*/
#define HWDG_RSTCAUSE_RSTCAUSE2	(*(volatile uint_io8_t*)0xB0860062)  /*@bfbba@*/
#define HWDG_RSTCAUSE_RSTCAUSE3	(*(volatile uint_io8_t*)0xB0860063)  /*@bfbba@*/
#define HWDG_RSTCAUSE_RSTCAUSE4	(*(volatile uint_io8_t*)0xB0860064)  /*@bfbba@*/

typedef struct stc_hwdg_rstcause_field{
    uint_io32_t		u1RSTCAUSE0:1;
    uint_io32_t		u1RSTCAUSE1:1;
    uint_io32_t		u1RSTCAUSE2:1;
    uint_io32_t		u1RSTCAUSE3:1;
    uint_io32_t		u1RSTCAUSE4:1;
    uint_io32_t		:27;
}stc_hwdg_rstcause_field_t;

typedef union un_hwdg_rstcause{
    uint_io32_t		u32Register;
    stc_hwdg_rstcause_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_rstcause_t;

/* TRG0 */
#define HWDG_TRG0	(HWDG.unTRG0.u32Register)  /*@rg@*/
#define HWDG_TRG0_WDGTRG0	(HWDG.unTRG0.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_hwdg_trg0_field{
    uint_io32_t		u8WDGTRG0:8;
    uint_io32_t		:24;
}stc_hwdg_trg0_field_t;

typedef union un_hwdg_trg0{
    uint_io32_t		u32Register;
    stc_hwdg_trg0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_trg0_t;

/* TRG1 */
#define HWDG_TRG1	(HWDG.unTRG1.u32Register)  /*@rg@*/
#define HWDG_TRG1_WDGTRG1	(HWDG.unTRG1.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_hwdg_trg1_field{
    uint_io32_t		u8WDGTRG1:8;
    uint_io32_t		:24;
}stc_hwdg_trg1_field_t;

typedef union un_hwdg_trg1{
    uint_io32_t		u32Register;
    stc_hwdg_trg1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_trg1_t;

/* INT */
#define HWDG_INT	(HWDG.unINT.u32Register)  /*@rg@*/
#define HWDG_INT_IRQFLAG	(*(volatile uint_io8_t*)0xB0860100)  /*@bfbba@*/
#define HWDG_INT_NMIFLAG	(*(volatile uint_io8_t*)0xB0860101)  /*@bfbba@*/
#define HWDG_INT_IRQEN	(*(volatile uint_io8_t*)0xB0860110)  /*@bfbba@*/
#define HWDG_INT_RSTEN	(*(volatile uint_io8_t*)0xB0860111)  /*@bfbba@*/

typedef struct stc_hwdg_int_field{
    uint_io32_t		u1IRQFLAG:1;
    uint_io32_t		u1NMIFLAG:1;
    uint_io32_t		:14;
    uint_io32_t		u1IRQEN:1;
    uint_io32_t		u1RSTEN:1;
    uint_io32_t		:14;
}stc_hwdg_int_field_t;

typedef union un_hwdg_int{
    uint_io32_t		u32Register;
    stc_hwdg_int_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_int_t;

/* INTCLR */
#define HWDG_INTCLR	(HWDG.unINTCLR.u32Register)  /*@rg@*/
#define HWDG_INTCLR_IRQCLR	(*(volatile uint_io8_t*)0xB0860120)  /*@bfbba@*/
#define HWDG_INTCLR_NMICLR	(*(volatile uint_io8_t*)0xB0860121)  /*@bfbba@*/

typedef struct stc_hwdg_intclr_field{
    uint_io32_t		u1IRQCLR:1;
    uint_io32_t		u1NMICLR:1;
    uint_io32_t		:30;
}stc_hwdg_intclr_field_t;

typedef union un_hwdg_intclr{
    uint_io32_t		u32Register;
    stc_hwdg_intclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_intclr_t;

/* TRG0CFG */
#define HWDG_TRG0CFG	(HWDG.unTRG0CFG.u32Register)  /*@rg@*/
#define HWDG_TRG0CFG_WDGTRG0CFG	(HWDG.unTRG0CFG.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_hwdg_trg0cfg_field{
    uint_io32_t		u8WDGTRG0CFG:8;
    uint_io32_t		:24;
}stc_hwdg_trg0cfg_field_t;

typedef union un_hwdg_trg0cfg{
    uint_io32_t		u32Register;
    stc_hwdg_trg0cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_trg0cfg_t;

/* TRG1CFG */
#define HWDG_TRG1CFG	(HWDG.unTRG1CFG.u32Register)  /*@rg@*/
#define HWDG_TRG1CFG_WDGTRG1CFG	(HWDG.unTRG1CFG.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_hwdg_trg1cfg_field{
    uint_io32_t		u8WDGTRG1CFG:8;
    uint_io32_t		:24;
}stc_hwdg_trg1cfg_field_t;

typedef union un_hwdg_trg1cfg{
    uint_io32_t		u32Register;
    stc_hwdg_trg1cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_trg1cfg_t;

/* RUNLLS */
#define HWDG_RUNLLS	(HWDG.unRUNLLS.u32Register)  /*@rg@*/
#define HWDG_RUNLLS_WDGRUNLLS	HWDG_RUNLLS  /*@bfrg@*/

typedef union un_hwdg_runlls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_runlls_t;

/* RUNULS */
#define HWDG_RUNULS	(HWDG.unRUNULS.u32Register)  /*@rg@*/
#define HWDG_RUNULS_WDGRUNULS	HWDG_RUNULS  /*@bfrg@*/

typedef union un_hwdg_runuls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_runuls_t;

/* PSSLLS */
#define HWDG_PSSLLS	(HWDG.unPSSLLS.u32Register)  /*@rg@*/
#define HWDG_PSSLLS_WDGPSSLLS	HWDG_PSSLLS  /*@bfrg@*/

typedef union un_hwdg_psslls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_psslls_t;

/* PSSULS */
#define HWDG_PSSULS	(HWDG.unPSSULS.u32Register)  /*@rg@*/
#define HWDG_PSSULS_WDGPSSULS	HWDG_PSSULS  /*@bfrg@*/

typedef union un_hwdg_pssuls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_pssuls_t;

/* RSTDLY */
#define HWDG_RSTDLY	(HWDG.unRSTDLY.u32Register)  /*@rg@*/
#define HWDG_RSTDLY_WDGRSTDLY	(HWDG.unRSTDLY.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_hwdg_rstdly_field{
    uint_io32_t		u16WDGRSTDLY:16;
    uint_io32_t		:16;
}stc_hwdg_rstdly_field_t;

typedef union un_hwdg_rstdly{
    uint_io32_t		u32Register;
    stc_hwdg_rstdly_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_rstdly_t;

/* CFG */
#define HWDG_CFG	(HWDG.unCFG.u32Register)  /*@rg@*/
#define HWDG_CFG_WDENRUN	(*(volatile uint_io8_t*)0xB0860240)  /*@bfbba@*/
#define HWDG_CFG_WDENPSS	(*(volatile uint_io8_t*)0xB0860241)  /*@bfbba@*/
#define HWDG_CFG_ALLOWSTOPCLK	(*(volatile uint_io8_t*)0xB0860242)  /*@bfbba@*/
#define HWDG_CFG_CLKSEL	(HWDG.unCFG.stcField.u2CLKSEL)  /*@bf@*/
#define HWDG_CFG_OBSSEL	(HWDG.unCFG.stcField.u5OBSSEL)  /*@bf@*/
#define HWDG_CFG_LOCK	(*(volatile uint_io8_t*)0xB0860258)  /*@bfbba@*/

typedef struct stc_hwdg_cfg_field{
    uint_io32_t		u1WDENRUN:1;
    uint_io32_t		u1WDENPSS:1;
    uint_io32_t		u1ALLOWSTOPCLK:1;
    uint_io32_t		:5;
    uint_io32_t		u2CLKSEL:2;
    uint_io32_t		:6;
    uint_io32_t		u5OBSSEL:5;
    uint_io32_t		:3;
    uint_io32_t		u1LOCK:1;
    uint_io32_t		:7;
}stc_hwdg_cfg_field_t;

typedef union un_hwdg_cfg{
    uint_io32_t		u32Register;
    stc_hwdg_cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_cfg_t;

/* RUNLLC */
#define HWDG_RUNLLC	(HWDG.unRUNLLC.u32Register)  /*@rg@*/
#define HWDG_RUNLLC_WDGRUNLLC	HWDG_RUNLLC  /*@bfrg@*/

typedef union un_hwdg_runllc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_runllc_t;

/* RUNULC */
#define HWDG_RUNULC	(HWDG.unRUNULC.u32Register)  /*@rg@*/
#define HWDG_RUNULC_WDGRUNULC	HWDG_RUNULC  /*@bfrg@*/

typedef union un_hwdg_runulc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_runulc_t;

/* PSSLLC */
#define HWDG_PSSLLC	(HWDG.unPSSLLC.u32Register)  /*@rg@*/
#define HWDG_PSSLLC_WDGPSSLLC	HWDG_PSSLLC  /*@bfrg@*/

typedef union un_hwdg_pssllc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_pssllc_t;

/* PSSULC */
#define HWDG_PSSULC	(HWDG.unPSSULC.u32Register)  /*@rg@*/
#define HWDG_PSSULC_WDGPSSULC	HWDG_PSSULC  /*@bfrg@*/

typedef union un_hwdg_pssulc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_hwdg_pssulc_t;


typedef struct stc_hwdg{
    un_hwdg_prot_t	unPROT;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000004 */
    un_hwdg_cnt_t	unCNT;	/* 0x00000008 */
    un_hwdg_rstcause_t	unRSTCAUSE;	/* 0x0000000C */
    un_hwdg_trg0_t	unTRG0;	/* 0x00000010 */
    uint_io8_t	au8Reserved1[4];	/* 0x00000014 */
    un_hwdg_trg1_t	unTRG1;	/* 0x00000018 */
    uint_io8_t	au8Reserved2[4];	/* 0x0000001C */
    un_hwdg_int_t	unINT;	/* 0x00000020 */
    un_hwdg_intclr_t	unINTCLR;	/* 0x00000024 */
    uint_io8_t	au8Reserved3[4];	/* 0x00000028 */
    un_hwdg_trg0cfg_t	unTRG0CFG;	/* 0x0000002C */
    un_hwdg_trg1cfg_t	unTRG1CFG;	/* 0x00000030 */
    un_hwdg_runlls_t	unRUNLLS;	/* 0x00000034 */
    un_hwdg_runuls_t	unRUNULS;	/* 0x00000038 */
    un_hwdg_psslls_t	unPSSLLS;	/* 0x0000003C */
    un_hwdg_pssuls_t	unPSSULS;	/* 0x00000040 */
    un_hwdg_rstdly_t	unRSTDLY;	/* 0x00000044 */
    un_hwdg_cfg_t	unCFG;	/* 0x00000048 */
    un_hwdg_runllc_t	unRUNLLC;	/* 0x0000004C */
    un_hwdg_runulc_t	unRUNULC;	/* 0x00000050 */
    un_hwdg_pssllc_t	unPSSLLC;	/* 0x00000054 */
    un_hwdg_pssulc_t	unPSSULC;	/* 0x00000058 */
    uint_io8_t	au8Reserved4[16292];	/* 0x0000005C */
}stc_hwdg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_hwdg_t	stcHWDG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 16384(0x4000) bytes */


#endif /* __S6J3200_HWDG_H */
