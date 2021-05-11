/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_BTSEL_H
#define __S6J3200_BTSEL_H

#include "s6j3200io_basetypes.h"

/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT	stcBT
#else /* __IO_DEFINE */
#define BT	(*((volatile stc_bt_t*)0xB4808030))
#endif /* __IO_DEFINE */

/* BTSEL01 */
#define BT_BTSEL01	(BT.unBTSEL01.u32Register)  /*@rg@*/
#define BT_BTSEL01_BTSEL01	(BT.unBTSEL01.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_btsel01_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_btsel01_field_t;

typedef union un_bt_btsel01{
    uint_io32_t		u32Register;
    stc_bt_btsel01_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_btsel01_t;

/* BTSSSR0 */
#define BT_BTSSSR0	(BT.unBTSSSR0.u32Register)  /*@rg@*/
#define BT_BTSSSR0_SSSR	(BT.unBTSSSR0.stcField.u12SSSR)  /*@bf@*/

typedef struct stc_bt_btsssr0_field{
    uint_io32_t		u12SSSR:12;
    uint_io32_t		:20;
}stc_bt_btsssr0_field_t;

typedef union un_bt_btsssr0{
    uint_io32_t		u32Register;
    stc_bt_btsssr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_btsssr0_t;

/* BTTRR0 */
#define BT_BTTRR0	(BT.unBTTRR0.u32Register)  /*@rg@*/
#define BT_BTTRR0_TRR0	(*(volatile uint_io8_t*)0xB78401C0)  /*@bfbba@*/
#define BT_BTTRR0_TRR1	(*(volatile uint_io8_t*)0xB78401C1)  /*@bfbba@*/
#define BT_BTTRR0_TRR2	(*(volatile uint_io8_t*)0xB78401C2)  /*@bfbba@*/
#define BT_BTTRR0_TRR3	(*(volatile uint_io8_t*)0xB78401C3)  /*@bfbba@*/
#define BT_BTTRR0_TRR4	(*(volatile uint_io8_t*)0xB78401C4)  /*@bfbba@*/
#define BT_BTTRR0_TRR5	(*(volatile uint_io8_t*)0xB78401C5)  /*@bfbba@*/
#define BT_BTTRR0_TRR6	(*(volatile uint_io8_t*)0xB78401C6)  /*@bfbba@*/
#define BT_BTTRR0_TRR7	(*(volatile uint_io8_t*)0xB78401C7)  /*@bfbba@*/
#define BT_BTTRR0_TRR8	(*(volatile uint_io8_t*)0xB78401C8)  /*@bfbba@*/
#define BT_BTTRR0_TRR9	(*(volatile uint_io8_t*)0xB78401C9)  /*@bfbba@*/
#define BT_BTTRR0_TRR10	(*(volatile uint_io8_t*)0xB78401CA)  /*@bfbba@*/
#define BT_BTTRR0_TRR11	(*(volatile uint_io8_t*)0xB78401CB)  /*@bfbba@*/

typedef struct stc_bt_bttrr0_field{
    uint_io32_t		u1TRR0:1;
    uint_io32_t		u1TRR1:1;
    uint_io32_t		u1TRR2:1;
    uint_io32_t		u1TRR3:1;
    uint_io32_t		u1TRR4:1;
    uint_io32_t		u1TRR5:1;
    uint_io32_t		u1TRR6:1;
    uint_io32_t		u1TRR7:1;
    uint_io32_t		u1TRR8:1;
    uint_io32_t		u1TRR9:1;
    uint_io32_t		u1TRR10:1;
    uint_io32_t		u1TRR11:1;
    uint_io32_t		:20;
}stc_bt_bttrr0_field_t;

typedef union un_bt_bttrr0{
    uint_io32_t		u32Register;
    stc_bt_bttrr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_bttrr0_t;


typedef struct stc_bt{
    un_bt_btsel01_t	unBTSEL01;	/* 0x00000000 */
    un_bt_btsssr0_t	unBTSSSR0;	/* 0x00000004 */
    un_bt_bttrr0_t	unBTTRR0;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[964];	/* 0x0000000C */
}stc_bt_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_t	stcBT;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_1	stcBT_1
#else /* __IO_DEFINE */
#define BT_1	(*((volatile stc_bt_1_t*)0xB4808830))
#endif /* __IO_DEFINE */

/* BTSEL23 */
#define BT_BTSEL23	(BT_1.unBTSEL23.u32Register)  /*@rg@*/
#define BT_BTSEL23_BTSEL01	(BT_1.unBTSEL23.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_1_btsel23_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_1_btsel23_field_t;

typedef union un_bt_1_btsel23{
    uint_io32_t		u32Register;
    stc_bt_1_btsel23_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_1_btsel23_t;


typedef struct stc_bt_1{
    un_bt_1_btsel23_t	unBTSEL23;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_1_t	stcBT_1;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_2	stcBT_2
#else /* __IO_DEFINE */
#define BT_2	(*((volatile stc_bt_2_t*)0xB4809030))
#endif /* __IO_DEFINE */

/* BTSEL45 */
#define BT_BTSEL45	(BT_2.unBTSEL45.u32Register)  /*@rg@*/
#define BT_BTSEL45_BTSEL01	(BT_2.unBTSEL45.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_2_btsel45_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_2_btsel45_field_t;

typedef union un_bt_2_btsel45{
    uint_io32_t		u32Register;
    stc_bt_2_btsel45_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_2_btsel45_t;


typedef struct stc_bt_2{
    un_bt_2_btsel45_t	unBTSEL45;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_2_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_2_t	stcBT_2;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_3	stcBT_3
#else /* __IO_DEFINE */
#define BT_3	(*((volatile stc_bt_3_t*)0xB4809830))
#endif /* __IO_DEFINE */

/* BTSEL67 */
#define BT_BTSEL67	(BT_3.unBTSEL67.u32Register)  /*@rg@*/
#define BT_BTSEL67_BTSEL01	(BT_3.unBTSEL67.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_3_btsel67_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_3_btsel67_field_t;

typedef union un_bt_3_btsel67{
    uint_io32_t		u32Register;
    stc_bt_3_btsel67_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_3_btsel67_t;


typedef struct stc_bt_3{
    un_bt_3_btsel67_t	unBTSEL67;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_3_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_3_t	stcBT_3;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_4	stcBT_4
#else /* __IO_DEFINE */
#define BT_4	(*((volatile stc_bt_4_t*)0xB480A030))
#endif /* __IO_DEFINE */

/* BTSEL89 */
#define BT_BTSEL89	(BT_4.unBTSEL89.u32Register)  /*@rg@*/
#define BT_BTSEL89_BTSEL01	(BT_4.unBTSEL89.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_4_btsel89_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_4_btsel89_field_t;

typedef union un_bt_4_btsel89{
    uint_io32_t		u32Register;
    stc_bt_4_btsel89_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_4_btsel89_t;


typedef struct stc_bt_4{
    un_bt_4_btsel89_t	unBTSEL89;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_4_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_4_t	stcBT_4;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_5	stcBT_5
#else /* __IO_DEFINE */
#define BT_5	(*((volatile stc_bt_5_t*)0xB480A830))
#endif /* __IO_DEFINE */

/* BTSEL1011 */
#define BT_BTSEL1011	(BT_5.unBTSEL1011.u32Register)  /*@rg@*/
#define BT_BTSEL1011_BTSEL01	(BT_5.unBTSEL1011.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_5_btsel1011_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_5_btsel1011_field_t;

typedef union un_bt_5_btsel1011{
    uint_io32_t		u32Register;
    stc_bt_5_btsel1011_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_5_btsel1011_t;


typedef struct stc_bt_5{
    un_bt_5_btsel1011_t	unBTSEL1011;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_5_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_5_t	stcBT_5;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_6	stcBT_6
#else /* __IO_DEFINE */
#define BT_6	(*((volatile stc_bt_6_t*)0xB4888030))
#endif /* __IO_DEFINE */

/* BTSEL1213 */
#define BT_BTSEL1213	(BT_6.unBTSEL1213.u32Register)  /*@rg@*/
#define BT_BTSEL1213_BTSEL01	(BT_6.unBTSEL1213.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_6_btsel1213_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_6_btsel1213_field_t;

typedef union un_bt_6_btsel1213{
    uint_io32_t		u32Register;
    stc_bt_6_btsel1213_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_6_btsel1213_t;

/* BTSSSR12 */
#define BT_BTSSSR12	(BT_6.unBTSSSR12.u32Register)  /*@rg@*/
#define BT_BTSSSR12_SSSR	(BT_6.unBTSSSR12.stcField.u12SSSR)  /*@bf@*/

typedef struct stc_bt_6_btsssr12_field{
    uint_io32_t		u12SSSR:12;
    uint_io32_t		:20;
}stc_bt_6_btsssr12_field_t;

typedef union un_bt_6_btsssr12{
    uint_io32_t		u32Register;
    stc_bt_6_btsssr12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_6_btsssr12_t;

/* BTTRR12 */
#define BT_BTTRR12	(BT_6.unBTTRR12.u32Register)  /*@rg@*/
#define BT_BTTRR12_TRR0	(*(volatile uint_io8_t*)0xB7C401C0)  /*@bfbba@*/
#define BT_BTTRR12_TRR1	(*(volatile uint_io8_t*)0xB7C401C1)  /*@bfbba@*/
#define BT_BTTRR12_TRR2	(*(volatile uint_io8_t*)0xB7C401C2)  /*@bfbba@*/
#define BT_BTTRR12_TRR3	(*(volatile uint_io8_t*)0xB7C401C3)  /*@bfbba@*/
#define BT_BTTRR12_TRR4	(*(volatile uint_io8_t*)0xB7C401C4)  /*@bfbba@*/
#define BT_BTTRR12_TRR5	(*(volatile uint_io8_t*)0xB7C401C5)  /*@bfbba@*/
#define BT_BTTRR12_TRR6	(*(volatile uint_io8_t*)0xB7C401C6)  /*@bfbba@*/
#define BT_BTTRR12_TRR7	(*(volatile uint_io8_t*)0xB7C401C7)  /*@bfbba@*/
#define BT_BTTRR12_TRR8	(*(volatile uint_io8_t*)0xB7C401C8)  /*@bfbba@*/
#define BT_BTTRR12_TRR9	(*(volatile uint_io8_t*)0xB7C401C9)  /*@bfbba@*/
#define BT_BTTRR12_TRR10	(*(volatile uint_io8_t*)0xB7C401CA)  /*@bfbba@*/
#define BT_BTTRR12_TRR11	(*(volatile uint_io8_t*)0xB7C401CB)  /*@bfbba@*/

typedef struct stc_bt_6_bttrr12_field{
    uint_io32_t		u1TRR0:1;
    uint_io32_t		u1TRR1:1;
    uint_io32_t		u1TRR2:1;
    uint_io32_t		u1TRR3:1;
    uint_io32_t		u1TRR4:1;
    uint_io32_t		u1TRR5:1;
    uint_io32_t		u1TRR6:1;
    uint_io32_t		u1TRR7:1;
    uint_io32_t		u1TRR8:1;
    uint_io32_t		u1TRR9:1;
    uint_io32_t		u1TRR10:1;
    uint_io32_t		u1TRR11:1;
    uint_io32_t		:20;
}stc_bt_6_bttrr12_field_t;

typedef union un_bt_6_bttrr12{
    uint_io32_t		u32Register;
    stc_bt_6_bttrr12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_6_bttrr12_t;


typedef struct stc_bt_6{
    un_bt_6_btsel1213_t	unBTSEL1213;	/* 0x00000000 */
    un_bt_6_btsssr12_t	unBTSSSR12;	/* 0x00000004 */
    un_bt_6_bttrr12_t	unBTTRR12;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[964];	/* 0x0000000C */
}stc_bt_6_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_6_t	stcBT_6;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_7	stcBT_7
#else /* __IO_DEFINE */
#define BT_7	(*((volatile stc_bt_7_t*)0xB4888830))
#endif /* __IO_DEFINE */

/* BTSEL1415 */
#define BT_BTSEL1415	(BT_7.unBTSEL1415.u32Register)  /*@rg@*/
#define BT_BTSEL1415_BTSEL01	(BT_7.unBTSEL1415.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_7_btsel1415_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_7_btsel1415_field_t;

typedef union un_bt_7_btsel1415{
    uint_io32_t		u32Register;
    stc_bt_7_btsel1415_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_7_btsel1415_t;


typedef struct stc_bt_7{
    un_bt_7_btsel1415_t	unBTSEL1415;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_7_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_7_t	stcBT_7;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_8	stcBT_8
#else /* __IO_DEFINE */
#define BT_8	(*((volatile stc_bt_8_t*)0xB4889030))
#endif /* __IO_DEFINE */

/* BTSEL1617 */
#define BT_BTSEL1617	(BT_8.unBTSEL1617.u32Register)  /*@rg@*/
#define BT_BTSEL1617_BTSEL01	(BT_8.unBTSEL1617.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_8_btsel1617_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_8_btsel1617_field_t;

typedef union un_bt_8_btsel1617{
    uint_io32_t		u32Register;
    stc_bt_8_btsel1617_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_8_btsel1617_t;


typedef struct stc_bt_8{
    un_bt_8_btsel1617_t	unBTSEL1617;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_8_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_8_t	stcBT_8;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_9	stcBT_9
#else /* __IO_DEFINE */
#define BT_9	(*((volatile stc_bt_9_t*)0xB4889830))
#endif /* __IO_DEFINE */

/* BTSEL1819 */
#define BT_BTSEL1819	(BT_9.unBTSEL1819.u32Register)  /*@rg@*/
#define BT_BTSEL1819_BTSEL01	(BT_9.unBTSEL1819.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_9_btsel1819_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_9_btsel1819_field_t;

typedef union un_bt_9_btsel1819{
    uint_io32_t		u32Register;
    stc_bt_9_btsel1819_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_9_btsel1819_t;


typedef struct stc_bt_9{
    un_bt_9_btsel1819_t	unBTSEL1819;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_9_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_9_t	stcBT_9;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_10	stcBT_10
#else /* __IO_DEFINE */
#define BT_10	(*((volatile stc_bt_10_t*)0xB488A030))
#endif /* __IO_DEFINE */

/* BTSEL2021 */
#define BT_BTSEL2021	(BT_10.unBTSEL2021.u32Register)  /*@rg@*/
#define BT_BTSEL2021_BTSEL01	(BT_10.unBTSEL2021.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_10_btsel2021_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_10_btsel2021_field_t;

typedef union un_bt_10_btsel2021{
    uint_io32_t		u32Register;
    stc_bt_10_btsel2021_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_10_btsel2021_t;


typedef struct stc_bt_10{
    un_bt_10_btsel2021_t	unBTSEL2021;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_10_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_10_t	stcBT_10;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


/* BT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define BT_11	stcBT_11
#else /* __IO_DEFINE */
#define BT_11	(*((volatile stc_bt_11_t*)0xB488A830))
#endif /* __IO_DEFINE */

/* BTSEL2223 */
#define BT_BTSEL2223	(BT_11.unBTSEL2223.u32Register)  /*@rg@*/
#define BT_BTSEL2223_BTSEL01	(BT_11.unBTSEL2223.stcField.u4BTSEL01)  /*@bf@*/

typedef struct stc_bt_11_btsel2223_field{
    uint_io32_t		u4BTSEL01:4;
    uint_io32_t		:28;
}stc_bt_11_btsel2223_field_t;

typedef union un_bt_11_btsel2223{
    uint_io32_t		u32Register;
    stc_bt_11_btsel2223_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_bt_11_btsel2223_t;


typedef struct stc_bt_11{
    un_bt_11_btsel2223_t	unBTSEL2223;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[972];	/* 0x00000004 */
}stc_bt_11_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_bt_11_t	stcBT_11;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 976(0x3d0) bytes */


#endif /* __S6J3200_BTSEL_H */
