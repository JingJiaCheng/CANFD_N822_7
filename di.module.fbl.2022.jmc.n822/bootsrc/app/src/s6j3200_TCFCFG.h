/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_TCFCFG_H
#define __S6J3200_TCFCFG_H

#include "s6j3200io_basetypes.h"

/* TCFCFG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define TCFCFG	stcTCFCFG
#else /* __IO_DEFINE */
#define TCFCFG	(*((volatile stc_tcfcfg_t*)0xB0411000))
#endif /* __IO_DEFINE */

/* FCPROTKEY */
#define TCFCFG_FCPROTKEY	(TCFCFG.unFCPROTKEY.u32Register)  /*@rg@*/
#define TCFCFG_FCPROTKEY_FCPROTKEY	TCFCFG_FCPROTKEY  /*@bfrg@*/

typedef union un_tcfcfg_fcprotkey{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fcprotkey_t;

/* FCFGR */
#define TCFCFG_FCFGR	(TCFCFG.unFCFGR.u32Register)  /*@rg@*/
#define TCFCFG_FCFGR_FAWC	(TCFCFG.unFCFGR.stcField.u2FAWC)  /*@bf@*/
#define TCFCFG_FCFGR_WE	(*(volatile uint_io8_t*)0xB1188044)  /*@bfbba@*/
#define TCFCFG_FCFGR_TCMPR	(*(volatile uint_io8_t*)0xB1188045)  /*@bfbba@*/
#define TCFCFG_FCFGR_SWFRST	(*(volatile uint_io8_t*)0xB1188046)  /*@bfbba@*/

typedef struct stc_tcfcfg_fcfgr_field{
    uint_io32_t		u2FAWC:2;
    uint_io32_t		:2;
    uint_io32_t		u1WE:1;
    uint_io32_t		u1TCMPR:1;
    uint_io32_t		u1SWFRST:1;
    uint_io32_t		:25;
}stc_tcfcfg_fcfgr_field_t;

typedef union un_tcfcfg_fcfgr{
    uint_io32_t		u32Register;
    stc_tcfcfg_fcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fcfgr_t;

/* FECCCTRL */
#define TCFCFG_FECCCTRL	(TCFCFG.unFECCCTRL.u32Register)  /*@rg@*/
#define TCFCFG_FECCCTRL_ECCOFF	(*(volatile uint_io8_t*)0xB1188080)  /*@bfbba@*/

typedef struct stc_tcfcfg_feccctrl_field{
    uint_io32_t		u1ECCOFF:1;
    uint_io32_t		:31;
}stc_tcfcfg_feccctrl_field_t;

typedef union un_tcfcfg_feccctrl{
    uint_io32_t		u32Register;
    stc_tcfcfg_feccctrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_feccctrl_t;

/* FECCEIR */
#define TCFCFG_FECCEIR	(TCFCFG.unFECCEIR.u32Register)  /*@rg@*/
#define TCFCFG_FECCEIR_FECCEIR	(TCFCFG.unFECCEIR.au8Byte[0])  /*@bfbyte@*/
#define TCFCFG_FECCEIR_LMASK	(TCFCFG.unFECCEIR.stcField.u2LMASK)  /*@bf@*/

typedef struct stc_tcfcfg_fecceir_field{
    uint_io32_t		u8FECCEIR:8;
    uint_io32_t		:16;
    uint_io32_t		u2LMASK:2;
    uint_io32_t		:6;
}stc_tcfcfg_fecceir_field_t;

typedef union un_tcfcfg_fecceir{
    uint_io32_t		u32Register;
    stc_tcfcfg_fecceir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fecceir_t;

/* FICTRL */
#define TCFCFG_FICTRL	(TCFCFG.unFICTRL.u32Register)  /*@rg@*/
#define TCFCFG_FICTRL_RDYIE	(*(volatile uint_io8_t*)0xB1188100)  /*@bfbba@*/
#define TCFCFG_FICTRL_HANGIE	(*(volatile uint_io8_t*)0xB1188101)  /*@bfbba@*/
#define TCFCFG_FICTRL_RDYIC	(*(volatile uint_io8_t*)0xB1188108)  /*@bfbba@*/
#define TCFCFG_FICTRL_HANGIC	(*(volatile uint_io8_t*)0xB1188109)  /*@bfbba@*/

typedef struct stc_tcfcfg_fictrl_field{
    uint_io32_t		u1RDYIE:1;
    uint_io32_t		u1HANGIE:1;
    uint_io32_t		:6;
    uint_io32_t		u1RDYIC:1;
    uint_io32_t		u1HANGIC:1;
    uint_io32_t		:22;
}stc_tcfcfg_fictrl_field_t;

typedef union un_tcfcfg_fictrl{
    uint_io32_t		u32Register;
    stc_tcfcfg_fictrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fictrl_t;

/* FDATEIR_L */
#define TCFCFG_FDATEIR_L	(TCFCFG.unFDATEIR_L.u32Register)  /*@rg@*/
#define TCFCFG_FDATEIR_L_FDATEIR	TCFCFG_FDATEIR_L  /*@bfrg@*/

typedef union un_tcfcfg_fdateir_l{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fdateir_l_t;

/* FDATEIR_H */
#define TCFCFG_FDATEIR_H	(TCFCFG.unFDATEIR_H.u32Register)  /*@rg@*/
#define TCFCFG_FDATEIR_H_FDATEIR	TCFCFG_FDATEIR_H  /*@bfrg@*/

typedef union un_tcfcfg_fdateir_h{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fdateir_h_t;

/* FSTAT */
#define TCFCFG_FSTAT	(TCFCFG.unFSTAT.u32Register)  /*@rg@*/
#define TCFCFG_FSTAT_RDY	(*(volatile uint_io8_t*)0xB11881C0)  /*@bfbba@*/
#define TCFCFG_FSTAT_HANG	(*(volatile uint_io8_t*)0xB11881C1)  /*@bfbba@*/
#define TCFCFG_FSTAT_READ	(*(volatile uint_io8_t*)0xB11881C2)  /*@bfbba@*/
#define TCFCFG_FSTAT_SERS	(*(volatile uint_io8_t*)0xB11881C3)  /*@bfbba@*/
#define TCFCFG_FSTAT_ERSEC	(*(volatile uint_io8_t*)0xB11881C4)  /*@bfbba@*/
#define TCFCFG_FSTAT_ESPS	(*(volatile uint_io8_t*)0xB11881C5)  /*@bfbba@*/
#define TCFCFG_FSTAT_PGMS	(*(volatile uint_io8_t*)0xB11881C6)  /*@bfbba@*/
#define TCFCFG_FSTAT_CERS	(*(volatile uint_io8_t*)0xB11881C7)  /*@bfbba@*/
#define TCFCFG_FSTAT_RDYINT	(*(volatile uint_io8_t*)0xB11881C8)  /*@bfbba@*/
#define TCFCFG_FSTAT_HANGINT	(*(volatile uint_io8_t*)0xB11881C9)  /*@bfbba@*/

typedef struct stc_tcfcfg_fstat_field{
    uint_io32_t		u1RDY:1;
    uint_io32_t		u1HANG:1;
    uint_io32_t		u1READ:1;
    uint_io32_t		u1SERS:1;
    uint_io32_t		u1ERSEC:1;
    uint_io32_t		u1ESPS:1;
    uint_io32_t		u1PGMS:1;
    uint_io32_t		u1CERS:1;
    uint_io32_t		u1RDYINT:1;
    uint_io32_t		u1HANGINT:1;
    uint_io32_t		:22;
}stc_tcfcfg_fstat_field_t;

typedef union un_tcfcfg_fstat{
    uint_io32_t		u32Register;
    stc_tcfcfg_fstat_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fstat_t;

/* FSECIR */
#define TCFCFG_FSECIR	(TCFCFG.unFSECIR.u32Register)  /*@rg@*/
#define TCFCFG_FSECIR_SECIE	(*(volatile uint_io8_t*)0xB1188280)  /*@bfbba@*/
#define TCFCFG_FSECIR_SECIC	(*(volatile uint_io8_t*)0xB1188288)  /*@bfbba@*/
#define TCFCFG_FSECIR_SECINT	(*(volatile uint_io8_t*)0xB1188290)  /*@bfbba@*/
#define TCFCFG_FSECIR_SYN	(TCFCFG.unFSECIR.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_tcfcfg_fsecir_field{
    uint_io32_t		u1SECIE:1;
    uint_io32_t		:7;
    uint_io32_t		u1SECIC:1;
    uint_io32_t		:7;
    uint_io32_t		u1SECINT:1;
    uint_io32_t		:7;
    uint_io32_t		u8SYN:8;
}stc_tcfcfg_fsecir_field_t;

typedef union un_tcfcfg_fsecir{
    uint_io32_t		u32Register;
    stc_tcfcfg_fsecir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fsecir_t;

/* FECCEAR */
#define TCFCFG_FECCEAR	(TCFCFG.unFECCEAR.u32Register)  /*@rg@*/
#define TCFCFG_FECCEAR_FECCEAR	TCFCFG_FECCEAR  /*@bfrg@*/

typedef union un_tcfcfg_feccear{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_feccear_t;

/* FUCEDIR */
#define TCFCFG_FUCEDIR	(TCFCFG.unFUCEDIR.u32Register)  /*@rg@*/
#define TCFCFG_FUCEDIR_UCEDIC	(*(volatile uint_io8_t*)0xB1188408)  /*@bfbba@*/
#define TCFCFG_FUCEDIR_UCEDINT	(*(volatile uint_io8_t*)0xB1188410)  /*@bfbba@*/
#define TCFCFG_FUCEDIR_SYN	(TCFCFG.unFUCEDIR.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_tcfcfg_fucedir_field{
    uint_io32_t		:8;
    uint_io32_t		u1UCEDIC:1;
    uint_io32_t		:7;
    uint_io32_t		u1UCEDINT:1;
    uint_io32_t		:7;
    uint_io32_t		u8SYN:8;
}stc_tcfcfg_fucedir_field_t;

typedef union un_tcfcfg_fucedir{
    uint_io32_t		u32Register;
    stc_tcfcfg_fucedir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fucedir_t;

/* FUCEAR */
#define TCFCFG_FUCEAR	(TCFCFG.unFUCEAR.u32Register)  /*@rg@*/
#define TCFCFG_FUCEAR_UCEA	TCFCFG_FUCEAR  /*@bfrg@*/

typedef union un_tcfcfg_fucear{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_fucear_t;

/* BRCFG */
#define TCFCFG_BRCFG	(TCFCFG.unBRCFG.u32Register)  /*@rg@*/
#define TCFCFG_BRCFG_ESEC	(TCFCFG.unBRCFG.au8Byte[0])  /*@bfbyte@*/
#define TCFCFG_BRCFG_SSEC	(TCFCFG.unBRCFG.au8Byte[1])  /*@bfbyte@*/
#define TCFCFG_BRCFG_REGION_END_BUF	(TCFCFG.unBRCFG.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_tcfcfg_brcfg_field{
    uint_io32_t		u8ESEC:8;
    uint_io32_t		u8SSEC:8;
    uint_io32_t		u16REGION_END_BUF:16;
}stc_tcfcfg_brcfg_field_t;

typedef union un_tcfcfg_brcfg{
    uint_io32_t		u32Register;
    stc_tcfcfg_brcfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_brcfg_t;

/* BRAT */
#define TCFCFG_BRAT	(TCFCFG.unBRAT.u32Register)  /*@rg@*/
#define TCFCFG_BRAT_RGEN	(*(volatile uint_io8_t*)0xB11884C0)  /*@bfbba@*/
#define TCFCFG_BRAT_AM	(TCFCFG.unBRAT.stcField.u2AM)  /*@bf@*/
#define TCFCFG_BRAT_VCLR	(*(volatile uint_io8_t*)0xB11884D0)  /*@bfbba@*/

typedef struct stc_tcfcfg_brat_field{
    uint_io32_t		u1RGEN:1;
    uint_io32_t		:7;
    uint_io32_t		u2AM:2;
    uint_io32_t		:6;
    uint_io32_t		u1VCLR:1;
    uint_io32_t		:15;
}stc_tcfcfg_brat_field_t;

typedef union un_tcfcfg_brat{
    uint_io32_t		u32Register;
    stc_tcfcfg_brat_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_brat_t;

/* TCMBUF[0-15]_W[0-3] */
#define TCFCFG_TCMBUF0_W0	(TCFCFG.unTCMBUF0_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF0_W0_BUFDATA	TCFCFG_TCMBUF0_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF0_W1	(TCFCFG.unTCMBUF0_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF0_W1_BUFDATA	TCFCFG_TCMBUF0_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF0_W2	(TCFCFG.unTCMBUF0_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF0_W2_BUFDATA	TCFCFG_TCMBUF0_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF0_W3	(TCFCFG.unTCMBUF0_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF0_W3_BUFDATA	TCFCFG_TCMBUF0_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF1_W0	(TCFCFG.unTCMBUF1_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF1_W0_BUFDATA	TCFCFG_TCMBUF1_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF1_W1	(TCFCFG.unTCMBUF1_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF1_W1_BUFDATA	TCFCFG_TCMBUF1_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF1_W2	(TCFCFG.unTCMBUF1_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF1_W2_BUFDATA	TCFCFG_TCMBUF1_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF1_W3	(TCFCFG.unTCMBUF1_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF1_W3_BUFDATA	TCFCFG_TCMBUF1_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF2_W0	(TCFCFG.unTCMBUF2_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF2_W0_BUFDATA	TCFCFG_TCMBUF2_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF2_W1	(TCFCFG.unTCMBUF2_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF2_W1_BUFDATA	TCFCFG_TCMBUF2_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF2_W2	(TCFCFG.unTCMBUF2_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF2_W2_BUFDATA	TCFCFG_TCMBUF2_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF2_W3	(TCFCFG.unTCMBUF2_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF2_W3_BUFDATA	TCFCFG_TCMBUF2_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF3_W0	(TCFCFG.unTCMBUF3_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF3_W0_BUFDATA	TCFCFG_TCMBUF3_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF3_W1	(TCFCFG.unTCMBUF3_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF3_W1_BUFDATA	TCFCFG_TCMBUF3_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF3_W2	(TCFCFG.unTCMBUF3_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF3_W2_BUFDATA	TCFCFG_TCMBUF3_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF3_W3	(TCFCFG.unTCMBUF3_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF3_W3_BUFDATA	TCFCFG_TCMBUF3_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF4_W0	(TCFCFG.unTCMBUF4_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF4_W0_BUFDATA	TCFCFG_TCMBUF4_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF4_W1	(TCFCFG.unTCMBUF4_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF4_W1_BUFDATA	TCFCFG_TCMBUF4_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF4_W2	(TCFCFG.unTCMBUF4_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF4_W2_BUFDATA	TCFCFG_TCMBUF4_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF4_W3	(TCFCFG.unTCMBUF4_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF4_W3_BUFDATA	TCFCFG_TCMBUF4_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF5_W0	(TCFCFG.unTCMBUF5_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF5_W0_BUFDATA	TCFCFG_TCMBUF5_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF5_W1	(TCFCFG.unTCMBUF5_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF5_W1_BUFDATA	TCFCFG_TCMBUF5_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF5_W2	(TCFCFG.unTCMBUF5_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF5_W2_BUFDATA	TCFCFG_TCMBUF5_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF5_W3	(TCFCFG.unTCMBUF5_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF5_W3_BUFDATA	TCFCFG_TCMBUF5_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF6_W0	(TCFCFG.unTCMBUF6_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF6_W0_BUFDATA	TCFCFG_TCMBUF6_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF6_W1	(TCFCFG.unTCMBUF6_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF6_W1_BUFDATA	TCFCFG_TCMBUF6_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF6_W2	(TCFCFG.unTCMBUF6_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF6_W2_BUFDATA	TCFCFG_TCMBUF6_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF6_W3	(TCFCFG.unTCMBUF6_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF6_W3_BUFDATA	TCFCFG_TCMBUF6_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF7_W0	(TCFCFG.unTCMBUF7_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF7_W0_BUFDATA	TCFCFG_TCMBUF7_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF7_W1	(TCFCFG.unTCMBUF7_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF7_W1_BUFDATA	TCFCFG_TCMBUF7_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF7_W2	(TCFCFG.unTCMBUF7_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF7_W2_BUFDATA	TCFCFG_TCMBUF7_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF7_W3	(TCFCFG.unTCMBUF7_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF7_W3_BUFDATA	TCFCFG_TCMBUF7_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF8_W0	(TCFCFG.unTCMBUF8_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF8_W0_BUFDATA	TCFCFG_TCMBUF8_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF8_W1	(TCFCFG.unTCMBUF8_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF8_W1_BUFDATA	TCFCFG_TCMBUF8_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF8_W2	(TCFCFG.unTCMBUF8_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF8_W2_BUFDATA	TCFCFG_TCMBUF8_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF8_W3	(TCFCFG.unTCMBUF8_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF8_W3_BUFDATA	TCFCFG_TCMBUF8_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF9_W0	(TCFCFG.unTCMBUF9_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF9_W0_BUFDATA	TCFCFG_TCMBUF9_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF9_W1	(TCFCFG.unTCMBUF9_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF9_W1_BUFDATA	TCFCFG_TCMBUF9_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF9_W2	(TCFCFG.unTCMBUF9_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF9_W2_BUFDATA	TCFCFG_TCMBUF9_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF9_W3	(TCFCFG.unTCMBUF9_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF9_W3_BUFDATA	TCFCFG_TCMBUF9_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF10_W0	(TCFCFG.unTCMBUF10_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF10_W0_BUFDATA	TCFCFG_TCMBUF10_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF10_W1	(TCFCFG.unTCMBUF10_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF10_W1_BUFDATA	TCFCFG_TCMBUF10_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF10_W2	(TCFCFG.unTCMBUF10_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF10_W2_BUFDATA	TCFCFG_TCMBUF10_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF10_W3	(TCFCFG.unTCMBUF10_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF10_W3_BUFDATA	TCFCFG_TCMBUF10_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF11_W0	(TCFCFG.unTCMBUF11_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF11_W0_BUFDATA	TCFCFG_TCMBUF11_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF11_W1	(TCFCFG.unTCMBUF11_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF11_W1_BUFDATA	TCFCFG_TCMBUF11_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF11_W2	(TCFCFG.unTCMBUF11_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF11_W2_BUFDATA	TCFCFG_TCMBUF11_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF11_W3	(TCFCFG.unTCMBUF11_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF11_W3_BUFDATA	TCFCFG_TCMBUF11_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF12_W0	(TCFCFG.unTCMBUF12_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF12_W0_BUFDATA	TCFCFG_TCMBUF12_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF12_W1	(TCFCFG.unTCMBUF12_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF12_W1_BUFDATA	TCFCFG_TCMBUF12_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF12_W2	(TCFCFG.unTCMBUF12_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF12_W2_BUFDATA	TCFCFG_TCMBUF12_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF12_W3	(TCFCFG.unTCMBUF12_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF12_W3_BUFDATA	TCFCFG_TCMBUF12_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF13_W0	(TCFCFG.unTCMBUF13_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF13_W0_BUFDATA	TCFCFG_TCMBUF13_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF13_W1	(TCFCFG.unTCMBUF13_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF13_W1_BUFDATA	TCFCFG_TCMBUF13_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF13_W2	(TCFCFG.unTCMBUF13_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF13_W2_BUFDATA	TCFCFG_TCMBUF13_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF13_W3	(TCFCFG.unTCMBUF13_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF13_W3_BUFDATA	TCFCFG_TCMBUF13_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF14_W0	(TCFCFG.unTCMBUF14_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF14_W0_BUFDATA	TCFCFG_TCMBUF14_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF14_W1	(TCFCFG.unTCMBUF14_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF14_W1_BUFDATA	TCFCFG_TCMBUF14_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF14_W2	(TCFCFG.unTCMBUF14_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF14_W2_BUFDATA	TCFCFG_TCMBUF14_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF14_W3	(TCFCFG.unTCMBUF14_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF14_W3_BUFDATA	TCFCFG_TCMBUF14_W3  /*@bfrg@*/

#define TCFCFG_TCMBUF15_W0	(TCFCFG.unTCMBUF15_W0.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF15_W0_BUFDATA	TCFCFG_TCMBUF15_W0  /*@bfrg@*/

#define TCFCFG_TCMBUF15_W1	(TCFCFG.unTCMBUF15_W1.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF15_W1_BUFDATA	TCFCFG_TCMBUF15_W1  /*@bfrg@*/

#define TCFCFG_TCMBUF15_W2	(TCFCFG.unTCMBUF15_W2.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF15_W2_BUFDATA	TCFCFG_TCMBUF15_W2  /*@bfrg@*/

#define TCFCFG_TCMBUF15_W3	(TCFCFG.unTCMBUF15_W3.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF15_W3_BUFDATA	TCFCFG_TCMBUF15_W3  /*@bfrg@*/

typedef union un_tcfcfg_tcmbufn_wn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_tcmbufn_wn_t;

/* TCMBUF[0-15]_W4 */
#define TCFCFG_TCMBUF0_W4	(TCFCFG.unTCMBUF0_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF0_W4_BUFADD	(TCFCFG.unTCMBUF0_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF1_W4	(TCFCFG.unTCMBUF1_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF1_W4_BUFADD	(TCFCFG.unTCMBUF1_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF2_W4	(TCFCFG.unTCMBUF2_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF2_W4_BUFADD	(TCFCFG.unTCMBUF2_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF3_W4	(TCFCFG.unTCMBUF3_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF3_W4_BUFADD	(TCFCFG.unTCMBUF3_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF4_W4	(TCFCFG.unTCMBUF4_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF4_W4_BUFADD	(TCFCFG.unTCMBUF4_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF5_W4	(TCFCFG.unTCMBUF5_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF5_W4_BUFADD	(TCFCFG.unTCMBUF5_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF6_W4	(TCFCFG.unTCMBUF6_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF6_W4_BUFADD	(TCFCFG.unTCMBUF6_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF7_W4	(TCFCFG.unTCMBUF7_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF7_W4_BUFADD	(TCFCFG.unTCMBUF7_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF8_W4	(TCFCFG.unTCMBUF8_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF8_W4_BUFADD	(TCFCFG.unTCMBUF8_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF9_W4	(TCFCFG.unTCMBUF9_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF9_W4_BUFADD	(TCFCFG.unTCMBUF9_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF10_W4	(TCFCFG.unTCMBUF10_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF10_W4_BUFADD	(TCFCFG.unTCMBUF10_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF11_W4	(TCFCFG.unTCMBUF11_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF11_W4_BUFADD	(TCFCFG.unTCMBUF11_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF12_W4	(TCFCFG.unTCMBUF12_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF12_W4_BUFADD	(TCFCFG.unTCMBUF12_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF13_W4	(TCFCFG.unTCMBUF13_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF13_W4_BUFADD	(TCFCFG.unTCMBUF13_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF14_W4	(TCFCFG.unTCMBUF14_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF14_W4_BUFADD	(TCFCFG.unTCMBUF14_W4.stcField.u24BUFADD)  /*@bf@*/

#define TCFCFG_TCMBUF15_W4	(TCFCFG.unTCMBUF15_W4.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF15_W4_BUFADD	(TCFCFG.unTCMBUF15_W4.stcField.u24BUFADD)  /*@bf@*/

typedef struct stc_tcfcfg_tcmbufn_w4_field{
    uint_io32_t		u24BUFADD:24;
    uint_io32_t		:8;
}stc_tcfcfg_tcmbufn_w4_field_t;

typedef union un_tcfcfg_tcmbufn_w4{
    uint_io32_t		u32Register;
    stc_tcfcfg_tcmbufn_w4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_tcmbufn_w4_t;

/* TCMBUF[0-15]_W5 */
#define TCFCFG_TCMBUF0_W5	(TCFCFG.unTCMBUF0_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF0_W5_BVALID	(*(volatile uint_io8_t*)0xB11888A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF1_W5	(TCFCFG.unTCMBUF1_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF1_W5_BVALID	(*(volatile uint_io8_t*)0xB11889A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF2_W5	(TCFCFG.unTCMBUF2_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF2_W5_BVALID	(*(volatile uint_io8_t*)0xB1188AA0)  /*@bfbba@*/

#define TCFCFG_TCMBUF3_W5	(TCFCFG.unTCMBUF3_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF3_W5_BVALID	(*(volatile uint_io8_t*)0xB1188BA0)  /*@bfbba@*/

#define TCFCFG_TCMBUF4_W5	(TCFCFG.unTCMBUF4_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF4_W5_BVALID	(*(volatile uint_io8_t*)0xB1188CA0)  /*@bfbba@*/

#define TCFCFG_TCMBUF5_W5	(TCFCFG.unTCMBUF5_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF5_W5_BVALID	(*(volatile uint_io8_t*)0xB1188DA0)  /*@bfbba@*/

#define TCFCFG_TCMBUF6_W5	(TCFCFG.unTCMBUF6_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF6_W5_BVALID	(*(volatile uint_io8_t*)0xB1188EA0)  /*@bfbba@*/

#define TCFCFG_TCMBUF7_W5	(TCFCFG.unTCMBUF7_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF7_W5_BVALID	(*(volatile uint_io8_t*)0xB1188FA0)  /*@bfbba@*/

#define TCFCFG_TCMBUF8_W5	(TCFCFG.unTCMBUF8_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF8_W5_BVALID	(*(volatile uint_io8_t*)0xB11890A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF9_W5	(TCFCFG.unTCMBUF9_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF9_W5_BVALID	(*(volatile uint_io8_t*)0xB11891A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF10_W5	(TCFCFG.unTCMBUF10_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF10_W5_BVALID	(*(volatile uint_io8_t*)0xB11892A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF11_W5	(TCFCFG.unTCMBUF11_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF11_W5_BVALID	(*(volatile uint_io8_t*)0xB11893A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF12_W5	(TCFCFG.unTCMBUF12_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF12_W5_BVALID	(*(volatile uint_io8_t*)0xB11894A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF13_W5	(TCFCFG.unTCMBUF13_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF13_W5_BVALID	(*(volatile uint_io8_t*)0xB11895A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF14_W5	(TCFCFG.unTCMBUF14_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF14_W5_BVALID	(*(volatile uint_io8_t*)0xB11896A0)  /*@bfbba@*/

#define TCFCFG_TCMBUF15_W5	(TCFCFG.unTCMBUF15_W5.u32Register)  /*@rg@*/
#define TCFCFG_TCMBUF15_W5_BVALID	(*(volatile uint_io8_t*)0xB11897A0)  /*@bfbba@*/

typedef struct stc_tcfcfg_tcmbufn_w5_field{
    uint_io32_t		u1BVALID:1;
    uint_io32_t		:31;
}stc_tcfcfg_tcmbufn_w5_field_t;

typedef union un_tcfcfg_tcmbufn_w5{
    uint_io32_t		u32Register;
    stc_tcfcfg_tcmbufn_w5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_tcmbufn_w5_t;

/* TCMBUF[0-15]_W6 */
#define TCFCFG_TCMBUF0_W6	(TCFCFG.unTCMBUF0_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF1_W6	(TCFCFG.unTCMBUF1_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF2_W6	(TCFCFG.unTCMBUF2_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF3_W6	(TCFCFG.unTCMBUF3_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF4_W6	(TCFCFG.unTCMBUF4_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF5_W6	(TCFCFG.unTCMBUF5_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF6_W6	(TCFCFG.unTCMBUF6_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF7_W6	(TCFCFG.unTCMBUF7_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF8_W6	(TCFCFG.unTCMBUF8_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF9_W6	(TCFCFG.unTCMBUF9_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF10_W6	(TCFCFG.unTCMBUF10_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF11_W6	(TCFCFG.unTCMBUF11_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF12_W6	(TCFCFG.unTCMBUF12_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF13_W6	(TCFCFG.unTCMBUF13_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF14_W6	(TCFCFG.unTCMBUF14_W6.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF15_W6	(TCFCFG.unTCMBUF15_W6.u32Register)  /*@rg@*/

typedef union un_tcfcfg_tcmbufn_w6{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_tcmbufn_w6_t;

/* TCMBUF[0-15]_W7 */
#define TCFCFG_TCMBUF0_W7	(TCFCFG.unTCMBUF0_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF1_W7	(TCFCFG.unTCMBUF1_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF2_W7	(TCFCFG.unTCMBUF2_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF3_W7	(TCFCFG.unTCMBUF3_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF4_W7	(TCFCFG.unTCMBUF4_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF5_W7	(TCFCFG.unTCMBUF5_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF6_W7	(TCFCFG.unTCMBUF6_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF7_W7	(TCFCFG.unTCMBUF7_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF8_W7	(TCFCFG.unTCMBUF8_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF9_W7	(TCFCFG.unTCMBUF9_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF10_W7	(TCFCFG.unTCMBUF10_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF11_W7	(TCFCFG.unTCMBUF11_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF12_W7	(TCFCFG.unTCMBUF12_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF13_W7	(TCFCFG.unTCMBUF13_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF14_W7	(TCFCFG.unTCMBUF14_W7.u32Register)  /*@rg@*/

#define TCFCFG_TCMBUF15_W7	(TCFCFG.unTCMBUF15_W7.u32Register)  /*@rg@*/

typedef union un_tcfcfg_tcmbufn_w7{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg_tcmbufn_w7_t;


typedef struct stc_tcfcfg{
    un_tcfcfg_fcprotkey_t	unFCPROTKEY;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000004 */
    un_tcfcfg_fcfgr_t	unFCFGR;	/* 0x00000008 */
    uint_io8_t	au8Reserved1[4];	/* 0x0000000C */
    un_tcfcfg_feccctrl_t	unFECCCTRL;	/* 0x00000010 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000014 */
    un_tcfcfg_fecceir_t	unFECCEIR;	/* 0x0000001C */
    un_tcfcfg_fictrl_t	unFICTRL;	/* 0x00000020 */
    uint_io8_t	au8Reserved3[4];	/* 0x00000024 */
    un_tcfcfg_fdateir_l_t	unFDATEIR_L;	/* 0x00000028 */
    un_tcfcfg_fdateir_h_t	unFDATEIR_H;	/* 0x0000002C */
    uint_io8_t	au8Reserved4[8];	/* 0x00000030 */
    un_tcfcfg_fstat_t	unFSTAT;	/* 0x00000038 */
    uint_io8_t	au8Reserved5[20];	/* 0x0000003C */
    un_tcfcfg_fsecir_t	unFSECIR;	/* 0x00000050 */
    un_tcfcfg_feccear_t	unFECCEAR;	/* 0x00000054 */
    uint_io8_t	au8Reserved6[40];	/* 0x00000058 */
    un_tcfcfg_fucedir_t	unFUCEDIR;	/* 0x00000080 */
    un_tcfcfg_fucear_t	unFUCEAR;	/* 0x00000084 */
    uint_io8_t	au8Reserved7[8];	/* 0x00000088 */
    un_tcfcfg_brcfg_t	unBRCFG;	/* 0x00000090 */
    uint_io8_t	au8Reserved8[4];	/* 0x00000094 */
    un_tcfcfg_brat_t	unBRAT;	/* 0x00000098 */
    uint_io8_t	au8Reserved9[100];	/* 0x0000009C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF0_W0;	/* 0x00000100 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF0_W1;	/* 0x00000104 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF0_W2;	/* 0x00000108 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF0_W3;	/* 0x0000010C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF0_W4;	/* 0x00000110 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF0_W5;	/* 0x00000114 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF0_W6;	/* 0x00000118 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF0_W7;	/* 0x0000011C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF1_W0;	/* 0x00000120 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF1_W1;	/* 0x00000124 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF1_W2;	/* 0x00000128 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF1_W3;	/* 0x0000012C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF1_W4;	/* 0x00000130 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF1_W5;	/* 0x00000134 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF1_W6;	/* 0x00000138 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF1_W7;	/* 0x0000013C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF2_W0;	/* 0x00000140 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF2_W1;	/* 0x00000144 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF2_W2;	/* 0x00000148 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF2_W3;	/* 0x0000014C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF2_W4;	/* 0x00000150 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF2_W5;	/* 0x00000154 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF2_W6;	/* 0x00000158 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF2_W7;	/* 0x0000015C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF3_W0;	/* 0x00000160 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF3_W1;	/* 0x00000164 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF3_W2;	/* 0x00000168 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF3_W3;	/* 0x0000016C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF3_W4;	/* 0x00000170 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF3_W5;	/* 0x00000174 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF3_W6;	/* 0x00000178 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF3_W7;	/* 0x0000017C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF4_W0;	/* 0x00000180 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF4_W1;	/* 0x00000184 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF4_W2;	/* 0x00000188 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF4_W3;	/* 0x0000018C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF4_W4;	/* 0x00000190 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF4_W5;	/* 0x00000194 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF4_W6;	/* 0x00000198 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF4_W7;	/* 0x0000019C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF5_W0;	/* 0x000001A0 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF5_W1;	/* 0x000001A4 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF5_W2;	/* 0x000001A8 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF5_W3;	/* 0x000001AC */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF5_W4;	/* 0x000001B0 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF5_W5;	/* 0x000001B4 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF5_W6;	/* 0x000001B8 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF5_W7;	/* 0x000001BC */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF6_W0;	/* 0x000001C0 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF6_W1;	/* 0x000001C4 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF6_W2;	/* 0x000001C8 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF6_W3;	/* 0x000001CC */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF6_W4;	/* 0x000001D0 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF6_W5;	/* 0x000001D4 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF6_W6;	/* 0x000001D8 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF6_W7;	/* 0x000001DC */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF7_W0;	/* 0x000001E0 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF7_W1;	/* 0x000001E4 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF7_W2;	/* 0x000001E8 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF7_W3;	/* 0x000001EC */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF7_W4;	/* 0x000001F0 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF7_W5;	/* 0x000001F4 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF7_W6;	/* 0x000001F8 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF7_W7;	/* 0x000001FC */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF8_W0;	/* 0x00000200 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF8_W1;	/* 0x00000204 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF8_W2;	/* 0x00000208 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF8_W3;	/* 0x0000020C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF8_W4;	/* 0x00000210 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF8_W5;	/* 0x00000214 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF8_W6;	/* 0x00000218 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF8_W7;	/* 0x0000021C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF9_W0;	/* 0x00000220 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF9_W1;	/* 0x00000224 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF9_W2;	/* 0x00000228 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF9_W3;	/* 0x0000022C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF9_W4;	/* 0x00000230 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF9_W5;	/* 0x00000234 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF9_W6;	/* 0x00000238 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF9_W7;	/* 0x0000023C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF10_W0;	/* 0x00000240 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF10_W1;	/* 0x00000244 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF10_W2;	/* 0x00000248 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF10_W3;	/* 0x0000024C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF10_W4;	/* 0x00000250 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF10_W5;	/* 0x00000254 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF10_W6;	/* 0x00000258 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF10_W7;	/* 0x0000025C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF11_W0;	/* 0x00000260 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF11_W1;	/* 0x00000264 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF11_W2;	/* 0x00000268 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF11_W3;	/* 0x0000026C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF11_W4;	/* 0x00000270 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF11_W5;	/* 0x00000274 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF11_W6;	/* 0x00000278 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF11_W7;	/* 0x0000027C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF12_W0;	/* 0x00000280 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF12_W1;	/* 0x00000284 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF12_W2;	/* 0x00000288 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF12_W3;	/* 0x0000028C */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF12_W4;	/* 0x00000290 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF12_W5;	/* 0x00000294 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF12_W6;	/* 0x00000298 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF12_W7;	/* 0x0000029C */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF13_W0;	/* 0x000002A0 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF13_W1;	/* 0x000002A4 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF13_W2;	/* 0x000002A8 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF13_W3;	/* 0x000002AC */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF13_W4;	/* 0x000002B0 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF13_W5;	/* 0x000002B4 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF13_W6;	/* 0x000002B8 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF13_W7;	/* 0x000002BC */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF14_W0;	/* 0x000002C0 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF14_W1;	/* 0x000002C4 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF14_W2;	/* 0x000002C8 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF14_W3;	/* 0x000002CC */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF14_W4;	/* 0x000002D0 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF14_W5;	/* 0x000002D4 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF14_W6;	/* 0x000002D8 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF14_W7;	/* 0x000002DC */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF15_W0;	/* 0x000002E0 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF15_W1;	/* 0x000002E4 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF15_W2;	/* 0x000002E8 */
    un_tcfcfg_tcmbufn_wn_t	unTCMBUF15_W3;	/* 0x000002EC */
    un_tcfcfg_tcmbufn_w4_t	unTCMBUF15_W4;	/* 0x000002F0 */
    un_tcfcfg_tcmbufn_w5_t	unTCMBUF15_W5;	/* 0x000002F4 */
    un_tcfcfg_tcmbufn_w6_t	unTCMBUF15_W6;	/* 0x000002F8 */
    un_tcfcfg_tcmbufn_w7_t	unTCMBUF15_W7;	/* 0x000002FC */
    uint_io8_t	au8Reserved10[192];	/* 0x00000300 */
}stc_tcfcfg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_tcfcfg_t	stcTCFCFG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 960(0x3c0) bytes */


/* TCFCFG0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define TCFCFG0_1	stcTCFCFG0_1
#else /* __IO_DEFINE */
#define TCFCFG0_1	(*((volatile stc_tcfcfg0_1_t*)0xB04113C0))
#endif /* __IO_DEFINE */

/* SECSTAT */
#define TCFCFG0_SECSTAT	(TCFCFG0_1.unSECSTAT.u32Register)  /*@rg@*/
#define TCFCFG0_SECSTAT_SECEN	(*(volatile uint_io8_t*)0xB1189E00)  /*@bfbba@*/
#define TCFCFG0_SECSTAT_SECSC	(*(volatile uint_io8_t*)0xB1189E01)  /*@bfbba@*/
#define TCFCFG0_SECSTAT_CEEN	(*(volatile uint_io8_t*)0xB1189E02)  /*@bfbba@*/
#define TCFCFG0_SECSTAT_SECOE	(*(volatile uint_io8_t*)0xB1189E03)  /*@bfbba@*/
#define TCFCFG0_SECSTAT_SWPOE	(*(volatile uint_io8_t*)0xB1189E04)  /*@bfbba@*/
#define TCFCFG0_SECSTAT_SFDONE	(*(volatile uint_io8_t*)0xB1189E05)  /*@bfbba@*/
#define TCFCFG0_SECSTAT_UMV	(*(volatile uint_io8_t*)0xB1189E08)  /*@bfbba@*/

typedef struct stc_tcfcfg0_1_secstat_field{
    uint_io32_t		u1SECEN:1;
    uint_io32_t		u1SECSC:1;
    uint_io32_t		u1CEEN:1;
    uint_io32_t		u1SECOE:1;
    uint_io32_t		u1SWPOE:1;
    uint_io32_t		u1SFDONE:1;
    uint_io32_t		:2;
    uint_io32_t		u1UMV:1;
    uint_io32_t		:23;
}stc_tcfcfg0_1_secstat_field_t;

typedef union un_tcfcfg0_1_secstat{
    uint_io32_t		u32Register;
    stc_tcfcfg0_1_secstat_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_secstat_t;

/* SER */
#define TCFCFG0_SER	(TCFCFG0_1.unSER.u32Register)  /*@rg@*/
#define TCFCFG0_SER_SER	TCFCFG0_SER  /*@bfrg@*/

typedef union un_tcfcfg0_1_ser{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_ser_t;

/* SSR */
#define TCFCFG0_SSR	(TCFCFG0_1.unSSR.u32Register)  /*@rg@*/
#define TCFCFG0_SSR_SSR	TCFCFG0_SSR  /*@bfrg@*/

typedef union un_tcfcfg0_1_ssr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_ssr_t;

/* CEER */
#define TCFCFG0_CEER	(TCFCFG0_1.unCEER.u32Register)  /*@rg@*/
#define TCFCFG0_CEER_CEER	TCFCFG0_CEER  /*@bfrg@*/

typedef union un_tcfcfg0_1_ceer{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_ceer_t;

/* SOER */
#define TCFCFG0_SOER	(TCFCFG0_1.unSOER.u32Register)  /*@rg@*/
#define TCFCFG0_SOER_SOER	TCFCFG0_SOER  /*@bfrg@*/

typedef union un_tcfcfg0_1_soer{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_soer_t;

/* SWPOER */
#define TCFCFG0_SWPOER	(TCFCFG0_1.unSWPOER.u32Register)  /*@rg@*/
#define TCFCFG0_SWPOER_SWPOER	TCFCFG0_SWPOER  /*@bfrg@*/

typedef union un_tcfcfg0_1_swpoer{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_swpoer_t;

/* WSWP */
#define TCFCFG0_WSWP	(TCFCFG0_1.unWSWP.u32Register)  /*@rg@*/
#define TCFCFG0_WSWP_WSWP0	(*(volatile uint_io8_t*)0xB1189EC0)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP1	(*(volatile uint_io8_t*)0xB1189EC1)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP2	(*(volatile uint_io8_t*)0xB1189EC2)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP3	(*(volatile uint_io8_t*)0xB1189EC3)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP4	(*(volatile uint_io8_t*)0xB1189EC4)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP5	(*(volatile uint_io8_t*)0xB1189EC5)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP6	(*(volatile uint_io8_t*)0xB1189EC6)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP7	(*(volatile uint_io8_t*)0xB1189EC7)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP8	(*(volatile uint_io8_t*)0xB1189EC8)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP9	(*(volatile uint_io8_t*)0xB1189EC9)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP10	(*(volatile uint_io8_t*)0xB1189ECA)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP11	(*(volatile uint_io8_t*)0xB1189ECB)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP12	(*(volatile uint_io8_t*)0xB1189ECC)  /*@bfbba@*/
#define TCFCFG0_WSWP_WSWP13	(*(volatile uint_io8_t*)0xB1189ECD)  /*@bfbba@*/

typedef struct stc_tcfcfg0_1_wswp_field{
    uint_io32_t		u1WSWP0:1;
    uint_io32_t		u1WSWP1:1;
    uint_io32_t		u1WSWP2:1;
    uint_io32_t		u1WSWP3:1;
    uint_io32_t		u1WSWP4:1;
    uint_io32_t		u1WSWP5:1;
    uint_io32_t		u1WSWP6:1;
    uint_io32_t		u1WSWP7:1;
    uint_io32_t		u1WSWP8:1;
    uint_io32_t		u1WSWP9:1;
    uint_io32_t		u1WSWP10:1;
    uint_io32_t		u1WSWP11:1;
    uint_io32_t		u1WSWP12:1;
    uint_io32_t		u1WSWP13:1;
    uint_io32_t		:18;
}stc_tcfcfg0_1_wswp_field_t;

typedef union un_tcfcfg0_1_wswp{
    uint_io32_t		u32Register;
    stc_tcfcfg0_1_wswp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_wswp_t;

/* C0SWP */
#define TCFCFG0_C0SWP	(TCFCFG0_1.unC0SWP.u32Register)  /*@rg@*/
#define TCFCFG0_C0SWP_C0SWP0	(*(volatile uint_io8_t*)0xB1189EE0)  /*@bfbba@*/
#define TCFCFG0_C0SWP_C0SWP1	(*(volatile uint_io8_t*)0xB1189EE1)  /*@bfbba@*/
#define TCFCFG0_C0SWP_C0SWP2	(*(volatile uint_io8_t*)0xB1189EE2)  /*@bfbba@*/
#define TCFCFG0_C0SWP_C0SWP3	(*(volatile uint_io8_t*)0xB1189EE3)  /*@bfbba@*/
#define TCFCFG0_C0SWP_C0SWP4	(*(volatile uint_io8_t*)0xB1189EE4)  /*@bfbba@*/
#define TCFCFG0_C0SWP_C0SWP5	(*(volatile uint_io8_t*)0xB1189EE5)  /*@bfbba@*/
#define TCFCFG0_C0SWP_C0SWP6	(*(volatile uint_io8_t*)0xB1189EE6)  /*@bfbba@*/
#define TCFCFG0_C0SWP_C0SWP7	(*(volatile uint_io8_t*)0xB1189EE7)  /*@bfbba@*/

typedef struct stc_tcfcfg0_1_c0swp_field{
    uint_io32_t		u1C0SWP0:1;
    uint_io32_t		u1C0SWP1:1;
    uint_io32_t		u1C0SWP2:1;
    uint_io32_t		u1C0SWP3:1;
    uint_io32_t		u1C0SWP4:1;
    uint_io32_t		u1C0SWP5:1;
    uint_io32_t		u1C0SWP6:1;
    uint_io32_t		u1C0SWP7:1;
    uint_io32_t		:24;
}stc_tcfcfg0_1_c0swp_field_t;

typedef union un_tcfcfg0_1_c0swp{
    uint_io32_t		u32Register;
    stc_tcfcfg0_1_c0swp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_c0swp_t;

/* C1SWP */
#define TCFCFG0_C1SWP	(TCFCFG0_1.unC1SWP.u32Register)  /*@rg@*/
#define TCFCFG0_C1SWP_C1SWP8	(*(volatile uint_io8_t*)0xB1189F00)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP9	(*(volatile uint_io8_t*)0xB1189F01)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP10	(*(volatile uint_io8_t*)0xB1189F02)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP11	(*(volatile uint_io8_t*)0xB1189F03)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP12	(*(volatile uint_io8_t*)0xB1189F04)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP13	(*(volatile uint_io8_t*)0xB1189F05)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP14	(*(volatile uint_io8_t*)0xB1189F06)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP15	(*(volatile uint_io8_t*)0xB1189F07)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP16	(*(volatile uint_io8_t*)0xB1189F08)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP17	(*(volatile uint_io8_t*)0xB1189F09)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP18	(*(volatile uint_io8_t*)0xB1189F0A)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP19	(*(volatile uint_io8_t*)0xB1189F0B)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP20	(*(volatile uint_io8_t*)0xB1189F0C)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP21	(*(volatile uint_io8_t*)0xB1189F0D)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP22	(*(volatile uint_io8_t*)0xB1189F0E)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP23	(*(volatile uint_io8_t*)0xB1189F0F)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP24	(*(volatile uint_io8_t*)0xB1189F10)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP25	(*(volatile uint_io8_t*)0xB1189F11)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP26	(*(volatile uint_io8_t*)0xB1189F12)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP27	(*(volatile uint_io8_t*)0xB1189F13)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP28	(*(volatile uint_io8_t*)0xB1189F14)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP29	(*(volatile uint_io8_t*)0xB1189F15)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP30	(*(volatile uint_io8_t*)0xB1189F16)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP31	(*(volatile uint_io8_t*)0xB1189F17)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP32	(*(volatile uint_io8_t*)0xB1189F18)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP33	(*(volatile uint_io8_t*)0xB1189F19)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP34	(*(volatile uint_io8_t*)0xB1189F1A)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP35	(*(volatile uint_io8_t*)0xB1189F1B)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP36	(*(volatile uint_io8_t*)0xB1189F1C)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP37	(*(volatile uint_io8_t*)0xB1189F1D)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP38	(*(volatile uint_io8_t*)0xB1189F1E)  /*@bfbba@*/
#define TCFCFG0_C1SWP_C1SWP39	(*(volatile uint_io8_t*)0xB1189F1F)  /*@bfbba@*/

typedef struct stc_tcfcfg0_1_c1swp_field{
    uint_io32_t		u1C1SWP8:1;
    uint_io32_t		u1C1SWP9:1;
    uint_io32_t		u1C1SWP10:1;
    uint_io32_t		u1C1SWP11:1;
    uint_io32_t		u1C1SWP12:1;
    uint_io32_t		u1C1SWP13:1;
    uint_io32_t		u1C1SWP14:1;
    uint_io32_t		u1C1SWP15:1;
    uint_io32_t		u1C1SWP16:1;
    uint_io32_t		u1C1SWP17:1;
    uint_io32_t		u1C1SWP18:1;
    uint_io32_t		u1C1SWP19:1;
    uint_io32_t		u1C1SWP20:1;
    uint_io32_t		u1C1SWP21:1;
    uint_io32_t		u1C1SWP22:1;
    uint_io32_t		u1C1SWP23:1;
    uint_io32_t		u1C1SWP24:1;
    uint_io32_t		u1C1SWP25:1;
    uint_io32_t		u1C1SWP26:1;
    uint_io32_t		u1C1SWP27:1;
    uint_io32_t		u1C1SWP28:1;
    uint_io32_t		u1C1SWP29:1;
    uint_io32_t		u1C1SWP30:1;
    uint_io32_t		u1C1SWP31:1;
    uint_io32_t		u1C1SWP32:1;
    uint_io32_t		u1C1SWP33:1;
    uint_io32_t		u1C1SWP34:1;
    uint_io32_t		u1C1SWP35:1;
    uint_io32_t		u1C1SWP36:1;
    uint_io32_t		u1C1SWP37:1;
    uint_io32_t		u1C1SWP38:1;
    uint_io32_t		u1C1SWP39:1;
}stc_tcfcfg0_1_c1swp_field_t;

typedef union un_tcfcfg0_1_c1swp{
    uint_io32_t		u32Register;
    stc_tcfcfg0_1_c1swp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_c1swp_t;

/* C2SWP */
#define TCFCFG0_C2SWP	(TCFCFG0_1.unC2SWP.u32Register)  /*@rg@*/
#define TCFCFG0_C2SWP_C2SWP8	(*(volatile uint_io8_t*)0xB1189F20)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP9	(*(volatile uint_io8_t*)0xB1189F21)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP10	(*(volatile uint_io8_t*)0xB1189F22)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP11	(*(volatile uint_io8_t*)0xB1189F23)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP12	(*(volatile uint_io8_t*)0xB1189F24)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP13	(*(volatile uint_io8_t*)0xB1189F25)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP14	(*(volatile uint_io8_t*)0xB1189F26)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP15	(*(volatile uint_io8_t*)0xB1189F27)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP16	(*(volatile uint_io8_t*)0xB1189F28)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP17	(*(volatile uint_io8_t*)0xB1189F29)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP18	(*(volatile uint_io8_t*)0xB1189F2A)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP19	(*(volatile uint_io8_t*)0xB1189F2B)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP20	(*(volatile uint_io8_t*)0xB1189F2C)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP21	(*(volatile uint_io8_t*)0xB1189F2D)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP22	(*(volatile uint_io8_t*)0xB1189F2E)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP23	(*(volatile uint_io8_t*)0xB1189F2F)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP24	(*(volatile uint_io8_t*)0xB1189F30)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP25	(*(volatile uint_io8_t*)0xB1189F31)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP26	(*(volatile uint_io8_t*)0xB1189F32)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP27	(*(volatile uint_io8_t*)0xB1189F33)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP28	(*(volatile uint_io8_t*)0xB1189F34)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP29	(*(volatile uint_io8_t*)0xB1189F35)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP30	(*(volatile uint_io8_t*)0xB1189F36)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP31	(*(volatile uint_io8_t*)0xB1189F37)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP32	(*(volatile uint_io8_t*)0xB1189F38)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP33	(*(volatile uint_io8_t*)0xB1189F39)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP34	(*(volatile uint_io8_t*)0xB1189F3A)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP35	(*(volatile uint_io8_t*)0xB1189F3B)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP36	(*(volatile uint_io8_t*)0xB1189F3C)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP37	(*(volatile uint_io8_t*)0xB1189F3D)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP38	(*(volatile uint_io8_t*)0xB1189F3E)  /*@bfbba@*/
#define TCFCFG0_C2SWP_C2SWP39	(*(volatile uint_io8_t*)0xB1189F3F)  /*@bfbba@*/

typedef struct stc_tcfcfg0_1_c2swp_field{
    uint_io32_t		u1C2SWP8:1;
    uint_io32_t		u1C2SWP9:1;
    uint_io32_t		u1C2SWP10:1;
    uint_io32_t		u1C2SWP11:1;
    uint_io32_t		u1C2SWP12:1;
    uint_io32_t		u1C2SWP13:1;
    uint_io32_t		u1C2SWP14:1;
    uint_io32_t		u1C2SWP15:1;
    uint_io32_t		u1C2SWP16:1;
    uint_io32_t		u1C2SWP17:1;
    uint_io32_t		u1C2SWP18:1;
    uint_io32_t		u1C2SWP19:1;
    uint_io32_t		u1C2SWP20:1;
    uint_io32_t		u1C2SWP21:1;
    uint_io32_t		u1C2SWP22:1;
    uint_io32_t		u1C2SWP23:1;
    uint_io32_t		u1C2SWP24:1;
    uint_io32_t		u1C2SWP25:1;
    uint_io32_t		u1C2SWP26:1;
    uint_io32_t		u1C2SWP27:1;
    uint_io32_t		u1C2SWP28:1;
    uint_io32_t		u1C2SWP29:1;
    uint_io32_t		u1C2SWP30:1;
    uint_io32_t		u1C2SWP31:1;
    uint_io32_t		u1C2SWP32:1;
    uint_io32_t		u1C2SWP33:1;
    uint_io32_t		u1C2SWP34:1;
    uint_io32_t		u1C2SWP35:1;
    uint_io32_t		u1C2SWP36:1;
    uint_io32_t		u1C2SWP37:1;
    uint_io32_t		u1C2SWP38:1;
    uint_io32_t		u1C2SWP39:1;
}stc_tcfcfg0_1_c2swp_field_t;

typedef union un_tcfcfg0_1_c2swp{
    uint_io32_t		u32Register;
    stc_tcfcfg0_1_c2swp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_c2swp_t;

/* C3SWP */
#define TCFCFG0_C3SWP	(TCFCFG0_1.unC3SWP.u32Register)  /*@rg@*/
#define TCFCFG0_C3SWP_C3SWP8	(*(volatile uint_io8_t*)0xB1189F40)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP9	(*(volatile uint_io8_t*)0xB1189F41)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP10	(*(volatile uint_io8_t*)0xB1189F42)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP11	(*(volatile uint_io8_t*)0xB1189F43)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP12	(*(volatile uint_io8_t*)0xB1189F44)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP13	(*(volatile uint_io8_t*)0xB1189F45)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP14	(*(volatile uint_io8_t*)0xB1189F46)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP15	(*(volatile uint_io8_t*)0xB1189F47)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP16	(*(volatile uint_io8_t*)0xB1189F48)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP17	(*(volatile uint_io8_t*)0xB1189F49)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP18	(*(volatile uint_io8_t*)0xB1189F4A)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP19	(*(volatile uint_io8_t*)0xB1189F4B)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP20	(*(volatile uint_io8_t*)0xB1189F4C)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP21	(*(volatile uint_io8_t*)0xB1189F4D)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP22	(*(volatile uint_io8_t*)0xB1189F4E)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP23	(*(volatile uint_io8_t*)0xB1189F4F)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP24	(*(volatile uint_io8_t*)0xB1189F50)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP25	(*(volatile uint_io8_t*)0xB1189F51)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP26	(*(volatile uint_io8_t*)0xB1189F52)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP27	(*(volatile uint_io8_t*)0xB1189F53)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP28	(*(volatile uint_io8_t*)0xB1189F54)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP29	(*(volatile uint_io8_t*)0xB1189F55)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP30	(*(volatile uint_io8_t*)0xB1189F56)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP31	(*(volatile uint_io8_t*)0xB1189F57)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP32	(*(volatile uint_io8_t*)0xB1189F58)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP33	(*(volatile uint_io8_t*)0xB1189F59)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP34	(*(volatile uint_io8_t*)0xB1189F5A)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP35	(*(volatile uint_io8_t*)0xB1189F5B)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP36	(*(volatile uint_io8_t*)0xB1189F5C)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP37	(*(volatile uint_io8_t*)0xB1189F5D)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP38	(*(volatile uint_io8_t*)0xB1189F5E)  /*@bfbba@*/
#define TCFCFG0_C3SWP_C3SWP39	(*(volatile uint_io8_t*)0xB1189F5F)  /*@bfbba@*/

typedef struct stc_tcfcfg0_1_c3swp_field{
    uint_io32_t		u1C3SWP8:1;
    uint_io32_t		u1C3SWP9:1;
    uint_io32_t		u1C3SWP10:1;
    uint_io32_t		u1C3SWP11:1;
    uint_io32_t		u1C3SWP12:1;
    uint_io32_t		u1C3SWP13:1;
    uint_io32_t		u1C3SWP14:1;
    uint_io32_t		u1C3SWP15:1;
    uint_io32_t		u1C3SWP16:1;
    uint_io32_t		u1C3SWP17:1;
    uint_io32_t		u1C3SWP18:1;
    uint_io32_t		u1C3SWP19:1;
    uint_io32_t		u1C3SWP20:1;
    uint_io32_t		u1C3SWP21:1;
    uint_io32_t		u1C3SWP22:1;
    uint_io32_t		u1C3SWP23:1;
    uint_io32_t		u1C3SWP24:1;
    uint_io32_t		u1C3SWP25:1;
    uint_io32_t		u1C3SWP26:1;
    uint_io32_t		u1C3SWP27:1;
    uint_io32_t		u1C3SWP28:1;
    uint_io32_t		u1C3SWP29:1;
    uint_io32_t		u1C3SWP30:1;
    uint_io32_t		u1C3SWP31:1;
    uint_io32_t		u1C3SWP32:1;
    uint_io32_t		u1C3SWP33:1;
    uint_io32_t		u1C3SWP34:1;
    uint_io32_t		u1C3SWP35:1;
    uint_io32_t		u1C3SWP36:1;
    uint_io32_t		u1C3SWP37:1;
    uint_io32_t		u1C3SWP38:1;
    uint_io32_t		u1C3SWP39:1;
}stc_tcfcfg0_1_c3swp_field_t;

typedef union un_tcfcfg0_1_c3swp{
    uint_io32_t		u32Register;
    stc_tcfcfg0_1_c3swp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tcfcfg0_1_c3swp_t;


typedef struct stc_tcfcfg0_1{
    un_tcfcfg0_1_secstat_t	unSECSTAT;	/* 0x00000000 */
    un_tcfcfg0_1_ser_t	unSER;	/* 0x00000004 */
    un_tcfcfg0_1_ssr_t	unSSR;	/* 0x00000008 */
    un_tcfcfg0_1_ceer_t	unCEER;	/* 0x0000000C */
    un_tcfcfg0_1_soer_t	unSOER;	/* 0x00000010 */
    un_tcfcfg0_1_swpoer_t	unSWPOER;	/* 0x00000014 */
    un_tcfcfg0_1_wswp_t	unWSWP;	/* 0x00000018 */
    un_tcfcfg0_1_c0swp_t	unC0SWP;	/* 0x0000001C */
    un_tcfcfg0_1_c1swp_t	unC1SWP;	/* 0x00000020 */
    un_tcfcfg0_1_c2swp_t	unC2SWP;	/* 0x00000024 */
    un_tcfcfg0_1_c3swp_t	unC3SWP;	/* 0x00000028 */
    uint_io8_t	au8Reserved0[3092];	/* 0x0000002C */
}stc_tcfcfg0_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_tcfcfg0_1_t	stcTCFCFG0_1;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 3136(0xc40) bytes */


#endif /* __S6J3200_TCFCFG_H */
