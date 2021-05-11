/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_TRCFG_H
#define __S6J3200_TRCFG_H

#include "s6j3200io_basetypes.h"

/* TRCFG0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define TRCFG0	stcTRCFG0
#else /* __IO_DEFINE */
#define TRCFG0	(*((volatile stc_trcfg0_t*)0xB0410000))
#endif /* __IO_DEFINE */

/* TCMCFG0 */
#define TRCFG0_TCMCFG0	(TRCFG0.unTCMCFG0.u32Register)  /*@rg@*/
#define TRCFG0_TCMCFG0_ERRECC	(TRCFG0.unTCMCFG0.stcField.u7ERRECC)  /*@bf@*/
#define TRCFG0_TCMCFG0_LOCKSTATUS	(*(volatile uint_io8_t*)0xB1180008)  /*@bfbba@*/
#define TRCFG0_TCMCFG0_DWAIT	(TRCFG0.unTCMCFG0.stcField.u2DWAIT)  /*@bf@*/

typedef struct stc_trcfg0_tcmcfg0_field{
    uint_io32_t		u7ERRECC:7;
    uint_io32_t		:1;
    uint_io32_t		u1LOCKSTATUS:1;
    uint_io32_t		:15;
    uint_io32_t		u2DWAIT:2;
    uint_io32_t		:6;
}stc_trcfg0_tcmcfg0_field_t;

typedef union un_trcfg0_tcmcfg0{
    uint_io32_t		u32Register;
    stc_trcfg0_tcmcfg0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_tcmcfg0_t;

/* TCMCFG1 */
#define TRCFG0_TCMCFG1	(TRCFG0.unTCMCFG1.u32Register)  /*@rg@*/
#define TRCFG0_TCMCFG1_ERRBIT	TRCFG0_TCMCFG1  /*@bfrg@*/

typedef union un_trcfg0_tcmcfg1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_tcmcfg1_t;

/* TCMUNLOCK */
#define TRCFG0_TCMUNLOCK	(TRCFG0.unTCMUNLOCK.u32Register)  /*@rg@*/
#define TRCFG0_TCMUNLOCK_UNLOCK	TRCFG0_TCMUNLOCK  /*@bfrg@*/

typedef union un_trcfg0_tcmunlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_tcmunlock_t;

/* ECCDEN */
#define TRCFG0_ECCDEN	(TRCFG0.unECCDEN.u32Register)  /*@rg@*/
#define TRCFG0_ECCDEN_DEN	(*(volatile uint_io8_t*)0xB1180097)  /*@bfbba@*/

typedef struct stc_trcfg0_eccden_field{
    uint_io32_t		:23;
    uint_io32_t		u1DEN:1;
    uint_io32_t		:8;
}stc_trcfg0_eccden_field_t;

typedef union un_trcfg0_eccden{
    uint_io32_t		u32Register;
    stc_trcfg0_eccden_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_eccden_t;

/* ECCDR_PARITY */
#define TRCFG0_ECCDR_PARITY	(TRCFG0.unECCDR_PARITY.u32Register)  /*@rg@*/
#define TRCFG0_ECCDR_PARITY_ECCDR_PARITY	(TRCFG0.unECCDR_PARITY.stcField.u14ECCDR_PARITY)  /*@bf@*/

typedef struct stc_trcfg0_eccdr_parity_field{
    uint_io32_t		u14ECCDR_PARITY:14;
    uint_io32_t		:18;
}stc_trcfg0_eccdr_parity_field_t;

typedef union un_trcfg0_eccdr_parity{
    uint_io32_t		u32Register;
    stc_trcfg0_eccdr_parity_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_eccdr_parity_t;

/* ECCDR_DATA0 */
#define TRCFG0_ECCDR_DATA0	(TRCFG0.unECCDR_DATA0.u32Register)  /*@rg@*/
#define TRCFG0_ECCDR_DATA0_ECCDR_DATA0	TRCFG0_ECCDR_DATA0  /*@bfrg@*/

typedef union un_trcfg0_eccdr_data0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_eccdr_data0_t;

/* ECCDR_DATA1 */
#define TRCFG0_ECCDR_DATA1	(TRCFG0.unECCDR_DATA1.u32Register)  /*@rg@*/
#define TRCFG0_ECCDR_DATA1_ECCDR_DATA1	TRCFG0_ECCDR_DATA1  /*@bfrg@*/

typedef union un_trcfg0_eccdr_data1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_eccdr_data1_t;

/* ECCDW */
#define TRCFG0_ECCDW	(TRCFG0.unECCDW.u32Register)  /*@rg@*/
#define TRCFG0_ECCDW_ECCDW_PARITY	(TRCFG0.unECCDW.stcField.u14ECCDW_PARITY)  /*@bf@*/
#define TRCFG0_ECCDW_DWEN	(*(volatile uint_io8_t*)0xB118013F)  /*@bfbba@*/

typedef struct stc_trcfg0_eccdw_field{
    uint_io32_t		u14ECCDW_PARITY:14;
    uint_io32_t		:17;
    uint_io32_t		u1DWEN:1;
}stc_trcfg0_eccdw_field_t;

typedef union un_trcfg0_eccdw{
    uint_io32_t		u32Register;
    stc_trcfg0_eccdw_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_eccdw_t;

/* TEAR[0-2] */
#define TRCFG0_TEAR0	(TRCFG0.unTEAR0.u32Register)  /*@rg@*/
#define TRCFG0_TEAR0_ERR_ADDR	(TRCFG0.unTEAR0.stcField.u15ERR_ADDR)  /*@bf@*/
#define TRCFG0_TEAR0_TER	(TRCFG0.unTEAR0.stcField.u3TER)  /*@bf@*/

#define TRCFG0_TEAR1	(TRCFG0.unTEAR1.u32Register)  /*@rg@*/
#define TRCFG0_TEAR1_ERR_ADDR	(TRCFG0.unTEAR1.stcField.u15ERR_ADDR)  /*@bf@*/
#define TRCFG0_TEAR1_TER	(TRCFG0.unTEAR1.stcField.u3TER)  /*@bf@*/

#define TRCFG0_TEAR2	(TRCFG0.unTEAR2.u32Register)  /*@rg@*/
#define TRCFG0_TEAR2_ERR_ADDR	(TRCFG0.unTEAR2.stcField.u15ERR_ADDR)  /*@bf@*/
#define TRCFG0_TEAR2_TER	(TRCFG0.unTEAR2.stcField.u3TER)  /*@bf@*/

typedef struct stc_trcfg0_tearn_field{
    uint_io32_t		u15ERR_ADDR:15;
    uint_io32_t		:14;
    uint_io32_t		u3TER:3;
}stc_trcfg0_tearn_field_t;

typedef union un_trcfg0_tearn{
    uint_io32_t		u32Register;
    stc_trcfg0_tearn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_trcfg0_tearn_t;

/* TAEAR */
#define TRCFG0_TAEAR	(TRCFG0.unTAEAR.u16Register)  /*@rg@*/
#define TRCFG0_TAEAR_EADDR	(TRCFG0.unTAEAR.stcField.u15EADDR)  /*@bf@*/

typedef struct stc_trcfg0_taear_field{
    uint_io16_t		u15EADDR:15;
    uint_io16_t		:1;
}stc_trcfg0_taear_field_t;

typedef union un_trcfg0_taear{
    uint_io16_t		u16Register;
    stc_trcfg0_taear_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_trcfg0_taear_t;

/* TASAR */
#define TRCFG0_TASAR	(TRCFG0.unTASAR.u16Register)  /*@rg@*/
#define TRCFG0_TASAR_SADDR	(TRCFG0.unTASAR.stcField.u15SADDR)  /*@bf@*/

typedef struct stc_trcfg0_tasar_field{
    uint_io16_t		u15SADDR:15;
    uint_io16_t		:1;
}stc_trcfg0_tasar_field_t;

typedef union un_trcfg0_tasar{
    uint_io16_t		u16Register;
    stc_trcfg0_tasar_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_trcfg0_tasar_t;

/* TFECR */
#define TRCFG0_TFECR	(TRCFG0.unTFECR.u8Register)  /*@rg@*/
#define TRCFG0_TFECR_ETYP	(TRCFG0.unTFECR.stcField.u3ETYP)  /*@bf@*/
#define TRCFG0_TFECR_FERR	(*(volatile uint_io8_t*)0xB1180203)  /*@bfbba@*/

typedef struct stc_trcfg0_tfecr_field{
    uint_io8_t		u3ETYP:3;
    uint_io8_t		u1FERR:1;
    uint_io8_t		:4;
}stc_trcfg0_tfecr_field_t;

typedef union un_trcfg0_tfecr{
    uint_io8_t		u8Register;
    stc_trcfg0_tfecr_field_t		stcField;
}un_trcfg0_tfecr_t;

/* TICR */
#define TRCFG0_TICR	(TRCFG0.unTICR.u8Register)  /*@rg@*/
#define TRCFG0_TICR_IRUN	(*(volatile uint_io8_t*)0xB1180208)  /*@bfbba@*/
#define TRCFG0_TICR_ITYP	(*(volatile uint_io8_t*)0xB1180209)  /*@bfbba@*/
#define TRCFG0_TICR_ICI	(*(volatile uint_io8_t*)0xB118020A)  /*@bfbba@*/
#define TRCFG0_TICR_ICIE	(*(volatile uint_io8_t*)0xB118020B)  /*@bfbba@*/

typedef struct stc_trcfg0_ticr_field{
    uint_io8_t		u1IRUN:1;
    uint_io8_t		u1ITYP:1;
    uint_io8_t		u1ICI:1;
    uint_io8_t		u1ICIE:1;
    uint_io8_t		:4;
}stc_trcfg0_ticr_field_t;

typedef union un_trcfg0_ticr{
    uint_io8_t		u8Register;
    stc_trcfg0_ticr_field_t		stcField;
}un_trcfg0_ticr_t;

/* TTCR */
#define TRCFG0_TTCR	(TRCFG0.unTTCR.u16Register)  /*@rg@*/
#define TRCFG0_TTCR_TRUN	(*(volatile uint_io8_t*)0xB1180210)  /*@bfbba@*/
#define TRCFG0_TTCR_TTYP	(TRCFG0.unTTCR.stcField.u3TTYP)  /*@bf@*/
#define TRCFG0_TTCR_TCI	(*(volatile uint_io8_t*)0xB1180214)  /*@bfbba@*/
#define TRCFG0_TTCR_TCIE	(*(volatile uint_io8_t*)0xB1180215)  /*@bfbba@*/
#define TRCFG0_TTCR_TEI	(*(volatile uint_io8_t*)0xB1180216)  /*@bfbba@*/
#define TRCFG0_TTCR_TEIE	(*(volatile uint_io8_t*)0xB1180217)  /*@bfbba@*/
#define TRCFG0_TTCR_OVFLW	(*(volatile uint_io8_t*)0xB1180218)  /*@bfbba@*/
#define TRCFG0_TTCR_TSTAT	(*(volatile uint_io8_t*)0xB1180219)  /*@bfbba@*/

typedef struct stc_trcfg0_ttcr_field{
    uint_io16_t		u1TRUN:1;
    uint_io16_t		u3TTYP:3;
    uint_io16_t		u1TCI:1;
    uint_io16_t		u1TCIE:1;
    uint_io16_t		u1TEI:1;
    uint_io16_t		u1TEIE:1;
    uint_io16_t		u1OVFLW:1;
    uint_io16_t		u1TSTAT:1;
    uint_io16_t		:6;
}stc_trcfg0_ttcr_field_t;

typedef union un_trcfg0_ttcr{
    uint_io16_t		u16Register;
    stc_trcfg0_ttcr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_trcfg0_ttcr_t;

/* TSRCR */
#define TRCFG0_TSRCR	(TRCFG0.unTSRCR.u8Register)  /*@rg@*/
#define TRCFG0_TSRCR_SRST	(*(volatile uint_io8_t*)0xB1180227)  /*@bfbba@*/

typedef struct stc_trcfg0_tsrcr_field{
    uint_io8_t		:7;
    uint_io8_t		u1SRST:1;
}stc_trcfg0_tsrcr_field_t;

typedef union un_trcfg0_tsrcr{
    uint_io8_t		u8Register;
    stc_trcfg0_tsrcr_field_t		stcField;
}un_trcfg0_tsrcr_t;

/* TSCR */
#define TRCFG0_TSCR	(TRCFG0.unTSCR.u8Register)  /*@rg@*/
#define TRCFG0_TSCR_ICIC	(*(volatile uint_io8_t*)0xB118022A)  /*@bfbba@*/
#define TRCFG0_TSCR_TCIC	(*(volatile uint_io8_t*)0xB118022C)  /*@bfbba@*/
#define TRCFG0_TSCR_TEIC	(*(volatile uint_io8_t*)0xB118022E)  /*@bfbba@*/

typedef struct stc_trcfg0_tscr_field{
    uint_io8_t		:2;
    uint_io8_t		u1ICIC:1;
    uint_io8_t		:1;
    uint_io8_t		u1TCIC:1;
    uint_io8_t		:1;
    uint_io8_t		u1TEIC:1;
    uint_io8_t		:1;
}stc_trcfg0_tscr_field_t;

typedef union un_trcfg0_tscr{
    uint_io8_t		u8Register;
    stc_trcfg0_tscr_field_t		stcField;
}un_trcfg0_tscr_t;

/* TKCCR */
#define TRCFG0_TKCCR	(TRCFG0.unTKCCR.u8Register)  /*@rg@*/
#define TRCFG0_TKCCR_CODE	(TRCFG0.unTKCCR.stcField.u2CODE)  /*@bf@*/

typedef struct stc_trcfg0_tkccr_field{
    uint_io8_t		u2CODE:2;
    uint_io8_t		:6;
}stc_trcfg0_tkccr_field_t;

typedef union un_trcfg0_tkccr{
    uint_io8_t		u8Register;
    stc_trcfg0_tkccr_field_t		stcField;
}un_trcfg0_tkccr_t;


typedef struct stc_trcfg0{
    un_trcfg0_tcmcfg0_t	unTCMCFG0;	/* 0x00000000 */
    un_trcfg0_tcmcfg1_t	unTCMCFG1;	/* 0x00000004 */
    un_trcfg0_tcmunlock_t	unTCMUNLOCK;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[4];	/* 0x0000000C */
    un_trcfg0_eccden_t	unECCDEN;	/* 0x00000010 */
    un_trcfg0_eccdr_parity_t	unECCDR_PARITY;	/* 0x00000014 */
    un_trcfg0_eccdr_data0_t	unECCDR_DATA0;	/* 0x00000018 */
    un_trcfg0_eccdr_data1_t	unECCDR_DATA1;	/* 0x0000001C */
    uint_io8_t	au8Reserved1[4];	/* 0x00000020 */
    un_trcfg0_eccdw_t	unECCDW;	/* 0x00000024 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000028 */
    un_trcfg0_tearn_t	unTEAR0;	/* 0x00000030 */
    un_trcfg0_tearn_t	unTEAR1;	/* 0x00000034 */
    un_trcfg0_tearn_t	unTEAR2;	/* 0x00000038 */
    un_trcfg0_taear_t	unTAEAR;	/* 0x0000003C */
    un_trcfg0_tasar_t	unTASAR;	/* 0x0000003E */
    un_trcfg0_tfecr_t	unTFECR;	/* 0x00000040 */
    un_trcfg0_ticr_t	unTICR;	/* 0x00000041 */
    un_trcfg0_ttcr_t	unTTCR;	/* 0x00000042 */
    un_trcfg0_tsrcr_t	unTSRCR;	/* 0x00000044 */
    un_trcfg0_tscr_t	unTSCR;	/* 0x00000045 */
    uint_io8_t	au8Reserved3[1];	/* 0x00000046 */
    un_trcfg0_tkccr_t	unTKCCR;	/* 0x00000047 */
    uint_io8_t	au8Reserved4[4024];	/* 0x00000048 */
}stc_trcfg0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_trcfg0_t	stcTRCFG0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 4096(0x1000) bytes */


#endif /* __S6J3200_TRCFG_H */
