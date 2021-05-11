/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_INDPWM_H
#define __S6J3200_INDPWM_H

#include "s6j3200io_basetypes.h"

/* INDPWM base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define INDPWM	stcINDPWM
#else /* __IO_DEFINE */
#define INDPWM	(*((volatile stc_indpwm_t*)0xB0640000))
#endif /* __IO_DEFINE */

/* IPCSR */
#define INDPWM_IPCSR	(INDPWM.unIPCSR.u32Register)  /*@rg@*/
#define INDPWM_IPCSR_IPCSR	(INDPWM.unIPCSR.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_indpwm_ipcsr_field{
    uint_io32_t		u16IPCSR:16;
    uint_io32_t		:16;
}stc_indpwm_ipcsr_field_t;

typedef union un_indpwm_ipcsr{
    uint_io32_t		u32Register;
    stc_indpwm_ipcsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_indpwm_ipcsr_t;

/* IPDUT */
#define INDPWM_IPDUT	(INDPWM.unIPDUT.u32Register)  /*@rg@*/
#define INDPWM_IPDUT_IPDUT	(INDPWM.unIPDUT.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_indpwm_ipdut_field{
    uint_io32_t		u16IPDUT:16;
    uint_io32_t		:16;
}stc_indpwm_ipdut_field_t;

typedef union un_indpwm_ipdut{
    uint_io32_t		u32Register;
    stc_indpwm_ipdut_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_indpwm_ipdut_t;

/* ITMCR */
#define INDPWM_ITMCR	(INDPWM.unITMCR.u32Register)  /*@rg@*/
#define INDPWM_ITMCR_OSEL	(*(volatile uint_io8_t*)0xB0A00063)  /*@bfbba@*/
#define INDPWM_ITMCR_PMSK	(*(volatile uint_io8_t*)0xB0A0006A)  /*@bfbba@*/
#define INDPWM_ITMCR_CKS	(INDPWM.unITMCR.stcField.u3CKS)  /*@bf@*/

typedef struct stc_indpwm_itmcr_field{
    uint_io32_t		:3;
    uint_io32_t		u1OSEL:1;
    uint_io32_t		:6;
    uint_io32_t		u1PMSK:1;
    uint_io32_t		:1;
    uint_io32_t		u3CKS:3;
    uint_io32_t		:17;
}stc_indpwm_itmcr_field_t;

typedef union un_indpwm_itmcr{
    uint_io32_t		u32Register;
    stc_indpwm_itmcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_indpwm_itmcr_t;

/* ICNTCR */
#define INDPWM_ICNTCR	(INDPWM.unICNTCR.u32Register)  /*@rg@*/
#define INDPWM_ICNTCR_STRG	(*(volatile uint_io8_t*)0xB0A00080)  /*@bfbba@*/
#define INDPWM_ICNTCR_CTEN	(*(volatile uint_io8_t*)0xB0A00081)  /*@bfbba@*/
#define INDPWM_ICNTCR_DOP	(*(volatile uint_io8_t*)0xB0A00087)  /*@bfbba@*/

typedef struct stc_indpwm_icntcr_field{
    uint_io32_t		u1STRG:1;
    uint_io32_t		u1CTEN:1;
    uint_io32_t		:5;
    uint_io32_t		u1DOP:1;
    uint_io32_t		:24;
}stc_indpwm_icntcr_field_t;

typedef union un_indpwm_icntcr{
    uint_io32_t		u32Register;
    stc_indpwm_icntcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_indpwm_icntcr_t;

/* ISTC */
#define INDPWM_ISTC	(INDPWM.unISTC.u32Register)  /*@rg@*/
#define INDPWM_ISTC_UDIR	(*(volatile uint_io8_t*)0xB0A000A0)  /*@bfbba@*/
#define INDPWM_ISTC_DTIR	(*(volatile uint_io8_t*)0xB0A000A1)  /*@bfbba@*/
#define INDPWM_ISTC_UDIE	(*(volatile uint_io8_t*)0xB0A000A4)  /*@bfbba@*/
#define INDPWM_ISTC_DTIE	(*(volatile uint_io8_t*)0xB0A000A5)  /*@bfbba@*/

typedef struct stc_indpwm_istc_field{
    uint_io32_t		u1UDIR:1;
    uint_io32_t		u1DTIR:1;
    uint_io32_t		:2;
    uint_io32_t		u1UDIE:1;
    uint_io32_t		u1DTIE:1;
    uint_io32_t		:26;
}stc_indpwm_istc_field_t;

typedef union un_indpwm_istc{
    uint_io32_t		u32Register;
    stc_indpwm_istc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_indpwm_istc_t;

/* ISTCC */
#define INDPWM_ISTCC	(INDPWM.unISTCC.u32Register)  /*@rg@*/
#define INDPWM_ISTCC_UDIRC	(*(volatile uint_io8_t*)0xB0A000C0)  /*@bfbba@*/
#define INDPWM_ISTCC_DTIRC	(*(volatile uint_io8_t*)0xB0A000C1)  /*@bfbba@*/
#define INDPWM_ISTCC_UDIEC	(*(volatile uint_io8_t*)0xB0A000C4)  /*@bfbba@*/
#define INDPWM_ISTCC_DTIEC	(*(volatile uint_io8_t*)0xB0A000C5)  /*@bfbba@*/

typedef struct stc_indpwm_istcc_field{
    uint_io32_t		u1UDIRC:1;
    uint_io32_t		u1DTIRC:1;
    uint_io32_t		:2;
    uint_io32_t		u1UDIEC:1;
    uint_io32_t		u1DTIEC:1;
    uint_io32_t		:26;
}stc_indpwm_istcc_field_t;

typedef union un_indpwm_istcc{
    uint_io32_t		u32Register;
    stc_indpwm_istcc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_indpwm_istcc_t;

/* ISTCS */
#define INDPWM_ISTCS	(INDPWM.unISTCS.u32Register)  /*@rg@*/
#define INDPWM_ISTCS_UDIES	(*(volatile uint_io8_t*)0xB0A000E4)  /*@bfbba@*/
#define INDPWM_ISTCS_DTIES	(*(volatile uint_io8_t*)0xB0A000E5)  /*@bfbba@*/

typedef struct stc_indpwm_istcs_field{
    uint_io32_t		:4;
    uint_io32_t		u1UDIES:1;
    uint_io32_t		u1DTIES:1;
    uint_io32_t		:26;
}stc_indpwm_istcs_field_t;

typedef union un_indpwm_istcs{
    uint_io32_t		u32Register;
    stc_indpwm_istcs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_indpwm_istcs_t;


typedef struct stc_indpwm{
    un_indpwm_ipcsr_t	unIPCSR;	/* 0x00000000 */
    un_indpwm_ipdut_t	unIPDUT;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000008 */
    un_indpwm_itmcr_t	unITMCR;	/* 0x0000000C */
    un_indpwm_icntcr_t	unICNTCR;	/* 0x00000010 */
    un_indpwm_istc_t	unISTC;	/* 0x00000014 */
    un_indpwm_istcc_t	unISTCC;	/* 0x00000018 */
    un_indpwm_istcs_t	unISTCS;	/* 0x0000001C */
    uint_io8_t	au8Reserved1[4064];	/* 0x00000020 */
}stc_indpwm_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_indpwm_t	stcINDPWM;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 4096(0x1000) bytes */


#endif /* __S6J3200_INDPWM_H */
