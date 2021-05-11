/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MPUX_H
#define __S6J3200_MPUX_H

#include "s6j3200io_basetypes.h"

/* MPUX0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MPUX0	stcMPUX0
#else /* __IO_DEFINE */
#define MPUX0	(*((volatile stc_mpux0_t*)0xB8000800))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define MPUX0_CTRL0	(MPUX0.unCTRL0.u32Register)  /*@rg@*/
#define MPUX0_CTRL0_0	(MPUX0.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define MPUX0_CTRL0_1	(MPUX0.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define MPUX0_CTRL0_2	(MPUX0.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define MPUX0_CTRL0_3	(MPUX0.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define MPUX0_CTRL0_NMI	(MPUX0.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define MPUX0_CTRL0_NMICL	(MPUX0.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define MPUX0_CTRL0_LST	(MPUX0.unCTRL0.stcField.u1LST)  /*@bf@*/
#define MPUX0_CTRL0_MPUSTOP	(MPUX0.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define MPUX0_CTRL0_MPUSTOPEN	(MPUX0.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define MPUX0_CTRL0_POEN	(MPUX0.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define MPUX0_CTRL0_PROT	(MPUX0.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define MPUX0_CTRL0_MPUEN	(MPUX0.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL0_MPUENC	(MPUX0.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define MPUX0_CTRL0_AP	(MPUX0.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_mpux0_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		u1MPUSTOP:1;
    uint_io32_t		u1MPUSTOPEN:1;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_mpux0_ctrl0_field_t;

typedef union un_mpux0_ctrl0{
    uint_io32_t		u32Register;
    stc_mpux0_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_ctrl0_t;

/* NMIEN */
#define MPUX0_NMIEN	(MPUX0.unNMIEN.u32Register)  /*@rg@*/
#define MPUX0_NMIEN_NMIEN	(MPUX0.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_mpux0_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_mpux0_nmien_field_t;

typedef union un_mpux0_nmien{
    uint_io32_t		u32Register;
    stc_mpux0_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_nmien_t;

/* WERRC */
#define MPUX0_WERRC	(MPUX0.unWERRC.u32Register)  /*@rg@*/
#define MPUX0_WERRC_AWMPV	(MPUX0.unWERRC.stcField.u1AWMPV)  /*@bf@*/
#define MPUX0_WERRC_AWPROTPRIV	(MPUX0.unWERRC.stcField.u1AWPROTPRIV)  /*@bf@*/
#define MPUX0_WERRC_AWLEN	(MPUX0.unWERRC.stcField.u4AWLEN)  /*@bf@*/
#define MPUX0_WERRC_AWBURST	(MPUX0.unWERRC.stcField.u2AWBURST)  /*@bf@*/
#define MPUX0_WERRC_AWSIZE	(MPUX0.unWERRC.stcField.u3AWSIZE)  /*@bf@*/

typedef struct stc_mpux0_werrc_field{
    uint_io32_t		u1AWMPV:1;
    uint_io32_t		u1AWPROTPRIV:1;
    uint_io32_t		u4AWLEN:4;
    uint_io32_t		u2AWBURST:2;
    uint_io32_t		u3AWSIZE:3;
    uint_io32_t		:21;
}stc_mpux0_werrc_field_t;

typedef union un_mpux0_werrc{
    uint_io32_t		u32Register;
    stc_mpux0_werrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_werrc_t;

/* WERRA */
#define MPUX0_WERRA	(MPUX0.unWERRA.u32Register)  /*@rg@*/
#define MPUX0_WERRA_AWADDR	MPUX0_WERRA  /*@bfrg@*/

typedef union un_mpux0_werra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_werra_t;

/* RERRC */
#define MPUX0_RERRC	(MPUX0.unRERRC.u32Register)  /*@rg@*/
#define MPUX0_RERRC_ARMPV	(MPUX0.unRERRC.stcField.u1ARMPV)  /*@bf@*/
#define MPUX0_RERRC_ARPROTPRIV	(MPUX0.unRERRC.stcField.u1ARPROTPRIV)  /*@bf@*/
#define MPUX0_RERRC_ARLEN	(MPUX0.unRERRC.stcField.u4ARLEN)  /*@bf@*/
#define MPUX0_RERRC_ARBURST	(MPUX0.unRERRC.stcField.u2ARBURST)  /*@bf@*/
#define MPUX0_RERRC_ARSIZE	(MPUX0.unRERRC.stcField.u3ARSIZE)  /*@bf@*/

typedef struct stc_mpux0_rerrc_field{
    uint_io32_t		u1ARMPV:1;
    uint_io32_t		u1ARPROTPRIV:1;
    uint_io32_t		u4ARLEN:4;
    uint_io32_t		u2ARBURST:2;
    uint_io32_t		u3ARSIZE:3;
    uint_io32_t		:21;
}stc_mpux0_rerrc_field_t;

typedef union un_mpux0_rerrc{
    uint_io32_t		u32Register;
    stc_mpux0_rerrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_rerrc_t;

/* RERRA */
#define MPUX0_RERRA	(MPUX0.unRERRA.u32Register)  /*@rg@*/
#define MPUX0_RERRA_ARADDR	MPUX0_RERRA  /*@bfrg@*/

typedef union un_mpux0_rerra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_rerra_t;

/* CTRL[1-8]_0 */
#define MPUX0_CTRL1_0	(MPUX0.unCTRL1_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL1_0_MPUEN	(MPUX0.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL1_0_MPUENC	(MPUX0.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUX0_CTRL2_0	(MPUX0.unCTRL2_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL2_0_MPUEN	(MPUX0.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL2_0_MPUENC	(MPUX0.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUX0_CTRL3_0	(MPUX0.unCTRL3_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL3_0_MPUEN	(MPUX0.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL3_0_MPUENC	(MPUX0.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUX0_CTRL4_0	(MPUX0.unCTRL4_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL4_0_MPUEN	(MPUX0.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL4_0_MPUENC	(MPUX0.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUX0_CTRL5_0	(MPUX0.unCTRL5_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL5_0_MPUEN	(MPUX0.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL5_0_MPUENC	(MPUX0.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUX0_CTRL6_0	(MPUX0.unCTRL6_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL6_0_MPUEN	(MPUX0.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL6_0_MPUENC	(MPUX0.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUX0_CTRL7_0	(MPUX0.unCTRL7_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL7_0_MPUEN	(MPUX0.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL7_0_MPUENC	(MPUX0.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUX0_CTRL8_0	(MPUX0.unCTRL8_0.u8Register)  /*@rg@*/
#define MPUX0_CTRL8_0_MPUEN	(MPUX0.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUX0_CTRL8_0_MPUENC	(MPUX0.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_mpux0_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_mpux0_ctrln_0_field_t;

typedef union un_mpux0_ctrln_0{
    uint_io8_t		u8Register;
    stc_mpux0_ctrln_0_field_t		stcField;
}un_mpux0_ctrln_0_t;

/* CTRL[1-8]_1 */
#define MPUX0_CTRL1_1	(MPUX0.unCTRL1_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL1_1_AP	(MPUX0.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define MPUX0_CTRL2_1	(MPUX0.unCTRL2_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL2_1_AP	(MPUX0.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define MPUX0_CTRL3_1	(MPUX0.unCTRL3_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL3_1_AP	(MPUX0.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define MPUX0_CTRL4_1	(MPUX0.unCTRL4_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL4_1_AP	(MPUX0.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define MPUX0_CTRL5_1	(MPUX0.unCTRL5_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL5_1_AP	(MPUX0.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define MPUX0_CTRL6_1	(MPUX0.unCTRL6_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL6_1_AP	(MPUX0.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define MPUX0_CTRL7_1	(MPUX0.unCTRL7_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL7_1_AP	(MPUX0.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define MPUX0_CTRL8_1	(MPUX0.unCTRL8_1.u8Register)  /*@rg@*/
#define MPUX0_CTRL8_1_AP	(MPUX0.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_mpux0_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_mpux0_ctrln_1_field_t;

typedef union un_mpux0_ctrln_1{
    uint_io8_t		u8Register;
    stc_mpux0_ctrln_1_field_t		stcField;
}un_mpux0_ctrln_1_t;

/* SADDR[1-8] */
#define MPUX0_SADDR1	(MPUX0.unSADDR1.u32Register)  /*@rg@*/
#define MPUX0_SADDR1_SADDR	MPUX0_SADDR1  /*@bfrg@*/

#define MPUX0_SADDR2	(MPUX0.unSADDR2.u32Register)  /*@rg@*/
#define MPUX0_SADDR2_SADDR	MPUX0_SADDR2  /*@bfrg@*/

#define MPUX0_SADDR3	(MPUX0.unSADDR3.u32Register)  /*@rg@*/
#define MPUX0_SADDR3_SADDR	MPUX0_SADDR3  /*@bfrg@*/

#define MPUX0_SADDR4	(MPUX0.unSADDR4.u32Register)  /*@rg@*/
#define MPUX0_SADDR4_SADDR	MPUX0_SADDR4  /*@bfrg@*/

#define MPUX0_SADDR5	(MPUX0.unSADDR5.u32Register)  /*@rg@*/
#define MPUX0_SADDR5_SADDR	MPUX0_SADDR5  /*@bfrg@*/

#define MPUX0_SADDR6	(MPUX0.unSADDR6.u32Register)  /*@rg@*/
#define MPUX0_SADDR6_SADDR	MPUX0_SADDR6  /*@bfrg@*/

#define MPUX0_SADDR7	(MPUX0.unSADDR7.u32Register)  /*@rg@*/
#define MPUX0_SADDR7_SADDR	MPUX0_SADDR7  /*@bfrg@*/

#define MPUX0_SADDR8	(MPUX0.unSADDR8.u32Register)  /*@rg@*/
#define MPUX0_SADDR8_SADDR	MPUX0_SADDR8  /*@bfrg@*/

typedef union un_mpux0_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_saddrn_t;

/* EADDR[1-8] */
#define MPUX0_EADDR1	(MPUX0.unEADDR1.u32Register)  /*@rg@*/
#define MPUX0_EADDR1_EADDR	MPUX0_EADDR1  /*@bfrg@*/

#define MPUX0_EADDR2	(MPUX0.unEADDR2.u32Register)  /*@rg@*/
#define MPUX0_EADDR2_EADDR	MPUX0_EADDR2  /*@bfrg@*/

#define MPUX0_EADDR3	(MPUX0.unEADDR3.u32Register)  /*@rg@*/
#define MPUX0_EADDR3_EADDR	MPUX0_EADDR3  /*@bfrg@*/

#define MPUX0_EADDR4	(MPUX0.unEADDR4.u32Register)  /*@rg@*/
#define MPUX0_EADDR4_EADDR	MPUX0_EADDR4  /*@bfrg@*/

#define MPUX0_EADDR5	(MPUX0.unEADDR5.u32Register)  /*@rg@*/
#define MPUX0_EADDR5_EADDR	MPUX0_EADDR5  /*@bfrg@*/

#define MPUX0_EADDR6	(MPUX0.unEADDR6.u32Register)  /*@rg@*/
#define MPUX0_EADDR6_EADDR	MPUX0_EADDR6  /*@bfrg@*/

#define MPUX0_EADDR7	(MPUX0.unEADDR7.u32Register)  /*@rg@*/
#define MPUX0_EADDR7_EADDR	MPUX0_EADDR7  /*@bfrg@*/

#define MPUX0_EADDR8	(MPUX0.unEADDR8.u32Register)  /*@rg@*/
#define MPUX0_EADDR8_EADDR	MPUX0_EADDR8  /*@bfrg@*/

typedef union un_mpux0_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_eaddrn_t;

/* UNLOCK */
#define MPUX0_UNLOCK	(MPUX0.unUNLOCK.u32Register)  /*@rg@*/
#define MPUX0_UNLOCK_UNLOCK	MPUX0_UNLOCK  /*@bfrg@*/

typedef union un_mpux0_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_unlock_t;

/* MID */
#define MPUX0_MID	(MPUX0.unMID.u32Register)  /*@rg@*/
#define MPUX0_MID_MID	MPUX0_MID  /*@bfrg@*/

typedef union un_mpux0_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpux0_mid_t;


typedef struct stc_mpux0{
    un_mpux0_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_mpux0_nmien_t	unNMIEN;	/* 0x00000004 */
    un_mpux0_werrc_t	unWERRC;	/* 0x00000008 */
    un_mpux0_werra_t	unWERRA;	/* 0x0000000C */
    un_mpux0_rerrc_t	unRERRC;	/* 0x00000010 */
    un_mpux0_rerra_t	unRERRA;	/* 0x00000014 */
    un_mpux0_ctrln_0_t	unCTRL1_0;	/* 0x00000018 */
    un_mpux0_ctrln_1_t	unCTRL1_1;	/* 0x00000019 */
    uint_io8_t	au8Reserved0[2];	/* 0x0000001A */
    un_mpux0_saddrn_t	unSADDR1;	/* 0x0000001C */
    un_mpux0_eaddrn_t	unEADDR1;	/* 0x00000020 */
    un_mpux0_ctrln_0_t	unCTRL2_0;	/* 0x00000024 */
    un_mpux0_ctrln_1_t	unCTRL2_1;	/* 0x00000025 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000026 */
    un_mpux0_saddrn_t	unSADDR2;	/* 0x00000028 */
    un_mpux0_eaddrn_t	unEADDR2;	/* 0x0000002C */
    un_mpux0_ctrln_0_t	unCTRL3_0;	/* 0x00000030 */
    un_mpux0_ctrln_1_t	unCTRL3_1;	/* 0x00000031 */
    uint_io8_t	au8Reserved2[2];	/* 0x00000032 */
    un_mpux0_saddrn_t	unSADDR3;	/* 0x00000034 */
    un_mpux0_eaddrn_t	unEADDR3;	/* 0x00000038 */
    un_mpux0_ctrln_0_t	unCTRL4_0;	/* 0x0000003C */
    un_mpux0_ctrln_1_t	unCTRL4_1;	/* 0x0000003D */
    uint_io8_t	au8Reserved3[2];	/* 0x0000003E */
    un_mpux0_saddrn_t	unSADDR4;	/* 0x00000040 */
    un_mpux0_eaddrn_t	unEADDR4;	/* 0x00000044 */
    un_mpux0_ctrln_0_t	unCTRL5_0;	/* 0x00000048 */
    un_mpux0_ctrln_1_t	unCTRL5_1;	/* 0x00000049 */
    uint_io8_t	au8Reserved4[2];	/* 0x0000004A */
    un_mpux0_saddrn_t	unSADDR5;	/* 0x0000004C */
    un_mpux0_eaddrn_t	unEADDR5;	/* 0x00000050 */
    un_mpux0_ctrln_0_t	unCTRL6_0;	/* 0x00000054 */
    un_mpux0_ctrln_1_t	unCTRL6_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved5[2];	/* 0x00000056 */
    un_mpux0_saddrn_t	unSADDR6;	/* 0x00000058 */
    un_mpux0_eaddrn_t	unEADDR6;	/* 0x0000005C */
    un_mpux0_ctrln_0_t	unCTRL7_0;	/* 0x00000060 */
    un_mpux0_ctrln_1_t	unCTRL7_1;	/* 0x00000061 */
    uint_io8_t	au8Reserved6[2];	/* 0x00000062 */
    un_mpux0_saddrn_t	unSADDR7;	/* 0x00000064 */
    un_mpux0_eaddrn_t	unEADDR7;	/* 0x00000068 */
    un_mpux0_ctrln_0_t	unCTRL8_0;	/* 0x0000006C */
    un_mpux0_ctrln_1_t	unCTRL8_1;	/* 0x0000006D */
    uint_io8_t	au8Reserved7[2];	/* 0x0000006E */
    un_mpux0_saddrn_t	unSADDR8;	/* 0x00000070 */
    un_mpux0_eaddrn_t	unEADDR8;	/* 0x00000074 */
    un_mpux0_unlock_t	unUNLOCK;	/* 0x00000078 */
    un_mpux0_mid_t	unMID;	/* 0x0000007C */
    uint_io8_t	au8Reserved8[896];	/* 0x00000080 */
}stc_mpux0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mpux0_t	stcMPUX0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_MPUX_H */
