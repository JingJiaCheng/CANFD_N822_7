/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_FRT_H
#define __S6J3200_FRT_H

#include "s6j3200io_basetypes.h"

/* FRT[00-11] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define FRT00	stcFRT[0]
#define FRT01	stcFRT[1]
#define FRT02	stcFRT[2]
#define FRT03	stcFRT[3]
#define FRT04	stcFRT[4]
#define FRT05	stcFRT[5]
#define FRT06	stcFRT[6]
#define FRT07	stcFRT[7]
#define FRT08	stcFRT[8]
#define FRT09	stcFRT[9]
#define FRT10	stcFRT[10]
#define FRT11	stcFRT[11]
#else /* __IO_DEFINE */
#define FRT00	(*((volatile stc_frtn_t*)0xB4820000))
#define FRT01	(*((volatile stc_frtn_t*)0xB4820400))
#define FRT02	(*((volatile stc_frtn_t*)0xB4820800))
#define FRT03	(*((volatile stc_frtn_t*)0xB4820C00))
#define FRT04	(*((volatile stc_frtn_t*)0xB4821000))
#define FRT05	(*((volatile stc_frtn_t*)0xB4821400))
#define FRT06	(*((volatile stc_frtn_t*)0xB4821800))
#define FRT07	(*((volatile stc_frtn_t*)0xB4821C00))
#define FRT08	(*((volatile stc_frtn_t*)0xB48A0000))
#define FRT09	(*((volatile stc_frtn_t*)0xB48A0400))
#define FRT10	(*((volatile stc_frtn_t*)0xB48A0800))
#define FRT11	(*((volatile stc_frtn_t*)0xB48A0C00))
#endif /* __IO_DEFINE */

/* CPCLRB */
#define FRT00_CPCLRB	(FRT00.unCPCLRB.u32Register)  /*@rg@*/
#define FRT00_CPCLR	(FRT00_CPCLRB)  /*@rg2@*/
#define FRT00_CPCLRB_CL	FRT00_CPCLRB  /*@bfrg@*/
#define FRT00_CPCLR_CL	FRT00_CPCLRB_CL  /*@bf2@*/

#define FRT01_CPCLRB	(FRT01.unCPCLRB.u32Register)  /*@rg@*/
#define FRT01_CPCLR	(FRT01_CPCLRB)  /*@rg2@*/
#define FRT01_CPCLRB_CL	FRT01_CPCLRB  /*@bfrg@*/
#define FRT01_CPCLR_CL	FRT01_CPCLRB_CL  /*@bf2@*/

#define FRT02_CPCLRB	(FRT02.unCPCLRB.u32Register)  /*@rg@*/
#define FRT02_CPCLR	(FRT02_CPCLRB)  /*@rg2@*/
#define FRT02_CPCLRB_CL	FRT02_CPCLRB  /*@bfrg@*/
#define FRT02_CPCLR_CL	FRT02_CPCLRB_CL  /*@bf2@*/

#define FRT03_CPCLRB	(FRT03.unCPCLRB.u32Register)  /*@rg@*/
#define FRT03_CPCLR	(FRT03_CPCLRB)  /*@rg2@*/
#define FRT03_CPCLRB_CL	FRT03_CPCLRB  /*@bfrg@*/
#define FRT03_CPCLR_CL	FRT03_CPCLRB_CL  /*@bf2@*/

#define FRT04_CPCLRB	(FRT04.unCPCLRB.u32Register)  /*@rg@*/
#define FRT04_CPCLR	(FRT04_CPCLRB)  /*@rg2@*/
#define FRT04_CPCLRB_CL	FRT04_CPCLRB  /*@bfrg@*/
#define FRT04_CPCLR_CL	FRT04_CPCLRB_CL  /*@bf2@*/

#define FRT05_CPCLRB	(FRT05.unCPCLRB.u32Register)  /*@rg@*/
#define FRT05_CPCLR	(FRT05_CPCLRB)  /*@rg2@*/
#define FRT05_CPCLRB_CL	FRT05_CPCLRB  /*@bfrg@*/
#define FRT05_CPCLR_CL	FRT05_CPCLRB_CL  /*@bf2@*/

#define FRT06_CPCLRB	(FRT06.unCPCLRB.u32Register)  /*@rg@*/
#define FRT06_CPCLR	(FRT06_CPCLRB)  /*@rg2@*/
#define FRT06_CPCLRB_CL	FRT06_CPCLRB  /*@bfrg@*/
#define FRT06_CPCLR_CL	FRT06_CPCLRB_CL  /*@bf2@*/

#define FRT07_CPCLRB	(FRT07.unCPCLRB.u32Register)  /*@rg@*/
#define FRT07_CPCLR	(FRT07_CPCLRB)  /*@rg2@*/
#define FRT07_CPCLRB_CL	FRT07_CPCLRB  /*@bfrg@*/
#define FRT07_CPCLR_CL	FRT07_CPCLRB_CL  /*@bf2@*/

#define FRT08_CPCLRB	(FRT08.unCPCLRB.u32Register)  /*@rg@*/
#define FRT08_CPCLR	(FRT08_CPCLRB)  /*@rg2@*/
#define FRT08_CPCLRB_CL	FRT08_CPCLRB  /*@bfrg@*/
#define FRT08_CPCLR_CL	FRT08_CPCLRB_CL  /*@bf2@*/

#define FRT09_CPCLRB	(FRT09.unCPCLRB.u32Register)  /*@rg@*/
#define FRT09_CPCLR	(FRT09_CPCLRB)  /*@rg2@*/
#define FRT09_CPCLRB_CL	FRT09_CPCLRB  /*@bfrg@*/
#define FRT09_CPCLR_CL	FRT09_CPCLRB_CL  /*@bf2@*/

#define FRT10_CPCLRB	(FRT10.unCPCLRB.u32Register)  /*@rg@*/
#define FRT10_CPCLR	(FRT10_CPCLRB)  /*@rg2@*/
#define FRT10_CPCLRB_CL	FRT10_CPCLRB  /*@bfrg@*/
#define FRT10_CPCLR_CL	FRT10_CPCLRB_CL  /*@bf2@*/

#define FRT11_CPCLRB	(FRT11.unCPCLRB.u32Register)  /*@rg@*/
#define FRT11_CPCLR	(FRT11_CPCLRB)  /*@rg2@*/
#define FRT11_CPCLRB_CL	FRT11_CPCLRB  /*@bfrg@*/
#define FRT11_CPCLR_CL	FRT11_CPCLRB_CL  /*@bf2@*/

typedef union un_frtn_cpclrb{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_frtn_cpclrb_t;

/* TCDT */
#define FRT00_TCDT	(FRT00.unTCDT.u32Register)  /*@rg@*/
#define FRT00_TCDT_T	FRT00_TCDT  /*@bfrg@*/

#define FRT01_TCDT	(FRT01.unTCDT.u32Register)  /*@rg@*/
#define FRT01_TCDT_T	FRT01_TCDT  /*@bfrg@*/

#define FRT02_TCDT	(FRT02.unTCDT.u32Register)  /*@rg@*/
#define FRT02_TCDT_T	FRT02_TCDT  /*@bfrg@*/

#define FRT03_TCDT	(FRT03.unTCDT.u32Register)  /*@rg@*/
#define FRT03_TCDT_T	FRT03_TCDT  /*@bfrg@*/

#define FRT04_TCDT	(FRT04.unTCDT.u32Register)  /*@rg@*/
#define FRT04_TCDT_T	FRT04_TCDT  /*@bfrg@*/

#define FRT05_TCDT	(FRT05.unTCDT.u32Register)  /*@rg@*/
#define FRT05_TCDT_T	FRT05_TCDT  /*@bfrg@*/

#define FRT06_TCDT	(FRT06.unTCDT.u32Register)  /*@rg@*/
#define FRT06_TCDT_T	FRT06_TCDT  /*@bfrg@*/

#define FRT07_TCDT	(FRT07.unTCDT.u32Register)  /*@rg@*/
#define FRT07_TCDT_T	FRT07_TCDT  /*@bfrg@*/

#define FRT08_TCDT	(FRT08.unTCDT.u32Register)  /*@rg@*/
#define FRT08_TCDT_T	FRT08_TCDT  /*@bfrg@*/

#define FRT09_TCDT	(FRT09.unTCDT.u32Register)  /*@rg@*/
#define FRT09_TCDT_T	FRT09_TCDT  /*@bfrg@*/

#define FRT10_TCDT	(FRT10.unTCDT.u32Register)  /*@rg@*/
#define FRT10_TCDT_T	FRT10_TCDT  /*@bfrg@*/

#define FRT11_TCDT	(FRT11.unTCDT.u32Register)  /*@rg@*/
#define FRT11_TCDT_T	FRT11_TCDT  /*@bfrg@*/

typedef union un_frtn_tcdt{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_frtn_tcdt_t;

/* TCCS */
#define FRT00_TCCS	(FRT00.unTCCS.u32Register)  /*@rg@*/
#define FRT00_TCCS_CLK	(FRT00.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT00_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7900044)  /*@bfbba@*/
#define FRT00_TCCS_MODE	(*(volatile uint_io8_t*)0xB7900045)  /*@bfbba@*/
#define FRT00_TCCS_STOP	(*(volatile uint_io8_t*)0xB7900046)  /*@bfbba@*/
#define FRT00_TCCS_BFE	(*(volatile uint_io8_t*)0xB7900047)  /*@bfbba@*/
#define FRT00_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7900048)  /*@bfbba@*/
#define FRT00_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7900049)  /*@bfbba@*/
#define FRT00_TCCS_MSI	(FRT00.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT00_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790004D)  /*@bfbba@*/
#define FRT00_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790004E)  /*@bfbba@*/
#define FRT00_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790004F)  /*@bfbba@*/

#define FRT01_TCCS	(FRT01.unTCCS.u32Register)  /*@rg@*/
#define FRT01_TCCS_CLK	(FRT01.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT01_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7902044)  /*@bfbba@*/
#define FRT01_TCCS_MODE	(*(volatile uint_io8_t*)0xB7902045)  /*@bfbba@*/
#define FRT01_TCCS_STOP	(*(volatile uint_io8_t*)0xB7902046)  /*@bfbba@*/
#define FRT01_TCCS_BFE	(*(volatile uint_io8_t*)0xB7902047)  /*@bfbba@*/
#define FRT01_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7902048)  /*@bfbba@*/
#define FRT01_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7902049)  /*@bfbba@*/
#define FRT01_TCCS_MSI	(FRT01.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT01_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790204D)  /*@bfbba@*/
#define FRT01_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790204E)  /*@bfbba@*/
#define FRT01_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790204F)  /*@bfbba@*/

#define FRT02_TCCS	(FRT02.unTCCS.u32Register)  /*@rg@*/
#define FRT02_TCCS_CLK	(FRT02.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT02_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7904044)  /*@bfbba@*/
#define FRT02_TCCS_MODE	(*(volatile uint_io8_t*)0xB7904045)  /*@bfbba@*/
#define FRT02_TCCS_STOP	(*(volatile uint_io8_t*)0xB7904046)  /*@bfbba@*/
#define FRT02_TCCS_BFE	(*(volatile uint_io8_t*)0xB7904047)  /*@bfbba@*/
#define FRT02_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7904048)  /*@bfbba@*/
#define FRT02_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7904049)  /*@bfbba@*/
#define FRT02_TCCS_MSI	(FRT02.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT02_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790404D)  /*@bfbba@*/
#define FRT02_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790404E)  /*@bfbba@*/
#define FRT02_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790404F)  /*@bfbba@*/

#define FRT03_TCCS	(FRT03.unTCCS.u32Register)  /*@rg@*/
#define FRT03_TCCS_CLK	(FRT03.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT03_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7906044)  /*@bfbba@*/
#define FRT03_TCCS_MODE	(*(volatile uint_io8_t*)0xB7906045)  /*@bfbba@*/
#define FRT03_TCCS_STOP	(*(volatile uint_io8_t*)0xB7906046)  /*@bfbba@*/
#define FRT03_TCCS_BFE	(*(volatile uint_io8_t*)0xB7906047)  /*@bfbba@*/
#define FRT03_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7906048)  /*@bfbba@*/
#define FRT03_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7906049)  /*@bfbba@*/
#define FRT03_TCCS_MSI	(FRT03.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT03_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790604D)  /*@bfbba@*/
#define FRT03_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790604E)  /*@bfbba@*/
#define FRT03_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790604F)  /*@bfbba@*/

#define FRT04_TCCS	(FRT04.unTCCS.u32Register)  /*@rg@*/
#define FRT04_TCCS_CLK	(FRT04.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT04_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7908044)  /*@bfbba@*/
#define FRT04_TCCS_MODE	(*(volatile uint_io8_t*)0xB7908045)  /*@bfbba@*/
#define FRT04_TCCS_STOP	(*(volatile uint_io8_t*)0xB7908046)  /*@bfbba@*/
#define FRT04_TCCS_BFE	(*(volatile uint_io8_t*)0xB7908047)  /*@bfbba@*/
#define FRT04_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7908048)  /*@bfbba@*/
#define FRT04_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7908049)  /*@bfbba@*/
#define FRT04_TCCS_MSI	(FRT04.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT04_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790804D)  /*@bfbba@*/
#define FRT04_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790804E)  /*@bfbba@*/
#define FRT04_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790804F)  /*@bfbba@*/

#define FRT05_TCCS	(FRT05.unTCCS.u32Register)  /*@rg@*/
#define FRT05_TCCS_CLK	(FRT05.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT05_TCCS_SCLR	(*(volatile uint_io8_t*)0xB790A044)  /*@bfbba@*/
#define FRT05_TCCS_MODE	(*(volatile uint_io8_t*)0xB790A045)  /*@bfbba@*/
#define FRT05_TCCS_STOP	(*(volatile uint_io8_t*)0xB790A046)  /*@bfbba@*/
#define FRT05_TCCS_BFE	(*(volatile uint_io8_t*)0xB790A047)  /*@bfbba@*/
#define FRT05_TCCS_ICRE	(*(volatile uint_io8_t*)0xB790A048)  /*@bfbba@*/
#define FRT05_TCCS_ICLR	(*(volatile uint_io8_t*)0xB790A049)  /*@bfbba@*/
#define FRT05_TCCS_MSI	(FRT05.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT05_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790A04D)  /*@bfbba@*/
#define FRT05_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790A04E)  /*@bfbba@*/
#define FRT05_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790A04F)  /*@bfbba@*/

#define FRT06_TCCS	(FRT06.unTCCS.u32Register)  /*@rg@*/
#define FRT06_TCCS_CLK	(FRT06.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT06_TCCS_SCLR	(*(volatile uint_io8_t*)0xB790C044)  /*@bfbba@*/
#define FRT06_TCCS_MODE	(*(volatile uint_io8_t*)0xB790C045)  /*@bfbba@*/
#define FRT06_TCCS_STOP	(*(volatile uint_io8_t*)0xB790C046)  /*@bfbba@*/
#define FRT06_TCCS_BFE	(*(volatile uint_io8_t*)0xB790C047)  /*@bfbba@*/
#define FRT06_TCCS_ICRE	(*(volatile uint_io8_t*)0xB790C048)  /*@bfbba@*/
#define FRT06_TCCS_ICLR	(*(volatile uint_io8_t*)0xB790C049)  /*@bfbba@*/
#define FRT06_TCCS_MSI	(FRT06.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT06_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790C04D)  /*@bfbba@*/
#define FRT06_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790C04E)  /*@bfbba@*/
#define FRT06_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790C04F)  /*@bfbba@*/

#define FRT07_TCCS	(FRT07.unTCCS.u32Register)  /*@rg@*/
#define FRT07_TCCS_CLK	(FRT07.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT07_TCCS_SCLR	(*(volatile uint_io8_t*)0xB790E044)  /*@bfbba@*/
#define FRT07_TCCS_MODE	(*(volatile uint_io8_t*)0xB790E045)  /*@bfbba@*/
#define FRT07_TCCS_STOP	(*(volatile uint_io8_t*)0xB790E046)  /*@bfbba@*/
#define FRT07_TCCS_BFE	(*(volatile uint_io8_t*)0xB790E047)  /*@bfbba@*/
#define FRT07_TCCS_ICRE	(*(volatile uint_io8_t*)0xB790E048)  /*@bfbba@*/
#define FRT07_TCCS_ICLR	(*(volatile uint_io8_t*)0xB790E049)  /*@bfbba@*/
#define FRT07_TCCS_MSI	(FRT07.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT07_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB790E04D)  /*@bfbba@*/
#define FRT07_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB790E04E)  /*@bfbba@*/
#define FRT07_TCCS_ECKE	(*(volatile uint_io8_t*)0xB790E04F)  /*@bfbba@*/

#define FRT08_TCCS	(FRT08.unTCCS.u32Register)  /*@rg@*/
#define FRT08_TCCS_CLK	(FRT08.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT08_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7D00044)  /*@bfbba@*/
#define FRT08_TCCS_MODE	(*(volatile uint_io8_t*)0xB7D00045)  /*@bfbba@*/
#define FRT08_TCCS_STOP	(*(volatile uint_io8_t*)0xB7D00046)  /*@bfbba@*/
#define FRT08_TCCS_BFE	(*(volatile uint_io8_t*)0xB7D00047)  /*@bfbba@*/
#define FRT08_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7D00048)  /*@bfbba@*/
#define FRT08_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7D00049)  /*@bfbba@*/
#define FRT08_TCCS_MSI	(FRT08.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT08_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB7D0004D)  /*@bfbba@*/
#define FRT08_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB7D0004E)  /*@bfbba@*/
#define FRT08_TCCS_ECKE	(*(volatile uint_io8_t*)0xB7D0004F)  /*@bfbba@*/

#define FRT09_TCCS	(FRT09.unTCCS.u32Register)  /*@rg@*/
#define FRT09_TCCS_CLK	(FRT09.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT09_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7D02044)  /*@bfbba@*/
#define FRT09_TCCS_MODE	(*(volatile uint_io8_t*)0xB7D02045)  /*@bfbba@*/
#define FRT09_TCCS_STOP	(*(volatile uint_io8_t*)0xB7D02046)  /*@bfbba@*/
#define FRT09_TCCS_BFE	(*(volatile uint_io8_t*)0xB7D02047)  /*@bfbba@*/
#define FRT09_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7D02048)  /*@bfbba@*/
#define FRT09_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7D02049)  /*@bfbba@*/
#define FRT09_TCCS_MSI	(FRT09.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT09_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB7D0204D)  /*@bfbba@*/
#define FRT09_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB7D0204E)  /*@bfbba@*/
#define FRT09_TCCS_ECKE	(*(volatile uint_io8_t*)0xB7D0204F)  /*@bfbba@*/

#define FRT10_TCCS	(FRT10.unTCCS.u32Register)  /*@rg@*/
#define FRT10_TCCS_CLK	(FRT10.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT10_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7D04044)  /*@bfbba@*/
#define FRT10_TCCS_MODE	(*(volatile uint_io8_t*)0xB7D04045)  /*@bfbba@*/
#define FRT10_TCCS_STOP	(*(volatile uint_io8_t*)0xB7D04046)  /*@bfbba@*/
#define FRT10_TCCS_BFE	(*(volatile uint_io8_t*)0xB7D04047)  /*@bfbba@*/
#define FRT10_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7D04048)  /*@bfbba@*/
#define FRT10_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7D04049)  /*@bfbba@*/
#define FRT10_TCCS_MSI	(FRT10.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT10_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB7D0404D)  /*@bfbba@*/
#define FRT10_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB7D0404E)  /*@bfbba@*/
#define FRT10_TCCS_ECKE	(*(volatile uint_io8_t*)0xB7D0404F)  /*@bfbba@*/

#define FRT11_TCCS	(FRT11.unTCCS.u32Register)  /*@rg@*/
#define FRT11_TCCS_CLK	(FRT11.unTCCS.stcField.u4CLK)  /*@bf@*/
#define FRT11_TCCS_SCLR	(*(volatile uint_io8_t*)0xB7D06044)  /*@bfbba@*/
#define FRT11_TCCS_MODE	(*(volatile uint_io8_t*)0xB7D06045)  /*@bfbba@*/
#define FRT11_TCCS_STOP	(*(volatile uint_io8_t*)0xB7D06046)  /*@bfbba@*/
#define FRT11_TCCS_BFE	(*(volatile uint_io8_t*)0xB7D06047)  /*@bfbba@*/
#define FRT11_TCCS_ICRE	(*(volatile uint_io8_t*)0xB7D06048)  /*@bfbba@*/
#define FRT11_TCCS_ICLR	(*(volatile uint_io8_t*)0xB7D06049)  /*@bfbba@*/
#define FRT11_TCCS_MSI	(FRT11.unTCCS.stcField.u3MSI)  /*@bf@*/
#define FRT11_TCCS_IRQZE	(*(volatile uint_io8_t*)0xB7D0604D)  /*@bfbba@*/
#define FRT11_TCCS_IRQZF	(*(volatile uint_io8_t*)0xB7D0604E)  /*@bfbba@*/
#define FRT11_TCCS_ECKE	(*(volatile uint_io8_t*)0xB7D0604F)  /*@bfbba@*/

typedef struct stc_frtn_tccs_field{
    uint_io32_t		u4CLK:4;
    uint_io32_t		u1SCLR:1;
    uint_io32_t		u1MODE:1;
    uint_io32_t		u1STOP:1;
    uint_io32_t		u1BFE:1;
    uint_io32_t		u1ICRE:1;
    uint_io32_t		u1ICLR:1;
    uint_io32_t		u3MSI:3;
    uint_io32_t		u1IRQZE:1;
    uint_io32_t		u1IRQZF:1;
    uint_io32_t		u1ECKE:1;
    uint_io32_t		:16;
}stc_frtn_tccs_field_t;

typedef union un_frtn_tccs{
    uint_io32_t		u32Register;
    stc_frtn_tccs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_frtn_tccs_t;

/* TECCS */
#define FRT00_TECCS	(FRT00.unTECCS.u32Register)  /*@rg@*/
#define FRT00_TECCS_MSI	(FRT00.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT00_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790006B)  /*@bfbba@*/

#define FRT01_TECCS	(FRT01.unTECCS.u32Register)  /*@rg@*/
#define FRT01_TECCS_MSI	(FRT01.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT01_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790206B)  /*@bfbba@*/

#define FRT02_TECCS	(FRT02.unTECCS.u32Register)  /*@rg@*/
#define FRT02_TECCS_MSI	(FRT02.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT02_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790406B)  /*@bfbba@*/

#define FRT03_TECCS	(FRT03.unTECCS.u32Register)  /*@rg@*/
#define FRT03_TECCS_MSI	(FRT03.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT03_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790606B)  /*@bfbba@*/

#define FRT04_TECCS	(FRT04.unTECCS.u32Register)  /*@rg@*/
#define FRT04_TECCS_MSI	(FRT04.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT04_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790806B)  /*@bfbba@*/

#define FRT05_TECCS	(FRT05.unTECCS.u32Register)  /*@rg@*/
#define FRT05_TECCS_MSI	(FRT05.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT05_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790A06B)  /*@bfbba@*/

#define FRT06_TECCS	(FRT06.unTECCS.u32Register)  /*@rg@*/
#define FRT06_TECCS_MSI	(FRT06.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT06_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790C06B)  /*@bfbba@*/

#define FRT07_TECCS	(FRT07.unTECCS.u32Register)  /*@rg@*/
#define FRT07_TECCS_MSI	(FRT07.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT07_TECCS_MODE2	(*(volatile uint_io8_t*)0xB790E06B)  /*@bfbba@*/

#define FRT08_TECCS	(FRT08.unTECCS.u32Register)  /*@rg@*/
#define FRT08_TECCS_MSI	(FRT08.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT08_TECCS_MODE2	(*(volatile uint_io8_t*)0xB7D0006B)  /*@bfbba@*/

#define FRT09_TECCS	(FRT09.unTECCS.u32Register)  /*@rg@*/
#define FRT09_TECCS_MSI	(FRT09.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT09_TECCS_MODE2	(*(volatile uint_io8_t*)0xB7D0206B)  /*@bfbba@*/

#define FRT10_TECCS	(FRT10.unTECCS.u32Register)  /*@rg@*/
#define FRT10_TECCS_MSI	(FRT10.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT10_TECCS_MODE2	(*(volatile uint_io8_t*)0xB7D0406B)  /*@bfbba@*/

#define FRT11_TECCS	(FRT11.unTECCS.u32Register)  /*@rg@*/
#define FRT11_TECCS_MSI	(FRT11.unTECCS.stcField.u3MSI)  /*@bf@*/
#define FRT11_TECCS_MODE2	(*(volatile uint_io8_t*)0xB7D0606B)  /*@bfbba@*/

typedef struct stc_frtn_teccs_field{
    uint_io32_t		:8;
    uint_io32_t		u3MSI:3;
    uint_io32_t		u1MODE2:1;
    uint_io32_t		:20;
}stc_frtn_teccs_field_t;

typedef union un_frtn_teccs{
    uint_io32_t		u32Register;
    stc_frtn_teccs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_frtn_teccs_t;

/* TCCSC */
#define FRT00_TCCSC	(FRT00.unTCCSC.u32Register)  /*@rg@*/
#define FRT00_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7900085)  /*@bfbba@*/
#define FRT00_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7900086)  /*@bfbba@*/
#define FRT00_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7900087)  /*@bfbba@*/
#define FRT00_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7900088)  /*@bfbba@*/
#define FRT00_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7900089)  /*@bfbba@*/
#define FRT00_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790008D)  /*@bfbba@*/
#define FRT00_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790008E)  /*@bfbba@*/
#define FRT00_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790008F)  /*@bfbba@*/

#define FRT01_TCCSC	(FRT01.unTCCSC.u32Register)  /*@rg@*/
#define FRT01_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7902085)  /*@bfbba@*/
#define FRT01_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7902086)  /*@bfbba@*/
#define FRT01_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7902087)  /*@bfbba@*/
#define FRT01_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7902088)  /*@bfbba@*/
#define FRT01_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7902089)  /*@bfbba@*/
#define FRT01_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790208D)  /*@bfbba@*/
#define FRT01_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790208E)  /*@bfbba@*/
#define FRT01_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790208F)  /*@bfbba@*/

#define FRT02_TCCSC	(FRT02.unTCCSC.u32Register)  /*@rg@*/
#define FRT02_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7904085)  /*@bfbba@*/
#define FRT02_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7904086)  /*@bfbba@*/
#define FRT02_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7904087)  /*@bfbba@*/
#define FRT02_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7904088)  /*@bfbba@*/
#define FRT02_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7904089)  /*@bfbba@*/
#define FRT02_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790408D)  /*@bfbba@*/
#define FRT02_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790408E)  /*@bfbba@*/
#define FRT02_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790408F)  /*@bfbba@*/

#define FRT03_TCCSC	(FRT03.unTCCSC.u32Register)  /*@rg@*/
#define FRT03_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7906085)  /*@bfbba@*/
#define FRT03_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7906086)  /*@bfbba@*/
#define FRT03_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7906087)  /*@bfbba@*/
#define FRT03_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7906088)  /*@bfbba@*/
#define FRT03_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7906089)  /*@bfbba@*/
#define FRT03_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790608D)  /*@bfbba@*/
#define FRT03_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790608E)  /*@bfbba@*/
#define FRT03_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790608F)  /*@bfbba@*/

#define FRT04_TCCSC	(FRT04.unTCCSC.u32Register)  /*@rg@*/
#define FRT04_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7908085)  /*@bfbba@*/
#define FRT04_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7908086)  /*@bfbba@*/
#define FRT04_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7908087)  /*@bfbba@*/
#define FRT04_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7908088)  /*@bfbba@*/
#define FRT04_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7908089)  /*@bfbba@*/
#define FRT04_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790808D)  /*@bfbba@*/
#define FRT04_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790808E)  /*@bfbba@*/
#define FRT04_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790808F)  /*@bfbba@*/

#define FRT05_TCCSC	(FRT05.unTCCSC.u32Register)  /*@rg@*/
#define FRT05_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB790A085)  /*@bfbba@*/
#define FRT05_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB790A086)  /*@bfbba@*/
#define FRT05_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB790A087)  /*@bfbba@*/
#define FRT05_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB790A088)  /*@bfbba@*/
#define FRT05_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB790A089)  /*@bfbba@*/
#define FRT05_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790A08D)  /*@bfbba@*/
#define FRT05_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790A08E)  /*@bfbba@*/
#define FRT05_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790A08F)  /*@bfbba@*/

#define FRT06_TCCSC	(FRT06.unTCCSC.u32Register)  /*@rg@*/
#define FRT06_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB790C085)  /*@bfbba@*/
#define FRT06_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB790C086)  /*@bfbba@*/
#define FRT06_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB790C087)  /*@bfbba@*/
#define FRT06_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB790C088)  /*@bfbba@*/
#define FRT06_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB790C089)  /*@bfbba@*/
#define FRT06_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790C08D)  /*@bfbba@*/
#define FRT06_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790C08E)  /*@bfbba@*/
#define FRT06_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790C08F)  /*@bfbba@*/

#define FRT07_TCCSC	(FRT07.unTCCSC.u32Register)  /*@rg@*/
#define FRT07_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB790E085)  /*@bfbba@*/
#define FRT07_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB790E086)  /*@bfbba@*/
#define FRT07_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB790E087)  /*@bfbba@*/
#define FRT07_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB790E088)  /*@bfbba@*/
#define FRT07_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB790E089)  /*@bfbba@*/
#define FRT07_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB790E08D)  /*@bfbba@*/
#define FRT07_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB790E08E)  /*@bfbba@*/
#define FRT07_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB790E08F)  /*@bfbba@*/

#define FRT08_TCCSC	(FRT08.unTCCSC.u32Register)  /*@rg@*/
#define FRT08_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7D00085)  /*@bfbba@*/
#define FRT08_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7D00086)  /*@bfbba@*/
#define FRT08_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7D00087)  /*@bfbba@*/
#define FRT08_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7D00088)  /*@bfbba@*/
#define FRT08_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7D00089)  /*@bfbba@*/
#define FRT08_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB7D0008D)  /*@bfbba@*/
#define FRT08_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB7D0008E)  /*@bfbba@*/
#define FRT08_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB7D0008F)  /*@bfbba@*/

#define FRT09_TCCSC	(FRT09.unTCCSC.u32Register)  /*@rg@*/
#define FRT09_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7D02085)  /*@bfbba@*/
#define FRT09_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7D02086)  /*@bfbba@*/
#define FRT09_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7D02087)  /*@bfbba@*/
#define FRT09_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7D02088)  /*@bfbba@*/
#define FRT09_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7D02089)  /*@bfbba@*/
#define FRT09_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB7D0208D)  /*@bfbba@*/
#define FRT09_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB7D0208E)  /*@bfbba@*/
#define FRT09_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB7D0208F)  /*@bfbba@*/

#define FRT10_TCCSC	(FRT10.unTCCSC.u32Register)  /*@rg@*/
#define FRT10_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7D04085)  /*@bfbba@*/
#define FRT10_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7D04086)  /*@bfbba@*/
#define FRT10_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7D04087)  /*@bfbba@*/
#define FRT10_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7D04088)  /*@bfbba@*/
#define FRT10_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7D04089)  /*@bfbba@*/
#define FRT10_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB7D0408D)  /*@bfbba@*/
#define FRT10_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB7D0408E)  /*@bfbba@*/
#define FRT10_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB7D0408F)  /*@bfbba@*/

#define FRT11_TCCSC	(FRT11.unTCCSC.u32Register)  /*@rg@*/
#define FRT11_TCCSC_MODEC	(*(volatile uint_io8_t*)0xB7D06085)  /*@bfbba@*/
#define FRT11_TCCSC_STOPC	(*(volatile uint_io8_t*)0xB7D06086)  /*@bfbba@*/
#define FRT11_TCCSC_BFEC	(*(volatile uint_io8_t*)0xB7D06087)  /*@bfbba@*/
#define FRT11_TCCSC_ICREC	(*(volatile uint_io8_t*)0xB7D06088)  /*@bfbba@*/
#define FRT11_TCCSC_ICLRC	(*(volatile uint_io8_t*)0xB7D06089)  /*@bfbba@*/
#define FRT11_TCCSC_IRQZEC	(*(volatile uint_io8_t*)0xB7D0608D)  /*@bfbba@*/
#define FRT11_TCCSC_IRQZFC	(*(volatile uint_io8_t*)0xB7D0608E)  /*@bfbba@*/
#define FRT11_TCCSC_ECKEC	(*(volatile uint_io8_t*)0xB7D0608F)  /*@bfbba@*/

typedef struct stc_frtn_tccsc_field{
    uint_io32_t		:5;
    uint_io32_t		u1MODEC:1;
    uint_io32_t		u1STOPC:1;
    uint_io32_t		u1BFEC:1;
    uint_io32_t		u1ICREC:1;
    uint_io32_t		u1ICLRC:1;
    uint_io32_t		:3;
    uint_io32_t		u1IRQZEC:1;
    uint_io32_t		u1IRQZFC:1;
    uint_io32_t		u1ECKEC:1;
    uint_io32_t		:16;
}stc_frtn_tccsc_field_t;

typedef union un_frtn_tccsc{
    uint_io32_t		u32Register;
    stc_frtn_tccsc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_frtn_tccsc_t;

/* TCCSS */
#define FRT00_TCCSS	(FRT00.unTCCSS.u32Register)  /*@rg@*/
#define FRT00_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB79000A4)  /*@bfbba@*/
#define FRT00_TCCSS_MODES	(*(volatile uint_io8_t*)0xB79000A5)  /*@bfbba@*/
#define FRT00_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB79000A6)  /*@bfbba@*/
#define FRT00_TCCSS_BFES	(*(volatile uint_io8_t*)0xB79000A7)  /*@bfbba@*/
#define FRT00_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB79000A8)  /*@bfbba@*/
#define FRT00_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB79000AD)  /*@bfbba@*/
#define FRT00_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB79000AF)  /*@bfbba@*/

#define FRT01_TCCSS	(FRT01.unTCCSS.u32Register)  /*@rg@*/
#define FRT01_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB79020A4)  /*@bfbba@*/
#define FRT01_TCCSS_MODES	(*(volatile uint_io8_t*)0xB79020A5)  /*@bfbba@*/
#define FRT01_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB79020A6)  /*@bfbba@*/
#define FRT01_TCCSS_BFES	(*(volatile uint_io8_t*)0xB79020A7)  /*@bfbba@*/
#define FRT01_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB79020A8)  /*@bfbba@*/
#define FRT01_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB79020AD)  /*@bfbba@*/
#define FRT01_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB79020AF)  /*@bfbba@*/

#define FRT02_TCCSS	(FRT02.unTCCSS.u32Register)  /*@rg@*/
#define FRT02_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB79040A4)  /*@bfbba@*/
#define FRT02_TCCSS_MODES	(*(volatile uint_io8_t*)0xB79040A5)  /*@bfbba@*/
#define FRT02_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB79040A6)  /*@bfbba@*/
#define FRT02_TCCSS_BFES	(*(volatile uint_io8_t*)0xB79040A7)  /*@bfbba@*/
#define FRT02_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB79040A8)  /*@bfbba@*/
#define FRT02_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB79040AD)  /*@bfbba@*/
#define FRT02_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB79040AF)  /*@bfbba@*/

#define FRT03_TCCSS	(FRT03.unTCCSS.u32Register)  /*@rg@*/
#define FRT03_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB79060A4)  /*@bfbba@*/
#define FRT03_TCCSS_MODES	(*(volatile uint_io8_t*)0xB79060A5)  /*@bfbba@*/
#define FRT03_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB79060A6)  /*@bfbba@*/
#define FRT03_TCCSS_BFES	(*(volatile uint_io8_t*)0xB79060A7)  /*@bfbba@*/
#define FRT03_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB79060A8)  /*@bfbba@*/
#define FRT03_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB79060AD)  /*@bfbba@*/
#define FRT03_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB79060AF)  /*@bfbba@*/

#define FRT04_TCCSS	(FRT04.unTCCSS.u32Register)  /*@rg@*/
#define FRT04_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB79080A4)  /*@bfbba@*/
#define FRT04_TCCSS_MODES	(*(volatile uint_io8_t*)0xB79080A5)  /*@bfbba@*/
#define FRT04_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB79080A6)  /*@bfbba@*/
#define FRT04_TCCSS_BFES	(*(volatile uint_io8_t*)0xB79080A7)  /*@bfbba@*/
#define FRT04_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB79080A8)  /*@bfbba@*/
#define FRT04_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB79080AD)  /*@bfbba@*/
#define FRT04_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB79080AF)  /*@bfbba@*/

#define FRT05_TCCSS	(FRT05.unTCCSS.u32Register)  /*@rg@*/
#define FRT05_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB790A0A4)  /*@bfbba@*/
#define FRT05_TCCSS_MODES	(*(volatile uint_io8_t*)0xB790A0A5)  /*@bfbba@*/
#define FRT05_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB790A0A6)  /*@bfbba@*/
#define FRT05_TCCSS_BFES	(*(volatile uint_io8_t*)0xB790A0A7)  /*@bfbba@*/
#define FRT05_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB790A0A8)  /*@bfbba@*/
#define FRT05_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB790A0AD)  /*@bfbba@*/
#define FRT05_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB790A0AF)  /*@bfbba@*/

#define FRT06_TCCSS	(FRT06.unTCCSS.u32Register)  /*@rg@*/
#define FRT06_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB790C0A4)  /*@bfbba@*/
#define FRT06_TCCSS_MODES	(*(volatile uint_io8_t*)0xB790C0A5)  /*@bfbba@*/
#define FRT06_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB790C0A6)  /*@bfbba@*/
#define FRT06_TCCSS_BFES	(*(volatile uint_io8_t*)0xB790C0A7)  /*@bfbba@*/
#define FRT06_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB790C0A8)  /*@bfbba@*/
#define FRT06_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB790C0AD)  /*@bfbba@*/
#define FRT06_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB790C0AF)  /*@bfbba@*/

#define FRT07_TCCSS	(FRT07.unTCCSS.u32Register)  /*@rg@*/
#define FRT07_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB790E0A4)  /*@bfbba@*/
#define FRT07_TCCSS_MODES	(*(volatile uint_io8_t*)0xB790E0A5)  /*@bfbba@*/
#define FRT07_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB790E0A6)  /*@bfbba@*/
#define FRT07_TCCSS_BFES	(*(volatile uint_io8_t*)0xB790E0A7)  /*@bfbba@*/
#define FRT07_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB790E0A8)  /*@bfbba@*/
#define FRT07_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB790E0AD)  /*@bfbba@*/
#define FRT07_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB790E0AF)  /*@bfbba@*/

#define FRT08_TCCSS	(FRT08.unTCCSS.u32Register)  /*@rg@*/
#define FRT08_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB7D000A4)  /*@bfbba@*/
#define FRT08_TCCSS_MODES	(*(volatile uint_io8_t*)0xB7D000A5)  /*@bfbba@*/
#define FRT08_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB7D000A6)  /*@bfbba@*/
#define FRT08_TCCSS_BFES	(*(volatile uint_io8_t*)0xB7D000A7)  /*@bfbba@*/
#define FRT08_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB7D000A8)  /*@bfbba@*/
#define FRT08_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB7D000AD)  /*@bfbba@*/
#define FRT08_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB7D000AF)  /*@bfbba@*/

#define FRT09_TCCSS	(FRT09.unTCCSS.u32Register)  /*@rg@*/
#define FRT09_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB7D020A4)  /*@bfbba@*/
#define FRT09_TCCSS_MODES	(*(volatile uint_io8_t*)0xB7D020A5)  /*@bfbba@*/
#define FRT09_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB7D020A6)  /*@bfbba@*/
#define FRT09_TCCSS_BFES	(*(volatile uint_io8_t*)0xB7D020A7)  /*@bfbba@*/
#define FRT09_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB7D020A8)  /*@bfbba@*/
#define FRT09_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB7D020AD)  /*@bfbba@*/
#define FRT09_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB7D020AF)  /*@bfbba@*/

#define FRT10_TCCSS	(FRT10.unTCCSS.u32Register)  /*@rg@*/
#define FRT10_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB7D040A4)  /*@bfbba@*/
#define FRT10_TCCSS_MODES	(*(volatile uint_io8_t*)0xB7D040A5)  /*@bfbba@*/
#define FRT10_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB7D040A6)  /*@bfbba@*/
#define FRT10_TCCSS_BFES	(*(volatile uint_io8_t*)0xB7D040A7)  /*@bfbba@*/
#define FRT10_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB7D040A8)  /*@bfbba@*/
#define FRT10_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB7D040AD)  /*@bfbba@*/
#define FRT10_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB7D040AF)  /*@bfbba@*/

#define FRT11_TCCSS	(FRT11.unTCCSS.u32Register)  /*@rg@*/
#define FRT11_TCCSS_SCLRS	(*(volatile uint_io8_t*)0xB7D060A4)  /*@bfbba@*/
#define FRT11_TCCSS_MODES	(*(volatile uint_io8_t*)0xB7D060A5)  /*@bfbba@*/
#define FRT11_TCCSS_STOPS	(*(volatile uint_io8_t*)0xB7D060A6)  /*@bfbba@*/
#define FRT11_TCCSS_BFES	(*(volatile uint_io8_t*)0xB7D060A7)  /*@bfbba@*/
#define FRT11_TCCSS_ICRES	(*(volatile uint_io8_t*)0xB7D060A8)  /*@bfbba@*/
#define FRT11_TCCSS_IRQZES	(*(volatile uint_io8_t*)0xB7D060AD)  /*@bfbba@*/
#define FRT11_TCCSS_ECKES	(*(volatile uint_io8_t*)0xB7D060AF)  /*@bfbba@*/

typedef struct stc_frtn_tccss_field{
    uint_io32_t		:4;
    uint_io32_t		u1SCLRS:1;
    uint_io32_t		u1MODES:1;
    uint_io32_t		u1STOPS:1;
    uint_io32_t		u1BFES:1;
    uint_io32_t		u1ICRES:1;
    uint_io32_t		:4;
    uint_io32_t		u1IRQZES:1;
    uint_io32_t		:1;
    uint_io32_t		u1ECKES:1;
    uint_io32_t		:16;
}stc_frtn_tccss_field_t;

typedef union un_frtn_tccss{
    uint_io32_t		u32Register;
    stc_frtn_tccss_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_frtn_tccss_t;


typedef struct stc_frtn{
    un_frtn_cpclrb_t	unCPCLRB;	/* 0x00000000 */
    un_frtn_tcdt_t	unTCDT;	/* 0x00000004 */
    un_frtn_tccs_t	unTCCS;	/* 0x00000008 */
    un_frtn_teccs_t	unTECCS;	/* 0x0000000C */
    un_frtn_tccsc_t	unTCCSC;	/* 0x00000010 */
    un_frtn_tccss_t	unTCCSS;	/* 0x00000014 */
    uint_io8_t	au8Reserved0[1000];	/* 0x00000018 */
}stc_frtn_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_frtn_t	stcFRT[12];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_FRT_H */
