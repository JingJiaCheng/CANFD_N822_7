/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SMCTG_H
#define __S6J3200_SMCTG_H

#include "s6j3200io_basetypes.h"

/* SMCTG0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SMCTG0	stcSMCTG0
#else /* __IO_DEFINE */
#define SMCTG0	(*((volatile stc_smctg0_t*)0xB48C5800))
#endif /* __IO_DEFINE */

/* PTRGS */
#define SMCTG0_PTRGS	(SMCTG0.unPTRGS.u16Register)  /*@rg@*/
#define SMCTG0_PTRGS_S10	(*(volatile uint_io8_t*)0xB7E2C000)  /*@bfbba@*/
#define SMCTG0_PTRGS_S11	(*(volatile uint_io8_t*)0xB7E2C001)  /*@bfbba@*/
#define SMCTG0_PTRGS_S12	(*(volatile uint_io8_t*)0xB7E2C002)  /*@bfbba@*/
#define SMCTG0_PTRGS_S13	(*(volatile uint_io8_t*)0xB7E2C003)  /*@bfbba@*/
#define SMCTG0_PTRGS_S14	(*(volatile uint_io8_t*)0xB7E2C004)  /*@bfbba@*/
#define SMCTG0_PTRGS_S15	(*(volatile uint_io8_t*)0xB7E2C005)  /*@bfbba@*/
#define SMCTG0_PTRGS_S20	(*(volatile uint_io8_t*)0xB7E2C008)  /*@bfbba@*/
#define SMCTG0_PTRGS_S21	(*(volatile uint_io8_t*)0xB7E2C009)  /*@bfbba@*/
#define SMCTG0_PTRGS_S22	(*(volatile uint_io8_t*)0xB7E2C00A)  /*@bfbba@*/
#define SMCTG0_PTRGS_S23	(*(volatile uint_io8_t*)0xB7E2C00B)  /*@bfbba@*/
#define SMCTG0_PTRGS_S24	(*(volatile uint_io8_t*)0xB7E2C00C)  /*@bfbba@*/
#define SMCTG0_PTRGS_S25	(*(volatile uint_io8_t*)0xB7E2C00D)  /*@bfbba@*/

typedef struct stc_smctg0_ptrgs_field{
    uint_io16_t		u1S10:1;
    uint_io16_t		u1S11:1;
    uint_io16_t		u1S12:1;
    uint_io16_t		u1S13:1;
    uint_io16_t		u1S14:1;
    uint_io16_t		u1S15:1;
    uint_io16_t		:2;
    uint_io16_t		u1S20:1;
    uint_io16_t		u1S21:1;
    uint_io16_t		u1S22:1;
    uint_io16_t		u1S23:1;
    uint_io16_t		u1S24:1;
    uint_io16_t		u1S25:1;
    uint_io16_t		:2;
}stc_smctg0_ptrgs_field_t;

typedef union un_smctg0_ptrgs{
    uint_io16_t		u16Register;
    stc_smctg0_ptrgs_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smctg0_ptrgs_t;

/* PTRG */
#define SMCTG0_PTRG	(SMCTG0.unPTRG.u16Register)  /*@rg@*/
#define SMCTG0_PTRG_TR1	(*(volatile uint_io8_t*)0xB7E2C010)  /*@bfbba@*/
#define SMCTG0_PTRG_TR2	(*(volatile uint_io8_t*)0xB7E2C011)  /*@bfbba@*/

typedef struct stc_smctg0_ptrg_field{
    uint_io16_t		u1TR1:1;
    uint_io16_t		u1TR2:1;
    uint_io16_t		:14;
}stc_smctg0_ptrg_field_t;

typedef union un_smctg0_ptrg{
    uint_io16_t		u16Register;
    stc_smctg0_ptrg_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_smctg0_ptrg_t;


typedef struct stc_smctg0{
    un_smctg0_ptrgs_t	unPTRGS;	/* 0x00000000 */
    un_smctg0_ptrg_t	unPTRG;	/* 0x00000002 */
    uint_io8_t	au8Reserved0[1020];	/* 0x00000004 */
}stc_smctg0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_smctg0_t	stcSMCTG0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_SMCTG_H */
