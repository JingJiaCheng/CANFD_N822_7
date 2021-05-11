/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_PRGCRC_H
#define __S6J3200_PRGCRC_H

#include "s6j3200io_basetypes.h"

/* CRC0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CRC0	stcCRC0
#else /* __IO_DEFINE */
#define CRC0	(*((volatile stc_crc0_t*)0xB8018000))
#endif /* __IO_DEFINE */

/* POLY */
#define CRC0_POLY	(CRC0.unPOLY.u32Register)  /*@rg@*/
#define CRC0_POLY_POLY	CRC0_POLY  /*@bfrg@*/

typedef union un_crc0_poly{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crc0_poly_t;

/* SEED */
#define CRC0_SEED	(CRC0.unSEED.u32Register)  /*@rg@*/
#define CRC0_SEED_SEED	CRC0_SEED  /*@bfrg@*/

typedef union un_crc0_seed{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crc0_seed_t;

/* FXOR */
#define CRC0_FXOR	(CRC0.unFXOR.u32Register)  /*@rg@*/
#define CRC0_FXOR_FXOR	CRC0_FXOR  /*@bfrg@*/

typedef union un_crc0_fxor{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crc0_fxor_t;

/* CFG */
#define CRC0_CFG	(CRC0.unCFG.u32Register)  /*@rg@*/
#define CRC0_CFG_CIRQCLR	(CRC0.unCFG.stcField.u1CIRQCLR)  /*@bf@*/
#define CRC0_CFG_ROBYT	(CRC0.unCFG.stcField.u1ROBYT)  /*@bf@*/
#define CRC0_CFG_ROBIT	(CRC0.unCFG.stcField.u1ROBIT)  /*@bf@*/
#define CRC0_CFG_RIBYT	(CRC0.unCFG.stcField.u1RIBYT)  /*@bf@*/
#define CRC0_CFG_RIBIT	(CRC0.unCFG.stcField.u1RIBIT)  /*@bf@*/
#define CRC0_CFG_LEN	(CRC0.unCFG.stcField.u6LEN)  /*@bf@*/
#define CRC0_CFG_SZ	(CRC0.unCFG.stcField.u2SZ)  /*@bf@*/
#define CRC0_CFG_CIRQ	(CRC0.unCFG.stcField.u1CIRQ)  /*@bf@*/
#define CRC0_CFG_CIEN	(CRC0.unCFG.stcField.u1CIEN)  /*@bf@*/
#define CRC0_CFG_CDEN	(CRC0.unCFG.stcField.u1CDEN)  /*@bf@*/
#define CRC0_CFG_LOCK	(CRC0.unCFG.stcField.u1LOCK)  /*@bf@*/

typedef struct stc_crc0_cfg_field{
    uint_io32_t		u1CIRQCLR:1;
    uint_io32_t		:7;
    uint_io32_t		u1ROBYT:1;
    uint_io32_t		u1ROBIT:1;
    uint_io32_t		u1RIBYT:1;
    uint_io32_t		u1RIBIT:1;
    uint_io32_t		:4;
    uint_io32_t		u6LEN:6;
    uint_io32_t		u2SZ:2;
    uint_io32_t		u1CIRQ:1;
    uint_io32_t		u1CIEN:1;
    uint_io32_t		u1CDEN:1;
    uint_io32_t		:1;
    uint_io32_t		u1LOCK:1;
    uint_io32_t		:3;
}stc_crc0_cfg_field_t;

typedef union un_crc0_cfg{
    uint_io32_t		u32Register;
    stc_crc0_cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crc0_cfg_t;

/* WR */
#define CRC0_WR	(CRC0.unWR.u32Register)  /*@rg@*/
#define CRC0_WR_CRCWR	CRC0_WR  /*@bfrg@*/

typedef union un_crc0_wr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crc0_wr_t;

/* RD */
#define CRC0_RD	(CRC0.unRD.u32Register)  /*@rg@*/
#define CRC0_RD_CRCRD	CRC0_RD  /*@bfrg@*/

typedef union un_crc0_rd{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_crc0_rd_t;


typedef struct stc_crc0{
    un_crc0_poly_t	unPOLY;	/* 0x00000000 */
    un_crc0_seed_t	unSEED;	/* 0x00000004 */
    un_crc0_fxor_t	unFXOR;	/* 0x00000008 */
    un_crc0_cfg_t	unCFG;	/* 0x0000000C */
    un_crc0_wr_t	unWR;	/* 0x00000010 */
    un_crc0_rd_t	unRD;	/* 0x00000014 */
    uint_io8_t	au8Reserved0[1000];	/* 0x00000018 */
}stc_crc0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_crc0_t	stcCRC0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_PRGCRC_H */
