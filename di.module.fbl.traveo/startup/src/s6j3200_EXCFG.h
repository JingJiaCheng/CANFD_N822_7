/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_EXCFG_H
#define __S6J3200_EXCFG_H

#include "s6j3200io_basetypes.h"

/* EXCFG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define EXCFG	stcEXCFG
#else /* __IO_DEFINE */
#define EXCFG	(*((volatile stc_excfg_t*)0xFFFEFC00))
#endif /* __IO_DEFINE */

/* UNLOCK */
#define EXCFG_UNLOCK	(EXCFG.unUNLOCK.u32Register)  /*@rg@*/
#define EXCFG_UNLOCK_UNLOCK	EXCFG_UNLOCK  /*@bfrg@*/

typedef union un_excfg_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_unlock_t;

/* CNFG */
#define EXCFG_CNFG	(EXCFG.unCNFG.u32Register)  /*@rg@*/
#define EXCFG_CNFG_LST	(EXCFG.unCNFG.stcField.u1LST)  /*@bf@*/
#define EXCFG_CNFG_SWAP	(EXCFG.unCNFG.stcField.u1SWAP)  /*@bf@*/

typedef struct stc_excfg_cnfg_field{
    uint_io32_t		u1LST:1;
    uint_io32_t		:7;
    uint_io32_t		u1SWAP:1;
    uint_io32_t		:23;
}stc_excfg_cnfg_field_t;

typedef union un_excfg_cnfg{
    uint_io32_t		u32Register;
    stc_excfg_cnfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_cnfg_t;

/* UNDEFINACT */
#define EXCFG_UNDEFINACT	(EXCFG.unUNDEFINACT.u32Register)  /*@rg@*/
#define EXCFG_UNDEFINACT_UNDEFVEC	EXCFG_UNDEFINACT  /*@bfrg@*/

typedef union un_excfg_undefinact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_undefinact_t;

/* SVCINACT */
#define EXCFG_SVCINACT	(EXCFG.unSVCINACT.u32Register)  /*@rg@*/
#define EXCFG_SVCINACT_SVCVEC	EXCFG_SVCINACT  /*@bfrg@*/

typedef union un_excfg_svcinact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_svcinact_t;

/* PABORTINACT */
#define EXCFG_PABORTINACT	(EXCFG.unPABORTINACT.u32Register)  /*@rg@*/
#define EXCFG_PABORTINACT_PABORTVEC	EXCFG_PABORTINACT  /*@bfrg@*/

typedef union un_excfg_pabortinact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_pabortinact_t;

/* DABORTINACT */
#define EXCFG_DABORTINACT	(EXCFG.unDABORTINACT.u32Register)  /*@rg@*/
#define EXCFG_DABORTINACT_DABORTVEC	EXCFG_DABORTINACT  /*@bfrg@*/

typedef union un_excfg_dabortinact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_dabortinact_t;

/* UNDEFACT */
#define EXCFG_UNDEFACT	(EXCFG.unUNDEFACT.u32Register)  /*@rg@*/
#define EXCFG_UNDEFACT_UNDEFVEC	EXCFG_UNDEFACT  /*@bfrg@*/

typedef union un_excfg_undefact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_undefact_t;

/* SVCACT */
#define EXCFG_SVCACT	(EXCFG.unSVCACT.u32Register)  /*@rg@*/
#define EXCFG_SVCACT_SVCVEC	EXCFG_SVCACT  /*@bfrg@*/

typedef union un_excfg_svcact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_svcact_t;

/* PABORTACT */
#define EXCFG_PABORTACT	(EXCFG.unPABORTACT.u32Register)  /*@rg@*/
#define EXCFG_PABORTACT_PABORTVEC	EXCFG_PABORTACT  /*@bfrg@*/

typedef union un_excfg_pabortact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_pabortact_t;

/* DABORTACT */
#define EXCFG_DABORTACT	(EXCFG.unDABORTACT.u32Register)  /*@rg@*/
#define EXCFG_DABORTACT_DABORTVEC	EXCFG_DABORTACT  /*@bfrg@*/

typedef union un_excfg_dabortact{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_excfg_dabortact_t;


typedef struct stc_excfg{
    uint_io8_t	au8Reserved0[856];	/* 0x00000000 */
    un_excfg_unlock_t	unUNLOCK;	/* 0x00000358 */
    uint_io8_t	au8Reserved1[4];	/* 0x0000035C */
    un_excfg_cnfg_t	unCNFG;	/* 0x00000360 */
    uint_io8_t	au8Reserved2[32];	/* 0x00000364 */
    un_excfg_undefinact_t	unUNDEFINACT;	/* 0x00000384 */
    un_excfg_svcinact_t	unSVCINACT;	/* 0x00000388 */
    un_excfg_pabortinact_t	unPABORTINACT;	/* 0x0000038C */
    un_excfg_dabortinact_t	unDABORTINACT;	/* 0x00000390 */
    uint_io8_t	au8Reserved3[48];	/* 0x00000394 */
    un_excfg_undefact_t	unUNDEFACT;	/* 0x000003C4 */
    un_excfg_svcact_t	unSVCACT;	/* 0x000003C8 */
    un_excfg_pabortact_t	unPABORTACT;	/* 0x000003CC */
    un_excfg_dabortact_t	unDABORTACT;	/* 0x000003D0 */
    uint_io8_t	au8Reserved4[44];	/* 0x000003D4 */
}stc_excfg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_excfg_t	stcEXCFG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_EXCFG_H */
