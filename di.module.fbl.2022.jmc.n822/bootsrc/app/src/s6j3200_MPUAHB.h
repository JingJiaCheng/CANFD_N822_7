/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MPUAHB_H
#define __S6J3200_MPUAHB_H

#include "s6j3200io_basetypes.h"

/* MPUH1 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MPUH1	stcMPUH1
#else /* __IO_DEFINE */
#define MPUH1	(*((volatile stc_mpuh1_t*)0xB8008400))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define MPUH1_CTRL0	(MPUH1.unCTRL0.u32Register)  /*@rg@*/
#define MPUH1_CTRL0_0	(MPUH1.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define MPUH1_CTRL0_1	(MPUH1.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define MPUH1_CTRL0_2	(MPUH1.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define MPUH1_CTRL0_3	(MPUH1.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define MPUH1_CTRL0_NMI	(MPUH1.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define MPUH1_CTRL0_NMICL	(MPUH1.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define MPUH1_CTRL0_LST	(MPUH1.unCTRL0.stcField.u1LST)  /*@bf@*/
#define MPUH1_CTRL0_MPUSTOP	(MPUH1.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define MPUH1_CTRL0_MPUSTOPEN	(MPUH1.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define MPUH1_CTRL0_POEN	(MPUH1.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define MPUH1_CTRL0_PROT	(MPUH1.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define MPUH1_CTRL0_MPUEN	(MPUH1.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL0_MPUENC	(MPUH1.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define MPUH1_CTRL0_AP	(MPUH1.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_mpuh1_ctrl0_field{
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
}stc_mpuh1_ctrl0_field_t;

typedef union un_mpuh1_ctrl0{
    uint_io32_t		u32Register;
    stc_mpuh1_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_ctrl0_t;

/* NMIEN */
#define MPUH1_NMIEN	(MPUH1.unNMIEN.u32Register)  /*@rg@*/
#define MPUH1_NMIEN_NMIEN	(MPUH1.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_mpuh1_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_mpuh1_nmien_field_t;

typedef union un_mpuh1_nmien{
    uint_io32_t		u32Register;
    stc_mpuh1_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_nmien_t;

/* MERRC */
#define MPUH1_MERRC	(MPUH1.unMERRC.u32Register)  /*@rg@*/
#define MPUH1_MERRC_HWRITE	(MPUH1.unMERRC.stcField.u1HWRITE)  /*@bf@*/
#define MPUH1_MERRC_HPROT	(MPUH1.unMERRC.stcField.u1HPROT)  /*@bf@*/

typedef struct stc_mpuh1_merrc_field{
    uint_io32_t		u1HWRITE:1;
    uint_io32_t		u1HPROT:1;
    uint_io32_t		:30;
}stc_mpuh1_merrc_field_t;

typedef union un_mpuh1_merrc{
    uint_io32_t		u32Register;
    stc_mpuh1_merrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_merrc_t;

/* MERRA */
#define MPUH1_MERRA	(MPUH1.unMERRA.u32Register)  /*@rg@*/
#define MPUH1_MERRA_HADDR	MPUH1_MERRA  /*@bfrg@*/

typedef union un_mpuh1_merra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_merra_t;

/* CTRL[1-8]_0 */
#define MPUH1_CTRL1_0	(MPUH1.unCTRL1_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL1_0_MPUEN	(MPUH1.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL1_0_MPUENC	(MPUH1.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUH1_CTRL2_0	(MPUH1.unCTRL2_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL2_0_MPUEN	(MPUH1.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL2_0_MPUENC	(MPUH1.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUH1_CTRL3_0	(MPUH1.unCTRL3_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL3_0_MPUEN	(MPUH1.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL3_0_MPUENC	(MPUH1.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUH1_CTRL4_0	(MPUH1.unCTRL4_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL4_0_MPUEN	(MPUH1.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL4_0_MPUENC	(MPUH1.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUH1_CTRL5_0	(MPUH1.unCTRL5_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL5_0_MPUEN	(MPUH1.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL5_0_MPUENC	(MPUH1.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUH1_CTRL6_0	(MPUH1.unCTRL6_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL6_0_MPUEN	(MPUH1.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL6_0_MPUENC	(MPUH1.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUH1_CTRL7_0	(MPUH1.unCTRL7_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL7_0_MPUEN	(MPUH1.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL7_0_MPUENC	(MPUH1.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define MPUH1_CTRL8_0	(MPUH1.unCTRL8_0.u8Register)  /*@rg@*/
#define MPUH1_CTRL8_0_MPUEN	(MPUH1.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define MPUH1_CTRL8_0_MPUENC	(MPUH1.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_mpuh1_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_mpuh1_ctrln_0_field_t;

typedef union un_mpuh1_ctrln_0{
    uint_io8_t		u8Register;
    stc_mpuh1_ctrln_0_field_t		stcField;
}un_mpuh1_ctrln_0_t;

/* CTRL[1-8]_1 */
#define MPUH1_CTRL1_1	(MPUH1.unCTRL1_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL1_1_AP	(MPUH1.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define MPUH1_CTRL2_1	(MPUH1.unCTRL2_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL2_1_AP	(MPUH1.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define MPUH1_CTRL3_1	(MPUH1.unCTRL3_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL3_1_AP	(MPUH1.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define MPUH1_CTRL4_1	(MPUH1.unCTRL4_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL4_1_AP	(MPUH1.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define MPUH1_CTRL5_1	(MPUH1.unCTRL5_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL5_1_AP	(MPUH1.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define MPUH1_CTRL6_1	(MPUH1.unCTRL6_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL6_1_AP	(MPUH1.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define MPUH1_CTRL7_1	(MPUH1.unCTRL7_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL7_1_AP	(MPUH1.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define MPUH1_CTRL8_1	(MPUH1.unCTRL8_1.u8Register)  /*@rg@*/
#define MPUH1_CTRL8_1_AP	(MPUH1.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_mpuh1_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_mpuh1_ctrln_1_field_t;

typedef union un_mpuh1_ctrln_1{
    uint_io8_t		u8Register;
    stc_mpuh1_ctrln_1_field_t		stcField;
}un_mpuh1_ctrln_1_t;

/* SADDR[1-8] */
#define MPUH1_SADDR1	(MPUH1.unSADDR1.u32Register)  /*@rg@*/
#define MPUH1_SADDR1_SADDR	MPUH1_SADDR1  /*@bfrg@*/

#define MPUH1_SADDR2	(MPUH1.unSADDR2.u32Register)  /*@rg@*/
#define MPUH1_SADDR2_SADDR	MPUH1_SADDR2  /*@bfrg@*/

#define MPUH1_SADDR3	(MPUH1.unSADDR3.u32Register)  /*@rg@*/
#define MPUH1_SADDR3_SADDR	MPUH1_SADDR3  /*@bfrg@*/

#define MPUH1_SADDR4	(MPUH1.unSADDR4.u32Register)  /*@rg@*/
#define MPUH1_SADDR4_SADDR	MPUH1_SADDR4  /*@bfrg@*/

#define MPUH1_SADDR5	(MPUH1.unSADDR5.u32Register)  /*@rg@*/
#define MPUH1_SADDR5_SADDR	MPUH1_SADDR5  /*@bfrg@*/

#define MPUH1_SADDR6	(MPUH1.unSADDR6.u32Register)  /*@rg@*/
#define MPUH1_SADDR6_SADDR	MPUH1_SADDR6  /*@bfrg@*/

#define MPUH1_SADDR7	(MPUH1.unSADDR7.u32Register)  /*@rg@*/
#define MPUH1_SADDR7_SADDR	MPUH1_SADDR7  /*@bfrg@*/

#define MPUH1_SADDR8	(MPUH1.unSADDR8.u32Register)  /*@rg@*/
#define MPUH1_SADDR8_SADDR	MPUH1_SADDR8  /*@bfrg@*/

typedef union un_mpuh1_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_saddrn_t;

/* EADDR[1-8] */
#define MPUH1_EADDR1	(MPUH1.unEADDR1.u32Register)  /*@rg@*/
#define MPUH1_EADDR1_EADDR	MPUH1_EADDR1  /*@bfrg@*/

#define MPUH1_EADDR2	(MPUH1.unEADDR2.u32Register)  /*@rg@*/
#define MPUH1_EADDR2_EADDR	MPUH1_EADDR2  /*@bfrg@*/

#define MPUH1_EADDR3	(MPUH1.unEADDR3.u32Register)  /*@rg@*/
#define MPUH1_EADDR3_EADDR	MPUH1_EADDR3  /*@bfrg@*/

#define MPUH1_EADDR4	(MPUH1.unEADDR4.u32Register)  /*@rg@*/
#define MPUH1_EADDR4_EADDR	MPUH1_EADDR4  /*@bfrg@*/

#define MPUH1_EADDR5	(MPUH1.unEADDR5.u32Register)  /*@rg@*/
#define MPUH1_EADDR5_EADDR	MPUH1_EADDR5  /*@bfrg@*/

#define MPUH1_EADDR6	(MPUH1.unEADDR6.u32Register)  /*@rg@*/
#define MPUH1_EADDR6_EADDR	MPUH1_EADDR6  /*@bfrg@*/

#define MPUH1_EADDR7	(MPUH1.unEADDR7.u32Register)  /*@rg@*/
#define MPUH1_EADDR7_EADDR	MPUH1_EADDR7  /*@bfrg@*/

#define MPUH1_EADDR8	(MPUH1.unEADDR8.u32Register)  /*@rg@*/
#define MPUH1_EADDR8_EADDR	MPUH1_EADDR8  /*@bfrg@*/

typedef union un_mpuh1_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_eaddrn_t;

/* UNLOCK */
#define MPUH1_UNLOCK	(MPUH1.unUNLOCK.u32Register)  /*@rg@*/
#define MPUH1_UNLOCK_UNLOCK	MPUH1_UNLOCK  /*@bfrg@*/

typedef union un_mpuh1_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_unlock_t;

/* MID */
#define MPUH1_MID	(MPUH1.unMID.u32Register)  /*@rg@*/
#define MPUH1_MID_MID	MPUH1_MID  /*@bfrg@*/

typedef union un_mpuh1_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh1_mid_t;


typedef struct stc_mpuh1{
    un_mpuh1_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_mpuh1_nmien_t	unNMIEN;	/* 0x00000004 */
    un_mpuh1_merrc_t	unMERRC;	/* 0x00000008 */
    un_mpuh1_merra_t	unMERRA;	/* 0x0000000C */
    un_mpuh1_ctrln_0_t	unCTRL1_0;	/* 0x00000010 */
    un_mpuh1_ctrln_1_t	unCTRL1_1;	/* 0x00000011 */
    uint_io8_t	au8Reserved0[2];	/* 0x00000012 */
    un_mpuh1_saddrn_t	unSADDR1;	/* 0x00000014 */
    un_mpuh1_eaddrn_t	unEADDR1;	/* 0x00000018 */
    un_mpuh1_ctrln_0_t	unCTRL2_0;	/* 0x0000001C */
    un_mpuh1_ctrln_1_t	unCTRL2_1;	/* 0x0000001D */
    uint_io8_t	au8Reserved1[2];	/* 0x0000001E */
    un_mpuh1_saddrn_t	unSADDR2;	/* 0x00000020 */
    un_mpuh1_eaddrn_t	unEADDR2;	/* 0x00000024 */
    un_mpuh1_ctrln_0_t	unCTRL3_0;	/* 0x00000028 */
    un_mpuh1_ctrln_1_t	unCTRL3_1;	/* 0x00000029 */
    uint_io8_t	au8Reserved2[2];	/* 0x0000002A */
    un_mpuh1_saddrn_t	unSADDR3;	/* 0x0000002C */
    un_mpuh1_eaddrn_t	unEADDR3;	/* 0x00000030 */
    un_mpuh1_ctrln_0_t	unCTRL4_0;	/* 0x00000034 */
    un_mpuh1_ctrln_1_t	unCTRL4_1;	/* 0x00000035 */
    uint_io8_t	au8Reserved3[2];	/* 0x00000036 */
    un_mpuh1_saddrn_t	unSADDR4;	/* 0x00000038 */
    un_mpuh1_eaddrn_t	unEADDR4;	/* 0x0000003C */
    un_mpuh1_ctrln_0_t	unCTRL5_0;	/* 0x00000040 */
    un_mpuh1_ctrln_1_t	unCTRL5_1;	/* 0x00000041 */
    uint_io8_t	au8Reserved4[2];	/* 0x00000042 */
    un_mpuh1_saddrn_t	unSADDR5;	/* 0x00000044 */
    un_mpuh1_eaddrn_t	unEADDR5;	/* 0x00000048 */
    un_mpuh1_ctrln_0_t	unCTRL6_0;	/* 0x0000004C */
    un_mpuh1_ctrln_1_t	unCTRL6_1;	/* 0x0000004D */
    uint_io8_t	au8Reserved5[2];	/* 0x0000004E */
    un_mpuh1_saddrn_t	unSADDR6;	/* 0x00000050 */
    un_mpuh1_eaddrn_t	unEADDR6;	/* 0x00000054 */
    un_mpuh1_ctrln_0_t	unCTRL7_0;	/* 0x00000058 */
    un_mpuh1_ctrln_1_t	unCTRL7_1;	/* 0x00000059 */
    uint_io8_t	au8Reserved6[2];	/* 0x0000005A */
    un_mpuh1_saddrn_t	unSADDR7;	/* 0x0000005C */
    un_mpuh1_eaddrn_t	unEADDR7;	/* 0x00000060 */
    un_mpuh1_ctrln_0_t	unCTRL8_0;	/* 0x00000064 */
    un_mpuh1_ctrln_1_t	unCTRL8_1;	/* 0x00000065 */
    uint_io8_t	au8Reserved7[2];	/* 0x00000066 */
    un_mpuh1_saddrn_t	unSADDR8;	/* 0x00000068 */
    un_mpuh1_eaddrn_t	unEADDR8;	/* 0x0000006C */
    un_mpuh1_unlock_t	unUNLOCK;	/* 0x00000070 */
    un_mpuh1_mid_t	unMID;	/* 0x00000074 */
    uint_io8_t	au8Reserved8[904];	/* 0x00000078 */
}stc_mpuh1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mpuh1_t	stcMPUH1;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_MPUAHB_H */
