/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SRCFG_H
#define __S6J3200_SRCFG_H

#include "s6j3200io_basetypes.h"

/* SRCFG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SRCFG	stcSRCFG
#else /* __IO_DEFINE */
#define SRCFG	(*((volatile stc_srcfg_t*)0xB0108000))
#endif /* __IO_DEFINE */

/* CFG0 */
#define SRCFG_CFG0	(SRCFG.unCFG0.u32Register)  /*@rg@*/
#define SRCFG_CFG0_ERRECC	(SRCFG.unCFG0.stcField.u7ERRECC)  /*@bf@*/
#define SRCFG_CFG0_LOCK_STATUS	(SRCFG.unCFG0.stcField.u1LOCK_STATUS)  /*@bf@*/
#define SRCFG_CFG0_WRWAIT	(SRCFG.unCFG0.stcField.u2WRWAIT)  /*@bf@*/
#define SRCFG_CFG0_RDWAIT	(SRCFG.unCFG0.stcField.u2RDWAIT)  /*@bf@*/

typedef struct stc_srcfg_cfg0_field{
    uint_io32_t		u7ERRECC:7;
    uint_io32_t		:1;
    uint_io32_t		u1LOCK_STATUS:1;
    uint_io32_t		:7;
    uint_io32_t		u2WRWAIT:2;
    uint_io32_t		:6;
    uint_io32_t		u2RDWAIT:2;
    uint_io32_t		:6;
}stc_srcfg_cfg0_field_t;

typedef union un_srcfg_cfg0{
    uint_io32_t		u32Register;
    stc_srcfg_cfg0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_cfg0_t;

/* CFG1 */
#define SRCFG_CFG1	(SRCFG.unCFG1.u32Register)  /*@rg@*/
#define SRCFG_CFG1_ERRBIT	SRCFG_CFG1  /*@bfrg@*/

typedef union un_srcfg_cfg1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_cfg1_t;

/* CFG2 */
#define SRCFG_CFG2	(SRCFG.unCFG2.u32Register)  /*@rg@*/
#define SRCFG_CFG2_BYPASSEN	(SRCFG.unCFG2.stcField.u1BYPASSEN)  /*@bf@*/

typedef struct stc_srcfg_cfg2_field{
    uint_io32_t		u1BYPASSEN:1;
    uint_io32_t		:31;
}stc_srcfg_cfg2_field_t;

typedef union un_srcfg_cfg2{
    uint_io32_t		u32Register;
    stc_srcfg_cfg2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_cfg2_t;

/* KEY */
#define SRCFG_KEY	(SRCFG.unKEY.u32Register)  /*@rg@*/
#define SRCFG_KEY_UNLOCK	SRCFG_KEY  /*@bfrg@*/

typedef union un_srcfg_key{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_key_t;

/* ERRFLG */
#define SRCFG_ERRFLG	(SRCFG.unERRFLG.u32Register)  /*@rg@*/
#define SRCFG_ERRFLG_SECFLG	(SRCFG.unERRFLG.stcField.u1SECFLG)  /*@bf@*/
#define SRCFG_ERRFLG_SECCLR	(SRCFG.unERRFLG.stcField.u1SECCLR)  /*@bf@*/

typedef struct stc_srcfg_errflg_field{
    uint_io32_t		u1SECFLG:1;
    uint_io32_t		:7;
    uint_io32_t		u1SECCLR:1;
    uint_io32_t		:23;
}stc_srcfg_errflg_field_t;

typedef union un_srcfg_errflg{
    uint_io32_t		u32Register;
    stc_srcfg_errflg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_errflg_t;

/* INTE */
#define SRCFG_INTE	(SRCFG.unINTE.u32Register)  /*@rg@*/
#define SRCFG_INTE_SEC_INT_EN	(SRCFG.unINTE.stcField.u1SEC_INT_EN)  /*@bf@*/

typedef struct stc_srcfg_inte_field{
    uint_io32_t		u1SEC_INT_EN:1;
    uint_io32_t		:31;
}stc_srcfg_inte_field_t;

typedef union un_srcfg_inte{
    uint_io32_t		u32Register;
    stc_srcfg_inte_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_inte_t;

/* ECCE */
#define SRCFG_ECCE	(SRCFG.unECCE.u32Register)  /*@rg@*/
#define SRCFG_ECCE_ECCEN	(SRCFG.unECCE.stcField.u1ECCEN)  /*@bf@*/

typedef struct stc_srcfg_ecce_field{
    uint_io32_t		u1ECCEN:1;
    uint_io32_t		:31;
}stc_srcfg_ecce_field_t;

typedef union un_srcfg_ecce{
    uint_io32_t		u32Register;
    stc_srcfg_ecce_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_ecce_t;

/* ERRADR */
#define SRCFG_ERRADR	(SRCFG.unERRADR.u32Register)  /*@rg@*/
#define SRCFG_ERRADR_ERRADDR	SRCFG_ERRADR  /*@bfrg@*/

typedef union un_srcfg_erradr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_erradr_t;

/* MID */
#define SRCFG_MID	(SRCFG.unMID.u32Register)  /*@rg@*/
#define SRCFG_MID_MID	SRCFG_MID  /*@bfrg@*/

typedef union un_srcfg_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_srcfg_mid_t;


typedef struct stc_srcfg{
    un_srcfg_cfg0_t	unCFG0;	/* 0x00000000 */
    un_srcfg_cfg1_t	unCFG1;	/* 0x00000004 */
    un_srcfg_cfg2_t	unCFG2;	/* 0x00000008 */
    un_srcfg_key_t	unKEY;	/* 0x0000000C */
    un_srcfg_errflg_t	unERRFLG;	/* 0x00000010 */
    un_srcfg_inte_t	unINTE;	/* 0x00000014 */
    un_srcfg_ecce_t	unECCE;	/* 0x00000018 */
    uint_io8_t	au8Reserved0[4];	/* 0x0000001C */
    un_srcfg_erradr_t	unERRADR;	/* 0x00000020 */
    un_srcfg_mid_t	unMID;	/* 0x00000024 */
    uint_io8_t	au8Reserved1[216];	/* 0x00000028 */
}stc_srcfg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_srcfg_t	stcSRCFG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 256(0x100) bytes */


#endif /* __S6J3200_SRCFG_H */
