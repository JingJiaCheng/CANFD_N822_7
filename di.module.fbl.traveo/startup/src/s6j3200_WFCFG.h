/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_WFCFG_H
#define __S6J3200_WFCFG_H

#include "s6j3200io_basetypes.h"

/* WFCFG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define WFCFG	stcWFCFG
#else /* __IO_DEFINE */
#define WFCFG	(*((volatile stc_wfcfg_t*)0xB0412000))
#endif /* __IO_DEFINE */

/* CPR */
#define WFCFG_CPR	(WFCFG.unCPR.u32Register)  /*@rg@*/
#define WFCFG_CPR_CPR	WFCFG_CPR  /*@bfrg@*/

typedef union un_wfcfg_cpr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_cpr_t;

/* CR */
#define WFCFG_CR	(WFCFG.unCR.u32Register)  /*@rg@*/
#define WFCFG_CR_WE	(*(volatile uint_io8_t*)0xB1190048)  /*@bfbba@*/
#define WFCFG_CR_SWFRST	(*(volatile uint_io8_t*)0xB1190050)  /*@bfbba@*/

typedef struct stc_wfcfg_cr_field{
    uint_io32_t		:8;
    uint_io32_t		u1WE:1;
    uint_io32_t		:7;
    uint_io32_t		u1SWFRST:1;
    uint_io32_t		:15;
}stc_wfcfg_cr_field_t;

typedef union un_wfcfg_cr{
    uint_io32_t		u32Register;
    stc_wfcfg_cr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_cr_t;

/* ECR */
#define WFCFG_ECR	(WFCFG.unECR.u32Register)  /*@rg@*/
#define WFCFG_ECR_ECCOFF	(*(volatile uint_io8_t*)0xB1190060)  /*@bfbba@*/

typedef struct stc_wfcfg_ecr_field{
    uint_io32_t		u1ECCOFF:1;
    uint_io32_t		:31;
}stc_wfcfg_ecr_field_t;

typedef union un_wfcfg_ecr{
    uint_io32_t		u32Register;
    stc_wfcfg_ecr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_ecr_t;

/* WCR */
#define WFCFG_WCR	(WFCFG.unWCR.u32Register)  /*@rg@*/
#define WFCFG_WCR_DMAEN	(*(volatile uint_io8_t*)0xB1190080)  /*@bfbba@*/

typedef struct stc_wfcfg_wcr_field{
    uint_io32_t		u1DMAEN:1;
    uint_io32_t		:31;
}stc_wfcfg_wcr_field_t;

typedef union un_wfcfg_wcr{
    uint_io32_t		u32Register;
    stc_wfcfg_wcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_wcr_t;

/* WSR */
#define WFCFG_WSR	(WFCFG.unWSR.u32Register)  /*@rg@*/
#define WFCFG_WSR_ST	(WFCFG.unWSR.stcField.u2ST)  /*@bf@*/

typedef struct stc_wfcfg_wsr_field{
    uint_io32_t		u2ST:2;
    uint_io32_t		:30;
}stc_wfcfg_wsr_field_t;

typedef union un_wfcfg_wsr{
    uint_io32_t		u32Register;
    stc_wfcfg_wsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_wsr_t;

/* EEIR */
#define WFCFG_EEIR	(WFCFG.unEEIR.u32Register)  /*@rg@*/
#define WFCFG_EEIR_EEIR	(WFCFG.unEEIR.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_wfcfg_eeir_field{
    uint_io32_t		u8EEIR:8;
    uint_io32_t		:24;
}stc_wfcfg_eeir_field_t;

typedef union un_wfcfg_eeir{
    uint_io32_t		u32Register;
    stc_wfcfg_eeir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_eeir_t;

/* ICR */
#define WFCFG_ICR	(WFCFG.unICR.u32Register)  /*@rg@*/
#define WFCFG_ICR_RDYIE	(*(volatile uint_io8_t*)0xB1190120)  /*@bfbba@*/
#define WFCFG_ICR_HANGIE	(*(volatile uint_io8_t*)0xB1190121)  /*@bfbba@*/
#define WFCFG_ICR_RDYIC	(*(volatile uint_io8_t*)0xB1190128)  /*@bfbba@*/
#define WFCFG_ICR_HANGIC	(*(volatile uint_io8_t*)0xB1190129)  /*@bfbba@*/

typedef struct stc_wfcfg_icr_field{
    uint_io32_t		u1RDYIE:1;
    uint_io32_t		u1HANGIE:1;
    uint_io32_t		:6;
    uint_io32_t		u1RDYIC:1;
    uint_io32_t		u1HANGIC:1;
    uint_io32_t		:22;
}stc_wfcfg_icr_field_t;

typedef union un_wfcfg_icr{
    uint_io32_t		u32Register;
    stc_wfcfg_icr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_icr_t;

/* SR */
#define WFCFG_SR	(WFCFG.unSR.u32Register)  /*@rg@*/
#define WFCFG_SR_RDY	(*(volatile uint_io8_t*)0xB1190140)  /*@bfbba@*/
#define WFCFG_SR_SERS	(*(volatile uint_io8_t*)0xB1190143)  /*@bfbba@*/
#define WFCFG_SR_ESPS	(*(volatile uint_io8_t*)0xB1190145)  /*@bfbba@*/
#define WFCFG_SR_RDYINT	(*(volatile uint_io8_t*)0xB1190148)  /*@bfbba@*/
#define WFCFG_SR_HANGINT	(*(volatile uint_io8_t*)0xB1190149)  /*@bfbba@*/
#define WFCFG_SR_WERINT	(*(volatile uint_io8_t*)0xB119014C)  /*@bfbba@*/

typedef struct stc_wfcfg_sr_field{
    uint_io32_t		u1RDY:1;
    uint_io32_t		:2;
    uint_io32_t		u1SERS:1;
    uint_io32_t		:1;
    uint_io32_t		u1ESPS:1;
    uint_io32_t		:2;
    uint_io32_t		u1RDYINT:1;
    uint_io32_t		u1HANGINT:1;
    uint_io32_t		:2;
    uint_io32_t		u1WERINT:1;
    uint_io32_t		:19;
}stc_wfcfg_sr_field_t;

typedef union un_wfcfg_sr{
    uint_io32_t		u32Register;
    stc_wfcfg_sr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_sr_t;

/* SECIR */
#define WFCFG_SECIR	(WFCFG.unSECIR.u32Register)  /*@rg@*/
#define WFCFG_SECIR_SECIE	(*(volatile uint_io8_t*)0xB1190160)  /*@bfbba@*/
#define WFCFG_SECIR_SECIC	(*(volatile uint_io8_t*)0xB1190168)  /*@bfbba@*/
#define WFCFG_SECIR_SECINT	(*(volatile uint_io8_t*)0xB1190170)  /*@bfbba@*/
#define WFCFG_SECIR_SYN	(WFCFG.unSECIR.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_wfcfg_secir_field{
    uint_io32_t		u1SECIE:1;
    uint_io32_t		:7;
    uint_io32_t		u1SECIC:1;
    uint_io32_t		:7;
    uint_io32_t		u1SECINT:1;
    uint_io32_t		:7;
    uint_io32_t		u8SYN:8;
}stc_wfcfg_secir_field_t;

typedef union un_wfcfg_secir{
    uint_io32_t		u32Register;
    stc_wfcfg_secir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_secir_t;

/* EEAR */
#define WFCFG_EEAR	(WFCFG.unEEAR.u32Register)  /*@rg@*/
#define WFCFG_EEAR_EEAR	WFCFG_EEAR  /*@bfrg@*/

typedef union un_wfcfg_eear{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_eear_t;

/* EMENR */
#define WFCFG_EMENR	(WFCFG.unEMENR.u32Register)  /*@rg@*/
#define WFCFG_EMENR_AEE	(*(volatile uint_io8_t*)0xB11901C8)  /*@bfbba@*/

typedef struct stc_wfcfg_emenr_field{
    uint_io32_t		:8;
    uint_io32_t		u1AEE:1;
    uint_io32_t		:23;
}stc_wfcfg_emenr_field_t;

typedef union un_wfcfg_emenr{
    uint_io32_t		u32Register;
    stc_wfcfg_emenr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_emenr_t;

/* SEQCM */
#define WFCFG_SEQCM	(WFCFG.unSEQCM.u32Register)  /*@rg@*/
#define WFCFG_SEQCM_OPC	(WFCFG.unSEQCM.stcField.u2OPC)  /*@bf@*/
#define WFCFG_SEQCM_ERS	(WFCFG.unSEQCM.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_wfcfg_seqcm_field{
    uint_io32_t		u2OPC:2;
    uint_io32_t		:14;
    uint_io32_t		u8ERS:8;
    uint_io32_t		:8;
}stc_wfcfg_seqcm_field_t;

typedef union un_wfcfg_seqcm{
    uint_io32_t		u32Register;
    stc_wfcfg_seqcm_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_seqcm_t;

/* ARBERR */
#define WFCFG_ARBERR	(WFCFG.unARBERR.u32Register)  /*@rg@*/
#define WFCFG_ARBERR_ARBERR	(*(volatile uint_io8_t*)0xB11902C0)  /*@bfbba@*/

typedef struct stc_wfcfg_arberr_field{
    uint_io32_t		u1ARBERR:1;
    uint_io32_t		:31;
}stc_wfcfg_arberr_field_t;

typedef union un_wfcfg_arberr{
    uint_io32_t		u32Register;
    stc_wfcfg_arberr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_arberr_t;

/* ARBCLR */
#define WFCFG_ARBCLR	(WFCFG.unARBCLR.u32Register)  /*@rg@*/
#define WFCFG_ARBCLR_ARBCLR	(*(volatile uint_io8_t*)0xB11902E0)  /*@bfbba@*/

typedef struct stc_wfcfg_arbclr_field{
    uint_io32_t		u1ARBCLR:1;
    uint_io32_t		:31;
}stc_wfcfg_arbclr_field_t;

typedef union un_wfcfg_arbclr{
    uint_io32_t		u32Register;
    stc_wfcfg_arbclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_arbclr_t;

/* BERR */
#define WFCFG_BERR	(WFCFG.unBERR.u32Register)  /*@rg@*/
#define WFCFG_BERR_DED	(*(volatile uint_io8_t*)0xB1190300)  /*@bfbba@*/
#define WFCFG_BERR_CRWE	(*(volatile uint_io8_t*)0xB1190301)  /*@bfbba@*/
#define WFCFG_BERR_SIZE	(*(volatile uint_io8_t*)0xB1190302)  /*@bfbba@*/
#define WFCFG_BERR_RWE	(*(volatile uint_io8_t*)0xB1190304)  /*@bfbba@*/
#define WFCFG_BERR_RESA	(*(volatile uint_io8_t*)0xB1190305)  /*@bfbba@*/
#define WFCFG_BERR_UNACC	(*(volatile uint_io8_t*)0xB1190306)  /*@bfbba@*/
#define WFCFG_BERR_ECRWL	(*(volatile uint_io8_t*)0xB1190307)  /*@bfbba@*/
#define WFCFG_BERR_ACCIGN	(*(volatile uint_io8_t*)0xB1190308)  /*@bfbba@*/
#define WFCFG_BERR_NWTM	(*(volatile uint_io8_t*)0xB1190309)  /*@bfbba@*/
#define WFCFG_BERR_RORW	(*(volatile uint_io8_t*)0xB119030A)  /*@bfbba@*/
#define WFCFG_BERR_ERSIGN	(*(volatile uint_io8_t*)0xB119030B)  /*@bfbba@*/

typedef struct stc_wfcfg_berr_field{
    uint_io32_t		u1DED:1;
    uint_io32_t		u1CRWE:1;
    uint_io32_t		u1SIZE:1;
    uint_io32_t		:1;
    uint_io32_t		u1RWE:1;
    uint_io32_t		u1RESA:1;
    uint_io32_t		u1UNACC:1;
    uint_io32_t		u1ECRWL:1;
    uint_io32_t		u1ACCIGN:1;
    uint_io32_t		u1NWTM:1;
    uint_io32_t		u1RORW:1;
    uint_io32_t		u1ERSIGN:1;
    uint_io32_t		:20;
}stc_wfcfg_berr_field_t;

typedef union un_wfcfg_berr{
    uint_io32_t		u32Register;
    stc_wfcfg_berr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_berr_t;

/* BERRCLR */
#define WFCFG_BERRCLR	(WFCFG.unBERRCLR.u32Register)  /*@rg@*/
#define WFCFG_BERRCLR_DEDCLR	(*(volatile uint_io8_t*)0xB1190320)  /*@bfbba@*/
#define WFCFG_BERRCLR_CRWECLR	(*(volatile uint_io8_t*)0xB1190321)  /*@bfbba@*/
#define WFCFG_BERRCLR_SIZECLR	(*(volatile uint_io8_t*)0xB1190322)  /*@bfbba@*/
#define WFCFG_BERRCLR_RWECLR	(*(volatile uint_io8_t*)0xB1190324)  /*@bfbba@*/
#define WFCFG_BERRCLR_RESACLR	(*(volatile uint_io8_t*)0xB1190325)  /*@bfbba@*/
#define WFCFG_BERRCLR_UNACCLR	(*(volatile uint_io8_t*)0xB1190326)  /*@bfbba@*/
#define WFCFG_BERRCLR_ECRWLCLR	(*(volatile uint_io8_t*)0xB1190327)  /*@bfbba@*/
#define WFCFG_BERRCLR_ACCIGNCLR	(*(volatile uint_io8_t*)0xB1190328)  /*@bfbba@*/
#define WFCFG_BERRCLR_NWTMCLR	(*(volatile uint_io8_t*)0xB1190329)  /*@bfbba@*/
#define WFCFG_BERRCLR_RORWCLR	(*(volatile uint_io8_t*)0xB119032A)  /*@bfbba@*/
#define WFCFG_BERRCLR_ERSIGNCLR	(*(volatile uint_io8_t*)0xB119032B)  /*@bfbba@*/

typedef struct stc_wfcfg_berrclr_field{
    uint_io32_t		u1DEDCLR:1;
    uint_io32_t		u1CRWECLR:1;
    uint_io32_t		u1SIZECLR:1;
    uint_io32_t		:1;
    uint_io32_t		u1RWECLR:1;
    uint_io32_t		u1RESACLR:1;
    uint_io32_t		u1UNACCLR:1;
    uint_io32_t		u1ECRWLCLR:1;
    uint_io32_t		u1ACCIGNCLR:1;
    uint_io32_t		u1NWTMCLR:1;
    uint_io32_t		u1RORWCLR:1;
    uint_io32_t		u1ERSIGNCLR:1;
    uint_io32_t		:20;
}stc_wfcfg_berrclr_field_t;

typedef union un_wfcfg_berrclr{
    uint_io32_t		u32Register;
    stc_wfcfg_berrclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_berrclr_t;

/* WARBR */
#define WFCFG_WARBR	(WFCFG.unWARBR.u32Register)  /*@rg@*/
#define WFCFG_WARBR_WERINTE	(*(volatile uint_io8_t*)0xB1190340)  /*@bfbba@*/
#define WFCFG_WARBR_WERINTCLR	(*(volatile uint_io8_t*)0xB1190348)  /*@bfbba@*/
#define WFCFG_WARBR_WERINT	(*(volatile uint_io8_t*)0xB1190350)  /*@bfbba@*/
#define WFCFG_WARBR_WERSTS	(*(volatile uint_io8_t*)0xB1190358)  /*@bfbba@*/

typedef struct stc_wfcfg_warbr_field{
    uint_io32_t		u1WERINTE:1;
    uint_io32_t		:7;
    uint_io32_t		u1WERINTCLR:1;
    uint_io32_t		:7;
    uint_io32_t		u1WERINT:1;
    uint_io32_t		:7;
    uint_io32_t		u1WERSTS:1;
    uint_io32_t		:7;
}stc_wfcfg_warbr_field_t;

typedef union un_wfcfg_warbr{
    uint_io32_t		u32Register;
    stc_wfcfg_warbr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_warbr_t;

/* UCESR */
#define WFCFG_UCESR	(WFCFG.unUCESR.u32Register)  /*@rg@*/
#define WFCFG_UCESR_SYN	(WFCFG.unUCESR.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_wfcfg_ucesr_field{
    uint_io32_t		:24;
    uint_io32_t		u8SYN:8;
}stc_wfcfg_ucesr_field_t;

typedef union un_wfcfg_ucesr{
    uint_io32_t		u32Register;
    stc_wfcfg_ucesr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_ucesr_t;

/* UCEAR */
#define WFCFG_UCEAR	(WFCFG.unUCEAR.u32Register)  /*@rg@*/
#define WFCFG_UCEAR_UCEA	WFCFG_UCEAR  /*@bfrg@*/

typedef union un_wfcfg_ucear{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_ucear_t;

/* DBEIR_L */
#define WFCFG_DBEIR_L	(WFCFG.unDBEIR_L.u32Register)  /*@rg@*/
#define WFCFG_DBEIR_L_DBEIR	WFCFG_DBEIR_L  /*@bfrg@*/

typedef union un_wfcfg_dbeir_l{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_dbeir_l_t;

/* DBEIR_H */
#define WFCFG_DBEIR_H	(WFCFG.unDBEIR_H.u32Register)  /*@rg@*/
#define WFCFG_DBEIR_H_DBEIR	WFCFG_DBEIR_H  /*@bfrg@*/

typedef union un_wfcfg_dbeir_h{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_wfcfg_dbeir_h_t;


typedef struct stc_wfcfg{
    un_wfcfg_cpr_t	unCPR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000004 */
    un_wfcfg_cr_t	unCR;	/* 0x00000008 */
    un_wfcfg_ecr_t	unECR;	/* 0x0000000C */
    un_wfcfg_wcr_t	unWCR;	/* 0x00000010 */
    un_wfcfg_wsr_t	unWSR;	/* 0x00000014 */
    uint_io8_t	au8Reserved1[4];	/* 0x00000018 */
    un_wfcfg_eeir_t	unEEIR;	/* 0x0000001C */
    uint_io8_t	au8Reserved2[4];	/* 0x00000020 */
    un_wfcfg_icr_t	unICR;	/* 0x00000024 */
    un_wfcfg_sr_t	unSR;	/* 0x00000028 */
    un_wfcfg_secir_t	unSECIR;	/* 0x0000002C */
    un_wfcfg_eear_t	unEEAR;	/* 0x00000030 */
    uint_io8_t	au8Reserved3[4];	/* 0x00000034 */
    un_wfcfg_emenr_t	unEMENR;	/* 0x00000038 */
    uint_io8_t	au8Reserved4[24];	/* 0x0000003C */
    un_wfcfg_seqcm_t	unSEQCM;	/* 0x00000054 */
    un_wfcfg_arberr_t	unARBERR;	/* 0x00000058 */
    un_wfcfg_arbclr_t	unARBCLR;	/* 0x0000005C */
    un_wfcfg_berr_t	unBERR;	/* 0x00000060 */
    un_wfcfg_berrclr_t	unBERRCLR;	/* 0x00000064 */
    un_wfcfg_warbr_t	unWARBR;	/* 0x00000068 */
    un_wfcfg_ucesr_t	unUCESR;	/* 0x0000006C */
    un_wfcfg_ucear_t	unUCEAR;	/* 0x00000070 */
    uint_io8_t	au8Reserved5[4];	/* 0x00000074 */
    un_wfcfg_dbeir_l_t	unDBEIR_L;	/* 0x00000078 */
    un_wfcfg_dbeir_h_t	unDBEIR_H;	/* 0x0000007C */
    uint_io8_t	au8Reserved6[128];	/* 0x00000080 */
}stc_wfcfg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_wfcfg_t	stcWFCFG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 256(0x100) bytes */


#endif /* __S6J3200_WFCFG_H */
