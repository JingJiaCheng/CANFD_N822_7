/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SYSC_H
#define __S6J3200_SYSC_H

#include "s6j3200io_basetypes.h"

/* SYSC1 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC1	stcSYSC1
#else /* __IO_DEFINE */
#define SYSC1	(*((volatile stc_sysc1_t*)0xB0300000))
#endif /* __IO_DEFINE */

/* PROTKEYR */
#define SYSC1_PROTKEYR	(SYSC1.unPROTKEYR.u32Register)  /*@rg@*/
#define SYSC1_PROTKEYR_PROTKEY	SYSC1_PROTKEYR  /*@bfrg@*/

typedef union un_sysc1_protkeyr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_protkeyr_t;

/* RUNCKSELR0 */
#define SYSC1_RUNCKSELR0	(SYSC1.unRUNCKSELR0.u32Register)  /*@rg@*/
#define SYSC1_RUNCKSELR0_CD0CSL	(SYSC1.unRUNCKSELR0.stcField.u3CD0CSL)  /*@bf@*/
#define SYSC1_RUNCKSELR0_LCP0ACSL	(*(volatile uint_io8_t*)0xB1000408)  /*@bfbba@*/
#define SYSC1_RUNCKSELR0_LCP1ACSL	(*(volatile uint_io8_t*)0xB100040C)  /*@bfbba@*/
#define SYSC1_RUNCKSELR0_LAPP0ACSL	(*(volatile uint_io8_t*)0xB1000410)  /*@bfbba@*/
#define SYSC1_RUNCKSELR0_LAPP1ACSL	(*(volatile uint_io8_t*)0xB1000414)  /*@bfbba@*/
#define SYSC1_RUNCKSELR0_HSSPICSL	(SYSC1.unRUNCKSELR0.stcField.u4HSSPICSL)  /*@bf@*/

typedef struct stc_sysc1_runckselr0_field{
    uint_io32_t		u3CD0CSL:3;
    uint_io32_t		:5;
    uint_io32_t		u1LCP0ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LCP1ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LAPP0ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LAPP1ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u4HSSPICSL:4;
    uint_io32_t		:4;
}stc_sysc1_runckselr0_field_t;

typedef union un_sysc1_runckselr0{
    uint_io32_t		u32Register;
    stc_sysc1_runckselr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckselr0_t;

/* RUNCKSELR1 */
#define SYSC1_RUNCKSELR1	(SYSC1.unRUNCKSELR1.u32Register)  /*@rg@*/
#define SYSC1_RUNCKSELR1_CD1CSL	(SYSC1.unRUNCKSELR1.stcField.u4CD1CSL)  /*@bf@*/
#define SYSC1_RUNCKSELR1_CD2CSL	(SYSC1.unRUNCKSELR1.stcField.u4CD2CSL)  /*@bf@*/
#define SYSC1_RUNCKSELR1_CD3CSL	(SYSC1.unRUNCKSELR1.stcField.u4CD3CSL)  /*@bf@*/
#define SYSC1_RUNCKSELR1_CD4CSL	(SYSC1.unRUNCKSELR1.stcField.u4CD4CSL)  /*@bf@*/

typedef struct stc_sysc1_runckselr1_field{
    uint_io32_t		u4CD1CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD2CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD3CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD4CSL:4;
    uint_io32_t		:4;
}stc_sysc1_runckselr1_field_t;

typedef union un_sysc1_runckselr1{
    uint_io32_t		u32Register;
    stc_sysc1_runckselr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckselr1_t;

/* RUNCKSELR2 */
#define SYSC1_RUNCKSELR2	(SYSC1.unRUNCKSELR2.u32Register)  /*@rg@*/
#define SYSC1_RUNCKSELR2_CD5CSL	(SYSC1.unRUNCKSELR2.stcField.u4CD5CSL)  /*@bf@*/
#define SYSC1_RUNCKSELR2_TRCCSL	(SYSC1.unRUNCKSELR2.stcField.u3TRCCSL)  /*@bf@*/

typedef struct stc_sysc1_runckselr2_field{
    uint_io32_t		u4CD5CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u3TRCCSL:3;
    uint_io32_t		:21;
}stc_sysc1_runckselr2_field_t;

typedef union un_sysc1_runckselr2{
    uint_io32_t		u32Register;
    stc_sysc1_runckselr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckselr2_t;

/* RUNCKER0 */
#define SYSC1_RUNCKER0	(SYSC1.unRUNCKER0.u32Register)  /*@rg@*/
#define SYSC1_RUNCKER0_ENCLKCPU0	(*(volatile uint_io8_t*)0xB1000460)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKATB	(*(volatile uint_io8_t*)0xB1000464)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKDBG	(*(volatile uint_io8_t*)0xB1000465)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKTRC	(*(volatile uint_io8_t*)0xB1000466)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKHPM2	(*(volatile uint_io8_t*)0xB1000467)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKHPM	(*(volatile uint_io8_t*)0xB1000468)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKDMA	(*(volatile uint_io8_t*)0xB1000469)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKMEMC	(*(volatile uint_io8_t*)0xB100046A)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKEXTBUS	(*(volatile uint_io8_t*)0xB100046B)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKSYSC1	(*(volatile uint_io8_t*)0xB100046E)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKHAPP0A0	(*(volatile uint_io8_t*)0xB1000470)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKHAPP0A1	(*(volatile uint_io8_t*)0xB1000471)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKHAPP1B0	(*(volatile uint_io8_t*)0xB1000472)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKHAPP1B1	(*(volatile uint_io8_t*)0xB1000473)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLLPBM	(*(volatile uint_io8_t*)0xB1000474)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLLPBM2	(*(volatile uint_io8_t*)0xB1000475)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLCP	(*(volatile uint_io8_t*)0xB1000477)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLCP0	(*(volatile uint_io8_t*)0xB1000478)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLCP1	(*(volatile uint_io8_t*)0xB1000479)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLAPP0	(*(volatile uint_io8_t*)0xB100047A)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLAPP1	(*(volatile uint_io8_t*)0xB100047B)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLCP0A	(*(volatile uint_io8_t*)0xB100047C)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLCP1A	(*(volatile uint_io8_t*)0xB100047D)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLAPP0A	(*(volatile uint_io8_t*)0xB100047E)  /*@bfbba@*/
#define SYSC1_RUNCKER0_ENCLKLAPP1A	(*(volatile uint_io8_t*)0xB100047F)  /*@bfbba@*/

typedef struct stc_sysc1_runcker0_field{
    uint_io32_t		u1ENCLKCPU0:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKATB:1;
    uint_io32_t		u1ENCLKDBG:1;
    uint_io32_t		u1ENCLKTRC:1;
    uint_io32_t		u1ENCLKHPM2:1;
    uint_io32_t		u1ENCLKHPM:1;
    uint_io32_t		u1ENCLKDMA:1;
    uint_io32_t		u1ENCLKMEMC:1;
    uint_io32_t		u1ENCLKEXTBUS:1;
    uint_io32_t		:2;
    uint_io32_t		u1ENCLKSYSC1:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKHAPP0A0:1;
    uint_io32_t		u1ENCLKHAPP0A1:1;
    uint_io32_t		u1ENCLKHAPP1B0:1;
    uint_io32_t		u1ENCLKHAPP1B1:1;
    uint_io32_t		u1ENCLKLLPBM:1;
    uint_io32_t		u1ENCLKLLPBM2:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKLCP:1;
    uint_io32_t		u1ENCLKLCP0:1;
    uint_io32_t		u1ENCLKLCP1:1;
    uint_io32_t		u1ENCLKLAPP0:1;
    uint_io32_t		u1ENCLKLAPP1:1;
    uint_io32_t		u1ENCLKLCP0A:1;
    uint_io32_t		u1ENCLKLCP1A:1;
    uint_io32_t		u1ENCLKLAPP0A:1;
    uint_io32_t		u1ENCLKLAPP1A:1;
}stc_sysc1_runcker0_field_t;

typedef union un_sysc1_runcker0{
    uint_io32_t		u32Register;
    stc_sysc1_runcker0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runcker0_t;

/* RUNCKER1 */
#define SYSC1_RUNCKER1	(SYSC1.unRUNCKER1.u32Register)  /*@rg@*/
#define SYSC1_RUNCKER1_ENCLKHSSPI	(*(volatile uint_io8_t*)0xB1000480)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD1	(*(volatile uint_io8_t*)0xB1000488)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD1A0	(*(volatile uint_io8_t*)0xB1000489)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD1A1	(*(volatile uint_io8_t*)0xB100048A)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD1B0	(*(volatile uint_io8_t*)0xB100048B)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD1B1	(*(volatile uint_io8_t*)0xB100048C)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD2	(*(volatile uint_io8_t*)0xB1000490)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD2A0	(*(volatile uint_io8_t*)0xB1000491)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD2A1	(*(volatile uint_io8_t*)0xB1000492)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD2B0	(*(volatile uint_io8_t*)0xB1000493)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD2B1	(*(volatile uint_io8_t*)0xB1000494)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD3	(*(volatile uint_io8_t*)0xB1000498)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD3A0	(*(volatile uint_io8_t*)0xB1000499)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD3A1	(*(volatile uint_io8_t*)0xB100049A)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD3B0	(*(volatile uint_io8_t*)0xB100049B)  /*@bfbba@*/
#define SYSC1_RUNCKER1_ENCLKCD3B1	(*(volatile uint_io8_t*)0xB100049C)  /*@bfbba@*/

typedef struct stc_sysc1_runcker1_field{
    uint_io32_t		u1ENCLKHSSPI:1;
    uint_io32_t		:7;
    uint_io32_t		u1ENCLKCD1:1;
    uint_io32_t		u1ENCLKCD1A0:1;
    uint_io32_t		u1ENCLKCD1A1:1;
    uint_io32_t		u1ENCLKCD1B0:1;
    uint_io32_t		u1ENCLKCD1B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD2:1;
    uint_io32_t		u1ENCLKCD2A0:1;
    uint_io32_t		u1ENCLKCD2A1:1;
    uint_io32_t		u1ENCLKCD2B0:1;
    uint_io32_t		u1ENCLKCD2B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD3:1;
    uint_io32_t		u1ENCLKCD3A0:1;
    uint_io32_t		u1ENCLKCD3A1:1;
    uint_io32_t		u1ENCLKCD3B0:1;
    uint_io32_t		u1ENCLKCD3B1:1;
    uint_io32_t		:3;
}stc_sysc1_runcker1_field_t;

typedef union un_sysc1_runcker1{
    uint_io32_t		u32Register;
    stc_sysc1_runcker1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runcker1_t;

/* RUNCKER2 */
#define SYSC1_RUNCKER2	(SYSC1.unRUNCKER2.u32Register)  /*@rg@*/
#define SYSC1_RUNCKER2_ENCLKCD4	(*(volatile uint_io8_t*)0xB10004A0)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD4A0	(*(volatile uint_io8_t*)0xB10004A1)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD4A1	(*(volatile uint_io8_t*)0xB10004A2)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD4B0	(*(volatile uint_io8_t*)0xB10004A3)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD4B1	(*(volatile uint_io8_t*)0xB10004A4)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD5	(*(volatile uint_io8_t*)0xB10004A8)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD5A0	(*(volatile uint_io8_t*)0xB10004A9)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD5A1	(*(volatile uint_io8_t*)0xB10004AA)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD5B0	(*(volatile uint_io8_t*)0xB10004AB)  /*@bfbba@*/
#define SYSC1_RUNCKER2_ENCLKCD5B1	(*(volatile uint_io8_t*)0xB10004AC)  /*@bfbba@*/

typedef struct stc_sysc1_runcker2_field{
    uint_io32_t		u1ENCLKCD4:1;
    uint_io32_t		u1ENCLKCD4A0:1;
    uint_io32_t		u1ENCLKCD4A1:1;
    uint_io32_t		u1ENCLKCD4B0:1;
    uint_io32_t		u1ENCLKCD4B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD5:1;
    uint_io32_t		u1ENCLKCD5A0:1;
    uint_io32_t		u1ENCLKCD5A1:1;
    uint_io32_t		u1ENCLKCD5B0:1;
    uint_io32_t		u1ENCLKCD5B1:1;
    uint_io32_t		:19;
}stc_sysc1_runcker2_field_t;

typedef union un_sysc1_runcker2{
    uint_io32_t		u32Register;
    stc_sysc1_runcker2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runcker2_t;

/* RUNCKDIVR0 */
#define SYSC1_RUNCKDIVR0	(SYSC1.unRUNCKDIVR0.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR0_SYSDIV	(SYSC1.unRUNCKDIVR0.stcField.u5SYSDIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR0_ATBDIV	(SYSC1.unRUNCKDIVR0.stcField.u2ATBDIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR0_DBGDIV	(SYSC1.unRUNCKDIVR0.stcField.u2DBGDIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR0_TRCDIV	(SYSC1.unRUNCKDIVR0.stcField.u5TRCDIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR0_HPMDIV	(SYSC1.unRUNCKDIVR0.stcField.u3HPMDIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr0_field{
    uint_io32_t		u5SYSDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u2ATBDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u2DBGDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u5TRCDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u3HPMDIV:3;
    uint_io32_t		:5;
}stc_sysc1_runckdivr0_field_t;

typedef union un_sysc1_runckdivr0{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr0_t;

/* RUNCKDIVR1 */
#define SYSC1_RUNCKDIVR1	(SYSC1.unRUNCKDIVR1.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR1_EXTBUSDIV	(SYSC1.unRUNCKDIVR1.stcField.u3EXTBUSDIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR1_SYSC1DIV	(SYSC1.unRUNCKDIVR1.stcField.u4SYSC1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR1_HAPP0A0DIV	(SYSC1.unRUNCKDIVR1.stcField.u4HAPP0A0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR1_HAPP0A1DIV	(SYSC1.unRUNCKDIVR1.stcField.u4HAPP0A1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR1_HAPP1B0DIV	(SYSC1.unRUNCKDIVR1.stcField.u4HAPP1B0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR1_HAPP1B1DIV	(SYSC1.unRUNCKDIVR1.stcField.u4HAPP1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr1_field{
    uint_io32_t		u3EXTBUSDIV:3;
    uint_io32_t		:1;
    uint_io32_t		u4SYSC1DIV:4;
    uint_io32_t		:8;
    uint_io32_t		u4HAPP0A0DIV:4;
    uint_io32_t		u4HAPP0A1DIV:4;
    uint_io32_t		u4HAPP1B0DIV:4;
    uint_io32_t		u4HAPP1B1DIV:4;
}stc_sysc1_runckdivr1_field_t;

typedef union un_sysc1_runckdivr1{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr1_t;

/* RUNCKDIVR2 */
#define SYSC1_RUNCKDIVR2	(SYSC1.unRUNCKDIVR2.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR2_LCPDIV	(SYSC1.unRUNCKDIVR2.stcField.u2LCPDIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR2_LCP0DIV	(SYSC1.unRUNCKDIVR2.stcField.u4LCP0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR2_LCP1DIV	(SYSC1.unRUNCKDIVR2.stcField.u4LCP1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR2_LAPP0DIV	(SYSC1.unRUNCKDIVR2.stcField.u4LAPP0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR2_LAPP1DIV	(SYSC1.unRUNCKDIVR2.stcField.u4LAPP1DIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr2_field{
    uint_io32_t		u2LCPDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u4LCP0DIV:4;
    uint_io32_t		u4LCP1DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP0DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP1DIV:4;
    uint_io32_t		:4;
}stc_sysc1_runckdivr2_field_t;

typedef union un_sysc1_runckdivr2{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr2_t;

/* RUNCKDIVR3 */
#define SYSC1_RUNCKDIVR3	(SYSC1.unRUNCKDIVR3.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR3_LCP0ADIV	(SYSC1.unRUNCKDIVR3.stcField.u5LCP0ADIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR3_LCP1ADIV	(SYSC1.unRUNCKDIVR3.stcField.u5LCP1ADIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR3_LAPP0ADIV	(SYSC1.unRUNCKDIVR3.stcField.u5LAPP0ADIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR3_LAPP1ADIV	(SYSC1.unRUNCKDIVR3.stcField.u5LAPP1ADIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr3_field{
    uint_io32_t		u5LCP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LCP1ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP1ADIV:5;
    uint_io32_t		:3;
}stc_sysc1_runckdivr3_field_t;

typedef union un_sysc1_runckdivr3{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr3_t;

/* RUNCKDIVR4 */
#define SYSC1_RUNCKDIVR4	(SYSC1.unRUNCKDIVR4.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR4_HSSPIDIV	(SYSC1.unRUNCKDIVR4.stcField.u5HSSPIDIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr4_field{
    uint_io32_t		u5HSSPIDIV:5;
    uint_io32_t		:27;
}stc_sysc1_runckdivr4_field_t;

typedef union un_sysc1_runckdivr4{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr4_t;

/* RUNCKDIVR5 */
#define SYSC1_RUNCKDIVR5	(SYSC1.unRUNCKDIVR5.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR5_CD1DIV	(SYSC1.unRUNCKDIVR5.stcField.u5CD1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR5_CD1A0DIV	(SYSC1.unRUNCKDIVR5.stcField.u4CD1A0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR5_CD1A1DIV	(SYSC1.unRUNCKDIVR5.stcField.u4CD1A1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR5_CD1B0DIV	(SYSC1.unRUNCKDIVR5.stcField.u4CD1B0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR5_CD1B1DIV	(SYSC1.unRUNCKDIVR5.stcField.u4CD1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr5_field{
    uint_io32_t		u5CD1DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD1A0DIV:4;
    uint_io32_t		u4CD1A1DIV:4;
    uint_io32_t		u4CD1B0DIV:4;
    uint_io32_t		u4CD1B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_runckdivr5_field_t;

typedef union un_sysc1_runckdivr5{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr5_t;

/* RUNCKDIVR6 */
#define SYSC1_RUNCKDIVR6	(SYSC1.unRUNCKDIVR6.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR6_CD2DIV	(SYSC1.unRUNCKDIVR6.stcField.u5CD2DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR6_CD2A0DIV	(SYSC1.unRUNCKDIVR6.stcField.u4CD2A0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR6_CD2A1DIV	(SYSC1.unRUNCKDIVR6.stcField.u4CD2A1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR6_CD2B0DIV	(SYSC1.unRUNCKDIVR6.stcField.u4CD2B0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR6_CD2B1DIV	(SYSC1.unRUNCKDIVR6.stcField.u4CD2B1DIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr6_field{
    uint_io32_t		u5CD2DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD2A0DIV:4;
    uint_io32_t		u4CD2A1DIV:4;
    uint_io32_t		u4CD2B0DIV:4;
    uint_io32_t		u4CD2B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_runckdivr6_field_t;

typedef union un_sysc1_runckdivr6{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr6_t;

/* RUNCKDIVR7 */
#define SYSC1_RUNCKDIVR7	(SYSC1.unRUNCKDIVR7.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR7_CD3DIV	(SYSC1.unRUNCKDIVR7.stcField.u5CD3DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR7_CD3A0DIV	(SYSC1.unRUNCKDIVR7.stcField.u4CD3A0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR7_CD3A1DIV	(SYSC1.unRUNCKDIVR7.stcField.u4CD3A1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR7_CD3B0DIV	(SYSC1.unRUNCKDIVR7.stcField.u4CD3B0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR7_CD3B1DIV	(SYSC1.unRUNCKDIVR7.stcField.u4CD3B1DIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr7_field{
    uint_io32_t		u5CD3DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD3A0DIV:4;
    uint_io32_t		u4CD3A1DIV:4;
    uint_io32_t		u4CD3B0DIV:4;
    uint_io32_t		u4CD3B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_runckdivr7_field_t;

typedef union un_sysc1_runckdivr7{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr7_t;

/* RUNCKDIVR8 */
#define SYSC1_RUNCKDIVR8	(SYSC1.unRUNCKDIVR8.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR8_CD4DIV	(SYSC1.unRUNCKDIVR8.stcField.u5CD4DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR8_CD4A0DIV	(SYSC1.unRUNCKDIVR8.stcField.u4CD4A0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR8_CD4A1DIV	(SYSC1.unRUNCKDIVR8.stcField.u4CD4A1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR8_CD4B0DIV	(SYSC1.unRUNCKDIVR8.stcField.u4CD4B0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR8_CD4B1DIV	(SYSC1.unRUNCKDIVR8.stcField.u4CD4B1DIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr8_field{
    uint_io32_t		u5CD4DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD4A0DIV:4;
    uint_io32_t		u4CD4A1DIV:4;
    uint_io32_t		u4CD4B0DIV:4;
    uint_io32_t		u4CD4B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_runckdivr8_field_t;

typedef union un_sysc1_runckdivr8{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr8_t;

/* RUNCKDIVR9 */
#define SYSC1_RUNCKDIVR9	(SYSC1.unRUNCKDIVR9.u32Register)  /*@rg@*/
#define SYSC1_RUNCKDIVR9_CD5DIV	(SYSC1.unRUNCKDIVR9.stcField.u5CD5DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR9_CD5A0DIV	(SYSC1.unRUNCKDIVR9.stcField.u4CD5A0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR9_CD5A1DIV	(SYSC1.unRUNCKDIVR9.stcField.u4CD5A1DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR9_CD5B0DIV	(SYSC1.unRUNCKDIVR9.stcField.u4CD5B0DIV)  /*@bf@*/
#define SYSC1_RUNCKDIVR9_CD5B1DIV	(SYSC1.unRUNCKDIVR9.stcField.u4CD5B1DIV)  /*@bf@*/

typedef struct stc_sysc1_runckdivr9_field{
    uint_io32_t		u5CD5DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD5A0DIV:4;
    uint_io32_t		u4CD5A1DIV:4;
    uint_io32_t		u4CD5B0DIV:4;
    uint_io32_t		u4CD5B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_runckdivr9_field_t;

typedef union un_sysc1_runckdivr9{
    uint_io32_t		u32Register;
    stc_sysc1_runckdivr9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_runckdivr9_t;

/* RUNENR_0 */
#define SYSC1_RUNENR_0	(SYSC1.unRUNENR_0.u8Register)  /*@rg@*/
#define SYSC1_RUNENR_0_RUNEN1	SYSC1_RUNENR_0  /*@bfrg@*/

typedef union un_sysc1_runenr_0{
    uint_io8_t		u8Register;
}un_sysc1_runenr_0_t;

/* PSSCKSELR0 */
#define SYSC1_PSSCKSELR0	(SYSC1.unPSSCKSELR0.u32Register)  /*@rg@*/
#define SYSC1_PSSCKSELR0_CD0CSL	(SYSC1.unPSSCKSELR0.stcField.u3CD0CSL)  /*@bf@*/
#define SYSC1_PSSCKSELR0_LCP0ACSL	(*(volatile uint_io8_t*)0xB1000808)  /*@bfbba@*/
#define SYSC1_PSSCKSELR0_LCP1ACSL	(*(volatile uint_io8_t*)0xB100080C)  /*@bfbba@*/
#define SYSC1_PSSCKSELR0_LAPP0ACSL	(*(volatile uint_io8_t*)0xB1000810)  /*@bfbba@*/
#define SYSC1_PSSCKSELR0_LAPP1ACSL	(*(volatile uint_io8_t*)0xB1000814)  /*@bfbba@*/
#define SYSC1_PSSCKSELR0_HSSPICSL	(SYSC1.unPSSCKSELR0.stcField.u4HSSPICSL)  /*@bf@*/

typedef struct stc_sysc1_pssckselr0_field{
    uint_io32_t		u3CD0CSL:3;
    uint_io32_t		:5;
    uint_io32_t		u1LCP0ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LCP1ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LAPP0ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LAPP1ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u4HSSPICSL:4;
    uint_io32_t		:4;
}stc_sysc1_pssckselr0_field_t;

typedef union un_sysc1_pssckselr0{
    uint_io32_t		u32Register;
    stc_sysc1_pssckselr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckselr0_t;

/* PSSCKSELR1 */
#define SYSC1_PSSCKSELR1	(SYSC1.unPSSCKSELR1.u32Register)  /*@rg@*/
#define SYSC1_PSSCKSELR1_CD1CSL	(SYSC1.unPSSCKSELR1.stcField.u4CD1CSL)  /*@bf@*/
#define SYSC1_PSSCKSELR1_CD2CSL	(SYSC1.unPSSCKSELR1.stcField.u4CD2CSL)  /*@bf@*/
#define SYSC1_PSSCKSELR1_CD3CSL	(SYSC1.unPSSCKSELR1.stcField.u4CD3CSL)  /*@bf@*/
#define SYSC1_PSSCKSELR1_CD4CSL	(SYSC1.unPSSCKSELR1.stcField.u4CD4CSL)  /*@bf@*/

typedef struct stc_sysc1_pssckselr1_field{
    uint_io32_t		u4CD1CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD2CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD3CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD4CSL:4;
    uint_io32_t		:4;
}stc_sysc1_pssckselr1_field_t;

typedef union un_sysc1_pssckselr1{
    uint_io32_t		u32Register;
    stc_sysc1_pssckselr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckselr1_t;

/* PSSCKSELR2 */
#define SYSC1_PSSCKSELR2	(SYSC1.unPSSCKSELR2.u32Register)  /*@rg@*/
#define SYSC1_PSSCKSELR2_CD5CSL	(SYSC1.unPSSCKSELR2.stcField.u4CD5CSL)  /*@bf@*/
#define SYSC1_PSSCKSELR2_TRCCSL	(SYSC1.unPSSCKSELR2.stcField.u3TRCCSL)  /*@bf@*/

typedef struct stc_sysc1_pssckselr2_field{
    uint_io32_t		u4CD5CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u3TRCCSL:3;
    uint_io32_t		:21;
}stc_sysc1_pssckselr2_field_t;

typedef union un_sysc1_pssckselr2{
    uint_io32_t		u32Register;
    stc_sysc1_pssckselr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckselr2_t;

/* PSSCKER0 */
#define SYSC1_PSSCKER0	(SYSC1.unPSSCKER0.u32Register)  /*@rg@*/
#define SYSC1_PSSCKER0_ENCLKCPU0	(*(volatile uint_io8_t*)0xB1000860)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKATB	(*(volatile uint_io8_t*)0xB1000864)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKDBG	(*(volatile uint_io8_t*)0xB1000865)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKTRC	(*(volatile uint_io8_t*)0xB1000866)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKHPM2	(*(volatile uint_io8_t*)0xB1000867)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKHPM	(*(volatile uint_io8_t*)0xB1000868)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKDMA	(*(volatile uint_io8_t*)0xB1000869)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKMEMC	(*(volatile uint_io8_t*)0xB100086A)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKEXTBUS	(*(volatile uint_io8_t*)0xB100086B)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKSYSC1	(*(volatile uint_io8_t*)0xB100086E)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKHAPP0A0	(*(volatile uint_io8_t*)0xB1000870)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKHAPP0A1	(*(volatile uint_io8_t*)0xB1000871)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKHAPP1B0	(*(volatile uint_io8_t*)0xB1000872)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKHAPP1B1	(*(volatile uint_io8_t*)0xB1000873)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLLPBM	(*(volatile uint_io8_t*)0xB1000874)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLLPBM2	(*(volatile uint_io8_t*)0xB1000875)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLCP	(*(volatile uint_io8_t*)0xB1000877)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLCP0	(*(volatile uint_io8_t*)0xB1000878)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLCP1	(*(volatile uint_io8_t*)0xB1000879)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLAPP0	(*(volatile uint_io8_t*)0xB100087A)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLAPP1	(*(volatile uint_io8_t*)0xB100087B)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLCP0A	(*(volatile uint_io8_t*)0xB100087C)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLCP1A	(*(volatile uint_io8_t*)0xB100087D)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLAPP0A	(*(volatile uint_io8_t*)0xB100087E)  /*@bfbba@*/
#define SYSC1_PSSCKER0_ENCLKLAPP1A	(*(volatile uint_io8_t*)0xB100087F)  /*@bfbba@*/

typedef struct stc_sysc1_psscker0_field{
    uint_io32_t		u1ENCLKCPU0:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKATB:1;
    uint_io32_t		u1ENCLKDBG:1;
    uint_io32_t		u1ENCLKTRC:1;
    uint_io32_t		u1ENCLKHPM2:1;
    uint_io32_t		u1ENCLKHPM:1;
    uint_io32_t		u1ENCLKDMA:1;
    uint_io32_t		u1ENCLKMEMC:1;
    uint_io32_t		u1ENCLKEXTBUS:1;
    uint_io32_t		:2;
    uint_io32_t		u1ENCLKSYSC1:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKHAPP0A0:1;
    uint_io32_t		u1ENCLKHAPP0A1:1;
    uint_io32_t		u1ENCLKHAPP1B0:1;
    uint_io32_t		u1ENCLKHAPP1B1:1;
    uint_io32_t		u1ENCLKLLPBM:1;
    uint_io32_t		u1ENCLKLLPBM2:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKLCP:1;
    uint_io32_t		u1ENCLKLCP0:1;
    uint_io32_t		u1ENCLKLCP1:1;
    uint_io32_t		u1ENCLKLAPP0:1;
    uint_io32_t		u1ENCLKLAPP1:1;
    uint_io32_t		u1ENCLKLCP0A:1;
    uint_io32_t		u1ENCLKLCP1A:1;
    uint_io32_t		u1ENCLKLAPP0A:1;
    uint_io32_t		u1ENCLKLAPP1A:1;
}stc_sysc1_psscker0_field_t;

typedef union un_sysc1_psscker0{
    uint_io32_t		u32Register;
    stc_sysc1_psscker0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_psscker0_t;

/* PSSCKER1 */
#define SYSC1_PSSCKER1	(SYSC1.unPSSCKER1.u32Register)  /*@rg@*/
#define SYSC1_PSSCKER1_ENCLKHSSPI	(*(volatile uint_io8_t*)0xB1000880)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD1	(*(volatile uint_io8_t*)0xB1000888)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD1A0	(*(volatile uint_io8_t*)0xB1000889)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD1A1	(*(volatile uint_io8_t*)0xB100088A)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD1B0	(*(volatile uint_io8_t*)0xB100088B)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD1B1	(*(volatile uint_io8_t*)0xB100088C)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD2	(*(volatile uint_io8_t*)0xB1000890)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD2A0	(*(volatile uint_io8_t*)0xB1000891)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD2A1	(*(volatile uint_io8_t*)0xB1000892)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD2B0	(*(volatile uint_io8_t*)0xB1000893)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD2B1	(*(volatile uint_io8_t*)0xB1000894)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD3	(*(volatile uint_io8_t*)0xB1000898)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD3A0	(*(volatile uint_io8_t*)0xB1000899)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD3A1	(*(volatile uint_io8_t*)0xB100089A)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD3B0	(*(volatile uint_io8_t*)0xB100089B)  /*@bfbba@*/
#define SYSC1_PSSCKER1_ENCLKCD3B1	(*(volatile uint_io8_t*)0xB100089C)  /*@bfbba@*/

typedef struct stc_sysc1_psscker1_field{
    uint_io32_t		u1ENCLKHSSPI:1;
    uint_io32_t		:7;
    uint_io32_t		u1ENCLKCD1:1;
    uint_io32_t		u1ENCLKCD1A0:1;
    uint_io32_t		u1ENCLKCD1A1:1;
    uint_io32_t		u1ENCLKCD1B0:1;
    uint_io32_t		u1ENCLKCD1B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD2:1;
    uint_io32_t		u1ENCLKCD2A0:1;
    uint_io32_t		u1ENCLKCD2A1:1;
    uint_io32_t		u1ENCLKCD2B0:1;
    uint_io32_t		u1ENCLKCD2B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD3:1;
    uint_io32_t		u1ENCLKCD3A0:1;
    uint_io32_t		u1ENCLKCD3A1:1;
    uint_io32_t		u1ENCLKCD3B0:1;
    uint_io32_t		u1ENCLKCD3B1:1;
    uint_io32_t		:3;
}stc_sysc1_psscker1_field_t;

typedef union un_sysc1_psscker1{
    uint_io32_t		u32Register;
    stc_sysc1_psscker1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_psscker1_t;

/* PSSCKER2 */
#define SYSC1_PSSCKER2	(SYSC1.unPSSCKER2.u32Register)  /*@rg@*/
#define SYSC1_PSSCKER2_ENCLKCD4	(*(volatile uint_io8_t*)0xB10008A0)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD4A0	(*(volatile uint_io8_t*)0xB10008A1)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD4A1	(*(volatile uint_io8_t*)0xB10008A2)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD4B0	(*(volatile uint_io8_t*)0xB10008A3)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD4B1	(*(volatile uint_io8_t*)0xB10008A4)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD5	(*(volatile uint_io8_t*)0xB10008A8)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD5A0	(*(volatile uint_io8_t*)0xB10008A9)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD5A1	(*(volatile uint_io8_t*)0xB10008AA)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD5B0	(*(volatile uint_io8_t*)0xB10008AB)  /*@bfbba@*/
#define SYSC1_PSSCKER2_ENCLKCD5B1	(*(volatile uint_io8_t*)0xB10008AC)  /*@bfbba@*/

typedef struct stc_sysc1_psscker2_field{
    uint_io32_t		u1ENCLKCD4:1;
    uint_io32_t		u1ENCLKCD4A0:1;
    uint_io32_t		u1ENCLKCD4A1:1;
    uint_io32_t		u1ENCLKCD4B0:1;
    uint_io32_t		u1ENCLKCD4B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD5:1;
    uint_io32_t		u1ENCLKCD5A0:1;
    uint_io32_t		u1ENCLKCD5A1:1;
    uint_io32_t		u1ENCLKCD5B0:1;
    uint_io32_t		u1ENCLKCD5B1:1;
    uint_io32_t		:19;
}stc_sysc1_psscker2_field_t;

typedef union un_sysc1_psscker2{
    uint_io32_t		u32Register;
    stc_sysc1_psscker2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_psscker2_t;

/* PSSCKDIVR0 */
#define SYSC1_PSSCKDIVR0	(SYSC1.unPSSCKDIVR0.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR0_SYSDIV	(SYSC1.unPSSCKDIVR0.stcField.u5SYSDIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR0_ATBDIV	(SYSC1.unPSSCKDIVR0.stcField.u2ATBDIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR0_DBGDIV	(SYSC1.unPSSCKDIVR0.stcField.u2DBGDIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR0_TRCDIV	(SYSC1.unPSSCKDIVR0.stcField.u5TRCDIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR0_HPMDIV	(SYSC1.unPSSCKDIVR0.stcField.u3HPMDIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr0_field{
    uint_io32_t		u5SYSDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u2ATBDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u2DBGDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u5TRCDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u3HPMDIV:3;
    uint_io32_t		:5;
}stc_sysc1_pssckdivr0_field_t;

typedef union un_sysc1_pssckdivr0{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr0_t;

/* PSSCKDIVR1 */
#define SYSC1_PSSCKDIVR1	(SYSC1.unPSSCKDIVR1.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR1_EXTBUSDIV	(SYSC1.unPSSCKDIVR1.stcField.u3EXTBUSDIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR1_SYSC1DIV	(SYSC1.unPSSCKDIVR1.stcField.u4SYSC1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR1_HAPP0A0DIV	(SYSC1.unPSSCKDIVR1.stcField.u4HAPP0A0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR1_HAPP0A1DIV	(SYSC1.unPSSCKDIVR1.stcField.u4HAPP0A1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR1_HAPP1B0DIV	(SYSC1.unPSSCKDIVR1.stcField.u4HAPP1B0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR1_HAPP1B1DIV	(SYSC1.unPSSCKDIVR1.stcField.u4HAPP1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr1_field{
    uint_io32_t		u3EXTBUSDIV:3;
    uint_io32_t		:1;
    uint_io32_t		u4SYSC1DIV:4;
    uint_io32_t		:8;
    uint_io32_t		u4HAPP0A0DIV:4;
    uint_io32_t		u4HAPP0A1DIV:4;
    uint_io32_t		u4HAPP1B0DIV:4;
    uint_io32_t		u4HAPP1B1DIV:4;
}stc_sysc1_pssckdivr1_field_t;

typedef union un_sysc1_pssckdivr1{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr1_t;

/* PSSCKDIVR2 */
#define SYSC1_PSSCKDIVR2	(SYSC1.unPSSCKDIVR2.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR2_LCPDIV	(SYSC1.unPSSCKDIVR2.stcField.u2LCPDIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR2_LCP0DIV	(SYSC1.unPSSCKDIVR2.stcField.u4LCP0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR2_LCP1DIV	(SYSC1.unPSSCKDIVR2.stcField.u4LCP1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR2_LAPP0DIV	(SYSC1.unPSSCKDIVR2.stcField.u4LAPP0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR2_LAPP1DIV	(SYSC1.unPSSCKDIVR2.stcField.u4LAPP1DIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr2_field{
    uint_io32_t		u2LCPDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u4LCP0DIV:4;
    uint_io32_t		u4LCP1DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP0DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP1DIV:4;
    uint_io32_t		:4;
}stc_sysc1_pssckdivr2_field_t;

typedef union un_sysc1_pssckdivr2{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr2_t;

/* PSSCKDIVR3 */
#define SYSC1_PSSCKDIVR3	(SYSC1.unPSSCKDIVR3.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR3_LCP0ADIV	(SYSC1.unPSSCKDIVR3.stcField.u5LCP0ADIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR3_LCP1ADIV	(SYSC1.unPSSCKDIVR3.stcField.u5LCP1ADIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR3_LAPP0ADIV	(SYSC1.unPSSCKDIVR3.stcField.u5LAPP0ADIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR3_LAPP1ADIV	(SYSC1.unPSSCKDIVR3.stcField.u5LAPP1ADIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr3_field{
    uint_io32_t		u5LCP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LCP1ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP1ADIV:5;
    uint_io32_t		:3;
}stc_sysc1_pssckdivr3_field_t;

typedef union un_sysc1_pssckdivr3{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr3_t;

/* PSSCKDIVR4 */
#define SYSC1_PSSCKDIVR4	(SYSC1.unPSSCKDIVR4.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR4_HSSPIDIV	(SYSC1.unPSSCKDIVR4.stcField.u5HSSPIDIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr4_field{
    uint_io32_t		u5HSSPIDIV:5;
    uint_io32_t		:27;
}stc_sysc1_pssckdivr4_field_t;

typedef union un_sysc1_pssckdivr4{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr4_t;

/* PSSCKDIVR5 */
#define SYSC1_PSSCKDIVR5	(SYSC1.unPSSCKDIVR5.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR5_CD1DIV	(SYSC1.unPSSCKDIVR5.stcField.u5CD1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR5_CD1A0DIV	(SYSC1.unPSSCKDIVR5.stcField.u4CD1A0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR5_CD1A1DIV	(SYSC1.unPSSCKDIVR5.stcField.u4CD1A1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR5_CD1B0DIV	(SYSC1.unPSSCKDIVR5.stcField.u4CD1B0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR5_CD1B1DIV	(SYSC1.unPSSCKDIVR5.stcField.u4CD1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr5_field{
    uint_io32_t		u5CD1DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD1A0DIV:4;
    uint_io32_t		u4CD1A1DIV:4;
    uint_io32_t		u4CD1B0DIV:4;
    uint_io32_t		u4CD1B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_pssckdivr5_field_t;

typedef union un_sysc1_pssckdivr5{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr5_t;

/* PSSCKDIVR6 */
#define SYSC1_PSSCKDIVR6	(SYSC1.unPSSCKDIVR6.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR6_CD2DIV	(SYSC1.unPSSCKDIVR6.stcField.u5CD2DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR6_CD2A0DIV	(SYSC1.unPSSCKDIVR6.stcField.u4CD2A0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR6_CD2A1DIV	(SYSC1.unPSSCKDIVR6.stcField.u4CD2A1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR6_CD2B0DIV	(SYSC1.unPSSCKDIVR6.stcField.u4CD2B0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR6_CD2B1DIV	(SYSC1.unPSSCKDIVR6.stcField.u4CD2B1DIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr6_field{
    uint_io32_t		u5CD2DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD2A0DIV:4;
    uint_io32_t		u4CD2A1DIV:4;
    uint_io32_t		u4CD2B0DIV:4;
    uint_io32_t		u4CD2B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_pssckdivr6_field_t;

typedef union un_sysc1_pssckdivr6{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr6_t;

/* PSSCKDIVR7 */
#define SYSC1_PSSCKDIVR7	(SYSC1.unPSSCKDIVR7.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR7_CD3DIV	(SYSC1.unPSSCKDIVR7.stcField.u5CD3DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR7_CD3A0DIV	(SYSC1.unPSSCKDIVR7.stcField.u4CD3A0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR7_CD3A1DIV	(SYSC1.unPSSCKDIVR7.stcField.u4CD3A1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR7_CD3B0DIV	(SYSC1.unPSSCKDIVR7.stcField.u4CD3B0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR7_CD3B1DIV	(SYSC1.unPSSCKDIVR7.stcField.u4CD3B1DIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr7_field{
    uint_io32_t		u5CD3DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD3A0DIV:4;
    uint_io32_t		u4CD3A1DIV:4;
    uint_io32_t		u4CD3B0DIV:4;
    uint_io32_t		u4CD3B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_pssckdivr7_field_t;

typedef union un_sysc1_pssckdivr7{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr7_t;

/* PSSCKDIVR8 */
#define SYSC1_PSSCKDIVR8	(SYSC1.unPSSCKDIVR8.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR8_CD4DIV	(SYSC1.unPSSCKDIVR8.stcField.u5CD4DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR8_CD4A0DIV	(SYSC1.unPSSCKDIVR8.stcField.u4CD4A0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR8_CD4A1DIV	(SYSC1.unPSSCKDIVR8.stcField.u4CD4A1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR8_CD4B0DIV	(SYSC1.unPSSCKDIVR8.stcField.u4CD4B0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR8_CD4B1DIV	(SYSC1.unPSSCKDIVR8.stcField.u4CD4B1DIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr8_field{
    uint_io32_t		u5CD4DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD4A0DIV:4;
    uint_io32_t		u4CD4A1DIV:4;
    uint_io32_t		u4CD4B0DIV:4;
    uint_io32_t		u4CD4B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_pssckdivr8_field_t;

typedef union un_sysc1_pssckdivr8{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr8_t;

/* PSSCKDIVR9 */
#define SYSC1_PSSCKDIVR9	(SYSC1.unPSSCKDIVR9.u32Register)  /*@rg@*/
#define SYSC1_PSSCKDIVR9_CD5DIV	(SYSC1.unPSSCKDIVR9.stcField.u5CD5DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR9_CD5A0DIV	(SYSC1.unPSSCKDIVR9.stcField.u4CD5A0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR9_CD5A1DIV	(SYSC1.unPSSCKDIVR9.stcField.u4CD5A1DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR9_CD5B0DIV	(SYSC1.unPSSCKDIVR9.stcField.u4CD5B0DIV)  /*@bf@*/
#define SYSC1_PSSCKDIVR9_CD5B1DIV	(SYSC1.unPSSCKDIVR9.stcField.u4CD5B1DIV)  /*@bf@*/

typedef struct stc_sysc1_pssckdivr9_field{
    uint_io32_t		u5CD5DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD5A0DIV:4;
    uint_io32_t		u4CD5A1DIV:4;
    uint_io32_t		u4CD5B0DIV:4;
    uint_io32_t		u4CD5B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_pssckdivr9_field_t;

typedef union un_sysc1_pssckdivr9{
    uint_io32_t		u32Register;
    stc_sysc1_pssckdivr9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_pssckdivr9_t;

/* PSSENR_0 */
#define SYSC1_PSSENR_0	(SYSC1.unPSSENR_0.u8Register)  /*@rg@*/
#define SYSC1_PSSENR_0_PSSEN1	SYSC1_PSSENR_0  /*@bfrg@*/

typedef union un_sysc1_pssenr_0{
    uint_io8_t		u8Register;
}un_sysc1_pssenr_0_t;

/* APPCKSELR0 */
#define SYSC1_APPCKSELR0	(SYSC1.unAPPCKSELR0.u32Register)  /*@rg@*/
#define SYSC1_APPCKSELR0_CD0CSL	(SYSC1.unAPPCKSELR0.stcField.u3CD0CSL)  /*@bf@*/
#define SYSC1_APPCKSELR0_LCP0ACSL	(*(volatile uint_io8_t*)0xB1000C08)  /*@bfbba@*/
#define SYSC1_APPCKSELR0_LCP1ACSL	(*(volatile uint_io8_t*)0xB1000C0C)  /*@bfbba@*/
#define SYSC1_APPCKSELR0_LAPP0ACSL	(*(volatile uint_io8_t*)0xB1000C10)  /*@bfbba@*/
#define SYSC1_APPCKSELR0_LAPP1ACSL	(*(volatile uint_io8_t*)0xB1000C14)  /*@bfbba@*/
#define SYSC1_APPCKSELR0_HSSPICSL	(SYSC1.unAPPCKSELR0.stcField.u4HSSPICSL)  /*@bf@*/

typedef struct stc_sysc1_appckselr0_field{
    uint_io32_t		u3CD0CSL:3;
    uint_io32_t		:5;
    uint_io32_t		u1LCP0ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LCP1ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LAPP0ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u1LAPP1ACSL:1;
    uint_io32_t		:3;
    uint_io32_t		u4HSSPICSL:4;
    uint_io32_t		:4;
}stc_sysc1_appckselr0_field_t;

typedef union un_sysc1_appckselr0{
    uint_io32_t		u32Register;
    stc_sysc1_appckselr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckselr0_t;

/* APPCKSELR1 */
#define SYSC1_APPCKSELR1	(SYSC1.unAPPCKSELR1.u32Register)  /*@rg@*/
#define SYSC1_APPCKSELR1_CD1CSL	(SYSC1.unAPPCKSELR1.stcField.u4CD1CSL)  /*@bf@*/
#define SYSC1_APPCKSELR1_CD2CSL	(SYSC1.unAPPCKSELR1.stcField.u4CD2CSL)  /*@bf@*/
#define SYSC1_APPCKSELR1_CD3CSL	(SYSC1.unAPPCKSELR1.stcField.u4CD3CSL)  /*@bf@*/
#define SYSC1_APPCKSELR1_CD4CSL	(SYSC1.unAPPCKSELR1.stcField.u4CD4CSL)  /*@bf@*/

typedef struct stc_sysc1_appckselr1_field{
    uint_io32_t		u4CD1CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD2CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD3CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u4CD4CSL:4;
    uint_io32_t		:4;
}stc_sysc1_appckselr1_field_t;

typedef union un_sysc1_appckselr1{
    uint_io32_t		u32Register;
    stc_sysc1_appckselr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckselr1_t;

/* APPCKSELR2 */
#define SYSC1_APPCKSELR2	(SYSC1.unAPPCKSELR2.u32Register)  /*@rg@*/
#define SYSC1_APPCKSELR2_CD5CSL	(SYSC1.unAPPCKSELR2.stcField.u4CD5CSL)  /*@bf@*/
#define SYSC1_APPCKSELR2_TRCCSL	(SYSC1.unAPPCKSELR2.stcField.u3TRCCSL)  /*@bf@*/

typedef struct stc_sysc1_appckselr2_field{
    uint_io32_t		u4CD5CSL:4;
    uint_io32_t		:4;
    uint_io32_t		u3TRCCSL:3;
    uint_io32_t		:21;
}stc_sysc1_appckselr2_field_t;

typedef union un_sysc1_appckselr2{
    uint_io32_t		u32Register;
    stc_sysc1_appckselr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckselr2_t;

/* APPCKER0 */
#define SYSC1_APPCKER0	(SYSC1.unAPPCKER0.u32Register)  /*@rg@*/
#define SYSC1_APPCKER0_ENCLKCPU0	(*(volatile uint_io8_t*)0xB1000C60)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKATB	(*(volatile uint_io8_t*)0xB1000C64)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKDBG	(*(volatile uint_io8_t*)0xB1000C65)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKTRC	(*(volatile uint_io8_t*)0xB1000C66)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKHPM2	(*(volatile uint_io8_t*)0xB1000C67)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKHPM	(*(volatile uint_io8_t*)0xB1000C68)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKDMA	(*(volatile uint_io8_t*)0xB1000C69)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKMEMC	(*(volatile uint_io8_t*)0xB1000C6A)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKEXTBUS	(*(volatile uint_io8_t*)0xB1000C6B)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKSYSC1	(*(volatile uint_io8_t*)0xB1000C6E)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKHAPP0A0	(*(volatile uint_io8_t*)0xB1000C70)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKHAPP0A1	(*(volatile uint_io8_t*)0xB1000C71)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKHAPP1B0	(*(volatile uint_io8_t*)0xB1000C72)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKHAPP1B1	(*(volatile uint_io8_t*)0xB1000C73)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLLPBM	(*(volatile uint_io8_t*)0xB1000C74)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLLPBM2	(*(volatile uint_io8_t*)0xB1000C75)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLCP	(*(volatile uint_io8_t*)0xB1000C77)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLCP0	(*(volatile uint_io8_t*)0xB1000C78)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLCP1	(*(volatile uint_io8_t*)0xB1000C79)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLAPP0	(*(volatile uint_io8_t*)0xB1000C7A)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLAPP1	(*(volatile uint_io8_t*)0xB1000C7B)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLCP0A	(*(volatile uint_io8_t*)0xB1000C7C)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLCP1A	(*(volatile uint_io8_t*)0xB1000C7D)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLAPP0A	(*(volatile uint_io8_t*)0xB1000C7E)  /*@bfbba@*/
#define SYSC1_APPCKER0_ENCLKLAPP1A	(*(volatile uint_io8_t*)0xB1000C7F)  /*@bfbba@*/

typedef struct stc_sysc1_appcker0_field{
    uint_io32_t		u1ENCLKCPU0:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKATB:1;
    uint_io32_t		u1ENCLKDBG:1;
    uint_io32_t		u1ENCLKTRC:1;
    uint_io32_t		u1ENCLKHPM2:1;
    uint_io32_t		u1ENCLKHPM:1;
    uint_io32_t		u1ENCLKDMA:1;
    uint_io32_t		u1ENCLKMEMC:1;
    uint_io32_t		u1ENCLKEXTBUS:1;
    uint_io32_t		:2;
    uint_io32_t		u1ENCLKSYSC1:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKHAPP0A0:1;
    uint_io32_t		u1ENCLKHAPP0A1:1;
    uint_io32_t		u1ENCLKHAPP1B0:1;
    uint_io32_t		u1ENCLKHAPP1B1:1;
    uint_io32_t		u1ENCLKLLPBM:1;
    uint_io32_t		u1ENCLKLLPBM2:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKLCP:1;
    uint_io32_t		u1ENCLKLCP0:1;
    uint_io32_t		u1ENCLKLCP1:1;
    uint_io32_t		u1ENCLKLAPP0:1;
    uint_io32_t		u1ENCLKLAPP1:1;
    uint_io32_t		u1ENCLKLCP0A:1;
    uint_io32_t		u1ENCLKLCP1A:1;
    uint_io32_t		u1ENCLKLAPP0A:1;
    uint_io32_t		u1ENCLKLAPP1A:1;
}stc_sysc1_appcker0_field_t;

typedef union un_sysc1_appcker0{
    uint_io32_t		u32Register;
    stc_sysc1_appcker0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appcker0_t;

/* APPCKER1 */
#define SYSC1_APPCKER1	(SYSC1.unAPPCKER1.u32Register)  /*@rg@*/
#define SYSC1_APPCKER1_ENCLKHSSPI	(*(volatile uint_io8_t*)0xB1000C80)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD1	(*(volatile uint_io8_t*)0xB1000C88)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD1A0	(*(volatile uint_io8_t*)0xB1000C89)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD1A1	(*(volatile uint_io8_t*)0xB1000C8A)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD1B0	(*(volatile uint_io8_t*)0xB1000C8B)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD1B1	(*(volatile uint_io8_t*)0xB1000C8C)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD2	(*(volatile uint_io8_t*)0xB1000C90)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD2A0	(*(volatile uint_io8_t*)0xB1000C91)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD2A1	(*(volatile uint_io8_t*)0xB1000C92)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD2B0	(*(volatile uint_io8_t*)0xB1000C93)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD2B1	(*(volatile uint_io8_t*)0xB1000C94)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD3	(*(volatile uint_io8_t*)0xB1000C98)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD3A0	(*(volatile uint_io8_t*)0xB1000C99)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD3A1	(*(volatile uint_io8_t*)0xB1000C9A)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD3B0	(*(volatile uint_io8_t*)0xB1000C9B)  /*@bfbba@*/
#define SYSC1_APPCKER1_ENCLKCD3B1	(*(volatile uint_io8_t*)0xB1000C9C)  /*@bfbba@*/

typedef struct stc_sysc1_appcker1_field{
    uint_io32_t		u1ENCLKHSSPI:1;
    uint_io32_t		:7;
    uint_io32_t		u1ENCLKCD1:1;
    uint_io32_t		u1ENCLKCD1A0:1;
    uint_io32_t		u1ENCLKCD1A1:1;
    uint_io32_t		u1ENCLKCD1B0:1;
    uint_io32_t		u1ENCLKCD1B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD2:1;
    uint_io32_t		u1ENCLKCD2A0:1;
    uint_io32_t		u1ENCLKCD2A1:1;
    uint_io32_t		u1ENCLKCD2B0:1;
    uint_io32_t		u1ENCLKCD2B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD3:1;
    uint_io32_t		u1ENCLKCD3A0:1;
    uint_io32_t		u1ENCLKCD3A1:1;
    uint_io32_t		u1ENCLKCD3B0:1;
    uint_io32_t		u1ENCLKCD3B1:1;
    uint_io32_t		:3;
}stc_sysc1_appcker1_field_t;

typedef union un_sysc1_appcker1{
    uint_io32_t		u32Register;
    stc_sysc1_appcker1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appcker1_t;

/* APPCKER2 */
#define SYSC1_APPCKER2	(SYSC1.unAPPCKER2.u32Register)  /*@rg@*/
#define SYSC1_APPCKER2_ENCLKCD4	(*(volatile uint_io8_t*)0xB1000CA0)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD4A0	(*(volatile uint_io8_t*)0xB1000CA1)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD4A1	(*(volatile uint_io8_t*)0xB1000CA2)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD4B0	(*(volatile uint_io8_t*)0xB1000CA3)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD4B1	(*(volatile uint_io8_t*)0xB1000CA4)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD5	(*(volatile uint_io8_t*)0xB1000CA8)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD5A0	(*(volatile uint_io8_t*)0xB1000CA9)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD5A1	(*(volatile uint_io8_t*)0xB1000CAA)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD5B0	(*(volatile uint_io8_t*)0xB1000CAB)  /*@bfbba@*/
#define SYSC1_APPCKER2_ENCLKCD5B1	(*(volatile uint_io8_t*)0xB1000CAC)  /*@bfbba@*/

typedef struct stc_sysc1_appcker2_field{
    uint_io32_t		u1ENCLKCD4:1;
    uint_io32_t		u1ENCLKCD4A0:1;
    uint_io32_t		u1ENCLKCD4A1:1;
    uint_io32_t		u1ENCLKCD4B0:1;
    uint_io32_t		u1ENCLKCD4B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD5:1;
    uint_io32_t		u1ENCLKCD5A0:1;
    uint_io32_t		u1ENCLKCD5A1:1;
    uint_io32_t		u1ENCLKCD5B0:1;
    uint_io32_t		u1ENCLKCD5B1:1;
    uint_io32_t		:19;
}stc_sysc1_appcker2_field_t;

typedef union un_sysc1_appcker2{
    uint_io32_t		u32Register;
    stc_sysc1_appcker2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appcker2_t;

/* APPCKDIVR0 */
#define SYSC1_APPCKDIVR0	(SYSC1.unAPPCKDIVR0.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR0_SYSDIV	(SYSC1.unAPPCKDIVR0.stcField.u5SYSDIV)  /*@bf@*/
#define SYSC1_APPCKDIVR0_ATBDIV	(SYSC1.unAPPCKDIVR0.stcField.u2ATBDIV)  /*@bf@*/
#define SYSC1_APPCKDIVR0_DBGDIV	(SYSC1.unAPPCKDIVR0.stcField.u2DBGDIV)  /*@bf@*/
#define SYSC1_APPCKDIVR0_TRCDIV	(SYSC1.unAPPCKDIVR0.stcField.u5TRCDIV)  /*@bf@*/
#define SYSC1_APPCKDIVR0_HPMDIV	(SYSC1.unAPPCKDIVR0.stcField.u3HPMDIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr0_field{
    uint_io32_t		u5SYSDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u2ATBDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u2DBGDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u5TRCDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u3HPMDIV:3;
    uint_io32_t		:5;
}stc_sysc1_appckdivr0_field_t;

typedef union un_sysc1_appckdivr0{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr0_t;

/* APPCKDIVR1 */
#define SYSC1_APPCKDIVR1	(SYSC1.unAPPCKDIVR1.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR1_EXTBUSDIV	(SYSC1.unAPPCKDIVR1.stcField.u3EXTBUSDIV)  /*@bf@*/
#define SYSC1_APPCKDIVR1_SYSC1DIV	(SYSC1.unAPPCKDIVR1.stcField.u4SYSC1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR1_HAPP0A0DIV	(SYSC1.unAPPCKDIVR1.stcField.u4HAPP0A0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR1_HAPP0A1DIV	(SYSC1.unAPPCKDIVR1.stcField.u4HAPP0A1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR1_HAPP1B0DIV	(SYSC1.unAPPCKDIVR1.stcField.u4HAPP1B0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR1_HAPP1B1DIV	(SYSC1.unAPPCKDIVR1.stcField.u4HAPP1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr1_field{
    uint_io32_t		u3EXTBUSDIV:3;
    uint_io32_t		:1;
    uint_io32_t		u4SYSC1DIV:4;
    uint_io32_t		:8;
    uint_io32_t		u4HAPP0A0DIV:4;
    uint_io32_t		u4HAPP0A1DIV:4;
    uint_io32_t		u4HAPP1B0DIV:4;
    uint_io32_t		u4HAPP1B1DIV:4;
}stc_sysc1_appckdivr1_field_t;

typedef union un_sysc1_appckdivr1{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr1_t;

/* APPCKDIVR2 */
#define SYSC1_APPCKDIVR2	(SYSC1.unAPPCKDIVR2.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR2_LCPDIV	(SYSC1.unAPPCKDIVR2.stcField.u2LCPDIV)  /*@bf@*/
#define SYSC1_APPCKDIVR2_LCP0DIV	(SYSC1.unAPPCKDIVR2.stcField.u4LCP0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR2_LCP1DIV	(SYSC1.unAPPCKDIVR2.stcField.u4LCP1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR2_LAPP0DIV	(SYSC1.unAPPCKDIVR2.stcField.u4LAPP0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR2_LAPP1DIV	(SYSC1.unAPPCKDIVR2.stcField.u4LAPP1DIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr2_field{
    uint_io32_t		u2LCPDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u4LCP0DIV:4;
    uint_io32_t		u4LCP1DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP0DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP1DIV:4;
    uint_io32_t		:4;
}stc_sysc1_appckdivr2_field_t;

typedef union un_sysc1_appckdivr2{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr2_t;

/* APPCKDIVR3 */
#define SYSC1_APPCKDIVR3	(SYSC1.unAPPCKDIVR3.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR3_LCP0ADIV	(SYSC1.unAPPCKDIVR3.stcField.u5LCP0ADIV)  /*@bf@*/
#define SYSC1_APPCKDIVR3_LCP1ADIV	(SYSC1.unAPPCKDIVR3.stcField.u5LCP1ADIV)  /*@bf@*/
#define SYSC1_APPCKDIVR3_LAPP0ADIV	(SYSC1.unAPPCKDIVR3.stcField.u5LAPP0ADIV)  /*@bf@*/
#define SYSC1_APPCKDIVR3_LAPP1ADIV	(SYSC1.unAPPCKDIVR3.stcField.u5LAPP1ADIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr3_field{
    uint_io32_t		u5LCP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LCP1ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP1ADIV:5;
    uint_io32_t		:3;
}stc_sysc1_appckdivr3_field_t;

typedef union un_sysc1_appckdivr3{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr3_t;

/* APPCKDIVR4 */
#define SYSC1_APPCKDIVR4	(SYSC1.unAPPCKDIVR4.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR4_HSSPIDIV	(SYSC1.unAPPCKDIVR4.stcField.u5HSSPIDIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr4_field{
    uint_io32_t		u5HSSPIDIV:5;
    uint_io32_t		:27;
}stc_sysc1_appckdivr4_field_t;

typedef union un_sysc1_appckdivr4{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr4_t;

/* APPCKDIVR5 */
#define SYSC1_APPCKDIVR5	(SYSC1.unAPPCKDIVR5.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR5_CD1DIV	(SYSC1.unAPPCKDIVR5.stcField.u5CD1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR5_CD1A0DIV	(SYSC1.unAPPCKDIVR5.stcField.u4CD1A0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR5_CD1A1DIV	(SYSC1.unAPPCKDIVR5.stcField.u4CD1A1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR5_CD1B0DIV	(SYSC1.unAPPCKDIVR5.stcField.u4CD1B0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR5_CD1B1DIV	(SYSC1.unAPPCKDIVR5.stcField.u4CD1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr5_field{
    uint_io32_t		u5CD1DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD1A0DIV:4;
    uint_io32_t		u4CD1A1DIV:4;
    uint_io32_t		u4CD1B0DIV:4;
    uint_io32_t		u4CD1B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_appckdivr5_field_t;

typedef union un_sysc1_appckdivr5{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr5_t;

/* APPCKDIVR6 */
#define SYSC1_APPCKDIVR6	(SYSC1.unAPPCKDIVR6.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR6_CD2DIV	(SYSC1.unAPPCKDIVR6.stcField.u5CD2DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR6_CD2A0DIV	(SYSC1.unAPPCKDIVR6.stcField.u4CD2A0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR6_CD2A1DIV	(SYSC1.unAPPCKDIVR6.stcField.u4CD2A1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR6_CD2B0DIV	(SYSC1.unAPPCKDIVR6.stcField.u4CD2B0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR6_CD2B1DIV	(SYSC1.unAPPCKDIVR6.stcField.u4CD2B1DIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr6_field{
    uint_io32_t		u5CD2DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD2A0DIV:4;
    uint_io32_t		u4CD2A1DIV:4;
    uint_io32_t		u4CD2B0DIV:4;
    uint_io32_t		u4CD2B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_appckdivr6_field_t;

typedef union un_sysc1_appckdivr6{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr6_t;

/* APPCKDIVR7 */
#define SYSC1_APPCKDIVR7	(SYSC1.unAPPCKDIVR7.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR7_CD3DIV	(SYSC1.unAPPCKDIVR7.stcField.u5CD3DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR7_CD3A0DIV	(SYSC1.unAPPCKDIVR7.stcField.u4CD3A0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR7_CD3A1DIV	(SYSC1.unAPPCKDIVR7.stcField.u4CD3A1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR7_CD3B0DIV	(SYSC1.unAPPCKDIVR7.stcField.u4CD3B0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR7_CD3B1DIV	(SYSC1.unAPPCKDIVR7.stcField.u4CD3B1DIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr7_field{
    uint_io32_t		u5CD3DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD3A0DIV:4;
    uint_io32_t		u4CD3A1DIV:4;
    uint_io32_t		u4CD3B0DIV:4;
    uint_io32_t		u4CD3B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_appckdivr7_field_t;

typedef union un_sysc1_appckdivr7{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr7_t;

/* APPCKDIVR8 */
#define SYSC1_APPCKDIVR8	(SYSC1.unAPPCKDIVR8.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR8_CD4DIV	(SYSC1.unAPPCKDIVR8.stcField.u5CD4DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR8_CD4A0DIV	(SYSC1.unAPPCKDIVR8.stcField.u4CD4A0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR8_CD4A1DIV	(SYSC1.unAPPCKDIVR8.stcField.u4CD4A1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR8_CD4B0DIV	(SYSC1.unAPPCKDIVR8.stcField.u4CD4B0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR8_CD4B1DIV	(SYSC1.unAPPCKDIVR8.stcField.u4CD4B1DIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr8_field{
    uint_io32_t		u5CD4DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD4A0DIV:4;
    uint_io32_t		u4CD4A1DIV:4;
    uint_io32_t		u4CD4B0DIV:4;
    uint_io32_t		u4CD4B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_appckdivr8_field_t;

typedef union un_sysc1_appckdivr8{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr8_t;

/* APPCKDIVR9 */
#define SYSC1_APPCKDIVR9	(SYSC1.unAPPCKDIVR9.u32Register)  /*@rg@*/
#define SYSC1_APPCKDIVR9_CD5DIV	(SYSC1.unAPPCKDIVR9.stcField.u5CD5DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR9_CD5A0DIV	(SYSC1.unAPPCKDIVR9.stcField.u4CD5A0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR9_CD5A1DIV	(SYSC1.unAPPCKDIVR9.stcField.u4CD5A1DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR9_CD5B0DIV	(SYSC1.unAPPCKDIVR9.stcField.u4CD5B0DIV)  /*@bf@*/
#define SYSC1_APPCKDIVR9_CD5B1DIV	(SYSC1.unAPPCKDIVR9.stcField.u4CD5B1DIV)  /*@bf@*/

typedef struct stc_sysc1_appckdivr9_field{
    uint_io32_t		u5CD5DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD5A0DIV:4;
    uint_io32_t		u4CD5A1DIV:4;
    uint_io32_t		u4CD5B0DIV:4;
    uint_io32_t		u4CD5B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_appckdivr9_field_t;

typedef union un_sysc1_appckdivr9{
    uint_io32_t		u32Register;
    stc_sysc1_appckdivr9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_appckdivr9_t;

/* STSCKSELR0 */
#define SYSC1_STSCKSELR0	(SYSC1.unSTSCKSELR0.u32Register)  /*@rg@*/
#define SYSC1_STSCKSELR0_CD0CSL	(SYSC1.unSTSCKSELR0.stcField.u3CD0CSL)  /*@bf@*/
#define SYSC1_STSCKSELR0_CD0CM	(SYSC1.unSTSCKSELR0.stcField.u3CD0CM)  /*@bf@*/
#define SYSC1_STSCKSELR0_LCP0ACSL	(*(volatile uint_io8_t*)0xB1001008)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_LCP0ACM	(*(volatile uint_io8_t*)0xB1001009)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_LCP1ACSL	(*(volatile uint_io8_t*)0xB100100C)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_LCP1ACM	(*(volatile uint_io8_t*)0xB100100D)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_LAPP0ACSL	(*(volatile uint_io8_t*)0xB1001010)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_LAPP0ACM	(*(volatile uint_io8_t*)0xB1001011)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_LAPP1ACSL	(*(volatile uint_io8_t*)0xB1001014)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_LAPP1ACM	(*(volatile uint_io8_t*)0xB1001015)  /*@bfbba@*/
#define SYSC1_STSCKSELR0_HSSPICSL	(SYSC1.unSTSCKSELR0.stcField.u4HSSPICSL)  /*@bf@*/
#define SYSC1_STSCKSELR0_HSSPICM	(SYSC1.unSTSCKSELR0.stcField.u4HSSPICM)  /*@bf@*/

typedef struct stc_sysc1_stsckselr0_field{
    uint_io32_t		u3CD0CSL:3;
    uint_io32_t		:1;
    uint_io32_t		u3CD0CM:3;
    uint_io32_t		:1;
    uint_io32_t		u1LCP0ACSL:1;
    uint_io32_t		u1LCP0ACM:1;
    uint_io32_t		:2;
    uint_io32_t		u1LCP1ACSL:1;
    uint_io32_t		u1LCP1ACM:1;
    uint_io32_t		:2;
    uint_io32_t		u1LAPP0ACSL:1;
    uint_io32_t		u1LAPP0ACM:1;
    uint_io32_t		:2;
    uint_io32_t		u1LAPP1ACSL:1;
    uint_io32_t		u1LAPP1ACM:1;
    uint_io32_t		:2;
    uint_io32_t		u4HSSPICSL:4;
    uint_io32_t		u4HSSPICM:4;
}stc_sysc1_stsckselr0_field_t;

typedef union un_sysc1_stsckselr0{
    uint_io32_t		u32Register;
    stc_sysc1_stsckselr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckselr0_t;

/* STSCKSELR1 */
#define SYSC1_STSCKSELR1	(SYSC1.unSTSCKSELR1.u32Register)  /*@rg@*/
#define SYSC1_STSCKSELR1_CD1CSL	(SYSC1.unSTSCKSELR1.stcField.u4CD1CSL)  /*@bf@*/
#define SYSC1_STSCKSELR1_CD1CM	(SYSC1.unSTSCKSELR1.stcField.u4CD1CM)  /*@bf@*/
#define SYSC1_STSCKSELR1_CD2CSL	(SYSC1.unSTSCKSELR1.stcField.u4CD2CSL)  /*@bf@*/
#define SYSC1_STSCKSELR1_CD2CM	(SYSC1.unSTSCKSELR1.stcField.u4CD2CM)  /*@bf@*/
#define SYSC1_STSCKSELR1_CD3CSL	(SYSC1.unSTSCKSELR1.stcField.u4CD3CSL)  /*@bf@*/
#define SYSC1_STSCKSELR1_CD3CM	(SYSC1.unSTSCKSELR1.stcField.u4CD3CM)  /*@bf@*/
#define SYSC1_STSCKSELR1_CD4CSL	(SYSC1.unSTSCKSELR1.stcField.u4CD4CSL)  /*@bf@*/
#define SYSC1_STSCKSELR1_CD4CM	(SYSC1.unSTSCKSELR1.stcField.u4CD4CM)  /*@bf@*/

typedef struct stc_sysc1_stsckselr1_field{
    uint_io32_t		u4CD1CSL:4;
    uint_io32_t		u4CD1CM:4;
    uint_io32_t		u4CD2CSL:4;
    uint_io32_t		u4CD2CM:4;
    uint_io32_t		u4CD3CSL:4;
    uint_io32_t		u4CD3CM:4;
    uint_io32_t		u4CD4CSL:4;
    uint_io32_t		u4CD4CM:4;
}stc_sysc1_stsckselr1_field_t;

typedef union un_sysc1_stsckselr1{
    uint_io32_t		u32Register;
    stc_sysc1_stsckselr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckselr1_t;

/* STSCKSELR2 */
#define SYSC1_STSCKSELR2	(SYSC1.unSTSCKSELR2.u32Register)  /*@rg@*/
#define SYSC1_STSCKSELR2_CD5CSL	(SYSC1.unSTSCKSELR2.stcField.u4CD5CSL)  /*@bf@*/
#define SYSC1_STSCKSELR2_CD5CM	(SYSC1.unSTSCKSELR2.stcField.u4CD5CM)  /*@bf@*/
#define SYSC1_STSCKSELR2_TRCCSL	(SYSC1.unSTSCKSELR2.stcField.u3TRCCSL)  /*@bf@*/
#define SYSC1_STSCKSELR2_TRCCM	(SYSC1.unSTSCKSELR2.stcField.u3TRCCM)  /*@bf@*/

typedef struct stc_sysc1_stsckselr2_field{
    uint_io32_t		u4CD5CSL:4;
    uint_io32_t		u4CD5CM:4;
    uint_io32_t		u3TRCCSL:3;
    uint_io32_t		:1;
    uint_io32_t		u3TRCCM:3;
    uint_io32_t		:17;
}stc_sysc1_stsckselr2_field_t;

typedef union un_sysc1_stsckselr2{
    uint_io32_t		u32Register;
    stc_sysc1_stsckselr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckselr2_t;

/* STSCKER0 */
#define SYSC1_STSCKER0	(SYSC1.unSTSCKER0.u32Register)  /*@rg@*/
#define SYSC1_STSCKER0_ENCLKCPU0	(*(volatile uint_io8_t*)0xB1001060)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKATB	(*(volatile uint_io8_t*)0xB1001064)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKDBG	(*(volatile uint_io8_t*)0xB1001065)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKTRC	(*(volatile uint_io8_t*)0xB1001066)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKHPM2	(*(volatile uint_io8_t*)0xB1001067)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKHPM	(*(volatile uint_io8_t*)0xB1001068)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKDMA	(*(volatile uint_io8_t*)0xB1001069)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKMEMC	(*(volatile uint_io8_t*)0xB100106A)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKEXTBUS	(*(volatile uint_io8_t*)0xB100106B)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKSYSC1	(*(volatile uint_io8_t*)0xB100106E)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKHAPP0A0	(*(volatile uint_io8_t*)0xB1001070)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKHAPP0A1	(*(volatile uint_io8_t*)0xB1001071)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKHAPP1B0	(*(volatile uint_io8_t*)0xB1001072)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKHAPP1B1	(*(volatile uint_io8_t*)0xB1001073)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLLPBM	(*(volatile uint_io8_t*)0xB1001074)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLLPBM2	(*(volatile uint_io8_t*)0xB1001075)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLCP	(*(volatile uint_io8_t*)0xB1001077)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLCP0	(*(volatile uint_io8_t*)0xB1001078)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLCP1	(*(volatile uint_io8_t*)0xB1001079)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLAPP0	(*(volatile uint_io8_t*)0xB100107A)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLAPP1	(*(volatile uint_io8_t*)0xB100107B)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLCP0A	(*(volatile uint_io8_t*)0xB100107C)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLCP1A	(*(volatile uint_io8_t*)0xB100107D)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLAPP0A	(*(volatile uint_io8_t*)0xB100107E)  /*@bfbba@*/
#define SYSC1_STSCKER0_ENCLKLAPP1A	(*(volatile uint_io8_t*)0xB100107F)  /*@bfbba@*/

typedef struct stc_sysc1_stscker0_field{
    uint_io32_t		u1ENCLKCPU0:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKATB:1;
    uint_io32_t		u1ENCLKDBG:1;
    uint_io32_t		u1ENCLKTRC:1;
    uint_io32_t		u1ENCLKHPM2:1;
    uint_io32_t		u1ENCLKHPM:1;
    uint_io32_t		u1ENCLKDMA:1;
    uint_io32_t		u1ENCLKMEMC:1;
    uint_io32_t		u1ENCLKEXTBUS:1;
    uint_io32_t		:2;
    uint_io32_t		u1ENCLKSYSC1:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKHAPP0A0:1;
    uint_io32_t		u1ENCLKHAPP0A1:1;
    uint_io32_t		u1ENCLKHAPP1B0:1;
    uint_io32_t		u1ENCLKHAPP1B1:1;
    uint_io32_t		u1ENCLKLLPBM:1;
    uint_io32_t		u1ENCLKLLPBM2:1;
    uint_io32_t		:1;
    uint_io32_t		u1ENCLKLCP:1;
    uint_io32_t		u1ENCLKLCP0:1;
    uint_io32_t		u1ENCLKLCP1:1;
    uint_io32_t		u1ENCLKLAPP0:1;
    uint_io32_t		u1ENCLKLAPP1:1;
    uint_io32_t		u1ENCLKLCP0A:1;
    uint_io32_t		u1ENCLKLCP1A:1;
    uint_io32_t		u1ENCLKLAPP0A:1;
    uint_io32_t		u1ENCLKLAPP1A:1;
}stc_sysc1_stscker0_field_t;

typedef union un_sysc1_stscker0{
    uint_io32_t		u32Register;
    stc_sysc1_stscker0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stscker0_t;

/* STSCKER1 */
#define SYSC1_STSCKER1	(SYSC1.unSTSCKER1.u32Register)  /*@rg@*/
#define SYSC1_STSCKER1_ENCLKHSSPI	(*(volatile uint_io8_t*)0xB1001080)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD1	(*(volatile uint_io8_t*)0xB1001088)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD1A0	(*(volatile uint_io8_t*)0xB1001089)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD1A1	(*(volatile uint_io8_t*)0xB100108A)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD1B0	(*(volatile uint_io8_t*)0xB100108B)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD1B1	(*(volatile uint_io8_t*)0xB100108C)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD2	(*(volatile uint_io8_t*)0xB1001090)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD2A0	(*(volatile uint_io8_t*)0xB1001091)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD2A1	(*(volatile uint_io8_t*)0xB1001092)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD2B0	(*(volatile uint_io8_t*)0xB1001093)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD2B1	(*(volatile uint_io8_t*)0xB1001094)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD3	(*(volatile uint_io8_t*)0xB1001098)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD3A0	(*(volatile uint_io8_t*)0xB1001099)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD3A1	(*(volatile uint_io8_t*)0xB100109A)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD3B0	(*(volatile uint_io8_t*)0xB100109B)  /*@bfbba@*/
#define SYSC1_STSCKER1_ENCLKCD3B1	(*(volatile uint_io8_t*)0xB100109C)  /*@bfbba@*/

typedef struct stc_sysc1_stscker1_field{
    uint_io32_t		u1ENCLKHSSPI:1;
    uint_io32_t		:7;
    uint_io32_t		u1ENCLKCD1:1;
    uint_io32_t		u1ENCLKCD1A0:1;
    uint_io32_t		u1ENCLKCD1A1:1;
    uint_io32_t		u1ENCLKCD1B0:1;
    uint_io32_t		u1ENCLKCD1B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD2:1;
    uint_io32_t		u1ENCLKCD2A0:1;
    uint_io32_t		u1ENCLKCD2A1:1;
    uint_io32_t		u1ENCLKCD2B0:1;
    uint_io32_t		u1ENCLKCD2B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD3:1;
    uint_io32_t		u1ENCLKCD3A0:1;
    uint_io32_t		u1ENCLKCD3A1:1;
    uint_io32_t		u1ENCLKCD3B0:1;
    uint_io32_t		u1ENCLKCD3B1:1;
    uint_io32_t		:3;
}stc_sysc1_stscker1_field_t;

typedef union un_sysc1_stscker1{
    uint_io32_t		u32Register;
    stc_sysc1_stscker1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stscker1_t;

/* STSCKER2 */
#define SYSC1_STSCKER2	(SYSC1.unSTSCKER2.u32Register)  /*@rg@*/
#define SYSC1_STSCKER2_ENCLKCD4	(*(volatile uint_io8_t*)0xB10010A0)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD4A0	(*(volatile uint_io8_t*)0xB10010A1)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD4A1	(*(volatile uint_io8_t*)0xB10010A2)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD4B0	(*(volatile uint_io8_t*)0xB10010A3)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD4B1	(*(volatile uint_io8_t*)0xB10010A4)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD5	(*(volatile uint_io8_t*)0xB10010A8)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD5A0	(*(volatile uint_io8_t*)0xB10010A9)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD5A1	(*(volatile uint_io8_t*)0xB10010AA)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD5B0	(*(volatile uint_io8_t*)0xB10010AB)  /*@bfbba@*/
#define SYSC1_STSCKER2_ENCLKCD5B1	(*(volatile uint_io8_t*)0xB10010AC)  /*@bfbba@*/

typedef struct stc_sysc1_stscker2_field{
    uint_io32_t		u1ENCLKCD4:1;
    uint_io32_t		u1ENCLKCD4A0:1;
    uint_io32_t		u1ENCLKCD4A1:1;
    uint_io32_t		u1ENCLKCD4B0:1;
    uint_io32_t		u1ENCLKCD4B1:1;
    uint_io32_t		:3;
    uint_io32_t		u1ENCLKCD5:1;
    uint_io32_t		u1ENCLKCD5A0:1;
    uint_io32_t		u1ENCLKCD5A1:1;
    uint_io32_t		u1ENCLKCD5B0:1;
    uint_io32_t		u1ENCLKCD5B1:1;
    uint_io32_t		:19;
}stc_sysc1_stscker2_field_t;

typedef union un_sysc1_stscker2{
    uint_io32_t		u32Register;
    stc_sysc1_stscker2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stscker2_t;

/* STSCKDIVR0 */
#define SYSC1_STSCKDIVR0	(SYSC1.unSTSCKDIVR0.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR0_SYSDIV	(SYSC1.unSTSCKDIVR0.stcField.u5SYSDIV)  /*@bf@*/
#define SYSC1_STSCKDIVR0_ATBDIV	(SYSC1.unSTSCKDIVR0.stcField.u2ATBDIV)  /*@bf@*/
#define SYSC1_STSCKDIVR0_DBGDIV	(SYSC1.unSTSCKDIVR0.stcField.u2DBGDIV)  /*@bf@*/
#define SYSC1_STSCKDIVR0_TRCDIV	(SYSC1.unSTSCKDIVR0.stcField.u5TRCDIV)  /*@bf@*/
#define SYSC1_STSCKDIVR0_HPMDIV	(SYSC1.unSTSCKDIVR0.stcField.u3HPMDIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr0_field{
    uint_io32_t		u5SYSDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u2ATBDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u2DBGDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u5TRCDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u3HPMDIV:3;
    uint_io32_t		:5;
}stc_sysc1_stsckdivr0_field_t;

typedef union un_sysc1_stsckdivr0{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr0_t;

/* STSCKDIVR1 */
#define SYSC1_STSCKDIVR1	(SYSC1.unSTSCKDIVR1.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR1_EXTBUSDIV	(SYSC1.unSTSCKDIVR1.stcField.u3EXTBUSDIV)  /*@bf@*/
#define SYSC1_STSCKDIVR1_SYSC1DIV	(SYSC1.unSTSCKDIVR1.stcField.u4SYSC1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR1_HAPP0A0DIV	(SYSC1.unSTSCKDIVR1.stcField.u4HAPP0A0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR1_HAPP0A1DIV	(SYSC1.unSTSCKDIVR1.stcField.u4HAPP0A1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR1_HAPP1B0DIV	(SYSC1.unSTSCKDIVR1.stcField.u4HAPP1B0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR1_HAPP1B1DIV	(SYSC1.unSTSCKDIVR1.stcField.u4HAPP1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr1_field{
    uint_io32_t		u3EXTBUSDIV:3;
    uint_io32_t		:1;
    uint_io32_t		u4SYSC1DIV:4;
    uint_io32_t		:8;
    uint_io32_t		u4HAPP0A0DIV:4;
    uint_io32_t		u4HAPP0A1DIV:4;
    uint_io32_t		u4HAPP1B0DIV:4;
    uint_io32_t		u4HAPP1B1DIV:4;
}stc_sysc1_stsckdivr1_field_t;

typedef union un_sysc1_stsckdivr1{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr1_t;

/* STSCKDIVR2 */
#define SYSC1_STSCKDIVR2	(SYSC1.unSTSCKDIVR2.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR2_LCPDIV	(SYSC1.unSTSCKDIVR2.stcField.u2LCPDIV)  /*@bf@*/
#define SYSC1_STSCKDIVR2_LCP0DIV	(SYSC1.unSTSCKDIVR2.stcField.u4LCP0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR2_LCP1DIV	(SYSC1.unSTSCKDIVR2.stcField.u4LCP1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR2_LAPP0DIV	(SYSC1.unSTSCKDIVR2.stcField.u4LAPP0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR2_LAPP1DIV	(SYSC1.unSTSCKDIVR2.stcField.u4LAPP1DIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr2_field{
    uint_io32_t		u2LCPDIV:2;
    uint_io32_t		:2;
    uint_io32_t		u4LCP0DIV:4;
    uint_io32_t		u4LCP1DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP0DIV:4;
    uint_io32_t		:4;
    uint_io32_t		u4LAPP1DIV:4;
    uint_io32_t		:4;
}stc_sysc1_stsckdivr2_field_t;

typedef union un_sysc1_stsckdivr2{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr2_t;

/* STSCKDIVR3 */
#define SYSC1_STSCKDIVR3	(SYSC1.unSTSCKDIVR3.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR3_LCP0ADIV	(SYSC1.unSTSCKDIVR3.stcField.u5LCP0ADIV)  /*@bf@*/
#define SYSC1_STSCKDIVR3_LCP1ADIV	(SYSC1.unSTSCKDIVR3.stcField.u5LCP1ADIV)  /*@bf@*/
#define SYSC1_STSCKDIVR3_LAPP0ADIV	(SYSC1.unSTSCKDIVR3.stcField.u5LAPP0ADIV)  /*@bf@*/
#define SYSC1_STSCKDIVR3_LAPP1ADIV	(SYSC1.unSTSCKDIVR3.stcField.u5LAPP1ADIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr3_field{
    uint_io32_t		u5LCP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LCP1ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP0ADIV:5;
    uint_io32_t		:3;
    uint_io32_t		u5LAPP1ADIV:5;
    uint_io32_t		:3;
}stc_sysc1_stsckdivr3_field_t;

typedef union un_sysc1_stsckdivr3{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr3_t;

/* STSCKDIVR4 */
#define SYSC1_STSCKDIVR4	(SYSC1.unSTSCKDIVR4.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR4_HSSPIDIV	(SYSC1.unSTSCKDIVR4.stcField.u5HSSPIDIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr4_field{
    uint_io32_t		u5HSSPIDIV:5;
    uint_io32_t		:27;
}stc_sysc1_stsckdivr4_field_t;

typedef union un_sysc1_stsckdivr4{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr4_t;

/* STSCKDIVR5 */
#define SYSC1_STSCKDIVR5	(SYSC1.unSTSCKDIVR5.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR5_CD1DIV	(SYSC1.unSTSCKDIVR5.stcField.u5CD1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR5_CD1A0DIV	(SYSC1.unSTSCKDIVR5.stcField.u4CD1A0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR5_CD1A1DIV	(SYSC1.unSTSCKDIVR5.stcField.u4CD1A1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR5_CD1B0DIV	(SYSC1.unSTSCKDIVR5.stcField.u4CD1B0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR5_CD1B1DIV	(SYSC1.unSTSCKDIVR5.stcField.u4CD1B1DIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr5_field{
    uint_io32_t		u5CD1DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD1A0DIV:4;
    uint_io32_t		u4CD1A1DIV:4;
    uint_io32_t		u4CD1B0DIV:4;
    uint_io32_t		u4CD1B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_stsckdivr5_field_t;

typedef union un_sysc1_stsckdivr5{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr5_t;

/* STSCKDIVR6 */
#define SYSC1_STSCKDIVR6	(SYSC1.unSTSCKDIVR6.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR6_CD2DIV	(SYSC1.unSTSCKDIVR6.stcField.u5CD2DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR6_CD2A0DIV	(SYSC1.unSTSCKDIVR6.stcField.u4CD2A0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR6_CD2A1DIV	(SYSC1.unSTSCKDIVR6.stcField.u4CD2A1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR6_CD2B0DIV	(SYSC1.unSTSCKDIVR6.stcField.u4CD2B0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR6_CD2B1DIV	(SYSC1.unSTSCKDIVR6.stcField.u4CD2B1DIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr6_field{
    uint_io32_t		u5CD2DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD2A0DIV:4;
    uint_io32_t		u4CD2A1DIV:4;
    uint_io32_t		u4CD2B0DIV:4;
    uint_io32_t		u4CD2B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_stsckdivr6_field_t;

typedef union un_sysc1_stsckdivr6{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr6_t;

/* STSCKDIVR7 */
#define SYSC1_STSCKDIVR7	(SYSC1.unSTSCKDIVR7.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR7_CD3DIV	(SYSC1.unSTSCKDIVR7.stcField.u5CD3DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR7_CD3A0DIV	(SYSC1.unSTSCKDIVR7.stcField.u4CD3A0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR7_CD3A1DIV	(SYSC1.unSTSCKDIVR7.stcField.u4CD3A1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR7_CD3B0DIV	(SYSC1.unSTSCKDIVR7.stcField.u4CD3B0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR7_CD3B1DIV	(SYSC1.unSTSCKDIVR7.stcField.u4CD3B1DIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr7_field{
    uint_io32_t		u5CD3DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD3A0DIV:4;
    uint_io32_t		u4CD3A1DIV:4;
    uint_io32_t		u4CD3B0DIV:4;
    uint_io32_t		u4CD3B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_stsckdivr7_field_t;

typedef union un_sysc1_stsckdivr7{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr7_t;

/* STSCKDIVR8 */
#define SYSC1_STSCKDIVR8	(SYSC1.unSTSCKDIVR8.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR8_CD4DIV	(SYSC1.unSTSCKDIVR8.stcField.u5CD4DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR8_CD4A0DIV	(SYSC1.unSTSCKDIVR8.stcField.u4CD4A0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR8_CD4A1DIV	(SYSC1.unSTSCKDIVR8.stcField.u4CD4A1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR8_CD4B0DIV	(SYSC1.unSTSCKDIVR8.stcField.u4CD4B0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR8_CD4B1DIV	(SYSC1.unSTSCKDIVR8.stcField.u4CD4B1DIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr8_field{
    uint_io32_t		u5CD4DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD4A0DIV:4;
    uint_io32_t		u4CD4A1DIV:4;
    uint_io32_t		u4CD4B0DIV:4;
    uint_io32_t		u4CD4B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_stsckdivr8_field_t;

typedef union un_sysc1_stsckdivr8{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr8_t;

/* STSCKDIVR9 */
#define SYSC1_STSCKDIVR9	(SYSC1.unSTSCKDIVR9.u32Register)  /*@rg@*/
#define SYSC1_STSCKDIVR9_CD5DIV	(SYSC1.unSTSCKDIVR9.stcField.u5CD5DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR9_CD5A0DIV	(SYSC1.unSTSCKDIVR9.stcField.u4CD5A0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR9_CD5A1DIV	(SYSC1.unSTSCKDIVR9.stcField.u4CD5A1DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR9_CD5B0DIV	(SYSC1.unSTSCKDIVR9.stcField.u4CD5B0DIV)  /*@bf@*/
#define SYSC1_STSCKDIVR9_CD5B1DIV	(SYSC1.unSTSCKDIVR9.stcField.u4CD5B1DIV)  /*@bf@*/

typedef struct stc_sysc1_stsckdivr9_field{
    uint_io32_t		u5CD5DIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4CD5A0DIV:4;
    uint_io32_t		u4CD5A1DIV:4;
    uint_io32_t		u4CD5B0DIV:4;
    uint_io32_t		u4CD5B1DIV:4;
    uint_io32_t		:8;
}stc_sysc1_stsckdivr9_field_t;

typedef union un_sysc1_stsckdivr9{
    uint_io32_t		u32Register;
    stc_sysc1_stsckdivr9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc1_stsckdivr9_t;


typedef struct stc_sysc1{
    un_sysc1_protkeyr_t	unPROTKEYR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[124];	/* 0x00000004 */
    un_sysc1_runckselr0_t	unRUNCKSELR0;	/* 0x00000080 */
    un_sysc1_runckselr1_t	unRUNCKSELR1;	/* 0x00000084 */
    un_sysc1_runckselr2_t	unRUNCKSELR2;	/* 0x00000088 */
    un_sysc1_runcker0_t	unRUNCKER0;	/* 0x0000008C */
    un_sysc1_runcker1_t	unRUNCKER1;	/* 0x00000090 */
    un_sysc1_runcker2_t	unRUNCKER2;	/* 0x00000094 */
    un_sysc1_runckdivr0_t	unRUNCKDIVR0;	/* 0x00000098 */
    un_sysc1_runckdivr1_t	unRUNCKDIVR1;	/* 0x0000009C */
    un_sysc1_runckdivr2_t	unRUNCKDIVR2;	/* 0x000000A0 */
    un_sysc1_runckdivr3_t	unRUNCKDIVR3;	/* 0x000000A4 */
    un_sysc1_runckdivr4_t	unRUNCKDIVR4;	/* 0x000000A8 */
    un_sysc1_runckdivr5_t	unRUNCKDIVR5;	/* 0x000000AC */
    un_sysc1_runckdivr6_t	unRUNCKDIVR6;	/* 0x000000B0 */
    un_sysc1_runckdivr7_t	unRUNCKDIVR7;	/* 0x000000B4 */
    un_sysc1_runckdivr8_t	unRUNCKDIVR8;	/* 0x000000B8 */
    un_sysc1_runckdivr9_t	unRUNCKDIVR9;	/* 0x000000BC */
    uint_io8_t	au8Reserved1[60];	/* 0x000000C0 */
    un_sysc1_runenr_0_t	unRUNENR_0;	/* 0x000000FC */
    uint_io8_t	au8Reserved2[3];	/* 0x000000FD */
    un_sysc1_pssckselr0_t	unPSSCKSELR0;	/* 0x00000100 */
    un_sysc1_pssckselr1_t	unPSSCKSELR1;	/* 0x00000104 */
    un_sysc1_pssckselr2_t	unPSSCKSELR2;	/* 0x00000108 */
    un_sysc1_psscker0_t	unPSSCKER0;	/* 0x0000010C */
    un_sysc1_psscker1_t	unPSSCKER1;	/* 0x00000110 */
    un_sysc1_psscker2_t	unPSSCKER2;	/* 0x00000114 */
    un_sysc1_pssckdivr0_t	unPSSCKDIVR0;	/* 0x00000118 */
    un_sysc1_pssckdivr1_t	unPSSCKDIVR1;	/* 0x0000011C */
    un_sysc1_pssckdivr2_t	unPSSCKDIVR2;	/* 0x00000120 */
    un_sysc1_pssckdivr3_t	unPSSCKDIVR3;	/* 0x00000124 */
    un_sysc1_pssckdivr4_t	unPSSCKDIVR4;	/* 0x00000128 */
    un_sysc1_pssckdivr5_t	unPSSCKDIVR5;	/* 0x0000012C */
    un_sysc1_pssckdivr6_t	unPSSCKDIVR6;	/* 0x00000130 */
    un_sysc1_pssckdivr7_t	unPSSCKDIVR7;	/* 0x00000134 */
    un_sysc1_pssckdivr8_t	unPSSCKDIVR8;	/* 0x00000138 */
    un_sysc1_pssckdivr9_t	unPSSCKDIVR9;	/* 0x0000013C */
    uint_io8_t	au8Reserved3[60];	/* 0x00000140 */
    un_sysc1_pssenr_0_t	unPSSENR_0;	/* 0x0000017C */
    uint_io8_t	au8Reserved4[3];	/* 0x0000017D */
    un_sysc1_appckselr0_t	unAPPCKSELR0;	/* 0x00000180 */
    un_sysc1_appckselr1_t	unAPPCKSELR1;	/* 0x00000184 */
    un_sysc1_appckselr2_t	unAPPCKSELR2;	/* 0x00000188 */
    un_sysc1_appcker0_t	unAPPCKER0;	/* 0x0000018C */
    un_sysc1_appcker1_t	unAPPCKER1;	/* 0x00000190 */
    un_sysc1_appcker2_t	unAPPCKER2;	/* 0x00000194 */
    un_sysc1_appckdivr0_t	unAPPCKDIVR0;	/* 0x00000198 */
    un_sysc1_appckdivr1_t	unAPPCKDIVR1;	/* 0x0000019C */
    un_sysc1_appckdivr2_t	unAPPCKDIVR2;	/* 0x000001A0 */
    un_sysc1_appckdivr3_t	unAPPCKDIVR3;	/* 0x000001A4 */
    un_sysc1_appckdivr4_t	unAPPCKDIVR4;	/* 0x000001A8 */
    un_sysc1_appckdivr5_t	unAPPCKDIVR5;	/* 0x000001AC */
    un_sysc1_appckdivr6_t	unAPPCKDIVR6;	/* 0x000001B0 */
    un_sysc1_appckdivr7_t	unAPPCKDIVR7;	/* 0x000001B4 */
    un_sysc1_appckdivr8_t	unAPPCKDIVR8;	/* 0x000001B8 */
    un_sysc1_appckdivr9_t	unAPPCKDIVR9;	/* 0x000001BC */
    uint_io8_t	au8Reserved5[64];	/* 0x000001C0 */
    un_sysc1_stsckselr0_t	unSTSCKSELR0;	/* 0x00000200 */
    un_sysc1_stsckselr1_t	unSTSCKSELR1;	/* 0x00000204 */
    un_sysc1_stsckselr2_t	unSTSCKSELR2;	/* 0x00000208 */
    un_sysc1_stscker0_t	unSTSCKER0;	/* 0x0000020C */
    un_sysc1_stscker1_t	unSTSCKER1;	/* 0x00000210 */
    un_sysc1_stscker2_t	unSTSCKER2;	/* 0x00000214 */
    un_sysc1_stsckdivr0_t	unSTSCKDIVR0;	/* 0x00000218 */
    un_sysc1_stsckdivr1_t	unSTSCKDIVR1;	/* 0x0000021C */
    un_sysc1_stsckdivr2_t	unSTSCKDIVR2;	/* 0x00000220 */
    un_sysc1_stsckdivr3_t	unSTSCKDIVR3;	/* 0x00000224 */
    un_sysc1_stsckdivr4_t	unSTSCKDIVR4;	/* 0x00000228 */
    un_sysc1_stsckdivr5_t	unSTSCKDIVR5;	/* 0x0000022C */
    un_sysc1_stsckdivr6_t	unSTSCKDIVR6;	/* 0x00000230 */
    un_sysc1_stsckdivr7_t	unSTSCKDIVR7;	/* 0x00000234 */
    un_sysc1_stsckdivr8_t	unSTSCKDIVR8;	/* 0x00000238 */
    un_sysc1_stsckdivr9_t	unSTSCKDIVR9;	/* 0x0000023C */
    uint_io8_t	au8Reserved6[32192];	/* 0x00000240 */
}stc_sysc1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc1_t	stcSYSC1;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


/* SYSC0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC0_1	stcSYSC0_1
#else /* __IO_DEFINE */
#define SYSC0_1	(*((volatile stc_sysc0_1_t*)0xB0600000))
#endif /* __IO_DEFINE */

/* PROTKEYR */
#define SYSC0_PROTKEYR	(SYSC0_1.unPROTKEYR.u32Register)  /*@rg@*/
#define SYSC0_PROTKEYR_PROTKEY	SYSC0_PROTKEYR  /*@bfrg@*/

typedef union un_sysc0_1_protkeyr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_protkeyr_t;

/* RUNPDCFGR */
#define SYSC0_RUNPDCFGR	(SYSC0_1.unRUNPDCFGR.u32Register)  /*@rg@*/
#define SYSC0_RUNPDCFGR_PD2EN	(*(volatile uint_io8_t*)0xB0800408)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD3EN	(*(volatile uint_io8_t*)0xB080040C)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD4_0EN	(*(volatile uint_io8_t*)0xB0800410)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD4_1EN	(*(volatile uint_io8_t*)0xB0800411)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD5_0EN	(*(volatile uint_io8_t*)0xB0800414)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD5_1EN	(*(volatile uint_io8_t*)0xB0800415)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD5_2EN	(*(volatile uint_io8_t*)0xB0800416)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD5_3EN	(*(volatile uint_io8_t*)0xB0800417)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD6_0EN	(*(volatile uint_io8_t*)0xB0800418)  /*@bfbba@*/
#define SYSC0_RUNPDCFGR_PD6_1EN	(*(volatile uint_io8_t*)0xB0800419)  /*@bfbba@*/

typedef struct stc_sysc0_1_runpdcfgr_field{
    uint_io32_t		:8;
    uint_io32_t		u1PD2EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD3EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD4_0EN:1;
    uint_io32_t		u1PD4_1EN:1;
    uint_io32_t		:2;
    uint_io32_t		u1PD5_0EN:1;
    uint_io32_t		u1PD5_1EN:1;
    uint_io32_t		u1PD5_2EN:1;
    uint_io32_t		u1PD5_3EN:1;
    uint_io32_t		u1PD6_0EN:1;
    uint_io32_t		u1PD6_1EN:1;
    uint_io32_t		:6;
}stc_sysc0_1_runpdcfgr_field_t;

typedef union un_sysc0_1_runpdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runpdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runpdcfgr_t;

/* RUNCKSRER */
#define SYSC0_RUNCKSRER	(SYSC0_1.unRUNCKSRER.u32Register)  /*@rg@*/
#define SYSC0_RUNCKSRER_CROSCEN	(*(volatile uint_io8_t*)0xB0800420)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_SCROSCEN	(*(volatile uint_io8_t*)0xB0800421)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_MOSCEN	(*(volatile uint_io8_t*)0xB0800422)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_SOSCEN	(*(volatile uint_io8_t*)0xB0800423)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_PLL0EN	(*(volatile uint_io8_t*)0xB0800428)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_PLL1EN	(*(volatile uint_io8_t*)0xB0800429)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_PLL2EN	(*(volatile uint_io8_t*)0xB080042A)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_PLL3EN	(*(volatile uint_io8_t*)0xB080042B)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_SSCG0EN	(*(volatile uint_io8_t*)0xB0800430)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_SSCG1EN	(*(volatile uint_io8_t*)0xB0800431)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_SSCG2EN	(*(volatile uint_io8_t*)0xB0800432)  /*@bfbba@*/
#define SYSC0_RUNCKSRER_SSCG3EN	(*(volatile uint_io8_t*)0xB0800433)  /*@bfbba@*/

typedef struct stc_sysc0_1_runcksrer_field{
    uint_io32_t		u1CROSCEN:1;
    uint_io32_t		u1SCROSCEN:1;
    uint_io32_t		u1MOSCEN:1;
    uint_io32_t		u1SOSCEN:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0EN:1;
    uint_io32_t		u1PLL1EN:1;
    uint_io32_t		u1PLL2EN:1;
    uint_io32_t		u1PLL3EN:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0EN:1;
    uint_io32_t		u1SSCG1EN:1;
    uint_io32_t		u1SSCG2EN:1;
    uint_io32_t		u1SSCG3EN:1;
    uint_io32_t		:12;
}stc_sysc0_1_runcksrer_field_t;

typedef union un_sysc0_1_runcksrer{
    uint_io32_t		u32Register;
    stc_sysc0_1_runcksrer_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runcksrer_t;

/* RUNCKSELR */
#define SYSC0_RUNCKSELR	(SYSC0_1.unRUNCKSELR.u32Register)  /*@rg@*/
#define SYSC0_RUNCKSELR_CDMCUCCSL	(SYSC0_1.unRUNCKSELR.stcField.u3CDMCUCCSL)  /*@bf@*/

typedef struct stc_sysc0_1_runckselr_field{
    uint_io32_t		u3CDMCUCCSL:3;
    uint_io32_t		:29;
}stc_sysc0_1_runckselr_field_t;

typedef union un_sysc0_1_runckselr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runckselr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runckselr_t;

/* RUNCKER */
#define SYSC0_RUNCKER	(SYSC0_1.unRUNCKER.u32Register)  /*@rg@*/
#define SYSC0_RUNCKER_ENCLKMCUCH	(*(volatile uint_io8_t*)0xB0800460)  /*@bfbba@*/
#define SYSC0_RUNCKER_ENCLKMCUCP	(*(volatile uint_io8_t*)0xB0800461)  /*@bfbba@*/

typedef struct stc_sysc0_1_runcker_field{
    uint_io32_t		u1ENCLKMCUCH:1;
    uint_io32_t		u1ENCLKMCUCP:1;
    uint_io32_t		:30;
}stc_sysc0_1_runcker_field_t;

typedef union un_sysc0_1_runcker{
    uint_io32_t		u32Register;
    stc_sysc0_1_runcker_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runcker_t;

/* RUNCKDIVR */
#define SYSC0_RUNCKDIVR	(SYSC0_1.unRUNCKDIVR.u32Register)  /*@rg@*/
#define SYSC0_RUNCKDIVR_MCUCHDIV	(SYSC0_1.unRUNCKDIVR.stcField.u5MCUCHDIV)  /*@bf@*/
#define SYSC0_RUNCKDIVR_MCUCPDIV	(SYSC0_1.unRUNCKDIVR.stcField.u4MCUCPDIV)  /*@bf@*/

typedef struct stc_sysc0_1_runckdivr_field{
    uint_io32_t		u5MCUCHDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4MCUCPDIV:4;
    uint_io32_t		:20;
}stc_sysc0_1_runckdivr_field_t;

typedef union un_sysc0_1_runckdivr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runckdivr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runckdivr_t;

/* RUNPLL0CNTR */
#define SYSC0_RUNPLL0CNTR	(SYSC0_1.unRUNPLL0CNTR.u32Register)  /*@rg@*/
#define SYSC0_RUNPLL0CNTR_PLL0DIVL	(SYSC0_1.unRUNPLL0CNTR.stcField.u2PLL0DIVL)  /*@bf@*/
#define SYSC0_RUNPLL0CNTR_PLL0DIVM	(SYSC0_1.unRUNPLL0CNTR.stcField.u4PLL0DIVM)  /*@bf@*/
#define SYSC0_RUNPLL0CNTR_PLL0DIVN	(SYSC0_1.unRUNPLL0CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNPLL0CNTR_PLL0ISEL	(*(volatile uint_io8_t*)0xB08004BF)  /*@bfbba@*/

typedef struct stc_sysc0_1_runpll0cntr_field{
    uint_io32_t		u2PLL0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL0ISEL:1;
}stc_sysc0_1_runpll0cntr_field_t;

typedef union un_sysc0_1_runpll0cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runpll0cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runpll0cntr_t;

/* RUNPLL1CNTR */
#define SYSC0_RUNPLL1CNTR	(SYSC0_1.unRUNPLL1CNTR.u32Register)  /*@rg@*/
#define SYSC0_RUNPLL1CNTR_PLL1DIVL	(SYSC0_1.unRUNPLL1CNTR.stcField.u2PLL1DIVL)  /*@bf@*/
#define SYSC0_RUNPLL1CNTR_PLL1DIVM	(SYSC0_1.unRUNPLL1CNTR.stcField.u4PLL1DIVM)  /*@bf@*/
#define SYSC0_RUNPLL1CNTR_PLL1DIVN	(SYSC0_1.unRUNPLL1CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNPLL1CNTR_PLL1ISEL	(*(volatile uint_io8_t*)0xB08004DF)  /*@bfbba@*/

typedef struct stc_sysc0_1_runpll1cntr_field{
    uint_io32_t		u2PLL1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL1ISEL:1;
}stc_sysc0_1_runpll1cntr_field_t;

typedef union un_sysc0_1_runpll1cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runpll1cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runpll1cntr_t;

/* RUNPLL2CNTR */
#define SYSC0_RUNPLL2CNTR	(SYSC0_1.unRUNPLL2CNTR.u32Register)  /*@rg@*/
#define SYSC0_RUNPLL2CNTR_PLL2DIVL	(SYSC0_1.unRUNPLL2CNTR.stcField.u2PLL2DIVL)  /*@bf@*/
#define SYSC0_RUNPLL2CNTR_PLL2DIVM	(SYSC0_1.unRUNPLL2CNTR.stcField.u4PLL2DIVM)  /*@bf@*/
#define SYSC0_RUNPLL2CNTR_PLL2DIVN	(SYSC0_1.unRUNPLL2CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNPLL2CNTR_PLL2ISEL	(*(volatile uint_io8_t*)0xB08004FF)  /*@bfbba@*/

typedef struct stc_sysc0_1_runpll2cntr_field{
    uint_io32_t		u2PLL2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL2ISEL:1;
}stc_sysc0_1_runpll2cntr_field_t;

typedef union un_sysc0_1_runpll2cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runpll2cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runpll2cntr_t;

/* RUNPLL3CNTR */
#define SYSC0_RUNPLL3CNTR	(SYSC0_1.unRUNPLL3CNTR.u32Register)  /*@rg@*/
#define SYSC0_RUNPLL3CNTR_PLL3DIVL	(SYSC0_1.unRUNPLL3CNTR.stcField.u2PLL3DIVL)  /*@bf@*/
#define SYSC0_RUNPLL3CNTR_PLL3DIVM	(SYSC0_1.unRUNPLL3CNTR.stcField.u4PLL3DIVM)  /*@bf@*/
#define SYSC0_RUNPLL3CNTR_PLL3DIVN	(SYSC0_1.unRUNPLL3CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNPLL3CNTR_PLL3ISEL	(*(volatile uint_io8_t*)0xB080051F)  /*@bfbba@*/

typedef struct stc_sysc0_1_runpll3cntr_field{
    uint_io32_t		u2PLL3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL3ISEL:1;
}stc_sysc0_1_runpll3cntr_field_t;

typedef union un_sysc0_1_runpll3cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runpll3cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runpll3cntr_t;

/* RUNSSCG0CNTR0 */
#define SYSC0_RUNSSCG0CNTR0	(SYSC0_1.unRUNSSCG0CNTR0.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG0CNTR0_SSCG0DIVL	(SYSC0_1.unRUNSSCG0CNTR0.stcField.u2SSCG0DIVL)  /*@bf@*/
#define SYSC0_RUNSSCG0CNTR0_SSCG0DIVM	(SYSC0_1.unRUNSSCG0CNTR0.stcField.u4SSCG0DIVM)  /*@bf@*/
#define SYSC0_RUNSSCG0CNTR0_SSCG0DIVN	(SYSC0_1.unRUNSSCG0CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNSSCG0CNTR0_SSCG0ISEL	(*(volatile uint_io8_t*)0xB080053F)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg0cntr0_field{
    uint_io32_t		u2SSCG0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG0ISEL:1;
}stc_sysc0_1_runsscg0cntr0_field_t;

typedef union un_sysc0_1_runsscg0cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg0cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg0cntr0_t;

/* RUNSSCG0CNTR1 */
#define SYSC0_RUNSSCG0CNTR1	(SYSC0_1.unRUNSSCG0CNTR1.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG0CNTR1_SSCG0RATE	(SYSC0_1.unRUNSSCG0CNTR1.stcField.u10SSCG0RATE)  /*@bf@*/
#define SYSC0_RUNSSCG0CNTR1_SSCG0MODE	(*(volatile uint_io8_t*)0xB0800550)  /*@bfbba@*/
#define SYSC0_RUNSSCG0CNTR1_SSCG0FREQ	(SYSC0_1.unRUNSSCG0CNTR1.stcField.u2SSCG0FREQ)  /*@bf@*/
#define SYSC0_RUNSSCG0CNTR1_SSCG0SSEN	(*(volatile uint_io8_t*)0xB0800558)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg0cntr1_field{
    uint_io32_t		u10SSCG0RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG0MODE:1;
    uint_io32_t		u2SSCG0FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG0SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_runsscg0cntr1_field_t;

typedef union un_sysc0_1_runsscg0cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg0cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg0cntr1_t;

/* RUNSSCG1CNTR0 */
#define SYSC0_RUNSSCG1CNTR0	(SYSC0_1.unRUNSSCG1CNTR0.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG1CNTR0_SSCG1DIVL	(SYSC0_1.unRUNSSCG1CNTR0.stcField.u2SSCG1DIVL)  /*@bf@*/
#define SYSC0_RUNSSCG1CNTR0_SSCG1DIVM	(SYSC0_1.unRUNSSCG1CNTR0.stcField.u4SSCG1DIVM)  /*@bf@*/
#define SYSC0_RUNSSCG1CNTR0_SSCG1DIVN	(SYSC0_1.unRUNSSCG1CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNSSCG1CNTR0_SSCG1ISEL	(*(volatile uint_io8_t*)0xB080057F)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg1cntr0_field{
    uint_io32_t		u2SSCG1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG1ISEL:1;
}stc_sysc0_1_runsscg1cntr0_field_t;

typedef union un_sysc0_1_runsscg1cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg1cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg1cntr0_t;

/* RUNSSCG1CNTR1 */
#define SYSC0_RUNSSCG1CNTR1	(SYSC0_1.unRUNSSCG1CNTR1.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG1CNTR1_SSCG1RATE	(SYSC0_1.unRUNSSCG1CNTR1.stcField.u10SSCG1RATE)  /*@bf@*/
#define SYSC0_RUNSSCG1CNTR1_SSCG1MODE	(*(volatile uint_io8_t*)0xB0800590)  /*@bfbba@*/
#define SYSC0_RUNSSCG1CNTR1_SSCG1FREQ	(SYSC0_1.unRUNSSCG1CNTR1.stcField.u2SSCG1FREQ)  /*@bf@*/
#define SYSC0_RUNSSCG1CNTR1_SSCG1SSEN	(*(volatile uint_io8_t*)0xB0800598)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg1cntr1_field{
    uint_io32_t		u10SSCG1RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG1MODE:1;
    uint_io32_t		u2SSCG1FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG1SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_runsscg1cntr1_field_t;

typedef union un_sysc0_1_runsscg1cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg1cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg1cntr1_t;

/* RUNSSCG2CNTR0 */
#define SYSC0_RUNSSCG2CNTR0	(SYSC0_1.unRUNSSCG2CNTR0.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG2CNTR0_SSCG2DIVL	(SYSC0_1.unRUNSSCG2CNTR0.stcField.u2SSCG2DIVL)  /*@bf@*/
#define SYSC0_RUNSSCG2CNTR0_SSCG2DIVM	(SYSC0_1.unRUNSSCG2CNTR0.stcField.u4SSCG2DIVM)  /*@bf@*/
#define SYSC0_RUNSSCG2CNTR0_SSCG2DIVN	(SYSC0_1.unRUNSSCG2CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNSSCG2CNTR0_SSCG2ISEL	(*(volatile uint_io8_t*)0xB08005BF)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg2cntr0_field{
    uint_io32_t		u2SSCG2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG2ISEL:1;
}stc_sysc0_1_runsscg2cntr0_field_t;

typedef union un_sysc0_1_runsscg2cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg2cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg2cntr0_t;

/* RUNSSCG2CNTR1 */
#define SYSC0_RUNSSCG2CNTR1	(SYSC0_1.unRUNSSCG2CNTR1.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG2CNTR1_SSCG2RATE	(SYSC0_1.unRUNSSCG2CNTR1.stcField.u10SSCG2RATE)  /*@bf@*/
#define SYSC0_RUNSSCG2CNTR1_SSCG2MODE	(*(volatile uint_io8_t*)0xB08005D0)  /*@bfbba@*/
#define SYSC0_RUNSSCG2CNTR1_SSCG2FREQ	(SYSC0_1.unRUNSSCG2CNTR1.stcField.u2SSCG2FREQ)  /*@bf@*/
#define SYSC0_RUNSSCG2CNTR1_SSCG2SSEN	(*(volatile uint_io8_t*)0xB08005D8)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg2cntr1_field{
    uint_io32_t		u10SSCG2RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG2MODE:1;
    uint_io32_t		u2SSCG2FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG2SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_runsscg2cntr1_field_t;

typedef union un_sysc0_1_runsscg2cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg2cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg2cntr1_t;

/* RUNSSCG3CNTR0 */
#define SYSC0_RUNSSCG3CNTR0	(SYSC0_1.unRUNSSCG3CNTR0.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG3CNTR0_SSCG3DIVL	(SYSC0_1.unRUNSSCG3CNTR0.stcField.u2SSCG3DIVL)  /*@bf@*/
#define SYSC0_RUNSSCG3CNTR0_SSCG3DIVM	(SYSC0_1.unRUNSSCG3CNTR0.stcField.u4SSCG3DIVM)  /*@bf@*/
#define SYSC0_RUNSSCG3CNTR0_SSCG3DIVN	(SYSC0_1.unRUNSSCG3CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_RUNSSCG3CNTR0_SSCG3ISEL	(*(volatile uint_io8_t*)0xB08005FF)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg3cntr0_field{
    uint_io32_t		u2SSCG3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG3ISEL:1;
}stc_sysc0_1_runsscg3cntr0_field_t;

typedef union un_sysc0_1_runsscg3cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg3cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg3cntr0_t;

/* RUNSSCG3CNTR1 */
#define SYSC0_RUNSSCG3CNTR1	(SYSC0_1.unRUNSSCG3CNTR1.u32Register)  /*@rg@*/
#define SYSC0_RUNSSCG3CNTR1_SSCG3RATE	(SYSC0_1.unRUNSSCG3CNTR1.stcField.u10SSCG3RATE)  /*@bf@*/
#define SYSC0_RUNSSCG3CNTR1_SSCG3MODE	(*(volatile uint_io8_t*)0xB0800610)  /*@bfbba@*/
#define SYSC0_RUNSSCG3CNTR1_SSCG3FREQ	(SYSC0_1.unRUNSSCG3CNTR1.stcField.u2SSCG3FREQ)  /*@bf@*/
#define SYSC0_RUNSSCG3CNTR1_SSCG3SSEN	(*(volatile uint_io8_t*)0xB0800618)  /*@bfbba@*/

typedef struct stc_sysc0_1_runsscg3cntr1_field{
    uint_io32_t		u10SSCG3RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG3MODE:1;
    uint_io32_t		u2SSCG3FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG3SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_runsscg3cntr1_field_t;

typedef union un_sysc0_1_runsscg3cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_runsscg3cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runsscg3cntr1_t;

/* RUNLVDCFGR */
#define SYSC0_RUNLVDCFGR	(SYSC0_1.unRUNLVDCFGR.u32Register)  /*@rg@*/
#define SYSC0_RUNLVDCFGR_LVDH2E	(*(volatile uint_io8_t*)0xB0800620)  /*@bfbba@*/
#define SYSC0_RUNLVDCFGR_LVDH2V	(SYSC0_1.unRUNLVDCFGR.stcField.u4LVDH2V)  /*@bf@*/
#define SYSC0_RUNLVDCFGR_LVDH2S	(*(volatile uint_io8_t*)0xB0800626)  /*@bfbba@*/
#define SYSC0_RUNLVDCFGR_LVDH1E	(*(volatile uint_io8_t*)0xB0800628)  /*@bfbba@*/
#define SYSC0_RUNLVDCFGR_LVDH1V	(SYSC0_1.unRUNLVDCFGR.stcField.u4LVDH1V)  /*@bf@*/
#define SYSC0_RUNLVDCFGR_LVDH1S	(*(volatile uint_io8_t*)0xB080062E)  /*@bfbba@*/
#define SYSC0_RUNLVDCFGR_LVDL2E	(*(volatile uint_io8_t*)0xB0800630)  /*@bfbba@*/
#define SYSC0_RUNLVDCFGR_LVDL2V	(SYSC0_1.unRUNLVDCFGR.stcField.u2LVDL2V)  /*@bf@*/
#define SYSC0_RUNLVDCFGR_LVDL2S	(*(volatile uint_io8_t*)0xB0800636)  /*@bfbba@*/
#define SYSC0_RUNLVDCFGR_LVDL1E	(*(volatile uint_io8_t*)0xB0800638)  /*@bfbba@*/
#define SYSC0_RUNLVDCFGR_LVDL1V	(SYSC0_1.unRUNLVDCFGR.stcField.u2LVDL1V)  /*@bf@*/
#define SYSC0_RUNLVDCFGR_LVDL1S	(*(volatile uint_io8_t*)0xB080063E)  /*@bfbba@*/

typedef struct stc_sysc0_1_runlvdcfgr_field{
    uint_io32_t		u1LVDH2E:1;
    uint_io32_t		u4LVDH2V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH2S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1E:1;
    uint_io32_t		u4LVDH1V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDL2E:1;
    uint_io32_t		u2LVDL2V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL2S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDL1E:1;
    uint_io32_t		u2LVDL1V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL1S:1;
    uint_io32_t		:1;
}stc_sysc0_1_runlvdcfgr_field_t;

typedef union un_sysc0_1_runlvdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runlvdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runlvdcfgr_t;

/* RUNCSVCFGR */
#define SYSC0_RUNCSVCFGR	(SYSC0_1.unRUNCSVCFGR.u32Register)  /*@rg@*/
#define SYSC0_RUNCSVCFGR_MOCSVE	(*(volatile uint_io8_t*)0xB0800640)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_SOCSVE	(*(volatile uint_io8_t*)0xB0800641)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_FCRCSVE	(*(volatile uint_io8_t*)0xB0800642)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_SCRCSVE	(*(volatile uint_io8_t*)0xB0800643)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_PLL0CSVE	(*(volatile uint_io8_t*)0xB0800648)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_PLL1CSVE	(*(volatile uint_io8_t*)0xB0800649)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_PLL2CSVE	(*(volatile uint_io8_t*)0xB080064A)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_PLL3CSVE	(*(volatile uint_io8_t*)0xB080064B)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_SSCG0CSVE	(*(volatile uint_io8_t*)0xB0800650)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_SSCG1CSVE	(*(volatile uint_io8_t*)0xB0800651)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_SSCG2CSVE	(*(volatile uint_io8_t*)0xB0800652)  /*@bfbba@*/
#define SYSC0_RUNCSVCFGR_SSCG3CSVE	(*(volatile uint_io8_t*)0xB0800653)  /*@bfbba@*/

typedef struct stc_sysc0_1_runcsvcfgr_field{
    uint_io32_t		u1MOCSVE:1;
    uint_io32_t		u1SOCSVE:1;
    uint_io32_t		u1FCRCSVE:1;
    uint_io32_t		u1SCRCSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0CSVE:1;
    uint_io32_t		u1PLL1CSVE:1;
    uint_io32_t		u1PLL2CSVE:1;
    uint_io32_t		u1PLL3CSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0CSVE:1;
    uint_io32_t		u1SSCG1CSVE:1;
    uint_io32_t		u1SSCG2CSVE:1;
    uint_io32_t		u1SSCG3CSVE:1;
    uint_io32_t		:12;
}stc_sysc0_1_runcsvcfgr_field_t;

typedef union un_sysc0_1_runcsvcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runcsvcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runcsvcfgr_t;

/* RUNREGCFGR */
#define SYSC0_RUNREGCFGR	(SYSC0_1.unRUNREGCFGR.u32Register)  /*@rg@*/
#define SYSC0_RUNREGCFGR_RVSEL	(*(volatile uint_io8_t*)0xB0800660)  /*@bfbba@*/
#define SYSC0_RUNREGCFGR_RMSEL	(*(volatile uint_io8_t*)0xB0800667)  /*@bfbba@*/

typedef struct stc_sysc0_1_runregcfgr_field{
    uint_io32_t		u1RVSEL:1;
    uint_io32_t		:6;
    uint_io32_t		u1RMSEL:1;
    uint_io32_t		:24;
}stc_sysc0_1_runregcfgr_field_t;

typedef union un_sysc0_1_runregcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_runregcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_runregcfgr_t;

/* TRGRUNCNTR */
#define SYSC0_TRGRUNCNTR	(SYSC0_1.unTRGRUNCNTR.u32Register)  /*@rg@*/
#define SYSC0_TRGRUNCNTR_APPLY_RUN	(SYSC0_1.unTRGRUNCNTR.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_sysc0_1_trgruncntr_field{
    uint_io32_t		u8APPLY_RUN:8;
    uint_io32_t		:24;
}stc_sysc0_1_trgruncntr_field_t;

typedef union un_sysc0_1_trgruncntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_trgruncntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_trgruncntr_t;

/* PSSPDCFGR */
#define SYSC0_PSSPDCFGR	(SYSC0_1.unPSSPDCFGR.u32Register)  /*@rg@*/
#define SYSC0_PSSPDCFGR_PD2EN	(*(volatile uint_io8_t*)0xB0800808)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD3EN	(*(volatile uint_io8_t*)0xB080080C)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD4_0EN	(*(volatile uint_io8_t*)0xB0800810)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD4_1EN	(*(volatile uint_io8_t*)0xB0800811)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD5_0EN	(*(volatile uint_io8_t*)0xB0800814)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD5_1EN	(*(volatile uint_io8_t*)0xB0800815)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD5_2EN	(*(volatile uint_io8_t*)0xB0800816)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD5_3EN	(*(volatile uint_io8_t*)0xB0800817)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD6_0EN	(*(volatile uint_io8_t*)0xB0800818)  /*@bfbba@*/
#define SYSC0_PSSPDCFGR_PD6_1EN	(*(volatile uint_io8_t*)0xB0800819)  /*@bfbba@*/

typedef struct stc_sysc0_1_psspdcfgr_field{
    uint_io32_t		:8;
    uint_io32_t		u1PD2EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD3EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD4_0EN:1;
    uint_io32_t		u1PD4_1EN:1;
    uint_io32_t		:2;
    uint_io32_t		u1PD5_0EN:1;
    uint_io32_t		u1PD5_1EN:1;
    uint_io32_t		u1PD5_2EN:1;
    uint_io32_t		u1PD5_3EN:1;
    uint_io32_t		u1PD6_0EN:1;
    uint_io32_t		u1PD6_1EN:1;
    uint_io32_t		:6;
}stc_sysc0_1_psspdcfgr_field_t;

typedef union un_sysc0_1_psspdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_psspdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psspdcfgr_t;

/* PSSCKSRER */
#define SYSC0_PSSCKSRER	(SYSC0_1.unPSSCKSRER.u32Register)  /*@rg@*/
#define SYSC0_PSSCKSRER_CROSCEN	(*(volatile uint_io8_t*)0xB0800820)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_SCROSCEN	(*(volatile uint_io8_t*)0xB0800821)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_MOSCEN	(*(volatile uint_io8_t*)0xB0800822)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_SOSCEN	(*(volatile uint_io8_t*)0xB0800823)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_PLL0EN	(*(volatile uint_io8_t*)0xB0800828)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_PLL1EN	(*(volatile uint_io8_t*)0xB0800829)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_PLL2EN	(*(volatile uint_io8_t*)0xB080082A)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_PLL3EN	(*(volatile uint_io8_t*)0xB080082B)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_SSCG0EN	(*(volatile uint_io8_t*)0xB0800830)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_SSCG1EN	(*(volatile uint_io8_t*)0xB0800831)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_SSCG2EN	(*(volatile uint_io8_t*)0xB0800832)  /*@bfbba@*/
#define SYSC0_PSSCKSRER_SSCG3EN	(*(volatile uint_io8_t*)0xB0800833)  /*@bfbba@*/

typedef struct stc_sysc0_1_psscksrer_field{
    uint_io32_t		u1CROSCEN:1;
    uint_io32_t		u1SCROSCEN:1;
    uint_io32_t		u1MOSCEN:1;
    uint_io32_t		u1SOSCEN:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0EN:1;
    uint_io32_t		u1PLL1EN:1;
    uint_io32_t		u1PLL2EN:1;
    uint_io32_t		u1PLL3EN:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0EN:1;
    uint_io32_t		u1SSCG1EN:1;
    uint_io32_t		u1SSCG2EN:1;
    uint_io32_t		u1SSCG3EN:1;
    uint_io32_t		:12;
}stc_sysc0_1_psscksrer_field_t;

typedef union un_sysc0_1_psscksrer{
    uint_io32_t		u32Register;
    stc_sysc0_1_psscksrer_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psscksrer_t;

/* PSSCKSELR */
#define SYSC0_PSSCKSELR	(SYSC0_1.unPSSCKSELR.u32Register)  /*@rg@*/
#define SYSC0_PSSCKSELR_CDMCUCCSL	(SYSC0_1.unPSSCKSELR.stcField.u3CDMCUCCSL)  /*@bf@*/

typedef struct stc_sysc0_1_pssckselr_field{
    uint_io32_t		u3CDMCUCCSL:3;
    uint_io32_t		:29;
}stc_sysc0_1_pssckselr_field_t;

typedef union un_sysc0_1_pssckselr{
    uint_io32_t		u32Register;
    stc_sysc0_1_pssckselr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_pssckselr_t;

/* PSSCKER */
#define SYSC0_PSSCKER	(SYSC0_1.unPSSCKER.u32Register)  /*@rg@*/
#define SYSC0_PSSCKER_ENCLKMCUCH	(*(volatile uint_io8_t*)0xB0800860)  /*@bfbba@*/
#define SYSC0_PSSCKER_ENCLKMCUCP	(*(volatile uint_io8_t*)0xB0800861)  /*@bfbba@*/

typedef struct stc_sysc0_1_psscker_field{
    uint_io32_t		u1ENCLKMCUCH:1;
    uint_io32_t		u1ENCLKMCUCP:1;
    uint_io32_t		:30;
}stc_sysc0_1_psscker_field_t;

typedef union un_sysc0_1_psscker{
    uint_io32_t		u32Register;
    stc_sysc0_1_psscker_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psscker_t;

/* PSSCKDIVR */
#define SYSC0_PSSCKDIVR	(SYSC0_1.unPSSCKDIVR.u32Register)  /*@rg@*/
#define SYSC0_PSSCKDIVR_MCUCHDIV	(SYSC0_1.unPSSCKDIVR.stcField.u5MCUCHDIV)  /*@bf@*/
#define SYSC0_PSSCKDIVR_MCUCPDIV	(SYSC0_1.unPSSCKDIVR.stcField.u4MCUCPDIV)  /*@bf@*/

typedef struct stc_sysc0_1_pssckdivr_field{
    uint_io32_t		u5MCUCHDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4MCUCPDIV:4;
    uint_io32_t		:20;
}stc_sysc0_1_pssckdivr_field_t;

typedef union un_sysc0_1_pssckdivr{
    uint_io32_t		u32Register;
    stc_sysc0_1_pssckdivr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_pssckdivr_t;

/* PSSPLL0CNTR */
#define SYSC0_PSSPLL0CNTR	(SYSC0_1.unPSSPLL0CNTR.u32Register)  /*@rg@*/
#define SYSC0_PSSPLL0CNTR_PLL0DIVL	(SYSC0_1.unPSSPLL0CNTR.stcField.u2PLL0DIVL)  /*@bf@*/
#define SYSC0_PSSPLL0CNTR_PLL0DIVM	(SYSC0_1.unPSSPLL0CNTR.stcField.u4PLL0DIVM)  /*@bf@*/
#define SYSC0_PSSPLL0CNTR_PLL0DIVN	(SYSC0_1.unPSSPLL0CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSPLL0CNTR_PLL0ISEL	(*(volatile uint_io8_t*)0xB08008BF)  /*@bfbba@*/

typedef struct stc_sysc0_1_psspll0cntr_field{
    uint_io32_t		u2PLL0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL0ISEL:1;
}stc_sysc0_1_psspll0cntr_field_t;

typedef union un_sysc0_1_psspll0cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_psspll0cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psspll0cntr_t;

/* PSSPLL1CNTR */
#define SYSC0_PSSPLL1CNTR	(SYSC0_1.unPSSPLL1CNTR.u32Register)  /*@rg@*/
#define SYSC0_PSSPLL1CNTR_PLL1DIVL	(SYSC0_1.unPSSPLL1CNTR.stcField.u2PLL1DIVL)  /*@bf@*/
#define SYSC0_PSSPLL1CNTR_PLL1DIVM	(SYSC0_1.unPSSPLL1CNTR.stcField.u4PLL1DIVM)  /*@bf@*/
#define SYSC0_PSSPLL1CNTR_PLL1DIVN	(SYSC0_1.unPSSPLL1CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSPLL1CNTR_PLL1ISEL	(*(volatile uint_io8_t*)0xB08008DF)  /*@bfbba@*/

typedef struct stc_sysc0_1_psspll1cntr_field{
    uint_io32_t		u2PLL1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL1ISEL:1;
}stc_sysc0_1_psspll1cntr_field_t;

typedef union un_sysc0_1_psspll1cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_psspll1cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psspll1cntr_t;

/* PSSPLL2CNTR */
#define SYSC0_PSSPLL2CNTR	(SYSC0_1.unPSSPLL2CNTR.u32Register)  /*@rg@*/
#define SYSC0_PSSPLL2CNTR_PLL2DIVL	(SYSC0_1.unPSSPLL2CNTR.stcField.u2PLL2DIVL)  /*@bf@*/
#define SYSC0_PSSPLL2CNTR_PLL2DIVM	(SYSC0_1.unPSSPLL2CNTR.stcField.u4PLL2DIVM)  /*@bf@*/
#define SYSC0_PSSPLL2CNTR_PLL2DIVN	(SYSC0_1.unPSSPLL2CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSPLL2CNTR_PLL2ISEL	(*(volatile uint_io8_t*)0xB08008FF)  /*@bfbba@*/

typedef struct stc_sysc0_1_psspll2cntr_field{
    uint_io32_t		u2PLL2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL2ISEL:1;
}stc_sysc0_1_psspll2cntr_field_t;

typedef union un_sysc0_1_psspll2cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_psspll2cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psspll2cntr_t;

/* PSSPLL3CNTR */
#define SYSC0_PSSPLL3CNTR	(SYSC0_1.unPSSPLL3CNTR.u32Register)  /*@rg@*/
#define SYSC0_PSSPLL3CNTR_PLL3DIVL	(SYSC0_1.unPSSPLL3CNTR.stcField.u2PLL3DIVL)  /*@bf@*/
#define SYSC0_PSSPLL3CNTR_PLL3DIVM	(SYSC0_1.unPSSPLL3CNTR.stcField.u4PLL3DIVM)  /*@bf@*/
#define SYSC0_PSSPLL3CNTR_PLL3DIVN	(SYSC0_1.unPSSPLL3CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSPLL3CNTR_PLL3ISEL	(*(volatile uint_io8_t*)0xB080091F)  /*@bfbba@*/

typedef struct stc_sysc0_1_psspll3cntr_field{
    uint_io32_t		u2PLL3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL3ISEL:1;
}stc_sysc0_1_psspll3cntr_field_t;

typedef union un_sysc0_1_psspll3cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_psspll3cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psspll3cntr_t;

/* PSSSSCG0CNTR0 */
#define SYSC0_PSSSSCG0CNTR0	(SYSC0_1.unPSSSSCG0CNTR0.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG0CNTR0_SSCG0DIVL	(SYSC0_1.unPSSSSCG0CNTR0.stcField.u2SSCG0DIVL)  /*@bf@*/
#define SYSC0_PSSSSCG0CNTR0_SSCG0DIVM	(SYSC0_1.unPSSSSCG0CNTR0.stcField.u4SSCG0DIVM)  /*@bf@*/
#define SYSC0_PSSSSCG0CNTR0_SSCG0DIVN	(SYSC0_1.unPSSSSCG0CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSSSCG0CNTR0_SSCG0ISEL	(*(volatile uint_io8_t*)0xB080093F)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg0cntr0_field{
    uint_io32_t		u2SSCG0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG0ISEL:1;
}stc_sysc0_1_psssscg0cntr0_field_t;

typedef union un_sysc0_1_psssscg0cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg0cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg0cntr0_t;

/* PSSSSCG0CNTR1 */
#define SYSC0_PSSSSCG0CNTR1	(SYSC0_1.unPSSSSCG0CNTR1.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG0CNTR1_SSCG0RATE	(SYSC0_1.unPSSSSCG0CNTR1.stcField.u10SSCG0RATE)  /*@bf@*/
#define SYSC0_PSSSSCG0CNTR1_SSCG0MODE	(*(volatile uint_io8_t*)0xB0800950)  /*@bfbba@*/
#define SYSC0_PSSSSCG0CNTR1_SSCG0FREQ	(SYSC0_1.unPSSSSCG0CNTR1.stcField.u2SSCG0FREQ)  /*@bf@*/
#define SYSC0_PSSSSCG0CNTR1_SSCG0SSEN	(*(volatile uint_io8_t*)0xB0800958)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg0cntr1_field{
    uint_io32_t		u10SSCG0RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG0MODE:1;
    uint_io32_t		u2SSCG0FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG0SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_psssscg0cntr1_field_t;

typedef union un_sysc0_1_psssscg0cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg0cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg0cntr1_t;

/* PSSSSCG1CNTR0 */
#define SYSC0_PSSSSCG1CNTR0	(SYSC0_1.unPSSSSCG1CNTR0.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG1CNTR0_SSCG1DIVL	(SYSC0_1.unPSSSSCG1CNTR0.stcField.u2SSCG1DIVL)  /*@bf@*/
#define SYSC0_PSSSSCG1CNTR0_SSCG1DIVM	(SYSC0_1.unPSSSSCG1CNTR0.stcField.u4SSCG1DIVM)  /*@bf@*/
#define SYSC0_PSSSSCG1CNTR0_SSCG1DIVN	(SYSC0_1.unPSSSSCG1CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSSSCG1CNTR0_SSCG1ISEL	(*(volatile uint_io8_t*)0xB080097F)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg1cntr0_field{
    uint_io32_t		u2SSCG1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG1ISEL:1;
}stc_sysc0_1_psssscg1cntr0_field_t;

typedef union un_sysc0_1_psssscg1cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg1cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg1cntr0_t;

/* PSSSSCG1CNTR1 */
#define SYSC0_PSSSSCG1CNTR1	(SYSC0_1.unPSSSSCG1CNTR1.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG1CNTR1_SSCG1RATE	(SYSC0_1.unPSSSSCG1CNTR1.stcField.u10SSCG1RATE)  /*@bf@*/
#define SYSC0_PSSSSCG1CNTR1_SSCG1MODE	(*(volatile uint_io8_t*)0xB0800990)  /*@bfbba@*/
#define SYSC0_PSSSSCG1CNTR1_SSCG1FREQ	(SYSC0_1.unPSSSSCG1CNTR1.stcField.u2SSCG1FREQ)  /*@bf@*/
#define SYSC0_PSSSSCG1CNTR1_SSCG1SSEN	(*(volatile uint_io8_t*)0xB0800998)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg1cntr1_field{
    uint_io32_t		u10SSCG1RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG1MODE:1;
    uint_io32_t		u2SSCG1FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG1SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_psssscg1cntr1_field_t;

typedef union un_sysc0_1_psssscg1cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg1cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg1cntr1_t;

/* PSSSSCG2CNTR0 */
#define SYSC0_PSSSSCG2CNTR0	(SYSC0_1.unPSSSSCG2CNTR0.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG2CNTR0_SSCG2DIVL	(SYSC0_1.unPSSSSCG2CNTR0.stcField.u2SSCG2DIVL)  /*@bf@*/
#define SYSC0_PSSSSCG2CNTR0_SSCG2DIVM	(SYSC0_1.unPSSSSCG2CNTR0.stcField.u4SSCG2DIVM)  /*@bf@*/
#define SYSC0_PSSSSCG2CNTR0_SSCG2DIVN	(SYSC0_1.unPSSSSCG2CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSSSCG2CNTR0_SSCG2ISEL	(*(volatile uint_io8_t*)0xB08009BF)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg2cntr0_field{
    uint_io32_t		u2SSCG2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG2ISEL:1;
}stc_sysc0_1_psssscg2cntr0_field_t;

typedef union un_sysc0_1_psssscg2cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg2cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg2cntr0_t;

/* PSSSSCG2CNTR1 */
#define SYSC0_PSSSSCG2CNTR1	(SYSC0_1.unPSSSSCG2CNTR1.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG2CNTR1_SSCG2RATE	(SYSC0_1.unPSSSSCG2CNTR1.stcField.u10SSCG2RATE)  /*@bf@*/
#define SYSC0_PSSSSCG2CNTR1_SSCG2MODE	(*(volatile uint_io8_t*)0xB08009D0)  /*@bfbba@*/
#define SYSC0_PSSSSCG2CNTR1_SSCG2FREQ	(SYSC0_1.unPSSSSCG2CNTR1.stcField.u2SSCG2FREQ)  /*@bf@*/
#define SYSC0_PSSSSCG2CNTR1_SSCG2SSEN	(*(volatile uint_io8_t*)0xB08009D8)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg2cntr1_field{
    uint_io32_t		u10SSCG2RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG2MODE:1;
    uint_io32_t		u2SSCG2FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG2SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_psssscg2cntr1_field_t;

typedef union un_sysc0_1_psssscg2cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg2cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg2cntr1_t;

/* PSSSSCG3CNTR0 */
#define SYSC0_PSSSSCG3CNTR0	(SYSC0_1.unPSSSSCG3CNTR0.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG3CNTR0_SSCG3DIVL	(SYSC0_1.unPSSSSCG3CNTR0.stcField.u2SSCG3DIVL)  /*@bf@*/
#define SYSC0_PSSSSCG3CNTR0_SSCG3DIVM	(SYSC0_1.unPSSSSCG3CNTR0.stcField.u4SSCG3DIVM)  /*@bf@*/
#define SYSC0_PSSSSCG3CNTR0_SSCG3DIVN	(SYSC0_1.unPSSSSCG3CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_PSSSSCG3CNTR0_SSCG3ISEL	(*(volatile uint_io8_t*)0xB08009FF)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg3cntr0_field{
    uint_io32_t		u2SSCG3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG3ISEL:1;
}stc_sysc0_1_psssscg3cntr0_field_t;

typedef union un_sysc0_1_psssscg3cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg3cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg3cntr0_t;

/* PSSSSCG3CNTR1 */
#define SYSC0_PSSSSCG3CNTR1	(SYSC0_1.unPSSSSCG3CNTR1.u32Register)  /*@rg@*/
#define SYSC0_PSSSSCG3CNTR1_SSCG3RATE	(SYSC0_1.unPSSSSCG3CNTR1.stcField.u10SSCG3RATE)  /*@bf@*/
#define SYSC0_PSSSSCG3CNTR1_SSCG3MODE	(*(volatile uint_io8_t*)0xB0800A10)  /*@bfbba@*/
#define SYSC0_PSSSSCG3CNTR1_SSCG3FREQ	(SYSC0_1.unPSSSSCG3CNTR1.stcField.u2SSCG3FREQ)  /*@bf@*/
#define SYSC0_PSSSSCG3CNTR1_SSCG3SSEN	(*(volatile uint_io8_t*)0xB0800A18)  /*@bfbba@*/

typedef struct stc_sysc0_1_psssscg3cntr1_field{
    uint_io32_t		u10SSCG3RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG3MODE:1;
    uint_io32_t		u2SSCG3FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG3SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_psssscg3cntr1_field_t;

typedef union un_sysc0_1_psssscg3cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_psssscg3cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psssscg3cntr1_t;

/* PSSLVDCFGR */
#define SYSC0_PSSLVDCFGR	(SYSC0_1.unPSSLVDCFGR.u32Register)  /*@rg@*/
#define SYSC0_PSSLVDCFGR_LVDH2E	(*(volatile uint_io8_t*)0xB0800A20)  /*@bfbba@*/
#define SYSC0_PSSLVDCFGR_LVDH2V	(SYSC0_1.unPSSLVDCFGR.stcField.u4LVDH2V)  /*@bf@*/
#define SYSC0_PSSLVDCFGR_LVDH2S	(*(volatile uint_io8_t*)0xB0800A26)  /*@bfbba@*/
#define SYSC0_PSSLVDCFGR_LVDH1E	(*(volatile uint_io8_t*)0xB0800A28)  /*@bfbba@*/
#define SYSC0_PSSLVDCFGR_LVDH1V	(SYSC0_1.unPSSLVDCFGR.stcField.u4LVDH1V)  /*@bf@*/
#define SYSC0_PSSLVDCFGR_LVDH1S	(*(volatile uint_io8_t*)0xB0800A2E)  /*@bfbba@*/
#define SYSC0_PSSLVDCFGR_LVDL2E	(*(volatile uint_io8_t*)0xB0800A30)  /*@bfbba@*/
#define SYSC0_PSSLVDCFGR_LVDL2V	(SYSC0_1.unPSSLVDCFGR.stcField.u2LVDL2V)  /*@bf@*/
#define SYSC0_PSSLVDCFGR_LVDL2S	(*(volatile uint_io8_t*)0xB0800A36)  /*@bfbba@*/
#define SYSC0_PSSLVDCFGR_LVDL1E	(*(volatile uint_io8_t*)0xB0800A38)  /*@bfbba@*/
#define SYSC0_PSSLVDCFGR_LVDL1V	(SYSC0_1.unPSSLVDCFGR.stcField.u2LVDL1V)  /*@bf@*/
#define SYSC0_PSSLVDCFGR_LVDL1S	(*(volatile uint_io8_t*)0xB0800A3E)  /*@bfbba@*/

typedef struct stc_sysc0_1_psslvdcfgr_field{
    uint_io32_t		u1LVDH2E:1;
    uint_io32_t		u4LVDH2V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH2S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1E:1;
    uint_io32_t		u4LVDH1V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDL2E:1;
    uint_io32_t		u2LVDL2V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL2S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDL1E:1;
    uint_io32_t		u2LVDL1V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL1S:1;
    uint_io32_t		:1;
}stc_sysc0_1_psslvdcfgr_field_t;

typedef union un_sysc0_1_psslvdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_psslvdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psslvdcfgr_t;

/* PSSCSVCFGR */
#define SYSC0_PSSCSVCFGR	(SYSC0_1.unPSSCSVCFGR.u32Register)  /*@rg@*/
#define SYSC0_PSSCSVCFGR_MOCSVE	(*(volatile uint_io8_t*)0xB0800A40)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_SOCSVE	(*(volatile uint_io8_t*)0xB0800A41)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_CRCSVE	(*(volatile uint_io8_t*)0xB0800A42)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_SCRCSVE	(*(volatile uint_io8_t*)0xB0800A43)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_PLL0CSVE	(*(volatile uint_io8_t*)0xB0800A48)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_PLL1CSVE	(*(volatile uint_io8_t*)0xB0800A49)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_PLL2CSVE	(*(volatile uint_io8_t*)0xB0800A4A)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_PLL3CSVE	(*(volatile uint_io8_t*)0xB0800A4B)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_SSCG0CSVE	(*(volatile uint_io8_t*)0xB0800A50)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_SSCG1CSVE	(*(volatile uint_io8_t*)0xB0800A51)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_SSCG2CSVE	(*(volatile uint_io8_t*)0xB0800A52)  /*@bfbba@*/
#define SYSC0_PSSCSVCFGR_SSCG3CSVE	(*(volatile uint_io8_t*)0xB0800A53)  /*@bfbba@*/

typedef struct stc_sysc0_1_psscsvcfgr_field{
    uint_io32_t		u1MOCSVE:1;
    uint_io32_t		u1SOCSVE:1;
    uint_io32_t		u1CRCSVE:1;
    uint_io32_t		u1SCRCSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0CSVE:1;
    uint_io32_t		u1PLL1CSVE:1;
    uint_io32_t		u1PLL2CSVE:1;
    uint_io32_t		u1PLL3CSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0CSVE:1;
    uint_io32_t		u1SSCG1CSVE:1;
    uint_io32_t		u1SSCG2CSVE:1;
    uint_io32_t		u1SSCG3CSVE:1;
    uint_io32_t		:12;
}stc_sysc0_1_psscsvcfgr_field_t;

typedef union un_sysc0_1_psscsvcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_psscsvcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_psscsvcfgr_t;

/* PSSREGCFGR */
#define SYSC0_PSSREGCFGR	(SYSC0_1.unPSSREGCFGR.u32Register)  /*@rg@*/
#define SYSC0_PSSREGCFGR_RVSEL	(*(volatile uint_io8_t*)0xB0800A60)  /*@bfbba@*/
#define SYSC0_PSSREGCFGR_RMSEL	(*(volatile uint_io8_t*)0xB0800A67)  /*@bfbba@*/

typedef struct stc_sysc0_1_pssregcfgr_field{
    uint_io32_t		u1RVSEL:1;
    uint_io32_t		:6;
    uint_io32_t		u1RMSEL:1;
    uint_io32_t		:24;
}stc_sysc0_1_pssregcfgr_field_t;

typedef union un_sysc0_1_pssregcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_pssregcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_pssregcfgr_t;

/* PSSENR_0 */
#define SYSC0_PSSENR_0	(SYSC0_1.unPSSENR_0.u8Register)  /*@rg@*/
#define SYSC0_PSSENR_0_PSSEN0	SYSC0_PSSENR_0  /*@bfrg@*/

typedef union un_sysc0_1_pssenr_0{
    uint_io8_t		u8Register;
}un_sysc0_1_pssenr_0_t;

/* APPPDCFGR */
#define SYSC0_APPPDCFGR	(SYSC0_1.unAPPPDCFGR.u32Register)  /*@rg@*/
#define SYSC0_APPPDCFGR_PD2EN	(*(volatile uint_io8_t*)0xB0800C08)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD3EN	(*(volatile uint_io8_t*)0xB0800C0C)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD4_0EN	(*(volatile uint_io8_t*)0xB0800C10)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD4_1EN	(*(volatile uint_io8_t*)0xB0800C11)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD5_0EN	(*(volatile uint_io8_t*)0xB0800C14)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD5_1EN	(*(volatile uint_io8_t*)0xB0800C15)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD5_2EN	(*(volatile uint_io8_t*)0xB0800C16)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD5_3EN	(*(volatile uint_io8_t*)0xB0800C17)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD6_0EN	(*(volatile uint_io8_t*)0xB0800C18)  /*@bfbba@*/
#define SYSC0_APPPDCFGR_PD6_1EN	(*(volatile uint_io8_t*)0xB0800C19)  /*@bfbba@*/

typedef struct stc_sysc0_1_apppdcfgr_field{
    uint_io32_t		:8;
    uint_io32_t		u1PD2EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD3EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD4_0EN:1;
    uint_io32_t		u1PD4_1EN:1;
    uint_io32_t		:2;
    uint_io32_t		u1PD5_0EN:1;
    uint_io32_t		u1PD5_1EN:1;
    uint_io32_t		u1PD5_2EN:1;
    uint_io32_t		u1PD5_3EN:1;
    uint_io32_t		u1PD6_0EN:1;
    uint_io32_t		u1PD6_1EN:1;
    uint_io32_t		:6;
}stc_sysc0_1_apppdcfgr_field_t;

typedef union un_sysc0_1_apppdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_apppdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_apppdcfgr_t;

/* APPCKSRER */
#define SYSC0_APPCKSRER	(SYSC0_1.unAPPCKSRER.u32Register)  /*@rg@*/
#define SYSC0_APPCKSRER_CROSCEN	(*(volatile uint_io8_t*)0xB0800C20)  /*@bfbba@*/
#define SYSC0_APPCKSRER_SCROSCEN	(*(volatile uint_io8_t*)0xB0800C21)  /*@bfbba@*/
#define SYSC0_APPCKSRER_MOSCEN	(*(volatile uint_io8_t*)0xB0800C22)  /*@bfbba@*/
#define SYSC0_APPCKSRER_SOSCEN	(*(volatile uint_io8_t*)0xB0800C23)  /*@bfbba@*/
#define SYSC0_APPCKSRER_PLL0EN	(*(volatile uint_io8_t*)0xB0800C28)  /*@bfbba@*/
#define SYSC0_APPCKSRER_PLL1EN	(*(volatile uint_io8_t*)0xB0800C29)  /*@bfbba@*/
#define SYSC0_APPCKSRER_PLL2EN	(*(volatile uint_io8_t*)0xB0800C2A)  /*@bfbba@*/
#define SYSC0_APPCKSRER_PLL3EN	(*(volatile uint_io8_t*)0xB0800C2B)  /*@bfbba@*/
#define SYSC0_APPCKSRER_SSCG0EN	(*(volatile uint_io8_t*)0xB0800C30)  /*@bfbba@*/
#define SYSC0_APPCKSRER_SSCG1EN	(*(volatile uint_io8_t*)0xB0800C31)  /*@bfbba@*/
#define SYSC0_APPCKSRER_SSCG2EN	(*(volatile uint_io8_t*)0xB0800C32)  /*@bfbba@*/
#define SYSC0_APPCKSRER_SSCG3EN	(*(volatile uint_io8_t*)0xB0800C33)  /*@bfbba@*/

typedef struct stc_sysc0_1_appcksrer_field{
    uint_io32_t		u1CROSCEN:1;
    uint_io32_t		u1SCROSCEN:1;
    uint_io32_t		u1MOSCEN:1;
    uint_io32_t		u1SOSCEN:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0EN:1;
    uint_io32_t		u1PLL1EN:1;
    uint_io32_t		u1PLL2EN:1;
    uint_io32_t		u1PLL3EN:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0EN:1;
    uint_io32_t		u1SSCG1EN:1;
    uint_io32_t		u1SSCG2EN:1;
    uint_io32_t		u1SSCG3EN:1;
    uint_io32_t		:12;
}stc_sysc0_1_appcksrer_field_t;

typedef union un_sysc0_1_appcksrer{
    uint_io32_t		u32Register;
    stc_sysc0_1_appcksrer_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appcksrer_t;

/* APPCKSELR */
#define SYSC0_APPCKSELR	(SYSC0_1.unAPPCKSELR.u32Register)  /*@rg@*/
#define SYSC0_APPCKSELR_CDMCUCCSL	(SYSC0_1.unAPPCKSELR.stcField.u3CDMCUCCSL)  /*@bf@*/

typedef struct stc_sysc0_1_appckselr_field{
    uint_io32_t		u3CDMCUCCSL:3;
    uint_io32_t		:29;
}stc_sysc0_1_appckselr_field_t;

typedef union un_sysc0_1_appckselr{
    uint_io32_t		u32Register;
    stc_sysc0_1_appckselr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appckselr_t;

/* APPCKER */
#define SYSC0_APPCKER	(SYSC0_1.unAPPCKER.u32Register)  /*@rg@*/
#define SYSC0_APPCKER_ENCLKMCUCH	(*(volatile uint_io8_t*)0xB0800C60)  /*@bfbba@*/
#define SYSC0_APPCKER_ENCLKMCUCP	(*(volatile uint_io8_t*)0xB0800C61)  /*@bfbba@*/

typedef struct stc_sysc0_1_appcker_field{
    uint_io32_t		u1ENCLKMCUCH:1;
    uint_io32_t		u1ENCLKMCUCP:1;
    uint_io32_t		:30;
}stc_sysc0_1_appcker_field_t;

typedef union un_sysc0_1_appcker{
    uint_io32_t		u32Register;
    stc_sysc0_1_appcker_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appcker_t;

/* APPCKDIVR */
#define SYSC0_APPCKDIVR	(SYSC0_1.unAPPCKDIVR.u32Register)  /*@rg@*/
#define SYSC0_APPCKDIVR_MCUCHDIV	(SYSC0_1.unAPPCKDIVR.stcField.u5MCUCHDIV)  /*@bf@*/
#define SYSC0_APPCKDIVR_MCUCPDIV	(SYSC0_1.unAPPCKDIVR.stcField.u4MCUCPDIV)  /*@bf@*/

typedef struct stc_sysc0_1_appckdivr_field{
    uint_io32_t		u5MCUCHDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4MCUCPDIV:4;
    uint_io32_t		:20;
}stc_sysc0_1_appckdivr_field_t;

typedef union un_sysc0_1_appckdivr{
    uint_io32_t		u32Register;
    stc_sysc0_1_appckdivr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appckdivr_t;

/* APPPLL0CNTR */
#define SYSC0_APPPLL0CNTR	(SYSC0_1.unAPPPLL0CNTR.u32Register)  /*@rg@*/
#define SYSC0_APPPLL0CNTR_PLL0DIVL	(SYSC0_1.unAPPPLL0CNTR.stcField.u2PLL0DIVL)  /*@bf@*/
#define SYSC0_APPPLL0CNTR_PLL0DIVM	(SYSC0_1.unAPPPLL0CNTR.stcField.u4PLL0DIVM)  /*@bf@*/
#define SYSC0_APPPLL0CNTR_PLL0DIVN	(SYSC0_1.unAPPPLL0CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPPLL0CNTR_PLL0ISEL	(*(volatile uint_io8_t*)0xB0800CBF)  /*@bfbba@*/

typedef struct stc_sysc0_1_apppll0cntr_field{
    uint_io32_t		u2PLL0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL0ISEL:1;
}stc_sysc0_1_apppll0cntr_field_t;

typedef union un_sysc0_1_apppll0cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_apppll0cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_apppll0cntr_t;

/* APPPLL1CNTR */
#define SYSC0_APPPLL1CNTR	(SYSC0_1.unAPPPLL1CNTR.u32Register)  /*@rg@*/
#define SYSC0_APPPLL1CNTR_PLL1DIVL	(SYSC0_1.unAPPPLL1CNTR.stcField.u2PLL1DIVL)  /*@bf@*/
#define SYSC0_APPPLL1CNTR_PLL1DIVM	(SYSC0_1.unAPPPLL1CNTR.stcField.u4PLL1DIVM)  /*@bf@*/
#define SYSC0_APPPLL1CNTR_PLL1DIVN	(SYSC0_1.unAPPPLL1CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPPLL1CNTR_PLL1ISEL	(*(volatile uint_io8_t*)0xB0800CDF)  /*@bfbba@*/

typedef struct stc_sysc0_1_apppll1cntr_field{
    uint_io32_t		u2PLL1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL1ISEL:1;
}stc_sysc0_1_apppll1cntr_field_t;

typedef union un_sysc0_1_apppll1cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_apppll1cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_apppll1cntr_t;

/* APPPLL2CNTR */
#define SYSC0_APPPLL2CNTR	(SYSC0_1.unAPPPLL2CNTR.u32Register)  /*@rg@*/
#define SYSC0_APPPLL2CNTR_PLL2DIVL	(SYSC0_1.unAPPPLL2CNTR.stcField.u2PLL2DIVL)  /*@bf@*/
#define SYSC0_APPPLL2CNTR_PLL2DIVM	(SYSC0_1.unAPPPLL2CNTR.stcField.u4PLL2DIVM)  /*@bf@*/
#define SYSC0_APPPLL2CNTR_PLL2DIVN	(SYSC0_1.unAPPPLL2CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPPLL2CNTR_PLL2ISEL	(*(volatile uint_io8_t*)0xB0800CFF)  /*@bfbba@*/

typedef struct stc_sysc0_1_apppll2cntr_field{
    uint_io32_t		u2PLL2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL2ISEL:1;
}stc_sysc0_1_apppll2cntr_field_t;

typedef union un_sysc0_1_apppll2cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_apppll2cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_apppll2cntr_t;

/* APPPLL3CNTR */
#define SYSC0_APPPLL3CNTR	(SYSC0_1.unAPPPLL3CNTR.u32Register)  /*@rg@*/
#define SYSC0_APPPLL3CNTR_PLL3DIVL	(SYSC0_1.unAPPPLL3CNTR.stcField.u2PLL3DIVL)  /*@bf@*/
#define SYSC0_APPPLL3CNTR_PLL3DIVM	(SYSC0_1.unAPPPLL3CNTR.stcField.u4PLL3DIVM)  /*@bf@*/
#define SYSC0_APPPLL3CNTR_PLL3DIVN	(SYSC0_1.unAPPPLL3CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPPLL3CNTR_PLL3ISEL	(*(volatile uint_io8_t*)0xB0800D1F)  /*@bfbba@*/

typedef struct stc_sysc0_1_apppll3cntr_field{
    uint_io32_t		u2PLL3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL3ISEL:1;
}stc_sysc0_1_apppll3cntr_field_t;

typedef union un_sysc0_1_apppll3cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_apppll3cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_apppll3cntr_t;

/* APPSSCG0CNTR0 */
#define SYSC0_APPSSCG0CNTR0	(SYSC0_1.unAPPSSCG0CNTR0.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG0CNTR0_SSCG0DIVL	(SYSC0_1.unAPPSSCG0CNTR0.stcField.u2SSCG0DIVL)  /*@bf@*/
#define SYSC0_APPSSCG0CNTR0_SSCG0DIVM	(SYSC0_1.unAPPSSCG0CNTR0.stcField.u4SSCG0DIVM)  /*@bf@*/
#define SYSC0_APPSSCG0CNTR0_SSCG0DIVN	(SYSC0_1.unAPPSSCG0CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPSSCG0CNTR0_SSCG0ISEL	(*(volatile uint_io8_t*)0xB0800D3F)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg0cntr0_field{
    uint_io32_t		u2SSCG0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG0ISEL:1;
}stc_sysc0_1_appsscg0cntr0_field_t;

typedef union un_sysc0_1_appsscg0cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg0cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg0cntr0_t;

/* APPSSCG0CNTR1 */
#define SYSC0_APPSSCG0CNTR1	(SYSC0_1.unAPPSSCG0CNTR1.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG0CNTR1_SSCG0RATE	(SYSC0_1.unAPPSSCG0CNTR1.stcField.u10SSCG0RATE)  /*@bf@*/
#define SYSC0_APPSSCG0CNTR1_SSCG0MODE	(*(volatile uint_io8_t*)0xB0800D50)  /*@bfbba@*/
#define SYSC0_APPSSCG0CNTR1_SSCG0FREQ	(SYSC0_1.unAPPSSCG0CNTR1.stcField.u2SSCG0FREQ)  /*@bf@*/
#define SYSC0_APPSSCG0CNTR1_SSCG0SSEN	(*(volatile uint_io8_t*)0xB0800D58)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg0cntr1_field{
    uint_io32_t		u10SSCG0RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG0MODE:1;
    uint_io32_t		u2SSCG0FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG0SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_appsscg0cntr1_field_t;

typedef union un_sysc0_1_appsscg0cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg0cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg0cntr1_t;

/* APPSSCG1CNTR0 */
#define SYSC0_APPSSCG1CNTR0	(SYSC0_1.unAPPSSCG1CNTR0.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG1CNTR0_SSCG1DIVL	(SYSC0_1.unAPPSSCG1CNTR0.stcField.u2SSCG1DIVL)  /*@bf@*/
#define SYSC0_APPSSCG1CNTR0_SSCG1DIVM	(SYSC0_1.unAPPSSCG1CNTR0.stcField.u4SSCG1DIVM)  /*@bf@*/
#define SYSC0_APPSSCG1CNTR0_SSCG1DIVN	(SYSC0_1.unAPPSSCG1CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPSSCG1CNTR0_SSCG1ISEL	(*(volatile uint_io8_t*)0xB0800D7F)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg1cntr0_field{
    uint_io32_t		u2SSCG1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG1ISEL:1;
}stc_sysc0_1_appsscg1cntr0_field_t;

typedef union un_sysc0_1_appsscg1cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg1cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg1cntr0_t;

/* APPSSCG1CNTR1 */
#define SYSC0_APPSSCG1CNTR1	(SYSC0_1.unAPPSSCG1CNTR1.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG1CNTR1_SSCG1RATE	(SYSC0_1.unAPPSSCG1CNTR1.stcField.u10SSCG1RATE)  /*@bf@*/
#define SYSC0_APPSSCG1CNTR1_SSCG1MODE	(*(volatile uint_io8_t*)0xB0800D90)  /*@bfbba@*/
#define SYSC0_APPSSCG1CNTR1_SSCG1FREQ	(SYSC0_1.unAPPSSCG1CNTR1.stcField.u2SSCG1FREQ)  /*@bf@*/
#define SYSC0_APPSSCG1CNTR1_SSCG1SSEN	(*(volatile uint_io8_t*)0xB0800D98)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg1cntr1_field{
    uint_io32_t		u10SSCG1RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG1MODE:1;
    uint_io32_t		u2SSCG1FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG1SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_appsscg1cntr1_field_t;

typedef union un_sysc0_1_appsscg1cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg1cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg1cntr1_t;

/* APPSSCG2CNTR0 */
#define SYSC0_APPSSCG2CNTR0	(SYSC0_1.unAPPSSCG2CNTR0.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG2CNTR0_SSCG2DIVL	(SYSC0_1.unAPPSSCG2CNTR0.stcField.u2SSCG2DIVL)  /*@bf@*/
#define SYSC0_APPSSCG2CNTR0_SSCG2DIVM	(SYSC0_1.unAPPSSCG2CNTR0.stcField.u4SSCG2DIVM)  /*@bf@*/
#define SYSC0_APPSSCG2CNTR0_SSCG2DIVN	(SYSC0_1.unAPPSSCG2CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPSSCG2CNTR0_SSCG2ISEL	(*(volatile uint_io8_t*)0xB0800DBF)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg2cntr0_field{
    uint_io32_t		u2SSCG2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG2ISEL:1;
}stc_sysc0_1_appsscg2cntr0_field_t;

typedef union un_sysc0_1_appsscg2cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg2cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg2cntr0_t;

/* APPSSCG2CNTR1 */
#define SYSC0_APPSSCG2CNTR1	(SYSC0_1.unAPPSSCG2CNTR1.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG2CNTR1_SSCG2RATE	(SYSC0_1.unAPPSSCG2CNTR1.stcField.u10SSCG2RATE)  /*@bf@*/
#define SYSC0_APPSSCG2CNTR1_SSCG2MODE	(*(volatile uint_io8_t*)0xB0800DD0)  /*@bfbba@*/
#define SYSC0_APPSSCG2CNTR1_SSCG2FREQ	(SYSC0_1.unAPPSSCG2CNTR1.stcField.u2SSCG2FREQ)  /*@bf@*/
#define SYSC0_APPSSCG2CNTR1_SSCG2SSEN	(*(volatile uint_io8_t*)0xB0800DD8)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg2cntr1_field{
    uint_io32_t		u10SSCG2RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG2MODE:1;
    uint_io32_t		u2SSCG2FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG2SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_appsscg2cntr1_field_t;

typedef union un_sysc0_1_appsscg2cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg2cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg2cntr1_t;

/* APPSSCG3CNTR0 */
#define SYSC0_APPSSCG3CNTR0	(SYSC0_1.unAPPSSCG3CNTR0.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG3CNTR0_SSCG3DIVL	(SYSC0_1.unAPPSSCG3CNTR0.stcField.u2SSCG3DIVL)  /*@bf@*/
#define SYSC0_APPSSCG3CNTR0_SSCG3DIVM	(SYSC0_1.unAPPSSCG3CNTR0.stcField.u4SSCG3DIVM)  /*@bf@*/
#define SYSC0_APPSSCG3CNTR0_SSCG3DIVN	(SYSC0_1.unAPPSSCG3CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_APPSSCG3CNTR0_SSCG3ISEL	(*(volatile uint_io8_t*)0xB0800DFF)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg3cntr0_field{
    uint_io32_t		u2SSCG3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG3ISEL:1;
}stc_sysc0_1_appsscg3cntr0_field_t;

typedef union un_sysc0_1_appsscg3cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg3cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg3cntr0_t;

/* APPSSCG3CNTR1 */
#define SYSC0_APPSSCG3CNTR1	(SYSC0_1.unAPPSSCG3CNTR1.u32Register)  /*@rg@*/
#define SYSC0_APPSSCG3CNTR1_SSCG3RATE	(SYSC0_1.unAPPSSCG3CNTR1.stcField.u10SSCG3RATE)  /*@bf@*/
#define SYSC0_APPSSCG3CNTR1_SSCG3MODE	(*(volatile uint_io8_t*)0xB0800E10)  /*@bfbba@*/
#define SYSC0_APPSSCG3CNTR1_SSCG3FREQ	(SYSC0_1.unAPPSSCG3CNTR1.stcField.u2SSCG3FREQ)  /*@bf@*/
#define SYSC0_APPSSCG3CNTR1_SSCG3SSEN	(*(volatile uint_io8_t*)0xB0800E18)  /*@bfbba@*/

typedef struct stc_sysc0_1_appsscg3cntr1_field{
    uint_io32_t		u10SSCG3RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG3MODE:1;
    uint_io32_t		u2SSCG3FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG3SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_appsscg3cntr1_field_t;

typedef union un_sysc0_1_appsscg3cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_appsscg3cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appsscg3cntr1_t;

/* APPLVDCFGR */
#define SYSC0_APPLVDCFGR	(SYSC0_1.unAPPLVDCFGR.u32Register)  /*@rg@*/
#define SYSC0_APPLVDCFGR_LVDH2E	(*(volatile uint_io8_t*)0xB0800E20)  /*@bfbba@*/
#define SYSC0_APPLVDCFGR_LVDH2V	(SYSC0_1.unAPPLVDCFGR.stcField.u4LVDH2V)  /*@bf@*/
#define SYSC0_APPLVDCFGR_LVDH2S	(*(volatile uint_io8_t*)0xB0800E26)  /*@bfbba@*/
#define SYSC0_APPLVDCFGR_LVDH1E	(*(volatile uint_io8_t*)0xB0800E28)  /*@bfbba@*/
#define SYSC0_APPLVDCFGR_LVDH1V	(SYSC0_1.unAPPLVDCFGR.stcField.u4LVDH1V)  /*@bf@*/
#define SYSC0_APPLVDCFGR_LVDH1S	(*(volatile uint_io8_t*)0xB0800E2E)  /*@bfbba@*/
#define SYSC0_APPLVDCFGR_LVDL2E	(*(volatile uint_io8_t*)0xB0800E30)  /*@bfbba@*/
#define SYSC0_APPLVDCFGR_LVDL2V	(SYSC0_1.unAPPLVDCFGR.stcField.u2LVDL2V)  /*@bf@*/
#define SYSC0_APPLVDCFGR_LVDL2S	(*(volatile uint_io8_t*)0xB0800E36)  /*@bfbba@*/
#define SYSC0_APPLVDCFGR_LVDL1E	(*(volatile uint_io8_t*)0xB0800E38)  /*@bfbba@*/
#define SYSC0_APPLVDCFGR_LVDL1V	(SYSC0_1.unAPPLVDCFGR.stcField.u2LVDL1V)  /*@bf@*/
#define SYSC0_APPLVDCFGR_LVDL1S	(*(volatile uint_io8_t*)0xB0800E3E)  /*@bfbba@*/

typedef struct stc_sysc0_1_applvdcfgr_field{
    uint_io32_t		u1LVDH2E:1;
    uint_io32_t		u4LVDH2V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH2S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1E:1;
    uint_io32_t		u4LVDH1V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDL2E:1;
    uint_io32_t		u2LVDL2V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL2S:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDL1E:1;
    uint_io32_t		u2LVDL1V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL1S:1;
    uint_io32_t		:1;
}stc_sysc0_1_applvdcfgr_field_t;

typedef union un_sysc0_1_applvdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_applvdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_applvdcfgr_t;

/* APPCSVCFGR */
#define SYSC0_APPCSVCFGR	(SYSC0_1.unAPPCSVCFGR.u32Register)  /*@rg@*/
#define SYSC0_APPCSVCFGR_MOCSVE	(*(volatile uint_io8_t*)0xB0800E40)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_SOCSVE	(*(volatile uint_io8_t*)0xB0800E41)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_CRCSVE	(*(volatile uint_io8_t*)0xB0800E42)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_SCRCSVE	(*(volatile uint_io8_t*)0xB0800E43)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_PLL0CSVE	(*(volatile uint_io8_t*)0xB0800E48)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_PLL1CSVE	(*(volatile uint_io8_t*)0xB0800E49)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_PLL2CSVE	(*(volatile uint_io8_t*)0xB0800E4A)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_PLL3CSVE	(*(volatile uint_io8_t*)0xB0800E4B)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_SSCG0CSVE	(*(volatile uint_io8_t*)0xB0800E50)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_SSCG1CSVE	(*(volatile uint_io8_t*)0xB0800E51)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_SSCG2CSVE	(*(volatile uint_io8_t*)0xB0800E52)  /*@bfbba@*/
#define SYSC0_APPCSVCFGR_SSCG3CSVE	(*(volatile uint_io8_t*)0xB0800E53)  /*@bfbba@*/

typedef struct stc_sysc0_1_appcsvcfgr_field{
    uint_io32_t		u1MOCSVE:1;
    uint_io32_t		u1SOCSVE:1;
    uint_io32_t		u1CRCSVE:1;
    uint_io32_t		u1SCRCSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0CSVE:1;
    uint_io32_t		u1PLL1CSVE:1;
    uint_io32_t		u1PLL2CSVE:1;
    uint_io32_t		u1PLL3CSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0CSVE:1;
    uint_io32_t		u1SSCG1CSVE:1;
    uint_io32_t		u1SSCG2CSVE:1;
    uint_io32_t		u1SSCG3CSVE:1;
    uint_io32_t		:12;
}stc_sysc0_1_appcsvcfgr_field_t;

typedef union un_sysc0_1_appcsvcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_appcsvcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appcsvcfgr_t;

/* APPREGCFGR */
#define SYSC0_APPREGCFGR	(SYSC0_1.unAPPREGCFGR.u32Register)  /*@rg@*/
#define SYSC0_APPREGCFGR_RVSEL	(*(volatile uint_io8_t*)0xB0800E60)  /*@bfbba@*/
#define SYSC0_APPREGCFGR_RMSEL	(*(volatile uint_io8_t*)0xB0800E67)  /*@bfbba@*/

typedef struct stc_sysc0_1_appregcfgr_field{
    uint_io32_t		u1RVSEL:1;
    uint_io32_t		:6;
    uint_io32_t		u1RMSEL:1;
    uint_io32_t		:24;
}stc_sysc0_1_appregcfgr_field_t;

typedef union un_sysc0_1_appregcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_appregcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_appregcfgr_t;

/* STSPDCFGR */
#define SYSC0_STSPDCFGR	(SYSC0_1.unSTSPDCFGR.u32Register)  /*@rg@*/
#define SYSC0_STSPDCFGR_PD2EN	(*(volatile uint_io8_t*)0xB0801008)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD3EN	(*(volatile uint_io8_t*)0xB080100C)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD4_0EN	(*(volatile uint_io8_t*)0xB0801010)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD4_1EN	(*(volatile uint_io8_t*)0xB0801011)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD5_0EN	(*(volatile uint_io8_t*)0xB0801014)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD5_1EN	(*(volatile uint_io8_t*)0xB0801015)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD5_2EN	(*(volatile uint_io8_t*)0xB0801016)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD5_3EN	(*(volatile uint_io8_t*)0xB0801017)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD6_0EN	(*(volatile uint_io8_t*)0xB0801018)  /*@bfbba@*/
#define SYSC0_STSPDCFGR_PD6_1EN	(*(volatile uint_io8_t*)0xB0801019)  /*@bfbba@*/

typedef struct stc_sysc0_1_stspdcfgr_field{
    uint_io32_t		:8;
    uint_io32_t		u1PD2EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD3EN:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD4_0EN:1;
    uint_io32_t		u1PD4_1EN:1;
    uint_io32_t		:2;
    uint_io32_t		u1PD5_0EN:1;
    uint_io32_t		u1PD5_1EN:1;
    uint_io32_t		u1PD5_2EN:1;
    uint_io32_t		u1PD5_3EN:1;
    uint_io32_t		u1PD6_0EN:1;
    uint_io32_t		u1PD6_1EN:1;
    uint_io32_t		:6;
}stc_sysc0_1_stspdcfgr_field_t;

typedef union un_sysc0_1_stspdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stspdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stspdcfgr_t;

/* STSCKSRER */
#define SYSC0_STSCKSRER	(SYSC0_1.unSTSCKSRER.u32Register)  /*@rg@*/
#define SYSC0_STSCKSRER_CROSCEN	(*(volatile uint_io8_t*)0xB0801020)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SCROSCEN	(*(volatile uint_io8_t*)0xB0801021)  /*@bfbba@*/
#define SYSC0_STSCKSRER_MOSCEN	(*(volatile uint_io8_t*)0xB0801022)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SOSCEN	(*(volatile uint_io8_t*)0xB0801023)  /*@bfbba@*/
#define SYSC0_STSCKSRER_CROSCRDY	(*(volatile uint_io8_t*)0xB0801024)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SCROSCRDY	(*(volatile uint_io8_t*)0xB0801025)  /*@bfbba@*/
#define SYSC0_STSCKSRER_MOSCRDY	(*(volatile uint_io8_t*)0xB0801026)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SOSCRDY	(*(volatile uint_io8_t*)0xB0801027)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL0EN	(*(volatile uint_io8_t*)0xB0801028)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL1EN	(*(volatile uint_io8_t*)0xB0801029)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL2EN	(*(volatile uint_io8_t*)0xB080102A)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL3EN	(*(volatile uint_io8_t*)0xB080102B)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL0RDY	(*(volatile uint_io8_t*)0xB080102C)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL1RDY	(*(volatile uint_io8_t*)0xB080102D)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL2RDY	(*(volatile uint_io8_t*)0xB080102E)  /*@bfbba@*/
#define SYSC0_STSCKSRER_PLL3RDY	(*(volatile uint_io8_t*)0xB080102F)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG0EN	(*(volatile uint_io8_t*)0xB0801030)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG1EN	(*(volatile uint_io8_t*)0xB0801031)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG2EN	(*(volatile uint_io8_t*)0xB0801032)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG3EN	(*(volatile uint_io8_t*)0xB0801033)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG0RDY	(*(volatile uint_io8_t*)0xB0801034)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG1RDY	(*(volatile uint_io8_t*)0xB0801035)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG2RDY	(*(volatile uint_io8_t*)0xB0801036)  /*@bfbba@*/
#define SYSC0_STSCKSRER_SSCG3RDY	(*(volatile uint_io8_t*)0xB0801037)  /*@bfbba@*/

typedef struct stc_sysc0_1_stscksrer_field{
    uint_io32_t		u1CROSCEN:1;
    uint_io32_t		u1SCROSCEN:1;
    uint_io32_t		u1MOSCEN:1;
    uint_io32_t		u1SOSCEN:1;
    uint_io32_t		u1CROSCRDY:1;
    uint_io32_t		u1SCROSCRDY:1;
    uint_io32_t		u1MOSCRDY:1;
    uint_io32_t		u1SOSCRDY:1;
    uint_io32_t		u1PLL0EN:1;
    uint_io32_t		u1PLL1EN:1;
    uint_io32_t		u1PLL2EN:1;
    uint_io32_t		u1PLL3EN:1;
    uint_io32_t		u1PLL0RDY:1;
    uint_io32_t		u1PLL1RDY:1;
    uint_io32_t		u1PLL2RDY:1;
    uint_io32_t		u1PLL3RDY:1;
    uint_io32_t		u1SSCG0EN:1;
    uint_io32_t		u1SSCG1EN:1;
    uint_io32_t		u1SSCG2EN:1;
    uint_io32_t		u1SSCG3EN:1;
    uint_io32_t		u1SSCG0RDY:1;
    uint_io32_t		u1SSCG1RDY:1;
    uint_io32_t		u1SSCG2RDY:1;
    uint_io32_t		u1SSCG3RDY:1;
    uint_io32_t		:8;
}stc_sysc0_1_stscksrer_field_t;

typedef union un_sysc0_1_stscksrer{
    uint_io32_t		u32Register;
    stc_sysc0_1_stscksrer_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stscksrer_t;

/* STSCKSELR */
#define SYSC0_STSCKSELR	(SYSC0_1.unSTSCKSELR.u32Register)  /*@rg@*/
#define SYSC0_STSCKSELR_CDMCUCCSL	(SYSC0_1.unSTSCKSELR.stcField.u3CDMCUCCSL)  /*@bf@*/
#define SYSC0_STSCKSELR_CDMCUCCM	(SYSC0_1.unSTSCKSELR.stcField.u3CDMCUCCM)  /*@bf@*/

typedef struct stc_sysc0_1_stsckselr_field{
    uint_io32_t		u3CDMCUCCSL:3;
    uint_io32_t		:1;
    uint_io32_t		u3CDMCUCCM:3;
    uint_io32_t		:25;
}stc_sysc0_1_stsckselr_field_t;

typedef union un_sysc0_1_stsckselr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stsckselr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stsckselr_t;

/* STSCKER */
#define SYSC0_STSCKER	(SYSC0_1.unSTSCKER.u32Register)  /*@rg@*/
#define SYSC0_STSCKER_ENCLKMCUCH	(*(volatile uint_io8_t*)0xB0801060)  /*@bfbba@*/
#define SYSC0_STSCKER_ENCLKMCUCP	(*(volatile uint_io8_t*)0xB0801061)  /*@bfbba@*/

typedef struct stc_sysc0_1_stscker_field{
    uint_io32_t		u1ENCLKMCUCH:1;
    uint_io32_t		u1ENCLKMCUCP:1;
    uint_io32_t		:30;
}stc_sysc0_1_stscker_field_t;

typedef union un_sysc0_1_stscker{
    uint_io32_t		u32Register;
    stc_sysc0_1_stscker_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stscker_t;

/* STSCKDIVR */
#define SYSC0_STSCKDIVR	(SYSC0_1.unSTSCKDIVR.u32Register)  /*@rg@*/
#define SYSC0_STSCKDIVR_MCUCHDIV	(SYSC0_1.unSTSCKDIVR.stcField.u5MCUCHDIV)  /*@bf@*/
#define SYSC0_STSCKDIVR_MCUCPDIV	(SYSC0_1.unSTSCKDIVR.stcField.u4MCUCPDIV)  /*@bf@*/

typedef struct stc_sysc0_1_stsckdivr_field{
    uint_io32_t		u5MCUCHDIV:5;
    uint_io32_t		:3;
    uint_io32_t		u4MCUCPDIV:4;
    uint_io32_t		:20;
}stc_sysc0_1_stsckdivr_field_t;

typedef union un_sysc0_1_stsckdivr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stsckdivr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stsckdivr_t;

/* STSPLL0CNTR */
#define SYSC0_STSPLL0CNTR	(SYSC0_1.unSTSPLL0CNTR.u32Register)  /*@rg@*/
#define SYSC0_STSPLL0CNTR_PLL0DIVL	(SYSC0_1.unSTSPLL0CNTR.stcField.u2PLL0DIVL)  /*@bf@*/
#define SYSC0_STSPLL0CNTR_PLL0DIVM	(SYSC0_1.unSTSPLL0CNTR.stcField.u4PLL0DIVM)  /*@bf@*/
#define SYSC0_STSPLL0CNTR_PLL0DIVN	(SYSC0_1.unSTSPLL0CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSPLL0CNTR_PLL0ISEL	(*(volatile uint_io8_t*)0xB08010BF)  /*@bfbba@*/

typedef struct stc_sysc0_1_stspll0cntr_field{
    uint_io32_t		u2PLL0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL0ISEL:1;
}stc_sysc0_1_stspll0cntr_field_t;

typedef union un_sysc0_1_stspll0cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stspll0cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stspll0cntr_t;

/* STSPLL1CNTR */
#define SYSC0_STSPLL1CNTR	(SYSC0_1.unSTSPLL1CNTR.u32Register)  /*@rg@*/
#define SYSC0_STSPLL1CNTR_PLL1DIVL	(SYSC0_1.unSTSPLL1CNTR.stcField.u2PLL1DIVL)  /*@bf@*/
#define SYSC0_STSPLL1CNTR_PLL1DIVM	(SYSC0_1.unSTSPLL1CNTR.stcField.u4PLL1DIVM)  /*@bf@*/
#define SYSC0_STSPLL1CNTR_PLL1DIVN	(SYSC0_1.unSTSPLL1CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSPLL1CNTR_PLL1ISEL	(*(volatile uint_io8_t*)0xB08010DF)  /*@bfbba@*/

typedef struct stc_sysc0_1_stspll1cntr_field{
    uint_io32_t		u2PLL1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL1ISEL:1;
}stc_sysc0_1_stspll1cntr_field_t;

typedef union un_sysc0_1_stspll1cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stspll1cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stspll1cntr_t;

/* STSPLL2CNTR */
#define SYSC0_STSPLL2CNTR	(SYSC0_1.unSTSPLL2CNTR.u32Register)  /*@rg@*/
#define SYSC0_STSPLL2CNTR_PLL2DIVL	(SYSC0_1.unSTSPLL2CNTR.stcField.u2PLL2DIVL)  /*@bf@*/
#define SYSC0_STSPLL2CNTR_PLL2DIVM	(SYSC0_1.unSTSPLL2CNTR.stcField.u4PLL2DIVM)  /*@bf@*/
#define SYSC0_STSPLL2CNTR_PLL2DIVN	(SYSC0_1.unSTSPLL2CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSPLL2CNTR_PLL2ISEL	(*(volatile uint_io8_t*)0xB08010FF)  /*@bfbba@*/

typedef struct stc_sysc0_1_stspll2cntr_field{
    uint_io32_t		u2PLL2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL2ISEL:1;
}stc_sysc0_1_stspll2cntr_field_t;

typedef union un_sysc0_1_stspll2cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stspll2cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stspll2cntr_t;

/* STSPLL3CNTR */
#define SYSC0_STSPLL3CNTR	(SYSC0_1.unSTSPLL3CNTR.u32Register)  /*@rg@*/
#define SYSC0_STSPLL3CNTR_PLL3DIVL	(SYSC0_1.unSTSPLL3CNTR.stcField.u2PLL3DIVL)  /*@bf@*/
#define SYSC0_STSPLL3CNTR_PLL3DIVM	(SYSC0_1.unSTSPLL3CNTR.stcField.u4PLL3DIVM)  /*@bf@*/
#define SYSC0_STSPLL3CNTR_PLL3DIVN	(SYSC0_1.unSTSPLL3CNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSPLL3CNTR_PLL3ISEL	(*(volatile uint_io8_t*)0xB080111F)  /*@bfbba@*/

typedef struct stc_sysc0_1_stspll3cntr_field{
    uint_io32_t		u2PLL3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4PLL3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8PLL3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1PLL3ISEL:1;
}stc_sysc0_1_stspll3cntr_field_t;

typedef union un_sysc0_1_stspll3cntr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stspll3cntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stspll3cntr_t;

/* STSSSCG0CNTR0 */
#define SYSC0_STSSSCG0CNTR0	(SYSC0_1.unSTSSSCG0CNTR0.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG0CNTR0_SSCG0DIVL	(SYSC0_1.unSTSSSCG0CNTR0.stcField.u2SSCG0DIVL)  /*@bf@*/
#define SYSC0_STSSSCG0CNTR0_SSCG0DIVM	(SYSC0_1.unSTSSSCG0CNTR0.stcField.u4SSCG0DIVM)  /*@bf@*/
#define SYSC0_STSSSCG0CNTR0_SSCG0DIVN	(SYSC0_1.unSTSSSCG0CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSSSCG0CNTR0_SSCG0ISEL	(*(volatile uint_io8_t*)0xB080113F)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg0cntr0_field{
    uint_io32_t		u2SSCG0DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG0DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG0DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG0ISEL:1;
}stc_sysc0_1_stssscg0cntr0_field_t;

typedef union un_sysc0_1_stssscg0cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg0cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg0cntr0_t;

/* STSSSCG0CNTR1 */
#define SYSC0_STSSSCG0CNTR1	(SYSC0_1.unSTSSSCG0CNTR1.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG0CNTR1_SSCG0RATE	(SYSC0_1.unSTSSSCG0CNTR1.stcField.u10SSCG0RATE)  /*@bf@*/
#define SYSC0_STSSSCG0CNTR1_SSCG0MODE	(*(volatile uint_io8_t*)0xB0801150)  /*@bfbba@*/
#define SYSC0_STSSSCG0CNTR1_SSCG0FREQ	(SYSC0_1.unSTSSSCG0CNTR1.stcField.u2SSCG0FREQ)  /*@bf@*/
#define SYSC0_STSSSCG0CNTR1_SSCG0SSEN	(*(volatile uint_io8_t*)0xB0801158)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg0cntr1_field{
    uint_io32_t		u10SSCG0RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG0MODE:1;
    uint_io32_t		u2SSCG0FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG0SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_stssscg0cntr1_field_t;

typedef union un_sysc0_1_stssscg0cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg0cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg0cntr1_t;

/* STSSSCG1CNTR0 */
#define SYSC0_STSSSCG1CNTR0	(SYSC0_1.unSTSSSCG1CNTR0.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG1CNTR0_SSCG1DIVL	(SYSC0_1.unSTSSSCG1CNTR0.stcField.u2SSCG1DIVL)  /*@bf@*/
#define SYSC0_STSSSCG1CNTR0_SSCG1DIVM	(SYSC0_1.unSTSSSCG1CNTR0.stcField.u4SSCG1DIVM)  /*@bf@*/
#define SYSC0_STSSSCG1CNTR0_SSCG1DIVN	(SYSC0_1.unSTSSSCG1CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSSSCG1CNTR0_SSCG1ISEL	(*(volatile uint_io8_t*)0xB080117F)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg1cntr0_field{
    uint_io32_t		u2SSCG1DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG1DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG1DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG1ISEL:1;
}stc_sysc0_1_stssscg1cntr0_field_t;

typedef union un_sysc0_1_stssscg1cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg1cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg1cntr0_t;

/* STSSSCG1CNTR1 */
#define SYSC0_STSSSCG1CNTR1	(SYSC0_1.unSTSSSCG1CNTR1.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG1CNTR1_SSCG1RATE	(SYSC0_1.unSTSSSCG1CNTR1.stcField.u10SSCG1RATE)  /*@bf@*/
#define SYSC0_STSSSCG1CNTR1_SSCG1MODE	(*(volatile uint_io8_t*)0xB0801190)  /*@bfbba@*/
#define SYSC0_STSSSCG1CNTR1_SSCG1FREQ	(SYSC0_1.unSTSSSCG1CNTR1.stcField.u2SSCG1FREQ)  /*@bf@*/
#define SYSC0_STSSSCG1CNTR1_SSCG1SSEN	(*(volatile uint_io8_t*)0xB0801198)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg1cntr1_field{
    uint_io32_t		u10SSCG1RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG1MODE:1;
    uint_io32_t		u2SSCG1FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG1SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_stssscg1cntr1_field_t;

typedef union un_sysc0_1_stssscg1cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg1cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg1cntr1_t;

/* STSSSCG2CNTR0 */
#define SYSC0_STSSSCG2CNTR0	(SYSC0_1.unSTSSSCG2CNTR0.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG2CNTR0_SSCG2DIVL	(SYSC0_1.unSTSSSCG2CNTR0.stcField.u2SSCG2DIVL)  /*@bf@*/
#define SYSC0_STSSSCG2CNTR0_SSCG2DIVM	(SYSC0_1.unSTSSSCG2CNTR0.stcField.u4SSCG2DIVM)  /*@bf@*/
#define SYSC0_STSSSCG2CNTR0_SSCG2DIVN	(SYSC0_1.unSTSSSCG2CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSSSCG2CNTR0_SSCG2ISEL	(*(volatile uint_io8_t*)0xB08011BF)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg2cntr0_field{
    uint_io32_t		u2SSCG2DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG2DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG2DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG2ISEL:1;
}stc_sysc0_1_stssscg2cntr0_field_t;

typedef union un_sysc0_1_stssscg2cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg2cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg2cntr0_t;

/* STSSSCG2CNTR1 */
#define SYSC0_STSSSCG2CNTR1	(SYSC0_1.unSTSSSCG2CNTR1.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG2CNTR1_SSCG2RATE	(SYSC0_1.unSTSSSCG2CNTR1.stcField.u10SSCG2RATE)  /*@bf@*/
#define SYSC0_STSSSCG2CNTR1_SSCG2MODE	(*(volatile uint_io8_t*)0xB08011D0)  /*@bfbba@*/
#define SYSC0_STSSSCG2CNTR1_SSCG2FREQ	(SYSC0_1.unSTSSSCG2CNTR1.stcField.u2SSCG2FREQ)  /*@bf@*/
#define SYSC0_STSSSCG2CNTR1_SSCG2SSEN	(*(volatile uint_io8_t*)0xB08011D8)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg2cntr1_field{
    uint_io32_t		u10SSCG2RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG2MODE:1;
    uint_io32_t		u2SSCG2FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG2SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_stssscg2cntr1_field_t;

typedef union un_sysc0_1_stssscg2cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg2cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg2cntr1_t;

/* STSSSCG3CNTR0 */
#define SYSC0_STSSSCG3CNTR0	(SYSC0_1.unSTSSSCG3CNTR0.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG3CNTR0_SSCG3DIVL	(SYSC0_1.unSTSSSCG3CNTR0.stcField.u2SSCG3DIVL)  /*@bf@*/
#define SYSC0_STSSSCG3CNTR0_SSCG3DIVM	(SYSC0_1.unSTSSSCG3CNTR0.stcField.u4SSCG3DIVM)  /*@bf@*/
#define SYSC0_STSSSCG3CNTR0_SSCG3DIVN	(SYSC0_1.unSTSSSCG3CNTR0.au8Byte[2])  /*@bfbyte@*/
#define SYSC0_STSSSCG3CNTR0_SSCG3ISEL	(*(volatile uint_io8_t*)0xB08011FF)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg3cntr0_field{
    uint_io32_t		u2SSCG3DIVL:2;
    uint_io32_t		:6;
    uint_io32_t		u4SSCG3DIVM:4;
    uint_io32_t		:4;
    uint_io32_t		u8SSCG3DIVN:8;
    uint_io32_t		:7;
    uint_io32_t		u1SSCG3ISEL:1;
}stc_sysc0_1_stssscg3cntr0_field_t;

typedef union un_sysc0_1_stssscg3cntr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg3cntr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg3cntr0_t;

/* STSSSCG3CNTR1 */
#define SYSC0_STSSSCG3CNTR1	(SYSC0_1.unSTSSSCG3CNTR1.u32Register)  /*@rg@*/
#define SYSC0_STSSSCG3CNTR1_SSCG3RATE	(SYSC0_1.unSTSSSCG3CNTR1.stcField.u10SSCG3RATE)  /*@bf@*/
#define SYSC0_STSSSCG3CNTR1_SSCG3MODE	(*(volatile uint_io8_t*)0xB0801210)  /*@bfbba@*/
#define SYSC0_STSSSCG3CNTR1_SSCG3FREQ	(SYSC0_1.unSTSSSCG3CNTR1.stcField.u2SSCG3FREQ)  /*@bf@*/
#define SYSC0_STSSSCG3CNTR1_SSCG3SSEN	(*(volatile uint_io8_t*)0xB0801218)  /*@bfbba@*/

typedef struct stc_sysc0_1_stssscg3cntr1_field{
    uint_io32_t		u10SSCG3RATE:10;
    uint_io32_t		:6;
    uint_io32_t		u1SSCG3MODE:1;
    uint_io32_t		u2SSCG3FREQ:2;
    uint_io32_t		:5;
    uint_io32_t		u1SSCG3SSEN:1;
    uint_io32_t		:7;
}stc_sysc0_1_stssscg3cntr1_field_t;

typedef union un_sysc0_1_stssscg3cntr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_stssscg3cntr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stssscg3cntr1_t;

/* STSLVDCFGR */
#define SYSC0_STSLVDCFGR	(SYSC0_1.unSTSLVDCFGR.u32Register)  /*@rg@*/
#define SYSC0_STSLVDCFGR_LVDH2E	(*(volatile uint_io8_t*)0xB0801220)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDH2V	(SYSC0_1.unSTSLVDCFGR.stcField.u4LVDH2V)  /*@bf@*/
#define SYSC0_STSLVDCFGR_LVDH2S	(*(volatile uint_io8_t*)0xB0801226)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDH2R	(*(volatile uint_io8_t*)0xB0801227)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDH1E	(*(volatile uint_io8_t*)0xB0801228)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDH1V	(SYSC0_1.unSTSLVDCFGR.stcField.u4LVDH1V)  /*@bf@*/
#define SYSC0_STSLVDCFGR_LVDH1S	(*(volatile uint_io8_t*)0xB080122E)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDH1R	(*(volatile uint_io8_t*)0xB080122F)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDL2E	(*(volatile uint_io8_t*)0xB0801230)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDL2V	(SYSC0_1.unSTSLVDCFGR.stcField.u2LVDL2V)  /*@bf@*/
#define SYSC0_STSLVDCFGR_LVDL2S	(*(volatile uint_io8_t*)0xB0801236)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDL2R	(*(volatile uint_io8_t*)0xB0801237)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDL1E	(*(volatile uint_io8_t*)0xB0801238)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDL1V	(SYSC0_1.unSTSLVDCFGR.stcField.u2LVDL1V)  /*@bf@*/
#define SYSC0_STSLVDCFGR_LVDL1S	(*(volatile uint_io8_t*)0xB080123E)  /*@bfbba@*/
#define SYSC0_STSLVDCFGR_LVDL1R	(*(volatile uint_io8_t*)0xB080123F)  /*@bfbba@*/

typedef struct stc_sysc0_1_stslvdcfgr_field{
    uint_io32_t		u1LVDH2E:1;
    uint_io32_t		u4LVDH2V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH2S:1;
    uint_io32_t		u1LVDH2R:1;
    uint_io32_t		u1LVDH1E:1;
    uint_io32_t		u4LVDH1V:4;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1S:1;
    uint_io32_t		u1LVDH1R:1;
    uint_io32_t		u1LVDL2E:1;
    uint_io32_t		u2LVDL2V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL2S:1;
    uint_io32_t		u1LVDL2R:1;
    uint_io32_t		u1LVDL1E:1;
    uint_io32_t		u2LVDL1V:2;
    uint_io32_t		:3;
    uint_io32_t		u1LVDL1S:1;
    uint_io32_t		u1LVDL1R:1;
}stc_sysc0_1_stslvdcfgr_field_t;

typedef union un_sysc0_1_stslvdcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stslvdcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stslvdcfgr_t;

/* STSCSVCFGR */
#define SYSC0_STSCSVCFGR	(SYSC0_1.unSTSCSVCFGR.u32Register)  /*@rg@*/
#define SYSC0_STSCSVCFGR_MOCSVE	(*(volatile uint_io8_t*)0xB0801240)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_SOCSVE	(*(volatile uint_io8_t*)0xB0801241)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_FCRCSVE	(*(volatile uint_io8_t*)0xB0801242)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_SCRCSVE	(*(volatile uint_io8_t*)0xB0801243)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_PLL0CSVE	(*(volatile uint_io8_t*)0xB0801248)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_PLL1CSVE	(*(volatile uint_io8_t*)0xB0801249)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_PLL2CSVE	(*(volatile uint_io8_t*)0xB080124A)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_PLL3CSVE	(*(volatile uint_io8_t*)0xB080124B)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_SSCG0CSVE	(*(volatile uint_io8_t*)0xB0801250)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_SSCG1CSVE	(*(volatile uint_io8_t*)0xB0801251)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_SSCG2CSVE	(*(volatile uint_io8_t*)0xB0801252)  /*@bfbba@*/
#define SYSC0_STSCSVCFGR_SSCG3CSVE	(*(volatile uint_io8_t*)0xB0801253)  /*@bfbba@*/

typedef struct stc_sysc0_1_stscsvcfgr_field{
    uint_io32_t		u1MOCSVE:1;
    uint_io32_t		u1SOCSVE:1;
    uint_io32_t		u1FCRCSVE:1;
    uint_io32_t		u1SCRCSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0CSVE:1;
    uint_io32_t		u1PLL1CSVE:1;
    uint_io32_t		u1PLL2CSVE:1;
    uint_io32_t		u1PLL3CSVE:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0CSVE:1;
    uint_io32_t		u1SSCG1CSVE:1;
    uint_io32_t		u1SSCG2CSVE:1;
    uint_io32_t		u1SSCG3CSVE:1;
    uint_io32_t		:12;
}stc_sysc0_1_stscsvcfgr_field_t;

typedef union un_sysc0_1_stscsvcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stscsvcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stscsvcfgr_t;

/* STSREGCFGR */
#define SYSC0_STSREGCFGR	(SYSC0_1.unSTSREGCFGR.u32Register)  /*@rg@*/
#define SYSC0_STSREGCFGR_RVSEL	(*(volatile uint_io8_t*)0xB0801260)  /*@bfbba@*/
#define SYSC0_STSREGCFGR_RMSEL	(*(volatile uint_io8_t*)0xB0801267)  /*@bfbba@*/

typedef struct stc_sysc0_1_stsregcfgr_field{
    uint_io32_t		u1RVSEL:1;
    uint_io32_t		:6;
    uint_io32_t		u1RMSEL:1;
    uint_io32_t		:24;
}stc_sysc0_1_stsregcfgr_field_t;

typedef union un_sysc0_1_stsregcfgr{
    uint_io32_t		u32Register;
    stc_sysc0_1_stsregcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_stsregcfgr_t;

/* SYSSTSR */
#define SYSC0_SYSSTSR	(SYSC0_1.unSYSSTSR.u32Register)  /*@rg@*/
#define SYSC0_SYSSTSR_DVSTS0	(*(volatile uint_io8_t*)0xB0801440)  /*@bfbba@*/
#define SYSC0_SYSSTSR_CPUSTS0	(*(volatile uint_io8_t*)0xB0801441)  /*@bfbba@*/
#define SYSC0_SYSSTSR_RUNDF0	(*(volatile uint_io8_t*)0xB0801444)  /*@bfbba@*/
#define SYSC0_SYSSTSR_PSSDF0	(*(volatile uint_io8_t*)0xB0801445)  /*@bfbba@*/
#define SYSC0_SYSSTSR_RUNSTS0	(*(volatile uint_io8_t*)0xB0801446)  /*@bfbba@*/
#define SYSC0_SYSSTSR_PSSSTS0	(*(volatile uint_io8_t*)0xB0801447)  /*@bfbba@*/

typedef struct stc_sysc0_1_sysstsr_field{
    uint_io32_t		u1DVSTS0:1;
    uint_io32_t		u1CPUSTS0:1;
    uint_io32_t		:2;
    uint_io32_t		u1RUNDF0:1;
    uint_io32_t		u1PSSDF0:1;
    uint_io32_t		u1RUNSTS0:1;
    uint_io32_t		u1PSSSTS0:1;
    uint_io32_t		:24;
}stc_sysc0_1_sysstsr_field_t;

typedef union un_sysc0_1_sysstsr{
    uint_io32_t		u32Register;
    stc_sysc0_1_sysstsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_sysstsr_t;

/* SYSINTER */
#define SYSC0_SYSINTER	(SYSC0_1.unSYSINTER.u32Register)  /*@rg@*/
#define SYSC0_SYSINTER_RUNDIE0	(*(volatile uint_io8_t*)0xB0801464)  /*@bfbba@*/

typedef struct stc_sysc0_1_sysinter_field{
    uint_io32_t		:4;
    uint_io32_t		u1RUNDIE0:1;
    uint_io32_t		:27;
}stc_sysc0_1_sysinter_field_t;

typedef union un_sysc0_1_sysinter{
    uint_io32_t		u32Register;
    stc_sysc0_1_sysinter_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_sysinter_t;

/* SYSICLR */
#define SYSC0_SYSICLR	(SYSC0_1.unSYSICLR.u32Register)  /*@rg@*/
#define SYSC0_SYSICLR_RUNDFCLR0	(*(volatile uint_io8_t*)0xB0801484)  /*@bfbba@*/
#define SYSC0_SYSICLR_PSSDFCLR0	(*(volatile uint_io8_t*)0xB0801485)  /*@bfbba@*/

typedef struct stc_sysc0_1_sysiclr_field{
    uint_io32_t		:4;
    uint_io32_t		u1RUNDFCLR0:1;
    uint_io32_t		u1PSSDFCLR0:1;
    uint_io32_t		:26;
}stc_sysc0_1_sysiclr_field_t;

typedef union un_sysc0_1_sysiclr{
    uint_io32_t		u32Register;
    stc_sysc0_1_sysiclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_sysiclr_t;

/* SYSERRIR0 */
#define SYSC0_SYSERRIR0	(SYSC0_1.unSYSERRIR0.u32Register)  /*@rg@*/
#define SYSC0_SYSERRIR0_MOSCIF	(*(volatile uint_io8_t*)0xB08014A0)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_SOSCIF	(*(volatile uint_io8_t*)0xB08014A1)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_MOAIF	(*(volatile uint_io8_t*)0xB08014A2)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_SOAIF	(*(volatile uint_io8_t*)0xB08014A3)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_PLL0IF	(*(volatile uint_io8_t*)0xB08014A8)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_PLL1IF	(*(volatile uint_io8_t*)0xB08014A9)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_PLL2IF	(*(volatile uint_io8_t*)0xB08014AA)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_PLL3IF	(*(volatile uint_io8_t*)0xB08014AB)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_SSCG0IF	(*(volatile uint_io8_t*)0xB08014B0)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_SSCG1IF	(*(volatile uint_io8_t*)0xB08014B1)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_SSCG2IF	(*(volatile uint_io8_t*)0xB08014B2)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_SSCG3IF	(*(volatile uint_io8_t*)0xB08014B3)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_LVDL1IF	(*(volatile uint_io8_t*)0xB08014B8)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_LVDL2IF	(*(volatile uint_io8_t*)0xB08014B9)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_LVDH1IF	(*(volatile uint_io8_t*)0xB08014BC)  /*@bfbba@*/
#define SYSC0_SYSERRIR0_LVDH2IF	(*(volatile uint_io8_t*)0xB08014BD)  /*@bfbba@*/

typedef struct stc_sysc0_1_syserrir0_field{
    uint_io32_t		u1MOSCIF:1;
    uint_io32_t		u1SOSCIF:1;
    uint_io32_t		u1MOAIF:1;
    uint_io32_t		u1SOAIF:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0IF:1;
    uint_io32_t		u1PLL1IF:1;
    uint_io32_t		u1PLL2IF:1;
    uint_io32_t		u1PLL3IF:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0IF:1;
    uint_io32_t		u1SSCG1IF:1;
    uint_io32_t		u1SSCG2IF:1;
    uint_io32_t		u1SSCG3IF:1;
    uint_io32_t		:4;
    uint_io32_t		u1LVDL1IF:1;
    uint_io32_t		u1LVDL2IF:1;
    uint_io32_t		:2;
    uint_io32_t		u1LVDH1IF:1;
    uint_io32_t		u1LVDH2IF:1;
    uint_io32_t		:2;
}stc_sysc0_1_syserrir0_field_t;

typedef union un_sysc0_1_syserrir0{
    uint_io32_t		u32Register;
    stc_sysc0_1_syserrir0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_syserrir0_t;

/* SYSERRIR1 */
#define SYSC0_SYSERRIR1	(SYSC0_1.unSYSERRIR1.u32Register)  /*@rg@*/
#define SYSC0_SYSERRIR1_TRGERRIF	(*(volatile uint_io8_t*)0xB08014C0)  /*@bfbba@*/
#define SYSC0_SYSERRIR1_RUNTRGERRIF	(*(volatile uint_io8_t*)0xB08014C1)  /*@bfbba@*/
#define SYSC0_SYSERRIR1_PSSTRGCIF0	(*(volatile uint_io8_t*)0xB08014C2)  /*@bfbba@*/
#define SYSC0_SYSERRIR1_PSSENERRIF0	(*(volatile uint_io8_t*)0xB08014C3)  /*@bfbba@*/
#define SYSC0_SYSERRIR1_RUNERRIF0	(*(volatile uint_io8_t*)0xB08014C4)  /*@bfbba@*/
#define SYSC0_SYSERRIR1_RUNWKERRIF0	(*(volatile uint_io8_t*)0xB08014C5)  /*@bfbba@*/
#define SYSC0_SYSERRIR1_PSSERRIF0	(*(volatile uint_io8_t*)0xB08014C6)  /*@bfbba@*/

typedef struct stc_sysc0_1_syserrir1_field{
    uint_io32_t		u1TRGERRIF:1;
    uint_io32_t		u1RUNTRGERRIF:1;
    uint_io32_t		u1PSSTRGCIF0:1;
    uint_io32_t		u1PSSENERRIF0:1;
    uint_io32_t		u1RUNERRIF0:1;
    uint_io32_t		u1RUNWKERRIF0:1;
    uint_io32_t		u1PSSERRIF0:1;
    uint_io32_t		:25;
}stc_sysc0_1_syserrir1_field_t;

typedef union un_sysc0_1_syserrir1{
    uint_io32_t		u32Register;
    stc_sysc0_1_syserrir1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_syserrir1_t;

/* SYSERRICLR0 */
#define SYSC0_SYSERRICLR0	(SYSC0_1.unSYSERRICLR0.u32Register)  /*@rg@*/
#define SYSC0_SYSERRICLR0_MOSCICLR	(*(volatile uint_io8_t*)0xB08014E0)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_SOSCICLR	(*(volatile uint_io8_t*)0xB08014E1)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_PLL0ICLR	(*(volatile uint_io8_t*)0xB08014E8)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_PLL1ICLR	(*(volatile uint_io8_t*)0xB08014E9)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_PLL2ICLR	(*(volatile uint_io8_t*)0xB08014EA)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_PLL3ICLR	(*(volatile uint_io8_t*)0xB08014EB)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_SSCG0ICLR	(*(volatile uint_io8_t*)0xB08014F0)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_SSCG1ICLR	(*(volatile uint_io8_t*)0xB08014F1)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_SSCG2ICLR	(*(volatile uint_io8_t*)0xB08014F2)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_SSCG3ICLR	(*(volatile uint_io8_t*)0xB08014F3)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_LVDL1ICLR	(*(volatile uint_io8_t*)0xB08014F8)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_LVDL2ICLR	(*(volatile uint_io8_t*)0xB08014F9)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_LVDH1ICLR	(*(volatile uint_io8_t*)0xB08014FC)  /*@bfbba@*/
#define SYSC0_SYSERRICLR0_LVDH2ICLR	(*(volatile uint_io8_t*)0xB08014FD)  /*@bfbba@*/

typedef struct stc_sysc0_1_syserriclr0_field{
    uint_io32_t		u1MOSCICLR:1;
    uint_io32_t		u1SOSCICLR:1;
    uint_io32_t		:6;
    uint_io32_t		u1PLL0ICLR:1;
    uint_io32_t		u1PLL1ICLR:1;
    uint_io32_t		u1PLL2ICLR:1;
    uint_io32_t		u1PLL3ICLR:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSCG0ICLR:1;
    uint_io32_t		u1SSCG1ICLR:1;
    uint_io32_t		u1SSCG2ICLR:1;
    uint_io32_t		u1SSCG3ICLR:1;
    uint_io32_t		:4;
    uint_io32_t		u1LVDL1ICLR:1;
    uint_io32_t		u1LVDL2ICLR:1;
    uint_io32_t		:2;
    uint_io32_t		u1LVDH1ICLR:1;
    uint_io32_t		u1LVDH2ICLR:1;
    uint_io32_t		:2;
}stc_sysc0_1_syserriclr0_field_t;

typedef union un_sysc0_1_syserriclr0{
    uint_io32_t		u32Register;
    stc_sysc0_1_syserriclr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_syserriclr0_t;

/* SYSERRICLR1 */
#define SYSC0_SYSERRICLR1	(SYSC0_1.unSYSERRICLR1.u32Register)  /*@rg@*/
#define SYSC0_SYSERRICLR1_TRGERRICLR	(*(volatile uint_io8_t*)0xB0801500)  /*@bfbba@*/
#define SYSC0_SYSERRICLR1_RUNTRGERRICLR	(*(volatile uint_io8_t*)0xB0801501)  /*@bfbba@*/
#define SYSC0_SYSERRICLR1_PSSTRGCICLR0	(*(volatile uint_io8_t*)0xB0801502)  /*@bfbba@*/
#define SYSC0_SYSERRICLR1_PSSENERRICLR0	(*(volatile uint_io8_t*)0xB0801503)  /*@bfbba@*/
#define SYSC0_SYSERRICLR1_RUNERRICLR0	(*(volatile uint_io8_t*)0xB0801504)  /*@bfbba@*/
#define SYSC0_SYSERRICLR1_RUNWKERRICLR0	(*(volatile uint_io8_t*)0xB0801505)  /*@bfbba@*/
#define SYSC0_SYSERRICLR1_PSSERRICLR0	(*(volatile uint_io8_t*)0xB0801506)  /*@bfbba@*/

typedef struct stc_sysc0_1_syserriclr1_field{
    uint_io32_t		u1TRGERRICLR:1;
    uint_io32_t		u1RUNTRGERRICLR:1;
    uint_io32_t		u1PSSTRGCICLR0:1;
    uint_io32_t		u1PSSENERRICLR0:1;
    uint_io32_t		u1RUNERRICLR0:1;
    uint_io32_t		u1RUNWKERRICLR0:1;
    uint_io32_t		u1PSSERRICLR0:1;
    uint_io32_t		:25;
}stc_sysc0_1_syserriclr1_field_t;

typedef union un_sysc0_1_syserriclr1{
    uint_io32_t		u32Register;
    stc_sysc0_1_syserriclr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_syserriclr1_t;

/* SYSPROSTSR */
#define SYSC0_SYSPROSTSR	(SYSC0_1.unSYSPROSTSR.u32Register)  /*@rg@*/
#define SYSC0_SYSPROSTSR_RUNPSTS	(*(volatile uint_io8_t*)0xB0801520)  /*@bfbba@*/
#define SYSC0_SYSPROSTSR_RUNWKPSTS	(*(volatile uint_io8_t*)0xB0801521)  /*@bfbba@*/
#define SYSC0_SYSPROSTSR_PSSPSTS	(*(volatile uint_io8_t*)0xB0801522)  /*@bfbba@*/

typedef struct stc_sysc0_1_sysprostsr_field{
    uint_io32_t		u1RUNPSTS:1;
    uint_io32_t		u1RUNWKPSTS:1;
    uint_io32_t		u1PSSPSTS:1;
    uint_io32_t		:29;
}stc_sysc0_1_sysprostsr_field_t;

typedef union un_sysc0_1_sysprostsr{
    uint_io32_t		u32Register;
    stc_sysc0_1_sysprostsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_sysprostsr_t;

/* SYSRUNPEFR */
#define SYSC0_SYSRUNPEFR	(SYSC0_1.unSYSRUNPEFR.u32Register)  /*@rg@*/
#define SYSC0_SYSRUNPEFR_PEF0	(*(volatile uint_io8_t*)0xB0801540)  /*@bfbba@*/
#define SYSC0_SYSRUNPEFR_PEF1	(*(volatile uint_io8_t*)0xB0801541)  /*@bfbba@*/
#define SYSC0_SYSRUNPEFR_PEF2	(*(volatile uint_io8_t*)0xB0801542)  /*@bfbba@*/
#define SYSC0_SYSRUNPEFR_PEF3	(*(volatile uint_io8_t*)0xB0801543)  /*@bfbba@*/
#define SYSC0_SYSRUNPEFR_PEF4	(*(volatile uint_io8_t*)0xB0801544)  /*@bfbba@*/
#define SYSC0_SYSRUNPEFR_PEF5	(*(volatile uint_io8_t*)0xB0801545)  /*@bfbba@*/
#define SYSC0_SYSRUNPEFR_PEF6	(*(volatile uint_io8_t*)0xB0801546)  /*@bfbba@*/

typedef struct stc_sysc0_1_sysrunpefr_field{
    uint_io32_t		u1PEF0:1;
    uint_io32_t		u1PEF1:1;
    uint_io32_t		u1PEF2:1;
    uint_io32_t		u1PEF3:1;
    uint_io32_t		u1PEF4:1;
    uint_io32_t		u1PEF5:1;
    uint_io32_t		u1PEF6:1;
    uint_io32_t		:25;
}stc_sysc0_1_sysrunpefr_field_t;

typedef union un_sysc0_1_sysrunpefr{
    uint_io32_t		u32Register;
    stc_sysc0_1_sysrunpefr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_sysrunpefr_t;

/* SYSPSSPEFR */
#define SYSC0_SYSPSSPEFR	(SYSC0_1.unSYSPSSPEFR.u32Register)  /*@rg@*/
#define SYSC0_SYSPSSPEFR_PEF0	(*(volatile uint_io8_t*)0xB0801560)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF1	(*(volatile uint_io8_t*)0xB0801561)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF3	(*(volatile uint_io8_t*)0xB0801563)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF4	(*(volatile uint_io8_t*)0xB0801564)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF5	(*(volatile uint_io8_t*)0xB0801565)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF6	(*(volatile uint_io8_t*)0xB0801566)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF7	(*(volatile uint_io8_t*)0xB0801567)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF8	(*(volatile uint_io8_t*)0xB0801568)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF9	(*(volatile uint_io8_t*)0xB0801569)  /*@bfbba@*/
#define SYSC0_SYSPSSPEFR_PEF10	(*(volatile uint_io8_t*)0xB080156A)  /*@bfbba@*/

typedef struct stc_sysc0_1_syspsspefr_field{
    uint_io32_t		u1PEF0:1;
    uint_io32_t		u1PEF1:1;
    uint_io32_t		:1;
    uint_io32_t		u1PEF3:1;
    uint_io32_t		u1PEF4:1;
    uint_io32_t		u1PEF5:1;
    uint_io32_t		u1PEF6:1;
    uint_io32_t		u1PEF7:1;
    uint_io32_t		u1PEF8:1;
    uint_io32_t		u1PEF9:1;
    uint_io32_t		u1PEF10:1;
    uint_io32_t		:21;
}stc_sysc0_1_syspsspefr_field_t;

typedef union un_sysc0_1_syspsspefr{
    uint_io32_t		u32Register;
    stc_sysc0_1_syspsspefr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_1_syspsspefr_t;


typedef struct stc_sysc0_1{
    un_sysc0_1_protkeyr_t	unPROTKEYR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[124];	/* 0x00000004 */
    un_sysc0_1_runpdcfgr_t	unRUNPDCFGR;	/* 0x00000080 */
    un_sysc0_1_runcksrer_t	unRUNCKSRER;	/* 0x00000084 */
    un_sysc0_1_runckselr_t	unRUNCKSELR;	/* 0x00000088 */
    un_sysc0_1_runcker_t	unRUNCKER;	/* 0x0000008C */
    un_sysc0_1_runckdivr_t	unRUNCKDIVR;	/* 0x00000090 */
    un_sysc0_1_runpll0cntr_t	unRUNPLL0CNTR;	/* 0x00000094 */
    un_sysc0_1_runpll1cntr_t	unRUNPLL1CNTR;	/* 0x00000098 */
    un_sysc0_1_runpll2cntr_t	unRUNPLL2CNTR;	/* 0x0000009C */
    un_sysc0_1_runpll3cntr_t	unRUNPLL3CNTR;	/* 0x000000A0 */
    un_sysc0_1_runsscg0cntr0_t	unRUNSSCG0CNTR0;	/* 0x000000A4 */
    un_sysc0_1_runsscg0cntr1_t	unRUNSSCG0CNTR1;	/* 0x000000A8 */
    un_sysc0_1_runsscg1cntr0_t	unRUNSSCG1CNTR0;	/* 0x000000AC */
    un_sysc0_1_runsscg1cntr1_t	unRUNSSCG1CNTR1;	/* 0x000000B0 */
    un_sysc0_1_runsscg2cntr0_t	unRUNSSCG2CNTR0;	/* 0x000000B4 */
    un_sysc0_1_runsscg2cntr1_t	unRUNSSCG2CNTR1;	/* 0x000000B8 */
    un_sysc0_1_runsscg3cntr0_t	unRUNSSCG3CNTR0;	/* 0x000000BC */
    un_sysc0_1_runsscg3cntr1_t	unRUNSSCG3CNTR1;	/* 0x000000C0 */
    un_sysc0_1_runlvdcfgr_t	unRUNLVDCFGR;	/* 0x000000C4 */
    un_sysc0_1_runcsvcfgr_t	unRUNCSVCFGR;	/* 0x000000C8 */
    un_sysc0_1_runregcfgr_t	unRUNREGCFGR;	/* 0x000000CC */
    uint_io8_t	au8Reserved1[44];	/* 0x000000D0 */
    un_sysc0_1_trgruncntr_t	unTRGRUNCNTR;	/* 0x000000FC */
    un_sysc0_1_psspdcfgr_t	unPSSPDCFGR;	/* 0x00000100 */
    un_sysc0_1_psscksrer_t	unPSSCKSRER;	/* 0x00000104 */
    un_sysc0_1_pssckselr_t	unPSSCKSELR;	/* 0x00000108 */
    un_sysc0_1_psscker_t	unPSSCKER;	/* 0x0000010C */
    un_sysc0_1_pssckdivr_t	unPSSCKDIVR;	/* 0x00000110 */
    un_sysc0_1_psspll0cntr_t	unPSSPLL0CNTR;	/* 0x00000114 */
    un_sysc0_1_psspll1cntr_t	unPSSPLL1CNTR;	/* 0x00000118 */
    un_sysc0_1_psspll2cntr_t	unPSSPLL2CNTR;	/* 0x0000011C */
    un_sysc0_1_psspll3cntr_t	unPSSPLL3CNTR;	/* 0x00000120 */
    un_sysc0_1_psssscg0cntr0_t	unPSSSSCG0CNTR0;	/* 0x00000124 */
    un_sysc0_1_psssscg0cntr1_t	unPSSSSCG0CNTR1;	/* 0x00000128 */
    un_sysc0_1_psssscg1cntr0_t	unPSSSSCG1CNTR0;	/* 0x0000012C */
    un_sysc0_1_psssscg1cntr1_t	unPSSSSCG1CNTR1;	/* 0x00000130 */
    un_sysc0_1_psssscg2cntr0_t	unPSSSSCG2CNTR0;	/* 0x00000134 */
    un_sysc0_1_psssscg2cntr1_t	unPSSSSCG2CNTR1;	/* 0x00000138 */
    un_sysc0_1_psssscg3cntr0_t	unPSSSSCG3CNTR0;	/* 0x0000013C */
    un_sysc0_1_psssscg3cntr1_t	unPSSSSCG3CNTR1;	/* 0x00000140 */
    un_sysc0_1_psslvdcfgr_t	unPSSLVDCFGR;	/* 0x00000144 */
    un_sysc0_1_psscsvcfgr_t	unPSSCSVCFGR;	/* 0x00000148 */
    un_sysc0_1_pssregcfgr_t	unPSSREGCFGR;	/* 0x0000014C */
    uint_io8_t	au8Reserved2[44];	/* 0x00000150 */
    un_sysc0_1_pssenr_0_t	unPSSENR_0;	/* 0x0000017C */
    uint_io8_t	au8Reserved3[3];	/* 0x0000017D */
    un_sysc0_1_apppdcfgr_t	unAPPPDCFGR;	/* 0x00000180 */
    un_sysc0_1_appcksrer_t	unAPPCKSRER;	/* 0x00000184 */
    un_sysc0_1_appckselr_t	unAPPCKSELR;	/* 0x00000188 */
    un_sysc0_1_appcker_t	unAPPCKER;	/* 0x0000018C */
    un_sysc0_1_appckdivr_t	unAPPCKDIVR;	/* 0x00000190 */
    un_sysc0_1_apppll0cntr_t	unAPPPLL0CNTR;	/* 0x00000194 */
    un_sysc0_1_apppll1cntr_t	unAPPPLL1CNTR;	/* 0x00000198 */
    un_sysc0_1_apppll2cntr_t	unAPPPLL2CNTR;	/* 0x0000019C */
    un_sysc0_1_apppll3cntr_t	unAPPPLL3CNTR;	/* 0x000001A0 */
    un_sysc0_1_appsscg0cntr0_t	unAPPSSCG0CNTR0;	/* 0x000001A4 */
    un_sysc0_1_appsscg0cntr1_t	unAPPSSCG0CNTR1;	/* 0x000001A8 */
    un_sysc0_1_appsscg1cntr0_t	unAPPSSCG1CNTR0;	/* 0x000001AC */
    un_sysc0_1_appsscg1cntr1_t	unAPPSSCG1CNTR1;	/* 0x000001B0 */
    un_sysc0_1_appsscg2cntr0_t	unAPPSSCG2CNTR0;	/* 0x000001B4 */
    un_sysc0_1_appsscg2cntr1_t	unAPPSSCG2CNTR1;	/* 0x000001B8 */
    un_sysc0_1_appsscg3cntr0_t	unAPPSSCG3CNTR0;	/* 0x000001BC */
    un_sysc0_1_appsscg3cntr1_t	unAPPSSCG3CNTR1;	/* 0x000001C0 */
    un_sysc0_1_applvdcfgr_t	unAPPLVDCFGR;	/* 0x000001C4 */
    un_sysc0_1_appcsvcfgr_t	unAPPCSVCFGR;	/* 0x000001C8 */
    un_sysc0_1_appregcfgr_t	unAPPREGCFGR;	/* 0x000001CC */
    uint_io8_t	au8Reserved4[48];	/* 0x000001D0 */
    un_sysc0_1_stspdcfgr_t	unSTSPDCFGR;	/* 0x00000200 */
    un_sysc0_1_stscksrer_t	unSTSCKSRER;	/* 0x00000204 */
    un_sysc0_1_stsckselr_t	unSTSCKSELR;	/* 0x00000208 */
    un_sysc0_1_stscker_t	unSTSCKER;	/* 0x0000020C */
    un_sysc0_1_stsckdivr_t	unSTSCKDIVR;	/* 0x00000210 */
    un_sysc0_1_stspll0cntr_t	unSTSPLL0CNTR;	/* 0x00000214 */
    un_sysc0_1_stspll1cntr_t	unSTSPLL1CNTR;	/* 0x00000218 */
    un_sysc0_1_stspll2cntr_t	unSTSPLL2CNTR;	/* 0x0000021C */
    un_sysc0_1_stspll3cntr_t	unSTSPLL3CNTR;	/* 0x00000220 */
    un_sysc0_1_stssscg0cntr0_t	unSTSSSCG0CNTR0;	/* 0x00000224 */
    un_sysc0_1_stssscg0cntr1_t	unSTSSSCG0CNTR1;	/* 0x00000228 */
    un_sysc0_1_stssscg1cntr0_t	unSTSSSCG1CNTR0;	/* 0x0000022C */
    un_sysc0_1_stssscg1cntr1_t	unSTSSSCG1CNTR1;	/* 0x00000230 */
    un_sysc0_1_stssscg2cntr0_t	unSTSSSCG2CNTR0;	/* 0x00000234 */
    un_sysc0_1_stssscg2cntr1_t	unSTSSSCG2CNTR1;	/* 0x00000238 */
    un_sysc0_1_stssscg3cntr0_t	unSTSSSCG3CNTR0;	/* 0x0000023C */
    un_sysc0_1_stssscg3cntr1_t	unSTSSSCG3CNTR1;	/* 0x00000240 */
    un_sysc0_1_stslvdcfgr_t	unSTSLVDCFGR;	/* 0x00000244 */
    un_sysc0_1_stscsvcfgr_t	unSTSCSVCFGR;	/* 0x00000248 */
    un_sysc0_1_stsregcfgr_t	unSTSREGCFGR;	/* 0x0000024C */
    uint_io8_t	au8Reserved5[56];	/* 0x00000250 */
    un_sysc0_1_sysstsr_t	unSYSSTSR;	/* 0x00000288 */
    un_sysc0_1_sysinter_t	unSYSINTER;	/* 0x0000028C */
    un_sysc0_1_sysiclr_t	unSYSICLR;	/* 0x00000290 */
    un_sysc0_1_syserrir0_t	unSYSERRIR0;	/* 0x00000294 */
    un_sysc0_1_syserrir1_t	unSYSERRIR1;	/* 0x00000298 */
    un_sysc0_1_syserriclr0_t	unSYSERRICLR0;	/* 0x0000029C */
    un_sysc0_1_syserriclr1_t	unSYSERRICLR1;	/* 0x000002A0 */
    un_sysc0_1_sysprostsr_t	unSYSPROSTSR;	/* 0x000002A4 */
    un_sysc0_1_sysrunpefr_t	unSYSRUNPEFR;	/* 0x000002A8 */
    un_sysc0_1_syspsspefr_t	unSYSPSSPEFR;	/* 0x000002AC */
    uint_io8_t	au8Reserved6[80];	/* 0x000002B0 */
}stc_sysc0_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc0_1_t	stcSYSC0_1;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 768(0x300) bytes */


/* SYSC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC_2	stcSYSC_2
#else /* __IO_DEFINE */
#define SYSC_2	(*((volatile stc_sysc_2_t*)0xB0600300))
#endif /* __IO_DEFINE */

/* CSVMOCFGR0 */
#define SYSC_CSVMOCFGR0	(SYSC_2.unCSVMOCFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVMOCFGR0_LOWTHR	(SYSC_2.unCSVMOCFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVMOCFGR0_UPTHR	(SYSC_2.unCSVMOCFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvmocfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvmocfgr0_field_t;

typedef union un_sysc_2_csvmocfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvmocfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvmocfgr0_t;

/* CSVMOCFGR1 */
#define SYSC_CSVMOCFGR1	(SYSC_2.unCSVMOCFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVMOCFGR1_REFCLKWND	(SYSC_2.unCSVMOCFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVMOCFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB0801830)  /*@bfbba@*/
#define SYSC_CSVMOCFGR1_REFCLKSEL	(*(volatile uint_io8_t*)0xB0801838)  /*@bfbba@*/

typedef struct stc_sysc_2_csvmocfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:7;
    uint_io32_t		u1REFCLKSEL:1;
    uint_io32_t		:7;
}stc_sysc_2_csvmocfgr1_field_t;

typedef union un_sysc_2_csvmocfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvmocfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvmocfgr1_t;

/* CSVSOCFGR0 */
#define SYSC_CSVSOCFGR0	(SYSC_2.unCSVSOCFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVSOCFGR0_LOWTHR	(SYSC_2.unCSVSOCFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVSOCFGR0_UPTHR	(SYSC_2.unCSVSOCFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvsocfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvsocfgr0_field_t;

typedef union un_sysc_2_csvsocfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsocfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsocfgr0_t;

/* CSVSOCFGR1 */
#define SYSC_CSVSOCFGR1	(SYSC_2.unCSVSOCFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVSOCFGR1_REFCLKWND	(SYSC_2.unCSVSOCFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVSOCFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB0801870)  /*@bfbba@*/

typedef struct stc_sysc_2_csvsocfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvsocfgr1_field_t;

typedef union un_sysc_2_csvsocfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsocfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsocfgr1_t;

/* CSVPLL0CFGR0 */
#define SYSC_CSVPLL0CFGR0	(SYSC_2.unCSVPLL0CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVPLL0CFGR0_LOWTHR	(SYSC_2.unCSVPLL0CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVPLL0CFGR0_UPTHR	(SYSC_2.unCSVPLL0CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvpll0cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvpll0cfgr0_field_t;

typedef union un_sysc_2_csvpll0cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll0cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll0cfgr0_t;

/* CSVPLL0CFGR1 */
#define SYSC_CSVPLL0CFGR1	(SYSC_2.unCSVPLL0CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVPLL0CFGR1_REFCLKWND	(SYSC_2.unCSVPLL0CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVPLL0CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB08018B0)  /*@bfbba@*/

typedef struct stc_sysc_2_csvpll0cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvpll0cfgr1_field_t;

typedef union un_sysc_2_csvpll0cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll0cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll0cfgr1_t;

/* CSVPLL1CFGR0 */
#define SYSC_CSVPLL1CFGR0	(SYSC_2.unCSVPLL1CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVPLL1CFGR0_LOWTHR	(SYSC_2.unCSVPLL1CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVPLL1CFGR0_UPTHR	(SYSC_2.unCSVPLL1CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvpll1cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvpll1cfgr0_field_t;

typedef union un_sysc_2_csvpll1cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll1cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll1cfgr0_t;

/* CSVPLL1CFGR1 */
#define SYSC_CSVPLL1CFGR1	(SYSC_2.unCSVPLL1CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVPLL1CFGR1_REFCLKWND	(SYSC_2.unCSVPLL1CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVPLL1CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB08018F0)  /*@bfbba@*/

typedef struct stc_sysc_2_csvpll1cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvpll1cfgr1_field_t;

typedef union un_sysc_2_csvpll1cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll1cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll1cfgr1_t;

/* CSVPLL2CFGR0 */
#define SYSC_CSVPLL2CFGR0	(SYSC_2.unCSVPLL2CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVPLL2CFGR0_LOWTHR	(SYSC_2.unCSVPLL2CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVPLL2CFGR0_UPTHR	(SYSC_2.unCSVPLL2CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvpll2cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvpll2cfgr0_field_t;

typedef union un_sysc_2_csvpll2cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll2cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll2cfgr0_t;

/* CSVPLL2CFGR1 */
#define SYSC_CSVPLL2CFGR1	(SYSC_2.unCSVPLL2CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVPLL2CFGR1_REFCLKWND	(SYSC_2.unCSVPLL2CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVPLL2CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB0801930)  /*@bfbba@*/

typedef struct stc_sysc_2_csvpll2cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvpll2cfgr1_field_t;

typedef union un_sysc_2_csvpll2cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll2cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll2cfgr1_t;

/* CSVPLL3CFGR0 */
#define SYSC_CSVPLL3CFGR0	(SYSC_2.unCSVPLL3CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVPLL3CFGR0_LOWTHR	(SYSC_2.unCSVPLL3CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVPLL3CFGR0_UPTHR	(SYSC_2.unCSVPLL3CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvpll3cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvpll3cfgr0_field_t;

typedef union un_sysc_2_csvpll3cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll3cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll3cfgr0_t;

/* CSVPLL3CFGR1 */
#define SYSC_CSVPLL3CFGR1	(SYSC_2.unCSVPLL3CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVPLL3CFGR1_REFCLKWND	(SYSC_2.unCSVPLL3CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVPLL3CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB0801970)  /*@bfbba@*/

typedef struct stc_sysc_2_csvpll3cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvpll3cfgr1_field_t;

typedef union un_sysc_2_csvpll3cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvpll3cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvpll3cfgr1_t;

/* CSVSP0CFGR0 */
#define SYSC_CSVSP0CFGR0	(SYSC_2.unCSVSP0CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVSP0CFGR0_LOWTHR	(SYSC_2.unCSVSP0CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVSP0CFGR0_UPTHR	(SYSC_2.unCSVSP0CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvsp0cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvsp0cfgr0_field_t;

typedef union un_sysc_2_csvsp0cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp0cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp0cfgr0_t;

/* CSVSP0CFGR1 */
#define SYSC_CSVSP0CFGR1	(SYSC_2.unCSVSP0CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVSP0CFGR1_REFCLKWND	(SYSC_2.unCSVSP0CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVSP0CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB08019B0)  /*@bfbba@*/

typedef struct stc_sysc_2_csvsp0cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvsp0cfgr1_field_t;

typedef union un_sysc_2_csvsp0cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp0cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp0cfgr1_t;

/* CSVSP1CFGR0 */
#define SYSC_CSVSP1CFGR0	(SYSC_2.unCSVSP1CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVSP1CFGR0_LOWTHR	(SYSC_2.unCSVSP1CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVSP1CFGR0_UPTHR	(SYSC_2.unCSVSP1CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvsp1cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvsp1cfgr0_field_t;

typedef union un_sysc_2_csvsp1cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp1cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp1cfgr0_t;

/* CSVSP1CFGR1 */
#define SYSC_CSVSP1CFGR1	(SYSC_2.unCSVSP1CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVSP1CFGR1_REFCLKWND	(SYSC_2.unCSVSP1CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVSP1CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB08019F0)  /*@bfbba@*/

typedef struct stc_sysc_2_csvsp1cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvsp1cfgr1_field_t;

typedef union un_sysc_2_csvsp1cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp1cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp1cfgr1_t;

/* CSVSP2CFGR0 */
#define SYSC_CSVSP2CFGR0	(SYSC_2.unCSVSP2CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVSP2CFGR0_LOWTHR	(SYSC_2.unCSVSP2CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVSP2CFGR0_UPTHR	(SYSC_2.unCSVSP2CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvsp2cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvsp2cfgr0_field_t;

typedef union un_sysc_2_csvsp2cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp2cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp2cfgr0_t;

/* CSVSP2CFGR1 */
#define SYSC_CSVSP2CFGR1	(SYSC_2.unCSVSP2CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVSP2CFGR1_REFCLKWND	(SYSC_2.unCSVSP2CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVSP2CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB0801A30)  /*@bfbba@*/

typedef struct stc_sysc_2_csvsp2cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvsp2cfgr1_field_t;

typedef union un_sysc_2_csvsp2cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp2cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp2cfgr1_t;

/* CSVSP3CFGR0 */
#define SYSC_CSVSP3CFGR0	(SYSC_2.unCSVSP3CFGR0.u32Register)  /*@rg@*/
#define SYSC_CSVSP3CFGR0_LOWTHR	(SYSC_2.unCSVSP3CFGR0.stcField.u10LOWTHR)  /*@bf@*/
#define SYSC_CSVSP3CFGR0_UPTHR	(SYSC_2.unCSVSP3CFGR0.stcField.u12UPTHR)  /*@bf@*/

typedef struct stc_sysc_2_csvsp3cfgr0_field{
    uint_io32_t		u10LOWTHR:10;
    uint_io32_t		:6;
    uint_io32_t		u12UPTHR:12;
    uint_io32_t		:4;
}stc_sysc_2_csvsp3cfgr0_field_t;

typedef union un_sysc_2_csvsp3cfgr0{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp3cfgr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp3cfgr0_t;

/* CSVSP3CFGR1 */
#define SYSC_CSVSP3CFGR1	(SYSC_2.unCSVSP3CFGR1.u32Register)  /*@rg@*/
#define SYSC_CSVSP3CFGR1_REFCLKWND	(SYSC_2.unCSVSP3CFGR1.stcField.u10REFCLKWND)  /*@bf@*/
#define SYSC_CSVSP3CFGR1_JDGSEL	(*(volatile uint_io8_t*)0xB0801A70)  /*@bfbba@*/

typedef struct stc_sysc_2_csvsp3cfgr1_field{
    uint_io32_t		u10REFCLKWND:10;
    uint_io32_t		:6;
    uint_io32_t		u1JDGSEL:1;
    uint_io32_t		:15;
}stc_sysc_2_csvsp3cfgr1_field_t;

typedef union un_sysc_2_csvsp3cfgr1{
    uint_io32_t		u32Register;
    stc_sysc_2_csvsp3cfgr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvsp3cfgr1_t;

/* CSVFCRCFGR */
#define SYSC_CSVFCRCFGR	(SYSC_2.unCSVFCRCFGR.u32Register)  /*@rg@*/
#define SYSC_CSVFCRCFGR_REFCLKDIV	(SYSC_2.unCSVFCRCFGR.stcField.u3REFCLKDIV)  /*@bf@*/

typedef struct stc_sysc_2_csvfcrcfgr_field{
    uint_io32_t		u3REFCLKDIV:3;
    uint_io32_t		:29;
}stc_sysc_2_csvfcrcfgr_field_t;

typedef union un_sysc_2_csvfcrcfgr{
    uint_io32_t		u32Register;
    stc_sysc_2_csvfcrcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvfcrcfgr_t;

/* CSVSCRCFGR */
#define SYSC_CSVSCRCFGR	(SYSC_2.unCSVSCRCFGR.u32Register)  /*@rg@*/
#define SYSC_CSVSCRCFGR_REFCLKDIV	(SYSC_2.unCSVSCRCFGR.stcField.u3REFCLKDIV)  /*@bf@*/

typedef struct stc_sysc_2_csvscrcfgr_field{
    uint_io32_t		u3REFCLKDIV:3;
    uint_io32_t		:29;
}stc_sysc_2_csvscrcfgr_field_t;

typedef union un_sysc_2_csvscrcfgr{
    uint_io32_t		u32Register;
    stc_sysc_2_csvscrcfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvscrcfgr_t;

/* CSVOUTER */
#define SYSC_CSVOUTER	(SYSC_2.unCSVOUTER.u32Register)  /*@rg@*/
#define SYSC_CSVOUTER_OUTEN	(*(volatile uint_io8_t*)0xB0801B00)  /*@bfbba@*/

typedef struct stc_sysc_2_csvouter_field{
    uint_io32_t		u1OUTEN:1;
    uint_io32_t		:31;
}stc_sysc_2_csvouter_field_t;

typedef union un_sysc_2_csvouter{
    uint_io32_t		u32Register;
    stc_sysc_2_csvouter_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvouter_t;

/* CSVTESTR */
#define SYSC_CSVTESTR	(SYSC_2.unCSVTESTR.u32Register)  /*@rg@*/
#define SYSC_CSVTESTR_MO0CLKGATE	(*(volatile uint_io8_t*)0xB0801B20)  /*@bfbba@*/
#define SYSC_CSVTESTR_SO0CLKGATE	(*(volatile uint_io8_t*)0xB0801B21)  /*@bfbba@*/
#define SYSC_CSVTESTR_MO1CLKGATE	(*(volatile uint_io8_t*)0xB0801B22)  /*@bfbba@*/
#define SYSC_CSVTESTR_SO1CLKGATE	(*(volatile uint_io8_t*)0xB0801B23)  /*@bfbba@*/
#define SYSC_CSVTESTR_PLL0CLKGATE	(*(volatile uint_io8_t*)0xB0801B28)  /*@bfbba@*/
#define SYSC_CSVTESTR_PLL1CLKGATE	(*(volatile uint_io8_t*)0xB0801B29)  /*@bfbba@*/
#define SYSC_CSVTESTR_PLL2CLKGATE	(*(volatile uint_io8_t*)0xB0801B2A)  /*@bfbba@*/
#define SYSC_CSVTESTR_PLL3CLKGATE	(*(volatile uint_io8_t*)0xB0801B2B)  /*@bfbba@*/
#define SYSC_CSVTESTR_SP0CLKGATE	(*(volatile uint_io8_t*)0xB0801B30)  /*@bfbba@*/
#define SYSC_CSVTESTR_SP1CLKGATE	(*(volatile uint_io8_t*)0xB0801B31)  /*@bfbba@*/
#define SYSC_CSVTESTR_SP2CLKGATE	(*(volatile uint_io8_t*)0xB0801B32)  /*@bfbba@*/
#define SYSC_CSVTESTR_SP3CLKGATE	(*(volatile uint_io8_t*)0xB0801B33)  /*@bfbba@*/
#define SYSC_CSVTESTR_FCRCLKGATE	(*(volatile uint_io8_t*)0xB0801B38)  /*@bfbba@*/
#define SYSC_CSVTESTR_SCRCLKGATE	(*(volatile uint_io8_t*)0xB0801B39)  /*@bfbba@*/

typedef struct stc_sysc_2_csvtestr_field{
    uint_io32_t		u1MO0CLKGATE:1;
    uint_io32_t		u1SO0CLKGATE:1;
    uint_io32_t		u1MO1CLKGATE:1;
    uint_io32_t		u1SO1CLKGATE:1;
    uint_io32_t		:4;
    uint_io32_t		u1PLL0CLKGATE:1;
    uint_io32_t		u1PLL1CLKGATE:1;
    uint_io32_t		u1PLL2CLKGATE:1;
    uint_io32_t		u1PLL3CLKGATE:1;
    uint_io32_t		:4;
    uint_io32_t		u1SP0CLKGATE:1;
    uint_io32_t		u1SP1CLKGATE:1;
    uint_io32_t		u1SP2CLKGATE:1;
    uint_io32_t		u1SP3CLKGATE:1;
    uint_io32_t		:4;
    uint_io32_t		u1FCRCLKGATE:1;
    uint_io32_t		u1SCRCLKGATE:1;
    uint_io32_t		:6;
}stc_sysc_2_csvtestr_field_t;

typedef union un_sysc_2_csvtestr{
    uint_io32_t		u32Register;
    stc_sysc_2_csvtestr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_2_csvtestr_t;


typedef struct stc_sysc_2{
    un_sysc_2_csvmocfgr0_t	unCSVMOCFGR0;	/* 0x00000000 */
    un_sysc_2_csvmocfgr1_t	unCSVMOCFGR1;	/* 0x00000004 */
    un_sysc_2_csvsocfgr0_t	unCSVSOCFGR0;	/* 0x00000008 */
    un_sysc_2_csvsocfgr1_t	unCSVSOCFGR1;	/* 0x0000000C */
    un_sysc_2_csvpll0cfgr0_t	unCSVPLL0CFGR0;	/* 0x00000010 */
    un_sysc_2_csvpll0cfgr1_t	unCSVPLL0CFGR1;	/* 0x00000014 */
    un_sysc_2_csvpll1cfgr0_t	unCSVPLL1CFGR0;	/* 0x00000018 */
    un_sysc_2_csvpll1cfgr1_t	unCSVPLL1CFGR1;	/* 0x0000001C */
    un_sysc_2_csvpll2cfgr0_t	unCSVPLL2CFGR0;	/* 0x00000020 */
    un_sysc_2_csvpll2cfgr1_t	unCSVPLL2CFGR1;	/* 0x00000024 */
    un_sysc_2_csvpll3cfgr0_t	unCSVPLL3CFGR0;	/* 0x00000028 */
    un_sysc_2_csvpll3cfgr1_t	unCSVPLL3CFGR1;	/* 0x0000002C */
    un_sysc_2_csvsp0cfgr0_t	unCSVSP0CFGR0;	/* 0x00000030 */
    un_sysc_2_csvsp0cfgr1_t	unCSVSP0CFGR1;	/* 0x00000034 */
    un_sysc_2_csvsp1cfgr0_t	unCSVSP1CFGR0;	/* 0x00000038 */
    un_sysc_2_csvsp1cfgr1_t	unCSVSP1CFGR1;	/* 0x0000003C */
    un_sysc_2_csvsp2cfgr0_t	unCSVSP2CFGR0;	/* 0x00000040 */
    un_sysc_2_csvsp2cfgr1_t	unCSVSP2CFGR1;	/* 0x00000044 */
    un_sysc_2_csvsp3cfgr0_t	unCSVSP3CFGR0;	/* 0x00000048 */
    un_sysc_2_csvsp3cfgr1_t	unCSVSP3CFGR1;	/* 0x0000004C */
    un_sysc_2_csvfcrcfgr_t	unCSVFCRCFGR;	/* 0x00000050 */
    un_sysc_2_csvscrcfgr_t	unCSVSCRCFGR;	/* 0x00000054 */
    uint_io8_t	au8Reserved0[8];	/* 0x00000058 */
    un_sysc_2_csvouter_t	unCSVOUTER;	/* 0x00000060 */
    un_sysc_2_csvtestr_t	unCSVTESTR;	/* 0x00000064 */
    uint_io8_t	au8Reserved1[24];	/* 0x00000068 */
}stc_sysc_2_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc_2_t	stcSYSC_2;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 128(0x80) bytes */


/* SYSC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC_3	stcSYSC_3
#else /* __IO_DEFINE */
#define SYSC_3	(*((volatile stc_sysc_3_t*)0xB0600380))
#endif /* __IO_DEFINE */

/* RSTCNTR */
#define SYSC_RSTCNTR	(SYSC_3.unRSTCNTR.u32Register)  /*@rg@*/
#define SYSC_RSTCNTR_SWRST	(SYSC_3.unRSTCNTR.au8Byte[0])  /*@bfbyte@*/
#define SYSC_RSTCNTR_SWHRST	(SYSC_3.unRSTCNTR.au8Byte[2])  /*@bfbyte@*/
#define SYSC_RSTCNTR_DBGR	(SYSC_3.unRSTCNTR.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_sysc_3_rstcntr_field{
    uint_io32_t		u8SWRST:8;
    uint_io32_t		:8;
    uint_io32_t		u8SWHRST:8;
    uint_io32_t		u8DBGR:8;
}stc_sysc_3_rstcntr_field_t;

typedef union un_sysc_3_rstcntr{
    uint_io32_t		u32Register;
    stc_sysc_3_rstcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_rstcntr_t;

/* RSTCAUSEUR */
#define SYSC_RSTCAUSEUR	(SYSC_3.unRSTCAUSEUR.u32Register)  /*@rg@*/
#define SYSC_RSTCAUSEUR_PONR	(*(volatile uint_io8_t*)0xB0801C80)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_RVD	(*(volatile uint_io8_t*)0xB0801C81)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_INITX	(*(volatile uint_io8_t*)0xB0801C82)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_CKTOR	(*(volatile uint_io8_t*)0xB0801C83)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_RSTX	(*(volatile uint_io8_t*)0xB0801C84)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_LVDH1R	(*(volatile uint_io8_t*)0xB0801C86)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_LVDH2R	(*(volatile uint_io8_t*)0xB0801C87)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_IMR	(*(volatile uint_io8_t*)0xB0801C88)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_SRSTX	(*(volatile uint_io8_t*)0xB0801C89)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_PRFERR	(*(volatile uint_io8_t*)0xB0801C8A)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_HWDR	(*(volatile uint_io8_t*)0xB0801C8B)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_SWDR	(*(volatile uint_io8_t*)0xB0801C8C)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_SRST	(*(volatile uint_io8_t*)0xB0801C90)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_SHRST	(*(volatile uint_io8_t*)0xB0801C94)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_CSVMOR	(*(volatile uint_io8_t*)0xB0801C98)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_CSVSOR	(*(volatile uint_io8_t*)0xB0801C99)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_CSVPR0	(*(volatile uint_io8_t*)0xB0801C9A)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_CSVSR0	(*(volatile uint_io8_t*)0xB0801C9B)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_CSVFCRR	(*(volatile uint_io8_t*)0xB0801C9C)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_CSVSCRR	(*(volatile uint_io8_t*)0xB0801C9D)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_LVDL1R	(*(volatile uint_io8_t*)0xB0801C9E)  /*@bfbba@*/
#define SYSC_RSTCAUSEUR_LVDL2R	(*(volatile uint_io8_t*)0xB0801C9F)  /*@bfbba@*/

typedef struct stc_sysc_3_rstcauseur_field{
    uint_io32_t		u1PONR:1;
    uint_io32_t		u1RVD:1;
    uint_io32_t		u1INITX:1;
    uint_io32_t		u1CKTOR:1;
    uint_io32_t		u1RSTX:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1R:1;
    uint_io32_t		u1LVDH2R:1;
    uint_io32_t		u1IMR:1;
    uint_io32_t		u1SRSTX:1;
    uint_io32_t		u1PRFERR:1;
    uint_io32_t		u1HWDR:1;
    uint_io32_t		u1SWDR:1;
    uint_io32_t		:3;
    uint_io32_t		u1SRST:1;
    uint_io32_t		:3;
    uint_io32_t		u1SHRST:1;
    uint_io32_t		:3;
    uint_io32_t		u1CSVMOR:1;
    uint_io32_t		u1CSVSOR:1;
    uint_io32_t		u1CSVPR0:1;
    uint_io32_t		u1CSVSR0:1;
    uint_io32_t		u1CSVFCRR:1;
    uint_io32_t		u1CSVSCRR:1;
    uint_io32_t		u1LVDL1R:1;
    uint_io32_t		u1LVDL2R:1;
}stc_sysc_3_rstcauseur_field_t;

typedef union un_sysc_3_rstcauseur{
    uint_io32_t		u32Register;
    stc_sysc_3_rstcauseur_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_rstcauseur_t;

/* EXCSVRSTCAUSEUR */
#define SYSC_EXCSVRSTCAUSEUR	(SYSC_3.unEXCSVRSTCAUSEUR.u32Register)  /*@rg@*/
#define SYSC_EXCSVRSTCAUSEUR_CSVPR1	(*(volatile uint_io8_t*)0xB0801CA1)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEUR_CSVPR2	(*(volatile uint_io8_t*)0xB0801CA2)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEUR_CSVPR3	(*(volatile uint_io8_t*)0xB0801CA3)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEUR_CSVSR1	(*(volatile uint_io8_t*)0xB0801CA5)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEUR_CSVSR2	(*(volatile uint_io8_t*)0xB0801CA6)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEUR_CSVSR3	(*(volatile uint_io8_t*)0xB0801CA7)  /*@bfbba@*/

typedef struct stc_sysc_3_excsvrstcauseur_field{
    uint_io32_t		:1;
    uint_io32_t		u1CSVPR1:1;
    uint_io32_t		u1CSVPR2:1;
    uint_io32_t		u1CSVPR3:1;
    uint_io32_t		:1;
    uint_io32_t		u1CSVSR1:1;
    uint_io32_t		u1CSVSR2:1;
    uint_io32_t		u1CSVSR3:1;
    uint_io32_t		:24;
}stc_sysc_3_excsvrstcauseur_field_t;

typedef union un_sysc_3_excsvrstcauseur{
    uint_io32_t		u32Register;
    stc_sysc_3_excsvrstcauseur_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_excsvrstcauseur_t;

/* PDRSTCAUSEUR */
#define SYSC_PDRSTCAUSEUR	(SYSC_3.unPDRSTCAUSEUR.u32Register)  /*@rg@*/
#define SYSC_PDRSTCAUSEUR_PD2R0	(*(volatile uint_io8_t*)0xB0801CC0)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD3R0	(*(volatile uint_io8_t*)0xB0801CC4)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD4R0	(*(volatile uint_io8_t*)0xB0801CC8)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD4R1	(*(volatile uint_io8_t*)0xB0801CC9)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD5R0	(*(volatile uint_io8_t*)0xB0801CCC)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD5R1	(*(volatile uint_io8_t*)0xB0801CCD)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD5R2	(*(volatile uint_io8_t*)0xB0801CCE)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD5R3	(*(volatile uint_io8_t*)0xB0801CCF)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD6R0	(*(volatile uint_io8_t*)0xB0801CD0)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEUR_PD6R1	(*(volatile uint_io8_t*)0xB0801CD1)  /*@bfbba@*/

typedef struct stc_sysc_3_pdrstcauseur_field{
    uint_io32_t		u1PD2R0:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD3R0:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD4R0:1;
    uint_io32_t		u1PD4R1:1;
    uint_io32_t		:2;
    uint_io32_t		u1PD5R0:1;
    uint_io32_t		u1PD5R1:1;
    uint_io32_t		u1PD5R2:1;
    uint_io32_t		u1PD5R3:1;
    uint_io32_t		u1PD6R0:1;
    uint_io32_t		u1PD6R1:1;
    uint_io32_t		:14;
}stc_sysc_3_pdrstcauseur_field_t;

typedef union un_sysc_3_pdrstcauseur{
    uint_io32_t		u32Register;
    stc_sysc_3_pdrstcauseur_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_pdrstcauseur_t;

/* RSTCAUSEBT */
#define SYSC_RSTCAUSEBT	(SYSC_3.unRSTCAUSEBT.u32Register)  /*@rg@*/
#define SYSC_RSTCAUSEBT_PONR	(*(volatile uint_io8_t*)0xB0801D00)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_RVD	(*(volatile uint_io8_t*)0xB0801D01)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_INITX	(*(volatile uint_io8_t*)0xB0801D02)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_CKTOR	(*(volatile uint_io8_t*)0xB0801D03)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_RSTX	(*(volatile uint_io8_t*)0xB0801D04)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_LVDH1R	(*(volatile uint_io8_t*)0xB0801D06)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_LVDH2R	(*(volatile uint_io8_t*)0xB0801D07)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_IMR	(*(volatile uint_io8_t*)0xB0801D08)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_SRSTX	(*(volatile uint_io8_t*)0xB0801D09)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_PRFERR	(*(volatile uint_io8_t*)0xB0801D0A)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_HWDR	(*(volatile uint_io8_t*)0xB0801D0B)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_SWDR	(*(volatile uint_io8_t*)0xB0801D0C)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_SRST	(*(volatile uint_io8_t*)0xB0801D10)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_SHRST	(*(volatile uint_io8_t*)0xB0801D14)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_CSVMOR	(*(volatile uint_io8_t*)0xB0801D18)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_CSVSOR	(*(volatile uint_io8_t*)0xB0801D19)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_CSVPR0	(*(volatile uint_io8_t*)0xB0801D1A)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_CSVSR0	(*(volatile uint_io8_t*)0xB0801D1B)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_CSVFCRR	(*(volatile uint_io8_t*)0xB0801D1C)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_CSVSCRR	(*(volatile uint_io8_t*)0xB0801D1D)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_LVDL1R	(*(volatile uint_io8_t*)0xB0801D1E)  /*@bfbba@*/
#define SYSC_RSTCAUSEBT_LVDL2R	(*(volatile uint_io8_t*)0xB0801D1F)  /*@bfbba@*/

typedef struct stc_sysc_3_rstcausebt_field{
    uint_io32_t		u1PONR:1;
    uint_io32_t		u1RVD:1;
    uint_io32_t		u1INITX:1;
    uint_io32_t		u1CKTOR:1;
    uint_io32_t		u1RSTX:1;
    uint_io32_t		:1;
    uint_io32_t		u1LVDH1R:1;
    uint_io32_t		u1LVDH2R:1;
    uint_io32_t		u1IMR:1;
    uint_io32_t		u1SRSTX:1;
    uint_io32_t		u1PRFERR:1;
    uint_io32_t		u1HWDR:1;
    uint_io32_t		u1SWDR:1;
    uint_io32_t		:3;
    uint_io32_t		u1SRST:1;
    uint_io32_t		:3;
    uint_io32_t		u1SHRST:1;
    uint_io32_t		:3;
    uint_io32_t		u1CSVMOR:1;
    uint_io32_t		u1CSVSOR:1;
    uint_io32_t		u1CSVPR0:1;
    uint_io32_t		u1CSVSR0:1;
    uint_io32_t		u1CSVFCRR:1;
    uint_io32_t		u1CSVSCRR:1;
    uint_io32_t		u1LVDL1R:1;
    uint_io32_t		u1LVDL2R:1;
}stc_sysc_3_rstcausebt_field_t;

typedef union un_sysc_3_rstcausebt{
    uint_io32_t		u32Register;
    stc_sysc_3_rstcausebt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_rstcausebt_t;

/* EXCSVRSTCAUSEBT */
#define SYSC_EXCSVRSTCAUSEBT	(SYSC_3.unEXCSVRSTCAUSEBT.u32Register)  /*@rg@*/
#define SYSC_EXCSVRSTCAUSEBT_CSVPR1	(*(volatile uint_io8_t*)0xB0801D21)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEBT_CSVPR2	(*(volatile uint_io8_t*)0xB0801D22)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEBT_CSVPR3	(*(volatile uint_io8_t*)0xB0801D23)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEBT_CSVSR1	(*(volatile uint_io8_t*)0xB0801D25)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEBT_CSVSR2	(*(volatile uint_io8_t*)0xB0801D26)  /*@bfbba@*/
#define SYSC_EXCSVRSTCAUSEBT_CSVSR3	(*(volatile uint_io8_t*)0xB0801D27)  /*@bfbba@*/

typedef struct stc_sysc_3_excsvrstcausebt_field{
    uint_io32_t		:1;
    uint_io32_t		u1CSVPR1:1;
    uint_io32_t		u1CSVPR2:1;
    uint_io32_t		u1CSVPR3:1;
    uint_io32_t		:1;
    uint_io32_t		u1CSVSR1:1;
    uint_io32_t		u1CSVSR2:1;
    uint_io32_t		u1CSVSR3:1;
    uint_io32_t		:24;
}stc_sysc_3_excsvrstcausebt_field_t;

typedef union un_sysc_3_excsvrstcausebt{
    uint_io32_t		u32Register;
    stc_sysc_3_excsvrstcausebt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_excsvrstcausebt_t;

/* PDRSTCAUSEBT */
#define SYSC_PDRSTCAUSEBT	(SYSC_3.unPDRSTCAUSEBT.u32Register)  /*@rg@*/
#define SYSC_PDRSTCAUSEBT_PD2R0	(*(volatile uint_io8_t*)0xB0801D40)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD3R0	(*(volatile uint_io8_t*)0xB0801D44)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD4R0	(*(volatile uint_io8_t*)0xB0801D48)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD4R1	(*(volatile uint_io8_t*)0xB0801D49)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD5R0	(*(volatile uint_io8_t*)0xB0801D4C)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD5R1	(*(volatile uint_io8_t*)0xB0801D4D)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD5R2	(*(volatile uint_io8_t*)0xB0801D4E)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD5R3	(*(volatile uint_io8_t*)0xB0801D4F)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD6R0	(*(volatile uint_io8_t*)0xB0801D50)  /*@bfbba@*/
#define SYSC_PDRSTCAUSEBT_PD6R1	(*(volatile uint_io8_t*)0xB0801D51)  /*@bfbba@*/

typedef struct stc_sysc_3_pdrstcausebt_field{
    uint_io32_t		u1PD2R0:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD3R0:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD4R0:1;
    uint_io32_t		u1PD4R1:1;
    uint_io32_t		:2;
    uint_io32_t		u1PD5R0:1;
    uint_io32_t		u1PD5R1:1;
    uint_io32_t		u1PD5R2:1;
    uint_io32_t		u1PD5R3:1;
    uint_io32_t		u1PD6R0:1;
    uint_io32_t		u1PD6R1:1;
    uint_io32_t		:14;
}stc_sysc_3_pdrstcausebt_field_t;

typedef union un_sysc_3_pdrstcausebt{
    uint_io32_t		u32Register;
    stc_sysc_3_pdrstcausebt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_pdrstcausebt_t;

/* PDRSTSTATUS */
#define SYSC_PDRSTSTATUS	(SYSC_3.unPDRSTSTATUS.u32Register)  /*@rg@*/
#define SYSC_PDRSTSTATUS_PD2RS0	(*(volatile uint_io8_t*)0xB0801DA0)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD3RS0	(*(volatile uint_io8_t*)0xB0801DA4)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD4RS0	(*(volatile uint_io8_t*)0xB0801DA8)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD4RS1	(*(volatile uint_io8_t*)0xB0801DA9)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD5RS0	(*(volatile uint_io8_t*)0xB0801DAC)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD5RS1	(*(volatile uint_io8_t*)0xB0801DAD)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD5RS2	(*(volatile uint_io8_t*)0xB0801DAE)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD5RS3	(*(volatile uint_io8_t*)0xB0801DAF)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD6RS0	(*(volatile uint_io8_t*)0xB0801DB0)  /*@bfbba@*/
#define SYSC_PDRSTSTATUS_PD6RS1	(*(volatile uint_io8_t*)0xB0801DB1)  /*@bfbba@*/

typedef struct stc_sysc_3_pdrststatus_field{
    uint_io32_t		u1PD2RS0:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD3RS0:1;
    uint_io32_t		:3;
    uint_io32_t		u1PD4RS0:1;
    uint_io32_t		u1PD4RS1:1;
    uint_io32_t		:2;
    uint_io32_t		u1PD5RS0:1;
    uint_io32_t		u1PD5RS1:1;
    uint_io32_t		u1PD5RS2:1;
    uint_io32_t		u1PD5RS3:1;
    uint_io32_t		u1PD6RS0:1;
    uint_io32_t		u1PD6RS1:1;
    uint_io32_t		:14;
}stc_sysc_3_pdrststatus_field_t;

typedef union un_sysc_3_pdrststatus{
    uint_io32_t		u32Register;
    stc_sysc_3_pdrststatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_3_pdrststatus_t;


typedef struct stc_sysc_3{
    un_sysc_3_rstcntr_t	unRSTCNTR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[12];	/* 0x00000004 */
    un_sysc_3_rstcauseur_t	unRSTCAUSEUR;	/* 0x00000010 */
    un_sysc_3_excsvrstcauseur_t	unEXCSVRSTCAUSEUR;	/* 0x00000014 */
    un_sysc_3_pdrstcauseur_t	unPDRSTCAUSEUR;	/* 0x00000018 */
    uint_io8_t	au8Reserved1[4];	/* 0x0000001C */
    un_sysc_3_rstcausebt_t	unRSTCAUSEBT;	/* 0x00000020 */
    un_sysc_3_excsvrstcausebt_t	unEXCSVRSTCAUSEBT;	/* 0x00000024 */
    un_sysc_3_pdrstcausebt_t	unPDRSTCAUSEBT;	/* 0x00000028 */
    uint_io8_t	au8Reserved2[8];	/* 0x0000002C */
    un_sysc_3_pdrststatus_t	unPDRSTSTATUS;	/* 0x00000034 */
    uint_io8_t	au8Reserved3[72];	/* 0x00000038 */
}stc_sysc_3_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc_3_t	stcSYSC_3;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 128(0x80) bytes */


/* SYSC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC_4	stcSYSC_4
#else /* __IO_DEFINE */
#define SYSC_4	(*((volatile stc_sysc_4_t*)0xB0600400))
#endif /* __IO_DEFINE */

/* FCRCTTRGR */
#define SYSC_FCRCTTRGR	(SYSC_4.unFCRCTTRGR.u32Register)  /*@rg@*/
#define SYSC_FCRCTTRGR_CGCPT	(*(volatile uint_io8_t*)0xB0802000)  /*@bfbba@*/
#define SYSC_FCRCTTRGR_CSTOP	(*(volatile uint_io8_t*)0xB0802001)  /*@bfbba@*/
#define SYSC_FCRCTTRGR_TCLR	(*(volatile uint_io8_t*)0xB0802002)  /*@bfbba@*/

typedef struct stc_sysc_4_fcrcttrgr_field{
    uint_io32_t		u1CGCPT:1;
    uint_io32_t		u1CSTOP:1;
    uint_io32_t		u1TCLR:1;
    uint_io32_t		:29;
}stc_sysc_4_fcrcttrgr_field_t;

typedef union un_sysc_4_fcrcttrgr{
    uint_io32_t		u32Register;
    stc_sysc_4_fcrcttrgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_4_fcrcttrgr_t;

/* FCRCTCNTR */
#define SYSC_FCRCTCNTR	(SYSC_4.unFCRCTCNTR.u32Register)  /*@rg@*/
#define SYSC_FCRCTCNTR_MODE	(*(volatile uint_io8_t*)0xB0802020)  /*@bfbba@*/
#define SYSC_FCRCTCNTR_DBGEN	(*(volatile uint_io8_t*)0xB0802021)  /*@bfbba@*/

typedef struct stc_sysc_4_fcrctcntr_field{
    uint_io32_t		u1MODE:1;
    uint_io32_t		u1DBGEN:1;
    uint_io32_t		:30;
}stc_sysc_4_fcrctcntr_field_t;

typedef union un_sysc_4_fcrctcntr{
    uint_io32_t		u32Register;
    stc_sysc_4_fcrctcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_4_fcrctcntr_t;

/* FCRCTCPR */
#define SYSC_FCRCTCPR	(SYSC_4.unFCRCTCPR.u32Register)  /*@rg@*/
#define SYSC_FCRCTCPR_CMPR	(SYSC_4.unFCRCTCPR.au16Halfword[0])  /*@bfhword@*/
#define SYSC_FCRCTCPR_PSCL	(SYSC_4.unFCRCTCPR.stcField.u4PSCL)  /*@bf@*/

typedef struct stc_sysc_4_fcrctcpr_field{
    uint_io32_t		u16CMPR:16;
    uint_io32_t		u4PSCL:4;
    uint_io32_t		:12;
}stc_sysc_4_fcrctcpr_field_t;

typedef union un_sysc_4_fcrctcpr{
    uint_io32_t		u32Register;
    stc_sysc_4_fcrctcpr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_4_fcrctcpr_t;

/* FCRCTSTR */
#define SYSC_FCRCTSTR	(SYSC_4.unFCRCTSTR.u32Register)  /*@rg@*/
#define SYSC_FCRCTSTR_INTF	(*(volatile uint_io8_t*)0xB0802060)  /*@bfbba@*/
#define SYSC_FCRCTSTR_TST	(*(volatile uint_io8_t*)0xB0802061)  /*@bfbba@*/
#define SYSC_FCRCTSTR_BUSY	(*(volatile uint_io8_t*)0xB0802062)  /*@bfbba@*/

typedef struct stc_sysc_4_fcrctstr_field{
    uint_io32_t		u1INTF:1;
    uint_io32_t		u1TST:1;
    uint_io32_t		u1BUSY:1;
    uint_io32_t		:29;
}stc_sysc_4_fcrctstr_field_t;

typedef union un_sysc_4_fcrctstr{
    uint_io32_t		u32Register;
    stc_sysc_4_fcrctstr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_4_fcrctstr_t;

/* FCRCTINTER */
#define SYSC_FCRCTINTER	(SYSC_4.unFCRCTINTER.u32Register)  /*@rg@*/
#define SYSC_FCRCTINTER_INTE	(*(volatile uint_io8_t*)0xB0802080)  /*@bfbba@*/

typedef struct stc_sysc_4_fcrctinter_field{
    uint_io32_t		u1INTE:1;
    uint_io32_t		:31;
}stc_sysc_4_fcrctinter_field_t;

typedef union un_sysc_4_fcrctinter{
    uint_io32_t		u32Register;
    stc_sysc_4_fcrctinter_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_4_fcrctinter_t;

/* FCRCTICLR */
#define SYSC_FCRCTICLR	(SYSC_4.unFCRCTICLR.u32Register)  /*@rg@*/
#define SYSC_FCRCTICLR_INTC	(*(volatile uint_io8_t*)0xB08020A0)  /*@bfbba@*/

typedef struct stc_sysc_4_fcrcticlr_field{
    uint_io32_t		u1INTC:1;
    uint_io32_t		:31;
}stc_sysc_4_fcrcticlr_field_t;

typedef union un_sysc_4_fcrcticlr{
    uint_io32_t		u32Register;
    stc_sysc_4_fcrcticlr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_4_fcrcticlr_t;


typedef struct stc_sysc_4{
    un_sysc_4_fcrcttrgr_t	unFCRCTTRGR;	/* 0x00000000 */
    un_sysc_4_fcrctcntr_t	unFCRCTCNTR;	/* 0x00000004 */
    un_sysc_4_fcrctcpr_t	unFCRCTCPR;	/* 0x00000008 */
    un_sysc_4_fcrctstr_t	unFCRCTSTR;	/* 0x0000000C */
    un_sysc_4_fcrctinter_t	unFCRCTINTER;	/* 0x00000010 */
    un_sysc_4_fcrcticlr_t	unFCRCTICLR;	/* 0x00000014 */
    uint_io8_t	au8Reserved0[104];	/* 0x00000018 */
}stc_sysc_4_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc_4_t	stcSYSC_4;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 128(0x80) bytes */


/* SYSC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC_5	stcSYSC_5
#else /* __IO_DEFINE */
#define SYSC_5	(*((volatile stc_sysc_5_t*)0xB0600480))
#endif /* __IO_DEFINE */

/* SCRCTTRGR */
#define SYSC_SCRCTTRGR	(SYSC_5.unSCRCTTRGR.u32Register)  /*@rg@*/
#define SYSC_SCRCTTRGR_CGCPT	(*(volatile uint_io8_t*)0xB0802400)  /*@bfbba@*/
#define SYSC_SCRCTTRGR_CSTOP	(*(volatile uint_io8_t*)0xB0802401)  /*@bfbba@*/
#define SYSC_SCRCTTRGR_TCLR	(*(volatile uint_io8_t*)0xB0802402)  /*@bfbba@*/

typedef struct stc_sysc_5_scrcttrgr_field{
    uint_io32_t		u1CGCPT:1;
    uint_io32_t		u1CSTOP:1;
    uint_io32_t		u1TCLR:1;
    uint_io32_t		:29;
}stc_sysc_5_scrcttrgr_field_t;

typedef union un_sysc_5_scrcttrgr{
    uint_io32_t		u32Register;
    stc_sysc_5_scrcttrgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_5_scrcttrgr_t;

/* SCRCTCNTR */
#define SYSC_SCRCTCNTR	(SYSC_5.unSCRCTCNTR.u32Register)  /*@rg@*/
#define SYSC_SCRCTCNTR_MODE	(*(volatile uint_io8_t*)0xB0802420)  /*@bfbba@*/
#define SYSC_SCRCTCNTR_DBGEN	(*(volatile uint_io8_t*)0xB0802421)  /*@bfbba@*/

typedef struct stc_sysc_5_scrctcntr_field{
    uint_io32_t		u1MODE:1;
    uint_io32_t		u1DBGEN:1;
    uint_io32_t		:30;
}stc_sysc_5_scrctcntr_field_t;

typedef union un_sysc_5_scrctcntr{
    uint_io32_t		u32Register;
    stc_sysc_5_scrctcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_5_scrctcntr_t;

/* SCRCTCPR */
#define SYSC_SCRCTCPR	(SYSC_5.unSCRCTCPR.u32Register)  /*@rg@*/
#define SYSC_SCRCTCPR_CMPR	(SYSC_5.unSCRCTCPR.au16Halfword[0])  /*@bfhword@*/
#define SYSC_SCRCTCPR_PSCL	(SYSC_5.unSCRCTCPR.stcField.u4PSCL)  /*@bf@*/

typedef struct stc_sysc_5_scrctcpr_field{
    uint_io32_t		u16CMPR:16;
    uint_io32_t		u4PSCL:4;
    uint_io32_t		:12;
}stc_sysc_5_scrctcpr_field_t;

typedef union un_sysc_5_scrctcpr{
    uint_io32_t		u32Register;
    stc_sysc_5_scrctcpr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_5_scrctcpr_t;

/* SCRCTSTR */
#define SYSC_SCRCTSTR	(SYSC_5.unSCRCTSTR.u32Register)  /*@rg@*/
#define SYSC_SCRCTSTR_INTF	(*(volatile uint_io8_t*)0xB0802460)  /*@bfbba@*/
#define SYSC_SCRCTSTR_TST	(*(volatile uint_io8_t*)0xB0802461)  /*@bfbba@*/
#define SYSC_SCRCTSTR_BUSY	(*(volatile uint_io8_t*)0xB0802462)  /*@bfbba@*/

typedef struct stc_sysc_5_scrctstr_field{
    uint_io32_t		u1INTF:1;
    uint_io32_t		u1TST:1;
    uint_io32_t		u1BUSY:1;
    uint_io32_t		:29;
}stc_sysc_5_scrctstr_field_t;

typedef union un_sysc_5_scrctstr{
    uint_io32_t		u32Register;
    stc_sysc_5_scrctstr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_5_scrctstr_t;

/* SCRCTINTER */
#define SYSC_SCRCTINTER	(SYSC_5.unSCRCTINTER.u32Register)  /*@rg@*/
#define SYSC_SCRCTINTER_INTE	(*(volatile uint_io8_t*)0xB0802480)  /*@bfbba@*/

typedef struct stc_sysc_5_scrctinter_field{
    uint_io32_t		u1INTE:1;
    uint_io32_t		:31;
}stc_sysc_5_scrctinter_field_t;

typedef union un_sysc_5_scrctinter{
    uint_io32_t		u32Register;
    stc_sysc_5_scrctinter_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_5_scrctinter_t;

/* SCRCTICLR */
#define SYSC_SCRCTICLR	(SYSC_5.unSCRCTICLR.u32Register)  /*@rg@*/
#define SYSC_SCRCTICLR_INTC	(*(volatile uint_io8_t*)0xB08024A0)  /*@bfbba@*/

typedef struct stc_sysc_5_scrcticlr_field{
    uint_io32_t		u1INTC:1;
    uint_io32_t		:31;
}stc_sysc_5_scrcticlr_field_t;

typedef union un_sysc_5_scrcticlr{
    uint_io32_t		u32Register;
    stc_sysc_5_scrcticlr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_5_scrcticlr_t;


typedef struct stc_sysc_5{
    un_sysc_5_scrcttrgr_t	unSCRCTTRGR;	/* 0x00000000 */
    un_sysc_5_scrctcntr_t	unSCRCTCNTR;	/* 0x00000004 */
    un_sysc_5_scrctcpr_t	unSCRCTCPR;	/* 0x00000008 */
    un_sysc_5_scrctstr_t	unSCRCTSTR;	/* 0x0000000C */
    un_sysc_5_scrctinter_t	unSCRCTINTER;	/* 0x00000010 */
    un_sysc_5_scrcticlr_t	unSCRCTICLR;	/* 0x00000014 */
    uint_io8_t	au8Reserved0[104];	/* 0x00000018 */
}stc_sysc_5_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc_5_t	stcSYSC_5;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 128(0x80) bytes */


/* SYSC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC_6	stcSYSC_6
#else /* __IO_DEFINE */
#define SYSC_6	(*((volatile stc_sysc_6_t*)0xB0600500))
#endif /* __IO_DEFINE */

/* MOCTTRGR */
#define SYSC_MOCTTRGR	(SYSC_6.unMOCTTRGR.u32Register)  /*@rg@*/
#define SYSC_MOCTTRGR_CGCPT	(*(volatile uint_io8_t*)0xB0802800)  /*@bfbba@*/
#define SYSC_MOCTTRGR_CSTOP	(*(volatile uint_io8_t*)0xB0802801)  /*@bfbba@*/
#define SYSC_MOCTTRGR_TCLR	(*(volatile uint_io8_t*)0xB0802802)  /*@bfbba@*/

typedef struct stc_sysc_6_mocttrgr_field{
    uint_io32_t		u1CGCPT:1;
    uint_io32_t		u1CSTOP:1;
    uint_io32_t		u1TCLR:1;
    uint_io32_t		:29;
}stc_sysc_6_mocttrgr_field_t;

typedef union un_sysc_6_mocttrgr{
    uint_io32_t		u32Register;
    stc_sysc_6_mocttrgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_6_mocttrgr_t;

/* MOCTCNTR */
#define SYSC_MOCTCNTR	(SYSC_6.unMOCTCNTR.u32Register)  /*@rg@*/
#define SYSC_MOCTCNTR_MODE	(*(volatile uint_io8_t*)0xB0802820)  /*@bfbba@*/
#define SYSC_MOCTCNTR_DBGEN	(*(volatile uint_io8_t*)0xB0802821)  /*@bfbba@*/

typedef struct stc_sysc_6_moctcntr_field{
    uint_io32_t		u1MODE:1;
    uint_io32_t		u1DBGEN:1;
    uint_io32_t		:30;
}stc_sysc_6_moctcntr_field_t;

typedef union un_sysc_6_moctcntr{
    uint_io32_t		u32Register;
    stc_sysc_6_moctcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_6_moctcntr_t;

/* MOCTCPR */
#define SYSC_MOCTCPR	(SYSC_6.unMOCTCPR.u32Register)  /*@rg@*/
#define SYSC_MOCTCPR_CMPR	(SYSC_6.unMOCTCPR.au16Halfword[0])  /*@bfhword@*/
#define SYSC_MOCTCPR_PSCL	(SYSC_6.unMOCTCPR.stcField.u4PSCL)  /*@bf@*/

typedef struct stc_sysc_6_moctcpr_field{
    uint_io32_t		u16CMPR:16;
    uint_io32_t		u4PSCL:4;
    uint_io32_t		:12;
}stc_sysc_6_moctcpr_field_t;

typedef union un_sysc_6_moctcpr{
    uint_io32_t		u32Register;
    stc_sysc_6_moctcpr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_6_moctcpr_t;

/* MOCTSTR */
#define SYSC_MOCTSTR	(SYSC_6.unMOCTSTR.u32Register)  /*@rg@*/
#define SYSC_MOCTSTR_INTF	(*(volatile uint_io8_t*)0xB0802860)  /*@bfbba@*/
#define SYSC_MOCTSTR_TST	(*(volatile uint_io8_t*)0xB0802861)  /*@bfbba@*/
#define SYSC_MOCTSTR_BUSY	(*(volatile uint_io8_t*)0xB0802862)  /*@bfbba@*/

typedef struct stc_sysc_6_moctstr_field{
    uint_io32_t		u1INTF:1;
    uint_io32_t		u1TST:1;
    uint_io32_t		u1BUSY:1;
    uint_io32_t		:29;
}stc_sysc_6_moctstr_field_t;

typedef union un_sysc_6_moctstr{
    uint_io32_t		u32Register;
    stc_sysc_6_moctstr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_6_moctstr_t;

/* MOCTINTER */
#define SYSC_MOCTINTER	(SYSC_6.unMOCTINTER.u32Register)  /*@rg@*/
#define SYSC_MOCTINTER_INTE	(*(volatile uint_io8_t*)0xB0802880)  /*@bfbba@*/

typedef struct stc_sysc_6_moctinter_field{
    uint_io32_t		u1INTE:1;
    uint_io32_t		:31;
}stc_sysc_6_moctinter_field_t;

typedef union un_sysc_6_moctinter{
    uint_io32_t		u32Register;
    stc_sysc_6_moctinter_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_6_moctinter_t;

/* MOCTICLR */
#define SYSC_MOCTICLR	(SYSC_6.unMOCTICLR.u32Register)  /*@rg@*/
#define SYSC_MOCTICLR_INTC	(*(volatile uint_io8_t*)0xB08028A0)  /*@bfbba@*/

typedef struct stc_sysc_6_mocticlr_field{
    uint_io32_t		u1INTC:1;
    uint_io32_t		:31;
}stc_sysc_6_mocticlr_field_t;

typedef union un_sysc_6_mocticlr{
    uint_io32_t		u32Register;
    stc_sysc_6_mocticlr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_6_mocticlr_t;


typedef struct stc_sysc_6{
    un_sysc_6_mocttrgr_t	unMOCTTRGR;	/* 0x00000000 */
    un_sysc_6_moctcntr_t	unMOCTCNTR;	/* 0x00000004 */
    un_sysc_6_moctcpr_t	unMOCTCPR;	/* 0x00000008 */
    un_sysc_6_moctstr_t	unMOCTSTR;	/* 0x0000000C */
    un_sysc_6_moctinter_t	unMOCTINTER;	/* 0x00000010 */
    un_sysc_6_mocticlr_t	unMOCTICLR;	/* 0x00000014 */
    uint_io8_t	au8Reserved0[232];	/* 0x00000018 */
}stc_sysc_6_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc_6_t	stcSYSC_6;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 256(0x100) bytes */


/* SYSC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC_7	stcSYSC_7
#else /* __IO_DEFINE */
#define SYSC_7	(*((volatile stc_sysc_7_t*)0xB0600600))
#endif /* __IO_DEFINE */

/* CRCNTR */
#define SYSC_CRCNTR	(SYSC_7.unCRCNTR.u32Register)  /*@rg@*/
#define SYSC_CRCNTR_TRF	(SYSC_7.unCRCNTR.stcField.u5TRF)  /*@bf@*/
#define SYSC_CRCNTR_TRC	(SYSC_7.unCRCNTR.stcField.u5TRC)  /*@bf@*/

typedef struct stc_sysc_7_crcntr_field{
    uint_io32_t		u5TRF:5;
    uint_io32_t		:3;
    uint_io32_t		u5TRC:5;
    uint_io32_t		:19;
}stc_sysc_7_crcntr_field_t;

typedef union un_sysc_7_crcntr{
    uint_io32_t		u32Register;
    stc_sysc_7_crcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_7_crcntr_t;

/* MOSCCNTR */
#define SYSC_MOSCCNTR	(SYSC_7.unMOSCCNTR.u32Register)  /*@rg@*/
#define SYSC_MOSCCNTR_FCIMEN	(*(volatile uint_io8_t*)0xB0803020)  /*@bfbba@*/
#define SYSC_MOSCCNTR_DIV2SEL	(*(volatile uint_io8_t*)0xB0803028)  /*@bfbba@*/
#define SYSC_MOSCCNTR_MCGAIN	(SYSC_7.unMOSCCNTR.stcField.u2MCGAIN)  /*@bf@*/
#define SYSC_MOSCCNTR_MCMODE	(*(volatile uint_io8_t*)0xB080303F)  /*@bfbba@*/

typedef struct stc_sysc_7_mosccntr_field{
    uint_io32_t		u1FCIMEN:1;
    uint_io32_t		:7;
    uint_io32_t		u1DIV2SEL:1;
    uint_io32_t		:17;
    uint_io32_t		u2MCGAIN:2;
    uint_io32_t		:3;
    uint_io32_t		u1MCMODE:1;
}stc_sysc_7_mosccntr_field_t;

typedef union un_sysc_7_mosccntr{
    uint_io32_t		u32Register;
    stc_sysc_7_mosccntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_7_mosccntr_t;

/* SOSCCNTR */
#define SYSC_SOSCCNTR	(SYSC_7.unSOSCCNTR.u32Register)  /*@rg@*/
#define SYSC_SOSCCNTR_SUBPORT	(*(volatile uint_io8_t*)0xB0803050)  /*@bfbba@*/

typedef struct stc_sysc_7_sosccntr_field{
    uint_io32_t		:16;
    uint_io32_t		u1SUBPORT:1;
    uint_io32_t		:15;
}stc_sysc_7_sosccntr_field_t;

typedef union un_sysc_7_sosccntr{
    uint_io32_t		u32Register;
    stc_sysc_7_sosccntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_7_sosccntr_t;

/* PLLSSCGSTCNTR */
#define SYSC_PLLSSCGSTCNTR	(SYSC_7.unPLLSSCGSTCNTR.u32Register)  /*@rg@*/
#define SYSC_PLLSSCGSTCNTR_PLLSTABS	(SYSC_7.unPLLSSCGSTCNTR.stcField.u4PLLSTABS)  /*@bf@*/
#define SYSC_PLLSSCGSTCNTR_SSCGSTABS	(SYSC_7.unPLLSSCGSTCNTR.stcField.u4SSCGSTABS)  /*@bf@*/

typedef struct stc_sysc_7_pllsscgstcntr_field{
    uint_io32_t		u4PLLSTABS:4;
    uint_io32_t		u4SSCGSTABS:4;
    uint_io32_t		:24;
}stc_sysc_7_pllsscgstcntr_field_t;

typedef union un_sysc_7_pllsscgstcntr{
    uint_io32_t		u32Register;
    stc_sysc_7_pllsscgstcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_7_pllsscgstcntr_t;

/* PLL[0-3]CGCNTR */
#define SYSC_PLL0CGCNTR	(SYSC_7.unPLL0CGCNTR.u32Register)  /*@rg@*/
#define SYSC_PLL0CGCNTR_PLLCGEN	(*(volatile uint_io8_t*)0xB0803080)  /*@bfbba@*/
#define SYSC_PLL0CGCNTR_PLLCGSTR	(*(volatile uint_io8_t*)0xB0803081)  /*@bfbba@*/
#define SYSC_PLL0CGCNTR_PLLCGSTS	(SYSC_7.unPLL0CGCNTR.stcField.u2PLLCGSTS)  /*@bf@*/
#define SYSC_PLL0CGCNTR_PLLCGSSN	(SYSC_7.unPLL0CGCNTR.stcField.u6PLLCGSSN)  /*@bf@*/
#define SYSC_PLL0CGCNTR_PLLCGSTP	(SYSC_7.unPLL0CGCNTR.stcField.u2PLLCGSTP)  /*@bf@*/
#define SYSC_PLL0CGCNTR_PLLCGLP	(SYSC_7.unPLL0CGCNTR.au8Byte[2])  /*@bfbyte@*/

#define SYSC_PLL1CGCNTR	(SYSC_7.unPLL1CGCNTR.u32Register)  /*@rg@*/
#define SYSC_PLL1CGCNTR_PLLCGEN	(*(volatile uint_io8_t*)0xB08030A0)  /*@bfbba@*/
#define SYSC_PLL1CGCNTR_PLLCGSTR	(*(volatile uint_io8_t*)0xB08030A1)  /*@bfbba@*/
#define SYSC_PLL1CGCNTR_PLLCGSTS	(SYSC_7.unPLL1CGCNTR.stcField.u2PLLCGSTS)  /*@bf@*/
#define SYSC_PLL1CGCNTR_PLLCGSSN	(SYSC_7.unPLL1CGCNTR.stcField.u6PLLCGSSN)  /*@bf@*/
#define SYSC_PLL1CGCNTR_PLLCGSTP	(SYSC_7.unPLL1CGCNTR.stcField.u2PLLCGSTP)  /*@bf@*/
#define SYSC_PLL1CGCNTR_PLLCGLP	(SYSC_7.unPLL1CGCNTR.au8Byte[2])  /*@bfbyte@*/

#define SYSC_PLL2CGCNTR	(SYSC_7.unPLL2CGCNTR.u32Register)  /*@rg@*/
#define SYSC_PLL2CGCNTR_PLLCGEN	(*(volatile uint_io8_t*)0xB08030C0)  /*@bfbba@*/
#define SYSC_PLL2CGCNTR_PLLCGSTR	(*(volatile uint_io8_t*)0xB08030C1)  /*@bfbba@*/
#define SYSC_PLL2CGCNTR_PLLCGSTS	(SYSC_7.unPLL2CGCNTR.stcField.u2PLLCGSTS)  /*@bf@*/
#define SYSC_PLL2CGCNTR_PLLCGSSN	(SYSC_7.unPLL2CGCNTR.stcField.u6PLLCGSSN)  /*@bf@*/
#define SYSC_PLL2CGCNTR_PLLCGSTP	(SYSC_7.unPLL2CGCNTR.stcField.u2PLLCGSTP)  /*@bf@*/
#define SYSC_PLL2CGCNTR_PLLCGLP	(SYSC_7.unPLL2CGCNTR.au8Byte[2])  /*@bfbyte@*/

#define SYSC_PLL3CGCNTR	(SYSC_7.unPLL3CGCNTR.u32Register)  /*@rg@*/
#define SYSC_PLL3CGCNTR_PLLCGEN	(*(volatile uint_io8_t*)0xB08030E0)  /*@bfbba@*/
#define SYSC_PLL3CGCNTR_PLLCGSTR	(*(volatile uint_io8_t*)0xB08030E1)  /*@bfbba@*/
#define SYSC_PLL3CGCNTR_PLLCGSTS	(SYSC_7.unPLL3CGCNTR.stcField.u2PLLCGSTS)  /*@bf@*/
#define SYSC_PLL3CGCNTR_PLLCGSSN	(SYSC_7.unPLL3CGCNTR.stcField.u6PLLCGSSN)  /*@bf@*/
#define SYSC_PLL3CGCNTR_PLLCGSTP	(SYSC_7.unPLL3CGCNTR.stcField.u2PLLCGSTP)  /*@bf@*/
#define SYSC_PLL3CGCNTR_PLLCGLP	(SYSC_7.unPLL3CGCNTR.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_sysc_7_pllncgcntr_field{
    uint_io32_t		u1PLLCGEN:1;
    uint_io32_t		u1PLLCGSTR:1;
    uint_io32_t		:4;
    uint_io32_t		u2PLLCGSTS:2;
    uint_io32_t		u6PLLCGSSN:6;
    uint_io32_t		u2PLLCGSTP:2;
    uint_io32_t		u8PLLCGLP:8;
    uint_io32_t		:8;
}stc_sysc_7_pllncgcntr_field_t;

typedef union un_sysc_7_pllncgcntr{
    uint_io32_t		u32Register;
    stc_sysc_7_pllncgcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_7_pllncgcntr_t;

/* SSCG[0-3]CGCNTR */
#define SYSC_SSCG0CGCNTR	(SYSC_7.unSSCG0CGCNTR.u32Register)  /*@rg@*/
#define SYSC_SSCG0CGCNTR_SSCGCGEN	(*(volatile uint_io8_t*)0xB0803100)  /*@bfbba@*/
#define SYSC_SSCG0CGCNTR_SSCGCGSTR	(*(volatile uint_io8_t*)0xB0803101)  /*@bfbba@*/
#define SYSC_SSCG0CGCNTR_SSCGCGSTS	(SYSC_7.unSSCG0CGCNTR.stcField.u2SSCGCGSTS)  /*@bf@*/
#define SYSC_SSCG0CGCNTR_SSCGCGSSN	(SYSC_7.unSSCG0CGCNTR.stcField.u6SSCGCGSSN)  /*@bf@*/
#define SYSC_SSCG0CGCNTR_SSCGCGSTP	(SYSC_7.unSSCG0CGCNTR.stcField.u2SSCGCGSTP)  /*@bf@*/
#define SYSC_SSCG0CGCNTR_SSCGCGLP	(SYSC_7.unSSCG0CGCNTR.au8Byte[2])  /*@bfbyte@*/

#define SYSC_SSCG1CGCNTR	(SYSC_7.unSSCG1CGCNTR.u32Register)  /*@rg@*/
#define SYSC_SSCG1CGCNTR_SSCGCGEN	(*(volatile uint_io8_t*)0xB0803120)  /*@bfbba@*/
#define SYSC_SSCG1CGCNTR_SSCGCGSTR	(*(volatile uint_io8_t*)0xB0803121)  /*@bfbba@*/
#define SYSC_SSCG1CGCNTR_SSCGCGSTS	(SYSC_7.unSSCG1CGCNTR.stcField.u2SSCGCGSTS)  /*@bf@*/
#define SYSC_SSCG1CGCNTR_SSCGCGSSN	(SYSC_7.unSSCG1CGCNTR.stcField.u6SSCGCGSSN)  /*@bf@*/
#define SYSC_SSCG1CGCNTR_SSCGCGSTP	(SYSC_7.unSSCG1CGCNTR.stcField.u2SSCGCGSTP)  /*@bf@*/
#define SYSC_SSCG1CGCNTR_SSCGCGLP	(SYSC_7.unSSCG1CGCNTR.au8Byte[2])  /*@bfbyte@*/

#define SYSC_SSCG2CGCNTR	(SYSC_7.unSSCG2CGCNTR.u32Register)  /*@rg@*/
#define SYSC_SSCG2CGCNTR_SSCGCGEN	(*(volatile uint_io8_t*)0xB0803140)  /*@bfbba@*/
#define SYSC_SSCG2CGCNTR_SSCGCGSTR	(*(volatile uint_io8_t*)0xB0803141)  /*@bfbba@*/
#define SYSC_SSCG2CGCNTR_SSCGCGSTS	(SYSC_7.unSSCG2CGCNTR.stcField.u2SSCGCGSTS)  /*@bf@*/
#define SYSC_SSCG2CGCNTR_SSCGCGSSN	(SYSC_7.unSSCG2CGCNTR.stcField.u6SSCGCGSSN)  /*@bf@*/
#define SYSC_SSCG2CGCNTR_SSCGCGSTP	(SYSC_7.unSSCG2CGCNTR.stcField.u2SSCGCGSTP)  /*@bf@*/
#define SYSC_SSCG2CGCNTR_SSCGCGLP	(SYSC_7.unSSCG2CGCNTR.au8Byte[2])  /*@bfbyte@*/

#define SYSC_SSCG3CGCNTR	(SYSC_7.unSSCG3CGCNTR.u32Register)  /*@rg@*/
#define SYSC_SSCG3CGCNTR_SSCGCGEN	(*(volatile uint_io8_t*)0xB0803160)  /*@bfbba@*/
#define SYSC_SSCG3CGCNTR_SSCGCGSTR	(*(volatile uint_io8_t*)0xB0803161)  /*@bfbba@*/
#define SYSC_SSCG3CGCNTR_SSCGCGSTS	(SYSC_7.unSSCG3CGCNTR.stcField.u2SSCGCGSTS)  /*@bf@*/
#define SYSC_SSCG3CGCNTR_SSCGCGSSN	(SYSC_7.unSSCG3CGCNTR.stcField.u6SSCGCGSSN)  /*@bf@*/
#define SYSC_SSCG3CGCNTR_SSCGCGSTP	(SYSC_7.unSSCG3CGCNTR.stcField.u2SSCGCGSTP)  /*@bf@*/
#define SYSC_SSCG3CGCNTR_SSCGCGLP	(SYSC_7.unSSCG3CGCNTR.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_sysc_7_sscgncgcntr_field{
    uint_io32_t		u1SSCGCGEN:1;
    uint_io32_t		u1SSCGCGSTR:1;
    uint_io32_t		:4;
    uint_io32_t		u2SSCGCGSTS:2;
    uint_io32_t		u6SSCGCGSSN:6;
    uint_io32_t		u2SSCGCGSTP:2;
    uint_io32_t		u8SSCGCGLP:8;
    uint_io32_t		:8;
}stc_sysc_7_sscgncgcntr_field_t;

typedef union un_sysc_7_sscgncgcntr{
    uint_io32_t		u32Register;
    stc_sysc_7_sscgncgcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_7_sscgncgcntr_t;

/* CKOTCNTR */
#define SYSC_CKOTCNTR	(SYSC_7.unCKOTCNTR.u32Register)  /*@rg@*/
#define SYSC_CKOTCNTR_CKSEL	(SYSC_7.unCKOTCNTR.stcField.u4CKSEL)  /*@bf@*/
#define SYSC_CKOTCNTR_CKOUTDIV	(SYSC_7.unCKOTCNTR.stcField.u3CKOUTDIV)  /*@bf@*/
#define SYSC_CKOTCNTR_ENCLKO	(*(volatile uint_io8_t*)0xB0803198)  /*@bfbba@*/

typedef struct stc_sysc_7_ckotcntr_field{
    uint_io32_t		u4CKSEL:4;
    uint_io32_t		:4;
    uint_io32_t		u3CKOUTDIV:3;
    uint_io32_t		:13;
    uint_io32_t		u1ENCLKO:1;
    uint_io32_t		:7;
}stc_sysc_7_ckotcntr_field_t;

typedef union un_sysc_7_ckotcntr{
    uint_io32_t		u32Register;
    stc_sysc_7_ckotcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_7_ckotcntr_t;


typedef struct stc_sysc_7{
    un_sysc_7_crcntr_t	unCRCNTR;	/* 0x00000000 */
    un_sysc_7_mosccntr_t	unMOSCCNTR;	/* 0x00000004 */
    un_sysc_7_sosccntr_t	unSOSCCNTR;	/* 0x00000008 */
    un_sysc_7_pllsscgstcntr_t	unPLLSSCGSTCNTR;	/* 0x0000000C */
    un_sysc_7_pllncgcntr_t	unPLL0CGCNTR;	/* 0x00000010 */
    un_sysc_7_pllncgcntr_t	unPLL1CGCNTR;	/* 0x00000014 */
    un_sysc_7_pllncgcntr_t	unPLL2CGCNTR;	/* 0x00000018 */
    un_sysc_7_pllncgcntr_t	unPLL3CGCNTR;	/* 0x0000001C */
    un_sysc_7_sscgncgcntr_t	unSSCG0CGCNTR;	/* 0x00000020 */
    un_sysc_7_sscgncgcntr_t	unSSCG1CGCNTR;	/* 0x00000024 */
    un_sysc_7_sscgncgcntr_t	unSSCG2CGCNTR;	/* 0x00000028 */
    un_sysc_7_sscgncgcntr_t	unSSCG3CGCNTR;	/* 0x0000002C */
    un_sysc_7_ckotcntr_t	unCKOTCNTR;	/* 0x00000030 */
    uint_io8_t	au8Reserved0[76];	/* 0x00000034 */
}stc_sysc_7_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc_7_t	stcSYSC_7;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 128(0x80) bytes */


/* SYSC0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC0_8	stcSYSC0_8
#else /* __IO_DEFINE */
#define SYSC0_8	(*((volatile stc_sysc0_8_t*)0xB0600680))
#endif /* __IO_DEFINE */

/* SPECFGR */
#define SYSC0_SPECFGR	(SYSC0_8.unSPECFGR.u32Register)  /*@rg@*/
#define SYSC0_SPECFGR_EX12VRSTCNT	(SYSC0_8.unSPECFGR.stcField.u4EX12VRSTCNT)  /*@bf@*/
#define SYSC0_SPECFGR_EX5VRSTCNT	(SYSC0_8.unSPECFGR.stcField.u4EX5VRSTCNT)  /*@bf@*/
#define SYSC0_SPECFGR_BRAMSC	(*(volatile uint_io8_t*)0xB0803408)  /*@bfbba@*/
#define SYSC0_SPECFGR_EXVRSTCNT	(*(volatile uint_io8_t*)0xB0803409)  /*@bfbba@*/
#define SYSC0_SPECFGR_IO35RSTC	(*(volatile uint_io8_t*)0xB0803415)  /*@bfbba@*/
#define SYSC0_SPECFGR_IO3RSTC	(*(volatile uint_io8_t*)0xB0803416)  /*@bfbba@*/
#define SYSC0_SPECFGR_PSSPADCTRL	(*(volatile uint_io8_t*)0xB0803417)  /*@bfbba@*/
#define SYSC0_SPECFGR_HOLDIO_PD2	(*(volatile uint_io8_t*)0xB0803418)  /*@bfbba@*/
#define SYSC0_SPECFGR_HOLDIO_PD5_0	(*(volatile uint_io8_t*)0xB080341A)  /*@bfbba@*/
#define SYSC0_SPECFGR_HOLDIO_PD5_1	(*(volatile uint_io8_t*)0xB080341B)  /*@bfbba@*/
#define SYSC0_SPECFGR_HOLDIO_PD5_2	(*(volatile uint_io8_t*)0xB080341C)  /*@bfbba@*/
#define SYSC0_SPECFGR_HOLDIO_PD5_3	(*(volatile uint_io8_t*)0xB080341D)  /*@bfbba@*/
#define SYSC0_SPECFGR_HOLDIO_PD6_0	(*(volatile uint_io8_t*)0xB080341E)  /*@bfbba@*/
#define SYSC0_SPECFGR_HOLDIO_PD6_1	(*(volatile uint_io8_t*)0xB080341F)  /*@bfbba@*/

typedef struct stc_sysc0_8_specfgr_field{
    uint_io32_t		u4EX12VRSTCNT:4;
    uint_io32_t		u4EX5VRSTCNT:4;
    uint_io32_t		u1BRAMSC:1;
    uint_io32_t		u1EXVRSTCNT:1;
    uint_io32_t		:11;
    uint_io32_t		u1IO35RSTC:1;
    uint_io32_t		u1IO3RSTC:1;
    uint_io32_t		u1PSSPADCTRL:1;
    uint_io32_t		u1HOLDIO_PD2:1;
    uint_io32_t		:1;
    uint_io32_t		u1HOLDIO_PD5_0:1;
    uint_io32_t		u1HOLDIO_PD5_1:1;
    uint_io32_t		u1HOLDIO_PD5_2:1;
    uint_io32_t		u1HOLDIO_PD5_3:1;
    uint_io32_t		u1HOLDIO_PD6_0:1;
    uint_io32_t		u1HOLDIO_PD6_1:1;
}stc_sysc0_8_specfgr_field_t;

typedef union un_sysc0_8_specfgr{
    uint_io32_t		u32Register;
    stc_sysc0_8_specfgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_8_specfgr_t;

/* JTAGDETECT */
#define SYSC0_JTAGDETECT	(SYSC0_8.unJTAGDETECT.u32Register)  /*@rg@*/
#define SYSC0_JTAGDETECT_DBGCON	(*(volatile uint_io8_t*)0xB0803800)  /*@bfbba@*/

typedef struct stc_sysc0_8_jtagdetect_field{
    uint_io32_t		u1DBGCON:1;
    uint_io32_t		:31;
}stc_sysc0_8_jtagdetect_field_t;

typedef union un_sysc0_8_jtagdetect{
    uint_io32_t		u32Register;
    stc_sysc0_8_jtagdetect_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_8_jtagdetect_t;

/* JTAGCNFG */
#define SYSC0_JTAGCNFG	(SYSC0_8.unJTAGCNFG.u32Register)  /*@rg@*/
#define SYSC0_JTAGCNFG_DBGDONE	(*(volatile uint_io8_t*)0xB0803820)  /*@bfbba@*/

typedef struct stc_sysc0_8_jtagcnfg_field{
    uint_io32_t		u1DBGDONE:1;
    uint_io32_t		:31;
}stc_sysc0_8_jtagcnfg_field_t;

typedef union un_sysc0_8_jtagcnfg{
    uint_io32_t		u32Register;
    stc_sysc0_8_jtagcnfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_8_jtagcnfg_t;

/* JTAGWAKEUP */
#define SYSC0_JTAGWAKEUP	(SYSC0_8.unJTAGWAKEUP.u32Register)  /*@rg@*/
#define SYSC0_JTAGWAKEUP_DBGWKEN	(*(volatile uint_io8_t*)0xB0803840)  /*@bfbba@*/

typedef struct stc_sysc0_8_jtagwakeup_field{
    uint_io32_t		u1DBGWKEN:1;
    uint_io32_t		:31;
}stc_sysc0_8_jtagwakeup_field_t;

typedef union un_sysc0_8_jtagwakeup{
    uint_io32_t		u32Register;
    stc_sysc0_8_jtagwakeup_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc0_8_jtagwakeup_t;


typedef struct stc_sysc0_8{
    un_sysc0_8_specfgr_t	unSPECFGR;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[124];	/* 0x00000004 */
    un_sysc0_8_jtagdetect_t	unJTAGDETECT;	/* 0x00000080 */
    un_sysc0_8_jtagcnfg_t	unJTAGCNFG;	/* 0x00000084 */
    un_sysc0_8_jtagwakeup_t	unJTAGWAKEUP;	/* 0x00000088 */
    uint_io8_t	au8Reserved1[244];	/* 0x0000008C */
}stc_sysc0_8_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc0_8_t	stcSYSC0_8;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 384(0x180) bytes */


/* SYSC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SYSC_9	stcSYSC_9
#else /* __IO_DEFINE */
#define SYSC_9	(*((volatile stc_sysc_9_t*)0xB0600580))
#endif /* __IO_DEFINE */

/* SOCTTRGR */
#define SYSC_SOCTTRGR	(SYSC_9.unSOCTTRGR.u32Register)  /*@rg@*/
#define SYSC_SOCTTRGR_CGCPT	(*(volatile uint_io8_t*)0xB0802C00)  /*@bfbba@*/
#define SYSC_SOCTTRGR_CSTOP	(*(volatile uint_io8_t*)0xB0802C01)  /*@bfbba@*/
#define SYSC_SOCTTRGR_TCLR	(*(volatile uint_io8_t*)0xB0802C02)  /*@bfbba@*/

typedef struct stc_sysc_9_socttrgr_field{
    uint_io32_t		u1CGCPT:1;
    uint_io32_t		u1CSTOP:1;
    uint_io32_t		u1TCLR:1;
    uint_io32_t		:29;
}stc_sysc_9_socttrgr_field_t;

typedef union un_sysc_9_socttrgr{
    uint_io32_t		u32Register;
    stc_sysc_9_socttrgr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_9_socttrgr_t;

/* SOCTCNTR */
#define SYSC_SOCTCNTR	(SYSC_9.unSOCTCNTR.u32Register)  /*@rg@*/
#define SYSC_SOCTCNTR_MODE	(*(volatile uint_io8_t*)0xB0802C20)  /*@bfbba@*/
#define SYSC_SOCTCNTR_DBGEN	(*(volatile uint_io8_t*)0xB0802C21)  /*@bfbba@*/

typedef struct stc_sysc_9_soctcntr_field{
    uint_io32_t		u1MODE:1;
    uint_io32_t		u1DBGEN:1;
    uint_io32_t		:30;
}stc_sysc_9_soctcntr_field_t;

typedef union un_sysc_9_soctcntr{
    uint_io32_t		u32Register;
    stc_sysc_9_soctcntr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_9_soctcntr_t;

/* SOCTCPR */
#define SYSC_SOCTCPR	(SYSC_9.unSOCTCPR.u32Register)  /*@rg@*/
#define SYSC_SOCTCPR_CMPR	(SYSC_9.unSOCTCPR.au16Halfword[0])  /*@bfhword@*/
#define SYSC_SOCTCPR_PSCL	(SYSC_9.unSOCTCPR.stcField.u4PSCL)  /*@bf@*/

typedef struct stc_sysc_9_soctcpr_field{
    uint_io32_t		u16CMPR:16;
    uint_io32_t		u4PSCL:4;
    uint_io32_t		:12;
}stc_sysc_9_soctcpr_field_t;

typedef union un_sysc_9_soctcpr{
    uint_io32_t		u32Register;
    stc_sysc_9_soctcpr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_9_soctcpr_t;

/* SOCTSTR */
#define SYSC_SOCTSTR	(SYSC_9.unSOCTSTR.u32Register)  /*@rg@*/
#define SYSC_SOCTSTR_INTF	(*(volatile uint_io8_t*)0xB0802C60)  /*@bfbba@*/
#define SYSC_SOCTSTR_TST	(*(volatile uint_io8_t*)0xB0802C61)  /*@bfbba@*/
#define SYSC_SOCTSTR_BUSY	(*(volatile uint_io8_t*)0xB0802C62)  /*@bfbba@*/

typedef struct stc_sysc_9_soctstr_field{
    uint_io32_t		u1INTF:1;
    uint_io32_t		u1TST:1;
    uint_io32_t		u1BUSY:1;
    uint_io32_t		:29;
}stc_sysc_9_soctstr_field_t;

typedef union un_sysc_9_soctstr{
    uint_io32_t		u32Register;
    stc_sysc_9_soctstr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_9_soctstr_t;

/* SOCTINTER */
#define SYSC_SOCTINTER	(SYSC_9.unSOCTINTER.u32Register)  /*@rg@*/
#define SYSC_SOCTINTER_INTE	(*(volatile uint_io8_t*)0xB0802C80)  /*@bfbba@*/

typedef struct stc_sysc_9_soctinter_field{
    uint_io32_t		u1INTE:1;
    uint_io32_t		:31;
}stc_sysc_9_soctinter_field_t;

typedef union un_sysc_9_soctinter{
    uint_io32_t		u32Register;
    stc_sysc_9_soctinter_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_9_soctinter_t;

/* SOCTICLR */
#define SYSC_SOCTICLR	(SYSC_9.unSOCTICLR.u32Register)  /*@rg@*/
#define SYSC_SOCTICLR_INTC	(*(volatile uint_io8_t*)0xB0802CA0)  /*@bfbba@*/

typedef struct stc_sysc_9_socticlr_field{
    uint_io32_t		u1INTC:1;
    uint_io32_t		:31;
}stc_sysc_9_socticlr_field_t;

typedef union un_sysc_9_socticlr{
    uint_io32_t		u32Register;
    stc_sysc_9_socticlr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_sysc_9_socticlr_t;


typedef struct stc_sysc_9{
    un_sysc_9_socttrgr_t	unSOCTTRGR;	/* 0x00000000 */
    un_sysc_9_soctcntr_t	unSOCTCNTR;	/* 0x00000004 */
    un_sysc_9_soctcpr_t	unSOCTCPR;	/* 0x00000008 */
    un_sysc_9_soctstr_t	unSOCTSTR;	/* 0x0000000C */
    un_sysc_9_soctinter_t	unSOCTINTER;	/* 0x00000010 */
    un_sysc_9_socticlr_t	unSOCTICLR;	/* 0x00000014 */
    uint_io8_t	au8Reserved0[232];	/* 0x00000018 */
}stc_sysc_9_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_sysc_9_t	stcSYSC_9;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 256(0x100) bytes */


#endif /* __S6J3200_SYSC_H */
