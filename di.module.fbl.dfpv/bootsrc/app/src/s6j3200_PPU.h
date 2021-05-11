/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_PPU_H
#define __S6J3200_PPU_H

#include "s6j3200io_basetypes.h"

/* PPU0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define PPU0	stcPPU0
#else /* __IO_DEFINE */
#define PPU0	(*((volatile stc_ppu0_t*)0xB4750000))
#endif /* __IO_DEFINE */

/* CR */
#define PPU0_CR	(PPU0.unCR.u32Register)  /*@rg@*/
#define PPU0_CR_FPQCLR	(*(volatile uint_io8_t*)0xB7280008)  /*@bfbba@*/
#define PPU0_CR_FPQSET	(*(volatile uint_io8_t*)0xB7280009)  /*@bfbba@*/
#define PPU0_CR_VCLR	(*(volatile uint_io8_t*)0xB7280017)  /*@bfbba@*/
#define PPU0_CR_MODE	(*(volatile uint_io8_t*)0xB728001D)  /*@bfbba@*/

typedef struct stc_ppu0_cr_field{
    uint_io32_t		:8;
    uint_io32_t		u1FPQCLR:1;
    uint_io32_t		u1FPQSET:1;
    uint_io32_t		:13;
    uint_io32_t		u1VCLR:1;
    uint_io32_t		:5;
    uint_io32_t		u1MODE:1;
    uint_io32_t		:2;
}stc_ppu0_cr_field_t;

typedef union un_ppu0_cr{
    uint_io32_t		u32Register;
    stc_ppu0_cr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_cr_t;

/* SR */
#define PPU0_SR	(PPU0.unSR.u32Register)  /*@rg@*/
#define PPU0_SR_LST	(*(volatile uint_io8_t*)0xB7280020)  /*@bfbba@*/
#define PPU0_SR_VL	(PPU0.unSR.stcField.u5VL)  /*@bf@*/
#define PPU0_SR_VW	(*(volatile uint_io8_t*)0xB7280035)  /*@bfbba@*/
#define PPU0_SR_VP	(*(volatile uint_io8_t*)0xB7280036)  /*@bfbba@*/
#define PPU0_SR_VD	(*(volatile uint_io8_t*)0xB7280037)  /*@bfbba@*/

typedef struct stc_ppu0_sr_field{
    uint_io32_t		u1LST:1;
    uint_io32_t		:15;
    uint_io32_t		u5VL:5;
    uint_io32_t		u1VW:1;
    uint_io32_t		u1VP:1;
    uint_io32_t		u1VD:1;
    uint_io32_t		:8;
}stc_ppu0_sr_field_t;

typedef union un_ppu0_sr{
    uint_io32_t		u32Register;
    stc_ppu0_sr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_sr_t;

/* UNLOCK */
#define PPU0_UNLOCK	(PPU0.unUNLOCK.u32Register)  /*@rg@*/
#define PPU0_UNLOCK_UL	PPU0_UNLOCK  /*@bfrg@*/

typedef union un_ppu0_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_unlock_t;

/* WPQCLR */
#define PPU0_WPQCLR	(PPU0.unWPQCLR.u32Register)  /*@rg@*/
#define PPU0_WPQCLR_WPQCLR	(*(volatile uint_io8_t*)0xB7280060)  /*@bfbba@*/

typedef struct stc_ppu0_wpqclr_field{
    uint_io32_t		u1WPQCLR:1;
    uint_io32_t		:31;
}stc_ppu0_wpqclr_field_t;

typedef union un_ppu0_wpqclr{
    uint_io32_t		u32Register;
    stc_ppu0_wpqclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_wpqclr_t;

/* WUQCLR */
#define PPU0_WUQCLR	(PPU0.unWUQCLR.u32Register)  /*@rg@*/
#define PPU0_WUQCLR_WUQCLR	(*(volatile uint_io8_t*)0xB7280080)  /*@bfbba@*/

typedef struct stc_ppu0_wuqclr_field{
    uint_io32_t		u1WUQCLR:1;
    uint_io32_t		:31;
}stc_ppu0_wuqclr_field_t;

typedef union un_ppu0_wuqclr{
    uint_io32_t		u32Register;
    stc_ppu0_wuqclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_wuqclr_t;

/* RPQCLR */
#define PPU0_RPQCLR	(PPU0.unRPQCLR.u32Register)  /*@rg@*/
#define PPU0_RPQCLR_RPQCLR	(*(volatile uint_io8_t*)0xB72800A0)  /*@bfbba@*/

typedef struct stc_ppu0_rpqclr_field{
    uint_io32_t		u1RPQCLR:1;
    uint_io32_t		:31;
}stc_ppu0_rpqclr_field_t;

typedef union un_ppu0_rpqclr{
    uint_io32_t		u32Register;
    stc_ppu0_rpqclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_rpqclr_t;

/* RUQCLR */
#define PPU0_RUQCLR	(PPU0.unRUQCLR.u32Register)  /*@rg@*/
#define PPU0_RUQCLR_RUQCLR	(*(volatile uint_io8_t*)0xB72800C0)  /*@bfbba@*/

typedef struct stc_ppu0_ruqclr_field{
    uint_io32_t		u1RUQCLR:1;
    uint_io32_t		:31;
}stc_ppu0_ruqclr_field_t;

typedef union un_ppu0_ruqclr{
    uint_io32_t		u32Register;
    stc_ppu0_ruqclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_ruqclr_t;

/* PPR[0-29] */
#define PPU0_PPR0	(PPU0.unPPR0.u32Register)  /*@rg@*/
#define PPU0_PPR0_PPR0	(*(volatile uint_io8_t*)0xB7280400)  /*@bfbba@*/
#define PPU0_PPR0_PPR1	(*(volatile uint_io8_t*)0xB7280401)  /*@bfbba@*/
#define PPU0_PPR0_PPR2	(*(volatile uint_io8_t*)0xB7280402)  /*@bfbba@*/
#define PPU0_PPR0_PPR3	(*(volatile uint_io8_t*)0xB7280403)  /*@bfbba@*/
#define PPU0_PPR0_PPR4	(*(volatile uint_io8_t*)0xB7280404)  /*@bfbba@*/
#define PPU0_PPR0_PPR5	(*(volatile uint_io8_t*)0xB7280405)  /*@bfbba@*/
#define PPU0_PPR0_PPR6	(*(volatile uint_io8_t*)0xB7280406)  /*@bfbba@*/
#define PPU0_PPR0_PPR7	(*(volatile uint_io8_t*)0xB7280407)  /*@bfbba@*/
#define PPU0_PPR0_PPR8	(*(volatile uint_io8_t*)0xB7280408)  /*@bfbba@*/
#define PPU0_PPR0_PPR9	(*(volatile uint_io8_t*)0xB7280409)  /*@bfbba@*/
#define PPU0_PPR0_PPR10	(*(volatile uint_io8_t*)0xB728040A)  /*@bfbba@*/
#define PPU0_PPR0_PPR11	(*(volatile uint_io8_t*)0xB728040B)  /*@bfbba@*/
#define PPU0_PPR0_PPR12	(*(volatile uint_io8_t*)0xB728040C)  /*@bfbba@*/
#define PPU0_PPR0_PPR13	(*(volatile uint_io8_t*)0xB728040D)  /*@bfbba@*/
#define PPU0_PPR0_PPR14	(*(volatile uint_io8_t*)0xB728040E)  /*@bfbba@*/
#define PPU0_PPR0_PPR15	(*(volatile uint_io8_t*)0xB728040F)  /*@bfbba@*/
#define PPU0_PPR0_PPR16	(*(volatile uint_io8_t*)0xB7280410)  /*@bfbba@*/
#define PPU0_PPR0_PPR17	(*(volatile uint_io8_t*)0xB7280411)  /*@bfbba@*/
#define PPU0_PPR0_PPR18	(*(volatile uint_io8_t*)0xB7280412)  /*@bfbba@*/
#define PPU0_PPR0_PPR19	(*(volatile uint_io8_t*)0xB7280413)  /*@bfbba@*/
#define PPU0_PPR0_PPR20	(*(volatile uint_io8_t*)0xB7280414)  /*@bfbba@*/
#define PPU0_PPR0_PPR21	(*(volatile uint_io8_t*)0xB7280415)  /*@bfbba@*/
#define PPU0_PPR0_PPR22	(*(volatile uint_io8_t*)0xB7280416)  /*@bfbba@*/
#define PPU0_PPR0_PPR23	(*(volatile uint_io8_t*)0xB7280417)  /*@bfbba@*/
#define PPU0_PPR0_PPR24	(*(volatile uint_io8_t*)0xB7280418)  /*@bfbba@*/
#define PPU0_PPR0_PPR25	(*(volatile uint_io8_t*)0xB7280419)  /*@bfbba@*/
#define PPU0_PPR0_PPR26	(*(volatile uint_io8_t*)0xB728041A)  /*@bfbba@*/
#define PPU0_PPR0_PPR27	(*(volatile uint_io8_t*)0xB728041B)  /*@bfbba@*/
#define PPU0_PPR0_PPR28	(*(volatile uint_io8_t*)0xB728041C)  /*@bfbba@*/
#define PPU0_PPR0_PPR29	(*(volatile uint_io8_t*)0xB728041D)  /*@bfbba@*/
#define PPU0_PPR0_PPR30	(*(volatile uint_io8_t*)0xB728041E)  /*@bfbba@*/
#define PPU0_PPR0_PPR31	(*(volatile uint_io8_t*)0xB728041F)  /*@bfbba@*/

#define PPU0_PPR1	(PPU0.unPPR1.u32Register)  /*@rg@*/
#define PPU0_PPR1_PPR0	(*(volatile uint_io8_t*)0xB7280420)  /*@bfbba@*/
#define PPU0_PPR1_PPR1	(*(volatile uint_io8_t*)0xB7280421)  /*@bfbba@*/
#define PPU0_PPR1_PPR2	(*(volatile uint_io8_t*)0xB7280422)  /*@bfbba@*/
#define PPU0_PPR1_PPR3	(*(volatile uint_io8_t*)0xB7280423)  /*@bfbba@*/
#define PPU0_PPR1_PPR4	(*(volatile uint_io8_t*)0xB7280424)  /*@bfbba@*/
#define PPU0_PPR1_PPR5	(*(volatile uint_io8_t*)0xB7280425)  /*@bfbba@*/
#define PPU0_PPR1_PPR6	(*(volatile uint_io8_t*)0xB7280426)  /*@bfbba@*/
#define PPU0_PPR1_PPR7	(*(volatile uint_io8_t*)0xB7280427)  /*@bfbba@*/
#define PPU0_PPR1_PPR8	(*(volatile uint_io8_t*)0xB7280428)  /*@bfbba@*/
#define PPU0_PPR1_PPR9	(*(volatile uint_io8_t*)0xB7280429)  /*@bfbba@*/
#define PPU0_PPR1_PPR10	(*(volatile uint_io8_t*)0xB728042A)  /*@bfbba@*/
#define PPU0_PPR1_PPR11	(*(volatile uint_io8_t*)0xB728042B)  /*@bfbba@*/
#define PPU0_PPR1_PPR12	(*(volatile uint_io8_t*)0xB728042C)  /*@bfbba@*/
#define PPU0_PPR1_PPR13	(*(volatile uint_io8_t*)0xB728042D)  /*@bfbba@*/
#define PPU0_PPR1_PPR14	(*(volatile uint_io8_t*)0xB728042E)  /*@bfbba@*/
#define PPU0_PPR1_PPR15	(*(volatile uint_io8_t*)0xB728042F)  /*@bfbba@*/
#define PPU0_PPR1_PPR16	(*(volatile uint_io8_t*)0xB7280430)  /*@bfbba@*/
#define PPU0_PPR1_PPR17	(*(volatile uint_io8_t*)0xB7280431)  /*@bfbba@*/
#define PPU0_PPR1_PPR18	(*(volatile uint_io8_t*)0xB7280432)  /*@bfbba@*/
#define PPU0_PPR1_PPR19	(*(volatile uint_io8_t*)0xB7280433)  /*@bfbba@*/
#define PPU0_PPR1_PPR20	(*(volatile uint_io8_t*)0xB7280434)  /*@bfbba@*/
#define PPU0_PPR1_PPR21	(*(volatile uint_io8_t*)0xB7280435)  /*@bfbba@*/
#define PPU0_PPR1_PPR22	(*(volatile uint_io8_t*)0xB7280436)  /*@bfbba@*/
#define PPU0_PPR1_PPR23	(*(volatile uint_io8_t*)0xB7280437)  /*@bfbba@*/
#define PPU0_PPR1_PPR24	(*(volatile uint_io8_t*)0xB7280438)  /*@bfbba@*/
#define PPU0_PPR1_PPR25	(*(volatile uint_io8_t*)0xB7280439)  /*@bfbba@*/
#define PPU0_PPR1_PPR26	(*(volatile uint_io8_t*)0xB728043A)  /*@bfbba@*/
#define PPU0_PPR1_PPR27	(*(volatile uint_io8_t*)0xB728043B)  /*@bfbba@*/
#define PPU0_PPR1_PPR28	(*(volatile uint_io8_t*)0xB728043C)  /*@bfbba@*/
#define PPU0_PPR1_PPR29	(*(volatile uint_io8_t*)0xB728043D)  /*@bfbba@*/
#define PPU0_PPR1_PPR30	(*(volatile uint_io8_t*)0xB728043E)  /*@bfbba@*/
#define PPU0_PPR1_PPR31	(*(volatile uint_io8_t*)0xB728043F)  /*@bfbba@*/

#define PPU0_PPR2	(PPU0.unPPR2.u32Register)  /*@rg@*/
#define PPU0_PPR2_PPR0	(*(volatile uint_io8_t*)0xB7280440)  /*@bfbba@*/
#define PPU0_PPR2_PPR1	(*(volatile uint_io8_t*)0xB7280441)  /*@bfbba@*/
#define PPU0_PPR2_PPR2	(*(volatile uint_io8_t*)0xB7280442)  /*@bfbba@*/
#define PPU0_PPR2_PPR3	(*(volatile uint_io8_t*)0xB7280443)  /*@bfbba@*/
#define PPU0_PPR2_PPR4	(*(volatile uint_io8_t*)0xB7280444)  /*@bfbba@*/
#define PPU0_PPR2_PPR5	(*(volatile uint_io8_t*)0xB7280445)  /*@bfbba@*/
#define PPU0_PPR2_PPR6	(*(volatile uint_io8_t*)0xB7280446)  /*@bfbba@*/
#define PPU0_PPR2_PPR7	(*(volatile uint_io8_t*)0xB7280447)  /*@bfbba@*/
#define PPU0_PPR2_PPR8	(*(volatile uint_io8_t*)0xB7280448)  /*@bfbba@*/
#define PPU0_PPR2_PPR9	(*(volatile uint_io8_t*)0xB7280449)  /*@bfbba@*/
#define PPU0_PPR2_PPR10	(*(volatile uint_io8_t*)0xB728044A)  /*@bfbba@*/
#define PPU0_PPR2_PPR11	(*(volatile uint_io8_t*)0xB728044B)  /*@bfbba@*/
#define PPU0_PPR2_PPR12	(*(volatile uint_io8_t*)0xB728044C)  /*@bfbba@*/
#define PPU0_PPR2_PPR13	(*(volatile uint_io8_t*)0xB728044D)  /*@bfbba@*/
#define PPU0_PPR2_PPR14	(*(volatile uint_io8_t*)0xB728044E)  /*@bfbba@*/
#define PPU0_PPR2_PPR15	(*(volatile uint_io8_t*)0xB728044F)  /*@bfbba@*/
#define PPU0_PPR2_PPR16	(*(volatile uint_io8_t*)0xB7280450)  /*@bfbba@*/
#define PPU0_PPR2_PPR17	(*(volatile uint_io8_t*)0xB7280451)  /*@bfbba@*/
#define PPU0_PPR2_PPR18	(*(volatile uint_io8_t*)0xB7280452)  /*@bfbba@*/
#define PPU0_PPR2_PPR19	(*(volatile uint_io8_t*)0xB7280453)  /*@bfbba@*/
#define PPU0_PPR2_PPR20	(*(volatile uint_io8_t*)0xB7280454)  /*@bfbba@*/
#define PPU0_PPR2_PPR21	(*(volatile uint_io8_t*)0xB7280455)  /*@bfbba@*/
#define PPU0_PPR2_PPR22	(*(volatile uint_io8_t*)0xB7280456)  /*@bfbba@*/
#define PPU0_PPR2_PPR23	(*(volatile uint_io8_t*)0xB7280457)  /*@bfbba@*/
#define PPU0_PPR2_PPR24	(*(volatile uint_io8_t*)0xB7280458)  /*@bfbba@*/
#define PPU0_PPR2_PPR25	(*(volatile uint_io8_t*)0xB7280459)  /*@bfbba@*/
#define PPU0_PPR2_PPR26	(*(volatile uint_io8_t*)0xB728045A)  /*@bfbba@*/
#define PPU0_PPR2_PPR27	(*(volatile uint_io8_t*)0xB728045B)  /*@bfbba@*/
#define PPU0_PPR2_PPR28	(*(volatile uint_io8_t*)0xB728045C)  /*@bfbba@*/
#define PPU0_PPR2_PPR29	(*(volatile uint_io8_t*)0xB728045D)  /*@bfbba@*/
#define PPU0_PPR2_PPR30	(*(volatile uint_io8_t*)0xB728045E)  /*@bfbba@*/
#define PPU0_PPR2_PPR31	(*(volatile uint_io8_t*)0xB728045F)  /*@bfbba@*/

#define PPU0_PPR3	(PPU0.unPPR3.u32Register)  /*@rg@*/
#define PPU0_PPR3_PPR0	(*(volatile uint_io8_t*)0xB7280460)  /*@bfbba@*/
#define PPU0_PPR3_PPR1	(*(volatile uint_io8_t*)0xB7280461)  /*@bfbba@*/
#define PPU0_PPR3_PPR2	(*(volatile uint_io8_t*)0xB7280462)  /*@bfbba@*/
#define PPU0_PPR3_PPR3	(*(volatile uint_io8_t*)0xB7280463)  /*@bfbba@*/
#define PPU0_PPR3_PPR4	(*(volatile uint_io8_t*)0xB7280464)  /*@bfbba@*/
#define PPU0_PPR3_PPR5	(*(volatile uint_io8_t*)0xB7280465)  /*@bfbba@*/
#define PPU0_PPR3_PPR6	(*(volatile uint_io8_t*)0xB7280466)  /*@bfbba@*/
#define PPU0_PPR3_PPR7	(*(volatile uint_io8_t*)0xB7280467)  /*@bfbba@*/
#define PPU0_PPR3_PPR8	(*(volatile uint_io8_t*)0xB7280468)  /*@bfbba@*/
#define PPU0_PPR3_PPR9	(*(volatile uint_io8_t*)0xB7280469)  /*@bfbba@*/
#define PPU0_PPR3_PPR10	(*(volatile uint_io8_t*)0xB728046A)  /*@bfbba@*/
#define PPU0_PPR3_PPR11	(*(volatile uint_io8_t*)0xB728046B)  /*@bfbba@*/
#define PPU0_PPR3_PPR12	(*(volatile uint_io8_t*)0xB728046C)  /*@bfbba@*/
#define PPU0_PPR3_PPR13	(*(volatile uint_io8_t*)0xB728046D)  /*@bfbba@*/
#define PPU0_PPR3_PPR14	(*(volatile uint_io8_t*)0xB728046E)  /*@bfbba@*/
#define PPU0_PPR3_PPR15	(*(volatile uint_io8_t*)0xB728046F)  /*@bfbba@*/
#define PPU0_PPR3_PPR16	(*(volatile uint_io8_t*)0xB7280470)  /*@bfbba@*/
#define PPU0_PPR3_PPR17	(*(volatile uint_io8_t*)0xB7280471)  /*@bfbba@*/
#define PPU0_PPR3_PPR18	(*(volatile uint_io8_t*)0xB7280472)  /*@bfbba@*/
#define PPU0_PPR3_PPR19	(*(volatile uint_io8_t*)0xB7280473)  /*@bfbba@*/
#define PPU0_PPR3_PPR20	(*(volatile uint_io8_t*)0xB7280474)  /*@bfbba@*/
#define PPU0_PPR3_PPR21	(*(volatile uint_io8_t*)0xB7280475)  /*@bfbba@*/
#define PPU0_PPR3_PPR22	(*(volatile uint_io8_t*)0xB7280476)  /*@bfbba@*/
#define PPU0_PPR3_PPR23	(*(volatile uint_io8_t*)0xB7280477)  /*@bfbba@*/
#define PPU0_PPR3_PPR24	(*(volatile uint_io8_t*)0xB7280478)  /*@bfbba@*/
#define PPU0_PPR3_PPR25	(*(volatile uint_io8_t*)0xB7280479)  /*@bfbba@*/
#define PPU0_PPR3_PPR26	(*(volatile uint_io8_t*)0xB728047A)  /*@bfbba@*/
#define PPU0_PPR3_PPR27	(*(volatile uint_io8_t*)0xB728047B)  /*@bfbba@*/
#define PPU0_PPR3_PPR28	(*(volatile uint_io8_t*)0xB728047C)  /*@bfbba@*/
#define PPU0_PPR3_PPR29	(*(volatile uint_io8_t*)0xB728047D)  /*@bfbba@*/
#define PPU0_PPR3_PPR30	(*(volatile uint_io8_t*)0xB728047E)  /*@bfbba@*/
#define PPU0_PPR3_PPR31	(*(volatile uint_io8_t*)0xB728047F)  /*@bfbba@*/

#define PPU0_PPR4	(PPU0.unPPR4.u32Register)  /*@rg@*/
#define PPU0_PPR4_PPR0	(*(volatile uint_io8_t*)0xB7280480)  /*@bfbba@*/
#define PPU0_PPR4_PPR1	(*(volatile uint_io8_t*)0xB7280481)  /*@bfbba@*/
#define PPU0_PPR4_PPR2	(*(volatile uint_io8_t*)0xB7280482)  /*@bfbba@*/
#define PPU0_PPR4_PPR3	(*(volatile uint_io8_t*)0xB7280483)  /*@bfbba@*/
#define PPU0_PPR4_PPR4	(*(volatile uint_io8_t*)0xB7280484)  /*@bfbba@*/
#define PPU0_PPR4_PPR5	(*(volatile uint_io8_t*)0xB7280485)  /*@bfbba@*/
#define PPU0_PPR4_PPR6	(*(volatile uint_io8_t*)0xB7280486)  /*@bfbba@*/
#define PPU0_PPR4_PPR7	(*(volatile uint_io8_t*)0xB7280487)  /*@bfbba@*/
#define PPU0_PPR4_PPR8	(*(volatile uint_io8_t*)0xB7280488)  /*@bfbba@*/
#define PPU0_PPR4_PPR9	(*(volatile uint_io8_t*)0xB7280489)  /*@bfbba@*/
#define PPU0_PPR4_PPR10	(*(volatile uint_io8_t*)0xB728048A)  /*@bfbba@*/
#define PPU0_PPR4_PPR11	(*(volatile uint_io8_t*)0xB728048B)  /*@bfbba@*/
#define PPU0_PPR4_PPR12	(*(volatile uint_io8_t*)0xB728048C)  /*@bfbba@*/
#define PPU0_PPR4_PPR13	(*(volatile uint_io8_t*)0xB728048D)  /*@bfbba@*/
#define PPU0_PPR4_PPR14	(*(volatile uint_io8_t*)0xB728048E)  /*@bfbba@*/
#define PPU0_PPR4_PPR15	(*(volatile uint_io8_t*)0xB728048F)  /*@bfbba@*/
#define PPU0_PPR4_PPR16	(*(volatile uint_io8_t*)0xB7280490)  /*@bfbba@*/
#define PPU0_PPR4_PPR17	(*(volatile uint_io8_t*)0xB7280491)  /*@bfbba@*/
#define PPU0_PPR4_PPR18	(*(volatile uint_io8_t*)0xB7280492)  /*@bfbba@*/
#define PPU0_PPR4_PPR19	(*(volatile uint_io8_t*)0xB7280493)  /*@bfbba@*/
#define PPU0_PPR4_PPR20	(*(volatile uint_io8_t*)0xB7280494)  /*@bfbba@*/
#define PPU0_PPR4_PPR21	(*(volatile uint_io8_t*)0xB7280495)  /*@bfbba@*/
#define PPU0_PPR4_PPR22	(*(volatile uint_io8_t*)0xB7280496)  /*@bfbba@*/
#define PPU0_PPR4_PPR23	(*(volatile uint_io8_t*)0xB7280497)  /*@bfbba@*/
#define PPU0_PPR4_PPR24	(*(volatile uint_io8_t*)0xB7280498)  /*@bfbba@*/
#define PPU0_PPR4_PPR25	(*(volatile uint_io8_t*)0xB7280499)  /*@bfbba@*/
#define PPU0_PPR4_PPR26	(*(volatile uint_io8_t*)0xB728049A)  /*@bfbba@*/
#define PPU0_PPR4_PPR27	(*(volatile uint_io8_t*)0xB728049B)  /*@bfbba@*/
#define PPU0_PPR4_PPR28	(*(volatile uint_io8_t*)0xB728049C)  /*@bfbba@*/
#define PPU0_PPR4_PPR29	(*(volatile uint_io8_t*)0xB728049D)  /*@bfbba@*/
#define PPU0_PPR4_PPR30	(*(volatile uint_io8_t*)0xB728049E)  /*@bfbba@*/
#define PPU0_PPR4_PPR31	(*(volatile uint_io8_t*)0xB728049F)  /*@bfbba@*/

#define PPU0_PPR5	(PPU0.unPPR5.u32Register)  /*@rg@*/
#define PPU0_PPR5_PPR0	(*(volatile uint_io8_t*)0xB72804A0)  /*@bfbba@*/
#define PPU0_PPR5_PPR1	(*(volatile uint_io8_t*)0xB72804A1)  /*@bfbba@*/
#define PPU0_PPR5_PPR2	(*(volatile uint_io8_t*)0xB72804A2)  /*@bfbba@*/
#define PPU0_PPR5_PPR3	(*(volatile uint_io8_t*)0xB72804A3)  /*@bfbba@*/
#define PPU0_PPR5_PPR4	(*(volatile uint_io8_t*)0xB72804A4)  /*@bfbba@*/
#define PPU0_PPR5_PPR5	(*(volatile uint_io8_t*)0xB72804A5)  /*@bfbba@*/
#define PPU0_PPR5_PPR6	(*(volatile uint_io8_t*)0xB72804A6)  /*@bfbba@*/
#define PPU0_PPR5_PPR7	(*(volatile uint_io8_t*)0xB72804A7)  /*@bfbba@*/
#define PPU0_PPR5_PPR8	(*(volatile uint_io8_t*)0xB72804A8)  /*@bfbba@*/
#define PPU0_PPR5_PPR9	(*(volatile uint_io8_t*)0xB72804A9)  /*@bfbba@*/
#define PPU0_PPR5_PPR10	(*(volatile uint_io8_t*)0xB72804AA)  /*@bfbba@*/
#define PPU0_PPR5_PPR11	(*(volatile uint_io8_t*)0xB72804AB)  /*@bfbba@*/
#define PPU0_PPR5_PPR12	(*(volatile uint_io8_t*)0xB72804AC)  /*@bfbba@*/
#define PPU0_PPR5_PPR13	(*(volatile uint_io8_t*)0xB72804AD)  /*@bfbba@*/
#define PPU0_PPR5_PPR14	(*(volatile uint_io8_t*)0xB72804AE)  /*@bfbba@*/
#define PPU0_PPR5_PPR15	(*(volatile uint_io8_t*)0xB72804AF)  /*@bfbba@*/
#define PPU0_PPR5_PPR16	(*(volatile uint_io8_t*)0xB72804B0)  /*@bfbba@*/
#define PPU0_PPR5_PPR17	(*(volatile uint_io8_t*)0xB72804B1)  /*@bfbba@*/
#define PPU0_PPR5_PPR18	(*(volatile uint_io8_t*)0xB72804B2)  /*@bfbba@*/
#define PPU0_PPR5_PPR19	(*(volatile uint_io8_t*)0xB72804B3)  /*@bfbba@*/
#define PPU0_PPR5_PPR20	(*(volatile uint_io8_t*)0xB72804B4)  /*@bfbba@*/
#define PPU0_PPR5_PPR21	(*(volatile uint_io8_t*)0xB72804B5)  /*@bfbba@*/
#define PPU0_PPR5_PPR22	(*(volatile uint_io8_t*)0xB72804B6)  /*@bfbba@*/
#define PPU0_PPR5_PPR23	(*(volatile uint_io8_t*)0xB72804B7)  /*@bfbba@*/
#define PPU0_PPR5_PPR24	(*(volatile uint_io8_t*)0xB72804B8)  /*@bfbba@*/
#define PPU0_PPR5_PPR25	(*(volatile uint_io8_t*)0xB72804B9)  /*@bfbba@*/
#define PPU0_PPR5_PPR26	(*(volatile uint_io8_t*)0xB72804BA)  /*@bfbba@*/
#define PPU0_PPR5_PPR27	(*(volatile uint_io8_t*)0xB72804BB)  /*@bfbba@*/
#define PPU0_PPR5_PPR28	(*(volatile uint_io8_t*)0xB72804BC)  /*@bfbba@*/
#define PPU0_PPR5_PPR29	(*(volatile uint_io8_t*)0xB72804BD)  /*@bfbba@*/
#define PPU0_PPR5_PPR30	(*(volatile uint_io8_t*)0xB72804BE)  /*@bfbba@*/
#define PPU0_PPR5_PPR31	(*(volatile uint_io8_t*)0xB72804BF)  /*@bfbba@*/

#define PPU0_PPR6	(PPU0.unPPR6.u32Register)  /*@rg@*/
#define PPU0_PPR6_PPR0	(*(volatile uint_io8_t*)0xB72804C0)  /*@bfbba@*/
#define PPU0_PPR6_PPR1	(*(volatile uint_io8_t*)0xB72804C1)  /*@bfbba@*/
#define PPU0_PPR6_PPR2	(*(volatile uint_io8_t*)0xB72804C2)  /*@bfbba@*/
#define PPU0_PPR6_PPR3	(*(volatile uint_io8_t*)0xB72804C3)  /*@bfbba@*/
#define PPU0_PPR6_PPR4	(*(volatile uint_io8_t*)0xB72804C4)  /*@bfbba@*/
#define PPU0_PPR6_PPR5	(*(volatile uint_io8_t*)0xB72804C5)  /*@bfbba@*/
#define PPU0_PPR6_PPR6	(*(volatile uint_io8_t*)0xB72804C6)  /*@bfbba@*/
#define PPU0_PPR6_PPR7	(*(volatile uint_io8_t*)0xB72804C7)  /*@bfbba@*/
#define PPU0_PPR6_PPR8	(*(volatile uint_io8_t*)0xB72804C8)  /*@bfbba@*/
#define PPU0_PPR6_PPR9	(*(volatile uint_io8_t*)0xB72804C9)  /*@bfbba@*/
#define PPU0_PPR6_PPR10	(*(volatile uint_io8_t*)0xB72804CA)  /*@bfbba@*/
#define PPU0_PPR6_PPR11	(*(volatile uint_io8_t*)0xB72804CB)  /*@bfbba@*/
#define PPU0_PPR6_PPR12	(*(volatile uint_io8_t*)0xB72804CC)  /*@bfbba@*/
#define PPU0_PPR6_PPR13	(*(volatile uint_io8_t*)0xB72804CD)  /*@bfbba@*/
#define PPU0_PPR6_PPR14	(*(volatile uint_io8_t*)0xB72804CE)  /*@bfbba@*/
#define PPU0_PPR6_PPR15	(*(volatile uint_io8_t*)0xB72804CF)  /*@bfbba@*/
#define PPU0_PPR6_PPR16	(*(volatile uint_io8_t*)0xB72804D0)  /*@bfbba@*/
#define PPU0_PPR6_PPR17	(*(volatile uint_io8_t*)0xB72804D1)  /*@bfbba@*/
#define PPU0_PPR6_PPR18	(*(volatile uint_io8_t*)0xB72804D2)  /*@bfbba@*/
#define PPU0_PPR6_PPR19	(*(volatile uint_io8_t*)0xB72804D3)  /*@bfbba@*/
#define PPU0_PPR6_PPR20	(*(volatile uint_io8_t*)0xB72804D4)  /*@bfbba@*/
#define PPU0_PPR6_PPR21	(*(volatile uint_io8_t*)0xB72804D5)  /*@bfbba@*/
#define PPU0_PPR6_PPR22	(*(volatile uint_io8_t*)0xB72804D6)  /*@bfbba@*/
#define PPU0_PPR6_PPR23	(*(volatile uint_io8_t*)0xB72804D7)  /*@bfbba@*/
#define PPU0_PPR6_PPR24	(*(volatile uint_io8_t*)0xB72804D8)  /*@bfbba@*/
#define PPU0_PPR6_PPR25	(*(volatile uint_io8_t*)0xB72804D9)  /*@bfbba@*/
#define PPU0_PPR6_PPR26	(*(volatile uint_io8_t*)0xB72804DA)  /*@bfbba@*/
#define PPU0_PPR6_PPR27	(*(volatile uint_io8_t*)0xB72804DB)  /*@bfbba@*/
#define PPU0_PPR6_PPR28	(*(volatile uint_io8_t*)0xB72804DC)  /*@bfbba@*/
#define PPU0_PPR6_PPR29	(*(volatile uint_io8_t*)0xB72804DD)  /*@bfbba@*/
#define PPU0_PPR6_PPR30	(*(volatile uint_io8_t*)0xB72804DE)  /*@bfbba@*/
#define PPU0_PPR6_PPR31	(*(volatile uint_io8_t*)0xB72804DF)  /*@bfbba@*/

#define PPU0_PPR7	(PPU0.unPPR7.u32Register)  /*@rg@*/
#define PPU0_PPR7_PPR0	(*(volatile uint_io8_t*)0xB72804E0)  /*@bfbba@*/
#define PPU0_PPR7_PPR1	(*(volatile uint_io8_t*)0xB72804E1)  /*@bfbba@*/
#define PPU0_PPR7_PPR2	(*(volatile uint_io8_t*)0xB72804E2)  /*@bfbba@*/
#define PPU0_PPR7_PPR3	(*(volatile uint_io8_t*)0xB72804E3)  /*@bfbba@*/
#define PPU0_PPR7_PPR4	(*(volatile uint_io8_t*)0xB72804E4)  /*@bfbba@*/
#define PPU0_PPR7_PPR5	(*(volatile uint_io8_t*)0xB72804E5)  /*@bfbba@*/
#define PPU0_PPR7_PPR6	(*(volatile uint_io8_t*)0xB72804E6)  /*@bfbba@*/
#define PPU0_PPR7_PPR7	(*(volatile uint_io8_t*)0xB72804E7)  /*@bfbba@*/
#define PPU0_PPR7_PPR8	(*(volatile uint_io8_t*)0xB72804E8)  /*@bfbba@*/
#define PPU0_PPR7_PPR9	(*(volatile uint_io8_t*)0xB72804E9)  /*@bfbba@*/
#define PPU0_PPR7_PPR10	(*(volatile uint_io8_t*)0xB72804EA)  /*@bfbba@*/
#define PPU0_PPR7_PPR11	(*(volatile uint_io8_t*)0xB72804EB)  /*@bfbba@*/
#define PPU0_PPR7_PPR12	(*(volatile uint_io8_t*)0xB72804EC)  /*@bfbba@*/
#define PPU0_PPR7_PPR13	(*(volatile uint_io8_t*)0xB72804ED)  /*@bfbba@*/
#define PPU0_PPR7_PPR14	(*(volatile uint_io8_t*)0xB72804EE)  /*@bfbba@*/
#define PPU0_PPR7_PPR15	(*(volatile uint_io8_t*)0xB72804EF)  /*@bfbba@*/
#define PPU0_PPR7_PPR16	(*(volatile uint_io8_t*)0xB72804F0)  /*@bfbba@*/
#define PPU0_PPR7_PPR17	(*(volatile uint_io8_t*)0xB72804F1)  /*@bfbba@*/
#define PPU0_PPR7_PPR18	(*(volatile uint_io8_t*)0xB72804F2)  /*@bfbba@*/
#define PPU0_PPR7_PPR19	(*(volatile uint_io8_t*)0xB72804F3)  /*@bfbba@*/
#define PPU0_PPR7_PPR20	(*(volatile uint_io8_t*)0xB72804F4)  /*@bfbba@*/
#define PPU0_PPR7_PPR21	(*(volatile uint_io8_t*)0xB72804F5)  /*@bfbba@*/
#define PPU0_PPR7_PPR22	(*(volatile uint_io8_t*)0xB72804F6)  /*@bfbba@*/
#define PPU0_PPR7_PPR23	(*(volatile uint_io8_t*)0xB72804F7)  /*@bfbba@*/
#define PPU0_PPR7_PPR24	(*(volatile uint_io8_t*)0xB72804F8)  /*@bfbba@*/
#define PPU0_PPR7_PPR25	(*(volatile uint_io8_t*)0xB72804F9)  /*@bfbba@*/
#define PPU0_PPR7_PPR26	(*(volatile uint_io8_t*)0xB72804FA)  /*@bfbba@*/
#define PPU0_PPR7_PPR27	(*(volatile uint_io8_t*)0xB72804FB)  /*@bfbba@*/
#define PPU0_PPR7_PPR28	(*(volatile uint_io8_t*)0xB72804FC)  /*@bfbba@*/
#define PPU0_PPR7_PPR29	(*(volatile uint_io8_t*)0xB72804FD)  /*@bfbba@*/
#define PPU0_PPR7_PPR30	(*(volatile uint_io8_t*)0xB72804FE)  /*@bfbba@*/
#define PPU0_PPR7_PPR31	(*(volatile uint_io8_t*)0xB72804FF)  /*@bfbba@*/

#define PPU0_PPR8	(PPU0.unPPR8.u32Register)  /*@rg@*/
#define PPU0_PPR8_PPR0	(*(volatile uint_io8_t*)0xB7280500)  /*@bfbba@*/
#define PPU0_PPR8_PPR1	(*(volatile uint_io8_t*)0xB7280501)  /*@bfbba@*/
#define PPU0_PPR8_PPR2	(*(volatile uint_io8_t*)0xB7280502)  /*@bfbba@*/
#define PPU0_PPR8_PPR3	(*(volatile uint_io8_t*)0xB7280503)  /*@bfbba@*/
#define PPU0_PPR8_PPR4	(*(volatile uint_io8_t*)0xB7280504)  /*@bfbba@*/
#define PPU0_PPR8_PPR5	(*(volatile uint_io8_t*)0xB7280505)  /*@bfbba@*/
#define PPU0_PPR8_PPR6	(*(volatile uint_io8_t*)0xB7280506)  /*@bfbba@*/
#define PPU0_PPR8_PPR7	(*(volatile uint_io8_t*)0xB7280507)  /*@bfbba@*/
#define PPU0_PPR8_PPR8	(*(volatile uint_io8_t*)0xB7280508)  /*@bfbba@*/
#define PPU0_PPR8_PPR9	(*(volatile uint_io8_t*)0xB7280509)  /*@bfbba@*/
#define PPU0_PPR8_PPR10	(*(volatile uint_io8_t*)0xB728050A)  /*@bfbba@*/
#define PPU0_PPR8_PPR11	(*(volatile uint_io8_t*)0xB728050B)  /*@bfbba@*/
#define PPU0_PPR8_PPR12	(*(volatile uint_io8_t*)0xB728050C)  /*@bfbba@*/
#define PPU0_PPR8_PPR13	(*(volatile uint_io8_t*)0xB728050D)  /*@bfbba@*/
#define PPU0_PPR8_PPR14	(*(volatile uint_io8_t*)0xB728050E)  /*@bfbba@*/
#define PPU0_PPR8_PPR15	(*(volatile uint_io8_t*)0xB728050F)  /*@bfbba@*/
#define PPU0_PPR8_PPR16	(*(volatile uint_io8_t*)0xB7280510)  /*@bfbba@*/
#define PPU0_PPR8_PPR17	(*(volatile uint_io8_t*)0xB7280511)  /*@bfbba@*/
#define PPU0_PPR8_PPR18	(*(volatile uint_io8_t*)0xB7280512)  /*@bfbba@*/
#define PPU0_PPR8_PPR19	(*(volatile uint_io8_t*)0xB7280513)  /*@bfbba@*/
#define PPU0_PPR8_PPR20	(*(volatile uint_io8_t*)0xB7280514)  /*@bfbba@*/
#define PPU0_PPR8_PPR21	(*(volatile uint_io8_t*)0xB7280515)  /*@bfbba@*/
#define PPU0_PPR8_PPR22	(*(volatile uint_io8_t*)0xB7280516)  /*@bfbba@*/
#define PPU0_PPR8_PPR23	(*(volatile uint_io8_t*)0xB7280517)  /*@bfbba@*/
#define PPU0_PPR8_PPR24	(*(volatile uint_io8_t*)0xB7280518)  /*@bfbba@*/
#define PPU0_PPR8_PPR25	(*(volatile uint_io8_t*)0xB7280519)  /*@bfbba@*/
#define PPU0_PPR8_PPR26	(*(volatile uint_io8_t*)0xB728051A)  /*@bfbba@*/
#define PPU0_PPR8_PPR27	(*(volatile uint_io8_t*)0xB728051B)  /*@bfbba@*/
#define PPU0_PPR8_PPR28	(*(volatile uint_io8_t*)0xB728051C)  /*@bfbba@*/
#define PPU0_PPR8_PPR29	(*(volatile uint_io8_t*)0xB728051D)  /*@bfbba@*/
#define PPU0_PPR8_PPR30	(*(volatile uint_io8_t*)0xB728051E)  /*@bfbba@*/
#define PPU0_PPR8_PPR31	(*(volatile uint_io8_t*)0xB728051F)  /*@bfbba@*/

#define PPU0_PPR9	(PPU0.unPPR9.u32Register)  /*@rg@*/
#define PPU0_PPR9_PPR0	(*(volatile uint_io8_t*)0xB7280520)  /*@bfbba@*/
#define PPU0_PPR9_PPR1	(*(volatile uint_io8_t*)0xB7280521)  /*@bfbba@*/
#define PPU0_PPR9_PPR2	(*(volatile uint_io8_t*)0xB7280522)  /*@bfbba@*/
#define PPU0_PPR9_PPR3	(*(volatile uint_io8_t*)0xB7280523)  /*@bfbba@*/
#define PPU0_PPR9_PPR4	(*(volatile uint_io8_t*)0xB7280524)  /*@bfbba@*/
#define PPU0_PPR9_PPR5	(*(volatile uint_io8_t*)0xB7280525)  /*@bfbba@*/
#define PPU0_PPR9_PPR6	(*(volatile uint_io8_t*)0xB7280526)  /*@bfbba@*/
#define PPU0_PPR9_PPR7	(*(volatile uint_io8_t*)0xB7280527)  /*@bfbba@*/
#define PPU0_PPR9_PPR8	(*(volatile uint_io8_t*)0xB7280528)  /*@bfbba@*/
#define PPU0_PPR9_PPR9	(*(volatile uint_io8_t*)0xB7280529)  /*@bfbba@*/
#define PPU0_PPR9_PPR10	(*(volatile uint_io8_t*)0xB728052A)  /*@bfbba@*/
#define PPU0_PPR9_PPR11	(*(volatile uint_io8_t*)0xB728052B)  /*@bfbba@*/
#define PPU0_PPR9_PPR12	(*(volatile uint_io8_t*)0xB728052C)  /*@bfbba@*/
#define PPU0_PPR9_PPR13	(*(volatile uint_io8_t*)0xB728052D)  /*@bfbba@*/
#define PPU0_PPR9_PPR14	(*(volatile uint_io8_t*)0xB728052E)  /*@bfbba@*/
#define PPU0_PPR9_PPR15	(*(volatile uint_io8_t*)0xB728052F)  /*@bfbba@*/
#define PPU0_PPR9_PPR16	(*(volatile uint_io8_t*)0xB7280530)  /*@bfbba@*/
#define PPU0_PPR9_PPR17	(*(volatile uint_io8_t*)0xB7280531)  /*@bfbba@*/
#define PPU0_PPR9_PPR18	(*(volatile uint_io8_t*)0xB7280532)  /*@bfbba@*/
#define PPU0_PPR9_PPR19	(*(volatile uint_io8_t*)0xB7280533)  /*@bfbba@*/
#define PPU0_PPR9_PPR20	(*(volatile uint_io8_t*)0xB7280534)  /*@bfbba@*/
#define PPU0_PPR9_PPR21	(*(volatile uint_io8_t*)0xB7280535)  /*@bfbba@*/
#define PPU0_PPR9_PPR22	(*(volatile uint_io8_t*)0xB7280536)  /*@bfbba@*/
#define PPU0_PPR9_PPR23	(*(volatile uint_io8_t*)0xB7280537)  /*@bfbba@*/
#define PPU0_PPR9_PPR24	(*(volatile uint_io8_t*)0xB7280538)  /*@bfbba@*/
#define PPU0_PPR9_PPR25	(*(volatile uint_io8_t*)0xB7280539)  /*@bfbba@*/
#define PPU0_PPR9_PPR26	(*(volatile uint_io8_t*)0xB728053A)  /*@bfbba@*/
#define PPU0_PPR9_PPR27	(*(volatile uint_io8_t*)0xB728053B)  /*@bfbba@*/
#define PPU0_PPR9_PPR28	(*(volatile uint_io8_t*)0xB728053C)  /*@bfbba@*/
#define PPU0_PPR9_PPR29	(*(volatile uint_io8_t*)0xB728053D)  /*@bfbba@*/
#define PPU0_PPR9_PPR30	(*(volatile uint_io8_t*)0xB728053E)  /*@bfbba@*/
#define PPU0_PPR9_PPR31	(*(volatile uint_io8_t*)0xB728053F)  /*@bfbba@*/

#define PPU0_PPR10	(PPU0.unPPR10.u32Register)  /*@rg@*/
#define PPU0_PPR10_PPR0	(*(volatile uint_io8_t*)0xB7280540)  /*@bfbba@*/
#define PPU0_PPR10_PPR1	(*(volatile uint_io8_t*)0xB7280541)  /*@bfbba@*/
#define PPU0_PPR10_PPR2	(*(volatile uint_io8_t*)0xB7280542)  /*@bfbba@*/
#define PPU0_PPR10_PPR3	(*(volatile uint_io8_t*)0xB7280543)  /*@bfbba@*/
#define PPU0_PPR10_PPR4	(*(volatile uint_io8_t*)0xB7280544)  /*@bfbba@*/
#define PPU0_PPR10_PPR5	(*(volatile uint_io8_t*)0xB7280545)  /*@bfbba@*/
#define PPU0_PPR10_PPR6	(*(volatile uint_io8_t*)0xB7280546)  /*@bfbba@*/
#define PPU0_PPR10_PPR7	(*(volatile uint_io8_t*)0xB7280547)  /*@bfbba@*/
#define PPU0_PPR10_PPR8	(*(volatile uint_io8_t*)0xB7280548)  /*@bfbba@*/
#define PPU0_PPR10_PPR9	(*(volatile uint_io8_t*)0xB7280549)  /*@bfbba@*/
#define PPU0_PPR10_PPR10	(*(volatile uint_io8_t*)0xB728054A)  /*@bfbba@*/
#define PPU0_PPR10_PPR11	(*(volatile uint_io8_t*)0xB728054B)  /*@bfbba@*/
#define PPU0_PPR10_PPR12	(*(volatile uint_io8_t*)0xB728054C)  /*@bfbba@*/
#define PPU0_PPR10_PPR13	(*(volatile uint_io8_t*)0xB728054D)  /*@bfbba@*/
#define PPU0_PPR10_PPR14	(*(volatile uint_io8_t*)0xB728054E)  /*@bfbba@*/
#define PPU0_PPR10_PPR15	(*(volatile uint_io8_t*)0xB728054F)  /*@bfbba@*/
#define PPU0_PPR10_PPR16	(*(volatile uint_io8_t*)0xB7280550)  /*@bfbba@*/
#define PPU0_PPR10_PPR17	(*(volatile uint_io8_t*)0xB7280551)  /*@bfbba@*/
#define PPU0_PPR10_PPR18	(*(volatile uint_io8_t*)0xB7280552)  /*@bfbba@*/
#define PPU0_PPR10_PPR19	(*(volatile uint_io8_t*)0xB7280553)  /*@bfbba@*/
#define PPU0_PPR10_PPR20	(*(volatile uint_io8_t*)0xB7280554)  /*@bfbba@*/
#define PPU0_PPR10_PPR21	(*(volatile uint_io8_t*)0xB7280555)  /*@bfbba@*/
#define PPU0_PPR10_PPR22	(*(volatile uint_io8_t*)0xB7280556)  /*@bfbba@*/
#define PPU0_PPR10_PPR23	(*(volatile uint_io8_t*)0xB7280557)  /*@bfbba@*/
#define PPU0_PPR10_PPR24	(*(volatile uint_io8_t*)0xB7280558)  /*@bfbba@*/
#define PPU0_PPR10_PPR25	(*(volatile uint_io8_t*)0xB7280559)  /*@bfbba@*/
#define PPU0_PPR10_PPR26	(*(volatile uint_io8_t*)0xB728055A)  /*@bfbba@*/
#define PPU0_PPR10_PPR27	(*(volatile uint_io8_t*)0xB728055B)  /*@bfbba@*/
#define PPU0_PPR10_PPR28	(*(volatile uint_io8_t*)0xB728055C)  /*@bfbba@*/
#define PPU0_PPR10_PPR29	(*(volatile uint_io8_t*)0xB728055D)  /*@bfbba@*/
#define PPU0_PPR10_PPR30	(*(volatile uint_io8_t*)0xB728055E)  /*@bfbba@*/
#define PPU0_PPR10_PPR31	(*(volatile uint_io8_t*)0xB728055F)  /*@bfbba@*/

#define PPU0_PPR11	(PPU0.unPPR11.u32Register)  /*@rg@*/
#define PPU0_PPR11_PPR0	(*(volatile uint_io8_t*)0xB7280560)  /*@bfbba@*/
#define PPU0_PPR11_PPR1	(*(volatile uint_io8_t*)0xB7280561)  /*@bfbba@*/
#define PPU0_PPR11_PPR2	(*(volatile uint_io8_t*)0xB7280562)  /*@bfbba@*/
#define PPU0_PPR11_PPR3	(*(volatile uint_io8_t*)0xB7280563)  /*@bfbba@*/
#define PPU0_PPR11_PPR4	(*(volatile uint_io8_t*)0xB7280564)  /*@bfbba@*/
#define PPU0_PPR11_PPR5	(*(volatile uint_io8_t*)0xB7280565)  /*@bfbba@*/
#define PPU0_PPR11_PPR6	(*(volatile uint_io8_t*)0xB7280566)  /*@bfbba@*/
#define PPU0_PPR11_PPR7	(*(volatile uint_io8_t*)0xB7280567)  /*@bfbba@*/
#define PPU0_PPR11_PPR8	(*(volatile uint_io8_t*)0xB7280568)  /*@bfbba@*/
#define PPU0_PPR11_PPR9	(*(volatile uint_io8_t*)0xB7280569)  /*@bfbba@*/
#define PPU0_PPR11_PPR10	(*(volatile uint_io8_t*)0xB728056A)  /*@bfbba@*/
#define PPU0_PPR11_PPR11	(*(volatile uint_io8_t*)0xB728056B)  /*@bfbba@*/
#define PPU0_PPR11_PPR12	(*(volatile uint_io8_t*)0xB728056C)  /*@bfbba@*/
#define PPU0_PPR11_PPR13	(*(volatile uint_io8_t*)0xB728056D)  /*@bfbba@*/
#define PPU0_PPR11_PPR14	(*(volatile uint_io8_t*)0xB728056E)  /*@bfbba@*/
#define PPU0_PPR11_PPR15	(*(volatile uint_io8_t*)0xB728056F)  /*@bfbba@*/
#define PPU0_PPR11_PPR16	(*(volatile uint_io8_t*)0xB7280570)  /*@bfbba@*/
#define PPU0_PPR11_PPR17	(*(volatile uint_io8_t*)0xB7280571)  /*@bfbba@*/
#define PPU0_PPR11_PPR18	(*(volatile uint_io8_t*)0xB7280572)  /*@bfbba@*/
#define PPU0_PPR11_PPR19	(*(volatile uint_io8_t*)0xB7280573)  /*@bfbba@*/
#define PPU0_PPR11_PPR20	(*(volatile uint_io8_t*)0xB7280574)  /*@bfbba@*/
#define PPU0_PPR11_PPR21	(*(volatile uint_io8_t*)0xB7280575)  /*@bfbba@*/
#define PPU0_PPR11_PPR22	(*(volatile uint_io8_t*)0xB7280576)  /*@bfbba@*/
#define PPU0_PPR11_PPR23	(*(volatile uint_io8_t*)0xB7280577)  /*@bfbba@*/
#define PPU0_PPR11_PPR24	(*(volatile uint_io8_t*)0xB7280578)  /*@bfbba@*/
#define PPU0_PPR11_PPR25	(*(volatile uint_io8_t*)0xB7280579)  /*@bfbba@*/
#define PPU0_PPR11_PPR26	(*(volatile uint_io8_t*)0xB728057A)  /*@bfbba@*/
#define PPU0_PPR11_PPR27	(*(volatile uint_io8_t*)0xB728057B)  /*@bfbba@*/
#define PPU0_PPR11_PPR28	(*(volatile uint_io8_t*)0xB728057C)  /*@bfbba@*/
#define PPU0_PPR11_PPR29	(*(volatile uint_io8_t*)0xB728057D)  /*@bfbba@*/
#define PPU0_PPR11_PPR30	(*(volatile uint_io8_t*)0xB728057E)  /*@bfbba@*/
#define PPU0_PPR11_PPR31	(*(volatile uint_io8_t*)0xB728057F)  /*@bfbba@*/

#define PPU0_PPR12	(PPU0.unPPR12.u32Register)  /*@rg@*/
#define PPU0_PPR12_PPR0	(*(volatile uint_io8_t*)0xB7280580)  /*@bfbba@*/
#define PPU0_PPR12_PPR1	(*(volatile uint_io8_t*)0xB7280581)  /*@bfbba@*/
#define PPU0_PPR12_PPR2	(*(volatile uint_io8_t*)0xB7280582)  /*@bfbba@*/
#define PPU0_PPR12_PPR3	(*(volatile uint_io8_t*)0xB7280583)  /*@bfbba@*/
#define PPU0_PPR12_PPR4	(*(volatile uint_io8_t*)0xB7280584)  /*@bfbba@*/
#define PPU0_PPR12_PPR5	(*(volatile uint_io8_t*)0xB7280585)  /*@bfbba@*/
#define PPU0_PPR12_PPR6	(*(volatile uint_io8_t*)0xB7280586)  /*@bfbba@*/
#define PPU0_PPR12_PPR7	(*(volatile uint_io8_t*)0xB7280587)  /*@bfbba@*/
#define PPU0_PPR12_PPR8	(*(volatile uint_io8_t*)0xB7280588)  /*@bfbba@*/
#define PPU0_PPR12_PPR9	(*(volatile uint_io8_t*)0xB7280589)  /*@bfbba@*/
#define PPU0_PPR12_PPR10	(*(volatile uint_io8_t*)0xB728058A)  /*@bfbba@*/
#define PPU0_PPR12_PPR11	(*(volatile uint_io8_t*)0xB728058B)  /*@bfbba@*/
#define PPU0_PPR12_PPR12	(*(volatile uint_io8_t*)0xB728058C)  /*@bfbba@*/
#define PPU0_PPR12_PPR13	(*(volatile uint_io8_t*)0xB728058D)  /*@bfbba@*/
#define PPU0_PPR12_PPR14	(*(volatile uint_io8_t*)0xB728058E)  /*@bfbba@*/
#define PPU0_PPR12_PPR15	(*(volatile uint_io8_t*)0xB728058F)  /*@bfbba@*/
#define PPU0_PPR12_PPR16	(*(volatile uint_io8_t*)0xB7280590)  /*@bfbba@*/
#define PPU0_PPR12_PPR17	(*(volatile uint_io8_t*)0xB7280591)  /*@bfbba@*/
#define PPU0_PPR12_PPR18	(*(volatile uint_io8_t*)0xB7280592)  /*@bfbba@*/
#define PPU0_PPR12_PPR19	(*(volatile uint_io8_t*)0xB7280593)  /*@bfbba@*/
#define PPU0_PPR12_PPR20	(*(volatile uint_io8_t*)0xB7280594)  /*@bfbba@*/
#define PPU0_PPR12_PPR21	(*(volatile uint_io8_t*)0xB7280595)  /*@bfbba@*/
#define PPU0_PPR12_PPR22	(*(volatile uint_io8_t*)0xB7280596)  /*@bfbba@*/
#define PPU0_PPR12_PPR23	(*(volatile uint_io8_t*)0xB7280597)  /*@bfbba@*/
#define PPU0_PPR12_PPR24	(*(volatile uint_io8_t*)0xB7280598)  /*@bfbba@*/
#define PPU0_PPR12_PPR25	(*(volatile uint_io8_t*)0xB7280599)  /*@bfbba@*/
#define PPU0_PPR12_PPR26	(*(volatile uint_io8_t*)0xB728059A)  /*@bfbba@*/
#define PPU0_PPR12_PPR27	(*(volatile uint_io8_t*)0xB728059B)  /*@bfbba@*/
#define PPU0_PPR12_PPR28	(*(volatile uint_io8_t*)0xB728059C)  /*@bfbba@*/
#define PPU0_PPR12_PPR29	(*(volatile uint_io8_t*)0xB728059D)  /*@bfbba@*/
#define PPU0_PPR12_PPR30	(*(volatile uint_io8_t*)0xB728059E)  /*@bfbba@*/
#define PPU0_PPR12_PPR31	(*(volatile uint_io8_t*)0xB728059F)  /*@bfbba@*/

#define PPU0_PPR13	(PPU0.unPPR13.u32Register)  /*@rg@*/
#define PPU0_PPR13_PPR0	(*(volatile uint_io8_t*)0xB72805A0)  /*@bfbba@*/
#define PPU0_PPR13_PPR1	(*(volatile uint_io8_t*)0xB72805A1)  /*@bfbba@*/
#define PPU0_PPR13_PPR2	(*(volatile uint_io8_t*)0xB72805A2)  /*@bfbba@*/
#define PPU0_PPR13_PPR3	(*(volatile uint_io8_t*)0xB72805A3)  /*@bfbba@*/
#define PPU0_PPR13_PPR4	(*(volatile uint_io8_t*)0xB72805A4)  /*@bfbba@*/
#define PPU0_PPR13_PPR5	(*(volatile uint_io8_t*)0xB72805A5)  /*@bfbba@*/
#define PPU0_PPR13_PPR6	(*(volatile uint_io8_t*)0xB72805A6)  /*@bfbba@*/
#define PPU0_PPR13_PPR7	(*(volatile uint_io8_t*)0xB72805A7)  /*@bfbba@*/
#define PPU0_PPR13_PPR8	(*(volatile uint_io8_t*)0xB72805A8)  /*@bfbba@*/
#define PPU0_PPR13_PPR9	(*(volatile uint_io8_t*)0xB72805A9)  /*@bfbba@*/
#define PPU0_PPR13_PPR10	(*(volatile uint_io8_t*)0xB72805AA)  /*@bfbba@*/
#define PPU0_PPR13_PPR11	(*(volatile uint_io8_t*)0xB72805AB)  /*@bfbba@*/
#define PPU0_PPR13_PPR12	(*(volatile uint_io8_t*)0xB72805AC)  /*@bfbba@*/
#define PPU0_PPR13_PPR13	(*(volatile uint_io8_t*)0xB72805AD)  /*@bfbba@*/
#define PPU0_PPR13_PPR14	(*(volatile uint_io8_t*)0xB72805AE)  /*@bfbba@*/
#define PPU0_PPR13_PPR15	(*(volatile uint_io8_t*)0xB72805AF)  /*@bfbba@*/
#define PPU0_PPR13_PPR16	(*(volatile uint_io8_t*)0xB72805B0)  /*@bfbba@*/
#define PPU0_PPR13_PPR17	(*(volatile uint_io8_t*)0xB72805B1)  /*@bfbba@*/
#define PPU0_PPR13_PPR18	(*(volatile uint_io8_t*)0xB72805B2)  /*@bfbba@*/
#define PPU0_PPR13_PPR19	(*(volatile uint_io8_t*)0xB72805B3)  /*@bfbba@*/
#define PPU0_PPR13_PPR20	(*(volatile uint_io8_t*)0xB72805B4)  /*@bfbba@*/
#define PPU0_PPR13_PPR21	(*(volatile uint_io8_t*)0xB72805B5)  /*@bfbba@*/
#define PPU0_PPR13_PPR22	(*(volatile uint_io8_t*)0xB72805B6)  /*@bfbba@*/
#define PPU0_PPR13_PPR23	(*(volatile uint_io8_t*)0xB72805B7)  /*@bfbba@*/
#define PPU0_PPR13_PPR24	(*(volatile uint_io8_t*)0xB72805B8)  /*@bfbba@*/
#define PPU0_PPR13_PPR25	(*(volatile uint_io8_t*)0xB72805B9)  /*@bfbba@*/
#define PPU0_PPR13_PPR26	(*(volatile uint_io8_t*)0xB72805BA)  /*@bfbba@*/
#define PPU0_PPR13_PPR27	(*(volatile uint_io8_t*)0xB72805BB)  /*@bfbba@*/
#define PPU0_PPR13_PPR28	(*(volatile uint_io8_t*)0xB72805BC)  /*@bfbba@*/
#define PPU0_PPR13_PPR29	(*(volatile uint_io8_t*)0xB72805BD)  /*@bfbba@*/
#define PPU0_PPR13_PPR30	(*(volatile uint_io8_t*)0xB72805BE)  /*@bfbba@*/
#define PPU0_PPR13_PPR31	(*(volatile uint_io8_t*)0xB72805BF)  /*@bfbba@*/

#define PPU0_PPR14	(PPU0.unPPR14.u32Register)  /*@rg@*/
#define PPU0_PPR14_PPR0	(*(volatile uint_io8_t*)0xB72805C0)  /*@bfbba@*/
#define PPU0_PPR14_PPR1	(*(volatile uint_io8_t*)0xB72805C1)  /*@bfbba@*/
#define PPU0_PPR14_PPR2	(*(volatile uint_io8_t*)0xB72805C2)  /*@bfbba@*/
#define PPU0_PPR14_PPR3	(*(volatile uint_io8_t*)0xB72805C3)  /*@bfbba@*/
#define PPU0_PPR14_PPR4	(*(volatile uint_io8_t*)0xB72805C4)  /*@bfbba@*/
#define PPU0_PPR14_PPR5	(*(volatile uint_io8_t*)0xB72805C5)  /*@bfbba@*/
#define PPU0_PPR14_PPR6	(*(volatile uint_io8_t*)0xB72805C6)  /*@bfbba@*/
#define PPU0_PPR14_PPR7	(*(volatile uint_io8_t*)0xB72805C7)  /*@bfbba@*/
#define PPU0_PPR14_PPR8	(*(volatile uint_io8_t*)0xB72805C8)  /*@bfbba@*/
#define PPU0_PPR14_PPR9	(*(volatile uint_io8_t*)0xB72805C9)  /*@bfbba@*/
#define PPU0_PPR14_PPR10	(*(volatile uint_io8_t*)0xB72805CA)  /*@bfbba@*/
#define PPU0_PPR14_PPR11	(*(volatile uint_io8_t*)0xB72805CB)  /*@bfbba@*/
#define PPU0_PPR14_PPR12	(*(volatile uint_io8_t*)0xB72805CC)  /*@bfbba@*/
#define PPU0_PPR14_PPR13	(*(volatile uint_io8_t*)0xB72805CD)  /*@bfbba@*/
#define PPU0_PPR14_PPR14	(*(volatile uint_io8_t*)0xB72805CE)  /*@bfbba@*/
#define PPU0_PPR14_PPR15	(*(volatile uint_io8_t*)0xB72805CF)  /*@bfbba@*/
#define PPU0_PPR14_PPR16	(*(volatile uint_io8_t*)0xB72805D0)  /*@bfbba@*/
#define PPU0_PPR14_PPR17	(*(volatile uint_io8_t*)0xB72805D1)  /*@bfbba@*/
#define PPU0_PPR14_PPR18	(*(volatile uint_io8_t*)0xB72805D2)  /*@bfbba@*/
#define PPU0_PPR14_PPR19	(*(volatile uint_io8_t*)0xB72805D3)  /*@bfbba@*/
#define PPU0_PPR14_PPR20	(*(volatile uint_io8_t*)0xB72805D4)  /*@bfbba@*/
#define PPU0_PPR14_PPR21	(*(volatile uint_io8_t*)0xB72805D5)  /*@bfbba@*/
#define PPU0_PPR14_PPR22	(*(volatile uint_io8_t*)0xB72805D6)  /*@bfbba@*/
#define PPU0_PPR14_PPR23	(*(volatile uint_io8_t*)0xB72805D7)  /*@bfbba@*/
#define PPU0_PPR14_PPR24	(*(volatile uint_io8_t*)0xB72805D8)  /*@bfbba@*/
#define PPU0_PPR14_PPR25	(*(volatile uint_io8_t*)0xB72805D9)  /*@bfbba@*/
#define PPU0_PPR14_PPR26	(*(volatile uint_io8_t*)0xB72805DA)  /*@bfbba@*/
#define PPU0_PPR14_PPR27	(*(volatile uint_io8_t*)0xB72805DB)  /*@bfbba@*/
#define PPU0_PPR14_PPR28	(*(volatile uint_io8_t*)0xB72805DC)  /*@bfbba@*/
#define PPU0_PPR14_PPR29	(*(volatile uint_io8_t*)0xB72805DD)  /*@bfbba@*/
#define PPU0_PPR14_PPR30	(*(volatile uint_io8_t*)0xB72805DE)  /*@bfbba@*/
#define PPU0_PPR14_PPR31	(*(volatile uint_io8_t*)0xB72805DF)  /*@bfbba@*/

#define PPU0_PPR15	(PPU0.unPPR15.u32Register)  /*@rg@*/
#define PPU0_PPR15_PPR0	(*(volatile uint_io8_t*)0xB72805E0)  /*@bfbba@*/
#define PPU0_PPR15_PPR1	(*(volatile uint_io8_t*)0xB72805E1)  /*@bfbba@*/
#define PPU0_PPR15_PPR2	(*(volatile uint_io8_t*)0xB72805E2)  /*@bfbba@*/
#define PPU0_PPR15_PPR3	(*(volatile uint_io8_t*)0xB72805E3)  /*@bfbba@*/
#define PPU0_PPR15_PPR4	(*(volatile uint_io8_t*)0xB72805E4)  /*@bfbba@*/
#define PPU0_PPR15_PPR5	(*(volatile uint_io8_t*)0xB72805E5)  /*@bfbba@*/
#define PPU0_PPR15_PPR6	(*(volatile uint_io8_t*)0xB72805E6)  /*@bfbba@*/
#define PPU0_PPR15_PPR7	(*(volatile uint_io8_t*)0xB72805E7)  /*@bfbba@*/
#define PPU0_PPR15_PPR8	(*(volatile uint_io8_t*)0xB72805E8)  /*@bfbba@*/
#define PPU0_PPR15_PPR9	(*(volatile uint_io8_t*)0xB72805E9)  /*@bfbba@*/
#define PPU0_PPR15_PPR10	(*(volatile uint_io8_t*)0xB72805EA)  /*@bfbba@*/
#define PPU0_PPR15_PPR11	(*(volatile uint_io8_t*)0xB72805EB)  /*@bfbba@*/
#define PPU0_PPR15_PPR12	(*(volatile uint_io8_t*)0xB72805EC)  /*@bfbba@*/
#define PPU0_PPR15_PPR13	(*(volatile uint_io8_t*)0xB72805ED)  /*@bfbba@*/
#define PPU0_PPR15_PPR14	(*(volatile uint_io8_t*)0xB72805EE)  /*@bfbba@*/
#define PPU0_PPR15_PPR15	(*(volatile uint_io8_t*)0xB72805EF)  /*@bfbba@*/
#define PPU0_PPR15_PPR16	(*(volatile uint_io8_t*)0xB72805F0)  /*@bfbba@*/
#define PPU0_PPR15_PPR17	(*(volatile uint_io8_t*)0xB72805F1)  /*@bfbba@*/
#define PPU0_PPR15_PPR18	(*(volatile uint_io8_t*)0xB72805F2)  /*@bfbba@*/
#define PPU0_PPR15_PPR19	(*(volatile uint_io8_t*)0xB72805F3)  /*@bfbba@*/
#define PPU0_PPR15_PPR20	(*(volatile uint_io8_t*)0xB72805F4)  /*@bfbba@*/
#define PPU0_PPR15_PPR21	(*(volatile uint_io8_t*)0xB72805F5)  /*@bfbba@*/
#define PPU0_PPR15_PPR22	(*(volatile uint_io8_t*)0xB72805F6)  /*@bfbba@*/
#define PPU0_PPR15_PPR23	(*(volatile uint_io8_t*)0xB72805F7)  /*@bfbba@*/
#define PPU0_PPR15_PPR24	(*(volatile uint_io8_t*)0xB72805F8)  /*@bfbba@*/
#define PPU0_PPR15_PPR25	(*(volatile uint_io8_t*)0xB72805F9)  /*@bfbba@*/
#define PPU0_PPR15_PPR26	(*(volatile uint_io8_t*)0xB72805FA)  /*@bfbba@*/
#define PPU0_PPR15_PPR27	(*(volatile uint_io8_t*)0xB72805FB)  /*@bfbba@*/
#define PPU0_PPR15_PPR28	(*(volatile uint_io8_t*)0xB72805FC)  /*@bfbba@*/
#define PPU0_PPR15_PPR29	(*(volatile uint_io8_t*)0xB72805FD)  /*@bfbba@*/
#define PPU0_PPR15_PPR30	(*(volatile uint_io8_t*)0xB72805FE)  /*@bfbba@*/
#define PPU0_PPR15_PPR31	(*(volatile uint_io8_t*)0xB72805FF)  /*@bfbba@*/

#define PPU0_PPR16	(PPU0.unPPR16.u32Register)  /*@rg@*/
#define PPU0_PPR16_PPR0	(*(volatile uint_io8_t*)0xB7280600)  /*@bfbba@*/
#define PPU0_PPR16_PPR1	(*(volatile uint_io8_t*)0xB7280601)  /*@bfbba@*/
#define PPU0_PPR16_PPR2	(*(volatile uint_io8_t*)0xB7280602)  /*@bfbba@*/
#define PPU0_PPR16_PPR3	(*(volatile uint_io8_t*)0xB7280603)  /*@bfbba@*/
#define PPU0_PPR16_PPR4	(*(volatile uint_io8_t*)0xB7280604)  /*@bfbba@*/
#define PPU0_PPR16_PPR5	(*(volatile uint_io8_t*)0xB7280605)  /*@bfbba@*/
#define PPU0_PPR16_PPR6	(*(volatile uint_io8_t*)0xB7280606)  /*@bfbba@*/
#define PPU0_PPR16_PPR7	(*(volatile uint_io8_t*)0xB7280607)  /*@bfbba@*/
#define PPU0_PPR16_PPR8	(*(volatile uint_io8_t*)0xB7280608)  /*@bfbba@*/
#define PPU0_PPR16_PPR9	(*(volatile uint_io8_t*)0xB7280609)  /*@bfbba@*/
#define PPU0_PPR16_PPR10	(*(volatile uint_io8_t*)0xB728060A)  /*@bfbba@*/
#define PPU0_PPR16_PPR11	(*(volatile uint_io8_t*)0xB728060B)  /*@bfbba@*/
#define PPU0_PPR16_PPR12	(*(volatile uint_io8_t*)0xB728060C)  /*@bfbba@*/
#define PPU0_PPR16_PPR13	(*(volatile uint_io8_t*)0xB728060D)  /*@bfbba@*/
#define PPU0_PPR16_PPR14	(*(volatile uint_io8_t*)0xB728060E)  /*@bfbba@*/
#define PPU0_PPR16_PPR15	(*(volatile uint_io8_t*)0xB728060F)  /*@bfbba@*/
#define PPU0_PPR16_PPR16	(*(volatile uint_io8_t*)0xB7280610)  /*@bfbba@*/
#define PPU0_PPR16_PPR17	(*(volatile uint_io8_t*)0xB7280611)  /*@bfbba@*/
#define PPU0_PPR16_PPR18	(*(volatile uint_io8_t*)0xB7280612)  /*@bfbba@*/
#define PPU0_PPR16_PPR19	(*(volatile uint_io8_t*)0xB7280613)  /*@bfbba@*/
#define PPU0_PPR16_PPR20	(*(volatile uint_io8_t*)0xB7280614)  /*@bfbba@*/
#define PPU0_PPR16_PPR21	(*(volatile uint_io8_t*)0xB7280615)  /*@bfbba@*/
#define PPU0_PPR16_PPR22	(*(volatile uint_io8_t*)0xB7280616)  /*@bfbba@*/
#define PPU0_PPR16_PPR23	(*(volatile uint_io8_t*)0xB7280617)  /*@bfbba@*/
#define PPU0_PPR16_PPR24	(*(volatile uint_io8_t*)0xB7280618)  /*@bfbba@*/
#define PPU0_PPR16_PPR25	(*(volatile uint_io8_t*)0xB7280619)  /*@bfbba@*/
#define PPU0_PPR16_PPR26	(*(volatile uint_io8_t*)0xB728061A)  /*@bfbba@*/
#define PPU0_PPR16_PPR27	(*(volatile uint_io8_t*)0xB728061B)  /*@bfbba@*/
#define PPU0_PPR16_PPR28	(*(volatile uint_io8_t*)0xB728061C)  /*@bfbba@*/
#define PPU0_PPR16_PPR29	(*(volatile uint_io8_t*)0xB728061D)  /*@bfbba@*/
#define PPU0_PPR16_PPR30	(*(volatile uint_io8_t*)0xB728061E)  /*@bfbba@*/
#define PPU0_PPR16_PPR31	(*(volatile uint_io8_t*)0xB728061F)  /*@bfbba@*/

#define PPU0_PPR17	(PPU0.unPPR17.u32Register)  /*@rg@*/
#define PPU0_PPR17_PPR0	(*(volatile uint_io8_t*)0xB7280620)  /*@bfbba@*/
#define PPU0_PPR17_PPR1	(*(volatile uint_io8_t*)0xB7280621)  /*@bfbba@*/
#define PPU0_PPR17_PPR2	(*(volatile uint_io8_t*)0xB7280622)  /*@bfbba@*/
#define PPU0_PPR17_PPR3	(*(volatile uint_io8_t*)0xB7280623)  /*@bfbba@*/
#define PPU0_PPR17_PPR4	(*(volatile uint_io8_t*)0xB7280624)  /*@bfbba@*/
#define PPU0_PPR17_PPR5	(*(volatile uint_io8_t*)0xB7280625)  /*@bfbba@*/
#define PPU0_PPR17_PPR6	(*(volatile uint_io8_t*)0xB7280626)  /*@bfbba@*/
#define PPU0_PPR17_PPR7	(*(volatile uint_io8_t*)0xB7280627)  /*@bfbba@*/
#define PPU0_PPR17_PPR8	(*(volatile uint_io8_t*)0xB7280628)  /*@bfbba@*/
#define PPU0_PPR17_PPR9	(*(volatile uint_io8_t*)0xB7280629)  /*@bfbba@*/
#define PPU0_PPR17_PPR10	(*(volatile uint_io8_t*)0xB728062A)  /*@bfbba@*/
#define PPU0_PPR17_PPR11	(*(volatile uint_io8_t*)0xB728062B)  /*@bfbba@*/
#define PPU0_PPR17_PPR12	(*(volatile uint_io8_t*)0xB728062C)  /*@bfbba@*/
#define PPU0_PPR17_PPR13	(*(volatile uint_io8_t*)0xB728062D)  /*@bfbba@*/
#define PPU0_PPR17_PPR14	(*(volatile uint_io8_t*)0xB728062E)  /*@bfbba@*/
#define PPU0_PPR17_PPR15	(*(volatile uint_io8_t*)0xB728062F)  /*@bfbba@*/
#define PPU0_PPR17_PPR16	(*(volatile uint_io8_t*)0xB7280630)  /*@bfbba@*/
#define PPU0_PPR17_PPR17	(*(volatile uint_io8_t*)0xB7280631)  /*@bfbba@*/
#define PPU0_PPR17_PPR18	(*(volatile uint_io8_t*)0xB7280632)  /*@bfbba@*/
#define PPU0_PPR17_PPR19	(*(volatile uint_io8_t*)0xB7280633)  /*@bfbba@*/
#define PPU0_PPR17_PPR20	(*(volatile uint_io8_t*)0xB7280634)  /*@bfbba@*/
#define PPU0_PPR17_PPR21	(*(volatile uint_io8_t*)0xB7280635)  /*@bfbba@*/
#define PPU0_PPR17_PPR22	(*(volatile uint_io8_t*)0xB7280636)  /*@bfbba@*/
#define PPU0_PPR17_PPR23	(*(volatile uint_io8_t*)0xB7280637)  /*@bfbba@*/
#define PPU0_PPR17_PPR24	(*(volatile uint_io8_t*)0xB7280638)  /*@bfbba@*/
#define PPU0_PPR17_PPR25	(*(volatile uint_io8_t*)0xB7280639)  /*@bfbba@*/
#define PPU0_PPR17_PPR26	(*(volatile uint_io8_t*)0xB728063A)  /*@bfbba@*/
#define PPU0_PPR17_PPR27	(*(volatile uint_io8_t*)0xB728063B)  /*@bfbba@*/
#define PPU0_PPR17_PPR28	(*(volatile uint_io8_t*)0xB728063C)  /*@bfbba@*/
#define PPU0_PPR17_PPR29	(*(volatile uint_io8_t*)0xB728063D)  /*@bfbba@*/
#define PPU0_PPR17_PPR30	(*(volatile uint_io8_t*)0xB728063E)  /*@bfbba@*/
#define PPU0_PPR17_PPR31	(*(volatile uint_io8_t*)0xB728063F)  /*@bfbba@*/

#define PPU0_PPR18	(PPU0.unPPR18.u32Register)  /*@rg@*/
#define PPU0_PPR18_PPR0	(*(volatile uint_io8_t*)0xB7280640)  /*@bfbba@*/
#define PPU0_PPR18_PPR1	(*(volatile uint_io8_t*)0xB7280641)  /*@bfbba@*/
#define PPU0_PPR18_PPR2	(*(volatile uint_io8_t*)0xB7280642)  /*@bfbba@*/
#define PPU0_PPR18_PPR3	(*(volatile uint_io8_t*)0xB7280643)  /*@bfbba@*/
#define PPU0_PPR18_PPR4	(*(volatile uint_io8_t*)0xB7280644)  /*@bfbba@*/
#define PPU0_PPR18_PPR5	(*(volatile uint_io8_t*)0xB7280645)  /*@bfbba@*/
#define PPU0_PPR18_PPR6	(*(volatile uint_io8_t*)0xB7280646)  /*@bfbba@*/
#define PPU0_PPR18_PPR7	(*(volatile uint_io8_t*)0xB7280647)  /*@bfbba@*/
#define PPU0_PPR18_PPR8	(*(volatile uint_io8_t*)0xB7280648)  /*@bfbba@*/
#define PPU0_PPR18_PPR9	(*(volatile uint_io8_t*)0xB7280649)  /*@bfbba@*/
#define PPU0_PPR18_PPR10	(*(volatile uint_io8_t*)0xB728064A)  /*@bfbba@*/
#define PPU0_PPR18_PPR11	(*(volatile uint_io8_t*)0xB728064B)  /*@bfbba@*/
#define PPU0_PPR18_PPR12	(*(volatile uint_io8_t*)0xB728064C)  /*@bfbba@*/
#define PPU0_PPR18_PPR13	(*(volatile uint_io8_t*)0xB728064D)  /*@bfbba@*/
#define PPU0_PPR18_PPR14	(*(volatile uint_io8_t*)0xB728064E)  /*@bfbba@*/
#define PPU0_PPR18_PPR15	(*(volatile uint_io8_t*)0xB728064F)  /*@bfbba@*/
#define PPU0_PPR18_PPR16	(*(volatile uint_io8_t*)0xB7280650)  /*@bfbba@*/
#define PPU0_PPR18_PPR17	(*(volatile uint_io8_t*)0xB7280651)  /*@bfbba@*/
#define PPU0_PPR18_PPR18	(*(volatile uint_io8_t*)0xB7280652)  /*@bfbba@*/
#define PPU0_PPR18_PPR19	(*(volatile uint_io8_t*)0xB7280653)  /*@bfbba@*/
#define PPU0_PPR18_PPR20	(*(volatile uint_io8_t*)0xB7280654)  /*@bfbba@*/
#define PPU0_PPR18_PPR21	(*(volatile uint_io8_t*)0xB7280655)  /*@bfbba@*/
#define PPU0_PPR18_PPR22	(*(volatile uint_io8_t*)0xB7280656)  /*@bfbba@*/
#define PPU0_PPR18_PPR23	(*(volatile uint_io8_t*)0xB7280657)  /*@bfbba@*/
#define PPU0_PPR18_PPR24	(*(volatile uint_io8_t*)0xB7280658)  /*@bfbba@*/
#define PPU0_PPR18_PPR25	(*(volatile uint_io8_t*)0xB7280659)  /*@bfbba@*/
#define PPU0_PPR18_PPR26	(*(volatile uint_io8_t*)0xB728065A)  /*@bfbba@*/
#define PPU0_PPR18_PPR27	(*(volatile uint_io8_t*)0xB728065B)  /*@bfbba@*/
#define PPU0_PPR18_PPR28	(*(volatile uint_io8_t*)0xB728065C)  /*@bfbba@*/
#define PPU0_PPR18_PPR29	(*(volatile uint_io8_t*)0xB728065D)  /*@bfbba@*/
#define PPU0_PPR18_PPR30	(*(volatile uint_io8_t*)0xB728065E)  /*@bfbba@*/
#define PPU0_PPR18_PPR31	(*(volatile uint_io8_t*)0xB728065F)  /*@bfbba@*/

#define PPU0_PPR19	(PPU0.unPPR19.u32Register)  /*@rg@*/
#define PPU0_PPR19_PPR0	(*(volatile uint_io8_t*)0xB7280660)  /*@bfbba@*/
#define PPU0_PPR19_PPR1	(*(volatile uint_io8_t*)0xB7280661)  /*@bfbba@*/
#define PPU0_PPR19_PPR2	(*(volatile uint_io8_t*)0xB7280662)  /*@bfbba@*/
#define PPU0_PPR19_PPR3	(*(volatile uint_io8_t*)0xB7280663)  /*@bfbba@*/
#define PPU0_PPR19_PPR4	(*(volatile uint_io8_t*)0xB7280664)  /*@bfbba@*/
#define PPU0_PPR19_PPR5	(*(volatile uint_io8_t*)0xB7280665)  /*@bfbba@*/
#define PPU0_PPR19_PPR6	(*(volatile uint_io8_t*)0xB7280666)  /*@bfbba@*/
#define PPU0_PPR19_PPR7	(*(volatile uint_io8_t*)0xB7280667)  /*@bfbba@*/
#define PPU0_PPR19_PPR8	(*(volatile uint_io8_t*)0xB7280668)  /*@bfbba@*/
#define PPU0_PPR19_PPR9	(*(volatile uint_io8_t*)0xB7280669)  /*@bfbba@*/
#define PPU0_PPR19_PPR10	(*(volatile uint_io8_t*)0xB728066A)  /*@bfbba@*/
#define PPU0_PPR19_PPR11	(*(volatile uint_io8_t*)0xB728066B)  /*@bfbba@*/
#define PPU0_PPR19_PPR12	(*(volatile uint_io8_t*)0xB728066C)  /*@bfbba@*/
#define PPU0_PPR19_PPR13	(*(volatile uint_io8_t*)0xB728066D)  /*@bfbba@*/
#define PPU0_PPR19_PPR14	(*(volatile uint_io8_t*)0xB728066E)  /*@bfbba@*/
#define PPU0_PPR19_PPR15	(*(volatile uint_io8_t*)0xB728066F)  /*@bfbba@*/
#define PPU0_PPR19_PPR16	(*(volatile uint_io8_t*)0xB7280670)  /*@bfbba@*/
#define PPU0_PPR19_PPR17	(*(volatile uint_io8_t*)0xB7280671)  /*@bfbba@*/
#define PPU0_PPR19_PPR18	(*(volatile uint_io8_t*)0xB7280672)  /*@bfbba@*/
#define PPU0_PPR19_PPR19	(*(volatile uint_io8_t*)0xB7280673)  /*@bfbba@*/
#define PPU0_PPR19_PPR20	(*(volatile uint_io8_t*)0xB7280674)  /*@bfbba@*/
#define PPU0_PPR19_PPR21	(*(volatile uint_io8_t*)0xB7280675)  /*@bfbba@*/
#define PPU0_PPR19_PPR22	(*(volatile uint_io8_t*)0xB7280676)  /*@bfbba@*/
#define PPU0_PPR19_PPR23	(*(volatile uint_io8_t*)0xB7280677)  /*@bfbba@*/
#define PPU0_PPR19_PPR24	(*(volatile uint_io8_t*)0xB7280678)  /*@bfbba@*/
#define PPU0_PPR19_PPR25	(*(volatile uint_io8_t*)0xB7280679)  /*@bfbba@*/
#define PPU0_PPR19_PPR26	(*(volatile uint_io8_t*)0xB728067A)  /*@bfbba@*/
#define PPU0_PPR19_PPR27	(*(volatile uint_io8_t*)0xB728067B)  /*@bfbba@*/
#define PPU0_PPR19_PPR28	(*(volatile uint_io8_t*)0xB728067C)  /*@bfbba@*/
#define PPU0_PPR19_PPR29	(*(volatile uint_io8_t*)0xB728067D)  /*@bfbba@*/
#define PPU0_PPR19_PPR30	(*(volatile uint_io8_t*)0xB728067E)  /*@bfbba@*/
#define PPU0_PPR19_PPR31	(*(volatile uint_io8_t*)0xB728067F)  /*@bfbba@*/

#define PPU0_PPR20	(PPU0.unPPR20.u32Register)  /*@rg@*/
#define PPU0_PPR20_PPR0	(*(volatile uint_io8_t*)0xB7280680)  /*@bfbba@*/
#define PPU0_PPR20_PPR1	(*(volatile uint_io8_t*)0xB7280681)  /*@bfbba@*/
#define PPU0_PPR20_PPR2	(*(volatile uint_io8_t*)0xB7280682)  /*@bfbba@*/
#define PPU0_PPR20_PPR3	(*(volatile uint_io8_t*)0xB7280683)  /*@bfbba@*/
#define PPU0_PPR20_PPR4	(*(volatile uint_io8_t*)0xB7280684)  /*@bfbba@*/
#define PPU0_PPR20_PPR5	(*(volatile uint_io8_t*)0xB7280685)  /*@bfbba@*/
#define PPU0_PPR20_PPR6	(*(volatile uint_io8_t*)0xB7280686)  /*@bfbba@*/
#define PPU0_PPR20_PPR7	(*(volatile uint_io8_t*)0xB7280687)  /*@bfbba@*/
#define PPU0_PPR20_PPR8	(*(volatile uint_io8_t*)0xB7280688)  /*@bfbba@*/
#define PPU0_PPR20_PPR9	(*(volatile uint_io8_t*)0xB7280689)  /*@bfbba@*/
#define PPU0_PPR20_PPR10	(*(volatile uint_io8_t*)0xB728068A)  /*@bfbba@*/
#define PPU0_PPR20_PPR11	(*(volatile uint_io8_t*)0xB728068B)  /*@bfbba@*/
#define PPU0_PPR20_PPR12	(*(volatile uint_io8_t*)0xB728068C)  /*@bfbba@*/
#define PPU0_PPR20_PPR13	(*(volatile uint_io8_t*)0xB728068D)  /*@bfbba@*/
#define PPU0_PPR20_PPR14	(*(volatile uint_io8_t*)0xB728068E)  /*@bfbba@*/
#define PPU0_PPR20_PPR15	(*(volatile uint_io8_t*)0xB728068F)  /*@bfbba@*/
#define PPU0_PPR20_PPR16	(*(volatile uint_io8_t*)0xB7280690)  /*@bfbba@*/
#define PPU0_PPR20_PPR17	(*(volatile uint_io8_t*)0xB7280691)  /*@bfbba@*/
#define PPU0_PPR20_PPR18	(*(volatile uint_io8_t*)0xB7280692)  /*@bfbba@*/
#define PPU0_PPR20_PPR19	(*(volatile uint_io8_t*)0xB7280693)  /*@bfbba@*/
#define PPU0_PPR20_PPR20	(*(volatile uint_io8_t*)0xB7280694)  /*@bfbba@*/
#define PPU0_PPR20_PPR21	(*(volatile uint_io8_t*)0xB7280695)  /*@bfbba@*/
#define PPU0_PPR20_PPR22	(*(volatile uint_io8_t*)0xB7280696)  /*@bfbba@*/
#define PPU0_PPR20_PPR23	(*(volatile uint_io8_t*)0xB7280697)  /*@bfbba@*/
#define PPU0_PPR20_PPR24	(*(volatile uint_io8_t*)0xB7280698)  /*@bfbba@*/
#define PPU0_PPR20_PPR25	(*(volatile uint_io8_t*)0xB7280699)  /*@bfbba@*/
#define PPU0_PPR20_PPR26	(*(volatile uint_io8_t*)0xB728069A)  /*@bfbba@*/
#define PPU0_PPR20_PPR27	(*(volatile uint_io8_t*)0xB728069B)  /*@bfbba@*/
#define PPU0_PPR20_PPR28	(*(volatile uint_io8_t*)0xB728069C)  /*@bfbba@*/
#define PPU0_PPR20_PPR29	(*(volatile uint_io8_t*)0xB728069D)  /*@bfbba@*/
#define PPU0_PPR20_PPR30	(*(volatile uint_io8_t*)0xB728069E)  /*@bfbba@*/
#define PPU0_PPR20_PPR31	(*(volatile uint_io8_t*)0xB728069F)  /*@bfbba@*/

#define PPU0_PPR21	(PPU0.unPPR21.u32Register)  /*@rg@*/
#define PPU0_PPR21_PPR0	(*(volatile uint_io8_t*)0xB72806A0)  /*@bfbba@*/
#define PPU0_PPR21_PPR1	(*(volatile uint_io8_t*)0xB72806A1)  /*@bfbba@*/
#define PPU0_PPR21_PPR2	(*(volatile uint_io8_t*)0xB72806A2)  /*@bfbba@*/
#define PPU0_PPR21_PPR3	(*(volatile uint_io8_t*)0xB72806A3)  /*@bfbba@*/
#define PPU0_PPR21_PPR4	(*(volatile uint_io8_t*)0xB72806A4)  /*@bfbba@*/
#define PPU0_PPR21_PPR5	(*(volatile uint_io8_t*)0xB72806A5)  /*@bfbba@*/
#define PPU0_PPR21_PPR6	(*(volatile uint_io8_t*)0xB72806A6)  /*@bfbba@*/
#define PPU0_PPR21_PPR7	(*(volatile uint_io8_t*)0xB72806A7)  /*@bfbba@*/
#define PPU0_PPR21_PPR8	(*(volatile uint_io8_t*)0xB72806A8)  /*@bfbba@*/
#define PPU0_PPR21_PPR9	(*(volatile uint_io8_t*)0xB72806A9)  /*@bfbba@*/
#define PPU0_PPR21_PPR10	(*(volatile uint_io8_t*)0xB72806AA)  /*@bfbba@*/
#define PPU0_PPR21_PPR11	(*(volatile uint_io8_t*)0xB72806AB)  /*@bfbba@*/
#define PPU0_PPR21_PPR12	(*(volatile uint_io8_t*)0xB72806AC)  /*@bfbba@*/
#define PPU0_PPR21_PPR13	(*(volatile uint_io8_t*)0xB72806AD)  /*@bfbba@*/
#define PPU0_PPR21_PPR14	(*(volatile uint_io8_t*)0xB72806AE)  /*@bfbba@*/
#define PPU0_PPR21_PPR15	(*(volatile uint_io8_t*)0xB72806AF)  /*@bfbba@*/
#define PPU0_PPR21_PPR16	(*(volatile uint_io8_t*)0xB72806B0)  /*@bfbba@*/
#define PPU0_PPR21_PPR17	(*(volatile uint_io8_t*)0xB72806B1)  /*@bfbba@*/
#define PPU0_PPR21_PPR18	(*(volatile uint_io8_t*)0xB72806B2)  /*@bfbba@*/
#define PPU0_PPR21_PPR19	(*(volatile uint_io8_t*)0xB72806B3)  /*@bfbba@*/
#define PPU0_PPR21_PPR20	(*(volatile uint_io8_t*)0xB72806B4)  /*@bfbba@*/
#define PPU0_PPR21_PPR21	(*(volatile uint_io8_t*)0xB72806B5)  /*@bfbba@*/
#define PPU0_PPR21_PPR22	(*(volatile uint_io8_t*)0xB72806B6)  /*@bfbba@*/
#define PPU0_PPR21_PPR23	(*(volatile uint_io8_t*)0xB72806B7)  /*@bfbba@*/
#define PPU0_PPR21_PPR24	(*(volatile uint_io8_t*)0xB72806B8)  /*@bfbba@*/
#define PPU0_PPR21_PPR25	(*(volatile uint_io8_t*)0xB72806B9)  /*@bfbba@*/
#define PPU0_PPR21_PPR26	(*(volatile uint_io8_t*)0xB72806BA)  /*@bfbba@*/
#define PPU0_PPR21_PPR27	(*(volatile uint_io8_t*)0xB72806BB)  /*@bfbba@*/
#define PPU0_PPR21_PPR28	(*(volatile uint_io8_t*)0xB72806BC)  /*@bfbba@*/
#define PPU0_PPR21_PPR29	(*(volatile uint_io8_t*)0xB72806BD)  /*@bfbba@*/
#define PPU0_PPR21_PPR30	(*(volatile uint_io8_t*)0xB72806BE)  /*@bfbba@*/
#define PPU0_PPR21_PPR31	(*(volatile uint_io8_t*)0xB72806BF)  /*@bfbba@*/

#define PPU0_PPR22	(PPU0.unPPR22.u32Register)  /*@rg@*/
#define PPU0_PPR22_PPR0	(*(volatile uint_io8_t*)0xB72806C0)  /*@bfbba@*/
#define PPU0_PPR22_PPR1	(*(volatile uint_io8_t*)0xB72806C1)  /*@bfbba@*/
#define PPU0_PPR22_PPR2	(*(volatile uint_io8_t*)0xB72806C2)  /*@bfbba@*/
#define PPU0_PPR22_PPR3	(*(volatile uint_io8_t*)0xB72806C3)  /*@bfbba@*/
#define PPU0_PPR22_PPR4	(*(volatile uint_io8_t*)0xB72806C4)  /*@bfbba@*/
#define PPU0_PPR22_PPR5	(*(volatile uint_io8_t*)0xB72806C5)  /*@bfbba@*/
#define PPU0_PPR22_PPR6	(*(volatile uint_io8_t*)0xB72806C6)  /*@bfbba@*/
#define PPU0_PPR22_PPR7	(*(volatile uint_io8_t*)0xB72806C7)  /*@bfbba@*/
#define PPU0_PPR22_PPR8	(*(volatile uint_io8_t*)0xB72806C8)  /*@bfbba@*/
#define PPU0_PPR22_PPR9	(*(volatile uint_io8_t*)0xB72806C9)  /*@bfbba@*/
#define PPU0_PPR22_PPR10	(*(volatile uint_io8_t*)0xB72806CA)  /*@bfbba@*/
#define PPU0_PPR22_PPR11	(*(volatile uint_io8_t*)0xB72806CB)  /*@bfbba@*/
#define PPU0_PPR22_PPR12	(*(volatile uint_io8_t*)0xB72806CC)  /*@bfbba@*/
#define PPU0_PPR22_PPR13	(*(volatile uint_io8_t*)0xB72806CD)  /*@bfbba@*/
#define PPU0_PPR22_PPR14	(*(volatile uint_io8_t*)0xB72806CE)  /*@bfbba@*/
#define PPU0_PPR22_PPR15	(*(volatile uint_io8_t*)0xB72806CF)  /*@bfbba@*/
#define PPU0_PPR22_PPR16	(*(volatile uint_io8_t*)0xB72806D0)  /*@bfbba@*/
#define PPU0_PPR22_PPR17	(*(volatile uint_io8_t*)0xB72806D1)  /*@bfbba@*/
#define PPU0_PPR22_PPR18	(*(volatile uint_io8_t*)0xB72806D2)  /*@bfbba@*/
#define PPU0_PPR22_PPR19	(*(volatile uint_io8_t*)0xB72806D3)  /*@bfbba@*/
#define PPU0_PPR22_PPR20	(*(volatile uint_io8_t*)0xB72806D4)  /*@bfbba@*/
#define PPU0_PPR22_PPR21	(*(volatile uint_io8_t*)0xB72806D5)  /*@bfbba@*/
#define PPU0_PPR22_PPR22	(*(volatile uint_io8_t*)0xB72806D6)  /*@bfbba@*/
#define PPU0_PPR22_PPR23	(*(volatile uint_io8_t*)0xB72806D7)  /*@bfbba@*/
#define PPU0_PPR22_PPR24	(*(volatile uint_io8_t*)0xB72806D8)  /*@bfbba@*/
#define PPU0_PPR22_PPR25	(*(volatile uint_io8_t*)0xB72806D9)  /*@bfbba@*/
#define PPU0_PPR22_PPR26	(*(volatile uint_io8_t*)0xB72806DA)  /*@bfbba@*/
#define PPU0_PPR22_PPR27	(*(volatile uint_io8_t*)0xB72806DB)  /*@bfbba@*/
#define PPU0_PPR22_PPR28	(*(volatile uint_io8_t*)0xB72806DC)  /*@bfbba@*/
#define PPU0_PPR22_PPR29	(*(volatile uint_io8_t*)0xB72806DD)  /*@bfbba@*/
#define PPU0_PPR22_PPR30	(*(volatile uint_io8_t*)0xB72806DE)  /*@bfbba@*/
#define PPU0_PPR22_PPR31	(*(volatile uint_io8_t*)0xB72806DF)  /*@bfbba@*/

#define PPU0_PPR23	(PPU0.unPPR23.u32Register)  /*@rg@*/
#define PPU0_PPR23_PPR0	(*(volatile uint_io8_t*)0xB72806E0)  /*@bfbba@*/
#define PPU0_PPR23_PPR1	(*(volatile uint_io8_t*)0xB72806E1)  /*@bfbba@*/
#define PPU0_PPR23_PPR2	(*(volatile uint_io8_t*)0xB72806E2)  /*@bfbba@*/
#define PPU0_PPR23_PPR3	(*(volatile uint_io8_t*)0xB72806E3)  /*@bfbba@*/
#define PPU0_PPR23_PPR4	(*(volatile uint_io8_t*)0xB72806E4)  /*@bfbba@*/
#define PPU0_PPR23_PPR5	(*(volatile uint_io8_t*)0xB72806E5)  /*@bfbba@*/
#define PPU0_PPR23_PPR6	(*(volatile uint_io8_t*)0xB72806E6)  /*@bfbba@*/
#define PPU0_PPR23_PPR7	(*(volatile uint_io8_t*)0xB72806E7)  /*@bfbba@*/
#define PPU0_PPR23_PPR8	(*(volatile uint_io8_t*)0xB72806E8)  /*@bfbba@*/
#define PPU0_PPR23_PPR9	(*(volatile uint_io8_t*)0xB72806E9)  /*@bfbba@*/
#define PPU0_PPR23_PPR10	(*(volatile uint_io8_t*)0xB72806EA)  /*@bfbba@*/
#define PPU0_PPR23_PPR11	(*(volatile uint_io8_t*)0xB72806EB)  /*@bfbba@*/
#define PPU0_PPR23_PPR12	(*(volatile uint_io8_t*)0xB72806EC)  /*@bfbba@*/
#define PPU0_PPR23_PPR13	(*(volatile uint_io8_t*)0xB72806ED)  /*@bfbba@*/
#define PPU0_PPR23_PPR14	(*(volatile uint_io8_t*)0xB72806EE)  /*@bfbba@*/
#define PPU0_PPR23_PPR15	(*(volatile uint_io8_t*)0xB72806EF)  /*@bfbba@*/
#define PPU0_PPR23_PPR16	(*(volatile uint_io8_t*)0xB72806F0)  /*@bfbba@*/
#define PPU0_PPR23_PPR17	(*(volatile uint_io8_t*)0xB72806F1)  /*@bfbba@*/
#define PPU0_PPR23_PPR18	(*(volatile uint_io8_t*)0xB72806F2)  /*@bfbba@*/
#define PPU0_PPR23_PPR19	(*(volatile uint_io8_t*)0xB72806F3)  /*@bfbba@*/
#define PPU0_PPR23_PPR20	(*(volatile uint_io8_t*)0xB72806F4)  /*@bfbba@*/
#define PPU0_PPR23_PPR21	(*(volatile uint_io8_t*)0xB72806F5)  /*@bfbba@*/
#define PPU0_PPR23_PPR22	(*(volatile uint_io8_t*)0xB72806F6)  /*@bfbba@*/
#define PPU0_PPR23_PPR23	(*(volatile uint_io8_t*)0xB72806F7)  /*@bfbba@*/
#define PPU0_PPR23_PPR24	(*(volatile uint_io8_t*)0xB72806F8)  /*@bfbba@*/
#define PPU0_PPR23_PPR25	(*(volatile uint_io8_t*)0xB72806F9)  /*@bfbba@*/
#define PPU0_PPR23_PPR26	(*(volatile uint_io8_t*)0xB72806FA)  /*@bfbba@*/
#define PPU0_PPR23_PPR27	(*(volatile uint_io8_t*)0xB72806FB)  /*@bfbba@*/
#define PPU0_PPR23_PPR28	(*(volatile uint_io8_t*)0xB72806FC)  /*@bfbba@*/
#define PPU0_PPR23_PPR29	(*(volatile uint_io8_t*)0xB72806FD)  /*@bfbba@*/
#define PPU0_PPR23_PPR30	(*(volatile uint_io8_t*)0xB72806FE)  /*@bfbba@*/
#define PPU0_PPR23_PPR31	(*(volatile uint_io8_t*)0xB72806FF)  /*@bfbba@*/

#define PPU0_PPR24	(PPU0.unPPR24.u32Register)  /*@rg@*/
#define PPU0_PPR24_PPR0	(*(volatile uint_io8_t*)0xB7280700)  /*@bfbba@*/
#define PPU0_PPR24_PPR1	(*(volatile uint_io8_t*)0xB7280701)  /*@bfbba@*/
#define PPU0_PPR24_PPR2	(*(volatile uint_io8_t*)0xB7280702)  /*@bfbba@*/
#define PPU0_PPR24_PPR3	(*(volatile uint_io8_t*)0xB7280703)  /*@bfbba@*/
#define PPU0_PPR24_PPR4	(*(volatile uint_io8_t*)0xB7280704)  /*@bfbba@*/
#define PPU0_PPR24_PPR5	(*(volatile uint_io8_t*)0xB7280705)  /*@bfbba@*/
#define PPU0_PPR24_PPR6	(*(volatile uint_io8_t*)0xB7280706)  /*@bfbba@*/
#define PPU0_PPR24_PPR7	(*(volatile uint_io8_t*)0xB7280707)  /*@bfbba@*/
#define PPU0_PPR24_PPR8	(*(volatile uint_io8_t*)0xB7280708)  /*@bfbba@*/
#define PPU0_PPR24_PPR9	(*(volatile uint_io8_t*)0xB7280709)  /*@bfbba@*/
#define PPU0_PPR24_PPR10	(*(volatile uint_io8_t*)0xB728070A)  /*@bfbba@*/
#define PPU0_PPR24_PPR11	(*(volatile uint_io8_t*)0xB728070B)  /*@bfbba@*/
#define PPU0_PPR24_PPR12	(*(volatile uint_io8_t*)0xB728070C)  /*@bfbba@*/
#define PPU0_PPR24_PPR13	(*(volatile uint_io8_t*)0xB728070D)  /*@bfbba@*/
#define PPU0_PPR24_PPR14	(*(volatile uint_io8_t*)0xB728070E)  /*@bfbba@*/
#define PPU0_PPR24_PPR15	(*(volatile uint_io8_t*)0xB728070F)  /*@bfbba@*/
#define PPU0_PPR24_PPR16	(*(volatile uint_io8_t*)0xB7280710)  /*@bfbba@*/
#define PPU0_PPR24_PPR17	(*(volatile uint_io8_t*)0xB7280711)  /*@bfbba@*/
#define PPU0_PPR24_PPR18	(*(volatile uint_io8_t*)0xB7280712)  /*@bfbba@*/
#define PPU0_PPR24_PPR19	(*(volatile uint_io8_t*)0xB7280713)  /*@bfbba@*/
#define PPU0_PPR24_PPR20	(*(volatile uint_io8_t*)0xB7280714)  /*@bfbba@*/
#define PPU0_PPR24_PPR21	(*(volatile uint_io8_t*)0xB7280715)  /*@bfbba@*/
#define PPU0_PPR24_PPR22	(*(volatile uint_io8_t*)0xB7280716)  /*@bfbba@*/
#define PPU0_PPR24_PPR23	(*(volatile uint_io8_t*)0xB7280717)  /*@bfbba@*/
#define PPU0_PPR24_PPR24	(*(volatile uint_io8_t*)0xB7280718)  /*@bfbba@*/
#define PPU0_PPR24_PPR25	(*(volatile uint_io8_t*)0xB7280719)  /*@bfbba@*/
#define PPU0_PPR24_PPR26	(*(volatile uint_io8_t*)0xB728071A)  /*@bfbba@*/
#define PPU0_PPR24_PPR27	(*(volatile uint_io8_t*)0xB728071B)  /*@bfbba@*/
#define PPU0_PPR24_PPR28	(*(volatile uint_io8_t*)0xB728071C)  /*@bfbba@*/
#define PPU0_PPR24_PPR29	(*(volatile uint_io8_t*)0xB728071D)  /*@bfbba@*/
#define PPU0_PPR24_PPR30	(*(volatile uint_io8_t*)0xB728071E)  /*@bfbba@*/
#define PPU0_PPR24_PPR31	(*(volatile uint_io8_t*)0xB728071F)  /*@bfbba@*/

#define PPU0_PPR25	(PPU0.unPPR25.u32Register)  /*@rg@*/
#define PPU0_PPR25_PPR0	(*(volatile uint_io8_t*)0xB7280720)  /*@bfbba@*/
#define PPU0_PPR25_PPR1	(*(volatile uint_io8_t*)0xB7280721)  /*@bfbba@*/
#define PPU0_PPR25_PPR2	(*(volatile uint_io8_t*)0xB7280722)  /*@bfbba@*/
#define PPU0_PPR25_PPR3	(*(volatile uint_io8_t*)0xB7280723)  /*@bfbba@*/
#define PPU0_PPR25_PPR4	(*(volatile uint_io8_t*)0xB7280724)  /*@bfbba@*/
#define PPU0_PPR25_PPR5	(*(volatile uint_io8_t*)0xB7280725)  /*@bfbba@*/
#define PPU0_PPR25_PPR6	(*(volatile uint_io8_t*)0xB7280726)  /*@bfbba@*/
#define PPU0_PPR25_PPR7	(*(volatile uint_io8_t*)0xB7280727)  /*@bfbba@*/
#define PPU0_PPR25_PPR8	(*(volatile uint_io8_t*)0xB7280728)  /*@bfbba@*/
#define PPU0_PPR25_PPR9	(*(volatile uint_io8_t*)0xB7280729)  /*@bfbba@*/
#define PPU0_PPR25_PPR10	(*(volatile uint_io8_t*)0xB728072A)  /*@bfbba@*/
#define PPU0_PPR25_PPR11	(*(volatile uint_io8_t*)0xB728072B)  /*@bfbba@*/
#define PPU0_PPR25_PPR12	(*(volatile uint_io8_t*)0xB728072C)  /*@bfbba@*/
#define PPU0_PPR25_PPR13	(*(volatile uint_io8_t*)0xB728072D)  /*@bfbba@*/
#define PPU0_PPR25_PPR14	(*(volatile uint_io8_t*)0xB728072E)  /*@bfbba@*/
#define PPU0_PPR25_PPR15	(*(volatile uint_io8_t*)0xB728072F)  /*@bfbba@*/
#define PPU0_PPR25_PPR16	(*(volatile uint_io8_t*)0xB7280730)  /*@bfbba@*/
#define PPU0_PPR25_PPR17	(*(volatile uint_io8_t*)0xB7280731)  /*@bfbba@*/
#define PPU0_PPR25_PPR18	(*(volatile uint_io8_t*)0xB7280732)  /*@bfbba@*/
#define PPU0_PPR25_PPR19	(*(volatile uint_io8_t*)0xB7280733)  /*@bfbba@*/
#define PPU0_PPR25_PPR20	(*(volatile uint_io8_t*)0xB7280734)  /*@bfbba@*/
#define PPU0_PPR25_PPR21	(*(volatile uint_io8_t*)0xB7280735)  /*@bfbba@*/
#define PPU0_PPR25_PPR22	(*(volatile uint_io8_t*)0xB7280736)  /*@bfbba@*/
#define PPU0_PPR25_PPR23	(*(volatile uint_io8_t*)0xB7280737)  /*@bfbba@*/
#define PPU0_PPR25_PPR24	(*(volatile uint_io8_t*)0xB7280738)  /*@bfbba@*/
#define PPU0_PPR25_PPR25	(*(volatile uint_io8_t*)0xB7280739)  /*@bfbba@*/
#define PPU0_PPR25_PPR26	(*(volatile uint_io8_t*)0xB728073A)  /*@bfbba@*/
#define PPU0_PPR25_PPR27	(*(volatile uint_io8_t*)0xB728073B)  /*@bfbba@*/
#define PPU0_PPR25_PPR28	(*(volatile uint_io8_t*)0xB728073C)  /*@bfbba@*/
#define PPU0_PPR25_PPR29	(*(volatile uint_io8_t*)0xB728073D)  /*@bfbba@*/
#define PPU0_PPR25_PPR30	(*(volatile uint_io8_t*)0xB728073E)  /*@bfbba@*/
#define PPU0_PPR25_PPR31	(*(volatile uint_io8_t*)0xB728073F)  /*@bfbba@*/

#define PPU0_PPR26	(PPU0.unPPR26.u32Register)  /*@rg@*/
#define PPU0_PPR26_PPR0	(*(volatile uint_io8_t*)0xB7280740)  /*@bfbba@*/
#define PPU0_PPR26_PPR1	(*(volatile uint_io8_t*)0xB7280741)  /*@bfbba@*/
#define PPU0_PPR26_PPR2	(*(volatile uint_io8_t*)0xB7280742)  /*@bfbba@*/
#define PPU0_PPR26_PPR3	(*(volatile uint_io8_t*)0xB7280743)  /*@bfbba@*/
#define PPU0_PPR26_PPR4	(*(volatile uint_io8_t*)0xB7280744)  /*@bfbba@*/
#define PPU0_PPR26_PPR5	(*(volatile uint_io8_t*)0xB7280745)  /*@bfbba@*/
#define PPU0_PPR26_PPR6	(*(volatile uint_io8_t*)0xB7280746)  /*@bfbba@*/
#define PPU0_PPR26_PPR7	(*(volatile uint_io8_t*)0xB7280747)  /*@bfbba@*/
#define PPU0_PPR26_PPR8	(*(volatile uint_io8_t*)0xB7280748)  /*@bfbba@*/
#define PPU0_PPR26_PPR9	(*(volatile uint_io8_t*)0xB7280749)  /*@bfbba@*/
#define PPU0_PPR26_PPR10	(*(volatile uint_io8_t*)0xB728074A)  /*@bfbba@*/
#define PPU0_PPR26_PPR11	(*(volatile uint_io8_t*)0xB728074B)  /*@bfbba@*/
#define PPU0_PPR26_PPR12	(*(volatile uint_io8_t*)0xB728074C)  /*@bfbba@*/
#define PPU0_PPR26_PPR13	(*(volatile uint_io8_t*)0xB728074D)  /*@bfbba@*/
#define PPU0_PPR26_PPR14	(*(volatile uint_io8_t*)0xB728074E)  /*@bfbba@*/
#define PPU0_PPR26_PPR15	(*(volatile uint_io8_t*)0xB728074F)  /*@bfbba@*/
#define PPU0_PPR26_PPR16	(*(volatile uint_io8_t*)0xB7280750)  /*@bfbba@*/
#define PPU0_PPR26_PPR17	(*(volatile uint_io8_t*)0xB7280751)  /*@bfbba@*/
#define PPU0_PPR26_PPR18	(*(volatile uint_io8_t*)0xB7280752)  /*@bfbba@*/
#define PPU0_PPR26_PPR19	(*(volatile uint_io8_t*)0xB7280753)  /*@bfbba@*/
#define PPU0_PPR26_PPR20	(*(volatile uint_io8_t*)0xB7280754)  /*@bfbba@*/
#define PPU0_PPR26_PPR21	(*(volatile uint_io8_t*)0xB7280755)  /*@bfbba@*/
#define PPU0_PPR26_PPR22	(*(volatile uint_io8_t*)0xB7280756)  /*@bfbba@*/
#define PPU0_PPR26_PPR23	(*(volatile uint_io8_t*)0xB7280757)  /*@bfbba@*/
#define PPU0_PPR26_PPR24	(*(volatile uint_io8_t*)0xB7280758)  /*@bfbba@*/
#define PPU0_PPR26_PPR25	(*(volatile uint_io8_t*)0xB7280759)  /*@bfbba@*/
#define PPU0_PPR26_PPR26	(*(volatile uint_io8_t*)0xB728075A)  /*@bfbba@*/
#define PPU0_PPR26_PPR27	(*(volatile uint_io8_t*)0xB728075B)  /*@bfbba@*/
#define PPU0_PPR26_PPR28	(*(volatile uint_io8_t*)0xB728075C)  /*@bfbba@*/
#define PPU0_PPR26_PPR29	(*(volatile uint_io8_t*)0xB728075D)  /*@bfbba@*/
#define PPU0_PPR26_PPR30	(*(volatile uint_io8_t*)0xB728075E)  /*@bfbba@*/
#define PPU0_PPR26_PPR31	(*(volatile uint_io8_t*)0xB728075F)  /*@bfbba@*/

#define PPU0_PPR27	(PPU0.unPPR27.u32Register)  /*@rg@*/
#define PPU0_PPR27_PPR0	(*(volatile uint_io8_t*)0xB7280760)  /*@bfbba@*/
#define PPU0_PPR27_PPR1	(*(volatile uint_io8_t*)0xB7280761)  /*@bfbba@*/
#define PPU0_PPR27_PPR2	(*(volatile uint_io8_t*)0xB7280762)  /*@bfbba@*/
#define PPU0_PPR27_PPR3	(*(volatile uint_io8_t*)0xB7280763)  /*@bfbba@*/
#define PPU0_PPR27_PPR4	(*(volatile uint_io8_t*)0xB7280764)  /*@bfbba@*/
#define PPU0_PPR27_PPR5	(*(volatile uint_io8_t*)0xB7280765)  /*@bfbba@*/
#define PPU0_PPR27_PPR6	(*(volatile uint_io8_t*)0xB7280766)  /*@bfbba@*/
#define PPU0_PPR27_PPR7	(*(volatile uint_io8_t*)0xB7280767)  /*@bfbba@*/
#define PPU0_PPR27_PPR8	(*(volatile uint_io8_t*)0xB7280768)  /*@bfbba@*/
#define PPU0_PPR27_PPR9	(*(volatile uint_io8_t*)0xB7280769)  /*@bfbba@*/
#define PPU0_PPR27_PPR10	(*(volatile uint_io8_t*)0xB728076A)  /*@bfbba@*/
#define PPU0_PPR27_PPR11	(*(volatile uint_io8_t*)0xB728076B)  /*@bfbba@*/
#define PPU0_PPR27_PPR12	(*(volatile uint_io8_t*)0xB728076C)  /*@bfbba@*/
#define PPU0_PPR27_PPR13	(*(volatile uint_io8_t*)0xB728076D)  /*@bfbba@*/
#define PPU0_PPR27_PPR14	(*(volatile uint_io8_t*)0xB728076E)  /*@bfbba@*/
#define PPU0_PPR27_PPR15	(*(volatile uint_io8_t*)0xB728076F)  /*@bfbba@*/
#define PPU0_PPR27_PPR16	(*(volatile uint_io8_t*)0xB7280770)  /*@bfbba@*/
#define PPU0_PPR27_PPR17	(*(volatile uint_io8_t*)0xB7280771)  /*@bfbba@*/
#define PPU0_PPR27_PPR18	(*(volatile uint_io8_t*)0xB7280772)  /*@bfbba@*/
#define PPU0_PPR27_PPR19	(*(volatile uint_io8_t*)0xB7280773)  /*@bfbba@*/
#define PPU0_PPR27_PPR20	(*(volatile uint_io8_t*)0xB7280774)  /*@bfbba@*/
#define PPU0_PPR27_PPR21	(*(volatile uint_io8_t*)0xB7280775)  /*@bfbba@*/
#define PPU0_PPR27_PPR22	(*(volatile uint_io8_t*)0xB7280776)  /*@bfbba@*/
#define PPU0_PPR27_PPR23	(*(volatile uint_io8_t*)0xB7280777)  /*@bfbba@*/
#define PPU0_PPR27_PPR24	(*(volatile uint_io8_t*)0xB7280778)  /*@bfbba@*/
#define PPU0_PPR27_PPR25	(*(volatile uint_io8_t*)0xB7280779)  /*@bfbba@*/
#define PPU0_PPR27_PPR26	(*(volatile uint_io8_t*)0xB728077A)  /*@bfbba@*/
#define PPU0_PPR27_PPR27	(*(volatile uint_io8_t*)0xB728077B)  /*@bfbba@*/
#define PPU0_PPR27_PPR28	(*(volatile uint_io8_t*)0xB728077C)  /*@bfbba@*/
#define PPU0_PPR27_PPR29	(*(volatile uint_io8_t*)0xB728077D)  /*@bfbba@*/
#define PPU0_PPR27_PPR30	(*(volatile uint_io8_t*)0xB728077E)  /*@bfbba@*/
#define PPU0_PPR27_PPR31	(*(volatile uint_io8_t*)0xB728077F)  /*@bfbba@*/

#define PPU0_PPR28	(PPU0.unPPR28.u32Register)  /*@rg@*/
#define PPU0_PPR28_PPR0	(*(volatile uint_io8_t*)0xB7280780)  /*@bfbba@*/
#define PPU0_PPR28_PPR1	(*(volatile uint_io8_t*)0xB7280781)  /*@bfbba@*/
#define PPU0_PPR28_PPR2	(*(volatile uint_io8_t*)0xB7280782)  /*@bfbba@*/
#define PPU0_PPR28_PPR3	(*(volatile uint_io8_t*)0xB7280783)  /*@bfbba@*/
#define PPU0_PPR28_PPR4	(*(volatile uint_io8_t*)0xB7280784)  /*@bfbba@*/
#define PPU0_PPR28_PPR5	(*(volatile uint_io8_t*)0xB7280785)  /*@bfbba@*/
#define PPU0_PPR28_PPR6	(*(volatile uint_io8_t*)0xB7280786)  /*@bfbba@*/
#define PPU0_PPR28_PPR7	(*(volatile uint_io8_t*)0xB7280787)  /*@bfbba@*/
#define PPU0_PPR28_PPR8	(*(volatile uint_io8_t*)0xB7280788)  /*@bfbba@*/
#define PPU0_PPR28_PPR9	(*(volatile uint_io8_t*)0xB7280789)  /*@bfbba@*/
#define PPU0_PPR28_PPR10	(*(volatile uint_io8_t*)0xB728078A)  /*@bfbba@*/
#define PPU0_PPR28_PPR11	(*(volatile uint_io8_t*)0xB728078B)  /*@bfbba@*/
#define PPU0_PPR28_PPR12	(*(volatile uint_io8_t*)0xB728078C)  /*@bfbba@*/
#define PPU0_PPR28_PPR13	(*(volatile uint_io8_t*)0xB728078D)  /*@bfbba@*/
#define PPU0_PPR28_PPR14	(*(volatile uint_io8_t*)0xB728078E)  /*@bfbba@*/
#define PPU0_PPR28_PPR15	(*(volatile uint_io8_t*)0xB728078F)  /*@bfbba@*/
#define PPU0_PPR28_PPR16	(*(volatile uint_io8_t*)0xB7280790)  /*@bfbba@*/
#define PPU0_PPR28_PPR17	(*(volatile uint_io8_t*)0xB7280791)  /*@bfbba@*/
#define PPU0_PPR28_PPR18	(*(volatile uint_io8_t*)0xB7280792)  /*@bfbba@*/
#define PPU0_PPR28_PPR19	(*(volatile uint_io8_t*)0xB7280793)  /*@bfbba@*/
#define PPU0_PPR28_PPR20	(*(volatile uint_io8_t*)0xB7280794)  /*@bfbba@*/
#define PPU0_PPR28_PPR21	(*(volatile uint_io8_t*)0xB7280795)  /*@bfbba@*/
#define PPU0_PPR28_PPR22	(*(volatile uint_io8_t*)0xB7280796)  /*@bfbba@*/
#define PPU0_PPR28_PPR23	(*(volatile uint_io8_t*)0xB7280797)  /*@bfbba@*/
#define PPU0_PPR28_PPR24	(*(volatile uint_io8_t*)0xB7280798)  /*@bfbba@*/
#define PPU0_PPR28_PPR25	(*(volatile uint_io8_t*)0xB7280799)  /*@bfbba@*/
#define PPU0_PPR28_PPR26	(*(volatile uint_io8_t*)0xB728079A)  /*@bfbba@*/
#define PPU0_PPR28_PPR27	(*(volatile uint_io8_t*)0xB728079B)  /*@bfbba@*/
#define PPU0_PPR28_PPR28	(*(volatile uint_io8_t*)0xB728079C)  /*@bfbba@*/
#define PPU0_PPR28_PPR29	(*(volatile uint_io8_t*)0xB728079D)  /*@bfbba@*/
#define PPU0_PPR28_PPR30	(*(volatile uint_io8_t*)0xB728079E)  /*@bfbba@*/
#define PPU0_PPR28_PPR31	(*(volatile uint_io8_t*)0xB728079F)  /*@bfbba@*/

#define PPU0_PPR29	(PPU0.unPPR29.u32Register)  /*@rg@*/
#define PPU0_PPR29_PPR0	(*(volatile uint_io8_t*)0xB72807A0)  /*@bfbba@*/
#define PPU0_PPR29_PPR1	(*(volatile uint_io8_t*)0xB72807A1)  /*@bfbba@*/
#define PPU0_PPR29_PPR2	(*(volatile uint_io8_t*)0xB72807A2)  /*@bfbba@*/
#define PPU0_PPR29_PPR3	(*(volatile uint_io8_t*)0xB72807A3)  /*@bfbba@*/
#define PPU0_PPR29_PPR4	(*(volatile uint_io8_t*)0xB72807A4)  /*@bfbba@*/
#define PPU0_PPR29_PPR5	(*(volatile uint_io8_t*)0xB72807A5)  /*@bfbba@*/
#define PPU0_PPR29_PPR6	(*(volatile uint_io8_t*)0xB72807A6)  /*@bfbba@*/
#define PPU0_PPR29_PPR7	(*(volatile uint_io8_t*)0xB72807A7)  /*@bfbba@*/
#define PPU0_PPR29_PPR8	(*(volatile uint_io8_t*)0xB72807A8)  /*@bfbba@*/
#define PPU0_PPR29_PPR9	(*(volatile uint_io8_t*)0xB72807A9)  /*@bfbba@*/
#define PPU0_PPR29_PPR10	(*(volatile uint_io8_t*)0xB72807AA)  /*@bfbba@*/
#define PPU0_PPR29_PPR11	(*(volatile uint_io8_t*)0xB72807AB)  /*@bfbba@*/
#define PPU0_PPR29_PPR12	(*(volatile uint_io8_t*)0xB72807AC)  /*@bfbba@*/
#define PPU0_PPR29_PPR13	(*(volatile uint_io8_t*)0xB72807AD)  /*@bfbba@*/
#define PPU0_PPR29_PPR14	(*(volatile uint_io8_t*)0xB72807AE)  /*@bfbba@*/
#define PPU0_PPR29_PPR15	(*(volatile uint_io8_t*)0xB72807AF)  /*@bfbba@*/
#define PPU0_PPR29_PPR16	(*(volatile uint_io8_t*)0xB72807B0)  /*@bfbba@*/
#define PPU0_PPR29_PPR17	(*(volatile uint_io8_t*)0xB72807B1)  /*@bfbba@*/
#define PPU0_PPR29_PPR18	(*(volatile uint_io8_t*)0xB72807B2)  /*@bfbba@*/
#define PPU0_PPR29_PPR19	(*(volatile uint_io8_t*)0xB72807B3)  /*@bfbba@*/
#define PPU0_PPR29_PPR20	(*(volatile uint_io8_t*)0xB72807B4)  /*@bfbba@*/
#define PPU0_PPR29_PPR21	(*(volatile uint_io8_t*)0xB72807B5)  /*@bfbba@*/
#define PPU0_PPR29_PPR22	(*(volatile uint_io8_t*)0xB72807B6)  /*@bfbba@*/
#define PPU0_PPR29_PPR23	(*(volatile uint_io8_t*)0xB72807B7)  /*@bfbba@*/
#define PPU0_PPR29_PPR24	(*(volatile uint_io8_t*)0xB72807B8)  /*@bfbba@*/
#define PPU0_PPR29_PPR25	(*(volatile uint_io8_t*)0xB72807B9)  /*@bfbba@*/
#define PPU0_PPR29_PPR26	(*(volatile uint_io8_t*)0xB72807BA)  /*@bfbba@*/
#define PPU0_PPR29_PPR27	(*(volatile uint_io8_t*)0xB72807BB)  /*@bfbba@*/
#define PPU0_PPR29_PPR28	(*(volatile uint_io8_t*)0xB72807BC)  /*@bfbba@*/
#define PPU0_PPR29_PPR29	(*(volatile uint_io8_t*)0xB72807BD)  /*@bfbba@*/
#define PPU0_PPR29_PPR30	(*(volatile uint_io8_t*)0xB72807BE)  /*@bfbba@*/
#define PPU0_PPR29_PPR31	(*(volatile uint_io8_t*)0xB72807BF)  /*@bfbba@*/

typedef struct stc_ppu0_pprn_field{
    uint_io32_t		u1PPR0:1;
    uint_io32_t		u1PPR1:1;
    uint_io32_t		u1PPR2:1;
    uint_io32_t		u1PPR3:1;
    uint_io32_t		u1PPR4:1;
    uint_io32_t		u1PPR5:1;
    uint_io32_t		u1PPR6:1;
    uint_io32_t		u1PPR7:1;
    uint_io32_t		u1PPR8:1;
    uint_io32_t		u1PPR9:1;
    uint_io32_t		u1PPR10:1;
    uint_io32_t		u1PPR11:1;
    uint_io32_t		u1PPR12:1;
    uint_io32_t		u1PPR13:1;
    uint_io32_t		u1PPR14:1;
    uint_io32_t		u1PPR15:1;
    uint_io32_t		u1PPR16:1;
    uint_io32_t		u1PPR17:1;
    uint_io32_t		u1PPR18:1;
    uint_io32_t		u1PPR19:1;
    uint_io32_t		u1PPR20:1;
    uint_io32_t		u1PPR21:1;
    uint_io32_t		u1PPR22:1;
    uint_io32_t		u1PPR23:1;
    uint_io32_t		u1PPR24:1;
    uint_io32_t		u1PPR25:1;
    uint_io32_t		u1PPR26:1;
    uint_io32_t		u1PPR27:1;
    uint_io32_t		u1PPR28:1;
    uint_io32_t		u1PPR29:1;
    uint_io32_t		u1PPR30:1;
    uint_io32_t		u1PPR31:1;
}stc_ppu0_pprn_field_t;

typedef union un_ppu0_pprn{
    uint_io32_t		u32Register;
    stc_ppu0_pprn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_pprn_t;

/* LOCK0 */
#define PPU0_LOCK0	(PPU0.unLOCK0.u32Register)  /*@rg@*/
#define PPU0_LOCK0_L	PPU0_LOCK0  /*@bfrg@*/

typedef union un_ppu0_lock0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_lock0_t;

/* PUR[0-29] */
#define PPU0_PUR0	(PPU0.unPUR0.u32Register)  /*@rg@*/
#define PPU0_PUR0_PUR0	(*(volatile uint_io8_t*)0xB7280800)  /*@bfbba@*/
#define PPU0_PUR0_PUR1	(*(volatile uint_io8_t*)0xB7280801)  /*@bfbba@*/
#define PPU0_PUR0_PUR2	(*(volatile uint_io8_t*)0xB7280802)  /*@bfbba@*/
#define PPU0_PUR0_PUR3	(*(volatile uint_io8_t*)0xB7280803)  /*@bfbba@*/
#define PPU0_PUR0_PUR4	(*(volatile uint_io8_t*)0xB7280804)  /*@bfbba@*/
#define PPU0_PUR0_PUR5	(*(volatile uint_io8_t*)0xB7280805)  /*@bfbba@*/
#define PPU0_PUR0_PUR6	(*(volatile uint_io8_t*)0xB7280806)  /*@bfbba@*/
#define PPU0_PUR0_PUR7	(*(volatile uint_io8_t*)0xB7280807)  /*@bfbba@*/
#define PPU0_PUR0_PUR8	(*(volatile uint_io8_t*)0xB7280808)  /*@bfbba@*/
#define PPU0_PUR0_PUR9	(*(volatile uint_io8_t*)0xB7280809)  /*@bfbba@*/
#define PPU0_PUR0_PUR10	(*(volatile uint_io8_t*)0xB728080A)  /*@bfbba@*/
#define PPU0_PUR0_PUR11	(*(volatile uint_io8_t*)0xB728080B)  /*@bfbba@*/
#define PPU0_PUR0_PUR12	(*(volatile uint_io8_t*)0xB728080C)  /*@bfbba@*/
#define PPU0_PUR0_PUR13	(*(volatile uint_io8_t*)0xB728080D)  /*@bfbba@*/
#define PPU0_PUR0_PUR14	(*(volatile uint_io8_t*)0xB728080E)  /*@bfbba@*/
#define PPU0_PUR0_PUR15	(*(volatile uint_io8_t*)0xB728080F)  /*@bfbba@*/
#define PPU0_PUR0_PUR16	(*(volatile uint_io8_t*)0xB7280810)  /*@bfbba@*/
#define PPU0_PUR0_PUR17	(*(volatile uint_io8_t*)0xB7280811)  /*@bfbba@*/
#define PPU0_PUR0_PUR18	(*(volatile uint_io8_t*)0xB7280812)  /*@bfbba@*/
#define PPU0_PUR0_PUR19	(*(volatile uint_io8_t*)0xB7280813)  /*@bfbba@*/
#define PPU0_PUR0_PUR20	(*(volatile uint_io8_t*)0xB7280814)  /*@bfbba@*/
#define PPU0_PUR0_PUR21	(*(volatile uint_io8_t*)0xB7280815)  /*@bfbba@*/
#define PPU0_PUR0_PUR22	(*(volatile uint_io8_t*)0xB7280816)  /*@bfbba@*/
#define PPU0_PUR0_PUR23	(*(volatile uint_io8_t*)0xB7280817)  /*@bfbba@*/
#define PPU0_PUR0_PUR24	(*(volatile uint_io8_t*)0xB7280818)  /*@bfbba@*/
#define PPU0_PUR0_PUR25	(*(volatile uint_io8_t*)0xB7280819)  /*@bfbba@*/
#define PPU0_PUR0_PUR26	(*(volatile uint_io8_t*)0xB728081A)  /*@bfbba@*/
#define PPU0_PUR0_PUR27	(*(volatile uint_io8_t*)0xB728081B)  /*@bfbba@*/
#define PPU0_PUR0_PUR28	(*(volatile uint_io8_t*)0xB728081C)  /*@bfbba@*/
#define PPU0_PUR0_PUR29	(*(volatile uint_io8_t*)0xB728081D)  /*@bfbba@*/
#define PPU0_PUR0_PUR30	(*(volatile uint_io8_t*)0xB728081E)  /*@bfbba@*/
#define PPU0_PUR0_PUR31	(*(volatile uint_io8_t*)0xB728081F)  /*@bfbba@*/

#define PPU0_PUR1	(PPU0.unPUR1.u32Register)  /*@rg@*/
#define PPU0_PUR1_PUR0	(*(volatile uint_io8_t*)0xB7280820)  /*@bfbba@*/
#define PPU0_PUR1_PUR1	(*(volatile uint_io8_t*)0xB7280821)  /*@bfbba@*/
#define PPU0_PUR1_PUR2	(*(volatile uint_io8_t*)0xB7280822)  /*@bfbba@*/
#define PPU0_PUR1_PUR3	(*(volatile uint_io8_t*)0xB7280823)  /*@bfbba@*/
#define PPU0_PUR1_PUR4	(*(volatile uint_io8_t*)0xB7280824)  /*@bfbba@*/
#define PPU0_PUR1_PUR5	(*(volatile uint_io8_t*)0xB7280825)  /*@bfbba@*/
#define PPU0_PUR1_PUR6	(*(volatile uint_io8_t*)0xB7280826)  /*@bfbba@*/
#define PPU0_PUR1_PUR7	(*(volatile uint_io8_t*)0xB7280827)  /*@bfbba@*/
#define PPU0_PUR1_PUR8	(*(volatile uint_io8_t*)0xB7280828)  /*@bfbba@*/
#define PPU0_PUR1_PUR9	(*(volatile uint_io8_t*)0xB7280829)  /*@bfbba@*/
#define PPU0_PUR1_PUR10	(*(volatile uint_io8_t*)0xB728082A)  /*@bfbba@*/
#define PPU0_PUR1_PUR11	(*(volatile uint_io8_t*)0xB728082B)  /*@bfbba@*/
#define PPU0_PUR1_PUR12	(*(volatile uint_io8_t*)0xB728082C)  /*@bfbba@*/
#define PPU0_PUR1_PUR13	(*(volatile uint_io8_t*)0xB728082D)  /*@bfbba@*/
#define PPU0_PUR1_PUR14	(*(volatile uint_io8_t*)0xB728082E)  /*@bfbba@*/
#define PPU0_PUR1_PUR15	(*(volatile uint_io8_t*)0xB728082F)  /*@bfbba@*/
#define PPU0_PUR1_PUR16	(*(volatile uint_io8_t*)0xB7280830)  /*@bfbba@*/
#define PPU0_PUR1_PUR17	(*(volatile uint_io8_t*)0xB7280831)  /*@bfbba@*/
#define PPU0_PUR1_PUR18	(*(volatile uint_io8_t*)0xB7280832)  /*@bfbba@*/
#define PPU0_PUR1_PUR19	(*(volatile uint_io8_t*)0xB7280833)  /*@bfbba@*/
#define PPU0_PUR1_PUR20	(*(volatile uint_io8_t*)0xB7280834)  /*@bfbba@*/
#define PPU0_PUR1_PUR21	(*(volatile uint_io8_t*)0xB7280835)  /*@bfbba@*/
#define PPU0_PUR1_PUR22	(*(volatile uint_io8_t*)0xB7280836)  /*@bfbba@*/
#define PPU0_PUR1_PUR23	(*(volatile uint_io8_t*)0xB7280837)  /*@bfbba@*/
#define PPU0_PUR1_PUR24	(*(volatile uint_io8_t*)0xB7280838)  /*@bfbba@*/
#define PPU0_PUR1_PUR25	(*(volatile uint_io8_t*)0xB7280839)  /*@bfbba@*/
#define PPU0_PUR1_PUR26	(*(volatile uint_io8_t*)0xB728083A)  /*@bfbba@*/
#define PPU0_PUR1_PUR27	(*(volatile uint_io8_t*)0xB728083B)  /*@bfbba@*/
#define PPU0_PUR1_PUR28	(*(volatile uint_io8_t*)0xB728083C)  /*@bfbba@*/
#define PPU0_PUR1_PUR29	(*(volatile uint_io8_t*)0xB728083D)  /*@bfbba@*/
#define PPU0_PUR1_PUR30	(*(volatile uint_io8_t*)0xB728083E)  /*@bfbba@*/
#define PPU0_PUR1_PUR31	(*(volatile uint_io8_t*)0xB728083F)  /*@bfbba@*/

#define PPU0_PUR2	(PPU0.unPUR2.u32Register)  /*@rg@*/
#define PPU0_PUR2_PUR0	(*(volatile uint_io8_t*)0xB7280840)  /*@bfbba@*/
#define PPU0_PUR2_PUR1	(*(volatile uint_io8_t*)0xB7280841)  /*@bfbba@*/
#define PPU0_PUR2_PUR2	(*(volatile uint_io8_t*)0xB7280842)  /*@bfbba@*/
#define PPU0_PUR2_PUR3	(*(volatile uint_io8_t*)0xB7280843)  /*@bfbba@*/
#define PPU0_PUR2_PUR4	(*(volatile uint_io8_t*)0xB7280844)  /*@bfbba@*/
#define PPU0_PUR2_PUR5	(*(volatile uint_io8_t*)0xB7280845)  /*@bfbba@*/
#define PPU0_PUR2_PUR6	(*(volatile uint_io8_t*)0xB7280846)  /*@bfbba@*/
#define PPU0_PUR2_PUR7	(*(volatile uint_io8_t*)0xB7280847)  /*@bfbba@*/
#define PPU0_PUR2_PUR8	(*(volatile uint_io8_t*)0xB7280848)  /*@bfbba@*/
#define PPU0_PUR2_PUR9	(*(volatile uint_io8_t*)0xB7280849)  /*@bfbba@*/
#define PPU0_PUR2_PUR10	(*(volatile uint_io8_t*)0xB728084A)  /*@bfbba@*/
#define PPU0_PUR2_PUR11	(*(volatile uint_io8_t*)0xB728084B)  /*@bfbba@*/
#define PPU0_PUR2_PUR12	(*(volatile uint_io8_t*)0xB728084C)  /*@bfbba@*/
#define PPU0_PUR2_PUR13	(*(volatile uint_io8_t*)0xB728084D)  /*@bfbba@*/
#define PPU0_PUR2_PUR14	(*(volatile uint_io8_t*)0xB728084E)  /*@bfbba@*/
#define PPU0_PUR2_PUR15	(*(volatile uint_io8_t*)0xB728084F)  /*@bfbba@*/
#define PPU0_PUR2_PUR16	(*(volatile uint_io8_t*)0xB7280850)  /*@bfbba@*/
#define PPU0_PUR2_PUR17	(*(volatile uint_io8_t*)0xB7280851)  /*@bfbba@*/
#define PPU0_PUR2_PUR18	(*(volatile uint_io8_t*)0xB7280852)  /*@bfbba@*/
#define PPU0_PUR2_PUR19	(*(volatile uint_io8_t*)0xB7280853)  /*@bfbba@*/
#define PPU0_PUR2_PUR20	(*(volatile uint_io8_t*)0xB7280854)  /*@bfbba@*/
#define PPU0_PUR2_PUR21	(*(volatile uint_io8_t*)0xB7280855)  /*@bfbba@*/
#define PPU0_PUR2_PUR22	(*(volatile uint_io8_t*)0xB7280856)  /*@bfbba@*/
#define PPU0_PUR2_PUR23	(*(volatile uint_io8_t*)0xB7280857)  /*@bfbba@*/
#define PPU0_PUR2_PUR24	(*(volatile uint_io8_t*)0xB7280858)  /*@bfbba@*/
#define PPU0_PUR2_PUR25	(*(volatile uint_io8_t*)0xB7280859)  /*@bfbba@*/
#define PPU0_PUR2_PUR26	(*(volatile uint_io8_t*)0xB728085A)  /*@bfbba@*/
#define PPU0_PUR2_PUR27	(*(volatile uint_io8_t*)0xB728085B)  /*@bfbba@*/
#define PPU0_PUR2_PUR28	(*(volatile uint_io8_t*)0xB728085C)  /*@bfbba@*/
#define PPU0_PUR2_PUR29	(*(volatile uint_io8_t*)0xB728085D)  /*@bfbba@*/
#define PPU0_PUR2_PUR30	(*(volatile uint_io8_t*)0xB728085E)  /*@bfbba@*/
#define PPU0_PUR2_PUR31	(*(volatile uint_io8_t*)0xB728085F)  /*@bfbba@*/

#define PPU0_PUR3	(PPU0.unPUR3.u32Register)  /*@rg@*/
#define PPU0_PUR3_PUR0	(*(volatile uint_io8_t*)0xB7280860)  /*@bfbba@*/
#define PPU0_PUR3_PUR1	(*(volatile uint_io8_t*)0xB7280861)  /*@bfbba@*/
#define PPU0_PUR3_PUR2	(*(volatile uint_io8_t*)0xB7280862)  /*@bfbba@*/
#define PPU0_PUR3_PUR3	(*(volatile uint_io8_t*)0xB7280863)  /*@bfbba@*/
#define PPU0_PUR3_PUR4	(*(volatile uint_io8_t*)0xB7280864)  /*@bfbba@*/
#define PPU0_PUR3_PUR5	(*(volatile uint_io8_t*)0xB7280865)  /*@bfbba@*/
#define PPU0_PUR3_PUR6	(*(volatile uint_io8_t*)0xB7280866)  /*@bfbba@*/
#define PPU0_PUR3_PUR7	(*(volatile uint_io8_t*)0xB7280867)  /*@bfbba@*/
#define PPU0_PUR3_PUR8	(*(volatile uint_io8_t*)0xB7280868)  /*@bfbba@*/
#define PPU0_PUR3_PUR9	(*(volatile uint_io8_t*)0xB7280869)  /*@bfbba@*/
#define PPU0_PUR3_PUR10	(*(volatile uint_io8_t*)0xB728086A)  /*@bfbba@*/
#define PPU0_PUR3_PUR11	(*(volatile uint_io8_t*)0xB728086B)  /*@bfbba@*/
#define PPU0_PUR3_PUR12	(*(volatile uint_io8_t*)0xB728086C)  /*@bfbba@*/
#define PPU0_PUR3_PUR13	(*(volatile uint_io8_t*)0xB728086D)  /*@bfbba@*/
#define PPU0_PUR3_PUR14	(*(volatile uint_io8_t*)0xB728086E)  /*@bfbba@*/
#define PPU0_PUR3_PUR15	(*(volatile uint_io8_t*)0xB728086F)  /*@bfbba@*/
#define PPU0_PUR3_PUR16	(*(volatile uint_io8_t*)0xB7280870)  /*@bfbba@*/
#define PPU0_PUR3_PUR17	(*(volatile uint_io8_t*)0xB7280871)  /*@bfbba@*/
#define PPU0_PUR3_PUR18	(*(volatile uint_io8_t*)0xB7280872)  /*@bfbba@*/
#define PPU0_PUR3_PUR19	(*(volatile uint_io8_t*)0xB7280873)  /*@bfbba@*/
#define PPU0_PUR3_PUR20	(*(volatile uint_io8_t*)0xB7280874)  /*@bfbba@*/
#define PPU0_PUR3_PUR21	(*(volatile uint_io8_t*)0xB7280875)  /*@bfbba@*/
#define PPU0_PUR3_PUR22	(*(volatile uint_io8_t*)0xB7280876)  /*@bfbba@*/
#define PPU0_PUR3_PUR23	(*(volatile uint_io8_t*)0xB7280877)  /*@bfbba@*/
#define PPU0_PUR3_PUR24	(*(volatile uint_io8_t*)0xB7280878)  /*@bfbba@*/
#define PPU0_PUR3_PUR25	(*(volatile uint_io8_t*)0xB7280879)  /*@bfbba@*/
#define PPU0_PUR3_PUR26	(*(volatile uint_io8_t*)0xB728087A)  /*@bfbba@*/
#define PPU0_PUR3_PUR27	(*(volatile uint_io8_t*)0xB728087B)  /*@bfbba@*/
#define PPU0_PUR3_PUR28	(*(volatile uint_io8_t*)0xB728087C)  /*@bfbba@*/
#define PPU0_PUR3_PUR29	(*(volatile uint_io8_t*)0xB728087D)  /*@bfbba@*/
#define PPU0_PUR3_PUR30	(*(volatile uint_io8_t*)0xB728087E)  /*@bfbba@*/
#define PPU0_PUR3_PUR31	(*(volatile uint_io8_t*)0xB728087F)  /*@bfbba@*/

#define PPU0_PUR4	(PPU0.unPUR4.u32Register)  /*@rg@*/
#define PPU0_PUR4_PUR0	(*(volatile uint_io8_t*)0xB7280880)  /*@bfbba@*/
#define PPU0_PUR4_PUR1	(*(volatile uint_io8_t*)0xB7280881)  /*@bfbba@*/
#define PPU0_PUR4_PUR2	(*(volatile uint_io8_t*)0xB7280882)  /*@bfbba@*/
#define PPU0_PUR4_PUR3	(*(volatile uint_io8_t*)0xB7280883)  /*@bfbba@*/
#define PPU0_PUR4_PUR4	(*(volatile uint_io8_t*)0xB7280884)  /*@bfbba@*/
#define PPU0_PUR4_PUR5	(*(volatile uint_io8_t*)0xB7280885)  /*@bfbba@*/
#define PPU0_PUR4_PUR6	(*(volatile uint_io8_t*)0xB7280886)  /*@bfbba@*/
#define PPU0_PUR4_PUR7	(*(volatile uint_io8_t*)0xB7280887)  /*@bfbba@*/
#define PPU0_PUR4_PUR8	(*(volatile uint_io8_t*)0xB7280888)  /*@bfbba@*/
#define PPU0_PUR4_PUR9	(*(volatile uint_io8_t*)0xB7280889)  /*@bfbba@*/
#define PPU0_PUR4_PUR10	(*(volatile uint_io8_t*)0xB728088A)  /*@bfbba@*/
#define PPU0_PUR4_PUR11	(*(volatile uint_io8_t*)0xB728088B)  /*@bfbba@*/
#define PPU0_PUR4_PUR12	(*(volatile uint_io8_t*)0xB728088C)  /*@bfbba@*/
#define PPU0_PUR4_PUR13	(*(volatile uint_io8_t*)0xB728088D)  /*@bfbba@*/
#define PPU0_PUR4_PUR14	(*(volatile uint_io8_t*)0xB728088E)  /*@bfbba@*/
#define PPU0_PUR4_PUR15	(*(volatile uint_io8_t*)0xB728088F)  /*@bfbba@*/
#define PPU0_PUR4_PUR16	(*(volatile uint_io8_t*)0xB7280890)  /*@bfbba@*/
#define PPU0_PUR4_PUR17	(*(volatile uint_io8_t*)0xB7280891)  /*@bfbba@*/
#define PPU0_PUR4_PUR18	(*(volatile uint_io8_t*)0xB7280892)  /*@bfbba@*/
#define PPU0_PUR4_PUR19	(*(volatile uint_io8_t*)0xB7280893)  /*@bfbba@*/
#define PPU0_PUR4_PUR20	(*(volatile uint_io8_t*)0xB7280894)  /*@bfbba@*/
#define PPU0_PUR4_PUR21	(*(volatile uint_io8_t*)0xB7280895)  /*@bfbba@*/
#define PPU0_PUR4_PUR22	(*(volatile uint_io8_t*)0xB7280896)  /*@bfbba@*/
#define PPU0_PUR4_PUR23	(*(volatile uint_io8_t*)0xB7280897)  /*@bfbba@*/
#define PPU0_PUR4_PUR24	(*(volatile uint_io8_t*)0xB7280898)  /*@bfbba@*/
#define PPU0_PUR4_PUR25	(*(volatile uint_io8_t*)0xB7280899)  /*@bfbba@*/
#define PPU0_PUR4_PUR26	(*(volatile uint_io8_t*)0xB728089A)  /*@bfbba@*/
#define PPU0_PUR4_PUR27	(*(volatile uint_io8_t*)0xB728089B)  /*@bfbba@*/
#define PPU0_PUR4_PUR28	(*(volatile uint_io8_t*)0xB728089C)  /*@bfbba@*/
#define PPU0_PUR4_PUR29	(*(volatile uint_io8_t*)0xB728089D)  /*@bfbba@*/
#define PPU0_PUR4_PUR30	(*(volatile uint_io8_t*)0xB728089E)  /*@bfbba@*/
#define PPU0_PUR4_PUR31	(*(volatile uint_io8_t*)0xB728089F)  /*@bfbba@*/

#define PPU0_PUR5	(PPU0.unPUR5.u32Register)  /*@rg@*/
#define PPU0_PUR5_PUR0	(*(volatile uint_io8_t*)0xB72808A0)  /*@bfbba@*/
#define PPU0_PUR5_PUR1	(*(volatile uint_io8_t*)0xB72808A1)  /*@bfbba@*/
#define PPU0_PUR5_PUR2	(*(volatile uint_io8_t*)0xB72808A2)  /*@bfbba@*/
#define PPU0_PUR5_PUR3	(*(volatile uint_io8_t*)0xB72808A3)  /*@bfbba@*/
#define PPU0_PUR5_PUR4	(*(volatile uint_io8_t*)0xB72808A4)  /*@bfbba@*/
#define PPU0_PUR5_PUR5	(*(volatile uint_io8_t*)0xB72808A5)  /*@bfbba@*/
#define PPU0_PUR5_PUR6	(*(volatile uint_io8_t*)0xB72808A6)  /*@bfbba@*/
#define PPU0_PUR5_PUR7	(*(volatile uint_io8_t*)0xB72808A7)  /*@bfbba@*/
#define PPU0_PUR5_PUR8	(*(volatile uint_io8_t*)0xB72808A8)  /*@bfbba@*/
#define PPU0_PUR5_PUR9	(*(volatile uint_io8_t*)0xB72808A9)  /*@bfbba@*/
#define PPU0_PUR5_PUR10	(*(volatile uint_io8_t*)0xB72808AA)  /*@bfbba@*/
#define PPU0_PUR5_PUR11	(*(volatile uint_io8_t*)0xB72808AB)  /*@bfbba@*/
#define PPU0_PUR5_PUR12	(*(volatile uint_io8_t*)0xB72808AC)  /*@bfbba@*/
#define PPU0_PUR5_PUR13	(*(volatile uint_io8_t*)0xB72808AD)  /*@bfbba@*/
#define PPU0_PUR5_PUR14	(*(volatile uint_io8_t*)0xB72808AE)  /*@bfbba@*/
#define PPU0_PUR5_PUR15	(*(volatile uint_io8_t*)0xB72808AF)  /*@bfbba@*/
#define PPU0_PUR5_PUR16	(*(volatile uint_io8_t*)0xB72808B0)  /*@bfbba@*/
#define PPU0_PUR5_PUR17	(*(volatile uint_io8_t*)0xB72808B1)  /*@bfbba@*/
#define PPU0_PUR5_PUR18	(*(volatile uint_io8_t*)0xB72808B2)  /*@bfbba@*/
#define PPU0_PUR5_PUR19	(*(volatile uint_io8_t*)0xB72808B3)  /*@bfbba@*/
#define PPU0_PUR5_PUR20	(*(volatile uint_io8_t*)0xB72808B4)  /*@bfbba@*/
#define PPU0_PUR5_PUR21	(*(volatile uint_io8_t*)0xB72808B5)  /*@bfbba@*/
#define PPU0_PUR5_PUR22	(*(volatile uint_io8_t*)0xB72808B6)  /*@bfbba@*/
#define PPU0_PUR5_PUR23	(*(volatile uint_io8_t*)0xB72808B7)  /*@bfbba@*/
#define PPU0_PUR5_PUR24	(*(volatile uint_io8_t*)0xB72808B8)  /*@bfbba@*/
#define PPU0_PUR5_PUR25	(*(volatile uint_io8_t*)0xB72808B9)  /*@bfbba@*/
#define PPU0_PUR5_PUR26	(*(volatile uint_io8_t*)0xB72808BA)  /*@bfbba@*/
#define PPU0_PUR5_PUR27	(*(volatile uint_io8_t*)0xB72808BB)  /*@bfbba@*/
#define PPU0_PUR5_PUR28	(*(volatile uint_io8_t*)0xB72808BC)  /*@bfbba@*/
#define PPU0_PUR5_PUR29	(*(volatile uint_io8_t*)0xB72808BD)  /*@bfbba@*/
#define PPU0_PUR5_PUR30	(*(volatile uint_io8_t*)0xB72808BE)  /*@bfbba@*/
#define PPU0_PUR5_PUR31	(*(volatile uint_io8_t*)0xB72808BF)  /*@bfbba@*/

#define PPU0_PUR6	(PPU0.unPUR6.u32Register)  /*@rg@*/
#define PPU0_PUR6_PUR0	(*(volatile uint_io8_t*)0xB72808C0)  /*@bfbba@*/
#define PPU0_PUR6_PUR1	(*(volatile uint_io8_t*)0xB72808C1)  /*@bfbba@*/
#define PPU0_PUR6_PUR2	(*(volatile uint_io8_t*)0xB72808C2)  /*@bfbba@*/
#define PPU0_PUR6_PUR3	(*(volatile uint_io8_t*)0xB72808C3)  /*@bfbba@*/
#define PPU0_PUR6_PUR4	(*(volatile uint_io8_t*)0xB72808C4)  /*@bfbba@*/
#define PPU0_PUR6_PUR5	(*(volatile uint_io8_t*)0xB72808C5)  /*@bfbba@*/
#define PPU0_PUR6_PUR6	(*(volatile uint_io8_t*)0xB72808C6)  /*@bfbba@*/
#define PPU0_PUR6_PUR7	(*(volatile uint_io8_t*)0xB72808C7)  /*@bfbba@*/
#define PPU0_PUR6_PUR8	(*(volatile uint_io8_t*)0xB72808C8)  /*@bfbba@*/
#define PPU0_PUR6_PUR9	(*(volatile uint_io8_t*)0xB72808C9)  /*@bfbba@*/
#define PPU0_PUR6_PUR10	(*(volatile uint_io8_t*)0xB72808CA)  /*@bfbba@*/
#define PPU0_PUR6_PUR11	(*(volatile uint_io8_t*)0xB72808CB)  /*@bfbba@*/
#define PPU0_PUR6_PUR12	(*(volatile uint_io8_t*)0xB72808CC)  /*@bfbba@*/
#define PPU0_PUR6_PUR13	(*(volatile uint_io8_t*)0xB72808CD)  /*@bfbba@*/
#define PPU0_PUR6_PUR14	(*(volatile uint_io8_t*)0xB72808CE)  /*@bfbba@*/
#define PPU0_PUR6_PUR15	(*(volatile uint_io8_t*)0xB72808CF)  /*@bfbba@*/
#define PPU0_PUR6_PUR16	(*(volatile uint_io8_t*)0xB72808D0)  /*@bfbba@*/
#define PPU0_PUR6_PUR17	(*(volatile uint_io8_t*)0xB72808D1)  /*@bfbba@*/
#define PPU0_PUR6_PUR18	(*(volatile uint_io8_t*)0xB72808D2)  /*@bfbba@*/
#define PPU0_PUR6_PUR19	(*(volatile uint_io8_t*)0xB72808D3)  /*@bfbba@*/
#define PPU0_PUR6_PUR20	(*(volatile uint_io8_t*)0xB72808D4)  /*@bfbba@*/
#define PPU0_PUR6_PUR21	(*(volatile uint_io8_t*)0xB72808D5)  /*@bfbba@*/
#define PPU0_PUR6_PUR22	(*(volatile uint_io8_t*)0xB72808D6)  /*@bfbba@*/
#define PPU0_PUR6_PUR23	(*(volatile uint_io8_t*)0xB72808D7)  /*@bfbba@*/
#define PPU0_PUR6_PUR24	(*(volatile uint_io8_t*)0xB72808D8)  /*@bfbba@*/
#define PPU0_PUR6_PUR25	(*(volatile uint_io8_t*)0xB72808D9)  /*@bfbba@*/
#define PPU0_PUR6_PUR26	(*(volatile uint_io8_t*)0xB72808DA)  /*@bfbba@*/
#define PPU0_PUR6_PUR27	(*(volatile uint_io8_t*)0xB72808DB)  /*@bfbba@*/
#define PPU0_PUR6_PUR28	(*(volatile uint_io8_t*)0xB72808DC)  /*@bfbba@*/
#define PPU0_PUR6_PUR29	(*(volatile uint_io8_t*)0xB72808DD)  /*@bfbba@*/
#define PPU0_PUR6_PUR30	(*(volatile uint_io8_t*)0xB72808DE)  /*@bfbba@*/
#define PPU0_PUR6_PUR31	(*(volatile uint_io8_t*)0xB72808DF)  /*@bfbba@*/

#define PPU0_PUR7	(PPU0.unPUR7.u32Register)  /*@rg@*/
#define PPU0_PUR7_PUR0	(*(volatile uint_io8_t*)0xB72808E0)  /*@bfbba@*/
#define PPU0_PUR7_PUR1	(*(volatile uint_io8_t*)0xB72808E1)  /*@bfbba@*/
#define PPU0_PUR7_PUR2	(*(volatile uint_io8_t*)0xB72808E2)  /*@bfbba@*/
#define PPU0_PUR7_PUR3	(*(volatile uint_io8_t*)0xB72808E3)  /*@bfbba@*/
#define PPU0_PUR7_PUR4	(*(volatile uint_io8_t*)0xB72808E4)  /*@bfbba@*/
#define PPU0_PUR7_PUR5	(*(volatile uint_io8_t*)0xB72808E5)  /*@bfbba@*/
#define PPU0_PUR7_PUR6	(*(volatile uint_io8_t*)0xB72808E6)  /*@bfbba@*/
#define PPU0_PUR7_PUR7	(*(volatile uint_io8_t*)0xB72808E7)  /*@bfbba@*/
#define PPU0_PUR7_PUR8	(*(volatile uint_io8_t*)0xB72808E8)  /*@bfbba@*/
#define PPU0_PUR7_PUR9	(*(volatile uint_io8_t*)0xB72808E9)  /*@bfbba@*/
#define PPU0_PUR7_PUR10	(*(volatile uint_io8_t*)0xB72808EA)  /*@bfbba@*/
#define PPU0_PUR7_PUR11	(*(volatile uint_io8_t*)0xB72808EB)  /*@bfbba@*/
#define PPU0_PUR7_PUR12	(*(volatile uint_io8_t*)0xB72808EC)  /*@bfbba@*/
#define PPU0_PUR7_PUR13	(*(volatile uint_io8_t*)0xB72808ED)  /*@bfbba@*/
#define PPU0_PUR7_PUR14	(*(volatile uint_io8_t*)0xB72808EE)  /*@bfbba@*/
#define PPU0_PUR7_PUR15	(*(volatile uint_io8_t*)0xB72808EF)  /*@bfbba@*/
#define PPU0_PUR7_PUR16	(*(volatile uint_io8_t*)0xB72808F0)  /*@bfbba@*/
#define PPU0_PUR7_PUR17	(*(volatile uint_io8_t*)0xB72808F1)  /*@bfbba@*/
#define PPU0_PUR7_PUR18	(*(volatile uint_io8_t*)0xB72808F2)  /*@bfbba@*/
#define PPU0_PUR7_PUR19	(*(volatile uint_io8_t*)0xB72808F3)  /*@bfbba@*/
#define PPU0_PUR7_PUR20	(*(volatile uint_io8_t*)0xB72808F4)  /*@bfbba@*/
#define PPU0_PUR7_PUR21	(*(volatile uint_io8_t*)0xB72808F5)  /*@bfbba@*/
#define PPU0_PUR7_PUR22	(*(volatile uint_io8_t*)0xB72808F6)  /*@bfbba@*/
#define PPU0_PUR7_PUR23	(*(volatile uint_io8_t*)0xB72808F7)  /*@bfbba@*/
#define PPU0_PUR7_PUR24	(*(volatile uint_io8_t*)0xB72808F8)  /*@bfbba@*/
#define PPU0_PUR7_PUR25	(*(volatile uint_io8_t*)0xB72808F9)  /*@bfbba@*/
#define PPU0_PUR7_PUR26	(*(volatile uint_io8_t*)0xB72808FA)  /*@bfbba@*/
#define PPU0_PUR7_PUR27	(*(volatile uint_io8_t*)0xB72808FB)  /*@bfbba@*/
#define PPU0_PUR7_PUR28	(*(volatile uint_io8_t*)0xB72808FC)  /*@bfbba@*/
#define PPU0_PUR7_PUR29	(*(volatile uint_io8_t*)0xB72808FD)  /*@bfbba@*/
#define PPU0_PUR7_PUR30	(*(volatile uint_io8_t*)0xB72808FE)  /*@bfbba@*/
#define PPU0_PUR7_PUR31	(*(volatile uint_io8_t*)0xB72808FF)  /*@bfbba@*/

#define PPU0_PUR8	(PPU0.unPUR8.u32Register)  /*@rg@*/
#define PPU0_PUR8_PUR0	(*(volatile uint_io8_t*)0xB7280900)  /*@bfbba@*/
#define PPU0_PUR8_PUR1	(*(volatile uint_io8_t*)0xB7280901)  /*@bfbba@*/
#define PPU0_PUR8_PUR2	(*(volatile uint_io8_t*)0xB7280902)  /*@bfbba@*/
#define PPU0_PUR8_PUR3	(*(volatile uint_io8_t*)0xB7280903)  /*@bfbba@*/
#define PPU0_PUR8_PUR4	(*(volatile uint_io8_t*)0xB7280904)  /*@bfbba@*/
#define PPU0_PUR8_PUR5	(*(volatile uint_io8_t*)0xB7280905)  /*@bfbba@*/
#define PPU0_PUR8_PUR6	(*(volatile uint_io8_t*)0xB7280906)  /*@bfbba@*/
#define PPU0_PUR8_PUR7	(*(volatile uint_io8_t*)0xB7280907)  /*@bfbba@*/
#define PPU0_PUR8_PUR8	(*(volatile uint_io8_t*)0xB7280908)  /*@bfbba@*/
#define PPU0_PUR8_PUR9	(*(volatile uint_io8_t*)0xB7280909)  /*@bfbba@*/
#define PPU0_PUR8_PUR10	(*(volatile uint_io8_t*)0xB728090A)  /*@bfbba@*/
#define PPU0_PUR8_PUR11	(*(volatile uint_io8_t*)0xB728090B)  /*@bfbba@*/
#define PPU0_PUR8_PUR12	(*(volatile uint_io8_t*)0xB728090C)  /*@bfbba@*/
#define PPU0_PUR8_PUR13	(*(volatile uint_io8_t*)0xB728090D)  /*@bfbba@*/
#define PPU0_PUR8_PUR14	(*(volatile uint_io8_t*)0xB728090E)  /*@bfbba@*/
#define PPU0_PUR8_PUR15	(*(volatile uint_io8_t*)0xB728090F)  /*@bfbba@*/
#define PPU0_PUR8_PUR16	(*(volatile uint_io8_t*)0xB7280910)  /*@bfbba@*/
#define PPU0_PUR8_PUR17	(*(volatile uint_io8_t*)0xB7280911)  /*@bfbba@*/
#define PPU0_PUR8_PUR18	(*(volatile uint_io8_t*)0xB7280912)  /*@bfbba@*/
#define PPU0_PUR8_PUR19	(*(volatile uint_io8_t*)0xB7280913)  /*@bfbba@*/
#define PPU0_PUR8_PUR20	(*(volatile uint_io8_t*)0xB7280914)  /*@bfbba@*/
#define PPU0_PUR8_PUR21	(*(volatile uint_io8_t*)0xB7280915)  /*@bfbba@*/
#define PPU0_PUR8_PUR22	(*(volatile uint_io8_t*)0xB7280916)  /*@bfbba@*/
#define PPU0_PUR8_PUR23	(*(volatile uint_io8_t*)0xB7280917)  /*@bfbba@*/
#define PPU0_PUR8_PUR24	(*(volatile uint_io8_t*)0xB7280918)  /*@bfbba@*/
#define PPU0_PUR8_PUR25	(*(volatile uint_io8_t*)0xB7280919)  /*@bfbba@*/
#define PPU0_PUR8_PUR26	(*(volatile uint_io8_t*)0xB728091A)  /*@bfbba@*/
#define PPU0_PUR8_PUR27	(*(volatile uint_io8_t*)0xB728091B)  /*@bfbba@*/
#define PPU0_PUR8_PUR28	(*(volatile uint_io8_t*)0xB728091C)  /*@bfbba@*/
#define PPU0_PUR8_PUR29	(*(volatile uint_io8_t*)0xB728091D)  /*@bfbba@*/
#define PPU0_PUR8_PUR30	(*(volatile uint_io8_t*)0xB728091E)  /*@bfbba@*/
#define PPU0_PUR8_PUR31	(*(volatile uint_io8_t*)0xB728091F)  /*@bfbba@*/

#define PPU0_PUR9	(PPU0.unPUR9.u32Register)  /*@rg@*/
#define PPU0_PUR9_PUR0	(*(volatile uint_io8_t*)0xB7280920)  /*@bfbba@*/
#define PPU0_PUR9_PUR1	(*(volatile uint_io8_t*)0xB7280921)  /*@bfbba@*/
#define PPU0_PUR9_PUR2	(*(volatile uint_io8_t*)0xB7280922)  /*@bfbba@*/
#define PPU0_PUR9_PUR3	(*(volatile uint_io8_t*)0xB7280923)  /*@bfbba@*/
#define PPU0_PUR9_PUR4	(*(volatile uint_io8_t*)0xB7280924)  /*@bfbba@*/
#define PPU0_PUR9_PUR5	(*(volatile uint_io8_t*)0xB7280925)  /*@bfbba@*/
#define PPU0_PUR9_PUR6	(*(volatile uint_io8_t*)0xB7280926)  /*@bfbba@*/
#define PPU0_PUR9_PUR7	(*(volatile uint_io8_t*)0xB7280927)  /*@bfbba@*/
#define PPU0_PUR9_PUR8	(*(volatile uint_io8_t*)0xB7280928)  /*@bfbba@*/
#define PPU0_PUR9_PUR9	(*(volatile uint_io8_t*)0xB7280929)  /*@bfbba@*/
#define PPU0_PUR9_PUR10	(*(volatile uint_io8_t*)0xB728092A)  /*@bfbba@*/
#define PPU0_PUR9_PUR11	(*(volatile uint_io8_t*)0xB728092B)  /*@bfbba@*/
#define PPU0_PUR9_PUR12	(*(volatile uint_io8_t*)0xB728092C)  /*@bfbba@*/
#define PPU0_PUR9_PUR13	(*(volatile uint_io8_t*)0xB728092D)  /*@bfbba@*/
#define PPU0_PUR9_PUR14	(*(volatile uint_io8_t*)0xB728092E)  /*@bfbba@*/
#define PPU0_PUR9_PUR15	(*(volatile uint_io8_t*)0xB728092F)  /*@bfbba@*/
#define PPU0_PUR9_PUR16	(*(volatile uint_io8_t*)0xB7280930)  /*@bfbba@*/
#define PPU0_PUR9_PUR17	(*(volatile uint_io8_t*)0xB7280931)  /*@bfbba@*/
#define PPU0_PUR9_PUR18	(*(volatile uint_io8_t*)0xB7280932)  /*@bfbba@*/
#define PPU0_PUR9_PUR19	(*(volatile uint_io8_t*)0xB7280933)  /*@bfbba@*/
#define PPU0_PUR9_PUR20	(*(volatile uint_io8_t*)0xB7280934)  /*@bfbba@*/
#define PPU0_PUR9_PUR21	(*(volatile uint_io8_t*)0xB7280935)  /*@bfbba@*/
#define PPU0_PUR9_PUR22	(*(volatile uint_io8_t*)0xB7280936)  /*@bfbba@*/
#define PPU0_PUR9_PUR23	(*(volatile uint_io8_t*)0xB7280937)  /*@bfbba@*/
#define PPU0_PUR9_PUR24	(*(volatile uint_io8_t*)0xB7280938)  /*@bfbba@*/
#define PPU0_PUR9_PUR25	(*(volatile uint_io8_t*)0xB7280939)  /*@bfbba@*/
#define PPU0_PUR9_PUR26	(*(volatile uint_io8_t*)0xB728093A)  /*@bfbba@*/
#define PPU0_PUR9_PUR27	(*(volatile uint_io8_t*)0xB728093B)  /*@bfbba@*/
#define PPU0_PUR9_PUR28	(*(volatile uint_io8_t*)0xB728093C)  /*@bfbba@*/
#define PPU0_PUR9_PUR29	(*(volatile uint_io8_t*)0xB728093D)  /*@bfbba@*/
#define PPU0_PUR9_PUR30	(*(volatile uint_io8_t*)0xB728093E)  /*@bfbba@*/
#define PPU0_PUR9_PUR31	(*(volatile uint_io8_t*)0xB728093F)  /*@bfbba@*/

#define PPU0_PUR10	(PPU0.unPUR10.u32Register)  /*@rg@*/
#define PPU0_PUR10_PUR0	(*(volatile uint_io8_t*)0xB7280940)  /*@bfbba@*/
#define PPU0_PUR10_PUR1	(*(volatile uint_io8_t*)0xB7280941)  /*@bfbba@*/
#define PPU0_PUR10_PUR2	(*(volatile uint_io8_t*)0xB7280942)  /*@bfbba@*/
#define PPU0_PUR10_PUR3	(*(volatile uint_io8_t*)0xB7280943)  /*@bfbba@*/
#define PPU0_PUR10_PUR4	(*(volatile uint_io8_t*)0xB7280944)  /*@bfbba@*/
#define PPU0_PUR10_PUR5	(*(volatile uint_io8_t*)0xB7280945)  /*@bfbba@*/
#define PPU0_PUR10_PUR6	(*(volatile uint_io8_t*)0xB7280946)  /*@bfbba@*/
#define PPU0_PUR10_PUR7	(*(volatile uint_io8_t*)0xB7280947)  /*@bfbba@*/
#define PPU0_PUR10_PUR8	(*(volatile uint_io8_t*)0xB7280948)  /*@bfbba@*/
#define PPU0_PUR10_PUR9	(*(volatile uint_io8_t*)0xB7280949)  /*@bfbba@*/
#define PPU0_PUR10_PUR10	(*(volatile uint_io8_t*)0xB728094A)  /*@bfbba@*/
#define PPU0_PUR10_PUR11	(*(volatile uint_io8_t*)0xB728094B)  /*@bfbba@*/
#define PPU0_PUR10_PUR12	(*(volatile uint_io8_t*)0xB728094C)  /*@bfbba@*/
#define PPU0_PUR10_PUR13	(*(volatile uint_io8_t*)0xB728094D)  /*@bfbba@*/
#define PPU0_PUR10_PUR14	(*(volatile uint_io8_t*)0xB728094E)  /*@bfbba@*/
#define PPU0_PUR10_PUR15	(*(volatile uint_io8_t*)0xB728094F)  /*@bfbba@*/
#define PPU0_PUR10_PUR16	(*(volatile uint_io8_t*)0xB7280950)  /*@bfbba@*/
#define PPU0_PUR10_PUR17	(*(volatile uint_io8_t*)0xB7280951)  /*@bfbba@*/
#define PPU0_PUR10_PUR18	(*(volatile uint_io8_t*)0xB7280952)  /*@bfbba@*/
#define PPU0_PUR10_PUR19	(*(volatile uint_io8_t*)0xB7280953)  /*@bfbba@*/
#define PPU0_PUR10_PUR20	(*(volatile uint_io8_t*)0xB7280954)  /*@bfbba@*/
#define PPU0_PUR10_PUR21	(*(volatile uint_io8_t*)0xB7280955)  /*@bfbba@*/
#define PPU0_PUR10_PUR22	(*(volatile uint_io8_t*)0xB7280956)  /*@bfbba@*/
#define PPU0_PUR10_PUR23	(*(volatile uint_io8_t*)0xB7280957)  /*@bfbba@*/
#define PPU0_PUR10_PUR24	(*(volatile uint_io8_t*)0xB7280958)  /*@bfbba@*/
#define PPU0_PUR10_PUR25	(*(volatile uint_io8_t*)0xB7280959)  /*@bfbba@*/
#define PPU0_PUR10_PUR26	(*(volatile uint_io8_t*)0xB728095A)  /*@bfbba@*/
#define PPU0_PUR10_PUR27	(*(volatile uint_io8_t*)0xB728095B)  /*@bfbba@*/
#define PPU0_PUR10_PUR28	(*(volatile uint_io8_t*)0xB728095C)  /*@bfbba@*/
#define PPU0_PUR10_PUR29	(*(volatile uint_io8_t*)0xB728095D)  /*@bfbba@*/
#define PPU0_PUR10_PUR30	(*(volatile uint_io8_t*)0xB728095E)  /*@bfbba@*/
#define PPU0_PUR10_PUR31	(*(volatile uint_io8_t*)0xB728095F)  /*@bfbba@*/

#define PPU0_PUR11	(PPU0.unPUR11.u32Register)  /*@rg@*/
#define PPU0_PUR11_PUR0	(*(volatile uint_io8_t*)0xB7280960)  /*@bfbba@*/
#define PPU0_PUR11_PUR1	(*(volatile uint_io8_t*)0xB7280961)  /*@bfbba@*/
#define PPU0_PUR11_PUR2	(*(volatile uint_io8_t*)0xB7280962)  /*@bfbba@*/
#define PPU0_PUR11_PUR3	(*(volatile uint_io8_t*)0xB7280963)  /*@bfbba@*/
#define PPU0_PUR11_PUR4	(*(volatile uint_io8_t*)0xB7280964)  /*@bfbba@*/
#define PPU0_PUR11_PUR5	(*(volatile uint_io8_t*)0xB7280965)  /*@bfbba@*/
#define PPU0_PUR11_PUR6	(*(volatile uint_io8_t*)0xB7280966)  /*@bfbba@*/
#define PPU0_PUR11_PUR7	(*(volatile uint_io8_t*)0xB7280967)  /*@bfbba@*/
#define PPU0_PUR11_PUR8	(*(volatile uint_io8_t*)0xB7280968)  /*@bfbba@*/
#define PPU0_PUR11_PUR9	(*(volatile uint_io8_t*)0xB7280969)  /*@bfbba@*/
#define PPU0_PUR11_PUR10	(*(volatile uint_io8_t*)0xB728096A)  /*@bfbba@*/
#define PPU0_PUR11_PUR11	(*(volatile uint_io8_t*)0xB728096B)  /*@bfbba@*/
#define PPU0_PUR11_PUR12	(*(volatile uint_io8_t*)0xB728096C)  /*@bfbba@*/
#define PPU0_PUR11_PUR13	(*(volatile uint_io8_t*)0xB728096D)  /*@bfbba@*/
#define PPU0_PUR11_PUR14	(*(volatile uint_io8_t*)0xB728096E)  /*@bfbba@*/
#define PPU0_PUR11_PUR15	(*(volatile uint_io8_t*)0xB728096F)  /*@bfbba@*/
#define PPU0_PUR11_PUR16	(*(volatile uint_io8_t*)0xB7280970)  /*@bfbba@*/
#define PPU0_PUR11_PUR17	(*(volatile uint_io8_t*)0xB7280971)  /*@bfbba@*/
#define PPU0_PUR11_PUR18	(*(volatile uint_io8_t*)0xB7280972)  /*@bfbba@*/
#define PPU0_PUR11_PUR19	(*(volatile uint_io8_t*)0xB7280973)  /*@bfbba@*/
#define PPU0_PUR11_PUR20	(*(volatile uint_io8_t*)0xB7280974)  /*@bfbba@*/
#define PPU0_PUR11_PUR21	(*(volatile uint_io8_t*)0xB7280975)  /*@bfbba@*/
#define PPU0_PUR11_PUR22	(*(volatile uint_io8_t*)0xB7280976)  /*@bfbba@*/
#define PPU0_PUR11_PUR23	(*(volatile uint_io8_t*)0xB7280977)  /*@bfbba@*/
#define PPU0_PUR11_PUR24	(*(volatile uint_io8_t*)0xB7280978)  /*@bfbba@*/
#define PPU0_PUR11_PUR25	(*(volatile uint_io8_t*)0xB7280979)  /*@bfbba@*/
#define PPU0_PUR11_PUR26	(*(volatile uint_io8_t*)0xB728097A)  /*@bfbba@*/
#define PPU0_PUR11_PUR27	(*(volatile uint_io8_t*)0xB728097B)  /*@bfbba@*/
#define PPU0_PUR11_PUR28	(*(volatile uint_io8_t*)0xB728097C)  /*@bfbba@*/
#define PPU0_PUR11_PUR29	(*(volatile uint_io8_t*)0xB728097D)  /*@bfbba@*/
#define PPU0_PUR11_PUR30	(*(volatile uint_io8_t*)0xB728097E)  /*@bfbba@*/
#define PPU0_PUR11_PUR31	(*(volatile uint_io8_t*)0xB728097F)  /*@bfbba@*/

#define PPU0_PUR12	(PPU0.unPUR12.u32Register)  /*@rg@*/
#define PPU0_PUR12_PUR0	(*(volatile uint_io8_t*)0xB7280980)  /*@bfbba@*/
#define PPU0_PUR12_PUR1	(*(volatile uint_io8_t*)0xB7280981)  /*@bfbba@*/
#define PPU0_PUR12_PUR2	(*(volatile uint_io8_t*)0xB7280982)  /*@bfbba@*/
#define PPU0_PUR12_PUR3	(*(volatile uint_io8_t*)0xB7280983)  /*@bfbba@*/
#define PPU0_PUR12_PUR4	(*(volatile uint_io8_t*)0xB7280984)  /*@bfbba@*/
#define PPU0_PUR12_PUR5	(*(volatile uint_io8_t*)0xB7280985)  /*@bfbba@*/
#define PPU0_PUR12_PUR6	(*(volatile uint_io8_t*)0xB7280986)  /*@bfbba@*/
#define PPU0_PUR12_PUR7	(*(volatile uint_io8_t*)0xB7280987)  /*@bfbba@*/
#define PPU0_PUR12_PUR8	(*(volatile uint_io8_t*)0xB7280988)  /*@bfbba@*/
#define PPU0_PUR12_PUR9	(*(volatile uint_io8_t*)0xB7280989)  /*@bfbba@*/
#define PPU0_PUR12_PUR10	(*(volatile uint_io8_t*)0xB728098A)  /*@bfbba@*/
#define PPU0_PUR12_PUR11	(*(volatile uint_io8_t*)0xB728098B)  /*@bfbba@*/
#define PPU0_PUR12_PUR12	(*(volatile uint_io8_t*)0xB728098C)  /*@bfbba@*/
#define PPU0_PUR12_PUR13	(*(volatile uint_io8_t*)0xB728098D)  /*@bfbba@*/
#define PPU0_PUR12_PUR14	(*(volatile uint_io8_t*)0xB728098E)  /*@bfbba@*/
#define PPU0_PUR12_PUR15	(*(volatile uint_io8_t*)0xB728098F)  /*@bfbba@*/
#define PPU0_PUR12_PUR16	(*(volatile uint_io8_t*)0xB7280990)  /*@bfbba@*/
#define PPU0_PUR12_PUR17	(*(volatile uint_io8_t*)0xB7280991)  /*@bfbba@*/
#define PPU0_PUR12_PUR18	(*(volatile uint_io8_t*)0xB7280992)  /*@bfbba@*/
#define PPU0_PUR12_PUR19	(*(volatile uint_io8_t*)0xB7280993)  /*@bfbba@*/
#define PPU0_PUR12_PUR20	(*(volatile uint_io8_t*)0xB7280994)  /*@bfbba@*/
#define PPU0_PUR12_PUR21	(*(volatile uint_io8_t*)0xB7280995)  /*@bfbba@*/
#define PPU0_PUR12_PUR22	(*(volatile uint_io8_t*)0xB7280996)  /*@bfbba@*/
#define PPU0_PUR12_PUR23	(*(volatile uint_io8_t*)0xB7280997)  /*@bfbba@*/
#define PPU0_PUR12_PUR24	(*(volatile uint_io8_t*)0xB7280998)  /*@bfbba@*/
#define PPU0_PUR12_PUR25	(*(volatile uint_io8_t*)0xB7280999)  /*@bfbba@*/
#define PPU0_PUR12_PUR26	(*(volatile uint_io8_t*)0xB728099A)  /*@bfbba@*/
#define PPU0_PUR12_PUR27	(*(volatile uint_io8_t*)0xB728099B)  /*@bfbba@*/
#define PPU0_PUR12_PUR28	(*(volatile uint_io8_t*)0xB728099C)  /*@bfbba@*/
#define PPU0_PUR12_PUR29	(*(volatile uint_io8_t*)0xB728099D)  /*@bfbba@*/
#define PPU0_PUR12_PUR30	(*(volatile uint_io8_t*)0xB728099E)  /*@bfbba@*/
#define PPU0_PUR12_PUR31	(*(volatile uint_io8_t*)0xB728099F)  /*@bfbba@*/

#define PPU0_PUR13	(PPU0.unPUR13.u32Register)  /*@rg@*/
#define PPU0_PUR13_PUR0	(*(volatile uint_io8_t*)0xB72809A0)  /*@bfbba@*/
#define PPU0_PUR13_PUR1	(*(volatile uint_io8_t*)0xB72809A1)  /*@bfbba@*/
#define PPU0_PUR13_PUR2	(*(volatile uint_io8_t*)0xB72809A2)  /*@bfbba@*/
#define PPU0_PUR13_PUR3	(*(volatile uint_io8_t*)0xB72809A3)  /*@bfbba@*/
#define PPU0_PUR13_PUR4	(*(volatile uint_io8_t*)0xB72809A4)  /*@bfbba@*/
#define PPU0_PUR13_PUR5	(*(volatile uint_io8_t*)0xB72809A5)  /*@bfbba@*/
#define PPU0_PUR13_PUR6	(*(volatile uint_io8_t*)0xB72809A6)  /*@bfbba@*/
#define PPU0_PUR13_PUR7	(*(volatile uint_io8_t*)0xB72809A7)  /*@bfbba@*/
#define PPU0_PUR13_PUR8	(*(volatile uint_io8_t*)0xB72809A8)  /*@bfbba@*/
#define PPU0_PUR13_PUR9	(*(volatile uint_io8_t*)0xB72809A9)  /*@bfbba@*/
#define PPU0_PUR13_PUR10	(*(volatile uint_io8_t*)0xB72809AA)  /*@bfbba@*/
#define PPU0_PUR13_PUR11	(*(volatile uint_io8_t*)0xB72809AB)  /*@bfbba@*/
#define PPU0_PUR13_PUR12	(*(volatile uint_io8_t*)0xB72809AC)  /*@bfbba@*/
#define PPU0_PUR13_PUR13	(*(volatile uint_io8_t*)0xB72809AD)  /*@bfbba@*/
#define PPU0_PUR13_PUR14	(*(volatile uint_io8_t*)0xB72809AE)  /*@bfbba@*/
#define PPU0_PUR13_PUR15	(*(volatile uint_io8_t*)0xB72809AF)  /*@bfbba@*/
#define PPU0_PUR13_PUR16	(*(volatile uint_io8_t*)0xB72809B0)  /*@bfbba@*/
#define PPU0_PUR13_PUR17	(*(volatile uint_io8_t*)0xB72809B1)  /*@bfbba@*/
#define PPU0_PUR13_PUR18	(*(volatile uint_io8_t*)0xB72809B2)  /*@bfbba@*/
#define PPU0_PUR13_PUR19	(*(volatile uint_io8_t*)0xB72809B3)  /*@bfbba@*/
#define PPU0_PUR13_PUR20	(*(volatile uint_io8_t*)0xB72809B4)  /*@bfbba@*/
#define PPU0_PUR13_PUR21	(*(volatile uint_io8_t*)0xB72809B5)  /*@bfbba@*/
#define PPU0_PUR13_PUR22	(*(volatile uint_io8_t*)0xB72809B6)  /*@bfbba@*/
#define PPU0_PUR13_PUR23	(*(volatile uint_io8_t*)0xB72809B7)  /*@bfbba@*/
#define PPU0_PUR13_PUR24	(*(volatile uint_io8_t*)0xB72809B8)  /*@bfbba@*/
#define PPU0_PUR13_PUR25	(*(volatile uint_io8_t*)0xB72809B9)  /*@bfbba@*/
#define PPU0_PUR13_PUR26	(*(volatile uint_io8_t*)0xB72809BA)  /*@bfbba@*/
#define PPU0_PUR13_PUR27	(*(volatile uint_io8_t*)0xB72809BB)  /*@bfbba@*/
#define PPU0_PUR13_PUR28	(*(volatile uint_io8_t*)0xB72809BC)  /*@bfbba@*/
#define PPU0_PUR13_PUR29	(*(volatile uint_io8_t*)0xB72809BD)  /*@bfbba@*/
#define PPU0_PUR13_PUR30	(*(volatile uint_io8_t*)0xB72809BE)  /*@bfbba@*/
#define PPU0_PUR13_PUR31	(*(volatile uint_io8_t*)0xB72809BF)  /*@bfbba@*/

#define PPU0_PUR14	(PPU0.unPUR14.u32Register)  /*@rg@*/
#define PPU0_PUR14_PUR0	(*(volatile uint_io8_t*)0xB72809C0)  /*@bfbba@*/
#define PPU0_PUR14_PUR1	(*(volatile uint_io8_t*)0xB72809C1)  /*@bfbba@*/
#define PPU0_PUR14_PUR2	(*(volatile uint_io8_t*)0xB72809C2)  /*@bfbba@*/
#define PPU0_PUR14_PUR3	(*(volatile uint_io8_t*)0xB72809C3)  /*@bfbba@*/
#define PPU0_PUR14_PUR4	(*(volatile uint_io8_t*)0xB72809C4)  /*@bfbba@*/
#define PPU0_PUR14_PUR5	(*(volatile uint_io8_t*)0xB72809C5)  /*@bfbba@*/
#define PPU0_PUR14_PUR6	(*(volatile uint_io8_t*)0xB72809C6)  /*@bfbba@*/
#define PPU0_PUR14_PUR7	(*(volatile uint_io8_t*)0xB72809C7)  /*@bfbba@*/
#define PPU0_PUR14_PUR8	(*(volatile uint_io8_t*)0xB72809C8)  /*@bfbba@*/
#define PPU0_PUR14_PUR9	(*(volatile uint_io8_t*)0xB72809C9)  /*@bfbba@*/
#define PPU0_PUR14_PUR10	(*(volatile uint_io8_t*)0xB72809CA)  /*@bfbba@*/
#define PPU0_PUR14_PUR11	(*(volatile uint_io8_t*)0xB72809CB)  /*@bfbba@*/
#define PPU0_PUR14_PUR12	(*(volatile uint_io8_t*)0xB72809CC)  /*@bfbba@*/
#define PPU0_PUR14_PUR13	(*(volatile uint_io8_t*)0xB72809CD)  /*@bfbba@*/
#define PPU0_PUR14_PUR14	(*(volatile uint_io8_t*)0xB72809CE)  /*@bfbba@*/
#define PPU0_PUR14_PUR15	(*(volatile uint_io8_t*)0xB72809CF)  /*@bfbba@*/
#define PPU0_PUR14_PUR16	(*(volatile uint_io8_t*)0xB72809D0)  /*@bfbba@*/
#define PPU0_PUR14_PUR17	(*(volatile uint_io8_t*)0xB72809D1)  /*@bfbba@*/
#define PPU0_PUR14_PUR18	(*(volatile uint_io8_t*)0xB72809D2)  /*@bfbba@*/
#define PPU0_PUR14_PUR19	(*(volatile uint_io8_t*)0xB72809D3)  /*@bfbba@*/
#define PPU0_PUR14_PUR20	(*(volatile uint_io8_t*)0xB72809D4)  /*@bfbba@*/
#define PPU0_PUR14_PUR21	(*(volatile uint_io8_t*)0xB72809D5)  /*@bfbba@*/
#define PPU0_PUR14_PUR22	(*(volatile uint_io8_t*)0xB72809D6)  /*@bfbba@*/
#define PPU0_PUR14_PUR23	(*(volatile uint_io8_t*)0xB72809D7)  /*@bfbba@*/
#define PPU0_PUR14_PUR24	(*(volatile uint_io8_t*)0xB72809D8)  /*@bfbba@*/
#define PPU0_PUR14_PUR25	(*(volatile uint_io8_t*)0xB72809D9)  /*@bfbba@*/
#define PPU0_PUR14_PUR26	(*(volatile uint_io8_t*)0xB72809DA)  /*@bfbba@*/
#define PPU0_PUR14_PUR27	(*(volatile uint_io8_t*)0xB72809DB)  /*@bfbba@*/
#define PPU0_PUR14_PUR28	(*(volatile uint_io8_t*)0xB72809DC)  /*@bfbba@*/
#define PPU0_PUR14_PUR29	(*(volatile uint_io8_t*)0xB72809DD)  /*@bfbba@*/
#define PPU0_PUR14_PUR30	(*(volatile uint_io8_t*)0xB72809DE)  /*@bfbba@*/
#define PPU0_PUR14_PUR31	(*(volatile uint_io8_t*)0xB72809DF)  /*@bfbba@*/

#define PPU0_PUR15	(PPU0.unPUR15.u32Register)  /*@rg@*/
#define PPU0_PUR15_PUR0	(*(volatile uint_io8_t*)0xB72809E0)  /*@bfbba@*/
#define PPU0_PUR15_PUR1	(*(volatile uint_io8_t*)0xB72809E1)  /*@bfbba@*/
#define PPU0_PUR15_PUR2	(*(volatile uint_io8_t*)0xB72809E2)  /*@bfbba@*/
#define PPU0_PUR15_PUR3	(*(volatile uint_io8_t*)0xB72809E3)  /*@bfbba@*/
#define PPU0_PUR15_PUR4	(*(volatile uint_io8_t*)0xB72809E4)  /*@bfbba@*/
#define PPU0_PUR15_PUR5	(*(volatile uint_io8_t*)0xB72809E5)  /*@bfbba@*/
#define PPU0_PUR15_PUR6	(*(volatile uint_io8_t*)0xB72809E6)  /*@bfbba@*/
#define PPU0_PUR15_PUR7	(*(volatile uint_io8_t*)0xB72809E7)  /*@bfbba@*/
#define PPU0_PUR15_PUR8	(*(volatile uint_io8_t*)0xB72809E8)  /*@bfbba@*/
#define PPU0_PUR15_PUR9	(*(volatile uint_io8_t*)0xB72809E9)  /*@bfbba@*/
#define PPU0_PUR15_PUR10	(*(volatile uint_io8_t*)0xB72809EA)  /*@bfbba@*/
#define PPU0_PUR15_PUR11	(*(volatile uint_io8_t*)0xB72809EB)  /*@bfbba@*/
#define PPU0_PUR15_PUR12	(*(volatile uint_io8_t*)0xB72809EC)  /*@bfbba@*/
#define PPU0_PUR15_PUR13	(*(volatile uint_io8_t*)0xB72809ED)  /*@bfbba@*/
#define PPU0_PUR15_PUR14	(*(volatile uint_io8_t*)0xB72809EE)  /*@bfbba@*/
#define PPU0_PUR15_PUR15	(*(volatile uint_io8_t*)0xB72809EF)  /*@bfbba@*/
#define PPU0_PUR15_PUR16	(*(volatile uint_io8_t*)0xB72809F0)  /*@bfbba@*/
#define PPU0_PUR15_PUR17	(*(volatile uint_io8_t*)0xB72809F1)  /*@bfbba@*/
#define PPU0_PUR15_PUR18	(*(volatile uint_io8_t*)0xB72809F2)  /*@bfbba@*/
#define PPU0_PUR15_PUR19	(*(volatile uint_io8_t*)0xB72809F3)  /*@bfbba@*/
#define PPU0_PUR15_PUR20	(*(volatile uint_io8_t*)0xB72809F4)  /*@bfbba@*/
#define PPU0_PUR15_PUR21	(*(volatile uint_io8_t*)0xB72809F5)  /*@bfbba@*/
#define PPU0_PUR15_PUR22	(*(volatile uint_io8_t*)0xB72809F6)  /*@bfbba@*/
#define PPU0_PUR15_PUR23	(*(volatile uint_io8_t*)0xB72809F7)  /*@bfbba@*/
#define PPU0_PUR15_PUR24	(*(volatile uint_io8_t*)0xB72809F8)  /*@bfbba@*/
#define PPU0_PUR15_PUR25	(*(volatile uint_io8_t*)0xB72809F9)  /*@bfbba@*/
#define PPU0_PUR15_PUR26	(*(volatile uint_io8_t*)0xB72809FA)  /*@bfbba@*/
#define PPU0_PUR15_PUR27	(*(volatile uint_io8_t*)0xB72809FB)  /*@bfbba@*/
#define PPU0_PUR15_PUR28	(*(volatile uint_io8_t*)0xB72809FC)  /*@bfbba@*/
#define PPU0_PUR15_PUR29	(*(volatile uint_io8_t*)0xB72809FD)  /*@bfbba@*/
#define PPU0_PUR15_PUR30	(*(volatile uint_io8_t*)0xB72809FE)  /*@bfbba@*/
#define PPU0_PUR15_PUR31	(*(volatile uint_io8_t*)0xB72809FF)  /*@bfbba@*/

#define PPU0_PUR16	(PPU0.unPUR16.u32Register)  /*@rg@*/
#define PPU0_PUR16_PUR0	(*(volatile uint_io8_t*)0xB7280A00)  /*@bfbba@*/
#define PPU0_PUR16_PUR1	(*(volatile uint_io8_t*)0xB7280A01)  /*@bfbba@*/
#define PPU0_PUR16_PUR2	(*(volatile uint_io8_t*)0xB7280A02)  /*@bfbba@*/
#define PPU0_PUR16_PUR3	(*(volatile uint_io8_t*)0xB7280A03)  /*@bfbba@*/
#define PPU0_PUR16_PUR4	(*(volatile uint_io8_t*)0xB7280A04)  /*@bfbba@*/
#define PPU0_PUR16_PUR5	(*(volatile uint_io8_t*)0xB7280A05)  /*@bfbba@*/
#define PPU0_PUR16_PUR6	(*(volatile uint_io8_t*)0xB7280A06)  /*@bfbba@*/
#define PPU0_PUR16_PUR7	(*(volatile uint_io8_t*)0xB7280A07)  /*@bfbba@*/
#define PPU0_PUR16_PUR8	(*(volatile uint_io8_t*)0xB7280A08)  /*@bfbba@*/
#define PPU0_PUR16_PUR9	(*(volatile uint_io8_t*)0xB7280A09)  /*@bfbba@*/
#define PPU0_PUR16_PUR10	(*(volatile uint_io8_t*)0xB7280A0A)  /*@bfbba@*/
#define PPU0_PUR16_PUR11	(*(volatile uint_io8_t*)0xB7280A0B)  /*@bfbba@*/
#define PPU0_PUR16_PUR12	(*(volatile uint_io8_t*)0xB7280A0C)  /*@bfbba@*/
#define PPU0_PUR16_PUR13	(*(volatile uint_io8_t*)0xB7280A0D)  /*@bfbba@*/
#define PPU0_PUR16_PUR14	(*(volatile uint_io8_t*)0xB7280A0E)  /*@bfbba@*/
#define PPU0_PUR16_PUR15	(*(volatile uint_io8_t*)0xB7280A0F)  /*@bfbba@*/
#define PPU0_PUR16_PUR16	(*(volatile uint_io8_t*)0xB7280A10)  /*@bfbba@*/
#define PPU0_PUR16_PUR17	(*(volatile uint_io8_t*)0xB7280A11)  /*@bfbba@*/
#define PPU0_PUR16_PUR18	(*(volatile uint_io8_t*)0xB7280A12)  /*@bfbba@*/
#define PPU0_PUR16_PUR19	(*(volatile uint_io8_t*)0xB7280A13)  /*@bfbba@*/
#define PPU0_PUR16_PUR20	(*(volatile uint_io8_t*)0xB7280A14)  /*@bfbba@*/
#define PPU0_PUR16_PUR21	(*(volatile uint_io8_t*)0xB7280A15)  /*@bfbba@*/
#define PPU0_PUR16_PUR22	(*(volatile uint_io8_t*)0xB7280A16)  /*@bfbba@*/
#define PPU0_PUR16_PUR23	(*(volatile uint_io8_t*)0xB7280A17)  /*@bfbba@*/
#define PPU0_PUR16_PUR24	(*(volatile uint_io8_t*)0xB7280A18)  /*@bfbba@*/
#define PPU0_PUR16_PUR25	(*(volatile uint_io8_t*)0xB7280A19)  /*@bfbba@*/
#define PPU0_PUR16_PUR26	(*(volatile uint_io8_t*)0xB7280A1A)  /*@bfbba@*/
#define PPU0_PUR16_PUR27	(*(volatile uint_io8_t*)0xB7280A1B)  /*@bfbba@*/
#define PPU0_PUR16_PUR28	(*(volatile uint_io8_t*)0xB7280A1C)  /*@bfbba@*/
#define PPU0_PUR16_PUR29	(*(volatile uint_io8_t*)0xB7280A1D)  /*@bfbba@*/
#define PPU0_PUR16_PUR30	(*(volatile uint_io8_t*)0xB7280A1E)  /*@bfbba@*/
#define PPU0_PUR16_PUR31	(*(volatile uint_io8_t*)0xB7280A1F)  /*@bfbba@*/

#define PPU0_PUR17	(PPU0.unPUR17.u32Register)  /*@rg@*/
#define PPU0_PUR17_PUR0	(*(volatile uint_io8_t*)0xB7280A20)  /*@bfbba@*/
#define PPU0_PUR17_PUR1	(*(volatile uint_io8_t*)0xB7280A21)  /*@bfbba@*/
#define PPU0_PUR17_PUR2	(*(volatile uint_io8_t*)0xB7280A22)  /*@bfbba@*/
#define PPU0_PUR17_PUR3	(*(volatile uint_io8_t*)0xB7280A23)  /*@bfbba@*/
#define PPU0_PUR17_PUR4	(*(volatile uint_io8_t*)0xB7280A24)  /*@bfbba@*/
#define PPU0_PUR17_PUR5	(*(volatile uint_io8_t*)0xB7280A25)  /*@bfbba@*/
#define PPU0_PUR17_PUR6	(*(volatile uint_io8_t*)0xB7280A26)  /*@bfbba@*/
#define PPU0_PUR17_PUR7	(*(volatile uint_io8_t*)0xB7280A27)  /*@bfbba@*/
#define PPU0_PUR17_PUR8	(*(volatile uint_io8_t*)0xB7280A28)  /*@bfbba@*/
#define PPU0_PUR17_PUR9	(*(volatile uint_io8_t*)0xB7280A29)  /*@bfbba@*/
#define PPU0_PUR17_PUR10	(*(volatile uint_io8_t*)0xB7280A2A)  /*@bfbba@*/
#define PPU0_PUR17_PUR11	(*(volatile uint_io8_t*)0xB7280A2B)  /*@bfbba@*/
#define PPU0_PUR17_PUR12	(*(volatile uint_io8_t*)0xB7280A2C)  /*@bfbba@*/
#define PPU0_PUR17_PUR13	(*(volatile uint_io8_t*)0xB7280A2D)  /*@bfbba@*/
#define PPU0_PUR17_PUR14	(*(volatile uint_io8_t*)0xB7280A2E)  /*@bfbba@*/
#define PPU0_PUR17_PUR15	(*(volatile uint_io8_t*)0xB7280A2F)  /*@bfbba@*/
#define PPU0_PUR17_PUR16	(*(volatile uint_io8_t*)0xB7280A30)  /*@bfbba@*/
#define PPU0_PUR17_PUR17	(*(volatile uint_io8_t*)0xB7280A31)  /*@bfbba@*/
#define PPU0_PUR17_PUR18	(*(volatile uint_io8_t*)0xB7280A32)  /*@bfbba@*/
#define PPU0_PUR17_PUR19	(*(volatile uint_io8_t*)0xB7280A33)  /*@bfbba@*/
#define PPU0_PUR17_PUR20	(*(volatile uint_io8_t*)0xB7280A34)  /*@bfbba@*/
#define PPU0_PUR17_PUR21	(*(volatile uint_io8_t*)0xB7280A35)  /*@bfbba@*/
#define PPU0_PUR17_PUR22	(*(volatile uint_io8_t*)0xB7280A36)  /*@bfbba@*/
#define PPU0_PUR17_PUR23	(*(volatile uint_io8_t*)0xB7280A37)  /*@bfbba@*/
#define PPU0_PUR17_PUR24	(*(volatile uint_io8_t*)0xB7280A38)  /*@bfbba@*/
#define PPU0_PUR17_PUR25	(*(volatile uint_io8_t*)0xB7280A39)  /*@bfbba@*/
#define PPU0_PUR17_PUR26	(*(volatile uint_io8_t*)0xB7280A3A)  /*@bfbba@*/
#define PPU0_PUR17_PUR27	(*(volatile uint_io8_t*)0xB7280A3B)  /*@bfbba@*/
#define PPU0_PUR17_PUR28	(*(volatile uint_io8_t*)0xB7280A3C)  /*@bfbba@*/
#define PPU0_PUR17_PUR29	(*(volatile uint_io8_t*)0xB7280A3D)  /*@bfbba@*/
#define PPU0_PUR17_PUR30	(*(volatile uint_io8_t*)0xB7280A3E)  /*@bfbba@*/
#define PPU0_PUR17_PUR31	(*(volatile uint_io8_t*)0xB7280A3F)  /*@bfbba@*/

#define PPU0_PUR18	(PPU0.unPUR18.u32Register)  /*@rg@*/
#define PPU0_PUR18_PUR0	(*(volatile uint_io8_t*)0xB7280A40)  /*@bfbba@*/
#define PPU0_PUR18_PUR1	(*(volatile uint_io8_t*)0xB7280A41)  /*@bfbba@*/
#define PPU0_PUR18_PUR2	(*(volatile uint_io8_t*)0xB7280A42)  /*@bfbba@*/
#define PPU0_PUR18_PUR3	(*(volatile uint_io8_t*)0xB7280A43)  /*@bfbba@*/
#define PPU0_PUR18_PUR4	(*(volatile uint_io8_t*)0xB7280A44)  /*@bfbba@*/
#define PPU0_PUR18_PUR5	(*(volatile uint_io8_t*)0xB7280A45)  /*@bfbba@*/
#define PPU0_PUR18_PUR6	(*(volatile uint_io8_t*)0xB7280A46)  /*@bfbba@*/
#define PPU0_PUR18_PUR7	(*(volatile uint_io8_t*)0xB7280A47)  /*@bfbba@*/
#define PPU0_PUR18_PUR8	(*(volatile uint_io8_t*)0xB7280A48)  /*@bfbba@*/
#define PPU0_PUR18_PUR9	(*(volatile uint_io8_t*)0xB7280A49)  /*@bfbba@*/
#define PPU0_PUR18_PUR10	(*(volatile uint_io8_t*)0xB7280A4A)  /*@bfbba@*/
#define PPU0_PUR18_PUR11	(*(volatile uint_io8_t*)0xB7280A4B)  /*@bfbba@*/
#define PPU0_PUR18_PUR12	(*(volatile uint_io8_t*)0xB7280A4C)  /*@bfbba@*/
#define PPU0_PUR18_PUR13	(*(volatile uint_io8_t*)0xB7280A4D)  /*@bfbba@*/
#define PPU0_PUR18_PUR14	(*(volatile uint_io8_t*)0xB7280A4E)  /*@bfbba@*/
#define PPU0_PUR18_PUR15	(*(volatile uint_io8_t*)0xB7280A4F)  /*@bfbba@*/
#define PPU0_PUR18_PUR16	(*(volatile uint_io8_t*)0xB7280A50)  /*@bfbba@*/
#define PPU0_PUR18_PUR17	(*(volatile uint_io8_t*)0xB7280A51)  /*@bfbba@*/
#define PPU0_PUR18_PUR18	(*(volatile uint_io8_t*)0xB7280A52)  /*@bfbba@*/
#define PPU0_PUR18_PUR19	(*(volatile uint_io8_t*)0xB7280A53)  /*@bfbba@*/
#define PPU0_PUR18_PUR20	(*(volatile uint_io8_t*)0xB7280A54)  /*@bfbba@*/
#define PPU0_PUR18_PUR21	(*(volatile uint_io8_t*)0xB7280A55)  /*@bfbba@*/
#define PPU0_PUR18_PUR22	(*(volatile uint_io8_t*)0xB7280A56)  /*@bfbba@*/
#define PPU0_PUR18_PUR23	(*(volatile uint_io8_t*)0xB7280A57)  /*@bfbba@*/
#define PPU0_PUR18_PUR24	(*(volatile uint_io8_t*)0xB7280A58)  /*@bfbba@*/
#define PPU0_PUR18_PUR25	(*(volatile uint_io8_t*)0xB7280A59)  /*@bfbba@*/
#define PPU0_PUR18_PUR26	(*(volatile uint_io8_t*)0xB7280A5A)  /*@bfbba@*/
#define PPU0_PUR18_PUR27	(*(volatile uint_io8_t*)0xB7280A5B)  /*@bfbba@*/
#define PPU0_PUR18_PUR28	(*(volatile uint_io8_t*)0xB7280A5C)  /*@bfbba@*/
#define PPU0_PUR18_PUR29	(*(volatile uint_io8_t*)0xB7280A5D)  /*@bfbba@*/
#define PPU0_PUR18_PUR30	(*(volatile uint_io8_t*)0xB7280A5E)  /*@bfbba@*/
#define PPU0_PUR18_PUR31	(*(volatile uint_io8_t*)0xB7280A5F)  /*@bfbba@*/

#define PPU0_PUR19	(PPU0.unPUR19.u32Register)  /*@rg@*/
#define PPU0_PUR19_PUR0	(*(volatile uint_io8_t*)0xB7280A60)  /*@bfbba@*/
#define PPU0_PUR19_PUR1	(*(volatile uint_io8_t*)0xB7280A61)  /*@bfbba@*/
#define PPU0_PUR19_PUR2	(*(volatile uint_io8_t*)0xB7280A62)  /*@bfbba@*/
#define PPU0_PUR19_PUR3	(*(volatile uint_io8_t*)0xB7280A63)  /*@bfbba@*/
#define PPU0_PUR19_PUR4	(*(volatile uint_io8_t*)0xB7280A64)  /*@bfbba@*/
#define PPU0_PUR19_PUR5	(*(volatile uint_io8_t*)0xB7280A65)  /*@bfbba@*/
#define PPU0_PUR19_PUR6	(*(volatile uint_io8_t*)0xB7280A66)  /*@bfbba@*/
#define PPU0_PUR19_PUR7	(*(volatile uint_io8_t*)0xB7280A67)  /*@bfbba@*/
#define PPU0_PUR19_PUR8	(*(volatile uint_io8_t*)0xB7280A68)  /*@bfbba@*/
#define PPU0_PUR19_PUR9	(*(volatile uint_io8_t*)0xB7280A69)  /*@bfbba@*/
#define PPU0_PUR19_PUR10	(*(volatile uint_io8_t*)0xB7280A6A)  /*@bfbba@*/
#define PPU0_PUR19_PUR11	(*(volatile uint_io8_t*)0xB7280A6B)  /*@bfbba@*/
#define PPU0_PUR19_PUR12	(*(volatile uint_io8_t*)0xB7280A6C)  /*@bfbba@*/
#define PPU0_PUR19_PUR13	(*(volatile uint_io8_t*)0xB7280A6D)  /*@bfbba@*/
#define PPU0_PUR19_PUR14	(*(volatile uint_io8_t*)0xB7280A6E)  /*@bfbba@*/
#define PPU0_PUR19_PUR15	(*(volatile uint_io8_t*)0xB7280A6F)  /*@bfbba@*/
#define PPU0_PUR19_PUR16	(*(volatile uint_io8_t*)0xB7280A70)  /*@bfbba@*/
#define PPU0_PUR19_PUR17	(*(volatile uint_io8_t*)0xB7280A71)  /*@bfbba@*/
#define PPU0_PUR19_PUR18	(*(volatile uint_io8_t*)0xB7280A72)  /*@bfbba@*/
#define PPU0_PUR19_PUR19	(*(volatile uint_io8_t*)0xB7280A73)  /*@bfbba@*/
#define PPU0_PUR19_PUR20	(*(volatile uint_io8_t*)0xB7280A74)  /*@bfbba@*/
#define PPU0_PUR19_PUR21	(*(volatile uint_io8_t*)0xB7280A75)  /*@bfbba@*/
#define PPU0_PUR19_PUR22	(*(volatile uint_io8_t*)0xB7280A76)  /*@bfbba@*/
#define PPU0_PUR19_PUR23	(*(volatile uint_io8_t*)0xB7280A77)  /*@bfbba@*/
#define PPU0_PUR19_PUR24	(*(volatile uint_io8_t*)0xB7280A78)  /*@bfbba@*/
#define PPU0_PUR19_PUR25	(*(volatile uint_io8_t*)0xB7280A79)  /*@bfbba@*/
#define PPU0_PUR19_PUR26	(*(volatile uint_io8_t*)0xB7280A7A)  /*@bfbba@*/
#define PPU0_PUR19_PUR27	(*(volatile uint_io8_t*)0xB7280A7B)  /*@bfbba@*/
#define PPU0_PUR19_PUR28	(*(volatile uint_io8_t*)0xB7280A7C)  /*@bfbba@*/
#define PPU0_PUR19_PUR29	(*(volatile uint_io8_t*)0xB7280A7D)  /*@bfbba@*/
#define PPU0_PUR19_PUR30	(*(volatile uint_io8_t*)0xB7280A7E)  /*@bfbba@*/
#define PPU0_PUR19_PUR31	(*(volatile uint_io8_t*)0xB7280A7F)  /*@bfbba@*/

#define PPU0_PUR20	(PPU0.unPUR20.u32Register)  /*@rg@*/
#define PPU0_PUR20_PUR0	(*(volatile uint_io8_t*)0xB7280A80)  /*@bfbba@*/
#define PPU0_PUR20_PUR1	(*(volatile uint_io8_t*)0xB7280A81)  /*@bfbba@*/
#define PPU0_PUR20_PUR2	(*(volatile uint_io8_t*)0xB7280A82)  /*@bfbba@*/
#define PPU0_PUR20_PUR3	(*(volatile uint_io8_t*)0xB7280A83)  /*@bfbba@*/
#define PPU0_PUR20_PUR4	(*(volatile uint_io8_t*)0xB7280A84)  /*@bfbba@*/
#define PPU0_PUR20_PUR5	(*(volatile uint_io8_t*)0xB7280A85)  /*@bfbba@*/
#define PPU0_PUR20_PUR6	(*(volatile uint_io8_t*)0xB7280A86)  /*@bfbba@*/
#define PPU0_PUR20_PUR7	(*(volatile uint_io8_t*)0xB7280A87)  /*@bfbba@*/
#define PPU0_PUR20_PUR8	(*(volatile uint_io8_t*)0xB7280A88)  /*@bfbba@*/
#define PPU0_PUR20_PUR9	(*(volatile uint_io8_t*)0xB7280A89)  /*@bfbba@*/
#define PPU0_PUR20_PUR10	(*(volatile uint_io8_t*)0xB7280A8A)  /*@bfbba@*/
#define PPU0_PUR20_PUR11	(*(volatile uint_io8_t*)0xB7280A8B)  /*@bfbba@*/
#define PPU0_PUR20_PUR12	(*(volatile uint_io8_t*)0xB7280A8C)  /*@bfbba@*/
#define PPU0_PUR20_PUR13	(*(volatile uint_io8_t*)0xB7280A8D)  /*@bfbba@*/
#define PPU0_PUR20_PUR14	(*(volatile uint_io8_t*)0xB7280A8E)  /*@bfbba@*/
#define PPU0_PUR20_PUR15	(*(volatile uint_io8_t*)0xB7280A8F)  /*@bfbba@*/
#define PPU0_PUR20_PUR16	(*(volatile uint_io8_t*)0xB7280A90)  /*@bfbba@*/
#define PPU0_PUR20_PUR17	(*(volatile uint_io8_t*)0xB7280A91)  /*@bfbba@*/
#define PPU0_PUR20_PUR18	(*(volatile uint_io8_t*)0xB7280A92)  /*@bfbba@*/
#define PPU0_PUR20_PUR19	(*(volatile uint_io8_t*)0xB7280A93)  /*@bfbba@*/
#define PPU0_PUR20_PUR20	(*(volatile uint_io8_t*)0xB7280A94)  /*@bfbba@*/
#define PPU0_PUR20_PUR21	(*(volatile uint_io8_t*)0xB7280A95)  /*@bfbba@*/
#define PPU0_PUR20_PUR22	(*(volatile uint_io8_t*)0xB7280A96)  /*@bfbba@*/
#define PPU0_PUR20_PUR23	(*(volatile uint_io8_t*)0xB7280A97)  /*@bfbba@*/
#define PPU0_PUR20_PUR24	(*(volatile uint_io8_t*)0xB7280A98)  /*@bfbba@*/
#define PPU0_PUR20_PUR25	(*(volatile uint_io8_t*)0xB7280A99)  /*@bfbba@*/
#define PPU0_PUR20_PUR26	(*(volatile uint_io8_t*)0xB7280A9A)  /*@bfbba@*/
#define PPU0_PUR20_PUR27	(*(volatile uint_io8_t*)0xB7280A9B)  /*@bfbba@*/
#define PPU0_PUR20_PUR28	(*(volatile uint_io8_t*)0xB7280A9C)  /*@bfbba@*/
#define PPU0_PUR20_PUR29	(*(volatile uint_io8_t*)0xB7280A9D)  /*@bfbba@*/
#define PPU0_PUR20_PUR30	(*(volatile uint_io8_t*)0xB7280A9E)  /*@bfbba@*/
#define PPU0_PUR20_PUR31	(*(volatile uint_io8_t*)0xB7280A9F)  /*@bfbba@*/

#define PPU0_PUR21	(PPU0.unPUR21.u32Register)  /*@rg@*/
#define PPU0_PUR21_PUR0	(*(volatile uint_io8_t*)0xB7280AA0)  /*@bfbba@*/
#define PPU0_PUR21_PUR1	(*(volatile uint_io8_t*)0xB7280AA1)  /*@bfbba@*/
#define PPU0_PUR21_PUR2	(*(volatile uint_io8_t*)0xB7280AA2)  /*@bfbba@*/
#define PPU0_PUR21_PUR3	(*(volatile uint_io8_t*)0xB7280AA3)  /*@bfbba@*/
#define PPU0_PUR21_PUR4	(*(volatile uint_io8_t*)0xB7280AA4)  /*@bfbba@*/
#define PPU0_PUR21_PUR5	(*(volatile uint_io8_t*)0xB7280AA5)  /*@bfbba@*/
#define PPU0_PUR21_PUR6	(*(volatile uint_io8_t*)0xB7280AA6)  /*@bfbba@*/
#define PPU0_PUR21_PUR7	(*(volatile uint_io8_t*)0xB7280AA7)  /*@bfbba@*/
#define PPU0_PUR21_PUR8	(*(volatile uint_io8_t*)0xB7280AA8)  /*@bfbba@*/
#define PPU0_PUR21_PUR9	(*(volatile uint_io8_t*)0xB7280AA9)  /*@bfbba@*/
#define PPU0_PUR21_PUR10	(*(volatile uint_io8_t*)0xB7280AAA)  /*@bfbba@*/
#define PPU0_PUR21_PUR11	(*(volatile uint_io8_t*)0xB7280AAB)  /*@bfbba@*/
#define PPU0_PUR21_PUR12	(*(volatile uint_io8_t*)0xB7280AAC)  /*@bfbba@*/
#define PPU0_PUR21_PUR13	(*(volatile uint_io8_t*)0xB7280AAD)  /*@bfbba@*/
#define PPU0_PUR21_PUR14	(*(volatile uint_io8_t*)0xB7280AAE)  /*@bfbba@*/
#define PPU0_PUR21_PUR15	(*(volatile uint_io8_t*)0xB7280AAF)  /*@bfbba@*/
#define PPU0_PUR21_PUR16	(*(volatile uint_io8_t*)0xB7280AB0)  /*@bfbba@*/
#define PPU0_PUR21_PUR17	(*(volatile uint_io8_t*)0xB7280AB1)  /*@bfbba@*/
#define PPU0_PUR21_PUR18	(*(volatile uint_io8_t*)0xB7280AB2)  /*@bfbba@*/
#define PPU0_PUR21_PUR19	(*(volatile uint_io8_t*)0xB7280AB3)  /*@bfbba@*/
#define PPU0_PUR21_PUR20	(*(volatile uint_io8_t*)0xB7280AB4)  /*@bfbba@*/
#define PPU0_PUR21_PUR21	(*(volatile uint_io8_t*)0xB7280AB5)  /*@bfbba@*/
#define PPU0_PUR21_PUR22	(*(volatile uint_io8_t*)0xB7280AB6)  /*@bfbba@*/
#define PPU0_PUR21_PUR23	(*(volatile uint_io8_t*)0xB7280AB7)  /*@bfbba@*/
#define PPU0_PUR21_PUR24	(*(volatile uint_io8_t*)0xB7280AB8)  /*@bfbba@*/
#define PPU0_PUR21_PUR25	(*(volatile uint_io8_t*)0xB7280AB9)  /*@bfbba@*/
#define PPU0_PUR21_PUR26	(*(volatile uint_io8_t*)0xB7280ABA)  /*@bfbba@*/
#define PPU0_PUR21_PUR27	(*(volatile uint_io8_t*)0xB7280ABB)  /*@bfbba@*/
#define PPU0_PUR21_PUR28	(*(volatile uint_io8_t*)0xB7280ABC)  /*@bfbba@*/
#define PPU0_PUR21_PUR29	(*(volatile uint_io8_t*)0xB7280ABD)  /*@bfbba@*/
#define PPU0_PUR21_PUR30	(*(volatile uint_io8_t*)0xB7280ABE)  /*@bfbba@*/
#define PPU0_PUR21_PUR31	(*(volatile uint_io8_t*)0xB7280ABF)  /*@bfbba@*/

#define PPU0_PUR22	(PPU0.unPUR22.u32Register)  /*@rg@*/
#define PPU0_PUR22_PUR0	(*(volatile uint_io8_t*)0xB7280AC0)  /*@bfbba@*/
#define PPU0_PUR22_PUR1	(*(volatile uint_io8_t*)0xB7280AC1)  /*@bfbba@*/
#define PPU0_PUR22_PUR2	(*(volatile uint_io8_t*)0xB7280AC2)  /*@bfbba@*/
#define PPU0_PUR22_PUR3	(*(volatile uint_io8_t*)0xB7280AC3)  /*@bfbba@*/
#define PPU0_PUR22_PUR4	(*(volatile uint_io8_t*)0xB7280AC4)  /*@bfbba@*/
#define PPU0_PUR22_PUR5	(*(volatile uint_io8_t*)0xB7280AC5)  /*@bfbba@*/
#define PPU0_PUR22_PUR6	(*(volatile uint_io8_t*)0xB7280AC6)  /*@bfbba@*/
#define PPU0_PUR22_PUR7	(*(volatile uint_io8_t*)0xB7280AC7)  /*@bfbba@*/
#define PPU0_PUR22_PUR8	(*(volatile uint_io8_t*)0xB7280AC8)  /*@bfbba@*/
#define PPU0_PUR22_PUR9	(*(volatile uint_io8_t*)0xB7280AC9)  /*@bfbba@*/
#define PPU0_PUR22_PUR10	(*(volatile uint_io8_t*)0xB7280ACA)  /*@bfbba@*/
#define PPU0_PUR22_PUR11	(*(volatile uint_io8_t*)0xB7280ACB)  /*@bfbba@*/
#define PPU0_PUR22_PUR12	(*(volatile uint_io8_t*)0xB7280ACC)  /*@bfbba@*/
#define PPU0_PUR22_PUR13	(*(volatile uint_io8_t*)0xB7280ACD)  /*@bfbba@*/
#define PPU0_PUR22_PUR14	(*(volatile uint_io8_t*)0xB7280ACE)  /*@bfbba@*/
#define PPU0_PUR22_PUR15	(*(volatile uint_io8_t*)0xB7280ACF)  /*@bfbba@*/
#define PPU0_PUR22_PUR16	(*(volatile uint_io8_t*)0xB7280AD0)  /*@bfbba@*/
#define PPU0_PUR22_PUR17	(*(volatile uint_io8_t*)0xB7280AD1)  /*@bfbba@*/
#define PPU0_PUR22_PUR18	(*(volatile uint_io8_t*)0xB7280AD2)  /*@bfbba@*/
#define PPU0_PUR22_PUR19	(*(volatile uint_io8_t*)0xB7280AD3)  /*@bfbba@*/
#define PPU0_PUR22_PUR20	(*(volatile uint_io8_t*)0xB7280AD4)  /*@bfbba@*/
#define PPU0_PUR22_PUR21	(*(volatile uint_io8_t*)0xB7280AD5)  /*@bfbba@*/
#define PPU0_PUR22_PUR22	(*(volatile uint_io8_t*)0xB7280AD6)  /*@bfbba@*/
#define PPU0_PUR22_PUR23	(*(volatile uint_io8_t*)0xB7280AD7)  /*@bfbba@*/
#define PPU0_PUR22_PUR24	(*(volatile uint_io8_t*)0xB7280AD8)  /*@bfbba@*/
#define PPU0_PUR22_PUR25	(*(volatile uint_io8_t*)0xB7280AD9)  /*@bfbba@*/
#define PPU0_PUR22_PUR26	(*(volatile uint_io8_t*)0xB7280ADA)  /*@bfbba@*/
#define PPU0_PUR22_PUR27	(*(volatile uint_io8_t*)0xB7280ADB)  /*@bfbba@*/
#define PPU0_PUR22_PUR28	(*(volatile uint_io8_t*)0xB7280ADC)  /*@bfbba@*/
#define PPU0_PUR22_PUR29	(*(volatile uint_io8_t*)0xB7280ADD)  /*@bfbba@*/
#define PPU0_PUR22_PUR30	(*(volatile uint_io8_t*)0xB7280ADE)  /*@bfbba@*/
#define PPU0_PUR22_PUR31	(*(volatile uint_io8_t*)0xB7280ADF)  /*@bfbba@*/

#define PPU0_PUR23	(PPU0.unPUR23.u32Register)  /*@rg@*/
#define PPU0_PUR23_PUR0	(*(volatile uint_io8_t*)0xB7280AE0)  /*@bfbba@*/
#define PPU0_PUR23_PUR1	(*(volatile uint_io8_t*)0xB7280AE1)  /*@bfbba@*/
#define PPU0_PUR23_PUR2	(*(volatile uint_io8_t*)0xB7280AE2)  /*@bfbba@*/
#define PPU0_PUR23_PUR3	(*(volatile uint_io8_t*)0xB7280AE3)  /*@bfbba@*/
#define PPU0_PUR23_PUR4	(*(volatile uint_io8_t*)0xB7280AE4)  /*@bfbba@*/
#define PPU0_PUR23_PUR5	(*(volatile uint_io8_t*)0xB7280AE5)  /*@bfbba@*/
#define PPU0_PUR23_PUR6	(*(volatile uint_io8_t*)0xB7280AE6)  /*@bfbba@*/
#define PPU0_PUR23_PUR7	(*(volatile uint_io8_t*)0xB7280AE7)  /*@bfbba@*/
#define PPU0_PUR23_PUR8	(*(volatile uint_io8_t*)0xB7280AE8)  /*@bfbba@*/
#define PPU0_PUR23_PUR9	(*(volatile uint_io8_t*)0xB7280AE9)  /*@bfbba@*/
#define PPU0_PUR23_PUR10	(*(volatile uint_io8_t*)0xB7280AEA)  /*@bfbba@*/
#define PPU0_PUR23_PUR11	(*(volatile uint_io8_t*)0xB7280AEB)  /*@bfbba@*/
#define PPU0_PUR23_PUR12	(*(volatile uint_io8_t*)0xB7280AEC)  /*@bfbba@*/
#define PPU0_PUR23_PUR13	(*(volatile uint_io8_t*)0xB7280AED)  /*@bfbba@*/
#define PPU0_PUR23_PUR14	(*(volatile uint_io8_t*)0xB7280AEE)  /*@bfbba@*/
#define PPU0_PUR23_PUR15	(*(volatile uint_io8_t*)0xB7280AEF)  /*@bfbba@*/
#define PPU0_PUR23_PUR16	(*(volatile uint_io8_t*)0xB7280AF0)  /*@bfbba@*/
#define PPU0_PUR23_PUR17	(*(volatile uint_io8_t*)0xB7280AF1)  /*@bfbba@*/
#define PPU0_PUR23_PUR18	(*(volatile uint_io8_t*)0xB7280AF2)  /*@bfbba@*/
#define PPU0_PUR23_PUR19	(*(volatile uint_io8_t*)0xB7280AF3)  /*@bfbba@*/
#define PPU0_PUR23_PUR20	(*(volatile uint_io8_t*)0xB7280AF4)  /*@bfbba@*/
#define PPU0_PUR23_PUR21	(*(volatile uint_io8_t*)0xB7280AF5)  /*@bfbba@*/
#define PPU0_PUR23_PUR22	(*(volatile uint_io8_t*)0xB7280AF6)  /*@bfbba@*/
#define PPU0_PUR23_PUR23	(*(volatile uint_io8_t*)0xB7280AF7)  /*@bfbba@*/
#define PPU0_PUR23_PUR24	(*(volatile uint_io8_t*)0xB7280AF8)  /*@bfbba@*/
#define PPU0_PUR23_PUR25	(*(volatile uint_io8_t*)0xB7280AF9)  /*@bfbba@*/
#define PPU0_PUR23_PUR26	(*(volatile uint_io8_t*)0xB7280AFA)  /*@bfbba@*/
#define PPU0_PUR23_PUR27	(*(volatile uint_io8_t*)0xB7280AFB)  /*@bfbba@*/
#define PPU0_PUR23_PUR28	(*(volatile uint_io8_t*)0xB7280AFC)  /*@bfbba@*/
#define PPU0_PUR23_PUR29	(*(volatile uint_io8_t*)0xB7280AFD)  /*@bfbba@*/
#define PPU0_PUR23_PUR30	(*(volatile uint_io8_t*)0xB7280AFE)  /*@bfbba@*/
#define PPU0_PUR23_PUR31	(*(volatile uint_io8_t*)0xB7280AFF)  /*@bfbba@*/

#define PPU0_PUR24	(PPU0.unPUR24.u32Register)  /*@rg@*/
#define PPU0_PUR24_PUR0	(*(volatile uint_io8_t*)0xB7280B00)  /*@bfbba@*/
#define PPU0_PUR24_PUR1	(*(volatile uint_io8_t*)0xB7280B01)  /*@bfbba@*/
#define PPU0_PUR24_PUR2	(*(volatile uint_io8_t*)0xB7280B02)  /*@bfbba@*/
#define PPU0_PUR24_PUR3	(*(volatile uint_io8_t*)0xB7280B03)  /*@bfbba@*/
#define PPU0_PUR24_PUR4	(*(volatile uint_io8_t*)0xB7280B04)  /*@bfbba@*/
#define PPU0_PUR24_PUR5	(*(volatile uint_io8_t*)0xB7280B05)  /*@bfbba@*/
#define PPU0_PUR24_PUR6	(*(volatile uint_io8_t*)0xB7280B06)  /*@bfbba@*/
#define PPU0_PUR24_PUR7	(*(volatile uint_io8_t*)0xB7280B07)  /*@bfbba@*/
#define PPU0_PUR24_PUR8	(*(volatile uint_io8_t*)0xB7280B08)  /*@bfbba@*/
#define PPU0_PUR24_PUR9	(*(volatile uint_io8_t*)0xB7280B09)  /*@bfbba@*/
#define PPU0_PUR24_PUR10	(*(volatile uint_io8_t*)0xB7280B0A)  /*@bfbba@*/
#define PPU0_PUR24_PUR11	(*(volatile uint_io8_t*)0xB7280B0B)  /*@bfbba@*/
#define PPU0_PUR24_PUR12	(*(volatile uint_io8_t*)0xB7280B0C)  /*@bfbba@*/
#define PPU0_PUR24_PUR13	(*(volatile uint_io8_t*)0xB7280B0D)  /*@bfbba@*/
#define PPU0_PUR24_PUR14	(*(volatile uint_io8_t*)0xB7280B0E)  /*@bfbba@*/
#define PPU0_PUR24_PUR15	(*(volatile uint_io8_t*)0xB7280B0F)  /*@bfbba@*/
#define PPU0_PUR24_PUR16	(*(volatile uint_io8_t*)0xB7280B10)  /*@bfbba@*/
#define PPU0_PUR24_PUR17	(*(volatile uint_io8_t*)0xB7280B11)  /*@bfbba@*/
#define PPU0_PUR24_PUR18	(*(volatile uint_io8_t*)0xB7280B12)  /*@bfbba@*/
#define PPU0_PUR24_PUR19	(*(volatile uint_io8_t*)0xB7280B13)  /*@bfbba@*/
#define PPU0_PUR24_PUR20	(*(volatile uint_io8_t*)0xB7280B14)  /*@bfbba@*/
#define PPU0_PUR24_PUR21	(*(volatile uint_io8_t*)0xB7280B15)  /*@bfbba@*/
#define PPU0_PUR24_PUR22	(*(volatile uint_io8_t*)0xB7280B16)  /*@bfbba@*/
#define PPU0_PUR24_PUR23	(*(volatile uint_io8_t*)0xB7280B17)  /*@bfbba@*/
#define PPU0_PUR24_PUR24	(*(volatile uint_io8_t*)0xB7280B18)  /*@bfbba@*/
#define PPU0_PUR24_PUR25	(*(volatile uint_io8_t*)0xB7280B19)  /*@bfbba@*/
#define PPU0_PUR24_PUR26	(*(volatile uint_io8_t*)0xB7280B1A)  /*@bfbba@*/
#define PPU0_PUR24_PUR27	(*(volatile uint_io8_t*)0xB7280B1B)  /*@bfbba@*/
#define PPU0_PUR24_PUR28	(*(volatile uint_io8_t*)0xB7280B1C)  /*@bfbba@*/
#define PPU0_PUR24_PUR29	(*(volatile uint_io8_t*)0xB7280B1D)  /*@bfbba@*/
#define PPU0_PUR24_PUR30	(*(volatile uint_io8_t*)0xB7280B1E)  /*@bfbba@*/
#define PPU0_PUR24_PUR31	(*(volatile uint_io8_t*)0xB7280B1F)  /*@bfbba@*/

#define PPU0_PUR25	(PPU0.unPUR25.u32Register)  /*@rg@*/
#define PPU0_PUR25_PUR0	(*(volatile uint_io8_t*)0xB7280B20)  /*@bfbba@*/
#define PPU0_PUR25_PUR1	(*(volatile uint_io8_t*)0xB7280B21)  /*@bfbba@*/
#define PPU0_PUR25_PUR2	(*(volatile uint_io8_t*)0xB7280B22)  /*@bfbba@*/
#define PPU0_PUR25_PUR3	(*(volatile uint_io8_t*)0xB7280B23)  /*@bfbba@*/
#define PPU0_PUR25_PUR4	(*(volatile uint_io8_t*)0xB7280B24)  /*@bfbba@*/
#define PPU0_PUR25_PUR5	(*(volatile uint_io8_t*)0xB7280B25)  /*@bfbba@*/
#define PPU0_PUR25_PUR6	(*(volatile uint_io8_t*)0xB7280B26)  /*@bfbba@*/
#define PPU0_PUR25_PUR7	(*(volatile uint_io8_t*)0xB7280B27)  /*@bfbba@*/
#define PPU0_PUR25_PUR8	(*(volatile uint_io8_t*)0xB7280B28)  /*@bfbba@*/
#define PPU0_PUR25_PUR9	(*(volatile uint_io8_t*)0xB7280B29)  /*@bfbba@*/
#define PPU0_PUR25_PUR10	(*(volatile uint_io8_t*)0xB7280B2A)  /*@bfbba@*/
#define PPU0_PUR25_PUR11	(*(volatile uint_io8_t*)0xB7280B2B)  /*@bfbba@*/
#define PPU0_PUR25_PUR12	(*(volatile uint_io8_t*)0xB7280B2C)  /*@bfbba@*/
#define PPU0_PUR25_PUR13	(*(volatile uint_io8_t*)0xB7280B2D)  /*@bfbba@*/
#define PPU0_PUR25_PUR14	(*(volatile uint_io8_t*)0xB7280B2E)  /*@bfbba@*/
#define PPU0_PUR25_PUR15	(*(volatile uint_io8_t*)0xB7280B2F)  /*@bfbba@*/
#define PPU0_PUR25_PUR16	(*(volatile uint_io8_t*)0xB7280B30)  /*@bfbba@*/
#define PPU0_PUR25_PUR17	(*(volatile uint_io8_t*)0xB7280B31)  /*@bfbba@*/
#define PPU0_PUR25_PUR18	(*(volatile uint_io8_t*)0xB7280B32)  /*@bfbba@*/
#define PPU0_PUR25_PUR19	(*(volatile uint_io8_t*)0xB7280B33)  /*@bfbba@*/
#define PPU0_PUR25_PUR20	(*(volatile uint_io8_t*)0xB7280B34)  /*@bfbba@*/
#define PPU0_PUR25_PUR21	(*(volatile uint_io8_t*)0xB7280B35)  /*@bfbba@*/
#define PPU0_PUR25_PUR22	(*(volatile uint_io8_t*)0xB7280B36)  /*@bfbba@*/
#define PPU0_PUR25_PUR23	(*(volatile uint_io8_t*)0xB7280B37)  /*@bfbba@*/
#define PPU0_PUR25_PUR24	(*(volatile uint_io8_t*)0xB7280B38)  /*@bfbba@*/
#define PPU0_PUR25_PUR25	(*(volatile uint_io8_t*)0xB7280B39)  /*@bfbba@*/
#define PPU0_PUR25_PUR26	(*(volatile uint_io8_t*)0xB7280B3A)  /*@bfbba@*/
#define PPU0_PUR25_PUR27	(*(volatile uint_io8_t*)0xB7280B3B)  /*@bfbba@*/
#define PPU0_PUR25_PUR28	(*(volatile uint_io8_t*)0xB7280B3C)  /*@bfbba@*/
#define PPU0_PUR25_PUR29	(*(volatile uint_io8_t*)0xB7280B3D)  /*@bfbba@*/
#define PPU0_PUR25_PUR30	(*(volatile uint_io8_t*)0xB7280B3E)  /*@bfbba@*/
#define PPU0_PUR25_PUR31	(*(volatile uint_io8_t*)0xB7280B3F)  /*@bfbba@*/

#define PPU0_PUR26	(PPU0.unPUR26.u32Register)  /*@rg@*/
#define PPU0_PUR26_PUR0	(*(volatile uint_io8_t*)0xB7280B40)  /*@bfbba@*/
#define PPU0_PUR26_PUR1	(*(volatile uint_io8_t*)0xB7280B41)  /*@bfbba@*/
#define PPU0_PUR26_PUR2	(*(volatile uint_io8_t*)0xB7280B42)  /*@bfbba@*/
#define PPU0_PUR26_PUR3	(*(volatile uint_io8_t*)0xB7280B43)  /*@bfbba@*/
#define PPU0_PUR26_PUR4	(*(volatile uint_io8_t*)0xB7280B44)  /*@bfbba@*/
#define PPU0_PUR26_PUR5	(*(volatile uint_io8_t*)0xB7280B45)  /*@bfbba@*/
#define PPU0_PUR26_PUR6	(*(volatile uint_io8_t*)0xB7280B46)  /*@bfbba@*/
#define PPU0_PUR26_PUR7	(*(volatile uint_io8_t*)0xB7280B47)  /*@bfbba@*/
#define PPU0_PUR26_PUR8	(*(volatile uint_io8_t*)0xB7280B48)  /*@bfbba@*/
#define PPU0_PUR26_PUR9	(*(volatile uint_io8_t*)0xB7280B49)  /*@bfbba@*/
#define PPU0_PUR26_PUR10	(*(volatile uint_io8_t*)0xB7280B4A)  /*@bfbba@*/
#define PPU0_PUR26_PUR11	(*(volatile uint_io8_t*)0xB7280B4B)  /*@bfbba@*/
#define PPU0_PUR26_PUR12	(*(volatile uint_io8_t*)0xB7280B4C)  /*@bfbba@*/
#define PPU0_PUR26_PUR13	(*(volatile uint_io8_t*)0xB7280B4D)  /*@bfbba@*/
#define PPU0_PUR26_PUR14	(*(volatile uint_io8_t*)0xB7280B4E)  /*@bfbba@*/
#define PPU0_PUR26_PUR15	(*(volatile uint_io8_t*)0xB7280B4F)  /*@bfbba@*/
#define PPU0_PUR26_PUR16	(*(volatile uint_io8_t*)0xB7280B50)  /*@bfbba@*/
#define PPU0_PUR26_PUR17	(*(volatile uint_io8_t*)0xB7280B51)  /*@bfbba@*/
#define PPU0_PUR26_PUR18	(*(volatile uint_io8_t*)0xB7280B52)  /*@bfbba@*/
#define PPU0_PUR26_PUR19	(*(volatile uint_io8_t*)0xB7280B53)  /*@bfbba@*/
#define PPU0_PUR26_PUR20	(*(volatile uint_io8_t*)0xB7280B54)  /*@bfbba@*/
#define PPU0_PUR26_PUR21	(*(volatile uint_io8_t*)0xB7280B55)  /*@bfbba@*/
#define PPU0_PUR26_PUR22	(*(volatile uint_io8_t*)0xB7280B56)  /*@bfbba@*/
#define PPU0_PUR26_PUR23	(*(volatile uint_io8_t*)0xB7280B57)  /*@bfbba@*/
#define PPU0_PUR26_PUR24	(*(volatile uint_io8_t*)0xB7280B58)  /*@bfbba@*/
#define PPU0_PUR26_PUR25	(*(volatile uint_io8_t*)0xB7280B59)  /*@bfbba@*/
#define PPU0_PUR26_PUR26	(*(volatile uint_io8_t*)0xB7280B5A)  /*@bfbba@*/
#define PPU0_PUR26_PUR27	(*(volatile uint_io8_t*)0xB7280B5B)  /*@bfbba@*/
#define PPU0_PUR26_PUR28	(*(volatile uint_io8_t*)0xB7280B5C)  /*@bfbba@*/
#define PPU0_PUR26_PUR29	(*(volatile uint_io8_t*)0xB7280B5D)  /*@bfbba@*/
#define PPU0_PUR26_PUR30	(*(volatile uint_io8_t*)0xB7280B5E)  /*@bfbba@*/
#define PPU0_PUR26_PUR31	(*(volatile uint_io8_t*)0xB7280B5F)  /*@bfbba@*/

#define PPU0_PUR27	(PPU0.unPUR27.u32Register)  /*@rg@*/
#define PPU0_PUR27_PUR0	(*(volatile uint_io8_t*)0xB7280B60)  /*@bfbba@*/
#define PPU0_PUR27_PUR1	(*(volatile uint_io8_t*)0xB7280B61)  /*@bfbba@*/
#define PPU0_PUR27_PUR2	(*(volatile uint_io8_t*)0xB7280B62)  /*@bfbba@*/
#define PPU0_PUR27_PUR3	(*(volatile uint_io8_t*)0xB7280B63)  /*@bfbba@*/
#define PPU0_PUR27_PUR4	(*(volatile uint_io8_t*)0xB7280B64)  /*@bfbba@*/
#define PPU0_PUR27_PUR5	(*(volatile uint_io8_t*)0xB7280B65)  /*@bfbba@*/
#define PPU0_PUR27_PUR6	(*(volatile uint_io8_t*)0xB7280B66)  /*@bfbba@*/
#define PPU0_PUR27_PUR7	(*(volatile uint_io8_t*)0xB7280B67)  /*@bfbba@*/
#define PPU0_PUR27_PUR8	(*(volatile uint_io8_t*)0xB7280B68)  /*@bfbba@*/
#define PPU0_PUR27_PUR9	(*(volatile uint_io8_t*)0xB7280B69)  /*@bfbba@*/
#define PPU0_PUR27_PUR10	(*(volatile uint_io8_t*)0xB7280B6A)  /*@bfbba@*/
#define PPU0_PUR27_PUR11	(*(volatile uint_io8_t*)0xB7280B6B)  /*@bfbba@*/
#define PPU0_PUR27_PUR12	(*(volatile uint_io8_t*)0xB7280B6C)  /*@bfbba@*/
#define PPU0_PUR27_PUR13	(*(volatile uint_io8_t*)0xB7280B6D)  /*@bfbba@*/
#define PPU0_PUR27_PUR14	(*(volatile uint_io8_t*)0xB7280B6E)  /*@bfbba@*/
#define PPU0_PUR27_PUR15	(*(volatile uint_io8_t*)0xB7280B6F)  /*@bfbba@*/
#define PPU0_PUR27_PUR16	(*(volatile uint_io8_t*)0xB7280B70)  /*@bfbba@*/
#define PPU0_PUR27_PUR17	(*(volatile uint_io8_t*)0xB7280B71)  /*@bfbba@*/
#define PPU0_PUR27_PUR18	(*(volatile uint_io8_t*)0xB7280B72)  /*@bfbba@*/
#define PPU0_PUR27_PUR19	(*(volatile uint_io8_t*)0xB7280B73)  /*@bfbba@*/
#define PPU0_PUR27_PUR20	(*(volatile uint_io8_t*)0xB7280B74)  /*@bfbba@*/
#define PPU0_PUR27_PUR21	(*(volatile uint_io8_t*)0xB7280B75)  /*@bfbba@*/
#define PPU0_PUR27_PUR22	(*(volatile uint_io8_t*)0xB7280B76)  /*@bfbba@*/
#define PPU0_PUR27_PUR23	(*(volatile uint_io8_t*)0xB7280B77)  /*@bfbba@*/
#define PPU0_PUR27_PUR24	(*(volatile uint_io8_t*)0xB7280B78)  /*@bfbba@*/
#define PPU0_PUR27_PUR25	(*(volatile uint_io8_t*)0xB7280B79)  /*@bfbba@*/
#define PPU0_PUR27_PUR26	(*(volatile uint_io8_t*)0xB7280B7A)  /*@bfbba@*/
#define PPU0_PUR27_PUR27	(*(volatile uint_io8_t*)0xB7280B7B)  /*@bfbba@*/
#define PPU0_PUR27_PUR28	(*(volatile uint_io8_t*)0xB7280B7C)  /*@bfbba@*/
#define PPU0_PUR27_PUR29	(*(volatile uint_io8_t*)0xB7280B7D)  /*@bfbba@*/
#define PPU0_PUR27_PUR30	(*(volatile uint_io8_t*)0xB7280B7E)  /*@bfbba@*/
#define PPU0_PUR27_PUR31	(*(volatile uint_io8_t*)0xB7280B7F)  /*@bfbba@*/

#define PPU0_PUR28	(PPU0.unPUR28.u32Register)  /*@rg@*/
#define PPU0_PUR28_PUR0	(*(volatile uint_io8_t*)0xB7280B80)  /*@bfbba@*/
#define PPU0_PUR28_PUR1	(*(volatile uint_io8_t*)0xB7280B81)  /*@bfbba@*/
#define PPU0_PUR28_PUR2	(*(volatile uint_io8_t*)0xB7280B82)  /*@bfbba@*/
#define PPU0_PUR28_PUR3	(*(volatile uint_io8_t*)0xB7280B83)  /*@bfbba@*/
#define PPU0_PUR28_PUR4	(*(volatile uint_io8_t*)0xB7280B84)  /*@bfbba@*/
#define PPU0_PUR28_PUR5	(*(volatile uint_io8_t*)0xB7280B85)  /*@bfbba@*/
#define PPU0_PUR28_PUR6	(*(volatile uint_io8_t*)0xB7280B86)  /*@bfbba@*/
#define PPU0_PUR28_PUR7	(*(volatile uint_io8_t*)0xB7280B87)  /*@bfbba@*/
#define PPU0_PUR28_PUR8	(*(volatile uint_io8_t*)0xB7280B88)  /*@bfbba@*/
#define PPU0_PUR28_PUR9	(*(volatile uint_io8_t*)0xB7280B89)  /*@bfbba@*/
#define PPU0_PUR28_PUR10	(*(volatile uint_io8_t*)0xB7280B8A)  /*@bfbba@*/
#define PPU0_PUR28_PUR11	(*(volatile uint_io8_t*)0xB7280B8B)  /*@bfbba@*/
#define PPU0_PUR28_PUR12	(*(volatile uint_io8_t*)0xB7280B8C)  /*@bfbba@*/
#define PPU0_PUR28_PUR13	(*(volatile uint_io8_t*)0xB7280B8D)  /*@bfbba@*/
#define PPU0_PUR28_PUR14	(*(volatile uint_io8_t*)0xB7280B8E)  /*@bfbba@*/
#define PPU0_PUR28_PUR15	(*(volatile uint_io8_t*)0xB7280B8F)  /*@bfbba@*/
#define PPU0_PUR28_PUR16	(*(volatile uint_io8_t*)0xB7280B90)  /*@bfbba@*/
#define PPU0_PUR28_PUR17	(*(volatile uint_io8_t*)0xB7280B91)  /*@bfbba@*/
#define PPU0_PUR28_PUR18	(*(volatile uint_io8_t*)0xB7280B92)  /*@bfbba@*/
#define PPU0_PUR28_PUR19	(*(volatile uint_io8_t*)0xB7280B93)  /*@bfbba@*/
#define PPU0_PUR28_PUR20	(*(volatile uint_io8_t*)0xB7280B94)  /*@bfbba@*/
#define PPU0_PUR28_PUR21	(*(volatile uint_io8_t*)0xB7280B95)  /*@bfbba@*/
#define PPU0_PUR28_PUR22	(*(volatile uint_io8_t*)0xB7280B96)  /*@bfbba@*/
#define PPU0_PUR28_PUR23	(*(volatile uint_io8_t*)0xB7280B97)  /*@bfbba@*/
#define PPU0_PUR28_PUR24	(*(volatile uint_io8_t*)0xB7280B98)  /*@bfbba@*/
#define PPU0_PUR28_PUR25	(*(volatile uint_io8_t*)0xB7280B99)  /*@bfbba@*/
#define PPU0_PUR28_PUR26	(*(volatile uint_io8_t*)0xB7280B9A)  /*@bfbba@*/
#define PPU0_PUR28_PUR27	(*(volatile uint_io8_t*)0xB7280B9B)  /*@bfbba@*/
#define PPU0_PUR28_PUR28	(*(volatile uint_io8_t*)0xB7280B9C)  /*@bfbba@*/
#define PPU0_PUR28_PUR29	(*(volatile uint_io8_t*)0xB7280B9D)  /*@bfbba@*/
#define PPU0_PUR28_PUR30	(*(volatile uint_io8_t*)0xB7280B9E)  /*@bfbba@*/
#define PPU0_PUR28_PUR31	(*(volatile uint_io8_t*)0xB7280B9F)  /*@bfbba@*/

#define PPU0_PUR29	(PPU0.unPUR29.u32Register)  /*@rg@*/
#define PPU0_PUR29_PUR0	(*(volatile uint_io8_t*)0xB7280BA0)  /*@bfbba@*/
#define PPU0_PUR29_PUR1	(*(volatile uint_io8_t*)0xB7280BA1)  /*@bfbba@*/
#define PPU0_PUR29_PUR2	(*(volatile uint_io8_t*)0xB7280BA2)  /*@bfbba@*/
#define PPU0_PUR29_PUR3	(*(volatile uint_io8_t*)0xB7280BA3)  /*@bfbba@*/
#define PPU0_PUR29_PUR4	(*(volatile uint_io8_t*)0xB7280BA4)  /*@bfbba@*/
#define PPU0_PUR29_PUR5	(*(volatile uint_io8_t*)0xB7280BA5)  /*@bfbba@*/
#define PPU0_PUR29_PUR6	(*(volatile uint_io8_t*)0xB7280BA6)  /*@bfbba@*/
#define PPU0_PUR29_PUR7	(*(volatile uint_io8_t*)0xB7280BA7)  /*@bfbba@*/
#define PPU0_PUR29_PUR8	(*(volatile uint_io8_t*)0xB7280BA8)  /*@bfbba@*/
#define PPU0_PUR29_PUR9	(*(volatile uint_io8_t*)0xB7280BA9)  /*@bfbba@*/
#define PPU0_PUR29_PUR10	(*(volatile uint_io8_t*)0xB7280BAA)  /*@bfbba@*/
#define PPU0_PUR29_PUR11	(*(volatile uint_io8_t*)0xB7280BAB)  /*@bfbba@*/
#define PPU0_PUR29_PUR12	(*(volatile uint_io8_t*)0xB7280BAC)  /*@bfbba@*/
#define PPU0_PUR29_PUR13	(*(volatile uint_io8_t*)0xB7280BAD)  /*@bfbba@*/
#define PPU0_PUR29_PUR14	(*(volatile uint_io8_t*)0xB7280BAE)  /*@bfbba@*/
#define PPU0_PUR29_PUR15	(*(volatile uint_io8_t*)0xB7280BAF)  /*@bfbba@*/
#define PPU0_PUR29_PUR16	(*(volatile uint_io8_t*)0xB7280BB0)  /*@bfbba@*/
#define PPU0_PUR29_PUR17	(*(volatile uint_io8_t*)0xB7280BB1)  /*@bfbba@*/
#define PPU0_PUR29_PUR18	(*(volatile uint_io8_t*)0xB7280BB2)  /*@bfbba@*/
#define PPU0_PUR29_PUR19	(*(volatile uint_io8_t*)0xB7280BB3)  /*@bfbba@*/
#define PPU0_PUR29_PUR20	(*(volatile uint_io8_t*)0xB7280BB4)  /*@bfbba@*/
#define PPU0_PUR29_PUR21	(*(volatile uint_io8_t*)0xB7280BB5)  /*@bfbba@*/
#define PPU0_PUR29_PUR22	(*(volatile uint_io8_t*)0xB7280BB6)  /*@bfbba@*/
#define PPU0_PUR29_PUR23	(*(volatile uint_io8_t*)0xB7280BB7)  /*@bfbba@*/
#define PPU0_PUR29_PUR24	(*(volatile uint_io8_t*)0xB7280BB8)  /*@bfbba@*/
#define PPU0_PUR29_PUR25	(*(volatile uint_io8_t*)0xB7280BB9)  /*@bfbba@*/
#define PPU0_PUR29_PUR26	(*(volatile uint_io8_t*)0xB7280BBA)  /*@bfbba@*/
#define PPU0_PUR29_PUR27	(*(volatile uint_io8_t*)0xB7280BBB)  /*@bfbba@*/
#define PPU0_PUR29_PUR28	(*(volatile uint_io8_t*)0xB7280BBC)  /*@bfbba@*/
#define PPU0_PUR29_PUR29	(*(volatile uint_io8_t*)0xB7280BBD)  /*@bfbba@*/
#define PPU0_PUR29_PUR30	(*(volatile uint_io8_t*)0xB7280BBE)  /*@bfbba@*/
#define PPU0_PUR29_PUR31	(*(volatile uint_io8_t*)0xB7280BBF)  /*@bfbba@*/

typedef struct stc_ppu0_purn_field{
    uint_io32_t		u1PUR0:1;
    uint_io32_t		u1PUR1:1;
    uint_io32_t		u1PUR2:1;
    uint_io32_t		u1PUR3:1;
    uint_io32_t		u1PUR4:1;
    uint_io32_t		u1PUR5:1;
    uint_io32_t		u1PUR6:1;
    uint_io32_t		u1PUR7:1;
    uint_io32_t		u1PUR8:1;
    uint_io32_t		u1PUR9:1;
    uint_io32_t		u1PUR10:1;
    uint_io32_t		u1PUR11:1;
    uint_io32_t		u1PUR12:1;
    uint_io32_t		u1PUR13:1;
    uint_io32_t		u1PUR14:1;
    uint_io32_t		u1PUR15:1;
    uint_io32_t		u1PUR16:1;
    uint_io32_t		u1PUR17:1;
    uint_io32_t		u1PUR18:1;
    uint_io32_t		u1PUR19:1;
    uint_io32_t		u1PUR20:1;
    uint_io32_t		u1PUR21:1;
    uint_io32_t		u1PUR22:1;
    uint_io32_t		u1PUR23:1;
    uint_io32_t		u1PUR24:1;
    uint_io32_t		u1PUR25:1;
    uint_io32_t		u1PUR26:1;
    uint_io32_t		u1PUR27:1;
    uint_io32_t		u1PUR28:1;
    uint_io32_t		u1PUR29:1;
    uint_io32_t		u1PUR30:1;
    uint_io32_t		u1PUR31:1;
}stc_ppu0_purn_field_t;

typedef union un_ppu0_purn{
    uint_io32_t		u32Register;
    stc_ppu0_purn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_purn_t;

/* LOCK1 */
#define PPU0_LOCK1	(PPU0.unLOCK1.u32Register)  /*@rg@*/
#define PPU0_LOCK1_L	PPU0_LOCK1  /*@bfrg@*/

typedef union un_ppu0_lock1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_lock1_t;

/* PPWA[0-29] */
#define PPU0_PPWA0	(PPU0.unPPWA0.u32Register)  /*@rg@*/
#define PPU0_PPWA0_PPWA0	(*(volatile uint_io8_t*)0xB7280C00)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA1	(*(volatile uint_io8_t*)0xB7280C01)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA2	(*(volatile uint_io8_t*)0xB7280C02)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA3	(*(volatile uint_io8_t*)0xB7280C03)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA4	(*(volatile uint_io8_t*)0xB7280C04)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA5	(*(volatile uint_io8_t*)0xB7280C05)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA6	(*(volatile uint_io8_t*)0xB7280C06)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA7	(*(volatile uint_io8_t*)0xB7280C07)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA8	(*(volatile uint_io8_t*)0xB7280C08)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA9	(*(volatile uint_io8_t*)0xB7280C09)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA10	(*(volatile uint_io8_t*)0xB7280C0A)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA11	(*(volatile uint_io8_t*)0xB7280C0B)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA12	(*(volatile uint_io8_t*)0xB7280C0C)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA13	(*(volatile uint_io8_t*)0xB7280C0D)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA14	(*(volatile uint_io8_t*)0xB7280C0E)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA15	(*(volatile uint_io8_t*)0xB7280C0F)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA16	(*(volatile uint_io8_t*)0xB7280C10)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA17	(*(volatile uint_io8_t*)0xB7280C11)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA18	(*(volatile uint_io8_t*)0xB7280C12)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA19	(*(volatile uint_io8_t*)0xB7280C13)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA20	(*(volatile uint_io8_t*)0xB7280C14)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA21	(*(volatile uint_io8_t*)0xB7280C15)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA22	(*(volatile uint_io8_t*)0xB7280C16)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA23	(*(volatile uint_io8_t*)0xB7280C17)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA24	(*(volatile uint_io8_t*)0xB7280C18)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA25	(*(volatile uint_io8_t*)0xB7280C19)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA26	(*(volatile uint_io8_t*)0xB7280C1A)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA27	(*(volatile uint_io8_t*)0xB7280C1B)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA28	(*(volatile uint_io8_t*)0xB7280C1C)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA29	(*(volatile uint_io8_t*)0xB7280C1D)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA30	(*(volatile uint_io8_t*)0xB7280C1E)  /*@bfbba@*/
#define PPU0_PPWA0_PPWA31	(*(volatile uint_io8_t*)0xB7280C1F)  /*@bfbba@*/

#define PPU0_PPWA1	(PPU0.unPPWA1.u32Register)  /*@rg@*/
#define PPU0_PPWA1_PPWA0	(*(volatile uint_io8_t*)0xB7280C20)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA1	(*(volatile uint_io8_t*)0xB7280C21)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA2	(*(volatile uint_io8_t*)0xB7280C22)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA3	(*(volatile uint_io8_t*)0xB7280C23)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA4	(*(volatile uint_io8_t*)0xB7280C24)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA5	(*(volatile uint_io8_t*)0xB7280C25)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA6	(*(volatile uint_io8_t*)0xB7280C26)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA7	(*(volatile uint_io8_t*)0xB7280C27)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA8	(*(volatile uint_io8_t*)0xB7280C28)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA9	(*(volatile uint_io8_t*)0xB7280C29)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA10	(*(volatile uint_io8_t*)0xB7280C2A)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA11	(*(volatile uint_io8_t*)0xB7280C2B)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA12	(*(volatile uint_io8_t*)0xB7280C2C)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA13	(*(volatile uint_io8_t*)0xB7280C2D)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA14	(*(volatile uint_io8_t*)0xB7280C2E)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA15	(*(volatile uint_io8_t*)0xB7280C2F)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA16	(*(volatile uint_io8_t*)0xB7280C30)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA17	(*(volatile uint_io8_t*)0xB7280C31)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA18	(*(volatile uint_io8_t*)0xB7280C32)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA19	(*(volatile uint_io8_t*)0xB7280C33)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA20	(*(volatile uint_io8_t*)0xB7280C34)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA21	(*(volatile uint_io8_t*)0xB7280C35)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA22	(*(volatile uint_io8_t*)0xB7280C36)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA23	(*(volatile uint_io8_t*)0xB7280C37)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA24	(*(volatile uint_io8_t*)0xB7280C38)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA25	(*(volatile uint_io8_t*)0xB7280C39)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA26	(*(volatile uint_io8_t*)0xB7280C3A)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA27	(*(volatile uint_io8_t*)0xB7280C3B)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA28	(*(volatile uint_io8_t*)0xB7280C3C)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA29	(*(volatile uint_io8_t*)0xB7280C3D)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA30	(*(volatile uint_io8_t*)0xB7280C3E)  /*@bfbba@*/
#define PPU0_PPWA1_PPWA31	(*(volatile uint_io8_t*)0xB7280C3F)  /*@bfbba@*/

#define PPU0_PPWA2	(PPU0.unPPWA2.u32Register)  /*@rg@*/
#define PPU0_PPWA2_PPWA0	(*(volatile uint_io8_t*)0xB7280C40)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA1	(*(volatile uint_io8_t*)0xB7280C41)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA2	(*(volatile uint_io8_t*)0xB7280C42)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA3	(*(volatile uint_io8_t*)0xB7280C43)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA4	(*(volatile uint_io8_t*)0xB7280C44)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA5	(*(volatile uint_io8_t*)0xB7280C45)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA6	(*(volatile uint_io8_t*)0xB7280C46)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA7	(*(volatile uint_io8_t*)0xB7280C47)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA8	(*(volatile uint_io8_t*)0xB7280C48)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA9	(*(volatile uint_io8_t*)0xB7280C49)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA10	(*(volatile uint_io8_t*)0xB7280C4A)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA11	(*(volatile uint_io8_t*)0xB7280C4B)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA12	(*(volatile uint_io8_t*)0xB7280C4C)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA13	(*(volatile uint_io8_t*)0xB7280C4D)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA14	(*(volatile uint_io8_t*)0xB7280C4E)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA15	(*(volatile uint_io8_t*)0xB7280C4F)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA16	(*(volatile uint_io8_t*)0xB7280C50)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA17	(*(volatile uint_io8_t*)0xB7280C51)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA18	(*(volatile uint_io8_t*)0xB7280C52)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA19	(*(volatile uint_io8_t*)0xB7280C53)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA20	(*(volatile uint_io8_t*)0xB7280C54)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA21	(*(volatile uint_io8_t*)0xB7280C55)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA22	(*(volatile uint_io8_t*)0xB7280C56)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA23	(*(volatile uint_io8_t*)0xB7280C57)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA24	(*(volatile uint_io8_t*)0xB7280C58)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA25	(*(volatile uint_io8_t*)0xB7280C59)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA26	(*(volatile uint_io8_t*)0xB7280C5A)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA27	(*(volatile uint_io8_t*)0xB7280C5B)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA28	(*(volatile uint_io8_t*)0xB7280C5C)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA29	(*(volatile uint_io8_t*)0xB7280C5D)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA30	(*(volatile uint_io8_t*)0xB7280C5E)  /*@bfbba@*/
#define PPU0_PPWA2_PPWA31	(*(volatile uint_io8_t*)0xB7280C5F)  /*@bfbba@*/

#define PPU0_PPWA3	(PPU0.unPPWA3.u32Register)  /*@rg@*/
#define PPU0_PPWA3_PPWA0	(*(volatile uint_io8_t*)0xB7280C60)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA1	(*(volatile uint_io8_t*)0xB7280C61)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA2	(*(volatile uint_io8_t*)0xB7280C62)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA3	(*(volatile uint_io8_t*)0xB7280C63)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA4	(*(volatile uint_io8_t*)0xB7280C64)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA5	(*(volatile uint_io8_t*)0xB7280C65)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA6	(*(volatile uint_io8_t*)0xB7280C66)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA7	(*(volatile uint_io8_t*)0xB7280C67)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA8	(*(volatile uint_io8_t*)0xB7280C68)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA9	(*(volatile uint_io8_t*)0xB7280C69)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA10	(*(volatile uint_io8_t*)0xB7280C6A)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA11	(*(volatile uint_io8_t*)0xB7280C6B)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA12	(*(volatile uint_io8_t*)0xB7280C6C)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA13	(*(volatile uint_io8_t*)0xB7280C6D)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA14	(*(volatile uint_io8_t*)0xB7280C6E)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA15	(*(volatile uint_io8_t*)0xB7280C6F)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA16	(*(volatile uint_io8_t*)0xB7280C70)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA17	(*(volatile uint_io8_t*)0xB7280C71)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA18	(*(volatile uint_io8_t*)0xB7280C72)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA19	(*(volatile uint_io8_t*)0xB7280C73)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA20	(*(volatile uint_io8_t*)0xB7280C74)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA21	(*(volatile uint_io8_t*)0xB7280C75)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA22	(*(volatile uint_io8_t*)0xB7280C76)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA23	(*(volatile uint_io8_t*)0xB7280C77)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA24	(*(volatile uint_io8_t*)0xB7280C78)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA25	(*(volatile uint_io8_t*)0xB7280C79)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA26	(*(volatile uint_io8_t*)0xB7280C7A)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA27	(*(volatile uint_io8_t*)0xB7280C7B)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA28	(*(volatile uint_io8_t*)0xB7280C7C)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA29	(*(volatile uint_io8_t*)0xB7280C7D)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA30	(*(volatile uint_io8_t*)0xB7280C7E)  /*@bfbba@*/
#define PPU0_PPWA3_PPWA31	(*(volatile uint_io8_t*)0xB7280C7F)  /*@bfbba@*/

#define PPU0_PPWA4	(PPU0.unPPWA4.u32Register)  /*@rg@*/
#define PPU0_PPWA4_PPWA0	(*(volatile uint_io8_t*)0xB7280C80)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA1	(*(volatile uint_io8_t*)0xB7280C81)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA2	(*(volatile uint_io8_t*)0xB7280C82)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA3	(*(volatile uint_io8_t*)0xB7280C83)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA4	(*(volatile uint_io8_t*)0xB7280C84)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA5	(*(volatile uint_io8_t*)0xB7280C85)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA6	(*(volatile uint_io8_t*)0xB7280C86)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA7	(*(volatile uint_io8_t*)0xB7280C87)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA8	(*(volatile uint_io8_t*)0xB7280C88)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA9	(*(volatile uint_io8_t*)0xB7280C89)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA10	(*(volatile uint_io8_t*)0xB7280C8A)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA11	(*(volatile uint_io8_t*)0xB7280C8B)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA12	(*(volatile uint_io8_t*)0xB7280C8C)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA13	(*(volatile uint_io8_t*)0xB7280C8D)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA14	(*(volatile uint_io8_t*)0xB7280C8E)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA15	(*(volatile uint_io8_t*)0xB7280C8F)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA16	(*(volatile uint_io8_t*)0xB7280C90)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA17	(*(volatile uint_io8_t*)0xB7280C91)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA18	(*(volatile uint_io8_t*)0xB7280C92)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA19	(*(volatile uint_io8_t*)0xB7280C93)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA20	(*(volatile uint_io8_t*)0xB7280C94)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA21	(*(volatile uint_io8_t*)0xB7280C95)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA22	(*(volatile uint_io8_t*)0xB7280C96)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA23	(*(volatile uint_io8_t*)0xB7280C97)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA24	(*(volatile uint_io8_t*)0xB7280C98)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA25	(*(volatile uint_io8_t*)0xB7280C99)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA26	(*(volatile uint_io8_t*)0xB7280C9A)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA27	(*(volatile uint_io8_t*)0xB7280C9B)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA28	(*(volatile uint_io8_t*)0xB7280C9C)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA29	(*(volatile uint_io8_t*)0xB7280C9D)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA30	(*(volatile uint_io8_t*)0xB7280C9E)  /*@bfbba@*/
#define PPU0_PPWA4_PPWA31	(*(volatile uint_io8_t*)0xB7280C9F)  /*@bfbba@*/

#define PPU0_PPWA5	(PPU0.unPPWA5.u32Register)  /*@rg@*/
#define PPU0_PPWA5_PPWA0	(*(volatile uint_io8_t*)0xB7280CA0)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA1	(*(volatile uint_io8_t*)0xB7280CA1)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA2	(*(volatile uint_io8_t*)0xB7280CA2)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA3	(*(volatile uint_io8_t*)0xB7280CA3)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA4	(*(volatile uint_io8_t*)0xB7280CA4)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA5	(*(volatile uint_io8_t*)0xB7280CA5)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA6	(*(volatile uint_io8_t*)0xB7280CA6)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA7	(*(volatile uint_io8_t*)0xB7280CA7)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA8	(*(volatile uint_io8_t*)0xB7280CA8)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA9	(*(volatile uint_io8_t*)0xB7280CA9)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA10	(*(volatile uint_io8_t*)0xB7280CAA)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA11	(*(volatile uint_io8_t*)0xB7280CAB)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA12	(*(volatile uint_io8_t*)0xB7280CAC)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA13	(*(volatile uint_io8_t*)0xB7280CAD)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA14	(*(volatile uint_io8_t*)0xB7280CAE)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA15	(*(volatile uint_io8_t*)0xB7280CAF)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA16	(*(volatile uint_io8_t*)0xB7280CB0)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA17	(*(volatile uint_io8_t*)0xB7280CB1)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA18	(*(volatile uint_io8_t*)0xB7280CB2)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA19	(*(volatile uint_io8_t*)0xB7280CB3)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA20	(*(volatile uint_io8_t*)0xB7280CB4)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA21	(*(volatile uint_io8_t*)0xB7280CB5)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA22	(*(volatile uint_io8_t*)0xB7280CB6)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA23	(*(volatile uint_io8_t*)0xB7280CB7)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA24	(*(volatile uint_io8_t*)0xB7280CB8)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA25	(*(volatile uint_io8_t*)0xB7280CB9)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA26	(*(volatile uint_io8_t*)0xB7280CBA)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA27	(*(volatile uint_io8_t*)0xB7280CBB)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA28	(*(volatile uint_io8_t*)0xB7280CBC)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA29	(*(volatile uint_io8_t*)0xB7280CBD)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA30	(*(volatile uint_io8_t*)0xB7280CBE)  /*@bfbba@*/
#define PPU0_PPWA5_PPWA31	(*(volatile uint_io8_t*)0xB7280CBF)  /*@bfbba@*/

#define PPU0_PPWA6	(PPU0.unPPWA6.u32Register)  /*@rg@*/
#define PPU0_PPWA6_PPWA0	(*(volatile uint_io8_t*)0xB7280CC0)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA1	(*(volatile uint_io8_t*)0xB7280CC1)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA2	(*(volatile uint_io8_t*)0xB7280CC2)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA3	(*(volatile uint_io8_t*)0xB7280CC3)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA4	(*(volatile uint_io8_t*)0xB7280CC4)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA5	(*(volatile uint_io8_t*)0xB7280CC5)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA6	(*(volatile uint_io8_t*)0xB7280CC6)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA7	(*(volatile uint_io8_t*)0xB7280CC7)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA8	(*(volatile uint_io8_t*)0xB7280CC8)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA9	(*(volatile uint_io8_t*)0xB7280CC9)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA10	(*(volatile uint_io8_t*)0xB7280CCA)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA11	(*(volatile uint_io8_t*)0xB7280CCB)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA12	(*(volatile uint_io8_t*)0xB7280CCC)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA13	(*(volatile uint_io8_t*)0xB7280CCD)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA14	(*(volatile uint_io8_t*)0xB7280CCE)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA15	(*(volatile uint_io8_t*)0xB7280CCF)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA16	(*(volatile uint_io8_t*)0xB7280CD0)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA17	(*(volatile uint_io8_t*)0xB7280CD1)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA18	(*(volatile uint_io8_t*)0xB7280CD2)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA19	(*(volatile uint_io8_t*)0xB7280CD3)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA20	(*(volatile uint_io8_t*)0xB7280CD4)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA21	(*(volatile uint_io8_t*)0xB7280CD5)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA22	(*(volatile uint_io8_t*)0xB7280CD6)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA23	(*(volatile uint_io8_t*)0xB7280CD7)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA24	(*(volatile uint_io8_t*)0xB7280CD8)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA25	(*(volatile uint_io8_t*)0xB7280CD9)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA26	(*(volatile uint_io8_t*)0xB7280CDA)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA27	(*(volatile uint_io8_t*)0xB7280CDB)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA28	(*(volatile uint_io8_t*)0xB7280CDC)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA29	(*(volatile uint_io8_t*)0xB7280CDD)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA30	(*(volatile uint_io8_t*)0xB7280CDE)  /*@bfbba@*/
#define PPU0_PPWA6_PPWA31	(*(volatile uint_io8_t*)0xB7280CDF)  /*@bfbba@*/

#define PPU0_PPWA7	(PPU0.unPPWA7.u32Register)  /*@rg@*/
#define PPU0_PPWA7_PPWA0	(*(volatile uint_io8_t*)0xB7280CE0)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA1	(*(volatile uint_io8_t*)0xB7280CE1)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA2	(*(volatile uint_io8_t*)0xB7280CE2)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA3	(*(volatile uint_io8_t*)0xB7280CE3)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA4	(*(volatile uint_io8_t*)0xB7280CE4)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA5	(*(volatile uint_io8_t*)0xB7280CE5)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA6	(*(volatile uint_io8_t*)0xB7280CE6)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA7	(*(volatile uint_io8_t*)0xB7280CE7)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA8	(*(volatile uint_io8_t*)0xB7280CE8)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA9	(*(volatile uint_io8_t*)0xB7280CE9)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA10	(*(volatile uint_io8_t*)0xB7280CEA)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA11	(*(volatile uint_io8_t*)0xB7280CEB)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA12	(*(volatile uint_io8_t*)0xB7280CEC)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA13	(*(volatile uint_io8_t*)0xB7280CED)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA14	(*(volatile uint_io8_t*)0xB7280CEE)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA15	(*(volatile uint_io8_t*)0xB7280CEF)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA16	(*(volatile uint_io8_t*)0xB7280CF0)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA17	(*(volatile uint_io8_t*)0xB7280CF1)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA18	(*(volatile uint_io8_t*)0xB7280CF2)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA19	(*(volatile uint_io8_t*)0xB7280CF3)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA20	(*(volatile uint_io8_t*)0xB7280CF4)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA21	(*(volatile uint_io8_t*)0xB7280CF5)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA22	(*(volatile uint_io8_t*)0xB7280CF6)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA23	(*(volatile uint_io8_t*)0xB7280CF7)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA24	(*(volatile uint_io8_t*)0xB7280CF8)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA25	(*(volatile uint_io8_t*)0xB7280CF9)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA26	(*(volatile uint_io8_t*)0xB7280CFA)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA27	(*(volatile uint_io8_t*)0xB7280CFB)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA28	(*(volatile uint_io8_t*)0xB7280CFC)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA29	(*(volatile uint_io8_t*)0xB7280CFD)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA30	(*(volatile uint_io8_t*)0xB7280CFE)  /*@bfbba@*/
#define PPU0_PPWA7_PPWA31	(*(volatile uint_io8_t*)0xB7280CFF)  /*@bfbba@*/

#define PPU0_PPWA8	(PPU0.unPPWA8.u32Register)  /*@rg@*/
#define PPU0_PPWA8_PPWA0	(*(volatile uint_io8_t*)0xB7280D00)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA1	(*(volatile uint_io8_t*)0xB7280D01)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA2	(*(volatile uint_io8_t*)0xB7280D02)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA3	(*(volatile uint_io8_t*)0xB7280D03)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA4	(*(volatile uint_io8_t*)0xB7280D04)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA5	(*(volatile uint_io8_t*)0xB7280D05)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA6	(*(volatile uint_io8_t*)0xB7280D06)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA7	(*(volatile uint_io8_t*)0xB7280D07)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA8	(*(volatile uint_io8_t*)0xB7280D08)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA9	(*(volatile uint_io8_t*)0xB7280D09)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA10	(*(volatile uint_io8_t*)0xB7280D0A)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA11	(*(volatile uint_io8_t*)0xB7280D0B)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA12	(*(volatile uint_io8_t*)0xB7280D0C)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA13	(*(volatile uint_io8_t*)0xB7280D0D)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA14	(*(volatile uint_io8_t*)0xB7280D0E)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA15	(*(volatile uint_io8_t*)0xB7280D0F)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA16	(*(volatile uint_io8_t*)0xB7280D10)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA17	(*(volatile uint_io8_t*)0xB7280D11)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA18	(*(volatile uint_io8_t*)0xB7280D12)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA19	(*(volatile uint_io8_t*)0xB7280D13)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA20	(*(volatile uint_io8_t*)0xB7280D14)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA21	(*(volatile uint_io8_t*)0xB7280D15)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA22	(*(volatile uint_io8_t*)0xB7280D16)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA23	(*(volatile uint_io8_t*)0xB7280D17)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA24	(*(volatile uint_io8_t*)0xB7280D18)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA25	(*(volatile uint_io8_t*)0xB7280D19)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA26	(*(volatile uint_io8_t*)0xB7280D1A)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA27	(*(volatile uint_io8_t*)0xB7280D1B)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA28	(*(volatile uint_io8_t*)0xB7280D1C)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA29	(*(volatile uint_io8_t*)0xB7280D1D)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA30	(*(volatile uint_io8_t*)0xB7280D1E)  /*@bfbba@*/
#define PPU0_PPWA8_PPWA31	(*(volatile uint_io8_t*)0xB7280D1F)  /*@bfbba@*/

#define PPU0_PPWA9	(PPU0.unPPWA9.u32Register)  /*@rg@*/
#define PPU0_PPWA9_PPWA0	(*(volatile uint_io8_t*)0xB7280D20)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA1	(*(volatile uint_io8_t*)0xB7280D21)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA2	(*(volatile uint_io8_t*)0xB7280D22)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA3	(*(volatile uint_io8_t*)0xB7280D23)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA4	(*(volatile uint_io8_t*)0xB7280D24)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA5	(*(volatile uint_io8_t*)0xB7280D25)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA6	(*(volatile uint_io8_t*)0xB7280D26)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA7	(*(volatile uint_io8_t*)0xB7280D27)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA8	(*(volatile uint_io8_t*)0xB7280D28)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA9	(*(volatile uint_io8_t*)0xB7280D29)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA10	(*(volatile uint_io8_t*)0xB7280D2A)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA11	(*(volatile uint_io8_t*)0xB7280D2B)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA12	(*(volatile uint_io8_t*)0xB7280D2C)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA13	(*(volatile uint_io8_t*)0xB7280D2D)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA14	(*(volatile uint_io8_t*)0xB7280D2E)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA15	(*(volatile uint_io8_t*)0xB7280D2F)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA16	(*(volatile uint_io8_t*)0xB7280D30)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA17	(*(volatile uint_io8_t*)0xB7280D31)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA18	(*(volatile uint_io8_t*)0xB7280D32)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA19	(*(volatile uint_io8_t*)0xB7280D33)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA20	(*(volatile uint_io8_t*)0xB7280D34)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA21	(*(volatile uint_io8_t*)0xB7280D35)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA22	(*(volatile uint_io8_t*)0xB7280D36)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA23	(*(volatile uint_io8_t*)0xB7280D37)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA24	(*(volatile uint_io8_t*)0xB7280D38)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA25	(*(volatile uint_io8_t*)0xB7280D39)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA26	(*(volatile uint_io8_t*)0xB7280D3A)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA27	(*(volatile uint_io8_t*)0xB7280D3B)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA28	(*(volatile uint_io8_t*)0xB7280D3C)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA29	(*(volatile uint_io8_t*)0xB7280D3D)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA30	(*(volatile uint_io8_t*)0xB7280D3E)  /*@bfbba@*/
#define PPU0_PPWA9_PPWA31	(*(volatile uint_io8_t*)0xB7280D3F)  /*@bfbba@*/

#define PPU0_PPWA10	(PPU0.unPPWA10.u32Register)  /*@rg@*/
#define PPU0_PPWA10_PPWA0	(*(volatile uint_io8_t*)0xB7280D40)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA1	(*(volatile uint_io8_t*)0xB7280D41)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA2	(*(volatile uint_io8_t*)0xB7280D42)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA3	(*(volatile uint_io8_t*)0xB7280D43)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA4	(*(volatile uint_io8_t*)0xB7280D44)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA5	(*(volatile uint_io8_t*)0xB7280D45)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA6	(*(volatile uint_io8_t*)0xB7280D46)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA7	(*(volatile uint_io8_t*)0xB7280D47)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA8	(*(volatile uint_io8_t*)0xB7280D48)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA9	(*(volatile uint_io8_t*)0xB7280D49)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA10	(*(volatile uint_io8_t*)0xB7280D4A)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA11	(*(volatile uint_io8_t*)0xB7280D4B)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA12	(*(volatile uint_io8_t*)0xB7280D4C)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA13	(*(volatile uint_io8_t*)0xB7280D4D)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA14	(*(volatile uint_io8_t*)0xB7280D4E)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA15	(*(volatile uint_io8_t*)0xB7280D4F)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA16	(*(volatile uint_io8_t*)0xB7280D50)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA17	(*(volatile uint_io8_t*)0xB7280D51)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA18	(*(volatile uint_io8_t*)0xB7280D52)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA19	(*(volatile uint_io8_t*)0xB7280D53)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA20	(*(volatile uint_io8_t*)0xB7280D54)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA21	(*(volatile uint_io8_t*)0xB7280D55)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA22	(*(volatile uint_io8_t*)0xB7280D56)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA23	(*(volatile uint_io8_t*)0xB7280D57)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA24	(*(volatile uint_io8_t*)0xB7280D58)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA25	(*(volatile uint_io8_t*)0xB7280D59)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA26	(*(volatile uint_io8_t*)0xB7280D5A)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA27	(*(volatile uint_io8_t*)0xB7280D5B)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA28	(*(volatile uint_io8_t*)0xB7280D5C)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA29	(*(volatile uint_io8_t*)0xB7280D5D)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA30	(*(volatile uint_io8_t*)0xB7280D5E)  /*@bfbba@*/
#define PPU0_PPWA10_PPWA31	(*(volatile uint_io8_t*)0xB7280D5F)  /*@bfbba@*/

#define PPU0_PPWA11	(PPU0.unPPWA11.u32Register)  /*@rg@*/
#define PPU0_PPWA11_PPWA0	(*(volatile uint_io8_t*)0xB7280D60)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA1	(*(volatile uint_io8_t*)0xB7280D61)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA2	(*(volatile uint_io8_t*)0xB7280D62)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA3	(*(volatile uint_io8_t*)0xB7280D63)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA4	(*(volatile uint_io8_t*)0xB7280D64)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA5	(*(volatile uint_io8_t*)0xB7280D65)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA6	(*(volatile uint_io8_t*)0xB7280D66)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA7	(*(volatile uint_io8_t*)0xB7280D67)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA8	(*(volatile uint_io8_t*)0xB7280D68)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA9	(*(volatile uint_io8_t*)0xB7280D69)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA10	(*(volatile uint_io8_t*)0xB7280D6A)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA11	(*(volatile uint_io8_t*)0xB7280D6B)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA12	(*(volatile uint_io8_t*)0xB7280D6C)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA13	(*(volatile uint_io8_t*)0xB7280D6D)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA14	(*(volatile uint_io8_t*)0xB7280D6E)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA15	(*(volatile uint_io8_t*)0xB7280D6F)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA16	(*(volatile uint_io8_t*)0xB7280D70)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA17	(*(volatile uint_io8_t*)0xB7280D71)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA18	(*(volatile uint_io8_t*)0xB7280D72)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA19	(*(volatile uint_io8_t*)0xB7280D73)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA20	(*(volatile uint_io8_t*)0xB7280D74)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA21	(*(volatile uint_io8_t*)0xB7280D75)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA22	(*(volatile uint_io8_t*)0xB7280D76)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA23	(*(volatile uint_io8_t*)0xB7280D77)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA24	(*(volatile uint_io8_t*)0xB7280D78)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA25	(*(volatile uint_io8_t*)0xB7280D79)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA26	(*(volatile uint_io8_t*)0xB7280D7A)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA27	(*(volatile uint_io8_t*)0xB7280D7B)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA28	(*(volatile uint_io8_t*)0xB7280D7C)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA29	(*(volatile uint_io8_t*)0xB7280D7D)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA30	(*(volatile uint_io8_t*)0xB7280D7E)  /*@bfbba@*/
#define PPU0_PPWA11_PPWA31	(*(volatile uint_io8_t*)0xB7280D7F)  /*@bfbba@*/

#define PPU0_PPWA12	(PPU0.unPPWA12.u32Register)  /*@rg@*/
#define PPU0_PPWA12_PPWA0	(*(volatile uint_io8_t*)0xB7280D80)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA1	(*(volatile uint_io8_t*)0xB7280D81)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA2	(*(volatile uint_io8_t*)0xB7280D82)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA3	(*(volatile uint_io8_t*)0xB7280D83)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA4	(*(volatile uint_io8_t*)0xB7280D84)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA5	(*(volatile uint_io8_t*)0xB7280D85)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA6	(*(volatile uint_io8_t*)0xB7280D86)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA7	(*(volatile uint_io8_t*)0xB7280D87)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA8	(*(volatile uint_io8_t*)0xB7280D88)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA9	(*(volatile uint_io8_t*)0xB7280D89)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA10	(*(volatile uint_io8_t*)0xB7280D8A)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA11	(*(volatile uint_io8_t*)0xB7280D8B)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA12	(*(volatile uint_io8_t*)0xB7280D8C)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA13	(*(volatile uint_io8_t*)0xB7280D8D)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA14	(*(volatile uint_io8_t*)0xB7280D8E)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA15	(*(volatile uint_io8_t*)0xB7280D8F)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA16	(*(volatile uint_io8_t*)0xB7280D90)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA17	(*(volatile uint_io8_t*)0xB7280D91)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA18	(*(volatile uint_io8_t*)0xB7280D92)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA19	(*(volatile uint_io8_t*)0xB7280D93)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA20	(*(volatile uint_io8_t*)0xB7280D94)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA21	(*(volatile uint_io8_t*)0xB7280D95)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA22	(*(volatile uint_io8_t*)0xB7280D96)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA23	(*(volatile uint_io8_t*)0xB7280D97)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA24	(*(volatile uint_io8_t*)0xB7280D98)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA25	(*(volatile uint_io8_t*)0xB7280D99)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA26	(*(volatile uint_io8_t*)0xB7280D9A)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA27	(*(volatile uint_io8_t*)0xB7280D9B)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA28	(*(volatile uint_io8_t*)0xB7280D9C)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA29	(*(volatile uint_io8_t*)0xB7280D9D)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA30	(*(volatile uint_io8_t*)0xB7280D9E)  /*@bfbba@*/
#define PPU0_PPWA12_PPWA31	(*(volatile uint_io8_t*)0xB7280D9F)  /*@bfbba@*/

#define PPU0_PPWA13	(PPU0.unPPWA13.u32Register)  /*@rg@*/
#define PPU0_PPWA13_PPWA0	(*(volatile uint_io8_t*)0xB7280DA0)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA1	(*(volatile uint_io8_t*)0xB7280DA1)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA2	(*(volatile uint_io8_t*)0xB7280DA2)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA3	(*(volatile uint_io8_t*)0xB7280DA3)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA4	(*(volatile uint_io8_t*)0xB7280DA4)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA5	(*(volatile uint_io8_t*)0xB7280DA5)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA6	(*(volatile uint_io8_t*)0xB7280DA6)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA7	(*(volatile uint_io8_t*)0xB7280DA7)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA8	(*(volatile uint_io8_t*)0xB7280DA8)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA9	(*(volatile uint_io8_t*)0xB7280DA9)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA10	(*(volatile uint_io8_t*)0xB7280DAA)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA11	(*(volatile uint_io8_t*)0xB7280DAB)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA12	(*(volatile uint_io8_t*)0xB7280DAC)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA13	(*(volatile uint_io8_t*)0xB7280DAD)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA14	(*(volatile uint_io8_t*)0xB7280DAE)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA15	(*(volatile uint_io8_t*)0xB7280DAF)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA16	(*(volatile uint_io8_t*)0xB7280DB0)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA17	(*(volatile uint_io8_t*)0xB7280DB1)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA18	(*(volatile uint_io8_t*)0xB7280DB2)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA19	(*(volatile uint_io8_t*)0xB7280DB3)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA20	(*(volatile uint_io8_t*)0xB7280DB4)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA21	(*(volatile uint_io8_t*)0xB7280DB5)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA22	(*(volatile uint_io8_t*)0xB7280DB6)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA23	(*(volatile uint_io8_t*)0xB7280DB7)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA24	(*(volatile uint_io8_t*)0xB7280DB8)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA25	(*(volatile uint_io8_t*)0xB7280DB9)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA26	(*(volatile uint_io8_t*)0xB7280DBA)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA27	(*(volatile uint_io8_t*)0xB7280DBB)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA28	(*(volatile uint_io8_t*)0xB7280DBC)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA29	(*(volatile uint_io8_t*)0xB7280DBD)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA30	(*(volatile uint_io8_t*)0xB7280DBE)  /*@bfbba@*/
#define PPU0_PPWA13_PPWA31	(*(volatile uint_io8_t*)0xB7280DBF)  /*@bfbba@*/

#define PPU0_PPWA14	(PPU0.unPPWA14.u32Register)  /*@rg@*/
#define PPU0_PPWA14_PPWA0	(*(volatile uint_io8_t*)0xB7280DC0)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA1	(*(volatile uint_io8_t*)0xB7280DC1)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA2	(*(volatile uint_io8_t*)0xB7280DC2)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA3	(*(volatile uint_io8_t*)0xB7280DC3)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA4	(*(volatile uint_io8_t*)0xB7280DC4)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA5	(*(volatile uint_io8_t*)0xB7280DC5)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA6	(*(volatile uint_io8_t*)0xB7280DC6)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA7	(*(volatile uint_io8_t*)0xB7280DC7)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA8	(*(volatile uint_io8_t*)0xB7280DC8)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA9	(*(volatile uint_io8_t*)0xB7280DC9)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA10	(*(volatile uint_io8_t*)0xB7280DCA)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA11	(*(volatile uint_io8_t*)0xB7280DCB)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA12	(*(volatile uint_io8_t*)0xB7280DCC)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA13	(*(volatile uint_io8_t*)0xB7280DCD)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA14	(*(volatile uint_io8_t*)0xB7280DCE)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA15	(*(volatile uint_io8_t*)0xB7280DCF)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA16	(*(volatile uint_io8_t*)0xB7280DD0)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA17	(*(volatile uint_io8_t*)0xB7280DD1)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA18	(*(volatile uint_io8_t*)0xB7280DD2)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA19	(*(volatile uint_io8_t*)0xB7280DD3)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA20	(*(volatile uint_io8_t*)0xB7280DD4)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA21	(*(volatile uint_io8_t*)0xB7280DD5)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA22	(*(volatile uint_io8_t*)0xB7280DD6)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA23	(*(volatile uint_io8_t*)0xB7280DD7)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA24	(*(volatile uint_io8_t*)0xB7280DD8)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA25	(*(volatile uint_io8_t*)0xB7280DD9)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA26	(*(volatile uint_io8_t*)0xB7280DDA)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA27	(*(volatile uint_io8_t*)0xB7280DDB)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA28	(*(volatile uint_io8_t*)0xB7280DDC)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA29	(*(volatile uint_io8_t*)0xB7280DDD)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA30	(*(volatile uint_io8_t*)0xB7280DDE)  /*@bfbba@*/
#define PPU0_PPWA14_PPWA31	(*(volatile uint_io8_t*)0xB7280DDF)  /*@bfbba@*/

#define PPU0_PPWA15	(PPU0.unPPWA15.u32Register)  /*@rg@*/
#define PPU0_PPWA15_PPWA0	(*(volatile uint_io8_t*)0xB7280DE0)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA1	(*(volatile uint_io8_t*)0xB7280DE1)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA2	(*(volatile uint_io8_t*)0xB7280DE2)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA3	(*(volatile uint_io8_t*)0xB7280DE3)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA4	(*(volatile uint_io8_t*)0xB7280DE4)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA5	(*(volatile uint_io8_t*)0xB7280DE5)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA6	(*(volatile uint_io8_t*)0xB7280DE6)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA7	(*(volatile uint_io8_t*)0xB7280DE7)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA8	(*(volatile uint_io8_t*)0xB7280DE8)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA9	(*(volatile uint_io8_t*)0xB7280DE9)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA10	(*(volatile uint_io8_t*)0xB7280DEA)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA11	(*(volatile uint_io8_t*)0xB7280DEB)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA12	(*(volatile uint_io8_t*)0xB7280DEC)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA13	(*(volatile uint_io8_t*)0xB7280DED)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA14	(*(volatile uint_io8_t*)0xB7280DEE)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA15	(*(volatile uint_io8_t*)0xB7280DEF)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA16	(*(volatile uint_io8_t*)0xB7280DF0)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA17	(*(volatile uint_io8_t*)0xB7280DF1)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA18	(*(volatile uint_io8_t*)0xB7280DF2)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA19	(*(volatile uint_io8_t*)0xB7280DF3)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA20	(*(volatile uint_io8_t*)0xB7280DF4)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA21	(*(volatile uint_io8_t*)0xB7280DF5)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA22	(*(volatile uint_io8_t*)0xB7280DF6)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA23	(*(volatile uint_io8_t*)0xB7280DF7)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA24	(*(volatile uint_io8_t*)0xB7280DF8)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA25	(*(volatile uint_io8_t*)0xB7280DF9)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA26	(*(volatile uint_io8_t*)0xB7280DFA)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA27	(*(volatile uint_io8_t*)0xB7280DFB)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA28	(*(volatile uint_io8_t*)0xB7280DFC)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA29	(*(volatile uint_io8_t*)0xB7280DFD)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA30	(*(volatile uint_io8_t*)0xB7280DFE)  /*@bfbba@*/
#define PPU0_PPWA15_PPWA31	(*(volatile uint_io8_t*)0xB7280DFF)  /*@bfbba@*/

#define PPU0_PPWA16	(PPU0.unPPWA16.u32Register)  /*@rg@*/
#define PPU0_PPWA16_PPWA0	(*(volatile uint_io8_t*)0xB7280E00)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA1	(*(volatile uint_io8_t*)0xB7280E01)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA2	(*(volatile uint_io8_t*)0xB7280E02)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA3	(*(volatile uint_io8_t*)0xB7280E03)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA4	(*(volatile uint_io8_t*)0xB7280E04)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA5	(*(volatile uint_io8_t*)0xB7280E05)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA6	(*(volatile uint_io8_t*)0xB7280E06)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA7	(*(volatile uint_io8_t*)0xB7280E07)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA8	(*(volatile uint_io8_t*)0xB7280E08)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA9	(*(volatile uint_io8_t*)0xB7280E09)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA10	(*(volatile uint_io8_t*)0xB7280E0A)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA11	(*(volatile uint_io8_t*)0xB7280E0B)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA12	(*(volatile uint_io8_t*)0xB7280E0C)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA13	(*(volatile uint_io8_t*)0xB7280E0D)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA14	(*(volatile uint_io8_t*)0xB7280E0E)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA15	(*(volatile uint_io8_t*)0xB7280E0F)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA16	(*(volatile uint_io8_t*)0xB7280E10)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA17	(*(volatile uint_io8_t*)0xB7280E11)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA18	(*(volatile uint_io8_t*)0xB7280E12)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA19	(*(volatile uint_io8_t*)0xB7280E13)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA20	(*(volatile uint_io8_t*)0xB7280E14)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA21	(*(volatile uint_io8_t*)0xB7280E15)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA22	(*(volatile uint_io8_t*)0xB7280E16)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA23	(*(volatile uint_io8_t*)0xB7280E17)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA24	(*(volatile uint_io8_t*)0xB7280E18)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA25	(*(volatile uint_io8_t*)0xB7280E19)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA26	(*(volatile uint_io8_t*)0xB7280E1A)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA27	(*(volatile uint_io8_t*)0xB7280E1B)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA28	(*(volatile uint_io8_t*)0xB7280E1C)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA29	(*(volatile uint_io8_t*)0xB7280E1D)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA30	(*(volatile uint_io8_t*)0xB7280E1E)  /*@bfbba@*/
#define PPU0_PPWA16_PPWA31	(*(volatile uint_io8_t*)0xB7280E1F)  /*@bfbba@*/

#define PPU0_PPWA17	(PPU0.unPPWA17.u32Register)  /*@rg@*/
#define PPU0_PPWA17_PPWA0	(*(volatile uint_io8_t*)0xB7280E20)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA1	(*(volatile uint_io8_t*)0xB7280E21)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA2	(*(volatile uint_io8_t*)0xB7280E22)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA3	(*(volatile uint_io8_t*)0xB7280E23)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA4	(*(volatile uint_io8_t*)0xB7280E24)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA5	(*(volatile uint_io8_t*)0xB7280E25)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA6	(*(volatile uint_io8_t*)0xB7280E26)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA7	(*(volatile uint_io8_t*)0xB7280E27)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA8	(*(volatile uint_io8_t*)0xB7280E28)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA9	(*(volatile uint_io8_t*)0xB7280E29)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA10	(*(volatile uint_io8_t*)0xB7280E2A)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA11	(*(volatile uint_io8_t*)0xB7280E2B)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA12	(*(volatile uint_io8_t*)0xB7280E2C)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA13	(*(volatile uint_io8_t*)0xB7280E2D)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA14	(*(volatile uint_io8_t*)0xB7280E2E)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA15	(*(volatile uint_io8_t*)0xB7280E2F)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA16	(*(volatile uint_io8_t*)0xB7280E30)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA17	(*(volatile uint_io8_t*)0xB7280E31)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA18	(*(volatile uint_io8_t*)0xB7280E32)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA19	(*(volatile uint_io8_t*)0xB7280E33)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA20	(*(volatile uint_io8_t*)0xB7280E34)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA21	(*(volatile uint_io8_t*)0xB7280E35)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA22	(*(volatile uint_io8_t*)0xB7280E36)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA23	(*(volatile uint_io8_t*)0xB7280E37)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA24	(*(volatile uint_io8_t*)0xB7280E38)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA25	(*(volatile uint_io8_t*)0xB7280E39)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA26	(*(volatile uint_io8_t*)0xB7280E3A)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA27	(*(volatile uint_io8_t*)0xB7280E3B)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA28	(*(volatile uint_io8_t*)0xB7280E3C)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA29	(*(volatile uint_io8_t*)0xB7280E3D)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA30	(*(volatile uint_io8_t*)0xB7280E3E)  /*@bfbba@*/
#define PPU0_PPWA17_PPWA31	(*(volatile uint_io8_t*)0xB7280E3F)  /*@bfbba@*/

#define PPU0_PPWA18	(PPU0.unPPWA18.u32Register)  /*@rg@*/
#define PPU0_PPWA18_PPWA0	(*(volatile uint_io8_t*)0xB7280E40)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA1	(*(volatile uint_io8_t*)0xB7280E41)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA2	(*(volatile uint_io8_t*)0xB7280E42)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA3	(*(volatile uint_io8_t*)0xB7280E43)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA4	(*(volatile uint_io8_t*)0xB7280E44)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA5	(*(volatile uint_io8_t*)0xB7280E45)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA6	(*(volatile uint_io8_t*)0xB7280E46)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA7	(*(volatile uint_io8_t*)0xB7280E47)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA8	(*(volatile uint_io8_t*)0xB7280E48)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA9	(*(volatile uint_io8_t*)0xB7280E49)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA10	(*(volatile uint_io8_t*)0xB7280E4A)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA11	(*(volatile uint_io8_t*)0xB7280E4B)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA12	(*(volatile uint_io8_t*)0xB7280E4C)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA13	(*(volatile uint_io8_t*)0xB7280E4D)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA14	(*(volatile uint_io8_t*)0xB7280E4E)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA15	(*(volatile uint_io8_t*)0xB7280E4F)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA16	(*(volatile uint_io8_t*)0xB7280E50)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA17	(*(volatile uint_io8_t*)0xB7280E51)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA18	(*(volatile uint_io8_t*)0xB7280E52)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA19	(*(volatile uint_io8_t*)0xB7280E53)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA20	(*(volatile uint_io8_t*)0xB7280E54)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA21	(*(volatile uint_io8_t*)0xB7280E55)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA22	(*(volatile uint_io8_t*)0xB7280E56)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA23	(*(volatile uint_io8_t*)0xB7280E57)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA24	(*(volatile uint_io8_t*)0xB7280E58)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA25	(*(volatile uint_io8_t*)0xB7280E59)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA26	(*(volatile uint_io8_t*)0xB7280E5A)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA27	(*(volatile uint_io8_t*)0xB7280E5B)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA28	(*(volatile uint_io8_t*)0xB7280E5C)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA29	(*(volatile uint_io8_t*)0xB7280E5D)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA30	(*(volatile uint_io8_t*)0xB7280E5E)  /*@bfbba@*/
#define PPU0_PPWA18_PPWA31	(*(volatile uint_io8_t*)0xB7280E5F)  /*@bfbba@*/

#define PPU0_PPWA19	(PPU0.unPPWA19.u32Register)  /*@rg@*/
#define PPU0_PPWA19_PPWA0	(*(volatile uint_io8_t*)0xB7280E60)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA1	(*(volatile uint_io8_t*)0xB7280E61)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA2	(*(volatile uint_io8_t*)0xB7280E62)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA3	(*(volatile uint_io8_t*)0xB7280E63)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA4	(*(volatile uint_io8_t*)0xB7280E64)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA5	(*(volatile uint_io8_t*)0xB7280E65)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA6	(*(volatile uint_io8_t*)0xB7280E66)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA7	(*(volatile uint_io8_t*)0xB7280E67)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA8	(*(volatile uint_io8_t*)0xB7280E68)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA9	(*(volatile uint_io8_t*)0xB7280E69)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA10	(*(volatile uint_io8_t*)0xB7280E6A)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA11	(*(volatile uint_io8_t*)0xB7280E6B)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA12	(*(volatile uint_io8_t*)0xB7280E6C)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA13	(*(volatile uint_io8_t*)0xB7280E6D)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA14	(*(volatile uint_io8_t*)0xB7280E6E)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA15	(*(volatile uint_io8_t*)0xB7280E6F)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA16	(*(volatile uint_io8_t*)0xB7280E70)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA17	(*(volatile uint_io8_t*)0xB7280E71)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA18	(*(volatile uint_io8_t*)0xB7280E72)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA19	(*(volatile uint_io8_t*)0xB7280E73)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA20	(*(volatile uint_io8_t*)0xB7280E74)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA21	(*(volatile uint_io8_t*)0xB7280E75)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA22	(*(volatile uint_io8_t*)0xB7280E76)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA23	(*(volatile uint_io8_t*)0xB7280E77)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA24	(*(volatile uint_io8_t*)0xB7280E78)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA25	(*(volatile uint_io8_t*)0xB7280E79)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA26	(*(volatile uint_io8_t*)0xB7280E7A)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA27	(*(volatile uint_io8_t*)0xB7280E7B)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA28	(*(volatile uint_io8_t*)0xB7280E7C)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA29	(*(volatile uint_io8_t*)0xB7280E7D)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA30	(*(volatile uint_io8_t*)0xB7280E7E)  /*@bfbba@*/
#define PPU0_PPWA19_PPWA31	(*(volatile uint_io8_t*)0xB7280E7F)  /*@bfbba@*/

#define PPU0_PPWA20	(PPU0.unPPWA20.u32Register)  /*@rg@*/
#define PPU0_PPWA20_PPWA0	(*(volatile uint_io8_t*)0xB7280E80)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA1	(*(volatile uint_io8_t*)0xB7280E81)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA2	(*(volatile uint_io8_t*)0xB7280E82)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA3	(*(volatile uint_io8_t*)0xB7280E83)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA4	(*(volatile uint_io8_t*)0xB7280E84)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA5	(*(volatile uint_io8_t*)0xB7280E85)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA6	(*(volatile uint_io8_t*)0xB7280E86)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA7	(*(volatile uint_io8_t*)0xB7280E87)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA8	(*(volatile uint_io8_t*)0xB7280E88)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA9	(*(volatile uint_io8_t*)0xB7280E89)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA10	(*(volatile uint_io8_t*)0xB7280E8A)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA11	(*(volatile uint_io8_t*)0xB7280E8B)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA12	(*(volatile uint_io8_t*)0xB7280E8C)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA13	(*(volatile uint_io8_t*)0xB7280E8D)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA14	(*(volatile uint_io8_t*)0xB7280E8E)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA15	(*(volatile uint_io8_t*)0xB7280E8F)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA16	(*(volatile uint_io8_t*)0xB7280E90)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA17	(*(volatile uint_io8_t*)0xB7280E91)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA18	(*(volatile uint_io8_t*)0xB7280E92)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA19	(*(volatile uint_io8_t*)0xB7280E93)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA20	(*(volatile uint_io8_t*)0xB7280E94)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA21	(*(volatile uint_io8_t*)0xB7280E95)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA22	(*(volatile uint_io8_t*)0xB7280E96)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA23	(*(volatile uint_io8_t*)0xB7280E97)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA24	(*(volatile uint_io8_t*)0xB7280E98)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA25	(*(volatile uint_io8_t*)0xB7280E99)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA26	(*(volatile uint_io8_t*)0xB7280E9A)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA27	(*(volatile uint_io8_t*)0xB7280E9B)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA28	(*(volatile uint_io8_t*)0xB7280E9C)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA29	(*(volatile uint_io8_t*)0xB7280E9D)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA30	(*(volatile uint_io8_t*)0xB7280E9E)  /*@bfbba@*/
#define PPU0_PPWA20_PPWA31	(*(volatile uint_io8_t*)0xB7280E9F)  /*@bfbba@*/

#define PPU0_PPWA21	(PPU0.unPPWA21.u32Register)  /*@rg@*/
#define PPU0_PPWA21_PPWA0	(*(volatile uint_io8_t*)0xB7280EA0)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA1	(*(volatile uint_io8_t*)0xB7280EA1)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA2	(*(volatile uint_io8_t*)0xB7280EA2)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA3	(*(volatile uint_io8_t*)0xB7280EA3)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA4	(*(volatile uint_io8_t*)0xB7280EA4)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA5	(*(volatile uint_io8_t*)0xB7280EA5)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA6	(*(volatile uint_io8_t*)0xB7280EA6)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA7	(*(volatile uint_io8_t*)0xB7280EA7)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA8	(*(volatile uint_io8_t*)0xB7280EA8)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA9	(*(volatile uint_io8_t*)0xB7280EA9)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA10	(*(volatile uint_io8_t*)0xB7280EAA)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA11	(*(volatile uint_io8_t*)0xB7280EAB)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA12	(*(volatile uint_io8_t*)0xB7280EAC)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA13	(*(volatile uint_io8_t*)0xB7280EAD)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA14	(*(volatile uint_io8_t*)0xB7280EAE)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA15	(*(volatile uint_io8_t*)0xB7280EAF)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA16	(*(volatile uint_io8_t*)0xB7280EB0)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA17	(*(volatile uint_io8_t*)0xB7280EB1)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA18	(*(volatile uint_io8_t*)0xB7280EB2)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA19	(*(volatile uint_io8_t*)0xB7280EB3)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA20	(*(volatile uint_io8_t*)0xB7280EB4)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA21	(*(volatile uint_io8_t*)0xB7280EB5)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA22	(*(volatile uint_io8_t*)0xB7280EB6)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA23	(*(volatile uint_io8_t*)0xB7280EB7)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA24	(*(volatile uint_io8_t*)0xB7280EB8)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA25	(*(volatile uint_io8_t*)0xB7280EB9)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA26	(*(volatile uint_io8_t*)0xB7280EBA)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA27	(*(volatile uint_io8_t*)0xB7280EBB)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA28	(*(volatile uint_io8_t*)0xB7280EBC)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA29	(*(volatile uint_io8_t*)0xB7280EBD)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA30	(*(volatile uint_io8_t*)0xB7280EBE)  /*@bfbba@*/
#define PPU0_PPWA21_PPWA31	(*(volatile uint_io8_t*)0xB7280EBF)  /*@bfbba@*/

#define PPU0_PPWA22	(PPU0.unPPWA22.u32Register)  /*@rg@*/
#define PPU0_PPWA22_PPWA0	(*(volatile uint_io8_t*)0xB7280EC0)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA1	(*(volatile uint_io8_t*)0xB7280EC1)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA2	(*(volatile uint_io8_t*)0xB7280EC2)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA3	(*(volatile uint_io8_t*)0xB7280EC3)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA4	(*(volatile uint_io8_t*)0xB7280EC4)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA5	(*(volatile uint_io8_t*)0xB7280EC5)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA6	(*(volatile uint_io8_t*)0xB7280EC6)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA7	(*(volatile uint_io8_t*)0xB7280EC7)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA8	(*(volatile uint_io8_t*)0xB7280EC8)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA9	(*(volatile uint_io8_t*)0xB7280EC9)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA10	(*(volatile uint_io8_t*)0xB7280ECA)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA11	(*(volatile uint_io8_t*)0xB7280ECB)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA12	(*(volatile uint_io8_t*)0xB7280ECC)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA13	(*(volatile uint_io8_t*)0xB7280ECD)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA14	(*(volatile uint_io8_t*)0xB7280ECE)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA15	(*(volatile uint_io8_t*)0xB7280ECF)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA16	(*(volatile uint_io8_t*)0xB7280ED0)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA17	(*(volatile uint_io8_t*)0xB7280ED1)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA18	(*(volatile uint_io8_t*)0xB7280ED2)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA19	(*(volatile uint_io8_t*)0xB7280ED3)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA20	(*(volatile uint_io8_t*)0xB7280ED4)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA21	(*(volatile uint_io8_t*)0xB7280ED5)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA22	(*(volatile uint_io8_t*)0xB7280ED6)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA23	(*(volatile uint_io8_t*)0xB7280ED7)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA24	(*(volatile uint_io8_t*)0xB7280ED8)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA25	(*(volatile uint_io8_t*)0xB7280ED9)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA26	(*(volatile uint_io8_t*)0xB7280EDA)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA27	(*(volatile uint_io8_t*)0xB7280EDB)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA28	(*(volatile uint_io8_t*)0xB7280EDC)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA29	(*(volatile uint_io8_t*)0xB7280EDD)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA30	(*(volatile uint_io8_t*)0xB7280EDE)  /*@bfbba@*/
#define PPU0_PPWA22_PPWA31	(*(volatile uint_io8_t*)0xB7280EDF)  /*@bfbba@*/

#define PPU0_PPWA23	(PPU0.unPPWA23.u32Register)  /*@rg@*/
#define PPU0_PPWA23_PPWA0	(*(volatile uint_io8_t*)0xB7280EE0)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA1	(*(volatile uint_io8_t*)0xB7280EE1)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA2	(*(volatile uint_io8_t*)0xB7280EE2)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA3	(*(volatile uint_io8_t*)0xB7280EE3)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA4	(*(volatile uint_io8_t*)0xB7280EE4)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA5	(*(volatile uint_io8_t*)0xB7280EE5)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA6	(*(volatile uint_io8_t*)0xB7280EE6)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA7	(*(volatile uint_io8_t*)0xB7280EE7)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA8	(*(volatile uint_io8_t*)0xB7280EE8)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA9	(*(volatile uint_io8_t*)0xB7280EE9)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA10	(*(volatile uint_io8_t*)0xB7280EEA)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA11	(*(volatile uint_io8_t*)0xB7280EEB)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA12	(*(volatile uint_io8_t*)0xB7280EEC)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA13	(*(volatile uint_io8_t*)0xB7280EED)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA14	(*(volatile uint_io8_t*)0xB7280EEE)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA15	(*(volatile uint_io8_t*)0xB7280EEF)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA16	(*(volatile uint_io8_t*)0xB7280EF0)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA17	(*(volatile uint_io8_t*)0xB7280EF1)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA18	(*(volatile uint_io8_t*)0xB7280EF2)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA19	(*(volatile uint_io8_t*)0xB7280EF3)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA20	(*(volatile uint_io8_t*)0xB7280EF4)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA21	(*(volatile uint_io8_t*)0xB7280EF5)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA22	(*(volatile uint_io8_t*)0xB7280EF6)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA23	(*(volatile uint_io8_t*)0xB7280EF7)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA24	(*(volatile uint_io8_t*)0xB7280EF8)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA25	(*(volatile uint_io8_t*)0xB7280EF9)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA26	(*(volatile uint_io8_t*)0xB7280EFA)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA27	(*(volatile uint_io8_t*)0xB7280EFB)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA28	(*(volatile uint_io8_t*)0xB7280EFC)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA29	(*(volatile uint_io8_t*)0xB7280EFD)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA30	(*(volatile uint_io8_t*)0xB7280EFE)  /*@bfbba@*/
#define PPU0_PPWA23_PPWA31	(*(volatile uint_io8_t*)0xB7280EFF)  /*@bfbba@*/

#define PPU0_PPWA24	(PPU0.unPPWA24.u32Register)  /*@rg@*/
#define PPU0_PPWA24_PPWA0	(*(volatile uint_io8_t*)0xB7280F00)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA1	(*(volatile uint_io8_t*)0xB7280F01)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA2	(*(volatile uint_io8_t*)0xB7280F02)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA3	(*(volatile uint_io8_t*)0xB7280F03)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA4	(*(volatile uint_io8_t*)0xB7280F04)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA5	(*(volatile uint_io8_t*)0xB7280F05)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA6	(*(volatile uint_io8_t*)0xB7280F06)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA7	(*(volatile uint_io8_t*)0xB7280F07)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA8	(*(volatile uint_io8_t*)0xB7280F08)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA9	(*(volatile uint_io8_t*)0xB7280F09)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA10	(*(volatile uint_io8_t*)0xB7280F0A)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA11	(*(volatile uint_io8_t*)0xB7280F0B)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA12	(*(volatile uint_io8_t*)0xB7280F0C)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA13	(*(volatile uint_io8_t*)0xB7280F0D)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA14	(*(volatile uint_io8_t*)0xB7280F0E)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA15	(*(volatile uint_io8_t*)0xB7280F0F)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA16	(*(volatile uint_io8_t*)0xB7280F10)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA17	(*(volatile uint_io8_t*)0xB7280F11)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA18	(*(volatile uint_io8_t*)0xB7280F12)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA19	(*(volatile uint_io8_t*)0xB7280F13)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA20	(*(volatile uint_io8_t*)0xB7280F14)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA21	(*(volatile uint_io8_t*)0xB7280F15)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA22	(*(volatile uint_io8_t*)0xB7280F16)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA23	(*(volatile uint_io8_t*)0xB7280F17)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA24	(*(volatile uint_io8_t*)0xB7280F18)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA25	(*(volatile uint_io8_t*)0xB7280F19)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA26	(*(volatile uint_io8_t*)0xB7280F1A)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA27	(*(volatile uint_io8_t*)0xB7280F1B)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA28	(*(volatile uint_io8_t*)0xB7280F1C)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA29	(*(volatile uint_io8_t*)0xB7280F1D)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA30	(*(volatile uint_io8_t*)0xB7280F1E)  /*@bfbba@*/
#define PPU0_PPWA24_PPWA31	(*(volatile uint_io8_t*)0xB7280F1F)  /*@bfbba@*/

#define PPU0_PPWA25	(PPU0.unPPWA25.u32Register)  /*@rg@*/
#define PPU0_PPWA25_PPWA0	(*(volatile uint_io8_t*)0xB7280F20)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA1	(*(volatile uint_io8_t*)0xB7280F21)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA2	(*(volatile uint_io8_t*)0xB7280F22)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA3	(*(volatile uint_io8_t*)0xB7280F23)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA4	(*(volatile uint_io8_t*)0xB7280F24)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA5	(*(volatile uint_io8_t*)0xB7280F25)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA6	(*(volatile uint_io8_t*)0xB7280F26)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA7	(*(volatile uint_io8_t*)0xB7280F27)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA8	(*(volatile uint_io8_t*)0xB7280F28)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA9	(*(volatile uint_io8_t*)0xB7280F29)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA10	(*(volatile uint_io8_t*)0xB7280F2A)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA11	(*(volatile uint_io8_t*)0xB7280F2B)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA12	(*(volatile uint_io8_t*)0xB7280F2C)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA13	(*(volatile uint_io8_t*)0xB7280F2D)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA14	(*(volatile uint_io8_t*)0xB7280F2E)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA15	(*(volatile uint_io8_t*)0xB7280F2F)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA16	(*(volatile uint_io8_t*)0xB7280F30)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA17	(*(volatile uint_io8_t*)0xB7280F31)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA18	(*(volatile uint_io8_t*)0xB7280F32)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA19	(*(volatile uint_io8_t*)0xB7280F33)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA20	(*(volatile uint_io8_t*)0xB7280F34)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA21	(*(volatile uint_io8_t*)0xB7280F35)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA22	(*(volatile uint_io8_t*)0xB7280F36)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA23	(*(volatile uint_io8_t*)0xB7280F37)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA24	(*(volatile uint_io8_t*)0xB7280F38)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA25	(*(volatile uint_io8_t*)0xB7280F39)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA26	(*(volatile uint_io8_t*)0xB7280F3A)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA27	(*(volatile uint_io8_t*)0xB7280F3B)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA28	(*(volatile uint_io8_t*)0xB7280F3C)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA29	(*(volatile uint_io8_t*)0xB7280F3D)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA30	(*(volatile uint_io8_t*)0xB7280F3E)  /*@bfbba@*/
#define PPU0_PPWA25_PPWA31	(*(volatile uint_io8_t*)0xB7280F3F)  /*@bfbba@*/

#define PPU0_PPWA26	(PPU0.unPPWA26.u32Register)  /*@rg@*/
#define PPU0_PPWA26_PPWA0	(*(volatile uint_io8_t*)0xB7280F40)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA1	(*(volatile uint_io8_t*)0xB7280F41)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA2	(*(volatile uint_io8_t*)0xB7280F42)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA3	(*(volatile uint_io8_t*)0xB7280F43)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA4	(*(volatile uint_io8_t*)0xB7280F44)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA5	(*(volatile uint_io8_t*)0xB7280F45)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA6	(*(volatile uint_io8_t*)0xB7280F46)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA7	(*(volatile uint_io8_t*)0xB7280F47)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA8	(*(volatile uint_io8_t*)0xB7280F48)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA9	(*(volatile uint_io8_t*)0xB7280F49)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA10	(*(volatile uint_io8_t*)0xB7280F4A)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA11	(*(volatile uint_io8_t*)0xB7280F4B)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA12	(*(volatile uint_io8_t*)0xB7280F4C)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA13	(*(volatile uint_io8_t*)0xB7280F4D)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA14	(*(volatile uint_io8_t*)0xB7280F4E)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA15	(*(volatile uint_io8_t*)0xB7280F4F)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA16	(*(volatile uint_io8_t*)0xB7280F50)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA17	(*(volatile uint_io8_t*)0xB7280F51)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA18	(*(volatile uint_io8_t*)0xB7280F52)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA19	(*(volatile uint_io8_t*)0xB7280F53)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA20	(*(volatile uint_io8_t*)0xB7280F54)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA21	(*(volatile uint_io8_t*)0xB7280F55)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA22	(*(volatile uint_io8_t*)0xB7280F56)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA23	(*(volatile uint_io8_t*)0xB7280F57)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA24	(*(volatile uint_io8_t*)0xB7280F58)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA25	(*(volatile uint_io8_t*)0xB7280F59)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA26	(*(volatile uint_io8_t*)0xB7280F5A)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA27	(*(volatile uint_io8_t*)0xB7280F5B)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA28	(*(volatile uint_io8_t*)0xB7280F5C)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA29	(*(volatile uint_io8_t*)0xB7280F5D)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA30	(*(volatile uint_io8_t*)0xB7280F5E)  /*@bfbba@*/
#define PPU0_PPWA26_PPWA31	(*(volatile uint_io8_t*)0xB7280F5F)  /*@bfbba@*/

#define PPU0_PPWA27	(PPU0.unPPWA27.u32Register)  /*@rg@*/
#define PPU0_PPWA27_PPWA0	(*(volatile uint_io8_t*)0xB7280F60)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA1	(*(volatile uint_io8_t*)0xB7280F61)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA2	(*(volatile uint_io8_t*)0xB7280F62)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA3	(*(volatile uint_io8_t*)0xB7280F63)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA4	(*(volatile uint_io8_t*)0xB7280F64)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA5	(*(volatile uint_io8_t*)0xB7280F65)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA6	(*(volatile uint_io8_t*)0xB7280F66)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA7	(*(volatile uint_io8_t*)0xB7280F67)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA8	(*(volatile uint_io8_t*)0xB7280F68)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA9	(*(volatile uint_io8_t*)0xB7280F69)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA10	(*(volatile uint_io8_t*)0xB7280F6A)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA11	(*(volatile uint_io8_t*)0xB7280F6B)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA12	(*(volatile uint_io8_t*)0xB7280F6C)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA13	(*(volatile uint_io8_t*)0xB7280F6D)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA14	(*(volatile uint_io8_t*)0xB7280F6E)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA15	(*(volatile uint_io8_t*)0xB7280F6F)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA16	(*(volatile uint_io8_t*)0xB7280F70)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA17	(*(volatile uint_io8_t*)0xB7280F71)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA18	(*(volatile uint_io8_t*)0xB7280F72)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA19	(*(volatile uint_io8_t*)0xB7280F73)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA20	(*(volatile uint_io8_t*)0xB7280F74)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA21	(*(volatile uint_io8_t*)0xB7280F75)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA22	(*(volatile uint_io8_t*)0xB7280F76)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA23	(*(volatile uint_io8_t*)0xB7280F77)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA24	(*(volatile uint_io8_t*)0xB7280F78)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA25	(*(volatile uint_io8_t*)0xB7280F79)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA26	(*(volatile uint_io8_t*)0xB7280F7A)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA27	(*(volatile uint_io8_t*)0xB7280F7B)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA28	(*(volatile uint_io8_t*)0xB7280F7C)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA29	(*(volatile uint_io8_t*)0xB7280F7D)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA30	(*(volatile uint_io8_t*)0xB7280F7E)  /*@bfbba@*/
#define PPU0_PPWA27_PPWA31	(*(volatile uint_io8_t*)0xB7280F7F)  /*@bfbba@*/

#define PPU0_PPWA28	(PPU0.unPPWA28.u32Register)  /*@rg@*/
#define PPU0_PPWA28_PPWA0	(*(volatile uint_io8_t*)0xB7280F80)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA1	(*(volatile uint_io8_t*)0xB7280F81)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA2	(*(volatile uint_io8_t*)0xB7280F82)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA3	(*(volatile uint_io8_t*)0xB7280F83)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA4	(*(volatile uint_io8_t*)0xB7280F84)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA5	(*(volatile uint_io8_t*)0xB7280F85)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA6	(*(volatile uint_io8_t*)0xB7280F86)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA7	(*(volatile uint_io8_t*)0xB7280F87)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA8	(*(volatile uint_io8_t*)0xB7280F88)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA9	(*(volatile uint_io8_t*)0xB7280F89)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA10	(*(volatile uint_io8_t*)0xB7280F8A)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA11	(*(volatile uint_io8_t*)0xB7280F8B)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA12	(*(volatile uint_io8_t*)0xB7280F8C)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA13	(*(volatile uint_io8_t*)0xB7280F8D)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA14	(*(volatile uint_io8_t*)0xB7280F8E)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA15	(*(volatile uint_io8_t*)0xB7280F8F)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA16	(*(volatile uint_io8_t*)0xB7280F90)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA17	(*(volatile uint_io8_t*)0xB7280F91)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA18	(*(volatile uint_io8_t*)0xB7280F92)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA19	(*(volatile uint_io8_t*)0xB7280F93)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA20	(*(volatile uint_io8_t*)0xB7280F94)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA21	(*(volatile uint_io8_t*)0xB7280F95)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA22	(*(volatile uint_io8_t*)0xB7280F96)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA23	(*(volatile uint_io8_t*)0xB7280F97)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA24	(*(volatile uint_io8_t*)0xB7280F98)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA25	(*(volatile uint_io8_t*)0xB7280F99)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA26	(*(volatile uint_io8_t*)0xB7280F9A)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA27	(*(volatile uint_io8_t*)0xB7280F9B)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA28	(*(volatile uint_io8_t*)0xB7280F9C)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA29	(*(volatile uint_io8_t*)0xB7280F9D)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA30	(*(volatile uint_io8_t*)0xB7280F9E)  /*@bfbba@*/
#define PPU0_PPWA28_PPWA31	(*(volatile uint_io8_t*)0xB7280F9F)  /*@bfbba@*/

#define PPU0_PPWA29	(PPU0.unPPWA29.u32Register)  /*@rg@*/
#define PPU0_PPWA29_PPWA0	(*(volatile uint_io8_t*)0xB7280FA0)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA1	(*(volatile uint_io8_t*)0xB7280FA1)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA2	(*(volatile uint_io8_t*)0xB7280FA2)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA3	(*(volatile uint_io8_t*)0xB7280FA3)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA4	(*(volatile uint_io8_t*)0xB7280FA4)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA5	(*(volatile uint_io8_t*)0xB7280FA5)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA6	(*(volatile uint_io8_t*)0xB7280FA6)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA7	(*(volatile uint_io8_t*)0xB7280FA7)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA8	(*(volatile uint_io8_t*)0xB7280FA8)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA9	(*(volatile uint_io8_t*)0xB7280FA9)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA10	(*(volatile uint_io8_t*)0xB7280FAA)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA11	(*(volatile uint_io8_t*)0xB7280FAB)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA12	(*(volatile uint_io8_t*)0xB7280FAC)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA13	(*(volatile uint_io8_t*)0xB7280FAD)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA14	(*(volatile uint_io8_t*)0xB7280FAE)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA15	(*(volatile uint_io8_t*)0xB7280FAF)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA16	(*(volatile uint_io8_t*)0xB7280FB0)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA17	(*(volatile uint_io8_t*)0xB7280FB1)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA18	(*(volatile uint_io8_t*)0xB7280FB2)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA19	(*(volatile uint_io8_t*)0xB7280FB3)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA20	(*(volatile uint_io8_t*)0xB7280FB4)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA21	(*(volatile uint_io8_t*)0xB7280FB5)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA22	(*(volatile uint_io8_t*)0xB7280FB6)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA23	(*(volatile uint_io8_t*)0xB7280FB7)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA24	(*(volatile uint_io8_t*)0xB7280FB8)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA25	(*(volatile uint_io8_t*)0xB7280FB9)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA26	(*(volatile uint_io8_t*)0xB7280FBA)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA27	(*(volatile uint_io8_t*)0xB7280FBB)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA28	(*(volatile uint_io8_t*)0xB7280FBC)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA29	(*(volatile uint_io8_t*)0xB7280FBD)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA30	(*(volatile uint_io8_t*)0xB7280FBE)  /*@bfbba@*/
#define PPU0_PPWA29_PPWA31	(*(volatile uint_io8_t*)0xB7280FBF)  /*@bfbba@*/

typedef struct stc_ppu0_ppwan_field{
    uint_io32_t		u1PPWA0:1;
    uint_io32_t		u1PPWA1:1;
    uint_io32_t		u1PPWA2:1;
    uint_io32_t		u1PPWA3:1;
    uint_io32_t		u1PPWA4:1;
    uint_io32_t		u1PPWA5:1;
    uint_io32_t		u1PPWA6:1;
    uint_io32_t		u1PPWA7:1;
    uint_io32_t		u1PPWA8:1;
    uint_io32_t		u1PPWA9:1;
    uint_io32_t		u1PPWA10:1;
    uint_io32_t		u1PPWA11:1;
    uint_io32_t		u1PPWA12:1;
    uint_io32_t		u1PPWA13:1;
    uint_io32_t		u1PPWA14:1;
    uint_io32_t		u1PPWA15:1;
    uint_io32_t		u1PPWA16:1;
    uint_io32_t		u1PPWA17:1;
    uint_io32_t		u1PPWA18:1;
    uint_io32_t		u1PPWA19:1;
    uint_io32_t		u1PPWA20:1;
    uint_io32_t		u1PPWA21:1;
    uint_io32_t		u1PPWA22:1;
    uint_io32_t		u1PPWA23:1;
    uint_io32_t		u1PPWA24:1;
    uint_io32_t		u1PPWA25:1;
    uint_io32_t		u1PPWA26:1;
    uint_io32_t		u1PPWA27:1;
    uint_io32_t		u1PPWA28:1;
    uint_io32_t		u1PPWA29:1;
    uint_io32_t		u1PPWA30:1;
    uint_io32_t		u1PPWA31:1;
}stc_ppu0_ppwan_field_t;

typedef union un_ppu0_ppwan{
    uint_io32_t		u32Register;
    stc_ppu0_ppwan_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_ppwan_t;

/* LOCK2 */
#define PPU0_LOCK2	(PPU0.unLOCK2.u32Register)  /*@rg@*/
#define PPU0_LOCK2_L	PPU0_LOCK2  /*@bfrg@*/

typedef union un_ppu0_lock2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_lock2_t;

/* PUWA[0-29] */
#define PPU0_PUWA0	(PPU0.unPUWA0.u32Register)  /*@rg@*/
#define PPU0_PUWA0_PUWA0	(*(volatile uint_io8_t*)0xB7281000)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA1	(*(volatile uint_io8_t*)0xB7281001)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA2	(*(volatile uint_io8_t*)0xB7281002)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA3	(*(volatile uint_io8_t*)0xB7281003)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA4	(*(volatile uint_io8_t*)0xB7281004)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA5	(*(volatile uint_io8_t*)0xB7281005)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA6	(*(volatile uint_io8_t*)0xB7281006)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA7	(*(volatile uint_io8_t*)0xB7281007)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA8	(*(volatile uint_io8_t*)0xB7281008)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA9	(*(volatile uint_io8_t*)0xB7281009)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA10	(*(volatile uint_io8_t*)0xB728100A)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA11	(*(volatile uint_io8_t*)0xB728100B)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA12	(*(volatile uint_io8_t*)0xB728100C)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA13	(*(volatile uint_io8_t*)0xB728100D)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA14	(*(volatile uint_io8_t*)0xB728100E)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA15	(*(volatile uint_io8_t*)0xB728100F)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA16	(*(volatile uint_io8_t*)0xB7281010)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA17	(*(volatile uint_io8_t*)0xB7281011)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA18	(*(volatile uint_io8_t*)0xB7281012)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA19	(*(volatile uint_io8_t*)0xB7281013)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA20	(*(volatile uint_io8_t*)0xB7281014)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA21	(*(volatile uint_io8_t*)0xB7281015)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA22	(*(volatile uint_io8_t*)0xB7281016)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA23	(*(volatile uint_io8_t*)0xB7281017)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA24	(*(volatile uint_io8_t*)0xB7281018)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA25	(*(volatile uint_io8_t*)0xB7281019)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA26	(*(volatile uint_io8_t*)0xB728101A)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA27	(*(volatile uint_io8_t*)0xB728101B)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA28	(*(volatile uint_io8_t*)0xB728101C)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA29	(*(volatile uint_io8_t*)0xB728101D)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA30	(*(volatile uint_io8_t*)0xB728101E)  /*@bfbba@*/
#define PPU0_PUWA0_PUWA31	(*(volatile uint_io8_t*)0xB728101F)  /*@bfbba@*/

#define PPU0_PUWA1	(PPU0.unPUWA1.u32Register)  /*@rg@*/
#define PPU0_PUWA1_PUWA0	(*(volatile uint_io8_t*)0xB7281020)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA1	(*(volatile uint_io8_t*)0xB7281021)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA2	(*(volatile uint_io8_t*)0xB7281022)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA3	(*(volatile uint_io8_t*)0xB7281023)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA4	(*(volatile uint_io8_t*)0xB7281024)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA5	(*(volatile uint_io8_t*)0xB7281025)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA6	(*(volatile uint_io8_t*)0xB7281026)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA7	(*(volatile uint_io8_t*)0xB7281027)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA8	(*(volatile uint_io8_t*)0xB7281028)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA9	(*(volatile uint_io8_t*)0xB7281029)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA10	(*(volatile uint_io8_t*)0xB728102A)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA11	(*(volatile uint_io8_t*)0xB728102B)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA12	(*(volatile uint_io8_t*)0xB728102C)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA13	(*(volatile uint_io8_t*)0xB728102D)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA14	(*(volatile uint_io8_t*)0xB728102E)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA15	(*(volatile uint_io8_t*)0xB728102F)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA16	(*(volatile uint_io8_t*)0xB7281030)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA17	(*(volatile uint_io8_t*)0xB7281031)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA18	(*(volatile uint_io8_t*)0xB7281032)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA19	(*(volatile uint_io8_t*)0xB7281033)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA20	(*(volatile uint_io8_t*)0xB7281034)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA21	(*(volatile uint_io8_t*)0xB7281035)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA22	(*(volatile uint_io8_t*)0xB7281036)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA23	(*(volatile uint_io8_t*)0xB7281037)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA24	(*(volatile uint_io8_t*)0xB7281038)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA25	(*(volatile uint_io8_t*)0xB7281039)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA26	(*(volatile uint_io8_t*)0xB728103A)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA27	(*(volatile uint_io8_t*)0xB728103B)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA28	(*(volatile uint_io8_t*)0xB728103C)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA29	(*(volatile uint_io8_t*)0xB728103D)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA30	(*(volatile uint_io8_t*)0xB728103E)  /*@bfbba@*/
#define PPU0_PUWA1_PUWA31	(*(volatile uint_io8_t*)0xB728103F)  /*@bfbba@*/

#define PPU0_PUWA2	(PPU0.unPUWA2.u32Register)  /*@rg@*/
#define PPU0_PUWA2_PUWA0	(*(volatile uint_io8_t*)0xB7281040)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA1	(*(volatile uint_io8_t*)0xB7281041)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA2	(*(volatile uint_io8_t*)0xB7281042)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA3	(*(volatile uint_io8_t*)0xB7281043)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA4	(*(volatile uint_io8_t*)0xB7281044)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA5	(*(volatile uint_io8_t*)0xB7281045)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA6	(*(volatile uint_io8_t*)0xB7281046)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA7	(*(volatile uint_io8_t*)0xB7281047)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA8	(*(volatile uint_io8_t*)0xB7281048)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA9	(*(volatile uint_io8_t*)0xB7281049)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA10	(*(volatile uint_io8_t*)0xB728104A)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA11	(*(volatile uint_io8_t*)0xB728104B)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA12	(*(volatile uint_io8_t*)0xB728104C)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA13	(*(volatile uint_io8_t*)0xB728104D)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA14	(*(volatile uint_io8_t*)0xB728104E)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA15	(*(volatile uint_io8_t*)0xB728104F)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA16	(*(volatile uint_io8_t*)0xB7281050)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA17	(*(volatile uint_io8_t*)0xB7281051)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA18	(*(volatile uint_io8_t*)0xB7281052)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA19	(*(volatile uint_io8_t*)0xB7281053)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA20	(*(volatile uint_io8_t*)0xB7281054)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA21	(*(volatile uint_io8_t*)0xB7281055)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA22	(*(volatile uint_io8_t*)0xB7281056)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA23	(*(volatile uint_io8_t*)0xB7281057)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA24	(*(volatile uint_io8_t*)0xB7281058)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA25	(*(volatile uint_io8_t*)0xB7281059)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA26	(*(volatile uint_io8_t*)0xB728105A)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA27	(*(volatile uint_io8_t*)0xB728105B)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA28	(*(volatile uint_io8_t*)0xB728105C)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA29	(*(volatile uint_io8_t*)0xB728105D)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA30	(*(volatile uint_io8_t*)0xB728105E)  /*@bfbba@*/
#define PPU0_PUWA2_PUWA31	(*(volatile uint_io8_t*)0xB728105F)  /*@bfbba@*/

#define PPU0_PUWA3	(PPU0.unPUWA3.u32Register)  /*@rg@*/
#define PPU0_PUWA3_PUWA0	(*(volatile uint_io8_t*)0xB7281060)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA1	(*(volatile uint_io8_t*)0xB7281061)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA2	(*(volatile uint_io8_t*)0xB7281062)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA3	(*(volatile uint_io8_t*)0xB7281063)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA4	(*(volatile uint_io8_t*)0xB7281064)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA5	(*(volatile uint_io8_t*)0xB7281065)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA6	(*(volatile uint_io8_t*)0xB7281066)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA7	(*(volatile uint_io8_t*)0xB7281067)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA8	(*(volatile uint_io8_t*)0xB7281068)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA9	(*(volatile uint_io8_t*)0xB7281069)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA10	(*(volatile uint_io8_t*)0xB728106A)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA11	(*(volatile uint_io8_t*)0xB728106B)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA12	(*(volatile uint_io8_t*)0xB728106C)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA13	(*(volatile uint_io8_t*)0xB728106D)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA14	(*(volatile uint_io8_t*)0xB728106E)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA15	(*(volatile uint_io8_t*)0xB728106F)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA16	(*(volatile uint_io8_t*)0xB7281070)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA17	(*(volatile uint_io8_t*)0xB7281071)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA18	(*(volatile uint_io8_t*)0xB7281072)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA19	(*(volatile uint_io8_t*)0xB7281073)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA20	(*(volatile uint_io8_t*)0xB7281074)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA21	(*(volatile uint_io8_t*)0xB7281075)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA22	(*(volatile uint_io8_t*)0xB7281076)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA23	(*(volatile uint_io8_t*)0xB7281077)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA24	(*(volatile uint_io8_t*)0xB7281078)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA25	(*(volatile uint_io8_t*)0xB7281079)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA26	(*(volatile uint_io8_t*)0xB728107A)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA27	(*(volatile uint_io8_t*)0xB728107B)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA28	(*(volatile uint_io8_t*)0xB728107C)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA29	(*(volatile uint_io8_t*)0xB728107D)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA30	(*(volatile uint_io8_t*)0xB728107E)  /*@bfbba@*/
#define PPU0_PUWA3_PUWA31	(*(volatile uint_io8_t*)0xB728107F)  /*@bfbba@*/

#define PPU0_PUWA4	(PPU0.unPUWA4.u32Register)  /*@rg@*/
#define PPU0_PUWA4_PUWA0	(*(volatile uint_io8_t*)0xB7281080)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA1	(*(volatile uint_io8_t*)0xB7281081)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA2	(*(volatile uint_io8_t*)0xB7281082)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA3	(*(volatile uint_io8_t*)0xB7281083)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA4	(*(volatile uint_io8_t*)0xB7281084)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA5	(*(volatile uint_io8_t*)0xB7281085)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA6	(*(volatile uint_io8_t*)0xB7281086)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA7	(*(volatile uint_io8_t*)0xB7281087)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA8	(*(volatile uint_io8_t*)0xB7281088)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA9	(*(volatile uint_io8_t*)0xB7281089)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA10	(*(volatile uint_io8_t*)0xB728108A)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA11	(*(volatile uint_io8_t*)0xB728108B)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA12	(*(volatile uint_io8_t*)0xB728108C)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA13	(*(volatile uint_io8_t*)0xB728108D)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA14	(*(volatile uint_io8_t*)0xB728108E)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA15	(*(volatile uint_io8_t*)0xB728108F)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA16	(*(volatile uint_io8_t*)0xB7281090)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA17	(*(volatile uint_io8_t*)0xB7281091)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA18	(*(volatile uint_io8_t*)0xB7281092)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA19	(*(volatile uint_io8_t*)0xB7281093)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA20	(*(volatile uint_io8_t*)0xB7281094)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA21	(*(volatile uint_io8_t*)0xB7281095)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA22	(*(volatile uint_io8_t*)0xB7281096)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA23	(*(volatile uint_io8_t*)0xB7281097)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA24	(*(volatile uint_io8_t*)0xB7281098)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA25	(*(volatile uint_io8_t*)0xB7281099)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA26	(*(volatile uint_io8_t*)0xB728109A)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA27	(*(volatile uint_io8_t*)0xB728109B)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA28	(*(volatile uint_io8_t*)0xB728109C)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA29	(*(volatile uint_io8_t*)0xB728109D)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA30	(*(volatile uint_io8_t*)0xB728109E)  /*@bfbba@*/
#define PPU0_PUWA4_PUWA31	(*(volatile uint_io8_t*)0xB728109F)  /*@bfbba@*/

#define PPU0_PUWA5	(PPU0.unPUWA5.u32Register)  /*@rg@*/
#define PPU0_PUWA5_PUWA0	(*(volatile uint_io8_t*)0xB72810A0)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA1	(*(volatile uint_io8_t*)0xB72810A1)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA2	(*(volatile uint_io8_t*)0xB72810A2)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA3	(*(volatile uint_io8_t*)0xB72810A3)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA4	(*(volatile uint_io8_t*)0xB72810A4)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA5	(*(volatile uint_io8_t*)0xB72810A5)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA6	(*(volatile uint_io8_t*)0xB72810A6)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA7	(*(volatile uint_io8_t*)0xB72810A7)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA8	(*(volatile uint_io8_t*)0xB72810A8)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA9	(*(volatile uint_io8_t*)0xB72810A9)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA10	(*(volatile uint_io8_t*)0xB72810AA)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA11	(*(volatile uint_io8_t*)0xB72810AB)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA12	(*(volatile uint_io8_t*)0xB72810AC)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA13	(*(volatile uint_io8_t*)0xB72810AD)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA14	(*(volatile uint_io8_t*)0xB72810AE)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA15	(*(volatile uint_io8_t*)0xB72810AF)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA16	(*(volatile uint_io8_t*)0xB72810B0)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA17	(*(volatile uint_io8_t*)0xB72810B1)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA18	(*(volatile uint_io8_t*)0xB72810B2)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA19	(*(volatile uint_io8_t*)0xB72810B3)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA20	(*(volatile uint_io8_t*)0xB72810B4)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA21	(*(volatile uint_io8_t*)0xB72810B5)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA22	(*(volatile uint_io8_t*)0xB72810B6)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA23	(*(volatile uint_io8_t*)0xB72810B7)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA24	(*(volatile uint_io8_t*)0xB72810B8)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA25	(*(volatile uint_io8_t*)0xB72810B9)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA26	(*(volatile uint_io8_t*)0xB72810BA)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA27	(*(volatile uint_io8_t*)0xB72810BB)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA28	(*(volatile uint_io8_t*)0xB72810BC)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA29	(*(volatile uint_io8_t*)0xB72810BD)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA30	(*(volatile uint_io8_t*)0xB72810BE)  /*@bfbba@*/
#define PPU0_PUWA5_PUWA31	(*(volatile uint_io8_t*)0xB72810BF)  /*@bfbba@*/

#define PPU0_PUWA6	(PPU0.unPUWA6.u32Register)  /*@rg@*/
#define PPU0_PUWA6_PUWA0	(*(volatile uint_io8_t*)0xB72810C0)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA1	(*(volatile uint_io8_t*)0xB72810C1)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA2	(*(volatile uint_io8_t*)0xB72810C2)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA3	(*(volatile uint_io8_t*)0xB72810C3)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA4	(*(volatile uint_io8_t*)0xB72810C4)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA5	(*(volatile uint_io8_t*)0xB72810C5)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA6	(*(volatile uint_io8_t*)0xB72810C6)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA7	(*(volatile uint_io8_t*)0xB72810C7)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA8	(*(volatile uint_io8_t*)0xB72810C8)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA9	(*(volatile uint_io8_t*)0xB72810C9)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA10	(*(volatile uint_io8_t*)0xB72810CA)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA11	(*(volatile uint_io8_t*)0xB72810CB)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA12	(*(volatile uint_io8_t*)0xB72810CC)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA13	(*(volatile uint_io8_t*)0xB72810CD)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA14	(*(volatile uint_io8_t*)0xB72810CE)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA15	(*(volatile uint_io8_t*)0xB72810CF)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA16	(*(volatile uint_io8_t*)0xB72810D0)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA17	(*(volatile uint_io8_t*)0xB72810D1)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA18	(*(volatile uint_io8_t*)0xB72810D2)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA19	(*(volatile uint_io8_t*)0xB72810D3)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA20	(*(volatile uint_io8_t*)0xB72810D4)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA21	(*(volatile uint_io8_t*)0xB72810D5)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA22	(*(volatile uint_io8_t*)0xB72810D6)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA23	(*(volatile uint_io8_t*)0xB72810D7)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA24	(*(volatile uint_io8_t*)0xB72810D8)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA25	(*(volatile uint_io8_t*)0xB72810D9)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA26	(*(volatile uint_io8_t*)0xB72810DA)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA27	(*(volatile uint_io8_t*)0xB72810DB)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA28	(*(volatile uint_io8_t*)0xB72810DC)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA29	(*(volatile uint_io8_t*)0xB72810DD)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA30	(*(volatile uint_io8_t*)0xB72810DE)  /*@bfbba@*/
#define PPU0_PUWA6_PUWA31	(*(volatile uint_io8_t*)0xB72810DF)  /*@bfbba@*/

#define PPU0_PUWA7	(PPU0.unPUWA7.u32Register)  /*@rg@*/
#define PPU0_PUWA7_PUWA0	(*(volatile uint_io8_t*)0xB72810E0)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA1	(*(volatile uint_io8_t*)0xB72810E1)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA2	(*(volatile uint_io8_t*)0xB72810E2)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA3	(*(volatile uint_io8_t*)0xB72810E3)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA4	(*(volatile uint_io8_t*)0xB72810E4)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA5	(*(volatile uint_io8_t*)0xB72810E5)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA6	(*(volatile uint_io8_t*)0xB72810E6)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA7	(*(volatile uint_io8_t*)0xB72810E7)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA8	(*(volatile uint_io8_t*)0xB72810E8)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA9	(*(volatile uint_io8_t*)0xB72810E9)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA10	(*(volatile uint_io8_t*)0xB72810EA)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA11	(*(volatile uint_io8_t*)0xB72810EB)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA12	(*(volatile uint_io8_t*)0xB72810EC)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA13	(*(volatile uint_io8_t*)0xB72810ED)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA14	(*(volatile uint_io8_t*)0xB72810EE)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA15	(*(volatile uint_io8_t*)0xB72810EF)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA16	(*(volatile uint_io8_t*)0xB72810F0)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA17	(*(volatile uint_io8_t*)0xB72810F1)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA18	(*(volatile uint_io8_t*)0xB72810F2)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA19	(*(volatile uint_io8_t*)0xB72810F3)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA20	(*(volatile uint_io8_t*)0xB72810F4)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA21	(*(volatile uint_io8_t*)0xB72810F5)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA22	(*(volatile uint_io8_t*)0xB72810F6)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA23	(*(volatile uint_io8_t*)0xB72810F7)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA24	(*(volatile uint_io8_t*)0xB72810F8)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA25	(*(volatile uint_io8_t*)0xB72810F9)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA26	(*(volatile uint_io8_t*)0xB72810FA)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA27	(*(volatile uint_io8_t*)0xB72810FB)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA28	(*(volatile uint_io8_t*)0xB72810FC)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA29	(*(volatile uint_io8_t*)0xB72810FD)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA30	(*(volatile uint_io8_t*)0xB72810FE)  /*@bfbba@*/
#define PPU0_PUWA7_PUWA31	(*(volatile uint_io8_t*)0xB72810FF)  /*@bfbba@*/

#define PPU0_PUWA8	(PPU0.unPUWA8.u32Register)  /*@rg@*/
#define PPU0_PUWA8_PUWA0	(*(volatile uint_io8_t*)0xB7281100)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA1	(*(volatile uint_io8_t*)0xB7281101)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA2	(*(volatile uint_io8_t*)0xB7281102)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA3	(*(volatile uint_io8_t*)0xB7281103)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA4	(*(volatile uint_io8_t*)0xB7281104)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA5	(*(volatile uint_io8_t*)0xB7281105)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA6	(*(volatile uint_io8_t*)0xB7281106)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA7	(*(volatile uint_io8_t*)0xB7281107)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA8	(*(volatile uint_io8_t*)0xB7281108)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA9	(*(volatile uint_io8_t*)0xB7281109)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA10	(*(volatile uint_io8_t*)0xB728110A)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA11	(*(volatile uint_io8_t*)0xB728110B)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA12	(*(volatile uint_io8_t*)0xB728110C)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA13	(*(volatile uint_io8_t*)0xB728110D)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA14	(*(volatile uint_io8_t*)0xB728110E)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA15	(*(volatile uint_io8_t*)0xB728110F)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA16	(*(volatile uint_io8_t*)0xB7281110)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA17	(*(volatile uint_io8_t*)0xB7281111)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA18	(*(volatile uint_io8_t*)0xB7281112)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA19	(*(volatile uint_io8_t*)0xB7281113)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA20	(*(volatile uint_io8_t*)0xB7281114)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA21	(*(volatile uint_io8_t*)0xB7281115)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA22	(*(volatile uint_io8_t*)0xB7281116)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA23	(*(volatile uint_io8_t*)0xB7281117)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA24	(*(volatile uint_io8_t*)0xB7281118)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA25	(*(volatile uint_io8_t*)0xB7281119)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA26	(*(volatile uint_io8_t*)0xB728111A)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA27	(*(volatile uint_io8_t*)0xB728111B)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA28	(*(volatile uint_io8_t*)0xB728111C)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA29	(*(volatile uint_io8_t*)0xB728111D)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA30	(*(volatile uint_io8_t*)0xB728111E)  /*@bfbba@*/
#define PPU0_PUWA8_PUWA31	(*(volatile uint_io8_t*)0xB728111F)  /*@bfbba@*/

#define PPU0_PUWA9	(PPU0.unPUWA9.u32Register)  /*@rg@*/
#define PPU0_PUWA9_PUWA0	(*(volatile uint_io8_t*)0xB7281120)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA1	(*(volatile uint_io8_t*)0xB7281121)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA2	(*(volatile uint_io8_t*)0xB7281122)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA3	(*(volatile uint_io8_t*)0xB7281123)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA4	(*(volatile uint_io8_t*)0xB7281124)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA5	(*(volatile uint_io8_t*)0xB7281125)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA6	(*(volatile uint_io8_t*)0xB7281126)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA7	(*(volatile uint_io8_t*)0xB7281127)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA8	(*(volatile uint_io8_t*)0xB7281128)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA9	(*(volatile uint_io8_t*)0xB7281129)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA10	(*(volatile uint_io8_t*)0xB728112A)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA11	(*(volatile uint_io8_t*)0xB728112B)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA12	(*(volatile uint_io8_t*)0xB728112C)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA13	(*(volatile uint_io8_t*)0xB728112D)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA14	(*(volatile uint_io8_t*)0xB728112E)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA15	(*(volatile uint_io8_t*)0xB728112F)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA16	(*(volatile uint_io8_t*)0xB7281130)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA17	(*(volatile uint_io8_t*)0xB7281131)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA18	(*(volatile uint_io8_t*)0xB7281132)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA19	(*(volatile uint_io8_t*)0xB7281133)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA20	(*(volatile uint_io8_t*)0xB7281134)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA21	(*(volatile uint_io8_t*)0xB7281135)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA22	(*(volatile uint_io8_t*)0xB7281136)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA23	(*(volatile uint_io8_t*)0xB7281137)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA24	(*(volatile uint_io8_t*)0xB7281138)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA25	(*(volatile uint_io8_t*)0xB7281139)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA26	(*(volatile uint_io8_t*)0xB728113A)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA27	(*(volatile uint_io8_t*)0xB728113B)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA28	(*(volatile uint_io8_t*)0xB728113C)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA29	(*(volatile uint_io8_t*)0xB728113D)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA30	(*(volatile uint_io8_t*)0xB728113E)  /*@bfbba@*/
#define PPU0_PUWA9_PUWA31	(*(volatile uint_io8_t*)0xB728113F)  /*@bfbba@*/

#define PPU0_PUWA10	(PPU0.unPUWA10.u32Register)  /*@rg@*/
#define PPU0_PUWA10_PUWA0	(*(volatile uint_io8_t*)0xB7281140)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA1	(*(volatile uint_io8_t*)0xB7281141)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA2	(*(volatile uint_io8_t*)0xB7281142)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA3	(*(volatile uint_io8_t*)0xB7281143)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA4	(*(volatile uint_io8_t*)0xB7281144)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA5	(*(volatile uint_io8_t*)0xB7281145)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA6	(*(volatile uint_io8_t*)0xB7281146)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA7	(*(volatile uint_io8_t*)0xB7281147)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA8	(*(volatile uint_io8_t*)0xB7281148)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA9	(*(volatile uint_io8_t*)0xB7281149)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA10	(*(volatile uint_io8_t*)0xB728114A)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA11	(*(volatile uint_io8_t*)0xB728114B)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA12	(*(volatile uint_io8_t*)0xB728114C)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA13	(*(volatile uint_io8_t*)0xB728114D)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA14	(*(volatile uint_io8_t*)0xB728114E)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA15	(*(volatile uint_io8_t*)0xB728114F)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA16	(*(volatile uint_io8_t*)0xB7281150)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA17	(*(volatile uint_io8_t*)0xB7281151)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA18	(*(volatile uint_io8_t*)0xB7281152)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA19	(*(volatile uint_io8_t*)0xB7281153)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA20	(*(volatile uint_io8_t*)0xB7281154)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA21	(*(volatile uint_io8_t*)0xB7281155)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA22	(*(volatile uint_io8_t*)0xB7281156)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA23	(*(volatile uint_io8_t*)0xB7281157)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA24	(*(volatile uint_io8_t*)0xB7281158)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA25	(*(volatile uint_io8_t*)0xB7281159)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA26	(*(volatile uint_io8_t*)0xB728115A)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA27	(*(volatile uint_io8_t*)0xB728115B)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA28	(*(volatile uint_io8_t*)0xB728115C)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA29	(*(volatile uint_io8_t*)0xB728115D)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA30	(*(volatile uint_io8_t*)0xB728115E)  /*@bfbba@*/
#define PPU0_PUWA10_PUWA31	(*(volatile uint_io8_t*)0xB728115F)  /*@bfbba@*/

#define PPU0_PUWA11	(PPU0.unPUWA11.u32Register)  /*@rg@*/
#define PPU0_PUWA11_PUWA0	(*(volatile uint_io8_t*)0xB7281160)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA1	(*(volatile uint_io8_t*)0xB7281161)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA2	(*(volatile uint_io8_t*)0xB7281162)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA3	(*(volatile uint_io8_t*)0xB7281163)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA4	(*(volatile uint_io8_t*)0xB7281164)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA5	(*(volatile uint_io8_t*)0xB7281165)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA6	(*(volatile uint_io8_t*)0xB7281166)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA7	(*(volatile uint_io8_t*)0xB7281167)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA8	(*(volatile uint_io8_t*)0xB7281168)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA9	(*(volatile uint_io8_t*)0xB7281169)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA10	(*(volatile uint_io8_t*)0xB728116A)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA11	(*(volatile uint_io8_t*)0xB728116B)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA12	(*(volatile uint_io8_t*)0xB728116C)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA13	(*(volatile uint_io8_t*)0xB728116D)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA14	(*(volatile uint_io8_t*)0xB728116E)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA15	(*(volatile uint_io8_t*)0xB728116F)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA16	(*(volatile uint_io8_t*)0xB7281170)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA17	(*(volatile uint_io8_t*)0xB7281171)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA18	(*(volatile uint_io8_t*)0xB7281172)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA19	(*(volatile uint_io8_t*)0xB7281173)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA20	(*(volatile uint_io8_t*)0xB7281174)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA21	(*(volatile uint_io8_t*)0xB7281175)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA22	(*(volatile uint_io8_t*)0xB7281176)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA23	(*(volatile uint_io8_t*)0xB7281177)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA24	(*(volatile uint_io8_t*)0xB7281178)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA25	(*(volatile uint_io8_t*)0xB7281179)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA26	(*(volatile uint_io8_t*)0xB728117A)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA27	(*(volatile uint_io8_t*)0xB728117B)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA28	(*(volatile uint_io8_t*)0xB728117C)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA29	(*(volatile uint_io8_t*)0xB728117D)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA30	(*(volatile uint_io8_t*)0xB728117E)  /*@bfbba@*/
#define PPU0_PUWA11_PUWA31	(*(volatile uint_io8_t*)0xB728117F)  /*@bfbba@*/

#define PPU0_PUWA12	(PPU0.unPUWA12.u32Register)  /*@rg@*/
#define PPU0_PUWA12_PUWA0	(*(volatile uint_io8_t*)0xB7281180)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA1	(*(volatile uint_io8_t*)0xB7281181)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA2	(*(volatile uint_io8_t*)0xB7281182)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA3	(*(volatile uint_io8_t*)0xB7281183)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA4	(*(volatile uint_io8_t*)0xB7281184)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA5	(*(volatile uint_io8_t*)0xB7281185)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA6	(*(volatile uint_io8_t*)0xB7281186)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA7	(*(volatile uint_io8_t*)0xB7281187)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA8	(*(volatile uint_io8_t*)0xB7281188)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA9	(*(volatile uint_io8_t*)0xB7281189)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA10	(*(volatile uint_io8_t*)0xB728118A)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA11	(*(volatile uint_io8_t*)0xB728118B)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA12	(*(volatile uint_io8_t*)0xB728118C)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA13	(*(volatile uint_io8_t*)0xB728118D)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA14	(*(volatile uint_io8_t*)0xB728118E)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA15	(*(volatile uint_io8_t*)0xB728118F)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA16	(*(volatile uint_io8_t*)0xB7281190)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA17	(*(volatile uint_io8_t*)0xB7281191)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA18	(*(volatile uint_io8_t*)0xB7281192)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA19	(*(volatile uint_io8_t*)0xB7281193)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA20	(*(volatile uint_io8_t*)0xB7281194)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA21	(*(volatile uint_io8_t*)0xB7281195)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA22	(*(volatile uint_io8_t*)0xB7281196)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA23	(*(volatile uint_io8_t*)0xB7281197)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA24	(*(volatile uint_io8_t*)0xB7281198)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA25	(*(volatile uint_io8_t*)0xB7281199)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA26	(*(volatile uint_io8_t*)0xB728119A)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA27	(*(volatile uint_io8_t*)0xB728119B)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA28	(*(volatile uint_io8_t*)0xB728119C)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA29	(*(volatile uint_io8_t*)0xB728119D)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA30	(*(volatile uint_io8_t*)0xB728119E)  /*@bfbba@*/
#define PPU0_PUWA12_PUWA31	(*(volatile uint_io8_t*)0xB728119F)  /*@bfbba@*/

#define PPU0_PUWA13	(PPU0.unPUWA13.u32Register)  /*@rg@*/
#define PPU0_PUWA13_PUWA0	(*(volatile uint_io8_t*)0xB72811A0)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA1	(*(volatile uint_io8_t*)0xB72811A1)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA2	(*(volatile uint_io8_t*)0xB72811A2)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA3	(*(volatile uint_io8_t*)0xB72811A3)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA4	(*(volatile uint_io8_t*)0xB72811A4)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA5	(*(volatile uint_io8_t*)0xB72811A5)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA6	(*(volatile uint_io8_t*)0xB72811A6)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA7	(*(volatile uint_io8_t*)0xB72811A7)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA8	(*(volatile uint_io8_t*)0xB72811A8)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA9	(*(volatile uint_io8_t*)0xB72811A9)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA10	(*(volatile uint_io8_t*)0xB72811AA)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA11	(*(volatile uint_io8_t*)0xB72811AB)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA12	(*(volatile uint_io8_t*)0xB72811AC)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA13	(*(volatile uint_io8_t*)0xB72811AD)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA14	(*(volatile uint_io8_t*)0xB72811AE)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA15	(*(volatile uint_io8_t*)0xB72811AF)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA16	(*(volatile uint_io8_t*)0xB72811B0)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA17	(*(volatile uint_io8_t*)0xB72811B1)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA18	(*(volatile uint_io8_t*)0xB72811B2)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA19	(*(volatile uint_io8_t*)0xB72811B3)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA20	(*(volatile uint_io8_t*)0xB72811B4)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA21	(*(volatile uint_io8_t*)0xB72811B5)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA22	(*(volatile uint_io8_t*)0xB72811B6)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA23	(*(volatile uint_io8_t*)0xB72811B7)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA24	(*(volatile uint_io8_t*)0xB72811B8)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA25	(*(volatile uint_io8_t*)0xB72811B9)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA26	(*(volatile uint_io8_t*)0xB72811BA)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA27	(*(volatile uint_io8_t*)0xB72811BB)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA28	(*(volatile uint_io8_t*)0xB72811BC)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA29	(*(volatile uint_io8_t*)0xB72811BD)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA30	(*(volatile uint_io8_t*)0xB72811BE)  /*@bfbba@*/
#define PPU0_PUWA13_PUWA31	(*(volatile uint_io8_t*)0xB72811BF)  /*@bfbba@*/

#define PPU0_PUWA14	(PPU0.unPUWA14.u32Register)  /*@rg@*/
#define PPU0_PUWA14_PUWA0	(*(volatile uint_io8_t*)0xB72811C0)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA1	(*(volatile uint_io8_t*)0xB72811C1)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA2	(*(volatile uint_io8_t*)0xB72811C2)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA3	(*(volatile uint_io8_t*)0xB72811C3)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA4	(*(volatile uint_io8_t*)0xB72811C4)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA5	(*(volatile uint_io8_t*)0xB72811C5)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA6	(*(volatile uint_io8_t*)0xB72811C6)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA7	(*(volatile uint_io8_t*)0xB72811C7)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA8	(*(volatile uint_io8_t*)0xB72811C8)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA9	(*(volatile uint_io8_t*)0xB72811C9)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA10	(*(volatile uint_io8_t*)0xB72811CA)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA11	(*(volatile uint_io8_t*)0xB72811CB)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA12	(*(volatile uint_io8_t*)0xB72811CC)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA13	(*(volatile uint_io8_t*)0xB72811CD)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA14	(*(volatile uint_io8_t*)0xB72811CE)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA15	(*(volatile uint_io8_t*)0xB72811CF)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA16	(*(volatile uint_io8_t*)0xB72811D0)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA17	(*(volatile uint_io8_t*)0xB72811D1)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA18	(*(volatile uint_io8_t*)0xB72811D2)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA19	(*(volatile uint_io8_t*)0xB72811D3)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA20	(*(volatile uint_io8_t*)0xB72811D4)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA21	(*(volatile uint_io8_t*)0xB72811D5)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA22	(*(volatile uint_io8_t*)0xB72811D6)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA23	(*(volatile uint_io8_t*)0xB72811D7)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA24	(*(volatile uint_io8_t*)0xB72811D8)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA25	(*(volatile uint_io8_t*)0xB72811D9)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA26	(*(volatile uint_io8_t*)0xB72811DA)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA27	(*(volatile uint_io8_t*)0xB72811DB)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA28	(*(volatile uint_io8_t*)0xB72811DC)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA29	(*(volatile uint_io8_t*)0xB72811DD)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA30	(*(volatile uint_io8_t*)0xB72811DE)  /*@bfbba@*/
#define PPU0_PUWA14_PUWA31	(*(volatile uint_io8_t*)0xB72811DF)  /*@bfbba@*/

#define PPU0_PUWA15	(PPU0.unPUWA15.u32Register)  /*@rg@*/
#define PPU0_PUWA15_PUWA0	(*(volatile uint_io8_t*)0xB72811E0)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA1	(*(volatile uint_io8_t*)0xB72811E1)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA2	(*(volatile uint_io8_t*)0xB72811E2)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA3	(*(volatile uint_io8_t*)0xB72811E3)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA4	(*(volatile uint_io8_t*)0xB72811E4)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA5	(*(volatile uint_io8_t*)0xB72811E5)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA6	(*(volatile uint_io8_t*)0xB72811E6)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA7	(*(volatile uint_io8_t*)0xB72811E7)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA8	(*(volatile uint_io8_t*)0xB72811E8)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA9	(*(volatile uint_io8_t*)0xB72811E9)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA10	(*(volatile uint_io8_t*)0xB72811EA)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA11	(*(volatile uint_io8_t*)0xB72811EB)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA12	(*(volatile uint_io8_t*)0xB72811EC)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA13	(*(volatile uint_io8_t*)0xB72811ED)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA14	(*(volatile uint_io8_t*)0xB72811EE)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA15	(*(volatile uint_io8_t*)0xB72811EF)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA16	(*(volatile uint_io8_t*)0xB72811F0)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA17	(*(volatile uint_io8_t*)0xB72811F1)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA18	(*(volatile uint_io8_t*)0xB72811F2)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA19	(*(volatile uint_io8_t*)0xB72811F3)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA20	(*(volatile uint_io8_t*)0xB72811F4)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA21	(*(volatile uint_io8_t*)0xB72811F5)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA22	(*(volatile uint_io8_t*)0xB72811F6)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA23	(*(volatile uint_io8_t*)0xB72811F7)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA24	(*(volatile uint_io8_t*)0xB72811F8)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA25	(*(volatile uint_io8_t*)0xB72811F9)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA26	(*(volatile uint_io8_t*)0xB72811FA)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA27	(*(volatile uint_io8_t*)0xB72811FB)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA28	(*(volatile uint_io8_t*)0xB72811FC)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA29	(*(volatile uint_io8_t*)0xB72811FD)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA30	(*(volatile uint_io8_t*)0xB72811FE)  /*@bfbba@*/
#define PPU0_PUWA15_PUWA31	(*(volatile uint_io8_t*)0xB72811FF)  /*@bfbba@*/

#define PPU0_PUWA16	(PPU0.unPUWA16.u32Register)  /*@rg@*/
#define PPU0_PUWA16_PUWA0	(*(volatile uint_io8_t*)0xB7281200)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA1	(*(volatile uint_io8_t*)0xB7281201)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA2	(*(volatile uint_io8_t*)0xB7281202)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA3	(*(volatile uint_io8_t*)0xB7281203)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA4	(*(volatile uint_io8_t*)0xB7281204)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA5	(*(volatile uint_io8_t*)0xB7281205)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA6	(*(volatile uint_io8_t*)0xB7281206)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA7	(*(volatile uint_io8_t*)0xB7281207)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA8	(*(volatile uint_io8_t*)0xB7281208)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA9	(*(volatile uint_io8_t*)0xB7281209)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA10	(*(volatile uint_io8_t*)0xB728120A)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA11	(*(volatile uint_io8_t*)0xB728120B)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA12	(*(volatile uint_io8_t*)0xB728120C)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA13	(*(volatile uint_io8_t*)0xB728120D)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA14	(*(volatile uint_io8_t*)0xB728120E)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA15	(*(volatile uint_io8_t*)0xB728120F)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA16	(*(volatile uint_io8_t*)0xB7281210)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA17	(*(volatile uint_io8_t*)0xB7281211)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA18	(*(volatile uint_io8_t*)0xB7281212)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA19	(*(volatile uint_io8_t*)0xB7281213)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA20	(*(volatile uint_io8_t*)0xB7281214)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA21	(*(volatile uint_io8_t*)0xB7281215)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA22	(*(volatile uint_io8_t*)0xB7281216)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA23	(*(volatile uint_io8_t*)0xB7281217)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA24	(*(volatile uint_io8_t*)0xB7281218)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA25	(*(volatile uint_io8_t*)0xB7281219)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA26	(*(volatile uint_io8_t*)0xB728121A)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA27	(*(volatile uint_io8_t*)0xB728121B)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA28	(*(volatile uint_io8_t*)0xB728121C)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA29	(*(volatile uint_io8_t*)0xB728121D)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA30	(*(volatile uint_io8_t*)0xB728121E)  /*@bfbba@*/
#define PPU0_PUWA16_PUWA31	(*(volatile uint_io8_t*)0xB728121F)  /*@bfbba@*/

#define PPU0_PUWA17	(PPU0.unPUWA17.u32Register)  /*@rg@*/
#define PPU0_PUWA17_PUWA0	(*(volatile uint_io8_t*)0xB7281220)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA1	(*(volatile uint_io8_t*)0xB7281221)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA2	(*(volatile uint_io8_t*)0xB7281222)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA3	(*(volatile uint_io8_t*)0xB7281223)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA4	(*(volatile uint_io8_t*)0xB7281224)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA5	(*(volatile uint_io8_t*)0xB7281225)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA6	(*(volatile uint_io8_t*)0xB7281226)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA7	(*(volatile uint_io8_t*)0xB7281227)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA8	(*(volatile uint_io8_t*)0xB7281228)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA9	(*(volatile uint_io8_t*)0xB7281229)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA10	(*(volatile uint_io8_t*)0xB728122A)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA11	(*(volatile uint_io8_t*)0xB728122B)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA12	(*(volatile uint_io8_t*)0xB728122C)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA13	(*(volatile uint_io8_t*)0xB728122D)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA14	(*(volatile uint_io8_t*)0xB728122E)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA15	(*(volatile uint_io8_t*)0xB728122F)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA16	(*(volatile uint_io8_t*)0xB7281230)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA17	(*(volatile uint_io8_t*)0xB7281231)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA18	(*(volatile uint_io8_t*)0xB7281232)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA19	(*(volatile uint_io8_t*)0xB7281233)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA20	(*(volatile uint_io8_t*)0xB7281234)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA21	(*(volatile uint_io8_t*)0xB7281235)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA22	(*(volatile uint_io8_t*)0xB7281236)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA23	(*(volatile uint_io8_t*)0xB7281237)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA24	(*(volatile uint_io8_t*)0xB7281238)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA25	(*(volatile uint_io8_t*)0xB7281239)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA26	(*(volatile uint_io8_t*)0xB728123A)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA27	(*(volatile uint_io8_t*)0xB728123B)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA28	(*(volatile uint_io8_t*)0xB728123C)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA29	(*(volatile uint_io8_t*)0xB728123D)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA30	(*(volatile uint_io8_t*)0xB728123E)  /*@bfbba@*/
#define PPU0_PUWA17_PUWA31	(*(volatile uint_io8_t*)0xB728123F)  /*@bfbba@*/

#define PPU0_PUWA18	(PPU0.unPUWA18.u32Register)  /*@rg@*/
#define PPU0_PUWA18_PUWA0	(*(volatile uint_io8_t*)0xB7281240)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA1	(*(volatile uint_io8_t*)0xB7281241)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA2	(*(volatile uint_io8_t*)0xB7281242)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA3	(*(volatile uint_io8_t*)0xB7281243)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA4	(*(volatile uint_io8_t*)0xB7281244)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA5	(*(volatile uint_io8_t*)0xB7281245)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA6	(*(volatile uint_io8_t*)0xB7281246)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA7	(*(volatile uint_io8_t*)0xB7281247)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA8	(*(volatile uint_io8_t*)0xB7281248)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA9	(*(volatile uint_io8_t*)0xB7281249)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA10	(*(volatile uint_io8_t*)0xB728124A)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA11	(*(volatile uint_io8_t*)0xB728124B)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA12	(*(volatile uint_io8_t*)0xB728124C)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA13	(*(volatile uint_io8_t*)0xB728124D)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA14	(*(volatile uint_io8_t*)0xB728124E)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA15	(*(volatile uint_io8_t*)0xB728124F)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA16	(*(volatile uint_io8_t*)0xB7281250)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA17	(*(volatile uint_io8_t*)0xB7281251)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA18	(*(volatile uint_io8_t*)0xB7281252)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA19	(*(volatile uint_io8_t*)0xB7281253)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA20	(*(volatile uint_io8_t*)0xB7281254)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA21	(*(volatile uint_io8_t*)0xB7281255)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA22	(*(volatile uint_io8_t*)0xB7281256)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA23	(*(volatile uint_io8_t*)0xB7281257)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA24	(*(volatile uint_io8_t*)0xB7281258)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA25	(*(volatile uint_io8_t*)0xB7281259)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA26	(*(volatile uint_io8_t*)0xB728125A)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA27	(*(volatile uint_io8_t*)0xB728125B)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA28	(*(volatile uint_io8_t*)0xB728125C)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA29	(*(volatile uint_io8_t*)0xB728125D)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA30	(*(volatile uint_io8_t*)0xB728125E)  /*@bfbba@*/
#define PPU0_PUWA18_PUWA31	(*(volatile uint_io8_t*)0xB728125F)  /*@bfbba@*/

#define PPU0_PUWA19	(PPU0.unPUWA19.u32Register)  /*@rg@*/
#define PPU0_PUWA19_PUWA0	(*(volatile uint_io8_t*)0xB7281260)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA1	(*(volatile uint_io8_t*)0xB7281261)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA2	(*(volatile uint_io8_t*)0xB7281262)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA3	(*(volatile uint_io8_t*)0xB7281263)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA4	(*(volatile uint_io8_t*)0xB7281264)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA5	(*(volatile uint_io8_t*)0xB7281265)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA6	(*(volatile uint_io8_t*)0xB7281266)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA7	(*(volatile uint_io8_t*)0xB7281267)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA8	(*(volatile uint_io8_t*)0xB7281268)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA9	(*(volatile uint_io8_t*)0xB7281269)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA10	(*(volatile uint_io8_t*)0xB728126A)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA11	(*(volatile uint_io8_t*)0xB728126B)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA12	(*(volatile uint_io8_t*)0xB728126C)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA13	(*(volatile uint_io8_t*)0xB728126D)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA14	(*(volatile uint_io8_t*)0xB728126E)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA15	(*(volatile uint_io8_t*)0xB728126F)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA16	(*(volatile uint_io8_t*)0xB7281270)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA17	(*(volatile uint_io8_t*)0xB7281271)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA18	(*(volatile uint_io8_t*)0xB7281272)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA19	(*(volatile uint_io8_t*)0xB7281273)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA20	(*(volatile uint_io8_t*)0xB7281274)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA21	(*(volatile uint_io8_t*)0xB7281275)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA22	(*(volatile uint_io8_t*)0xB7281276)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA23	(*(volatile uint_io8_t*)0xB7281277)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA24	(*(volatile uint_io8_t*)0xB7281278)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA25	(*(volatile uint_io8_t*)0xB7281279)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA26	(*(volatile uint_io8_t*)0xB728127A)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA27	(*(volatile uint_io8_t*)0xB728127B)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA28	(*(volatile uint_io8_t*)0xB728127C)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA29	(*(volatile uint_io8_t*)0xB728127D)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA30	(*(volatile uint_io8_t*)0xB728127E)  /*@bfbba@*/
#define PPU0_PUWA19_PUWA31	(*(volatile uint_io8_t*)0xB728127F)  /*@bfbba@*/

#define PPU0_PUWA20	(PPU0.unPUWA20.u32Register)  /*@rg@*/
#define PPU0_PUWA20_PUWA0	(*(volatile uint_io8_t*)0xB7281280)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA1	(*(volatile uint_io8_t*)0xB7281281)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA2	(*(volatile uint_io8_t*)0xB7281282)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA3	(*(volatile uint_io8_t*)0xB7281283)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA4	(*(volatile uint_io8_t*)0xB7281284)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA5	(*(volatile uint_io8_t*)0xB7281285)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA6	(*(volatile uint_io8_t*)0xB7281286)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA7	(*(volatile uint_io8_t*)0xB7281287)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA8	(*(volatile uint_io8_t*)0xB7281288)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA9	(*(volatile uint_io8_t*)0xB7281289)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA10	(*(volatile uint_io8_t*)0xB728128A)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA11	(*(volatile uint_io8_t*)0xB728128B)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA12	(*(volatile uint_io8_t*)0xB728128C)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA13	(*(volatile uint_io8_t*)0xB728128D)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA14	(*(volatile uint_io8_t*)0xB728128E)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA15	(*(volatile uint_io8_t*)0xB728128F)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA16	(*(volatile uint_io8_t*)0xB7281290)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA17	(*(volatile uint_io8_t*)0xB7281291)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA18	(*(volatile uint_io8_t*)0xB7281292)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA19	(*(volatile uint_io8_t*)0xB7281293)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA20	(*(volatile uint_io8_t*)0xB7281294)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA21	(*(volatile uint_io8_t*)0xB7281295)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA22	(*(volatile uint_io8_t*)0xB7281296)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA23	(*(volatile uint_io8_t*)0xB7281297)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA24	(*(volatile uint_io8_t*)0xB7281298)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA25	(*(volatile uint_io8_t*)0xB7281299)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA26	(*(volatile uint_io8_t*)0xB728129A)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA27	(*(volatile uint_io8_t*)0xB728129B)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA28	(*(volatile uint_io8_t*)0xB728129C)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA29	(*(volatile uint_io8_t*)0xB728129D)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA30	(*(volatile uint_io8_t*)0xB728129E)  /*@bfbba@*/
#define PPU0_PUWA20_PUWA31	(*(volatile uint_io8_t*)0xB728129F)  /*@bfbba@*/

#define PPU0_PUWA21	(PPU0.unPUWA21.u32Register)  /*@rg@*/
#define PPU0_PUWA21_PUWA0	(*(volatile uint_io8_t*)0xB72812A0)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA1	(*(volatile uint_io8_t*)0xB72812A1)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA2	(*(volatile uint_io8_t*)0xB72812A2)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA3	(*(volatile uint_io8_t*)0xB72812A3)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA4	(*(volatile uint_io8_t*)0xB72812A4)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA5	(*(volatile uint_io8_t*)0xB72812A5)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA6	(*(volatile uint_io8_t*)0xB72812A6)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA7	(*(volatile uint_io8_t*)0xB72812A7)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA8	(*(volatile uint_io8_t*)0xB72812A8)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA9	(*(volatile uint_io8_t*)0xB72812A9)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA10	(*(volatile uint_io8_t*)0xB72812AA)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA11	(*(volatile uint_io8_t*)0xB72812AB)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA12	(*(volatile uint_io8_t*)0xB72812AC)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA13	(*(volatile uint_io8_t*)0xB72812AD)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA14	(*(volatile uint_io8_t*)0xB72812AE)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA15	(*(volatile uint_io8_t*)0xB72812AF)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA16	(*(volatile uint_io8_t*)0xB72812B0)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA17	(*(volatile uint_io8_t*)0xB72812B1)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA18	(*(volatile uint_io8_t*)0xB72812B2)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA19	(*(volatile uint_io8_t*)0xB72812B3)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA20	(*(volatile uint_io8_t*)0xB72812B4)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA21	(*(volatile uint_io8_t*)0xB72812B5)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA22	(*(volatile uint_io8_t*)0xB72812B6)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA23	(*(volatile uint_io8_t*)0xB72812B7)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA24	(*(volatile uint_io8_t*)0xB72812B8)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA25	(*(volatile uint_io8_t*)0xB72812B9)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA26	(*(volatile uint_io8_t*)0xB72812BA)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA27	(*(volatile uint_io8_t*)0xB72812BB)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA28	(*(volatile uint_io8_t*)0xB72812BC)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA29	(*(volatile uint_io8_t*)0xB72812BD)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA30	(*(volatile uint_io8_t*)0xB72812BE)  /*@bfbba@*/
#define PPU0_PUWA21_PUWA31	(*(volatile uint_io8_t*)0xB72812BF)  /*@bfbba@*/

#define PPU0_PUWA22	(PPU0.unPUWA22.u32Register)  /*@rg@*/
#define PPU0_PUWA22_PUWA0	(*(volatile uint_io8_t*)0xB72812C0)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA1	(*(volatile uint_io8_t*)0xB72812C1)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA2	(*(volatile uint_io8_t*)0xB72812C2)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA3	(*(volatile uint_io8_t*)0xB72812C3)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA4	(*(volatile uint_io8_t*)0xB72812C4)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA5	(*(volatile uint_io8_t*)0xB72812C5)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA6	(*(volatile uint_io8_t*)0xB72812C6)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA7	(*(volatile uint_io8_t*)0xB72812C7)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA8	(*(volatile uint_io8_t*)0xB72812C8)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA9	(*(volatile uint_io8_t*)0xB72812C9)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA10	(*(volatile uint_io8_t*)0xB72812CA)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA11	(*(volatile uint_io8_t*)0xB72812CB)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA12	(*(volatile uint_io8_t*)0xB72812CC)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA13	(*(volatile uint_io8_t*)0xB72812CD)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA14	(*(volatile uint_io8_t*)0xB72812CE)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA15	(*(volatile uint_io8_t*)0xB72812CF)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA16	(*(volatile uint_io8_t*)0xB72812D0)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA17	(*(volatile uint_io8_t*)0xB72812D1)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA18	(*(volatile uint_io8_t*)0xB72812D2)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA19	(*(volatile uint_io8_t*)0xB72812D3)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA20	(*(volatile uint_io8_t*)0xB72812D4)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA21	(*(volatile uint_io8_t*)0xB72812D5)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA22	(*(volatile uint_io8_t*)0xB72812D6)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA23	(*(volatile uint_io8_t*)0xB72812D7)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA24	(*(volatile uint_io8_t*)0xB72812D8)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA25	(*(volatile uint_io8_t*)0xB72812D9)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA26	(*(volatile uint_io8_t*)0xB72812DA)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA27	(*(volatile uint_io8_t*)0xB72812DB)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA28	(*(volatile uint_io8_t*)0xB72812DC)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA29	(*(volatile uint_io8_t*)0xB72812DD)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA30	(*(volatile uint_io8_t*)0xB72812DE)  /*@bfbba@*/
#define PPU0_PUWA22_PUWA31	(*(volatile uint_io8_t*)0xB72812DF)  /*@bfbba@*/

#define PPU0_PUWA23	(PPU0.unPUWA23.u32Register)  /*@rg@*/
#define PPU0_PUWA23_PUWA0	(*(volatile uint_io8_t*)0xB72812E0)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA1	(*(volatile uint_io8_t*)0xB72812E1)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA2	(*(volatile uint_io8_t*)0xB72812E2)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA3	(*(volatile uint_io8_t*)0xB72812E3)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA4	(*(volatile uint_io8_t*)0xB72812E4)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA5	(*(volatile uint_io8_t*)0xB72812E5)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA6	(*(volatile uint_io8_t*)0xB72812E6)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA7	(*(volatile uint_io8_t*)0xB72812E7)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA8	(*(volatile uint_io8_t*)0xB72812E8)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA9	(*(volatile uint_io8_t*)0xB72812E9)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA10	(*(volatile uint_io8_t*)0xB72812EA)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA11	(*(volatile uint_io8_t*)0xB72812EB)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA12	(*(volatile uint_io8_t*)0xB72812EC)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA13	(*(volatile uint_io8_t*)0xB72812ED)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA14	(*(volatile uint_io8_t*)0xB72812EE)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA15	(*(volatile uint_io8_t*)0xB72812EF)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA16	(*(volatile uint_io8_t*)0xB72812F0)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA17	(*(volatile uint_io8_t*)0xB72812F1)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA18	(*(volatile uint_io8_t*)0xB72812F2)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA19	(*(volatile uint_io8_t*)0xB72812F3)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA20	(*(volatile uint_io8_t*)0xB72812F4)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA21	(*(volatile uint_io8_t*)0xB72812F5)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA22	(*(volatile uint_io8_t*)0xB72812F6)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA23	(*(volatile uint_io8_t*)0xB72812F7)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA24	(*(volatile uint_io8_t*)0xB72812F8)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA25	(*(volatile uint_io8_t*)0xB72812F9)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA26	(*(volatile uint_io8_t*)0xB72812FA)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA27	(*(volatile uint_io8_t*)0xB72812FB)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA28	(*(volatile uint_io8_t*)0xB72812FC)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA29	(*(volatile uint_io8_t*)0xB72812FD)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA30	(*(volatile uint_io8_t*)0xB72812FE)  /*@bfbba@*/
#define PPU0_PUWA23_PUWA31	(*(volatile uint_io8_t*)0xB72812FF)  /*@bfbba@*/

#define PPU0_PUWA24	(PPU0.unPUWA24.u32Register)  /*@rg@*/
#define PPU0_PUWA24_PUWA0	(*(volatile uint_io8_t*)0xB7281300)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA1	(*(volatile uint_io8_t*)0xB7281301)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA2	(*(volatile uint_io8_t*)0xB7281302)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA3	(*(volatile uint_io8_t*)0xB7281303)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA4	(*(volatile uint_io8_t*)0xB7281304)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA5	(*(volatile uint_io8_t*)0xB7281305)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA6	(*(volatile uint_io8_t*)0xB7281306)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA7	(*(volatile uint_io8_t*)0xB7281307)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA8	(*(volatile uint_io8_t*)0xB7281308)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA9	(*(volatile uint_io8_t*)0xB7281309)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA10	(*(volatile uint_io8_t*)0xB728130A)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA11	(*(volatile uint_io8_t*)0xB728130B)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA12	(*(volatile uint_io8_t*)0xB728130C)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA13	(*(volatile uint_io8_t*)0xB728130D)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA14	(*(volatile uint_io8_t*)0xB728130E)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA15	(*(volatile uint_io8_t*)0xB728130F)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA16	(*(volatile uint_io8_t*)0xB7281310)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA17	(*(volatile uint_io8_t*)0xB7281311)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA18	(*(volatile uint_io8_t*)0xB7281312)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA19	(*(volatile uint_io8_t*)0xB7281313)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA20	(*(volatile uint_io8_t*)0xB7281314)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA21	(*(volatile uint_io8_t*)0xB7281315)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA22	(*(volatile uint_io8_t*)0xB7281316)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA23	(*(volatile uint_io8_t*)0xB7281317)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA24	(*(volatile uint_io8_t*)0xB7281318)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA25	(*(volatile uint_io8_t*)0xB7281319)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA26	(*(volatile uint_io8_t*)0xB728131A)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA27	(*(volatile uint_io8_t*)0xB728131B)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA28	(*(volatile uint_io8_t*)0xB728131C)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA29	(*(volatile uint_io8_t*)0xB728131D)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA30	(*(volatile uint_io8_t*)0xB728131E)  /*@bfbba@*/
#define PPU0_PUWA24_PUWA31	(*(volatile uint_io8_t*)0xB728131F)  /*@bfbba@*/

#define PPU0_PUWA25	(PPU0.unPUWA25.u32Register)  /*@rg@*/
#define PPU0_PUWA25_PUWA0	(*(volatile uint_io8_t*)0xB7281320)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA1	(*(volatile uint_io8_t*)0xB7281321)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA2	(*(volatile uint_io8_t*)0xB7281322)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA3	(*(volatile uint_io8_t*)0xB7281323)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA4	(*(volatile uint_io8_t*)0xB7281324)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA5	(*(volatile uint_io8_t*)0xB7281325)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA6	(*(volatile uint_io8_t*)0xB7281326)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA7	(*(volatile uint_io8_t*)0xB7281327)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA8	(*(volatile uint_io8_t*)0xB7281328)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA9	(*(volatile uint_io8_t*)0xB7281329)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA10	(*(volatile uint_io8_t*)0xB728132A)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA11	(*(volatile uint_io8_t*)0xB728132B)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA12	(*(volatile uint_io8_t*)0xB728132C)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA13	(*(volatile uint_io8_t*)0xB728132D)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA14	(*(volatile uint_io8_t*)0xB728132E)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA15	(*(volatile uint_io8_t*)0xB728132F)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA16	(*(volatile uint_io8_t*)0xB7281330)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA17	(*(volatile uint_io8_t*)0xB7281331)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA18	(*(volatile uint_io8_t*)0xB7281332)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA19	(*(volatile uint_io8_t*)0xB7281333)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA20	(*(volatile uint_io8_t*)0xB7281334)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA21	(*(volatile uint_io8_t*)0xB7281335)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA22	(*(volatile uint_io8_t*)0xB7281336)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA23	(*(volatile uint_io8_t*)0xB7281337)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA24	(*(volatile uint_io8_t*)0xB7281338)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA25	(*(volatile uint_io8_t*)0xB7281339)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA26	(*(volatile uint_io8_t*)0xB728133A)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA27	(*(volatile uint_io8_t*)0xB728133B)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA28	(*(volatile uint_io8_t*)0xB728133C)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA29	(*(volatile uint_io8_t*)0xB728133D)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA30	(*(volatile uint_io8_t*)0xB728133E)  /*@bfbba@*/
#define PPU0_PUWA25_PUWA31	(*(volatile uint_io8_t*)0xB728133F)  /*@bfbba@*/

#define PPU0_PUWA26	(PPU0.unPUWA26.u32Register)  /*@rg@*/
#define PPU0_PUWA26_PUWA0	(*(volatile uint_io8_t*)0xB7281340)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA1	(*(volatile uint_io8_t*)0xB7281341)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA2	(*(volatile uint_io8_t*)0xB7281342)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA3	(*(volatile uint_io8_t*)0xB7281343)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA4	(*(volatile uint_io8_t*)0xB7281344)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA5	(*(volatile uint_io8_t*)0xB7281345)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA6	(*(volatile uint_io8_t*)0xB7281346)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA7	(*(volatile uint_io8_t*)0xB7281347)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA8	(*(volatile uint_io8_t*)0xB7281348)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA9	(*(volatile uint_io8_t*)0xB7281349)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA10	(*(volatile uint_io8_t*)0xB728134A)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA11	(*(volatile uint_io8_t*)0xB728134B)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA12	(*(volatile uint_io8_t*)0xB728134C)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA13	(*(volatile uint_io8_t*)0xB728134D)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA14	(*(volatile uint_io8_t*)0xB728134E)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA15	(*(volatile uint_io8_t*)0xB728134F)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA16	(*(volatile uint_io8_t*)0xB7281350)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA17	(*(volatile uint_io8_t*)0xB7281351)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA18	(*(volatile uint_io8_t*)0xB7281352)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA19	(*(volatile uint_io8_t*)0xB7281353)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA20	(*(volatile uint_io8_t*)0xB7281354)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA21	(*(volatile uint_io8_t*)0xB7281355)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA22	(*(volatile uint_io8_t*)0xB7281356)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA23	(*(volatile uint_io8_t*)0xB7281357)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA24	(*(volatile uint_io8_t*)0xB7281358)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA25	(*(volatile uint_io8_t*)0xB7281359)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA26	(*(volatile uint_io8_t*)0xB728135A)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA27	(*(volatile uint_io8_t*)0xB728135B)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA28	(*(volatile uint_io8_t*)0xB728135C)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA29	(*(volatile uint_io8_t*)0xB728135D)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA30	(*(volatile uint_io8_t*)0xB728135E)  /*@bfbba@*/
#define PPU0_PUWA26_PUWA31	(*(volatile uint_io8_t*)0xB728135F)  /*@bfbba@*/

#define PPU0_PUWA27	(PPU0.unPUWA27.u32Register)  /*@rg@*/
#define PPU0_PUWA27_PUWA0	(*(volatile uint_io8_t*)0xB7281360)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA1	(*(volatile uint_io8_t*)0xB7281361)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA2	(*(volatile uint_io8_t*)0xB7281362)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA3	(*(volatile uint_io8_t*)0xB7281363)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA4	(*(volatile uint_io8_t*)0xB7281364)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA5	(*(volatile uint_io8_t*)0xB7281365)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA6	(*(volatile uint_io8_t*)0xB7281366)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA7	(*(volatile uint_io8_t*)0xB7281367)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA8	(*(volatile uint_io8_t*)0xB7281368)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA9	(*(volatile uint_io8_t*)0xB7281369)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA10	(*(volatile uint_io8_t*)0xB728136A)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA11	(*(volatile uint_io8_t*)0xB728136B)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA12	(*(volatile uint_io8_t*)0xB728136C)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA13	(*(volatile uint_io8_t*)0xB728136D)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA14	(*(volatile uint_io8_t*)0xB728136E)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA15	(*(volatile uint_io8_t*)0xB728136F)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA16	(*(volatile uint_io8_t*)0xB7281370)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA17	(*(volatile uint_io8_t*)0xB7281371)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA18	(*(volatile uint_io8_t*)0xB7281372)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA19	(*(volatile uint_io8_t*)0xB7281373)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA20	(*(volatile uint_io8_t*)0xB7281374)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA21	(*(volatile uint_io8_t*)0xB7281375)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA22	(*(volatile uint_io8_t*)0xB7281376)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA23	(*(volatile uint_io8_t*)0xB7281377)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA24	(*(volatile uint_io8_t*)0xB7281378)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA25	(*(volatile uint_io8_t*)0xB7281379)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA26	(*(volatile uint_io8_t*)0xB728137A)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA27	(*(volatile uint_io8_t*)0xB728137B)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA28	(*(volatile uint_io8_t*)0xB728137C)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA29	(*(volatile uint_io8_t*)0xB728137D)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA30	(*(volatile uint_io8_t*)0xB728137E)  /*@bfbba@*/
#define PPU0_PUWA27_PUWA31	(*(volatile uint_io8_t*)0xB728137F)  /*@bfbba@*/

#define PPU0_PUWA28	(PPU0.unPUWA28.u32Register)  /*@rg@*/
#define PPU0_PUWA28_PUWA0	(*(volatile uint_io8_t*)0xB7281380)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA1	(*(volatile uint_io8_t*)0xB7281381)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA2	(*(volatile uint_io8_t*)0xB7281382)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA3	(*(volatile uint_io8_t*)0xB7281383)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA4	(*(volatile uint_io8_t*)0xB7281384)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA5	(*(volatile uint_io8_t*)0xB7281385)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA6	(*(volatile uint_io8_t*)0xB7281386)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA7	(*(volatile uint_io8_t*)0xB7281387)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA8	(*(volatile uint_io8_t*)0xB7281388)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA9	(*(volatile uint_io8_t*)0xB7281389)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA10	(*(volatile uint_io8_t*)0xB728138A)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA11	(*(volatile uint_io8_t*)0xB728138B)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA12	(*(volatile uint_io8_t*)0xB728138C)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA13	(*(volatile uint_io8_t*)0xB728138D)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA14	(*(volatile uint_io8_t*)0xB728138E)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA15	(*(volatile uint_io8_t*)0xB728138F)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA16	(*(volatile uint_io8_t*)0xB7281390)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA17	(*(volatile uint_io8_t*)0xB7281391)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA18	(*(volatile uint_io8_t*)0xB7281392)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA19	(*(volatile uint_io8_t*)0xB7281393)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA20	(*(volatile uint_io8_t*)0xB7281394)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA21	(*(volatile uint_io8_t*)0xB7281395)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA22	(*(volatile uint_io8_t*)0xB7281396)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA23	(*(volatile uint_io8_t*)0xB7281397)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA24	(*(volatile uint_io8_t*)0xB7281398)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA25	(*(volatile uint_io8_t*)0xB7281399)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA26	(*(volatile uint_io8_t*)0xB728139A)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA27	(*(volatile uint_io8_t*)0xB728139B)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA28	(*(volatile uint_io8_t*)0xB728139C)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA29	(*(volatile uint_io8_t*)0xB728139D)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA30	(*(volatile uint_io8_t*)0xB728139E)  /*@bfbba@*/
#define PPU0_PUWA28_PUWA31	(*(volatile uint_io8_t*)0xB728139F)  /*@bfbba@*/

#define PPU0_PUWA29	(PPU0.unPUWA29.u32Register)  /*@rg@*/
#define PPU0_PUWA29_PUWA0	(*(volatile uint_io8_t*)0xB72813A0)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA1	(*(volatile uint_io8_t*)0xB72813A1)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA2	(*(volatile uint_io8_t*)0xB72813A2)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA3	(*(volatile uint_io8_t*)0xB72813A3)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA4	(*(volatile uint_io8_t*)0xB72813A4)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA5	(*(volatile uint_io8_t*)0xB72813A5)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA6	(*(volatile uint_io8_t*)0xB72813A6)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA7	(*(volatile uint_io8_t*)0xB72813A7)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA8	(*(volatile uint_io8_t*)0xB72813A8)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA9	(*(volatile uint_io8_t*)0xB72813A9)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA10	(*(volatile uint_io8_t*)0xB72813AA)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA11	(*(volatile uint_io8_t*)0xB72813AB)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA12	(*(volatile uint_io8_t*)0xB72813AC)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA13	(*(volatile uint_io8_t*)0xB72813AD)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA14	(*(volatile uint_io8_t*)0xB72813AE)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA15	(*(volatile uint_io8_t*)0xB72813AF)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA16	(*(volatile uint_io8_t*)0xB72813B0)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA17	(*(volatile uint_io8_t*)0xB72813B1)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA18	(*(volatile uint_io8_t*)0xB72813B2)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA19	(*(volatile uint_io8_t*)0xB72813B3)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA20	(*(volatile uint_io8_t*)0xB72813B4)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA21	(*(volatile uint_io8_t*)0xB72813B5)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA22	(*(volatile uint_io8_t*)0xB72813B6)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA23	(*(volatile uint_io8_t*)0xB72813B7)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA24	(*(volatile uint_io8_t*)0xB72813B8)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA25	(*(volatile uint_io8_t*)0xB72813B9)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA26	(*(volatile uint_io8_t*)0xB72813BA)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA27	(*(volatile uint_io8_t*)0xB72813BB)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA28	(*(volatile uint_io8_t*)0xB72813BC)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA29	(*(volatile uint_io8_t*)0xB72813BD)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA30	(*(volatile uint_io8_t*)0xB72813BE)  /*@bfbba@*/
#define PPU0_PUWA29_PUWA31	(*(volatile uint_io8_t*)0xB72813BF)  /*@bfbba@*/

typedef struct stc_ppu0_puwan_field{
    uint_io32_t		u1PUWA0:1;
    uint_io32_t		u1PUWA1:1;
    uint_io32_t		u1PUWA2:1;
    uint_io32_t		u1PUWA3:1;
    uint_io32_t		u1PUWA4:1;
    uint_io32_t		u1PUWA5:1;
    uint_io32_t		u1PUWA6:1;
    uint_io32_t		u1PUWA7:1;
    uint_io32_t		u1PUWA8:1;
    uint_io32_t		u1PUWA9:1;
    uint_io32_t		u1PUWA10:1;
    uint_io32_t		u1PUWA11:1;
    uint_io32_t		u1PUWA12:1;
    uint_io32_t		u1PUWA13:1;
    uint_io32_t		u1PUWA14:1;
    uint_io32_t		u1PUWA15:1;
    uint_io32_t		u1PUWA16:1;
    uint_io32_t		u1PUWA17:1;
    uint_io32_t		u1PUWA18:1;
    uint_io32_t		u1PUWA19:1;
    uint_io32_t		u1PUWA20:1;
    uint_io32_t		u1PUWA21:1;
    uint_io32_t		u1PUWA22:1;
    uint_io32_t		u1PUWA23:1;
    uint_io32_t		u1PUWA24:1;
    uint_io32_t		u1PUWA25:1;
    uint_io32_t		u1PUWA26:1;
    uint_io32_t		u1PUWA27:1;
    uint_io32_t		u1PUWA28:1;
    uint_io32_t		u1PUWA29:1;
    uint_io32_t		u1PUWA30:1;
    uint_io32_t		u1PUWA31:1;
}stc_ppu0_puwan_field_t;

typedef union un_ppu0_puwan{
    uint_io32_t		u32Register;
    stc_ppu0_puwan_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_puwan_t;

/* LOCK3 */
#define PPU0_LOCK3	(PPU0.unLOCK3.u32Register)  /*@rg@*/
#define PPU0_LOCK3_L	PPU0_LOCK3  /*@bfrg@*/

typedef union un_ppu0_lock3{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_lock3_t;

/* PFEN[0-29] */
#define PPU0_PFEN0	(PPU0.unPFEN0.u32Register)  /*@rg@*/
#define PPU0_PFEN0_PFEN0	(*(volatile uint_io8_t*)0xB7281400)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN1	(*(volatile uint_io8_t*)0xB7281401)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN2	(*(volatile uint_io8_t*)0xB7281402)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN3	(*(volatile uint_io8_t*)0xB7281403)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN4	(*(volatile uint_io8_t*)0xB7281404)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN5	(*(volatile uint_io8_t*)0xB7281405)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN6	(*(volatile uint_io8_t*)0xB7281406)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN7	(*(volatile uint_io8_t*)0xB7281407)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN8	(*(volatile uint_io8_t*)0xB7281408)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN9	(*(volatile uint_io8_t*)0xB7281409)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN10	(*(volatile uint_io8_t*)0xB728140A)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN11	(*(volatile uint_io8_t*)0xB728140B)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN12	(*(volatile uint_io8_t*)0xB728140C)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN13	(*(volatile uint_io8_t*)0xB728140D)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN14	(*(volatile uint_io8_t*)0xB728140E)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN15	(*(volatile uint_io8_t*)0xB728140F)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN16	(*(volatile uint_io8_t*)0xB7281410)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN17	(*(volatile uint_io8_t*)0xB7281411)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN18	(*(volatile uint_io8_t*)0xB7281412)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN19	(*(volatile uint_io8_t*)0xB7281413)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN20	(*(volatile uint_io8_t*)0xB7281414)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN21	(*(volatile uint_io8_t*)0xB7281415)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN22	(*(volatile uint_io8_t*)0xB7281416)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN23	(*(volatile uint_io8_t*)0xB7281417)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN24	(*(volatile uint_io8_t*)0xB7281418)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN25	(*(volatile uint_io8_t*)0xB7281419)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN26	(*(volatile uint_io8_t*)0xB728141A)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN27	(*(volatile uint_io8_t*)0xB728141B)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN28	(*(volatile uint_io8_t*)0xB728141C)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN29	(*(volatile uint_io8_t*)0xB728141D)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN30	(*(volatile uint_io8_t*)0xB728141E)  /*@bfbba@*/
#define PPU0_PFEN0_PFEN31	(*(volatile uint_io8_t*)0xB728141F)  /*@bfbba@*/

#define PPU0_PFEN1	(PPU0.unPFEN1.u32Register)  /*@rg@*/
#define PPU0_PFEN1_PFEN0	(*(volatile uint_io8_t*)0xB7281420)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN1	(*(volatile uint_io8_t*)0xB7281421)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN2	(*(volatile uint_io8_t*)0xB7281422)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN3	(*(volatile uint_io8_t*)0xB7281423)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN4	(*(volatile uint_io8_t*)0xB7281424)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN5	(*(volatile uint_io8_t*)0xB7281425)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN6	(*(volatile uint_io8_t*)0xB7281426)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN7	(*(volatile uint_io8_t*)0xB7281427)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN8	(*(volatile uint_io8_t*)0xB7281428)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN9	(*(volatile uint_io8_t*)0xB7281429)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN10	(*(volatile uint_io8_t*)0xB728142A)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN11	(*(volatile uint_io8_t*)0xB728142B)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN12	(*(volatile uint_io8_t*)0xB728142C)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN13	(*(volatile uint_io8_t*)0xB728142D)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN14	(*(volatile uint_io8_t*)0xB728142E)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN15	(*(volatile uint_io8_t*)0xB728142F)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN16	(*(volatile uint_io8_t*)0xB7281430)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN17	(*(volatile uint_io8_t*)0xB7281431)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN18	(*(volatile uint_io8_t*)0xB7281432)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN19	(*(volatile uint_io8_t*)0xB7281433)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN20	(*(volatile uint_io8_t*)0xB7281434)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN21	(*(volatile uint_io8_t*)0xB7281435)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN22	(*(volatile uint_io8_t*)0xB7281436)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN23	(*(volatile uint_io8_t*)0xB7281437)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN24	(*(volatile uint_io8_t*)0xB7281438)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN25	(*(volatile uint_io8_t*)0xB7281439)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN26	(*(volatile uint_io8_t*)0xB728143A)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN27	(*(volatile uint_io8_t*)0xB728143B)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN28	(*(volatile uint_io8_t*)0xB728143C)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN29	(*(volatile uint_io8_t*)0xB728143D)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN30	(*(volatile uint_io8_t*)0xB728143E)  /*@bfbba@*/
#define PPU0_PFEN1_PFEN31	(*(volatile uint_io8_t*)0xB728143F)  /*@bfbba@*/

#define PPU0_PFEN2	(PPU0.unPFEN2.u32Register)  /*@rg@*/
#define PPU0_PFEN2_PFEN0	(*(volatile uint_io8_t*)0xB7281440)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN1	(*(volatile uint_io8_t*)0xB7281441)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN2	(*(volatile uint_io8_t*)0xB7281442)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN3	(*(volatile uint_io8_t*)0xB7281443)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN4	(*(volatile uint_io8_t*)0xB7281444)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN5	(*(volatile uint_io8_t*)0xB7281445)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN6	(*(volatile uint_io8_t*)0xB7281446)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN7	(*(volatile uint_io8_t*)0xB7281447)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN8	(*(volatile uint_io8_t*)0xB7281448)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN9	(*(volatile uint_io8_t*)0xB7281449)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN10	(*(volatile uint_io8_t*)0xB728144A)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN11	(*(volatile uint_io8_t*)0xB728144B)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN12	(*(volatile uint_io8_t*)0xB728144C)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN13	(*(volatile uint_io8_t*)0xB728144D)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN14	(*(volatile uint_io8_t*)0xB728144E)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN15	(*(volatile uint_io8_t*)0xB728144F)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN16	(*(volatile uint_io8_t*)0xB7281450)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN17	(*(volatile uint_io8_t*)0xB7281451)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN18	(*(volatile uint_io8_t*)0xB7281452)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN19	(*(volatile uint_io8_t*)0xB7281453)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN20	(*(volatile uint_io8_t*)0xB7281454)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN21	(*(volatile uint_io8_t*)0xB7281455)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN22	(*(volatile uint_io8_t*)0xB7281456)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN23	(*(volatile uint_io8_t*)0xB7281457)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN24	(*(volatile uint_io8_t*)0xB7281458)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN25	(*(volatile uint_io8_t*)0xB7281459)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN26	(*(volatile uint_io8_t*)0xB728145A)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN27	(*(volatile uint_io8_t*)0xB728145B)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN28	(*(volatile uint_io8_t*)0xB728145C)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN29	(*(volatile uint_io8_t*)0xB728145D)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN30	(*(volatile uint_io8_t*)0xB728145E)  /*@bfbba@*/
#define PPU0_PFEN2_PFEN31	(*(volatile uint_io8_t*)0xB728145F)  /*@bfbba@*/

#define PPU0_PFEN3	(PPU0.unPFEN3.u32Register)  /*@rg@*/
#define PPU0_PFEN3_PFEN0	(*(volatile uint_io8_t*)0xB7281460)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN1	(*(volatile uint_io8_t*)0xB7281461)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN2	(*(volatile uint_io8_t*)0xB7281462)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN3	(*(volatile uint_io8_t*)0xB7281463)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN4	(*(volatile uint_io8_t*)0xB7281464)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN5	(*(volatile uint_io8_t*)0xB7281465)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN6	(*(volatile uint_io8_t*)0xB7281466)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN7	(*(volatile uint_io8_t*)0xB7281467)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN8	(*(volatile uint_io8_t*)0xB7281468)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN9	(*(volatile uint_io8_t*)0xB7281469)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN10	(*(volatile uint_io8_t*)0xB728146A)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN11	(*(volatile uint_io8_t*)0xB728146B)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN12	(*(volatile uint_io8_t*)0xB728146C)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN13	(*(volatile uint_io8_t*)0xB728146D)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN14	(*(volatile uint_io8_t*)0xB728146E)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN15	(*(volatile uint_io8_t*)0xB728146F)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN16	(*(volatile uint_io8_t*)0xB7281470)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN17	(*(volatile uint_io8_t*)0xB7281471)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN18	(*(volatile uint_io8_t*)0xB7281472)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN19	(*(volatile uint_io8_t*)0xB7281473)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN20	(*(volatile uint_io8_t*)0xB7281474)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN21	(*(volatile uint_io8_t*)0xB7281475)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN22	(*(volatile uint_io8_t*)0xB7281476)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN23	(*(volatile uint_io8_t*)0xB7281477)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN24	(*(volatile uint_io8_t*)0xB7281478)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN25	(*(volatile uint_io8_t*)0xB7281479)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN26	(*(volatile uint_io8_t*)0xB728147A)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN27	(*(volatile uint_io8_t*)0xB728147B)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN28	(*(volatile uint_io8_t*)0xB728147C)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN29	(*(volatile uint_io8_t*)0xB728147D)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN30	(*(volatile uint_io8_t*)0xB728147E)  /*@bfbba@*/
#define PPU0_PFEN3_PFEN31	(*(volatile uint_io8_t*)0xB728147F)  /*@bfbba@*/

#define PPU0_PFEN4	(PPU0.unPFEN4.u32Register)  /*@rg@*/
#define PPU0_PFEN4_PFEN0	(*(volatile uint_io8_t*)0xB7281480)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN1	(*(volatile uint_io8_t*)0xB7281481)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN2	(*(volatile uint_io8_t*)0xB7281482)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN3	(*(volatile uint_io8_t*)0xB7281483)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN4	(*(volatile uint_io8_t*)0xB7281484)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN5	(*(volatile uint_io8_t*)0xB7281485)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN6	(*(volatile uint_io8_t*)0xB7281486)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN7	(*(volatile uint_io8_t*)0xB7281487)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN8	(*(volatile uint_io8_t*)0xB7281488)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN9	(*(volatile uint_io8_t*)0xB7281489)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN10	(*(volatile uint_io8_t*)0xB728148A)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN11	(*(volatile uint_io8_t*)0xB728148B)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN12	(*(volatile uint_io8_t*)0xB728148C)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN13	(*(volatile uint_io8_t*)0xB728148D)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN14	(*(volatile uint_io8_t*)0xB728148E)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN15	(*(volatile uint_io8_t*)0xB728148F)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN16	(*(volatile uint_io8_t*)0xB7281490)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN17	(*(volatile uint_io8_t*)0xB7281491)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN18	(*(volatile uint_io8_t*)0xB7281492)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN19	(*(volatile uint_io8_t*)0xB7281493)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN20	(*(volatile uint_io8_t*)0xB7281494)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN21	(*(volatile uint_io8_t*)0xB7281495)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN22	(*(volatile uint_io8_t*)0xB7281496)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN23	(*(volatile uint_io8_t*)0xB7281497)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN24	(*(volatile uint_io8_t*)0xB7281498)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN25	(*(volatile uint_io8_t*)0xB7281499)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN26	(*(volatile uint_io8_t*)0xB728149A)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN27	(*(volatile uint_io8_t*)0xB728149B)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN28	(*(volatile uint_io8_t*)0xB728149C)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN29	(*(volatile uint_io8_t*)0xB728149D)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN30	(*(volatile uint_io8_t*)0xB728149E)  /*@bfbba@*/
#define PPU0_PFEN4_PFEN31	(*(volatile uint_io8_t*)0xB728149F)  /*@bfbba@*/

#define PPU0_PFEN5	(PPU0.unPFEN5.u32Register)  /*@rg@*/
#define PPU0_PFEN5_PFEN0	(*(volatile uint_io8_t*)0xB72814A0)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN1	(*(volatile uint_io8_t*)0xB72814A1)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN2	(*(volatile uint_io8_t*)0xB72814A2)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN3	(*(volatile uint_io8_t*)0xB72814A3)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN4	(*(volatile uint_io8_t*)0xB72814A4)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN5	(*(volatile uint_io8_t*)0xB72814A5)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN6	(*(volatile uint_io8_t*)0xB72814A6)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN7	(*(volatile uint_io8_t*)0xB72814A7)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN8	(*(volatile uint_io8_t*)0xB72814A8)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN9	(*(volatile uint_io8_t*)0xB72814A9)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN10	(*(volatile uint_io8_t*)0xB72814AA)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN11	(*(volatile uint_io8_t*)0xB72814AB)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN12	(*(volatile uint_io8_t*)0xB72814AC)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN13	(*(volatile uint_io8_t*)0xB72814AD)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN14	(*(volatile uint_io8_t*)0xB72814AE)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN15	(*(volatile uint_io8_t*)0xB72814AF)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN16	(*(volatile uint_io8_t*)0xB72814B0)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN17	(*(volatile uint_io8_t*)0xB72814B1)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN18	(*(volatile uint_io8_t*)0xB72814B2)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN19	(*(volatile uint_io8_t*)0xB72814B3)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN20	(*(volatile uint_io8_t*)0xB72814B4)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN21	(*(volatile uint_io8_t*)0xB72814B5)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN22	(*(volatile uint_io8_t*)0xB72814B6)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN23	(*(volatile uint_io8_t*)0xB72814B7)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN24	(*(volatile uint_io8_t*)0xB72814B8)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN25	(*(volatile uint_io8_t*)0xB72814B9)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN26	(*(volatile uint_io8_t*)0xB72814BA)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN27	(*(volatile uint_io8_t*)0xB72814BB)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN28	(*(volatile uint_io8_t*)0xB72814BC)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN29	(*(volatile uint_io8_t*)0xB72814BD)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN30	(*(volatile uint_io8_t*)0xB72814BE)  /*@bfbba@*/
#define PPU0_PFEN5_PFEN31	(*(volatile uint_io8_t*)0xB72814BF)  /*@bfbba@*/

#define PPU0_PFEN6	(PPU0.unPFEN6.u32Register)  /*@rg@*/
#define PPU0_PFEN6_PFEN0	(*(volatile uint_io8_t*)0xB72814C0)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN1	(*(volatile uint_io8_t*)0xB72814C1)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN2	(*(volatile uint_io8_t*)0xB72814C2)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN3	(*(volatile uint_io8_t*)0xB72814C3)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN4	(*(volatile uint_io8_t*)0xB72814C4)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN5	(*(volatile uint_io8_t*)0xB72814C5)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN6	(*(volatile uint_io8_t*)0xB72814C6)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN7	(*(volatile uint_io8_t*)0xB72814C7)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN8	(*(volatile uint_io8_t*)0xB72814C8)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN9	(*(volatile uint_io8_t*)0xB72814C9)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN10	(*(volatile uint_io8_t*)0xB72814CA)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN11	(*(volatile uint_io8_t*)0xB72814CB)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN12	(*(volatile uint_io8_t*)0xB72814CC)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN13	(*(volatile uint_io8_t*)0xB72814CD)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN14	(*(volatile uint_io8_t*)0xB72814CE)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN15	(*(volatile uint_io8_t*)0xB72814CF)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN16	(*(volatile uint_io8_t*)0xB72814D0)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN17	(*(volatile uint_io8_t*)0xB72814D1)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN18	(*(volatile uint_io8_t*)0xB72814D2)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN19	(*(volatile uint_io8_t*)0xB72814D3)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN20	(*(volatile uint_io8_t*)0xB72814D4)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN21	(*(volatile uint_io8_t*)0xB72814D5)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN22	(*(volatile uint_io8_t*)0xB72814D6)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN23	(*(volatile uint_io8_t*)0xB72814D7)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN24	(*(volatile uint_io8_t*)0xB72814D8)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN25	(*(volatile uint_io8_t*)0xB72814D9)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN26	(*(volatile uint_io8_t*)0xB72814DA)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN27	(*(volatile uint_io8_t*)0xB72814DB)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN28	(*(volatile uint_io8_t*)0xB72814DC)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN29	(*(volatile uint_io8_t*)0xB72814DD)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN30	(*(volatile uint_io8_t*)0xB72814DE)  /*@bfbba@*/
#define PPU0_PFEN6_PFEN31	(*(volatile uint_io8_t*)0xB72814DF)  /*@bfbba@*/

#define PPU0_PFEN7	(PPU0.unPFEN7.u32Register)  /*@rg@*/
#define PPU0_PFEN7_PFEN0	(*(volatile uint_io8_t*)0xB72814E0)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN1	(*(volatile uint_io8_t*)0xB72814E1)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN2	(*(volatile uint_io8_t*)0xB72814E2)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN3	(*(volatile uint_io8_t*)0xB72814E3)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN4	(*(volatile uint_io8_t*)0xB72814E4)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN5	(*(volatile uint_io8_t*)0xB72814E5)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN6	(*(volatile uint_io8_t*)0xB72814E6)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN7	(*(volatile uint_io8_t*)0xB72814E7)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN8	(*(volatile uint_io8_t*)0xB72814E8)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN9	(*(volatile uint_io8_t*)0xB72814E9)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN10	(*(volatile uint_io8_t*)0xB72814EA)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN11	(*(volatile uint_io8_t*)0xB72814EB)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN12	(*(volatile uint_io8_t*)0xB72814EC)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN13	(*(volatile uint_io8_t*)0xB72814ED)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN14	(*(volatile uint_io8_t*)0xB72814EE)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN15	(*(volatile uint_io8_t*)0xB72814EF)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN16	(*(volatile uint_io8_t*)0xB72814F0)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN17	(*(volatile uint_io8_t*)0xB72814F1)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN18	(*(volatile uint_io8_t*)0xB72814F2)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN19	(*(volatile uint_io8_t*)0xB72814F3)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN20	(*(volatile uint_io8_t*)0xB72814F4)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN21	(*(volatile uint_io8_t*)0xB72814F5)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN22	(*(volatile uint_io8_t*)0xB72814F6)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN23	(*(volatile uint_io8_t*)0xB72814F7)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN24	(*(volatile uint_io8_t*)0xB72814F8)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN25	(*(volatile uint_io8_t*)0xB72814F9)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN26	(*(volatile uint_io8_t*)0xB72814FA)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN27	(*(volatile uint_io8_t*)0xB72814FB)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN28	(*(volatile uint_io8_t*)0xB72814FC)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN29	(*(volatile uint_io8_t*)0xB72814FD)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN30	(*(volatile uint_io8_t*)0xB72814FE)  /*@bfbba@*/
#define PPU0_PFEN7_PFEN31	(*(volatile uint_io8_t*)0xB72814FF)  /*@bfbba@*/

#define PPU0_PFEN8	(PPU0.unPFEN8.u32Register)  /*@rg@*/
#define PPU0_PFEN8_PFEN0	(*(volatile uint_io8_t*)0xB7281500)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN1	(*(volatile uint_io8_t*)0xB7281501)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN2	(*(volatile uint_io8_t*)0xB7281502)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN3	(*(volatile uint_io8_t*)0xB7281503)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN4	(*(volatile uint_io8_t*)0xB7281504)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN5	(*(volatile uint_io8_t*)0xB7281505)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN6	(*(volatile uint_io8_t*)0xB7281506)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN7	(*(volatile uint_io8_t*)0xB7281507)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN8	(*(volatile uint_io8_t*)0xB7281508)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN9	(*(volatile uint_io8_t*)0xB7281509)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN10	(*(volatile uint_io8_t*)0xB728150A)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN11	(*(volatile uint_io8_t*)0xB728150B)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN12	(*(volatile uint_io8_t*)0xB728150C)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN13	(*(volatile uint_io8_t*)0xB728150D)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN14	(*(volatile uint_io8_t*)0xB728150E)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN15	(*(volatile uint_io8_t*)0xB728150F)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN16	(*(volatile uint_io8_t*)0xB7281510)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN17	(*(volatile uint_io8_t*)0xB7281511)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN18	(*(volatile uint_io8_t*)0xB7281512)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN19	(*(volatile uint_io8_t*)0xB7281513)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN20	(*(volatile uint_io8_t*)0xB7281514)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN21	(*(volatile uint_io8_t*)0xB7281515)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN22	(*(volatile uint_io8_t*)0xB7281516)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN23	(*(volatile uint_io8_t*)0xB7281517)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN24	(*(volatile uint_io8_t*)0xB7281518)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN25	(*(volatile uint_io8_t*)0xB7281519)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN26	(*(volatile uint_io8_t*)0xB728151A)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN27	(*(volatile uint_io8_t*)0xB728151B)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN28	(*(volatile uint_io8_t*)0xB728151C)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN29	(*(volatile uint_io8_t*)0xB728151D)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN30	(*(volatile uint_io8_t*)0xB728151E)  /*@bfbba@*/
#define PPU0_PFEN8_PFEN31	(*(volatile uint_io8_t*)0xB728151F)  /*@bfbba@*/

#define PPU0_PFEN9	(PPU0.unPFEN9.u32Register)  /*@rg@*/
#define PPU0_PFEN9_PFEN0	(*(volatile uint_io8_t*)0xB7281520)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN1	(*(volatile uint_io8_t*)0xB7281521)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN2	(*(volatile uint_io8_t*)0xB7281522)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN3	(*(volatile uint_io8_t*)0xB7281523)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN4	(*(volatile uint_io8_t*)0xB7281524)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN5	(*(volatile uint_io8_t*)0xB7281525)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN6	(*(volatile uint_io8_t*)0xB7281526)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN7	(*(volatile uint_io8_t*)0xB7281527)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN8	(*(volatile uint_io8_t*)0xB7281528)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN9	(*(volatile uint_io8_t*)0xB7281529)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN10	(*(volatile uint_io8_t*)0xB728152A)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN11	(*(volatile uint_io8_t*)0xB728152B)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN12	(*(volatile uint_io8_t*)0xB728152C)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN13	(*(volatile uint_io8_t*)0xB728152D)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN14	(*(volatile uint_io8_t*)0xB728152E)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN15	(*(volatile uint_io8_t*)0xB728152F)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN16	(*(volatile uint_io8_t*)0xB7281530)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN17	(*(volatile uint_io8_t*)0xB7281531)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN18	(*(volatile uint_io8_t*)0xB7281532)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN19	(*(volatile uint_io8_t*)0xB7281533)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN20	(*(volatile uint_io8_t*)0xB7281534)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN21	(*(volatile uint_io8_t*)0xB7281535)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN22	(*(volatile uint_io8_t*)0xB7281536)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN23	(*(volatile uint_io8_t*)0xB7281537)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN24	(*(volatile uint_io8_t*)0xB7281538)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN25	(*(volatile uint_io8_t*)0xB7281539)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN26	(*(volatile uint_io8_t*)0xB728153A)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN27	(*(volatile uint_io8_t*)0xB728153B)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN28	(*(volatile uint_io8_t*)0xB728153C)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN29	(*(volatile uint_io8_t*)0xB728153D)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN30	(*(volatile uint_io8_t*)0xB728153E)  /*@bfbba@*/
#define PPU0_PFEN9_PFEN31	(*(volatile uint_io8_t*)0xB728153F)  /*@bfbba@*/

#define PPU0_PFEN10	(PPU0.unPFEN10.u32Register)  /*@rg@*/
#define PPU0_PFEN10_PFEN0	(*(volatile uint_io8_t*)0xB7281540)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN1	(*(volatile uint_io8_t*)0xB7281541)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN2	(*(volatile uint_io8_t*)0xB7281542)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN3	(*(volatile uint_io8_t*)0xB7281543)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN4	(*(volatile uint_io8_t*)0xB7281544)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN5	(*(volatile uint_io8_t*)0xB7281545)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN6	(*(volatile uint_io8_t*)0xB7281546)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN7	(*(volatile uint_io8_t*)0xB7281547)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN8	(*(volatile uint_io8_t*)0xB7281548)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN9	(*(volatile uint_io8_t*)0xB7281549)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN10	(*(volatile uint_io8_t*)0xB728154A)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN11	(*(volatile uint_io8_t*)0xB728154B)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN12	(*(volatile uint_io8_t*)0xB728154C)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN13	(*(volatile uint_io8_t*)0xB728154D)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN14	(*(volatile uint_io8_t*)0xB728154E)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN15	(*(volatile uint_io8_t*)0xB728154F)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN16	(*(volatile uint_io8_t*)0xB7281550)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN17	(*(volatile uint_io8_t*)0xB7281551)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN18	(*(volatile uint_io8_t*)0xB7281552)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN19	(*(volatile uint_io8_t*)0xB7281553)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN20	(*(volatile uint_io8_t*)0xB7281554)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN21	(*(volatile uint_io8_t*)0xB7281555)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN22	(*(volatile uint_io8_t*)0xB7281556)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN23	(*(volatile uint_io8_t*)0xB7281557)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN24	(*(volatile uint_io8_t*)0xB7281558)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN25	(*(volatile uint_io8_t*)0xB7281559)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN26	(*(volatile uint_io8_t*)0xB728155A)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN27	(*(volatile uint_io8_t*)0xB728155B)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN28	(*(volatile uint_io8_t*)0xB728155C)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN29	(*(volatile uint_io8_t*)0xB728155D)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN30	(*(volatile uint_io8_t*)0xB728155E)  /*@bfbba@*/
#define PPU0_PFEN10_PFEN31	(*(volatile uint_io8_t*)0xB728155F)  /*@bfbba@*/

#define PPU0_PFEN11	(PPU0.unPFEN11.u32Register)  /*@rg@*/
#define PPU0_PFEN11_PFEN0	(*(volatile uint_io8_t*)0xB7281560)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN1	(*(volatile uint_io8_t*)0xB7281561)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN2	(*(volatile uint_io8_t*)0xB7281562)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN3	(*(volatile uint_io8_t*)0xB7281563)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN4	(*(volatile uint_io8_t*)0xB7281564)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN5	(*(volatile uint_io8_t*)0xB7281565)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN6	(*(volatile uint_io8_t*)0xB7281566)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN7	(*(volatile uint_io8_t*)0xB7281567)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN8	(*(volatile uint_io8_t*)0xB7281568)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN9	(*(volatile uint_io8_t*)0xB7281569)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN10	(*(volatile uint_io8_t*)0xB728156A)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN11	(*(volatile uint_io8_t*)0xB728156B)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN12	(*(volatile uint_io8_t*)0xB728156C)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN13	(*(volatile uint_io8_t*)0xB728156D)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN14	(*(volatile uint_io8_t*)0xB728156E)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN15	(*(volatile uint_io8_t*)0xB728156F)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN16	(*(volatile uint_io8_t*)0xB7281570)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN17	(*(volatile uint_io8_t*)0xB7281571)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN18	(*(volatile uint_io8_t*)0xB7281572)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN19	(*(volatile uint_io8_t*)0xB7281573)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN20	(*(volatile uint_io8_t*)0xB7281574)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN21	(*(volatile uint_io8_t*)0xB7281575)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN22	(*(volatile uint_io8_t*)0xB7281576)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN23	(*(volatile uint_io8_t*)0xB7281577)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN24	(*(volatile uint_io8_t*)0xB7281578)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN25	(*(volatile uint_io8_t*)0xB7281579)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN26	(*(volatile uint_io8_t*)0xB728157A)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN27	(*(volatile uint_io8_t*)0xB728157B)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN28	(*(volatile uint_io8_t*)0xB728157C)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN29	(*(volatile uint_io8_t*)0xB728157D)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN30	(*(volatile uint_io8_t*)0xB728157E)  /*@bfbba@*/
#define PPU0_PFEN11_PFEN31	(*(volatile uint_io8_t*)0xB728157F)  /*@bfbba@*/

#define PPU0_PFEN12	(PPU0.unPFEN12.u32Register)  /*@rg@*/
#define PPU0_PFEN12_PFEN0	(*(volatile uint_io8_t*)0xB7281580)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN1	(*(volatile uint_io8_t*)0xB7281581)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN2	(*(volatile uint_io8_t*)0xB7281582)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN3	(*(volatile uint_io8_t*)0xB7281583)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN4	(*(volatile uint_io8_t*)0xB7281584)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN5	(*(volatile uint_io8_t*)0xB7281585)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN6	(*(volatile uint_io8_t*)0xB7281586)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN7	(*(volatile uint_io8_t*)0xB7281587)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN8	(*(volatile uint_io8_t*)0xB7281588)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN9	(*(volatile uint_io8_t*)0xB7281589)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN10	(*(volatile uint_io8_t*)0xB728158A)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN11	(*(volatile uint_io8_t*)0xB728158B)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN12	(*(volatile uint_io8_t*)0xB728158C)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN13	(*(volatile uint_io8_t*)0xB728158D)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN14	(*(volatile uint_io8_t*)0xB728158E)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN15	(*(volatile uint_io8_t*)0xB728158F)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN16	(*(volatile uint_io8_t*)0xB7281590)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN17	(*(volatile uint_io8_t*)0xB7281591)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN18	(*(volatile uint_io8_t*)0xB7281592)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN19	(*(volatile uint_io8_t*)0xB7281593)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN20	(*(volatile uint_io8_t*)0xB7281594)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN21	(*(volatile uint_io8_t*)0xB7281595)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN22	(*(volatile uint_io8_t*)0xB7281596)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN23	(*(volatile uint_io8_t*)0xB7281597)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN24	(*(volatile uint_io8_t*)0xB7281598)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN25	(*(volatile uint_io8_t*)0xB7281599)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN26	(*(volatile uint_io8_t*)0xB728159A)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN27	(*(volatile uint_io8_t*)0xB728159B)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN28	(*(volatile uint_io8_t*)0xB728159C)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN29	(*(volatile uint_io8_t*)0xB728159D)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN30	(*(volatile uint_io8_t*)0xB728159E)  /*@bfbba@*/
#define PPU0_PFEN12_PFEN31	(*(volatile uint_io8_t*)0xB728159F)  /*@bfbba@*/

#define PPU0_PFEN13	(PPU0.unPFEN13.u32Register)  /*@rg@*/
#define PPU0_PFEN13_PFEN0	(*(volatile uint_io8_t*)0xB72815A0)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN1	(*(volatile uint_io8_t*)0xB72815A1)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN2	(*(volatile uint_io8_t*)0xB72815A2)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN3	(*(volatile uint_io8_t*)0xB72815A3)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN4	(*(volatile uint_io8_t*)0xB72815A4)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN5	(*(volatile uint_io8_t*)0xB72815A5)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN6	(*(volatile uint_io8_t*)0xB72815A6)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN7	(*(volatile uint_io8_t*)0xB72815A7)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN8	(*(volatile uint_io8_t*)0xB72815A8)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN9	(*(volatile uint_io8_t*)0xB72815A9)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN10	(*(volatile uint_io8_t*)0xB72815AA)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN11	(*(volatile uint_io8_t*)0xB72815AB)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN12	(*(volatile uint_io8_t*)0xB72815AC)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN13	(*(volatile uint_io8_t*)0xB72815AD)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN14	(*(volatile uint_io8_t*)0xB72815AE)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN15	(*(volatile uint_io8_t*)0xB72815AF)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN16	(*(volatile uint_io8_t*)0xB72815B0)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN17	(*(volatile uint_io8_t*)0xB72815B1)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN18	(*(volatile uint_io8_t*)0xB72815B2)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN19	(*(volatile uint_io8_t*)0xB72815B3)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN20	(*(volatile uint_io8_t*)0xB72815B4)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN21	(*(volatile uint_io8_t*)0xB72815B5)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN22	(*(volatile uint_io8_t*)0xB72815B6)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN23	(*(volatile uint_io8_t*)0xB72815B7)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN24	(*(volatile uint_io8_t*)0xB72815B8)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN25	(*(volatile uint_io8_t*)0xB72815B9)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN26	(*(volatile uint_io8_t*)0xB72815BA)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN27	(*(volatile uint_io8_t*)0xB72815BB)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN28	(*(volatile uint_io8_t*)0xB72815BC)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN29	(*(volatile uint_io8_t*)0xB72815BD)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN30	(*(volatile uint_io8_t*)0xB72815BE)  /*@bfbba@*/
#define PPU0_PFEN13_PFEN31	(*(volatile uint_io8_t*)0xB72815BF)  /*@bfbba@*/

#define PPU0_PFEN14	(PPU0.unPFEN14.u32Register)  /*@rg@*/
#define PPU0_PFEN14_PFEN0	(*(volatile uint_io8_t*)0xB72815C0)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN1	(*(volatile uint_io8_t*)0xB72815C1)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN2	(*(volatile uint_io8_t*)0xB72815C2)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN3	(*(volatile uint_io8_t*)0xB72815C3)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN4	(*(volatile uint_io8_t*)0xB72815C4)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN5	(*(volatile uint_io8_t*)0xB72815C5)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN6	(*(volatile uint_io8_t*)0xB72815C6)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN7	(*(volatile uint_io8_t*)0xB72815C7)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN8	(*(volatile uint_io8_t*)0xB72815C8)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN9	(*(volatile uint_io8_t*)0xB72815C9)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN10	(*(volatile uint_io8_t*)0xB72815CA)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN11	(*(volatile uint_io8_t*)0xB72815CB)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN12	(*(volatile uint_io8_t*)0xB72815CC)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN13	(*(volatile uint_io8_t*)0xB72815CD)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN14	(*(volatile uint_io8_t*)0xB72815CE)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN15	(*(volatile uint_io8_t*)0xB72815CF)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN16	(*(volatile uint_io8_t*)0xB72815D0)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN17	(*(volatile uint_io8_t*)0xB72815D1)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN18	(*(volatile uint_io8_t*)0xB72815D2)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN19	(*(volatile uint_io8_t*)0xB72815D3)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN20	(*(volatile uint_io8_t*)0xB72815D4)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN21	(*(volatile uint_io8_t*)0xB72815D5)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN22	(*(volatile uint_io8_t*)0xB72815D6)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN23	(*(volatile uint_io8_t*)0xB72815D7)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN24	(*(volatile uint_io8_t*)0xB72815D8)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN25	(*(volatile uint_io8_t*)0xB72815D9)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN26	(*(volatile uint_io8_t*)0xB72815DA)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN27	(*(volatile uint_io8_t*)0xB72815DB)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN28	(*(volatile uint_io8_t*)0xB72815DC)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN29	(*(volatile uint_io8_t*)0xB72815DD)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN30	(*(volatile uint_io8_t*)0xB72815DE)  /*@bfbba@*/
#define PPU0_PFEN14_PFEN31	(*(volatile uint_io8_t*)0xB72815DF)  /*@bfbba@*/

#define PPU0_PFEN15	(PPU0.unPFEN15.u32Register)  /*@rg@*/
#define PPU0_PFEN15_PFEN0	(*(volatile uint_io8_t*)0xB72815E0)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN1	(*(volatile uint_io8_t*)0xB72815E1)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN2	(*(volatile uint_io8_t*)0xB72815E2)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN3	(*(volatile uint_io8_t*)0xB72815E3)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN4	(*(volatile uint_io8_t*)0xB72815E4)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN5	(*(volatile uint_io8_t*)0xB72815E5)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN6	(*(volatile uint_io8_t*)0xB72815E6)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN7	(*(volatile uint_io8_t*)0xB72815E7)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN8	(*(volatile uint_io8_t*)0xB72815E8)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN9	(*(volatile uint_io8_t*)0xB72815E9)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN10	(*(volatile uint_io8_t*)0xB72815EA)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN11	(*(volatile uint_io8_t*)0xB72815EB)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN12	(*(volatile uint_io8_t*)0xB72815EC)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN13	(*(volatile uint_io8_t*)0xB72815ED)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN14	(*(volatile uint_io8_t*)0xB72815EE)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN15	(*(volatile uint_io8_t*)0xB72815EF)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN16	(*(volatile uint_io8_t*)0xB72815F0)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN17	(*(volatile uint_io8_t*)0xB72815F1)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN18	(*(volatile uint_io8_t*)0xB72815F2)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN19	(*(volatile uint_io8_t*)0xB72815F3)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN20	(*(volatile uint_io8_t*)0xB72815F4)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN21	(*(volatile uint_io8_t*)0xB72815F5)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN22	(*(volatile uint_io8_t*)0xB72815F6)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN23	(*(volatile uint_io8_t*)0xB72815F7)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN24	(*(volatile uint_io8_t*)0xB72815F8)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN25	(*(volatile uint_io8_t*)0xB72815F9)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN26	(*(volatile uint_io8_t*)0xB72815FA)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN27	(*(volatile uint_io8_t*)0xB72815FB)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN28	(*(volatile uint_io8_t*)0xB72815FC)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN29	(*(volatile uint_io8_t*)0xB72815FD)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN30	(*(volatile uint_io8_t*)0xB72815FE)  /*@bfbba@*/
#define PPU0_PFEN15_PFEN31	(*(volatile uint_io8_t*)0xB72815FF)  /*@bfbba@*/

#define PPU0_PFEN16	(PPU0.unPFEN16.u32Register)  /*@rg@*/
#define PPU0_PFEN16_PFEN0	(*(volatile uint_io8_t*)0xB7281600)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN1	(*(volatile uint_io8_t*)0xB7281601)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN2	(*(volatile uint_io8_t*)0xB7281602)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN3	(*(volatile uint_io8_t*)0xB7281603)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN4	(*(volatile uint_io8_t*)0xB7281604)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN5	(*(volatile uint_io8_t*)0xB7281605)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN6	(*(volatile uint_io8_t*)0xB7281606)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN7	(*(volatile uint_io8_t*)0xB7281607)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN8	(*(volatile uint_io8_t*)0xB7281608)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN9	(*(volatile uint_io8_t*)0xB7281609)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN10	(*(volatile uint_io8_t*)0xB728160A)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN11	(*(volatile uint_io8_t*)0xB728160B)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN12	(*(volatile uint_io8_t*)0xB728160C)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN13	(*(volatile uint_io8_t*)0xB728160D)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN14	(*(volatile uint_io8_t*)0xB728160E)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN15	(*(volatile uint_io8_t*)0xB728160F)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN16	(*(volatile uint_io8_t*)0xB7281610)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN17	(*(volatile uint_io8_t*)0xB7281611)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN18	(*(volatile uint_io8_t*)0xB7281612)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN19	(*(volatile uint_io8_t*)0xB7281613)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN20	(*(volatile uint_io8_t*)0xB7281614)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN21	(*(volatile uint_io8_t*)0xB7281615)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN22	(*(volatile uint_io8_t*)0xB7281616)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN23	(*(volatile uint_io8_t*)0xB7281617)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN24	(*(volatile uint_io8_t*)0xB7281618)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN25	(*(volatile uint_io8_t*)0xB7281619)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN26	(*(volatile uint_io8_t*)0xB728161A)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN27	(*(volatile uint_io8_t*)0xB728161B)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN28	(*(volatile uint_io8_t*)0xB728161C)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN29	(*(volatile uint_io8_t*)0xB728161D)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN30	(*(volatile uint_io8_t*)0xB728161E)  /*@bfbba@*/
#define PPU0_PFEN16_PFEN31	(*(volatile uint_io8_t*)0xB728161F)  /*@bfbba@*/

#define PPU0_PFEN17	(PPU0.unPFEN17.u32Register)  /*@rg@*/
#define PPU0_PFEN17_PFEN0	(*(volatile uint_io8_t*)0xB7281620)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN1	(*(volatile uint_io8_t*)0xB7281621)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN2	(*(volatile uint_io8_t*)0xB7281622)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN3	(*(volatile uint_io8_t*)0xB7281623)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN4	(*(volatile uint_io8_t*)0xB7281624)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN5	(*(volatile uint_io8_t*)0xB7281625)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN6	(*(volatile uint_io8_t*)0xB7281626)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN7	(*(volatile uint_io8_t*)0xB7281627)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN8	(*(volatile uint_io8_t*)0xB7281628)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN9	(*(volatile uint_io8_t*)0xB7281629)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN10	(*(volatile uint_io8_t*)0xB728162A)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN11	(*(volatile uint_io8_t*)0xB728162B)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN12	(*(volatile uint_io8_t*)0xB728162C)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN13	(*(volatile uint_io8_t*)0xB728162D)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN14	(*(volatile uint_io8_t*)0xB728162E)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN15	(*(volatile uint_io8_t*)0xB728162F)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN16	(*(volatile uint_io8_t*)0xB7281630)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN17	(*(volatile uint_io8_t*)0xB7281631)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN18	(*(volatile uint_io8_t*)0xB7281632)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN19	(*(volatile uint_io8_t*)0xB7281633)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN20	(*(volatile uint_io8_t*)0xB7281634)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN21	(*(volatile uint_io8_t*)0xB7281635)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN22	(*(volatile uint_io8_t*)0xB7281636)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN23	(*(volatile uint_io8_t*)0xB7281637)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN24	(*(volatile uint_io8_t*)0xB7281638)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN25	(*(volatile uint_io8_t*)0xB7281639)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN26	(*(volatile uint_io8_t*)0xB728163A)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN27	(*(volatile uint_io8_t*)0xB728163B)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN28	(*(volatile uint_io8_t*)0xB728163C)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN29	(*(volatile uint_io8_t*)0xB728163D)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN30	(*(volatile uint_io8_t*)0xB728163E)  /*@bfbba@*/
#define PPU0_PFEN17_PFEN31	(*(volatile uint_io8_t*)0xB728163F)  /*@bfbba@*/

#define PPU0_PFEN18	(PPU0.unPFEN18.u32Register)  /*@rg@*/
#define PPU0_PFEN18_PFEN0	(*(volatile uint_io8_t*)0xB7281640)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN1	(*(volatile uint_io8_t*)0xB7281641)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN2	(*(volatile uint_io8_t*)0xB7281642)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN3	(*(volatile uint_io8_t*)0xB7281643)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN4	(*(volatile uint_io8_t*)0xB7281644)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN5	(*(volatile uint_io8_t*)0xB7281645)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN6	(*(volatile uint_io8_t*)0xB7281646)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN7	(*(volatile uint_io8_t*)0xB7281647)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN8	(*(volatile uint_io8_t*)0xB7281648)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN9	(*(volatile uint_io8_t*)0xB7281649)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN10	(*(volatile uint_io8_t*)0xB728164A)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN11	(*(volatile uint_io8_t*)0xB728164B)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN12	(*(volatile uint_io8_t*)0xB728164C)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN13	(*(volatile uint_io8_t*)0xB728164D)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN14	(*(volatile uint_io8_t*)0xB728164E)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN15	(*(volatile uint_io8_t*)0xB728164F)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN16	(*(volatile uint_io8_t*)0xB7281650)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN17	(*(volatile uint_io8_t*)0xB7281651)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN18	(*(volatile uint_io8_t*)0xB7281652)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN19	(*(volatile uint_io8_t*)0xB7281653)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN20	(*(volatile uint_io8_t*)0xB7281654)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN21	(*(volatile uint_io8_t*)0xB7281655)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN22	(*(volatile uint_io8_t*)0xB7281656)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN23	(*(volatile uint_io8_t*)0xB7281657)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN24	(*(volatile uint_io8_t*)0xB7281658)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN25	(*(volatile uint_io8_t*)0xB7281659)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN26	(*(volatile uint_io8_t*)0xB728165A)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN27	(*(volatile uint_io8_t*)0xB728165B)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN28	(*(volatile uint_io8_t*)0xB728165C)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN29	(*(volatile uint_io8_t*)0xB728165D)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN30	(*(volatile uint_io8_t*)0xB728165E)  /*@bfbba@*/
#define PPU0_PFEN18_PFEN31	(*(volatile uint_io8_t*)0xB728165F)  /*@bfbba@*/

#define PPU0_PFEN19	(PPU0.unPFEN19.u32Register)  /*@rg@*/
#define PPU0_PFEN19_PFEN0	(*(volatile uint_io8_t*)0xB7281660)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN1	(*(volatile uint_io8_t*)0xB7281661)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN2	(*(volatile uint_io8_t*)0xB7281662)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN3	(*(volatile uint_io8_t*)0xB7281663)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN4	(*(volatile uint_io8_t*)0xB7281664)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN5	(*(volatile uint_io8_t*)0xB7281665)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN6	(*(volatile uint_io8_t*)0xB7281666)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN7	(*(volatile uint_io8_t*)0xB7281667)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN8	(*(volatile uint_io8_t*)0xB7281668)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN9	(*(volatile uint_io8_t*)0xB7281669)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN10	(*(volatile uint_io8_t*)0xB728166A)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN11	(*(volatile uint_io8_t*)0xB728166B)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN12	(*(volatile uint_io8_t*)0xB728166C)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN13	(*(volatile uint_io8_t*)0xB728166D)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN14	(*(volatile uint_io8_t*)0xB728166E)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN15	(*(volatile uint_io8_t*)0xB728166F)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN16	(*(volatile uint_io8_t*)0xB7281670)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN17	(*(volatile uint_io8_t*)0xB7281671)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN18	(*(volatile uint_io8_t*)0xB7281672)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN19	(*(volatile uint_io8_t*)0xB7281673)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN20	(*(volatile uint_io8_t*)0xB7281674)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN21	(*(volatile uint_io8_t*)0xB7281675)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN22	(*(volatile uint_io8_t*)0xB7281676)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN23	(*(volatile uint_io8_t*)0xB7281677)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN24	(*(volatile uint_io8_t*)0xB7281678)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN25	(*(volatile uint_io8_t*)0xB7281679)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN26	(*(volatile uint_io8_t*)0xB728167A)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN27	(*(volatile uint_io8_t*)0xB728167B)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN28	(*(volatile uint_io8_t*)0xB728167C)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN29	(*(volatile uint_io8_t*)0xB728167D)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN30	(*(volatile uint_io8_t*)0xB728167E)  /*@bfbba@*/
#define PPU0_PFEN19_PFEN31	(*(volatile uint_io8_t*)0xB728167F)  /*@bfbba@*/

#define PPU0_PFEN20	(PPU0.unPFEN20.u32Register)  /*@rg@*/
#define PPU0_PFEN20_PFEN0	(*(volatile uint_io8_t*)0xB7281680)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN1	(*(volatile uint_io8_t*)0xB7281681)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN2	(*(volatile uint_io8_t*)0xB7281682)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN3	(*(volatile uint_io8_t*)0xB7281683)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN4	(*(volatile uint_io8_t*)0xB7281684)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN5	(*(volatile uint_io8_t*)0xB7281685)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN6	(*(volatile uint_io8_t*)0xB7281686)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN7	(*(volatile uint_io8_t*)0xB7281687)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN8	(*(volatile uint_io8_t*)0xB7281688)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN9	(*(volatile uint_io8_t*)0xB7281689)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN10	(*(volatile uint_io8_t*)0xB728168A)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN11	(*(volatile uint_io8_t*)0xB728168B)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN12	(*(volatile uint_io8_t*)0xB728168C)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN13	(*(volatile uint_io8_t*)0xB728168D)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN14	(*(volatile uint_io8_t*)0xB728168E)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN15	(*(volatile uint_io8_t*)0xB728168F)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN16	(*(volatile uint_io8_t*)0xB7281690)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN17	(*(volatile uint_io8_t*)0xB7281691)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN18	(*(volatile uint_io8_t*)0xB7281692)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN19	(*(volatile uint_io8_t*)0xB7281693)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN20	(*(volatile uint_io8_t*)0xB7281694)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN21	(*(volatile uint_io8_t*)0xB7281695)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN22	(*(volatile uint_io8_t*)0xB7281696)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN23	(*(volatile uint_io8_t*)0xB7281697)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN24	(*(volatile uint_io8_t*)0xB7281698)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN25	(*(volatile uint_io8_t*)0xB7281699)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN26	(*(volatile uint_io8_t*)0xB728169A)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN27	(*(volatile uint_io8_t*)0xB728169B)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN28	(*(volatile uint_io8_t*)0xB728169C)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN29	(*(volatile uint_io8_t*)0xB728169D)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN30	(*(volatile uint_io8_t*)0xB728169E)  /*@bfbba@*/
#define PPU0_PFEN20_PFEN31	(*(volatile uint_io8_t*)0xB728169F)  /*@bfbba@*/

#define PPU0_PFEN21	(PPU0.unPFEN21.u32Register)  /*@rg@*/
#define PPU0_PFEN21_PFEN0	(*(volatile uint_io8_t*)0xB72816A0)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN1	(*(volatile uint_io8_t*)0xB72816A1)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN2	(*(volatile uint_io8_t*)0xB72816A2)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN3	(*(volatile uint_io8_t*)0xB72816A3)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN4	(*(volatile uint_io8_t*)0xB72816A4)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN5	(*(volatile uint_io8_t*)0xB72816A5)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN6	(*(volatile uint_io8_t*)0xB72816A6)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN7	(*(volatile uint_io8_t*)0xB72816A7)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN8	(*(volatile uint_io8_t*)0xB72816A8)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN9	(*(volatile uint_io8_t*)0xB72816A9)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN10	(*(volatile uint_io8_t*)0xB72816AA)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN11	(*(volatile uint_io8_t*)0xB72816AB)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN12	(*(volatile uint_io8_t*)0xB72816AC)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN13	(*(volatile uint_io8_t*)0xB72816AD)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN14	(*(volatile uint_io8_t*)0xB72816AE)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN15	(*(volatile uint_io8_t*)0xB72816AF)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN16	(*(volatile uint_io8_t*)0xB72816B0)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN17	(*(volatile uint_io8_t*)0xB72816B1)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN18	(*(volatile uint_io8_t*)0xB72816B2)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN19	(*(volatile uint_io8_t*)0xB72816B3)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN20	(*(volatile uint_io8_t*)0xB72816B4)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN21	(*(volatile uint_io8_t*)0xB72816B5)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN22	(*(volatile uint_io8_t*)0xB72816B6)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN23	(*(volatile uint_io8_t*)0xB72816B7)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN24	(*(volatile uint_io8_t*)0xB72816B8)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN25	(*(volatile uint_io8_t*)0xB72816B9)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN26	(*(volatile uint_io8_t*)0xB72816BA)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN27	(*(volatile uint_io8_t*)0xB72816BB)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN28	(*(volatile uint_io8_t*)0xB72816BC)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN29	(*(volatile uint_io8_t*)0xB72816BD)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN30	(*(volatile uint_io8_t*)0xB72816BE)  /*@bfbba@*/
#define PPU0_PFEN21_PFEN31	(*(volatile uint_io8_t*)0xB72816BF)  /*@bfbba@*/

#define PPU0_PFEN22	(PPU0.unPFEN22.u32Register)  /*@rg@*/
#define PPU0_PFEN22_PFEN0	(*(volatile uint_io8_t*)0xB72816C0)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN1	(*(volatile uint_io8_t*)0xB72816C1)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN2	(*(volatile uint_io8_t*)0xB72816C2)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN3	(*(volatile uint_io8_t*)0xB72816C3)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN4	(*(volatile uint_io8_t*)0xB72816C4)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN5	(*(volatile uint_io8_t*)0xB72816C5)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN6	(*(volatile uint_io8_t*)0xB72816C6)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN7	(*(volatile uint_io8_t*)0xB72816C7)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN8	(*(volatile uint_io8_t*)0xB72816C8)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN9	(*(volatile uint_io8_t*)0xB72816C9)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN10	(*(volatile uint_io8_t*)0xB72816CA)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN11	(*(volatile uint_io8_t*)0xB72816CB)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN12	(*(volatile uint_io8_t*)0xB72816CC)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN13	(*(volatile uint_io8_t*)0xB72816CD)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN14	(*(volatile uint_io8_t*)0xB72816CE)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN15	(*(volatile uint_io8_t*)0xB72816CF)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN16	(*(volatile uint_io8_t*)0xB72816D0)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN17	(*(volatile uint_io8_t*)0xB72816D1)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN18	(*(volatile uint_io8_t*)0xB72816D2)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN19	(*(volatile uint_io8_t*)0xB72816D3)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN20	(*(volatile uint_io8_t*)0xB72816D4)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN21	(*(volatile uint_io8_t*)0xB72816D5)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN22	(*(volatile uint_io8_t*)0xB72816D6)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN23	(*(volatile uint_io8_t*)0xB72816D7)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN24	(*(volatile uint_io8_t*)0xB72816D8)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN25	(*(volatile uint_io8_t*)0xB72816D9)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN26	(*(volatile uint_io8_t*)0xB72816DA)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN27	(*(volatile uint_io8_t*)0xB72816DB)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN28	(*(volatile uint_io8_t*)0xB72816DC)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN29	(*(volatile uint_io8_t*)0xB72816DD)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN30	(*(volatile uint_io8_t*)0xB72816DE)  /*@bfbba@*/
#define PPU0_PFEN22_PFEN31	(*(volatile uint_io8_t*)0xB72816DF)  /*@bfbba@*/

#define PPU0_PFEN23	(PPU0.unPFEN23.u32Register)  /*@rg@*/
#define PPU0_PFEN23_PFEN0	(*(volatile uint_io8_t*)0xB72816E0)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN1	(*(volatile uint_io8_t*)0xB72816E1)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN2	(*(volatile uint_io8_t*)0xB72816E2)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN3	(*(volatile uint_io8_t*)0xB72816E3)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN4	(*(volatile uint_io8_t*)0xB72816E4)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN5	(*(volatile uint_io8_t*)0xB72816E5)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN6	(*(volatile uint_io8_t*)0xB72816E6)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN7	(*(volatile uint_io8_t*)0xB72816E7)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN8	(*(volatile uint_io8_t*)0xB72816E8)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN9	(*(volatile uint_io8_t*)0xB72816E9)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN10	(*(volatile uint_io8_t*)0xB72816EA)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN11	(*(volatile uint_io8_t*)0xB72816EB)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN12	(*(volatile uint_io8_t*)0xB72816EC)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN13	(*(volatile uint_io8_t*)0xB72816ED)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN14	(*(volatile uint_io8_t*)0xB72816EE)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN15	(*(volatile uint_io8_t*)0xB72816EF)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN16	(*(volatile uint_io8_t*)0xB72816F0)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN17	(*(volatile uint_io8_t*)0xB72816F1)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN18	(*(volatile uint_io8_t*)0xB72816F2)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN19	(*(volatile uint_io8_t*)0xB72816F3)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN20	(*(volatile uint_io8_t*)0xB72816F4)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN21	(*(volatile uint_io8_t*)0xB72816F5)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN22	(*(volatile uint_io8_t*)0xB72816F6)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN23	(*(volatile uint_io8_t*)0xB72816F7)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN24	(*(volatile uint_io8_t*)0xB72816F8)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN25	(*(volatile uint_io8_t*)0xB72816F9)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN26	(*(volatile uint_io8_t*)0xB72816FA)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN27	(*(volatile uint_io8_t*)0xB72816FB)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN28	(*(volatile uint_io8_t*)0xB72816FC)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN29	(*(volatile uint_io8_t*)0xB72816FD)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN30	(*(volatile uint_io8_t*)0xB72816FE)  /*@bfbba@*/
#define PPU0_PFEN23_PFEN31	(*(volatile uint_io8_t*)0xB72816FF)  /*@bfbba@*/

#define PPU0_PFEN24	(PPU0.unPFEN24.u32Register)  /*@rg@*/
#define PPU0_PFEN24_PFEN0	(*(volatile uint_io8_t*)0xB7281700)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN1	(*(volatile uint_io8_t*)0xB7281701)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN2	(*(volatile uint_io8_t*)0xB7281702)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN3	(*(volatile uint_io8_t*)0xB7281703)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN4	(*(volatile uint_io8_t*)0xB7281704)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN5	(*(volatile uint_io8_t*)0xB7281705)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN6	(*(volatile uint_io8_t*)0xB7281706)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN7	(*(volatile uint_io8_t*)0xB7281707)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN8	(*(volatile uint_io8_t*)0xB7281708)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN9	(*(volatile uint_io8_t*)0xB7281709)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN10	(*(volatile uint_io8_t*)0xB728170A)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN11	(*(volatile uint_io8_t*)0xB728170B)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN12	(*(volatile uint_io8_t*)0xB728170C)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN13	(*(volatile uint_io8_t*)0xB728170D)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN14	(*(volatile uint_io8_t*)0xB728170E)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN15	(*(volatile uint_io8_t*)0xB728170F)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN16	(*(volatile uint_io8_t*)0xB7281710)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN17	(*(volatile uint_io8_t*)0xB7281711)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN18	(*(volatile uint_io8_t*)0xB7281712)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN19	(*(volatile uint_io8_t*)0xB7281713)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN20	(*(volatile uint_io8_t*)0xB7281714)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN21	(*(volatile uint_io8_t*)0xB7281715)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN22	(*(volatile uint_io8_t*)0xB7281716)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN23	(*(volatile uint_io8_t*)0xB7281717)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN24	(*(volatile uint_io8_t*)0xB7281718)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN25	(*(volatile uint_io8_t*)0xB7281719)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN26	(*(volatile uint_io8_t*)0xB728171A)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN27	(*(volatile uint_io8_t*)0xB728171B)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN28	(*(volatile uint_io8_t*)0xB728171C)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN29	(*(volatile uint_io8_t*)0xB728171D)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN30	(*(volatile uint_io8_t*)0xB728171E)  /*@bfbba@*/
#define PPU0_PFEN24_PFEN31	(*(volatile uint_io8_t*)0xB728171F)  /*@bfbba@*/

#define PPU0_PFEN25	(PPU0.unPFEN25.u32Register)  /*@rg@*/
#define PPU0_PFEN25_PFEN0	(*(volatile uint_io8_t*)0xB7281720)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN1	(*(volatile uint_io8_t*)0xB7281721)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN2	(*(volatile uint_io8_t*)0xB7281722)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN3	(*(volatile uint_io8_t*)0xB7281723)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN4	(*(volatile uint_io8_t*)0xB7281724)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN5	(*(volatile uint_io8_t*)0xB7281725)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN6	(*(volatile uint_io8_t*)0xB7281726)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN7	(*(volatile uint_io8_t*)0xB7281727)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN8	(*(volatile uint_io8_t*)0xB7281728)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN9	(*(volatile uint_io8_t*)0xB7281729)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN10	(*(volatile uint_io8_t*)0xB728172A)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN11	(*(volatile uint_io8_t*)0xB728172B)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN12	(*(volatile uint_io8_t*)0xB728172C)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN13	(*(volatile uint_io8_t*)0xB728172D)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN14	(*(volatile uint_io8_t*)0xB728172E)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN15	(*(volatile uint_io8_t*)0xB728172F)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN16	(*(volatile uint_io8_t*)0xB7281730)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN17	(*(volatile uint_io8_t*)0xB7281731)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN18	(*(volatile uint_io8_t*)0xB7281732)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN19	(*(volatile uint_io8_t*)0xB7281733)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN20	(*(volatile uint_io8_t*)0xB7281734)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN21	(*(volatile uint_io8_t*)0xB7281735)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN22	(*(volatile uint_io8_t*)0xB7281736)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN23	(*(volatile uint_io8_t*)0xB7281737)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN24	(*(volatile uint_io8_t*)0xB7281738)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN25	(*(volatile uint_io8_t*)0xB7281739)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN26	(*(volatile uint_io8_t*)0xB728173A)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN27	(*(volatile uint_io8_t*)0xB728173B)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN28	(*(volatile uint_io8_t*)0xB728173C)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN29	(*(volatile uint_io8_t*)0xB728173D)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN30	(*(volatile uint_io8_t*)0xB728173E)  /*@bfbba@*/
#define PPU0_PFEN25_PFEN31	(*(volatile uint_io8_t*)0xB728173F)  /*@bfbba@*/

#define PPU0_PFEN26	(PPU0.unPFEN26.u32Register)  /*@rg@*/
#define PPU0_PFEN26_PFEN0	(*(volatile uint_io8_t*)0xB7281740)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN1	(*(volatile uint_io8_t*)0xB7281741)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN2	(*(volatile uint_io8_t*)0xB7281742)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN3	(*(volatile uint_io8_t*)0xB7281743)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN4	(*(volatile uint_io8_t*)0xB7281744)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN5	(*(volatile uint_io8_t*)0xB7281745)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN6	(*(volatile uint_io8_t*)0xB7281746)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN7	(*(volatile uint_io8_t*)0xB7281747)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN8	(*(volatile uint_io8_t*)0xB7281748)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN9	(*(volatile uint_io8_t*)0xB7281749)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN10	(*(volatile uint_io8_t*)0xB728174A)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN11	(*(volatile uint_io8_t*)0xB728174B)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN12	(*(volatile uint_io8_t*)0xB728174C)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN13	(*(volatile uint_io8_t*)0xB728174D)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN14	(*(volatile uint_io8_t*)0xB728174E)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN15	(*(volatile uint_io8_t*)0xB728174F)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN16	(*(volatile uint_io8_t*)0xB7281750)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN17	(*(volatile uint_io8_t*)0xB7281751)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN18	(*(volatile uint_io8_t*)0xB7281752)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN19	(*(volatile uint_io8_t*)0xB7281753)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN20	(*(volatile uint_io8_t*)0xB7281754)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN21	(*(volatile uint_io8_t*)0xB7281755)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN22	(*(volatile uint_io8_t*)0xB7281756)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN23	(*(volatile uint_io8_t*)0xB7281757)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN24	(*(volatile uint_io8_t*)0xB7281758)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN25	(*(volatile uint_io8_t*)0xB7281759)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN26	(*(volatile uint_io8_t*)0xB728175A)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN27	(*(volatile uint_io8_t*)0xB728175B)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN28	(*(volatile uint_io8_t*)0xB728175C)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN29	(*(volatile uint_io8_t*)0xB728175D)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN30	(*(volatile uint_io8_t*)0xB728175E)  /*@bfbba@*/
#define PPU0_PFEN26_PFEN31	(*(volatile uint_io8_t*)0xB728175F)  /*@bfbba@*/

#define PPU0_PFEN27	(PPU0.unPFEN27.u32Register)  /*@rg@*/
#define PPU0_PFEN27_PFEN0	(*(volatile uint_io8_t*)0xB7281760)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN1	(*(volatile uint_io8_t*)0xB7281761)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN2	(*(volatile uint_io8_t*)0xB7281762)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN3	(*(volatile uint_io8_t*)0xB7281763)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN4	(*(volatile uint_io8_t*)0xB7281764)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN5	(*(volatile uint_io8_t*)0xB7281765)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN6	(*(volatile uint_io8_t*)0xB7281766)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN7	(*(volatile uint_io8_t*)0xB7281767)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN8	(*(volatile uint_io8_t*)0xB7281768)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN9	(*(volatile uint_io8_t*)0xB7281769)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN10	(*(volatile uint_io8_t*)0xB728176A)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN11	(*(volatile uint_io8_t*)0xB728176B)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN12	(*(volatile uint_io8_t*)0xB728176C)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN13	(*(volatile uint_io8_t*)0xB728176D)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN14	(*(volatile uint_io8_t*)0xB728176E)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN15	(*(volatile uint_io8_t*)0xB728176F)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN16	(*(volatile uint_io8_t*)0xB7281770)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN17	(*(volatile uint_io8_t*)0xB7281771)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN18	(*(volatile uint_io8_t*)0xB7281772)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN19	(*(volatile uint_io8_t*)0xB7281773)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN20	(*(volatile uint_io8_t*)0xB7281774)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN21	(*(volatile uint_io8_t*)0xB7281775)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN22	(*(volatile uint_io8_t*)0xB7281776)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN23	(*(volatile uint_io8_t*)0xB7281777)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN24	(*(volatile uint_io8_t*)0xB7281778)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN25	(*(volatile uint_io8_t*)0xB7281779)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN26	(*(volatile uint_io8_t*)0xB728177A)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN27	(*(volatile uint_io8_t*)0xB728177B)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN28	(*(volatile uint_io8_t*)0xB728177C)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN29	(*(volatile uint_io8_t*)0xB728177D)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN30	(*(volatile uint_io8_t*)0xB728177E)  /*@bfbba@*/
#define PPU0_PFEN27_PFEN31	(*(volatile uint_io8_t*)0xB728177F)  /*@bfbba@*/

#define PPU0_PFEN28	(PPU0.unPFEN28.u32Register)  /*@rg@*/
#define PPU0_PFEN28_PFEN0	(*(volatile uint_io8_t*)0xB7281780)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN1	(*(volatile uint_io8_t*)0xB7281781)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN2	(*(volatile uint_io8_t*)0xB7281782)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN3	(*(volatile uint_io8_t*)0xB7281783)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN4	(*(volatile uint_io8_t*)0xB7281784)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN5	(*(volatile uint_io8_t*)0xB7281785)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN6	(*(volatile uint_io8_t*)0xB7281786)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN7	(*(volatile uint_io8_t*)0xB7281787)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN8	(*(volatile uint_io8_t*)0xB7281788)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN9	(*(volatile uint_io8_t*)0xB7281789)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN10	(*(volatile uint_io8_t*)0xB728178A)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN11	(*(volatile uint_io8_t*)0xB728178B)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN12	(*(volatile uint_io8_t*)0xB728178C)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN13	(*(volatile uint_io8_t*)0xB728178D)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN14	(*(volatile uint_io8_t*)0xB728178E)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN15	(*(volatile uint_io8_t*)0xB728178F)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN16	(*(volatile uint_io8_t*)0xB7281790)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN17	(*(volatile uint_io8_t*)0xB7281791)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN18	(*(volatile uint_io8_t*)0xB7281792)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN19	(*(volatile uint_io8_t*)0xB7281793)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN20	(*(volatile uint_io8_t*)0xB7281794)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN21	(*(volatile uint_io8_t*)0xB7281795)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN22	(*(volatile uint_io8_t*)0xB7281796)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN23	(*(volatile uint_io8_t*)0xB7281797)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN24	(*(volatile uint_io8_t*)0xB7281798)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN25	(*(volatile uint_io8_t*)0xB7281799)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN26	(*(volatile uint_io8_t*)0xB728179A)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN27	(*(volatile uint_io8_t*)0xB728179B)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN28	(*(volatile uint_io8_t*)0xB728179C)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN29	(*(volatile uint_io8_t*)0xB728179D)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN30	(*(volatile uint_io8_t*)0xB728179E)  /*@bfbba@*/
#define PPU0_PFEN28_PFEN31	(*(volatile uint_io8_t*)0xB728179F)  /*@bfbba@*/

#define PPU0_PFEN29	(PPU0.unPFEN29.u32Register)  /*@rg@*/
#define PPU0_PFEN29_PFEN0	(*(volatile uint_io8_t*)0xB72817A0)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN1	(*(volatile uint_io8_t*)0xB72817A1)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN2	(*(volatile uint_io8_t*)0xB72817A2)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN3	(*(volatile uint_io8_t*)0xB72817A3)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN4	(*(volatile uint_io8_t*)0xB72817A4)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN5	(*(volatile uint_io8_t*)0xB72817A5)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN6	(*(volatile uint_io8_t*)0xB72817A6)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN7	(*(volatile uint_io8_t*)0xB72817A7)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN8	(*(volatile uint_io8_t*)0xB72817A8)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN9	(*(volatile uint_io8_t*)0xB72817A9)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN10	(*(volatile uint_io8_t*)0xB72817AA)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN11	(*(volatile uint_io8_t*)0xB72817AB)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN12	(*(volatile uint_io8_t*)0xB72817AC)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN13	(*(volatile uint_io8_t*)0xB72817AD)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN14	(*(volatile uint_io8_t*)0xB72817AE)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN15	(*(volatile uint_io8_t*)0xB72817AF)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN16	(*(volatile uint_io8_t*)0xB72817B0)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN17	(*(volatile uint_io8_t*)0xB72817B1)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN18	(*(volatile uint_io8_t*)0xB72817B2)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN19	(*(volatile uint_io8_t*)0xB72817B3)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN20	(*(volatile uint_io8_t*)0xB72817B4)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN21	(*(volatile uint_io8_t*)0xB72817B5)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN22	(*(volatile uint_io8_t*)0xB72817B6)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN23	(*(volatile uint_io8_t*)0xB72817B7)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN24	(*(volatile uint_io8_t*)0xB72817B8)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN25	(*(volatile uint_io8_t*)0xB72817B9)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN26	(*(volatile uint_io8_t*)0xB72817BA)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN27	(*(volatile uint_io8_t*)0xB72817BB)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN28	(*(volatile uint_io8_t*)0xB72817BC)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN29	(*(volatile uint_io8_t*)0xB72817BD)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN30	(*(volatile uint_io8_t*)0xB72817BE)  /*@bfbba@*/
#define PPU0_PFEN29_PFEN31	(*(volatile uint_io8_t*)0xB72817BF)  /*@bfbba@*/

typedef struct stc_ppu0_pfenn_field{
    uint_io32_t		u1PFEN0:1;
    uint_io32_t		u1PFEN1:1;
    uint_io32_t		u1PFEN2:1;
    uint_io32_t		u1PFEN3:1;
    uint_io32_t		u1PFEN4:1;
    uint_io32_t		u1PFEN5:1;
    uint_io32_t		u1PFEN6:1;
    uint_io32_t		u1PFEN7:1;
    uint_io32_t		u1PFEN8:1;
    uint_io32_t		u1PFEN9:1;
    uint_io32_t		u1PFEN10:1;
    uint_io32_t		u1PFEN11:1;
    uint_io32_t		u1PFEN12:1;
    uint_io32_t		u1PFEN13:1;
    uint_io32_t		u1PFEN14:1;
    uint_io32_t		u1PFEN15:1;
    uint_io32_t		u1PFEN16:1;
    uint_io32_t		u1PFEN17:1;
    uint_io32_t		u1PFEN18:1;
    uint_io32_t		u1PFEN19:1;
    uint_io32_t		u1PFEN20:1;
    uint_io32_t		u1PFEN21:1;
    uint_io32_t		u1PFEN22:1;
    uint_io32_t		u1PFEN23:1;
    uint_io32_t		u1PFEN24:1;
    uint_io32_t		u1PFEN25:1;
    uint_io32_t		u1PFEN26:1;
    uint_io32_t		u1PFEN27:1;
    uint_io32_t		u1PFEN28:1;
    uint_io32_t		u1PFEN29:1;
    uint_io32_t		u1PFEN30:1;
    uint_io32_t		u1PFEN31:1;
}stc_ppu0_pfenn_field_t;

typedef union un_ppu0_pfenn{
    uint_io32_t		u32Register;
    stc_ppu0_pfenn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_pfenn_t;

/* LOCK4 */
#define PPU0_LOCK4	(PPU0.unLOCK4.u32Register)  /*@rg@*/
#define PPU0_LOCK4_L	PPU0_LOCK4  /*@bfrg@*/

typedef union un_ppu0_lock4{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppu0_lock4_t;


typedef struct stc_ppu0{
    un_ppu0_cr_t	unCR;	/* 0x00000000 */
    un_ppu0_sr_t	unSR;	/* 0x00000004 */
    un_ppu0_unlock_t	unUNLOCK;	/* 0x00000008 */
    un_ppu0_wpqclr_t	unWPQCLR;	/* 0x0000000C */
    un_ppu0_wuqclr_t	unWUQCLR;	/* 0x00000010 */
    un_ppu0_rpqclr_t	unRPQCLR;	/* 0x00000014 */
    un_ppu0_ruqclr_t	unRUQCLR;	/* 0x00000018 */
    uint_io8_t	au8Reserved0[100];	/* 0x0000001C */
    un_ppu0_pprn_t	unPPR0;	/* 0x00000080 */
    un_ppu0_pprn_t	unPPR1;	/* 0x00000084 */
    un_ppu0_pprn_t	unPPR2;	/* 0x00000088 */
    un_ppu0_pprn_t	unPPR3;	/* 0x0000008C */
    un_ppu0_pprn_t	unPPR4;	/* 0x00000090 */
    un_ppu0_pprn_t	unPPR5;	/* 0x00000094 */
    un_ppu0_pprn_t	unPPR6;	/* 0x00000098 */
    un_ppu0_pprn_t	unPPR7;	/* 0x0000009C */
    un_ppu0_pprn_t	unPPR8;	/* 0x000000A0 */
    un_ppu0_pprn_t	unPPR9;	/* 0x000000A4 */
    un_ppu0_pprn_t	unPPR10;	/* 0x000000A8 */
    un_ppu0_pprn_t	unPPR11;	/* 0x000000AC */
    un_ppu0_pprn_t	unPPR12;	/* 0x000000B0 */
    un_ppu0_pprn_t	unPPR13;	/* 0x000000B4 */
    un_ppu0_pprn_t	unPPR14;	/* 0x000000B8 */
    un_ppu0_pprn_t	unPPR15;	/* 0x000000BC */
    un_ppu0_pprn_t	unPPR16;	/* 0x000000C0 */
    un_ppu0_pprn_t	unPPR17;	/* 0x000000C4 */
    un_ppu0_pprn_t	unPPR18;	/* 0x000000C8 */
    un_ppu0_pprn_t	unPPR19;	/* 0x000000CC */
    un_ppu0_pprn_t	unPPR20;	/* 0x000000D0 */
    un_ppu0_pprn_t	unPPR21;	/* 0x000000D4 */
    un_ppu0_pprn_t	unPPR22;	/* 0x000000D8 */
    un_ppu0_pprn_t	unPPR23;	/* 0x000000DC */
    un_ppu0_pprn_t	unPPR24;	/* 0x000000E0 */
    un_ppu0_pprn_t	unPPR25;	/* 0x000000E4 */
    un_ppu0_pprn_t	unPPR26;	/* 0x000000E8 */
    un_ppu0_pprn_t	unPPR27;	/* 0x000000EC */
    un_ppu0_pprn_t	unPPR28;	/* 0x000000F0 */
    un_ppu0_pprn_t	unPPR29;	/* 0x000000F4 */
    un_ppu0_lock0_t	unLOCK0;	/* 0x000000F8 */
    uint_io8_t	au8Reserved1[4];	/* 0x000000FC */
    un_ppu0_purn_t	unPUR0;	/* 0x00000100 */
    un_ppu0_purn_t	unPUR1;	/* 0x00000104 */
    un_ppu0_purn_t	unPUR2;	/* 0x00000108 */
    un_ppu0_purn_t	unPUR3;	/* 0x0000010C */
    un_ppu0_purn_t	unPUR4;	/* 0x00000110 */
    un_ppu0_purn_t	unPUR5;	/* 0x00000114 */
    un_ppu0_purn_t	unPUR6;	/* 0x00000118 */
    un_ppu0_purn_t	unPUR7;	/* 0x0000011C */
    un_ppu0_purn_t	unPUR8;	/* 0x00000120 */
    un_ppu0_purn_t	unPUR9;	/* 0x00000124 */
    un_ppu0_purn_t	unPUR10;	/* 0x00000128 */
    un_ppu0_purn_t	unPUR11;	/* 0x0000012C */
    un_ppu0_purn_t	unPUR12;	/* 0x00000130 */
    un_ppu0_purn_t	unPUR13;	/* 0x00000134 */
    un_ppu0_purn_t	unPUR14;	/* 0x00000138 */
    un_ppu0_purn_t	unPUR15;	/* 0x0000013C */
    un_ppu0_purn_t	unPUR16;	/* 0x00000140 */
    un_ppu0_purn_t	unPUR17;	/* 0x00000144 */
    un_ppu0_purn_t	unPUR18;	/* 0x00000148 */
    un_ppu0_purn_t	unPUR19;	/* 0x0000014C */
    un_ppu0_purn_t	unPUR20;	/* 0x00000150 */
    un_ppu0_purn_t	unPUR21;	/* 0x00000154 */
    un_ppu0_purn_t	unPUR22;	/* 0x00000158 */
    un_ppu0_purn_t	unPUR23;	/* 0x0000015C */
    un_ppu0_purn_t	unPUR24;	/* 0x00000160 */
    un_ppu0_purn_t	unPUR25;	/* 0x00000164 */
    un_ppu0_purn_t	unPUR26;	/* 0x00000168 */
    un_ppu0_purn_t	unPUR27;	/* 0x0000016C */
    un_ppu0_purn_t	unPUR28;	/* 0x00000170 */
    un_ppu0_purn_t	unPUR29;	/* 0x00000174 */
    un_ppu0_lock1_t	unLOCK1;	/* 0x00000178 */
    uint_io8_t	au8Reserved2[4];	/* 0x0000017C */
    un_ppu0_ppwan_t	unPPWA0;	/* 0x00000180 */
    un_ppu0_ppwan_t	unPPWA1;	/* 0x00000184 */
    un_ppu0_ppwan_t	unPPWA2;	/* 0x00000188 */
    un_ppu0_ppwan_t	unPPWA3;	/* 0x0000018C */
    un_ppu0_ppwan_t	unPPWA4;	/* 0x00000190 */
    un_ppu0_ppwan_t	unPPWA5;	/* 0x00000194 */
    un_ppu0_ppwan_t	unPPWA6;	/* 0x00000198 */
    un_ppu0_ppwan_t	unPPWA7;	/* 0x0000019C */
    un_ppu0_ppwan_t	unPPWA8;	/* 0x000001A0 */
    un_ppu0_ppwan_t	unPPWA9;	/* 0x000001A4 */
    un_ppu0_ppwan_t	unPPWA10;	/* 0x000001A8 */
    un_ppu0_ppwan_t	unPPWA11;	/* 0x000001AC */
    un_ppu0_ppwan_t	unPPWA12;	/* 0x000001B0 */
    un_ppu0_ppwan_t	unPPWA13;	/* 0x000001B4 */
    un_ppu0_ppwan_t	unPPWA14;	/* 0x000001B8 */
    un_ppu0_ppwan_t	unPPWA15;	/* 0x000001BC */
    un_ppu0_ppwan_t	unPPWA16;	/* 0x000001C0 */
    un_ppu0_ppwan_t	unPPWA17;	/* 0x000001C4 */
    un_ppu0_ppwan_t	unPPWA18;	/* 0x000001C8 */
    un_ppu0_ppwan_t	unPPWA19;	/* 0x000001CC */
    un_ppu0_ppwan_t	unPPWA20;	/* 0x000001D0 */
    un_ppu0_ppwan_t	unPPWA21;	/* 0x000001D4 */
    un_ppu0_ppwan_t	unPPWA22;	/* 0x000001D8 */
    un_ppu0_ppwan_t	unPPWA23;	/* 0x000001DC */
    un_ppu0_ppwan_t	unPPWA24;	/* 0x000001E0 */
    un_ppu0_ppwan_t	unPPWA25;	/* 0x000001E4 */
    un_ppu0_ppwan_t	unPPWA26;	/* 0x000001E8 */
    un_ppu0_ppwan_t	unPPWA27;	/* 0x000001EC */
    un_ppu0_ppwan_t	unPPWA28;	/* 0x000001F0 */
    un_ppu0_ppwan_t	unPPWA29;	/* 0x000001F4 */
    un_ppu0_lock2_t	unLOCK2;	/* 0x000001F8 */
    uint_io8_t	au8Reserved3[4];	/* 0x000001FC */
    un_ppu0_puwan_t	unPUWA0;	/* 0x00000200 */
    un_ppu0_puwan_t	unPUWA1;	/* 0x00000204 */
    un_ppu0_puwan_t	unPUWA2;	/* 0x00000208 */
    un_ppu0_puwan_t	unPUWA3;	/* 0x0000020C */
    un_ppu0_puwan_t	unPUWA4;	/* 0x00000210 */
    un_ppu0_puwan_t	unPUWA5;	/* 0x00000214 */
    un_ppu0_puwan_t	unPUWA6;	/* 0x00000218 */
    un_ppu0_puwan_t	unPUWA7;	/* 0x0000021C */
    un_ppu0_puwan_t	unPUWA8;	/* 0x00000220 */
    un_ppu0_puwan_t	unPUWA9;	/* 0x00000224 */
    un_ppu0_puwan_t	unPUWA10;	/* 0x00000228 */
    un_ppu0_puwan_t	unPUWA11;	/* 0x0000022C */
    un_ppu0_puwan_t	unPUWA12;	/* 0x00000230 */
    un_ppu0_puwan_t	unPUWA13;	/* 0x00000234 */
    un_ppu0_puwan_t	unPUWA14;	/* 0x00000238 */
    un_ppu0_puwan_t	unPUWA15;	/* 0x0000023C */
    un_ppu0_puwan_t	unPUWA16;	/* 0x00000240 */
    un_ppu0_puwan_t	unPUWA17;	/* 0x00000244 */
    un_ppu0_puwan_t	unPUWA18;	/* 0x00000248 */
    un_ppu0_puwan_t	unPUWA19;	/* 0x0000024C */
    un_ppu0_puwan_t	unPUWA20;	/* 0x00000250 */
    un_ppu0_puwan_t	unPUWA21;	/* 0x00000254 */
    un_ppu0_puwan_t	unPUWA22;	/* 0x00000258 */
    un_ppu0_puwan_t	unPUWA23;	/* 0x0000025C */
    un_ppu0_puwan_t	unPUWA24;	/* 0x00000260 */
    un_ppu0_puwan_t	unPUWA25;	/* 0x00000264 */
    un_ppu0_puwan_t	unPUWA26;	/* 0x00000268 */
    un_ppu0_puwan_t	unPUWA27;	/* 0x0000026C */
    un_ppu0_puwan_t	unPUWA28;	/* 0x00000270 */
    un_ppu0_puwan_t	unPUWA29;	/* 0x00000274 */
    un_ppu0_lock3_t	unLOCK3;	/* 0x00000278 */
    uint_io8_t	au8Reserved4[4];	/* 0x0000027C */
    un_ppu0_pfenn_t	unPFEN0;	/* 0x00000280 */
    un_ppu0_pfenn_t	unPFEN1;	/* 0x00000284 */
    un_ppu0_pfenn_t	unPFEN2;	/* 0x00000288 */
    un_ppu0_pfenn_t	unPFEN3;	/* 0x0000028C */
    un_ppu0_pfenn_t	unPFEN4;	/* 0x00000290 */
    un_ppu0_pfenn_t	unPFEN5;	/* 0x00000294 */
    un_ppu0_pfenn_t	unPFEN6;	/* 0x00000298 */
    un_ppu0_pfenn_t	unPFEN7;	/* 0x0000029C */
    un_ppu0_pfenn_t	unPFEN8;	/* 0x000002A0 */
    un_ppu0_pfenn_t	unPFEN9;	/* 0x000002A4 */
    un_ppu0_pfenn_t	unPFEN10;	/* 0x000002A8 */
    un_ppu0_pfenn_t	unPFEN11;	/* 0x000002AC */
    un_ppu0_pfenn_t	unPFEN12;	/* 0x000002B0 */
    un_ppu0_pfenn_t	unPFEN13;	/* 0x000002B4 */
    un_ppu0_pfenn_t	unPFEN14;	/* 0x000002B8 */
    un_ppu0_pfenn_t	unPFEN15;	/* 0x000002BC */
    un_ppu0_pfenn_t	unPFEN16;	/* 0x000002C0 */
    un_ppu0_pfenn_t	unPFEN17;	/* 0x000002C4 */
    un_ppu0_pfenn_t	unPFEN18;	/* 0x000002C8 */
    un_ppu0_pfenn_t	unPFEN19;	/* 0x000002CC */
    un_ppu0_pfenn_t	unPFEN20;	/* 0x000002D0 */
    un_ppu0_pfenn_t	unPFEN21;	/* 0x000002D4 */
    un_ppu0_pfenn_t	unPFEN22;	/* 0x000002D8 */
    un_ppu0_pfenn_t	unPFEN23;	/* 0x000002DC */
    un_ppu0_pfenn_t	unPFEN24;	/* 0x000002E0 */
    un_ppu0_pfenn_t	unPFEN25;	/* 0x000002E4 */
    un_ppu0_pfenn_t	unPFEN26;	/* 0x000002E8 */
    un_ppu0_pfenn_t	unPFEN27;	/* 0x000002EC */
    un_ppu0_pfenn_t	unPFEN28;	/* 0x000002F0 */
    un_ppu0_pfenn_t	unPFEN29;	/* 0x000002F4 */
    un_ppu0_lock4_t	unLOCK4;	/* 0x000002F8 */
    uint_io8_t	au8Reserved5[32004];	/* 0x000002FC */
}stc_ppu0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_ppu0_t	stcPPU0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


#endif /* __S6J3200_PPU_H */
