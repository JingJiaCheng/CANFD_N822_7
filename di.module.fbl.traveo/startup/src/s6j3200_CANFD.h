/* S6J3200 SERIES I/O REGISTER FILE V02L01
 *
 * Copyright (C) 2014-2015 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_CANFD_H
#define __S6J3200_CANFD_H

#include "s6j3200io_basetypes.h"
#include "can_bcan.cfg"

/* CPG_CANFD[0-1] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CPG_CANFD0	stcCPG_CANFD[0]
#define CPG_CANFD1	stcCPG_CANFD[1]
#else /* __IO_DEFINE */
//#define CPG_CANFD0	(*((volatile stc_cpg_canfdn_t*)0xB4900000))
//#define CPG_CANFD1	(*((volatile stc_cpg_canfdn_t*)0xB4910000))
///#define CPG_CANFD1	(*((volatile stc_mcg_canfdn_1_t*)0xB4900000))
//#define CPG_CANFD1	(*((volatile stc_cpg_canfdn_t*)0xB06D0000))
#endif /* __IO_DEFINE */

/* CREL */
#define CPG_CANFD0_CREL	(CPG_CANFD0.unCREL.u32Register)  /*@rg@*/
#define CPG_CANFD0_CREL_DAY	(CPG_CANFD0.unCREL.au8Byte[0])  /*@bfbyte@*/
#define CPG_CANFD0_CREL_MON	(CPG_CANFD0.unCREL.au8Byte[1])  /*@bfbyte@*/
#define CPG_CANFD0_CREL_YEAR	(CPG_CANFD0.unCREL.stcField.u4YEAR)  /*@bf@*/
#define CPG_CANFD0_CREL_SUBSTEP	(CPG_CANFD0.unCREL.stcField.u4SUBSTEP)  /*@bf@*/
#define CPG_CANFD0_CREL_STEP	(CPG_CANFD0.unCREL.stcField.u4STEP)  /*@bf@*/
#define CPG_CANFD0_CREL_REL	(CPG_CANFD0.unCREL.stcField.u4REL)  /*@bf@*/

#define CPG_CANFD1_CREL	(CPG_CANFD1.unCREL.u32Register)  /*@rg@*/
#define CPG_CANFD1_CREL_DAY	(CPG_CANFD1.unCREL.au8Byte[0])  /*@bfbyte@*/
#define CPG_CANFD1_CREL_MON	(CPG_CANFD1.unCREL.au8Byte[1])  /*@bfbyte@*/
#define CPG_CANFD1_CREL_YEAR	(CPG_CANFD1.unCREL.stcField.u4YEAR)  /*@bf@*/
#define CPG_CANFD1_CREL_SUBSTEP	(CPG_CANFD1.unCREL.stcField.u4SUBSTEP)  /*@bf@*/
#define CPG_CANFD1_CREL_STEP	(CPG_CANFD1.unCREL.stcField.u4STEP)  /*@bf@*/
#define CPG_CANFD1_CREL_REL	(CPG_CANFD1.unCREL.stcField.u4REL)  /*@bf@*/

typedef struct stc_cpg_canfdn_crel_field{
    uint_io32_t		u8DAY:8;
    uint_io32_t		u8MON:8;
    uint_io32_t		u4YEAR:4;
    uint_io32_t		u4SUBSTEP:4;
    uint_io32_t		u4STEP:4;
    uint_io32_t		u4REL:4;
}stc_cpg_canfdn_crel_field_t;

typedef union un_cpg_canfdn_crel{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_crel_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_crel_t;

/* ENDN */
#define CPG_CANFD0_ENDN	(CPG_CANFD0.unENDN.u32Register)  /*@rg@*/
#define CPG_CANFD0_ENDN_ETV	CPG_CANFD0_ENDN  /*@bfrg@*/

#define CPG_CANFD1_ENDN	(CPG_CANFD1.unENDN.u32Register)  /*@rg@*/
#define CPG_CANFD1_ENDN_ETV	CPG_CANFD1_ENDN  /*@bfrg@*/

typedef union un_cpg_canfdn_endn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_endn_t;

/* DBTP */
#define CPG_CANFD0_DBTP	(CPG_CANFD0.unDBTP.u32Register)  /*@rg@*/
#define CPG_CANFD0_DBTP_DSJW	(CPG_CANFD0.unDBTP.stcField.u4DSJW)  /*@bf@*/
#define CPG_CANFD0_DBTP_DTSEG2	(CPG_CANFD0.unDBTP.stcField.u4DTSEG2)  /*@bf@*/
#define CPG_CANFD0_DBTP_DTSEG1	(CPG_CANFD0.unDBTP.stcField.u5DTSEG1)  /*@bf@*/
#define CPG_CANFD0_DBTP_DBRP	(CPG_CANFD0.unDBTP.stcField.u5DBRP)  /*@bf@*/
#define CPG_CANFD0_DBTP_TDC	(*(volatile uint_io8_t*)0xB4C00077)  /*@bfbba@*/

#define CPG_CANFD1_DBTP	(CPG_CANFD1.unDBTP.u32Register)  /*@rg@*/
#define CPG_CANFD1_DBTP_DSJW	(CPG_CANFD1.unDBTP.stcField.u4DSJW)  /*@bf@*/
#define CPG_CANFD1_DBTP_DTSEG2	(CPG_CANFD1.unDBTP.stcField.u4DTSEG2)  /*@bf@*/
#define CPG_CANFD1_DBTP_DTSEG1	(CPG_CANFD1.unDBTP.stcField.u5DTSEG1)  /*@bf@*/
#define CPG_CANFD1_DBTP_DBRP	(CPG_CANFD1.unDBTP.stcField.u5DBRP)  /*@bf@*/
#define CPG_CANFD1_DBTP_TDC	(*(volatile uint_io8_t*)0xB4C80077)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_dbtp_field{
    uint_io32_t		u4DSJW:4;
    uint_io32_t		u4DTSEG2:4;
    uint_io32_t		u5DTSEG1:5;
    uint_io32_t		:3;
    uint_io32_t		u5DBRP:5;
    uint_io32_t		:2;
    uint_io32_t		u1TDC:1;
    uint_io32_t		:8;
}stc_cpg_canfdn_dbtp_field_t;

typedef union un_cpg_canfdn_dbtp{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_dbtp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_dbtp_t;

/* TEST */
#define CPG_CANFD0_TEST	(CPG_CANFD0.unTEST.u32Register)  /*@rg@*/
#define CPG_CANFD0_TEST_LBCK	(*(volatile uint_io8_t*)0xB4C00084)  /*@bfbba@*/
#define CPG_CANFD0_TEST_TX	(CPG_CANFD0.unTEST.stcField.u2TX)  /*@bf@*/
#define CPG_CANFD0_TEST_RX	(*(volatile uint_io8_t*)0xB4C00087)  /*@bfbba@*/

#define CPG_CANFD1_TEST	(CPG_CANFD1.unTEST.u32Register)  /*@rg@*/
#define CPG_CANFD1_TEST_LBCK	(*(volatile uint_io8_t*)0xB4C80084)  /*@bfbba@*/
#define CPG_CANFD1_TEST_TX	(CPG_CANFD1.unTEST.stcField.u2TX)  /*@bf@*/
#define CPG_CANFD1_TEST_RX	(*(volatile uint_io8_t*)0xB4C80087)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_test_field{
    uint_io32_t		:4;
    uint_io32_t		u1LBCK:1;
    uint_io32_t		u2TX:2;
    uint_io32_t		u1RX:1;
    uint_io32_t		:24;
}stc_cpg_canfdn_test_field_t;

typedef union un_cpg_canfdn_test{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_test_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_test_t;

/* RWD */
#define CPG_CANFD0_RWD	(CPG_CANFD0.unRWD.u32Register)  /*@rg@*/
#define CPG_CANFD0_RWD_WDC	(CPG_CANFD0.unRWD.au8Byte[0])  /*@bfbyte@*/
#define CPG_CANFD0_RWD_WDV	(CPG_CANFD0.unRWD.au8Byte[1])  /*@bfbyte@*/

#define CPG_CANFD1_RWD	(CPG_CANFD1.unRWD.u32Register)  /*@rg@*/
#define CPG_CANFD1_RWD_WDC	(CPG_CANFD1.unRWD.au8Byte[0])  /*@bfbyte@*/
#define CPG_CANFD1_RWD_WDV	(CPG_CANFD1.unRWD.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_cpg_canfdn_rwd_field{
    uint_io32_t		u8WDC:8;
    uint_io32_t		u8WDV:8;
    uint_io32_t		:16;
}stc_cpg_canfdn_rwd_field_t;

typedef union un_cpg_canfdn_rwd{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rwd_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rwd_t;

/* CCCR */
#define CPG_CANFD0_CCCR	(CPG_CANFD0.unCCCR.u32Register)  /*@rg@*/
#define CPG_CANFD0_CCCR_INIT	(*(volatile uint_io8_t*)0xB4C000C0)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_CCE	(*(volatile uint_io8_t*)0xB4C000C1)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_ASM	(*(volatile uint_io8_t*)0xB4C000C2)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_CSA	(*(volatile uint_io8_t*)0xB4C000C3)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_CSR	(*(volatile uint_io8_t*)0xB4C000C4)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_MON	(*(volatile uint_io8_t*)0xB4C000C5)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_DAR	(*(volatile uint_io8_t*)0xB4C000C6)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_TEST	(*(volatile uint_io8_t*)0xB4C000C7)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_FDOE	(*(volatile uint_io8_t*)0xB4C000C8)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_BRSE	(*(volatile uint_io8_t*)0xB4C000C9)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_PXHD	(*(volatile uint_io8_t*)0xB4C000CC)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_EFBI	(*(volatile uint_io8_t*)0xB4C000CD)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_TXP	(*(volatile uint_io8_t*)0xB4C000CE)  /*@bfbba@*/
#define CPG_CANFD0_CCCR_NISO	(*(volatile uint_io8_t*)0xB4C000CF)  /*@bfbba@*/

#define CPG_CANFD1_CCCR	(CPG_CANFD1.unCCCR.u32Register)  /*@rg@*/
#define CPG_CANFD1_CCCR_INIT	(*(volatile uint_io8_t*)0xB4C800C0)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_CCE	(*(volatile uint_io8_t*)0xB4C800C1)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_ASM	(*(volatile uint_io8_t*)0xB4C800C2)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_CSA	(*(volatile uint_io8_t*)0xB4C800C3)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_CSR	(*(volatile uint_io8_t*)0xB4C800C4)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_MON	(*(volatile uint_io8_t*)0xB4C800C5)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_DAR	(*(volatile uint_io8_t*)0xB4C800C6)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_TEST	(*(volatile uint_io8_t*)0xB4C800C7)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_FDOE	(*(volatile uint_io8_t*)0xB4C800C8)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_BRSE	(*(volatile uint_io8_t*)0xB4C800C9)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_PXHD	(*(volatile uint_io8_t*)0xB4C800CC)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_EFBI	(*(volatile uint_io8_t*)0xB4C800CD)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_TXP	(*(volatile uint_io8_t*)0xB4C800CE)  /*@bfbba@*/
#define CPG_CANFD1_CCCR_NISO	(*(volatile uint_io8_t*)0xB4C800CF)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_cccr_field{
    uint_io32_t		u1INIT:1;
    uint_io32_t		u1CCE:1;
    uint_io32_t		u1ASM:1;
    uint_io32_t		u1CSA:1;
    uint_io32_t		u1CSR:1;
    uint_io32_t		u1MON:1;
    uint_io32_t		u1DAR:1;
    uint_io32_t		u1TEST:1;
    uint_io32_t		u1FDOE:1;
    uint_io32_t		u1BRSE:1;
    uint_io32_t		:2;
    uint_io32_t		u1PXHD:1;
    uint_io32_t		u1EFBI:1;
    uint_io32_t		u1TXP:1;
    uint_io32_t		u1NISO:1;
    uint_io32_t		:16;
}stc_cpg_canfdn_cccr_field_t;

typedef union un_cpg_canfdn_cccr{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_cccr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_cccr_t;

/* NBTP */
#define CPG_CANFD0_NBTP	(CPG_CANFD0.unNBTP.u32Register)  /*@rg@*/
#define CPG_CANFD0_NBTP_NTSEG2	(CPG_CANFD0.unNBTP.stcField.u7NTSEG2)  /*@bf@*/
#define CPG_CANFD0_NBTP_NTSEG1	(CPG_CANFD0.unNBTP.au8Byte[1])  /*@bfbyte@*/
#define CPG_CANFD0_NBTP_NBRP	(CPG_CANFD0.unNBTP.stcField.u9NBRP)  /*@bf@*/
#define CPG_CANFD0_NBTP_NSJW	(CPG_CANFD0.unNBTP.stcField.u7NSJW)  /*@bf@*/

#define CPG_CANFD1_NBTP	(CPG_CANFD1.unNBTP.u32Register)  /*@rg@*/
#define CPG_CANFD1_NBTP_NTSEG2	(CPG_CANFD1.unNBTP.stcField.u7NTSEG2)  /*@bf@*/
#define CPG_CANFD1_NBTP_NTSEG1	(CPG_CANFD1.unNBTP.au8Byte[1])  /*@bfbyte@*/
#define CPG_CANFD1_NBTP_NBRP	(CPG_CANFD1.unNBTP.stcField.u9NBRP)  /*@bf@*/
#define CPG_CANFD1_NBTP_NSJW	(CPG_CANFD1.unNBTP.stcField.u7NSJW)  /*@bf@*/

typedef struct stc_cpg_canfdn_nbtp_field{
    uint_io32_t		u7NTSEG2:7;
    uint_io32_t		:1;
    uint_io32_t		u8NTSEG1:8;
    uint_io32_t		u9NBRP:9;
    uint_io32_t		u7NSJW:7;
}stc_cpg_canfdn_nbtp_field_t;

typedef union un_cpg_canfdn_nbtp{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_nbtp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_nbtp_t;

/* TSCC */
#define CPG_CANFD0_TSCC	(CPG_CANFD0.unTSCC.u32Register)  /*@rg@*/
#define CPG_CANFD0_TSCC_TSS	(CPG_CANFD0.unTSCC.stcField.u2TSS)  /*@bf@*/
#define CPG_CANFD0_TSCC_TCP	(CPG_CANFD0.unTSCC.stcField.u4TCP)  /*@bf@*/

#define CPG_CANFD1_TSCC	(CPG_CANFD1.unTSCC.u32Register)  /*@rg@*/
#define CPG_CANFD1_TSCC_TSS	(CPG_CANFD1.unTSCC.stcField.u2TSS)  /*@bf@*/
#define CPG_CANFD1_TSCC_TCP	(CPG_CANFD1.unTSCC.stcField.u4TCP)  /*@bf@*/

typedef struct stc_cpg_canfdn_tscc_field{
    uint_io32_t		u2TSS:2;
    uint_io32_t		:14;
    uint_io32_t		u4TCP:4;
    uint_io32_t		:12;
}stc_cpg_canfdn_tscc_field_t;

typedef union un_cpg_canfdn_tscc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_tscc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_tscc_t;

/* TSCV */
#define CPG_CANFD0_TSCV	(CPG_CANFD0.unTSCV.u32Register)  /*@rg@*/
#define CPG_CANFD0_TSCV_TSC	(CPG_CANFD0.unTSCV.au16Halfword[0])  /*@bfhword@*/

#define CPG_CANFD1_TSCV	(CPG_CANFD1.unTSCV.u32Register)  /*@rg@*/
#define CPG_CANFD1_TSCV_TSC	(CPG_CANFD1.unTSCV.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_cpg_canfdn_tscv_field{
    uint_io32_t		u16TSC:16;
    uint_io32_t		:16;
}stc_cpg_canfdn_tscv_field_t;

typedef union un_cpg_canfdn_tscv{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_tscv_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_tscv_t;

/* TOCC */
#define CPG_CANFD0_TOCC	(CPG_CANFD0.unTOCC.u32Register)  /*@rg@*/
#define CPG_CANFD0_TOCC_ETOC	(*(volatile uint_io8_t*)0xB4C00140)  /*@bfbba@*/
#define CPG_CANFD0_TOCC_TOS	(CPG_CANFD0.unTOCC.stcField.u2TOS)  /*@bf@*/
#define CPG_CANFD0_TOCC_TOP	(CPG_CANFD0.unTOCC.au16Halfword[1])  /*@bfhword@*/

#define CPG_CANFD1_TOCC	(CPG_CANFD1.unTOCC.u32Register)  /*@rg@*/
#define CPG_CANFD1_TOCC_ETOC	(*(volatile uint_io8_t*)0xB4C80140)  /*@bfbba@*/
#define CPG_CANFD1_TOCC_TOS	(CPG_CANFD1.unTOCC.stcField.u2TOS)  /*@bf@*/
#define CPG_CANFD1_TOCC_TOP	(CPG_CANFD1.unTOCC.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_cpg_canfdn_tocc_field{
    uint_io32_t		u1ETOC:1;
    uint_io32_t		u2TOS:2;
    uint_io32_t		:13;
    uint_io32_t		u16TOP:16;
}stc_cpg_canfdn_tocc_field_t;

typedef union un_cpg_canfdn_tocc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_tocc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_tocc_t;

/* TOCV */
#define CPG_CANFD0_TOCV	(CPG_CANFD0.unTOCV.u32Register)  /*@rg@*/
#define CPG_CANFD0_TOCV_TOC	(CPG_CANFD0.unTOCV.au16Halfword[0])  /*@bfhword@*/

#define CPG_CANFD1_TOCV	(CPG_CANFD1.unTOCV.u32Register)  /*@rg@*/
#define CPG_CANFD1_TOCV_TOC	(CPG_CANFD1.unTOCV.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_cpg_canfdn_tocv_field{
    uint_io32_t		u16TOC:16;
    uint_io32_t		:16;
}stc_cpg_canfdn_tocv_field_t;

typedef union un_cpg_canfdn_tocv{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_tocv_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_tocv_t;

/* ECR */
#define CPG_CANFD0_ECR	(CPG_CANFD0.unECR.u32Register)  /*@rg@*/
#define CPG_CANFD0_ECR_TEC	(CPG_CANFD0.unECR.au8Byte[0])  /*@bfbyte@*/
#define CPG_CANFD0_ECR_REC	(CPG_CANFD0.unECR.stcField.u7REC)  /*@bf@*/
#define CPG_CANFD0_ECR_RP	(*(volatile uint_io8_t*)0xB4C0020F)  /*@bfbba@*/
#define CPG_CANFD0_ECR_CEL	(CPG_CANFD0.unECR.au8Byte[2])  /*@bfbyte@*/

#define CPG_CANFD1_ECR	(CPG_CANFD1.unECR.u32Register)  /*@rg@*/
#define CPG_CANFD1_ECR_TEC	(CPG_CANFD1.unECR.au8Byte[0])  /*@bfbyte@*/
#define CPG_CANFD1_ECR_REC	(CPG_CANFD1.unECR.stcField.u7REC)  /*@bf@*/
#define CPG_CANFD1_ECR_RP	(*(volatile uint_io8_t*)0xB4C8020F)  /*@bfbba@*/
#define CPG_CANFD1_ECR_CEL	(CPG_CANFD1.unECR.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_cpg_canfdn_ecr_field{
    uint_io32_t		u8TEC:8;
    uint_io32_t		u7REC:7;
    uint_io32_t		u1RP:1;
    uint_io32_t		u8CEL:8;
    uint_io32_t		:8;
}stc_cpg_canfdn_ecr_field_t;

typedef union un_cpg_canfdn_ecr{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_ecr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_ecr_t;

/* PSR */
#define CPG_CANFD0_PSR	(CPG_CANFD0.unPSR.u32Register)  /*@rg@*/
#define CPG_CANFD0_PSR_LEC	(CPG_CANFD0.unPSR.stcField.u3LEC)  /*@bf@*/
#define CPG_CANFD0_PSR_ACT	(CPG_CANFD0.unPSR.stcField.u2ACT)  /*@bf@*/
#define CPG_CANFD0_PSR_EP	(*(volatile uint_io8_t*)0xB4C00225)  /*@bfbba@*/
#define CPG_CANFD0_PSR_EW	(*(volatile uint_io8_t*)0xB4C00226)  /*@bfbba@*/
#define CPG_CANFD0_PSR_BO	(*(volatile uint_io8_t*)0xB4C00227)  /*@bfbba@*/
#define CPG_CANFD0_PSR_DLEC	(CPG_CANFD0.unPSR.stcField.u3DLEC)  /*@bf@*/
#define CPG_CANFD0_PSR_RESI	(*(volatile uint_io8_t*)0xB4C0022B)  /*@bfbba@*/
#define CPG_CANFD0_PSR_RBRS	(*(volatile uint_io8_t*)0xB4C0022C)  /*@bfbba@*/
#define CPG_CANFD0_PSR_RFDF	(*(volatile uint_io8_t*)0xB4C0022D)  /*@bfbba@*/
#define CPG_CANFD0_PSR_PXE	(*(volatile uint_io8_t*)0xB4C0022E)  /*@bfbba@*/
#define CPG_CANFD0_PSR_TDCV	(CPG_CANFD0.unPSR.stcField.u7TDCV)  /*@bf@*/

#define CPG_CANFD1_PSR	(CPG_CANFD1.unPSR.u32Register)  /*@rg@*/
#define CPG_CANFD1_PSR_LEC	(CPG_CANFD1.unPSR.stcField.u3LEC)  /*@bf@*/
#define CPG_CANFD1_PSR_ACT	(CPG_CANFD1.unPSR.stcField.u2ACT)  /*@bf@*/
#define CPG_CANFD1_PSR_EP	(*(volatile uint_io8_t*)0xB4C80225)  /*@bfbba@*/
#define CPG_CANFD1_PSR_EW	(*(volatile uint_io8_t*)0xB4C80226)  /*@bfbba@*/
#define CPG_CANFD1_PSR_BO	(*(volatile uint_io8_t*)0xB4C80227)  /*@bfbba@*/
#define CPG_CANFD1_PSR_DLEC	(CPG_CANFD1.unPSR.stcField.u3DLEC)  /*@bf@*/
#define CPG_CANFD1_PSR_RESI	(*(volatile uint_io8_t*)0xB4C8022B)  /*@bfbba@*/
#define CPG_CANFD1_PSR_RBRS	(*(volatile uint_io8_t*)0xB4C8022C)  /*@bfbba@*/
#define CPG_CANFD1_PSR_RFDF	(*(volatile uint_io8_t*)0xB4C8022D)  /*@bfbba@*/
#define CPG_CANFD1_PSR_PXE	(*(volatile uint_io8_t*)0xB4C8022E)  /*@bfbba@*/
#define CPG_CANFD1_PSR_TDCV	(CPG_CANFD1.unPSR.stcField.u7TDCV)  /*@bf@*/

typedef struct stc_cpg_canfdn_psr_field{
    uint_io32_t		u3LEC:3;
    uint_io32_t		u2ACT:2;
    uint_io32_t		u1EP:1;
    uint_io32_t		u1EW:1;
    uint_io32_t		u1BO:1;
    uint_io32_t		u3DLEC:3;
    uint_io32_t		u1RESI:1;
    uint_io32_t		u1RBRS:1;
    uint_io32_t		u1RFDF:1;
    uint_io32_t		u1PXE:1;
    uint_io32_t		:1;
    uint_io32_t		u7TDCV:7;
    uint_io32_t		:9;
}stc_cpg_canfdn_psr_field_t;

typedef union un_cpg_canfdn_psr{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_psr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_psr_t;

/* TDCR */
#define CPG_CANFD0_TDCR	(CPG_CANFD0.unTDCR.u32Register)  /*@rg@*/
#define CPG_CANFD0_TDCR_TDCF	(CPG_CANFD0.unTDCR.stcField.u7TDCF)  /*@bf@*/
#define CPG_CANFD0_TDCR_TDCO	(CPG_CANFD0.unTDCR.stcField.u7TDCO)  /*@bf@*/

#define CPG_CANFD1_TDCR	(CPG_CANFD1.unTDCR.u32Register)  /*@rg@*/
#define CPG_CANFD1_TDCR_TDCF	(CPG_CANFD1.unTDCR.stcField.u7TDCF)  /*@bf@*/
#define CPG_CANFD1_TDCR_TDCO	(CPG_CANFD1.unTDCR.stcField.u7TDCO)  /*@bf@*/

typedef struct stc_cpg_canfdn_tdcr_field{
    uint_io32_t		u7TDCF:7;
    uint_io32_t		:1;
    uint_io32_t		u7TDCO:7;
    uint_io32_t		:17;
}stc_cpg_canfdn_tdcr_field_t;

typedef union un_cpg_canfdn_tdcr{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_tdcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_tdcr_t;

/* IR */
#define CPG_CANFD0_IR	(CPG_CANFD0.unIR.u32Register)  /*@rg@*/
#define CPG_CANFD0_IR_RF0N	(*(volatile uint_io8_t*)0xB4C00280)  /*@bfbba@*/
#define CPG_CANFD0_IR_RF0W	(*(volatile uint_io8_t*)0xB4C00281)  /*@bfbba@*/
#define CPG_CANFD0_IR_RF0F	(*(volatile uint_io8_t*)0xB4C00282)  /*@bfbba@*/
#define CPG_CANFD0_IR_RF0L	(*(volatile uint_io8_t*)0xB4C00283)  /*@bfbba@*/
#define CPG_CANFD0_IR_RF1N	(*(volatile uint_io8_t*)0xB4C00284)  /*@bfbba@*/
#define CPG_CANFD0_IR_RF1W	(*(volatile uint_io8_t*)0xB4C00285)  /*@bfbba@*/
#define CPG_CANFD0_IR_RF1F	(*(volatile uint_io8_t*)0xB4C00286)  /*@bfbba@*/
#define CPG_CANFD0_IR_RF1L	(*(volatile uint_io8_t*)0xB4C00287)  /*@bfbba@*/
#define CPG_CANFD0_IR_HPM	(*(volatile uint_io8_t*)0xB4C00288)  /*@bfbba@*/
#define CPG_CANFD0_IR_TC	(*(volatile uint_io8_t*)0xB4C00289)  /*@bfbba@*/
#define CPG_CANFD0_IR_TCF	(*(volatile uint_io8_t*)0xB4C0028A)  /*@bfbba@*/
#define CPG_CANFD0_IR_TFE	(*(volatile uint_io8_t*)0xB4C0028B)  /*@bfbba@*/
#define CPG_CANFD0_IR_TEFN	(*(volatile uint_io8_t*)0xB4C0028C)  /*@bfbba@*/
#define CPG_CANFD0_IR_TEFW	(*(volatile uint_io8_t*)0xB4C0028D)  /*@bfbba@*/
#define CPG_CANFD0_IR_TEFF	(*(volatile uint_io8_t*)0xB4C0028E)  /*@bfbba@*/
#define CPG_CANFD0_IR_TEFL	(*(volatile uint_io8_t*)0xB4C0028F)  /*@bfbba@*/
#define CPG_CANFD0_IR_TSW	(*(volatile uint_io8_t*)0xB4C00290)  /*@bfbba@*/
#define CPG_CANFD0_IR_MRAF	(*(volatile uint_io8_t*)0xB4C00291)  /*@bfbba@*/
#define CPG_CANFD0_IR_TOO	(*(volatile uint_io8_t*)0xB4C00292)  /*@bfbba@*/
#define CPG_CANFD0_IR_DRX	(*(volatile uint_io8_t*)0xB4C00293)  /*@bfbba@*/
#define CPG_CANFD0_IR_BEC	(*(volatile uint_io8_t*)0xB4C00294)  /*@bfbba@*/
#define CPG_CANFD0_IR_BEU	(*(volatile uint_io8_t*)0xB4C00295)  /*@bfbba@*/
#define CPG_CANFD0_IR_ELO	(*(volatile uint_io8_t*)0xB4C00296)  /*@bfbba@*/
#define CPG_CANFD0_IR_EP	(*(volatile uint_io8_t*)0xB4C00297)  /*@bfbba@*/
#define CPG_CANFD0_IR_EW	(*(volatile uint_io8_t*)0xB4C00298)  /*@bfbba@*/
#define CPG_CANFD0_IR_BO	(*(volatile uint_io8_t*)0xB4C00299)  /*@bfbba@*/
#define CPG_CANFD0_IR_WDI	(*(volatile uint_io8_t*)0xB4C0029A)  /*@bfbba@*/
#define CPG_CANFD0_IR_PEA	(*(volatile uint_io8_t*)0xB4C0029B)  /*@bfbba@*/
#define CPG_CANFD0_IR_PED	(*(volatile uint_io8_t*)0xB4C0029C)  /*@bfbba@*/
#define CPG_CANFD0_IR_ARA	(*(volatile uint_io8_t*)0xB4C0029D)  /*@bfbba@*/

#define CPG_CANFD1_IR	(CPG_CANFD1.unIR.u32Register)  /*@rg@*/
#define CPG_CANFD1_IR_RF0N	(*(volatile uint_io8_t*)0xB4C80280)  /*@bfbba@*/
#define CPG_CANFD1_IR_RF0W	(*(volatile uint_io8_t*)0xB4C80281)  /*@bfbba@*/
#define CPG_CANFD1_IR_RF0F	(*(volatile uint_io8_t*)0xB4C80282)  /*@bfbba@*/
#define CPG_CANFD1_IR_RF0L	(*(volatile uint_io8_t*)0xB4C80283)  /*@bfbba@*/
#define CPG_CANFD1_IR_RF1N	(*(volatile uint_io8_t*)0xB4C80284)  /*@bfbba@*/
#define CPG_CANFD1_IR_RF1W	(*(volatile uint_io8_t*)0xB4C80285)  /*@bfbba@*/
#define CPG_CANFD1_IR_RF1F	(*(volatile uint_io8_t*)0xB4C80286)  /*@bfbba@*/
#define CPG_CANFD1_IR_RF1L	(*(volatile uint_io8_t*)0xB4C80287)  /*@bfbba@*/
#define CPG_CANFD1_IR_HPM	(*(volatile uint_io8_t*)0xB4C80288)  /*@bfbba@*/
#define CPG_CANFD1_IR_TC	(*(volatile uint_io8_t*)0xB4C80289)  /*@bfbba@*/
#define CPG_CANFD1_IR_TCF	(*(volatile uint_io8_t*)0xB4C8028A)  /*@bfbba@*/
#define CPG_CANFD1_IR_TFE	(*(volatile uint_io8_t*)0xB4C8028B)  /*@bfbba@*/
#define CPG_CANFD1_IR_TEFN	(*(volatile uint_io8_t*)0xB4C8028C)  /*@bfbba@*/
#define CPG_CANFD1_IR_TEFW	(*(volatile uint_io8_t*)0xB4C8028D)  /*@bfbba@*/
#define CPG_CANFD1_IR_TEFF	(*(volatile uint_io8_t*)0xB4C8028E)  /*@bfbba@*/
#define CPG_CANFD1_IR_TEFL	(*(volatile uint_io8_t*)0xB4C8028F)  /*@bfbba@*/
#define CPG_CANFD1_IR_TSW	(*(volatile uint_io8_t*)0xB4C80290)  /*@bfbba@*/
#define CPG_CANFD1_IR_MRAF	(*(volatile uint_io8_t*)0xB4C80291)  /*@bfbba@*/
#define CPG_CANFD1_IR_TOO	(*(volatile uint_io8_t*)0xB4C80292)  /*@bfbba@*/
#define CPG_CANFD1_IR_DRX	(*(volatile uint_io8_t*)0xB4C80293)  /*@bfbba@*/
#define CPG_CANFD1_IR_BEC	(*(volatile uint_io8_t*)0xB4C80294)  /*@bfbba@*/
#define CPG_CANFD1_IR_BEU	(*(volatile uint_io8_t*)0xB4C80295)  /*@bfbba@*/
#define CPG_CANFD1_IR_ELO	(*(volatile uint_io8_t*)0xB4C80296)  /*@bfbba@*/
#define CPG_CANFD1_IR_EP	(*(volatile uint_io8_t*)0xB4C80297)  /*@bfbba@*/
#define CPG_CANFD1_IR_EW	(*(volatile uint_io8_t*)0xB4C80298)  /*@bfbba@*/
#define CPG_CANFD1_IR_BO	(*(volatile uint_io8_t*)0xB4C80299)  /*@bfbba@*/
#define CPG_CANFD1_IR_WDI	(*(volatile uint_io8_t*)0xB4C8029A)  /*@bfbba@*/
#define CPG_CANFD1_IR_PEA	(*(volatile uint_io8_t*)0xB4C8029B)  /*@bfbba@*/
#define CPG_CANFD1_IR_PED	(*(volatile uint_io8_t*)0xB4C8029C)  /*@bfbba@*/
#define CPG_CANFD1_IR_ARA	(*(volatile uint_io8_t*)0xB4C8029D)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_ir_field{
    uint_io32_t		u1RF0N:1;
    uint_io32_t		u1RF0W:1;
    uint_io32_t		u1RF0F:1;
    uint_io32_t		u1RF0L:1;
    uint_io32_t		u1RF1N:1;
    uint_io32_t		u1RF1W:1;
    uint_io32_t		u1RF1F:1;
    uint_io32_t		u1RF1L:1;
    uint_io32_t		u1HPM:1;
    uint_io32_t		u1TC:1;
    uint_io32_t		u1TCF:1;
    uint_io32_t		u1TFE:1;
    uint_io32_t		u1TEFN:1;
    uint_io32_t		u1TEFW:1;
    uint_io32_t		u1TEFF:1;
    uint_io32_t		u1TEFL:1;
    uint_io32_t		u1TSW:1;
    uint_io32_t		u1MRAF:1;
    uint_io32_t		u1TOO:1;
    uint_io32_t		u1DRX:1;
    uint_io32_t		u1BEC:1;
    uint_io32_t		u1BEU:1;
    uint_io32_t		u1ELO:1;
    uint_io32_t		u1EP:1;
    uint_io32_t		u1EW:1;
    uint_io32_t		u1BO:1;
    uint_io32_t		u1WDI:1;
    uint_io32_t		u1PEA:1;
    uint_io32_t		u1PED:1;
    uint_io32_t		u1ARA:1;
    uint_io32_t		:2;
}stc_cpg_canfdn_ir_field_t;

typedef union un_cpg_canfdn_ir{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_ir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_ir_t;

/* IE */
#define CPG_CANFD0_IE	(CPG_CANFD0.unIE.u32Register)  /*@rg@*/
#define CPG_CANFD0_IE_RF0NE	(*(volatile uint_io8_t*)0xB4C002A0)  /*@bfbba@*/
#define CPG_CANFD0_IE_RF0WE	(*(volatile uint_io8_t*)0xB4C002A1)  /*@bfbba@*/
#define CPG_CANFD0_IE_RF0FE	(*(volatile uint_io8_t*)0xB4C002A2)  /*@bfbba@*/
#define CPG_CANFD0_IE_RF0LE	(*(volatile uint_io8_t*)0xB4C002A3)  /*@bfbba@*/
#define CPG_CANFD0_IE_RF1NE	(*(volatile uint_io8_t*)0xB4C002A4)  /*@bfbba@*/
#define CPG_CANFD0_IE_RF1WE	(*(volatile uint_io8_t*)0xB4C002A5)  /*@bfbba@*/
#define CPG_CANFD0_IE_RF1FE	(*(volatile uint_io8_t*)0xB4C002A6)  /*@bfbba@*/
#define CPG_CANFD0_IE_RF1LE	(*(volatile uint_io8_t*)0xB4C002A7)  /*@bfbba@*/
#define CPG_CANFD0_IE_HPME	(*(volatile uint_io8_t*)0xB4C002A8)  /*@bfbba@*/
#define CPG_CANFD0_IE_TCE	(*(volatile uint_io8_t*)0xB4C002A9)  /*@bfbba@*/
#define CPG_CANFD0_IE_TCFE	(*(volatile uint_io8_t*)0xB4C002AA)  /*@bfbba@*/
#define CPG_CANFD0_IE_TFEE	(*(volatile uint_io8_t*)0xB4C002AB)  /*@bfbba@*/
#define CPG_CANFD0_IE_TEFNE	(*(volatile uint_io8_t*)0xB4C002AC)  /*@bfbba@*/
#define CPG_CANFD0_IE_TEFWE	(*(volatile uint_io8_t*)0xB4C002AD)  /*@bfbba@*/
#define CPG_CANFD0_IE_TEFFE	(*(volatile uint_io8_t*)0xB4C002AE)  /*@bfbba@*/
#define CPG_CANFD0_IE_TEFLE	(*(volatile uint_io8_t*)0xB4C002AF)  /*@bfbba@*/
#define CPG_CANFD0_IE_TSWE	(*(volatile uint_io8_t*)0xB4C002B0)  /*@bfbba@*/
#define CPG_CANFD0_IE_MRAFE	(*(volatile uint_io8_t*)0xB4C002B1)  /*@bfbba@*/
#define CPG_CANFD0_IE_TOOE	(*(volatile uint_io8_t*)0xB4C002B2)  /*@bfbba@*/
#define CPG_CANFD0_IE_DRXE	(*(volatile uint_io8_t*)0xB4C002B3)  /*@bfbba@*/
#define CPG_CANFD0_IE_BECE	(*(volatile uint_io8_t*)0xB4C002B4)  /*@bfbba@*/
#define CPG_CANFD0_IE_BEUE	(*(volatile uint_io8_t*)0xB4C002B5)  /*@bfbba@*/
#define CPG_CANFD0_IE_ELOE	(*(volatile uint_io8_t*)0xB4C002B6)  /*@bfbba@*/
#define CPG_CANFD0_IE_EPE	(*(volatile uint_io8_t*)0xB4C002B7)  /*@bfbba@*/
#define CPG_CANFD0_IE_EWE	(*(volatile uint_io8_t*)0xB4C002B8)  /*@bfbba@*/
#define CPG_CANFD0_IE_BOE	(*(volatile uint_io8_t*)0xB4C002B9)  /*@bfbba@*/
#define CPG_CANFD0_IE_WDIE	(*(volatile uint_io8_t*)0xB4C002BA)  /*@bfbba@*/
#define CPG_CANFD0_IE_PEAE	(*(volatile uint_io8_t*)0xB4C002BB)  /*@bfbba@*/
#define CPG_CANFD0_IE_PEDE	(*(volatile uint_io8_t*)0xB4C002BC)  /*@bfbba@*/
#define CPG_CANFD0_IE_ARAE	(*(volatile uint_io8_t*)0xB4C002BD)  /*@bfbba@*/

#define CPG_CANFD1_IE	(CPG_CANFD1.unIE.u32Register)  /*@rg@*/
#define CPG_CANFD1_IE_RF0NE	(*(volatile uint_io8_t*)0xB4C802A0)  /*@bfbba@*/
#define CPG_CANFD1_IE_RF0WE	(*(volatile uint_io8_t*)0xB4C802A1)  /*@bfbba@*/
#define CPG_CANFD1_IE_RF0FE	(*(volatile uint_io8_t*)0xB4C802A2)  /*@bfbba@*/
#define CPG_CANFD1_IE_RF0LE	(*(volatile uint_io8_t*)0xB4C802A3)  /*@bfbba@*/
#define CPG_CANFD1_IE_RF1NE	(*(volatile uint_io8_t*)0xB4C802A4)  /*@bfbba@*/
#define CPG_CANFD1_IE_RF1WE	(*(volatile uint_io8_t*)0xB4C802A5)  /*@bfbba@*/
#define CPG_CANFD1_IE_RF1FE	(*(volatile uint_io8_t*)0xB4C802A6)  /*@bfbba@*/
#define CPG_CANFD1_IE_RF1LE	(*(volatile uint_io8_t*)0xB4C802A7)  /*@bfbba@*/
#define CPG_CANFD1_IE_HPME	(*(volatile uint_io8_t*)0xB4C802A8)  /*@bfbba@*/
#define CPG_CANFD1_IE_TCE	(*(volatile uint_io8_t*)0xB4C802A9)  /*@bfbba@*/
#define CPG_CANFD1_IE_TCFE	(*(volatile uint_io8_t*)0xB4C802AA)  /*@bfbba@*/
#define CPG_CANFD1_IE_TFEE	(*(volatile uint_io8_t*)0xB4C802AB)  /*@bfbba@*/
#define CPG_CANFD1_IE_TEFNE	(*(volatile uint_io8_t*)0xB4C802AC)  /*@bfbba@*/
#define CPG_CANFD1_IE_TEFWE	(*(volatile uint_io8_t*)0xB4C802AD)  /*@bfbba@*/
#define CPG_CANFD1_IE_TEFFE	(*(volatile uint_io8_t*)0xB4C802AE)  /*@bfbba@*/
#define CPG_CANFD1_IE_TEFLE	(*(volatile uint_io8_t*)0xB4C802AF)  /*@bfbba@*/
#define CPG_CANFD1_IE_TSWE	(*(volatile uint_io8_t*)0xB4C802B0)  /*@bfbba@*/
#define CPG_CANFD1_IE_MRAFE	(*(volatile uint_io8_t*)0xB4C802B1)  /*@bfbba@*/
#define CPG_CANFD1_IE_TOOE	(*(volatile uint_io8_t*)0xB4C802B2)  /*@bfbba@*/
#define CPG_CANFD1_IE_DRXE	(*(volatile uint_io8_t*)0xB4C802B3)  /*@bfbba@*/
#define CPG_CANFD1_IE_BECE	(*(volatile uint_io8_t*)0xB4C802B4)  /*@bfbba@*/
#define CPG_CANFD1_IE_BEUE	(*(volatile uint_io8_t*)0xB4C802B5)  /*@bfbba@*/
#define CPG_CANFD1_IE_ELOE	(*(volatile uint_io8_t*)0xB4C802B6)  /*@bfbba@*/
#define CPG_CANFD1_IE_EPE	(*(volatile uint_io8_t*)0xB4C802B7)  /*@bfbba@*/
#define CPG_CANFD1_IE_EWE	(*(volatile uint_io8_t*)0xB4C802B8)  /*@bfbba@*/
#define CPG_CANFD1_IE_BOE	(*(volatile uint_io8_t*)0xB4C802B9)  /*@bfbba@*/
#define CPG_CANFD1_IE_WDIE	(*(volatile uint_io8_t*)0xB4C802BA)  /*@bfbba@*/
#define CPG_CANFD1_IE_PEAE	(*(volatile uint_io8_t*)0xB4C802BB)  /*@bfbba@*/
#define CPG_CANFD1_IE_PEDE	(*(volatile uint_io8_t*)0xB4C802BC)  /*@bfbba@*/
#define CPG_CANFD1_IE_ARAE	(*(volatile uint_io8_t*)0xB4C802BD)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_ie_field{
    uint_io32_t		u1RF0NE:1;
    uint_io32_t		u1RF0WE:1;
    uint_io32_t		u1RF0FE:1;
    uint_io32_t		u1RF0LE:1;
    uint_io32_t		u1RF1NE:1;
    uint_io32_t		u1RF1WE:1;
    uint_io32_t		u1RF1FE:1;
    uint_io32_t		u1RF1LE:1;
    uint_io32_t		u1HPME:1;
    uint_io32_t		u1TCE:1;
    uint_io32_t		u1TCFE:1;
    uint_io32_t		u1TFEE:1;
    uint_io32_t		u1TEFNE:1;
    uint_io32_t		u1TEFWE:1;
    uint_io32_t		u1TEFFE:1;
    uint_io32_t		u1TEFLE:1;
    uint_io32_t		u1TSWE:1;
    uint_io32_t		u1MRAFE:1;
    uint_io32_t		u1TOOE:1;
    uint_io32_t		u1DRXE:1;
    uint_io32_t		u1BECE:1;
    uint_io32_t		u1BEUE:1;
    uint_io32_t		u1ELOE:1;
    uint_io32_t		u1EPE:1;
    uint_io32_t		u1EWE:1;
    uint_io32_t		u1BOE:1;
    uint_io32_t		u1WDIE:1;
    uint_io32_t		u1PEAE:1;
    uint_io32_t		u1PEDE:1;
    uint_io32_t		u1ARAE:1;
    uint_io32_t		:2;
}stc_cpg_canfdn_ie_field_t;

typedef union un_cpg_canfdn_ie{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_ie_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_ie_t;

/* ILS */
#define CPG_CANFD0_ILS	(CPG_CANFD0.unILS.u32Register)  /*@rg@*/
#define CPG_CANFD0_ILS_RF0NL	(*(volatile uint_io8_t*)0xB4C002C0)  /*@bfbba@*/
#define CPG_CANFD0_ILS_RF0WL	(*(volatile uint_io8_t*)0xB4C002C1)  /*@bfbba@*/
#define CPG_CANFD0_ILS_RF0FL	(*(volatile uint_io8_t*)0xB4C002C2)  /*@bfbba@*/
#define CPG_CANFD0_ILS_RF0LL	(*(volatile uint_io8_t*)0xB4C002C3)  /*@bfbba@*/
#define CPG_CANFD0_ILS_RF1NL	(*(volatile uint_io8_t*)0xB4C002C4)  /*@bfbba@*/
#define CPG_CANFD0_ILS_RF1WL	(*(volatile uint_io8_t*)0xB4C002C5)  /*@bfbba@*/
#define CPG_CANFD0_ILS_RF1FL	(*(volatile uint_io8_t*)0xB4C002C6)  /*@bfbba@*/
#define CPG_CANFD0_ILS_RF1LL	(*(volatile uint_io8_t*)0xB4C002C7)  /*@bfbba@*/
#define CPG_CANFD0_ILS_HPML	(*(volatile uint_io8_t*)0xB4C002C8)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TCL	(*(volatile uint_io8_t*)0xB4C002C9)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TCFL	(*(volatile uint_io8_t*)0xB4C002CA)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TFEL	(*(volatile uint_io8_t*)0xB4C002CB)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TEFNL	(*(volatile uint_io8_t*)0xB4C002CC)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TEFWL	(*(volatile uint_io8_t*)0xB4C002CD)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TEFFL	(*(volatile uint_io8_t*)0xB4C002CE)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TEFLL	(*(volatile uint_io8_t*)0xB4C002CF)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TSWL	(*(volatile uint_io8_t*)0xB4C002D0)  /*@bfbba@*/
#define CPG_CANFD0_ILS_MRAFL	(*(volatile uint_io8_t*)0xB4C002D1)  /*@bfbba@*/
#define CPG_CANFD0_ILS_TOOL	(*(volatile uint_io8_t*)0xB4C002D2)  /*@bfbba@*/
#define CPG_CANFD0_ILS_DRXL	(*(volatile uint_io8_t*)0xB4C002D3)  /*@bfbba@*/
#define CPG_CANFD0_ILS_BECL	(*(volatile uint_io8_t*)0xB4C002D4)  /*@bfbba@*/
#define CPG_CANFD0_ILS_BEUL	(*(volatile uint_io8_t*)0xB4C002D5)  /*@bfbba@*/
#define CPG_CANFD0_ILS_ELOL	(*(volatile uint_io8_t*)0xB4C002D6)  /*@bfbba@*/
#define CPG_CANFD0_ILS_EPL	(*(volatile uint_io8_t*)0xB4C002D7)  /*@bfbba@*/
#define CPG_CANFD0_ILS_EWL	(*(volatile uint_io8_t*)0xB4C002D8)  /*@bfbba@*/
#define CPG_CANFD0_ILS_BOL	(*(volatile uint_io8_t*)0xB4C002D9)  /*@bfbba@*/
#define CPG_CANFD0_ILS_WDIL	(*(volatile uint_io8_t*)0xB4C002DA)  /*@bfbba@*/
#define CPG_CANFD0_ILS_PEAL	(*(volatile uint_io8_t*)0xB4C002DB)  /*@bfbba@*/
#define CPG_CANFD0_ILS_PEDL	(*(volatile uint_io8_t*)0xB4C002DC)  /*@bfbba@*/
#define CPG_CANFD0_ILS_ARAL	(*(volatile uint_io8_t*)0xB4C002DD)  /*@bfbba@*/

#define CPG_CANFD1_ILS	(CPG_CANFD1.unILS.u32Register)  /*@rg@*/
#define CPG_CANFD1_ILS_RF0NL	(*(volatile uint_io8_t*)0xB4C802C0)  /*@bfbba@*/
#define CPG_CANFD1_ILS_RF0WL	(*(volatile uint_io8_t*)0xB4C802C1)  /*@bfbba@*/
#define CPG_CANFD1_ILS_RF0FL	(*(volatile uint_io8_t*)0xB4C802C2)  /*@bfbba@*/
#define CPG_CANFD1_ILS_RF0LL	(*(volatile uint_io8_t*)0xB4C802C3)  /*@bfbba@*/
#define CPG_CANFD1_ILS_RF1NL	(*(volatile uint_io8_t*)0xB4C802C4)  /*@bfbba@*/
#define CPG_CANFD1_ILS_RF1WL	(*(volatile uint_io8_t*)0xB4C802C5)  /*@bfbba@*/
#define CPG_CANFD1_ILS_RF1FL	(*(volatile uint_io8_t*)0xB4C802C6)  /*@bfbba@*/
#define CPG_CANFD1_ILS_RF1LL	(*(volatile uint_io8_t*)0xB4C802C7)  /*@bfbba@*/
#define CPG_CANFD1_ILS_HPML	(*(volatile uint_io8_t*)0xB4C802C8)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TCL	(*(volatile uint_io8_t*)0xB4C802C9)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TCFL	(*(volatile uint_io8_t*)0xB4C802CA)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TFEL	(*(volatile uint_io8_t*)0xB4C802CB)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TEFNL	(*(volatile uint_io8_t*)0xB4C802CC)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TEFWL	(*(volatile uint_io8_t*)0xB4C802CD)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TEFFL	(*(volatile uint_io8_t*)0xB4C802CE)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TEFLL	(*(volatile uint_io8_t*)0xB4C802CF)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TSWL	(*(volatile uint_io8_t*)0xB4C802D0)  /*@bfbba@*/
#define CPG_CANFD1_ILS_MRAFL	(*(volatile uint_io8_t*)0xB4C802D1)  /*@bfbba@*/
#define CPG_CANFD1_ILS_TOOL	(*(volatile uint_io8_t*)0xB4C802D2)  /*@bfbba@*/
#define CPG_CANFD1_ILS_DRXL	(*(volatile uint_io8_t*)0xB4C802D3)  /*@bfbba@*/
#define CPG_CANFD1_ILS_BECL	(*(volatile uint_io8_t*)0xB4C802D4)  /*@bfbba@*/
#define CPG_CANFD1_ILS_BEUL	(*(volatile uint_io8_t*)0xB4C802D5)  /*@bfbba@*/
#define CPG_CANFD1_ILS_ELOL	(*(volatile uint_io8_t*)0xB4C802D6)  /*@bfbba@*/
#define CPG_CANFD1_ILS_EPL	(*(volatile uint_io8_t*)0xB4C802D7)  /*@bfbba@*/
#define CPG_CANFD1_ILS_EWL	(*(volatile uint_io8_t*)0xB4C802D8)  /*@bfbba@*/
#define CPG_CANFD1_ILS_BOL	(*(volatile uint_io8_t*)0xB4C802D9)  /*@bfbba@*/
#define CPG_CANFD1_ILS_WDIL	(*(volatile uint_io8_t*)0xB4C802DA)  /*@bfbba@*/
#define CPG_CANFD1_ILS_PEAL	(*(volatile uint_io8_t*)0xB4C802DB)  /*@bfbba@*/
#define CPG_CANFD1_ILS_PEDL	(*(volatile uint_io8_t*)0xB4C802DC)  /*@bfbba@*/
#define CPG_CANFD1_ILS_ARAL	(*(volatile uint_io8_t*)0xB4C802DD)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_ils_field{
    uint_io32_t		u1RF0NL:1;
    uint_io32_t		u1RF0WL:1;
    uint_io32_t		u1RF0FL:1;
    uint_io32_t		u1RF0LL:1;
    uint_io32_t		u1RF1NL:1;
    uint_io32_t		u1RF1WL:1;
    uint_io32_t		u1RF1FL:1;
    uint_io32_t		u1RF1LL:1;
    uint_io32_t		u1HPML:1;
    uint_io32_t		u1TCL:1;
    uint_io32_t		u1TCFL:1;
    uint_io32_t		u1TFEL:1;
    uint_io32_t		u1TEFNL:1;
    uint_io32_t		u1TEFWL:1;
    uint_io32_t		u1TEFFL:1;
    uint_io32_t		u1TEFLL:1;
    uint_io32_t		u1TSWL:1;
    uint_io32_t		u1MRAFL:1;
    uint_io32_t		u1TOOL:1;
    uint_io32_t		u1DRXL:1;
    uint_io32_t		u1BECL:1;
    uint_io32_t		u1BEUL:1;
    uint_io32_t		u1ELOL:1;
    uint_io32_t		u1EPL:1;
    uint_io32_t		u1EWL:1;
    uint_io32_t		u1BOL:1;
    uint_io32_t		u1WDIL:1;
    uint_io32_t		u1PEAL:1;
    uint_io32_t		u1PEDL:1;
    uint_io32_t		u1ARAL:1;
    uint_io32_t		:2;
}stc_cpg_canfdn_ils_field_t;

typedef union un_cpg_canfdn_ils{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_ils_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_ils_t;

/* ILE */
#define CPG_CANFD0_ILE	(CPG_CANFD0.unILE.u32Register)  /*@rg@*/
#define CPG_CANFD0_ILE_EINT0	(*(volatile uint_io8_t*)0xB4C002E0)  /*@bfbba@*/
#define CPG_CANFD0_ILE_EINT1	(*(volatile uint_io8_t*)0xB4C002E1)  /*@bfbba@*/

#define CPG_CANFD1_ILE	(CPG_CANFD1.unILE.u32Register)  /*@rg@*/
#define CPG_CANFD1_ILE_EINT0	(*(volatile uint_io8_t*)0xB4C802E0)  /*@bfbba@*/
#define CPG_CANFD1_ILE_EINT1	(*(volatile uint_io8_t*)0xB4C802E1)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_ile_field{
    uint_io32_t		u1EINT0:1;
    uint_io32_t		u1EINT1:1;
    uint_io32_t		:30;
}stc_cpg_canfdn_ile_field_t;

typedef union un_cpg_canfdn_ile{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_ile_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_ile_t;

/* GFC */
#define CPG_CANFD0_GFC	(CPG_CANFD0.unGFC.u32Register)  /*@rg@*/
#define CPG_CANFD0_GFC_RRFE	(*(volatile uint_io8_t*)0xB4C00400)  /*@bfbba@*/
#define CPG_CANFD0_GFC_RRFS	(*(volatile uint_io8_t*)0xB4C00401)  /*@bfbba@*/
#define CPG_CANFD0_GFC_ANFE	(CPG_CANFD0.unGFC.stcField.u2ANFE)  /*@bf@*/
#define CPG_CANFD0_GFC_ANFS	(CPG_CANFD0.unGFC.stcField.u2ANFS)  /*@bf@*/

#define CPG_CANFD1_GFC	(CPG_CANFD1.unGFC.u32Register)  /*@rg@*/
#define CPG_CANFD1_GFC_RRFE	(*(volatile uint_io8_t*)0xB4C80400)  /*@bfbba@*/
#define CPG_CANFD1_GFC_RRFS	(*(volatile uint_io8_t*)0xB4C80401)  /*@bfbba@*/
#define CPG_CANFD1_GFC_ANFE	(CPG_CANFD1.unGFC.stcField.u2ANFE)  /*@bf@*/
#define CPG_CANFD1_GFC_ANFS	(CPG_CANFD1.unGFC.stcField.u2ANFS)  /*@bf@*/

typedef struct stc_cpg_canfdn_gfc_field{
    uint_io32_t		u1RRFE:1;
    uint_io32_t		u1RRFS:1;
    uint_io32_t		u2ANFE:2;
    uint_io32_t		u2ANFS:2;
    uint_io32_t		:26;
}stc_cpg_canfdn_gfc_field_t;

typedef union un_cpg_canfdn_gfc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_gfc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_gfc_t;

/* SIDFC */
#define CPG_CANFD0_SIDFC	(CPG_CANFD0.unSIDFC.u32Register)  /*@rg@*/
#define CPG_CANFD0_SIDFC_FLSSA	(CPG_CANFD0.unSIDFC.stcField.u14FLSSA)  /*@bf@*/
#define CPG_CANFD0_SIDFC_LSS	(CPG_CANFD0.unSIDFC.au8Byte[2])  /*@bfbyte@*/

#define CPG_CANFD1_SIDFC	(CPG_CANFD1.unSIDFC.u32Register)  /*@rg@*/
#define CPG_CANFD1_SIDFC_FLSSA	(CPG_CANFD1.unSIDFC.stcField.u14FLSSA)  /*@bf@*/
#define CPG_CANFD1_SIDFC_LSS	(CPG_CANFD1.unSIDFC.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_cpg_canfdn_sidfc_field{
    uint_io32_t		:2;
    uint_io32_t		u14FLSSA:14;
    uint_io32_t		u8LSS:8;
    uint_io32_t		:8;
}stc_cpg_canfdn_sidfc_field_t;

typedef union un_cpg_canfdn_sidfc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_sidfc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_sidfc_t;

/* XIDFC */
#define CPG_CANFD0_XIDFC	(CPG_CANFD0.unXIDFC.u32Register)  /*@rg@*/
#define CPG_CANFD0_XIDFC_FLESA	(CPG_CANFD0.unXIDFC.stcField.u14FLESA)  /*@bf@*/
#define CPG_CANFD0_XIDFC_LSE	(CPG_CANFD0.unXIDFC.stcField.u7LSE)  /*@bf@*/

#define CPG_CANFD1_XIDFC	(CPG_CANFD1.unXIDFC.u32Register)  /*@rg@*/
#define CPG_CANFD1_XIDFC_FLESA	(CPG_CANFD1.unXIDFC.stcField.u14FLESA)  /*@bf@*/
#define CPG_CANFD1_XIDFC_LSE	(CPG_CANFD1.unXIDFC.stcField.u7LSE)  /*@bf@*/

typedef struct stc_cpg_canfdn_xidfc_field{
    uint_io32_t		:2;
    uint_io32_t		u14FLESA:14;
    uint_io32_t		u7LSE:7;
    uint_io32_t		:9;
}stc_cpg_canfdn_xidfc_field_t;

typedef union un_cpg_canfdn_xidfc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_xidfc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_xidfc_t;

/* XIDAM */
#define CPG_CANFD0_XIDAM	(CPG_CANFD0.unXIDAM.u32Register)  /*@rg@*/
#define CPG_CANFD0_XIDAM_EIDM	(CPG_CANFD0.unXIDAM.stcField.u29EIDM)  /*@bf@*/

#define CPG_CANFD1_XIDAM	(CPG_CANFD1.unXIDAM.u32Register)  /*@rg@*/
#define CPG_CANFD1_XIDAM_EIDM	(CPG_CANFD1.unXIDAM.stcField.u29EIDM)  /*@bf@*/

typedef struct stc_cpg_canfdn_xidam_field{
    uint_io32_t		u29EIDM:29;
    uint_io32_t		:3;
}stc_cpg_canfdn_xidam_field_t;

typedef union un_cpg_canfdn_xidam{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_xidam_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_xidam_t;

/* HPMS */
#define CPG_CANFD0_HPMS	(CPG_CANFD0.unHPMS.u32Register)  /*@rg@*/
#define CPG_CANFD0_HPMS_BIDX	(CPG_CANFD0.unHPMS.stcField.u6BIDX)  /*@bf@*/
#define CPG_CANFD0_HPMS_MSI	(CPG_CANFD0.unHPMS.stcField.u2MSI)  /*@bf@*/
#define CPG_CANFD0_HPMS_FIDX	(CPG_CANFD0.unHPMS.stcField.u7FIDX)  /*@bf@*/
#define CPG_CANFD0_HPMS_FLST	(*(volatile uint_io8_t*)0xB4C004AF)  /*@bfbba@*/

#define CPG_CANFD1_HPMS	(CPG_CANFD1.unHPMS.u32Register)  /*@rg@*/
#define CPG_CANFD1_HPMS_BIDX	(CPG_CANFD1.unHPMS.stcField.u6BIDX)  /*@bf@*/
#define CPG_CANFD1_HPMS_MSI	(CPG_CANFD1.unHPMS.stcField.u2MSI)  /*@bf@*/
#define CPG_CANFD1_HPMS_FIDX	(CPG_CANFD1.unHPMS.stcField.u7FIDX)  /*@bf@*/
#define CPG_CANFD1_HPMS_FLST	(*(volatile uint_io8_t*)0xB4C804AF)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_hpms_field{
    uint_io32_t		u6BIDX:6;
    uint_io32_t		u2MSI:2;
    uint_io32_t		u7FIDX:7;
    uint_io32_t		u1FLST:1;
    uint_io32_t		:16;
}stc_cpg_canfdn_hpms_field_t;

typedef union un_cpg_canfdn_hpms{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_hpms_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_hpms_t;

/* NDAT1 */
#define CPG_CANFD0_NDAT1	(CPG_CANFD0.unNDAT1.u32Register)  /*@rg@*/
#define CPG_CANFD0_NDAT1_ND0	(*(volatile uint_io8_t*)0xB4C004C0)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND1	(*(volatile uint_io8_t*)0xB4C004C1)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND2	(*(volatile uint_io8_t*)0xB4C004C2)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND3	(*(volatile uint_io8_t*)0xB4C004C3)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND4	(*(volatile uint_io8_t*)0xB4C004C4)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND5	(*(volatile uint_io8_t*)0xB4C004C5)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND6	(*(volatile uint_io8_t*)0xB4C004C6)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND7	(*(volatile uint_io8_t*)0xB4C004C7)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND8	(*(volatile uint_io8_t*)0xB4C004C8)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND9	(*(volatile uint_io8_t*)0xB4C004C9)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND10	(*(volatile uint_io8_t*)0xB4C004CA)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND11	(*(volatile uint_io8_t*)0xB4C004CB)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND12	(*(volatile uint_io8_t*)0xB4C004CC)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND13	(*(volatile uint_io8_t*)0xB4C004CD)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND14	(*(volatile uint_io8_t*)0xB4C004CE)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND15	(*(volatile uint_io8_t*)0xB4C004CF)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND16	(*(volatile uint_io8_t*)0xB4C004D0)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND17	(*(volatile uint_io8_t*)0xB4C004D1)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND18	(*(volatile uint_io8_t*)0xB4C004D2)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND19	(*(volatile uint_io8_t*)0xB4C004D3)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND20	(*(volatile uint_io8_t*)0xB4C004D4)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND21	(*(volatile uint_io8_t*)0xB4C004D5)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND22	(*(volatile uint_io8_t*)0xB4C004D6)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND23	(*(volatile uint_io8_t*)0xB4C004D7)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND24	(*(volatile uint_io8_t*)0xB4C004D8)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND25	(*(volatile uint_io8_t*)0xB4C004D9)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND26	(*(volatile uint_io8_t*)0xB4C004DA)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND27	(*(volatile uint_io8_t*)0xB4C004DB)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND28	(*(volatile uint_io8_t*)0xB4C004DC)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND29	(*(volatile uint_io8_t*)0xB4C004DD)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND30	(*(volatile uint_io8_t*)0xB4C004DE)  /*@bfbba@*/
#define CPG_CANFD0_NDAT1_ND31	(*(volatile uint_io8_t*)0xB4C004DF)  /*@bfbba@*/

#define CPG_CANFD1_NDAT1	(CPG_CANFD1.unNDAT1.u32Register)  /*@rg@*/
#define CPG_CANFD1_NDAT1_ND0	(*(volatile uint_io8_t*)0xB4C804C0)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND1	(*(volatile uint_io8_t*)0xB4C804C1)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND2	(*(volatile uint_io8_t*)0xB4C804C2)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND3	(*(volatile uint_io8_t*)0xB4C804C3)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND4	(*(volatile uint_io8_t*)0xB4C804C4)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND5	(*(volatile uint_io8_t*)0xB4C804C5)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND6	(*(volatile uint_io8_t*)0xB4C804C6)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND7	(*(volatile uint_io8_t*)0xB4C804C7)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND8	(*(volatile uint_io8_t*)0xB4C804C8)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND9	(*(volatile uint_io8_t*)0xB4C804C9)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND10	(*(volatile uint_io8_t*)0xB4C804CA)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND11	(*(volatile uint_io8_t*)0xB4C804CB)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND12	(*(volatile uint_io8_t*)0xB4C804CC)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND13	(*(volatile uint_io8_t*)0xB4C804CD)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND14	(*(volatile uint_io8_t*)0xB4C804CE)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND15	(*(volatile uint_io8_t*)0xB4C804CF)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND16	(*(volatile uint_io8_t*)0xB4C804D0)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND17	(*(volatile uint_io8_t*)0xB4C804D1)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND18	(*(volatile uint_io8_t*)0xB4C804D2)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND19	(*(volatile uint_io8_t*)0xB4C804D3)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND20	(*(volatile uint_io8_t*)0xB4C804D4)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND21	(*(volatile uint_io8_t*)0xB4C804D5)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND22	(*(volatile uint_io8_t*)0xB4C804D6)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND23	(*(volatile uint_io8_t*)0xB4C804D7)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND24	(*(volatile uint_io8_t*)0xB4C804D8)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND25	(*(volatile uint_io8_t*)0xB4C804D9)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND26	(*(volatile uint_io8_t*)0xB4C804DA)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND27	(*(volatile uint_io8_t*)0xB4C804DB)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND28	(*(volatile uint_io8_t*)0xB4C804DC)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND29	(*(volatile uint_io8_t*)0xB4C804DD)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND30	(*(volatile uint_io8_t*)0xB4C804DE)  /*@bfbba@*/
#define CPG_CANFD1_NDAT1_ND31	(*(volatile uint_io8_t*)0xB4C804DF)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_ndat1_field{
    uint_io32_t		u1ND0:1;
    uint_io32_t		u1ND1:1;
    uint_io32_t		u1ND2:1;
    uint_io32_t		u1ND3:1;
    uint_io32_t		u1ND4:1;
    uint_io32_t		u1ND5:1;
    uint_io32_t		u1ND6:1;
    uint_io32_t		u1ND7:1;
    uint_io32_t		u1ND8:1;
    uint_io32_t		u1ND9:1;
    uint_io32_t		u1ND10:1;
    uint_io32_t		u1ND11:1;
    uint_io32_t		u1ND12:1;
    uint_io32_t		u1ND13:1;
    uint_io32_t		u1ND14:1;
    uint_io32_t		u1ND15:1;
    uint_io32_t		u1ND16:1;
    uint_io32_t		u1ND17:1;
    uint_io32_t		u1ND18:1;
    uint_io32_t		u1ND19:1;
    uint_io32_t		u1ND20:1;
    uint_io32_t		u1ND21:1;
    uint_io32_t		u1ND22:1;
    uint_io32_t		u1ND23:1;
    uint_io32_t		u1ND24:1;
    uint_io32_t		u1ND25:1;
    uint_io32_t		u1ND26:1;
    uint_io32_t		u1ND27:1;
    uint_io32_t		u1ND28:1;
    uint_io32_t		u1ND29:1;
    uint_io32_t		u1ND30:1;
    uint_io32_t		u1ND31:1;
}stc_cpg_canfdn_ndat1_field_t;

typedef union un_cpg_canfdn_ndat1{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_ndat1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_ndat1_t;

/* NDAT2 */
#define CPG_CANFD0_NDAT2	(CPG_CANFD0.unNDAT2.u32Register)  /*@rg@*/
#define CPG_CANFD0_NDAT2_ND32	(*(volatile uint_io8_t*)0xB4C004E0)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND33	(*(volatile uint_io8_t*)0xB4C004E1)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND34	(*(volatile uint_io8_t*)0xB4C004E2)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND35	(*(volatile uint_io8_t*)0xB4C004E3)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND36	(*(volatile uint_io8_t*)0xB4C004E4)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND37	(*(volatile uint_io8_t*)0xB4C004E5)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND38	(*(volatile uint_io8_t*)0xB4C004E6)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND39	(*(volatile uint_io8_t*)0xB4C004E7)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND40	(*(volatile uint_io8_t*)0xB4C004E8)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND41	(*(volatile uint_io8_t*)0xB4C004E9)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND42	(*(volatile uint_io8_t*)0xB4C004EA)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND43	(*(volatile uint_io8_t*)0xB4C004EB)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND44	(*(volatile uint_io8_t*)0xB4C004EC)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND45	(*(volatile uint_io8_t*)0xB4C004ED)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND46	(*(volatile uint_io8_t*)0xB4C004EE)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND47	(*(volatile uint_io8_t*)0xB4C004EF)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND48	(*(volatile uint_io8_t*)0xB4C004F0)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND49	(*(volatile uint_io8_t*)0xB4C004F1)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND50	(*(volatile uint_io8_t*)0xB4C004F2)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND51	(*(volatile uint_io8_t*)0xB4C004F3)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND52	(*(volatile uint_io8_t*)0xB4C004F4)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND53	(*(volatile uint_io8_t*)0xB4C004F5)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND54	(*(volatile uint_io8_t*)0xB4C004F6)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND55	(*(volatile uint_io8_t*)0xB4C004F7)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND56	(*(volatile uint_io8_t*)0xB4C004F8)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND57	(*(volatile uint_io8_t*)0xB4C004F9)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND58	(*(volatile uint_io8_t*)0xB4C004FA)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND59	(*(volatile uint_io8_t*)0xB4C004FB)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND60	(*(volatile uint_io8_t*)0xB4C004FC)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND61	(*(volatile uint_io8_t*)0xB4C004FD)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND62	(*(volatile uint_io8_t*)0xB4C004FE)  /*@bfbba@*/
#define CPG_CANFD0_NDAT2_ND63	(*(volatile uint_io8_t*)0xB4C004FF)  /*@bfbba@*/

#define CPG_CANFD1_NDAT2	(CPG_CANFD1.unNDAT2.u32Register)  /*@rg@*/
#define CPG_CANFD1_NDAT2_ND32	(*(volatile uint_io8_t*)0xB4C804E0)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND33	(*(volatile uint_io8_t*)0xB4C804E1)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND34	(*(volatile uint_io8_t*)0xB4C804E2)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND35	(*(volatile uint_io8_t*)0xB4C804E3)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND36	(*(volatile uint_io8_t*)0xB4C804E4)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND37	(*(volatile uint_io8_t*)0xB4C804E5)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND38	(*(volatile uint_io8_t*)0xB4C804E6)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND39	(*(volatile uint_io8_t*)0xB4C804E7)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND40	(*(volatile uint_io8_t*)0xB4C804E8)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND41	(*(volatile uint_io8_t*)0xB4C804E9)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND42	(*(volatile uint_io8_t*)0xB4C804EA)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND43	(*(volatile uint_io8_t*)0xB4C804EB)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND44	(*(volatile uint_io8_t*)0xB4C804EC)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND45	(*(volatile uint_io8_t*)0xB4C804ED)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND46	(*(volatile uint_io8_t*)0xB4C804EE)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND47	(*(volatile uint_io8_t*)0xB4C804EF)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND48	(*(volatile uint_io8_t*)0xB4C804F0)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND49	(*(volatile uint_io8_t*)0xB4C804F1)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND50	(*(volatile uint_io8_t*)0xB4C804F2)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND51	(*(volatile uint_io8_t*)0xB4C804F3)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND52	(*(volatile uint_io8_t*)0xB4C804F4)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND53	(*(volatile uint_io8_t*)0xB4C804F5)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND54	(*(volatile uint_io8_t*)0xB4C804F6)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND55	(*(volatile uint_io8_t*)0xB4C804F7)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND56	(*(volatile uint_io8_t*)0xB4C804F8)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND57	(*(volatile uint_io8_t*)0xB4C804F9)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND58	(*(volatile uint_io8_t*)0xB4C804FA)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND59	(*(volatile uint_io8_t*)0xB4C804FB)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND60	(*(volatile uint_io8_t*)0xB4C804FC)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND61	(*(volatile uint_io8_t*)0xB4C804FD)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND62	(*(volatile uint_io8_t*)0xB4C804FE)  /*@bfbba@*/
#define CPG_CANFD1_NDAT2_ND63	(*(volatile uint_io8_t*)0xB4C804FF)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_ndat2_field{
    uint_io32_t		u1ND32:1;
    uint_io32_t		u1ND33:1;
    uint_io32_t		u1ND34:1;
    uint_io32_t		u1ND35:1;
    uint_io32_t		u1ND36:1;
    uint_io32_t		u1ND37:1;
    uint_io32_t		u1ND38:1;
    uint_io32_t		u1ND39:1;
    uint_io32_t		u1ND40:1;
    uint_io32_t		u1ND41:1;
    uint_io32_t		u1ND42:1;
    uint_io32_t		u1ND43:1;
    uint_io32_t		u1ND44:1;
    uint_io32_t		u1ND45:1;
    uint_io32_t		u1ND46:1;
    uint_io32_t		u1ND47:1;
    uint_io32_t		u1ND48:1;
    uint_io32_t		u1ND49:1;
    uint_io32_t		u1ND50:1;
    uint_io32_t		u1ND51:1;
    uint_io32_t		u1ND52:1;
    uint_io32_t		u1ND53:1;
    uint_io32_t		u1ND54:1;
    uint_io32_t		u1ND55:1;
    uint_io32_t		u1ND56:1;
    uint_io32_t		u1ND57:1;
    uint_io32_t		u1ND58:1;
    uint_io32_t		u1ND59:1;
    uint_io32_t		u1ND60:1;
    uint_io32_t		u1ND61:1;
    uint_io32_t		u1ND62:1;
    uint_io32_t		u1ND63:1;
}stc_cpg_canfdn_ndat2_field_t;

typedef union un_cpg_canfdn_ndat2{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_ndat2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_ndat2_t;

/* RXF0C */
#define CPG_CANFD0_RXF0C	(CPG_CANFD0.unRXF0C.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXF0C_F0SA	(CPG_CANFD0.unRXF0C.stcField.u14F0SA)  /*@bf@*/
#define CPG_CANFD0_RXF0C_F0S	(CPG_CANFD0.unRXF0C.stcField.u7F0S)  /*@bf@*/
#define CPG_CANFD0_RXF0C_F0WM	(CPG_CANFD0.unRXF0C.stcField.u7F0WM)  /*@bf@*/
#define CPG_CANFD0_RXF0C_F0OM	(*(volatile uint_io8_t*)0xB4C0051F)  /*@bfbba@*/

#define CPG_CANFD1_RXF0C	(CPG_CANFD1.unRXF0C.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXF0C_F0SA	(CPG_CANFD1.unRXF0C.stcField.u14F0SA)  /*@bf@*/
#define CPG_CANFD1_RXF0C_F0S	(CPG_CANFD1.unRXF0C.stcField.u7F0S)  /*@bf@*/
#define CPG_CANFD1_RXF0C_F0WM	(CPG_CANFD1.unRXF0C.stcField.u7F0WM)  /*@bf@*/
#define CPG_CANFD1_RXF0C_F0OM	(*(volatile uint_io8_t*)0xB4C8051F)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_rxf0c_field{
    uint_io32_t		:2;
    uint_io32_t		u14F0SA:14;
    uint_io32_t		u7F0S:7;
    uint_io32_t		:1;
    uint_io32_t		u7F0WM:7;
    uint_io32_t		u1F0OM:1;
}stc_cpg_canfdn_rxf0c_field_t;

typedef union un_cpg_canfdn_rxf0c{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxf0c_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxf0c_t;

/* RXF0S */
#define CPG_CANFD0_RXF0S	(CPG_CANFD0.unRXF0S.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXF0S_F0FL	(CPG_CANFD0.unRXF0S.stcField.u7F0FL)  /*@bf@*/
#define CPG_CANFD0_RXF0S_F0GI	(CPG_CANFD0.unRXF0S.stcField.u6F0GI)  /*@bf@*/
#define CPG_CANFD0_RXF0S_F0PI	(CPG_CANFD0.unRXF0S.stcField.u6F0PI)  /*@bf@*/
#define CPG_CANFD0_RXF0S_F0F	(*(volatile uint_io8_t*)0xB4C00538)  /*@bfbba@*/
#define CPG_CANFD0_RXF0S_RF0L	(*(volatile uint_io8_t*)0xB4C00539)  /*@bfbba@*/

#define CPG_CANFD1_RXF0S	(CPG_CANFD1.unRXF0S.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXF0S_F0FL	(CPG_CANFD1.unRXF0S.stcField.u7F0FL)  /*@bf@*/
#define CPG_CANFD1_RXF0S_F0GI	(CPG_CANFD1.unRXF0S.stcField.u6F0GI)  /*@bf@*/
#define CPG_CANFD1_RXF0S_F0PI	(CPG_CANFD1.unRXF0S.stcField.u6F0PI)  /*@bf@*/
#define CPG_CANFD1_RXF0S_F0F	(*(volatile uint_io8_t*)0xB4C80538)  /*@bfbba@*/
#define CPG_CANFD1_RXF0S_RF0L	(*(volatile uint_io8_t*)0xB4C80539)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_rxf0s_field{
    uint_io32_t		u7F0FL:7;
    uint_io32_t		:1;
    uint_io32_t		u6F0GI:6;
    uint_io32_t		:2;
    uint_io32_t		u6F0PI:6;
    uint_io32_t		:2;
    uint_io32_t		u1F0F:1;
    uint_io32_t		u1RF0L:1;
    uint_io32_t		:6;
}stc_cpg_canfdn_rxf0s_field_t;

typedef union un_cpg_canfdn_rxf0s{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxf0s_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxf0s_t;

/* RXF0A */
#define CPG_CANFD0_RXF0A	(CPG_CANFD0.unRXF0A.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXF0A_F0AI	(CPG_CANFD0.unRXF0A.stcField.u6F0AI)  /*@bf@*/

#define CPG_CANFD1_RXF0A	(CPG_CANFD1.unRXF0A.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXF0A_F0AI	(CPG_CANFD1.unRXF0A.stcField.u6F0AI)  /*@bf@*/

typedef struct stc_cpg_canfdn_rxf0a_field{
    uint_io32_t		u6F0AI:6;
    uint_io32_t		:26;
}stc_cpg_canfdn_rxf0a_field_t;

typedef union un_cpg_canfdn_rxf0a{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxf0a_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxf0a_t;

/* RXBC */
#define CPG_CANFD0_RXBC	(CPG_CANFD0.unRXBC.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXBC_RBSA	(CPG_CANFD0.unRXBC.stcField.u14RBSA)  /*@bf@*/

#define CPG_CANFD1_RXBC	(CPG_CANFD1.unRXBC.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXBC_RBSA	(CPG_CANFD1.unRXBC.stcField.u14RBSA)  /*@bf@*/

typedef struct stc_cpg_canfdn_rxbc_field{
    uint_io32_t		:2;
    uint_io32_t		u14RBSA:14;
    uint_io32_t		:16;
}stc_cpg_canfdn_rxbc_field_t;

typedef union un_cpg_canfdn_rxbc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxbc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxbc_t;

/* RXF1C */
#define CPG_CANFD0_RXF1C	(CPG_CANFD0.unRXF1C.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXF1C_F1SA	(CPG_CANFD0.unRXF1C.stcField.u14F1SA)  /*@bf@*/
#define CPG_CANFD0_RXF1C_F1S	(CPG_CANFD0.unRXF1C.stcField.u7F1S)  /*@bf@*/
#define CPG_CANFD0_RXF1C_F1WM	(CPG_CANFD0.unRXF1C.stcField.u7F1WM)  /*@bf@*/
#define CPG_CANFD0_RXF1C_F1OM	(*(volatile uint_io8_t*)0xB4C0059F)  /*@bfbba@*/

#define CPG_CANFD1_RXF1C	(CPG_CANFD1.unRXF1C.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXF1C_F1SA	(CPG_CANFD1.unRXF1C.stcField.u14F1SA)  /*@bf@*/
#define CPG_CANFD1_RXF1C_F1S	(CPG_CANFD1.unRXF1C.stcField.u7F1S)  /*@bf@*/
#define CPG_CANFD1_RXF1C_F1WM	(CPG_CANFD1.unRXF1C.stcField.u7F1WM)  /*@bf@*/
#define CPG_CANFD1_RXF1C_F1OM	(*(volatile uint_io8_t*)0xB4C8059F)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_rxf1c_field{
    uint_io32_t		:2;
    uint_io32_t		u14F1SA:14;
    uint_io32_t		u7F1S:7;
    uint_io32_t		:1;
    uint_io32_t		u7F1WM:7;
    uint_io32_t		u1F1OM:1;
}stc_cpg_canfdn_rxf1c_field_t;

typedef union un_cpg_canfdn_rxf1c{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxf1c_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxf1c_t;

/* RXF1S */
#define CPG_CANFD0_RXF1S	(CPG_CANFD0.unRXF1S.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXF1S_F1FL	(CPG_CANFD0.unRXF1S.stcField.u7F1FL)  /*@bf@*/
#define CPG_CANFD0_RXF1S_F1GI	(CPG_CANFD0.unRXF1S.stcField.u6F1GI)  /*@bf@*/
#define CPG_CANFD0_RXF1S_F1PI	(CPG_CANFD0.unRXF1S.stcField.u6F1PI)  /*@bf@*/
#define CPG_CANFD0_RXF1S_F1F	(*(volatile uint_io8_t*)0xB4C005B8)  /*@bfbba@*/
#define CPG_CANFD0_RXF1S_RF1L	(*(volatile uint_io8_t*)0xB4C005B9)  /*@bfbba@*/
#define CPG_CANFD0_RXF1S_DMS	(CPG_CANFD0.unRXF1S.stcField.u2DMS)  /*@bf@*/

#define CPG_CANFD1_RXF1S	(CPG_CANFD1.unRXF1S.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXF1S_F1FL	(CPG_CANFD1.unRXF1S.stcField.u7F1FL)  /*@bf@*/
#define CPG_CANFD1_RXF1S_F1GI	(CPG_CANFD1.unRXF1S.stcField.u6F1GI)  /*@bf@*/
#define CPG_CANFD1_RXF1S_F1PI	(CPG_CANFD1.unRXF1S.stcField.u6F1PI)  /*@bf@*/
#define CPG_CANFD1_RXF1S_F1F	(*(volatile uint_io8_t*)0xB4C805B8)  /*@bfbba@*/
#define CPG_CANFD1_RXF1S_RF1L	(*(volatile uint_io8_t*)0xB4C805B9)  /*@bfbba@*/
#define CPG_CANFD1_RXF1S_DMS	(CPG_CANFD1.unRXF1S.stcField.u2DMS)  /*@bf@*/

typedef struct stc_cpg_canfdn_rxf1s_field{
    uint_io32_t		u7F1FL:7;
    uint_io32_t		:1;
    uint_io32_t		u6F1GI:6;
    uint_io32_t		:2;
    uint_io32_t		u6F1PI:6;
    uint_io32_t		:2;
    uint_io32_t		u1F1F:1;
    uint_io32_t		u1RF1L:1;
    uint_io32_t		:4;
    uint_io32_t		u2DMS:2;
}stc_cpg_canfdn_rxf1s_field_t;

typedef union un_cpg_canfdn_rxf1s{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxf1s_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxf1s_t;

/* RXF1A */
#define CPG_CANFD0_RXF1A	(CPG_CANFD0.unRXF1A.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXF1A_F1AI	(CPG_CANFD0.unRXF1A.stcField.u6F1AI)  /*@bf@*/

#define CPG_CANFD1_RXF1A	(CPG_CANFD1.unRXF1A.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXF1A_F1AI	(CPG_CANFD1.unRXF1A.stcField.u6F1AI)  /*@bf@*/

typedef struct stc_cpg_canfdn_rxf1a_field{
    uint_io32_t		u6F1AI:6;
    uint_io32_t		:26;
}stc_cpg_canfdn_rxf1a_field_t;

typedef union un_cpg_canfdn_rxf1a{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxf1a_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxf1a_t;

/* RXESC */
#define CPG_CANFD0_RXESC	(CPG_CANFD0.unRXESC.u32Register)  /*@rg@*/
#define CPG_CANFD0_RXESC_F0DS	(CPG_CANFD0.unRXESC.stcField.u3F0DS)  /*@bf@*/
#define CPG_CANFD0_RXESC_F1DS	(CPG_CANFD0.unRXESC.stcField.u3F1DS)  /*@bf@*/
#define CPG_CANFD0_RXESC_RBDS	(CPG_CANFD0.unRXESC.stcField.u3RBDS)  /*@bf@*/

#define CPG_CANFD1_RXESC	(CPG_CANFD1.unRXESC.u32Register)  /*@rg@*/
#define CPG_CANFD1_RXESC_F0DS	(CPG_CANFD1.unRXESC.stcField.u3F0DS)  /*@bf@*/
#define CPG_CANFD1_RXESC_F1DS	(CPG_CANFD1.unRXESC.stcField.u3F1DS)  /*@bf@*/
#define CPG_CANFD1_RXESC_RBDS	(CPG_CANFD1.unRXESC.stcField.u3RBDS)  /*@bf@*/

typedef struct stc_cpg_canfdn_rxesc_field{
    uint_io32_t		u3F0DS:3;
    uint_io32_t		:1;
    uint_io32_t		u3F1DS:3;
    uint_io32_t		:1;
    uint_io32_t		u3RBDS:3;
    uint_io32_t		:21;
}stc_cpg_canfdn_rxesc_field_t;

typedef union un_cpg_canfdn_rxesc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_rxesc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_rxesc_t;

/* TXBC */
#define CPG_CANFD0_TXBC	(CPG_CANFD0.unTXBC.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBC_TBSA	(CPG_CANFD0.unTXBC.stcField.u14TBSA)  /*@bf@*/
#define CPG_CANFD0_TXBC_NDTB	(CPG_CANFD0.unTXBC.stcField.u6NDTB)  /*@bf@*/
#define CPG_CANFD0_TXBC_TFQS	(CPG_CANFD0.unTXBC.stcField.u6TFQS)  /*@bf@*/
#define CPG_CANFD0_TXBC_TFQM	(*(volatile uint_io8_t*)0xB4C0061E)  /*@bfbba@*/

#define CPG_CANFD1_TXBC	(CPG_CANFD1.unTXBC.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBC_TBSA	(CPG_CANFD1.unTXBC.stcField.u14TBSA)  /*@bf@*/
#define CPG_CANFD1_TXBC_NDTB	(CPG_CANFD1.unTXBC.stcField.u6NDTB)  /*@bf@*/
#define CPG_CANFD1_TXBC_TFQS	(CPG_CANFD1.unTXBC.stcField.u6TFQS)  /*@bf@*/
#define CPG_CANFD1_TXBC_TFQM	(*(volatile uint_io8_t*)0xB4C8061E)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbc_field{
    uint_io32_t		:2;
    uint_io32_t		u14TBSA:14;
    uint_io32_t		u6NDTB:6;
    uint_io32_t		:2;
    uint_io32_t		u6TFQS:6;
    uint_io32_t		u1TFQM:1;
    uint_io32_t		:1;
}stc_cpg_canfdn_txbc_field_t;

typedef union un_cpg_canfdn_txbc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbc_t;

/* TXFQS */
#define CPG_CANFD0_TXFQS	(CPG_CANFD0.unTXFQS.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXFQS_TFFL	(CPG_CANFD0.unTXFQS.stcField.u6TFFL)  /*@bf@*/
#define CPG_CANFD0_TXFQS_TFGI	(CPG_CANFD0.unTXFQS.stcField.u5TFGI)  /*@bf@*/
#define CPG_CANFD0_TXFQS_TFQPI	(CPG_CANFD0.unTXFQS.stcField.u5TFQPI)  /*@bf@*/
#define CPG_CANFD0_TXFQS_TFQF	(*(volatile uint_io8_t*)0xB4C00635)  /*@bfbba@*/

#define CPG_CANFD1_TXFQS	(CPG_CANFD1.unTXFQS.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXFQS_TFFL	(CPG_CANFD1.unTXFQS.stcField.u6TFFL)  /*@bf@*/
#define CPG_CANFD1_TXFQS_TFGI	(CPG_CANFD1.unTXFQS.stcField.u5TFGI)  /*@bf@*/
#define CPG_CANFD1_TXFQS_TFQPI	(CPG_CANFD1.unTXFQS.stcField.u5TFQPI)  /*@bf@*/
#define CPG_CANFD1_TXFQS_TFQF	(*(volatile uint_io8_t*)0xB4C80635)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txfqs_field{
    uint_io32_t		u6TFFL:6;
    uint_io32_t		:2;
    uint_io32_t		u5TFGI:5;
    uint_io32_t		:3;
    uint_io32_t		u5TFQPI:5;
    uint_io32_t		u1TFQF:1;
    uint_io32_t		:10;
}stc_cpg_canfdn_txfqs_field_t;

typedef union un_cpg_canfdn_txfqs{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txfqs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txfqs_t;

/* TXESC */
#define CPG_CANFD0_TXESC	(CPG_CANFD0.unTXESC.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXESC_TBDS	(CPG_CANFD0.unTXESC.stcField.u3TBDS)  /*@bf@*/

#define CPG_CANFD1_TXESC	(CPG_CANFD1.unTXESC.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXESC_TBDS	(CPG_CANFD1.unTXESC.stcField.u3TBDS)  /*@bf@*/

typedef struct stc_cpg_canfdn_txesc_field{
    uint_io32_t		u3TBDS:3;
    uint_io32_t		:29;
}stc_cpg_canfdn_txesc_field_t;

typedef union un_cpg_canfdn_txesc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txesc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txesc_t;

/* TXBRP */
#define CPG_CANFD0_TXBRP	(CPG_CANFD0.unTXBRP.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBRP_TRP0	(*(volatile uint_io8_t*)0xB4C00660)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP1	(*(volatile uint_io8_t*)0xB4C00661)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP2	(*(volatile uint_io8_t*)0xB4C00662)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP3	(*(volatile uint_io8_t*)0xB4C00663)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP4	(*(volatile uint_io8_t*)0xB4C00664)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP5	(*(volatile uint_io8_t*)0xB4C00665)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP6	(*(volatile uint_io8_t*)0xB4C00666)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP7	(*(volatile uint_io8_t*)0xB4C00667)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP8	(*(volatile uint_io8_t*)0xB4C00668)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP9	(*(volatile uint_io8_t*)0xB4C00669)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP10	(*(volatile uint_io8_t*)0xB4C0066A)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP11	(*(volatile uint_io8_t*)0xB4C0066B)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP12	(*(volatile uint_io8_t*)0xB4C0066C)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP13	(*(volatile uint_io8_t*)0xB4C0066D)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP14	(*(volatile uint_io8_t*)0xB4C0066E)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP15	(*(volatile uint_io8_t*)0xB4C0066F)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP16	(*(volatile uint_io8_t*)0xB4C00670)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP17	(*(volatile uint_io8_t*)0xB4C00671)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP18	(*(volatile uint_io8_t*)0xB4C00672)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP19	(*(volatile uint_io8_t*)0xB4C00673)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP20	(*(volatile uint_io8_t*)0xB4C00674)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP21	(*(volatile uint_io8_t*)0xB4C00675)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP22	(*(volatile uint_io8_t*)0xB4C00676)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP23	(*(volatile uint_io8_t*)0xB4C00677)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP24	(*(volatile uint_io8_t*)0xB4C00678)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP25	(*(volatile uint_io8_t*)0xB4C00679)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP26	(*(volatile uint_io8_t*)0xB4C0067A)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP27	(*(volatile uint_io8_t*)0xB4C0067B)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP28	(*(volatile uint_io8_t*)0xB4C0067C)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP29	(*(volatile uint_io8_t*)0xB4C0067D)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP30	(*(volatile uint_io8_t*)0xB4C0067E)  /*@bfbba@*/
#define CPG_CANFD0_TXBRP_TRP31	(*(volatile uint_io8_t*)0xB4C0067F)  /*@bfbba@*/

#define CPG_CANFD1_TXBRP	(CPG_CANFD1.unTXBRP.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBRP_TRP0	(*(volatile uint_io8_t*)0xB4C80660)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP1	(*(volatile uint_io8_t*)0xB4C80661)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP2	(*(volatile uint_io8_t*)0xB4C80662)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP3	(*(volatile uint_io8_t*)0xB4C80663)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP4	(*(volatile uint_io8_t*)0xB4C80664)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP5	(*(volatile uint_io8_t*)0xB4C80665)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP6	(*(volatile uint_io8_t*)0xB4C80666)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP7	(*(volatile uint_io8_t*)0xB4C80667)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP8	(*(volatile uint_io8_t*)0xB4C80668)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP9	(*(volatile uint_io8_t*)0xB4C80669)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP10	(*(volatile uint_io8_t*)0xB4C8066A)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP11	(*(volatile uint_io8_t*)0xB4C8066B)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP12	(*(volatile uint_io8_t*)0xB4C8066C)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP13	(*(volatile uint_io8_t*)0xB4C8066D)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP14	(*(volatile uint_io8_t*)0xB4C8066E)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP15	(*(volatile uint_io8_t*)0xB4C8066F)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP16	(*(volatile uint_io8_t*)0xB4C80670)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP17	(*(volatile uint_io8_t*)0xB4C80671)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP18	(*(volatile uint_io8_t*)0xB4C80672)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP19	(*(volatile uint_io8_t*)0xB4C80673)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP20	(*(volatile uint_io8_t*)0xB4C80674)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP21	(*(volatile uint_io8_t*)0xB4C80675)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP22	(*(volatile uint_io8_t*)0xB4C80676)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP23	(*(volatile uint_io8_t*)0xB4C80677)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP24	(*(volatile uint_io8_t*)0xB4C80678)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP25	(*(volatile uint_io8_t*)0xB4C80679)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP26	(*(volatile uint_io8_t*)0xB4C8067A)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP27	(*(volatile uint_io8_t*)0xB4C8067B)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP28	(*(volatile uint_io8_t*)0xB4C8067C)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP29	(*(volatile uint_io8_t*)0xB4C8067D)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP30	(*(volatile uint_io8_t*)0xB4C8067E)  /*@bfbba@*/
#define CPG_CANFD1_TXBRP_TRP31	(*(volatile uint_io8_t*)0xB4C8067F)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbrp_field{
    uint_io32_t		u1TRP0:1;
    uint_io32_t		u1TRP1:1;
    uint_io32_t		u1TRP2:1;
    uint_io32_t		u1TRP3:1;
    uint_io32_t		u1TRP4:1;
    uint_io32_t		u1TRP5:1;
    uint_io32_t		u1TRP6:1;
    uint_io32_t		u1TRP7:1;
    uint_io32_t		u1TRP8:1;
    uint_io32_t		u1TRP9:1;
    uint_io32_t		u1TRP10:1;
    uint_io32_t		u1TRP11:1;
    uint_io32_t		u1TRP12:1;
    uint_io32_t		u1TRP13:1;
    uint_io32_t		u1TRP14:1;
    uint_io32_t		u1TRP15:1;
    uint_io32_t		u1TRP16:1;
    uint_io32_t		u1TRP17:1;
    uint_io32_t		u1TRP18:1;
    uint_io32_t		u1TRP19:1;
    uint_io32_t		u1TRP20:1;
    uint_io32_t		u1TRP21:1;
    uint_io32_t		u1TRP22:1;
    uint_io32_t		u1TRP23:1;
    uint_io32_t		u1TRP24:1;
    uint_io32_t		u1TRP25:1;
    uint_io32_t		u1TRP26:1;
    uint_io32_t		u1TRP27:1;
    uint_io32_t		u1TRP28:1;
    uint_io32_t		u1TRP29:1;
    uint_io32_t		u1TRP30:1;
    uint_io32_t		u1TRP31:1;
}stc_cpg_canfdn_txbrp_field_t;

typedef union un_cpg_canfdn_txbrp{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbrp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbrp_t;

/* TXBAR */
#define CPG_CANFD0_TXBAR	(CPG_CANFD0.unTXBAR.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBAR_AR0	(*(volatile uint_io8_t*)0xB4C00680)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR1	(*(volatile uint_io8_t*)0xB4C00681)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR2	(*(volatile uint_io8_t*)0xB4C00682)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR3	(*(volatile uint_io8_t*)0xB4C00683)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR4	(*(volatile uint_io8_t*)0xB4C00684)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR5	(*(volatile uint_io8_t*)0xB4C00685)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR6	(*(volatile uint_io8_t*)0xB4C00686)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR7	(*(volatile uint_io8_t*)0xB4C00687)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR8	(*(volatile uint_io8_t*)0xB4C00688)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR9	(*(volatile uint_io8_t*)0xB4C00689)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR10	(*(volatile uint_io8_t*)0xB4C0068A)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR11	(*(volatile uint_io8_t*)0xB4C0068B)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR12	(*(volatile uint_io8_t*)0xB4C0068C)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR13	(*(volatile uint_io8_t*)0xB4C0068D)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR14	(*(volatile uint_io8_t*)0xB4C0068E)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR15	(*(volatile uint_io8_t*)0xB4C0068F)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR16	(*(volatile uint_io8_t*)0xB4C00690)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR17	(*(volatile uint_io8_t*)0xB4C00691)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR18	(*(volatile uint_io8_t*)0xB4C00692)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR19	(*(volatile uint_io8_t*)0xB4C00693)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR20	(*(volatile uint_io8_t*)0xB4C00694)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR21	(*(volatile uint_io8_t*)0xB4C00695)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR22	(*(volatile uint_io8_t*)0xB4C00696)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR23	(*(volatile uint_io8_t*)0xB4C00697)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR24	(*(volatile uint_io8_t*)0xB4C00698)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR25	(*(volatile uint_io8_t*)0xB4C00699)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR26	(*(volatile uint_io8_t*)0xB4C0069A)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR27	(*(volatile uint_io8_t*)0xB4C0069B)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR28	(*(volatile uint_io8_t*)0xB4C0069C)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR29	(*(volatile uint_io8_t*)0xB4C0069D)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR30	(*(volatile uint_io8_t*)0xB4C0069E)  /*@bfbba@*/
#define CPG_CANFD0_TXBAR_AR31	(*(volatile uint_io8_t*)0xB4C0069F)  /*@bfbba@*/

#define CPG_CANFD1_TXBAR	(CPG_CANFD1.unTXBAR.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBAR_AR0	(*(volatile uint_io8_t*)0xB4C80680)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR1	(*(volatile uint_io8_t*)0xB4C80681)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR2	(*(volatile uint_io8_t*)0xB4C80682)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR3	(*(volatile uint_io8_t*)0xB4C80683)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR4	(*(volatile uint_io8_t*)0xB4C80684)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR5	(*(volatile uint_io8_t*)0xB4C80685)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR6	(*(volatile uint_io8_t*)0xB4C80686)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR7	(*(volatile uint_io8_t*)0xB4C80687)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR8	(*(volatile uint_io8_t*)0xB4C80688)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR9	(*(volatile uint_io8_t*)0xB4C80689)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR10	(*(volatile uint_io8_t*)0xB4C8068A)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR11	(*(volatile uint_io8_t*)0xB4C8068B)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR12	(*(volatile uint_io8_t*)0xB4C8068C)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR13	(*(volatile uint_io8_t*)0xB4C8068D)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR14	(*(volatile uint_io8_t*)0xB4C8068E)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR15	(*(volatile uint_io8_t*)0xB4C8068F)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR16	(*(volatile uint_io8_t*)0xB4C80690)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR17	(*(volatile uint_io8_t*)0xB4C80691)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR18	(*(volatile uint_io8_t*)0xB4C80692)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR19	(*(volatile uint_io8_t*)0xB4C80693)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR20	(*(volatile uint_io8_t*)0xB4C80694)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR21	(*(volatile uint_io8_t*)0xB4C80695)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR22	(*(volatile uint_io8_t*)0xB4C80696)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR23	(*(volatile uint_io8_t*)0xB4C80697)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR24	(*(volatile uint_io8_t*)0xB4C80698)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR25	(*(volatile uint_io8_t*)0xB4C80699)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR26	(*(volatile uint_io8_t*)0xB4C8069A)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR27	(*(volatile uint_io8_t*)0xB4C8069B)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR28	(*(volatile uint_io8_t*)0xB4C8069C)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR29	(*(volatile uint_io8_t*)0xB4C8069D)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR30	(*(volatile uint_io8_t*)0xB4C8069E)  /*@bfbba@*/
#define CPG_CANFD1_TXBAR_AR31	(*(volatile uint_io8_t*)0xB4C8069F)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbar_field{
    uint_io32_t		u1AR0:1;
    uint_io32_t		u1AR1:1;
    uint_io32_t		u1AR2:1;
    uint_io32_t		u1AR3:1;
    uint_io32_t		u1AR4:1;
    uint_io32_t		u1AR5:1;
    uint_io32_t		u1AR6:1;
    uint_io32_t		u1AR7:1;
    uint_io32_t		u1AR8:1;
    uint_io32_t		u1AR9:1;
    uint_io32_t		u1AR10:1;
    uint_io32_t		u1AR11:1;
    uint_io32_t		u1AR12:1;
    uint_io32_t		u1AR13:1;
    uint_io32_t		u1AR14:1;
    uint_io32_t		u1AR15:1;
    uint_io32_t		u1AR16:1;
    uint_io32_t		u1AR17:1;
    uint_io32_t		u1AR18:1;
    uint_io32_t		u1AR19:1;
    uint_io32_t		u1AR20:1;
    uint_io32_t		u1AR21:1;
    uint_io32_t		u1AR22:1;
    uint_io32_t		u1AR23:1;
    uint_io32_t		u1AR24:1;
    uint_io32_t		u1AR25:1;
    uint_io32_t		u1AR26:1;
    uint_io32_t		u1AR27:1;
    uint_io32_t		u1AR28:1;
    uint_io32_t		u1AR29:1;
    uint_io32_t		u1AR30:1;
    uint_io32_t		u1AR31:1;
}stc_cpg_canfdn_txbar_field_t;

typedef union un_cpg_canfdn_txbar{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbar_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbar_t;

/* TXBCR */
#define CPG_CANFD0_TXBCR	(CPG_CANFD0.unTXBCR.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBCR_CR0	(*(volatile uint_io8_t*)0xB4C006A0)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR1	(*(volatile uint_io8_t*)0xB4C006A1)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR2	(*(volatile uint_io8_t*)0xB4C006A2)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR3	(*(volatile uint_io8_t*)0xB4C006A3)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR4	(*(volatile uint_io8_t*)0xB4C006A4)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR5	(*(volatile uint_io8_t*)0xB4C006A5)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR6	(*(volatile uint_io8_t*)0xB4C006A6)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR7	(*(volatile uint_io8_t*)0xB4C006A7)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR8	(*(volatile uint_io8_t*)0xB4C006A8)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR9	(*(volatile uint_io8_t*)0xB4C006A9)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR10	(*(volatile uint_io8_t*)0xB4C006AA)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR11	(*(volatile uint_io8_t*)0xB4C006AB)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR12	(*(volatile uint_io8_t*)0xB4C006AC)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR13	(*(volatile uint_io8_t*)0xB4C006AD)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR14	(*(volatile uint_io8_t*)0xB4C006AE)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR15	(*(volatile uint_io8_t*)0xB4C006AF)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR16	(*(volatile uint_io8_t*)0xB4C006B0)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR17	(*(volatile uint_io8_t*)0xB4C006B1)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR18	(*(volatile uint_io8_t*)0xB4C006B2)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR19	(*(volatile uint_io8_t*)0xB4C006B3)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR20	(*(volatile uint_io8_t*)0xB4C006B4)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR21	(*(volatile uint_io8_t*)0xB4C006B5)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR22	(*(volatile uint_io8_t*)0xB4C006B6)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR23	(*(volatile uint_io8_t*)0xB4C006B7)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR24	(*(volatile uint_io8_t*)0xB4C006B8)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR25	(*(volatile uint_io8_t*)0xB4C006B9)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR26	(*(volatile uint_io8_t*)0xB4C006BA)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR27	(*(volatile uint_io8_t*)0xB4C006BB)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR28	(*(volatile uint_io8_t*)0xB4C006BC)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR29	(*(volatile uint_io8_t*)0xB4C006BD)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR30	(*(volatile uint_io8_t*)0xB4C006BE)  /*@bfbba@*/
#define CPG_CANFD0_TXBCR_CR31	(*(volatile uint_io8_t*)0xB4C006BF)  /*@bfbba@*/

#define CPG_CANFD1_TXBCR	(CPG_CANFD1.unTXBCR.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBCR_CR0	(*(volatile uint_io8_t*)0xB4C806A0)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR1	(*(volatile uint_io8_t*)0xB4C806A1)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR2	(*(volatile uint_io8_t*)0xB4C806A2)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR3	(*(volatile uint_io8_t*)0xB4C806A3)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR4	(*(volatile uint_io8_t*)0xB4C806A4)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR5	(*(volatile uint_io8_t*)0xB4C806A5)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR6	(*(volatile uint_io8_t*)0xB4C806A6)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR7	(*(volatile uint_io8_t*)0xB4C806A7)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR8	(*(volatile uint_io8_t*)0xB4C806A8)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR9	(*(volatile uint_io8_t*)0xB4C806A9)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR10	(*(volatile uint_io8_t*)0xB4C806AA)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR11	(*(volatile uint_io8_t*)0xB4C806AB)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR12	(*(volatile uint_io8_t*)0xB4C806AC)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR13	(*(volatile uint_io8_t*)0xB4C806AD)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR14	(*(volatile uint_io8_t*)0xB4C806AE)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR15	(*(volatile uint_io8_t*)0xB4C806AF)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR16	(*(volatile uint_io8_t*)0xB4C806B0)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR17	(*(volatile uint_io8_t*)0xB4C806B1)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR18	(*(volatile uint_io8_t*)0xB4C806B2)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR19	(*(volatile uint_io8_t*)0xB4C806B3)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR20	(*(volatile uint_io8_t*)0xB4C806B4)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR21	(*(volatile uint_io8_t*)0xB4C806B5)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR22	(*(volatile uint_io8_t*)0xB4C806B6)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR23	(*(volatile uint_io8_t*)0xB4C806B7)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR24	(*(volatile uint_io8_t*)0xB4C806B8)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR25	(*(volatile uint_io8_t*)0xB4C806B9)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR26	(*(volatile uint_io8_t*)0xB4C806BA)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR27	(*(volatile uint_io8_t*)0xB4C806BB)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR28	(*(volatile uint_io8_t*)0xB4C806BC)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR29	(*(volatile uint_io8_t*)0xB4C806BD)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR30	(*(volatile uint_io8_t*)0xB4C806BE)  /*@bfbba@*/
#define CPG_CANFD1_TXBCR_CR31	(*(volatile uint_io8_t*)0xB4C806BF)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbcr_field{
    uint_io32_t		u1CR0:1;
    uint_io32_t		u1CR1:1;
    uint_io32_t		u1CR2:1;
    uint_io32_t		u1CR3:1;
    uint_io32_t		u1CR4:1;
    uint_io32_t		u1CR5:1;
    uint_io32_t		u1CR6:1;
    uint_io32_t		u1CR7:1;
    uint_io32_t		u1CR8:1;
    uint_io32_t		u1CR9:1;
    uint_io32_t		u1CR10:1;
    uint_io32_t		u1CR11:1;
    uint_io32_t		u1CR12:1;
    uint_io32_t		u1CR13:1;
    uint_io32_t		u1CR14:1;
    uint_io32_t		u1CR15:1;
    uint_io32_t		u1CR16:1;
    uint_io32_t		u1CR17:1;
    uint_io32_t		u1CR18:1;
    uint_io32_t		u1CR19:1;
    uint_io32_t		u1CR20:1;
    uint_io32_t		u1CR21:1;
    uint_io32_t		u1CR22:1;
    uint_io32_t		u1CR23:1;
    uint_io32_t		u1CR24:1;
    uint_io32_t		u1CR25:1;
    uint_io32_t		u1CR26:1;
    uint_io32_t		u1CR27:1;
    uint_io32_t		u1CR28:1;
    uint_io32_t		u1CR29:1;
    uint_io32_t		u1CR30:1;
    uint_io32_t		u1CR31:1;
}stc_cpg_canfdn_txbcr_field_t;

typedef union un_cpg_canfdn_txbcr{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbcr_t;

/* TXBTO */
#define CPG_CANFD0_TXBTO	(CPG_CANFD0.unTXBTO.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBTO_TO0	(*(volatile uint_io8_t*)0xB4C006C0)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO1	(*(volatile uint_io8_t*)0xB4C006C1)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO2	(*(volatile uint_io8_t*)0xB4C006C2)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO3	(*(volatile uint_io8_t*)0xB4C006C3)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO4	(*(volatile uint_io8_t*)0xB4C006C4)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO5	(*(volatile uint_io8_t*)0xB4C006C5)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO6	(*(volatile uint_io8_t*)0xB4C006C6)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO7	(*(volatile uint_io8_t*)0xB4C006C7)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO8	(*(volatile uint_io8_t*)0xB4C006C8)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO9	(*(volatile uint_io8_t*)0xB4C006C9)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO10	(*(volatile uint_io8_t*)0xB4C006CA)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO11	(*(volatile uint_io8_t*)0xB4C006CB)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO12	(*(volatile uint_io8_t*)0xB4C006CC)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO13	(*(volatile uint_io8_t*)0xB4C006CD)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO14	(*(volatile uint_io8_t*)0xB4C006CE)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO15	(*(volatile uint_io8_t*)0xB4C006CF)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO16	(*(volatile uint_io8_t*)0xB4C006D0)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO17	(*(volatile uint_io8_t*)0xB4C006D1)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO18	(*(volatile uint_io8_t*)0xB4C006D2)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO19	(*(volatile uint_io8_t*)0xB4C006D3)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO20	(*(volatile uint_io8_t*)0xB4C006D4)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO21	(*(volatile uint_io8_t*)0xB4C006D5)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO22	(*(volatile uint_io8_t*)0xB4C006D6)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO23	(*(volatile uint_io8_t*)0xB4C006D7)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO24	(*(volatile uint_io8_t*)0xB4C006D8)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO25	(*(volatile uint_io8_t*)0xB4C006D9)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO26	(*(volatile uint_io8_t*)0xB4C006DA)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO27	(*(volatile uint_io8_t*)0xB4C006DB)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO28	(*(volatile uint_io8_t*)0xB4C006DC)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO29	(*(volatile uint_io8_t*)0xB4C006DD)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO30	(*(volatile uint_io8_t*)0xB4C006DE)  /*@bfbba@*/
#define CPG_CANFD0_TXBTO_TO31	(*(volatile uint_io8_t*)0xB4C006DF)  /*@bfbba@*/

#define CPG_CANFD1_TXBTO	(CPG_CANFD1.unTXBTO.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBTO_TO0	(*(volatile uint_io8_t*)0xB4C806C0)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO1	(*(volatile uint_io8_t*)0xB4C806C1)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO2	(*(volatile uint_io8_t*)0xB4C806C2)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO3	(*(volatile uint_io8_t*)0xB4C806C3)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO4	(*(volatile uint_io8_t*)0xB4C806C4)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO5	(*(volatile uint_io8_t*)0xB4C806C5)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO6	(*(volatile uint_io8_t*)0xB4C806C6)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO7	(*(volatile uint_io8_t*)0xB4C806C7)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO8	(*(volatile uint_io8_t*)0xB4C806C8)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO9	(*(volatile uint_io8_t*)0xB4C806C9)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO10	(*(volatile uint_io8_t*)0xB4C806CA)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO11	(*(volatile uint_io8_t*)0xB4C806CB)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO12	(*(volatile uint_io8_t*)0xB4C806CC)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO13	(*(volatile uint_io8_t*)0xB4C806CD)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO14	(*(volatile uint_io8_t*)0xB4C806CE)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO15	(*(volatile uint_io8_t*)0xB4C806CF)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO16	(*(volatile uint_io8_t*)0xB4C806D0)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO17	(*(volatile uint_io8_t*)0xB4C806D1)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO18	(*(volatile uint_io8_t*)0xB4C806D2)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO19	(*(volatile uint_io8_t*)0xB4C806D3)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO20	(*(volatile uint_io8_t*)0xB4C806D4)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO21	(*(volatile uint_io8_t*)0xB4C806D5)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO22	(*(volatile uint_io8_t*)0xB4C806D6)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO23	(*(volatile uint_io8_t*)0xB4C806D7)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO24	(*(volatile uint_io8_t*)0xB4C806D8)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO25	(*(volatile uint_io8_t*)0xB4C806D9)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO26	(*(volatile uint_io8_t*)0xB4C806DA)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO27	(*(volatile uint_io8_t*)0xB4C806DB)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO28	(*(volatile uint_io8_t*)0xB4C806DC)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO29	(*(volatile uint_io8_t*)0xB4C806DD)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO30	(*(volatile uint_io8_t*)0xB4C806DE)  /*@bfbba@*/
#define CPG_CANFD1_TXBTO_TO31	(*(volatile uint_io8_t*)0xB4C806DF)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbto_field{
    uint_io32_t		u1TO0:1;
    uint_io32_t		u1TO1:1;
    uint_io32_t		u1TO2:1;
    uint_io32_t		u1TO3:1;
    uint_io32_t		u1TO4:1;
    uint_io32_t		u1TO5:1;
    uint_io32_t		u1TO6:1;
    uint_io32_t		u1TO7:1;
    uint_io32_t		u1TO8:1;
    uint_io32_t		u1TO9:1;
    uint_io32_t		u1TO10:1;
    uint_io32_t		u1TO11:1;
    uint_io32_t		u1TO12:1;
    uint_io32_t		u1TO13:1;
    uint_io32_t		u1TO14:1;
    uint_io32_t		u1TO15:1;
    uint_io32_t		u1TO16:1;
    uint_io32_t		u1TO17:1;
    uint_io32_t		u1TO18:1;
    uint_io32_t		u1TO19:1;
    uint_io32_t		u1TO20:1;
    uint_io32_t		u1TO21:1;
    uint_io32_t		u1TO22:1;
    uint_io32_t		u1TO23:1;
    uint_io32_t		u1TO24:1;
    uint_io32_t		u1TO25:1;
    uint_io32_t		u1TO26:1;
    uint_io32_t		u1TO27:1;
    uint_io32_t		u1TO28:1;
    uint_io32_t		u1TO29:1;
    uint_io32_t		u1TO30:1;
    uint_io32_t		u1TO31:1;
}stc_cpg_canfdn_txbto_field_t;

typedef union un_cpg_canfdn_txbto{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbto_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbto_t;

/* TXBCF */
#define CPG_CANFD0_TXBCF	(CPG_CANFD0.unTXBCF.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBCF_CF0	(*(volatile uint_io8_t*)0xB4C006E0)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF1	(*(volatile uint_io8_t*)0xB4C006E1)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF2	(*(volatile uint_io8_t*)0xB4C006E2)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF3	(*(volatile uint_io8_t*)0xB4C006E3)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF4	(*(volatile uint_io8_t*)0xB4C006E4)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF5	(*(volatile uint_io8_t*)0xB4C006E5)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF6	(*(volatile uint_io8_t*)0xB4C006E6)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF7	(*(volatile uint_io8_t*)0xB4C006E7)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF8	(*(volatile uint_io8_t*)0xB4C006E8)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF9	(*(volatile uint_io8_t*)0xB4C006E9)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF10	(*(volatile uint_io8_t*)0xB4C006EA)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF11	(*(volatile uint_io8_t*)0xB4C006EB)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF12	(*(volatile uint_io8_t*)0xB4C006EC)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF13	(*(volatile uint_io8_t*)0xB4C006ED)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF14	(*(volatile uint_io8_t*)0xB4C006EE)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF15	(*(volatile uint_io8_t*)0xB4C006EF)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF16	(*(volatile uint_io8_t*)0xB4C006F0)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF17	(*(volatile uint_io8_t*)0xB4C006F1)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF18	(*(volatile uint_io8_t*)0xB4C006F2)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF19	(*(volatile uint_io8_t*)0xB4C006F3)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF20	(*(volatile uint_io8_t*)0xB4C006F4)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF21	(*(volatile uint_io8_t*)0xB4C006F5)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF22	(*(volatile uint_io8_t*)0xB4C006F6)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF23	(*(volatile uint_io8_t*)0xB4C006F7)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF24	(*(volatile uint_io8_t*)0xB4C006F8)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF25	(*(volatile uint_io8_t*)0xB4C006F9)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF26	(*(volatile uint_io8_t*)0xB4C006FA)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF27	(*(volatile uint_io8_t*)0xB4C006FB)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF28	(*(volatile uint_io8_t*)0xB4C006FC)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF29	(*(volatile uint_io8_t*)0xB4C006FD)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF30	(*(volatile uint_io8_t*)0xB4C006FE)  /*@bfbba@*/
#define CPG_CANFD0_TXBCF_CF31	(*(volatile uint_io8_t*)0xB4C006FF)  /*@bfbba@*/

#define CPG_CANFD1_TXBCF	(CPG_CANFD1.unTXBCF.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBCF_CF0	(*(volatile uint_io8_t*)0xB4C806E0)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF1	(*(volatile uint_io8_t*)0xB4C806E1)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF2	(*(volatile uint_io8_t*)0xB4C806E2)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF3	(*(volatile uint_io8_t*)0xB4C806E3)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF4	(*(volatile uint_io8_t*)0xB4C806E4)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF5	(*(volatile uint_io8_t*)0xB4C806E5)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF6	(*(volatile uint_io8_t*)0xB4C806E6)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF7	(*(volatile uint_io8_t*)0xB4C806E7)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF8	(*(volatile uint_io8_t*)0xB4C806E8)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF9	(*(volatile uint_io8_t*)0xB4C806E9)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF10	(*(volatile uint_io8_t*)0xB4C806EA)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF11	(*(volatile uint_io8_t*)0xB4C806EB)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF12	(*(volatile uint_io8_t*)0xB4C806EC)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF13	(*(volatile uint_io8_t*)0xB4C806ED)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF14	(*(volatile uint_io8_t*)0xB4C806EE)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF15	(*(volatile uint_io8_t*)0xB4C806EF)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF16	(*(volatile uint_io8_t*)0xB4C806F0)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF17	(*(volatile uint_io8_t*)0xB4C806F1)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF18	(*(volatile uint_io8_t*)0xB4C806F2)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF19	(*(volatile uint_io8_t*)0xB4C806F3)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF20	(*(volatile uint_io8_t*)0xB4C806F4)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF21	(*(volatile uint_io8_t*)0xB4C806F5)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF22	(*(volatile uint_io8_t*)0xB4C806F6)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF23	(*(volatile uint_io8_t*)0xB4C806F7)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF24	(*(volatile uint_io8_t*)0xB4C806F8)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF25	(*(volatile uint_io8_t*)0xB4C806F9)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF26	(*(volatile uint_io8_t*)0xB4C806FA)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF27	(*(volatile uint_io8_t*)0xB4C806FB)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF28	(*(volatile uint_io8_t*)0xB4C806FC)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF29	(*(volatile uint_io8_t*)0xB4C806FD)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF30	(*(volatile uint_io8_t*)0xB4C806FE)  /*@bfbba@*/
#define CPG_CANFD1_TXBCF_CF31	(*(volatile uint_io8_t*)0xB4C806FF)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbcf_field{
    uint_io32_t		u1CF0:1;
    uint_io32_t		u1CF1:1;
    uint_io32_t		u1CF2:1;
    uint_io32_t		u1CF3:1;
    uint_io32_t		u1CF4:1;
    uint_io32_t		u1CF5:1;
    uint_io32_t		u1CF6:1;
    uint_io32_t		u1CF7:1;
    uint_io32_t		u1CF8:1;
    uint_io32_t		u1CF9:1;
    uint_io32_t		u1CF10:1;
    uint_io32_t		u1CF11:1;
    uint_io32_t		u1CF12:1;
    uint_io32_t		u1CF13:1;
    uint_io32_t		u1CF14:1;
    uint_io32_t		u1CF15:1;
    uint_io32_t		u1CF16:1;
    uint_io32_t		u1CF17:1;
    uint_io32_t		u1CF18:1;
    uint_io32_t		u1CF19:1;
    uint_io32_t		u1CF20:1;
    uint_io32_t		u1CF21:1;
    uint_io32_t		u1CF22:1;
    uint_io32_t		u1CF23:1;
    uint_io32_t		u1CF24:1;
    uint_io32_t		u1CF25:1;
    uint_io32_t		u1CF26:1;
    uint_io32_t		u1CF27:1;
    uint_io32_t		u1CF28:1;
    uint_io32_t		u1CF29:1;
    uint_io32_t		u1CF30:1;
    uint_io32_t		u1CF31:1;
}stc_cpg_canfdn_txbcf_field_t;

typedef union un_cpg_canfdn_txbcf{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbcf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbcf_t;

/* TXBTIE */
#define CPG_CANFD0_TXBTIE	(CPG_CANFD0.unTXBTIE.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBTIE_TIE0	(*(volatile uint_io8_t*)0xB4C00700)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE1	(*(volatile uint_io8_t*)0xB4C00701)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE2	(*(volatile uint_io8_t*)0xB4C00702)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE3	(*(volatile uint_io8_t*)0xB4C00703)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE4	(*(volatile uint_io8_t*)0xB4C00704)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE5	(*(volatile uint_io8_t*)0xB4C00705)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE6	(*(volatile uint_io8_t*)0xB4C00706)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE7	(*(volatile uint_io8_t*)0xB4C00707)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE8	(*(volatile uint_io8_t*)0xB4C00708)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE9	(*(volatile uint_io8_t*)0xB4C00709)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE10	(*(volatile uint_io8_t*)0xB4C0070A)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE11	(*(volatile uint_io8_t*)0xB4C0070B)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE12	(*(volatile uint_io8_t*)0xB4C0070C)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE13	(*(volatile uint_io8_t*)0xB4C0070D)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE14	(*(volatile uint_io8_t*)0xB4C0070E)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE15	(*(volatile uint_io8_t*)0xB4C0070F)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE16	(*(volatile uint_io8_t*)0xB4C00710)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE17	(*(volatile uint_io8_t*)0xB4C00711)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE18	(*(volatile uint_io8_t*)0xB4C00712)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE19	(*(volatile uint_io8_t*)0xB4C00713)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE20	(*(volatile uint_io8_t*)0xB4C00714)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE21	(*(volatile uint_io8_t*)0xB4C00715)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE22	(*(volatile uint_io8_t*)0xB4C00716)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE23	(*(volatile uint_io8_t*)0xB4C00717)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE24	(*(volatile uint_io8_t*)0xB4C00718)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE25	(*(volatile uint_io8_t*)0xB4C00719)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE26	(*(volatile uint_io8_t*)0xB4C0071A)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE27	(*(volatile uint_io8_t*)0xB4C0071B)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE28	(*(volatile uint_io8_t*)0xB4C0071C)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE29	(*(volatile uint_io8_t*)0xB4C0071D)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE30	(*(volatile uint_io8_t*)0xB4C0071E)  /*@bfbba@*/
#define CPG_CANFD0_TXBTIE_TIE31	(*(volatile uint_io8_t*)0xB4C0071F)  /*@bfbba@*/

#define CPG_CANFD1_TXBTIE	(CPG_CANFD1.unTXBTIE.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBTIE_TIE0	(*(volatile uint_io8_t*)0xB4C80700)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE1	(*(volatile uint_io8_t*)0xB4C80701)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE2	(*(volatile uint_io8_t*)0xB4C80702)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE3	(*(volatile uint_io8_t*)0xB4C80703)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE4	(*(volatile uint_io8_t*)0xB4C80704)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE5	(*(volatile uint_io8_t*)0xB4C80705)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE6	(*(volatile uint_io8_t*)0xB4C80706)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE7	(*(volatile uint_io8_t*)0xB4C80707)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE8	(*(volatile uint_io8_t*)0xB4C80708)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE9	(*(volatile uint_io8_t*)0xB4C80709)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE10	(*(volatile uint_io8_t*)0xB4C8070A)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE11	(*(volatile uint_io8_t*)0xB4C8070B)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE12	(*(volatile uint_io8_t*)0xB4C8070C)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE13	(*(volatile uint_io8_t*)0xB4C8070D)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE14	(*(volatile uint_io8_t*)0xB4C8070E)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE15	(*(volatile uint_io8_t*)0xB4C8070F)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE16	(*(volatile uint_io8_t*)0xB4C80710)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE17	(*(volatile uint_io8_t*)0xB4C80711)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE18	(*(volatile uint_io8_t*)0xB4C80712)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE19	(*(volatile uint_io8_t*)0xB4C80713)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE20	(*(volatile uint_io8_t*)0xB4C80714)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE21	(*(volatile uint_io8_t*)0xB4C80715)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE22	(*(volatile uint_io8_t*)0xB4C80716)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE23	(*(volatile uint_io8_t*)0xB4C80717)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE24	(*(volatile uint_io8_t*)0xB4C80718)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE25	(*(volatile uint_io8_t*)0xB4C80719)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE26	(*(volatile uint_io8_t*)0xB4C8071A)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE27	(*(volatile uint_io8_t*)0xB4C8071B)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE28	(*(volatile uint_io8_t*)0xB4C8071C)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE29	(*(volatile uint_io8_t*)0xB4C8071D)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE30	(*(volatile uint_io8_t*)0xB4C8071E)  /*@bfbba@*/
#define CPG_CANFD1_TXBTIE_TIE31	(*(volatile uint_io8_t*)0xB4C8071F)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbtie_field{
    uint_io32_t		u1TIE0:1;
    uint_io32_t		u1TIE1:1;
    uint_io32_t		u1TIE2:1;
    uint_io32_t		u1TIE3:1;
    uint_io32_t		u1TIE4:1;
    uint_io32_t		u1TIE5:1;
    uint_io32_t		u1TIE6:1;
    uint_io32_t		u1TIE7:1;
    uint_io32_t		u1TIE8:1;
    uint_io32_t		u1TIE9:1;
    uint_io32_t		u1TIE10:1;
    uint_io32_t		u1TIE11:1;
    uint_io32_t		u1TIE12:1;
    uint_io32_t		u1TIE13:1;
    uint_io32_t		u1TIE14:1;
    uint_io32_t		u1TIE15:1;
    uint_io32_t		u1TIE16:1;
    uint_io32_t		u1TIE17:1;
    uint_io32_t		u1TIE18:1;
    uint_io32_t		u1TIE19:1;
    uint_io32_t		u1TIE20:1;
    uint_io32_t		u1TIE21:1;
    uint_io32_t		u1TIE22:1;
    uint_io32_t		u1TIE23:1;
    uint_io32_t		u1TIE24:1;
    uint_io32_t		u1TIE25:1;
    uint_io32_t		u1TIE26:1;
    uint_io32_t		u1TIE27:1;
    uint_io32_t		u1TIE28:1;
    uint_io32_t		u1TIE29:1;
    uint_io32_t		u1TIE30:1;
    uint_io32_t		u1TIE31:1;
}stc_cpg_canfdn_txbtie_field_t;

typedef union un_cpg_canfdn_txbtie{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbtie_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbtie_t;

/* TXBCIE */
#define CPG_CANFD0_TXBCIE	(CPG_CANFD0.unTXBCIE.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXBCIE_CFIE0	(*(volatile uint_io8_t*)0xB4C00720)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE1	(*(volatile uint_io8_t*)0xB4C00721)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE2	(*(volatile uint_io8_t*)0xB4C00722)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE3	(*(volatile uint_io8_t*)0xB4C00723)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE4	(*(volatile uint_io8_t*)0xB4C00724)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE5	(*(volatile uint_io8_t*)0xB4C00725)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE6	(*(volatile uint_io8_t*)0xB4C00726)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE7	(*(volatile uint_io8_t*)0xB4C00727)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE8	(*(volatile uint_io8_t*)0xB4C00728)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE9	(*(volatile uint_io8_t*)0xB4C00729)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE10	(*(volatile uint_io8_t*)0xB4C0072A)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE11	(*(volatile uint_io8_t*)0xB4C0072B)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE12	(*(volatile uint_io8_t*)0xB4C0072C)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE13	(*(volatile uint_io8_t*)0xB4C0072D)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE14	(*(volatile uint_io8_t*)0xB4C0072E)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE15	(*(volatile uint_io8_t*)0xB4C0072F)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE16	(*(volatile uint_io8_t*)0xB4C00730)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE17	(*(volatile uint_io8_t*)0xB4C00731)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE18	(*(volatile uint_io8_t*)0xB4C00732)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE19	(*(volatile uint_io8_t*)0xB4C00733)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE20	(*(volatile uint_io8_t*)0xB4C00734)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE21	(*(volatile uint_io8_t*)0xB4C00735)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE22	(*(volatile uint_io8_t*)0xB4C00736)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE23	(*(volatile uint_io8_t*)0xB4C00737)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE24	(*(volatile uint_io8_t*)0xB4C00738)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE25	(*(volatile uint_io8_t*)0xB4C00739)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE26	(*(volatile uint_io8_t*)0xB4C0073A)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE27	(*(volatile uint_io8_t*)0xB4C0073B)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE28	(*(volatile uint_io8_t*)0xB4C0073C)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE29	(*(volatile uint_io8_t*)0xB4C0073D)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE30	(*(volatile uint_io8_t*)0xB4C0073E)  /*@bfbba@*/
#define CPG_CANFD0_TXBCIE_CFIE31	(*(volatile uint_io8_t*)0xB4C0073F)  /*@bfbba@*/

#define CPG_CANFD1_TXBCIE	(CPG_CANFD1.unTXBCIE.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXBCIE_CFIE0	(*(volatile uint_io8_t*)0xB4C80720)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE1	(*(volatile uint_io8_t*)0xB4C80721)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE2	(*(volatile uint_io8_t*)0xB4C80722)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE3	(*(volatile uint_io8_t*)0xB4C80723)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE4	(*(volatile uint_io8_t*)0xB4C80724)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE5	(*(volatile uint_io8_t*)0xB4C80725)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE6	(*(volatile uint_io8_t*)0xB4C80726)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE7	(*(volatile uint_io8_t*)0xB4C80727)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE8	(*(volatile uint_io8_t*)0xB4C80728)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE9	(*(volatile uint_io8_t*)0xB4C80729)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE10	(*(volatile uint_io8_t*)0xB4C8072A)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE11	(*(volatile uint_io8_t*)0xB4C8072B)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE12	(*(volatile uint_io8_t*)0xB4C8072C)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE13	(*(volatile uint_io8_t*)0xB4C8072D)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE14	(*(volatile uint_io8_t*)0xB4C8072E)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE15	(*(volatile uint_io8_t*)0xB4C8072F)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE16	(*(volatile uint_io8_t*)0xB4C80730)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE17	(*(volatile uint_io8_t*)0xB4C80731)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE18	(*(volatile uint_io8_t*)0xB4C80732)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE19	(*(volatile uint_io8_t*)0xB4C80733)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE20	(*(volatile uint_io8_t*)0xB4C80734)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE21	(*(volatile uint_io8_t*)0xB4C80735)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE22	(*(volatile uint_io8_t*)0xB4C80736)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE23	(*(volatile uint_io8_t*)0xB4C80737)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE24	(*(volatile uint_io8_t*)0xB4C80738)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE25	(*(volatile uint_io8_t*)0xB4C80739)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE26	(*(volatile uint_io8_t*)0xB4C8073A)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE27	(*(volatile uint_io8_t*)0xB4C8073B)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE28	(*(volatile uint_io8_t*)0xB4C8073C)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE29	(*(volatile uint_io8_t*)0xB4C8073D)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE30	(*(volatile uint_io8_t*)0xB4C8073E)  /*@bfbba@*/
#define CPG_CANFD1_TXBCIE_CFIE31	(*(volatile uint_io8_t*)0xB4C8073F)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txbcie_field{
    uint_io32_t		u1CFIE0:1;
    uint_io32_t		u1CFIE1:1;
    uint_io32_t		u1CFIE2:1;
    uint_io32_t		u1CFIE3:1;
    uint_io32_t		u1CFIE4:1;
    uint_io32_t		u1CFIE5:1;
    uint_io32_t		u1CFIE6:1;
    uint_io32_t		u1CFIE7:1;
    uint_io32_t		u1CFIE8:1;
    uint_io32_t		u1CFIE9:1;
    uint_io32_t		u1CFIE10:1;
    uint_io32_t		u1CFIE11:1;
    uint_io32_t		u1CFIE12:1;
    uint_io32_t		u1CFIE13:1;
    uint_io32_t		u1CFIE14:1;
    uint_io32_t		u1CFIE15:1;
    uint_io32_t		u1CFIE16:1;
    uint_io32_t		u1CFIE17:1;
    uint_io32_t		u1CFIE18:1;
    uint_io32_t		u1CFIE19:1;
    uint_io32_t		u1CFIE20:1;
    uint_io32_t		u1CFIE21:1;
    uint_io32_t		u1CFIE22:1;
    uint_io32_t		u1CFIE23:1;
    uint_io32_t		u1CFIE24:1;
    uint_io32_t		u1CFIE25:1;
    uint_io32_t		u1CFIE26:1;
    uint_io32_t		u1CFIE27:1;
    uint_io32_t		u1CFIE28:1;
    uint_io32_t		u1CFIE29:1;
    uint_io32_t		u1CFIE30:1;
    uint_io32_t		u1CFIE31:1;
}stc_cpg_canfdn_txbcie_field_t;

typedef union un_cpg_canfdn_txbcie{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txbcie_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txbcie_t;

/* TXEFC */
#define CPG_CANFD0_TXEFC	(CPG_CANFD0.unTXEFC.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXEFC_EFSA	(CPG_CANFD0.unTXEFC.stcField.u14EFSA)  /*@bf@*/
#define CPG_CANFD0_TXEFC_EFS	(CPG_CANFD0.unTXEFC.stcField.u6EFS)  /*@bf@*/
#define CPG_CANFD0_TXEFC_EFWM	(CPG_CANFD0.unTXEFC.stcField.u6EFWM)  /*@bf@*/

#define CPG_CANFD1_TXEFC	(CPG_CANFD1.unTXEFC.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXEFC_EFSA	(CPG_CANFD1.unTXEFC.stcField.u14EFSA)  /*@bf@*/
#define CPG_CANFD1_TXEFC_EFS	(CPG_CANFD1.unTXEFC.stcField.u6EFS)  /*@bf@*/
#define CPG_CANFD1_TXEFC_EFWM	(CPG_CANFD1.unTXEFC.stcField.u6EFWM)  /*@bf@*/

typedef struct stc_cpg_canfdn_txefc_field{
    uint_io32_t		:2;
    uint_io32_t		u14EFSA:14;
    uint_io32_t		u6EFS:6;
    uint_io32_t		:2;
    uint_io32_t		u6EFWM:6;
    uint_io32_t		:2;
}stc_cpg_canfdn_txefc_field_t;

typedef union un_cpg_canfdn_txefc{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txefc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txefc_t;

/* TXEFS */
#define CPG_CANFD0_TXEFS	(CPG_CANFD0.unTXEFS.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXEFS_EFFL	(CPG_CANFD0.unTXEFS.stcField.u6EFFL)  /*@bf@*/
#define CPG_CANFD0_TXEFS_EFGI	(CPG_CANFD0.unTXEFS.stcField.u5EFGI)  /*@bf@*/
#define CPG_CANFD0_TXEFS_EFPI	(CPG_CANFD0.unTXEFS.stcField.u5EFPI)  /*@bf@*/
#define CPG_CANFD0_TXEFS_EFF	(*(volatile uint_io8_t*)0xB4C007B8)  /*@bfbba@*/
#define CPG_CANFD0_TXEFS_TEFL	(*(volatile uint_io8_t*)0xB4C007B9)  /*@bfbba@*/

#define CPG_CANFD1_TXEFS	(CPG_CANFD1.unTXEFS.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXEFS_EFFL	(CPG_CANFD1.unTXEFS.stcField.u6EFFL)  /*@bf@*/
#define CPG_CANFD1_TXEFS_EFGI	(CPG_CANFD1.unTXEFS.stcField.u5EFGI)  /*@bf@*/
#define CPG_CANFD1_TXEFS_EFPI	(CPG_CANFD1.unTXEFS.stcField.u5EFPI)  /*@bf@*/
#define CPG_CANFD1_TXEFS_EFF	(*(volatile uint_io8_t*)0xB4C807B8)  /*@bfbba@*/
#define CPG_CANFD1_TXEFS_TEFL	(*(volatile uint_io8_t*)0xB4C807B9)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_txefs_field{
    uint_io32_t		u6EFFL:6;
    uint_io32_t		:2;
    uint_io32_t		u5EFGI:5;
    uint_io32_t		:3;
    uint_io32_t		u5EFPI:5;
    uint_io32_t		:3;
    uint_io32_t		u1EFF:1;
    uint_io32_t		u1TEFL:1;
    uint_io32_t		:6;
}stc_cpg_canfdn_txefs_field_t;

typedef union un_cpg_canfdn_txefs{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txefs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txefs_t;

/* TXEFA */
#define CPG_CANFD0_TXEFA	(CPG_CANFD0.unTXEFA.u32Register)  /*@rg@*/
#define CPG_CANFD0_TXEFA_EFAI	(CPG_CANFD0.unTXEFA.stcField.u5EFAI)  /*@bf@*/

#define CPG_CANFD1_TXEFA	(CPG_CANFD1.unTXEFA.u32Register)  /*@rg@*/
#define CPG_CANFD1_TXEFA_EFAI	(CPG_CANFD1.unTXEFA.stcField.u5EFAI)  /*@bf@*/

typedef struct stc_cpg_canfdn_txefa_field{
    uint_io32_t		u5EFAI:5;
    uint_io32_t		:27;
}stc_cpg_canfdn_txefa_field_t;

typedef union un_cpg_canfdn_txefa{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_txefa_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_txefa_t;

/* FDECR */
#define CPG_CANFD0_FDECR	(CPG_CANFD0.unFDECR.u8Register)  /*@rg@*/
#define CPG_CANFD0_FDECR_SEIE	(*(volatile uint_io8_t*)0xB4C01000)  /*@bfbba@*/
#define CPG_CANFD0_FDECR_DEIE	(*(volatile uint_io8_t*)0xB4C01001)  /*@bfbba@*/
#define CPG_CANFD0_FDECR_CEREN	(*(volatile uint_io8_t*)0xB4C01002)  /*@bfbba@*/
#define CPG_CANFD0_FDECR_CEIV	(*(volatile uint_io8_t*)0xB4C01003)  /*@bfbba@*/

#define CPG_CANFD1_FDECR	(CPG_CANFD1.unFDECR.u8Register)  /*@rg@*/
#define CPG_CANFD1_FDECR_SEIE	(*(volatile uint_io8_t*)0xB4C81000)  /*@bfbba@*/
#define CPG_CANFD1_FDECR_DEIE	(*(volatile uint_io8_t*)0xB4C81001)  /*@bfbba@*/
#define CPG_CANFD1_FDECR_CEREN	(*(volatile uint_io8_t*)0xB4C81002)  /*@bfbba@*/
#define CPG_CANFD1_FDECR_CEIV	(*(volatile uint_io8_t*)0xB4C81003)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_fdecr_field{
    uint_io8_t		u1SEIE:1;
    uint_io8_t		u1DEIE:1;
    uint_io8_t		u1CEREN:1;
    uint_io8_t		u1CEIV:1;
    uint_io8_t		:4;
}stc_cpg_canfdn_fdecr_field_t;

typedef union un_cpg_canfdn_fdecr{
    uint_io8_t		u8Register;
    stc_cpg_canfdn_fdecr_field_t		stcField;
}un_cpg_canfdn_fdecr_t;

/* FDESR */
#define CPG_CANFD0_FDESR	(CPG_CANFD0.unFDESR.u8Register)  /*@rg@*/
#define CPG_CANFD0_FDESR_SEI	(*(volatile uint_io8_t*)0xB4C01008)  /*@bfbba@*/
#define CPG_CANFD0_FDESR_DEI	(*(volatile uint_io8_t*)0xB4C01009)  /*@bfbba@*/

#define CPG_CANFD1_FDESR	(CPG_CANFD1.unFDESR.u8Register)  /*@rg@*/
#define CPG_CANFD1_FDESR_SEI	(*(volatile uint_io8_t*)0xB4C81008)  /*@bfbba@*/
#define CPG_CANFD1_FDESR_DEI	(*(volatile uint_io8_t*)0xB4C81009)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_fdesr_field{
    uint_io8_t		u1SEI:1;
    uint_io8_t		u1DEI:1;
    uint_io8_t		:6;
}stc_cpg_canfdn_fdesr_field_t;

typedef union un_cpg_canfdn_fdesr{
    uint_io8_t		u8Register;
    stc_cpg_canfdn_fdesr_field_t		stcField;
}un_cpg_canfdn_fdesr_t;

/* FDSEAR */
#define CPG_CANFD0_FDSEAR	(CPG_CANFD0.unFDSEAR.u16Register)  /*@rg@*/
#define CPG_CANFD0_FDSEAR_SRA	CPG_CANFD0_FDSEAR  /*@bfrg@*/

#define CPG_CANFD1_FDSEAR	(CPG_CANFD1.unFDSEAR.u16Register)  /*@rg@*/
#define CPG_CANFD1_FDSEAR_SRA	CPG_CANFD1_FDSEAR  /*@bfrg@*/

typedef union un_cpg_canfdn_fdsear{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_canfdn_fdsear_t;

/* FDESCR */
#define CPG_CANFD0_FDESCR	(CPG_CANFD0.unFDESCR.u8Register)  /*@rg@*/
#define CPG_CANFD0_FDESCR_SEIC	(*(volatile uint_io8_t*)0xB4C01028)  /*@bfbba@*/
#define CPG_CANFD0_FDESCR_DEIC	(*(volatile uint_io8_t*)0xB4C01029)  /*@bfbba@*/

#define CPG_CANFD1_FDESCR	(CPG_CANFD1.unFDESCR.u8Register)  /*@rg@*/
#define CPG_CANFD1_FDESCR_SEIC	(*(volatile uint_io8_t*)0xB4C81028)  /*@bfbba@*/
#define CPG_CANFD1_FDESCR_DEIC	(*(volatile uint_io8_t*)0xB4C81029)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_fdescr_field{
    uint_io8_t		u1SEIC:1;
    uint_io8_t		u1DEIC:1;
    uint_io8_t		:6;
}stc_cpg_canfdn_fdescr_field_t;

typedef union un_cpg_canfdn_fdescr{
    uint_io8_t		u8Register;
    stc_cpg_canfdn_fdescr_field_t		stcField;
}un_cpg_canfdn_fdescr_t;

/* FDDEAR */
#define CPG_CANFD0_FDDEAR	(CPG_CANFD0.unFDDEAR.u16Register)  /*@rg@*/
#define CPG_CANFD0_FDDEAR_DRA	CPG_CANFD0_FDDEAR  /*@bfrg@*/

#define CPG_CANFD1_FDDEAR	(CPG_CANFD1.unFDDEAR.u16Register)  /*@rg@*/
#define CPG_CANFD1_FDDEAR_DRA	CPG_CANFD1_FDDEAR  /*@bfrg@*/

typedef union un_cpg_canfdn_fddear{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_canfdn_fddear_t;

/* FDFECR */
#define CPG_CANFD0_FDFECR	(CPG_CANFD0.unFDFECR.u32Register)  /*@rg@*/
#define CPG_CANFD0_FDFECR_EI0	(*(volatile uint_io8_t*)0xB4C01040)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI1	(*(volatile uint_io8_t*)0xB4C01041)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI2	(*(volatile uint_io8_t*)0xB4C01042)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI3	(*(volatile uint_io8_t*)0xB4C01043)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI4	(*(volatile uint_io8_t*)0xB4C01044)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI5	(*(volatile uint_io8_t*)0xB4C01045)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI6	(*(volatile uint_io8_t*)0xB4C01046)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI7	(*(volatile uint_io8_t*)0xB4C01047)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI8	(*(volatile uint_io8_t*)0xB4C01048)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI9	(*(volatile uint_io8_t*)0xB4C01049)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI10	(*(volatile uint_io8_t*)0xB4C0104A)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI11	(*(volatile uint_io8_t*)0xB4C0104B)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI12	(*(volatile uint_io8_t*)0xB4C0104C)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI13	(*(volatile uint_io8_t*)0xB4C0104D)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI14	(*(volatile uint_io8_t*)0xB4C0104E)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EI15	(*(volatile uint_io8_t*)0xB4C0104F)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EY0	(*(volatile uint_io8_t*)0xB4C01050)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EY1	(*(volatile uint_io8_t*)0xB4C01051)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_EY2	(*(volatile uint_io8_t*)0xB4C01052)  /*@bfbba@*/
#define CPG_CANFD0_FDFECR_FERR	(*(volatile uint_io8_t*)0xB4C0105F)  /*@bfbba@*/

#define CPG_CANFD1_FDFECR	(CPG_CANFD1.unFDFECR.u32Register)  /*@rg@*/
#define CPG_CANFD1_FDFECR_EI0	(*(volatile uint_io8_t*)0xB4C81040)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI1	(*(volatile uint_io8_t*)0xB4C81041)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI2	(*(volatile uint_io8_t*)0xB4C81042)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI3	(*(volatile uint_io8_t*)0xB4C81043)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI4	(*(volatile uint_io8_t*)0xB4C81044)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI5	(*(volatile uint_io8_t*)0xB4C81045)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI6	(*(volatile uint_io8_t*)0xB4C81046)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI7	(*(volatile uint_io8_t*)0xB4C81047)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI8	(*(volatile uint_io8_t*)0xB4C81048)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI9	(*(volatile uint_io8_t*)0xB4C81049)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI10	(*(volatile uint_io8_t*)0xB4C8104A)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI11	(*(volatile uint_io8_t*)0xB4C8104B)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI12	(*(volatile uint_io8_t*)0xB4C8104C)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI13	(*(volatile uint_io8_t*)0xB4C8104D)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI14	(*(volatile uint_io8_t*)0xB4C8104E)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EI15	(*(volatile uint_io8_t*)0xB4C8104F)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EY0	(*(volatile uint_io8_t*)0xB4C81050)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EY1	(*(volatile uint_io8_t*)0xB4C81051)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_EY2	(*(volatile uint_io8_t*)0xB4C81052)  /*@bfbba@*/
#define CPG_CANFD1_FDFECR_FERR	(*(volatile uint_io8_t*)0xB4C8105F)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_fdfecr_field{
    uint_io32_t		u1EI0:1;
    uint_io32_t		u1EI1:1;
    uint_io32_t		u1EI2:1;
    uint_io32_t		u1EI3:1;
    uint_io32_t		u1EI4:1;
    uint_io32_t		u1EI5:1;
    uint_io32_t		u1EI6:1;
    uint_io32_t		u1EI7:1;
    uint_io32_t		u1EI8:1;
    uint_io32_t		u1EI9:1;
    uint_io32_t		u1EI10:1;
    uint_io32_t		u1EI11:1;
    uint_io32_t		u1EI12:1;
    uint_io32_t		u1EI13:1;
    uint_io32_t		u1EI14:1;
    uint_io32_t		u1EI15:1;
    uint_io32_t		u1EY0:1;
    uint_io32_t		u1EY1:1;
    uint_io32_t		u1EY2:1;
    uint_io32_t		:12;
    uint_io32_t		u1FERR:1;
}stc_cpg_canfdn_fdfecr_field_t;

typedef union un_cpg_canfdn_fdfecr{
    uint_io32_t		u32Register;
    stc_cpg_canfdn_fdfecr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_canfdn_fdfecr_t;

/* TSCNTR */
#define CPG_CANFD0_TSCNTR	(CPG_CANFD0.unTSCNTR.u16Register)  /*@rg@*/
#define CPG_CANFD0_TSCNTR_CCLR	(*(volatile uint_io8_t*)0xB4C01800)  /*@bfbba@*/

#define CPG_CANFD1_TSCNTR	(CPG_CANFD1.unTSCNTR.u16Register)  /*@rg@*/
#define CPG_CANFD1_TSCNTR_CCLR	(*(volatile uint_io8_t*)0xB4C81800)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_tscntr_field{
    uint_io16_t		u1CCLR:1;
    uint_io16_t		:15;
}stc_cpg_canfdn_tscntr_field_t;

typedef union un_cpg_canfdn_tscntr{
    uint_io16_t		u16Register;
    stc_cpg_canfdn_tscntr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_canfdn_tscntr_t;

/* TSMDR */
#define CPG_CANFD0_TSMDR	(CPG_CANFD0.unTSMDR.u16Register)  /*@rg@*/
#define CPG_CANFD0_TSMDR_CNTEN	(*(volatile uint_io8_t*)0xB4C01810)  /*@bfbba@*/

#define CPG_CANFD1_TSMDR	(CPG_CANFD1.unTSMDR.u16Register)  /*@rg@*/
#define CPG_CANFD1_TSMDR_CNTEN	(*(volatile uint_io8_t*)0xB4C81810)  /*@bfbba@*/

typedef struct stc_cpg_canfdn_tsmdr_field{
    uint_io16_t		u1CNTEN:1;
    uint_io16_t		:15;
}stc_cpg_canfdn_tsmdr_field_t;

typedef union un_cpg_canfdn_tsmdr{
    uint_io16_t		u16Register;
    stc_cpg_canfdn_tsmdr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_canfdn_tsmdr_t;

/* TSDIVR_L */
#define CPG_CANFD0_TSDIVR_L	(CPG_CANFD0.unTSDIVR_L.u16Register)  /*@rg@*/
#define CPG_CANFD0_TSDIVR_L_CDIV	CPG_CANFD0_TSDIVR_L  /*@bfrg@*/

#define CPG_CANFD1_TSDIVR_L	(CPG_CANFD1.unTSDIVR_L.u16Register)  /*@rg@*/
#define CPG_CANFD1_TSDIVR_L_CDIV	CPG_CANFD1_TSDIVR_L  /*@bfrg@*/

typedef union un_cpg_canfdn_tsdivr_l{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_canfdn_tsdivr_l_t;

/* TSCDTR */
#define CPG_CANFD0_TSCDTR	(CPG_CANFD0.unTSCDTR.u16Register)  /*@rg@*/
#define CPG_CANFD0_TSCDTR_CNT	CPG_CANFD0_TSCDTR  /*@bfrg@*/

#define CPG_CANFD1_TSCDTR	(CPG_CANFD1.unTSCDTR.u16Register)  /*@rg@*/
#define CPG_CANFD1_TSCDTR_CNT	CPG_CANFD1_TSCDTR  /*@bfrg@*/

typedef union un_cpg_canfdn_tscdtr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_canfdn_tscdtr_t;

/* TSCPCLR */
#define CPG_CANFD0_TSCPCLR	(CPG_CANFD0.unTSCPCLR.u16Register)  /*@rg@*/
#define CPG_CANFD0_TSCPCLR_CMP	CPG_CANFD0_TSCPCLR  /*@bfrg@*/

#define CPG_CANFD1_TSCPCLR	(CPG_CANFD1.unTSCPCLR.u16Register)  /*@rg@*/
#define CPG_CANFD1_TSCPCLR_CMP	CPG_CANFD1_TSCPCLR  /*@bfrg@*/

typedef union un_cpg_canfdn_tscpclr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_canfdn_tscpclr_t;


typedef struct stc_cpg_canfdn{
    un_cpg_canfdn_crel_t	unCREL;	/* 0x00000000 */
    un_cpg_canfdn_endn_t	unENDN;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000008 */
    un_cpg_canfdn_dbtp_t	unDBTP;	/* 0x0000000C */
    un_cpg_canfdn_test_t	unTEST;	/* 0x00000010 */
    un_cpg_canfdn_rwd_t	unRWD;	/* 0x00000014 */
    un_cpg_canfdn_cccr_t	unCCCR;	/* 0x00000018 */
    un_cpg_canfdn_nbtp_t	unNBTP;	/* 0x0000001C */
    un_cpg_canfdn_tscc_t	unTSCC;	/* 0x00000020 */
    un_cpg_canfdn_tscv_t	unTSCV;	/* 0x00000024 */
    un_cpg_canfdn_tocc_t	unTOCC;	/* 0x00000028 */
    un_cpg_canfdn_tocv_t	unTOCV;	/* 0x0000002C */
    uint_io8_t	au8Reserved1[16];	/* 0x00000030 */
    un_cpg_canfdn_ecr_t	unECR;	/* 0x00000040 */
    un_cpg_canfdn_psr_t	unPSR;	/* 0x00000044 */
    un_cpg_canfdn_tdcr_t	unTDCR;	/* 0x00000048 */
    uint_io8_t	au8Reserved2[4];	/* 0x0000004C */
    un_cpg_canfdn_ir_t	unIR;	/* 0x00000050 */
    un_cpg_canfdn_ie_t	unIE;	/* 0x00000054 */
    un_cpg_canfdn_ils_t	unILS;	/* 0x00000058 */
    un_cpg_canfdn_ile_t	unILE;	/* 0x0000005C */
    uint_io8_t	au8Reserved3[32];	/* 0x00000060 */
    un_cpg_canfdn_gfc_t	unGFC;	/* 0x00000080 */
    un_cpg_canfdn_sidfc_t	unSIDFC;	/* 0x00000084 */
    un_cpg_canfdn_xidfc_t	unXIDFC;	/* 0x00000088 */
    uint_io8_t	au8Reserved4[4];	/* 0x0000008C */
    un_cpg_canfdn_xidam_t	unXIDAM;	/* 0x00000090 */
    un_cpg_canfdn_hpms_t	unHPMS;	/* 0x00000094 */
    un_cpg_canfdn_ndat1_t	unNDAT1;	/* 0x00000098 */
    un_cpg_canfdn_ndat2_t	unNDAT2;	/* 0x0000009C */
    un_cpg_canfdn_rxf0c_t	unRXF0C;	/* 0x000000A0 */
    un_cpg_canfdn_rxf0s_t	unRXF0S;	/* 0x000000A4 */
    un_cpg_canfdn_rxf0a_t	unRXF0A;	/* 0x000000A8 */
    un_cpg_canfdn_rxbc_t	unRXBC;	/* 0x000000AC */
    un_cpg_canfdn_rxf1c_t	unRXF1C;	/* 0x000000B0 */
    un_cpg_canfdn_rxf1s_t	unRXF1S;	/* 0x000000B4 */
    un_cpg_canfdn_rxf1a_t	unRXF1A;	/* 0x000000B8 */
    un_cpg_canfdn_rxesc_t	unRXESC;	/* 0x000000BC */
    un_cpg_canfdn_txbc_t	unTXBC;	/* 0x000000C0 */
    un_cpg_canfdn_txfqs_t	unTXFQS;	/* 0x000000C4 */
    un_cpg_canfdn_txesc_t	unTXESC;	/* 0x000000C8 */
    un_cpg_canfdn_txbrp_t	unTXBRP;	/* 0x000000CC */
    un_cpg_canfdn_txbar_t	unTXBAR;	/* 0x000000D0 */
    un_cpg_canfdn_txbcr_t	unTXBCR;	/* 0x000000D4 */
    un_cpg_canfdn_txbto_t	unTXBTO;	/* 0x000000D8 */
    un_cpg_canfdn_txbcf_t	unTXBCF;	/* 0x000000DC */
    un_cpg_canfdn_txbtie_t	unTXBTIE;	/* 0x000000E0 */
    un_cpg_canfdn_txbcie_t	unTXBCIE;	/* 0x000000E4 */
    uint_io8_t	au8Reserved5[8];	/* 0x000000E8 */
    un_cpg_canfdn_txefc_t	unTXEFC;	/* 0x000000F0 */
    un_cpg_canfdn_txefs_t	unTXEFS;	/* 0x000000F4 */
    un_cpg_canfdn_txefa_t	unTXEFA;	/* 0x000000F8 */
    uint_io8_t	au8Reserved6[260];	/* 0x000000FC */
    un_cpg_canfdn_fdecr_t	unFDECR;	/* 0x00000200 */
    un_cpg_canfdn_fdesr_t	unFDESR;	/* 0x00000201 */
    un_cpg_canfdn_fdsear_t	unFDSEAR;	/* 0x00000202 */
    uint_io8_t	au8Reserved7[1];	/* 0x00000204 */
    un_cpg_canfdn_fdescr_t	unFDESCR;	/* 0x00000205 */
    un_cpg_canfdn_fddear_t	unFDDEAR;	/* 0x00000206 */
    un_cpg_canfdn_fdfecr_t	unFDFECR;	/* 0x00000208 */
    uint_io8_t	au8Reserved8[244];	/* 0x0000020C */
    un_cpg_canfdn_tscntr_t	unTSCNTR;	/* 0x00000300 */
    un_cpg_canfdn_tsmdr_t	unTSMDR;	/* 0x00000302 */
    un_cpg_canfdn_tsdivr_l_t	unTSDIVR_L;	/* 0x00000304 */
    uint_io8_t	au8Reserved9[2];	/* 0x00000306 */
    un_cpg_canfdn_tscdtr_t	unTSCDTR;	/* 0x00000308 */
    un_cpg_canfdn_tscpclr_t	unTSCPCLR;	/* 0x0000030A */
    uint_io8_t	au8Reserved10[64756];	/* 0x0000030C */
}stc_cpg_canfdn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_cpg_canfdn_t	stcCPG_CANFD[2];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 65536(0x10000) bytes */


/* MCG_CANFD[0-1] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MCG_CANFD0_1	stcMCG_CANFD_1[0]
#define MCG_CANFD1_1	stcMCG_CANFD_1[1]
#else /* __IO_DEFINE */
#define MCG_CANFD0_1	(*((volatile stc_mcg_canfdn_1_t*)0xB06C0000))
#define MCG_CANFD1_1	(*((volatile stc_mcg_canfdn_1_t*)0xB06D0000))
#endif /* __IO_DEFINE */

/* CREL */
#define MCG_CANFD0_CREL	(MCG_CANFD0_1.unCREL.u32Register)  /*@rg@*/
#define MCG_CANFD0_CREL_DAY	(MCG_CANFD0_1.unCREL.au8Byte[0])  /*@bfbyte@*/
#define MCG_CANFD0_CREL_MON	(MCG_CANFD0_1.unCREL.au8Byte[1])  /*@bfbyte@*/
#define MCG_CANFD0_CREL_YEAR	(MCG_CANFD0_1.unCREL.stcField.u4YEAR)  /*@bf@*/
#define MCG_CANFD0_CREL_SUBSTEP	(MCG_CANFD0_1.unCREL.stcField.u4SUBSTEP)  /*@bf@*/
#define MCG_CANFD0_CREL_STEP	(MCG_CANFD0_1.unCREL.stcField.u4STEP)  /*@bf@*/
#define MCG_CANFD0_CREL_REL	(MCG_CANFD0_1.unCREL.stcField.u4REL)  /*@bf@*/

#define MCG_CANFD1_CREL	(MCG_CANFD1_1.unCREL.u32Register)  /*@rg@*/
#define MCG_CANFD1_CREL_DAY	(MCG_CANFD1_1.unCREL.au8Byte[0])  /*@bfbyte@*/
#define MCG_CANFD1_CREL_MON	(MCG_CANFD1_1.unCREL.au8Byte[1])  /*@bfbyte@*/
#define MCG_CANFD1_CREL_YEAR	(MCG_CANFD1_1.unCREL.stcField.u4YEAR)  /*@bf@*/
#define MCG_CANFD1_CREL_SUBSTEP	(MCG_CANFD1_1.unCREL.stcField.u4SUBSTEP)  /*@bf@*/
#define MCG_CANFD1_CREL_STEP	(MCG_CANFD1_1.unCREL.stcField.u4STEP)  /*@bf@*/
#define MCG_CANFD1_CREL_REL	(MCG_CANFD1_1.unCREL.stcField.u4REL)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_crel_field{
    uint_io32_t		u8DAY:8;
    uint_io32_t		u8MON:8;
    uint_io32_t		u4YEAR:4;
    uint_io32_t		u4SUBSTEP:4;
    uint_io32_t		u4STEP:4;
    uint_io32_t		u4REL:4;
}stc_mcg_canfdn_1_crel_field_t;

typedef union un_mcg_canfdn_1_crel{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_crel_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_crel_t;

/* ENDN */
#define MCG_CANFD0_ENDN	(MCG_CANFD0_1.unENDN.u32Register)  /*@rg@*/
#define MCG_CANFD0_ENDN_ETV	MCG_CANFD0_ENDN  /*@bfrg@*/

#define MCG_CANFD1_ENDN	(MCG_CANFD1_1.unENDN.u32Register)  /*@rg@*/
#define MCG_CANFD1_ENDN_ETV	MCG_CANFD1_ENDN  /*@bfrg@*/

typedef union un_mcg_canfdn_1_endn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_endn_t;

/* DBTP */
#define MCG_CANFD0_DBTP	(MCG_CANFD0_1.unDBTP.u32Register)  /*@rg@*/
#define MCG_CANFD0_DBTP_DSJW	(MCG_CANFD0_1.unDBTP.stcField.u4DSJW)  /*@bf@*/
#define MCG_CANFD0_DBTP_DTSEG2	(MCG_CANFD0_1.unDBTP.stcField.u4DTSEG2)  /*@bf@*/
#define MCG_CANFD0_DBTP_DTSEG1	(MCG_CANFD0_1.unDBTP.stcField.u5DTSEG1)  /*@bf@*/
#define MCG_CANFD0_DBTP_DBRP	(MCG_CANFD0_1.unDBTP.stcField.u5DBRP)  /*@bf@*/
#define MCG_CANFD0_DBTP_TDC	(*(volatile uint_io8_t*)0xB0E00077)  /*@bfbba@*/

#define MCG_CANFD1_DBTP	(MCG_CANFD1_1.unDBTP.u32Register)  /*@rg@*/
#define MCG_CANFD1_DBTP_DSJW	(MCG_CANFD1_1.unDBTP.stcField.u4DSJW)  /*@bf@*/
#define MCG_CANFD1_DBTP_DTSEG2	(MCG_CANFD1_1.unDBTP.stcField.u4DTSEG2)  /*@bf@*/
#define MCG_CANFD1_DBTP_DTSEG1	(MCG_CANFD1_1.unDBTP.stcField.u5DTSEG1)  /*@bf@*/
#define MCG_CANFD1_DBTP_DBRP	(MCG_CANFD1_1.unDBTP.stcField.u5DBRP)  /*@bf@*/
#define MCG_CANFD1_DBTP_TDC	(*(volatile uint_io8_t*)0xB0E80077)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_dbtp_field{
    uint_io32_t		u4DSJW:4;
    uint_io32_t		u4DTSEG2:4;
    uint_io32_t		u5DTSEG1:5;
    uint_io32_t		:3;
    uint_io32_t		u5DBRP:5;
    uint_io32_t		:2;
    uint_io32_t		u1TDC:1;
    uint_io32_t		:8;
}stc_mcg_canfdn_1_dbtp_field_t;

typedef union un_mcg_canfdn_1_dbtp{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_dbtp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_dbtp_t;

/* TEST */
#define MCG_CANFD0_TEST	(MCG_CANFD0_1.unTEST.u32Register)  /*@rg@*/
#define MCG_CANFD0_TEST_LBCK	(*(volatile uint_io8_t*)0xB0E00084)  /*@bfbba@*/
#define MCG_CANFD0_TEST_TX	(MCG_CANFD0_1.unTEST.stcField.u2TX)  /*@bf@*/
#define MCG_CANFD0_TEST_RX	(*(volatile uint_io8_t*)0xB0E00087)  /*@bfbba@*/

#define MCG_CANFD1_TEST	(MCG_CANFD1_1.unTEST.u32Register)  /*@rg@*/
#define MCG_CANFD1_TEST_LBCK	(*(volatile uint_io8_t*)0xB0E80084)  /*@bfbba@*/
#define MCG_CANFD1_TEST_TX	(MCG_CANFD1_1.unTEST.stcField.u2TX)  /*@bf@*/
#define MCG_CANFD1_TEST_RX	(*(volatile uint_io8_t*)0xB0E80087)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_test_field{
    uint_io32_t		:4;
    uint_io32_t		u1LBCK:1;
    uint_io32_t		u2TX:2;
    uint_io32_t		u1RX:1;
    uint_io32_t		:24;
}stc_mcg_canfdn_1_test_field_t;

typedef union un_mcg_canfdn_1_test{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_test_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_test_t;

/* RWD */
#define MCG_CANFD0_RWD	(MCG_CANFD0_1.unRWD.u32Register)  /*@rg@*/
#define MCG_CANFD0_RWD_WDC	(MCG_CANFD0_1.unRWD.au8Byte[0])  /*@bfbyte@*/
#define MCG_CANFD0_RWD_WDV	(MCG_CANFD0_1.unRWD.au8Byte[1])  /*@bfbyte@*/

#define MCG_CANFD1_RWD	(MCG_CANFD1_1.unRWD.u32Register)  /*@rg@*/
#define MCG_CANFD1_RWD_WDC	(MCG_CANFD1_1.unRWD.au8Byte[0])  /*@bfbyte@*/
#define MCG_CANFD1_RWD_WDV	(MCG_CANFD1_1.unRWD.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_mcg_canfdn_1_rwd_field{
    uint_io32_t		u8WDC:8;
    uint_io32_t		u8WDV:8;
    uint_io32_t		:16;
}stc_mcg_canfdn_1_rwd_field_t;

typedef union un_mcg_canfdn_1_rwd{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rwd_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rwd_t;

/* CCCR */
#define MCG_CANFD0_CCCR	(MCG_CANFD0_1.unCCCR.u32Register)  /*@rg@*/
#define MCG_CANFD0_CCCR_INIT	(*(volatile uint_io8_t*)0xB0E000C0)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_CCE	(*(volatile uint_io8_t*)0xB0E000C1)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_ASM	(*(volatile uint_io8_t*)0xB0E000C2)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_CSA	(*(volatile uint_io8_t*)0xB0E000C3)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_CSR	(*(volatile uint_io8_t*)0xB0E000C4)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_MON	(*(volatile uint_io8_t*)0xB0E000C5)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_DAR	(*(volatile uint_io8_t*)0xB0E000C6)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_TEST	(*(volatile uint_io8_t*)0xB0E000C7)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_FDOE	(*(volatile uint_io8_t*)0xB0E000C8)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_BRSE	(*(volatile uint_io8_t*)0xB0E000C9)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_PXHD	(*(volatile uint_io8_t*)0xB0E000CC)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_EFBI	(*(volatile uint_io8_t*)0xB0E000CD)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_TXP	(*(volatile uint_io8_t*)0xB0E000CE)  /*@bfbba@*/
#define MCG_CANFD0_CCCR_NISO	(*(volatile uint_io8_t*)0xB0E000CF)  /*@bfbba@*/

#define MCG_CANFD1_CCCR	(MCG_CANFD1_1.unCCCR.u32Register)  /*@rg@*/
#define MCG_CANFD1_CCCR_INIT	(*(volatile uint_io8_t*)0xB0E800C0)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_CCE	(*(volatile uint_io8_t*)0xB0E800C1)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_ASM	(*(volatile uint_io8_t*)0xB0E800C2)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_CSA	(*(volatile uint_io8_t*)0xB0E800C3)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_CSR	(*(volatile uint_io8_t*)0xB0E800C4)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_MON	(*(volatile uint_io8_t*)0xB0E800C5)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_DAR	(*(volatile uint_io8_t*)0xB0E800C6)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_TEST	(*(volatile uint_io8_t*)0xB0E800C7)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_FDOE	(*(volatile uint_io8_t*)0xB0E800C8)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_BRSE	(*(volatile uint_io8_t*)0xB0E800C9)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_PXHD	(*(volatile uint_io8_t*)0xB0E800CC)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_EFBI	(*(volatile uint_io8_t*)0xB0E800CD)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_TXP	(*(volatile uint_io8_t*)0xB0E800CE)  /*@bfbba@*/
#define MCG_CANFD1_CCCR_NISO	(*(volatile uint_io8_t*)0xB0E800CF)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_cccr_field{
    uint_io32_t		u1INIT:1;
    uint_io32_t		u1CCE:1;
    uint_io32_t		u1ASM:1;
    uint_io32_t		u1CSA:1;
    uint_io32_t		u1CSR:1;
    uint_io32_t		u1MON:1;
    uint_io32_t		u1DAR:1;
    uint_io32_t		u1TEST:1;
    uint_io32_t		u1FDOE:1;
    uint_io32_t		u1BRSE:1;
    uint_io32_t		:2;
    uint_io32_t		u1PXHD:1;
    uint_io32_t		u1EFBI:1;
    uint_io32_t		u1TXP:1;
    uint_io32_t		u1NISO:1;
    uint_io32_t		:16;
}stc_mcg_canfdn_1_cccr_field_t;

typedef union un_mcg_canfdn_1_cccr{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_cccr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_cccr_t;

/* NBTP */
#define MCG_CANFD0_NBTP	(MCG_CANFD0_1.unNBTP.u32Register)  /*@rg@*/
#define MCG_CANFD0_NBTP_NTSEG2	(MCG_CANFD0_1.unNBTP.stcField.u7NTSEG2)  /*@bf@*/
#define MCG_CANFD0_NBTP_NTSEG1	(MCG_CANFD0_1.unNBTP.au8Byte[1])  /*@bfbyte@*/
#define MCG_CANFD0_NBTP_NBRP	(MCG_CANFD0_1.unNBTP.stcField.u9NBRP)  /*@bf@*/
#define MCG_CANFD0_NBTP_NSJW	(MCG_CANFD0_1.unNBTP.stcField.u7NSJW)  /*@bf@*/

#define MCG_CANFD1_NBTP	(MCG_CANFD1_1.unNBTP.u32Register)  /*@rg@*/
#define MCG_CANFD1_NBTP_NTSEG2	(MCG_CANFD1_1.unNBTP.stcField.u7NTSEG2)  /*@bf@*/
#define MCG_CANFD1_NBTP_NTSEG1	(MCG_CANFD1_1.unNBTP.au8Byte[1])  /*@bfbyte@*/
#define MCG_CANFD1_NBTP_NBRP	(MCG_CANFD1_1.unNBTP.stcField.u9NBRP)  /*@bf@*/
#define MCG_CANFD1_NBTP_NSJW	(MCG_CANFD1_1.unNBTP.stcField.u7NSJW)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_nbtp_field{
    uint_io32_t		u7NTSEG2:7;
    uint_io32_t		:1;
    uint_io32_t		u8NTSEG1:8;
    uint_io32_t		u9NBRP:9;
    uint_io32_t		u7NSJW:7;
}stc_mcg_canfdn_1_nbtp_field_t;

typedef union un_mcg_canfdn_1_nbtp{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_nbtp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_nbtp_t;

/* TSCC */
#define MCG_CANFD0_TSCC	(MCG_CANFD0_1.unTSCC.u32Register)  /*@rg@*/
#define MCG_CANFD0_TSCC_TSS	(MCG_CANFD0_1.unTSCC.stcField.u2TSS)  /*@bf@*/
#define MCG_CANFD0_TSCC_TCP	(MCG_CANFD0_1.unTSCC.stcField.u4TCP)  /*@bf@*/

#define MCG_CANFD1_TSCC	(MCG_CANFD1_1.unTSCC.u32Register)  /*@rg@*/
#define MCG_CANFD1_TSCC_TSS	(MCG_CANFD1_1.unTSCC.stcField.u2TSS)  /*@bf@*/
#define MCG_CANFD1_TSCC_TCP	(MCG_CANFD1_1.unTSCC.stcField.u4TCP)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_tscc_field{
    uint_io32_t		u2TSS:2;
    uint_io32_t		:14;
    uint_io32_t		u4TCP:4;
    uint_io32_t		:12;
}stc_mcg_canfdn_1_tscc_field_t;

typedef union un_mcg_canfdn_1_tscc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_tscc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_tscc_t;

/* TSCV */
#define MCG_CANFD0_TSCV	(MCG_CANFD0_1.unTSCV.u32Register)  /*@rg@*/
#define MCG_CANFD0_TSCV_TSC	(MCG_CANFD0_1.unTSCV.au16Halfword[0])  /*@bfhword@*/

#define MCG_CANFD1_TSCV	(MCG_CANFD1_1.unTSCV.u32Register)  /*@rg@*/
#define MCG_CANFD1_TSCV_TSC	(MCG_CANFD1_1.unTSCV.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_mcg_canfdn_1_tscv_field{
    uint_io32_t		u16TSC:16;
    uint_io32_t		:16;
}stc_mcg_canfdn_1_tscv_field_t;

typedef union un_mcg_canfdn_1_tscv{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_tscv_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_tscv_t;

/* TOCC */
#define MCG_CANFD0_TOCC	(MCG_CANFD0_1.unTOCC.u32Register)  /*@rg@*/
#define MCG_CANFD0_TOCC_ETOC	(*(volatile uint_io8_t*)0xB0E00140)  /*@bfbba@*/
#define MCG_CANFD0_TOCC_TOS	(MCG_CANFD0_1.unTOCC.stcField.u2TOS)  /*@bf@*/
#define MCG_CANFD0_TOCC_TOP	(MCG_CANFD0_1.unTOCC.au16Halfword[1])  /*@bfhword@*/

#define MCG_CANFD1_TOCC	(MCG_CANFD1_1.unTOCC.u32Register)  /*@rg@*/
#define MCG_CANFD1_TOCC_ETOC	(*(volatile uint_io8_t*)0xB0E80140)  /*@bfbba@*/
#define MCG_CANFD1_TOCC_TOS	(MCG_CANFD1_1.unTOCC.stcField.u2TOS)  /*@bf@*/
#define MCG_CANFD1_TOCC_TOP	(MCG_CANFD1_1.unTOCC.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mcg_canfdn_1_tocc_field{
    uint_io32_t		u1ETOC:1;
    uint_io32_t		u2TOS:2;
    uint_io32_t		:13;
    uint_io32_t		u16TOP:16;
}stc_mcg_canfdn_1_tocc_field_t;

typedef union un_mcg_canfdn_1_tocc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_tocc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_tocc_t;

/* TOCV */
#define MCG_CANFD0_TOCV	(MCG_CANFD0_1.unTOCV.u32Register)  /*@rg@*/
#define MCG_CANFD0_TOCV_TOC	(MCG_CANFD0_1.unTOCV.au16Halfword[0])  /*@bfhword@*/

#define MCG_CANFD1_TOCV	(MCG_CANFD1_1.unTOCV.u32Register)  /*@rg@*/
#define MCG_CANFD1_TOCV_TOC	(MCG_CANFD1_1.unTOCV.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_mcg_canfdn_1_tocv_field{
    uint_io32_t		u16TOC:16;
    uint_io32_t		:16;
}stc_mcg_canfdn_1_tocv_field_t;

typedef union un_mcg_canfdn_1_tocv{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_tocv_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_tocv_t;

/* ECR */
#define MCG_CANFD0_ECR	(MCG_CANFD0_1.unECR.u32Register)  /*@rg@*/
#define MCG_CANFD0_ECR_TEC	(MCG_CANFD0_1.unECR.au8Byte[0])  /*@bfbyte@*/
#define MCG_CANFD0_ECR_REC	(MCG_CANFD0_1.unECR.stcField.u7REC)  /*@bf@*/
#define MCG_CANFD0_ECR_RP	(*(volatile uint_io8_t*)0xB0E0020F)  /*@bfbba@*/
#define MCG_CANFD0_ECR_CEL	(MCG_CANFD0_1.unECR.au8Byte[2])  /*@bfbyte@*/

#define MCG_CANFD1_ECR	(MCG_CANFD1_1.unECR.u32Register)  /*@rg@*/
#define MCG_CANFD1_ECR_TEC	(MCG_CANFD1_1.unECR.au8Byte[0])  /*@bfbyte@*/
#define MCG_CANFD1_ECR_REC	(MCG_CANFD1_1.unECR.stcField.u7REC)  /*@bf@*/
#define MCG_CANFD1_ECR_RP	(*(volatile uint_io8_t*)0xB0E8020F)  /*@bfbba@*/
#define MCG_CANFD1_ECR_CEL	(MCG_CANFD1_1.unECR.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_mcg_canfdn_1_ecr_field{
    uint_io32_t		u8TEC:8;
    uint_io32_t		u7REC:7;
    uint_io32_t		u1RP:1;
    uint_io32_t		u8CEL:8;
    uint_io32_t		:8;
}stc_mcg_canfdn_1_ecr_field_t;

typedef union un_mcg_canfdn_1_ecr{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_ecr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_ecr_t;

/* PSR */
#define MCG_CANFD0_PSR	(MCG_CANFD0_1.unPSR.u32Register)  /*@rg@*/
#define MCG_CANFD0_PSR_LEC	(MCG_CANFD0_1.unPSR.stcField.u3LEC)  /*@bf@*/
#define MCG_CANFD0_PSR_ACT	(MCG_CANFD0_1.unPSR.stcField.u2ACT)  /*@bf@*/
#define MCG_CANFD0_PSR_EP	(*(volatile uint_io8_t*)0xB0E00225)  /*@bfbba@*/
#define MCG_CANFD0_PSR_EW	(*(volatile uint_io8_t*)0xB0E00226)  /*@bfbba@*/
#define MCG_CANFD0_PSR_BO	(*(volatile uint_io8_t*)0xB0E00227)  /*@bfbba@*/
#define MCG_CANFD0_PSR_DLEC	(MCG_CANFD0_1.unPSR.stcField.u3DLEC)  /*@bf@*/
#define MCG_CANFD0_PSR_RESI	(*(volatile uint_io8_t*)0xB0E0022B)  /*@bfbba@*/
#define MCG_CANFD0_PSR_RBRS	(*(volatile uint_io8_t*)0xB0E0022C)  /*@bfbba@*/
#define MCG_CANFD0_PSR_RFDF	(*(volatile uint_io8_t*)0xB0E0022D)  /*@bfbba@*/
#define MCG_CANFD0_PSR_PXE	(*(volatile uint_io8_t*)0xB0E0022E)  /*@bfbba@*/
#define MCG_CANFD0_PSR_TDCV	(MCG_CANFD0_1.unPSR.stcField.u7TDCV)  /*@bf@*/

#define MCG_CANFD1_PSR	(MCG_CANFD1_1.unPSR.u32Register)  /*@rg@*/
#define MCG_CANFD1_PSR_LEC	(MCG_CANFD1_1.unPSR.stcField.u3LEC)  /*@bf@*/
#define MCG_CANFD1_PSR_ACT	(MCG_CANFD1_1.unPSR.stcField.u2ACT)  /*@bf@*/
#define MCG_CANFD1_PSR_EP	(*(volatile uint_io8_t*)0xB0E80225)  /*@bfbba@*/
#define MCG_CANFD1_PSR_EW	(*(volatile uint_io8_t*)0xB0E80226)  /*@bfbba@*/
#define MCG_CANFD1_PSR_BO	(*(volatile uint_io8_t*)0xB0E80227)  /*@bfbba@*/
#define MCG_CANFD1_PSR_DLEC	(MCG_CANFD1_1.unPSR.stcField.u3DLEC)  /*@bf@*/
#define MCG_CANFD1_PSR_RESI	(*(volatile uint_io8_t*)0xB0E8022B)  /*@bfbba@*/
#define MCG_CANFD1_PSR_RBRS	(*(volatile uint_io8_t*)0xB0E8022C)  /*@bfbba@*/
#define MCG_CANFD1_PSR_RFDF	(*(volatile uint_io8_t*)0xB0E8022D)  /*@bfbba@*/
#define MCG_CANFD1_PSR_PXE	(*(volatile uint_io8_t*)0xB0E8022E)  /*@bfbba@*/
#define MCG_CANFD1_PSR_TDCV	(MCG_CANFD1_1.unPSR.stcField.u7TDCV)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_psr_field{
    uint_io32_t		u3LEC:3;
    uint_io32_t		u2ACT:2;
    uint_io32_t		u1EP:1;
    uint_io32_t		u1EW:1;
    uint_io32_t		u1BO:1;
    uint_io32_t		u3DLEC:3;
    uint_io32_t		u1RESI:1;
    uint_io32_t		u1RBRS:1;
    uint_io32_t		u1RFDF:1;
    uint_io32_t		u1PXE:1;
    uint_io32_t		:1;
    uint_io32_t		u7TDCV:7;
    uint_io32_t		:9;
}stc_mcg_canfdn_1_psr_field_t;

typedef union un_mcg_canfdn_1_psr{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_psr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_psr_t;

/* TDCR */
#define MCG_CANFD0_TDCR	(MCG_CANFD0_1.unTDCR.u32Register)  /*@rg@*/
#define MCG_CANFD0_TDCR_TDCF	(MCG_CANFD0_1.unTDCR.stcField.u7TDCF)  /*@bf@*/
#define MCG_CANFD0_TDCR_TDCO	(MCG_CANFD0_1.unTDCR.stcField.u7TDCO)  /*@bf@*/

#define MCG_CANFD1_TDCR	(MCG_CANFD1_1.unTDCR.u32Register)  /*@rg@*/
#define MCG_CANFD1_TDCR_TDCF	(MCG_CANFD1_1.unTDCR.stcField.u7TDCF)  /*@bf@*/
#define MCG_CANFD1_TDCR_TDCO	(MCG_CANFD1_1.unTDCR.stcField.u7TDCO)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_tdcr_field{
    uint_io32_t		u7TDCF:7;
    uint_io32_t		:1;
    uint_io32_t		u7TDCO:7;
    uint_io32_t		:17;
}stc_mcg_canfdn_1_tdcr_field_t;

typedef union un_mcg_canfdn_1_tdcr{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_tdcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_tdcr_t;

/* IR */
#define MCG_CANFD0_IR	(MCG_CANFD0_1.unIR.u32Register)  /*@rg@*/
#define MCG_CANFD0_IR_RF0N	(*(volatile uint_io8_t*)0xB0E00280)  /*@bfbba@*/
#define MCG_CANFD0_IR_RF0W	(*(volatile uint_io8_t*)0xB0E00281)  /*@bfbba@*/
#define MCG_CANFD0_IR_RF0F	(*(volatile uint_io8_t*)0xB0E00282)  /*@bfbba@*/
#define MCG_CANFD0_IR_RF0L	(*(volatile uint_io8_t*)0xB0E00283)  /*@bfbba@*/
#define MCG_CANFD0_IR_RF1N	(*(volatile uint_io8_t*)0xB0E00284)  /*@bfbba@*/
#define MCG_CANFD0_IR_RF1W	(*(volatile uint_io8_t*)0xB0E00285)  /*@bfbba@*/
#define MCG_CANFD0_IR_RF1F	(*(volatile uint_io8_t*)0xB0E00286)  /*@bfbba@*/
#define MCG_CANFD0_IR_RF1L	(*(volatile uint_io8_t*)0xB0E00287)  /*@bfbba@*/
#define MCG_CANFD0_IR_HPM	(*(volatile uint_io8_t*)0xB0E00288)  /*@bfbba@*/
#define MCG_CANFD0_IR_TC	(*(volatile uint_io8_t*)0xB0E00289)  /*@bfbba@*/
#define MCG_CANFD0_IR_TCF	(*(volatile uint_io8_t*)0xB0E0028A)  /*@bfbba@*/
#define MCG_CANFD0_IR_TFE	(*(volatile uint_io8_t*)0xB0E0028B)  /*@bfbba@*/
#define MCG_CANFD0_IR_TEFN	(*(volatile uint_io8_t*)0xB0E0028C)  /*@bfbba@*/
#define MCG_CANFD0_IR_TEFW	(*(volatile uint_io8_t*)0xB0E0028D)  /*@bfbba@*/
#define MCG_CANFD0_IR_TEFF	(*(volatile uint_io8_t*)0xB0E0028E)  /*@bfbba@*/
#define MCG_CANFD0_IR_TEFL	(*(volatile uint_io8_t*)0xB0E0028F)  /*@bfbba@*/
#define MCG_CANFD0_IR_TSW	(*(volatile uint_io8_t*)0xB0E00290)  /*@bfbba@*/
#define MCG_CANFD0_IR_MRAF	(*(volatile uint_io8_t*)0xB0E00291)  /*@bfbba@*/
#define MCG_CANFD0_IR_TOO	(*(volatile uint_io8_t*)0xB0E00292)  /*@bfbba@*/
#define MCG_CANFD0_IR_DRX	(*(volatile uint_io8_t*)0xB0E00293)  /*@bfbba@*/
#define MCG_CANFD0_IR_BEC	(*(volatile uint_io8_t*)0xB0E00294)  /*@bfbba@*/
#define MCG_CANFD0_IR_BEU	(*(volatile uint_io8_t*)0xB0E00295)  /*@bfbba@*/
#define MCG_CANFD0_IR_ELO	(*(volatile uint_io8_t*)0xB0E00296)  /*@bfbba@*/
#define MCG_CANFD0_IR_EP	(*(volatile uint_io8_t*)0xB0E00297)  /*@bfbba@*/
#define MCG_CANFD0_IR_EW	(*(volatile uint_io8_t*)0xB0E00298)  /*@bfbba@*/
#define MCG_CANFD0_IR_BO	(*(volatile uint_io8_t*)0xB0E00299)  /*@bfbba@*/
#define MCG_CANFD0_IR_WDI	(*(volatile uint_io8_t*)0xB0E0029A)  /*@bfbba@*/
#define MCG_CANFD0_IR_PEA	(*(volatile uint_io8_t*)0xB0E0029B)  /*@bfbba@*/
#define MCG_CANFD0_IR_PED	(*(volatile uint_io8_t*)0xB0E0029C)  /*@bfbba@*/
#define MCG_CANFD0_IR_ARA	(*(volatile uint_io8_t*)0xB0E0029D)  /*@bfbba@*/

#define MCG_CANFD1_IR	(MCG_CANFD1_1.unIR.u32Register)  /*@rg@*/
#define MCG_CANFD1_IR_RF0N	(*(volatile uint_io8_t*)0xB0E80280)  /*@bfbba@*/
#define MCG_CANFD1_IR_RF0W	(*(volatile uint_io8_t*)0xB0E80281)  /*@bfbba@*/
#define MCG_CANFD1_IR_RF0F	(*(volatile uint_io8_t*)0xB0E80282)  /*@bfbba@*/
#define MCG_CANFD1_IR_RF0L	(*(volatile uint_io8_t*)0xB0E80283)  /*@bfbba@*/
#define MCG_CANFD1_IR_RF1N	(*(volatile uint_io8_t*)0xB0E80284)  /*@bfbba@*/
#define MCG_CANFD1_IR_RF1W	(*(volatile uint_io8_t*)0xB0E80285)  /*@bfbba@*/
#define MCG_CANFD1_IR_RF1F	(*(volatile uint_io8_t*)0xB0E80286)  /*@bfbba@*/
#define MCG_CANFD1_IR_RF1L	(*(volatile uint_io8_t*)0xB0E80287)  /*@bfbba@*/
#define MCG_CANFD1_IR_HPM	(*(volatile uint_io8_t*)0xB0E80288)  /*@bfbba@*/
#define MCG_CANFD1_IR_TC	(*(volatile uint_io8_t*)0xB0E80289)  /*@bfbba@*/
#define MCG_CANFD1_IR_TCF	(*(volatile uint_io8_t*)0xB0E8028A)  /*@bfbba@*/
#define MCG_CANFD1_IR_TFE	(*(volatile uint_io8_t*)0xB0E8028B)  /*@bfbba@*/
#define MCG_CANFD1_IR_TEFN	(*(volatile uint_io8_t*)0xB0E8028C)  /*@bfbba@*/
#define MCG_CANFD1_IR_TEFW	(*(volatile uint_io8_t*)0xB0E8028D)  /*@bfbba@*/
#define MCG_CANFD1_IR_TEFF	(*(volatile uint_io8_t*)0xB0E8028E)  /*@bfbba@*/
#define MCG_CANFD1_IR_TEFL	(*(volatile uint_io8_t*)0xB0E8028F)  /*@bfbba@*/
#define MCG_CANFD1_IR_TSW	(*(volatile uint_io8_t*)0xB0E80290)  /*@bfbba@*/
#define MCG_CANFD1_IR_MRAF	(*(volatile uint_io8_t*)0xB0E80291)  /*@bfbba@*/
#define MCG_CANFD1_IR_TOO	(*(volatile uint_io8_t*)0xB0E80292)  /*@bfbba@*/
#define MCG_CANFD1_IR_DRX	(*(volatile uint_io8_t*)0xB0E80293)  /*@bfbba@*/
#define MCG_CANFD1_IR_BEC	(*(volatile uint_io8_t*)0xB0E80294)  /*@bfbba@*/
#define MCG_CANFD1_IR_BEU	(*(volatile uint_io8_t*)0xB0E80295)  /*@bfbba@*/
#define MCG_CANFD1_IR_ELO	(*(volatile uint_io8_t*)0xB0E80296)  /*@bfbba@*/
#define MCG_CANFD1_IR_EP	(*(volatile uint_io8_t*)0xB0E80297)  /*@bfbba@*/
#define MCG_CANFD1_IR_EW	(*(volatile uint_io8_t*)0xB0E80298)  /*@bfbba@*/
#define MCG_CANFD1_IR_BO	(*(volatile uint_io8_t*)0xB0E80299)  /*@bfbba@*/
#define MCG_CANFD1_IR_WDI	(*(volatile uint_io8_t*)0xB0E8029A)  /*@bfbba@*/
#define MCG_CANFD1_IR_PEA	(*(volatile uint_io8_t*)0xB0E8029B)  /*@bfbba@*/
#define MCG_CANFD1_IR_PED	(*(volatile uint_io8_t*)0xB0E8029C)  /*@bfbba@*/
#define MCG_CANFD1_IR_ARA	(*(volatile uint_io8_t*)0xB0E8029D)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_ir_field{
    uint_io32_t		u1RF0N:1;
    uint_io32_t		u1RF0W:1;
    uint_io32_t		u1RF0F:1;
    uint_io32_t		u1RF0L:1;
    uint_io32_t		u1RF1N:1;
    uint_io32_t		u1RF1W:1;
    uint_io32_t		u1RF1F:1;
    uint_io32_t		u1RF1L:1;
    uint_io32_t		u1HPM:1;
    uint_io32_t		u1TC:1;
    uint_io32_t		u1TCF:1;
    uint_io32_t		u1TFE:1;
    uint_io32_t		u1TEFN:1;
    uint_io32_t		u1TEFW:1;
    uint_io32_t		u1TEFF:1;
    uint_io32_t		u1TEFL:1;
    uint_io32_t		u1TSW:1;
    uint_io32_t		u1MRAF:1;
    uint_io32_t		u1TOO:1;
    uint_io32_t		u1DRX:1;
    uint_io32_t		u1BEC:1;
    uint_io32_t		u1BEU:1;
    uint_io32_t		u1ELO:1;
    uint_io32_t		u1EP:1;
    uint_io32_t		u1EW:1;
    uint_io32_t		u1BO:1;
    uint_io32_t		u1WDI:1;
    uint_io32_t		u1PEA:1;
    uint_io32_t		u1PED:1;
    uint_io32_t		u1ARA:1;
    uint_io32_t		:2;
}stc_mcg_canfdn_1_ir_field_t;

typedef union un_mcg_canfdn_1_ir{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_ir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_ir_t;

/* IE */
#define MCG_CANFD0_IE	(MCG_CANFD0_1.unIE.u32Register)  /*@rg@*/
#define MCG_CANFD0_IE_RF0NE	(*(volatile uint_io8_t*)0xB0E002A0)  /*@bfbba@*/
#define MCG_CANFD0_IE_RF0WE	(*(volatile uint_io8_t*)0xB0E002A1)  /*@bfbba@*/
#define MCG_CANFD0_IE_RF0FE	(*(volatile uint_io8_t*)0xB0E002A2)  /*@bfbba@*/
#define MCG_CANFD0_IE_RF0LE	(*(volatile uint_io8_t*)0xB0E002A3)  /*@bfbba@*/
#define MCG_CANFD0_IE_RF1NE	(*(volatile uint_io8_t*)0xB0E002A4)  /*@bfbba@*/
#define MCG_CANFD0_IE_RF1WE	(*(volatile uint_io8_t*)0xB0E002A5)  /*@bfbba@*/
#define MCG_CANFD0_IE_RF1FE	(*(volatile uint_io8_t*)0xB0E002A6)  /*@bfbba@*/
#define MCG_CANFD0_IE_RF1LE	(*(volatile uint_io8_t*)0xB0E002A7)  /*@bfbba@*/
#define MCG_CANFD0_IE_HPME	(*(volatile uint_io8_t*)0xB0E002A8)  /*@bfbba@*/
#define MCG_CANFD0_IE_TCE	(*(volatile uint_io8_t*)0xB0E002A9)  /*@bfbba@*/
#define MCG_CANFD0_IE_TCFE	(*(volatile uint_io8_t*)0xB0E002AA)  /*@bfbba@*/
#define MCG_CANFD0_IE_TFEE	(*(volatile uint_io8_t*)0xB0E002AB)  /*@bfbba@*/
#define MCG_CANFD0_IE_TEFNE	(*(volatile uint_io8_t*)0xB0E002AC)  /*@bfbba@*/
#define MCG_CANFD0_IE_TEFWE	(*(volatile uint_io8_t*)0xB0E002AD)  /*@bfbba@*/
#define MCG_CANFD0_IE_TEFFE	(*(volatile uint_io8_t*)0xB0E002AE)  /*@bfbba@*/
#define MCG_CANFD0_IE_TEFLE	(*(volatile uint_io8_t*)0xB0E002AF)  /*@bfbba@*/
#define MCG_CANFD0_IE_TSWE	(*(volatile uint_io8_t*)0xB0E002B0)  /*@bfbba@*/
#define MCG_CANFD0_IE_MRAFE	(*(volatile uint_io8_t*)0xB0E002B1)  /*@bfbba@*/
#define MCG_CANFD0_IE_TOOE	(*(volatile uint_io8_t*)0xB0E002B2)  /*@bfbba@*/
#define MCG_CANFD0_IE_DRXE	(*(volatile uint_io8_t*)0xB0E002B3)  /*@bfbba@*/
#define MCG_CANFD0_IE_BECE	(*(volatile uint_io8_t*)0xB0E002B4)  /*@bfbba@*/
#define MCG_CANFD0_IE_BEUE	(*(volatile uint_io8_t*)0xB0E002B5)  /*@bfbba@*/
#define MCG_CANFD0_IE_ELOE	(*(volatile uint_io8_t*)0xB0E002B6)  /*@bfbba@*/
#define MCG_CANFD0_IE_EPE	(*(volatile uint_io8_t*)0xB0E002B7)  /*@bfbba@*/
#define MCG_CANFD0_IE_EWE	(*(volatile uint_io8_t*)0xB0E002B8)  /*@bfbba@*/
#define MCG_CANFD0_IE_BOE	(*(volatile uint_io8_t*)0xB0E002B9)  /*@bfbba@*/
#define MCG_CANFD0_IE_WDIE	(*(volatile uint_io8_t*)0xB0E002BA)  /*@bfbba@*/
#define MCG_CANFD0_IE_PEAE	(*(volatile uint_io8_t*)0xB0E002BB)  /*@bfbba@*/
#define MCG_CANFD0_IE_PEDE	(*(volatile uint_io8_t*)0xB0E002BC)  /*@bfbba@*/
#define MCG_CANFD0_IE_ARAE	(*(volatile uint_io8_t*)0xB0E002BD)  /*@bfbba@*/

#define MCG_CANFD1_IE	(MCG_CANFD1_1.unIE.u32Register)  /*@rg@*/
#define MCG_CANFD1_IE_RF0NE	(*(volatile uint_io8_t*)0xB0E802A0)  /*@bfbba@*/
#define MCG_CANFD1_IE_RF0WE	(*(volatile uint_io8_t*)0xB0E802A1)  /*@bfbba@*/
#define MCG_CANFD1_IE_RF0FE	(*(volatile uint_io8_t*)0xB0E802A2)  /*@bfbba@*/
#define MCG_CANFD1_IE_RF0LE	(*(volatile uint_io8_t*)0xB0E802A3)  /*@bfbba@*/
#define MCG_CANFD1_IE_RF1NE	(*(volatile uint_io8_t*)0xB0E802A4)  /*@bfbba@*/
#define MCG_CANFD1_IE_RF1WE	(*(volatile uint_io8_t*)0xB0E802A5)  /*@bfbba@*/
#define MCG_CANFD1_IE_RF1FE	(*(volatile uint_io8_t*)0xB0E802A6)  /*@bfbba@*/
#define MCG_CANFD1_IE_RF1LE	(*(volatile uint_io8_t*)0xB0E802A7)  /*@bfbba@*/
#define MCG_CANFD1_IE_HPME	(*(volatile uint_io8_t*)0xB0E802A8)  /*@bfbba@*/
#define MCG_CANFD1_IE_TCE	(*(volatile uint_io8_t*)0xB0E802A9)  /*@bfbba@*/
#define MCG_CANFD1_IE_TCFE	(*(volatile uint_io8_t*)0xB0E802AA)  /*@bfbba@*/
#define MCG_CANFD1_IE_TFEE	(*(volatile uint_io8_t*)0xB0E802AB)  /*@bfbba@*/
#define MCG_CANFD1_IE_TEFNE	(*(volatile uint_io8_t*)0xB0E802AC)  /*@bfbba@*/
#define MCG_CANFD1_IE_TEFWE	(*(volatile uint_io8_t*)0xB0E802AD)  /*@bfbba@*/
#define MCG_CANFD1_IE_TEFFE	(*(volatile uint_io8_t*)0xB0E802AE)  /*@bfbba@*/
#define MCG_CANFD1_IE_TEFLE	(*(volatile uint_io8_t*)0xB0E802AF)  /*@bfbba@*/
#define MCG_CANFD1_IE_TSWE	(*(volatile uint_io8_t*)0xB0E802B0)  /*@bfbba@*/
#define MCG_CANFD1_IE_MRAFE	(*(volatile uint_io8_t*)0xB0E802B1)  /*@bfbba@*/
#define MCG_CANFD1_IE_TOOE	(*(volatile uint_io8_t*)0xB0E802B2)  /*@bfbba@*/
#define MCG_CANFD1_IE_DRXE	(*(volatile uint_io8_t*)0xB0E802B3)  /*@bfbba@*/
#define MCG_CANFD1_IE_BECE	(*(volatile uint_io8_t*)0xB0E802B4)  /*@bfbba@*/
#define MCG_CANFD1_IE_BEUE	(*(volatile uint_io8_t*)0xB0E802B5)  /*@bfbba@*/
#define MCG_CANFD1_IE_ELOE	(*(volatile uint_io8_t*)0xB0E802B6)  /*@bfbba@*/
#define MCG_CANFD1_IE_EPE	(*(volatile uint_io8_t*)0xB0E802B7)  /*@bfbba@*/
#define MCG_CANFD1_IE_EWE	(*(volatile uint_io8_t*)0xB0E802B8)  /*@bfbba@*/
#define MCG_CANFD1_IE_BOE	(*(volatile uint_io8_t*)0xB0E802B9)  /*@bfbba@*/
#define MCG_CANFD1_IE_WDIE	(*(volatile uint_io8_t*)0xB0E802BA)  /*@bfbba@*/
#define MCG_CANFD1_IE_PEAE	(*(volatile uint_io8_t*)0xB0E802BB)  /*@bfbba@*/
#define MCG_CANFD1_IE_PEDE	(*(volatile uint_io8_t*)0xB0E802BC)  /*@bfbba@*/
#define MCG_CANFD1_IE_ARAE	(*(volatile uint_io8_t*)0xB0E802BD)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_ie_field{
    uint_io32_t		u1RF0NE:1;
    uint_io32_t		u1RF0WE:1;
    uint_io32_t		u1RF0FE:1;
    uint_io32_t		u1RF0LE:1;
    uint_io32_t		u1RF1NE:1;
    uint_io32_t		u1RF1WE:1;
    uint_io32_t		u1RF1FE:1;
    uint_io32_t		u1RF1LE:1;
    uint_io32_t		u1HPME:1;
    uint_io32_t		u1TCE:1;
    uint_io32_t		u1TCFE:1;
    uint_io32_t		u1TFEE:1;
    uint_io32_t		u1TEFNE:1;
    uint_io32_t		u1TEFWE:1;
    uint_io32_t		u1TEFFE:1;
    uint_io32_t		u1TEFLE:1;
    uint_io32_t		u1TSWE:1;
    uint_io32_t		u1MRAFE:1;
    uint_io32_t		u1TOOE:1;
    uint_io32_t		u1DRXE:1;
    uint_io32_t		u1BECE:1;
    uint_io32_t		u1BEUE:1;
    uint_io32_t		u1ELOE:1;
    uint_io32_t		u1EPE:1;
    uint_io32_t		u1EWE:1;
    uint_io32_t		u1BOE:1;
    uint_io32_t		u1WDIE:1;
    uint_io32_t		u1PEAE:1;
    uint_io32_t		u1PEDE:1;
    uint_io32_t		u1ARAE:1;
    uint_io32_t		:2;
}stc_mcg_canfdn_1_ie_field_t;

typedef union un_mcg_canfdn_1_ie{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_ie_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_ie_t;

/* ILS */
#define MCG_CANFD0_ILS	(MCG_CANFD0_1.unILS.u32Register)  /*@rg@*/
#define MCG_CANFD0_ILS_RF0NL	(*(volatile uint_io8_t*)0xB0E002C0)  /*@bfbba@*/
#define MCG_CANFD0_ILS_RF0WL	(*(volatile uint_io8_t*)0xB0E002C1)  /*@bfbba@*/
#define MCG_CANFD0_ILS_RF0FL	(*(volatile uint_io8_t*)0xB0E002C2)  /*@bfbba@*/
#define MCG_CANFD0_ILS_RF0LL	(*(volatile uint_io8_t*)0xB0E002C3)  /*@bfbba@*/
#define MCG_CANFD0_ILS_RF1NL	(*(volatile uint_io8_t*)0xB0E002C4)  /*@bfbba@*/
#define MCG_CANFD0_ILS_RF1WL	(*(volatile uint_io8_t*)0xB0E002C5)  /*@bfbba@*/
#define MCG_CANFD0_ILS_RF1FL	(*(volatile uint_io8_t*)0xB0E002C6)  /*@bfbba@*/
#define MCG_CANFD0_ILS_RF1LL	(*(volatile uint_io8_t*)0xB0E002C7)  /*@bfbba@*/
#define MCG_CANFD0_ILS_HPML	(*(volatile uint_io8_t*)0xB0E002C8)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TCL	(*(volatile uint_io8_t*)0xB0E002C9)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TCFL	(*(volatile uint_io8_t*)0xB0E002CA)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TFEL	(*(volatile uint_io8_t*)0xB0E002CB)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TEFNL	(*(volatile uint_io8_t*)0xB0E002CC)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TEFWL	(*(volatile uint_io8_t*)0xB0E002CD)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TEFFL	(*(volatile uint_io8_t*)0xB0E002CE)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TEFLL	(*(volatile uint_io8_t*)0xB0E002CF)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TSWL	(*(volatile uint_io8_t*)0xB0E002D0)  /*@bfbba@*/
#define MCG_CANFD0_ILS_MRAFL	(*(volatile uint_io8_t*)0xB0E002D1)  /*@bfbba@*/
#define MCG_CANFD0_ILS_TOOL	(*(volatile uint_io8_t*)0xB0E002D2)  /*@bfbba@*/
#define MCG_CANFD0_ILS_DRXL	(*(volatile uint_io8_t*)0xB0E002D3)  /*@bfbba@*/
#define MCG_CANFD0_ILS_BECL	(*(volatile uint_io8_t*)0xB0E002D4)  /*@bfbba@*/
#define MCG_CANFD0_ILS_BEUL	(*(volatile uint_io8_t*)0xB0E002D5)  /*@bfbba@*/
#define MCG_CANFD0_ILS_ELOL	(*(volatile uint_io8_t*)0xB0E002D6)  /*@bfbba@*/
#define MCG_CANFD0_ILS_EPL	(*(volatile uint_io8_t*)0xB0E002D7)  /*@bfbba@*/
#define MCG_CANFD0_ILS_EWL	(*(volatile uint_io8_t*)0xB0E002D8)  /*@bfbba@*/
#define MCG_CANFD0_ILS_BOL	(*(volatile uint_io8_t*)0xB0E002D9)  /*@bfbba@*/
#define MCG_CANFD0_ILS_WDIL	(*(volatile uint_io8_t*)0xB0E002DA)  /*@bfbba@*/
#define MCG_CANFD0_ILS_PEAL	(*(volatile uint_io8_t*)0xB0E002DB)  /*@bfbba@*/
#define MCG_CANFD0_ILS_PEDL	(*(volatile uint_io8_t*)0xB0E002DC)  /*@bfbba@*/
#define MCG_CANFD0_ILS_ARAL	(*(volatile uint_io8_t*)0xB0E002DD)  /*@bfbba@*/

#define MCG_CANFD1_ILS	(MCG_CANFD1_1.unILS.u32Register)  /*@rg@*/
#define MCG_CANFD1_ILS_RF0NL	(*(volatile uint_io8_t*)0xB0E802C0)  /*@bfbba@*/
#define MCG_CANFD1_ILS_RF0WL	(*(volatile uint_io8_t*)0xB0E802C1)  /*@bfbba@*/
#define MCG_CANFD1_ILS_RF0FL	(*(volatile uint_io8_t*)0xB0E802C2)  /*@bfbba@*/
#define MCG_CANFD1_ILS_RF0LL	(*(volatile uint_io8_t*)0xB0E802C3)  /*@bfbba@*/
#define MCG_CANFD1_ILS_RF1NL	(*(volatile uint_io8_t*)0xB0E802C4)  /*@bfbba@*/
#define MCG_CANFD1_ILS_RF1WL	(*(volatile uint_io8_t*)0xB0E802C5)  /*@bfbba@*/
#define MCG_CANFD1_ILS_RF1FL	(*(volatile uint_io8_t*)0xB0E802C6)  /*@bfbba@*/
#define MCG_CANFD1_ILS_RF1LL	(*(volatile uint_io8_t*)0xB0E802C7)  /*@bfbba@*/
#define MCG_CANFD1_ILS_HPML	(*(volatile uint_io8_t*)0xB0E802C8)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TCL	(*(volatile uint_io8_t*)0xB0E802C9)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TCFL	(*(volatile uint_io8_t*)0xB0E802CA)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TFEL	(*(volatile uint_io8_t*)0xB0E802CB)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TEFNL	(*(volatile uint_io8_t*)0xB0E802CC)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TEFWL	(*(volatile uint_io8_t*)0xB0E802CD)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TEFFL	(*(volatile uint_io8_t*)0xB0E802CE)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TEFLL	(*(volatile uint_io8_t*)0xB0E802CF)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TSWL	(*(volatile uint_io8_t*)0xB0E802D0)  /*@bfbba@*/
#define MCG_CANFD1_ILS_MRAFL	(*(volatile uint_io8_t*)0xB0E802D1)  /*@bfbba@*/
#define MCG_CANFD1_ILS_TOOL	(*(volatile uint_io8_t*)0xB0E802D2)  /*@bfbba@*/
#define MCG_CANFD1_ILS_DRXL	(*(volatile uint_io8_t*)0xB0E802D3)  /*@bfbba@*/
#define MCG_CANFD1_ILS_BECL	(*(volatile uint_io8_t*)0xB0E802D4)  /*@bfbba@*/
#define MCG_CANFD1_ILS_BEUL	(*(volatile uint_io8_t*)0xB0E802D5)  /*@bfbba@*/
#define MCG_CANFD1_ILS_ELOL	(*(volatile uint_io8_t*)0xB0E802D6)  /*@bfbba@*/
#define MCG_CANFD1_ILS_EPL	(*(volatile uint_io8_t*)0xB0E802D7)  /*@bfbba@*/
#define MCG_CANFD1_ILS_EWL	(*(volatile uint_io8_t*)0xB0E802D8)  /*@bfbba@*/
#define MCG_CANFD1_ILS_BOL	(*(volatile uint_io8_t*)0xB0E802D9)  /*@bfbba@*/
#define MCG_CANFD1_ILS_WDIL	(*(volatile uint_io8_t*)0xB0E802DA)  /*@bfbba@*/
#define MCG_CANFD1_ILS_PEAL	(*(volatile uint_io8_t*)0xB0E802DB)  /*@bfbba@*/
#define MCG_CANFD1_ILS_PEDL	(*(volatile uint_io8_t*)0xB0E802DC)  /*@bfbba@*/
#define MCG_CANFD1_ILS_ARAL	(*(volatile uint_io8_t*)0xB0E802DD)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_ils_field{
    uint_io32_t		u1RF0NL:1;
    uint_io32_t		u1RF0WL:1;
    uint_io32_t		u1RF0FL:1;
    uint_io32_t		u1RF0LL:1;
    uint_io32_t		u1RF1NL:1;
    uint_io32_t		u1RF1WL:1;
    uint_io32_t		u1RF1FL:1;
    uint_io32_t		u1RF1LL:1;
    uint_io32_t		u1HPML:1;
    uint_io32_t		u1TCL:1;
    uint_io32_t		u1TCFL:1;
    uint_io32_t		u1TFEL:1;
    uint_io32_t		u1TEFNL:1;
    uint_io32_t		u1TEFWL:1;
    uint_io32_t		u1TEFFL:1;
    uint_io32_t		u1TEFLL:1;
    uint_io32_t		u1TSWL:1;
    uint_io32_t		u1MRAFL:1;
    uint_io32_t		u1TOOL:1;
    uint_io32_t		u1DRXL:1;
    uint_io32_t		u1BECL:1;
    uint_io32_t		u1BEUL:1;
    uint_io32_t		u1ELOL:1;
    uint_io32_t		u1EPL:1;
    uint_io32_t		u1EWL:1;
    uint_io32_t		u1BOL:1;
    uint_io32_t		u1WDIL:1;
    uint_io32_t		u1PEAL:1;
    uint_io32_t		u1PEDL:1;
    uint_io32_t		u1ARAL:1;
    uint_io32_t		:2;
}stc_mcg_canfdn_1_ils_field_t;

typedef union un_mcg_canfdn_1_ils{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_ils_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_ils_t;

/* ILE */
#define MCG_CANFD0_ILE	(MCG_CANFD0_1.unILE.u32Register)  /*@rg@*/
#define MCG_CANFD0_ILE_EINT0	(*(volatile uint_io8_t*)0xB0E002E0)  /*@bfbba@*/
#define MCG_CANFD0_ILE_EINT1	(*(volatile uint_io8_t*)0xB0E002E1)  /*@bfbba@*/

#define MCG_CANFD1_ILE	(MCG_CANFD1_1.unILE.u32Register)  /*@rg@*/
#define MCG_CANFD1_ILE_EINT0	(*(volatile uint_io8_t*)0xB0E802E0)  /*@bfbba@*/
#define MCG_CANFD1_ILE_EINT1	(*(volatile uint_io8_t*)0xB0E802E1)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_ile_field{
    uint_io32_t		u1EINT0:1;
    uint_io32_t		u1EINT1:1;
    uint_io32_t		:30;
}stc_mcg_canfdn_1_ile_field_t;

typedef union un_mcg_canfdn_1_ile{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_ile_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_ile_t;

/* GFC */
#define MCG_CANFD0_GFC	(MCG_CANFD0_1.unGFC.u32Register)  /*@rg@*/
#define MCG_CANFD0_GFC_RRFE	(*(volatile uint_io8_t*)0xB0E00400)  /*@bfbba@*/
#define MCG_CANFD0_GFC_RRFS	(*(volatile uint_io8_t*)0xB0E00401)  /*@bfbba@*/
#define MCG_CANFD0_GFC_ANFE	(MCG_CANFD0_1.unGFC.stcField.u2ANFE)  /*@bf@*/
#define MCG_CANFD0_GFC_ANFS	(MCG_CANFD0_1.unGFC.stcField.u2ANFS)  /*@bf@*/

#define MCG_CANFD1_GFC	(MCG_CANFD1_1.unGFC.u32Register)  /*@rg@*/
#define MCG_CANFD1_GFC_RRFE	(*(volatile uint_io8_t*)0xB0E80400)  /*@bfbba@*/
#define MCG_CANFD1_GFC_RRFS	(*(volatile uint_io8_t*)0xB0E80401)  /*@bfbba@*/
#define MCG_CANFD1_GFC_ANFE	(MCG_CANFD1_1.unGFC.stcField.u2ANFE)  /*@bf@*/
#define MCG_CANFD1_GFC_ANFS	(MCG_CANFD1_1.unGFC.stcField.u2ANFS)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_gfc_field{
    uint_io32_t		u1RRFE:1;
    uint_io32_t		u1RRFS:1;
    uint_io32_t		u2ANFE:2;
    uint_io32_t		u2ANFS:2;
    uint_io32_t		:26;
}stc_mcg_canfdn_1_gfc_field_t;

typedef union un_mcg_canfdn_1_gfc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_gfc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_gfc_t;

/* SIDFC */
#define MCG_CANFD0_SIDFC	(MCG_CANFD0_1.unSIDFC.u32Register)  /*@rg@*/
#define MCG_CANFD0_SIDFC_FLSSA	(MCG_CANFD0_1.unSIDFC.stcField.u14FLSSA)  /*@bf@*/
#define MCG_CANFD0_SIDFC_LSS	(MCG_CANFD0_1.unSIDFC.au8Byte[2])  /*@bfbyte@*/

#define MCG_CANFD1_SIDFC	(MCG_CANFD1_1.unSIDFC.u32Register)  /*@rg@*/
#define MCG_CANFD1_SIDFC_FLSSA	(MCG_CANFD1_1.unSIDFC.stcField.u14FLSSA)  /*@bf@*/
#define MCG_CANFD1_SIDFC_LSS	(MCG_CANFD1_1.unSIDFC.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_mcg_canfdn_1_sidfc_field{
    uint_io32_t		:2;
    uint_io32_t		u14FLSSA:14;
    uint_io32_t		u8LSS:8;
    uint_io32_t		:8;
}stc_mcg_canfdn_1_sidfc_field_t;

typedef union un_mcg_canfdn_1_sidfc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_sidfc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_sidfc_t;

/* XIDFC */
#define MCG_CANFD0_XIDFC	(MCG_CANFD0_1.unXIDFC.u32Register)  /*@rg@*/
#define MCG_CANFD0_XIDFC_FLESA	(MCG_CANFD0_1.unXIDFC.stcField.u14FLESA)  /*@bf@*/
#define MCG_CANFD0_XIDFC_LSE	(MCG_CANFD0_1.unXIDFC.stcField.u7LSE)  /*@bf@*/

#define MCG_CANFD1_XIDFC	(MCG_CANFD1_1.unXIDFC.u32Register)  /*@rg@*/
#define MCG_CANFD1_XIDFC_FLESA	(MCG_CANFD1_1.unXIDFC.stcField.u14FLESA)  /*@bf@*/
#define MCG_CANFD1_XIDFC_LSE	(MCG_CANFD1_1.unXIDFC.stcField.u7LSE)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_xidfc_field{
    uint_io32_t		:2;
    uint_io32_t		u14FLESA:14;
    uint_io32_t		u7LSE:7;
    uint_io32_t		:9;
}stc_mcg_canfdn_1_xidfc_field_t;

typedef union un_mcg_canfdn_1_xidfc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_xidfc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_xidfc_t;

/* XIDAM */
#define MCG_CANFD0_XIDAM	(MCG_CANFD0_1.unXIDAM.u32Register)  /*@rg@*/
#define MCG_CANFD0_XIDAM_EIDM	(MCG_CANFD0_1.unXIDAM.stcField.u29EIDM)  /*@bf@*/

#define MCG_CANFD1_XIDAM	(MCG_CANFD1_1.unXIDAM.u32Register)  /*@rg@*/
#define MCG_CANFD1_XIDAM_EIDM	(MCG_CANFD1_1.unXIDAM.stcField.u29EIDM)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_xidam_field{
    uint_io32_t		u29EIDM:29;
    uint_io32_t		:3;
}stc_mcg_canfdn_1_xidam_field_t;

typedef union un_mcg_canfdn_1_xidam{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_xidam_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_xidam_t;

/* HPMS */
#define MCG_CANFD0_HPMS	(MCG_CANFD0_1.unHPMS.u32Register)  /*@rg@*/
#define MCG_CANFD0_HPMS_BIDX	(MCG_CANFD0_1.unHPMS.stcField.u6BIDX)  /*@bf@*/
#define MCG_CANFD0_HPMS_MSI	(MCG_CANFD0_1.unHPMS.stcField.u2MSI)  /*@bf@*/
#define MCG_CANFD0_HPMS_FIDX	(MCG_CANFD0_1.unHPMS.stcField.u7FIDX)  /*@bf@*/
#define MCG_CANFD0_HPMS_FLST	(*(volatile uint_io8_t*)0xB0E004AF)  /*@bfbba@*/

#define MCG_CANFD1_HPMS	(MCG_CANFD1_1.unHPMS.u32Register)  /*@rg@*/
#define MCG_CANFD1_HPMS_BIDX	(MCG_CANFD1_1.unHPMS.stcField.u6BIDX)  /*@bf@*/
#define MCG_CANFD1_HPMS_MSI	(MCG_CANFD1_1.unHPMS.stcField.u2MSI)  /*@bf@*/
#define MCG_CANFD1_HPMS_FIDX	(MCG_CANFD1_1.unHPMS.stcField.u7FIDX)  /*@bf@*/
#define MCG_CANFD1_HPMS_FLST	(*(volatile uint_io8_t*)0xB0E804AF)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_hpms_field{
    uint_io32_t		u6BIDX:6;
    uint_io32_t		u2MSI:2;
    uint_io32_t		u7FIDX:7;
    uint_io32_t		u1FLST:1;
    uint_io32_t		:16;
}stc_mcg_canfdn_1_hpms_field_t;

typedef union un_mcg_canfdn_1_hpms{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_hpms_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_hpms_t;

/* NDAT1 */
#define MCG_CANFD0_NDAT1	(MCG_CANFD0_1.unNDAT1.u32Register)  /*@rg@*/
#define MCG_CANFD0_NDAT1_ND0	(*(volatile uint_io8_t*)0xB0E004C0)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND1	(*(volatile uint_io8_t*)0xB0E004C1)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND2	(*(volatile uint_io8_t*)0xB0E004C2)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND3	(*(volatile uint_io8_t*)0xB0E004C3)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND4	(*(volatile uint_io8_t*)0xB0E004C4)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND5	(*(volatile uint_io8_t*)0xB0E004C5)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND6	(*(volatile uint_io8_t*)0xB0E004C6)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND7	(*(volatile uint_io8_t*)0xB0E004C7)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND8	(*(volatile uint_io8_t*)0xB0E004C8)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND9	(*(volatile uint_io8_t*)0xB0E004C9)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND10	(*(volatile uint_io8_t*)0xB0E004CA)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND11	(*(volatile uint_io8_t*)0xB0E004CB)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND12	(*(volatile uint_io8_t*)0xB0E004CC)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND13	(*(volatile uint_io8_t*)0xB0E004CD)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND14	(*(volatile uint_io8_t*)0xB0E004CE)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND15	(*(volatile uint_io8_t*)0xB0E004CF)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND16	(*(volatile uint_io8_t*)0xB0E004D0)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND17	(*(volatile uint_io8_t*)0xB0E004D1)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND18	(*(volatile uint_io8_t*)0xB0E004D2)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND19	(*(volatile uint_io8_t*)0xB0E004D3)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND20	(*(volatile uint_io8_t*)0xB0E004D4)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND21	(*(volatile uint_io8_t*)0xB0E004D5)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND22	(*(volatile uint_io8_t*)0xB0E004D6)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND23	(*(volatile uint_io8_t*)0xB0E004D7)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND24	(*(volatile uint_io8_t*)0xB0E004D8)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND25	(*(volatile uint_io8_t*)0xB0E004D9)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND26	(*(volatile uint_io8_t*)0xB0E004DA)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND27	(*(volatile uint_io8_t*)0xB0E004DB)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND28	(*(volatile uint_io8_t*)0xB0E004DC)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND29	(*(volatile uint_io8_t*)0xB0E004DD)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND30	(*(volatile uint_io8_t*)0xB0E004DE)  /*@bfbba@*/
#define MCG_CANFD0_NDAT1_ND31	(*(volatile uint_io8_t*)0xB0E004DF)  /*@bfbba@*/

#define MCG_CANFD1_NDAT1	(MCG_CANFD1_1.unNDAT1.u32Register)  /*@rg@*/
#define MCG_CANFD1_NDAT1_ND0	(*(volatile uint_io8_t*)0xB0E804C0)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND1	(*(volatile uint_io8_t*)0xB0E804C1)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND2	(*(volatile uint_io8_t*)0xB0E804C2)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND3	(*(volatile uint_io8_t*)0xB0E804C3)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND4	(*(volatile uint_io8_t*)0xB0E804C4)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND5	(*(volatile uint_io8_t*)0xB0E804C5)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND6	(*(volatile uint_io8_t*)0xB0E804C6)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND7	(*(volatile uint_io8_t*)0xB0E804C7)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND8	(*(volatile uint_io8_t*)0xB0E804C8)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND9	(*(volatile uint_io8_t*)0xB0E804C9)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND10	(*(volatile uint_io8_t*)0xB0E804CA)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND11	(*(volatile uint_io8_t*)0xB0E804CB)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND12	(*(volatile uint_io8_t*)0xB0E804CC)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND13	(*(volatile uint_io8_t*)0xB0E804CD)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND14	(*(volatile uint_io8_t*)0xB0E804CE)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND15	(*(volatile uint_io8_t*)0xB0E804CF)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND16	(*(volatile uint_io8_t*)0xB0E804D0)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND17	(*(volatile uint_io8_t*)0xB0E804D1)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND18	(*(volatile uint_io8_t*)0xB0E804D2)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND19	(*(volatile uint_io8_t*)0xB0E804D3)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND20	(*(volatile uint_io8_t*)0xB0E804D4)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND21	(*(volatile uint_io8_t*)0xB0E804D5)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND22	(*(volatile uint_io8_t*)0xB0E804D6)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND23	(*(volatile uint_io8_t*)0xB0E804D7)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND24	(*(volatile uint_io8_t*)0xB0E804D8)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND25	(*(volatile uint_io8_t*)0xB0E804D9)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND26	(*(volatile uint_io8_t*)0xB0E804DA)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND27	(*(volatile uint_io8_t*)0xB0E804DB)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND28	(*(volatile uint_io8_t*)0xB0E804DC)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND29	(*(volatile uint_io8_t*)0xB0E804DD)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND30	(*(volatile uint_io8_t*)0xB0E804DE)  /*@bfbba@*/
#define MCG_CANFD1_NDAT1_ND31	(*(volatile uint_io8_t*)0xB0E804DF)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_ndat1_field{
    uint_io32_t		u1ND0:1;
    uint_io32_t		u1ND1:1;
    uint_io32_t		u1ND2:1;
    uint_io32_t		u1ND3:1;
    uint_io32_t		u1ND4:1;
    uint_io32_t		u1ND5:1;
    uint_io32_t		u1ND6:1;
    uint_io32_t		u1ND7:1;
    uint_io32_t		u1ND8:1;
    uint_io32_t		u1ND9:1;
    uint_io32_t		u1ND10:1;
    uint_io32_t		u1ND11:1;
    uint_io32_t		u1ND12:1;
    uint_io32_t		u1ND13:1;
    uint_io32_t		u1ND14:1;
    uint_io32_t		u1ND15:1;
    uint_io32_t		u1ND16:1;
    uint_io32_t		u1ND17:1;
    uint_io32_t		u1ND18:1;
    uint_io32_t		u1ND19:1;
    uint_io32_t		u1ND20:1;
    uint_io32_t		u1ND21:1;
    uint_io32_t		u1ND22:1;
    uint_io32_t		u1ND23:1;
    uint_io32_t		u1ND24:1;
    uint_io32_t		u1ND25:1;
    uint_io32_t		u1ND26:1;
    uint_io32_t		u1ND27:1;
    uint_io32_t		u1ND28:1;
    uint_io32_t		u1ND29:1;
    uint_io32_t		u1ND30:1;
    uint_io32_t		u1ND31:1;
}stc_mcg_canfdn_1_ndat1_field_t;

typedef union un_mcg_canfdn_1_ndat1{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_ndat1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_ndat1_t;

/* NDAT2 */
#define MCG_CANFD0_NDAT2	(MCG_CANFD0_1.unNDAT2.u32Register)  /*@rg@*/
#define MCG_CANFD0_NDAT2_ND32	(*(volatile uint_io8_t*)0xB0E004E0)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND33	(*(volatile uint_io8_t*)0xB0E004E1)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND34	(*(volatile uint_io8_t*)0xB0E004E2)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND35	(*(volatile uint_io8_t*)0xB0E004E3)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND36	(*(volatile uint_io8_t*)0xB0E004E4)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND37	(*(volatile uint_io8_t*)0xB0E004E5)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND38	(*(volatile uint_io8_t*)0xB0E004E6)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND39	(*(volatile uint_io8_t*)0xB0E004E7)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND40	(*(volatile uint_io8_t*)0xB0E004E8)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND41	(*(volatile uint_io8_t*)0xB0E004E9)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND42	(*(volatile uint_io8_t*)0xB0E004EA)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND43	(*(volatile uint_io8_t*)0xB0E004EB)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND44	(*(volatile uint_io8_t*)0xB0E004EC)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND45	(*(volatile uint_io8_t*)0xB0E004ED)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND46	(*(volatile uint_io8_t*)0xB0E004EE)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND47	(*(volatile uint_io8_t*)0xB0E004EF)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND48	(*(volatile uint_io8_t*)0xB0E004F0)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND49	(*(volatile uint_io8_t*)0xB0E004F1)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND50	(*(volatile uint_io8_t*)0xB0E004F2)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND51	(*(volatile uint_io8_t*)0xB0E004F3)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND52	(*(volatile uint_io8_t*)0xB0E004F4)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND53	(*(volatile uint_io8_t*)0xB0E004F5)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND54	(*(volatile uint_io8_t*)0xB0E004F6)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND55	(*(volatile uint_io8_t*)0xB0E004F7)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND56	(*(volatile uint_io8_t*)0xB0E004F8)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND57	(*(volatile uint_io8_t*)0xB0E004F9)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND58	(*(volatile uint_io8_t*)0xB0E004FA)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND59	(*(volatile uint_io8_t*)0xB0E004FB)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND60	(*(volatile uint_io8_t*)0xB0E004FC)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND61	(*(volatile uint_io8_t*)0xB0E004FD)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND62	(*(volatile uint_io8_t*)0xB0E004FE)  /*@bfbba@*/
#define MCG_CANFD0_NDAT2_ND63	(*(volatile uint_io8_t*)0xB0E004FF)  /*@bfbba@*/

#define MCG_CANFD1_NDAT2	(MCG_CANFD1_1.unNDAT2.u32Register)  /*@rg@*/
#define MCG_CANFD1_NDAT2_ND32	(*(volatile uint_io8_t*)0xB0E804E0)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND33	(*(volatile uint_io8_t*)0xB0E804E1)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND34	(*(volatile uint_io8_t*)0xB0E804E2)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND35	(*(volatile uint_io8_t*)0xB0E804E3)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND36	(*(volatile uint_io8_t*)0xB0E804E4)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND37	(*(volatile uint_io8_t*)0xB0E804E5)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND38	(*(volatile uint_io8_t*)0xB0E804E6)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND39	(*(volatile uint_io8_t*)0xB0E804E7)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND40	(*(volatile uint_io8_t*)0xB0E804E8)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND41	(*(volatile uint_io8_t*)0xB0E804E9)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND42	(*(volatile uint_io8_t*)0xB0E804EA)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND43	(*(volatile uint_io8_t*)0xB0E804EB)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND44	(*(volatile uint_io8_t*)0xB0E804EC)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND45	(*(volatile uint_io8_t*)0xB0E804ED)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND46	(*(volatile uint_io8_t*)0xB0E804EE)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND47	(*(volatile uint_io8_t*)0xB0E804EF)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND48	(*(volatile uint_io8_t*)0xB0E804F0)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND49	(*(volatile uint_io8_t*)0xB0E804F1)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND50	(*(volatile uint_io8_t*)0xB0E804F2)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND51	(*(volatile uint_io8_t*)0xB0E804F3)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND52	(*(volatile uint_io8_t*)0xB0E804F4)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND53	(*(volatile uint_io8_t*)0xB0E804F5)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND54	(*(volatile uint_io8_t*)0xB0E804F6)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND55	(*(volatile uint_io8_t*)0xB0E804F7)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND56	(*(volatile uint_io8_t*)0xB0E804F8)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND57	(*(volatile uint_io8_t*)0xB0E804F9)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND58	(*(volatile uint_io8_t*)0xB0E804FA)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND59	(*(volatile uint_io8_t*)0xB0E804FB)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND60	(*(volatile uint_io8_t*)0xB0E804FC)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND61	(*(volatile uint_io8_t*)0xB0E804FD)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND62	(*(volatile uint_io8_t*)0xB0E804FE)  /*@bfbba@*/
#define MCG_CANFD1_NDAT2_ND63	(*(volatile uint_io8_t*)0xB0E804FF)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_ndat2_field{
    uint_io32_t		u1ND32:1;
    uint_io32_t		u1ND33:1;
    uint_io32_t		u1ND34:1;
    uint_io32_t		u1ND35:1;
    uint_io32_t		u1ND36:1;
    uint_io32_t		u1ND37:1;
    uint_io32_t		u1ND38:1;
    uint_io32_t		u1ND39:1;
    uint_io32_t		u1ND40:1;
    uint_io32_t		u1ND41:1;
    uint_io32_t		u1ND42:1;
    uint_io32_t		u1ND43:1;
    uint_io32_t		u1ND44:1;
    uint_io32_t		u1ND45:1;
    uint_io32_t		u1ND46:1;
    uint_io32_t		u1ND47:1;
    uint_io32_t		u1ND48:1;
    uint_io32_t		u1ND49:1;
    uint_io32_t		u1ND50:1;
    uint_io32_t		u1ND51:1;
    uint_io32_t		u1ND52:1;
    uint_io32_t		u1ND53:1;
    uint_io32_t		u1ND54:1;
    uint_io32_t		u1ND55:1;
    uint_io32_t		u1ND56:1;
    uint_io32_t		u1ND57:1;
    uint_io32_t		u1ND58:1;
    uint_io32_t		u1ND59:1;
    uint_io32_t		u1ND60:1;
    uint_io32_t		u1ND61:1;
    uint_io32_t		u1ND62:1;
    uint_io32_t		u1ND63:1;
}stc_mcg_canfdn_1_ndat2_field_t;

typedef union un_mcg_canfdn_1_ndat2{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_ndat2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_ndat2_t;

/* RXF0C */
#define MCG_CANFD0_RXF0C	(MCG_CANFD0_1.unRXF0C.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXF0C_F0SA	(MCG_CANFD0_1.unRXF0C.stcField.u14F0SA)  /*@bf@*/
#define MCG_CANFD0_RXF0C_F0S	(MCG_CANFD0_1.unRXF0C.stcField.u7F0S)  /*@bf@*/
#define MCG_CANFD0_RXF0C_F0WM	(MCG_CANFD0_1.unRXF0C.stcField.u7F0WM)  /*@bf@*/
#define MCG_CANFD0_RXF0C_F0OM	(*(volatile uint_io8_t*)0xB0E0051F)  /*@bfbba@*/

#define MCG_CANFD1_RXF0C	(MCG_CANFD1_1.unRXF0C.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXF0C_F0SA	(MCG_CANFD1_1.unRXF0C.stcField.u14F0SA)  /*@bf@*/
#define MCG_CANFD1_RXF0C_F0S	(MCG_CANFD1_1.unRXF0C.stcField.u7F0S)  /*@bf@*/
#define MCG_CANFD1_RXF0C_F0WM	(MCG_CANFD1_1.unRXF0C.stcField.u7F0WM)  /*@bf@*/
#define MCG_CANFD1_RXF0C_F0OM	(*(volatile uint_io8_t*)0xB0E8051F)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_rxf0c_field{
    uint_io32_t		:2;
    uint_io32_t		u14F0SA:14;
    uint_io32_t		u7F0S:7;
    uint_io32_t		:1;
    uint_io32_t		u7F0WM:7;
    uint_io32_t		u1F0OM:1;
}stc_mcg_canfdn_1_rxf0c_field_t;

typedef union un_mcg_canfdn_1_rxf0c{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxf0c_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxf0c_t;

/* RXF0S */
#define MCG_CANFD0_RXF0S	(MCG_CANFD0_1.unRXF0S.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXF0S_F0FL	(MCG_CANFD0_1.unRXF0S.stcField.u7F0FL)  /*@bf@*/
#define MCG_CANFD0_RXF0S_F0GI	(MCG_CANFD0_1.unRXF0S.stcField.u6F0GI)  /*@bf@*/
#define MCG_CANFD0_RXF0S_F0PI	(MCG_CANFD0_1.unRXF0S.stcField.u6F0PI)  /*@bf@*/
#define MCG_CANFD0_RXF0S_F0F	(*(volatile uint_io8_t*)0xB0E00538)  /*@bfbba@*/
#define MCG_CANFD0_RXF0S_RF0L	(*(volatile uint_io8_t*)0xB0E00539)  /*@bfbba@*/

#define MCG_CANFD1_RXF0S	(MCG_CANFD1_1.unRXF0S.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXF0S_F0FL	(MCG_CANFD1_1.unRXF0S.stcField.u7F0FL)  /*@bf@*/
#define MCG_CANFD1_RXF0S_F0GI	(MCG_CANFD1_1.unRXF0S.stcField.u6F0GI)  /*@bf@*/
#define MCG_CANFD1_RXF0S_F0PI	(MCG_CANFD1_1.unRXF0S.stcField.u6F0PI)  /*@bf@*/
#define MCG_CANFD1_RXF0S_F0F	(*(volatile uint_io8_t*)0xB0E80538)  /*@bfbba@*/
#define MCG_CANFD1_RXF0S_RF0L	(*(volatile uint_io8_t*)0xB0E80539)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_rxf0s_field{
    uint_io32_t		u7F0FL:7;
    uint_io32_t		:1;
    uint_io32_t		u6F0GI:6;
    uint_io32_t		:2;
    uint_io32_t		u6F0PI:6;
    uint_io32_t		:2;
    uint_io32_t		u1F0F:1;
    uint_io32_t		u1RF0L:1;
    uint_io32_t		:6;
}stc_mcg_canfdn_1_rxf0s_field_t;

typedef union un_mcg_canfdn_1_rxf0s{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxf0s_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxf0s_t;

/* RXF0A */
#define MCG_CANFD0_RXF0A	(MCG_CANFD0_1.unRXF0A.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXF0A_F0AI	(MCG_CANFD0_1.unRXF0A.stcField.u6F0AI)  /*@bf@*/

#define MCG_CANFD1_RXF0A	(MCG_CANFD1_1.unRXF0A.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXF0A_F0AI	(MCG_CANFD1_1.unRXF0A.stcField.u6F0AI)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_rxf0a_field{
    uint_io32_t		u6F0AI:6;
    uint_io32_t		:26;
}stc_mcg_canfdn_1_rxf0a_field_t;

typedef union un_mcg_canfdn_1_rxf0a{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxf0a_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxf0a_t;

/* RXBC */
#define MCG_CANFD0_RXBC	(MCG_CANFD0_1.unRXBC.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXBC_RBSA	(MCG_CANFD0_1.unRXBC.stcField.u14RBSA)  /*@bf@*/

#define MCG_CANFD1_RXBC	(MCG_CANFD1_1.unRXBC.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXBC_RBSA	(MCG_CANFD1_1.unRXBC.stcField.u14RBSA)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_rxbc_field{
    uint_io32_t		:2;
    uint_io32_t		u14RBSA:14;
    uint_io32_t		:16;
}stc_mcg_canfdn_1_rxbc_field_t;

typedef union un_mcg_canfdn_1_rxbc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxbc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxbc_t;

/* RXF1C */
#define MCG_CANFD0_RXF1C	(MCG_CANFD0_1.unRXF1C.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXF1C_F1SA	(MCG_CANFD0_1.unRXF1C.stcField.u14F1SA)  /*@bf@*/
#define MCG_CANFD0_RXF1C_F1S	(MCG_CANFD0_1.unRXF1C.stcField.u7F1S)  /*@bf@*/
#define MCG_CANFD0_RXF1C_F1WM	(MCG_CANFD0_1.unRXF1C.stcField.u7F1WM)  /*@bf@*/
#define MCG_CANFD0_RXF1C_F1OM	(*(volatile uint_io8_t*)0xB0E0059F)  /*@bfbba@*/

#define MCG_CANFD1_RXF1C	(MCG_CANFD1_1.unRXF1C.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXF1C_F1SA	(MCG_CANFD1_1.unRXF1C.stcField.u14F1SA)  /*@bf@*/
#define MCG_CANFD1_RXF1C_F1S	(MCG_CANFD1_1.unRXF1C.stcField.u7F1S)  /*@bf@*/
#define MCG_CANFD1_RXF1C_F1WM	(MCG_CANFD1_1.unRXF1C.stcField.u7F1WM)  /*@bf@*/
#define MCG_CANFD1_RXF1C_F1OM	(*(volatile uint_io8_t*)0xB0E8059F)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_rxf1c_field{
    uint_io32_t		:2;
    uint_io32_t		u14F1SA:14;
    uint_io32_t		u7F1S:7;
    uint_io32_t		:1;
    uint_io32_t		u7F1WM:7;
    uint_io32_t		u1F1OM:1;
}stc_mcg_canfdn_1_rxf1c_field_t;

typedef union un_mcg_canfdn_1_rxf1c{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxf1c_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxf1c_t;

/* RXF1S */
#define MCG_CANFD0_RXF1S	(MCG_CANFD0_1.unRXF1S.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXF1S_F1FL	(MCG_CANFD0_1.unRXF1S.stcField.u7F1FL)  /*@bf@*/
#define MCG_CANFD0_RXF1S_F1GI	(MCG_CANFD0_1.unRXF1S.stcField.u6F1GI)  /*@bf@*/
#define MCG_CANFD0_RXF1S_F1PI	(MCG_CANFD0_1.unRXF1S.stcField.u6F1PI)  /*@bf@*/
#define MCG_CANFD0_RXF1S_F1F	(*(volatile uint_io8_t*)0xB0E005B8)  /*@bfbba@*/
#define MCG_CANFD0_RXF1S_RF1L	(*(volatile uint_io8_t*)0xB0E005B9)  /*@bfbba@*/
#define MCG_CANFD0_RXF1S_DMS	(MCG_CANFD0_1.unRXF1S.stcField.u2DMS)  /*@bf@*/

#define MCG_CANFD1_RXF1S	(MCG_CANFD1_1.unRXF1S.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXF1S_F1FL	(MCG_CANFD1_1.unRXF1S.stcField.u7F1FL)  /*@bf@*/
#define MCG_CANFD1_RXF1S_F1GI	(MCG_CANFD1_1.unRXF1S.stcField.u6F1GI)  /*@bf@*/
#define MCG_CANFD1_RXF1S_F1PI	(MCG_CANFD1_1.unRXF1S.stcField.u6F1PI)  /*@bf@*/
#define MCG_CANFD1_RXF1S_F1F	(*(volatile uint_io8_t*)0xB0E805B8)  /*@bfbba@*/
#define MCG_CANFD1_RXF1S_RF1L	(*(volatile uint_io8_t*)0xB0E805B9)  /*@bfbba@*/
#define MCG_CANFD1_RXF1S_DMS	(MCG_CANFD1_1.unRXF1S.stcField.u2DMS)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_rxf1s_field{
    uint_io32_t		u7F1FL:7;
    uint_io32_t		:1;
    uint_io32_t		u6F1GI:6;
    uint_io32_t		:2;
    uint_io32_t		u6F1PI:6;
    uint_io32_t		:2;
    uint_io32_t		u1F1F:1;
    uint_io32_t		u1RF1L:1;
    uint_io32_t		:4;
    uint_io32_t		u2DMS:2;
}stc_mcg_canfdn_1_rxf1s_field_t;

typedef union un_mcg_canfdn_1_rxf1s{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxf1s_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxf1s_t;

/* RXF1A */
#define MCG_CANFD0_RXF1A	(MCG_CANFD0_1.unRXF1A.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXF1A_F1AI	(MCG_CANFD0_1.unRXF1A.stcField.u6F1AI)  /*@bf@*/

#define MCG_CANFD1_RXF1A	(MCG_CANFD1_1.unRXF1A.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXF1A_F1AI	(MCG_CANFD1_1.unRXF1A.stcField.u6F1AI)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_rxf1a_field{
    uint_io32_t		u6F1AI:6;
    uint_io32_t		:26;
}stc_mcg_canfdn_1_rxf1a_field_t;

typedef union un_mcg_canfdn_1_rxf1a{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxf1a_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxf1a_t;

/* RXESC */
#define MCG_CANFD0_RXESC	(MCG_CANFD0_1.unRXESC.u32Register)  /*@rg@*/
#define MCG_CANFD0_RXESC_F0DS	(MCG_CANFD0_1.unRXESC.stcField.u3F0DS)  /*@bf@*/
#define MCG_CANFD0_RXESC_F1DS	(MCG_CANFD0_1.unRXESC.stcField.u3F1DS)  /*@bf@*/
#define MCG_CANFD0_RXESC_RBDS	(MCG_CANFD0_1.unRXESC.stcField.u3RBDS)  /*@bf@*/

#define MCG_CANFD1_RXESC	(MCG_CANFD1_1.unRXESC.u32Register)  /*@rg@*/
#define MCG_CANFD1_RXESC_F0DS	(MCG_CANFD1_1.unRXESC.stcField.u3F0DS)  /*@bf@*/
#define MCG_CANFD1_RXESC_F1DS	(MCG_CANFD1_1.unRXESC.stcField.u3F1DS)  /*@bf@*/
#define MCG_CANFD1_RXESC_RBDS	(MCG_CANFD1_1.unRXESC.stcField.u3RBDS)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_rxesc_field{
    uint_io32_t		u3F0DS:3;
    uint_io32_t		:1;
    uint_io32_t		u3F1DS:3;
    uint_io32_t		:1;
    uint_io32_t		u3RBDS:3;
    uint_io32_t		:21;
}stc_mcg_canfdn_1_rxesc_field_t;

typedef union un_mcg_canfdn_1_rxesc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_rxesc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_rxesc_t;

/* TXBC */
#define MCG_CANFD0_TXBC	(MCG_CANFD0_1.unTXBC.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBC_TBSA	(MCG_CANFD0_1.unTXBC.stcField.u14TBSA)  /*@bf@*/
#define MCG_CANFD0_TXBC_NDTB	(MCG_CANFD0_1.unTXBC.stcField.u6NDTB)  /*@bf@*/
#define MCG_CANFD0_TXBC_TFQS	(MCG_CANFD0_1.unTXBC.stcField.u6TFQS)  /*@bf@*/
#define MCG_CANFD0_TXBC_TFQM	(*(volatile uint_io8_t*)0xB0E0061E)  /*@bfbba@*/

#define MCG_CANFD1_TXBC	(MCG_CANFD1_1.unTXBC.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBC_TBSA	(MCG_CANFD1_1.unTXBC.stcField.u14TBSA)  /*@bf@*/
#define MCG_CANFD1_TXBC_NDTB	(MCG_CANFD1_1.unTXBC.stcField.u6NDTB)  /*@bf@*/
#define MCG_CANFD1_TXBC_TFQS	(MCG_CANFD1_1.unTXBC.stcField.u6TFQS)  /*@bf@*/
#define MCG_CANFD1_TXBC_TFQM	(*(volatile uint_io8_t*)0xB0E8061E)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbc_field{
    uint_io32_t		:2;
    uint_io32_t		u14TBSA:14;
    uint_io32_t		u6NDTB:6;
    uint_io32_t		:2;
    uint_io32_t		u6TFQS:6;
    uint_io32_t		u1TFQM:1;
    uint_io32_t		:1;
}stc_mcg_canfdn_1_txbc_field_t;

typedef union un_mcg_canfdn_1_txbc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbc_t;

/* TXFQS */
#define MCG_CANFD0_TXFQS	(MCG_CANFD0_1.unTXFQS.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXFQS_TFFL	(MCG_CANFD0_1.unTXFQS.stcField.u6TFFL)  /*@bf@*/
#define MCG_CANFD0_TXFQS_TFGI	(MCG_CANFD0_1.unTXFQS.stcField.u5TFGI)  /*@bf@*/
#define MCG_CANFD0_TXFQS_TFQPI	(MCG_CANFD0_1.unTXFQS.stcField.u5TFQPI)  /*@bf@*/
#define MCG_CANFD0_TXFQS_TFQF	(*(volatile uint_io8_t*)0xB0E00635)  /*@bfbba@*/

#define MCG_CANFD1_TXFQS	(MCG_CANFD1_1.unTXFQS.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXFQS_TFFL	(MCG_CANFD1_1.unTXFQS.stcField.u6TFFL)  /*@bf@*/
#define MCG_CANFD1_TXFQS_TFGI	(MCG_CANFD1_1.unTXFQS.stcField.u5TFGI)  /*@bf@*/
#define MCG_CANFD1_TXFQS_TFQPI	(MCG_CANFD1_1.unTXFQS.stcField.u5TFQPI)  /*@bf@*/
#define MCG_CANFD1_TXFQS_TFQF	(*(volatile uint_io8_t*)0xB0E80635)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txfqs_field{
    uint_io32_t		u6TFFL:6;
    uint_io32_t		:2;
    uint_io32_t		u5TFGI:5;
    uint_io32_t		:3;
    uint_io32_t		u5TFQPI:5;
    uint_io32_t		u1TFQF:1;
    uint_io32_t		:10;
}stc_mcg_canfdn_1_txfqs_field_t;

typedef union un_mcg_canfdn_1_txfqs{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txfqs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txfqs_t;

/* TXESC */
#define MCG_CANFD0_TXESC	(MCG_CANFD0_1.unTXESC.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXESC_TBDS	(MCG_CANFD0_1.unTXESC.stcField.u3TBDS)  /*@bf@*/

#define MCG_CANFD1_TXESC	(MCG_CANFD1_1.unTXESC.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXESC_TBDS	(MCG_CANFD1_1.unTXESC.stcField.u3TBDS)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_txesc_field{
    uint_io32_t		u3TBDS:3;
    uint_io32_t		:29;
}stc_mcg_canfdn_1_txesc_field_t;

typedef union un_mcg_canfdn_1_txesc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txesc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txesc_t;

/* TXBRP */
#define MCG_CANFD0_TXBRP	(MCG_CANFD0_1.unTXBRP.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBRP_TRP0	(*(volatile uint_io8_t*)0xB0E00660)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP1	(*(volatile uint_io8_t*)0xB0E00661)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP2	(*(volatile uint_io8_t*)0xB0E00662)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP3	(*(volatile uint_io8_t*)0xB0E00663)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP4	(*(volatile uint_io8_t*)0xB0E00664)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP5	(*(volatile uint_io8_t*)0xB0E00665)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP6	(*(volatile uint_io8_t*)0xB0E00666)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP7	(*(volatile uint_io8_t*)0xB0E00667)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP8	(*(volatile uint_io8_t*)0xB0E00668)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP9	(*(volatile uint_io8_t*)0xB0E00669)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP10	(*(volatile uint_io8_t*)0xB0E0066A)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP11	(*(volatile uint_io8_t*)0xB0E0066B)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP12	(*(volatile uint_io8_t*)0xB0E0066C)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP13	(*(volatile uint_io8_t*)0xB0E0066D)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP14	(*(volatile uint_io8_t*)0xB0E0066E)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP15	(*(volatile uint_io8_t*)0xB0E0066F)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP16	(*(volatile uint_io8_t*)0xB0E00670)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP17	(*(volatile uint_io8_t*)0xB0E00671)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP18	(*(volatile uint_io8_t*)0xB0E00672)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP19	(*(volatile uint_io8_t*)0xB0E00673)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP20	(*(volatile uint_io8_t*)0xB0E00674)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP21	(*(volatile uint_io8_t*)0xB0E00675)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP22	(*(volatile uint_io8_t*)0xB0E00676)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP23	(*(volatile uint_io8_t*)0xB0E00677)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP24	(*(volatile uint_io8_t*)0xB0E00678)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP25	(*(volatile uint_io8_t*)0xB0E00679)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP26	(*(volatile uint_io8_t*)0xB0E0067A)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP27	(*(volatile uint_io8_t*)0xB0E0067B)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP28	(*(volatile uint_io8_t*)0xB0E0067C)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP29	(*(volatile uint_io8_t*)0xB0E0067D)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP30	(*(volatile uint_io8_t*)0xB0E0067E)  /*@bfbba@*/
#define MCG_CANFD0_TXBRP_TRP31	(*(volatile uint_io8_t*)0xB0E0067F)  /*@bfbba@*/

#define MCG_CANFD1_TXBRP	(MCG_CANFD1_1.unTXBRP.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBRP_TRP0	(*(volatile uint_io8_t*)0xB0E80660)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP1	(*(volatile uint_io8_t*)0xB0E80661)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP2	(*(volatile uint_io8_t*)0xB0E80662)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP3	(*(volatile uint_io8_t*)0xB0E80663)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP4	(*(volatile uint_io8_t*)0xB0E80664)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP5	(*(volatile uint_io8_t*)0xB0E80665)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP6	(*(volatile uint_io8_t*)0xB0E80666)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP7	(*(volatile uint_io8_t*)0xB0E80667)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP8	(*(volatile uint_io8_t*)0xB0E80668)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP9	(*(volatile uint_io8_t*)0xB0E80669)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP10	(*(volatile uint_io8_t*)0xB0E8066A)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP11	(*(volatile uint_io8_t*)0xB0E8066B)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP12	(*(volatile uint_io8_t*)0xB0E8066C)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP13	(*(volatile uint_io8_t*)0xB0E8066D)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP14	(*(volatile uint_io8_t*)0xB0E8066E)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP15	(*(volatile uint_io8_t*)0xB0E8066F)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP16	(*(volatile uint_io8_t*)0xB0E80670)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP17	(*(volatile uint_io8_t*)0xB0E80671)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP18	(*(volatile uint_io8_t*)0xB0E80672)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP19	(*(volatile uint_io8_t*)0xB0E80673)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP20	(*(volatile uint_io8_t*)0xB0E80674)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP21	(*(volatile uint_io8_t*)0xB0E80675)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP22	(*(volatile uint_io8_t*)0xB0E80676)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP23	(*(volatile uint_io8_t*)0xB0E80677)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP24	(*(volatile uint_io8_t*)0xB0E80678)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP25	(*(volatile uint_io8_t*)0xB0E80679)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP26	(*(volatile uint_io8_t*)0xB0E8067A)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP27	(*(volatile uint_io8_t*)0xB0E8067B)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP28	(*(volatile uint_io8_t*)0xB0E8067C)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP29	(*(volatile uint_io8_t*)0xB0E8067D)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP30	(*(volatile uint_io8_t*)0xB0E8067E)  /*@bfbba@*/
#define MCG_CANFD1_TXBRP_TRP31	(*(volatile uint_io8_t*)0xB0E8067F)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbrp_field{
    uint_io32_t		u1TRP0:1;
    uint_io32_t		u1TRP1:1;
    uint_io32_t		u1TRP2:1;
    uint_io32_t		u1TRP3:1;
    uint_io32_t		u1TRP4:1;
    uint_io32_t		u1TRP5:1;
    uint_io32_t		u1TRP6:1;
    uint_io32_t		u1TRP7:1;
    uint_io32_t		u1TRP8:1;
    uint_io32_t		u1TRP9:1;
    uint_io32_t		u1TRP10:1;
    uint_io32_t		u1TRP11:1;
    uint_io32_t		u1TRP12:1;
    uint_io32_t		u1TRP13:1;
    uint_io32_t		u1TRP14:1;
    uint_io32_t		u1TRP15:1;
    uint_io32_t		u1TRP16:1;
    uint_io32_t		u1TRP17:1;
    uint_io32_t		u1TRP18:1;
    uint_io32_t		u1TRP19:1;
    uint_io32_t		u1TRP20:1;
    uint_io32_t		u1TRP21:1;
    uint_io32_t		u1TRP22:1;
    uint_io32_t		u1TRP23:1;
    uint_io32_t		u1TRP24:1;
    uint_io32_t		u1TRP25:1;
    uint_io32_t		u1TRP26:1;
    uint_io32_t		u1TRP27:1;
    uint_io32_t		u1TRP28:1;
    uint_io32_t		u1TRP29:1;
    uint_io32_t		u1TRP30:1;
    uint_io32_t		u1TRP31:1;
}stc_mcg_canfdn_1_txbrp_field_t;

typedef union un_mcg_canfdn_1_txbrp{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbrp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbrp_t;

/* TXBAR */
#define MCG_CANFD0_TXBAR	(MCG_CANFD0_1.unTXBAR.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBAR_AR0	(*(volatile uint_io8_t*)0xB0E00680)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR1	(*(volatile uint_io8_t*)0xB0E00681)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR2	(*(volatile uint_io8_t*)0xB0E00682)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR3	(*(volatile uint_io8_t*)0xB0E00683)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR4	(*(volatile uint_io8_t*)0xB0E00684)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR5	(*(volatile uint_io8_t*)0xB0E00685)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR6	(*(volatile uint_io8_t*)0xB0E00686)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR7	(*(volatile uint_io8_t*)0xB0E00687)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR8	(*(volatile uint_io8_t*)0xB0E00688)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR9	(*(volatile uint_io8_t*)0xB0E00689)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR10	(*(volatile uint_io8_t*)0xB0E0068A)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR11	(*(volatile uint_io8_t*)0xB0E0068B)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR12	(*(volatile uint_io8_t*)0xB0E0068C)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR13	(*(volatile uint_io8_t*)0xB0E0068D)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR14	(*(volatile uint_io8_t*)0xB0E0068E)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR15	(*(volatile uint_io8_t*)0xB0E0068F)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR16	(*(volatile uint_io8_t*)0xB0E00690)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR17	(*(volatile uint_io8_t*)0xB0E00691)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR18	(*(volatile uint_io8_t*)0xB0E00692)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR19	(*(volatile uint_io8_t*)0xB0E00693)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR20	(*(volatile uint_io8_t*)0xB0E00694)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR21	(*(volatile uint_io8_t*)0xB0E00695)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR22	(*(volatile uint_io8_t*)0xB0E00696)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR23	(*(volatile uint_io8_t*)0xB0E00697)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR24	(*(volatile uint_io8_t*)0xB0E00698)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR25	(*(volatile uint_io8_t*)0xB0E00699)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR26	(*(volatile uint_io8_t*)0xB0E0069A)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR27	(*(volatile uint_io8_t*)0xB0E0069B)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR28	(*(volatile uint_io8_t*)0xB0E0069C)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR29	(*(volatile uint_io8_t*)0xB0E0069D)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR30	(*(volatile uint_io8_t*)0xB0E0069E)  /*@bfbba@*/
#define MCG_CANFD0_TXBAR_AR31	(*(volatile uint_io8_t*)0xB0E0069F)  /*@bfbba@*/

#define MCG_CANFD1_TXBAR	(MCG_CANFD1_1.unTXBAR.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBAR_AR0	(*(volatile uint_io8_t*)0xB0E80680)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR1	(*(volatile uint_io8_t*)0xB0E80681)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR2	(*(volatile uint_io8_t*)0xB0E80682)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR3	(*(volatile uint_io8_t*)0xB0E80683)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR4	(*(volatile uint_io8_t*)0xB0E80684)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR5	(*(volatile uint_io8_t*)0xB0E80685)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR6	(*(volatile uint_io8_t*)0xB0E80686)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR7	(*(volatile uint_io8_t*)0xB0E80687)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR8	(*(volatile uint_io8_t*)0xB0E80688)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR9	(*(volatile uint_io8_t*)0xB0E80689)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR10	(*(volatile uint_io8_t*)0xB0E8068A)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR11	(*(volatile uint_io8_t*)0xB0E8068B)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR12	(*(volatile uint_io8_t*)0xB0E8068C)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR13	(*(volatile uint_io8_t*)0xB0E8068D)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR14	(*(volatile uint_io8_t*)0xB0E8068E)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR15	(*(volatile uint_io8_t*)0xB0E8068F)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR16	(*(volatile uint_io8_t*)0xB0E80690)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR17	(*(volatile uint_io8_t*)0xB0E80691)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR18	(*(volatile uint_io8_t*)0xB0E80692)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR19	(*(volatile uint_io8_t*)0xB0E80693)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR20	(*(volatile uint_io8_t*)0xB0E80694)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR21	(*(volatile uint_io8_t*)0xB0E80695)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR22	(*(volatile uint_io8_t*)0xB0E80696)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR23	(*(volatile uint_io8_t*)0xB0E80697)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR24	(*(volatile uint_io8_t*)0xB0E80698)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR25	(*(volatile uint_io8_t*)0xB0E80699)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR26	(*(volatile uint_io8_t*)0xB0E8069A)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR27	(*(volatile uint_io8_t*)0xB0E8069B)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR28	(*(volatile uint_io8_t*)0xB0E8069C)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR29	(*(volatile uint_io8_t*)0xB0E8069D)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR30	(*(volatile uint_io8_t*)0xB0E8069E)  /*@bfbba@*/
#define MCG_CANFD1_TXBAR_AR31	(*(volatile uint_io8_t*)0xB0E8069F)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbar_field{
    uint_io32_t		u1AR0:1;
    uint_io32_t		u1AR1:1;
    uint_io32_t		u1AR2:1;
    uint_io32_t		u1AR3:1;
    uint_io32_t		u1AR4:1;
    uint_io32_t		u1AR5:1;
    uint_io32_t		u1AR6:1;
    uint_io32_t		u1AR7:1;
    uint_io32_t		u1AR8:1;
    uint_io32_t		u1AR9:1;
    uint_io32_t		u1AR10:1;
    uint_io32_t		u1AR11:1;
    uint_io32_t		u1AR12:1;
    uint_io32_t		u1AR13:1;
    uint_io32_t		u1AR14:1;
    uint_io32_t		u1AR15:1;
    uint_io32_t		u1AR16:1;
    uint_io32_t		u1AR17:1;
    uint_io32_t		u1AR18:1;
    uint_io32_t		u1AR19:1;
    uint_io32_t		u1AR20:1;
    uint_io32_t		u1AR21:1;
    uint_io32_t		u1AR22:1;
    uint_io32_t		u1AR23:1;
    uint_io32_t		u1AR24:1;
    uint_io32_t		u1AR25:1;
    uint_io32_t		u1AR26:1;
    uint_io32_t		u1AR27:1;
    uint_io32_t		u1AR28:1;
    uint_io32_t		u1AR29:1;
    uint_io32_t		u1AR30:1;
    uint_io32_t		u1AR31:1;
}stc_mcg_canfdn_1_txbar_field_t;

typedef union un_mcg_canfdn_1_txbar{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbar_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbar_t;

/* TXBCR */
#define MCG_CANFD0_TXBCR	(MCG_CANFD0_1.unTXBCR.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBCR_CR0	(*(volatile uint_io8_t*)0xB0E006A0)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR1	(*(volatile uint_io8_t*)0xB0E006A1)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR2	(*(volatile uint_io8_t*)0xB0E006A2)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR3	(*(volatile uint_io8_t*)0xB0E006A3)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR4	(*(volatile uint_io8_t*)0xB0E006A4)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR5	(*(volatile uint_io8_t*)0xB0E006A5)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR6	(*(volatile uint_io8_t*)0xB0E006A6)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR7	(*(volatile uint_io8_t*)0xB0E006A7)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR8	(*(volatile uint_io8_t*)0xB0E006A8)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR9	(*(volatile uint_io8_t*)0xB0E006A9)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR10	(*(volatile uint_io8_t*)0xB0E006AA)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR11	(*(volatile uint_io8_t*)0xB0E006AB)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR12	(*(volatile uint_io8_t*)0xB0E006AC)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR13	(*(volatile uint_io8_t*)0xB0E006AD)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR14	(*(volatile uint_io8_t*)0xB0E006AE)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR15	(*(volatile uint_io8_t*)0xB0E006AF)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR16	(*(volatile uint_io8_t*)0xB0E006B0)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR17	(*(volatile uint_io8_t*)0xB0E006B1)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR18	(*(volatile uint_io8_t*)0xB0E006B2)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR19	(*(volatile uint_io8_t*)0xB0E006B3)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR20	(*(volatile uint_io8_t*)0xB0E006B4)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR21	(*(volatile uint_io8_t*)0xB0E006B5)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR22	(*(volatile uint_io8_t*)0xB0E006B6)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR23	(*(volatile uint_io8_t*)0xB0E006B7)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR24	(*(volatile uint_io8_t*)0xB0E006B8)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR25	(*(volatile uint_io8_t*)0xB0E006B9)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR26	(*(volatile uint_io8_t*)0xB0E006BA)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR27	(*(volatile uint_io8_t*)0xB0E006BB)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR28	(*(volatile uint_io8_t*)0xB0E006BC)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR29	(*(volatile uint_io8_t*)0xB0E006BD)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR30	(*(volatile uint_io8_t*)0xB0E006BE)  /*@bfbba@*/
#define MCG_CANFD0_TXBCR_CR31	(*(volatile uint_io8_t*)0xB0E006BF)  /*@bfbba@*/

#define MCG_CANFD1_TXBCR	(MCG_CANFD1_1.unTXBCR.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBCR_CR0	(*(volatile uint_io8_t*)0xB0E806A0)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR1	(*(volatile uint_io8_t*)0xB0E806A1)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR2	(*(volatile uint_io8_t*)0xB0E806A2)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR3	(*(volatile uint_io8_t*)0xB0E806A3)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR4	(*(volatile uint_io8_t*)0xB0E806A4)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR5	(*(volatile uint_io8_t*)0xB0E806A5)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR6	(*(volatile uint_io8_t*)0xB0E806A6)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR7	(*(volatile uint_io8_t*)0xB0E806A7)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR8	(*(volatile uint_io8_t*)0xB0E806A8)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR9	(*(volatile uint_io8_t*)0xB0E806A9)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR10	(*(volatile uint_io8_t*)0xB0E806AA)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR11	(*(volatile uint_io8_t*)0xB0E806AB)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR12	(*(volatile uint_io8_t*)0xB0E806AC)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR13	(*(volatile uint_io8_t*)0xB0E806AD)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR14	(*(volatile uint_io8_t*)0xB0E806AE)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR15	(*(volatile uint_io8_t*)0xB0E806AF)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR16	(*(volatile uint_io8_t*)0xB0E806B0)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR17	(*(volatile uint_io8_t*)0xB0E806B1)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR18	(*(volatile uint_io8_t*)0xB0E806B2)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR19	(*(volatile uint_io8_t*)0xB0E806B3)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR20	(*(volatile uint_io8_t*)0xB0E806B4)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR21	(*(volatile uint_io8_t*)0xB0E806B5)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR22	(*(volatile uint_io8_t*)0xB0E806B6)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR23	(*(volatile uint_io8_t*)0xB0E806B7)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR24	(*(volatile uint_io8_t*)0xB0E806B8)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR25	(*(volatile uint_io8_t*)0xB0E806B9)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR26	(*(volatile uint_io8_t*)0xB0E806BA)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR27	(*(volatile uint_io8_t*)0xB0E806BB)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR28	(*(volatile uint_io8_t*)0xB0E806BC)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR29	(*(volatile uint_io8_t*)0xB0E806BD)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR30	(*(volatile uint_io8_t*)0xB0E806BE)  /*@bfbba@*/
#define MCG_CANFD1_TXBCR_CR31	(*(volatile uint_io8_t*)0xB0E806BF)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbcr_field{
    uint_io32_t		u1CR0:1;
    uint_io32_t		u1CR1:1;
    uint_io32_t		u1CR2:1;
    uint_io32_t		u1CR3:1;
    uint_io32_t		u1CR4:1;
    uint_io32_t		u1CR5:1;
    uint_io32_t		u1CR6:1;
    uint_io32_t		u1CR7:1;
    uint_io32_t		u1CR8:1;
    uint_io32_t		u1CR9:1;
    uint_io32_t		u1CR10:1;
    uint_io32_t		u1CR11:1;
    uint_io32_t		u1CR12:1;
    uint_io32_t		u1CR13:1;
    uint_io32_t		u1CR14:1;
    uint_io32_t		u1CR15:1;
    uint_io32_t		u1CR16:1;
    uint_io32_t		u1CR17:1;
    uint_io32_t		u1CR18:1;
    uint_io32_t		u1CR19:1;
    uint_io32_t		u1CR20:1;
    uint_io32_t		u1CR21:1;
    uint_io32_t		u1CR22:1;
    uint_io32_t		u1CR23:1;
    uint_io32_t		u1CR24:1;
    uint_io32_t		u1CR25:1;
    uint_io32_t		u1CR26:1;
    uint_io32_t		u1CR27:1;
    uint_io32_t		u1CR28:1;
    uint_io32_t		u1CR29:1;
    uint_io32_t		u1CR30:1;
    uint_io32_t		u1CR31:1;
}stc_mcg_canfdn_1_txbcr_field_t;

typedef union un_mcg_canfdn_1_txbcr{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbcr_t;

/* TXBTO */
#define MCG_CANFD0_TXBTO	(MCG_CANFD0_1.unTXBTO.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBTO_TO0	(*(volatile uint_io8_t*)0xB0E006C0)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO1	(*(volatile uint_io8_t*)0xB0E006C1)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO2	(*(volatile uint_io8_t*)0xB0E006C2)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO3	(*(volatile uint_io8_t*)0xB0E006C3)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO4	(*(volatile uint_io8_t*)0xB0E006C4)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO5	(*(volatile uint_io8_t*)0xB0E006C5)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO6	(*(volatile uint_io8_t*)0xB0E006C6)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO7	(*(volatile uint_io8_t*)0xB0E006C7)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO8	(*(volatile uint_io8_t*)0xB0E006C8)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO9	(*(volatile uint_io8_t*)0xB0E006C9)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO10	(*(volatile uint_io8_t*)0xB0E006CA)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO11	(*(volatile uint_io8_t*)0xB0E006CB)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO12	(*(volatile uint_io8_t*)0xB0E006CC)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO13	(*(volatile uint_io8_t*)0xB0E006CD)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO14	(*(volatile uint_io8_t*)0xB0E006CE)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO15	(*(volatile uint_io8_t*)0xB0E006CF)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO16	(*(volatile uint_io8_t*)0xB0E006D0)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO17	(*(volatile uint_io8_t*)0xB0E006D1)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO18	(*(volatile uint_io8_t*)0xB0E006D2)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO19	(*(volatile uint_io8_t*)0xB0E006D3)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO20	(*(volatile uint_io8_t*)0xB0E006D4)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO21	(*(volatile uint_io8_t*)0xB0E006D5)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO22	(*(volatile uint_io8_t*)0xB0E006D6)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO23	(*(volatile uint_io8_t*)0xB0E006D7)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO24	(*(volatile uint_io8_t*)0xB0E006D8)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO25	(*(volatile uint_io8_t*)0xB0E006D9)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO26	(*(volatile uint_io8_t*)0xB0E006DA)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO27	(*(volatile uint_io8_t*)0xB0E006DB)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO28	(*(volatile uint_io8_t*)0xB0E006DC)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO29	(*(volatile uint_io8_t*)0xB0E006DD)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO30	(*(volatile uint_io8_t*)0xB0E006DE)  /*@bfbba@*/
#define MCG_CANFD0_TXBTO_TO31	(*(volatile uint_io8_t*)0xB0E006DF)  /*@bfbba@*/

#define MCG_CANFD1_TXBTO	(MCG_CANFD1_1.unTXBTO.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBTO_TO0	(*(volatile uint_io8_t*)0xB0E806C0)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO1	(*(volatile uint_io8_t*)0xB0E806C1)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO2	(*(volatile uint_io8_t*)0xB0E806C2)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO3	(*(volatile uint_io8_t*)0xB0E806C3)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO4	(*(volatile uint_io8_t*)0xB0E806C4)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO5	(*(volatile uint_io8_t*)0xB0E806C5)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO6	(*(volatile uint_io8_t*)0xB0E806C6)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO7	(*(volatile uint_io8_t*)0xB0E806C7)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO8	(*(volatile uint_io8_t*)0xB0E806C8)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO9	(*(volatile uint_io8_t*)0xB0E806C9)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO10	(*(volatile uint_io8_t*)0xB0E806CA)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO11	(*(volatile uint_io8_t*)0xB0E806CB)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO12	(*(volatile uint_io8_t*)0xB0E806CC)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO13	(*(volatile uint_io8_t*)0xB0E806CD)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO14	(*(volatile uint_io8_t*)0xB0E806CE)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO15	(*(volatile uint_io8_t*)0xB0E806CF)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO16	(*(volatile uint_io8_t*)0xB0E806D0)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO17	(*(volatile uint_io8_t*)0xB0E806D1)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO18	(*(volatile uint_io8_t*)0xB0E806D2)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO19	(*(volatile uint_io8_t*)0xB0E806D3)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO20	(*(volatile uint_io8_t*)0xB0E806D4)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO21	(*(volatile uint_io8_t*)0xB0E806D5)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO22	(*(volatile uint_io8_t*)0xB0E806D6)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO23	(*(volatile uint_io8_t*)0xB0E806D7)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO24	(*(volatile uint_io8_t*)0xB0E806D8)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO25	(*(volatile uint_io8_t*)0xB0E806D9)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO26	(*(volatile uint_io8_t*)0xB0E806DA)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO27	(*(volatile uint_io8_t*)0xB0E806DB)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO28	(*(volatile uint_io8_t*)0xB0E806DC)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO29	(*(volatile uint_io8_t*)0xB0E806DD)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO30	(*(volatile uint_io8_t*)0xB0E806DE)  /*@bfbba@*/
#define MCG_CANFD1_TXBTO_TO31	(*(volatile uint_io8_t*)0xB0E806DF)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbto_field{
    uint_io32_t		u1TO0:1;
    uint_io32_t		u1TO1:1;
    uint_io32_t		u1TO2:1;
    uint_io32_t		u1TO3:1;
    uint_io32_t		u1TO4:1;
    uint_io32_t		u1TO5:1;
    uint_io32_t		u1TO6:1;
    uint_io32_t		u1TO7:1;
    uint_io32_t		u1TO8:1;
    uint_io32_t		u1TO9:1;
    uint_io32_t		u1TO10:1;
    uint_io32_t		u1TO11:1;
    uint_io32_t		u1TO12:1;
    uint_io32_t		u1TO13:1;
    uint_io32_t		u1TO14:1;
    uint_io32_t		u1TO15:1;
    uint_io32_t		u1TO16:1;
    uint_io32_t		u1TO17:1;
    uint_io32_t		u1TO18:1;
    uint_io32_t		u1TO19:1;
    uint_io32_t		u1TO20:1;
    uint_io32_t		u1TO21:1;
    uint_io32_t		u1TO22:1;
    uint_io32_t		u1TO23:1;
    uint_io32_t		u1TO24:1;
    uint_io32_t		u1TO25:1;
    uint_io32_t		u1TO26:1;
    uint_io32_t		u1TO27:1;
    uint_io32_t		u1TO28:1;
    uint_io32_t		u1TO29:1;
    uint_io32_t		u1TO30:1;
    uint_io32_t		u1TO31:1;
}stc_mcg_canfdn_1_txbto_field_t;

typedef union un_mcg_canfdn_1_txbto{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbto_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbto_t;

/* TXBCF */
#define MCG_CANFD0_TXBCF	(MCG_CANFD0_1.unTXBCF.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBCF_CF0	(*(volatile uint_io8_t*)0xB0E006E0)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF1	(*(volatile uint_io8_t*)0xB0E006E1)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF2	(*(volatile uint_io8_t*)0xB0E006E2)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF3	(*(volatile uint_io8_t*)0xB0E006E3)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF4	(*(volatile uint_io8_t*)0xB0E006E4)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF5	(*(volatile uint_io8_t*)0xB0E006E5)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF6	(*(volatile uint_io8_t*)0xB0E006E6)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF7	(*(volatile uint_io8_t*)0xB0E006E7)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF8	(*(volatile uint_io8_t*)0xB0E006E8)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF9	(*(volatile uint_io8_t*)0xB0E006E9)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF10	(*(volatile uint_io8_t*)0xB0E006EA)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF11	(*(volatile uint_io8_t*)0xB0E006EB)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF12	(*(volatile uint_io8_t*)0xB0E006EC)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF13	(*(volatile uint_io8_t*)0xB0E006ED)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF14	(*(volatile uint_io8_t*)0xB0E006EE)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF15	(*(volatile uint_io8_t*)0xB0E006EF)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF16	(*(volatile uint_io8_t*)0xB0E006F0)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF17	(*(volatile uint_io8_t*)0xB0E006F1)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF18	(*(volatile uint_io8_t*)0xB0E006F2)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF19	(*(volatile uint_io8_t*)0xB0E006F3)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF20	(*(volatile uint_io8_t*)0xB0E006F4)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF21	(*(volatile uint_io8_t*)0xB0E006F5)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF22	(*(volatile uint_io8_t*)0xB0E006F6)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF23	(*(volatile uint_io8_t*)0xB0E006F7)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF24	(*(volatile uint_io8_t*)0xB0E006F8)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF25	(*(volatile uint_io8_t*)0xB0E006F9)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF26	(*(volatile uint_io8_t*)0xB0E006FA)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF27	(*(volatile uint_io8_t*)0xB0E006FB)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF28	(*(volatile uint_io8_t*)0xB0E006FC)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF29	(*(volatile uint_io8_t*)0xB0E006FD)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF30	(*(volatile uint_io8_t*)0xB0E006FE)  /*@bfbba@*/
#define MCG_CANFD0_TXBCF_CF31	(*(volatile uint_io8_t*)0xB0E006FF)  /*@bfbba@*/

#define MCG_CANFD1_TXBCF	(MCG_CANFD1_1.unTXBCF.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBCF_CF0	(*(volatile uint_io8_t*)0xB0E806E0)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF1	(*(volatile uint_io8_t*)0xB0E806E1)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF2	(*(volatile uint_io8_t*)0xB0E806E2)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF3	(*(volatile uint_io8_t*)0xB0E806E3)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF4	(*(volatile uint_io8_t*)0xB0E806E4)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF5	(*(volatile uint_io8_t*)0xB0E806E5)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF6	(*(volatile uint_io8_t*)0xB0E806E6)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF7	(*(volatile uint_io8_t*)0xB0E806E7)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF8	(*(volatile uint_io8_t*)0xB0E806E8)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF9	(*(volatile uint_io8_t*)0xB0E806E9)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF10	(*(volatile uint_io8_t*)0xB0E806EA)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF11	(*(volatile uint_io8_t*)0xB0E806EB)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF12	(*(volatile uint_io8_t*)0xB0E806EC)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF13	(*(volatile uint_io8_t*)0xB0E806ED)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF14	(*(volatile uint_io8_t*)0xB0E806EE)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF15	(*(volatile uint_io8_t*)0xB0E806EF)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF16	(*(volatile uint_io8_t*)0xB0E806F0)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF17	(*(volatile uint_io8_t*)0xB0E806F1)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF18	(*(volatile uint_io8_t*)0xB0E806F2)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF19	(*(volatile uint_io8_t*)0xB0E806F3)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF20	(*(volatile uint_io8_t*)0xB0E806F4)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF21	(*(volatile uint_io8_t*)0xB0E806F5)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF22	(*(volatile uint_io8_t*)0xB0E806F6)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF23	(*(volatile uint_io8_t*)0xB0E806F7)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF24	(*(volatile uint_io8_t*)0xB0E806F8)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF25	(*(volatile uint_io8_t*)0xB0E806F9)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF26	(*(volatile uint_io8_t*)0xB0E806FA)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF27	(*(volatile uint_io8_t*)0xB0E806FB)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF28	(*(volatile uint_io8_t*)0xB0E806FC)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF29	(*(volatile uint_io8_t*)0xB0E806FD)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF30	(*(volatile uint_io8_t*)0xB0E806FE)  /*@bfbba@*/
#define MCG_CANFD1_TXBCF_CF31	(*(volatile uint_io8_t*)0xB0E806FF)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbcf_field{
    uint_io32_t		u1CF0:1;
    uint_io32_t		u1CF1:1;
    uint_io32_t		u1CF2:1;
    uint_io32_t		u1CF3:1;
    uint_io32_t		u1CF4:1;
    uint_io32_t		u1CF5:1;
    uint_io32_t		u1CF6:1;
    uint_io32_t		u1CF7:1;
    uint_io32_t		u1CF8:1;
    uint_io32_t		u1CF9:1;
    uint_io32_t		u1CF10:1;
    uint_io32_t		u1CF11:1;
    uint_io32_t		u1CF12:1;
    uint_io32_t		u1CF13:1;
    uint_io32_t		u1CF14:1;
    uint_io32_t		u1CF15:1;
    uint_io32_t		u1CF16:1;
    uint_io32_t		u1CF17:1;
    uint_io32_t		u1CF18:1;
    uint_io32_t		u1CF19:1;
    uint_io32_t		u1CF20:1;
    uint_io32_t		u1CF21:1;
    uint_io32_t		u1CF22:1;
    uint_io32_t		u1CF23:1;
    uint_io32_t		u1CF24:1;
    uint_io32_t		u1CF25:1;
    uint_io32_t		u1CF26:1;
    uint_io32_t		u1CF27:1;
    uint_io32_t		u1CF28:1;
    uint_io32_t		u1CF29:1;
    uint_io32_t		u1CF30:1;
    uint_io32_t		u1CF31:1;
}stc_mcg_canfdn_1_txbcf_field_t;

typedef union un_mcg_canfdn_1_txbcf{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbcf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbcf_t;

/* TXBTIE */
#define MCG_CANFD0_TXBTIE	(MCG_CANFD0_1.unTXBTIE.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBTIE_TIE0	(*(volatile uint_io8_t*)0xB0E00700)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE1	(*(volatile uint_io8_t*)0xB0E00701)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE2	(*(volatile uint_io8_t*)0xB0E00702)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE3	(*(volatile uint_io8_t*)0xB0E00703)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE4	(*(volatile uint_io8_t*)0xB0E00704)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE5	(*(volatile uint_io8_t*)0xB0E00705)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE6	(*(volatile uint_io8_t*)0xB0E00706)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE7	(*(volatile uint_io8_t*)0xB0E00707)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE8	(*(volatile uint_io8_t*)0xB0E00708)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE9	(*(volatile uint_io8_t*)0xB0E00709)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE10	(*(volatile uint_io8_t*)0xB0E0070A)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE11	(*(volatile uint_io8_t*)0xB0E0070B)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE12	(*(volatile uint_io8_t*)0xB0E0070C)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE13	(*(volatile uint_io8_t*)0xB0E0070D)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE14	(*(volatile uint_io8_t*)0xB0E0070E)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE15	(*(volatile uint_io8_t*)0xB0E0070F)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE16	(*(volatile uint_io8_t*)0xB0E00710)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE17	(*(volatile uint_io8_t*)0xB0E00711)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE18	(*(volatile uint_io8_t*)0xB0E00712)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE19	(*(volatile uint_io8_t*)0xB0E00713)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE20	(*(volatile uint_io8_t*)0xB0E00714)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE21	(*(volatile uint_io8_t*)0xB0E00715)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE22	(*(volatile uint_io8_t*)0xB0E00716)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE23	(*(volatile uint_io8_t*)0xB0E00717)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE24	(*(volatile uint_io8_t*)0xB0E00718)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE25	(*(volatile uint_io8_t*)0xB0E00719)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE26	(*(volatile uint_io8_t*)0xB0E0071A)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE27	(*(volatile uint_io8_t*)0xB0E0071B)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE28	(*(volatile uint_io8_t*)0xB0E0071C)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE29	(*(volatile uint_io8_t*)0xB0E0071D)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE30	(*(volatile uint_io8_t*)0xB0E0071E)  /*@bfbba@*/
#define MCG_CANFD0_TXBTIE_TIE31	(*(volatile uint_io8_t*)0xB0E0071F)  /*@bfbba@*/

#define MCG_CANFD1_TXBTIE	(MCG_CANFD1_1.unTXBTIE.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBTIE_TIE0	(*(volatile uint_io8_t*)0xB0E80700)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE1	(*(volatile uint_io8_t*)0xB0E80701)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE2	(*(volatile uint_io8_t*)0xB0E80702)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE3	(*(volatile uint_io8_t*)0xB0E80703)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE4	(*(volatile uint_io8_t*)0xB0E80704)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE5	(*(volatile uint_io8_t*)0xB0E80705)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE6	(*(volatile uint_io8_t*)0xB0E80706)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE7	(*(volatile uint_io8_t*)0xB0E80707)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE8	(*(volatile uint_io8_t*)0xB0E80708)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE9	(*(volatile uint_io8_t*)0xB0E80709)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE10	(*(volatile uint_io8_t*)0xB0E8070A)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE11	(*(volatile uint_io8_t*)0xB0E8070B)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE12	(*(volatile uint_io8_t*)0xB0E8070C)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE13	(*(volatile uint_io8_t*)0xB0E8070D)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE14	(*(volatile uint_io8_t*)0xB0E8070E)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE15	(*(volatile uint_io8_t*)0xB0E8070F)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE16	(*(volatile uint_io8_t*)0xB0E80710)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE17	(*(volatile uint_io8_t*)0xB0E80711)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE18	(*(volatile uint_io8_t*)0xB0E80712)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE19	(*(volatile uint_io8_t*)0xB0E80713)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE20	(*(volatile uint_io8_t*)0xB0E80714)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE21	(*(volatile uint_io8_t*)0xB0E80715)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE22	(*(volatile uint_io8_t*)0xB0E80716)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE23	(*(volatile uint_io8_t*)0xB0E80717)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE24	(*(volatile uint_io8_t*)0xB0E80718)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE25	(*(volatile uint_io8_t*)0xB0E80719)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE26	(*(volatile uint_io8_t*)0xB0E8071A)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE27	(*(volatile uint_io8_t*)0xB0E8071B)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE28	(*(volatile uint_io8_t*)0xB0E8071C)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE29	(*(volatile uint_io8_t*)0xB0E8071D)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE30	(*(volatile uint_io8_t*)0xB0E8071E)  /*@bfbba@*/
#define MCG_CANFD1_TXBTIE_TIE31	(*(volatile uint_io8_t*)0xB0E8071F)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbtie_field{
    uint_io32_t		u1TIE0:1;
    uint_io32_t		u1TIE1:1;
    uint_io32_t		u1TIE2:1;
    uint_io32_t		u1TIE3:1;
    uint_io32_t		u1TIE4:1;
    uint_io32_t		u1TIE5:1;
    uint_io32_t		u1TIE6:1;
    uint_io32_t		u1TIE7:1;
    uint_io32_t		u1TIE8:1;
    uint_io32_t		u1TIE9:1;
    uint_io32_t		u1TIE10:1;
    uint_io32_t		u1TIE11:1;
    uint_io32_t		u1TIE12:1;
    uint_io32_t		u1TIE13:1;
    uint_io32_t		u1TIE14:1;
    uint_io32_t		u1TIE15:1;
    uint_io32_t		u1TIE16:1;
    uint_io32_t		u1TIE17:1;
    uint_io32_t		u1TIE18:1;
    uint_io32_t		u1TIE19:1;
    uint_io32_t		u1TIE20:1;
    uint_io32_t		u1TIE21:1;
    uint_io32_t		u1TIE22:1;
    uint_io32_t		u1TIE23:1;
    uint_io32_t		u1TIE24:1;
    uint_io32_t		u1TIE25:1;
    uint_io32_t		u1TIE26:1;
    uint_io32_t		u1TIE27:1;
    uint_io32_t		u1TIE28:1;
    uint_io32_t		u1TIE29:1;
    uint_io32_t		u1TIE30:1;
    uint_io32_t		u1TIE31:1;
}stc_mcg_canfdn_1_txbtie_field_t;

typedef union un_mcg_canfdn_1_txbtie{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbtie_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbtie_t;

/* TXBCIE */
#define MCG_CANFD0_TXBCIE	(MCG_CANFD0_1.unTXBCIE.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXBCIE_CFIE0	(*(volatile uint_io8_t*)0xB0E00720)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE1	(*(volatile uint_io8_t*)0xB0E00721)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE2	(*(volatile uint_io8_t*)0xB0E00722)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE3	(*(volatile uint_io8_t*)0xB0E00723)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE4	(*(volatile uint_io8_t*)0xB0E00724)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE5	(*(volatile uint_io8_t*)0xB0E00725)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE6	(*(volatile uint_io8_t*)0xB0E00726)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE7	(*(volatile uint_io8_t*)0xB0E00727)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE8	(*(volatile uint_io8_t*)0xB0E00728)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE9	(*(volatile uint_io8_t*)0xB0E00729)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE10	(*(volatile uint_io8_t*)0xB0E0072A)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE11	(*(volatile uint_io8_t*)0xB0E0072B)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE12	(*(volatile uint_io8_t*)0xB0E0072C)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE13	(*(volatile uint_io8_t*)0xB0E0072D)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE14	(*(volatile uint_io8_t*)0xB0E0072E)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE15	(*(volatile uint_io8_t*)0xB0E0072F)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE16	(*(volatile uint_io8_t*)0xB0E00730)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE17	(*(volatile uint_io8_t*)0xB0E00731)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE18	(*(volatile uint_io8_t*)0xB0E00732)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE19	(*(volatile uint_io8_t*)0xB0E00733)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE20	(*(volatile uint_io8_t*)0xB0E00734)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE21	(*(volatile uint_io8_t*)0xB0E00735)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE22	(*(volatile uint_io8_t*)0xB0E00736)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE23	(*(volatile uint_io8_t*)0xB0E00737)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE24	(*(volatile uint_io8_t*)0xB0E00738)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE25	(*(volatile uint_io8_t*)0xB0E00739)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE26	(*(volatile uint_io8_t*)0xB0E0073A)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE27	(*(volatile uint_io8_t*)0xB0E0073B)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE28	(*(volatile uint_io8_t*)0xB0E0073C)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE29	(*(volatile uint_io8_t*)0xB0E0073D)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE30	(*(volatile uint_io8_t*)0xB0E0073E)  /*@bfbba@*/
#define MCG_CANFD0_TXBCIE_CFIE31	(*(volatile uint_io8_t*)0xB0E0073F)  /*@bfbba@*/

#define MCG_CANFD1_TXBCIE	(MCG_CANFD1_1.unTXBCIE.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXBCIE_CFIE0	(*(volatile uint_io8_t*)0xB0E80720)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE1	(*(volatile uint_io8_t*)0xB0E80721)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE2	(*(volatile uint_io8_t*)0xB0E80722)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE3	(*(volatile uint_io8_t*)0xB0E80723)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE4	(*(volatile uint_io8_t*)0xB0E80724)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE5	(*(volatile uint_io8_t*)0xB0E80725)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE6	(*(volatile uint_io8_t*)0xB0E80726)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE7	(*(volatile uint_io8_t*)0xB0E80727)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE8	(*(volatile uint_io8_t*)0xB0E80728)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE9	(*(volatile uint_io8_t*)0xB0E80729)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE10	(*(volatile uint_io8_t*)0xB0E8072A)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE11	(*(volatile uint_io8_t*)0xB0E8072B)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE12	(*(volatile uint_io8_t*)0xB0E8072C)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE13	(*(volatile uint_io8_t*)0xB0E8072D)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE14	(*(volatile uint_io8_t*)0xB0E8072E)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE15	(*(volatile uint_io8_t*)0xB0E8072F)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE16	(*(volatile uint_io8_t*)0xB0E80730)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE17	(*(volatile uint_io8_t*)0xB0E80731)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE18	(*(volatile uint_io8_t*)0xB0E80732)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE19	(*(volatile uint_io8_t*)0xB0E80733)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE20	(*(volatile uint_io8_t*)0xB0E80734)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE21	(*(volatile uint_io8_t*)0xB0E80735)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE22	(*(volatile uint_io8_t*)0xB0E80736)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE23	(*(volatile uint_io8_t*)0xB0E80737)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE24	(*(volatile uint_io8_t*)0xB0E80738)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE25	(*(volatile uint_io8_t*)0xB0E80739)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE26	(*(volatile uint_io8_t*)0xB0E8073A)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE27	(*(volatile uint_io8_t*)0xB0E8073B)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE28	(*(volatile uint_io8_t*)0xB0E8073C)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE29	(*(volatile uint_io8_t*)0xB0E8073D)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE30	(*(volatile uint_io8_t*)0xB0E8073E)  /*@bfbba@*/
#define MCG_CANFD1_TXBCIE_CFIE31	(*(volatile uint_io8_t*)0xB0E8073F)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txbcie_field{
    uint_io32_t		u1CFIE0:1;
    uint_io32_t		u1CFIE1:1;
    uint_io32_t		u1CFIE2:1;
    uint_io32_t		u1CFIE3:1;
    uint_io32_t		u1CFIE4:1;
    uint_io32_t		u1CFIE5:1;
    uint_io32_t		u1CFIE6:1;
    uint_io32_t		u1CFIE7:1;
    uint_io32_t		u1CFIE8:1;
    uint_io32_t		u1CFIE9:1;
    uint_io32_t		u1CFIE10:1;
    uint_io32_t		u1CFIE11:1;
    uint_io32_t		u1CFIE12:1;
    uint_io32_t		u1CFIE13:1;
    uint_io32_t		u1CFIE14:1;
    uint_io32_t		u1CFIE15:1;
    uint_io32_t		u1CFIE16:1;
    uint_io32_t		u1CFIE17:1;
    uint_io32_t		u1CFIE18:1;
    uint_io32_t		u1CFIE19:1;
    uint_io32_t		u1CFIE20:1;
    uint_io32_t		u1CFIE21:1;
    uint_io32_t		u1CFIE22:1;
    uint_io32_t		u1CFIE23:1;
    uint_io32_t		u1CFIE24:1;
    uint_io32_t		u1CFIE25:1;
    uint_io32_t		u1CFIE26:1;
    uint_io32_t		u1CFIE27:1;
    uint_io32_t		u1CFIE28:1;
    uint_io32_t		u1CFIE29:1;
    uint_io32_t		u1CFIE30:1;
    uint_io32_t		u1CFIE31:1;
}stc_mcg_canfdn_1_txbcie_field_t;

typedef union un_mcg_canfdn_1_txbcie{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txbcie_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txbcie_t;

/* TXEFC */
#define MCG_CANFD0_TXEFC	(MCG_CANFD0_1.unTXEFC.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXEFC_EFSA	(MCG_CANFD0_1.unTXEFC.stcField.u14EFSA)  /*@bf@*/
#define MCG_CANFD0_TXEFC_EFS	(MCG_CANFD0_1.unTXEFC.stcField.u6EFS)  /*@bf@*/
#define MCG_CANFD0_TXEFC_EFWM	(MCG_CANFD0_1.unTXEFC.stcField.u6EFWM)  /*@bf@*/

#define MCG_CANFD1_TXEFC	(MCG_CANFD1_1.unTXEFC.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXEFC_EFSA	(MCG_CANFD1_1.unTXEFC.stcField.u14EFSA)  /*@bf@*/
#define MCG_CANFD1_TXEFC_EFS	(MCG_CANFD1_1.unTXEFC.stcField.u6EFS)  /*@bf@*/
#define MCG_CANFD1_TXEFC_EFWM	(MCG_CANFD1_1.unTXEFC.stcField.u6EFWM)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_txefc_field{
    uint_io32_t		:2;
    uint_io32_t		u14EFSA:14;
    uint_io32_t		u6EFS:6;
    uint_io32_t		:2;
    uint_io32_t		u6EFWM:6;
    uint_io32_t		:2;
}stc_mcg_canfdn_1_txefc_field_t;

typedef union un_mcg_canfdn_1_txefc{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txefc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txefc_t;

/* TXEFS */
#define MCG_CANFD0_TXEFS	(MCG_CANFD0_1.unTXEFS.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXEFS_EFFL	(MCG_CANFD0_1.unTXEFS.stcField.u6EFFL)  /*@bf@*/
#define MCG_CANFD0_TXEFS_EFGI	(MCG_CANFD0_1.unTXEFS.stcField.u5EFGI)  /*@bf@*/
#define MCG_CANFD0_TXEFS_EFPI	(MCG_CANFD0_1.unTXEFS.stcField.u5EFPI)  /*@bf@*/
#define MCG_CANFD0_TXEFS_EFF	(*(volatile uint_io8_t*)0xB0E007B8)  /*@bfbba@*/
#define MCG_CANFD0_TXEFS_TEFL	(*(volatile uint_io8_t*)0xB0E007B9)  /*@bfbba@*/

#define MCG_CANFD1_TXEFS	(MCG_CANFD1_1.unTXEFS.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXEFS_EFFL	(MCG_CANFD1_1.unTXEFS.stcField.u6EFFL)  /*@bf@*/
#define MCG_CANFD1_TXEFS_EFGI	(MCG_CANFD1_1.unTXEFS.stcField.u5EFGI)  /*@bf@*/
#define MCG_CANFD1_TXEFS_EFPI	(MCG_CANFD1_1.unTXEFS.stcField.u5EFPI)  /*@bf@*/
#define MCG_CANFD1_TXEFS_EFF	(*(volatile uint_io8_t*)0xB0E807B8)  /*@bfbba@*/
#define MCG_CANFD1_TXEFS_TEFL	(*(volatile uint_io8_t*)0xB0E807B9)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_txefs_field{
    uint_io32_t		u6EFFL:6;
    uint_io32_t		:2;
    uint_io32_t		u5EFGI:5;
    uint_io32_t		:3;
    uint_io32_t		u5EFPI:5;
    uint_io32_t		:3;
    uint_io32_t		u1EFF:1;
    uint_io32_t		u1TEFL:1;
    uint_io32_t		:6;
}stc_mcg_canfdn_1_txefs_field_t;

typedef union un_mcg_canfdn_1_txefs{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txefs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txefs_t;

/* TXEFA */
#define MCG_CANFD0_TXEFA	(MCG_CANFD0_1.unTXEFA.u32Register)  /*@rg@*/
#define MCG_CANFD0_TXEFA_EFAI	(MCG_CANFD0_1.unTXEFA.stcField.u5EFAI)  /*@bf@*/

#define MCG_CANFD1_TXEFA	(MCG_CANFD1_1.unTXEFA.u32Register)  /*@rg@*/
#define MCG_CANFD1_TXEFA_EFAI	(MCG_CANFD1_1.unTXEFA.stcField.u5EFAI)  /*@bf@*/

typedef struct stc_mcg_canfdn_1_txefa_field{
    uint_io32_t		u5EFAI:5;
    uint_io32_t		:27;
}stc_mcg_canfdn_1_txefa_field_t;

typedef union un_mcg_canfdn_1_txefa{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_txefa_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_txefa_t;

/* FDECR */
#define MCG_CANFD0_FDECR	(MCG_CANFD0_1.unFDECR.u8Register)  /*@rg@*/
#define MCG_CANFD0_FDECR_SEIE	(*(volatile uint_io8_t*)0xB0E01000)  /*@bfbba@*/
#define MCG_CANFD0_FDECR_DEIE	(*(volatile uint_io8_t*)0xB0E01001)  /*@bfbba@*/
#define MCG_CANFD0_FDECR_CEREN	(*(volatile uint_io8_t*)0xB0E01002)  /*@bfbba@*/
#define MCG_CANFD0_FDECR_CEIV	(*(volatile uint_io8_t*)0xB0E01003)  /*@bfbba@*/

#define MCG_CANFD1_FDECR	(MCG_CANFD1_1.unFDECR.u8Register)  /*@rg@*/
#define MCG_CANFD1_FDECR_SEIE	(*(volatile uint_io8_t*)0xB0E81000)  /*@bfbba@*/
#define MCG_CANFD1_FDECR_DEIE	(*(volatile uint_io8_t*)0xB0E81001)  /*@bfbba@*/
#define MCG_CANFD1_FDECR_CEREN	(*(volatile uint_io8_t*)0xB0E81002)  /*@bfbba@*/
#define MCG_CANFD1_FDECR_CEIV	(*(volatile uint_io8_t*)0xB0E81003)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_fdecr_field{
    uint_io8_t		u1SEIE:1;
    uint_io8_t		u1DEIE:1;
    uint_io8_t		u1CEREN:1;
    uint_io8_t		u1CEIV:1;
    uint_io8_t		:4;
}stc_mcg_canfdn_1_fdecr_field_t;

typedef union un_mcg_canfdn_1_fdecr{
    uint_io8_t		u8Register;
    stc_mcg_canfdn_1_fdecr_field_t		stcField;
}un_mcg_canfdn_1_fdecr_t;

/* FDESR */
#define MCG_CANFD0_FDESR	(MCG_CANFD0_1.unFDESR.u8Register)  /*@rg@*/
#define MCG_CANFD0_FDESR_SEI	(*(volatile uint_io8_t*)0xB0E01008)  /*@bfbba@*/
#define MCG_CANFD0_FDESR_DEI	(*(volatile uint_io8_t*)0xB0E01009)  /*@bfbba@*/

#define MCG_CANFD1_FDESR	(MCG_CANFD1_1.unFDESR.u8Register)  /*@rg@*/
#define MCG_CANFD1_FDESR_SEI	(*(volatile uint_io8_t*)0xB0E81008)  /*@bfbba@*/
#define MCG_CANFD1_FDESR_DEI	(*(volatile uint_io8_t*)0xB0E81009)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_fdesr_field{
    uint_io8_t		u1SEI:1;
    uint_io8_t		u1DEI:1;
    uint_io8_t		:6;
}stc_mcg_canfdn_1_fdesr_field_t;

typedef union un_mcg_canfdn_1_fdesr{
    uint_io8_t		u8Register;
    stc_mcg_canfdn_1_fdesr_field_t		stcField;
}un_mcg_canfdn_1_fdesr_t;

/* FDSEAR */
#define MCG_CANFD0_FDSEAR	(MCG_CANFD0_1.unFDSEAR.u16Register)  /*@rg@*/
#define MCG_CANFD0_FDSEAR_SRA	MCG_CANFD0_FDSEAR  /*@bfrg@*/

#define MCG_CANFD1_FDSEAR	(MCG_CANFD1_1.unFDSEAR.u16Register)  /*@rg@*/
#define MCG_CANFD1_FDSEAR_SRA	MCG_CANFD1_FDSEAR  /*@bfrg@*/

typedef union un_mcg_canfdn_1_fdsear{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_canfdn_1_fdsear_t;

/* FDESCR */
#define MCG_CANFD0_FDESCR	(MCG_CANFD0_1.unFDESCR.u8Register)  /*@rg@*/
#define MCG_CANFD0_FDESCR_SEIC	(*(volatile uint_io8_t*)0xB0E01028)  /*@bfbba@*/
#define MCG_CANFD0_FDESCR_DEIC	(*(volatile uint_io8_t*)0xB0E01029)  /*@bfbba@*/

#define MCG_CANFD1_FDESCR	(MCG_CANFD1_1.unFDESCR.u8Register)  /*@rg@*/
#define MCG_CANFD1_FDESCR_SEIC	(*(volatile uint_io8_t*)0xB0E81028)  /*@bfbba@*/
#define MCG_CANFD1_FDESCR_DEIC	(*(volatile uint_io8_t*)0xB0E81029)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_fdescr_field{
    uint_io8_t		u1SEIC:1;
    uint_io8_t		u1DEIC:1;
    uint_io8_t		:6;
}stc_mcg_canfdn_1_fdescr_field_t;

typedef union un_mcg_canfdn_1_fdescr{
    uint_io8_t		u8Register;
    stc_mcg_canfdn_1_fdescr_field_t		stcField;
}un_mcg_canfdn_1_fdescr_t;

/* FDDEAR */
#define MCG_CANFD0_FDDEAR	(MCG_CANFD0_1.unFDDEAR.u16Register)  /*@rg@*/
#define MCG_CANFD0_FDDEAR_DRA	MCG_CANFD0_FDDEAR  /*@bfrg@*/

#define MCG_CANFD1_FDDEAR	(MCG_CANFD1_1.unFDDEAR.u16Register)  /*@rg@*/
#define MCG_CANFD1_FDDEAR_DRA	MCG_CANFD1_FDDEAR  /*@bfrg@*/

typedef union un_mcg_canfdn_1_fddear{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_canfdn_1_fddear_t;

/* FDFECR */
#define MCG_CANFD0_FDFECR	(MCG_CANFD0_1.unFDFECR.u32Register)  /*@rg@*/
#define MCG_CANFD0_FDFECR_EI0	(*(volatile uint_io8_t*)0xB0E01040)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI1	(*(volatile uint_io8_t*)0xB0E01041)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI2	(*(volatile uint_io8_t*)0xB0E01042)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI3	(*(volatile uint_io8_t*)0xB0E01043)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI4	(*(volatile uint_io8_t*)0xB0E01044)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI5	(*(volatile uint_io8_t*)0xB0E01045)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI6	(*(volatile uint_io8_t*)0xB0E01046)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI7	(*(volatile uint_io8_t*)0xB0E01047)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI8	(*(volatile uint_io8_t*)0xB0E01048)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI9	(*(volatile uint_io8_t*)0xB0E01049)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI10	(*(volatile uint_io8_t*)0xB0E0104A)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI11	(*(volatile uint_io8_t*)0xB0E0104B)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI12	(*(volatile uint_io8_t*)0xB0E0104C)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI13	(*(volatile uint_io8_t*)0xB0E0104D)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI14	(*(volatile uint_io8_t*)0xB0E0104E)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EI15	(*(volatile uint_io8_t*)0xB0E0104F)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EY0	(*(volatile uint_io8_t*)0xB0E01050)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EY1	(*(volatile uint_io8_t*)0xB0E01051)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_EY2	(*(volatile uint_io8_t*)0xB0E01052)  /*@bfbba@*/
#define MCG_CANFD0_FDFECR_FERR	(*(volatile uint_io8_t*)0xB0E0105F)  /*@bfbba@*/

#define MCG_CANFD1_FDFECR	(MCG_CANFD1_1.unFDFECR.u32Register)  /*@rg@*/
#define MCG_CANFD1_FDFECR_EI0	(*(volatile uint_io8_t*)0xB0E81040)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI1	(*(volatile uint_io8_t*)0xB0E81041)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI2	(*(volatile uint_io8_t*)0xB0E81042)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI3	(*(volatile uint_io8_t*)0xB0E81043)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI4	(*(volatile uint_io8_t*)0xB0E81044)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI5	(*(volatile uint_io8_t*)0xB0E81045)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI6	(*(volatile uint_io8_t*)0xB0E81046)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI7	(*(volatile uint_io8_t*)0xB0E81047)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI8	(*(volatile uint_io8_t*)0xB0E81048)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI9	(*(volatile uint_io8_t*)0xB0E81049)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI10	(*(volatile uint_io8_t*)0xB0E8104A)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI11	(*(volatile uint_io8_t*)0xB0E8104B)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI12	(*(volatile uint_io8_t*)0xB0E8104C)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI13	(*(volatile uint_io8_t*)0xB0E8104D)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI14	(*(volatile uint_io8_t*)0xB0E8104E)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EI15	(*(volatile uint_io8_t*)0xB0E8104F)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EY0	(*(volatile uint_io8_t*)0xB0E81050)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EY1	(*(volatile uint_io8_t*)0xB0E81051)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_EY2	(*(volatile uint_io8_t*)0xB0E81052)  /*@bfbba@*/
#define MCG_CANFD1_FDFECR_FERR	(*(volatile uint_io8_t*)0xB0E8105F)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_fdfecr_field{
    uint_io32_t		u1EI0:1;
    uint_io32_t		u1EI1:1;
    uint_io32_t		u1EI2:1;
    uint_io32_t		u1EI3:1;
    uint_io32_t		u1EI4:1;
    uint_io32_t		u1EI5:1;
    uint_io32_t		u1EI6:1;
    uint_io32_t		u1EI7:1;
    uint_io32_t		u1EI8:1;
    uint_io32_t		u1EI9:1;
    uint_io32_t		u1EI10:1;
    uint_io32_t		u1EI11:1;
    uint_io32_t		u1EI12:1;
    uint_io32_t		u1EI13:1;
    uint_io32_t		u1EI14:1;
    uint_io32_t		u1EI15:1;
    uint_io32_t		u1EY0:1;
    uint_io32_t		u1EY1:1;
    uint_io32_t		u1EY2:1;
    uint_io32_t		:12;
    uint_io32_t		u1FERR:1;
}stc_mcg_canfdn_1_fdfecr_field_t;

typedef union un_mcg_canfdn_1_fdfecr{
    uint_io32_t		u32Register;
    stc_mcg_canfdn_1_fdfecr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_canfdn_1_fdfecr_t;

/* TSCNTR */
#define MCG_CANFD0_TSCNTR	(MCG_CANFD0_1.unTSCNTR.u16Register)  /*@rg@*/
#define MCG_CANFD0_TSCNTR_CCLR	(*(volatile uint_io8_t*)0xB0E01800)  /*@bfbba@*/

#define MCG_CANFD1_TSCNTR	(MCG_CANFD1_1.unTSCNTR.u16Register)  /*@rg@*/
#define MCG_CANFD1_TSCNTR_CCLR	(*(volatile uint_io8_t*)0xB0E81800)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_tscntr_field{
    uint_io16_t		u1CCLR:1;
    uint_io16_t		:15;
}stc_mcg_canfdn_1_tscntr_field_t;

typedef union un_mcg_canfdn_1_tscntr{
    uint_io16_t		u16Register;
    stc_mcg_canfdn_1_tscntr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_canfdn_1_tscntr_t;

/* TSMDR */
#define MCG_CANFD0_TSMDR	(MCG_CANFD0_1.unTSMDR.u16Register)  /*@rg@*/
#define MCG_CANFD0_TSMDR_CNTEN	(*(volatile uint_io8_t*)0xB0E01810)  /*@bfbba@*/

#define MCG_CANFD1_TSMDR	(MCG_CANFD1_1.unTSMDR.u16Register)  /*@rg@*/
#define MCG_CANFD1_TSMDR_CNTEN	(*(volatile uint_io8_t*)0xB0E81810)  /*@bfbba@*/

typedef struct stc_mcg_canfdn_1_tsmdr_field{
    uint_io16_t		u1CNTEN:1;
    uint_io16_t		:15;
}stc_mcg_canfdn_1_tsmdr_field_t;

typedef union un_mcg_canfdn_1_tsmdr{
    uint_io16_t		u16Register;
    stc_mcg_canfdn_1_tsmdr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_canfdn_1_tsmdr_t;

/* TSDIVR_L */
#define MCG_CANFD0_TSDIVR_L	(MCG_CANFD0_1.unTSDIVR_L.u16Register)  /*@rg@*/
#define MCG_CANFD0_TSDIVR_L_CDIV	MCG_CANFD0_TSDIVR_L  /*@bfrg@*/

#define MCG_CANFD1_TSDIVR_L	(MCG_CANFD1_1.unTSDIVR_L.u16Register)  /*@rg@*/
#define MCG_CANFD1_TSDIVR_L_CDIV	MCG_CANFD1_TSDIVR_L  /*@bfrg@*/

typedef union un_mcg_canfdn_1_tsdivr_l{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_canfdn_1_tsdivr_l_t;

/* TSCDTR */
#define MCG_CANFD0_TSCDTR	(MCG_CANFD0_1.unTSCDTR.u16Register)  /*@rg@*/
#define MCG_CANFD0_TSCDTR_CNT	MCG_CANFD0_TSCDTR  /*@bfrg@*/

#define MCG_CANFD1_TSCDTR	(MCG_CANFD1_1.unTSCDTR.u16Register)  /*@rg@*/
#define MCG_CANFD1_TSCDTR_CNT	MCG_CANFD1_TSCDTR  /*@bfrg@*/

typedef union un_mcg_canfdn_1_tscdtr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_canfdn_1_tscdtr_t;

/* TSCPCLR */
#define MCG_CANFD0_TSCPCLR	(MCG_CANFD0_1.unTSCPCLR.u16Register)  /*@rg@*/
#define MCG_CANFD0_TSCPCLR_CMP	MCG_CANFD0_TSCPCLR  /*@bfrg@*/

#define MCG_CANFD1_TSCPCLR	(MCG_CANFD1_1.unTSCPCLR.u16Register)  /*@rg@*/
#define MCG_CANFD1_TSCPCLR_CMP	MCG_CANFD1_TSCPCLR  /*@bfrg@*/

typedef union un_mcg_canfdn_1_tscpclr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_canfdn_1_tscpclr_t;


typedef struct stc_mcg_canfdn_1{
    un_mcg_canfdn_1_crel_t	unCREL;	/* 0x00000000 */
    un_mcg_canfdn_1_endn_t	unENDN;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000008 */
    un_mcg_canfdn_1_dbtp_t	unDBTP;	/* 0x0000000C */
    un_mcg_canfdn_1_test_t	unTEST;	/* 0x00000010 */
    un_mcg_canfdn_1_rwd_t	unRWD;	/* 0x00000014 */
    un_mcg_canfdn_1_cccr_t	unCCCR;	/* 0x00000018 */
    un_mcg_canfdn_1_nbtp_t	unNBTP;	/* 0x0000001C */
    un_mcg_canfdn_1_tscc_t	unTSCC;	/* 0x00000020 */
    un_mcg_canfdn_1_tscv_t	unTSCV;	/* 0x00000024 */
    un_mcg_canfdn_1_tocc_t	unTOCC;	/* 0x00000028 */
    un_mcg_canfdn_1_tocv_t	unTOCV;	/* 0x0000002C */
    uint_io8_t	au8Reserved1[16];	/* 0x00000030 */
    un_mcg_canfdn_1_ecr_t	unECR;	/* 0x00000040 */
    un_mcg_canfdn_1_psr_t	unPSR;	/* 0x00000044 */
    un_mcg_canfdn_1_tdcr_t	unTDCR;	/* 0x00000048 */
    uint_io8_t	au8Reserved2[4];	/* 0x0000004C */
    un_mcg_canfdn_1_ir_t	unIR;	/* 0x00000050 */
    un_mcg_canfdn_1_ie_t	unIE;	/* 0x00000054 */
    un_mcg_canfdn_1_ils_t	unILS;	/* 0x00000058 */
    un_mcg_canfdn_1_ile_t	unILE;	/* 0x0000005C */
    uint_io8_t	au8Reserved3[32];	/* 0x00000060 */
    un_mcg_canfdn_1_gfc_t	unGFC;	/* 0x00000080 */
    un_mcg_canfdn_1_sidfc_t	unSIDFC;	/* 0x00000084 */
    un_mcg_canfdn_1_xidfc_t	unXIDFC;	/* 0x00000088 */
    uint_io8_t	au8Reserved4[4];	/* 0x0000008C */
    un_mcg_canfdn_1_xidam_t	unXIDAM;	/* 0x00000090 */
    un_mcg_canfdn_1_hpms_t	unHPMS;	/* 0x00000094 */
    un_mcg_canfdn_1_ndat1_t	unNDAT1;	/* 0x00000098 */
    un_mcg_canfdn_1_ndat2_t	unNDAT2;	/* 0x0000009C */
    un_mcg_canfdn_1_rxf0c_t	unRXF0C;	/* 0x000000A0 */
    un_mcg_canfdn_1_rxf0s_t	unRXF0S;	/* 0x000000A4 */
    un_mcg_canfdn_1_rxf0a_t	unRXF0A;	/* 0x000000A8 */
    un_mcg_canfdn_1_rxbc_t	unRXBC;	/* 0x000000AC */
    un_mcg_canfdn_1_rxf1c_t	unRXF1C;	/* 0x000000B0 */
    un_mcg_canfdn_1_rxf1s_t	unRXF1S;	/* 0x000000B4 */
    un_mcg_canfdn_1_rxf1a_t	unRXF1A;	/* 0x000000B8 */
    un_mcg_canfdn_1_rxesc_t	unRXESC;	/* 0x000000BC */
    un_mcg_canfdn_1_txbc_t	unTXBC;	/* 0x000000C0 */
    un_mcg_canfdn_1_txfqs_t	unTXFQS;	/* 0x000000C4 */
    un_mcg_canfdn_1_txesc_t	unTXESC;	/* 0x000000C8 */
    un_mcg_canfdn_1_txbrp_t	unTXBRP;	/* 0x000000CC */
    un_mcg_canfdn_1_txbar_t	unTXBAR;	/* 0x000000D0 */
    un_mcg_canfdn_1_txbcr_t	unTXBCR;	/* 0x000000D4 */
    un_mcg_canfdn_1_txbto_t	unTXBTO;	/* 0x000000D8 */
    un_mcg_canfdn_1_txbcf_t	unTXBCF;	/* 0x000000DC */
    un_mcg_canfdn_1_txbtie_t	unTXBTIE;	/* 0x000000E0 */
    un_mcg_canfdn_1_txbcie_t	unTXBCIE;	/* 0x000000E4 */
    uint_io8_t	au8Reserved5[8];	/* 0x000000E8 */
    un_mcg_canfdn_1_txefc_t	unTXEFC;	/* 0x000000F0 */
    un_mcg_canfdn_1_txefs_t	unTXEFS;	/* 0x000000F4 */
    un_mcg_canfdn_1_txefa_t	unTXEFA;	/* 0x000000F8 */
    uint_io8_t	au8Reserved6[260];	/* 0x000000FC */
    un_mcg_canfdn_1_fdecr_t	unFDECR;	/* 0x00000200 */
    un_mcg_canfdn_1_fdesr_t	unFDESR;	/* 0x00000201 */
    un_mcg_canfdn_1_fdsear_t	unFDSEAR;	/* 0x00000202 */
    uint_io8_t	au8Reserved7[1];	/* 0x00000204 */
    un_mcg_canfdn_1_fdescr_t	unFDESCR;	/* 0x00000205 */
    un_mcg_canfdn_1_fddear_t	unFDDEAR;	/* 0x00000206 */
    un_mcg_canfdn_1_fdfecr_t	unFDFECR;	/* 0x00000208 */
    uint_io8_t	au8Reserved8[244];	/* 0x0000020C */
    un_mcg_canfdn_1_tscntr_t	unTSCNTR;	/* 0x00000300 */
    un_mcg_canfdn_1_tsmdr_t	unTSMDR;	/* 0x00000302 */
    un_mcg_canfdn_1_tsdivr_l_t	unTSDIVR_L;	/* 0x00000304 */
    uint_io8_t	au8Reserved9[2];	/* 0x00000306 */
    un_mcg_canfdn_1_tscdtr_t	unTSCDTR;	/* 0x00000308 */
    un_mcg_canfdn_1_tscpclr_t	unTSCPCLR;	/* 0x0000030A */
    uint_io8_t	au8Reserved10[64756];	/* 0x0000030C */
}stc_mcg_canfdn_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mcg_canfdn_1_t	stcMCG_CANFD_1[2];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 65536(0x10000) bytes */


#endif /* __S6J3200_CANFD_H */
