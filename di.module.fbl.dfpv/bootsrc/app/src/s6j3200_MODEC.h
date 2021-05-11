/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MODEC_H
#define __S6J3200_MODEC_H

#include "s6j3200io_basetypes.h"

/* MODEC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MODEC	stcMODEC
#else /* __IO_DEFINE */
#define MODEC	(*((volatile stc_modec_t*)0xB0600800))
#endif /* __IO_DEFINE */

/* MODER */
#define MODEC_MODER	(MODEC.unMODER.u32Register)  /*@rg@*/
#define MODEC_MODER_MD	(*(volatile uint_io8_t*)0xB080400C)  /*@bfbba@*/
#define MODEC_MODER_USERMODE	(*(volatile uint_io8_t*)0xB080401F)  /*@bfbba@*/

typedef struct stc_modec_moder_field{
    uint_io32_t		:12;
    uint_io32_t		u1MD:1;
    uint_io32_t		:18;
    uint_io32_t		u1USERMODE:1;
}stc_modec_moder_field_t;

typedef union un_modec_moder{
    uint_io32_t		u32Register;
    stc_modec_moder_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_modec_moder_t;


typedef struct stc_modec{
    un_modec_moder_t	unMODER;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[47100];	/* 0x00000004 */
}stc_modec_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_modec_t	stcMODEC;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 47104(0xb800) bytes */


#endif /* __S6J3200_MODEC_H */
