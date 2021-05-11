/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_OCU_H
#define __S6J3200_OCU_H

#include "s6j3200io_basetypes.h"

/* OCU[00-11] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define OCU00	stcOCU[0]
#define OCU01	stcOCU[1]
#define OCU02	stcOCU[2]
#define OCU03	stcOCU[3]
#define OCU04	stcOCU[4]
#define OCU05	stcOCU[5]
#define OCU06	stcOCU[6]
#define OCU07	stcOCU[7]
#define OCU08	stcOCU[8]
#define OCU09	stcOCU[9]
#define OCU10	stcOCU[10]
#define OCU11	stcOCU[11]
#else /* __IO_DEFINE */
#define OCU00	(*((volatile stc_ocun_t*)0xB4830000))
#define OCU01	(*((volatile stc_ocun_t*)0xB4830400))
#define OCU02	(*((volatile stc_ocun_t*)0xB4830800))
#define OCU03	(*((volatile stc_ocun_t*)0xB4830C00))
#define OCU04	(*((volatile stc_ocun_t*)0xB4831000))
#define OCU05	(*((volatile stc_ocun_t*)0xB4831400))
#define OCU06	(*((volatile stc_ocun_t*)0xB4831800))
#define OCU07	(*((volatile stc_ocun_t*)0xB4831C00))
#define OCU08	(*((volatile stc_ocun_t*)0xB48B0000))
#define OCU09	(*((volatile stc_ocun_t*)0xB48B0400))
#define OCU10	(*((volatile stc_ocun_t*)0xB48B0800))
#define OCU11	(*((volatile stc_ocun_t*)0xB48B0C00))
#endif /* __IO_DEFINE */

/* OCCPB[0/1] */
#define OCU00_OCCPB0	(OCU00.unOCCPB0.u32Register)  /*@rg@*/
#define OCU00_OCCP0	(OCU00_OCCPB0)  /*@rg2@*/
#define OCU00_OCCPB0_OP	OCU00_OCCPB0  /*@bfrg@*/
#define OCU00_OCCP0_OP	OCU00_OCCPB0_OP  /*@bf2@*/

#define OCU00_OCCPB1	(OCU00.unOCCPB1.u32Register)  /*@rg@*/
#define OCU00_OCCP1	(OCU00_OCCPB1)  /*@rg2@*/
#define OCU00_OCCPB1_OP	OCU00_OCCPB1  /*@bfrg@*/
#define OCU00_OCCP1_OP	OCU00_OCCPB1_OP  /*@bf2@*/

#define OCU01_OCCPB0	(OCU01.unOCCPB0.u32Register)  /*@rg@*/
#define OCU01_OCCP0	(OCU01_OCCPB0)  /*@rg2@*/
#define OCU01_OCCPB0_OP	OCU01_OCCPB0  /*@bfrg@*/
#define OCU01_OCCP0_OP	OCU01_OCCPB0_OP  /*@bf2@*/

#define OCU01_OCCPB1	(OCU01.unOCCPB1.u32Register)  /*@rg@*/
#define OCU01_OCCP1	(OCU01_OCCPB1)  /*@rg2@*/
#define OCU01_OCCPB1_OP	OCU01_OCCPB1  /*@bfrg@*/
#define OCU01_OCCP1_OP	OCU01_OCCPB1_OP  /*@bf2@*/

#define OCU02_OCCPB0	(OCU02.unOCCPB0.u32Register)  /*@rg@*/
#define OCU02_OCCP0	(OCU02_OCCPB0)  /*@rg2@*/
#define OCU02_OCCPB0_OP	OCU02_OCCPB0  /*@bfrg@*/
#define OCU02_OCCP0_OP	OCU02_OCCPB0_OP  /*@bf2@*/

#define OCU02_OCCPB1	(OCU02.unOCCPB1.u32Register)  /*@rg@*/
#define OCU02_OCCP1	(OCU02_OCCPB1)  /*@rg2@*/
#define OCU02_OCCPB1_OP	OCU02_OCCPB1  /*@bfrg@*/
#define OCU02_OCCP1_OP	OCU02_OCCPB1_OP  /*@bf2@*/

#define OCU03_OCCPB0	(OCU03.unOCCPB0.u32Register)  /*@rg@*/
#define OCU03_OCCP0	(OCU03_OCCPB0)  /*@rg2@*/
#define OCU03_OCCPB0_OP	OCU03_OCCPB0  /*@bfrg@*/
#define OCU03_OCCP0_OP	OCU03_OCCPB0_OP  /*@bf2@*/

#define OCU03_OCCPB1	(OCU03.unOCCPB1.u32Register)  /*@rg@*/
#define OCU03_OCCP1	(OCU03_OCCPB1)  /*@rg2@*/
#define OCU03_OCCPB1_OP	OCU03_OCCPB1  /*@bfrg@*/
#define OCU03_OCCP1_OP	OCU03_OCCPB1_OP  /*@bf2@*/

#define OCU04_OCCPB0	(OCU04.unOCCPB0.u32Register)  /*@rg@*/
#define OCU04_OCCP0	(OCU04_OCCPB0)  /*@rg2@*/
#define OCU04_OCCPB0_OP	OCU04_OCCPB0  /*@bfrg@*/
#define OCU04_OCCP0_OP	OCU04_OCCPB0_OP  /*@bf2@*/

#define OCU04_OCCPB1	(OCU04.unOCCPB1.u32Register)  /*@rg@*/
#define OCU04_OCCP1	(OCU04_OCCPB1)  /*@rg2@*/
#define OCU04_OCCPB1_OP	OCU04_OCCPB1  /*@bfrg@*/
#define OCU04_OCCP1_OP	OCU04_OCCPB1_OP  /*@bf2@*/

#define OCU05_OCCPB0	(OCU05.unOCCPB0.u32Register)  /*@rg@*/
#define OCU05_OCCP0	(OCU05_OCCPB0)  /*@rg2@*/
#define OCU05_OCCPB0_OP	OCU05_OCCPB0  /*@bfrg@*/
#define OCU05_OCCP0_OP	OCU05_OCCPB0_OP  /*@bf2@*/

#define OCU05_OCCPB1	(OCU05.unOCCPB1.u32Register)  /*@rg@*/
#define OCU05_OCCP1	(OCU05_OCCPB1)  /*@rg2@*/
#define OCU05_OCCPB1_OP	OCU05_OCCPB1  /*@bfrg@*/
#define OCU05_OCCP1_OP	OCU05_OCCPB1_OP  /*@bf2@*/

#define OCU06_OCCPB0	(OCU06.unOCCPB0.u32Register)  /*@rg@*/
#define OCU06_OCCP0	(OCU06_OCCPB0)  /*@rg2@*/
#define OCU06_OCCPB0_OP	OCU06_OCCPB0  /*@bfrg@*/
#define OCU06_OCCP0_OP	OCU06_OCCPB0_OP  /*@bf2@*/

#define OCU06_OCCPB1	(OCU06.unOCCPB1.u32Register)  /*@rg@*/
#define OCU06_OCCP1	(OCU06_OCCPB1)  /*@rg2@*/
#define OCU06_OCCPB1_OP	OCU06_OCCPB1  /*@bfrg@*/
#define OCU06_OCCP1_OP	OCU06_OCCPB1_OP  /*@bf2@*/

#define OCU07_OCCPB0	(OCU07.unOCCPB0.u32Register)  /*@rg@*/
#define OCU07_OCCP0	(OCU07_OCCPB0)  /*@rg2@*/
#define OCU07_OCCPB0_OP	OCU07_OCCPB0  /*@bfrg@*/
#define OCU07_OCCP0_OP	OCU07_OCCPB0_OP  /*@bf2@*/

#define OCU07_OCCPB1	(OCU07.unOCCPB1.u32Register)  /*@rg@*/
#define OCU07_OCCP1	(OCU07_OCCPB1)  /*@rg2@*/
#define OCU07_OCCPB1_OP	OCU07_OCCPB1  /*@bfrg@*/
#define OCU07_OCCP1_OP	OCU07_OCCPB1_OP  /*@bf2@*/

#define OCU08_OCCPB0	(OCU08.unOCCPB0.u32Register)  /*@rg@*/
#define OCU08_OCCP0	(OCU08_OCCPB0)  /*@rg2@*/
#define OCU08_OCCPB0_OP	OCU08_OCCPB0  /*@bfrg@*/
#define OCU08_OCCP0_OP	OCU08_OCCPB0_OP  /*@bf2@*/

#define OCU08_OCCPB1	(OCU08.unOCCPB1.u32Register)  /*@rg@*/
#define OCU08_OCCP1	(OCU08_OCCPB1)  /*@rg2@*/
#define OCU08_OCCPB1_OP	OCU08_OCCPB1  /*@bfrg@*/
#define OCU08_OCCP1_OP	OCU08_OCCPB1_OP  /*@bf2@*/

#define OCU09_OCCPB0	(OCU09.unOCCPB0.u32Register)  /*@rg@*/
#define OCU09_OCCP0	(OCU09_OCCPB0)  /*@rg2@*/
#define OCU09_OCCPB0_OP	OCU09_OCCPB0  /*@bfrg@*/
#define OCU09_OCCP0_OP	OCU09_OCCPB0_OP  /*@bf2@*/

#define OCU09_OCCPB1	(OCU09.unOCCPB1.u32Register)  /*@rg@*/
#define OCU09_OCCP1	(OCU09_OCCPB1)  /*@rg2@*/
#define OCU09_OCCPB1_OP	OCU09_OCCPB1  /*@bfrg@*/
#define OCU09_OCCP1_OP	OCU09_OCCPB1_OP  /*@bf2@*/

#define OCU10_OCCPB0	(OCU10.unOCCPB0.u32Register)  /*@rg@*/
#define OCU10_OCCP0	(OCU10_OCCPB0)  /*@rg2@*/
#define OCU10_OCCPB0_OP	OCU10_OCCPB0  /*@bfrg@*/
#define OCU10_OCCP0_OP	OCU10_OCCPB0_OP  /*@bf2@*/

#define OCU10_OCCPB1	(OCU10.unOCCPB1.u32Register)  /*@rg@*/
#define OCU10_OCCP1	(OCU10_OCCPB1)  /*@rg2@*/
#define OCU10_OCCPB1_OP	OCU10_OCCPB1  /*@bfrg@*/
#define OCU10_OCCP1_OP	OCU10_OCCPB1_OP  /*@bf2@*/

#define OCU11_OCCPB0	(OCU11.unOCCPB0.u32Register)  /*@rg@*/
#define OCU11_OCCP0	(OCU11_OCCPB0)  /*@rg2@*/
#define OCU11_OCCPB0_OP	OCU11_OCCPB0  /*@bfrg@*/
#define OCU11_OCCP0_OP	OCU11_OCCPB0_OP  /*@bf2@*/

#define OCU11_OCCPB1	(OCU11.unOCCPB1.u32Register)  /*@rg@*/
#define OCU11_OCCP1	(OCU11_OCCPB1)  /*@rg2@*/
#define OCU11_OCCPB1_OP	OCU11_OCCPB1  /*@bfrg@*/
#define OCU11_OCCP1_OP	OCU11_OCCPB1_OP  /*@bf2@*/

typedef union un_ocun_occpbn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ocun_occpbn_t;

/* OCS */
#define OCU00_OCS	(OCU00.unOCS.u32Register)  /*@rg@*/
#define OCU00_OCS_CST0	(*(volatile uint_io8_t*)0xB7980040)  /*@bfbba@*/
#define OCU00_OCS_CST1	(*(volatile uint_io8_t*)0xB7980041)  /*@bfbba@*/
#define OCU00_OCS_BUF0	(*(volatile uint_io8_t*)0xB7980042)  /*@bfbba@*/
#define OCU00_OCS_BUF1	(*(volatile uint_io8_t*)0xB7980043)  /*@bfbba@*/
#define OCU00_OCS_IOE0	(*(volatile uint_io8_t*)0xB7980044)  /*@bfbba@*/
#define OCU00_OCS_IOE1	(*(volatile uint_io8_t*)0xB7980045)  /*@bfbba@*/
#define OCU00_OCS_IOP0	(*(volatile uint_io8_t*)0xB7980046)  /*@bfbba@*/
#define OCU00_OCS_IOP1	(*(volatile uint_io8_t*)0xB7980047)  /*@bfbba@*/
#define OCU00_OCS_OTD0	(*(volatile uint_io8_t*)0xB7980048)  /*@bfbba@*/
#define OCU00_OCS_OTD1	(*(volatile uint_io8_t*)0xB7980049)  /*@bfbba@*/
#define OCU00_OCS_CMOD	(*(volatile uint_io8_t*)0xB798004C)  /*@bfbba@*/
#define OCU00_OCS_BTS0	(*(volatile uint_io8_t*)0xB798004D)  /*@bfbba@*/
#define OCU00_OCS_BTS1	(*(volatile uint_io8_t*)0xB798004E)  /*@bfbba@*/

#define OCU01_OCS	(OCU01.unOCS.u32Register)  /*@rg@*/
#define OCU01_OCS_CST0	(*(volatile uint_io8_t*)0xB7982040)  /*@bfbba@*/
#define OCU01_OCS_CST1	(*(volatile uint_io8_t*)0xB7982041)  /*@bfbba@*/
#define OCU01_OCS_BUF0	(*(volatile uint_io8_t*)0xB7982042)  /*@bfbba@*/
#define OCU01_OCS_BUF1	(*(volatile uint_io8_t*)0xB7982043)  /*@bfbba@*/
#define OCU01_OCS_IOE0	(*(volatile uint_io8_t*)0xB7982044)  /*@bfbba@*/
#define OCU01_OCS_IOE1	(*(volatile uint_io8_t*)0xB7982045)  /*@bfbba@*/
#define OCU01_OCS_IOP0	(*(volatile uint_io8_t*)0xB7982046)  /*@bfbba@*/
#define OCU01_OCS_IOP1	(*(volatile uint_io8_t*)0xB7982047)  /*@bfbba@*/
#define OCU01_OCS_OTD0	(*(volatile uint_io8_t*)0xB7982048)  /*@bfbba@*/
#define OCU01_OCS_OTD1	(*(volatile uint_io8_t*)0xB7982049)  /*@bfbba@*/
#define OCU01_OCS_CMOD	(*(volatile uint_io8_t*)0xB798204C)  /*@bfbba@*/
#define OCU01_OCS_BTS0	(*(volatile uint_io8_t*)0xB798204D)  /*@bfbba@*/
#define OCU01_OCS_BTS1	(*(volatile uint_io8_t*)0xB798204E)  /*@bfbba@*/

#define OCU02_OCS	(OCU02.unOCS.u32Register)  /*@rg@*/
#define OCU02_OCS_CST0	(*(volatile uint_io8_t*)0xB7984040)  /*@bfbba@*/
#define OCU02_OCS_CST1	(*(volatile uint_io8_t*)0xB7984041)  /*@bfbba@*/
#define OCU02_OCS_BUF0	(*(volatile uint_io8_t*)0xB7984042)  /*@bfbba@*/
#define OCU02_OCS_BUF1	(*(volatile uint_io8_t*)0xB7984043)  /*@bfbba@*/
#define OCU02_OCS_IOE0	(*(volatile uint_io8_t*)0xB7984044)  /*@bfbba@*/
#define OCU02_OCS_IOE1	(*(volatile uint_io8_t*)0xB7984045)  /*@bfbba@*/
#define OCU02_OCS_IOP0	(*(volatile uint_io8_t*)0xB7984046)  /*@bfbba@*/
#define OCU02_OCS_IOP1	(*(volatile uint_io8_t*)0xB7984047)  /*@bfbba@*/
#define OCU02_OCS_OTD0	(*(volatile uint_io8_t*)0xB7984048)  /*@bfbba@*/
#define OCU02_OCS_OTD1	(*(volatile uint_io8_t*)0xB7984049)  /*@bfbba@*/
#define OCU02_OCS_CMOD	(*(volatile uint_io8_t*)0xB798404C)  /*@bfbba@*/
#define OCU02_OCS_BTS0	(*(volatile uint_io8_t*)0xB798404D)  /*@bfbba@*/
#define OCU02_OCS_BTS1	(*(volatile uint_io8_t*)0xB798404E)  /*@bfbba@*/

#define OCU03_OCS	(OCU03.unOCS.u32Register)  /*@rg@*/
#define OCU03_OCS_CST0	(*(volatile uint_io8_t*)0xB7986040)  /*@bfbba@*/
#define OCU03_OCS_CST1	(*(volatile uint_io8_t*)0xB7986041)  /*@bfbba@*/
#define OCU03_OCS_BUF0	(*(volatile uint_io8_t*)0xB7986042)  /*@bfbba@*/
#define OCU03_OCS_BUF1	(*(volatile uint_io8_t*)0xB7986043)  /*@bfbba@*/
#define OCU03_OCS_IOE0	(*(volatile uint_io8_t*)0xB7986044)  /*@bfbba@*/
#define OCU03_OCS_IOE1	(*(volatile uint_io8_t*)0xB7986045)  /*@bfbba@*/
#define OCU03_OCS_IOP0	(*(volatile uint_io8_t*)0xB7986046)  /*@bfbba@*/
#define OCU03_OCS_IOP1	(*(volatile uint_io8_t*)0xB7986047)  /*@bfbba@*/
#define OCU03_OCS_OTD0	(*(volatile uint_io8_t*)0xB7986048)  /*@bfbba@*/
#define OCU03_OCS_OTD1	(*(volatile uint_io8_t*)0xB7986049)  /*@bfbba@*/
#define OCU03_OCS_CMOD	(*(volatile uint_io8_t*)0xB798604C)  /*@bfbba@*/
#define OCU03_OCS_BTS0	(*(volatile uint_io8_t*)0xB798604D)  /*@bfbba@*/
#define OCU03_OCS_BTS1	(*(volatile uint_io8_t*)0xB798604E)  /*@bfbba@*/

#define OCU04_OCS	(OCU04.unOCS.u32Register)  /*@rg@*/
#define OCU04_OCS_CST0	(*(volatile uint_io8_t*)0xB7988040)  /*@bfbba@*/
#define OCU04_OCS_CST1	(*(volatile uint_io8_t*)0xB7988041)  /*@bfbba@*/
#define OCU04_OCS_BUF0	(*(volatile uint_io8_t*)0xB7988042)  /*@bfbba@*/
#define OCU04_OCS_BUF1	(*(volatile uint_io8_t*)0xB7988043)  /*@bfbba@*/
#define OCU04_OCS_IOE0	(*(volatile uint_io8_t*)0xB7988044)  /*@bfbba@*/
#define OCU04_OCS_IOE1	(*(volatile uint_io8_t*)0xB7988045)  /*@bfbba@*/
#define OCU04_OCS_IOP0	(*(volatile uint_io8_t*)0xB7988046)  /*@bfbba@*/
#define OCU04_OCS_IOP1	(*(volatile uint_io8_t*)0xB7988047)  /*@bfbba@*/
#define OCU04_OCS_OTD0	(*(volatile uint_io8_t*)0xB7988048)  /*@bfbba@*/
#define OCU04_OCS_OTD1	(*(volatile uint_io8_t*)0xB7988049)  /*@bfbba@*/
#define OCU04_OCS_CMOD	(*(volatile uint_io8_t*)0xB798804C)  /*@bfbba@*/
#define OCU04_OCS_BTS0	(*(volatile uint_io8_t*)0xB798804D)  /*@bfbba@*/
#define OCU04_OCS_BTS1	(*(volatile uint_io8_t*)0xB798804E)  /*@bfbba@*/

#define OCU05_OCS	(OCU05.unOCS.u32Register)  /*@rg@*/
#define OCU05_OCS_CST0	(*(volatile uint_io8_t*)0xB798A040)  /*@bfbba@*/
#define OCU05_OCS_CST1	(*(volatile uint_io8_t*)0xB798A041)  /*@bfbba@*/
#define OCU05_OCS_BUF0	(*(volatile uint_io8_t*)0xB798A042)  /*@bfbba@*/
#define OCU05_OCS_BUF1	(*(volatile uint_io8_t*)0xB798A043)  /*@bfbba@*/
#define OCU05_OCS_IOE0	(*(volatile uint_io8_t*)0xB798A044)  /*@bfbba@*/
#define OCU05_OCS_IOE1	(*(volatile uint_io8_t*)0xB798A045)  /*@bfbba@*/
#define OCU05_OCS_IOP0	(*(volatile uint_io8_t*)0xB798A046)  /*@bfbba@*/
#define OCU05_OCS_IOP1	(*(volatile uint_io8_t*)0xB798A047)  /*@bfbba@*/
#define OCU05_OCS_OTD0	(*(volatile uint_io8_t*)0xB798A048)  /*@bfbba@*/
#define OCU05_OCS_OTD1	(*(volatile uint_io8_t*)0xB798A049)  /*@bfbba@*/
#define OCU05_OCS_CMOD	(*(volatile uint_io8_t*)0xB798A04C)  /*@bfbba@*/
#define OCU05_OCS_BTS0	(*(volatile uint_io8_t*)0xB798A04D)  /*@bfbba@*/
#define OCU05_OCS_BTS1	(*(volatile uint_io8_t*)0xB798A04E)  /*@bfbba@*/

#define OCU06_OCS	(OCU06.unOCS.u32Register)  /*@rg@*/
#define OCU06_OCS_CST0	(*(volatile uint_io8_t*)0xB798C040)  /*@bfbba@*/
#define OCU06_OCS_CST1	(*(volatile uint_io8_t*)0xB798C041)  /*@bfbba@*/
#define OCU06_OCS_BUF0	(*(volatile uint_io8_t*)0xB798C042)  /*@bfbba@*/
#define OCU06_OCS_BUF1	(*(volatile uint_io8_t*)0xB798C043)  /*@bfbba@*/
#define OCU06_OCS_IOE0	(*(volatile uint_io8_t*)0xB798C044)  /*@bfbba@*/
#define OCU06_OCS_IOE1	(*(volatile uint_io8_t*)0xB798C045)  /*@bfbba@*/
#define OCU06_OCS_IOP0	(*(volatile uint_io8_t*)0xB798C046)  /*@bfbba@*/
#define OCU06_OCS_IOP1	(*(volatile uint_io8_t*)0xB798C047)  /*@bfbba@*/
#define OCU06_OCS_OTD0	(*(volatile uint_io8_t*)0xB798C048)  /*@bfbba@*/
#define OCU06_OCS_OTD1	(*(volatile uint_io8_t*)0xB798C049)  /*@bfbba@*/
#define OCU06_OCS_CMOD	(*(volatile uint_io8_t*)0xB798C04C)  /*@bfbba@*/
#define OCU06_OCS_BTS0	(*(volatile uint_io8_t*)0xB798C04D)  /*@bfbba@*/
#define OCU06_OCS_BTS1	(*(volatile uint_io8_t*)0xB798C04E)  /*@bfbba@*/

#define OCU07_OCS	(OCU07.unOCS.u32Register)  /*@rg@*/
#define OCU07_OCS_CST0	(*(volatile uint_io8_t*)0xB798E040)  /*@bfbba@*/
#define OCU07_OCS_CST1	(*(volatile uint_io8_t*)0xB798E041)  /*@bfbba@*/
#define OCU07_OCS_BUF0	(*(volatile uint_io8_t*)0xB798E042)  /*@bfbba@*/
#define OCU07_OCS_BUF1	(*(volatile uint_io8_t*)0xB798E043)  /*@bfbba@*/
#define OCU07_OCS_IOE0	(*(volatile uint_io8_t*)0xB798E044)  /*@bfbba@*/
#define OCU07_OCS_IOE1	(*(volatile uint_io8_t*)0xB798E045)  /*@bfbba@*/
#define OCU07_OCS_IOP0	(*(volatile uint_io8_t*)0xB798E046)  /*@bfbba@*/
#define OCU07_OCS_IOP1	(*(volatile uint_io8_t*)0xB798E047)  /*@bfbba@*/
#define OCU07_OCS_OTD0	(*(volatile uint_io8_t*)0xB798E048)  /*@bfbba@*/
#define OCU07_OCS_OTD1	(*(volatile uint_io8_t*)0xB798E049)  /*@bfbba@*/
#define OCU07_OCS_CMOD	(*(volatile uint_io8_t*)0xB798E04C)  /*@bfbba@*/
#define OCU07_OCS_BTS0	(*(volatile uint_io8_t*)0xB798E04D)  /*@bfbba@*/
#define OCU07_OCS_BTS1	(*(volatile uint_io8_t*)0xB798E04E)  /*@bfbba@*/

#define OCU08_OCS	(OCU08.unOCS.u32Register)  /*@rg@*/
#define OCU08_OCS_CST0	(*(volatile uint_io8_t*)0xB7D80040)  /*@bfbba@*/
#define OCU08_OCS_CST1	(*(volatile uint_io8_t*)0xB7D80041)  /*@bfbba@*/
#define OCU08_OCS_BUF0	(*(volatile uint_io8_t*)0xB7D80042)  /*@bfbba@*/
#define OCU08_OCS_BUF1	(*(volatile uint_io8_t*)0xB7D80043)  /*@bfbba@*/
#define OCU08_OCS_IOE0	(*(volatile uint_io8_t*)0xB7D80044)  /*@bfbba@*/
#define OCU08_OCS_IOE1	(*(volatile uint_io8_t*)0xB7D80045)  /*@bfbba@*/
#define OCU08_OCS_IOP0	(*(volatile uint_io8_t*)0xB7D80046)  /*@bfbba@*/
#define OCU08_OCS_IOP1	(*(volatile uint_io8_t*)0xB7D80047)  /*@bfbba@*/
#define OCU08_OCS_OTD0	(*(volatile uint_io8_t*)0xB7D80048)  /*@bfbba@*/
#define OCU08_OCS_OTD1	(*(volatile uint_io8_t*)0xB7D80049)  /*@bfbba@*/
#define OCU08_OCS_CMOD	(*(volatile uint_io8_t*)0xB7D8004C)  /*@bfbba@*/
#define OCU08_OCS_BTS0	(*(volatile uint_io8_t*)0xB7D8004D)  /*@bfbba@*/
#define OCU08_OCS_BTS1	(*(volatile uint_io8_t*)0xB7D8004E)  /*@bfbba@*/

#define OCU09_OCS	(OCU09.unOCS.u32Register)  /*@rg@*/
#define OCU09_OCS_CST0	(*(volatile uint_io8_t*)0xB7D82040)  /*@bfbba@*/
#define OCU09_OCS_CST1	(*(volatile uint_io8_t*)0xB7D82041)  /*@bfbba@*/
#define OCU09_OCS_BUF0	(*(volatile uint_io8_t*)0xB7D82042)  /*@bfbba@*/
#define OCU09_OCS_BUF1	(*(volatile uint_io8_t*)0xB7D82043)  /*@bfbba@*/
#define OCU09_OCS_IOE0	(*(volatile uint_io8_t*)0xB7D82044)  /*@bfbba@*/
#define OCU09_OCS_IOE1	(*(volatile uint_io8_t*)0xB7D82045)  /*@bfbba@*/
#define OCU09_OCS_IOP0	(*(volatile uint_io8_t*)0xB7D82046)  /*@bfbba@*/
#define OCU09_OCS_IOP1	(*(volatile uint_io8_t*)0xB7D82047)  /*@bfbba@*/
#define OCU09_OCS_OTD0	(*(volatile uint_io8_t*)0xB7D82048)  /*@bfbba@*/
#define OCU09_OCS_OTD1	(*(volatile uint_io8_t*)0xB7D82049)  /*@bfbba@*/
#define OCU09_OCS_CMOD	(*(volatile uint_io8_t*)0xB7D8204C)  /*@bfbba@*/
#define OCU09_OCS_BTS0	(*(volatile uint_io8_t*)0xB7D8204D)  /*@bfbba@*/
#define OCU09_OCS_BTS1	(*(volatile uint_io8_t*)0xB7D8204E)  /*@bfbba@*/

#define OCU10_OCS	(OCU10.unOCS.u32Register)  /*@rg@*/
#define OCU10_OCS_CST0	(*(volatile uint_io8_t*)0xB7D84040)  /*@bfbba@*/
#define OCU10_OCS_CST1	(*(volatile uint_io8_t*)0xB7D84041)  /*@bfbba@*/
#define OCU10_OCS_BUF0	(*(volatile uint_io8_t*)0xB7D84042)  /*@bfbba@*/
#define OCU10_OCS_BUF1	(*(volatile uint_io8_t*)0xB7D84043)  /*@bfbba@*/
#define OCU10_OCS_IOE0	(*(volatile uint_io8_t*)0xB7D84044)  /*@bfbba@*/
#define OCU10_OCS_IOE1	(*(volatile uint_io8_t*)0xB7D84045)  /*@bfbba@*/
#define OCU10_OCS_IOP0	(*(volatile uint_io8_t*)0xB7D84046)  /*@bfbba@*/
#define OCU10_OCS_IOP1	(*(volatile uint_io8_t*)0xB7D84047)  /*@bfbba@*/
#define OCU10_OCS_OTD0	(*(volatile uint_io8_t*)0xB7D84048)  /*@bfbba@*/
#define OCU10_OCS_OTD1	(*(volatile uint_io8_t*)0xB7D84049)  /*@bfbba@*/
#define OCU10_OCS_CMOD	(*(volatile uint_io8_t*)0xB7D8404C)  /*@bfbba@*/
#define OCU10_OCS_BTS0	(*(volatile uint_io8_t*)0xB7D8404D)  /*@bfbba@*/
#define OCU10_OCS_BTS1	(*(volatile uint_io8_t*)0xB7D8404E)  /*@bfbba@*/

#define OCU11_OCS	(OCU11.unOCS.u32Register)  /*@rg@*/
#define OCU11_OCS_CST0	(*(volatile uint_io8_t*)0xB7D86040)  /*@bfbba@*/
#define OCU11_OCS_CST1	(*(volatile uint_io8_t*)0xB7D86041)  /*@bfbba@*/
#define OCU11_OCS_BUF0	(*(volatile uint_io8_t*)0xB7D86042)  /*@bfbba@*/
#define OCU11_OCS_BUF1	(*(volatile uint_io8_t*)0xB7D86043)  /*@bfbba@*/
#define OCU11_OCS_IOE0	(*(volatile uint_io8_t*)0xB7D86044)  /*@bfbba@*/
#define OCU11_OCS_IOE1	(*(volatile uint_io8_t*)0xB7D86045)  /*@bfbba@*/
#define OCU11_OCS_IOP0	(*(volatile uint_io8_t*)0xB7D86046)  /*@bfbba@*/
#define OCU11_OCS_IOP1	(*(volatile uint_io8_t*)0xB7D86047)  /*@bfbba@*/
#define OCU11_OCS_OTD0	(*(volatile uint_io8_t*)0xB7D86048)  /*@bfbba@*/
#define OCU11_OCS_OTD1	(*(volatile uint_io8_t*)0xB7D86049)  /*@bfbba@*/
#define OCU11_OCS_CMOD	(*(volatile uint_io8_t*)0xB7D8604C)  /*@bfbba@*/
#define OCU11_OCS_BTS0	(*(volatile uint_io8_t*)0xB7D8604D)  /*@bfbba@*/
#define OCU11_OCS_BTS1	(*(volatile uint_io8_t*)0xB7D8604E)  /*@bfbba@*/

typedef struct stc_ocun_ocs_field{
    uint_io32_t		u1CST0:1;
    uint_io32_t		u1CST1:1;
    uint_io32_t		u1BUF0:1;
    uint_io32_t		u1BUF1:1;
    uint_io32_t		u1IOE0:1;
    uint_io32_t		u1IOE1:1;
    uint_io32_t		u1IOP0:1;
    uint_io32_t		u1IOP1:1;
    uint_io32_t		u1OTD0:1;
    uint_io32_t		u1OTD1:1;
    uint_io32_t		:2;
    uint_io32_t		u1CMOD:1;
    uint_io32_t		u1BTS0:1;
    uint_io32_t		u1BTS1:1;
    uint_io32_t		:17;
}stc_ocun_ocs_field_t;

typedef union un_ocun_ocs{
    uint_io32_t		u32Register;
    stc_ocun_ocs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ocun_ocs_t;

/* OCSC */
#define OCU00_OCSC	(OCU00.unOCSC.u32Register)  /*@rg@*/
#define OCU00_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7980060)  /*@bfbba@*/
#define OCU00_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7980061)  /*@bfbba@*/
#define OCU00_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7980062)  /*@bfbba@*/
#define OCU00_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7980063)  /*@bfbba@*/
#define OCU00_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7980064)  /*@bfbba@*/
#define OCU00_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7980065)  /*@bfbba@*/
#define OCU00_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7980066)  /*@bfbba@*/
#define OCU00_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7980067)  /*@bfbba@*/
#define OCU00_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7980068)  /*@bfbba@*/
#define OCU00_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7980069)  /*@bfbba@*/
#define OCU00_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798006C)  /*@bfbba@*/
#define OCU00_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798006D)  /*@bfbba@*/
#define OCU00_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798006E)  /*@bfbba@*/

#define OCU01_OCSC	(OCU01.unOCSC.u32Register)  /*@rg@*/
#define OCU01_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7982060)  /*@bfbba@*/
#define OCU01_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7982061)  /*@bfbba@*/
#define OCU01_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7982062)  /*@bfbba@*/
#define OCU01_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7982063)  /*@bfbba@*/
#define OCU01_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7982064)  /*@bfbba@*/
#define OCU01_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7982065)  /*@bfbba@*/
#define OCU01_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7982066)  /*@bfbba@*/
#define OCU01_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7982067)  /*@bfbba@*/
#define OCU01_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7982068)  /*@bfbba@*/
#define OCU01_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7982069)  /*@bfbba@*/
#define OCU01_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798206C)  /*@bfbba@*/
#define OCU01_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798206D)  /*@bfbba@*/
#define OCU01_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798206E)  /*@bfbba@*/

#define OCU02_OCSC	(OCU02.unOCSC.u32Register)  /*@rg@*/
#define OCU02_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7984060)  /*@bfbba@*/
#define OCU02_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7984061)  /*@bfbba@*/
#define OCU02_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7984062)  /*@bfbba@*/
#define OCU02_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7984063)  /*@bfbba@*/
#define OCU02_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7984064)  /*@bfbba@*/
#define OCU02_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7984065)  /*@bfbba@*/
#define OCU02_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7984066)  /*@bfbba@*/
#define OCU02_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7984067)  /*@bfbba@*/
#define OCU02_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7984068)  /*@bfbba@*/
#define OCU02_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7984069)  /*@bfbba@*/
#define OCU02_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798406C)  /*@bfbba@*/
#define OCU02_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798406D)  /*@bfbba@*/
#define OCU02_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798406E)  /*@bfbba@*/

#define OCU03_OCSC	(OCU03.unOCSC.u32Register)  /*@rg@*/
#define OCU03_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7986060)  /*@bfbba@*/
#define OCU03_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7986061)  /*@bfbba@*/
#define OCU03_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7986062)  /*@bfbba@*/
#define OCU03_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7986063)  /*@bfbba@*/
#define OCU03_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7986064)  /*@bfbba@*/
#define OCU03_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7986065)  /*@bfbba@*/
#define OCU03_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7986066)  /*@bfbba@*/
#define OCU03_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7986067)  /*@bfbba@*/
#define OCU03_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7986068)  /*@bfbba@*/
#define OCU03_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7986069)  /*@bfbba@*/
#define OCU03_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798606C)  /*@bfbba@*/
#define OCU03_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798606D)  /*@bfbba@*/
#define OCU03_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798606E)  /*@bfbba@*/

#define OCU04_OCSC	(OCU04.unOCSC.u32Register)  /*@rg@*/
#define OCU04_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7988060)  /*@bfbba@*/
#define OCU04_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7988061)  /*@bfbba@*/
#define OCU04_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7988062)  /*@bfbba@*/
#define OCU04_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7988063)  /*@bfbba@*/
#define OCU04_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7988064)  /*@bfbba@*/
#define OCU04_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7988065)  /*@bfbba@*/
#define OCU04_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7988066)  /*@bfbba@*/
#define OCU04_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7988067)  /*@bfbba@*/
#define OCU04_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7988068)  /*@bfbba@*/
#define OCU04_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7988069)  /*@bfbba@*/
#define OCU04_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798806C)  /*@bfbba@*/
#define OCU04_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798806D)  /*@bfbba@*/
#define OCU04_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798806E)  /*@bfbba@*/

#define OCU05_OCSC	(OCU05.unOCSC.u32Register)  /*@rg@*/
#define OCU05_OCSC_CST0C	(*(volatile uint_io8_t*)0xB798A060)  /*@bfbba@*/
#define OCU05_OCSC_CST1C	(*(volatile uint_io8_t*)0xB798A061)  /*@bfbba@*/
#define OCU05_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB798A062)  /*@bfbba@*/
#define OCU05_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB798A063)  /*@bfbba@*/
#define OCU05_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB798A064)  /*@bfbba@*/
#define OCU05_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB798A065)  /*@bfbba@*/
#define OCU05_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB798A066)  /*@bfbba@*/
#define OCU05_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB798A067)  /*@bfbba@*/
#define OCU05_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB798A068)  /*@bfbba@*/
#define OCU05_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB798A069)  /*@bfbba@*/
#define OCU05_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798A06C)  /*@bfbba@*/
#define OCU05_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798A06D)  /*@bfbba@*/
#define OCU05_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798A06E)  /*@bfbba@*/

#define OCU06_OCSC	(OCU06.unOCSC.u32Register)  /*@rg@*/
#define OCU06_OCSC_CST0C	(*(volatile uint_io8_t*)0xB798C060)  /*@bfbba@*/
#define OCU06_OCSC_CST1C	(*(volatile uint_io8_t*)0xB798C061)  /*@bfbba@*/
#define OCU06_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB798C062)  /*@bfbba@*/
#define OCU06_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB798C063)  /*@bfbba@*/
#define OCU06_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB798C064)  /*@bfbba@*/
#define OCU06_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB798C065)  /*@bfbba@*/
#define OCU06_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB798C066)  /*@bfbba@*/
#define OCU06_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB798C067)  /*@bfbba@*/
#define OCU06_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB798C068)  /*@bfbba@*/
#define OCU06_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB798C069)  /*@bfbba@*/
#define OCU06_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798C06C)  /*@bfbba@*/
#define OCU06_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798C06D)  /*@bfbba@*/
#define OCU06_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798C06E)  /*@bfbba@*/

#define OCU07_OCSC	(OCU07.unOCSC.u32Register)  /*@rg@*/
#define OCU07_OCSC_CST0C	(*(volatile uint_io8_t*)0xB798E060)  /*@bfbba@*/
#define OCU07_OCSC_CST1C	(*(volatile uint_io8_t*)0xB798E061)  /*@bfbba@*/
#define OCU07_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB798E062)  /*@bfbba@*/
#define OCU07_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB798E063)  /*@bfbba@*/
#define OCU07_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB798E064)  /*@bfbba@*/
#define OCU07_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB798E065)  /*@bfbba@*/
#define OCU07_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB798E066)  /*@bfbba@*/
#define OCU07_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB798E067)  /*@bfbba@*/
#define OCU07_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB798E068)  /*@bfbba@*/
#define OCU07_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB798E069)  /*@bfbba@*/
#define OCU07_OCSC_CMODC	(*(volatile uint_io8_t*)0xB798E06C)  /*@bfbba@*/
#define OCU07_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB798E06D)  /*@bfbba@*/
#define OCU07_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB798E06E)  /*@bfbba@*/

#define OCU08_OCSC	(OCU08.unOCSC.u32Register)  /*@rg@*/
#define OCU08_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7D80060)  /*@bfbba@*/
#define OCU08_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7D80061)  /*@bfbba@*/
#define OCU08_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7D80062)  /*@bfbba@*/
#define OCU08_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7D80063)  /*@bfbba@*/
#define OCU08_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7D80064)  /*@bfbba@*/
#define OCU08_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7D80065)  /*@bfbba@*/
#define OCU08_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7D80066)  /*@bfbba@*/
#define OCU08_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7D80067)  /*@bfbba@*/
#define OCU08_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7D80068)  /*@bfbba@*/
#define OCU08_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7D80069)  /*@bfbba@*/
#define OCU08_OCSC_CMODC	(*(volatile uint_io8_t*)0xB7D8006C)  /*@bfbba@*/
#define OCU08_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB7D8006D)  /*@bfbba@*/
#define OCU08_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB7D8006E)  /*@bfbba@*/

#define OCU09_OCSC	(OCU09.unOCSC.u32Register)  /*@rg@*/
#define OCU09_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7D82060)  /*@bfbba@*/
#define OCU09_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7D82061)  /*@bfbba@*/
#define OCU09_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7D82062)  /*@bfbba@*/
#define OCU09_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7D82063)  /*@bfbba@*/
#define OCU09_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7D82064)  /*@bfbba@*/
#define OCU09_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7D82065)  /*@bfbba@*/
#define OCU09_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7D82066)  /*@bfbba@*/
#define OCU09_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7D82067)  /*@bfbba@*/
#define OCU09_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7D82068)  /*@bfbba@*/
#define OCU09_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7D82069)  /*@bfbba@*/
#define OCU09_OCSC_CMODC	(*(volatile uint_io8_t*)0xB7D8206C)  /*@bfbba@*/
#define OCU09_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB7D8206D)  /*@bfbba@*/
#define OCU09_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB7D8206E)  /*@bfbba@*/

#define OCU10_OCSC	(OCU10.unOCSC.u32Register)  /*@rg@*/
#define OCU10_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7D84060)  /*@bfbba@*/
#define OCU10_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7D84061)  /*@bfbba@*/
#define OCU10_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7D84062)  /*@bfbba@*/
#define OCU10_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7D84063)  /*@bfbba@*/
#define OCU10_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7D84064)  /*@bfbba@*/
#define OCU10_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7D84065)  /*@bfbba@*/
#define OCU10_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7D84066)  /*@bfbba@*/
#define OCU10_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7D84067)  /*@bfbba@*/
#define OCU10_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7D84068)  /*@bfbba@*/
#define OCU10_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7D84069)  /*@bfbba@*/
#define OCU10_OCSC_CMODC	(*(volatile uint_io8_t*)0xB7D8406C)  /*@bfbba@*/
#define OCU10_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB7D8406D)  /*@bfbba@*/
#define OCU10_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB7D8406E)  /*@bfbba@*/

#define OCU11_OCSC	(OCU11.unOCSC.u32Register)  /*@rg@*/
#define OCU11_OCSC_CST0C	(*(volatile uint_io8_t*)0xB7D86060)  /*@bfbba@*/
#define OCU11_OCSC_CST1C	(*(volatile uint_io8_t*)0xB7D86061)  /*@bfbba@*/
#define OCU11_OCSC_BUF0C	(*(volatile uint_io8_t*)0xB7D86062)  /*@bfbba@*/
#define OCU11_OCSC_BUF1C	(*(volatile uint_io8_t*)0xB7D86063)  /*@bfbba@*/
#define OCU11_OCSC_IOE0C	(*(volatile uint_io8_t*)0xB7D86064)  /*@bfbba@*/
#define OCU11_OCSC_IOE1C	(*(volatile uint_io8_t*)0xB7D86065)  /*@bfbba@*/
#define OCU11_OCSC_IOP0C	(*(volatile uint_io8_t*)0xB7D86066)  /*@bfbba@*/
#define OCU11_OCSC_IOP1C	(*(volatile uint_io8_t*)0xB7D86067)  /*@bfbba@*/
#define OCU11_OCSC_OTD0C	(*(volatile uint_io8_t*)0xB7D86068)  /*@bfbba@*/
#define OCU11_OCSC_OTD1C	(*(volatile uint_io8_t*)0xB7D86069)  /*@bfbba@*/
#define OCU11_OCSC_CMODC	(*(volatile uint_io8_t*)0xB7D8606C)  /*@bfbba@*/
#define OCU11_OCSC_BTS0C	(*(volatile uint_io8_t*)0xB7D8606D)  /*@bfbba@*/
#define OCU11_OCSC_BTS1C	(*(volatile uint_io8_t*)0xB7D8606E)  /*@bfbba@*/

typedef struct stc_ocun_ocsc_field{
    uint_io32_t		u1CST0C:1;
    uint_io32_t		u1CST1C:1;
    uint_io32_t		u1BUF0C:1;
    uint_io32_t		u1BUF1C:1;
    uint_io32_t		u1IOE0C:1;
    uint_io32_t		u1IOE1C:1;
    uint_io32_t		u1IOP0C:1;
    uint_io32_t		u1IOP1C:1;
    uint_io32_t		u1OTD0C:1;
    uint_io32_t		u1OTD1C:1;
    uint_io32_t		:2;
    uint_io32_t		u1CMODC:1;
    uint_io32_t		u1BTS0C:1;
    uint_io32_t		u1BTS1C:1;
    uint_io32_t		:17;
}stc_ocun_ocsc_field_t;

typedef union un_ocun_ocsc{
    uint_io32_t		u32Register;
    stc_ocun_ocsc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ocun_ocsc_t;

/* OCSS */
#define OCU00_OCSS	(OCU00.unOCSS.u32Register)  /*@rg@*/
#define OCU00_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7980080)  /*@bfbba@*/
#define OCU00_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7980081)  /*@bfbba@*/
#define OCU00_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7980082)  /*@bfbba@*/
#define OCU00_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7980083)  /*@bfbba@*/
#define OCU00_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7980084)  /*@bfbba@*/
#define OCU00_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7980085)  /*@bfbba@*/
#define OCU00_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7980088)  /*@bfbba@*/
#define OCU00_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7980089)  /*@bfbba@*/
#define OCU00_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798008C)  /*@bfbba@*/
#define OCU00_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798008D)  /*@bfbba@*/
#define OCU00_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798008E)  /*@bfbba@*/

#define OCU01_OCSS	(OCU01.unOCSS.u32Register)  /*@rg@*/
#define OCU01_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7982080)  /*@bfbba@*/
#define OCU01_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7982081)  /*@bfbba@*/
#define OCU01_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7982082)  /*@bfbba@*/
#define OCU01_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7982083)  /*@bfbba@*/
#define OCU01_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7982084)  /*@bfbba@*/
#define OCU01_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7982085)  /*@bfbba@*/
#define OCU01_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7982088)  /*@bfbba@*/
#define OCU01_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7982089)  /*@bfbba@*/
#define OCU01_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798208C)  /*@bfbba@*/
#define OCU01_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798208D)  /*@bfbba@*/
#define OCU01_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798208E)  /*@bfbba@*/

#define OCU02_OCSS	(OCU02.unOCSS.u32Register)  /*@rg@*/
#define OCU02_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7984080)  /*@bfbba@*/
#define OCU02_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7984081)  /*@bfbba@*/
#define OCU02_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7984082)  /*@bfbba@*/
#define OCU02_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7984083)  /*@bfbba@*/
#define OCU02_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7984084)  /*@bfbba@*/
#define OCU02_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7984085)  /*@bfbba@*/
#define OCU02_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7984088)  /*@bfbba@*/
#define OCU02_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7984089)  /*@bfbba@*/
#define OCU02_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798408C)  /*@bfbba@*/
#define OCU02_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798408D)  /*@bfbba@*/
#define OCU02_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798408E)  /*@bfbba@*/

#define OCU03_OCSS	(OCU03.unOCSS.u32Register)  /*@rg@*/
#define OCU03_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7986080)  /*@bfbba@*/
#define OCU03_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7986081)  /*@bfbba@*/
#define OCU03_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7986082)  /*@bfbba@*/
#define OCU03_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7986083)  /*@bfbba@*/
#define OCU03_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7986084)  /*@bfbba@*/
#define OCU03_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7986085)  /*@bfbba@*/
#define OCU03_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7986088)  /*@bfbba@*/
#define OCU03_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7986089)  /*@bfbba@*/
#define OCU03_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798608C)  /*@bfbba@*/
#define OCU03_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798608D)  /*@bfbba@*/
#define OCU03_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798608E)  /*@bfbba@*/

#define OCU04_OCSS	(OCU04.unOCSS.u32Register)  /*@rg@*/
#define OCU04_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7988080)  /*@bfbba@*/
#define OCU04_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7988081)  /*@bfbba@*/
#define OCU04_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7988082)  /*@bfbba@*/
#define OCU04_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7988083)  /*@bfbba@*/
#define OCU04_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7988084)  /*@bfbba@*/
#define OCU04_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7988085)  /*@bfbba@*/
#define OCU04_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7988088)  /*@bfbba@*/
#define OCU04_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7988089)  /*@bfbba@*/
#define OCU04_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798808C)  /*@bfbba@*/
#define OCU04_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798808D)  /*@bfbba@*/
#define OCU04_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798808E)  /*@bfbba@*/

#define OCU05_OCSS	(OCU05.unOCSS.u32Register)  /*@rg@*/
#define OCU05_OCSS_CST0S	(*(volatile uint_io8_t*)0xB798A080)  /*@bfbba@*/
#define OCU05_OCSS_CST1S	(*(volatile uint_io8_t*)0xB798A081)  /*@bfbba@*/
#define OCU05_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB798A082)  /*@bfbba@*/
#define OCU05_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB798A083)  /*@bfbba@*/
#define OCU05_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB798A084)  /*@bfbba@*/
#define OCU05_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB798A085)  /*@bfbba@*/
#define OCU05_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB798A088)  /*@bfbba@*/
#define OCU05_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB798A089)  /*@bfbba@*/
#define OCU05_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798A08C)  /*@bfbba@*/
#define OCU05_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798A08D)  /*@bfbba@*/
#define OCU05_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798A08E)  /*@bfbba@*/

#define OCU06_OCSS	(OCU06.unOCSS.u32Register)  /*@rg@*/
#define OCU06_OCSS_CST0S	(*(volatile uint_io8_t*)0xB798C080)  /*@bfbba@*/
#define OCU06_OCSS_CST1S	(*(volatile uint_io8_t*)0xB798C081)  /*@bfbba@*/
#define OCU06_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB798C082)  /*@bfbba@*/
#define OCU06_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB798C083)  /*@bfbba@*/
#define OCU06_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB798C084)  /*@bfbba@*/
#define OCU06_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB798C085)  /*@bfbba@*/
#define OCU06_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB798C088)  /*@bfbba@*/
#define OCU06_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB798C089)  /*@bfbba@*/
#define OCU06_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798C08C)  /*@bfbba@*/
#define OCU06_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798C08D)  /*@bfbba@*/
#define OCU06_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798C08E)  /*@bfbba@*/

#define OCU07_OCSS	(OCU07.unOCSS.u32Register)  /*@rg@*/
#define OCU07_OCSS_CST0S	(*(volatile uint_io8_t*)0xB798E080)  /*@bfbba@*/
#define OCU07_OCSS_CST1S	(*(volatile uint_io8_t*)0xB798E081)  /*@bfbba@*/
#define OCU07_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB798E082)  /*@bfbba@*/
#define OCU07_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB798E083)  /*@bfbba@*/
#define OCU07_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB798E084)  /*@bfbba@*/
#define OCU07_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB798E085)  /*@bfbba@*/
#define OCU07_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB798E088)  /*@bfbba@*/
#define OCU07_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB798E089)  /*@bfbba@*/
#define OCU07_OCSS_CMODS	(*(volatile uint_io8_t*)0xB798E08C)  /*@bfbba@*/
#define OCU07_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB798E08D)  /*@bfbba@*/
#define OCU07_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB798E08E)  /*@bfbba@*/

#define OCU08_OCSS	(OCU08.unOCSS.u32Register)  /*@rg@*/
#define OCU08_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7D80080)  /*@bfbba@*/
#define OCU08_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7D80081)  /*@bfbba@*/
#define OCU08_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7D80082)  /*@bfbba@*/
#define OCU08_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7D80083)  /*@bfbba@*/
#define OCU08_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7D80084)  /*@bfbba@*/
#define OCU08_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7D80085)  /*@bfbba@*/
#define OCU08_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7D80088)  /*@bfbba@*/
#define OCU08_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7D80089)  /*@bfbba@*/
#define OCU08_OCSS_CMODS	(*(volatile uint_io8_t*)0xB7D8008C)  /*@bfbba@*/
#define OCU08_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB7D8008D)  /*@bfbba@*/
#define OCU08_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB7D8008E)  /*@bfbba@*/

#define OCU09_OCSS	(OCU09.unOCSS.u32Register)  /*@rg@*/
#define OCU09_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7D82080)  /*@bfbba@*/
#define OCU09_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7D82081)  /*@bfbba@*/
#define OCU09_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7D82082)  /*@bfbba@*/
#define OCU09_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7D82083)  /*@bfbba@*/
#define OCU09_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7D82084)  /*@bfbba@*/
#define OCU09_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7D82085)  /*@bfbba@*/
#define OCU09_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7D82088)  /*@bfbba@*/
#define OCU09_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7D82089)  /*@bfbba@*/
#define OCU09_OCSS_CMODS	(*(volatile uint_io8_t*)0xB7D8208C)  /*@bfbba@*/
#define OCU09_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB7D8208D)  /*@bfbba@*/
#define OCU09_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB7D8208E)  /*@bfbba@*/

#define OCU10_OCSS	(OCU10.unOCSS.u32Register)  /*@rg@*/
#define OCU10_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7D84080)  /*@bfbba@*/
#define OCU10_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7D84081)  /*@bfbba@*/
#define OCU10_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7D84082)  /*@bfbba@*/
#define OCU10_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7D84083)  /*@bfbba@*/
#define OCU10_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7D84084)  /*@bfbba@*/
#define OCU10_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7D84085)  /*@bfbba@*/
#define OCU10_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7D84088)  /*@bfbba@*/
#define OCU10_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7D84089)  /*@bfbba@*/
#define OCU10_OCSS_CMODS	(*(volatile uint_io8_t*)0xB7D8408C)  /*@bfbba@*/
#define OCU10_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB7D8408D)  /*@bfbba@*/
#define OCU10_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB7D8408E)  /*@bfbba@*/

#define OCU11_OCSS	(OCU11.unOCSS.u32Register)  /*@rg@*/
#define OCU11_OCSS_CST0S	(*(volatile uint_io8_t*)0xB7D86080)  /*@bfbba@*/
#define OCU11_OCSS_CST1S	(*(volatile uint_io8_t*)0xB7D86081)  /*@bfbba@*/
#define OCU11_OCSS_BUF0S	(*(volatile uint_io8_t*)0xB7D86082)  /*@bfbba@*/
#define OCU11_OCSS_BUF1S	(*(volatile uint_io8_t*)0xB7D86083)  /*@bfbba@*/
#define OCU11_OCSS_IOE0S	(*(volatile uint_io8_t*)0xB7D86084)  /*@bfbba@*/
#define OCU11_OCSS_IOE1S	(*(volatile uint_io8_t*)0xB7D86085)  /*@bfbba@*/
#define OCU11_OCSS_OTD0S	(*(volatile uint_io8_t*)0xB7D86088)  /*@bfbba@*/
#define OCU11_OCSS_OTD1S	(*(volatile uint_io8_t*)0xB7D86089)  /*@bfbba@*/
#define OCU11_OCSS_CMODS	(*(volatile uint_io8_t*)0xB7D8608C)  /*@bfbba@*/
#define OCU11_OCSS_BTS0S	(*(volatile uint_io8_t*)0xB7D8608D)  /*@bfbba@*/
#define OCU11_OCSS_BTS1S	(*(volatile uint_io8_t*)0xB7D8608E)  /*@bfbba@*/

typedef struct stc_ocun_ocss_field{
    uint_io32_t		u1CST0S:1;
    uint_io32_t		u1CST1S:1;
    uint_io32_t		u1BUF0S:1;
    uint_io32_t		u1BUF1S:1;
    uint_io32_t		u1IOE0S:1;
    uint_io32_t		u1IOE1S:1;
    uint_io32_t		:2;
    uint_io32_t		u1OTD0S:1;
    uint_io32_t		u1OTD1S:1;
    uint_io32_t		:2;
    uint_io32_t		u1CMODS:1;
    uint_io32_t		u1BTS0S:1;
    uint_io32_t		u1BTS1S:1;
    uint_io32_t		:17;
}stc_ocun_ocss_field_t;

typedef union un_ocun_ocss{
    uint_io32_t		u32Register;
    stc_ocun_ocss_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ocun_ocss_t;


typedef struct stc_ocun{
    un_ocun_occpbn_t	unOCCPB0;	/* 0x00000000 */
    un_ocun_occpbn_t	unOCCPB1;	/* 0x00000004 */
    un_ocun_ocs_t	unOCS;	/* 0x00000008 */
    un_ocun_ocsc_t	unOCSC;	/* 0x0000000C */
    un_ocun_ocss_t	unOCSS;	/* 0x00000010 */
    uint_io8_t	au8Reserved0[1004];	/* 0x00000014 */
}stc_ocun_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_ocun_t	stcOCU[12];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_OCU_H */
