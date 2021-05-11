/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_ICU_H
#define __S6J3200_ICU_H

#include "s6j3200io_basetypes.h"

/* ICU[00-11] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define ICU00	stcICU[0]
#define ICU01	stcICU[1]
#define ICU02	stcICU[2]
#define ICU03	stcICU[3]
#define ICU04	stcICU[4]
#define ICU05	stcICU[5]
#define ICU06	stcICU[6]
#define ICU07	stcICU[7]
#define ICU08	stcICU[8]
#define ICU09	stcICU[9]
#define ICU10	stcICU[10]
#define ICU11	stcICU[11]
#else /* __IO_DEFINE */
#define ICU00	(*((volatile stc_icun_t*)0xB4828000))
#define ICU01	(*((volatile stc_icun_t*)0xB4828400))
#define ICU02	(*((volatile stc_icun_t*)0xB4828800))
#define ICU03	(*((volatile stc_icun_t*)0xB4828C00))
#define ICU04	(*((volatile stc_icun_t*)0xB4829000))
#define ICU05	(*((volatile stc_icun_t*)0xB4829400))
#define ICU06	(*((volatile stc_icun_t*)0xB4829800))
#define ICU07	(*((volatile stc_icun_t*)0xB4829C00))
#define ICU08	(*((volatile stc_icun_t*)0xB48A8000))
#define ICU09	(*((volatile stc_icun_t*)0xB48A8400))
#define ICU10	(*((volatile stc_icun_t*)0xB48A8800))
#define ICU11	(*((volatile stc_icun_t*)0xB48A8C00))
#endif /* __IO_DEFINE */

/* IPCP[0/1] */
#define ICU00_IPCP0	(ICU00.unIPCP0.u32Register)  /*@rg@*/
#define ICU00_IPCP0_CP	ICU00_IPCP0  /*@bfrg@*/

#define ICU00_IPCP1	(ICU00.unIPCP1.u32Register)  /*@rg@*/
#define ICU00_IPCP1_CP	ICU00_IPCP1  /*@bfrg@*/

#define ICU01_IPCP0	(ICU01.unIPCP0.u32Register)  /*@rg@*/
#define ICU01_IPCP0_CP	ICU01_IPCP0  /*@bfrg@*/

#define ICU01_IPCP1	(ICU01.unIPCP1.u32Register)  /*@rg@*/
#define ICU01_IPCP1_CP	ICU01_IPCP1  /*@bfrg@*/

#define ICU02_IPCP0	(ICU02.unIPCP0.u32Register)  /*@rg@*/
#define ICU02_IPCP0_CP	ICU02_IPCP0  /*@bfrg@*/

#define ICU02_IPCP1	(ICU02.unIPCP1.u32Register)  /*@rg@*/
#define ICU02_IPCP1_CP	ICU02_IPCP1  /*@bfrg@*/

#define ICU03_IPCP0	(ICU03.unIPCP0.u32Register)  /*@rg@*/
#define ICU03_IPCP0_CP	ICU03_IPCP0  /*@bfrg@*/

#define ICU03_IPCP1	(ICU03.unIPCP1.u32Register)  /*@rg@*/
#define ICU03_IPCP1_CP	ICU03_IPCP1  /*@bfrg@*/

#define ICU04_IPCP0	(ICU04.unIPCP0.u32Register)  /*@rg@*/
#define ICU04_IPCP0_CP	ICU04_IPCP0  /*@bfrg@*/

#define ICU04_IPCP1	(ICU04.unIPCP1.u32Register)  /*@rg@*/
#define ICU04_IPCP1_CP	ICU04_IPCP1  /*@bfrg@*/

#define ICU05_IPCP0	(ICU05.unIPCP0.u32Register)  /*@rg@*/
#define ICU05_IPCP0_CP	ICU05_IPCP0  /*@bfrg@*/

#define ICU05_IPCP1	(ICU05.unIPCP1.u32Register)  /*@rg@*/
#define ICU05_IPCP1_CP	ICU05_IPCP1  /*@bfrg@*/

#define ICU06_IPCP0	(ICU06.unIPCP0.u32Register)  /*@rg@*/
#define ICU06_IPCP0_CP	ICU06_IPCP0  /*@bfrg@*/

#define ICU06_IPCP1	(ICU06.unIPCP1.u32Register)  /*@rg@*/
#define ICU06_IPCP1_CP	ICU06_IPCP1  /*@bfrg@*/

#define ICU07_IPCP0	(ICU07.unIPCP0.u32Register)  /*@rg@*/
#define ICU07_IPCP0_CP	ICU07_IPCP0  /*@bfrg@*/

#define ICU07_IPCP1	(ICU07.unIPCP1.u32Register)  /*@rg@*/
#define ICU07_IPCP1_CP	ICU07_IPCP1  /*@bfrg@*/

#define ICU08_IPCP0	(ICU08.unIPCP0.u32Register)  /*@rg@*/
#define ICU08_IPCP0_CP	ICU08_IPCP0  /*@bfrg@*/

#define ICU08_IPCP1	(ICU08.unIPCP1.u32Register)  /*@rg@*/
#define ICU08_IPCP1_CP	ICU08_IPCP1  /*@bfrg@*/

#define ICU09_IPCP0	(ICU09.unIPCP0.u32Register)  /*@rg@*/
#define ICU09_IPCP0_CP	ICU09_IPCP0  /*@bfrg@*/

#define ICU09_IPCP1	(ICU09.unIPCP1.u32Register)  /*@rg@*/
#define ICU09_IPCP1_CP	ICU09_IPCP1  /*@bfrg@*/

#define ICU10_IPCP0	(ICU10.unIPCP0.u32Register)  /*@rg@*/
#define ICU10_IPCP0_CP	ICU10_IPCP0  /*@bfrg@*/

#define ICU10_IPCP1	(ICU10.unIPCP1.u32Register)  /*@rg@*/
#define ICU10_IPCP1_CP	ICU10_IPCP1  /*@bfrg@*/

#define ICU11_IPCP0	(ICU11.unIPCP0.u32Register)  /*@rg@*/
#define ICU11_IPCP0_CP	ICU11_IPCP0  /*@bfrg@*/

#define ICU11_IPCP1	(ICU11.unIPCP1.u32Register)  /*@rg@*/
#define ICU11_IPCP1_CP	ICU11_IPCP1  /*@bfrg@*/

typedef union un_icun_ipcpn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_icun_ipcpn_t;

/* ICS */
#define ICU00_ICS	(ICU00.unICS.u32Register)  /*@rg@*/
#define ICU00_ICS_EG0	(ICU00.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU00_ICS_EG1	(ICU00.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU00_ICS_ICE0	(*(volatile uint_io8_t*)0xB7940044)  /*@bfbba@*/
#define ICU00_ICS_ICE1	(*(volatile uint_io8_t*)0xB7940045)  /*@bfbba@*/
#define ICU00_ICS_ICP0	(*(volatile uint_io8_t*)0xB7940046)  /*@bfbba@*/
#define ICU00_ICS_ICP1	(*(volatile uint_io8_t*)0xB7940047)  /*@bfbba@*/
#define ICU00_ICS_IEI0	(*(volatile uint_io8_t*)0xB7940048)  /*@bfbba@*/
#define ICU00_ICS_IEI1	(*(volatile uint_io8_t*)0xB7940049)  /*@bfbba@*/

#define ICU01_ICS	(ICU01.unICS.u32Register)  /*@rg@*/
#define ICU01_ICS_EG0	(ICU01.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU01_ICS_EG1	(ICU01.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU01_ICS_ICE0	(*(volatile uint_io8_t*)0xB7942044)  /*@bfbba@*/
#define ICU01_ICS_ICE1	(*(volatile uint_io8_t*)0xB7942045)  /*@bfbba@*/
#define ICU01_ICS_ICP0	(*(volatile uint_io8_t*)0xB7942046)  /*@bfbba@*/
#define ICU01_ICS_ICP1	(*(volatile uint_io8_t*)0xB7942047)  /*@bfbba@*/
#define ICU01_ICS_IEI0	(*(volatile uint_io8_t*)0xB7942048)  /*@bfbba@*/
#define ICU01_ICS_IEI1	(*(volatile uint_io8_t*)0xB7942049)  /*@bfbba@*/

#define ICU02_ICS	(ICU02.unICS.u32Register)  /*@rg@*/
#define ICU02_ICS_EG0	(ICU02.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU02_ICS_EG1	(ICU02.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU02_ICS_ICE0	(*(volatile uint_io8_t*)0xB7944044)  /*@bfbba@*/
#define ICU02_ICS_ICE1	(*(volatile uint_io8_t*)0xB7944045)  /*@bfbba@*/
#define ICU02_ICS_ICP0	(*(volatile uint_io8_t*)0xB7944046)  /*@bfbba@*/
#define ICU02_ICS_ICP1	(*(volatile uint_io8_t*)0xB7944047)  /*@bfbba@*/
#define ICU02_ICS_IEI0	(*(volatile uint_io8_t*)0xB7944048)  /*@bfbba@*/
#define ICU02_ICS_IEI1	(*(volatile uint_io8_t*)0xB7944049)  /*@bfbba@*/

#define ICU03_ICS	(ICU03.unICS.u32Register)  /*@rg@*/
#define ICU03_ICS_EG0	(ICU03.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU03_ICS_EG1	(ICU03.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU03_ICS_ICE0	(*(volatile uint_io8_t*)0xB7946044)  /*@bfbba@*/
#define ICU03_ICS_ICE1	(*(volatile uint_io8_t*)0xB7946045)  /*@bfbba@*/
#define ICU03_ICS_ICP0	(*(volatile uint_io8_t*)0xB7946046)  /*@bfbba@*/
#define ICU03_ICS_ICP1	(*(volatile uint_io8_t*)0xB7946047)  /*@bfbba@*/
#define ICU03_ICS_IEI0	(*(volatile uint_io8_t*)0xB7946048)  /*@bfbba@*/
#define ICU03_ICS_IEI1	(*(volatile uint_io8_t*)0xB7946049)  /*@bfbba@*/

#define ICU04_ICS	(ICU04.unICS.u32Register)  /*@rg@*/
#define ICU04_ICS_EG0	(ICU04.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU04_ICS_EG1	(ICU04.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU04_ICS_ICE0	(*(volatile uint_io8_t*)0xB7948044)  /*@bfbba@*/
#define ICU04_ICS_ICE1	(*(volatile uint_io8_t*)0xB7948045)  /*@bfbba@*/
#define ICU04_ICS_ICP0	(*(volatile uint_io8_t*)0xB7948046)  /*@bfbba@*/
#define ICU04_ICS_ICP1	(*(volatile uint_io8_t*)0xB7948047)  /*@bfbba@*/
#define ICU04_ICS_IEI0	(*(volatile uint_io8_t*)0xB7948048)  /*@bfbba@*/
#define ICU04_ICS_IEI1	(*(volatile uint_io8_t*)0xB7948049)  /*@bfbba@*/

#define ICU05_ICS	(ICU05.unICS.u32Register)  /*@rg@*/
#define ICU05_ICS_EG0	(ICU05.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU05_ICS_EG1	(ICU05.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU05_ICS_ICE0	(*(volatile uint_io8_t*)0xB794A044)  /*@bfbba@*/
#define ICU05_ICS_ICE1	(*(volatile uint_io8_t*)0xB794A045)  /*@bfbba@*/
#define ICU05_ICS_ICP0	(*(volatile uint_io8_t*)0xB794A046)  /*@bfbba@*/
#define ICU05_ICS_ICP1	(*(volatile uint_io8_t*)0xB794A047)  /*@bfbba@*/
#define ICU05_ICS_IEI0	(*(volatile uint_io8_t*)0xB794A048)  /*@bfbba@*/
#define ICU05_ICS_IEI1	(*(volatile uint_io8_t*)0xB794A049)  /*@bfbba@*/

#define ICU06_ICS	(ICU06.unICS.u32Register)  /*@rg@*/
#define ICU06_ICS_EG0	(ICU06.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU06_ICS_EG1	(ICU06.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU06_ICS_ICE0	(*(volatile uint_io8_t*)0xB794C044)  /*@bfbba@*/
#define ICU06_ICS_ICE1	(*(volatile uint_io8_t*)0xB794C045)  /*@bfbba@*/
#define ICU06_ICS_ICP0	(*(volatile uint_io8_t*)0xB794C046)  /*@bfbba@*/
#define ICU06_ICS_ICP1	(*(volatile uint_io8_t*)0xB794C047)  /*@bfbba@*/
#define ICU06_ICS_IEI0	(*(volatile uint_io8_t*)0xB794C048)  /*@bfbba@*/
#define ICU06_ICS_IEI1	(*(volatile uint_io8_t*)0xB794C049)  /*@bfbba@*/

#define ICU07_ICS	(ICU07.unICS.u32Register)  /*@rg@*/
#define ICU07_ICS_EG0	(ICU07.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU07_ICS_EG1	(ICU07.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU07_ICS_ICE0	(*(volatile uint_io8_t*)0xB794E044)  /*@bfbba@*/
#define ICU07_ICS_ICE1	(*(volatile uint_io8_t*)0xB794E045)  /*@bfbba@*/
#define ICU07_ICS_ICP0	(*(volatile uint_io8_t*)0xB794E046)  /*@bfbba@*/
#define ICU07_ICS_ICP1	(*(volatile uint_io8_t*)0xB794E047)  /*@bfbba@*/
#define ICU07_ICS_IEI0	(*(volatile uint_io8_t*)0xB794E048)  /*@bfbba@*/
#define ICU07_ICS_IEI1	(*(volatile uint_io8_t*)0xB794E049)  /*@bfbba@*/

#define ICU08_ICS	(ICU08.unICS.u32Register)  /*@rg@*/
#define ICU08_ICS_EG0	(ICU08.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU08_ICS_EG1	(ICU08.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU08_ICS_ICE0	(*(volatile uint_io8_t*)0xB7D40044)  /*@bfbba@*/
#define ICU08_ICS_ICE1	(*(volatile uint_io8_t*)0xB7D40045)  /*@bfbba@*/
#define ICU08_ICS_ICP0	(*(volatile uint_io8_t*)0xB7D40046)  /*@bfbba@*/
#define ICU08_ICS_ICP1	(*(volatile uint_io8_t*)0xB7D40047)  /*@bfbba@*/
#define ICU08_ICS_IEI0	(*(volatile uint_io8_t*)0xB7D40048)  /*@bfbba@*/
#define ICU08_ICS_IEI1	(*(volatile uint_io8_t*)0xB7D40049)  /*@bfbba@*/

#define ICU09_ICS	(ICU09.unICS.u32Register)  /*@rg@*/
#define ICU09_ICS_EG0	(ICU09.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU09_ICS_EG1	(ICU09.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU09_ICS_ICE0	(*(volatile uint_io8_t*)0xB7D42044)  /*@bfbba@*/
#define ICU09_ICS_ICE1	(*(volatile uint_io8_t*)0xB7D42045)  /*@bfbba@*/
#define ICU09_ICS_ICP0	(*(volatile uint_io8_t*)0xB7D42046)  /*@bfbba@*/
#define ICU09_ICS_ICP1	(*(volatile uint_io8_t*)0xB7D42047)  /*@bfbba@*/
#define ICU09_ICS_IEI0	(*(volatile uint_io8_t*)0xB7D42048)  /*@bfbba@*/
#define ICU09_ICS_IEI1	(*(volatile uint_io8_t*)0xB7D42049)  /*@bfbba@*/

#define ICU10_ICS	(ICU10.unICS.u32Register)  /*@rg@*/
#define ICU10_ICS_EG0	(ICU10.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU10_ICS_EG1	(ICU10.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU10_ICS_ICE0	(*(volatile uint_io8_t*)0xB7D44044)  /*@bfbba@*/
#define ICU10_ICS_ICE1	(*(volatile uint_io8_t*)0xB7D44045)  /*@bfbba@*/
#define ICU10_ICS_ICP0	(*(volatile uint_io8_t*)0xB7D44046)  /*@bfbba@*/
#define ICU10_ICS_ICP1	(*(volatile uint_io8_t*)0xB7D44047)  /*@bfbba@*/
#define ICU10_ICS_IEI0	(*(volatile uint_io8_t*)0xB7D44048)  /*@bfbba@*/
#define ICU10_ICS_IEI1	(*(volatile uint_io8_t*)0xB7D44049)  /*@bfbba@*/

#define ICU11_ICS	(ICU11.unICS.u32Register)  /*@rg@*/
#define ICU11_ICS_EG0	(ICU11.unICS.stcField.u2EG0)  /*@bf@*/
#define ICU11_ICS_EG1	(ICU11.unICS.stcField.u2EG1)  /*@bf@*/
#define ICU11_ICS_ICE0	(*(volatile uint_io8_t*)0xB7D46044)  /*@bfbba@*/
#define ICU11_ICS_ICE1	(*(volatile uint_io8_t*)0xB7D46045)  /*@bfbba@*/
#define ICU11_ICS_ICP0	(*(volatile uint_io8_t*)0xB7D46046)  /*@bfbba@*/
#define ICU11_ICS_ICP1	(*(volatile uint_io8_t*)0xB7D46047)  /*@bfbba@*/
#define ICU11_ICS_IEI0	(*(volatile uint_io8_t*)0xB7D46048)  /*@bfbba@*/
#define ICU11_ICS_IEI1	(*(volatile uint_io8_t*)0xB7D46049)  /*@bfbba@*/

typedef struct stc_icun_ics_field{
    uint_io32_t		u2EG0:2;
    uint_io32_t		u2EG1:2;
    uint_io32_t		u1ICE0:1;
    uint_io32_t		u1ICE1:1;
    uint_io32_t		u1ICP0:1;
    uint_io32_t		u1ICP1:1;
    uint_io32_t		u1IEI0:1;
    uint_io32_t		u1IEI1:1;
    uint_io32_t		:22;
}stc_icun_ics_field_t;

typedef union un_icun_ics{
    uint_io32_t		u32Register;
    stc_icun_ics_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_icun_ics_t;

/* ICSC */
#define ICU00_ICSC	(ICU00.unICSC.u32Register)  /*@rg@*/
#define ICU00_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7940064)  /*@bfbba@*/
#define ICU00_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7940065)  /*@bfbba@*/
#define ICU00_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7940066)  /*@bfbba@*/
#define ICU00_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7940067)  /*@bfbba@*/

#define ICU01_ICSC	(ICU01.unICSC.u32Register)  /*@rg@*/
#define ICU01_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7942064)  /*@bfbba@*/
#define ICU01_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7942065)  /*@bfbba@*/
#define ICU01_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7942066)  /*@bfbba@*/
#define ICU01_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7942067)  /*@bfbba@*/

#define ICU02_ICSC	(ICU02.unICSC.u32Register)  /*@rg@*/
#define ICU02_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7944064)  /*@bfbba@*/
#define ICU02_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7944065)  /*@bfbba@*/
#define ICU02_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7944066)  /*@bfbba@*/
#define ICU02_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7944067)  /*@bfbba@*/

#define ICU03_ICSC	(ICU03.unICSC.u32Register)  /*@rg@*/
#define ICU03_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7946064)  /*@bfbba@*/
#define ICU03_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7946065)  /*@bfbba@*/
#define ICU03_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7946066)  /*@bfbba@*/
#define ICU03_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7946067)  /*@bfbba@*/

#define ICU04_ICSC	(ICU04.unICSC.u32Register)  /*@rg@*/
#define ICU04_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7948064)  /*@bfbba@*/
#define ICU04_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7948065)  /*@bfbba@*/
#define ICU04_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7948066)  /*@bfbba@*/
#define ICU04_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7948067)  /*@bfbba@*/

#define ICU05_ICSC	(ICU05.unICSC.u32Register)  /*@rg@*/
#define ICU05_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB794A064)  /*@bfbba@*/
#define ICU05_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB794A065)  /*@bfbba@*/
#define ICU05_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB794A066)  /*@bfbba@*/
#define ICU05_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB794A067)  /*@bfbba@*/

#define ICU06_ICSC	(ICU06.unICSC.u32Register)  /*@rg@*/
#define ICU06_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB794C064)  /*@bfbba@*/
#define ICU06_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB794C065)  /*@bfbba@*/
#define ICU06_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB794C066)  /*@bfbba@*/
#define ICU06_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB794C067)  /*@bfbba@*/

#define ICU07_ICSC	(ICU07.unICSC.u32Register)  /*@rg@*/
#define ICU07_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB794E064)  /*@bfbba@*/
#define ICU07_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB794E065)  /*@bfbba@*/
#define ICU07_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB794E066)  /*@bfbba@*/
#define ICU07_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB794E067)  /*@bfbba@*/

#define ICU08_ICSC	(ICU08.unICSC.u32Register)  /*@rg@*/
#define ICU08_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7D40064)  /*@bfbba@*/
#define ICU08_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7D40065)  /*@bfbba@*/
#define ICU08_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7D40066)  /*@bfbba@*/
#define ICU08_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7D40067)  /*@bfbba@*/

#define ICU09_ICSC	(ICU09.unICSC.u32Register)  /*@rg@*/
#define ICU09_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7D42064)  /*@bfbba@*/
#define ICU09_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7D42065)  /*@bfbba@*/
#define ICU09_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7D42066)  /*@bfbba@*/
#define ICU09_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7D42067)  /*@bfbba@*/

#define ICU10_ICSC	(ICU10.unICSC.u32Register)  /*@rg@*/
#define ICU10_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7D44064)  /*@bfbba@*/
#define ICU10_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7D44065)  /*@bfbba@*/
#define ICU10_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7D44066)  /*@bfbba@*/
#define ICU10_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7D44067)  /*@bfbba@*/

#define ICU11_ICSC	(ICU11.unICSC.u32Register)  /*@rg@*/
#define ICU11_ICSC_ICE0C	(*(volatile uint_io8_t*)0xB7D46064)  /*@bfbba@*/
#define ICU11_ICSC_ICE1C	(*(volatile uint_io8_t*)0xB7D46065)  /*@bfbba@*/
#define ICU11_ICSC_ICP0C	(*(volatile uint_io8_t*)0xB7D46066)  /*@bfbba@*/
#define ICU11_ICSC_ICP1C	(*(volatile uint_io8_t*)0xB7D46067)  /*@bfbba@*/

typedef struct stc_icun_icsc_field{
    uint_io32_t		:4;
    uint_io32_t		u1ICE0C:1;
    uint_io32_t		u1ICE1C:1;
    uint_io32_t		u1ICP0C:1;
    uint_io32_t		u1ICP1C:1;
    uint_io32_t		:24;
}stc_icun_icsc_field_t;

typedef union un_icun_icsc{
    uint_io32_t		u32Register;
    stc_icun_icsc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_icun_icsc_t;

/* ICSS */
#define ICU00_ICSS	(ICU00.unICSS.u32Register)  /*@rg@*/
#define ICU00_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7940084)  /*@bfbba@*/
#define ICU00_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7940085)  /*@bfbba@*/

#define ICU01_ICSS	(ICU01.unICSS.u32Register)  /*@rg@*/
#define ICU01_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7942084)  /*@bfbba@*/
#define ICU01_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7942085)  /*@bfbba@*/

#define ICU02_ICSS	(ICU02.unICSS.u32Register)  /*@rg@*/
#define ICU02_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7944084)  /*@bfbba@*/
#define ICU02_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7944085)  /*@bfbba@*/

#define ICU03_ICSS	(ICU03.unICSS.u32Register)  /*@rg@*/
#define ICU03_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7946084)  /*@bfbba@*/
#define ICU03_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7946085)  /*@bfbba@*/

#define ICU04_ICSS	(ICU04.unICSS.u32Register)  /*@rg@*/
#define ICU04_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7948084)  /*@bfbba@*/
#define ICU04_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7948085)  /*@bfbba@*/

#define ICU05_ICSS	(ICU05.unICSS.u32Register)  /*@rg@*/
#define ICU05_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB794A084)  /*@bfbba@*/
#define ICU05_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB794A085)  /*@bfbba@*/

#define ICU06_ICSS	(ICU06.unICSS.u32Register)  /*@rg@*/
#define ICU06_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB794C084)  /*@bfbba@*/
#define ICU06_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB794C085)  /*@bfbba@*/

#define ICU07_ICSS	(ICU07.unICSS.u32Register)  /*@rg@*/
#define ICU07_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB794E084)  /*@bfbba@*/
#define ICU07_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB794E085)  /*@bfbba@*/

#define ICU08_ICSS	(ICU08.unICSS.u32Register)  /*@rg@*/
#define ICU08_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7D40084)  /*@bfbba@*/
#define ICU08_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7D40085)  /*@bfbba@*/

#define ICU09_ICSS	(ICU09.unICSS.u32Register)  /*@rg@*/
#define ICU09_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7D42084)  /*@bfbba@*/
#define ICU09_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7D42085)  /*@bfbba@*/

#define ICU10_ICSS	(ICU10.unICSS.u32Register)  /*@rg@*/
#define ICU10_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7D44084)  /*@bfbba@*/
#define ICU10_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7D44085)  /*@bfbba@*/

#define ICU11_ICSS	(ICU11.unICSS.u32Register)  /*@rg@*/
#define ICU11_ICSS_ICE0S	(*(volatile uint_io8_t*)0xB7D46084)  /*@bfbba@*/
#define ICU11_ICSS_ICE1S	(*(volatile uint_io8_t*)0xB7D46085)  /*@bfbba@*/

typedef struct stc_icun_icss_field{
    uint_io32_t		:4;
    uint_io32_t		u1ICE0S:1;
    uint_io32_t		u1ICE1S:1;
    uint_io32_t		:26;
}stc_icun_icss_field_t;

typedef union un_icun_icss{
    uint_io32_t		u32Register;
    stc_icun_icss_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_icun_icss_t;


typedef struct stc_icun{
    un_icun_ipcpn_t	unIPCP0;	/* 0x00000000 */
    un_icun_ipcpn_t	unIPCP1;	/* 0x00000004 */
    un_icun_ics_t	unICS;	/* 0x00000008 */
    un_icun_icsc_t	unICSC;	/* 0x0000000C */
    un_icun_icss_t	unICSS;	/* 0x00000010 */
    uint_io8_t	au8Reserved0[1004];	/* 0x00000014 */
}stc_icun_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_icun_t	stcICU[12];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_ICU_H */
