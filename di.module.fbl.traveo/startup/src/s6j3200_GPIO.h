/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_GPIO_H
#define __S6J3200_GPIO_H

#include "s6j3200io_basetypes.h"

/* GPIO base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GPIO	stcGPIO
#else /* __IO_DEFINE */
#define GPIO	(*((volatile stc_gpio_t*)0xB4738000))
#endif /* __IO_DEFINE */

/* POSR[0-15] */
#define GPIO_POSR0	(GPIO.unPOSR0.u32Register)  /*@rg@*/
#define GPIO_POSR0_POS0	(*(volatile uint_io8_t*)0xB71C0000)  /*@bfbba@*/
#define GPIO_POSR0_POS1	(*(volatile uint_io8_t*)0xB71C0001)  /*@bfbba@*/
#define GPIO_POSR0_POS2	(*(volatile uint_io8_t*)0xB71C0002)  /*@bfbba@*/
#define GPIO_POSR0_POS3	(*(volatile uint_io8_t*)0xB71C0003)  /*@bfbba@*/
#define GPIO_POSR0_POS4	(*(volatile uint_io8_t*)0xB71C0004)  /*@bfbba@*/
#define GPIO_POSR0_POS5	(*(volatile uint_io8_t*)0xB71C0005)  /*@bfbba@*/
#define GPIO_POSR0_POS6	(*(volatile uint_io8_t*)0xB71C0006)  /*@bfbba@*/
#define GPIO_POSR0_POS7	(*(volatile uint_io8_t*)0xB71C0007)  /*@bfbba@*/
#define GPIO_POSR0_POS8	(*(volatile uint_io8_t*)0xB71C0008)  /*@bfbba@*/
#define GPIO_POSR0_POS9	(*(volatile uint_io8_t*)0xB71C0009)  /*@bfbba@*/
#define GPIO_POSR0_POS10	(*(volatile uint_io8_t*)0xB71C000A)  /*@bfbba@*/
#define GPIO_POSR0_POS11	(*(volatile uint_io8_t*)0xB71C000B)  /*@bfbba@*/
#define GPIO_POSR0_POS12	(*(volatile uint_io8_t*)0xB71C000C)  /*@bfbba@*/
#define GPIO_POSR0_POS13	(*(volatile uint_io8_t*)0xB71C000D)  /*@bfbba@*/
#define GPIO_POSR0_POS14	(*(volatile uint_io8_t*)0xB71C000E)  /*@bfbba@*/
#define GPIO_POSR0_POS15	(*(volatile uint_io8_t*)0xB71C000F)  /*@bfbba@*/
#define GPIO_POSR0_POS16	(*(volatile uint_io8_t*)0xB71C0010)  /*@bfbba@*/
#define GPIO_POSR0_POS17	(*(volatile uint_io8_t*)0xB71C0011)  /*@bfbba@*/
#define GPIO_POSR0_POS18	(*(volatile uint_io8_t*)0xB71C0012)  /*@bfbba@*/
#define GPIO_POSR0_POS19	(*(volatile uint_io8_t*)0xB71C0013)  /*@bfbba@*/
#define GPIO_POSR0_POS20	(*(volatile uint_io8_t*)0xB71C0014)  /*@bfbba@*/
#define GPIO_POSR0_POS21	(*(volatile uint_io8_t*)0xB71C0015)  /*@bfbba@*/
#define GPIO_POSR0_POS22	(*(volatile uint_io8_t*)0xB71C0016)  /*@bfbba@*/
#define GPIO_POSR0_POS23	(*(volatile uint_io8_t*)0xB71C0017)  /*@bfbba@*/
#define GPIO_POSR0_POS24	(*(volatile uint_io8_t*)0xB71C0018)  /*@bfbba@*/
#define GPIO_POSR0_POS25	(*(volatile uint_io8_t*)0xB71C0019)  /*@bfbba@*/
#define GPIO_POSR0_POS26	(*(volatile uint_io8_t*)0xB71C001A)  /*@bfbba@*/
#define GPIO_POSR0_POS27	(*(volatile uint_io8_t*)0xB71C001B)  /*@bfbba@*/
#define GPIO_POSR0_POS28	(*(volatile uint_io8_t*)0xB71C001C)  /*@bfbba@*/
#define GPIO_POSR0_POS29	(*(volatile uint_io8_t*)0xB71C001D)  /*@bfbba@*/
#define GPIO_POSR0_POS30	(*(volatile uint_io8_t*)0xB71C001E)  /*@bfbba@*/
#define GPIO_POSR0_POS31	(*(volatile uint_io8_t*)0xB71C001F)  /*@bfbba@*/

#define GPIO_POSR1	(GPIO.unPOSR1.u32Register)  /*@rg@*/
#define GPIO_POSR1_POS0	(*(volatile uint_io8_t*)0xB71C0080)  /*@bfbba@*/
#define GPIO_POSR1_POS1	(*(volatile uint_io8_t*)0xB71C0081)  /*@bfbba@*/
#define GPIO_POSR1_POS2	(*(volatile uint_io8_t*)0xB71C0082)  /*@bfbba@*/
#define GPIO_POSR1_POS3	(*(volatile uint_io8_t*)0xB71C0083)  /*@bfbba@*/
#define GPIO_POSR1_POS4	(*(volatile uint_io8_t*)0xB71C0084)  /*@bfbba@*/
#define GPIO_POSR1_POS5	(*(volatile uint_io8_t*)0xB71C0085)  /*@bfbba@*/
#define GPIO_POSR1_POS6	(*(volatile uint_io8_t*)0xB71C0086)  /*@bfbba@*/
#define GPIO_POSR1_POS7	(*(volatile uint_io8_t*)0xB71C0087)  /*@bfbba@*/
#define GPIO_POSR1_POS8	(*(volatile uint_io8_t*)0xB71C0088)  /*@bfbba@*/
#define GPIO_POSR1_POS9	(*(volatile uint_io8_t*)0xB71C0089)  /*@bfbba@*/
#define GPIO_POSR1_POS10	(*(volatile uint_io8_t*)0xB71C008A)  /*@bfbba@*/
#define GPIO_POSR1_POS11	(*(volatile uint_io8_t*)0xB71C008B)  /*@bfbba@*/
#define GPIO_POSR1_POS12	(*(volatile uint_io8_t*)0xB71C008C)  /*@bfbba@*/
#define GPIO_POSR1_POS13	(*(volatile uint_io8_t*)0xB71C008D)  /*@bfbba@*/
#define GPIO_POSR1_POS14	(*(volatile uint_io8_t*)0xB71C008E)  /*@bfbba@*/
#define GPIO_POSR1_POS15	(*(volatile uint_io8_t*)0xB71C008F)  /*@bfbba@*/
#define GPIO_POSR1_POS16	(*(volatile uint_io8_t*)0xB71C0090)  /*@bfbba@*/
#define GPIO_POSR1_POS17	(*(volatile uint_io8_t*)0xB71C0091)  /*@bfbba@*/
#define GPIO_POSR1_POS18	(*(volatile uint_io8_t*)0xB71C0092)  /*@bfbba@*/
#define GPIO_POSR1_POS19	(*(volatile uint_io8_t*)0xB71C0093)  /*@bfbba@*/
#define GPIO_POSR1_POS20	(*(volatile uint_io8_t*)0xB71C0094)  /*@bfbba@*/
#define GPIO_POSR1_POS21	(*(volatile uint_io8_t*)0xB71C0095)  /*@bfbba@*/
#define GPIO_POSR1_POS22	(*(volatile uint_io8_t*)0xB71C0096)  /*@bfbba@*/
#define GPIO_POSR1_POS23	(*(volatile uint_io8_t*)0xB71C0097)  /*@bfbba@*/
#define GPIO_POSR1_POS24	(*(volatile uint_io8_t*)0xB71C0098)  /*@bfbba@*/
#define GPIO_POSR1_POS25	(*(volatile uint_io8_t*)0xB71C0099)  /*@bfbba@*/
#define GPIO_POSR1_POS26	(*(volatile uint_io8_t*)0xB71C009A)  /*@bfbba@*/
#define GPIO_POSR1_POS27	(*(volatile uint_io8_t*)0xB71C009B)  /*@bfbba@*/
#define GPIO_POSR1_POS28	(*(volatile uint_io8_t*)0xB71C009C)  /*@bfbba@*/
#define GPIO_POSR1_POS29	(*(volatile uint_io8_t*)0xB71C009D)  /*@bfbba@*/
#define GPIO_POSR1_POS30	(*(volatile uint_io8_t*)0xB71C009E)  /*@bfbba@*/
#define GPIO_POSR1_POS31	(*(volatile uint_io8_t*)0xB71C009F)  /*@bfbba@*/

#define GPIO_POSR2	(GPIO.unPOSR2.u32Register)  /*@rg@*/
#define GPIO_POSR2_POS0	(*(volatile uint_io8_t*)0xB71C0100)  /*@bfbba@*/
#define GPIO_POSR2_POS1	(*(volatile uint_io8_t*)0xB71C0101)  /*@bfbba@*/
#define GPIO_POSR2_POS2	(*(volatile uint_io8_t*)0xB71C0102)  /*@bfbba@*/
#define GPIO_POSR2_POS3	(*(volatile uint_io8_t*)0xB71C0103)  /*@bfbba@*/
#define GPIO_POSR2_POS4	(*(volatile uint_io8_t*)0xB71C0104)  /*@bfbba@*/
#define GPIO_POSR2_POS5	(*(volatile uint_io8_t*)0xB71C0105)  /*@bfbba@*/
#define GPIO_POSR2_POS6	(*(volatile uint_io8_t*)0xB71C0106)  /*@bfbba@*/
#define GPIO_POSR2_POS7	(*(volatile uint_io8_t*)0xB71C0107)  /*@bfbba@*/
#define GPIO_POSR2_POS8	(*(volatile uint_io8_t*)0xB71C0108)  /*@bfbba@*/
#define GPIO_POSR2_POS9	(*(volatile uint_io8_t*)0xB71C0109)  /*@bfbba@*/
#define GPIO_POSR2_POS10	(*(volatile uint_io8_t*)0xB71C010A)  /*@bfbba@*/
#define GPIO_POSR2_POS11	(*(volatile uint_io8_t*)0xB71C010B)  /*@bfbba@*/
#define GPIO_POSR2_POS12	(*(volatile uint_io8_t*)0xB71C010C)  /*@bfbba@*/
#define GPIO_POSR2_POS13	(*(volatile uint_io8_t*)0xB71C010D)  /*@bfbba@*/
#define GPIO_POSR2_POS14	(*(volatile uint_io8_t*)0xB71C010E)  /*@bfbba@*/
#define GPIO_POSR2_POS15	(*(volatile uint_io8_t*)0xB71C010F)  /*@bfbba@*/
#define GPIO_POSR2_POS16	(*(volatile uint_io8_t*)0xB71C0110)  /*@bfbba@*/
#define GPIO_POSR2_POS17	(*(volatile uint_io8_t*)0xB71C0111)  /*@bfbba@*/
#define GPIO_POSR2_POS18	(*(volatile uint_io8_t*)0xB71C0112)  /*@bfbba@*/
#define GPIO_POSR2_POS19	(*(volatile uint_io8_t*)0xB71C0113)  /*@bfbba@*/
#define GPIO_POSR2_POS20	(*(volatile uint_io8_t*)0xB71C0114)  /*@bfbba@*/
#define GPIO_POSR2_POS21	(*(volatile uint_io8_t*)0xB71C0115)  /*@bfbba@*/
#define GPIO_POSR2_POS22	(*(volatile uint_io8_t*)0xB71C0116)  /*@bfbba@*/
#define GPIO_POSR2_POS23	(*(volatile uint_io8_t*)0xB71C0117)  /*@bfbba@*/
#define GPIO_POSR2_POS24	(*(volatile uint_io8_t*)0xB71C0118)  /*@bfbba@*/
#define GPIO_POSR2_POS25	(*(volatile uint_io8_t*)0xB71C0119)  /*@bfbba@*/
#define GPIO_POSR2_POS26	(*(volatile uint_io8_t*)0xB71C011A)  /*@bfbba@*/
#define GPIO_POSR2_POS27	(*(volatile uint_io8_t*)0xB71C011B)  /*@bfbba@*/
#define GPIO_POSR2_POS28	(*(volatile uint_io8_t*)0xB71C011C)  /*@bfbba@*/
#define GPIO_POSR2_POS29	(*(volatile uint_io8_t*)0xB71C011D)  /*@bfbba@*/
#define GPIO_POSR2_POS30	(*(volatile uint_io8_t*)0xB71C011E)  /*@bfbba@*/
#define GPIO_POSR2_POS31	(*(volatile uint_io8_t*)0xB71C011F)  /*@bfbba@*/

#define GPIO_POSR3	(GPIO.unPOSR3.u32Register)  /*@rg@*/
#define GPIO_POSR3_POS0	(*(volatile uint_io8_t*)0xB71C0180)  /*@bfbba@*/
#define GPIO_POSR3_POS1	(*(volatile uint_io8_t*)0xB71C0181)  /*@bfbba@*/
#define GPIO_POSR3_POS2	(*(volatile uint_io8_t*)0xB71C0182)  /*@bfbba@*/
#define GPIO_POSR3_POS3	(*(volatile uint_io8_t*)0xB71C0183)  /*@bfbba@*/
#define GPIO_POSR3_POS4	(*(volatile uint_io8_t*)0xB71C0184)  /*@bfbba@*/
#define GPIO_POSR3_POS5	(*(volatile uint_io8_t*)0xB71C0185)  /*@bfbba@*/
#define GPIO_POSR3_POS6	(*(volatile uint_io8_t*)0xB71C0186)  /*@bfbba@*/
#define GPIO_POSR3_POS7	(*(volatile uint_io8_t*)0xB71C0187)  /*@bfbba@*/
#define GPIO_POSR3_POS8	(*(volatile uint_io8_t*)0xB71C0188)  /*@bfbba@*/
#define GPIO_POSR3_POS9	(*(volatile uint_io8_t*)0xB71C0189)  /*@bfbba@*/
#define GPIO_POSR3_POS10	(*(volatile uint_io8_t*)0xB71C018A)  /*@bfbba@*/
#define GPIO_POSR3_POS11	(*(volatile uint_io8_t*)0xB71C018B)  /*@bfbba@*/
#define GPIO_POSR3_POS12	(*(volatile uint_io8_t*)0xB71C018C)  /*@bfbba@*/
#define GPIO_POSR3_POS13	(*(volatile uint_io8_t*)0xB71C018D)  /*@bfbba@*/
#define GPIO_POSR3_POS14	(*(volatile uint_io8_t*)0xB71C018E)  /*@bfbba@*/
#define GPIO_POSR3_POS15	(*(volatile uint_io8_t*)0xB71C018F)  /*@bfbba@*/
#define GPIO_POSR3_POS16	(*(volatile uint_io8_t*)0xB71C0190)  /*@bfbba@*/
#define GPIO_POSR3_POS17	(*(volatile uint_io8_t*)0xB71C0191)  /*@bfbba@*/
#define GPIO_POSR3_POS18	(*(volatile uint_io8_t*)0xB71C0192)  /*@bfbba@*/
#define GPIO_POSR3_POS19	(*(volatile uint_io8_t*)0xB71C0193)  /*@bfbba@*/
#define GPIO_POSR3_POS20	(*(volatile uint_io8_t*)0xB71C0194)  /*@bfbba@*/
#define GPIO_POSR3_POS21	(*(volatile uint_io8_t*)0xB71C0195)  /*@bfbba@*/
#define GPIO_POSR3_POS22	(*(volatile uint_io8_t*)0xB71C0196)  /*@bfbba@*/
#define GPIO_POSR3_POS23	(*(volatile uint_io8_t*)0xB71C0197)  /*@bfbba@*/
#define GPIO_POSR3_POS24	(*(volatile uint_io8_t*)0xB71C0198)  /*@bfbba@*/
#define GPIO_POSR3_POS25	(*(volatile uint_io8_t*)0xB71C0199)  /*@bfbba@*/
#define GPIO_POSR3_POS26	(*(volatile uint_io8_t*)0xB71C019A)  /*@bfbba@*/
#define GPIO_POSR3_POS27	(*(volatile uint_io8_t*)0xB71C019B)  /*@bfbba@*/
#define GPIO_POSR3_POS28	(*(volatile uint_io8_t*)0xB71C019C)  /*@bfbba@*/
#define GPIO_POSR3_POS29	(*(volatile uint_io8_t*)0xB71C019D)  /*@bfbba@*/
#define GPIO_POSR3_POS30	(*(volatile uint_io8_t*)0xB71C019E)  /*@bfbba@*/
#define GPIO_POSR3_POS31	(*(volatile uint_io8_t*)0xB71C019F)  /*@bfbba@*/

#define GPIO_POSR4	(GPIO.unPOSR4.u32Register)  /*@rg@*/
#define GPIO_POSR4_POS0	(*(volatile uint_io8_t*)0xB71C0200)  /*@bfbba@*/
#define GPIO_POSR4_POS1	(*(volatile uint_io8_t*)0xB71C0201)  /*@bfbba@*/
#define GPIO_POSR4_POS2	(*(volatile uint_io8_t*)0xB71C0202)  /*@bfbba@*/
#define GPIO_POSR4_POS3	(*(volatile uint_io8_t*)0xB71C0203)  /*@bfbba@*/
#define GPIO_POSR4_POS4	(*(volatile uint_io8_t*)0xB71C0204)  /*@bfbba@*/
#define GPIO_POSR4_POS5	(*(volatile uint_io8_t*)0xB71C0205)  /*@bfbba@*/
#define GPIO_POSR4_POS6	(*(volatile uint_io8_t*)0xB71C0206)  /*@bfbba@*/
#define GPIO_POSR4_POS7	(*(volatile uint_io8_t*)0xB71C0207)  /*@bfbba@*/
#define GPIO_POSR4_POS8	(*(volatile uint_io8_t*)0xB71C0208)  /*@bfbba@*/
#define GPIO_POSR4_POS9	(*(volatile uint_io8_t*)0xB71C0209)  /*@bfbba@*/
#define GPIO_POSR4_POS10	(*(volatile uint_io8_t*)0xB71C020A)  /*@bfbba@*/
#define GPIO_POSR4_POS11	(*(volatile uint_io8_t*)0xB71C020B)  /*@bfbba@*/
#define GPIO_POSR4_POS12	(*(volatile uint_io8_t*)0xB71C020C)  /*@bfbba@*/
#define GPIO_POSR4_POS13	(*(volatile uint_io8_t*)0xB71C020D)  /*@bfbba@*/
#define GPIO_POSR4_POS14	(*(volatile uint_io8_t*)0xB71C020E)  /*@bfbba@*/
#define GPIO_POSR4_POS15	(*(volatile uint_io8_t*)0xB71C020F)  /*@bfbba@*/
#define GPIO_POSR4_POS16	(*(volatile uint_io8_t*)0xB71C0210)  /*@bfbba@*/
#define GPIO_POSR4_POS17	(*(volatile uint_io8_t*)0xB71C0211)  /*@bfbba@*/
#define GPIO_POSR4_POS18	(*(volatile uint_io8_t*)0xB71C0212)  /*@bfbba@*/
#define GPIO_POSR4_POS19	(*(volatile uint_io8_t*)0xB71C0213)  /*@bfbba@*/
#define GPIO_POSR4_POS20	(*(volatile uint_io8_t*)0xB71C0214)  /*@bfbba@*/
#define GPIO_POSR4_POS21	(*(volatile uint_io8_t*)0xB71C0215)  /*@bfbba@*/
#define GPIO_POSR4_POS22	(*(volatile uint_io8_t*)0xB71C0216)  /*@bfbba@*/
#define GPIO_POSR4_POS23	(*(volatile uint_io8_t*)0xB71C0217)  /*@bfbba@*/
#define GPIO_POSR4_POS24	(*(volatile uint_io8_t*)0xB71C0218)  /*@bfbba@*/
#define GPIO_POSR4_POS25	(*(volatile uint_io8_t*)0xB71C0219)  /*@bfbba@*/
#define GPIO_POSR4_POS26	(*(volatile uint_io8_t*)0xB71C021A)  /*@bfbba@*/
#define GPIO_POSR4_POS27	(*(volatile uint_io8_t*)0xB71C021B)  /*@bfbba@*/
#define GPIO_POSR4_POS28	(*(volatile uint_io8_t*)0xB71C021C)  /*@bfbba@*/
#define GPIO_POSR4_POS29	(*(volatile uint_io8_t*)0xB71C021D)  /*@bfbba@*/
#define GPIO_POSR4_POS30	(*(volatile uint_io8_t*)0xB71C021E)  /*@bfbba@*/
#define GPIO_POSR4_POS31	(*(volatile uint_io8_t*)0xB71C021F)  /*@bfbba@*/

#define GPIO_POSR5	(GPIO.unPOSR5.u32Register)  /*@rg@*/
#define GPIO_POSR5_POS0	(*(volatile uint_io8_t*)0xB71C0280)  /*@bfbba@*/
#define GPIO_POSR5_POS1	(*(volatile uint_io8_t*)0xB71C0281)  /*@bfbba@*/
#define GPIO_POSR5_POS2	(*(volatile uint_io8_t*)0xB71C0282)  /*@bfbba@*/
#define GPIO_POSR5_POS3	(*(volatile uint_io8_t*)0xB71C0283)  /*@bfbba@*/
#define GPIO_POSR5_POS4	(*(volatile uint_io8_t*)0xB71C0284)  /*@bfbba@*/
#define GPIO_POSR5_POS5	(*(volatile uint_io8_t*)0xB71C0285)  /*@bfbba@*/
#define GPIO_POSR5_POS6	(*(volatile uint_io8_t*)0xB71C0286)  /*@bfbba@*/
#define GPIO_POSR5_POS7	(*(volatile uint_io8_t*)0xB71C0287)  /*@bfbba@*/
#define GPIO_POSR5_POS8	(*(volatile uint_io8_t*)0xB71C0288)  /*@bfbba@*/
#define GPIO_POSR5_POS9	(*(volatile uint_io8_t*)0xB71C0289)  /*@bfbba@*/
#define GPIO_POSR5_POS10	(*(volatile uint_io8_t*)0xB71C028A)  /*@bfbba@*/
#define GPIO_POSR5_POS11	(*(volatile uint_io8_t*)0xB71C028B)  /*@bfbba@*/
#define GPIO_POSR5_POS12	(*(volatile uint_io8_t*)0xB71C028C)  /*@bfbba@*/
#define GPIO_POSR5_POS13	(*(volatile uint_io8_t*)0xB71C028D)  /*@bfbba@*/
#define GPIO_POSR5_POS14	(*(volatile uint_io8_t*)0xB71C028E)  /*@bfbba@*/
#define GPIO_POSR5_POS15	(*(volatile uint_io8_t*)0xB71C028F)  /*@bfbba@*/
#define GPIO_POSR5_POS16	(*(volatile uint_io8_t*)0xB71C0290)  /*@bfbba@*/
#define GPIO_POSR5_POS17	(*(volatile uint_io8_t*)0xB71C0291)  /*@bfbba@*/
#define GPIO_POSR5_POS18	(*(volatile uint_io8_t*)0xB71C0292)  /*@bfbba@*/
#define GPIO_POSR5_POS19	(*(volatile uint_io8_t*)0xB71C0293)  /*@bfbba@*/
#define GPIO_POSR5_POS20	(*(volatile uint_io8_t*)0xB71C0294)  /*@bfbba@*/
#define GPIO_POSR5_POS21	(*(volatile uint_io8_t*)0xB71C0295)  /*@bfbba@*/
#define GPIO_POSR5_POS22	(*(volatile uint_io8_t*)0xB71C0296)  /*@bfbba@*/
#define GPIO_POSR5_POS23	(*(volatile uint_io8_t*)0xB71C0297)  /*@bfbba@*/
#define GPIO_POSR5_POS24	(*(volatile uint_io8_t*)0xB71C0298)  /*@bfbba@*/
#define GPIO_POSR5_POS25	(*(volatile uint_io8_t*)0xB71C0299)  /*@bfbba@*/
#define GPIO_POSR5_POS26	(*(volatile uint_io8_t*)0xB71C029A)  /*@bfbba@*/
#define GPIO_POSR5_POS27	(*(volatile uint_io8_t*)0xB71C029B)  /*@bfbba@*/
#define GPIO_POSR5_POS28	(*(volatile uint_io8_t*)0xB71C029C)  /*@bfbba@*/
#define GPIO_POSR5_POS29	(*(volatile uint_io8_t*)0xB71C029D)  /*@bfbba@*/
#define GPIO_POSR5_POS30	(*(volatile uint_io8_t*)0xB71C029E)  /*@bfbba@*/
#define GPIO_POSR5_POS31	(*(volatile uint_io8_t*)0xB71C029F)  /*@bfbba@*/

#define GPIO_POSR6	(GPIO.unPOSR6.u32Register)  /*@rg@*/
#define GPIO_POSR6_POS0	(*(volatile uint_io8_t*)0xB71C0300)  /*@bfbba@*/
#define GPIO_POSR6_POS1	(*(volatile uint_io8_t*)0xB71C0301)  /*@bfbba@*/
#define GPIO_POSR6_POS2	(*(volatile uint_io8_t*)0xB71C0302)  /*@bfbba@*/
#define GPIO_POSR6_POS3	(*(volatile uint_io8_t*)0xB71C0303)  /*@bfbba@*/
#define GPIO_POSR6_POS4	(*(volatile uint_io8_t*)0xB71C0304)  /*@bfbba@*/
#define GPIO_POSR6_POS5	(*(volatile uint_io8_t*)0xB71C0305)  /*@bfbba@*/
#define GPIO_POSR6_POS6	(*(volatile uint_io8_t*)0xB71C0306)  /*@bfbba@*/
#define GPIO_POSR6_POS7	(*(volatile uint_io8_t*)0xB71C0307)  /*@bfbba@*/
#define GPIO_POSR6_POS8	(*(volatile uint_io8_t*)0xB71C0308)  /*@bfbba@*/
#define GPIO_POSR6_POS9	(*(volatile uint_io8_t*)0xB71C0309)  /*@bfbba@*/
#define GPIO_POSR6_POS10	(*(volatile uint_io8_t*)0xB71C030A)  /*@bfbba@*/
#define GPIO_POSR6_POS11	(*(volatile uint_io8_t*)0xB71C030B)  /*@bfbba@*/
#define GPIO_POSR6_POS12	(*(volatile uint_io8_t*)0xB71C030C)  /*@bfbba@*/
#define GPIO_POSR6_POS13	(*(volatile uint_io8_t*)0xB71C030D)  /*@bfbba@*/
#define GPIO_POSR6_POS14	(*(volatile uint_io8_t*)0xB71C030E)  /*@bfbba@*/
#define GPIO_POSR6_POS15	(*(volatile uint_io8_t*)0xB71C030F)  /*@bfbba@*/
#define GPIO_POSR6_POS16	(*(volatile uint_io8_t*)0xB71C0310)  /*@bfbba@*/
#define GPIO_POSR6_POS17	(*(volatile uint_io8_t*)0xB71C0311)  /*@bfbba@*/
#define GPIO_POSR6_POS18	(*(volatile uint_io8_t*)0xB71C0312)  /*@bfbba@*/
#define GPIO_POSR6_POS19	(*(volatile uint_io8_t*)0xB71C0313)  /*@bfbba@*/
#define GPIO_POSR6_POS20	(*(volatile uint_io8_t*)0xB71C0314)  /*@bfbba@*/
#define GPIO_POSR6_POS21	(*(volatile uint_io8_t*)0xB71C0315)  /*@bfbba@*/
#define GPIO_POSR6_POS22	(*(volatile uint_io8_t*)0xB71C0316)  /*@bfbba@*/
#define GPIO_POSR6_POS23	(*(volatile uint_io8_t*)0xB71C0317)  /*@bfbba@*/
#define GPIO_POSR6_POS24	(*(volatile uint_io8_t*)0xB71C0318)  /*@bfbba@*/
#define GPIO_POSR6_POS25	(*(volatile uint_io8_t*)0xB71C0319)  /*@bfbba@*/
#define GPIO_POSR6_POS26	(*(volatile uint_io8_t*)0xB71C031A)  /*@bfbba@*/
#define GPIO_POSR6_POS27	(*(volatile uint_io8_t*)0xB71C031B)  /*@bfbba@*/
#define GPIO_POSR6_POS28	(*(volatile uint_io8_t*)0xB71C031C)  /*@bfbba@*/
#define GPIO_POSR6_POS29	(*(volatile uint_io8_t*)0xB71C031D)  /*@bfbba@*/
#define GPIO_POSR6_POS30	(*(volatile uint_io8_t*)0xB71C031E)  /*@bfbba@*/
#define GPIO_POSR6_POS31	(*(volatile uint_io8_t*)0xB71C031F)  /*@bfbba@*/

#define GPIO_POSR7	(GPIO.unPOSR7.u32Register)  /*@rg@*/
#define GPIO_POSR7_POS0	(*(volatile uint_io8_t*)0xB71C0380)  /*@bfbba@*/
#define GPIO_POSR7_POS1	(*(volatile uint_io8_t*)0xB71C0381)  /*@bfbba@*/
#define GPIO_POSR7_POS2	(*(volatile uint_io8_t*)0xB71C0382)  /*@bfbba@*/
#define GPIO_POSR7_POS3	(*(volatile uint_io8_t*)0xB71C0383)  /*@bfbba@*/
#define GPIO_POSR7_POS4	(*(volatile uint_io8_t*)0xB71C0384)  /*@bfbba@*/
#define GPIO_POSR7_POS5	(*(volatile uint_io8_t*)0xB71C0385)  /*@bfbba@*/
#define GPIO_POSR7_POS6	(*(volatile uint_io8_t*)0xB71C0386)  /*@bfbba@*/
#define GPIO_POSR7_POS7	(*(volatile uint_io8_t*)0xB71C0387)  /*@bfbba@*/
#define GPIO_POSR7_POS8	(*(volatile uint_io8_t*)0xB71C0388)  /*@bfbba@*/
#define GPIO_POSR7_POS9	(*(volatile uint_io8_t*)0xB71C0389)  /*@bfbba@*/
#define GPIO_POSR7_POS10	(*(volatile uint_io8_t*)0xB71C038A)  /*@bfbba@*/
#define GPIO_POSR7_POS11	(*(volatile uint_io8_t*)0xB71C038B)  /*@bfbba@*/
#define GPIO_POSR7_POS12	(*(volatile uint_io8_t*)0xB71C038C)  /*@bfbba@*/
#define GPIO_POSR7_POS13	(*(volatile uint_io8_t*)0xB71C038D)  /*@bfbba@*/
#define GPIO_POSR7_POS14	(*(volatile uint_io8_t*)0xB71C038E)  /*@bfbba@*/
#define GPIO_POSR7_POS15	(*(volatile uint_io8_t*)0xB71C038F)  /*@bfbba@*/
#define GPIO_POSR7_POS16	(*(volatile uint_io8_t*)0xB71C0390)  /*@bfbba@*/
#define GPIO_POSR7_POS17	(*(volatile uint_io8_t*)0xB71C0391)  /*@bfbba@*/
#define GPIO_POSR7_POS18	(*(volatile uint_io8_t*)0xB71C0392)  /*@bfbba@*/
#define GPIO_POSR7_POS19	(*(volatile uint_io8_t*)0xB71C0393)  /*@bfbba@*/
#define GPIO_POSR7_POS20	(*(volatile uint_io8_t*)0xB71C0394)  /*@bfbba@*/
#define GPIO_POSR7_POS21	(*(volatile uint_io8_t*)0xB71C0395)  /*@bfbba@*/
#define GPIO_POSR7_POS22	(*(volatile uint_io8_t*)0xB71C0396)  /*@bfbba@*/
#define GPIO_POSR7_POS23	(*(volatile uint_io8_t*)0xB71C0397)  /*@bfbba@*/
#define GPIO_POSR7_POS24	(*(volatile uint_io8_t*)0xB71C0398)  /*@bfbba@*/
#define GPIO_POSR7_POS25	(*(volatile uint_io8_t*)0xB71C0399)  /*@bfbba@*/
#define GPIO_POSR7_POS26	(*(volatile uint_io8_t*)0xB71C039A)  /*@bfbba@*/
#define GPIO_POSR7_POS27	(*(volatile uint_io8_t*)0xB71C039B)  /*@bfbba@*/
#define GPIO_POSR7_POS28	(*(volatile uint_io8_t*)0xB71C039C)  /*@bfbba@*/
#define GPIO_POSR7_POS29	(*(volatile uint_io8_t*)0xB71C039D)  /*@bfbba@*/
#define GPIO_POSR7_POS30	(*(volatile uint_io8_t*)0xB71C039E)  /*@bfbba@*/
#define GPIO_POSR7_POS31	(*(volatile uint_io8_t*)0xB71C039F)  /*@bfbba@*/

#define GPIO_POSR8	(GPIO.unPOSR8.u32Register)  /*@rg@*/
#define GPIO_POSR8_POS0	(*(volatile uint_io8_t*)0xB71C0400)  /*@bfbba@*/
#define GPIO_POSR8_POS1	(*(volatile uint_io8_t*)0xB71C0401)  /*@bfbba@*/
#define GPIO_POSR8_POS2	(*(volatile uint_io8_t*)0xB71C0402)  /*@bfbba@*/
#define GPIO_POSR8_POS3	(*(volatile uint_io8_t*)0xB71C0403)  /*@bfbba@*/
#define GPIO_POSR8_POS4	(*(volatile uint_io8_t*)0xB71C0404)  /*@bfbba@*/
#define GPIO_POSR8_POS5	(*(volatile uint_io8_t*)0xB71C0405)  /*@bfbba@*/
#define GPIO_POSR8_POS6	(*(volatile uint_io8_t*)0xB71C0406)  /*@bfbba@*/
#define GPIO_POSR8_POS7	(*(volatile uint_io8_t*)0xB71C0407)  /*@bfbba@*/
#define GPIO_POSR8_POS8	(*(volatile uint_io8_t*)0xB71C0408)  /*@bfbba@*/
#define GPIO_POSR8_POS9	(*(volatile uint_io8_t*)0xB71C0409)  /*@bfbba@*/
#define GPIO_POSR8_POS10	(*(volatile uint_io8_t*)0xB71C040A)  /*@bfbba@*/
#define GPIO_POSR8_POS11	(*(volatile uint_io8_t*)0xB71C040B)  /*@bfbba@*/
#define GPIO_POSR8_POS12	(*(volatile uint_io8_t*)0xB71C040C)  /*@bfbba@*/
#define GPIO_POSR8_POS13	(*(volatile uint_io8_t*)0xB71C040D)  /*@bfbba@*/
#define GPIO_POSR8_POS14	(*(volatile uint_io8_t*)0xB71C040E)  /*@bfbba@*/
#define GPIO_POSR8_POS15	(*(volatile uint_io8_t*)0xB71C040F)  /*@bfbba@*/
#define GPIO_POSR8_POS16	(*(volatile uint_io8_t*)0xB71C0410)  /*@bfbba@*/
#define GPIO_POSR8_POS17	(*(volatile uint_io8_t*)0xB71C0411)  /*@bfbba@*/
#define GPIO_POSR8_POS18	(*(volatile uint_io8_t*)0xB71C0412)  /*@bfbba@*/
#define GPIO_POSR8_POS19	(*(volatile uint_io8_t*)0xB71C0413)  /*@bfbba@*/
#define GPIO_POSR8_POS20	(*(volatile uint_io8_t*)0xB71C0414)  /*@bfbba@*/
#define GPIO_POSR8_POS21	(*(volatile uint_io8_t*)0xB71C0415)  /*@bfbba@*/
#define GPIO_POSR8_POS22	(*(volatile uint_io8_t*)0xB71C0416)  /*@bfbba@*/
#define GPIO_POSR8_POS23	(*(volatile uint_io8_t*)0xB71C0417)  /*@bfbba@*/
#define GPIO_POSR8_POS24	(*(volatile uint_io8_t*)0xB71C0418)  /*@bfbba@*/
#define GPIO_POSR8_POS25	(*(volatile uint_io8_t*)0xB71C0419)  /*@bfbba@*/
#define GPIO_POSR8_POS26	(*(volatile uint_io8_t*)0xB71C041A)  /*@bfbba@*/
#define GPIO_POSR8_POS27	(*(volatile uint_io8_t*)0xB71C041B)  /*@bfbba@*/
#define GPIO_POSR8_POS28	(*(volatile uint_io8_t*)0xB71C041C)  /*@bfbba@*/
#define GPIO_POSR8_POS29	(*(volatile uint_io8_t*)0xB71C041D)  /*@bfbba@*/
#define GPIO_POSR8_POS30	(*(volatile uint_io8_t*)0xB71C041E)  /*@bfbba@*/
#define GPIO_POSR8_POS31	(*(volatile uint_io8_t*)0xB71C041F)  /*@bfbba@*/

#define GPIO_POSR9	(GPIO.unPOSR9.u32Register)  /*@rg@*/
#define GPIO_POSR9_POS0	(*(volatile uint_io8_t*)0xB71C0480)  /*@bfbba@*/
#define GPIO_POSR9_POS1	(*(volatile uint_io8_t*)0xB71C0481)  /*@bfbba@*/
#define GPIO_POSR9_POS2	(*(volatile uint_io8_t*)0xB71C0482)  /*@bfbba@*/
#define GPIO_POSR9_POS3	(*(volatile uint_io8_t*)0xB71C0483)  /*@bfbba@*/
#define GPIO_POSR9_POS4	(*(volatile uint_io8_t*)0xB71C0484)  /*@bfbba@*/
#define GPIO_POSR9_POS5	(*(volatile uint_io8_t*)0xB71C0485)  /*@bfbba@*/
#define GPIO_POSR9_POS6	(*(volatile uint_io8_t*)0xB71C0486)  /*@bfbba@*/
#define GPIO_POSR9_POS7	(*(volatile uint_io8_t*)0xB71C0487)  /*@bfbba@*/
#define GPIO_POSR9_POS8	(*(volatile uint_io8_t*)0xB71C0488)  /*@bfbba@*/
#define GPIO_POSR9_POS9	(*(volatile uint_io8_t*)0xB71C0489)  /*@bfbba@*/
#define GPIO_POSR9_POS10	(*(volatile uint_io8_t*)0xB71C048A)  /*@bfbba@*/
#define GPIO_POSR9_POS11	(*(volatile uint_io8_t*)0xB71C048B)  /*@bfbba@*/
#define GPIO_POSR9_POS12	(*(volatile uint_io8_t*)0xB71C048C)  /*@bfbba@*/
#define GPIO_POSR9_POS13	(*(volatile uint_io8_t*)0xB71C048D)  /*@bfbba@*/
#define GPIO_POSR9_POS14	(*(volatile uint_io8_t*)0xB71C048E)  /*@bfbba@*/
#define GPIO_POSR9_POS15	(*(volatile uint_io8_t*)0xB71C048F)  /*@bfbba@*/
#define GPIO_POSR9_POS16	(*(volatile uint_io8_t*)0xB71C0490)  /*@bfbba@*/
#define GPIO_POSR9_POS17	(*(volatile uint_io8_t*)0xB71C0491)  /*@bfbba@*/
#define GPIO_POSR9_POS18	(*(volatile uint_io8_t*)0xB71C0492)  /*@bfbba@*/
#define GPIO_POSR9_POS19	(*(volatile uint_io8_t*)0xB71C0493)  /*@bfbba@*/
#define GPIO_POSR9_POS20	(*(volatile uint_io8_t*)0xB71C0494)  /*@bfbba@*/
#define GPIO_POSR9_POS21	(*(volatile uint_io8_t*)0xB71C0495)  /*@bfbba@*/
#define GPIO_POSR9_POS22	(*(volatile uint_io8_t*)0xB71C0496)  /*@bfbba@*/
#define GPIO_POSR9_POS23	(*(volatile uint_io8_t*)0xB71C0497)  /*@bfbba@*/
#define GPIO_POSR9_POS24	(*(volatile uint_io8_t*)0xB71C0498)  /*@bfbba@*/
#define GPIO_POSR9_POS25	(*(volatile uint_io8_t*)0xB71C0499)  /*@bfbba@*/
#define GPIO_POSR9_POS26	(*(volatile uint_io8_t*)0xB71C049A)  /*@bfbba@*/
#define GPIO_POSR9_POS27	(*(volatile uint_io8_t*)0xB71C049B)  /*@bfbba@*/
#define GPIO_POSR9_POS28	(*(volatile uint_io8_t*)0xB71C049C)  /*@bfbba@*/
#define GPIO_POSR9_POS29	(*(volatile uint_io8_t*)0xB71C049D)  /*@bfbba@*/
#define GPIO_POSR9_POS30	(*(volatile uint_io8_t*)0xB71C049E)  /*@bfbba@*/
#define GPIO_POSR9_POS31	(*(volatile uint_io8_t*)0xB71C049F)  /*@bfbba@*/

#define GPIO_POSR10	(GPIO.unPOSR10.u32Register)  /*@rg@*/
#define GPIO_POSR10_POS0	(*(volatile uint_io8_t*)0xB71C0500)  /*@bfbba@*/
#define GPIO_POSR10_POS1	(*(volatile uint_io8_t*)0xB71C0501)  /*@bfbba@*/
#define GPIO_POSR10_POS2	(*(volatile uint_io8_t*)0xB71C0502)  /*@bfbba@*/
#define GPIO_POSR10_POS3	(*(volatile uint_io8_t*)0xB71C0503)  /*@bfbba@*/
#define GPIO_POSR10_POS4	(*(volatile uint_io8_t*)0xB71C0504)  /*@bfbba@*/
#define GPIO_POSR10_POS5	(*(volatile uint_io8_t*)0xB71C0505)  /*@bfbba@*/
#define GPIO_POSR10_POS6	(*(volatile uint_io8_t*)0xB71C0506)  /*@bfbba@*/
#define GPIO_POSR10_POS7	(*(volatile uint_io8_t*)0xB71C0507)  /*@bfbba@*/
#define GPIO_POSR10_POS8	(*(volatile uint_io8_t*)0xB71C0508)  /*@bfbba@*/
#define GPIO_POSR10_POS9	(*(volatile uint_io8_t*)0xB71C0509)  /*@bfbba@*/
#define GPIO_POSR10_POS10	(*(volatile uint_io8_t*)0xB71C050A)  /*@bfbba@*/
#define GPIO_POSR10_POS11	(*(volatile uint_io8_t*)0xB71C050B)  /*@bfbba@*/
#define GPIO_POSR10_POS12	(*(volatile uint_io8_t*)0xB71C050C)  /*@bfbba@*/
#define GPIO_POSR10_POS13	(*(volatile uint_io8_t*)0xB71C050D)  /*@bfbba@*/
#define GPIO_POSR10_POS14	(*(volatile uint_io8_t*)0xB71C050E)  /*@bfbba@*/
#define GPIO_POSR10_POS15	(*(volatile uint_io8_t*)0xB71C050F)  /*@bfbba@*/
#define GPIO_POSR10_POS16	(*(volatile uint_io8_t*)0xB71C0510)  /*@bfbba@*/
#define GPIO_POSR10_POS17	(*(volatile uint_io8_t*)0xB71C0511)  /*@bfbba@*/
#define GPIO_POSR10_POS18	(*(volatile uint_io8_t*)0xB71C0512)  /*@bfbba@*/
#define GPIO_POSR10_POS19	(*(volatile uint_io8_t*)0xB71C0513)  /*@bfbba@*/
#define GPIO_POSR10_POS20	(*(volatile uint_io8_t*)0xB71C0514)  /*@bfbba@*/
#define GPIO_POSR10_POS21	(*(volatile uint_io8_t*)0xB71C0515)  /*@bfbba@*/
#define GPIO_POSR10_POS22	(*(volatile uint_io8_t*)0xB71C0516)  /*@bfbba@*/
#define GPIO_POSR10_POS23	(*(volatile uint_io8_t*)0xB71C0517)  /*@bfbba@*/
#define GPIO_POSR10_POS24	(*(volatile uint_io8_t*)0xB71C0518)  /*@bfbba@*/
#define GPIO_POSR10_POS25	(*(volatile uint_io8_t*)0xB71C0519)  /*@bfbba@*/
#define GPIO_POSR10_POS26	(*(volatile uint_io8_t*)0xB71C051A)  /*@bfbba@*/
#define GPIO_POSR10_POS27	(*(volatile uint_io8_t*)0xB71C051B)  /*@bfbba@*/
#define GPIO_POSR10_POS28	(*(volatile uint_io8_t*)0xB71C051C)  /*@bfbba@*/
#define GPIO_POSR10_POS29	(*(volatile uint_io8_t*)0xB71C051D)  /*@bfbba@*/
#define GPIO_POSR10_POS30	(*(volatile uint_io8_t*)0xB71C051E)  /*@bfbba@*/
#define GPIO_POSR10_POS31	(*(volatile uint_io8_t*)0xB71C051F)  /*@bfbba@*/

#define GPIO_POSR11	(GPIO.unPOSR11.u32Register)  /*@rg@*/
#define GPIO_POSR11_POS0	(*(volatile uint_io8_t*)0xB71C0580)  /*@bfbba@*/
#define GPIO_POSR11_POS1	(*(volatile uint_io8_t*)0xB71C0581)  /*@bfbba@*/
#define GPIO_POSR11_POS2	(*(volatile uint_io8_t*)0xB71C0582)  /*@bfbba@*/
#define GPIO_POSR11_POS3	(*(volatile uint_io8_t*)0xB71C0583)  /*@bfbba@*/
#define GPIO_POSR11_POS4	(*(volatile uint_io8_t*)0xB71C0584)  /*@bfbba@*/
#define GPIO_POSR11_POS5	(*(volatile uint_io8_t*)0xB71C0585)  /*@bfbba@*/
#define GPIO_POSR11_POS6	(*(volatile uint_io8_t*)0xB71C0586)  /*@bfbba@*/
#define GPIO_POSR11_POS7	(*(volatile uint_io8_t*)0xB71C0587)  /*@bfbba@*/
#define GPIO_POSR11_POS8	(*(volatile uint_io8_t*)0xB71C0588)  /*@bfbba@*/
#define GPIO_POSR11_POS9	(*(volatile uint_io8_t*)0xB71C0589)  /*@bfbba@*/
#define GPIO_POSR11_POS10	(*(volatile uint_io8_t*)0xB71C058A)  /*@bfbba@*/
#define GPIO_POSR11_POS11	(*(volatile uint_io8_t*)0xB71C058B)  /*@bfbba@*/
#define GPIO_POSR11_POS12	(*(volatile uint_io8_t*)0xB71C058C)  /*@bfbba@*/
#define GPIO_POSR11_POS13	(*(volatile uint_io8_t*)0xB71C058D)  /*@bfbba@*/
#define GPIO_POSR11_POS14	(*(volatile uint_io8_t*)0xB71C058E)  /*@bfbba@*/
#define GPIO_POSR11_POS15	(*(volatile uint_io8_t*)0xB71C058F)  /*@bfbba@*/
#define GPIO_POSR11_POS16	(*(volatile uint_io8_t*)0xB71C0590)  /*@bfbba@*/
#define GPIO_POSR11_POS17	(*(volatile uint_io8_t*)0xB71C0591)  /*@bfbba@*/
#define GPIO_POSR11_POS18	(*(volatile uint_io8_t*)0xB71C0592)  /*@bfbba@*/
#define GPIO_POSR11_POS19	(*(volatile uint_io8_t*)0xB71C0593)  /*@bfbba@*/
#define GPIO_POSR11_POS20	(*(volatile uint_io8_t*)0xB71C0594)  /*@bfbba@*/
#define GPIO_POSR11_POS21	(*(volatile uint_io8_t*)0xB71C0595)  /*@bfbba@*/
#define GPIO_POSR11_POS22	(*(volatile uint_io8_t*)0xB71C0596)  /*@bfbba@*/
#define GPIO_POSR11_POS23	(*(volatile uint_io8_t*)0xB71C0597)  /*@bfbba@*/
#define GPIO_POSR11_POS24	(*(volatile uint_io8_t*)0xB71C0598)  /*@bfbba@*/
#define GPIO_POSR11_POS25	(*(volatile uint_io8_t*)0xB71C0599)  /*@bfbba@*/
#define GPIO_POSR11_POS26	(*(volatile uint_io8_t*)0xB71C059A)  /*@bfbba@*/
#define GPIO_POSR11_POS27	(*(volatile uint_io8_t*)0xB71C059B)  /*@bfbba@*/
#define GPIO_POSR11_POS28	(*(volatile uint_io8_t*)0xB71C059C)  /*@bfbba@*/
#define GPIO_POSR11_POS29	(*(volatile uint_io8_t*)0xB71C059D)  /*@bfbba@*/
#define GPIO_POSR11_POS30	(*(volatile uint_io8_t*)0xB71C059E)  /*@bfbba@*/
#define GPIO_POSR11_POS31	(*(volatile uint_io8_t*)0xB71C059F)  /*@bfbba@*/

#define GPIO_POSR12	(GPIO.unPOSR12.u32Register)  /*@rg@*/
#define GPIO_POSR12_POS0	(*(volatile uint_io8_t*)0xB71C0600)  /*@bfbba@*/
#define GPIO_POSR12_POS1	(*(volatile uint_io8_t*)0xB71C0601)  /*@bfbba@*/
#define GPIO_POSR12_POS2	(*(volatile uint_io8_t*)0xB71C0602)  /*@bfbba@*/
#define GPIO_POSR12_POS3	(*(volatile uint_io8_t*)0xB71C0603)  /*@bfbba@*/
#define GPIO_POSR12_POS4	(*(volatile uint_io8_t*)0xB71C0604)  /*@bfbba@*/
#define GPIO_POSR12_POS5	(*(volatile uint_io8_t*)0xB71C0605)  /*@bfbba@*/
#define GPIO_POSR12_POS6	(*(volatile uint_io8_t*)0xB71C0606)  /*@bfbba@*/
#define GPIO_POSR12_POS7	(*(volatile uint_io8_t*)0xB71C0607)  /*@bfbba@*/
#define GPIO_POSR12_POS8	(*(volatile uint_io8_t*)0xB71C0608)  /*@bfbba@*/
#define GPIO_POSR12_POS9	(*(volatile uint_io8_t*)0xB71C0609)  /*@bfbba@*/
#define GPIO_POSR12_POS10	(*(volatile uint_io8_t*)0xB71C060A)  /*@bfbba@*/
#define GPIO_POSR12_POS11	(*(volatile uint_io8_t*)0xB71C060B)  /*@bfbba@*/
#define GPIO_POSR12_POS12	(*(volatile uint_io8_t*)0xB71C060C)  /*@bfbba@*/
#define GPIO_POSR12_POS13	(*(volatile uint_io8_t*)0xB71C060D)  /*@bfbba@*/
#define GPIO_POSR12_POS14	(*(volatile uint_io8_t*)0xB71C060E)  /*@bfbba@*/
#define GPIO_POSR12_POS15	(*(volatile uint_io8_t*)0xB71C060F)  /*@bfbba@*/
#define GPIO_POSR12_POS16	(*(volatile uint_io8_t*)0xB71C0610)  /*@bfbba@*/
#define GPIO_POSR12_POS17	(*(volatile uint_io8_t*)0xB71C0611)  /*@bfbba@*/
#define GPIO_POSR12_POS18	(*(volatile uint_io8_t*)0xB71C0612)  /*@bfbba@*/
#define GPIO_POSR12_POS19	(*(volatile uint_io8_t*)0xB71C0613)  /*@bfbba@*/
#define GPIO_POSR12_POS20	(*(volatile uint_io8_t*)0xB71C0614)  /*@bfbba@*/
#define GPIO_POSR12_POS21	(*(volatile uint_io8_t*)0xB71C0615)  /*@bfbba@*/
#define GPIO_POSR12_POS22	(*(volatile uint_io8_t*)0xB71C0616)  /*@bfbba@*/
#define GPIO_POSR12_POS23	(*(volatile uint_io8_t*)0xB71C0617)  /*@bfbba@*/
#define GPIO_POSR12_POS24	(*(volatile uint_io8_t*)0xB71C0618)  /*@bfbba@*/
#define GPIO_POSR12_POS25	(*(volatile uint_io8_t*)0xB71C0619)  /*@bfbba@*/
#define GPIO_POSR12_POS26	(*(volatile uint_io8_t*)0xB71C061A)  /*@bfbba@*/
#define GPIO_POSR12_POS27	(*(volatile uint_io8_t*)0xB71C061B)  /*@bfbba@*/
#define GPIO_POSR12_POS28	(*(volatile uint_io8_t*)0xB71C061C)  /*@bfbba@*/
#define GPIO_POSR12_POS29	(*(volatile uint_io8_t*)0xB71C061D)  /*@bfbba@*/
#define GPIO_POSR12_POS30	(*(volatile uint_io8_t*)0xB71C061E)  /*@bfbba@*/
#define GPIO_POSR12_POS31	(*(volatile uint_io8_t*)0xB71C061F)  /*@bfbba@*/

#define GPIO_POSR13	(GPIO.unPOSR13.u32Register)  /*@rg@*/
#define GPIO_POSR13_POS0	(*(volatile uint_io8_t*)0xB71C0680)  /*@bfbba@*/
#define GPIO_POSR13_POS1	(*(volatile uint_io8_t*)0xB71C0681)  /*@bfbba@*/
#define GPIO_POSR13_POS2	(*(volatile uint_io8_t*)0xB71C0682)  /*@bfbba@*/
#define GPIO_POSR13_POS3	(*(volatile uint_io8_t*)0xB71C0683)  /*@bfbba@*/
#define GPIO_POSR13_POS4	(*(volatile uint_io8_t*)0xB71C0684)  /*@bfbba@*/
#define GPIO_POSR13_POS5	(*(volatile uint_io8_t*)0xB71C0685)  /*@bfbba@*/
#define GPIO_POSR13_POS6	(*(volatile uint_io8_t*)0xB71C0686)  /*@bfbba@*/
#define GPIO_POSR13_POS7	(*(volatile uint_io8_t*)0xB71C0687)  /*@bfbba@*/
#define GPIO_POSR13_POS8	(*(volatile uint_io8_t*)0xB71C0688)  /*@bfbba@*/
#define GPIO_POSR13_POS9	(*(volatile uint_io8_t*)0xB71C0689)  /*@bfbba@*/
#define GPIO_POSR13_POS10	(*(volatile uint_io8_t*)0xB71C068A)  /*@bfbba@*/
#define GPIO_POSR13_POS11	(*(volatile uint_io8_t*)0xB71C068B)  /*@bfbba@*/
#define GPIO_POSR13_POS12	(*(volatile uint_io8_t*)0xB71C068C)  /*@bfbba@*/
#define GPIO_POSR13_POS13	(*(volatile uint_io8_t*)0xB71C068D)  /*@bfbba@*/
#define GPIO_POSR13_POS14	(*(volatile uint_io8_t*)0xB71C068E)  /*@bfbba@*/
#define GPIO_POSR13_POS15	(*(volatile uint_io8_t*)0xB71C068F)  /*@bfbba@*/
#define GPIO_POSR13_POS16	(*(volatile uint_io8_t*)0xB71C0690)  /*@bfbba@*/
#define GPIO_POSR13_POS17	(*(volatile uint_io8_t*)0xB71C0691)  /*@bfbba@*/
#define GPIO_POSR13_POS18	(*(volatile uint_io8_t*)0xB71C0692)  /*@bfbba@*/
#define GPIO_POSR13_POS19	(*(volatile uint_io8_t*)0xB71C0693)  /*@bfbba@*/
#define GPIO_POSR13_POS20	(*(volatile uint_io8_t*)0xB71C0694)  /*@bfbba@*/
#define GPIO_POSR13_POS21	(*(volatile uint_io8_t*)0xB71C0695)  /*@bfbba@*/
#define GPIO_POSR13_POS22	(*(volatile uint_io8_t*)0xB71C0696)  /*@bfbba@*/
#define GPIO_POSR13_POS23	(*(volatile uint_io8_t*)0xB71C0697)  /*@bfbba@*/
#define GPIO_POSR13_POS24	(*(volatile uint_io8_t*)0xB71C0698)  /*@bfbba@*/
#define GPIO_POSR13_POS25	(*(volatile uint_io8_t*)0xB71C0699)  /*@bfbba@*/
#define GPIO_POSR13_POS26	(*(volatile uint_io8_t*)0xB71C069A)  /*@bfbba@*/
#define GPIO_POSR13_POS27	(*(volatile uint_io8_t*)0xB71C069B)  /*@bfbba@*/
#define GPIO_POSR13_POS28	(*(volatile uint_io8_t*)0xB71C069C)  /*@bfbba@*/
#define GPIO_POSR13_POS29	(*(volatile uint_io8_t*)0xB71C069D)  /*@bfbba@*/
#define GPIO_POSR13_POS30	(*(volatile uint_io8_t*)0xB71C069E)  /*@bfbba@*/
#define GPIO_POSR13_POS31	(*(volatile uint_io8_t*)0xB71C069F)  /*@bfbba@*/

#define GPIO_POSR14	(GPIO.unPOSR14.u32Register)  /*@rg@*/
#define GPIO_POSR14_POS0	(*(volatile uint_io8_t*)0xB71C0700)  /*@bfbba@*/
#define GPIO_POSR14_POS1	(*(volatile uint_io8_t*)0xB71C0701)  /*@bfbba@*/
#define GPIO_POSR14_POS2	(*(volatile uint_io8_t*)0xB71C0702)  /*@bfbba@*/
#define GPIO_POSR14_POS3	(*(volatile uint_io8_t*)0xB71C0703)  /*@bfbba@*/
#define GPIO_POSR14_POS4	(*(volatile uint_io8_t*)0xB71C0704)  /*@bfbba@*/
#define GPIO_POSR14_POS5	(*(volatile uint_io8_t*)0xB71C0705)  /*@bfbba@*/
#define GPIO_POSR14_POS6	(*(volatile uint_io8_t*)0xB71C0706)  /*@bfbba@*/
#define GPIO_POSR14_POS7	(*(volatile uint_io8_t*)0xB71C0707)  /*@bfbba@*/
#define GPIO_POSR14_POS8	(*(volatile uint_io8_t*)0xB71C0708)  /*@bfbba@*/
#define GPIO_POSR14_POS9	(*(volatile uint_io8_t*)0xB71C0709)  /*@bfbba@*/
#define GPIO_POSR14_POS10	(*(volatile uint_io8_t*)0xB71C070A)  /*@bfbba@*/
#define GPIO_POSR14_POS11	(*(volatile uint_io8_t*)0xB71C070B)  /*@bfbba@*/
#define GPIO_POSR14_POS12	(*(volatile uint_io8_t*)0xB71C070C)  /*@bfbba@*/
#define GPIO_POSR14_POS13	(*(volatile uint_io8_t*)0xB71C070D)  /*@bfbba@*/
#define GPIO_POSR14_POS14	(*(volatile uint_io8_t*)0xB71C070E)  /*@bfbba@*/
#define GPIO_POSR14_POS15	(*(volatile uint_io8_t*)0xB71C070F)  /*@bfbba@*/
#define GPIO_POSR14_POS16	(*(volatile uint_io8_t*)0xB71C0710)  /*@bfbba@*/
#define GPIO_POSR14_POS17	(*(volatile uint_io8_t*)0xB71C0711)  /*@bfbba@*/
#define GPIO_POSR14_POS18	(*(volatile uint_io8_t*)0xB71C0712)  /*@bfbba@*/
#define GPIO_POSR14_POS19	(*(volatile uint_io8_t*)0xB71C0713)  /*@bfbba@*/
#define GPIO_POSR14_POS20	(*(volatile uint_io8_t*)0xB71C0714)  /*@bfbba@*/
#define GPIO_POSR14_POS21	(*(volatile uint_io8_t*)0xB71C0715)  /*@bfbba@*/
#define GPIO_POSR14_POS22	(*(volatile uint_io8_t*)0xB71C0716)  /*@bfbba@*/
#define GPIO_POSR14_POS23	(*(volatile uint_io8_t*)0xB71C0717)  /*@bfbba@*/
#define GPIO_POSR14_POS24	(*(volatile uint_io8_t*)0xB71C0718)  /*@bfbba@*/
#define GPIO_POSR14_POS25	(*(volatile uint_io8_t*)0xB71C0719)  /*@bfbba@*/
#define GPIO_POSR14_POS26	(*(volatile uint_io8_t*)0xB71C071A)  /*@bfbba@*/
#define GPIO_POSR14_POS27	(*(volatile uint_io8_t*)0xB71C071B)  /*@bfbba@*/
#define GPIO_POSR14_POS28	(*(volatile uint_io8_t*)0xB71C071C)  /*@bfbba@*/
#define GPIO_POSR14_POS29	(*(volatile uint_io8_t*)0xB71C071D)  /*@bfbba@*/
#define GPIO_POSR14_POS30	(*(volatile uint_io8_t*)0xB71C071E)  /*@bfbba@*/
#define GPIO_POSR14_POS31	(*(volatile uint_io8_t*)0xB71C071F)  /*@bfbba@*/

#define GPIO_POSR15	(GPIO.unPOSR15.u32Register)  /*@rg@*/
#define GPIO_POSR15_POS0	(*(volatile uint_io8_t*)0xB71C0780)  /*@bfbba@*/
#define GPIO_POSR15_POS1	(*(volatile uint_io8_t*)0xB71C0781)  /*@bfbba@*/
#define GPIO_POSR15_POS2	(*(volatile uint_io8_t*)0xB71C0782)  /*@bfbba@*/
#define GPIO_POSR15_POS3	(*(volatile uint_io8_t*)0xB71C0783)  /*@bfbba@*/
#define GPIO_POSR15_POS4	(*(volatile uint_io8_t*)0xB71C0784)  /*@bfbba@*/
#define GPIO_POSR15_POS5	(*(volatile uint_io8_t*)0xB71C0785)  /*@bfbba@*/
#define GPIO_POSR15_POS6	(*(volatile uint_io8_t*)0xB71C0786)  /*@bfbba@*/
#define GPIO_POSR15_POS7	(*(volatile uint_io8_t*)0xB71C0787)  /*@bfbba@*/
#define GPIO_POSR15_POS8	(*(volatile uint_io8_t*)0xB71C0788)  /*@bfbba@*/
#define GPIO_POSR15_POS9	(*(volatile uint_io8_t*)0xB71C0789)  /*@bfbba@*/
#define GPIO_POSR15_POS10	(*(volatile uint_io8_t*)0xB71C078A)  /*@bfbba@*/
#define GPIO_POSR15_POS11	(*(volatile uint_io8_t*)0xB71C078B)  /*@bfbba@*/
#define GPIO_POSR15_POS12	(*(volatile uint_io8_t*)0xB71C078C)  /*@bfbba@*/
#define GPIO_POSR15_POS13	(*(volatile uint_io8_t*)0xB71C078D)  /*@bfbba@*/
#define GPIO_POSR15_POS14	(*(volatile uint_io8_t*)0xB71C078E)  /*@bfbba@*/
#define GPIO_POSR15_POS15	(*(volatile uint_io8_t*)0xB71C078F)  /*@bfbba@*/
#define GPIO_POSR15_POS16	(*(volatile uint_io8_t*)0xB71C0790)  /*@bfbba@*/
#define GPIO_POSR15_POS17	(*(volatile uint_io8_t*)0xB71C0791)  /*@bfbba@*/
#define GPIO_POSR15_POS18	(*(volatile uint_io8_t*)0xB71C0792)  /*@bfbba@*/
#define GPIO_POSR15_POS19	(*(volatile uint_io8_t*)0xB71C0793)  /*@bfbba@*/
#define GPIO_POSR15_POS20	(*(volatile uint_io8_t*)0xB71C0794)  /*@bfbba@*/
#define GPIO_POSR15_POS21	(*(volatile uint_io8_t*)0xB71C0795)  /*@bfbba@*/
#define GPIO_POSR15_POS22	(*(volatile uint_io8_t*)0xB71C0796)  /*@bfbba@*/
#define GPIO_POSR15_POS23	(*(volatile uint_io8_t*)0xB71C0797)  /*@bfbba@*/
#define GPIO_POSR15_POS24	(*(volatile uint_io8_t*)0xB71C0798)  /*@bfbba@*/
#define GPIO_POSR15_POS25	(*(volatile uint_io8_t*)0xB71C0799)  /*@bfbba@*/
#define GPIO_POSR15_POS26	(*(volatile uint_io8_t*)0xB71C079A)  /*@bfbba@*/
#define GPIO_POSR15_POS27	(*(volatile uint_io8_t*)0xB71C079B)  /*@bfbba@*/
#define GPIO_POSR15_POS28	(*(volatile uint_io8_t*)0xB71C079C)  /*@bfbba@*/
#define GPIO_POSR15_POS29	(*(volatile uint_io8_t*)0xB71C079D)  /*@bfbba@*/
#define GPIO_POSR15_POS30	(*(volatile uint_io8_t*)0xB71C079E)  /*@bfbba@*/
#define GPIO_POSR15_POS31	(*(volatile uint_io8_t*)0xB71C079F)  /*@bfbba@*/

typedef struct stc_gpio_posrn_field{
    uint_io32_t		u1POS0:1;
    uint_io32_t		u1POS1:1;
    uint_io32_t		u1POS2:1;
    uint_io32_t		u1POS3:1;
    uint_io32_t		u1POS4:1;
    uint_io32_t		u1POS5:1;
    uint_io32_t		u1POS6:1;
    uint_io32_t		u1POS7:1;
    uint_io32_t		u1POS8:1;
    uint_io32_t		u1POS9:1;
    uint_io32_t		u1POS10:1;
    uint_io32_t		u1POS11:1;
    uint_io32_t		u1POS12:1;
    uint_io32_t		u1POS13:1;
    uint_io32_t		u1POS14:1;
    uint_io32_t		u1POS15:1;
    uint_io32_t		u1POS16:1;
    uint_io32_t		u1POS17:1;
    uint_io32_t		u1POS18:1;
    uint_io32_t		u1POS19:1;
    uint_io32_t		u1POS20:1;
    uint_io32_t		u1POS21:1;
    uint_io32_t		u1POS22:1;
    uint_io32_t		u1POS23:1;
    uint_io32_t		u1POS24:1;
    uint_io32_t		u1POS25:1;
    uint_io32_t		u1POS26:1;
    uint_io32_t		u1POS27:1;
    uint_io32_t		u1POS28:1;
    uint_io32_t		u1POS29:1;
    uint_io32_t		u1POS30:1;
    uint_io32_t		u1POS31:1;
}stc_gpio_posrn_field_t;

typedef union un_gpio_posrn{
    uint_io32_t		u32Register;
    stc_gpio_posrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_posrn_t;

/* POCR[0-15] */
#define GPIO_POCR0	(GPIO.unPOCR0.u32Register)  /*@rg@*/
#define GPIO_POCR0_POC0	(*(volatile uint_io8_t*)0xB71C0020)  /*@bfbba@*/
#define GPIO_POCR0_POC1	(*(volatile uint_io8_t*)0xB71C0021)  /*@bfbba@*/
#define GPIO_POCR0_POC2	(*(volatile uint_io8_t*)0xB71C0022)  /*@bfbba@*/
#define GPIO_POCR0_POC3	(*(volatile uint_io8_t*)0xB71C0023)  /*@bfbba@*/
#define GPIO_POCR0_POC4	(*(volatile uint_io8_t*)0xB71C0024)  /*@bfbba@*/
#define GPIO_POCR0_POC5	(*(volatile uint_io8_t*)0xB71C0025)  /*@bfbba@*/
#define GPIO_POCR0_POC6	(*(volatile uint_io8_t*)0xB71C0026)  /*@bfbba@*/
#define GPIO_POCR0_POC7	(*(volatile uint_io8_t*)0xB71C0027)  /*@bfbba@*/
#define GPIO_POCR0_POC8	(*(volatile uint_io8_t*)0xB71C0028)  /*@bfbba@*/
#define GPIO_POCR0_POC9	(*(volatile uint_io8_t*)0xB71C0029)  /*@bfbba@*/
#define GPIO_POCR0_POC10	(*(volatile uint_io8_t*)0xB71C002A)  /*@bfbba@*/
#define GPIO_POCR0_POC11	(*(volatile uint_io8_t*)0xB71C002B)  /*@bfbba@*/
#define GPIO_POCR0_POC12	(*(volatile uint_io8_t*)0xB71C002C)  /*@bfbba@*/
#define GPIO_POCR0_POC13	(*(volatile uint_io8_t*)0xB71C002D)  /*@bfbba@*/
#define GPIO_POCR0_POC14	(*(volatile uint_io8_t*)0xB71C002E)  /*@bfbba@*/
#define GPIO_POCR0_POC15	(*(volatile uint_io8_t*)0xB71C002F)  /*@bfbba@*/
#define GPIO_POCR0_POC16	(*(volatile uint_io8_t*)0xB71C0030)  /*@bfbba@*/
#define GPIO_POCR0_POC17	(*(volatile uint_io8_t*)0xB71C0031)  /*@bfbba@*/
#define GPIO_POCR0_POC18	(*(volatile uint_io8_t*)0xB71C0032)  /*@bfbba@*/
#define GPIO_POCR0_POC19	(*(volatile uint_io8_t*)0xB71C0033)  /*@bfbba@*/
#define GPIO_POCR0_POC20	(*(volatile uint_io8_t*)0xB71C0034)  /*@bfbba@*/
#define GPIO_POCR0_POC21	(*(volatile uint_io8_t*)0xB71C0035)  /*@bfbba@*/
#define GPIO_POCR0_POC22	(*(volatile uint_io8_t*)0xB71C0036)  /*@bfbba@*/
#define GPIO_POCR0_POC23	(*(volatile uint_io8_t*)0xB71C0037)  /*@bfbba@*/
#define GPIO_POCR0_POC24	(*(volatile uint_io8_t*)0xB71C0038)  /*@bfbba@*/
#define GPIO_POCR0_POC25	(*(volatile uint_io8_t*)0xB71C0039)  /*@bfbba@*/
#define GPIO_POCR0_POC26	(*(volatile uint_io8_t*)0xB71C003A)  /*@bfbba@*/
#define GPIO_POCR0_POC27	(*(volatile uint_io8_t*)0xB71C003B)  /*@bfbba@*/
#define GPIO_POCR0_POC28	(*(volatile uint_io8_t*)0xB71C003C)  /*@bfbba@*/
#define GPIO_POCR0_POC29	(*(volatile uint_io8_t*)0xB71C003D)  /*@bfbba@*/
#define GPIO_POCR0_POC30	(*(volatile uint_io8_t*)0xB71C003E)  /*@bfbba@*/
#define GPIO_POCR0_POC31	(*(volatile uint_io8_t*)0xB71C003F)  /*@bfbba@*/

#define GPIO_POCR1	(GPIO.unPOCR1.u32Register)  /*@rg@*/
#define GPIO_POCR1_POC0	(*(volatile uint_io8_t*)0xB71C00A0)  /*@bfbba@*/
#define GPIO_POCR1_POC1	(*(volatile uint_io8_t*)0xB71C00A1)  /*@bfbba@*/
#define GPIO_POCR1_POC2	(*(volatile uint_io8_t*)0xB71C00A2)  /*@bfbba@*/
#define GPIO_POCR1_POC3	(*(volatile uint_io8_t*)0xB71C00A3)  /*@bfbba@*/
#define GPIO_POCR1_POC4	(*(volatile uint_io8_t*)0xB71C00A4)  /*@bfbba@*/
#define GPIO_POCR1_POC5	(*(volatile uint_io8_t*)0xB71C00A5)  /*@bfbba@*/
#define GPIO_POCR1_POC6	(*(volatile uint_io8_t*)0xB71C00A6)  /*@bfbba@*/
#define GPIO_POCR1_POC7	(*(volatile uint_io8_t*)0xB71C00A7)  /*@bfbba@*/
#define GPIO_POCR1_POC8	(*(volatile uint_io8_t*)0xB71C00A8)  /*@bfbba@*/
#define GPIO_POCR1_POC9	(*(volatile uint_io8_t*)0xB71C00A9)  /*@bfbba@*/
#define GPIO_POCR1_POC10	(*(volatile uint_io8_t*)0xB71C00AA)  /*@bfbba@*/
#define GPIO_POCR1_POC11	(*(volatile uint_io8_t*)0xB71C00AB)  /*@bfbba@*/
#define GPIO_POCR1_POC12	(*(volatile uint_io8_t*)0xB71C00AC)  /*@bfbba@*/
#define GPIO_POCR1_POC13	(*(volatile uint_io8_t*)0xB71C00AD)  /*@bfbba@*/
#define GPIO_POCR1_POC14	(*(volatile uint_io8_t*)0xB71C00AE)  /*@bfbba@*/
#define GPIO_POCR1_POC15	(*(volatile uint_io8_t*)0xB71C00AF)  /*@bfbba@*/
#define GPIO_POCR1_POC16	(*(volatile uint_io8_t*)0xB71C00B0)  /*@bfbba@*/
#define GPIO_POCR1_POC17	(*(volatile uint_io8_t*)0xB71C00B1)  /*@bfbba@*/
#define GPIO_POCR1_POC18	(*(volatile uint_io8_t*)0xB71C00B2)  /*@bfbba@*/
#define GPIO_POCR1_POC19	(*(volatile uint_io8_t*)0xB71C00B3)  /*@bfbba@*/
#define GPIO_POCR1_POC20	(*(volatile uint_io8_t*)0xB71C00B4)  /*@bfbba@*/
#define GPIO_POCR1_POC21	(*(volatile uint_io8_t*)0xB71C00B5)  /*@bfbba@*/
#define GPIO_POCR1_POC22	(*(volatile uint_io8_t*)0xB71C00B6)  /*@bfbba@*/
#define GPIO_POCR1_POC23	(*(volatile uint_io8_t*)0xB71C00B7)  /*@bfbba@*/
#define GPIO_POCR1_POC24	(*(volatile uint_io8_t*)0xB71C00B8)  /*@bfbba@*/
#define GPIO_POCR1_POC25	(*(volatile uint_io8_t*)0xB71C00B9)  /*@bfbba@*/
#define GPIO_POCR1_POC26	(*(volatile uint_io8_t*)0xB71C00BA)  /*@bfbba@*/
#define GPIO_POCR1_POC27	(*(volatile uint_io8_t*)0xB71C00BB)  /*@bfbba@*/
#define GPIO_POCR1_POC28	(*(volatile uint_io8_t*)0xB71C00BC)  /*@bfbba@*/
#define GPIO_POCR1_POC29	(*(volatile uint_io8_t*)0xB71C00BD)  /*@bfbba@*/
#define GPIO_POCR1_POC30	(*(volatile uint_io8_t*)0xB71C00BE)  /*@bfbba@*/
#define GPIO_POCR1_POC31	(*(volatile uint_io8_t*)0xB71C00BF)  /*@bfbba@*/

#define GPIO_POCR2	(GPIO.unPOCR2.u32Register)  /*@rg@*/
#define GPIO_POCR2_POC0	(*(volatile uint_io8_t*)0xB71C0120)  /*@bfbba@*/
#define GPIO_POCR2_POC1	(*(volatile uint_io8_t*)0xB71C0121)  /*@bfbba@*/
#define GPIO_POCR2_POC2	(*(volatile uint_io8_t*)0xB71C0122)  /*@bfbba@*/
#define GPIO_POCR2_POC3	(*(volatile uint_io8_t*)0xB71C0123)  /*@bfbba@*/
#define GPIO_POCR2_POC4	(*(volatile uint_io8_t*)0xB71C0124)  /*@bfbba@*/
#define GPIO_POCR2_POC5	(*(volatile uint_io8_t*)0xB71C0125)  /*@bfbba@*/
#define GPIO_POCR2_POC6	(*(volatile uint_io8_t*)0xB71C0126)  /*@bfbba@*/
#define GPIO_POCR2_POC7	(*(volatile uint_io8_t*)0xB71C0127)  /*@bfbba@*/
#define GPIO_POCR2_POC8	(*(volatile uint_io8_t*)0xB71C0128)  /*@bfbba@*/
#define GPIO_POCR2_POC9	(*(volatile uint_io8_t*)0xB71C0129)  /*@bfbba@*/
#define GPIO_POCR2_POC10	(*(volatile uint_io8_t*)0xB71C012A)  /*@bfbba@*/
#define GPIO_POCR2_POC11	(*(volatile uint_io8_t*)0xB71C012B)  /*@bfbba@*/
#define GPIO_POCR2_POC12	(*(volatile uint_io8_t*)0xB71C012C)  /*@bfbba@*/
#define GPIO_POCR2_POC13	(*(volatile uint_io8_t*)0xB71C012D)  /*@bfbba@*/
#define GPIO_POCR2_POC14	(*(volatile uint_io8_t*)0xB71C012E)  /*@bfbba@*/
#define GPIO_POCR2_POC15	(*(volatile uint_io8_t*)0xB71C012F)  /*@bfbba@*/
#define GPIO_POCR2_POC16	(*(volatile uint_io8_t*)0xB71C0130)  /*@bfbba@*/
#define GPIO_POCR2_POC17	(*(volatile uint_io8_t*)0xB71C0131)  /*@bfbba@*/
#define GPIO_POCR2_POC18	(*(volatile uint_io8_t*)0xB71C0132)  /*@bfbba@*/
#define GPIO_POCR2_POC19	(*(volatile uint_io8_t*)0xB71C0133)  /*@bfbba@*/
#define GPIO_POCR2_POC20	(*(volatile uint_io8_t*)0xB71C0134)  /*@bfbba@*/
#define GPIO_POCR2_POC21	(*(volatile uint_io8_t*)0xB71C0135)  /*@bfbba@*/
#define GPIO_POCR2_POC22	(*(volatile uint_io8_t*)0xB71C0136)  /*@bfbba@*/
#define GPIO_POCR2_POC23	(*(volatile uint_io8_t*)0xB71C0137)  /*@bfbba@*/
#define GPIO_POCR2_POC24	(*(volatile uint_io8_t*)0xB71C0138)  /*@bfbba@*/
#define GPIO_POCR2_POC25	(*(volatile uint_io8_t*)0xB71C0139)  /*@bfbba@*/
#define GPIO_POCR2_POC26	(*(volatile uint_io8_t*)0xB71C013A)  /*@bfbba@*/
#define GPIO_POCR2_POC27	(*(volatile uint_io8_t*)0xB71C013B)  /*@bfbba@*/
#define GPIO_POCR2_POC28	(*(volatile uint_io8_t*)0xB71C013C)  /*@bfbba@*/
#define GPIO_POCR2_POC29	(*(volatile uint_io8_t*)0xB71C013D)  /*@bfbba@*/
#define GPIO_POCR2_POC30	(*(volatile uint_io8_t*)0xB71C013E)  /*@bfbba@*/
#define GPIO_POCR2_POC31	(*(volatile uint_io8_t*)0xB71C013F)  /*@bfbba@*/

#define GPIO_POCR3	(GPIO.unPOCR3.u32Register)  /*@rg@*/
#define GPIO_POCR3_POC0	(*(volatile uint_io8_t*)0xB71C01A0)  /*@bfbba@*/
#define GPIO_POCR3_POC1	(*(volatile uint_io8_t*)0xB71C01A1)  /*@bfbba@*/
#define GPIO_POCR3_POC2	(*(volatile uint_io8_t*)0xB71C01A2)  /*@bfbba@*/
#define GPIO_POCR3_POC3	(*(volatile uint_io8_t*)0xB71C01A3)  /*@bfbba@*/
#define GPIO_POCR3_POC4	(*(volatile uint_io8_t*)0xB71C01A4)  /*@bfbba@*/
#define GPIO_POCR3_POC5	(*(volatile uint_io8_t*)0xB71C01A5)  /*@bfbba@*/
#define GPIO_POCR3_POC6	(*(volatile uint_io8_t*)0xB71C01A6)  /*@bfbba@*/
#define GPIO_POCR3_POC7	(*(volatile uint_io8_t*)0xB71C01A7)  /*@bfbba@*/
#define GPIO_POCR3_POC8	(*(volatile uint_io8_t*)0xB71C01A8)  /*@bfbba@*/
#define GPIO_POCR3_POC9	(*(volatile uint_io8_t*)0xB71C01A9)  /*@bfbba@*/
#define GPIO_POCR3_POC10	(*(volatile uint_io8_t*)0xB71C01AA)  /*@bfbba@*/
#define GPIO_POCR3_POC11	(*(volatile uint_io8_t*)0xB71C01AB)  /*@bfbba@*/
#define GPIO_POCR3_POC12	(*(volatile uint_io8_t*)0xB71C01AC)  /*@bfbba@*/
#define GPIO_POCR3_POC13	(*(volatile uint_io8_t*)0xB71C01AD)  /*@bfbba@*/
#define GPIO_POCR3_POC14	(*(volatile uint_io8_t*)0xB71C01AE)  /*@bfbba@*/
#define GPIO_POCR3_POC15	(*(volatile uint_io8_t*)0xB71C01AF)  /*@bfbba@*/
#define GPIO_POCR3_POC16	(*(volatile uint_io8_t*)0xB71C01B0)  /*@bfbba@*/
#define GPIO_POCR3_POC17	(*(volatile uint_io8_t*)0xB71C01B1)  /*@bfbba@*/
#define GPIO_POCR3_POC18	(*(volatile uint_io8_t*)0xB71C01B2)  /*@bfbba@*/
#define GPIO_POCR3_POC19	(*(volatile uint_io8_t*)0xB71C01B3)  /*@bfbba@*/
#define GPIO_POCR3_POC20	(*(volatile uint_io8_t*)0xB71C01B4)  /*@bfbba@*/
#define GPIO_POCR3_POC21	(*(volatile uint_io8_t*)0xB71C01B5)  /*@bfbba@*/
#define GPIO_POCR3_POC22	(*(volatile uint_io8_t*)0xB71C01B6)  /*@bfbba@*/
#define GPIO_POCR3_POC23	(*(volatile uint_io8_t*)0xB71C01B7)  /*@bfbba@*/
#define GPIO_POCR3_POC24	(*(volatile uint_io8_t*)0xB71C01B8)  /*@bfbba@*/
#define GPIO_POCR3_POC25	(*(volatile uint_io8_t*)0xB71C01B9)  /*@bfbba@*/
#define GPIO_POCR3_POC26	(*(volatile uint_io8_t*)0xB71C01BA)  /*@bfbba@*/
#define GPIO_POCR3_POC27	(*(volatile uint_io8_t*)0xB71C01BB)  /*@bfbba@*/
#define GPIO_POCR3_POC28	(*(volatile uint_io8_t*)0xB71C01BC)  /*@bfbba@*/
#define GPIO_POCR3_POC29	(*(volatile uint_io8_t*)0xB71C01BD)  /*@bfbba@*/
#define GPIO_POCR3_POC30	(*(volatile uint_io8_t*)0xB71C01BE)  /*@bfbba@*/
#define GPIO_POCR3_POC31	(*(volatile uint_io8_t*)0xB71C01BF)  /*@bfbba@*/

#define GPIO_POCR4	(GPIO.unPOCR4.u32Register)  /*@rg@*/
#define GPIO_POCR4_POC0	(*(volatile uint_io8_t*)0xB71C0220)  /*@bfbba@*/
#define GPIO_POCR4_POC1	(*(volatile uint_io8_t*)0xB71C0221)  /*@bfbba@*/
#define GPIO_POCR4_POC2	(*(volatile uint_io8_t*)0xB71C0222)  /*@bfbba@*/
#define GPIO_POCR4_POC3	(*(volatile uint_io8_t*)0xB71C0223)  /*@bfbba@*/
#define GPIO_POCR4_POC4	(*(volatile uint_io8_t*)0xB71C0224)  /*@bfbba@*/
#define GPIO_POCR4_POC5	(*(volatile uint_io8_t*)0xB71C0225)  /*@bfbba@*/
#define GPIO_POCR4_POC6	(*(volatile uint_io8_t*)0xB71C0226)  /*@bfbba@*/
#define GPIO_POCR4_POC7	(*(volatile uint_io8_t*)0xB71C0227)  /*@bfbba@*/
#define GPIO_POCR4_POC8	(*(volatile uint_io8_t*)0xB71C0228)  /*@bfbba@*/
#define GPIO_POCR4_POC9	(*(volatile uint_io8_t*)0xB71C0229)  /*@bfbba@*/
#define GPIO_POCR4_POC10	(*(volatile uint_io8_t*)0xB71C022A)  /*@bfbba@*/
#define GPIO_POCR4_POC11	(*(volatile uint_io8_t*)0xB71C022B)  /*@bfbba@*/
#define GPIO_POCR4_POC12	(*(volatile uint_io8_t*)0xB71C022C)  /*@bfbba@*/
#define GPIO_POCR4_POC13	(*(volatile uint_io8_t*)0xB71C022D)  /*@bfbba@*/
#define GPIO_POCR4_POC14	(*(volatile uint_io8_t*)0xB71C022E)  /*@bfbba@*/
#define GPIO_POCR4_POC15	(*(volatile uint_io8_t*)0xB71C022F)  /*@bfbba@*/
#define GPIO_POCR4_POC16	(*(volatile uint_io8_t*)0xB71C0230)  /*@bfbba@*/
#define GPIO_POCR4_POC17	(*(volatile uint_io8_t*)0xB71C0231)  /*@bfbba@*/
#define GPIO_POCR4_POC18	(*(volatile uint_io8_t*)0xB71C0232)  /*@bfbba@*/
#define GPIO_POCR4_POC19	(*(volatile uint_io8_t*)0xB71C0233)  /*@bfbba@*/
#define GPIO_POCR4_POC20	(*(volatile uint_io8_t*)0xB71C0234)  /*@bfbba@*/
#define GPIO_POCR4_POC21	(*(volatile uint_io8_t*)0xB71C0235)  /*@bfbba@*/
#define GPIO_POCR4_POC22	(*(volatile uint_io8_t*)0xB71C0236)  /*@bfbba@*/
#define GPIO_POCR4_POC23	(*(volatile uint_io8_t*)0xB71C0237)  /*@bfbba@*/
#define GPIO_POCR4_POC24	(*(volatile uint_io8_t*)0xB71C0238)  /*@bfbba@*/
#define GPIO_POCR4_POC25	(*(volatile uint_io8_t*)0xB71C0239)  /*@bfbba@*/
#define GPIO_POCR4_POC26	(*(volatile uint_io8_t*)0xB71C023A)  /*@bfbba@*/
#define GPIO_POCR4_POC27	(*(volatile uint_io8_t*)0xB71C023B)  /*@bfbba@*/
#define GPIO_POCR4_POC28	(*(volatile uint_io8_t*)0xB71C023C)  /*@bfbba@*/
#define GPIO_POCR4_POC29	(*(volatile uint_io8_t*)0xB71C023D)  /*@bfbba@*/
#define GPIO_POCR4_POC30	(*(volatile uint_io8_t*)0xB71C023E)  /*@bfbba@*/
#define GPIO_POCR4_POC31	(*(volatile uint_io8_t*)0xB71C023F)  /*@bfbba@*/

#define GPIO_POCR5	(GPIO.unPOCR5.u32Register)  /*@rg@*/
#define GPIO_POCR5_POC0	(*(volatile uint_io8_t*)0xB71C02A0)  /*@bfbba@*/
#define GPIO_POCR5_POC1	(*(volatile uint_io8_t*)0xB71C02A1)  /*@bfbba@*/
#define GPIO_POCR5_POC2	(*(volatile uint_io8_t*)0xB71C02A2)  /*@bfbba@*/
#define GPIO_POCR5_POC3	(*(volatile uint_io8_t*)0xB71C02A3)  /*@bfbba@*/
#define GPIO_POCR5_POC4	(*(volatile uint_io8_t*)0xB71C02A4)  /*@bfbba@*/
#define GPIO_POCR5_POC5	(*(volatile uint_io8_t*)0xB71C02A5)  /*@bfbba@*/
#define GPIO_POCR5_POC6	(*(volatile uint_io8_t*)0xB71C02A6)  /*@bfbba@*/
#define GPIO_POCR5_POC7	(*(volatile uint_io8_t*)0xB71C02A7)  /*@bfbba@*/
#define GPIO_POCR5_POC8	(*(volatile uint_io8_t*)0xB71C02A8)  /*@bfbba@*/
#define GPIO_POCR5_POC9	(*(volatile uint_io8_t*)0xB71C02A9)  /*@bfbba@*/
#define GPIO_POCR5_POC10	(*(volatile uint_io8_t*)0xB71C02AA)  /*@bfbba@*/
#define GPIO_POCR5_POC11	(*(volatile uint_io8_t*)0xB71C02AB)  /*@bfbba@*/
#define GPIO_POCR5_POC12	(*(volatile uint_io8_t*)0xB71C02AC)  /*@bfbba@*/
#define GPIO_POCR5_POC13	(*(volatile uint_io8_t*)0xB71C02AD)  /*@bfbba@*/
#define GPIO_POCR5_POC14	(*(volatile uint_io8_t*)0xB71C02AE)  /*@bfbba@*/
#define GPIO_POCR5_POC15	(*(volatile uint_io8_t*)0xB71C02AF)  /*@bfbba@*/
#define GPIO_POCR5_POC16	(*(volatile uint_io8_t*)0xB71C02B0)  /*@bfbba@*/
#define GPIO_POCR5_POC17	(*(volatile uint_io8_t*)0xB71C02B1)  /*@bfbba@*/
#define GPIO_POCR5_POC18	(*(volatile uint_io8_t*)0xB71C02B2)  /*@bfbba@*/
#define GPIO_POCR5_POC19	(*(volatile uint_io8_t*)0xB71C02B3)  /*@bfbba@*/
#define GPIO_POCR5_POC20	(*(volatile uint_io8_t*)0xB71C02B4)  /*@bfbba@*/
#define GPIO_POCR5_POC21	(*(volatile uint_io8_t*)0xB71C02B5)  /*@bfbba@*/
#define GPIO_POCR5_POC22	(*(volatile uint_io8_t*)0xB71C02B6)  /*@bfbba@*/
#define GPIO_POCR5_POC23	(*(volatile uint_io8_t*)0xB71C02B7)  /*@bfbba@*/
#define GPIO_POCR5_POC24	(*(volatile uint_io8_t*)0xB71C02B8)  /*@bfbba@*/
#define GPIO_POCR5_POC25	(*(volatile uint_io8_t*)0xB71C02B9)  /*@bfbba@*/
#define GPIO_POCR5_POC26	(*(volatile uint_io8_t*)0xB71C02BA)  /*@bfbba@*/
#define GPIO_POCR5_POC27	(*(volatile uint_io8_t*)0xB71C02BB)  /*@bfbba@*/
#define GPIO_POCR5_POC28	(*(volatile uint_io8_t*)0xB71C02BC)  /*@bfbba@*/
#define GPIO_POCR5_POC29	(*(volatile uint_io8_t*)0xB71C02BD)  /*@bfbba@*/
#define GPIO_POCR5_POC30	(*(volatile uint_io8_t*)0xB71C02BE)  /*@bfbba@*/
#define GPIO_POCR5_POC31	(*(volatile uint_io8_t*)0xB71C02BF)  /*@bfbba@*/

#define GPIO_POCR6	(GPIO.unPOCR6.u32Register)  /*@rg@*/
#define GPIO_POCR6_POC0	(*(volatile uint_io8_t*)0xB71C0320)  /*@bfbba@*/
#define GPIO_POCR6_POC1	(*(volatile uint_io8_t*)0xB71C0321)  /*@bfbba@*/
#define GPIO_POCR6_POC2	(*(volatile uint_io8_t*)0xB71C0322)  /*@bfbba@*/
#define GPIO_POCR6_POC3	(*(volatile uint_io8_t*)0xB71C0323)  /*@bfbba@*/
#define GPIO_POCR6_POC4	(*(volatile uint_io8_t*)0xB71C0324)  /*@bfbba@*/
#define GPIO_POCR6_POC5	(*(volatile uint_io8_t*)0xB71C0325)  /*@bfbba@*/
#define GPIO_POCR6_POC6	(*(volatile uint_io8_t*)0xB71C0326)  /*@bfbba@*/
#define GPIO_POCR6_POC7	(*(volatile uint_io8_t*)0xB71C0327)  /*@bfbba@*/
#define GPIO_POCR6_POC8	(*(volatile uint_io8_t*)0xB71C0328)  /*@bfbba@*/
#define GPIO_POCR6_POC9	(*(volatile uint_io8_t*)0xB71C0329)  /*@bfbba@*/
#define GPIO_POCR6_POC10	(*(volatile uint_io8_t*)0xB71C032A)  /*@bfbba@*/
#define GPIO_POCR6_POC11	(*(volatile uint_io8_t*)0xB71C032B)  /*@bfbba@*/
#define GPIO_POCR6_POC12	(*(volatile uint_io8_t*)0xB71C032C)  /*@bfbba@*/
#define GPIO_POCR6_POC13	(*(volatile uint_io8_t*)0xB71C032D)  /*@bfbba@*/
#define GPIO_POCR6_POC14	(*(volatile uint_io8_t*)0xB71C032E)  /*@bfbba@*/
#define GPIO_POCR6_POC15	(*(volatile uint_io8_t*)0xB71C032F)  /*@bfbba@*/
#define GPIO_POCR6_POC16	(*(volatile uint_io8_t*)0xB71C0330)  /*@bfbba@*/
#define GPIO_POCR6_POC17	(*(volatile uint_io8_t*)0xB71C0331)  /*@bfbba@*/
#define GPIO_POCR6_POC18	(*(volatile uint_io8_t*)0xB71C0332)  /*@bfbba@*/
#define GPIO_POCR6_POC19	(*(volatile uint_io8_t*)0xB71C0333)  /*@bfbba@*/
#define GPIO_POCR6_POC20	(*(volatile uint_io8_t*)0xB71C0334)  /*@bfbba@*/
#define GPIO_POCR6_POC21	(*(volatile uint_io8_t*)0xB71C0335)  /*@bfbba@*/
#define GPIO_POCR6_POC22	(*(volatile uint_io8_t*)0xB71C0336)  /*@bfbba@*/
#define GPIO_POCR6_POC23	(*(volatile uint_io8_t*)0xB71C0337)  /*@bfbba@*/
#define GPIO_POCR6_POC24	(*(volatile uint_io8_t*)0xB71C0338)  /*@bfbba@*/
#define GPIO_POCR6_POC25	(*(volatile uint_io8_t*)0xB71C0339)  /*@bfbba@*/
#define GPIO_POCR6_POC26	(*(volatile uint_io8_t*)0xB71C033A)  /*@bfbba@*/
#define GPIO_POCR6_POC27	(*(volatile uint_io8_t*)0xB71C033B)  /*@bfbba@*/
#define GPIO_POCR6_POC28	(*(volatile uint_io8_t*)0xB71C033C)  /*@bfbba@*/
#define GPIO_POCR6_POC29	(*(volatile uint_io8_t*)0xB71C033D)  /*@bfbba@*/
#define GPIO_POCR6_POC30	(*(volatile uint_io8_t*)0xB71C033E)  /*@bfbba@*/
#define GPIO_POCR6_POC31	(*(volatile uint_io8_t*)0xB71C033F)  /*@bfbba@*/

#define GPIO_POCR7	(GPIO.unPOCR7.u32Register)  /*@rg@*/
#define GPIO_POCR7_POC0	(*(volatile uint_io8_t*)0xB71C03A0)  /*@bfbba@*/
#define GPIO_POCR7_POC1	(*(volatile uint_io8_t*)0xB71C03A1)  /*@bfbba@*/
#define GPIO_POCR7_POC2	(*(volatile uint_io8_t*)0xB71C03A2)  /*@bfbba@*/
#define GPIO_POCR7_POC3	(*(volatile uint_io8_t*)0xB71C03A3)  /*@bfbba@*/
#define GPIO_POCR7_POC4	(*(volatile uint_io8_t*)0xB71C03A4)  /*@bfbba@*/
#define GPIO_POCR7_POC5	(*(volatile uint_io8_t*)0xB71C03A5)  /*@bfbba@*/
#define GPIO_POCR7_POC6	(*(volatile uint_io8_t*)0xB71C03A6)  /*@bfbba@*/
#define GPIO_POCR7_POC7	(*(volatile uint_io8_t*)0xB71C03A7)  /*@bfbba@*/
#define GPIO_POCR7_POC8	(*(volatile uint_io8_t*)0xB71C03A8)  /*@bfbba@*/
#define GPIO_POCR7_POC9	(*(volatile uint_io8_t*)0xB71C03A9)  /*@bfbba@*/
#define GPIO_POCR7_POC10	(*(volatile uint_io8_t*)0xB71C03AA)  /*@bfbba@*/
#define GPIO_POCR7_POC11	(*(volatile uint_io8_t*)0xB71C03AB)  /*@bfbba@*/
#define GPIO_POCR7_POC12	(*(volatile uint_io8_t*)0xB71C03AC)  /*@bfbba@*/
#define GPIO_POCR7_POC13	(*(volatile uint_io8_t*)0xB71C03AD)  /*@bfbba@*/
#define GPIO_POCR7_POC14	(*(volatile uint_io8_t*)0xB71C03AE)  /*@bfbba@*/
#define GPIO_POCR7_POC15	(*(volatile uint_io8_t*)0xB71C03AF)  /*@bfbba@*/
#define GPIO_POCR7_POC16	(*(volatile uint_io8_t*)0xB71C03B0)  /*@bfbba@*/
#define GPIO_POCR7_POC17	(*(volatile uint_io8_t*)0xB71C03B1)  /*@bfbba@*/
#define GPIO_POCR7_POC18	(*(volatile uint_io8_t*)0xB71C03B2)  /*@bfbba@*/
#define GPIO_POCR7_POC19	(*(volatile uint_io8_t*)0xB71C03B3)  /*@bfbba@*/
#define GPIO_POCR7_POC20	(*(volatile uint_io8_t*)0xB71C03B4)  /*@bfbba@*/
#define GPIO_POCR7_POC21	(*(volatile uint_io8_t*)0xB71C03B5)  /*@bfbba@*/
#define GPIO_POCR7_POC22	(*(volatile uint_io8_t*)0xB71C03B6)  /*@bfbba@*/
#define GPIO_POCR7_POC23	(*(volatile uint_io8_t*)0xB71C03B7)  /*@bfbba@*/
#define GPIO_POCR7_POC24	(*(volatile uint_io8_t*)0xB71C03B8)  /*@bfbba@*/
#define GPIO_POCR7_POC25	(*(volatile uint_io8_t*)0xB71C03B9)  /*@bfbba@*/
#define GPIO_POCR7_POC26	(*(volatile uint_io8_t*)0xB71C03BA)  /*@bfbba@*/
#define GPIO_POCR7_POC27	(*(volatile uint_io8_t*)0xB71C03BB)  /*@bfbba@*/
#define GPIO_POCR7_POC28	(*(volatile uint_io8_t*)0xB71C03BC)  /*@bfbba@*/
#define GPIO_POCR7_POC29	(*(volatile uint_io8_t*)0xB71C03BD)  /*@bfbba@*/
#define GPIO_POCR7_POC30	(*(volatile uint_io8_t*)0xB71C03BE)  /*@bfbba@*/
#define GPIO_POCR7_POC31	(*(volatile uint_io8_t*)0xB71C03BF)  /*@bfbba@*/

#define GPIO_POCR8	(GPIO.unPOCR8.u32Register)  /*@rg@*/
#define GPIO_POCR8_POC0	(*(volatile uint_io8_t*)0xB71C0420)  /*@bfbba@*/
#define GPIO_POCR8_POC1	(*(volatile uint_io8_t*)0xB71C0421)  /*@bfbba@*/
#define GPIO_POCR8_POC2	(*(volatile uint_io8_t*)0xB71C0422)  /*@bfbba@*/
#define GPIO_POCR8_POC3	(*(volatile uint_io8_t*)0xB71C0423)  /*@bfbba@*/
#define GPIO_POCR8_POC4	(*(volatile uint_io8_t*)0xB71C0424)  /*@bfbba@*/
#define GPIO_POCR8_POC5	(*(volatile uint_io8_t*)0xB71C0425)  /*@bfbba@*/
#define GPIO_POCR8_POC6	(*(volatile uint_io8_t*)0xB71C0426)  /*@bfbba@*/
#define GPIO_POCR8_POC7	(*(volatile uint_io8_t*)0xB71C0427)  /*@bfbba@*/
#define GPIO_POCR8_POC8	(*(volatile uint_io8_t*)0xB71C0428)  /*@bfbba@*/
#define GPIO_POCR8_POC9	(*(volatile uint_io8_t*)0xB71C0429)  /*@bfbba@*/
#define GPIO_POCR8_POC10	(*(volatile uint_io8_t*)0xB71C042A)  /*@bfbba@*/
#define GPIO_POCR8_POC11	(*(volatile uint_io8_t*)0xB71C042B)  /*@bfbba@*/
#define GPIO_POCR8_POC12	(*(volatile uint_io8_t*)0xB71C042C)  /*@bfbba@*/
#define GPIO_POCR8_POC13	(*(volatile uint_io8_t*)0xB71C042D)  /*@bfbba@*/
#define GPIO_POCR8_POC14	(*(volatile uint_io8_t*)0xB71C042E)  /*@bfbba@*/
#define GPIO_POCR8_POC15	(*(volatile uint_io8_t*)0xB71C042F)  /*@bfbba@*/
#define GPIO_POCR8_POC16	(*(volatile uint_io8_t*)0xB71C0430)  /*@bfbba@*/
#define GPIO_POCR8_POC17	(*(volatile uint_io8_t*)0xB71C0431)  /*@bfbba@*/
#define GPIO_POCR8_POC18	(*(volatile uint_io8_t*)0xB71C0432)  /*@bfbba@*/
#define GPIO_POCR8_POC19	(*(volatile uint_io8_t*)0xB71C0433)  /*@bfbba@*/
#define GPIO_POCR8_POC20	(*(volatile uint_io8_t*)0xB71C0434)  /*@bfbba@*/
#define GPIO_POCR8_POC21	(*(volatile uint_io8_t*)0xB71C0435)  /*@bfbba@*/
#define GPIO_POCR8_POC22	(*(volatile uint_io8_t*)0xB71C0436)  /*@bfbba@*/
#define GPIO_POCR8_POC23	(*(volatile uint_io8_t*)0xB71C0437)  /*@bfbba@*/
#define GPIO_POCR8_POC24	(*(volatile uint_io8_t*)0xB71C0438)  /*@bfbba@*/
#define GPIO_POCR8_POC25	(*(volatile uint_io8_t*)0xB71C0439)  /*@bfbba@*/
#define GPIO_POCR8_POC26	(*(volatile uint_io8_t*)0xB71C043A)  /*@bfbba@*/
#define GPIO_POCR8_POC27	(*(volatile uint_io8_t*)0xB71C043B)  /*@bfbba@*/
#define GPIO_POCR8_POC28	(*(volatile uint_io8_t*)0xB71C043C)  /*@bfbba@*/
#define GPIO_POCR8_POC29	(*(volatile uint_io8_t*)0xB71C043D)  /*@bfbba@*/
#define GPIO_POCR8_POC30	(*(volatile uint_io8_t*)0xB71C043E)  /*@bfbba@*/
#define GPIO_POCR8_POC31	(*(volatile uint_io8_t*)0xB71C043F)  /*@bfbba@*/

#define GPIO_POCR9	(GPIO.unPOCR9.u32Register)  /*@rg@*/
#define GPIO_POCR9_POC0	(*(volatile uint_io8_t*)0xB71C04A0)  /*@bfbba@*/
#define GPIO_POCR9_POC1	(*(volatile uint_io8_t*)0xB71C04A1)  /*@bfbba@*/
#define GPIO_POCR9_POC2	(*(volatile uint_io8_t*)0xB71C04A2)  /*@bfbba@*/
#define GPIO_POCR9_POC3	(*(volatile uint_io8_t*)0xB71C04A3)  /*@bfbba@*/
#define GPIO_POCR9_POC4	(*(volatile uint_io8_t*)0xB71C04A4)  /*@bfbba@*/
#define GPIO_POCR9_POC5	(*(volatile uint_io8_t*)0xB71C04A5)  /*@bfbba@*/
#define GPIO_POCR9_POC6	(*(volatile uint_io8_t*)0xB71C04A6)  /*@bfbba@*/
#define GPIO_POCR9_POC7	(*(volatile uint_io8_t*)0xB71C04A7)  /*@bfbba@*/
#define GPIO_POCR9_POC8	(*(volatile uint_io8_t*)0xB71C04A8)  /*@bfbba@*/
#define GPIO_POCR9_POC9	(*(volatile uint_io8_t*)0xB71C04A9)  /*@bfbba@*/
#define GPIO_POCR9_POC10	(*(volatile uint_io8_t*)0xB71C04AA)  /*@bfbba@*/
#define GPIO_POCR9_POC11	(*(volatile uint_io8_t*)0xB71C04AB)  /*@bfbba@*/
#define GPIO_POCR9_POC12	(*(volatile uint_io8_t*)0xB71C04AC)  /*@bfbba@*/
#define GPIO_POCR9_POC13	(*(volatile uint_io8_t*)0xB71C04AD)  /*@bfbba@*/
#define GPIO_POCR9_POC14	(*(volatile uint_io8_t*)0xB71C04AE)  /*@bfbba@*/
#define GPIO_POCR9_POC15	(*(volatile uint_io8_t*)0xB71C04AF)  /*@bfbba@*/
#define GPIO_POCR9_POC16	(*(volatile uint_io8_t*)0xB71C04B0)  /*@bfbba@*/
#define GPIO_POCR9_POC17	(*(volatile uint_io8_t*)0xB71C04B1)  /*@bfbba@*/
#define GPIO_POCR9_POC18	(*(volatile uint_io8_t*)0xB71C04B2)  /*@bfbba@*/
#define GPIO_POCR9_POC19	(*(volatile uint_io8_t*)0xB71C04B3)  /*@bfbba@*/
#define GPIO_POCR9_POC20	(*(volatile uint_io8_t*)0xB71C04B4)  /*@bfbba@*/
#define GPIO_POCR9_POC21	(*(volatile uint_io8_t*)0xB71C04B5)  /*@bfbba@*/
#define GPIO_POCR9_POC22	(*(volatile uint_io8_t*)0xB71C04B6)  /*@bfbba@*/
#define GPIO_POCR9_POC23	(*(volatile uint_io8_t*)0xB71C04B7)  /*@bfbba@*/
#define GPIO_POCR9_POC24	(*(volatile uint_io8_t*)0xB71C04B8)  /*@bfbba@*/
#define GPIO_POCR9_POC25	(*(volatile uint_io8_t*)0xB71C04B9)  /*@bfbba@*/
#define GPIO_POCR9_POC26	(*(volatile uint_io8_t*)0xB71C04BA)  /*@bfbba@*/
#define GPIO_POCR9_POC27	(*(volatile uint_io8_t*)0xB71C04BB)  /*@bfbba@*/
#define GPIO_POCR9_POC28	(*(volatile uint_io8_t*)0xB71C04BC)  /*@bfbba@*/
#define GPIO_POCR9_POC29	(*(volatile uint_io8_t*)0xB71C04BD)  /*@bfbba@*/
#define GPIO_POCR9_POC30	(*(volatile uint_io8_t*)0xB71C04BE)  /*@bfbba@*/
#define GPIO_POCR9_POC31	(*(volatile uint_io8_t*)0xB71C04BF)  /*@bfbba@*/

#define GPIO_POCR10	(GPIO.unPOCR10.u32Register)  /*@rg@*/
#define GPIO_POCR10_POC0	(*(volatile uint_io8_t*)0xB71C0520)  /*@bfbba@*/
#define GPIO_POCR10_POC1	(*(volatile uint_io8_t*)0xB71C0521)  /*@bfbba@*/
#define GPIO_POCR10_POC2	(*(volatile uint_io8_t*)0xB71C0522)  /*@bfbba@*/
#define GPIO_POCR10_POC3	(*(volatile uint_io8_t*)0xB71C0523)  /*@bfbba@*/
#define GPIO_POCR10_POC4	(*(volatile uint_io8_t*)0xB71C0524)  /*@bfbba@*/
#define GPIO_POCR10_POC5	(*(volatile uint_io8_t*)0xB71C0525)  /*@bfbba@*/
#define GPIO_POCR10_POC6	(*(volatile uint_io8_t*)0xB71C0526)  /*@bfbba@*/
#define GPIO_POCR10_POC7	(*(volatile uint_io8_t*)0xB71C0527)  /*@bfbba@*/
#define GPIO_POCR10_POC8	(*(volatile uint_io8_t*)0xB71C0528)  /*@bfbba@*/
#define GPIO_POCR10_POC9	(*(volatile uint_io8_t*)0xB71C0529)  /*@bfbba@*/
#define GPIO_POCR10_POC10	(*(volatile uint_io8_t*)0xB71C052A)  /*@bfbba@*/
#define GPIO_POCR10_POC11	(*(volatile uint_io8_t*)0xB71C052B)  /*@bfbba@*/
#define GPIO_POCR10_POC12	(*(volatile uint_io8_t*)0xB71C052C)  /*@bfbba@*/
#define GPIO_POCR10_POC13	(*(volatile uint_io8_t*)0xB71C052D)  /*@bfbba@*/
#define GPIO_POCR10_POC14	(*(volatile uint_io8_t*)0xB71C052E)  /*@bfbba@*/
#define GPIO_POCR10_POC15	(*(volatile uint_io8_t*)0xB71C052F)  /*@bfbba@*/
#define GPIO_POCR10_POC16	(*(volatile uint_io8_t*)0xB71C0530)  /*@bfbba@*/
#define GPIO_POCR10_POC17	(*(volatile uint_io8_t*)0xB71C0531)  /*@bfbba@*/
#define GPIO_POCR10_POC18	(*(volatile uint_io8_t*)0xB71C0532)  /*@bfbba@*/
#define GPIO_POCR10_POC19	(*(volatile uint_io8_t*)0xB71C0533)  /*@bfbba@*/
#define GPIO_POCR10_POC20	(*(volatile uint_io8_t*)0xB71C0534)  /*@bfbba@*/
#define GPIO_POCR10_POC21	(*(volatile uint_io8_t*)0xB71C0535)  /*@bfbba@*/
#define GPIO_POCR10_POC22	(*(volatile uint_io8_t*)0xB71C0536)  /*@bfbba@*/
#define GPIO_POCR10_POC23	(*(volatile uint_io8_t*)0xB71C0537)  /*@bfbba@*/
#define GPIO_POCR10_POC24	(*(volatile uint_io8_t*)0xB71C0538)  /*@bfbba@*/
#define GPIO_POCR10_POC25	(*(volatile uint_io8_t*)0xB71C0539)  /*@bfbba@*/
#define GPIO_POCR10_POC26	(*(volatile uint_io8_t*)0xB71C053A)  /*@bfbba@*/
#define GPIO_POCR10_POC27	(*(volatile uint_io8_t*)0xB71C053B)  /*@bfbba@*/
#define GPIO_POCR10_POC28	(*(volatile uint_io8_t*)0xB71C053C)  /*@bfbba@*/
#define GPIO_POCR10_POC29	(*(volatile uint_io8_t*)0xB71C053D)  /*@bfbba@*/
#define GPIO_POCR10_POC30	(*(volatile uint_io8_t*)0xB71C053E)  /*@bfbba@*/
#define GPIO_POCR10_POC31	(*(volatile uint_io8_t*)0xB71C053F)  /*@bfbba@*/

#define GPIO_POCR11	(GPIO.unPOCR11.u32Register)  /*@rg@*/
#define GPIO_POCR11_POC0	(*(volatile uint_io8_t*)0xB71C05A0)  /*@bfbba@*/
#define GPIO_POCR11_POC1	(*(volatile uint_io8_t*)0xB71C05A1)  /*@bfbba@*/
#define GPIO_POCR11_POC2	(*(volatile uint_io8_t*)0xB71C05A2)  /*@bfbba@*/
#define GPIO_POCR11_POC3	(*(volatile uint_io8_t*)0xB71C05A3)  /*@bfbba@*/
#define GPIO_POCR11_POC4	(*(volatile uint_io8_t*)0xB71C05A4)  /*@bfbba@*/
#define GPIO_POCR11_POC5	(*(volatile uint_io8_t*)0xB71C05A5)  /*@bfbba@*/
#define GPIO_POCR11_POC6	(*(volatile uint_io8_t*)0xB71C05A6)  /*@bfbba@*/
#define GPIO_POCR11_POC7	(*(volatile uint_io8_t*)0xB71C05A7)  /*@bfbba@*/
#define GPIO_POCR11_POC8	(*(volatile uint_io8_t*)0xB71C05A8)  /*@bfbba@*/
#define GPIO_POCR11_POC9	(*(volatile uint_io8_t*)0xB71C05A9)  /*@bfbba@*/
#define GPIO_POCR11_POC10	(*(volatile uint_io8_t*)0xB71C05AA)  /*@bfbba@*/
#define GPIO_POCR11_POC11	(*(volatile uint_io8_t*)0xB71C05AB)  /*@bfbba@*/
#define GPIO_POCR11_POC12	(*(volatile uint_io8_t*)0xB71C05AC)  /*@bfbba@*/
#define GPIO_POCR11_POC13	(*(volatile uint_io8_t*)0xB71C05AD)  /*@bfbba@*/
#define GPIO_POCR11_POC14	(*(volatile uint_io8_t*)0xB71C05AE)  /*@bfbba@*/
#define GPIO_POCR11_POC15	(*(volatile uint_io8_t*)0xB71C05AF)  /*@bfbba@*/
#define GPIO_POCR11_POC16	(*(volatile uint_io8_t*)0xB71C05B0)  /*@bfbba@*/
#define GPIO_POCR11_POC17	(*(volatile uint_io8_t*)0xB71C05B1)  /*@bfbba@*/
#define GPIO_POCR11_POC18	(*(volatile uint_io8_t*)0xB71C05B2)  /*@bfbba@*/
#define GPIO_POCR11_POC19	(*(volatile uint_io8_t*)0xB71C05B3)  /*@bfbba@*/
#define GPIO_POCR11_POC20	(*(volatile uint_io8_t*)0xB71C05B4)  /*@bfbba@*/
#define GPIO_POCR11_POC21	(*(volatile uint_io8_t*)0xB71C05B5)  /*@bfbba@*/
#define GPIO_POCR11_POC22	(*(volatile uint_io8_t*)0xB71C05B6)  /*@bfbba@*/
#define GPIO_POCR11_POC23	(*(volatile uint_io8_t*)0xB71C05B7)  /*@bfbba@*/
#define GPIO_POCR11_POC24	(*(volatile uint_io8_t*)0xB71C05B8)  /*@bfbba@*/
#define GPIO_POCR11_POC25	(*(volatile uint_io8_t*)0xB71C05B9)  /*@bfbba@*/
#define GPIO_POCR11_POC26	(*(volatile uint_io8_t*)0xB71C05BA)  /*@bfbba@*/
#define GPIO_POCR11_POC27	(*(volatile uint_io8_t*)0xB71C05BB)  /*@bfbba@*/
#define GPIO_POCR11_POC28	(*(volatile uint_io8_t*)0xB71C05BC)  /*@bfbba@*/
#define GPIO_POCR11_POC29	(*(volatile uint_io8_t*)0xB71C05BD)  /*@bfbba@*/
#define GPIO_POCR11_POC30	(*(volatile uint_io8_t*)0xB71C05BE)  /*@bfbba@*/
#define GPIO_POCR11_POC31	(*(volatile uint_io8_t*)0xB71C05BF)  /*@bfbba@*/

#define GPIO_POCR12	(GPIO.unPOCR12.u32Register)  /*@rg@*/
#define GPIO_POCR12_POC0	(*(volatile uint_io8_t*)0xB71C0620)  /*@bfbba@*/
#define GPIO_POCR12_POC1	(*(volatile uint_io8_t*)0xB71C0621)  /*@bfbba@*/
#define GPIO_POCR12_POC2	(*(volatile uint_io8_t*)0xB71C0622)  /*@bfbba@*/
#define GPIO_POCR12_POC3	(*(volatile uint_io8_t*)0xB71C0623)  /*@bfbba@*/
#define GPIO_POCR12_POC4	(*(volatile uint_io8_t*)0xB71C0624)  /*@bfbba@*/
#define GPIO_POCR12_POC5	(*(volatile uint_io8_t*)0xB71C0625)  /*@bfbba@*/
#define GPIO_POCR12_POC6	(*(volatile uint_io8_t*)0xB71C0626)  /*@bfbba@*/
#define GPIO_POCR12_POC7	(*(volatile uint_io8_t*)0xB71C0627)  /*@bfbba@*/
#define GPIO_POCR12_POC8	(*(volatile uint_io8_t*)0xB71C0628)  /*@bfbba@*/
#define GPIO_POCR12_POC9	(*(volatile uint_io8_t*)0xB71C0629)  /*@bfbba@*/
#define GPIO_POCR12_POC10	(*(volatile uint_io8_t*)0xB71C062A)  /*@bfbba@*/
#define GPIO_POCR12_POC11	(*(volatile uint_io8_t*)0xB71C062B)  /*@bfbba@*/
#define GPIO_POCR12_POC12	(*(volatile uint_io8_t*)0xB71C062C)  /*@bfbba@*/
#define GPIO_POCR12_POC13	(*(volatile uint_io8_t*)0xB71C062D)  /*@bfbba@*/
#define GPIO_POCR12_POC14	(*(volatile uint_io8_t*)0xB71C062E)  /*@bfbba@*/
#define GPIO_POCR12_POC15	(*(volatile uint_io8_t*)0xB71C062F)  /*@bfbba@*/
#define GPIO_POCR12_POC16	(*(volatile uint_io8_t*)0xB71C0630)  /*@bfbba@*/
#define GPIO_POCR12_POC17	(*(volatile uint_io8_t*)0xB71C0631)  /*@bfbba@*/
#define GPIO_POCR12_POC18	(*(volatile uint_io8_t*)0xB71C0632)  /*@bfbba@*/
#define GPIO_POCR12_POC19	(*(volatile uint_io8_t*)0xB71C0633)  /*@bfbba@*/
#define GPIO_POCR12_POC20	(*(volatile uint_io8_t*)0xB71C0634)  /*@bfbba@*/
#define GPIO_POCR12_POC21	(*(volatile uint_io8_t*)0xB71C0635)  /*@bfbba@*/
#define GPIO_POCR12_POC22	(*(volatile uint_io8_t*)0xB71C0636)  /*@bfbba@*/
#define GPIO_POCR12_POC23	(*(volatile uint_io8_t*)0xB71C0637)  /*@bfbba@*/
#define GPIO_POCR12_POC24	(*(volatile uint_io8_t*)0xB71C0638)  /*@bfbba@*/
#define GPIO_POCR12_POC25	(*(volatile uint_io8_t*)0xB71C0639)  /*@bfbba@*/
#define GPIO_POCR12_POC26	(*(volatile uint_io8_t*)0xB71C063A)  /*@bfbba@*/
#define GPIO_POCR12_POC27	(*(volatile uint_io8_t*)0xB71C063B)  /*@bfbba@*/
#define GPIO_POCR12_POC28	(*(volatile uint_io8_t*)0xB71C063C)  /*@bfbba@*/
#define GPIO_POCR12_POC29	(*(volatile uint_io8_t*)0xB71C063D)  /*@bfbba@*/
#define GPIO_POCR12_POC30	(*(volatile uint_io8_t*)0xB71C063E)  /*@bfbba@*/
#define GPIO_POCR12_POC31	(*(volatile uint_io8_t*)0xB71C063F)  /*@bfbba@*/

#define GPIO_POCR13	(GPIO.unPOCR13.u32Register)  /*@rg@*/
#define GPIO_POCR13_POC0	(*(volatile uint_io8_t*)0xB71C06A0)  /*@bfbba@*/
#define GPIO_POCR13_POC1	(*(volatile uint_io8_t*)0xB71C06A1)  /*@bfbba@*/
#define GPIO_POCR13_POC2	(*(volatile uint_io8_t*)0xB71C06A2)  /*@bfbba@*/
#define GPIO_POCR13_POC3	(*(volatile uint_io8_t*)0xB71C06A3)  /*@bfbba@*/
#define GPIO_POCR13_POC4	(*(volatile uint_io8_t*)0xB71C06A4)  /*@bfbba@*/
#define GPIO_POCR13_POC5	(*(volatile uint_io8_t*)0xB71C06A5)  /*@bfbba@*/
#define GPIO_POCR13_POC6	(*(volatile uint_io8_t*)0xB71C06A6)  /*@bfbba@*/
#define GPIO_POCR13_POC7	(*(volatile uint_io8_t*)0xB71C06A7)  /*@bfbba@*/
#define GPIO_POCR13_POC8	(*(volatile uint_io8_t*)0xB71C06A8)  /*@bfbba@*/
#define GPIO_POCR13_POC9	(*(volatile uint_io8_t*)0xB71C06A9)  /*@bfbba@*/
#define GPIO_POCR13_POC10	(*(volatile uint_io8_t*)0xB71C06AA)  /*@bfbba@*/
#define GPIO_POCR13_POC11	(*(volatile uint_io8_t*)0xB71C06AB)  /*@bfbba@*/
#define GPIO_POCR13_POC12	(*(volatile uint_io8_t*)0xB71C06AC)  /*@bfbba@*/
#define GPIO_POCR13_POC13	(*(volatile uint_io8_t*)0xB71C06AD)  /*@bfbba@*/
#define GPIO_POCR13_POC14	(*(volatile uint_io8_t*)0xB71C06AE)  /*@bfbba@*/
#define GPIO_POCR13_POC15	(*(volatile uint_io8_t*)0xB71C06AF)  /*@bfbba@*/
#define GPIO_POCR13_POC16	(*(volatile uint_io8_t*)0xB71C06B0)  /*@bfbba@*/
#define GPIO_POCR13_POC17	(*(volatile uint_io8_t*)0xB71C06B1)  /*@bfbba@*/
#define GPIO_POCR13_POC18	(*(volatile uint_io8_t*)0xB71C06B2)  /*@bfbba@*/
#define GPIO_POCR13_POC19	(*(volatile uint_io8_t*)0xB71C06B3)  /*@bfbba@*/
#define GPIO_POCR13_POC20	(*(volatile uint_io8_t*)0xB71C06B4)  /*@bfbba@*/
#define GPIO_POCR13_POC21	(*(volatile uint_io8_t*)0xB71C06B5)  /*@bfbba@*/
#define GPIO_POCR13_POC22	(*(volatile uint_io8_t*)0xB71C06B6)  /*@bfbba@*/
#define GPIO_POCR13_POC23	(*(volatile uint_io8_t*)0xB71C06B7)  /*@bfbba@*/
#define GPIO_POCR13_POC24	(*(volatile uint_io8_t*)0xB71C06B8)  /*@bfbba@*/
#define GPIO_POCR13_POC25	(*(volatile uint_io8_t*)0xB71C06B9)  /*@bfbba@*/
#define GPIO_POCR13_POC26	(*(volatile uint_io8_t*)0xB71C06BA)  /*@bfbba@*/
#define GPIO_POCR13_POC27	(*(volatile uint_io8_t*)0xB71C06BB)  /*@bfbba@*/
#define GPIO_POCR13_POC28	(*(volatile uint_io8_t*)0xB71C06BC)  /*@bfbba@*/
#define GPIO_POCR13_POC29	(*(volatile uint_io8_t*)0xB71C06BD)  /*@bfbba@*/
#define GPIO_POCR13_POC30	(*(volatile uint_io8_t*)0xB71C06BE)  /*@bfbba@*/
#define GPIO_POCR13_POC31	(*(volatile uint_io8_t*)0xB71C06BF)  /*@bfbba@*/

#define GPIO_POCR14	(GPIO.unPOCR14.u32Register)  /*@rg@*/
#define GPIO_POCR14_POC0	(*(volatile uint_io8_t*)0xB71C0720)  /*@bfbba@*/
#define GPIO_POCR14_POC1	(*(volatile uint_io8_t*)0xB71C0721)  /*@bfbba@*/
#define GPIO_POCR14_POC2	(*(volatile uint_io8_t*)0xB71C0722)  /*@bfbba@*/
#define GPIO_POCR14_POC3	(*(volatile uint_io8_t*)0xB71C0723)  /*@bfbba@*/
#define GPIO_POCR14_POC4	(*(volatile uint_io8_t*)0xB71C0724)  /*@bfbba@*/
#define GPIO_POCR14_POC5	(*(volatile uint_io8_t*)0xB71C0725)  /*@bfbba@*/
#define GPIO_POCR14_POC6	(*(volatile uint_io8_t*)0xB71C0726)  /*@bfbba@*/
#define GPIO_POCR14_POC7	(*(volatile uint_io8_t*)0xB71C0727)  /*@bfbba@*/
#define GPIO_POCR14_POC8	(*(volatile uint_io8_t*)0xB71C0728)  /*@bfbba@*/
#define GPIO_POCR14_POC9	(*(volatile uint_io8_t*)0xB71C0729)  /*@bfbba@*/
#define GPIO_POCR14_POC10	(*(volatile uint_io8_t*)0xB71C072A)  /*@bfbba@*/
#define GPIO_POCR14_POC11	(*(volatile uint_io8_t*)0xB71C072B)  /*@bfbba@*/
#define GPIO_POCR14_POC12	(*(volatile uint_io8_t*)0xB71C072C)  /*@bfbba@*/
#define GPIO_POCR14_POC13	(*(volatile uint_io8_t*)0xB71C072D)  /*@bfbba@*/
#define GPIO_POCR14_POC14	(*(volatile uint_io8_t*)0xB71C072E)  /*@bfbba@*/
#define GPIO_POCR14_POC15	(*(volatile uint_io8_t*)0xB71C072F)  /*@bfbba@*/
#define GPIO_POCR14_POC16	(*(volatile uint_io8_t*)0xB71C0730)  /*@bfbba@*/
#define GPIO_POCR14_POC17	(*(volatile uint_io8_t*)0xB71C0731)  /*@bfbba@*/
#define GPIO_POCR14_POC18	(*(volatile uint_io8_t*)0xB71C0732)  /*@bfbba@*/
#define GPIO_POCR14_POC19	(*(volatile uint_io8_t*)0xB71C0733)  /*@bfbba@*/
#define GPIO_POCR14_POC20	(*(volatile uint_io8_t*)0xB71C0734)  /*@bfbba@*/
#define GPIO_POCR14_POC21	(*(volatile uint_io8_t*)0xB71C0735)  /*@bfbba@*/
#define GPIO_POCR14_POC22	(*(volatile uint_io8_t*)0xB71C0736)  /*@bfbba@*/
#define GPIO_POCR14_POC23	(*(volatile uint_io8_t*)0xB71C0737)  /*@bfbba@*/
#define GPIO_POCR14_POC24	(*(volatile uint_io8_t*)0xB71C0738)  /*@bfbba@*/
#define GPIO_POCR14_POC25	(*(volatile uint_io8_t*)0xB71C0739)  /*@bfbba@*/
#define GPIO_POCR14_POC26	(*(volatile uint_io8_t*)0xB71C073A)  /*@bfbba@*/
#define GPIO_POCR14_POC27	(*(volatile uint_io8_t*)0xB71C073B)  /*@bfbba@*/
#define GPIO_POCR14_POC28	(*(volatile uint_io8_t*)0xB71C073C)  /*@bfbba@*/
#define GPIO_POCR14_POC29	(*(volatile uint_io8_t*)0xB71C073D)  /*@bfbba@*/
#define GPIO_POCR14_POC30	(*(volatile uint_io8_t*)0xB71C073E)  /*@bfbba@*/
#define GPIO_POCR14_POC31	(*(volatile uint_io8_t*)0xB71C073F)  /*@bfbba@*/

#define GPIO_POCR15	(GPIO.unPOCR15.u32Register)  /*@rg@*/
#define GPIO_POCR15_POC0	(*(volatile uint_io8_t*)0xB71C07A0)  /*@bfbba@*/
#define GPIO_POCR15_POC1	(*(volatile uint_io8_t*)0xB71C07A1)  /*@bfbba@*/
#define GPIO_POCR15_POC2	(*(volatile uint_io8_t*)0xB71C07A2)  /*@bfbba@*/
#define GPIO_POCR15_POC3	(*(volatile uint_io8_t*)0xB71C07A3)  /*@bfbba@*/
#define GPIO_POCR15_POC4	(*(volatile uint_io8_t*)0xB71C07A4)  /*@bfbba@*/
#define GPIO_POCR15_POC5	(*(volatile uint_io8_t*)0xB71C07A5)  /*@bfbba@*/
#define GPIO_POCR15_POC6	(*(volatile uint_io8_t*)0xB71C07A6)  /*@bfbba@*/
#define GPIO_POCR15_POC7	(*(volatile uint_io8_t*)0xB71C07A7)  /*@bfbba@*/
#define GPIO_POCR15_POC8	(*(volatile uint_io8_t*)0xB71C07A8)  /*@bfbba@*/
#define GPIO_POCR15_POC9	(*(volatile uint_io8_t*)0xB71C07A9)  /*@bfbba@*/
#define GPIO_POCR15_POC10	(*(volatile uint_io8_t*)0xB71C07AA)  /*@bfbba@*/
#define GPIO_POCR15_POC11	(*(volatile uint_io8_t*)0xB71C07AB)  /*@bfbba@*/
#define GPIO_POCR15_POC12	(*(volatile uint_io8_t*)0xB71C07AC)  /*@bfbba@*/
#define GPIO_POCR15_POC13	(*(volatile uint_io8_t*)0xB71C07AD)  /*@bfbba@*/
#define GPIO_POCR15_POC14	(*(volatile uint_io8_t*)0xB71C07AE)  /*@bfbba@*/
#define GPIO_POCR15_POC15	(*(volatile uint_io8_t*)0xB71C07AF)  /*@bfbba@*/
#define GPIO_POCR15_POC16	(*(volatile uint_io8_t*)0xB71C07B0)  /*@bfbba@*/
#define GPIO_POCR15_POC17	(*(volatile uint_io8_t*)0xB71C07B1)  /*@bfbba@*/
#define GPIO_POCR15_POC18	(*(volatile uint_io8_t*)0xB71C07B2)  /*@bfbba@*/
#define GPIO_POCR15_POC19	(*(volatile uint_io8_t*)0xB71C07B3)  /*@bfbba@*/
#define GPIO_POCR15_POC20	(*(volatile uint_io8_t*)0xB71C07B4)  /*@bfbba@*/
#define GPIO_POCR15_POC21	(*(volatile uint_io8_t*)0xB71C07B5)  /*@bfbba@*/
#define GPIO_POCR15_POC22	(*(volatile uint_io8_t*)0xB71C07B6)  /*@bfbba@*/
#define GPIO_POCR15_POC23	(*(volatile uint_io8_t*)0xB71C07B7)  /*@bfbba@*/
#define GPIO_POCR15_POC24	(*(volatile uint_io8_t*)0xB71C07B8)  /*@bfbba@*/
#define GPIO_POCR15_POC25	(*(volatile uint_io8_t*)0xB71C07B9)  /*@bfbba@*/
#define GPIO_POCR15_POC26	(*(volatile uint_io8_t*)0xB71C07BA)  /*@bfbba@*/
#define GPIO_POCR15_POC27	(*(volatile uint_io8_t*)0xB71C07BB)  /*@bfbba@*/
#define GPIO_POCR15_POC28	(*(volatile uint_io8_t*)0xB71C07BC)  /*@bfbba@*/
#define GPIO_POCR15_POC29	(*(volatile uint_io8_t*)0xB71C07BD)  /*@bfbba@*/
#define GPIO_POCR15_POC30	(*(volatile uint_io8_t*)0xB71C07BE)  /*@bfbba@*/
#define GPIO_POCR15_POC31	(*(volatile uint_io8_t*)0xB71C07BF)  /*@bfbba@*/

typedef struct stc_gpio_pocrn_field{
    uint_io32_t		u1POC0:1;
    uint_io32_t		u1POC1:1;
    uint_io32_t		u1POC2:1;
    uint_io32_t		u1POC3:1;
    uint_io32_t		u1POC4:1;
    uint_io32_t		u1POC5:1;
    uint_io32_t		u1POC6:1;
    uint_io32_t		u1POC7:1;
    uint_io32_t		u1POC8:1;
    uint_io32_t		u1POC9:1;
    uint_io32_t		u1POC10:1;
    uint_io32_t		u1POC11:1;
    uint_io32_t		u1POC12:1;
    uint_io32_t		u1POC13:1;
    uint_io32_t		u1POC14:1;
    uint_io32_t		u1POC15:1;
    uint_io32_t		u1POC16:1;
    uint_io32_t		u1POC17:1;
    uint_io32_t		u1POC18:1;
    uint_io32_t		u1POC19:1;
    uint_io32_t		u1POC20:1;
    uint_io32_t		u1POC21:1;
    uint_io32_t		u1POC22:1;
    uint_io32_t		u1POC23:1;
    uint_io32_t		u1POC24:1;
    uint_io32_t		u1POC25:1;
    uint_io32_t		u1POC26:1;
    uint_io32_t		u1POC27:1;
    uint_io32_t		u1POC28:1;
    uint_io32_t		u1POC29:1;
    uint_io32_t		u1POC30:1;
    uint_io32_t		u1POC31:1;
}stc_gpio_pocrn_field_t;

typedef union un_gpio_pocrn{
    uint_io32_t		u32Register;
    stc_gpio_pocrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_pocrn_t;

/* DDSR[0-15] */
#define GPIO_DDSR0	(GPIO.unDDSR0.u32Register)  /*@rg@*/
#define GPIO_DDSR0_DDS0	(*(volatile uint_io8_t*)0xB71C0040)  /*@bfbba@*/
#define GPIO_DDSR0_DDS1	(*(volatile uint_io8_t*)0xB71C0041)  /*@bfbba@*/
#define GPIO_DDSR0_DDS2	(*(volatile uint_io8_t*)0xB71C0042)  /*@bfbba@*/
#define GPIO_DDSR0_DDS3	(*(volatile uint_io8_t*)0xB71C0043)  /*@bfbba@*/
#define GPIO_DDSR0_DDS4	(*(volatile uint_io8_t*)0xB71C0044)  /*@bfbba@*/
#define GPIO_DDSR0_DDS5	(*(volatile uint_io8_t*)0xB71C0045)  /*@bfbba@*/
#define GPIO_DDSR0_DDS6	(*(volatile uint_io8_t*)0xB71C0046)  /*@bfbba@*/
#define GPIO_DDSR0_DDS7	(*(volatile uint_io8_t*)0xB71C0047)  /*@bfbba@*/
#define GPIO_DDSR0_DDS8	(*(volatile uint_io8_t*)0xB71C0048)  /*@bfbba@*/
#define GPIO_DDSR0_DDS9	(*(volatile uint_io8_t*)0xB71C0049)  /*@bfbba@*/
#define GPIO_DDSR0_DDS10	(*(volatile uint_io8_t*)0xB71C004A)  /*@bfbba@*/
#define GPIO_DDSR0_DDS11	(*(volatile uint_io8_t*)0xB71C004B)  /*@bfbba@*/
#define GPIO_DDSR0_DDS12	(*(volatile uint_io8_t*)0xB71C004C)  /*@bfbba@*/
#define GPIO_DDSR0_DDS13	(*(volatile uint_io8_t*)0xB71C004D)  /*@bfbba@*/
#define GPIO_DDSR0_DDS14	(*(volatile uint_io8_t*)0xB71C004E)  /*@bfbba@*/
#define GPIO_DDSR0_DDS15	(*(volatile uint_io8_t*)0xB71C004F)  /*@bfbba@*/
#define GPIO_DDSR0_DDS16	(*(volatile uint_io8_t*)0xB71C0050)  /*@bfbba@*/
#define GPIO_DDSR0_DDS17	(*(volatile uint_io8_t*)0xB71C0051)  /*@bfbba@*/
#define GPIO_DDSR0_DDS18	(*(volatile uint_io8_t*)0xB71C0052)  /*@bfbba@*/
#define GPIO_DDSR0_DDS19	(*(volatile uint_io8_t*)0xB71C0053)  /*@bfbba@*/
#define GPIO_DDSR0_DDS20	(*(volatile uint_io8_t*)0xB71C0054)  /*@bfbba@*/
#define GPIO_DDSR0_DDS21	(*(volatile uint_io8_t*)0xB71C0055)  /*@bfbba@*/
#define GPIO_DDSR0_DDS22	(*(volatile uint_io8_t*)0xB71C0056)  /*@bfbba@*/
#define GPIO_DDSR0_DDS23	(*(volatile uint_io8_t*)0xB71C0057)  /*@bfbba@*/
#define GPIO_DDSR0_DDS24	(*(volatile uint_io8_t*)0xB71C0058)  /*@bfbba@*/
#define GPIO_DDSR0_DDS25	(*(volatile uint_io8_t*)0xB71C0059)  /*@bfbba@*/
#define GPIO_DDSR0_DDS26	(*(volatile uint_io8_t*)0xB71C005A)  /*@bfbba@*/
#define GPIO_DDSR0_DDS27	(*(volatile uint_io8_t*)0xB71C005B)  /*@bfbba@*/
#define GPIO_DDSR0_DDS28	(*(volatile uint_io8_t*)0xB71C005C)  /*@bfbba@*/
#define GPIO_DDSR0_DDS29	(*(volatile uint_io8_t*)0xB71C005D)  /*@bfbba@*/
#define GPIO_DDSR0_DDS30	(*(volatile uint_io8_t*)0xB71C005E)  /*@bfbba@*/
#define GPIO_DDSR0_DDS31	(*(volatile uint_io8_t*)0xB71C005F)  /*@bfbba@*/

#define GPIO_DDSR1	(GPIO.unDDSR1.u32Register)  /*@rg@*/
#define GPIO_DDSR1_DDS0	(*(volatile uint_io8_t*)0xB71C00C0)  /*@bfbba@*/
#define GPIO_DDSR1_DDS1	(*(volatile uint_io8_t*)0xB71C00C1)  /*@bfbba@*/
#define GPIO_DDSR1_DDS2	(*(volatile uint_io8_t*)0xB71C00C2)  /*@bfbba@*/
#define GPIO_DDSR1_DDS3	(*(volatile uint_io8_t*)0xB71C00C3)  /*@bfbba@*/
#define GPIO_DDSR1_DDS4	(*(volatile uint_io8_t*)0xB71C00C4)  /*@bfbba@*/
#define GPIO_DDSR1_DDS5	(*(volatile uint_io8_t*)0xB71C00C5)  /*@bfbba@*/
#define GPIO_DDSR1_DDS6	(*(volatile uint_io8_t*)0xB71C00C6)  /*@bfbba@*/
#define GPIO_DDSR1_DDS7	(*(volatile uint_io8_t*)0xB71C00C7)  /*@bfbba@*/
#define GPIO_DDSR1_DDS8	(*(volatile uint_io8_t*)0xB71C00C8)  /*@bfbba@*/
#define GPIO_DDSR1_DDS9	(*(volatile uint_io8_t*)0xB71C00C9)  /*@bfbba@*/
#define GPIO_DDSR1_DDS10	(*(volatile uint_io8_t*)0xB71C00CA)  /*@bfbba@*/
#define GPIO_DDSR1_DDS11	(*(volatile uint_io8_t*)0xB71C00CB)  /*@bfbba@*/
#define GPIO_DDSR1_DDS12	(*(volatile uint_io8_t*)0xB71C00CC)  /*@bfbba@*/
#define GPIO_DDSR1_DDS13	(*(volatile uint_io8_t*)0xB71C00CD)  /*@bfbba@*/
#define GPIO_DDSR1_DDS14	(*(volatile uint_io8_t*)0xB71C00CE)  /*@bfbba@*/
#define GPIO_DDSR1_DDS15	(*(volatile uint_io8_t*)0xB71C00CF)  /*@bfbba@*/
#define GPIO_DDSR1_DDS16	(*(volatile uint_io8_t*)0xB71C00D0)  /*@bfbba@*/
#define GPIO_DDSR1_DDS17	(*(volatile uint_io8_t*)0xB71C00D1)  /*@bfbba@*/
#define GPIO_DDSR1_DDS18	(*(volatile uint_io8_t*)0xB71C00D2)  /*@bfbba@*/
#define GPIO_DDSR1_DDS19	(*(volatile uint_io8_t*)0xB71C00D3)  /*@bfbba@*/
#define GPIO_DDSR1_DDS20	(*(volatile uint_io8_t*)0xB71C00D4)  /*@bfbba@*/
#define GPIO_DDSR1_DDS21	(*(volatile uint_io8_t*)0xB71C00D5)  /*@bfbba@*/
#define GPIO_DDSR1_DDS22	(*(volatile uint_io8_t*)0xB71C00D6)  /*@bfbba@*/
#define GPIO_DDSR1_DDS23	(*(volatile uint_io8_t*)0xB71C00D7)  /*@bfbba@*/
#define GPIO_DDSR1_DDS24	(*(volatile uint_io8_t*)0xB71C00D8)  /*@bfbba@*/
#define GPIO_DDSR1_DDS25	(*(volatile uint_io8_t*)0xB71C00D9)  /*@bfbba@*/
#define GPIO_DDSR1_DDS26	(*(volatile uint_io8_t*)0xB71C00DA)  /*@bfbba@*/
#define GPIO_DDSR1_DDS27	(*(volatile uint_io8_t*)0xB71C00DB)  /*@bfbba@*/
#define GPIO_DDSR1_DDS28	(*(volatile uint_io8_t*)0xB71C00DC)  /*@bfbba@*/
#define GPIO_DDSR1_DDS29	(*(volatile uint_io8_t*)0xB71C00DD)  /*@bfbba@*/
#define GPIO_DDSR1_DDS30	(*(volatile uint_io8_t*)0xB71C00DE)  /*@bfbba@*/
#define GPIO_DDSR1_DDS31	(*(volatile uint_io8_t*)0xB71C00DF)  /*@bfbba@*/

#define GPIO_DDSR2	(GPIO.unDDSR2.u32Register)  /*@rg@*/
#define GPIO_DDSR2_DDS0	(*(volatile uint_io8_t*)0xB71C0140)  /*@bfbba@*/
#define GPIO_DDSR2_DDS1	(*(volatile uint_io8_t*)0xB71C0141)  /*@bfbba@*/
#define GPIO_DDSR2_DDS2	(*(volatile uint_io8_t*)0xB71C0142)  /*@bfbba@*/
#define GPIO_DDSR2_DDS3	(*(volatile uint_io8_t*)0xB71C0143)  /*@bfbba@*/
#define GPIO_DDSR2_DDS4	(*(volatile uint_io8_t*)0xB71C0144)  /*@bfbba@*/
#define GPIO_DDSR2_DDS5	(*(volatile uint_io8_t*)0xB71C0145)  /*@bfbba@*/
#define GPIO_DDSR2_DDS6	(*(volatile uint_io8_t*)0xB71C0146)  /*@bfbba@*/
#define GPIO_DDSR2_DDS7	(*(volatile uint_io8_t*)0xB71C0147)  /*@bfbba@*/
#define GPIO_DDSR2_DDS8	(*(volatile uint_io8_t*)0xB71C0148)  /*@bfbba@*/
#define GPIO_DDSR2_DDS9	(*(volatile uint_io8_t*)0xB71C0149)  /*@bfbba@*/
#define GPIO_DDSR2_DDS10	(*(volatile uint_io8_t*)0xB71C014A)  /*@bfbba@*/
#define GPIO_DDSR2_DDS11	(*(volatile uint_io8_t*)0xB71C014B)  /*@bfbba@*/
#define GPIO_DDSR2_DDS12	(*(volatile uint_io8_t*)0xB71C014C)  /*@bfbba@*/
#define GPIO_DDSR2_DDS13	(*(volatile uint_io8_t*)0xB71C014D)  /*@bfbba@*/
#define GPIO_DDSR2_DDS14	(*(volatile uint_io8_t*)0xB71C014E)  /*@bfbba@*/
#define GPIO_DDSR2_DDS15	(*(volatile uint_io8_t*)0xB71C014F)  /*@bfbba@*/
#define GPIO_DDSR2_DDS16	(*(volatile uint_io8_t*)0xB71C0150)  /*@bfbba@*/
#define GPIO_DDSR2_DDS17	(*(volatile uint_io8_t*)0xB71C0151)  /*@bfbba@*/
#define GPIO_DDSR2_DDS18	(*(volatile uint_io8_t*)0xB71C0152)  /*@bfbba@*/
#define GPIO_DDSR2_DDS19	(*(volatile uint_io8_t*)0xB71C0153)  /*@bfbba@*/
#define GPIO_DDSR2_DDS20	(*(volatile uint_io8_t*)0xB71C0154)  /*@bfbba@*/
#define GPIO_DDSR2_DDS21	(*(volatile uint_io8_t*)0xB71C0155)  /*@bfbba@*/
#define GPIO_DDSR2_DDS22	(*(volatile uint_io8_t*)0xB71C0156)  /*@bfbba@*/
#define GPIO_DDSR2_DDS23	(*(volatile uint_io8_t*)0xB71C0157)  /*@bfbba@*/
#define GPIO_DDSR2_DDS24	(*(volatile uint_io8_t*)0xB71C0158)  /*@bfbba@*/
#define GPIO_DDSR2_DDS25	(*(volatile uint_io8_t*)0xB71C0159)  /*@bfbba@*/
#define GPIO_DDSR2_DDS26	(*(volatile uint_io8_t*)0xB71C015A)  /*@bfbba@*/
#define GPIO_DDSR2_DDS27	(*(volatile uint_io8_t*)0xB71C015B)  /*@bfbba@*/
#define GPIO_DDSR2_DDS28	(*(volatile uint_io8_t*)0xB71C015C)  /*@bfbba@*/
#define GPIO_DDSR2_DDS29	(*(volatile uint_io8_t*)0xB71C015D)  /*@bfbba@*/
#define GPIO_DDSR2_DDS30	(*(volatile uint_io8_t*)0xB71C015E)  /*@bfbba@*/
#define GPIO_DDSR2_DDS31	(*(volatile uint_io8_t*)0xB71C015F)  /*@bfbba@*/

#define GPIO_DDSR3	(GPIO.unDDSR3.u32Register)  /*@rg@*/
#define GPIO_DDSR3_DDS0	(*(volatile uint_io8_t*)0xB71C01C0)  /*@bfbba@*/
#define GPIO_DDSR3_DDS1	(*(volatile uint_io8_t*)0xB71C01C1)  /*@bfbba@*/
#define GPIO_DDSR3_DDS2	(*(volatile uint_io8_t*)0xB71C01C2)  /*@bfbba@*/
#define GPIO_DDSR3_DDS3	(*(volatile uint_io8_t*)0xB71C01C3)  /*@bfbba@*/
#define GPIO_DDSR3_DDS4	(*(volatile uint_io8_t*)0xB71C01C4)  /*@bfbba@*/
#define GPIO_DDSR3_DDS5	(*(volatile uint_io8_t*)0xB71C01C5)  /*@bfbba@*/
#define GPIO_DDSR3_DDS6	(*(volatile uint_io8_t*)0xB71C01C6)  /*@bfbba@*/
#define GPIO_DDSR3_DDS7	(*(volatile uint_io8_t*)0xB71C01C7)  /*@bfbba@*/
#define GPIO_DDSR3_DDS8	(*(volatile uint_io8_t*)0xB71C01C8)  /*@bfbba@*/
#define GPIO_DDSR3_DDS9	(*(volatile uint_io8_t*)0xB71C01C9)  /*@bfbba@*/
#define GPIO_DDSR3_DDS10	(*(volatile uint_io8_t*)0xB71C01CA)  /*@bfbba@*/
#define GPIO_DDSR3_DDS11	(*(volatile uint_io8_t*)0xB71C01CB)  /*@bfbba@*/
#define GPIO_DDSR3_DDS12	(*(volatile uint_io8_t*)0xB71C01CC)  /*@bfbba@*/
#define GPIO_DDSR3_DDS13	(*(volatile uint_io8_t*)0xB71C01CD)  /*@bfbba@*/
#define GPIO_DDSR3_DDS14	(*(volatile uint_io8_t*)0xB71C01CE)  /*@bfbba@*/
#define GPIO_DDSR3_DDS15	(*(volatile uint_io8_t*)0xB71C01CF)  /*@bfbba@*/
#define GPIO_DDSR3_DDS16	(*(volatile uint_io8_t*)0xB71C01D0)  /*@bfbba@*/
#define GPIO_DDSR3_DDS17	(*(volatile uint_io8_t*)0xB71C01D1)  /*@bfbba@*/
#define GPIO_DDSR3_DDS18	(*(volatile uint_io8_t*)0xB71C01D2)  /*@bfbba@*/
#define GPIO_DDSR3_DDS19	(*(volatile uint_io8_t*)0xB71C01D3)  /*@bfbba@*/
#define GPIO_DDSR3_DDS20	(*(volatile uint_io8_t*)0xB71C01D4)  /*@bfbba@*/
#define GPIO_DDSR3_DDS21	(*(volatile uint_io8_t*)0xB71C01D5)  /*@bfbba@*/
#define GPIO_DDSR3_DDS22	(*(volatile uint_io8_t*)0xB71C01D6)  /*@bfbba@*/
#define GPIO_DDSR3_DDS23	(*(volatile uint_io8_t*)0xB71C01D7)  /*@bfbba@*/
#define GPIO_DDSR3_DDS24	(*(volatile uint_io8_t*)0xB71C01D8)  /*@bfbba@*/
#define GPIO_DDSR3_DDS25	(*(volatile uint_io8_t*)0xB71C01D9)  /*@bfbba@*/
#define GPIO_DDSR3_DDS26	(*(volatile uint_io8_t*)0xB71C01DA)  /*@bfbba@*/
#define GPIO_DDSR3_DDS27	(*(volatile uint_io8_t*)0xB71C01DB)  /*@bfbba@*/
#define GPIO_DDSR3_DDS28	(*(volatile uint_io8_t*)0xB71C01DC)  /*@bfbba@*/
#define GPIO_DDSR3_DDS29	(*(volatile uint_io8_t*)0xB71C01DD)  /*@bfbba@*/
#define GPIO_DDSR3_DDS30	(*(volatile uint_io8_t*)0xB71C01DE)  /*@bfbba@*/
#define GPIO_DDSR3_DDS31	(*(volatile uint_io8_t*)0xB71C01DF)  /*@bfbba@*/

#define GPIO_DDSR4	(GPIO.unDDSR4.u32Register)  /*@rg@*/
#define GPIO_DDSR4_DDS0	(*(volatile uint_io8_t*)0xB71C0240)  /*@bfbba@*/
#define GPIO_DDSR4_DDS1	(*(volatile uint_io8_t*)0xB71C0241)  /*@bfbba@*/
#define GPIO_DDSR4_DDS2	(*(volatile uint_io8_t*)0xB71C0242)  /*@bfbba@*/
#define GPIO_DDSR4_DDS3	(*(volatile uint_io8_t*)0xB71C0243)  /*@bfbba@*/
#define GPIO_DDSR4_DDS4	(*(volatile uint_io8_t*)0xB71C0244)  /*@bfbba@*/
#define GPIO_DDSR4_DDS5	(*(volatile uint_io8_t*)0xB71C0245)  /*@bfbba@*/
#define GPIO_DDSR4_DDS6	(*(volatile uint_io8_t*)0xB71C0246)  /*@bfbba@*/
#define GPIO_DDSR4_DDS7	(*(volatile uint_io8_t*)0xB71C0247)  /*@bfbba@*/
#define GPIO_DDSR4_DDS8	(*(volatile uint_io8_t*)0xB71C0248)  /*@bfbba@*/
#define GPIO_DDSR4_DDS9	(*(volatile uint_io8_t*)0xB71C0249)  /*@bfbba@*/
#define GPIO_DDSR4_DDS10	(*(volatile uint_io8_t*)0xB71C024A)  /*@bfbba@*/
#define GPIO_DDSR4_DDS11	(*(volatile uint_io8_t*)0xB71C024B)  /*@bfbba@*/
#define GPIO_DDSR4_DDS12	(*(volatile uint_io8_t*)0xB71C024C)  /*@bfbba@*/
#define GPIO_DDSR4_DDS13	(*(volatile uint_io8_t*)0xB71C024D)  /*@bfbba@*/
#define GPIO_DDSR4_DDS14	(*(volatile uint_io8_t*)0xB71C024E)  /*@bfbba@*/
#define GPIO_DDSR4_DDS15	(*(volatile uint_io8_t*)0xB71C024F)  /*@bfbba@*/
#define GPIO_DDSR4_DDS16	(*(volatile uint_io8_t*)0xB71C0250)  /*@bfbba@*/
#define GPIO_DDSR4_DDS17	(*(volatile uint_io8_t*)0xB71C0251)  /*@bfbba@*/
#define GPIO_DDSR4_DDS18	(*(volatile uint_io8_t*)0xB71C0252)  /*@bfbba@*/
#define GPIO_DDSR4_DDS19	(*(volatile uint_io8_t*)0xB71C0253)  /*@bfbba@*/
#define GPIO_DDSR4_DDS20	(*(volatile uint_io8_t*)0xB71C0254)  /*@bfbba@*/
#define GPIO_DDSR4_DDS21	(*(volatile uint_io8_t*)0xB71C0255)  /*@bfbba@*/
#define GPIO_DDSR4_DDS22	(*(volatile uint_io8_t*)0xB71C0256)  /*@bfbba@*/
#define GPIO_DDSR4_DDS23	(*(volatile uint_io8_t*)0xB71C0257)  /*@bfbba@*/
#define GPIO_DDSR4_DDS24	(*(volatile uint_io8_t*)0xB71C0258)  /*@bfbba@*/
#define GPIO_DDSR4_DDS25	(*(volatile uint_io8_t*)0xB71C0259)  /*@bfbba@*/
#define GPIO_DDSR4_DDS26	(*(volatile uint_io8_t*)0xB71C025A)  /*@bfbba@*/
#define GPIO_DDSR4_DDS27	(*(volatile uint_io8_t*)0xB71C025B)  /*@bfbba@*/
#define GPIO_DDSR4_DDS28	(*(volatile uint_io8_t*)0xB71C025C)  /*@bfbba@*/
#define GPIO_DDSR4_DDS29	(*(volatile uint_io8_t*)0xB71C025D)  /*@bfbba@*/
#define GPIO_DDSR4_DDS30	(*(volatile uint_io8_t*)0xB71C025E)  /*@bfbba@*/
#define GPIO_DDSR4_DDS31	(*(volatile uint_io8_t*)0xB71C025F)  /*@bfbba@*/

#define GPIO_DDSR5	(GPIO.unDDSR5.u32Register)  /*@rg@*/
#define GPIO_DDSR5_DDS0	(*(volatile uint_io8_t*)0xB71C02C0)  /*@bfbba@*/
#define GPIO_DDSR5_DDS1	(*(volatile uint_io8_t*)0xB71C02C1)  /*@bfbba@*/
#define GPIO_DDSR5_DDS2	(*(volatile uint_io8_t*)0xB71C02C2)  /*@bfbba@*/
#define GPIO_DDSR5_DDS3	(*(volatile uint_io8_t*)0xB71C02C3)  /*@bfbba@*/
#define GPIO_DDSR5_DDS4	(*(volatile uint_io8_t*)0xB71C02C4)  /*@bfbba@*/
#define GPIO_DDSR5_DDS5	(*(volatile uint_io8_t*)0xB71C02C5)  /*@bfbba@*/
#define GPIO_DDSR5_DDS6	(*(volatile uint_io8_t*)0xB71C02C6)  /*@bfbba@*/
#define GPIO_DDSR5_DDS7	(*(volatile uint_io8_t*)0xB71C02C7)  /*@bfbba@*/
#define GPIO_DDSR5_DDS8	(*(volatile uint_io8_t*)0xB71C02C8)  /*@bfbba@*/
#define GPIO_DDSR5_DDS9	(*(volatile uint_io8_t*)0xB71C02C9)  /*@bfbba@*/
#define GPIO_DDSR5_DDS10	(*(volatile uint_io8_t*)0xB71C02CA)  /*@bfbba@*/
#define GPIO_DDSR5_DDS11	(*(volatile uint_io8_t*)0xB71C02CB)  /*@bfbba@*/
#define GPIO_DDSR5_DDS12	(*(volatile uint_io8_t*)0xB71C02CC)  /*@bfbba@*/
#define GPIO_DDSR5_DDS13	(*(volatile uint_io8_t*)0xB71C02CD)  /*@bfbba@*/
#define GPIO_DDSR5_DDS14	(*(volatile uint_io8_t*)0xB71C02CE)  /*@bfbba@*/
#define GPIO_DDSR5_DDS15	(*(volatile uint_io8_t*)0xB71C02CF)  /*@bfbba@*/
#define GPIO_DDSR5_DDS16	(*(volatile uint_io8_t*)0xB71C02D0)  /*@bfbba@*/
#define GPIO_DDSR5_DDS17	(*(volatile uint_io8_t*)0xB71C02D1)  /*@bfbba@*/
#define GPIO_DDSR5_DDS18	(*(volatile uint_io8_t*)0xB71C02D2)  /*@bfbba@*/
#define GPIO_DDSR5_DDS19	(*(volatile uint_io8_t*)0xB71C02D3)  /*@bfbba@*/
#define GPIO_DDSR5_DDS20	(*(volatile uint_io8_t*)0xB71C02D4)  /*@bfbba@*/
#define GPIO_DDSR5_DDS21	(*(volatile uint_io8_t*)0xB71C02D5)  /*@bfbba@*/
#define GPIO_DDSR5_DDS22	(*(volatile uint_io8_t*)0xB71C02D6)  /*@bfbba@*/
#define GPIO_DDSR5_DDS23	(*(volatile uint_io8_t*)0xB71C02D7)  /*@bfbba@*/
#define GPIO_DDSR5_DDS24	(*(volatile uint_io8_t*)0xB71C02D8)  /*@bfbba@*/
#define GPIO_DDSR5_DDS25	(*(volatile uint_io8_t*)0xB71C02D9)  /*@bfbba@*/
#define GPIO_DDSR5_DDS26	(*(volatile uint_io8_t*)0xB71C02DA)  /*@bfbba@*/
#define GPIO_DDSR5_DDS27	(*(volatile uint_io8_t*)0xB71C02DB)  /*@bfbba@*/
#define GPIO_DDSR5_DDS28	(*(volatile uint_io8_t*)0xB71C02DC)  /*@bfbba@*/
#define GPIO_DDSR5_DDS29	(*(volatile uint_io8_t*)0xB71C02DD)  /*@bfbba@*/
#define GPIO_DDSR5_DDS30	(*(volatile uint_io8_t*)0xB71C02DE)  /*@bfbba@*/
#define GPIO_DDSR5_DDS31	(*(volatile uint_io8_t*)0xB71C02DF)  /*@bfbba@*/

#define GPIO_DDSR6	(GPIO.unDDSR6.u32Register)  /*@rg@*/
#define GPIO_DDSR6_DDS0	(*(volatile uint_io8_t*)0xB71C0340)  /*@bfbba@*/
#define GPIO_DDSR6_DDS1	(*(volatile uint_io8_t*)0xB71C0341)  /*@bfbba@*/
#define GPIO_DDSR6_DDS2	(*(volatile uint_io8_t*)0xB71C0342)  /*@bfbba@*/
#define GPIO_DDSR6_DDS3	(*(volatile uint_io8_t*)0xB71C0343)  /*@bfbba@*/
#define GPIO_DDSR6_DDS4	(*(volatile uint_io8_t*)0xB71C0344)  /*@bfbba@*/
#define GPIO_DDSR6_DDS5	(*(volatile uint_io8_t*)0xB71C0345)  /*@bfbba@*/
#define GPIO_DDSR6_DDS6	(*(volatile uint_io8_t*)0xB71C0346)  /*@bfbba@*/
#define GPIO_DDSR6_DDS7	(*(volatile uint_io8_t*)0xB71C0347)  /*@bfbba@*/
#define GPIO_DDSR6_DDS8	(*(volatile uint_io8_t*)0xB71C0348)  /*@bfbba@*/
#define GPIO_DDSR6_DDS9	(*(volatile uint_io8_t*)0xB71C0349)  /*@bfbba@*/
#define GPIO_DDSR6_DDS10	(*(volatile uint_io8_t*)0xB71C034A)  /*@bfbba@*/
#define GPIO_DDSR6_DDS11	(*(volatile uint_io8_t*)0xB71C034B)  /*@bfbba@*/
#define GPIO_DDSR6_DDS12	(*(volatile uint_io8_t*)0xB71C034C)  /*@bfbba@*/
#define GPIO_DDSR6_DDS13	(*(volatile uint_io8_t*)0xB71C034D)  /*@bfbba@*/
#define GPIO_DDSR6_DDS14	(*(volatile uint_io8_t*)0xB71C034E)  /*@bfbba@*/
#define GPIO_DDSR6_DDS15	(*(volatile uint_io8_t*)0xB71C034F)  /*@bfbba@*/
#define GPIO_DDSR6_DDS16	(*(volatile uint_io8_t*)0xB71C0350)  /*@bfbba@*/
#define GPIO_DDSR6_DDS17	(*(volatile uint_io8_t*)0xB71C0351)  /*@bfbba@*/
#define GPIO_DDSR6_DDS18	(*(volatile uint_io8_t*)0xB71C0352)  /*@bfbba@*/
#define GPIO_DDSR6_DDS19	(*(volatile uint_io8_t*)0xB71C0353)  /*@bfbba@*/
#define GPIO_DDSR6_DDS20	(*(volatile uint_io8_t*)0xB71C0354)  /*@bfbba@*/
#define GPIO_DDSR6_DDS21	(*(volatile uint_io8_t*)0xB71C0355)  /*@bfbba@*/
#define GPIO_DDSR6_DDS22	(*(volatile uint_io8_t*)0xB71C0356)  /*@bfbba@*/
#define GPIO_DDSR6_DDS23	(*(volatile uint_io8_t*)0xB71C0357)  /*@bfbba@*/
#define GPIO_DDSR6_DDS24	(*(volatile uint_io8_t*)0xB71C0358)  /*@bfbba@*/
#define GPIO_DDSR6_DDS25	(*(volatile uint_io8_t*)0xB71C0359)  /*@bfbba@*/
#define GPIO_DDSR6_DDS26	(*(volatile uint_io8_t*)0xB71C035A)  /*@bfbba@*/
#define GPIO_DDSR6_DDS27	(*(volatile uint_io8_t*)0xB71C035B)  /*@bfbba@*/
#define GPIO_DDSR6_DDS28	(*(volatile uint_io8_t*)0xB71C035C)  /*@bfbba@*/
#define GPIO_DDSR6_DDS29	(*(volatile uint_io8_t*)0xB71C035D)  /*@bfbba@*/
#define GPIO_DDSR6_DDS30	(*(volatile uint_io8_t*)0xB71C035E)  /*@bfbba@*/
#define GPIO_DDSR6_DDS31	(*(volatile uint_io8_t*)0xB71C035F)  /*@bfbba@*/

#define GPIO_DDSR7	(GPIO.unDDSR7.u32Register)  /*@rg@*/
#define GPIO_DDSR7_DDS0	(*(volatile uint_io8_t*)0xB71C03C0)  /*@bfbba@*/
#define GPIO_DDSR7_DDS1	(*(volatile uint_io8_t*)0xB71C03C1)  /*@bfbba@*/
#define GPIO_DDSR7_DDS2	(*(volatile uint_io8_t*)0xB71C03C2)  /*@bfbba@*/
#define GPIO_DDSR7_DDS3	(*(volatile uint_io8_t*)0xB71C03C3)  /*@bfbba@*/
#define GPIO_DDSR7_DDS4	(*(volatile uint_io8_t*)0xB71C03C4)  /*@bfbba@*/
#define GPIO_DDSR7_DDS5	(*(volatile uint_io8_t*)0xB71C03C5)  /*@bfbba@*/
#define GPIO_DDSR7_DDS6	(*(volatile uint_io8_t*)0xB71C03C6)  /*@bfbba@*/
#define GPIO_DDSR7_DDS7	(*(volatile uint_io8_t*)0xB71C03C7)  /*@bfbba@*/
#define GPIO_DDSR7_DDS8	(*(volatile uint_io8_t*)0xB71C03C8)  /*@bfbba@*/
#define GPIO_DDSR7_DDS9	(*(volatile uint_io8_t*)0xB71C03C9)  /*@bfbba@*/
#define GPIO_DDSR7_DDS10	(*(volatile uint_io8_t*)0xB71C03CA)  /*@bfbba@*/
#define GPIO_DDSR7_DDS11	(*(volatile uint_io8_t*)0xB71C03CB)  /*@bfbba@*/
#define GPIO_DDSR7_DDS12	(*(volatile uint_io8_t*)0xB71C03CC)  /*@bfbba@*/
#define GPIO_DDSR7_DDS13	(*(volatile uint_io8_t*)0xB71C03CD)  /*@bfbba@*/
#define GPIO_DDSR7_DDS14	(*(volatile uint_io8_t*)0xB71C03CE)  /*@bfbba@*/
#define GPIO_DDSR7_DDS15	(*(volatile uint_io8_t*)0xB71C03CF)  /*@bfbba@*/
#define GPIO_DDSR7_DDS16	(*(volatile uint_io8_t*)0xB71C03D0)  /*@bfbba@*/
#define GPIO_DDSR7_DDS17	(*(volatile uint_io8_t*)0xB71C03D1)  /*@bfbba@*/
#define GPIO_DDSR7_DDS18	(*(volatile uint_io8_t*)0xB71C03D2)  /*@bfbba@*/
#define GPIO_DDSR7_DDS19	(*(volatile uint_io8_t*)0xB71C03D3)  /*@bfbba@*/
#define GPIO_DDSR7_DDS20	(*(volatile uint_io8_t*)0xB71C03D4)  /*@bfbba@*/
#define GPIO_DDSR7_DDS21	(*(volatile uint_io8_t*)0xB71C03D5)  /*@bfbba@*/
#define GPIO_DDSR7_DDS22	(*(volatile uint_io8_t*)0xB71C03D6)  /*@bfbba@*/
#define GPIO_DDSR7_DDS23	(*(volatile uint_io8_t*)0xB71C03D7)  /*@bfbba@*/
#define GPIO_DDSR7_DDS24	(*(volatile uint_io8_t*)0xB71C03D8)  /*@bfbba@*/
#define GPIO_DDSR7_DDS25	(*(volatile uint_io8_t*)0xB71C03D9)  /*@bfbba@*/
#define GPIO_DDSR7_DDS26	(*(volatile uint_io8_t*)0xB71C03DA)  /*@bfbba@*/
#define GPIO_DDSR7_DDS27	(*(volatile uint_io8_t*)0xB71C03DB)  /*@bfbba@*/
#define GPIO_DDSR7_DDS28	(*(volatile uint_io8_t*)0xB71C03DC)  /*@bfbba@*/
#define GPIO_DDSR7_DDS29	(*(volatile uint_io8_t*)0xB71C03DD)  /*@bfbba@*/
#define GPIO_DDSR7_DDS30	(*(volatile uint_io8_t*)0xB71C03DE)  /*@bfbba@*/
#define GPIO_DDSR7_DDS31	(*(volatile uint_io8_t*)0xB71C03DF)  /*@bfbba@*/

#define GPIO_DDSR8	(GPIO.unDDSR8.u32Register)  /*@rg@*/
#define GPIO_DDSR8_DDS0	(*(volatile uint_io8_t*)0xB71C0440)  /*@bfbba@*/
#define GPIO_DDSR8_DDS1	(*(volatile uint_io8_t*)0xB71C0441)  /*@bfbba@*/
#define GPIO_DDSR8_DDS2	(*(volatile uint_io8_t*)0xB71C0442)  /*@bfbba@*/
#define GPIO_DDSR8_DDS3	(*(volatile uint_io8_t*)0xB71C0443)  /*@bfbba@*/
#define GPIO_DDSR8_DDS4	(*(volatile uint_io8_t*)0xB71C0444)  /*@bfbba@*/
#define GPIO_DDSR8_DDS5	(*(volatile uint_io8_t*)0xB71C0445)  /*@bfbba@*/
#define GPIO_DDSR8_DDS6	(*(volatile uint_io8_t*)0xB71C0446)  /*@bfbba@*/
#define GPIO_DDSR8_DDS7	(*(volatile uint_io8_t*)0xB71C0447)  /*@bfbba@*/
#define GPIO_DDSR8_DDS8	(*(volatile uint_io8_t*)0xB71C0448)  /*@bfbba@*/
#define GPIO_DDSR8_DDS9	(*(volatile uint_io8_t*)0xB71C0449)  /*@bfbba@*/
#define GPIO_DDSR8_DDS10	(*(volatile uint_io8_t*)0xB71C044A)  /*@bfbba@*/
#define GPIO_DDSR8_DDS11	(*(volatile uint_io8_t*)0xB71C044B)  /*@bfbba@*/
#define GPIO_DDSR8_DDS12	(*(volatile uint_io8_t*)0xB71C044C)  /*@bfbba@*/
#define GPIO_DDSR8_DDS13	(*(volatile uint_io8_t*)0xB71C044D)  /*@bfbba@*/
#define GPIO_DDSR8_DDS14	(*(volatile uint_io8_t*)0xB71C044E)  /*@bfbba@*/
#define GPIO_DDSR8_DDS15	(*(volatile uint_io8_t*)0xB71C044F)  /*@bfbba@*/
#define GPIO_DDSR8_DDS16	(*(volatile uint_io8_t*)0xB71C0450)  /*@bfbba@*/
#define GPIO_DDSR8_DDS17	(*(volatile uint_io8_t*)0xB71C0451)  /*@bfbba@*/
#define GPIO_DDSR8_DDS18	(*(volatile uint_io8_t*)0xB71C0452)  /*@bfbba@*/
#define GPIO_DDSR8_DDS19	(*(volatile uint_io8_t*)0xB71C0453)  /*@bfbba@*/
#define GPIO_DDSR8_DDS20	(*(volatile uint_io8_t*)0xB71C0454)  /*@bfbba@*/
#define GPIO_DDSR8_DDS21	(*(volatile uint_io8_t*)0xB71C0455)  /*@bfbba@*/
#define GPIO_DDSR8_DDS22	(*(volatile uint_io8_t*)0xB71C0456)  /*@bfbba@*/
#define GPIO_DDSR8_DDS23	(*(volatile uint_io8_t*)0xB71C0457)  /*@bfbba@*/
#define GPIO_DDSR8_DDS24	(*(volatile uint_io8_t*)0xB71C0458)  /*@bfbba@*/
#define GPIO_DDSR8_DDS25	(*(volatile uint_io8_t*)0xB71C0459)  /*@bfbba@*/
#define GPIO_DDSR8_DDS26	(*(volatile uint_io8_t*)0xB71C045A)  /*@bfbba@*/
#define GPIO_DDSR8_DDS27	(*(volatile uint_io8_t*)0xB71C045B)  /*@bfbba@*/
#define GPIO_DDSR8_DDS28	(*(volatile uint_io8_t*)0xB71C045C)  /*@bfbba@*/
#define GPIO_DDSR8_DDS29	(*(volatile uint_io8_t*)0xB71C045D)  /*@bfbba@*/
#define GPIO_DDSR8_DDS30	(*(volatile uint_io8_t*)0xB71C045E)  /*@bfbba@*/
#define GPIO_DDSR8_DDS31	(*(volatile uint_io8_t*)0xB71C045F)  /*@bfbba@*/

#define GPIO_DDSR9	(GPIO.unDDSR9.u32Register)  /*@rg@*/
#define GPIO_DDSR9_DDS0	(*(volatile uint_io8_t*)0xB71C04C0)  /*@bfbba@*/
#define GPIO_DDSR9_DDS1	(*(volatile uint_io8_t*)0xB71C04C1)  /*@bfbba@*/
#define GPIO_DDSR9_DDS2	(*(volatile uint_io8_t*)0xB71C04C2)  /*@bfbba@*/
#define GPIO_DDSR9_DDS3	(*(volatile uint_io8_t*)0xB71C04C3)  /*@bfbba@*/
#define GPIO_DDSR9_DDS4	(*(volatile uint_io8_t*)0xB71C04C4)  /*@bfbba@*/
#define GPIO_DDSR9_DDS5	(*(volatile uint_io8_t*)0xB71C04C5)  /*@bfbba@*/
#define GPIO_DDSR9_DDS6	(*(volatile uint_io8_t*)0xB71C04C6)  /*@bfbba@*/
#define GPIO_DDSR9_DDS7	(*(volatile uint_io8_t*)0xB71C04C7)  /*@bfbba@*/
#define GPIO_DDSR9_DDS8	(*(volatile uint_io8_t*)0xB71C04C8)  /*@bfbba@*/
#define GPIO_DDSR9_DDS9	(*(volatile uint_io8_t*)0xB71C04C9)  /*@bfbba@*/
#define GPIO_DDSR9_DDS10	(*(volatile uint_io8_t*)0xB71C04CA)  /*@bfbba@*/
#define GPIO_DDSR9_DDS11	(*(volatile uint_io8_t*)0xB71C04CB)  /*@bfbba@*/
#define GPIO_DDSR9_DDS12	(*(volatile uint_io8_t*)0xB71C04CC)  /*@bfbba@*/
#define GPIO_DDSR9_DDS13	(*(volatile uint_io8_t*)0xB71C04CD)  /*@bfbba@*/
#define GPIO_DDSR9_DDS14	(*(volatile uint_io8_t*)0xB71C04CE)  /*@bfbba@*/
#define GPIO_DDSR9_DDS15	(*(volatile uint_io8_t*)0xB71C04CF)  /*@bfbba@*/
#define GPIO_DDSR9_DDS16	(*(volatile uint_io8_t*)0xB71C04D0)  /*@bfbba@*/
#define GPIO_DDSR9_DDS17	(*(volatile uint_io8_t*)0xB71C04D1)  /*@bfbba@*/
#define GPIO_DDSR9_DDS18	(*(volatile uint_io8_t*)0xB71C04D2)  /*@bfbba@*/
#define GPIO_DDSR9_DDS19	(*(volatile uint_io8_t*)0xB71C04D3)  /*@bfbba@*/
#define GPIO_DDSR9_DDS20	(*(volatile uint_io8_t*)0xB71C04D4)  /*@bfbba@*/
#define GPIO_DDSR9_DDS21	(*(volatile uint_io8_t*)0xB71C04D5)  /*@bfbba@*/
#define GPIO_DDSR9_DDS22	(*(volatile uint_io8_t*)0xB71C04D6)  /*@bfbba@*/
#define GPIO_DDSR9_DDS23	(*(volatile uint_io8_t*)0xB71C04D7)  /*@bfbba@*/
#define GPIO_DDSR9_DDS24	(*(volatile uint_io8_t*)0xB71C04D8)  /*@bfbba@*/
#define GPIO_DDSR9_DDS25	(*(volatile uint_io8_t*)0xB71C04D9)  /*@bfbba@*/
#define GPIO_DDSR9_DDS26	(*(volatile uint_io8_t*)0xB71C04DA)  /*@bfbba@*/
#define GPIO_DDSR9_DDS27	(*(volatile uint_io8_t*)0xB71C04DB)  /*@bfbba@*/
#define GPIO_DDSR9_DDS28	(*(volatile uint_io8_t*)0xB71C04DC)  /*@bfbba@*/
#define GPIO_DDSR9_DDS29	(*(volatile uint_io8_t*)0xB71C04DD)  /*@bfbba@*/
#define GPIO_DDSR9_DDS30	(*(volatile uint_io8_t*)0xB71C04DE)  /*@bfbba@*/
#define GPIO_DDSR9_DDS31	(*(volatile uint_io8_t*)0xB71C04DF)  /*@bfbba@*/

#define GPIO_DDSR10	(GPIO.unDDSR10.u32Register)  /*@rg@*/
#define GPIO_DDSR10_DDS0	(*(volatile uint_io8_t*)0xB71C0540)  /*@bfbba@*/
#define GPIO_DDSR10_DDS1	(*(volatile uint_io8_t*)0xB71C0541)  /*@bfbba@*/
#define GPIO_DDSR10_DDS2	(*(volatile uint_io8_t*)0xB71C0542)  /*@bfbba@*/
#define GPIO_DDSR10_DDS3	(*(volatile uint_io8_t*)0xB71C0543)  /*@bfbba@*/
#define GPIO_DDSR10_DDS4	(*(volatile uint_io8_t*)0xB71C0544)  /*@bfbba@*/
#define GPIO_DDSR10_DDS5	(*(volatile uint_io8_t*)0xB71C0545)  /*@bfbba@*/
#define GPIO_DDSR10_DDS6	(*(volatile uint_io8_t*)0xB71C0546)  /*@bfbba@*/
#define GPIO_DDSR10_DDS7	(*(volatile uint_io8_t*)0xB71C0547)  /*@bfbba@*/
#define GPIO_DDSR10_DDS8	(*(volatile uint_io8_t*)0xB71C0548)  /*@bfbba@*/
#define GPIO_DDSR10_DDS9	(*(volatile uint_io8_t*)0xB71C0549)  /*@bfbba@*/
#define GPIO_DDSR10_DDS10	(*(volatile uint_io8_t*)0xB71C054A)  /*@bfbba@*/
#define GPIO_DDSR10_DDS11	(*(volatile uint_io8_t*)0xB71C054B)  /*@bfbba@*/
#define GPIO_DDSR10_DDS12	(*(volatile uint_io8_t*)0xB71C054C)  /*@bfbba@*/
#define GPIO_DDSR10_DDS13	(*(volatile uint_io8_t*)0xB71C054D)  /*@bfbba@*/
#define GPIO_DDSR10_DDS14	(*(volatile uint_io8_t*)0xB71C054E)  /*@bfbba@*/
#define GPIO_DDSR10_DDS15	(*(volatile uint_io8_t*)0xB71C054F)  /*@bfbba@*/
#define GPIO_DDSR10_DDS16	(*(volatile uint_io8_t*)0xB71C0550)  /*@bfbba@*/
#define GPIO_DDSR10_DDS17	(*(volatile uint_io8_t*)0xB71C0551)  /*@bfbba@*/
#define GPIO_DDSR10_DDS18	(*(volatile uint_io8_t*)0xB71C0552)  /*@bfbba@*/
#define GPIO_DDSR10_DDS19	(*(volatile uint_io8_t*)0xB71C0553)  /*@bfbba@*/
#define GPIO_DDSR10_DDS20	(*(volatile uint_io8_t*)0xB71C0554)  /*@bfbba@*/
#define GPIO_DDSR10_DDS21	(*(volatile uint_io8_t*)0xB71C0555)  /*@bfbba@*/
#define GPIO_DDSR10_DDS22	(*(volatile uint_io8_t*)0xB71C0556)  /*@bfbba@*/
#define GPIO_DDSR10_DDS23	(*(volatile uint_io8_t*)0xB71C0557)  /*@bfbba@*/
#define GPIO_DDSR10_DDS24	(*(volatile uint_io8_t*)0xB71C0558)  /*@bfbba@*/
#define GPIO_DDSR10_DDS25	(*(volatile uint_io8_t*)0xB71C0559)  /*@bfbba@*/
#define GPIO_DDSR10_DDS26	(*(volatile uint_io8_t*)0xB71C055A)  /*@bfbba@*/
#define GPIO_DDSR10_DDS27	(*(volatile uint_io8_t*)0xB71C055B)  /*@bfbba@*/
#define GPIO_DDSR10_DDS28	(*(volatile uint_io8_t*)0xB71C055C)  /*@bfbba@*/
#define GPIO_DDSR10_DDS29	(*(volatile uint_io8_t*)0xB71C055D)  /*@bfbba@*/
#define GPIO_DDSR10_DDS30	(*(volatile uint_io8_t*)0xB71C055E)  /*@bfbba@*/
#define GPIO_DDSR10_DDS31	(*(volatile uint_io8_t*)0xB71C055F)  /*@bfbba@*/

#define GPIO_DDSR11	(GPIO.unDDSR11.u32Register)  /*@rg@*/
#define GPIO_DDSR11_DDS0	(*(volatile uint_io8_t*)0xB71C05C0)  /*@bfbba@*/
#define GPIO_DDSR11_DDS1	(*(volatile uint_io8_t*)0xB71C05C1)  /*@bfbba@*/
#define GPIO_DDSR11_DDS2	(*(volatile uint_io8_t*)0xB71C05C2)  /*@bfbba@*/
#define GPIO_DDSR11_DDS3	(*(volatile uint_io8_t*)0xB71C05C3)  /*@bfbba@*/
#define GPIO_DDSR11_DDS4	(*(volatile uint_io8_t*)0xB71C05C4)  /*@bfbba@*/
#define GPIO_DDSR11_DDS5	(*(volatile uint_io8_t*)0xB71C05C5)  /*@bfbba@*/
#define GPIO_DDSR11_DDS6	(*(volatile uint_io8_t*)0xB71C05C6)  /*@bfbba@*/
#define GPIO_DDSR11_DDS7	(*(volatile uint_io8_t*)0xB71C05C7)  /*@bfbba@*/
#define GPIO_DDSR11_DDS8	(*(volatile uint_io8_t*)0xB71C05C8)  /*@bfbba@*/
#define GPIO_DDSR11_DDS9	(*(volatile uint_io8_t*)0xB71C05C9)  /*@bfbba@*/
#define GPIO_DDSR11_DDS10	(*(volatile uint_io8_t*)0xB71C05CA)  /*@bfbba@*/
#define GPIO_DDSR11_DDS11	(*(volatile uint_io8_t*)0xB71C05CB)  /*@bfbba@*/
#define GPIO_DDSR11_DDS12	(*(volatile uint_io8_t*)0xB71C05CC)  /*@bfbba@*/
#define GPIO_DDSR11_DDS13	(*(volatile uint_io8_t*)0xB71C05CD)  /*@bfbba@*/
#define GPIO_DDSR11_DDS14	(*(volatile uint_io8_t*)0xB71C05CE)  /*@bfbba@*/
#define GPIO_DDSR11_DDS15	(*(volatile uint_io8_t*)0xB71C05CF)  /*@bfbba@*/
#define GPIO_DDSR11_DDS16	(*(volatile uint_io8_t*)0xB71C05D0)  /*@bfbba@*/
#define GPIO_DDSR11_DDS17	(*(volatile uint_io8_t*)0xB71C05D1)  /*@bfbba@*/
#define GPIO_DDSR11_DDS18	(*(volatile uint_io8_t*)0xB71C05D2)  /*@bfbba@*/
#define GPIO_DDSR11_DDS19	(*(volatile uint_io8_t*)0xB71C05D3)  /*@bfbba@*/
#define GPIO_DDSR11_DDS20	(*(volatile uint_io8_t*)0xB71C05D4)  /*@bfbba@*/
#define GPIO_DDSR11_DDS21	(*(volatile uint_io8_t*)0xB71C05D5)  /*@bfbba@*/
#define GPIO_DDSR11_DDS22	(*(volatile uint_io8_t*)0xB71C05D6)  /*@bfbba@*/
#define GPIO_DDSR11_DDS23	(*(volatile uint_io8_t*)0xB71C05D7)  /*@bfbba@*/
#define GPIO_DDSR11_DDS24	(*(volatile uint_io8_t*)0xB71C05D8)  /*@bfbba@*/
#define GPIO_DDSR11_DDS25	(*(volatile uint_io8_t*)0xB71C05D9)  /*@bfbba@*/
#define GPIO_DDSR11_DDS26	(*(volatile uint_io8_t*)0xB71C05DA)  /*@bfbba@*/
#define GPIO_DDSR11_DDS27	(*(volatile uint_io8_t*)0xB71C05DB)  /*@bfbba@*/
#define GPIO_DDSR11_DDS28	(*(volatile uint_io8_t*)0xB71C05DC)  /*@bfbba@*/
#define GPIO_DDSR11_DDS29	(*(volatile uint_io8_t*)0xB71C05DD)  /*@bfbba@*/
#define GPIO_DDSR11_DDS30	(*(volatile uint_io8_t*)0xB71C05DE)  /*@bfbba@*/
#define GPIO_DDSR11_DDS31	(*(volatile uint_io8_t*)0xB71C05DF)  /*@bfbba@*/

#define GPIO_DDSR12	(GPIO.unDDSR12.u32Register)  /*@rg@*/
#define GPIO_DDSR12_DDS0	(*(volatile uint_io8_t*)0xB71C0640)  /*@bfbba@*/
#define GPIO_DDSR12_DDS1	(*(volatile uint_io8_t*)0xB71C0641)  /*@bfbba@*/
#define GPIO_DDSR12_DDS2	(*(volatile uint_io8_t*)0xB71C0642)  /*@bfbba@*/
#define GPIO_DDSR12_DDS3	(*(volatile uint_io8_t*)0xB71C0643)  /*@bfbba@*/
#define GPIO_DDSR12_DDS4	(*(volatile uint_io8_t*)0xB71C0644)  /*@bfbba@*/
#define GPIO_DDSR12_DDS5	(*(volatile uint_io8_t*)0xB71C0645)  /*@bfbba@*/
#define GPIO_DDSR12_DDS6	(*(volatile uint_io8_t*)0xB71C0646)  /*@bfbba@*/
#define GPIO_DDSR12_DDS7	(*(volatile uint_io8_t*)0xB71C0647)  /*@bfbba@*/
#define GPIO_DDSR12_DDS8	(*(volatile uint_io8_t*)0xB71C0648)  /*@bfbba@*/
#define GPIO_DDSR12_DDS9	(*(volatile uint_io8_t*)0xB71C0649)  /*@bfbba@*/
#define GPIO_DDSR12_DDS10	(*(volatile uint_io8_t*)0xB71C064A)  /*@bfbba@*/
#define GPIO_DDSR12_DDS11	(*(volatile uint_io8_t*)0xB71C064B)  /*@bfbba@*/
#define GPIO_DDSR12_DDS12	(*(volatile uint_io8_t*)0xB71C064C)  /*@bfbba@*/
#define GPIO_DDSR12_DDS13	(*(volatile uint_io8_t*)0xB71C064D)  /*@bfbba@*/
#define GPIO_DDSR12_DDS14	(*(volatile uint_io8_t*)0xB71C064E)  /*@bfbba@*/
#define GPIO_DDSR12_DDS15	(*(volatile uint_io8_t*)0xB71C064F)  /*@bfbba@*/
#define GPIO_DDSR12_DDS16	(*(volatile uint_io8_t*)0xB71C0650)  /*@bfbba@*/
#define GPIO_DDSR12_DDS17	(*(volatile uint_io8_t*)0xB71C0651)  /*@bfbba@*/
#define GPIO_DDSR12_DDS18	(*(volatile uint_io8_t*)0xB71C0652)  /*@bfbba@*/
#define GPIO_DDSR12_DDS19	(*(volatile uint_io8_t*)0xB71C0653)  /*@bfbba@*/
#define GPIO_DDSR12_DDS20	(*(volatile uint_io8_t*)0xB71C0654)  /*@bfbba@*/
#define GPIO_DDSR12_DDS21	(*(volatile uint_io8_t*)0xB71C0655)  /*@bfbba@*/
#define GPIO_DDSR12_DDS22	(*(volatile uint_io8_t*)0xB71C0656)  /*@bfbba@*/
#define GPIO_DDSR12_DDS23	(*(volatile uint_io8_t*)0xB71C0657)  /*@bfbba@*/
#define GPIO_DDSR12_DDS24	(*(volatile uint_io8_t*)0xB71C0658)  /*@bfbba@*/
#define GPIO_DDSR12_DDS25	(*(volatile uint_io8_t*)0xB71C0659)  /*@bfbba@*/
#define GPIO_DDSR12_DDS26	(*(volatile uint_io8_t*)0xB71C065A)  /*@bfbba@*/
#define GPIO_DDSR12_DDS27	(*(volatile uint_io8_t*)0xB71C065B)  /*@bfbba@*/
#define GPIO_DDSR12_DDS28	(*(volatile uint_io8_t*)0xB71C065C)  /*@bfbba@*/
#define GPIO_DDSR12_DDS29	(*(volatile uint_io8_t*)0xB71C065D)  /*@bfbba@*/
#define GPIO_DDSR12_DDS30	(*(volatile uint_io8_t*)0xB71C065E)  /*@bfbba@*/
#define GPIO_DDSR12_DDS31	(*(volatile uint_io8_t*)0xB71C065F)  /*@bfbba@*/

#define GPIO_DDSR13	(GPIO.unDDSR13.u32Register)  /*@rg@*/
#define GPIO_DDSR13_DDS0	(*(volatile uint_io8_t*)0xB71C06C0)  /*@bfbba@*/
#define GPIO_DDSR13_DDS1	(*(volatile uint_io8_t*)0xB71C06C1)  /*@bfbba@*/
#define GPIO_DDSR13_DDS2	(*(volatile uint_io8_t*)0xB71C06C2)  /*@bfbba@*/
#define GPIO_DDSR13_DDS3	(*(volatile uint_io8_t*)0xB71C06C3)  /*@bfbba@*/
#define GPIO_DDSR13_DDS4	(*(volatile uint_io8_t*)0xB71C06C4)  /*@bfbba@*/
#define GPIO_DDSR13_DDS5	(*(volatile uint_io8_t*)0xB71C06C5)  /*@bfbba@*/
#define GPIO_DDSR13_DDS6	(*(volatile uint_io8_t*)0xB71C06C6)  /*@bfbba@*/
#define GPIO_DDSR13_DDS7	(*(volatile uint_io8_t*)0xB71C06C7)  /*@bfbba@*/
#define GPIO_DDSR13_DDS8	(*(volatile uint_io8_t*)0xB71C06C8)  /*@bfbba@*/
#define GPIO_DDSR13_DDS9	(*(volatile uint_io8_t*)0xB71C06C9)  /*@bfbba@*/
#define GPIO_DDSR13_DDS10	(*(volatile uint_io8_t*)0xB71C06CA)  /*@bfbba@*/
#define GPIO_DDSR13_DDS11	(*(volatile uint_io8_t*)0xB71C06CB)  /*@bfbba@*/
#define GPIO_DDSR13_DDS12	(*(volatile uint_io8_t*)0xB71C06CC)  /*@bfbba@*/
#define GPIO_DDSR13_DDS13	(*(volatile uint_io8_t*)0xB71C06CD)  /*@bfbba@*/
#define GPIO_DDSR13_DDS14	(*(volatile uint_io8_t*)0xB71C06CE)  /*@bfbba@*/
#define GPIO_DDSR13_DDS15	(*(volatile uint_io8_t*)0xB71C06CF)  /*@bfbba@*/
#define GPIO_DDSR13_DDS16	(*(volatile uint_io8_t*)0xB71C06D0)  /*@bfbba@*/
#define GPIO_DDSR13_DDS17	(*(volatile uint_io8_t*)0xB71C06D1)  /*@bfbba@*/
#define GPIO_DDSR13_DDS18	(*(volatile uint_io8_t*)0xB71C06D2)  /*@bfbba@*/
#define GPIO_DDSR13_DDS19	(*(volatile uint_io8_t*)0xB71C06D3)  /*@bfbba@*/
#define GPIO_DDSR13_DDS20	(*(volatile uint_io8_t*)0xB71C06D4)  /*@bfbba@*/
#define GPIO_DDSR13_DDS21	(*(volatile uint_io8_t*)0xB71C06D5)  /*@bfbba@*/
#define GPIO_DDSR13_DDS22	(*(volatile uint_io8_t*)0xB71C06D6)  /*@bfbba@*/
#define GPIO_DDSR13_DDS23	(*(volatile uint_io8_t*)0xB71C06D7)  /*@bfbba@*/
#define GPIO_DDSR13_DDS24	(*(volatile uint_io8_t*)0xB71C06D8)  /*@bfbba@*/
#define GPIO_DDSR13_DDS25	(*(volatile uint_io8_t*)0xB71C06D9)  /*@bfbba@*/
#define GPIO_DDSR13_DDS26	(*(volatile uint_io8_t*)0xB71C06DA)  /*@bfbba@*/
#define GPIO_DDSR13_DDS27	(*(volatile uint_io8_t*)0xB71C06DB)  /*@bfbba@*/
#define GPIO_DDSR13_DDS28	(*(volatile uint_io8_t*)0xB71C06DC)  /*@bfbba@*/
#define GPIO_DDSR13_DDS29	(*(volatile uint_io8_t*)0xB71C06DD)  /*@bfbba@*/
#define GPIO_DDSR13_DDS30	(*(volatile uint_io8_t*)0xB71C06DE)  /*@bfbba@*/
#define GPIO_DDSR13_DDS31	(*(volatile uint_io8_t*)0xB71C06DF)  /*@bfbba@*/

#define GPIO_DDSR14	(GPIO.unDDSR14.u32Register)  /*@rg@*/
#define GPIO_DDSR14_DDS0	(*(volatile uint_io8_t*)0xB71C0740)  /*@bfbba@*/
#define GPIO_DDSR14_DDS1	(*(volatile uint_io8_t*)0xB71C0741)  /*@bfbba@*/
#define GPIO_DDSR14_DDS2	(*(volatile uint_io8_t*)0xB71C0742)  /*@bfbba@*/
#define GPIO_DDSR14_DDS3	(*(volatile uint_io8_t*)0xB71C0743)  /*@bfbba@*/
#define GPIO_DDSR14_DDS4	(*(volatile uint_io8_t*)0xB71C0744)  /*@bfbba@*/
#define GPIO_DDSR14_DDS5	(*(volatile uint_io8_t*)0xB71C0745)  /*@bfbba@*/
#define GPIO_DDSR14_DDS6	(*(volatile uint_io8_t*)0xB71C0746)  /*@bfbba@*/
#define GPIO_DDSR14_DDS7	(*(volatile uint_io8_t*)0xB71C0747)  /*@bfbba@*/
#define GPIO_DDSR14_DDS8	(*(volatile uint_io8_t*)0xB71C0748)  /*@bfbba@*/
#define GPIO_DDSR14_DDS9	(*(volatile uint_io8_t*)0xB71C0749)  /*@bfbba@*/
#define GPIO_DDSR14_DDS10	(*(volatile uint_io8_t*)0xB71C074A)  /*@bfbba@*/
#define GPIO_DDSR14_DDS11	(*(volatile uint_io8_t*)0xB71C074B)  /*@bfbba@*/
#define GPIO_DDSR14_DDS12	(*(volatile uint_io8_t*)0xB71C074C)  /*@bfbba@*/
#define GPIO_DDSR14_DDS13	(*(volatile uint_io8_t*)0xB71C074D)  /*@bfbba@*/
#define GPIO_DDSR14_DDS14	(*(volatile uint_io8_t*)0xB71C074E)  /*@bfbba@*/
#define GPIO_DDSR14_DDS15	(*(volatile uint_io8_t*)0xB71C074F)  /*@bfbba@*/
#define GPIO_DDSR14_DDS16	(*(volatile uint_io8_t*)0xB71C0750)  /*@bfbba@*/
#define GPIO_DDSR14_DDS17	(*(volatile uint_io8_t*)0xB71C0751)  /*@bfbba@*/
#define GPIO_DDSR14_DDS18	(*(volatile uint_io8_t*)0xB71C0752)  /*@bfbba@*/
#define GPIO_DDSR14_DDS19	(*(volatile uint_io8_t*)0xB71C0753)  /*@bfbba@*/
#define GPIO_DDSR14_DDS20	(*(volatile uint_io8_t*)0xB71C0754)  /*@bfbba@*/
#define GPIO_DDSR14_DDS21	(*(volatile uint_io8_t*)0xB71C0755)  /*@bfbba@*/
#define GPIO_DDSR14_DDS22	(*(volatile uint_io8_t*)0xB71C0756)  /*@bfbba@*/
#define GPIO_DDSR14_DDS23	(*(volatile uint_io8_t*)0xB71C0757)  /*@bfbba@*/
#define GPIO_DDSR14_DDS24	(*(volatile uint_io8_t*)0xB71C0758)  /*@bfbba@*/
#define GPIO_DDSR14_DDS25	(*(volatile uint_io8_t*)0xB71C0759)  /*@bfbba@*/
#define GPIO_DDSR14_DDS26	(*(volatile uint_io8_t*)0xB71C075A)  /*@bfbba@*/
#define GPIO_DDSR14_DDS27	(*(volatile uint_io8_t*)0xB71C075B)  /*@bfbba@*/
#define GPIO_DDSR14_DDS28	(*(volatile uint_io8_t*)0xB71C075C)  /*@bfbba@*/
#define GPIO_DDSR14_DDS29	(*(volatile uint_io8_t*)0xB71C075D)  /*@bfbba@*/
#define GPIO_DDSR14_DDS30	(*(volatile uint_io8_t*)0xB71C075E)  /*@bfbba@*/
#define GPIO_DDSR14_DDS31	(*(volatile uint_io8_t*)0xB71C075F)  /*@bfbba@*/

#define GPIO_DDSR15	(GPIO.unDDSR15.u32Register)  /*@rg@*/
#define GPIO_DDSR15_DDS0	(*(volatile uint_io8_t*)0xB71C07C0)  /*@bfbba@*/
#define GPIO_DDSR15_DDS1	(*(volatile uint_io8_t*)0xB71C07C1)  /*@bfbba@*/
#define GPIO_DDSR15_DDS2	(*(volatile uint_io8_t*)0xB71C07C2)  /*@bfbba@*/
#define GPIO_DDSR15_DDS3	(*(volatile uint_io8_t*)0xB71C07C3)  /*@bfbba@*/
#define GPIO_DDSR15_DDS4	(*(volatile uint_io8_t*)0xB71C07C4)  /*@bfbba@*/
#define GPIO_DDSR15_DDS5	(*(volatile uint_io8_t*)0xB71C07C5)  /*@bfbba@*/
#define GPIO_DDSR15_DDS6	(*(volatile uint_io8_t*)0xB71C07C6)  /*@bfbba@*/
#define GPIO_DDSR15_DDS7	(*(volatile uint_io8_t*)0xB71C07C7)  /*@bfbba@*/
#define GPIO_DDSR15_DDS8	(*(volatile uint_io8_t*)0xB71C07C8)  /*@bfbba@*/
#define GPIO_DDSR15_DDS9	(*(volatile uint_io8_t*)0xB71C07C9)  /*@bfbba@*/
#define GPIO_DDSR15_DDS10	(*(volatile uint_io8_t*)0xB71C07CA)  /*@bfbba@*/
#define GPIO_DDSR15_DDS11	(*(volatile uint_io8_t*)0xB71C07CB)  /*@bfbba@*/
#define GPIO_DDSR15_DDS12	(*(volatile uint_io8_t*)0xB71C07CC)  /*@bfbba@*/
#define GPIO_DDSR15_DDS13	(*(volatile uint_io8_t*)0xB71C07CD)  /*@bfbba@*/
#define GPIO_DDSR15_DDS14	(*(volatile uint_io8_t*)0xB71C07CE)  /*@bfbba@*/
#define GPIO_DDSR15_DDS15	(*(volatile uint_io8_t*)0xB71C07CF)  /*@bfbba@*/
#define GPIO_DDSR15_DDS16	(*(volatile uint_io8_t*)0xB71C07D0)  /*@bfbba@*/
#define GPIO_DDSR15_DDS17	(*(volatile uint_io8_t*)0xB71C07D1)  /*@bfbba@*/
#define GPIO_DDSR15_DDS18	(*(volatile uint_io8_t*)0xB71C07D2)  /*@bfbba@*/
#define GPIO_DDSR15_DDS19	(*(volatile uint_io8_t*)0xB71C07D3)  /*@bfbba@*/
#define GPIO_DDSR15_DDS20	(*(volatile uint_io8_t*)0xB71C07D4)  /*@bfbba@*/
#define GPIO_DDSR15_DDS21	(*(volatile uint_io8_t*)0xB71C07D5)  /*@bfbba@*/
#define GPIO_DDSR15_DDS22	(*(volatile uint_io8_t*)0xB71C07D6)  /*@bfbba@*/
#define GPIO_DDSR15_DDS23	(*(volatile uint_io8_t*)0xB71C07D7)  /*@bfbba@*/
#define GPIO_DDSR15_DDS24	(*(volatile uint_io8_t*)0xB71C07D8)  /*@bfbba@*/
#define GPIO_DDSR15_DDS25	(*(volatile uint_io8_t*)0xB71C07D9)  /*@bfbba@*/
#define GPIO_DDSR15_DDS26	(*(volatile uint_io8_t*)0xB71C07DA)  /*@bfbba@*/
#define GPIO_DDSR15_DDS27	(*(volatile uint_io8_t*)0xB71C07DB)  /*@bfbba@*/
#define GPIO_DDSR15_DDS28	(*(volatile uint_io8_t*)0xB71C07DC)  /*@bfbba@*/
#define GPIO_DDSR15_DDS29	(*(volatile uint_io8_t*)0xB71C07DD)  /*@bfbba@*/
#define GPIO_DDSR15_DDS30	(*(volatile uint_io8_t*)0xB71C07DE)  /*@bfbba@*/
#define GPIO_DDSR15_DDS31	(*(volatile uint_io8_t*)0xB71C07DF)  /*@bfbba@*/

typedef struct stc_gpio_ddsrn_field{
    uint_io32_t		u1DDS0:1;
    uint_io32_t		u1DDS1:1;
    uint_io32_t		u1DDS2:1;
    uint_io32_t		u1DDS3:1;
    uint_io32_t		u1DDS4:1;
    uint_io32_t		u1DDS5:1;
    uint_io32_t		u1DDS6:1;
    uint_io32_t		u1DDS7:1;
    uint_io32_t		u1DDS8:1;
    uint_io32_t		u1DDS9:1;
    uint_io32_t		u1DDS10:1;
    uint_io32_t		u1DDS11:1;
    uint_io32_t		u1DDS12:1;
    uint_io32_t		u1DDS13:1;
    uint_io32_t		u1DDS14:1;
    uint_io32_t		u1DDS15:1;
    uint_io32_t		u1DDS16:1;
    uint_io32_t		u1DDS17:1;
    uint_io32_t		u1DDS18:1;
    uint_io32_t		u1DDS19:1;
    uint_io32_t		u1DDS20:1;
    uint_io32_t		u1DDS21:1;
    uint_io32_t		u1DDS22:1;
    uint_io32_t		u1DDS23:1;
    uint_io32_t		u1DDS24:1;
    uint_io32_t		u1DDS25:1;
    uint_io32_t		u1DDS26:1;
    uint_io32_t		u1DDS27:1;
    uint_io32_t		u1DDS28:1;
    uint_io32_t		u1DDS29:1;
    uint_io32_t		u1DDS30:1;
    uint_io32_t		u1DDS31:1;
}stc_gpio_ddsrn_field_t;

typedef union un_gpio_ddsrn{
    uint_io32_t		u32Register;
    stc_gpio_ddsrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_ddsrn_t;

/* DDCR[0-15] */
#define GPIO_DDCR0	(GPIO.unDDCR0.u32Register)  /*@rg@*/
#define GPIO_DDCR0_DDC0	(*(volatile uint_io8_t*)0xB71C0060)  /*@bfbba@*/
#define GPIO_DDCR0_DDC1	(*(volatile uint_io8_t*)0xB71C0061)  /*@bfbba@*/
#define GPIO_DDCR0_DDC2	(*(volatile uint_io8_t*)0xB71C0062)  /*@bfbba@*/
#define GPIO_DDCR0_DDC3	(*(volatile uint_io8_t*)0xB71C0063)  /*@bfbba@*/
#define GPIO_DDCR0_DDC4	(*(volatile uint_io8_t*)0xB71C0064)  /*@bfbba@*/
#define GPIO_DDCR0_DDC5	(*(volatile uint_io8_t*)0xB71C0065)  /*@bfbba@*/
#define GPIO_DDCR0_DDC6	(*(volatile uint_io8_t*)0xB71C0066)  /*@bfbba@*/
#define GPIO_DDCR0_DDC7	(*(volatile uint_io8_t*)0xB71C0067)  /*@bfbba@*/
#define GPIO_DDCR0_DDC8	(*(volatile uint_io8_t*)0xB71C0068)  /*@bfbba@*/
#define GPIO_DDCR0_DDC9	(*(volatile uint_io8_t*)0xB71C0069)  /*@bfbba@*/
#define GPIO_DDCR0_DDC10	(*(volatile uint_io8_t*)0xB71C006A)  /*@bfbba@*/
#define GPIO_DDCR0_DDC11	(*(volatile uint_io8_t*)0xB71C006B)  /*@bfbba@*/
#define GPIO_DDCR0_DDC12	(*(volatile uint_io8_t*)0xB71C006C)  /*@bfbba@*/
#define GPIO_DDCR0_DDC13	(*(volatile uint_io8_t*)0xB71C006D)  /*@bfbba@*/
#define GPIO_DDCR0_DDC14	(*(volatile uint_io8_t*)0xB71C006E)  /*@bfbba@*/
#define GPIO_DDCR0_DDC15	(*(volatile uint_io8_t*)0xB71C006F)  /*@bfbba@*/
#define GPIO_DDCR0_DDC16	(*(volatile uint_io8_t*)0xB71C0070)  /*@bfbba@*/
#define GPIO_DDCR0_DDC17	(*(volatile uint_io8_t*)0xB71C0071)  /*@bfbba@*/
#define GPIO_DDCR0_DDC18	(*(volatile uint_io8_t*)0xB71C0072)  /*@bfbba@*/
#define GPIO_DDCR0_DDC19	(*(volatile uint_io8_t*)0xB71C0073)  /*@bfbba@*/
#define GPIO_DDCR0_DDC20	(*(volatile uint_io8_t*)0xB71C0074)  /*@bfbba@*/
#define GPIO_DDCR0_DDC21	(*(volatile uint_io8_t*)0xB71C0075)  /*@bfbba@*/
#define GPIO_DDCR0_DDC22	(*(volatile uint_io8_t*)0xB71C0076)  /*@bfbba@*/
#define GPIO_DDCR0_DDC23	(*(volatile uint_io8_t*)0xB71C0077)  /*@bfbba@*/
#define GPIO_DDCR0_DDC24	(*(volatile uint_io8_t*)0xB71C0078)  /*@bfbba@*/
#define GPIO_DDCR0_DDC25	(*(volatile uint_io8_t*)0xB71C0079)  /*@bfbba@*/
#define GPIO_DDCR0_DDC26	(*(volatile uint_io8_t*)0xB71C007A)  /*@bfbba@*/
#define GPIO_DDCR0_DDC27	(*(volatile uint_io8_t*)0xB71C007B)  /*@bfbba@*/
#define GPIO_DDCR0_DDC28	(*(volatile uint_io8_t*)0xB71C007C)  /*@bfbba@*/
#define GPIO_DDCR0_DDC29	(*(volatile uint_io8_t*)0xB71C007D)  /*@bfbba@*/
#define GPIO_DDCR0_DDC30	(*(volatile uint_io8_t*)0xB71C007E)  /*@bfbba@*/
#define GPIO_DDCR0_DDC31	(*(volatile uint_io8_t*)0xB71C007F)  /*@bfbba@*/

#define GPIO_DDCR1	(GPIO.unDDCR1.u32Register)  /*@rg@*/
#define GPIO_DDCR1_DDC0	(*(volatile uint_io8_t*)0xB71C00E0)  /*@bfbba@*/
#define GPIO_DDCR1_DDC1	(*(volatile uint_io8_t*)0xB71C00E1)  /*@bfbba@*/
#define GPIO_DDCR1_DDC2	(*(volatile uint_io8_t*)0xB71C00E2)  /*@bfbba@*/
#define GPIO_DDCR1_DDC3	(*(volatile uint_io8_t*)0xB71C00E3)  /*@bfbba@*/
#define GPIO_DDCR1_DDC4	(*(volatile uint_io8_t*)0xB71C00E4)  /*@bfbba@*/
#define GPIO_DDCR1_DDC5	(*(volatile uint_io8_t*)0xB71C00E5)  /*@bfbba@*/
#define GPIO_DDCR1_DDC6	(*(volatile uint_io8_t*)0xB71C00E6)  /*@bfbba@*/
#define GPIO_DDCR1_DDC7	(*(volatile uint_io8_t*)0xB71C00E7)  /*@bfbba@*/
#define GPIO_DDCR1_DDC8	(*(volatile uint_io8_t*)0xB71C00E8)  /*@bfbba@*/
#define GPIO_DDCR1_DDC9	(*(volatile uint_io8_t*)0xB71C00E9)  /*@bfbba@*/
#define GPIO_DDCR1_DDC10	(*(volatile uint_io8_t*)0xB71C00EA)  /*@bfbba@*/
#define GPIO_DDCR1_DDC11	(*(volatile uint_io8_t*)0xB71C00EB)  /*@bfbba@*/
#define GPIO_DDCR1_DDC12	(*(volatile uint_io8_t*)0xB71C00EC)  /*@bfbba@*/
#define GPIO_DDCR1_DDC13	(*(volatile uint_io8_t*)0xB71C00ED)  /*@bfbba@*/
#define GPIO_DDCR1_DDC14	(*(volatile uint_io8_t*)0xB71C00EE)  /*@bfbba@*/
#define GPIO_DDCR1_DDC15	(*(volatile uint_io8_t*)0xB71C00EF)  /*@bfbba@*/
#define GPIO_DDCR1_DDC16	(*(volatile uint_io8_t*)0xB71C00F0)  /*@bfbba@*/
#define GPIO_DDCR1_DDC17	(*(volatile uint_io8_t*)0xB71C00F1)  /*@bfbba@*/
#define GPIO_DDCR1_DDC18	(*(volatile uint_io8_t*)0xB71C00F2)  /*@bfbba@*/
#define GPIO_DDCR1_DDC19	(*(volatile uint_io8_t*)0xB71C00F3)  /*@bfbba@*/
#define GPIO_DDCR1_DDC20	(*(volatile uint_io8_t*)0xB71C00F4)  /*@bfbba@*/
#define GPIO_DDCR1_DDC21	(*(volatile uint_io8_t*)0xB71C00F5)  /*@bfbba@*/
#define GPIO_DDCR1_DDC22	(*(volatile uint_io8_t*)0xB71C00F6)  /*@bfbba@*/
#define GPIO_DDCR1_DDC23	(*(volatile uint_io8_t*)0xB71C00F7)  /*@bfbba@*/
#define GPIO_DDCR1_DDC24	(*(volatile uint_io8_t*)0xB71C00F8)  /*@bfbba@*/
#define GPIO_DDCR1_DDC25	(*(volatile uint_io8_t*)0xB71C00F9)  /*@bfbba@*/
#define GPIO_DDCR1_DDC26	(*(volatile uint_io8_t*)0xB71C00FA)  /*@bfbba@*/
#define GPIO_DDCR1_DDC27	(*(volatile uint_io8_t*)0xB71C00FB)  /*@bfbba@*/
#define GPIO_DDCR1_DDC28	(*(volatile uint_io8_t*)0xB71C00FC)  /*@bfbba@*/
#define GPIO_DDCR1_DDC29	(*(volatile uint_io8_t*)0xB71C00FD)  /*@bfbba@*/
#define GPIO_DDCR1_DDC30	(*(volatile uint_io8_t*)0xB71C00FE)  /*@bfbba@*/
#define GPIO_DDCR1_DDC31	(*(volatile uint_io8_t*)0xB71C00FF)  /*@bfbba@*/

#define GPIO_DDCR2	(GPIO.unDDCR2.u32Register)  /*@rg@*/
#define GPIO_DDCR2_DDC0	(*(volatile uint_io8_t*)0xB71C0160)  /*@bfbba@*/
#define GPIO_DDCR2_DDC1	(*(volatile uint_io8_t*)0xB71C0161)  /*@bfbba@*/
#define GPIO_DDCR2_DDC2	(*(volatile uint_io8_t*)0xB71C0162)  /*@bfbba@*/
#define GPIO_DDCR2_DDC3	(*(volatile uint_io8_t*)0xB71C0163)  /*@bfbba@*/
#define GPIO_DDCR2_DDC4	(*(volatile uint_io8_t*)0xB71C0164)  /*@bfbba@*/
#define GPIO_DDCR2_DDC5	(*(volatile uint_io8_t*)0xB71C0165)  /*@bfbba@*/
#define GPIO_DDCR2_DDC6	(*(volatile uint_io8_t*)0xB71C0166)  /*@bfbba@*/
#define GPIO_DDCR2_DDC7	(*(volatile uint_io8_t*)0xB71C0167)  /*@bfbba@*/
#define GPIO_DDCR2_DDC8	(*(volatile uint_io8_t*)0xB71C0168)  /*@bfbba@*/
#define GPIO_DDCR2_DDC9	(*(volatile uint_io8_t*)0xB71C0169)  /*@bfbba@*/
#define GPIO_DDCR2_DDC10	(*(volatile uint_io8_t*)0xB71C016A)  /*@bfbba@*/
#define GPIO_DDCR2_DDC11	(*(volatile uint_io8_t*)0xB71C016B)  /*@bfbba@*/
#define GPIO_DDCR2_DDC12	(*(volatile uint_io8_t*)0xB71C016C)  /*@bfbba@*/
#define GPIO_DDCR2_DDC13	(*(volatile uint_io8_t*)0xB71C016D)  /*@bfbba@*/
#define GPIO_DDCR2_DDC14	(*(volatile uint_io8_t*)0xB71C016E)  /*@bfbba@*/
#define GPIO_DDCR2_DDC15	(*(volatile uint_io8_t*)0xB71C016F)  /*@bfbba@*/
#define GPIO_DDCR2_DDC16	(*(volatile uint_io8_t*)0xB71C0170)  /*@bfbba@*/
#define GPIO_DDCR2_DDC17	(*(volatile uint_io8_t*)0xB71C0171)  /*@bfbba@*/
#define GPIO_DDCR2_DDC18	(*(volatile uint_io8_t*)0xB71C0172)  /*@bfbba@*/
#define GPIO_DDCR2_DDC19	(*(volatile uint_io8_t*)0xB71C0173)  /*@bfbba@*/
#define GPIO_DDCR2_DDC20	(*(volatile uint_io8_t*)0xB71C0174)  /*@bfbba@*/
#define GPIO_DDCR2_DDC21	(*(volatile uint_io8_t*)0xB71C0175)  /*@bfbba@*/
#define GPIO_DDCR2_DDC22	(*(volatile uint_io8_t*)0xB71C0176)  /*@bfbba@*/
#define GPIO_DDCR2_DDC23	(*(volatile uint_io8_t*)0xB71C0177)  /*@bfbba@*/
#define GPIO_DDCR2_DDC24	(*(volatile uint_io8_t*)0xB71C0178)  /*@bfbba@*/
#define GPIO_DDCR2_DDC25	(*(volatile uint_io8_t*)0xB71C0179)  /*@bfbba@*/
#define GPIO_DDCR2_DDC26	(*(volatile uint_io8_t*)0xB71C017A)  /*@bfbba@*/
#define GPIO_DDCR2_DDC27	(*(volatile uint_io8_t*)0xB71C017B)  /*@bfbba@*/
#define GPIO_DDCR2_DDC28	(*(volatile uint_io8_t*)0xB71C017C)  /*@bfbba@*/
#define GPIO_DDCR2_DDC29	(*(volatile uint_io8_t*)0xB71C017D)  /*@bfbba@*/
#define GPIO_DDCR2_DDC30	(*(volatile uint_io8_t*)0xB71C017E)  /*@bfbba@*/
#define GPIO_DDCR2_DDC31	(*(volatile uint_io8_t*)0xB71C017F)  /*@bfbba@*/

#define GPIO_DDCR3	(GPIO.unDDCR3.u32Register)  /*@rg@*/
#define GPIO_DDCR3_DDC0	(*(volatile uint_io8_t*)0xB71C01E0)  /*@bfbba@*/
#define GPIO_DDCR3_DDC1	(*(volatile uint_io8_t*)0xB71C01E1)  /*@bfbba@*/
#define GPIO_DDCR3_DDC2	(*(volatile uint_io8_t*)0xB71C01E2)  /*@bfbba@*/
#define GPIO_DDCR3_DDC3	(*(volatile uint_io8_t*)0xB71C01E3)  /*@bfbba@*/
#define GPIO_DDCR3_DDC4	(*(volatile uint_io8_t*)0xB71C01E4)  /*@bfbba@*/
#define GPIO_DDCR3_DDC5	(*(volatile uint_io8_t*)0xB71C01E5)  /*@bfbba@*/
#define GPIO_DDCR3_DDC6	(*(volatile uint_io8_t*)0xB71C01E6)  /*@bfbba@*/
#define GPIO_DDCR3_DDC7	(*(volatile uint_io8_t*)0xB71C01E7)  /*@bfbba@*/
#define GPIO_DDCR3_DDC8	(*(volatile uint_io8_t*)0xB71C01E8)  /*@bfbba@*/
#define GPIO_DDCR3_DDC9	(*(volatile uint_io8_t*)0xB71C01E9)  /*@bfbba@*/
#define GPIO_DDCR3_DDC10	(*(volatile uint_io8_t*)0xB71C01EA)  /*@bfbba@*/
#define GPIO_DDCR3_DDC11	(*(volatile uint_io8_t*)0xB71C01EB)  /*@bfbba@*/
#define GPIO_DDCR3_DDC12	(*(volatile uint_io8_t*)0xB71C01EC)  /*@bfbba@*/
#define GPIO_DDCR3_DDC13	(*(volatile uint_io8_t*)0xB71C01ED)  /*@bfbba@*/
#define GPIO_DDCR3_DDC14	(*(volatile uint_io8_t*)0xB71C01EE)  /*@bfbba@*/
#define GPIO_DDCR3_DDC15	(*(volatile uint_io8_t*)0xB71C01EF)  /*@bfbba@*/
#define GPIO_DDCR3_DDC16	(*(volatile uint_io8_t*)0xB71C01F0)  /*@bfbba@*/
#define GPIO_DDCR3_DDC17	(*(volatile uint_io8_t*)0xB71C01F1)  /*@bfbba@*/
#define GPIO_DDCR3_DDC18	(*(volatile uint_io8_t*)0xB71C01F2)  /*@bfbba@*/
#define GPIO_DDCR3_DDC19	(*(volatile uint_io8_t*)0xB71C01F3)  /*@bfbba@*/
#define GPIO_DDCR3_DDC20	(*(volatile uint_io8_t*)0xB71C01F4)  /*@bfbba@*/
#define GPIO_DDCR3_DDC21	(*(volatile uint_io8_t*)0xB71C01F5)  /*@bfbba@*/
#define GPIO_DDCR3_DDC22	(*(volatile uint_io8_t*)0xB71C01F6)  /*@bfbba@*/
#define GPIO_DDCR3_DDC23	(*(volatile uint_io8_t*)0xB71C01F7)  /*@bfbba@*/
#define GPIO_DDCR3_DDC24	(*(volatile uint_io8_t*)0xB71C01F8)  /*@bfbba@*/
#define GPIO_DDCR3_DDC25	(*(volatile uint_io8_t*)0xB71C01F9)  /*@bfbba@*/
#define GPIO_DDCR3_DDC26	(*(volatile uint_io8_t*)0xB71C01FA)  /*@bfbba@*/
#define GPIO_DDCR3_DDC27	(*(volatile uint_io8_t*)0xB71C01FB)  /*@bfbba@*/
#define GPIO_DDCR3_DDC28	(*(volatile uint_io8_t*)0xB71C01FC)  /*@bfbba@*/
#define GPIO_DDCR3_DDC29	(*(volatile uint_io8_t*)0xB71C01FD)  /*@bfbba@*/
#define GPIO_DDCR3_DDC30	(*(volatile uint_io8_t*)0xB71C01FE)  /*@bfbba@*/
#define GPIO_DDCR3_DDC31	(*(volatile uint_io8_t*)0xB71C01FF)  /*@bfbba@*/

#define GPIO_DDCR4	(GPIO.unDDCR4.u32Register)  /*@rg@*/
#define GPIO_DDCR4_DDC0	(*(volatile uint_io8_t*)0xB71C0260)  /*@bfbba@*/
#define GPIO_DDCR4_DDC1	(*(volatile uint_io8_t*)0xB71C0261)  /*@bfbba@*/
#define GPIO_DDCR4_DDC2	(*(volatile uint_io8_t*)0xB71C0262)  /*@bfbba@*/
#define GPIO_DDCR4_DDC3	(*(volatile uint_io8_t*)0xB71C0263)  /*@bfbba@*/
#define GPIO_DDCR4_DDC4	(*(volatile uint_io8_t*)0xB71C0264)  /*@bfbba@*/
#define GPIO_DDCR4_DDC5	(*(volatile uint_io8_t*)0xB71C0265)  /*@bfbba@*/
#define GPIO_DDCR4_DDC6	(*(volatile uint_io8_t*)0xB71C0266)  /*@bfbba@*/
#define GPIO_DDCR4_DDC7	(*(volatile uint_io8_t*)0xB71C0267)  /*@bfbba@*/
#define GPIO_DDCR4_DDC8	(*(volatile uint_io8_t*)0xB71C0268)  /*@bfbba@*/
#define GPIO_DDCR4_DDC9	(*(volatile uint_io8_t*)0xB71C0269)  /*@bfbba@*/
#define GPIO_DDCR4_DDC10	(*(volatile uint_io8_t*)0xB71C026A)  /*@bfbba@*/
#define GPIO_DDCR4_DDC11	(*(volatile uint_io8_t*)0xB71C026B)  /*@bfbba@*/
#define GPIO_DDCR4_DDC12	(*(volatile uint_io8_t*)0xB71C026C)  /*@bfbba@*/
#define GPIO_DDCR4_DDC13	(*(volatile uint_io8_t*)0xB71C026D)  /*@bfbba@*/
#define GPIO_DDCR4_DDC14	(*(volatile uint_io8_t*)0xB71C026E)  /*@bfbba@*/
#define GPIO_DDCR4_DDC15	(*(volatile uint_io8_t*)0xB71C026F)  /*@bfbba@*/
#define GPIO_DDCR4_DDC16	(*(volatile uint_io8_t*)0xB71C0270)  /*@bfbba@*/
#define GPIO_DDCR4_DDC17	(*(volatile uint_io8_t*)0xB71C0271)  /*@bfbba@*/
#define GPIO_DDCR4_DDC18	(*(volatile uint_io8_t*)0xB71C0272)  /*@bfbba@*/
#define GPIO_DDCR4_DDC19	(*(volatile uint_io8_t*)0xB71C0273)  /*@bfbba@*/
#define GPIO_DDCR4_DDC20	(*(volatile uint_io8_t*)0xB71C0274)  /*@bfbba@*/
#define GPIO_DDCR4_DDC21	(*(volatile uint_io8_t*)0xB71C0275)  /*@bfbba@*/
#define GPIO_DDCR4_DDC22	(*(volatile uint_io8_t*)0xB71C0276)  /*@bfbba@*/
#define GPIO_DDCR4_DDC23	(*(volatile uint_io8_t*)0xB71C0277)  /*@bfbba@*/
#define GPIO_DDCR4_DDC24	(*(volatile uint_io8_t*)0xB71C0278)  /*@bfbba@*/
#define GPIO_DDCR4_DDC25	(*(volatile uint_io8_t*)0xB71C0279)  /*@bfbba@*/
#define GPIO_DDCR4_DDC26	(*(volatile uint_io8_t*)0xB71C027A)  /*@bfbba@*/
#define GPIO_DDCR4_DDC27	(*(volatile uint_io8_t*)0xB71C027B)  /*@bfbba@*/
#define GPIO_DDCR4_DDC28	(*(volatile uint_io8_t*)0xB71C027C)  /*@bfbba@*/
#define GPIO_DDCR4_DDC29	(*(volatile uint_io8_t*)0xB71C027D)  /*@bfbba@*/
#define GPIO_DDCR4_DDC30	(*(volatile uint_io8_t*)0xB71C027E)  /*@bfbba@*/
#define GPIO_DDCR4_DDC31	(*(volatile uint_io8_t*)0xB71C027F)  /*@bfbba@*/

#define GPIO_DDCR5	(GPIO.unDDCR5.u32Register)  /*@rg@*/
#define GPIO_DDCR5_DDC0	(*(volatile uint_io8_t*)0xB71C02E0)  /*@bfbba@*/
#define GPIO_DDCR5_DDC1	(*(volatile uint_io8_t*)0xB71C02E1)  /*@bfbba@*/
#define GPIO_DDCR5_DDC2	(*(volatile uint_io8_t*)0xB71C02E2)  /*@bfbba@*/
#define GPIO_DDCR5_DDC3	(*(volatile uint_io8_t*)0xB71C02E3)  /*@bfbba@*/
#define GPIO_DDCR5_DDC4	(*(volatile uint_io8_t*)0xB71C02E4)  /*@bfbba@*/
#define GPIO_DDCR5_DDC5	(*(volatile uint_io8_t*)0xB71C02E5)  /*@bfbba@*/
#define GPIO_DDCR5_DDC6	(*(volatile uint_io8_t*)0xB71C02E6)  /*@bfbba@*/
#define GPIO_DDCR5_DDC7	(*(volatile uint_io8_t*)0xB71C02E7)  /*@bfbba@*/
#define GPIO_DDCR5_DDC8	(*(volatile uint_io8_t*)0xB71C02E8)  /*@bfbba@*/
#define GPIO_DDCR5_DDC9	(*(volatile uint_io8_t*)0xB71C02E9)  /*@bfbba@*/
#define GPIO_DDCR5_DDC10	(*(volatile uint_io8_t*)0xB71C02EA)  /*@bfbba@*/
#define GPIO_DDCR5_DDC11	(*(volatile uint_io8_t*)0xB71C02EB)  /*@bfbba@*/
#define GPIO_DDCR5_DDC12	(*(volatile uint_io8_t*)0xB71C02EC)  /*@bfbba@*/
#define GPIO_DDCR5_DDC13	(*(volatile uint_io8_t*)0xB71C02ED)  /*@bfbba@*/
#define GPIO_DDCR5_DDC14	(*(volatile uint_io8_t*)0xB71C02EE)  /*@bfbba@*/
#define GPIO_DDCR5_DDC15	(*(volatile uint_io8_t*)0xB71C02EF)  /*@bfbba@*/
#define GPIO_DDCR5_DDC16	(*(volatile uint_io8_t*)0xB71C02F0)  /*@bfbba@*/
#define GPIO_DDCR5_DDC17	(*(volatile uint_io8_t*)0xB71C02F1)  /*@bfbba@*/
#define GPIO_DDCR5_DDC18	(*(volatile uint_io8_t*)0xB71C02F2)  /*@bfbba@*/
#define GPIO_DDCR5_DDC19	(*(volatile uint_io8_t*)0xB71C02F3)  /*@bfbba@*/
#define GPIO_DDCR5_DDC20	(*(volatile uint_io8_t*)0xB71C02F4)  /*@bfbba@*/
#define GPIO_DDCR5_DDC21	(*(volatile uint_io8_t*)0xB71C02F5)  /*@bfbba@*/
#define GPIO_DDCR5_DDC22	(*(volatile uint_io8_t*)0xB71C02F6)  /*@bfbba@*/
#define GPIO_DDCR5_DDC23	(*(volatile uint_io8_t*)0xB71C02F7)  /*@bfbba@*/
#define GPIO_DDCR5_DDC24	(*(volatile uint_io8_t*)0xB71C02F8)  /*@bfbba@*/
#define GPIO_DDCR5_DDC25	(*(volatile uint_io8_t*)0xB71C02F9)  /*@bfbba@*/
#define GPIO_DDCR5_DDC26	(*(volatile uint_io8_t*)0xB71C02FA)  /*@bfbba@*/
#define GPIO_DDCR5_DDC27	(*(volatile uint_io8_t*)0xB71C02FB)  /*@bfbba@*/
#define GPIO_DDCR5_DDC28	(*(volatile uint_io8_t*)0xB71C02FC)  /*@bfbba@*/
#define GPIO_DDCR5_DDC29	(*(volatile uint_io8_t*)0xB71C02FD)  /*@bfbba@*/
#define GPIO_DDCR5_DDC30	(*(volatile uint_io8_t*)0xB71C02FE)  /*@bfbba@*/
#define GPIO_DDCR5_DDC31	(*(volatile uint_io8_t*)0xB71C02FF)  /*@bfbba@*/

#define GPIO_DDCR6	(GPIO.unDDCR6.u32Register)  /*@rg@*/
#define GPIO_DDCR6_DDC0	(*(volatile uint_io8_t*)0xB71C0360)  /*@bfbba@*/
#define GPIO_DDCR6_DDC1	(*(volatile uint_io8_t*)0xB71C0361)  /*@bfbba@*/
#define GPIO_DDCR6_DDC2	(*(volatile uint_io8_t*)0xB71C0362)  /*@bfbba@*/
#define GPIO_DDCR6_DDC3	(*(volatile uint_io8_t*)0xB71C0363)  /*@bfbba@*/
#define GPIO_DDCR6_DDC4	(*(volatile uint_io8_t*)0xB71C0364)  /*@bfbba@*/
#define GPIO_DDCR6_DDC5	(*(volatile uint_io8_t*)0xB71C0365)  /*@bfbba@*/
#define GPIO_DDCR6_DDC6	(*(volatile uint_io8_t*)0xB71C0366)  /*@bfbba@*/
#define GPIO_DDCR6_DDC7	(*(volatile uint_io8_t*)0xB71C0367)  /*@bfbba@*/
#define GPIO_DDCR6_DDC8	(*(volatile uint_io8_t*)0xB71C0368)  /*@bfbba@*/
#define GPIO_DDCR6_DDC9	(*(volatile uint_io8_t*)0xB71C0369)  /*@bfbba@*/
#define GPIO_DDCR6_DDC10	(*(volatile uint_io8_t*)0xB71C036A)  /*@bfbba@*/
#define GPIO_DDCR6_DDC11	(*(volatile uint_io8_t*)0xB71C036B)  /*@bfbba@*/
#define GPIO_DDCR6_DDC12	(*(volatile uint_io8_t*)0xB71C036C)  /*@bfbba@*/
#define GPIO_DDCR6_DDC13	(*(volatile uint_io8_t*)0xB71C036D)  /*@bfbba@*/
#define GPIO_DDCR6_DDC14	(*(volatile uint_io8_t*)0xB71C036E)  /*@bfbba@*/
#define GPIO_DDCR6_DDC15	(*(volatile uint_io8_t*)0xB71C036F)  /*@bfbba@*/
#define GPIO_DDCR6_DDC16	(*(volatile uint_io8_t*)0xB71C0370)  /*@bfbba@*/
#define GPIO_DDCR6_DDC17	(*(volatile uint_io8_t*)0xB71C0371)  /*@bfbba@*/
#define GPIO_DDCR6_DDC18	(*(volatile uint_io8_t*)0xB71C0372)  /*@bfbba@*/
#define GPIO_DDCR6_DDC19	(*(volatile uint_io8_t*)0xB71C0373)  /*@bfbba@*/
#define GPIO_DDCR6_DDC20	(*(volatile uint_io8_t*)0xB71C0374)  /*@bfbba@*/
#define GPIO_DDCR6_DDC21	(*(volatile uint_io8_t*)0xB71C0375)  /*@bfbba@*/
#define GPIO_DDCR6_DDC22	(*(volatile uint_io8_t*)0xB71C0376)  /*@bfbba@*/
#define GPIO_DDCR6_DDC23	(*(volatile uint_io8_t*)0xB71C0377)  /*@bfbba@*/
#define GPIO_DDCR6_DDC24	(*(volatile uint_io8_t*)0xB71C0378)  /*@bfbba@*/
#define GPIO_DDCR6_DDC25	(*(volatile uint_io8_t*)0xB71C0379)  /*@bfbba@*/
#define GPIO_DDCR6_DDC26	(*(volatile uint_io8_t*)0xB71C037A)  /*@bfbba@*/
#define GPIO_DDCR6_DDC27	(*(volatile uint_io8_t*)0xB71C037B)  /*@bfbba@*/
#define GPIO_DDCR6_DDC28	(*(volatile uint_io8_t*)0xB71C037C)  /*@bfbba@*/
#define GPIO_DDCR6_DDC29	(*(volatile uint_io8_t*)0xB71C037D)  /*@bfbba@*/
#define GPIO_DDCR6_DDC30	(*(volatile uint_io8_t*)0xB71C037E)  /*@bfbba@*/
#define GPIO_DDCR6_DDC31	(*(volatile uint_io8_t*)0xB71C037F)  /*@bfbba@*/

#define GPIO_DDCR7	(GPIO.unDDCR7.u32Register)  /*@rg@*/
#define GPIO_DDCR7_DDC0	(*(volatile uint_io8_t*)0xB71C03E0)  /*@bfbba@*/
#define GPIO_DDCR7_DDC1	(*(volatile uint_io8_t*)0xB71C03E1)  /*@bfbba@*/
#define GPIO_DDCR7_DDC2	(*(volatile uint_io8_t*)0xB71C03E2)  /*@bfbba@*/
#define GPIO_DDCR7_DDC3	(*(volatile uint_io8_t*)0xB71C03E3)  /*@bfbba@*/
#define GPIO_DDCR7_DDC4	(*(volatile uint_io8_t*)0xB71C03E4)  /*@bfbba@*/
#define GPIO_DDCR7_DDC5	(*(volatile uint_io8_t*)0xB71C03E5)  /*@bfbba@*/
#define GPIO_DDCR7_DDC6	(*(volatile uint_io8_t*)0xB71C03E6)  /*@bfbba@*/
#define GPIO_DDCR7_DDC7	(*(volatile uint_io8_t*)0xB71C03E7)  /*@bfbba@*/
#define GPIO_DDCR7_DDC8	(*(volatile uint_io8_t*)0xB71C03E8)  /*@bfbba@*/
#define GPIO_DDCR7_DDC9	(*(volatile uint_io8_t*)0xB71C03E9)  /*@bfbba@*/
#define GPIO_DDCR7_DDC10	(*(volatile uint_io8_t*)0xB71C03EA)  /*@bfbba@*/
#define GPIO_DDCR7_DDC11	(*(volatile uint_io8_t*)0xB71C03EB)  /*@bfbba@*/
#define GPIO_DDCR7_DDC12	(*(volatile uint_io8_t*)0xB71C03EC)  /*@bfbba@*/
#define GPIO_DDCR7_DDC13	(*(volatile uint_io8_t*)0xB71C03ED)  /*@bfbba@*/
#define GPIO_DDCR7_DDC14	(*(volatile uint_io8_t*)0xB71C03EE)  /*@bfbba@*/
#define GPIO_DDCR7_DDC15	(*(volatile uint_io8_t*)0xB71C03EF)  /*@bfbba@*/
#define GPIO_DDCR7_DDC16	(*(volatile uint_io8_t*)0xB71C03F0)  /*@bfbba@*/
#define GPIO_DDCR7_DDC17	(*(volatile uint_io8_t*)0xB71C03F1)  /*@bfbba@*/
#define GPIO_DDCR7_DDC18	(*(volatile uint_io8_t*)0xB71C03F2)  /*@bfbba@*/
#define GPIO_DDCR7_DDC19	(*(volatile uint_io8_t*)0xB71C03F3)  /*@bfbba@*/
#define GPIO_DDCR7_DDC20	(*(volatile uint_io8_t*)0xB71C03F4)  /*@bfbba@*/
#define GPIO_DDCR7_DDC21	(*(volatile uint_io8_t*)0xB71C03F5)  /*@bfbba@*/
#define GPIO_DDCR7_DDC22	(*(volatile uint_io8_t*)0xB71C03F6)  /*@bfbba@*/
#define GPIO_DDCR7_DDC23	(*(volatile uint_io8_t*)0xB71C03F7)  /*@bfbba@*/
#define GPIO_DDCR7_DDC24	(*(volatile uint_io8_t*)0xB71C03F8)  /*@bfbba@*/
#define GPIO_DDCR7_DDC25	(*(volatile uint_io8_t*)0xB71C03F9)  /*@bfbba@*/
#define GPIO_DDCR7_DDC26	(*(volatile uint_io8_t*)0xB71C03FA)  /*@bfbba@*/
#define GPIO_DDCR7_DDC27	(*(volatile uint_io8_t*)0xB71C03FB)  /*@bfbba@*/
#define GPIO_DDCR7_DDC28	(*(volatile uint_io8_t*)0xB71C03FC)  /*@bfbba@*/
#define GPIO_DDCR7_DDC29	(*(volatile uint_io8_t*)0xB71C03FD)  /*@bfbba@*/
#define GPIO_DDCR7_DDC30	(*(volatile uint_io8_t*)0xB71C03FE)  /*@bfbba@*/
#define GPIO_DDCR7_DDC31	(*(volatile uint_io8_t*)0xB71C03FF)  /*@bfbba@*/

#define GPIO_DDCR8	(GPIO.unDDCR8.u32Register)  /*@rg@*/
#define GPIO_DDCR8_DDC0	(*(volatile uint_io8_t*)0xB71C0460)  /*@bfbba@*/
#define GPIO_DDCR8_DDC1	(*(volatile uint_io8_t*)0xB71C0461)  /*@bfbba@*/
#define GPIO_DDCR8_DDC2	(*(volatile uint_io8_t*)0xB71C0462)  /*@bfbba@*/
#define GPIO_DDCR8_DDC3	(*(volatile uint_io8_t*)0xB71C0463)  /*@bfbba@*/
#define GPIO_DDCR8_DDC4	(*(volatile uint_io8_t*)0xB71C0464)  /*@bfbba@*/
#define GPIO_DDCR8_DDC5	(*(volatile uint_io8_t*)0xB71C0465)  /*@bfbba@*/
#define GPIO_DDCR8_DDC6	(*(volatile uint_io8_t*)0xB71C0466)  /*@bfbba@*/
#define GPIO_DDCR8_DDC7	(*(volatile uint_io8_t*)0xB71C0467)  /*@bfbba@*/
#define GPIO_DDCR8_DDC8	(*(volatile uint_io8_t*)0xB71C0468)  /*@bfbba@*/
#define GPIO_DDCR8_DDC9	(*(volatile uint_io8_t*)0xB71C0469)  /*@bfbba@*/
#define GPIO_DDCR8_DDC10	(*(volatile uint_io8_t*)0xB71C046A)  /*@bfbba@*/
#define GPIO_DDCR8_DDC11	(*(volatile uint_io8_t*)0xB71C046B)  /*@bfbba@*/
#define GPIO_DDCR8_DDC12	(*(volatile uint_io8_t*)0xB71C046C)  /*@bfbba@*/
#define GPIO_DDCR8_DDC13	(*(volatile uint_io8_t*)0xB71C046D)  /*@bfbba@*/
#define GPIO_DDCR8_DDC14	(*(volatile uint_io8_t*)0xB71C046E)  /*@bfbba@*/
#define GPIO_DDCR8_DDC15	(*(volatile uint_io8_t*)0xB71C046F)  /*@bfbba@*/
#define GPIO_DDCR8_DDC16	(*(volatile uint_io8_t*)0xB71C0470)  /*@bfbba@*/
#define GPIO_DDCR8_DDC17	(*(volatile uint_io8_t*)0xB71C0471)  /*@bfbba@*/
#define GPIO_DDCR8_DDC18	(*(volatile uint_io8_t*)0xB71C0472)  /*@bfbba@*/
#define GPIO_DDCR8_DDC19	(*(volatile uint_io8_t*)0xB71C0473)  /*@bfbba@*/
#define GPIO_DDCR8_DDC20	(*(volatile uint_io8_t*)0xB71C0474)  /*@bfbba@*/
#define GPIO_DDCR8_DDC21	(*(volatile uint_io8_t*)0xB71C0475)  /*@bfbba@*/
#define GPIO_DDCR8_DDC22	(*(volatile uint_io8_t*)0xB71C0476)  /*@bfbba@*/
#define GPIO_DDCR8_DDC23	(*(volatile uint_io8_t*)0xB71C0477)  /*@bfbba@*/
#define GPIO_DDCR8_DDC24	(*(volatile uint_io8_t*)0xB71C0478)  /*@bfbba@*/
#define GPIO_DDCR8_DDC25	(*(volatile uint_io8_t*)0xB71C0479)  /*@bfbba@*/
#define GPIO_DDCR8_DDC26	(*(volatile uint_io8_t*)0xB71C047A)  /*@bfbba@*/
#define GPIO_DDCR8_DDC27	(*(volatile uint_io8_t*)0xB71C047B)  /*@bfbba@*/
#define GPIO_DDCR8_DDC28	(*(volatile uint_io8_t*)0xB71C047C)  /*@bfbba@*/
#define GPIO_DDCR8_DDC29	(*(volatile uint_io8_t*)0xB71C047D)  /*@bfbba@*/
#define GPIO_DDCR8_DDC30	(*(volatile uint_io8_t*)0xB71C047E)  /*@bfbba@*/
#define GPIO_DDCR8_DDC31	(*(volatile uint_io8_t*)0xB71C047F)  /*@bfbba@*/

#define GPIO_DDCR9	(GPIO.unDDCR9.u32Register)  /*@rg@*/
#define GPIO_DDCR9_DDC0	(*(volatile uint_io8_t*)0xB71C04E0)  /*@bfbba@*/
#define GPIO_DDCR9_DDC1	(*(volatile uint_io8_t*)0xB71C04E1)  /*@bfbba@*/
#define GPIO_DDCR9_DDC2	(*(volatile uint_io8_t*)0xB71C04E2)  /*@bfbba@*/
#define GPIO_DDCR9_DDC3	(*(volatile uint_io8_t*)0xB71C04E3)  /*@bfbba@*/
#define GPIO_DDCR9_DDC4	(*(volatile uint_io8_t*)0xB71C04E4)  /*@bfbba@*/
#define GPIO_DDCR9_DDC5	(*(volatile uint_io8_t*)0xB71C04E5)  /*@bfbba@*/
#define GPIO_DDCR9_DDC6	(*(volatile uint_io8_t*)0xB71C04E6)  /*@bfbba@*/
#define GPIO_DDCR9_DDC7	(*(volatile uint_io8_t*)0xB71C04E7)  /*@bfbba@*/
#define GPIO_DDCR9_DDC8	(*(volatile uint_io8_t*)0xB71C04E8)  /*@bfbba@*/
#define GPIO_DDCR9_DDC9	(*(volatile uint_io8_t*)0xB71C04E9)  /*@bfbba@*/
#define GPIO_DDCR9_DDC10	(*(volatile uint_io8_t*)0xB71C04EA)  /*@bfbba@*/
#define GPIO_DDCR9_DDC11	(*(volatile uint_io8_t*)0xB71C04EB)  /*@bfbba@*/
#define GPIO_DDCR9_DDC12	(*(volatile uint_io8_t*)0xB71C04EC)  /*@bfbba@*/
#define GPIO_DDCR9_DDC13	(*(volatile uint_io8_t*)0xB71C04ED)  /*@bfbba@*/
#define GPIO_DDCR9_DDC14	(*(volatile uint_io8_t*)0xB71C04EE)  /*@bfbba@*/
#define GPIO_DDCR9_DDC15	(*(volatile uint_io8_t*)0xB71C04EF)  /*@bfbba@*/
#define GPIO_DDCR9_DDC16	(*(volatile uint_io8_t*)0xB71C04F0)  /*@bfbba@*/
#define GPIO_DDCR9_DDC17	(*(volatile uint_io8_t*)0xB71C04F1)  /*@bfbba@*/
#define GPIO_DDCR9_DDC18	(*(volatile uint_io8_t*)0xB71C04F2)  /*@bfbba@*/
#define GPIO_DDCR9_DDC19	(*(volatile uint_io8_t*)0xB71C04F3)  /*@bfbba@*/
#define GPIO_DDCR9_DDC20	(*(volatile uint_io8_t*)0xB71C04F4)  /*@bfbba@*/
#define GPIO_DDCR9_DDC21	(*(volatile uint_io8_t*)0xB71C04F5)  /*@bfbba@*/
#define GPIO_DDCR9_DDC22	(*(volatile uint_io8_t*)0xB71C04F6)  /*@bfbba@*/
#define GPIO_DDCR9_DDC23	(*(volatile uint_io8_t*)0xB71C04F7)  /*@bfbba@*/
#define GPIO_DDCR9_DDC24	(*(volatile uint_io8_t*)0xB71C04F8)  /*@bfbba@*/
#define GPIO_DDCR9_DDC25	(*(volatile uint_io8_t*)0xB71C04F9)  /*@bfbba@*/
#define GPIO_DDCR9_DDC26	(*(volatile uint_io8_t*)0xB71C04FA)  /*@bfbba@*/
#define GPIO_DDCR9_DDC27	(*(volatile uint_io8_t*)0xB71C04FB)  /*@bfbba@*/
#define GPIO_DDCR9_DDC28	(*(volatile uint_io8_t*)0xB71C04FC)  /*@bfbba@*/
#define GPIO_DDCR9_DDC29	(*(volatile uint_io8_t*)0xB71C04FD)  /*@bfbba@*/
#define GPIO_DDCR9_DDC30	(*(volatile uint_io8_t*)0xB71C04FE)  /*@bfbba@*/
#define GPIO_DDCR9_DDC31	(*(volatile uint_io8_t*)0xB71C04FF)  /*@bfbba@*/

#define GPIO_DDCR10	(GPIO.unDDCR10.u32Register)  /*@rg@*/
#define GPIO_DDCR10_DDC0	(*(volatile uint_io8_t*)0xB71C0560)  /*@bfbba@*/
#define GPIO_DDCR10_DDC1	(*(volatile uint_io8_t*)0xB71C0561)  /*@bfbba@*/
#define GPIO_DDCR10_DDC2	(*(volatile uint_io8_t*)0xB71C0562)  /*@bfbba@*/
#define GPIO_DDCR10_DDC3	(*(volatile uint_io8_t*)0xB71C0563)  /*@bfbba@*/
#define GPIO_DDCR10_DDC4	(*(volatile uint_io8_t*)0xB71C0564)  /*@bfbba@*/
#define GPIO_DDCR10_DDC5	(*(volatile uint_io8_t*)0xB71C0565)  /*@bfbba@*/
#define GPIO_DDCR10_DDC6	(*(volatile uint_io8_t*)0xB71C0566)  /*@bfbba@*/
#define GPIO_DDCR10_DDC7	(*(volatile uint_io8_t*)0xB71C0567)  /*@bfbba@*/
#define GPIO_DDCR10_DDC8	(*(volatile uint_io8_t*)0xB71C0568)  /*@bfbba@*/
#define GPIO_DDCR10_DDC9	(*(volatile uint_io8_t*)0xB71C0569)  /*@bfbba@*/
#define GPIO_DDCR10_DDC10	(*(volatile uint_io8_t*)0xB71C056A)  /*@bfbba@*/
#define GPIO_DDCR10_DDC11	(*(volatile uint_io8_t*)0xB71C056B)  /*@bfbba@*/
#define GPIO_DDCR10_DDC12	(*(volatile uint_io8_t*)0xB71C056C)  /*@bfbba@*/
#define GPIO_DDCR10_DDC13	(*(volatile uint_io8_t*)0xB71C056D)  /*@bfbba@*/
#define GPIO_DDCR10_DDC14	(*(volatile uint_io8_t*)0xB71C056E)  /*@bfbba@*/
#define GPIO_DDCR10_DDC15	(*(volatile uint_io8_t*)0xB71C056F)  /*@bfbba@*/
#define GPIO_DDCR10_DDC16	(*(volatile uint_io8_t*)0xB71C0570)  /*@bfbba@*/
#define GPIO_DDCR10_DDC17	(*(volatile uint_io8_t*)0xB71C0571)  /*@bfbba@*/
#define GPIO_DDCR10_DDC18	(*(volatile uint_io8_t*)0xB71C0572)  /*@bfbba@*/
#define GPIO_DDCR10_DDC19	(*(volatile uint_io8_t*)0xB71C0573)  /*@bfbba@*/
#define GPIO_DDCR10_DDC20	(*(volatile uint_io8_t*)0xB71C0574)  /*@bfbba@*/
#define GPIO_DDCR10_DDC21	(*(volatile uint_io8_t*)0xB71C0575)  /*@bfbba@*/
#define GPIO_DDCR10_DDC22	(*(volatile uint_io8_t*)0xB71C0576)  /*@bfbba@*/
#define GPIO_DDCR10_DDC23	(*(volatile uint_io8_t*)0xB71C0577)  /*@bfbba@*/
#define GPIO_DDCR10_DDC24	(*(volatile uint_io8_t*)0xB71C0578)  /*@bfbba@*/
#define GPIO_DDCR10_DDC25	(*(volatile uint_io8_t*)0xB71C0579)  /*@bfbba@*/
#define GPIO_DDCR10_DDC26	(*(volatile uint_io8_t*)0xB71C057A)  /*@bfbba@*/
#define GPIO_DDCR10_DDC27	(*(volatile uint_io8_t*)0xB71C057B)  /*@bfbba@*/
#define GPIO_DDCR10_DDC28	(*(volatile uint_io8_t*)0xB71C057C)  /*@bfbba@*/
#define GPIO_DDCR10_DDC29	(*(volatile uint_io8_t*)0xB71C057D)  /*@bfbba@*/
#define GPIO_DDCR10_DDC30	(*(volatile uint_io8_t*)0xB71C057E)  /*@bfbba@*/
#define GPIO_DDCR10_DDC31	(*(volatile uint_io8_t*)0xB71C057F)  /*@bfbba@*/

#define GPIO_DDCR11	(GPIO.unDDCR11.u32Register)  /*@rg@*/
#define GPIO_DDCR11_DDC0	(*(volatile uint_io8_t*)0xB71C05E0)  /*@bfbba@*/
#define GPIO_DDCR11_DDC1	(*(volatile uint_io8_t*)0xB71C05E1)  /*@bfbba@*/
#define GPIO_DDCR11_DDC2	(*(volatile uint_io8_t*)0xB71C05E2)  /*@bfbba@*/
#define GPIO_DDCR11_DDC3	(*(volatile uint_io8_t*)0xB71C05E3)  /*@bfbba@*/
#define GPIO_DDCR11_DDC4	(*(volatile uint_io8_t*)0xB71C05E4)  /*@bfbba@*/
#define GPIO_DDCR11_DDC5	(*(volatile uint_io8_t*)0xB71C05E5)  /*@bfbba@*/
#define GPIO_DDCR11_DDC6	(*(volatile uint_io8_t*)0xB71C05E6)  /*@bfbba@*/
#define GPIO_DDCR11_DDC7	(*(volatile uint_io8_t*)0xB71C05E7)  /*@bfbba@*/
#define GPIO_DDCR11_DDC8	(*(volatile uint_io8_t*)0xB71C05E8)  /*@bfbba@*/
#define GPIO_DDCR11_DDC9	(*(volatile uint_io8_t*)0xB71C05E9)  /*@bfbba@*/
#define GPIO_DDCR11_DDC10	(*(volatile uint_io8_t*)0xB71C05EA)  /*@bfbba@*/
#define GPIO_DDCR11_DDC11	(*(volatile uint_io8_t*)0xB71C05EB)  /*@bfbba@*/
#define GPIO_DDCR11_DDC12	(*(volatile uint_io8_t*)0xB71C05EC)  /*@bfbba@*/
#define GPIO_DDCR11_DDC13	(*(volatile uint_io8_t*)0xB71C05ED)  /*@bfbba@*/
#define GPIO_DDCR11_DDC14	(*(volatile uint_io8_t*)0xB71C05EE)  /*@bfbba@*/
#define GPIO_DDCR11_DDC15	(*(volatile uint_io8_t*)0xB71C05EF)  /*@bfbba@*/
#define GPIO_DDCR11_DDC16	(*(volatile uint_io8_t*)0xB71C05F0)  /*@bfbba@*/
#define GPIO_DDCR11_DDC17	(*(volatile uint_io8_t*)0xB71C05F1)  /*@bfbba@*/
#define GPIO_DDCR11_DDC18	(*(volatile uint_io8_t*)0xB71C05F2)  /*@bfbba@*/
#define GPIO_DDCR11_DDC19	(*(volatile uint_io8_t*)0xB71C05F3)  /*@bfbba@*/
#define GPIO_DDCR11_DDC20	(*(volatile uint_io8_t*)0xB71C05F4)  /*@bfbba@*/
#define GPIO_DDCR11_DDC21	(*(volatile uint_io8_t*)0xB71C05F5)  /*@bfbba@*/
#define GPIO_DDCR11_DDC22	(*(volatile uint_io8_t*)0xB71C05F6)  /*@bfbba@*/
#define GPIO_DDCR11_DDC23	(*(volatile uint_io8_t*)0xB71C05F7)  /*@bfbba@*/
#define GPIO_DDCR11_DDC24	(*(volatile uint_io8_t*)0xB71C05F8)  /*@bfbba@*/
#define GPIO_DDCR11_DDC25	(*(volatile uint_io8_t*)0xB71C05F9)  /*@bfbba@*/
#define GPIO_DDCR11_DDC26	(*(volatile uint_io8_t*)0xB71C05FA)  /*@bfbba@*/
#define GPIO_DDCR11_DDC27	(*(volatile uint_io8_t*)0xB71C05FB)  /*@bfbba@*/
#define GPIO_DDCR11_DDC28	(*(volatile uint_io8_t*)0xB71C05FC)  /*@bfbba@*/
#define GPIO_DDCR11_DDC29	(*(volatile uint_io8_t*)0xB71C05FD)  /*@bfbba@*/
#define GPIO_DDCR11_DDC30	(*(volatile uint_io8_t*)0xB71C05FE)  /*@bfbba@*/
#define GPIO_DDCR11_DDC31	(*(volatile uint_io8_t*)0xB71C05FF)  /*@bfbba@*/

#define GPIO_DDCR12	(GPIO.unDDCR12.u32Register)  /*@rg@*/
#define GPIO_DDCR12_DDC0	(*(volatile uint_io8_t*)0xB71C0660)  /*@bfbba@*/
#define GPIO_DDCR12_DDC1	(*(volatile uint_io8_t*)0xB71C0661)  /*@bfbba@*/
#define GPIO_DDCR12_DDC2	(*(volatile uint_io8_t*)0xB71C0662)  /*@bfbba@*/
#define GPIO_DDCR12_DDC3	(*(volatile uint_io8_t*)0xB71C0663)  /*@bfbba@*/
#define GPIO_DDCR12_DDC4	(*(volatile uint_io8_t*)0xB71C0664)  /*@bfbba@*/
#define GPIO_DDCR12_DDC5	(*(volatile uint_io8_t*)0xB71C0665)  /*@bfbba@*/
#define GPIO_DDCR12_DDC6	(*(volatile uint_io8_t*)0xB71C0666)  /*@bfbba@*/
#define GPIO_DDCR12_DDC7	(*(volatile uint_io8_t*)0xB71C0667)  /*@bfbba@*/
#define GPIO_DDCR12_DDC8	(*(volatile uint_io8_t*)0xB71C0668)  /*@bfbba@*/
#define GPIO_DDCR12_DDC9	(*(volatile uint_io8_t*)0xB71C0669)  /*@bfbba@*/
#define GPIO_DDCR12_DDC10	(*(volatile uint_io8_t*)0xB71C066A)  /*@bfbba@*/
#define GPIO_DDCR12_DDC11	(*(volatile uint_io8_t*)0xB71C066B)  /*@bfbba@*/
#define GPIO_DDCR12_DDC12	(*(volatile uint_io8_t*)0xB71C066C)  /*@bfbba@*/
#define GPIO_DDCR12_DDC13	(*(volatile uint_io8_t*)0xB71C066D)  /*@bfbba@*/
#define GPIO_DDCR12_DDC14	(*(volatile uint_io8_t*)0xB71C066E)  /*@bfbba@*/
#define GPIO_DDCR12_DDC15	(*(volatile uint_io8_t*)0xB71C066F)  /*@bfbba@*/
#define GPIO_DDCR12_DDC16	(*(volatile uint_io8_t*)0xB71C0670)  /*@bfbba@*/
#define GPIO_DDCR12_DDC17	(*(volatile uint_io8_t*)0xB71C0671)  /*@bfbba@*/
#define GPIO_DDCR12_DDC18	(*(volatile uint_io8_t*)0xB71C0672)  /*@bfbba@*/
#define GPIO_DDCR12_DDC19	(*(volatile uint_io8_t*)0xB71C0673)  /*@bfbba@*/
#define GPIO_DDCR12_DDC20	(*(volatile uint_io8_t*)0xB71C0674)  /*@bfbba@*/
#define GPIO_DDCR12_DDC21	(*(volatile uint_io8_t*)0xB71C0675)  /*@bfbba@*/
#define GPIO_DDCR12_DDC22	(*(volatile uint_io8_t*)0xB71C0676)  /*@bfbba@*/
#define GPIO_DDCR12_DDC23	(*(volatile uint_io8_t*)0xB71C0677)  /*@bfbba@*/
#define GPIO_DDCR12_DDC24	(*(volatile uint_io8_t*)0xB71C0678)  /*@bfbba@*/
#define GPIO_DDCR12_DDC25	(*(volatile uint_io8_t*)0xB71C0679)  /*@bfbba@*/
#define GPIO_DDCR12_DDC26	(*(volatile uint_io8_t*)0xB71C067A)  /*@bfbba@*/
#define GPIO_DDCR12_DDC27	(*(volatile uint_io8_t*)0xB71C067B)  /*@bfbba@*/
#define GPIO_DDCR12_DDC28	(*(volatile uint_io8_t*)0xB71C067C)  /*@bfbba@*/
#define GPIO_DDCR12_DDC29	(*(volatile uint_io8_t*)0xB71C067D)  /*@bfbba@*/
#define GPIO_DDCR12_DDC30	(*(volatile uint_io8_t*)0xB71C067E)  /*@bfbba@*/
#define GPIO_DDCR12_DDC31	(*(volatile uint_io8_t*)0xB71C067F)  /*@bfbba@*/

#define GPIO_DDCR13	(GPIO.unDDCR13.u32Register)  /*@rg@*/
#define GPIO_DDCR13_DDC0	(*(volatile uint_io8_t*)0xB71C06E0)  /*@bfbba@*/
#define GPIO_DDCR13_DDC1	(*(volatile uint_io8_t*)0xB71C06E1)  /*@bfbba@*/
#define GPIO_DDCR13_DDC2	(*(volatile uint_io8_t*)0xB71C06E2)  /*@bfbba@*/
#define GPIO_DDCR13_DDC3	(*(volatile uint_io8_t*)0xB71C06E3)  /*@bfbba@*/
#define GPIO_DDCR13_DDC4	(*(volatile uint_io8_t*)0xB71C06E4)  /*@bfbba@*/
#define GPIO_DDCR13_DDC5	(*(volatile uint_io8_t*)0xB71C06E5)  /*@bfbba@*/
#define GPIO_DDCR13_DDC6	(*(volatile uint_io8_t*)0xB71C06E6)  /*@bfbba@*/
#define GPIO_DDCR13_DDC7	(*(volatile uint_io8_t*)0xB71C06E7)  /*@bfbba@*/
#define GPIO_DDCR13_DDC8	(*(volatile uint_io8_t*)0xB71C06E8)  /*@bfbba@*/
#define GPIO_DDCR13_DDC9	(*(volatile uint_io8_t*)0xB71C06E9)  /*@bfbba@*/
#define GPIO_DDCR13_DDC10	(*(volatile uint_io8_t*)0xB71C06EA)  /*@bfbba@*/
#define GPIO_DDCR13_DDC11	(*(volatile uint_io8_t*)0xB71C06EB)  /*@bfbba@*/
#define GPIO_DDCR13_DDC12	(*(volatile uint_io8_t*)0xB71C06EC)  /*@bfbba@*/
#define GPIO_DDCR13_DDC13	(*(volatile uint_io8_t*)0xB71C06ED)  /*@bfbba@*/
#define GPIO_DDCR13_DDC14	(*(volatile uint_io8_t*)0xB71C06EE)  /*@bfbba@*/
#define GPIO_DDCR13_DDC15	(*(volatile uint_io8_t*)0xB71C06EF)  /*@bfbba@*/
#define GPIO_DDCR13_DDC16	(*(volatile uint_io8_t*)0xB71C06F0)  /*@bfbba@*/
#define GPIO_DDCR13_DDC17	(*(volatile uint_io8_t*)0xB71C06F1)  /*@bfbba@*/
#define GPIO_DDCR13_DDC18	(*(volatile uint_io8_t*)0xB71C06F2)  /*@bfbba@*/
#define GPIO_DDCR13_DDC19	(*(volatile uint_io8_t*)0xB71C06F3)  /*@bfbba@*/
#define GPIO_DDCR13_DDC20	(*(volatile uint_io8_t*)0xB71C06F4)  /*@bfbba@*/
#define GPIO_DDCR13_DDC21	(*(volatile uint_io8_t*)0xB71C06F5)  /*@bfbba@*/
#define GPIO_DDCR13_DDC22	(*(volatile uint_io8_t*)0xB71C06F6)  /*@bfbba@*/
#define GPIO_DDCR13_DDC23	(*(volatile uint_io8_t*)0xB71C06F7)  /*@bfbba@*/
#define GPIO_DDCR13_DDC24	(*(volatile uint_io8_t*)0xB71C06F8)  /*@bfbba@*/
#define GPIO_DDCR13_DDC25	(*(volatile uint_io8_t*)0xB71C06F9)  /*@bfbba@*/
#define GPIO_DDCR13_DDC26	(*(volatile uint_io8_t*)0xB71C06FA)  /*@bfbba@*/
#define GPIO_DDCR13_DDC27	(*(volatile uint_io8_t*)0xB71C06FB)  /*@bfbba@*/
#define GPIO_DDCR13_DDC28	(*(volatile uint_io8_t*)0xB71C06FC)  /*@bfbba@*/
#define GPIO_DDCR13_DDC29	(*(volatile uint_io8_t*)0xB71C06FD)  /*@bfbba@*/
#define GPIO_DDCR13_DDC30	(*(volatile uint_io8_t*)0xB71C06FE)  /*@bfbba@*/
#define GPIO_DDCR13_DDC31	(*(volatile uint_io8_t*)0xB71C06FF)  /*@bfbba@*/

#define GPIO_DDCR14	(GPIO.unDDCR14.u32Register)  /*@rg@*/
#define GPIO_DDCR14_DDC0	(*(volatile uint_io8_t*)0xB71C0760)  /*@bfbba@*/
#define GPIO_DDCR14_DDC1	(*(volatile uint_io8_t*)0xB71C0761)  /*@bfbba@*/
#define GPIO_DDCR14_DDC2	(*(volatile uint_io8_t*)0xB71C0762)  /*@bfbba@*/
#define GPIO_DDCR14_DDC3	(*(volatile uint_io8_t*)0xB71C0763)  /*@bfbba@*/
#define GPIO_DDCR14_DDC4	(*(volatile uint_io8_t*)0xB71C0764)  /*@bfbba@*/
#define GPIO_DDCR14_DDC5	(*(volatile uint_io8_t*)0xB71C0765)  /*@bfbba@*/
#define GPIO_DDCR14_DDC6	(*(volatile uint_io8_t*)0xB71C0766)  /*@bfbba@*/
#define GPIO_DDCR14_DDC7	(*(volatile uint_io8_t*)0xB71C0767)  /*@bfbba@*/
#define GPIO_DDCR14_DDC8	(*(volatile uint_io8_t*)0xB71C0768)  /*@bfbba@*/
#define GPIO_DDCR14_DDC9	(*(volatile uint_io8_t*)0xB71C0769)  /*@bfbba@*/
#define GPIO_DDCR14_DDC10	(*(volatile uint_io8_t*)0xB71C076A)  /*@bfbba@*/
#define GPIO_DDCR14_DDC11	(*(volatile uint_io8_t*)0xB71C076B)  /*@bfbba@*/
#define GPIO_DDCR14_DDC12	(*(volatile uint_io8_t*)0xB71C076C)  /*@bfbba@*/
#define GPIO_DDCR14_DDC13	(*(volatile uint_io8_t*)0xB71C076D)  /*@bfbba@*/
#define GPIO_DDCR14_DDC14	(*(volatile uint_io8_t*)0xB71C076E)  /*@bfbba@*/
#define GPIO_DDCR14_DDC15	(*(volatile uint_io8_t*)0xB71C076F)  /*@bfbba@*/
#define GPIO_DDCR14_DDC16	(*(volatile uint_io8_t*)0xB71C0770)  /*@bfbba@*/
#define GPIO_DDCR14_DDC17	(*(volatile uint_io8_t*)0xB71C0771)  /*@bfbba@*/
#define GPIO_DDCR14_DDC18	(*(volatile uint_io8_t*)0xB71C0772)  /*@bfbba@*/
#define GPIO_DDCR14_DDC19	(*(volatile uint_io8_t*)0xB71C0773)  /*@bfbba@*/
#define GPIO_DDCR14_DDC20	(*(volatile uint_io8_t*)0xB71C0774)  /*@bfbba@*/
#define GPIO_DDCR14_DDC21	(*(volatile uint_io8_t*)0xB71C0775)  /*@bfbba@*/
#define GPIO_DDCR14_DDC22	(*(volatile uint_io8_t*)0xB71C0776)  /*@bfbba@*/
#define GPIO_DDCR14_DDC23	(*(volatile uint_io8_t*)0xB71C0777)  /*@bfbba@*/
#define GPIO_DDCR14_DDC24	(*(volatile uint_io8_t*)0xB71C0778)  /*@bfbba@*/
#define GPIO_DDCR14_DDC25	(*(volatile uint_io8_t*)0xB71C0779)  /*@bfbba@*/
#define GPIO_DDCR14_DDC26	(*(volatile uint_io8_t*)0xB71C077A)  /*@bfbba@*/
#define GPIO_DDCR14_DDC27	(*(volatile uint_io8_t*)0xB71C077B)  /*@bfbba@*/
#define GPIO_DDCR14_DDC28	(*(volatile uint_io8_t*)0xB71C077C)  /*@bfbba@*/
#define GPIO_DDCR14_DDC29	(*(volatile uint_io8_t*)0xB71C077D)  /*@bfbba@*/
#define GPIO_DDCR14_DDC30	(*(volatile uint_io8_t*)0xB71C077E)  /*@bfbba@*/
#define GPIO_DDCR14_DDC31	(*(volatile uint_io8_t*)0xB71C077F)  /*@bfbba@*/

#define GPIO_DDCR15	(GPIO.unDDCR15.u32Register)  /*@rg@*/
#define GPIO_DDCR15_DDC0	(*(volatile uint_io8_t*)0xB71C07E0)  /*@bfbba@*/
#define GPIO_DDCR15_DDC1	(*(volatile uint_io8_t*)0xB71C07E1)  /*@bfbba@*/
#define GPIO_DDCR15_DDC2	(*(volatile uint_io8_t*)0xB71C07E2)  /*@bfbba@*/
#define GPIO_DDCR15_DDC3	(*(volatile uint_io8_t*)0xB71C07E3)  /*@bfbba@*/
#define GPIO_DDCR15_DDC4	(*(volatile uint_io8_t*)0xB71C07E4)  /*@bfbba@*/
#define GPIO_DDCR15_DDC5	(*(volatile uint_io8_t*)0xB71C07E5)  /*@bfbba@*/
#define GPIO_DDCR15_DDC6	(*(volatile uint_io8_t*)0xB71C07E6)  /*@bfbba@*/
#define GPIO_DDCR15_DDC7	(*(volatile uint_io8_t*)0xB71C07E7)  /*@bfbba@*/
#define GPIO_DDCR15_DDC8	(*(volatile uint_io8_t*)0xB71C07E8)  /*@bfbba@*/
#define GPIO_DDCR15_DDC9	(*(volatile uint_io8_t*)0xB71C07E9)  /*@bfbba@*/
#define GPIO_DDCR15_DDC10	(*(volatile uint_io8_t*)0xB71C07EA)  /*@bfbba@*/
#define GPIO_DDCR15_DDC11	(*(volatile uint_io8_t*)0xB71C07EB)  /*@bfbba@*/
#define GPIO_DDCR15_DDC12	(*(volatile uint_io8_t*)0xB71C07EC)  /*@bfbba@*/
#define GPIO_DDCR15_DDC13	(*(volatile uint_io8_t*)0xB71C07ED)  /*@bfbba@*/
#define GPIO_DDCR15_DDC14	(*(volatile uint_io8_t*)0xB71C07EE)  /*@bfbba@*/
#define GPIO_DDCR15_DDC15	(*(volatile uint_io8_t*)0xB71C07EF)  /*@bfbba@*/
#define GPIO_DDCR15_DDC16	(*(volatile uint_io8_t*)0xB71C07F0)  /*@bfbba@*/
#define GPIO_DDCR15_DDC17	(*(volatile uint_io8_t*)0xB71C07F1)  /*@bfbba@*/
#define GPIO_DDCR15_DDC18	(*(volatile uint_io8_t*)0xB71C07F2)  /*@bfbba@*/
#define GPIO_DDCR15_DDC19	(*(volatile uint_io8_t*)0xB71C07F3)  /*@bfbba@*/
#define GPIO_DDCR15_DDC20	(*(volatile uint_io8_t*)0xB71C07F4)  /*@bfbba@*/
#define GPIO_DDCR15_DDC21	(*(volatile uint_io8_t*)0xB71C07F5)  /*@bfbba@*/
#define GPIO_DDCR15_DDC22	(*(volatile uint_io8_t*)0xB71C07F6)  /*@bfbba@*/
#define GPIO_DDCR15_DDC23	(*(volatile uint_io8_t*)0xB71C07F7)  /*@bfbba@*/
#define GPIO_DDCR15_DDC24	(*(volatile uint_io8_t*)0xB71C07F8)  /*@bfbba@*/
#define GPIO_DDCR15_DDC25	(*(volatile uint_io8_t*)0xB71C07F9)  /*@bfbba@*/
#define GPIO_DDCR15_DDC26	(*(volatile uint_io8_t*)0xB71C07FA)  /*@bfbba@*/
#define GPIO_DDCR15_DDC27	(*(volatile uint_io8_t*)0xB71C07FB)  /*@bfbba@*/
#define GPIO_DDCR15_DDC28	(*(volatile uint_io8_t*)0xB71C07FC)  /*@bfbba@*/
#define GPIO_DDCR15_DDC29	(*(volatile uint_io8_t*)0xB71C07FD)  /*@bfbba@*/
#define GPIO_DDCR15_DDC30	(*(volatile uint_io8_t*)0xB71C07FE)  /*@bfbba@*/
#define GPIO_DDCR15_DDC31	(*(volatile uint_io8_t*)0xB71C07FF)  /*@bfbba@*/

typedef struct stc_gpio_ddcrn_field{
    uint_io32_t		u1DDC0:1;
    uint_io32_t		u1DDC1:1;
    uint_io32_t		u1DDC2:1;
    uint_io32_t		u1DDC3:1;
    uint_io32_t		u1DDC4:1;
    uint_io32_t		u1DDC5:1;
    uint_io32_t		u1DDC6:1;
    uint_io32_t		u1DDC7:1;
    uint_io32_t		u1DDC8:1;
    uint_io32_t		u1DDC9:1;
    uint_io32_t		u1DDC10:1;
    uint_io32_t		u1DDC11:1;
    uint_io32_t		u1DDC12:1;
    uint_io32_t		u1DDC13:1;
    uint_io32_t		u1DDC14:1;
    uint_io32_t		u1DDC15:1;
    uint_io32_t		u1DDC16:1;
    uint_io32_t		u1DDC17:1;
    uint_io32_t		u1DDC18:1;
    uint_io32_t		u1DDC19:1;
    uint_io32_t		u1DDC20:1;
    uint_io32_t		u1DDC21:1;
    uint_io32_t		u1DDC22:1;
    uint_io32_t		u1DDC23:1;
    uint_io32_t		u1DDC24:1;
    uint_io32_t		u1DDC25:1;
    uint_io32_t		u1DDC26:1;
    uint_io32_t		u1DDC27:1;
    uint_io32_t		u1DDC28:1;
    uint_io32_t		u1DDC29:1;
    uint_io32_t		u1DDC30:1;
    uint_io32_t		u1DDC31:1;
}stc_gpio_ddcrn_field_t;

typedef union un_gpio_ddcrn{
    uint_io32_t		u32Register;
    stc_gpio_ddcrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_ddcrn_t;

/* PODR[0-15] */
#define GPIO_PODR0	(GPIO.unPODR0.u32Register)  /*@rg@*/
#define GPIO_PODR0_POD0	(*(volatile uint_io8_t*)0xB71C1000)  /*@bfbba@*/
#define GPIO_PODR0_POD1	(*(volatile uint_io8_t*)0xB71C1001)  /*@bfbba@*/
#define GPIO_PODR0_POD2	(*(volatile uint_io8_t*)0xB71C1002)  /*@bfbba@*/
#define GPIO_PODR0_POD3	(*(volatile uint_io8_t*)0xB71C1003)  /*@bfbba@*/
#define GPIO_PODR0_POD4	(*(volatile uint_io8_t*)0xB71C1004)  /*@bfbba@*/
#define GPIO_PODR0_POD5	(*(volatile uint_io8_t*)0xB71C1005)  /*@bfbba@*/
#define GPIO_PODR0_POD6	(*(volatile uint_io8_t*)0xB71C1006)  /*@bfbba@*/
#define GPIO_PODR0_POD7	(*(volatile uint_io8_t*)0xB71C1007)  /*@bfbba@*/
#define GPIO_PODR0_POD8	(*(volatile uint_io8_t*)0xB71C1008)  /*@bfbba@*/
#define GPIO_PODR0_POD9	(*(volatile uint_io8_t*)0xB71C1009)  /*@bfbba@*/
#define GPIO_PODR0_POD10	(*(volatile uint_io8_t*)0xB71C100A)  /*@bfbba@*/
#define GPIO_PODR0_POD11	(*(volatile uint_io8_t*)0xB71C100B)  /*@bfbba@*/
#define GPIO_PODR0_POD12	(*(volatile uint_io8_t*)0xB71C100C)  /*@bfbba@*/
#define GPIO_PODR0_POD13	(*(volatile uint_io8_t*)0xB71C100D)  /*@bfbba@*/
#define GPIO_PODR0_POD14	(*(volatile uint_io8_t*)0xB71C100E)  /*@bfbba@*/
#define GPIO_PODR0_POD15	(*(volatile uint_io8_t*)0xB71C100F)  /*@bfbba@*/
#define GPIO_PODR0_POD16	(*(volatile uint_io8_t*)0xB71C1010)  /*@bfbba@*/
#define GPIO_PODR0_POD17	(*(volatile uint_io8_t*)0xB71C1011)  /*@bfbba@*/
#define GPIO_PODR0_POD18	(*(volatile uint_io8_t*)0xB71C1012)  /*@bfbba@*/
#define GPIO_PODR0_POD19	(*(volatile uint_io8_t*)0xB71C1013)  /*@bfbba@*/
#define GPIO_PODR0_POD20	(*(volatile uint_io8_t*)0xB71C1014)  /*@bfbba@*/
#define GPIO_PODR0_POD21	(*(volatile uint_io8_t*)0xB71C1015)  /*@bfbba@*/
#define GPIO_PODR0_POD22	(*(volatile uint_io8_t*)0xB71C1016)  /*@bfbba@*/
#define GPIO_PODR0_POD23	(*(volatile uint_io8_t*)0xB71C1017)  /*@bfbba@*/
#define GPIO_PODR0_POD24	(*(volatile uint_io8_t*)0xB71C1018)  /*@bfbba@*/
#define GPIO_PODR0_POD25	(*(volatile uint_io8_t*)0xB71C1019)  /*@bfbba@*/
#define GPIO_PODR0_POD26	(*(volatile uint_io8_t*)0xB71C101A)  /*@bfbba@*/
#define GPIO_PODR0_POD27	(*(volatile uint_io8_t*)0xB71C101B)  /*@bfbba@*/
#define GPIO_PODR0_POD28	(*(volatile uint_io8_t*)0xB71C101C)  /*@bfbba@*/
#define GPIO_PODR0_POD29	(*(volatile uint_io8_t*)0xB71C101D)  /*@bfbba@*/
#define GPIO_PODR0_POD30	(*(volatile uint_io8_t*)0xB71C101E)  /*@bfbba@*/
#define GPIO_PODR0_POD31	(*(volatile uint_io8_t*)0xB71C101F)  /*@bfbba@*/

#define GPIO_PODR1	(GPIO.unPODR1.u32Register)  /*@rg@*/
#define GPIO_PODR1_POD0	(*(volatile uint_io8_t*)0xB71C1040)  /*@bfbba@*/
#define GPIO_PODR1_POD1	(*(volatile uint_io8_t*)0xB71C1041)  /*@bfbba@*/
#define GPIO_PODR1_POD2	(*(volatile uint_io8_t*)0xB71C1042)  /*@bfbba@*/
#define GPIO_PODR1_POD3	(*(volatile uint_io8_t*)0xB71C1043)  /*@bfbba@*/
#define GPIO_PODR1_POD4	(*(volatile uint_io8_t*)0xB71C1044)  /*@bfbba@*/
#define GPIO_PODR1_POD5	(*(volatile uint_io8_t*)0xB71C1045)  /*@bfbba@*/
#define GPIO_PODR1_POD6	(*(volatile uint_io8_t*)0xB71C1046)  /*@bfbba@*/
#define GPIO_PODR1_POD7	(*(volatile uint_io8_t*)0xB71C1047)  /*@bfbba@*/
#define GPIO_PODR1_POD8	(*(volatile uint_io8_t*)0xB71C1048)  /*@bfbba@*/
#define GPIO_PODR1_POD9	(*(volatile uint_io8_t*)0xB71C1049)  /*@bfbba@*/
#define GPIO_PODR1_POD10	(*(volatile uint_io8_t*)0xB71C104A)  /*@bfbba@*/
#define GPIO_PODR1_POD11	(*(volatile uint_io8_t*)0xB71C104B)  /*@bfbba@*/
#define GPIO_PODR1_POD12	(*(volatile uint_io8_t*)0xB71C104C)  /*@bfbba@*/
#define GPIO_PODR1_POD13	(*(volatile uint_io8_t*)0xB71C104D)  /*@bfbba@*/
#define GPIO_PODR1_POD14	(*(volatile uint_io8_t*)0xB71C104E)  /*@bfbba@*/
#define GPIO_PODR1_POD15	(*(volatile uint_io8_t*)0xB71C104F)  /*@bfbba@*/
#define GPIO_PODR1_POD16	(*(volatile uint_io8_t*)0xB71C1050)  /*@bfbba@*/
#define GPIO_PODR1_POD17	(*(volatile uint_io8_t*)0xB71C1051)  /*@bfbba@*/
#define GPIO_PODR1_POD18	(*(volatile uint_io8_t*)0xB71C1052)  /*@bfbba@*/
#define GPIO_PODR1_POD19	(*(volatile uint_io8_t*)0xB71C1053)  /*@bfbba@*/
#define GPIO_PODR1_POD20	(*(volatile uint_io8_t*)0xB71C1054)  /*@bfbba@*/
#define GPIO_PODR1_POD21	(*(volatile uint_io8_t*)0xB71C1055)  /*@bfbba@*/
#define GPIO_PODR1_POD22	(*(volatile uint_io8_t*)0xB71C1056)  /*@bfbba@*/
#define GPIO_PODR1_POD23	(*(volatile uint_io8_t*)0xB71C1057)  /*@bfbba@*/
#define GPIO_PODR1_POD24	(*(volatile uint_io8_t*)0xB71C1058)  /*@bfbba@*/
#define GPIO_PODR1_POD25	(*(volatile uint_io8_t*)0xB71C1059)  /*@bfbba@*/
#define GPIO_PODR1_POD26	(*(volatile uint_io8_t*)0xB71C105A)  /*@bfbba@*/
#define GPIO_PODR1_POD27	(*(volatile uint_io8_t*)0xB71C105B)  /*@bfbba@*/
#define GPIO_PODR1_POD28	(*(volatile uint_io8_t*)0xB71C105C)  /*@bfbba@*/
#define GPIO_PODR1_POD29	(*(volatile uint_io8_t*)0xB71C105D)  /*@bfbba@*/
#define GPIO_PODR1_POD30	(*(volatile uint_io8_t*)0xB71C105E)  /*@bfbba@*/
#define GPIO_PODR1_POD31	(*(volatile uint_io8_t*)0xB71C105F)  /*@bfbba@*/

#define GPIO_PODR2	(GPIO.unPODR2.u32Register)  /*@rg@*/
#define GPIO_PODR2_POD0	(*(volatile uint_io8_t*)0xB71C1080)  /*@bfbba@*/
#define GPIO_PODR2_POD1	(*(volatile uint_io8_t*)0xB71C1081)  /*@bfbba@*/
#define GPIO_PODR2_POD2	(*(volatile uint_io8_t*)0xB71C1082)  /*@bfbba@*/
#define GPIO_PODR2_POD3	(*(volatile uint_io8_t*)0xB71C1083)  /*@bfbba@*/
#define GPIO_PODR2_POD4	(*(volatile uint_io8_t*)0xB71C1084)  /*@bfbba@*/
#define GPIO_PODR2_POD5	(*(volatile uint_io8_t*)0xB71C1085)  /*@bfbba@*/
#define GPIO_PODR2_POD6	(*(volatile uint_io8_t*)0xB71C1086)  /*@bfbba@*/
#define GPIO_PODR2_POD7	(*(volatile uint_io8_t*)0xB71C1087)  /*@bfbba@*/
#define GPIO_PODR2_POD8	(*(volatile uint_io8_t*)0xB71C1088)  /*@bfbba@*/
#define GPIO_PODR2_POD9	(*(volatile uint_io8_t*)0xB71C1089)  /*@bfbba@*/
#define GPIO_PODR2_POD10	(*(volatile uint_io8_t*)0xB71C108A)  /*@bfbba@*/
#define GPIO_PODR2_POD11	(*(volatile uint_io8_t*)0xB71C108B)  /*@bfbba@*/
#define GPIO_PODR2_POD12	(*(volatile uint_io8_t*)0xB71C108C)  /*@bfbba@*/
#define GPIO_PODR2_POD13	(*(volatile uint_io8_t*)0xB71C108D)  /*@bfbba@*/
#define GPIO_PODR2_POD14	(*(volatile uint_io8_t*)0xB71C108E)  /*@bfbba@*/
#define GPIO_PODR2_POD15	(*(volatile uint_io8_t*)0xB71C108F)  /*@bfbba@*/
#define GPIO_PODR2_POD16	(*(volatile uint_io8_t*)0xB71C1090)  /*@bfbba@*/
#define GPIO_PODR2_POD17	(*(volatile uint_io8_t*)0xB71C1091)  /*@bfbba@*/
#define GPIO_PODR2_POD18	(*(volatile uint_io8_t*)0xB71C1092)  /*@bfbba@*/
#define GPIO_PODR2_POD19	(*(volatile uint_io8_t*)0xB71C1093)  /*@bfbba@*/
#define GPIO_PODR2_POD20	(*(volatile uint_io8_t*)0xB71C1094)  /*@bfbba@*/
#define GPIO_PODR2_POD21	(*(volatile uint_io8_t*)0xB71C1095)  /*@bfbba@*/
#define GPIO_PODR2_POD22	(*(volatile uint_io8_t*)0xB71C1096)  /*@bfbba@*/
#define GPIO_PODR2_POD23	(*(volatile uint_io8_t*)0xB71C1097)  /*@bfbba@*/
#define GPIO_PODR2_POD24	(*(volatile uint_io8_t*)0xB71C1098)  /*@bfbba@*/
#define GPIO_PODR2_POD25	(*(volatile uint_io8_t*)0xB71C1099)  /*@bfbba@*/
#define GPIO_PODR2_POD26	(*(volatile uint_io8_t*)0xB71C109A)  /*@bfbba@*/
#define GPIO_PODR2_POD27	(*(volatile uint_io8_t*)0xB71C109B)  /*@bfbba@*/
#define GPIO_PODR2_POD28	(*(volatile uint_io8_t*)0xB71C109C)  /*@bfbba@*/
#define GPIO_PODR2_POD29	(*(volatile uint_io8_t*)0xB71C109D)  /*@bfbba@*/
#define GPIO_PODR2_POD30	(*(volatile uint_io8_t*)0xB71C109E)  /*@bfbba@*/
#define GPIO_PODR2_POD31	(*(volatile uint_io8_t*)0xB71C109F)  /*@bfbba@*/

#define GPIO_PODR3	(GPIO.unPODR3.u32Register)  /*@rg@*/
#define GPIO_PODR3_POD0	(*(volatile uint_io8_t*)0xB71C10C0)  /*@bfbba@*/
#define GPIO_PODR3_POD1	(*(volatile uint_io8_t*)0xB71C10C1)  /*@bfbba@*/
#define GPIO_PODR3_POD2	(*(volatile uint_io8_t*)0xB71C10C2)  /*@bfbba@*/
#define GPIO_PODR3_POD3	(*(volatile uint_io8_t*)0xB71C10C3)  /*@bfbba@*/
#define GPIO_PODR3_POD4	(*(volatile uint_io8_t*)0xB71C10C4)  /*@bfbba@*/
#define GPIO_PODR3_POD5	(*(volatile uint_io8_t*)0xB71C10C5)  /*@bfbba@*/
#define GPIO_PODR3_POD6	(*(volatile uint_io8_t*)0xB71C10C6)  /*@bfbba@*/
#define GPIO_PODR3_POD7	(*(volatile uint_io8_t*)0xB71C10C7)  /*@bfbba@*/
#define GPIO_PODR3_POD8	(*(volatile uint_io8_t*)0xB71C10C8)  /*@bfbba@*/
#define GPIO_PODR3_POD9	(*(volatile uint_io8_t*)0xB71C10C9)  /*@bfbba@*/
#define GPIO_PODR3_POD10	(*(volatile uint_io8_t*)0xB71C10CA)  /*@bfbba@*/
#define GPIO_PODR3_POD11	(*(volatile uint_io8_t*)0xB71C10CB)  /*@bfbba@*/
#define GPIO_PODR3_POD12	(*(volatile uint_io8_t*)0xB71C10CC)  /*@bfbba@*/
#define GPIO_PODR3_POD13	(*(volatile uint_io8_t*)0xB71C10CD)  /*@bfbba@*/
#define GPIO_PODR3_POD14	(*(volatile uint_io8_t*)0xB71C10CE)  /*@bfbba@*/
#define GPIO_PODR3_POD15	(*(volatile uint_io8_t*)0xB71C10CF)  /*@bfbba@*/
#define GPIO_PODR3_POD16	(*(volatile uint_io8_t*)0xB71C10D0)  /*@bfbba@*/
#define GPIO_PODR3_POD17	(*(volatile uint_io8_t*)0xB71C10D1)  /*@bfbba@*/
#define GPIO_PODR3_POD18	(*(volatile uint_io8_t*)0xB71C10D2)  /*@bfbba@*/
#define GPIO_PODR3_POD19	(*(volatile uint_io8_t*)0xB71C10D3)  /*@bfbba@*/
#define GPIO_PODR3_POD20	(*(volatile uint_io8_t*)0xB71C10D4)  /*@bfbba@*/
#define GPIO_PODR3_POD21	(*(volatile uint_io8_t*)0xB71C10D5)  /*@bfbba@*/
#define GPIO_PODR3_POD22	(*(volatile uint_io8_t*)0xB71C10D6)  /*@bfbba@*/
#define GPIO_PODR3_POD23	(*(volatile uint_io8_t*)0xB71C10D7)  /*@bfbba@*/
#define GPIO_PODR3_POD24	(*(volatile uint_io8_t*)0xB71C10D8)  /*@bfbba@*/
#define GPIO_PODR3_POD25	(*(volatile uint_io8_t*)0xB71C10D9)  /*@bfbba@*/
#define GPIO_PODR3_POD26	(*(volatile uint_io8_t*)0xB71C10DA)  /*@bfbba@*/
#define GPIO_PODR3_POD27	(*(volatile uint_io8_t*)0xB71C10DB)  /*@bfbba@*/
#define GPIO_PODR3_POD28	(*(volatile uint_io8_t*)0xB71C10DC)  /*@bfbba@*/
#define GPIO_PODR3_POD29	(*(volatile uint_io8_t*)0xB71C10DD)  /*@bfbba@*/
#define GPIO_PODR3_POD30	(*(volatile uint_io8_t*)0xB71C10DE)  /*@bfbba@*/
#define GPIO_PODR3_POD31	(*(volatile uint_io8_t*)0xB71C10DF)  /*@bfbba@*/

#define GPIO_PODR4	(GPIO.unPODR4.u32Register)  /*@rg@*/
#define GPIO_PODR4_POD0	(*(volatile uint_io8_t*)0xB71C1100)  /*@bfbba@*/
#define GPIO_PODR4_POD1	(*(volatile uint_io8_t*)0xB71C1101)  /*@bfbba@*/
#define GPIO_PODR4_POD2	(*(volatile uint_io8_t*)0xB71C1102)  /*@bfbba@*/
#define GPIO_PODR4_POD3	(*(volatile uint_io8_t*)0xB71C1103)  /*@bfbba@*/
#define GPIO_PODR4_POD4	(*(volatile uint_io8_t*)0xB71C1104)  /*@bfbba@*/
#define GPIO_PODR4_POD5	(*(volatile uint_io8_t*)0xB71C1105)  /*@bfbba@*/
#define GPIO_PODR4_POD6	(*(volatile uint_io8_t*)0xB71C1106)  /*@bfbba@*/
#define GPIO_PODR4_POD7	(*(volatile uint_io8_t*)0xB71C1107)  /*@bfbba@*/
#define GPIO_PODR4_POD8	(*(volatile uint_io8_t*)0xB71C1108)  /*@bfbba@*/
#define GPIO_PODR4_POD9	(*(volatile uint_io8_t*)0xB71C1109)  /*@bfbba@*/
#define GPIO_PODR4_POD10	(*(volatile uint_io8_t*)0xB71C110A)  /*@bfbba@*/
#define GPIO_PODR4_POD11	(*(volatile uint_io8_t*)0xB71C110B)  /*@bfbba@*/
#define GPIO_PODR4_POD12	(*(volatile uint_io8_t*)0xB71C110C)  /*@bfbba@*/
#define GPIO_PODR4_POD13	(*(volatile uint_io8_t*)0xB71C110D)  /*@bfbba@*/
#define GPIO_PODR4_POD14	(*(volatile uint_io8_t*)0xB71C110E)  /*@bfbba@*/
#define GPIO_PODR4_POD15	(*(volatile uint_io8_t*)0xB71C110F)  /*@bfbba@*/
#define GPIO_PODR4_POD16	(*(volatile uint_io8_t*)0xB71C1110)  /*@bfbba@*/
#define GPIO_PODR4_POD17	(*(volatile uint_io8_t*)0xB71C1111)  /*@bfbba@*/
#define GPIO_PODR4_POD18	(*(volatile uint_io8_t*)0xB71C1112)  /*@bfbba@*/
#define GPIO_PODR4_POD19	(*(volatile uint_io8_t*)0xB71C1113)  /*@bfbba@*/
#define GPIO_PODR4_POD20	(*(volatile uint_io8_t*)0xB71C1114)  /*@bfbba@*/
#define GPIO_PODR4_POD21	(*(volatile uint_io8_t*)0xB71C1115)  /*@bfbba@*/
#define GPIO_PODR4_POD22	(*(volatile uint_io8_t*)0xB71C1116)  /*@bfbba@*/
#define GPIO_PODR4_POD23	(*(volatile uint_io8_t*)0xB71C1117)  /*@bfbba@*/
#define GPIO_PODR4_POD24	(*(volatile uint_io8_t*)0xB71C1118)  /*@bfbba@*/
#define GPIO_PODR4_POD25	(*(volatile uint_io8_t*)0xB71C1119)  /*@bfbba@*/
#define GPIO_PODR4_POD26	(*(volatile uint_io8_t*)0xB71C111A)  /*@bfbba@*/
#define GPIO_PODR4_POD27	(*(volatile uint_io8_t*)0xB71C111B)  /*@bfbba@*/
#define GPIO_PODR4_POD28	(*(volatile uint_io8_t*)0xB71C111C)  /*@bfbba@*/
#define GPIO_PODR4_POD29	(*(volatile uint_io8_t*)0xB71C111D)  /*@bfbba@*/
#define GPIO_PODR4_POD30	(*(volatile uint_io8_t*)0xB71C111E)  /*@bfbba@*/
#define GPIO_PODR4_POD31	(*(volatile uint_io8_t*)0xB71C111F)  /*@bfbba@*/

#define GPIO_PODR5	(GPIO.unPODR5.u32Register)  /*@rg@*/
#define GPIO_PODR5_POD0	(*(volatile uint_io8_t*)0xB71C1140)  /*@bfbba@*/
#define GPIO_PODR5_POD1	(*(volatile uint_io8_t*)0xB71C1141)  /*@bfbba@*/
#define GPIO_PODR5_POD2	(*(volatile uint_io8_t*)0xB71C1142)  /*@bfbba@*/
#define GPIO_PODR5_POD3	(*(volatile uint_io8_t*)0xB71C1143)  /*@bfbba@*/
#define GPIO_PODR5_POD4	(*(volatile uint_io8_t*)0xB71C1144)  /*@bfbba@*/
#define GPIO_PODR5_POD5	(*(volatile uint_io8_t*)0xB71C1145)  /*@bfbba@*/
#define GPIO_PODR5_POD6	(*(volatile uint_io8_t*)0xB71C1146)  /*@bfbba@*/
#define GPIO_PODR5_POD7	(*(volatile uint_io8_t*)0xB71C1147)  /*@bfbba@*/
#define GPIO_PODR5_POD8	(*(volatile uint_io8_t*)0xB71C1148)  /*@bfbba@*/
#define GPIO_PODR5_POD9	(*(volatile uint_io8_t*)0xB71C1149)  /*@bfbba@*/
#define GPIO_PODR5_POD10	(*(volatile uint_io8_t*)0xB71C114A)  /*@bfbba@*/
#define GPIO_PODR5_POD11	(*(volatile uint_io8_t*)0xB71C114B)  /*@bfbba@*/
#define GPIO_PODR5_POD12	(*(volatile uint_io8_t*)0xB71C114C)  /*@bfbba@*/
#define GPIO_PODR5_POD13	(*(volatile uint_io8_t*)0xB71C114D)  /*@bfbba@*/
#define GPIO_PODR5_POD14	(*(volatile uint_io8_t*)0xB71C114E)  /*@bfbba@*/
#define GPIO_PODR5_POD15	(*(volatile uint_io8_t*)0xB71C114F)  /*@bfbba@*/
#define GPIO_PODR5_POD16	(*(volatile uint_io8_t*)0xB71C1150)  /*@bfbba@*/
#define GPIO_PODR5_POD17	(*(volatile uint_io8_t*)0xB71C1151)  /*@bfbba@*/
#define GPIO_PODR5_POD18	(*(volatile uint_io8_t*)0xB71C1152)  /*@bfbba@*/
#define GPIO_PODR5_POD19	(*(volatile uint_io8_t*)0xB71C1153)  /*@bfbba@*/
#define GPIO_PODR5_POD20	(*(volatile uint_io8_t*)0xB71C1154)  /*@bfbba@*/
#define GPIO_PODR5_POD21	(*(volatile uint_io8_t*)0xB71C1155)  /*@bfbba@*/
#define GPIO_PODR5_POD22	(*(volatile uint_io8_t*)0xB71C1156)  /*@bfbba@*/
#define GPIO_PODR5_POD23	(*(volatile uint_io8_t*)0xB71C1157)  /*@bfbba@*/
#define GPIO_PODR5_POD24	(*(volatile uint_io8_t*)0xB71C1158)  /*@bfbba@*/
#define GPIO_PODR5_POD25	(*(volatile uint_io8_t*)0xB71C1159)  /*@bfbba@*/
#define GPIO_PODR5_POD26	(*(volatile uint_io8_t*)0xB71C115A)  /*@bfbba@*/
#define GPIO_PODR5_POD27	(*(volatile uint_io8_t*)0xB71C115B)  /*@bfbba@*/
#define GPIO_PODR5_POD28	(*(volatile uint_io8_t*)0xB71C115C)  /*@bfbba@*/
#define GPIO_PODR5_POD29	(*(volatile uint_io8_t*)0xB71C115D)  /*@bfbba@*/
#define GPIO_PODR5_POD30	(*(volatile uint_io8_t*)0xB71C115E)  /*@bfbba@*/
#define GPIO_PODR5_POD31	(*(volatile uint_io8_t*)0xB71C115F)  /*@bfbba@*/

#define GPIO_PODR6	(GPIO.unPODR6.u32Register)  /*@rg@*/
#define GPIO_PODR6_POD0	(*(volatile uint_io8_t*)0xB71C1180)  /*@bfbba@*/
#define GPIO_PODR6_POD1	(*(volatile uint_io8_t*)0xB71C1181)  /*@bfbba@*/
#define GPIO_PODR6_POD2	(*(volatile uint_io8_t*)0xB71C1182)  /*@bfbba@*/
#define GPIO_PODR6_POD3	(*(volatile uint_io8_t*)0xB71C1183)  /*@bfbba@*/
#define GPIO_PODR6_POD4	(*(volatile uint_io8_t*)0xB71C1184)  /*@bfbba@*/
#define GPIO_PODR6_POD5	(*(volatile uint_io8_t*)0xB71C1185)  /*@bfbba@*/
#define GPIO_PODR6_POD6	(*(volatile uint_io8_t*)0xB71C1186)  /*@bfbba@*/
#define GPIO_PODR6_POD7	(*(volatile uint_io8_t*)0xB71C1187)  /*@bfbba@*/
#define GPIO_PODR6_POD8	(*(volatile uint_io8_t*)0xB71C1188)  /*@bfbba@*/
#define GPIO_PODR6_POD9	(*(volatile uint_io8_t*)0xB71C1189)  /*@bfbba@*/
#define GPIO_PODR6_POD10	(*(volatile uint_io8_t*)0xB71C118A)  /*@bfbba@*/
#define GPIO_PODR6_POD11	(*(volatile uint_io8_t*)0xB71C118B)  /*@bfbba@*/
#define GPIO_PODR6_POD12	(*(volatile uint_io8_t*)0xB71C118C)  /*@bfbba@*/
#define GPIO_PODR6_POD13	(*(volatile uint_io8_t*)0xB71C118D)  /*@bfbba@*/
#define GPIO_PODR6_POD14	(*(volatile uint_io8_t*)0xB71C118E)  /*@bfbba@*/
#define GPIO_PODR6_POD15	(*(volatile uint_io8_t*)0xB71C118F)  /*@bfbba@*/
#define GPIO_PODR6_POD16	(*(volatile uint_io8_t*)0xB71C1190)  /*@bfbba@*/
#define GPIO_PODR6_POD17	(*(volatile uint_io8_t*)0xB71C1191)  /*@bfbba@*/
#define GPIO_PODR6_POD18	(*(volatile uint_io8_t*)0xB71C1192)  /*@bfbba@*/
#define GPIO_PODR6_POD19	(*(volatile uint_io8_t*)0xB71C1193)  /*@bfbba@*/
#define GPIO_PODR6_POD20	(*(volatile uint_io8_t*)0xB71C1194)  /*@bfbba@*/
#define GPIO_PODR6_POD21	(*(volatile uint_io8_t*)0xB71C1195)  /*@bfbba@*/
#define GPIO_PODR6_POD22	(*(volatile uint_io8_t*)0xB71C1196)  /*@bfbba@*/
#define GPIO_PODR6_POD23	(*(volatile uint_io8_t*)0xB71C1197)  /*@bfbba@*/
#define GPIO_PODR6_POD24	(*(volatile uint_io8_t*)0xB71C1198)  /*@bfbba@*/
#define GPIO_PODR6_POD25	(*(volatile uint_io8_t*)0xB71C1199)  /*@bfbba@*/
#define GPIO_PODR6_POD26	(*(volatile uint_io8_t*)0xB71C119A)  /*@bfbba@*/
#define GPIO_PODR6_POD27	(*(volatile uint_io8_t*)0xB71C119B)  /*@bfbba@*/
#define GPIO_PODR6_POD28	(*(volatile uint_io8_t*)0xB71C119C)  /*@bfbba@*/
#define GPIO_PODR6_POD29	(*(volatile uint_io8_t*)0xB71C119D)  /*@bfbba@*/
#define GPIO_PODR6_POD30	(*(volatile uint_io8_t*)0xB71C119E)  /*@bfbba@*/
#define GPIO_PODR6_POD31	(*(volatile uint_io8_t*)0xB71C119F)  /*@bfbba@*/

#define GPIO_PODR7	(GPIO.unPODR7.u32Register)  /*@rg@*/
#define GPIO_PODR7_POD0	(*(volatile uint_io8_t*)0xB71C11C0)  /*@bfbba@*/
#define GPIO_PODR7_POD1	(*(volatile uint_io8_t*)0xB71C11C1)  /*@bfbba@*/
#define GPIO_PODR7_POD2	(*(volatile uint_io8_t*)0xB71C11C2)  /*@bfbba@*/
#define GPIO_PODR7_POD3	(*(volatile uint_io8_t*)0xB71C11C3)  /*@bfbba@*/
#define GPIO_PODR7_POD4	(*(volatile uint_io8_t*)0xB71C11C4)  /*@bfbba@*/
#define GPIO_PODR7_POD5	(*(volatile uint_io8_t*)0xB71C11C5)  /*@bfbba@*/
#define GPIO_PODR7_POD6	(*(volatile uint_io8_t*)0xB71C11C6)  /*@bfbba@*/
#define GPIO_PODR7_POD7	(*(volatile uint_io8_t*)0xB71C11C7)  /*@bfbba@*/
#define GPIO_PODR7_POD8	(*(volatile uint_io8_t*)0xB71C11C8)  /*@bfbba@*/
#define GPIO_PODR7_POD9	(*(volatile uint_io8_t*)0xB71C11C9)  /*@bfbba@*/
#define GPIO_PODR7_POD10	(*(volatile uint_io8_t*)0xB71C11CA)  /*@bfbba@*/
#define GPIO_PODR7_POD11	(*(volatile uint_io8_t*)0xB71C11CB)  /*@bfbba@*/
#define GPIO_PODR7_POD12	(*(volatile uint_io8_t*)0xB71C11CC)  /*@bfbba@*/
#define GPIO_PODR7_POD13	(*(volatile uint_io8_t*)0xB71C11CD)  /*@bfbba@*/
#define GPIO_PODR7_POD14	(*(volatile uint_io8_t*)0xB71C11CE)  /*@bfbba@*/
#define GPIO_PODR7_POD15	(*(volatile uint_io8_t*)0xB71C11CF)  /*@bfbba@*/
#define GPIO_PODR7_POD16	(*(volatile uint_io8_t*)0xB71C11D0)  /*@bfbba@*/
#define GPIO_PODR7_POD17	(*(volatile uint_io8_t*)0xB71C11D1)  /*@bfbba@*/
#define GPIO_PODR7_POD18	(*(volatile uint_io8_t*)0xB71C11D2)  /*@bfbba@*/
#define GPIO_PODR7_POD19	(*(volatile uint_io8_t*)0xB71C11D3)  /*@bfbba@*/
#define GPIO_PODR7_POD20	(*(volatile uint_io8_t*)0xB71C11D4)  /*@bfbba@*/
#define GPIO_PODR7_POD21	(*(volatile uint_io8_t*)0xB71C11D5)  /*@bfbba@*/
#define GPIO_PODR7_POD22	(*(volatile uint_io8_t*)0xB71C11D6)  /*@bfbba@*/
#define GPIO_PODR7_POD23	(*(volatile uint_io8_t*)0xB71C11D7)  /*@bfbba@*/
#define GPIO_PODR7_POD24	(*(volatile uint_io8_t*)0xB71C11D8)  /*@bfbba@*/
#define GPIO_PODR7_POD25	(*(volatile uint_io8_t*)0xB71C11D9)  /*@bfbba@*/
#define GPIO_PODR7_POD26	(*(volatile uint_io8_t*)0xB71C11DA)  /*@bfbba@*/
#define GPIO_PODR7_POD27	(*(volatile uint_io8_t*)0xB71C11DB)  /*@bfbba@*/
#define GPIO_PODR7_POD28	(*(volatile uint_io8_t*)0xB71C11DC)  /*@bfbba@*/
#define GPIO_PODR7_POD29	(*(volatile uint_io8_t*)0xB71C11DD)  /*@bfbba@*/
#define GPIO_PODR7_POD30	(*(volatile uint_io8_t*)0xB71C11DE)  /*@bfbba@*/
#define GPIO_PODR7_POD31	(*(volatile uint_io8_t*)0xB71C11DF)  /*@bfbba@*/

#define GPIO_PODR8	(GPIO.unPODR8.u32Register)  /*@rg@*/
#define GPIO_PODR8_POD0	(*(volatile uint_io8_t*)0xB71C1200)  /*@bfbba@*/
#define GPIO_PODR8_POD1	(*(volatile uint_io8_t*)0xB71C1201)  /*@bfbba@*/
#define GPIO_PODR8_POD2	(*(volatile uint_io8_t*)0xB71C1202)  /*@bfbba@*/
#define GPIO_PODR8_POD3	(*(volatile uint_io8_t*)0xB71C1203)  /*@bfbba@*/
#define GPIO_PODR8_POD4	(*(volatile uint_io8_t*)0xB71C1204)  /*@bfbba@*/
#define GPIO_PODR8_POD5	(*(volatile uint_io8_t*)0xB71C1205)  /*@bfbba@*/
#define GPIO_PODR8_POD6	(*(volatile uint_io8_t*)0xB71C1206)  /*@bfbba@*/
#define GPIO_PODR8_POD7	(*(volatile uint_io8_t*)0xB71C1207)  /*@bfbba@*/
#define GPIO_PODR8_POD8	(*(volatile uint_io8_t*)0xB71C1208)  /*@bfbba@*/
#define GPIO_PODR8_POD9	(*(volatile uint_io8_t*)0xB71C1209)  /*@bfbba@*/
#define GPIO_PODR8_POD10	(*(volatile uint_io8_t*)0xB71C120A)  /*@bfbba@*/
#define GPIO_PODR8_POD11	(*(volatile uint_io8_t*)0xB71C120B)  /*@bfbba@*/
#define GPIO_PODR8_POD12	(*(volatile uint_io8_t*)0xB71C120C)  /*@bfbba@*/
#define GPIO_PODR8_POD13	(*(volatile uint_io8_t*)0xB71C120D)  /*@bfbba@*/
#define GPIO_PODR8_POD14	(*(volatile uint_io8_t*)0xB71C120E)  /*@bfbba@*/
#define GPIO_PODR8_POD15	(*(volatile uint_io8_t*)0xB71C120F)  /*@bfbba@*/
#define GPIO_PODR8_POD16	(*(volatile uint_io8_t*)0xB71C1210)  /*@bfbba@*/
#define GPIO_PODR8_POD17	(*(volatile uint_io8_t*)0xB71C1211)  /*@bfbba@*/
#define GPIO_PODR8_POD18	(*(volatile uint_io8_t*)0xB71C1212)  /*@bfbba@*/
#define GPIO_PODR8_POD19	(*(volatile uint_io8_t*)0xB71C1213)  /*@bfbba@*/
#define GPIO_PODR8_POD20	(*(volatile uint_io8_t*)0xB71C1214)  /*@bfbba@*/
#define GPIO_PODR8_POD21	(*(volatile uint_io8_t*)0xB71C1215)  /*@bfbba@*/
#define GPIO_PODR8_POD22	(*(volatile uint_io8_t*)0xB71C1216)  /*@bfbba@*/
#define GPIO_PODR8_POD23	(*(volatile uint_io8_t*)0xB71C1217)  /*@bfbba@*/
#define GPIO_PODR8_POD24	(*(volatile uint_io8_t*)0xB71C1218)  /*@bfbba@*/
#define GPIO_PODR8_POD25	(*(volatile uint_io8_t*)0xB71C1219)  /*@bfbba@*/
#define GPIO_PODR8_POD26	(*(volatile uint_io8_t*)0xB71C121A)  /*@bfbba@*/
#define GPIO_PODR8_POD27	(*(volatile uint_io8_t*)0xB71C121B)  /*@bfbba@*/
#define GPIO_PODR8_POD28	(*(volatile uint_io8_t*)0xB71C121C)  /*@bfbba@*/
#define GPIO_PODR8_POD29	(*(volatile uint_io8_t*)0xB71C121D)  /*@bfbba@*/
#define GPIO_PODR8_POD30	(*(volatile uint_io8_t*)0xB71C121E)  /*@bfbba@*/
#define GPIO_PODR8_POD31	(*(volatile uint_io8_t*)0xB71C121F)  /*@bfbba@*/

#define GPIO_PODR9	(GPIO.unPODR9.u32Register)  /*@rg@*/
#define GPIO_PODR9_POD0	(*(volatile uint_io8_t*)0xB71C1240)  /*@bfbba@*/
#define GPIO_PODR9_POD1	(*(volatile uint_io8_t*)0xB71C1241)  /*@bfbba@*/
#define GPIO_PODR9_POD2	(*(volatile uint_io8_t*)0xB71C1242)  /*@bfbba@*/
#define GPIO_PODR9_POD3	(*(volatile uint_io8_t*)0xB71C1243)  /*@bfbba@*/
#define GPIO_PODR9_POD4	(*(volatile uint_io8_t*)0xB71C1244)  /*@bfbba@*/
#define GPIO_PODR9_POD5	(*(volatile uint_io8_t*)0xB71C1245)  /*@bfbba@*/
#define GPIO_PODR9_POD6	(*(volatile uint_io8_t*)0xB71C1246)  /*@bfbba@*/
#define GPIO_PODR9_POD7	(*(volatile uint_io8_t*)0xB71C1247)  /*@bfbba@*/
#define GPIO_PODR9_POD8	(*(volatile uint_io8_t*)0xB71C1248)  /*@bfbba@*/
#define GPIO_PODR9_POD9	(*(volatile uint_io8_t*)0xB71C1249)  /*@bfbba@*/
#define GPIO_PODR9_POD10	(*(volatile uint_io8_t*)0xB71C124A)  /*@bfbba@*/
#define GPIO_PODR9_POD11	(*(volatile uint_io8_t*)0xB71C124B)  /*@bfbba@*/
#define GPIO_PODR9_POD12	(*(volatile uint_io8_t*)0xB71C124C)  /*@bfbba@*/
#define GPIO_PODR9_POD13	(*(volatile uint_io8_t*)0xB71C124D)  /*@bfbba@*/
#define GPIO_PODR9_POD14	(*(volatile uint_io8_t*)0xB71C124E)  /*@bfbba@*/
#define GPIO_PODR9_POD15	(*(volatile uint_io8_t*)0xB71C124F)  /*@bfbba@*/
#define GPIO_PODR9_POD16	(*(volatile uint_io8_t*)0xB71C1250)  /*@bfbba@*/
#define GPIO_PODR9_POD17	(*(volatile uint_io8_t*)0xB71C1251)  /*@bfbba@*/
#define GPIO_PODR9_POD18	(*(volatile uint_io8_t*)0xB71C1252)  /*@bfbba@*/
#define GPIO_PODR9_POD19	(*(volatile uint_io8_t*)0xB71C1253)  /*@bfbba@*/
#define GPIO_PODR9_POD20	(*(volatile uint_io8_t*)0xB71C1254)  /*@bfbba@*/
#define GPIO_PODR9_POD21	(*(volatile uint_io8_t*)0xB71C1255)  /*@bfbba@*/
#define GPIO_PODR9_POD22	(*(volatile uint_io8_t*)0xB71C1256)  /*@bfbba@*/
#define GPIO_PODR9_POD23	(*(volatile uint_io8_t*)0xB71C1257)  /*@bfbba@*/
#define GPIO_PODR9_POD24	(*(volatile uint_io8_t*)0xB71C1258)  /*@bfbba@*/
#define GPIO_PODR9_POD25	(*(volatile uint_io8_t*)0xB71C1259)  /*@bfbba@*/
#define GPIO_PODR9_POD26	(*(volatile uint_io8_t*)0xB71C125A)  /*@bfbba@*/
#define GPIO_PODR9_POD27	(*(volatile uint_io8_t*)0xB71C125B)  /*@bfbba@*/
#define GPIO_PODR9_POD28	(*(volatile uint_io8_t*)0xB71C125C)  /*@bfbba@*/
#define GPIO_PODR9_POD29	(*(volatile uint_io8_t*)0xB71C125D)  /*@bfbba@*/
#define GPIO_PODR9_POD30	(*(volatile uint_io8_t*)0xB71C125E)  /*@bfbba@*/
#define GPIO_PODR9_POD31	(*(volatile uint_io8_t*)0xB71C125F)  /*@bfbba@*/

#define GPIO_PODR10	(GPIO.unPODR10.u32Register)  /*@rg@*/
#define GPIO_PODR10_POD0	(*(volatile uint_io8_t*)0xB71C1280)  /*@bfbba@*/
#define GPIO_PODR10_POD1	(*(volatile uint_io8_t*)0xB71C1281)  /*@bfbba@*/
#define GPIO_PODR10_POD2	(*(volatile uint_io8_t*)0xB71C1282)  /*@bfbba@*/
#define GPIO_PODR10_POD3	(*(volatile uint_io8_t*)0xB71C1283)  /*@bfbba@*/
#define GPIO_PODR10_POD4	(*(volatile uint_io8_t*)0xB71C1284)  /*@bfbba@*/
#define GPIO_PODR10_POD5	(*(volatile uint_io8_t*)0xB71C1285)  /*@bfbba@*/
#define GPIO_PODR10_POD6	(*(volatile uint_io8_t*)0xB71C1286)  /*@bfbba@*/
#define GPIO_PODR10_POD7	(*(volatile uint_io8_t*)0xB71C1287)  /*@bfbba@*/
#define GPIO_PODR10_POD8	(*(volatile uint_io8_t*)0xB71C1288)  /*@bfbba@*/
#define GPIO_PODR10_POD9	(*(volatile uint_io8_t*)0xB71C1289)  /*@bfbba@*/
#define GPIO_PODR10_POD10	(*(volatile uint_io8_t*)0xB71C128A)  /*@bfbba@*/
#define GPIO_PODR10_POD11	(*(volatile uint_io8_t*)0xB71C128B)  /*@bfbba@*/
#define GPIO_PODR10_POD12	(*(volatile uint_io8_t*)0xB71C128C)  /*@bfbba@*/
#define GPIO_PODR10_POD13	(*(volatile uint_io8_t*)0xB71C128D)  /*@bfbba@*/
#define GPIO_PODR10_POD14	(*(volatile uint_io8_t*)0xB71C128E)  /*@bfbba@*/
#define GPIO_PODR10_POD15	(*(volatile uint_io8_t*)0xB71C128F)  /*@bfbba@*/
#define GPIO_PODR10_POD16	(*(volatile uint_io8_t*)0xB71C1290)  /*@bfbba@*/
#define GPIO_PODR10_POD17	(*(volatile uint_io8_t*)0xB71C1291)  /*@bfbba@*/
#define GPIO_PODR10_POD18	(*(volatile uint_io8_t*)0xB71C1292)  /*@bfbba@*/
#define GPIO_PODR10_POD19	(*(volatile uint_io8_t*)0xB71C1293)  /*@bfbba@*/
#define GPIO_PODR10_POD20	(*(volatile uint_io8_t*)0xB71C1294)  /*@bfbba@*/
#define GPIO_PODR10_POD21	(*(volatile uint_io8_t*)0xB71C1295)  /*@bfbba@*/
#define GPIO_PODR10_POD22	(*(volatile uint_io8_t*)0xB71C1296)  /*@bfbba@*/
#define GPIO_PODR10_POD23	(*(volatile uint_io8_t*)0xB71C1297)  /*@bfbba@*/
#define GPIO_PODR10_POD24	(*(volatile uint_io8_t*)0xB71C1298)  /*@bfbba@*/
#define GPIO_PODR10_POD25	(*(volatile uint_io8_t*)0xB71C1299)  /*@bfbba@*/
#define GPIO_PODR10_POD26	(*(volatile uint_io8_t*)0xB71C129A)  /*@bfbba@*/
#define GPIO_PODR10_POD27	(*(volatile uint_io8_t*)0xB71C129B)  /*@bfbba@*/
#define GPIO_PODR10_POD28	(*(volatile uint_io8_t*)0xB71C129C)  /*@bfbba@*/
#define GPIO_PODR10_POD29	(*(volatile uint_io8_t*)0xB71C129D)  /*@bfbba@*/
#define GPIO_PODR10_POD30	(*(volatile uint_io8_t*)0xB71C129E)  /*@bfbba@*/
#define GPIO_PODR10_POD31	(*(volatile uint_io8_t*)0xB71C129F)  /*@bfbba@*/

#define GPIO_PODR11	(GPIO.unPODR11.u32Register)  /*@rg@*/
#define GPIO_PODR11_POD0	(*(volatile uint_io8_t*)0xB71C12C0)  /*@bfbba@*/
#define GPIO_PODR11_POD1	(*(volatile uint_io8_t*)0xB71C12C1)  /*@bfbba@*/
#define GPIO_PODR11_POD2	(*(volatile uint_io8_t*)0xB71C12C2)  /*@bfbba@*/
#define GPIO_PODR11_POD3	(*(volatile uint_io8_t*)0xB71C12C3)  /*@bfbba@*/
#define GPIO_PODR11_POD4	(*(volatile uint_io8_t*)0xB71C12C4)  /*@bfbba@*/
#define GPIO_PODR11_POD5	(*(volatile uint_io8_t*)0xB71C12C5)  /*@bfbba@*/
#define GPIO_PODR11_POD6	(*(volatile uint_io8_t*)0xB71C12C6)  /*@bfbba@*/
#define GPIO_PODR11_POD7	(*(volatile uint_io8_t*)0xB71C12C7)  /*@bfbba@*/
#define GPIO_PODR11_POD8	(*(volatile uint_io8_t*)0xB71C12C8)  /*@bfbba@*/
#define GPIO_PODR11_POD9	(*(volatile uint_io8_t*)0xB71C12C9)  /*@bfbba@*/
#define GPIO_PODR11_POD10	(*(volatile uint_io8_t*)0xB71C12CA)  /*@bfbba@*/
#define GPIO_PODR11_POD11	(*(volatile uint_io8_t*)0xB71C12CB)  /*@bfbba@*/
#define GPIO_PODR11_POD12	(*(volatile uint_io8_t*)0xB71C12CC)  /*@bfbba@*/
#define GPIO_PODR11_POD13	(*(volatile uint_io8_t*)0xB71C12CD)  /*@bfbba@*/
#define GPIO_PODR11_POD14	(*(volatile uint_io8_t*)0xB71C12CE)  /*@bfbba@*/
#define GPIO_PODR11_POD15	(*(volatile uint_io8_t*)0xB71C12CF)  /*@bfbba@*/
#define GPIO_PODR11_POD16	(*(volatile uint_io8_t*)0xB71C12D0)  /*@bfbba@*/
#define GPIO_PODR11_POD17	(*(volatile uint_io8_t*)0xB71C12D1)  /*@bfbba@*/
#define GPIO_PODR11_POD18	(*(volatile uint_io8_t*)0xB71C12D2)  /*@bfbba@*/
#define GPIO_PODR11_POD19	(*(volatile uint_io8_t*)0xB71C12D3)  /*@bfbba@*/
#define GPIO_PODR11_POD20	(*(volatile uint_io8_t*)0xB71C12D4)  /*@bfbba@*/
#define GPIO_PODR11_POD21	(*(volatile uint_io8_t*)0xB71C12D5)  /*@bfbba@*/
#define GPIO_PODR11_POD22	(*(volatile uint_io8_t*)0xB71C12D6)  /*@bfbba@*/
#define GPIO_PODR11_POD23	(*(volatile uint_io8_t*)0xB71C12D7)  /*@bfbba@*/
#define GPIO_PODR11_POD24	(*(volatile uint_io8_t*)0xB71C12D8)  /*@bfbba@*/
#define GPIO_PODR11_POD25	(*(volatile uint_io8_t*)0xB71C12D9)  /*@bfbba@*/
#define GPIO_PODR11_POD26	(*(volatile uint_io8_t*)0xB71C12DA)  /*@bfbba@*/
#define GPIO_PODR11_POD27	(*(volatile uint_io8_t*)0xB71C12DB)  /*@bfbba@*/
#define GPIO_PODR11_POD28	(*(volatile uint_io8_t*)0xB71C12DC)  /*@bfbba@*/
#define GPIO_PODR11_POD29	(*(volatile uint_io8_t*)0xB71C12DD)  /*@bfbba@*/
#define GPIO_PODR11_POD30	(*(volatile uint_io8_t*)0xB71C12DE)  /*@bfbba@*/
#define GPIO_PODR11_POD31	(*(volatile uint_io8_t*)0xB71C12DF)  /*@bfbba@*/

#define GPIO_PODR12	(GPIO.unPODR12.u32Register)  /*@rg@*/
#define GPIO_PODR12_POD0	(*(volatile uint_io8_t*)0xB71C1300)  /*@bfbba@*/
#define GPIO_PODR12_POD1	(*(volatile uint_io8_t*)0xB71C1301)  /*@bfbba@*/
#define GPIO_PODR12_POD2	(*(volatile uint_io8_t*)0xB71C1302)  /*@bfbba@*/
#define GPIO_PODR12_POD3	(*(volatile uint_io8_t*)0xB71C1303)  /*@bfbba@*/
#define GPIO_PODR12_POD4	(*(volatile uint_io8_t*)0xB71C1304)  /*@bfbba@*/
#define GPIO_PODR12_POD5	(*(volatile uint_io8_t*)0xB71C1305)  /*@bfbba@*/
#define GPIO_PODR12_POD6	(*(volatile uint_io8_t*)0xB71C1306)  /*@bfbba@*/
#define GPIO_PODR12_POD7	(*(volatile uint_io8_t*)0xB71C1307)  /*@bfbba@*/
#define GPIO_PODR12_POD8	(*(volatile uint_io8_t*)0xB71C1308)  /*@bfbba@*/
#define GPIO_PODR12_POD9	(*(volatile uint_io8_t*)0xB71C1309)  /*@bfbba@*/
#define GPIO_PODR12_POD10	(*(volatile uint_io8_t*)0xB71C130A)  /*@bfbba@*/
#define GPIO_PODR12_POD11	(*(volatile uint_io8_t*)0xB71C130B)  /*@bfbba@*/
#define GPIO_PODR12_POD12	(*(volatile uint_io8_t*)0xB71C130C)  /*@bfbba@*/
#define GPIO_PODR12_POD13	(*(volatile uint_io8_t*)0xB71C130D)  /*@bfbba@*/
#define GPIO_PODR12_POD14	(*(volatile uint_io8_t*)0xB71C130E)  /*@bfbba@*/
#define GPIO_PODR12_POD15	(*(volatile uint_io8_t*)0xB71C130F)  /*@bfbba@*/
#define GPIO_PODR12_POD16	(*(volatile uint_io8_t*)0xB71C1310)  /*@bfbba@*/
#define GPIO_PODR12_POD17	(*(volatile uint_io8_t*)0xB71C1311)  /*@bfbba@*/
#define GPIO_PODR12_POD18	(*(volatile uint_io8_t*)0xB71C1312)  /*@bfbba@*/
#define GPIO_PODR12_POD19	(*(volatile uint_io8_t*)0xB71C1313)  /*@bfbba@*/
#define GPIO_PODR12_POD20	(*(volatile uint_io8_t*)0xB71C1314)  /*@bfbba@*/
#define GPIO_PODR12_POD21	(*(volatile uint_io8_t*)0xB71C1315)  /*@bfbba@*/
#define GPIO_PODR12_POD22	(*(volatile uint_io8_t*)0xB71C1316)  /*@bfbba@*/
#define GPIO_PODR12_POD23	(*(volatile uint_io8_t*)0xB71C1317)  /*@bfbba@*/
#define GPIO_PODR12_POD24	(*(volatile uint_io8_t*)0xB71C1318)  /*@bfbba@*/
#define GPIO_PODR12_POD25	(*(volatile uint_io8_t*)0xB71C1319)  /*@bfbba@*/
#define GPIO_PODR12_POD26	(*(volatile uint_io8_t*)0xB71C131A)  /*@bfbba@*/
#define GPIO_PODR12_POD27	(*(volatile uint_io8_t*)0xB71C131B)  /*@bfbba@*/
#define GPIO_PODR12_POD28	(*(volatile uint_io8_t*)0xB71C131C)  /*@bfbba@*/
#define GPIO_PODR12_POD29	(*(volatile uint_io8_t*)0xB71C131D)  /*@bfbba@*/
#define GPIO_PODR12_POD30	(*(volatile uint_io8_t*)0xB71C131E)  /*@bfbba@*/
#define GPIO_PODR12_POD31	(*(volatile uint_io8_t*)0xB71C131F)  /*@bfbba@*/

#define GPIO_PODR13	(GPIO.unPODR13.u32Register)  /*@rg@*/
#define GPIO_PODR13_POD0	(*(volatile uint_io8_t*)0xB71C1340)  /*@bfbba@*/
#define GPIO_PODR13_POD1	(*(volatile uint_io8_t*)0xB71C1341)  /*@bfbba@*/
#define GPIO_PODR13_POD2	(*(volatile uint_io8_t*)0xB71C1342)  /*@bfbba@*/
#define GPIO_PODR13_POD3	(*(volatile uint_io8_t*)0xB71C1343)  /*@bfbba@*/
#define GPIO_PODR13_POD4	(*(volatile uint_io8_t*)0xB71C1344)  /*@bfbba@*/
#define GPIO_PODR13_POD5	(*(volatile uint_io8_t*)0xB71C1345)  /*@bfbba@*/
#define GPIO_PODR13_POD6	(*(volatile uint_io8_t*)0xB71C1346)  /*@bfbba@*/
#define GPIO_PODR13_POD7	(*(volatile uint_io8_t*)0xB71C1347)  /*@bfbba@*/
#define GPIO_PODR13_POD8	(*(volatile uint_io8_t*)0xB71C1348)  /*@bfbba@*/
#define GPIO_PODR13_POD9	(*(volatile uint_io8_t*)0xB71C1349)  /*@bfbba@*/
#define GPIO_PODR13_POD10	(*(volatile uint_io8_t*)0xB71C134A)  /*@bfbba@*/
#define GPIO_PODR13_POD11	(*(volatile uint_io8_t*)0xB71C134B)  /*@bfbba@*/
#define GPIO_PODR13_POD12	(*(volatile uint_io8_t*)0xB71C134C)  /*@bfbba@*/
#define GPIO_PODR13_POD13	(*(volatile uint_io8_t*)0xB71C134D)  /*@bfbba@*/
#define GPIO_PODR13_POD14	(*(volatile uint_io8_t*)0xB71C134E)  /*@bfbba@*/
#define GPIO_PODR13_POD15	(*(volatile uint_io8_t*)0xB71C134F)  /*@bfbba@*/
#define GPIO_PODR13_POD16	(*(volatile uint_io8_t*)0xB71C1350)  /*@bfbba@*/
#define GPIO_PODR13_POD17	(*(volatile uint_io8_t*)0xB71C1351)  /*@bfbba@*/
#define GPIO_PODR13_POD18	(*(volatile uint_io8_t*)0xB71C1352)  /*@bfbba@*/
#define GPIO_PODR13_POD19	(*(volatile uint_io8_t*)0xB71C1353)  /*@bfbba@*/
#define GPIO_PODR13_POD20	(*(volatile uint_io8_t*)0xB71C1354)  /*@bfbba@*/
#define GPIO_PODR13_POD21	(*(volatile uint_io8_t*)0xB71C1355)  /*@bfbba@*/
#define GPIO_PODR13_POD22	(*(volatile uint_io8_t*)0xB71C1356)  /*@bfbba@*/
#define GPIO_PODR13_POD23	(*(volatile uint_io8_t*)0xB71C1357)  /*@bfbba@*/
#define GPIO_PODR13_POD24	(*(volatile uint_io8_t*)0xB71C1358)  /*@bfbba@*/
#define GPIO_PODR13_POD25	(*(volatile uint_io8_t*)0xB71C1359)  /*@bfbba@*/
#define GPIO_PODR13_POD26	(*(volatile uint_io8_t*)0xB71C135A)  /*@bfbba@*/
#define GPIO_PODR13_POD27	(*(volatile uint_io8_t*)0xB71C135B)  /*@bfbba@*/
#define GPIO_PODR13_POD28	(*(volatile uint_io8_t*)0xB71C135C)  /*@bfbba@*/
#define GPIO_PODR13_POD29	(*(volatile uint_io8_t*)0xB71C135D)  /*@bfbba@*/
#define GPIO_PODR13_POD30	(*(volatile uint_io8_t*)0xB71C135E)  /*@bfbba@*/
#define GPIO_PODR13_POD31	(*(volatile uint_io8_t*)0xB71C135F)  /*@bfbba@*/

#define GPIO_PODR14	(GPIO.unPODR14.u32Register)  /*@rg@*/
#define GPIO_PODR14_POD0	(*(volatile uint_io8_t*)0xB71C1380)  /*@bfbba@*/
#define GPIO_PODR14_POD1	(*(volatile uint_io8_t*)0xB71C1381)  /*@bfbba@*/
#define GPIO_PODR14_POD2	(*(volatile uint_io8_t*)0xB71C1382)  /*@bfbba@*/
#define GPIO_PODR14_POD3	(*(volatile uint_io8_t*)0xB71C1383)  /*@bfbba@*/
#define GPIO_PODR14_POD4	(*(volatile uint_io8_t*)0xB71C1384)  /*@bfbba@*/
#define GPIO_PODR14_POD5	(*(volatile uint_io8_t*)0xB71C1385)  /*@bfbba@*/
#define GPIO_PODR14_POD6	(*(volatile uint_io8_t*)0xB71C1386)  /*@bfbba@*/
#define GPIO_PODR14_POD7	(*(volatile uint_io8_t*)0xB71C1387)  /*@bfbba@*/
#define GPIO_PODR14_POD8	(*(volatile uint_io8_t*)0xB71C1388)  /*@bfbba@*/
#define GPIO_PODR14_POD9	(*(volatile uint_io8_t*)0xB71C1389)  /*@bfbba@*/
#define GPIO_PODR14_POD10	(*(volatile uint_io8_t*)0xB71C138A)  /*@bfbba@*/
#define GPIO_PODR14_POD11	(*(volatile uint_io8_t*)0xB71C138B)  /*@bfbba@*/
#define GPIO_PODR14_POD12	(*(volatile uint_io8_t*)0xB71C138C)  /*@bfbba@*/
#define GPIO_PODR14_POD13	(*(volatile uint_io8_t*)0xB71C138D)  /*@bfbba@*/
#define GPIO_PODR14_POD14	(*(volatile uint_io8_t*)0xB71C138E)  /*@bfbba@*/
#define GPIO_PODR14_POD15	(*(volatile uint_io8_t*)0xB71C138F)  /*@bfbba@*/
#define GPIO_PODR14_POD16	(*(volatile uint_io8_t*)0xB71C1390)  /*@bfbba@*/
#define GPIO_PODR14_POD17	(*(volatile uint_io8_t*)0xB71C1391)  /*@bfbba@*/
#define GPIO_PODR14_POD18	(*(volatile uint_io8_t*)0xB71C1392)  /*@bfbba@*/
#define GPIO_PODR14_POD19	(*(volatile uint_io8_t*)0xB71C1393)  /*@bfbba@*/
#define GPIO_PODR14_POD20	(*(volatile uint_io8_t*)0xB71C1394)  /*@bfbba@*/
#define GPIO_PODR14_POD21	(*(volatile uint_io8_t*)0xB71C1395)  /*@bfbba@*/
#define GPIO_PODR14_POD22	(*(volatile uint_io8_t*)0xB71C1396)  /*@bfbba@*/
#define GPIO_PODR14_POD23	(*(volatile uint_io8_t*)0xB71C1397)  /*@bfbba@*/
#define GPIO_PODR14_POD24	(*(volatile uint_io8_t*)0xB71C1398)  /*@bfbba@*/
#define GPIO_PODR14_POD25	(*(volatile uint_io8_t*)0xB71C1399)  /*@bfbba@*/
#define GPIO_PODR14_POD26	(*(volatile uint_io8_t*)0xB71C139A)  /*@bfbba@*/
#define GPIO_PODR14_POD27	(*(volatile uint_io8_t*)0xB71C139B)  /*@bfbba@*/
#define GPIO_PODR14_POD28	(*(volatile uint_io8_t*)0xB71C139C)  /*@bfbba@*/
#define GPIO_PODR14_POD29	(*(volatile uint_io8_t*)0xB71C139D)  /*@bfbba@*/
#define GPIO_PODR14_POD30	(*(volatile uint_io8_t*)0xB71C139E)  /*@bfbba@*/
#define GPIO_PODR14_POD31	(*(volatile uint_io8_t*)0xB71C139F)  /*@bfbba@*/

#define GPIO_PODR15	(GPIO.unPODR15.u32Register)  /*@rg@*/
#define GPIO_PODR15_POD0	(*(volatile uint_io8_t*)0xB71C13C0)  /*@bfbba@*/
#define GPIO_PODR15_POD1	(*(volatile uint_io8_t*)0xB71C13C1)  /*@bfbba@*/
#define GPIO_PODR15_POD2	(*(volatile uint_io8_t*)0xB71C13C2)  /*@bfbba@*/
#define GPIO_PODR15_POD3	(*(volatile uint_io8_t*)0xB71C13C3)  /*@bfbba@*/
#define GPIO_PODR15_POD4	(*(volatile uint_io8_t*)0xB71C13C4)  /*@bfbba@*/
#define GPIO_PODR15_POD5	(*(volatile uint_io8_t*)0xB71C13C5)  /*@bfbba@*/
#define GPIO_PODR15_POD6	(*(volatile uint_io8_t*)0xB71C13C6)  /*@bfbba@*/
#define GPIO_PODR15_POD7	(*(volatile uint_io8_t*)0xB71C13C7)  /*@bfbba@*/
#define GPIO_PODR15_POD8	(*(volatile uint_io8_t*)0xB71C13C8)  /*@bfbba@*/
#define GPIO_PODR15_POD9	(*(volatile uint_io8_t*)0xB71C13C9)  /*@bfbba@*/
#define GPIO_PODR15_POD10	(*(volatile uint_io8_t*)0xB71C13CA)  /*@bfbba@*/
#define GPIO_PODR15_POD11	(*(volatile uint_io8_t*)0xB71C13CB)  /*@bfbba@*/
#define GPIO_PODR15_POD12	(*(volatile uint_io8_t*)0xB71C13CC)  /*@bfbba@*/
#define GPIO_PODR15_POD13	(*(volatile uint_io8_t*)0xB71C13CD)  /*@bfbba@*/
#define GPIO_PODR15_POD14	(*(volatile uint_io8_t*)0xB71C13CE)  /*@bfbba@*/
#define GPIO_PODR15_POD15	(*(volatile uint_io8_t*)0xB71C13CF)  /*@bfbba@*/
#define GPIO_PODR15_POD16	(*(volatile uint_io8_t*)0xB71C13D0)  /*@bfbba@*/
#define GPIO_PODR15_POD17	(*(volatile uint_io8_t*)0xB71C13D1)  /*@bfbba@*/
#define GPIO_PODR15_POD18	(*(volatile uint_io8_t*)0xB71C13D2)  /*@bfbba@*/
#define GPIO_PODR15_POD19	(*(volatile uint_io8_t*)0xB71C13D3)  /*@bfbba@*/
#define GPIO_PODR15_POD20	(*(volatile uint_io8_t*)0xB71C13D4)  /*@bfbba@*/
#define GPIO_PODR15_POD21	(*(volatile uint_io8_t*)0xB71C13D5)  /*@bfbba@*/
#define GPIO_PODR15_POD22	(*(volatile uint_io8_t*)0xB71C13D6)  /*@bfbba@*/
#define GPIO_PODR15_POD23	(*(volatile uint_io8_t*)0xB71C13D7)  /*@bfbba@*/
#define GPIO_PODR15_POD24	(*(volatile uint_io8_t*)0xB71C13D8)  /*@bfbba@*/
#define GPIO_PODR15_POD25	(*(volatile uint_io8_t*)0xB71C13D9)  /*@bfbba@*/
#define GPIO_PODR15_POD26	(*(volatile uint_io8_t*)0xB71C13DA)  /*@bfbba@*/
#define GPIO_PODR15_POD27	(*(volatile uint_io8_t*)0xB71C13DB)  /*@bfbba@*/
#define GPIO_PODR15_POD28	(*(volatile uint_io8_t*)0xB71C13DC)  /*@bfbba@*/
#define GPIO_PODR15_POD29	(*(volatile uint_io8_t*)0xB71C13DD)  /*@bfbba@*/
#define GPIO_PODR15_POD30	(*(volatile uint_io8_t*)0xB71C13DE)  /*@bfbba@*/
#define GPIO_PODR15_POD31	(*(volatile uint_io8_t*)0xB71C13DF)  /*@bfbba@*/

typedef struct stc_gpio_podrn_field{
    uint_io32_t		u1POD0:1;
    uint_io32_t		u1POD1:1;
    uint_io32_t		u1POD2:1;
    uint_io32_t		u1POD3:1;
    uint_io32_t		u1POD4:1;
    uint_io32_t		u1POD5:1;
    uint_io32_t		u1POD6:1;
    uint_io32_t		u1POD7:1;
    uint_io32_t		u1POD8:1;
    uint_io32_t		u1POD9:1;
    uint_io32_t		u1POD10:1;
    uint_io32_t		u1POD11:1;
    uint_io32_t		u1POD12:1;
    uint_io32_t		u1POD13:1;
    uint_io32_t		u1POD14:1;
    uint_io32_t		u1POD15:1;
    uint_io32_t		u1POD16:1;
    uint_io32_t		u1POD17:1;
    uint_io32_t		u1POD18:1;
    uint_io32_t		u1POD19:1;
    uint_io32_t		u1POD20:1;
    uint_io32_t		u1POD21:1;
    uint_io32_t		u1POD22:1;
    uint_io32_t		u1POD23:1;
    uint_io32_t		u1POD24:1;
    uint_io32_t		u1POD25:1;
    uint_io32_t		u1POD26:1;
    uint_io32_t		u1POD27:1;
    uint_io32_t		u1POD28:1;
    uint_io32_t		u1POD29:1;
    uint_io32_t		u1POD30:1;
    uint_io32_t		u1POD31:1;
}stc_gpio_podrn_field_t;

typedef union un_gpio_podrn{
    uint_io32_t		u32Register;
    stc_gpio_podrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_podrn_t;

/* DDR[0-15] */
#define GPIO_DDR0	(GPIO.unDDR0.u32Register)  /*@rg@*/
#define GPIO_DDR0_DD0	(*(volatile uint_io8_t*)0xB71C1020)  /*@bfbba@*/
#define GPIO_DDR0_DD1	(*(volatile uint_io8_t*)0xB71C1021)  /*@bfbba@*/
#define GPIO_DDR0_DD2	(*(volatile uint_io8_t*)0xB71C1022)  /*@bfbba@*/
#define GPIO_DDR0_DD3	(*(volatile uint_io8_t*)0xB71C1023)  /*@bfbba@*/
#define GPIO_DDR0_DD4	(*(volatile uint_io8_t*)0xB71C1024)  /*@bfbba@*/
#define GPIO_DDR0_DD5	(*(volatile uint_io8_t*)0xB71C1025)  /*@bfbba@*/
#define GPIO_DDR0_DD6	(*(volatile uint_io8_t*)0xB71C1026)  /*@bfbba@*/
#define GPIO_DDR0_DD7	(*(volatile uint_io8_t*)0xB71C1027)  /*@bfbba@*/
#define GPIO_DDR0_DD8	(*(volatile uint_io8_t*)0xB71C1028)  /*@bfbba@*/
#define GPIO_DDR0_DD9	(*(volatile uint_io8_t*)0xB71C1029)  /*@bfbba@*/
#define GPIO_DDR0_DD10	(*(volatile uint_io8_t*)0xB71C102A)  /*@bfbba@*/
#define GPIO_DDR0_DD11	(*(volatile uint_io8_t*)0xB71C102B)  /*@bfbba@*/
#define GPIO_DDR0_DD12	(*(volatile uint_io8_t*)0xB71C102C)  /*@bfbba@*/
#define GPIO_DDR0_DD13	(*(volatile uint_io8_t*)0xB71C102D)  /*@bfbba@*/
#define GPIO_DDR0_DD14	(*(volatile uint_io8_t*)0xB71C102E)  /*@bfbba@*/
#define GPIO_DDR0_DD15	(*(volatile uint_io8_t*)0xB71C102F)  /*@bfbba@*/
#define GPIO_DDR0_DD16	(*(volatile uint_io8_t*)0xB71C1030)  /*@bfbba@*/
#define GPIO_DDR0_DD17	(*(volatile uint_io8_t*)0xB71C1031)  /*@bfbba@*/
#define GPIO_DDR0_DD18	(*(volatile uint_io8_t*)0xB71C1032)  /*@bfbba@*/
#define GPIO_DDR0_DD19	(*(volatile uint_io8_t*)0xB71C1033)  /*@bfbba@*/
#define GPIO_DDR0_DD20	(*(volatile uint_io8_t*)0xB71C1034)  /*@bfbba@*/
#define GPIO_DDR0_DD21	(*(volatile uint_io8_t*)0xB71C1035)  /*@bfbba@*/
#define GPIO_DDR0_DD22	(*(volatile uint_io8_t*)0xB71C1036)  /*@bfbba@*/
#define GPIO_DDR0_DD23	(*(volatile uint_io8_t*)0xB71C1037)  /*@bfbba@*/
#define GPIO_DDR0_DD24	(*(volatile uint_io8_t*)0xB71C1038)  /*@bfbba@*/
#define GPIO_DDR0_DD25	(*(volatile uint_io8_t*)0xB71C1039)  /*@bfbba@*/
#define GPIO_DDR0_DD26	(*(volatile uint_io8_t*)0xB71C103A)  /*@bfbba@*/
#define GPIO_DDR0_DD27	(*(volatile uint_io8_t*)0xB71C103B)  /*@bfbba@*/
#define GPIO_DDR0_DD28	(*(volatile uint_io8_t*)0xB71C103C)  /*@bfbba@*/
#define GPIO_DDR0_DD29	(*(volatile uint_io8_t*)0xB71C103D)  /*@bfbba@*/
#define GPIO_DDR0_DD30	(*(volatile uint_io8_t*)0xB71C103E)  /*@bfbba@*/
#define GPIO_DDR0_DD31	(*(volatile uint_io8_t*)0xB71C103F)  /*@bfbba@*/

#define GPIO_DDR1	(GPIO.unDDR1.u32Register)  /*@rg@*/
#define GPIO_DDR1_DD0	(*(volatile uint_io8_t*)0xB71C1060)  /*@bfbba@*/
#define GPIO_DDR1_DD1	(*(volatile uint_io8_t*)0xB71C1061)  /*@bfbba@*/
#define GPIO_DDR1_DD2	(*(volatile uint_io8_t*)0xB71C1062)  /*@bfbba@*/
#define GPIO_DDR1_DD3	(*(volatile uint_io8_t*)0xB71C1063)  /*@bfbba@*/
#define GPIO_DDR1_DD4	(*(volatile uint_io8_t*)0xB71C1064)  /*@bfbba@*/
#define GPIO_DDR1_DD5	(*(volatile uint_io8_t*)0xB71C1065)  /*@bfbba@*/
#define GPIO_DDR1_DD6	(*(volatile uint_io8_t*)0xB71C1066)  /*@bfbba@*/
#define GPIO_DDR1_DD7	(*(volatile uint_io8_t*)0xB71C1067)  /*@bfbba@*/
#define GPIO_DDR1_DD8	(*(volatile uint_io8_t*)0xB71C1068)  /*@bfbba@*/
#define GPIO_DDR1_DD9	(*(volatile uint_io8_t*)0xB71C1069)  /*@bfbba@*/
#define GPIO_DDR1_DD10	(*(volatile uint_io8_t*)0xB71C106A)  /*@bfbba@*/
#define GPIO_DDR1_DD11	(*(volatile uint_io8_t*)0xB71C106B)  /*@bfbba@*/
#define GPIO_DDR1_DD12	(*(volatile uint_io8_t*)0xB71C106C)  /*@bfbba@*/
#define GPIO_DDR1_DD13	(*(volatile uint_io8_t*)0xB71C106D)  /*@bfbba@*/
#define GPIO_DDR1_DD14	(*(volatile uint_io8_t*)0xB71C106E)  /*@bfbba@*/
#define GPIO_DDR1_DD15	(*(volatile uint_io8_t*)0xB71C106F)  /*@bfbba@*/
#define GPIO_DDR1_DD16	(*(volatile uint_io8_t*)0xB71C1070)  /*@bfbba@*/
#define GPIO_DDR1_DD17	(*(volatile uint_io8_t*)0xB71C1071)  /*@bfbba@*/
#define GPIO_DDR1_DD18	(*(volatile uint_io8_t*)0xB71C1072)  /*@bfbba@*/
#define GPIO_DDR1_DD19	(*(volatile uint_io8_t*)0xB71C1073)  /*@bfbba@*/
#define GPIO_DDR1_DD20	(*(volatile uint_io8_t*)0xB71C1074)  /*@bfbba@*/
#define GPIO_DDR1_DD21	(*(volatile uint_io8_t*)0xB71C1075)  /*@bfbba@*/
#define GPIO_DDR1_DD22	(*(volatile uint_io8_t*)0xB71C1076)  /*@bfbba@*/
#define GPIO_DDR1_DD23	(*(volatile uint_io8_t*)0xB71C1077)  /*@bfbba@*/
#define GPIO_DDR1_DD24	(*(volatile uint_io8_t*)0xB71C1078)  /*@bfbba@*/
#define GPIO_DDR1_DD25	(*(volatile uint_io8_t*)0xB71C1079)  /*@bfbba@*/
#define GPIO_DDR1_DD26	(*(volatile uint_io8_t*)0xB71C107A)  /*@bfbba@*/
#define GPIO_DDR1_DD27	(*(volatile uint_io8_t*)0xB71C107B)  /*@bfbba@*/
#define GPIO_DDR1_DD28	(*(volatile uint_io8_t*)0xB71C107C)  /*@bfbba@*/
#define GPIO_DDR1_DD29	(*(volatile uint_io8_t*)0xB71C107D)  /*@bfbba@*/
#define GPIO_DDR1_DD30	(*(volatile uint_io8_t*)0xB71C107E)  /*@bfbba@*/
#define GPIO_DDR1_DD31	(*(volatile uint_io8_t*)0xB71C107F)  /*@bfbba@*/

#define GPIO_DDR2	(GPIO.unDDR2.u32Register)  /*@rg@*/
#define GPIO_DDR2_DD0	(*(volatile uint_io8_t*)0xB71C10A0)  /*@bfbba@*/
#define GPIO_DDR2_DD1	(*(volatile uint_io8_t*)0xB71C10A1)  /*@bfbba@*/
#define GPIO_DDR2_DD2	(*(volatile uint_io8_t*)0xB71C10A2)  /*@bfbba@*/
#define GPIO_DDR2_DD3	(*(volatile uint_io8_t*)0xB71C10A3)  /*@bfbba@*/
#define GPIO_DDR2_DD4	(*(volatile uint_io8_t*)0xB71C10A4)  /*@bfbba@*/
#define GPIO_DDR2_DD5	(*(volatile uint_io8_t*)0xB71C10A5)  /*@bfbba@*/
#define GPIO_DDR2_DD6	(*(volatile uint_io8_t*)0xB71C10A6)  /*@bfbba@*/
#define GPIO_DDR2_DD7	(*(volatile uint_io8_t*)0xB71C10A7)  /*@bfbba@*/
#define GPIO_DDR2_DD8	(*(volatile uint_io8_t*)0xB71C10A8)  /*@bfbba@*/
#define GPIO_DDR2_DD9	(*(volatile uint_io8_t*)0xB71C10A9)  /*@bfbba@*/
#define GPIO_DDR2_DD10	(*(volatile uint_io8_t*)0xB71C10AA)  /*@bfbba@*/
#define GPIO_DDR2_DD11	(*(volatile uint_io8_t*)0xB71C10AB)  /*@bfbba@*/
#define GPIO_DDR2_DD12	(*(volatile uint_io8_t*)0xB71C10AC)  /*@bfbba@*/
#define GPIO_DDR2_DD13	(*(volatile uint_io8_t*)0xB71C10AD)  /*@bfbba@*/
#define GPIO_DDR2_DD14	(*(volatile uint_io8_t*)0xB71C10AE)  /*@bfbba@*/
#define GPIO_DDR2_DD15	(*(volatile uint_io8_t*)0xB71C10AF)  /*@bfbba@*/
#define GPIO_DDR2_DD16	(*(volatile uint_io8_t*)0xB71C10B0)  /*@bfbba@*/
#define GPIO_DDR2_DD17	(*(volatile uint_io8_t*)0xB71C10B1)  /*@bfbba@*/
#define GPIO_DDR2_DD18	(*(volatile uint_io8_t*)0xB71C10B2)  /*@bfbba@*/
#define GPIO_DDR2_DD19	(*(volatile uint_io8_t*)0xB71C10B3)  /*@bfbba@*/
#define GPIO_DDR2_DD20	(*(volatile uint_io8_t*)0xB71C10B4)  /*@bfbba@*/
#define GPIO_DDR2_DD21	(*(volatile uint_io8_t*)0xB71C10B5)  /*@bfbba@*/
#define GPIO_DDR2_DD22	(*(volatile uint_io8_t*)0xB71C10B6)  /*@bfbba@*/
#define GPIO_DDR2_DD23	(*(volatile uint_io8_t*)0xB71C10B7)  /*@bfbba@*/
#define GPIO_DDR2_DD24	(*(volatile uint_io8_t*)0xB71C10B8)  /*@bfbba@*/
#define GPIO_DDR2_DD25	(*(volatile uint_io8_t*)0xB71C10B9)  /*@bfbba@*/
#define GPIO_DDR2_DD26	(*(volatile uint_io8_t*)0xB71C10BA)  /*@bfbba@*/
#define GPIO_DDR2_DD27	(*(volatile uint_io8_t*)0xB71C10BB)  /*@bfbba@*/
#define GPIO_DDR2_DD28	(*(volatile uint_io8_t*)0xB71C10BC)  /*@bfbba@*/
#define GPIO_DDR2_DD29	(*(volatile uint_io8_t*)0xB71C10BD)  /*@bfbba@*/
#define GPIO_DDR2_DD30	(*(volatile uint_io8_t*)0xB71C10BE)  /*@bfbba@*/
#define GPIO_DDR2_DD31	(*(volatile uint_io8_t*)0xB71C10BF)  /*@bfbba@*/

#define GPIO_DDR3	(GPIO.unDDR3.u32Register)  /*@rg@*/
#define GPIO_DDR3_DD0	(*(volatile uint_io8_t*)0xB71C10E0)  /*@bfbba@*/
#define GPIO_DDR3_DD1	(*(volatile uint_io8_t*)0xB71C10E1)  /*@bfbba@*/
#define GPIO_DDR3_DD2	(*(volatile uint_io8_t*)0xB71C10E2)  /*@bfbba@*/
#define GPIO_DDR3_DD3	(*(volatile uint_io8_t*)0xB71C10E3)  /*@bfbba@*/
#define GPIO_DDR3_DD4	(*(volatile uint_io8_t*)0xB71C10E4)  /*@bfbba@*/
#define GPIO_DDR3_DD5	(*(volatile uint_io8_t*)0xB71C10E5)  /*@bfbba@*/
#define GPIO_DDR3_DD6	(*(volatile uint_io8_t*)0xB71C10E6)  /*@bfbba@*/
#define GPIO_DDR3_DD7	(*(volatile uint_io8_t*)0xB71C10E7)  /*@bfbba@*/
#define GPIO_DDR3_DD8	(*(volatile uint_io8_t*)0xB71C10E8)  /*@bfbba@*/
#define GPIO_DDR3_DD9	(*(volatile uint_io8_t*)0xB71C10E9)  /*@bfbba@*/
#define GPIO_DDR3_DD10	(*(volatile uint_io8_t*)0xB71C10EA)  /*@bfbba@*/
#define GPIO_DDR3_DD11	(*(volatile uint_io8_t*)0xB71C10EB)  /*@bfbba@*/
#define GPIO_DDR3_DD12	(*(volatile uint_io8_t*)0xB71C10EC)  /*@bfbba@*/
#define GPIO_DDR3_DD13	(*(volatile uint_io8_t*)0xB71C10ED)  /*@bfbba@*/
#define GPIO_DDR3_DD14	(*(volatile uint_io8_t*)0xB71C10EE)  /*@bfbba@*/
#define GPIO_DDR3_DD15	(*(volatile uint_io8_t*)0xB71C10EF)  /*@bfbba@*/
#define GPIO_DDR3_DD16	(*(volatile uint_io8_t*)0xB71C10F0)  /*@bfbba@*/
#define GPIO_DDR3_DD17	(*(volatile uint_io8_t*)0xB71C10F1)  /*@bfbba@*/
#define GPIO_DDR3_DD18	(*(volatile uint_io8_t*)0xB71C10F2)  /*@bfbba@*/
#define GPIO_DDR3_DD19	(*(volatile uint_io8_t*)0xB71C10F3)  /*@bfbba@*/
#define GPIO_DDR3_DD20	(*(volatile uint_io8_t*)0xB71C10F4)  /*@bfbba@*/
#define GPIO_DDR3_DD21	(*(volatile uint_io8_t*)0xB71C10F5)  /*@bfbba@*/
#define GPIO_DDR3_DD22	(*(volatile uint_io8_t*)0xB71C10F6)  /*@bfbba@*/
#define GPIO_DDR3_DD23	(*(volatile uint_io8_t*)0xB71C10F7)  /*@bfbba@*/
#define GPIO_DDR3_DD24	(*(volatile uint_io8_t*)0xB71C10F8)  /*@bfbba@*/
#define GPIO_DDR3_DD25	(*(volatile uint_io8_t*)0xB71C10F9)  /*@bfbba@*/
#define GPIO_DDR3_DD26	(*(volatile uint_io8_t*)0xB71C10FA)  /*@bfbba@*/
#define GPIO_DDR3_DD27	(*(volatile uint_io8_t*)0xB71C10FB)  /*@bfbba@*/
#define GPIO_DDR3_DD28	(*(volatile uint_io8_t*)0xB71C10FC)  /*@bfbba@*/
#define GPIO_DDR3_DD29	(*(volatile uint_io8_t*)0xB71C10FD)  /*@bfbba@*/
#define GPIO_DDR3_DD30	(*(volatile uint_io8_t*)0xB71C10FE)  /*@bfbba@*/
#define GPIO_DDR3_DD31	(*(volatile uint_io8_t*)0xB71C10FF)  /*@bfbba@*/

#define GPIO_DDR4	(GPIO.unDDR4.u32Register)  /*@rg@*/
#define GPIO_DDR4_DD0	(*(volatile uint_io8_t*)0xB71C1120)  /*@bfbba@*/
#define GPIO_DDR4_DD1	(*(volatile uint_io8_t*)0xB71C1121)  /*@bfbba@*/
#define GPIO_DDR4_DD2	(*(volatile uint_io8_t*)0xB71C1122)  /*@bfbba@*/
#define GPIO_DDR4_DD3	(*(volatile uint_io8_t*)0xB71C1123)  /*@bfbba@*/
#define GPIO_DDR4_DD4	(*(volatile uint_io8_t*)0xB71C1124)  /*@bfbba@*/
#define GPIO_DDR4_DD5	(*(volatile uint_io8_t*)0xB71C1125)  /*@bfbba@*/
#define GPIO_DDR4_DD6	(*(volatile uint_io8_t*)0xB71C1126)  /*@bfbba@*/
#define GPIO_DDR4_DD7	(*(volatile uint_io8_t*)0xB71C1127)  /*@bfbba@*/
#define GPIO_DDR4_DD8	(*(volatile uint_io8_t*)0xB71C1128)  /*@bfbba@*/
#define GPIO_DDR4_DD9	(*(volatile uint_io8_t*)0xB71C1129)  /*@bfbba@*/
#define GPIO_DDR4_DD10	(*(volatile uint_io8_t*)0xB71C112A)  /*@bfbba@*/
#define GPIO_DDR4_DD11	(*(volatile uint_io8_t*)0xB71C112B)  /*@bfbba@*/
#define GPIO_DDR4_DD12	(*(volatile uint_io8_t*)0xB71C112C)  /*@bfbba@*/
#define GPIO_DDR4_DD13	(*(volatile uint_io8_t*)0xB71C112D)  /*@bfbba@*/
#define GPIO_DDR4_DD14	(*(volatile uint_io8_t*)0xB71C112E)  /*@bfbba@*/
#define GPIO_DDR4_DD15	(*(volatile uint_io8_t*)0xB71C112F)  /*@bfbba@*/
#define GPIO_DDR4_DD16	(*(volatile uint_io8_t*)0xB71C1130)  /*@bfbba@*/
#define GPIO_DDR4_DD17	(*(volatile uint_io8_t*)0xB71C1131)  /*@bfbba@*/
#define GPIO_DDR4_DD18	(*(volatile uint_io8_t*)0xB71C1132)  /*@bfbba@*/
#define GPIO_DDR4_DD19	(*(volatile uint_io8_t*)0xB71C1133)  /*@bfbba@*/
#define GPIO_DDR4_DD20	(*(volatile uint_io8_t*)0xB71C1134)  /*@bfbba@*/
#define GPIO_DDR4_DD21	(*(volatile uint_io8_t*)0xB71C1135)  /*@bfbba@*/
#define GPIO_DDR4_DD22	(*(volatile uint_io8_t*)0xB71C1136)  /*@bfbba@*/
#define GPIO_DDR4_DD23	(*(volatile uint_io8_t*)0xB71C1137)  /*@bfbba@*/
#define GPIO_DDR4_DD24	(*(volatile uint_io8_t*)0xB71C1138)  /*@bfbba@*/
#define GPIO_DDR4_DD25	(*(volatile uint_io8_t*)0xB71C1139)  /*@bfbba@*/
#define GPIO_DDR4_DD26	(*(volatile uint_io8_t*)0xB71C113A)  /*@bfbba@*/
#define GPIO_DDR4_DD27	(*(volatile uint_io8_t*)0xB71C113B)  /*@bfbba@*/
#define GPIO_DDR4_DD28	(*(volatile uint_io8_t*)0xB71C113C)  /*@bfbba@*/
#define GPIO_DDR4_DD29	(*(volatile uint_io8_t*)0xB71C113D)  /*@bfbba@*/
#define GPIO_DDR4_DD30	(*(volatile uint_io8_t*)0xB71C113E)  /*@bfbba@*/
#define GPIO_DDR4_DD31	(*(volatile uint_io8_t*)0xB71C113F)  /*@bfbba@*/

#define GPIO_DDR5	(GPIO.unDDR5.u32Register)  /*@rg@*/
#define GPIO_DDR5_DD0	(*(volatile uint_io8_t*)0xB71C1160)  /*@bfbba@*/
#define GPIO_DDR5_DD1	(*(volatile uint_io8_t*)0xB71C1161)  /*@bfbba@*/
#define GPIO_DDR5_DD2	(*(volatile uint_io8_t*)0xB71C1162)  /*@bfbba@*/
#define GPIO_DDR5_DD3	(*(volatile uint_io8_t*)0xB71C1163)  /*@bfbba@*/
#define GPIO_DDR5_DD4	(*(volatile uint_io8_t*)0xB71C1164)  /*@bfbba@*/
#define GPIO_DDR5_DD5	(*(volatile uint_io8_t*)0xB71C1165)  /*@bfbba@*/
#define GPIO_DDR5_DD6	(*(volatile uint_io8_t*)0xB71C1166)  /*@bfbba@*/
#define GPIO_DDR5_DD7	(*(volatile uint_io8_t*)0xB71C1167)  /*@bfbba@*/
#define GPIO_DDR5_DD8	(*(volatile uint_io8_t*)0xB71C1168)  /*@bfbba@*/
#define GPIO_DDR5_DD9	(*(volatile uint_io8_t*)0xB71C1169)  /*@bfbba@*/
#define GPIO_DDR5_DD10	(*(volatile uint_io8_t*)0xB71C116A)  /*@bfbba@*/
#define GPIO_DDR5_DD11	(*(volatile uint_io8_t*)0xB71C116B)  /*@bfbba@*/
#define GPIO_DDR5_DD12	(*(volatile uint_io8_t*)0xB71C116C)  /*@bfbba@*/
#define GPIO_DDR5_DD13	(*(volatile uint_io8_t*)0xB71C116D)  /*@bfbba@*/
#define GPIO_DDR5_DD14	(*(volatile uint_io8_t*)0xB71C116E)  /*@bfbba@*/
#define GPIO_DDR5_DD15	(*(volatile uint_io8_t*)0xB71C116F)  /*@bfbba@*/
#define GPIO_DDR5_DD16	(*(volatile uint_io8_t*)0xB71C1170)  /*@bfbba@*/
#define GPIO_DDR5_DD17	(*(volatile uint_io8_t*)0xB71C1171)  /*@bfbba@*/
#define GPIO_DDR5_DD18	(*(volatile uint_io8_t*)0xB71C1172)  /*@bfbba@*/
#define GPIO_DDR5_DD19	(*(volatile uint_io8_t*)0xB71C1173)  /*@bfbba@*/
#define GPIO_DDR5_DD20	(*(volatile uint_io8_t*)0xB71C1174)  /*@bfbba@*/
#define GPIO_DDR5_DD21	(*(volatile uint_io8_t*)0xB71C1175)  /*@bfbba@*/
#define GPIO_DDR5_DD22	(*(volatile uint_io8_t*)0xB71C1176)  /*@bfbba@*/
#define GPIO_DDR5_DD23	(*(volatile uint_io8_t*)0xB71C1177)  /*@bfbba@*/
#define GPIO_DDR5_DD24	(*(volatile uint_io8_t*)0xB71C1178)  /*@bfbba@*/
#define GPIO_DDR5_DD25	(*(volatile uint_io8_t*)0xB71C1179)  /*@bfbba@*/
#define GPIO_DDR5_DD26	(*(volatile uint_io8_t*)0xB71C117A)  /*@bfbba@*/
#define GPIO_DDR5_DD27	(*(volatile uint_io8_t*)0xB71C117B)  /*@bfbba@*/
#define GPIO_DDR5_DD28	(*(volatile uint_io8_t*)0xB71C117C)  /*@bfbba@*/
#define GPIO_DDR5_DD29	(*(volatile uint_io8_t*)0xB71C117D)  /*@bfbba@*/
#define GPIO_DDR5_DD30	(*(volatile uint_io8_t*)0xB71C117E)  /*@bfbba@*/
#define GPIO_DDR5_DD31	(*(volatile uint_io8_t*)0xB71C117F)  /*@bfbba@*/

#define GPIO_DDR6	(GPIO.unDDR6.u32Register)  /*@rg@*/
#define GPIO_DDR6_DD0	(*(volatile uint_io8_t*)0xB71C11A0)  /*@bfbba@*/
#define GPIO_DDR6_DD1	(*(volatile uint_io8_t*)0xB71C11A1)  /*@bfbba@*/
#define GPIO_DDR6_DD2	(*(volatile uint_io8_t*)0xB71C11A2)  /*@bfbba@*/
#define GPIO_DDR6_DD3	(*(volatile uint_io8_t*)0xB71C11A3)  /*@bfbba@*/
#define GPIO_DDR6_DD4	(*(volatile uint_io8_t*)0xB71C11A4)  /*@bfbba@*/
#define GPIO_DDR6_DD5	(*(volatile uint_io8_t*)0xB71C11A5)  /*@bfbba@*/
#define GPIO_DDR6_DD6	(*(volatile uint_io8_t*)0xB71C11A6)  /*@bfbba@*/
#define GPIO_DDR6_DD7	(*(volatile uint_io8_t*)0xB71C11A7)  /*@bfbba@*/
#define GPIO_DDR6_DD8	(*(volatile uint_io8_t*)0xB71C11A8)  /*@bfbba@*/
#define GPIO_DDR6_DD9	(*(volatile uint_io8_t*)0xB71C11A9)  /*@bfbba@*/
#define GPIO_DDR6_DD10	(*(volatile uint_io8_t*)0xB71C11AA)  /*@bfbba@*/
#define GPIO_DDR6_DD11	(*(volatile uint_io8_t*)0xB71C11AB)  /*@bfbba@*/
#define GPIO_DDR6_DD12	(*(volatile uint_io8_t*)0xB71C11AC)  /*@bfbba@*/
#define GPIO_DDR6_DD13	(*(volatile uint_io8_t*)0xB71C11AD)  /*@bfbba@*/
#define GPIO_DDR6_DD14	(*(volatile uint_io8_t*)0xB71C11AE)  /*@bfbba@*/
#define GPIO_DDR6_DD15	(*(volatile uint_io8_t*)0xB71C11AF)  /*@bfbba@*/
#define GPIO_DDR6_DD16	(*(volatile uint_io8_t*)0xB71C11B0)  /*@bfbba@*/
#define GPIO_DDR6_DD17	(*(volatile uint_io8_t*)0xB71C11B1)  /*@bfbba@*/
#define GPIO_DDR6_DD18	(*(volatile uint_io8_t*)0xB71C11B2)  /*@bfbba@*/
#define GPIO_DDR6_DD19	(*(volatile uint_io8_t*)0xB71C11B3)  /*@bfbba@*/
#define GPIO_DDR6_DD20	(*(volatile uint_io8_t*)0xB71C11B4)  /*@bfbba@*/
#define GPIO_DDR6_DD21	(*(volatile uint_io8_t*)0xB71C11B5)  /*@bfbba@*/
#define GPIO_DDR6_DD22	(*(volatile uint_io8_t*)0xB71C11B6)  /*@bfbba@*/
#define GPIO_DDR6_DD23	(*(volatile uint_io8_t*)0xB71C11B7)  /*@bfbba@*/
#define GPIO_DDR6_DD24	(*(volatile uint_io8_t*)0xB71C11B8)  /*@bfbba@*/
#define GPIO_DDR6_DD25	(*(volatile uint_io8_t*)0xB71C11B9)  /*@bfbba@*/
#define GPIO_DDR6_DD26	(*(volatile uint_io8_t*)0xB71C11BA)  /*@bfbba@*/
#define GPIO_DDR6_DD27	(*(volatile uint_io8_t*)0xB71C11BB)  /*@bfbba@*/
#define GPIO_DDR6_DD28	(*(volatile uint_io8_t*)0xB71C11BC)  /*@bfbba@*/
#define GPIO_DDR6_DD29	(*(volatile uint_io8_t*)0xB71C11BD)  /*@bfbba@*/
#define GPIO_DDR6_DD30	(*(volatile uint_io8_t*)0xB71C11BE)  /*@bfbba@*/
#define GPIO_DDR6_DD31	(*(volatile uint_io8_t*)0xB71C11BF)  /*@bfbba@*/

#define GPIO_DDR7	(GPIO.unDDR7.u32Register)  /*@rg@*/
#define GPIO_DDR7_DD0	(*(volatile uint_io8_t*)0xB71C11E0)  /*@bfbba@*/
#define GPIO_DDR7_DD1	(*(volatile uint_io8_t*)0xB71C11E1)  /*@bfbba@*/
#define GPIO_DDR7_DD2	(*(volatile uint_io8_t*)0xB71C11E2)  /*@bfbba@*/
#define GPIO_DDR7_DD3	(*(volatile uint_io8_t*)0xB71C11E3)  /*@bfbba@*/
#define GPIO_DDR7_DD4	(*(volatile uint_io8_t*)0xB71C11E4)  /*@bfbba@*/
#define GPIO_DDR7_DD5	(*(volatile uint_io8_t*)0xB71C11E5)  /*@bfbba@*/
#define GPIO_DDR7_DD6	(*(volatile uint_io8_t*)0xB71C11E6)  /*@bfbba@*/
#define GPIO_DDR7_DD7	(*(volatile uint_io8_t*)0xB71C11E7)  /*@bfbba@*/
#define GPIO_DDR7_DD8	(*(volatile uint_io8_t*)0xB71C11E8)  /*@bfbba@*/
#define GPIO_DDR7_DD9	(*(volatile uint_io8_t*)0xB71C11E9)  /*@bfbba@*/
#define GPIO_DDR7_DD10	(*(volatile uint_io8_t*)0xB71C11EA)  /*@bfbba@*/
#define GPIO_DDR7_DD11	(*(volatile uint_io8_t*)0xB71C11EB)  /*@bfbba@*/
#define GPIO_DDR7_DD12	(*(volatile uint_io8_t*)0xB71C11EC)  /*@bfbba@*/
#define GPIO_DDR7_DD13	(*(volatile uint_io8_t*)0xB71C11ED)  /*@bfbba@*/
#define GPIO_DDR7_DD14	(*(volatile uint_io8_t*)0xB71C11EE)  /*@bfbba@*/
#define GPIO_DDR7_DD15	(*(volatile uint_io8_t*)0xB71C11EF)  /*@bfbba@*/
#define GPIO_DDR7_DD16	(*(volatile uint_io8_t*)0xB71C11F0)  /*@bfbba@*/
#define GPIO_DDR7_DD17	(*(volatile uint_io8_t*)0xB71C11F1)  /*@bfbba@*/
#define GPIO_DDR7_DD18	(*(volatile uint_io8_t*)0xB71C11F2)  /*@bfbba@*/
#define GPIO_DDR7_DD19	(*(volatile uint_io8_t*)0xB71C11F3)  /*@bfbba@*/
#define GPIO_DDR7_DD20	(*(volatile uint_io8_t*)0xB71C11F4)  /*@bfbba@*/
#define GPIO_DDR7_DD21	(*(volatile uint_io8_t*)0xB71C11F5)  /*@bfbba@*/
#define GPIO_DDR7_DD22	(*(volatile uint_io8_t*)0xB71C11F6)  /*@bfbba@*/
#define GPIO_DDR7_DD23	(*(volatile uint_io8_t*)0xB71C11F7)  /*@bfbba@*/
#define GPIO_DDR7_DD24	(*(volatile uint_io8_t*)0xB71C11F8)  /*@bfbba@*/
#define GPIO_DDR7_DD25	(*(volatile uint_io8_t*)0xB71C11F9)  /*@bfbba@*/
#define GPIO_DDR7_DD26	(*(volatile uint_io8_t*)0xB71C11FA)  /*@bfbba@*/
#define GPIO_DDR7_DD27	(*(volatile uint_io8_t*)0xB71C11FB)  /*@bfbba@*/
#define GPIO_DDR7_DD28	(*(volatile uint_io8_t*)0xB71C11FC)  /*@bfbba@*/
#define GPIO_DDR7_DD29	(*(volatile uint_io8_t*)0xB71C11FD)  /*@bfbba@*/
#define GPIO_DDR7_DD30	(*(volatile uint_io8_t*)0xB71C11FE)  /*@bfbba@*/
#define GPIO_DDR7_DD31	(*(volatile uint_io8_t*)0xB71C11FF)  /*@bfbba@*/

#define GPIO_DDR8	(GPIO.unDDR8.u32Register)  /*@rg@*/
#define GPIO_DDR8_DD0	(*(volatile uint_io8_t*)0xB71C1220)  /*@bfbba@*/
#define GPIO_DDR8_DD1	(*(volatile uint_io8_t*)0xB71C1221)  /*@bfbba@*/
#define GPIO_DDR8_DD2	(*(volatile uint_io8_t*)0xB71C1222)  /*@bfbba@*/
#define GPIO_DDR8_DD3	(*(volatile uint_io8_t*)0xB71C1223)  /*@bfbba@*/
#define GPIO_DDR8_DD4	(*(volatile uint_io8_t*)0xB71C1224)  /*@bfbba@*/
#define GPIO_DDR8_DD5	(*(volatile uint_io8_t*)0xB71C1225)  /*@bfbba@*/
#define GPIO_DDR8_DD6	(*(volatile uint_io8_t*)0xB71C1226)  /*@bfbba@*/
#define GPIO_DDR8_DD7	(*(volatile uint_io8_t*)0xB71C1227)  /*@bfbba@*/
#define GPIO_DDR8_DD8	(*(volatile uint_io8_t*)0xB71C1228)  /*@bfbba@*/
#define GPIO_DDR8_DD9	(*(volatile uint_io8_t*)0xB71C1229)  /*@bfbba@*/
#define GPIO_DDR8_DD10	(*(volatile uint_io8_t*)0xB71C122A)  /*@bfbba@*/
#define GPIO_DDR8_DD11	(*(volatile uint_io8_t*)0xB71C122B)  /*@bfbba@*/
#define GPIO_DDR8_DD12	(*(volatile uint_io8_t*)0xB71C122C)  /*@bfbba@*/
#define GPIO_DDR8_DD13	(*(volatile uint_io8_t*)0xB71C122D)  /*@bfbba@*/
#define GPIO_DDR8_DD14	(*(volatile uint_io8_t*)0xB71C122E)  /*@bfbba@*/
#define GPIO_DDR8_DD15	(*(volatile uint_io8_t*)0xB71C122F)  /*@bfbba@*/
#define GPIO_DDR8_DD16	(*(volatile uint_io8_t*)0xB71C1230)  /*@bfbba@*/
#define GPIO_DDR8_DD17	(*(volatile uint_io8_t*)0xB71C1231)  /*@bfbba@*/
#define GPIO_DDR8_DD18	(*(volatile uint_io8_t*)0xB71C1232)  /*@bfbba@*/
#define GPIO_DDR8_DD19	(*(volatile uint_io8_t*)0xB71C1233)  /*@bfbba@*/
#define GPIO_DDR8_DD20	(*(volatile uint_io8_t*)0xB71C1234)  /*@bfbba@*/
#define GPIO_DDR8_DD21	(*(volatile uint_io8_t*)0xB71C1235)  /*@bfbba@*/
#define GPIO_DDR8_DD22	(*(volatile uint_io8_t*)0xB71C1236)  /*@bfbba@*/
#define GPIO_DDR8_DD23	(*(volatile uint_io8_t*)0xB71C1237)  /*@bfbba@*/
#define GPIO_DDR8_DD24	(*(volatile uint_io8_t*)0xB71C1238)  /*@bfbba@*/
#define GPIO_DDR8_DD25	(*(volatile uint_io8_t*)0xB71C1239)  /*@bfbba@*/
#define GPIO_DDR8_DD26	(*(volatile uint_io8_t*)0xB71C123A)  /*@bfbba@*/
#define GPIO_DDR8_DD27	(*(volatile uint_io8_t*)0xB71C123B)  /*@bfbba@*/
#define GPIO_DDR8_DD28	(*(volatile uint_io8_t*)0xB71C123C)  /*@bfbba@*/
#define GPIO_DDR8_DD29	(*(volatile uint_io8_t*)0xB71C123D)  /*@bfbba@*/
#define GPIO_DDR8_DD30	(*(volatile uint_io8_t*)0xB71C123E)  /*@bfbba@*/
#define GPIO_DDR8_DD31	(*(volatile uint_io8_t*)0xB71C123F)  /*@bfbba@*/

#define GPIO_DDR9	(GPIO.unDDR9.u32Register)  /*@rg@*/
#define GPIO_DDR9_DD0	(*(volatile uint_io8_t*)0xB71C1260)  /*@bfbba@*/
#define GPIO_DDR9_DD1	(*(volatile uint_io8_t*)0xB71C1261)  /*@bfbba@*/
#define GPIO_DDR9_DD2	(*(volatile uint_io8_t*)0xB71C1262)  /*@bfbba@*/
#define GPIO_DDR9_DD3	(*(volatile uint_io8_t*)0xB71C1263)  /*@bfbba@*/
#define GPIO_DDR9_DD4	(*(volatile uint_io8_t*)0xB71C1264)  /*@bfbba@*/
#define GPIO_DDR9_DD5	(*(volatile uint_io8_t*)0xB71C1265)  /*@bfbba@*/
#define GPIO_DDR9_DD6	(*(volatile uint_io8_t*)0xB71C1266)  /*@bfbba@*/
#define GPIO_DDR9_DD7	(*(volatile uint_io8_t*)0xB71C1267)  /*@bfbba@*/
#define GPIO_DDR9_DD8	(*(volatile uint_io8_t*)0xB71C1268)  /*@bfbba@*/
#define GPIO_DDR9_DD9	(*(volatile uint_io8_t*)0xB71C1269)  /*@bfbba@*/
#define GPIO_DDR9_DD10	(*(volatile uint_io8_t*)0xB71C126A)  /*@bfbba@*/
#define GPIO_DDR9_DD11	(*(volatile uint_io8_t*)0xB71C126B)  /*@bfbba@*/
#define GPIO_DDR9_DD12	(*(volatile uint_io8_t*)0xB71C126C)  /*@bfbba@*/
#define GPIO_DDR9_DD13	(*(volatile uint_io8_t*)0xB71C126D)  /*@bfbba@*/
#define GPIO_DDR9_DD14	(*(volatile uint_io8_t*)0xB71C126E)  /*@bfbba@*/
#define GPIO_DDR9_DD15	(*(volatile uint_io8_t*)0xB71C126F)  /*@bfbba@*/
#define GPIO_DDR9_DD16	(*(volatile uint_io8_t*)0xB71C1270)  /*@bfbba@*/
#define GPIO_DDR9_DD17	(*(volatile uint_io8_t*)0xB71C1271)  /*@bfbba@*/
#define GPIO_DDR9_DD18	(*(volatile uint_io8_t*)0xB71C1272)  /*@bfbba@*/
#define GPIO_DDR9_DD19	(*(volatile uint_io8_t*)0xB71C1273)  /*@bfbba@*/
#define GPIO_DDR9_DD20	(*(volatile uint_io8_t*)0xB71C1274)  /*@bfbba@*/
#define GPIO_DDR9_DD21	(*(volatile uint_io8_t*)0xB71C1275)  /*@bfbba@*/
#define GPIO_DDR9_DD22	(*(volatile uint_io8_t*)0xB71C1276)  /*@bfbba@*/
#define GPIO_DDR9_DD23	(*(volatile uint_io8_t*)0xB71C1277)  /*@bfbba@*/
#define GPIO_DDR9_DD24	(*(volatile uint_io8_t*)0xB71C1278)  /*@bfbba@*/
#define GPIO_DDR9_DD25	(*(volatile uint_io8_t*)0xB71C1279)  /*@bfbba@*/
#define GPIO_DDR9_DD26	(*(volatile uint_io8_t*)0xB71C127A)  /*@bfbba@*/
#define GPIO_DDR9_DD27	(*(volatile uint_io8_t*)0xB71C127B)  /*@bfbba@*/
#define GPIO_DDR9_DD28	(*(volatile uint_io8_t*)0xB71C127C)  /*@bfbba@*/
#define GPIO_DDR9_DD29	(*(volatile uint_io8_t*)0xB71C127D)  /*@bfbba@*/
#define GPIO_DDR9_DD30	(*(volatile uint_io8_t*)0xB71C127E)  /*@bfbba@*/
#define GPIO_DDR9_DD31	(*(volatile uint_io8_t*)0xB71C127F)  /*@bfbba@*/

#define GPIO_DDR10	(GPIO.unDDR10.u32Register)  /*@rg@*/
#define GPIO_DDR10_DD0	(*(volatile uint_io8_t*)0xB71C12A0)  /*@bfbba@*/
#define GPIO_DDR10_DD1	(*(volatile uint_io8_t*)0xB71C12A1)  /*@bfbba@*/
#define GPIO_DDR10_DD2	(*(volatile uint_io8_t*)0xB71C12A2)  /*@bfbba@*/
#define GPIO_DDR10_DD3	(*(volatile uint_io8_t*)0xB71C12A3)  /*@bfbba@*/
#define GPIO_DDR10_DD4	(*(volatile uint_io8_t*)0xB71C12A4)  /*@bfbba@*/
#define GPIO_DDR10_DD5	(*(volatile uint_io8_t*)0xB71C12A5)  /*@bfbba@*/
#define GPIO_DDR10_DD6	(*(volatile uint_io8_t*)0xB71C12A6)  /*@bfbba@*/
#define GPIO_DDR10_DD7	(*(volatile uint_io8_t*)0xB71C12A7)  /*@bfbba@*/
#define GPIO_DDR10_DD8	(*(volatile uint_io8_t*)0xB71C12A8)  /*@bfbba@*/
#define GPIO_DDR10_DD9	(*(volatile uint_io8_t*)0xB71C12A9)  /*@bfbba@*/
#define GPIO_DDR10_DD10	(*(volatile uint_io8_t*)0xB71C12AA)  /*@bfbba@*/
#define GPIO_DDR10_DD11	(*(volatile uint_io8_t*)0xB71C12AB)  /*@bfbba@*/
#define GPIO_DDR10_DD12	(*(volatile uint_io8_t*)0xB71C12AC)  /*@bfbba@*/
#define GPIO_DDR10_DD13	(*(volatile uint_io8_t*)0xB71C12AD)  /*@bfbba@*/
#define GPIO_DDR10_DD14	(*(volatile uint_io8_t*)0xB71C12AE)  /*@bfbba@*/
#define GPIO_DDR10_DD15	(*(volatile uint_io8_t*)0xB71C12AF)  /*@bfbba@*/
#define GPIO_DDR10_DD16	(*(volatile uint_io8_t*)0xB71C12B0)  /*@bfbba@*/
#define GPIO_DDR10_DD17	(*(volatile uint_io8_t*)0xB71C12B1)  /*@bfbba@*/
#define GPIO_DDR10_DD18	(*(volatile uint_io8_t*)0xB71C12B2)  /*@bfbba@*/
#define GPIO_DDR10_DD19	(*(volatile uint_io8_t*)0xB71C12B3)  /*@bfbba@*/
#define GPIO_DDR10_DD20	(*(volatile uint_io8_t*)0xB71C12B4)  /*@bfbba@*/
#define GPIO_DDR10_DD21	(*(volatile uint_io8_t*)0xB71C12B5)  /*@bfbba@*/
#define GPIO_DDR10_DD22	(*(volatile uint_io8_t*)0xB71C12B6)  /*@bfbba@*/
#define GPIO_DDR10_DD23	(*(volatile uint_io8_t*)0xB71C12B7)  /*@bfbba@*/
#define GPIO_DDR10_DD24	(*(volatile uint_io8_t*)0xB71C12B8)  /*@bfbba@*/
#define GPIO_DDR10_DD25	(*(volatile uint_io8_t*)0xB71C12B9)  /*@bfbba@*/
#define GPIO_DDR10_DD26	(*(volatile uint_io8_t*)0xB71C12BA)  /*@bfbba@*/
#define GPIO_DDR10_DD27	(*(volatile uint_io8_t*)0xB71C12BB)  /*@bfbba@*/
#define GPIO_DDR10_DD28	(*(volatile uint_io8_t*)0xB71C12BC)  /*@bfbba@*/
#define GPIO_DDR10_DD29	(*(volatile uint_io8_t*)0xB71C12BD)  /*@bfbba@*/
#define GPIO_DDR10_DD30	(*(volatile uint_io8_t*)0xB71C12BE)  /*@bfbba@*/
#define GPIO_DDR10_DD31	(*(volatile uint_io8_t*)0xB71C12BF)  /*@bfbba@*/

#define GPIO_DDR11	(GPIO.unDDR11.u32Register)  /*@rg@*/
#define GPIO_DDR11_DD0	(*(volatile uint_io8_t*)0xB71C12E0)  /*@bfbba@*/
#define GPIO_DDR11_DD1	(*(volatile uint_io8_t*)0xB71C12E1)  /*@bfbba@*/
#define GPIO_DDR11_DD2	(*(volatile uint_io8_t*)0xB71C12E2)  /*@bfbba@*/
#define GPIO_DDR11_DD3	(*(volatile uint_io8_t*)0xB71C12E3)  /*@bfbba@*/
#define GPIO_DDR11_DD4	(*(volatile uint_io8_t*)0xB71C12E4)  /*@bfbba@*/
#define GPIO_DDR11_DD5	(*(volatile uint_io8_t*)0xB71C12E5)  /*@bfbba@*/
#define GPIO_DDR11_DD6	(*(volatile uint_io8_t*)0xB71C12E6)  /*@bfbba@*/
#define GPIO_DDR11_DD7	(*(volatile uint_io8_t*)0xB71C12E7)  /*@bfbba@*/
#define GPIO_DDR11_DD8	(*(volatile uint_io8_t*)0xB71C12E8)  /*@bfbba@*/
#define GPIO_DDR11_DD9	(*(volatile uint_io8_t*)0xB71C12E9)  /*@bfbba@*/
#define GPIO_DDR11_DD10	(*(volatile uint_io8_t*)0xB71C12EA)  /*@bfbba@*/
#define GPIO_DDR11_DD11	(*(volatile uint_io8_t*)0xB71C12EB)  /*@bfbba@*/
#define GPIO_DDR11_DD12	(*(volatile uint_io8_t*)0xB71C12EC)  /*@bfbba@*/
#define GPIO_DDR11_DD13	(*(volatile uint_io8_t*)0xB71C12ED)  /*@bfbba@*/
#define GPIO_DDR11_DD14	(*(volatile uint_io8_t*)0xB71C12EE)  /*@bfbba@*/
#define GPIO_DDR11_DD15	(*(volatile uint_io8_t*)0xB71C12EF)  /*@bfbba@*/
#define GPIO_DDR11_DD16	(*(volatile uint_io8_t*)0xB71C12F0)  /*@bfbba@*/
#define GPIO_DDR11_DD17	(*(volatile uint_io8_t*)0xB71C12F1)  /*@bfbba@*/
#define GPIO_DDR11_DD18	(*(volatile uint_io8_t*)0xB71C12F2)  /*@bfbba@*/
#define GPIO_DDR11_DD19	(*(volatile uint_io8_t*)0xB71C12F3)  /*@bfbba@*/
#define GPIO_DDR11_DD20	(*(volatile uint_io8_t*)0xB71C12F4)  /*@bfbba@*/
#define GPIO_DDR11_DD21	(*(volatile uint_io8_t*)0xB71C12F5)  /*@bfbba@*/
#define GPIO_DDR11_DD22	(*(volatile uint_io8_t*)0xB71C12F6)  /*@bfbba@*/
#define GPIO_DDR11_DD23	(*(volatile uint_io8_t*)0xB71C12F7)  /*@bfbba@*/
#define GPIO_DDR11_DD24	(*(volatile uint_io8_t*)0xB71C12F8)  /*@bfbba@*/
#define GPIO_DDR11_DD25	(*(volatile uint_io8_t*)0xB71C12F9)  /*@bfbba@*/
#define GPIO_DDR11_DD26	(*(volatile uint_io8_t*)0xB71C12FA)  /*@bfbba@*/
#define GPIO_DDR11_DD27	(*(volatile uint_io8_t*)0xB71C12FB)  /*@bfbba@*/
#define GPIO_DDR11_DD28	(*(volatile uint_io8_t*)0xB71C12FC)  /*@bfbba@*/
#define GPIO_DDR11_DD29	(*(volatile uint_io8_t*)0xB71C12FD)  /*@bfbba@*/
#define GPIO_DDR11_DD30	(*(volatile uint_io8_t*)0xB71C12FE)  /*@bfbba@*/
#define GPIO_DDR11_DD31	(*(volatile uint_io8_t*)0xB71C12FF)  /*@bfbba@*/

#define GPIO_DDR12	(GPIO.unDDR12.u32Register)  /*@rg@*/
#define GPIO_DDR12_DD0	(*(volatile uint_io8_t*)0xB71C1320)  /*@bfbba@*/
#define GPIO_DDR12_DD1	(*(volatile uint_io8_t*)0xB71C1321)  /*@bfbba@*/
#define GPIO_DDR12_DD2	(*(volatile uint_io8_t*)0xB71C1322)  /*@bfbba@*/
#define GPIO_DDR12_DD3	(*(volatile uint_io8_t*)0xB71C1323)  /*@bfbba@*/
#define GPIO_DDR12_DD4	(*(volatile uint_io8_t*)0xB71C1324)  /*@bfbba@*/
#define GPIO_DDR12_DD5	(*(volatile uint_io8_t*)0xB71C1325)  /*@bfbba@*/
#define GPIO_DDR12_DD6	(*(volatile uint_io8_t*)0xB71C1326)  /*@bfbba@*/
#define GPIO_DDR12_DD7	(*(volatile uint_io8_t*)0xB71C1327)  /*@bfbba@*/
#define GPIO_DDR12_DD8	(*(volatile uint_io8_t*)0xB71C1328)  /*@bfbba@*/
#define GPIO_DDR12_DD9	(*(volatile uint_io8_t*)0xB71C1329)  /*@bfbba@*/
#define GPIO_DDR12_DD10	(*(volatile uint_io8_t*)0xB71C132A)  /*@bfbba@*/
#define GPIO_DDR12_DD11	(*(volatile uint_io8_t*)0xB71C132B)  /*@bfbba@*/
#define GPIO_DDR12_DD12	(*(volatile uint_io8_t*)0xB71C132C)  /*@bfbba@*/
#define GPIO_DDR12_DD13	(*(volatile uint_io8_t*)0xB71C132D)  /*@bfbba@*/
#define GPIO_DDR12_DD14	(*(volatile uint_io8_t*)0xB71C132E)  /*@bfbba@*/
#define GPIO_DDR12_DD15	(*(volatile uint_io8_t*)0xB71C132F)  /*@bfbba@*/
#define GPIO_DDR12_DD16	(*(volatile uint_io8_t*)0xB71C1330)  /*@bfbba@*/
#define GPIO_DDR12_DD17	(*(volatile uint_io8_t*)0xB71C1331)  /*@bfbba@*/
#define GPIO_DDR12_DD18	(*(volatile uint_io8_t*)0xB71C1332)  /*@bfbba@*/
#define GPIO_DDR12_DD19	(*(volatile uint_io8_t*)0xB71C1333)  /*@bfbba@*/
#define GPIO_DDR12_DD20	(*(volatile uint_io8_t*)0xB71C1334)  /*@bfbba@*/
#define GPIO_DDR12_DD21	(*(volatile uint_io8_t*)0xB71C1335)  /*@bfbba@*/
#define GPIO_DDR12_DD22	(*(volatile uint_io8_t*)0xB71C1336)  /*@bfbba@*/
#define GPIO_DDR12_DD23	(*(volatile uint_io8_t*)0xB71C1337)  /*@bfbba@*/
#define GPIO_DDR12_DD24	(*(volatile uint_io8_t*)0xB71C1338)  /*@bfbba@*/
#define GPIO_DDR12_DD25	(*(volatile uint_io8_t*)0xB71C1339)  /*@bfbba@*/
#define GPIO_DDR12_DD26	(*(volatile uint_io8_t*)0xB71C133A)  /*@bfbba@*/
#define GPIO_DDR12_DD27	(*(volatile uint_io8_t*)0xB71C133B)  /*@bfbba@*/
#define GPIO_DDR12_DD28	(*(volatile uint_io8_t*)0xB71C133C)  /*@bfbba@*/
#define GPIO_DDR12_DD29	(*(volatile uint_io8_t*)0xB71C133D)  /*@bfbba@*/
#define GPIO_DDR12_DD30	(*(volatile uint_io8_t*)0xB71C133E)  /*@bfbba@*/
#define GPIO_DDR12_DD31	(*(volatile uint_io8_t*)0xB71C133F)  /*@bfbba@*/

#define GPIO_DDR13	(GPIO.unDDR13.u32Register)  /*@rg@*/
#define GPIO_DDR13_DD0	(*(volatile uint_io8_t*)0xB71C1360)  /*@bfbba@*/
#define GPIO_DDR13_DD1	(*(volatile uint_io8_t*)0xB71C1361)  /*@bfbba@*/
#define GPIO_DDR13_DD2	(*(volatile uint_io8_t*)0xB71C1362)  /*@bfbba@*/
#define GPIO_DDR13_DD3	(*(volatile uint_io8_t*)0xB71C1363)  /*@bfbba@*/
#define GPIO_DDR13_DD4	(*(volatile uint_io8_t*)0xB71C1364)  /*@bfbba@*/
#define GPIO_DDR13_DD5	(*(volatile uint_io8_t*)0xB71C1365)  /*@bfbba@*/
#define GPIO_DDR13_DD6	(*(volatile uint_io8_t*)0xB71C1366)  /*@bfbba@*/
#define GPIO_DDR13_DD7	(*(volatile uint_io8_t*)0xB71C1367)  /*@bfbba@*/
#define GPIO_DDR13_DD8	(*(volatile uint_io8_t*)0xB71C1368)  /*@bfbba@*/
#define GPIO_DDR13_DD9	(*(volatile uint_io8_t*)0xB71C1369)  /*@bfbba@*/
#define GPIO_DDR13_DD10	(*(volatile uint_io8_t*)0xB71C136A)  /*@bfbba@*/
#define GPIO_DDR13_DD11	(*(volatile uint_io8_t*)0xB71C136B)  /*@bfbba@*/
#define GPIO_DDR13_DD12	(*(volatile uint_io8_t*)0xB71C136C)  /*@bfbba@*/
#define GPIO_DDR13_DD13	(*(volatile uint_io8_t*)0xB71C136D)  /*@bfbba@*/
#define GPIO_DDR13_DD14	(*(volatile uint_io8_t*)0xB71C136E)  /*@bfbba@*/
#define GPIO_DDR13_DD15	(*(volatile uint_io8_t*)0xB71C136F)  /*@bfbba@*/
#define GPIO_DDR13_DD16	(*(volatile uint_io8_t*)0xB71C1370)  /*@bfbba@*/
#define GPIO_DDR13_DD17	(*(volatile uint_io8_t*)0xB71C1371)  /*@bfbba@*/
#define GPIO_DDR13_DD18	(*(volatile uint_io8_t*)0xB71C1372)  /*@bfbba@*/
#define GPIO_DDR13_DD19	(*(volatile uint_io8_t*)0xB71C1373)  /*@bfbba@*/
#define GPIO_DDR13_DD20	(*(volatile uint_io8_t*)0xB71C1374)  /*@bfbba@*/
#define GPIO_DDR13_DD21	(*(volatile uint_io8_t*)0xB71C1375)  /*@bfbba@*/
#define GPIO_DDR13_DD22	(*(volatile uint_io8_t*)0xB71C1376)  /*@bfbba@*/
#define GPIO_DDR13_DD23	(*(volatile uint_io8_t*)0xB71C1377)  /*@bfbba@*/
#define GPIO_DDR13_DD24	(*(volatile uint_io8_t*)0xB71C1378)  /*@bfbba@*/
#define GPIO_DDR13_DD25	(*(volatile uint_io8_t*)0xB71C1379)  /*@bfbba@*/
#define GPIO_DDR13_DD26	(*(volatile uint_io8_t*)0xB71C137A)  /*@bfbba@*/
#define GPIO_DDR13_DD27	(*(volatile uint_io8_t*)0xB71C137B)  /*@bfbba@*/
#define GPIO_DDR13_DD28	(*(volatile uint_io8_t*)0xB71C137C)  /*@bfbba@*/
#define GPIO_DDR13_DD29	(*(volatile uint_io8_t*)0xB71C137D)  /*@bfbba@*/
#define GPIO_DDR13_DD30	(*(volatile uint_io8_t*)0xB71C137E)  /*@bfbba@*/
#define GPIO_DDR13_DD31	(*(volatile uint_io8_t*)0xB71C137F)  /*@bfbba@*/

#define GPIO_DDR14	(GPIO.unDDR14.u32Register)  /*@rg@*/
#define GPIO_DDR14_DD0	(*(volatile uint_io8_t*)0xB71C13A0)  /*@bfbba@*/
#define GPIO_DDR14_DD1	(*(volatile uint_io8_t*)0xB71C13A1)  /*@bfbba@*/
#define GPIO_DDR14_DD2	(*(volatile uint_io8_t*)0xB71C13A2)  /*@bfbba@*/
#define GPIO_DDR14_DD3	(*(volatile uint_io8_t*)0xB71C13A3)  /*@bfbba@*/
#define GPIO_DDR14_DD4	(*(volatile uint_io8_t*)0xB71C13A4)  /*@bfbba@*/
#define GPIO_DDR14_DD5	(*(volatile uint_io8_t*)0xB71C13A5)  /*@bfbba@*/
#define GPIO_DDR14_DD6	(*(volatile uint_io8_t*)0xB71C13A6)  /*@bfbba@*/
#define GPIO_DDR14_DD7	(*(volatile uint_io8_t*)0xB71C13A7)  /*@bfbba@*/
#define GPIO_DDR14_DD8	(*(volatile uint_io8_t*)0xB71C13A8)  /*@bfbba@*/
#define GPIO_DDR14_DD9	(*(volatile uint_io8_t*)0xB71C13A9)  /*@bfbba@*/
#define GPIO_DDR14_DD10	(*(volatile uint_io8_t*)0xB71C13AA)  /*@bfbba@*/
#define GPIO_DDR14_DD11	(*(volatile uint_io8_t*)0xB71C13AB)  /*@bfbba@*/
#define GPIO_DDR14_DD12	(*(volatile uint_io8_t*)0xB71C13AC)  /*@bfbba@*/
#define GPIO_DDR14_DD13	(*(volatile uint_io8_t*)0xB71C13AD)  /*@bfbba@*/
#define GPIO_DDR14_DD14	(*(volatile uint_io8_t*)0xB71C13AE)  /*@bfbba@*/
#define GPIO_DDR14_DD15	(*(volatile uint_io8_t*)0xB71C13AF)  /*@bfbba@*/
#define GPIO_DDR14_DD16	(*(volatile uint_io8_t*)0xB71C13B0)  /*@bfbba@*/
#define GPIO_DDR14_DD17	(*(volatile uint_io8_t*)0xB71C13B1)  /*@bfbba@*/
#define GPIO_DDR14_DD18	(*(volatile uint_io8_t*)0xB71C13B2)  /*@bfbba@*/
#define GPIO_DDR14_DD19	(*(volatile uint_io8_t*)0xB71C13B3)  /*@bfbba@*/
#define GPIO_DDR14_DD20	(*(volatile uint_io8_t*)0xB71C13B4)  /*@bfbba@*/
#define GPIO_DDR14_DD21	(*(volatile uint_io8_t*)0xB71C13B5)  /*@bfbba@*/
#define GPIO_DDR14_DD22	(*(volatile uint_io8_t*)0xB71C13B6)  /*@bfbba@*/
#define GPIO_DDR14_DD23	(*(volatile uint_io8_t*)0xB71C13B7)  /*@bfbba@*/
#define GPIO_DDR14_DD24	(*(volatile uint_io8_t*)0xB71C13B8)  /*@bfbba@*/
#define GPIO_DDR14_DD25	(*(volatile uint_io8_t*)0xB71C13B9)  /*@bfbba@*/
#define GPIO_DDR14_DD26	(*(volatile uint_io8_t*)0xB71C13BA)  /*@bfbba@*/
#define GPIO_DDR14_DD27	(*(volatile uint_io8_t*)0xB71C13BB)  /*@bfbba@*/
#define GPIO_DDR14_DD28	(*(volatile uint_io8_t*)0xB71C13BC)  /*@bfbba@*/
#define GPIO_DDR14_DD29	(*(volatile uint_io8_t*)0xB71C13BD)  /*@bfbba@*/
#define GPIO_DDR14_DD30	(*(volatile uint_io8_t*)0xB71C13BE)  /*@bfbba@*/
#define GPIO_DDR14_DD31	(*(volatile uint_io8_t*)0xB71C13BF)  /*@bfbba@*/

#define GPIO_DDR15	(GPIO.unDDR15.u32Register)  /*@rg@*/
#define GPIO_DDR15_DD0	(*(volatile uint_io8_t*)0xB71C13E0)  /*@bfbba@*/
#define GPIO_DDR15_DD1	(*(volatile uint_io8_t*)0xB71C13E1)  /*@bfbba@*/
#define GPIO_DDR15_DD2	(*(volatile uint_io8_t*)0xB71C13E2)  /*@bfbba@*/
#define GPIO_DDR15_DD3	(*(volatile uint_io8_t*)0xB71C13E3)  /*@bfbba@*/
#define GPIO_DDR15_DD4	(*(volatile uint_io8_t*)0xB71C13E4)  /*@bfbba@*/
#define GPIO_DDR15_DD5	(*(volatile uint_io8_t*)0xB71C13E5)  /*@bfbba@*/
#define GPIO_DDR15_DD6	(*(volatile uint_io8_t*)0xB71C13E6)  /*@bfbba@*/
#define GPIO_DDR15_DD7	(*(volatile uint_io8_t*)0xB71C13E7)  /*@bfbba@*/
#define GPIO_DDR15_DD8	(*(volatile uint_io8_t*)0xB71C13E8)  /*@bfbba@*/
#define GPIO_DDR15_DD9	(*(volatile uint_io8_t*)0xB71C13E9)  /*@bfbba@*/
#define GPIO_DDR15_DD10	(*(volatile uint_io8_t*)0xB71C13EA)  /*@bfbba@*/
#define GPIO_DDR15_DD11	(*(volatile uint_io8_t*)0xB71C13EB)  /*@bfbba@*/
#define GPIO_DDR15_DD12	(*(volatile uint_io8_t*)0xB71C13EC)  /*@bfbba@*/
#define GPIO_DDR15_DD13	(*(volatile uint_io8_t*)0xB71C13ED)  /*@bfbba@*/
#define GPIO_DDR15_DD14	(*(volatile uint_io8_t*)0xB71C13EE)  /*@bfbba@*/
#define GPIO_DDR15_DD15	(*(volatile uint_io8_t*)0xB71C13EF)  /*@bfbba@*/
#define GPIO_DDR15_DD16	(*(volatile uint_io8_t*)0xB71C13F0)  /*@bfbba@*/
#define GPIO_DDR15_DD17	(*(volatile uint_io8_t*)0xB71C13F1)  /*@bfbba@*/
#define GPIO_DDR15_DD18	(*(volatile uint_io8_t*)0xB71C13F2)  /*@bfbba@*/
#define GPIO_DDR15_DD19	(*(volatile uint_io8_t*)0xB71C13F3)  /*@bfbba@*/
#define GPIO_DDR15_DD20	(*(volatile uint_io8_t*)0xB71C13F4)  /*@bfbba@*/
#define GPIO_DDR15_DD21	(*(volatile uint_io8_t*)0xB71C13F5)  /*@bfbba@*/
#define GPIO_DDR15_DD22	(*(volatile uint_io8_t*)0xB71C13F6)  /*@bfbba@*/
#define GPIO_DDR15_DD23	(*(volatile uint_io8_t*)0xB71C13F7)  /*@bfbba@*/
#define GPIO_DDR15_DD24	(*(volatile uint_io8_t*)0xB71C13F8)  /*@bfbba@*/
#define GPIO_DDR15_DD25	(*(volatile uint_io8_t*)0xB71C13F9)  /*@bfbba@*/
#define GPIO_DDR15_DD26	(*(volatile uint_io8_t*)0xB71C13FA)  /*@bfbba@*/
#define GPIO_DDR15_DD27	(*(volatile uint_io8_t*)0xB71C13FB)  /*@bfbba@*/
#define GPIO_DDR15_DD28	(*(volatile uint_io8_t*)0xB71C13FC)  /*@bfbba@*/
#define GPIO_DDR15_DD29	(*(volatile uint_io8_t*)0xB71C13FD)  /*@bfbba@*/
#define GPIO_DDR15_DD30	(*(volatile uint_io8_t*)0xB71C13FE)  /*@bfbba@*/
#define GPIO_DDR15_DD31	(*(volatile uint_io8_t*)0xB71C13FF)  /*@bfbba@*/

typedef struct stc_gpio_ddrn_field{
    uint_io32_t		u1DD0:1;
    uint_io32_t		u1DD1:1;
    uint_io32_t		u1DD2:1;
    uint_io32_t		u1DD3:1;
    uint_io32_t		u1DD4:1;
    uint_io32_t		u1DD5:1;
    uint_io32_t		u1DD6:1;
    uint_io32_t		u1DD7:1;
    uint_io32_t		u1DD8:1;
    uint_io32_t		u1DD9:1;
    uint_io32_t		u1DD10:1;
    uint_io32_t		u1DD11:1;
    uint_io32_t		u1DD12:1;
    uint_io32_t		u1DD13:1;
    uint_io32_t		u1DD14:1;
    uint_io32_t		u1DD15:1;
    uint_io32_t		u1DD16:1;
    uint_io32_t		u1DD17:1;
    uint_io32_t		u1DD18:1;
    uint_io32_t		u1DD19:1;
    uint_io32_t		u1DD20:1;
    uint_io32_t		u1DD21:1;
    uint_io32_t		u1DD22:1;
    uint_io32_t		u1DD23:1;
    uint_io32_t		u1DD24:1;
    uint_io32_t		u1DD25:1;
    uint_io32_t		u1DD26:1;
    uint_io32_t		u1DD27:1;
    uint_io32_t		u1DD28:1;
    uint_io32_t		u1DD29:1;
    uint_io32_t		u1DD30:1;
    uint_io32_t		u1DD31:1;
}stc_gpio_ddrn_field_t;

typedef union un_gpio_ddrn{
    uint_io32_t		u32Register;
    stc_gpio_ddrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_ddrn_t;

/* PIDR[0-15] */
#define GPIO_PIDR0	(GPIO.unPIDR0.u32Register)  /*@rg@*/
#define GPIO_PIDR0_PID0	(*(volatile uint_io8_t*)0xB71C1800)  /*@bfbba@*/
#define GPIO_PIDR0_PID1	(*(volatile uint_io8_t*)0xB71C1801)  /*@bfbba@*/
#define GPIO_PIDR0_PID2	(*(volatile uint_io8_t*)0xB71C1802)  /*@bfbba@*/
#define GPIO_PIDR0_PID3	(*(volatile uint_io8_t*)0xB71C1803)  /*@bfbba@*/
#define GPIO_PIDR0_PID4	(*(volatile uint_io8_t*)0xB71C1804)  /*@bfbba@*/
#define GPIO_PIDR0_PID5	(*(volatile uint_io8_t*)0xB71C1805)  /*@bfbba@*/
#define GPIO_PIDR0_PID6	(*(volatile uint_io8_t*)0xB71C1806)  /*@bfbba@*/
#define GPIO_PIDR0_PID7	(*(volatile uint_io8_t*)0xB71C1807)  /*@bfbba@*/
#define GPIO_PIDR0_PID8	(*(volatile uint_io8_t*)0xB71C1808)  /*@bfbba@*/
#define GPIO_PIDR0_PID9	(*(volatile uint_io8_t*)0xB71C1809)  /*@bfbba@*/
#define GPIO_PIDR0_PID10	(*(volatile uint_io8_t*)0xB71C180A)  /*@bfbba@*/
#define GPIO_PIDR0_PID11	(*(volatile uint_io8_t*)0xB71C180B)  /*@bfbba@*/
#define GPIO_PIDR0_PID12	(*(volatile uint_io8_t*)0xB71C180C)  /*@bfbba@*/
#define GPIO_PIDR0_PID13	(*(volatile uint_io8_t*)0xB71C180D)  /*@bfbba@*/
#define GPIO_PIDR0_PID14	(*(volatile uint_io8_t*)0xB71C180E)  /*@bfbba@*/
#define GPIO_PIDR0_PID15	(*(volatile uint_io8_t*)0xB71C180F)  /*@bfbba@*/
#define GPIO_PIDR0_PID16	(*(volatile uint_io8_t*)0xB71C1810)  /*@bfbba@*/
#define GPIO_PIDR0_PID17	(*(volatile uint_io8_t*)0xB71C1811)  /*@bfbba@*/
#define GPIO_PIDR0_PID18	(*(volatile uint_io8_t*)0xB71C1812)  /*@bfbba@*/
#define GPIO_PIDR0_PID19	(*(volatile uint_io8_t*)0xB71C1813)  /*@bfbba@*/
#define GPIO_PIDR0_PID20	(*(volatile uint_io8_t*)0xB71C1814)  /*@bfbba@*/
#define GPIO_PIDR0_PID21	(*(volatile uint_io8_t*)0xB71C1815)  /*@bfbba@*/
#define GPIO_PIDR0_PID22	(*(volatile uint_io8_t*)0xB71C1816)  /*@bfbba@*/
#define GPIO_PIDR0_PID23	(*(volatile uint_io8_t*)0xB71C1817)  /*@bfbba@*/
#define GPIO_PIDR0_PID24	(*(volatile uint_io8_t*)0xB71C1818)  /*@bfbba@*/
#define GPIO_PIDR0_PID25	(*(volatile uint_io8_t*)0xB71C1819)  /*@bfbba@*/
#define GPIO_PIDR0_PID26	(*(volatile uint_io8_t*)0xB71C181A)  /*@bfbba@*/
#define GPIO_PIDR0_PID27	(*(volatile uint_io8_t*)0xB71C181B)  /*@bfbba@*/
#define GPIO_PIDR0_PID28	(*(volatile uint_io8_t*)0xB71C181C)  /*@bfbba@*/
#define GPIO_PIDR0_PID29	(*(volatile uint_io8_t*)0xB71C181D)  /*@bfbba@*/
#define GPIO_PIDR0_PID30	(*(volatile uint_io8_t*)0xB71C181E)  /*@bfbba@*/
#define GPIO_PIDR0_PID31	(*(volatile uint_io8_t*)0xB71C181F)  /*@bfbba@*/

#define GPIO_PIDR1	(GPIO.unPIDR1.u32Register)  /*@rg@*/
#define GPIO_PIDR1_PID0	(*(volatile uint_io8_t*)0xB71C1820)  /*@bfbba@*/
#define GPIO_PIDR1_PID1	(*(volatile uint_io8_t*)0xB71C1821)  /*@bfbba@*/
#define GPIO_PIDR1_PID2	(*(volatile uint_io8_t*)0xB71C1822)  /*@bfbba@*/
#define GPIO_PIDR1_PID3	(*(volatile uint_io8_t*)0xB71C1823)  /*@bfbba@*/
#define GPIO_PIDR1_PID4	(*(volatile uint_io8_t*)0xB71C1824)  /*@bfbba@*/
#define GPIO_PIDR1_PID5	(*(volatile uint_io8_t*)0xB71C1825)  /*@bfbba@*/
#define GPIO_PIDR1_PID6	(*(volatile uint_io8_t*)0xB71C1826)  /*@bfbba@*/
#define GPIO_PIDR1_PID7	(*(volatile uint_io8_t*)0xB71C1827)  /*@bfbba@*/
#define GPIO_PIDR1_PID8	(*(volatile uint_io8_t*)0xB71C1828)  /*@bfbba@*/
#define GPIO_PIDR1_PID9	(*(volatile uint_io8_t*)0xB71C1829)  /*@bfbba@*/
#define GPIO_PIDR1_PID10	(*(volatile uint_io8_t*)0xB71C182A)  /*@bfbba@*/
#define GPIO_PIDR1_PID11	(*(volatile uint_io8_t*)0xB71C182B)  /*@bfbba@*/
#define GPIO_PIDR1_PID12	(*(volatile uint_io8_t*)0xB71C182C)  /*@bfbba@*/
#define GPIO_PIDR1_PID13	(*(volatile uint_io8_t*)0xB71C182D)  /*@bfbba@*/
#define GPIO_PIDR1_PID14	(*(volatile uint_io8_t*)0xB71C182E)  /*@bfbba@*/
#define GPIO_PIDR1_PID15	(*(volatile uint_io8_t*)0xB71C182F)  /*@bfbba@*/
#define GPIO_PIDR1_PID16	(*(volatile uint_io8_t*)0xB71C1830)  /*@bfbba@*/
#define GPIO_PIDR1_PID17	(*(volatile uint_io8_t*)0xB71C1831)  /*@bfbba@*/
#define GPIO_PIDR1_PID18	(*(volatile uint_io8_t*)0xB71C1832)  /*@bfbba@*/
#define GPIO_PIDR1_PID19	(*(volatile uint_io8_t*)0xB71C1833)  /*@bfbba@*/
#define GPIO_PIDR1_PID20	(*(volatile uint_io8_t*)0xB71C1834)  /*@bfbba@*/
#define GPIO_PIDR1_PID21	(*(volatile uint_io8_t*)0xB71C1835)  /*@bfbba@*/
#define GPIO_PIDR1_PID22	(*(volatile uint_io8_t*)0xB71C1836)  /*@bfbba@*/
#define GPIO_PIDR1_PID23	(*(volatile uint_io8_t*)0xB71C1837)  /*@bfbba@*/
#define GPIO_PIDR1_PID24	(*(volatile uint_io8_t*)0xB71C1838)  /*@bfbba@*/
#define GPIO_PIDR1_PID25	(*(volatile uint_io8_t*)0xB71C1839)  /*@bfbba@*/
#define GPIO_PIDR1_PID26	(*(volatile uint_io8_t*)0xB71C183A)  /*@bfbba@*/
#define GPIO_PIDR1_PID27	(*(volatile uint_io8_t*)0xB71C183B)  /*@bfbba@*/
#define GPIO_PIDR1_PID28	(*(volatile uint_io8_t*)0xB71C183C)  /*@bfbba@*/
#define GPIO_PIDR1_PID29	(*(volatile uint_io8_t*)0xB71C183D)  /*@bfbba@*/
#define GPIO_PIDR1_PID30	(*(volatile uint_io8_t*)0xB71C183E)  /*@bfbba@*/
#define GPIO_PIDR1_PID31	(*(volatile uint_io8_t*)0xB71C183F)  /*@bfbba@*/

#define GPIO_PIDR2	(GPIO.unPIDR2.u32Register)  /*@rg@*/
#define GPIO_PIDR2_PID0	(*(volatile uint_io8_t*)0xB71C1840)  /*@bfbba@*/
#define GPIO_PIDR2_PID1	(*(volatile uint_io8_t*)0xB71C1841)  /*@bfbba@*/
#define GPIO_PIDR2_PID2	(*(volatile uint_io8_t*)0xB71C1842)  /*@bfbba@*/
#define GPIO_PIDR2_PID3	(*(volatile uint_io8_t*)0xB71C1843)  /*@bfbba@*/
#define GPIO_PIDR2_PID4	(*(volatile uint_io8_t*)0xB71C1844)  /*@bfbba@*/
#define GPIO_PIDR2_PID5	(*(volatile uint_io8_t*)0xB71C1845)  /*@bfbba@*/
#define GPIO_PIDR2_PID6	(*(volatile uint_io8_t*)0xB71C1846)  /*@bfbba@*/
#define GPIO_PIDR2_PID7	(*(volatile uint_io8_t*)0xB71C1847)  /*@bfbba@*/
#define GPIO_PIDR2_PID8	(*(volatile uint_io8_t*)0xB71C1848)  /*@bfbba@*/
#define GPIO_PIDR2_PID9	(*(volatile uint_io8_t*)0xB71C1849)  /*@bfbba@*/
#define GPIO_PIDR2_PID10	(*(volatile uint_io8_t*)0xB71C184A)  /*@bfbba@*/
#define GPIO_PIDR2_PID11	(*(volatile uint_io8_t*)0xB71C184B)  /*@bfbba@*/
#define GPIO_PIDR2_PID12	(*(volatile uint_io8_t*)0xB71C184C)  /*@bfbba@*/
#define GPIO_PIDR2_PID13	(*(volatile uint_io8_t*)0xB71C184D)  /*@bfbba@*/
#define GPIO_PIDR2_PID14	(*(volatile uint_io8_t*)0xB71C184E)  /*@bfbba@*/
#define GPIO_PIDR2_PID15	(*(volatile uint_io8_t*)0xB71C184F)  /*@bfbba@*/
#define GPIO_PIDR2_PID16	(*(volatile uint_io8_t*)0xB71C1850)  /*@bfbba@*/
#define GPIO_PIDR2_PID17	(*(volatile uint_io8_t*)0xB71C1851)  /*@bfbba@*/
#define GPIO_PIDR2_PID18	(*(volatile uint_io8_t*)0xB71C1852)  /*@bfbba@*/
#define GPIO_PIDR2_PID19	(*(volatile uint_io8_t*)0xB71C1853)  /*@bfbba@*/
#define GPIO_PIDR2_PID20	(*(volatile uint_io8_t*)0xB71C1854)  /*@bfbba@*/
#define GPIO_PIDR2_PID21	(*(volatile uint_io8_t*)0xB71C1855)  /*@bfbba@*/
#define GPIO_PIDR2_PID22	(*(volatile uint_io8_t*)0xB71C1856)  /*@bfbba@*/
#define GPIO_PIDR2_PID23	(*(volatile uint_io8_t*)0xB71C1857)  /*@bfbba@*/
#define GPIO_PIDR2_PID24	(*(volatile uint_io8_t*)0xB71C1858)  /*@bfbba@*/
#define GPIO_PIDR2_PID25	(*(volatile uint_io8_t*)0xB71C1859)  /*@bfbba@*/
#define GPIO_PIDR2_PID26	(*(volatile uint_io8_t*)0xB71C185A)  /*@bfbba@*/
#define GPIO_PIDR2_PID27	(*(volatile uint_io8_t*)0xB71C185B)  /*@bfbba@*/
#define GPIO_PIDR2_PID28	(*(volatile uint_io8_t*)0xB71C185C)  /*@bfbba@*/
#define GPIO_PIDR2_PID29	(*(volatile uint_io8_t*)0xB71C185D)  /*@bfbba@*/
#define GPIO_PIDR2_PID30	(*(volatile uint_io8_t*)0xB71C185E)  /*@bfbba@*/
#define GPIO_PIDR2_PID31	(*(volatile uint_io8_t*)0xB71C185F)  /*@bfbba@*/

#define GPIO_PIDR3	(GPIO.unPIDR3.u32Register)  /*@rg@*/
#define GPIO_PIDR3_PID0	(*(volatile uint_io8_t*)0xB71C1860)  /*@bfbba@*/
#define GPIO_PIDR3_PID1	(*(volatile uint_io8_t*)0xB71C1861)  /*@bfbba@*/
#define GPIO_PIDR3_PID2	(*(volatile uint_io8_t*)0xB71C1862)  /*@bfbba@*/
#define GPIO_PIDR3_PID3	(*(volatile uint_io8_t*)0xB71C1863)  /*@bfbba@*/
#define GPIO_PIDR3_PID4	(*(volatile uint_io8_t*)0xB71C1864)  /*@bfbba@*/
#define GPIO_PIDR3_PID5	(*(volatile uint_io8_t*)0xB71C1865)  /*@bfbba@*/
#define GPIO_PIDR3_PID6	(*(volatile uint_io8_t*)0xB71C1866)  /*@bfbba@*/
#define GPIO_PIDR3_PID7	(*(volatile uint_io8_t*)0xB71C1867)  /*@bfbba@*/
#define GPIO_PIDR3_PID8	(*(volatile uint_io8_t*)0xB71C1868)  /*@bfbba@*/
#define GPIO_PIDR3_PID9	(*(volatile uint_io8_t*)0xB71C1869)  /*@bfbba@*/
#define GPIO_PIDR3_PID10	(*(volatile uint_io8_t*)0xB71C186A)  /*@bfbba@*/
#define GPIO_PIDR3_PID11	(*(volatile uint_io8_t*)0xB71C186B)  /*@bfbba@*/
#define GPIO_PIDR3_PID12	(*(volatile uint_io8_t*)0xB71C186C)  /*@bfbba@*/
#define GPIO_PIDR3_PID13	(*(volatile uint_io8_t*)0xB71C186D)  /*@bfbba@*/
#define GPIO_PIDR3_PID14	(*(volatile uint_io8_t*)0xB71C186E)  /*@bfbba@*/
#define GPIO_PIDR3_PID15	(*(volatile uint_io8_t*)0xB71C186F)  /*@bfbba@*/
#define GPIO_PIDR3_PID16	(*(volatile uint_io8_t*)0xB71C1870)  /*@bfbba@*/
#define GPIO_PIDR3_PID17	(*(volatile uint_io8_t*)0xB71C1871)  /*@bfbba@*/
#define GPIO_PIDR3_PID18	(*(volatile uint_io8_t*)0xB71C1872)  /*@bfbba@*/
#define GPIO_PIDR3_PID19	(*(volatile uint_io8_t*)0xB71C1873)  /*@bfbba@*/
#define GPIO_PIDR3_PID20	(*(volatile uint_io8_t*)0xB71C1874)  /*@bfbba@*/
#define GPIO_PIDR3_PID21	(*(volatile uint_io8_t*)0xB71C1875)  /*@bfbba@*/
#define GPIO_PIDR3_PID22	(*(volatile uint_io8_t*)0xB71C1876)  /*@bfbba@*/
#define GPIO_PIDR3_PID23	(*(volatile uint_io8_t*)0xB71C1877)  /*@bfbba@*/
#define GPIO_PIDR3_PID24	(*(volatile uint_io8_t*)0xB71C1878)  /*@bfbba@*/
#define GPIO_PIDR3_PID25	(*(volatile uint_io8_t*)0xB71C1879)  /*@bfbba@*/
#define GPIO_PIDR3_PID26	(*(volatile uint_io8_t*)0xB71C187A)  /*@bfbba@*/
#define GPIO_PIDR3_PID27	(*(volatile uint_io8_t*)0xB71C187B)  /*@bfbba@*/
#define GPIO_PIDR3_PID28	(*(volatile uint_io8_t*)0xB71C187C)  /*@bfbba@*/
#define GPIO_PIDR3_PID29	(*(volatile uint_io8_t*)0xB71C187D)  /*@bfbba@*/
#define GPIO_PIDR3_PID30	(*(volatile uint_io8_t*)0xB71C187E)  /*@bfbba@*/
#define GPIO_PIDR3_PID31	(*(volatile uint_io8_t*)0xB71C187F)  /*@bfbba@*/

#define GPIO_PIDR4	(GPIO.unPIDR4.u32Register)  /*@rg@*/
#define GPIO_PIDR4_PID0	(*(volatile uint_io8_t*)0xB71C1880)  /*@bfbba@*/
#define GPIO_PIDR4_PID1	(*(volatile uint_io8_t*)0xB71C1881)  /*@bfbba@*/
#define GPIO_PIDR4_PID2	(*(volatile uint_io8_t*)0xB71C1882)  /*@bfbba@*/
#define GPIO_PIDR4_PID3	(*(volatile uint_io8_t*)0xB71C1883)  /*@bfbba@*/
#define GPIO_PIDR4_PID4	(*(volatile uint_io8_t*)0xB71C1884)  /*@bfbba@*/
#define GPIO_PIDR4_PID5	(*(volatile uint_io8_t*)0xB71C1885)  /*@bfbba@*/
#define GPIO_PIDR4_PID6	(*(volatile uint_io8_t*)0xB71C1886)  /*@bfbba@*/
#define GPIO_PIDR4_PID7	(*(volatile uint_io8_t*)0xB71C1887)  /*@bfbba@*/
#define GPIO_PIDR4_PID8	(*(volatile uint_io8_t*)0xB71C1888)  /*@bfbba@*/
#define GPIO_PIDR4_PID9	(*(volatile uint_io8_t*)0xB71C1889)  /*@bfbba@*/
#define GPIO_PIDR4_PID10	(*(volatile uint_io8_t*)0xB71C188A)  /*@bfbba@*/
#define GPIO_PIDR4_PID11	(*(volatile uint_io8_t*)0xB71C188B)  /*@bfbba@*/
#define GPIO_PIDR4_PID12	(*(volatile uint_io8_t*)0xB71C188C)  /*@bfbba@*/
#define GPIO_PIDR4_PID13	(*(volatile uint_io8_t*)0xB71C188D)  /*@bfbba@*/
#define GPIO_PIDR4_PID14	(*(volatile uint_io8_t*)0xB71C188E)  /*@bfbba@*/
#define GPIO_PIDR4_PID15	(*(volatile uint_io8_t*)0xB71C188F)  /*@bfbba@*/
#define GPIO_PIDR4_PID16	(*(volatile uint_io8_t*)0xB71C1890)  /*@bfbba@*/
#define GPIO_PIDR4_PID17	(*(volatile uint_io8_t*)0xB71C1891)  /*@bfbba@*/
#define GPIO_PIDR4_PID18	(*(volatile uint_io8_t*)0xB71C1892)  /*@bfbba@*/
#define GPIO_PIDR4_PID19	(*(volatile uint_io8_t*)0xB71C1893)  /*@bfbba@*/
#define GPIO_PIDR4_PID20	(*(volatile uint_io8_t*)0xB71C1894)  /*@bfbba@*/
#define GPIO_PIDR4_PID21	(*(volatile uint_io8_t*)0xB71C1895)  /*@bfbba@*/
#define GPIO_PIDR4_PID22	(*(volatile uint_io8_t*)0xB71C1896)  /*@bfbba@*/
#define GPIO_PIDR4_PID23	(*(volatile uint_io8_t*)0xB71C1897)  /*@bfbba@*/
#define GPIO_PIDR4_PID24	(*(volatile uint_io8_t*)0xB71C1898)  /*@bfbba@*/
#define GPIO_PIDR4_PID25	(*(volatile uint_io8_t*)0xB71C1899)  /*@bfbba@*/
#define GPIO_PIDR4_PID26	(*(volatile uint_io8_t*)0xB71C189A)  /*@bfbba@*/
#define GPIO_PIDR4_PID27	(*(volatile uint_io8_t*)0xB71C189B)  /*@bfbba@*/
#define GPIO_PIDR4_PID28	(*(volatile uint_io8_t*)0xB71C189C)  /*@bfbba@*/
#define GPIO_PIDR4_PID29	(*(volatile uint_io8_t*)0xB71C189D)  /*@bfbba@*/
#define GPIO_PIDR4_PID30	(*(volatile uint_io8_t*)0xB71C189E)  /*@bfbba@*/
#define GPIO_PIDR4_PID31	(*(volatile uint_io8_t*)0xB71C189F)  /*@bfbba@*/

#define GPIO_PIDR5	(GPIO.unPIDR5.u32Register)  /*@rg@*/
#define GPIO_PIDR5_PID0	(*(volatile uint_io8_t*)0xB71C18A0)  /*@bfbba@*/
#define GPIO_PIDR5_PID1	(*(volatile uint_io8_t*)0xB71C18A1)  /*@bfbba@*/
#define GPIO_PIDR5_PID2	(*(volatile uint_io8_t*)0xB71C18A2)  /*@bfbba@*/
#define GPIO_PIDR5_PID3	(*(volatile uint_io8_t*)0xB71C18A3)  /*@bfbba@*/
#define GPIO_PIDR5_PID4	(*(volatile uint_io8_t*)0xB71C18A4)  /*@bfbba@*/
#define GPIO_PIDR5_PID5	(*(volatile uint_io8_t*)0xB71C18A5)  /*@bfbba@*/
#define GPIO_PIDR5_PID6	(*(volatile uint_io8_t*)0xB71C18A6)  /*@bfbba@*/
#define GPIO_PIDR5_PID7	(*(volatile uint_io8_t*)0xB71C18A7)  /*@bfbba@*/
#define GPIO_PIDR5_PID8	(*(volatile uint_io8_t*)0xB71C18A8)  /*@bfbba@*/
#define GPIO_PIDR5_PID9	(*(volatile uint_io8_t*)0xB71C18A9)  /*@bfbba@*/
#define GPIO_PIDR5_PID10	(*(volatile uint_io8_t*)0xB71C18AA)  /*@bfbba@*/
#define GPIO_PIDR5_PID11	(*(volatile uint_io8_t*)0xB71C18AB)  /*@bfbba@*/
#define GPIO_PIDR5_PID12	(*(volatile uint_io8_t*)0xB71C18AC)  /*@bfbba@*/
#define GPIO_PIDR5_PID13	(*(volatile uint_io8_t*)0xB71C18AD)  /*@bfbba@*/
#define GPIO_PIDR5_PID14	(*(volatile uint_io8_t*)0xB71C18AE)  /*@bfbba@*/
#define GPIO_PIDR5_PID15	(*(volatile uint_io8_t*)0xB71C18AF)  /*@bfbba@*/
#define GPIO_PIDR5_PID16	(*(volatile uint_io8_t*)0xB71C18B0)  /*@bfbba@*/
#define GPIO_PIDR5_PID17	(*(volatile uint_io8_t*)0xB71C18B1)  /*@bfbba@*/
#define GPIO_PIDR5_PID18	(*(volatile uint_io8_t*)0xB71C18B2)  /*@bfbba@*/
#define GPIO_PIDR5_PID19	(*(volatile uint_io8_t*)0xB71C18B3)  /*@bfbba@*/
#define GPIO_PIDR5_PID20	(*(volatile uint_io8_t*)0xB71C18B4)  /*@bfbba@*/
#define GPIO_PIDR5_PID21	(*(volatile uint_io8_t*)0xB71C18B5)  /*@bfbba@*/
#define GPIO_PIDR5_PID22	(*(volatile uint_io8_t*)0xB71C18B6)  /*@bfbba@*/
#define GPIO_PIDR5_PID23	(*(volatile uint_io8_t*)0xB71C18B7)  /*@bfbba@*/
#define GPIO_PIDR5_PID24	(*(volatile uint_io8_t*)0xB71C18B8)  /*@bfbba@*/
#define GPIO_PIDR5_PID25	(*(volatile uint_io8_t*)0xB71C18B9)  /*@bfbba@*/
#define GPIO_PIDR5_PID26	(*(volatile uint_io8_t*)0xB71C18BA)  /*@bfbba@*/
#define GPIO_PIDR5_PID27	(*(volatile uint_io8_t*)0xB71C18BB)  /*@bfbba@*/
#define GPIO_PIDR5_PID28	(*(volatile uint_io8_t*)0xB71C18BC)  /*@bfbba@*/
#define GPIO_PIDR5_PID29	(*(volatile uint_io8_t*)0xB71C18BD)  /*@bfbba@*/
#define GPIO_PIDR5_PID30	(*(volatile uint_io8_t*)0xB71C18BE)  /*@bfbba@*/
#define GPIO_PIDR5_PID31	(*(volatile uint_io8_t*)0xB71C18BF)  /*@bfbba@*/

#define GPIO_PIDR6	(GPIO.unPIDR6.u32Register)  /*@rg@*/
#define GPIO_PIDR6_PID0	(*(volatile uint_io8_t*)0xB71C18C0)  /*@bfbba@*/
#define GPIO_PIDR6_PID1	(*(volatile uint_io8_t*)0xB71C18C1)  /*@bfbba@*/
#define GPIO_PIDR6_PID2	(*(volatile uint_io8_t*)0xB71C18C2)  /*@bfbba@*/
#define GPIO_PIDR6_PID3	(*(volatile uint_io8_t*)0xB71C18C3)  /*@bfbba@*/
#define GPIO_PIDR6_PID4	(*(volatile uint_io8_t*)0xB71C18C4)  /*@bfbba@*/
#define GPIO_PIDR6_PID5	(*(volatile uint_io8_t*)0xB71C18C5)  /*@bfbba@*/
#define GPIO_PIDR6_PID6	(*(volatile uint_io8_t*)0xB71C18C6)  /*@bfbba@*/
#define GPIO_PIDR6_PID7	(*(volatile uint_io8_t*)0xB71C18C7)  /*@bfbba@*/
#define GPIO_PIDR6_PID8	(*(volatile uint_io8_t*)0xB71C18C8)  /*@bfbba@*/
#define GPIO_PIDR6_PID9	(*(volatile uint_io8_t*)0xB71C18C9)  /*@bfbba@*/
#define GPIO_PIDR6_PID10	(*(volatile uint_io8_t*)0xB71C18CA)  /*@bfbba@*/
#define GPIO_PIDR6_PID11	(*(volatile uint_io8_t*)0xB71C18CB)  /*@bfbba@*/
#define GPIO_PIDR6_PID12	(*(volatile uint_io8_t*)0xB71C18CC)  /*@bfbba@*/
#define GPIO_PIDR6_PID13	(*(volatile uint_io8_t*)0xB71C18CD)  /*@bfbba@*/
#define GPIO_PIDR6_PID14	(*(volatile uint_io8_t*)0xB71C18CE)  /*@bfbba@*/
#define GPIO_PIDR6_PID15	(*(volatile uint_io8_t*)0xB71C18CF)  /*@bfbba@*/
#define GPIO_PIDR6_PID16	(*(volatile uint_io8_t*)0xB71C18D0)  /*@bfbba@*/
#define GPIO_PIDR6_PID17	(*(volatile uint_io8_t*)0xB71C18D1)  /*@bfbba@*/
#define GPIO_PIDR6_PID18	(*(volatile uint_io8_t*)0xB71C18D2)  /*@bfbba@*/
#define GPIO_PIDR6_PID19	(*(volatile uint_io8_t*)0xB71C18D3)  /*@bfbba@*/
#define GPIO_PIDR6_PID20	(*(volatile uint_io8_t*)0xB71C18D4)  /*@bfbba@*/
#define GPIO_PIDR6_PID21	(*(volatile uint_io8_t*)0xB71C18D5)  /*@bfbba@*/
#define GPIO_PIDR6_PID22	(*(volatile uint_io8_t*)0xB71C18D6)  /*@bfbba@*/
#define GPIO_PIDR6_PID23	(*(volatile uint_io8_t*)0xB71C18D7)  /*@bfbba@*/
#define GPIO_PIDR6_PID24	(*(volatile uint_io8_t*)0xB71C18D8)  /*@bfbba@*/
#define GPIO_PIDR6_PID25	(*(volatile uint_io8_t*)0xB71C18D9)  /*@bfbba@*/
#define GPIO_PIDR6_PID26	(*(volatile uint_io8_t*)0xB71C18DA)  /*@bfbba@*/
#define GPIO_PIDR6_PID27	(*(volatile uint_io8_t*)0xB71C18DB)  /*@bfbba@*/
#define GPIO_PIDR6_PID28	(*(volatile uint_io8_t*)0xB71C18DC)  /*@bfbba@*/
#define GPIO_PIDR6_PID29	(*(volatile uint_io8_t*)0xB71C18DD)  /*@bfbba@*/
#define GPIO_PIDR6_PID30	(*(volatile uint_io8_t*)0xB71C18DE)  /*@bfbba@*/
#define GPIO_PIDR6_PID31	(*(volatile uint_io8_t*)0xB71C18DF)  /*@bfbba@*/

#define GPIO_PIDR7	(GPIO.unPIDR7.u32Register)  /*@rg@*/
#define GPIO_PIDR7_PID0	(*(volatile uint_io8_t*)0xB71C18E0)  /*@bfbba@*/
#define GPIO_PIDR7_PID1	(*(volatile uint_io8_t*)0xB71C18E1)  /*@bfbba@*/
#define GPIO_PIDR7_PID2	(*(volatile uint_io8_t*)0xB71C18E2)  /*@bfbba@*/
#define GPIO_PIDR7_PID3	(*(volatile uint_io8_t*)0xB71C18E3)  /*@bfbba@*/
#define GPIO_PIDR7_PID4	(*(volatile uint_io8_t*)0xB71C18E4)  /*@bfbba@*/
#define GPIO_PIDR7_PID5	(*(volatile uint_io8_t*)0xB71C18E5)  /*@bfbba@*/
#define GPIO_PIDR7_PID6	(*(volatile uint_io8_t*)0xB71C18E6)  /*@bfbba@*/
#define GPIO_PIDR7_PID7	(*(volatile uint_io8_t*)0xB71C18E7)  /*@bfbba@*/
#define GPIO_PIDR7_PID8	(*(volatile uint_io8_t*)0xB71C18E8)  /*@bfbba@*/
#define GPIO_PIDR7_PID9	(*(volatile uint_io8_t*)0xB71C18E9)  /*@bfbba@*/
#define GPIO_PIDR7_PID10	(*(volatile uint_io8_t*)0xB71C18EA)  /*@bfbba@*/
#define GPIO_PIDR7_PID11	(*(volatile uint_io8_t*)0xB71C18EB)  /*@bfbba@*/
#define GPIO_PIDR7_PID12	(*(volatile uint_io8_t*)0xB71C18EC)  /*@bfbba@*/
#define GPIO_PIDR7_PID13	(*(volatile uint_io8_t*)0xB71C18ED)  /*@bfbba@*/
#define GPIO_PIDR7_PID14	(*(volatile uint_io8_t*)0xB71C18EE)  /*@bfbba@*/
#define GPIO_PIDR7_PID15	(*(volatile uint_io8_t*)0xB71C18EF)  /*@bfbba@*/
#define GPIO_PIDR7_PID16	(*(volatile uint_io8_t*)0xB71C18F0)  /*@bfbba@*/
#define GPIO_PIDR7_PID17	(*(volatile uint_io8_t*)0xB71C18F1)  /*@bfbba@*/
#define GPIO_PIDR7_PID18	(*(volatile uint_io8_t*)0xB71C18F2)  /*@bfbba@*/
#define GPIO_PIDR7_PID19	(*(volatile uint_io8_t*)0xB71C18F3)  /*@bfbba@*/
#define GPIO_PIDR7_PID20	(*(volatile uint_io8_t*)0xB71C18F4)  /*@bfbba@*/
#define GPIO_PIDR7_PID21	(*(volatile uint_io8_t*)0xB71C18F5)  /*@bfbba@*/
#define GPIO_PIDR7_PID22	(*(volatile uint_io8_t*)0xB71C18F6)  /*@bfbba@*/
#define GPIO_PIDR7_PID23	(*(volatile uint_io8_t*)0xB71C18F7)  /*@bfbba@*/
#define GPIO_PIDR7_PID24	(*(volatile uint_io8_t*)0xB71C18F8)  /*@bfbba@*/
#define GPIO_PIDR7_PID25	(*(volatile uint_io8_t*)0xB71C18F9)  /*@bfbba@*/
#define GPIO_PIDR7_PID26	(*(volatile uint_io8_t*)0xB71C18FA)  /*@bfbba@*/
#define GPIO_PIDR7_PID27	(*(volatile uint_io8_t*)0xB71C18FB)  /*@bfbba@*/
#define GPIO_PIDR7_PID28	(*(volatile uint_io8_t*)0xB71C18FC)  /*@bfbba@*/
#define GPIO_PIDR7_PID29	(*(volatile uint_io8_t*)0xB71C18FD)  /*@bfbba@*/
#define GPIO_PIDR7_PID30	(*(volatile uint_io8_t*)0xB71C18FE)  /*@bfbba@*/
#define GPIO_PIDR7_PID31	(*(volatile uint_io8_t*)0xB71C18FF)  /*@bfbba@*/

#define GPIO_PIDR8	(GPIO.unPIDR8.u32Register)  /*@rg@*/
#define GPIO_PIDR8_PID0	(*(volatile uint_io8_t*)0xB71C1900)  /*@bfbba@*/
#define GPIO_PIDR8_PID1	(*(volatile uint_io8_t*)0xB71C1901)  /*@bfbba@*/
#define GPIO_PIDR8_PID2	(*(volatile uint_io8_t*)0xB71C1902)  /*@bfbba@*/
#define GPIO_PIDR8_PID3	(*(volatile uint_io8_t*)0xB71C1903)  /*@bfbba@*/
#define GPIO_PIDR8_PID4	(*(volatile uint_io8_t*)0xB71C1904)  /*@bfbba@*/
#define GPIO_PIDR8_PID5	(*(volatile uint_io8_t*)0xB71C1905)  /*@bfbba@*/
#define GPIO_PIDR8_PID6	(*(volatile uint_io8_t*)0xB71C1906)  /*@bfbba@*/
#define GPIO_PIDR8_PID7	(*(volatile uint_io8_t*)0xB71C1907)  /*@bfbba@*/
#define GPIO_PIDR8_PID8	(*(volatile uint_io8_t*)0xB71C1908)  /*@bfbba@*/
#define GPIO_PIDR8_PID9	(*(volatile uint_io8_t*)0xB71C1909)  /*@bfbba@*/
#define GPIO_PIDR8_PID10	(*(volatile uint_io8_t*)0xB71C190A)  /*@bfbba@*/
#define GPIO_PIDR8_PID11	(*(volatile uint_io8_t*)0xB71C190B)  /*@bfbba@*/
#define GPIO_PIDR8_PID12	(*(volatile uint_io8_t*)0xB71C190C)  /*@bfbba@*/
#define GPIO_PIDR8_PID13	(*(volatile uint_io8_t*)0xB71C190D)  /*@bfbba@*/
#define GPIO_PIDR8_PID14	(*(volatile uint_io8_t*)0xB71C190E)  /*@bfbba@*/
#define GPIO_PIDR8_PID15	(*(volatile uint_io8_t*)0xB71C190F)  /*@bfbba@*/
#define GPIO_PIDR8_PID16	(*(volatile uint_io8_t*)0xB71C1910)  /*@bfbba@*/
#define GPIO_PIDR8_PID17	(*(volatile uint_io8_t*)0xB71C1911)  /*@bfbba@*/
#define GPIO_PIDR8_PID18	(*(volatile uint_io8_t*)0xB71C1912)  /*@bfbba@*/
#define GPIO_PIDR8_PID19	(*(volatile uint_io8_t*)0xB71C1913)  /*@bfbba@*/
#define GPIO_PIDR8_PID20	(*(volatile uint_io8_t*)0xB71C1914)  /*@bfbba@*/
#define GPIO_PIDR8_PID21	(*(volatile uint_io8_t*)0xB71C1915)  /*@bfbba@*/
#define GPIO_PIDR8_PID22	(*(volatile uint_io8_t*)0xB71C1916)  /*@bfbba@*/
#define GPIO_PIDR8_PID23	(*(volatile uint_io8_t*)0xB71C1917)  /*@bfbba@*/
#define GPIO_PIDR8_PID24	(*(volatile uint_io8_t*)0xB71C1918)  /*@bfbba@*/
#define GPIO_PIDR8_PID25	(*(volatile uint_io8_t*)0xB71C1919)  /*@bfbba@*/
#define GPIO_PIDR8_PID26	(*(volatile uint_io8_t*)0xB71C191A)  /*@bfbba@*/
#define GPIO_PIDR8_PID27	(*(volatile uint_io8_t*)0xB71C191B)  /*@bfbba@*/
#define GPIO_PIDR8_PID28	(*(volatile uint_io8_t*)0xB71C191C)  /*@bfbba@*/
#define GPIO_PIDR8_PID29	(*(volatile uint_io8_t*)0xB71C191D)  /*@bfbba@*/
#define GPIO_PIDR8_PID30	(*(volatile uint_io8_t*)0xB71C191E)  /*@bfbba@*/
#define GPIO_PIDR8_PID31	(*(volatile uint_io8_t*)0xB71C191F)  /*@bfbba@*/

#define GPIO_PIDR9	(GPIO.unPIDR9.u32Register)  /*@rg@*/
#define GPIO_PIDR9_PID0	(*(volatile uint_io8_t*)0xB71C1920)  /*@bfbba@*/
#define GPIO_PIDR9_PID1	(*(volatile uint_io8_t*)0xB71C1921)  /*@bfbba@*/
#define GPIO_PIDR9_PID2	(*(volatile uint_io8_t*)0xB71C1922)  /*@bfbba@*/
#define GPIO_PIDR9_PID3	(*(volatile uint_io8_t*)0xB71C1923)  /*@bfbba@*/
#define GPIO_PIDR9_PID4	(*(volatile uint_io8_t*)0xB71C1924)  /*@bfbba@*/
#define GPIO_PIDR9_PID5	(*(volatile uint_io8_t*)0xB71C1925)  /*@bfbba@*/
#define GPIO_PIDR9_PID6	(*(volatile uint_io8_t*)0xB71C1926)  /*@bfbba@*/
#define GPIO_PIDR9_PID7	(*(volatile uint_io8_t*)0xB71C1927)  /*@bfbba@*/
#define GPIO_PIDR9_PID8	(*(volatile uint_io8_t*)0xB71C1928)  /*@bfbba@*/
#define GPIO_PIDR9_PID9	(*(volatile uint_io8_t*)0xB71C1929)  /*@bfbba@*/
#define GPIO_PIDR9_PID10	(*(volatile uint_io8_t*)0xB71C192A)  /*@bfbba@*/
#define GPIO_PIDR9_PID11	(*(volatile uint_io8_t*)0xB71C192B)  /*@bfbba@*/
#define GPIO_PIDR9_PID12	(*(volatile uint_io8_t*)0xB71C192C)  /*@bfbba@*/
#define GPIO_PIDR9_PID13	(*(volatile uint_io8_t*)0xB71C192D)  /*@bfbba@*/
#define GPIO_PIDR9_PID14	(*(volatile uint_io8_t*)0xB71C192E)  /*@bfbba@*/
#define GPIO_PIDR9_PID15	(*(volatile uint_io8_t*)0xB71C192F)  /*@bfbba@*/
#define GPIO_PIDR9_PID16	(*(volatile uint_io8_t*)0xB71C1930)  /*@bfbba@*/
#define GPIO_PIDR9_PID17	(*(volatile uint_io8_t*)0xB71C1931)  /*@bfbba@*/
#define GPIO_PIDR9_PID18	(*(volatile uint_io8_t*)0xB71C1932)  /*@bfbba@*/
#define GPIO_PIDR9_PID19	(*(volatile uint_io8_t*)0xB71C1933)  /*@bfbba@*/
#define GPIO_PIDR9_PID20	(*(volatile uint_io8_t*)0xB71C1934)  /*@bfbba@*/
#define GPIO_PIDR9_PID21	(*(volatile uint_io8_t*)0xB71C1935)  /*@bfbba@*/
#define GPIO_PIDR9_PID22	(*(volatile uint_io8_t*)0xB71C1936)  /*@bfbba@*/
#define GPIO_PIDR9_PID23	(*(volatile uint_io8_t*)0xB71C1937)  /*@bfbba@*/
#define GPIO_PIDR9_PID24	(*(volatile uint_io8_t*)0xB71C1938)  /*@bfbba@*/
#define GPIO_PIDR9_PID25	(*(volatile uint_io8_t*)0xB71C1939)  /*@bfbba@*/
#define GPIO_PIDR9_PID26	(*(volatile uint_io8_t*)0xB71C193A)  /*@bfbba@*/
#define GPIO_PIDR9_PID27	(*(volatile uint_io8_t*)0xB71C193B)  /*@bfbba@*/
#define GPIO_PIDR9_PID28	(*(volatile uint_io8_t*)0xB71C193C)  /*@bfbba@*/
#define GPIO_PIDR9_PID29	(*(volatile uint_io8_t*)0xB71C193D)  /*@bfbba@*/
#define GPIO_PIDR9_PID30	(*(volatile uint_io8_t*)0xB71C193E)  /*@bfbba@*/
#define GPIO_PIDR9_PID31	(*(volatile uint_io8_t*)0xB71C193F)  /*@bfbba@*/

#define GPIO_PIDR10	(GPIO.unPIDR10.u32Register)  /*@rg@*/
#define GPIO_PIDR10_PID0	(*(volatile uint_io8_t*)0xB71C1940)  /*@bfbba@*/
#define GPIO_PIDR10_PID1	(*(volatile uint_io8_t*)0xB71C1941)  /*@bfbba@*/
#define GPIO_PIDR10_PID2	(*(volatile uint_io8_t*)0xB71C1942)  /*@bfbba@*/
#define GPIO_PIDR10_PID3	(*(volatile uint_io8_t*)0xB71C1943)  /*@bfbba@*/
#define GPIO_PIDR10_PID4	(*(volatile uint_io8_t*)0xB71C1944)  /*@bfbba@*/
#define GPIO_PIDR10_PID5	(*(volatile uint_io8_t*)0xB71C1945)  /*@bfbba@*/
#define GPIO_PIDR10_PID6	(*(volatile uint_io8_t*)0xB71C1946)  /*@bfbba@*/
#define GPIO_PIDR10_PID7	(*(volatile uint_io8_t*)0xB71C1947)  /*@bfbba@*/
#define GPIO_PIDR10_PID8	(*(volatile uint_io8_t*)0xB71C1948)  /*@bfbba@*/
#define GPIO_PIDR10_PID9	(*(volatile uint_io8_t*)0xB71C1949)  /*@bfbba@*/
#define GPIO_PIDR10_PID10	(*(volatile uint_io8_t*)0xB71C194A)  /*@bfbba@*/
#define GPIO_PIDR10_PID11	(*(volatile uint_io8_t*)0xB71C194B)  /*@bfbba@*/
#define GPIO_PIDR10_PID12	(*(volatile uint_io8_t*)0xB71C194C)  /*@bfbba@*/
#define GPIO_PIDR10_PID13	(*(volatile uint_io8_t*)0xB71C194D)  /*@bfbba@*/
#define GPIO_PIDR10_PID14	(*(volatile uint_io8_t*)0xB71C194E)  /*@bfbba@*/
#define GPIO_PIDR10_PID15	(*(volatile uint_io8_t*)0xB71C194F)  /*@bfbba@*/
#define GPIO_PIDR10_PID16	(*(volatile uint_io8_t*)0xB71C1950)  /*@bfbba@*/
#define GPIO_PIDR10_PID17	(*(volatile uint_io8_t*)0xB71C1951)  /*@bfbba@*/
#define GPIO_PIDR10_PID18	(*(volatile uint_io8_t*)0xB71C1952)  /*@bfbba@*/
#define GPIO_PIDR10_PID19	(*(volatile uint_io8_t*)0xB71C1953)  /*@bfbba@*/
#define GPIO_PIDR10_PID20	(*(volatile uint_io8_t*)0xB71C1954)  /*@bfbba@*/
#define GPIO_PIDR10_PID21	(*(volatile uint_io8_t*)0xB71C1955)  /*@bfbba@*/
#define GPIO_PIDR10_PID22	(*(volatile uint_io8_t*)0xB71C1956)  /*@bfbba@*/
#define GPIO_PIDR10_PID23	(*(volatile uint_io8_t*)0xB71C1957)  /*@bfbba@*/
#define GPIO_PIDR10_PID24	(*(volatile uint_io8_t*)0xB71C1958)  /*@bfbba@*/
#define GPIO_PIDR10_PID25	(*(volatile uint_io8_t*)0xB71C1959)  /*@bfbba@*/
#define GPIO_PIDR10_PID26	(*(volatile uint_io8_t*)0xB71C195A)  /*@bfbba@*/
#define GPIO_PIDR10_PID27	(*(volatile uint_io8_t*)0xB71C195B)  /*@bfbba@*/
#define GPIO_PIDR10_PID28	(*(volatile uint_io8_t*)0xB71C195C)  /*@bfbba@*/
#define GPIO_PIDR10_PID29	(*(volatile uint_io8_t*)0xB71C195D)  /*@bfbba@*/
#define GPIO_PIDR10_PID30	(*(volatile uint_io8_t*)0xB71C195E)  /*@bfbba@*/
#define GPIO_PIDR10_PID31	(*(volatile uint_io8_t*)0xB71C195F)  /*@bfbba@*/

#define GPIO_PIDR11	(GPIO.unPIDR11.u32Register)  /*@rg@*/
#define GPIO_PIDR11_PID0	(*(volatile uint_io8_t*)0xB71C1960)  /*@bfbba@*/
#define GPIO_PIDR11_PID1	(*(volatile uint_io8_t*)0xB71C1961)  /*@bfbba@*/
#define GPIO_PIDR11_PID2	(*(volatile uint_io8_t*)0xB71C1962)  /*@bfbba@*/
#define GPIO_PIDR11_PID3	(*(volatile uint_io8_t*)0xB71C1963)  /*@bfbba@*/
#define GPIO_PIDR11_PID4	(*(volatile uint_io8_t*)0xB71C1964)  /*@bfbba@*/
#define GPIO_PIDR11_PID5	(*(volatile uint_io8_t*)0xB71C1965)  /*@bfbba@*/
#define GPIO_PIDR11_PID6	(*(volatile uint_io8_t*)0xB71C1966)  /*@bfbba@*/
#define GPIO_PIDR11_PID7	(*(volatile uint_io8_t*)0xB71C1967)  /*@bfbba@*/
#define GPIO_PIDR11_PID8	(*(volatile uint_io8_t*)0xB71C1968)  /*@bfbba@*/
#define GPIO_PIDR11_PID9	(*(volatile uint_io8_t*)0xB71C1969)  /*@bfbba@*/
#define GPIO_PIDR11_PID10	(*(volatile uint_io8_t*)0xB71C196A)  /*@bfbba@*/
#define GPIO_PIDR11_PID11	(*(volatile uint_io8_t*)0xB71C196B)  /*@bfbba@*/
#define GPIO_PIDR11_PID12	(*(volatile uint_io8_t*)0xB71C196C)  /*@bfbba@*/
#define GPIO_PIDR11_PID13	(*(volatile uint_io8_t*)0xB71C196D)  /*@bfbba@*/
#define GPIO_PIDR11_PID14	(*(volatile uint_io8_t*)0xB71C196E)  /*@bfbba@*/
#define GPIO_PIDR11_PID15	(*(volatile uint_io8_t*)0xB71C196F)  /*@bfbba@*/
#define GPIO_PIDR11_PID16	(*(volatile uint_io8_t*)0xB71C1970)  /*@bfbba@*/
#define GPIO_PIDR11_PID17	(*(volatile uint_io8_t*)0xB71C1971)  /*@bfbba@*/
#define GPIO_PIDR11_PID18	(*(volatile uint_io8_t*)0xB71C1972)  /*@bfbba@*/
#define GPIO_PIDR11_PID19	(*(volatile uint_io8_t*)0xB71C1973)  /*@bfbba@*/
#define GPIO_PIDR11_PID20	(*(volatile uint_io8_t*)0xB71C1974)  /*@bfbba@*/
#define GPIO_PIDR11_PID21	(*(volatile uint_io8_t*)0xB71C1975)  /*@bfbba@*/
#define GPIO_PIDR11_PID22	(*(volatile uint_io8_t*)0xB71C1976)  /*@bfbba@*/
#define GPIO_PIDR11_PID23	(*(volatile uint_io8_t*)0xB71C1977)  /*@bfbba@*/
#define GPIO_PIDR11_PID24	(*(volatile uint_io8_t*)0xB71C1978)  /*@bfbba@*/
#define GPIO_PIDR11_PID25	(*(volatile uint_io8_t*)0xB71C1979)  /*@bfbba@*/
#define GPIO_PIDR11_PID26	(*(volatile uint_io8_t*)0xB71C197A)  /*@bfbba@*/
#define GPIO_PIDR11_PID27	(*(volatile uint_io8_t*)0xB71C197B)  /*@bfbba@*/
#define GPIO_PIDR11_PID28	(*(volatile uint_io8_t*)0xB71C197C)  /*@bfbba@*/
#define GPIO_PIDR11_PID29	(*(volatile uint_io8_t*)0xB71C197D)  /*@bfbba@*/
#define GPIO_PIDR11_PID30	(*(volatile uint_io8_t*)0xB71C197E)  /*@bfbba@*/
#define GPIO_PIDR11_PID31	(*(volatile uint_io8_t*)0xB71C197F)  /*@bfbba@*/

#define GPIO_PIDR12	(GPIO.unPIDR12.u32Register)  /*@rg@*/
#define GPIO_PIDR12_PID0	(*(volatile uint_io8_t*)0xB71C1980)  /*@bfbba@*/
#define GPIO_PIDR12_PID1	(*(volatile uint_io8_t*)0xB71C1981)  /*@bfbba@*/
#define GPIO_PIDR12_PID2	(*(volatile uint_io8_t*)0xB71C1982)  /*@bfbba@*/
#define GPIO_PIDR12_PID3	(*(volatile uint_io8_t*)0xB71C1983)  /*@bfbba@*/
#define GPIO_PIDR12_PID4	(*(volatile uint_io8_t*)0xB71C1984)  /*@bfbba@*/
#define GPIO_PIDR12_PID5	(*(volatile uint_io8_t*)0xB71C1985)  /*@bfbba@*/
#define GPIO_PIDR12_PID6	(*(volatile uint_io8_t*)0xB71C1986)  /*@bfbba@*/
#define GPIO_PIDR12_PID7	(*(volatile uint_io8_t*)0xB71C1987)  /*@bfbba@*/
#define GPIO_PIDR12_PID8	(*(volatile uint_io8_t*)0xB71C1988)  /*@bfbba@*/
#define GPIO_PIDR12_PID9	(*(volatile uint_io8_t*)0xB71C1989)  /*@bfbba@*/
#define GPIO_PIDR12_PID10	(*(volatile uint_io8_t*)0xB71C198A)  /*@bfbba@*/
#define GPIO_PIDR12_PID11	(*(volatile uint_io8_t*)0xB71C198B)  /*@bfbba@*/
#define GPIO_PIDR12_PID12	(*(volatile uint_io8_t*)0xB71C198C)  /*@bfbba@*/
#define GPIO_PIDR12_PID13	(*(volatile uint_io8_t*)0xB71C198D)  /*@bfbba@*/
#define GPIO_PIDR12_PID14	(*(volatile uint_io8_t*)0xB71C198E)  /*@bfbba@*/
#define GPIO_PIDR12_PID15	(*(volatile uint_io8_t*)0xB71C198F)  /*@bfbba@*/
#define GPIO_PIDR12_PID16	(*(volatile uint_io8_t*)0xB71C1990)  /*@bfbba@*/
#define GPIO_PIDR12_PID17	(*(volatile uint_io8_t*)0xB71C1991)  /*@bfbba@*/
#define GPIO_PIDR12_PID18	(*(volatile uint_io8_t*)0xB71C1992)  /*@bfbba@*/
#define GPIO_PIDR12_PID19	(*(volatile uint_io8_t*)0xB71C1993)  /*@bfbba@*/
#define GPIO_PIDR12_PID20	(*(volatile uint_io8_t*)0xB71C1994)  /*@bfbba@*/
#define GPIO_PIDR12_PID21	(*(volatile uint_io8_t*)0xB71C1995)  /*@bfbba@*/
#define GPIO_PIDR12_PID22	(*(volatile uint_io8_t*)0xB71C1996)  /*@bfbba@*/
#define GPIO_PIDR12_PID23	(*(volatile uint_io8_t*)0xB71C1997)  /*@bfbba@*/
#define GPIO_PIDR12_PID24	(*(volatile uint_io8_t*)0xB71C1998)  /*@bfbba@*/
#define GPIO_PIDR12_PID25	(*(volatile uint_io8_t*)0xB71C1999)  /*@bfbba@*/
#define GPIO_PIDR12_PID26	(*(volatile uint_io8_t*)0xB71C199A)  /*@bfbba@*/
#define GPIO_PIDR12_PID27	(*(volatile uint_io8_t*)0xB71C199B)  /*@bfbba@*/
#define GPIO_PIDR12_PID28	(*(volatile uint_io8_t*)0xB71C199C)  /*@bfbba@*/
#define GPIO_PIDR12_PID29	(*(volatile uint_io8_t*)0xB71C199D)  /*@bfbba@*/
#define GPIO_PIDR12_PID30	(*(volatile uint_io8_t*)0xB71C199E)  /*@bfbba@*/
#define GPIO_PIDR12_PID31	(*(volatile uint_io8_t*)0xB71C199F)  /*@bfbba@*/

#define GPIO_PIDR13	(GPIO.unPIDR13.u32Register)  /*@rg@*/
#define GPIO_PIDR13_PID0	(*(volatile uint_io8_t*)0xB71C19A0)  /*@bfbba@*/
#define GPIO_PIDR13_PID1	(*(volatile uint_io8_t*)0xB71C19A1)  /*@bfbba@*/
#define GPIO_PIDR13_PID2	(*(volatile uint_io8_t*)0xB71C19A2)  /*@bfbba@*/
#define GPIO_PIDR13_PID3	(*(volatile uint_io8_t*)0xB71C19A3)  /*@bfbba@*/
#define GPIO_PIDR13_PID4	(*(volatile uint_io8_t*)0xB71C19A4)  /*@bfbba@*/
#define GPIO_PIDR13_PID5	(*(volatile uint_io8_t*)0xB71C19A5)  /*@bfbba@*/
#define GPIO_PIDR13_PID6	(*(volatile uint_io8_t*)0xB71C19A6)  /*@bfbba@*/
#define GPIO_PIDR13_PID7	(*(volatile uint_io8_t*)0xB71C19A7)  /*@bfbba@*/
#define GPIO_PIDR13_PID8	(*(volatile uint_io8_t*)0xB71C19A8)  /*@bfbba@*/
#define GPIO_PIDR13_PID9	(*(volatile uint_io8_t*)0xB71C19A9)  /*@bfbba@*/
#define GPIO_PIDR13_PID10	(*(volatile uint_io8_t*)0xB71C19AA)  /*@bfbba@*/
#define GPIO_PIDR13_PID11	(*(volatile uint_io8_t*)0xB71C19AB)  /*@bfbba@*/
#define GPIO_PIDR13_PID12	(*(volatile uint_io8_t*)0xB71C19AC)  /*@bfbba@*/
#define GPIO_PIDR13_PID13	(*(volatile uint_io8_t*)0xB71C19AD)  /*@bfbba@*/
#define GPIO_PIDR13_PID14	(*(volatile uint_io8_t*)0xB71C19AE)  /*@bfbba@*/
#define GPIO_PIDR13_PID15	(*(volatile uint_io8_t*)0xB71C19AF)  /*@bfbba@*/
#define GPIO_PIDR13_PID16	(*(volatile uint_io8_t*)0xB71C19B0)  /*@bfbba@*/
#define GPIO_PIDR13_PID17	(*(volatile uint_io8_t*)0xB71C19B1)  /*@bfbba@*/
#define GPIO_PIDR13_PID18	(*(volatile uint_io8_t*)0xB71C19B2)  /*@bfbba@*/
#define GPIO_PIDR13_PID19	(*(volatile uint_io8_t*)0xB71C19B3)  /*@bfbba@*/
#define GPIO_PIDR13_PID20	(*(volatile uint_io8_t*)0xB71C19B4)  /*@bfbba@*/
#define GPIO_PIDR13_PID21	(*(volatile uint_io8_t*)0xB71C19B5)  /*@bfbba@*/
#define GPIO_PIDR13_PID22	(*(volatile uint_io8_t*)0xB71C19B6)  /*@bfbba@*/
#define GPIO_PIDR13_PID23	(*(volatile uint_io8_t*)0xB71C19B7)  /*@bfbba@*/
#define GPIO_PIDR13_PID24	(*(volatile uint_io8_t*)0xB71C19B8)  /*@bfbba@*/
#define GPIO_PIDR13_PID25	(*(volatile uint_io8_t*)0xB71C19B9)  /*@bfbba@*/
#define GPIO_PIDR13_PID26	(*(volatile uint_io8_t*)0xB71C19BA)  /*@bfbba@*/
#define GPIO_PIDR13_PID27	(*(volatile uint_io8_t*)0xB71C19BB)  /*@bfbba@*/
#define GPIO_PIDR13_PID28	(*(volatile uint_io8_t*)0xB71C19BC)  /*@bfbba@*/
#define GPIO_PIDR13_PID29	(*(volatile uint_io8_t*)0xB71C19BD)  /*@bfbba@*/
#define GPIO_PIDR13_PID30	(*(volatile uint_io8_t*)0xB71C19BE)  /*@bfbba@*/
#define GPIO_PIDR13_PID31	(*(volatile uint_io8_t*)0xB71C19BF)  /*@bfbba@*/

#define GPIO_PIDR14	(GPIO.unPIDR14.u32Register)  /*@rg@*/
#define GPIO_PIDR14_PID0	(*(volatile uint_io8_t*)0xB71C19C0)  /*@bfbba@*/
#define GPIO_PIDR14_PID1	(*(volatile uint_io8_t*)0xB71C19C1)  /*@bfbba@*/
#define GPIO_PIDR14_PID2	(*(volatile uint_io8_t*)0xB71C19C2)  /*@bfbba@*/
#define GPIO_PIDR14_PID3	(*(volatile uint_io8_t*)0xB71C19C3)  /*@bfbba@*/
#define GPIO_PIDR14_PID4	(*(volatile uint_io8_t*)0xB71C19C4)  /*@bfbba@*/
#define GPIO_PIDR14_PID5	(*(volatile uint_io8_t*)0xB71C19C5)  /*@bfbba@*/
#define GPIO_PIDR14_PID6	(*(volatile uint_io8_t*)0xB71C19C6)  /*@bfbba@*/
#define GPIO_PIDR14_PID7	(*(volatile uint_io8_t*)0xB71C19C7)  /*@bfbba@*/
#define GPIO_PIDR14_PID8	(*(volatile uint_io8_t*)0xB71C19C8)  /*@bfbba@*/
#define GPIO_PIDR14_PID9	(*(volatile uint_io8_t*)0xB71C19C9)  /*@bfbba@*/
#define GPIO_PIDR14_PID10	(*(volatile uint_io8_t*)0xB71C19CA)  /*@bfbba@*/
#define GPIO_PIDR14_PID11	(*(volatile uint_io8_t*)0xB71C19CB)  /*@bfbba@*/
#define GPIO_PIDR14_PID12	(*(volatile uint_io8_t*)0xB71C19CC)  /*@bfbba@*/
#define GPIO_PIDR14_PID13	(*(volatile uint_io8_t*)0xB71C19CD)  /*@bfbba@*/
#define GPIO_PIDR14_PID14	(*(volatile uint_io8_t*)0xB71C19CE)  /*@bfbba@*/
#define GPIO_PIDR14_PID15	(*(volatile uint_io8_t*)0xB71C19CF)  /*@bfbba@*/
#define GPIO_PIDR14_PID16	(*(volatile uint_io8_t*)0xB71C19D0)  /*@bfbba@*/
#define GPIO_PIDR14_PID17	(*(volatile uint_io8_t*)0xB71C19D1)  /*@bfbba@*/
#define GPIO_PIDR14_PID18	(*(volatile uint_io8_t*)0xB71C19D2)  /*@bfbba@*/
#define GPIO_PIDR14_PID19	(*(volatile uint_io8_t*)0xB71C19D3)  /*@bfbba@*/
#define GPIO_PIDR14_PID20	(*(volatile uint_io8_t*)0xB71C19D4)  /*@bfbba@*/
#define GPIO_PIDR14_PID21	(*(volatile uint_io8_t*)0xB71C19D5)  /*@bfbba@*/
#define GPIO_PIDR14_PID22	(*(volatile uint_io8_t*)0xB71C19D6)  /*@bfbba@*/
#define GPIO_PIDR14_PID23	(*(volatile uint_io8_t*)0xB71C19D7)  /*@bfbba@*/
#define GPIO_PIDR14_PID24	(*(volatile uint_io8_t*)0xB71C19D8)  /*@bfbba@*/
#define GPIO_PIDR14_PID25	(*(volatile uint_io8_t*)0xB71C19D9)  /*@bfbba@*/
#define GPIO_PIDR14_PID26	(*(volatile uint_io8_t*)0xB71C19DA)  /*@bfbba@*/
#define GPIO_PIDR14_PID27	(*(volatile uint_io8_t*)0xB71C19DB)  /*@bfbba@*/
#define GPIO_PIDR14_PID28	(*(volatile uint_io8_t*)0xB71C19DC)  /*@bfbba@*/
#define GPIO_PIDR14_PID29	(*(volatile uint_io8_t*)0xB71C19DD)  /*@bfbba@*/
#define GPIO_PIDR14_PID30	(*(volatile uint_io8_t*)0xB71C19DE)  /*@bfbba@*/
#define GPIO_PIDR14_PID31	(*(volatile uint_io8_t*)0xB71C19DF)  /*@bfbba@*/

#define GPIO_PIDR15	(GPIO.unPIDR15.u32Register)  /*@rg@*/
#define GPIO_PIDR15_PID0	(*(volatile uint_io8_t*)0xB71C19E0)  /*@bfbba@*/
#define GPIO_PIDR15_PID1	(*(volatile uint_io8_t*)0xB71C19E1)  /*@bfbba@*/
#define GPIO_PIDR15_PID2	(*(volatile uint_io8_t*)0xB71C19E2)  /*@bfbba@*/
#define GPIO_PIDR15_PID3	(*(volatile uint_io8_t*)0xB71C19E3)  /*@bfbba@*/
#define GPIO_PIDR15_PID4	(*(volatile uint_io8_t*)0xB71C19E4)  /*@bfbba@*/
#define GPIO_PIDR15_PID5	(*(volatile uint_io8_t*)0xB71C19E5)  /*@bfbba@*/
#define GPIO_PIDR15_PID6	(*(volatile uint_io8_t*)0xB71C19E6)  /*@bfbba@*/
#define GPIO_PIDR15_PID7	(*(volatile uint_io8_t*)0xB71C19E7)  /*@bfbba@*/
#define GPIO_PIDR15_PID8	(*(volatile uint_io8_t*)0xB71C19E8)  /*@bfbba@*/
#define GPIO_PIDR15_PID9	(*(volatile uint_io8_t*)0xB71C19E9)  /*@bfbba@*/
#define GPIO_PIDR15_PID10	(*(volatile uint_io8_t*)0xB71C19EA)  /*@bfbba@*/
#define GPIO_PIDR15_PID11	(*(volatile uint_io8_t*)0xB71C19EB)  /*@bfbba@*/
#define GPIO_PIDR15_PID12	(*(volatile uint_io8_t*)0xB71C19EC)  /*@bfbba@*/
#define GPIO_PIDR15_PID13	(*(volatile uint_io8_t*)0xB71C19ED)  /*@bfbba@*/
#define GPIO_PIDR15_PID14	(*(volatile uint_io8_t*)0xB71C19EE)  /*@bfbba@*/
#define GPIO_PIDR15_PID15	(*(volatile uint_io8_t*)0xB71C19EF)  /*@bfbba@*/
#define GPIO_PIDR15_PID16	(*(volatile uint_io8_t*)0xB71C19F0)  /*@bfbba@*/
#define GPIO_PIDR15_PID17	(*(volatile uint_io8_t*)0xB71C19F1)  /*@bfbba@*/
#define GPIO_PIDR15_PID18	(*(volatile uint_io8_t*)0xB71C19F2)  /*@bfbba@*/
#define GPIO_PIDR15_PID19	(*(volatile uint_io8_t*)0xB71C19F3)  /*@bfbba@*/
#define GPIO_PIDR15_PID20	(*(volatile uint_io8_t*)0xB71C19F4)  /*@bfbba@*/
#define GPIO_PIDR15_PID21	(*(volatile uint_io8_t*)0xB71C19F5)  /*@bfbba@*/
#define GPIO_PIDR15_PID22	(*(volatile uint_io8_t*)0xB71C19F6)  /*@bfbba@*/
#define GPIO_PIDR15_PID23	(*(volatile uint_io8_t*)0xB71C19F7)  /*@bfbba@*/
#define GPIO_PIDR15_PID24	(*(volatile uint_io8_t*)0xB71C19F8)  /*@bfbba@*/
#define GPIO_PIDR15_PID25	(*(volatile uint_io8_t*)0xB71C19F9)  /*@bfbba@*/
#define GPIO_PIDR15_PID26	(*(volatile uint_io8_t*)0xB71C19FA)  /*@bfbba@*/
#define GPIO_PIDR15_PID27	(*(volatile uint_io8_t*)0xB71C19FB)  /*@bfbba@*/
#define GPIO_PIDR15_PID28	(*(volatile uint_io8_t*)0xB71C19FC)  /*@bfbba@*/
#define GPIO_PIDR15_PID29	(*(volatile uint_io8_t*)0xB71C19FD)  /*@bfbba@*/
#define GPIO_PIDR15_PID30	(*(volatile uint_io8_t*)0xB71C19FE)  /*@bfbba@*/
#define GPIO_PIDR15_PID31	(*(volatile uint_io8_t*)0xB71C19FF)  /*@bfbba@*/

typedef struct stc_gpio_pidrn_field{
    uint_io32_t		u1PID0:1;
    uint_io32_t		u1PID1:1;
    uint_io32_t		u1PID2:1;
    uint_io32_t		u1PID3:1;
    uint_io32_t		u1PID4:1;
    uint_io32_t		u1PID5:1;
    uint_io32_t		u1PID6:1;
    uint_io32_t		u1PID7:1;
    uint_io32_t		u1PID8:1;
    uint_io32_t		u1PID9:1;
    uint_io32_t		u1PID10:1;
    uint_io32_t		u1PID11:1;
    uint_io32_t		u1PID12:1;
    uint_io32_t		u1PID13:1;
    uint_io32_t		u1PID14:1;
    uint_io32_t		u1PID15:1;
    uint_io32_t		u1PID16:1;
    uint_io32_t		u1PID17:1;
    uint_io32_t		u1PID18:1;
    uint_io32_t		u1PID19:1;
    uint_io32_t		u1PID20:1;
    uint_io32_t		u1PID21:1;
    uint_io32_t		u1PID22:1;
    uint_io32_t		u1PID23:1;
    uint_io32_t		u1PID24:1;
    uint_io32_t		u1PID25:1;
    uint_io32_t		u1PID26:1;
    uint_io32_t		u1PID27:1;
    uint_io32_t		u1PID28:1;
    uint_io32_t		u1PID29:1;
    uint_io32_t		u1PID30:1;
    uint_io32_t		u1PID31:1;
}stc_gpio_pidrn_field_t;

typedef union un_gpio_pidrn{
    uint_io32_t		u32Register;
    stc_gpio_pidrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_pidrn_t;

/* PPER[0-15] */
#define GPIO_PPER0	(GPIO.unPPER0.u32Register)  /*@rg@*/
#define GPIO_PPER0_PPE0	(*(volatile uint_io8_t*)0xB71C1C00)  /*@bfbba@*/
#define GPIO_PPER0_PPE1	(*(volatile uint_io8_t*)0xB71C1C01)  /*@bfbba@*/
#define GPIO_PPER0_PPE2	(*(volatile uint_io8_t*)0xB71C1C02)  /*@bfbba@*/
#define GPIO_PPER0_PPE3	(*(volatile uint_io8_t*)0xB71C1C03)  /*@bfbba@*/
#define GPIO_PPER0_PPE4	(*(volatile uint_io8_t*)0xB71C1C04)  /*@bfbba@*/
#define GPIO_PPER0_PPE5	(*(volatile uint_io8_t*)0xB71C1C05)  /*@bfbba@*/
#define GPIO_PPER0_PPE6	(*(volatile uint_io8_t*)0xB71C1C06)  /*@bfbba@*/
#define GPIO_PPER0_PPE7	(*(volatile uint_io8_t*)0xB71C1C07)  /*@bfbba@*/
#define GPIO_PPER0_PPE8	(*(volatile uint_io8_t*)0xB71C1C08)  /*@bfbba@*/
#define GPIO_PPER0_PPE9	(*(volatile uint_io8_t*)0xB71C1C09)  /*@bfbba@*/
#define GPIO_PPER0_PPE10	(*(volatile uint_io8_t*)0xB71C1C0A)  /*@bfbba@*/
#define GPIO_PPER0_PPE11	(*(volatile uint_io8_t*)0xB71C1C0B)  /*@bfbba@*/
#define GPIO_PPER0_PPE12	(*(volatile uint_io8_t*)0xB71C1C0C)  /*@bfbba@*/
#define GPIO_PPER0_PPE13	(*(volatile uint_io8_t*)0xB71C1C0D)  /*@bfbba@*/
#define GPIO_PPER0_PPE14	(*(volatile uint_io8_t*)0xB71C1C0E)  /*@bfbba@*/
#define GPIO_PPER0_PPE15	(*(volatile uint_io8_t*)0xB71C1C0F)  /*@bfbba@*/
#define GPIO_PPER0_PPE16	(*(volatile uint_io8_t*)0xB71C1C10)  /*@bfbba@*/
#define GPIO_PPER0_PPE17	(*(volatile uint_io8_t*)0xB71C1C11)  /*@bfbba@*/
#define GPIO_PPER0_PPE18	(*(volatile uint_io8_t*)0xB71C1C12)  /*@bfbba@*/
#define GPIO_PPER0_PPE19	(*(volatile uint_io8_t*)0xB71C1C13)  /*@bfbba@*/
#define GPIO_PPER0_PPE20	(*(volatile uint_io8_t*)0xB71C1C14)  /*@bfbba@*/
#define GPIO_PPER0_PPE21	(*(volatile uint_io8_t*)0xB71C1C15)  /*@bfbba@*/
#define GPIO_PPER0_PPE22	(*(volatile uint_io8_t*)0xB71C1C16)  /*@bfbba@*/
#define GPIO_PPER0_PPE23	(*(volatile uint_io8_t*)0xB71C1C17)  /*@bfbba@*/
#define GPIO_PPER0_PPE24	(*(volatile uint_io8_t*)0xB71C1C18)  /*@bfbba@*/
#define GPIO_PPER0_PPE25	(*(volatile uint_io8_t*)0xB71C1C19)  /*@bfbba@*/
#define GPIO_PPER0_PPE26	(*(volatile uint_io8_t*)0xB71C1C1A)  /*@bfbba@*/
#define GPIO_PPER0_PPE27	(*(volatile uint_io8_t*)0xB71C1C1B)  /*@bfbba@*/
#define GPIO_PPER0_PPE28	(*(volatile uint_io8_t*)0xB71C1C1C)  /*@bfbba@*/
#define GPIO_PPER0_PPE29	(*(volatile uint_io8_t*)0xB71C1C1D)  /*@bfbba@*/
#define GPIO_PPER0_PPE30	(*(volatile uint_io8_t*)0xB71C1C1E)  /*@bfbba@*/
#define GPIO_PPER0_PPE31	(*(volatile uint_io8_t*)0xB71C1C1F)  /*@bfbba@*/

#define GPIO_PPER1	(GPIO.unPPER1.u32Register)  /*@rg@*/
#define GPIO_PPER1_PPE0	(*(volatile uint_io8_t*)0xB71C1C20)  /*@bfbba@*/
#define GPIO_PPER1_PPE1	(*(volatile uint_io8_t*)0xB71C1C21)  /*@bfbba@*/
#define GPIO_PPER1_PPE2	(*(volatile uint_io8_t*)0xB71C1C22)  /*@bfbba@*/
#define GPIO_PPER1_PPE3	(*(volatile uint_io8_t*)0xB71C1C23)  /*@bfbba@*/
#define GPIO_PPER1_PPE4	(*(volatile uint_io8_t*)0xB71C1C24)  /*@bfbba@*/
#define GPIO_PPER1_PPE5	(*(volatile uint_io8_t*)0xB71C1C25)  /*@bfbba@*/
#define GPIO_PPER1_PPE6	(*(volatile uint_io8_t*)0xB71C1C26)  /*@bfbba@*/
#define GPIO_PPER1_PPE7	(*(volatile uint_io8_t*)0xB71C1C27)  /*@bfbba@*/
#define GPIO_PPER1_PPE8	(*(volatile uint_io8_t*)0xB71C1C28)  /*@bfbba@*/
#define GPIO_PPER1_PPE9	(*(volatile uint_io8_t*)0xB71C1C29)  /*@bfbba@*/
#define GPIO_PPER1_PPE10	(*(volatile uint_io8_t*)0xB71C1C2A)  /*@bfbba@*/
#define GPIO_PPER1_PPE11	(*(volatile uint_io8_t*)0xB71C1C2B)  /*@bfbba@*/
#define GPIO_PPER1_PPE12	(*(volatile uint_io8_t*)0xB71C1C2C)  /*@bfbba@*/
#define GPIO_PPER1_PPE13	(*(volatile uint_io8_t*)0xB71C1C2D)  /*@bfbba@*/
#define GPIO_PPER1_PPE14	(*(volatile uint_io8_t*)0xB71C1C2E)  /*@bfbba@*/
#define GPIO_PPER1_PPE15	(*(volatile uint_io8_t*)0xB71C1C2F)  /*@bfbba@*/
#define GPIO_PPER1_PPE16	(*(volatile uint_io8_t*)0xB71C1C30)  /*@bfbba@*/
#define GPIO_PPER1_PPE17	(*(volatile uint_io8_t*)0xB71C1C31)  /*@bfbba@*/
#define GPIO_PPER1_PPE18	(*(volatile uint_io8_t*)0xB71C1C32)  /*@bfbba@*/
#define GPIO_PPER1_PPE19	(*(volatile uint_io8_t*)0xB71C1C33)  /*@bfbba@*/
#define GPIO_PPER1_PPE20	(*(volatile uint_io8_t*)0xB71C1C34)  /*@bfbba@*/
#define GPIO_PPER1_PPE21	(*(volatile uint_io8_t*)0xB71C1C35)  /*@bfbba@*/
#define GPIO_PPER1_PPE22	(*(volatile uint_io8_t*)0xB71C1C36)  /*@bfbba@*/
#define GPIO_PPER1_PPE23	(*(volatile uint_io8_t*)0xB71C1C37)  /*@bfbba@*/
#define GPIO_PPER1_PPE24	(*(volatile uint_io8_t*)0xB71C1C38)  /*@bfbba@*/
#define GPIO_PPER1_PPE25	(*(volatile uint_io8_t*)0xB71C1C39)  /*@bfbba@*/
#define GPIO_PPER1_PPE26	(*(volatile uint_io8_t*)0xB71C1C3A)  /*@bfbba@*/
#define GPIO_PPER1_PPE27	(*(volatile uint_io8_t*)0xB71C1C3B)  /*@bfbba@*/
#define GPIO_PPER1_PPE28	(*(volatile uint_io8_t*)0xB71C1C3C)  /*@bfbba@*/
#define GPIO_PPER1_PPE29	(*(volatile uint_io8_t*)0xB71C1C3D)  /*@bfbba@*/
#define GPIO_PPER1_PPE30	(*(volatile uint_io8_t*)0xB71C1C3E)  /*@bfbba@*/
#define GPIO_PPER1_PPE31	(*(volatile uint_io8_t*)0xB71C1C3F)  /*@bfbba@*/

#define GPIO_PPER2	(GPIO.unPPER2.u32Register)  /*@rg@*/
#define GPIO_PPER2_PPE0	(*(volatile uint_io8_t*)0xB71C1C40)  /*@bfbba@*/
#define GPIO_PPER2_PPE1	(*(volatile uint_io8_t*)0xB71C1C41)  /*@bfbba@*/
#define GPIO_PPER2_PPE2	(*(volatile uint_io8_t*)0xB71C1C42)  /*@bfbba@*/
#define GPIO_PPER2_PPE3	(*(volatile uint_io8_t*)0xB71C1C43)  /*@bfbba@*/
#define GPIO_PPER2_PPE4	(*(volatile uint_io8_t*)0xB71C1C44)  /*@bfbba@*/
#define GPIO_PPER2_PPE5	(*(volatile uint_io8_t*)0xB71C1C45)  /*@bfbba@*/
#define GPIO_PPER2_PPE6	(*(volatile uint_io8_t*)0xB71C1C46)  /*@bfbba@*/
#define GPIO_PPER2_PPE7	(*(volatile uint_io8_t*)0xB71C1C47)  /*@bfbba@*/
#define GPIO_PPER2_PPE8	(*(volatile uint_io8_t*)0xB71C1C48)  /*@bfbba@*/
#define GPIO_PPER2_PPE9	(*(volatile uint_io8_t*)0xB71C1C49)  /*@bfbba@*/
#define GPIO_PPER2_PPE10	(*(volatile uint_io8_t*)0xB71C1C4A)  /*@bfbba@*/
#define GPIO_PPER2_PPE11	(*(volatile uint_io8_t*)0xB71C1C4B)  /*@bfbba@*/
#define GPIO_PPER2_PPE12	(*(volatile uint_io8_t*)0xB71C1C4C)  /*@bfbba@*/
#define GPIO_PPER2_PPE13	(*(volatile uint_io8_t*)0xB71C1C4D)  /*@bfbba@*/
#define GPIO_PPER2_PPE14	(*(volatile uint_io8_t*)0xB71C1C4E)  /*@bfbba@*/
#define GPIO_PPER2_PPE15	(*(volatile uint_io8_t*)0xB71C1C4F)  /*@bfbba@*/
#define GPIO_PPER2_PPE16	(*(volatile uint_io8_t*)0xB71C1C50)  /*@bfbba@*/
#define GPIO_PPER2_PPE17	(*(volatile uint_io8_t*)0xB71C1C51)  /*@bfbba@*/
#define GPIO_PPER2_PPE18	(*(volatile uint_io8_t*)0xB71C1C52)  /*@bfbba@*/
#define GPIO_PPER2_PPE19	(*(volatile uint_io8_t*)0xB71C1C53)  /*@bfbba@*/
#define GPIO_PPER2_PPE20	(*(volatile uint_io8_t*)0xB71C1C54)  /*@bfbba@*/
#define GPIO_PPER2_PPE21	(*(volatile uint_io8_t*)0xB71C1C55)  /*@bfbba@*/
#define GPIO_PPER2_PPE22	(*(volatile uint_io8_t*)0xB71C1C56)  /*@bfbba@*/
#define GPIO_PPER2_PPE23	(*(volatile uint_io8_t*)0xB71C1C57)  /*@bfbba@*/
#define GPIO_PPER2_PPE24	(*(volatile uint_io8_t*)0xB71C1C58)  /*@bfbba@*/
#define GPIO_PPER2_PPE25	(*(volatile uint_io8_t*)0xB71C1C59)  /*@bfbba@*/
#define GPIO_PPER2_PPE26	(*(volatile uint_io8_t*)0xB71C1C5A)  /*@bfbba@*/
#define GPIO_PPER2_PPE27	(*(volatile uint_io8_t*)0xB71C1C5B)  /*@bfbba@*/
#define GPIO_PPER2_PPE28	(*(volatile uint_io8_t*)0xB71C1C5C)  /*@bfbba@*/
#define GPIO_PPER2_PPE29	(*(volatile uint_io8_t*)0xB71C1C5D)  /*@bfbba@*/
#define GPIO_PPER2_PPE30	(*(volatile uint_io8_t*)0xB71C1C5E)  /*@bfbba@*/
#define GPIO_PPER2_PPE31	(*(volatile uint_io8_t*)0xB71C1C5F)  /*@bfbba@*/

#define GPIO_PPER3	(GPIO.unPPER3.u32Register)  /*@rg@*/
#define GPIO_PPER3_PPE0	(*(volatile uint_io8_t*)0xB71C1C60)  /*@bfbba@*/
#define GPIO_PPER3_PPE1	(*(volatile uint_io8_t*)0xB71C1C61)  /*@bfbba@*/
#define GPIO_PPER3_PPE2	(*(volatile uint_io8_t*)0xB71C1C62)  /*@bfbba@*/
#define GPIO_PPER3_PPE3	(*(volatile uint_io8_t*)0xB71C1C63)  /*@bfbba@*/
#define GPIO_PPER3_PPE4	(*(volatile uint_io8_t*)0xB71C1C64)  /*@bfbba@*/
#define GPIO_PPER3_PPE5	(*(volatile uint_io8_t*)0xB71C1C65)  /*@bfbba@*/
#define GPIO_PPER3_PPE6	(*(volatile uint_io8_t*)0xB71C1C66)  /*@bfbba@*/
#define GPIO_PPER3_PPE7	(*(volatile uint_io8_t*)0xB71C1C67)  /*@bfbba@*/
#define GPIO_PPER3_PPE8	(*(volatile uint_io8_t*)0xB71C1C68)  /*@bfbba@*/
#define GPIO_PPER3_PPE9	(*(volatile uint_io8_t*)0xB71C1C69)  /*@bfbba@*/
#define GPIO_PPER3_PPE10	(*(volatile uint_io8_t*)0xB71C1C6A)  /*@bfbba@*/
#define GPIO_PPER3_PPE11	(*(volatile uint_io8_t*)0xB71C1C6B)  /*@bfbba@*/
#define GPIO_PPER3_PPE12	(*(volatile uint_io8_t*)0xB71C1C6C)  /*@bfbba@*/
#define GPIO_PPER3_PPE13	(*(volatile uint_io8_t*)0xB71C1C6D)  /*@bfbba@*/
#define GPIO_PPER3_PPE14	(*(volatile uint_io8_t*)0xB71C1C6E)  /*@bfbba@*/
#define GPIO_PPER3_PPE15	(*(volatile uint_io8_t*)0xB71C1C6F)  /*@bfbba@*/
#define GPIO_PPER3_PPE16	(*(volatile uint_io8_t*)0xB71C1C70)  /*@bfbba@*/
#define GPIO_PPER3_PPE17	(*(volatile uint_io8_t*)0xB71C1C71)  /*@bfbba@*/
#define GPIO_PPER3_PPE18	(*(volatile uint_io8_t*)0xB71C1C72)  /*@bfbba@*/
#define GPIO_PPER3_PPE19	(*(volatile uint_io8_t*)0xB71C1C73)  /*@bfbba@*/
#define GPIO_PPER3_PPE20	(*(volatile uint_io8_t*)0xB71C1C74)  /*@bfbba@*/
#define GPIO_PPER3_PPE21	(*(volatile uint_io8_t*)0xB71C1C75)  /*@bfbba@*/
#define GPIO_PPER3_PPE22	(*(volatile uint_io8_t*)0xB71C1C76)  /*@bfbba@*/
#define GPIO_PPER3_PPE23	(*(volatile uint_io8_t*)0xB71C1C77)  /*@bfbba@*/
#define GPIO_PPER3_PPE24	(*(volatile uint_io8_t*)0xB71C1C78)  /*@bfbba@*/
#define GPIO_PPER3_PPE25	(*(volatile uint_io8_t*)0xB71C1C79)  /*@bfbba@*/
#define GPIO_PPER3_PPE26	(*(volatile uint_io8_t*)0xB71C1C7A)  /*@bfbba@*/
#define GPIO_PPER3_PPE27	(*(volatile uint_io8_t*)0xB71C1C7B)  /*@bfbba@*/
#define GPIO_PPER3_PPE28	(*(volatile uint_io8_t*)0xB71C1C7C)  /*@bfbba@*/
#define GPIO_PPER3_PPE29	(*(volatile uint_io8_t*)0xB71C1C7D)  /*@bfbba@*/
#define GPIO_PPER3_PPE30	(*(volatile uint_io8_t*)0xB71C1C7E)  /*@bfbba@*/
#define GPIO_PPER3_PPE31	(*(volatile uint_io8_t*)0xB71C1C7F)  /*@bfbba@*/

#define GPIO_PPER4	(GPIO.unPPER4.u32Register)  /*@rg@*/
#define GPIO_PPER4_PPE0	(*(volatile uint_io8_t*)0xB71C1C80)  /*@bfbba@*/
#define GPIO_PPER4_PPE1	(*(volatile uint_io8_t*)0xB71C1C81)  /*@bfbba@*/
#define GPIO_PPER4_PPE2	(*(volatile uint_io8_t*)0xB71C1C82)  /*@bfbba@*/
#define GPIO_PPER4_PPE3	(*(volatile uint_io8_t*)0xB71C1C83)  /*@bfbba@*/
#define GPIO_PPER4_PPE4	(*(volatile uint_io8_t*)0xB71C1C84)  /*@bfbba@*/
#define GPIO_PPER4_PPE5	(*(volatile uint_io8_t*)0xB71C1C85)  /*@bfbba@*/
#define GPIO_PPER4_PPE6	(*(volatile uint_io8_t*)0xB71C1C86)  /*@bfbba@*/
#define GPIO_PPER4_PPE7	(*(volatile uint_io8_t*)0xB71C1C87)  /*@bfbba@*/
#define GPIO_PPER4_PPE8	(*(volatile uint_io8_t*)0xB71C1C88)  /*@bfbba@*/
#define GPIO_PPER4_PPE9	(*(volatile uint_io8_t*)0xB71C1C89)  /*@bfbba@*/
#define GPIO_PPER4_PPE10	(*(volatile uint_io8_t*)0xB71C1C8A)  /*@bfbba@*/
#define GPIO_PPER4_PPE11	(*(volatile uint_io8_t*)0xB71C1C8B)  /*@bfbba@*/
#define GPIO_PPER4_PPE12	(*(volatile uint_io8_t*)0xB71C1C8C)  /*@bfbba@*/
#define GPIO_PPER4_PPE13	(*(volatile uint_io8_t*)0xB71C1C8D)  /*@bfbba@*/
#define GPIO_PPER4_PPE14	(*(volatile uint_io8_t*)0xB71C1C8E)  /*@bfbba@*/
#define GPIO_PPER4_PPE15	(*(volatile uint_io8_t*)0xB71C1C8F)  /*@bfbba@*/
#define GPIO_PPER4_PPE16	(*(volatile uint_io8_t*)0xB71C1C90)  /*@bfbba@*/
#define GPIO_PPER4_PPE17	(*(volatile uint_io8_t*)0xB71C1C91)  /*@bfbba@*/
#define GPIO_PPER4_PPE18	(*(volatile uint_io8_t*)0xB71C1C92)  /*@bfbba@*/
#define GPIO_PPER4_PPE19	(*(volatile uint_io8_t*)0xB71C1C93)  /*@bfbba@*/
#define GPIO_PPER4_PPE20	(*(volatile uint_io8_t*)0xB71C1C94)  /*@bfbba@*/
#define GPIO_PPER4_PPE21	(*(volatile uint_io8_t*)0xB71C1C95)  /*@bfbba@*/
#define GPIO_PPER4_PPE22	(*(volatile uint_io8_t*)0xB71C1C96)  /*@bfbba@*/
#define GPIO_PPER4_PPE23	(*(volatile uint_io8_t*)0xB71C1C97)  /*@bfbba@*/
#define GPIO_PPER4_PPE24	(*(volatile uint_io8_t*)0xB71C1C98)  /*@bfbba@*/
#define GPIO_PPER4_PPE25	(*(volatile uint_io8_t*)0xB71C1C99)  /*@bfbba@*/
#define GPIO_PPER4_PPE26	(*(volatile uint_io8_t*)0xB71C1C9A)  /*@bfbba@*/
#define GPIO_PPER4_PPE27	(*(volatile uint_io8_t*)0xB71C1C9B)  /*@bfbba@*/
#define GPIO_PPER4_PPE28	(*(volatile uint_io8_t*)0xB71C1C9C)  /*@bfbba@*/
#define GPIO_PPER4_PPE29	(*(volatile uint_io8_t*)0xB71C1C9D)  /*@bfbba@*/
#define GPIO_PPER4_PPE30	(*(volatile uint_io8_t*)0xB71C1C9E)  /*@bfbba@*/
#define GPIO_PPER4_PPE31	(*(volatile uint_io8_t*)0xB71C1C9F)  /*@bfbba@*/

#define GPIO_PPER5	(GPIO.unPPER5.u32Register)  /*@rg@*/
#define GPIO_PPER5_PPE0	(*(volatile uint_io8_t*)0xB71C1CA0)  /*@bfbba@*/
#define GPIO_PPER5_PPE1	(*(volatile uint_io8_t*)0xB71C1CA1)  /*@bfbba@*/
#define GPIO_PPER5_PPE2	(*(volatile uint_io8_t*)0xB71C1CA2)  /*@bfbba@*/
#define GPIO_PPER5_PPE3	(*(volatile uint_io8_t*)0xB71C1CA3)  /*@bfbba@*/
#define GPIO_PPER5_PPE4	(*(volatile uint_io8_t*)0xB71C1CA4)  /*@bfbba@*/
#define GPIO_PPER5_PPE5	(*(volatile uint_io8_t*)0xB71C1CA5)  /*@bfbba@*/
#define GPIO_PPER5_PPE6	(*(volatile uint_io8_t*)0xB71C1CA6)  /*@bfbba@*/
#define GPIO_PPER5_PPE7	(*(volatile uint_io8_t*)0xB71C1CA7)  /*@bfbba@*/
#define GPIO_PPER5_PPE8	(*(volatile uint_io8_t*)0xB71C1CA8)  /*@bfbba@*/
#define GPIO_PPER5_PPE9	(*(volatile uint_io8_t*)0xB71C1CA9)  /*@bfbba@*/
#define GPIO_PPER5_PPE10	(*(volatile uint_io8_t*)0xB71C1CAA)  /*@bfbba@*/
#define GPIO_PPER5_PPE11	(*(volatile uint_io8_t*)0xB71C1CAB)  /*@bfbba@*/
#define GPIO_PPER5_PPE12	(*(volatile uint_io8_t*)0xB71C1CAC)  /*@bfbba@*/
#define GPIO_PPER5_PPE13	(*(volatile uint_io8_t*)0xB71C1CAD)  /*@bfbba@*/
#define GPIO_PPER5_PPE14	(*(volatile uint_io8_t*)0xB71C1CAE)  /*@bfbba@*/
#define GPIO_PPER5_PPE15	(*(volatile uint_io8_t*)0xB71C1CAF)  /*@bfbba@*/
#define GPIO_PPER5_PPE16	(*(volatile uint_io8_t*)0xB71C1CB0)  /*@bfbba@*/
#define GPIO_PPER5_PPE17	(*(volatile uint_io8_t*)0xB71C1CB1)  /*@bfbba@*/
#define GPIO_PPER5_PPE18	(*(volatile uint_io8_t*)0xB71C1CB2)  /*@bfbba@*/
#define GPIO_PPER5_PPE19	(*(volatile uint_io8_t*)0xB71C1CB3)  /*@bfbba@*/
#define GPIO_PPER5_PPE20	(*(volatile uint_io8_t*)0xB71C1CB4)  /*@bfbba@*/
#define GPIO_PPER5_PPE21	(*(volatile uint_io8_t*)0xB71C1CB5)  /*@bfbba@*/
#define GPIO_PPER5_PPE22	(*(volatile uint_io8_t*)0xB71C1CB6)  /*@bfbba@*/
#define GPIO_PPER5_PPE23	(*(volatile uint_io8_t*)0xB71C1CB7)  /*@bfbba@*/
#define GPIO_PPER5_PPE24	(*(volatile uint_io8_t*)0xB71C1CB8)  /*@bfbba@*/
#define GPIO_PPER5_PPE25	(*(volatile uint_io8_t*)0xB71C1CB9)  /*@bfbba@*/
#define GPIO_PPER5_PPE26	(*(volatile uint_io8_t*)0xB71C1CBA)  /*@bfbba@*/
#define GPIO_PPER5_PPE27	(*(volatile uint_io8_t*)0xB71C1CBB)  /*@bfbba@*/
#define GPIO_PPER5_PPE28	(*(volatile uint_io8_t*)0xB71C1CBC)  /*@bfbba@*/
#define GPIO_PPER5_PPE29	(*(volatile uint_io8_t*)0xB71C1CBD)  /*@bfbba@*/
#define GPIO_PPER5_PPE30	(*(volatile uint_io8_t*)0xB71C1CBE)  /*@bfbba@*/
#define GPIO_PPER5_PPE31	(*(volatile uint_io8_t*)0xB71C1CBF)  /*@bfbba@*/

#define GPIO_PPER6	(GPIO.unPPER6.u32Register)  /*@rg@*/
#define GPIO_PPER6_PPE0	(*(volatile uint_io8_t*)0xB71C1CC0)  /*@bfbba@*/
#define GPIO_PPER6_PPE1	(*(volatile uint_io8_t*)0xB71C1CC1)  /*@bfbba@*/
#define GPIO_PPER6_PPE2	(*(volatile uint_io8_t*)0xB71C1CC2)  /*@bfbba@*/
#define GPIO_PPER6_PPE3	(*(volatile uint_io8_t*)0xB71C1CC3)  /*@bfbba@*/
#define GPIO_PPER6_PPE4	(*(volatile uint_io8_t*)0xB71C1CC4)  /*@bfbba@*/
#define GPIO_PPER6_PPE5	(*(volatile uint_io8_t*)0xB71C1CC5)  /*@bfbba@*/
#define GPIO_PPER6_PPE6	(*(volatile uint_io8_t*)0xB71C1CC6)  /*@bfbba@*/
#define GPIO_PPER6_PPE7	(*(volatile uint_io8_t*)0xB71C1CC7)  /*@bfbba@*/
#define GPIO_PPER6_PPE8	(*(volatile uint_io8_t*)0xB71C1CC8)  /*@bfbba@*/
#define GPIO_PPER6_PPE9	(*(volatile uint_io8_t*)0xB71C1CC9)  /*@bfbba@*/
#define GPIO_PPER6_PPE10	(*(volatile uint_io8_t*)0xB71C1CCA)  /*@bfbba@*/
#define GPIO_PPER6_PPE11	(*(volatile uint_io8_t*)0xB71C1CCB)  /*@bfbba@*/
#define GPIO_PPER6_PPE12	(*(volatile uint_io8_t*)0xB71C1CCC)  /*@bfbba@*/
#define GPIO_PPER6_PPE13	(*(volatile uint_io8_t*)0xB71C1CCD)  /*@bfbba@*/
#define GPIO_PPER6_PPE14	(*(volatile uint_io8_t*)0xB71C1CCE)  /*@bfbba@*/
#define GPIO_PPER6_PPE15	(*(volatile uint_io8_t*)0xB71C1CCF)  /*@bfbba@*/
#define GPIO_PPER6_PPE16	(*(volatile uint_io8_t*)0xB71C1CD0)  /*@bfbba@*/
#define GPIO_PPER6_PPE17	(*(volatile uint_io8_t*)0xB71C1CD1)  /*@bfbba@*/
#define GPIO_PPER6_PPE18	(*(volatile uint_io8_t*)0xB71C1CD2)  /*@bfbba@*/
#define GPIO_PPER6_PPE19	(*(volatile uint_io8_t*)0xB71C1CD3)  /*@bfbba@*/
#define GPIO_PPER6_PPE20	(*(volatile uint_io8_t*)0xB71C1CD4)  /*@bfbba@*/
#define GPIO_PPER6_PPE21	(*(volatile uint_io8_t*)0xB71C1CD5)  /*@bfbba@*/
#define GPIO_PPER6_PPE22	(*(volatile uint_io8_t*)0xB71C1CD6)  /*@bfbba@*/
#define GPIO_PPER6_PPE23	(*(volatile uint_io8_t*)0xB71C1CD7)  /*@bfbba@*/
#define GPIO_PPER6_PPE24	(*(volatile uint_io8_t*)0xB71C1CD8)  /*@bfbba@*/
#define GPIO_PPER6_PPE25	(*(volatile uint_io8_t*)0xB71C1CD9)  /*@bfbba@*/
#define GPIO_PPER6_PPE26	(*(volatile uint_io8_t*)0xB71C1CDA)  /*@bfbba@*/
#define GPIO_PPER6_PPE27	(*(volatile uint_io8_t*)0xB71C1CDB)  /*@bfbba@*/
#define GPIO_PPER6_PPE28	(*(volatile uint_io8_t*)0xB71C1CDC)  /*@bfbba@*/
#define GPIO_PPER6_PPE29	(*(volatile uint_io8_t*)0xB71C1CDD)  /*@bfbba@*/
#define GPIO_PPER6_PPE30	(*(volatile uint_io8_t*)0xB71C1CDE)  /*@bfbba@*/
#define GPIO_PPER6_PPE31	(*(volatile uint_io8_t*)0xB71C1CDF)  /*@bfbba@*/

#define GPIO_PPER7	(GPIO.unPPER7.u32Register)  /*@rg@*/
#define GPIO_PPER7_PPE0	(*(volatile uint_io8_t*)0xB71C1CE0)  /*@bfbba@*/
#define GPIO_PPER7_PPE1	(*(volatile uint_io8_t*)0xB71C1CE1)  /*@bfbba@*/
#define GPIO_PPER7_PPE2	(*(volatile uint_io8_t*)0xB71C1CE2)  /*@bfbba@*/
#define GPIO_PPER7_PPE3	(*(volatile uint_io8_t*)0xB71C1CE3)  /*@bfbba@*/
#define GPIO_PPER7_PPE4	(*(volatile uint_io8_t*)0xB71C1CE4)  /*@bfbba@*/
#define GPIO_PPER7_PPE5	(*(volatile uint_io8_t*)0xB71C1CE5)  /*@bfbba@*/
#define GPIO_PPER7_PPE6	(*(volatile uint_io8_t*)0xB71C1CE6)  /*@bfbba@*/
#define GPIO_PPER7_PPE7	(*(volatile uint_io8_t*)0xB71C1CE7)  /*@bfbba@*/
#define GPIO_PPER7_PPE8	(*(volatile uint_io8_t*)0xB71C1CE8)  /*@bfbba@*/
#define GPIO_PPER7_PPE9	(*(volatile uint_io8_t*)0xB71C1CE9)  /*@bfbba@*/
#define GPIO_PPER7_PPE10	(*(volatile uint_io8_t*)0xB71C1CEA)  /*@bfbba@*/
#define GPIO_PPER7_PPE11	(*(volatile uint_io8_t*)0xB71C1CEB)  /*@bfbba@*/
#define GPIO_PPER7_PPE12	(*(volatile uint_io8_t*)0xB71C1CEC)  /*@bfbba@*/
#define GPIO_PPER7_PPE13	(*(volatile uint_io8_t*)0xB71C1CED)  /*@bfbba@*/
#define GPIO_PPER7_PPE14	(*(volatile uint_io8_t*)0xB71C1CEE)  /*@bfbba@*/
#define GPIO_PPER7_PPE15	(*(volatile uint_io8_t*)0xB71C1CEF)  /*@bfbba@*/
#define GPIO_PPER7_PPE16	(*(volatile uint_io8_t*)0xB71C1CF0)  /*@bfbba@*/
#define GPIO_PPER7_PPE17	(*(volatile uint_io8_t*)0xB71C1CF1)  /*@bfbba@*/
#define GPIO_PPER7_PPE18	(*(volatile uint_io8_t*)0xB71C1CF2)  /*@bfbba@*/
#define GPIO_PPER7_PPE19	(*(volatile uint_io8_t*)0xB71C1CF3)  /*@bfbba@*/
#define GPIO_PPER7_PPE20	(*(volatile uint_io8_t*)0xB71C1CF4)  /*@bfbba@*/
#define GPIO_PPER7_PPE21	(*(volatile uint_io8_t*)0xB71C1CF5)  /*@bfbba@*/
#define GPIO_PPER7_PPE22	(*(volatile uint_io8_t*)0xB71C1CF6)  /*@bfbba@*/
#define GPIO_PPER7_PPE23	(*(volatile uint_io8_t*)0xB71C1CF7)  /*@bfbba@*/
#define GPIO_PPER7_PPE24	(*(volatile uint_io8_t*)0xB71C1CF8)  /*@bfbba@*/
#define GPIO_PPER7_PPE25	(*(volatile uint_io8_t*)0xB71C1CF9)  /*@bfbba@*/
#define GPIO_PPER7_PPE26	(*(volatile uint_io8_t*)0xB71C1CFA)  /*@bfbba@*/
#define GPIO_PPER7_PPE27	(*(volatile uint_io8_t*)0xB71C1CFB)  /*@bfbba@*/
#define GPIO_PPER7_PPE28	(*(volatile uint_io8_t*)0xB71C1CFC)  /*@bfbba@*/
#define GPIO_PPER7_PPE29	(*(volatile uint_io8_t*)0xB71C1CFD)  /*@bfbba@*/
#define GPIO_PPER7_PPE30	(*(volatile uint_io8_t*)0xB71C1CFE)  /*@bfbba@*/
#define GPIO_PPER7_PPE31	(*(volatile uint_io8_t*)0xB71C1CFF)  /*@bfbba@*/

#define GPIO_PPER8	(GPIO.unPPER8.u32Register)  /*@rg@*/
#define GPIO_PPER8_PPE0	(*(volatile uint_io8_t*)0xB71C1D00)  /*@bfbba@*/
#define GPIO_PPER8_PPE1	(*(volatile uint_io8_t*)0xB71C1D01)  /*@bfbba@*/
#define GPIO_PPER8_PPE2	(*(volatile uint_io8_t*)0xB71C1D02)  /*@bfbba@*/
#define GPIO_PPER8_PPE3	(*(volatile uint_io8_t*)0xB71C1D03)  /*@bfbba@*/
#define GPIO_PPER8_PPE4	(*(volatile uint_io8_t*)0xB71C1D04)  /*@bfbba@*/
#define GPIO_PPER8_PPE5	(*(volatile uint_io8_t*)0xB71C1D05)  /*@bfbba@*/
#define GPIO_PPER8_PPE6	(*(volatile uint_io8_t*)0xB71C1D06)  /*@bfbba@*/
#define GPIO_PPER8_PPE7	(*(volatile uint_io8_t*)0xB71C1D07)  /*@bfbba@*/
#define GPIO_PPER8_PPE8	(*(volatile uint_io8_t*)0xB71C1D08)  /*@bfbba@*/
#define GPIO_PPER8_PPE9	(*(volatile uint_io8_t*)0xB71C1D09)  /*@bfbba@*/
#define GPIO_PPER8_PPE10	(*(volatile uint_io8_t*)0xB71C1D0A)  /*@bfbba@*/
#define GPIO_PPER8_PPE11	(*(volatile uint_io8_t*)0xB71C1D0B)  /*@bfbba@*/
#define GPIO_PPER8_PPE12	(*(volatile uint_io8_t*)0xB71C1D0C)  /*@bfbba@*/
#define GPIO_PPER8_PPE13	(*(volatile uint_io8_t*)0xB71C1D0D)  /*@bfbba@*/
#define GPIO_PPER8_PPE14	(*(volatile uint_io8_t*)0xB71C1D0E)  /*@bfbba@*/
#define GPIO_PPER8_PPE15	(*(volatile uint_io8_t*)0xB71C1D0F)  /*@bfbba@*/
#define GPIO_PPER8_PPE16	(*(volatile uint_io8_t*)0xB71C1D10)  /*@bfbba@*/
#define GPIO_PPER8_PPE17	(*(volatile uint_io8_t*)0xB71C1D11)  /*@bfbba@*/
#define GPIO_PPER8_PPE18	(*(volatile uint_io8_t*)0xB71C1D12)  /*@bfbba@*/
#define GPIO_PPER8_PPE19	(*(volatile uint_io8_t*)0xB71C1D13)  /*@bfbba@*/
#define GPIO_PPER8_PPE20	(*(volatile uint_io8_t*)0xB71C1D14)  /*@bfbba@*/
#define GPIO_PPER8_PPE21	(*(volatile uint_io8_t*)0xB71C1D15)  /*@bfbba@*/
#define GPIO_PPER8_PPE22	(*(volatile uint_io8_t*)0xB71C1D16)  /*@bfbba@*/
#define GPIO_PPER8_PPE23	(*(volatile uint_io8_t*)0xB71C1D17)  /*@bfbba@*/
#define GPIO_PPER8_PPE24	(*(volatile uint_io8_t*)0xB71C1D18)  /*@bfbba@*/
#define GPIO_PPER8_PPE25	(*(volatile uint_io8_t*)0xB71C1D19)  /*@bfbba@*/
#define GPIO_PPER8_PPE26	(*(volatile uint_io8_t*)0xB71C1D1A)  /*@bfbba@*/
#define GPIO_PPER8_PPE27	(*(volatile uint_io8_t*)0xB71C1D1B)  /*@bfbba@*/
#define GPIO_PPER8_PPE28	(*(volatile uint_io8_t*)0xB71C1D1C)  /*@bfbba@*/
#define GPIO_PPER8_PPE29	(*(volatile uint_io8_t*)0xB71C1D1D)  /*@bfbba@*/
#define GPIO_PPER8_PPE30	(*(volatile uint_io8_t*)0xB71C1D1E)  /*@bfbba@*/
#define GPIO_PPER8_PPE31	(*(volatile uint_io8_t*)0xB71C1D1F)  /*@bfbba@*/

#define GPIO_PPER9	(GPIO.unPPER9.u32Register)  /*@rg@*/
#define GPIO_PPER9_PPE0	(*(volatile uint_io8_t*)0xB71C1D20)  /*@bfbba@*/
#define GPIO_PPER9_PPE1	(*(volatile uint_io8_t*)0xB71C1D21)  /*@bfbba@*/
#define GPIO_PPER9_PPE2	(*(volatile uint_io8_t*)0xB71C1D22)  /*@bfbba@*/
#define GPIO_PPER9_PPE3	(*(volatile uint_io8_t*)0xB71C1D23)  /*@bfbba@*/
#define GPIO_PPER9_PPE4	(*(volatile uint_io8_t*)0xB71C1D24)  /*@bfbba@*/
#define GPIO_PPER9_PPE5	(*(volatile uint_io8_t*)0xB71C1D25)  /*@bfbba@*/
#define GPIO_PPER9_PPE6	(*(volatile uint_io8_t*)0xB71C1D26)  /*@bfbba@*/
#define GPIO_PPER9_PPE7	(*(volatile uint_io8_t*)0xB71C1D27)  /*@bfbba@*/
#define GPIO_PPER9_PPE8	(*(volatile uint_io8_t*)0xB71C1D28)  /*@bfbba@*/
#define GPIO_PPER9_PPE9	(*(volatile uint_io8_t*)0xB71C1D29)  /*@bfbba@*/
#define GPIO_PPER9_PPE10	(*(volatile uint_io8_t*)0xB71C1D2A)  /*@bfbba@*/
#define GPIO_PPER9_PPE11	(*(volatile uint_io8_t*)0xB71C1D2B)  /*@bfbba@*/
#define GPIO_PPER9_PPE12	(*(volatile uint_io8_t*)0xB71C1D2C)  /*@bfbba@*/
#define GPIO_PPER9_PPE13	(*(volatile uint_io8_t*)0xB71C1D2D)  /*@bfbba@*/
#define GPIO_PPER9_PPE14	(*(volatile uint_io8_t*)0xB71C1D2E)  /*@bfbba@*/
#define GPIO_PPER9_PPE15	(*(volatile uint_io8_t*)0xB71C1D2F)  /*@bfbba@*/
#define GPIO_PPER9_PPE16	(*(volatile uint_io8_t*)0xB71C1D30)  /*@bfbba@*/
#define GPIO_PPER9_PPE17	(*(volatile uint_io8_t*)0xB71C1D31)  /*@bfbba@*/
#define GPIO_PPER9_PPE18	(*(volatile uint_io8_t*)0xB71C1D32)  /*@bfbba@*/
#define GPIO_PPER9_PPE19	(*(volatile uint_io8_t*)0xB71C1D33)  /*@bfbba@*/
#define GPIO_PPER9_PPE20	(*(volatile uint_io8_t*)0xB71C1D34)  /*@bfbba@*/
#define GPIO_PPER9_PPE21	(*(volatile uint_io8_t*)0xB71C1D35)  /*@bfbba@*/
#define GPIO_PPER9_PPE22	(*(volatile uint_io8_t*)0xB71C1D36)  /*@bfbba@*/
#define GPIO_PPER9_PPE23	(*(volatile uint_io8_t*)0xB71C1D37)  /*@bfbba@*/
#define GPIO_PPER9_PPE24	(*(volatile uint_io8_t*)0xB71C1D38)  /*@bfbba@*/
#define GPIO_PPER9_PPE25	(*(volatile uint_io8_t*)0xB71C1D39)  /*@bfbba@*/
#define GPIO_PPER9_PPE26	(*(volatile uint_io8_t*)0xB71C1D3A)  /*@bfbba@*/
#define GPIO_PPER9_PPE27	(*(volatile uint_io8_t*)0xB71C1D3B)  /*@bfbba@*/
#define GPIO_PPER9_PPE28	(*(volatile uint_io8_t*)0xB71C1D3C)  /*@bfbba@*/
#define GPIO_PPER9_PPE29	(*(volatile uint_io8_t*)0xB71C1D3D)  /*@bfbba@*/
#define GPIO_PPER9_PPE30	(*(volatile uint_io8_t*)0xB71C1D3E)  /*@bfbba@*/
#define GPIO_PPER9_PPE31	(*(volatile uint_io8_t*)0xB71C1D3F)  /*@bfbba@*/

#define GPIO_PPER10	(GPIO.unPPER10.u32Register)  /*@rg@*/
#define GPIO_PPER10_PPE0	(*(volatile uint_io8_t*)0xB71C1D40)  /*@bfbba@*/
#define GPIO_PPER10_PPE1	(*(volatile uint_io8_t*)0xB71C1D41)  /*@bfbba@*/
#define GPIO_PPER10_PPE2	(*(volatile uint_io8_t*)0xB71C1D42)  /*@bfbba@*/
#define GPIO_PPER10_PPE3	(*(volatile uint_io8_t*)0xB71C1D43)  /*@bfbba@*/
#define GPIO_PPER10_PPE4	(*(volatile uint_io8_t*)0xB71C1D44)  /*@bfbba@*/
#define GPIO_PPER10_PPE5	(*(volatile uint_io8_t*)0xB71C1D45)  /*@bfbba@*/
#define GPIO_PPER10_PPE6	(*(volatile uint_io8_t*)0xB71C1D46)  /*@bfbba@*/
#define GPIO_PPER10_PPE7	(*(volatile uint_io8_t*)0xB71C1D47)  /*@bfbba@*/
#define GPIO_PPER10_PPE8	(*(volatile uint_io8_t*)0xB71C1D48)  /*@bfbba@*/
#define GPIO_PPER10_PPE9	(*(volatile uint_io8_t*)0xB71C1D49)  /*@bfbba@*/
#define GPIO_PPER10_PPE10	(*(volatile uint_io8_t*)0xB71C1D4A)  /*@bfbba@*/
#define GPIO_PPER10_PPE11	(*(volatile uint_io8_t*)0xB71C1D4B)  /*@bfbba@*/
#define GPIO_PPER10_PPE12	(*(volatile uint_io8_t*)0xB71C1D4C)  /*@bfbba@*/
#define GPIO_PPER10_PPE13	(*(volatile uint_io8_t*)0xB71C1D4D)  /*@bfbba@*/
#define GPIO_PPER10_PPE14	(*(volatile uint_io8_t*)0xB71C1D4E)  /*@bfbba@*/
#define GPIO_PPER10_PPE15	(*(volatile uint_io8_t*)0xB71C1D4F)  /*@bfbba@*/
#define GPIO_PPER10_PPE16	(*(volatile uint_io8_t*)0xB71C1D50)  /*@bfbba@*/
#define GPIO_PPER10_PPE17	(*(volatile uint_io8_t*)0xB71C1D51)  /*@bfbba@*/
#define GPIO_PPER10_PPE18	(*(volatile uint_io8_t*)0xB71C1D52)  /*@bfbba@*/
#define GPIO_PPER10_PPE19	(*(volatile uint_io8_t*)0xB71C1D53)  /*@bfbba@*/
#define GPIO_PPER10_PPE20	(*(volatile uint_io8_t*)0xB71C1D54)  /*@bfbba@*/
#define GPIO_PPER10_PPE21	(*(volatile uint_io8_t*)0xB71C1D55)  /*@bfbba@*/
#define GPIO_PPER10_PPE22	(*(volatile uint_io8_t*)0xB71C1D56)  /*@bfbba@*/
#define GPIO_PPER10_PPE23	(*(volatile uint_io8_t*)0xB71C1D57)  /*@bfbba@*/
#define GPIO_PPER10_PPE24	(*(volatile uint_io8_t*)0xB71C1D58)  /*@bfbba@*/
#define GPIO_PPER10_PPE25	(*(volatile uint_io8_t*)0xB71C1D59)  /*@bfbba@*/
#define GPIO_PPER10_PPE26	(*(volatile uint_io8_t*)0xB71C1D5A)  /*@bfbba@*/
#define GPIO_PPER10_PPE27	(*(volatile uint_io8_t*)0xB71C1D5B)  /*@bfbba@*/
#define GPIO_PPER10_PPE28	(*(volatile uint_io8_t*)0xB71C1D5C)  /*@bfbba@*/
#define GPIO_PPER10_PPE29	(*(volatile uint_io8_t*)0xB71C1D5D)  /*@bfbba@*/
#define GPIO_PPER10_PPE30	(*(volatile uint_io8_t*)0xB71C1D5E)  /*@bfbba@*/
#define GPIO_PPER10_PPE31	(*(volatile uint_io8_t*)0xB71C1D5F)  /*@bfbba@*/

#define GPIO_PPER11	(GPIO.unPPER11.u32Register)  /*@rg@*/
#define GPIO_PPER11_PPE0	(*(volatile uint_io8_t*)0xB71C1D60)  /*@bfbba@*/
#define GPIO_PPER11_PPE1	(*(volatile uint_io8_t*)0xB71C1D61)  /*@bfbba@*/
#define GPIO_PPER11_PPE2	(*(volatile uint_io8_t*)0xB71C1D62)  /*@bfbba@*/
#define GPIO_PPER11_PPE3	(*(volatile uint_io8_t*)0xB71C1D63)  /*@bfbba@*/
#define GPIO_PPER11_PPE4	(*(volatile uint_io8_t*)0xB71C1D64)  /*@bfbba@*/
#define GPIO_PPER11_PPE5	(*(volatile uint_io8_t*)0xB71C1D65)  /*@bfbba@*/
#define GPIO_PPER11_PPE6	(*(volatile uint_io8_t*)0xB71C1D66)  /*@bfbba@*/
#define GPIO_PPER11_PPE7	(*(volatile uint_io8_t*)0xB71C1D67)  /*@bfbba@*/
#define GPIO_PPER11_PPE8	(*(volatile uint_io8_t*)0xB71C1D68)  /*@bfbba@*/
#define GPIO_PPER11_PPE9	(*(volatile uint_io8_t*)0xB71C1D69)  /*@bfbba@*/
#define GPIO_PPER11_PPE10	(*(volatile uint_io8_t*)0xB71C1D6A)  /*@bfbba@*/
#define GPIO_PPER11_PPE11	(*(volatile uint_io8_t*)0xB71C1D6B)  /*@bfbba@*/
#define GPIO_PPER11_PPE12	(*(volatile uint_io8_t*)0xB71C1D6C)  /*@bfbba@*/
#define GPIO_PPER11_PPE13	(*(volatile uint_io8_t*)0xB71C1D6D)  /*@bfbba@*/
#define GPIO_PPER11_PPE14	(*(volatile uint_io8_t*)0xB71C1D6E)  /*@bfbba@*/
#define GPIO_PPER11_PPE15	(*(volatile uint_io8_t*)0xB71C1D6F)  /*@bfbba@*/
#define GPIO_PPER11_PPE16	(*(volatile uint_io8_t*)0xB71C1D70)  /*@bfbba@*/
#define GPIO_PPER11_PPE17	(*(volatile uint_io8_t*)0xB71C1D71)  /*@bfbba@*/
#define GPIO_PPER11_PPE18	(*(volatile uint_io8_t*)0xB71C1D72)  /*@bfbba@*/
#define GPIO_PPER11_PPE19	(*(volatile uint_io8_t*)0xB71C1D73)  /*@bfbba@*/
#define GPIO_PPER11_PPE20	(*(volatile uint_io8_t*)0xB71C1D74)  /*@bfbba@*/
#define GPIO_PPER11_PPE21	(*(volatile uint_io8_t*)0xB71C1D75)  /*@bfbba@*/
#define GPIO_PPER11_PPE22	(*(volatile uint_io8_t*)0xB71C1D76)  /*@bfbba@*/
#define GPIO_PPER11_PPE23	(*(volatile uint_io8_t*)0xB71C1D77)  /*@bfbba@*/
#define GPIO_PPER11_PPE24	(*(volatile uint_io8_t*)0xB71C1D78)  /*@bfbba@*/
#define GPIO_PPER11_PPE25	(*(volatile uint_io8_t*)0xB71C1D79)  /*@bfbba@*/
#define GPIO_PPER11_PPE26	(*(volatile uint_io8_t*)0xB71C1D7A)  /*@bfbba@*/
#define GPIO_PPER11_PPE27	(*(volatile uint_io8_t*)0xB71C1D7B)  /*@bfbba@*/
#define GPIO_PPER11_PPE28	(*(volatile uint_io8_t*)0xB71C1D7C)  /*@bfbba@*/
#define GPIO_PPER11_PPE29	(*(volatile uint_io8_t*)0xB71C1D7D)  /*@bfbba@*/
#define GPIO_PPER11_PPE30	(*(volatile uint_io8_t*)0xB71C1D7E)  /*@bfbba@*/
#define GPIO_PPER11_PPE31	(*(volatile uint_io8_t*)0xB71C1D7F)  /*@bfbba@*/

#define GPIO_PPER12	(GPIO.unPPER12.u32Register)  /*@rg@*/
#define GPIO_PPER12_PPE0	(*(volatile uint_io8_t*)0xB71C1D80)  /*@bfbba@*/
#define GPIO_PPER12_PPE1	(*(volatile uint_io8_t*)0xB71C1D81)  /*@bfbba@*/
#define GPIO_PPER12_PPE2	(*(volatile uint_io8_t*)0xB71C1D82)  /*@bfbba@*/
#define GPIO_PPER12_PPE3	(*(volatile uint_io8_t*)0xB71C1D83)  /*@bfbba@*/
#define GPIO_PPER12_PPE4	(*(volatile uint_io8_t*)0xB71C1D84)  /*@bfbba@*/
#define GPIO_PPER12_PPE5	(*(volatile uint_io8_t*)0xB71C1D85)  /*@bfbba@*/
#define GPIO_PPER12_PPE6	(*(volatile uint_io8_t*)0xB71C1D86)  /*@bfbba@*/
#define GPIO_PPER12_PPE7	(*(volatile uint_io8_t*)0xB71C1D87)  /*@bfbba@*/
#define GPIO_PPER12_PPE8	(*(volatile uint_io8_t*)0xB71C1D88)  /*@bfbba@*/
#define GPIO_PPER12_PPE9	(*(volatile uint_io8_t*)0xB71C1D89)  /*@bfbba@*/
#define GPIO_PPER12_PPE10	(*(volatile uint_io8_t*)0xB71C1D8A)  /*@bfbba@*/
#define GPIO_PPER12_PPE11	(*(volatile uint_io8_t*)0xB71C1D8B)  /*@bfbba@*/
#define GPIO_PPER12_PPE12	(*(volatile uint_io8_t*)0xB71C1D8C)  /*@bfbba@*/
#define GPIO_PPER12_PPE13	(*(volatile uint_io8_t*)0xB71C1D8D)  /*@bfbba@*/
#define GPIO_PPER12_PPE14	(*(volatile uint_io8_t*)0xB71C1D8E)  /*@bfbba@*/
#define GPIO_PPER12_PPE15	(*(volatile uint_io8_t*)0xB71C1D8F)  /*@bfbba@*/
#define GPIO_PPER12_PPE16	(*(volatile uint_io8_t*)0xB71C1D90)  /*@bfbba@*/
#define GPIO_PPER12_PPE17	(*(volatile uint_io8_t*)0xB71C1D91)  /*@bfbba@*/
#define GPIO_PPER12_PPE18	(*(volatile uint_io8_t*)0xB71C1D92)  /*@bfbba@*/
#define GPIO_PPER12_PPE19	(*(volatile uint_io8_t*)0xB71C1D93)  /*@bfbba@*/
#define GPIO_PPER12_PPE20	(*(volatile uint_io8_t*)0xB71C1D94)  /*@bfbba@*/
#define GPIO_PPER12_PPE21	(*(volatile uint_io8_t*)0xB71C1D95)  /*@bfbba@*/
#define GPIO_PPER12_PPE22	(*(volatile uint_io8_t*)0xB71C1D96)  /*@bfbba@*/
#define GPIO_PPER12_PPE23	(*(volatile uint_io8_t*)0xB71C1D97)  /*@bfbba@*/
#define GPIO_PPER12_PPE24	(*(volatile uint_io8_t*)0xB71C1D98)  /*@bfbba@*/
#define GPIO_PPER12_PPE25	(*(volatile uint_io8_t*)0xB71C1D99)  /*@bfbba@*/
#define GPIO_PPER12_PPE26	(*(volatile uint_io8_t*)0xB71C1D9A)  /*@bfbba@*/
#define GPIO_PPER12_PPE27	(*(volatile uint_io8_t*)0xB71C1D9B)  /*@bfbba@*/
#define GPIO_PPER12_PPE28	(*(volatile uint_io8_t*)0xB71C1D9C)  /*@bfbba@*/
#define GPIO_PPER12_PPE29	(*(volatile uint_io8_t*)0xB71C1D9D)  /*@bfbba@*/
#define GPIO_PPER12_PPE30	(*(volatile uint_io8_t*)0xB71C1D9E)  /*@bfbba@*/
#define GPIO_PPER12_PPE31	(*(volatile uint_io8_t*)0xB71C1D9F)  /*@bfbba@*/

#define GPIO_PPER13	(GPIO.unPPER13.u32Register)  /*@rg@*/
#define GPIO_PPER13_PPE0	(*(volatile uint_io8_t*)0xB71C1DA0)  /*@bfbba@*/
#define GPIO_PPER13_PPE1	(*(volatile uint_io8_t*)0xB71C1DA1)  /*@bfbba@*/
#define GPIO_PPER13_PPE2	(*(volatile uint_io8_t*)0xB71C1DA2)  /*@bfbba@*/
#define GPIO_PPER13_PPE3	(*(volatile uint_io8_t*)0xB71C1DA3)  /*@bfbba@*/
#define GPIO_PPER13_PPE4	(*(volatile uint_io8_t*)0xB71C1DA4)  /*@bfbba@*/
#define GPIO_PPER13_PPE5	(*(volatile uint_io8_t*)0xB71C1DA5)  /*@bfbba@*/
#define GPIO_PPER13_PPE6	(*(volatile uint_io8_t*)0xB71C1DA6)  /*@bfbba@*/
#define GPIO_PPER13_PPE7	(*(volatile uint_io8_t*)0xB71C1DA7)  /*@bfbba@*/
#define GPIO_PPER13_PPE8	(*(volatile uint_io8_t*)0xB71C1DA8)  /*@bfbba@*/
#define GPIO_PPER13_PPE9	(*(volatile uint_io8_t*)0xB71C1DA9)  /*@bfbba@*/
#define GPIO_PPER13_PPE10	(*(volatile uint_io8_t*)0xB71C1DAA)  /*@bfbba@*/
#define GPIO_PPER13_PPE11	(*(volatile uint_io8_t*)0xB71C1DAB)  /*@bfbba@*/
#define GPIO_PPER13_PPE12	(*(volatile uint_io8_t*)0xB71C1DAC)  /*@bfbba@*/
#define GPIO_PPER13_PPE13	(*(volatile uint_io8_t*)0xB71C1DAD)  /*@bfbba@*/
#define GPIO_PPER13_PPE14	(*(volatile uint_io8_t*)0xB71C1DAE)  /*@bfbba@*/
#define GPIO_PPER13_PPE15	(*(volatile uint_io8_t*)0xB71C1DAF)  /*@bfbba@*/
#define GPIO_PPER13_PPE16	(*(volatile uint_io8_t*)0xB71C1DB0)  /*@bfbba@*/
#define GPIO_PPER13_PPE17	(*(volatile uint_io8_t*)0xB71C1DB1)  /*@bfbba@*/
#define GPIO_PPER13_PPE18	(*(volatile uint_io8_t*)0xB71C1DB2)  /*@bfbba@*/
#define GPIO_PPER13_PPE19	(*(volatile uint_io8_t*)0xB71C1DB3)  /*@bfbba@*/
#define GPIO_PPER13_PPE20	(*(volatile uint_io8_t*)0xB71C1DB4)  /*@bfbba@*/
#define GPIO_PPER13_PPE21	(*(volatile uint_io8_t*)0xB71C1DB5)  /*@bfbba@*/
#define GPIO_PPER13_PPE22	(*(volatile uint_io8_t*)0xB71C1DB6)  /*@bfbba@*/
#define GPIO_PPER13_PPE23	(*(volatile uint_io8_t*)0xB71C1DB7)  /*@bfbba@*/
#define GPIO_PPER13_PPE24	(*(volatile uint_io8_t*)0xB71C1DB8)  /*@bfbba@*/
#define GPIO_PPER13_PPE25	(*(volatile uint_io8_t*)0xB71C1DB9)  /*@bfbba@*/
#define GPIO_PPER13_PPE26	(*(volatile uint_io8_t*)0xB71C1DBA)  /*@bfbba@*/
#define GPIO_PPER13_PPE27	(*(volatile uint_io8_t*)0xB71C1DBB)  /*@bfbba@*/
#define GPIO_PPER13_PPE28	(*(volatile uint_io8_t*)0xB71C1DBC)  /*@bfbba@*/
#define GPIO_PPER13_PPE29	(*(volatile uint_io8_t*)0xB71C1DBD)  /*@bfbba@*/
#define GPIO_PPER13_PPE30	(*(volatile uint_io8_t*)0xB71C1DBE)  /*@bfbba@*/
#define GPIO_PPER13_PPE31	(*(volatile uint_io8_t*)0xB71C1DBF)  /*@bfbba@*/

#define GPIO_PPER14	(GPIO.unPPER14.u32Register)  /*@rg@*/
#define GPIO_PPER14_PPE0	(*(volatile uint_io8_t*)0xB71C1DC0)  /*@bfbba@*/
#define GPIO_PPER14_PPE1	(*(volatile uint_io8_t*)0xB71C1DC1)  /*@bfbba@*/
#define GPIO_PPER14_PPE2	(*(volatile uint_io8_t*)0xB71C1DC2)  /*@bfbba@*/
#define GPIO_PPER14_PPE3	(*(volatile uint_io8_t*)0xB71C1DC3)  /*@bfbba@*/
#define GPIO_PPER14_PPE4	(*(volatile uint_io8_t*)0xB71C1DC4)  /*@bfbba@*/
#define GPIO_PPER14_PPE5	(*(volatile uint_io8_t*)0xB71C1DC5)  /*@bfbba@*/
#define GPIO_PPER14_PPE6	(*(volatile uint_io8_t*)0xB71C1DC6)  /*@bfbba@*/
#define GPIO_PPER14_PPE7	(*(volatile uint_io8_t*)0xB71C1DC7)  /*@bfbba@*/
#define GPIO_PPER14_PPE8	(*(volatile uint_io8_t*)0xB71C1DC8)  /*@bfbba@*/
#define GPIO_PPER14_PPE9	(*(volatile uint_io8_t*)0xB71C1DC9)  /*@bfbba@*/
#define GPIO_PPER14_PPE10	(*(volatile uint_io8_t*)0xB71C1DCA)  /*@bfbba@*/
#define GPIO_PPER14_PPE11	(*(volatile uint_io8_t*)0xB71C1DCB)  /*@bfbba@*/
#define GPIO_PPER14_PPE12	(*(volatile uint_io8_t*)0xB71C1DCC)  /*@bfbba@*/
#define GPIO_PPER14_PPE13	(*(volatile uint_io8_t*)0xB71C1DCD)  /*@bfbba@*/
#define GPIO_PPER14_PPE14	(*(volatile uint_io8_t*)0xB71C1DCE)  /*@bfbba@*/
#define GPIO_PPER14_PPE15	(*(volatile uint_io8_t*)0xB71C1DCF)  /*@bfbba@*/
#define GPIO_PPER14_PPE16	(*(volatile uint_io8_t*)0xB71C1DD0)  /*@bfbba@*/
#define GPIO_PPER14_PPE17	(*(volatile uint_io8_t*)0xB71C1DD1)  /*@bfbba@*/
#define GPIO_PPER14_PPE18	(*(volatile uint_io8_t*)0xB71C1DD2)  /*@bfbba@*/
#define GPIO_PPER14_PPE19	(*(volatile uint_io8_t*)0xB71C1DD3)  /*@bfbba@*/
#define GPIO_PPER14_PPE20	(*(volatile uint_io8_t*)0xB71C1DD4)  /*@bfbba@*/
#define GPIO_PPER14_PPE21	(*(volatile uint_io8_t*)0xB71C1DD5)  /*@bfbba@*/
#define GPIO_PPER14_PPE22	(*(volatile uint_io8_t*)0xB71C1DD6)  /*@bfbba@*/
#define GPIO_PPER14_PPE23	(*(volatile uint_io8_t*)0xB71C1DD7)  /*@bfbba@*/
#define GPIO_PPER14_PPE24	(*(volatile uint_io8_t*)0xB71C1DD8)  /*@bfbba@*/
#define GPIO_PPER14_PPE25	(*(volatile uint_io8_t*)0xB71C1DD9)  /*@bfbba@*/
#define GPIO_PPER14_PPE26	(*(volatile uint_io8_t*)0xB71C1DDA)  /*@bfbba@*/
#define GPIO_PPER14_PPE27	(*(volatile uint_io8_t*)0xB71C1DDB)  /*@bfbba@*/
#define GPIO_PPER14_PPE28	(*(volatile uint_io8_t*)0xB71C1DDC)  /*@bfbba@*/
#define GPIO_PPER14_PPE29	(*(volatile uint_io8_t*)0xB71C1DDD)  /*@bfbba@*/
#define GPIO_PPER14_PPE30	(*(volatile uint_io8_t*)0xB71C1DDE)  /*@bfbba@*/
#define GPIO_PPER14_PPE31	(*(volatile uint_io8_t*)0xB71C1DDF)  /*@bfbba@*/

#define GPIO_PPER15	(GPIO.unPPER15.u32Register)  /*@rg@*/
#define GPIO_PPER15_PPE0	(*(volatile uint_io8_t*)0xB71C1DE0)  /*@bfbba@*/
#define GPIO_PPER15_PPE1	(*(volatile uint_io8_t*)0xB71C1DE1)  /*@bfbba@*/
#define GPIO_PPER15_PPE2	(*(volatile uint_io8_t*)0xB71C1DE2)  /*@bfbba@*/
#define GPIO_PPER15_PPE3	(*(volatile uint_io8_t*)0xB71C1DE3)  /*@bfbba@*/
#define GPIO_PPER15_PPE4	(*(volatile uint_io8_t*)0xB71C1DE4)  /*@bfbba@*/
#define GPIO_PPER15_PPE5	(*(volatile uint_io8_t*)0xB71C1DE5)  /*@bfbba@*/
#define GPIO_PPER15_PPE6	(*(volatile uint_io8_t*)0xB71C1DE6)  /*@bfbba@*/
#define GPIO_PPER15_PPE7	(*(volatile uint_io8_t*)0xB71C1DE7)  /*@bfbba@*/
#define GPIO_PPER15_PPE8	(*(volatile uint_io8_t*)0xB71C1DE8)  /*@bfbba@*/
#define GPIO_PPER15_PPE9	(*(volatile uint_io8_t*)0xB71C1DE9)  /*@bfbba@*/
#define GPIO_PPER15_PPE10	(*(volatile uint_io8_t*)0xB71C1DEA)  /*@bfbba@*/
#define GPIO_PPER15_PPE11	(*(volatile uint_io8_t*)0xB71C1DEB)  /*@bfbba@*/
#define GPIO_PPER15_PPE12	(*(volatile uint_io8_t*)0xB71C1DEC)  /*@bfbba@*/
#define GPIO_PPER15_PPE13	(*(volatile uint_io8_t*)0xB71C1DED)  /*@bfbba@*/
#define GPIO_PPER15_PPE14	(*(volatile uint_io8_t*)0xB71C1DEE)  /*@bfbba@*/
#define GPIO_PPER15_PPE15	(*(volatile uint_io8_t*)0xB71C1DEF)  /*@bfbba@*/
#define GPIO_PPER15_PPE16	(*(volatile uint_io8_t*)0xB71C1DF0)  /*@bfbba@*/
#define GPIO_PPER15_PPE17	(*(volatile uint_io8_t*)0xB71C1DF1)  /*@bfbba@*/
#define GPIO_PPER15_PPE18	(*(volatile uint_io8_t*)0xB71C1DF2)  /*@bfbba@*/
#define GPIO_PPER15_PPE19	(*(volatile uint_io8_t*)0xB71C1DF3)  /*@bfbba@*/
#define GPIO_PPER15_PPE20	(*(volatile uint_io8_t*)0xB71C1DF4)  /*@bfbba@*/
#define GPIO_PPER15_PPE21	(*(volatile uint_io8_t*)0xB71C1DF5)  /*@bfbba@*/
#define GPIO_PPER15_PPE22	(*(volatile uint_io8_t*)0xB71C1DF6)  /*@bfbba@*/
#define GPIO_PPER15_PPE23	(*(volatile uint_io8_t*)0xB71C1DF7)  /*@bfbba@*/
#define GPIO_PPER15_PPE24	(*(volatile uint_io8_t*)0xB71C1DF8)  /*@bfbba@*/
#define GPIO_PPER15_PPE25	(*(volatile uint_io8_t*)0xB71C1DF9)  /*@bfbba@*/
#define GPIO_PPER15_PPE26	(*(volatile uint_io8_t*)0xB71C1DFA)  /*@bfbba@*/
#define GPIO_PPER15_PPE27	(*(volatile uint_io8_t*)0xB71C1DFB)  /*@bfbba@*/
#define GPIO_PPER15_PPE28	(*(volatile uint_io8_t*)0xB71C1DFC)  /*@bfbba@*/
#define GPIO_PPER15_PPE29	(*(volatile uint_io8_t*)0xB71C1DFD)  /*@bfbba@*/
#define GPIO_PPER15_PPE30	(*(volatile uint_io8_t*)0xB71C1DFE)  /*@bfbba@*/
#define GPIO_PPER15_PPE31	(*(volatile uint_io8_t*)0xB71C1DFF)  /*@bfbba@*/

typedef struct stc_gpio_ppern_field{
    uint_io32_t		u1PPE0:1;
    uint_io32_t		u1PPE1:1;
    uint_io32_t		u1PPE2:1;
    uint_io32_t		u1PPE3:1;
    uint_io32_t		u1PPE4:1;
    uint_io32_t		u1PPE5:1;
    uint_io32_t		u1PPE6:1;
    uint_io32_t		u1PPE7:1;
    uint_io32_t		u1PPE8:1;
    uint_io32_t		u1PPE9:1;
    uint_io32_t		u1PPE10:1;
    uint_io32_t		u1PPE11:1;
    uint_io32_t		u1PPE12:1;
    uint_io32_t		u1PPE13:1;
    uint_io32_t		u1PPE14:1;
    uint_io32_t		u1PPE15:1;
    uint_io32_t		u1PPE16:1;
    uint_io32_t		u1PPE17:1;
    uint_io32_t		u1PPE18:1;
    uint_io32_t		u1PPE19:1;
    uint_io32_t		u1PPE20:1;
    uint_io32_t		u1PPE21:1;
    uint_io32_t		u1PPE22:1;
    uint_io32_t		u1PPE23:1;
    uint_io32_t		u1PPE24:1;
    uint_io32_t		u1PPE25:1;
    uint_io32_t		u1PPE26:1;
    uint_io32_t		u1PPE27:1;
    uint_io32_t		u1PPE28:1;
    uint_io32_t		u1PPE29:1;
    uint_io32_t		u1PPE30:1;
    uint_io32_t		u1PPE31:1;
}stc_gpio_ppern_field_t;

typedef union un_gpio_ppern{
    uint_io32_t		u32Register;
    stc_gpio_ppern_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_ppern_t;

/* PORTEN */
#define GPIO_PORTEN	(GPIO.unPORTEN.u32Register)  /*@rg@*/
#define GPIO_PORTEN_GPORTEN	(*(volatile uint_io8_t*)0xB71C2000)  /*@bfbba@*/

typedef struct stc_gpio_porten_field{
    uint_io32_t		u1GPORTEN:1;
    uint_io32_t		:31;
}stc_gpio_porten_field_t;

typedef union un_gpio_porten{
    uint_io32_t		u32Register;
    stc_gpio_porten_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_porten_t;

/* KEYCDR */
#define GPIO_KEYCDR	(GPIO.unKEYCDR.u32Register)  /*@rg@*/

typedef union un_gpio_keycdr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_gpio_keycdr_t;


typedef struct stc_gpio{
    un_gpio_posrn_t	unPOSR0;	/* 0x00000000 */
    un_gpio_pocrn_t	unPOCR0;	/* 0x00000004 */
    un_gpio_ddsrn_t	unDDSR0;	/* 0x00000008 */
    un_gpio_ddcrn_t	unDDCR0;	/* 0x0000000C */
    un_gpio_posrn_t	unPOSR1;	/* 0x00000010 */
    un_gpio_pocrn_t	unPOCR1;	/* 0x00000014 */
    un_gpio_ddsrn_t	unDDSR1;	/* 0x00000018 */
    un_gpio_ddcrn_t	unDDCR1;	/* 0x0000001C */
    un_gpio_posrn_t	unPOSR2;	/* 0x00000020 */
    un_gpio_pocrn_t	unPOCR2;	/* 0x00000024 */
    un_gpio_ddsrn_t	unDDSR2;	/* 0x00000028 */
    un_gpio_ddcrn_t	unDDCR2;	/* 0x0000002C */
    un_gpio_posrn_t	unPOSR3;	/* 0x00000030 */
    un_gpio_pocrn_t	unPOCR3;	/* 0x00000034 */
    un_gpio_ddsrn_t	unDDSR3;	/* 0x00000038 */
    un_gpio_ddcrn_t	unDDCR3;	/* 0x0000003C */
    un_gpio_posrn_t	unPOSR4;	/* 0x00000040 */
    un_gpio_pocrn_t	unPOCR4;	/* 0x00000044 */
    un_gpio_ddsrn_t	unDDSR4;	/* 0x00000048 */
    un_gpio_ddcrn_t	unDDCR4;	/* 0x0000004C */
    un_gpio_posrn_t	unPOSR5;	/* 0x00000050 */
    un_gpio_pocrn_t	unPOCR5;	/* 0x00000054 */
    un_gpio_ddsrn_t	unDDSR5;	/* 0x00000058 */
    un_gpio_ddcrn_t	unDDCR5;	/* 0x0000005C */
    un_gpio_posrn_t	unPOSR6;	/* 0x00000060 */
    un_gpio_pocrn_t	unPOCR6;	/* 0x00000064 */
    un_gpio_ddsrn_t	unDDSR6;	/* 0x00000068 */
    un_gpio_ddcrn_t	unDDCR6;	/* 0x0000006C */
    un_gpio_posrn_t	unPOSR7;	/* 0x00000070 */
    un_gpio_pocrn_t	unPOCR7;	/* 0x00000074 */
    un_gpio_ddsrn_t	unDDSR7;	/* 0x00000078 */
    un_gpio_ddcrn_t	unDDCR7;	/* 0x0000007C */
    un_gpio_posrn_t	unPOSR8;	/* 0x00000080 */
    un_gpio_pocrn_t	unPOCR8;	/* 0x00000084 */
    un_gpio_ddsrn_t	unDDSR8;	/* 0x00000088 */
    un_gpio_ddcrn_t	unDDCR8;	/* 0x0000008C */
    un_gpio_posrn_t	unPOSR9;	/* 0x00000090 */
    un_gpio_pocrn_t	unPOCR9;	/* 0x00000094 */
    un_gpio_ddsrn_t	unDDSR9;	/* 0x00000098 */
    un_gpio_ddcrn_t	unDDCR9;	/* 0x0000009C */
    un_gpio_posrn_t	unPOSR10;	/* 0x000000A0 */
    un_gpio_pocrn_t	unPOCR10;	/* 0x000000A4 */
    un_gpio_ddsrn_t	unDDSR10;	/* 0x000000A8 */
    un_gpio_ddcrn_t	unDDCR10;	/* 0x000000AC */
    un_gpio_posrn_t	unPOSR11;	/* 0x000000B0 */
    un_gpio_pocrn_t	unPOCR11;	/* 0x000000B4 */
    un_gpio_ddsrn_t	unDDSR11;	/* 0x000000B8 */
    un_gpio_ddcrn_t	unDDCR11;	/* 0x000000BC */
    un_gpio_posrn_t	unPOSR12;	/* 0x000000C0 */
    un_gpio_pocrn_t	unPOCR12;	/* 0x000000C4 */
    un_gpio_ddsrn_t	unDDSR12;	/* 0x000000C8 */
    un_gpio_ddcrn_t	unDDCR12;	/* 0x000000CC */
    un_gpio_posrn_t	unPOSR13;	/* 0x000000D0 */
    un_gpio_pocrn_t	unPOCR13;	/* 0x000000D4 */
    un_gpio_ddsrn_t	unDDSR13;	/* 0x000000D8 */
    un_gpio_ddcrn_t	unDDCR13;	/* 0x000000DC */
    un_gpio_posrn_t	unPOSR14;	/* 0x000000E0 */
    un_gpio_pocrn_t	unPOCR14;	/* 0x000000E4 */
    un_gpio_ddsrn_t	unDDSR14;	/* 0x000000E8 */
    un_gpio_ddcrn_t	unDDCR14;	/* 0x000000EC */
    un_gpio_posrn_t	unPOSR15;	/* 0x000000F0 */
    un_gpio_pocrn_t	unPOCR15;	/* 0x000000F4 */
    un_gpio_ddsrn_t	unDDSR15;	/* 0x000000F8 */
    un_gpio_ddcrn_t	unDDCR15;	/* 0x000000FC */
    uint_io8_t	au8Reserved0[256];	/* 0x00000100 */
    un_gpio_podrn_t	unPODR0;	/* 0x00000200 */
    un_gpio_ddrn_t	unDDR0;	/* 0x00000204 */
    un_gpio_podrn_t	unPODR1;	/* 0x00000208 */
    un_gpio_ddrn_t	unDDR1;	/* 0x0000020C */
    un_gpio_podrn_t	unPODR2;	/* 0x00000210 */
    un_gpio_ddrn_t	unDDR2;	/* 0x00000214 */
    un_gpio_podrn_t	unPODR3;	/* 0x00000218 */
    un_gpio_ddrn_t	unDDR3;	/* 0x0000021C */
    un_gpio_podrn_t	unPODR4;	/* 0x00000220 */
    un_gpio_ddrn_t	unDDR4;	/* 0x00000224 */
    un_gpio_podrn_t	unPODR5;	/* 0x00000228 */
    un_gpio_ddrn_t	unDDR5;	/* 0x0000022C */
    un_gpio_podrn_t	unPODR6;	/* 0x00000230 */
    un_gpio_ddrn_t	unDDR6;	/* 0x00000234 */
    un_gpio_podrn_t	unPODR7;	/* 0x00000238 */
    un_gpio_ddrn_t	unDDR7;	/* 0x0000023C */
    un_gpio_podrn_t	unPODR8;	/* 0x00000240 */
    un_gpio_ddrn_t	unDDR8;	/* 0x00000244 */
    un_gpio_podrn_t	unPODR9;	/* 0x00000248 */
    un_gpio_ddrn_t	unDDR9;	/* 0x0000024C */
    un_gpio_podrn_t	unPODR10;	/* 0x00000250 */
    un_gpio_ddrn_t	unDDR10;	/* 0x00000254 */
    un_gpio_podrn_t	unPODR11;	/* 0x00000258 */
    un_gpio_ddrn_t	unDDR11;	/* 0x0000025C */
    un_gpio_podrn_t	unPODR12;	/* 0x00000260 */
    un_gpio_ddrn_t	unDDR12;	/* 0x00000264 */
    un_gpio_podrn_t	unPODR13;	/* 0x00000268 */
    un_gpio_ddrn_t	unDDR13;	/* 0x0000026C */
    un_gpio_podrn_t	unPODR14;	/* 0x00000270 */
    un_gpio_ddrn_t	unDDR14;	/* 0x00000274 */
    un_gpio_podrn_t	unPODR15;	/* 0x00000278 */
    un_gpio_ddrn_t	unDDR15;	/* 0x0000027C */
    uint_io8_t	au8Reserved1[128];	/* 0x00000280 */
    un_gpio_pidrn_t	unPIDR0;	/* 0x00000300 */
    un_gpio_pidrn_t	unPIDR1;	/* 0x00000304 */
    un_gpio_pidrn_t	unPIDR2;	/* 0x00000308 */
    un_gpio_pidrn_t	unPIDR3;	/* 0x0000030C */
    un_gpio_pidrn_t	unPIDR4;	/* 0x00000310 */
    un_gpio_pidrn_t	unPIDR5;	/* 0x00000314 */
    un_gpio_pidrn_t	unPIDR6;	/* 0x00000318 */
    un_gpio_pidrn_t	unPIDR7;	/* 0x0000031C */
    un_gpio_pidrn_t	unPIDR8;	/* 0x00000320 */
    un_gpio_pidrn_t	unPIDR9;	/* 0x00000324 */
    un_gpio_pidrn_t	unPIDR10;	/* 0x00000328 */
    un_gpio_pidrn_t	unPIDR11;	/* 0x0000032C */
    un_gpio_pidrn_t	unPIDR12;	/* 0x00000330 */
    un_gpio_pidrn_t	unPIDR13;	/* 0x00000334 */
    un_gpio_pidrn_t	unPIDR14;	/* 0x00000338 */
    un_gpio_pidrn_t	unPIDR15;	/* 0x0000033C */
    uint_io8_t	au8Reserved2[64];	/* 0x00000340 */
    un_gpio_ppern_t	unPPER0;	/* 0x00000380 */
    un_gpio_ppern_t	unPPER1;	/* 0x00000384 */
    un_gpio_ppern_t	unPPER2;	/* 0x00000388 */
    un_gpio_ppern_t	unPPER3;	/* 0x0000038C */
    un_gpio_ppern_t	unPPER4;	/* 0x00000390 */
    un_gpio_ppern_t	unPPER5;	/* 0x00000394 */
    un_gpio_ppern_t	unPPER6;	/* 0x00000398 */
    un_gpio_ppern_t	unPPER7;	/* 0x0000039C */
    un_gpio_ppern_t	unPPER8;	/* 0x000003A0 */
    un_gpio_ppern_t	unPPER9;	/* 0x000003A4 */
    un_gpio_ppern_t	unPPER10;	/* 0x000003A8 */
    un_gpio_ppern_t	unPPER11;	/* 0x000003AC */
    un_gpio_ppern_t	unPPER12;	/* 0x000003B0 */
    un_gpio_ppern_t	unPPER13;	/* 0x000003B4 */
    un_gpio_ppern_t	unPPER14;	/* 0x000003B8 */
    un_gpio_ppern_t	unPPER15;	/* 0x000003BC */
    uint_io8_t	au8Reserved3[64];	/* 0x000003C0 */
    un_gpio_porten_t	unPORTEN;	/* 0x00000400 */
    un_gpio_keycdr_t	unKEYCDR;	/* 0x00000404 */
    uint_io8_t	au8Reserved4[31736];	/* 0x00000408 */
}stc_gpio_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_gpio_t	stcGPIO;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


#endif /* __S6J3200_GPIO_H */
