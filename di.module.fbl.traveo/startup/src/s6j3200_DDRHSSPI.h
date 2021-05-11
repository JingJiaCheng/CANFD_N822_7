/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_DDRHSSPI_H
#define __S6J3200_DDRHSSPI_H

#include "s6j3200io_basetypes.h"

/* DDRHSSPI0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define DDRHSSPI0	stcDDRHSSPI0
#else /* __IO_DEFINE */
#define DDRHSSPI0	(*((volatile stc_ddrhsspi0_t*)0xB0101000))
#endif /* __IO_DEFINE */

/* MCTRL */
#define DDRHSSPI0_MCTRL	(DDRHSSPI0.unMCTRL.u32Register)  /*@rg@*/
#define DDRHSSPI0_MCTRL_MEN	(DDRHSSPI0.unMCTRL.stcField.u1MEN)  /*@bf@*/
#define DDRHSSPI0_MCTRL_CSEN	(DDRHSSPI0.unMCTRL.stcField.u1CSEN)  /*@bf@*/
#define DDRHSSPI0_MCTRL_MES	(DDRHSSPI0.unMCTRL.stcField.u1MES)  /*@bf@*/
#define DDRHSSPI0_MCTRL_DLPEN	(DDRHSSPI0.unMCTRL.stcField.u1DLPEN)  /*@bf@*/

typedef struct stc_ddrhsspi0_mctrl_field{
    uint_io32_t		u1MEN:1;
    uint_io32_t		u1CSEN:1;
    uint_io32_t		:2;
    uint_io32_t		u1MES:1;
    uint_io32_t		u1DLPEN:1;
    uint_io32_t		:26;
}stc_ddrhsspi0_mctrl_field_t;

typedef union un_ddrhsspi0_mctrl{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_mctrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_mctrl_t;

/* PCC[0-3] */
#define DDRHSSPI0_PCC0	(DDRHSSPI0.unPCC0.u32Register)  /*@rg@*/
#define DDRHSSPI0_PCC0_ACES	(DDRHSSPI0.unPCC0.stcField.u1ACES)  /*@bf@*/
#define DDRHSSPI0_PCC0_SS2CD	(DDRHSSPI0.unPCC0.stcField.u2SS2CD)  /*@bf@*/
#define DDRHSSPI0_PCC0_CDRS	(DDRHSSPI0.unPCC0.stcField.u4CDRS)  /*@bf@*/
#define DDRHSSPI0_PCC0_SSELDEASRT	(DDRHSSPI0.unPCC0.stcField.u5SSELDEASRT)  /*@bf@*/

#define DDRHSSPI0_PCC1	(DDRHSSPI0.unPCC1.u32Register)  /*@rg@*/
#define DDRHSSPI0_PCC1_ACES	(DDRHSSPI0.unPCC1.stcField.u1ACES)  /*@bf@*/
#define DDRHSSPI0_PCC1_SS2CD	(DDRHSSPI0.unPCC1.stcField.u2SS2CD)  /*@bf@*/
#define DDRHSSPI0_PCC1_CDRS	(DDRHSSPI0.unPCC1.stcField.u4CDRS)  /*@bf@*/
#define DDRHSSPI0_PCC1_SSELDEASRT	(DDRHSSPI0.unPCC1.stcField.u5SSELDEASRT)  /*@bf@*/

#define DDRHSSPI0_PCC2	(DDRHSSPI0.unPCC2.u32Register)  /*@rg@*/
#define DDRHSSPI0_PCC2_ACES	(DDRHSSPI0.unPCC2.stcField.u1ACES)  /*@bf@*/
#define DDRHSSPI0_PCC2_SS2CD	(DDRHSSPI0.unPCC2.stcField.u2SS2CD)  /*@bf@*/
#define DDRHSSPI0_PCC2_CDRS	(DDRHSSPI0.unPCC2.stcField.u4CDRS)  /*@bf@*/
#define DDRHSSPI0_PCC2_SSELDEASRT	(DDRHSSPI0.unPCC2.stcField.u5SSELDEASRT)  /*@bf@*/

#define DDRHSSPI0_PCC3	(DDRHSSPI0.unPCC3.u32Register)  /*@rg@*/
#define DDRHSSPI0_PCC3_ACES	(DDRHSSPI0.unPCC3.stcField.u1ACES)  /*@bf@*/
#define DDRHSSPI0_PCC3_SS2CD	(DDRHSSPI0.unPCC3.stcField.u2SS2CD)  /*@bf@*/
#define DDRHSSPI0_PCC3_CDRS	(DDRHSSPI0.unPCC3.stcField.u4CDRS)  /*@bf@*/
#define DDRHSSPI0_PCC3_SSELDEASRT	(DDRHSSPI0.unPCC3.stcField.u5SSELDEASRT)  /*@bf@*/

typedef struct stc_ddrhsspi0_pccn_field{
    uint_io32_t		:2;
    uint_io32_t		u1ACES:1;
    uint_io32_t		:2;
    uint_io32_t		u2SS2CD:2;
    uint_io32_t		:2;
    uint_io32_t		u4CDRS:4;
    uint_io32_t		:3;
    uint_io32_t		u5SSELDEASRT:5;
    uint_io32_t		:11;
}stc_ddrhsspi0_pccn_field_t;

typedef union un_ddrhsspi0_pccn{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_pccn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_pccn_t;

/* TXF */
#define DDRHSSPI0_TXF	(DDRHSSPI0.unTXF.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXF_TFFS	(DDRHSSPI0.unTXF.stcField.u1TFFS)  /*@bf@*/
#define DDRHSSPI0_TXF_TFES	(DDRHSSPI0.unTXF.stcField.u1TFES)  /*@bf@*/
#define DDRHSSPI0_TXF_TFOS	(DDRHSSPI0.unTXF.stcField.u1TFOS)  /*@bf@*/
#define DDRHSSPI0_TXF_TFLETS	(DDRHSSPI0.unTXF.stcField.u1TFLETS)  /*@bf@*/
#define DDRHSSPI0_TXF_TFMTS	(DDRHSSPI0.unTXF.stcField.u1TFMTS)  /*@bf@*/
#define DDRHSSPI0_TXF_TSSRS	(DDRHSSPI0.unTXF.stcField.u1TSSRS)  /*@bf@*/

typedef struct stc_ddrhsspi0_txf_field{
    uint_io32_t		u1TFFS:1;
    uint_io32_t		u1TFES:1;
    uint_io32_t		u1TFOS:1;
    uint_io32_t		:1;
    uint_io32_t		u1TFLETS:1;
    uint_io32_t		u1TFMTS:1;
    uint_io32_t		u1TSSRS:1;
    uint_io32_t		:25;
}stc_ddrhsspi0_txf_field_t;

typedef union un_ddrhsspi0_txf{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_txf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_txf_t;

/* TXE */
#define DDRHSSPI0_TXE	(DDRHSSPI0.unTXE.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXE_TFFE	(DDRHSSPI0.unTXE.stcField.u1TFFE)  /*@bf@*/
#define DDRHSSPI0_TXE_TFEE	(DDRHSSPI0.unTXE.stcField.u1TFEE)  /*@bf@*/
#define DDRHSSPI0_TXE_TFOE	(DDRHSSPI0.unTXE.stcField.u1TFOE)  /*@bf@*/
#define DDRHSSPI0_TXE_TFLETE	(DDRHSSPI0.unTXE.stcField.u1TFLETE)  /*@bf@*/
#define DDRHSSPI0_TXE_TFMTE	(DDRHSSPI0.unTXE.stcField.u1TFMTE)  /*@bf@*/
#define DDRHSSPI0_TXE_TSSRE	(DDRHSSPI0.unTXE.stcField.u1TSSRE)  /*@bf@*/

typedef struct stc_ddrhsspi0_txe_field{
    uint_io32_t		u1TFFE:1;
    uint_io32_t		u1TFEE:1;
    uint_io32_t		u1TFOE:1;
    uint_io32_t		:1;
    uint_io32_t		u1TFLETE:1;
    uint_io32_t		u1TFMTE:1;
    uint_io32_t		u1TSSRE:1;
    uint_io32_t		:25;
}stc_ddrhsspi0_txe_field_t;

typedef union un_ddrhsspi0_txe{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_txe_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_txe_t;

/* TXC */
#define DDRHSSPI0_TXC	(DDRHSSPI0.unTXC.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXC_TFFC	(DDRHSSPI0.unTXC.stcField.u1TFFC)  /*@bf@*/
#define DDRHSSPI0_TXC_TFEC	(DDRHSSPI0.unTXC.stcField.u1TFEC)  /*@bf@*/
#define DDRHSSPI0_TXC_TFOC	(DDRHSSPI0.unTXC.stcField.u1TFOC)  /*@bf@*/
#define DDRHSSPI0_TXC_TFLETC	(DDRHSSPI0.unTXC.stcField.u1TFLETC)  /*@bf@*/
#define DDRHSSPI0_TXC_TFMTC	(DDRHSSPI0.unTXC.stcField.u1TFMTC)  /*@bf@*/
#define DDRHSSPI0_TXC_TSSRC	(DDRHSSPI0.unTXC.stcField.u1TSSRC)  /*@bf@*/

typedef struct stc_ddrhsspi0_txc_field{
    uint_io32_t		u1TFFC:1;
    uint_io32_t		u1TFEC:1;
    uint_io32_t		u1TFOC:1;
    uint_io32_t		:1;
    uint_io32_t		u1TFLETC:1;
    uint_io32_t		u1TFMTC:1;
    uint_io32_t		u1TSSRC:1;
    uint_io32_t		:25;
}stc_ddrhsspi0_txc_field_t;

typedef union un_ddrhsspi0_txc{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_txc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_txc_t;

/* RXF */
#define DDRHSSPI0_RXF	(DDRHSSPI0.unRXF.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXF_RFFS	(DDRHSSPI0.unRXF.stcField.u1RFFS)  /*@bf@*/
#define DDRHSSPI0_RXF_RFES	(DDRHSSPI0.unRXF.stcField.u1RFES)  /*@bf@*/
#define DDRHSSPI0_RXF_RFUS	(DDRHSSPI0.unRXF.stcField.u1RFUS)  /*@bf@*/
#define DDRHSSPI0_RXF_RFLETS	(DDRHSSPI0.unRXF.stcField.u1RFLETS)  /*@bf@*/
#define DDRHSSPI0_RXF_RFMTS	(DDRHSSPI0.unRXF.stcField.u1RFMTS)  /*@bf@*/
#define DDRHSSPI0_RXF_RSSRS	(DDRHSSPI0.unRXF.stcField.u1RSSRS)  /*@bf@*/
#define DDRHSSPI0_RXF_DLPERR	(DDRHSSPI0.unRXF.stcField.u1DLPERR)  /*@bf@*/
#define DDRHSSPI0_RXF_TEST	(DDRHSSPI0.unRXF.stcField.u1TEST)  /*@bf@*/

typedef struct stc_ddrhsspi0_rxf_field{
    uint_io32_t		u1RFFS:1;
    uint_io32_t		u1RFES:1;
    uint_io32_t		:1;
    uint_io32_t		u1RFUS:1;
    uint_io32_t		u1RFLETS:1;
    uint_io32_t		u1RFMTS:1;
    uint_io32_t		u1RSSRS:1;
    uint_io32_t		u1DLPERR:1;
    uint_io32_t		u1TEST:1;
    uint_io32_t		:23;
}stc_ddrhsspi0_rxf_field_t;

typedef union un_ddrhsspi0_rxf{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_rxf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_rxf_t;

/* RXE */
#define DDRHSSPI0_RXE	(DDRHSSPI0.unRXE.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXE_RFFE	(DDRHSSPI0.unRXE.stcField.u1RFFE)  /*@bf@*/
#define DDRHSSPI0_RXE_RFEE	(DDRHSSPI0.unRXE.stcField.u1RFEE)  /*@bf@*/
#define DDRHSSPI0_RXE_RFUE	(DDRHSSPI0.unRXE.stcField.u1RFUE)  /*@bf@*/
#define DDRHSSPI0_RXE_RFLETE	(DDRHSSPI0.unRXE.stcField.u1RFLETE)  /*@bf@*/
#define DDRHSSPI0_RXE_RFMTE	(DDRHSSPI0.unRXE.stcField.u1RFMTE)  /*@bf@*/
#define DDRHSSPI0_RXE_RSSRE	(DDRHSSPI0.unRXE.stcField.u1RSSRE)  /*@bf@*/
#define DDRHSSPI0_RXE_DLPERRE	(DDRHSSPI0.unRXE.stcField.u1DLPERRE)  /*@bf@*/

typedef struct stc_ddrhsspi0_rxe_field{
    uint_io32_t		u1RFFE:1;
    uint_io32_t		u1RFEE:1;
    uint_io32_t		:1;
    uint_io32_t		u1RFUE:1;
    uint_io32_t		u1RFLETE:1;
    uint_io32_t		u1RFMTE:1;
    uint_io32_t		u1RSSRE:1;
    uint_io32_t		u1DLPERRE:1;
    uint_io32_t		:24;
}stc_ddrhsspi0_rxe_field_t;

typedef union un_ddrhsspi0_rxe{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_rxe_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_rxe_t;

/* RXC */
#define DDRHSSPI0_RXC	(DDRHSSPI0.unRXC.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXC_RFFC	(DDRHSSPI0.unRXC.stcField.u1RFFC)  /*@bf@*/
#define DDRHSSPI0_RXC_RFEC	(DDRHSSPI0.unRXC.stcField.u1RFEC)  /*@bf@*/
#define DDRHSSPI0_RXC_RFUC	(DDRHSSPI0.unRXC.stcField.u1RFUC)  /*@bf@*/
#define DDRHSSPI0_RXC_RFLETC	(DDRHSSPI0.unRXC.stcField.u1RFLETC)  /*@bf@*/
#define DDRHSSPI0_RXC_RFMTC	(DDRHSSPI0.unRXC.stcField.u1RFMTC)  /*@bf@*/
#define DDRHSSPI0_RXC_RSSRC	(DDRHSSPI0.unRXC.stcField.u1RSSRC)  /*@bf@*/
#define DDRHSSPI0_RXC_DLPERRC	(DDRHSSPI0.unRXC.stcField.u1DLPERRC)  /*@bf@*/

typedef struct stc_ddrhsspi0_rxc_field{
    uint_io32_t		u1RFFC:1;
    uint_io32_t		u1RFEC:1;
    uint_io32_t		:1;
    uint_io32_t		u1RFUC:1;
    uint_io32_t		u1RFLETC:1;
    uint_io32_t		u1RFMTC:1;
    uint_io32_t		u1RSSRC:1;
    uint_io32_t		u1DLPERRC:1;
    uint_io32_t		:24;
}stc_ddrhsspi0_rxc_field_t;

typedef union un_ddrhsspi0_rxc{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_rxc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_rxc_t;

/* FAULTF */
#define DDRHSSPI0_FAULTF	(DDRHSSPI0.unFAULTF.u32Register)  /*@rg@*/
#define DDRHSSPI0_FAULTF_UMAFS	(DDRHSSPI0.unFAULTF.stcField.u1UMAFS)  /*@bf@*/
#define DDRHSSPI0_FAULTF_PVFS	(DDRHSSPI0.unFAULTF.stcField.u1PVFS)  /*@bf@*/
#define DDRHSSPI0_FAULTF_DWCBSFS	(DDRHSSPI0.unFAULTF.stcField.u1DWCBSFS)  /*@bf@*/
#define DDRHSSPI0_FAULTF_DRCBSFS	(DDRHSSPI0.unFAULTF.stcField.u1DRCBSFS)  /*@bf@*/
#define DDRHSSPI0_FAULTF_DLPFS	(DDRHSSPI0.unFAULTF.stcField.u1DLPFS)  /*@bf@*/

typedef struct stc_ddrhsspi0_faultf_field{
    uint_io32_t		u1UMAFS:1;
    uint_io32_t		:1;
    uint_io32_t		u1PVFS:1;
    uint_io32_t		u1DWCBSFS:1;
    uint_io32_t		u1DRCBSFS:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPFS:1;
    uint_io32_t		:25;
}stc_ddrhsspi0_faultf_field_t;

typedef union un_ddrhsspi0_faultf{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_faultf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_faultf_t;

/* FAULTC */
#define DDRHSSPI0_FAULTC	(DDRHSSPI0.unFAULTC.u32Register)  /*@rg@*/
#define DDRHSSPI0_FAULTC_UMAFC	(DDRHSSPI0.unFAULTC.stcField.u1UMAFC)  /*@bf@*/
#define DDRHSSPI0_FAULTC_PVFC	(DDRHSSPI0.unFAULTC.stcField.u1PVFC)  /*@bf@*/
#define DDRHSSPI0_FAULTC_DWCBSFC	(DDRHSSPI0.unFAULTC.stcField.u1DWCBSFC)  /*@bf@*/
#define DDRHSSPI0_FAULTC_DRCBSFC	(DDRHSSPI0.unFAULTC.stcField.u1DRCBSFC)  /*@bf@*/
#define DDRHSSPI0_FAULTC_DLPFC	(DDRHSSPI0.unFAULTC.stcField.u1DLPFC)  /*@bf@*/

typedef struct stc_ddrhsspi0_faultc_field{
    uint_io32_t		u1UMAFC:1;
    uint_io32_t		:1;
    uint_io32_t		u1PVFC:1;
    uint_io32_t		u1DWCBSFC:1;
    uint_io32_t		u1DRCBSFC:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPFC:1;
    uint_io32_t		:25;
}stc_ddrhsspi0_faultc_field_t;

typedef union un_ddrhsspi0_faultc{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_faultc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_faultc_t;

/* DMCFG */
#define DDRHSSPI0_DMCFG	(DDRHSSPI0.unDMCFG.u8Register)  /*@rg@*/
#define DDRHSSPI0_DMCFG_SSDC	(DDRHSSPI0.unDMCFG.stcField.u1SSDC)  /*@bf@*/

typedef struct stc_ddrhsspi0_dmcfg_field{
    uint_io8_t		:1;
    uint_io8_t		u1SSDC:1;
    uint_io8_t		:6;
}stc_ddrhsspi0_dmcfg_field_t;

typedef union un_ddrhsspi0_dmcfg{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_dmcfg_field_t		stcField;
}un_ddrhsspi0_dmcfg_t;

/* DMAEN */
#define DDRHSSPI0_DMAEN	(DDRHSSPI0.unDMAEN.u8Register)  /*@rg@*/
#define DDRHSSPI0_DMAEN_RXDMAEN	(DDRHSSPI0.unDMAEN.stcField.u1RXDMAEN)  /*@bf@*/
#define DDRHSSPI0_DMAEN_TXDMAEN	(DDRHSSPI0.unDMAEN.stcField.u1TXDMAEN)  /*@bf@*/

typedef struct stc_ddrhsspi0_dmaen_field{
    uint_io8_t		u1RXDMAEN:1;
    uint_io8_t		u1TXDMAEN:1;
    uint_io8_t		:6;
}stc_ddrhsspi0_dmaen_field_t;

typedef union un_ddrhsspi0_dmaen{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_dmaen_field_t		stcField;
}un_ddrhsspi0_dmaen_t;

/* DMSTART */
#define DDRHSSPI0_DMSTART	(DDRHSSPI0.unDMSTART.u8Register)  /*@rg@*/
#define DDRHSSPI0_DMSTART_START	(DDRHSSPI0.unDMSTART.stcField.u1START)  /*@bf@*/

typedef struct stc_ddrhsspi0_dmstart_field{
    uint_io8_t		u1START:1;
    uint_io8_t		:7;
}stc_ddrhsspi0_dmstart_field_t;

typedef union un_ddrhsspi0_dmstart{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_dmstart_field_t		stcField;
}un_ddrhsspi0_dmstart_t;

/* DMPSEL */
#define DDRHSSPI0_DMPSEL	(DDRHSSPI0.unDMPSEL.u8Register)  /*@rg@*/
#define DDRHSSPI0_DMPSEL_PSEL	(DDRHSSPI0.unDMPSEL.stcField.u2PSEL)  /*@bf@*/

typedef struct stc_ddrhsspi0_dmpsel_field{
    uint_io8_t		u2PSEL:2;
    uint_io8_t		:6;
}stc_ddrhsspi0_dmpsel_field_t;

typedef union un_ddrhsspi0_dmpsel{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_dmpsel_field_t		stcField;
}un_ddrhsspi0_dmpsel_t;

/* DMTRP */
#define DDRHSSPI0_DMTRP	(DDRHSSPI0.unDMTRP.u8Register)  /*@rg@*/
#define DDRHSSPI0_DMTRP_TRP	(DDRHSSPI0.unDMTRP.stcField.u4TRP)  /*@bf@*/
#define DDRHSSPI0_DMTRP_DDRM	(DDRHSSPI0.unDMTRP.stcField.u1DDRM)  /*@bf@*/

typedef struct stc_ddrhsspi0_dmtrp_field{
    uint_io8_t		u4TRP:4;
    uint_io8_t		:1;
    uint_io8_t		u1DDRM:1;
    uint_io8_t		:2;
}stc_ddrhsspi0_dmtrp_field_t;

typedef union un_ddrhsspi0_dmtrp{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_dmtrp_field_t		stcField;
}un_ddrhsspi0_dmtrp_t;

/* DMBCC */
#define DDRHSSPI0_DMBCC	(DDRHSSPI0.unDMBCC.u16Register)  /*@rg@*/
#define DDRHSSPI0_DMBCC_BCC	DDRHSSPI0_DMBCC  /*@bfrg@*/

typedef union un_ddrhsspi0_dmbcc{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_ddrhsspi0_dmbcc_t;

/* DMBCS */
#define DDRHSSPI0_DMBCS	(DDRHSSPI0.unDMBCS.u16Register)  /*@rg@*/
#define DDRHSSPI0_DMBCS_BCS	DDRHSSPI0_DMBCS  /*@bfrg@*/

typedef union un_ddrhsspi0_dmbcs{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_ddrhsspi0_dmbcs_t;

/* DMFIFOSTATUS */
#define DDRHSSPI0_DMFIFOSTATUS	(DDRHSSPI0.unDMFIFOSTATUS.u32Register)  /*@rg@*/
#define DDRHSSPI0_DMFIFOSTATUS_RXFLEVEL	(DDRHSSPI0.unDMFIFOSTATUS.stcField.u5RXFLEVEL)  /*@bf@*/
#define DDRHSSPI0_DMFIFOSTATUS_TXFLEVEL	(DDRHSSPI0.unDMFIFOSTATUS.stcField.u5TXFLEVEL)  /*@bf@*/
#define DDRHSSPI0_DMFIFOSTATUS_SSACTIVE	(DDRHSSPI0.unDMFIFOSTATUS.stcField.u1SSACTIVE)  /*@bf@*/

typedef struct stc_ddrhsspi0_dmfifostatus_field{
    uint_io32_t		u5RXFLEVEL:5;
    uint_io32_t		:3;
    uint_io32_t		u5TXFLEVEL:5;
    uint_io32_t		:3;
    uint_io32_t		u1SSACTIVE:1;
    uint_io32_t		:15;
}stc_ddrhsspi0_dmfifostatus_field_t;

typedef union un_ddrhsspi0_dmfifostatus{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_dmfifostatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_dmfifostatus_t;

/* DMFIFOCFG */
#define DDRHSSPI0_DMFIFOCFG	(DDRHSSPI0.unDMFIFOCFG.u32Register)  /*@rg@*/
#define DDRHSSPI0_DMFIFOCFG_RXFTH	(DDRHSSPI0.unDMFIFOCFG.stcField.u5RXFTH)  /*@bf@*/
#define DDRHSSPI0_DMFIFOCFG_TXFTH	(DDRHSSPI0.unDMFIFOCFG.stcField.u5TXFTH)  /*@bf@*/
#define DDRHSSPI0_DMFIFOCFG_FWIDTH	(DDRHSSPI0.unDMFIFOCFG.stcField.u2FWIDTH)  /*@bf@*/
#define DDRHSSPI0_DMFIFOCFG_TXCTRL	(DDRHSSPI0.unDMFIFOCFG.stcField.u1TXCTRL)  /*@bf@*/
#define DDRHSSPI0_DMFIFOCFG_RXFLSH	(DDRHSSPI0.unDMFIFOCFG.stcField.u1RXFLSH)  /*@bf@*/
#define DDRHSSPI0_DMFIFOCFG_TXFLSH	(DDRHSSPI0.unDMFIFOCFG.stcField.u1TXFLSH)  /*@bf@*/

typedef struct stc_ddrhsspi0_dmfifocfg_field{
    uint_io32_t		u5RXFTH:5;
    uint_io32_t		:3;
    uint_io32_t		u5TXFTH:5;
    uint_io32_t		:3;
    uint_io32_t		u2FWIDTH:2;
    uint_io32_t		u1TXCTRL:1;
    uint_io32_t		u1RXFLSH:1;
    uint_io32_t		u1TXFLSH:1;
    uint_io32_t		:11;
}stc_ddrhsspi0_dmfifocfg_field_t;

typedef union un_ddrhsspi0_dmfifocfg{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_dmfifocfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_dmfifocfg_t;

/* TXFIFO[0-23] */
#define DDRHSSPI0_TXFIFO0	(DDRHSSPI0.unTXFIFO0.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO0_TXDATA	DDRHSSPI0_TXFIFO0  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO1	(DDRHSSPI0.unTXFIFO1.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO1_TXDATA	DDRHSSPI0_TXFIFO1  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO2	(DDRHSSPI0.unTXFIFO2.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO2_TXDATA	DDRHSSPI0_TXFIFO2  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO3	(DDRHSSPI0.unTXFIFO3.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO3_TXDATA	DDRHSSPI0_TXFIFO3  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO4	(DDRHSSPI0.unTXFIFO4.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO4_TXDATA	DDRHSSPI0_TXFIFO4  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO5	(DDRHSSPI0.unTXFIFO5.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO5_TXDATA	DDRHSSPI0_TXFIFO5  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO6	(DDRHSSPI0.unTXFIFO6.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO6_TXDATA	DDRHSSPI0_TXFIFO6  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO7	(DDRHSSPI0.unTXFIFO7.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO7_TXDATA	DDRHSSPI0_TXFIFO7  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO8	(DDRHSSPI0.unTXFIFO8.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO8_TXDATA	DDRHSSPI0_TXFIFO8  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO9	(DDRHSSPI0.unTXFIFO9.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO9_TXDATA	DDRHSSPI0_TXFIFO9  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO10	(DDRHSSPI0.unTXFIFO10.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO10_TXDATA	DDRHSSPI0_TXFIFO10  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO11	(DDRHSSPI0.unTXFIFO11.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO11_TXDATA	DDRHSSPI0_TXFIFO11  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO12	(DDRHSSPI0.unTXFIFO12.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO12_TXDATA	DDRHSSPI0_TXFIFO12  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO13	(DDRHSSPI0.unTXFIFO13.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO13_TXDATA	DDRHSSPI0_TXFIFO13  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO14	(DDRHSSPI0.unTXFIFO14.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO14_TXDATA	DDRHSSPI0_TXFIFO14  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO15	(DDRHSSPI0.unTXFIFO15.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO15_TXDATA	DDRHSSPI0_TXFIFO15  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO16	(DDRHSSPI0.unTXFIFO16.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO16_TXDATA	DDRHSSPI0_TXFIFO16  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO17	(DDRHSSPI0.unTXFIFO17.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO17_TXDATA	DDRHSSPI0_TXFIFO17  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO18	(DDRHSSPI0.unTXFIFO18.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO18_TXDATA	DDRHSSPI0_TXFIFO18  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO19	(DDRHSSPI0.unTXFIFO19.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO19_TXDATA	DDRHSSPI0_TXFIFO19  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO20	(DDRHSSPI0.unTXFIFO20.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO20_TXDATA	DDRHSSPI0_TXFIFO20  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO21	(DDRHSSPI0.unTXFIFO21.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO21_TXDATA	DDRHSSPI0_TXFIFO21  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO22	(DDRHSSPI0.unTXFIFO22.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO22_TXDATA	DDRHSSPI0_TXFIFO22  /*@bfrg@*/

#define DDRHSSPI0_TXFIFO23	(DDRHSSPI0.unTXFIFO23.u32Register)  /*@rg@*/
#define DDRHSSPI0_TXFIFO23_TXDATA	DDRHSSPI0_TXFIFO23  /*@bfrg@*/

typedef union un_ddrhsspi0_txfifon{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_txfifon_t;

/* RXFIFO[0-23] */
#define DDRHSSPI0_RXFIFO0	(DDRHSSPI0.unRXFIFO0.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO0_RXDATA	DDRHSSPI0_RXFIFO0  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO1	(DDRHSSPI0.unRXFIFO1.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO1_RXDATA	DDRHSSPI0_RXFIFO1  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO2	(DDRHSSPI0.unRXFIFO2.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO2_RXDATA	DDRHSSPI0_RXFIFO2  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO3	(DDRHSSPI0.unRXFIFO3.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO3_RXDATA	DDRHSSPI0_RXFIFO3  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO4	(DDRHSSPI0.unRXFIFO4.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO4_RXDATA	DDRHSSPI0_RXFIFO4  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO5	(DDRHSSPI0.unRXFIFO5.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO5_RXDATA	DDRHSSPI0_RXFIFO5  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO6	(DDRHSSPI0.unRXFIFO6.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO6_RXDATA	DDRHSSPI0_RXFIFO6  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO7	(DDRHSSPI0.unRXFIFO7.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO7_RXDATA	DDRHSSPI0_RXFIFO7  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO8	(DDRHSSPI0.unRXFIFO8.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO8_RXDATA	DDRHSSPI0_RXFIFO8  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO9	(DDRHSSPI0.unRXFIFO9.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO9_RXDATA	DDRHSSPI0_RXFIFO9  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO10	(DDRHSSPI0.unRXFIFO10.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO10_RXDATA	DDRHSSPI0_RXFIFO10  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO11	(DDRHSSPI0.unRXFIFO11.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO11_RXDATA	DDRHSSPI0_RXFIFO11  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO12	(DDRHSSPI0.unRXFIFO12.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO12_RXDATA	DDRHSSPI0_RXFIFO12  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO13	(DDRHSSPI0.unRXFIFO13.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO13_RXDATA	DDRHSSPI0_RXFIFO13  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO14	(DDRHSSPI0.unRXFIFO14.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO14_RXDATA	DDRHSSPI0_RXFIFO14  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO15	(DDRHSSPI0.unRXFIFO15.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO15_RXDATA	DDRHSSPI0_RXFIFO15  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO16	(DDRHSSPI0.unRXFIFO16.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO16_RXDATA	DDRHSSPI0_RXFIFO16  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO17	(DDRHSSPI0.unRXFIFO17.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO17_RXDATA	DDRHSSPI0_RXFIFO17  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO18	(DDRHSSPI0.unRXFIFO18.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO18_RXDATA	DDRHSSPI0_RXFIFO18  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO19	(DDRHSSPI0.unRXFIFO19.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO19_RXDATA	DDRHSSPI0_RXFIFO19  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO20	(DDRHSSPI0.unRXFIFO20.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO20_RXDATA	DDRHSSPI0_RXFIFO20  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO21	(DDRHSSPI0.unRXFIFO21.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO21_RXDATA	DDRHSSPI0_RXFIFO21  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO22	(DDRHSSPI0.unRXFIFO22.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO22_RXDATA	DDRHSSPI0_RXFIFO22  /*@bfrg@*/

#define DDRHSSPI0_RXFIFO23	(DDRHSSPI0.unRXFIFO23.u32Register)  /*@rg@*/
#define DDRHSSPI0_RXFIFO23_RXDATA	DDRHSSPI0_RXFIFO23  /*@bfrg@*/

typedef union un_ddrhsspi0_rxfifon{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_rxfifon_t;

/* RDCSDC[0-11] */
#define DDRHSSPI0_RDCSDC0	(DDRHSSPI0.unRDCSDC0.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC0_DEC	(DDRHSSPI0.unRDCSDC0.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC0_RDCSDATA	(DDRHSSPI0.unRDCSDC0.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC1	(DDRHSSPI0.unRDCSDC1.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC1_DEC	(DDRHSSPI0.unRDCSDC1.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC1_RDCSDATA	(DDRHSSPI0.unRDCSDC1.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC2	(DDRHSSPI0.unRDCSDC2.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC2_DEC	(DDRHSSPI0.unRDCSDC2.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC2_RDCSDATA	(DDRHSSPI0.unRDCSDC2.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC3	(DDRHSSPI0.unRDCSDC3.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC3_DEC	(DDRHSSPI0.unRDCSDC3.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC3_RDCSDATA	(DDRHSSPI0.unRDCSDC3.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC4	(DDRHSSPI0.unRDCSDC4.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC4_DEC	(DDRHSSPI0.unRDCSDC4.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC4_RDCSDATA	(DDRHSSPI0.unRDCSDC4.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC5	(DDRHSSPI0.unRDCSDC5.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC5_DEC	(DDRHSSPI0.unRDCSDC5.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC5_RDCSDATA	(DDRHSSPI0.unRDCSDC5.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC6	(DDRHSSPI0.unRDCSDC6.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC6_DEC	(DDRHSSPI0.unRDCSDC6.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC6_RDCSDATA	(DDRHSSPI0.unRDCSDC6.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC7	(DDRHSSPI0.unRDCSDC7.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC7_DEC	(DDRHSSPI0.unRDCSDC7.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC7_RDCSDATA	(DDRHSSPI0.unRDCSDC7.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC8	(DDRHSSPI0.unRDCSDC8.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC8_DEC	(DDRHSSPI0.unRDCSDC8.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC8_RDCSDATA	(DDRHSSPI0.unRDCSDC8.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC9	(DDRHSSPI0.unRDCSDC9.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC9_DEC	(DDRHSSPI0.unRDCSDC9.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC9_RDCSDATA	(DDRHSSPI0.unRDCSDC9.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC10	(DDRHSSPI0.unRDCSDC10.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC10_DEC	(DDRHSSPI0.unRDCSDC10.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC10_RDCSDATA	(DDRHSSPI0.unRDCSDC10.au8Byte[1])  /*@bfbyte@*/

#define DDRHSSPI0_RDCSDC11	(DDRHSSPI0.unRDCSDC11.u16Register)  /*@rg@*/
#define DDRHSSPI0_RDCSDC11_DEC	(DDRHSSPI0.unRDCSDC11.stcField.u1DEC)  /*@bf@*/
#define DDRHSSPI0_RDCSDC11_RDCSDATA	(DDRHSSPI0.unRDCSDC11.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_ddrhsspi0_rdcsdcn_field{
    uint_io16_t		u1DEC:1;
    uint_io16_t		:7;
    uint_io16_t		u8RDCSDATA:8;
}stc_ddrhsspi0_rdcsdcn_field_t;

typedef union un_ddrhsspi0_rdcsdcn{
    uint_io16_t		u16Register;
    stc_ddrhsspi0_rdcsdcn_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_ddrhsspi0_rdcsdcn_t;

/* MID */
#define DDRHSSPI0_MID	(DDRHSSPI0.unMID.u32Register)  /*@rg@*/
#define DDRHSSPI0_MID_MID	DDRHSSPI0_MID  /*@bfrg@*/

typedef union un_ddrhsspi0_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_mid_t;

/* CSPREFETCHADDR */
#define DDRHSSPI0_CSPREFETCHADDR	(DDRHSSPI0.unCSPREFETCHADDR.u32Register)  /*@rg@*/
#define DDRHSSPI0_CSPREFETCHADDR_PRFADDR	DDRHSSPI0_CSPREFETCHADDR  /*@bfrg@*/

typedef union un_ddrhsspi0_csprefetchaddr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_csprefetchaddr_t;

/* SDATASAMPLEPTCNT[0-7] */
#define DDRHSSPI0_SDATASAMPLEPTCNT0	(DDRHSSPI0.unSDATASAMPLEPTCNT0.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT0_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT0.stcField.u6SDATASMPTCNT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTCNT1	(DDRHSSPI0.unSDATASAMPLEPTCNT1.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT1_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT1.stcField.u6SDATASMPTCNT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTCNT2	(DDRHSSPI0.unSDATASAMPLEPTCNT2.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT2_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT2.stcField.u6SDATASMPTCNT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTCNT3	(DDRHSSPI0.unSDATASAMPLEPTCNT3.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT3_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT3.stcField.u6SDATASMPTCNT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTCNT4	(DDRHSSPI0.unSDATASAMPLEPTCNT4.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT4_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT4.stcField.u6SDATASMPTCNT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTCNT5	(DDRHSSPI0.unSDATASAMPLEPTCNT5.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT5_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT5.stcField.u6SDATASMPTCNT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTCNT6	(DDRHSSPI0.unSDATASAMPLEPTCNT6.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT6_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT6.stcField.u6SDATASMPTCNT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTCNT7	(DDRHSSPI0.unSDATASAMPLEPTCNT7.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTCNT7_SDATASMPTCNT	(DDRHSSPI0.unSDATASAMPLEPTCNT7.stcField.u6SDATASMPTCNT)  /*@bf@*/

typedef struct stc_ddrhsspi0_sdatasampleptcntn_field{
    uint_io8_t		u6SDATASMPTCNT:6;
    uint_io8_t		:2;
}stc_ddrhsspi0_sdatasampleptcntn_field_t;

typedef union un_ddrhsspi0_sdatasampleptcntn{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_sdatasampleptcntn_field_t		stcField;
}un_ddrhsspi0_sdatasampleptcntn_t;

/* SDATASAMPLEPTLFT[0-7] */
#define DDRHSSPI0_SDATASAMPLEPTLFT0	(DDRHSSPI0.unSDATASAMPLEPTLFT0.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT0_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT0.stcField.u6SDATASMPTLFT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTLFT1	(DDRHSSPI0.unSDATASAMPLEPTLFT1.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT1_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT1.stcField.u6SDATASMPTLFT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTLFT2	(DDRHSSPI0.unSDATASAMPLEPTLFT2.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT2_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT2.stcField.u6SDATASMPTLFT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTLFT3	(DDRHSSPI0.unSDATASAMPLEPTLFT3.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT3_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT3.stcField.u6SDATASMPTLFT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTLFT4	(DDRHSSPI0.unSDATASAMPLEPTLFT4.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT4_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT4.stcField.u6SDATASMPTLFT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTLFT5	(DDRHSSPI0.unSDATASAMPLEPTLFT5.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT5_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT5.stcField.u6SDATASMPTLFT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTLFT6	(DDRHSSPI0.unSDATASAMPLEPTLFT6.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT6_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT6.stcField.u6SDATASMPTLFT)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTLFT7	(DDRHSSPI0.unSDATASAMPLEPTLFT7.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTLFT7_SDATASMPTLFT	(DDRHSSPI0.unSDATASAMPLEPTLFT7.stcField.u6SDATASMPTLFT)  /*@bf@*/

typedef struct stc_ddrhsspi0_sdatasampleptlftn_field{
    uint_io8_t		u6SDATASMPTLFT:6;
    uint_io8_t		:2;
}stc_ddrhsspi0_sdatasampleptlftn_field_t;

typedef union un_ddrhsspi0_sdatasampleptlftn{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_sdatasampleptlftn_field_t		stcField;
}un_ddrhsspi0_sdatasampleptlftn_t;

/* SDATASAMPLEPTRGH[0-7] */
#define DDRHSSPI0_SDATASAMPLEPTRGH0	(DDRHSSPI0.unSDATASAMPLEPTRGH0.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH0_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH0.stcField.u6SDATASMPTRGH)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTRGH1	(DDRHSSPI0.unSDATASAMPLEPTRGH1.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH1_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH1.stcField.u6SDATASMPTRGH)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTRGH2	(DDRHSSPI0.unSDATASAMPLEPTRGH2.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH2_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH2.stcField.u6SDATASMPTRGH)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTRGH3	(DDRHSSPI0.unSDATASAMPLEPTRGH3.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH3_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH3.stcField.u6SDATASMPTRGH)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTRGH4	(DDRHSSPI0.unSDATASAMPLEPTRGH4.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH4_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH4.stcField.u6SDATASMPTRGH)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTRGH5	(DDRHSSPI0.unSDATASAMPLEPTRGH5.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH5_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH5.stcField.u6SDATASMPTRGH)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTRGH6	(DDRHSSPI0.unSDATASAMPLEPTRGH6.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH6_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH6.stcField.u6SDATASMPTRGH)  /*@bf@*/

#define DDRHSSPI0_SDATASAMPLEPTRGH7	(DDRHSSPI0.unSDATASAMPLEPTRGH7.u8Register)  /*@rg@*/
#define DDRHSSPI0_SDATASAMPLEPTRGH7_SDATASMPTRGH	(DDRHSSPI0.unSDATASAMPLEPTRGH7.stcField.u6SDATASMPTRGH)  /*@bf@*/

typedef struct stc_ddrhsspi0_sdatasampleptrghn_field{
    uint_io8_t		u6SDATASMPTRGH:6;
    uint_io8_t		:2;
}stc_ddrhsspi0_sdatasampleptrghn_field_t;

typedef union un_ddrhsspi0_sdatasampleptrghn{
    uint_io8_t		u8Register;
    stc_ddrhsspi0_sdatasampleptrghn_field_t		stcField;
}un_ddrhsspi0_sdatasampleptrghn_t;

/* DLP */
#define DDRHSSPI0_DLP	(DDRHSSPI0.unDLP.u32Register)  /*@rg@*/
#define DDRHSSPI0_DLP_DLP	(DDRHSSPI0.unDLP.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_ddrhsspi0_dlp_field{
    uint_io32_t		u8DLP:8;
    uint_io32_t		:24;
}stc_ddrhsspi0_dlp_field_t;

typedef union un_ddrhsspi0_dlp{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_dlp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_dlp_t;

/* DLPSAMPLESTATUS */
#define DDRHSSPI0_DLPSAMPLESTATUS	(DDRHSSPI0.unDLPSAMPLESTATUS.u32Register)  /*@rg@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST0L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST0L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST0C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST0C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST0R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST0R)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST1L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST1L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST1C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST1C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST1R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST1R)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST2L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST2L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST2C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST2C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST2R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST2R)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST3L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST3L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST3C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST3C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST3R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST3R)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST4L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST4L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST4C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST4C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST4R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST4R)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST5L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST5L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST5C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST5C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST5R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST5R)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST6L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST6L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST6C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST6C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST6R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST6R)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST7L	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST7L)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST7C	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST7C)  /*@bf@*/
#define DDRHSSPI0_DLPSAMPLESTATUS_DLPSMPLST7R	(DDRHSSPI0.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST7R)  /*@bf@*/

typedef struct stc_ddrhsspi0_dlpsamplestatus_field{
    uint_io32_t		u1DLPSMPLST0L:1;
    uint_io32_t		u1DLPSMPLST0C:1;
    uint_io32_t		u1DLPSMPLST0R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST1L:1;
    uint_io32_t		u1DLPSMPLST1C:1;
    uint_io32_t		u1DLPSMPLST1R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST2L:1;
    uint_io32_t		u1DLPSMPLST2C:1;
    uint_io32_t		u1DLPSMPLST2R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST3L:1;
    uint_io32_t		u1DLPSMPLST3C:1;
    uint_io32_t		u1DLPSMPLST3R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST4L:1;
    uint_io32_t		u1DLPSMPLST4C:1;
    uint_io32_t		u1DLPSMPLST4R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST5L:1;
    uint_io32_t		u1DLPSMPLST5C:1;
    uint_io32_t		u1DLPSMPLST5R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST6L:1;
    uint_io32_t		u1DLPSMPLST6C:1;
    uint_io32_t		u1DLPSMPLST6R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST7L:1;
    uint_io32_t		u1DLPSMPLST7C:1;
    uint_io32_t		u1DLPSMPLST7R:1;
    uint_io32_t		:1;
}stc_ddrhsspi0_dlpsamplestatus_field_t;

typedef union un_ddrhsspi0_dlpsamplestatus{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_dlpsamplestatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_dlpsamplestatus_t;

/* CSCFG */
#define DDRHSSPI0_CSCFG	(DDRHSSPI0.unCSCFG.u32Register)  /*@rg@*/
#define DDRHSSPI0_CSCFG_MBM	(DDRHSSPI0.unCSCFG.stcField.u2MBM)  /*@bf@*/
#define DDRHSSPI0_CSCFG_DDRMODE	(DDRHSSPI0.unCSCFG.stcField.u1DDRMODE)  /*@bf@*/
#define DDRHSSPI0_CSCFG_SSEL0EN	(DDRHSSPI0.unCSCFG.stcField.u1SSEL0EN)  /*@bf@*/
#define DDRHSSPI0_CSCFG_SSEL1EN	(DDRHSSPI0.unCSCFG.stcField.u1SSEL1EN)  /*@bf@*/
#define DDRHSSPI0_CSCFG_SSEL2EN	(DDRHSSPI0.unCSCFG.stcField.u1SSEL2EN)  /*@bf@*/
#define DDRHSSPI0_CSCFG_SSEL3EN	(DDRHSSPI0.unCSCFG.stcField.u1SSEL3EN)  /*@bf@*/
#define DDRHSSPI0_CSCFG_MSEL	(DDRHSSPI0.unCSCFG.stcField.u4MSEL)  /*@bf@*/
#define DDRHSSPI0_CSCFG_ITIMEREN	(DDRHSSPI0.unCSCFG.stcField.u1ITIMEREN)  /*@bf@*/

typedef struct stc_ddrhsspi0_cscfg_field{
    uint_io32_t		:1;
    uint_io32_t		u2MBM:2;
    uint_io32_t		u1DDRMODE:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSEL0EN:1;
    uint_io32_t		u1SSEL1EN:1;
    uint_io32_t		u1SSEL2EN:1;
    uint_io32_t		u1SSEL3EN:1;
    uint_io32_t		:4;
    uint_io32_t		u4MSEL:4;
    uint_io32_t		:3;
    uint_io32_t		u1ITIMEREN:1;
    uint_io32_t		:8;
}stc_ddrhsspi0_cscfg_field_t;

typedef union un_ddrhsspi0_cscfg{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_cscfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_cscfg_t;

/* CSITIME */
#define DDRHSSPI0_CSITIME	(DDRHSSPI0.unCSITIME.u32Register)  /*@rg@*/
#define DDRHSSPI0_CSITIME_ITIME	(DDRHSSPI0.unCSITIME.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_ddrhsspi0_csitime_field{
    uint_io32_t		u16ITIME:16;
    uint_io32_t		:16;
}stc_ddrhsspi0_csitime_field_t;

typedef union un_ddrhsspi0_csitime{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_csitime_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_csitime_t;

/* CSAEXT */
#define DDRHSSPI0_CSAEXT	(DDRHSSPI0.unCSAEXT.u32Register)  /*@rg@*/
#define DDRHSSPI0_CSAEXT_AEXT	(DDRHSSPI0.unCSAEXT.stcField.u19AEXT)  /*@bf@*/

typedef struct stc_ddrhsspi0_csaext_field{
    uint_io32_t		:13;
    uint_io32_t		u19AEXT:19;
}stc_ddrhsspi0_csaext_field_t;

typedef union un_ddrhsspi0_csaext{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_csaext_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_csaext_t;

/* CSPBUFFERCFG */
#define DDRHSSPI0_CSPBUFFERCFG	(DDRHSSPI0.unCSPBUFFERCFG.u32Register)  /*@rg@*/
#define DDRHSSPI0_CSPBUFFERCFG_PBFLSH	(DDRHSSPI0.unCSPBUFFERCFG.stcField.u1PBFLSH)  /*@bf@*/

typedef struct stc_ddrhsspi0_cspbuffercfg_field{
    uint_io32_t		:19;
    uint_io32_t		u1PBFLSH:1;
    uint_io32_t		:12;
}stc_ddrhsspi0_cspbuffercfg_field_t;

typedef union un_ddrhsspi0_cspbuffercfg{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_cspbuffercfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_cspbuffercfg_t;

/* CSPBUFFERSTATUS */
#define DDRHSSPI0_CSPBUFFERSTATUS	(DDRHSSPI0.unCSPBUFFERSTATUS.u32Register)  /*@rg@*/
#define DDRHSSPI0_CSPBUFFERSTATUS_PBLEVEL	(DDRHSSPI0.unCSPBUFFERSTATUS.stcField.u6PBLEVEL)  /*@bf@*/
#define DDRHSSPI0_CSPBUFFERSTATUS_SSACTIVE	(DDRHSSPI0.unCSPBUFFERSTATUS.stcField.u1SSACTIVE)  /*@bf@*/

typedef struct stc_ddrhsspi0_cspbufferstatus_field{
    uint_io32_t		u6PBLEVEL:6;
    uint_io32_t		:10;
    uint_io32_t		u1SSACTIVE:1;
    uint_io32_t		:15;
}stc_ddrhsspi0_cspbufferstatus_field_t;

typedef union un_ddrhsspi0_cspbufferstatus{
    uint_io32_t		u32Register;
    stc_ddrhsspi0_cspbufferstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ddrhsspi0_cspbufferstatus_t;


typedef struct stc_ddrhsspi0{
    un_ddrhsspi0_mctrl_t	unMCTRL;	/* 0x00000000 */
    un_ddrhsspi0_pccn_t	unPCC0;	/* 0x00000004 */
    un_ddrhsspi0_pccn_t	unPCC1;	/* 0x00000008 */
    un_ddrhsspi0_pccn_t	unPCC2;	/* 0x0000000C */
    un_ddrhsspi0_pccn_t	unPCC3;	/* 0x00000010 */
    un_ddrhsspi0_txf_t	unTXF;	/* 0x00000014 */
    un_ddrhsspi0_txe_t	unTXE;	/* 0x00000018 */
    un_ddrhsspi0_txc_t	unTXC;	/* 0x0000001C */
    un_ddrhsspi0_rxf_t	unRXF;	/* 0x00000020 */
    un_ddrhsspi0_rxe_t	unRXE;	/* 0x00000024 */
    un_ddrhsspi0_rxc_t	unRXC;	/* 0x00000028 */
    un_ddrhsspi0_faultf_t	unFAULTF;	/* 0x0000002C */
    un_ddrhsspi0_faultc_t	unFAULTC;	/* 0x00000030 */
    un_ddrhsspi0_dmcfg_t	unDMCFG;	/* 0x00000034 */
    un_ddrhsspi0_dmaen_t	unDMAEN;	/* 0x00000035 */
    uint_io8_t	au8Reserved0[2];	/* 0x00000036 */
    un_ddrhsspi0_dmstart_t	unDMSTART;	/* 0x00000038 */
    uint_io8_t	au8Reserved1[1];	/* 0x00000039 */
    un_ddrhsspi0_dmpsel_t	unDMPSEL;	/* 0x0000003A */
    un_ddrhsspi0_dmtrp_t	unDMTRP;	/* 0x0000003B */
    un_ddrhsspi0_dmbcc_t	unDMBCC;	/* 0x0000003C */
    un_ddrhsspi0_dmbcs_t	unDMBCS;	/* 0x0000003E */
    un_ddrhsspi0_dmfifostatus_t	unDMFIFOSTATUS;	/* 0x00000040 */
    un_ddrhsspi0_dmfifocfg_t	unDMFIFOCFG;	/* 0x00000044 */
    un_ddrhsspi0_txfifon_t	unTXFIFO0;	/* 0x00000048 */
    un_ddrhsspi0_txfifon_t	unTXFIFO1;	/* 0x0000004C */
    un_ddrhsspi0_txfifon_t	unTXFIFO2;	/* 0x00000050 */
    un_ddrhsspi0_txfifon_t	unTXFIFO3;	/* 0x00000054 */
    un_ddrhsspi0_txfifon_t	unTXFIFO4;	/* 0x00000058 */
    un_ddrhsspi0_txfifon_t	unTXFIFO5;	/* 0x0000005C */
    un_ddrhsspi0_txfifon_t	unTXFIFO6;	/* 0x00000060 */
    un_ddrhsspi0_txfifon_t	unTXFIFO7;	/* 0x00000064 */
    un_ddrhsspi0_txfifon_t	unTXFIFO8;	/* 0x00000068 */
    un_ddrhsspi0_txfifon_t	unTXFIFO9;	/* 0x0000006C */
    un_ddrhsspi0_txfifon_t	unTXFIFO10;	/* 0x00000070 */
    un_ddrhsspi0_txfifon_t	unTXFIFO11;	/* 0x00000074 */
    un_ddrhsspi0_txfifon_t	unTXFIFO12;	/* 0x00000078 */
    un_ddrhsspi0_txfifon_t	unTXFIFO13;	/* 0x0000007C */
    un_ddrhsspi0_txfifon_t	unTXFIFO14;	/* 0x00000080 */
    un_ddrhsspi0_txfifon_t	unTXFIFO15;	/* 0x00000084 */
    un_ddrhsspi0_txfifon_t	unTXFIFO16;	/* 0x00000088 */
    un_ddrhsspi0_txfifon_t	unTXFIFO17;	/* 0x0000008C */
    un_ddrhsspi0_txfifon_t	unTXFIFO18;	/* 0x00000090 */
    un_ddrhsspi0_txfifon_t	unTXFIFO19;	/* 0x00000094 */
    un_ddrhsspi0_txfifon_t	unTXFIFO20;	/* 0x00000098 */
    un_ddrhsspi0_txfifon_t	unTXFIFO21;	/* 0x0000009C */
    un_ddrhsspi0_txfifon_t	unTXFIFO22;	/* 0x000000A0 */
    un_ddrhsspi0_txfifon_t	unTXFIFO23;	/* 0x000000A4 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO0;	/* 0x000000A8 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO1;	/* 0x000000AC */
    un_ddrhsspi0_rxfifon_t	unRXFIFO2;	/* 0x000000B0 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO3;	/* 0x000000B4 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO4;	/* 0x000000B8 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO5;	/* 0x000000BC */
    un_ddrhsspi0_rxfifon_t	unRXFIFO6;	/* 0x000000C0 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO7;	/* 0x000000C4 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO8;	/* 0x000000C8 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO9;	/* 0x000000CC */
    un_ddrhsspi0_rxfifon_t	unRXFIFO10;	/* 0x000000D0 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO11;	/* 0x000000D4 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO12;	/* 0x000000D8 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO13;	/* 0x000000DC */
    un_ddrhsspi0_rxfifon_t	unRXFIFO14;	/* 0x000000E0 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO15;	/* 0x000000E4 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO16;	/* 0x000000E8 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO17;	/* 0x000000EC */
    un_ddrhsspi0_rxfifon_t	unRXFIFO18;	/* 0x000000F0 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO19;	/* 0x000000F4 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO20;	/* 0x000000F8 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO21;	/* 0x000000FC */
    un_ddrhsspi0_rxfifon_t	unRXFIFO22;	/* 0x00000100 */
    un_ddrhsspi0_rxfifon_t	unRXFIFO23;	/* 0x00000104 */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC0;	/* 0x00000108 */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC1;	/* 0x0000010A */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC2;	/* 0x0000010C */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC3;	/* 0x0000010E */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC4;	/* 0x00000110 */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC5;	/* 0x00000112 */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC6;	/* 0x00000114 */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC7;	/* 0x00000116 */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC8;	/* 0x00000118 */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC9;	/* 0x0000011A */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC10;	/* 0x0000011C */
    un_ddrhsspi0_rdcsdcn_t	unRDCSDC11;	/* 0x0000011E */
    un_ddrhsspi0_mid_t	unMID;	/* 0x00000120 */
    un_ddrhsspi0_csprefetchaddr_t	unCSPREFETCHADDR;	/* 0x00000124 */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT0;	/* 0x00000128 */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT1;	/* 0x00000129 */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT2;	/* 0x0000012A */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT3;	/* 0x0000012B */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT4;	/* 0x0000012C */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT5;	/* 0x0000012D */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT6;	/* 0x0000012E */
    un_ddrhsspi0_sdatasampleptcntn_t	unSDATASAMPLEPTCNT7;	/* 0x0000012F */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT0;	/* 0x00000130 */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT1;	/* 0x00000131 */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT2;	/* 0x00000132 */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT3;	/* 0x00000133 */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT4;	/* 0x00000134 */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT5;	/* 0x00000135 */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT6;	/* 0x00000136 */
    un_ddrhsspi0_sdatasampleptlftn_t	unSDATASAMPLEPTLFT7;	/* 0x00000137 */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH0;	/* 0x00000138 */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH1;	/* 0x00000139 */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH2;	/* 0x0000013A */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH3;	/* 0x0000013B */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH4;	/* 0x0000013C */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH5;	/* 0x0000013D */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH6;	/* 0x0000013E */
    un_ddrhsspi0_sdatasampleptrghn_t	unSDATASAMPLEPTRGH7;	/* 0x0000013F */
    uint_io8_t	au8Reserved2[4];	/* 0x00000140 */
    un_ddrhsspi0_dlp_t	unDLP;	/* 0x00000144 */
    un_ddrhsspi0_dlpsamplestatus_t	unDLPSAMPLESTATUS;	/* 0x00000148 */
    un_ddrhsspi0_cscfg_t	unCSCFG;	/* 0x0000014C */
    un_ddrhsspi0_csitime_t	unCSITIME;	/* 0x00000150 */
    un_ddrhsspi0_csaext_t	unCSAEXT;	/* 0x00000154 */
    un_ddrhsspi0_cspbuffercfg_t	unCSPBUFFERCFG;	/* 0x00000158 */
    un_ddrhsspi0_cspbufferstatus_t	unCSPBUFFERSTATUS;	/* 0x0000015C */
    uint_io8_t	au8Reserved3[672];	/* 0x00000160 */
}stc_ddrhsspi0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_ddrhsspi0_t	stcDDRHSSPI0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_DDRHSSPI_H */
