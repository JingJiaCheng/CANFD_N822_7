/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_BASETYPES_H
#define __S6J3200_BASETYPES_H

#include "stdint.h"

#ifdef __IO_DEFINE
#define __IO_DECLARATOR	volatile
#endif /* __IO_DEFINE */

#ifdef __IO_EXTERN
#define __IO_DECLARATOR	extern volatile
#endif /* __IO_EXTERN */

typedef volatile uint32_t	uint_io32_t;
typedef volatile uint16_t	uint_io16_t;
typedef volatile uint8_t	uint_io8_t;

#endif /* __S6J3200_BASETYPES_H */
