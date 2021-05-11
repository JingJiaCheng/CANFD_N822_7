/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_CANP_H
#define __S6J3200_CANP_H

#include "s6j3200io_basetypes.h"

/* CANP base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CANP	stcCANP
#else /* __IO_DEFINE */
#define CANP	(*((volatile stc_canp_t*)0xB0688C00))
#endif /* __IO_DEFINE */

/* CTR */
#define CANP_CTR	(CANP.unCTR.u32Register)  /*@rg@*/
#define CANP_CTR_CANPRE	(CANP.unCTR.stcField.u6CANPRE)  /*@bf@*/
#define CANP_CTR_CPCKS	(*(volatile uint_io8_t*)0xB0C46008)  /*@bfbba@*/

typedef struct stc_canp_ctr_field{
    uint_io32_t		u6CANPRE:6;
    uint_io32_t		:2;
    uint_io32_t		u1CPCKS:1;
    uint_io32_t		:23;
}stc_canp_ctr_field_t;

typedef union un_canp_ctr{
    uint_io32_t		u32Register;
    stc_canp_ctr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_canp_ctr_t;

/* STR */
#define CANP_STR	(CANP.unSTR.u32Register)  /*@rg@*/
#define CANP_STR_BUSY	(*(volatile uint_io8_t*)0xB0C46020)  /*@bfbba@*/
#define CANP_STR_SCKM	(CANP.unSTR.stcField.u2SCKM)  /*@bf@*/

typedef struct stc_canp_str_field{
    uint_io32_t		u1BUSY:1;
    uint_io32_t		u2SCKM:2;
    uint_io32_t		:29;
}stc_canp_str_field_t;

typedef union un_canp_str{
    uint_io32_t		u32Register;
    stc_canp_str_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_canp_str_t;


typedef struct stc_canp{
    un_canp_ctr_t	unCTR;	/* 0x00000000 */
    un_canp_str_t	unSTR;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[29688];	/* 0x00000008 */
}stc_canp_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_canp_t	stcCANP;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 29696(0x7400) bytes */


#endif /* __S6J3200_CANP_H */
