/* S6J3200 SERIES I/O REGISTER FILE V02L01
 *
 * Copyright (C) 2014-2015 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_PPC_H
#define __S6J3200_PPC_H

#include "s6j3200io_basetypes.h"

/* PPC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define PPC	stcPPC
#else /* __IO_DEFINE */
#define PPC	(*((volatile stc_ppc_t*)0xB4740000))
#endif /* __IO_DEFINE */

/* PCFGR[000-031/100-131/200-231/300-331/400-431/500-531/600-631/700-731/800-831/900-931/1000-1031/1100-1131/1200-1231/1300-1331/1400-1431/1500-1531] */
#define PPC_PCFGR000	(PPC.unPCFGR000.u16Register)  /*@rg@*/
#define PPC_PCFGR000_POF	(PPC.unPCFGR000.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR000_NFE	(*(volatile uint_io8_t*)0xB7200005)  /*@bfbba@*/
#define PPC_PCFGR000_ODR	(PPC.unPCFGR000.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR000_PDE	(*(volatile uint_io8_t*)0xB7200008)  /*@bfbba@*/
#define PPC_PCFGR000_PUE	(*(volatile uint_io8_t*)0xB7200009)  /*@bfbba@*/
#define PPC_PCFGR000_PIL	(PPC.unPCFGR000.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR000_PIE	(*(volatile uint_io8_t*)0xB720000C)  /*@bfbba@*/
#define PPC_PCFGR000_PID	(*(volatile uint_io8_t*)0xB720000D)  /*@bfbba@*/
#define PPC_PCFGR000_POD	(*(volatile uint_io8_t*)0xB720000E)  /*@bfbba@*/
#define PPC_PCFGR000_POE	(*(volatile uint_io8_t*)0xB720000F)  /*@bfbba@*/

#define PPC_PCFGR001	(PPC.unPCFGR001.u16Register)  /*@rg@*/
#define PPC_PCFGR001_POF	(PPC.unPCFGR001.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR001_NFE	(*(volatile uint_io8_t*)0xB7200015)  /*@bfbba@*/
#define PPC_PCFGR001_ODR	(PPC.unPCFGR001.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR001_PDE	(*(volatile uint_io8_t*)0xB7200018)  /*@bfbba@*/
#define PPC_PCFGR001_PUE	(*(volatile uint_io8_t*)0xB7200019)  /*@bfbba@*/
#define PPC_PCFGR001_PIL	(PPC.unPCFGR001.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR001_PIE	(*(volatile uint_io8_t*)0xB720001C)  /*@bfbba@*/
#define PPC_PCFGR001_PID	(*(volatile uint_io8_t*)0xB720001D)  /*@bfbba@*/
#define PPC_PCFGR001_POD	(*(volatile uint_io8_t*)0xB720001E)  /*@bfbba@*/
#define PPC_PCFGR001_POE	(*(volatile uint_io8_t*)0xB720001F)  /*@bfbba@*/

#define PPC_PCFGR002	(PPC.unPCFGR002.u16Register)  /*@rg@*/
#define PPC_PCFGR002_POF	(PPC.unPCFGR002.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR002_NFE	(*(volatile uint_io8_t*)0xB7200025)  /*@bfbba@*/
#define PPC_PCFGR002_ODR	(PPC.unPCFGR002.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR002_PDE	(*(volatile uint_io8_t*)0xB7200028)  /*@bfbba@*/
#define PPC_PCFGR002_PUE	(*(volatile uint_io8_t*)0xB7200029)  /*@bfbba@*/
#define PPC_PCFGR002_PIL	(PPC.unPCFGR002.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR002_PIE	(*(volatile uint_io8_t*)0xB720002C)  /*@bfbba@*/
#define PPC_PCFGR002_PID	(*(volatile uint_io8_t*)0xB720002D)  /*@bfbba@*/
#define PPC_PCFGR002_POD	(*(volatile uint_io8_t*)0xB720002E)  /*@bfbba@*/
#define PPC_PCFGR002_POE	(*(volatile uint_io8_t*)0xB720002F)  /*@bfbba@*/

#define PPC_PCFGR003	(PPC.unPCFGR003.u16Register)  /*@rg@*/
#define PPC_PCFGR003_POF	(PPC.unPCFGR003.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR003_NFE	(*(volatile uint_io8_t*)0xB7200035)  /*@bfbba@*/
#define PPC_PCFGR003_ODR	(PPC.unPCFGR003.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR003_PDE	(*(volatile uint_io8_t*)0xB7200038)  /*@bfbba@*/
#define PPC_PCFGR003_PUE	(*(volatile uint_io8_t*)0xB7200039)  /*@bfbba@*/
#define PPC_PCFGR003_PIL	(PPC.unPCFGR003.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR003_PIE	(*(volatile uint_io8_t*)0xB720003C)  /*@bfbba@*/
#define PPC_PCFGR003_PID	(*(volatile uint_io8_t*)0xB720003D)  /*@bfbba@*/
#define PPC_PCFGR003_POD	(*(volatile uint_io8_t*)0xB720003E)  /*@bfbba@*/
#define PPC_PCFGR003_POE	(*(volatile uint_io8_t*)0xB720003F)  /*@bfbba@*/

#define PPC_PCFGR004	(PPC.unPCFGR004.u16Register)  /*@rg@*/
#define PPC_PCFGR004_POF	(PPC.unPCFGR004.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR004_NFE	(*(volatile uint_io8_t*)0xB7200045)  /*@bfbba@*/
#define PPC_PCFGR004_ODR	(PPC.unPCFGR004.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR004_PDE	(*(volatile uint_io8_t*)0xB7200048)  /*@bfbba@*/
#define PPC_PCFGR004_PUE	(*(volatile uint_io8_t*)0xB7200049)  /*@bfbba@*/
#define PPC_PCFGR004_PIL	(PPC.unPCFGR004.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR004_PIE	(*(volatile uint_io8_t*)0xB720004C)  /*@bfbba@*/
#define PPC_PCFGR004_PID	(*(volatile uint_io8_t*)0xB720004D)  /*@bfbba@*/
#define PPC_PCFGR004_POD	(*(volatile uint_io8_t*)0xB720004E)  /*@bfbba@*/
#define PPC_PCFGR004_POE	(*(volatile uint_io8_t*)0xB720004F)  /*@bfbba@*/

#define PPC_PCFGR005	(PPC.unPCFGR005.u16Register)  /*@rg@*/
#define PPC_PCFGR005_POF	(PPC.unPCFGR005.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR005_NFE	(*(volatile uint_io8_t*)0xB7200055)  /*@bfbba@*/
#define PPC_PCFGR005_ODR	(PPC.unPCFGR005.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR005_PDE	(*(volatile uint_io8_t*)0xB7200058)  /*@bfbba@*/
#define PPC_PCFGR005_PUE	(*(volatile uint_io8_t*)0xB7200059)  /*@bfbba@*/
#define PPC_PCFGR005_PIL	(PPC.unPCFGR005.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR005_PIE	(*(volatile uint_io8_t*)0xB720005C)  /*@bfbba@*/
#define PPC_PCFGR005_PID	(*(volatile uint_io8_t*)0xB720005D)  /*@bfbba@*/
#define PPC_PCFGR005_POD	(*(volatile uint_io8_t*)0xB720005E)  /*@bfbba@*/
#define PPC_PCFGR005_POE	(*(volatile uint_io8_t*)0xB720005F)  /*@bfbba@*/

#define PPC_PCFGR006	(PPC.unPCFGR006.u16Register)  /*@rg@*/
#define PPC_PCFGR006_POF	(PPC.unPCFGR006.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR006_NFE	(*(volatile uint_io8_t*)0xB7200065)  /*@bfbba@*/
#define PPC_PCFGR006_ODR	(PPC.unPCFGR006.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR006_PDE	(*(volatile uint_io8_t*)0xB7200068)  /*@bfbba@*/
#define PPC_PCFGR006_PUE	(*(volatile uint_io8_t*)0xB7200069)  /*@bfbba@*/
#define PPC_PCFGR006_PIL	(PPC.unPCFGR006.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR006_PIE	(*(volatile uint_io8_t*)0xB720006C)  /*@bfbba@*/
#define PPC_PCFGR006_PID	(*(volatile uint_io8_t*)0xB720006D)  /*@bfbba@*/
#define PPC_PCFGR006_POD	(*(volatile uint_io8_t*)0xB720006E)  /*@bfbba@*/
#define PPC_PCFGR006_POE	(*(volatile uint_io8_t*)0xB720006F)  /*@bfbba@*/

#define PPC_PCFGR007	(PPC.unPCFGR007.u16Register)  /*@rg@*/
#define PPC_PCFGR007_POF	(PPC.unPCFGR007.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR007_NFE	(*(volatile uint_io8_t*)0xB7200075)  /*@bfbba@*/
#define PPC_PCFGR007_ODR	(PPC.unPCFGR007.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR007_PDE	(*(volatile uint_io8_t*)0xB7200078)  /*@bfbba@*/
#define PPC_PCFGR007_PUE	(*(volatile uint_io8_t*)0xB7200079)  /*@bfbba@*/
#define PPC_PCFGR007_PIL	(PPC.unPCFGR007.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR007_PIE	(*(volatile uint_io8_t*)0xB720007C)  /*@bfbba@*/
#define PPC_PCFGR007_PID	(*(volatile uint_io8_t*)0xB720007D)  /*@bfbba@*/
#define PPC_PCFGR007_POD	(*(volatile uint_io8_t*)0xB720007E)  /*@bfbba@*/
#define PPC_PCFGR007_POE	(*(volatile uint_io8_t*)0xB720007F)  /*@bfbba@*/

#define PPC_PCFGR008	(PPC.unPCFGR008.u16Register)  /*@rg@*/
#define PPC_PCFGR008_POF	(PPC.unPCFGR008.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR008_NFE	(*(volatile uint_io8_t*)0xB7200085)  /*@bfbba@*/
#define PPC_PCFGR008_ODR	(PPC.unPCFGR008.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR008_PDE	(*(volatile uint_io8_t*)0xB7200088)  /*@bfbba@*/
#define PPC_PCFGR008_PUE	(*(volatile uint_io8_t*)0xB7200089)  /*@bfbba@*/
#define PPC_PCFGR008_PIL	(PPC.unPCFGR008.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR008_PIE	(*(volatile uint_io8_t*)0xB720008C)  /*@bfbba@*/
#define PPC_PCFGR008_PID	(*(volatile uint_io8_t*)0xB720008D)  /*@bfbba@*/
#define PPC_PCFGR008_POD	(*(volatile uint_io8_t*)0xB720008E)  /*@bfbba@*/
#define PPC_PCFGR008_POE	(*(volatile uint_io8_t*)0xB720008F)  /*@bfbba@*/

#define PPC_PCFGR009	(PPC.unPCFGR009.u16Register)  /*@rg@*/
#define PPC_PCFGR009_POF	(PPC.unPCFGR009.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR009_NFE	(*(volatile uint_io8_t*)0xB7200095)  /*@bfbba@*/
#define PPC_PCFGR009_ODR	(PPC.unPCFGR009.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR009_PDE	(*(volatile uint_io8_t*)0xB7200098)  /*@bfbba@*/
#define PPC_PCFGR009_PUE	(*(volatile uint_io8_t*)0xB7200099)  /*@bfbba@*/
#define PPC_PCFGR009_PIL	(PPC.unPCFGR009.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR009_PIE	(*(volatile uint_io8_t*)0xB720009C)  /*@bfbba@*/
#define PPC_PCFGR009_PID	(*(volatile uint_io8_t*)0xB720009D)  /*@bfbba@*/
#define PPC_PCFGR009_POD	(*(volatile uint_io8_t*)0xB720009E)  /*@bfbba@*/
#define PPC_PCFGR009_POE	(*(volatile uint_io8_t*)0xB720009F)  /*@bfbba@*/

#define PPC_PCFGR010	(PPC.unPCFGR010.u16Register)  /*@rg@*/
#define PPC_PCFGR010_POF	(PPC.unPCFGR010.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR010_NFE	(*(volatile uint_io8_t*)0xB72000A5)  /*@bfbba@*/
#define PPC_PCFGR010_ODR	(PPC.unPCFGR010.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR010_PDE	(*(volatile uint_io8_t*)0xB72000A8)  /*@bfbba@*/
#define PPC_PCFGR010_PUE	(*(volatile uint_io8_t*)0xB72000A9)  /*@bfbba@*/
#define PPC_PCFGR010_PIL	(PPC.unPCFGR010.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR010_PIE	(*(volatile uint_io8_t*)0xB72000AC)  /*@bfbba@*/
#define PPC_PCFGR010_PID	(*(volatile uint_io8_t*)0xB72000AD)  /*@bfbba@*/
#define PPC_PCFGR010_POD	(*(volatile uint_io8_t*)0xB72000AE)  /*@bfbba@*/
#define PPC_PCFGR010_POE	(*(volatile uint_io8_t*)0xB72000AF)  /*@bfbba@*/

#define PPC_PCFGR011	(PPC.unPCFGR011.u16Register)  /*@rg@*/
#define PPC_PCFGR011_POF	(PPC.unPCFGR011.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR011_NFE	(*(volatile uint_io8_t*)0xB72000B5)  /*@bfbba@*/
#define PPC_PCFGR011_ODR	(PPC.unPCFGR011.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR011_PDE	(*(volatile uint_io8_t*)0xB72000B8)  /*@bfbba@*/
#define PPC_PCFGR011_PUE	(*(volatile uint_io8_t*)0xB72000B9)  /*@bfbba@*/
#define PPC_PCFGR011_PIL	(PPC.unPCFGR011.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR011_PIE	(*(volatile uint_io8_t*)0xB72000BC)  /*@bfbba@*/
#define PPC_PCFGR011_PID	(*(volatile uint_io8_t*)0xB72000BD)  /*@bfbba@*/
#define PPC_PCFGR011_POD	(*(volatile uint_io8_t*)0xB72000BE)  /*@bfbba@*/
#define PPC_PCFGR011_POE	(*(volatile uint_io8_t*)0xB72000BF)  /*@bfbba@*/

#define PPC_PCFGR012	(PPC.unPCFGR012.u16Register)  /*@rg@*/
#define PPC_PCFGR012_POF	(PPC.unPCFGR012.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR012_NFE	(*(volatile uint_io8_t*)0xB72000C5)  /*@bfbba@*/
#define PPC_PCFGR012_ODR	(PPC.unPCFGR012.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR012_PDE	(*(volatile uint_io8_t*)0xB72000C8)  /*@bfbba@*/
#define PPC_PCFGR012_PUE	(*(volatile uint_io8_t*)0xB72000C9)  /*@bfbba@*/
#define PPC_PCFGR012_PIL	(PPC.unPCFGR012.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR012_PIE	(*(volatile uint_io8_t*)0xB72000CC)  /*@bfbba@*/
#define PPC_PCFGR012_PID	(*(volatile uint_io8_t*)0xB72000CD)  /*@bfbba@*/
#define PPC_PCFGR012_POD	(*(volatile uint_io8_t*)0xB72000CE)  /*@bfbba@*/
#define PPC_PCFGR012_POE	(*(volatile uint_io8_t*)0xB72000CF)  /*@bfbba@*/

#define PPC_PCFGR013	(PPC.unPCFGR013.u16Register)  /*@rg@*/
#define PPC_PCFGR013_POF	(PPC.unPCFGR013.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR013_NFE	(*(volatile uint_io8_t*)0xB72000D5)  /*@bfbba@*/
#define PPC_PCFGR013_ODR	(PPC.unPCFGR013.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR013_PDE	(*(volatile uint_io8_t*)0xB72000D8)  /*@bfbba@*/
#define PPC_PCFGR013_PUE	(*(volatile uint_io8_t*)0xB72000D9)  /*@bfbba@*/
#define PPC_PCFGR013_PIL	(PPC.unPCFGR013.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR013_PIE	(*(volatile uint_io8_t*)0xB72000DC)  /*@bfbba@*/
#define PPC_PCFGR013_PID	(*(volatile uint_io8_t*)0xB72000DD)  /*@bfbba@*/
#define PPC_PCFGR013_POD	(*(volatile uint_io8_t*)0xB72000DE)  /*@bfbba@*/
#define PPC_PCFGR013_POE	(*(volatile uint_io8_t*)0xB72000DF)  /*@bfbba@*/

#define PPC_PCFGR014	(PPC.unPCFGR014.u16Register)  /*@rg@*/
#define PPC_PCFGR014_POF	(PPC.unPCFGR014.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR014_NFE	(*(volatile uint_io8_t*)0xB72000E5)  /*@bfbba@*/
#define PPC_PCFGR014_ODR	(PPC.unPCFGR014.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR014_PDE	(*(volatile uint_io8_t*)0xB72000E8)  /*@bfbba@*/
#define PPC_PCFGR014_PUE	(*(volatile uint_io8_t*)0xB72000E9)  /*@bfbba@*/
#define PPC_PCFGR014_PIL	(PPC.unPCFGR014.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR014_PIE	(*(volatile uint_io8_t*)0xB72000EC)  /*@bfbba@*/
#define PPC_PCFGR014_PID	(*(volatile uint_io8_t*)0xB72000ED)  /*@bfbba@*/
#define PPC_PCFGR014_POD	(*(volatile uint_io8_t*)0xB72000EE)  /*@bfbba@*/
#define PPC_PCFGR014_POE	(*(volatile uint_io8_t*)0xB72000EF)  /*@bfbba@*/

#define PPC_PCFGR015	(PPC.unPCFGR015.u16Register)  /*@rg@*/
#define PPC_PCFGR015_POF	(PPC.unPCFGR015.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR015_NFE	(*(volatile uint_io8_t*)0xB72000F5)  /*@bfbba@*/
#define PPC_PCFGR015_ODR	(PPC.unPCFGR015.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR015_PDE	(*(volatile uint_io8_t*)0xB72000F8)  /*@bfbba@*/
#define PPC_PCFGR015_PUE	(*(volatile uint_io8_t*)0xB72000F9)  /*@bfbba@*/
#define PPC_PCFGR015_PIL	(PPC.unPCFGR015.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR015_PIE	(*(volatile uint_io8_t*)0xB72000FC)  /*@bfbba@*/
#define PPC_PCFGR015_PID	(*(volatile uint_io8_t*)0xB72000FD)  /*@bfbba@*/
#define PPC_PCFGR015_POD	(*(volatile uint_io8_t*)0xB72000FE)  /*@bfbba@*/
#define PPC_PCFGR015_POE	(*(volatile uint_io8_t*)0xB72000FF)  /*@bfbba@*/

#define PPC_PCFGR016	(PPC.unPCFGR016.u16Register)  /*@rg@*/
#define PPC_PCFGR016_POF	(PPC.unPCFGR016.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR016_NFE	(*(volatile uint_io8_t*)0xB7200105)  /*@bfbba@*/
#define PPC_PCFGR016_ODR	(PPC.unPCFGR016.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR016_PDE	(*(volatile uint_io8_t*)0xB7200108)  /*@bfbba@*/
#define PPC_PCFGR016_PUE	(*(volatile uint_io8_t*)0xB7200109)  /*@bfbba@*/
#define PPC_PCFGR016_PIL	(PPC.unPCFGR016.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR016_PIE	(*(volatile uint_io8_t*)0xB720010C)  /*@bfbba@*/
#define PPC_PCFGR016_PID	(*(volatile uint_io8_t*)0xB720010D)  /*@bfbba@*/
#define PPC_PCFGR016_POD	(*(volatile uint_io8_t*)0xB720010E)  /*@bfbba@*/
#define PPC_PCFGR016_POE	(*(volatile uint_io8_t*)0xB720010F)  /*@bfbba@*/

#define PPC_PCFGR017	(PPC.unPCFGR017.u16Register)  /*@rg@*/
#define PPC_PCFGR017_POF	(PPC.unPCFGR017.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR017_NFE	(*(volatile uint_io8_t*)0xB7200115)  /*@bfbba@*/
#define PPC_PCFGR017_ODR	(PPC.unPCFGR017.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR017_PDE	(*(volatile uint_io8_t*)0xB7200118)  /*@bfbba@*/
#define PPC_PCFGR017_PUE	(*(volatile uint_io8_t*)0xB7200119)  /*@bfbba@*/
#define PPC_PCFGR017_PIL	(PPC.unPCFGR017.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR017_PIE	(*(volatile uint_io8_t*)0xB720011C)  /*@bfbba@*/
#define PPC_PCFGR017_PID	(*(volatile uint_io8_t*)0xB720011D)  /*@bfbba@*/
#define PPC_PCFGR017_POD	(*(volatile uint_io8_t*)0xB720011E)  /*@bfbba@*/
#define PPC_PCFGR017_POE	(*(volatile uint_io8_t*)0xB720011F)  /*@bfbba@*/

#define PPC_PCFGR018	(PPC.unPCFGR018.u16Register)  /*@rg@*/
#define PPC_PCFGR018_POF	(PPC.unPCFGR018.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR018_NFE	(*(volatile uint_io8_t*)0xB7200125)  /*@bfbba@*/
#define PPC_PCFGR018_ODR	(PPC.unPCFGR018.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR018_PDE	(*(volatile uint_io8_t*)0xB7200128)  /*@bfbba@*/
#define PPC_PCFGR018_PUE	(*(volatile uint_io8_t*)0xB7200129)  /*@bfbba@*/
#define PPC_PCFGR018_PIL	(PPC.unPCFGR018.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR018_PIE	(*(volatile uint_io8_t*)0xB720012C)  /*@bfbba@*/
#define PPC_PCFGR018_PID	(*(volatile uint_io8_t*)0xB720012D)  /*@bfbba@*/
#define PPC_PCFGR018_POD	(*(volatile uint_io8_t*)0xB720012E)  /*@bfbba@*/
#define PPC_PCFGR018_POE	(*(volatile uint_io8_t*)0xB720012F)  /*@bfbba@*/

#define PPC_PCFGR019	(PPC.unPCFGR019.u16Register)  /*@rg@*/
#define PPC_PCFGR019_POF	(PPC.unPCFGR019.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR019_NFE	(*(volatile uint_io8_t*)0xB7200135)  /*@bfbba@*/
#define PPC_PCFGR019_ODR	(PPC.unPCFGR019.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR019_PDE	(*(volatile uint_io8_t*)0xB7200138)  /*@bfbba@*/
#define PPC_PCFGR019_PUE	(*(volatile uint_io8_t*)0xB7200139)  /*@bfbba@*/
#define PPC_PCFGR019_PIL	(PPC.unPCFGR019.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR019_PIE	(*(volatile uint_io8_t*)0xB720013C)  /*@bfbba@*/
#define PPC_PCFGR019_PID	(*(volatile uint_io8_t*)0xB720013D)  /*@bfbba@*/
#define PPC_PCFGR019_POD	(*(volatile uint_io8_t*)0xB720013E)  /*@bfbba@*/
#define PPC_PCFGR019_POE	(*(volatile uint_io8_t*)0xB720013F)  /*@bfbba@*/

#define PPC_PCFGR020	(PPC.unPCFGR020.u16Register)  /*@rg@*/
#define PPC_PCFGR020_POF	(PPC.unPCFGR020.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR020_NFE	(*(volatile uint_io8_t*)0xB7200145)  /*@bfbba@*/
#define PPC_PCFGR020_ODR	(PPC.unPCFGR020.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR020_PDE	(*(volatile uint_io8_t*)0xB7200148)  /*@bfbba@*/
#define PPC_PCFGR020_PUE	(*(volatile uint_io8_t*)0xB7200149)  /*@bfbba@*/
#define PPC_PCFGR020_PIL	(PPC.unPCFGR020.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR020_PIE	(*(volatile uint_io8_t*)0xB720014C)  /*@bfbba@*/
#define PPC_PCFGR020_PID	(*(volatile uint_io8_t*)0xB720014D)  /*@bfbba@*/
#define PPC_PCFGR020_POD	(*(volatile uint_io8_t*)0xB720014E)  /*@bfbba@*/
#define PPC_PCFGR020_POE	(*(volatile uint_io8_t*)0xB720014F)  /*@bfbba@*/

#define PPC_PCFGR021	(PPC.unPCFGR021.u16Register)  /*@rg@*/
#define PPC_PCFGR021_POF	(PPC.unPCFGR021.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR021_NFE	(*(volatile uint_io8_t*)0xB7200155)  /*@bfbba@*/
#define PPC_PCFGR021_ODR	(PPC.unPCFGR021.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR021_PDE	(*(volatile uint_io8_t*)0xB7200158)  /*@bfbba@*/
#define PPC_PCFGR021_PUE	(*(volatile uint_io8_t*)0xB7200159)  /*@bfbba@*/
#define PPC_PCFGR021_PIL	(PPC.unPCFGR021.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR021_PIE	(*(volatile uint_io8_t*)0xB720015C)  /*@bfbba@*/
#define PPC_PCFGR021_PID	(*(volatile uint_io8_t*)0xB720015D)  /*@bfbba@*/
#define PPC_PCFGR021_POD	(*(volatile uint_io8_t*)0xB720015E)  /*@bfbba@*/
#define PPC_PCFGR021_POE	(*(volatile uint_io8_t*)0xB720015F)  /*@bfbba@*/

#define PPC_PCFGR022	(PPC.unPCFGR022.u16Register)  /*@rg@*/
#define PPC_PCFGR022_POF	(PPC.unPCFGR022.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR022_NFE	(*(volatile uint_io8_t*)0xB7200165)  /*@bfbba@*/
#define PPC_PCFGR022_ODR	(PPC.unPCFGR022.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR022_PDE	(*(volatile uint_io8_t*)0xB7200168)  /*@bfbba@*/
#define PPC_PCFGR022_PUE	(*(volatile uint_io8_t*)0xB7200169)  /*@bfbba@*/
#define PPC_PCFGR022_PIL	(PPC.unPCFGR022.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR022_PIE	(*(volatile uint_io8_t*)0xB720016C)  /*@bfbba@*/
#define PPC_PCFGR022_PID	(*(volatile uint_io8_t*)0xB720016D)  /*@bfbba@*/
#define PPC_PCFGR022_POD	(*(volatile uint_io8_t*)0xB720016E)  /*@bfbba@*/
#define PPC_PCFGR022_POE	(*(volatile uint_io8_t*)0xB720016F)  /*@bfbba@*/

#define PPC_PCFGR023	(PPC.unPCFGR023.u16Register)  /*@rg@*/
#define PPC_PCFGR023_POF	(PPC.unPCFGR023.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR023_NFE	(*(volatile uint_io8_t*)0xB7200175)  /*@bfbba@*/
#define PPC_PCFGR023_ODR	(PPC.unPCFGR023.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR023_PDE	(*(volatile uint_io8_t*)0xB7200178)  /*@bfbba@*/
#define PPC_PCFGR023_PUE	(*(volatile uint_io8_t*)0xB7200179)  /*@bfbba@*/
#define PPC_PCFGR023_PIL	(PPC.unPCFGR023.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR023_PIE	(*(volatile uint_io8_t*)0xB720017C)  /*@bfbba@*/
#define PPC_PCFGR023_PID	(*(volatile uint_io8_t*)0xB720017D)  /*@bfbba@*/
#define PPC_PCFGR023_POD	(*(volatile uint_io8_t*)0xB720017E)  /*@bfbba@*/
#define PPC_PCFGR023_POE	(*(volatile uint_io8_t*)0xB720017F)  /*@bfbba@*/

#define PPC_PCFGR024	(PPC.unPCFGR024.u16Register)  /*@rg@*/
#define PPC_PCFGR024_POF	(PPC.unPCFGR024.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR024_NFE	(*(volatile uint_io8_t*)0xB7200185)  /*@bfbba@*/
#define PPC_PCFGR024_ODR	(PPC.unPCFGR024.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR024_PDE	(*(volatile uint_io8_t*)0xB7200188)  /*@bfbba@*/
#define PPC_PCFGR024_PUE	(*(volatile uint_io8_t*)0xB7200189)  /*@bfbba@*/
#define PPC_PCFGR024_PIL	(PPC.unPCFGR024.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR024_PIE	(*(volatile uint_io8_t*)0xB720018C)  /*@bfbba@*/
#define PPC_PCFGR024_PID	(*(volatile uint_io8_t*)0xB720018D)  /*@bfbba@*/
#define PPC_PCFGR024_POD	(*(volatile uint_io8_t*)0xB720018E)  /*@bfbba@*/
#define PPC_PCFGR024_POE	(*(volatile uint_io8_t*)0xB720018F)  /*@bfbba@*/

#define PPC_PCFGR025	(PPC.unPCFGR025.u16Register)  /*@rg@*/
#define PPC_PCFGR025_POF	(PPC.unPCFGR025.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR025_NFE	(*(volatile uint_io8_t*)0xB7200195)  /*@bfbba@*/
#define PPC_PCFGR025_ODR	(PPC.unPCFGR025.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR025_PDE	(*(volatile uint_io8_t*)0xB7200198)  /*@bfbba@*/
#define PPC_PCFGR025_PUE	(*(volatile uint_io8_t*)0xB7200199)  /*@bfbba@*/
#define PPC_PCFGR025_PIL	(PPC.unPCFGR025.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR025_PIE	(*(volatile uint_io8_t*)0xB720019C)  /*@bfbba@*/
#define PPC_PCFGR025_PID	(*(volatile uint_io8_t*)0xB720019D)  /*@bfbba@*/
#define PPC_PCFGR025_POD	(*(volatile uint_io8_t*)0xB720019E)  /*@bfbba@*/
#define PPC_PCFGR025_POE	(*(volatile uint_io8_t*)0xB720019F)  /*@bfbba@*/

#define PPC_PCFGR026	(PPC.unPCFGR026.u16Register)  /*@rg@*/
#define PPC_PCFGR026_POF	(PPC.unPCFGR026.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR026_NFE	(*(volatile uint_io8_t*)0xB72001A5)  /*@bfbba@*/
#define PPC_PCFGR026_ODR	(PPC.unPCFGR026.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR026_PDE	(*(volatile uint_io8_t*)0xB72001A8)  /*@bfbba@*/
#define PPC_PCFGR026_PUE	(*(volatile uint_io8_t*)0xB72001A9)  /*@bfbba@*/
#define PPC_PCFGR026_PIL	(PPC.unPCFGR026.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR026_PIE	(*(volatile uint_io8_t*)0xB72001AC)  /*@bfbba@*/
#define PPC_PCFGR026_PID	(*(volatile uint_io8_t*)0xB72001AD)  /*@bfbba@*/
#define PPC_PCFGR026_POD	(*(volatile uint_io8_t*)0xB72001AE)  /*@bfbba@*/
#define PPC_PCFGR026_POE	(*(volatile uint_io8_t*)0xB72001AF)  /*@bfbba@*/

#define PPC_PCFGR027	(PPC.unPCFGR027.u16Register)  /*@rg@*/
#define PPC_PCFGR027_POF	(PPC.unPCFGR027.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR027_NFE	(*(volatile uint_io8_t*)0xB72001B5)  /*@bfbba@*/
#define PPC_PCFGR027_ODR	(PPC.unPCFGR027.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR027_PDE	(*(volatile uint_io8_t*)0xB72001B8)  /*@bfbba@*/
#define PPC_PCFGR027_PUE	(*(volatile uint_io8_t*)0xB72001B9)  /*@bfbba@*/
#define PPC_PCFGR027_PIL	(PPC.unPCFGR027.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR027_PIE	(*(volatile uint_io8_t*)0xB72001BC)  /*@bfbba@*/
#define PPC_PCFGR027_PID	(*(volatile uint_io8_t*)0xB72001BD)  /*@bfbba@*/
#define PPC_PCFGR027_POD	(*(volatile uint_io8_t*)0xB72001BE)  /*@bfbba@*/
#define PPC_PCFGR027_POE	(*(volatile uint_io8_t*)0xB72001BF)  /*@bfbba@*/

#define PPC_PCFGR028	(PPC.unPCFGR028.u16Register)  /*@rg@*/
#define PPC_PCFGR028_POF	(PPC.unPCFGR028.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR028_NFE	(*(volatile uint_io8_t*)0xB72001C5)  /*@bfbba@*/
#define PPC_PCFGR028_ODR	(PPC.unPCFGR028.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR028_PDE	(*(volatile uint_io8_t*)0xB72001C8)  /*@bfbba@*/
#define PPC_PCFGR028_PUE	(*(volatile uint_io8_t*)0xB72001C9)  /*@bfbba@*/
#define PPC_PCFGR028_PIL	(PPC.unPCFGR028.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR028_PIE	(*(volatile uint_io8_t*)0xB72001CC)  /*@bfbba@*/
#define PPC_PCFGR028_PID	(*(volatile uint_io8_t*)0xB72001CD)  /*@bfbba@*/
#define PPC_PCFGR028_POD	(*(volatile uint_io8_t*)0xB72001CE)  /*@bfbba@*/
#define PPC_PCFGR028_POE	(*(volatile uint_io8_t*)0xB72001CF)  /*@bfbba@*/

#define PPC_PCFGR029	(PPC.unPCFGR029.u16Register)  /*@rg@*/
#define PPC_PCFGR029_POF	(PPC.unPCFGR029.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR029_NFE	(*(volatile uint_io8_t*)0xB72001D5)  /*@bfbba@*/
#define PPC_PCFGR029_ODR	(PPC.unPCFGR029.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR029_PDE	(*(volatile uint_io8_t*)0xB72001D8)  /*@bfbba@*/
#define PPC_PCFGR029_PUE	(*(volatile uint_io8_t*)0xB72001D9)  /*@bfbba@*/
#define PPC_PCFGR029_PIL	(PPC.unPCFGR029.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR029_PIE	(*(volatile uint_io8_t*)0xB72001DC)  /*@bfbba@*/
#define PPC_PCFGR029_PID	(*(volatile uint_io8_t*)0xB72001DD)  /*@bfbba@*/
#define PPC_PCFGR029_POD	(*(volatile uint_io8_t*)0xB72001DE)  /*@bfbba@*/
#define PPC_PCFGR029_POE	(*(volatile uint_io8_t*)0xB72001DF)  /*@bfbba@*/

#define PPC_PCFGR030	(PPC.unPCFGR030.u16Register)  /*@rg@*/
#define PPC_PCFGR030_POF	(PPC.unPCFGR030.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR030_NFE	(*(volatile uint_io8_t*)0xB72001E5)  /*@bfbba@*/
#define PPC_PCFGR030_ODR	(PPC.unPCFGR030.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR030_PDE	(*(volatile uint_io8_t*)0xB72001E8)  /*@bfbba@*/
#define PPC_PCFGR030_PUE	(*(volatile uint_io8_t*)0xB72001E9)  /*@bfbba@*/
#define PPC_PCFGR030_PIL	(PPC.unPCFGR030.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR030_PIE	(*(volatile uint_io8_t*)0xB72001EC)  /*@bfbba@*/
#define PPC_PCFGR030_PID	(*(volatile uint_io8_t*)0xB72001ED)  /*@bfbba@*/
#define PPC_PCFGR030_POD	(*(volatile uint_io8_t*)0xB72001EE)  /*@bfbba@*/
#define PPC_PCFGR030_POE	(*(volatile uint_io8_t*)0xB72001EF)  /*@bfbba@*/

#define PPC_PCFGR031	(PPC.unPCFGR031.u16Register)  /*@rg@*/
#define PPC_PCFGR031_POF	(PPC.unPCFGR031.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR031_NFE	(*(volatile uint_io8_t*)0xB72001F5)  /*@bfbba@*/
#define PPC_PCFGR031_ODR	(PPC.unPCFGR031.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR031_PDE	(*(volatile uint_io8_t*)0xB72001F8)  /*@bfbba@*/
#define PPC_PCFGR031_PUE	(*(volatile uint_io8_t*)0xB72001F9)  /*@bfbba@*/
#define PPC_PCFGR031_PIL	(PPC.unPCFGR031.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR031_PIE	(*(volatile uint_io8_t*)0xB72001FC)  /*@bfbba@*/
#define PPC_PCFGR031_PID	(*(volatile uint_io8_t*)0xB72001FD)  /*@bfbba@*/
#define PPC_PCFGR031_POD	(*(volatile uint_io8_t*)0xB72001FE)  /*@bfbba@*/
#define PPC_PCFGR031_POE	(*(volatile uint_io8_t*)0xB72001FF)  /*@bfbba@*/

#define PPC_PCFGR100	(PPC.unPCFGR100.u16Register)  /*@rg@*/
#define PPC_PCFGR100_POF	(PPC.unPCFGR100.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR100_NFE	(*(volatile uint_io8_t*)0xB7200205)  /*@bfbba@*/
#define PPC_PCFGR100_ODR	(PPC.unPCFGR100.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR100_PDE	(*(volatile uint_io8_t*)0xB7200208)  /*@bfbba@*/
#define PPC_PCFGR100_PUE	(*(volatile uint_io8_t*)0xB7200209)  /*@bfbba@*/
#define PPC_PCFGR100_PIL	(PPC.unPCFGR100.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR100_PIE	(*(volatile uint_io8_t*)0xB720020C)  /*@bfbba@*/
#define PPC_PCFGR100_PID	(*(volatile uint_io8_t*)0xB720020D)  /*@bfbba@*/
#define PPC_PCFGR100_POD	(*(volatile uint_io8_t*)0xB720020E)  /*@bfbba@*/
#define PPC_PCFGR100_POE	(*(volatile uint_io8_t*)0xB720020F)  /*@bfbba@*/

#define PPC_PCFGR101	(PPC.unPCFGR101.u16Register)  /*@rg@*/
#define PPC_PCFGR101_POF	(PPC.unPCFGR101.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR101_NFE	(*(volatile uint_io8_t*)0xB7200215)  /*@bfbba@*/
#define PPC_PCFGR101_ODR	(PPC.unPCFGR101.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR101_PDE	(*(volatile uint_io8_t*)0xB7200218)  /*@bfbba@*/
#define PPC_PCFGR101_PUE	(*(volatile uint_io8_t*)0xB7200219)  /*@bfbba@*/
#define PPC_PCFGR101_PIL	(PPC.unPCFGR101.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR101_PIE	(*(volatile uint_io8_t*)0xB720021C)  /*@bfbba@*/
#define PPC_PCFGR101_PID	(*(volatile uint_io8_t*)0xB720021D)  /*@bfbba@*/
#define PPC_PCFGR101_POD	(*(volatile uint_io8_t*)0xB720021E)  /*@bfbba@*/
#define PPC_PCFGR101_POE	(*(volatile uint_io8_t*)0xB720021F)  /*@bfbba@*/

#define PPC_PCFGR102	(PPC.unPCFGR102.u16Register)  /*@rg@*/
#define PPC_PCFGR102_POF	(PPC.unPCFGR102.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR102_NFE	(*(volatile uint_io8_t*)0xB7200225)  /*@bfbba@*/
#define PPC_PCFGR102_ODR	(PPC.unPCFGR102.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR102_PDE	(*(volatile uint_io8_t*)0xB7200228)  /*@bfbba@*/
#define PPC_PCFGR102_PUE	(*(volatile uint_io8_t*)0xB7200229)  /*@bfbba@*/
#define PPC_PCFGR102_PIL	(PPC.unPCFGR102.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR102_PIE	(*(volatile uint_io8_t*)0xB720022C)  /*@bfbba@*/
#define PPC_PCFGR102_PID	(*(volatile uint_io8_t*)0xB720022D)  /*@bfbba@*/
#define PPC_PCFGR102_POD	(*(volatile uint_io8_t*)0xB720022E)  /*@bfbba@*/
#define PPC_PCFGR102_POE	(*(volatile uint_io8_t*)0xB720022F)  /*@bfbba@*/

#define PPC_PCFGR103	(PPC.unPCFGR103.u16Register)  /*@rg@*/
#define PPC_PCFGR103_POF	(PPC.unPCFGR103.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR103_NFE	(*(volatile uint_io8_t*)0xB7200235)  /*@bfbba@*/
#define PPC_PCFGR103_ODR	(PPC.unPCFGR103.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR103_PDE	(*(volatile uint_io8_t*)0xB7200238)  /*@bfbba@*/
#define PPC_PCFGR103_PUE	(*(volatile uint_io8_t*)0xB7200239)  /*@bfbba@*/
#define PPC_PCFGR103_PIL	(PPC.unPCFGR103.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR103_PIE	(*(volatile uint_io8_t*)0xB720023C)  /*@bfbba@*/
#define PPC_PCFGR103_PID	(*(volatile uint_io8_t*)0xB720023D)  /*@bfbba@*/
#define PPC_PCFGR103_POD	(*(volatile uint_io8_t*)0xB720023E)  /*@bfbba@*/
#define PPC_PCFGR103_POE	(*(volatile uint_io8_t*)0xB720023F)  /*@bfbba@*/

#define PPC_PCFGR104	(PPC.unPCFGR104.u16Register)  /*@rg@*/
#define PPC_PCFGR104_POF	(PPC.unPCFGR104.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR104_NFE	(*(volatile uint_io8_t*)0xB7200245)  /*@bfbba@*/
#define PPC_PCFGR104_ODR	(PPC.unPCFGR104.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR104_PDE	(*(volatile uint_io8_t*)0xB7200248)  /*@bfbba@*/
#define PPC_PCFGR104_PUE	(*(volatile uint_io8_t*)0xB7200249)  /*@bfbba@*/
#define PPC_PCFGR104_PIL	(PPC.unPCFGR104.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR104_PIE	(*(volatile uint_io8_t*)0xB720024C)  /*@bfbba@*/
#define PPC_PCFGR104_PID	(*(volatile uint_io8_t*)0xB720024D)  /*@bfbba@*/
#define PPC_PCFGR104_POD	(*(volatile uint_io8_t*)0xB720024E)  /*@bfbba@*/
#define PPC_PCFGR104_POE	(*(volatile uint_io8_t*)0xB720024F)  /*@bfbba@*/

#define PPC_PCFGR105	(PPC.unPCFGR105.u16Register)  /*@rg@*/
#define PPC_PCFGR105_POF	(PPC.unPCFGR105.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR105_NFE	(*(volatile uint_io8_t*)0xB7200255)  /*@bfbba@*/
#define PPC_PCFGR105_ODR	(PPC.unPCFGR105.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR105_PDE	(*(volatile uint_io8_t*)0xB7200258)  /*@bfbba@*/
#define PPC_PCFGR105_PUE	(*(volatile uint_io8_t*)0xB7200259)  /*@bfbba@*/
#define PPC_PCFGR105_PIL	(PPC.unPCFGR105.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR105_PIE	(*(volatile uint_io8_t*)0xB720025C)  /*@bfbba@*/
#define PPC_PCFGR105_PID	(*(volatile uint_io8_t*)0xB720025D)  /*@bfbba@*/
#define PPC_PCFGR105_POD	(*(volatile uint_io8_t*)0xB720025E)  /*@bfbba@*/
#define PPC_PCFGR105_POE	(*(volatile uint_io8_t*)0xB720025F)  /*@bfbba@*/

#define PPC_PCFGR106	(PPC.unPCFGR106.u16Register)  /*@rg@*/
#define PPC_PCFGR106_POF	(PPC.unPCFGR106.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR106_NFE	(*(volatile uint_io8_t*)0xB7200265)  /*@bfbba@*/
#define PPC_PCFGR106_ODR	(PPC.unPCFGR106.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR106_PDE	(*(volatile uint_io8_t*)0xB7200268)  /*@bfbba@*/
#define PPC_PCFGR106_PUE	(*(volatile uint_io8_t*)0xB7200269)  /*@bfbba@*/
#define PPC_PCFGR106_PIL	(PPC.unPCFGR106.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR106_PIE	(*(volatile uint_io8_t*)0xB720026C)  /*@bfbba@*/
#define PPC_PCFGR106_PID	(*(volatile uint_io8_t*)0xB720026D)  /*@bfbba@*/
#define PPC_PCFGR106_POD	(*(volatile uint_io8_t*)0xB720026E)  /*@bfbba@*/
#define PPC_PCFGR106_POE	(*(volatile uint_io8_t*)0xB720026F)  /*@bfbba@*/

#define PPC_PCFGR107	(PPC.unPCFGR107.u16Register)  /*@rg@*/
#define PPC_PCFGR107_POF	(PPC.unPCFGR107.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR107_NFE	(*(volatile uint_io8_t*)0xB7200275)  /*@bfbba@*/
#define PPC_PCFGR107_ODR	(PPC.unPCFGR107.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR107_PDE	(*(volatile uint_io8_t*)0xB7200278)  /*@bfbba@*/
#define PPC_PCFGR107_PUE	(*(volatile uint_io8_t*)0xB7200279)  /*@bfbba@*/
#define PPC_PCFGR107_PIL	(PPC.unPCFGR107.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR107_PIE	(*(volatile uint_io8_t*)0xB720027C)  /*@bfbba@*/
#define PPC_PCFGR107_PID	(*(volatile uint_io8_t*)0xB720027D)  /*@bfbba@*/
#define PPC_PCFGR107_POD	(*(volatile uint_io8_t*)0xB720027E)  /*@bfbba@*/
#define PPC_PCFGR107_POE	(*(volatile uint_io8_t*)0xB720027F)  /*@bfbba@*/

#define PPC_PCFGR108	(PPC.unPCFGR108.u16Register)  /*@rg@*/
#define PPC_PCFGR108_POF	(PPC.unPCFGR108.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR108_NFE	(*(volatile uint_io8_t*)0xB7200285)  /*@bfbba@*/
#define PPC_PCFGR108_ODR	(PPC.unPCFGR108.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR108_PDE	(*(volatile uint_io8_t*)0xB7200288)  /*@bfbba@*/
#define PPC_PCFGR108_PUE	(*(volatile uint_io8_t*)0xB7200289)  /*@bfbba@*/
#define PPC_PCFGR108_PIL	(PPC.unPCFGR108.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR108_PIE	(*(volatile uint_io8_t*)0xB720028C)  /*@bfbba@*/
#define PPC_PCFGR108_PID	(*(volatile uint_io8_t*)0xB720028D)  /*@bfbba@*/
#define PPC_PCFGR108_POD	(*(volatile uint_io8_t*)0xB720028E)  /*@bfbba@*/
#define PPC_PCFGR108_POE	(*(volatile uint_io8_t*)0xB720028F)  /*@bfbba@*/

#define PPC_PCFGR109	(PPC.unPCFGR109.u16Register)  /*@rg@*/
#define PPC_PCFGR109_POF	(PPC.unPCFGR109.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR109_NFE	(*(volatile uint_io8_t*)0xB7200295)  /*@bfbba@*/
#define PPC_PCFGR109_ODR	(PPC.unPCFGR109.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR109_PDE	(*(volatile uint_io8_t*)0xB7200298)  /*@bfbba@*/
#define PPC_PCFGR109_PUE	(*(volatile uint_io8_t*)0xB7200299)  /*@bfbba@*/
#define PPC_PCFGR109_PIL	(PPC.unPCFGR109.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR109_PIE	(*(volatile uint_io8_t*)0xB720029C)  /*@bfbba@*/
#define PPC_PCFGR109_PID	(*(volatile uint_io8_t*)0xB720029D)  /*@bfbba@*/
#define PPC_PCFGR109_POD	(*(volatile uint_io8_t*)0xB720029E)  /*@bfbba@*/
#define PPC_PCFGR109_POE	(*(volatile uint_io8_t*)0xB720029F)  /*@bfbba@*/

#define PPC_PCFGR110	(PPC.unPCFGR110.u16Register)  /*@rg@*/
#define PPC_PCFGR110_POF	(PPC.unPCFGR110.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR110_NFE	(*(volatile uint_io8_t*)0xB72002A5)  /*@bfbba@*/
#define PPC_PCFGR110_ODR	(PPC.unPCFGR110.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR110_PDE	(*(volatile uint_io8_t*)0xB72002A8)  /*@bfbba@*/
#define PPC_PCFGR110_PUE	(*(volatile uint_io8_t*)0xB72002A9)  /*@bfbba@*/
#define PPC_PCFGR110_PIL	(PPC.unPCFGR110.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR110_PIE	(*(volatile uint_io8_t*)0xB72002AC)  /*@bfbba@*/
#define PPC_PCFGR110_PID	(*(volatile uint_io8_t*)0xB72002AD)  /*@bfbba@*/
#define PPC_PCFGR110_POD	(*(volatile uint_io8_t*)0xB72002AE)  /*@bfbba@*/
#define PPC_PCFGR110_POE	(*(volatile uint_io8_t*)0xB72002AF)  /*@bfbba@*/

#define PPC_PCFGR111	(PPC.unPCFGR111.u16Register)  /*@rg@*/
#define PPC_PCFGR111_POF	(PPC.unPCFGR111.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR111_NFE	(*(volatile uint_io8_t*)0xB72002B5)  /*@bfbba@*/
#define PPC_PCFGR111_ODR	(PPC.unPCFGR111.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR111_PDE	(*(volatile uint_io8_t*)0xB72002B8)  /*@bfbba@*/
#define PPC_PCFGR111_PUE	(*(volatile uint_io8_t*)0xB72002B9)  /*@bfbba@*/
#define PPC_PCFGR111_PIL	(PPC.unPCFGR111.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR111_PIE	(*(volatile uint_io8_t*)0xB72002BC)  /*@bfbba@*/
#define PPC_PCFGR111_PID	(*(volatile uint_io8_t*)0xB72002BD)  /*@bfbba@*/
#define PPC_PCFGR111_POD	(*(volatile uint_io8_t*)0xB72002BE)  /*@bfbba@*/
#define PPC_PCFGR111_POE	(*(volatile uint_io8_t*)0xB72002BF)  /*@bfbba@*/

#define PPC_PCFGR112	(PPC.unPCFGR112.u16Register)  /*@rg@*/
#define PPC_PCFGR112_POF	(PPC.unPCFGR112.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR112_NFE	(*(volatile uint_io8_t*)0xB72002C5)  /*@bfbba@*/
#define PPC_PCFGR112_ODR	(PPC.unPCFGR112.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR112_PDE	(*(volatile uint_io8_t*)0xB72002C8)  /*@bfbba@*/
#define PPC_PCFGR112_PUE	(*(volatile uint_io8_t*)0xB72002C9)  /*@bfbba@*/
#define PPC_PCFGR112_PIL	(PPC.unPCFGR112.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR112_PIE	(*(volatile uint_io8_t*)0xB72002CC)  /*@bfbba@*/
#define PPC_PCFGR112_PID	(*(volatile uint_io8_t*)0xB72002CD)  /*@bfbba@*/
#define PPC_PCFGR112_POD	(*(volatile uint_io8_t*)0xB72002CE)  /*@bfbba@*/
#define PPC_PCFGR112_POE	(*(volatile uint_io8_t*)0xB72002CF)  /*@bfbba@*/

#define PPC_PCFGR113	(PPC.unPCFGR113.u16Register)  /*@rg@*/
#define PPC_PCFGR113_POF	(PPC.unPCFGR113.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR113_NFE	(*(volatile uint_io8_t*)0xB72002D5)  /*@bfbba@*/
#define PPC_PCFGR113_ODR	(PPC.unPCFGR113.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR113_PDE	(*(volatile uint_io8_t*)0xB72002D8)  /*@bfbba@*/
#define PPC_PCFGR113_PUE	(*(volatile uint_io8_t*)0xB72002D9)  /*@bfbba@*/
#define PPC_PCFGR113_PIL	(PPC.unPCFGR113.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR113_PIE	(*(volatile uint_io8_t*)0xB72002DC)  /*@bfbba@*/
#define PPC_PCFGR113_PID	(*(volatile uint_io8_t*)0xB72002DD)  /*@bfbba@*/
#define PPC_PCFGR113_POD	(*(volatile uint_io8_t*)0xB72002DE)  /*@bfbba@*/
#define PPC_PCFGR113_POE	(*(volatile uint_io8_t*)0xB72002DF)  /*@bfbba@*/

#define PPC_PCFGR114	(PPC.unPCFGR114.u16Register)  /*@rg@*/
#define PPC_PCFGR114_POF	(PPC.unPCFGR114.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR114_NFE	(*(volatile uint_io8_t*)0xB72002E5)  /*@bfbba@*/
#define PPC_PCFGR114_ODR	(PPC.unPCFGR114.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR114_PDE	(*(volatile uint_io8_t*)0xB72002E8)  /*@bfbba@*/
#define PPC_PCFGR114_PUE	(*(volatile uint_io8_t*)0xB72002E9)  /*@bfbba@*/
#define PPC_PCFGR114_PIL	(PPC.unPCFGR114.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR114_PIE	(*(volatile uint_io8_t*)0xB72002EC)  /*@bfbba@*/
#define PPC_PCFGR114_PID	(*(volatile uint_io8_t*)0xB72002ED)  /*@bfbba@*/
#define PPC_PCFGR114_POD	(*(volatile uint_io8_t*)0xB72002EE)  /*@bfbba@*/
#define PPC_PCFGR114_POE	(*(volatile uint_io8_t*)0xB72002EF)  /*@bfbba@*/

#define PPC_PCFGR115	(PPC.unPCFGR115.u16Register)  /*@rg@*/
#define PPC_PCFGR115_POF	(PPC.unPCFGR115.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR115_NFE	(*(volatile uint_io8_t*)0xB72002F5)  /*@bfbba@*/
#define PPC_PCFGR115_ODR	(PPC.unPCFGR115.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR115_PDE	(*(volatile uint_io8_t*)0xB72002F8)  /*@bfbba@*/
#define PPC_PCFGR115_PUE	(*(volatile uint_io8_t*)0xB72002F9)  /*@bfbba@*/
#define PPC_PCFGR115_PIL	(PPC.unPCFGR115.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR115_PIE	(*(volatile uint_io8_t*)0xB72002FC)  /*@bfbba@*/
#define PPC_PCFGR115_PID	(*(volatile uint_io8_t*)0xB72002FD)  /*@bfbba@*/
#define PPC_PCFGR115_POD	(*(volatile uint_io8_t*)0xB72002FE)  /*@bfbba@*/
#define PPC_PCFGR115_POE	(*(volatile uint_io8_t*)0xB72002FF)  /*@bfbba@*/

#define PPC_PCFGR116	(PPC.unPCFGR116.u16Register)  /*@rg@*/
#define PPC_PCFGR116_POF	(PPC.unPCFGR116.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR116_NFE	(*(volatile uint_io8_t*)0xB7200305)  /*@bfbba@*/
#define PPC_PCFGR116_ODR	(PPC.unPCFGR116.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR116_PDE	(*(volatile uint_io8_t*)0xB7200308)  /*@bfbba@*/
#define PPC_PCFGR116_PUE	(*(volatile uint_io8_t*)0xB7200309)  /*@bfbba@*/
#define PPC_PCFGR116_PIL	(PPC.unPCFGR116.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR116_PIE	(*(volatile uint_io8_t*)0xB720030C)  /*@bfbba@*/
#define PPC_PCFGR116_PID	(*(volatile uint_io8_t*)0xB720030D)  /*@bfbba@*/
#define PPC_PCFGR116_POD	(*(volatile uint_io8_t*)0xB720030E)  /*@bfbba@*/
#define PPC_PCFGR116_POE	(*(volatile uint_io8_t*)0xB720030F)  /*@bfbba@*/

#define PPC_PCFGR117	(PPC.unPCFGR117.u16Register)  /*@rg@*/
#define PPC_PCFGR117_POF	(PPC.unPCFGR117.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR117_NFE	(*(volatile uint_io8_t*)0xB7200315)  /*@bfbba@*/
#define PPC_PCFGR117_ODR	(PPC.unPCFGR117.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR117_PDE	(*(volatile uint_io8_t*)0xB7200318)  /*@bfbba@*/
#define PPC_PCFGR117_PUE	(*(volatile uint_io8_t*)0xB7200319)  /*@bfbba@*/
#define PPC_PCFGR117_PIL	(PPC.unPCFGR117.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR117_PIE	(*(volatile uint_io8_t*)0xB720031C)  /*@bfbba@*/
#define PPC_PCFGR117_PID	(*(volatile uint_io8_t*)0xB720031D)  /*@bfbba@*/
#define PPC_PCFGR117_POD	(*(volatile uint_io8_t*)0xB720031E)  /*@bfbba@*/
#define PPC_PCFGR117_POE	(*(volatile uint_io8_t*)0xB720031F)  /*@bfbba@*/

#define PPC_PCFGR118	(PPC.unPCFGR118.u16Register)  /*@rg@*/
#define PPC_PCFGR118_POF	(PPC.unPCFGR118.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR118_NFE	(*(volatile uint_io8_t*)0xB7200325)  /*@bfbba@*/
#define PPC_PCFGR118_ODR	(PPC.unPCFGR118.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR118_PDE	(*(volatile uint_io8_t*)0xB7200328)  /*@bfbba@*/
#define PPC_PCFGR118_PUE	(*(volatile uint_io8_t*)0xB7200329)  /*@bfbba@*/
#define PPC_PCFGR118_PIL	(PPC.unPCFGR118.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR118_PIE	(*(volatile uint_io8_t*)0xB720032C)  /*@bfbba@*/
#define PPC_PCFGR118_PID	(*(volatile uint_io8_t*)0xB720032D)  /*@bfbba@*/
#define PPC_PCFGR118_POD	(*(volatile uint_io8_t*)0xB720032E)  /*@bfbba@*/
#define PPC_PCFGR118_POE	(*(volatile uint_io8_t*)0xB720032F)  /*@bfbba@*/

#define PPC_PCFGR119	(PPC.unPCFGR119.u16Register)  /*@rg@*/
#define PPC_PCFGR119_POF	(PPC.unPCFGR119.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR119_NFE	(*(volatile uint_io8_t*)0xB7200335)  /*@bfbba@*/
#define PPC_PCFGR119_ODR	(PPC.unPCFGR119.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR119_PDE	(*(volatile uint_io8_t*)0xB7200338)  /*@bfbba@*/
#define PPC_PCFGR119_PUE	(*(volatile uint_io8_t*)0xB7200339)  /*@bfbba@*/
#define PPC_PCFGR119_PIL	(PPC.unPCFGR119.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR119_PIE	(*(volatile uint_io8_t*)0xB720033C)  /*@bfbba@*/
#define PPC_PCFGR119_PID	(*(volatile uint_io8_t*)0xB720033D)  /*@bfbba@*/
#define PPC_PCFGR119_POD	(*(volatile uint_io8_t*)0xB720033E)  /*@bfbba@*/
#define PPC_PCFGR119_POE	(*(volatile uint_io8_t*)0xB720033F)  /*@bfbba@*/

#define PPC_PCFGR120	(PPC.unPCFGR120.u16Register)  /*@rg@*/
#define PPC_PCFGR120_POF	(PPC.unPCFGR120.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR120_NFE	(*(volatile uint_io8_t*)0xB7200345)  /*@bfbba@*/
#define PPC_PCFGR120_ODR	(PPC.unPCFGR120.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR120_PDE	(*(volatile uint_io8_t*)0xB7200348)  /*@bfbba@*/
#define PPC_PCFGR120_PUE	(*(volatile uint_io8_t*)0xB7200349)  /*@bfbba@*/
#define PPC_PCFGR120_PIL	(PPC.unPCFGR120.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR120_PIE	(*(volatile uint_io8_t*)0xB720034C)  /*@bfbba@*/
#define PPC_PCFGR120_PID	(*(volatile uint_io8_t*)0xB720034D)  /*@bfbba@*/
#define PPC_PCFGR120_POD	(*(volatile uint_io8_t*)0xB720034E)  /*@bfbba@*/
#define PPC_PCFGR120_POE	(*(volatile uint_io8_t*)0xB720034F)  /*@bfbba@*/

#define PPC_PCFGR121	(PPC.unPCFGR121.u16Register)  /*@rg@*/
#define PPC_PCFGR121_POF	(PPC.unPCFGR121.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR121_NFE	(*(volatile uint_io8_t*)0xB7200355)  /*@bfbba@*/
#define PPC_PCFGR121_ODR	(PPC.unPCFGR121.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR121_PDE	(*(volatile uint_io8_t*)0xB7200358)  /*@bfbba@*/
#define PPC_PCFGR121_PUE	(*(volatile uint_io8_t*)0xB7200359)  /*@bfbba@*/
#define PPC_PCFGR121_PIL	(PPC.unPCFGR121.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR121_PIE	(*(volatile uint_io8_t*)0xB720035C)  /*@bfbba@*/
#define PPC_PCFGR121_PID	(*(volatile uint_io8_t*)0xB720035D)  /*@bfbba@*/
#define PPC_PCFGR121_POD	(*(volatile uint_io8_t*)0xB720035E)  /*@bfbba@*/
#define PPC_PCFGR121_POE	(*(volatile uint_io8_t*)0xB720035F)  /*@bfbba@*/

#define PPC_PCFGR122	(PPC.unPCFGR122.u16Register)  /*@rg@*/
#define PPC_PCFGR122_POF	(PPC.unPCFGR122.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR122_NFE	(*(volatile uint_io8_t*)0xB7200365)  /*@bfbba@*/
#define PPC_PCFGR122_ODR	(PPC.unPCFGR122.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR122_PDE	(*(volatile uint_io8_t*)0xB7200368)  /*@bfbba@*/
#define PPC_PCFGR122_PUE	(*(volatile uint_io8_t*)0xB7200369)  /*@bfbba@*/
#define PPC_PCFGR122_PIL	(PPC.unPCFGR122.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR122_PIE	(*(volatile uint_io8_t*)0xB720036C)  /*@bfbba@*/
#define PPC_PCFGR122_PID	(*(volatile uint_io8_t*)0xB720036D)  /*@bfbba@*/
#define PPC_PCFGR122_POD	(*(volatile uint_io8_t*)0xB720036E)  /*@bfbba@*/
#define PPC_PCFGR122_POE	(*(volatile uint_io8_t*)0xB720036F)  /*@bfbba@*/

#define PPC_PCFGR123	(PPC.unPCFGR123.u16Register)  /*@rg@*/
#define PPC_PCFGR123_POF	(PPC.unPCFGR123.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR123_NFE	(*(volatile uint_io8_t*)0xB7200375)  /*@bfbba@*/
#define PPC_PCFGR123_ODR	(PPC.unPCFGR123.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR123_PDE	(*(volatile uint_io8_t*)0xB7200378)  /*@bfbba@*/
#define PPC_PCFGR123_PUE	(*(volatile uint_io8_t*)0xB7200379)  /*@bfbba@*/
#define PPC_PCFGR123_PIL	(PPC.unPCFGR123.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR123_PIE	(*(volatile uint_io8_t*)0xB720037C)  /*@bfbba@*/
#define PPC_PCFGR123_PID	(*(volatile uint_io8_t*)0xB720037D)  /*@bfbba@*/
#define PPC_PCFGR123_POD	(*(volatile uint_io8_t*)0xB720037E)  /*@bfbba@*/
#define PPC_PCFGR123_POE	(*(volatile uint_io8_t*)0xB720037F)  /*@bfbba@*/

#define PPC_PCFGR124	(PPC.unPCFGR124.u16Register)  /*@rg@*/
#define PPC_PCFGR124_POF	(PPC.unPCFGR124.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR124_NFE	(*(volatile uint_io8_t*)0xB7200385)  /*@bfbba@*/
#define PPC_PCFGR124_ODR	(PPC.unPCFGR124.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR124_PDE	(*(volatile uint_io8_t*)0xB7200388)  /*@bfbba@*/
#define PPC_PCFGR124_PUE	(*(volatile uint_io8_t*)0xB7200389)  /*@bfbba@*/
#define PPC_PCFGR124_PIL	(PPC.unPCFGR124.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR124_PIE	(*(volatile uint_io8_t*)0xB720038C)  /*@bfbba@*/
#define PPC_PCFGR124_PID	(*(volatile uint_io8_t*)0xB720038D)  /*@bfbba@*/
#define PPC_PCFGR124_POD	(*(volatile uint_io8_t*)0xB720038E)  /*@bfbba@*/
#define PPC_PCFGR124_POE	(*(volatile uint_io8_t*)0xB720038F)  /*@bfbba@*/

#define PPC_PCFGR125	(PPC.unPCFGR125.u16Register)  /*@rg@*/
#define PPC_PCFGR125_POF	(PPC.unPCFGR125.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR125_NFE	(*(volatile uint_io8_t*)0xB7200395)  /*@bfbba@*/
#define PPC_PCFGR125_ODR	(PPC.unPCFGR125.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR125_PDE	(*(volatile uint_io8_t*)0xB7200398)  /*@bfbba@*/
#define PPC_PCFGR125_PUE	(*(volatile uint_io8_t*)0xB7200399)  /*@bfbba@*/
#define PPC_PCFGR125_PIL	(PPC.unPCFGR125.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR125_PIE	(*(volatile uint_io8_t*)0xB720039C)  /*@bfbba@*/
#define PPC_PCFGR125_PID	(*(volatile uint_io8_t*)0xB720039D)  /*@bfbba@*/
#define PPC_PCFGR125_POD	(*(volatile uint_io8_t*)0xB720039E)  /*@bfbba@*/
#define PPC_PCFGR125_POE	(*(volatile uint_io8_t*)0xB720039F)  /*@bfbba@*/

#define PPC_PCFGR126	(PPC.unPCFGR126.u16Register)  /*@rg@*/
#define PPC_PCFGR126_POF	(PPC.unPCFGR126.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR126_NFE	(*(volatile uint_io8_t*)0xB72003A5)  /*@bfbba@*/
#define PPC_PCFGR126_ODR	(PPC.unPCFGR126.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR126_PDE	(*(volatile uint_io8_t*)0xB72003A8)  /*@bfbba@*/
#define PPC_PCFGR126_PUE	(*(volatile uint_io8_t*)0xB72003A9)  /*@bfbba@*/
#define PPC_PCFGR126_PIL	(PPC.unPCFGR126.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR126_PIE	(*(volatile uint_io8_t*)0xB72003AC)  /*@bfbba@*/
#define PPC_PCFGR126_PID	(*(volatile uint_io8_t*)0xB72003AD)  /*@bfbba@*/
#define PPC_PCFGR126_POD	(*(volatile uint_io8_t*)0xB72003AE)  /*@bfbba@*/
#define PPC_PCFGR126_POE	(*(volatile uint_io8_t*)0xB72003AF)  /*@bfbba@*/

#define PPC_PCFGR127	(PPC.unPCFGR127.u16Register)  /*@rg@*/
#define PPC_PCFGR127_POF	(PPC.unPCFGR127.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR127_NFE	(*(volatile uint_io8_t*)0xB72003B5)  /*@bfbba@*/
#define PPC_PCFGR127_ODR	(PPC.unPCFGR127.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR127_PDE	(*(volatile uint_io8_t*)0xB72003B8)  /*@bfbba@*/
#define PPC_PCFGR127_PUE	(*(volatile uint_io8_t*)0xB72003B9)  /*@bfbba@*/
#define PPC_PCFGR127_PIL	(PPC.unPCFGR127.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR127_PIE	(*(volatile uint_io8_t*)0xB72003BC)  /*@bfbba@*/
#define PPC_PCFGR127_PID	(*(volatile uint_io8_t*)0xB72003BD)  /*@bfbba@*/
#define PPC_PCFGR127_POD	(*(volatile uint_io8_t*)0xB72003BE)  /*@bfbba@*/
#define PPC_PCFGR127_POE	(*(volatile uint_io8_t*)0xB72003BF)  /*@bfbba@*/

#define PPC_PCFGR128	(PPC.unPCFGR128.u16Register)  /*@rg@*/
#define PPC_PCFGR128_POF	(PPC.unPCFGR128.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR128_NFE	(*(volatile uint_io8_t*)0xB72003C5)  /*@bfbba@*/
#define PPC_PCFGR128_ODR	(PPC.unPCFGR128.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR128_PDE	(*(volatile uint_io8_t*)0xB72003C8)  /*@bfbba@*/
#define PPC_PCFGR128_PUE	(*(volatile uint_io8_t*)0xB72003C9)  /*@bfbba@*/
#define PPC_PCFGR128_PIL	(PPC.unPCFGR128.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR128_PIE	(*(volatile uint_io8_t*)0xB72003CC)  /*@bfbba@*/
#define PPC_PCFGR128_PID	(*(volatile uint_io8_t*)0xB72003CD)  /*@bfbba@*/
#define PPC_PCFGR128_POD	(*(volatile uint_io8_t*)0xB72003CE)  /*@bfbba@*/
#define PPC_PCFGR128_POE	(*(volatile uint_io8_t*)0xB72003CF)  /*@bfbba@*/

#define PPC_PCFGR129	(PPC.unPCFGR129.u16Register)  /*@rg@*/
#define PPC_PCFGR129_POF	(PPC.unPCFGR129.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR129_NFE	(*(volatile uint_io8_t*)0xB72003D5)  /*@bfbba@*/
#define PPC_PCFGR129_ODR	(PPC.unPCFGR129.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR129_PDE	(*(volatile uint_io8_t*)0xB72003D8)  /*@bfbba@*/
#define PPC_PCFGR129_PUE	(*(volatile uint_io8_t*)0xB72003D9)  /*@bfbba@*/
#define PPC_PCFGR129_PIL	(PPC.unPCFGR129.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR129_PIE	(*(volatile uint_io8_t*)0xB72003DC)  /*@bfbba@*/
#define PPC_PCFGR129_PID	(*(volatile uint_io8_t*)0xB72003DD)  /*@bfbba@*/
#define PPC_PCFGR129_POD	(*(volatile uint_io8_t*)0xB72003DE)  /*@bfbba@*/
#define PPC_PCFGR129_POE	(*(volatile uint_io8_t*)0xB72003DF)  /*@bfbba@*/

#define PPC_PCFGR130	(PPC.unPCFGR130.u16Register)  /*@rg@*/
#define PPC_PCFGR130_POF	(PPC.unPCFGR130.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR130_NFE	(*(volatile uint_io8_t*)0xB72003E5)  /*@bfbba@*/
#define PPC_PCFGR130_ODR	(PPC.unPCFGR130.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR130_PDE	(*(volatile uint_io8_t*)0xB72003E8)  /*@bfbba@*/
#define PPC_PCFGR130_PUE	(*(volatile uint_io8_t*)0xB72003E9)  /*@bfbba@*/
#define PPC_PCFGR130_PIL	(PPC.unPCFGR130.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR130_PIE	(*(volatile uint_io8_t*)0xB72003EC)  /*@bfbba@*/
#define PPC_PCFGR130_PID	(*(volatile uint_io8_t*)0xB72003ED)  /*@bfbba@*/
#define PPC_PCFGR130_POD	(*(volatile uint_io8_t*)0xB72003EE)  /*@bfbba@*/
#define PPC_PCFGR130_POE	(*(volatile uint_io8_t*)0xB72003EF)  /*@bfbba@*/

#define PPC_PCFGR131	(PPC.unPCFGR131.u16Register)  /*@rg@*/
#define PPC_PCFGR131_POF	(PPC.unPCFGR131.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR131_NFE	(*(volatile uint_io8_t*)0xB72003F5)  /*@bfbba@*/
#define PPC_PCFGR131_ODR	(PPC.unPCFGR131.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR131_PDE	(*(volatile uint_io8_t*)0xB72003F8)  /*@bfbba@*/
#define PPC_PCFGR131_PUE	(*(volatile uint_io8_t*)0xB72003F9)  /*@bfbba@*/
#define PPC_PCFGR131_PIL	(PPC.unPCFGR131.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR131_PIE	(*(volatile uint_io8_t*)0xB72003FC)  /*@bfbba@*/
#define PPC_PCFGR131_PID	(*(volatile uint_io8_t*)0xB72003FD)  /*@bfbba@*/
#define PPC_PCFGR131_POD	(*(volatile uint_io8_t*)0xB72003FE)  /*@bfbba@*/
#define PPC_PCFGR131_POE	(*(volatile uint_io8_t*)0xB72003FF)  /*@bfbba@*/

#define PPC_PCFGR200	(PPC.unPCFGR200.u16Register)  /*@rg@*/
#define PPC_PCFGR200_POF	(PPC.unPCFGR200.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR200_NFE	(*(volatile uint_io8_t*)0xB7200405)  /*@bfbba@*/
#define PPC_PCFGR200_ODR	(PPC.unPCFGR200.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR200_PDE	(*(volatile uint_io8_t*)0xB7200408)  /*@bfbba@*/
#define PPC_PCFGR200_PUE	(*(volatile uint_io8_t*)0xB7200409)  /*@bfbba@*/
#define PPC_PCFGR200_PIL	(PPC.unPCFGR200.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR200_PIE	(*(volatile uint_io8_t*)0xB720040C)  /*@bfbba@*/
#define PPC_PCFGR200_PID	(*(volatile uint_io8_t*)0xB720040D)  /*@bfbba@*/
#define PPC_PCFGR200_POD	(*(volatile uint_io8_t*)0xB720040E)  /*@bfbba@*/
#define PPC_PCFGR200_POE	(*(volatile uint_io8_t*)0xB720040F)  /*@bfbba@*/

#define PPC_PCFGR201	(PPC.unPCFGR201.u16Register)  /*@rg@*/
#define PPC_PCFGR201_POF	(PPC.unPCFGR201.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR201_NFE	(*(volatile uint_io8_t*)0xB7200415)  /*@bfbba@*/
#define PPC_PCFGR201_ODR	(PPC.unPCFGR201.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR201_PDE	(*(volatile uint_io8_t*)0xB7200418)  /*@bfbba@*/
#define PPC_PCFGR201_PUE	(*(volatile uint_io8_t*)0xB7200419)  /*@bfbba@*/
#define PPC_PCFGR201_PIL	(PPC.unPCFGR201.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR201_PIE	(*(volatile uint_io8_t*)0xB720041C)  /*@bfbba@*/
#define PPC_PCFGR201_PID	(*(volatile uint_io8_t*)0xB720041D)  /*@bfbba@*/
#define PPC_PCFGR201_POD	(*(volatile uint_io8_t*)0xB720041E)  /*@bfbba@*/
#define PPC_PCFGR201_POE	(*(volatile uint_io8_t*)0xB720041F)  /*@bfbba@*/

#define PPC_PCFGR202	(PPC.unPCFGR202.u16Register)  /*@rg@*/
#define PPC_PCFGR202_POF	(PPC.unPCFGR202.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR202_NFE	(*(volatile uint_io8_t*)0xB7200425)  /*@bfbba@*/
#define PPC_PCFGR202_ODR	(PPC.unPCFGR202.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR202_PDE	(*(volatile uint_io8_t*)0xB7200428)  /*@bfbba@*/
#define PPC_PCFGR202_PUE	(*(volatile uint_io8_t*)0xB7200429)  /*@bfbba@*/
#define PPC_PCFGR202_PIL	(PPC.unPCFGR202.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR202_PIE	(*(volatile uint_io8_t*)0xB720042C)  /*@bfbba@*/
#define PPC_PCFGR202_PID	(*(volatile uint_io8_t*)0xB720042D)  /*@bfbba@*/
#define PPC_PCFGR202_POD	(*(volatile uint_io8_t*)0xB720042E)  /*@bfbba@*/
#define PPC_PCFGR202_POE	(*(volatile uint_io8_t*)0xB720042F)  /*@bfbba@*/

#define PPC_PCFGR203	(PPC.unPCFGR203.u16Register)  /*@rg@*/
#define PPC_PCFGR203_POF	(PPC.unPCFGR203.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR203_NFE	(*(volatile uint_io8_t*)0xB7200435)  /*@bfbba@*/
#define PPC_PCFGR203_ODR	(PPC.unPCFGR203.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR203_PDE	(*(volatile uint_io8_t*)0xB7200438)  /*@bfbba@*/
#define PPC_PCFGR203_PUE	(*(volatile uint_io8_t*)0xB7200439)  /*@bfbba@*/
#define PPC_PCFGR203_PIL	(PPC.unPCFGR203.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR203_PIE	(*(volatile uint_io8_t*)0xB720043C)  /*@bfbba@*/
#define PPC_PCFGR203_PID	(*(volatile uint_io8_t*)0xB720043D)  /*@bfbba@*/
#define PPC_PCFGR203_POD	(*(volatile uint_io8_t*)0xB720043E)  /*@bfbba@*/
#define PPC_PCFGR203_POE	(*(volatile uint_io8_t*)0xB720043F)  /*@bfbba@*/

#define PPC_PCFGR204	(PPC.unPCFGR204.u16Register)  /*@rg@*/
#define PPC_PCFGR204_POF	(PPC.unPCFGR204.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR204_NFE	(*(volatile uint_io8_t*)0xB7200445)  /*@bfbba@*/
#define PPC_PCFGR204_ODR	(PPC.unPCFGR204.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR204_PDE	(*(volatile uint_io8_t*)0xB7200448)  /*@bfbba@*/
#define PPC_PCFGR204_PUE	(*(volatile uint_io8_t*)0xB7200449)  /*@bfbba@*/
#define PPC_PCFGR204_PIL	(PPC.unPCFGR204.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR204_PIE	(*(volatile uint_io8_t*)0xB720044C)  /*@bfbba@*/
#define PPC_PCFGR204_PID	(*(volatile uint_io8_t*)0xB720044D)  /*@bfbba@*/
#define PPC_PCFGR204_POD	(*(volatile uint_io8_t*)0xB720044E)  /*@bfbba@*/
#define PPC_PCFGR204_POE	(*(volatile uint_io8_t*)0xB720044F)  /*@bfbba@*/

#define PPC_PCFGR205	(PPC.unPCFGR205.u16Register)  /*@rg@*/
#define PPC_PCFGR205_POF	(PPC.unPCFGR205.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR205_NFE	(*(volatile uint_io8_t*)0xB7200455)  /*@bfbba@*/
#define PPC_PCFGR205_ODR	(PPC.unPCFGR205.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR205_PDE	(*(volatile uint_io8_t*)0xB7200458)  /*@bfbba@*/
#define PPC_PCFGR205_PUE	(*(volatile uint_io8_t*)0xB7200459)  /*@bfbba@*/
#define PPC_PCFGR205_PIL	(PPC.unPCFGR205.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR205_PIE	(*(volatile uint_io8_t*)0xB720045C)  /*@bfbba@*/
#define PPC_PCFGR205_PID	(*(volatile uint_io8_t*)0xB720045D)  /*@bfbba@*/
#define PPC_PCFGR205_POD	(*(volatile uint_io8_t*)0xB720045E)  /*@bfbba@*/
#define PPC_PCFGR205_POE	(*(volatile uint_io8_t*)0xB720045F)  /*@bfbba@*/

#define PPC_PCFGR206	(PPC.unPCFGR206.u16Register)  /*@rg@*/
#define PPC_PCFGR206_POF	(PPC.unPCFGR206.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR206_NFE	(*(volatile uint_io8_t*)0xB7200465)  /*@bfbba@*/
#define PPC_PCFGR206_ODR	(PPC.unPCFGR206.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR206_PDE	(*(volatile uint_io8_t*)0xB7200468)  /*@bfbba@*/
#define PPC_PCFGR206_PUE	(*(volatile uint_io8_t*)0xB7200469)  /*@bfbba@*/
#define PPC_PCFGR206_PIL	(PPC.unPCFGR206.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR206_PIE	(*(volatile uint_io8_t*)0xB720046C)  /*@bfbba@*/
#define PPC_PCFGR206_PID	(*(volatile uint_io8_t*)0xB720046D)  /*@bfbba@*/
#define PPC_PCFGR206_POD	(*(volatile uint_io8_t*)0xB720046E)  /*@bfbba@*/
#define PPC_PCFGR206_POE	(*(volatile uint_io8_t*)0xB720046F)  /*@bfbba@*/

#define PPC_PCFGR207	(PPC.unPCFGR207.u16Register)  /*@rg@*/
#define PPC_PCFGR207_POF	(PPC.unPCFGR207.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR207_NFE	(*(volatile uint_io8_t*)0xB7200475)  /*@bfbba@*/
#define PPC_PCFGR207_ODR	(PPC.unPCFGR207.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR207_PDE	(*(volatile uint_io8_t*)0xB7200478)  /*@bfbba@*/
#define PPC_PCFGR207_PUE	(*(volatile uint_io8_t*)0xB7200479)  /*@bfbba@*/
#define PPC_PCFGR207_PIL	(PPC.unPCFGR207.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR207_PIE	(*(volatile uint_io8_t*)0xB720047C)  /*@bfbba@*/
#define PPC_PCFGR207_PID	(*(volatile uint_io8_t*)0xB720047D)  /*@bfbba@*/
#define PPC_PCFGR207_POD	(*(volatile uint_io8_t*)0xB720047E)  /*@bfbba@*/
#define PPC_PCFGR207_POE	(*(volatile uint_io8_t*)0xB720047F)  /*@bfbba@*/

#define PPC_PCFGR208	(PPC.unPCFGR208.u16Register)  /*@rg@*/
#define PPC_PCFGR208_POF	(PPC.unPCFGR208.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR208_NFE	(*(volatile uint_io8_t*)0xB7200485)  /*@bfbba@*/
#define PPC_PCFGR208_ODR	(PPC.unPCFGR208.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR208_PDE	(*(volatile uint_io8_t*)0xB7200488)  /*@bfbba@*/
#define PPC_PCFGR208_PUE	(*(volatile uint_io8_t*)0xB7200489)  /*@bfbba@*/
#define PPC_PCFGR208_PIL	(PPC.unPCFGR208.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR208_PIE	(*(volatile uint_io8_t*)0xB720048C)  /*@bfbba@*/
#define PPC_PCFGR208_PID	(*(volatile uint_io8_t*)0xB720048D)  /*@bfbba@*/
#define PPC_PCFGR208_POD	(*(volatile uint_io8_t*)0xB720048E)  /*@bfbba@*/
#define PPC_PCFGR208_POE	(*(volatile uint_io8_t*)0xB720048F)  /*@bfbba@*/

#define PPC_PCFGR209	(PPC.unPCFGR209.u16Register)  /*@rg@*/
#define PPC_PCFGR209_POF	(PPC.unPCFGR209.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR209_NFE	(*(volatile uint_io8_t*)0xB7200495)  /*@bfbba@*/
#define PPC_PCFGR209_ODR	(PPC.unPCFGR209.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR209_PDE	(*(volatile uint_io8_t*)0xB7200498)  /*@bfbba@*/
#define PPC_PCFGR209_PUE	(*(volatile uint_io8_t*)0xB7200499)  /*@bfbba@*/
#define PPC_PCFGR209_PIL	(PPC.unPCFGR209.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR209_PIE	(*(volatile uint_io8_t*)0xB720049C)  /*@bfbba@*/
#define PPC_PCFGR209_PID	(*(volatile uint_io8_t*)0xB720049D)  /*@bfbba@*/
#define PPC_PCFGR209_POD	(*(volatile uint_io8_t*)0xB720049E)  /*@bfbba@*/
#define PPC_PCFGR209_POE	(*(volatile uint_io8_t*)0xB720049F)  /*@bfbba@*/

#define PPC_PCFGR210	(PPC.unPCFGR210.u16Register)  /*@rg@*/
#define PPC_PCFGR210_POF	(PPC.unPCFGR210.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR210_NFE	(*(volatile uint_io8_t*)0xB72004A5)  /*@bfbba@*/
#define PPC_PCFGR210_ODR	(PPC.unPCFGR210.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR210_PDE	(*(volatile uint_io8_t*)0xB72004A8)  /*@bfbba@*/
#define PPC_PCFGR210_PUE	(*(volatile uint_io8_t*)0xB72004A9)  /*@bfbba@*/
#define PPC_PCFGR210_PIL	(PPC.unPCFGR210.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR210_PIE	(*(volatile uint_io8_t*)0xB72004AC)  /*@bfbba@*/
#define PPC_PCFGR210_PID	(*(volatile uint_io8_t*)0xB72004AD)  /*@bfbba@*/
#define PPC_PCFGR210_POD	(*(volatile uint_io8_t*)0xB72004AE)  /*@bfbba@*/
#define PPC_PCFGR210_POE	(*(volatile uint_io8_t*)0xB72004AF)  /*@bfbba@*/

#define PPC_PCFGR211	(PPC.unPCFGR211.u16Register)  /*@rg@*/
#define PPC_PCFGR211_POF	(PPC.unPCFGR211.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR211_NFE	(*(volatile uint_io8_t*)0xB72004B5)  /*@bfbba@*/
#define PPC_PCFGR211_ODR	(PPC.unPCFGR211.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR211_PDE	(*(volatile uint_io8_t*)0xB72004B8)  /*@bfbba@*/
#define PPC_PCFGR211_PUE	(*(volatile uint_io8_t*)0xB72004B9)  /*@bfbba@*/
#define PPC_PCFGR211_PIL	(PPC.unPCFGR211.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR211_PIE	(*(volatile uint_io8_t*)0xB72004BC)  /*@bfbba@*/
#define PPC_PCFGR211_PID	(*(volatile uint_io8_t*)0xB72004BD)  /*@bfbba@*/
#define PPC_PCFGR211_POD	(*(volatile uint_io8_t*)0xB72004BE)  /*@bfbba@*/
#define PPC_PCFGR211_POE	(*(volatile uint_io8_t*)0xB72004BF)  /*@bfbba@*/

#define PPC_PCFGR212	(PPC.unPCFGR212.u16Register)  /*@rg@*/
#define PPC_PCFGR212_POF	(PPC.unPCFGR212.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR212_NFE	(*(volatile uint_io8_t*)0xB72004C5)  /*@bfbba@*/
#define PPC_PCFGR212_ODR	(PPC.unPCFGR212.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR212_PDE	(*(volatile uint_io8_t*)0xB72004C8)  /*@bfbba@*/
#define PPC_PCFGR212_PUE	(*(volatile uint_io8_t*)0xB72004C9)  /*@bfbba@*/
#define PPC_PCFGR212_PIL	(PPC.unPCFGR212.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR212_PIE	(*(volatile uint_io8_t*)0xB72004CC)  /*@bfbba@*/
#define PPC_PCFGR212_PID	(*(volatile uint_io8_t*)0xB72004CD)  /*@bfbba@*/
#define PPC_PCFGR212_POD	(*(volatile uint_io8_t*)0xB72004CE)  /*@bfbba@*/
#define PPC_PCFGR212_POE	(*(volatile uint_io8_t*)0xB72004CF)  /*@bfbba@*/

#define PPC_PCFGR213	(PPC.unPCFGR213.u16Register)  /*@rg@*/
#define PPC_PCFGR213_POF	(PPC.unPCFGR213.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR213_NFE	(*(volatile uint_io8_t*)0xB72004D5)  /*@bfbba@*/
#define PPC_PCFGR213_ODR	(PPC.unPCFGR213.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR213_PDE	(*(volatile uint_io8_t*)0xB72004D8)  /*@bfbba@*/
#define PPC_PCFGR213_PUE	(*(volatile uint_io8_t*)0xB72004D9)  /*@bfbba@*/
#define PPC_PCFGR213_PIL	(PPC.unPCFGR213.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR213_PIE	(*(volatile uint_io8_t*)0xB72004DC)  /*@bfbba@*/
#define PPC_PCFGR213_PID	(*(volatile uint_io8_t*)0xB72004DD)  /*@bfbba@*/
#define PPC_PCFGR213_POD	(*(volatile uint_io8_t*)0xB72004DE)  /*@bfbba@*/
#define PPC_PCFGR213_POE	(*(volatile uint_io8_t*)0xB72004DF)  /*@bfbba@*/

#define PPC_PCFGR214	(PPC.unPCFGR214.u16Register)  /*@rg@*/
#define PPC_PCFGR214_POF	(PPC.unPCFGR214.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR214_NFE	(*(volatile uint_io8_t*)0xB72004E5)  /*@bfbba@*/
#define PPC_PCFGR214_ODR	(PPC.unPCFGR214.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR214_PDE	(*(volatile uint_io8_t*)0xB72004E8)  /*@bfbba@*/
#define PPC_PCFGR214_PUE	(*(volatile uint_io8_t*)0xB72004E9)  /*@bfbba@*/
#define PPC_PCFGR214_PIL	(PPC.unPCFGR214.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR214_PIE	(*(volatile uint_io8_t*)0xB72004EC)  /*@bfbba@*/
#define PPC_PCFGR214_PID	(*(volatile uint_io8_t*)0xB72004ED)  /*@bfbba@*/
#define PPC_PCFGR214_POD	(*(volatile uint_io8_t*)0xB72004EE)  /*@bfbba@*/
#define PPC_PCFGR214_POE	(*(volatile uint_io8_t*)0xB72004EF)  /*@bfbba@*/

#define PPC_PCFGR215	(PPC.unPCFGR215.u16Register)  /*@rg@*/
#define PPC_PCFGR215_POF	(PPC.unPCFGR215.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR215_NFE	(*(volatile uint_io8_t*)0xB72004F5)  /*@bfbba@*/
#define PPC_PCFGR215_ODR	(PPC.unPCFGR215.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR215_PDE	(*(volatile uint_io8_t*)0xB72004F8)  /*@bfbba@*/
#define PPC_PCFGR215_PUE	(*(volatile uint_io8_t*)0xB72004F9)  /*@bfbba@*/
#define PPC_PCFGR215_PIL	(PPC.unPCFGR215.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR215_PIE	(*(volatile uint_io8_t*)0xB72004FC)  /*@bfbba@*/
#define PPC_PCFGR215_PID	(*(volatile uint_io8_t*)0xB72004FD)  /*@bfbba@*/
#define PPC_PCFGR215_POD	(*(volatile uint_io8_t*)0xB72004FE)  /*@bfbba@*/
#define PPC_PCFGR215_POE	(*(volatile uint_io8_t*)0xB72004FF)  /*@bfbba@*/

#define PPC_PCFGR216	(PPC.unPCFGR216.u16Register)  /*@rg@*/
#define PPC_PCFGR216_POF	(PPC.unPCFGR216.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR216_NFE	(*(volatile uint_io8_t*)0xB7200505)  /*@bfbba@*/
#define PPC_PCFGR216_ODR	(PPC.unPCFGR216.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR216_PDE	(*(volatile uint_io8_t*)0xB7200508)  /*@bfbba@*/
#define PPC_PCFGR216_PUE	(*(volatile uint_io8_t*)0xB7200509)  /*@bfbba@*/
#define PPC_PCFGR216_PIL	(PPC.unPCFGR216.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR216_PIE	(*(volatile uint_io8_t*)0xB720050C)  /*@bfbba@*/
#define PPC_PCFGR216_PID	(*(volatile uint_io8_t*)0xB720050D)  /*@bfbba@*/
#define PPC_PCFGR216_POD	(*(volatile uint_io8_t*)0xB720050E)  /*@bfbba@*/
#define PPC_PCFGR216_POE	(*(volatile uint_io8_t*)0xB720050F)  /*@bfbba@*/

#define PPC_PCFGR217	(PPC.unPCFGR217.u16Register)  /*@rg@*/
#define PPC_PCFGR217_POF	(PPC.unPCFGR217.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR217_NFE	(*(volatile uint_io8_t*)0xB7200515)  /*@bfbba@*/
#define PPC_PCFGR217_ODR	(PPC.unPCFGR217.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR217_PDE	(*(volatile uint_io8_t*)0xB7200518)  /*@bfbba@*/
#define PPC_PCFGR217_PUE	(*(volatile uint_io8_t*)0xB7200519)  /*@bfbba@*/
#define PPC_PCFGR217_PIL	(PPC.unPCFGR217.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR217_PIE	(*(volatile uint_io8_t*)0xB720051C)  /*@bfbba@*/
#define PPC_PCFGR217_PID	(*(volatile uint_io8_t*)0xB720051D)  /*@bfbba@*/
#define PPC_PCFGR217_POD	(*(volatile uint_io8_t*)0xB720051E)  /*@bfbba@*/
#define PPC_PCFGR217_POE	(*(volatile uint_io8_t*)0xB720051F)  /*@bfbba@*/

#define PPC_PCFGR218	(PPC.unPCFGR218.u16Register)  /*@rg@*/
#define PPC_PCFGR218_POF	(PPC.unPCFGR218.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR218_NFE	(*(volatile uint_io8_t*)0xB7200525)  /*@bfbba@*/
#define PPC_PCFGR218_ODR	(PPC.unPCFGR218.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR218_PDE	(*(volatile uint_io8_t*)0xB7200528)  /*@bfbba@*/
#define PPC_PCFGR218_PUE	(*(volatile uint_io8_t*)0xB7200529)  /*@bfbba@*/
#define PPC_PCFGR218_PIL	(PPC.unPCFGR218.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR218_PIE	(*(volatile uint_io8_t*)0xB720052C)  /*@bfbba@*/
#define PPC_PCFGR218_PID	(*(volatile uint_io8_t*)0xB720052D)  /*@bfbba@*/
#define PPC_PCFGR218_POD	(*(volatile uint_io8_t*)0xB720052E)  /*@bfbba@*/
#define PPC_PCFGR218_POE	(*(volatile uint_io8_t*)0xB720052F)  /*@bfbba@*/

#define PPC_PCFGR219	(PPC.unPCFGR219.u16Register)  /*@rg@*/
#define PPC_PCFGR219_POF	(PPC.unPCFGR219.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR219_NFE	(*(volatile uint_io8_t*)0xB7200535)  /*@bfbba@*/
#define PPC_PCFGR219_ODR	(PPC.unPCFGR219.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR219_PDE	(*(volatile uint_io8_t*)0xB7200538)  /*@bfbba@*/
#define PPC_PCFGR219_PUE	(*(volatile uint_io8_t*)0xB7200539)  /*@bfbba@*/
#define PPC_PCFGR219_PIL	(PPC.unPCFGR219.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR219_PIE	(*(volatile uint_io8_t*)0xB720053C)  /*@bfbba@*/
#define PPC_PCFGR219_PID	(*(volatile uint_io8_t*)0xB720053D)  /*@bfbba@*/
#define PPC_PCFGR219_POD	(*(volatile uint_io8_t*)0xB720053E)  /*@bfbba@*/
#define PPC_PCFGR219_POE	(*(volatile uint_io8_t*)0xB720053F)  /*@bfbba@*/

#define PPC_PCFGR220	(PPC.unPCFGR220.u16Register)  /*@rg@*/
#define PPC_PCFGR220_POF	(PPC.unPCFGR220.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR220_NFE	(*(volatile uint_io8_t*)0xB7200545)  /*@bfbba@*/
#define PPC_PCFGR220_ODR	(PPC.unPCFGR220.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR220_PDE	(*(volatile uint_io8_t*)0xB7200548)  /*@bfbba@*/
#define PPC_PCFGR220_PUE	(*(volatile uint_io8_t*)0xB7200549)  /*@bfbba@*/
#define PPC_PCFGR220_PIL	(PPC.unPCFGR220.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR220_PIE	(*(volatile uint_io8_t*)0xB720054C)  /*@bfbba@*/
#define PPC_PCFGR220_PID	(*(volatile uint_io8_t*)0xB720054D)  /*@bfbba@*/
#define PPC_PCFGR220_POD	(*(volatile uint_io8_t*)0xB720054E)  /*@bfbba@*/
#define PPC_PCFGR220_POE	(*(volatile uint_io8_t*)0xB720054F)  /*@bfbba@*/

#define PPC_PCFGR221	(PPC.unPCFGR221.u16Register)  /*@rg@*/
#define PPC_PCFGR221_POF	(PPC.unPCFGR221.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR221_NFE	(*(volatile uint_io8_t*)0xB7200555)  /*@bfbba@*/
#define PPC_PCFGR221_ODR	(PPC.unPCFGR221.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR221_PDE	(*(volatile uint_io8_t*)0xB7200558)  /*@bfbba@*/
#define PPC_PCFGR221_PUE	(*(volatile uint_io8_t*)0xB7200559)  /*@bfbba@*/
#define PPC_PCFGR221_PIL	(PPC.unPCFGR221.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR221_PIE	(*(volatile uint_io8_t*)0xB720055C)  /*@bfbba@*/
#define PPC_PCFGR221_PID	(*(volatile uint_io8_t*)0xB720055D)  /*@bfbba@*/
#define PPC_PCFGR221_POD	(*(volatile uint_io8_t*)0xB720055E)  /*@bfbba@*/
#define PPC_PCFGR221_POE	(*(volatile uint_io8_t*)0xB720055F)  /*@bfbba@*/

#define PPC_PCFGR222	(PPC.unPCFGR222.u16Register)  /*@rg@*/
#define PPC_PCFGR222_POF	(PPC.unPCFGR222.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR222_NFE	(*(volatile uint_io8_t*)0xB7200565)  /*@bfbba@*/
#define PPC_PCFGR222_ODR	(PPC.unPCFGR222.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR222_PDE	(*(volatile uint_io8_t*)0xB7200568)  /*@bfbba@*/
#define PPC_PCFGR222_PUE	(*(volatile uint_io8_t*)0xB7200569)  /*@bfbba@*/
#define PPC_PCFGR222_PIL	(PPC.unPCFGR222.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR222_PIE	(*(volatile uint_io8_t*)0xB720056C)  /*@bfbba@*/
#define PPC_PCFGR222_PID	(*(volatile uint_io8_t*)0xB720056D)  /*@bfbba@*/
#define PPC_PCFGR222_POD	(*(volatile uint_io8_t*)0xB720056E)  /*@bfbba@*/
#define PPC_PCFGR222_POE	(*(volatile uint_io8_t*)0xB720056F)  /*@bfbba@*/

#define PPC_PCFGR223	(PPC.unPCFGR223.u16Register)  /*@rg@*/
#define PPC_PCFGR223_POF	(PPC.unPCFGR223.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR223_NFE	(*(volatile uint_io8_t*)0xB7200575)  /*@bfbba@*/
#define PPC_PCFGR223_ODR	(PPC.unPCFGR223.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR223_PDE	(*(volatile uint_io8_t*)0xB7200578)  /*@bfbba@*/
#define PPC_PCFGR223_PUE	(*(volatile uint_io8_t*)0xB7200579)  /*@bfbba@*/
#define PPC_PCFGR223_PIL	(PPC.unPCFGR223.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR223_PIE	(*(volatile uint_io8_t*)0xB720057C)  /*@bfbba@*/
#define PPC_PCFGR223_PID	(*(volatile uint_io8_t*)0xB720057D)  /*@bfbba@*/
#define PPC_PCFGR223_POD	(*(volatile uint_io8_t*)0xB720057E)  /*@bfbba@*/
#define PPC_PCFGR223_POE	(*(volatile uint_io8_t*)0xB720057F)  /*@bfbba@*/

#define PPC_PCFGR224	(PPC.unPCFGR224.u16Register)  /*@rg@*/
#define PPC_PCFGR224_POF	(PPC.unPCFGR224.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR224_NFE	(*(volatile uint_io8_t*)0xB7200585)  /*@bfbba@*/
#define PPC_PCFGR224_ODR	(PPC.unPCFGR224.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR224_PDE	(*(volatile uint_io8_t*)0xB7200588)  /*@bfbba@*/
#define PPC_PCFGR224_PUE	(*(volatile uint_io8_t*)0xB7200589)  /*@bfbba@*/
#define PPC_PCFGR224_PIL	(PPC.unPCFGR224.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR224_PIE	(*(volatile uint_io8_t*)0xB720058C)  /*@bfbba@*/
#define PPC_PCFGR224_PID	(*(volatile uint_io8_t*)0xB720058D)  /*@bfbba@*/
#define PPC_PCFGR224_POD	(*(volatile uint_io8_t*)0xB720058E)  /*@bfbba@*/
#define PPC_PCFGR224_POE	(*(volatile uint_io8_t*)0xB720058F)  /*@bfbba@*/

#define PPC_PCFGR225	(PPC.unPCFGR225.u16Register)  /*@rg@*/
#define PPC_PCFGR225_POF	(PPC.unPCFGR225.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR225_NFE	(*(volatile uint_io8_t*)0xB7200595)  /*@bfbba@*/
#define PPC_PCFGR225_ODR	(PPC.unPCFGR225.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR225_PDE	(*(volatile uint_io8_t*)0xB7200598)  /*@bfbba@*/
#define PPC_PCFGR225_PUE	(*(volatile uint_io8_t*)0xB7200599)  /*@bfbba@*/
#define PPC_PCFGR225_PIL	(PPC.unPCFGR225.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR225_PIE	(*(volatile uint_io8_t*)0xB720059C)  /*@bfbba@*/
#define PPC_PCFGR225_PID	(*(volatile uint_io8_t*)0xB720059D)  /*@bfbba@*/
#define PPC_PCFGR225_POD	(*(volatile uint_io8_t*)0xB720059E)  /*@bfbba@*/
#define PPC_PCFGR225_POE	(*(volatile uint_io8_t*)0xB720059F)  /*@bfbba@*/

#define PPC_PCFGR226	(PPC.unPCFGR226.u16Register)  /*@rg@*/
#define PPC_PCFGR226_POF	(PPC.unPCFGR226.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR226_NFE	(*(volatile uint_io8_t*)0xB72005A5)  /*@bfbba@*/
#define PPC_PCFGR226_ODR	(PPC.unPCFGR226.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR226_PDE	(*(volatile uint_io8_t*)0xB72005A8)  /*@bfbba@*/
#define PPC_PCFGR226_PUE	(*(volatile uint_io8_t*)0xB72005A9)  /*@bfbba@*/
#define PPC_PCFGR226_PIL	(PPC.unPCFGR226.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR226_PIE	(*(volatile uint_io8_t*)0xB72005AC)  /*@bfbba@*/
#define PPC_PCFGR226_PID	(*(volatile uint_io8_t*)0xB72005AD)  /*@bfbba@*/
#define PPC_PCFGR226_POD	(*(volatile uint_io8_t*)0xB72005AE)  /*@bfbba@*/
#define PPC_PCFGR226_POE	(*(volatile uint_io8_t*)0xB72005AF)  /*@bfbba@*/

#define PPC_PCFGR227	(PPC.unPCFGR227.u16Register)  /*@rg@*/
#define PPC_PCFGR227_POF	(PPC.unPCFGR227.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR227_NFE	(*(volatile uint_io8_t*)0xB72005B5)  /*@bfbba@*/
#define PPC_PCFGR227_ODR	(PPC.unPCFGR227.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR227_PDE	(*(volatile uint_io8_t*)0xB72005B8)  /*@bfbba@*/
#define PPC_PCFGR227_PUE	(*(volatile uint_io8_t*)0xB72005B9)  /*@bfbba@*/
#define PPC_PCFGR227_PIL	(PPC.unPCFGR227.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR227_PIE	(*(volatile uint_io8_t*)0xB72005BC)  /*@bfbba@*/
#define PPC_PCFGR227_PID	(*(volatile uint_io8_t*)0xB72005BD)  /*@bfbba@*/
#define PPC_PCFGR227_POD	(*(volatile uint_io8_t*)0xB72005BE)  /*@bfbba@*/
#define PPC_PCFGR227_POE	(*(volatile uint_io8_t*)0xB72005BF)  /*@bfbba@*/

#define PPC_PCFGR228	(PPC.unPCFGR228.u16Register)  /*@rg@*/
#define PPC_PCFGR228_POF	(PPC.unPCFGR228.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR228_NFE	(*(volatile uint_io8_t*)0xB72005C5)  /*@bfbba@*/
#define PPC_PCFGR228_ODR	(PPC.unPCFGR228.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR228_PDE	(*(volatile uint_io8_t*)0xB72005C8)  /*@bfbba@*/
#define PPC_PCFGR228_PUE	(*(volatile uint_io8_t*)0xB72005C9)  /*@bfbba@*/
#define PPC_PCFGR228_PIL	(PPC.unPCFGR228.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR228_PIE	(*(volatile uint_io8_t*)0xB72005CC)  /*@bfbba@*/
#define PPC_PCFGR228_PID	(*(volatile uint_io8_t*)0xB72005CD)  /*@bfbba@*/
#define PPC_PCFGR228_POD	(*(volatile uint_io8_t*)0xB72005CE)  /*@bfbba@*/
#define PPC_PCFGR228_POE	(*(volatile uint_io8_t*)0xB72005CF)  /*@bfbba@*/

#define PPC_PCFGR229	(PPC.unPCFGR229.u16Register)  /*@rg@*/
#define PPC_PCFGR229_POF	(PPC.unPCFGR229.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR229_NFE	(*(volatile uint_io8_t*)0xB72005D5)  /*@bfbba@*/
#define PPC_PCFGR229_ODR	(PPC.unPCFGR229.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR229_PDE	(*(volatile uint_io8_t*)0xB72005D8)  /*@bfbba@*/
#define PPC_PCFGR229_PUE	(*(volatile uint_io8_t*)0xB72005D9)  /*@bfbba@*/
#define PPC_PCFGR229_PIL	(PPC.unPCFGR229.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR229_PIE	(*(volatile uint_io8_t*)0xB72005DC)  /*@bfbba@*/
#define PPC_PCFGR229_PID	(*(volatile uint_io8_t*)0xB72005DD)  /*@bfbba@*/
#define PPC_PCFGR229_POD	(*(volatile uint_io8_t*)0xB72005DE)  /*@bfbba@*/
#define PPC_PCFGR229_POE	(*(volatile uint_io8_t*)0xB72005DF)  /*@bfbba@*/

#define PPC_PCFGR230	(PPC.unPCFGR230.u16Register)  /*@rg@*/
#define PPC_PCFGR230_POF	(PPC.unPCFGR230.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR230_NFE	(*(volatile uint_io8_t*)0xB72005E5)  /*@bfbba@*/
#define PPC_PCFGR230_ODR	(PPC.unPCFGR230.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR230_PDE	(*(volatile uint_io8_t*)0xB72005E8)  /*@bfbba@*/
#define PPC_PCFGR230_PUE	(*(volatile uint_io8_t*)0xB72005E9)  /*@bfbba@*/
#define PPC_PCFGR230_PIL	(PPC.unPCFGR230.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR230_PIE	(*(volatile uint_io8_t*)0xB72005EC)  /*@bfbba@*/
#define PPC_PCFGR230_PID	(*(volatile uint_io8_t*)0xB72005ED)  /*@bfbba@*/
#define PPC_PCFGR230_POD	(*(volatile uint_io8_t*)0xB72005EE)  /*@bfbba@*/
#define PPC_PCFGR230_POE	(*(volatile uint_io8_t*)0xB72005EF)  /*@bfbba@*/

#define PPC_PCFGR231	(PPC.unPCFGR231.u16Register)  /*@rg@*/
#define PPC_PCFGR231_POF	(PPC.unPCFGR231.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR231_NFE	(*(volatile uint_io8_t*)0xB72005F5)  /*@bfbba@*/
#define PPC_PCFGR231_ODR	(PPC.unPCFGR231.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR231_PDE	(*(volatile uint_io8_t*)0xB72005F8)  /*@bfbba@*/
#define PPC_PCFGR231_PUE	(*(volatile uint_io8_t*)0xB72005F9)  /*@bfbba@*/
#define PPC_PCFGR231_PIL	(PPC.unPCFGR231.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR231_PIE	(*(volatile uint_io8_t*)0xB72005FC)  /*@bfbba@*/
#define PPC_PCFGR231_PID	(*(volatile uint_io8_t*)0xB72005FD)  /*@bfbba@*/
#define PPC_PCFGR231_POD	(*(volatile uint_io8_t*)0xB72005FE)  /*@bfbba@*/
#define PPC_PCFGR231_POE	(*(volatile uint_io8_t*)0xB72005FF)  /*@bfbba@*/

#define PPC_PCFGR300	(PPC.unPCFGR300.u16Register)  /*@rg@*/
#define PPC_PCFGR300_POF	(PPC.unPCFGR300.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR300_NFE	(*(volatile uint_io8_t*)0xB7200605)  /*@bfbba@*/
#define PPC_PCFGR300_ODR	(PPC.unPCFGR300.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR300_PDE	(*(volatile uint_io8_t*)0xB7200608)  /*@bfbba@*/
#define PPC_PCFGR300_PUE	(*(volatile uint_io8_t*)0xB7200609)  /*@bfbba@*/
#define PPC_PCFGR300_PIL	(PPC.unPCFGR300.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR300_PIE	(*(volatile uint_io8_t*)0xB720060C)  /*@bfbba@*/
#define PPC_PCFGR300_PID	(*(volatile uint_io8_t*)0xB720060D)  /*@bfbba@*/
#define PPC_PCFGR300_POD	(*(volatile uint_io8_t*)0xB720060E)  /*@bfbba@*/
#define PPC_PCFGR300_POE	(*(volatile uint_io8_t*)0xB720060F)  /*@bfbba@*/

#define PPC_PCFGR301	(PPC.unPCFGR301.u16Register)  /*@rg@*/
#define PPC_PCFGR301_POF	(PPC.unPCFGR301.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR301_NFE	(*(volatile uint_io8_t*)0xB7200615)  /*@bfbba@*/
#define PPC_PCFGR301_ODR	(PPC.unPCFGR301.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR301_PDE	(*(volatile uint_io8_t*)0xB7200618)  /*@bfbba@*/
#define PPC_PCFGR301_PUE	(*(volatile uint_io8_t*)0xB7200619)  /*@bfbba@*/
#define PPC_PCFGR301_PIL	(PPC.unPCFGR301.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR301_PIE	(*(volatile uint_io8_t*)0xB720061C)  /*@bfbba@*/
#define PPC_PCFGR301_PID	(*(volatile uint_io8_t*)0xB720061D)  /*@bfbba@*/
#define PPC_PCFGR301_POD	(*(volatile uint_io8_t*)0xB720061E)  /*@bfbba@*/
#define PPC_PCFGR301_POE	(*(volatile uint_io8_t*)0xB720061F)  /*@bfbba@*/

#define PPC_PCFGR302	(PPC.unPCFGR302.u16Register)  /*@rg@*/
#define PPC_PCFGR302_POF	(PPC.unPCFGR302.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR302_NFE	(*(volatile uint_io8_t*)0xB7200625)  /*@bfbba@*/
#define PPC_PCFGR302_ODR	(PPC.unPCFGR302.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR302_PDE	(*(volatile uint_io8_t*)0xB7200628)  /*@bfbba@*/
#define PPC_PCFGR302_PUE	(*(volatile uint_io8_t*)0xB7200629)  /*@bfbba@*/
#define PPC_PCFGR302_PIL	(PPC.unPCFGR302.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR302_PIE	(*(volatile uint_io8_t*)0xB720062C)  /*@bfbba@*/
#define PPC_PCFGR302_PID	(*(volatile uint_io8_t*)0xB720062D)  /*@bfbba@*/
#define PPC_PCFGR302_POD	(*(volatile uint_io8_t*)0xB720062E)  /*@bfbba@*/
#define PPC_PCFGR302_POE	(*(volatile uint_io8_t*)0xB720062F)  /*@bfbba@*/

#define PPC_PCFGR303	(PPC.unPCFGR303.u16Register)  /*@rg@*/
#define PPC_PCFGR303_POF	(PPC.unPCFGR303.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR303_NFE	(*(volatile uint_io8_t*)0xB7200635)  /*@bfbba@*/
#define PPC_PCFGR303_ODR	(PPC.unPCFGR303.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR303_PDE	(*(volatile uint_io8_t*)0xB7200638)  /*@bfbba@*/
#define PPC_PCFGR303_PUE	(*(volatile uint_io8_t*)0xB7200639)  /*@bfbba@*/
#define PPC_PCFGR303_PIL	(PPC.unPCFGR303.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR303_PIE	(*(volatile uint_io8_t*)0xB720063C)  /*@bfbba@*/
#define PPC_PCFGR303_PID	(*(volatile uint_io8_t*)0xB720063D)  /*@bfbba@*/
#define PPC_PCFGR303_POD	(*(volatile uint_io8_t*)0xB720063E)  /*@bfbba@*/
#define PPC_PCFGR303_POE	(*(volatile uint_io8_t*)0xB720063F)  /*@bfbba@*/

#define PPC_PCFGR304	(PPC.unPCFGR304.u16Register)  /*@rg@*/
#define PPC_PCFGR304_POF	(PPC.unPCFGR304.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR304_NFE	(*(volatile uint_io8_t*)0xB7200645)  /*@bfbba@*/
#define PPC_PCFGR304_ODR	(PPC.unPCFGR304.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR304_PDE	(*(volatile uint_io8_t*)0xB7200648)  /*@bfbba@*/
#define PPC_PCFGR304_PUE	(*(volatile uint_io8_t*)0xB7200649)  /*@bfbba@*/
#define PPC_PCFGR304_PIL	(PPC.unPCFGR304.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR304_PIE	(*(volatile uint_io8_t*)0xB720064C)  /*@bfbba@*/
#define PPC_PCFGR304_PID	(*(volatile uint_io8_t*)0xB720064D)  /*@bfbba@*/
#define PPC_PCFGR304_POD	(*(volatile uint_io8_t*)0xB720064E)  /*@bfbba@*/
#define PPC_PCFGR304_POE	(*(volatile uint_io8_t*)0xB720064F)  /*@bfbba@*/

#define PPC_PCFGR305	(PPC.unPCFGR305.u16Register)  /*@rg@*/
#define PPC_PCFGR305_POF	(PPC.unPCFGR305.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR305_NFE	(*(volatile uint_io8_t*)0xB7200655)  /*@bfbba@*/
#define PPC_PCFGR305_ODR	(PPC.unPCFGR305.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR305_PDE	(*(volatile uint_io8_t*)0xB7200658)  /*@bfbba@*/
#define PPC_PCFGR305_PUE	(*(volatile uint_io8_t*)0xB7200659)  /*@bfbba@*/
#define PPC_PCFGR305_PIL	(PPC.unPCFGR305.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR305_PIE	(*(volatile uint_io8_t*)0xB720065C)  /*@bfbba@*/
#define PPC_PCFGR305_PID	(*(volatile uint_io8_t*)0xB720065D)  /*@bfbba@*/
#define PPC_PCFGR305_POD	(*(volatile uint_io8_t*)0xB720065E)  /*@bfbba@*/
#define PPC_PCFGR305_POE	(*(volatile uint_io8_t*)0xB720065F)  /*@bfbba@*/

#define PPC_PCFGR306	(PPC.unPCFGR306.u16Register)  /*@rg@*/
#define PPC_PCFGR306_POF	(PPC.unPCFGR306.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR306_NFE	(*(volatile uint_io8_t*)0xB7200665)  /*@bfbba@*/
#define PPC_PCFGR306_ODR	(PPC.unPCFGR306.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR306_PDE	(*(volatile uint_io8_t*)0xB7200668)  /*@bfbba@*/
#define PPC_PCFGR306_PUE	(*(volatile uint_io8_t*)0xB7200669)  /*@bfbba@*/
#define PPC_PCFGR306_PIL	(PPC.unPCFGR306.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR306_PIE	(*(volatile uint_io8_t*)0xB720066C)  /*@bfbba@*/
#define PPC_PCFGR306_PID	(*(volatile uint_io8_t*)0xB720066D)  /*@bfbba@*/
#define PPC_PCFGR306_POD	(*(volatile uint_io8_t*)0xB720066E)  /*@bfbba@*/
#define PPC_PCFGR306_POE	(*(volatile uint_io8_t*)0xB720066F)  /*@bfbba@*/

#define PPC_PCFGR307	(PPC.unPCFGR307.u16Register)  /*@rg@*/
#define PPC_PCFGR307_POF	(PPC.unPCFGR307.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR307_NFE	(*(volatile uint_io8_t*)0xB7200675)  /*@bfbba@*/
#define PPC_PCFGR307_ODR	(PPC.unPCFGR307.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR307_PDE	(*(volatile uint_io8_t*)0xB7200678)  /*@bfbba@*/
#define PPC_PCFGR307_PUE	(*(volatile uint_io8_t*)0xB7200679)  /*@bfbba@*/
#define PPC_PCFGR307_PIL	(PPC.unPCFGR307.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR307_PIE	(*(volatile uint_io8_t*)0xB720067C)  /*@bfbba@*/
#define PPC_PCFGR307_PID	(*(volatile uint_io8_t*)0xB720067D)  /*@bfbba@*/
#define PPC_PCFGR307_POD	(*(volatile uint_io8_t*)0xB720067E)  /*@bfbba@*/
#define PPC_PCFGR307_POE	(*(volatile uint_io8_t*)0xB720067F)  /*@bfbba@*/

#define PPC_PCFGR308	(PPC.unPCFGR308.u16Register)  /*@rg@*/
#define PPC_PCFGR308_POF	(PPC.unPCFGR308.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR308_NFE	(*(volatile uint_io8_t*)0xB7200685)  /*@bfbba@*/
#define PPC_PCFGR308_ODR	(PPC.unPCFGR308.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR308_PDE	(*(volatile uint_io8_t*)0xB7200688)  /*@bfbba@*/
#define PPC_PCFGR308_PUE	(*(volatile uint_io8_t*)0xB7200689)  /*@bfbba@*/
#define PPC_PCFGR308_PIL	(PPC.unPCFGR308.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR308_PIE	(*(volatile uint_io8_t*)0xB720068C)  /*@bfbba@*/
#define PPC_PCFGR308_PID	(*(volatile uint_io8_t*)0xB720068D)  /*@bfbba@*/
#define PPC_PCFGR308_POD	(*(volatile uint_io8_t*)0xB720068E)  /*@bfbba@*/
#define PPC_PCFGR308_POE	(*(volatile uint_io8_t*)0xB720068F)  /*@bfbba@*/

#define PPC_PCFGR309	(PPC.unPCFGR309.u16Register)  /*@rg@*/
#define PPC_PCFGR309_POF	(PPC.unPCFGR309.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR309_NFE	(*(volatile uint_io8_t*)0xB7200695)  /*@bfbba@*/
#define PPC_PCFGR309_ODR	(PPC.unPCFGR309.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR309_PDE	(*(volatile uint_io8_t*)0xB7200698)  /*@bfbba@*/
#define PPC_PCFGR309_PUE	(*(volatile uint_io8_t*)0xB7200699)  /*@bfbba@*/
#define PPC_PCFGR309_PIL	(PPC.unPCFGR309.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR309_PIE	(*(volatile uint_io8_t*)0xB720069C)  /*@bfbba@*/
#define PPC_PCFGR309_PID	(*(volatile uint_io8_t*)0xB720069D)  /*@bfbba@*/
#define PPC_PCFGR309_POD	(*(volatile uint_io8_t*)0xB720069E)  /*@bfbba@*/
#define PPC_PCFGR309_POE	(*(volatile uint_io8_t*)0xB720069F)  /*@bfbba@*/

#define PPC_PCFGR310	(PPC.unPCFGR310.u16Register)  /*@rg@*/
#define PPC_PCFGR310_POF	(PPC.unPCFGR310.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR310_NFE	(*(volatile uint_io8_t*)0xB72006A5)  /*@bfbba@*/
#define PPC_PCFGR310_ODR	(PPC.unPCFGR310.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR310_PDE	(*(volatile uint_io8_t*)0xB72006A8)  /*@bfbba@*/
#define PPC_PCFGR310_PUE	(*(volatile uint_io8_t*)0xB72006A9)  /*@bfbba@*/
#define PPC_PCFGR310_PIL	(PPC.unPCFGR310.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR310_PIE	(*(volatile uint_io8_t*)0xB72006AC)  /*@bfbba@*/
#define PPC_PCFGR310_PID	(*(volatile uint_io8_t*)0xB72006AD)  /*@bfbba@*/
#define PPC_PCFGR310_POD	(*(volatile uint_io8_t*)0xB72006AE)  /*@bfbba@*/
#define PPC_PCFGR310_POE	(*(volatile uint_io8_t*)0xB72006AF)  /*@bfbba@*/

#define PPC_PCFGR311	(PPC.unPCFGR311.u16Register)  /*@rg@*/
#define PPC_PCFGR311_POF	(PPC.unPCFGR311.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR311_NFE	(*(volatile uint_io8_t*)0xB72006B5)  /*@bfbba@*/
#define PPC_PCFGR311_ODR	(PPC.unPCFGR311.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR311_PDE	(*(volatile uint_io8_t*)0xB72006B8)  /*@bfbba@*/
#define PPC_PCFGR311_PUE	(*(volatile uint_io8_t*)0xB72006B9)  /*@bfbba@*/
#define PPC_PCFGR311_PIL	(PPC.unPCFGR311.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR311_PIE	(*(volatile uint_io8_t*)0xB72006BC)  /*@bfbba@*/
#define PPC_PCFGR311_PID	(*(volatile uint_io8_t*)0xB72006BD)  /*@bfbba@*/
#define PPC_PCFGR311_POD	(*(volatile uint_io8_t*)0xB72006BE)  /*@bfbba@*/
#define PPC_PCFGR311_POE	(*(volatile uint_io8_t*)0xB72006BF)  /*@bfbba@*/

#define PPC_PCFGR312	(PPC.unPCFGR312.u16Register)  /*@rg@*/
#define PPC_PCFGR312_POF	(PPC.unPCFGR312.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR312_NFE	(*(volatile uint_io8_t*)0xB72006C5)  /*@bfbba@*/
#define PPC_PCFGR312_ODR	(PPC.unPCFGR312.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR312_PDE	(*(volatile uint_io8_t*)0xB72006C8)  /*@bfbba@*/
#define PPC_PCFGR312_PUE	(*(volatile uint_io8_t*)0xB72006C9)  /*@bfbba@*/
#define PPC_PCFGR312_PIL	(PPC.unPCFGR312.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR312_PIE	(*(volatile uint_io8_t*)0xB72006CC)  /*@bfbba@*/
#define PPC_PCFGR312_PID	(*(volatile uint_io8_t*)0xB72006CD)  /*@bfbba@*/
#define PPC_PCFGR312_POD	(*(volatile uint_io8_t*)0xB72006CE)  /*@bfbba@*/
#define PPC_PCFGR312_POE	(*(volatile uint_io8_t*)0xB72006CF)  /*@bfbba@*/

#define PPC_PCFGR313	(PPC.unPCFGR313.u16Register)  /*@rg@*/
#define PPC_PCFGR313_POF	(PPC.unPCFGR313.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR313_NFE	(*(volatile uint_io8_t*)0xB72006D5)  /*@bfbba@*/
#define PPC_PCFGR313_ODR	(PPC.unPCFGR313.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR313_PDE	(*(volatile uint_io8_t*)0xB72006D8)  /*@bfbba@*/
#define PPC_PCFGR313_PUE	(*(volatile uint_io8_t*)0xB72006D9)  /*@bfbba@*/
#define PPC_PCFGR313_PIL	(PPC.unPCFGR313.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR313_PIE	(*(volatile uint_io8_t*)0xB72006DC)  /*@bfbba@*/
#define PPC_PCFGR313_PID	(*(volatile uint_io8_t*)0xB72006DD)  /*@bfbba@*/
#define PPC_PCFGR313_POD	(*(volatile uint_io8_t*)0xB72006DE)  /*@bfbba@*/
#define PPC_PCFGR313_POE	(*(volatile uint_io8_t*)0xB72006DF)  /*@bfbba@*/

#define PPC_PCFGR314	(PPC.unPCFGR314.u16Register)  /*@rg@*/
#define PPC_PCFGR314_POF	(PPC.unPCFGR314.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR314_NFE	(*(volatile uint_io8_t*)0xB72006E5)  /*@bfbba@*/
#define PPC_PCFGR314_ODR	(PPC.unPCFGR314.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR314_PDE	(*(volatile uint_io8_t*)0xB72006E8)  /*@bfbba@*/
#define PPC_PCFGR314_PUE	(*(volatile uint_io8_t*)0xB72006E9)  /*@bfbba@*/
#define PPC_PCFGR314_PIL	(PPC.unPCFGR314.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR314_PIE	(*(volatile uint_io8_t*)0xB72006EC)  /*@bfbba@*/
#define PPC_PCFGR314_PID	(*(volatile uint_io8_t*)0xB72006ED)  /*@bfbba@*/
#define PPC_PCFGR314_POD	(*(volatile uint_io8_t*)0xB72006EE)  /*@bfbba@*/
#define PPC_PCFGR314_POE	(*(volatile uint_io8_t*)0xB72006EF)  /*@bfbba@*/

#define PPC_PCFGR315	(PPC.unPCFGR315.u16Register)  /*@rg@*/
#define PPC_PCFGR315_POF	(PPC.unPCFGR315.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR315_NFE	(*(volatile uint_io8_t*)0xB72006F5)  /*@bfbba@*/
#define PPC_PCFGR315_ODR	(PPC.unPCFGR315.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR315_PDE	(*(volatile uint_io8_t*)0xB72006F8)  /*@bfbba@*/
#define PPC_PCFGR315_PUE	(*(volatile uint_io8_t*)0xB72006F9)  /*@bfbba@*/
#define PPC_PCFGR315_PIL	(PPC.unPCFGR315.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR315_PIE	(*(volatile uint_io8_t*)0xB72006FC)  /*@bfbba@*/
#define PPC_PCFGR315_PID	(*(volatile uint_io8_t*)0xB72006FD)  /*@bfbba@*/
#define PPC_PCFGR315_POD	(*(volatile uint_io8_t*)0xB72006FE)  /*@bfbba@*/
#define PPC_PCFGR315_POE	(*(volatile uint_io8_t*)0xB72006FF)  /*@bfbba@*/

#define PPC_PCFGR316	(PPC.unPCFGR316.u16Register)  /*@rg@*/
#define PPC_PCFGR316_POF	(PPC.unPCFGR316.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR316_NFE	(*(volatile uint_io8_t*)0xB7200705)  /*@bfbba@*/
#define PPC_PCFGR316_ODR	(PPC.unPCFGR316.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR316_PDE	(*(volatile uint_io8_t*)0xB7200708)  /*@bfbba@*/
#define PPC_PCFGR316_PUE	(*(volatile uint_io8_t*)0xB7200709)  /*@bfbba@*/
#define PPC_PCFGR316_PIL	(PPC.unPCFGR316.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR316_PIE	(*(volatile uint_io8_t*)0xB720070C)  /*@bfbba@*/
#define PPC_PCFGR316_PID	(*(volatile uint_io8_t*)0xB720070D)  /*@bfbba@*/
#define PPC_PCFGR316_POD	(*(volatile uint_io8_t*)0xB720070E)  /*@bfbba@*/
#define PPC_PCFGR316_POE	(*(volatile uint_io8_t*)0xB720070F)  /*@bfbba@*/

#define PPC_PCFGR317	(PPC.unPCFGR317.u16Register)  /*@rg@*/
#define PPC_PCFGR317_POF	(PPC.unPCFGR317.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR317_NFE	(*(volatile uint_io8_t*)0xB7200715)  /*@bfbba@*/
#define PPC_PCFGR317_ODR	(PPC.unPCFGR317.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR317_PDE	(*(volatile uint_io8_t*)0xB7200718)  /*@bfbba@*/
#define PPC_PCFGR317_PUE	(*(volatile uint_io8_t*)0xB7200719)  /*@bfbba@*/
#define PPC_PCFGR317_PIL	(PPC.unPCFGR317.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR317_PIE	(*(volatile uint_io8_t*)0xB720071C)  /*@bfbba@*/
#define PPC_PCFGR317_PID	(*(volatile uint_io8_t*)0xB720071D)  /*@bfbba@*/
#define PPC_PCFGR317_POD	(*(volatile uint_io8_t*)0xB720071E)  /*@bfbba@*/
#define PPC_PCFGR317_POE	(*(volatile uint_io8_t*)0xB720071F)  /*@bfbba@*/

#define PPC_PCFGR318	(PPC.unPCFGR318.u16Register)  /*@rg@*/
#define PPC_PCFGR318_POF	(PPC.unPCFGR318.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR318_NFE	(*(volatile uint_io8_t*)0xB7200725)  /*@bfbba@*/
#define PPC_PCFGR318_ODR	(PPC.unPCFGR318.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR318_PDE	(*(volatile uint_io8_t*)0xB7200728)  /*@bfbba@*/
#define PPC_PCFGR318_PUE	(*(volatile uint_io8_t*)0xB7200729)  /*@bfbba@*/
#define PPC_PCFGR318_PIL	(PPC.unPCFGR318.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR318_PIE	(*(volatile uint_io8_t*)0xB720072C)  /*@bfbba@*/
#define PPC_PCFGR318_PID	(*(volatile uint_io8_t*)0xB720072D)  /*@bfbba@*/
#define PPC_PCFGR318_POD	(*(volatile uint_io8_t*)0xB720072E)  /*@bfbba@*/
#define PPC_PCFGR318_POE	(*(volatile uint_io8_t*)0xB720072F)  /*@bfbba@*/

#define PPC_PCFGR319	(PPC.unPCFGR319.u16Register)  /*@rg@*/
#define PPC_PCFGR319_POF	(PPC.unPCFGR319.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR319_NFE	(*(volatile uint_io8_t*)0xB7200735)  /*@bfbba@*/
#define PPC_PCFGR319_ODR	(PPC.unPCFGR319.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR319_PDE	(*(volatile uint_io8_t*)0xB7200738)  /*@bfbba@*/
#define PPC_PCFGR319_PUE	(*(volatile uint_io8_t*)0xB7200739)  /*@bfbba@*/
#define PPC_PCFGR319_PIL	(PPC.unPCFGR319.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR319_PIE	(*(volatile uint_io8_t*)0xB720073C)  /*@bfbba@*/
#define PPC_PCFGR319_PID	(*(volatile uint_io8_t*)0xB720073D)  /*@bfbba@*/
#define PPC_PCFGR319_POD	(*(volatile uint_io8_t*)0xB720073E)  /*@bfbba@*/
#define PPC_PCFGR319_POE	(*(volatile uint_io8_t*)0xB720073F)  /*@bfbba@*/

#define PPC_PCFGR320	(PPC.unPCFGR320.u16Register)  /*@rg@*/
#define PPC_PCFGR320_POF	(PPC.unPCFGR320.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR320_NFE	(*(volatile uint_io8_t*)0xB7200745)  /*@bfbba@*/
#define PPC_PCFGR320_ODR	(PPC.unPCFGR320.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR320_PDE	(*(volatile uint_io8_t*)0xB7200748)  /*@bfbba@*/
#define PPC_PCFGR320_PUE	(*(volatile uint_io8_t*)0xB7200749)  /*@bfbba@*/
#define PPC_PCFGR320_PIL	(PPC.unPCFGR320.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR320_PIE	(*(volatile uint_io8_t*)0xB720074C)  /*@bfbba@*/
#define PPC_PCFGR320_PID	(*(volatile uint_io8_t*)0xB720074D)  /*@bfbba@*/
#define PPC_PCFGR320_POD	(*(volatile uint_io8_t*)0xB720074E)  /*@bfbba@*/
#define PPC_PCFGR320_POE	(*(volatile uint_io8_t*)0xB720074F)  /*@bfbba@*/

#define PPC_PCFGR321	(PPC.unPCFGR321.u16Register)  /*@rg@*/
#define PPC_PCFGR321_POF	(PPC.unPCFGR321.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR321_NFE	(*(volatile uint_io8_t*)0xB7200755)  /*@bfbba@*/
#define PPC_PCFGR321_ODR	(PPC.unPCFGR321.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR321_PDE	(*(volatile uint_io8_t*)0xB7200758)  /*@bfbba@*/
#define PPC_PCFGR321_PUE	(*(volatile uint_io8_t*)0xB7200759)  /*@bfbba@*/
#define PPC_PCFGR321_PIL	(PPC.unPCFGR321.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR321_PIE	(*(volatile uint_io8_t*)0xB720075C)  /*@bfbba@*/
#define PPC_PCFGR321_PID	(*(volatile uint_io8_t*)0xB720075D)  /*@bfbba@*/
#define PPC_PCFGR321_POD	(*(volatile uint_io8_t*)0xB720075E)  /*@bfbba@*/
#define PPC_PCFGR321_POE	(*(volatile uint_io8_t*)0xB720075F)  /*@bfbba@*/

#define PPC_PCFGR322	(PPC.unPCFGR322.u16Register)  /*@rg@*/
#define PPC_PCFGR322_POF	(PPC.unPCFGR322.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR322_NFE	(*(volatile uint_io8_t*)0xB7200765)  /*@bfbba@*/
#define PPC_PCFGR322_ODR	(PPC.unPCFGR322.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR322_PDE	(*(volatile uint_io8_t*)0xB7200768)  /*@bfbba@*/
#define PPC_PCFGR322_PUE	(*(volatile uint_io8_t*)0xB7200769)  /*@bfbba@*/
#define PPC_PCFGR322_PIL	(PPC.unPCFGR322.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR322_PIE	(*(volatile uint_io8_t*)0xB720076C)  /*@bfbba@*/
#define PPC_PCFGR322_PID	(*(volatile uint_io8_t*)0xB720076D)  /*@bfbba@*/
#define PPC_PCFGR322_POD	(*(volatile uint_io8_t*)0xB720076E)  /*@bfbba@*/
#define PPC_PCFGR322_POE	(*(volatile uint_io8_t*)0xB720076F)  /*@bfbba@*/

#define PPC_PCFGR323	(PPC.unPCFGR323.u16Register)  /*@rg@*/
#define PPC_PCFGR323_POF	(PPC.unPCFGR323.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR323_NFE	(*(volatile uint_io8_t*)0xB7200775)  /*@bfbba@*/
#define PPC_PCFGR323_ODR	(PPC.unPCFGR323.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR323_PDE	(*(volatile uint_io8_t*)0xB7200778)  /*@bfbba@*/
#define PPC_PCFGR323_PUE	(*(volatile uint_io8_t*)0xB7200779)  /*@bfbba@*/
#define PPC_PCFGR323_PIL	(PPC.unPCFGR323.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR323_PIE	(*(volatile uint_io8_t*)0xB720077C)  /*@bfbba@*/
#define PPC_PCFGR323_PID	(*(volatile uint_io8_t*)0xB720077D)  /*@bfbba@*/
#define PPC_PCFGR323_POD	(*(volatile uint_io8_t*)0xB720077E)  /*@bfbba@*/
#define PPC_PCFGR323_POE	(*(volatile uint_io8_t*)0xB720077F)  /*@bfbba@*/

#define PPC_PCFGR324	(PPC.unPCFGR324.u16Register)  /*@rg@*/
#define PPC_PCFGR324_POF	(PPC.unPCFGR324.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR324_NFE	(*(volatile uint_io8_t*)0xB7200785)  /*@bfbba@*/
#define PPC_PCFGR324_ODR	(PPC.unPCFGR324.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR324_PDE	(*(volatile uint_io8_t*)0xB7200788)  /*@bfbba@*/
#define PPC_PCFGR324_PUE	(*(volatile uint_io8_t*)0xB7200789)  /*@bfbba@*/
#define PPC_PCFGR324_PIL	(PPC.unPCFGR324.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR324_PIE	(*(volatile uint_io8_t*)0xB720078C)  /*@bfbba@*/
#define PPC_PCFGR324_PID	(*(volatile uint_io8_t*)0xB720078D)  /*@bfbba@*/
#define PPC_PCFGR324_POD	(*(volatile uint_io8_t*)0xB720078E)  /*@bfbba@*/
#define PPC_PCFGR324_POE	(*(volatile uint_io8_t*)0xB720078F)  /*@bfbba@*/

#define PPC_PCFGR325	(PPC.unPCFGR325.u16Register)  /*@rg@*/
#define PPC_PCFGR325_POF	(PPC.unPCFGR325.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR325_NFE	(*(volatile uint_io8_t*)0xB7200795)  /*@bfbba@*/
#define PPC_PCFGR325_ODR	(PPC.unPCFGR325.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR325_PDE	(*(volatile uint_io8_t*)0xB7200798)  /*@bfbba@*/
#define PPC_PCFGR325_PUE	(*(volatile uint_io8_t*)0xB7200799)  /*@bfbba@*/
#define PPC_PCFGR325_PIL	(PPC.unPCFGR325.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR325_PIE	(*(volatile uint_io8_t*)0xB720079C)  /*@bfbba@*/
#define PPC_PCFGR325_PID	(*(volatile uint_io8_t*)0xB720079D)  /*@bfbba@*/
#define PPC_PCFGR325_POD	(*(volatile uint_io8_t*)0xB720079E)  /*@bfbba@*/
#define PPC_PCFGR325_POE	(*(volatile uint_io8_t*)0xB720079F)  /*@bfbba@*/

#define PPC_PCFGR326	(PPC.unPCFGR326.u16Register)  /*@rg@*/
#define PPC_PCFGR326_POF	(PPC.unPCFGR326.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR326_NFE	(*(volatile uint_io8_t*)0xB72007A5)  /*@bfbba@*/
#define PPC_PCFGR326_ODR	(PPC.unPCFGR326.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR326_PDE	(*(volatile uint_io8_t*)0xB72007A8)  /*@bfbba@*/
#define PPC_PCFGR326_PUE	(*(volatile uint_io8_t*)0xB72007A9)  /*@bfbba@*/
#define PPC_PCFGR326_PIL	(PPC.unPCFGR326.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR326_PIE	(*(volatile uint_io8_t*)0xB72007AC)  /*@bfbba@*/
#define PPC_PCFGR326_PID	(*(volatile uint_io8_t*)0xB72007AD)  /*@bfbba@*/
#define PPC_PCFGR326_POD	(*(volatile uint_io8_t*)0xB72007AE)  /*@bfbba@*/
#define PPC_PCFGR326_POE	(*(volatile uint_io8_t*)0xB72007AF)  /*@bfbba@*/

#define PPC_PCFGR327	(PPC.unPCFGR327.u16Register)  /*@rg@*/
#define PPC_PCFGR327_POF	(PPC.unPCFGR327.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR327_NFE	(*(volatile uint_io8_t*)0xB72007B5)  /*@bfbba@*/
#define PPC_PCFGR327_ODR	(PPC.unPCFGR327.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR327_PDE	(*(volatile uint_io8_t*)0xB72007B8)  /*@bfbba@*/
#define PPC_PCFGR327_PUE	(*(volatile uint_io8_t*)0xB72007B9)  /*@bfbba@*/
#define PPC_PCFGR327_PIL	(PPC.unPCFGR327.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR327_PIE	(*(volatile uint_io8_t*)0xB72007BC)  /*@bfbba@*/
#define PPC_PCFGR327_PID	(*(volatile uint_io8_t*)0xB72007BD)  /*@bfbba@*/
#define PPC_PCFGR327_POD	(*(volatile uint_io8_t*)0xB72007BE)  /*@bfbba@*/
#define PPC_PCFGR327_POE	(*(volatile uint_io8_t*)0xB72007BF)  /*@bfbba@*/

#define PPC_PCFGR328	(PPC.unPCFGR328.u16Register)  /*@rg@*/
#define PPC_PCFGR328_POF	(PPC.unPCFGR328.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR328_NFE	(*(volatile uint_io8_t*)0xB72007C5)  /*@bfbba@*/
#define PPC_PCFGR328_ODR	(PPC.unPCFGR328.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR328_PDE	(*(volatile uint_io8_t*)0xB72007C8)  /*@bfbba@*/
#define PPC_PCFGR328_PUE	(*(volatile uint_io8_t*)0xB72007C9)  /*@bfbba@*/
#define PPC_PCFGR328_PIL	(PPC.unPCFGR328.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR328_PIE	(*(volatile uint_io8_t*)0xB72007CC)  /*@bfbba@*/
#define PPC_PCFGR328_PID	(*(volatile uint_io8_t*)0xB72007CD)  /*@bfbba@*/
#define PPC_PCFGR328_POD	(*(volatile uint_io8_t*)0xB72007CE)  /*@bfbba@*/
#define PPC_PCFGR328_POE	(*(volatile uint_io8_t*)0xB72007CF)  /*@bfbba@*/

#define PPC_PCFGR329	(PPC.unPCFGR329.u16Register)  /*@rg@*/
#define PPC_PCFGR329_POF	(PPC.unPCFGR329.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR329_NFE	(*(volatile uint_io8_t*)0xB72007D5)  /*@bfbba@*/
#define PPC_PCFGR329_ODR	(PPC.unPCFGR329.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR329_PDE	(*(volatile uint_io8_t*)0xB72007D8)  /*@bfbba@*/
#define PPC_PCFGR329_PUE	(*(volatile uint_io8_t*)0xB72007D9)  /*@bfbba@*/
#define PPC_PCFGR329_PIL	(PPC.unPCFGR329.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR329_PIE	(*(volatile uint_io8_t*)0xB72007DC)  /*@bfbba@*/
#define PPC_PCFGR329_PID	(*(volatile uint_io8_t*)0xB72007DD)  /*@bfbba@*/
#define PPC_PCFGR329_POD	(*(volatile uint_io8_t*)0xB72007DE)  /*@bfbba@*/
#define PPC_PCFGR329_POE	(*(volatile uint_io8_t*)0xB72007DF)  /*@bfbba@*/

#define PPC_PCFGR330	(PPC.unPCFGR330.u16Register)  /*@rg@*/
#define PPC_PCFGR330_POF	(PPC.unPCFGR330.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR330_NFE	(*(volatile uint_io8_t*)0xB72007E5)  /*@bfbba@*/
#define PPC_PCFGR330_ODR	(PPC.unPCFGR330.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR330_PDE	(*(volatile uint_io8_t*)0xB72007E8)  /*@bfbba@*/
#define PPC_PCFGR330_PUE	(*(volatile uint_io8_t*)0xB72007E9)  /*@bfbba@*/
#define PPC_PCFGR330_PIL	(PPC.unPCFGR330.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR330_PIE	(*(volatile uint_io8_t*)0xB72007EC)  /*@bfbba@*/
#define PPC_PCFGR330_PID	(*(volatile uint_io8_t*)0xB72007ED)  /*@bfbba@*/
#define PPC_PCFGR330_POD	(*(volatile uint_io8_t*)0xB72007EE)  /*@bfbba@*/
#define PPC_PCFGR330_POE	(*(volatile uint_io8_t*)0xB72007EF)  /*@bfbba@*/

#define PPC_PCFGR331	(PPC.unPCFGR331.u16Register)  /*@rg@*/
#define PPC_PCFGR331_POF	(PPC.unPCFGR331.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR331_NFE	(*(volatile uint_io8_t*)0xB72007F5)  /*@bfbba@*/
#define PPC_PCFGR331_ODR	(PPC.unPCFGR331.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR331_PDE	(*(volatile uint_io8_t*)0xB72007F8)  /*@bfbba@*/
#define PPC_PCFGR331_PUE	(*(volatile uint_io8_t*)0xB72007F9)  /*@bfbba@*/
#define PPC_PCFGR331_PIL	(PPC.unPCFGR331.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR331_PIE	(*(volatile uint_io8_t*)0xB72007FC)  /*@bfbba@*/
#define PPC_PCFGR331_PID	(*(volatile uint_io8_t*)0xB72007FD)  /*@bfbba@*/
#define PPC_PCFGR331_POD	(*(volatile uint_io8_t*)0xB72007FE)  /*@bfbba@*/
#define PPC_PCFGR331_POE	(*(volatile uint_io8_t*)0xB72007FF)  /*@bfbba@*/

#define PPC_PCFGR400	(PPC.unPCFGR400.u16Register)  /*@rg@*/
#define PPC_PCFGR400_POF	(PPC.unPCFGR400.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR400_NFE	(*(volatile uint_io8_t*)0xB7200805)  /*@bfbba@*/
#define PPC_PCFGR400_ODR	(PPC.unPCFGR400.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR400_PDE	(*(volatile uint_io8_t*)0xB7200808)  /*@bfbba@*/
#define PPC_PCFGR400_PUE	(*(volatile uint_io8_t*)0xB7200809)  /*@bfbba@*/
#define PPC_PCFGR400_PIL	(PPC.unPCFGR400.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR400_PIE	(*(volatile uint_io8_t*)0xB720080C)  /*@bfbba@*/
#define PPC_PCFGR400_PID	(*(volatile uint_io8_t*)0xB720080D)  /*@bfbba@*/
#define PPC_PCFGR400_POD	(*(volatile uint_io8_t*)0xB720080E)  /*@bfbba@*/
#define PPC_PCFGR400_POE	(*(volatile uint_io8_t*)0xB720080F)  /*@bfbba@*/

#define PPC_PCFGR401	(PPC.unPCFGR401.u16Register)  /*@rg@*/
#define PPC_PCFGR401_POF	(PPC.unPCFGR401.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR401_NFE	(*(volatile uint_io8_t*)0xB7200815)  /*@bfbba@*/
#define PPC_PCFGR401_ODR	(PPC.unPCFGR401.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR401_PDE	(*(volatile uint_io8_t*)0xB7200818)  /*@bfbba@*/
#define PPC_PCFGR401_PUE	(*(volatile uint_io8_t*)0xB7200819)  /*@bfbba@*/
#define PPC_PCFGR401_PIL	(PPC.unPCFGR401.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR401_PIE	(*(volatile uint_io8_t*)0xB720081C)  /*@bfbba@*/
#define PPC_PCFGR401_PID	(*(volatile uint_io8_t*)0xB720081D)  /*@bfbba@*/
#define PPC_PCFGR401_POD	(*(volatile uint_io8_t*)0xB720081E)  /*@bfbba@*/
#define PPC_PCFGR401_POE	(*(volatile uint_io8_t*)0xB720081F)  /*@bfbba@*/

#define PPC_PCFGR402	(PPC.unPCFGR402.u16Register)  /*@rg@*/
#define PPC_PCFGR402_POF	(PPC.unPCFGR402.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR402_NFE	(*(volatile uint_io8_t*)0xB7200825)  /*@bfbba@*/
#define PPC_PCFGR402_ODR	(PPC.unPCFGR402.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR402_PDE	(*(volatile uint_io8_t*)0xB7200828)  /*@bfbba@*/
#define PPC_PCFGR402_PUE	(*(volatile uint_io8_t*)0xB7200829)  /*@bfbba@*/
#define PPC_PCFGR402_PIL	(PPC.unPCFGR402.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR402_PIE	(*(volatile uint_io8_t*)0xB720082C)  /*@bfbba@*/
#define PPC_PCFGR402_PID	(*(volatile uint_io8_t*)0xB720082D)  /*@bfbba@*/
#define PPC_PCFGR402_POD	(*(volatile uint_io8_t*)0xB720082E)  /*@bfbba@*/
#define PPC_PCFGR402_POE	(*(volatile uint_io8_t*)0xB720082F)  /*@bfbba@*/

#define PPC_PCFGR403	(PPC.unPCFGR403.u16Register)  /*@rg@*/
#define PPC_PCFGR403_POF	(PPC.unPCFGR403.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR403_NFE	(*(volatile uint_io8_t*)0xB7200835)  /*@bfbba@*/
#define PPC_PCFGR403_ODR	(PPC.unPCFGR403.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR403_PDE	(*(volatile uint_io8_t*)0xB7200838)  /*@bfbba@*/
#define PPC_PCFGR403_PUE	(*(volatile uint_io8_t*)0xB7200839)  /*@bfbba@*/
#define PPC_PCFGR403_PIL	(PPC.unPCFGR403.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR403_PIE	(*(volatile uint_io8_t*)0xB720083C)  /*@bfbba@*/
#define PPC_PCFGR403_PID	(*(volatile uint_io8_t*)0xB720083D)  /*@bfbba@*/
#define PPC_PCFGR403_POD	(*(volatile uint_io8_t*)0xB720083E)  /*@bfbba@*/
#define PPC_PCFGR403_POE	(*(volatile uint_io8_t*)0xB720083F)  /*@bfbba@*/

#define PPC_PCFGR404	(PPC.unPCFGR404.u16Register)  /*@rg@*/
#define PPC_PCFGR404_POF	(PPC.unPCFGR404.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR404_NFE	(*(volatile uint_io8_t*)0xB7200845)  /*@bfbba@*/
#define PPC_PCFGR404_ODR	(PPC.unPCFGR404.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR404_PDE	(*(volatile uint_io8_t*)0xB7200848)  /*@bfbba@*/
#define PPC_PCFGR404_PUE	(*(volatile uint_io8_t*)0xB7200849)  /*@bfbba@*/
#define PPC_PCFGR404_PIL	(PPC.unPCFGR404.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR404_PIE	(*(volatile uint_io8_t*)0xB720084C)  /*@bfbba@*/
#define PPC_PCFGR404_PID	(*(volatile uint_io8_t*)0xB720084D)  /*@bfbba@*/
#define PPC_PCFGR404_POD	(*(volatile uint_io8_t*)0xB720084E)  /*@bfbba@*/
#define PPC_PCFGR404_POE	(*(volatile uint_io8_t*)0xB720084F)  /*@bfbba@*/

#define PPC_PCFGR405	(PPC.unPCFGR405.u16Register)  /*@rg@*/
#define PPC_PCFGR405_POF	(PPC.unPCFGR405.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR405_NFE	(*(volatile uint_io8_t*)0xB7200855)  /*@bfbba@*/
#define PPC_PCFGR405_ODR	(PPC.unPCFGR405.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR405_PDE	(*(volatile uint_io8_t*)0xB7200858)  /*@bfbba@*/
#define PPC_PCFGR405_PUE	(*(volatile uint_io8_t*)0xB7200859)  /*@bfbba@*/
#define PPC_PCFGR405_PIL	(PPC.unPCFGR405.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR405_PIE	(*(volatile uint_io8_t*)0xB720085C)  /*@bfbba@*/
#define PPC_PCFGR405_PID	(*(volatile uint_io8_t*)0xB720085D)  /*@bfbba@*/
#define PPC_PCFGR405_POD	(*(volatile uint_io8_t*)0xB720085E)  /*@bfbba@*/
#define PPC_PCFGR405_POE	(*(volatile uint_io8_t*)0xB720085F)  /*@bfbba@*/

#define PPC_PCFGR406	(PPC.unPCFGR406.u16Register)  /*@rg@*/
#define PPC_PCFGR406_POF	(PPC.unPCFGR406.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR406_NFE	(*(volatile uint_io8_t*)0xB7200865)  /*@bfbba@*/
#define PPC_PCFGR406_ODR	(PPC.unPCFGR406.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR406_PDE	(*(volatile uint_io8_t*)0xB7200868)  /*@bfbba@*/
#define PPC_PCFGR406_PUE	(*(volatile uint_io8_t*)0xB7200869)  /*@bfbba@*/
#define PPC_PCFGR406_PIL	(PPC.unPCFGR406.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR406_PIE	(*(volatile uint_io8_t*)0xB720086C)  /*@bfbba@*/
#define PPC_PCFGR406_PID	(*(volatile uint_io8_t*)0xB720086D)  /*@bfbba@*/
#define PPC_PCFGR406_POD	(*(volatile uint_io8_t*)0xB720086E)  /*@bfbba@*/
#define PPC_PCFGR406_POE	(*(volatile uint_io8_t*)0xB720086F)  /*@bfbba@*/

#define PPC_PCFGR407	(PPC.unPCFGR407.u16Register)  /*@rg@*/
#define PPC_PCFGR407_POF	(PPC.unPCFGR407.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR407_NFE	(*(volatile uint_io8_t*)0xB7200875)  /*@bfbba@*/
#define PPC_PCFGR407_ODR	(PPC.unPCFGR407.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR407_PDE	(*(volatile uint_io8_t*)0xB7200878)  /*@bfbba@*/
#define PPC_PCFGR407_PUE	(*(volatile uint_io8_t*)0xB7200879)  /*@bfbba@*/
#define PPC_PCFGR407_PIL	(PPC.unPCFGR407.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR407_PIE	(*(volatile uint_io8_t*)0xB720087C)  /*@bfbba@*/
#define PPC_PCFGR407_PID	(*(volatile uint_io8_t*)0xB720087D)  /*@bfbba@*/
#define PPC_PCFGR407_POD	(*(volatile uint_io8_t*)0xB720087E)  /*@bfbba@*/
#define PPC_PCFGR407_POE	(*(volatile uint_io8_t*)0xB720087F)  /*@bfbba@*/

#define PPC_PCFGR408	(PPC.unPCFGR408.u16Register)  /*@rg@*/
#define PPC_PCFGR408_POF	(PPC.unPCFGR408.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR408_NFE	(*(volatile uint_io8_t*)0xB7200885)  /*@bfbba@*/
#define PPC_PCFGR408_ODR	(PPC.unPCFGR408.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR408_PDE	(*(volatile uint_io8_t*)0xB7200888)  /*@bfbba@*/
#define PPC_PCFGR408_PUE	(*(volatile uint_io8_t*)0xB7200889)  /*@bfbba@*/
#define PPC_PCFGR408_PIL	(PPC.unPCFGR408.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR408_PIE	(*(volatile uint_io8_t*)0xB720088C)  /*@bfbba@*/
#define PPC_PCFGR408_PID	(*(volatile uint_io8_t*)0xB720088D)  /*@bfbba@*/
#define PPC_PCFGR408_POD	(*(volatile uint_io8_t*)0xB720088E)  /*@bfbba@*/
#define PPC_PCFGR408_POE	(*(volatile uint_io8_t*)0xB720088F)  /*@bfbba@*/

#define PPC_PCFGR409	(PPC.unPCFGR409.u16Register)  /*@rg@*/
#define PPC_PCFGR409_POF	(PPC.unPCFGR409.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR409_NFE	(*(volatile uint_io8_t*)0xB7200895)  /*@bfbba@*/
#define PPC_PCFGR409_ODR	(PPC.unPCFGR409.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR409_PDE	(*(volatile uint_io8_t*)0xB7200898)  /*@bfbba@*/
#define PPC_PCFGR409_PUE	(*(volatile uint_io8_t*)0xB7200899)  /*@bfbba@*/
#define PPC_PCFGR409_PIL	(PPC.unPCFGR409.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR409_PIE	(*(volatile uint_io8_t*)0xB720089C)  /*@bfbba@*/
#define PPC_PCFGR409_PID	(*(volatile uint_io8_t*)0xB720089D)  /*@bfbba@*/
#define PPC_PCFGR409_POD	(*(volatile uint_io8_t*)0xB720089E)  /*@bfbba@*/
#define PPC_PCFGR409_POE	(*(volatile uint_io8_t*)0xB720089F)  /*@bfbba@*/

#define PPC_PCFGR410	(PPC.unPCFGR410.u16Register)  /*@rg@*/
#define PPC_PCFGR410_POF	(PPC.unPCFGR410.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR410_NFE	(*(volatile uint_io8_t*)0xB72008A5)  /*@bfbba@*/
#define PPC_PCFGR410_ODR	(PPC.unPCFGR410.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR410_PDE	(*(volatile uint_io8_t*)0xB72008A8)  /*@bfbba@*/
#define PPC_PCFGR410_PUE	(*(volatile uint_io8_t*)0xB72008A9)  /*@bfbba@*/
#define PPC_PCFGR410_PIL	(PPC.unPCFGR410.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR410_PIE	(*(volatile uint_io8_t*)0xB72008AC)  /*@bfbba@*/
#define PPC_PCFGR410_PID	(*(volatile uint_io8_t*)0xB72008AD)  /*@bfbba@*/
#define PPC_PCFGR410_POD	(*(volatile uint_io8_t*)0xB72008AE)  /*@bfbba@*/
#define PPC_PCFGR410_POE	(*(volatile uint_io8_t*)0xB72008AF)  /*@bfbba@*/

#define PPC_PCFGR411	(PPC.unPCFGR411.u16Register)  /*@rg@*/
#define PPC_PCFGR411_POF	(PPC.unPCFGR411.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR411_NFE	(*(volatile uint_io8_t*)0xB72008B5)  /*@bfbba@*/
#define PPC_PCFGR411_ODR	(PPC.unPCFGR411.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR411_PDE	(*(volatile uint_io8_t*)0xB72008B8)  /*@bfbba@*/
#define PPC_PCFGR411_PUE	(*(volatile uint_io8_t*)0xB72008B9)  /*@bfbba@*/
#define PPC_PCFGR411_PIL	(PPC.unPCFGR411.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR411_PIE	(*(volatile uint_io8_t*)0xB72008BC)  /*@bfbba@*/
#define PPC_PCFGR411_PID	(*(volatile uint_io8_t*)0xB72008BD)  /*@bfbba@*/
#define PPC_PCFGR411_POD	(*(volatile uint_io8_t*)0xB72008BE)  /*@bfbba@*/
#define PPC_PCFGR411_POE	(*(volatile uint_io8_t*)0xB72008BF)  /*@bfbba@*/

#define PPC_PCFGR412	(PPC.unPCFGR412.u16Register)  /*@rg@*/
#define PPC_PCFGR412_POF	(PPC.unPCFGR412.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR412_NFE	(*(volatile uint_io8_t*)0xB72008C5)  /*@bfbba@*/
#define PPC_PCFGR412_ODR	(PPC.unPCFGR412.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR412_PDE	(*(volatile uint_io8_t*)0xB72008C8)  /*@bfbba@*/
#define PPC_PCFGR412_PUE	(*(volatile uint_io8_t*)0xB72008C9)  /*@bfbba@*/
#define PPC_PCFGR412_PIL	(PPC.unPCFGR412.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR412_PIE	(*(volatile uint_io8_t*)0xB72008CC)  /*@bfbba@*/
#define PPC_PCFGR412_PID	(*(volatile uint_io8_t*)0xB72008CD)  /*@bfbba@*/
#define PPC_PCFGR412_POD	(*(volatile uint_io8_t*)0xB72008CE)  /*@bfbba@*/
#define PPC_PCFGR412_POE	(*(volatile uint_io8_t*)0xB72008CF)  /*@bfbba@*/

#define PPC_PCFGR413	(PPC.unPCFGR413.u16Register)  /*@rg@*/
#define PPC_PCFGR413_POF	(PPC.unPCFGR413.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR413_NFE	(*(volatile uint_io8_t*)0xB72008D5)  /*@bfbba@*/
#define PPC_PCFGR413_ODR	(PPC.unPCFGR413.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR413_PDE	(*(volatile uint_io8_t*)0xB72008D8)  /*@bfbba@*/
#define PPC_PCFGR413_PUE	(*(volatile uint_io8_t*)0xB72008D9)  /*@bfbba@*/
#define PPC_PCFGR413_PIL	(PPC.unPCFGR413.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR413_PIE	(*(volatile uint_io8_t*)0xB72008DC)  /*@bfbba@*/
#define PPC_PCFGR413_PID	(*(volatile uint_io8_t*)0xB72008DD)  /*@bfbba@*/
#define PPC_PCFGR413_POD	(*(volatile uint_io8_t*)0xB72008DE)  /*@bfbba@*/
#define PPC_PCFGR413_POE	(*(volatile uint_io8_t*)0xB72008DF)  /*@bfbba@*/

#define PPC_PCFGR414	(PPC.unPCFGR414.u16Register)  /*@rg@*/
#define PPC_PCFGR414_POF	(PPC.unPCFGR414.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR414_NFE	(*(volatile uint_io8_t*)0xB72008E5)  /*@bfbba@*/
#define PPC_PCFGR414_ODR	(PPC.unPCFGR414.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR414_PDE	(*(volatile uint_io8_t*)0xB72008E8)  /*@bfbba@*/
#define PPC_PCFGR414_PUE	(*(volatile uint_io8_t*)0xB72008E9)  /*@bfbba@*/
#define PPC_PCFGR414_PIL	(PPC.unPCFGR414.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR414_PIE	(*(volatile uint_io8_t*)0xB72008EC)  /*@bfbba@*/
#define PPC_PCFGR414_PID	(*(volatile uint_io8_t*)0xB72008ED)  /*@bfbba@*/
#define PPC_PCFGR414_POD	(*(volatile uint_io8_t*)0xB72008EE)  /*@bfbba@*/
#define PPC_PCFGR414_POE	(*(volatile uint_io8_t*)0xB72008EF)  /*@bfbba@*/

#define PPC_PCFGR415	(PPC.unPCFGR415.u16Register)  /*@rg@*/
#define PPC_PCFGR415_POF	(PPC.unPCFGR415.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR415_NFE	(*(volatile uint_io8_t*)0xB72008F5)  /*@bfbba@*/
#define PPC_PCFGR415_ODR	(PPC.unPCFGR415.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR415_PDE	(*(volatile uint_io8_t*)0xB72008F8)  /*@bfbba@*/
#define PPC_PCFGR415_PUE	(*(volatile uint_io8_t*)0xB72008F9)  /*@bfbba@*/
#define PPC_PCFGR415_PIL	(PPC.unPCFGR415.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR415_PIE	(*(volatile uint_io8_t*)0xB72008FC)  /*@bfbba@*/
#define PPC_PCFGR415_PID	(*(volatile uint_io8_t*)0xB72008FD)  /*@bfbba@*/
#define PPC_PCFGR415_POD	(*(volatile uint_io8_t*)0xB72008FE)  /*@bfbba@*/
#define PPC_PCFGR415_POE	(*(volatile uint_io8_t*)0xB72008FF)  /*@bfbba@*/

#define PPC_PCFGR416	(PPC.unPCFGR416.u16Register)  /*@rg@*/
#define PPC_PCFGR416_POF	(PPC.unPCFGR416.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR416_NFE	(*(volatile uint_io8_t*)0xB7200905)  /*@bfbba@*/
#define PPC_PCFGR416_ODR	(PPC.unPCFGR416.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR416_PDE	(*(volatile uint_io8_t*)0xB7200908)  /*@bfbba@*/
#define PPC_PCFGR416_PUE	(*(volatile uint_io8_t*)0xB7200909)  /*@bfbba@*/
#define PPC_PCFGR416_PIL	(PPC.unPCFGR416.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR416_PIE	(*(volatile uint_io8_t*)0xB720090C)  /*@bfbba@*/
#define PPC_PCFGR416_PID	(*(volatile uint_io8_t*)0xB720090D)  /*@bfbba@*/
#define PPC_PCFGR416_POD	(*(volatile uint_io8_t*)0xB720090E)  /*@bfbba@*/
#define PPC_PCFGR416_POE	(*(volatile uint_io8_t*)0xB720090F)  /*@bfbba@*/

#define PPC_PCFGR417	(PPC.unPCFGR417.u16Register)  /*@rg@*/
#define PPC_PCFGR417_POF	(PPC.unPCFGR417.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR417_NFE	(*(volatile uint_io8_t*)0xB7200915)  /*@bfbba@*/
#define PPC_PCFGR417_ODR	(PPC.unPCFGR417.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR417_PDE	(*(volatile uint_io8_t*)0xB7200918)  /*@bfbba@*/
#define PPC_PCFGR417_PUE	(*(volatile uint_io8_t*)0xB7200919)  /*@bfbba@*/
#define PPC_PCFGR417_PIL	(PPC.unPCFGR417.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR417_PIE	(*(volatile uint_io8_t*)0xB720091C)  /*@bfbba@*/
#define PPC_PCFGR417_PID	(*(volatile uint_io8_t*)0xB720091D)  /*@bfbba@*/
#define PPC_PCFGR417_POD	(*(volatile uint_io8_t*)0xB720091E)  /*@bfbba@*/
#define PPC_PCFGR417_POE	(*(volatile uint_io8_t*)0xB720091F)  /*@bfbba@*/

#define PPC_PCFGR418	(PPC.unPCFGR418.u16Register)  /*@rg@*/
#define PPC_PCFGR418_POF	(PPC.unPCFGR418.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR418_NFE	(*(volatile uint_io8_t*)0xB7200925)  /*@bfbba@*/
#define PPC_PCFGR418_ODR	(PPC.unPCFGR418.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR418_PDE	(*(volatile uint_io8_t*)0xB7200928)  /*@bfbba@*/
#define PPC_PCFGR418_PUE	(*(volatile uint_io8_t*)0xB7200929)  /*@bfbba@*/
#define PPC_PCFGR418_PIL	(PPC.unPCFGR418.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR418_PIE	(*(volatile uint_io8_t*)0xB720092C)  /*@bfbba@*/
#define PPC_PCFGR418_PID	(*(volatile uint_io8_t*)0xB720092D)  /*@bfbba@*/
#define PPC_PCFGR418_POD	(*(volatile uint_io8_t*)0xB720092E)  /*@bfbba@*/
#define PPC_PCFGR418_POE	(*(volatile uint_io8_t*)0xB720092F)  /*@bfbba@*/

#define PPC_PCFGR419	(PPC.unPCFGR419.u16Register)  /*@rg@*/
#define PPC_PCFGR419_POF	(PPC.unPCFGR419.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR419_NFE	(*(volatile uint_io8_t*)0xB7200935)  /*@bfbba@*/
#define PPC_PCFGR419_ODR	(PPC.unPCFGR419.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR419_PDE	(*(volatile uint_io8_t*)0xB7200938)  /*@bfbba@*/
#define PPC_PCFGR419_PUE	(*(volatile uint_io8_t*)0xB7200939)  /*@bfbba@*/
#define PPC_PCFGR419_PIL	(PPC.unPCFGR419.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR419_PIE	(*(volatile uint_io8_t*)0xB720093C)  /*@bfbba@*/
#define PPC_PCFGR419_PID	(*(volatile uint_io8_t*)0xB720093D)  /*@bfbba@*/
#define PPC_PCFGR419_POD	(*(volatile uint_io8_t*)0xB720093E)  /*@bfbba@*/
#define PPC_PCFGR419_POE	(*(volatile uint_io8_t*)0xB720093F)  /*@bfbba@*/

#define PPC_PCFGR420	(PPC.unPCFGR420.u16Register)  /*@rg@*/
#define PPC_PCFGR420_POF	(PPC.unPCFGR420.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR420_NFE	(*(volatile uint_io8_t*)0xB7200945)  /*@bfbba@*/
#define PPC_PCFGR420_ODR	(PPC.unPCFGR420.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR420_PDE	(*(volatile uint_io8_t*)0xB7200948)  /*@bfbba@*/
#define PPC_PCFGR420_PUE	(*(volatile uint_io8_t*)0xB7200949)  /*@bfbba@*/
#define PPC_PCFGR420_PIL	(PPC.unPCFGR420.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR420_PIE	(*(volatile uint_io8_t*)0xB720094C)  /*@bfbba@*/
#define PPC_PCFGR420_PID	(*(volatile uint_io8_t*)0xB720094D)  /*@bfbba@*/
#define PPC_PCFGR420_POD	(*(volatile uint_io8_t*)0xB720094E)  /*@bfbba@*/
#define PPC_PCFGR420_POE	(*(volatile uint_io8_t*)0xB720094F)  /*@bfbba@*/

#define PPC_PCFGR421	(PPC.unPCFGR421.u16Register)  /*@rg@*/
#define PPC_PCFGR421_POF	(PPC.unPCFGR421.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR421_NFE	(*(volatile uint_io8_t*)0xB7200955)  /*@bfbba@*/
#define PPC_PCFGR421_ODR	(PPC.unPCFGR421.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR421_PDE	(*(volatile uint_io8_t*)0xB7200958)  /*@bfbba@*/
#define PPC_PCFGR421_PUE	(*(volatile uint_io8_t*)0xB7200959)  /*@bfbba@*/
#define PPC_PCFGR421_PIL	(PPC.unPCFGR421.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR421_PIE	(*(volatile uint_io8_t*)0xB720095C)  /*@bfbba@*/
#define PPC_PCFGR421_PID	(*(volatile uint_io8_t*)0xB720095D)  /*@bfbba@*/
#define PPC_PCFGR421_POD	(*(volatile uint_io8_t*)0xB720095E)  /*@bfbba@*/
#define PPC_PCFGR421_POE	(*(volatile uint_io8_t*)0xB720095F)  /*@bfbba@*/

#define PPC_PCFGR422	(PPC.unPCFGR422.u16Register)  /*@rg@*/
#define PPC_PCFGR422_POF	(PPC.unPCFGR422.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR422_NFE	(*(volatile uint_io8_t*)0xB7200965)  /*@bfbba@*/
#define PPC_PCFGR422_ODR	(PPC.unPCFGR422.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR422_PDE	(*(volatile uint_io8_t*)0xB7200968)  /*@bfbba@*/
#define PPC_PCFGR422_PUE	(*(volatile uint_io8_t*)0xB7200969)  /*@bfbba@*/
#define PPC_PCFGR422_PIL	(PPC.unPCFGR422.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR422_PIE	(*(volatile uint_io8_t*)0xB720096C)  /*@bfbba@*/
#define PPC_PCFGR422_PID	(*(volatile uint_io8_t*)0xB720096D)  /*@bfbba@*/
#define PPC_PCFGR422_POD	(*(volatile uint_io8_t*)0xB720096E)  /*@bfbba@*/
#define PPC_PCFGR422_POE	(*(volatile uint_io8_t*)0xB720096F)  /*@bfbba@*/

#define PPC_PCFGR423	(PPC.unPCFGR423.u16Register)  /*@rg@*/
#define PPC_PCFGR423_POF	(PPC.unPCFGR423.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR423_NFE	(*(volatile uint_io8_t*)0xB7200975)  /*@bfbba@*/
#define PPC_PCFGR423_ODR	(PPC.unPCFGR423.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR423_PDE	(*(volatile uint_io8_t*)0xB7200978)  /*@bfbba@*/
#define PPC_PCFGR423_PUE	(*(volatile uint_io8_t*)0xB7200979)  /*@bfbba@*/
#define PPC_PCFGR423_PIL	(PPC.unPCFGR423.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR423_PIE	(*(volatile uint_io8_t*)0xB720097C)  /*@bfbba@*/
#define PPC_PCFGR423_PID	(*(volatile uint_io8_t*)0xB720097D)  /*@bfbba@*/
#define PPC_PCFGR423_POD	(*(volatile uint_io8_t*)0xB720097E)  /*@bfbba@*/
#define PPC_PCFGR423_POE	(*(volatile uint_io8_t*)0xB720097F)  /*@bfbba@*/

#define PPC_PCFGR424	(PPC.unPCFGR424.u16Register)  /*@rg@*/
#define PPC_PCFGR424_POF	(PPC.unPCFGR424.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR424_NFE	(*(volatile uint_io8_t*)0xB7200985)  /*@bfbba@*/
#define PPC_PCFGR424_ODR	(PPC.unPCFGR424.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR424_PDE	(*(volatile uint_io8_t*)0xB7200988)  /*@bfbba@*/
#define PPC_PCFGR424_PUE	(*(volatile uint_io8_t*)0xB7200989)  /*@bfbba@*/
#define PPC_PCFGR424_PIL	(PPC.unPCFGR424.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR424_PIE	(*(volatile uint_io8_t*)0xB720098C)  /*@bfbba@*/
#define PPC_PCFGR424_PID	(*(volatile uint_io8_t*)0xB720098D)  /*@bfbba@*/
#define PPC_PCFGR424_POD	(*(volatile uint_io8_t*)0xB720098E)  /*@bfbba@*/
#define PPC_PCFGR424_POE	(*(volatile uint_io8_t*)0xB720098F)  /*@bfbba@*/

#define PPC_PCFGR425	(PPC.unPCFGR425.u16Register)  /*@rg@*/
#define PPC_PCFGR425_POF	(PPC.unPCFGR425.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR425_NFE	(*(volatile uint_io8_t*)0xB7200995)  /*@bfbba@*/
#define PPC_PCFGR425_ODR	(PPC.unPCFGR425.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR425_PDE	(*(volatile uint_io8_t*)0xB7200998)  /*@bfbba@*/
#define PPC_PCFGR425_PUE	(*(volatile uint_io8_t*)0xB7200999)  /*@bfbba@*/
#define PPC_PCFGR425_PIL	(PPC.unPCFGR425.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR425_PIE	(*(volatile uint_io8_t*)0xB720099C)  /*@bfbba@*/
#define PPC_PCFGR425_PID	(*(volatile uint_io8_t*)0xB720099D)  /*@bfbba@*/
#define PPC_PCFGR425_POD	(*(volatile uint_io8_t*)0xB720099E)  /*@bfbba@*/
#define PPC_PCFGR425_POE	(*(volatile uint_io8_t*)0xB720099F)  /*@bfbba@*/

#define PPC_PCFGR426	(PPC.unPCFGR426.u16Register)  /*@rg@*/
#define PPC_PCFGR426_POF	(PPC.unPCFGR426.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR426_NFE	(*(volatile uint_io8_t*)0xB72009A5)  /*@bfbba@*/
#define PPC_PCFGR426_ODR	(PPC.unPCFGR426.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR426_PDE	(*(volatile uint_io8_t*)0xB72009A8)  /*@bfbba@*/
#define PPC_PCFGR426_PUE	(*(volatile uint_io8_t*)0xB72009A9)  /*@bfbba@*/
#define PPC_PCFGR426_PIL	(PPC.unPCFGR426.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR426_PIE	(*(volatile uint_io8_t*)0xB72009AC)  /*@bfbba@*/
#define PPC_PCFGR426_PID	(*(volatile uint_io8_t*)0xB72009AD)  /*@bfbba@*/
#define PPC_PCFGR426_POD	(*(volatile uint_io8_t*)0xB72009AE)  /*@bfbba@*/
#define PPC_PCFGR426_POE	(*(volatile uint_io8_t*)0xB72009AF)  /*@bfbba@*/

#define PPC_PCFGR427	(PPC.unPCFGR427.u16Register)  /*@rg@*/
#define PPC_PCFGR427_POF	(PPC.unPCFGR427.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR427_NFE	(*(volatile uint_io8_t*)0xB72009B5)  /*@bfbba@*/
#define PPC_PCFGR427_ODR	(PPC.unPCFGR427.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR427_PDE	(*(volatile uint_io8_t*)0xB72009B8)  /*@bfbba@*/
#define PPC_PCFGR427_PUE	(*(volatile uint_io8_t*)0xB72009B9)  /*@bfbba@*/
#define PPC_PCFGR427_PIL	(PPC.unPCFGR427.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR427_PIE	(*(volatile uint_io8_t*)0xB72009BC)  /*@bfbba@*/
#define PPC_PCFGR427_PID	(*(volatile uint_io8_t*)0xB72009BD)  /*@bfbba@*/
#define PPC_PCFGR427_POD	(*(volatile uint_io8_t*)0xB72009BE)  /*@bfbba@*/
#define PPC_PCFGR427_POE	(*(volatile uint_io8_t*)0xB72009BF)  /*@bfbba@*/

#define PPC_PCFGR428	(PPC.unPCFGR428.u16Register)  /*@rg@*/
#define PPC_PCFGR428_POF	(PPC.unPCFGR428.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR428_NFE	(*(volatile uint_io8_t*)0xB72009C5)  /*@bfbba@*/
#define PPC_PCFGR428_ODR	(PPC.unPCFGR428.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR428_PDE	(*(volatile uint_io8_t*)0xB72009C8)  /*@bfbba@*/
#define PPC_PCFGR428_PUE	(*(volatile uint_io8_t*)0xB72009C9)  /*@bfbba@*/
#define PPC_PCFGR428_PIL	(PPC.unPCFGR428.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR428_PIE	(*(volatile uint_io8_t*)0xB72009CC)  /*@bfbba@*/
#define PPC_PCFGR428_PID	(*(volatile uint_io8_t*)0xB72009CD)  /*@bfbba@*/
#define PPC_PCFGR428_POD	(*(volatile uint_io8_t*)0xB72009CE)  /*@bfbba@*/
#define PPC_PCFGR428_POE	(*(volatile uint_io8_t*)0xB72009CF)  /*@bfbba@*/

#define PPC_PCFGR429	(PPC.unPCFGR429.u16Register)  /*@rg@*/
#define PPC_PCFGR429_POF	(PPC.unPCFGR429.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR429_NFE	(*(volatile uint_io8_t*)0xB72009D5)  /*@bfbba@*/
#define PPC_PCFGR429_ODR	(PPC.unPCFGR429.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR429_PDE	(*(volatile uint_io8_t*)0xB72009D8)  /*@bfbba@*/
#define PPC_PCFGR429_PUE	(*(volatile uint_io8_t*)0xB72009D9)  /*@bfbba@*/
#define PPC_PCFGR429_PIL	(PPC.unPCFGR429.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR429_PIE	(*(volatile uint_io8_t*)0xB72009DC)  /*@bfbba@*/
#define PPC_PCFGR429_PID	(*(volatile uint_io8_t*)0xB72009DD)  /*@bfbba@*/
#define PPC_PCFGR429_POD	(*(volatile uint_io8_t*)0xB72009DE)  /*@bfbba@*/
#define PPC_PCFGR429_POE	(*(volatile uint_io8_t*)0xB72009DF)  /*@bfbba@*/

#define PPC_PCFGR430	(PPC.unPCFGR430.u16Register)  /*@rg@*/
#define PPC_PCFGR430_POF	(PPC.unPCFGR430.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR430_NFE	(*(volatile uint_io8_t*)0xB72009E5)  /*@bfbba@*/
#define PPC_PCFGR430_ODR	(PPC.unPCFGR430.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR430_PDE	(*(volatile uint_io8_t*)0xB72009E8)  /*@bfbba@*/
#define PPC_PCFGR430_PUE	(*(volatile uint_io8_t*)0xB72009E9)  /*@bfbba@*/
#define PPC_PCFGR430_PIL	(PPC.unPCFGR430.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR430_PIE	(*(volatile uint_io8_t*)0xB72009EC)  /*@bfbba@*/
#define PPC_PCFGR430_PID	(*(volatile uint_io8_t*)0xB72009ED)  /*@bfbba@*/
#define PPC_PCFGR430_POD	(*(volatile uint_io8_t*)0xB72009EE)  /*@bfbba@*/
#define PPC_PCFGR430_POE	(*(volatile uint_io8_t*)0xB72009EF)  /*@bfbba@*/

#define PPC_PCFGR431	(PPC.unPCFGR431.u16Register)  /*@rg@*/
#define PPC_PCFGR431_POF	(PPC.unPCFGR431.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR431_NFE	(*(volatile uint_io8_t*)0xB72009F5)  /*@bfbba@*/
#define PPC_PCFGR431_ODR	(PPC.unPCFGR431.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR431_PDE	(*(volatile uint_io8_t*)0xB72009F8)  /*@bfbba@*/
#define PPC_PCFGR431_PUE	(*(volatile uint_io8_t*)0xB72009F9)  /*@bfbba@*/
#define PPC_PCFGR431_PIL	(PPC.unPCFGR431.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR431_PIE	(*(volatile uint_io8_t*)0xB72009FC)  /*@bfbba@*/
#define PPC_PCFGR431_PID	(*(volatile uint_io8_t*)0xB72009FD)  /*@bfbba@*/
#define PPC_PCFGR431_POD	(*(volatile uint_io8_t*)0xB72009FE)  /*@bfbba@*/
#define PPC_PCFGR431_POE	(*(volatile uint_io8_t*)0xB72009FF)  /*@bfbba@*/

#define PPC_PCFGR500	(PPC.unPCFGR500.u16Register)  /*@rg@*/
#define PPC_PCFGR500_POF	(PPC.unPCFGR500.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR500_NFE	(*(volatile uint_io8_t*)0xB7200A05)  /*@bfbba@*/
#define PPC_PCFGR500_ODR	(PPC.unPCFGR500.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR500_PDE	(*(volatile uint_io8_t*)0xB7200A08)  /*@bfbba@*/
#define PPC_PCFGR500_PUE	(*(volatile uint_io8_t*)0xB7200A09)  /*@bfbba@*/
#define PPC_PCFGR500_PIL	(PPC.unPCFGR500.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR500_PIE	(*(volatile uint_io8_t*)0xB7200A0C)  /*@bfbba@*/
#define PPC_PCFGR500_PID	(*(volatile uint_io8_t*)0xB7200A0D)  /*@bfbba@*/
#define PPC_PCFGR500_POD	(*(volatile uint_io8_t*)0xB7200A0E)  /*@bfbba@*/
#define PPC_PCFGR500_POE	(*(volatile uint_io8_t*)0xB7200A0F)  /*@bfbba@*/

#define PPC_PCFGR501	(PPC.unPCFGR501.u16Register)  /*@rg@*/
#define PPC_PCFGR501_POF	(PPC.unPCFGR501.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR501_NFE	(*(volatile uint_io8_t*)0xB7200A15)  /*@bfbba@*/
#define PPC_PCFGR501_ODR	(PPC.unPCFGR501.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR501_PDE	(*(volatile uint_io8_t*)0xB7200A18)  /*@bfbba@*/
#define PPC_PCFGR501_PUE	(*(volatile uint_io8_t*)0xB7200A19)  /*@bfbba@*/
#define PPC_PCFGR501_PIL	(PPC.unPCFGR501.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR501_PIE	(*(volatile uint_io8_t*)0xB7200A1C)  /*@bfbba@*/
#define PPC_PCFGR501_PID	(*(volatile uint_io8_t*)0xB7200A1D)  /*@bfbba@*/
#define PPC_PCFGR501_POD	(*(volatile uint_io8_t*)0xB7200A1E)  /*@bfbba@*/
#define PPC_PCFGR501_POE	(*(volatile uint_io8_t*)0xB7200A1F)  /*@bfbba@*/

#define PPC_PCFGR502	(PPC.unPCFGR502.u16Register)  /*@rg@*/
#define PPC_PCFGR502_POF	(PPC.unPCFGR502.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR502_NFE	(*(volatile uint_io8_t*)0xB7200A25)  /*@bfbba@*/
#define PPC_PCFGR502_ODR	(PPC.unPCFGR502.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR502_PDE	(*(volatile uint_io8_t*)0xB7200A28)  /*@bfbba@*/
#define PPC_PCFGR502_PUE	(*(volatile uint_io8_t*)0xB7200A29)  /*@bfbba@*/
#define PPC_PCFGR502_PIL	(PPC.unPCFGR502.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR502_PIE	(*(volatile uint_io8_t*)0xB7200A2C)  /*@bfbba@*/
#define PPC_PCFGR502_PID	(*(volatile uint_io8_t*)0xB7200A2D)  /*@bfbba@*/
#define PPC_PCFGR502_POD	(*(volatile uint_io8_t*)0xB7200A2E)  /*@bfbba@*/
#define PPC_PCFGR502_POE	(*(volatile uint_io8_t*)0xB7200A2F)  /*@bfbba@*/

#define PPC_PCFGR503	(PPC.unPCFGR503.u16Register)  /*@rg@*/
#define PPC_PCFGR503_POF	(PPC.unPCFGR503.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR503_NFE	(*(volatile uint_io8_t*)0xB7200A35)  /*@bfbba@*/
#define PPC_PCFGR503_ODR	(PPC.unPCFGR503.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR503_PDE	(*(volatile uint_io8_t*)0xB7200A38)  /*@bfbba@*/
#define PPC_PCFGR503_PUE	(*(volatile uint_io8_t*)0xB7200A39)  /*@bfbba@*/
#define PPC_PCFGR503_PIL	(PPC.unPCFGR503.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR503_PIE	(*(volatile uint_io8_t*)0xB7200A3C)  /*@bfbba@*/
#define PPC_PCFGR503_PID	(*(volatile uint_io8_t*)0xB7200A3D)  /*@bfbba@*/
#define PPC_PCFGR503_POD	(*(volatile uint_io8_t*)0xB7200A3E)  /*@bfbba@*/
#define PPC_PCFGR503_POE	(*(volatile uint_io8_t*)0xB7200A3F)  /*@bfbba@*/

#define PPC_PCFGR504	(PPC.unPCFGR504.u16Register)  /*@rg@*/
#define PPC_PCFGR504_POF	(PPC.unPCFGR504.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR504_NFE	(*(volatile uint_io8_t*)0xB7200A45)  /*@bfbba@*/
#define PPC_PCFGR504_ODR	(PPC.unPCFGR504.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR504_PDE	(*(volatile uint_io8_t*)0xB7200A48)  /*@bfbba@*/
#define PPC_PCFGR504_PUE	(*(volatile uint_io8_t*)0xB7200A49)  /*@bfbba@*/
#define PPC_PCFGR504_PIL	(PPC.unPCFGR504.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR504_PIE	(*(volatile uint_io8_t*)0xB7200A4C)  /*@bfbba@*/
#define PPC_PCFGR504_PID	(*(volatile uint_io8_t*)0xB7200A4D)  /*@bfbba@*/
#define PPC_PCFGR504_POD	(*(volatile uint_io8_t*)0xB7200A4E)  /*@bfbba@*/
#define PPC_PCFGR504_POE	(*(volatile uint_io8_t*)0xB7200A4F)  /*@bfbba@*/

#define PPC_PCFGR505	(PPC.unPCFGR505.u16Register)  /*@rg@*/
#define PPC_PCFGR505_POF	(PPC.unPCFGR505.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR505_NFE	(*(volatile uint_io8_t*)0xB7200A55)  /*@bfbba@*/
#define PPC_PCFGR505_ODR	(PPC.unPCFGR505.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR505_PDE	(*(volatile uint_io8_t*)0xB7200A58)  /*@bfbba@*/
#define PPC_PCFGR505_PUE	(*(volatile uint_io8_t*)0xB7200A59)  /*@bfbba@*/
#define PPC_PCFGR505_PIL	(PPC.unPCFGR505.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR505_PIE	(*(volatile uint_io8_t*)0xB7200A5C)  /*@bfbba@*/
#define PPC_PCFGR505_PID	(*(volatile uint_io8_t*)0xB7200A5D)  /*@bfbba@*/
#define PPC_PCFGR505_POD	(*(volatile uint_io8_t*)0xB7200A5E)  /*@bfbba@*/
#define PPC_PCFGR505_POE	(*(volatile uint_io8_t*)0xB7200A5F)  /*@bfbba@*/

#define PPC_PCFGR506	(PPC.unPCFGR506.u16Register)  /*@rg@*/
#define PPC_PCFGR506_POF	(PPC.unPCFGR506.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR506_NFE	(*(volatile uint_io8_t*)0xB7200A65)  /*@bfbba@*/
#define PPC_PCFGR506_ODR	(PPC.unPCFGR506.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR506_PDE	(*(volatile uint_io8_t*)0xB7200A68)  /*@bfbba@*/
#define PPC_PCFGR506_PUE	(*(volatile uint_io8_t*)0xB7200A69)  /*@bfbba@*/
#define PPC_PCFGR506_PIL	(PPC.unPCFGR506.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR506_PIE	(*(volatile uint_io8_t*)0xB7200A6C)  /*@bfbba@*/
#define PPC_PCFGR506_PID	(*(volatile uint_io8_t*)0xB7200A6D)  /*@bfbba@*/
#define PPC_PCFGR506_POD	(*(volatile uint_io8_t*)0xB7200A6E)  /*@bfbba@*/
#define PPC_PCFGR506_POE	(*(volatile uint_io8_t*)0xB7200A6F)  /*@bfbba@*/

#define PPC_PCFGR507	(PPC.unPCFGR507.u16Register)  /*@rg@*/
#define PPC_PCFGR507_POF	(PPC.unPCFGR507.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR507_NFE	(*(volatile uint_io8_t*)0xB7200A75)  /*@bfbba@*/
#define PPC_PCFGR507_ODR	(PPC.unPCFGR507.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR507_PDE	(*(volatile uint_io8_t*)0xB7200A78)  /*@bfbba@*/
#define PPC_PCFGR507_PUE	(*(volatile uint_io8_t*)0xB7200A79)  /*@bfbba@*/
#define PPC_PCFGR507_PIL	(PPC.unPCFGR507.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR507_PIE	(*(volatile uint_io8_t*)0xB7200A7C)  /*@bfbba@*/
#define PPC_PCFGR507_PID	(*(volatile uint_io8_t*)0xB7200A7D)  /*@bfbba@*/
#define PPC_PCFGR507_POD	(*(volatile uint_io8_t*)0xB7200A7E)  /*@bfbba@*/
#define PPC_PCFGR507_POE	(*(volatile uint_io8_t*)0xB7200A7F)  /*@bfbba@*/

#define PPC_PCFGR508	(PPC.unPCFGR508.u16Register)  /*@rg@*/
#define PPC_PCFGR508_POF	(PPC.unPCFGR508.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR508_NFE	(*(volatile uint_io8_t*)0xB7200A85)  /*@bfbba@*/
#define PPC_PCFGR508_ODR	(PPC.unPCFGR508.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR508_PDE	(*(volatile uint_io8_t*)0xB7200A88)  /*@bfbba@*/
#define PPC_PCFGR508_PUE	(*(volatile uint_io8_t*)0xB7200A89)  /*@bfbba@*/
#define PPC_PCFGR508_PIL	(PPC.unPCFGR508.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR508_PIE	(*(volatile uint_io8_t*)0xB7200A8C)  /*@bfbba@*/
#define PPC_PCFGR508_PID	(*(volatile uint_io8_t*)0xB7200A8D)  /*@bfbba@*/
#define PPC_PCFGR508_POD	(*(volatile uint_io8_t*)0xB7200A8E)  /*@bfbba@*/
#define PPC_PCFGR508_POE	(*(volatile uint_io8_t*)0xB7200A8F)  /*@bfbba@*/

#define PPC_PCFGR509	(PPC.unPCFGR509.u16Register)  /*@rg@*/
#define PPC_PCFGR509_POF	(PPC.unPCFGR509.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR509_NFE	(*(volatile uint_io8_t*)0xB7200A95)  /*@bfbba@*/
#define PPC_PCFGR509_ODR	(PPC.unPCFGR509.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR509_PDE	(*(volatile uint_io8_t*)0xB7200A98)  /*@bfbba@*/
#define PPC_PCFGR509_PUE	(*(volatile uint_io8_t*)0xB7200A99)  /*@bfbba@*/
#define PPC_PCFGR509_PIL	(PPC.unPCFGR509.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR509_PIE	(*(volatile uint_io8_t*)0xB7200A9C)  /*@bfbba@*/
#define PPC_PCFGR509_PID	(*(volatile uint_io8_t*)0xB7200A9D)  /*@bfbba@*/
#define PPC_PCFGR509_POD	(*(volatile uint_io8_t*)0xB7200A9E)  /*@bfbba@*/
#define PPC_PCFGR509_POE	(*(volatile uint_io8_t*)0xB7200A9F)  /*@bfbba@*/

#define PPC_PCFGR510	(PPC.unPCFGR510.u16Register)  /*@rg@*/
#define PPC_PCFGR510_POF	(PPC.unPCFGR510.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR510_NFE	(*(volatile uint_io8_t*)0xB7200AA5)  /*@bfbba@*/
#define PPC_PCFGR510_ODR	(PPC.unPCFGR510.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR510_PDE	(*(volatile uint_io8_t*)0xB7200AA8)  /*@bfbba@*/
#define PPC_PCFGR510_PUE	(*(volatile uint_io8_t*)0xB7200AA9)  /*@bfbba@*/
#define PPC_PCFGR510_PIL	(PPC.unPCFGR510.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR510_PIE	(*(volatile uint_io8_t*)0xB7200AAC)  /*@bfbba@*/
#define PPC_PCFGR510_PID	(*(volatile uint_io8_t*)0xB7200AAD)  /*@bfbba@*/
#define PPC_PCFGR510_POD	(*(volatile uint_io8_t*)0xB7200AAE)  /*@bfbba@*/
#define PPC_PCFGR510_POE	(*(volatile uint_io8_t*)0xB7200AAF)  /*@bfbba@*/

#define PPC_PCFGR511	(PPC.unPCFGR511.u16Register)  /*@rg@*/
#define PPC_PCFGR511_POF	(PPC.unPCFGR511.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR511_NFE	(*(volatile uint_io8_t*)0xB7200AB5)  /*@bfbba@*/
#define PPC_PCFGR511_ODR	(PPC.unPCFGR511.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR511_PDE	(*(volatile uint_io8_t*)0xB7200AB8)  /*@bfbba@*/
#define PPC_PCFGR511_PUE	(*(volatile uint_io8_t*)0xB7200AB9)  /*@bfbba@*/
#define PPC_PCFGR511_PIL	(PPC.unPCFGR511.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR511_PIE	(*(volatile uint_io8_t*)0xB7200ABC)  /*@bfbba@*/
#define PPC_PCFGR511_PID	(*(volatile uint_io8_t*)0xB7200ABD)  /*@bfbba@*/
#define PPC_PCFGR511_POD	(*(volatile uint_io8_t*)0xB7200ABE)  /*@bfbba@*/
#define PPC_PCFGR511_POE	(*(volatile uint_io8_t*)0xB7200ABF)  /*@bfbba@*/

#define PPC_PCFGR512	(PPC.unPCFGR512.u16Register)  /*@rg@*/
#define PPC_PCFGR512_POF	(PPC.unPCFGR512.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR512_NFE	(*(volatile uint_io8_t*)0xB7200AC5)  /*@bfbba@*/
#define PPC_PCFGR512_ODR	(PPC.unPCFGR512.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR512_PDE	(*(volatile uint_io8_t*)0xB7200AC8)  /*@bfbba@*/
#define PPC_PCFGR512_PUE	(*(volatile uint_io8_t*)0xB7200AC9)  /*@bfbba@*/
#define PPC_PCFGR512_PIL	(PPC.unPCFGR512.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR512_PIE	(*(volatile uint_io8_t*)0xB7200ACC)  /*@bfbba@*/
#define PPC_PCFGR512_PID	(*(volatile uint_io8_t*)0xB7200ACD)  /*@bfbba@*/
#define PPC_PCFGR512_POD	(*(volatile uint_io8_t*)0xB7200ACE)  /*@bfbba@*/
#define PPC_PCFGR512_POE	(*(volatile uint_io8_t*)0xB7200ACF)  /*@bfbba@*/

#define PPC_PCFGR513	(PPC.unPCFGR513.u16Register)  /*@rg@*/
#define PPC_PCFGR513_POF	(PPC.unPCFGR513.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR513_NFE	(*(volatile uint_io8_t*)0xB7200AD5)  /*@bfbba@*/
#define PPC_PCFGR513_ODR	(PPC.unPCFGR513.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR513_PDE	(*(volatile uint_io8_t*)0xB7200AD8)  /*@bfbba@*/
#define PPC_PCFGR513_PUE	(*(volatile uint_io8_t*)0xB7200AD9)  /*@bfbba@*/
#define PPC_PCFGR513_PIL	(PPC.unPCFGR513.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR513_PIE	(*(volatile uint_io8_t*)0xB7200ADC)  /*@bfbba@*/
#define PPC_PCFGR513_PID	(*(volatile uint_io8_t*)0xB7200ADD)  /*@bfbba@*/
#define PPC_PCFGR513_POD	(*(volatile uint_io8_t*)0xB7200ADE)  /*@bfbba@*/
#define PPC_PCFGR513_POE	(*(volatile uint_io8_t*)0xB7200ADF)  /*@bfbba@*/

#define PPC_PCFGR514	(PPC.unPCFGR514.u16Register)  /*@rg@*/
#define PPC_PCFGR514_POF	(PPC.unPCFGR514.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR514_NFE	(*(volatile uint_io8_t*)0xB7200AE5)  /*@bfbba@*/
#define PPC_PCFGR514_ODR	(PPC.unPCFGR514.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR514_PDE	(*(volatile uint_io8_t*)0xB7200AE8)  /*@bfbba@*/
#define PPC_PCFGR514_PUE	(*(volatile uint_io8_t*)0xB7200AE9)  /*@bfbba@*/
#define PPC_PCFGR514_PIL	(PPC.unPCFGR514.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR514_PIE	(*(volatile uint_io8_t*)0xB7200AEC)  /*@bfbba@*/
#define PPC_PCFGR514_PID	(*(volatile uint_io8_t*)0xB7200AED)  /*@bfbba@*/
#define PPC_PCFGR514_POD	(*(volatile uint_io8_t*)0xB7200AEE)  /*@bfbba@*/
#define PPC_PCFGR514_POE	(*(volatile uint_io8_t*)0xB7200AEF)  /*@bfbba@*/

#define PPC_PCFGR515	(PPC.unPCFGR515.u16Register)  /*@rg@*/
#define PPC_PCFGR515_POF	(PPC.unPCFGR515.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR515_NFE	(*(volatile uint_io8_t*)0xB7200AF5)  /*@bfbba@*/
#define PPC_PCFGR515_ODR	(PPC.unPCFGR515.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR515_PDE	(*(volatile uint_io8_t*)0xB7200AF8)  /*@bfbba@*/
#define PPC_PCFGR515_PUE	(*(volatile uint_io8_t*)0xB7200AF9)  /*@bfbba@*/
#define PPC_PCFGR515_PIL	(PPC.unPCFGR515.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR515_PIE	(*(volatile uint_io8_t*)0xB7200AFC)  /*@bfbba@*/
#define PPC_PCFGR515_PID	(*(volatile uint_io8_t*)0xB7200AFD)  /*@bfbba@*/
#define PPC_PCFGR515_POD	(*(volatile uint_io8_t*)0xB7200AFE)  /*@bfbba@*/
#define PPC_PCFGR515_POE	(*(volatile uint_io8_t*)0xB7200AFF)  /*@bfbba@*/

#define PPC_PCFGR516	(PPC.unPCFGR516.u16Register)  /*@rg@*/
#define PPC_PCFGR516_POF	(PPC.unPCFGR516.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR516_NFE	(*(volatile uint_io8_t*)0xB7200B05)  /*@bfbba@*/
#define PPC_PCFGR516_ODR	(PPC.unPCFGR516.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR516_PDE	(*(volatile uint_io8_t*)0xB7200B08)  /*@bfbba@*/
#define PPC_PCFGR516_PUE	(*(volatile uint_io8_t*)0xB7200B09)  /*@bfbba@*/
#define PPC_PCFGR516_PIL	(PPC.unPCFGR516.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR516_PIE	(*(volatile uint_io8_t*)0xB7200B0C)  /*@bfbba@*/
#define PPC_PCFGR516_PID	(*(volatile uint_io8_t*)0xB7200B0D)  /*@bfbba@*/
#define PPC_PCFGR516_POD	(*(volatile uint_io8_t*)0xB7200B0E)  /*@bfbba@*/
#define PPC_PCFGR516_POE	(*(volatile uint_io8_t*)0xB7200B0F)  /*@bfbba@*/

#define PPC_PCFGR517	(PPC.unPCFGR517.u16Register)  /*@rg@*/
#define PPC_PCFGR517_POF	(PPC.unPCFGR517.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR517_NFE	(*(volatile uint_io8_t*)0xB7200B15)  /*@bfbba@*/
#define PPC_PCFGR517_ODR	(PPC.unPCFGR517.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR517_PDE	(*(volatile uint_io8_t*)0xB7200B18)  /*@bfbba@*/
#define PPC_PCFGR517_PUE	(*(volatile uint_io8_t*)0xB7200B19)  /*@bfbba@*/
#define PPC_PCFGR517_PIL	(PPC.unPCFGR517.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR517_PIE	(*(volatile uint_io8_t*)0xB7200B1C)  /*@bfbba@*/
#define PPC_PCFGR517_PID	(*(volatile uint_io8_t*)0xB7200B1D)  /*@bfbba@*/
#define PPC_PCFGR517_POD	(*(volatile uint_io8_t*)0xB7200B1E)  /*@bfbba@*/
#define PPC_PCFGR517_POE	(*(volatile uint_io8_t*)0xB7200B1F)  /*@bfbba@*/

#define PPC_PCFGR518	(PPC.unPCFGR518.u16Register)  /*@rg@*/
#define PPC_PCFGR518_POF	(PPC.unPCFGR518.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR518_NFE	(*(volatile uint_io8_t*)0xB7200B25)  /*@bfbba@*/
#define PPC_PCFGR518_ODR	(PPC.unPCFGR518.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR518_PDE	(*(volatile uint_io8_t*)0xB7200B28)  /*@bfbba@*/
#define PPC_PCFGR518_PUE	(*(volatile uint_io8_t*)0xB7200B29)  /*@bfbba@*/
#define PPC_PCFGR518_PIL	(PPC.unPCFGR518.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR518_PIE	(*(volatile uint_io8_t*)0xB7200B2C)  /*@bfbba@*/
#define PPC_PCFGR518_PID	(*(volatile uint_io8_t*)0xB7200B2D)  /*@bfbba@*/
#define PPC_PCFGR518_POD	(*(volatile uint_io8_t*)0xB7200B2E)  /*@bfbba@*/
#define PPC_PCFGR518_POE	(*(volatile uint_io8_t*)0xB7200B2F)  /*@bfbba@*/

#define PPC_PCFGR519	(PPC.unPCFGR519.u16Register)  /*@rg@*/
#define PPC_PCFGR519_POF	(PPC.unPCFGR519.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR519_NFE	(*(volatile uint_io8_t*)0xB7200B35)  /*@bfbba@*/
#define PPC_PCFGR519_ODR	(PPC.unPCFGR519.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR519_PDE	(*(volatile uint_io8_t*)0xB7200B38)  /*@bfbba@*/
#define PPC_PCFGR519_PUE	(*(volatile uint_io8_t*)0xB7200B39)  /*@bfbba@*/
#define PPC_PCFGR519_PIL	(PPC.unPCFGR519.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR519_PIE	(*(volatile uint_io8_t*)0xB7200B3C)  /*@bfbba@*/
#define PPC_PCFGR519_PID	(*(volatile uint_io8_t*)0xB7200B3D)  /*@bfbba@*/
#define PPC_PCFGR519_POD	(*(volatile uint_io8_t*)0xB7200B3E)  /*@bfbba@*/
#define PPC_PCFGR519_POE	(*(volatile uint_io8_t*)0xB7200B3F)  /*@bfbba@*/

#define PPC_PCFGR520	(PPC.unPCFGR520.u16Register)  /*@rg@*/
#define PPC_PCFGR520_POF	(PPC.unPCFGR520.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR520_NFE	(*(volatile uint_io8_t*)0xB7200B45)  /*@bfbba@*/
#define PPC_PCFGR520_ODR	(PPC.unPCFGR520.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR520_PDE	(*(volatile uint_io8_t*)0xB7200B48)  /*@bfbba@*/
#define PPC_PCFGR520_PUE	(*(volatile uint_io8_t*)0xB7200B49)  /*@bfbba@*/
#define PPC_PCFGR520_PIL	(PPC.unPCFGR520.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR520_PIE	(*(volatile uint_io8_t*)0xB7200B4C)  /*@bfbba@*/
#define PPC_PCFGR520_PID	(*(volatile uint_io8_t*)0xB7200B4D)  /*@bfbba@*/
#define PPC_PCFGR520_POD	(*(volatile uint_io8_t*)0xB7200B4E)  /*@bfbba@*/
#define PPC_PCFGR520_POE	(*(volatile uint_io8_t*)0xB7200B4F)  /*@bfbba@*/

#define PPC_PCFGR521	(PPC.unPCFGR521.u16Register)  /*@rg@*/
#define PPC_PCFGR521_POF	(PPC.unPCFGR521.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR521_NFE	(*(volatile uint_io8_t*)0xB7200B55)  /*@bfbba@*/
#define PPC_PCFGR521_ODR	(PPC.unPCFGR521.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR521_PDE	(*(volatile uint_io8_t*)0xB7200B58)  /*@bfbba@*/
#define PPC_PCFGR521_PUE	(*(volatile uint_io8_t*)0xB7200B59)  /*@bfbba@*/
#define PPC_PCFGR521_PIL	(PPC.unPCFGR521.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR521_PIE	(*(volatile uint_io8_t*)0xB7200B5C)  /*@bfbba@*/
#define PPC_PCFGR521_PID	(*(volatile uint_io8_t*)0xB7200B5D)  /*@bfbba@*/
#define PPC_PCFGR521_POD	(*(volatile uint_io8_t*)0xB7200B5E)  /*@bfbba@*/
#define PPC_PCFGR521_POE	(*(volatile uint_io8_t*)0xB7200B5F)  /*@bfbba@*/

#define PPC_PCFGR522	(PPC.unPCFGR522.u16Register)  /*@rg@*/
#define PPC_PCFGR522_POF	(PPC.unPCFGR522.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR522_NFE	(*(volatile uint_io8_t*)0xB7200B65)  /*@bfbba@*/
#define PPC_PCFGR522_ODR	(PPC.unPCFGR522.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR522_PDE	(*(volatile uint_io8_t*)0xB7200B68)  /*@bfbba@*/
#define PPC_PCFGR522_PUE	(*(volatile uint_io8_t*)0xB7200B69)  /*@bfbba@*/
#define PPC_PCFGR522_PIL	(PPC.unPCFGR522.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR522_PIE	(*(volatile uint_io8_t*)0xB7200B6C)  /*@bfbba@*/
#define PPC_PCFGR522_PID	(*(volatile uint_io8_t*)0xB7200B6D)  /*@bfbba@*/
#define PPC_PCFGR522_POD	(*(volatile uint_io8_t*)0xB7200B6E)  /*@bfbba@*/
#define PPC_PCFGR522_POE	(*(volatile uint_io8_t*)0xB7200B6F)  /*@bfbba@*/

#define PPC_PCFGR523	(PPC.unPCFGR523.u16Register)  /*@rg@*/
#define PPC_PCFGR523_POF	(PPC.unPCFGR523.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR523_NFE	(*(volatile uint_io8_t*)0xB7200B75)  /*@bfbba@*/
#define PPC_PCFGR523_ODR	(PPC.unPCFGR523.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR523_PDE	(*(volatile uint_io8_t*)0xB7200B78)  /*@bfbba@*/
#define PPC_PCFGR523_PUE	(*(volatile uint_io8_t*)0xB7200B79)  /*@bfbba@*/
#define PPC_PCFGR523_PIL	(PPC.unPCFGR523.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR523_PIE	(*(volatile uint_io8_t*)0xB7200B7C)  /*@bfbba@*/
#define PPC_PCFGR523_PID	(*(volatile uint_io8_t*)0xB7200B7D)  /*@bfbba@*/
#define PPC_PCFGR523_POD	(*(volatile uint_io8_t*)0xB7200B7E)  /*@bfbba@*/
#define PPC_PCFGR523_POE	(*(volatile uint_io8_t*)0xB7200B7F)  /*@bfbba@*/

#define PPC_PCFGR524	(PPC.unPCFGR524.u16Register)  /*@rg@*/
#define PPC_PCFGR524_POF	(PPC.unPCFGR524.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR524_NFE	(*(volatile uint_io8_t*)0xB7200B85)  /*@bfbba@*/
#define PPC_PCFGR524_ODR	(PPC.unPCFGR524.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR524_PDE	(*(volatile uint_io8_t*)0xB7200B88)  /*@bfbba@*/
#define PPC_PCFGR524_PUE	(*(volatile uint_io8_t*)0xB7200B89)  /*@bfbba@*/
#define PPC_PCFGR524_PIL	(PPC.unPCFGR524.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR524_PIE	(*(volatile uint_io8_t*)0xB7200B8C)  /*@bfbba@*/
#define PPC_PCFGR524_PID	(*(volatile uint_io8_t*)0xB7200B8D)  /*@bfbba@*/
#define PPC_PCFGR524_POD	(*(volatile uint_io8_t*)0xB7200B8E)  /*@bfbba@*/
#define PPC_PCFGR524_POE	(*(volatile uint_io8_t*)0xB7200B8F)  /*@bfbba@*/

#define PPC_PCFGR525	(PPC.unPCFGR525.u16Register)  /*@rg@*/
#define PPC_PCFGR525_POF	(PPC.unPCFGR525.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR525_NFE	(*(volatile uint_io8_t*)0xB7200B95)  /*@bfbba@*/
#define PPC_PCFGR525_ODR	(PPC.unPCFGR525.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR525_PDE	(*(volatile uint_io8_t*)0xB7200B98)  /*@bfbba@*/
#define PPC_PCFGR525_PUE	(*(volatile uint_io8_t*)0xB7200B99)  /*@bfbba@*/
#define PPC_PCFGR525_PIL	(PPC.unPCFGR525.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR525_PIE	(*(volatile uint_io8_t*)0xB7200B9C)  /*@bfbba@*/
#define PPC_PCFGR525_PID	(*(volatile uint_io8_t*)0xB7200B9D)  /*@bfbba@*/
#define PPC_PCFGR525_POD	(*(volatile uint_io8_t*)0xB7200B9E)  /*@bfbba@*/
#define PPC_PCFGR525_POE	(*(volatile uint_io8_t*)0xB7200B9F)  /*@bfbba@*/

#define PPC_PCFGR526	(PPC.unPCFGR526.u16Register)  /*@rg@*/
#define PPC_PCFGR526_POF	(PPC.unPCFGR526.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR526_NFE	(*(volatile uint_io8_t*)0xB7200BA5)  /*@bfbba@*/
#define PPC_PCFGR526_ODR	(PPC.unPCFGR526.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR526_PDE	(*(volatile uint_io8_t*)0xB7200BA8)  /*@bfbba@*/
#define PPC_PCFGR526_PUE	(*(volatile uint_io8_t*)0xB7200BA9)  /*@bfbba@*/
#define PPC_PCFGR526_PIL	(PPC.unPCFGR526.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR526_PIE	(*(volatile uint_io8_t*)0xB7200BAC)  /*@bfbba@*/
#define PPC_PCFGR526_PID	(*(volatile uint_io8_t*)0xB7200BAD)  /*@bfbba@*/
#define PPC_PCFGR526_POD	(*(volatile uint_io8_t*)0xB7200BAE)  /*@bfbba@*/
#define PPC_PCFGR526_POE	(*(volatile uint_io8_t*)0xB7200BAF)  /*@bfbba@*/

#define PPC_PCFGR527	(PPC.unPCFGR527.u16Register)  /*@rg@*/
#define PPC_PCFGR527_POF	(PPC.unPCFGR527.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR527_NFE	(*(volatile uint_io8_t*)0xB7200BB5)  /*@bfbba@*/
#define PPC_PCFGR527_ODR	(PPC.unPCFGR527.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR527_PDE	(*(volatile uint_io8_t*)0xB7200BB8)  /*@bfbba@*/
#define PPC_PCFGR527_PUE	(*(volatile uint_io8_t*)0xB7200BB9)  /*@bfbba@*/
#define PPC_PCFGR527_PIL	(PPC.unPCFGR527.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR527_PIE	(*(volatile uint_io8_t*)0xB7200BBC)  /*@bfbba@*/
#define PPC_PCFGR527_PID	(*(volatile uint_io8_t*)0xB7200BBD)  /*@bfbba@*/
#define PPC_PCFGR527_POD	(*(volatile uint_io8_t*)0xB7200BBE)  /*@bfbba@*/
#define PPC_PCFGR527_POE	(*(volatile uint_io8_t*)0xB7200BBF)  /*@bfbba@*/

#define PPC_PCFGR528	(PPC.unPCFGR528.u16Register)  /*@rg@*/
#define PPC_PCFGR528_POF	(PPC.unPCFGR528.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR528_NFE	(*(volatile uint_io8_t*)0xB7200BC5)  /*@bfbba@*/
#define PPC_PCFGR528_ODR	(PPC.unPCFGR528.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR528_PDE	(*(volatile uint_io8_t*)0xB7200BC8)  /*@bfbba@*/
#define PPC_PCFGR528_PUE	(*(volatile uint_io8_t*)0xB7200BC9)  /*@bfbba@*/
#define PPC_PCFGR528_PIL	(PPC.unPCFGR528.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR528_PIE	(*(volatile uint_io8_t*)0xB7200BCC)  /*@bfbba@*/
#define PPC_PCFGR528_PID	(*(volatile uint_io8_t*)0xB7200BCD)  /*@bfbba@*/
#define PPC_PCFGR528_POD	(*(volatile uint_io8_t*)0xB7200BCE)  /*@bfbba@*/
#define PPC_PCFGR528_POE	(*(volatile uint_io8_t*)0xB7200BCF)  /*@bfbba@*/

#define PPC_PCFGR529	(PPC.unPCFGR529.u16Register)  /*@rg@*/
#define PPC_PCFGR529_POF	(PPC.unPCFGR529.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR529_NFE	(*(volatile uint_io8_t*)0xB7200BD5)  /*@bfbba@*/
#define PPC_PCFGR529_ODR	(PPC.unPCFGR529.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR529_PDE	(*(volatile uint_io8_t*)0xB7200BD8)  /*@bfbba@*/
#define PPC_PCFGR529_PUE	(*(volatile uint_io8_t*)0xB7200BD9)  /*@bfbba@*/
#define PPC_PCFGR529_PIL	(PPC.unPCFGR529.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR529_PIE	(*(volatile uint_io8_t*)0xB7200BDC)  /*@bfbba@*/
#define PPC_PCFGR529_PID	(*(volatile uint_io8_t*)0xB7200BDD)  /*@bfbba@*/
#define PPC_PCFGR529_POD	(*(volatile uint_io8_t*)0xB7200BDE)  /*@bfbba@*/
#define PPC_PCFGR529_POE	(*(volatile uint_io8_t*)0xB7200BDF)  /*@bfbba@*/

#define PPC_PCFGR530	(PPC.unPCFGR530.u16Register)  /*@rg@*/
#define PPC_PCFGR530_POF	(PPC.unPCFGR530.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR530_NFE	(*(volatile uint_io8_t*)0xB7200BE5)  /*@bfbba@*/
#define PPC_PCFGR530_ODR	(PPC.unPCFGR530.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR530_PDE	(*(volatile uint_io8_t*)0xB7200BE8)  /*@bfbba@*/
#define PPC_PCFGR530_PUE	(*(volatile uint_io8_t*)0xB7200BE9)  /*@bfbba@*/
#define PPC_PCFGR530_PIL	(PPC.unPCFGR530.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR530_PIE	(*(volatile uint_io8_t*)0xB7200BEC)  /*@bfbba@*/
#define PPC_PCFGR530_PID	(*(volatile uint_io8_t*)0xB7200BED)  /*@bfbba@*/
#define PPC_PCFGR530_POD	(*(volatile uint_io8_t*)0xB7200BEE)  /*@bfbba@*/
#define PPC_PCFGR530_POE	(*(volatile uint_io8_t*)0xB7200BEF)  /*@bfbba@*/

#define PPC_PCFGR531	(PPC.unPCFGR531.u16Register)  /*@rg@*/
#define PPC_PCFGR531_POF	(PPC.unPCFGR531.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR531_NFE	(*(volatile uint_io8_t*)0xB7200BF5)  /*@bfbba@*/
#define PPC_PCFGR531_ODR	(PPC.unPCFGR531.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR531_PDE	(*(volatile uint_io8_t*)0xB7200BF8)  /*@bfbba@*/
#define PPC_PCFGR531_PUE	(*(volatile uint_io8_t*)0xB7200BF9)  /*@bfbba@*/
#define PPC_PCFGR531_PIL	(PPC.unPCFGR531.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR531_PIE	(*(volatile uint_io8_t*)0xB7200BFC)  /*@bfbba@*/
#define PPC_PCFGR531_PID	(*(volatile uint_io8_t*)0xB7200BFD)  /*@bfbba@*/
#define PPC_PCFGR531_POD	(*(volatile uint_io8_t*)0xB7200BFE)  /*@bfbba@*/
#define PPC_PCFGR531_POE	(*(volatile uint_io8_t*)0xB7200BFF)  /*@bfbba@*/

#define PPC_PCFGR600	(PPC.unPCFGR600.u16Register)  /*@rg@*/
#define PPC_PCFGR600_POF	(PPC.unPCFGR600.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR600_NFE	(*(volatile uint_io8_t*)0xB7200C05)  /*@bfbba@*/
#define PPC_PCFGR600_ODR	(PPC.unPCFGR600.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR600_PDE	(*(volatile uint_io8_t*)0xB7200C08)  /*@bfbba@*/
#define PPC_PCFGR600_PUE	(*(volatile uint_io8_t*)0xB7200C09)  /*@bfbba@*/
#define PPC_PCFGR600_PIL	(PPC.unPCFGR600.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR600_PIE	(*(volatile uint_io8_t*)0xB7200C0C)  /*@bfbba@*/
#define PPC_PCFGR600_PID	(*(volatile uint_io8_t*)0xB7200C0D)  /*@bfbba@*/
#define PPC_PCFGR600_POD	(*(volatile uint_io8_t*)0xB7200C0E)  /*@bfbba@*/
#define PPC_PCFGR600_POE	(*(volatile uint_io8_t*)0xB7200C0F)  /*@bfbba@*/

#define PPC_PCFGR601	(PPC.unPCFGR601.u16Register)  /*@rg@*/
#define PPC_PCFGR601_POF	(PPC.unPCFGR601.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR601_NFE	(*(volatile uint_io8_t*)0xB7200C15)  /*@bfbba@*/
#define PPC_PCFGR601_ODR	(PPC.unPCFGR601.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR601_PDE	(*(volatile uint_io8_t*)0xB7200C18)  /*@bfbba@*/
#define PPC_PCFGR601_PUE	(*(volatile uint_io8_t*)0xB7200C19)  /*@bfbba@*/
#define PPC_PCFGR601_PIL	(PPC.unPCFGR601.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR601_PIE	(*(volatile uint_io8_t*)0xB7200C1C)  /*@bfbba@*/
#define PPC_PCFGR601_PID	(*(volatile uint_io8_t*)0xB7200C1D)  /*@bfbba@*/
#define PPC_PCFGR601_POD	(*(volatile uint_io8_t*)0xB7200C1E)  /*@bfbba@*/
#define PPC_PCFGR601_POE	(*(volatile uint_io8_t*)0xB7200C1F)  /*@bfbba@*/

#define PPC_PCFGR602	(PPC.unPCFGR602.u16Register)  /*@rg@*/
#define PPC_PCFGR602_POF	(PPC.unPCFGR602.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR602_NFE	(*(volatile uint_io8_t*)0xB7200C25)  /*@bfbba@*/
#define PPC_PCFGR602_ODR	(PPC.unPCFGR602.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR602_PDE	(*(volatile uint_io8_t*)0xB7200C28)  /*@bfbba@*/
#define PPC_PCFGR602_PUE	(*(volatile uint_io8_t*)0xB7200C29)  /*@bfbba@*/
#define PPC_PCFGR602_PIL	(PPC.unPCFGR602.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR602_PIE	(*(volatile uint_io8_t*)0xB7200C2C)  /*@bfbba@*/
#define PPC_PCFGR602_PID	(*(volatile uint_io8_t*)0xB7200C2D)  /*@bfbba@*/
#define PPC_PCFGR602_POD	(*(volatile uint_io8_t*)0xB7200C2E)  /*@bfbba@*/
#define PPC_PCFGR602_POE	(*(volatile uint_io8_t*)0xB7200C2F)  /*@bfbba@*/

#define PPC_PCFGR603	(PPC.unPCFGR603.u16Register)  /*@rg@*/
#define PPC_PCFGR603_POF	(PPC.unPCFGR603.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR603_NFE	(*(volatile uint_io8_t*)0xB7200C35)  /*@bfbba@*/
#define PPC_PCFGR603_ODR	(PPC.unPCFGR603.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR603_PDE	(*(volatile uint_io8_t*)0xB7200C38)  /*@bfbba@*/
#define PPC_PCFGR603_PUE	(*(volatile uint_io8_t*)0xB7200C39)  /*@bfbba@*/
#define PPC_PCFGR603_PIL	(PPC.unPCFGR603.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR603_PIE	(*(volatile uint_io8_t*)0xB7200C3C)  /*@bfbba@*/
#define PPC_PCFGR603_PID	(*(volatile uint_io8_t*)0xB7200C3D)  /*@bfbba@*/
#define PPC_PCFGR603_POD	(*(volatile uint_io8_t*)0xB7200C3E)  /*@bfbba@*/
#define PPC_PCFGR603_POE	(*(volatile uint_io8_t*)0xB7200C3F)  /*@bfbba@*/

#define PPC_PCFGR604	(PPC.unPCFGR604.u16Register)  /*@rg@*/
#define PPC_PCFGR604_POF	(PPC.unPCFGR604.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR604_NFE	(*(volatile uint_io8_t*)0xB7200C45)  /*@bfbba@*/
#define PPC_PCFGR604_ODR	(PPC.unPCFGR604.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR604_PDE	(*(volatile uint_io8_t*)0xB7200C48)  /*@bfbba@*/
#define PPC_PCFGR604_PUE	(*(volatile uint_io8_t*)0xB7200C49)  /*@bfbba@*/
#define PPC_PCFGR604_PIL	(PPC.unPCFGR604.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR604_PIE	(*(volatile uint_io8_t*)0xB7200C4C)  /*@bfbba@*/
#define PPC_PCFGR604_PID	(*(volatile uint_io8_t*)0xB7200C4D)  /*@bfbba@*/
#define PPC_PCFGR604_POD	(*(volatile uint_io8_t*)0xB7200C4E)  /*@bfbba@*/
#define PPC_PCFGR604_POE	(*(volatile uint_io8_t*)0xB7200C4F)  /*@bfbba@*/

#define PPC_PCFGR605	(PPC.unPCFGR605.u16Register)  /*@rg@*/
#define PPC_PCFGR605_POF	(PPC.unPCFGR605.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR605_NFE	(*(volatile uint_io8_t*)0xB7200C55)  /*@bfbba@*/
#define PPC_PCFGR605_ODR	(PPC.unPCFGR605.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR605_PDE	(*(volatile uint_io8_t*)0xB7200C58)  /*@bfbba@*/
#define PPC_PCFGR605_PUE	(*(volatile uint_io8_t*)0xB7200C59)  /*@bfbba@*/
#define PPC_PCFGR605_PIL	(PPC.unPCFGR605.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR605_PIE	(*(volatile uint_io8_t*)0xB7200C5C)  /*@bfbba@*/
#define PPC_PCFGR605_PID	(*(volatile uint_io8_t*)0xB7200C5D)  /*@bfbba@*/
#define PPC_PCFGR605_POD	(*(volatile uint_io8_t*)0xB7200C5E)  /*@bfbba@*/
#define PPC_PCFGR605_POE	(*(volatile uint_io8_t*)0xB7200C5F)  /*@bfbba@*/

#define PPC_PCFGR606	(PPC.unPCFGR606.u16Register)  /*@rg@*/
#define PPC_PCFGR606_POF	(PPC.unPCFGR606.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR606_NFE	(*(volatile uint_io8_t*)0xB7200C65)  /*@bfbba@*/
#define PPC_PCFGR606_ODR	(PPC.unPCFGR606.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR606_PDE	(*(volatile uint_io8_t*)0xB7200C68)  /*@bfbba@*/
#define PPC_PCFGR606_PUE	(*(volatile uint_io8_t*)0xB7200C69)  /*@bfbba@*/
#define PPC_PCFGR606_PIL	(PPC.unPCFGR606.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR606_PIE	(*(volatile uint_io8_t*)0xB7200C6C)  /*@bfbba@*/
#define PPC_PCFGR606_PID	(*(volatile uint_io8_t*)0xB7200C6D)  /*@bfbba@*/
#define PPC_PCFGR606_POD	(*(volatile uint_io8_t*)0xB7200C6E)  /*@bfbba@*/
#define PPC_PCFGR606_POE	(*(volatile uint_io8_t*)0xB7200C6F)  /*@bfbba@*/

#define PPC_PCFGR607	(PPC.unPCFGR607.u16Register)  /*@rg@*/
#define PPC_PCFGR607_POF	(PPC.unPCFGR607.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR607_NFE	(*(volatile uint_io8_t*)0xB7200C75)  /*@bfbba@*/
#define PPC_PCFGR607_ODR	(PPC.unPCFGR607.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR607_PDE	(*(volatile uint_io8_t*)0xB7200C78)  /*@bfbba@*/
#define PPC_PCFGR607_PUE	(*(volatile uint_io8_t*)0xB7200C79)  /*@bfbba@*/
#define PPC_PCFGR607_PIL	(PPC.unPCFGR607.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR607_PIE	(*(volatile uint_io8_t*)0xB7200C7C)  /*@bfbba@*/
#define PPC_PCFGR607_PID	(*(volatile uint_io8_t*)0xB7200C7D)  /*@bfbba@*/
#define PPC_PCFGR607_POD	(*(volatile uint_io8_t*)0xB7200C7E)  /*@bfbba@*/
#define PPC_PCFGR607_POE	(*(volatile uint_io8_t*)0xB7200C7F)  /*@bfbba@*/

#define PPC_PCFGR608	(PPC.unPCFGR608.u16Register)  /*@rg@*/
#define PPC_PCFGR608_POF	(PPC.unPCFGR608.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR608_NFE	(*(volatile uint_io8_t*)0xB7200C85)  /*@bfbba@*/
#define PPC_PCFGR608_ODR	(PPC.unPCFGR608.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR608_PDE	(*(volatile uint_io8_t*)0xB7200C88)  /*@bfbba@*/
#define PPC_PCFGR608_PUE	(*(volatile uint_io8_t*)0xB7200C89)  /*@bfbba@*/
#define PPC_PCFGR608_PIL	(PPC.unPCFGR608.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR608_PIE	(*(volatile uint_io8_t*)0xB7200C8C)  /*@bfbba@*/
#define PPC_PCFGR608_PID	(*(volatile uint_io8_t*)0xB7200C8D)  /*@bfbba@*/
#define PPC_PCFGR608_POD	(*(volatile uint_io8_t*)0xB7200C8E)  /*@bfbba@*/
#define PPC_PCFGR608_POE	(*(volatile uint_io8_t*)0xB7200C8F)  /*@bfbba@*/

#define PPC_PCFGR609	(PPC.unPCFGR609.u16Register)  /*@rg@*/
#define PPC_PCFGR609_POF	(PPC.unPCFGR609.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR609_NFE	(*(volatile uint_io8_t*)0xB7200C95)  /*@bfbba@*/
#define PPC_PCFGR609_ODR	(PPC.unPCFGR609.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR609_PDE	(*(volatile uint_io8_t*)0xB7200C98)  /*@bfbba@*/
#define PPC_PCFGR609_PUE	(*(volatile uint_io8_t*)0xB7200C99)  /*@bfbba@*/
#define PPC_PCFGR609_PIL	(PPC.unPCFGR609.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR609_PIE	(*(volatile uint_io8_t*)0xB7200C9C)  /*@bfbba@*/
#define PPC_PCFGR609_PID	(*(volatile uint_io8_t*)0xB7200C9D)  /*@bfbba@*/
#define PPC_PCFGR609_POD	(*(volatile uint_io8_t*)0xB7200C9E)  /*@bfbba@*/
#define PPC_PCFGR609_POE	(*(volatile uint_io8_t*)0xB7200C9F)  /*@bfbba@*/

#define PPC_PCFGR610	(PPC.unPCFGR610.u16Register)  /*@rg@*/
#define PPC_PCFGR610_POF	(PPC.unPCFGR610.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR610_NFE	(*(volatile uint_io8_t*)0xB7200CA5)  /*@bfbba@*/
#define PPC_PCFGR610_ODR	(PPC.unPCFGR610.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR610_PDE	(*(volatile uint_io8_t*)0xB7200CA8)  /*@bfbba@*/
#define PPC_PCFGR610_PUE	(*(volatile uint_io8_t*)0xB7200CA9)  /*@bfbba@*/
#define PPC_PCFGR610_PIL	(PPC.unPCFGR610.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR610_PIE	(*(volatile uint_io8_t*)0xB7200CAC)  /*@bfbba@*/
#define PPC_PCFGR610_PID	(*(volatile uint_io8_t*)0xB7200CAD)  /*@bfbba@*/
#define PPC_PCFGR610_POD	(*(volatile uint_io8_t*)0xB7200CAE)  /*@bfbba@*/
#define PPC_PCFGR610_POE	(*(volatile uint_io8_t*)0xB7200CAF)  /*@bfbba@*/

#define PPC_PCFGR611	(PPC.unPCFGR611.u16Register)  /*@rg@*/
#define PPC_PCFGR611_POF	(PPC.unPCFGR611.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR611_NFE	(*(volatile uint_io8_t*)0xB7200CB5)  /*@bfbba@*/
#define PPC_PCFGR611_ODR	(PPC.unPCFGR611.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR611_PDE	(*(volatile uint_io8_t*)0xB7200CB8)  /*@bfbba@*/
#define PPC_PCFGR611_PUE	(*(volatile uint_io8_t*)0xB7200CB9)  /*@bfbba@*/
#define PPC_PCFGR611_PIL	(PPC.unPCFGR611.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR611_PIE	(*(volatile uint_io8_t*)0xB7200CBC)  /*@bfbba@*/
#define PPC_PCFGR611_PID	(*(volatile uint_io8_t*)0xB7200CBD)  /*@bfbba@*/
#define PPC_PCFGR611_POD	(*(volatile uint_io8_t*)0xB7200CBE)  /*@bfbba@*/
#define PPC_PCFGR611_POE	(*(volatile uint_io8_t*)0xB7200CBF)  /*@bfbba@*/

#define PPC_PCFGR612	(PPC.unPCFGR612.u16Register)  /*@rg@*/
#define PPC_PCFGR612_POF	(PPC.unPCFGR612.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR612_NFE	(*(volatile uint_io8_t*)0xB7200CC5)  /*@bfbba@*/
#define PPC_PCFGR612_ODR	(PPC.unPCFGR612.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR612_PDE	(*(volatile uint_io8_t*)0xB7200CC8)  /*@bfbba@*/
#define PPC_PCFGR612_PUE	(*(volatile uint_io8_t*)0xB7200CC9)  /*@bfbba@*/
#define PPC_PCFGR612_PIL	(PPC.unPCFGR612.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR612_PIE	(*(volatile uint_io8_t*)0xB7200CCC)  /*@bfbba@*/
#define PPC_PCFGR612_PID	(*(volatile uint_io8_t*)0xB7200CCD)  /*@bfbba@*/
#define PPC_PCFGR612_POD	(*(volatile uint_io8_t*)0xB7200CCE)  /*@bfbba@*/
#define PPC_PCFGR612_POE	(*(volatile uint_io8_t*)0xB7200CCF)  /*@bfbba@*/

#define PPC_PCFGR613	(PPC.unPCFGR613.u16Register)  /*@rg@*/
#define PPC_PCFGR613_POF	(PPC.unPCFGR613.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR613_NFE	(*(volatile uint_io8_t*)0xB7200CD5)  /*@bfbba@*/
#define PPC_PCFGR613_ODR	(PPC.unPCFGR613.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR613_PDE	(*(volatile uint_io8_t*)0xB7200CD8)  /*@bfbba@*/
#define PPC_PCFGR613_PUE	(*(volatile uint_io8_t*)0xB7200CD9)  /*@bfbba@*/
#define PPC_PCFGR613_PIL	(PPC.unPCFGR613.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR613_PIE	(*(volatile uint_io8_t*)0xB7200CDC)  /*@bfbba@*/
#define PPC_PCFGR613_PID	(*(volatile uint_io8_t*)0xB7200CDD)  /*@bfbba@*/
#define PPC_PCFGR613_POD	(*(volatile uint_io8_t*)0xB7200CDE)  /*@bfbba@*/
#define PPC_PCFGR613_POE	(*(volatile uint_io8_t*)0xB7200CDF)  /*@bfbba@*/

#define PPC_PCFGR614	(PPC.unPCFGR614.u16Register)  /*@rg@*/
#define PPC_PCFGR614_POF	(PPC.unPCFGR614.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR614_NFE	(*(volatile uint_io8_t*)0xB7200CE5)  /*@bfbba@*/
#define PPC_PCFGR614_ODR	(PPC.unPCFGR614.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR614_PDE	(*(volatile uint_io8_t*)0xB7200CE8)  /*@bfbba@*/
#define PPC_PCFGR614_PUE	(*(volatile uint_io8_t*)0xB7200CE9)  /*@bfbba@*/
#define PPC_PCFGR614_PIL	(PPC.unPCFGR614.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR614_PIE	(*(volatile uint_io8_t*)0xB7200CEC)  /*@bfbba@*/
#define PPC_PCFGR614_PID	(*(volatile uint_io8_t*)0xB7200CED)  /*@bfbba@*/
#define PPC_PCFGR614_POD	(*(volatile uint_io8_t*)0xB7200CEE)  /*@bfbba@*/
#define PPC_PCFGR614_POE	(*(volatile uint_io8_t*)0xB7200CEF)  /*@bfbba@*/

#define PPC_PCFGR615	(PPC.unPCFGR615.u16Register)  /*@rg@*/
#define PPC_PCFGR615_POF	(PPC.unPCFGR615.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR615_NFE	(*(volatile uint_io8_t*)0xB7200CF5)  /*@bfbba@*/
#define PPC_PCFGR615_ODR	(PPC.unPCFGR615.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR615_PDE	(*(volatile uint_io8_t*)0xB7200CF8)  /*@bfbba@*/
#define PPC_PCFGR615_PUE	(*(volatile uint_io8_t*)0xB7200CF9)  /*@bfbba@*/
#define PPC_PCFGR615_PIL	(PPC.unPCFGR615.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR615_PIE	(*(volatile uint_io8_t*)0xB7200CFC)  /*@bfbba@*/
#define PPC_PCFGR615_PID	(*(volatile uint_io8_t*)0xB7200CFD)  /*@bfbba@*/
#define PPC_PCFGR615_POD	(*(volatile uint_io8_t*)0xB7200CFE)  /*@bfbba@*/
#define PPC_PCFGR615_POE	(*(volatile uint_io8_t*)0xB7200CFF)  /*@bfbba@*/

#define PPC_PCFGR616	(PPC.unPCFGR616.u16Register)  /*@rg@*/
#define PPC_PCFGR616_POF	(PPC.unPCFGR616.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR616_NFE	(*(volatile uint_io8_t*)0xB7200D05)  /*@bfbba@*/
#define PPC_PCFGR616_ODR	(PPC.unPCFGR616.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR616_PDE	(*(volatile uint_io8_t*)0xB7200D08)  /*@bfbba@*/
#define PPC_PCFGR616_PUE	(*(volatile uint_io8_t*)0xB7200D09)  /*@bfbba@*/
#define PPC_PCFGR616_PIL	(PPC.unPCFGR616.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR616_PIE	(*(volatile uint_io8_t*)0xB7200D0C)  /*@bfbba@*/
#define PPC_PCFGR616_PID	(*(volatile uint_io8_t*)0xB7200D0D)  /*@bfbba@*/
#define PPC_PCFGR616_POD	(*(volatile uint_io8_t*)0xB7200D0E)  /*@bfbba@*/
#define PPC_PCFGR616_POE	(*(volatile uint_io8_t*)0xB7200D0F)  /*@bfbba@*/

#define PPC_PCFGR617	(PPC.unPCFGR617.u16Register)  /*@rg@*/
#define PPC_PCFGR617_POF	(PPC.unPCFGR617.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR617_NFE	(*(volatile uint_io8_t*)0xB7200D15)  /*@bfbba@*/
#define PPC_PCFGR617_ODR	(PPC.unPCFGR617.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR617_PDE	(*(volatile uint_io8_t*)0xB7200D18)  /*@bfbba@*/
#define PPC_PCFGR617_PUE	(*(volatile uint_io8_t*)0xB7200D19)  /*@bfbba@*/
#define PPC_PCFGR617_PIL	(PPC.unPCFGR617.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR617_PIE	(*(volatile uint_io8_t*)0xB7200D1C)  /*@bfbba@*/
#define PPC_PCFGR617_PID	(*(volatile uint_io8_t*)0xB7200D1D)  /*@bfbba@*/
#define PPC_PCFGR617_POD	(*(volatile uint_io8_t*)0xB7200D1E)  /*@bfbba@*/
#define PPC_PCFGR617_POE	(*(volatile uint_io8_t*)0xB7200D1F)  /*@bfbba@*/

#define PPC_PCFGR618	(PPC.unPCFGR618.u16Register)  /*@rg@*/
#define PPC_PCFGR618_POF	(PPC.unPCFGR618.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR618_NFE	(*(volatile uint_io8_t*)0xB7200D25)  /*@bfbba@*/
#define PPC_PCFGR618_ODR	(PPC.unPCFGR618.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR618_PDE	(*(volatile uint_io8_t*)0xB7200D28)  /*@bfbba@*/
#define PPC_PCFGR618_PUE	(*(volatile uint_io8_t*)0xB7200D29)  /*@bfbba@*/
#define PPC_PCFGR618_PIL	(PPC.unPCFGR618.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR618_PIE	(*(volatile uint_io8_t*)0xB7200D2C)  /*@bfbba@*/
#define PPC_PCFGR618_PID	(*(volatile uint_io8_t*)0xB7200D2D)  /*@bfbba@*/
#define PPC_PCFGR618_POD	(*(volatile uint_io8_t*)0xB7200D2E)  /*@bfbba@*/
#define PPC_PCFGR618_POE	(*(volatile uint_io8_t*)0xB7200D2F)  /*@bfbba@*/

#define PPC_PCFGR619	(PPC.unPCFGR619.u16Register)  /*@rg@*/
#define PPC_PCFGR619_POF	(PPC.unPCFGR619.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR619_NFE	(*(volatile uint_io8_t*)0xB7200D35)  /*@bfbba@*/
#define PPC_PCFGR619_ODR	(PPC.unPCFGR619.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR619_PDE	(*(volatile uint_io8_t*)0xB7200D38)  /*@bfbba@*/
#define PPC_PCFGR619_PUE	(*(volatile uint_io8_t*)0xB7200D39)  /*@bfbba@*/
#define PPC_PCFGR619_PIL	(PPC.unPCFGR619.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR619_PIE	(*(volatile uint_io8_t*)0xB7200D3C)  /*@bfbba@*/
#define PPC_PCFGR619_PID	(*(volatile uint_io8_t*)0xB7200D3D)  /*@bfbba@*/
#define PPC_PCFGR619_POD	(*(volatile uint_io8_t*)0xB7200D3E)  /*@bfbba@*/
#define PPC_PCFGR619_POE	(*(volatile uint_io8_t*)0xB7200D3F)  /*@bfbba@*/

#define PPC_PCFGR620	(PPC.unPCFGR620.u16Register)  /*@rg@*/
#define PPC_PCFGR620_POF	(PPC.unPCFGR620.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR620_NFE	(*(volatile uint_io8_t*)0xB7200D45)  /*@bfbba@*/
#define PPC_PCFGR620_ODR	(PPC.unPCFGR620.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR620_PDE	(*(volatile uint_io8_t*)0xB7200D48)  /*@bfbba@*/
#define PPC_PCFGR620_PUE	(*(volatile uint_io8_t*)0xB7200D49)  /*@bfbba@*/
#define PPC_PCFGR620_PIL	(PPC.unPCFGR620.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR620_PIE	(*(volatile uint_io8_t*)0xB7200D4C)  /*@bfbba@*/
#define PPC_PCFGR620_PID	(*(volatile uint_io8_t*)0xB7200D4D)  /*@bfbba@*/
#define PPC_PCFGR620_POD	(*(volatile uint_io8_t*)0xB7200D4E)  /*@bfbba@*/
#define PPC_PCFGR620_POE	(*(volatile uint_io8_t*)0xB7200D4F)  /*@bfbba@*/

#define PPC_PCFGR621	(PPC.unPCFGR621.u16Register)  /*@rg@*/
#define PPC_PCFGR621_POF	(PPC.unPCFGR621.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR621_NFE	(*(volatile uint_io8_t*)0xB7200D55)  /*@bfbba@*/
#define PPC_PCFGR621_ODR	(PPC.unPCFGR621.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR621_PDE	(*(volatile uint_io8_t*)0xB7200D58)  /*@bfbba@*/
#define PPC_PCFGR621_PUE	(*(volatile uint_io8_t*)0xB7200D59)  /*@bfbba@*/
#define PPC_PCFGR621_PIL	(PPC.unPCFGR621.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR621_PIE	(*(volatile uint_io8_t*)0xB7200D5C)  /*@bfbba@*/
#define PPC_PCFGR621_PID	(*(volatile uint_io8_t*)0xB7200D5D)  /*@bfbba@*/
#define PPC_PCFGR621_POD	(*(volatile uint_io8_t*)0xB7200D5E)  /*@bfbba@*/
#define PPC_PCFGR621_POE	(*(volatile uint_io8_t*)0xB7200D5F)  /*@bfbba@*/

#define PPC_PCFGR622	(PPC.unPCFGR622.u16Register)  /*@rg@*/
#define PPC_PCFGR622_POF	(PPC.unPCFGR622.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR622_NFE	(*(volatile uint_io8_t*)0xB7200D65)  /*@bfbba@*/
#define PPC_PCFGR622_ODR	(PPC.unPCFGR622.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR622_PDE	(*(volatile uint_io8_t*)0xB7200D68)  /*@bfbba@*/
#define PPC_PCFGR622_PUE	(*(volatile uint_io8_t*)0xB7200D69)  /*@bfbba@*/
#define PPC_PCFGR622_PIL	(PPC.unPCFGR622.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR622_PIE	(*(volatile uint_io8_t*)0xB7200D6C)  /*@bfbba@*/
#define PPC_PCFGR622_PID	(*(volatile uint_io8_t*)0xB7200D6D)  /*@bfbba@*/
#define PPC_PCFGR622_POD	(*(volatile uint_io8_t*)0xB7200D6E)  /*@bfbba@*/
#define PPC_PCFGR622_POE	(*(volatile uint_io8_t*)0xB7200D6F)  /*@bfbba@*/

#define PPC_PCFGR623	(PPC.unPCFGR623.u16Register)  /*@rg@*/
#define PPC_PCFGR623_POF	(PPC.unPCFGR623.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR623_NFE	(*(volatile uint_io8_t*)0xB7200D75)  /*@bfbba@*/
#define PPC_PCFGR623_ODR	(PPC.unPCFGR623.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR623_PDE	(*(volatile uint_io8_t*)0xB7200D78)  /*@bfbba@*/
#define PPC_PCFGR623_PUE	(*(volatile uint_io8_t*)0xB7200D79)  /*@bfbba@*/
#define PPC_PCFGR623_PIL	(PPC.unPCFGR623.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR623_PIE	(*(volatile uint_io8_t*)0xB7200D7C)  /*@bfbba@*/
#define PPC_PCFGR623_PID	(*(volatile uint_io8_t*)0xB7200D7D)  /*@bfbba@*/
#define PPC_PCFGR623_POD	(*(volatile uint_io8_t*)0xB7200D7E)  /*@bfbba@*/
#define PPC_PCFGR623_POE	(*(volatile uint_io8_t*)0xB7200D7F)  /*@bfbba@*/

#define PPC_PCFGR624	(PPC.unPCFGR624.u16Register)  /*@rg@*/
#define PPC_PCFGR624_POF	(PPC.unPCFGR624.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR624_NFE	(*(volatile uint_io8_t*)0xB7200D85)  /*@bfbba@*/
#define PPC_PCFGR624_ODR	(PPC.unPCFGR624.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR624_PDE	(*(volatile uint_io8_t*)0xB7200D88)  /*@bfbba@*/
#define PPC_PCFGR624_PUE	(*(volatile uint_io8_t*)0xB7200D89)  /*@bfbba@*/
#define PPC_PCFGR624_PIL	(PPC.unPCFGR624.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR624_PIE	(*(volatile uint_io8_t*)0xB7200D8C)  /*@bfbba@*/
#define PPC_PCFGR624_PID	(*(volatile uint_io8_t*)0xB7200D8D)  /*@bfbba@*/
#define PPC_PCFGR624_POD	(*(volatile uint_io8_t*)0xB7200D8E)  /*@bfbba@*/
#define PPC_PCFGR624_POE	(*(volatile uint_io8_t*)0xB7200D8F)  /*@bfbba@*/

#define PPC_PCFGR625	(PPC.unPCFGR625.u16Register)  /*@rg@*/
#define PPC_PCFGR625_POF	(PPC.unPCFGR625.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR625_NFE	(*(volatile uint_io8_t*)0xB7200D95)  /*@bfbba@*/
#define PPC_PCFGR625_ODR	(PPC.unPCFGR625.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR625_PDE	(*(volatile uint_io8_t*)0xB7200D98)  /*@bfbba@*/
#define PPC_PCFGR625_PUE	(*(volatile uint_io8_t*)0xB7200D99)  /*@bfbba@*/
#define PPC_PCFGR625_PIL	(PPC.unPCFGR625.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR625_PIE	(*(volatile uint_io8_t*)0xB7200D9C)  /*@bfbba@*/
#define PPC_PCFGR625_PID	(*(volatile uint_io8_t*)0xB7200D9D)  /*@bfbba@*/
#define PPC_PCFGR625_POD	(*(volatile uint_io8_t*)0xB7200D9E)  /*@bfbba@*/
#define PPC_PCFGR625_POE	(*(volatile uint_io8_t*)0xB7200D9F)  /*@bfbba@*/

#define PPC_PCFGR626	(PPC.unPCFGR626.u16Register)  /*@rg@*/
#define PPC_PCFGR626_POF	(PPC.unPCFGR626.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR626_NFE	(*(volatile uint_io8_t*)0xB7200DA5)  /*@bfbba@*/
#define PPC_PCFGR626_ODR	(PPC.unPCFGR626.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR626_PDE	(*(volatile uint_io8_t*)0xB7200DA8)  /*@bfbba@*/
#define PPC_PCFGR626_PUE	(*(volatile uint_io8_t*)0xB7200DA9)  /*@bfbba@*/
#define PPC_PCFGR626_PIL	(PPC.unPCFGR626.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR626_PIE	(*(volatile uint_io8_t*)0xB7200DAC)  /*@bfbba@*/
#define PPC_PCFGR626_PID	(*(volatile uint_io8_t*)0xB7200DAD)  /*@bfbba@*/
#define PPC_PCFGR626_POD	(*(volatile uint_io8_t*)0xB7200DAE)  /*@bfbba@*/
#define PPC_PCFGR626_POE	(*(volatile uint_io8_t*)0xB7200DAF)  /*@bfbba@*/

#define PPC_PCFGR627	(PPC.unPCFGR627.u16Register)  /*@rg@*/
#define PPC_PCFGR627_POF	(PPC.unPCFGR627.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR627_NFE	(*(volatile uint_io8_t*)0xB7200DB5)  /*@bfbba@*/
#define PPC_PCFGR627_ODR	(PPC.unPCFGR627.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR627_PDE	(*(volatile uint_io8_t*)0xB7200DB8)  /*@bfbba@*/
#define PPC_PCFGR627_PUE	(*(volatile uint_io8_t*)0xB7200DB9)  /*@bfbba@*/
#define PPC_PCFGR627_PIL	(PPC.unPCFGR627.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR627_PIE	(*(volatile uint_io8_t*)0xB7200DBC)  /*@bfbba@*/
#define PPC_PCFGR627_PID	(*(volatile uint_io8_t*)0xB7200DBD)  /*@bfbba@*/
#define PPC_PCFGR627_POD	(*(volatile uint_io8_t*)0xB7200DBE)  /*@bfbba@*/
#define PPC_PCFGR627_POE	(*(volatile uint_io8_t*)0xB7200DBF)  /*@bfbba@*/

#define PPC_PCFGR628	(PPC.unPCFGR628.u16Register)  /*@rg@*/
#define PPC_PCFGR628_POF	(PPC.unPCFGR628.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR628_NFE	(*(volatile uint_io8_t*)0xB7200DC5)  /*@bfbba@*/
#define PPC_PCFGR628_ODR	(PPC.unPCFGR628.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR628_PDE	(*(volatile uint_io8_t*)0xB7200DC8)  /*@bfbba@*/
#define PPC_PCFGR628_PUE	(*(volatile uint_io8_t*)0xB7200DC9)  /*@bfbba@*/
#define PPC_PCFGR628_PIL	(PPC.unPCFGR628.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR628_PIE	(*(volatile uint_io8_t*)0xB7200DCC)  /*@bfbba@*/
#define PPC_PCFGR628_PID	(*(volatile uint_io8_t*)0xB7200DCD)  /*@bfbba@*/
#define PPC_PCFGR628_POD	(*(volatile uint_io8_t*)0xB7200DCE)  /*@bfbba@*/
#define PPC_PCFGR628_POE	(*(volatile uint_io8_t*)0xB7200DCF)  /*@bfbba@*/

#define PPC_PCFGR629	(PPC.unPCFGR629.u16Register)  /*@rg@*/
#define PPC_PCFGR629_POF	(PPC.unPCFGR629.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR629_NFE	(*(volatile uint_io8_t*)0xB7200DD5)  /*@bfbba@*/
#define PPC_PCFGR629_ODR	(PPC.unPCFGR629.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR629_PDE	(*(volatile uint_io8_t*)0xB7200DD8)  /*@bfbba@*/
#define PPC_PCFGR629_PUE	(*(volatile uint_io8_t*)0xB7200DD9)  /*@bfbba@*/
#define PPC_PCFGR629_PIL	(PPC.unPCFGR629.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR629_PIE	(*(volatile uint_io8_t*)0xB7200DDC)  /*@bfbba@*/
#define PPC_PCFGR629_PID	(*(volatile uint_io8_t*)0xB7200DDD)  /*@bfbba@*/
#define PPC_PCFGR629_POD	(*(volatile uint_io8_t*)0xB7200DDE)  /*@bfbba@*/
#define PPC_PCFGR629_POE	(*(volatile uint_io8_t*)0xB7200DDF)  /*@bfbba@*/

#define PPC_PCFGR630	(PPC.unPCFGR630.u16Register)  /*@rg@*/
#define PPC_PCFGR630_POF	(PPC.unPCFGR630.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR630_NFE	(*(volatile uint_io8_t*)0xB7200DE5)  /*@bfbba@*/
#define PPC_PCFGR630_ODR	(PPC.unPCFGR630.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR630_PDE	(*(volatile uint_io8_t*)0xB7200DE8)  /*@bfbba@*/
#define PPC_PCFGR630_PUE	(*(volatile uint_io8_t*)0xB7200DE9)  /*@bfbba@*/
#define PPC_PCFGR630_PIL	(PPC.unPCFGR630.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR630_PIE	(*(volatile uint_io8_t*)0xB7200DEC)  /*@bfbba@*/
#define PPC_PCFGR630_PID	(*(volatile uint_io8_t*)0xB7200DED)  /*@bfbba@*/
#define PPC_PCFGR630_POD	(*(volatile uint_io8_t*)0xB7200DEE)  /*@bfbba@*/
#define PPC_PCFGR630_POE	(*(volatile uint_io8_t*)0xB7200DEF)  /*@bfbba@*/

#define PPC_PCFGR631	(PPC.unPCFGR631.u16Register)  /*@rg@*/
#define PPC_PCFGR631_POF	(PPC.unPCFGR631.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR631_NFE	(*(volatile uint_io8_t*)0xB7200DF5)  /*@bfbba@*/
#define PPC_PCFGR631_ODR	(PPC.unPCFGR631.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR631_PDE	(*(volatile uint_io8_t*)0xB7200DF8)  /*@bfbba@*/
#define PPC_PCFGR631_PUE	(*(volatile uint_io8_t*)0xB7200DF9)  /*@bfbba@*/
#define PPC_PCFGR631_PIL	(PPC.unPCFGR631.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR631_PIE	(*(volatile uint_io8_t*)0xB7200DFC)  /*@bfbba@*/
#define PPC_PCFGR631_PID	(*(volatile uint_io8_t*)0xB7200DFD)  /*@bfbba@*/
#define PPC_PCFGR631_POD	(*(volatile uint_io8_t*)0xB7200DFE)  /*@bfbba@*/
#define PPC_PCFGR631_POE	(*(volatile uint_io8_t*)0xB7200DFF)  /*@bfbba@*/

#define PPC_PCFGR700	(PPC.unPCFGR700.u16Register)  /*@rg@*/
#define PPC_PCFGR700_POF	(PPC.unPCFGR700.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR700_NFE	(*(volatile uint_io8_t*)0xB7200E05)  /*@bfbba@*/
#define PPC_PCFGR700_ODR	(PPC.unPCFGR700.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR700_PDE	(*(volatile uint_io8_t*)0xB7200E08)  /*@bfbba@*/
#define PPC_PCFGR700_PUE	(*(volatile uint_io8_t*)0xB7200E09)  /*@bfbba@*/
#define PPC_PCFGR700_PIL	(PPC.unPCFGR700.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR700_PIE	(*(volatile uint_io8_t*)0xB7200E0C)  /*@bfbba@*/
#define PPC_PCFGR700_PID	(*(volatile uint_io8_t*)0xB7200E0D)  /*@bfbba@*/
#define PPC_PCFGR700_POD	(*(volatile uint_io8_t*)0xB7200E0E)  /*@bfbba@*/
#define PPC_PCFGR700_POE	(*(volatile uint_io8_t*)0xB7200E0F)  /*@bfbba@*/

#define PPC_PCFGR701	(PPC.unPCFGR701.u16Register)  /*@rg@*/
#define PPC_PCFGR701_POF	(PPC.unPCFGR701.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR701_NFE	(*(volatile uint_io8_t*)0xB7200E15)  /*@bfbba@*/
#define PPC_PCFGR701_ODR	(PPC.unPCFGR701.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR701_PDE	(*(volatile uint_io8_t*)0xB7200E18)  /*@bfbba@*/
#define PPC_PCFGR701_PUE	(*(volatile uint_io8_t*)0xB7200E19)  /*@bfbba@*/
#define PPC_PCFGR701_PIL	(PPC.unPCFGR701.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR701_PIE	(*(volatile uint_io8_t*)0xB7200E1C)  /*@bfbba@*/
#define PPC_PCFGR701_PID	(*(volatile uint_io8_t*)0xB7200E1D)  /*@bfbba@*/
#define PPC_PCFGR701_POD	(*(volatile uint_io8_t*)0xB7200E1E)  /*@bfbba@*/
#define PPC_PCFGR701_POE	(*(volatile uint_io8_t*)0xB7200E1F)  /*@bfbba@*/

#define PPC_PCFGR702	(PPC.unPCFGR702.u16Register)  /*@rg@*/
#define PPC_PCFGR702_POF	(PPC.unPCFGR702.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR702_NFE	(*(volatile uint_io8_t*)0xB7200E25)  /*@bfbba@*/
#define PPC_PCFGR702_ODR	(PPC.unPCFGR702.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR702_PDE	(*(volatile uint_io8_t*)0xB7200E28)  /*@bfbba@*/
#define PPC_PCFGR702_PUE	(*(volatile uint_io8_t*)0xB7200E29)  /*@bfbba@*/
#define PPC_PCFGR702_PIL	(PPC.unPCFGR702.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR702_PIE	(*(volatile uint_io8_t*)0xB7200E2C)  /*@bfbba@*/
#define PPC_PCFGR702_PID	(*(volatile uint_io8_t*)0xB7200E2D)  /*@bfbba@*/
#define PPC_PCFGR702_POD	(*(volatile uint_io8_t*)0xB7200E2E)  /*@bfbba@*/
#define PPC_PCFGR702_POE	(*(volatile uint_io8_t*)0xB7200E2F)  /*@bfbba@*/

#define PPC_PCFGR703	(PPC.unPCFGR703.u16Register)  /*@rg@*/
#define PPC_PCFGR703_POF	(PPC.unPCFGR703.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR703_NFE	(*(volatile uint_io8_t*)0xB7200E35)  /*@bfbba@*/
#define PPC_PCFGR703_ODR	(PPC.unPCFGR703.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR703_PDE	(*(volatile uint_io8_t*)0xB7200E38)  /*@bfbba@*/
#define PPC_PCFGR703_PUE	(*(volatile uint_io8_t*)0xB7200E39)  /*@bfbba@*/
#define PPC_PCFGR703_PIL	(PPC.unPCFGR703.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR703_PIE	(*(volatile uint_io8_t*)0xB7200E3C)  /*@bfbba@*/
#define PPC_PCFGR703_PID	(*(volatile uint_io8_t*)0xB7200E3D)  /*@bfbba@*/
#define PPC_PCFGR703_POD	(*(volatile uint_io8_t*)0xB7200E3E)  /*@bfbba@*/
#define PPC_PCFGR703_POE	(*(volatile uint_io8_t*)0xB7200E3F)  /*@bfbba@*/

#define PPC_PCFGR704	(PPC.unPCFGR704.u16Register)  /*@rg@*/
#define PPC_PCFGR704_POF	(PPC.unPCFGR704.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR704_NFE	(*(volatile uint_io8_t*)0xB7200E45)  /*@bfbba@*/
#define PPC_PCFGR704_ODR	(PPC.unPCFGR704.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR704_PDE	(*(volatile uint_io8_t*)0xB7200E48)  /*@bfbba@*/
#define PPC_PCFGR704_PUE	(*(volatile uint_io8_t*)0xB7200E49)  /*@bfbba@*/
#define PPC_PCFGR704_PIL	(PPC.unPCFGR704.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR704_PIE	(*(volatile uint_io8_t*)0xB7200E4C)  /*@bfbba@*/
#define PPC_PCFGR704_PID	(*(volatile uint_io8_t*)0xB7200E4D)  /*@bfbba@*/
#define PPC_PCFGR704_POD	(*(volatile uint_io8_t*)0xB7200E4E)  /*@bfbba@*/
#define PPC_PCFGR704_POE	(*(volatile uint_io8_t*)0xB7200E4F)  /*@bfbba@*/

#define PPC_PCFGR705	(PPC.unPCFGR705.u16Register)  /*@rg@*/
#define PPC_PCFGR705_POF	(PPC.unPCFGR705.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR705_NFE	(*(volatile uint_io8_t*)0xB7200E55)  /*@bfbba@*/
#define PPC_PCFGR705_ODR	(PPC.unPCFGR705.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR705_PDE	(*(volatile uint_io8_t*)0xB7200E58)  /*@bfbba@*/
#define PPC_PCFGR705_PUE	(*(volatile uint_io8_t*)0xB7200E59)  /*@bfbba@*/
#define PPC_PCFGR705_PIL	(PPC.unPCFGR705.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR705_PIE	(*(volatile uint_io8_t*)0xB7200E5C)  /*@bfbba@*/
#define PPC_PCFGR705_PID	(*(volatile uint_io8_t*)0xB7200E5D)  /*@bfbba@*/
#define PPC_PCFGR705_POD	(*(volatile uint_io8_t*)0xB7200E5E)  /*@bfbba@*/
#define PPC_PCFGR705_POE	(*(volatile uint_io8_t*)0xB7200E5F)  /*@bfbba@*/

#define PPC_PCFGR706	(PPC.unPCFGR706.u16Register)  /*@rg@*/
#define PPC_PCFGR706_POF	(PPC.unPCFGR706.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR706_NFE	(*(volatile uint_io8_t*)0xB7200E65)  /*@bfbba@*/
#define PPC_PCFGR706_ODR	(PPC.unPCFGR706.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR706_PDE	(*(volatile uint_io8_t*)0xB7200E68)  /*@bfbba@*/
#define PPC_PCFGR706_PUE	(*(volatile uint_io8_t*)0xB7200E69)  /*@bfbba@*/
#define PPC_PCFGR706_PIL	(PPC.unPCFGR706.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR706_PIE	(*(volatile uint_io8_t*)0xB7200E6C)  /*@bfbba@*/
#define PPC_PCFGR706_PID	(*(volatile uint_io8_t*)0xB7200E6D)  /*@bfbba@*/
#define PPC_PCFGR706_POD	(*(volatile uint_io8_t*)0xB7200E6E)  /*@bfbba@*/
#define PPC_PCFGR706_POE	(*(volatile uint_io8_t*)0xB7200E6F)  /*@bfbba@*/

#define PPC_PCFGR707	(PPC.unPCFGR707.u16Register)  /*@rg@*/
#define PPC_PCFGR707_POF	(PPC.unPCFGR707.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR707_NFE	(*(volatile uint_io8_t*)0xB7200E75)  /*@bfbba@*/
#define PPC_PCFGR707_ODR	(PPC.unPCFGR707.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR707_PDE	(*(volatile uint_io8_t*)0xB7200E78)  /*@bfbba@*/
#define PPC_PCFGR707_PUE	(*(volatile uint_io8_t*)0xB7200E79)  /*@bfbba@*/
#define PPC_PCFGR707_PIL	(PPC.unPCFGR707.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR707_PIE	(*(volatile uint_io8_t*)0xB7200E7C)  /*@bfbba@*/
#define PPC_PCFGR707_PID	(*(volatile uint_io8_t*)0xB7200E7D)  /*@bfbba@*/
#define PPC_PCFGR707_POD	(*(volatile uint_io8_t*)0xB7200E7E)  /*@bfbba@*/
#define PPC_PCFGR707_POE	(*(volatile uint_io8_t*)0xB7200E7F)  /*@bfbba@*/

#define PPC_PCFGR708	(PPC.unPCFGR708.u16Register)  /*@rg@*/
#define PPC_PCFGR708_POF	(PPC.unPCFGR708.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR708_NFE	(*(volatile uint_io8_t*)0xB7200E85)  /*@bfbba@*/
#define PPC_PCFGR708_ODR	(PPC.unPCFGR708.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR708_PDE	(*(volatile uint_io8_t*)0xB7200E88)  /*@bfbba@*/
#define PPC_PCFGR708_PUE	(*(volatile uint_io8_t*)0xB7200E89)  /*@bfbba@*/
#define PPC_PCFGR708_PIL	(PPC.unPCFGR708.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR708_PIE	(*(volatile uint_io8_t*)0xB7200E8C)  /*@bfbba@*/
#define PPC_PCFGR708_PID	(*(volatile uint_io8_t*)0xB7200E8D)  /*@bfbba@*/
#define PPC_PCFGR708_POD	(*(volatile uint_io8_t*)0xB7200E8E)  /*@bfbba@*/
#define PPC_PCFGR708_POE	(*(volatile uint_io8_t*)0xB7200E8F)  /*@bfbba@*/

#define PPC_PCFGR709	(PPC.unPCFGR709.u16Register)  /*@rg@*/
#define PPC_PCFGR709_POF	(PPC.unPCFGR709.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR709_NFE	(*(volatile uint_io8_t*)0xB7200E95)  /*@bfbba@*/
#define PPC_PCFGR709_ODR	(PPC.unPCFGR709.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR709_PDE	(*(volatile uint_io8_t*)0xB7200E98)  /*@bfbba@*/
#define PPC_PCFGR709_PUE	(*(volatile uint_io8_t*)0xB7200E99)  /*@bfbba@*/
#define PPC_PCFGR709_PIL	(PPC.unPCFGR709.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR709_PIE	(*(volatile uint_io8_t*)0xB7200E9C)  /*@bfbba@*/
#define PPC_PCFGR709_PID	(*(volatile uint_io8_t*)0xB7200E9D)  /*@bfbba@*/
#define PPC_PCFGR709_POD	(*(volatile uint_io8_t*)0xB7200E9E)  /*@bfbba@*/
#define PPC_PCFGR709_POE	(*(volatile uint_io8_t*)0xB7200E9F)  /*@bfbba@*/

#define PPC_PCFGR710	(PPC.unPCFGR710.u16Register)  /*@rg@*/
#define PPC_PCFGR710_POF	(PPC.unPCFGR710.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR710_NFE	(*(volatile uint_io8_t*)0xB7200EA5)  /*@bfbba@*/
#define PPC_PCFGR710_ODR	(PPC.unPCFGR710.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR710_PDE	(*(volatile uint_io8_t*)0xB7200EA8)  /*@bfbba@*/
#define PPC_PCFGR710_PUE	(*(volatile uint_io8_t*)0xB7200EA9)  /*@bfbba@*/
#define PPC_PCFGR710_PIL	(PPC.unPCFGR710.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR710_PIE	(*(volatile uint_io8_t*)0xB7200EAC)  /*@bfbba@*/
#define PPC_PCFGR710_PID	(*(volatile uint_io8_t*)0xB7200EAD)  /*@bfbba@*/
#define PPC_PCFGR710_POD	(*(volatile uint_io8_t*)0xB7200EAE)  /*@bfbba@*/
#define PPC_PCFGR710_POE	(*(volatile uint_io8_t*)0xB7200EAF)  /*@bfbba@*/

#define PPC_PCFGR711	(PPC.unPCFGR711.u16Register)  /*@rg@*/
#define PPC_PCFGR711_POF	(PPC.unPCFGR711.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR711_NFE	(*(volatile uint_io8_t*)0xB7200EB5)  /*@bfbba@*/
#define PPC_PCFGR711_ODR	(PPC.unPCFGR711.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR711_PDE	(*(volatile uint_io8_t*)0xB7200EB8)  /*@bfbba@*/
#define PPC_PCFGR711_PUE	(*(volatile uint_io8_t*)0xB7200EB9)  /*@bfbba@*/
#define PPC_PCFGR711_PIL	(PPC.unPCFGR711.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR711_PIE	(*(volatile uint_io8_t*)0xB7200EBC)  /*@bfbba@*/
#define PPC_PCFGR711_PID	(*(volatile uint_io8_t*)0xB7200EBD)  /*@bfbba@*/
#define PPC_PCFGR711_POD	(*(volatile uint_io8_t*)0xB7200EBE)  /*@bfbba@*/
#define PPC_PCFGR711_POE	(*(volatile uint_io8_t*)0xB7200EBF)  /*@bfbba@*/

#define PPC_PCFGR712	(PPC.unPCFGR712.u16Register)  /*@rg@*/
#define PPC_PCFGR712_POF	(PPC.unPCFGR712.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR712_NFE	(*(volatile uint_io8_t*)0xB7200EC5)  /*@bfbba@*/
#define PPC_PCFGR712_ODR	(PPC.unPCFGR712.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR712_PDE	(*(volatile uint_io8_t*)0xB7200EC8)  /*@bfbba@*/
#define PPC_PCFGR712_PUE	(*(volatile uint_io8_t*)0xB7200EC9)  /*@bfbba@*/
#define PPC_PCFGR712_PIL	(PPC.unPCFGR712.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR712_PIE	(*(volatile uint_io8_t*)0xB7200ECC)  /*@bfbba@*/
#define PPC_PCFGR712_PID	(*(volatile uint_io8_t*)0xB7200ECD)  /*@bfbba@*/
#define PPC_PCFGR712_POD	(*(volatile uint_io8_t*)0xB7200ECE)  /*@bfbba@*/
#define PPC_PCFGR712_POE	(*(volatile uint_io8_t*)0xB7200ECF)  /*@bfbba@*/

#define PPC_PCFGR713	(PPC.unPCFGR713.u16Register)  /*@rg@*/
#define PPC_PCFGR713_POF	(PPC.unPCFGR713.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR713_NFE	(*(volatile uint_io8_t*)0xB7200ED5)  /*@bfbba@*/
#define PPC_PCFGR713_ODR	(PPC.unPCFGR713.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR713_PDE	(*(volatile uint_io8_t*)0xB7200ED8)  /*@bfbba@*/
#define PPC_PCFGR713_PUE	(*(volatile uint_io8_t*)0xB7200ED9)  /*@bfbba@*/
#define PPC_PCFGR713_PIL	(PPC.unPCFGR713.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR713_PIE	(*(volatile uint_io8_t*)0xB7200EDC)  /*@bfbba@*/
#define PPC_PCFGR713_PID	(*(volatile uint_io8_t*)0xB7200EDD)  /*@bfbba@*/
#define PPC_PCFGR713_POD	(*(volatile uint_io8_t*)0xB7200EDE)  /*@bfbba@*/
#define PPC_PCFGR713_POE	(*(volatile uint_io8_t*)0xB7200EDF)  /*@bfbba@*/

#define PPC_PCFGR714	(PPC.unPCFGR714.u16Register)  /*@rg@*/
#define PPC_PCFGR714_POF	(PPC.unPCFGR714.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR714_NFE	(*(volatile uint_io8_t*)0xB7200EE5)  /*@bfbba@*/
#define PPC_PCFGR714_ODR	(PPC.unPCFGR714.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR714_PDE	(*(volatile uint_io8_t*)0xB7200EE8)  /*@bfbba@*/
#define PPC_PCFGR714_PUE	(*(volatile uint_io8_t*)0xB7200EE9)  /*@bfbba@*/
#define PPC_PCFGR714_PIL	(PPC.unPCFGR714.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR714_PIE	(*(volatile uint_io8_t*)0xB7200EEC)  /*@bfbba@*/
#define PPC_PCFGR714_PID	(*(volatile uint_io8_t*)0xB7200EED)  /*@bfbba@*/
#define PPC_PCFGR714_POD	(*(volatile uint_io8_t*)0xB7200EEE)  /*@bfbba@*/
#define PPC_PCFGR714_POE	(*(volatile uint_io8_t*)0xB7200EEF)  /*@bfbba@*/

#define PPC_PCFGR715	(PPC.unPCFGR715.u16Register)  /*@rg@*/
#define PPC_PCFGR715_POF	(PPC.unPCFGR715.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR715_NFE	(*(volatile uint_io8_t*)0xB7200EF5)  /*@bfbba@*/
#define PPC_PCFGR715_ODR	(PPC.unPCFGR715.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR715_PDE	(*(volatile uint_io8_t*)0xB7200EF8)  /*@bfbba@*/
#define PPC_PCFGR715_PUE	(*(volatile uint_io8_t*)0xB7200EF9)  /*@bfbba@*/
#define PPC_PCFGR715_PIL	(PPC.unPCFGR715.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR715_PIE	(*(volatile uint_io8_t*)0xB7200EFC)  /*@bfbba@*/
#define PPC_PCFGR715_PID	(*(volatile uint_io8_t*)0xB7200EFD)  /*@bfbba@*/
#define PPC_PCFGR715_POD	(*(volatile uint_io8_t*)0xB7200EFE)  /*@bfbba@*/
#define PPC_PCFGR715_POE	(*(volatile uint_io8_t*)0xB7200EFF)  /*@bfbba@*/

#define PPC_PCFGR716	(PPC.unPCFGR716.u16Register)  /*@rg@*/
#define PPC_PCFGR716_POF	(PPC.unPCFGR716.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR716_NFE	(*(volatile uint_io8_t*)0xB7200F05)  /*@bfbba@*/
#define PPC_PCFGR716_ODR	(PPC.unPCFGR716.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR716_PDE	(*(volatile uint_io8_t*)0xB7200F08)  /*@bfbba@*/
#define PPC_PCFGR716_PUE	(*(volatile uint_io8_t*)0xB7200F09)  /*@bfbba@*/
#define PPC_PCFGR716_PIL	(PPC.unPCFGR716.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR716_PIE	(*(volatile uint_io8_t*)0xB7200F0C)  /*@bfbba@*/
#define PPC_PCFGR716_PID	(*(volatile uint_io8_t*)0xB7200F0D)  /*@bfbba@*/
#define PPC_PCFGR716_POD	(*(volatile uint_io8_t*)0xB7200F0E)  /*@bfbba@*/
#define PPC_PCFGR716_POE	(*(volatile uint_io8_t*)0xB7200F0F)  /*@bfbba@*/

#define PPC_PCFGR717	(PPC.unPCFGR717.u16Register)  /*@rg@*/
#define PPC_PCFGR717_POF	(PPC.unPCFGR717.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR717_NFE	(*(volatile uint_io8_t*)0xB7200F15)  /*@bfbba@*/
#define PPC_PCFGR717_ODR	(PPC.unPCFGR717.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR717_PDE	(*(volatile uint_io8_t*)0xB7200F18)  /*@bfbba@*/
#define PPC_PCFGR717_PUE	(*(volatile uint_io8_t*)0xB7200F19)  /*@bfbba@*/
#define PPC_PCFGR717_PIL	(PPC.unPCFGR717.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR717_PIE	(*(volatile uint_io8_t*)0xB7200F1C)  /*@bfbba@*/
#define PPC_PCFGR717_PID	(*(volatile uint_io8_t*)0xB7200F1D)  /*@bfbba@*/
#define PPC_PCFGR717_POD	(*(volatile uint_io8_t*)0xB7200F1E)  /*@bfbba@*/
#define PPC_PCFGR717_POE	(*(volatile uint_io8_t*)0xB7200F1F)  /*@bfbba@*/

#define PPC_PCFGR718	(PPC.unPCFGR718.u16Register)  /*@rg@*/
#define PPC_PCFGR718_POF	(PPC.unPCFGR718.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR718_NFE	(*(volatile uint_io8_t*)0xB7200F25)  /*@bfbba@*/
#define PPC_PCFGR718_ODR	(PPC.unPCFGR718.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR718_PDE	(*(volatile uint_io8_t*)0xB7200F28)  /*@bfbba@*/
#define PPC_PCFGR718_PUE	(*(volatile uint_io8_t*)0xB7200F29)  /*@bfbba@*/
#define PPC_PCFGR718_PIL	(PPC.unPCFGR718.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR718_PIE	(*(volatile uint_io8_t*)0xB7200F2C)  /*@bfbba@*/
#define PPC_PCFGR718_PID	(*(volatile uint_io8_t*)0xB7200F2D)  /*@bfbba@*/
#define PPC_PCFGR718_POD	(*(volatile uint_io8_t*)0xB7200F2E)  /*@bfbba@*/
#define PPC_PCFGR718_POE	(*(volatile uint_io8_t*)0xB7200F2F)  /*@bfbba@*/

#define PPC_PCFGR719	(PPC.unPCFGR719.u16Register)  /*@rg@*/
#define PPC_PCFGR719_POF	(PPC.unPCFGR719.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR719_NFE	(*(volatile uint_io8_t*)0xB7200F35)  /*@bfbba@*/
#define PPC_PCFGR719_ODR	(PPC.unPCFGR719.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR719_PDE	(*(volatile uint_io8_t*)0xB7200F38)  /*@bfbba@*/
#define PPC_PCFGR719_PUE	(*(volatile uint_io8_t*)0xB7200F39)  /*@bfbba@*/
#define PPC_PCFGR719_PIL	(PPC.unPCFGR719.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR719_PIE	(*(volatile uint_io8_t*)0xB7200F3C)  /*@bfbba@*/
#define PPC_PCFGR719_PID	(*(volatile uint_io8_t*)0xB7200F3D)  /*@bfbba@*/
#define PPC_PCFGR719_POD	(*(volatile uint_io8_t*)0xB7200F3E)  /*@bfbba@*/
#define PPC_PCFGR719_POE	(*(volatile uint_io8_t*)0xB7200F3F)  /*@bfbba@*/

#define PPC_PCFGR720	(PPC.unPCFGR720.u16Register)  /*@rg@*/
#define PPC_PCFGR720_POF	(PPC.unPCFGR720.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR720_NFE	(*(volatile uint_io8_t*)0xB7200F45)  /*@bfbba@*/
#define PPC_PCFGR720_ODR	(PPC.unPCFGR720.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR720_PDE	(*(volatile uint_io8_t*)0xB7200F48)  /*@bfbba@*/
#define PPC_PCFGR720_PUE	(*(volatile uint_io8_t*)0xB7200F49)  /*@bfbba@*/
#define PPC_PCFGR720_PIL	(PPC.unPCFGR720.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR720_PIE	(*(volatile uint_io8_t*)0xB7200F4C)  /*@bfbba@*/
#define PPC_PCFGR720_PID	(*(volatile uint_io8_t*)0xB7200F4D)  /*@bfbba@*/
#define PPC_PCFGR720_POD	(*(volatile uint_io8_t*)0xB7200F4E)  /*@bfbba@*/
#define PPC_PCFGR720_POE	(*(volatile uint_io8_t*)0xB7200F4F)  /*@bfbba@*/

#define PPC_PCFGR721	(PPC.unPCFGR721.u16Register)  /*@rg@*/
#define PPC_PCFGR721_POF	(PPC.unPCFGR721.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR721_NFE	(*(volatile uint_io8_t*)0xB7200F55)  /*@bfbba@*/
#define PPC_PCFGR721_ODR	(PPC.unPCFGR721.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR721_PDE	(*(volatile uint_io8_t*)0xB7200F58)  /*@bfbba@*/
#define PPC_PCFGR721_PUE	(*(volatile uint_io8_t*)0xB7200F59)  /*@bfbba@*/
#define PPC_PCFGR721_PIL	(PPC.unPCFGR721.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR721_PIE	(*(volatile uint_io8_t*)0xB7200F5C)  /*@bfbba@*/
#define PPC_PCFGR721_PID	(*(volatile uint_io8_t*)0xB7200F5D)  /*@bfbba@*/
#define PPC_PCFGR721_POD	(*(volatile uint_io8_t*)0xB7200F5E)  /*@bfbba@*/
#define PPC_PCFGR721_POE	(*(volatile uint_io8_t*)0xB7200F5F)  /*@bfbba@*/

#define PPC_PCFGR722	(PPC.unPCFGR722.u16Register)  /*@rg@*/
#define PPC_PCFGR722_POF	(PPC.unPCFGR722.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR722_NFE	(*(volatile uint_io8_t*)0xB7200F65)  /*@bfbba@*/
#define PPC_PCFGR722_ODR	(PPC.unPCFGR722.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR722_PDE	(*(volatile uint_io8_t*)0xB7200F68)  /*@bfbba@*/
#define PPC_PCFGR722_PUE	(*(volatile uint_io8_t*)0xB7200F69)  /*@bfbba@*/
#define PPC_PCFGR722_PIL	(PPC.unPCFGR722.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR722_PIE	(*(volatile uint_io8_t*)0xB7200F6C)  /*@bfbba@*/
#define PPC_PCFGR722_PID	(*(volatile uint_io8_t*)0xB7200F6D)  /*@bfbba@*/
#define PPC_PCFGR722_POD	(*(volatile uint_io8_t*)0xB7200F6E)  /*@bfbba@*/
#define PPC_PCFGR722_POE	(*(volatile uint_io8_t*)0xB7200F6F)  /*@bfbba@*/

#define PPC_PCFGR723	(PPC.unPCFGR723.u16Register)  /*@rg@*/
#define PPC_PCFGR723_POF	(PPC.unPCFGR723.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR723_NFE	(*(volatile uint_io8_t*)0xB7200F75)  /*@bfbba@*/
#define PPC_PCFGR723_ODR	(PPC.unPCFGR723.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR723_PDE	(*(volatile uint_io8_t*)0xB7200F78)  /*@bfbba@*/
#define PPC_PCFGR723_PUE	(*(volatile uint_io8_t*)0xB7200F79)  /*@bfbba@*/
#define PPC_PCFGR723_PIL	(PPC.unPCFGR723.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR723_PIE	(*(volatile uint_io8_t*)0xB7200F7C)  /*@bfbba@*/
#define PPC_PCFGR723_PID	(*(volatile uint_io8_t*)0xB7200F7D)  /*@bfbba@*/
#define PPC_PCFGR723_POD	(*(volatile uint_io8_t*)0xB7200F7E)  /*@bfbba@*/
#define PPC_PCFGR723_POE	(*(volatile uint_io8_t*)0xB7200F7F)  /*@bfbba@*/

#define PPC_PCFGR724	(PPC.unPCFGR724.u16Register)  /*@rg@*/
#define PPC_PCFGR724_POF	(PPC.unPCFGR724.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR724_NFE	(*(volatile uint_io8_t*)0xB7200F85)  /*@bfbba@*/
#define PPC_PCFGR724_ODR	(PPC.unPCFGR724.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR724_PDE	(*(volatile uint_io8_t*)0xB7200F88)  /*@bfbba@*/
#define PPC_PCFGR724_PUE	(*(volatile uint_io8_t*)0xB7200F89)  /*@bfbba@*/
#define PPC_PCFGR724_PIL	(PPC.unPCFGR724.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR724_PIE	(*(volatile uint_io8_t*)0xB7200F8C)  /*@bfbba@*/
#define PPC_PCFGR724_PID	(*(volatile uint_io8_t*)0xB7200F8D)  /*@bfbba@*/
#define PPC_PCFGR724_POD	(*(volatile uint_io8_t*)0xB7200F8E)  /*@bfbba@*/
#define PPC_PCFGR724_POE	(*(volatile uint_io8_t*)0xB7200F8F)  /*@bfbba@*/

#define PPC_PCFGR725	(PPC.unPCFGR725.u16Register)  /*@rg@*/
#define PPC_PCFGR725_POF	(PPC.unPCFGR725.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR725_NFE	(*(volatile uint_io8_t*)0xB7200F95)  /*@bfbba@*/
#define PPC_PCFGR725_ODR	(PPC.unPCFGR725.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR725_PDE	(*(volatile uint_io8_t*)0xB7200F98)  /*@bfbba@*/
#define PPC_PCFGR725_PUE	(*(volatile uint_io8_t*)0xB7200F99)  /*@bfbba@*/
#define PPC_PCFGR725_PIL	(PPC.unPCFGR725.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR725_PIE	(*(volatile uint_io8_t*)0xB7200F9C)  /*@bfbba@*/
#define PPC_PCFGR725_PID	(*(volatile uint_io8_t*)0xB7200F9D)  /*@bfbba@*/
#define PPC_PCFGR725_POD	(*(volatile uint_io8_t*)0xB7200F9E)  /*@bfbba@*/
#define PPC_PCFGR725_POE	(*(volatile uint_io8_t*)0xB7200F9F)  /*@bfbba@*/

#define PPC_PCFGR726	(PPC.unPCFGR726.u16Register)  /*@rg@*/
#define PPC_PCFGR726_POF	(PPC.unPCFGR726.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR726_NFE	(*(volatile uint_io8_t*)0xB7200FA5)  /*@bfbba@*/
#define PPC_PCFGR726_ODR	(PPC.unPCFGR726.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR726_PDE	(*(volatile uint_io8_t*)0xB7200FA8)  /*@bfbba@*/
#define PPC_PCFGR726_PUE	(*(volatile uint_io8_t*)0xB7200FA9)  /*@bfbba@*/
#define PPC_PCFGR726_PIL	(PPC.unPCFGR726.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR726_PIE	(*(volatile uint_io8_t*)0xB7200FAC)  /*@bfbba@*/
#define PPC_PCFGR726_PID	(*(volatile uint_io8_t*)0xB7200FAD)  /*@bfbba@*/
#define PPC_PCFGR726_POD	(*(volatile uint_io8_t*)0xB7200FAE)  /*@bfbba@*/
#define PPC_PCFGR726_POE	(*(volatile uint_io8_t*)0xB7200FAF)  /*@bfbba@*/

#define PPC_PCFGR727	(PPC.unPCFGR727.u16Register)  /*@rg@*/
#define PPC_PCFGR727_POF	(PPC.unPCFGR727.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR727_NFE	(*(volatile uint_io8_t*)0xB7200FB5)  /*@bfbba@*/
#define PPC_PCFGR727_ODR	(PPC.unPCFGR727.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR727_PDE	(*(volatile uint_io8_t*)0xB7200FB8)  /*@bfbba@*/
#define PPC_PCFGR727_PUE	(*(volatile uint_io8_t*)0xB7200FB9)  /*@bfbba@*/
#define PPC_PCFGR727_PIL	(PPC.unPCFGR727.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR727_PIE	(*(volatile uint_io8_t*)0xB7200FBC)  /*@bfbba@*/
#define PPC_PCFGR727_PID	(*(volatile uint_io8_t*)0xB7200FBD)  /*@bfbba@*/
#define PPC_PCFGR727_POD	(*(volatile uint_io8_t*)0xB7200FBE)  /*@bfbba@*/
#define PPC_PCFGR727_POE	(*(volatile uint_io8_t*)0xB7200FBF)  /*@bfbba@*/

#define PPC_PCFGR728	(PPC.unPCFGR728.u16Register)  /*@rg@*/
#define PPC_PCFGR728_POF	(PPC.unPCFGR728.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR728_NFE	(*(volatile uint_io8_t*)0xB7200FC5)  /*@bfbba@*/
#define PPC_PCFGR728_ODR	(PPC.unPCFGR728.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR728_PDE	(*(volatile uint_io8_t*)0xB7200FC8)  /*@bfbba@*/
#define PPC_PCFGR728_PUE	(*(volatile uint_io8_t*)0xB7200FC9)  /*@bfbba@*/
#define PPC_PCFGR728_PIL	(PPC.unPCFGR728.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR728_PIE	(*(volatile uint_io8_t*)0xB7200FCC)  /*@bfbba@*/
#define PPC_PCFGR728_PID	(*(volatile uint_io8_t*)0xB7200FCD)  /*@bfbba@*/
#define PPC_PCFGR728_POD	(*(volatile uint_io8_t*)0xB7200FCE)  /*@bfbba@*/
#define PPC_PCFGR728_POE	(*(volatile uint_io8_t*)0xB7200FCF)  /*@bfbba@*/

#define PPC_PCFGR729	(PPC.unPCFGR729.u16Register)  /*@rg@*/
#define PPC_PCFGR729_POF	(PPC.unPCFGR729.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR729_NFE	(*(volatile uint_io8_t*)0xB7200FD5)  /*@bfbba@*/
#define PPC_PCFGR729_ODR	(PPC.unPCFGR729.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR729_PDE	(*(volatile uint_io8_t*)0xB7200FD8)  /*@bfbba@*/
#define PPC_PCFGR729_PUE	(*(volatile uint_io8_t*)0xB7200FD9)  /*@bfbba@*/
#define PPC_PCFGR729_PIL	(PPC.unPCFGR729.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR729_PIE	(*(volatile uint_io8_t*)0xB7200FDC)  /*@bfbba@*/
#define PPC_PCFGR729_PID	(*(volatile uint_io8_t*)0xB7200FDD)  /*@bfbba@*/
#define PPC_PCFGR729_POD	(*(volatile uint_io8_t*)0xB7200FDE)  /*@bfbba@*/
#define PPC_PCFGR729_POE	(*(volatile uint_io8_t*)0xB7200FDF)  /*@bfbba@*/

#define PPC_PCFGR730	(PPC.unPCFGR730.u16Register)  /*@rg@*/
#define PPC_PCFGR730_POF	(PPC.unPCFGR730.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR730_NFE	(*(volatile uint_io8_t*)0xB7200FE5)  /*@bfbba@*/
#define PPC_PCFGR730_ODR	(PPC.unPCFGR730.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR730_PDE	(*(volatile uint_io8_t*)0xB7200FE8)  /*@bfbba@*/
#define PPC_PCFGR730_PUE	(*(volatile uint_io8_t*)0xB7200FE9)  /*@bfbba@*/
#define PPC_PCFGR730_PIL	(PPC.unPCFGR730.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR730_PIE	(*(volatile uint_io8_t*)0xB7200FEC)  /*@bfbba@*/
#define PPC_PCFGR730_PID	(*(volatile uint_io8_t*)0xB7200FED)  /*@bfbba@*/
#define PPC_PCFGR730_POD	(*(volatile uint_io8_t*)0xB7200FEE)  /*@bfbba@*/
#define PPC_PCFGR730_POE	(*(volatile uint_io8_t*)0xB7200FEF)  /*@bfbba@*/

#define PPC_PCFGR731	(PPC.unPCFGR731.u16Register)  /*@rg@*/
#define PPC_PCFGR731_POF	(PPC.unPCFGR731.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR731_NFE	(*(volatile uint_io8_t*)0xB7200FF5)  /*@bfbba@*/
#define PPC_PCFGR731_ODR	(PPC.unPCFGR731.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR731_PDE	(*(volatile uint_io8_t*)0xB7200FF8)  /*@bfbba@*/
#define PPC_PCFGR731_PUE	(*(volatile uint_io8_t*)0xB7200FF9)  /*@bfbba@*/
#define PPC_PCFGR731_PIL	(PPC.unPCFGR731.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR731_PIE	(*(volatile uint_io8_t*)0xB7200FFC)  /*@bfbba@*/
#define PPC_PCFGR731_PID	(*(volatile uint_io8_t*)0xB7200FFD)  /*@bfbba@*/
#define PPC_PCFGR731_POD	(*(volatile uint_io8_t*)0xB7200FFE)  /*@bfbba@*/
#define PPC_PCFGR731_POE	(*(volatile uint_io8_t*)0xB7200FFF)  /*@bfbba@*/

#define PPC_PCFGR800	(PPC.unPCFGR800.u16Register)  /*@rg@*/
#define PPC_PCFGR800_POF	(PPC.unPCFGR800.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR800_NFE	(*(volatile uint_io8_t*)0xB7201005)  /*@bfbba@*/
#define PPC_PCFGR800_ODR	(PPC.unPCFGR800.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR800_PDE	(*(volatile uint_io8_t*)0xB7201008)  /*@bfbba@*/
#define PPC_PCFGR800_PUE	(*(volatile uint_io8_t*)0xB7201009)  /*@bfbba@*/
#define PPC_PCFGR800_PIL	(PPC.unPCFGR800.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR800_PIE	(*(volatile uint_io8_t*)0xB720100C)  /*@bfbba@*/
#define PPC_PCFGR800_PID	(*(volatile uint_io8_t*)0xB720100D)  /*@bfbba@*/
#define PPC_PCFGR800_POD	(*(volatile uint_io8_t*)0xB720100E)  /*@bfbba@*/
#define PPC_PCFGR800_POE	(*(volatile uint_io8_t*)0xB720100F)  /*@bfbba@*/

#define PPC_PCFGR801	(PPC.unPCFGR801.u16Register)  /*@rg@*/
#define PPC_PCFGR801_POF	(PPC.unPCFGR801.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR801_NFE	(*(volatile uint_io8_t*)0xB7201015)  /*@bfbba@*/
#define PPC_PCFGR801_ODR	(PPC.unPCFGR801.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR801_PDE	(*(volatile uint_io8_t*)0xB7201018)  /*@bfbba@*/
#define PPC_PCFGR801_PUE	(*(volatile uint_io8_t*)0xB7201019)  /*@bfbba@*/
#define PPC_PCFGR801_PIL	(PPC.unPCFGR801.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR801_PIE	(*(volatile uint_io8_t*)0xB720101C)  /*@bfbba@*/
#define PPC_PCFGR801_PID	(*(volatile uint_io8_t*)0xB720101D)  /*@bfbba@*/
#define PPC_PCFGR801_POD	(*(volatile uint_io8_t*)0xB720101E)  /*@bfbba@*/
#define PPC_PCFGR801_POE	(*(volatile uint_io8_t*)0xB720101F)  /*@bfbba@*/

#define PPC_PCFGR802	(PPC.unPCFGR802.u16Register)  /*@rg@*/
#define PPC_PCFGR802_POF	(PPC.unPCFGR802.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR802_NFE	(*(volatile uint_io8_t*)0xB7201025)  /*@bfbba@*/
#define PPC_PCFGR802_ODR	(PPC.unPCFGR802.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR802_PDE	(*(volatile uint_io8_t*)0xB7201028)  /*@bfbba@*/
#define PPC_PCFGR802_PUE	(*(volatile uint_io8_t*)0xB7201029)  /*@bfbba@*/
#define PPC_PCFGR802_PIL	(PPC.unPCFGR802.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR802_PIE	(*(volatile uint_io8_t*)0xB720102C)  /*@bfbba@*/
#define PPC_PCFGR802_PID	(*(volatile uint_io8_t*)0xB720102D)  /*@bfbba@*/
#define PPC_PCFGR802_POD	(*(volatile uint_io8_t*)0xB720102E)  /*@bfbba@*/
#define PPC_PCFGR802_POE	(*(volatile uint_io8_t*)0xB720102F)  /*@bfbba@*/

#define PPC_PCFGR803	(PPC.unPCFGR803.u16Register)  /*@rg@*/
#define PPC_PCFGR803_POF	(PPC.unPCFGR803.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR803_NFE	(*(volatile uint_io8_t*)0xB7201035)  /*@bfbba@*/
#define PPC_PCFGR803_ODR	(PPC.unPCFGR803.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR803_PDE	(*(volatile uint_io8_t*)0xB7201038)  /*@bfbba@*/
#define PPC_PCFGR803_PUE	(*(volatile uint_io8_t*)0xB7201039)  /*@bfbba@*/
#define PPC_PCFGR803_PIL	(PPC.unPCFGR803.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR803_PIE	(*(volatile uint_io8_t*)0xB720103C)  /*@bfbba@*/
#define PPC_PCFGR803_PID	(*(volatile uint_io8_t*)0xB720103D)  /*@bfbba@*/
#define PPC_PCFGR803_POD	(*(volatile uint_io8_t*)0xB720103E)  /*@bfbba@*/
#define PPC_PCFGR803_POE	(*(volatile uint_io8_t*)0xB720103F)  /*@bfbba@*/

#define PPC_PCFGR804	(PPC.unPCFGR804.u16Register)  /*@rg@*/
#define PPC_PCFGR804_POF	(PPC.unPCFGR804.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR804_NFE	(*(volatile uint_io8_t*)0xB7201045)  /*@bfbba@*/
#define PPC_PCFGR804_ODR	(PPC.unPCFGR804.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR804_PDE	(*(volatile uint_io8_t*)0xB7201048)  /*@bfbba@*/
#define PPC_PCFGR804_PUE	(*(volatile uint_io8_t*)0xB7201049)  /*@bfbba@*/
#define PPC_PCFGR804_PIL	(PPC.unPCFGR804.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR804_PIE	(*(volatile uint_io8_t*)0xB720104C)  /*@bfbba@*/
#define PPC_PCFGR804_PID	(*(volatile uint_io8_t*)0xB720104D)  /*@bfbba@*/
#define PPC_PCFGR804_POD	(*(volatile uint_io8_t*)0xB720104E)  /*@bfbba@*/
#define PPC_PCFGR804_POE	(*(volatile uint_io8_t*)0xB720104F)  /*@bfbba@*/

#define PPC_PCFGR805	(PPC.unPCFGR805.u16Register)  /*@rg@*/
#define PPC_PCFGR805_POF	(PPC.unPCFGR805.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR805_NFE	(*(volatile uint_io8_t*)0xB7201055)  /*@bfbba@*/
#define PPC_PCFGR805_ODR	(PPC.unPCFGR805.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR805_PDE	(*(volatile uint_io8_t*)0xB7201058)  /*@bfbba@*/
#define PPC_PCFGR805_PUE	(*(volatile uint_io8_t*)0xB7201059)  /*@bfbba@*/
#define PPC_PCFGR805_PIL	(PPC.unPCFGR805.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR805_PIE	(*(volatile uint_io8_t*)0xB720105C)  /*@bfbba@*/
#define PPC_PCFGR805_PID	(*(volatile uint_io8_t*)0xB720105D)  /*@bfbba@*/
#define PPC_PCFGR805_POD	(*(volatile uint_io8_t*)0xB720105E)  /*@bfbba@*/
#define PPC_PCFGR805_POE	(*(volatile uint_io8_t*)0xB720105F)  /*@bfbba@*/

#define PPC_PCFGR806	(PPC.unPCFGR806.u16Register)  /*@rg@*/
#define PPC_PCFGR806_POF	(PPC.unPCFGR806.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR806_NFE	(*(volatile uint_io8_t*)0xB7201065)  /*@bfbba@*/
#define PPC_PCFGR806_ODR	(PPC.unPCFGR806.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR806_PDE	(*(volatile uint_io8_t*)0xB7201068)  /*@bfbba@*/
#define PPC_PCFGR806_PUE	(*(volatile uint_io8_t*)0xB7201069)  /*@bfbba@*/
#define PPC_PCFGR806_PIL	(PPC.unPCFGR806.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR806_PIE	(*(volatile uint_io8_t*)0xB720106C)  /*@bfbba@*/
#define PPC_PCFGR806_PID	(*(volatile uint_io8_t*)0xB720106D)  /*@bfbba@*/
#define PPC_PCFGR806_POD	(*(volatile uint_io8_t*)0xB720106E)  /*@bfbba@*/
#define PPC_PCFGR806_POE	(*(volatile uint_io8_t*)0xB720106F)  /*@bfbba@*/

#define PPC_PCFGR807	(PPC.unPCFGR807.u16Register)  /*@rg@*/
#define PPC_PCFGR807_POF	(PPC.unPCFGR807.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR807_NFE	(*(volatile uint_io8_t*)0xB7201075)  /*@bfbba@*/
#define PPC_PCFGR807_ODR	(PPC.unPCFGR807.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR807_PDE	(*(volatile uint_io8_t*)0xB7201078)  /*@bfbba@*/
#define PPC_PCFGR807_PUE	(*(volatile uint_io8_t*)0xB7201079)  /*@bfbba@*/
#define PPC_PCFGR807_PIL	(PPC.unPCFGR807.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR807_PIE	(*(volatile uint_io8_t*)0xB720107C)  /*@bfbba@*/
#define PPC_PCFGR807_PID	(*(volatile uint_io8_t*)0xB720107D)  /*@bfbba@*/
#define PPC_PCFGR807_POD	(*(volatile uint_io8_t*)0xB720107E)  /*@bfbba@*/
#define PPC_PCFGR807_POE	(*(volatile uint_io8_t*)0xB720107F)  /*@bfbba@*/

#define PPC_PCFGR808	(PPC.unPCFGR808.u16Register)  /*@rg@*/
#define PPC_PCFGR808_POF	(PPC.unPCFGR808.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR808_NFE	(*(volatile uint_io8_t*)0xB7201085)  /*@bfbba@*/
#define PPC_PCFGR808_ODR	(PPC.unPCFGR808.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR808_PDE	(*(volatile uint_io8_t*)0xB7201088)  /*@bfbba@*/
#define PPC_PCFGR808_PUE	(*(volatile uint_io8_t*)0xB7201089)  /*@bfbba@*/
#define PPC_PCFGR808_PIL	(PPC.unPCFGR808.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR808_PIE	(*(volatile uint_io8_t*)0xB720108C)  /*@bfbba@*/
#define PPC_PCFGR808_PID	(*(volatile uint_io8_t*)0xB720108D)  /*@bfbba@*/
#define PPC_PCFGR808_POD	(*(volatile uint_io8_t*)0xB720108E)  /*@bfbba@*/
#define PPC_PCFGR808_POE	(*(volatile uint_io8_t*)0xB720108F)  /*@bfbba@*/

#define PPC_PCFGR809	(PPC.unPCFGR809.u16Register)  /*@rg@*/
#define PPC_PCFGR809_POF	(PPC.unPCFGR809.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR809_NFE	(*(volatile uint_io8_t*)0xB7201095)  /*@bfbba@*/
#define PPC_PCFGR809_ODR	(PPC.unPCFGR809.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR809_PDE	(*(volatile uint_io8_t*)0xB7201098)  /*@bfbba@*/
#define PPC_PCFGR809_PUE	(*(volatile uint_io8_t*)0xB7201099)  /*@bfbba@*/
#define PPC_PCFGR809_PIL	(PPC.unPCFGR809.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR809_PIE	(*(volatile uint_io8_t*)0xB720109C)  /*@bfbba@*/
#define PPC_PCFGR809_PID	(*(volatile uint_io8_t*)0xB720109D)  /*@bfbba@*/
#define PPC_PCFGR809_POD	(*(volatile uint_io8_t*)0xB720109E)  /*@bfbba@*/
#define PPC_PCFGR809_POE	(*(volatile uint_io8_t*)0xB720109F)  /*@bfbba@*/

#define PPC_PCFGR810	(PPC.unPCFGR810.u16Register)  /*@rg@*/
#define PPC_PCFGR810_POF	(PPC.unPCFGR810.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR810_NFE	(*(volatile uint_io8_t*)0xB72010A5)  /*@bfbba@*/
#define PPC_PCFGR810_ODR	(PPC.unPCFGR810.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR810_PDE	(*(volatile uint_io8_t*)0xB72010A8)  /*@bfbba@*/
#define PPC_PCFGR810_PUE	(*(volatile uint_io8_t*)0xB72010A9)  /*@bfbba@*/
#define PPC_PCFGR810_PIL	(PPC.unPCFGR810.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR810_PIE	(*(volatile uint_io8_t*)0xB72010AC)  /*@bfbba@*/
#define PPC_PCFGR810_PID	(*(volatile uint_io8_t*)0xB72010AD)  /*@bfbba@*/
#define PPC_PCFGR810_POD	(*(volatile uint_io8_t*)0xB72010AE)  /*@bfbba@*/
#define PPC_PCFGR810_POE	(*(volatile uint_io8_t*)0xB72010AF)  /*@bfbba@*/

#define PPC_PCFGR811	(PPC.unPCFGR811.u16Register)  /*@rg@*/
#define PPC_PCFGR811_POF	(PPC.unPCFGR811.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR811_NFE	(*(volatile uint_io8_t*)0xB72010B5)  /*@bfbba@*/
#define PPC_PCFGR811_ODR	(PPC.unPCFGR811.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR811_PDE	(*(volatile uint_io8_t*)0xB72010B8)  /*@bfbba@*/
#define PPC_PCFGR811_PUE	(*(volatile uint_io8_t*)0xB72010B9)  /*@bfbba@*/
#define PPC_PCFGR811_PIL	(PPC.unPCFGR811.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR811_PIE	(*(volatile uint_io8_t*)0xB72010BC)  /*@bfbba@*/
#define PPC_PCFGR811_PID	(*(volatile uint_io8_t*)0xB72010BD)  /*@bfbba@*/
#define PPC_PCFGR811_POD	(*(volatile uint_io8_t*)0xB72010BE)  /*@bfbba@*/
#define PPC_PCFGR811_POE	(*(volatile uint_io8_t*)0xB72010BF)  /*@bfbba@*/

#define PPC_PCFGR812	(PPC.unPCFGR812.u16Register)  /*@rg@*/
#define PPC_PCFGR812_POF	(PPC.unPCFGR812.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR812_NFE	(*(volatile uint_io8_t*)0xB72010C5)  /*@bfbba@*/
#define PPC_PCFGR812_ODR	(PPC.unPCFGR812.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR812_PDE	(*(volatile uint_io8_t*)0xB72010C8)  /*@bfbba@*/
#define PPC_PCFGR812_PUE	(*(volatile uint_io8_t*)0xB72010C9)  /*@bfbba@*/
#define PPC_PCFGR812_PIL	(PPC.unPCFGR812.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR812_PIE	(*(volatile uint_io8_t*)0xB72010CC)  /*@bfbba@*/
#define PPC_PCFGR812_PID	(*(volatile uint_io8_t*)0xB72010CD)  /*@bfbba@*/
#define PPC_PCFGR812_POD	(*(volatile uint_io8_t*)0xB72010CE)  /*@bfbba@*/
#define PPC_PCFGR812_POE	(*(volatile uint_io8_t*)0xB72010CF)  /*@bfbba@*/

#define PPC_PCFGR813	(PPC.unPCFGR813.u16Register)  /*@rg@*/
#define PPC_PCFGR813_POF	(PPC.unPCFGR813.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR813_NFE	(*(volatile uint_io8_t*)0xB72010D5)  /*@bfbba@*/
#define PPC_PCFGR813_ODR	(PPC.unPCFGR813.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR813_PDE	(*(volatile uint_io8_t*)0xB72010D8)  /*@bfbba@*/
#define PPC_PCFGR813_PUE	(*(volatile uint_io8_t*)0xB72010D9)  /*@bfbba@*/
#define PPC_PCFGR813_PIL	(PPC.unPCFGR813.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR813_PIE	(*(volatile uint_io8_t*)0xB72010DC)  /*@bfbba@*/
#define PPC_PCFGR813_PID	(*(volatile uint_io8_t*)0xB72010DD)  /*@bfbba@*/
#define PPC_PCFGR813_POD	(*(volatile uint_io8_t*)0xB72010DE)  /*@bfbba@*/
#define PPC_PCFGR813_POE	(*(volatile uint_io8_t*)0xB72010DF)  /*@bfbba@*/

#define PPC_PCFGR814	(PPC.unPCFGR814.u16Register)  /*@rg@*/
#define PPC_PCFGR814_POF	(PPC.unPCFGR814.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR814_NFE	(*(volatile uint_io8_t*)0xB72010E5)  /*@bfbba@*/
#define PPC_PCFGR814_ODR	(PPC.unPCFGR814.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR814_PDE	(*(volatile uint_io8_t*)0xB72010E8)  /*@bfbba@*/
#define PPC_PCFGR814_PUE	(*(volatile uint_io8_t*)0xB72010E9)  /*@bfbba@*/
#define PPC_PCFGR814_PIL	(PPC.unPCFGR814.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR814_PIE	(*(volatile uint_io8_t*)0xB72010EC)  /*@bfbba@*/
#define PPC_PCFGR814_PID	(*(volatile uint_io8_t*)0xB72010ED)  /*@bfbba@*/
#define PPC_PCFGR814_POD	(*(volatile uint_io8_t*)0xB72010EE)  /*@bfbba@*/
#define PPC_PCFGR814_POE	(*(volatile uint_io8_t*)0xB72010EF)  /*@bfbba@*/

#define PPC_PCFGR815	(PPC.unPCFGR815.u16Register)  /*@rg@*/
#define PPC_PCFGR815_POF	(PPC.unPCFGR815.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR815_NFE	(*(volatile uint_io8_t*)0xB72010F5)  /*@bfbba@*/
#define PPC_PCFGR815_ODR	(PPC.unPCFGR815.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR815_PDE	(*(volatile uint_io8_t*)0xB72010F8)  /*@bfbba@*/
#define PPC_PCFGR815_PUE	(*(volatile uint_io8_t*)0xB72010F9)  /*@bfbba@*/
#define PPC_PCFGR815_PIL	(PPC.unPCFGR815.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR815_PIE	(*(volatile uint_io8_t*)0xB72010FC)  /*@bfbba@*/
#define PPC_PCFGR815_PID	(*(volatile uint_io8_t*)0xB72010FD)  /*@bfbba@*/
#define PPC_PCFGR815_POD	(*(volatile uint_io8_t*)0xB72010FE)  /*@bfbba@*/
#define PPC_PCFGR815_POE	(*(volatile uint_io8_t*)0xB72010FF)  /*@bfbba@*/

#define PPC_PCFGR816	(PPC.unPCFGR816.u16Register)  /*@rg@*/
#define PPC_PCFGR816_POF	(PPC.unPCFGR816.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR816_NFE	(*(volatile uint_io8_t*)0xB7201105)  /*@bfbba@*/
#define PPC_PCFGR816_ODR	(PPC.unPCFGR816.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR816_PDE	(*(volatile uint_io8_t*)0xB7201108)  /*@bfbba@*/
#define PPC_PCFGR816_PUE	(*(volatile uint_io8_t*)0xB7201109)  /*@bfbba@*/
#define PPC_PCFGR816_PIL	(PPC.unPCFGR816.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR816_PIE	(*(volatile uint_io8_t*)0xB720110C)  /*@bfbba@*/
#define PPC_PCFGR816_PID	(*(volatile uint_io8_t*)0xB720110D)  /*@bfbba@*/
#define PPC_PCFGR816_POD	(*(volatile uint_io8_t*)0xB720110E)  /*@bfbba@*/
#define PPC_PCFGR816_POE	(*(volatile uint_io8_t*)0xB720110F)  /*@bfbba@*/

#define PPC_PCFGR817	(PPC.unPCFGR817.u16Register)  /*@rg@*/
#define PPC_PCFGR817_POF	(PPC.unPCFGR817.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR817_NFE	(*(volatile uint_io8_t*)0xB7201115)  /*@bfbba@*/
#define PPC_PCFGR817_ODR	(PPC.unPCFGR817.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR817_PDE	(*(volatile uint_io8_t*)0xB7201118)  /*@bfbba@*/
#define PPC_PCFGR817_PUE	(*(volatile uint_io8_t*)0xB7201119)  /*@bfbba@*/
#define PPC_PCFGR817_PIL	(PPC.unPCFGR817.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR817_PIE	(*(volatile uint_io8_t*)0xB720111C)  /*@bfbba@*/
#define PPC_PCFGR817_PID	(*(volatile uint_io8_t*)0xB720111D)  /*@bfbba@*/
#define PPC_PCFGR817_POD	(*(volatile uint_io8_t*)0xB720111E)  /*@bfbba@*/
#define PPC_PCFGR817_POE	(*(volatile uint_io8_t*)0xB720111F)  /*@bfbba@*/

#define PPC_PCFGR818	(PPC.unPCFGR818.u16Register)  /*@rg@*/
#define PPC_PCFGR818_POF	(PPC.unPCFGR818.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR818_NFE	(*(volatile uint_io8_t*)0xB7201125)  /*@bfbba@*/
#define PPC_PCFGR818_ODR	(PPC.unPCFGR818.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR818_PDE	(*(volatile uint_io8_t*)0xB7201128)  /*@bfbba@*/
#define PPC_PCFGR818_PUE	(*(volatile uint_io8_t*)0xB7201129)  /*@bfbba@*/
#define PPC_PCFGR818_PIL	(PPC.unPCFGR818.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR818_PIE	(*(volatile uint_io8_t*)0xB720112C)  /*@bfbba@*/
#define PPC_PCFGR818_PID	(*(volatile uint_io8_t*)0xB720112D)  /*@bfbba@*/
#define PPC_PCFGR818_POD	(*(volatile uint_io8_t*)0xB720112E)  /*@bfbba@*/
#define PPC_PCFGR818_POE	(*(volatile uint_io8_t*)0xB720112F)  /*@bfbba@*/

#define PPC_PCFGR819	(PPC.unPCFGR819.u16Register)  /*@rg@*/
#define PPC_PCFGR819_POF	(PPC.unPCFGR819.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR819_NFE	(*(volatile uint_io8_t*)0xB7201135)  /*@bfbba@*/
#define PPC_PCFGR819_ODR	(PPC.unPCFGR819.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR819_PDE	(*(volatile uint_io8_t*)0xB7201138)  /*@bfbba@*/
#define PPC_PCFGR819_PUE	(*(volatile uint_io8_t*)0xB7201139)  /*@bfbba@*/
#define PPC_PCFGR819_PIL	(PPC.unPCFGR819.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR819_PIE	(*(volatile uint_io8_t*)0xB720113C)  /*@bfbba@*/
#define PPC_PCFGR819_PID	(*(volatile uint_io8_t*)0xB720113D)  /*@bfbba@*/
#define PPC_PCFGR819_POD	(*(volatile uint_io8_t*)0xB720113E)  /*@bfbba@*/
#define PPC_PCFGR819_POE	(*(volatile uint_io8_t*)0xB720113F)  /*@bfbba@*/

#define PPC_PCFGR820	(PPC.unPCFGR820.u16Register)  /*@rg@*/
#define PPC_PCFGR820_POF	(PPC.unPCFGR820.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR820_NFE	(*(volatile uint_io8_t*)0xB7201145)  /*@bfbba@*/
#define PPC_PCFGR820_ODR	(PPC.unPCFGR820.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR820_PDE	(*(volatile uint_io8_t*)0xB7201148)  /*@bfbba@*/
#define PPC_PCFGR820_PUE	(*(volatile uint_io8_t*)0xB7201149)  /*@bfbba@*/
#define PPC_PCFGR820_PIL	(PPC.unPCFGR820.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR820_PIE	(*(volatile uint_io8_t*)0xB720114C)  /*@bfbba@*/
#define PPC_PCFGR820_PID	(*(volatile uint_io8_t*)0xB720114D)  /*@bfbba@*/
#define PPC_PCFGR820_POD	(*(volatile uint_io8_t*)0xB720114E)  /*@bfbba@*/
#define PPC_PCFGR820_POE	(*(volatile uint_io8_t*)0xB720114F)  /*@bfbba@*/

#define PPC_PCFGR821	(PPC.unPCFGR821.u16Register)  /*@rg@*/
#define PPC_PCFGR821_POF	(PPC.unPCFGR821.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR821_NFE	(*(volatile uint_io8_t*)0xB7201155)  /*@bfbba@*/
#define PPC_PCFGR821_ODR	(PPC.unPCFGR821.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR821_PDE	(*(volatile uint_io8_t*)0xB7201158)  /*@bfbba@*/
#define PPC_PCFGR821_PUE	(*(volatile uint_io8_t*)0xB7201159)  /*@bfbba@*/
#define PPC_PCFGR821_PIL	(PPC.unPCFGR821.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR821_PIE	(*(volatile uint_io8_t*)0xB720115C)  /*@bfbba@*/
#define PPC_PCFGR821_PID	(*(volatile uint_io8_t*)0xB720115D)  /*@bfbba@*/
#define PPC_PCFGR821_POD	(*(volatile uint_io8_t*)0xB720115E)  /*@bfbba@*/
#define PPC_PCFGR821_POE	(*(volatile uint_io8_t*)0xB720115F)  /*@bfbba@*/

#define PPC_PCFGR822	(PPC.unPCFGR822.u16Register)  /*@rg@*/
#define PPC_PCFGR822_POF	(PPC.unPCFGR822.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR822_NFE	(*(volatile uint_io8_t*)0xB7201165)  /*@bfbba@*/
#define PPC_PCFGR822_ODR	(PPC.unPCFGR822.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR822_PDE	(*(volatile uint_io8_t*)0xB7201168)  /*@bfbba@*/
#define PPC_PCFGR822_PUE	(*(volatile uint_io8_t*)0xB7201169)  /*@bfbba@*/
#define PPC_PCFGR822_PIL	(PPC.unPCFGR822.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR822_PIE	(*(volatile uint_io8_t*)0xB720116C)  /*@bfbba@*/
#define PPC_PCFGR822_PID	(*(volatile uint_io8_t*)0xB720116D)  /*@bfbba@*/
#define PPC_PCFGR822_POD	(*(volatile uint_io8_t*)0xB720116E)  /*@bfbba@*/
#define PPC_PCFGR822_POE	(*(volatile uint_io8_t*)0xB720116F)  /*@bfbba@*/

#define PPC_PCFGR823	(PPC.unPCFGR823.u16Register)  /*@rg@*/
#define PPC_PCFGR823_POF	(PPC.unPCFGR823.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR823_NFE	(*(volatile uint_io8_t*)0xB7201175)  /*@bfbba@*/
#define PPC_PCFGR823_ODR	(PPC.unPCFGR823.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR823_PDE	(*(volatile uint_io8_t*)0xB7201178)  /*@bfbba@*/
#define PPC_PCFGR823_PUE	(*(volatile uint_io8_t*)0xB7201179)  /*@bfbba@*/
#define PPC_PCFGR823_PIL	(PPC.unPCFGR823.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR823_PIE	(*(volatile uint_io8_t*)0xB720117C)  /*@bfbba@*/
#define PPC_PCFGR823_PID	(*(volatile uint_io8_t*)0xB720117D)  /*@bfbba@*/
#define PPC_PCFGR823_POD	(*(volatile uint_io8_t*)0xB720117E)  /*@bfbba@*/
#define PPC_PCFGR823_POE	(*(volatile uint_io8_t*)0xB720117F)  /*@bfbba@*/

#define PPC_PCFGR824	(PPC.unPCFGR824.u16Register)  /*@rg@*/
#define PPC_PCFGR824_POF	(PPC.unPCFGR824.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR824_NFE	(*(volatile uint_io8_t*)0xB7201185)  /*@bfbba@*/
#define PPC_PCFGR824_ODR	(PPC.unPCFGR824.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR824_PDE	(*(volatile uint_io8_t*)0xB7201188)  /*@bfbba@*/
#define PPC_PCFGR824_PUE	(*(volatile uint_io8_t*)0xB7201189)  /*@bfbba@*/
#define PPC_PCFGR824_PIL	(PPC.unPCFGR824.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR824_PIE	(*(volatile uint_io8_t*)0xB720118C)  /*@bfbba@*/
#define PPC_PCFGR824_PID	(*(volatile uint_io8_t*)0xB720118D)  /*@bfbba@*/
#define PPC_PCFGR824_POD	(*(volatile uint_io8_t*)0xB720118E)  /*@bfbba@*/
#define PPC_PCFGR824_POE	(*(volatile uint_io8_t*)0xB720118F)  /*@bfbba@*/

#define PPC_PCFGR825	(PPC.unPCFGR825.u16Register)  /*@rg@*/
#define PPC_PCFGR825_POF	(PPC.unPCFGR825.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR825_NFE	(*(volatile uint_io8_t*)0xB7201195)  /*@bfbba@*/
#define PPC_PCFGR825_ODR	(PPC.unPCFGR825.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR825_PDE	(*(volatile uint_io8_t*)0xB7201198)  /*@bfbba@*/
#define PPC_PCFGR825_PUE	(*(volatile uint_io8_t*)0xB7201199)  /*@bfbba@*/
#define PPC_PCFGR825_PIL	(PPC.unPCFGR825.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR825_PIE	(*(volatile uint_io8_t*)0xB720119C)  /*@bfbba@*/
#define PPC_PCFGR825_PID	(*(volatile uint_io8_t*)0xB720119D)  /*@bfbba@*/
#define PPC_PCFGR825_POD	(*(volatile uint_io8_t*)0xB720119E)  /*@bfbba@*/
#define PPC_PCFGR825_POE	(*(volatile uint_io8_t*)0xB720119F)  /*@bfbba@*/

#define PPC_PCFGR826	(PPC.unPCFGR826.u16Register)  /*@rg@*/
#define PPC_PCFGR826_POF	(PPC.unPCFGR826.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR826_NFE	(*(volatile uint_io8_t*)0xB72011A5)  /*@bfbba@*/
#define PPC_PCFGR826_ODR	(PPC.unPCFGR826.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR826_PDE	(*(volatile uint_io8_t*)0xB72011A8)  /*@bfbba@*/
#define PPC_PCFGR826_PUE	(*(volatile uint_io8_t*)0xB72011A9)  /*@bfbba@*/
#define PPC_PCFGR826_PIL	(PPC.unPCFGR826.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR826_PIE	(*(volatile uint_io8_t*)0xB72011AC)  /*@bfbba@*/
#define PPC_PCFGR826_PID	(*(volatile uint_io8_t*)0xB72011AD)  /*@bfbba@*/
#define PPC_PCFGR826_POD	(*(volatile uint_io8_t*)0xB72011AE)  /*@bfbba@*/
#define PPC_PCFGR826_POE	(*(volatile uint_io8_t*)0xB72011AF)  /*@bfbba@*/

#define PPC_PCFGR827	(PPC.unPCFGR827.u16Register)  /*@rg@*/
#define PPC_PCFGR827_POF	(PPC.unPCFGR827.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR827_NFE	(*(volatile uint_io8_t*)0xB72011B5)  /*@bfbba@*/
#define PPC_PCFGR827_ODR	(PPC.unPCFGR827.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR827_PDE	(*(volatile uint_io8_t*)0xB72011B8)  /*@bfbba@*/
#define PPC_PCFGR827_PUE	(*(volatile uint_io8_t*)0xB72011B9)  /*@bfbba@*/
#define PPC_PCFGR827_PIL	(PPC.unPCFGR827.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR827_PIE	(*(volatile uint_io8_t*)0xB72011BC)  /*@bfbba@*/
#define PPC_PCFGR827_PID	(*(volatile uint_io8_t*)0xB72011BD)  /*@bfbba@*/
#define PPC_PCFGR827_POD	(*(volatile uint_io8_t*)0xB72011BE)  /*@bfbba@*/
#define PPC_PCFGR827_POE	(*(volatile uint_io8_t*)0xB72011BF)  /*@bfbba@*/

#define PPC_PCFGR828	(PPC.unPCFGR828.u16Register)  /*@rg@*/
#define PPC_PCFGR828_POF	(PPC.unPCFGR828.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR828_NFE	(*(volatile uint_io8_t*)0xB72011C5)  /*@bfbba@*/
#define PPC_PCFGR828_ODR	(PPC.unPCFGR828.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR828_PDE	(*(volatile uint_io8_t*)0xB72011C8)  /*@bfbba@*/
#define PPC_PCFGR828_PUE	(*(volatile uint_io8_t*)0xB72011C9)  /*@bfbba@*/
#define PPC_PCFGR828_PIL	(PPC.unPCFGR828.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR828_PIE	(*(volatile uint_io8_t*)0xB72011CC)  /*@bfbba@*/
#define PPC_PCFGR828_PID	(*(volatile uint_io8_t*)0xB72011CD)  /*@bfbba@*/
#define PPC_PCFGR828_POD	(*(volatile uint_io8_t*)0xB72011CE)  /*@bfbba@*/
#define PPC_PCFGR828_POE	(*(volatile uint_io8_t*)0xB72011CF)  /*@bfbba@*/

#define PPC_PCFGR829	(PPC.unPCFGR829.u16Register)  /*@rg@*/
#define PPC_PCFGR829_POF	(PPC.unPCFGR829.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR829_NFE	(*(volatile uint_io8_t*)0xB72011D5)  /*@bfbba@*/
#define PPC_PCFGR829_ODR	(PPC.unPCFGR829.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR829_PDE	(*(volatile uint_io8_t*)0xB72011D8)  /*@bfbba@*/
#define PPC_PCFGR829_PUE	(*(volatile uint_io8_t*)0xB72011D9)  /*@bfbba@*/
#define PPC_PCFGR829_PIL	(PPC.unPCFGR829.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR829_PIE	(*(volatile uint_io8_t*)0xB72011DC)  /*@bfbba@*/
#define PPC_PCFGR829_PID	(*(volatile uint_io8_t*)0xB72011DD)  /*@bfbba@*/
#define PPC_PCFGR829_POD	(*(volatile uint_io8_t*)0xB72011DE)  /*@bfbba@*/
#define PPC_PCFGR829_POE	(*(volatile uint_io8_t*)0xB72011DF)  /*@bfbba@*/

#define PPC_PCFGR830	(PPC.unPCFGR830.u16Register)  /*@rg@*/
#define PPC_PCFGR830_POF	(PPC.unPCFGR830.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR830_NFE	(*(volatile uint_io8_t*)0xB72011E5)  /*@bfbba@*/
#define PPC_PCFGR830_ODR	(PPC.unPCFGR830.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR830_PDE	(*(volatile uint_io8_t*)0xB72011E8)  /*@bfbba@*/
#define PPC_PCFGR830_PUE	(*(volatile uint_io8_t*)0xB72011E9)  /*@bfbba@*/
#define PPC_PCFGR830_PIL	(PPC.unPCFGR830.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR830_PIE	(*(volatile uint_io8_t*)0xB72011EC)  /*@bfbba@*/
#define PPC_PCFGR830_PID	(*(volatile uint_io8_t*)0xB72011ED)  /*@bfbba@*/
#define PPC_PCFGR830_POD	(*(volatile uint_io8_t*)0xB72011EE)  /*@bfbba@*/
#define PPC_PCFGR830_POE	(*(volatile uint_io8_t*)0xB72011EF)  /*@bfbba@*/

#define PPC_PCFGR831	(PPC.unPCFGR831.u16Register)  /*@rg@*/
#define PPC_PCFGR831_POF	(PPC.unPCFGR831.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR831_NFE	(*(volatile uint_io8_t*)0xB72011F5)  /*@bfbba@*/
#define PPC_PCFGR831_ODR	(PPC.unPCFGR831.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR831_PDE	(*(volatile uint_io8_t*)0xB72011F8)  /*@bfbba@*/
#define PPC_PCFGR831_PUE	(*(volatile uint_io8_t*)0xB72011F9)  /*@bfbba@*/
#define PPC_PCFGR831_PIL	(PPC.unPCFGR831.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR831_PIE	(*(volatile uint_io8_t*)0xB72011FC)  /*@bfbba@*/
#define PPC_PCFGR831_PID	(*(volatile uint_io8_t*)0xB72011FD)  /*@bfbba@*/
#define PPC_PCFGR831_POD	(*(volatile uint_io8_t*)0xB72011FE)  /*@bfbba@*/
#define PPC_PCFGR831_POE	(*(volatile uint_io8_t*)0xB72011FF)  /*@bfbba@*/

#define PPC_PCFGR900	(PPC.unPCFGR900.u16Register)  /*@rg@*/
#define PPC_PCFGR900_POF	(PPC.unPCFGR900.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR900_NFE	(*(volatile uint_io8_t*)0xB7201205)  /*@bfbba@*/
#define PPC_PCFGR900_ODR	(PPC.unPCFGR900.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR900_PDE	(*(volatile uint_io8_t*)0xB7201208)  /*@bfbba@*/
#define PPC_PCFGR900_PUE	(*(volatile uint_io8_t*)0xB7201209)  /*@bfbba@*/
#define PPC_PCFGR900_PIL	(PPC.unPCFGR900.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR900_PIE	(*(volatile uint_io8_t*)0xB720120C)  /*@bfbba@*/
#define PPC_PCFGR900_PID	(*(volatile uint_io8_t*)0xB720120D)  /*@bfbba@*/
#define PPC_PCFGR900_POD	(*(volatile uint_io8_t*)0xB720120E)  /*@bfbba@*/
#define PPC_PCFGR900_POE	(*(volatile uint_io8_t*)0xB720120F)  /*@bfbba@*/

#define PPC_PCFGR901	(PPC.unPCFGR901.u16Register)  /*@rg@*/
#define PPC_PCFGR901_POF	(PPC.unPCFGR901.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR901_NFE	(*(volatile uint_io8_t*)0xB7201215)  /*@bfbba@*/
#define PPC_PCFGR901_ODR	(PPC.unPCFGR901.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR901_PDE	(*(volatile uint_io8_t*)0xB7201218)  /*@bfbba@*/
#define PPC_PCFGR901_PUE	(*(volatile uint_io8_t*)0xB7201219)  /*@bfbba@*/
#define PPC_PCFGR901_PIL	(PPC.unPCFGR901.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR901_PIE	(*(volatile uint_io8_t*)0xB720121C)  /*@bfbba@*/
#define PPC_PCFGR901_PID	(*(volatile uint_io8_t*)0xB720121D)  /*@bfbba@*/
#define PPC_PCFGR901_POD	(*(volatile uint_io8_t*)0xB720121E)  /*@bfbba@*/
#define PPC_PCFGR901_POE	(*(volatile uint_io8_t*)0xB720121F)  /*@bfbba@*/

#define PPC_PCFGR902	(PPC.unPCFGR902.u16Register)  /*@rg@*/
#define PPC_PCFGR902_POF	(PPC.unPCFGR902.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR902_NFE	(*(volatile uint_io8_t*)0xB7201225)  /*@bfbba@*/
#define PPC_PCFGR902_ODR	(PPC.unPCFGR902.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR902_PDE	(*(volatile uint_io8_t*)0xB7201228)  /*@bfbba@*/
#define PPC_PCFGR902_PUE	(*(volatile uint_io8_t*)0xB7201229)  /*@bfbba@*/
#define PPC_PCFGR902_PIL	(PPC.unPCFGR902.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR902_PIE	(*(volatile uint_io8_t*)0xB720122C)  /*@bfbba@*/
#define PPC_PCFGR902_PID	(*(volatile uint_io8_t*)0xB720122D)  /*@bfbba@*/
#define PPC_PCFGR902_POD	(*(volatile uint_io8_t*)0xB720122E)  /*@bfbba@*/
#define PPC_PCFGR902_POE	(*(volatile uint_io8_t*)0xB720122F)  /*@bfbba@*/

#define PPC_PCFGR903	(PPC.unPCFGR903.u16Register)  /*@rg@*/
#define PPC_PCFGR903_POF	(PPC.unPCFGR903.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR903_NFE	(*(volatile uint_io8_t*)0xB7201235)  /*@bfbba@*/
#define PPC_PCFGR903_ODR	(PPC.unPCFGR903.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR903_PDE	(*(volatile uint_io8_t*)0xB7201238)  /*@bfbba@*/
#define PPC_PCFGR903_PUE	(*(volatile uint_io8_t*)0xB7201239)  /*@bfbba@*/
#define PPC_PCFGR903_PIL	(PPC.unPCFGR903.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR903_PIE	(*(volatile uint_io8_t*)0xB720123C)  /*@bfbba@*/
#define PPC_PCFGR903_PID	(*(volatile uint_io8_t*)0xB720123D)  /*@bfbba@*/
#define PPC_PCFGR903_POD	(*(volatile uint_io8_t*)0xB720123E)  /*@bfbba@*/
#define PPC_PCFGR903_POE	(*(volatile uint_io8_t*)0xB720123F)  /*@bfbba@*/

#define PPC_PCFGR904	(PPC.unPCFGR904.u16Register)  /*@rg@*/
#define PPC_PCFGR904_POF	(PPC.unPCFGR904.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR904_NFE	(*(volatile uint_io8_t*)0xB7201245)  /*@bfbba@*/
#define PPC_PCFGR904_ODR	(PPC.unPCFGR904.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR904_PDE	(*(volatile uint_io8_t*)0xB7201248)  /*@bfbba@*/
#define PPC_PCFGR904_PUE	(*(volatile uint_io8_t*)0xB7201249)  /*@bfbba@*/
#define PPC_PCFGR904_PIL	(PPC.unPCFGR904.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR904_PIE	(*(volatile uint_io8_t*)0xB720124C)  /*@bfbba@*/
#define PPC_PCFGR904_PID	(*(volatile uint_io8_t*)0xB720124D)  /*@bfbba@*/
#define PPC_PCFGR904_POD	(*(volatile uint_io8_t*)0xB720124E)  /*@bfbba@*/
#define PPC_PCFGR904_POE	(*(volatile uint_io8_t*)0xB720124F)  /*@bfbba@*/

#define PPC_PCFGR905	(PPC.unPCFGR905.u16Register)  /*@rg@*/
#define PPC_PCFGR905_POF	(PPC.unPCFGR905.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR905_NFE	(*(volatile uint_io8_t*)0xB7201255)  /*@bfbba@*/
#define PPC_PCFGR905_ODR	(PPC.unPCFGR905.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR905_PDE	(*(volatile uint_io8_t*)0xB7201258)  /*@bfbba@*/
#define PPC_PCFGR905_PUE	(*(volatile uint_io8_t*)0xB7201259)  /*@bfbba@*/
#define PPC_PCFGR905_PIL	(PPC.unPCFGR905.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR905_PIE	(*(volatile uint_io8_t*)0xB720125C)  /*@bfbba@*/
#define PPC_PCFGR905_PID	(*(volatile uint_io8_t*)0xB720125D)  /*@bfbba@*/
#define PPC_PCFGR905_POD	(*(volatile uint_io8_t*)0xB720125E)  /*@bfbba@*/
#define PPC_PCFGR905_POE	(*(volatile uint_io8_t*)0xB720125F)  /*@bfbba@*/

#define PPC_PCFGR906	(PPC.unPCFGR906.u16Register)  /*@rg@*/
#define PPC_PCFGR906_POF	(PPC.unPCFGR906.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR906_NFE	(*(volatile uint_io8_t*)0xB7201265)  /*@bfbba@*/
#define PPC_PCFGR906_ODR	(PPC.unPCFGR906.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR906_PDE	(*(volatile uint_io8_t*)0xB7201268)  /*@bfbba@*/
#define PPC_PCFGR906_PUE	(*(volatile uint_io8_t*)0xB7201269)  /*@bfbba@*/
#define PPC_PCFGR906_PIL	(PPC.unPCFGR906.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR906_PIE	(*(volatile uint_io8_t*)0xB720126C)  /*@bfbba@*/
#define PPC_PCFGR906_PID	(*(volatile uint_io8_t*)0xB720126D)  /*@bfbba@*/
#define PPC_PCFGR906_POD	(*(volatile uint_io8_t*)0xB720126E)  /*@bfbba@*/
#define PPC_PCFGR906_POE	(*(volatile uint_io8_t*)0xB720126F)  /*@bfbba@*/

#define PPC_PCFGR907	(PPC.unPCFGR907.u16Register)  /*@rg@*/
#define PPC_PCFGR907_POF	(PPC.unPCFGR907.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR907_NFE	(*(volatile uint_io8_t*)0xB7201275)  /*@bfbba@*/
#define PPC_PCFGR907_ODR	(PPC.unPCFGR907.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR907_PDE	(*(volatile uint_io8_t*)0xB7201278)  /*@bfbba@*/
#define PPC_PCFGR907_PUE	(*(volatile uint_io8_t*)0xB7201279)  /*@bfbba@*/
#define PPC_PCFGR907_PIL	(PPC.unPCFGR907.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR907_PIE	(*(volatile uint_io8_t*)0xB720127C)  /*@bfbba@*/
#define PPC_PCFGR907_PID	(*(volatile uint_io8_t*)0xB720127D)  /*@bfbba@*/
#define PPC_PCFGR907_POD	(*(volatile uint_io8_t*)0xB720127E)  /*@bfbba@*/
#define PPC_PCFGR907_POE	(*(volatile uint_io8_t*)0xB720127F)  /*@bfbba@*/

#define PPC_PCFGR908	(PPC.unPCFGR908.u16Register)  /*@rg@*/
#define PPC_PCFGR908_POF	(PPC.unPCFGR908.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR908_NFE	(*(volatile uint_io8_t*)0xB7201285)  /*@bfbba@*/
#define PPC_PCFGR908_ODR	(PPC.unPCFGR908.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR908_PDE	(*(volatile uint_io8_t*)0xB7201288)  /*@bfbba@*/
#define PPC_PCFGR908_PUE	(*(volatile uint_io8_t*)0xB7201289)  /*@bfbba@*/
#define PPC_PCFGR908_PIL	(PPC.unPCFGR908.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR908_PIE	(*(volatile uint_io8_t*)0xB720128C)  /*@bfbba@*/
#define PPC_PCFGR908_PID	(*(volatile uint_io8_t*)0xB720128D)  /*@bfbba@*/
#define PPC_PCFGR908_POD	(*(volatile uint_io8_t*)0xB720128E)  /*@bfbba@*/
#define PPC_PCFGR908_POE	(*(volatile uint_io8_t*)0xB720128F)  /*@bfbba@*/

#define PPC_PCFGR909	(PPC.unPCFGR909.u16Register)  /*@rg@*/
#define PPC_PCFGR909_POF	(PPC.unPCFGR909.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR909_NFE	(*(volatile uint_io8_t*)0xB7201295)  /*@bfbba@*/
#define PPC_PCFGR909_ODR	(PPC.unPCFGR909.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR909_PDE	(*(volatile uint_io8_t*)0xB7201298)  /*@bfbba@*/
#define PPC_PCFGR909_PUE	(*(volatile uint_io8_t*)0xB7201299)  /*@bfbba@*/
#define PPC_PCFGR909_PIL	(PPC.unPCFGR909.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR909_PIE	(*(volatile uint_io8_t*)0xB720129C)  /*@bfbba@*/
#define PPC_PCFGR909_PID	(*(volatile uint_io8_t*)0xB720129D)  /*@bfbba@*/
#define PPC_PCFGR909_POD	(*(volatile uint_io8_t*)0xB720129E)  /*@bfbba@*/
#define PPC_PCFGR909_POE	(*(volatile uint_io8_t*)0xB720129F)  /*@bfbba@*/

#define PPC_PCFGR910	(PPC.unPCFGR910.u16Register)  /*@rg@*/
#define PPC_PCFGR910_POF	(PPC.unPCFGR910.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR910_NFE	(*(volatile uint_io8_t*)0xB72012A5)  /*@bfbba@*/
#define PPC_PCFGR910_ODR	(PPC.unPCFGR910.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR910_PDE	(*(volatile uint_io8_t*)0xB72012A8)  /*@bfbba@*/
#define PPC_PCFGR910_PUE	(*(volatile uint_io8_t*)0xB72012A9)  /*@bfbba@*/
#define PPC_PCFGR910_PIL	(PPC.unPCFGR910.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR910_PIE	(*(volatile uint_io8_t*)0xB72012AC)  /*@bfbba@*/
#define PPC_PCFGR910_PID	(*(volatile uint_io8_t*)0xB72012AD)  /*@bfbba@*/
#define PPC_PCFGR910_POD	(*(volatile uint_io8_t*)0xB72012AE)  /*@bfbba@*/
#define PPC_PCFGR910_POE	(*(volatile uint_io8_t*)0xB72012AF)  /*@bfbba@*/

#define PPC_PCFGR911	(PPC.unPCFGR911.u16Register)  /*@rg@*/
#define PPC_PCFGR911_POF	(PPC.unPCFGR911.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR911_NFE	(*(volatile uint_io8_t*)0xB72012B5)  /*@bfbba@*/
#define PPC_PCFGR911_ODR	(PPC.unPCFGR911.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR911_PDE	(*(volatile uint_io8_t*)0xB72012B8)  /*@bfbba@*/
#define PPC_PCFGR911_PUE	(*(volatile uint_io8_t*)0xB72012B9)  /*@bfbba@*/
#define PPC_PCFGR911_PIL	(PPC.unPCFGR911.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR911_PIE	(*(volatile uint_io8_t*)0xB72012BC)  /*@bfbba@*/
#define PPC_PCFGR911_PID	(*(volatile uint_io8_t*)0xB72012BD)  /*@bfbba@*/
#define PPC_PCFGR911_POD	(*(volatile uint_io8_t*)0xB72012BE)  /*@bfbba@*/
#define PPC_PCFGR911_POE	(*(volatile uint_io8_t*)0xB72012BF)  /*@bfbba@*/

#define PPC_PCFGR912	(PPC.unPCFGR912.u16Register)  /*@rg@*/
#define PPC_PCFGR912_POF	(PPC.unPCFGR912.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR912_NFE	(*(volatile uint_io8_t*)0xB72012C5)  /*@bfbba@*/
#define PPC_PCFGR912_ODR	(PPC.unPCFGR912.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR912_PDE	(*(volatile uint_io8_t*)0xB72012C8)  /*@bfbba@*/
#define PPC_PCFGR912_PUE	(*(volatile uint_io8_t*)0xB72012C9)  /*@bfbba@*/
#define PPC_PCFGR912_PIL	(PPC.unPCFGR912.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR912_PIE	(*(volatile uint_io8_t*)0xB72012CC)  /*@bfbba@*/
#define PPC_PCFGR912_PID	(*(volatile uint_io8_t*)0xB72012CD)  /*@bfbba@*/
#define PPC_PCFGR912_POD	(*(volatile uint_io8_t*)0xB72012CE)  /*@bfbba@*/
#define PPC_PCFGR912_POE	(*(volatile uint_io8_t*)0xB72012CF)  /*@bfbba@*/

#define PPC_PCFGR913	(PPC.unPCFGR913.u16Register)  /*@rg@*/
#define PPC_PCFGR913_POF	(PPC.unPCFGR913.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR913_NFE	(*(volatile uint_io8_t*)0xB72012D5)  /*@bfbba@*/
#define PPC_PCFGR913_ODR	(PPC.unPCFGR913.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR913_PDE	(*(volatile uint_io8_t*)0xB72012D8)  /*@bfbba@*/
#define PPC_PCFGR913_PUE	(*(volatile uint_io8_t*)0xB72012D9)  /*@bfbba@*/
#define PPC_PCFGR913_PIL	(PPC.unPCFGR913.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR913_PIE	(*(volatile uint_io8_t*)0xB72012DC)  /*@bfbba@*/
#define PPC_PCFGR913_PID	(*(volatile uint_io8_t*)0xB72012DD)  /*@bfbba@*/
#define PPC_PCFGR913_POD	(*(volatile uint_io8_t*)0xB72012DE)  /*@bfbba@*/
#define PPC_PCFGR913_POE	(*(volatile uint_io8_t*)0xB72012DF)  /*@bfbba@*/

#define PPC_PCFGR914	(PPC.unPCFGR914.u16Register)  /*@rg@*/
#define PPC_PCFGR914_POF	(PPC.unPCFGR914.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR914_NFE	(*(volatile uint_io8_t*)0xB72012E5)  /*@bfbba@*/
#define PPC_PCFGR914_ODR	(PPC.unPCFGR914.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR914_PDE	(*(volatile uint_io8_t*)0xB72012E8)  /*@bfbba@*/
#define PPC_PCFGR914_PUE	(*(volatile uint_io8_t*)0xB72012E9)  /*@bfbba@*/
#define PPC_PCFGR914_PIL	(PPC.unPCFGR914.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR914_PIE	(*(volatile uint_io8_t*)0xB72012EC)  /*@bfbba@*/
#define PPC_PCFGR914_PID	(*(volatile uint_io8_t*)0xB72012ED)  /*@bfbba@*/
#define PPC_PCFGR914_POD	(*(volatile uint_io8_t*)0xB72012EE)  /*@bfbba@*/
#define PPC_PCFGR914_POE	(*(volatile uint_io8_t*)0xB72012EF)  /*@bfbba@*/

#define PPC_PCFGR915	(PPC.unPCFGR915.u16Register)  /*@rg@*/
#define PPC_PCFGR915_POF	(PPC.unPCFGR915.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR915_NFE	(*(volatile uint_io8_t*)0xB72012F5)  /*@bfbba@*/
#define PPC_PCFGR915_ODR	(PPC.unPCFGR915.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR915_PDE	(*(volatile uint_io8_t*)0xB72012F8)  /*@bfbba@*/
#define PPC_PCFGR915_PUE	(*(volatile uint_io8_t*)0xB72012F9)  /*@bfbba@*/
#define PPC_PCFGR915_PIL	(PPC.unPCFGR915.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR915_PIE	(*(volatile uint_io8_t*)0xB72012FC)  /*@bfbba@*/
#define PPC_PCFGR915_PID	(*(volatile uint_io8_t*)0xB72012FD)  /*@bfbba@*/
#define PPC_PCFGR915_POD	(*(volatile uint_io8_t*)0xB72012FE)  /*@bfbba@*/
#define PPC_PCFGR915_POE	(*(volatile uint_io8_t*)0xB72012FF)  /*@bfbba@*/

#define PPC_PCFGR916	(PPC.unPCFGR916.u16Register)  /*@rg@*/
#define PPC_PCFGR916_POF	(PPC.unPCFGR916.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR916_NFE	(*(volatile uint_io8_t*)0xB7201305)  /*@bfbba@*/
#define PPC_PCFGR916_ODR	(PPC.unPCFGR916.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR916_PDE	(*(volatile uint_io8_t*)0xB7201308)  /*@bfbba@*/
#define PPC_PCFGR916_PUE	(*(volatile uint_io8_t*)0xB7201309)  /*@bfbba@*/
#define PPC_PCFGR916_PIL	(PPC.unPCFGR916.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR916_PIE	(*(volatile uint_io8_t*)0xB720130C)  /*@bfbba@*/
#define PPC_PCFGR916_PID	(*(volatile uint_io8_t*)0xB720130D)  /*@bfbba@*/
#define PPC_PCFGR916_POD	(*(volatile uint_io8_t*)0xB720130E)  /*@bfbba@*/
#define PPC_PCFGR916_POE	(*(volatile uint_io8_t*)0xB720130F)  /*@bfbba@*/

#define PPC_PCFGR917	(PPC.unPCFGR917.u16Register)  /*@rg@*/
#define PPC_PCFGR917_POF	(PPC.unPCFGR917.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR917_NFE	(*(volatile uint_io8_t*)0xB7201315)  /*@bfbba@*/
#define PPC_PCFGR917_ODR	(PPC.unPCFGR917.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR917_PDE	(*(volatile uint_io8_t*)0xB7201318)  /*@bfbba@*/
#define PPC_PCFGR917_PUE	(*(volatile uint_io8_t*)0xB7201319)  /*@bfbba@*/
#define PPC_PCFGR917_PIL	(PPC.unPCFGR917.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR917_PIE	(*(volatile uint_io8_t*)0xB720131C)  /*@bfbba@*/
#define PPC_PCFGR917_PID	(*(volatile uint_io8_t*)0xB720131D)  /*@bfbba@*/
#define PPC_PCFGR917_POD	(*(volatile uint_io8_t*)0xB720131E)  /*@bfbba@*/
#define PPC_PCFGR917_POE	(*(volatile uint_io8_t*)0xB720131F)  /*@bfbba@*/

#define PPC_PCFGR918	(PPC.unPCFGR918.u16Register)  /*@rg@*/
#define PPC_PCFGR918_POF	(PPC.unPCFGR918.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR918_NFE	(*(volatile uint_io8_t*)0xB7201325)  /*@bfbba@*/
#define PPC_PCFGR918_ODR	(PPC.unPCFGR918.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR918_PDE	(*(volatile uint_io8_t*)0xB7201328)  /*@bfbba@*/
#define PPC_PCFGR918_PUE	(*(volatile uint_io8_t*)0xB7201329)  /*@bfbba@*/
#define PPC_PCFGR918_PIL	(PPC.unPCFGR918.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR918_PIE	(*(volatile uint_io8_t*)0xB720132C)  /*@bfbba@*/
#define PPC_PCFGR918_PID	(*(volatile uint_io8_t*)0xB720132D)  /*@bfbba@*/
#define PPC_PCFGR918_POD	(*(volatile uint_io8_t*)0xB720132E)  /*@bfbba@*/
#define PPC_PCFGR918_POE	(*(volatile uint_io8_t*)0xB720132F)  /*@bfbba@*/

#define PPC_PCFGR919	(PPC.unPCFGR919.u16Register)  /*@rg@*/
#define PPC_PCFGR919_POF	(PPC.unPCFGR919.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR919_NFE	(*(volatile uint_io8_t*)0xB7201335)  /*@bfbba@*/
#define PPC_PCFGR919_ODR	(PPC.unPCFGR919.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR919_PDE	(*(volatile uint_io8_t*)0xB7201338)  /*@bfbba@*/
#define PPC_PCFGR919_PUE	(*(volatile uint_io8_t*)0xB7201339)  /*@bfbba@*/
#define PPC_PCFGR919_PIL	(PPC.unPCFGR919.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR919_PIE	(*(volatile uint_io8_t*)0xB720133C)  /*@bfbba@*/
#define PPC_PCFGR919_PID	(*(volatile uint_io8_t*)0xB720133D)  /*@bfbba@*/
#define PPC_PCFGR919_POD	(*(volatile uint_io8_t*)0xB720133E)  /*@bfbba@*/
#define PPC_PCFGR919_POE	(*(volatile uint_io8_t*)0xB720133F)  /*@bfbba@*/

#define PPC_PCFGR920	(PPC.unPCFGR920.u16Register)  /*@rg@*/
#define PPC_PCFGR920_POF	(PPC.unPCFGR920.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR920_NFE	(*(volatile uint_io8_t*)0xB7201345)  /*@bfbba@*/
#define PPC_PCFGR920_ODR	(PPC.unPCFGR920.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR920_PDE	(*(volatile uint_io8_t*)0xB7201348)  /*@bfbba@*/
#define PPC_PCFGR920_PUE	(*(volatile uint_io8_t*)0xB7201349)  /*@bfbba@*/
#define PPC_PCFGR920_PIL	(PPC.unPCFGR920.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR920_PIE	(*(volatile uint_io8_t*)0xB720134C)  /*@bfbba@*/
#define PPC_PCFGR920_PID	(*(volatile uint_io8_t*)0xB720134D)  /*@bfbba@*/
#define PPC_PCFGR920_POD	(*(volatile uint_io8_t*)0xB720134E)  /*@bfbba@*/
#define PPC_PCFGR920_POE	(*(volatile uint_io8_t*)0xB720134F)  /*@bfbba@*/

#define PPC_PCFGR921	(PPC.unPCFGR921.u16Register)  /*@rg@*/
#define PPC_PCFGR921_POF	(PPC.unPCFGR921.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR921_NFE	(*(volatile uint_io8_t*)0xB7201355)  /*@bfbba@*/
#define PPC_PCFGR921_ODR	(PPC.unPCFGR921.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR921_PDE	(*(volatile uint_io8_t*)0xB7201358)  /*@bfbba@*/
#define PPC_PCFGR921_PUE	(*(volatile uint_io8_t*)0xB7201359)  /*@bfbba@*/
#define PPC_PCFGR921_PIL	(PPC.unPCFGR921.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR921_PIE	(*(volatile uint_io8_t*)0xB720135C)  /*@bfbba@*/
#define PPC_PCFGR921_PID	(*(volatile uint_io8_t*)0xB720135D)  /*@bfbba@*/
#define PPC_PCFGR921_POD	(*(volatile uint_io8_t*)0xB720135E)  /*@bfbba@*/
#define PPC_PCFGR921_POE	(*(volatile uint_io8_t*)0xB720135F)  /*@bfbba@*/

#define PPC_PCFGR922	(PPC.unPCFGR922.u16Register)  /*@rg@*/
#define PPC_PCFGR922_POF	(PPC.unPCFGR922.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR922_NFE	(*(volatile uint_io8_t*)0xB7201365)  /*@bfbba@*/
#define PPC_PCFGR922_ODR	(PPC.unPCFGR922.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR922_PDE	(*(volatile uint_io8_t*)0xB7201368)  /*@bfbba@*/
#define PPC_PCFGR922_PUE	(*(volatile uint_io8_t*)0xB7201369)  /*@bfbba@*/
#define PPC_PCFGR922_PIL	(PPC.unPCFGR922.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR922_PIE	(*(volatile uint_io8_t*)0xB720136C)  /*@bfbba@*/
#define PPC_PCFGR922_PID	(*(volatile uint_io8_t*)0xB720136D)  /*@bfbba@*/
#define PPC_PCFGR922_POD	(*(volatile uint_io8_t*)0xB720136E)  /*@bfbba@*/
#define PPC_PCFGR922_POE	(*(volatile uint_io8_t*)0xB720136F)  /*@bfbba@*/

#define PPC_PCFGR923	(PPC.unPCFGR923.u16Register)  /*@rg@*/
#define PPC_PCFGR923_POF	(PPC.unPCFGR923.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR923_NFE	(*(volatile uint_io8_t*)0xB7201375)  /*@bfbba@*/
#define PPC_PCFGR923_ODR	(PPC.unPCFGR923.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR923_PDE	(*(volatile uint_io8_t*)0xB7201378)  /*@bfbba@*/
#define PPC_PCFGR923_PUE	(*(volatile uint_io8_t*)0xB7201379)  /*@bfbba@*/
#define PPC_PCFGR923_PIL	(PPC.unPCFGR923.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR923_PIE	(*(volatile uint_io8_t*)0xB720137C)  /*@bfbba@*/
#define PPC_PCFGR923_PID	(*(volatile uint_io8_t*)0xB720137D)  /*@bfbba@*/
#define PPC_PCFGR923_POD	(*(volatile uint_io8_t*)0xB720137E)  /*@bfbba@*/
#define PPC_PCFGR923_POE	(*(volatile uint_io8_t*)0xB720137F)  /*@bfbba@*/

#define PPC_PCFGR924	(PPC.unPCFGR924.u16Register)  /*@rg@*/
#define PPC_PCFGR924_POF	(PPC.unPCFGR924.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR924_NFE	(*(volatile uint_io8_t*)0xB7201385)  /*@bfbba@*/
#define PPC_PCFGR924_ODR	(PPC.unPCFGR924.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR924_PDE	(*(volatile uint_io8_t*)0xB7201388)  /*@bfbba@*/
#define PPC_PCFGR924_PUE	(*(volatile uint_io8_t*)0xB7201389)  /*@bfbba@*/
#define PPC_PCFGR924_PIL	(PPC.unPCFGR924.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR924_PIE	(*(volatile uint_io8_t*)0xB720138C)  /*@bfbba@*/
#define PPC_PCFGR924_PID	(*(volatile uint_io8_t*)0xB720138D)  /*@bfbba@*/
#define PPC_PCFGR924_POD	(*(volatile uint_io8_t*)0xB720138E)  /*@bfbba@*/
#define PPC_PCFGR924_POE	(*(volatile uint_io8_t*)0xB720138F)  /*@bfbba@*/

#define PPC_PCFGR925	(PPC.unPCFGR925.u16Register)  /*@rg@*/
#define PPC_PCFGR925_POF	(PPC.unPCFGR925.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR925_NFE	(*(volatile uint_io8_t*)0xB7201395)  /*@bfbba@*/
#define PPC_PCFGR925_ODR	(PPC.unPCFGR925.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR925_PDE	(*(volatile uint_io8_t*)0xB7201398)  /*@bfbba@*/
#define PPC_PCFGR925_PUE	(*(volatile uint_io8_t*)0xB7201399)  /*@bfbba@*/
#define PPC_PCFGR925_PIL	(PPC.unPCFGR925.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR925_PIE	(*(volatile uint_io8_t*)0xB720139C)  /*@bfbba@*/
#define PPC_PCFGR925_PID	(*(volatile uint_io8_t*)0xB720139D)  /*@bfbba@*/
#define PPC_PCFGR925_POD	(*(volatile uint_io8_t*)0xB720139E)  /*@bfbba@*/
#define PPC_PCFGR925_POE	(*(volatile uint_io8_t*)0xB720139F)  /*@bfbba@*/

#define PPC_PCFGR926	(PPC.unPCFGR926.u16Register)  /*@rg@*/
#define PPC_PCFGR926_POF	(PPC.unPCFGR926.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR926_NFE	(*(volatile uint_io8_t*)0xB72013A5)  /*@bfbba@*/
#define PPC_PCFGR926_ODR	(PPC.unPCFGR926.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR926_PDE	(*(volatile uint_io8_t*)0xB72013A8)  /*@bfbba@*/
#define PPC_PCFGR926_PUE	(*(volatile uint_io8_t*)0xB72013A9)  /*@bfbba@*/
#define PPC_PCFGR926_PIL	(PPC.unPCFGR926.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR926_PIE	(*(volatile uint_io8_t*)0xB72013AC)  /*@bfbba@*/
#define PPC_PCFGR926_PID	(*(volatile uint_io8_t*)0xB72013AD)  /*@bfbba@*/
#define PPC_PCFGR926_POD	(*(volatile uint_io8_t*)0xB72013AE)  /*@bfbba@*/
#define PPC_PCFGR926_POE	(*(volatile uint_io8_t*)0xB72013AF)  /*@bfbba@*/

#define PPC_PCFGR927	(PPC.unPCFGR927.u16Register)  /*@rg@*/
#define PPC_PCFGR927_POF	(PPC.unPCFGR927.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR927_NFE	(*(volatile uint_io8_t*)0xB72013B5)  /*@bfbba@*/
#define PPC_PCFGR927_ODR	(PPC.unPCFGR927.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR927_PDE	(*(volatile uint_io8_t*)0xB72013B8)  /*@bfbba@*/
#define PPC_PCFGR927_PUE	(*(volatile uint_io8_t*)0xB72013B9)  /*@bfbba@*/
#define PPC_PCFGR927_PIL	(PPC.unPCFGR927.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR927_PIE	(*(volatile uint_io8_t*)0xB72013BC)  /*@bfbba@*/
#define PPC_PCFGR927_PID	(*(volatile uint_io8_t*)0xB72013BD)  /*@bfbba@*/
#define PPC_PCFGR927_POD	(*(volatile uint_io8_t*)0xB72013BE)  /*@bfbba@*/
#define PPC_PCFGR927_POE	(*(volatile uint_io8_t*)0xB72013BF)  /*@bfbba@*/

#define PPC_PCFGR928	(PPC.unPCFGR928.u16Register)  /*@rg@*/
#define PPC_PCFGR928_POF	(PPC.unPCFGR928.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR928_NFE	(*(volatile uint_io8_t*)0xB72013C5)  /*@bfbba@*/
#define PPC_PCFGR928_ODR	(PPC.unPCFGR928.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR928_PDE	(*(volatile uint_io8_t*)0xB72013C8)  /*@bfbba@*/
#define PPC_PCFGR928_PUE	(*(volatile uint_io8_t*)0xB72013C9)  /*@bfbba@*/
#define PPC_PCFGR928_PIL	(PPC.unPCFGR928.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR928_PIE	(*(volatile uint_io8_t*)0xB72013CC)  /*@bfbba@*/
#define PPC_PCFGR928_PID	(*(volatile uint_io8_t*)0xB72013CD)  /*@bfbba@*/
#define PPC_PCFGR928_POD	(*(volatile uint_io8_t*)0xB72013CE)  /*@bfbba@*/
#define PPC_PCFGR928_POE	(*(volatile uint_io8_t*)0xB72013CF)  /*@bfbba@*/

#define PPC_PCFGR929	(PPC.unPCFGR929.u16Register)  /*@rg@*/
#define PPC_PCFGR929_POF	(PPC.unPCFGR929.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR929_NFE	(*(volatile uint_io8_t*)0xB72013D5)  /*@bfbba@*/
#define PPC_PCFGR929_ODR	(PPC.unPCFGR929.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR929_PDE	(*(volatile uint_io8_t*)0xB72013D8)  /*@bfbba@*/
#define PPC_PCFGR929_PUE	(*(volatile uint_io8_t*)0xB72013D9)  /*@bfbba@*/
#define PPC_PCFGR929_PIL	(PPC.unPCFGR929.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR929_PIE	(*(volatile uint_io8_t*)0xB72013DC)  /*@bfbba@*/
#define PPC_PCFGR929_PID	(*(volatile uint_io8_t*)0xB72013DD)  /*@bfbba@*/
#define PPC_PCFGR929_POD	(*(volatile uint_io8_t*)0xB72013DE)  /*@bfbba@*/
#define PPC_PCFGR929_POE	(*(volatile uint_io8_t*)0xB72013DF)  /*@bfbba@*/

#define PPC_PCFGR930	(PPC.unPCFGR930.u16Register)  /*@rg@*/
#define PPC_PCFGR930_POF	(PPC.unPCFGR930.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR930_NFE	(*(volatile uint_io8_t*)0xB72013E5)  /*@bfbba@*/
#define PPC_PCFGR930_ODR	(PPC.unPCFGR930.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR930_PDE	(*(volatile uint_io8_t*)0xB72013E8)  /*@bfbba@*/
#define PPC_PCFGR930_PUE	(*(volatile uint_io8_t*)0xB72013E9)  /*@bfbba@*/
#define PPC_PCFGR930_PIL	(PPC.unPCFGR930.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR930_PIE	(*(volatile uint_io8_t*)0xB72013EC)  /*@bfbba@*/
#define PPC_PCFGR930_PID	(*(volatile uint_io8_t*)0xB72013ED)  /*@bfbba@*/
#define PPC_PCFGR930_POD	(*(volatile uint_io8_t*)0xB72013EE)  /*@bfbba@*/
#define PPC_PCFGR930_POE	(*(volatile uint_io8_t*)0xB72013EF)  /*@bfbba@*/

#define PPC_PCFGR931	(PPC.unPCFGR931.u16Register)  /*@rg@*/
#define PPC_PCFGR931_POF	(PPC.unPCFGR931.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR931_NFE	(*(volatile uint_io8_t*)0xB72013F5)  /*@bfbba@*/
#define PPC_PCFGR931_ODR	(PPC.unPCFGR931.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR931_PDE	(*(volatile uint_io8_t*)0xB72013F8)  /*@bfbba@*/
#define PPC_PCFGR931_PUE	(*(volatile uint_io8_t*)0xB72013F9)  /*@bfbba@*/
#define PPC_PCFGR931_PIL	(PPC.unPCFGR931.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR931_PIE	(*(volatile uint_io8_t*)0xB72013FC)  /*@bfbba@*/
#define PPC_PCFGR931_PID	(*(volatile uint_io8_t*)0xB72013FD)  /*@bfbba@*/
#define PPC_PCFGR931_POD	(*(volatile uint_io8_t*)0xB72013FE)  /*@bfbba@*/
#define PPC_PCFGR931_POE	(*(volatile uint_io8_t*)0xB72013FF)  /*@bfbba@*/

#define PPC_PCFGR1000	(PPC.unPCFGR1000.u16Register)  /*@rg@*/
#define PPC_PCFGR1000_POF	(PPC.unPCFGR1000.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1000_NFE	(*(volatile uint_io8_t*)0xB7201405)  /*@bfbba@*/
#define PPC_PCFGR1000_ODR	(PPC.unPCFGR1000.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1000_PDE	(*(volatile uint_io8_t*)0xB7201408)  /*@bfbba@*/
#define PPC_PCFGR1000_PUE	(*(volatile uint_io8_t*)0xB7201409)  /*@bfbba@*/
#define PPC_PCFGR1000_PIL	(PPC.unPCFGR1000.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1000_PIE	(*(volatile uint_io8_t*)0xB720140C)  /*@bfbba@*/
#define PPC_PCFGR1000_PID	(*(volatile uint_io8_t*)0xB720140D)  /*@bfbba@*/
#define PPC_PCFGR1000_POD	(*(volatile uint_io8_t*)0xB720140E)  /*@bfbba@*/
#define PPC_PCFGR1000_POE	(*(volatile uint_io8_t*)0xB720140F)  /*@bfbba@*/

#define PPC_PCFGR1001	(PPC.unPCFGR1001.u16Register)  /*@rg@*/
#define PPC_PCFGR1001_POF	(PPC.unPCFGR1001.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1001_NFE	(*(volatile uint_io8_t*)0xB7201415)  /*@bfbba@*/
#define PPC_PCFGR1001_ODR	(PPC.unPCFGR1001.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1001_PDE	(*(volatile uint_io8_t*)0xB7201418)  /*@bfbba@*/
#define PPC_PCFGR1001_PUE	(*(volatile uint_io8_t*)0xB7201419)  /*@bfbba@*/
#define PPC_PCFGR1001_PIL	(PPC.unPCFGR1001.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1001_PIE	(*(volatile uint_io8_t*)0xB720141C)  /*@bfbba@*/
#define PPC_PCFGR1001_PID	(*(volatile uint_io8_t*)0xB720141D)  /*@bfbba@*/
#define PPC_PCFGR1001_POD	(*(volatile uint_io8_t*)0xB720141E)  /*@bfbba@*/
#define PPC_PCFGR1001_POE	(*(volatile uint_io8_t*)0xB720141F)  /*@bfbba@*/

#define PPC_PCFGR1002	(PPC.unPCFGR1002.u16Register)  /*@rg@*/
#define PPC_PCFGR1002_POF	(PPC.unPCFGR1002.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1002_NFE	(*(volatile uint_io8_t*)0xB7201425)  /*@bfbba@*/
#define PPC_PCFGR1002_ODR	(PPC.unPCFGR1002.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1002_PDE	(*(volatile uint_io8_t*)0xB7201428)  /*@bfbba@*/
#define PPC_PCFGR1002_PUE	(*(volatile uint_io8_t*)0xB7201429)  /*@bfbba@*/
#define PPC_PCFGR1002_PIL	(PPC.unPCFGR1002.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1002_PIE	(*(volatile uint_io8_t*)0xB720142C)  /*@bfbba@*/
#define PPC_PCFGR1002_PID	(*(volatile uint_io8_t*)0xB720142D)  /*@bfbba@*/
#define PPC_PCFGR1002_POD	(*(volatile uint_io8_t*)0xB720142E)  /*@bfbba@*/
#define PPC_PCFGR1002_POE	(*(volatile uint_io8_t*)0xB720142F)  /*@bfbba@*/

#define PPC_PCFGR1003	(PPC.unPCFGR1003.u16Register)  /*@rg@*/
#define PPC_PCFGR1003_POF	(PPC.unPCFGR1003.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1003_NFE	(*(volatile uint_io8_t*)0xB7201435)  /*@bfbba@*/
#define PPC_PCFGR1003_ODR	(PPC.unPCFGR1003.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1003_PDE	(*(volatile uint_io8_t*)0xB7201438)  /*@bfbba@*/
#define PPC_PCFGR1003_PUE	(*(volatile uint_io8_t*)0xB7201439)  /*@bfbba@*/
#define PPC_PCFGR1003_PIL	(PPC.unPCFGR1003.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1003_PIE	(*(volatile uint_io8_t*)0xB720143C)  /*@bfbba@*/
#define PPC_PCFGR1003_PID	(*(volatile uint_io8_t*)0xB720143D)  /*@bfbba@*/
#define PPC_PCFGR1003_POD	(*(volatile uint_io8_t*)0xB720143E)  /*@bfbba@*/
#define PPC_PCFGR1003_POE	(*(volatile uint_io8_t*)0xB720143F)  /*@bfbba@*/

#define PPC_PCFGR1004	(PPC.unPCFGR1004.u16Register)  /*@rg@*/
#define PPC_PCFGR1004_POF	(PPC.unPCFGR1004.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1004_NFE	(*(volatile uint_io8_t*)0xB7201445)  /*@bfbba@*/
#define PPC_PCFGR1004_ODR	(PPC.unPCFGR1004.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1004_PDE	(*(volatile uint_io8_t*)0xB7201448)  /*@bfbba@*/
#define PPC_PCFGR1004_PUE	(*(volatile uint_io8_t*)0xB7201449)  /*@bfbba@*/
#define PPC_PCFGR1004_PIL	(PPC.unPCFGR1004.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1004_PIE	(*(volatile uint_io8_t*)0xB720144C)  /*@bfbba@*/
#define PPC_PCFGR1004_PID	(*(volatile uint_io8_t*)0xB720144D)  /*@bfbba@*/
#define PPC_PCFGR1004_POD	(*(volatile uint_io8_t*)0xB720144E)  /*@bfbba@*/
#define PPC_PCFGR1004_POE	(*(volatile uint_io8_t*)0xB720144F)  /*@bfbba@*/

#define PPC_PCFGR1005	(PPC.unPCFGR1005.u16Register)  /*@rg@*/
#define PPC_PCFGR1005_POF	(PPC.unPCFGR1005.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1005_NFE	(*(volatile uint_io8_t*)0xB7201455)  /*@bfbba@*/
#define PPC_PCFGR1005_ODR	(PPC.unPCFGR1005.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1005_PDE	(*(volatile uint_io8_t*)0xB7201458)  /*@bfbba@*/
#define PPC_PCFGR1005_PUE	(*(volatile uint_io8_t*)0xB7201459)  /*@bfbba@*/
#define PPC_PCFGR1005_PIL	(PPC.unPCFGR1005.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1005_PIE	(*(volatile uint_io8_t*)0xB720145C)  /*@bfbba@*/
#define PPC_PCFGR1005_PID	(*(volatile uint_io8_t*)0xB720145D)  /*@bfbba@*/
#define PPC_PCFGR1005_POD	(*(volatile uint_io8_t*)0xB720145E)  /*@bfbba@*/
#define PPC_PCFGR1005_POE	(*(volatile uint_io8_t*)0xB720145F)  /*@bfbba@*/

#define PPC_PCFGR1006	(PPC.unPCFGR1006.u16Register)  /*@rg@*/
#define PPC_PCFGR1006_POF	(PPC.unPCFGR1006.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1006_NFE	(*(volatile uint_io8_t*)0xB7201465)  /*@bfbba@*/
#define PPC_PCFGR1006_ODR	(PPC.unPCFGR1006.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1006_PDE	(*(volatile uint_io8_t*)0xB7201468)  /*@bfbba@*/
#define PPC_PCFGR1006_PUE	(*(volatile uint_io8_t*)0xB7201469)  /*@bfbba@*/
#define PPC_PCFGR1006_PIL	(PPC.unPCFGR1006.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1006_PIE	(*(volatile uint_io8_t*)0xB720146C)  /*@bfbba@*/
#define PPC_PCFGR1006_PID	(*(volatile uint_io8_t*)0xB720146D)  /*@bfbba@*/
#define PPC_PCFGR1006_POD	(*(volatile uint_io8_t*)0xB720146E)  /*@bfbba@*/
#define PPC_PCFGR1006_POE	(*(volatile uint_io8_t*)0xB720146F)  /*@bfbba@*/

#define PPC_PCFGR1007	(PPC.unPCFGR1007.u16Register)  /*@rg@*/
#define PPC_PCFGR1007_POF	(PPC.unPCFGR1007.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1007_NFE	(*(volatile uint_io8_t*)0xB7201475)  /*@bfbba@*/
#define PPC_PCFGR1007_ODR	(PPC.unPCFGR1007.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1007_PDE	(*(volatile uint_io8_t*)0xB7201478)  /*@bfbba@*/
#define PPC_PCFGR1007_PUE	(*(volatile uint_io8_t*)0xB7201479)  /*@bfbba@*/
#define PPC_PCFGR1007_PIL	(PPC.unPCFGR1007.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1007_PIE	(*(volatile uint_io8_t*)0xB720147C)  /*@bfbba@*/
#define PPC_PCFGR1007_PID	(*(volatile uint_io8_t*)0xB720147D)  /*@bfbba@*/
#define PPC_PCFGR1007_POD	(*(volatile uint_io8_t*)0xB720147E)  /*@bfbba@*/
#define PPC_PCFGR1007_POE	(*(volatile uint_io8_t*)0xB720147F)  /*@bfbba@*/

#define PPC_PCFGR1008	(PPC.unPCFGR1008.u16Register)  /*@rg@*/
#define PPC_PCFGR1008_POF	(PPC.unPCFGR1008.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1008_NFE	(*(volatile uint_io8_t*)0xB7201485)  /*@bfbba@*/
#define PPC_PCFGR1008_ODR	(PPC.unPCFGR1008.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1008_PDE	(*(volatile uint_io8_t*)0xB7201488)  /*@bfbba@*/
#define PPC_PCFGR1008_PUE	(*(volatile uint_io8_t*)0xB7201489)  /*@bfbba@*/
#define PPC_PCFGR1008_PIL	(PPC.unPCFGR1008.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1008_PIE	(*(volatile uint_io8_t*)0xB720148C)  /*@bfbba@*/
#define PPC_PCFGR1008_PID	(*(volatile uint_io8_t*)0xB720148D)  /*@bfbba@*/
#define PPC_PCFGR1008_POD	(*(volatile uint_io8_t*)0xB720148E)  /*@bfbba@*/
#define PPC_PCFGR1008_POE	(*(volatile uint_io8_t*)0xB720148F)  /*@bfbba@*/

#define PPC_PCFGR1009	(PPC.unPCFGR1009.u16Register)  /*@rg@*/
#define PPC_PCFGR1009_POF	(PPC.unPCFGR1009.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1009_NFE	(*(volatile uint_io8_t*)0xB7201495)  /*@bfbba@*/
#define PPC_PCFGR1009_ODR	(PPC.unPCFGR1009.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1009_PDE	(*(volatile uint_io8_t*)0xB7201498)  /*@bfbba@*/
#define PPC_PCFGR1009_PUE	(*(volatile uint_io8_t*)0xB7201499)  /*@bfbba@*/
#define PPC_PCFGR1009_PIL	(PPC.unPCFGR1009.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1009_PIE	(*(volatile uint_io8_t*)0xB720149C)  /*@bfbba@*/
#define PPC_PCFGR1009_PID	(*(volatile uint_io8_t*)0xB720149D)  /*@bfbba@*/
#define PPC_PCFGR1009_POD	(*(volatile uint_io8_t*)0xB720149E)  /*@bfbba@*/
#define PPC_PCFGR1009_POE	(*(volatile uint_io8_t*)0xB720149F)  /*@bfbba@*/

#define PPC_PCFGR1010	(PPC.unPCFGR1010.u16Register)  /*@rg@*/
#define PPC_PCFGR1010_POF	(PPC.unPCFGR1010.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1010_NFE	(*(volatile uint_io8_t*)0xB72014A5)  /*@bfbba@*/
#define PPC_PCFGR1010_ODR	(PPC.unPCFGR1010.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1010_PDE	(*(volatile uint_io8_t*)0xB72014A8)  /*@bfbba@*/
#define PPC_PCFGR1010_PUE	(*(volatile uint_io8_t*)0xB72014A9)  /*@bfbba@*/
#define PPC_PCFGR1010_PIL	(PPC.unPCFGR1010.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1010_PIE	(*(volatile uint_io8_t*)0xB72014AC)  /*@bfbba@*/
#define PPC_PCFGR1010_PID	(*(volatile uint_io8_t*)0xB72014AD)  /*@bfbba@*/
#define PPC_PCFGR1010_POD	(*(volatile uint_io8_t*)0xB72014AE)  /*@bfbba@*/
#define PPC_PCFGR1010_POE	(*(volatile uint_io8_t*)0xB72014AF)  /*@bfbba@*/

#define PPC_PCFGR1011	(PPC.unPCFGR1011.u16Register)  /*@rg@*/
#define PPC_PCFGR1011_POF	(PPC.unPCFGR1011.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1011_NFE	(*(volatile uint_io8_t*)0xB72014B5)  /*@bfbba@*/
#define PPC_PCFGR1011_ODR	(PPC.unPCFGR1011.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1011_PDE	(*(volatile uint_io8_t*)0xB72014B8)  /*@bfbba@*/
#define PPC_PCFGR1011_PUE	(*(volatile uint_io8_t*)0xB72014B9)  /*@bfbba@*/
#define PPC_PCFGR1011_PIL	(PPC.unPCFGR1011.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1011_PIE	(*(volatile uint_io8_t*)0xB72014BC)  /*@bfbba@*/
#define PPC_PCFGR1011_PID	(*(volatile uint_io8_t*)0xB72014BD)  /*@bfbba@*/
#define PPC_PCFGR1011_POD	(*(volatile uint_io8_t*)0xB72014BE)  /*@bfbba@*/
#define PPC_PCFGR1011_POE	(*(volatile uint_io8_t*)0xB72014BF)  /*@bfbba@*/

#define PPC_PCFGR1012	(PPC.unPCFGR1012.u16Register)  /*@rg@*/
#define PPC_PCFGR1012_POF	(PPC.unPCFGR1012.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1012_NFE	(*(volatile uint_io8_t*)0xB72014C5)  /*@bfbba@*/
#define PPC_PCFGR1012_ODR	(PPC.unPCFGR1012.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1012_PDE	(*(volatile uint_io8_t*)0xB72014C8)  /*@bfbba@*/
#define PPC_PCFGR1012_PUE	(*(volatile uint_io8_t*)0xB72014C9)  /*@bfbba@*/
#define PPC_PCFGR1012_PIL	(PPC.unPCFGR1012.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1012_PIE	(*(volatile uint_io8_t*)0xB72014CC)  /*@bfbba@*/
#define PPC_PCFGR1012_PID	(*(volatile uint_io8_t*)0xB72014CD)  /*@bfbba@*/
#define PPC_PCFGR1012_POD	(*(volatile uint_io8_t*)0xB72014CE)  /*@bfbba@*/
#define PPC_PCFGR1012_POE	(*(volatile uint_io8_t*)0xB72014CF)  /*@bfbba@*/

#define PPC_PCFGR1013	(PPC.unPCFGR1013.u16Register)  /*@rg@*/
#define PPC_PCFGR1013_POF	(PPC.unPCFGR1013.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1013_NFE	(*(volatile uint_io8_t*)0xB72014D5)  /*@bfbba@*/
#define PPC_PCFGR1013_ODR	(PPC.unPCFGR1013.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1013_PDE	(*(volatile uint_io8_t*)0xB72014D8)  /*@bfbba@*/
#define PPC_PCFGR1013_PUE	(*(volatile uint_io8_t*)0xB72014D9)  /*@bfbba@*/
#define PPC_PCFGR1013_PIL	(PPC.unPCFGR1013.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1013_PIE	(*(volatile uint_io8_t*)0xB72014DC)  /*@bfbba@*/
#define PPC_PCFGR1013_PID	(*(volatile uint_io8_t*)0xB72014DD)  /*@bfbba@*/
#define PPC_PCFGR1013_POD	(*(volatile uint_io8_t*)0xB72014DE)  /*@bfbba@*/
#define PPC_PCFGR1013_POE	(*(volatile uint_io8_t*)0xB72014DF)  /*@bfbba@*/

#define PPC_PCFGR1014	(PPC.unPCFGR1014.u16Register)  /*@rg@*/
#define PPC_PCFGR1014_POF	(PPC.unPCFGR1014.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1014_NFE	(*(volatile uint_io8_t*)0xB72014E5)  /*@bfbba@*/
#define PPC_PCFGR1014_ODR	(PPC.unPCFGR1014.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1014_PDE	(*(volatile uint_io8_t*)0xB72014E8)  /*@bfbba@*/
#define PPC_PCFGR1014_PUE	(*(volatile uint_io8_t*)0xB72014E9)  /*@bfbba@*/
#define PPC_PCFGR1014_PIL	(PPC.unPCFGR1014.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1014_PIE	(*(volatile uint_io8_t*)0xB72014EC)  /*@bfbba@*/
#define PPC_PCFGR1014_PID	(*(volatile uint_io8_t*)0xB72014ED)  /*@bfbba@*/
#define PPC_PCFGR1014_POD	(*(volatile uint_io8_t*)0xB72014EE)  /*@bfbba@*/
#define PPC_PCFGR1014_POE	(*(volatile uint_io8_t*)0xB72014EF)  /*@bfbba@*/

#define PPC_PCFGR1015	(PPC.unPCFGR1015.u16Register)  /*@rg@*/
#define PPC_PCFGR1015_POF	(PPC.unPCFGR1015.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1015_NFE	(*(volatile uint_io8_t*)0xB72014F5)  /*@bfbba@*/
#define PPC_PCFGR1015_ODR	(PPC.unPCFGR1015.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1015_PDE	(*(volatile uint_io8_t*)0xB72014F8)  /*@bfbba@*/
#define PPC_PCFGR1015_PUE	(*(volatile uint_io8_t*)0xB72014F9)  /*@bfbba@*/
#define PPC_PCFGR1015_PIL	(PPC.unPCFGR1015.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1015_PIE	(*(volatile uint_io8_t*)0xB72014FC)  /*@bfbba@*/
#define PPC_PCFGR1015_PID	(*(volatile uint_io8_t*)0xB72014FD)  /*@bfbba@*/
#define PPC_PCFGR1015_POD	(*(volatile uint_io8_t*)0xB72014FE)  /*@bfbba@*/
#define PPC_PCFGR1015_POE	(*(volatile uint_io8_t*)0xB72014FF)  /*@bfbba@*/

#define PPC_PCFGR1016	(PPC.unPCFGR1016.u16Register)  /*@rg@*/
#define PPC_PCFGR1016_POF	(PPC.unPCFGR1016.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1016_NFE	(*(volatile uint_io8_t*)0xB7201505)  /*@bfbba@*/
#define PPC_PCFGR1016_ODR	(PPC.unPCFGR1016.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1016_PDE	(*(volatile uint_io8_t*)0xB7201508)  /*@bfbba@*/
#define PPC_PCFGR1016_PUE	(*(volatile uint_io8_t*)0xB7201509)  /*@bfbba@*/
#define PPC_PCFGR1016_PIL	(PPC.unPCFGR1016.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1016_PIE	(*(volatile uint_io8_t*)0xB720150C)  /*@bfbba@*/
#define PPC_PCFGR1016_PID	(*(volatile uint_io8_t*)0xB720150D)  /*@bfbba@*/
#define PPC_PCFGR1016_POD	(*(volatile uint_io8_t*)0xB720150E)  /*@bfbba@*/
#define PPC_PCFGR1016_POE	(*(volatile uint_io8_t*)0xB720150F)  /*@bfbba@*/

#define PPC_PCFGR1017	(PPC.unPCFGR1017.u16Register)  /*@rg@*/
#define PPC_PCFGR1017_POF	(PPC.unPCFGR1017.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1017_NFE	(*(volatile uint_io8_t*)0xB7201515)  /*@bfbba@*/
#define PPC_PCFGR1017_ODR	(PPC.unPCFGR1017.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1017_PDE	(*(volatile uint_io8_t*)0xB7201518)  /*@bfbba@*/
#define PPC_PCFGR1017_PUE	(*(volatile uint_io8_t*)0xB7201519)  /*@bfbba@*/
#define PPC_PCFGR1017_PIL	(PPC.unPCFGR1017.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1017_PIE	(*(volatile uint_io8_t*)0xB720151C)  /*@bfbba@*/
#define PPC_PCFGR1017_PID	(*(volatile uint_io8_t*)0xB720151D)  /*@bfbba@*/
#define PPC_PCFGR1017_POD	(*(volatile uint_io8_t*)0xB720151E)  /*@bfbba@*/
#define PPC_PCFGR1017_POE	(*(volatile uint_io8_t*)0xB720151F)  /*@bfbba@*/

#define PPC_PCFGR1018	(PPC.unPCFGR1018.u16Register)  /*@rg@*/
#define PPC_PCFGR1018_POF	(PPC.unPCFGR1018.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1018_NFE	(*(volatile uint_io8_t*)0xB7201525)  /*@bfbba@*/
#define PPC_PCFGR1018_ODR	(PPC.unPCFGR1018.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1018_PDE	(*(volatile uint_io8_t*)0xB7201528)  /*@bfbba@*/
#define PPC_PCFGR1018_PUE	(*(volatile uint_io8_t*)0xB7201529)  /*@bfbba@*/
#define PPC_PCFGR1018_PIL	(PPC.unPCFGR1018.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1018_PIE	(*(volatile uint_io8_t*)0xB720152C)  /*@bfbba@*/
#define PPC_PCFGR1018_PID	(*(volatile uint_io8_t*)0xB720152D)  /*@bfbba@*/
#define PPC_PCFGR1018_POD	(*(volatile uint_io8_t*)0xB720152E)  /*@bfbba@*/
#define PPC_PCFGR1018_POE	(*(volatile uint_io8_t*)0xB720152F)  /*@bfbba@*/

#define PPC_PCFGR1019	(PPC.unPCFGR1019.u16Register)  /*@rg@*/
#define PPC_PCFGR1019_POF	(PPC.unPCFGR1019.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1019_NFE	(*(volatile uint_io8_t*)0xB7201535)  /*@bfbba@*/
#define PPC_PCFGR1019_ODR	(PPC.unPCFGR1019.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1019_PDE	(*(volatile uint_io8_t*)0xB7201538)  /*@bfbba@*/
#define PPC_PCFGR1019_PUE	(*(volatile uint_io8_t*)0xB7201539)  /*@bfbba@*/
#define PPC_PCFGR1019_PIL	(PPC.unPCFGR1019.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1019_PIE	(*(volatile uint_io8_t*)0xB720153C)  /*@bfbba@*/
#define PPC_PCFGR1019_PID	(*(volatile uint_io8_t*)0xB720153D)  /*@bfbba@*/
#define PPC_PCFGR1019_POD	(*(volatile uint_io8_t*)0xB720153E)  /*@bfbba@*/
#define PPC_PCFGR1019_POE	(*(volatile uint_io8_t*)0xB720153F)  /*@bfbba@*/

#define PPC_PCFGR1020	(PPC.unPCFGR1020.u16Register)  /*@rg@*/
#define PPC_PCFGR1020_POF	(PPC.unPCFGR1020.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1020_NFE	(*(volatile uint_io8_t*)0xB7201545)  /*@bfbba@*/
#define PPC_PCFGR1020_ODR	(PPC.unPCFGR1020.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1020_PDE	(*(volatile uint_io8_t*)0xB7201548)  /*@bfbba@*/
#define PPC_PCFGR1020_PUE	(*(volatile uint_io8_t*)0xB7201549)  /*@bfbba@*/
#define PPC_PCFGR1020_PIL	(PPC.unPCFGR1020.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1020_PIE	(*(volatile uint_io8_t*)0xB720154C)  /*@bfbba@*/
#define PPC_PCFGR1020_PID	(*(volatile uint_io8_t*)0xB720154D)  /*@bfbba@*/
#define PPC_PCFGR1020_POD	(*(volatile uint_io8_t*)0xB720154E)  /*@bfbba@*/
#define PPC_PCFGR1020_POE	(*(volatile uint_io8_t*)0xB720154F)  /*@bfbba@*/

#define PPC_PCFGR1021	(PPC.unPCFGR1021.u16Register)  /*@rg@*/
#define PPC_PCFGR1021_POF	(PPC.unPCFGR1021.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1021_NFE	(*(volatile uint_io8_t*)0xB7201555)  /*@bfbba@*/
#define PPC_PCFGR1021_ODR	(PPC.unPCFGR1021.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1021_PDE	(*(volatile uint_io8_t*)0xB7201558)  /*@bfbba@*/
#define PPC_PCFGR1021_PUE	(*(volatile uint_io8_t*)0xB7201559)  /*@bfbba@*/
#define PPC_PCFGR1021_PIL	(PPC.unPCFGR1021.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1021_PIE	(*(volatile uint_io8_t*)0xB720155C)  /*@bfbba@*/
#define PPC_PCFGR1021_PID	(*(volatile uint_io8_t*)0xB720155D)  /*@bfbba@*/
#define PPC_PCFGR1021_POD	(*(volatile uint_io8_t*)0xB720155E)  /*@bfbba@*/
#define PPC_PCFGR1021_POE	(*(volatile uint_io8_t*)0xB720155F)  /*@bfbba@*/

#define PPC_PCFGR1022	(PPC.unPCFGR1022.u16Register)  /*@rg@*/
#define PPC_PCFGR1022_POF	(PPC.unPCFGR1022.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1022_NFE	(*(volatile uint_io8_t*)0xB7201565)  /*@bfbba@*/
#define PPC_PCFGR1022_ODR	(PPC.unPCFGR1022.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1022_PDE	(*(volatile uint_io8_t*)0xB7201568)  /*@bfbba@*/
#define PPC_PCFGR1022_PUE	(*(volatile uint_io8_t*)0xB7201569)  /*@bfbba@*/
#define PPC_PCFGR1022_PIL	(PPC.unPCFGR1022.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1022_PIE	(*(volatile uint_io8_t*)0xB720156C)  /*@bfbba@*/
#define PPC_PCFGR1022_PID	(*(volatile uint_io8_t*)0xB720156D)  /*@bfbba@*/
#define PPC_PCFGR1022_POD	(*(volatile uint_io8_t*)0xB720156E)  /*@bfbba@*/
#define PPC_PCFGR1022_POE	(*(volatile uint_io8_t*)0xB720156F)  /*@bfbba@*/

#define PPC_PCFGR1023	(PPC.unPCFGR1023.u16Register)  /*@rg@*/
#define PPC_PCFGR1023_POF	(PPC.unPCFGR1023.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1023_NFE	(*(volatile uint_io8_t*)0xB7201575)  /*@bfbba@*/
#define PPC_PCFGR1023_ODR	(PPC.unPCFGR1023.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1023_PDE	(*(volatile uint_io8_t*)0xB7201578)  /*@bfbba@*/
#define PPC_PCFGR1023_PUE	(*(volatile uint_io8_t*)0xB7201579)  /*@bfbba@*/
#define PPC_PCFGR1023_PIL	(PPC.unPCFGR1023.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1023_PIE	(*(volatile uint_io8_t*)0xB720157C)  /*@bfbba@*/
#define PPC_PCFGR1023_PID	(*(volatile uint_io8_t*)0xB720157D)  /*@bfbba@*/
#define PPC_PCFGR1023_POD	(*(volatile uint_io8_t*)0xB720157E)  /*@bfbba@*/
#define PPC_PCFGR1023_POE	(*(volatile uint_io8_t*)0xB720157F)  /*@bfbba@*/

#define PPC_PCFGR1024	(PPC.unPCFGR1024.u16Register)  /*@rg@*/
#define PPC_PCFGR1024_POF	(PPC.unPCFGR1024.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1024_NFE	(*(volatile uint_io8_t*)0xB7201585)  /*@bfbba@*/
#define PPC_PCFGR1024_ODR	(PPC.unPCFGR1024.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1024_PDE	(*(volatile uint_io8_t*)0xB7201588)  /*@bfbba@*/
#define PPC_PCFGR1024_PUE	(*(volatile uint_io8_t*)0xB7201589)  /*@bfbba@*/
#define PPC_PCFGR1024_PIL	(PPC.unPCFGR1024.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1024_PIE	(*(volatile uint_io8_t*)0xB720158C)  /*@bfbba@*/
#define PPC_PCFGR1024_PID	(*(volatile uint_io8_t*)0xB720158D)  /*@bfbba@*/
#define PPC_PCFGR1024_POD	(*(volatile uint_io8_t*)0xB720158E)  /*@bfbba@*/
#define PPC_PCFGR1024_POE	(*(volatile uint_io8_t*)0xB720158F)  /*@bfbba@*/

#define PPC_PCFGR1025	(PPC.unPCFGR1025.u16Register)  /*@rg@*/
#define PPC_PCFGR1025_POF	(PPC.unPCFGR1025.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1025_NFE	(*(volatile uint_io8_t*)0xB7201595)  /*@bfbba@*/
#define PPC_PCFGR1025_ODR	(PPC.unPCFGR1025.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1025_PDE	(*(volatile uint_io8_t*)0xB7201598)  /*@bfbba@*/
#define PPC_PCFGR1025_PUE	(*(volatile uint_io8_t*)0xB7201599)  /*@bfbba@*/
#define PPC_PCFGR1025_PIL	(PPC.unPCFGR1025.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1025_PIE	(*(volatile uint_io8_t*)0xB720159C)  /*@bfbba@*/
#define PPC_PCFGR1025_PID	(*(volatile uint_io8_t*)0xB720159D)  /*@bfbba@*/
#define PPC_PCFGR1025_POD	(*(volatile uint_io8_t*)0xB720159E)  /*@bfbba@*/
#define PPC_PCFGR1025_POE	(*(volatile uint_io8_t*)0xB720159F)  /*@bfbba@*/

#define PPC_PCFGR1026	(PPC.unPCFGR1026.u16Register)  /*@rg@*/
#define PPC_PCFGR1026_POF	(PPC.unPCFGR1026.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1026_NFE	(*(volatile uint_io8_t*)0xB72015A5)  /*@bfbba@*/
#define PPC_PCFGR1026_ODR	(PPC.unPCFGR1026.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1026_PDE	(*(volatile uint_io8_t*)0xB72015A8)  /*@bfbba@*/
#define PPC_PCFGR1026_PUE	(*(volatile uint_io8_t*)0xB72015A9)  /*@bfbba@*/
#define PPC_PCFGR1026_PIL	(PPC.unPCFGR1026.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1026_PIE	(*(volatile uint_io8_t*)0xB72015AC)  /*@bfbba@*/
#define PPC_PCFGR1026_PID	(*(volatile uint_io8_t*)0xB72015AD)  /*@bfbba@*/
#define PPC_PCFGR1026_POD	(*(volatile uint_io8_t*)0xB72015AE)  /*@bfbba@*/
#define PPC_PCFGR1026_POE	(*(volatile uint_io8_t*)0xB72015AF)  /*@bfbba@*/

#define PPC_PCFGR1027	(PPC.unPCFGR1027.u16Register)  /*@rg@*/
#define PPC_PCFGR1027_POF	(PPC.unPCFGR1027.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1027_NFE	(*(volatile uint_io8_t*)0xB72015B5)  /*@bfbba@*/
#define PPC_PCFGR1027_ODR	(PPC.unPCFGR1027.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1027_PDE	(*(volatile uint_io8_t*)0xB72015B8)  /*@bfbba@*/
#define PPC_PCFGR1027_PUE	(*(volatile uint_io8_t*)0xB72015B9)  /*@bfbba@*/
#define PPC_PCFGR1027_PIL	(PPC.unPCFGR1027.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1027_PIE	(*(volatile uint_io8_t*)0xB72015BC)  /*@bfbba@*/
#define PPC_PCFGR1027_PID	(*(volatile uint_io8_t*)0xB72015BD)  /*@bfbba@*/
#define PPC_PCFGR1027_POD	(*(volatile uint_io8_t*)0xB72015BE)  /*@bfbba@*/
#define PPC_PCFGR1027_POE	(*(volatile uint_io8_t*)0xB72015BF)  /*@bfbba@*/

#define PPC_PCFGR1028	(PPC.unPCFGR1028.u16Register)  /*@rg@*/
#define PPC_PCFGR1028_POF	(PPC.unPCFGR1028.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1028_NFE	(*(volatile uint_io8_t*)0xB72015C5)  /*@bfbba@*/
#define PPC_PCFGR1028_ODR	(PPC.unPCFGR1028.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1028_PDE	(*(volatile uint_io8_t*)0xB72015C8)  /*@bfbba@*/
#define PPC_PCFGR1028_PUE	(*(volatile uint_io8_t*)0xB72015C9)  /*@bfbba@*/
#define PPC_PCFGR1028_PIL	(PPC.unPCFGR1028.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1028_PIE	(*(volatile uint_io8_t*)0xB72015CC)  /*@bfbba@*/
#define PPC_PCFGR1028_PID	(*(volatile uint_io8_t*)0xB72015CD)  /*@bfbba@*/
#define PPC_PCFGR1028_POD	(*(volatile uint_io8_t*)0xB72015CE)  /*@bfbba@*/
#define PPC_PCFGR1028_POE	(*(volatile uint_io8_t*)0xB72015CF)  /*@bfbba@*/

#define PPC_PCFGR1029	(PPC.unPCFGR1029.u16Register)  /*@rg@*/
#define PPC_PCFGR1029_POF	(PPC.unPCFGR1029.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1029_NFE	(*(volatile uint_io8_t*)0xB72015D5)  /*@bfbba@*/
#define PPC_PCFGR1029_ODR	(PPC.unPCFGR1029.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1029_PDE	(*(volatile uint_io8_t*)0xB72015D8)  /*@bfbba@*/
#define PPC_PCFGR1029_PUE	(*(volatile uint_io8_t*)0xB72015D9)  /*@bfbba@*/
#define PPC_PCFGR1029_PIL	(PPC.unPCFGR1029.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1029_PIE	(*(volatile uint_io8_t*)0xB72015DC)  /*@bfbba@*/
#define PPC_PCFGR1029_PID	(*(volatile uint_io8_t*)0xB72015DD)  /*@bfbba@*/
#define PPC_PCFGR1029_POD	(*(volatile uint_io8_t*)0xB72015DE)  /*@bfbba@*/
#define PPC_PCFGR1029_POE	(*(volatile uint_io8_t*)0xB72015DF)  /*@bfbba@*/

#define PPC_PCFGR1030	(PPC.unPCFGR1030.u16Register)  /*@rg@*/
#define PPC_PCFGR1030_POF	(PPC.unPCFGR1030.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1030_NFE	(*(volatile uint_io8_t*)0xB72015E5)  /*@bfbba@*/
#define PPC_PCFGR1030_ODR	(PPC.unPCFGR1030.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1030_PDE	(*(volatile uint_io8_t*)0xB72015E8)  /*@bfbba@*/
#define PPC_PCFGR1030_PUE	(*(volatile uint_io8_t*)0xB72015E9)  /*@bfbba@*/
#define PPC_PCFGR1030_PIL	(PPC.unPCFGR1030.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1030_PIE	(*(volatile uint_io8_t*)0xB72015EC)  /*@bfbba@*/
#define PPC_PCFGR1030_PID	(*(volatile uint_io8_t*)0xB72015ED)  /*@bfbba@*/
#define PPC_PCFGR1030_POD	(*(volatile uint_io8_t*)0xB72015EE)  /*@bfbba@*/
#define PPC_PCFGR1030_POE	(*(volatile uint_io8_t*)0xB72015EF)  /*@bfbba@*/

#define PPC_PCFGR1031	(PPC.unPCFGR1031.u16Register)  /*@rg@*/
#define PPC_PCFGR1031_POF	(PPC.unPCFGR1031.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1031_NFE	(*(volatile uint_io8_t*)0xB72015F5)  /*@bfbba@*/
#define PPC_PCFGR1031_ODR	(PPC.unPCFGR1031.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1031_PDE	(*(volatile uint_io8_t*)0xB72015F8)  /*@bfbba@*/
#define PPC_PCFGR1031_PUE	(*(volatile uint_io8_t*)0xB72015F9)  /*@bfbba@*/
#define PPC_PCFGR1031_PIL	(PPC.unPCFGR1031.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1031_PIE	(*(volatile uint_io8_t*)0xB72015FC)  /*@bfbba@*/
#define PPC_PCFGR1031_PID	(*(volatile uint_io8_t*)0xB72015FD)  /*@bfbba@*/
#define PPC_PCFGR1031_POD	(*(volatile uint_io8_t*)0xB72015FE)  /*@bfbba@*/
#define PPC_PCFGR1031_POE	(*(volatile uint_io8_t*)0xB72015FF)  /*@bfbba@*/

#define PPC_PCFGR1100	(PPC.unPCFGR1100.u16Register)  /*@rg@*/
#define PPC_PCFGR1100_POF	(PPC.unPCFGR1100.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1100_NFE	(*(volatile uint_io8_t*)0xB7201605)  /*@bfbba@*/
#define PPC_PCFGR1100_ODR	(PPC.unPCFGR1100.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1100_PDE	(*(volatile uint_io8_t*)0xB7201608)  /*@bfbba@*/
#define PPC_PCFGR1100_PUE	(*(volatile uint_io8_t*)0xB7201609)  /*@bfbba@*/
#define PPC_PCFGR1100_PIL	(PPC.unPCFGR1100.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1100_PIE	(*(volatile uint_io8_t*)0xB720160C)  /*@bfbba@*/
#define PPC_PCFGR1100_PID	(*(volatile uint_io8_t*)0xB720160D)  /*@bfbba@*/
#define PPC_PCFGR1100_POD	(*(volatile uint_io8_t*)0xB720160E)  /*@bfbba@*/
#define PPC_PCFGR1100_POE	(*(volatile uint_io8_t*)0xB720160F)  /*@bfbba@*/

#define PPC_PCFGR1101	(PPC.unPCFGR1101.u16Register)  /*@rg@*/
#define PPC_PCFGR1101_POF	(PPC.unPCFGR1101.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1101_NFE	(*(volatile uint_io8_t*)0xB7201615)  /*@bfbba@*/
#define PPC_PCFGR1101_ODR	(PPC.unPCFGR1101.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1101_PDE	(*(volatile uint_io8_t*)0xB7201618)  /*@bfbba@*/
#define PPC_PCFGR1101_PUE	(*(volatile uint_io8_t*)0xB7201619)  /*@bfbba@*/
#define PPC_PCFGR1101_PIL	(PPC.unPCFGR1101.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1101_PIE	(*(volatile uint_io8_t*)0xB720161C)  /*@bfbba@*/
#define PPC_PCFGR1101_PID	(*(volatile uint_io8_t*)0xB720161D)  /*@bfbba@*/
#define PPC_PCFGR1101_POD	(*(volatile uint_io8_t*)0xB720161E)  /*@bfbba@*/
#define PPC_PCFGR1101_POE	(*(volatile uint_io8_t*)0xB720161F)  /*@bfbba@*/

#define PPC_PCFGR1102	(PPC.unPCFGR1102.u16Register)  /*@rg@*/
#define PPC_PCFGR1102_POF	(PPC.unPCFGR1102.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1102_NFE	(*(volatile uint_io8_t*)0xB7201625)  /*@bfbba@*/
#define PPC_PCFGR1102_ODR	(PPC.unPCFGR1102.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1102_PDE	(*(volatile uint_io8_t*)0xB7201628)  /*@bfbba@*/
#define PPC_PCFGR1102_PUE	(*(volatile uint_io8_t*)0xB7201629)  /*@bfbba@*/
#define PPC_PCFGR1102_PIL	(PPC.unPCFGR1102.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1102_PIE	(*(volatile uint_io8_t*)0xB720162C)  /*@bfbba@*/
#define PPC_PCFGR1102_PID	(*(volatile uint_io8_t*)0xB720162D)  /*@bfbba@*/
#define PPC_PCFGR1102_POD	(*(volatile uint_io8_t*)0xB720162E)  /*@bfbba@*/
#define PPC_PCFGR1102_POE	(*(volatile uint_io8_t*)0xB720162F)  /*@bfbba@*/

#define PPC_PCFGR1103	(PPC.unPCFGR1103.u16Register)  /*@rg@*/
#define PPC_PCFGR1103_POF	(PPC.unPCFGR1103.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1103_NFE	(*(volatile uint_io8_t*)0xB7201635)  /*@bfbba@*/
#define PPC_PCFGR1103_ODR	(PPC.unPCFGR1103.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1103_PDE	(*(volatile uint_io8_t*)0xB7201638)  /*@bfbba@*/
#define PPC_PCFGR1103_PUE	(*(volatile uint_io8_t*)0xB7201639)  /*@bfbba@*/
#define PPC_PCFGR1103_PIL	(PPC.unPCFGR1103.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1103_PIE	(*(volatile uint_io8_t*)0xB720163C)  /*@bfbba@*/
#define PPC_PCFGR1103_PID	(*(volatile uint_io8_t*)0xB720163D)  /*@bfbba@*/
#define PPC_PCFGR1103_POD	(*(volatile uint_io8_t*)0xB720163E)  /*@bfbba@*/
#define PPC_PCFGR1103_POE	(*(volatile uint_io8_t*)0xB720163F)  /*@bfbba@*/

#define PPC_PCFGR1104	(PPC.unPCFGR1104.u16Register)  /*@rg@*/
#define PPC_PCFGR1104_POF	(PPC.unPCFGR1104.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1104_NFE	(*(volatile uint_io8_t*)0xB7201645)  /*@bfbba@*/
#define PPC_PCFGR1104_ODR	(PPC.unPCFGR1104.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1104_PDE	(*(volatile uint_io8_t*)0xB7201648)  /*@bfbba@*/
#define PPC_PCFGR1104_PUE	(*(volatile uint_io8_t*)0xB7201649)  /*@bfbba@*/
#define PPC_PCFGR1104_PIL	(PPC.unPCFGR1104.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1104_PIE	(*(volatile uint_io8_t*)0xB720164C)  /*@bfbba@*/
#define PPC_PCFGR1104_PID	(*(volatile uint_io8_t*)0xB720164D)  /*@bfbba@*/
#define PPC_PCFGR1104_POD	(*(volatile uint_io8_t*)0xB720164E)  /*@bfbba@*/
#define PPC_PCFGR1104_POE	(*(volatile uint_io8_t*)0xB720164F)  /*@bfbba@*/

#define PPC_PCFGR1105	(PPC.unPCFGR1105.u16Register)  /*@rg@*/
#define PPC_PCFGR1105_POF	(PPC.unPCFGR1105.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1105_NFE	(*(volatile uint_io8_t*)0xB7201655)  /*@bfbba@*/
#define PPC_PCFGR1105_ODR	(PPC.unPCFGR1105.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1105_PDE	(*(volatile uint_io8_t*)0xB7201658)  /*@bfbba@*/
#define PPC_PCFGR1105_PUE	(*(volatile uint_io8_t*)0xB7201659)  /*@bfbba@*/
#define PPC_PCFGR1105_PIL	(PPC.unPCFGR1105.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1105_PIE	(*(volatile uint_io8_t*)0xB720165C)  /*@bfbba@*/
#define PPC_PCFGR1105_PID	(*(volatile uint_io8_t*)0xB720165D)  /*@bfbba@*/
#define PPC_PCFGR1105_POD	(*(volatile uint_io8_t*)0xB720165E)  /*@bfbba@*/
#define PPC_PCFGR1105_POE	(*(volatile uint_io8_t*)0xB720165F)  /*@bfbba@*/

#define PPC_PCFGR1106	(PPC.unPCFGR1106.u16Register)  /*@rg@*/
#define PPC_PCFGR1106_POF	(PPC.unPCFGR1106.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1106_NFE	(*(volatile uint_io8_t*)0xB7201665)  /*@bfbba@*/
#define PPC_PCFGR1106_ODR	(PPC.unPCFGR1106.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1106_PDE	(*(volatile uint_io8_t*)0xB7201668)  /*@bfbba@*/
#define PPC_PCFGR1106_PUE	(*(volatile uint_io8_t*)0xB7201669)  /*@bfbba@*/
#define PPC_PCFGR1106_PIL	(PPC.unPCFGR1106.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1106_PIE	(*(volatile uint_io8_t*)0xB720166C)  /*@bfbba@*/
#define PPC_PCFGR1106_PID	(*(volatile uint_io8_t*)0xB720166D)  /*@bfbba@*/
#define PPC_PCFGR1106_POD	(*(volatile uint_io8_t*)0xB720166E)  /*@bfbba@*/
#define PPC_PCFGR1106_POE	(*(volatile uint_io8_t*)0xB720166F)  /*@bfbba@*/

#define PPC_PCFGR1107	(PPC.unPCFGR1107.u16Register)  /*@rg@*/
#define PPC_PCFGR1107_POF	(PPC.unPCFGR1107.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1107_NFE	(*(volatile uint_io8_t*)0xB7201675)  /*@bfbba@*/
#define PPC_PCFGR1107_ODR	(PPC.unPCFGR1107.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1107_PDE	(*(volatile uint_io8_t*)0xB7201678)  /*@bfbba@*/
#define PPC_PCFGR1107_PUE	(*(volatile uint_io8_t*)0xB7201679)  /*@bfbba@*/
#define PPC_PCFGR1107_PIL	(PPC.unPCFGR1107.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1107_PIE	(*(volatile uint_io8_t*)0xB720167C)  /*@bfbba@*/
#define PPC_PCFGR1107_PID	(*(volatile uint_io8_t*)0xB720167D)  /*@bfbba@*/
#define PPC_PCFGR1107_POD	(*(volatile uint_io8_t*)0xB720167E)  /*@bfbba@*/
#define PPC_PCFGR1107_POE	(*(volatile uint_io8_t*)0xB720167F)  /*@bfbba@*/

#define PPC_PCFGR1108	(PPC.unPCFGR1108.u16Register)  /*@rg@*/
#define PPC_PCFGR1108_POF	(PPC.unPCFGR1108.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1108_NFE	(*(volatile uint_io8_t*)0xB7201685)  /*@bfbba@*/
#define PPC_PCFGR1108_ODR	(PPC.unPCFGR1108.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1108_PDE	(*(volatile uint_io8_t*)0xB7201688)  /*@bfbba@*/
#define PPC_PCFGR1108_PUE	(*(volatile uint_io8_t*)0xB7201689)  /*@bfbba@*/
#define PPC_PCFGR1108_PIL	(PPC.unPCFGR1108.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1108_PIE	(*(volatile uint_io8_t*)0xB720168C)  /*@bfbba@*/
#define PPC_PCFGR1108_PID	(*(volatile uint_io8_t*)0xB720168D)  /*@bfbba@*/
#define PPC_PCFGR1108_POD	(*(volatile uint_io8_t*)0xB720168E)  /*@bfbba@*/
#define PPC_PCFGR1108_POE	(*(volatile uint_io8_t*)0xB720168F)  /*@bfbba@*/

#define PPC_PCFGR1109	(PPC.unPCFGR1109.u16Register)  /*@rg@*/
#define PPC_PCFGR1109_POF	(PPC.unPCFGR1109.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1109_NFE	(*(volatile uint_io8_t*)0xB7201695)  /*@bfbba@*/
#define PPC_PCFGR1109_ODR	(PPC.unPCFGR1109.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1109_PDE	(*(volatile uint_io8_t*)0xB7201698)  /*@bfbba@*/
#define PPC_PCFGR1109_PUE	(*(volatile uint_io8_t*)0xB7201699)  /*@bfbba@*/
#define PPC_PCFGR1109_PIL	(PPC.unPCFGR1109.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1109_PIE	(*(volatile uint_io8_t*)0xB720169C)  /*@bfbba@*/
#define PPC_PCFGR1109_PID	(*(volatile uint_io8_t*)0xB720169D)  /*@bfbba@*/
#define PPC_PCFGR1109_POD	(*(volatile uint_io8_t*)0xB720169E)  /*@bfbba@*/
#define PPC_PCFGR1109_POE	(*(volatile uint_io8_t*)0xB720169F)  /*@bfbba@*/

#define PPC_PCFGR1110	(PPC.unPCFGR1110.u16Register)  /*@rg@*/
#define PPC_PCFGR1110_POF	(PPC.unPCFGR1110.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1110_NFE	(*(volatile uint_io8_t*)0xB72016A5)  /*@bfbba@*/
#define PPC_PCFGR1110_ODR	(PPC.unPCFGR1110.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1110_PDE	(*(volatile uint_io8_t*)0xB72016A8)  /*@bfbba@*/
#define PPC_PCFGR1110_PUE	(*(volatile uint_io8_t*)0xB72016A9)  /*@bfbba@*/
#define PPC_PCFGR1110_PIL	(PPC.unPCFGR1110.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1110_PIE	(*(volatile uint_io8_t*)0xB72016AC)  /*@bfbba@*/
#define PPC_PCFGR1110_PID	(*(volatile uint_io8_t*)0xB72016AD)  /*@bfbba@*/
#define PPC_PCFGR1110_POD	(*(volatile uint_io8_t*)0xB72016AE)  /*@bfbba@*/
#define PPC_PCFGR1110_POE	(*(volatile uint_io8_t*)0xB72016AF)  /*@bfbba@*/

#define PPC_PCFGR1111	(PPC.unPCFGR1111.u16Register)  /*@rg@*/
#define PPC_PCFGR1111_POF	(PPC.unPCFGR1111.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1111_NFE	(*(volatile uint_io8_t*)0xB72016B5)  /*@bfbba@*/
#define PPC_PCFGR1111_ODR	(PPC.unPCFGR1111.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1111_PDE	(*(volatile uint_io8_t*)0xB72016B8)  /*@bfbba@*/
#define PPC_PCFGR1111_PUE	(*(volatile uint_io8_t*)0xB72016B9)  /*@bfbba@*/
#define PPC_PCFGR1111_PIL	(PPC.unPCFGR1111.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1111_PIE	(*(volatile uint_io8_t*)0xB72016BC)  /*@bfbba@*/
#define PPC_PCFGR1111_PID	(*(volatile uint_io8_t*)0xB72016BD)  /*@bfbba@*/
#define PPC_PCFGR1111_POD	(*(volatile uint_io8_t*)0xB72016BE)  /*@bfbba@*/
#define PPC_PCFGR1111_POE	(*(volatile uint_io8_t*)0xB72016BF)  /*@bfbba@*/

#define PPC_PCFGR1112	(PPC.unPCFGR1112.u16Register)  /*@rg@*/
#define PPC_PCFGR1112_POF	(PPC.unPCFGR1112.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1112_NFE	(*(volatile uint_io8_t*)0xB72016C5)  /*@bfbba@*/
#define PPC_PCFGR1112_ODR	(PPC.unPCFGR1112.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1112_PDE	(*(volatile uint_io8_t*)0xB72016C8)  /*@bfbba@*/
#define PPC_PCFGR1112_PUE	(*(volatile uint_io8_t*)0xB72016C9)  /*@bfbba@*/
#define PPC_PCFGR1112_PIL	(PPC.unPCFGR1112.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1112_PIE	(*(volatile uint_io8_t*)0xB72016CC)  /*@bfbba@*/
#define PPC_PCFGR1112_PID	(*(volatile uint_io8_t*)0xB72016CD)  /*@bfbba@*/
#define PPC_PCFGR1112_POD	(*(volatile uint_io8_t*)0xB72016CE)  /*@bfbba@*/
#define PPC_PCFGR1112_POE	(*(volatile uint_io8_t*)0xB72016CF)  /*@bfbba@*/

#define PPC_PCFGR1113	(PPC.unPCFGR1113.u16Register)  /*@rg@*/
#define PPC_PCFGR1113_POF	(PPC.unPCFGR1113.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1113_NFE	(*(volatile uint_io8_t*)0xB72016D5)  /*@bfbba@*/
#define PPC_PCFGR1113_ODR	(PPC.unPCFGR1113.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1113_PDE	(*(volatile uint_io8_t*)0xB72016D8)  /*@bfbba@*/
#define PPC_PCFGR1113_PUE	(*(volatile uint_io8_t*)0xB72016D9)  /*@bfbba@*/
#define PPC_PCFGR1113_PIL	(PPC.unPCFGR1113.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1113_PIE	(*(volatile uint_io8_t*)0xB72016DC)  /*@bfbba@*/
#define PPC_PCFGR1113_PID	(*(volatile uint_io8_t*)0xB72016DD)  /*@bfbba@*/
#define PPC_PCFGR1113_POD	(*(volatile uint_io8_t*)0xB72016DE)  /*@bfbba@*/
#define PPC_PCFGR1113_POE	(*(volatile uint_io8_t*)0xB72016DF)  /*@bfbba@*/

#define PPC_PCFGR1114	(PPC.unPCFGR1114.u16Register)  /*@rg@*/
#define PPC_PCFGR1114_POF	(PPC.unPCFGR1114.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1114_NFE	(*(volatile uint_io8_t*)0xB72016E5)  /*@bfbba@*/
#define PPC_PCFGR1114_ODR	(PPC.unPCFGR1114.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1114_PDE	(*(volatile uint_io8_t*)0xB72016E8)  /*@bfbba@*/
#define PPC_PCFGR1114_PUE	(*(volatile uint_io8_t*)0xB72016E9)  /*@bfbba@*/
#define PPC_PCFGR1114_PIL	(PPC.unPCFGR1114.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1114_PIE	(*(volatile uint_io8_t*)0xB72016EC)  /*@bfbba@*/
#define PPC_PCFGR1114_PID	(*(volatile uint_io8_t*)0xB72016ED)  /*@bfbba@*/
#define PPC_PCFGR1114_POD	(*(volatile uint_io8_t*)0xB72016EE)  /*@bfbba@*/
#define PPC_PCFGR1114_POE	(*(volatile uint_io8_t*)0xB72016EF)  /*@bfbba@*/

#define PPC_PCFGR1115	(PPC.unPCFGR1115.u16Register)  /*@rg@*/
#define PPC_PCFGR1115_POF	(PPC.unPCFGR1115.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1115_NFE	(*(volatile uint_io8_t*)0xB72016F5)  /*@bfbba@*/
#define PPC_PCFGR1115_ODR	(PPC.unPCFGR1115.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1115_PDE	(*(volatile uint_io8_t*)0xB72016F8)  /*@bfbba@*/
#define PPC_PCFGR1115_PUE	(*(volatile uint_io8_t*)0xB72016F9)  /*@bfbba@*/
#define PPC_PCFGR1115_PIL	(PPC.unPCFGR1115.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1115_PIE	(*(volatile uint_io8_t*)0xB72016FC)  /*@bfbba@*/
#define PPC_PCFGR1115_PID	(*(volatile uint_io8_t*)0xB72016FD)  /*@bfbba@*/
#define PPC_PCFGR1115_POD	(*(volatile uint_io8_t*)0xB72016FE)  /*@bfbba@*/
#define PPC_PCFGR1115_POE	(*(volatile uint_io8_t*)0xB72016FF)  /*@bfbba@*/

#define PPC_PCFGR1116	(PPC.unPCFGR1116.u16Register)  /*@rg@*/
#define PPC_PCFGR1116_POF	(PPC.unPCFGR1116.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1116_NFE	(*(volatile uint_io8_t*)0xB7201705)  /*@bfbba@*/
#define PPC_PCFGR1116_ODR	(PPC.unPCFGR1116.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1116_PDE	(*(volatile uint_io8_t*)0xB7201708)  /*@bfbba@*/
#define PPC_PCFGR1116_PUE	(*(volatile uint_io8_t*)0xB7201709)  /*@bfbba@*/
#define PPC_PCFGR1116_PIL	(PPC.unPCFGR1116.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1116_PIE	(*(volatile uint_io8_t*)0xB720170C)  /*@bfbba@*/
#define PPC_PCFGR1116_PID	(*(volatile uint_io8_t*)0xB720170D)  /*@bfbba@*/
#define PPC_PCFGR1116_POD	(*(volatile uint_io8_t*)0xB720170E)  /*@bfbba@*/
#define PPC_PCFGR1116_POE	(*(volatile uint_io8_t*)0xB720170F)  /*@bfbba@*/

#define PPC_PCFGR1117	(PPC.unPCFGR1117.u16Register)  /*@rg@*/
#define PPC_PCFGR1117_POF	(PPC.unPCFGR1117.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1117_NFE	(*(volatile uint_io8_t*)0xB7201715)  /*@bfbba@*/
#define PPC_PCFGR1117_ODR	(PPC.unPCFGR1117.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1117_PDE	(*(volatile uint_io8_t*)0xB7201718)  /*@bfbba@*/
#define PPC_PCFGR1117_PUE	(*(volatile uint_io8_t*)0xB7201719)  /*@bfbba@*/
#define PPC_PCFGR1117_PIL	(PPC.unPCFGR1117.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1117_PIE	(*(volatile uint_io8_t*)0xB720171C)  /*@bfbba@*/
#define PPC_PCFGR1117_PID	(*(volatile uint_io8_t*)0xB720171D)  /*@bfbba@*/
#define PPC_PCFGR1117_POD	(*(volatile uint_io8_t*)0xB720171E)  /*@bfbba@*/
#define PPC_PCFGR1117_POE	(*(volatile uint_io8_t*)0xB720171F)  /*@bfbba@*/

#define PPC_PCFGR1118	(PPC.unPCFGR1118.u16Register)  /*@rg@*/
#define PPC_PCFGR1118_POF	(PPC.unPCFGR1118.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1118_NFE	(*(volatile uint_io8_t*)0xB7201725)  /*@bfbba@*/
#define PPC_PCFGR1118_ODR	(PPC.unPCFGR1118.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1118_PDE	(*(volatile uint_io8_t*)0xB7201728)  /*@bfbba@*/
#define PPC_PCFGR1118_PUE	(*(volatile uint_io8_t*)0xB7201729)  /*@bfbba@*/
#define PPC_PCFGR1118_PIL	(PPC.unPCFGR1118.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1118_PIE	(*(volatile uint_io8_t*)0xB720172C)  /*@bfbba@*/
#define PPC_PCFGR1118_PID	(*(volatile uint_io8_t*)0xB720172D)  /*@bfbba@*/
#define PPC_PCFGR1118_POD	(*(volatile uint_io8_t*)0xB720172E)  /*@bfbba@*/
#define PPC_PCFGR1118_POE	(*(volatile uint_io8_t*)0xB720172F)  /*@bfbba@*/

#define PPC_PCFGR1119	(PPC.unPCFGR1119.u16Register)  /*@rg@*/
#define PPC_PCFGR1119_POF	(PPC.unPCFGR1119.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1119_NFE	(*(volatile uint_io8_t*)0xB7201735)  /*@bfbba@*/
#define PPC_PCFGR1119_ODR	(PPC.unPCFGR1119.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1119_PDE	(*(volatile uint_io8_t*)0xB7201738)  /*@bfbba@*/
#define PPC_PCFGR1119_PUE	(*(volatile uint_io8_t*)0xB7201739)  /*@bfbba@*/
#define PPC_PCFGR1119_PIL	(PPC.unPCFGR1119.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1119_PIE	(*(volatile uint_io8_t*)0xB720173C)  /*@bfbba@*/
#define PPC_PCFGR1119_PID	(*(volatile uint_io8_t*)0xB720173D)  /*@bfbba@*/
#define PPC_PCFGR1119_POD	(*(volatile uint_io8_t*)0xB720173E)  /*@bfbba@*/
#define PPC_PCFGR1119_POE	(*(volatile uint_io8_t*)0xB720173F)  /*@bfbba@*/

#define PPC_PCFGR1120	(PPC.unPCFGR1120.u16Register)  /*@rg@*/
#define PPC_PCFGR1120_POF	(PPC.unPCFGR1120.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1120_NFE	(*(volatile uint_io8_t*)0xB7201745)  /*@bfbba@*/
#define PPC_PCFGR1120_ODR	(PPC.unPCFGR1120.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1120_PDE	(*(volatile uint_io8_t*)0xB7201748)  /*@bfbba@*/
#define PPC_PCFGR1120_PUE	(*(volatile uint_io8_t*)0xB7201749)  /*@bfbba@*/
#define PPC_PCFGR1120_PIL	(PPC.unPCFGR1120.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1120_PIE	(*(volatile uint_io8_t*)0xB720174C)  /*@bfbba@*/
#define PPC_PCFGR1120_PID	(*(volatile uint_io8_t*)0xB720174D)  /*@bfbba@*/
#define PPC_PCFGR1120_POD	(*(volatile uint_io8_t*)0xB720174E)  /*@bfbba@*/
#define PPC_PCFGR1120_POE	(*(volatile uint_io8_t*)0xB720174F)  /*@bfbba@*/

#define PPC_PCFGR1121	(PPC.unPCFGR1121.u16Register)  /*@rg@*/
#define PPC_PCFGR1121_POF	(PPC.unPCFGR1121.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1121_NFE	(*(volatile uint_io8_t*)0xB7201755)  /*@bfbba@*/
#define PPC_PCFGR1121_ODR	(PPC.unPCFGR1121.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1121_PDE	(*(volatile uint_io8_t*)0xB7201758)  /*@bfbba@*/
#define PPC_PCFGR1121_PUE	(*(volatile uint_io8_t*)0xB7201759)  /*@bfbba@*/
#define PPC_PCFGR1121_PIL	(PPC.unPCFGR1121.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1121_PIE	(*(volatile uint_io8_t*)0xB720175C)  /*@bfbba@*/
#define PPC_PCFGR1121_PID	(*(volatile uint_io8_t*)0xB720175D)  /*@bfbba@*/
#define PPC_PCFGR1121_POD	(*(volatile uint_io8_t*)0xB720175E)  /*@bfbba@*/
#define PPC_PCFGR1121_POE	(*(volatile uint_io8_t*)0xB720175F)  /*@bfbba@*/

#define PPC_PCFGR1122	(PPC.unPCFGR1122.u16Register)  /*@rg@*/
#define PPC_PCFGR1122_POF	(PPC.unPCFGR1122.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1122_NFE	(*(volatile uint_io8_t*)0xB7201765)  /*@bfbba@*/
#define PPC_PCFGR1122_ODR	(PPC.unPCFGR1122.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1122_PDE	(*(volatile uint_io8_t*)0xB7201768)  /*@bfbba@*/
#define PPC_PCFGR1122_PUE	(*(volatile uint_io8_t*)0xB7201769)  /*@bfbba@*/
#define PPC_PCFGR1122_PIL	(PPC.unPCFGR1122.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1122_PIE	(*(volatile uint_io8_t*)0xB720176C)  /*@bfbba@*/
#define PPC_PCFGR1122_PID	(*(volatile uint_io8_t*)0xB720176D)  /*@bfbba@*/
#define PPC_PCFGR1122_POD	(*(volatile uint_io8_t*)0xB720176E)  /*@bfbba@*/
#define PPC_PCFGR1122_POE	(*(volatile uint_io8_t*)0xB720176F)  /*@bfbba@*/

#define PPC_PCFGR1123	(PPC.unPCFGR1123.u16Register)  /*@rg@*/
#define PPC_PCFGR1123_POF	(PPC.unPCFGR1123.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1123_NFE	(*(volatile uint_io8_t*)0xB7201775)  /*@bfbba@*/
#define PPC_PCFGR1123_ODR	(PPC.unPCFGR1123.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1123_PDE	(*(volatile uint_io8_t*)0xB7201778)  /*@bfbba@*/
#define PPC_PCFGR1123_PUE	(*(volatile uint_io8_t*)0xB7201779)  /*@bfbba@*/
#define PPC_PCFGR1123_PIL	(PPC.unPCFGR1123.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1123_PIE	(*(volatile uint_io8_t*)0xB720177C)  /*@bfbba@*/
#define PPC_PCFGR1123_PID	(*(volatile uint_io8_t*)0xB720177D)  /*@bfbba@*/
#define PPC_PCFGR1123_POD	(*(volatile uint_io8_t*)0xB720177E)  /*@bfbba@*/
#define PPC_PCFGR1123_POE	(*(volatile uint_io8_t*)0xB720177F)  /*@bfbba@*/

#define PPC_PCFGR1124	(PPC.unPCFGR1124.u16Register)  /*@rg@*/
#define PPC_PCFGR1124_POF	(PPC.unPCFGR1124.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1124_NFE	(*(volatile uint_io8_t*)0xB7201785)  /*@bfbba@*/
#define PPC_PCFGR1124_ODR	(PPC.unPCFGR1124.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1124_PDE	(*(volatile uint_io8_t*)0xB7201788)  /*@bfbba@*/
#define PPC_PCFGR1124_PUE	(*(volatile uint_io8_t*)0xB7201789)  /*@bfbba@*/
#define PPC_PCFGR1124_PIL	(PPC.unPCFGR1124.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1124_PIE	(*(volatile uint_io8_t*)0xB720178C)  /*@bfbba@*/
#define PPC_PCFGR1124_PID	(*(volatile uint_io8_t*)0xB720178D)  /*@bfbba@*/
#define PPC_PCFGR1124_POD	(*(volatile uint_io8_t*)0xB720178E)  /*@bfbba@*/
#define PPC_PCFGR1124_POE	(*(volatile uint_io8_t*)0xB720178F)  /*@bfbba@*/

#define PPC_PCFGR1125	(PPC.unPCFGR1125.u16Register)  /*@rg@*/
#define PPC_PCFGR1125_POF	(PPC.unPCFGR1125.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1125_NFE	(*(volatile uint_io8_t*)0xB7201795)  /*@bfbba@*/
#define PPC_PCFGR1125_ODR	(PPC.unPCFGR1125.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1125_PDE	(*(volatile uint_io8_t*)0xB7201798)  /*@bfbba@*/
#define PPC_PCFGR1125_PUE	(*(volatile uint_io8_t*)0xB7201799)  /*@bfbba@*/
#define PPC_PCFGR1125_PIL	(PPC.unPCFGR1125.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1125_PIE	(*(volatile uint_io8_t*)0xB720179C)  /*@bfbba@*/
#define PPC_PCFGR1125_PID	(*(volatile uint_io8_t*)0xB720179D)  /*@bfbba@*/
#define PPC_PCFGR1125_POD	(*(volatile uint_io8_t*)0xB720179E)  /*@bfbba@*/
#define PPC_PCFGR1125_POE	(*(volatile uint_io8_t*)0xB720179F)  /*@bfbba@*/

#define PPC_PCFGR1126	(PPC.unPCFGR1126.u16Register)  /*@rg@*/
#define PPC_PCFGR1126_POF	(PPC.unPCFGR1126.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1126_NFE	(*(volatile uint_io8_t*)0xB72017A5)  /*@bfbba@*/
#define PPC_PCFGR1126_ODR	(PPC.unPCFGR1126.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1126_PDE	(*(volatile uint_io8_t*)0xB72017A8)  /*@bfbba@*/
#define PPC_PCFGR1126_PUE	(*(volatile uint_io8_t*)0xB72017A9)  /*@bfbba@*/
#define PPC_PCFGR1126_PIL	(PPC.unPCFGR1126.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1126_PIE	(*(volatile uint_io8_t*)0xB72017AC)  /*@bfbba@*/
#define PPC_PCFGR1126_PID	(*(volatile uint_io8_t*)0xB72017AD)  /*@bfbba@*/
#define PPC_PCFGR1126_POD	(*(volatile uint_io8_t*)0xB72017AE)  /*@bfbba@*/
#define PPC_PCFGR1126_POE	(*(volatile uint_io8_t*)0xB72017AF)  /*@bfbba@*/

#define PPC_PCFGR1127	(PPC.unPCFGR1127.u16Register)  /*@rg@*/
#define PPC_PCFGR1127_POF	(PPC.unPCFGR1127.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1127_NFE	(*(volatile uint_io8_t*)0xB72017B5)  /*@bfbba@*/
#define PPC_PCFGR1127_ODR	(PPC.unPCFGR1127.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1127_PDE	(*(volatile uint_io8_t*)0xB72017B8)  /*@bfbba@*/
#define PPC_PCFGR1127_PUE	(*(volatile uint_io8_t*)0xB72017B9)  /*@bfbba@*/
#define PPC_PCFGR1127_PIL	(PPC.unPCFGR1127.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1127_PIE	(*(volatile uint_io8_t*)0xB72017BC)  /*@bfbba@*/
#define PPC_PCFGR1127_PID	(*(volatile uint_io8_t*)0xB72017BD)  /*@bfbba@*/
#define PPC_PCFGR1127_POD	(*(volatile uint_io8_t*)0xB72017BE)  /*@bfbba@*/
#define PPC_PCFGR1127_POE	(*(volatile uint_io8_t*)0xB72017BF)  /*@bfbba@*/

#define PPC_PCFGR1128	(PPC.unPCFGR1128.u16Register)  /*@rg@*/
#define PPC_PCFGR1128_POF	(PPC.unPCFGR1128.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1128_NFE	(*(volatile uint_io8_t*)0xB72017C5)  /*@bfbba@*/
#define PPC_PCFGR1128_ODR	(PPC.unPCFGR1128.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1128_PDE	(*(volatile uint_io8_t*)0xB72017C8)  /*@bfbba@*/
#define PPC_PCFGR1128_PUE	(*(volatile uint_io8_t*)0xB72017C9)  /*@bfbba@*/
#define PPC_PCFGR1128_PIL	(PPC.unPCFGR1128.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1128_PIE	(*(volatile uint_io8_t*)0xB72017CC)  /*@bfbba@*/
#define PPC_PCFGR1128_PID	(*(volatile uint_io8_t*)0xB72017CD)  /*@bfbba@*/
#define PPC_PCFGR1128_POD	(*(volatile uint_io8_t*)0xB72017CE)  /*@bfbba@*/
#define PPC_PCFGR1128_POE	(*(volatile uint_io8_t*)0xB72017CF)  /*@bfbba@*/

#define PPC_PCFGR1129	(PPC.unPCFGR1129.u16Register)  /*@rg@*/
#define PPC_PCFGR1129_POF	(PPC.unPCFGR1129.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1129_NFE	(*(volatile uint_io8_t*)0xB72017D5)  /*@bfbba@*/
#define PPC_PCFGR1129_ODR	(PPC.unPCFGR1129.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1129_PDE	(*(volatile uint_io8_t*)0xB72017D8)  /*@bfbba@*/
#define PPC_PCFGR1129_PUE	(*(volatile uint_io8_t*)0xB72017D9)  /*@bfbba@*/
#define PPC_PCFGR1129_PIL	(PPC.unPCFGR1129.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1129_PIE	(*(volatile uint_io8_t*)0xB72017DC)  /*@bfbba@*/
#define PPC_PCFGR1129_PID	(*(volatile uint_io8_t*)0xB72017DD)  /*@bfbba@*/
#define PPC_PCFGR1129_POD	(*(volatile uint_io8_t*)0xB72017DE)  /*@bfbba@*/
#define PPC_PCFGR1129_POE	(*(volatile uint_io8_t*)0xB72017DF)  /*@bfbba@*/

#define PPC_PCFGR1130	(PPC.unPCFGR1130.u16Register)  /*@rg@*/
#define PPC_PCFGR1130_POF	(PPC.unPCFGR1130.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1130_NFE	(*(volatile uint_io8_t*)0xB72017E5)  /*@bfbba@*/
#define PPC_PCFGR1130_ODR	(PPC.unPCFGR1130.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1130_PDE	(*(volatile uint_io8_t*)0xB72017E8)  /*@bfbba@*/
#define PPC_PCFGR1130_PUE	(*(volatile uint_io8_t*)0xB72017E9)  /*@bfbba@*/
#define PPC_PCFGR1130_PIL	(PPC.unPCFGR1130.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1130_PIE	(*(volatile uint_io8_t*)0xB72017EC)  /*@bfbba@*/
#define PPC_PCFGR1130_PID	(*(volatile uint_io8_t*)0xB72017ED)  /*@bfbba@*/
#define PPC_PCFGR1130_POD	(*(volatile uint_io8_t*)0xB72017EE)  /*@bfbba@*/
#define PPC_PCFGR1130_POE	(*(volatile uint_io8_t*)0xB72017EF)  /*@bfbba@*/

#define PPC_PCFGR1131	(PPC.unPCFGR1131.u16Register)  /*@rg@*/
#define PPC_PCFGR1131_POF	(PPC.unPCFGR1131.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1131_NFE	(*(volatile uint_io8_t*)0xB72017F5)  /*@bfbba@*/
#define PPC_PCFGR1131_ODR	(PPC.unPCFGR1131.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1131_PDE	(*(volatile uint_io8_t*)0xB72017F8)  /*@bfbba@*/
#define PPC_PCFGR1131_PUE	(*(volatile uint_io8_t*)0xB72017F9)  /*@bfbba@*/
#define PPC_PCFGR1131_PIL	(PPC.unPCFGR1131.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1131_PIE	(*(volatile uint_io8_t*)0xB72017FC)  /*@bfbba@*/
#define PPC_PCFGR1131_PID	(*(volatile uint_io8_t*)0xB72017FD)  /*@bfbba@*/
#define PPC_PCFGR1131_POD	(*(volatile uint_io8_t*)0xB72017FE)  /*@bfbba@*/
#define PPC_PCFGR1131_POE	(*(volatile uint_io8_t*)0xB72017FF)  /*@bfbba@*/

#define PPC_PCFGR1200	(PPC.unPCFGR1200.u16Register)  /*@rg@*/
#define PPC_PCFGR1200_POF	(PPC.unPCFGR1200.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1200_NFE	(*(volatile uint_io8_t*)0xB7201805)  /*@bfbba@*/
#define PPC_PCFGR1200_ODR	(PPC.unPCFGR1200.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1200_PDE	(*(volatile uint_io8_t*)0xB7201808)  /*@bfbba@*/
#define PPC_PCFGR1200_PUE	(*(volatile uint_io8_t*)0xB7201809)  /*@bfbba@*/
#define PPC_PCFGR1200_PIL	(PPC.unPCFGR1200.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1200_PIE	(*(volatile uint_io8_t*)0xB720180C)  /*@bfbba@*/
#define PPC_PCFGR1200_PID	(*(volatile uint_io8_t*)0xB720180D)  /*@bfbba@*/
#define PPC_PCFGR1200_POD	(*(volatile uint_io8_t*)0xB720180E)  /*@bfbba@*/
#define PPC_PCFGR1200_POE	(*(volatile uint_io8_t*)0xB720180F)  /*@bfbba@*/

#define PPC_PCFGR1201	(PPC.unPCFGR1201.u16Register)  /*@rg@*/
#define PPC_PCFGR1201_POF	(PPC.unPCFGR1201.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1201_NFE	(*(volatile uint_io8_t*)0xB7201815)  /*@bfbba@*/
#define PPC_PCFGR1201_ODR	(PPC.unPCFGR1201.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1201_PDE	(*(volatile uint_io8_t*)0xB7201818)  /*@bfbba@*/
#define PPC_PCFGR1201_PUE	(*(volatile uint_io8_t*)0xB7201819)  /*@bfbba@*/
#define PPC_PCFGR1201_PIL	(PPC.unPCFGR1201.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1201_PIE	(*(volatile uint_io8_t*)0xB720181C)  /*@bfbba@*/
#define PPC_PCFGR1201_PID	(*(volatile uint_io8_t*)0xB720181D)  /*@bfbba@*/
#define PPC_PCFGR1201_POD	(*(volatile uint_io8_t*)0xB720181E)  /*@bfbba@*/
#define PPC_PCFGR1201_POE	(*(volatile uint_io8_t*)0xB720181F)  /*@bfbba@*/

#define PPC_PCFGR1202	(PPC.unPCFGR1202.u16Register)  /*@rg@*/
#define PPC_PCFGR1202_POF	(PPC.unPCFGR1202.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1202_NFE	(*(volatile uint_io8_t*)0xB7201825)  /*@bfbba@*/
#define PPC_PCFGR1202_ODR	(PPC.unPCFGR1202.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1202_PDE	(*(volatile uint_io8_t*)0xB7201828)  /*@bfbba@*/
#define PPC_PCFGR1202_PUE	(*(volatile uint_io8_t*)0xB7201829)  /*@bfbba@*/
#define PPC_PCFGR1202_PIL	(PPC.unPCFGR1202.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1202_PIE	(*(volatile uint_io8_t*)0xB720182C)  /*@bfbba@*/
#define PPC_PCFGR1202_PID	(*(volatile uint_io8_t*)0xB720182D)  /*@bfbba@*/
#define PPC_PCFGR1202_POD	(*(volatile uint_io8_t*)0xB720182E)  /*@bfbba@*/
#define PPC_PCFGR1202_POE	(*(volatile uint_io8_t*)0xB720182F)  /*@bfbba@*/

#define PPC_PCFGR1203	(PPC.unPCFGR1203.u16Register)  /*@rg@*/
#define PPC_PCFGR1203_POF	(PPC.unPCFGR1203.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1203_NFE	(*(volatile uint_io8_t*)0xB7201835)  /*@bfbba@*/
#define PPC_PCFGR1203_ODR	(PPC.unPCFGR1203.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1203_PDE	(*(volatile uint_io8_t*)0xB7201838)  /*@bfbba@*/
#define PPC_PCFGR1203_PUE	(*(volatile uint_io8_t*)0xB7201839)  /*@bfbba@*/
#define PPC_PCFGR1203_PIL	(PPC.unPCFGR1203.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1203_PIE	(*(volatile uint_io8_t*)0xB720183C)  /*@bfbba@*/
#define PPC_PCFGR1203_PID	(*(volatile uint_io8_t*)0xB720183D)  /*@bfbba@*/
#define PPC_PCFGR1203_POD	(*(volatile uint_io8_t*)0xB720183E)  /*@bfbba@*/
#define PPC_PCFGR1203_POE	(*(volatile uint_io8_t*)0xB720183F)  /*@bfbba@*/

#define PPC_PCFGR1204	(PPC.unPCFGR1204.u16Register)  /*@rg@*/
#define PPC_PCFGR1204_POF	(PPC.unPCFGR1204.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1204_NFE	(*(volatile uint_io8_t*)0xB7201845)  /*@bfbba@*/
#define PPC_PCFGR1204_ODR	(PPC.unPCFGR1204.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1204_PDE	(*(volatile uint_io8_t*)0xB7201848)  /*@bfbba@*/
#define PPC_PCFGR1204_PUE	(*(volatile uint_io8_t*)0xB7201849)  /*@bfbba@*/
#define PPC_PCFGR1204_PIL	(PPC.unPCFGR1204.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1204_PIE	(*(volatile uint_io8_t*)0xB720184C)  /*@bfbba@*/
#define PPC_PCFGR1204_PID	(*(volatile uint_io8_t*)0xB720184D)  /*@bfbba@*/
#define PPC_PCFGR1204_POD	(*(volatile uint_io8_t*)0xB720184E)  /*@bfbba@*/
#define PPC_PCFGR1204_POE	(*(volatile uint_io8_t*)0xB720184F)  /*@bfbba@*/

#define PPC_PCFGR1205	(PPC.unPCFGR1205.u16Register)  /*@rg@*/
#define PPC_PCFGR1205_POF	(PPC.unPCFGR1205.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1205_NFE	(*(volatile uint_io8_t*)0xB7201855)  /*@bfbba@*/
#define PPC_PCFGR1205_ODR	(PPC.unPCFGR1205.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1205_PDE	(*(volatile uint_io8_t*)0xB7201858)  /*@bfbba@*/
#define PPC_PCFGR1205_PUE	(*(volatile uint_io8_t*)0xB7201859)  /*@bfbba@*/
#define PPC_PCFGR1205_PIL	(PPC.unPCFGR1205.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1205_PIE	(*(volatile uint_io8_t*)0xB720185C)  /*@bfbba@*/
#define PPC_PCFGR1205_PID	(*(volatile uint_io8_t*)0xB720185D)  /*@bfbba@*/
#define PPC_PCFGR1205_POD	(*(volatile uint_io8_t*)0xB720185E)  /*@bfbba@*/
#define PPC_PCFGR1205_POE	(*(volatile uint_io8_t*)0xB720185F)  /*@bfbba@*/

#define PPC_PCFGR1206	(PPC.unPCFGR1206.u16Register)  /*@rg@*/
#define PPC_PCFGR1206_POF	(PPC.unPCFGR1206.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1206_NFE	(*(volatile uint_io8_t*)0xB7201865)  /*@bfbba@*/
#define PPC_PCFGR1206_ODR	(PPC.unPCFGR1206.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1206_PDE	(*(volatile uint_io8_t*)0xB7201868)  /*@bfbba@*/
#define PPC_PCFGR1206_PUE	(*(volatile uint_io8_t*)0xB7201869)  /*@bfbba@*/
#define PPC_PCFGR1206_PIL	(PPC.unPCFGR1206.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1206_PIE	(*(volatile uint_io8_t*)0xB720186C)  /*@bfbba@*/
#define PPC_PCFGR1206_PID	(*(volatile uint_io8_t*)0xB720186D)  /*@bfbba@*/
#define PPC_PCFGR1206_POD	(*(volatile uint_io8_t*)0xB720186E)  /*@bfbba@*/
#define PPC_PCFGR1206_POE	(*(volatile uint_io8_t*)0xB720186F)  /*@bfbba@*/

#define PPC_PCFGR1207	(PPC.unPCFGR1207.u16Register)  /*@rg@*/
#define PPC_PCFGR1207_POF	(PPC.unPCFGR1207.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1207_NFE	(*(volatile uint_io8_t*)0xB7201875)  /*@bfbba@*/
#define PPC_PCFGR1207_ODR	(PPC.unPCFGR1207.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1207_PDE	(*(volatile uint_io8_t*)0xB7201878)  /*@bfbba@*/
#define PPC_PCFGR1207_PUE	(*(volatile uint_io8_t*)0xB7201879)  /*@bfbba@*/
#define PPC_PCFGR1207_PIL	(PPC.unPCFGR1207.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1207_PIE	(*(volatile uint_io8_t*)0xB720187C)  /*@bfbba@*/
#define PPC_PCFGR1207_PID	(*(volatile uint_io8_t*)0xB720187D)  /*@bfbba@*/
#define PPC_PCFGR1207_POD	(*(volatile uint_io8_t*)0xB720187E)  /*@bfbba@*/
#define PPC_PCFGR1207_POE	(*(volatile uint_io8_t*)0xB720187F)  /*@bfbba@*/

#define PPC_PCFGR1208	(PPC.unPCFGR1208.u16Register)  /*@rg@*/
#define PPC_PCFGR1208_POF	(PPC.unPCFGR1208.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1208_NFE	(*(volatile uint_io8_t*)0xB7201885)  /*@bfbba@*/
#define PPC_PCFGR1208_ODR	(PPC.unPCFGR1208.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1208_PDE	(*(volatile uint_io8_t*)0xB7201888)  /*@bfbba@*/
#define PPC_PCFGR1208_PUE	(*(volatile uint_io8_t*)0xB7201889)  /*@bfbba@*/
#define PPC_PCFGR1208_PIL	(PPC.unPCFGR1208.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1208_PIE	(*(volatile uint_io8_t*)0xB720188C)  /*@bfbba@*/
#define PPC_PCFGR1208_PID	(*(volatile uint_io8_t*)0xB720188D)  /*@bfbba@*/
#define PPC_PCFGR1208_POD	(*(volatile uint_io8_t*)0xB720188E)  /*@bfbba@*/
#define PPC_PCFGR1208_POE	(*(volatile uint_io8_t*)0xB720188F)  /*@bfbba@*/

#define PPC_PCFGR1209	(PPC.unPCFGR1209.u16Register)  /*@rg@*/
#define PPC_PCFGR1209_POF	(PPC.unPCFGR1209.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1209_NFE	(*(volatile uint_io8_t*)0xB7201895)  /*@bfbba@*/
#define PPC_PCFGR1209_ODR	(PPC.unPCFGR1209.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1209_PDE	(*(volatile uint_io8_t*)0xB7201898)  /*@bfbba@*/
#define PPC_PCFGR1209_PUE	(*(volatile uint_io8_t*)0xB7201899)  /*@bfbba@*/
#define PPC_PCFGR1209_PIL	(PPC.unPCFGR1209.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1209_PIE	(*(volatile uint_io8_t*)0xB720189C)  /*@bfbba@*/
#define PPC_PCFGR1209_PID	(*(volatile uint_io8_t*)0xB720189D)  /*@bfbba@*/
#define PPC_PCFGR1209_POD	(*(volatile uint_io8_t*)0xB720189E)  /*@bfbba@*/
#define PPC_PCFGR1209_POE	(*(volatile uint_io8_t*)0xB720189F)  /*@bfbba@*/

#define PPC_PCFGR1210	(PPC.unPCFGR1210.u16Register)  /*@rg@*/
#define PPC_PCFGR1210_POF	(PPC.unPCFGR1210.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1210_NFE	(*(volatile uint_io8_t*)0xB72018A5)  /*@bfbba@*/
#define PPC_PCFGR1210_ODR	(PPC.unPCFGR1210.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1210_PDE	(*(volatile uint_io8_t*)0xB72018A8)  /*@bfbba@*/
#define PPC_PCFGR1210_PUE	(*(volatile uint_io8_t*)0xB72018A9)  /*@bfbba@*/
#define PPC_PCFGR1210_PIL	(PPC.unPCFGR1210.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1210_PIE	(*(volatile uint_io8_t*)0xB72018AC)  /*@bfbba@*/
#define PPC_PCFGR1210_PID	(*(volatile uint_io8_t*)0xB72018AD)  /*@bfbba@*/
#define PPC_PCFGR1210_POD	(*(volatile uint_io8_t*)0xB72018AE)  /*@bfbba@*/
#define PPC_PCFGR1210_POE	(*(volatile uint_io8_t*)0xB72018AF)  /*@bfbba@*/

#define PPC_PCFGR1211	(PPC.unPCFGR1211.u16Register)  /*@rg@*/
#define PPC_PCFGR1211_POF	(PPC.unPCFGR1211.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1211_NFE	(*(volatile uint_io8_t*)0xB72018B5)  /*@bfbba@*/
#define PPC_PCFGR1211_ODR	(PPC.unPCFGR1211.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1211_PDE	(*(volatile uint_io8_t*)0xB72018B8)  /*@bfbba@*/
#define PPC_PCFGR1211_PUE	(*(volatile uint_io8_t*)0xB72018B9)  /*@bfbba@*/
#define PPC_PCFGR1211_PIL	(PPC.unPCFGR1211.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1211_PIE	(*(volatile uint_io8_t*)0xB72018BC)  /*@bfbba@*/
#define PPC_PCFGR1211_PID	(*(volatile uint_io8_t*)0xB72018BD)  /*@bfbba@*/
#define PPC_PCFGR1211_POD	(*(volatile uint_io8_t*)0xB72018BE)  /*@bfbba@*/
#define PPC_PCFGR1211_POE	(*(volatile uint_io8_t*)0xB72018BF)  /*@bfbba@*/

#define PPC_PCFGR1212	(PPC.unPCFGR1212.u16Register)  /*@rg@*/
#define PPC_PCFGR1212_POF	(PPC.unPCFGR1212.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1212_NFE	(*(volatile uint_io8_t*)0xB72018C5)  /*@bfbba@*/
#define PPC_PCFGR1212_ODR	(PPC.unPCFGR1212.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1212_PDE	(*(volatile uint_io8_t*)0xB72018C8)  /*@bfbba@*/
#define PPC_PCFGR1212_PUE	(*(volatile uint_io8_t*)0xB72018C9)  /*@bfbba@*/
#define PPC_PCFGR1212_PIL	(PPC.unPCFGR1212.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1212_PIE	(*(volatile uint_io8_t*)0xB72018CC)  /*@bfbba@*/
#define PPC_PCFGR1212_PID	(*(volatile uint_io8_t*)0xB72018CD)  /*@bfbba@*/
#define PPC_PCFGR1212_POD	(*(volatile uint_io8_t*)0xB72018CE)  /*@bfbba@*/
#define PPC_PCFGR1212_POE	(*(volatile uint_io8_t*)0xB72018CF)  /*@bfbba@*/

#define PPC_PCFGR1213	(PPC.unPCFGR1213.u16Register)  /*@rg@*/
#define PPC_PCFGR1213_POF	(PPC.unPCFGR1213.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1213_NFE	(*(volatile uint_io8_t*)0xB72018D5)  /*@bfbba@*/
#define PPC_PCFGR1213_ODR	(PPC.unPCFGR1213.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1213_PDE	(*(volatile uint_io8_t*)0xB72018D8)  /*@bfbba@*/
#define PPC_PCFGR1213_PUE	(*(volatile uint_io8_t*)0xB72018D9)  /*@bfbba@*/
#define PPC_PCFGR1213_PIL	(PPC.unPCFGR1213.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1213_PIE	(*(volatile uint_io8_t*)0xB72018DC)  /*@bfbba@*/
#define PPC_PCFGR1213_PID	(*(volatile uint_io8_t*)0xB72018DD)  /*@bfbba@*/
#define PPC_PCFGR1213_POD	(*(volatile uint_io8_t*)0xB72018DE)  /*@bfbba@*/
#define PPC_PCFGR1213_POE	(*(volatile uint_io8_t*)0xB72018DF)  /*@bfbba@*/

#define PPC_PCFGR1214	(PPC.unPCFGR1214.u16Register)  /*@rg@*/
#define PPC_PCFGR1214_POF	(PPC.unPCFGR1214.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1214_NFE	(*(volatile uint_io8_t*)0xB72018E5)  /*@bfbba@*/
#define PPC_PCFGR1214_ODR	(PPC.unPCFGR1214.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1214_PDE	(*(volatile uint_io8_t*)0xB72018E8)  /*@bfbba@*/
#define PPC_PCFGR1214_PUE	(*(volatile uint_io8_t*)0xB72018E9)  /*@bfbba@*/
#define PPC_PCFGR1214_PIL	(PPC.unPCFGR1214.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1214_PIE	(*(volatile uint_io8_t*)0xB72018EC)  /*@bfbba@*/
#define PPC_PCFGR1214_PID	(*(volatile uint_io8_t*)0xB72018ED)  /*@bfbba@*/
#define PPC_PCFGR1214_POD	(*(volatile uint_io8_t*)0xB72018EE)  /*@bfbba@*/
#define PPC_PCFGR1214_POE	(*(volatile uint_io8_t*)0xB72018EF)  /*@bfbba@*/

#define PPC_PCFGR1215	(PPC.unPCFGR1215.u16Register)  /*@rg@*/
#define PPC_PCFGR1215_POF	(PPC.unPCFGR1215.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1215_NFE	(*(volatile uint_io8_t*)0xB72018F5)  /*@bfbba@*/
#define PPC_PCFGR1215_ODR	(PPC.unPCFGR1215.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1215_PDE	(*(volatile uint_io8_t*)0xB72018F8)  /*@bfbba@*/
#define PPC_PCFGR1215_PUE	(*(volatile uint_io8_t*)0xB72018F9)  /*@bfbba@*/
#define PPC_PCFGR1215_PIL	(PPC.unPCFGR1215.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1215_PIE	(*(volatile uint_io8_t*)0xB72018FC)  /*@bfbba@*/
#define PPC_PCFGR1215_PID	(*(volatile uint_io8_t*)0xB72018FD)  /*@bfbba@*/
#define PPC_PCFGR1215_POD	(*(volatile uint_io8_t*)0xB72018FE)  /*@bfbba@*/
#define PPC_PCFGR1215_POE	(*(volatile uint_io8_t*)0xB72018FF)  /*@bfbba@*/

#define PPC_PCFGR1216	(PPC.unPCFGR1216.u16Register)  /*@rg@*/
#define PPC_PCFGR1216_POF	(PPC.unPCFGR1216.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1216_NFE	(*(volatile uint_io8_t*)0xB7201905)  /*@bfbba@*/
#define PPC_PCFGR1216_ODR	(PPC.unPCFGR1216.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1216_PDE	(*(volatile uint_io8_t*)0xB7201908)  /*@bfbba@*/
#define PPC_PCFGR1216_PUE	(*(volatile uint_io8_t*)0xB7201909)  /*@bfbba@*/
#define PPC_PCFGR1216_PIL	(PPC.unPCFGR1216.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1216_PIE	(*(volatile uint_io8_t*)0xB720190C)  /*@bfbba@*/
#define PPC_PCFGR1216_PID	(*(volatile uint_io8_t*)0xB720190D)  /*@bfbba@*/
#define PPC_PCFGR1216_POD	(*(volatile uint_io8_t*)0xB720190E)  /*@bfbba@*/
#define PPC_PCFGR1216_POE	(*(volatile uint_io8_t*)0xB720190F)  /*@bfbba@*/

#define PPC_PCFGR1217	(PPC.unPCFGR1217.u16Register)  /*@rg@*/
#define PPC_PCFGR1217_POF	(PPC.unPCFGR1217.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1217_NFE	(*(volatile uint_io8_t*)0xB7201915)  /*@bfbba@*/
#define PPC_PCFGR1217_ODR	(PPC.unPCFGR1217.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1217_PDE	(*(volatile uint_io8_t*)0xB7201918)  /*@bfbba@*/
#define PPC_PCFGR1217_PUE	(*(volatile uint_io8_t*)0xB7201919)  /*@bfbba@*/
#define PPC_PCFGR1217_PIL	(PPC.unPCFGR1217.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1217_PIE	(*(volatile uint_io8_t*)0xB720191C)  /*@bfbba@*/
#define PPC_PCFGR1217_PID	(*(volatile uint_io8_t*)0xB720191D)  /*@bfbba@*/
#define PPC_PCFGR1217_POD	(*(volatile uint_io8_t*)0xB720191E)  /*@bfbba@*/
#define PPC_PCFGR1217_POE	(*(volatile uint_io8_t*)0xB720191F)  /*@bfbba@*/

#define PPC_PCFGR1218	(PPC.unPCFGR1218.u16Register)  /*@rg@*/
#define PPC_PCFGR1218_POF	(PPC.unPCFGR1218.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1218_NFE	(*(volatile uint_io8_t*)0xB7201925)  /*@bfbba@*/
#define PPC_PCFGR1218_ODR	(PPC.unPCFGR1218.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1218_PDE	(*(volatile uint_io8_t*)0xB7201928)  /*@bfbba@*/
#define PPC_PCFGR1218_PUE	(*(volatile uint_io8_t*)0xB7201929)  /*@bfbba@*/
#define PPC_PCFGR1218_PIL	(PPC.unPCFGR1218.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1218_PIE	(*(volatile uint_io8_t*)0xB720192C)  /*@bfbba@*/
#define PPC_PCFGR1218_PID	(*(volatile uint_io8_t*)0xB720192D)  /*@bfbba@*/
#define PPC_PCFGR1218_POD	(*(volatile uint_io8_t*)0xB720192E)  /*@bfbba@*/
#define PPC_PCFGR1218_POE	(*(volatile uint_io8_t*)0xB720192F)  /*@bfbba@*/

#define PPC_PCFGR1219	(PPC.unPCFGR1219.u16Register)  /*@rg@*/
#define PPC_PCFGR1219_POF	(PPC.unPCFGR1219.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1219_NFE	(*(volatile uint_io8_t*)0xB7201935)  /*@bfbba@*/
#define PPC_PCFGR1219_ODR	(PPC.unPCFGR1219.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1219_PDE	(*(volatile uint_io8_t*)0xB7201938)  /*@bfbba@*/
#define PPC_PCFGR1219_PUE	(*(volatile uint_io8_t*)0xB7201939)  /*@bfbba@*/
#define PPC_PCFGR1219_PIL	(PPC.unPCFGR1219.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1219_PIE	(*(volatile uint_io8_t*)0xB720193C)  /*@bfbba@*/
#define PPC_PCFGR1219_PID	(*(volatile uint_io8_t*)0xB720193D)  /*@bfbba@*/
#define PPC_PCFGR1219_POD	(*(volatile uint_io8_t*)0xB720193E)  /*@bfbba@*/
#define PPC_PCFGR1219_POE	(*(volatile uint_io8_t*)0xB720193F)  /*@bfbba@*/

#define PPC_PCFGR1220	(PPC.unPCFGR1220.u16Register)  /*@rg@*/
#define PPC_PCFGR1220_POF	(PPC.unPCFGR1220.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1220_NFE	(*(volatile uint_io8_t*)0xB7201945)  /*@bfbba@*/
#define PPC_PCFGR1220_ODR	(PPC.unPCFGR1220.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1220_PDE	(*(volatile uint_io8_t*)0xB7201948)  /*@bfbba@*/
#define PPC_PCFGR1220_PUE	(*(volatile uint_io8_t*)0xB7201949)  /*@bfbba@*/
#define PPC_PCFGR1220_PIL	(PPC.unPCFGR1220.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1220_PIE	(*(volatile uint_io8_t*)0xB720194C)  /*@bfbba@*/
#define PPC_PCFGR1220_PID	(*(volatile uint_io8_t*)0xB720194D)  /*@bfbba@*/
#define PPC_PCFGR1220_POD	(*(volatile uint_io8_t*)0xB720194E)  /*@bfbba@*/
#define PPC_PCFGR1220_POE	(*(volatile uint_io8_t*)0xB720194F)  /*@bfbba@*/

#define PPC_PCFGR1221	(PPC.unPCFGR1221.u16Register)  /*@rg@*/
#define PPC_PCFGR1221_POF	(PPC.unPCFGR1221.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1221_NFE	(*(volatile uint_io8_t*)0xB7201955)  /*@bfbba@*/
#define PPC_PCFGR1221_ODR	(PPC.unPCFGR1221.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1221_PDE	(*(volatile uint_io8_t*)0xB7201958)  /*@bfbba@*/
#define PPC_PCFGR1221_PUE	(*(volatile uint_io8_t*)0xB7201959)  /*@bfbba@*/
#define PPC_PCFGR1221_PIL	(PPC.unPCFGR1221.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1221_PIE	(*(volatile uint_io8_t*)0xB720195C)  /*@bfbba@*/
#define PPC_PCFGR1221_PID	(*(volatile uint_io8_t*)0xB720195D)  /*@bfbba@*/
#define PPC_PCFGR1221_POD	(*(volatile uint_io8_t*)0xB720195E)  /*@bfbba@*/
#define PPC_PCFGR1221_POE	(*(volatile uint_io8_t*)0xB720195F)  /*@bfbba@*/

#define PPC_PCFGR1222	(PPC.unPCFGR1222.u16Register)  /*@rg@*/
#define PPC_PCFGR1222_POF	(PPC.unPCFGR1222.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1222_NFE	(*(volatile uint_io8_t*)0xB7201965)  /*@bfbba@*/
#define PPC_PCFGR1222_ODR	(PPC.unPCFGR1222.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1222_PDE	(*(volatile uint_io8_t*)0xB7201968)  /*@bfbba@*/
#define PPC_PCFGR1222_PUE	(*(volatile uint_io8_t*)0xB7201969)  /*@bfbba@*/
#define PPC_PCFGR1222_PIL	(PPC.unPCFGR1222.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1222_PIE	(*(volatile uint_io8_t*)0xB720196C)  /*@bfbba@*/
#define PPC_PCFGR1222_PID	(*(volatile uint_io8_t*)0xB720196D)  /*@bfbba@*/
#define PPC_PCFGR1222_POD	(*(volatile uint_io8_t*)0xB720196E)  /*@bfbba@*/
#define PPC_PCFGR1222_POE	(*(volatile uint_io8_t*)0xB720196F)  /*@bfbba@*/

#define PPC_PCFGR1223	(PPC.unPCFGR1223.u16Register)  /*@rg@*/
#define PPC_PCFGR1223_POF	(PPC.unPCFGR1223.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1223_NFE	(*(volatile uint_io8_t*)0xB7201975)  /*@bfbba@*/
#define PPC_PCFGR1223_ODR	(PPC.unPCFGR1223.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1223_PDE	(*(volatile uint_io8_t*)0xB7201978)  /*@bfbba@*/
#define PPC_PCFGR1223_PUE	(*(volatile uint_io8_t*)0xB7201979)  /*@bfbba@*/
#define PPC_PCFGR1223_PIL	(PPC.unPCFGR1223.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1223_PIE	(*(volatile uint_io8_t*)0xB720197C)  /*@bfbba@*/
#define PPC_PCFGR1223_PID	(*(volatile uint_io8_t*)0xB720197D)  /*@bfbba@*/
#define PPC_PCFGR1223_POD	(*(volatile uint_io8_t*)0xB720197E)  /*@bfbba@*/
#define PPC_PCFGR1223_POE	(*(volatile uint_io8_t*)0xB720197F)  /*@bfbba@*/

#define PPC_PCFGR1224	(PPC.unPCFGR1224.u16Register)  /*@rg@*/
#define PPC_PCFGR1224_POF	(PPC.unPCFGR1224.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1224_NFE	(*(volatile uint_io8_t*)0xB7201985)  /*@bfbba@*/
#define PPC_PCFGR1224_ODR	(PPC.unPCFGR1224.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1224_PDE	(*(volatile uint_io8_t*)0xB7201988)  /*@bfbba@*/
#define PPC_PCFGR1224_PUE	(*(volatile uint_io8_t*)0xB7201989)  /*@bfbba@*/
#define PPC_PCFGR1224_PIL	(PPC.unPCFGR1224.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1224_PIE	(*(volatile uint_io8_t*)0xB720198C)  /*@bfbba@*/
#define PPC_PCFGR1224_PID	(*(volatile uint_io8_t*)0xB720198D)  /*@bfbba@*/
#define PPC_PCFGR1224_POD	(*(volatile uint_io8_t*)0xB720198E)  /*@bfbba@*/
#define PPC_PCFGR1224_POE	(*(volatile uint_io8_t*)0xB720198F)  /*@bfbba@*/

#define PPC_PCFGR1225	(PPC.unPCFGR1225.u16Register)  /*@rg@*/
#define PPC_PCFGR1225_POF	(PPC.unPCFGR1225.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1225_NFE	(*(volatile uint_io8_t*)0xB7201995)  /*@bfbba@*/
#define PPC_PCFGR1225_ODR	(PPC.unPCFGR1225.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1225_PDE	(*(volatile uint_io8_t*)0xB7201998)  /*@bfbba@*/
#define PPC_PCFGR1225_PUE	(*(volatile uint_io8_t*)0xB7201999)  /*@bfbba@*/
#define PPC_PCFGR1225_PIL	(PPC.unPCFGR1225.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1225_PIE	(*(volatile uint_io8_t*)0xB720199C)  /*@bfbba@*/
#define PPC_PCFGR1225_PID	(*(volatile uint_io8_t*)0xB720199D)  /*@bfbba@*/
#define PPC_PCFGR1225_POD	(*(volatile uint_io8_t*)0xB720199E)  /*@bfbba@*/
#define PPC_PCFGR1225_POE	(*(volatile uint_io8_t*)0xB720199F)  /*@bfbba@*/

#define PPC_PCFGR1226	(PPC.unPCFGR1226.u16Register)  /*@rg@*/
#define PPC_PCFGR1226_POF	(PPC.unPCFGR1226.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1226_NFE	(*(volatile uint_io8_t*)0xB72019A5)  /*@bfbba@*/
#define PPC_PCFGR1226_ODR	(PPC.unPCFGR1226.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1226_PDE	(*(volatile uint_io8_t*)0xB72019A8)  /*@bfbba@*/
#define PPC_PCFGR1226_PUE	(*(volatile uint_io8_t*)0xB72019A9)  /*@bfbba@*/
#define PPC_PCFGR1226_PIL	(PPC.unPCFGR1226.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1226_PIE	(*(volatile uint_io8_t*)0xB72019AC)  /*@bfbba@*/
#define PPC_PCFGR1226_PID	(*(volatile uint_io8_t*)0xB72019AD)  /*@bfbba@*/
#define PPC_PCFGR1226_POD	(*(volatile uint_io8_t*)0xB72019AE)  /*@bfbba@*/
#define PPC_PCFGR1226_POE	(*(volatile uint_io8_t*)0xB72019AF)  /*@bfbba@*/

#define PPC_PCFGR1227	(PPC.unPCFGR1227.u16Register)  /*@rg@*/
#define PPC_PCFGR1227_POF	(PPC.unPCFGR1227.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1227_NFE	(*(volatile uint_io8_t*)0xB72019B5)  /*@bfbba@*/
#define PPC_PCFGR1227_ODR	(PPC.unPCFGR1227.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1227_PDE	(*(volatile uint_io8_t*)0xB72019B8)  /*@bfbba@*/
#define PPC_PCFGR1227_PUE	(*(volatile uint_io8_t*)0xB72019B9)  /*@bfbba@*/
#define PPC_PCFGR1227_PIL	(PPC.unPCFGR1227.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1227_PIE	(*(volatile uint_io8_t*)0xB72019BC)  /*@bfbba@*/
#define PPC_PCFGR1227_PID	(*(volatile uint_io8_t*)0xB72019BD)  /*@bfbba@*/
#define PPC_PCFGR1227_POD	(*(volatile uint_io8_t*)0xB72019BE)  /*@bfbba@*/
#define PPC_PCFGR1227_POE	(*(volatile uint_io8_t*)0xB72019BF)  /*@bfbba@*/

#define PPC_PCFGR1228	(PPC.unPCFGR1228.u16Register)  /*@rg@*/
#define PPC_PCFGR1228_POF	(PPC.unPCFGR1228.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1228_NFE	(*(volatile uint_io8_t*)0xB72019C5)  /*@bfbba@*/
#define PPC_PCFGR1228_ODR	(PPC.unPCFGR1228.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1228_PDE	(*(volatile uint_io8_t*)0xB72019C8)  /*@bfbba@*/
#define PPC_PCFGR1228_PUE	(*(volatile uint_io8_t*)0xB72019C9)  /*@bfbba@*/
#define PPC_PCFGR1228_PIL	(PPC.unPCFGR1228.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1228_PIE	(*(volatile uint_io8_t*)0xB72019CC)  /*@bfbba@*/
#define PPC_PCFGR1228_PID	(*(volatile uint_io8_t*)0xB72019CD)  /*@bfbba@*/
#define PPC_PCFGR1228_POD	(*(volatile uint_io8_t*)0xB72019CE)  /*@bfbba@*/
#define PPC_PCFGR1228_POE	(*(volatile uint_io8_t*)0xB72019CF)  /*@bfbba@*/

#define PPC_PCFGR1229	(PPC.unPCFGR1229.u16Register)  /*@rg@*/
#define PPC_PCFGR1229_POF	(PPC.unPCFGR1229.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1229_NFE	(*(volatile uint_io8_t*)0xB72019D5)  /*@bfbba@*/
#define PPC_PCFGR1229_ODR	(PPC.unPCFGR1229.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1229_PDE	(*(volatile uint_io8_t*)0xB72019D8)  /*@bfbba@*/
#define PPC_PCFGR1229_PUE	(*(volatile uint_io8_t*)0xB72019D9)  /*@bfbba@*/
#define PPC_PCFGR1229_PIL	(PPC.unPCFGR1229.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1229_PIE	(*(volatile uint_io8_t*)0xB72019DC)  /*@bfbba@*/
#define PPC_PCFGR1229_PID	(*(volatile uint_io8_t*)0xB72019DD)  /*@bfbba@*/
#define PPC_PCFGR1229_POD	(*(volatile uint_io8_t*)0xB72019DE)  /*@bfbba@*/
#define PPC_PCFGR1229_POE	(*(volatile uint_io8_t*)0xB72019DF)  /*@bfbba@*/

#define PPC_PCFGR1230	(PPC.unPCFGR1230.u16Register)  /*@rg@*/
#define PPC_PCFGR1230_POF	(PPC.unPCFGR1230.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1230_NFE	(*(volatile uint_io8_t*)0xB72019E5)  /*@bfbba@*/
#define PPC_PCFGR1230_ODR	(PPC.unPCFGR1230.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1230_PDE	(*(volatile uint_io8_t*)0xB72019E8)  /*@bfbba@*/
#define PPC_PCFGR1230_PUE	(*(volatile uint_io8_t*)0xB72019E9)  /*@bfbba@*/
#define PPC_PCFGR1230_PIL	(PPC.unPCFGR1230.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1230_PIE	(*(volatile uint_io8_t*)0xB72019EC)  /*@bfbba@*/
#define PPC_PCFGR1230_PID	(*(volatile uint_io8_t*)0xB72019ED)  /*@bfbba@*/
#define PPC_PCFGR1230_POD	(*(volatile uint_io8_t*)0xB72019EE)  /*@bfbba@*/
#define PPC_PCFGR1230_POE	(*(volatile uint_io8_t*)0xB72019EF)  /*@bfbba@*/

#define PPC_PCFGR1231	(PPC.unPCFGR1231.u16Register)  /*@rg@*/
#define PPC_PCFGR1231_POF	(PPC.unPCFGR1231.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1231_NFE	(*(volatile uint_io8_t*)0xB72019F5)  /*@bfbba@*/
#define PPC_PCFGR1231_ODR	(PPC.unPCFGR1231.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1231_PDE	(*(volatile uint_io8_t*)0xB72019F8)  /*@bfbba@*/
#define PPC_PCFGR1231_PUE	(*(volatile uint_io8_t*)0xB72019F9)  /*@bfbba@*/
#define PPC_PCFGR1231_PIL	(PPC.unPCFGR1231.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1231_PIE	(*(volatile uint_io8_t*)0xB72019FC)  /*@bfbba@*/
#define PPC_PCFGR1231_PID	(*(volatile uint_io8_t*)0xB72019FD)  /*@bfbba@*/
#define PPC_PCFGR1231_POD	(*(volatile uint_io8_t*)0xB72019FE)  /*@bfbba@*/
#define PPC_PCFGR1231_POE	(*(volatile uint_io8_t*)0xB72019FF)  /*@bfbba@*/

#define PPC_PCFGR1300	(PPC.unPCFGR1300.u16Register)  /*@rg@*/
#define PPC_PCFGR1300_POF	(PPC.unPCFGR1300.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1300_NFE	(*(volatile uint_io8_t*)0xB7201A05)  /*@bfbba@*/
#define PPC_PCFGR1300_ODR	(PPC.unPCFGR1300.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1300_PDE	(*(volatile uint_io8_t*)0xB7201A08)  /*@bfbba@*/
#define PPC_PCFGR1300_PUE	(*(volatile uint_io8_t*)0xB7201A09)  /*@bfbba@*/
#define PPC_PCFGR1300_PIL	(PPC.unPCFGR1300.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1300_PIE	(*(volatile uint_io8_t*)0xB7201A0C)  /*@bfbba@*/
#define PPC_PCFGR1300_PID	(*(volatile uint_io8_t*)0xB7201A0D)  /*@bfbba@*/
#define PPC_PCFGR1300_POD	(*(volatile uint_io8_t*)0xB7201A0E)  /*@bfbba@*/
#define PPC_PCFGR1300_POE	(*(volatile uint_io8_t*)0xB7201A0F)  /*@bfbba@*/

#define PPC_PCFGR1301	(PPC.unPCFGR1301.u16Register)  /*@rg@*/
#define PPC_PCFGR1301_POF	(PPC.unPCFGR1301.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1301_NFE	(*(volatile uint_io8_t*)0xB7201A15)  /*@bfbba@*/
#define PPC_PCFGR1301_ODR	(PPC.unPCFGR1301.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1301_PDE	(*(volatile uint_io8_t*)0xB7201A18)  /*@bfbba@*/
#define PPC_PCFGR1301_PUE	(*(volatile uint_io8_t*)0xB7201A19)  /*@bfbba@*/
#define PPC_PCFGR1301_PIL	(PPC.unPCFGR1301.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1301_PIE	(*(volatile uint_io8_t*)0xB7201A1C)  /*@bfbba@*/
#define PPC_PCFGR1301_PID	(*(volatile uint_io8_t*)0xB7201A1D)  /*@bfbba@*/
#define PPC_PCFGR1301_POD	(*(volatile uint_io8_t*)0xB7201A1E)  /*@bfbba@*/
#define PPC_PCFGR1301_POE	(*(volatile uint_io8_t*)0xB7201A1F)  /*@bfbba@*/

#define PPC_PCFGR1302	(PPC.unPCFGR1302.u16Register)  /*@rg@*/
#define PPC_PCFGR1302_POF	(PPC.unPCFGR1302.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1302_NFE	(*(volatile uint_io8_t*)0xB7201A25)  /*@bfbba@*/
#define PPC_PCFGR1302_ODR	(PPC.unPCFGR1302.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1302_PDE	(*(volatile uint_io8_t*)0xB7201A28)  /*@bfbba@*/
#define PPC_PCFGR1302_PUE	(*(volatile uint_io8_t*)0xB7201A29)  /*@bfbba@*/
#define PPC_PCFGR1302_PIL	(PPC.unPCFGR1302.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1302_PIE	(*(volatile uint_io8_t*)0xB7201A2C)  /*@bfbba@*/
#define PPC_PCFGR1302_PID	(*(volatile uint_io8_t*)0xB7201A2D)  /*@bfbba@*/
#define PPC_PCFGR1302_POD	(*(volatile uint_io8_t*)0xB7201A2E)  /*@bfbba@*/
#define PPC_PCFGR1302_POE	(*(volatile uint_io8_t*)0xB7201A2F)  /*@bfbba@*/

#define PPC_PCFGR1303	(PPC.unPCFGR1303.u16Register)  /*@rg@*/
#define PPC_PCFGR1303_POF	(PPC.unPCFGR1303.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1303_NFE	(*(volatile uint_io8_t*)0xB7201A35)  /*@bfbba@*/
#define PPC_PCFGR1303_ODR	(PPC.unPCFGR1303.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1303_PDE	(*(volatile uint_io8_t*)0xB7201A38)  /*@bfbba@*/
#define PPC_PCFGR1303_PUE	(*(volatile uint_io8_t*)0xB7201A39)  /*@bfbba@*/
#define PPC_PCFGR1303_PIL	(PPC.unPCFGR1303.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1303_PIE	(*(volatile uint_io8_t*)0xB7201A3C)  /*@bfbba@*/
#define PPC_PCFGR1303_PID	(*(volatile uint_io8_t*)0xB7201A3D)  /*@bfbba@*/
#define PPC_PCFGR1303_POD	(*(volatile uint_io8_t*)0xB7201A3E)  /*@bfbba@*/
#define PPC_PCFGR1303_POE	(*(volatile uint_io8_t*)0xB7201A3F)  /*@bfbba@*/

#define PPC_PCFGR1304	(PPC.unPCFGR1304.u16Register)  /*@rg@*/
#define PPC_PCFGR1304_POF	(PPC.unPCFGR1304.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1304_NFE	(*(volatile uint_io8_t*)0xB7201A45)  /*@bfbba@*/
#define PPC_PCFGR1304_ODR	(PPC.unPCFGR1304.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1304_PDE	(*(volatile uint_io8_t*)0xB7201A48)  /*@bfbba@*/
#define PPC_PCFGR1304_PUE	(*(volatile uint_io8_t*)0xB7201A49)  /*@bfbba@*/
#define PPC_PCFGR1304_PIL	(PPC.unPCFGR1304.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1304_PIE	(*(volatile uint_io8_t*)0xB7201A4C)  /*@bfbba@*/
#define PPC_PCFGR1304_PID	(*(volatile uint_io8_t*)0xB7201A4D)  /*@bfbba@*/
#define PPC_PCFGR1304_POD	(*(volatile uint_io8_t*)0xB7201A4E)  /*@bfbba@*/
#define PPC_PCFGR1304_POE	(*(volatile uint_io8_t*)0xB7201A4F)  /*@bfbba@*/

#define PPC_PCFGR1305	(PPC.unPCFGR1305.u16Register)  /*@rg@*/
#define PPC_PCFGR1305_POF	(PPC.unPCFGR1305.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1305_NFE	(*(volatile uint_io8_t*)0xB7201A55)  /*@bfbba@*/
#define PPC_PCFGR1305_ODR	(PPC.unPCFGR1305.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1305_PDE	(*(volatile uint_io8_t*)0xB7201A58)  /*@bfbba@*/
#define PPC_PCFGR1305_PUE	(*(volatile uint_io8_t*)0xB7201A59)  /*@bfbba@*/
#define PPC_PCFGR1305_PIL	(PPC.unPCFGR1305.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1305_PIE	(*(volatile uint_io8_t*)0xB7201A5C)  /*@bfbba@*/
#define PPC_PCFGR1305_PID	(*(volatile uint_io8_t*)0xB7201A5D)  /*@bfbba@*/
#define PPC_PCFGR1305_POD	(*(volatile uint_io8_t*)0xB7201A5E)  /*@bfbba@*/
#define PPC_PCFGR1305_POE	(*(volatile uint_io8_t*)0xB7201A5F)  /*@bfbba@*/

#define PPC_PCFGR1306	(PPC.unPCFGR1306.u16Register)  /*@rg@*/
#define PPC_PCFGR1306_POF	(PPC.unPCFGR1306.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1306_NFE	(*(volatile uint_io8_t*)0xB7201A65)  /*@bfbba@*/
#define PPC_PCFGR1306_ODR	(PPC.unPCFGR1306.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1306_PDE	(*(volatile uint_io8_t*)0xB7201A68)  /*@bfbba@*/
#define PPC_PCFGR1306_PUE	(*(volatile uint_io8_t*)0xB7201A69)  /*@bfbba@*/
#define PPC_PCFGR1306_PIL	(PPC.unPCFGR1306.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1306_PIE	(*(volatile uint_io8_t*)0xB7201A6C)  /*@bfbba@*/
#define PPC_PCFGR1306_PID	(*(volatile uint_io8_t*)0xB7201A6D)  /*@bfbba@*/
#define PPC_PCFGR1306_POD	(*(volatile uint_io8_t*)0xB7201A6E)  /*@bfbba@*/
#define PPC_PCFGR1306_POE	(*(volatile uint_io8_t*)0xB7201A6F)  /*@bfbba@*/

#define PPC_PCFGR1307	(PPC.unPCFGR1307.u16Register)  /*@rg@*/
#define PPC_PCFGR1307_POF	(PPC.unPCFGR1307.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1307_NFE	(*(volatile uint_io8_t*)0xB7201A75)  /*@bfbba@*/
#define PPC_PCFGR1307_ODR	(PPC.unPCFGR1307.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1307_PDE	(*(volatile uint_io8_t*)0xB7201A78)  /*@bfbba@*/
#define PPC_PCFGR1307_PUE	(*(volatile uint_io8_t*)0xB7201A79)  /*@bfbba@*/
#define PPC_PCFGR1307_PIL	(PPC.unPCFGR1307.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1307_PIE	(*(volatile uint_io8_t*)0xB7201A7C)  /*@bfbba@*/
#define PPC_PCFGR1307_PID	(*(volatile uint_io8_t*)0xB7201A7D)  /*@bfbba@*/
#define PPC_PCFGR1307_POD	(*(volatile uint_io8_t*)0xB7201A7E)  /*@bfbba@*/
#define PPC_PCFGR1307_POE	(*(volatile uint_io8_t*)0xB7201A7F)  /*@bfbba@*/

#define PPC_PCFGR1308	(PPC.unPCFGR1308.u16Register)  /*@rg@*/
#define PPC_PCFGR1308_POF	(PPC.unPCFGR1308.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1308_NFE	(*(volatile uint_io8_t*)0xB7201A85)  /*@bfbba@*/
#define PPC_PCFGR1308_ODR	(PPC.unPCFGR1308.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1308_PDE	(*(volatile uint_io8_t*)0xB7201A88)  /*@bfbba@*/
#define PPC_PCFGR1308_PUE	(*(volatile uint_io8_t*)0xB7201A89)  /*@bfbba@*/
#define PPC_PCFGR1308_PIL	(PPC.unPCFGR1308.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1308_PIE	(*(volatile uint_io8_t*)0xB7201A8C)  /*@bfbba@*/
#define PPC_PCFGR1308_PID	(*(volatile uint_io8_t*)0xB7201A8D)  /*@bfbba@*/
#define PPC_PCFGR1308_POD	(*(volatile uint_io8_t*)0xB7201A8E)  /*@bfbba@*/
#define PPC_PCFGR1308_POE	(*(volatile uint_io8_t*)0xB7201A8F)  /*@bfbba@*/

#define PPC_PCFGR1309	(PPC.unPCFGR1309.u16Register)  /*@rg@*/
#define PPC_PCFGR1309_POF	(PPC.unPCFGR1309.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1309_NFE	(*(volatile uint_io8_t*)0xB7201A95)  /*@bfbba@*/
#define PPC_PCFGR1309_ODR	(PPC.unPCFGR1309.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1309_PDE	(*(volatile uint_io8_t*)0xB7201A98)  /*@bfbba@*/
#define PPC_PCFGR1309_PUE	(*(volatile uint_io8_t*)0xB7201A99)  /*@bfbba@*/
#define PPC_PCFGR1309_PIL	(PPC.unPCFGR1309.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1309_PIE	(*(volatile uint_io8_t*)0xB7201A9C)  /*@bfbba@*/
#define PPC_PCFGR1309_PID	(*(volatile uint_io8_t*)0xB7201A9D)  /*@bfbba@*/
#define PPC_PCFGR1309_POD	(*(volatile uint_io8_t*)0xB7201A9E)  /*@bfbba@*/
#define PPC_PCFGR1309_POE	(*(volatile uint_io8_t*)0xB7201A9F)  /*@bfbba@*/

#define PPC_PCFGR1310	(PPC.unPCFGR1310.u16Register)  /*@rg@*/
#define PPC_PCFGR1310_POF	(PPC.unPCFGR1310.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1310_NFE	(*(volatile uint_io8_t*)0xB7201AA5)  /*@bfbba@*/
#define PPC_PCFGR1310_ODR	(PPC.unPCFGR1310.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1310_PDE	(*(volatile uint_io8_t*)0xB7201AA8)  /*@bfbba@*/
#define PPC_PCFGR1310_PUE	(*(volatile uint_io8_t*)0xB7201AA9)  /*@bfbba@*/
#define PPC_PCFGR1310_PIL	(PPC.unPCFGR1310.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1310_PIE	(*(volatile uint_io8_t*)0xB7201AAC)  /*@bfbba@*/
#define PPC_PCFGR1310_PID	(*(volatile uint_io8_t*)0xB7201AAD)  /*@bfbba@*/
#define PPC_PCFGR1310_POD	(*(volatile uint_io8_t*)0xB7201AAE)  /*@bfbba@*/
#define PPC_PCFGR1310_POE	(*(volatile uint_io8_t*)0xB7201AAF)  /*@bfbba@*/

#define PPC_PCFGR1311	(PPC.unPCFGR1311.u16Register)  /*@rg@*/
#define PPC_PCFGR1311_POF	(PPC.unPCFGR1311.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1311_NFE	(*(volatile uint_io8_t*)0xB7201AB5)  /*@bfbba@*/
#define PPC_PCFGR1311_ODR	(PPC.unPCFGR1311.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1311_PDE	(*(volatile uint_io8_t*)0xB7201AB8)  /*@bfbba@*/
#define PPC_PCFGR1311_PUE	(*(volatile uint_io8_t*)0xB7201AB9)  /*@bfbba@*/
#define PPC_PCFGR1311_PIL	(PPC.unPCFGR1311.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1311_PIE	(*(volatile uint_io8_t*)0xB7201ABC)  /*@bfbba@*/
#define PPC_PCFGR1311_PID	(*(volatile uint_io8_t*)0xB7201ABD)  /*@bfbba@*/
#define PPC_PCFGR1311_POD	(*(volatile uint_io8_t*)0xB7201ABE)  /*@bfbba@*/
#define PPC_PCFGR1311_POE	(*(volatile uint_io8_t*)0xB7201ABF)  /*@bfbba@*/

#define PPC_PCFGR1312	(PPC.unPCFGR1312.u16Register)  /*@rg@*/
#define PPC_PCFGR1312_POF	(PPC.unPCFGR1312.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1312_NFE	(*(volatile uint_io8_t*)0xB7201AC5)  /*@bfbba@*/
#define PPC_PCFGR1312_ODR	(PPC.unPCFGR1312.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1312_PDE	(*(volatile uint_io8_t*)0xB7201AC8)  /*@bfbba@*/
#define PPC_PCFGR1312_PUE	(*(volatile uint_io8_t*)0xB7201AC9)  /*@bfbba@*/
#define PPC_PCFGR1312_PIL	(PPC.unPCFGR1312.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1312_PIE	(*(volatile uint_io8_t*)0xB7201ACC)  /*@bfbba@*/
#define PPC_PCFGR1312_PID	(*(volatile uint_io8_t*)0xB7201ACD)  /*@bfbba@*/
#define PPC_PCFGR1312_POD	(*(volatile uint_io8_t*)0xB7201ACE)  /*@bfbba@*/
#define PPC_PCFGR1312_POE	(*(volatile uint_io8_t*)0xB7201ACF)  /*@bfbba@*/

#define PPC_PCFGR1313	(PPC.unPCFGR1313.u16Register)  /*@rg@*/
#define PPC_PCFGR1313_POF	(PPC.unPCFGR1313.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1313_NFE	(*(volatile uint_io8_t*)0xB7201AD5)  /*@bfbba@*/
#define PPC_PCFGR1313_ODR	(PPC.unPCFGR1313.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1313_PDE	(*(volatile uint_io8_t*)0xB7201AD8)  /*@bfbba@*/
#define PPC_PCFGR1313_PUE	(*(volatile uint_io8_t*)0xB7201AD9)  /*@bfbba@*/
#define PPC_PCFGR1313_PIL	(PPC.unPCFGR1313.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1313_PIE	(*(volatile uint_io8_t*)0xB7201ADC)  /*@bfbba@*/
#define PPC_PCFGR1313_PID	(*(volatile uint_io8_t*)0xB7201ADD)  /*@bfbba@*/
#define PPC_PCFGR1313_POD	(*(volatile uint_io8_t*)0xB7201ADE)  /*@bfbba@*/
#define PPC_PCFGR1313_POE	(*(volatile uint_io8_t*)0xB7201ADF)  /*@bfbba@*/

#define PPC_PCFGR1314	(PPC.unPCFGR1314.u16Register)  /*@rg@*/
#define PPC_PCFGR1314_POF	(PPC.unPCFGR1314.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1314_NFE	(*(volatile uint_io8_t*)0xB7201AE5)  /*@bfbba@*/
#define PPC_PCFGR1314_ODR	(PPC.unPCFGR1314.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1314_PDE	(*(volatile uint_io8_t*)0xB7201AE8)  /*@bfbba@*/
#define PPC_PCFGR1314_PUE	(*(volatile uint_io8_t*)0xB7201AE9)  /*@bfbba@*/
#define PPC_PCFGR1314_PIL	(PPC.unPCFGR1314.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1314_PIE	(*(volatile uint_io8_t*)0xB7201AEC)  /*@bfbba@*/
#define PPC_PCFGR1314_PID	(*(volatile uint_io8_t*)0xB7201AED)  /*@bfbba@*/
#define PPC_PCFGR1314_POD	(*(volatile uint_io8_t*)0xB7201AEE)  /*@bfbba@*/
#define PPC_PCFGR1314_POE	(*(volatile uint_io8_t*)0xB7201AEF)  /*@bfbba@*/

#define PPC_PCFGR1315	(PPC.unPCFGR1315.u16Register)  /*@rg@*/
#define PPC_PCFGR1315_POF	(PPC.unPCFGR1315.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1315_NFE	(*(volatile uint_io8_t*)0xB7201AF5)  /*@bfbba@*/
#define PPC_PCFGR1315_ODR	(PPC.unPCFGR1315.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1315_PDE	(*(volatile uint_io8_t*)0xB7201AF8)  /*@bfbba@*/
#define PPC_PCFGR1315_PUE	(*(volatile uint_io8_t*)0xB7201AF9)  /*@bfbba@*/
#define PPC_PCFGR1315_PIL	(PPC.unPCFGR1315.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1315_PIE	(*(volatile uint_io8_t*)0xB7201AFC)  /*@bfbba@*/
#define PPC_PCFGR1315_PID	(*(volatile uint_io8_t*)0xB7201AFD)  /*@bfbba@*/
#define PPC_PCFGR1315_POD	(*(volatile uint_io8_t*)0xB7201AFE)  /*@bfbba@*/
#define PPC_PCFGR1315_POE	(*(volatile uint_io8_t*)0xB7201AFF)  /*@bfbba@*/

#define PPC_PCFGR1316	(PPC.unPCFGR1316.u16Register)  /*@rg@*/
#define PPC_PCFGR1316_POF	(PPC.unPCFGR1316.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1316_NFE	(*(volatile uint_io8_t*)0xB7201B05)  /*@bfbba@*/
#define PPC_PCFGR1316_ODR	(PPC.unPCFGR1316.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1316_PDE	(*(volatile uint_io8_t*)0xB7201B08)  /*@bfbba@*/
#define PPC_PCFGR1316_PUE	(*(volatile uint_io8_t*)0xB7201B09)  /*@bfbba@*/
#define PPC_PCFGR1316_PIL	(PPC.unPCFGR1316.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1316_PIE	(*(volatile uint_io8_t*)0xB7201B0C)  /*@bfbba@*/
#define PPC_PCFGR1316_PID	(*(volatile uint_io8_t*)0xB7201B0D)  /*@bfbba@*/
#define PPC_PCFGR1316_POD	(*(volatile uint_io8_t*)0xB7201B0E)  /*@bfbba@*/
#define PPC_PCFGR1316_POE	(*(volatile uint_io8_t*)0xB7201B0F)  /*@bfbba@*/

#define PPC_PCFGR1317	(PPC.unPCFGR1317.u16Register)  /*@rg@*/
#define PPC_PCFGR1317_POF	(PPC.unPCFGR1317.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1317_NFE	(*(volatile uint_io8_t*)0xB7201B15)  /*@bfbba@*/
#define PPC_PCFGR1317_ODR	(PPC.unPCFGR1317.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1317_PDE	(*(volatile uint_io8_t*)0xB7201B18)  /*@bfbba@*/
#define PPC_PCFGR1317_PUE	(*(volatile uint_io8_t*)0xB7201B19)  /*@bfbba@*/
#define PPC_PCFGR1317_PIL	(PPC.unPCFGR1317.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1317_PIE	(*(volatile uint_io8_t*)0xB7201B1C)  /*@bfbba@*/
#define PPC_PCFGR1317_PID	(*(volatile uint_io8_t*)0xB7201B1D)  /*@bfbba@*/
#define PPC_PCFGR1317_POD	(*(volatile uint_io8_t*)0xB7201B1E)  /*@bfbba@*/
#define PPC_PCFGR1317_POE	(*(volatile uint_io8_t*)0xB7201B1F)  /*@bfbba@*/

#define PPC_PCFGR1318	(PPC.unPCFGR1318.u16Register)  /*@rg@*/
#define PPC_PCFGR1318_POF	(PPC.unPCFGR1318.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1318_NFE	(*(volatile uint_io8_t*)0xB7201B25)  /*@bfbba@*/
#define PPC_PCFGR1318_ODR	(PPC.unPCFGR1318.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1318_PDE	(*(volatile uint_io8_t*)0xB7201B28)  /*@bfbba@*/
#define PPC_PCFGR1318_PUE	(*(volatile uint_io8_t*)0xB7201B29)  /*@bfbba@*/
#define PPC_PCFGR1318_PIL	(PPC.unPCFGR1318.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1318_PIE	(*(volatile uint_io8_t*)0xB7201B2C)  /*@bfbba@*/
#define PPC_PCFGR1318_PID	(*(volatile uint_io8_t*)0xB7201B2D)  /*@bfbba@*/
#define PPC_PCFGR1318_POD	(*(volatile uint_io8_t*)0xB7201B2E)  /*@bfbba@*/
#define PPC_PCFGR1318_POE	(*(volatile uint_io8_t*)0xB7201B2F)  /*@bfbba@*/

#define PPC_PCFGR1319	(PPC.unPCFGR1319.u16Register)  /*@rg@*/
#define PPC_PCFGR1319_POF	(PPC.unPCFGR1319.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1319_NFE	(*(volatile uint_io8_t*)0xB7201B35)  /*@bfbba@*/
#define PPC_PCFGR1319_ODR	(PPC.unPCFGR1319.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1319_PDE	(*(volatile uint_io8_t*)0xB7201B38)  /*@bfbba@*/
#define PPC_PCFGR1319_PUE	(*(volatile uint_io8_t*)0xB7201B39)  /*@bfbba@*/
#define PPC_PCFGR1319_PIL	(PPC.unPCFGR1319.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1319_PIE	(*(volatile uint_io8_t*)0xB7201B3C)  /*@bfbba@*/
#define PPC_PCFGR1319_PID	(*(volatile uint_io8_t*)0xB7201B3D)  /*@bfbba@*/
#define PPC_PCFGR1319_POD	(*(volatile uint_io8_t*)0xB7201B3E)  /*@bfbba@*/
#define PPC_PCFGR1319_POE	(*(volatile uint_io8_t*)0xB7201B3F)  /*@bfbba@*/

#define PPC_PCFGR1320	(PPC.unPCFGR1320.u16Register)  /*@rg@*/
#define PPC_PCFGR1320_POF	(PPC.unPCFGR1320.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1320_NFE	(*(volatile uint_io8_t*)0xB7201B45)  /*@bfbba@*/
#define PPC_PCFGR1320_ODR	(PPC.unPCFGR1320.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1320_PDE	(*(volatile uint_io8_t*)0xB7201B48)  /*@bfbba@*/
#define PPC_PCFGR1320_PUE	(*(volatile uint_io8_t*)0xB7201B49)  /*@bfbba@*/
#define PPC_PCFGR1320_PIL	(PPC.unPCFGR1320.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1320_PIE	(*(volatile uint_io8_t*)0xB7201B4C)  /*@bfbba@*/
#define PPC_PCFGR1320_PID	(*(volatile uint_io8_t*)0xB7201B4D)  /*@bfbba@*/
#define PPC_PCFGR1320_POD	(*(volatile uint_io8_t*)0xB7201B4E)  /*@bfbba@*/
#define PPC_PCFGR1320_POE	(*(volatile uint_io8_t*)0xB7201B4F)  /*@bfbba@*/

#define PPC_PCFGR1321	(PPC.unPCFGR1321.u16Register)  /*@rg@*/
#define PPC_PCFGR1321_POF	(PPC.unPCFGR1321.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1321_NFE	(*(volatile uint_io8_t*)0xB7201B55)  /*@bfbba@*/
#define PPC_PCFGR1321_ODR	(PPC.unPCFGR1321.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1321_PDE	(*(volatile uint_io8_t*)0xB7201B58)  /*@bfbba@*/
#define PPC_PCFGR1321_PUE	(*(volatile uint_io8_t*)0xB7201B59)  /*@bfbba@*/
#define PPC_PCFGR1321_PIL	(PPC.unPCFGR1321.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1321_PIE	(*(volatile uint_io8_t*)0xB7201B5C)  /*@bfbba@*/
#define PPC_PCFGR1321_PID	(*(volatile uint_io8_t*)0xB7201B5D)  /*@bfbba@*/
#define PPC_PCFGR1321_POD	(*(volatile uint_io8_t*)0xB7201B5E)  /*@bfbba@*/
#define PPC_PCFGR1321_POE	(*(volatile uint_io8_t*)0xB7201B5F)  /*@bfbba@*/

#define PPC_PCFGR1322	(PPC.unPCFGR1322.u16Register)  /*@rg@*/
#define PPC_PCFGR1322_POF	(PPC.unPCFGR1322.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1322_NFE	(*(volatile uint_io8_t*)0xB7201B65)  /*@bfbba@*/
#define PPC_PCFGR1322_ODR	(PPC.unPCFGR1322.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1322_PDE	(*(volatile uint_io8_t*)0xB7201B68)  /*@bfbba@*/
#define PPC_PCFGR1322_PUE	(*(volatile uint_io8_t*)0xB7201B69)  /*@bfbba@*/
#define PPC_PCFGR1322_PIL	(PPC.unPCFGR1322.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1322_PIE	(*(volatile uint_io8_t*)0xB7201B6C)  /*@bfbba@*/
#define PPC_PCFGR1322_PID	(*(volatile uint_io8_t*)0xB7201B6D)  /*@bfbba@*/
#define PPC_PCFGR1322_POD	(*(volatile uint_io8_t*)0xB7201B6E)  /*@bfbba@*/
#define PPC_PCFGR1322_POE	(*(volatile uint_io8_t*)0xB7201B6F)  /*@bfbba@*/

#define PPC_PCFGR1323	(PPC.unPCFGR1323.u16Register)  /*@rg@*/
#define PPC_PCFGR1323_POF	(PPC.unPCFGR1323.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1323_NFE	(*(volatile uint_io8_t*)0xB7201B75)  /*@bfbba@*/
#define PPC_PCFGR1323_ODR	(PPC.unPCFGR1323.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1323_PDE	(*(volatile uint_io8_t*)0xB7201B78)  /*@bfbba@*/
#define PPC_PCFGR1323_PUE	(*(volatile uint_io8_t*)0xB7201B79)  /*@bfbba@*/
#define PPC_PCFGR1323_PIL	(PPC.unPCFGR1323.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1323_PIE	(*(volatile uint_io8_t*)0xB7201B7C)  /*@bfbba@*/
#define PPC_PCFGR1323_PID	(*(volatile uint_io8_t*)0xB7201B7D)  /*@bfbba@*/
#define PPC_PCFGR1323_POD	(*(volatile uint_io8_t*)0xB7201B7E)  /*@bfbba@*/
#define PPC_PCFGR1323_POE	(*(volatile uint_io8_t*)0xB7201B7F)  /*@bfbba@*/

#define PPC_PCFGR1324	(PPC.unPCFGR1324.u16Register)  /*@rg@*/
#define PPC_PCFGR1324_POF	(PPC.unPCFGR1324.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1324_NFE	(*(volatile uint_io8_t*)0xB7201B85)  /*@bfbba@*/
#define PPC_PCFGR1324_ODR	(PPC.unPCFGR1324.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1324_PDE	(*(volatile uint_io8_t*)0xB7201B88)  /*@bfbba@*/
#define PPC_PCFGR1324_PUE	(*(volatile uint_io8_t*)0xB7201B89)  /*@bfbba@*/
#define PPC_PCFGR1324_PIL	(PPC.unPCFGR1324.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1324_PIE	(*(volatile uint_io8_t*)0xB7201B8C)  /*@bfbba@*/
#define PPC_PCFGR1324_PID	(*(volatile uint_io8_t*)0xB7201B8D)  /*@bfbba@*/
#define PPC_PCFGR1324_POD	(*(volatile uint_io8_t*)0xB7201B8E)  /*@bfbba@*/
#define PPC_PCFGR1324_POE	(*(volatile uint_io8_t*)0xB7201B8F)  /*@bfbba@*/

#define PPC_PCFGR1325	(PPC.unPCFGR1325.u16Register)  /*@rg@*/
#define PPC_PCFGR1325_POF	(PPC.unPCFGR1325.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1325_NFE	(*(volatile uint_io8_t*)0xB7201B95)  /*@bfbba@*/
#define PPC_PCFGR1325_ODR	(PPC.unPCFGR1325.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1325_PDE	(*(volatile uint_io8_t*)0xB7201B98)  /*@bfbba@*/
#define PPC_PCFGR1325_PUE	(*(volatile uint_io8_t*)0xB7201B99)  /*@bfbba@*/
#define PPC_PCFGR1325_PIL	(PPC.unPCFGR1325.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1325_PIE	(*(volatile uint_io8_t*)0xB7201B9C)  /*@bfbba@*/
#define PPC_PCFGR1325_PID	(*(volatile uint_io8_t*)0xB7201B9D)  /*@bfbba@*/
#define PPC_PCFGR1325_POD	(*(volatile uint_io8_t*)0xB7201B9E)  /*@bfbba@*/
#define PPC_PCFGR1325_POE	(*(volatile uint_io8_t*)0xB7201B9F)  /*@bfbba@*/

#define PPC_PCFGR1326	(PPC.unPCFGR1326.u16Register)  /*@rg@*/
#define PPC_PCFGR1326_POF	(PPC.unPCFGR1326.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1326_NFE	(*(volatile uint_io8_t*)0xB7201BA5)  /*@bfbba@*/
#define PPC_PCFGR1326_ODR	(PPC.unPCFGR1326.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1326_PDE	(*(volatile uint_io8_t*)0xB7201BA8)  /*@bfbba@*/
#define PPC_PCFGR1326_PUE	(*(volatile uint_io8_t*)0xB7201BA9)  /*@bfbba@*/
#define PPC_PCFGR1326_PIL	(PPC.unPCFGR1326.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1326_PIE	(*(volatile uint_io8_t*)0xB7201BAC)  /*@bfbba@*/
#define PPC_PCFGR1326_PID	(*(volatile uint_io8_t*)0xB7201BAD)  /*@bfbba@*/
#define PPC_PCFGR1326_POD	(*(volatile uint_io8_t*)0xB7201BAE)  /*@bfbba@*/
#define PPC_PCFGR1326_POE	(*(volatile uint_io8_t*)0xB7201BAF)  /*@bfbba@*/

#define PPC_PCFGR1327	(PPC.unPCFGR1327.u16Register)  /*@rg@*/
#define PPC_PCFGR1327_POF	(PPC.unPCFGR1327.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1327_NFE	(*(volatile uint_io8_t*)0xB7201BB5)  /*@bfbba@*/
#define PPC_PCFGR1327_ODR	(PPC.unPCFGR1327.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1327_PDE	(*(volatile uint_io8_t*)0xB7201BB8)  /*@bfbba@*/
#define PPC_PCFGR1327_PUE	(*(volatile uint_io8_t*)0xB7201BB9)  /*@bfbba@*/
#define PPC_PCFGR1327_PIL	(PPC.unPCFGR1327.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1327_PIE	(*(volatile uint_io8_t*)0xB7201BBC)  /*@bfbba@*/
#define PPC_PCFGR1327_PID	(*(volatile uint_io8_t*)0xB7201BBD)  /*@bfbba@*/
#define PPC_PCFGR1327_POD	(*(volatile uint_io8_t*)0xB7201BBE)  /*@bfbba@*/
#define PPC_PCFGR1327_POE	(*(volatile uint_io8_t*)0xB7201BBF)  /*@bfbba@*/

#define PPC_PCFGR1328	(PPC.unPCFGR1328.u16Register)  /*@rg@*/
#define PPC_PCFGR1328_POF	(PPC.unPCFGR1328.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1328_NFE	(*(volatile uint_io8_t*)0xB7201BC5)  /*@bfbba@*/
#define PPC_PCFGR1328_ODR	(PPC.unPCFGR1328.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1328_PDE	(*(volatile uint_io8_t*)0xB7201BC8)  /*@bfbba@*/
#define PPC_PCFGR1328_PUE	(*(volatile uint_io8_t*)0xB7201BC9)  /*@bfbba@*/
#define PPC_PCFGR1328_PIL	(PPC.unPCFGR1328.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1328_PIE	(*(volatile uint_io8_t*)0xB7201BCC)  /*@bfbba@*/
#define PPC_PCFGR1328_PID	(*(volatile uint_io8_t*)0xB7201BCD)  /*@bfbba@*/
#define PPC_PCFGR1328_POD	(*(volatile uint_io8_t*)0xB7201BCE)  /*@bfbba@*/
#define PPC_PCFGR1328_POE	(*(volatile uint_io8_t*)0xB7201BCF)  /*@bfbba@*/

#define PPC_PCFGR1329	(PPC.unPCFGR1329.u16Register)  /*@rg@*/
#define PPC_PCFGR1329_POF	(PPC.unPCFGR1329.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1329_NFE	(*(volatile uint_io8_t*)0xB7201BD5)  /*@bfbba@*/
#define PPC_PCFGR1329_ODR	(PPC.unPCFGR1329.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1329_PDE	(*(volatile uint_io8_t*)0xB7201BD8)  /*@bfbba@*/
#define PPC_PCFGR1329_PUE	(*(volatile uint_io8_t*)0xB7201BD9)  /*@bfbba@*/
#define PPC_PCFGR1329_PIL	(PPC.unPCFGR1329.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1329_PIE	(*(volatile uint_io8_t*)0xB7201BDC)  /*@bfbba@*/
#define PPC_PCFGR1329_PID	(*(volatile uint_io8_t*)0xB7201BDD)  /*@bfbba@*/
#define PPC_PCFGR1329_POD	(*(volatile uint_io8_t*)0xB7201BDE)  /*@bfbba@*/
#define PPC_PCFGR1329_POE	(*(volatile uint_io8_t*)0xB7201BDF)  /*@bfbba@*/

#define PPC_PCFGR1330	(PPC.unPCFGR1330.u16Register)  /*@rg@*/
#define PPC_PCFGR1330_POF	(PPC.unPCFGR1330.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1330_NFE	(*(volatile uint_io8_t*)0xB7201BE5)  /*@bfbba@*/
#define PPC_PCFGR1330_ODR	(PPC.unPCFGR1330.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1330_PDE	(*(volatile uint_io8_t*)0xB7201BE8)  /*@bfbba@*/
#define PPC_PCFGR1330_PUE	(*(volatile uint_io8_t*)0xB7201BE9)  /*@bfbba@*/
#define PPC_PCFGR1330_PIL	(PPC.unPCFGR1330.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1330_PIE	(*(volatile uint_io8_t*)0xB7201BEC)  /*@bfbba@*/
#define PPC_PCFGR1330_PID	(*(volatile uint_io8_t*)0xB7201BED)  /*@bfbba@*/
#define PPC_PCFGR1330_POD	(*(volatile uint_io8_t*)0xB7201BEE)  /*@bfbba@*/
#define PPC_PCFGR1330_POE	(*(volatile uint_io8_t*)0xB7201BEF)  /*@bfbba@*/

#define PPC_PCFGR1331	(PPC.unPCFGR1331.u16Register)  /*@rg@*/
#define PPC_PCFGR1331_POF	(PPC.unPCFGR1331.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1331_NFE	(*(volatile uint_io8_t*)0xB7201BF5)  /*@bfbba@*/
#define PPC_PCFGR1331_ODR	(PPC.unPCFGR1331.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1331_PDE	(*(volatile uint_io8_t*)0xB7201BF8)  /*@bfbba@*/
#define PPC_PCFGR1331_PUE	(*(volatile uint_io8_t*)0xB7201BF9)  /*@bfbba@*/
#define PPC_PCFGR1331_PIL	(PPC.unPCFGR1331.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1331_PIE	(*(volatile uint_io8_t*)0xB7201BFC)  /*@bfbba@*/
#define PPC_PCFGR1331_PID	(*(volatile uint_io8_t*)0xB7201BFD)  /*@bfbba@*/
#define PPC_PCFGR1331_POD	(*(volatile uint_io8_t*)0xB7201BFE)  /*@bfbba@*/
#define PPC_PCFGR1331_POE	(*(volatile uint_io8_t*)0xB7201BFF)  /*@bfbba@*/

#define PPC_PCFGR1400	(PPC.unPCFGR1400.u16Register)  /*@rg@*/
#define PPC_PCFGR1400_POF	(PPC.unPCFGR1400.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1400_NFE	(*(volatile uint_io8_t*)0xB7201C05)  /*@bfbba@*/
#define PPC_PCFGR1400_ODR	(PPC.unPCFGR1400.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1400_PDE	(*(volatile uint_io8_t*)0xB7201C08)  /*@bfbba@*/
#define PPC_PCFGR1400_PUE	(*(volatile uint_io8_t*)0xB7201C09)  /*@bfbba@*/
#define PPC_PCFGR1400_PIL	(PPC.unPCFGR1400.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1400_PIE	(*(volatile uint_io8_t*)0xB7201C0C)  /*@bfbba@*/
#define PPC_PCFGR1400_PID	(*(volatile uint_io8_t*)0xB7201C0D)  /*@bfbba@*/
#define PPC_PCFGR1400_POD	(*(volatile uint_io8_t*)0xB7201C0E)  /*@bfbba@*/
#define PPC_PCFGR1400_POE	(*(volatile uint_io8_t*)0xB7201C0F)  /*@bfbba@*/

#define PPC_PCFGR1401	(PPC.unPCFGR1401.u16Register)  /*@rg@*/
#define PPC_PCFGR1401_POF	(PPC.unPCFGR1401.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1401_NFE	(*(volatile uint_io8_t*)0xB7201C15)  /*@bfbba@*/
#define PPC_PCFGR1401_ODR	(PPC.unPCFGR1401.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1401_PDE	(*(volatile uint_io8_t*)0xB7201C18)  /*@bfbba@*/
#define PPC_PCFGR1401_PUE	(*(volatile uint_io8_t*)0xB7201C19)  /*@bfbba@*/
#define PPC_PCFGR1401_PIL	(PPC.unPCFGR1401.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1401_PIE	(*(volatile uint_io8_t*)0xB7201C1C)  /*@bfbba@*/
#define PPC_PCFGR1401_PID	(*(volatile uint_io8_t*)0xB7201C1D)  /*@bfbba@*/
#define PPC_PCFGR1401_POD	(*(volatile uint_io8_t*)0xB7201C1E)  /*@bfbba@*/
#define PPC_PCFGR1401_POE	(*(volatile uint_io8_t*)0xB7201C1F)  /*@bfbba@*/

#define PPC_PCFGR1402	(PPC.unPCFGR1402.u16Register)  /*@rg@*/
#define PPC_PCFGR1402_POF	(PPC.unPCFGR1402.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1402_NFE	(*(volatile uint_io8_t*)0xB7201C25)  /*@bfbba@*/
#define PPC_PCFGR1402_ODR	(PPC.unPCFGR1402.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1402_PDE	(*(volatile uint_io8_t*)0xB7201C28)  /*@bfbba@*/
#define PPC_PCFGR1402_PUE	(*(volatile uint_io8_t*)0xB7201C29)  /*@bfbba@*/
#define PPC_PCFGR1402_PIL	(PPC.unPCFGR1402.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1402_PIE	(*(volatile uint_io8_t*)0xB7201C2C)  /*@bfbba@*/
#define PPC_PCFGR1402_PID	(*(volatile uint_io8_t*)0xB7201C2D)  /*@bfbba@*/
#define PPC_PCFGR1402_POD	(*(volatile uint_io8_t*)0xB7201C2E)  /*@bfbba@*/
#define PPC_PCFGR1402_POE	(*(volatile uint_io8_t*)0xB7201C2F)  /*@bfbba@*/

#define PPC_PCFGR1403	(PPC.unPCFGR1403.u16Register)  /*@rg@*/
#define PPC_PCFGR1403_POF	(PPC.unPCFGR1403.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1403_NFE	(*(volatile uint_io8_t*)0xB7201C35)  /*@bfbba@*/
#define PPC_PCFGR1403_ODR	(PPC.unPCFGR1403.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1403_PDE	(*(volatile uint_io8_t*)0xB7201C38)  /*@bfbba@*/
#define PPC_PCFGR1403_PUE	(*(volatile uint_io8_t*)0xB7201C39)  /*@bfbba@*/
#define PPC_PCFGR1403_PIL	(PPC.unPCFGR1403.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1403_PIE	(*(volatile uint_io8_t*)0xB7201C3C)  /*@bfbba@*/
#define PPC_PCFGR1403_PID	(*(volatile uint_io8_t*)0xB7201C3D)  /*@bfbba@*/
#define PPC_PCFGR1403_POD	(*(volatile uint_io8_t*)0xB7201C3E)  /*@bfbba@*/
#define PPC_PCFGR1403_POE	(*(volatile uint_io8_t*)0xB7201C3F)  /*@bfbba@*/

#define PPC_PCFGR1404	(PPC.unPCFGR1404.u16Register)  /*@rg@*/
#define PPC_PCFGR1404_POF	(PPC.unPCFGR1404.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1404_NFE	(*(volatile uint_io8_t*)0xB7201C45)  /*@bfbba@*/
#define PPC_PCFGR1404_ODR	(PPC.unPCFGR1404.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1404_PDE	(*(volatile uint_io8_t*)0xB7201C48)  /*@bfbba@*/
#define PPC_PCFGR1404_PUE	(*(volatile uint_io8_t*)0xB7201C49)  /*@bfbba@*/
#define PPC_PCFGR1404_PIL	(PPC.unPCFGR1404.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1404_PIE	(*(volatile uint_io8_t*)0xB7201C4C)  /*@bfbba@*/
#define PPC_PCFGR1404_PID	(*(volatile uint_io8_t*)0xB7201C4D)  /*@bfbba@*/
#define PPC_PCFGR1404_POD	(*(volatile uint_io8_t*)0xB7201C4E)  /*@bfbba@*/
#define PPC_PCFGR1404_POE	(*(volatile uint_io8_t*)0xB7201C4F)  /*@bfbba@*/

#define PPC_PCFGR1405	(PPC.unPCFGR1405.u16Register)  /*@rg@*/
#define PPC_PCFGR1405_POF	(PPC.unPCFGR1405.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1405_NFE	(*(volatile uint_io8_t*)0xB7201C55)  /*@bfbba@*/
#define PPC_PCFGR1405_ODR	(PPC.unPCFGR1405.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1405_PDE	(*(volatile uint_io8_t*)0xB7201C58)  /*@bfbba@*/
#define PPC_PCFGR1405_PUE	(*(volatile uint_io8_t*)0xB7201C59)  /*@bfbba@*/
#define PPC_PCFGR1405_PIL	(PPC.unPCFGR1405.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1405_PIE	(*(volatile uint_io8_t*)0xB7201C5C)  /*@bfbba@*/
#define PPC_PCFGR1405_PID	(*(volatile uint_io8_t*)0xB7201C5D)  /*@bfbba@*/
#define PPC_PCFGR1405_POD	(*(volatile uint_io8_t*)0xB7201C5E)  /*@bfbba@*/
#define PPC_PCFGR1405_POE	(*(volatile uint_io8_t*)0xB7201C5F)  /*@bfbba@*/

#define PPC_PCFGR1406	(PPC.unPCFGR1406.u16Register)  /*@rg@*/
#define PPC_PCFGR1406_POF	(PPC.unPCFGR1406.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1406_NFE	(*(volatile uint_io8_t*)0xB7201C65)  /*@bfbba@*/
#define PPC_PCFGR1406_ODR	(PPC.unPCFGR1406.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1406_PDE	(*(volatile uint_io8_t*)0xB7201C68)  /*@bfbba@*/
#define PPC_PCFGR1406_PUE	(*(volatile uint_io8_t*)0xB7201C69)  /*@bfbba@*/
#define PPC_PCFGR1406_PIL	(PPC.unPCFGR1406.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1406_PIE	(*(volatile uint_io8_t*)0xB7201C6C)  /*@bfbba@*/
#define PPC_PCFGR1406_PID	(*(volatile uint_io8_t*)0xB7201C6D)  /*@bfbba@*/
#define PPC_PCFGR1406_POD	(*(volatile uint_io8_t*)0xB7201C6E)  /*@bfbba@*/
#define PPC_PCFGR1406_POE	(*(volatile uint_io8_t*)0xB7201C6F)  /*@bfbba@*/

#define PPC_PCFGR1407	(PPC.unPCFGR1407.u16Register)  /*@rg@*/
#define PPC_PCFGR1407_POF	(PPC.unPCFGR1407.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1407_NFE	(*(volatile uint_io8_t*)0xB7201C75)  /*@bfbba@*/
#define PPC_PCFGR1407_ODR	(PPC.unPCFGR1407.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1407_PDE	(*(volatile uint_io8_t*)0xB7201C78)  /*@bfbba@*/
#define PPC_PCFGR1407_PUE	(*(volatile uint_io8_t*)0xB7201C79)  /*@bfbba@*/
#define PPC_PCFGR1407_PIL	(PPC.unPCFGR1407.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1407_PIE	(*(volatile uint_io8_t*)0xB7201C7C)  /*@bfbba@*/
#define PPC_PCFGR1407_PID	(*(volatile uint_io8_t*)0xB7201C7D)  /*@bfbba@*/
#define PPC_PCFGR1407_POD	(*(volatile uint_io8_t*)0xB7201C7E)  /*@bfbba@*/
#define PPC_PCFGR1407_POE	(*(volatile uint_io8_t*)0xB7201C7F)  /*@bfbba@*/

#define PPC_PCFGR1408	(PPC.unPCFGR1408.u16Register)  /*@rg@*/
#define PPC_PCFGR1408_POF	(PPC.unPCFGR1408.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1408_NFE	(*(volatile uint_io8_t*)0xB7201C85)  /*@bfbba@*/
#define PPC_PCFGR1408_ODR	(PPC.unPCFGR1408.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1408_PDE	(*(volatile uint_io8_t*)0xB7201C88)  /*@bfbba@*/
#define PPC_PCFGR1408_PUE	(*(volatile uint_io8_t*)0xB7201C89)  /*@bfbba@*/
#define PPC_PCFGR1408_PIL	(PPC.unPCFGR1408.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1408_PIE	(*(volatile uint_io8_t*)0xB7201C8C)  /*@bfbba@*/
#define PPC_PCFGR1408_PID	(*(volatile uint_io8_t*)0xB7201C8D)  /*@bfbba@*/
#define PPC_PCFGR1408_POD	(*(volatile uint_io8_t*)0xB7201C8E)  /*@bfbba@*/
#define PPC_PCFGR1408_POE	(*(volatile uint_io8_t*)0xB7201C8F)  /*@bfbba@*/

#define PPC_PCFGR1409	(PPC.unPCFGR1409.u16Register)  /*@rg@*/
#define PPC_PCFGR1409_POF	(PPC.unPCFGR1409.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1409_NFE	(*(volatile uint_io8_t*)0xB7201C95)  /*@bfbba@*/
#define PPC_PCFGR1409_ODR	(PPC.unPCFGR1409.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1409_PDE	(*(volatile uint_io8_t*)0xB7201C98)  /*@bfbba@*/
#define PPC_PCFGR1409_PUE	(*(volatile uint_io8_t*)0xB7201C99)  /*@bfbba@*/
#define PPC_PCFGR1409_PIL	(PPC.unPCFGR1409.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1409_PIE	(*(volatile uint_io8_t*)0xB7201C9C)  /*@bfbba@*/
#define PPC_PCFGR1409_PID	(*(volatile uint_io8_t*)0xB7201C9D)  /*@bfbba@*/
#define PPC_PCFGR1409_POD	(*(volatile uint_io8_t*)0xB7201C9E)  /*@bfbba@*/
#define PPC_PCFGR1409_POE	(*(volatile uint_io8_t*)0xB7201C9F)  /*@bfbba@*/

#define PPC_PCFGR1410	(PPC.unPCFGR1410.u16Register)  /*@rg@*/
#define PPC_PCFGR1410_POF	(PPC.unPCFGR1410.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1410_NFE	(*(volatile uint_io8_t*)0xB7201CA5)  /*@bfbba@*/
#define PPC_PCFGR1410_ODR	(PPC.unPCFGR1410.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1410_PDE	(*(volatile uint_io8_t*)0xB7201CA8)  /*@bfbba@*/
#define PPC_PCFGR1410_PUE	(*(volatile uint_io8_t*)0xB7201CA9)  /*@bfbba@*/
#define PPC_PCFGR1410_PIL	(PPC.unPCFGR1410.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1410_PIE	(*(volatile uint_io8_t*)0xB7201CAC)  /*@bfbba@*/
#define PPC_PCFGR1410_PID	(*(volatile uint_io8_t*)0xB7201CAD)  /*@bfbba@*/
#define PPC_PCFGR1410_POD	(*(volatile uint_io8_t*)0xB7201CAE)  /*@bfbba@*/
#define PPC_PCFGR1410_POE	(*(volatile uint_io8_t*)0xB7201CAF)  /*@bfbba@*/

#define PPC_PCFGR1411	(PPC.unPCFGR1411.u16Register)  /*@rg@*/
#define PPC_PCFGR1411_POF	(PPC.unPCFGR1411.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1411_NFE	(*(volatile uint_io8_t*)0xB7201CB5)  /*@bfbba@*/
#define PPC_PCFGR1411_ODR	(PPC.unPCFGR1411.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1411_PDE	(*(volatile uint_io8_t*)0xB7201CB8)  /*@bfbba@*/
#define PPC_PCFGR1411_PUE	(*(volatile uint_io8_t*)0xB7201CB9)  /*@bfbba@*/
#define PPC_PCFGR1411_PIL	(PPC.unPCFGR1411.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1411_PIE	(*(volatile uint_io8_t*)0xB7201CBC)  /*@bfbba@*/
#define PPC_PCFGR1411_PID	(*(volatile uint_io8_t*)0xB7201CBD)  /*@bfbba@*/
#define PPC_PCFGR1411_POD	(*(volatile uint_io8_t*)0xB7201CBE)  /*@bfbba@*/
#define PPC_PCFGR1411_POE	(*(volatile uint_io8_t*)0xB7201CBF)  /*@bfbba@*/

#define PPC_PCFGR1412	(PPC.unPCFGR1412.u16Register)  /*@rg@*/
#define PPC_PCFGR1412_POF	(PPC.unPCFGR1412.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1412_NFE	(*(volatile uint_io8_t*)0xB7201CC5)  /*@bfbba@*/
#define PPC_PCFGR1412_ODR	(PPC.unPCFGR1412.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1412_PDE	(*(volatile uint_io8_t*)0xB7201CC8)  /*@bfbba@*/
#define PPC_PCFGR1412_PUE	(*(volatile uint_io8_t*)0xB7201CC9)  /*@bfbba@*/
#define PPC_PCFGR1412_PIL	(PPC.unPCFGR1412.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1412_PIE	(*(volatile uint_io8_t*)0xB7201CCC)  /*@bfbba@*/
#define PPC_PCFGR1412_PID	(*(volatile uint_io8_t*)0xB7201CCD)  /*@bfbba@*/
#define PPC_PCFGR1412_POD	(*(volatile uint_io8_t*)0xB7201CCE)  /*@bfbba@*/
#define PPC_PCFGR1412_POE	(*(volatile uint_io8_t*)0xB7201CCF)  /*@bfbba@*/

#define PPC_PCFGR1413	(PPC.unPCFGR1413.u16Register)  /*@rg@*/
#define PPC_PCFGR1413_POF	(PPC.unPCFGR1413.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1413_NFE	(*(volatile uint_io8_t*)0xB7201CD5)  /*@bfbba@*/
#define PPC_PCFGR1413_ODR	(PPC.unPCFGR1413.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1413_PDE	(*(volatile uint_io8_t*)0xB7201CD8)  /*@bfbba@*/
#define PPC_PCFGR1413_PUE	(*(volatile uint_io8_t*)0xB7201CD9)  /*@bfbba@*/
#define PPC_PCFGR1413_PIL	(PPC.unPCFGR1413.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1413_PIE	(*(volatile uint_io8_t*)0xB7201CDC)  /*@bfbba@*/
#define PPC_PCFGR1413_PID	(*(volatile uint_io8_t*)0xB7201CDD)  /*@bfbba@*/
#define PPC_PCFGR1413_POD	(*(volatile uint_io8_t*)0xB7201CDE)  /*@bfbba@*/
#define PPC_PCFGR1413_POE	(*(volatile uint_io8_t*)0xB7201CDF)  /*@bfbba@*/

#define PPC_PCFGR1414	(PPC.unPCFGR1414.u16Register)  /*@rg@*/
#define PPC_PCFGR1414_POF	(PPC.unPCFGR1414.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1414_NFE	(*(volatile uint_io8_t*)0xB7201CE5)  /*@bfbba@*/
#define PPC_PCFGR1414_ODR	(PPC.unPCFGR1414.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1414_PDE	(*(volatile uint_io8_t*)0xB7201CE8)  /*@bfbba@*/
#define PPC_PCFGR1414_PUE	(*(volatile uint_io8_t*)0xB7201CE9)  /*@bfbba@*/
#define PPC_PCFGR1414_PIL	(PPC.unPCFGR1414.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1414_PIE	(*(volatile uint_io8_t*)0xB7201CEC)  /*@bfbba@*/
#define PPC_PCFGR1414_PID	(*(volatile uint_io8_t*)0xB7201CED)  /*@bfbba@*/
#define PPC_PCFGR1414_POD	(*(volatile uint_io8_t*)0xB7201CEE)  /*@bfbba@*/
#define PPC_PCFGR1414_POE	(*(volatile uint_io8_t*)0xB7201CEF)  /*@bfbba@*/

#define PPC_PCFGR1415	(PPC.unPCFGR1415.u16Register)  /*@rg@*/
#define PPC_PCFGR1415_POF	(PPC.unPCFGR1415.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1415_NFE	(*(volatile uint_io8_t*)0xB7201CF5)  /*@bfbba@*/
#define PPC_PCFGR1415_ODR	(PPC.unPCFGR1415.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1415_PDE	(*(volatile uint_io8_t*)0xB7201CF8)  /*@bfbba@*/
#define PPC_PCFGR1415_PUE	(*(volatile uint_io8_t*)0xB7201CF9)  /*@bfbba@*/
#define PPC_PCFGR1415_PIL	(PPC.unPCFGR1415.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1415_PIE	(*(volatile uint_io8_t*)0xB7201CFC)  /*@bfbba@*/
#define PPC_PCFGR1415_PID	(*(volatile uint_io8_t*)0xB7201CFD)  /*@bfbba@*/
#define PPC_PCFGR1415_POD	(*(volatile uint_io8_t*)0xB7201CFE)  /*@bfbba@*/
#define PPC_PCFGR1415_POE	(*(volatile uint_io8_t*)0xB7201CFF)  /*@bfbba@*/

#define PPC_PCFGR1416	(PPC.unPCFGR1416.u16Register)  /*@rg@*/
#define PPC_PCFGR1416_POF	(PPC.unPCFGR1416.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1416_NFE	(*(volatile uint_io8_t*)0xB7201D05)  /*@bfbba@*/
#define PPC_PCFGR1416_ODR	(PPC.unPCFGR1416.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1416_PDE	(*(volatile uint_io8_t*)0xB7201D08)  /*@bfbba@*/
#define PPC_PCFGR1416_PUE	(*(volatile uint_io8_t*)0xB7201D09)  /*@bfbba@*/
#define PPC_PCFGR1416_PIL	(PPC.unPCFGR1416.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1416_PIE	(*(volatile uint_io8_t*)0xB7201D0C)  /*@bfbba@*/
#define PPC_PCFGR1416_PID	(*(volatile uint_io8_t*)0xB7201D0D)  /*@bfbba@*/
#define PPC_PCFGR1416_POD	(*(volatile uint_io8_t*)0xB7201D0E)  /*@bfbba@*/
#define PPC_PCFGR1416_POE	(*(volatile uint_io8_t*)0xB7201D0F)  /*@bfbba@*/

#define PPC_PCFGR1417	(PPC.unPCFGR1417.u16Register)  /*@rg@*/
#define PPC_PCFGR1417_POF	(PPC.unPCFGR1417.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1417_NFE	(*(volatile uint_io8_t*)0xB7201D15)  /*@bfbba@*/
#define PPC_PCFGR1417_ODR	(PPC.unPCFGR1417.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1417_PDE	(*(volatile uint_io8_t*)0xB7201D18)  /*@bfbba@*/
#define PPC_PCFGR1417_PUE	(*(volatile uint_io8_t*)0xB7201D19)  /*@bfbba@*/
#define PPC_PCFGR1417_PIL	(PPC.unPCFGR1417.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1417_PIE	(*(volatile uint_io8_t*)0xB7201D1C)  /*@bfbba@*/
#define PPC_PCFGR1417_PID	(*(volatile uint_io8_t*)0xB7201D1D)  /*@bfbba@*/
#define PPC_PCFGR1417_POD	(*(volatile uint_io8_t*)0xB7201D1E)  /*@bfbba@*/
#define PPC_PCFGR1417_POE	(*(volatile uint_io8_t*)0xB7201D1F)  /*@bfbba@*/

#define PPC_PCFGR1418	(PPC.unPCFGR1418.u16Register)  /*@rg@*/
#define PPC_PCFGR1418_POF	(PPC.unPCFGR1418.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1418_NFE	(*(volatile uint_io8_t*)0xB7201D25)  /*@bfbba@*/
#define PPC_PCFGR1418_ODR	(PPC.unPCFGR1418.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1418_PDE	(*(volatile uint_io8_t*)0xB7201D28)  /*@bfbba@*/
#define PPC_PCFGR1418_PUE	(*(volatile uint_io8_t*)0xB7201D29)  /*@bfbba@*/
#define PPC_PCFGR1418_PIL	(PPC.unPCFGR1418.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1418_PIE	(*(volatile uint_io8_t*)0xB7201D2C)  /*@bfbba@*/
#define PPC_PCFGR1418_PID	(*(volatile uint_io8_t*)0xB7201D2D)  /*@bfbba@*/
#define PPC_PCFGR1418_POD	(*(volatile uint_io8_t*)0xB7201D2E)  /*@bfbba@*/
#define PPC_PCFGR1418_POE	(*(volatile uint_io8_t*)0xB7201D2F)  /*@bfbba@*/

#define PPC_PCFGR1419	(PPC.unPCFGR1419.u16Register)  /*@rg@*/
#define PPC_PCFGR1419_POF	(PPC.unPCFGR1419.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1419_NFE	(*(volatile uint_io8_t*)0xB7201D35)  /*@bfbba@*/
#define PPC_PCFGR1419_ODR	(PPC.unPCFGR1419.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1419_PDE	(*(volatile uint_io8_t*)0xB7201D38)  /*@bfbba@*/
#define PPC_PCFGR1419_PUE	(*(volatile uint_io8_t*)0xB7201D39)  /*@bfbba@*/
#define PPC_PCFGR1419_PIL	(PPC.unPCFGR1419.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1419_PIE	(*(volatile uint_io8_t*)0xB7201D3C)  /*@bfbba@*/
#define PPC_PCFGR1419_PID	(*(volatile uint_io8_t*)0xB7201D3D)  /*@bfbba@*/
#define PPC_PCFGR1419_POD	(*(volatile uint_io8_t*)0xB7201D3E)  /*@bfbba@*/
#define PPC_PCFGR1419_POE	(*(volatile uint_io8_t*)0xB7201D3F)  /*@bfbba@*/

#define PPC_PCFGR1420	(PPC.unPCFGR1420.u16Register)  /*@rg@*/
#define PPC_PCFGR1420_POF	(PPC.unPCFGR1420.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1420_NFE	(*(volatile uint_io8_t*)0xB7201D45)  /*@bfbba@*/
#define PPC_PCFGR1420_ODR	(PPC.unPCFGR1420.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1420_PDE	(*(volatile uint_io8_t*)0xB7201D48)  /*@bfbba@*/
#define PPC_PCFGR1420_PUE	(*(volatile uint_io8_t*)0xB7201D49)  /*@bfbba@*/
#define PPC_PCFGR1420_PIL	(PPC.unPCFGR1420.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1420_PIE	(*(volatile uint_io8_t*)0xB7201D4C)  /*@bfbba@*/
#define PPC_PCFGR1420_PID	(*(volatile uint_io8_t*)0xB7201D4D)  /*@bfbba@*/
#define PPC_PCFGR1420_POD	(*(volatile uint_io8_t*)0xB7201D4E)  /*@bfbba@*/
#define PPC_PCFGR1420_POE	(*(volatile uint_io8_t*)0xB7201D4F)  /*@bfbba@*/

#define PPC_PCFGR1421	(PPC.unPCFGR1421.u16Register)  /*@rg@*/
#define PPC_PCFGR1421_POF	(PPC.unPCFGR1421.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1421_NFE	(*(volatile uint_io8_t*)0xB7201D55)  /*@bfbba@*/
#define PPC_PCFGR1421_ODR	(PPC.unPCFGR1421.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1421_PDE	(*(volatile uint_io8_t*)0xB7201D58)  /*@bfbba@*/
#define PPC_PCFGR1421_PUE	(*(volatile uint_io8_t*)0xB7201D59)  /*@bfbba@*/
#define PPC_PCFGR1421_PIL	(PPC.unPCFGR1421.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1421_PIE	(*(volatile uint_io8_t*)0xB7201D5C)  /*@bfbba@*/
#define PPC_PCFGR1421_PID	(*(volatile uint_io8_t*)0xB7201D5D)  /*@bfbba@*/
#define PPC_PCFGR1421_POD	(*(volatile uint_io8_t*)0xB7201D5E)  /*@bfbba@*/
#define PPC_PCFGR1421_POE	(*(volatile uint_io8_t*)0xB7201D5F)  /*@bfbba@*/

#define PPC_PCFGR1422	(PPC.unPCFGR1422.u16Register)  /*@rg@*/
#define PPC_PCFGR1422_POF	(PPC.unPCFGR1422.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1422_NFE	(*(volatile uint_io8_t*)0xB7201D65)  /*@bfbba@*/
#define PPC_PCFGR1422_ODR	(PPC.unPCFGR1422.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1422_PDE	(*(volatile uint_io8_t*)0xB7201D68)  /*@bfbba@*/
#define PPC_PCFGR1422_PUE	(*(volatile uint_io8_t*)0xB7201D69)  /*@bfbba@*/
#define PPC_PCFGR1422_PIL	(PPC.unPCFGR1422.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1422_PIE	(*(volatile uint_io8_t*)0xB7201D6C)  /*@bfbba@*/
#define PPC_PCFGR1422_PID	(*(volatile uint_io8_t*)0xB7201D6D)  /*@bfbba@*/
#define PPC_PCFGR1422_POD	(*(volatile uint_io8_t*)0xB7201D6E)  /*@bfbba@*/
#define PPC_PCFGR1422_POE	(*(volatile uint_io8_t*)0xB7201D6F)  /*@bfbba@*/

#define PPC_PCFGR1423	(PPC.unPCFGR1423.u16Register)  /*@rg@*/
#define PPC_PCFGR1423_POF	(PPC.unPCFGR1423.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1423_NFE	(*(volatile uint_io8_t*)0xB7201D75)  /*@bfbba@*/
#define PPC_PCFGR1423_ODR	(PPC.unPCFGR1423.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1423_PDE	(*(volatile uint_io8_t*)0xB7201D78)  /*@bfbba@*/
#define PPC_PCFGR1423_PUE	(*(volatile uint_io8_t*)0xB7201D79)  /*@bfbba@*/
#define PPC_PCFGR1423_PIL	(PPC.unPCFGR1423.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1423_PIE	(*(volatile uint_io8_t*)0xB7201D7C)  /*@bfbba@*/
#define PPC_PCFGR1423_PID	(*(volatile uint_io8_t*)0xB7201D7D)  /*@bfbba@*/
#define PPC_PCFGR1423_POD	(*(volatile uint_io8_t*)0xB7201D7E)  /*@bfbba@*/
#define PPC_PCFGR1423_POE	(*(volatile uint_io8_t*)0xB7201D7F)  /*@bfbba@*/

#define PPC_PCFGR1424	(PPC.unPCFGR1424.u16Register)  /*@rg@*/
#define PPC_PCFGR1424_POF	(PPC.unPCFGR1424.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1424_NFE	(*(volatile uint_io8_t*)0xB7201D85)  /*@bfbba@*/
#define PPC_PCFGR1424_ODR	(PPC.unPCFGR1424.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1424_PDE	(*(volatile uint_io8_t*)0xB7201D88)  /*@bfbba@*/
#define PPC_PCFGR1424_PUE	(*(volatile uint_io8_t*)0xB7201D89)  /*@bfbba@*/
#define PPC_PCFGR1424_PIL	(PPC.unPCFGR1424.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1424_PIE	(*(volatile uint_io8_t*)0xB7201D8C)  /*@bfbba@*/
#define PPC_PCFGR1424_PID	(*(volatile uint_io8_t*)0xB7201D8D)  /*@bfbba@*/
#define PPC_PCFGR1424_POD	(*(volatile uint_io8_t*)0xB7201D8E)  /*@bfbba@*/
#define PPC_PCFGR1424_POE	(*(volatile uint_io8_t*)0xB7201D8F)  /*@bfbba@*/

#define PPC_PCFGR1425	(PPC.unPCFGR1425.u16Register)  /*@rg@*/
#define PPC_PCFGR1425_POF	(PPC.unPCFGR1425.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1425_NFE	(*(volatile uint_io8_t*)0xB7201D95)  /*@bfbba@*/
#define PPC_PCFGR1425_ODR	(PPC.unPCFGR1425.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1425_PDE	(*(volatile uint_io8_t*)0xB7201D98)  /*@bfbba@*/
#define PPC_PCFGR1425_PUE	(*(volatile uint_io8_t*)0xB7201D99)  /*@bfbba@*/
#define PPC_PCFGR1425_PIL	(PPC.unPCFGR1425.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1425_PIE	(*(volatile uint_io8_t*)0xB7201D9C)  /*@bfbba@*/
#define PPC_PCFGR1425_PID	(*(volatile uint_io8_t*)0xB7201D9D)  /*@bfbba@*/
#define PPC_PCFGR1425_POD	(*(volatile uint_io8_t*)0xB7201D9E)  /*@bfbba@*/
#define PPC_PCFGR1425_POE	(*(volatile uint_io8_t*)0xB7201D9F)  /*@bfbba@*/

#define PPC_PCFGR1426	(PPC.unPCFGR1426.u16Register)  /*@rg@*/
#define PPC_PCFGR1426_POF	(PPC.unPCFGR1426.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1426_NFE	(*(volatile uint_io8_t*)0xB7201DA5)  /*@bfbba@*/
#define PPC_PCFGR1426_ODR	(PPC.unPCFGR1426.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1426_PDE	(*(volatile uint_io8_t*)0xB7201DA8)  /*@bfbba@*/
#define PPC_PCFGR1426_PUE	(*(volatile uint_io8_t*)0xB7201DA9)  /*@bfbba@*/
#define PPC_PCFGR1426_PIL	(PPC.unPCFGR1426.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1426_PIE	(*(volatile uint_io8_t*)0xB7201DAC)  /*@bfbba@*/
#define PPC_PCFGR1426_PID	(*(volatile uint_io8_t*)0xB7201DAD)  /*@bfbba@*/
#define PPC_PCFGR1426_POD	(*(volatile uint_io8_t*)0xB7201DAE)  /*@bfbba@*/
#define PPC_PCFGR1426_POE	(*(volatile uint_io8_t*)0xB7201DAF)  /*@bfbba@*/

#define PPC_PCFGR1427	(PPC.unPCFGR1427.u16Register)  /*@rg@*/
#define PPC_PCFGR1427_POF	(PPC.unPCFGR1427.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1427_NFE	(*(volatile uint_io8_t*)0xB7201DB5)  /*@bfbba@*/
#define PPC_PCFGR1427_ODR	(PPC.unPCFGR1427.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1427_PDE	(*(volatile uint_io8_t*)0xB7201DB8)  /*@bfbba@*/
#define PPC_PCFGR1427_PUE	(*(volatile uint_io8_t*)0xB7201DB9)  /*@bfbba@*/
#define PPC_PCFGR1427_PIL	(PPC.unPCFGR1427.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1427_PIE	(*(volatile uint_io8_t*)0xB7201DBC)  /*@bfbba@*/
#define PPC_PCFGR1427_PID	(*(volatile uint_io8_t*)0xB7201DBD)  /*@bfbba@*/
#define PPC_PCFGR1427_POD	(*(volatile uint_io8_t*)0xB7201DBE)  /*@bfbba@*/
#define PPC_PCFGR1427_POE	(*(volatile uint_io8_t*)0xB7201DBF)  /*@bfbba@*/

#define PPC_PCFGR1428	(PPC.unPCFGR1428.u16Register)  /*@rg@*/
#define PPC_PCFGR1428_POF	(PPC.unPCFGR1428.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1428_NFE	(*(volatile uint_io8_t*)0xB7201DC5)  /*@bfbba@*/
#define PPC_PCFGR1428_ODR	(PPC.unPCFGR1428.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1428_PDE	(*(volatile uint_io8_t*)0xB7201DC8)  /*@bfbba@*/
#define PPC_PCFGR1428_PUE	(*(volatile uint_io8_t*)0xB7201DC9)  /*@bfbba@*/
#define PPC_PCFGR1428_PIL	(PPC.unPCFGR1428.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1428_PIE	(*(volatile uint_io8_t*)0xB7201DCC)  /*@bfbba@*/
#define PPC_PCFGR1428_PID	(*(volatile uint_io8_t*)0xB7201DCD)  /*@bfbba@*/
#define PPC_PCFGR1428_POD	(*(volatile uint_io8_t*)0xB7201DCE)  /*@bfbba@*/
#define PPC_PCFGR1428_POE	(*(volatile uint_io8_t*)0xB7201DCF)  /*@bfbba@*/

#define PPC_PCFGR1429	(PPC.unPCFGR1429.u16Register)  /*@rg@*/
#define PPC_PCFGR1429_POF	(PPC.unPCFGR1429.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1429_NFE	(*(volatile uint_io8_t*)0xB7201DD5)  /*@bfbba@*/
#define PPC_PCFGR1429_ODR	(PPC.unPCFGR1429.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1429_PDE	(*(volatile uint_io8_t*)0xB7201DD8)  /*@bfbba@*/
#define PPC_PCFGR1429_PUE	(*(volatile uint_io8_t*)0xB7201DD9)  /*@bfbba@*/
#define PPC_PCFGR1429_PIL	(PPC.unPCFGR1429.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1429_PIE	(*(volatile uint_io8_t*)0xB7201DDC)  /*@bfbba@*/
#define PPC_PCFGR1429_PID	(*(volatile uint_io8_t*)0xB7201DDD)  /*@bfbba@*/
#define PPC_PCFGR1429_POD	(*(volatile uint_io8_t*)0xB7201DDE)  /*@bfbba@*/
#define PPC_PCFGR1429_POE	(*(volatile uint_io8_t*)0xB7201DDF)  /*@bfbba@*/

#define PPC_PCFGR1430	(PPC.unPCFGR1430.u16Register)  /*@rg@*/
#define PPC_PCFGR1430_POF	(PPC.unPCFGR1430.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1430_NFE	(*(volatile uint_io8_t*)0xB7201DE5)  /*@bfbba@*/
#define PPC_PCFGR1430_ODR	(PPC.unPCFGR1430.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1430_PDE	(*(volatile uint_io8_t*)0xB7201DE8)  /*@bfbba@*/
#define PPC_PCFGR1430_PUE	(*(volatile uint_io8_t*)0xB7201DE9)  /*@bfbba@*/
#define PPC_PCFGR1430_PIL	(PPC.unPCFGR1430.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1430_PIE	(*(volatile uint_io8_t*)0xB7201DEC)  /*@bfbba@*/
#define PPC_PCFGR1430_PID	(*(volatile uint_io8_t*)0xB7201DED)  /*@bfbba@*/
#define PPC_PCFGR1430_POD	(*(volatile uint_io8_t*)0xB7201DEE)  /*@bfbba@*/
#define PPC_PCFGR1430_POE	(*(volatile uint_io8_t*)0xB7201DEF)  /*@bfbba@*/

#define PPC_PCFGR1431	(PPC.unPCFGR1431.u16Register)  /*@rg@*/
#define PPC_PCFGR1431_POF	(PPC.unPCFGR1431.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1431_NFE	(*(volatile uint_io8_t*)0xB7201DF5)  /*@bfbba@*/
#define PPC_PCFGR1431_ODR	(PPC.unPCFGR1431.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1431_PDE	(*(volatile uint_io8_t*)0xB7201DF8)  /*@bfbba@*/
#define PPC_PCFGR1431_PUE	(*(volatile uint_io8_t*)0xB7201DF9)  /*@bfbba@*/
#define PPC_PCFGR1431_PIL	(PPC.unPCFGR1431.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1431_PIE	(*(volatile uint_io8_t*)0xB7201DFC)  /*@bfbba@*/
#define PPC_PCFGR1431_PID	(*(volatile uint_io8_t*)0xB7201DFD)  /*@bfbba@*/
#define PPC_PCFGR1431_POD	(*(volatile uint_io8_t*)0xB7201DFE)  /*@bfbba@*/
#define PPC_PCFGR1431_POE	(*(volatile uint_io8_t*)0xB7201DFF)  /*@bfbba@*/

#define PPC_PCFGR1500	(PPC.unPCFGR1500.u16Register)  /*@rg@*/
#define PPC_PCFGR1500_POF	(PPC.unPCFGR1500.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1500_NFE	(*(volatile uint_io8_t*)0xB7201E05)  /*@bfbba@*/
#define PPC_PCFGR1500_ODR	(PPC.unPCFGR1500.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1500_PDE	(*(volatile uint_io8_t*)0xB7201E08)  /*@bfbba@*/
#define PPC_PCFGR1500_PUE	(*(volatile uint_io8_t*)0xB7201E09)  /*@bfbba@*/
#define PPC_PCFGR1500_PIL	(PPC.unPCFGR1500.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1500_PIE	(*(volatile uint_io8_t*)0xB7201E0C)  /*@bfbba@*/
#define PPC_PCFGR1500_PID	(*(volatile uint_io8_t*)0xB7201E0D)  /*@bfbba@*/
#define PPC_PCFGR1500_POD	(*(volatile uint_io8_t*)0xB7201E0E)  /*@bfbba@*/
#define PPC_PCFGR1500_POE	(*(volatile uint_io8_t*)0xB7201E0F)  /*@bfbba@*/

#define PPC_PCFGR1501	(PPC.unPCFGR1501.u16Register)  /*@rg@*/
#define PPC_PCFGR1501_POF	(PPC.unPCFGR1501.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1501_NFE	(*(volatile uint_io8_t*)0xB7201E15)  /*@bfbba@*/
#define PPC_PCFGR1501_ODR	(PPC.unPCFGR1501.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1501_PDE	(*(volatile uint_io8_t*)0xB7201E18)  /*@bfbba@*/
#define PPC_PCFGR1501_PUE	(*(volatile uint_io8_t*)0xB7201E19)  /*@bfbba@*/
#define PPC_PCFGR1501_PIL	(PPC.unPCFGR1501.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1501_PIE	(*(volatile uint_io8_t*)0xB7201E1C)  /*@bfbba@*/
#define PPC_PCFGR1501_PID	(*(volatile uint_io8_t*)0xB7201E1D)  /*@bfbba@*/
#define PPC_PCFGR1501_POD	(*(volatile uint_io8_t*)0xB7201E1E)  /*@bfbba@*/
#define PPC_PCFGR1501_POE	(*(volatile uint_io8_t*)0xB7201E1F)  /*@bfbba@*/

#define PPC_PCFGR1502	(PPC.unPCFGR1502.u16Register)  /*@rg@*/
#define PPC_PCFGR1502_POF	(PPC.unPCFGR1502.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1502_NFE	(*(volatile uint_io8_t*)0xB7201E25)  /*@bfbba@*/
#define PPC_PCFGR1502_ODR	(PPC.unPCFGR1502.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1502_PDE	(*(volatile uint_io8_t*)0xB7201E28)  /*@bfbba@*/
#define PPC_PCFGR1502_PUE	(*(volatile uint_io8_t*)0xB7201E29)  /*@bfbba@*/
#define PPC_PCFGR1502_PIL	(PPC.unPCFGR1502.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1502_PIE	(*(volatile uint_io8_t*)0xB7201E2C)  /*@bfbba@*/
#define PPC_PCFGR1502_PID	(*(volatile uint_io8_t*)0xB7201E2D)  /*@bfbba@*/
#define PPC_PCFGR1502_POD	(*(volatile uint_io8_t*)0xB7201E2E)  /*@bfbba@*/
#define PPC_PCFGR1502_POE	(*(volatile uint_io8_t*)0xB7201E2F)  /*@bfbba@*/

#define PPC_PCFGR1503	(PPC.unPCFGR1503.u16Register)  /*@rg@*/
#define PPC_PCFGR1503_POF	(PPC.unPCFGR1503.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1503_NFE	(*(volatile uint_io8_t*)0xB7201E35)  /*@bfbba@*/
#define PPC_PCFGR1503_ODR	(PPC.unPCFGR1503.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1503_PDE	(*(volatile uint_io8_t*)0xB7201E38)  /*@bfbba@*/
#define PPC_PCFGR1503_PUE	(*(volatile uint_io8_t*)0xB7201E39)  /*@bfbba@*/
#define PPC_PCFGR1503_PIL	(PPC.unPCFGR1503.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1503_PIE	(*(volatile uint_io8_t*)0xB7201E3C)  /*@bfbba@*/
#define PPC_PCFGR1503_PID	(*(volatile uint_io8_t*)0xB7201E3D)  /*@bfbba@*/
#define PPC_PCFGR1503_POD	(*(volatile uint_io8_t*)0xB7201E3E)  /*@bfbba@*/
#define PPC_PCFGR1503_POE	(*(volatile uint_io8_t*)0xB7201E3F)  /*@bfbba@*/

#define PPC_PCFGR1504	(PPC.unPCFGR1504.u16Register)  /*@rg@*/
#define PPC_PCFGR1504_POF	(PPC.unPCFGR1504.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1504_NFE	(*(volatile uint_io8_t*)0xB7201E45)  /*@bfbba@*/
#define PPC_PCFGR1504_ODR	(PPC.unPCFGR1504.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1504_PDE	(*(volatile uint_io8_t*)0xB7201E48)  /*@bfbba@*/
#define PPC_PCFGR1504_PUE	(*(volatile uint_io8_t*)0xB7201E49)  /*@bfbba@*/
#define PPC_PCFGR1504_PIL	(PPC.unPCFGR1504.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1504_PIE	(*(volatile uint_io8_t*)0xB7201E4C)  /*@bfbba@*/
#define PPC_PCFGR1504_PID	(*(volatile uint_io8_t*)0xB7201E4D)  /*@bfbba@*/
#define PPC_PCFGR1504_POD	(*(volatile uint_io8_t*)0xB7201E4E)  /*@bfbba@*/
#define PPC_PCFGR1504_POE	(*(volatile uint_io8_t*)0xB7201E4F)  /*@bfbba@*/

#define PPC_PCFGR1505	(PPC.unPCFGR1505.u16Register)  /*@rg@*/
#define PPC_PCFGR1505_POF	(PPC.unPCFGR1505.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1505_NFE	(*(volatile uint_io8_t*)0xB7201E55)  /*@bfbba@*/
#define PPC_PCFGR1505_ODR	(PPC.unPCFGR1505.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1505_PDE	(*(volatile uint_io8_t*)0xB7201E58)  /*@bfbba@*/
#define PPC_PCFGR1505_PUE	(*(volatile uint_io8_t*)0xB7201E59)  /*@bfbba@*/
#define PPC_PCFGR1505_PIL	(PPC.unPCFGR1505.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1505_PIE	(*(volatile uint_io8_t*)0xB7201E5C)  /*@bfbba@*/
#define PPC_PCFGR1505_PID	(*(volatile uint_io8_t*)0xB7201E5D)  /*@bfbba@*/
#define PPC_PCFGR1505_POD	(*(volatile uint_io8_t*)0xB7201E5E)  /*@bfbba@*/
#define PPC_PCFGR1505_POE	(*(volatile uint_io8_t*)0xB7201E5F)  /*@bfbba@*/

#define PPC_PCFGR1506	(PPC.unPCFGR1506.u16Register)  /*@rg@*/
#define PPC_PCFGR1506_POF	(PPC.unPCFGR1506.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1506_NFE	(*(volatile uint_io8_t*)0xB7201E65)  /*@bfbba@*/
#define PPC_PCFGR1506_ODR	(PPC.unPCFGR1506.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1506_PDE	(*(volatile uint_io8_t*)0xB7201E68)  /*@bfbba@*/
#define PPC_PCFGR1506_PUE	(*(volatile uint_io8_t*)0xB7201E69)  /*@bfbba@*/
#define PPC_PCFGR1506_PIL	(PPC.unPCFGR1506.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1506_PIE	(*(volatile uint_io8_t*)0xB7201E6C)  /*@bfbba@*/
#define PPC_PCFGR1506_PID	(*(volatile uint_io8_t*)0xB7201E6D)  /*@bfbba@*/
#define PPC_PCFGR1506_POD	(*(volatile uint_io8_t*)0xB7201E6E)  /*@bfbba@*/
#define PPC_PCFGR1506_POE	(*(volatile uint_io8_t*)0xB7201E6F)  /*@bfbba@*/

#define PPC_PCFGR1507	(PPC.unPCFGR1507.u16Register)  /*@rg@*/
#define PPC_PCFGR1507_POF	(PPC.unPCFGR1507.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1507_NFE	(*(volatile uint_io8_t*)0xB7201E75)  /*@bfbba@*/
#define PPC_PCFGR1507_ODR	(PPC.unPCFGR1507.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1507_PDE	(*(volatile uint_io8_t*)0xB7201E78)  /*@bfbba@*/
#define PPC_PCFGR1507_PUE	(*(volatile uint_io8_t*)0xB7201E79)  /*@bfbba@*/
#define PPC_PCFGR1507_PIL	(PPC.unPCFGR1507.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1507_PIE	(*(volatile uint_io8_t*)0xB7201E7C)  /*@bfbba@*/
#define PPC_PCFGR1507_PID	(*(volatile uint_io8_t*)0xB7201E7D)  /*@bfbba@*/
#define PPC_PCFGR1507_POD	(*(volatile uint_io8_t*)0xB7201E7E)  /*@bfbba@*/
#define PPC_PCFGR1507_POE	(*(volatile uint_io8_t*)0xB7201E7F)  /*@bfbba@*/

#define PPC_PCFGR1508	(PPC.unPCFGR1508.u16Register)  /*@rg@*/
#define PPC_PCFGR1508_POF	(PPC.unPCFGR1508.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1508_NFE	(*(volatile uint_io8_t*)0xB7201E85)  /*@bfbba@*/
#define PPC_PCFGR1508_ODR	(PPC.unPCFGR1508.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1508_PDE	(*(volatile uint_io8_t*)0xB7201E88)  /*@bfbba@*/
#define PPC_PCFGR1508_PUE	(*(volatile uint_io8_t*)0xB7201E89)  /*@bfbba@*/
#define PPC_PCFGR1508_PIL	(PPC.unPCFGR1508.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1508_PIE	(*(volatile uint_io8_t*)0xB7201E8C)  /*@bfbba@*/
#define PPC_PCFGR1508_PID	(*(volatile uint_io8_t*)0xB7201E8D)  /*@bfbba@*/
#define PPC_PCFGR1508_POD	(*(volatile uint_io8_t*)0xB7201E8E)  /*@bfbba@*/
#define PPC_PCFGR1508_POE	(*(volatile uint_io8_t*)0xB7201E8F)  /*@bfbba@*/

#define PPC_PCFGR1509	(PPC.unPCFGR1509.u16Register)  /*@rg@*/
#define PPC_PCFGR1509_POF	(PPC.unPCFGR1509.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1509_NFE	(*(volatile uint_io8_t*)0xB7201E95)  /*@bfbba@*/
#define PPC_PCFGR1509_ODR	(PPC.unPCFGR1509.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1509_PDE	(*(volatile uint_io8_t*)0xB7201E98)  /*@bfbba@*/
#define PPC_PCFGR1509_PUE	(*(volatile uint_io8_t*)0xB7201E99)  /*@bfbba@*/
#define PPC_PCFGR1509_PIL	(PPC.unPCFGR1509.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1509_PIE	(*(volatile uint_io8_t*)0xB7201E9C)  /*@bfbba@*/
#define PPC_PCFGR1509_PID	(*(volatile uint_io8_t*)0xB7201E9D)  /*@bfbba@*/
#define PPC_PCFGR1509_POD	(*(volatile uint_io8_t*)0xB7201E9E)  /*@bfbba@*/
#define PPC_PCFGR1509_POE	(*(volatile uint_io8_t*)0xB7201E9F)  /*@bfbba@*/

#define PPC_PCFGR1510	(PPC.unPCFGR1510.u16Register)  /*@rg@*/
#define PPC_PCFGR1510_POF	(PPC.unPCFGR1510.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1510_NFE	(*(volatile uint_io8_t*)0xB7201EA5)  /*@bfbba@*/
#define PPC_PCFGR1510_ODR	(PPC.unPCFGR1510.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1510_PDE	(*(volatile uint_io8_t*)0xB7201EA8)  /*@bfbba@*/
#define PPC_PCFGR1510_PUE	(*(volatile uint_io8_t*)0xB7201EA9)  /*@bfbba@*/
#define PPC_PCFGR1510_PIL	(PPC.unPCFGR1510.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1510_PIE	(*(volatile uint_io8_t*)0xB7201EAC)  /*@bfbba@*/
#define PPC_PCFGR1510_PID	(*(volatile uint_io8_t*)0xB7201EAD)  /*@bfbba@*/
#define PPC_PCFGR1510_POD	(*(volatile uint_io8_t*)0xB7201EAE)  /*@bfbba@*/
#define PPC_PCFGR1510_POE	(*(volatile uint_io8_t*)0xB7201EAF)  /*@bfbba@*/

#define PPC_PCFGR1511	(PPC.unPCFGR1511.u16Register)  /*@rg@*/
#define PPC_PCFGR1511_POF	(PPC.unPCFGR1511.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1511_NFE	(*(volatile uint_io8_t*)0xB7201EB5)  /*@bfbba@*/
#define PPC_PCFGR1511_ODR	(PPC.unPCFGR1511.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1511_PDE	(*(volatile uint_io8_t*)0xB7201EB8)  /*@bfbba@*/
#define PPC_PCFGR1511_PUE	(*(volatile uint_io8_t*)0xB7201EB9)  /*@bfbba@*/
#define PPC_PCFGR1511_PIL	(PPC.unPCFGR1511.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1511_PIE	(*(volatile uint_io8_t*)0xB7201EBC)  /*@bfbba@*/
#define PPC_PCFGR1511_PID	(*(volatile uint_io8_t*)0xB7201EBD)  /*@bfbba@*/
#define PPC_PCFGR1511_POD	(*(volatile uint_io8_t*)0xB7201EBE)  /*@bfbba@*/
#define PPC_PCFGR1511_POE	(*(volatile uint_io8_t*)0xB7201EBF)  /*@bfbba@*/

#define PPC_PCFGR1512	(PPC.unPCFGR1512.u16Register)  /*@rg@*/
#define PPC_PCFGR1512_POF	(PPC.unPCFGR1512.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1512_NFE	(*(volatile uint_io8_t*)0xB7201EC5)  /*@bfbba@*/
#define PPC_PCFGR1512_ODR	(PPC.unPCFGR1512.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1512_PDE	(*(volatile uint_io8_t*)0xB7201EC8)  /*@bfbba@*/
#define PPC_PCFGR1512_PUE	(*(volatile uint_io8_t*)0xB7201EC9)  /*@bfbba@*/
#define PPC_PCFGR1512_PIL	(PPC.unPCFGR1512.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1512_PIE	(*(volatile uint_io8_t*)0xB7201ECC)  /*@bfbba@*/
#define PPC_PCFGR1512_PID	(*(volatile uint_io8_t*)0xB7201ECD)  /*@bfbba@*/
#define PPC_PCFGR1512_POD	(*(volatile uint_io8_t*)0xB7201ECE)  /*@bfbba@*/
#define PPC_PCFGR1512_POE	(*(volatile uint_io8_t*)0xB7201ECF)  /*@bfbba@*/

#define PPC_PCFGR1513	(PPC.unPCFGR1513.u16Register)  /*@rg@*/
#define PPC_PCFGR1513_POF	(PPC.unPCFGR1513.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1513_NFE	(*(volatile uint_io8_t*)0xB7201ED5)  /*@bfbba@*/
#define PPC_PCFGR1513_ODR	(PPC.unPCFGR1513.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1513_PDE	(*(volatile uint_io8_t*)0xB7201ED8)  /*@bfbba@*/
#define PPC_PCFGR1513_PUE	(*(volatile uint_io8_t*)0xB7201ED9)  /*@bfbba@*/
#define PPC_PCFGR1513_PIL	(PPC.unPCFGR1513.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1513_PIE	(*(volatile uint_io8_t*)0xB7201EDC)  /*@bfbba@*/
#define PPC_PCFGR1513_PID	(*(volatile uint_io8_t*)0xB7201EDD)  /*@bfbba@*/
#define PPC_PCFGR1513_POD	(*(volatile uint_io8_t*)0xB7201EDE)  /*@bfbba@*/
#define PPC_PCFGR1513_POE	(*(volatile uint_io8_t*)0xB7201EDF)  /*@bfbba@*/

#define PPC_PCFGR1514	(PPC.unPCFGR1514.u16Register)  /*@rg@*/
#define PPC_PCFGR1514_POF	(PPC.unPCFGR1514.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1514_NFE	(*(volatile uint_io8_t*)0xB7201EE5)  /*@bfbba@*/
#define PPC_PCFGR1514_ODR	(PPC.unPCFGR1514.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1514_PDE	(*(volatile uint_io8_t*)0xB7201EE8)  /*@bfbba@*/
#define PPC_PCFGR1514_PUE	(*(volatile uint_io8_t*)0xB7201EE9)  /*@bfbba@*/
#define PPC_PCFGR1514_PIL	(PPC.unPCFGR1514.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1514_PIE	(*(volatile uint_io8_t*)0xB7201EEC)  /*@bfbba@*/
#define PPC_PCFGR1514_PID	(*(volatile uint_io8_t*)0xB7201EED)  /*@bfbba@*/
#define PPC_PCFGR1514_POD	(*(volatile uint_io8_t*)0xB7201EEE)  /*@bfbba@*/
#define PPC_PCFGR1514_POE	(*(volatile uint_io8_t*)0xB7201EEF)  /*@bfbba@*/

#define PPC_PCFGR1515	(PPC.unPCFGR1515.u16Register)  /*@rg@*/
#define PPC_PCFGR1515_POF	(PPC.unPCFGR1515.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1515_NFE	(*(volatile uint_io8_t*)0xB7201EF5)  /*@bfbba@*/
#define PPC_PCFGR1515_ODR	(PPC.unPCFGR1515.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1515_PDE	(*(volatile uint_io8_t*)0xB7201EF8)  /*@bfbba@*/
#define PPC_PCFGR1515_PUE	(*(volatile uint_io8_t*)0xB7201EF9)  /*@bfbba@*/
#define PPC_PCFGR1515_PIL	(PPC.unPCFGR1515.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1515_PIE	(*(volatile uint_io8_t*)0xB7201EFC)  /*@bfbba@*/
#define PPC_PCFGR1515_PID	(*(volatile uint_io8_t*)0xB7201EFD)  /*@bfbba@*/
#define PPC_PCFGR1515_POD	(*(volatile uint_io8_t*)0xB7201EFE)  /*@bfbba@*/
#define PPC_PCFGR1515_POE	(*(volatile uint_io8_t*)0xB7201EFF)  /*@bfbba@*/

#define PPC_PCFGR1516	(PPC.unPCFGR1516.u16Register)  /*@rg@*/
#define PPC_PCFGR1516_POF	(PPC.unPCFGR1516.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1516_NFE	(*(volatile uint_io8_t*)0xB7201F05)  /*@bfbba@*/
#define PPC_PCFGR1516_ODR	(PPC.unPCFGR1516.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1516_PDE	(*(volatile uint_io8_t*)0xB7201F08)  /*@bfbba@*/
#define PPC_PCFGR1516_PUE	(*(volatile uint_io8_t*)0xB7201F09)  /*@bfbba@*/
#define PPC_PCFGR1516_PIL	(PPC.unPCFGR1516.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1516_PIE	(*(volatile uint_io8_t*)0xB7201F0C)  /*@bfbba@*/
#define PPC_PCFGR1516_PID	(*(volatile uint_io8_t*)0xB7201F0D)  /*@bfbba@*/
#define PPC_PCFGR1516_POD	(*(volatile uint_io8_t*)0xB7201F0E)  /*@bfbba@*/
#define PPC_PCFGR1516_POE	(*(volatile uint_io8_t*)0xB7201F0F)  /*@bfbba@*/

#define PPC_PCFGR1517	(PPC.unPCFGR1517.u16Register)  /*@rg@*/
#define PPC_PCFGR1517_POF	(PPC.unPCFGR1517.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1517_NFE	(*(volatile uint_io8_t*)0xB7201F15)  /*@bfbba@*/
#define PPC_PCFGR1517_ODR	(PPC.unPCFGR1517.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1517_PDE	(*(volatile uint_io8_t*)0xB7201F18)  /*@bfbba@*/
#define PPC_PCFGR1517_PUE	(*(volatile uint_io8_t*)0xB7201F19)  /*@bfbba@*/
#define PPC_PCFGR1517_PIL	(PPC.unPCFGR1517.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1517_PIE	(*(volatile uint_io8_t*)0xB7201F1C)  /*@bfbba@*/
#define PPC_PCFGR1517_PID	(*(volatile uint_io8_t*)0xB7201F1D)  /*@bfbba@*/
#define PPC_PCFGR1517_POD	(*(volatile uint_io8_t*)0xB7201F1E)  /*@bfbba@*/
#define PPC_PCFGR1517_POE	(*(volatile uint_io8_t*)0xB7201F1F)  /*@bfbba@*/

#define PPC_PCFGR1518	(PPC.unPCFGR1518.u16Register)  /*@rg@*/
#define PPC_PCFGR1518_POF	(PPC.unPCFGR1518.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1518_NFE	(*(volatile uint_io8_t*)0xB7201F25)  /*@bfbba@*/
#define PPC_PCFGR1518_ODR	(PPC.unPCFGR1518.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1518_PDE	(*(volatile uint_io8_t*)0xB7201F28)  /*@bfbba@*/
#define PPC_PCFGR1518_PUE	(*(volatile uint_io8_t*)0xB7201F29)  /*@bfbba@*/
#define PPC_PCFGR1518_PIL	(PPC.unPCFGR1518.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1518_PIE	(*(volatile uint_io8_t*)0xB7201F2C)  /*@bfbba@*/
#define PPC_PCFGR1518_PID	(*(volatile uint_io8_t*)0xB7201F2D)  /*@bfbba@*/
#define PPC_PCFGR1518_POD	(*(volatile uint_io8_t*)0xB7201F2E)  /*@bfbba@*/
#define PPC_PCFGR1518_POE	(*(volatile uint_io8_t*)0xB7201F2F)  /*@bfbba@*/

#define PPC_PCFGR1519	(PPC.unPCFGR1519.u16Register)  /*@rg@*/
#define PPC_PCFGR1519_POF	(PPC.unPCFGR1519.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1519_NFE	(*(volatile uint_io8_t*)0xB7201F35)  /*@bfbba@*/
#define PPC_PCFGR1519_ODR	(PPC.unPCFGR1519.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1519_PDE	(*(volatile uint_io8_t*)0xB7201F38)  /*@bfbba@*/
#define PPC_PCFGR1519_PUE	(*(volatile uint_io8_t*)0xB7201F39)  /*@bfbba@*/
#define PPC_PCFGR1519_PIL	(PPC.unPCFGR1519.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1519_PIE	(*(volatile uint_io8_t*)0xB7201F3C)  /*@bfbba@*/
#define PPC_PCFGR1519_PID	(*(volatile uint_io8_t*)0xB7201F3D)  /*@bfbba@*/
#define PPC_PCFGR1519_POD	(*(volatile uint_io8_t*)0xB7201F3E)  /*@bfbba@*/
#define PPC_PCFGR1519_POE	(*(volatile uint_io8_t*)0xB7201F3F)  /*@bfbba@*/

#define PPC_PCFGR1520	(PPC.unPCFGR1520.u16Register)  /*@rg@*/
#define PPC_PCFGR1520_POF	(PPC.unPCFGR1520.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1520_NFE	(*(volatile uint_io8_t*)0xB7201F45)  /*@bfbba@*/
#define PPC_PCFGR1520_ODR	(PPC.unPCFGR1520.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1520_PDE	(*(volatile uint_io8_t*)0xB7201F48)  /*@bfbba@*/
#define PPC_PCFGR1520_PUE	(*(volatile uint_io8_t*)0xB7201F49)  /*@bfbba@*/
#define PPC_PCFGR1520_PIL	(PPC.unPCFGR1520.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1520_PIE	(*(volatile uint_io8_t*)0xB7201F4C)  /*@bfbba@*/
#define PPC_PCFGR1520_PID	(*(volatile uint_io8_t*)0xB7201F4D)  /*@bfbba@*/
#define PPC_PCFGR1520_POD	(*(volatile uint_io8_t*)0xB7201F4E)  /*@bfbba@*/
#define PPC_PCFGR1520_POE	(*(volatile uint_io8_t*)0xB7201F4F)  /*@bfbba@*/

#define PPC_PCFGR1521	(PPC.unPCFGR1521.u16Register)  /*@rg@*/
#define PPC_PCFGR1521_POF	(PPC.unPCFGR1521.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1521_NFE	(*(volatile uint_io8_t*)0xB7201F55)  /*@bfbba@*/
#define PPC_PCFGR1521_ODR	(PPC.unPCFGR1521.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1521_PDE	(*(volatile uint_io8_t*)0xB7201F58)  /*@bfbba@*/
#define PPC_PCFGR1521_PUE	(*(volatile uint_io8_t*)0xB7201F59)  /*@bfbba@*/
#define PPC_PCFGR1521_PIL	(PPC.unPCFGR1521.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1521_PIE	(*(volatile uint_io8_t*)0xB7201F5C)  /*@bfbba@*/
#define PPC_PCFGR1521_PID	(*(volatile uint_io8_t*)0xB7201F5D)  /*@bfbba@*/
#define PPC_PCFGR1521_POD	(*(volatile uint_io8_t*)0xB7201F5E)  /*@bfbba@*/
#define PPC_PCFGR1521_POE	(*(volatile uint_io8_t*)0xB7201F5F)  /*@bfbba@*/

#define PPC_PCFGR1522	(PPC.unPCFGR1522.u16Register)  /*@rg@*/
#define PPC_PCFGR1522_POF	(PPC.unPCFGR1522.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1522_NFE	(*(volatile uint_io8_t*)0xB7201F65)  /*@bfbba@*/
#define PPC_PCFGR1522_ODR	(PPC.unPCFGR1522.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1522_PDE	(*(volatile uint_io8_t*)0xB7201F68)  /*@bfbba@*/
#define PPC_PCFGR1522_PUE	(*(volatile uint_io8_t*)0xB7201F69)  /*@bfbba@*/
#define PPC_PCFGR1522_PIL	(PPC.unPCFGR1522.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1522_PIE	(*(volatile uint_io8_t*)0xB7201F6C)  /*@bfbba@*/
#define PPC_PCFGR1522_PID	(*(volatile uint_io8_t*)0xB7201F6D)  /*@bfbba@*/
#define PPC_PCFGR1522_POD	(*(volatile uint_io8_t*)0xB7201F6E)  /*@bfbba@*/
#define PPC_PCFGR1522_POE	(*(volatile uint_io8_t*)0xB7201F6F)  /*@bfbba@*/

#define PPC_PCFGR1523	(PPC.unPCFGR1523.u16Register)  /*@rg@*/
#define PPC_PCFGR1523_POF	(PPC.unPCFGR1523.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1523_NFE	(*(volatile uint_io8_t*)0xB7201F75)  /*@bfbba@*/
#define PPC_PCFGR1523_ODR	(PPC.unPCFGR1523.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1523_PDE	(*(volatile uint_io8_t*)0xB7201F78)  /*@bfbba@*/
#define PPC_PCFGR1523_PUE	(*(volatile uint_io8_t*)0xB7201F79)  /*@bfbba@*/
#define PPC_PCFGR1523_PIL	(PPC.unPCFGR1523.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1523_PIE	(*(volatile uint_io8_t*)0xB7201F7C)  /*@bfbba@*/
#define PPC_PCFGR1523_PID	(*(volatile uint_io8_t*)0xB7201F7D)  /*@bfbba@*/
#define PPC_PCFGR1523_POD	(*(volatile uint_io8_t*)0xB7201F7E)  /*@bfbba@*/
#define PPC_PCFGR1523_POE	(*(volatile uint_io8_t*)0xB7201F7F)  /*@bfbba@*/

#define PPC_PCFGR1524	(PPC.unPCFGR1524.u16Register)  /*@rg@*/
#define PPC_PCFGR1524_POF	(PPC.unPCFGR1524.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1524_NFE	(*(volatile uint_io8_t*)0xB7201F85)  /*@bfbba@*/
#define PPC_PCFGR1524_ODR	(PPC.unPCFGR1524.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1524_PDE	(*(volatile uint_io8_t*)0xB7201F88)  /*@bfbba@*/
#define PPC_PCFGR1524_PUE	(*(volatile uint_io8_t*)0xB7201F89)  /*@bfbba@*/
#define PPC_PCFGR1524_PIL	(PPC.unPCFGR1524.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1524_PIE	(*(volatile uint_io8_t*)0xB7201F8C)  /*@bfbba@*/
#define PPC_PCFGR1524_PID	(*(volatile uint_io8_t*)0xB7201F8D)  /*@bfbba@*/
#define PPC_PCFGR1524_POD	(*(volatile uint_io8_t*)0xB7201F8E)  /*@bfbba@*/
#define PPC_PCFGR1524_POE	(*(volatile uint_io8_t*)0xB7201F8F)  /*@bfbba@*/

#define PPC_PCFGR1525	(PPC.unPCFGR1525.u16Register)  /*@rg@*/
#define PPC_PCFGR1525_POF	(PPC.unPCFGR1525.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1525_NFE	(*(volatile uint_io8_t*)0xB7201F95)  /*@bfbba@*/
#define PPC_PCFGR1525_ODR	(PPC.unPCFGR1525.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1525_PDE	(*(volatile uint_io8_t*)0xB7201F98)  /*@bfbba@*/
#define PPC_PCFGR1525_PUE	(*(volatile uint_io8_t*)0xB7201F99)  /*@bfbba@*/
#define PPC_PCFGR1525_PIL	(PPC.unPCFGR1525.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1525_PIE	(*(volatile uint_io8_t*)0xB7201F9C)  /*@bfbba@*/
#define PPC_PCFGR1525_PID	(*(volatile uint_io8_t*)0xB7201F9D)  /*@bfbba@*/
#define PPC_PCFGR1525_POD	(*(volatile uint_io8_t*)0xB7201F9E)  /*@bfbba@*/
#define PPC_PCFGR1525_POE	(*(volatile uint_io8_t*)0xB7201F9F)  /*@bfbba@*/

#define PPC_PCFGR1526	(PPC.unPCFGR1526.u16Register)  /*@rg@*/
#define PPC_PCFGR1526_POF	(PPC.unPCFGR1526.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1526_NFE	(*(volatile uint_io8_t*)0xB7201FA5)  /*@bfbba@*/
#define PPC_PCFGR1526_ODR	(PPC.unPCFGR1526.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1526_PDE	(*(volatile uint_io8_t*)0xB7201FA8)  /*@bfbba@*/
#define PPC_PCFGR1526_PUE	(*(volatile uint_io8_t*)0xB7201FA9)  /*@bfbba@*/
#define PPC_PCFGR1526_PIL	(PPC.unPCFGR1526.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1526_PIE	(*(volatile uint_io8_t*)0xB7201FAC)  /*@bfbba@*/
#define PPC_PCFGR1526_PID	(*(volatile uint_io8_t*)0xB7201FAD)  /*@bfbba@*/
#define PPC_PCFGR1526_POD	(*(volatile uint_io8_t*)0xB7201FAE)  /*@bfbba@*/
#define PPC_PCFGR1526_POE	(*(volatile uint_io8_t*)0xB7201FAF)  /*@bfbba@*/

#define PPC_PCFGR1527	(PPC.unPCFGR1527.u16Register)  /*@rg@*/
#define PPC_PCFGR1527_POF	(PPC.unPCFGR1527.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1527_NFE	(*(volatile uint_io8_t*)0xB7201FB5)  /*@bfbba@*/
#define PPC_PCFGR1527_ODR	(PPC.unPCFGR1527.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1527_PDE	(*(volatile uint_io8_t*)0xB7201FB8)  /*@bfbba@*/
#define PPC_PCFGR1527_PUE	(*(volatile uint_io8_t*)0xB7201FB9)  /*@bfbba@*/
#define PPC_PCFGR1527_PIL	(PPC.unPCFGR1527.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1527_PIE	(*(volatile uint_io8_t*)0xB7201FBC)  /*@bfbba@*/
#define PPC_PCFGR1527_PID	(*(volatile uint_io8_t*)0xB7201FBD)  /*@bfbba@*/
#define PPC_PCFGR1527_POD	(*(volatile uint_io8_t*)0xB7201FBE)  /*@bfbba@*/
#define PPC_PCFGR1527_POE	(*(volatile uint_io8_t*)0xB7201FBF)  /*@bfbba@*/

#define PPC_PCFGR1528	(PPC.unPCFGR1528.u16Register)  /*@rg@*/
#define PPC_PCFGR1528_POF	(PPC.unPCFGR1528.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1528_NFE	(*(volatile uint_io8_t*)0xB7201FC5)  /*@bfbba@*/
#define PPC_PCFGR1528_ODR	(PPC.unPCFGR1528.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1528_PDE	(*(volatile uint_io8_t*)0xB7201FC8)  /*@bfbba@*/
#define PPC_PCFGR1528_PUE	(*(volatile uint_io8_t*)0xB7201FC9)  /*@bfbba@*/
#define PPC_PCFGR1528_PIL	(PPC.unPCFGR1528.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1528_PIE	(*(volatile uint_io8_t*)0xB7201FCC)  /*@bfbba@*/
#define PPC_PCFGR1528_PID	(*(volatile uint_io8_t*)0xB7201FCD)  /*@bfbba@*/
#define PPC_PCFGR1528_POD	(*(volatile uint_io8_t*)0xB7201FCE)  /*@bfbba@*/
#define PPC_PCFGR1528_POE	(*(volatile uint_io8_t*)0xB7201FCF)  /*@bfbba@*/

#define PPC_PCFGR1529	(PPC.unPCFGR1529.u16Register)  /*@rg@*/
#define PPC_PCFGR1529_POF	(PPC.unPCFGR1529.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1529_NFE	(*(volatile uint_io8_t*)0xB7201FD5)  /*@bfbba@*/
#define PPC_PCFGR1529_ODR	(PPC.unPCFGR1529.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1529_PDE	(*(volatile uint_io8_t*)0xB7201FD8)  /*@bfbba@*/
#define PPC_PCFGR1529_PUE	(*(volatile uint_io8_t*)0xB7201FD9)  /*@bfbba@*/
#define PPC_PCFGR1529_PIL	(PPC.unPCFGR1529.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1529_PIE	(*(volatile uint_io8_t*)0xB7201FDC)  /*@bfbba@*/
#define PPC_PCFGR1529_PID	(*(volatile uint_io8_t*)0xB7201FDD)  /*@bfbba@*/
#define PPC_PCFGR1529_POD	(*(volatile uint_io8_t*)0xB7201FDE)  /*@bfbba@*/
#define PPC_PCFGR1529_POE	(*(volatile uint_io8_t*)0xB7201FDF)  /*@bfbba@*/

#define PPC_PCFGR1530	(PPC.unPCFGR1530.u16Register)  /*@rg@*/
#define PPC_PCFGR1530_POF	(PPC.unPCFGR1530.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1530_NFE	(*(volatile uint_io8_t*)0xB7201FE5)  /*@bfbba@*/
#define PPC_PCFGR1530_ODR	(PPC.unPCFGR1530.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1530_PDE	(*(volatile uint_io8_t*)0xB7201FE8)  /*@bfbba@*/
#define PPC_PCFGR1530_PUE	(*(volatile uint_io8_t*)0xB7201FE9)  /*@bfbba@*/
#define PPC_PCFGR1530_PIL	(PPC.unPCFGR1530.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1530_PIE	(*(volatile uint_io8_t*)0xB7201FEC)  /*@bfbba@*/
#define PPC_PCFGR1530_PID	(*(volatile uint_io8_t*)0xB7201FED)  /*@bfbba@*/
#define PPC_PCFGR1530_POD	(*(volatile uint_io8_t*)0xB7201FEE)  /*@bfbba@*/
#define PPC_PCFGR1530_POE	(*(volatile uint_io8_t*)0xB7201FEF)  /*@bfbba@*/

#define PPC_PCFGR1531	(PPC.unPCFGR1531.u16Register)  /*@rg@*/
#define PPC_PCFGR1531_POF	(PPC.unPCFGR1531.stcField.u3POF)  /*@bf@*/
#define PPC_PCFGR1531_NFE	(*(volatile uint_io8_t*)0xB7201FF5)  /*@bfbba@*/
#define PPC_PCFGR1531_ODR	(PPC.unPCFGR1531.stcField.u2ODR)  /*@bf@*/
#define PPC_PCFGR1531_PDE	(*(volatile uint_io8_t*)0xB7201FF8)  /*@bfbba@*/
#define PPC_PCFGR1531_PUE	(*(volatile uint_io8_t*)0xB7201FF9)  /*@bfbba@*/
#define PPC_PCFGR1531_PIL	(PPC.unPCFGR1531.stcField.u2PIL)  /*@bf@*/
#define PPC_PCFGR1531_PIE	(*(volatile uint_io8_t*)0xB7201FFC)  /*@bfbba@*/
#define PPC_PCFGR1531_PID	(*(volatile uint_io8_t*)0xB7201FFD)  /*@bfbba@*/
#define PPC_PCFGR1531_POD	(*(volatile uint_io8_t*)0xB7201FFE)  /*@bfbba@*/
#define PPC_PCFGR1531_POE	(*(volatile uint_io8_t*)0xB7201FFF)  /*@bfbba@*/

typedef struct stc_ppc_pcfgrn_field{
    uint_io16_t		u3POF:3;
    uint_io16_t		:2;
    uint_io16_t		u1NFE:1;
    uint_io16_t		u2ODR:2;
    uint_io16_t		u1PDE:1;
    uint_io16_t		u1PUE:1;
    uint_io16_t		u2PIL:2;
    uint_io16_t		u1PIE:1;
    uint_io16_t		u1PID:1;
    uint_io16_t		u1POD:1;
    uint_io16_t		u1POE:1;
}stc_ppc_pcfgrn_field_t;

typedef union un_ppc_pcfgrn{
    uint_io16_t		u16Register;
    stc_ppc_pcfgrn_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_ppc_pcfgrn_t;

/* KEYCDR */
#define PPC_KEYCDR	(PPC.unKEYCDR.u32Register)  /*@rg@*/
#define PPC_KEYCDR_RADR	(PPC.unKEYCDR.stcField.u15RADR)  /*@bf@*/
#define PPC_KEYCDR_SIZE	(PPC.unKEYCDR.stcField.u2SIZE)  /*@bf@*/
#define PPC_KEYCDR_KEY	(PPC.unKEYCDR.stcField.u2KEY)  /*@bf@*/

typedef struct stc_ppc_keycdr_field{
    uint_io32_t		u15RADR:15;
    uint_io32_t		:13;
    uint_io32_t		u2SIZE:2;
    uint_io32_t		u2KEY:2;
}stc_ppc_keycdr_field_t;

typedef union un_ppc_keycdr{
    uint_io32_t		u32Register;
    stc_ppc_keycdr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ppc_keycdr_t;


typedef struct stc_ppc{
    un_ppc_pcfgrn_t	unPCFGR000;	/* 0x00000000 */
    un_ppc_pcfgrn_t	unPCFGR001;	/* 0x00000002 */
    un_ppc_pcfgrn_t	unPCFGR002;	/* 0x00000004 */
    un_ppc_pcfgrn_t	unPCFGR003;	/* 0x00000006 */
    un_ppc_pcfgrn_t	unPCFGR004;	/* 0x00000008 */
    un_ppc_pcfgrn_t	unPCFGR005;	/* 0x0000000A */
    un_ppc_pcfgrn_t	unPCFGR006;	/* 0x0000000C */
    un_ppc_pcfgrn_t	unPCFGR007;	/* 0x0000000E */
    un_ppc_pcfgrn_t	unPCFGR008;	/* 0x00000010 */
    un_ppc_pcfgrn_t	unPCFGR009;	/* 0x00000012 */
    un_ppc_pcfgrn_t	unPCFGR010;	/* 0x00000014 */
    un_ppc_pcfgrn_t	unPCFGR011;	/* 0x00000016 */
    un_ppc_pcfgrn_t	unPCFGR012;	/* 0x00000018 */
    un_ppc_pcfgrn_t	unPCFGR013;	/* 0x0000001A */
    un_ppc_pcfgrn_t	unPCFGR014;	/* 0x0000001C */
    un_ppc_pcfgrn_t	unPCFGR015;	/* 0x0000001E */
    un_ppc_pcfgrn_t	unPCFGR016;	/* 0x00000020 */
    un_ppc_pcfgrn_t	unPCFGR017;	/* 0x00000022 */
    un_ppc_pcfgrn_t	unPCFGR018;	/* 0x00000024 */
    un_ppc_pcfgrn_t	unPCFGR019;	/* 0x00000026 */
    un_ppc_pcfgrn_t	unPCFGR020;	/* 0x00000028 */
    un_ppc_pcfgrn_t	unPCFGR021;	/* 0x0000002A */
    un_ppc_pcfgrn_t	unPCFGR022;	/* 0x0000002C */
    un_ppc_pcfgrn_t	unPCFGR023;	/* 0x0000002E */
    un_ppc_pcfgrn_t	unPCFGR024;	/* 0x00000030 */
    un_ppc_pcfgrn_t	unPCFGR025;	/* 0x00000032 */
    un_ppc_pcfgrn_t	unPCFGR026;	/* 0x00000034 */
    un_ppc_pcfgrn_t	unPCFGR027;	/* 0x00000036 */
    un_ppc_pcfgrn_t	unPCFGR028;	/* 0x00000038 */
    un_ppc_pcfgrn_t	unPCFGR029;	/* 0x0000003A */
    un_ppc_pcfgrn_t	unPCFGR030;	/* 0x0000003C */
    un_ppc_pcfgrn_t	unPCFGR031;	/* 0x0000003E */
    un_ppc_pcfgrn_t	unPCFGR100;	/* 0x00000040 */
    un_ppc_pcfgrn_t	unPCFGR101;	/* 0x00000042 */
    un_ppc_pcfgrn_t	unPCFGR102;	/* 0x00000044 */
    un_ppc_pcfgrn_t	unPCFGR103;	/* 0x00000046 */
    un_ppc_pcfgrn_t	unPCFGR104;	/* 0x00000048 */
    un_ppc_pcfgrn_t	unPCFGR105;	/* 0x0000004A */
    un_ppc_pcfgrn_t	unPCFGR106;	/* 0x0000004C */
    un_ppc_pcfgrn_t	unPCFGR107;	/* 0x0000004E */
    un_ppc_pcfgrn_t	unPCFGR108;	/* 0x00000050 */
    un_ppc_pcfgrn_t	unPCFGR109;	/* 0x00000052 */
    un_ppc_pcfgrn_t	unPCFGR110;	/* 0x00000054 */
    un_ppc_pcfgrn_t	unPCFGR111;	/* 0x00000056 */
    un_ppc_pcfgrn_t	unPCFGR112;	/* 0x00000058 */
    un_ppc_pcfgrn_t	unPCFGR113;	/* 0x0000005A */
    un_ppc_pcfgrn_t	unPCFGR114;	/* 0x0000005C */
    un_ppc_pcfgrn_t	unPCFGR115;	/* 0x0000005E */
    un_ppc_pcfgrn_t	unPCFGR116;	/* 0x00000060 */
    un_ppc_pcfgrn_t	unPCFGR117;	/* 0x00000062 */
    un_ppc_pcfgrn_t	unPCFGR118;	/* 0x00000064 */
    un_ppc_pcfgrn_t	unPCFGR119;	/* 0x00000066 */
    un_ppc_pcfgrn_t	unPCFGR120;	/* 0x00000068 */
    un_ppc_pcfgrn_t	unPCFGR121;	/* 0x0000006A */
    un_ppc_pcfgrn_t	unPCFGR122;	/* 0x0000006C */
    un_ppc_pcfgrn_t	unPCFGR123;	/* 0x0000006E */
    un_ppc_pcfgrn_t	unPCFGR124;	/* 0x00000070 */
    un_ppc_pcfgrn_t	unPCFGR125;	/* 0x00000072 */
    un_ppc_pcfgrn_t	unPCFGR126;	/* 0x00000074 */
    un_ppc_pcfgrn_t	unPCFGR127;	/* 0x00000076 */
    un_ppc_pcfgrn_t	unPCFGR128;	/* 0x00000078 */
    un_ppc_pcfgrn_t	unPCFGR129;	/* 0x0000007A */
    un_ppc_pcfgrn_t	unPCFGR130;	/* 0x0000007C */
    un_ppc_pcfgrn_t	unPCFGR131;	/* 0x0000007E */
    un_ppc_pcfgrn_t	unPCFGR200;	/* 0x00000080 */
    un_ppc_pcfgrn_t	unPCFGR201;	/* 0x00000082 */
    un_ppc_pcfgrn_t	unPCFGR202;	/* 0x00000084 */
    un_ppc_pcfgrn_t	unPCFGR203;	/* 0x00000086 */
    un_ppc_pcfgrn_t	unPCFGR204;	/* 0x00000088 */
    un_ppc_pcfgrn_t	unPCFGR205;	/* 0x0000008A */
    un_ppc_pcfgrn_t	unPCFGR206;	/* 0x0000008C */
    un_ppc_pcfgrn_t	unPCFGR207;	/* 0x0000008E */
    un_ppc_pcfgrn_t	unPCFGR208;	/* 0x00000090 */
    un_ppc_pcfgrn_t	unPCFGR209;	/* 0x00000092 */
    un_ppc_pcfgrn_t	unPCFGR210;	/* 0x00000094 */
    un_ppc_pcfgrn_t	unPCFGR211;	/* 0x00000096 */
    un_ppc_pcfgrn_t	unPCFGR212;	/* 0x00000098 */
    un_ppc_pcfgrn_t	unPCFGR213;	/* 0x0000009A */
    un_ppc_pcfgrn_t	unPCFGR214;	/* 0x0000009C */
    un_ppc_pcfgrn_t	unPCFGR215;	/* 0x0000009E */
    un_ppc_pcfgrn_t	unPCFGR216;	/* 0x000000A0 */
    un_ppc_pcfgrn_t	unPCFGR217;	/* 0x000000A2 */
    un_ppc_pcfgrn_t	unPCFGR218;	/* 0x000000A4 */
    un_ppc_pcfgrn_t	unPCFGR219;	/* 0x000000A6 */
    un_ppc_pcfgrn_t	unPCFGR220;	/* 0x000000A8 */
    un_ppc_pcfgrn_t	unPCFGR221;	/* 0x000000AA */
    un_ppc_pcfgrn_t	unPCFGR222;	/* 0x000000AC */
    un_ppc_pcfgrn_t	unPCFGR223;	/* 0x000000AE */
    un_ppc_pcfgrn_t	unPCFGR224;	/* 0x000000B0 */
    un_ppc_pcfgrn_t	unPCFGR225;	/* 0x000000B2 */
    un_ppc_pcfgrn_t	unPCFGR226;	/* 0x000000B4 */
    un_ppc_pcfgrn_t	unPCFGR227;	/* 0x000000B6 */
    un_ppc_pcfgrn_t	unPCFGR228;	/* 0x000000B8 */
    un_ppc_pcfgrn_t	unPCFGR229;	/* 0x000000BA */
    un_ppc_pcfgrn_t	unPCFGR230;	/* 0x000000BC */
    un_ppc_pcfgrn_t	unPCFGR231;	/* 0x000000BE */
    un_ppc_pcfgrn_t	unPCFGR300;	/* 0x000000C0 */
    un_ppc_pcfgrn_t	unPCFGR301;	/* 0x000000C2 */
    un_ppc_pcfgrn_t	unPCFGR302;	/* 0x000000C4 */
    un_ppc_pcfgrn_t	unPCFGR303;	/* 0x000000C6 */
    un_ppc_pcfgrn_t	unPCFGR304;	/* 0x000000C8 */
    un_ppc_pcfgrn_t	unPCFGR305;	/* 0x000000CA */
    un_ppc_pcfgrn_t	unPCFGR306;	/* 0x000000CC */
    un_ppc_pcfgrn_t	unPCFGR307;	/* 0x000000CE */
    un_ppc_pcfgrn_t	unPCFGR308;	/* 0x000000D0 */
    un_ppc_pcfgrn_t	unPCFGR309;	/* 0x000000D2 */
    un_ppc_pcfgrn_t	unPCFGR310;	/* 0x000000D4 */
    un_ppc_pcfgrn_t	unPCFGR311;	/* 0x000000D6 */
    un_ppc_pcfgrn_t	unPCFGR312;	/* 0x000000D8 */
    un_ppc_pcfgrn_t	unPCFGR313;	/* 0x000000DA */
    un_ppc_pcfgrn_t	unPCFGR314;	/* 0x000000DC */
    un_ppc_pcfgrn_t	unPCFGR315;	/* 0x000000DE */
    un_ppc_pcfgrn_t	unPCFGR316;	/* 0x000000E0 */
    un_ppc_pcfgrn_t	unPCFGR317;	/* 0x000000E2 */
    un_ppc_pcfgrn_t	unPCFGR318;	/* 0x000000E4 */
    un_ppc_pcfgrn_t	unPCFGR319;	/* 0x000000E6 */
    un_ppc_pcfgrn_t	unPCFGR320;	/* 0x000000E8 */
    un_ppc_pcfgrn_t	unPCFGR321;	/* 0x000000EA */
    un_ppc_pcfgrn_t	unPCFGR322;	/* 0x000000EC */
    un_ppc_pcfgrn_t	unPCFGR323;	/* 0x000000EE */
    un_ppc_pcfgrn_t	unPCFGR324;	/* 0x000000F0 */
    un_ppc_pcfgrn_t	unPCFGR325;	/* 0x000000F2 */
    un_ppc_pcfgrn_t	unPCFGR326;	/* 0x000000F4 */
    un_ppc_pcfgrn_t	unPCFGR327;	/* 0x000000F6 */
    un_ppc_pcfgrn_t	unPCFGR328;	/* 0x000000F8 */
    un_ppc_pcfgrn_t	unPCFGR329;	/* 0x000000FA */
    un_ppc_pcfgrn_t	unPCFGR330;	/* 0x000000FC */
    un_ppc_pcfgrn_t	unPCFGR331;	/* 0x000000FE */
    un_ppc_pcfgrn_t	unPCFGR400;	/* 0x00000100 */
    un_ppc_pcfgrn_t	unPCFGR401;	/* 0x00000102 */
    un_ppc_pcfgrn_t	unPCFGR402;	/* 0x00000104 */
    un_ppc_pcfgrn_t	unPCFGR403;	/* 0x00000106 */
    un_ppc_pcfgrn_t	unPCFGR404;	/* 0x00000108 */
    un_ppc_pcfgrn_t	unPCFGR405;	/* 0x0000010A */
    un_ppc_pcfgrn_t	unPCFGR406;	/* 0x0000010C */
    un_ppc_pcfgrn_t	unPCFGR407;	/* 0x0000010E */
    un_ppc_pcfgrn_t	unPCFGR408;	/* 0x00000110 */
    un_ppc_pcfgrn_t	unPCFGR409;	/* 0x00000112 */
    un_ppc_pcfgrn_t	unPCFGR410;	/* 0x00000114 */
    un_ppc_pcfgrn_t	unPCFGR411;	/* 0x00000116 */
    un_ppc_pcfgrn_t	unPCFGR412;	/* 0x00000118 */
    un_ppc_pcfgrn_t	unPCFGR413;	/* 0x0000011A */
    un_ppc_pcfgrn_t	unPCFGR414;	/* 0x0000011C */
    un_ppc_pcfgrn_t	unPCFGR415;	/* 0x0000011E */
    un_ppc_pcfgrn_t	unPCFGR416;	/* 0x00000120 */
    un_ppc_pcfgrn_t	unPCFGR417;	/* 0x00000122 */
    un_ppc_pcfgrn_t	unPCFGR418;	/* 0x00000124 */
    un_ppc_pcfgrn_t	unPCFGR419;	/* 0x00000126 */
    un_ppc_pcfgrn_t	unPCFGR420;	/* 0x00000128 */
    un_ppc_pcfgrn_t	unPCFGR421;	/* 0x0000012A */
    un_ppc_pcfgrn_t	unPCFGR422;	/* 0x0000012C */
    un_ppc_pcfgrn_t	unPCFGR423;	/* 0x0000012E */
    un_ppc_pcfgrn_t	unPCFGR424;	/* 0x00000130 */
    un_ppc_pcfgrn_t	unPCFGR425;	/* 0x00000132 */
    un_ppc_pcfgrn_t	unPCFGR426;	/* 0x00000134 */
    un_ppc_pcfgrn_t	unPCFGR427;	/* 0x00000136 */
    un_ppc_pcfgrn_t	unPCFGR428;	/* 0x00000138 */
    un_ppc_pcfgrn_t	unPCFGR429;	/* 0x0000013A */
    un_ppc_pcfgrn_t	unPCFGR430;	/* 0x0000013C */
    un_ppc_pcfgrn_t	unPCFGR431;	/* 0x0000013E */
    un_ppc_pcfgrn_t	unPCFGR500;	/* 0x00000140 */
    un_ppc_pcfgrn_t	unPCFGR501;	/* 0x00000142 */
    un_ppc_pcfgrn_t	unPCFGR502;	/* 0x00000144 */
    un_ppc_pcfgrn_t	unPCFGR503;	/* 0x00000146 */
    un_ppc_pcfgrn_t	unPCFGR504;	/* 0x00000148 */
    un_ppc_pcfgrn_t	unPCFGR505;	/* 0x0000014A */
    un_ppc_pcfgrn_t	unPCFGR506;	/* 0x0000014C */
    un_ppc_pcfgrn_t	unPCFGR507;	/* 0x0000014E */
    un_ppc_pcfgrn_t	unPCFGR508;	/* 0x00000150 */
    un_ppc_pcfgrn_t	unPCFGR509;	/* 0x00000152 */
    un_ppc_pcfgrn_t	unPCFGR510;	/* 0x00000154 */
    un_ppc_pcfgrn_t	unPCFGR511;	/* 0x00000156 */
    un_ppc_pcfgrn_t	unPCFGR512;	/* 0x00000158 */
    un_ppc_pcfgrn_t	unPCFGR513;	/* 0x0000015A */
    un_ppc_pcfgrn_t	unPCFGR514;	/* 0x0000015C */
    un_ppc_pcfgrn_t	unPCFGR515;	/* 0x0000015E */
    un_ppc_pcfgrn_t	unPCFGR516;	/* 0x00000160 */
    un_ppc_pcfgrn_t	unPCFGR517;	/* 0x00000162 */
    un_ppc_pcfgrn_t	unPCFGR518;	/* 0x00000164 */
    un_ppc_pcfgrn_t	unPCFGR519;	/* 0x00000166 */
    un_ppc_pcfgrn_t	unPCFGR520;	/* 0x00000168 */
    un_ppc_pcfgrn_t	unPCFGR521;	/* 0x0000016A */
    un_ppc_pcfgrn_t	unPCFGR522;	/* 0x0000016C */
    un_ppc_pcfgrn_t	unPCFGR523;	/* 0x0000016E */
    un_ppc_pcfgrn_t	unPCFGR524;	/* 0x00000170 */
    un_ppc_pcfgrn_t	unPCFGR525;	/* 0x00000172 */
    un_ppc_pcfgrn_t	unPCFGR526;	/* 0x00000174 */
    un_ppc_pcfgrn_t	unPCFGR527;	/* 0x00000176 */
    un_ppc_pcfgrn_t	unPCFGR528;	/* 0x00000178 */
    un_ppc_pcfgrn_t	unPCFGR529;	/* 0x0000017A */
    un_ppc_pcfgrn_t	unPCFGR530;	/* 0x0000017C */
    un_ppc_pcfgrn_t	unPCFGR531;	/* 0x0000017E */
    un_ppc_pcfgrn_t	unPCFGR600;	/* 0x00000180 */
    un_ppc_pcfgrn_t	unPCFGR601;	/* 0x00000182 */
    un_ppc_pcfgrn_t	unPCFGR602;	/* 0x00000184 */
    un_ppc_pcfgrn_t	unPCFGR603;	/* 0x00000186 */
    un_ppc_pcfgrn_t	unPCFGR604;	/* 0x00000188 */
    un_ppc_pcfgrn_t	unPCFGR605;	/* 0x0000018A */
    un_ppc_pcfgrn_t	unPCFGR606;	/* 0x0000018C */
    un_ppc_pcfgrn_t	unPCFGR607;	/* 0x0000018E */
    un_ppc_pcfgrn_t	unPCFGR608;	/* 0x00000190 */
    un_ppc_pcfgrn_t	unPCFGR609;	/* 0x00000192 */
    un_ppc_pcfgrn_t	unPCFGR610;	/* 0x00000194 */
    un_ppc_pcfgrn_t	unPCFGR611;	/* 0x00000196 */
    un_ppc_pcfgrn_t	unPCFGR612;	/* 0x00000198 */
    un_ppc_pcfgrn_t	unPCFGR613;	/* 0x0000019A */
    un_ppc_pcfgrn_t	unPCFGR614;	/* 0x0000019C */
    un_ppc_pcfgrn_t	unPCFGR615;	/* 0x0000019E */
    un_ppc_pcfgrn_t	unPCFGR616;	/* 0x000001A0 */
    un_ppc_pcfgrn_t	unPCFGR617;	/* 0x000001A2 */
    un_ppc_pcfgrn_t	unPCFGR618;	/* 0x000001A4 */
    un_ppc_pcfgrn_t	unPCFGR619;	/* 0x000001A6 */
    un_ppc_pcfgrn_t	unPCFGR620;	/* 0x000001A8 */
    un_ppc_pcfgrn_t	unPCFGR621;	/* 0x000001AA */
    un_ppc_pcfgrn_t	unPCFGR622;	/* 0x000001AC */
    un_ppc_pcfgrn_t	unPCFGR623;	/* 0x000001AE */
    un_ppc_pcfgrn_t	unPCFGR624;	/* 0x000001B0 */
    un_ppc_pcfgrn_t	unPCFGR625;	/* 0x000001B2 */
    un_ppc_pcfgrn_t	unPCFGR626;	/* 0x000001B4 */
    un_ppc_pcfgrn_t	unPCFGR627;	/* 0x000001B6 */
    un_ppc_pcfgrn_t	unPCFGR628;	/* 0x000001B8 */
    un_ppc_pcfgrn_t	unPCFGR629;	/* 0x000001BA */
    un_ppc_pcfgrn_t	unPCFGR630;	/* 0x000001BC */
    un_ppc_pcfgrn_t	unPCFGR631;	/* 0x000001BE */
    un_ppc_pcfgrn_t	unPCFGR700;	/* 0x000001C0 */
    un_ppc_pcfgrn_t	unPCFGR701;	/* 0x000001C2 */
    un_ppc_pcfgrn_t	unPCFGR702;	/* 0x000001C4 */
    un_ppc_pcfgrn_t	unPCFGR703;	/* 0x000001C6 */
    un_ppc_pcfgrn_t	unPCFGR704;	/* 0x000001C8 */
    un_ppc_pcfgrn_t	unPCFGR705;	/* 0x000001CA */
    un_ppc_pcfgrn_t	unPCFGR706;	/* 0x000001CC */
    un_ppc_pcfgrn_t	unPCFGR707;	/* 0x000001CE */
    un_ppc_pcfgrn_t	unPCFGR708;	/* 0x000001D0 */
    un_ppc_pcfgrn_t	unPCFGR709;	/* 0x000001D2 */
    un_ppc_pcfgrn_t	unPCFGR710;	/* 0x000001D4 */
    un_ppc_pcfgrn_t	unPCFGR711;	/* 0x000001D6 */
    un_ppc_pcfgrn_t	unPCFGR712;	/* 0x000001D8 */
    un_ppc_pcfgrn_t	unPCFGR713;	/* 0x000001DA */
    un_ppc_pcfgrn_t	unPCFGR714;	/* 0x000001DC */
    un_ppc_pcfgrn_t	unPCFGR715;	/* 0x000001DE */
    un_ppc_pcfgrn_t	unPCFGR716;	/* 0x000001E0 */
    un_ppc_pcfgrn_t	unPCFGR717;	/* 0x000001E2 */
    un_ppc_pcfgrn_t	unPCFGR718;	/* 0x000001E4 */
    un_ppc_pcfgrn_t	unPCFGR719;	/* 0x000001E6 */
    un_ppc_pcfgrn_t	unPCFGR720;	/* 0x000001E8 */
    un_ppc_pcfgrn_t	unPCFGR721;	/* 0x000001EA */
    un_ppc_pcfgrn_t	unPCFGR722;	/* 0x000001EC */
    un_ppc_pcfgrn_t	unPCFGR723;	/* 0x000001EE */
    un_ppc_pcfgrn_t	unPCFGR724;	/* 0x000001F0 */
    un_ppc_pcfgrn_t	unPCFGR725;	/* 0x000001F2 */
    un_ppc_pcfgrn_t	unPCFGR726;	/* 0x000001F4 */
    un_ppc_pcfgrn_t	unPCFGR727;	/* 0x000001F6 */
    un_ppc_pcfgrn_t	unPCFGR728;	/* 0x000001F8 */
    un_ppc_pcfgrn_t	unPCFGR729;	/* 0x000001FA */
    un_ppc_pcfgrn_t	unPCFGR730;	/* 0x000001FC */
    un_ppc_pcfgrn_t	unPCFGR731;	/* 0x000001FE */
    un_ppc_pcfgrn_t	unPCFGR800;	/* 0x00000200 */
    un_ppc_pcfgrn_t	unPCFGR801;	/* 0x00000202 */
    un_ppc_pcfgrn_t	unPCFGR802;	/* 0x00000204 */
    un_ppc_pcfgrn_t	unPCFGR803;	/* 0x00000206 */
    un_ppc_pcfgrn_t	unPCFGR804;	/* 0x00000208 */
    un_ppc_pcfgrn_t	unPCFGR805;	/* 0x0000020A */
    un_ppc_pcfgrn_t	unPCFGR806;	/* 0x0000020C */
    un_ppc_pcfgrn_t	unPCFGR807;	/* 0x0000020E */
    un_ppc_pcfgrn_t	unPCFGR808;	/* 0x00000210 */
    un_ppc_pcfgrn_t	unPCFGR809;	/* 0x00000212 */
    un_ppc_pcfgrn_t	unPCFGR810;	/* 0x00000214 */
    un_ppc_pcfgrn_t	unPCFGR811;	/* 0x00000216 */
    un_ppc_pcfgrn_t	unPCFGR812;	/* 0x00000218 */
    un_ppc_pcfgrn_t	unPCFGR813;	/* 0x0000021A */
    un_ppc_pcfgrn_t	unPCFGR814;	/* 0x0000021C */
    un_ppc_pcfgrn_t	unPCFGR815;	/* 0x0000021E */
    un_ppc_pcfgrn_t	unPCFGR816;	/* 0x00000220 */
    un_ppc_pcfgrn_t	unPCFGR817;	/* 0x00000222 */
    un_ppc_pcfgrn_t	unPCFGR818;	/* 0x00000224 */
    un_ppc_pcfgrn_t	unPCFGR819;	/* 0x00000226 */
    un_ppc_pcfgrn_t	unPCFGR820;	/* 0x00000228 */
    un_ppc_pcfgrn_t	unPCFGR821;	/* 0x0000022A */
    un_ppc_pcfgrn_t	unPCFGR822;	/* 0x0000022C */
    un_ppc_pcfgrn_t	unPCFGR823;	/* 0x0000022E */
    un_ppc_pcfgrn_t	unPCFGR824;	/* 0x00000230 */
    un_ppc_pcfgrn_t	unPCFGR825;	/* 0x00000232 */
    un_ppc_pcfgrn_t	unPCFGR826;	/* 0x00000234 */
    un_ppc_pcfgrn_t	unPCFGR827;	/* 0x00000236 */
    un_ppc_pcfgrn_t	unPCFGR828;	/* 0x00000238 */
    un_ppc_pcfgrn_t	unPCFGR829;	/* 0x0000023A */
    un_ppc_pcfgrn_t	unPCFGR830;	/* 0x0000023C */
    un_ppc_pcfgrn_t	unPCFGR831;	/* 0x0000023E */
    un_ppc_pcfgrn_t	unPCFGR900;	/* 0x00000240 */
    un_ppc_pcfgrn_t	unPCFGR901;	/* 0x00000242 */
    un_ppc_pcfgrn_t	unPCFGR902;	/* 0x00000244 */
    un_ppc_pcfgrn_t	unPCFGR903;	/* 0x00000246 */
    un_ppc_pcfgrn_t	unPCFGR904;	/* 0x00000248 */
    un_ppc_pcfgrn_t	unPCFGR905;	/* 0x0000024A */
    un_ppc_pcfgrn_t	unPCFGR906;	/* 0x0000024C */
    un_ppc_pcfgrn_t	unPCFGR907;	/* 0x0000024E */
    un_ppc_pcfgrn_t	unPCFGR908;	/* 0x00000250 */
    un_ppc_pcfgrn_t	unPCFGR909;	/* 0x00000252 */
    un_ppc_pcfgrn_t	unPCFGR910;	/* 0x00000254 */
    un_ppc_pcfgrn_t	unPCFGR911;	/* 0x00000256 */
    un_ppc_pcfgrn_t	unPCFGR912;	/* 0x00000258 */
    un_ppc_pcfgrn_t	unPCFGR913;	/* 0x0000025A */
    un_ppc_pcfgrn_t	unPCFGR914;	/* 0x0000025C */
    un_ppc_pcfgrn_t	unPCFGR915;	/* 0x0000025E */
    un_ppc_pcfgrn_t	unPCFGR916;	/* 0x00000260 */
    un_ppc_pcfgrn_t	unPCFGR917;	/* 0x00000262 */
    un_ppc_pcfgrn_t	unPCFGR918;	/* 0x00000264 */
    un_ppc_pcfgrn_t	unPCFGR919;	/* 0x00000266 */
    un_ppc_pcfgrn_t	unPCFGR920;	/* 0x00000268 */
    un_ppc_pcfgrn_t	unPCFGR921;	/* 0x0000026A */
    un_ppc_pcfgrn_t	unPCFGR922;	/* 0x0000026C */
    un_ppc_pcfgrn_t	unPCFGR923;	/* 0x0000026E */
    un_ppc_pcfgrn_t	unPCFGR924;	/* 0x00000270 */
    un_ppc_pcfgrn_t	unPCFGR925;	/* 0x00000272 */
    un_ppc_pcfgrn_t	unPCFGR926;	/* 0x00000274 */
    un_ppc_pcfgrn_t	unPCFGR927;	/* 0x00000276 */
    un_ppc_pcfgrn_t	unPCFGR928;	/* 0x00000278 */
    un_ppc_pcfgrn_t	unPCFGR929;	/* 0x0000027A */
    un_ppc_pcfgrn_t	unPCFGR930;	/* 0x0000027C */
    un_ppc_pcfgrn_t	unPCFGR931;	/* 0x0000027E */
    un_ppc_pcfgrn_t	unPCFGR1000;	/* 0x00000280 */
    un_ppc_pcfgrn_t	unPCFGR1001;	/* 0x00000282 */
    un_ppc_pcfgrn_t	unPCFGR1002;	/* 0x00000284 */
    un_ppc_pcfgrn_t	unPCFGR1003;	/* 0x00000286 */
    un_ppc_pcfgrn_t	unPCFGR1004;	/* 0x00000288 */
    un_ppc_pcfgrn_t	unPCFGR1005;	/* 0x0000028A */
    un_ppc_pcfgrn_t	unPCFGR1006;	/* 0x0000028C */
    un_ppc_pcfgrn_t	unPCFGR1007;	/* 0x0000028E */
    un_ppc_pcfgrn_t	unPCFGR1008;	/* 0x00000290 */
    un_ppc_pcfgrn_t	unPCFGR1009;	/* 0x00000292 */
    un_ppc_pcfgrn_t	unPCFGR1010;	/* 0x00000294 */
    un_ppc_pcfgrn_t	unPCFGR1011;	/* 0x00000296 */
    un_ppc_pcfgrn_t	unPCFGR1012;	/* 0x00000298 */
    un_ppc_pcfgrn_t	unPCFGR1013;	/* 0x0000029A */
    un_ppc_pcfgrn_t	unPCFGR1014;	/* 0x0000029C */
    un_ppc_pcfgrn_t	unPCFGR1015;	/* 0x0000029E */
    un_ppc_pcfgrn_t	unPCFGR1016;	/* 0x000002A0 */
    un_ppc_pcfgrn_t	unPCFGR1017;	/* 0x000002A2 */
    un_ppc_pcfgrn_t	unPCFGR1018;	/* 0x000002A4 */
    un_ppc_pcfgrn_t	unPCFGR1019;	/* 0x000002A6 */
    un_ppc_pcfgrn_t	unPCFGR1020;	/* 0x000002A8 */
    un_ppc_pcfgrn_t	unPCFGR1021;	/* 0x000002AA */
    un_ppc_pcfgrn_t	unPCFGR1022;	/* 0x000002AC */
    un_ppc_pcfgrn_t	unPCFGR1023;	/* 0x000002AE */
    un_ppc_pcfgrn_t	unPCFGR1024;	/* 0x000002B0 */
    un_ppc_pcfgrn_t	unPCFGR1025;	/* 0x000002B2 */
    un_ppc_pcfgrn_t	unPCFGR1026;	/* 0x000002B4 */
    un_ppc_pcfgrn_t	unPCFGR1027;	/* 0x000002B6 */
    un_ppc_pcfgrn_t	unPCFGR1028;	/* 0x000002B8 */
    un_ppc_pcfgrn_t	unPCFGR1029;	/* 0x000002BA */
    un_ppc_pcfgrn_t	unPCFGR1030;	/* 0x000002BC */
    un_ppc_pcfgrn_t	unPCFGR1031;	/* 0x000002BE */
    un_ppc_pcfgrn_t	unPCFGR1100;	/* 0x000002C0 */
    un_ppc_pcfgrn_t	unPCFGR1101;	/* 0x000002C2 */
    un_ppc_pcfgrn_t	unPCFGR1102;	/* 0x000002C4 */
    un_ppc_pcfgrn_t	unPCFGR1103;	/* 0x000002C6 */
    un_ppc_pcfgrn_t	unPCFGR1104;	/* 0x000002C8 */
    un_ppc_pcfgrn_t	unPCFGR1105;	/* 0x000002CA */
    un_ppc_pcfgrn_t	unPCFGR1106;	/* 0x000002CC */
    un_ppc_pcfgrn_t	unPCFGR1107;	/* 0x000002CE */
    un_ppc_pcfgrn_t	unPCFGR1108;	/* 0x000002D0 */
    un_ppc_pcfgrn_t	unPCFGR1109;	/* 0x000002D2 */
    un_ppc_pcfgrn_t	unPCFGR1110;	/* 0x000002D4 */
    un_ppc_pcfgrn_t	unPCFGR1111;	/* 0x000002D6 */
    un_ppc_pcfgrn_t	unPCFGR1112;	/* 0x000002D8 */
    un_ppc_pcfgrn_t	unPCFGR1113;	/* 0x000002DA */
    un_ppc_pcfgrn_t	unPCFGR1114;	/* 0x000002DC */
    un_ppc_pcfgrn_t	unPCFGR1115;	/* 0x000002DE */
    un_ppc_pcfgrn_t	unPCFGR1116;	/* 0x000002E0 */
    un_ppc_pcfgrn_t	unPCFGR1117;	/* 0x000002E2 */
    un_ppc_pcfgrn_t	unPCFGR1118;	/* 0x000002E4 */
    un_ppc_pcfgrn_t	unPCFGR1119;	/* 0x000002E6 */
    un_ppc_pcfgrn_t	unPCFGR1120;	/* 0x000002E8 */
    un_ppc_pcfgrn_t	unPCFGR1121;	/* 0x000002EA */
    un_ppc_pcfgrn_t	unPCFGR1122;	/* 0x000002EC */
    un_ppc_pcfgrn_t	unPCFGR1123;	/* 0x000002EE */
    un_ppc_pcfgrn_t	unPCFGR1124;	/* 0x000002F0 */
    un_ppc_pcfgrn_t	unPCFGR1125;	/* 0x000002F2 */
    un_ppc_pcfgrn_t	unPCFGR1126;	/* 0x000002F4 */
    un_ppc_pcfgrn_t	unPCFGR1127;	/* 0x000002F6 */
    un_ppc_pcfgrn_t	unPCFGR1128;	/* 0x000002F8 */
    un_ppc_pcfgrn_t	unPCFGR1129;	/* 0x000002FA */
    un_ppc_pcfgrn_t	unPCFGR1130;	/* 0x000002FC */
    un_ppc_pcfgrn_t	unPCFGR1131;	/* 0x000002FE */
    un_ppc_pcfgrn_t	unPCFGR1200;	/* 0x00000300 */
    un_ppc_pcfgrn_t	unPCFGR1201;	/* 0x00000302 */
    un_ppc_pcfgrn_t	unPCFGR1202;	/* 0x00000304 */
    un_ppc_pcfgrn_t	unPCFGR1203;	/* 0x00000306 */
    un_ppc_pcfgrn_t	unPCFGR1204;	/* 0x00000308 */
    un_ppc_pcfgrn_t	unPCFGR1205;	/* 0x0000030A */
    un_ppc_pcfgrn_t	unPCFGR1206;	/* 0x0000030C */
    un_ppc_pcfgrn_t	unPCFGR1207;	/* 0x0000030E */
    un_ppc_pcfgrn_t	unPCFGR1208;	/* 0x00000310 */
    un_ppc_pcfgrn_t	unPCFGR1209;	/* 0x00000312 */
    un_ppc_pcfgrn_t	unPCFGR1210;	/* 0x00000314 */
    un_ppc_pcfgrn_t	unPCFGR1211;	/* 0x00000316 */
    un_ppc_pcfgrn_t	unPCFGR1212;	/* 0x00000318 */
    un_ppc_pcfgrn_t	unPCFGR1213;	/* 0x0000031A */
    un_ppc_pcfgrn_t	unPCFGR1214;	/* 0x0000031C */
    un_ppc_pcfgrn_t	unPCFGR1215;	/* 0x0000031E */
    un_ppc_pcfgrn_t	unPCFGR1216;	/* 0x00000320 */
    un_ppc_pcfgrn_t	unPCFGR1217;	/* 0x00000322 */
    un_ppc_pcfgrn_t	unPCFGR1218;	/* 0x00000324 */
    un_ppc_pcfgrn_t	unPCFGR1219;	/* 0x00000326 */
    un_ppc_pcfgrn_t	unPCFGR1220;	/* 0x00000328 */
    un_ppc_pcfgrn_t	unPCFGR1221;	/* 0x0000032A */
    un_ppc_pcfgrn_t	unPCFGR1222;	/* 0x0000032C */
    un_ppc_pcfgrn_t	unPCFGR1223;	/* 0x0000032E */
    un_ppc_pcfgrn_t	unPCFGR1224;	/* 0x00000330 */
    un_ppc_pcfgrn_t	unPCFGR1225;	/* 0x00000332 */
    un_ppc_pcfgrn_t	unPCFGR1226;	/* 0x00000334 */
    un_ppc_pcfgrn_t	unPCFGR1227;	/* 0x00000336 */
    un_ppc_pcfgrn_t	unPCFGR1228;	/* 0x00000338 */
    un_ppc_pcfgrn_t	unPCFGR1229;	/* 0x0000033A */
    un_ppc_pcfgrn_t	unPCFGR1230;	/* 0x0000033C */
    un_ppc_pcfgrn_t	unPCFGR1231;	/* 0x0000033E */
    un_ppc_pcfgrn_t	unPCFGR1300;	/* 0x00000340 */
    un_ppc_pcfgrn_t	unPCFGR1301;	/* 0x00000342 */
    un_ppc_pcfgrn_t	unPCFGR1302;	/* 0x00000344 */
    un_ppc_pcfgrn_t	unPCFGR1303;	/* 0x00000346 */
    un_ppc_pcfgrn_t	unPCFGR1304;	/* 0x00000348 */
    un_ppc_pcfgrn_t	unPCFGR1305;	/* 0x0000034A */
    un_ppc_pcfgrn_t	unPCFGR1306;	/* 0x0000034C */
    un_ppc_pcfgrn_t	unPCFGR1307;	/* 0x0000034E */
    un_ppc_pcfgrn_t	unPCFGR1308;	/* 0x00000350 */
    un_ppc_pcfgrn_t	unPCFGR1309;	/* 0x00000352 */
    un_ppc_pcfgrn_t	unPCFGR1310;	/* 0x00000354 */
    un_ppc_pcfgrn_t	unPCFGR1311;	/* 0x00000356 */
    un_ppc_pcfgrn_t	unPCFGR1312;	/* 0x00000358 */
    un_ppc_pcfgrn_t	unPCFGR1313;	/* 0x0000035A */
    un_ppc_pcfgrn_t	unPCFGR1314;	/* 0x0000035C */
    un_ppc_pcfgrn_t	unPCFGR1315;	/* 0x0000035E */
    un_ppc_pcfgrn_t	unPCFGR1316;	/* 0x00000360 */
    un_ppc_pcfgrn_t	unPCFGR1317;	/* 0x00000362 */
    un_ppc_pcfgrn_t	unPCFGR1318;	/* 0x00000364 */
    un_ppc_pcfgrn_t	unPCFGR1319;	/* 0x00000366 */
    un_ppc_pcfgrn_t	unPCFGR1320;	/* 0x00000368 */
    un_ppc_pcfgrn_t	unPCFGR1321;	/* 0x0000036A */
    un_ppc_pcfgrn_t	unPCFGR1322;	/* 0x0000036C */
    un_ppc_pcfgrn_t	unPCFGR1323;	/* 0x0000036E */
    un_ppc_pcfgrn_t	unPCFGR1324;	/* 0x00000370 */
    un_ppc_pcfgrn_t	unPCFGR1325;	/* 0x00000372 */
    un_ppc_pcfgrn_t	unPCFGR1326;	/* 0x00000374 */
    un_ppc_pcfgrn_t	unPCFGR1327;	/* 0x00000376 */
    un_ppc_pcfgrn_t	unPCFGR1328;	/* 0x00000378 */
    un_ppc_pcfgrn_t	unPCFGR1329;	/* 0x0000037A */
    un_ppc_pcfgrn_t	unPCFGR1330;	/* 0x0000037C */
    un_ppc_pcfgrn_t	unPCFGR1331;	/* 0x0000037E */
    un_ppc_pcfgrn_t	unPCFGR1400;	/* 0x00000380 */
    un_ppc_pcfgrn_t	unPCFGR1401;	/* 0x00000382 */
    un_ppc_pcfgrn_t	unPCFGR1402;	/* 0x00000384 */
    un_ppc_pcfgrn_t	unPCFGR1403;	/* 0x00000386 */
    un_ppc_pcfgrn_t	unPCFGR1404;	/* 0x00000388 */
    un_ppc_pcfgrn_t	unPCFGR1405;	/* 0x0000038A */
    un_ppc_pcfgrn_t	unPCFGR1406;	/* 0x0000038C */
    un_ppc_pcfgrn_t	unPCFGR1407;	/* 0x0000038E */
    un_ppc_pcfgrn_t	unPCFGR1408;	/* 0x00000390 */
    un_ppc_pcfgrn_t	unPCFGR1409;	/* 0x00000392 */
    un_ppc_pcfgrn_t	unPCFGR1410;	/* 0x00000394 */
    un_ppc_pcfgrn_t	unPCFGR1411;	/* 0x00000396 */
    un_ppc_pcfgrn_t	unPCFGR1412;	/* 0x00000398 */
    un_ppc_pcfgrn_t	unPCFGR1413;	/* 0x0000039A */
    un_ppc_pcfgrn_t	unPCFGR1414;	/* 0x0000039C */
    un_ppc_pcfgrn_t	unPCFGR1415;	/* 0x0000039E */
    un_ppc_pcfgrn_t	unPCFGR1416;	/* 0x000003A0 */
    un_ppc_pcfgrn_t	unPCFGR1417;	/* 0x000003A2 */
    un_ppc_pcfgrn_t	unPCFGR1418;	/* 0x000003A4 */
    un_ppc_pcfgrn_t	unPCFGR1419;	/* 0x000003A6 */
    un_ppc_pcfgrn_t	unPCFGR1420;	/* 0x000003A8 */
    un_ppc_pcfgrn_t	unPCFGR1421;	/* 0x000003AA */
    un_ppc_pcfgrn_t	unPCFGR1422;	/* 0x000003AC */
    un_ppc_pcfgrn_t	unPCFGR1423;	/* 0x000003AE */
    un_ppc_pcfgrn_t	unPCFGR1424;	/* 0x000003B0 */
    un_ppc_pcfgrn_t	unPCFGR1425;	/* 0x000003B2 */
    un_ppc_pcfgrn_t	unPCFGR1426;	/* 0x000003B4 */
    un_ppc_pcfgrn_t	unPCFGR1427;	/* 0x000003B6 */
    un_ppc_pcfgrn_t	unPCFGR1428;	/* 0x000003B8 */
    un_ppc_pcfgrn_t	unPCFGR1429;	/* 0x000003BA */
    un_ppc_pcfgrn_t	unPCFGR1430;	/* 0x000003BC */
    un_ppc_pcfgrn_t	unPCFGR1431;	/* 0x000003BE */
    un_ppc_pcfgrn_t	unPCFGR1500;	/* 0x000003C0 */
    un_ppc_pcfgrn_t	unPCFGR1501;	/* 0x000003C2 */
    un_ppc_pcfgrn_t	unPCFGR1502;	/* 0x000003C4 */
    un_ppc_pcfgrn_t	unPCFGR1503;	/* 0x000003C6 */
    un_ppc_pcfgrn_t	unPCFGR1504;	/* 0x000003C8 */
    un_ppc_pcfgrn_t	unPCFGR1505;	/* 0x000003CA */
    un_ppc_pcfgrn_t	unPCFGR1506;	/* 0x000003CC */
    un_ppc_pcfgrn_t	unPCFGR1507;	/* 0x000003CE */
    un_ppc_pcfgrn_t	unPCFGR1508;	/* 0x000003D0 */
    un_ppc_pcfgrn_t	unPCFGR1509;	/* 0x000003D2 */
    un_ppc_pcfgrn_t	unPCFGR1510;	/* 0x000003D4 */
    un_ppc_pcfgrn_t	unPCFGR1511;	/* 0x000003D6 */
    un_ppc_pcfgrn_t	unPCFGR1512;	/* 0x000003D8 */
    un_ppc_pcfgrn_t	unPCFGR1513;	/* 0x000003DA */
    un_ppc_pcfgrn_t	unPCFGR1514;	/* 0x000003DC */
    un_ppc_pcfgrn_t	unPCFGR1515;	/* 0x000003DE */
    un_ppc_pcfgrn_t	unPCFGR1516;	/* 0x000003E0 */
    un_ppc_pcfgrn_t	unPCFGR1517;	/* 0x000003E2 */
    un_ppc_pcfgrn_t	unPCFGR1518;	/* 0x000003E4 */
    un_ppc_pcfgrn_t	unPCFGR1519;	/* 0x000003E6 */
    un_ppc_pcfgrn_t	unPCFGR1520;	/* 0x000003E8 */
    un_ppc_pcfgrn_t	unPCFGR1521;	/* 0x000003EA */
    un_ppc_pcfgrn_t	unPCFGR1522;	/* 0x000003EC */
    un_ppc_pcfgrn_t	unPCFGR1523;	/* 0x000003EE */
    un_ppc_pcfgrn_t	unPCFGR1524;	/* 0x000003F0 */
    un_ppc_pcfgrn_t	unPCFGR1525;	/* 0x000003F2 */
    un_ppc_pcfgrn_t	unPCFGR1526;	/* 0x000003F4 */
    un_ppc_pcfgrn_t	unPCFGR1527;	/* 0x000003F6 */
    un_ppc_pcfgrn_t	unPCFGR1528;	/* 0x000003F8 */
    un_ppc_pcfgrn_t	unPCFGR1529;	/* 0x000003FA */
    un_ppc_pcfgrn_t	unPCFGR1530;	/* 0x000003FC */
    un_ppc_pcfgrn_t	unPCFGR1531;	/* 0x000003FE */
    un_ppc_keycdr_t	unKEYCDR;	/* 0x00000400 */
    uint_io8_t	au8Reserved0[31740];	/* 0x00000404 */
}stc_ppc_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_ppc_t	stcPPC;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


#endif /* __S6J3200_PPC_H */
