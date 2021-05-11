/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MLB_H
#define __S6J3200_MLB_H

#include "s6j3200io_basetypes.h"

/* MLB0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MLB0	stcMLB0
#else /* __IO_DEFINE */
#define MLB0	(*((volatile stc_mlb0_t*)0xB8008000))
#endif /* __IO_DEFINE */

/* DCCR */
#define MLB0_DCCR	(MLB0.unDCCR.u32Register)  /*@rg@*/
#define MLB0_DCCR_MDA	(MLB0.unDCCR.au8Byte[0])  /*@bfbyte@*/
#define MLB0_DCCR_MRS	(MLB0.unDCCR.stcField.u1MRS)  /*@bf@*/
#define MLB0_DCCR_MHRE	(MLB0.unDCCR.stcField.u1MHRE)  /*@bf@*/
#define MLB0_DCCR_MLE	(MLB0.unDCCR.stcField.u1MLE)  /*@bf@*/
#define MLB0_DCCR_MLK	(MLB0.unDCCR.stcField.u1MLK)  /*@bf@*/
#define MLB0_DCCR_M5PS	(MLB0.unDCCR.stcField.u1M5PS)  /*@bf@*/
#define MLB0_DCCR_MCS	(MLB0.unDCCR.stcField.u2MCS)  /*@bf@*/
#define MLB0_DCCR_LBM	(MLB0.unDCCR.stcField.u1LBM)  /*@bf@*/
#define MLB0_DCCR_MDE	(MLB0.unDCCR.stcField.u1MDE)  /*@bf@*/

typedef struct stc_mlb0_dccr_field{
    uint_io32_t		u8MDA:8;
    uint_io32_t		:15;
    uint_io32_t		u1MRS:1;
    uint_io32_t		u1MHRE:1;
    uint_io32_t		u1MLE:1;
    uint_io32_t		u1MLK:1;
    uint_io32_t		u1M5PS:1;
    uint_io32_t		u2MCS:2;
    uint_io32_t		u1LBM:1;
    uint_io32_t		u1MDE:1;
}stc_mlb0_dccr_field_t;

typedef union un_mlb0_dccr{
    uint_io32_t		u32Register;
    stc_mlb0_dccr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_dccr_t;

/* SSCR */
#define MLB0_SSCR	(MLB0.unSSCR.u32Register)  /*@rg@*/
#define MLB0_SSCR_SDR	(MLB0.unSSCR.stcField.u1SDR)  /*@bf@*/
#define MLB0_SSCR_SDNL	(MLB0.unSSCR.stcField.u1SDNL)  /*@bf@*/
#define MLB0_SSCR_SDNU	(MLB0.unSSCR.stcField.u1SDNU)  /*@bf@*/
#define MLB0_SSCR_SDCS	(MLB0.unSSCR.stcField.u1SDCS)  /*@bf@*/
#define MLB0_SSCR_SDSC	(MLB0.unSSCR.stcField.u1SDSC)  /*@bf@*/
#define MLB0_SSCR_SDML	(MLB0.unSSCR.stcField.u1SDML)  /*@bf@*/
#define MLB0_SSCR_SDMU	(MLB0.unSSCR.stcField.u1SDMU)  /*@bf@*/
#define MLB0_SSCR_SSRE	(MLB0.unSSCR.stcField.u1SSRE)  /*@bf@*/

typedef struct stc_mlb0_sscr_field{
    uint_io32_t		u1SDR:1;
    uint_io32_t		u1SDNL:1;
    uint_io32_t		u1SDNU:1;
    uint_io32_t		u1SDCS:1;
    uint_io32_t		u1SDSC:1;
    uint_io32_t		u1SDML:1;
    uint_io32_t		u1SDMU:1;
    uint_io32_t		u1SSRE:1;
    uint_io32_t		:24;
}stc_mlb0_sscr_field_t;

typedef union un_mlb0_sscr{
    uint_io32_t		u32Register;
    stc_mlb0_sscr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_sscr_t;

/* SDCR */
#define MLB0_SDCR	(MLB0.unSDCR.u32Register)  /*@rg@*/
#define MLB0_SDCR_MSD	MLB0_SDCR  /*@bfrg@*/

typedef union un_mlb0_sdcr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_sdcr_t;

/* SMCR */
#define MLB0_SMCR	(MLB0.unSMCR.u32Register)  /*@rg@*/
#define MLB0_SMCR_SMR	(MLB0.unSMCR.stcField.u1SMR)  /*@bf@*/
#define MLB0_SMCR_SMNL	(MLB0.unSMCR.stcField.u1SMNL)  /*@bf@*/
#define MLB0_SMCR_SMNU	(MLB0.unSMCR.stcField.u1SMNU)  /*@bf@*/
#define MLB0_SMCR_SMCS	(MLB0.unSMCR.stcField.u1SMCS)  /*@bf@*/
#define MLB0_SMCR_SMSC	(MLB0.unSMCR.stcField.u1SMSC)  /*@bf@*/
#define MLB0_SMCR_SMML	(MLB0.unSMCR.stcField.u1SMML)  /*@bf@*/
#define MLB0_SMCR_SMMU	(MLB0.unSMCR.stcField.u1SMMU)  /*@bf@*/

typedef struct stc_mlb0_smcr_field{
    uint_io32_t		u1SMR:1;
    uint_io32_t		u1SMNL:1;
    uint_io32_t		u1SMNU:1;
    uint_io32_t		u1SMCS:1;
    uint_io32_t		u1SMSC:1;
    uint_io32_t		u1SMML:1;
    uint_io32_t		u1SMMU:1;
    uint_io32_t		:25;
}stc_mlb0_smcr_field_t;

typedef union un_mlb0_smcr{
    uint_io32_t		u32Register;
    stc_mlb0_smcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_smcr_t;

/* VCCR */
#define MLB0_VCCR	(MLB0.unVCCR.u32Register)  /*@rg@*/
#define MLB0_VCCR_MMI	(MLB0.unVCCR.au8Byte[0])  /*@bfbyte@*/
#define MLB0_VCCR_MMA	(MLB0.unVCCR.au8Byte[1])  /*@bfbyte@*/
#define MLB0_VCCR_UMI	(MLB0.unVCCR.au8Byte[2])  /*@bfbyte@*/
#define MLB0_VCCR_UMA	(MLB0.unVCCR.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_mlb0_vccr_field{
    uint_io32_t		u8MMI:8;
    uint_io32_t		u8MMA:8;
    uint_io32_t		u8UMI:8;
    uint_io32_t		u8UMA:8;
}stc_mlb0_vccr_field_t;

typedef union un_mlb0_vccr{
    uint_io32_t		u32Register;
    stc_mlb0_vccr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_vccr_t;

/* SBCR */
#define MLB0_SBCR	(MLB0.unSBCR.u32Register)  /*@rg@*/
#define MLB0_SBCR_STBA	(MLB0.unSBCR.au16Halfword[0])  /*@bfhword@*/
#define MLB0_SBCR_SRBA	(MLB0.unSBCR.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mlb0_sbcr_field{
    uint_io32_t		u16STBA:16;
    uint_io32_t		u16SRBA:16;
}stc_mlb0_sbcr_field_t;

typedef union un_mlb0_sbcr{
    uint_io32_t		u32Register;
    stc_mlb0_sbcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_sbcr_t;

/* ABCR */
#define MLB0_ABCR	(MLB0.unABCR.u32Register)  /*@rg@*/
#define MLB0_ABCR_ATBA	(MLB0.unABCR.au16Halfword[0])  /*@bfhword@*/
#define MLB0_ABCR_ARBA	(MLB0.unABCR.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mlb0_abcr_field{
    uint_io32_t		u16ATBA:16;
    uint_io32_t		u16ARBA:16;
}stc_mlb0_abcr_field_t;

typedef union un_mlb0_abcr{
    uint_io32_t		u32Register;
    stc_mlb0_abcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_abcr_t;

/* CBCR */
#define MLB0_CBCR	(MLB0.unCBCR.u32Register)  /*@rg@*/
#define MLB0_CBCR_CTBA	(MLB0.unCBCR.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CBCR_CRBA	(MLB0.unCBCR.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mlb0_cbcr_field{
    uint_io32_t		u16CTBA:16;
    uint_io32_t		u16CRBA:16;
}stc_mlb0_cbcr_field_t;

typedef union un_mlb0_cbcr{
    uint_io32_t		u32Register;
    stc_mlb0_cbcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_cbcr_t;

/* IBCR */
#define MLB0_IBCR	(MLB0.unIBCR.u32Register)  /*@rg@*/
#define MLB0_IBCR_ITBA	(MLB0.unIBCR.au16Halfword[0])  /*@bfhword@*/
#define MLB0_IBCR_IRBA	(MLB0.unIBCR.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mlb0_ibcr_field{
    uint_io32_t		u16ITBA:16;
    uint_io32_t		u16IRBA:16;
}stc_mlb0_ibcr_field_t;

typedef union un_mlb0_ibcr{
    uint_io32_t		u32Register;
    stc_mlb0_ibcr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_ibcr_t;

/* CICR */
#define MLB0_CICR	(MLB0.unCICR.u32Register)  /*@rg@*/
#define MLB0_CICR_CNSU0	(MLB0.unCICR.stcField.u1CNSU0)  /*@bf@*/
#define MLB0_CICR_CNSU1	(MLB0.unCICR.stcField.u1CNSU1)  /*@bf@*/
#define MLB0_CICR_CNSU2	(MLB0.unCICR.stcField.u1CNSU2)  /*@bf@*/
#define MLB0_CICR_CNSU3	(MLB0.unCICR.stcField.u1CNSU3)  /*@bf@*/
#define MLB0_CICR_CNSU4	(MLB0.unCICR.stcField.u1CNSU4)  /*@bf@*/
#define MLB0_CICR_CNSU5	(MLB0.unCICR.stcField.u1CNSU5)  /*@bf@*/
#define MLB0_CICR_CNSU6	(MLB0.unCICR.stcField.u1CNSU6)  /*@bf@*/
#define MLB0_CICR_CNSU7	(MLB0.unCICR.stcField.u1CNSU7)  /*@bf@*/
#define MLB0_CICR_CNSU8	(MLB0.unCICR.stcField.u1CNSU8)  /*@bf@*/
#define MLB0_CICR_CNSU9	(MLB0.unCICR.stcField.u1CNSU9)  /*@bf@*/
#define MLB0_CICR_CNSU10	(MLB0.unCICR.stcField.u1CNSU10)  /*@bf@*/
#define MLB0_CICR_CNSU11	(MLB0.unCICR.stcField.u1CNSU11)  /*@bf@*/
#define MLB0_CICR_CNSU12	(MLB0.unCICR.stcField.u1CNSU12)  /*@bf@*/
#define MLB0_CICR_CNSU13	(MLB0.unCICR.stcField.u1CNSU13)  /*@bf@*/
#define MLB0_CICR_CNSU14	(MLB0.unCICR.stcField.u1CNSU14)  /*@bf@*/
#define MLB0_CICR_CNSU15	(MLB0.unCICR.stcField.u1CNSU15)  /*@bf@*/

typedef struct stc_mlb0_cicr_field{
    uint_io32_t		u1CNSU0:1;
    uint_io32_t		u1CNSU1:1;
    uint_io32_t		u1CNSU2:1;
    uint_io32_t		u1CNSU3:1;
    uint_io32_t		u1CNSU4:1;
    uint_io32_t		u1CNSU5:1;
    uint_io32_t		u1CNSU6:1;
    uint_io32_t		u1CNSU7:1;
    uint_io32_t		u1CNSU8:1;
    uint_io32_t		u1CNSU9:1;
    uint_io32_t		u1CNSU10:1;
    uint_io32_t		u1CNSU11:1;
    uint_io32_t		u1CNSU12:1;
    uint_io32_t		u1CNSU13:1;
    uint_io32_t		u1CNSU14:1;
    uint_io32_t		u1CNSU15:1;
    uint_io32_t		:16;
}stc_mlb0_cicr_field_t;

typedef union un_mlb0_cicr{
    uint_io32_t		u32Register;
    stc_mlb0_cicr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_cicr_t;

/* AHBMCTL */
#define MLB0_AHBMCTL	(MLB0.unAHBMCTL.u32Register)  /*@rg@*/
#define MLB0_AHBMCTL_MCYCNONREQ	(MLB0.unAHBMCTL.au16Halfword[0])  /*@bfhword@*/
#define MLB0_AHBMCTL_MAXTRANS	(MLB0.unAHBMCTL.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mlb0_ahbmctl_field{
    uint_io32_t		u16MCYCNONREQ:16;
    uint_io32_t		u16MAXTRANS:16;
}stc_mlb0_ahbmctl_field_t;

typedef union un_mlb0_ahbmctl{
    uint_io32_t		u32Register;
    stc_mlb0_ahbmctl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_ahbmctl_t;

/* CECR[0-15] */
#define MLB0_CECR0	(MLB0.unCECR0.u32Register)  /*@rg@*/
#define MLB0_CECR0_CA	(MLB0.unCECR0.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR0_IPL	(MLB0.unCECR0.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR0_MASK0	(MLB0.unCECR0.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR0_MASK1	(MLB0.unCECR0.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR0_MASK2	(MLB0.unCECR0.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR0_MASK3	(MLB0.unCECR0.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR0_MASK4	(MLB0.unCECR0.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR0_MASK6	(MLB0.unCECR0.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR0_MDS	(MLB0.unCECR0.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR0_FCE	(MLB0.unCECR0.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR0_CT	(MLB0.unCECR0.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR0_TR	(MLB0.unCECR0.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR0_CE	(MLB0.unCECR0.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR1	(MLB0.unCECR1.u32Register)  /*@rg@*/
#define MLB0_CECR1_CA	(MLB0.unCECR1.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR1_IPL	(MLB0.unCECR1.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR1_MASK0	(MLB0.unCECR1.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR1_MASK1	(MLB0.unCECR1.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR1_MASK2	(MLB0.unCECR1.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR1_MASK3	(MLB0.unCECR1.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR1_MASK4	(MLB0.unCECR1.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR1_MASK6	(MLB0.unCECR1.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR1_MDS	(MLB0.unCECR1.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR1_FCE	(MLB0.unCECR1.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR1_CT	(MLB0.unCECR1.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR1_TR	(MLB0.unCECR1.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR1_CE	(MLB0.unCECR1.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR2	(MLB0.unCECR2.u32Register)  /*@rg@*/
#define MLB0_CECR2_CA	(MLB0.unCECR2.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR2_IPL	(MLB0.unCECR2.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR2_MASK0	(MLB0.unCECR2.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR2_MASK1	(MLB0.unCECR2.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR2_MASK2	(MLB0.unCECR2.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR2_MASK3	(MLB0.unCECR2.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR2_MASK4	(MLB0.unCECR2.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR2_MASK6	(MLB0.unCECR2.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR2_MDS	(MLB0.unCECR2.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR2_FCE	(MLB0.unCECR2.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR2_CT	(MLB0.unCECR2.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR2_TR	(MLB0.unCECR2.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR2_CE	(MLB0.unCECR2.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR3	(MLB0.unCECR3.u32Register)  /*@rg@*/
#define MLB0_CECR3_CA	(MLB0.unCECR3.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR3_IPL	(MLB0.unCECR3.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR3_MASK0	(MLB0.unCECR3.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR3_MASK1	(MLB0.unCECR3.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR3_MASK2	(MLB0.unCECR3.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR3_MASK3	(MLB0.unCECR3.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR3_MASK4	(MLB0.unCECR3.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR3_MASK6	(MLB0.unCECR3.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR3_MDS	(MLB0.unCECR3.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR3_FCE	(MLB0.unCECR3.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR3_CT	(MLB0.unCECR3.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR3_TR	(MLB0.unCECR3.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR3_CE	(MLB0.unCECR3.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR4	(MLB0.unCECR4.u32Register)  /*@rg@*/
#define MLB0_CECR4_CA	(MLB0.unCECR4.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR4_IPL	(MLB0.unCECR4.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR4_MASK0	(MLB0.unCECR4.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR4_MASK1	(MLB0.unCECR4.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR4_MASK2	(MLB0.unCECR4.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR4_MASK3	(MLB0.unCECR4.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR4_MASK4	(MLB0.unCECR4.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR4_MASK6	(MLB0.unCECR4.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR4_MDS	(MLB0.unCECR4.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR4_FCE	(MLB0.unCECR4.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR4_CT	(MLB0.unCECR4.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR4_TR	(MLB0.unCECR4.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR4_CE	(MLB0.unCECR4.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR5	(MLB0.unCECR5.u32Register)  /*@rg@*/
#define MLB0_CECR5_CA	(MLB0.unCECR5.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR5_IPL	(MLB0.unCECR5.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR5_MASK0	(MLB0.unCECR5.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR5_MASK1	(MLB0.unCECR5.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR5_MASK2	(MLB0.unCECR5.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR5_MASK3	(MLB0.unCECR5.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR5_MASK4	(MLB0.unCECR5.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR5_MASK6	(MLB0.unCECR5.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR5_MDS	(MLB0.unCECR5.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR5_FCE	(MLB0.unCECR5.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR5_CT	(MLB0.unCECR5.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR5_TR	(MLB0.unCECR5.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR5_CE	(MLB0.unCECR5.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR6	(MLB0.unCECR6.u32Register)  /*@rg@*/
#define MLB0_CECR6_CA	(MLB0.unCECR6.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR6_IPL	(MLB0.unCECR6.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR6_MASK0	(MLB0.unCECR6.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR6_MASK1	(MLB0.unCECR6.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR6_MASK2	(MLB0.unCECR6.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR6_MASK3	(MLB0.unCECR6.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR6_MASK4	(MLB0.unCECR6.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR6_MASK6	(MLB0.unCECR6.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR6_MDS	(MLB0.unCECR6.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR6_FCE	(MLB0.unCECR6.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR6_CT	(MLB0.unCECR6.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR6_TR	(MLB0.unCECR6.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR6_CE	(MLB0.unCECR6.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR7	(MLB0.unCECR7.u32Register)  /*@rg@*/
#define MLB0_CECR7_CA	(MLB0.unCECR7.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR7_IPL	(MLB0.unCECR7.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR7_MASK0	(MLB0.unCECR7.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR7_MASK1	(MLB0.unCECR7.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR7_MASK2	(MLB0.unCECR7.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR7_MASK3	(MLB0.unCECR7.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR7_MASK4	(MLB0.unCECR7.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR7_MASK6	(MLB0.unCECR7.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR7_MDS	(MLB0.unCECR7.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR7_FCE	(MLB0.unCECR7.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR7_CT	(MLB0.unCECR7.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR7_TR	(MLB0.unCECR7.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR7_CE	(MLB0.unCECR7.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR8	(MLB0.unCECR8.u32Register)  /*@rg@*/
#define MLB0_CECR8_CA	(MLB0.unCECR8.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR8_IPL	(MLB0.unCECR8.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR8_MASK0	(MLB0.unCECR8.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR8_MASK1	(MLB0.unCECR8.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR8_MASK2	(MLB0.unCECR8.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR8_MASK3	(MLB0.unCECR8.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR8_MASK4	(MLB0.unCECR8.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR8_MASK6	(MLB0.unCECR8.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR8_MDS	(MLB0.unCECR8.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR8_FCE	(MLB0.unCECR8.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR8_CT	(MLB0.unCECR8.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR8_TR	(MLB0.unCECR8.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR8_CE	(MLB0.unCECR8.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR9	(MLB0.unCECR9.u32Register)  /*@rg@*/
#define MLB0_CECR9_CA	(MLB0.unCECR9.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR9_IPL	(MLB0.unCECR9.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR9_MASK0	(MLB0.unCECR9.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR9_MASK1	(MLB0.unCECR9.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR9_MASK2	(MLB0.unCECR9.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR9_MASK3	(MLB0.unCECR9.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR9_MASK4	(MLB0.unCECR9.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR9_MASK6	(MLB0.unCECR9.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR9_MDS	(MLB0.unCECR9.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR9_FCE	(MLB0.unCECR9.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR9_CT	(MLB0.unCECR9.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR9_TR	(MLB0.unCECR9.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR9_CE	(MLB0.unCECR9.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR10	(MLB0.unCECR10.u32Register)  /*@rg@*/
#define MLB0_CECR10_CA	(MLB0.unCECR10.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR10_IPL	(MLB0.unCECR10.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR10_MASK0	(MLB0.unCECR10.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR10_MASK1	(MLB0.unCECR10.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR10_MASK2	(MLB0.unCECR10.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR10_MASK3	(MLB0.unCECR10.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR10_MASK4	(MLB0.unCECR10.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR10_MASK6	(MLB0.unCECR10.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR10_MDS	(MLB0.unCECR10.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR10_FCE	(MLB0.unCECR10.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR10_CT	(MLB0.unCECR10.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR10_TR	(MLB0.unCECR10.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR10_CE	(MLB0.unCECR10.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR11	(MLB0.unCECR11.u32Register)  /*@rg@*/
#define MLB0_CECR11_CA	(MLB0.unCECR11.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR11_IPL	(MLB0.unCECR11.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR11_MASK0	(MLB0.unCECR11.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR11_MASK1	(MLB0.unCECR11.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR11_MASK2	(MLB0.unCECR11.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR11_MASK3	(MLB0.unCECR11.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR11_MASK4	(MLB0.unCECR11.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR11_MASK6	(MLB0.unCECR11.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR11_MDS	(MLB0.unCECR11.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR11_FCE	(MLB0.unCECR11.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR11_CT	(MLB0.unCECR11.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR11_TR	(MLB0.unCECR11.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR11_CE	(MLB0.unCECR11.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR12	(MLB0.unCECR12.u32Register)  /*@rg@*/
#define MLB0_CECR12_CA	(MLB0.unCECR12.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR12_IPL	(MLB0.unCECR12.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR12_MASK0	(MLB0.unCECR12.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR12_MASK1	(MLB0.unCECR12.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR12_MASK2	(MLB0.unCECR12.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR12_MASK3	(MLB0.unCECR12.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR12_MASK4	(MLB0.unCECR12.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR12_MASK6	(MLB0.unCECR12.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR12_MDS	(MLB0.unCECR12.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR12_FCE	(MLB0.unCECR12.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR12_CT	(MLB0.unCECR12.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR12_TR	(MLB0.unCECR12.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR12_CE	(MLB0.unCECR12.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR13	(MLB0.unCECR13.u32Register)  /*@rg@*/
#define MLB0_CECR13_CA	(MLB0.unCECR13.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR13_IPL	(MLB0.unCECR13.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR13_MASK0	(MLB0.unCECR13.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR13_MASK1	(MLB0.unCECR13.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR13_MASK2	(MLB0.unCECR13.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR13_MASK3	(MLB0.unCECR13.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR13_MASK4	(MLB0.unCECR13.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR13_MASK6	(MLB0.unCECR13.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR13_MDS	(MLB0.unCECR13.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR13_FCE	(MLB0.unCECR13.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR13_CT	(MLB0.unCECR13.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR13_TR	(MLB0.unCECR13.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR13_CE	(MLB0.unCECR13.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR14	(MLB0.unCECR14.u32Register)  /*@rg@*/
#define MLB0_CECR14_CA	(MLB0.unCECR14.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR14_IPL	(MLB0.unCECR14.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR14_MASK0	(MLB0.unCECR14.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR14_MASK1	(MLB0.unCECR14.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR14_MASK2	(MLB0.unCECR14.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR14_MASK3	(MLB0.unCECR14.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR14_MASK4	(MLB0.unCECR14.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR14_MASK6	(MLB0.unCECR14.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR14_MDS	(MLB0.unCECR14.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR14_FCE	(MLB0.unCECR14.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR14_CT	(MLB0.unCECR14.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR14_TR	(MLB0.unCECR14.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR14_CE	(MLB0.unCECR14.stcField.u1CE)  /*@bf@*/

#define MLB0_CECR15	(MLB0.unCECR15.u32Register)  /*@rg@*/
#define MLB0_CECR15_CA	(MLB0.unCECR15.au8Byte[0])  /*@bfbyte@*/
#define MLB0_CECR15_IPL	(MLB0.unCECR15.au8Byte[1])  /*@bfbyte@*/
#define MLB0_CECR15_MASK0	(MLB0.unCECR15.stcField.u1MASK0)  /*@bf@*/
#define MLB0_CECR15_MASK1	(MLB0.unCECR15.stcField.u1MASK1)  /*@bf@*/
#define MLB0_CECR15_MASK2	(MLB0.unCECR15.stcField.u1MASK2)  /*@bf@*/
#define MLB0_CECR15_MASK3	(MLB0.unCECR15.stcField.u1MASK3)  /*@bf@*/
#define MLB0_CECR15_MASK4	(MLB0.unCECR15.stcField.u1MASK4)  /*@bf@*/
#define MLB0_CECR15_MASK6	(MLB0.unCECR15.stcField.u1MASK6)  /*@bf@*/
#define MLB0_CECR15_MDS	(MLB0.unCECR15.stcField.u2MDS)  /*@bf@*/
#define MLB0_CECR15_FCE	(MLB0.unCECR15.stcField.u1FCE)  /*@bf@*/
#define MLB0_CECR15_CT	(MLB0.unCECR15.stcField.u2CT)  /*@bf@*/
#define MLB0_CECR15_TR	(MLB0.unCECR15.stcField.u1TR)  /*@bf@*/
#define MLB0_CECR15_CE	(MLB0.unCECR15.stcField.u1CE)  /*@bf@*/

typedef struct stc_mlb0_cecrn_field{
    uint_io32_t		u8CA:8;
    uint_io32_t		u8IPL:8;
    uint_io32_t		u1MASK0:1;
    uint_io32_t		u1MASK1:1;
    uint_io32_t		u1MASK2:1;
    uint_io32_t		u1MASK3:1;
    uint_io32_t		u1MASK4:1;
    uint_io32_t		:1;
    uint_io32_t		u1MASK6:1;
    uint_io32_t		:2;
    uint_io32_t		u2MDS:2;
    uint_io32_t		u1FCE:1;
    uint_io32_t		u2CT:2;
    uint_io32_t		u1TR:1;
    uint_io32_t		u1CE:1;
}stc_mlb0_cecrn_field_t;

typedef union un_mlb0_cecrn{
    uint_io32_t		u32Register;
    stc_mlb0_cecrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_cecrn_t;

/* CSCR[0-15] */
#define MLB0_CSCR0	(MLB0.unCSCR0.u32Register)  /*@rg@*/
#define MLB0_CSCR0_STS0	(MLB0.unCSCR0.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR0_STS1	(MLB0.unCSCR0.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR0_STS2	(MLB0.unCSCR0.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR0_STS3	(MLB0.unCSCR0.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR0_STS4	(MLB0.unCSCR0.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR0_STS5	(MLB0.unCSCR0.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR0_STS6	(MLB0.unCSCR0.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR0_STS8	(MLB0.unCSCR0.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR0_STS9	(MLB0.unCSCR0.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR0_STS10	(MLB0.unCSCR0.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR0_STS11	(MLB0.unCSCR0.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR0_RDY	(MLB0.unCSCR0.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR0_GB	(MLB0.unCSCR0.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR0_IVB	(MLB0.unCSCR0.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR0_BF	(MLB0.unCSCR0.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR0_BM	(MLB0.unCSCR0.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR1	(MLB0.unCSCR1.u32Register)  /*@rg@*/
#define MLB0_CSCR1_STS0	(MLB0.unCSCR1.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR1_STS1	(MLB0.unCSCR1.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR1_STS2	(MLB0.unCSCR1.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR1_STS3	(MLB0.unCSCR1.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR1_STS4	(MLB0.unCSCR1.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR1_STS5	(MLB0.unCSCR1.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR1_STS6	(MLB0.unCSCR1.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR1_STS8	(MLB0.unCSCR1.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR1_STS9	(MLB0.unCSCR1.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR1_STS10	(MLB0.unCSCR1.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR1_STS11	(MLB0.unCSCR1.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR1_RDY	(MLB0.unCSCR1.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR1_GB	(MLB0.unCSCR1.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR1_IVB	(MLB0.unCSCR1.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR1_BF	(MLB0.unCSCR1.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR1_BM	(MLB0.unCSCR1.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR2	(MLB0.unCSCR2.u32Register)  /*@rg@*/
#define MLB0_CSCR2_STS0	(MLB0.unCSCR2.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR2_STS1	(MLB0.unCSCR2.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR2_STS2	(MLB0.unCSCR2.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR2_STS3	(MLB0.unCSCR2.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR2_STS4	(MLB0.unCSCR2.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR2_STS5	(MLB0.unCSCR2.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR2_STS6	(MLB0.unCSCR2.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR2_STS8	(MLB0.unCSCR2.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR2_STS9	(MLB0.unCSCR2.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR2_STS10	(MLB0.unCSCR2.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR2_STS11	(MLB0.unCSCR2.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR2_RDY	(MLB0.unCSCR2.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR2_GB	(MLB0.unCSCR2.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR2_IVB	(MLB0.unCSCR2.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR2_BF	(MLB0.unCSCR2.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR2_BM	(MLB0.unCSCR2.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR3	(MLB0.unCSCR3.u32Register)  /*@rg@*/
#define MLB0_CSCR3_STS0	(MLB0.unCSCR3.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR3_STS1	(MLB0.unCSCR3.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR3_STS2	(MLB0.unCSCR3.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR3_STS3	(MLB0.unCSCR3.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR3_STS4	(MLB0.unCSCR3.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR3_STS5	(MLB0.unCSCR3.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR3_STS6	(MLB0.unCSCR3.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR3_STS8	(MLB0.unCSCR3.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR3_STS9	(MLB0.unCSCR3.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR3_STS10	(MLB0.unCSCR3.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR3_STS11	(MLB0.unCSCR3.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR3_RDY	(MLB0.unCSCR3.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR3_GB	(MLB0.unCSCR3.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR3_IVB	(MLB0.unCSCR3.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR3_BF	(MLB0.unCSCR3.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR3_BM	(MLB0.unCSCR3.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR4	(MLB0.unCSCR4.u32Register)  /*@rg@*/
#define MLB0_CSCR4_STS0	(MLB0.unCSCR4.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR4_STS1	(MLB0.unCSCR4.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR4_STS2	(MLB0.unCSCR4.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR4_STS3	(MLB0.unCSCR4.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR4_STS4	(MLB0.unCSCR4.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR4_STS5	(MLB0.unCSCR4.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR4_STS6	(MLB0.unCSCR4.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR4_STS8	(MLB0.unCSCR4.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR4_STS9	(MLB0.unCSCR4.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR4_STS10	(MLB0.unCSCR4.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR4_STS11	(MLB0.unCSCR4.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR4_RDY	(MLB0.unCSCR4.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR4_GB	(MLB0.unCSCR4.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR4_IVB	(MLB0.unCSCR4.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR4_BF	(MLB0.unCSCR4.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR4_BM	(MLB0.unCSCR4.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR5	(MLB0.unCSCR5.u32Register)  /*@rg@*/
#define MLB0_CSCR5_STS0	(MLB0.unCSCR5.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR5_STS1	(MLB0.unCSCR5.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR5_STS2	(MLB0.unCSCR5.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR5_STS3	(MLB0.unCSCR5.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR5_STS4	(MLB0.unCSCR5.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR5_STS5	(MLB0.unCSCR5.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR5_STS6	(MLB0.unCSCR5.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR5_STS8	(MLB0.unCSCR5.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR5_STS9	(MLB0.unCSCR5.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR5_STS10	(MLB0.unCSCR5.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR5_STS11	(MLB0.unCSCR5.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR5_RDY	(MLB0.unCSCR5.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR5_GB	(MLB0.unCSCR5.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR5_IVB	(MLB0.unCSCR5.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR5_BF	(MLB0.unCSCR5.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR5_BM	(MLB0.unCSCR5.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR6	(MLB0.unCSCR6.u32Register)  /*@rg@*/
#define MLB0_CSCR6_STS0	(MLB0.unCSCR6.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR6_STS1	(MLB0.unCSCR6.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR6_STS2	(MLB0.unCSCR6.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR6_STS3	(MLB0.unCSCR6.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR6_STS4	(MLB0.unCSCR6.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR6_STS5	(MLB0.unCSCR6.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR6_STS6	(MLB0.unCSCR6.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR6_STS8	(MLB0.unCSCR6.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR6_STS9	(MLB0.unCSCR6.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR6_STS10	(MLB0.unCSCR6.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR6_STS11	(MLB0.unCSCR6.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR6_RDY	(MLB0.unCSCR6.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR6_GB	(MLB0.unCSCR6.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR6_IVB	(MLB0.unCSCR6.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR6_BF	(MLB0.unCSCR6.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR6_BM	(MLB0.unCSCR6.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR7	(MLB0.unCSCR7.u32Register)  /*@rg@*/
#define MLB0_CSCR7_STS0	(MLB0.unCSCR7.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR7_STS1	(MLB0.unCSCR7.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR7_STS2	(MLB0.unCSCR7.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR7_STS3	(MLB0.unCSCR7.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR7_STS4	(MLB0.unCSCR7.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR7_STS5	(MLB0.unCSCR7.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR7_STS6	(MLB0.unCSCR7.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR7_STS8	(MLB0.unCSCR7.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR7_STS9	(MLB0.unCSCR7.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR7_STS10	(MLB0.unCSCR7.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR7_STS11	(MLB0.unCSCR7.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR7_RDY	(MLB0.unCSCR7.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR7_GB	(MLB0.unCSCR7.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR7_IVB	(MLB0.unCSCR7.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR7_BF	(MLB0.unCSCR7.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR7_BM	(MLB0.unCSCR7.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR8	(MLB0.unCSCR8.u32Register)  /*@rg@*/
#define MLB0_CSCR8_STS0	(MLB0.unCSCR8.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR8_STS1	(MLB0.unCSCR8.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR8_STS2	(MLB0.unCSCR8.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR8_STS3	(MLB0.unCSCR8.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR8_STS4	(MLB0.unCSCR8.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR8_STS5	(MLB0.unCSCR8.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR8_STS6	(MLB0.unCSCR8.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR8_STS8	(MLB0.unCSCR8.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR8_STS9	(MLB0.unCSCR8.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR8_STS10	(MLB0.unCSCR8.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR8_STS11	(MLB0.unCSCR8.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR8_RDY	(MLB0.unCSCR8.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR8_GB	(MLB0.unCSCR8.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR8_IVB	(MLB0.unCSCR8.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR8_BF	(MLB0.unCSCR8.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR8_BM	(MLB0.unCSCR8.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR9	(MLB0.unCSCR9.u32Register)  /*@rg@*/
#define MLB0_CSCR9_STS0	(MLB0.unCSCR9.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR9_STS1	(MLB0.unCSCR9.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR9_STS2	(MLB0.unCSCR9.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR9_STS3	(MLB0.unCSCR9.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR9_STS4	(MLB0.unCSCR9.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR9_STS5	(MLB0.unCSCR9.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR9_STS6	(MLB0.unCSCR9.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR9_STS8	(MLB0.unCSCR9.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR9_STS9	(MLB0.unCSCR9.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR9_STS10	(MLB0.unCSCR9.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR9_STS11	(MLB0.unCSCR9.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR9_RDY	(MLB0.unCSCR9.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR9_GB	(MLB0.unCSCR9.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR9_IVB	(MLB0.unCSCR9.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR9_BF	(MLB0.unCSCR9.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR9_BM	(MLB0.unCSCR9.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR10	(MLB0.unCSCR10.u32Register)  /*@rg@*/
#define MLB0_CSCR10_STS0	(MLB0.unCSCR10.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR10_STS1	(MLB0.unCSCR10.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR10_STS2	(MLB0.unCSCR10.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR10_STS3	(MLB0.unCSCR10.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR10_STS4	(MLB0.unCSCR10.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR10_STS5	(MLB0.unCSCR10.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR10_STS6	(MLB0.unCSCR10.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR10_STS8	(MLB0.unCSCR10.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR10_STS9	(MLB0.unCSCR10.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR10_STS10	(MLB0.unCSCR10.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR10_STS11	(MLB0.unCSCR10.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR10_RDY	(MLB0.unCSCR10.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR10_GB	(MLB0.unCSCR10.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR10_IVB	(MLB0.unCSCR10.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR10_BF	(MLB0.unCSCR10.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR10_BM	(MLB0.unCSCR10.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR11	(MLB0.unCSCR11.u32Register)  /*@rg@*/
#define MLB0_CSCR11_STS0	(MLB0.unCSCR11.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR11_STS1	(MLB0.unCSCR11.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR11_STS2	(MLB0.unCSCR11.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR11_STS3	(MLB0.unCSCR11.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR11_STS4	(MLB0.unCSCR11.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR11_STS5	(MLB0.unCSCR11.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR11_STS6	(MLB0.unCSCR11.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR11_STS8	(MLB0.unCSCR11.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR11_STS9	(MLB0.unCSCR11.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR11_STS10	(MLB0.unCSCR11.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR11_STS11	(MLB0.unCSCR11.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR11_RDY	(MLB0.unCSCR11.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR11_GB	(MLB0.unCSCR11.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR11_IVB	(MLB0.unCSCR11.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR11_BF	(MLB0.unCSCR11.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR11_BM	(MLB0.unCSCR11.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR12	(MLB0.unCSCR12.u32Register)  /*@rg@*/
#define MLB0_CSCR12_STS0	(MLB0.unCSCR12.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR12_STS1	(MLB0.unCSCR12.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR12_STS2	(MLB0.unCSCR12.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR12_STS3	(MLB0.unCSCR12.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR12_STS4	(MLB0.unCSCR12.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR12_STS5	(MLB0.unCSCR12.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR12_STS6	(MLB0.unCSCR12.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR12_STS8	(MLB0.unCSCR12.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR12_STS9	(MLB0.unCSCR12.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR12_STS10	(MLB0.unCSCR12.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR12_STS11	(MLB0.unCSCR12.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR12_RDY	(MLB0.unCSCR12.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR12_GB	(MLB0.unCSCR12.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR12_IVB	(MLB0.unCSCR12.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR12_BF	(MLB0.unCSCR12.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR12_BM	(MLB0.unCSCR12.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR13	(MLB0.unCSCR13.u32Register)  /*@rg@*/
#define MLB0_CSCR13_STS0	(MLB0.unCSCR13.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR13_STS1	(MLB0.unCSCR13.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR13_STS2	(MLB0.unCSCR13.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR13_STS3	(MLB0.unCSCR13.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR13_STS4	(MLB0.unCSCR13.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR13_STS5	(MLB0.unCSCR13.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR13_STS6	(MLB0.unCSCR13.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR13_STS8	(MLB0.unCSCR13.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR13_STS9	(MLB0.unCSCR13.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR13_STS10	(MLB0.unCSCR13.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR13_STS11	(MLB0.unCSCR13.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR13_RDY	(MLB0.unCSCR13.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR13_GB	(MLB0.unCSCR13.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR13_IVB	(MLB0.unCSCR13.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR13_BF	(MLB0.unCSCR13.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR13_BM	(MLB0.unCSCR13.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR14	(MLB0.unCSCR14.u32Register)  /*@rg@*/
#define MLB0_CSCR14_STS0	(MLB0.unCSCR14.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR14_STS1	(MLB0.unCSCR14.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR14_STS2	(MLB0.unCSCR14.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR14_STS3	(MLB0.unCSCR14.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR14_STS4	(MLB0.unCSCR14.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR14_STS5	(MLB0.unCSCR14.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR14_STS6	(MLB0.unCSCR14.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR14_STS8	(MLB0.unCSCR14.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR14_STS9	(MLB0.unCSCR14.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR14_STS10	(MLB0.unCSCR14.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR14_STS11	(MLB0.unCSCR14.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR14_RDY	(MLB0.unCSCR14.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR14_GB	(MLB0.unCSCR14.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR14_IVB	(MLB0.unCSCR14.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR14_BF	(MLB0.unCSCR14.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR14_BM	(MLB0.unCSCR14.stcField.u1BM)  /*@bf@*/

#define MLB0_CSCR15	(MLB0.unCSCR15.u32Register)  /*@rg@*/
#define MLB0_CSCR15_STS0	(MLB0.unCSCR15.stcField.u1STS0)  /*@bf@*/
#define MLB0_CSCR15_STS1	(MLB0.unCSCR15.stcField.u1STS1)  /*@bf@*/
#define MLB0_CSCR15_STS2	(MLB0.unCSCR15.stcField.u1STS2)  /*@bf@*/
#define MLB0_CSCR15_STS3	(MLB0.unCSCR15.stcField.u1STS3)  /*@bf@*/
#define MLB0_CSCR15_STS4	(MLB0.unCSCR15.stcField.u1STS4)  /*@bf@*/
#define MLB0_CSCR15_STS5	(MLB0.unCSCR15.stcField.u1STS5)  /*@bf@*/
#define MLB0_CSCR15_STS6	(MLB0.unCSCR15.stcField.u1STS6)  /*@bf@*/
#define MLB0_CSCR15_STS8	(MLB0.unCSCR15.stcField.u1STS8)  /*@bf@*/
#define MLB0_CSCR15_STS9	(MLB0.unCSCR15.stcField.u1STS9)  /*@bf@*/
#define MLB0_CSCR15_STS10	(MLB0.unCSCR15.stcField.u1STS10)  /*@bf@*/
#define MLB0_CSCR15_STS11	(MLB0.unCSCR15.stcField.u1STS11)  /*@bf@*/
#define MLB0_CSCR15_RDY	(MLB0.unCSCR15.stcField.u1RDY)  /*@bf@*/
#define MLB0_CSCR15_GB	(MLB0.unCSCR15.stcField.u1GB)  /*@bf@*/
#define MLB0_CSCR15_IVB	(MLB0.unCSCR15.stcField.u2IVB)  /*@bf@*/
#define MLB0_CSCR15_BF	(MLB0.unCSCR15.stcField.u1BF)  /*@bf@*/
#define MLB0_CSCR15_BM	(MLB0.unCSCR15.stcField.u1BM)  /*@bf@*/

typedef struct stc_mlb0_cscrn_field{
    uint_io32_t		u1STS0:1;
    uint_io32_t		u1STS1:1;
    uint_io32_t		u1STS2:1;
    uint_io32_t		u1STS3:1;
    uint_io32_t		u1STS4:1;
    uint_io32_t		u1STS5:1;
    uint_io32_t		u1STS6:1;
    uint_io32_t		:1;
    uint_io32_t		u1STS8:1;
    uint_io32_t		u1STS9:1;
    uint_io32_t		u1STS10:1;
    uint_io32_t		u1STS11:1;
    uint_io32_t		:4;
    uint_io32_t		u1RDY:1;
    uint_io32_t		u1GB:1;
    uint_io32_t		u2IVB:2;
    uint_io32_t		:10;
    uint_io32_t		u1BF:1;
    uint_io32_t		u1BM:1;
}stc_mlb0_cscrn_field_t;

typedef union un_mlb0_cscrn{
    uint_io32_t		u32Register;
    stc_mlb0_cscrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_cscrn_t;

/* CCBCR[0-15] */
#define MLB0_CCBCR0	(MLB0.unCCBCR0.u32Register)  /*@rg@*/
#define MLB0_CCBCR0_BFA	(MLB0.unCCBCR0.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR0_BCA	(MLB0.unCCBCR0.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR1	(MLB0.unCCBCR1.u32Register)  /*@rg@*/
#define MLB0_CCBCR1_BFA	(MLB0.unCCBCR1.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR1_BCA	(MLB0.unCCBCR1.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR2	(MLB0.unCCBCR2.u32Register)  /*@rg@*/
#define MLB0_CCBCR2_BFA	(MLB0.unCCBCR2.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR2_BCA	(MLB0.unCCBCR2.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR3	(MLB0.unCCBCR3.u32Register)  /*@rg@*/
#define MLB0_CCBCR3_BFA	(MLB0.unCCBCR3.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR3_BCA	(MLB0.unCCBCR3.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR4	(MLB0.unCCBCR4.u32Register)  /*@rg@*/
#define MLB0_CCBCR4_BFA	(MLB0.unCCBCR4.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR4_BCA	(MLB0.unCCBCR4.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR5	(MLB0.unCCBCR5.u32Register)  /*@rg@*/
#define MLB0_CCBCR5_BFA	(MLB0.unCCBCR5.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR5_BCA	(MLB0.unCCBCR5.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR6	(MLB0.unCCBCR6.u32Register)  /*@rg@*/
#define MLB0_CCBCR6_BFA	(MLB0.unCCBCR6.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR6_BCA	(MLB0.unCCBCR6.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR7	(MLB0.unCCBCR7.u32Register)  /*@rg@*/
#define MLB0_CCBCR7_BFA	(MLB0.unCCBCR7.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR7_BCA	(MLB0.unCCBCR7.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR8	(MLB0.unCCBCR8.u32Register)  /*@rg@*/
#define MLB0_CCBCR8_BFA	(MLB0.unCCBCR8.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR8_BCA	(MLB0.unCCBCR8.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR9	(MLB0.unCCBCR9.u32Register)  /*@rg@*/
#define MLB0_CCBCR9_BFA	(MLB0.unCCBCR9.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR9_BCA	(MLB0.unCCBCR9.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR10	(MLB0.unCCBCR10.u32Register)  /*@rg@*/
#define MLB0_CCBCR10_BFA	(MLB0.unCCBCR10.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR10_BCA	(MLB0.unCCBCR10.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR11	(MLB0.unCCBCR11.u32Register)  /*@rg@*/
#define MLB0_CCBCR11_BFA	(MLB0.unCCBCR11.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR11_BCA	(MLB0.unCCBCR11.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR12	(MLB0.unCCBCR12.u32Register)  /*@rg@*/
#define MLB0_CCBCR12_BFA	(MLB0.unCCBCR12.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR12_BCA	(MLB0.unCCBCR12.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR13	(MLB0.unCCBCR13.u32Register)  /*@rg@*/
#define MLB0_CCBCR13_BFA	(MLB0.unCCBCR13.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR13_BCA	(MLB0.unCCBCR13.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR14	(MLB0.unCCBCR14.u32Register)  /*@rg@*/
#define MLB0_CCBCR14_BFA	(MLB0.unCCBCR14.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR14_BCA	(MLB0.unCCBCR14.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CCBCR15	(MLB0.unCCBCR15.u32Register)  /*@rg@*/
#define MLB0_CCBCR15_BFA	(MLB0.unCCBCR15.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CCBCR15_BCA	(MLB0.unCCBCR15.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mlb0_ccbcrn_field{
    uint_io32_t		u16BFA:16;
    uint_io32_t		u16BCA:16;
}stc_mlb0_ccbcrn_field_t;

typedef union un_mlb0_ccbcrn{
    uint_io32_t		u32Register;
    stc_mlb0_ccbcrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_ccbcrn_t;

/* CNBCR[0-15] */
#define MLB0_CNBCR0	(MLB0.unCNBCR0.u32Register)  /*@rg@*/
#define MLB0_CNBCR0_BEA	(MLB0.unCNBCR0.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR0_BSA	(MLB0.unCNBCR0.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR1	(MLB0.unCNBCR1.u32Register)  /*@rg@*/
#define MLB0_CNBCR1_BEA	(MLB0.unCNBCR1.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR1_BSA	(MLB0.unCNBCR1.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR2	(MLB0.unCNBCR2.u32Register)  /*@rg@*/
#define MLB0_CNBCR2_BEA	(MLB0.unCNBCR2.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR2_BSA	(MLB0.unCNBCR2.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR3	(MLB0.unCNBCR3.u32Register)  /*@rg@*/
#define MLB0_CNBCR3_BEA	(MLB0.unCNBCR3.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR3_BSA	(MLB0.unCNBCR3.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR4	(MLB0.unCNBCR4.u32Register)  /*@rg@*/
#define MLB0_CNBCR4_BEA	(MLB0.unCNBCR4.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR4_BSA	(MLB0.unCNBCR4.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR5	(MLB0.unCNBCR5.u32Register)  /*@rg@*/
#define MLB0_CNBCR5_BEA	(MLB0.unCNBCR5.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR5_BSA	(MLB0.unCNBCR5.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR6	(MLB0.unCNBCR6.u32Register)  /*@rg@*/
#define MLB0_CNBCR6_BEA	(MLB0.unCNBCR6.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR6_BSA	(MLB0.unCNBCR6.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR7	(MLB0.unCNBCR7.u32Register)  /*@rg@*/
#define MLB0_CNBCR7_BEA	(MLB0.unCNBCR7.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR7_BSA	(MLB0.unCNBCR7.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR8	(MLB0.unCNBCR8.u32Register)  /*@rg@*/
#define MLB0_CNBCR8_BEA	(MLB0.unCNBCR8.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR8_BSA	(MLB0.unCNBCR8.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR9	(MLB0.unCNBCR9.u32Register)  /*@rg@*/
#define MLB0_CNBCR9_BEA	(MLB0.unCNBCR9.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR9_BSA	(MLB0.unCNBCR9.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR10	(MLB0.unCNBCR10.u32Register)  /*@rg@*/
#define MLB0_CNBCR10_BEA	(MLB0.unCNBCR10.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR10_BSA	(MLB0.unCNBCR10.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR11	(MLB0.unCNBCR11.u32Register)  /*@rg@*/
#define MLB0_CNBCR11_BEA	(MLB0.unCNBCR11.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR11_BSA	(MLB0.unCNBCR11.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR12	(MLB0.unCNBCR12.u32Register)  /*@rg@*/
#define MLB0_CNBCR12_BEA	(MLB0.unCNBCR12.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR12_BSA	(MLB0.unCNBCR12.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR13	(MLB0.unCNBCR13.u32Register)  /*@rg@*/
#define MLB0_CNBCR13_BEA	(MLB0.unCNBCR13.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR13_BSA	(MLB0.unCNBCR13.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR14	(MLB0.unCNBCR14.u32Register)  /*@rg@*/
#define MLB0_CNBCR14_BEA	(MLB0.unCNBCR14.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR14_BSA	(MLB0.unCNBCR14.au16Halfword[1])  /*@bfhword@*/

#define MLB0_CNBCR15	(MLB0.unCNBCR15.u32Register)  /*@rg@*/
#define MLB0_CNBCR15_BEA	(MLB0.unCNBCR15.au16Halfword[0])  /*@bfhword@*/
#define MLB0_CNBCR15_BSA	(MLB0.unCNBCR15.au16Halfword[1])  /*@bfhword@*/

typedef struct stc_mlb0_cnbcrn_field{
    uint_io32_t		u16BEA:16;
    uint_io32_t		u16BSA:16;
}stc_mlb0_cnbcrn_field_t;

typedef union un_mlb0_cnbcrn{
    uint_io32_t		u32Register;
    stc_mlb0_cnbcrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_cnbcrn_t;

/* LCBCR[0-15] */
#define MLB0_LCBCR0	(MLB0.unLCBCR0.u32Register)  /*@rg@*/
#define MLB0_LCBCR0_SA	(MLB0.unLCBCR0.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR0_BD	(MLB0.unLCBCR0.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR0_TH	(MLB0.unLCBCR0.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR1	(MLB0.unLCBCR1.u32Register)  /*@rg@*/
#define MLB0_LCBCR1_SA	(MLB0.unLCBCR1.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR1_BD	(MLB0.unLCBCR1.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR1_TH	(MLB0.unLCBCR1.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR2	(MLB0.unLCBCR2.u32Register)  /*@rg@*/
#define MLB0_LCBCR2_SA	(MLB0.unLCBCR2.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR2_BD	(MLB0.unLCBCR2.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR2_TH	(MLB0.unLCBCR2.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR3	(MLB0.unLCBCR3.u32Register)  /*@rg@*/
#define MLB0_LCBCR3_SA	(MLB0.unLCBCR3.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR3_BD	(MLB0.unLCBCR3.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR3_TH	(MLB0.unLCBCR3.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR4	(MLB0.unLCBCR4.u32Register)  /*@rg@*/
#define MLB0_LCBCR4_SA	(MLB0.unLCBCR4.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR4_BD	(MLB0.unLCBCR4.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR4_TH	(MLB0.unLCBCR4.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR5	(MLB0.unLCBCR5.u32Register)  /*@rg@*/
#define MLB0_LCBCR5_SA	(MLB0.unLCBCR5.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR5_BD	(MLB0.unLCBCR5.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR5_TH	(MLB0.unLCBCR5.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR6	(MLB0.unLCBCR6.u32Register)  /*@rg@*/
#define MLB0_LCBCR6_SA	(MLB0.unLCBCR6.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR6_BD	(MLB0.unLCBCR6.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR6_TH	(MLB0.unLCBCR6.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR7	(MLB0.unLCBCR7.u32Register)  /*@rg@*/
#define MLB0_LCBCR7_SA	(MLB0.unLCBCR7.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR7_BD	(MLB0.unLCBCR7.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR7_TH	(MLB0.unLCBCR7.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR8	(MLB0.unLCBCR8.u32Register)  /*@rg@*/
#define MLB0_LCBCR8_SA	(MLB0.unLCBCR8.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR8_BD	(MLB0.unLCBCR8.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR8_TH	(MLB0.unLCBCR8.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR9	(MLB0.unLCBCR9.u32Register)  /*@rg@*/
#define MLB0_LCBCR9_SA	(MLB0.unLCBCR9.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR9_BD	(MLB0.unLCBCR9.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR9_TH	(MLB0.unLCBCR9.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR10	(MLB0.unLCBCR10.u32Register)  /*@rg@*/
#define MLB0_LCBCR10_SA	(MLB0.unLCBCR10.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR10_BD	(MLB0.unLCBCR10.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR10_TH	(MLB0.unLCBCR10.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR11	(MLB0.unLCBCR11.u32Register)  /*@rg@*/
#define MLB0_LCBCR11_SA	(MLB0.unLCBCR11.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR11_BD	(MLB0.unLCBCR11.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR11_TH	(MLB0.unLCBCR11.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR12	(MLB0.unLCBCR12.u32Register)  /*@rg@*/
#define MLB0_LCBCR12_SA	(MLB0.unLCBCR12.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR12_BD	(MLB0.unLCBCR12.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR12_TH	(MLB0.unLCBCR12.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR13	(MLB0.unLCBCR13.u32Register)  /*@rg@*/
#define MLB0_LCBCR13_SA	(MLB0.unLCBCR13.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR13_BD	(MLB0.unLCBCR13.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR13_TH	(MLB0.unLCBCR13.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR14	(MLB0.unLCBCR14.u32Register)  /*@rg@*/
#define MLB0_LCBCR14_SA	(MLB0.unLCBCR14.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR14_BD	(MLB0.unLCBCR14.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR14_TH	(MLB0.unLCBCR14.stcField.u7TH)  /*@bf@*/

#define MLB0_LCBCR15	(MLB0.unLCBCR15.u32Register)  /*@rg@*/
#define MLB0_LCBCR15_SA	(MLB0.unLCBCR15.stcField.u6SA)  /*@bf@*/
#define MLB0_LCBCR15_BD	(MLB0.unLCBCR15.stcField.u6BD)  /*@bf@*/
#define MLB0_LCBCR15_TH	(MLB0.unLCBCR15.stcField.u7TH)  /*@bf@*/

typedef struct stc_mlb0_lcbcrn_field{
    uint_io32_t		u6SA:6;
    uint_io32_t		:7;
    uint_io32_t		u6BD:6;
    uint_io32_t		:3;
    uint_io32_t		u7TH:7;
    uint_io32_t		:3;
}stc_mlb0_lcbcrn_field_t;

typedef union un_mlb0_lcbcrn{
    uint_io32_t		u32Register;
    stc_mlb0_lcbcrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_lcbcrn_t;

/* MID */
#define MLB0_MID	(MLB0.unMID.u32Register)  /*@rg@*/
#define MLB0_MID_MID	MLB0_MID  /*@bfrg@*/

typedef union un_mlb0_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mlb0_mid_t;


typedef struct stc_mlb0{
    un_mlb0_dccr_t	unDCCR;	/* 0x00000000 */
    un_mlb0_sscr_t	unSSCR;	/* 0x00000004 */
    un_mlb0_sdcr_t	unSDCR;	/* 0x00000008 */
    un_mlb0_smcr_t	unSMCR;	/* 0x0000000C */
    uint_io8_t	au8Reserved0[12];	/* 0x00000010 */
    un_mlb0_vccr_t	unVCCR;	/* 0x0000001C */
    un_mlb0_sbcr_t	unSBCR;	/* 0x00000020 */
    un_mlb0_abcr_t	unABCR;	/* 0x00000024 */
    un_mlb0_cbcr_t	unCBCR;	/* 0x00000028 */
    un_mlb0_ibcr_t	unIBCR;	/* 0x0000002C */
    un_mlb0_cicr_t	unCICR;	/* 0x00000030 */
    uint_io8_t	au8Reserved1[8];	/* 0x00000034 */
    un_mlb0_ahbmctl_t	unAHBMCTL;	/* 0x0000003C */
    un_mlb0_cecrn_t	unCECR0;	/* 0x00000040 */
    un_mlb0_cscrn_t	unCSCR0;	/* 0x00000044 */
    un_mlb0_ccbcrn_t	unCCBCR0;	/* 0x00000048 */
    un_mlb0_cnbcrn_t	unCNBCR0;	/* 0x0000004C */
    un_mlb0_cecrn_t	unCECR1;	/* 0x00000050 */
    un_mlb0_cscrn_t	unCSCR1;	/* 0x00000054 */
    un_mlb0_ccbcrn_t	unCCBCR1;	/* 0x00000058 */
    un_mlb0_cnbcrn_t	unCNBCR1;	/* 0x0000005C */
    un_mlb0_cecrn_t	unCECR2;	/* 0x00000060 */
    un_mlb0_cscrn_t	unCSCR2;	/* 0x00000064 */
    un_mlb0_ccbcrn_t	unCCBCR2;	/* 0x00000068 */
    un_mlb0_cnbcrn_t	unCNBCR2;	/* 0x0000006C */
    un_mlb0_cecrn_t	unCECR3;	/* 0x00000070 */
    un_mlb0_cscrn_t	unCSCR3;	/* 0x00000074 */
    un_mlb0_ccbcrn_t	unCCBCR3;	/* 0x00000078 */
    un_mlb0_cnbcrn_t	unCNBCR3;	/* 0x0000007C */
    un_mlb0_cecrn_t	unCECR4;	/* 0x00000080 */
    un_mlb0_cscrn_t	unCSCR4;	/* 0x00000084 */
    un_mlb0_ccbcrn_t	unCCBCR4;	/* 0x00000088 */
    un_mlb0_cnbcrn_t	unCNBCR4;	/* 0x0000008C */
    un_mlb0_cecrn_t	unCECR5;	/* 0x00000090 */
    un_mlb0_cscrn_t	unCSCR5;	/* 0x00000094 */
    un_mlb0_ccbcrn_t	unCCBCR5;	/* 0x00000098 */
    un_mlb0_cnbcrn_t	unCNBCR5;	/* 0x0000009C */
    un_mlb0_cecrn_t	unCECR6;	/* 0x000000A0 */
    un_mlb0_cscrn_t	unCSCR6;	/* 0x000000A4 */
    un_mlb0_ccbcrn_t	unCCBCR6;	/* 0x000000A8 */
    un_mlb0_cnbcrn_t	unCNBCR6;	/* 0x000000AC */
    un_mlb0_cecrn_t	unCECR7;	/* 0x000000B0 */
    un_mlb0_cscrn_t	unCSCR7;	/* 0x000000B4 */
    un_mlb0_ccbcrn_t	unCCBCR7;	/* 0x000000B8 */
    un_mlb0_cnbcrn_t	unCNBCR7;	/* 0x000000BC */
    un_mlb0_cecrn_t	unCECR8;	/* 0x000000C0 */
    un_mlb0_cscrn_t	unCSCR8;	/* 0x000000C4 */
    un_mlb0_ccbcrn_t	unCCBCR8;	/* 0x000000C8 */
    un_mlb0_cnbcrn_t	unCNBCR8;	/* 0x000000CC */
    un_mlb0_cecrn_t	unCECR9;	/* 0x000000D0 */
    un_mlb0_cscrn_t	unCSCR9;	/* 0x000000D4 */
    un_mlb0_ccbcrn_t	unCCBCR9;	/* 0x000000D8 */
    un_mlb0_cnbcrn_t	unCNBCR9;	/* 0x000000DC */
    un_mlb0_cecrn_t	unCECR10;	/* 0x000000E0 */
    un_mlb0_cscrn_t	unCSCR10;	/* 0x000000E4 */
    un_mlb0_ccbcrn_t	unCCBCR10;	/* 0x000000E8 */
    un_mlb0_cnbcrn_t	unCNBCR10;	/* 0x000000EC */
    un_mlb0_cecrn_t	unCECR11;	/* 0x000000F0 */
    un_mlb0_cscrn_t	unCSCR11;	/* 0x000000F4 */
    un_mlb0_ccbcrn_t	unCCBCR11;	/* 0x000000F8 */
    un_mlb0_cnbcrn_t	unCNBCR11;	/* 0x000000FC */
    un_mlb0_cecrn_t	unCECR12;	/* 0x00000100 */
    un_mlb0_cscrn_t	unCSCR12;	/* 0x00000104 */
    un_mlb0_ccbcrn_t	unCCBCR12;	/* 0x00000108 */
    un_mlb0_cnbcrn_t	unCNBCR12;	/* 0x0000010C */
    un_mlb0_cecrn_t	unCECR13;	/* 0x00000110 */
    un_mlb0_cscrn_t	unCSCR13;	/* 0x00000114 */
    un_mlb0_ccbcrn_t	unCCBCR13;	/* 0x00000118 */
    un_mlb0_cnbcrn_t	unCNBCR13;	/* 0x0000011C */
    un_mlb0_cecrn_t	unCECR14;	/* 0x00000120 */
    un_mlb0_cscrn_t	unCSCR14;	/* 0x00000124 */
    un_mlb0_ccbcrn_t	unCCBCR14;	/* 0x00000128 */
    un_mlb0_cnbcrn_t	unCNBCR14;	/* 0x0000012C */
    un_mlb0_cecrn_t	unCECR15;	/* 0x00000130 */
    un_mlb0_cscrn_t	unCSCR15;	/* 0x00000134 */
    un_mlb0_ccbcrn_t	unCCBCR15;	/* 0x00000138 */
    un_mlb0_cnbcrn_t	unCNBCR15;	/* 0x0000013C */
    uint_io8_t	au8Reserved2[320];	/* 0x00000140 */
    un_mlb0_lcbcrn_t	unLCBCR0;	/* 0x00000280 */
    un_mlb0_lcbcrn_t	unLCBCR1;	/* 0x00000284 */
    un_mlb0_lcbcrn_t	unLCBCR2;	/* 0x00000288 */
    un_mlb0_lcbcrn_t	unLCBCR3;	/* 0x0000028C */
    un_mlb0_lcbcrn_t	unLCBCR4;	/* 0x00000290 */
    un_mlb0_lcbcrn_t	unLCBCR5;	/* 0x00000294 */
    un_mlb0_lcbcrn_t	unLCBCR6;	/* 0x00000298 */
    un_mlb0_lcbcrn_t	unLCBCR7;	/* 0x0000029C */
    un_mlb0_lcbcrn_t	unLCBCR8;	/* 0x000002A0 */
    un_mlb0_lcbcrn_t	unLCBCR9;	/* 0x000002A4 */
    un_mlb0_lcbcrn_t	unLCBCR10;	/* 0x000002A8 */
    un_mlb0_lcbcrn_t	unLCBCR11;	/* 0x000002AC */
    un_mlb0_lcbcrn_t	unLCBCR12;	/* 0x000002B0 */
    un_mlb0_lcbcrn_t	unLCBCR13;	/* 0x000002B4 */
    un_mlb0_lcbcrn_t	unLCBCR14;	/* 0x000002B8 */
    un_mlb0_lcbcrn_t	unLCBCR15;	/* 0x000002BC */
    uint_io8_t	au8Reserved3[60];	/* 0x000002C0 */
    un_mlb0_mid_t	unMID;	/* 0x000002FC */
    uint_io8_t	au8Reserved4[256];	/* 0x00000300 */
}stc_mlb0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mlb0_t	stcMLB0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_MLB_H */
