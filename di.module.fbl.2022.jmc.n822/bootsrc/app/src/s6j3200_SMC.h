/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SMC_H
#define __S6J3200_SMC_H

#include "s6j3200io_basetypes.h"

/* SMC[0-5] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SMC0	stcSMC[0]
#define SMC1	stcSMC[1]
#define SMC2	stcSMC[2]
#define SMC3	stcSMC[3]
#define SMC4	stcSMC[4]
#define SMC5	stcSMC[5]
#else /* __IO_DEFINE */
#define SMC0	(*((volatile stc_smcn_t*)0xB48C4000))
#define SMC1	(*((volatile stc_smcn_t*)0xB48C4400))
#define SMC2	(*((volatile stc_smcn_t*)0xB48C4800))
#define SMC3	(*((volatile stc_smcn_t*)0xB48C4C00))
#define SMC4	(*((volatile stc_smcn_t*)0xB48C5000))
#define SMC5	(*((volatile stc_smcn_t*)0xB48C5400))
#endif /* __IO_DEFINE */

/* PWC */
#define SMC0_PWC	(SMC0.unPWC.u16Register)  /*@rg@*/
#define SMC0_PWC_SC	(*(volatile uint_io8_t*)0xB7E20002)  /*@bfbba@*/
#define SMC0_PWC_CE	(*(volatile uint_io8_t*)0xB7E20003)  /*@bfbba@*/
#define SMC0_PWC_P2_0	(SMC0.unPWC.stcField.u3P2_0)  /*@bf@*/
#define SMC0_PWC_P3	(*(volatile uint_io8_t*)0xB7E20009)  /*@bfbba@*/

#define SMC1_PWC	(SMC1.unPWC.u16Register)  /*@rg@*/
#define SMC1_PWC_SC	(*(volatile uint_io8_t*)0xB7E22002)  /*@bfbba@*/
#define SMC1_PWC_CE	(*(volatile uint_io8_t*)0xB7E22003)  /*@bfbba@*/
#define SMC1_PWC_P2_0	(SMC1.unPWC.stcField.u3P2_0)  /*@bf@*/
#define SMC1_PWC_P3	(*(volatile uint_io8_t*)0xB7E22009)  /*@bfbba@*/

#define SMC2_PWC	(SMC2.unPWC.u16Register)  /*@rg@*/
#define SMC2_PWC_SC	(*(volatile uint_io8_t*)0xB7E24002)  /*@bfbba@*/
#define SMC2_PWC_CE	(*(volatile uint_io8_t*)0xB7E24003)  /*@bfbba@*/
#define SMC2_PWC_P2_0	(SMC2.unPWC.stcField.u3P2_0)  /*@bf@*/
#define SMC2_PWC_P3	(*(volatile uint_io8_t*)0xB7E24009)  /*@bfbba@*/

#define SMC3_PWC	(SMC3.unPWC.u16Register)  /*@rg@*/
#define SMC3_PWC_SC	(*(volatile uint_io8_t*)0xB7E26002)  /*@bfbba@*/
#define SMC3_PWC_CE	(*(volatile uint_io8_t*)0xB7E26003)  /*@bfbba@*/
#define SMC3_PWC_P2_0	(SMC3.unPWC.stcField.u3P2_0)  /*@bf@*/
#define SMC3_PWC_P3	(*(volatile uint_io8_t*)0xB7E26009)  /*@bfbba@*/

#define SMC4_PWC	(SMC4.unPWC.u16Register)  /*@rg@*/
#define SMC4_PWC_SC	(*(volatile uint_io8_t*)0xB7E28002)  /*@bfbba@*/
#define SMC4_PWC_CE	(*(volatile uint_io8_t*)0xB7E28003)  /*@bfbba@*/
#define SMC4_PWC_P2_0	(SMC4.unPWC.stcField.u3P2_0)  /*@bf@*/
#define SMC4_PWC_P3	(*(volatile uint_io8_t*)0xB7E28009)  /*@bfbba@*/

#define SMC5_PWC	(SMC5.unPWC.u16Register)  /*@rg@*/
#define SMC5_PWC_SC	(*(volatile uint_io8_t*)0xB7E2A002)  /*@bfbba@*/
#define SMC5_PWC_CE	(*(volatile uint_io8_t*)0xB7E2A003)  /*@bfbba@*/
#define SMC5_PWC_P2_0	(SMC5.unPWC.stcField.u3P2_0)  /*@bf@*/
#define SMC5_PWC_P3	(*(volatile uint_io8_t*)0xB7E2A009)  /*@bfbba@*/

typedef struct stc_smcn_pwc_field{
    uint_io16_t		:2;
    uint_io16_t		u1SC:1;
    uint_io16_t		u1CE:1;
    uint_io16_t		u3P2_0:3;
    uint_io16_t		:2;
    uint_io16_t		u1P3:1;
    uint_io16_t		:6;
}stc_smcn_pwc_field_t;

typedef union un_smcn_pwc{
    uint_io16_t		u16Register;
    stc_smcn_pwc_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smcn_pwc_t;

/* PWC1 */
#define SMC0_PWC1	(SMC0.unPWC1.u16Register)  /*@rg@*/
#define SMC0_PWC1_D	(SMC0.unPWC1.stcField.u10D)  /*@bf@*/

#define SMC1_PWC1	(SMC1.unPWC1.u16Register)  /*@rg@*/
#define SMC1_PWC1_D	(SMC1.unPWC1.stcField.u10D)  /*@bf@*/

#define SMC2_PWC1	(SMC2.unPWC1.u16Register)  /*@rg@*/
#define SMC2_PWC1_D	(SMC2.unPWC1.stcField.u10D)  /*@bf@*/

#define SMC3_PWC1	(SMC3.unPWC1.u16Register)  /*@rg@*/
#define SMC3_PWC1_D	(SMC3.unPWC1.stcField.u10D)  /*@bf@*/

#define SMC4_PWC1	(SMC4.unPWC1.u16Register)  /*@rg@*/
#define SMC4_PWC1_D	(SMC4.unPWC1.stcField.u10D)  /*@bf@*/

#define SMC5_PWC1	(SMC5.unPWC1.u16Register)  /*@rg@*/
#define SMC5_PWC1_D	(SMC5.unPWC1.stcField.u10D)  /*@bf@*/

typedef struct stc_smcn_pwc1_field{
    uint_io16_t		u10D:10;
    uint_io16_t		:6;
}stc_smcn_pwc1_field_t;

typedef union un_smcn_pwc1{
    uint_io16_t		u16Register;
    stc_smcn_pwc1_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smcn_pwc1_t;

/* PWC2 */
#define SMC0_PWC2	(SMC0.unPWC2.u16Register)  /*@rg@*/
#define SMC0_PWC2_D	(SMC0.unPWC2.stcField.u10D)  /*@bf@*/

#define SMC1_PWC2	(SMC1.unPWC2.u16Register)  /*@rg@*/
#define SMC1_PWC2_D	(SMC1.unPWC2.stcField.u10D)  /*@bf@*/

#define SMC2_PWC2	(SMC2.unPWC2.u16Register)  /*@rg@*/
#define SMC2_PWC2_D	(SMC2.unPWC2.stcField.u10D)  /*@bf@*/

#define SMC3_PWC2	(SMC3.unPWC2.u16Register)  /*@rg@*/
#define SMC3_PWC2_D	(SMC3.unPWC2.stcField.u10D)  /*@bf@*/

#define SMC4_PWC2	(SMC4.unPWC2.u16Register)  /*@rg@*/
#define SMC4_PWC2_D	(SMC4.unPWC2.stcField.u10D)  /*@bf@*/

#define SMC5_PWC2	(SMC5.unPWC2.u16Register)  /*@rg@*/
#define SMC5_PWC2_D	(SMC5.unPWC2.stcField.u10D)  /*@bf@*/

typedef struct stc_smcn_pwc2_field{
    uint_io16_t		u10D:10;
    uint_io16_t		:6;
}stc_smcn_pwc2_field_t;

typedef union un_smcn_pwc2{
    uint_io16_t		u16Register;
    stc_smcn_pwc2_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smcn_pwc2_t;

/* PWS */
#define SMC0_PWS	(SMC0.unPWS.u16Register)  /*@rg@*/
#define SMC0_PWS_M1	(SMC0.unPWS.stcField.u3M1)  /*@bf@*/
#define SMC0_PWS_P1	(SMC0.unPWS.stcField.u3P1)  /*@bf@*/
#define SMC0_PWS_M2	(SMC0.unPWS.stcField.u3M2)  /*@bf@*/
#define SMC0_PWS_P2	(SMC0.unPWS.stcField.u3P2)  /*@bf@*/
#define SMC0_PWS_BS	(*(volatile uint_io8_t*)0xB7E2003E)  /*@bfbba@*/

#define SMC1_PWS	(SMC1.unPWS.u16Register)  /*@rg@*/
#define SMC1_PWS_M1	(SMC1.unPWS.stcField.u3M1)  /*@bf@*/
#define SMC1_PWS_P1	(SMC1.unPWS.stcField.u3P1)  /*@bf@*/
#define SMC1_PWS_M2	(SMC1.unPWS.stcField.u3M2)  /*@bf@*/
#define SMC1_PWS_P2	(SMC1.unPWS.stcField.u3P2)  /*@bf@*/
#define SMC1_PWS_BS	(*(volatile uint_io8_t*)0xB7E2203E)  /*@bfbba@*/

#define SMC2_PWS	(SMC2.unPWS.u16Register)  /*@rg@*/
#define SMC2_PWS_M1	(SMC2.unPWS.stcField.u3M1)  /*@bf@*/
#define SMC2_PWS_P1	(SMC2.unPWS.stcField.u3P1)  /*@bf@*/
#define SMC2_PWS_M2	(SMC2.unPWS.stcField.u3M2)  /*@bf@*/
#define SMC2_PWS_P2	(SMC2.unPWS.stcField.u3P2)  /*@bf@*/
#define SMC2_PWS_BS	(*(volatile uint_io8_t*)0xB7E2403E)  /*@bfbba@*/

#define SMC3_PWS	(SMC3.unPWS.u16Register)  /*@rg@*/
#define SMC3_PWS_M1	(SMC3.unPWS.stcField.u3M1)  /*@bf@*/
#define SMC3_PWS_P1	(SMC3.unPWS.stcField.u3P1)  /*@bf@*/
#define SMC3_PWS_M2	(SMC3.unPWS.stcField.u3M2)  /*@bf@*/
#define SMC3_PWS_P2	(SMC3.unPWS.stcField.u3P2)  /*@bf@*/
#define SMC3_PWS_BS	(*(volatile uint_io8_t*)0xB7E2603E)  /*@bfbba@*/

#define SMC4_PWS	(SMC4.unPWS.u16Register)  /*@rg@*/
#define SMC4_PWS_M1	(SMC4.unPWS.stcField.u3M1)  /*@bf@*/
#define SMC4_PWS_P1	(SMC4.unPWS.stcField.u3P1)  /*@bf@*/
#define SMC4_PWS_M2	(SMC4.unPWS.stcField.u3M2)  /*@bf@*/
#define SMC4_PWS_P2	(SMC4.unPWS.stcField.u3P2)  /*@bf@*/
#define SMC4_PWS_BS	(*(volatile uint_io8_t*)0xB7E2803E)  /*@bfbba@*/

#define SMC5_PWS	(SMC5.unPWS.u16Register)  /*@rg@*/
#define SMC5_PWS_M1	(SMC5.unPWS.stcField.u3M1)  /*@bf@*/
#define SMC5_PWS_P1	(SMC5.unPWS.stcField.u3P1)  /*@bf@*/
#define SMC5_PWS_M2	(SMC5.unPWS.stcField.u3M2)  /*@bf@*/
#define SMC5_PWS_P2	(SMC5.unPWS.stcField.u3P2)  /*@bf@*/
#define SMC5_PWS_BS	(*(volatile uint_io8_t*)0xB7E2A03E)  /*@bfbba@*/

typedef struct stc_smcn_pws_field{
    uint_io16_t		u3M1:3;
    uint_io16_t		u3P1:3;
    uint_io16_t		:2;
    uint_io16_t		u3M2:3;
    uint_io16_t		u3P2:3;
    uint_io16_t		u1BS:1;
    uint_io16_t		:1;
}stc_smcn_pws_field_t;

typedef union un_smcn_pws{
    uint_io16_t		u16Register;
    stc_smcn_pws_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smcn_pws_t;

/* PWSS */
#define SMC0_PWSS	(SMC0.unPWSS.u16Register)  /*@rg@*/
#define SMC0_PWSS_BSS	(*(volatile uint_io8_t*)0xB7E2004E)  /*@bfbba@*/

#define SMC1_PWSS	(SMC1.unPWSS.u16Register)  /*@rg@*/
#define SMC1_PWSS_BSS	(*(volatile uint_io8_t*)0xB7E2204E)  /*@bfbba@*/

#define SMC2_PWSS	(SMC2.unPWSS.u16Register)  /*@rg@*/
#define SMC2_PWSS_BSS	(*(volatile uint_io8_t*)0xB7E2404E)  /*@bfbba@*/

#define SMC3_PWSS	(SMC3.unPWSS.u16Register)  /*@rg@*/
#define SMC3_PWSS_BSS	(*(volatile uint_io8_t*)0xB7E2604E)  /*@bfbba@*/

#define SMC4_PWSS	(SMC4.unPWSS.u16Register)  /*@rg@*/
#define SMC4_PWSS_BSS	(*(volatile uint_io8_t*)0xB7E2804E)  /*@bfbba@*/

#define SMC5_PWSS	(SMC5.unPWSS.u16Register)  /*@rg@*/
#define SMC5_PWSS_BSS	(*(volatile uint_io8_t*)0xB7E2A04E)  /*@bfbba@*/

typedef struct stc_smcn_pwss_field{
    uint_io16_t		:14;
    uint_io16_t		u1BSS:1;
    uint_io16_t		:1;
}stc_smcn_pwss_field_t;

typedef union un_smcn_pwss{
    uint_io16_t		u16Register;
    stc_smcn_pwss_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smcn_pwss_t;

/* PTRGDL */
#define SMC0_PTRGDL	(SMC0.unPTRGDL.u16Register)  /*@rg@*/
#define SMC0_PTRGDL_D	(SMC0.unPTRGDL.au8Byte[0])  /*@bfbyte@*/

#define SMC1_PTRGDL	(SMC1.unPTRGDL.u16Register)  /*@rg@*/
#define SMC1_PTRGDL_D	(SMC1.unPTRGDL.au8Byte[0])  /*@bfbyte@*/

#define SMC2_PTRGDL	(SMC2.unPTRGDL.u16Register)  /*@rg@*/
#define SMC2_PTRGDL_D	(SMC2.unPTRGDL.au8Byte[0])  /*@bfbyte@*/

#define SMC3_PTRGDL	(SMC3.unPTRGDL.u16Register)  /*@rg@*/
#define SMC3_PTRGDL_D	(SMC3.unPTRGDL.au8Byte[0])  /*@bfbyte@*/

#define SMC4_PTRGDL	(SMC4.unPTRGDL.u16Register)  /*@rg@*/
#define SMC4_PTRGDL_D	(SMC4.unPTRGDL.au8Byte[0])  /*@bfbyte@*/

#define SMC5_PTRGDL	(SMC5.unPTRGDL.u16Register)  /*@rg@*/
#define SMC5_PTRGDL_D	(SMC5.unPTRGDL.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_smcn_ptrgdl_field{
    uint_io16_t		u8D:8;
    uint_io16_t		:8;
}stc_smcn_ptrgdl_field_t;

typedef union un_smcn_ptrgdl{
    uint_io16_t		u16Register;
    stc_smcn_ptrgdl_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smcn_ptrgdl_t;


typedef struct stc_smcn{
    un_smcn_pwc_t	unPWC;	/* 0x00000000 */
    un_smcn_pwc1_t	unPWC1;	/* 0x00000002 */
    un_smcn_pwc2_t	unPWC2;	/* 0x00000004 */
    un_smcn_pws_t	unPWS;	/* 0x00000006 */
    un_smcn_pwss_t	unPWSS;	/* 0x00000008 */
    un_smcn_ptrgdl_t	unPTRGDL;	/* 0x0000000A */
    uint_io8_t	au8Reserved0[1012];	/* 0x0000000C */
}stc_smcn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_smcn_t	stcSMC[6];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_SMC_H */
