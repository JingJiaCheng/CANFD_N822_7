/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MPUH_H
#define __S6J3200_MPUH_H

#include "s6j3200io_basetypes.h"

/* MPUH0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MPUH0	stcMPUH0
#else /* __IO_DEFINE */
#define MPUH0	(*((volatile stc_mpuh0_t*)0xB4710000))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define MPUH0_CTRL0	(MPUH0.unCTRL0.u32Register)  /*@rg@*/
#define MPUH0_CTRL0_0	(MPUH0.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define MPUH0_CTRL0_1	(MPUH0.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define MPUH0_CTRL0_2	(MPUH0.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define MPUH0_CTRL0_3	(MPUH0.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define MPUH0_CTRL0_NMI	(*(volatile uint_io8_t*)0xB7080000)  /*@bfbba@*/
#define MPUH0_CTRL0_NMICL	(*(volatile uint_io8_t*)0xB7080001)  /*@bfbba@*/
#define MPUH0_CTRL0_LST	(*(volatile uint_io8_t*)0xB7080008)  /*@bfbba@*/
#define MPUH0_CTRL0_POEN	(*(volatile uint_io8_t*)0xB708000B)  /*@bfbba@*/
#define MPUH0_CTRL0_PROT	(*(volatile uint_io8_t*)0xB708000C)  /*@bfbba@*/
#define MPUH0_CTRL0_MPUEN	(*(volatile uint_io8_t*)0xB7080010)  /*@bfbba@*/
#define MPUH0_CTRL0_MPUENC	(*(volatile uint_io8_t*)0xB7080011)  /*@bfbba@*/
#define MPUH0_CTRL0_AP	(MPUH0.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_mpuh0_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		:2;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_mpuh0_ctrl0_field_t;

typedef union un_mpuh0_ctrl0{
    uint_io32_t		u32Register;
    stc_mpuh0_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_ctrl0_t;

/* NMIEN */
#define MPUH0_NMIEN	(MPUH0.unNMIEN.u32Register)  /*@rg@*/
#define MPUH0_NMIEN_NMIEN	(*(volatile uint_io8_t*)0xB7080020)  /*@bfbba@*/

typedef struct stc_mpuh0_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_mpuh0_nmien_field_t;

typedef union un_mpuh0_nmien{
    uint_io32_t		u32Register;
    stc_mpuh0_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_nmien_t;

/* MERRC */
#define MPUH0_MERRC	(MPUH0.unMERRC.u32Register)  /*@rg@*/
#define MPUH0_MERRC_HWRITE	(*(volatile uint_io8_t*)0xB7080040)  /*@bfbba@*/
#define MPUH0_MERRC_HPROT	(*(volatile uint_io8_t*)0xB7080041)  /*@bfbba@*/

typedef struct stc_mpuh0_merrc_field{
    uint_io32_t		u1HWRITE:1;
    uint_io32_t		u1HPROT:1;
    uint_io32_t		:30;
}stc_mpuh0_merrc_field_t;

typedef union un_mpuh0_merrc{
    uint_io32_t		u32Register;
    stc_mpuh0_merrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_merrc_t;

/* MERRA */
#define MPUH0_MERRA	(MPUH0.unMERRA.u32Register)  /*@rg@*/
#define MPUH0_MERRA_HADDR	MPUH0_MERRA  /*@bfrg@*/

typedef union un_mpuh0_merra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_merra_t;

/* CTRL[1-8]_0 */
#define MPUH0_CTRL1_0	(MPUH0.unCTRL1_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL1_0_MPUEN	(*(volatile uint_io8_t*)0xB7080080)  /*@bfbba@*/
#define MPUH0_CTRL1_0_MPUENC	(*(volatile uint_io8_t*)0xB7080081)  /*@bfbba@*/

#define MPUH0_CTRL2_0	(MPUH0.unCTRL2_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL2_0_MPUEN	(*(volatile uint_io8_t*)0xB70800E0)  /*@bfbba@*/
#define MPUH0_CTRL2_0_MPUENC	(*(volatile uint_io8_t*)0xB70800E1)  /*@bfbba@*/

#define MPUH0_CTRL3_0	(MPUH0.unCTRL3_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL3_0_MPUEN	(*(volatile uint_io8_t*)0xB7080140)  /*@bfbba@*/
#define MPUH0_CTRL3_0_MPUENC	(*(volatile uint_io8_t*)0xB7080141)  /*@bfbba@*/

#define MPUH0_CTRL4_0	(MPUH0.unCTRL4_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL4_0_MPUEN	(*(volatile uint_io8_t*)0xB70801A0)  /*@bfbba@*/
#define MPUH0_CTRL4_0_MPUENC	(*(volatile uint_io8_t*)0xB70801A1)  /*@bfbba@*/

#define MPUH0_CTRL5_0	(MPUH0.unCTRL5_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL5_0_MPUEN	(*(volatile uint_io8_t*)0xB7080200)  /*@bfbba@*/
#define MPUH0_CTRL5_0_MPUENC	(*(volatile uint_io8_t*)0xB7080201)  /*@bfbba@*/

#define MPUH0_CTRL6_0	(MPUH0.unCTRL6_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL6_0_MPUEN	(*(volatile uint_io8_t*)0xB7080260)  /*@bfbba@*/
#define MPUH0_CTRL6_0_MPUENC	(*(volatile uint_io8_t*)0xB7080261)  /*@bfbba@*/

#define MPUH0_CTRL7_0	(MPUH0.unCTRL7_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL7_0_MPUEN	(*(volatile uint_io8_t*)0xB70802C0)  /*@bfbba@*/
#define MPUH0_CTRL7_0_MPUENC	(*(volatile uint_io8_t*)0xB70802C1)  /*@bfbba@*/

#define MPUH0_CTRL8_0	(MPUH0.unCTRL8_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL8_0_MPUEN	(*(volatile uint_io8_t*)0xB7080320)  /*@bfbba@*/
#define MPUH0_CTRL8_0_MPUENC	(*(volatile uint_io8_t*)0xB7080321)  /*@bfbba@*/

typedef struct stc_mpuh0_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_mpuh0_ctrln_0_field_t;

typedef union un_mpuh0_ctrln_0{
    uint_io8_t		u8Register;
    stc_mpuh0_ctrln_0_field_t		stcField;
}un_mpuh0_ctrln_0_t;

/* CTRL[1-8]_1 */
#define MPUH0_CTRL1_1	(MPUH0.unCTRL1_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL1_1_AP	(MPUH0.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL2_1	(MPUH0.unCTRL2_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL2_1_AP	(MPUH0.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL3_1	(MPUH0.unCTRL3_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL3_1_AP	(MPUH0.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL4_1	(MPUH0.unCTRL4_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL4_1_AP	(MPUH0.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL5_1	(MPUH0.unCTRL5_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL5_1_AP	(MPUH0.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL6_1	(MPUH0.unCTRL6_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL6_1_AP	(MPUH0.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL7_1	(MPUH0.unCTRL7_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL7_1_AP	(MPUH0.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL8_1	(MPUH0.unCTRL8_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL8_1_AP	(MPUH0.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_mpuh0_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_mpuh0_ctrln_1_field_t;

typedef union un_mpuh0_ctrln_1{
    uint_io8_t		u8Register;
    stc_mpuh0_ctrln_1_field_t		stcField;
}un_mpuh0_ctrln_1_t;

/* SADDR[1-8] */
#define MPUH0_SADDR1	(MPUH0.unSADDR1.u32Register)  /*@rg@*/
#define MPUH0_SADDR1_SADDR	MPUH0_SADDR1  /*@bfrg@*/

#define MPUH0_SADDR2	(MPUH0.unSADDR2.u32Register)  /*@rg@*/
#define MPUH0_SADDR2_SADDR	MPUH0_SADDR2  /*@bfrg@*/

#define MPUH0_SADDR3	(MPUH0.unSADDR3.u32Register)  /*@rg@*/
#define MPUH0_SADDR3_SADDR	MPUH0_SADDR3  /*@bfrg@*/

#define MPUH0_SADDR4	(MPUH0.unSADDR4.u32Register)  /*@rg@*/
#define MPUH0_SADDR4_SADDR	MPUH0_SADDR4  /*@bfrg@*/

#define MPUH0_SADDR5	(MPUH0.unSADDR5.u32Register)  /*@rg@*/
#define MPUH0_SADDR5_SADDR	MPUH0_SADDR5  /*@bfrg@*/

#define MPUH0_SADDR6	(MPUH0.unSADDR6.u32Register)  /*@rg@*/
#define MPUH0_SADDR6_SADDR	MPUH0_SADDR6  /*@bfrg@*/

#define MPUH0_SADDR7	(MPUH0.unSADDR7.u32Register)  /*@rg@*/
#define MPUH0_SADDR7_SADDR	MPUH0_SADDR7  /*@bfrg@*/

#define MPUH0_SADDR8	(MPUH0.unSADDR8.u32Register)  /*@rg@*/
#define MPUH0_SADDR8_SADDR	MPUH0_SADDR8  /*@bfrg@*/

typedef union un_mpuh0_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_saddrn_t;

/* EADDR[1-8] */
#define MPUH0_EADDR1	(MPUH0.unEADDR1.u32Register)  /*@rg@*/
#define MPUH0_EADDR1_EADDR	MPUH0_EADDR1  /*@bfrg@*/

#define MPUH0_EADDR2	(MPUH0.unEADDR2.u32Register)  /*@rg@*/
#define MPUH0_EADDR2_EADDR	MPUH0_EADDR2  /*@bfrg@*/

#define MPUH0_EADDR3	(MPUH0.unEADDR3.u32Register)  /*@rg@*/
#define MPUH0_EADDR3_EADDR	MPUH0_EADDR3  /*@bfrg@*/

#define MPUH0_EADDR4	(MPUH0.unEADDR4.u32Register)  /*@rg@*/
#define MPUH0_EADDR4_EADDR	MPUH0_EADDR4  /*@bfrg@*/

#define MPUH0_EADDR5	(MPUH0.unEADDR5.u32Register)  /*@rg@*/
#define MPUH0_EADDR5_EADDR	MPUH0_EADDR5  /*@bfrg@*/

#define MPUH0_EADDR6	(MPUH0.unEADDR6.u32Register)  /*@rg@*/
#define MPUH0_EADDR6_EADDR	MPUH0_EADDR6  /*@bfrg@*/

#define MPUH0_EADDR7	(MPUH0.unEADDR7.u32Register)  /*@rg@*/
#define MPUH0_EADDR7_EADDR	MPUH0_EADDR7  /*@bfrg@*/

#define MPUH0_EADDR8	(MPUH0.unEADDR8.u32Register)  /*@rg@*/
#define MPUH0_EADDR8_EADDR	MPUH0_EADDR8  /*@bfrg@*/

typedef union un_mpuh0_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_eaddrn_t;

/* UNLOCK */
#define MPUH0_UNLOCK	(MPUH0.unUNLOCK.u32Register)  /*@rg@*/
#define MPUH0_UNLOCK_UNLOCK	MPUH0_UNLOCK  /*@bfrg@*/

typedef union un_mpuh0_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_unlock_t;

/* MID */
#define MPUH0_MID	(MPUH0.unMID.u32Register)  /*@rg@*/
#define MPUH0_MID_MID	MPUH0_MID  /*@bfrg@*/

typedef union un_mpuh0_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_mid_t;

/* CTRL[9-16]_0 */
#define MPUH0_CTRL9_0	(MPUH0.unCTRL9_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL9_0_MPUEN	(*(volatile uint_io8_t*)0xB7080880)  /*@bfbba@*/
#define MPUH0_CTRL9_0_MPUENC	(*(volatile uint_io8_t*)0xB7080881)  /*@bfbba@*/

#define MPUH0_CTRL10_0	(MPUH0.unCTRL10_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL10_0_MPUEN	(*(volatile uint_io8_t*)0xB70808E0)  /*@bfbba@*/
#define MPUH0_CTRL10_0_MPUENC	(*(volatile uint_io8_t*)0xB70808E1)  /*@bfbba@*/

#define MPUH0_CTRL11_0	(MPUH0.unCTRL11_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL11_0_MPUEN	(*(volatile uint_io8_t*)0xB7080940)  /*@bfbba@*/
#define MPUH0_CTRL11_0_MPUENC	(*(volatile uint_io8_t*)0xB7080941)  /*@bfbba@*/

#define MPUH0_CTRL12_0	(MPUH0.unCTRL12_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL12_0_MPUEN	(*(volatile uint_io8_t*)0xB70809A0)  /*@bfbba@*/
#define MPUH0_CTRL12_0_MPUENC	(*(volatile uint_io8_t*)0xB70809A1)  /*@bfbba@*/

#define MPUH0_CTRL13_0	(MPUH0.unCTRL13_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL13_0_MPUEN	(*(volatile uint_io8_t*)0xB7080A00)  /*@bfbba@*/
#define MPUH0_CTRL13_0_MPUENC	(*(volatile uint_io8_t*)0xB7080A01)  /*@bfbba@*/

#define MPUH0_CTRL14_0	(MPUH0.unCTRL14_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL14_0_MPUEN	(*(volatile uint_io8_t*)0xB7080A60)  /*@bfbba@*/
#define MPUH0_CTRL14_0_MPUENC	(*(volatile uint_io8_t*)0xB7080A61)  /*@bfbba@*/

#define MPUH0_CTRL15_0	(MPUH0.unCTRL15_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL15_0_MPUEN	(*(volatile uint_io8_t*)0xB7080AC0)  /*@bfbba@*/
#define MPUH0_CTRL15_0_MPUENC	(*(volatile uint_io8_t*)0xB7080AC1)  /*@bfbba@*/

#define MPUH0_CTRL16_0	(MPUH0.unCTRL16_0.u8Register)  /*@rg@*/
#define MPUH0_CTRL16_0_MPUEN	(*(volatile uint_io8_t*)0xB7080B20)  /*@bfbba@*/
#define MPUH0_CTRL16_0_MPUENC	(*(volatile uint_io8_t*)0xB7080B21)  /*@bfbba@*/

typedef struct stc_mpuh0_ctrln_0_1_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_mpuh0_ctrln_0_1_field_t;

typedef union un_mpuh0_ctrln_0_1{
    uint_io8_t		u8Register;
    stc_mpuh0_ctrln_0_1_field_t		stcField;
}un_mpuh0_ctrln_0_1_t;

/* CTRL[9-16]_1 */
#define MPUH0_CTRL9_1	(MPUH0.unCTRL9_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL9_1_AP	(MPUH0.unCTRL9_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL10_1	(MPUH0.unCTRL10_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL10_1_AP	(MPUH0.unCTRL10_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL11_1	(MPUH0.unCTRL11_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL11_1_AP	(MPUH0.unCTRL11_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL12_1	(MPUH0.unCTRL12_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL12_1_AP	(MPUH0.unCTRL12_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL13_1	(MPUH0.unCTRL13_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL13_1_AP	(MPUH0.unCTRL13_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL14_1	(MPUH0.unCTRL14_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL14_1_AP	(MPUH0.unCTRL14_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL15_1	(MPUH0.unCTRL15_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL15_1_AP	(MPUH0.unCTRL15_1.stcField.u3AP)  /*@bf@*/

#define MPUH0_CTRL16_1	(MPUH0.unCTRL16_1.u8Register)  /*@rg@*/
#define MPUH0_CTRL16_1_AP	(MPUH0.unCTRL16_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_mpuh0_ctrln_1_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_mpuh0_ctrln_1_1_field_t;

typedef union un_mpuh0_ctrln_1_1{
    uint_io8_t		u8Register;
    stc_mpuh0_ctrln_1_1_field_t		stcField;
}un_mpuh0_ctrln_1_1_t;

/* SADDR[9-16] */
#define MPUH0_SADDR9	(MPUH0.unSADDR9.u32Register)  /*@rg@*/
#define MPUH0_SADDR9_SADDR	MPUH0_SADDR9  /*@bfrg@*/

#define MPUH0_SADDR10	(MPUH0.unSADDR10.u32Register)  /*@rg@*/
#define MPUH0_SADDR10_SADDR	MPUH0_SADDR10  /*@bfrg@*/

#define MPUH0_SADDR11	(MPUH0.unSADDR11.u32Register)  /*@rg@*/
#define MPUH0_SADDR11_SADDR	MPUH0_SADDR11  /*@bfrg@*/

#define MPUH0_SADDR12	(MPUH0.unSADDR12.u32Register)  /*@rg@*/
#define MPUH0_SADDR12_SADDR	MPUH0_SADDR12  /*@bfrg@*/

#define MPUH0_SADDR13	(MPUH0.unSADDR13.u32Register)  /*@rg@*/
#define MPUH0_SADDR13_SADDR	MPUH0_SADDR13  /*@bfrg@*/

#define MPUH0_SADDR14	(MPUH0.unSADDR14.u32Register)  /*@rg@*/
#define MPUH0_SADDR14_SADDR	MPUH0_SADDR14  /*@bfrg@*/

#define MPUH0_SADDR15	(MPUH0.unSADDR15.u32Register)  /*@rg@*/
#define MPUH0_SADDR15_SADDR	MPUH0_SADDR15  /*@bfrg@*/

#define MPUH0_SADDR16	(MPUH0.unSADDR16.u32Register)  /*@rg@*/
#define MPUH0_SADDR16_SADDR	MPUH0_SADDR16  /*@bfrg@*/

typedef union un_mpuh0_saddrn_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_saddrn_1_t;

/* EADDR[9-16] */
#define MPUH0_EADDR9	(MPUH0.unEADDR9.u32Register)  /*@rg@*/
#define MPUH0_EADDR9_EADDR	MPUH0_EADDR9  /*@bfrg@*/

#define MPUH0_EADDR10	(MPUH0.unEADDR10.u32Register)  /*@rg@*/
#define MPUH0_EADDR10_EADDR	MPUH0_EADDR10  /*@bfrg@*/

#define MPUH0_EADDR11	(MPUH0.unEADDR11.u32Register)  /*@rg@*/
#define MPUH0_EADDR11_EADDR	MPUH0_EADDR11  /*@bfrg@*/

#define MPUH0_EADDR12	(MPUH0.unEADDR12.u32Register)  /*@rg@*/
#define MPUH0_EADDR12_EADDR	MPUH0_EADDR12  /*@bfrg@*/

#define MPUH0_EADDR13	(MPUH0.unEADDR13.u32Register)  /*@rg@*/
#define MPUH0_EADDR13_EADDR	MPUH0_EADDR13  /*@bfrg@*/

#define MPUH0_EADDR14	(MPUH0.unEADDR14.u32Register)  /*@rg@*/
#define MPUH0_EADDR14_EADDR	MPUH0_EADDR14  /*@bfrg@*/

#define MPUH0_EADDR15	(MPUH0.unEADDR15.u32Register)  /*@rg@*/
#define MPUH0_EADDR15_EADDR	MPUH0_EADDR15  /*@bfrg@*/

#define MPUH0_EADDR16	(MPUH0.unEADDR16.u32Register)  /*@rg@*/
#define MPUH0_EADDR16_EADDR	MPUH0_EADDR16  /*@bfrg@*/

typedef union un_mpuh0_eaddrn_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mpuh0_eaddrn_1_t;


typedef struct stc_mpuh0{
    un_mpuh0_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_mpuh0_nmien_t	unNMIEN;	/* 0x00000004 */
    un_mpuh0_merrc_t	unMERRC;	/* 0x00000008 */
    un_mpuh0_merra_t	unMERRA;	/* 0x0000000C */
    un_mpuh0_ctrln_0_t	unCTRL1_0;	/* 0x00000010 */
    un_mpuh0_ctrln_1_t	unCTRL1_1;	/* 0x00000011 */
    uint_io8_t	au8Reserved0[2];	/* 0x00000012 */
    un_mpuh0_saddrn_t	unSADDR1;	/* 0x00000014 */
    un_mpuh0_eaddrn_t	unEADDR1;	/* 0x00000018 */
    un_mpuh0_ctrln_0_t	unCTRL2_0;	/* 0x0000001C */
    un_mpuh0_ctrln_1_t	unCTRL2_1;	/* 0x0000001D */
    uint_io8_t	au8Reserved1[2];	/* 0x0000001E */
    un_mpuh0_saddrn_t	unSADDR2;	/* 0x00000020 */
    un_mpuh0_eaddrn_t	unEADDR2;	/* 0x00000024 */
    un_mpuh0_ctrln_0_t	unCTRL3_0;	/* 0x00000028 */
    un_mpuh0_ctrln_1_t	unCTRL3_1;	/* 0x00000029 */
    uint_io8_t	au8Reserved2[2];	/* 0x0000002A */
    un_mpuh0_saddrn_t	unSADDR3;	/* 0x0000002C */
    un_mpuh0_eaddrn_t	unEADDR3;	/* 0x00000030 */
    un_mpuh0_ctrln_0_t	unCTRL4_0;	/* 0x00000034 */
    un_mpuh0_ctrln_1_t	unCTRL4_1;	/* 0x00000035 */
    uint_io8_t	au8Reserved3[2];	/* 0x00000036 */
    un_mpuh0_saddrn_t	unSADDR4;	/* 0x00000038 */
    un_mpuh0_eaddrn_t	unEADDR4;	/* 0x0000003C */
    un_mpuh0_ctrln_0_t	unCTRL5_0;	/* 0x00000040 */
    un_mpuh0_ctrln_1_t	unCTRL5_1;	/* 0x00000041 */
    uint_io8_t	au8Reserved4[2];	/* 0x00000042 */
    un_mpuh0_saddrn_t	unSADDR5;	/* 0x00000044 */
    un_mpuh0_eaddrn_t	unEADDR5;	/* 0x00000048 */
    un_mpuh0_ctrln_0_t	unCTRL6_0;	/* 0x0000004C */
    un_mpuh0_ctrln_1_t	unCTRL6_1;	/* 0x0000004D */
    uint_io8_t	au8Reserved5[2];	/* 0x0000004E */
    un_mpuh0_saddrn_t	unSADDR6;	/* 0x00000050 */
    un_mpuh0_eaddrn_t	unEADDR6;	/* 0x00000054 */
    un_mpuh0_ctrln_0_t	unCTRL7_0;	/* 0x00000058 */
    un_mpuh0_ctrln_1_t	unCTRL7_1;	/* 0x00000059 */
    uint_io8_t	au8Reserved6[2];	/* 0x0000005A */
    un_mpuh0_saddrn_t	unSADDR7;	/* 0x0000005C */
    un_mpuh0_eaddrn_t	unEADDR7;	/* 0x00000060 */
    un_mpuh0_ctrln_0_t	unCTRL8_0;	/* 0x00000064 */
    un_mpuh0_ctrln_1_t	unCTRL8_1;	/* 0x00000065 */
    uint_io8_t	au8Reserved7[2];	/* 0x00000066 */
    un_mpuh0_saddrn_t	unSADDR8;	/* 0x00000068 */
    un_mpuh0_eaddrn_t	unEADDR8;	/* 0x0000006C */
    un_mpuh0_unlock_t	unUNLOCK;	/* 0x00000070 */
    un_mpuh0_mid_t	unMID;	/* 0x00000074 */
    uint_io8_t	au8Reserved8[152];	/* 0x00000078 */
    un_mpuh0_ctrln_0_1_t	unCTRL9_0;	/* 0x00000110 */
    un_mpuh0_ctrln_1_1_t	unCTRL9_1;	/* 0x00000111 */
    uint_io8_t	au8Reserved9[2];	/* 0x00000112 */
    un_mpuh0_saddrn_1_t	unSADDR9;	/* 0x00000114 */
    un_mpuh0_eaddrn_1_t	unEADDR9;	/* 0x00000118 */
    un_mpuh0_ctrln_0_1_t	unCTRL10_0;	/* 0x0000011C */
    un_mpuh0_ctrln_1_1_t	unCTRL10_1;	/* 0x0000011D */
    uint_io8_t	au8Reserved10[2];	/* 0x0000011E */
    un_mpuh0_saddrn_1_t	unSADDR10;	/* 0x00000120 */
    un_mpuh0_eaddrn_1_t	unEADDR10;	/* 0x00000124 */
    un_mpuh0_ctrln_0_1_t	unCTRL11_0;	/* 0x00000128 */
    un_mpuh0_ctrln_1_1_t	unCTRL11_1;	/* 0x00000129 */
    uint_io8_t	au8Reserved11[2];	/* 0x0000012A */
    un_mpuh0_saddrn_1_t	unSADDR11;	/* 0x0000012C */
    un_mpuh0_eaddrn_1_t	unEADDR11;	/* 0x00000130 */
    un_mpuh0_ctrln_0_1_t	unCTRL12_0;	/* 0x00000134 */
    un_mpuh0_ctrln_1_1_t	unCTRL12_1;	/* 0x00000135 */
    uint_io8_t	au8Reserved12[2];	/* 0x00000136 */
    un_mpuh0_saddrn_1_t	unSADDR12;	/* 0x00000138 */
    un_mpuh0_eaddrn_1_t	unEADDR12;	/* 0x0000013C */
    un_mpuh0_ctrln_0_1_t	unCTRL13_0;	/* 0x00000140 */
    un_mpuh0_ctrln_1_1_t	unCTRL13_1;	/* 0x00000141 */
    uint_io8_t	au8Reserved13[2];	/* 0x00000142 */
    un_mpuh0_saddrn_1_t	unSADDR13;	/* 0x00000144 */
    un_mpuh0_eaddrn_1_t	unEADDR13;	/* 0x00000148 */
    un_mpuh0_ctrln_0_1_t	unCTRL14_0;	/* 0x0000014C */
    un_mpuh0_ctrln_1_1_t	unCTRL14_1;	/* 0x0000014D */
    uint_io8_t	au8Reserved14[2];	/* 0x0000014E */
    un_mpuh0_saddrn_1_t	unSADDR14;	/* 0x00000150 */
    un_mpuh0_eaddrn_1_t	unEADDR14;	/* 0x00000154 */
    un_mpuh0_ctrln_0_1_t	unCTRL15_0;	/* 0x00000158 */
    un_mpuh0_ctrln_1_1_t	unCTRL15_1;	/* 0x00000159 */
    uint_io8_t	au8Reserved15[2];	/* 0x0000015A */
    un_mpuh0_saddrn_1_t	unSADDR15;	/* 0x0000015C */
    un_mpuh0_eaddrn_1_t	unEADDR15;	/* 0x00000160 */
    un_mpuh0_ctrln_0_1_t	unCTRL16_0;	/* 0x00000164 */
    un_mpuh0_ctrln_1_1_t	unCTRL16_1;	/* 0x00000165 */
    uint_io8_t	au8Reserved16[2];	/* 0x00000166 */
    un_mpuh0_saddrn_1_t	unSADDR16;	/* 0x00000168 */
    un_mpuh0_eaddrn_1_t	unEADDR16;	/* 0x0000016C */
    uint_io8_t	au8Reserved17[3728];	/* 0x00000170 */
}stc_mpuh0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mpuh0_t	stcMPUH0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 4096(0x1000) bytes */


#endif /* __S6J3200_MPUH_H */
