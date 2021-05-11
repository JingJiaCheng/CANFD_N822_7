/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_TPU_H
#define __S6J3200_TPU_H

#include "s6j3200io_basetypes.h"

/* TPU0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define TPU0	stcTPU0
#else /* __IO_DEFINE */
#define TPU0	(*((volatile stc_tpu0_t*)0xB0408000))
#endif /* __IO_DEFINE */

/* UNLOCK */
#define TPU0_UNLOCK	(TPU0.unUNLOCK.u32Register)  /*@rg@*/
#define TPU0_UNLOCK_UNLOCK	TPU0_UNLOCK  /*@bfrg@*/

typedef union un_tpu0_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_unlock_t;

/* LST */
#define TPU0_LST	(TPU0.unLST.u32Register)  /*@rg@*/
#define TPU0_LST_LST	(*(volatile uint_io8_t*)0xB1140020)  /*@bfbba@*/

typedef struct stc_tpu0_lst_field{
    uint_io32_t		u1LST:1;
    uint_io32_t		:31;
}stc_tpu0_lst_field_t;

typedef union un_tpu0_lst{
    uint_io32_t		u32Register;
    stc_tpu0_lst_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_lst_t;

/* CFG */
#define TPU0_CFG	(TPU0.unCFG.u32Register)  /*@rg@*/
#define TPU0_CFG_INTE	(*(volatile uint_io8_t*)0xB1140040)  /*@bfbba@*/
#define TPU0_CFG_GLBPS	(TPU0.unCFG.stcField.u6GLBPS)  /*@bf@*/
#define TPU0_CFG_GLBPSE	(*(volatile uint_io8_t*)0xB1140057)  /*@bfbba@*/
#define TPU0_CFG_DBGE	(*(volatile uint_io8_t*)0xB1140058)  /*@bfbba@*/

typedef struct stc_tpu0_cfg_field{
    uint_io32_t		u1INTE:1;
    uint_io32_t		:15;
    uint_io32_t		u6GLBPS:6;
    uint_io32_t		:1;
    uint_io32_t		u1GLBPSE:1;
    uint_io32_t		u1DBGE:1;
    uint_io32_t		:7;
}stc_tpu0_cfg_field_t;

typedef union un_tpu0_cfg{
    uint_io32_t		u32Register;
    stc_tpu0_cfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_cfg_t;

/* TIR */
#define TPU0_TIR	(TPU0.unTIR.u32Register)  /*@rg@*/
#define TPU0_TIR_IR0	(*(volatile uint_io8_t*)0xB1140060)  /*@bfbba@*/
#define TPU0_TIR_IR1	(*(volatile uint_io8_t*)0xB1140061)  /*@bfbba@*/
#define TPU0_TIR_IR2	(*(volatile uint_io8_t*)0xB1140062)  /*@bfbba@*/
#define TPU0_TIR_IR3	(*(volatile uint_io8_t*)0xB1140063)  /*@bfbba@*/
#define TPU0_TIR_IR4	(*(volatile uint_io8_t*)0xB1140064)  /*@bfbba@*/
#define TPU0_TIR_IR5	(*(volatile uint_io8_t*)0xB1140065)  /*@bfbba@*/
#define TPU0_TIR_IR6	(*(volatile uint_io8_t*)0xB1140066)  /*@bfbba@*/
#define TPU0_TIR_IR7	(*(volatile uint_io8_t*)0xB1140067)  /*@bfbba@*/

typedef struct stc_tpu0_tir_field{
    uint_io32_t		u1IR0:1;
    uint_io32_t		u1IR1:1;
    uint_io32_t		u1IR2:1;
    uint_io32_t		u1IR3:1;
    uint_io32_t		u1IR4:1;
    uint_io32_t		u1IR5:1;
    uint_io32_t		u1IR6:1;
    uint_io32_t		u1IR7:1;
    uint_io32_t		:24;
}stc_tpu0_tir_field_t;

typedef union un_tpu0_tir{
    uint_io32_t		u32Register;
    stc_tpu0_tir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_tir_t;

/* TST */
#define TPU0_TST	(TPU0.unTST.u32Register)  /*@rg@*/
#define TPU0_TST_ST0	(*(volatile uint_io8_t*)0xB1140080)  /*@bfbba@*/
#define TPU0_TST_ST1	(*(volatile uint_io8_t*)0xB1140081)  /*@bfbba@*/
#define TPU0_TST_ST2	(*(volatile uint_io8_t*)0xB1140082)  /*@bfbba@*/
#define TPU0_TST_ST3	(*(volatile uint_io8_t*)0xB1140083)  /*@bfbba@*/
#define TPU0_TST_ST4	(*(volatile uint_io8_t*)0xB1140084)  /*@bfbba@*/
#define TPU0_TST_ST5	(*(volatile uint_io8_t*)0xB1140085)  /*@bfbba@*/
#define TPU0_TST_ST6	(*(volatile uint_io8_t*)0xB1140086)  /*@bfbba@*/
#define TPU0_TST_ST7	(*(volatile uint_io8_t*)0xB1140087)  /*@bfbba@*/

typedef struct stc_tpu0_tst_field{
    uint_io32_t		u1ST0:1;
    uint_io32_t		u1ST1:1;
    uint_io32_t		u1ST2:1;
    uint_io32_t		u1ST3:1;
    uint_io32_t		u1ST4:1;
    uint_io32_t		u1ST5:1;
    uint_io32_t		u1ST6:1;
    uint_io32_t		u1ST7:1;
    uint_io32_t		:24;
}stc_tpu0_tst_field_t;

typedef union un_tpu0_tst{
    uint_io32_t		u32Register;
    stc_tpu0_tst_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_tst_t;

/* TIE */
#define TPU0_TIE	(TPU0.unTIE.u32Register)  /*@rg@*/
#define TPU0_TIE_IE0	(*(volatile uint_io8_t*)0xB11400A0)  /*@bfbba@*/
#define TPU0_TIE_IE1	(*(volatile uint_io8_t*)0xB11400A1)  /*@bfbba@*/
#define TPU0_TIE_IE2	(*(volatile uint_io8_t*)0xB11400A2)  /*@bfbba@*/
#define TPU0_TIE_IE3	(*(volatile uint_io8_t*)0xB11400A3)  /*@bfbba@*/
#define TPU0_TIE_IE4	(*(volatile uint_io8_t*)0xB11400A4)  /*@bfbba@*/
#define TPU0_TIE_IE5	(*(volatile uint_io8_t*)0xB11400A5)  /*@bfbba@*/
#define TPU0_TIE_IE6	(*(volatile uint_io8_t*)0xB11400A6)  /*@bfbba@*/
#define TPU0_TIE_IE7	(*(volatile uint_io8_t*)0xB11400A7)  /*@bfbba@*/

typedef struct stc_tpu0_tie_field{
    uint_io32_t		u1IE0:1;
    uint_io32_t		u1IE1:1;
    uint_io32_t		u1IE2:1;
    uint_io32_t		u1IE3:1;
    uint_io32_t		u1IE4:1;
    uint_io32_t		u1IE5:1;
    uint_io32_t		u1IE6:1;
    uint_io32_t		u1IE7:1;
    uint_io32_t		:24;
}stc_tpu0_tie_field_t;

typedef union un_tpu0_tie{
    uint_io32_t		u32Register;
    stc_tpu0_tie_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_tie_t;

/* TCN0[0-7] */
#define TPU0_TCN00	(TPU0.unTCN00.u32Register)  /*@rg@*/
#define TPU0_TCN00_ECPL	(TPU0.unTCN00.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN00_IRC	(*(volatile uint_io8_t*)0xB114019A)  /*@bfbba@*/
#define TPU0_TCN00_IEC	(*(volatile uint_io8_t*)0xB114019B)  /*@bfbba@*/
#define TPU0_TCN00_IES	(*(volatile uint_io8_t*)0xB114019C)  /*@bfbba@*/
#define TPU0_TCN00_CONT	(*(volatile uint_io8_t*)0xB114019D)  /*@bfbba@*/
#define TPU0_TCN00_STOP	(*(volatile uint_io8_t*)0xB114019E)  /*@bfbba@*/
#define TPU0_TCN00_START	(*(volatile uint_io8_t*)0xB114019F)  /*@bfbba@*/

#define TPU0_TCN01	(TPU0.unTCN01.u32Register)  /*@rg@*/
#define TPU0_TCN01_ECPL	(TPU0.unTCN01.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN01_IRC	(*(volatile uint_io8_t*)0xB11401BA)  /*@bfbba@*/
#define TPU0_TCN01_IEC	(*(volatile uint_io8_t*)0xB11401BB)  /*@bfbba@*/
#define TPU0_TCN01_IES	(*(volatile uint_io8_t*)0xB11401BC)  /*@bfbba@*/
#define TPU0_TCN01_CONT	(*(volatile uint_io8_t*)0xB11401BD)  /*@bfbba@*/
#define TPU0_TCN01_STOP	(*(volatile uint_io8_t*)0xB11401BE)  /*@bfbba@*/
#define TPU0_TCN01_START	(*(volatile uint_io8_t*)0xB11401BF)  /*@bfbba@*/

#define TPU0_TCN02	(TPU0.unTCN02.u32Register)  /*@rg@*/
#define TPU0_TCN02_ECPL	(TPU0.unTCN02.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN02_IRC	(*(volatile uint_io8_t*)0xB11401DA)  /*@bfbba@*/
#define TPU0_TCN02_IEC	(*(volatile uint_io8_t*)0xB11401DB)  /*@bfbba@*/
#define TPU0_TCN02_IES	(*(volatile uint_io8_t*)0xB11401DC)  /*@bfbba@*/
#define TPU0_TCN02_CONT	(*(volatile uint_io8_t*)0xB11401DD)  /*@bfbba@*/
#define TPU0_TCN02_STOP	(*(volatile uint_io8_t*)0xB11401DE)  /*@bfbba@*/
#define TPU0_TCN02_START	(*(volatile uint_io8_t*)0xB11401DF)  /*@bfbba@*/

#define TPU0_TCN03	(TPU0.unTCN03.u32Register)  /*@rg@*/
#define TPU0_TCN03_ECPL	(TPU0.unTCN03.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN03_IRC	(*(volatile uint_io8_t*)0xB11401FA)  /*@bfbba@*/
#define TPU0_TCN03_IEC	(*(volatile uint_io8_t*)0xB11401FB)  /*@bfbba@*/
#define TPU0_TCN03_IES	(*(volatile uint_io8_t*)0xB11401FC)  /*@bfbba@*/
#define TPU0_TCN03_CONT	(*(volatile uint_io8_t*)0xB11401FD)  /*@bfbba@*/
#define TPU0_TCN03_STOP	(*(volatile uint_io8_t*)0xB11401FE)  /*@bfbba@*/
#define TPU0_TCN03_START	(*(volatile uint_io8_t*)0xB11401FF)  /*@bfbba@*/

#define TPU0_TCN04	(TPU0.unTCN04.u32Register)  /*@rg@*/
#define TPU0_TCN04_ECPL	(TPU0.unTCN04.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN04_IRC	(*(volatile uint_io8_t*)0xB114021A)  /*@bfbba@*/
#define TPU0_TCN04_IEC	(*(volatile uint_io8_t*)0xB114021B)  /*@bfbba@*/
#define TPU0_TCN04_IES	(*(volatile uint_io8_t*)0xB114021C)  /*@bfbba@*/
#define TPU0_TCN04_CONT	(*(volatile uint_io8_t*)0xB114021D)  /*@bfbba@*/
#define TPU0_TCN04_STOP	(*(volatile uint_io8_t*)0xB114021E)  /*@bfbba@*/
#define TPU0_TCN04_START	(*(volatile uint_io8_t*)0xB114021F)  /*@bfbba@*/

#define TPU0_TCN05	(TPU0.unTCN05.u32Register)  /*@rg@*/
#define TPU0_TCN05_ECPL	(TPU0.unTCN05.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN05_IRC	(*(volatile uint_io8_t*)0xB114023A)  /*@bfbba@*/
#define TPU0_TCN05_IEC	(*(volatile uint_io8_t*)0xB114023B)  /*@bfbba@*/
#define TPU0_TCN05_IES	(*(volatile uint_io8_t*)0xB114023C)  /*@bfbba@*/
#define TPU0_TCN05_CONT	(*(volatile uint_io8_t*)0xB114023D)  /*@bfbba@*/
#define TPU0_TCN05_STOP	(*(volatile uint_io8_t*)0xB114023E)  /*@bfbba@*/
#define TPU0_TCN05_START	(*(volatile uint_io8_t*)0xB114023F)  /*@bfbba@*/

#define TPU0_TCN06	(TPU0.unTCN06.u32Register)  /*@rg@*/
#define TPU0_TCN06_ECPL	(TPU0.unTCN06.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN06_IRC	(*(volatile uint_io8_t*)0xB114025A)  /*@bfbba@*/
#define TPU0_TCN06_IEC	(*(volatile uint_io8_t*)0xB114025B)  /*@bfbba@*/
#define TPU0_TCN06_IES	(*(volatile uint_io8_t*)0xB114025C)  /*@bfbba@*/
#define TPU0_TCN06_CONT	(*(volatile uint_io8_t*)0xB114025D)  /*@bfbba@*/
#define TPU0_TCN06_STOP	(*(volatile uint_io8_t*)0xB114025E)  /*@bfbba@*/
#define TPU0_TCN06_START	(*(volatile uint_io8_t*)0xB114025F)  /*@bfbba@*/

#define TPU0_TCN07	(TPU0.unTCN07.u32Register)  /*@rg@*/
#define TPU0_TCN07_ECPL	(TPU0.unTCN07.stcField.u24ECPL)  /*@bf@*/
#define TPU0_TCN07_IRC	(*(volatile uint_io8_t*)0xB114027A)  /*@bfbba@*/
#define TPU0_TCN07_IEC	(*(volatile uint_io8_t*)0xB114027B)  /*@bfbba@*/
#define TPU0_TCN07_IES	(*(volatile uint_io8_t*)0xB114027C)  /*@bfbba@*/
#define TPU0_TCN07_CONT	(*(volatile uint_io8_t*)0xB114027D)  /*@bfbba@*/
#define TPU0_TCN07_STOP	(*(volatile uint_io8_t*)0xB114027E)  /*@bfbba@*/
#define TPU0_TCN07_START	(*(volatile uint_io8_t*)0xB114027F)  /*@bfbba@*/

typedef struct stc_tpu0_tcn0n_field{
    uint_io32_t		u24ECPL:24;
    uint_io32_t		:2;
    uint_io32_t		u1IRC:1;
    uint_io32_t		u1IEC:1;
    uint_io32_t		u1IES:1;
    uint_io32_t		u1CONT:1;
    uint_io32_t		u1STOP:1;
    uint_io32_t		u1START:1;
}stc_tpu0_tcn0n_field_t;

typedef union un_tpu0_tcn0n{
    uint_io32_t		u32Register;
    stc_tpu0_tcn0n_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_tcn0n_t;

/* TCN1[0-7] */
#define TPU0_TCN10	(TPU0.unTCN10.u32Register)  /*@rg@*/
#define TPU0_TCN10_PS	(TPU0.unTCN10.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN10_TMOD	(*(volatile uint_io8_t*)0xB1140282)  /*@bfbba@*/
#define TPU0_TCN10_FRT	(*(volatile uint_io8_t*)0xB1140283)  /*@bfbba@*/
#define TPU0_TCN10_PL	(*(volatile uint_io8_t*)0xB1140284)  /*@bfbba@*/

#define TPU0_TCN11	(TPU0.unTCN11.u32Register)  /*@rg@*/
#define TPU0_TCN11_PS	(TPU0.unTCN11.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN11_TMOD	(*(volatile uint_io8_t*)0xB11402A2)  /*@bfbba@*/
#define TPU0_TCN11_FRT	(*(volatile uint_io8_t*)0xB11402A3)  /*@bfbba@*/
#define TPU0_TCN11_PL	(*(volatile uint_io8_t*)0xB11402A4)  /*@bfbba@*/

#define TPU0_TCN12	(TPU0.unTCN12.u32Register)  /*@rg@*/
#define TPU0_TCN12_PS	(TPU0.unTCN12.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN12_TMOD	(*(volatile uint_io8_t*)0xB11402C2)  /*@bfbba@*/
#define TPU0_TCN12_FRT	(*(volatile uint_io8_t*)0xB11402C3)  /*@bfbba@*/
#define TPU0_TCN12_PL	(*(volatile uint_io8_t*)0xB11402C4)  /*@bfbba@*/

#define TPU0_TCN13	(TPU0.unTCN13.u32Register)  /*@rg@*/
#define TPU0_TCN13_PS	(TPU0.unTCN13.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN13_TMOD	(*(volatile uint_io8_t*)0xB11402E2)  /*@bfbba@*/
#define TPU0_TCN13_FRT	(*(volatile uint_io8_t*)0xB11402E3)  /*@bfbba@*/
#define TPU0_TCN13_PL	(*(volatile uint_io8_t*)0xB11402E4)  /*@bfbba@*/

#define TPU0_TCN14	(TPU0.unTCN14.u32Register)  /*@rg@*/
#define TPU0_TCN14_PS	(TPU0.unTCN14.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN14_TMOD	(*(volatile uint_io8_t*)0xB1140302)  /*@bfbba@*/
#define TPU0_TCN14_FRT	(*(volatile uint_io8_t*)0xB1140303)  /*@bfbba@*/
#define TPU0_TCN14_PL	(*(volatile uint_io8_t*)0xB1140304)  /*@bfbba@*/

#define TPU0_TCN15	(TPU0.unTCN15.u32Register)  /*@rg@*/
#define TPU0_TCN15_PS	(TPU0.unTCN15.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN15_TMOD	(*(volatile uint_io8_t*)0xB1140322)  /*@bfbba@*/
#define TPU0_TCN15_FRT	(*(volatile uint_io8_t*)0xB1140323)  /*@bfbba@*/
#define TPU0_TCN15_PL	(*(volatile uint_io8_t*)0xB1140324)  /*@bfbba@*/

#define TPU0_TCN16	(TPU0.unTCN16.u32Register)  /*@rg@*/
#define TPU0_TCN16_PS	(TPU0.unTCN16.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN16_TMOD	(*(volatile uint_io8_t*)0xB1140342)  /*@bfbba@*/
#define TPU0_TCN16_FRT	(*(volatile uint_io8_t*)0xB1140343)  /*@bfbba@*/
#define TPU0_TCN16_PL	(*(volatile uint_io8_t*)0xB1140344)  /*@bfbba@*/

#define TPU0_TCN17	(TPU0.unTCN17.u32Register)  /*@rg@*/
#define TPU0_TCN17_PS	(TPU0.unTCN17.stcField.u2PS)  /*@bf@*/
#define TPU0_TCN17_TMOD	(*(volatile uint_io8_t*)0xB1140362)  /*@bfbba@*/
#define TPU0_TCN17_FRT	(*(volatile uint_io8_t*)0xB1140363)  /*@bfbba@*/
#define TPU0_TCN17_PL	(*(volatile uint_io8_t*)0xB1140364)  /*@bfbba@*/

typedef struct stc_tpu0_tcn1n_field{
    uint_io32_t		u2PS:2;
    uint_io32_t		u1TMOD:1;
    uint_io32_t		u1FRT:1;
    uint_io32_t		u1PL:1;
    uint_io32_t		:27;
}stc_tpu0_tcn1n_field_t;

typedef union un_tpu0_tcn1n{
    uint_io32_t		u32Register;
    stc_tpu0_tcn1n_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_tcn1n_t;

/* TCC[0-7] */
#define TPU0_TCC0	(TPU0.unTCC0.u32Register)  /*@rg@*/
#define TPU0_TCC0_TCC	(TPU0.unTCC0.stcField.u24TCC)  /*@bf@*/

#define TPU0_TCC1	(TPU0.unTCC1.u32Register)  /*@rg@*/
#define TPU0_TCC1_TCC	(TPU0.unTCC1.stcField.u24TCC)  /*@bf@*/

#define TPU0_TCC2	(TPU0.unTCC2.u32Register)  /*@rg@*/
#define TPU0_TCC2_TCC	(TPU0.unTCC2.stcField.u24TCC)  /*@bf@*/

#define TPU0_TCC3	(TPU0.unTCC3.u32Register)  /*@rg@*/
#define TPU0_TCC3_TCC	(TPU0.unTCC3.stcField.u24TCC)  /*@bf@*/

#define TPU0_TCC4	(TPU0.unTCC4.u32Register)  /*@rg@*/
#define TPU0_TCC4_TCC	(TPU0.unTCC4.stcField.u24TCC)  /*@bf@*/

#define TPU0_TCC5	(TPU0.unTCC5.u32Register)  /*@rg@*/
#define TPU0_TCC5_TCC	(TPU0.unTCC5.stcField.u24TCC)  /*@bf@*/

#define TPU0_TCC6	(TPU0.unTCC6.u32Register)  /*@rg@*/
#define TPU0_TCC6_TCC	(TPU0.unTCC6.stcField.u24TCC)  /*@bf@*/

#define TPU0_TCC7	(TPU0.unTCC7.u32Register)  /*@rg@*/
#define TPU0_TCC7_TCC	(TPU0.unTCC7.stcField.u24TCC)  /*@bf@*/

typedef struct stc_tpu0_tccn_field{
    uint_io32_t		u24TCC:24;
    uint_io32_t		:8;
}stc_tpu0_tccn_field_t;

typedef union un_tpu0_tccn{
    uint_io32_t		u32Register;
    stc_tpu0_tccn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_tpu0_tccn_t;


typedef struct stc_tpu0{
    un_tpu0_unlock_t	unUNLOCK;	/* 0x00000000 */
    un_tpu0_lst_t	unLST;	/* 0x00000004 */
    un_tpu0_cfg_t	unCFG;	/* 0x00000008 */
    un_tpu0_tir_t	unTIR;	/* 0x0000000C */
    un_tpu0_tst_t	unTST;	/* 0x00000010 */
    un_tpu0_tie_t	unTIE;	/* 0x00000014 */
    uint_io8_t	au8Reserved0[24];	/* 0x00000018 */
    un_tpu0_tcn0n_t	unTCN00;	/* 0x00000030 */
    un_tpu0_tcn0n_t	unTCN01;	/* 0x00000034 */
    un_tpu0_tcn0n_t	unTCN02;	/* 0x00000038 */
    un_tpu0_tcn0n_t	unTCN03;	/* 0x0000003C */
    un_tpu0_tcn0n_t	unTCN04;	/* 0x00000040 */
    un_tpu0_tcn0n_t	unTCN05;	/* 0x00000044 */
    un_tpu0_tcn0n_t	unTCN06;	/* 0x00000048 */
    un_tpu0_tcn0n_t	unTCN07;	/* 0x0000004C */
    un_tpu0_tcn1n_t	unTCN10;	/* 0x00000050 */
    un_tpu0_tcn1n_t	unTCN11;	/* 0x00000054 */
    un_tpu0_tcn1n_t	unTCN12;	/* 0x00000058 */
    un_tpu0_tcn1n_t	unTCN13;	/* 0x0000005C */
    un_tpu0_tcn1n_t	unTCN14;	/* 0x00000060 */
    un_tpu0_tcn1n_t	unTCN15;	/* 0x00000064 */
    un_tpu0_tcn1n_t	unTCN16;	/* 0x00000068 */
    un_tpu0_tcn1n_t	unTCN17;	/* 0x0000006C */
    un_tpu0_tccn_t	unTCC0;	/* 0x00000070 */
    un_tpu0_tccn_t	unTCC1;	/* 0x00000074 */
    un_tpu0_tccn_t	unTCC2;	/* 0x00000078 */
    un_tpu0_tccn_t	unTCC3;	/* 0x0000007C */
    un_tpu0_tccn_t	unTCC4;	/* 0x00000080 */
    un_tpu0_tccn_t	unTCC5;	/* 0x00000084 */
    un_tpu0_tccn_t	unTCC6;	/* 0x00000088 */
    un_tpu0_tccn_t	unTCC7;	/* 0x0000008C */
    uint_io8_t	au8Reserved1[32624];	/* 0x00000090 */
}stc_tpu0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_tpu0_t	stcTPU0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


#endif /* __S6J3200_TPU_H */
