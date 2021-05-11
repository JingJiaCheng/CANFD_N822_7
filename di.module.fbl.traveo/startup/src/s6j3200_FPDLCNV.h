/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_FPDLCNV_H
#define __S6J3200_FPDLCNV_H

#include "s6j3200io_basetypes.h"

/* FPDLCNV base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define FPDLCNV	stcFPDLCNV
#else /* __IO_DEFINE */
#define FPDLCNV	(*((volatile stc_fpdlcnv_t*)0xB4850000))
#endif /* __IO_DEFINE */

/* UNLOCK */
#define FPDLCNV_UNLOCK	(FPDLCNV.unUNLOCK.u32Register)  /*@rg@*/
#define FPDLCNV_UNLOCK_UNLOCK	FPDLCNV_UNLOCK  /*@bfrg@*/

typedef union un_fpdlcnv_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_fpdlcnv_unlock_t;

/* CTRL0 */
#define FPDLCNV_CTRL0	(FPDLCNV.unCTRL0.u32Register)  /*@rg@*/
#define FPDLCNV_CTRL0_RST	(*(volatile uint_io8_t*)0xB7A80020)  /*@bfbba@*/
#define FPDLCNV_CTRL0_PLLRST	(*(volatile uint_io8_t*)0xB7A80024)  /*@bfbba@*/
#define FPDLCNV_CTRL0_ENABLE	(*(volatile uint_io8_t*)0xB7A80028)  /*@bfbba@*/
#define FPDLCNV_CTRL0_PWD12	(*(volatile uint_io8_t*)0xB7A80030)  /*@bfbba@*/
#define FPDLCNV_CTRL0_PWD33	(*(volatile uint_io8_t*)0xB7A80038)  /*@bfbba@*/

typedef struct stc_fpdlcnv_ctrl0_field{
    uint_io32_t		u1RST:1;
    uint_io32_t		:3;
    uint_io32_t		u1PLLRST:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENABLE:1;
    uint_io32_t		:7;
    uint_io32_t		u1PWD12:1;
    uint_io32_t		:7;
    uint_io32_t		u1PWD33:1;
    uint_io32_t		:7;
}stc_fpdlcnv_ctrl0_field_t;

typedef union un_fpdlcnv_ctrl0{
    uint_io32_t		u32Register;
    stc_fpdlcnv_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_fpdlcnv_ctrl0_t;

/* CTRL1 */
#define FPDLCNV_CTRL1	(FPDLCNV.unCTRL1.u32Register)  /*@rg@*/
#define FPDLCNV_CTRL1_VRM	(*(volatile uint_io8_t*)0xB7A80058)  /*@bfbba@*/

typedef struct stc_fpdlcnv_ctrl1_field{
    uint_io32_t		:24;
    uint_io32_t		u1VRM:1;
    uint_io32_t		:7;
}stc_fpdlcnv_ctrl1_field_t;

typedef union un_fpdlcnv_ctrl1{
    uint_io32_t		u32Register;
    stc_fpdlcnv_ctrl1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_fpdlcnv_ctrl1_t;

/* CH_SEL */
#define FPDLCNV_CH_SEL	(FPDLCNV.unCH_SEL.u32Register)  /*@rg@*/
#define FPDLCNV_CH_SEL_CH	(*(volatile uint_io8_t*)0xB7A80080)  /*@bfbba@*/

typedef struct stc_fpdlcnv_ch_sel_field{
    uint_io32_t		u1CH:1;
    uint_io32_t		:31;
}stc_fpdlcnv_ch_sel_field_t;

typedef union un_fpdlcnv_ch_sel{
    uint_io32_t		u32Register;
    stc_fpdlcnv_ch_sel_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_fpdlcnv_ch_sel_t;

/* TX[0-4]_CONF */
#define FPDLCNV_TX0_CONF	(FPDLCNV.unTX0_CONF.u32Register)  /*@rg@*/
#define FPDLCNV_TX0_CONF_RX_NUM	(FPDLCNV.unTX0_CONF.stcField.u3RX_NUM)  /*@bf@*/
#define FPDLCNV_TX0_CONF_INV	(*(volatile uint_io8_t*)0xB7A800A4)  /*@bfbba@*/
#define FPDLCNV_TX0_CONF_IMD_DAT	(FPDLCNV.unTX0_CONF.stcField.u7IMD_DAT)  /*@bf@*/

#define FPDLCNV_TX1_CONF	(FPDLCNV.unTX1_CONF.u32Register)  /*@rg@*/
#define FPDLCNV_TX1_CONF_RX_NUM	(FPDLCNV.unTX1_CONF.stcField.u3RX_NUM)  /*@bf@*/
#define FPDLCNV_TX1_CONF_INV	(*(volatile uint_io8_t*)0xB7A800C4)  /*@bfbba@*/
#define FPDLCNV_TX1_CONF_IMD_DAT	(FPDLCNV.unTX1_CONF.stcField.u7IMD_DAT)  /*@bf@*/

#define FPDLCNV_TX2_CONF	(FPDLCNV.unTX2_CONF.u32Register)  /*@rg@*/
#define FPDLCNV_TX2_CONF_RX_NUM	(FPDLCNV.unTX2_CONF.stcField.u3RX_NUM)  /*@bf@*/
#define FPDLCNV_TX2_CONF_INV	(*(volatile uint_io8_t*)0xB7A800E4)  /*@bfbba@*/
#define FPDLCNV_TX2_CONF_IMD_DAT	(FPDLCNV.unTX2_CONF.stcField.u7IMD_DAT)  /*@bf@*/

#define FPDLCNV_TX3_CONF	(FPDLCNV.unTX3_CONF.u32Register)  /*@rg@*/
#define FPDLCNV_TX3_CONF_RX_NUM	(FPDLCNV.unTX3_CONF.stcField.u3RX_NUM)  /*@bf@*/
#define FPDLCNV_TX3_CONF_INV	(*(volatile uint_io8_t*)0xB7A80104)  /*@bfbba@*/
#define FPDLCNV_TX3_CONF_IMD_DAT	(FPDLCNV.unTX3_CONF.stcField.u7IMD_DAT)  /*@bf@*/

#define FPDLCNV_TX4_CONF	(FPDLCNV.unTX4_CONF.u32Register)  /*@rg@*/
#define FPDLCNV_TX4_CONF_RX_NUM	(FPDLCNV.unTX4_CONF.stcField.u3RX_NUM)  /*@bf@*/
#define FPDLCNV_TX4_CONF_INV	(*(volatile uint_io8_t*)0xB7A80124)  /*@bfbba@*/
#define FPDLCNV_TX4_CONF_IMD_DAT	(FPDLCNV.unTX4_CONF.stcField.u7IMD_DAT)  /*@bf@*/

typedef struct stc_fpdlcnv_txn_conf_field{
    uint_io32_t		u3RX_NUM:3;
    uint_io32_t		:1;
    uint_io32_t		u1INV:1;
    uint_io32_t		:3;
    uint_io32_t		u7IMD_DAT:7;
    uint_io32_t		:17;
}stc_fpdlcnv_txn_conf_field_t;

typedef union un_fpdlcnv_txn_conf{
    uint_io32_t		u32Register;
    stc_fpdlcnv_txn_conf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_fpdlcnv_txn_conf_t;

/* GDCCR */
#define FPDLCNV_GDCCR	(FPDLCNV.unGDCCR.u32Register)  /*@rg@*/
#define FPDLCNV_GDCCR_GRST	(*(volatile uint_io8_t*)0xB7A80200)  /*@bfbba@*/

typedef struct stc_fpdlcnv_gdccr_field{
    uint_io32_t		u1GRST:1;
    uint_io32_t		:31;
}stc_fpdlcnv_gdccr_field_t;

typedef union un_fpdlcnv_gdccr{
    uint_io32_t		u32Register;
    stc_fpdlcnv_gdccr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_fpdlcnv_gdccr_t;


typedef struct stc_fpdlcnv{
    un_fpdlcnv_unlock_t	unUNLOCK;	/* 0x00000000 */
    un_fpdlcnv_ctrl0_t	unCTRL0;	/* 0x00000004 */
    un_fpdlcnv_ctrl1_t	unCTRL1;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[4];	/* 0x0000000C */
    un_fpdlcnv_ch_sel_t	unCH_SEL;	/* 0x00000010 */
    un_fpdlcnv_txn_conf_t	unTX0_CONF;	/* 0x00000014 */
    un_fpdlcnv_txn_conf_t	unTX1_CONF;	/* 0x00000018 */
    un_fpdlcnv_txn_conf_t	unTX2_CONF;	/* 0x0000001C */
    un_fpdlcnv_txn_conf_t	unTX3_CONF;	/* 0x00000020 */
    un_fpdlcnv_txn_conf_t	unTX4_CONF;	/* 0x00000024 */
    uint_io8_t	au8Reserved1[24];	/* 0x00000028 */
    un_fpdlcnv_gdccr_t	unGDCCR;	/* 0x00000040 */
    uint_io8_t	au8Reserved2[956];	/* 0x00000044 */
}stc_fpdlcnv_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_fpdlcnv_t	stcFPDLCNV;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_FPDLCNV_H */
