/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SWDG_H
#define __S6J3200_SWDG_H

#include "s6j3200io_basetypes.h"

/* SWDG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SWDG	stcSWDG
#else /* __IO_DEFINE */
#define SWDG	(*((volatile stc_swdg_t*)0xB0308000))
#endif /* __IO_DEFINE */

/* PROT */
#define SWDG_PROT	(SWDG.unPROT.u32Register)  /*@rg@*/
#define SWDG_PROT_KEY	SWDG_PROT  /*@bfrg@*/

typedef union un_swdg_prot{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_prot_t;

/* CNT */
#define SWDG_CNT	(SWDG.unCNT.u32Register)  /*@rg@*/
#define SWDG_CNT_WDGCNT	SWDG_CNT  /*@bfrg@*/

typedef union un_swdg_cnt{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_cnt_t;

/* RSTCAUSE */
#define SWDG_RSTCAUSE	(SWDG.unRSTCAUSE.u32Register)  /*@rg@*/
#define SWDG_RSTCAUSE_RSTCAUSE0	(*(volatile uint_io8_t*)0xB1040060)  /*@bfbba@*/
#define SWDG_RSTCAUSE_RSTCAUSE1	(*(volatile uint_io8_t*)0xB1040061)  /*@bfbba@*/
#define SWDG_RSTCAUSE_RSTCAUSE2	(*(volatile uint_io8_t*)0xB1040062)  /*@bfbba@*/
#define SWDG_RSTCAUSE_RSTCAUSE3	(*(volatile uint_io8_t*)0xB1040063)  /*@bfbba@*/
#define SWDG_RSTCAUSE_RSTCAUSE4	(*(volatile uint_io8_t*)0xB1040064)  /*@bfbba@*/

typedef struct stc_swdg_rstcause_field{
    uint_io32_t		u1RSTCAUSE0:1;
    uint_io32_t		u1RSTCAUSE1:1;
    uint_io32_t		u1RSTCAUSE2:1;
    uint_io32_t		u1RSTCAUSE3:1;
    uint_io32_t		u1RSTCAUSE4:1;
    uint_io32_t		:27;
}stc_swdg_rstcause_field_t;

typedef union un_swdg_rstcause{
    uint_io32_t		u32Register;
    stc_swdg_rstcause_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_rstcause_t;

/* TRG0 */
#define SWDG_TRG0	(SWDG.unTRG0.u32Register)  /*@rg@*/
#define SWDG_TRG0_WDGTRG0	(SWDG.unTRG0.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_swdg_trg0_field{
    uint_io32_t		u8WDGTRG0:8;
    uint_io32_t		:24;
}stc_swdg_trg0_field_t;

typedef union un_swdg_trg0{
    uint_io32_t		u32Register;
    stc_swdg_trg0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_trg0_t;

/* TRG1 */
#define SWDG_TRG1	(SWDG.unTRG1.u32Register)  /*@rg@*/
#define SWDG_TRG1_WDGTRG1	(SWDG.unTRG1.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_swdg_trg1_field{
    uint_io32_t		u8WDGTRG1:8;
    uint_io32_t		:24;
}stc_swdg_trg1_field_t;

typedef union un_swdg_trg1{
    uint_io32_t		u32Register;
    stc_swdg_trg1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_trg1_t;

/* INT */
#define SWDG_INT	(SWDG.unINT.u32Register)  /*@rg@*/
#define SWDG_INT_IRQFLAG	(*(volatile uint_io8_t*)0xB1040100)  /*@bfbba@*/
#define SWDG_INT_NMIFLAG	(*(volatile uint_io8_t*)0xB1040101)  /*@bfbba@*/
#define SWDG_INT_IRQEN	(*(volatile uint_io8_t*)0xB1040110)  /*@bfbba@*/
#define SWDG_INT_RSTEN	(*(volatile uint_io8_t*)0xB1040111)  /*@bfbba@*/

typedef struct stc_swdg_int_field{
    uint_io32_t		u1IRQFLAG:1;
    uint_io32_t		u1NMIFLAG:1;
    uint_io32_t		:14;
    uint_io32_t		u1IRQEN:1;
    uint_io32_t		u1RSTEN:1;
    uint_io32_t		:14;
}stc_swdg_int_field_t;

typedef union un_swdg_int{
    uint_io32_t		u32Register;
    stc_swdg_int_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_int_t;

/* INTCLR */
#define SWDG_INTCLR	(SWDG.unINTCLR.u32Register)  /*@rg@*/
#define SWDG_INTCLR_IRQCLR	(*(volatile uint_io8_t*)0xB1040120)  /*@bfbba@*/
#define SWDG_INTCLR_NMICLR	(*(volatile uint_io8_t*)0xB1040121)  /*@bfbba@*/

typedef struct stc_swdg_intclr_field{
    uint_io32_t		u1IRQCLR:1;
    uint_io32_t		u1NMICLR:1;
    uint_io32_t		:30;
}stc_swdg_intclr_field_t;

typedef union un_swdg_intclr{
    uint_io32_t		u32Register;
    stc_swdg_intclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_intclr_t;

/* TRG0CFG */
#define SWDG_TRG0CFG	(SWDG.unTRG0CFG.u32Register)  /*@rg@*/
#define SWDG_TRG0CFG_WDGTRG0CFG	(SWDG.unTRG0CFG.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_swdg_trg0cfg_field{
    uint_io32_t		u8WDGTRG0CFG:8;
    uint_io32_t		:24;
}stc_swdg_trg0cfg_field_t;

typedef union un_swdg_trg0cfg{
    uint_io32_t		u32Register;
    stc_swdg_trg0cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_trg0cfg_t;

/* TRG1CFG */
#define SWDG_TRG1CFG	(SWDG.unTRG1CFG.u32Register)  /*@rg@*/
#define SWDG_TRG1CFG_WDGTRG1CFG	(SWDG.unTRG1CFG.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_swdg_trg1cfg_field{
    uint_io32_t		u8WDGTRG1CFG:8;
    uint_io32_t		:24;
}stc_swdg_trg1cfg_field_t;

typedef union un_swdg_trg1cfg{
    uint_io32_t		u32Register;
    stc_swdg_trg1cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_trg1cfg_t;

/* RUNLLS */
#define SWDG_RUNLLS	(SWDG.unRUNLLS.u32Register)  /*@rg@*/
#define SWDG_RUNLLS_WDGRUNLLS	SWDG_RUNLLS  /*@bfrg@*/

typedef union un_swdg_runlls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_runlls_t;

/* RUNULS */
#define SWDG_RUNULS	(SWDG.unRUNULS.u32Register)  /*@rg@*/
#define SWDG_RUNULS_WDGRUNULS	SWDG_RUNULS  /*@bfrg@*/

typedef union un_swdg_runuls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_runuls_t;

/* PSSLLS */
#define SWDG_PSSLLS	(SWDG.unPSSLLS.u32Register)  /*@rg@*/
#define SWDG_PSSLLS_WDGPSSLLS	SWDG_PSSLLS  /*@bfrg@*/

typedef union un_swdg_psslls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_psslls_t;

/* PSSULS */
#define SWDG_PSSULS	(SWDG.unPSSULS.u32Register)  /*@rg@*/
#define SWDG_PSSULS_WDGPSSULS	SWDG_PSSULS  /*@bfrg@*/

typedef union un_swdg_pssuls{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_pssuls_t;

/* RSTDLY */
#define SWDG_RSTDLY	(SWDG.unRSTDLY.u32Register)  /*@rg@*/
#define SWDG_RSTDLY_WDGRSTDLY	(SWDG.unRSTDLY.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_swdg_rstdly_field{
    uint_io32_t		u16WDGRSTDLY:16;
    uint_io32_t		:16;
}stc_swdg_rstdly_field_t;

typedef union un_swdg_rstdly{
    uint_io32_t		u32Register;
    stc_swdg_rstdly_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_rstdly_t;

/* CFG */
#define SWDG_CFG	(SWDG.unCFG.u32Register)  /*@rg@*/
#define SWDG_CFG_WDENRUN	(*(volatile uint_io8_t*)0xB1040240)  /*@bfbba@*/
#define SWDG_CFG_WDENPSS	(*(volatile uint_io8_t*)0xB1040241)  /*@bfbba@*/
#define SWDG_CFG_ALLOWSTOPCLK	(*(volatile uint_io8_t*)0xB1040242)  /*@bfbba@*/
#define SWDG_CFG_CLKSEL	(SWDG.unCFG.stcField.u2CLKSEL)  /*@bf@*/
#define SWDG_CFG_OBSSEL	(SWDG.unCFG.stcField.u5OBSSEL)  /*@bf@*/
#define SWDG_CFG_LOCK	(*(volatile uint_io8_t*)0xB1040258)  /*@bfbba@*/

typedef struct stc_swdg_cfg_field{
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
}stc_swdg_cfg_field_t;

typedef union un_swdg_cfg{
    uint_io32_t		u32Register;
    stc_swdg_cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_cfg_t;

/* RUNLLC */
#define SWDG_RUNLLC	(SWDG.unRUNLLC.u32Register)  /*@rg@*/
#define SWDG_RUNLLC_WDGRUNLLC	SWDG_RUNLLC  /*@bfrg@*/

typedef union un_swdg_runllc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_runllc_t;

/* RUNULC */
#define SWDG_RUNULC	(SWDG.unRUNULC.u32Register)  /*@rg@*/
#define SWDG_RUNULC_WDGRUNULC	SWDG_RUNULC  /*@bfrg@*/

typedef union un_swdg_runulc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_runulc_t;

/* PSSLLC */
#define SWDG_PSSLLC	(SWDG.unPSSLLC.u32Register)  /*@rg@*/
#define SWDG_PSSLLC_WDGPSSLLC	SWDG_PSSLLC  /*@bfrg@*/

typedef union un_swdg_pssllc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_pssllc_t;

/* PSSULC */
#define SWDG_PSSULC	(SWDG.unPSSULC.u32Register)  /*@rg@*/
#define SWDG_PSSULC_WDGPSSULC	SWDG_PSSULC  /*@bfrg@*/

typedef union un_swdg_pssulc{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swdg_pssulc_t;


typedef struct stc_swdg{
    un_swdg_prot_t	unPROT;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000004 */
    un_swdg_cnt_t	unCNT;	/* 0x00000008 */
    un_swdg_rstcause_t	unRSTCAUSE;	/* 0x0000000C */
    un_swdg_trg0_t	unTRG0;	/* 0x00000010 */
    uint_io8_t	au8Reserved1[4];	/* 0x00000014 */
    un_swdg_trg1_t	unTRG1;	/* 0x00000018 */
    uint_io8_t	au8Reserved2[4];	/* 0x0000001C */
    un_swdg_int_t	unINT;	/* 0x00000020 */
    un_swdg_intclr_t	unINTCLR;	/* 0x00000024 */
    uint_io8_t	au8Reserved3[4];	/* 0x00000028 */
    un_swdg_trg0cfg_t	unTRG0CFG;	/* 0x0000002C */
    un_swdg_trg1cfg_t	unTRG1CFG;	/* 0x00000030 */
    un_swdg_runlls_t	unRUNLLS;	/* 0x00000034 */
    un_swdg_runuls_t	unRUNULS;	/* 0x00000038 */
    un_swdg_psslls_t	unPSSLLS;	/* 0x0000003C */
    un_swdg_pssuls_t	unPSSULS;	/* 0x00000040 */
    un_swdg_rstdly_t	unRSTDLY;	/* 0x00000044 */
    un_swdg_cfg_t	unCFG;	/* 0x00000048 */
    un_swdg_runllc_t	unRUNLLC;	/* 0x0000004C */
    un_swdg_runulc_t	unRUNULC;	/* 0x00000050 */
    un_swdg_pssllc_t	unPSSLLC;	/* 0x00000054 */
    un_swdg_pssulc_t	unPSSULC;	/* 0x00000058 */
    uint_io8_t	au8Reserved4[1015716];	/* 0x0000005C */
}stc_swdg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_swdg_t	stcSWDG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1015808(0xf8000) bytes */


#endif /* __S6J3200_SWDG_H */
