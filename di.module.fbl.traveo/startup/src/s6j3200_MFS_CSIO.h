/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MFS_CSIO_H
#define __S6J3200_MFS_CSIO_H

#include "s6j3200io_basetypes.h"

/* CPG_MFS[00-04/08-12]_CSIO base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CPG_MFS00_CSIO	stcCPG_MFS_CSIO[0]
#define CPG_MFS01_CSIO	stcCPG_MFS_CSIO[1]
#define CPG_MFS02_CSIO	stcCPG_MFS_CSIO[2]
#define CPG_MFS03_CSIO	stcCPG_MFS_CSIO[3]
#define CPG_MFS04_CSIO	stcCPG_MFS_CSIO[4]
#define CPG_MFS08_CSIO	stcCPG_MFS_CSIO[5]
#define CPG_MFS09_CSIO	stcCPG_MFS_CSIO[6]
#define CPG_MFS10_CSIO	stcCPG_MFS_CSIO[7]
#define CPG_MFS11_CSIO	stcCPG_MFS_CSIO[8]
#define CPG_MFS12_CSIO	stcCPG_MFS_CSIO[9]
#else /* __IO_DEFINE */
#define CPG_MFS00_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4800000))
#define CPG_MFS01_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4800400))
#define CPG_MFS02_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4800800))
#define CPG_MFS03_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4800C00))
#define CPG_MFS04_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4801000))
#define CPG_MFS08_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4880000))
#define CPG_MFS09_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4880400))
#define CPG_MFS10_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4880800))
#define CPG_MFS11_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4880C00))
#define CPG_MFS12_CSIO	(*((volatile stc_cpg_mfsn_csio_t*)0xB4881000))
#endif /* __IO_DEFINE */

/* SMR */
#define CPG_MFS00_CSIO_SMR	(CPG_MFS00_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7800000)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7800001)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7800002)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7800003)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7800004)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SMR_MD	(CPG_MFS00_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS01_CSIO_SMR	(CPG_MFS01_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7802000)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7802001)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7802002)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7802003)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7802004)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SMR_MD	(CPG_MFS01_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS02_CSIO_SMR	(CPG_MFS02_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7804000)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7804001)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7804002)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7804003)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7804004)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SMR_MD	(CPG_MFS02_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS03_CSIO_SMR	(CPG_MFS03_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7806000)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7806001)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7806002)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7806003)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7806004)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SMR_MD	(CPG_MFS03_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS04_CSIO_SMR	(CPG_MFS04_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7808000)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7808001)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7808002)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7808003)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7808004)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SMR_MD	(CPG_MFS04_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS08_CSIO_SMR	(CPG_MFS08_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7C00000)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7C00001)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7C00002)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7C00003)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C00004)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SMR_MD	(CPG_MFS08_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS09_CSIO_SMR	(CPG_MFS09_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7C02000)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7C02001)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7C02002)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7C02003)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C02004)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SMR_MD	(CPG_MFS09_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS10_CSIO_SMR	(CPG_MFS10_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7C04000)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7C04001)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7C04002)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7C04003)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C04004)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SMR_MD	(CPG_MFS10_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS11_CSIO_SMR	(CPG_MFS11_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7C06000)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7C06001)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7C06002)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7C06003)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C06004)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SMR_MD	(CPG_MFS11_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS12_CSIO_SMR	(CPG_MFS12_CSIO.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB7C08000)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB7C08001)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB7C08002)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB7C08003)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C08004)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SMR_MD	(CPG_MFS12_CSIO.unSMR.stcField.u3MD)  /*@bf@*/

typedef struct stc_cpg_mfsn_csio_smr_field{
    uint_io8_t		u1SOE:1;
    uint_io8_t		u1SCKE:1;
    uint_io8_t		u1BDS:1;
    uint_io8_t		u1SCINV:1;
    uint_io8_t		u1WUCR:1;
    uint_io8_t		u3MD:3;
}stc_cpg_mfsn_csio_smr_field_t;

typedef union un_cpg_mfsn_csio_smr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_smr_field_t		stcField;
}un_cpg_mfsn_csio_smr_t;

/* SCR */
#define CPG_MFS00_CSIO_SCR	(CPG_MFS00_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7800008)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7800009)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB780000A)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB780000B)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB780000C)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB780000D)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB780000E)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB780000F)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SCR	(CPG_MFS01_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7802008)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7802009)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB780200A)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB780200B)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB780200C)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB780200D)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB780200E)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB780200F)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SCR	(CPG_MFS02_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7804008)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7804009)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB780400A)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB780400B)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB780400C)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB780400D)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB780400E)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB780400F)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SCR	(CPG_MFS03_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7806008)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7806009)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB780600A)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB780600B)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB780600C)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB780600D)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB780600E)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB780600F)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SCR	(CPG_MFS04_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7808008)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7808009)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB780800A)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB780800B)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB780800C)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB780800D)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB780800E)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB780800F)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SCR	(CPG_MFS08_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7C00008)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7C00009)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0000A)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0000B)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0000C)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB7C0000D)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB7C0000E)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0000F)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SCR	(CPG_MFS09_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7C02008)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7C02009)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0200A)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0200B)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0200C)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB7C0200D)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB7C0200E)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0200F)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SCR	(CPG_MFS10_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7C04008)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7C04009)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0400A)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0400B)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0400C)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB7C0400D)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB7C0400E)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0400F)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SCR	(CPG_MFS11_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7C06008)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7C06009)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0600A)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0600B)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0600C)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB7C0600D)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB7C0600E)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0600F)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SCR	(CPG_MFS12_CSIO.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB7C08008)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB7C08009)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0800A)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0800B)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0800C)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB7C0800D)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB7C0800E)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0800F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_scr_field{
    uint_io8_t		u1TXE:1;
    uint_io8_t		u1RXE:1;
    uint_io8_t		u1TBIE:1;
    uint_io8_t		u1TIE:1;
    uint_io8_t		u1RIE:1;
    uint_io8_t		u1SPI:1;
    uint_io8_t		u1MS:1;
    uint_io8_t		u1UPCL:1;
}stc_cpg_mfsn_csio_scr_field_t;

typedef union un_cpg_mfsn_csio_scr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_scr_field_t		stcField;
}un_cpg_mfsn_csio_scr_t;

/* ESCR */
#define CPG_MFS00_CSIO_ESCR	(CPG_MFS00_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_ESCR_L2_0	(CPG_MFS00_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS00_CSIO_ESCR_WT	(CPG_MFS00_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS00_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7800015)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7800016)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7800017)  /*@bfbba@*/

#define CPG_MFS01_CSIO_ESCR	(CPG_MFS01_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_ESCR_L2_0	(CPG_MFS01_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS01_CSIO_ESCR_WT	(CPG_MFS01_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS01_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7802015)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7802016)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7802017)  /*@bfbba@*/

#define CPG_MFS02_CSIO_ESCR	(CPG_MFS02_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_ESCR_L2_0	(CPG_MFS02_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS02_CSIO_ESCR_WT	(CPG_MFS02_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS02_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7804015)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7804016)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7804017)  /*@bfbba@*/

#define CPG_MFS03_CSIO_ESCR	(CPG_MFS03_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_ESCR_L2_0	(CPG_MFS03_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS03_CSIO_ESCR_WT	(CPG_MFS03_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS03_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7806015)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7806016)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7806017)  /*@bfbba@*/

#define CPG_MFS04_CSIO_ESCR	(CPG_MFS04_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_ESCR_L2_0	(CPG_MFS04_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS04_CSIO_ESCR_WT	(CPG_MFS04_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS04_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7808015)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7808016)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7808017)  /*@bfbba@*/

#define CPG_MFS08_CSIO_ESCR	(CPG_MFS08_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_ESCR_L2_0	(CPG_MFS08_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS08_CSIO_ESCR_WT	(CPG_MFS08_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS08_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7C00015)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7C00016)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7C00017)  /*@bfbba@*/

#define CPG_MFS09_CSIO_ESCR	(CPG_MFS09_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_ESCR_L2_0	(CPG_MFS09_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS09_CSIO_ESCR_WT	(CPG_MFS09_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS09_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7C02015)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7C02016)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7C02017)  /*@bfbba@*/

#define CPG_MFS10_CSIO_ESCR	(CPG_MFS10_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_ESCR_L2_0	(CPG_MFS10_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS10_CSIO_ESCR_WT	(CPG_MFS10_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS10_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7C04015)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7C04016)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7C04017)  /*@bfbba@*/

#define CPG_MFS11_CSIO_ESCR	(CPG_MFS11_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_ESCR_L2_0	(CPG_MFS11_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS11_CSIO_ESCR_WT	(CPG_MFS11_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS11_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7C06015)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7C06016)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7C06017)  /*@bfbba@*/

#define CPG_MFS12_CSIO_ESCR	(CPG_MFS12_CSIO.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_ESCR_L2_0	(CPG_MFS12_CSIO.unESCR.stcField.u3L2_0)  /*@bf@*/
#define CPG_MFS12_CSIO_ESCR_WT	(CPG_MFS12_CSIO.unESCR.stcField.u2WT)  /*@bf@*/
#define CPG_MFS12_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB7C08015)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB7C08016)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB7C08017)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_escr_field{
    uint_io8_t		u3L2_0:3;
    uint_io8_t		u2WT:2;
    uint_io8_t		u1CSFE:1;
    uint_io8_t		u1L3:1;
    uint_io8_t		u1SOP:1;
}stc_cpg_mfsn_csio_escr_field_t;

typedef union un_cpg_mfsn_csio_escr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_escr_field_t		stcField;
}un_cpg_mfsn_csio_escr_t;

/* SSR */
#define CPG_MFS00_CSIO_SSR	(CPG_MFS00_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7800018)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7800019)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB780001A)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB780001B)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB780001C)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB780001F)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SSR	(CPG_MFS01_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7802018)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7802019)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB780201A)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB780201B)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB780201C)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB780201F)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SSR	(CPG_MFS02_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7804018)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7804019)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB780401A)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB780401B)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB780401C)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB780401F)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SSR	(CPG_MFS03_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7806018)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7806019)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB780601A)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB780601B)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB780601C)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB780601F)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SSR	(CPG_MFS04_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7808018)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7808019)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB780801A)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB780801B)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB780801C)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB780801F)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SSR	(CPG_MFS08_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7C00018)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C00019)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0001A)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0001B)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB7C0001C)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB7C0001F)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SSR	(CPG_MFS09_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7C02018)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C02019)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0201A)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0201B)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB7C0201C)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB7C0201F)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SSR	(CPG_MFS10_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7C04018)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C04019)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0401A)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0401B)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB7C0401C)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB7C0401F)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SSR	(CPG_MFS11_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7C06018)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C06019)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0601A)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0601B)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB7C0601C)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB7C0601F)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SSR	(CPG_MFS12_CSIO.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB7C08018)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C08019)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0801A)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0801B)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB7C0801C)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB7C0801F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_ssr_field{
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1ORE:1;
    uint_io8_t		u1AWC:1;
    uint_io8_t		:2;
    uint_io8_t		u1REC:1;
}stc_cpg_mfsn_csio_ssr_field_t;

typedef union un_cpg_mfsn_csio_ssr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_ssr_field_t		stcField;
}un_cpg_mfsn_csio_ssr_t;

/* RDR */
#define CPG_MFS00_CSIO_RDR	(CPG_MFS00_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS00_CSIO_TDR	(CPG_MFS00_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS00_CSIO_RDR_L	(CPG_MFS00_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS00_CSIO_TDR_L	(CPG_MFS00_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS00_CSIO_RDR_D	CPG_MFS00_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS00_CSIO_TDR_D	CPG_MFS00_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS01_CSIO_RDR	(CPG_MFS01_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS01_CSIO_TDR	(CPG_MFS01_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS01_CSIO_RDR_L	(CPG_MFS01_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS01_CSIO_TDR_L	(CPG_MFS01_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS01_CSIO_RDR_D	CPG_MFS01_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS01_CSIO_TDR_D	CPG_MFS01_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS02_CSIO_RDR	(CPG_MFS02_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS02_CSIO_TDR	(CPG_MFS02_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS02_CSIO_RDR_L	(CPG_MFS02_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS02_CSIO_TDR_L	(CPG_MFS02_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS02_CSIO_RDR_D	CPG_MFS02_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS02_CSIO_TDR_D	CPG_MFS02_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS03_CSIO_RDR	(CPG_MFS03_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS03_CSIO_TDR	(CPG_MFS03_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS03_CSIO_RDR_L	(CPG_MFS03_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS03_CSIO_TDR_L	(CPG_MFS03_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS03_CSIO_RDR_D	CPG_MFS03_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS03_CSIO_TDR_D	CPG_MFS03_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS04_CSIO_RDR	(CPG_MFS04_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS04_CSIO_TDR	(CPG_MFS04_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS04_CSIO_RDR_L	(CPG_MFS04_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS04_CSIO_TDR_L	(CPG_MFS04_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS04_CSIO_RDR_D	CPG_MFS04_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS04_CSIO_TDR_D	CPG_MFS04_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS08_CSIO_RDR	(CPG_MFS08_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS08_CSIO_TDR	(CPG_MFS08_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS08_CSIO_RDR_L	(CPG_MFS08_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS08_CSIO_TDR_L	(CPG_MFS08_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS08_CSIO_RDR_D	CPG_MFS08_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS08_CSIO_TDR_D	CPG_MFS08_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS09_CSIO_RDR	(CPG_MFS09_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS09_CSIO_TDR	(CPG_MFS09_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS09_CSIO_RDR_L	(CPG_MFS09_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS09_CSIO_TDR_L	(CPG_MFS09_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS09_CSIO_RDR_D	CPG_MFS09_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS09_CSIO_TDR_D	CPG_MFS09_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS10_CSIO_RDR	(CPG_MFS10_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS10_CSIO_TDR	(CPG_MFS10_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS10_CSIO_RDR_L	(CPG_MFS10_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS10_CSIO_TDR_L	(CPG_MFS10_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS10_CSIO_RDR_D	CPG_MFS10_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS10_CSIO_TDR_D	CPG_MFS10_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS11_CSIO_RDR	(CPG_MFS11_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS11_CSIO_TDR	(CPG_MFS11_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS11_CSIO_RDR_L	(CPG_MFS11_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS11_CSIO_TDR_L	(CPG_MFS11_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS11_CSIO_RDR_D	CPG_MFS11_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS11_CSIO_TDR_D	CPG_MFS11_CSIO_RDR_D  /*@bf2@*/

#define CPG_MFS12_CSIO_RDR	(CPG_MFS12_CSIO.unRDR.u32Register)  /*@rg@*/
#define CPG_MFS12_CSIO_TDR	(CPG_MFS12_CSIO_RDR)  /*@rg2@*/
#define CPG_MFS12_CSIO_RDR_L	(CPG_MFS12_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS12_CSIO_TDR_L	(CPG_MFS12_CSIO.unRDR.au16Halfword[0])  /*@arhword@*/
#define CPG_MFS12_CSIO_RDR_D	CPG_MFS12_CSIO_RDR  /*@bfrg@*/
#define CPG_MFS12_CSIO_TDR_D	CPG_MFS12_CSIO_RDR_D  /*@bf2@*/

typedef union un_cpg_mfsn_csio_rdr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_cpg_mfsn_csio_rdr_t;

/* SACSR */
#define CPG_MFS00_CSIO_SACSR	(CPG_MFS00_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7800040)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_TDIV	(CPG_MFS00_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS00_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7800045)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7800046)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7800047)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7800048)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_TRG	(CPG_MFS00_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS00_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB780004B)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB780004C)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB780004D)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB780004F)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SACSR	(CPG_MFS01_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7802040)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_TDIV	(CPG_MFS01_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS01_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7802045)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7802046)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7802047)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7802048)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_TRG	(CPG_MFS01_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS01_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB780204B)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB780204C)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB780204D)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB780204F)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SACSR	(CPG_MFS02_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7804040)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_TDIV	(CPG_MFS02_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS02_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7804045)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7804046)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7804047)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7804048)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_TRG	(CPG_MFS02_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS02_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB780404B)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB780404C)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB780404D)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB780404F)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SACSR	(CPG_MFS03_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7806040)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_TDIV	(CPG_MFS03_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS03_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7806045)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7806046)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7806047)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7806048)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_TRG	(CPG_MFS03_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS03_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB780604B)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB780604C)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB780604D)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB780604F)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SACSR	(CPG_MFS04_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7808040)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_TDIV	(CPG_MFS04_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS04_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7808045)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7808046)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7808047)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7808048)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_TRG	(CPG_MFS04_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS04_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB780804B)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB780804C)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB780804D)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB780804F)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SACSR	(CPG_MFS08_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C00040)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_TDIV	(CPG_MFS08_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS08_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C00045)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7C00046)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C00047)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C00048)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_TRG	(CPG_MFS08_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS08_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB7C0004B)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB7C0004C)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB7C0004D)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0004F)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SACSR	(CPG_MFS09_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C02040)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_TDIV	(CPG_MFS09_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS09_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C02045)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7C02046)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C02047)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C02048)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_TRG	(CPG_MFS09_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS09_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB7C0204B)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB7C0204C)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB7C0204D)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0204F)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SACSR	(CPG_MFS10_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C04040)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_TDIV	(CPG_MFS10_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS10_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C04045)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7C04046)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C04047)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C04048)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_TRG	(CPG_MFS10_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS10_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB7C0404B)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB7C0404C)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB7C0404D)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0404F)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SACSR	(CPG_MFS11_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C06040)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_TDIV	(CPG_MFS11_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS11_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C06045)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7C06046)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C06047)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C06048)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_TRG	(CPG_MFS11_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS11_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB7C0604B)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB7C0604C)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB7C0604D)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0604F)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SACSR	(CPG_MFS12_CSIO.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C08040)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_TDIV	(CPG_MFS12_CSIO.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS12_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C08045)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB7C08046)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C08047)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C08048)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_TRG	(CPG_MFS12_CSIO.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS12_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB7C0804B)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB7C0804C)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB7C0804D)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0804F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_sacsr_field{
    uint_io16_t		u1TMRE:1;
    uint_io16_t		u4TDIV:4;
    uint_io16_t		u1TRGE:1;
    uint_io16_t		u1TSYNE:1;
    uint_io16_t		u1TINTE:1;
    uint_io16_t		u1TINT:1;
    uint_io16_t		u2TRG:2;
    uint_io16_t		u1CSE:1;
    uint_io16_t		u1CSEIE:1;
    uint_io16_t		u1TBEEN:1;
    uint_io16_t		:1;
    uint_io16_t		u1STST:1;
}stc_cpg_mfsn_csio_sacsr_field_t;

typedef union un_cpg_mfsn_csio_sacsr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_csio_sacsr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_sacsr_t;

/* STMR */
#define CPG_MFS00_CSIO_STMR	(CPG_MFS00_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_STMR_TM	CPG_MFS00_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS01_CSIO_STMR	(CPG_MFS01_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_STMR_TM	CPG_MFS01_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS02_CSIO_STMR	(CPG_MFS02_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_STMR_TM	CPG_MFS02_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS03_CSIO_STMR	(CPG_MFS03_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_STMR_TM	CPG_MFS03_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS04_CSIO_STMR	(CPG_MFS04_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_STMR_TM	CPG_MFS04_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS08_CSIO_STMR	(CPG_MFS08_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_STMR_TM	CPG_MFS08_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS09_CSIO_STMR	(CPG_MFS09_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_STMR_TM	CPG_MFS09_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS10_CSIO_STMR	(CPG_MFS10_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_STMR_TM	CPG_MFS10_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS11_CSIO_STMR	(CPG_MFS11_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_STMR_TM	CPG_MFS11_CSIO_STMR  /*@bfrg@*/

#define CPG_MFS12_CSIO_STMR	(CPG_MFS12_CSIO.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_STMR_TM	CPG_MFS12_CSIO_STMR  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_stmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_stmr_t;

/* STMCR */
#define CPG_MFS00_CSIO_STMCR	(CPG_MFS00_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_STMCR_TC	CPG_MFS00_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS01_CSIO_STMCR	(CPG_MFS01_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_STMCR_TC	CPG_MFS01_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS02_CSIO_STMCR	(CPG_MFS02_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_STMCR_TC	CPG_MFS02_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS03_CSIO_STMCR	(CPG_MFS03_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_STMCR_TC	CPG_MFS03_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS04_CSIO_STMCR	(CPG_MFS04_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_STMCR_TC	CPG_MFS04_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS08_CSIO_STMCR	(CPG_MFS08_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_STMCR_TC	CPG_MFS08_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS09_CSIO_STMCR	(CPG_MFS09_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_STMCR_TC	CPG_MFS09_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS10_CSIO_STMCR	(CPG_MFS10_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_STMCR_TC	CPG_MFS10_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS11_CSIO_STMCR	(CPG_MFS11_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_STMCR_TC	CPG_MFS11_CSIO_STMCR  /*@bfrg@*/

#define CPG_MFS12_CSIO_STMCR	(CPG_MFS12_CSIO.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_STMCR_TC	CPG_MFS12_CSIO_STMCR  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_stmcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_stmcr_t;

/* SCSCR */
#define CPG_MFS00_CSIO_SCSCR	(CPG_MFS00_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7800070)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7800071)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7800072)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7800073)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7800074)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7800075)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSCR_CDIV	(CPG_MFS00_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS00_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7800079)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSCR_SCD	(CPG_MFS00_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS00_CSIO_SCSCR_SED	(CPG_MFS00_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS00_CSIO_SCSCR_SST	(CPG_MFS00_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS01_CSIO_SCSCR	(CPG_MFS01_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7802070)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7802071)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7802072)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7802073)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7802074)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7802075)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSCR_CDIV	(CPG_MFS01_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS01_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7802079)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSCR_SCD	(CPG_MFS01_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS01_CSIO_SCSCR_SED	(CPG_MFS01_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS01_CSIO_SCSCR_SST	(CPG_MFS01_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS02_CSIO_SCSCR	(CPG_MFS02_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7804070)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7804071)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7804072)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7804073)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7804074)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7804075)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSCR_CDIV	(CPG_MFS02_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS02_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7804079)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSCR_SCD	(CPG_MFS02_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS02_CSIO_SCSCR_SED	(CPG_MFS02_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS02_CSIO_SCSCR_SST	(CPG_MFS02_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS03_CSIO_SCSCR	(CPG_MFS03_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7806070)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7806071)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7806072)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7806073)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7806074)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7806075)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSCR_CDIV	(CPG_MFS03_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS03_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7806079)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSCR_SCD	(CPG_MFS03_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS03_CSIO_SCSCR_SED	(CPG_MFS03_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS03_CSIO_SCSCR_SST	(CPG_MFS03_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS04_CSIO_SCSCR	(CPG_MFS04_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7808070)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7808071)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7808072)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7808073)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7808074)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7808075)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSCR_CDIV	(CPG_MFS04_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS04_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7808079)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSCR_SCD	(CPG_MFS04_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS04_CSIO_SCSCR_SED	(CPG_MFS04_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS04_CSIO_SCSCR_SST	(CPG_MFS04_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS08_CSIO_SCSCR	(CPG_MFS08_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7C00070)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7C00071)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7C00072)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7C00073)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7C00074)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7C00075)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSCR_CDIV	(CPG_MFS08_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS08_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7C00079)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSCR_SCD	(CPG_MFS08_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS08_CSIO_SCSCR_SED	(CPG_MFS08_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS08_CSIO_SCSCR_SST	(CPG_MFS08_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS09_CSIO_SCSCR	(CPG_MFS09_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7C02070)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7C02071)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7C02072)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7C02073)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7C02074)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7C02075)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSCR_CDIV	(CPG_MFS09_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS09_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7C02079)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSCR_SCD	(CPG_MFS09_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS09_CSIO_SCSCR_SED	(CPG_MFS09_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS09_CSIO_SCSCR_SST	(CPG_MFS09_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS10_CSIO_SCSCR	(CPG_MFS10_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7C04070)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7C04071)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7C04072)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7C04073)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7C04074)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7C04075)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSCR_CDIV	(CPG_MFS10_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS10_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7C04079)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSCR_SCD	(CPG_MFS10_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS10_CSIO_SCSCR_SED	(CPG_MFS10_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS10_CSIO_SCSCR_SST	(CPG_MFS10_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS11_CSIO_SCSCR	(CPG_MFS11_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7C06070)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7C06071)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7C06072)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7C06073)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7C06074)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7C06075)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSCR_CDIV	(CPG_MFS11_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS11_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7C06079)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSCR_SCD	(CPG_MFS11_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS11_CSIO_SCSCR_SED	(CPG_MFS11_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS11_CSIO_SCSCR_SST	(CPG_MFS11_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

#define CPG_MFS12_CSIO_SCSCR	(CPG_MFS12_CSIO.unSCSCR.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB7C08070)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB7C08071)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB7C08072)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB7C08073)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB7C08074)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB7C08075)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSCR_CDIV	(CPG_MFS12_CSIO.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define CPG_MFS12_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB7C08079)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSCR_SCD	(CPG_MFS12_CSIO.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define CPG_MFS12_CSIO_SCSCR_SED	(CPG_MFS12_CSIO.unSCSCR.stcField.u2SED)  /*@bf@*/
#define CPG_MFS12_CSIO_SCSCR_SST	(CPG_MFS12_CSIO.unSCSCR.stcField.u2SST)  /*@bf@*/

typedef struct stc_cpg_mfsn_csio_scscr_field{
    uint_io16_t		u1CSOE:1;
    uint_io16_t		u1CSEN0:1;
    uint_io16_t		u1CSEN1:1;
    uint_io16_t		u1CSEN2:1;
    uint_io16_t		u1CSEN3:1;
    uint_io16_t		u1CSLVL:1;
    uint_io16_t		u3CDIV:3;
    uint_io16_t		u1SCAM:1;
    uint_io16_t		u2SCD:2;
    uint_io16_t		u2SED:2;
    uint_io16_t		u2SST:2;
}stc_cpg_mfsn_csio_scscr_field_t;

typedef union un_cpg_mfsn_csio_scscr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_csio_scscr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_scscr_t;

/* SCSTR0 */
#define CPG_MFS00_CSIO_SCSTR0	(CPG_MFS00_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCSTR0_CSHD	CPG_MFS00_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS01_CSIO_SCSTR0	(CPG_MFS01_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCSTR0_CSHD	CPG_MFS01_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS02_CSIO_SCSTR0	(CPG_MFS02_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCSTR0_CSHD	CPG_MFS02_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS03_CSIO_SCSTR0	(CPG_MFS03_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCSTR0_CSHD	CPG_MFS03_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS04_CSIO_SCSTR0	(CPG_MFS04_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCSTR0_CSHD	CPG_MFS04_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS08_CSIO_SCSTR0	(CPG_MFS08_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCSTR0_CSHD	CPG_MFS08_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS09_CSIO_SCSTR0	(CPG_MFS09_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCSTR0_CSHD	CPG_MFS09_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS10_CSIO_SCSTR0	(CPG_MFS10_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCSTR0_CSHD	CPG_MFS10_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS11_CSIO_SCSTR0	(CPG_MFS11_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCSTR0_CSHD	CPG_MFS11_CSIO_SCSTR0  /*@bfrg@*/

#define CPG_MFS12_CSIO_SCSTR0	(CPG_MFS12_CSIO.unSCSTR0.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCSTR0_CSHD	CPG_MFS12_CSIO_SCSTR0  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_scstr0{
    uint_io8_t		u8Register;
}un_cpg_mfsn_csio_scstr0_t;

/* SCSTR1 */
#define CPG_MFS00_CSIO_SCSTR1	(CPG_MFS00_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCSTR1_CSSU	CPG_MFS00_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS01_CSIO_SCSTR1	(CPG_MFS01_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCSTR1_CSSU	CPG_MFS01_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS02_CSIO_SCSTR1	(CPG_MFS02_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCSTR1_CSSU	CPG_MFS02_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS03_CSIO_SCSTR1	(CPG_MFS03_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCSTR1_CSSU	CPG_MFS03_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS04_CSIO_SCSTR1	(CPG_MFS04_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCSTR1_CSSU	CPG_MFS04_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS08_CSIO_SCSTR1	(CPG_MFS08_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCSTR1_CSSU	CPG_MFS08_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS09_CSIO_SCSTR1	(CPG_MFS09_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCSTR1_CSSU	CPG_MFS09_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS10_CSIO_SCSTR1	(CPG_MFS10_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCSTR1_CSSU	CPG_MFS10_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS11_CSIO_SCSTR1	(CPG_MFS11_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCSTR1_CSSU	CPG_MFS11_CSIO_SCSTR1  /*@bfrg@*/

#define CPG_MFS12_CSIO_SCSTR1	(CPG_MFS12_CSIO.unSCSTR1.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCSTR1_CSSU	CPG_MFS12_CSIO_SCSTR1  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_scstr1{
    uint_io8_t		u8Register;
}un_cpg_mfsn_csio_scstr1_t;

/* SCSTR23 */
#define CPG_MFS00_CSIO_SCSTR23	(CPG_MFS00_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCSTR2	(CPG_MFS00_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS00_CSIO_SCSTR3	(CPG_MFS00_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS00_CSIO_SCSTR23_CSDS	CPG_MFS00_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS01_CSIO_SCSTR23	(CPG_MFS01_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCSTR2	(CPG_MFS01_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS01_CSIO_SCSTR3	(CPG_MFS01_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS01_CSIO_SCSTR23_CSDS	CPG_MFS01_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS02_CSIO_SCSTR23	(CPG_MFS02_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCSTR2	(CPG_MFS02_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS02_CSIO_SCSTR3	(CPG_MFS02_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS02_CSIO_SCSTR23_CSDS	CPG_MFS02_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS03_CSIO_SCSTR23	(CPG_MFS03_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCSTR2	(CPG_MFS03_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS03_CSIO_SCSTR3	(CPG_MFS03_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS03_CSIO_SCSTR23_CSDS	CPG_MFS03_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS04_CSIO_SCSTR23	(CPG_MFS04_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCSTR2	(CPG_MFS04_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS04_CSIO_SCSTR3	(CPG_MFS04_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS04_CSIO_SCSTR23_CSDS	CPG_MFS04_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS08_CSIO_SCSTR23	(CPG_MFS08_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCSTR2	(CPG_MFS08_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS08_CSIO_SCSTR3	(CPG_MFS08_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS08_CSIO_SCSTR23_CSDS	CPG_MFS08_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS09_CSIO_SCSTR23	(CPG_MFS09_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCSTR2	(CPG_MFS09_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS09_CSIO_SCSTR3	(CPG_MFS09_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS09_CSIO_SCSTR23_CSDS	CPG_MFS09_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS10_CSIO_SCSTR23	(CPG_MFS10_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCSTR2	(CPG_MFS10_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS10_CSIO_SCSTR3	(CPG_MFS10_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS10_CSIO_SCSTR23_CSDS	CPG_MFS10_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS11_CSIO_SCSTR23	(CPG_MFS11_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCSTR2	(CPG_MFS11_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS11_CSIO_SCSTR3	(CPG_MFS11_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS11_CSIO_SCSTR23_CSDS	CPG_MFS11_CSIO_SCSTR23  /*@bfrg@*/

#define CPG_MFS12_CSIO_SCSTR23	(CPG_MFS12_CSIO.unSCSTR23.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCSTR2	(CPG_MFS12_CSIO.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define CPG_MFS12_CSIO_SCSTR3	(CPG_MFS12_CSIO.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define CPG_MFS12_CSIO_SCSTR23_CSDS	CPG_MFS12_CSIO_SCSTR23  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_scstr23{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_scstr23_t;

/* SCSFR0 */
#define CPG_MFS00_CSIO_SCSFR0	(CPG_MFS00_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCSFR0_CS1L	(CPG_MFS00_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS00_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB78000A4)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB78000A5)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB78000A6)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB78000A7)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SCSFR0	(CPG_MFS01_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCSFR0_CS1L	(CPG_MFS01_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS01_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB78020A4)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB78020A5)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB78020A6)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB78020A7)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SCSFR0	(CPG_MFS02_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCSFR0_CS1L	(CPG_MFS02_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS02_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB78040A4)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB78040A5)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB78040A6)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB78040A7)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SCSFR0	(CPG_MFS03_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCSFR0_CS1L	(CPG_MFS03_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS03_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB78060A4)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB78060A5)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB78060A6)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB78060A7)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SCSFR0	(CPG_MFS04_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCSFR0_CS1L	(CPG_MFS04_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS04_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB78080A4)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB78080A5)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB78080A6)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB78080A7)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SCSFR0	(CPG_MFS08_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCSFR0_CS1L	(CPG_MFS08_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS08_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB7C000A4)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB7C000A5)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB7C000A6)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB7C000A7)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SCSFR0	(CPG_MFS09_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCSFR0_CS1L	(CPG_MFS09_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS09_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB7C020A4)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB7C020A5)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB7C020A6)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB7C020A7)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SCSFR0	(CPG_MFS10_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCSFR0_CS1L	(CPG_MFS10_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS10_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB7C040A4)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB7C040A5)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB7C040A6)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB7C040A7)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SCSFR0	(CPG_MFS11_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCSFR0_CS1L	(CPG_MFS11_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS11_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB7C060A4)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB7C060A5)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB7C060A6)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB7C060A7)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SCSFR0	(CPG_MFS12_CSIO.unSCSFR0.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCSFR0_CS1L	(CPG_MFS12_CSIO.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define CPG_MFS12_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB7C080A4)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB7C080A5)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB7C080A6)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB7C080A7)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_scsfr0_field{
    uint_io8_t		u4CS1L:4;
    uint_io8_t		u1CS1BDS:1;
    uint_io8_t		u1CS1SPI:1;
    uint_io8_t		u1CS1SCINV:1;
    uint_io8_t		u1CS1CSLVL:1;
}stc_cpg_mfsn_csio_scsfr0_field_t;

typedef union un_cpg_mfsn_csio_scsfr0{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_scsfr0_field_t		stcField;
}un_cpg_mfsn_csio_scsfr0_t;

/* SCSFR1 */
#define CPG_MFS00_CSIO_SCSFR1	(CPG_MFS00_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCSFR1_CS2L	(CPG_MFS00_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS00_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB78000AC)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB78000AD)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB78000AE)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB78000AF)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SCSFR1	(CPG_MFS01_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCSFR1_CS2L	(CPG_MFS01_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS01_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB78020AC)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB78020AD)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB78020AE)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB78020AF)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SCSFR1	(CPG_MFS02_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCSFR1_CS2L	(CPG_MFS02_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS02_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB78040AC)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB78040AD)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB78040AE)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB78040AF)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SCSFR1	(CPG_MFS03_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCSFR1_CS2L	(CPG_MFS03_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS03_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB78060AC)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB78060AD)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB78060AE)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB78060AF)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SCSFR1	(CPG_MFS04_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCSFR1_CS2L	(CPG_MFS04_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS04_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB78080AC)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB78080AD)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB78080AE)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB78080AF)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SCSFR1	(CPG_MFS08_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCSFR1_CS2L	(CPG_MFS08_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS08_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB7C000AC)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB7C000AD)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB7C000AE)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB7C000AF)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SCSFR1	(CPG_MFS09_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCSFR1_CS2L	(CPG_MFS09_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS09_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB7C020AC)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB7C020AD)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB7C020AE)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB7C020AF)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SCSFR1	(CPG_MFS10_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCSFR1_CS2L	(CPG_MFS10_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS10_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB7C040AC)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB7C040AD)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB7C040AE)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB7C040AF)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SCSFR1	(CPG_MFS11_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCSFR1_CS2L	(CPG_MFS11_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS11_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB7C060AC)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB7C060AD)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB7C060AE)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB7C060AF)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SCSFR1	(CPG_MFS12_CSIO.unSCSFR1.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCSFR1_CS2L	(CPG_MFS12_CSIO.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define CPG_MFS12_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB7C080AC)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB7C080AD)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB7C080AE)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB7C080AF)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_scsfr1_field{
    uint_io8_t		u4CS2L:4;
    uint_io8_t		u1CS2BDS:1;
    uint_io8_t		u1CS2SPI:1;
    uint_io8_t		u1CS2SCINV:1;
    uint_io8_t		u1CS2CSLVL:1;
}stc_cpg_mfsn_csio_scsfr1_field_t;

typedef union un_cpg_mfsn_csio_scsfr1{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_scsfr1_field_t		stcField;
}un_cpg_mfsn_csio_scsfr1_t;

/* SCSFR2 */
#define CPG_MFS00_CSIO_SCSFR2	(CPG_MFS00_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SCSFR2_CS3L	(CPG_MFS00_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS00_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB78000B4)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB78000B5)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB78000B6)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB78000B7)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SCSFR2	(CPG_MFS01_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SCSFR2_CS3L	(CPG_MFS01_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS01_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB78020B4)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB78020B5)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB78020B6)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB78020B7)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SCSFR2	(CPG_MFS02_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SCSFR2_CS3L	(CPG_MFS02_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS02_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB78040B4)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB78040B5)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB78040B6)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB78040B7)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SCSFR2	(CPG_MFS03_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SCSFR2_CS3L	(CPG_MFS03_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS03_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB78060B4)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB78060B5)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB78060B6)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB78060B7)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SCSFR2	(CPG_MFS04_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SCSFR2_CS3L	(CPG_MFS04_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS04_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB78080B4)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB78080B5)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB78080B6)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB78080B7)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SCSFR2	(CPG_MFS08_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SCSFR2_CS3L	(CPG_MFS08_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS08_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB7C000B4)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB7C000B5)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB7C000B6)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB7C000B7)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SCSFR2	(CPG_MFS09_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SCSFR2_CS3L	(CPG_MFS09_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS09_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB7C020B4)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB7C020B5)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB7C020B6)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB7C020B7)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SCSFR2	(CPG_MFS10_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SCSFR2_CS3L	(CPG_MFS10_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS10_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB7C040B4)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB7C040B5)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB7C040B6)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB7C040B7)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SCSFR2	(CPG_MFS11_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SCSFR2_CS3L	(CPG_MFS11_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS11_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB7C060B4)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB7C060B5)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB7C060B6)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB7C060B7)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SCSFR2	(CPG_MFS12_CSIO.unSCSFR2.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SCSFR2_CS3L	(CPG_MFS12_CSIO.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define CPG_MFS12_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB7C080B4)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB7C080B5)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB7C080B6)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB7C080B7)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_scsfr2_field{
    uint_io8_t		u4CS3L:4;
    uint_io8_t		u1CS3BDS:1;
    uint_io8_t		u1CS3SPI:1;
    uint_io8_t		u1CS3SCINV:1;
    uint_io8_t		u1CS3CSLVL:1;
}stc_cpg_mfsn_csio_scsfr2_field_t;

typedef union un_cpg_mfsn_csio_scsfr2{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_scsfr2_field_t		stcField;
}un_cpg_mfsn_csio_scsfr2_t;

/* TBYTE0 */
#define CPG_MFS00_CSIO_TBYTE0	(CPG_MFS00_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_TBYTE0_TBYTE0	CPG_MFS00_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS01_CSIO_TBYTE0	(CPG_MFS01_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_TBYTE0_TBYTE0	CPG_MFS01_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS02_CSIO_TBYTE0	(CPG_MFS02_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_TBYTE0_TBYTE0	CPG_MFS02_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS03_CSIO_TBYTE0	(CPG_MFS03_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_TBYTE0_TBYTE0	CPG_MFS03_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS04_CSIO_TBYTE0	(CPG_MFS04_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_TBYTE0_TBYTE0	CPG_MFS04_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS08_CSIO_TBYTE0	(CPG_MFS08_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_TBYTE0_TBYTE0	CPG_MFS08_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS09_CSIO_TBYTE0	(CPG_MFS09_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_TBYTE0_TBYTE0	CPG_MFS09_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS10_CSIO_TBYTE0	(CPG_MFS10_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_TBYTE0_TBYTE0	CPG_MFS10_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS11_CSIO_TBYTE0	(CPG_MFS11_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_TBYTE0_TBYTE0	CPG_MFS11_CSIO_TBYTE0  /*@bfrg@*/

#define CPG_MFS12_CSIO_TBYTE0	(CPG_MFS12_CSIO.unTBYTE0.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_TBYTE0_TBYTE0	CPG_MFS12_CSIO_TBYTE0  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_tbyte0{
    uint_io8_t		u8Register;
}un_cpg_mfsn_csio_tbyte0_t;

/* TBYTE1 */
#define CPG_MFS00_CSIO_TBYTE1	(CPG_MFS00_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_TBYTE1_TBYTE1	CPG_MFS00_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS01_CSIO_TBYTE1	(CPG_MFS01_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_TBYTE1_TBYTE1	CPG_MFS01_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS02_CSIO_TBYTE1	(CPG_MFS02_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_TBYTE1_TBYTE1	CPG_MFS02_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS03_CSIO_TBYTE1	(CPG_MFS03_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_TBYTE1_TBYTE1	CPG_MFS03_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS04_CSIO_TBYTE1	(CPG_MFS04_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_TBYTE1_TBYTE1	CPG_MFS04_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS08_CSIO_TBYTE1	(CPG_MFS08_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_TBYTE1_TBYTE1	CPG_MFS08_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS09_CSIO_TBYTE1	(CPG_MFS09_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_TBYTE1_TBYTE1	CPG_MFS09_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS10_CSIO_TBYTE1	(CPG_MFS10_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_TBYTE1_TBYTE1	CPG_MFS10_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS11_CSIO_TBYTE1	(CPG_MFS11_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_TBYTE1_TBYTE1	CPG_MFS11_CSIO_TBYTE1  /*@bfrg@*/

#define CPG_MFS12_CSIO_TBYTE1	(CPG_MFS12_CSIO.unTBYTE1.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_TBYTE1_TBYTE1	CPG_MFS12_CSIO_TBYTE1  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_tbyte1{
    uint_io8_t		u8Register;
}un_cpg_mfsn_csio_tbyte1_t;

/* TBYTE2 */
#define CPG_MFS00_CSIO_TBYTE2	(CPG_MFS00_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_TBYTE2_TBYTE2	CPG_MFS00_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS01_CSIO_TBYTE2	(CPG_MFS01_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_TBYTE2_TBYTE2	CPG_MFS01_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS02_CSIO_TBYTE2	(CPG_MFS02_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_TBYTE2_TBYTE2	CPG_MFS02_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS03_CSIO_TBYTE2	(CPG_MFS03_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_TBYTE2_TBYTE2	CPG_MFS03_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS04_CSIO_TBYTE2	(CPG_MFS04_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_TBYTE2_TBYTE2	CPG_MFS04_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS08_CSIO_TBYTE2	(CPG_MFS08_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_TBYTE2_TBYTE2	CPG_MFS08_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS09_CSIO_TBYTE2	(CPG_MFS09_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_TBYTE2_TBYTE2	CPG_MFS09_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS10_CSIO_TBYTE2	(CPG_MFS10_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_TBYTE2_TBYTE2	CPG_MFS10_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS11_CSIO_TBYTE2	(CPG_MFS11_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_TBYTE2_TBYTE2	CPG_MFS11_CSIO_TBYTE2  /*@bfrg@*/

#define CPG_MFS12_CSIO_TBYTE2	(CPG_MFS12_CSIO.unTBYTE2.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_TBYTE2_TBYTE2	CPG_MFS12_CSIO_TBYTE2  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_tbyte2{
    uint_io8_t		u8Register;
}un_cpg_mfsn_csio_tbyte2_t;

/* TBYTE3 */
#define CPG_MFS00_CSIO_TBYTE3	(CPG_MFS00_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_TBYTE3_TBYTE3	CPG_MFS00_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS01_CSIO_TBYTE3	(CPG_MFS01_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_TBYTE3_TBYTE3	CPG_MFS01_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS02_CSIO_TBYTE3	(CPG_MFS02_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_TBYTE3_TBYTE3	CPG_MFS02_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS03_CSIO_TBYTE3	(CPG_MFS03_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_TBYTE3_TBYTE3	CPG_MFS03_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS04_CSIO_TBYTE3	(CPG_MFS04_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_TBYTE3_TBYTE3	CPG_MFS04_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS08_CSIO_TBYTE3	(CPG_MFS08_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_TBYTE3_TBYTE3	CPG_MFS08_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS09_CSIO_TBYTE3	(CPG_MFS09_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_TBYTE3_TBYTE3	CPG_MFS09_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS10_CSIO_TBYTE3	(CPG_MFS10_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_TBYTE3_TBYTE3	CPG_MFS10_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS11_CSIO_TBYTE3	(CPG_MFS11_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_TBYTE3_TBYTE3	CPG_MFS11_CSIO_TBYTE3  /*@bfrg@*/

#define CPG_MFS12_CSIO_TBYTE3	(CPG_MFS12_CSIO.unTBYTE3.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_TBYTE3_TBYTE3	CPG_MFS12_CSIO_TBYTE3  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_tbyte3{
    uint_io8_t		u8Register;
}un_cpg_mfsn_csio_tbyte3_t;

/* BGR */
#define CPG_MFS00_CSIO_BGR	(CPG_MFS00_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_BGR_BGR	(CPG_MFS00_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS01_CSIO_BGR	(CPG_MFS01_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_BGR_BGR	(CPG_MFS01_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS02_CSIO_BGR	(CPG_MFS02_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_BGR_BGR	(CPG_MFS02_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS03_CSIO_BGR	(CPG_MFS03_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_BGR_BGR	(CPG_MFS03_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS04_CSIO_BGR	(CPG_MFS04_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_BGR_BGR	(CPG_MFS04_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS08_CSIO_BGR	(CPG_MFS08_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_BGR_BGR	(CPG_MFS08_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS09_CSIO_BGR	(CPG_MFS09_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_BGR_BGR	(CPG_MFS09_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS10_CSIO_BGR	(CPG_MFS10_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_BGR_BGR	(CPG_MFS10_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS11_CSIO_BGR	(CPG_MFS11_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_BGR_BGR	(CPG_MFS11_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

#define CPG_MFS12_CSIO_BGR	(CPG_MFS12_CSIO.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_BGR_BGR	(CPG_MFS12_CSIO.unBGR.stcField.u15BGR)  /*@bf@*/

typedef struct stc_cpg_mfsn_csio_bgr_field{
    uint_io16_t		u15BGR:15;
    uint_io16_t		:1;
}stc_cpg_mfsn_csio_bgr_field_t;

typedef union un_cpg_mfsn_csio_bgr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_csio_bgr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_bgr_t;

/* FCR0 */
#define CPG_MFS00_CSIO_FCR0	(CPG_MFS00_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7800100)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7800101)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7800102)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7800103)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7800104)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7800105)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7800106)  /*@bfbba@*/

#define CPG_MFS01_CSIO_FCR0	(CPG_MFS01_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7802100)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7802101)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7802102)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7802103)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7802104)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7802105)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7802106)  /*@bfbba@*/

#define CPG_MFS02_CSIO_FCR0	(CPG_MFS02_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7804100)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7804101)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7804102)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7804103)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7804104)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7804105)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7804106)  /*@bfbba@*/

#define CPG_MFS03_CSIO_FCR0	(CPG_MFS03_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7806100)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7806101)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7806102)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7806103)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7806104)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7806105)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7806106)  /*@bfbba@*/

#define CPG_MFS04_CSIO_FCR0	(CPG_MFS04_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7808100)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7808101)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7808102)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7808103)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7808104)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7808105)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7808106)  /*@bfbba@*/

#define CPG_MFS08_CSIO_FCR0	(CPG_MFS08_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C00100)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C00101)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C00102)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C00103)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C00104)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C00105)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C00106)  /*@bfbba@*/

#define CPG_MFS09_CSIO_FCR0	(CPG_MFS09_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C02100)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C02101)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C02102)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C02103)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C02104)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C02105)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C02106)  /*@bfbba@*/

#define CPG_MFS10_CSIO_FCR0	(CPG_MFS10_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C04100)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C04101)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C04102)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C04103)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C04104)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C04105)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C04106)  /*@bfbba@*/

#define CPG_MFS11_CSIO_FCR0	(CPG_MFS11_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C06100)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C06101)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C06102)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C06103)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C06104)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C06105)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C06106)  /*@bfbba@*/

#define CPG_MFS12_CSIO_FCR0	(CPG_MFS12_CSIO.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C08100)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C08101)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C08102)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C08103)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C08104)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C08105)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C08106)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_fcr0_field{
    uint_io8_t		u1FE1:1;
    uint_io8_t		u1FE2:1;
    uint_io8_t		u1FCL1:1;
    uint_io8_t		u1FCL2:1;
    uint_io8_t		u1FSET:1;
    uint_io8_t		u1FLD:1;
    uint_io8_t		u1FLST:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_csio_fcr0_field_t;

typedef union un_cpg_mfsn_csio_fcr0{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_fcr0_field_t		stcField;
}un_cpg_mfsn_csio_fcr0_t;

/* FCR1 */
#define CPG_MFS00_CSIO_FCR1	(CPG_MFS00_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7800108)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7800109)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780010A)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780010B)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780010C)  /*@bfbba@*/

#define CPG_MFS01_CSIO_FCR1	(CPG_MFS01_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7802108)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7802109)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780210A)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780210B)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780210C)  /*@bfbba@*/

#define CPG_MFS02_CSIO_FCR1	(CPG_MFS02_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7804108)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7804109)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780410A)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780410B)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780410C)  /*@bfbba@*/

#define CPG_MFS03_CSIO_FCR1	(CPG_MFS03_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7806108)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7806109)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780610A)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780610B)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780610C)  /*@bfbba@*/

#define CPG_MFS04_CSIO_FCR1	(CPG_MFS04_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7808108)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7808109)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780810A)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780810B)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780810C)  /*@bfbba@*/

#define CPG_MFS08_CSIO_FCR1	(CPG_MFS08_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C00108)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C00109)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0010A)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0010B)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0010C)  /*@bfbba@*/

#define CPG_MFS09_CSIO_FCR1	(CPG_MFS09_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C02108)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C02109)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0210A)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0210B)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0210C)  /*@bfbba@*/

#define CPG_MFS10_CSIO_FCR1	(CPG_MFS10_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C04108)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C04109)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0410A)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0410B)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0410C)  /*@bfbba@*/

#define CPG_MFS11_CSIO_FCR1	(CPG_MFS11_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C06108)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C06109)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0610A)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0610B)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0610C)  /*@bfbba@*/

#define CPG_MFS12_CSIO_FCR1	(CPG_MFS12_CSIO.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C08108)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C08109)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0810A)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0810B)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0810C)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_fcr1_field{
    uint_io8_t		u1FSEL:1;
    uint_io8_t		u1FTIE:1;
    uint_io8_t		u1FDRQ:1;
    uint_io8_t		u1FRIIE:1;
    uint_io8_t		u1FLSTE:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_csio_fcr1_field_t;

typedef union un_cpg_mfsn_csio_fcr1{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_fcr1_field_t		stcField;
}un_cpg_mfsn_csio_fcr1_t;

/* FBYTE */
#define CPG_MFS00_CSIO_FBYTE	(CPG_MFS00_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FBYTE_FBYTE1	(CPG_MFS00_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS00_CSIO_FBYTE_FBYTE2	(CPG_MFS00_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS01_CSIO_FBYTE	(CPG_MFS01_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FBYTE_FBYTE1	(CPG_MFS01_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS01_CSIO_FBYTE_FBYTE2	(CPG_MFS01_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS02_CSIO_FBYTE	(CPG_MFS02_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FBYTE_FBYTE1	(CPG_MFS02_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS02_CSIO_FBYTE_FBYTE2	(CPG_MFS02_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS03_CSIO_FBYTE	(CPG_MFS03_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FBYTE_FBYTE1	(CPG_MFS03_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS03_CSIO_FBYTE_FBYTE2	(CPG_MFS03_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS04_CSIO_FBYTE	(CPG_MFS04_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FBYTE_FBYTE1	(CPG_MFS04_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS04_CSIO_FBYTE_FBYTE2	(CPG_MFS04_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS08_CSIO_FBYTE	(CPG_MFS08_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FBYTE_FBYTE1	(CPG_MFS08_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS08_CSIO_FBYTE_FBYTE2	(CPG_MFS08_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS09_CSIO_FBYTE	(CPG_MFS09_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FBYTE_FBYTE1	(CPG_MFS09_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS09_CSIO_FBYTE_FBYTE2	(CPG_MFS09_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS10_CSIO_FBYTE	(CPG_MFS10_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FBYTE_FBYTE1	(CPG_MFS10_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS10_CSIO_FBYTE_FBYTE2	(CPG_MFS10_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS11_CSIO_FBYTE	(CPG_MFS11_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FBYTE_FBYTE1	(CPG_MFS11_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS11_CSIO_FBYTE_FBYTE2	(CPG_MFS11_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS12_CSIO_FBYTE	(CPG_MFS12_CSIO.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FBYTE_FBYTE1	(CPG_MFS12_CSIO.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS12_CSIO_FBYTE_FBYTE2	(CPG_MFS12_CSIO.unFBYTE.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_cpg_mfsn_csio_fbyte_field{
    uint_io16_t		u8FBYTE1:8;
    uint_io16_t		u8FBYTE2:8;
}stc_cpg_mfsn_csio_fbyte_field_t;

typedef union un_cpg_mfsn_csio_fbyte{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_csio_fbyte_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_fbyte_t;

/* FTICR */
#define CPG_MFS00_CSIO_FTICR	(CPG_MFS00_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FTICR_FTICR1	(CPG_MFS00_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS00_CSIO_FTICR_FTICR2	(CPG_MFS00_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS01_CSIO_FTICR	(CPG_MFS01_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FTICR_FTICR1	(CPG_MFS01_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS01_CSIO_FTICR_FTICR2	(CPG_MFS01_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS02_CSIO_FTICR	(CPG_MFS02_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FTICR_FTICR1	(CPG_MFS02_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS02_CSIO_FTICR_FTICR2	(CPG_MFS02_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS03_CSIO_FTICR	(CPG_MFS03_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FTICR_FTICR1	(CPG_MFS03_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS03_CSIO_FTICR_FTICR2	(CPG_MFS03_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS04_CSIO_FTICR	(CPG_MFS04_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FTICR_FTICR1	(CPG_MFS04_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS04_CSIO_FTICR_FTICR2	(CPG_MFS04_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS08_CSIO_FTICR	(CPG_MFS08_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FTICR_FTICR1	(CPG_MFS08_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS08_CSIO_FTICR_FTICR2	(CPG_MFS08_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS09_CSIO_FTICR	(CPG_MFS09_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FTICR_FTICR1	(CPG_MFS09_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS09_CSIO_FTICR_FTICR2	(CPG_MFS09_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS10_CSIO_FTICR	(CPG_MFS10_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FTICR_FTICR1	(CPG_MFS10_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS10_CSIO_FTICR_FTICR2	(CPG_MFS10_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS11_CSIO_FTICR	(CPG_MFS11_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FTICR_FTICR1	(CPG_MFS11_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS11_CSIO_FTICR_FTICR2	(CPG_MFS11_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS12_CSIO_FTICR	(CPG_MFS12_CSIO.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FTICR_FTICR1	(CPG_MFS12_CSIO.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS12_CSIO_FTICR_FTICR2	(CPG_MFS12_CSIO.unFTICR.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_cpg_mfsn_csio_fticr_field{
    uint_io16_t		u8FTICR1:8;
    uint_io16_t		u8FTICR2:8;
}stc_cpg_mfsn_csio_fticr_field_t;

typedef union un_cpg_mfsn_csio_fticr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_csio_fticr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_fticr_t;

/* ECR */
#define CPG_MFS00_CSIO_ECR	(CPG_MFS00_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7800130)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7800131)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7800132)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7800133)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7800134)  /*@bfbba@*/

#define CPG_MFS01_CSIO_ECR	(CPG_MFS01_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7802130)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7802131)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7802132)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7802133)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7802134)  /*@bfbba@*/

#define CPG_MFS02_CSIO_ECR	(CPG_MFS02_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7804130)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7804131)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7804132)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7804133)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7804134)  /*@bfbba@*/

#define CPG_MFS03_CSIO_ECR	(CPG_MFS03_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7806130)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7806131)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7806132)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7806133)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7806134)  /*@bfbba@*/

#define CPG_MFS04_CSIO_ECR	(CPG_MFS04_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7808130)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7808131)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7808132)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7808133)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7808134)  /*@bfbba@*/

#define CPG_MFS08_CSIO_ECR	(CPG_MFS08_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C00130)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C00131)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C00132)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7C00133)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C00134)  /*@bfbba@*/

#define CPG_MFS09_CSIO_ECR	(CPG_MFS09_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C02130)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C02131)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C02132)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7C02133)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C02134)  /*@bfbba@*/

#define CPG_MFS10_CSIO_ECR	(CPG_MFS10_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C04130)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C04131)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C04132)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7C04133)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C04134)  /*@bfbba@*/

#define CPG_MFS11_CSIO_ECR	(CPG_MFS11_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C06130)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C06131)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C06132)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7C06133)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C06134)  /*@bfbba@*/

#define CPG_MFS12_CSIO_ECR	(CPG_MFS12_CSIO.unECR.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C08130)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C08131)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C08132)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB7C08133)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C08134)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_ecr_field{
    uint_io8_t		u1TXBLKEN:1;
    uint_io8_t		u1RXBLKEN:1;
    uint_io8_t		u1TEIE:1;
    uint_io8_t		u1REIE:1;
    uint_io8_t		u1EISEL:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_csio_ecr_field_t;

typedef union un_cpg_mfsn_csio_ecr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_ecr_field_t		stcField;
}un_cpg_mfsn_csio_ecr_t;

/* ESR */
#define CPG_MFS00_CSIO_ESR	(CPG_MFS00_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7800138)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7800139)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780013A)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780013B)  /*@bfbba@*/

#define CPG_MFS01_CSIO_ESR	(CPG_MFS01_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7802138)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7802139)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780213A)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780213B)  /*@bfbba@*/

#define CPG_MFS02_CSIO_ESR	(CPG_MFS02_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7804138)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7804139)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780413A)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780413B)  /*@bfbba@*/

#define CPG_MFS03_CSIO_ESR	(CPG_MFS03_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7806138)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7806139)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780613A)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780613B)  /*@bfbba@*/

#define CPG_MFS04_CSIO_ESR	(CPG_MFS04_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7808138)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7808139)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780813A)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780813B)  /*@bfbba@*/

#define CPG_MFS08_CSIO_ESR	(CPG_MFS08_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C00138)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C00139)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0013A)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0013B)  /*@bfbba@*/

#define CPG_MFS09_CSIO_ESR	(CPG_MFS09_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C02138)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C02139)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0213A)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0213B)  /*@bfbba@*/

#define CPG_MFS10_CSIO_ESR	(CPG_MFS10_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C04138)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C04139)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0413A)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0413B)  /*@bfbba@*/

#define CPG_MFS11_CSIO_ESR	(CPG_MFS11_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C06138)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C06139)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0613A)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0613B)  /*@bfbba@*/

#define CPG_MFS12_CSIO_ESR	(CPG_MFS12_CSIO.unESR.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C08138)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C08139)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0813A)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0813B)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_esr_field{
    uint_io8_t		u1TBERR:1;
    uint_io8_t		u1RBERR:1;
    uint_io8_t		u1TXOVR:1;
    uint_io8_t		u1RXUDR:1;
    uint_io8_t		:4;
}stc_cpg_mfsn_csio_esr_field_t;

typedef union un_cpg_mfsn_csio_esr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_esr_field_t		stcField;
}un_cpg_mfsn_csio_esr_t;

/* TBSIZE */
#define CPG_MFS00_CSIO_TBSIZE	(CPG_MFS00_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_TBSIZE_TBSIZE	CPG_MFS00_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS01_CSIO_TBSIZE	(CPG_MFS01_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_TBSIZE_TBSIZE	CPG_MFS01_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS02_CSIO_TBSIZE	(CPG_MFS02_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_TBSIZE_TBSIZE	CPG_MFS02_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS03_CSIO_TBSIZE	(CPG_MFS03_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_TBSIZE_TBSIZE	CPG_MFS03_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS04_CSIO_TBSIZE	(CPG_MFS04_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_TBSIZE_TBSIZE	CPG_MFS04_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS08_CSIO_TBSIZE	(CPG_MFS08_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_TBSIZE_TBSIZE	CPG_MFS08_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS09_CSIO_TBSIZE	(CPG_MFS09_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_TBSIZE_TBSIZE	CPG_MFS09_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS10_CSIO_TBSIZE	(CPG_MFS10_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_TBSIZE_TBSIZE	CPG_MFS10_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS11_CSIO_TBSIZE	(CPG_MFS11_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_TBSIZE_TBSIZE	CPG_MFS11_CSIO_TBSIZE  /*@bfrg@*/

#define CPG_MFS12_CSIO_TBSIZE	(CPG_MFS12_CSIO.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_TBSIZE_TBSIZE	CPG_MFS12_CSIO_TBSIZE  /*@bfrg@*/

typedef union un_cpg_mfsn_csio_tbsize{
    uint_io8_t		u8Register;
}un_cpg_mfsn_csio_tbsize_t;

/* SACSRC */
#define CPG_MFS00_CSIO_SACSRC	(CPG_MFS00_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7800180)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7800185)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7800186)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7800187)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7800188)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB780018B)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB780018C)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB780018D)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780018F)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SACSRC	(CPG_MFS01_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7802180)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7802185)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7802186)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7802187)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7802188)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB780218B)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB780218C)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB780218D)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780218F)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SACSRC	(CPG_MFS02_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7804180)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7804185)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7804186)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7804187)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7804188)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB780418B)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB780418C)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB780418D)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780418F)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SACSRC	(CPG_MFS03_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7806180)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7806185)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7806186)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7806187)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7806188)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB780618B)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB780618C)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB780618D)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780618F)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SACSRC	(CPG_MFS04_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7808180)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7808185)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7808186)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7808187)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7808188)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB780818B)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB780818C)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB780818D)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780818F)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SACSRC	(CPG_MFS08_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C00180)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C00185)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7C00186)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C00187)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C00188)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB7C0018B)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB7C0018C)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB7C0018D)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0018F)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SACSRC	(CPG_MFS09_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C02180)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C02185)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7C02186)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C02187)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C02188)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB7C0218B)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB7C0218C)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB7C0218D)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0218F)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SACSRC	(CPG_MFS10_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C04180)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C04185)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7C04186)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C04187)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C04188)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB7C0418B)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB7C0418C)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB7C0418D)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0418F)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SACSRC	(CPG_MFS11_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C06180)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C06185)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7C06186)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C06187)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C06188)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB7C0618B)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB7C0618C)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB7C0618D)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0618F)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SACSRC	(CPG_MFS12_CSIO.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C08180)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C08185)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB7C08186)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C08187)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C08188)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB7C0818B)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB7C0818C)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB7C0818D)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0818F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_sacsrc_field{
    uint_io16_t		u1TMREC:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGEC:1;
    uint_io16_t		u1TSYNEC:1;
    uint_io16_t		u1TINTEC:1;
    uint_io16_t		u1TINTC:1;
    uint_io16_t		:2;
    uint_io16_t		u1CSEC:1;
    uint_io16_t		u1CSEIEC:1;
    uint_io16_t		u1TBEENC:1;
    uint_io16_t		:1;
    uint_io16_t		u1STSTC:1;
}stc_cpg_mfsn_csio_sacsrc_field_t;

typedef union un_cpg_mfsn_csio_sacsrc{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_csio_sacsrc_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_sacsrc_t;

/* FCR0C */
#define CPG_MFS00_CSIO_FCR0C	(CPG_MFS00_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78001E0)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78001E1)  /*@bfbba@*/

#define CPG_MFS01_CSIO_FCR0C	(CPG_MFS01_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78021E0)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78021E1)  /*@bfbba@*/

#define CPG_MFS02_CSIO_FCR0C	(CPG_MFS02_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78041E0)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78041E1)  /*@bfbba@*/

#define CPG_MFS03_CSIO_FCR0C	(CPG_MFS03_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78061E0)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78061E1)  /*@bfbba@*/

#define CPG_MFS04_CSIO_FCR0C	(CPG_MFS04_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78081E0)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78081E1)  /*@bfbba@*/

#define CPG_MFS08_CSIO_FCR0C	(CPG_MFS08_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C001E0)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C001E1)  /*@bfbba@*/

#define CPG_MFS09_CSIO_FCR0C	(CPG_MFS09_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C021E0)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C021E1)  /*@bfbba@*/

#define CPG_MFS10_CSIO_FCR0C	(CPG_MFS10_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C041E0)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C041E1)  /*@bfbba@*/

#define CPG_MFS11_CSIO_FCR0C	(CPG_MFS11_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C061E0)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C061E1)  /*@bfbba@*/

#define CPG_MFS12_CSIO_FCR0C	(CPG_MFS12_CSIO.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C081E0)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C081E1)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_fcr0c_field{
    uint_io8_t		u1FE1C:1;
    uint_io8_t		u1FE2C:1;
    uint_io8_t		:6;
}stc_cpg_mfsn_csio_fcr0c_field_t;

typedef union un_cpg_mfsn_csio_fcr0c{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_fcr0c_field_t		stcField;
}un_cpg_mfsn_csio_fcr0c_t;

/* FCR1C */
#define CPG_MFS00_CSIO_FCR1C	(CPG_MFS00_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78001E8)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78001E9)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78001EA)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78001EB)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78001EC)  /*@bfbba@*/

#define CPG_MFS01_CSIO_FCR1C	(CPG_MFS01_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78021E8)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78021E9)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78021EA)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78021EB)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78021EC)  /*@bfbba@*/

#define CPG_MFS02_CSIO_FCR1C	(CPG_MFS02_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78041E8)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78041E9)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78041EA)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78041EB)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78041EC)  /*@bfbba@*/

#define CPG_MFS03_CSIO_FCR1C	(CPG_MFS03_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78061E8)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78061E9)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78061EA)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78061EB)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78061EC)  /*@bfbba@*/

#define CPG_MFS04_CSIO_FCR1C	(CPG_MFS04_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78081E8)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78081E9)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78081EA)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78081EB)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78081EC)  /*@bfbba@*/

#define CPG_MFS08_CSIO_FCR1C	(CPG_MFS08_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C001E8)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C001E9)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C001EA)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C001EB)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C001EC)  /*@bfbba@*/

#define CPG_MFS09_CSIO_FCR1C	(CPG_MFS09_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C021E8)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C021E9)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C021EA)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C021EB)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C021EC)  /*@bfbba@*/

#define CPG_MFS10_CSIO_FCR1C	(CPG_MFS10_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C041E8)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C041E9)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C041EA)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C041EB)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C041EC)  /*@bfbba@*/

#define CPG_MFS11_CSIO_FCR1C	(CPG_MFS11_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C061E8)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C061E9)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C061EA)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C061EB)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C061EC)  /*@bfbba@*/

#define CPG_MFS12_CSIO_FCR1C	(CPG_MFS12_CSIO.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C081E8)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C081E9)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C081EA)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C081EB)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C081EC)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_fcr1c_field{
    uint_io8_t		u1FSELC:1;
    uint_io8_t		u1FTIEC:1;
    uint_io8_t		u1FDRQC:1;
    uint_io8_t		u1FRIIEC:1;
    uint_io8_t		u1FLSTEC:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_csio_fcr1c_field_t;

typedef union un_cpg_mfsn_csio_fcr1c{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_fcr1c_field_t		stcField;
}un_cpg_mfsn_csio_fcr1c_t;

/* ESRC */
#define CPG_MFS00_CSIO_ESRC	(CPG_MFS00_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7800218)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7800219)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780021A)  /*@bfbba@*/
#define CPG_MFS00_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780021B)  /*@bfbba@*/

#define CPG_MFS01_CSIO_ESRC	(CPG_MFS01_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7802218)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7802219)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780221A)  /*@bfbba@*/
#define CPG_MFS01_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780221B)  /*@bfbba@*/

#define CPG_MFS02_CSIO_ESRC	(CPG_MFS02_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7804218)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7804219)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780421A)  /*@bfbba@*/
#define CPG_MFS02_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780421B)  /*@bfbba@*/

#define CPG_MFS03_CSIO_ESRC	(CPG_MFS03_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7806218)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7806219)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780621A)  /*@bfbba@*/
#define CPG_MFS03_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780621B)  /*@bfbba@*/

#define CPG_MFS04_CSIO_ESRC	(CPG_MFS04_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7808218)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7808219)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780821A)  /*@bfbba@*/
#define CPG_MFS04_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780821B)  /*@bfbba@*/

#define CPG_MFS08_CSIO_ESRC	(CPG_MFS08_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C00218)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C00219)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0021A)  /*@bfbba@*/
#define CPG_MFS08_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0021B)  /*@bfbba@*/

#define CPG_MFS09_CSIO_ESRC	(CPG_MFS09_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C02218)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C02219)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0221A)  /*@bfbba@*/
#define CPG_MFS09_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0221B)  /*@bfbba@*/

#define CPG_MFS10_CSIO_ESRC	(CPG_MFS10_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C04218)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C04219)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0421A)  /*@bfbba@*/
#define CPG_MFS10_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0421B)  /*@bfbba@*/

#define CPG_MFS11_CSIO_ESRC	(CPG_MFS11_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C06218)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C06219)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0621A)  /*@bfbba@*/
#define CPG_MFS11_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0621B)  /*@bfbba@*/

#define CPG_MFS12_CSIO_ESRC	(CPG_MFS12_CSIO.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C08218)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C08219)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0821A)  /*@bfbba@*/
#define CPG_MFS12_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0821B)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_esrc_field{
    uint_io8_t		u1TBERRC:1;
    uint_io8_t		u1RBERRC:1;
    uint_io8_t		u1TXOVRC:1;
    uint_io8_t		u1RXUDRC:1;
    uint_io8_t		:4;
}stc_cpg_mfsn_csio_esrc_field_t;

typedef union un_cpg_mfsn_csio_esrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_esrc_field_t		stcField;
}un_cpg_mfsn_csio_esrc_t;

/* SACSRS */
#define CPG_MFS00_CSIO_SACSRS	(CPG_MFS00_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS00_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7800240)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7800245)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7800246)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7800247)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB780024C)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB780024D)  /*@bfbba@*/
#define CPG_MFS00_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780024F)  /*@bfbba@*/

#define CPG_MFS01_CSIO_SACSRS	(CPG_MFS01_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS01_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7802240)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7802245)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7802246)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7802247)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB780224C)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB780224D)  /*@bfbba@*/
#define CPG_MFS01_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780224F)  /*@bfbba@*/

#define CPG_MFS02_CSIO_SACSRS	(CPG_MFS02_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS02_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7804240)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7804245)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7804246)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7804247)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB780424C)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB780424D)  /*@bfbba@*/
#define CPG_MFS02_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780424F)  /*@bfbba@*/

#define CPG_MFS03_CSIO_SACSRS	(CPG_MFS03_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS03_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7806240)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7806245)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7806246)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7806247)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB780624C)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB780624D)  /*@bfbba@*/
#define CPG_MFS03_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780624F)  /*@bfbba@*/

#define CPG_MFS04_CSIO_SACSRS	(CPG_MFS04_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS04_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7808240)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7808245)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7808246)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7808247)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB780824C)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB780824D)  /*@bfbba@*/
#define CPG_MFS04_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780824F)  /*@bfbba@*/

#define CPG_MFS08_CSIO_SACSRS	(CPG_MFS08_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS08_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C00240)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C00245)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7C00246)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C00247)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB7C0024C)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB7C0024D)  /*@bfbba@*/
#define CPG_MFS08_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0024F)  /*@bfbba@*/

#define CPG_MFS09_CSIO_SACSRS	(CPG_MFS09_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS09_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C02240)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C02245)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7C02246)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C02247)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB7C0224C)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB7C0224D)  /*@bfbba@*/
#define CPG_MFS09_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0224F)  /*@bfbba@*/

#define CPG_MFS10_CSIO_SACSRS	(CPG_MFS10_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS10_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C04240)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C04245)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7C04246)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C04247)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB7C0424C)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB7C0424D)  /*@bfbba@*/
#define CPG_MFS10_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0424F)  /*@bfbba@*/

#define CPG_MFS11_CSIO_SACSRS	(CPG_MFS11_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS11_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C06240)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C06245)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7C06246)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C06247)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB7C0624C)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB7C0624D)  /*@bfbba@*/
#define CPG_MFS11_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0624F)  /*@bfbba@*/

#define CPG_MFS12_CSIO_SACSRS	(CPG_MFS12_CSIO.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS12_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C08240)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C08245)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB7C08246)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C08247)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB7C0824C)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB7C0824D)  /*@bfbba@*/
#define CPG_MFS12_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0824F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_sacsrs_field{
    uint_io16_t		u1TMRES:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGES:1;
    uint_io16_t		u1TSYNES:1;
    uint_io16_t		u1TINTES:1;
    uint_io16_t		:4;
    uint_io16_t		u1CSEIES:1;
    uint_io16_t		u1TBEENS:1;
    uint_io16_t		:1;
    uint_io16_t		u1STSTS:1;
}stc_cpg_mfsn_csio_sacsrs_field_t;

typedef union un_cpg_mfsn_csio_sacsrs{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_csio_sacsrs_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_csio_sacsrs_t;

/* FCR0S */
#define CPG_MFS00_CSIO_FCR0S	(CPG_MFS00_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78002A0)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78002A1)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78002A2)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78002A3)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78002A4)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78002A5)  /*@bfbba@*/

#define CPG_MFS01_CSIO_FCR0S	(CPG_MFS01_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78022A0)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78022A1)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78022A2)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78022A3)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78022A4)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78022A5)  /*@bfbba@*/

#define CPG_MFS02_CSIO_FCR0S	(CPG_MFS02_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78042A0)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78042A1)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78042A2)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78042A3)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78042A4)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78042A5)  /*@bfbba@*/

#define CPG_MFS03_CSIO_FCR0S	(CPG_MFS03_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78062A0)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78062A1)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78062A2)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78062A3)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78062A4)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78062A5)  /*@bfbba@*/

#define CPG_MFS04_CSIO_FCR0S	(CPG_MFS04_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78082A0)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78082A1)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78082A2)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78082A3)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78082A4)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78082A5)  /*@bfbba@*/

#define CPG_MFS08_CSIO_FCR0S	(CPG_MFS08_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C002A0)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C002A1)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C002A2)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C002A3)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C002A4)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C002A5)  /*@bfbba@*/

#define CPG_MFS09_CSIO_FCR0S	(CPG_MFS09_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C022A0)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C022A1)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C022A2)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C022A3)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C022A4)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C022A5)  /*@bfbba@*/

#define CPG_MFS10_CSIO_FCR0S	(CPG_MFS10_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C042A0)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C042A1)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C042A2)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C042A3)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C042A4)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C042A5)  /*@bfbba@*/

#define CPG_MFS11_CSIO_FCR0S	(CPG_MFS11_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C062A0)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C062A1)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C062A2)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C062A3)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C062A4)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C062A5)  /*@bfbba@*/

#define CPG_MFS12_CSIO_FCR0S	(CPG_MFS12_CSIO.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C082A0)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C082A1)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C082A2)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C082A3)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C082A4)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C082A5)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_fcr0s_field{
    uint_io8_t		u1FE1S:1;
    uint_io8_t		u1FE2S:1;
    uint_io8_t		u1FCL1S:1;
    uint_io8_t		u1FCL2S:1;
    uint_io8_t		u1FSETS:1;
    uint_io8_t		u1FLDS:1;
    uint_io8_t		:2;
}stc_cpg_mfsn_csio_fcr0s_field_t;

typedef union un_cpg_mfsn_csio_fcr0s{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_fcr0s_field_t		stcField;
}un_cpg_mfsn_csio_fcr0s_t;

/* FCR1S */
#define CPG_MFS00_CSIO_FCR1S	(CPG_MFS00_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS00_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78002A8)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78002A9)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78002AB)  /*@bfbba@*/
#define CPG_MFS00_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78002AC)  /*@bfbba@*/

#define CPG_MFS01_CSIO_FCR1S	(CPG_MFS01_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS01_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78022A8)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78022A9)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78022AB)  /*@bfbba@*/
#define CPG_MFS01_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78022AC)  /*@bfbba@*/

#define CPG_MFS02_CSIO_FCR1S	(CPG_MFS02_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS02_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78042A8)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78042A9)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78042AB)  /*@bfbba@*/
#define CPG_MFS02_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78042AC)  /*@bfbba@*/

#define CPG_MFS03_CSIO_FCR1S	(CPG_MFS03_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS03_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78062A8)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78062A9)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78062AB)  /*@bfbba@*/
#define CPG_MFS03_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78062AC)  /*@bfbba@*/

#define CPG_MFS04_CSIO_FCR1S	(CPG_MFS04_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS04_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78082A8)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78082A9)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78082AB)  /*@bfbba@*/
#define CPG_MFS04_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78082AC)  /*@bfbba@*/

#define CPG_MFS08_CSIO_FCR1S	(CPG_MFS08_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS08_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C002A8)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C002A9)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C002AB)  /*@bfbba@*/
#define CPG_MFS08_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C002AC)  /*@bfbba@*/

#define CPG_MFS09_CSIO_FCR1S	(CPG_MFS09_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS09_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C022A8)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C022A9)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C022AB)  /*@bfbba@*/
#define CPG_MFS09_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C022AC)  /*@bfbba@*/

#define CPG_MFS10_CSIO_FCR1S	(CPG_MFS10_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS10_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C042A8)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C042A9)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C042AB)  /*@bfbba@*/
#define CPG_MFS10_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C042AC)  /*@bfbba@*/

#define CPG_MFS11_CSIO_FCR1S	(CPG_MFS11_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS11_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C062A8)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C062A9)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C062AB)  /*@bfbba@*/
#define CPG_MFS11_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C062AC)  /*@bfbba@*/

#define CPG_MFS12_CSIO_FCR1S	(CPG_MFS12_CSIO.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS12_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C082A8)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C082A9)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C082AB)  /*@bfbba@*/
#define CPG_MFS12_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C082AC)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_csio_fcr1s_field{
    uint_io8_t		u1FSELS:1;
    uint_io8_t		u1FTIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1FRIIES:1;
    uint_io8_t		u1FLSTES:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_csio_fcr1s_field_t;

typedef union un_cpg_mfsn_csio_fcr1s{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_csio_fcr1s_field_t		stcField;
}un_cpg_mfsn_csio_fcr1s_t;


typedef struct stc_cpg_mfsn_csio{
    un_cpg_mfsn_csio_smr_t	unSMR;	/* 0x00000000 */
    un_cpg_mfsn_csio_scr_t	unSCR;	/* 0x00000001 */
    un_cpg_mfsn_csio_escr_t	unESCR;	/* 0x00000002 */
    un_cpg_mfsn_csio_ssr_t	unSSR;	/* 0x00000003 */
    un_cpg_mfsn_csio_rdr_t	unRDR;	/* 0x00000004 */
    un_cpg_mfsn_csio_sacsr_t	unSACSR;	/* 0x00000008 */
    un_cpg_mfsn_csio_stmr_t	unSTMR;	/* 0x0000000A */
    un_cpg_mfsn_csio_stmcr_t	unSTMCR;	/* 0x0000000C */
    un_cpg_mfsn_csio_scscr_t	unSCSCR;	/* 0x0000000E */
    un_cpg_mfsn_csio_scstr0_t	unSCSTR0;	/* 0x00000010 */
    un_cpg_mfsn_csio_scstr1_t	unSCSTR1;	/* 0x00000011 */
    un_cpg_mfsn_csio_scstr23_t	unSCSTR23;	/* 0x00000012 */
    un_cpg_mfsn_csio_scsfr0_t	unSCSFR0;	/* 0x00000014 */
    un_cpg_mfsn_csio_scsfr1_t	unSCSFR1;	/* 0x00000015 */
    un_cpg_mfsn_csio_scsfr2_t	unSCSFR2;	/* 0x00000016 */
    uint_io8_t	au8Reserved0[1];	/* 0x00000017 */
    un_cpg_mfsn_csio_tbyte0_t	unTBYTE0;	/* 0x00000018 */
    un_cpg_mfsn_csio_tbyte1_t	unTBYTE1;	/* 0x00000019 */
    un_cpg_mfsn_csio_tbyte2_t	unTBYTE2;	/* 0x0000001A */
    un_cpg_mfsn_csio_tbyte3_t	unTBYTE3;	/* 0x0000001B */
    un_cpg_mfsn_csio_bgr_t	unBGR;	/* 0x0000001C */
    uint_io8_t	au8Reserved1[2];	/* 0x0000001E */
    un_cpg_mfsn_csio_fcr0_t	unFCR0;	/* 0x00000020 */
    un_cpg_mfsn_csio_fcr1_t	unFCR1;	/* 0x00000021 */
    un_cpg_mfsn_csio_fbyte_t	unFBYTE;	/* 0x00000022 */
    un_cpg_mfsn_csio_fticr_t	unFTICR;	/* 0x00000024 */
    un_cpg_mfsn_csio_ecr_t	unECR;	/* 0x00000026 */
    un_cpg_mfsn_csio_esr_t	unESR;	/* 0x00000027 */
    un_cpg_mfsn_csio_tbsize_t	unTBSIZE;	/* 0x00000028 */
    uint_io8_t	au8Reserved2[7];	/* 0x00000029 */
    un_cpg_mfsn_csio_sacsrc_t	unSACSRC;	/* 0x00000030 */
    uint_io8_t	au8Reserved3[10];	/* 0x00000032 */
    un_cpg_mfsn_csio_fcr0c_t	unFCR0C;	/* 0x0000003C */
    un_cpg_mfsn_csio_fcr1c_t	unFCR1C;	/* 0x0000003D */
    uint_io8_t	au8Reserved4[5];	/* 0x0000003E */
    un_cpg_mfsn_csio_esrc_t	unESRC;	/* 0x00000043 */
    uint_io8_t	au8Reserved5[4];	/* 0x00000044 */
    un_cpg_mfsn_csio_sacsrs_t	unSACSRS;	/* 0x00000048 */
    uint_io8_t	au8Reserved6[10];	/* 0x0000004A */
    un_cpg_mfsn_csio_fcr0s_t	unFCR0S;	/* 0x00000054 */
    un_cpg_mfsn_csio_fcr1s_t	unFCR1S;	/* 0x00000055 */
    uint_io8_t	au8Reserved7[938];	/* 0x00000056 */
}stc_cpg_mfsn_csio_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_cpg_mfsn_csio_t	stcCPG_MFS_CSIO[10];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* MCG_MFS[16-17]_CSIO base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MCG_MFS16_CSIO_1	stcMCG_MFS_CSIO_1[0]
#define MCG_MFS17_CSIO_1	stcMCG_MFS_CSIO_1[1]
#else /* __IO_DEFINE */
#define MCG_MFS16_CSIO_1	(*((volatile stc_mcg_mfsn_csio_1_t*)0xB06A8000))
#define MCG_MFS17_CSIO_1	(*((volatile stc_mcg_mfsn_csio_1_t*)0xB06A8400))
#endif /* __IO_DEFINE */

/* SMR */
#define MCG_MFS16_CSIO_SMR	(MCG_MFS16_CSIO_1.unSMR.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB0D40000)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB0D40001)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB0D40002)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB0D40003)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB0D40004)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SMR_MD	(MCG_MFS16_CSIO_1.unSMR.stcField.u3MD)  /*@bf@*/

#define MCG_MFS17_CSIO_SMR	(MCG_MFS17_CSIO_1.unSMR.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SMR_SOE	(*(volatile uint_io8_t*)0xB0D42000)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SMR_SCKE	(*(volatile uint_io8_t*)0xB0D42001)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SMR_BDS	(*(volatile uint_io8_t*)0xB0D42002)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SMR_SCINV	(*(volatile uint_io8_t*)0xB0D42003)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SMR_WUCR	(*(volatile uint_io8_t*)0xB0D42004)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SMR_MD	(MCG_MFS17_CSIO_1.unSMR.stcField.u3MD)  /*@bf@*/

typedef struct stc_mcg_mfsn_csio_1_smr_field{
    uint_io8_t		u1SOE:1;
    uint_io8_t		u1SCKE:1;
    uint_io8_t		u1BDS:1;
    uint_io8_t		u1SCINV:1;
    uint_io8_t		u1WUCR:1;
    uint_io8_t		u3MD:3;
}stc_mcg_mfsn_csio_1_smr_field_t;

typedef union un_mcg_mfsn_csio_1_smr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_smr_field_t		stcField;
}un_mcg_mfsn_csio_1_smr_t;

/* SCR */
#define MCG_MFS16_CSIO_SCR	(MCG_MFS16_CSIO_1.unSCR.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB0D40008)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB0D40009)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB0D4000A)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB0D4000B)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB0D4000C)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB0D4000D)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB0D4000E)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB0D4000F)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SCR	(MCG_MFS17_CSIO_1.unSCR.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCR_TXE	(*(volatile uint_io8_t*)0xB0D42008)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCR_RXE	(*(volatile uint_io8_t*)0xB0D42009)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCR_TBIE	(*(volatile uint_io8_t*)0xB0D4200A)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCR_TIE	(*(volatile uint_io8_t*)0xB0D4200B)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCR_RIE	(*(volatile uint_io8_t*)0xB0D4200C)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCR_SPI	(*(volatile uint_io8_t*)0xB0D4200D)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCR_MS	(*(volatile uint_io8_t*)0xB0D4200E)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCR_UPCL	(*(volatile uint_io8_t*)0xB0D4200F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_scr_field{
    uint_io8_t		u1TXE:1;
    uint_io8_t		u1RXE:1;
    uint_io8_t		u1TBIE:1;
    uint_io8_t		u1TIE:1;
    uint_io8_t		u1RIE:1;
    uint_io8_t		u1SPI:1;
    uint_io8_t		u1MS:1;
    uint_io8_t		u1UPCL:1;
}stc_mcg_mfsn_csio_1_scr_field_t;

typedef union un_mcg_mfsn_csio_1_scr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_scr_field_t		stcField;
}un_mcg_mfsn_csio_1_scr_t;

/* ESCR */
#define MCG_MFS16_CSIO_ESCR	(MCG_MFS16_CSIO_1.unESCR.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_ESCR_L2_0	(MCG_MFS16_CSIO_1.unESCR.stcField.u3L2_0)  /*@bf@*/
#define MCG_MFS16_CSIO_ESCR_WT	(MCG_MFS16_CSIO_1.unESCR.stcField.u2WT)  /*@bf@*/
#define MCG_MFS16_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB0D40015)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB0D40016)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB0D40017)  /*@bfbba@*/

#define MCG_MFS17_CSIO_ESCR	(MCG_MFS17_CSIO_1.unESCR.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_ESCR_L2_0	(MCG_MFS17_CSIO_1.unESCR.stcField.u3L2_0)  /*@bf@*/
#define MCG_MFS17_CSIO_ESCR_WT	(MCG_MFS17_CSIO_1.unESCR.stcField.u2WT)  /*@bf@*/
#define MCG_MFS17_CSIO_ESCR_CSFE	(*(volatile uint_io8_t*)0xB0D42015)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESCR_L3	(*(volatile uint_io8_t*)0xB0D42016)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESCR_SOP	(*(volatile uint_io8_t*)0xB0D42017)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_escr_field{
    uint_io8_t		u3L2_0:3;
    uint_io8_t		u2WT:2;
    uint_io8_t		u1CSFE:1;
    uint_io8_t		u1L3:1;
    uint_io8_t		u1SOP:1;
}stc_mcg_mfsn_csio_1_escr_field_t;

typedef union un_mcg_mfsn_csio_1_escr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_escr_field_t		stcField;
}un_mcg_mfsn_csio_1_escr_t;

/* SSR */
#define MCG_MFS16_CSIO_SSR	(MCG_MFS16_CSIO_1.unSSR.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB0D40018)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB0D40019)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB0D4001A)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB0D4001B)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB0D4001C)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB0D4001F)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SSR	(MCG_MFS17_CSIO_1.unSSR.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SSR_TBI	(*(volatile uint_io8_t*)0xB0D42018)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SSR_TDRE	(*(volatile uint_io8_t*)0xB0D42019)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SSR_RDRF	(*(volatile uint_io8_t*)0xB0D4201A)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SSR_ORE	(*(volatile uint_io8_t*)0xB0D4201B)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SSR_AWC	(*(volatile uint_io8_t*)0xB0D4201C)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SSR_REC	(*(volatile uint_io8_t*)0xB0D4201F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_ssr_field{
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1ORE:1;
    uint_io8_t		u1AWC:1;
    uint_io8_t		:2;
    uint_io8_t		u1REC:1;
}stc_mcg_mfsn_csio_1_ssr_field_t;

typedef union un_mcg_mfsn_csio_1_ssr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_ssr_field_t		stcField;
}un_mcg_mfsn_csio_1_ssr_t;

/* RDR */
#define MCG_MFS16_CSIO_RDR	(MCG_MFS16_CSIO_1.unRDR.u32Register)  /*@rg@*/
#define MCG_MFS16_CSIO_TDR	(MCG_MFS16_CSIO_RDR)  /*@rg2@*/
#define MCG_MFS16_CSIO_RDR_L	(MCG_MFS16_CSIO_1.unRDR.au16Halfword[0])  /*@arhword@*/
#define MCG_MFS16_CSIO_TDR_L	(MCG_MFS16_CSIO_1.unRDR.au16Halfword[0])  /*@arhword@*/
#define MCG_MFS16_CSIO_RDR_D	MCG_MFS16_CSIO_RDR  /*@bfrg@*/
#define MCG_MFS16_CSIO_TDR_D	MCG_MFS16_CSIO_RDR_D  /*@bf2@*/

#define MCG_MFS17_CSIO_RDR	(MCG_MFS17_CSIO_1.unRDR.u32Register)  /*@rg@*/
#define MCG_MFS17_CSIO_TDR	(MCG_MFS17_CSIO_RDR)  /*@rg2@*/
#define MCG_MFS17_CSIO_RDR_L	(MCG_MFS17_CSIO_1.unRDR.au16Halfword[0])  /*@arhword@*/
#define MCG_MFS17_CSIO_TDR_L	(MCG_MFS17_CSIO_1.unRDR.au16Halfword[0])  /*@arhword@*/
#define MCG_MFS17_CSIO_RDR_D	MCG_MFS17_CSIO_RDR  /*@bfrg@*/
#define MCG_MFS17_CSIO_TDR_D	MCG_MFS17_CSIO_RDR_D  /*@bf2@*/

typedef union un_mcg_mfsn_csio_1_rdr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_mcg_mfsn_csio_1_rdr_t;

/* SACSR */
#define MCG_MFS16_CSIO_SACSR	(MCG_MFS16_CSIO_1.unSACSR.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB0D40040)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_TDIV	(MCG_MFS16_CSIO_1.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define MCG_MFS16_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB0D40045)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB0D40046)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB0D40047)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB0D40048)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_TRG	(MCG_MFS16_CSIO_1.unSACSR.stcField.u2TRG)  /*@bf@*/
#define MCG_MFS16_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB0D4004B)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB0D4004C)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB0D4004D)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB0D4004F)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SACSR	(MCG_MFS17_CSIO_1.unSACSR.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SACSR_TMRE	(*(volatile uint_io8_t*)0xB0D42040)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_TDIV	(MCG_MFS17_CSIO_1.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define MCG_MFS17_CSIO_SACSR_TRGE	(*(volatile uint_io8_t*)0xB0D42045)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_TSYNE	(*(volatile uint_io8_t*)0xB0D42046)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_TINTE	(*(volatile uint_io8_t*)0xB0D42047)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_TINT	(*(volatile uint_io8_t*)0xB0D42048)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_TRG	(MCG_MFS17_CSIO_1.unSACSR.stcField.u2TRG)  /*@bf@*/
#define MCG_MFS17_CSIO_SACSR_CSE	(*(volatile uint_io8_t*)0xB0D4204B)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_CSEIE	(*(volatile uint_io8_t*)0xB0D4204C)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_TBEEN	(*(volatile uint_io8_t*)0xB0D4204D)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSR_STST	(*(volatile uint_io8_t*)0xB0D4204F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_sacsr_field{
    uint_io16_t		u1TMRE:1;
    uint_io16_t		u4TDIV:4;
    uint_io16_t		u1TRGE:1;
    uint_io16_t		u1TSYNE:1;
    uint_io16_t		u1TINTE:1;
    uint_io16_t		u1TINT:1;
    uint_io16_t		u2TRG:2;
    uint_io16_t		u1CSE:1;
    uint_io16_t		u1CSEIE:1;
    uint_io16_t		u1TBEEN:1;
    uint_io16_t		:1;
    uint_io16_t		u1STST:1;
}stc_mcg_mfsn_csio_1_sacsr_field_t;

typedef union un_mcg_mfsn_csio_1_sacsr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_csio_1_sacsr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_sacsr_t;

/* STMR */
#define MCG_MFS16_CSIO_STMR	(MCG_MFS16_CSIO_1.unSTMR.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_STMR_TM	MCG_MFS16_CSIO_STMR  /*@bfrg@*/

#define MCG_MFS17_CSIO_STMR	(MCG_MFS17_CSIO_1.unSTMR.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_STMR_TM	MCG_MFS17_CSIO_STMR  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_stmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_stmr_t;

/* STMCR */
#define MCG_MFS16_CSIO_STMCR	(MCG_MFS16_CSIO_1.unSTMCR.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_STMCR_TC	MCG_MFS16_CSIO_STMCR  /*@bfrg@*/

#define MCG_MFS17_CSIO_STMCR	(MCG_MFS17_CSIO_1.unSTMCR.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_STMCR_TC	MCG_MFS17_CSIO_STMCR  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_stmcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_stmcr_t;

/* SCSCR */
#define MCG_MFS16_CSIO_SCSCR	(MCG_MFS16_CSIO_1.unSCSCR.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB0D40070)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB0D40071)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB0D40072)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB0D40073)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB0D40074)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB0D40075)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSCR_CDIV	(MCG_MFS16_CSIO_1.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define MCG_MFS16_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB0D40079)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSCR_SCD	(MCG_MFS16_CSIO_1.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define MCG_MFS16_CSIO_SCSCR_SED	(MCG_MFS16_CSIO_1.unSCSCR.stcField.u2SED)  /*@bf@*/
#define MCG_MFS16_CSIO_SCSCR_SST	(MCG_MFS16_CSIO_1.unSCSCR.stcField.u2SST)  /*@bf@*/

#define MCG_MFS17_CSIO_SCSCR	(MCG_MFS17_CSIO_1.unSCSCR.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCSCR_CSOE	(*(volatile uint_io8_t*)0xB0D42070)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSCR_CSEN0	(*(volatile uint_io8_t*)0xB0D42071)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSCR_CSEN1	(*(volatile uint_io8_t*)0xB0D42072)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSCR_CSEN2	(*(volatile uint_io8_t*)0xB0D42073)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSCR_CSEN3	(*(volatile uint_io8_t*)0xB0D42074)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSCR_CSLVL	(*(volatile uint_io8_t*)0xB0D42075)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSCR_CDIV	(MCG_MFS17_CSIO_1.unSCSCR.stcField.u3CDIV)  /*@bf@*/
#define MCG_MFS17_CSIO_SCSCR_SCAM	(*(volatile uint_io8_t*)0xB0D42079)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSCR_SCD	(MCG_MFS17_CSIO_1.unSCSCR.stcField.u2SCD)  /*@bf@*/
#define MCG_MFS17_CSIO_SCSCR_SED	(MCG_MFS17_CSIO_1.unSCSCR.stcField.u2SED)  /*@bf@*/
#define MCG_MFS17_CSIO_SCSCR_SST	(MCG_MFS17_CSIO_1.unSCSCR.stcField.u2SST)  /*@bf@*/

typedef struct stc_mcg_mfsn_csio_1_scscr_field{
    uint_io16_t		u1CSOE:1;
    uint_io16_t		u1CSEN0:1;
    uint_io16_t		u1CSEN1:1;
    uint_io16_t		u1CSEN2:1;
    uint_io16_t		u1CSEN3:1;
    uint_io16_t		u1CSLVL:1;
    uint_io16_t		u3CDIV:3;
    uint_io16_t		u1SCAM:1;
    uint_io16_t		u2SCD:2;
    uint_io16_t		u2SED:2;
    uint_io16_t		u2SST:2;
}stc_mcg_mfsn_csio_1_scscr_field_t;

typedef union un_mcg_mfsn_csio_1_scscr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_csio_1_scscr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_scscr_t;

/* SCSTR0 */
#define MCG_MFS16_CSIO_SCSTR0	(MCG_MFS16_CSIO_1.unSCSTR0.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCSTR0_CSHD	MCG_MFS16_CSIO_SCSTR0  /*@bfrg@*/

#define MCG_MFS17_CSIO_SCSTR0	(MCG_MFS17_CSIO_1.unSCSTR0.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCSTR0_CSHD	MCG_MFS17_CSIO_SCSTR0  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_scstr0{
    uint_io8_t		u8Register;
}un_mcg_mfsn_csio_1_scstr0_t;

/* SCSTR1 */
#define MCG_MFS16_CSIO_SCSTR1	(MCG_MFS16_CSIO_1.unSCSTR1.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCSTR1_CSSU	MCG_MFS16_CSIO_SCSTR1  /*@bfrg@*/

#define MCG_MFS17_CSIO_SCSTR1	(MCG_MFS17_CSIO_1.unSCSTR1.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCSTR1_CSSU	MCG_MFS17_CSIO_SCSTR1  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_scstr1{
    uint_io8_t		u8Register;
}un_mcg_mfsn_csio_1_scstr1_t;

/* SCSTR23 */
#define MCG_MFS16_CSIO_SCSTR23	(MCG_MFS16_CSIO_1.unSCSTR23.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCSTR2	(MCG_MFS16_CSIO_1.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define MCG_MFS16_CSIO_SCSTR3	(MCG_MFS16_CSIO_1.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define MCG_MFS16_CSIO_SCSTR23_CSDS	MCG_MFS16_CSIO_SCSTR23  /*@bfrg@*/

#define MCG_MFS17_CSIO_SCSTR23	(MCG_MFS17_CSIO_1.unSCSTR23.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCSTR2	(MCG_MFS17_CSIO_1.unSCSTR23.au8Byte[0])  /*@arbyte@*/
#define MCG_MFS17_CSIO_SCSTR3	(MCG_MFS17_CSIO_1.unSCSTR23.au8Byte[1])  /*@arbyte@*/
#define MCG_MFS17_CSIO_SCSTR23_CSDS	MCG_MFS17_CSIO_SCSTR23  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_scstr23{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_scstr23_t;

/* SCSFR0 */
#define MCG_MFS16_CSIO_SCSFR0	(MCG_MFS16_CSIO_1.unSCSFR0.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCSFR0_CS1L	(MCG_MFS16_CSIO_1.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define MCG_MFS16_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB0D400A4)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB0D400A5)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB0D400A6)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB0D400A7)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SCSFR0	(MCG_MFS17_CSIO_1.unSCSFR0.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCSFR0_CS1L	(MCG_MFS17_CSIO_1.unSCSFR0.stcField.u4CS1L)  /*@bf@*/
#define MCG_MFS17_CSIO_SCSFR0_CS1BDS	(*(volatile uint_io8_t*)0xB0D420A4)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR0_CS1SPI	(*(volatile uint_io8_t*)0xB0D420A5)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR0_CS1SCINV	(*(volatile uint_io8_t*)0xB0D420A6)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR0_CS1CSLVL	(*(volatile uint_io8_t*)0xB0D420A7)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_scsfr0_field{
    uint_io8_t		u4CS1L:4;
    uint_io8_t		u1CS1BDS:1;
    uint_io8_t		u1CS1SPI:1;
    uint_io8_t		u1CS1SCINV:1;
    uint_io8_t		u1CS1CSLVL:1;
}stc_mcg_mfsn_csio_1_scsfr0_field_t;

typedef union un_mcg_mfsn_csio_1_scsfr0{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_scsfr0_field_t		stcField;
}un_mcg_mfsn_csio_1_scsfr0_t;

/* SCSFR1 */
#define MCG_MFS16_CSIO_SCSFR1	(MCG_MFS16_CSIO_1.unSCSFR1.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCSFR1_CS2L	(MCG_MFS16_CSIO_1.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define MCG_MFS16_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB0D400AC)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB0D400AD)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB0D400AE)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB0D400AF)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SCSFR1	(MCG_MFS17_CSIO_1.unSCSFR1.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCSFR1_CS2L	(MCG_MFS17_CSIO_1.unSCSFR1.stcField.u4CS2L)  /*@bf@*/
#define MCG_MFS17_CSIO_SCSFR1_CS2BDS	(*(volatile uint_io8_t*)0xB0D420AC)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR1_CS2SPI	(*(volatile uint_io8_t*)0xB0D420AD)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR1_CS2SCINV	(*(volatile uint_io8_t*)0xB0D420AE)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR1_CS2CSLVL	(*(volatile uint_io8_t*)0xB0D420AF)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_scsfr1_field{
    uint_io8_t		u4CS2L:4;
    uint_io8_t		u1CS2BDS:1;
    uint_io8_t		u1CS2SPI:1;
    uint_io8_t		u1CS2SCINV:1;
    uint_io8_t		u1CS2CSLVL:1;
}stc_mcg_mfsn_csio_1_scsfr1_field_t;

typedef union un_mcg_mfsn_csio_1_scsfr1{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_scsfr1_field_t		stcField;
}un_mcg_mfsn_csio_1_scsfr1_t;

/* SCSFR2 */
#define MCG_MFS16_CSIO_SCSFR2	(MCG_MFS16_CSIO_1.unSCSFR2.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SCSFR2_CS3L	(MCG_MFS16_CSIO_1.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define MCG_MFS16_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB0D400B4)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB0D400B5)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB0D400B6)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB0D400B7)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SCSFR2	(MCG_MFS17_CSIO_1.unSCSFR2.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SCSFR2_CS3L	(MCG_MFS17_CSIO_1.unSCSFR2.stcField.u4CS3L)  /*@bf@*/
#define MCG_MFS17_CSIO_SCSFR2_CS3BDS	(*(volatile uint_io8_t*)0xB0D420B4)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR2_CS3SPI	(*(volatile uint_io8_t*)0xB0D420B5)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR2_CS3SCINV	(*(volatile uint_io8_t*)0xB0D420B6)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SCSFR2_CS3CSLVL	(*(volatile uint_io8_t*)0xB0D420B7)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_scsfr2_field{
    uint_io8_t		u4CS3L:4;
    uint_io8_t		u1CS3BDS:1;
    uint_io8_t		u1CS3SPI:1;
    uint_io8_t		u1CS3SCINV:1;
    uint_io8_t		u1CS3CSLVL:1;
}stc_mcg_mfsn_csio_1_scsfr2_field_t;

typedef union un_mcg_mfsn_csio_1_scsfr2{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_scsfr2_field_t		stcField;
}un_mcg_mfsn_csio_1_scsfr2_t;

/* TBYTE0 */
#define MCG_MFS16_CSIO_TBYTE0	(MCG_MFS16_CSIO_1.unTBYTE0.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_TBYTE0_TBYTE0	MCG_MFS16_CSIO_TBYTE0  /*@bfrg@*/

#define MCG_MFS17_CSIO_TBYTE0	(MCG_MFS17_CSIO_1.unTBYTE0.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_TBYTE0_TBYTE0	MCG_MFS17_CSIO_TBYTE0  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_tbyte0{
    uint_io8_t		u8Register;
}un_mcg_mfsn_csio_1_tbyte0_t;

/* TBYTE1 */
#define MCG_MFS16_CSIO_TBYTE1	(MCG_MFS16_CSIO_1.unTBYTE1.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_TBYTE1_TBYTE1	MCG_MFS16_CSIO_TBYTE1  /*@bfrg@*/

#define MCG_MFS17_CSIO_TBYTE1	(MCG_MFS17_CSIO_1.unTBYTE1.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_TBYTE1_TBYTE1	MCG_MFS17_CSIO_TBYTE1  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_tbyte1{
    uint_io8_t		u8Register;
}un_mcg_mfsn_csio_1_tbyte1_t;

/* TBYTE2 */
#define MCG_MFS16_CSIO_TBYTE2	(MCG_MFS16_CSIO_1.unTBYTE2.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_TBYTE2_TBYTE2	MCG_MFS16_CSIO_TBYTE2  /*@bfrg@*/

#define MCG_MFS17_CSIO_TBYTE2	(MCG_MFS17_CSIO_1.unTBYTE2.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_TBYTE2_TBYTE2	MCG_MFS17_CSIO_TBYTE2  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_tbyte2{
    uint_io8_t		u8Register;
}un_mcg_mfsn_csio_1_tbyte2_t;

/* TBYTE3 */
#define MCG_MFS16_CSIO_TBYTE3	(MCG_MFS16_CSIO_1.unTBYTE3.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_TBYTE3_TBYTE3	MCG_MFS16_CSIO_TBYTE3  /*@bfrg@*/

#define MCG_MFS17_CSIO_TBYTE3	(MCG_MFS17_CSIO_1.unTBYTE3.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_TBYTE3_TBYTE3	MCG_MFS17_CSIO_TBYTE3  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_tbyte3{
    uint_io8_t		u8Register;
}un_mcg_mfsn_csio_1_tbyte3_t;

/* BGR */
#define MCG_MFS16_CSIO_BGR	(MCG_MFS16_CSIO_1.unBGR.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_BGR_BGR	(MCG_MFS16_CSIO_1.unBGR.stcField.u15BGR)  /*@bf@*/

#define MCG_MFS17_CSIO_BGR	(MCG_MFS17_CSIO_1.unBGR.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_BGR_BGR	(MCG_MFS17_CSIO_1.unBGR.stcField.u15BGR)  /*@bf@*/

typedef struct stc_mcg_mfsn_csio_1_bgr_field{
    uint_io16_t		u15BGR:15;
    uint_io16_t		:1;
}stc_mcg_mfsn_csio_1_bgr_field_t;

typedef union un_mcg_mfsn_csio_1_bgr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_csio_1_bgr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_bgr_t;

/* FCR0 */
#define MCG_MFS16_CSIO_FCR0	(MCG_MFS16_CSIO_1.unFCR0.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB0D40100)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB0D40101)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB0D40102)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB0D40103)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB0D40104)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB0D40105)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB0D40106)  /*@bfbba@*/

#define MCG_MFS17_CSIO_FCR0	(MCG_MFS17_CSIO_1.unFCR0.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FCR0_FE1	(*(volatile uint_io8_t*)0xB0D42100)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0_FE2	(*(volatile uint_io8_t*)0xB0D42101)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0_FCL1	(*(volatile uint_io8_t*)0xB0D42102)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0_FCL2	(*(volatile uint_io8_t*)0xB0D42103)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0_FSET	(*(volatile uint_io8_t*)0xB0D42104)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0_FLD	(*(volatile uint_io8_t*)0xB0D42105)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0_FLST	(*(volatile uint_io8_t*)0xB0D42106)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_fcr0_field{
    uint_io8_t		u1FE1:1;
    uint_io8_t		u1FE2:1;
    uint_io8_t		u1FCL1:1;
    uint_io8_t		u1FCL2:1;
    uint_io8_t		u1FSET:1;
    uint_io8_t		u1FLD:1;
    uint_io8_t		u1FLST:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_csio_1_fcr0_field_t;

typedef union un_mcg_mfsn_csio_1_fcr0{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_fcr0_field_t		stcField;
}un_mcg_mfsn_csio_1_fcr0_t;

/* FCR1 */
#define MCG_MFS16_CSIO_FCR1	(MCG_MFS16_CSIO_1.unFCR1.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB0D40108)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB0D40109)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB0D4010A)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB0D4010B)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB0D4010C)  /*@bfbba@*/

#define MCG_MFS17_CSIO_FCR1	(MCG_MFS17_CSIO_1.unFCR1.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FCR1_FSEL	(*(volatile uint_io8_t*)0xB0D42108)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1_FTIE	(*(volatile uint_io8_t*)0xB0D42109)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB0D4210A)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB0D4210B)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB0D4210C)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_fcr1_field{
    uint_io8_t		u1FSEL:1;
    uint_io8_t		u1FTIE:1;
    uint_io8_t		u1FDRQ:1;
    uint_io8_t		u1FRIIE:1;
    uint_io8_t		u1FLSTE:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_csio_1_fcr1_field_t;

typedef union un_mcg_mfsn_csio_1_fcr1{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_fcr1_field_t		stcField;
}un_mcg_mfsn_csio_1_fcr1_t;

/* FBYTE */
#define MCG_MFS16_CSIO_FBYTE	(MCG_MFS16_CSIO_1.unFBYTE.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FBYTE_FBYTE1	(MCG_MFS16_CSIO_1.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS16_CSIO_FBYTE_FBYTE2	(MCG_MFS16_CSIO_1.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define MCG_MFS17_CSIO_FBYTE	(MCG_MFS17_CSIO_1.unFBYTE.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FBYTE_FBYTE1	(MCG_MFS17_CSIO_1.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS17_CSIO_FBYTE_FBYTE2	(MCG_MFS17_CSIO_1.unFBYTE.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_mcg_mfsn_csio_1_fbyte_field{
    uint_io16_t		u8FBYTE1:8;
    uint_io16_t		u8FBYTE2:8;
}stc_mcg_mfsn_csio_1_fbyte_field_t;

typedef union un_mcg_mfsn_csio_1_fbyte{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_csio_1_fbyte_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_fbyte_t;

/* FTICR */
#define MCG_MFS16_CSIO_FTICR	(MCG_MFS16_CSIO_1.unFTICR.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FTICR_FTICR1	(MCG_MFS16_CSIO_1.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS16_CSIO_FTICR_FTICR2	(MCG_MFS16_CSIO_1.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define MCG_MFS17_CSIO_FTICR	(MCG_MFS17_CSIO_1.unFTICR.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FTICR_FTICR1	(MCG_MFS17_CSIO_1.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS17_CSIO_FTICR_FTICR2	(MCG_MFS17_CSIO_1.unFTICR.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_mcg_mfsn_csio_1_fticr_field{
    uint_io16_t		u8FTICR1:8;
    uint_io16_t		u8FTICR2:8;
}stc_mcg_mfsn_csio_1_fticr_field_t;

typedef union un_mcg_mfsn_csio_1_fticr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_csio_1_fticr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_fticr_t;

/* ECR */
#define MCG_MFS16_CSIO_ECR	(MCG_MFS16_CSIO_1.unECR.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB0D40130)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB0D40131)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB0D40132)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB0D40133)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB0D40134)  /*@bfbba@*/

#define MCG_MFS17_CSIO_ECR	(MCG_MFS17_CSIO_1.unECR.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB0D42130)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB0D42131)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ECR_TEIE	(*(volatile uint_io8_t*)0xB0D42132)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ECR_REIE	(*(volatile uint_io8_t*)0xB0D42133)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ECR_EISEL	(*(volatile uint_io8_t*)0xB0D42134)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_ecr_field{
    uint_io8_t		u1TXBLKEN:1;
    uint_io8_t		u1RXBLKEN:1;
    uint_io8_t		u1TEIE:1;
    uint_io8_t		u1REIE:1;
    uint_io8_t		u1EISEL:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_csio_1_ecr_field_t;

typedef union un_mcg_mfsn_csio_1_ecr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_ecr_field_t		stcField;
}un_mcg_mfsn_csio_1_ecr_t;

/* ESR */
#define MCG_MFS16_CSIO_ESR	(MCG_MFS16_CSIO_1.unESR.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB0D40138)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB0D40139)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB0D4013A)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB0D4013B)  /*@bfbba@*/

#define MCG_MFS17_CSIO_ESR	(MCG_MFS17_CSIO_1.unESR.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_ESR_TBERR	(*(volatile uint_io8_t*)0xB0D42138)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESR_RBERR	(*(volatile uint_io8_t*)0xB0D42139)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESR_TXOVR	(*(volatile uint_io8_t*)0xB0D4213A)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESR_RXUDR	(*(volatile uint_io8_t*)0xB0D4213B)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_esr_field{
    uint_io8_t		u1TBERR:1;
    uint_io8_t		u1RBERR:1;
    uint_io8_t		u1TXOVR:1;
    uint_io8_t		u1RXUDR:1;
    uint_io8_t		:4;
}stc_mcg_mfsn_csio_1_esr_field_t;

typedef union un_mcg_mfsn_csio_1_esr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_esr_field_t		stcField;
}un_mcg_mfsn_csio_1_esr_t;

/* TBSIZE */
#define MCG_MFS16_CSIO_TBSIZE	(MCG_MFS16_CSIO_1.unTBSIZE.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_TBSIZE_TBSIZE	MCG_MFS16_CSIO_TBSIZE  /*@bfrg@*/

#define MCG_MFS17_CSIO_TBSIZE	(MCG_MFS17_CSIO_1.unTBSIZE.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_TBSIZE_TBSIZE	MCG_MFS17_CSIO_TBSIZE  /*@bfrg@*/

typedef union un_mcg_mfsn_csio_1_tbsize{
    uint_io8_t		u8Register;
}un_mcg_mfsn_csio_1_tbsize_t;

/* SACSRC */
#define MCG_MFS16_CSIO_SACSRC	(MCG_MFS16_CSIO_1.unSACSRC.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB0D40180)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB0D40185)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB0D40186)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB0D40187)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB0D40188)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB0D4018B)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB0D4018C)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB0D4018D)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB0D4018F)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SACSRC	(MCG_MFS17_CSIO_1.unSACSRC.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB0D42180)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB0D42185)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_TSYNEC	(*(volatile uint_io8_t*)0xB0D42186)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB0D42187)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB0D42188)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_CSEC	(*(volatile uint_io8_t*)0xB0D4218B)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_CSEIEC	(*(volatile uint_io8_t*)0xB0D4218C)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_TBEENC	(*(volatile uint_io8_t*)0xB0D4218D)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB0D4218F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_sacsrc_field{
    uint_io16_t		u1TMREC:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGEC:1;
    uint_io16_t		u1TSYNEC:1;
    uint_io16_t		u1TINTEC:1;
    uint_io16_t		u1TINTC:1;
    uint_io16_t		:2;
    uint_io16_t		u1CSEC:1;
    uint_io16_t		u1CSEIEC:1;
    uint_io16_t		u1TBEENC:1;
    uint_io16_t		:1;
    uint_io16_t		u1STSTC:1;
}stc_mcg_mfsn_csio_1_sacsrc_field_t;

typedef union un_mcg_mfsn_csio_1_sacsrc{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_csio_1_sacsrc_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_sacsrc_t;

/* FCR0C */
#define MCG_MFS16_CSIO_FCR0C	(MCG_MFS16_CSIO_1.unFCR0C.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB0D401E0)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB0D401E1)  /*@bfbba@*/

#define MCG_MFS17_CSIO_FCR0C	(MCG_MFS17_CSIO_1.unFCR0C.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB0D421E0)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB0D421E1)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_fcr0c_field{
    uint_io8_t		u1FE1C:1;
    uint_io8_t		u1FE2C:1;
    uint_io8_t		:6;
}stc_mcg_mfsn_csio_1_fcr0c_field_t;

typedef union un_mcg_mfsn_csio_1_fcr0c{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_fcr0c_field_t		stcField;
}un_mcg_mfsn_csio_1_fcr0c_t;

/* FCR1C */
#define MCG_MFS16_CSIO_FCR1C	(MCG_MFS16_CSIO_1.unFCR1C.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB0D401E8)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB0D401E9)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB0D401EA)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB0D401EB)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB0D401EC)  /*@bfbba@*/

#define MCG_MFS17_CSIO_FCR1C	(MCG_MFS17_CSIO_1.unFCR1C.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB0D421E8)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB0D421E9)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB0D421EA)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB0D421EB)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB0D421EC)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_fcr1c_field{
    uint_io8_t		u1FSELC:1;
    uint_io8_t		u1FTIEC:1;
    uint_io8_t		u1FDRQC:1;
    uint_io8_t		u1FRIIEC:1;
    uint_io8_t		u1FLSTEC:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_csio_1_fcr1c_field_t;

typedef union un_mcg_mfsn_csio_1_fcr1c{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_fcr1c_field_t		stcField;
}un_mcg_mfsn_csio_1_fcr1c_t;

/* ESRC */
#define MCG_MFS16_CSIO_ESRC	(MCG_MFS16_CSIO_1.unESRC.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB0D40218)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB0D40219)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB0D4021A)  /*@bfbba@*/
#define MCG_MFS16_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB0D4021B)  /*@bfbba@*/

#define MCG_MFS17_CSIO_ESRC	(MCG_MFS17_CSIO_1.unESRC.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB0D42218)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB0D42219)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB0D4221A)  /*@bfbba@*/
#define MCG_MFS17_CSIO_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB0D4221B)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_esrc_field{
    uint_io8_t		u1TBERRC:1;
    uint_io8_t		u1RBERRC:1;
    uint_io8_t		u1TXOVRC:1;
    uint_io8_t		u1RXUDRC:1;
    uint_io8_t		:4;
}stc_mcg_mfsn_csio_1_esrc_field_t;

typedef union un_mcg_mfsn_csio_1_esrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_esrc_field_t		stcField;
}un_mcg_mfsn_csio_1_esrc_t;

/* SACSRS */
#define MCG_MFS16_CSIO_SACSRS	(MCG_MFS16_CSIO_1.unSACSRS.u16Register)  /*@rg@*/
#define MCG_MFS16_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB0D40240)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB0D40245)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB0D40246)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB0D40247)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB0D4024C)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB0D4024D)  /*@bfbba@*/
#define MCG_MFS16_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB0D4024F)  /*@bfbba@*/

#define MCG_MFS17_CSIO_SACSRS	(MCG_MFS17_CSIO_1.unSACSRS.u16Register)  /*@rg@*/
#define MCG_MFS17_CSIO_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB0D42240)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB0D42245)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRS_TSYNES	(*(volatile uint_io8_t*)0xB0D42246)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB0D42247)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRS_CSEIES	(*(volatile uint_io8_t*)0xB0D4224C)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRS_TBEENS	(*(volatile uint_io8_t*)0xB0D4224D)  /*@bfbba@*/
#define MCG_MFS17_CSIO_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB0D4224F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_sacsrs_field{
    uint_io16_t		u1TMRES:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGES:1;
    uint_io16_t		u1TSYNES:1;
    uint_io16_t		u1TINTES:1;
    uint_io16_t		:4;
    uint_io16_t		u1CSEIES:1;
    uint_io16_t		u1TBEENS:1;
    uint_io16_t		:1;
    uint_io16_t		u1STSTS:1;
}stc_mcg_mfsn_csio_1_sacsrs_field_t;

typedef union un_mcg_mfsn_csio_1_sacsrs{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_csio_1_sacsrs_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_csio_1_sacsrs_t;

/* FCR0S */
#define MCG_MFS16_CSIO_FCR0S	(MCG_MFS16_CSIO_1.unFCR0S.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB0D402A0)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB0D402A1)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB0D402A2)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB0D402A3)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB0D402A4)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB0D402A5)  /*@bfbba@*/

#define MCG_MFS17_CSIO_FCR0S	(MCG_MFS17_CSIO_1.unFCR0S.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB0D422A0)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB0D422A1)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB0D422A2)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB0D422A3)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB0D422A4)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB0D422A5)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_fcr0s_field{
    uint_io8_t		u1FE1S:1;
    uint_io8_t		u1FE2S:1;
    uint_io8_t		u1FCL1S:1;
    uint_io8_t		u1FCL2S:1;
    uint_io8_t		u1FSETS:1;
    uint_io8_t		u1FLDS:1;
    uint_io8_t		:2;
}stc_mcg_mfsn_csio_1_fcr0s_field_t;

typedef union un_mcg_mfsn_csio_1_fcr0s{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_fcr0s_field_t		stcField;
}un_mcg_mfsn_csio_1_fcr0s_t;

/* FCR1S */
#define MCG_MFS16_CSIO_FCR1S	(MCG_MFS16_CSIO_1.unFCR1S.u8Register)  /*@rg@*/
#define MCG_MFS16_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB0D402A8)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB0D402A9)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB0D402AB)  /*@bfbba@*/
#define MCG_MFS16_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB0D402AC)  /*@bfbba@*/

#define MCG_MFS17_CSIO_FCR1S	(MCG_MFS17_CSIO_1.unFCR1S.u8Register)  /*@rg@*/
#define MCG_MFS17_CSIO_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB0D422A8)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB0D422A9)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB0D422AB)  /*@bfbba@*/
#define MCG_MFS17_CSIO_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB0D422AC)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_csio_1_fcr1s_field{
    uint_io8_t		u1FSELS:1;
    uint_io8_t		u1FTIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1FRIIES:1;
    uint_io8_t		u1FLSTES:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_csio_1_fcr1s_field_t;

typedef union un_mcg_mfsn_csio_1_fcr1s{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_csio_1_fcr1s_field_t		stcField;
}un_mcg_mfsn_csio_1_fcr1s_t;


typedef struct stc_mcg_mfsn_csio_1{
    un_mcg_mfsn_csio_1_smr_t	unSMR;	/* 0x00000000 */
    un_mcg_mfsn_csio_1_scr_t	unSCR;	/* 0x00000001 */
    un_mcg_mfsn_csio_1_escr_t	unESCR;	/* 0x00000002 */
    un_mcg_mfsn_csio_1_ssr_t	unSSR;	/* 0x00000003 */
    un_mcg_mfsn_csio_1_rdr_t	unRDR;	/* 0x00000004 */
    un_mcg_mfsn_csio_1_sacsr_t	unSACSR;	/* 0x00000008 */
    un_mcg_mfsn_csio_1_stmr_t	unSTMR;	/* 0x0000000A */
    un_mcg_mfsn_csio_1_stmcr_t	unSTMCR;	/* 0x0000000C */
    un_mcg_mfsn_csio_1_scscr_t	unSCSCR;	/* 0x0000000E */
    un_mcg_mfsn_csio_1_scstr0_t	unSCSTR0;	/* 0x00000010 */
    un_mcg_mfsn_csio_1_scstr1_t	unSCSTR1;	/* 0x00000011 */
    un_mcg_mfsn_csio_1_scstr23_t	unSCSTR23;	/* 0x00000012 */
    un_mcg_mfsn_csio_1_scsfr0_t	unSCSFR0;	/* 0x00000014 */
    un_mcg_mfsn_csio_1_scsfr1_t	unSCSFR1;	/* 0x00000015 */
    un_mcg_mfsn_csio_1_scsfr2_t	unSCSFR2;	/* 0x00000016 */
    uint_io8_t	au8Reserved0[1];	/* 0x00000017 */
    un_mcg_mfsn_csio_1_tbyte0_t	unTBYTE0;	/* 0x00000018 */
    un_mcg_mfsn_csio_1_tbyte1_t	unTBYTE1;	/* 0x00000019 */
    un_mcg_mfsn_csio_1_tbyte2_t	unTBYTE2;	/* 0x0000001A */
    un_mcg_mfsn_csio_1_tbyte3_t	unTBYTE3;	/* 0x0000001B */
    un_mcg_mfsn_csio_1_bgr_t	unBGR;	/* 0x0000001C */
    uint_io8_t	au8Reserved1[2];	/* 0x0000001E */
    un_mcg_mfsn_csio_1_fcr0_t	unFCR0;	/* 0x00000020 */
    un_mcg_mfsn_csio_1_fcr1_t	unFCR1;	/* 0x00000021 */
    un_mcg_mfsn_csio_1_fbyte_t	unFBYTE;	/* 0x00000022 */
    un_mcg_mfsn_csio_1_fticr_t	unFTICR;	/* 0x00000024 */
    un_mcg_mfsn_csio_1_ecr_t	unECR;	/* 0x00000026 */
    un_mcg_mfsn_csio_1_esr_t	unESR;	/* 0x00000027 */
    un_mcg_mfsn_csio_1_tbsize_t	unTBSIZE;	/* 0x00000028 */
    uint_io8_t	au8Reserved2[7];	/* 0x00000029 */
    un_mcg_mfsn_csio_1_sacsrc_t	unSACSRC;	/* 0x00000030 */
    uint_io8_t	au8Reserved3[10];	/* 0x00000032 */
    un_mcg_mfsn_csio_1_fcr0c_t	unFCR0C;	/* 0x0000003C */
    un_mcg_mfsn_csio_1_fcr1c_t	unFCR1C;	/* 0x0000003D */
    uint_io8_t	au8Reserved4[5];	/* 0x0000003E */
    un_mcg_mfsn_csio_1_esrc_t	unESRC;	/* 0x00000043 */
    uint_io8_t	au8Reserved5[4];	/* 0x00000044 */
    un_mcg_mfsn_csio_1_sacsrs_t	unSACSRS;	/* 0x00000048 */
    uint_io8_t	au8Reserved6[10];	/* 0x0000004A */
    un_mcg_mfsn_csio_1_fcr0s_t	unFCR0S;	/* 0x00000054 */
    un_mcg_mfsn_csio_1_fcr1s_t	unFCR1S;	/* 0x00000055 */
    uint_io8_t	au8Reserved7[938];	/* 0x00000056 */
}stc_mcg_mfsn_csio_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mcg_mfsn_csio_1_t	stcMCG_MFS_CSIO_1[2];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_MFS_CSIO_H */
