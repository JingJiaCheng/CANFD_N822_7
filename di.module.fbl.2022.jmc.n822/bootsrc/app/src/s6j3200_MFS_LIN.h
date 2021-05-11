/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_MFS_LIN_H
#define __S6J3200_MFS_LIN_H

#include "s6j3200io_basetypes.h"

/* CPG_MFS[00-04/08-12]_LIN base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define CPG_MFS00_LIN	stcCPG_MFS_LIN[0]
#define CPG_MFS01_LIN	stcCPG_MFS_LIN[1]
#define CPG_MFS02_LIN	stcCPG_MFS_LIN[2]
#define CPG_MFS03_LIN	stcCPG_MFS_LIN[3]
#define CPG_MFS04_LIN	stcCPG_MFS_LIN[4]
#define CPG_MFS08_LIN	stcCPG_MFS_LIN[5]
#define CPG_MFS09_LIN	stcCPG_MFS_LIN[6]
#define CPG_MFS10_LIN	stcCPG_MFS_LIN[7]
#define CPG_MFS11_LIN	stcCPG_MFS_LIN[8]
#define CPG_MFS12_LIN	stcCPG_MFS_LIN[9]
#else /* __IO_DEFINE */
#define CPG_MFS00_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4800000))
#define CPG_MFS01_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4800400))
#define CPG_MFS02_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4800800))
#define CPG_MFS03_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4800C00))
#define CPG_MFS04_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4801000))
#define CPG_MFS08_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4880000))
#define CPG_MFS09_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4880400))
#define CPG_MFS10_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4880800))
#define CPG_MFS11_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4880C00))
#define CPG_MFS12_LIN	(*((volatile stc_cpg_mfsn_lin_t*)0xB4881000))
#endif /* __IO_DEFINE */

/* SMR */
#define CPG_MFS00_LIN_SMR	(CPG_MFS00_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7800000)  /*@bfbba@*/
#define CPG_MFS00_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7800003)  /*@bfbba@*/
#define CPG_MFS00_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7800004)  /*@bfbba@*/
#define CPG_MFS00_LIN_SMR_MD	(CPG_MFS00_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS01_LIN_SMR	(CPG_MFS01_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7802000)  /*@bfbba@*/
#define CPG_MFS01_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7802003)  /*@bfbba@*/
#define CPG_MFS01_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7802004)  /*@bfbba@*/
#define CPG_MFS01_LIN_SMR_MD	(CPG_MFS01_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS02_LIN_SMR	(CPG_MFS02_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7804000)  /*@bfbba@*/
#define CPG_MFS02_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7804003)  /*@bfbba@*/
#define CPG_MFS02_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7804004)  /*@bfbba@*/
#define CPG_MFS02_LIN_SMR_MD	(CPG_MFS02_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS03_LIN_SMR	(CPG_MFS03_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7806000)  /*@bfbba@*/
#define CPG_MFS03_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7806003)  /*@bfbba@*/
#define CPG_MFS03_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7806004)  /*@bfbba@*/
#define CPG_MFS03_LIN_SMR_MD	(CPG_MFS03_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS04_LIN_SMR	(CPG_MFS04_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7808000)  /*@bfbba@*/
#define CPG_MFS04_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7808003)  /*@bfbba@*/
#define CPG_MFS04_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7808004)  /*@bfbba@*/
#define CPG_MFS04_LIN_SMR_MD	(CPG_MFS04_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS08_LIN_SMR	(CPG_MFS08_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7C00000)  /*@bfbba@*/
#define CPG_MFS08_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7C00003)  /*@bfbba@*/
#define CPG_MFS08_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C00004)  /*@bfbba@*/
#define CPG_MFS08_LIN_SMR_MD	(CPG_MFS08_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS09_LIN_SMR	(CPG_MFS09_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7C02000)  /*@bfbba@*/
#define CPG_MFS09_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7C02003)  /*@bfbba@*/
#define CPG_MFS09_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C02004)  /*@bfbba@*/
#define CPG_MFS09_LIN_SMR_MD	(CPG_MFS09_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS10_LIN_SMR	(CPG_MFS10_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7C04000)  /*@bfbba@*/
#define CPG_MFS10_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7C04003)  /*@bfbba@*/
#define CPG_MFS10_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C04004)  /*@bfbba@*/
#define CPG_MFS10_LIN_SMR_MD	(CPG_MFS10_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS11_LIN_SMR	(CPG_MFS11_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7C06000)  /*@bfbba@*/
#define CPG_MFS11_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7C06003)  /*@bfbba@*/
#define CPG_MFS11_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C06004)  /*@bfbba@*/
#define CPG_MFS11_LIN_SMR_MD	(CPG_MFS11_LIN.unSMR.stcField.u3MD)  /*@bf@*/

#define CPG_MFS12_LIN_SMR	(CPG_MFS12_LIN.unSMR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB7C08000)  /*@bfbba@*/
#define CPG_MFS12_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB7C08003)  /*@bfbba@*/
#define CPG_MFS12_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB7C08004)  /*@bfbba@*/
#define CPG_MFS12_LIN_SMR_MD	(CPG_MFS12_LIN.unSMR.stcField.u3MD)  /*@bf@*/

typedef struct stc_cpg_mfsn_lin_smr_field{
    uint_io8_t		u1SOE:1;
    uint_io8_t		:2;
    uint_io8_t		u1SBL:1;
    uint_io8_t		u1WUCR:1;
    uint_io8_t		u3MD:3;
}stc_cpg_mfsn_lin_smr_field_t;

typedef union un_cpg_mfsn_lin_smr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_smr_field_t		stcField;
}un_cpg_mfsn_lin_smr_t;

/* SCR */
#define CPG_MFS00_LIN_SCR	(CPG_MFS00_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7800008)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7800009)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB780000A)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB780000B)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB780000C)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB780000D)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB780000E)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB780000F)  /*@bfbba@*/

#define CPG_MFS01_LIN_SCR	(CPG_MFS01_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7802008)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7802009)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB780200A)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB780200B)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB780200C)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB780200D)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB780200E)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB780200F)  /*@bfbba@*/

#define CPG_MFS02_LIN_SCR	(CPG_MFS02_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7804008)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7804009)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB780400A)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB780400B)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB780400C)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB780400D)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB780400E)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB780400F)  /*@bfbba@*/

#define CPG_MFS03_LIN_SCR	(CPG_MFS03_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7806008)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7806009)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB780600A)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB780600B)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB780600C)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB780600D)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB780600E)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB780600F)  /*@bfbba@*/

#define CPG_MFS04_LIN_SCR	(CPG_MFS04_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7808008)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7808009)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB780800A)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB780800B)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB780800C)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB780800D)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB780800E)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB780800F)  /*@bfbba@*/

#define CPG_MFS08_LIN_SCR	(CPG_MFS08_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7C00008)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7C00009)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0000A)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0000B)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0000C)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB7C0000D)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB7C0000E)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0000F)  /*@bfbba@*/

#define CPG_MFS09_LIN_SCR	(CPG_MFS09_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7C02008)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7C02009)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0200A)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0200B)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0200C)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB7C0200D)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB7C0200E)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0200F)  /*@bfbba@*/

#define CPG_MFS10_LIN_SCR	(CPG_MFS10_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7C04008)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7C04009)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0400A)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0400B)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0400C)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB7C0400D)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB7C0400E)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0400F)  /*@bfbba@*/

#define CPG_MFS11_LIN_SCR	(CPG_MFS11_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7C06008)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7C06009)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0600A)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0600B)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0600C)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB7C0600D)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB7C0600E)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0600F)  /*@bfbba@*/

#define CPG_MFS12_LIN_SCR	(CPG_MFS12_LIN.unSCR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB7C08008)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB7C08009)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB7C0800A)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB7C0800B)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB7C0800C)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB7C0800D)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB7C0800E)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB7C0800F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_scr_field{
    uint_io8_t		u1TXE:1;
    uint_io8_t		u1RXE:1;
    uint_io8_t		u1TBIE:1;
    uint_io8_t		u1TIE:1;
    uint_io8_t		u1RIE:1;
    uint_io8_t		u1LBR:1;
    uint_io8_t		u1MS:1;
    uint_io8_t		u1UPCL:1;
}stc_cpg_mfsn_lin_scr_field_t;

typedef union un_cpg_mfsn_lin_scr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_scr_field_t		stcField;
}un_cpg_mfsn_lin_scr_t;

/* ESCR */
#define CPG_MFS00_LIN_ESCR	(CPG_MFS00_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_ESCR_DEL	(CPG_MFS00_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS00_LIN_ESCR_LBL1_0	(CPG_MFS00_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS00_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7800014)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7800015)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7800016)  /*@bfbba@*/

#define CPG_MFS01_LIN_ESCR	(CPG_MFS01_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_ESCR_DEL	(CPG_MFS01_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS01_LIN_ESCR_LBL1_0	(CPG_MFS01_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS01_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7802014)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7802015)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7802016)  /*@bfbba@*/

#define CPG_MFS02_LIN_ESCR	(CPG_MFS02_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_ESCR_DEL	(CPG_MFS02_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS02_LIN_ESCR_LBL1_0	(CPG_MFS02_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS02_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7804014)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7804015)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7804016)  /*@bfbba@*/

#define CPG_MFS03_LIN_ESCR	(CPG_MFS03_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_ESCR_DEL	(CPG_MFS03_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS03_LIN_ESCR_LBL1_0	(CPG_MFS03_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS03_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7806014)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7806015)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7806016)  /*@bfbba@*/

#define CPG_MFS04_LIN_ESCR	(CPG_MFS04_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_ESCR_DEL	(CPG_MFS04_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS04_LIN_ESCR_LBL1_0	(CPG_MFS04_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS04_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7808014)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7808015)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7808016)  /*@bfbba@*/

#define CPG_MFS08_LIN_ESCR	(CPG_MFS08_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_ESCR_DEL	(CPG_MFS08_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS08_LIN_ESCR_LBL1_0	(CPG_MFS08_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS08_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7C00014)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7C00015)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7C00016)  /*@bfbba@*/

#define CPG_MFS09_LIN_ESCR	(CPG_MFS09_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_ESCR_DEL	(CPG_MFS09_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS09_LIN_ESCR_LBL1_0	(CPG_MFS09_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS09_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7C02014)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7C02015)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7C02016)  /*@bfbba@*/

#define CPG_MFS10_LIN_ESCR	(CPG_MFS10_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_ESCR_DEL	(CPG_MFS10_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS10_LIN_ESCR_LBL1_0	(CPG_MFS10_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS10_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7C04014)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7C04015)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7C04016)  /*@bfbba@*/

#define CPG_MFS11_LIN_ESCR	(CPG_MFS11_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_ESCR_DEL	(CPG_MFS11_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS11_LIN_ESCR_LBL1_0	(CPG_MFS11_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS11_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7C06014)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7C06015)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7C06016)  /*@bfbba@*/

#define CPG_MFS12_LIN_ESCR	(CPG_MFS12_LIN.unESCR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_ESCR_DEL	(CPG_MFS12_LIN.unESCR.stcField.u2DEL)  /*@bf@*/
#define CPG_MFS12_LIN_ESCR_LBL1_0	(CPG_MFS12_LIN.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define CPG_MFS12_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB7C08014)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB7C08015)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB7C08016)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_escr_field{
    uint_io8_t		u2DEL:2;
    uint_io8_t		u2LBL1_0:2;
    uint_io8_t		u1LBIE:1;
    uint_io8_t		u1LBL2:1;
    uint_io8_t		u1ESBL:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_escr_field_t;

typedef union un_cpg_mfsn_lin_escr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_escr_field_t		stcField;
}un_cpg_mfsn_lin_escr_t;

/* SSR */
#define CPG_MFS00_LIN_SSR	(CPG_MFS00_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7800018)  /*@bfbba@*/
#define CPG_MFS00_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7800019)  /*@bfbba@*/
#define CPG_MFS00_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB780001A)  /*@bfbba@*/
#define CPG_MFS00_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB780001B)  /*@bfbba@*/
#define CPG_MFS00_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB780001C)  /*@bfbba@*/
#define CPG_MFS00_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB780001D)  /*@bfbba@*/
#define CPG_MFS00_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB780001F)  /*@bfbba@*/

#define CPG_MFS01_LIN_SSR	(CPG_MFS01_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7802018)  /*@bfbba@*/
#define CPG_MFS01_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7802019)  /*@bfbba@*/
#define CPG_MFS01_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB780201A)  /*@bfbba@*/
#define CPG_MFS01_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB780201B)  /*@bfbba@*/
#define CPG_MFS01_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB780201C)  /*@bfbba@*/
#define CPG_MFS01_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB780201D)  /*@bfbba@*/
#define CPG_MFS01_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB780201F)  /*@bfbba@*/

#define CPG_MFS02_LIN_SSR	(CPG_MFS02_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7804018)  /*@bfbba@*/
#define CPG_MFS02_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7804019)  /*@bfbba@*/
#define CPG_MFS02_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB780401A)  /*@bfbba@*/
#define CPG_MFS02_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB780401B)  /*@bfbba@*/
#define CPG_MFS02_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB780401C)  /*@bfbba@*/
#define CPG_MFS02_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB780401D)  /*@bfbba@*/
#define CPG_MFS02_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB780401F)  /*@bfbba@*/

#define CPG_MFS03_LIN_SSR	(CPG_MFS03_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7806018)  /*@bfbba@*/
#define CPG_MFS03_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7806019)  /*@bfbba@*/
#define CPG_MFS03_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB780601A)  /*@bfbba@*/
#define CPG_MFS03_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB780601B)  /*@bfbba@*/
#define CPG_MFS03_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB780601C)  /*@bfbba@*/
#define CPG_MFS03_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB780601D)  /*@bfbba@*/
#define CPG_MFS03_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB780601F)  /*@bfbba@*/

#define CPG_MFS04_LIN_SSR	(CPG_MFS04_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7808018)  /*@bfbba@*/
#define CPG_MFS04_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7808019)  /*@bfbba@*/
#define CPG_MFS04_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB780801A)  /*@bfbba@*/
#define CPG_MFS04_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB780801B)  /*@bfbba@*/
#define CPG_MFS04_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB780801C)  /*@bfbba@*/
#define CPG_MFS04_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB780801D)  /*@bfbba@*/
#define CPG_MFS04_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB780801F)  /*@bfbba@*/

#define CPG_MFS08_LIN_SSR	(CPG_MFS08_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7C00018)  /*@bfbba@*/
#define CPG_MFS08_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C00019)  /*@bfbba@*/
#define CPG_MFS08_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0001A)  /*@bfbba@*/
#define CPG_MFS08_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0001B)  /*@bfbba@*/
#define CPG_MFS08_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB7C0001C)  /*@bfbba@*/
#define CPG_MFS08_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB7C0001D)  /*@bfbba@*/
#define CPG_MFS08_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB7C0001F)  /*@bfbba@*/

#define CPG_MFS09_LIN_SSR	(CPG_MFS09_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7C02018)  /*@bfbba@*/
#define CPG_MFS09_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C02019)  /*@bfbba@*/
#define CPG_MFS09_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0201A)  /*@bfbba@*/
#define CPG_MFS09_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0201B)  /*@bfbba@*/
#define CPG_MFS09_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB7C0201C)  /*@bfbba@*/
#define CPG_MFS09_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB7C0201D)  /*@bfbba@*/
#define CPG_MFS09_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB7C0201F)  /*@bfbba@*/

#define CPG_MFS10_LIN_SSR	(CPG_MFS10_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7C04018)  /*@bfbba@*/
#define CPG_MFS10_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C04019)  /*@bfbba@*/
#define CPG_MFS10_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0401A)  /*@bfbba@*/
#define CPG_MFS10_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0401B)  /*@bfbba@*/
#define CPG_MFS10_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB7C0401C)  /*@bfbba@*/
#define CPG_MFS10_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB7C0401D)  /*@bfbba@*/
#define CPG_MFS10_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB7C0401F)  /*@bfbba@*/

#define CPG_MFS11_LIN_SSR	(CPG_MFS11_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7C06018)  /*@bfbba@*/
#define CPG_MFS11_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C06019)  /*@bfbba@*/
#define CPG_MFS11_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0601A)  /*@bfbba@*/
#define CPG_MFS11_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0601B)  /*@bfbba@*/
#define CPG_MFS11_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB7C0601C)  /*@bfbba@*/
#define CPG_MFS11_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB7C0601D)  /*@bfbba@*/
#define CPG_MFS11_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB7C0601F)  /*@bfbba@*/

#define CPG_MFS12_LIN_SSR	(CPG_MFS12_LIN.unSSR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB7C08018)  /*@bfbba@*/
#define CPG_MFS12_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB7C08019)  /*@bfbba@*/
#define CPG_MFS12_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB7C0801A)  /*@bfbba@*/
#define CPG_MFS12_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB7C0801B)  /*@bfbba@*/
#define CPG_MFS12_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB7C0801C)  /*@bfbba@*/
#define CPG_MFS12_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB7C0801D)  /*@bfbba@*/
#define CPG_MFS12_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB7C0801F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_ssr_field{
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1ORE:1;
    uint_io8_t		u1FRE:1;
    uint_io8_t		u1LBD:1;
    uint_io8_t		:1;
    uint_io8_t		u1REC:1;
}stc_cpg_mfsn_lin_ssr_field_t;

typedef union un_cpg_mfsn_lin_ssr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_ssr_field_t		stcField;
}un_cpg_mfsn_lin_ssr_t;

/* RDR */
#define CPG_MFS00_LIN_RDR	(CPG_MFS00_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_TDR	(CPG_MFS00_LIN_RDR)  /*@rg2@*/
#define CPG_MFS00_LIN_RDR_D	CPG_MFS00_LIN_RDR  /*@bfrg@*/
#define CPG_MFS00_LIN_TDR_D	CPG_MFS00_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS01_LIN_RDR	(CPG_MFS01_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_TDR	(CPG_MFS01_LIN_RDR)  /*@rg2@*/
#define CPG_MFS01_LIN_RDR_D	CPG_MFS01_LIN_RDR  /*@bfrg@*/
#define CPG_MFS01_LIN_TDR_D	CPG_MFS01_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS02_LIN_RDR	(CPG_MFS02_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_TDR	(CPG_MFS02_LIN_RDR)  /*@rg2@*/
#define CPG_MFS02_LIN_RDR_D	CPG_MFS02_LIN_RDR  /*@bfrg@*/
#define CPG_MFS02_LIN_TDR_D	CPG_MFS02_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS03_LIN_RDR	(CPG_MFS03_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_TDR	(CPG_MFS03_LIN_RDR)  /*@rg2@*/
#define CPG_MFS03_LIN_RDR_D	CPG_MFS03_LIN_RDR  /*@bfrg@*/
#define CPG_MFS03_LIN_TDR_D	CPG_MFS03_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS04_LIN_RDR	(CPG_MFS04_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_TDR	(CPG_MFS04_LIN_RDR)  /*@rg2@*/
#define CPG_MFS04_LIN_RDR_D	CPG_MFS04_LIN_RDR  /*@bfrg@*/
#define CPG_MFS04_LIN_TDR_D	CPG_MFS04_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS08_LIN_RDR	(CPG_MFS08_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_TDR	(CPG_MFS08_LIN_RDR)  /*@rg2@*/
#define CPG_MFS08_LIN_RDR_D	CPG_MFS08_LIN_RDR  /*@bfrg@*/
#define CPG_MFS08_LIN_TDR_D	CPG_MFS08_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS09_LIN_RDR	(CPG_MFS09_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_TDR	(CPG_MFS09_LIN_RDR)  /*@rg2@*/
#define CPG_MFS09_LIN_RDR_D	CPG_MFS09_LIN_RDR  /*@bfrg@*/
#define CPG_MFS09_LIN_TDR_D	CPG_MFS09_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS10_LIN_RDR	(CPG_MFS10_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_TDR	(CPG_MFS10_LIN_RDR)  /*@rg2@*/
#define CPG_MFS10_LIN_RDR_D	CPG_MFS10_LIN_RDR  /*@bfrg@*/
#define CPG_MFS10_LIN_TDR_D	CPG_MFS10_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS11_LIN_RDR	(CPG_MFS11_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_TDR	(CPG_MFS11_LIN_RDR)  /*@rg2@*/
#define CPG_MFS11_LIN_RDR_D	CPG_MFS11_LIN_RDR  /*@bfrg@*/
#define CPG_MFS11_LIN_TDR_D	CPG_MFS11_LIN_RDR_D  /*@bf2@*/

#define CPG_MFS12_LIN_RDR	(CPG_MFS12_LIN.unRDR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_TDR	(CPG_MFS12_LIN_RDR)  /*@rg2@*/
#define CPG_MFS12_LIN_RDR_D	CPG_MFS12_LIN_RDR  /*@bfrg@*/
#define CPG_MFS12_LIN_TDR_D	CPG_MFS12_LIN_RDR_D  /*@bf2@*/

typedef union un_cpg_mfsn_lin_rdr{
    uint_io8_t		u8Register;
}un_cpg_mfsn_lin_rdr_t;

/* SACSR */
#define CPG_MFS00_LIN_SACSR	(CPG_MFS00_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7800040)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_TDIV	(CPG_MFS00_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS00_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7800045)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7800047)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7800048)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_TRG	(CPG_MFS00_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS00_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB780004B)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB780004C)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB780004D)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB780004E)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB780004F)  /*@bfbba@*/

#define CPG_MFS01_LIN_SACSR	(CPG_MFS01_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7802040)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_TDIV	(CPG_MFS01_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS01_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7802045)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7802047)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7802048)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_TRG	(CPG_MFS01_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS01_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB780204B)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB780204C)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB780204D)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB780204E)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB780204F)  /*@bfbba@*/

#define CPG_MFS02_LIN_SACSR	(CPG_MFS02_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7804040)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_TDIV	(CPG_MFS02_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS02_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7804045)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7804047)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7804048)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_TRG	(CPG_MFS02_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS02_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB780404B)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB780404C)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB780404D)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB780404E)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB780404F)  /*@bfbba@*/

#define CPG_MFS03_LIN_SACSR	(CPG_MFS03_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7806040)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_TDIV	(CPG_MFS03_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS03_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7806045)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7806047)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7806048)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_TRG	(CPG_MFS03_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS03_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB780604B)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB780604C)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB780604D)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB780604E)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB780604F)  /*@bfbba@*/

#define CPG_MFS04_LIN_SACSR	(CPG_MFS04_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7808040)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_TDIV	(CPG_MFS04_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS04_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7808045)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7808047)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7808048)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_TRG	(CPG_MFS04_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS04_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB780804B)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB780804C)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB780804D)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB780804E)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB780804F)  /*@bfbba@*/

#define CPG_MFS08_LIN_SACSR	(CPG_MFS08_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C00040)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_TDIV	(CPG_MFS08_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS08_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C00045)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C00047)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C00048)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_TRG	(CPG_MFS08_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS08_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB7C0004B)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB7C0004C)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB7C0004D)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB7C0004E)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0004F)  /*@bfbba@*/

#define CPG_MFS09_LIN_SACSR	(CPG_MFS09_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C02040)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_TDIV	(CPG_MFS09_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS09_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C02045)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C02047)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C02048)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_TRG	(CPG_MFS09_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS09_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB7C0204B)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB7C0204C)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB7C0204D)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB7C0204E)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0204F)  /*@bfbba@*/

#define CPG_MFS10_LIN_SACSR	(CPG_MFS10_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C04040)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_TDIV	(CPG_MFS10_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS10_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C04045)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C04047)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C04048)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_TRG	(CPG_MFS10_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS10_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB7C0404B)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB7C0404C)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB7C0404D)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB7C0404E)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0404F)  /*@bfbba@*/

#define CPG_MFS11_LIN_SACSR	(CPG_MFS11_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C06040)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_TDIV	(CPG_MFS11_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS11_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C06045)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C06047)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C06048)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_TRG	(CPG_MFS11_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS11_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB7C0604B)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB7C0604C)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB7C0604D)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB7C0604E)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0604F)  /*@bfbba@*/

#define CPG_MFS12_LIN_SACSR	(CPG_MFS12_LIN.unSACSR.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB7C08040)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_TDIV	(CPG_MFS12_LIN.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define CPG_MFS12_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB7C08045)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB7C08047)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB7C08048)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_TRG	(CPG_MFS12_LIN.unSACSR.stcField.u2TRG)  /*@bf@*/
#define CPG_MFS12_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB7C0804B)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB7C0804C)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB7C0804D)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB7C0804E)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB7C0804F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_sacsr_field{
    uint_io16_t		u1TMRE:1;
    uint_io16_t		u4TDIV:4;
    uint_io16_t		u1TRGE:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTE:1;
    uint_io16_t		u1TINT:1;
    uint_io16_t		u2TRG:2;
    uint_io16_t		u1AUTE:1;
    uint_io16_t		u1SFDE:1;
    uint_io16_t		u1SFD:1;
    uint_io16_t		u1BST:1;
    uint_io16_t		u1STST:1;
}stc_cpg_mfsn_lin_sacsr_field_t;

typedef union un_cpg_mfsn_lin_sacsr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_sacsr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_sacsr_t;

/* STMR */
#define CPG_MFS00_LIN_STMR	(CPG_MFS00_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_STMR_TM	CPG_MFS00_LIN_STMR  /*@bfrg@*/

#define CPG_MFS01_LIN_STMR	(CPG_MFS01_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_STMR_TM	CPG_MFS01_LIN_STMR  /*@bfrg@*/

#define CPG_MFS02_LIN_STMR	(CPG_MFS02_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_STMR_TM	CPG_MFS02_LIN_STMR  /*@bfrg@*/

#define CPG_MFS03_LIN_STMR	(CPG_MFS03_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_STMR_TM	CPG_MFS03_LIN_STMR  /*@bfrg@*/

#define CPG_MFS04_LIN_STMR	(CPG_MFS04_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_STMR_TM	CPG_MFS04_LIN_STMR  /*@bfrg@*/

#define CPG_MFS08_LIN_STMR	(CPG_MFS08_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_STMR_TM	CPG_MFS08_LIN_STMR  /*@bfrg@*/

#define CPG_MFS09_LIN_STMR	(CPG_MFS09_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_STMR_TM	CPG_MFS09_LIN_STMR  /*@bfrg@*/

#define CPG_MFS10_LIN_STMR	(CPG_MFS10_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_STMR_TM	CPG_MFS10_LIN_STMR  /*@bfrg@*/

#define CPG_MFS11_LIN_STMR	(CPG_MFS11_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_STMR_TM	CPG_MFS11_LIN_STMR  /*@bfrg@*/

#define CPG_MFS12_LIN_STMR	(CPG_MFS12_LIN.unSTMR.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_STMR_TM	CPG_MFS12_LIN_STMR  /*@bfrg@*/

typedef union un_cpg_mfsn_lin_stmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_stmr_t;

/* STMCR */
#define CPG_MFS00_LIN_STMCR	(CPG_MFS00_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_STMCR_TC	CPG_MFS00_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS01_LIN_STMCR	(CPG_MFS01_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_STMCR_TC	CPG_MFS01_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS02_LIN_STMCR	(CPG_MFS02_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_STMCR_TC	CPG_MFS02_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS03_LIN_STMCR	(CPG_MFS03_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_STMCR_TC	CPG_MFS03_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS04_LIN_STMCR	(CPG_MFS04_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_STMCR_TC	CPG_MFS04_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS08_LIN_STMCR	(CPG_MFS08_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_STMCR_TC	CPG_MFS08_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS09_LIN_STMCR	(CPG_MFS09_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_STMCR_TC	CPG_MFS09_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS10_LIN_STMCR	(CPG_MFS10_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_STMCR_TC	CPG_MFS10_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS11_LIN_STMCR	(CPG_MFS11_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_STMCR_TC	CPG_MFS11_LIN_STMCR  /*@bfrg@*/

#define CPG_MFS12_LIN_STMCR	(CPG_MFS12_LIN.unSTMCR.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_STMCR_TC	CPG_MFS12_LIN_STMCR  /*@bfrg@*/

typedef union un_cpg_mfsn_lin_stmcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_stmcr_t;

/* SFUR */
#define CPG_MFS00_LIN_SFUR	(CPG_MFS00_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_SFUR_TU	(CPG_MFS00_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS01_LIN_SFUR	(CPG_MFS01_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_SFUR_TU	(CPG_MFS01_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS02_LIN_SFUR	(CPG_MFS02_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_SFUR_TU	(CPG_MFS02_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS03_LIN_SFUR	(CPG_MFS03_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_SFUR_TU	(CPG_MFS03_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS04_LIN_SFUR	(CPG_MFS04_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_SFUR_TU	(CPG_MFS04_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS08_LIN_SFUR	(CPG_MFS08_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_SFUR_TU	(CPG_MFS08_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS09_LIN_SFUR	(CPG_MFS09_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_SFUR_TU	(CPG_MFS09_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS10_LIN_SFUR	(CPG_MFS10_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_SFUR_TU	(CPG_MFS10_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS11_LIN_SFUR	(CPG_MFS11_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_SFUR_TU	(CPG_MFS11_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

#define CPG_MFS12_LIN_SFUR	(CPG_MFS12_LIN.unSFUR.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_SFUR_TU	(CPG_MFS12_LIN.unSFUR.stcField.u15TU)  /*@bf@*/

typedef struct stc_cpg_mfsn_lin_sfur_field{
    uint_io16_t		u15TU:15;
    uint_io16_t		:1;
}stc_cpg_mfsn_lin_sfur_field_t;

typedef union un_cpg_mfsn_lin_sfur{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_sfur_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_sfur_t;

/* SFLR */
#define CPG_MFS00_LIN_SFLR	(CPG_MFS00_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_SFLR_TL	(CPG_MFS00_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS01_LIN_SFLR	(CPG_MFS01_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_SFLR_TL	(CPG_MFS01_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS02_LIN_SFLR	(CPG_MFS02_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_SFLR_TL	(CPG_MFS02_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS03_LIN_SFLR	(CPG_MFS03_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_SFLR_TL	(CPG_MFS03_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS04_LIN_SFLR	(CPG_MFS04_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_SFLR_TL	(CPG_MFS04_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS08_LIN_SFLR	(CPG_MFS08_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_SFLR_TL	(CPG_MFS08_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS09_LIN_SFLR	(CPG_MFS09_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_SFLR_TL	(CPG_MFS09_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS10_LIN_SFLR	(CPG_MFS10_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_SFLR_TL	(CPG_MFS10_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS11_LIN_SFLR	(CPG_MFS11_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_SFLR_TL	(CPG_MFS11_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

#define CPG_MFS12_LIN_SFLR	(CPG_MFS12_LIN.unSFLR.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_SFLR_TL	(CPG_MFS12_LIN.unSFLR.stcField.u15TL)  /*@bf@*/

typedef struct stc_cpg_mfsn_lin_sflr_field{
    uint_io16_t		u15TL:15;
    uint_io16_t		:1;
}stc_cpg_mfsn_lin_sflr_field_t;

typedef union un_cpg_mfsn_lin_sflr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_sflr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_sflr_t;

/* LAMCR */
#define CPG_MFS00_LIN_LAMCR	(CPG_MFS00_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7800090)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7800091)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7800092)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7800093)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCR_LDL	(CPG_MFS00_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS01_LIN_LAMCR	(CPG_MFS01_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7802090)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7802091)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7802092)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7802093)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCR_LDL	(CPG_MFS01_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS02_LIN_LAMCR	(CPG_MFS02_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7804090)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7804091)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7804092)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7804093)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCR_LDL	(CPG_MFS02_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS03_LIN_LAMCR	(CPG_MFS03_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7806090)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7806091)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7806092)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7806093)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCR_LDL	(CPG_MFS03_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS04_LIN_LAMCR	(CPG_MFS04_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7808090)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7808091)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7808092)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7808093)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCR_LDL	(CPG_MFS04_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS08_LIN_LAMCR	(CPG_MFS08_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7C00090)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7C00091)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7C00092)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7C00093)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCR_LDL	(CPG_MFS08_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS09_LIN_LAMCR	(CPG_MFS09_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7C02090)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7C02091)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7C02092)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7C02093)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCR_LDL	(CPG_MFS09_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS10_LIN_LAMCR	(CPG_MFS10_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7C04090)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7C04091)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7C04092)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7C04093)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCR_LDL	(CPG_MFS10_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS11_LIN_LAMCR	(CPG_MFS11_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7C06090)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7C06091)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7C06092)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7C06093)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCR_LDL	(CPG_MFS11_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define CPG_MFS12_LIN_LAMCR	(CPG_MFS12_LIN.unLAMCR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB7C08090)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB7C08091)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB7C08092)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB7C08093)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCR_LDL	(CPG_MFS12_LIN.unLAMCR.stcField.u4LDL)  /*@bf@*/

typedef struct stc_cpg_mfsn_lin_lamcr_field{
    uint_io8_t		u1LAMEN:1;
    uint_io8_t		u1LIDEN:1;
    uint_io8_t		u1LCSTYP:1;
    uint_io8_t		u1LTDRCL:1;
    uint_io8_t		u4LDL:4;
}stc_cpg_mfsn_lin_lamcr_field_t;

typedef union un_cpg_mfsn_lin_lamcr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamcr_field_t		stcField;
}un_cpg_mfsn_lin_lamcr_t;

/* LAMSR */
#define CPG_MFS00_LIN_LAMSR	(CPG_MFS00_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7800098)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB780009A)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB780009B)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB780009C)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB780009D)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB780009E)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB780009F)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMSR	(CPG_MFS01_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7802098)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB780209A)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB780209B)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB780209C)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB780209D)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB780209E)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB780209F)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMSR	(CPG_MFS02_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7804098)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB780409A)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB780409B)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB780409C)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB780409D)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB780409E)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB780409F)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMSR	(CPG_MFS03_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7806098)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB780609A)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB780609B)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB780609C)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB780609D)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB780609E)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB780609F)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMSR	(CPG_MFS04_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7808098)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB780809A)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB780809B)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB780809C)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB780809D)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB780809E)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB780809F)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMSR	(CPG_MFS08_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7C00098)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB7C0009A)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB7C0009B)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB7C0009C)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB7C0009D)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB7C0009E)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB7C0009F)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMSR	(CPG_MFS09_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7C02098)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB7C0209A)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB7C0209B)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB7C0209C)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB7C0209D)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB7C0209E)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB7C0209F)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMSR	(CPG_MFS10_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7C04098)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB7C0409A)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB7C0409B)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB7C0409C)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB7C0409D)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB7C0409E)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB7C0409F)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMSR	(CPG_MFS11_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7C06098)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB7C0609A)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB7C0609B)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB7C0609C)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB7C0609D)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB7C0609E)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB7C0609F)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMSR	(CPG_MFS12_LIN.unLAMSR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB7C08098)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB7C0809A)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB7C0809B)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB7C0809C)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB7C0809D)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB7C0809E)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB7C0809F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamsr_field{
    uint_io8_t		u1LAHC:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSC:1;
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1SER:1;
    uint_io8_t		u1LER:1;
}stc_cpg_mfsn_lin_lamsr_field_t;

typedef union un_cpg_mfsn_lin_lamsr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamsr_field_t		stcField;
}un_cpg_mfsn_lin_lamsr_t;

/* LAMRID */
#define CPG_MFS00_LIN_LAMRID	(CPG_MFS00_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMTID	(CPG_MFS00_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS00_LIN_LAMRID_LID	(CPG_MFS00_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS00_LIN_LAMRID_P	(CPG_MFS00_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS00_LIN_LAMTID_LID	CPG_MFS00_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS01_LIN_LAMRID	(CPG_MFS01_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMTID	(CPG_MFS01_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS01_LIN_LAMRID_LID	(CPG_MFS01_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS01_LIN_LAMRID_P	(CPG_MFS01_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS01_LIN_LAMTID_LID	CPG_MFS01_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS02_LIN_LAMRID	(CPG_MFS02_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMTID	(CPG_MFS02_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS02_LIN_LAMRID_LID	(CPG_MFS02_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS02_LIN_LAMRID_P	(CPG_MFS02_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS02_LIN_LAMTID_LID	CPG_MFS02_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS03_LIN_LAMRID	(CPG_MFS03_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMTID	(CPG_MFS03_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS03_LIN_LAMRID_LID	(CPG_MFS03_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS03_LIN_LAMRID_P	(CPG_MFS03_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS03_LIN_LAMTID_LID	CPG_MFS03_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS04_LIN_LAMRID	(CPG_MFS04_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMTID	(CPG_MFS04_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS04_LIN_LAMRID_LID	(CPG_MFS04_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS04_LIN_LAMRID_P	(CPG_MFS04_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS04_LIN_LAMTID_LID	CPG_MFS04_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS08_LIN_LAMRID	(CPG_MFS08_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMTID	(CPG_MFS08_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS08_LIN_LAMRID_LID	(CPG_MFS08_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS08_LIN_LAMRID_P	(CPG_MFS08_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS08_LIN_LAMTID_LID	CPG_MFS08_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS09_LIN_LAMRID	(CPG_MFS09_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMTID	(CPG_MFS09_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS09_LIN_LAMRID_LID	(CPG_MFS09_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS09_LIN_LAMRID_P	(CPG_MFS09_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS09_LIN_LAMTID_LID	CPG_MFS09_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS10_LIN_LAMRID	(CPG_MFS10_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMTID	(CPG_MFS10_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS10_LIN_LAMRID_LID	(CPG_MFS10_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS10_LIN_LAMRID_P	(CPG_MFS10_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS10_LIN_LAMTID_LID	CPG_MFS10_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS11_LIN_LAMRID	(CPG_MFS11_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMTID	(CPG_MFS11_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS11_LIN_LAMRID_LID	(CPG_MFS11_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS11_LIN_LAMRID_P	(CPG_MFS11_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS11_LIN_LAMTID_LID	CPG_MFS11_LIN_LAMRID_LID  /*@bf2@*/

#define CPG_MFS12_LIN_LAMRID	(CPG_MFS12_LIN.unLAMRID.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMTID	(CPG_MFS12_LIN_LAMRID)  /*@rg2@*/
#define CPG_MFS12_LIN_LAMRID_LID	(CPG_MFS12_LIN.unLAMRID.stcField.u6LID)  /*@bf@*/
#define CPG_MFS12_LIN_LAMRID_P	(CPG_MFS12_LIN.unLAMRID.stcField.u2P)  /*@bf@*/
#define CPG_MFS12_LIN_LAMTID_LID	CPG_MFS12_LIN_LAMRID_LID  /*@bf2@*/

typedef struct stc_cpg_mfsn_lin_lamrid_field{
    uint_io8_t		u6LID:6;
    uint_io8_t		u2P:2;
}stc_cpg_mfsn_lin_lamrid_field_t;

typedef union un_cpg_mfsn_lin_lamrid{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamrid_field_t		stcField;
}un_cpg_mfsn_lin_lamrid_t;

/* LAMIER */
#define CPG_MFS00_LIN_LAMIER	(CPG_MFS00_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB78000C8)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB78000CA)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB78000CB)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB78000CC)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB78000CD)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB78000CE)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMIER	(CPG_MFS01_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB78020C8)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB78020CA)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB78020CB)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB78020CC)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB78020CD)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB78020CE)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMIER	(CPG_MFS02_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB78040C8)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB78040CA)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB78040CB)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB78040CC)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB78040CD)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB78040CE)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMIER	(CPG_MFS03_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB78060C8)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB78060CA)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB78060CB)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB78060CC)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB78060CD)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB78060CE)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMIER	(CPG_MFS04_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB78080C8)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB78080CA)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB78080CB)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB78080CC)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB78080CD)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB78080CE)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMIER	(CPG_MFS08_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB7C000C8)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB7C000CA)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB7C000CB)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB7C000CC)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB7C000CD)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB7C000CE)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMIER	(CPG_MFS09_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB7C020C8)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB7C020CA)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB7C020CB)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB7C020CC)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB7C020CD)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB7C020CE)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMIER	(CPG_MFS10_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB7C040C8)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB7C040CA)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB7C040CB)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB7C040CC)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB7C040CD)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB7C040CE)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMIER	(CPG_MFS11_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB7C060C8)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB7C060CA)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB7C060CB)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB7C060CC)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB7C060CD)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB7C060CE)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMIER	(CPG_MFS12_LIN.unLAMIER.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB7C080C8)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB7C080CA)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB7C080CB)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB7C080CC)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB7C080CD)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB7C080CE)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamier_field{
    uint_io8_t		u1LAHCIE:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCIE:1;
    uint_io8_t		u1LBSERIE:1;
    uint_io8_t		u1LSFERIE:1;
    uint_io8_t		u1LPTERIE:1;
    uint_io8_t		u1LCSERIE:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_lamier_field_t;

typedef union un_cpg_mfsn_lin_lamier{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamier_field_t		stcField;
}un_cpg_mfsn_lin_lamier_t;

/* LAMERT */
#define CPG_MFS00_LIN_LAMERT	(CPG_MFS00_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB78000D0)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB78000D1)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB78000D2)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB78000D3)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB78000D4)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMERT	(CPG_MFS01_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB78020D0)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB78020D1)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB78020D2)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB78020D3)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB78020D4)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMERT	(CPG_MFS02_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB78040D0)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB78040D1)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB78040D2)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB78040D3)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB78040D4)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMERT	(CPG_MFS03_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB78060D0)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB78060D1)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB78060D2)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB78060D3)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB78060D4)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMERT	(CPG_MFS04_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB78080D0)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB78080D1)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB78080D2)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB78080D3)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB78080D4)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMERT	(CPG_MFS08_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB7C000D0)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB7C000D1)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB7C000D2)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB7C000D3)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB7C000D4)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMERT	(CPG_MFS09_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB7C020D0)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB7C020D1)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB7C020D2)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB7C020D3)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB7C020D4)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMERT	(CPG_MFS10_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB7C040D0)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB7C040D1)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB7C040D2)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB7C040D3)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB7C040D4)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMERT	(CPG_MFS11_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB7C060D0)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB7C060D1)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB7C060D2)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB7C060D3)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB7C060D4)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMERT	(CPG_MFS12_LIN.unLAMERT.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB7C080D0)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB7C080D1)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB7C080D2)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB7C080D3)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB7C080D4)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamert_field{
    uint_io8_t		u1FRET:1;
    uint_io8_t		u1LBSERT:1;
    uint_io8_t		u1LSFERT:1;
    uint_io8_t		u1LPTERT:1;
    uint_io8_t		u1LCSERT:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_lin_lamert_field_t;

typedef union un_cpg_mfsn_lin_lamert{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamert_field_t		stcField;
}un_cpg_mfsn_lin_lamert_t;

/* LAMESR */
#define CPG_MFS00_LIN_LAMESR	(CPG_MFS00_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB78000DB)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB78000DC)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB78000DD)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB78000DE)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMESR	(CPG_MFS01_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB78020DB)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB78020DC)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB78020DD)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB78020DE)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMESR	(CPG_MFS02_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB78040DB)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB78040DC)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB78040DD)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB78040DE)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMESR	(CPG_MFS03_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB78060DB)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB78060DC)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB78060DD)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB78060DE)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMESR	(CPG_MFS04_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB78080DB)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB78080DC)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB78080DD)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB78080DE)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMESR	(CPG_MFS08_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB7C000DB)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB7C000DC)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB7C000DD)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB7C000DE)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMESR	(CPG_MFS09_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB7C020DB)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB7C020DC)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB7C020DD)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB7C020DE)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMESR	(CPG_MFS10_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB7C040DB)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB7C040DC)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB7C040DD)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB7C040DE)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMESR	(CPG_MFS11_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB7C060DB)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB7C060DC)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB7C060DD)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB7C060DE)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMESR	(CPG_MFS12_LIN.unLAMESR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB7C080DB)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB7C080DC)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB7C080DD)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB7C080DE)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamesr_field{
    uint_io8_t		:3;
    uint_io8_t		u1LBSER:1;
    uint_io8_t		u1LSFER:1;
    uint_io8_t		u1LPTER:1;
    uint_io8_t		u1LCSER:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_lamesr_field_t;

typedef union un_cpg_mfsn_lin_lamesr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamesr_field_t		stcField;
}un_cpg_mfsn_lin_lamesr_t;

/* BGR */
#define CPG_MFS00_LIN_BGR	(CPG_MFS00_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_BGR_BGR	(CPG_MFS00_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS00_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB78000EF)  /*@bfbba@*/

#define CPG_MFS01_LIN_BGR	(CPG_MFS01_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_BGR_BGR	(CPG_MFS01_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS01_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB78020EF)  /*@bfbba@*/

#define CPG_MFS02_LIN_BGR	(CPG_MFS02_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_BGR_BGR	(CPG_MFS02_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS02_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB78040EF)  /*@bfbba@*/

#define CPG_MFS03_LIN_BGR	(CPG_MFS03_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_BGR_BGR	(CPG_MFS03_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS03_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB78060EF)  /*@bfbba@*/

#define CPG_MFS04_LIN_BGR	(CPG_MFS04_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_BGR_BGR	(CPG_MFS04_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS04_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB78080EF)  /*@bfbba@*/

#define CPG_MFS08_LIN_BGR	(CPG_MFS08_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_BGR_BGR	(CPG_MFS08_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS08_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB7C000EF)  /*@bfbba@*/

#define CPG_MFS09_LIN_BGR	(CPG_MFS09_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_BGR_BGR	(CPG_MFS09_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS09_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB7C020EF)  /*@bfbba@*/

#define CPG_MFS10_LIN_BGR	(CPG_MFS10_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_BGR_BGR	(CPG_MFS10_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS10_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB7C040EF)  /*@bfbba@*/

#define CPG_MFS11_LIN_BGR	(CPG_MFS11_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_BGR_BGR	(CPG_MFS11_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS11_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB7C060EF)  /*@bfbba@*/

#define CPG_MFS12_LIN_BGR	(CPG_MFS12_LIN.unBGR.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_BGR_BGR	(CPG_MFS12_LIN.unBGR.stcField.u15BGR)  /*@bf@*/
#define CPG_MFS12_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB7C080EF)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_bgr_field{
    uint_io16_t		u15BGR:15;
    uint_io16_t		u1EXT:1;
}stc_cpg_mfsn_lin_bgr_field_t;

typedef union un_cpg_mfsn_lin_bgr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_bgr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_bgr_t;

/* FCR0 */
#define CPG_MFS00_LIN_FCR0	(CPG_MFS00_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7800100)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7800101)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7800102)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7800103)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7800104)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7800105)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7800106)  /*@bfbba@*/

#define CPG_MFS01_LIN_FCR0	(CPG_MFS01_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7802100)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7802101)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7802102)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7802103)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7802104)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7802105)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7802106)  /*@bfbba@*/

#define CPG_MFS02_LIN_FCR0	(CPG_MFS02_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7804100)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7804101)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7804102)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7804103)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7804104)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7804105)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7804106)  /*@bfbba@*/

#define CPG_MFS03_LIN_FCR0	(CPG_MFS03_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7806100)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7806101)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7806102)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7806103)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7806104)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7806105)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7806106)  /*@bfbba@*/

#define CPG_MFS04_LIN_FCR0	(CPG_MFS04_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7808100)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7808101)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7808102)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7808103)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7808104)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7808105)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7808106)  /*@bfbba@*/

#define CPG_MFS08_LIN_FCR0	(CPG_MFS08_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C00100)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C00101)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C00102)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C00103)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C00104)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C00105)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C00106)  /*@bfbba@*/

#define CPG_MFS09_LIN_FCR0	(CPG_MFS09_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C02100)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C02101)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C02102)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C02103)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C02104)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C02105)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C02106)  /*@bfbba@*/

#define CPG_MFS10_LIN_FCR0	(CPG_MFS10_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C04100)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C04101)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C04102)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C04103)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C04104)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C04105)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C04106)  /*@bfbba@*/

#define CPG_MFS11_LIN_FCR0	(CPG_MFS11_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C06100)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C06101)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C06102)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C06103)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C06104)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C06105)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C06106)  /*@bfbba@*/

#define CPG_MFS12_LIN_FCR0	(CPG_MFS12_LIN.unFCR0.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB7C08100)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB7C08101)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB7C08102)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB7C08103)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB7C08104)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB7C08105)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB7C08106)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_fcr0_field{
    uint_io8_t		u1FE1:1;
    uint_io8_t		u1FE2:1;
    uint_io8_t		u1FCL1:1;
    uint_io8_t		u1FCL2:1;
    uint_io8_t		u1FSET:1;
    uint_io8_t		u1FLD:1;
    uint_io8_t		u1FLST:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_fcr0_field_t;

typedef union un_cpg_mfsn_lin_fcr0{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_fcr0_field_t		stcField;
}un_cpg_mfsn_lin_fcr0_t;

/* FCR1 */
#define CPG_MFS00_LIN_FCR1	(CPG_MFS00_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7800108)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7800109)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780010A)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780010B)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780010C)  /*@bfbba@*/

#define CPG_MFS01_LIN_FCR1	(CPG_MFS01_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7802108)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7802109)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780210A)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780210B)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780210C)  /*@bfbba@*/

#define CPG_MFS02_LIN_FCR1	(CPG_MFS02_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7804108)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7804109)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780410A)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780410B)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780410C)  /*@bfbba@*/

#define CPG_MFS03_LIN_FCR1	(CPG_MFS03_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7806108)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7806109)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780610A)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780610B)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780610C)  /*@bfbba@*/

#define CPG_MFS04_LIN_FCR1	(CPG_MFS04_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7808108)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7808109)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB780810A)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB780810B)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB780810C)  /*@bfbba@*/

#define CPG_MFS08_LIN_FCR1	(CPG_MFS08_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C00108)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C00109)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0010A)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0010B)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0010C)  /*@bfbba@*/

#define CPG_MFS09_LIN_FCR1	(CPG_MFS09_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C02108)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C02109)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0210A)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0210B)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0210C)  /*@bfbba@*/

#define CPG_MFS10_LIN_FCR1	(CPG_MFS10_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C04108)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C04109)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0410A)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0410B)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0410C)  /*@bfbba@*/

#define CPG_MFS11_LIN_FCR1	(CPG_MFS11_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C06108)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C06109)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0610A)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0610B)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0610C)  /*@bfbba@*/

#define CPG_MFS12_LIN_FCR1	(CPG_MFS12_LIN.unFCR1.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB7C08108)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB7C08109)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB7C0810A)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB7C0810B)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB7C0810C)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_fcr1_field{
    uint_io8_t		u1FSEL:1;
    uint_io8_t		u1FTIE:1;
    uint_io8_t		u1FDRQ:1;
    uint_io8_t		u1FRIIE:1;
    uint_io8_t		u1FLSTE:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_lin_fcr1_field_t;

typedef union un_cpg_mfsn_lin_fcr1{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_fcr1_field_t		stcField;
}un_cpg_mfsn_lin_fcr1_t;

/* FBYTE */
#define CPG_MFS00_LIN_FBYTE	(CPG_MFS00_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_FBYTE_FBYTE1	(CPG_MFS00_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS00_LIN_FBYTE_FBYTE2	(CPG_MFS00_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS01_LIN_FBYTE	(CPG_MFS01_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_FBYTE_FBYTE1	(CPG_MFS01_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS01_LIN_FBYTE_FBYTE2	(CPG_MFS01_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS02_LIN_FBYTE	(CPG_MFS02_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_FBYTE_FBYTE1	(CPG_MFS02_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS02_LIN_FBYTE_FBYTE2	(CPG_MFS02_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS03_LIN_FBYTE	(CPG_MFS03_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_FBYTE_FBYTE1	(CPG_MFS03_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS03_LIN_FBYTE_FBYTE2	(CPG_MFS03_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS04_LIN_FBYTE	(CPG_MFS04_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_FBYTE_FBYTE1	(CPG_MFS04_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS04_LIN_FBYTE_FBYTE2	(CPG_MFS04_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS08_LIN_FBYTE	(CPG_MFS08_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_FBYTE_FBYTE1	(CPG_MFS08_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS08_LIN_FBYTE_FBYTE2	(CPG_MFS08_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS09_LIN_FBYTE	(CPG_MFS09_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_FBYTE_FBYTE1	(CPG_MFS09_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS09_LIN_FBYTE_FBYTE2	(CPG_MFS09_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS10_LIN_FBYTE	(CPG_MFS10_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_FBYTE_FBYTE1	(CPG_MFS10_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS10_LIN_FBYTE_FBYTE2	(CPG_MFS10_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS11_LIN_FBYTE	(CPG_MFS11_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_FBYTE_FBYTE1	(CPG_MFS11_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS11_LIN_FBYTE_FBYTE2	(CPG_MFS11_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS12_LIN_FBYTE	(CPG_MFS12_LIN.unFBYTE.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_FBYTE_FBYTE1	(CPG_MFS12_LIN.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS12_LIN_FBYTE_FBYTE2	(CPG_MFS12_LIN.unFBYTE.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_cpg_mfsn_lin_fbyte_field{
    uint_io16_t		u8FBYTE1:8;
    uint_io16_t		u8FBYTE2:8;
}stc_cpg_mfsn_lin_fbyte_field_t;

typedef union un_cpg_mfsn_lin_fbyte{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_fbyte_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_fbyte_t;

/* FTICR */
#define CPG_MFS00_LIN_FTICR	(CPG_MFS00_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_FTICR_FTICR1	(CPG_MFS00_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS00_LIN_FTICR_FTICR2	(CPG_MFS00_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS01_LIN_FTICR	(CPG_MFS01_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_FTICR_FTICR1	(CPG_MFS01_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS01_LIN_FTICR_FTICR2	(CPG_MFS01_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS02_LIN_FTICR	(CPG_MFS02_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_FTICR_FTICR1	(CPG_MFS02_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS02_LIN_FTICR_FTICR2	(CPG_MFS02_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS03_LIN_FTICR	(CPG_MFS03_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_FTICR_FTICR1	(CPG_MFS03_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS03_LIN_FTICR_FTICR2	(CPG_MFS03_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS04_LIN_FTICR	(CPG_MFS04_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_FTICR_FTICR1	(CPG_MFS04_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS04_LIN_FTICR_FTICR2	(CPG_MFS04_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS08_LIN_FTICR	(CPG_MFS08_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_FTICR_FTICR1	(CPG_MFS08_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS08_LIN_FTICR_FTICR2	(CPG_MFS08_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS09_LIN_FTICR	(CPG_MFS09_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_FTICR_FTICR1	(CPG_MFS09_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS09_LIN_FTICR_FTICR2	(CPG_MFS09_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS10_LIN_FTICR	(CPG_MFS10_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_FTICR_FTICR1	(CPG_MFS10_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS10_LIN_FTICR_FTICR2	(CPG_MFS10_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS11_LIN_FTICR	(CPG_MFS11_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_FTICR_FTICR1	(CPG_MFS11_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS11_LIN_FTICR_FTICR2	(CPG_MFS11_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define CPG_MFS12_LIN_FTICR	(CPG_MFS12_LIN.unFTICR.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_FTICR_FTICR1	(CPG_MFS12_LIN.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define CPG_MFS12_LIN_FTICR_FTICR2	(CPG_MFS12_LIN.unFTICR.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_cpg_mfsn_lin_fticr_field{
    uint_io16_t		u8FTICR1:8;
    uint_io16_t		u8FTICR2:8;
}stc_cpg_mfsn_lin_fticr_field_t;

typedef union un_cpg_mfsn_lin_fticr{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_fticr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_fticr_t;

/* ECR */
#define CPG_MFS00_LIN_ECR	(CPG_MFS00_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7800130)  /*@bfbba@*/
#define CPG_MFS00_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7800131)  /*@bfbba@*/
#define CPG_MFS00_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7800132)  /*@bfbba@*/
#define CPG_MFS00_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7800133)  /*@bfbba@*/
#define CPG_MFS00_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7800134)  /*@bfbba@*/

#define CPG_MFS01_LIN_ECR	(CPG_MFS01_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7802130)  /*@bfbba@*/
#define CPG_MFS01_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7802131)  /*@bfbba@*/
#define CPG_MFS01_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7802132)  /*@bfbba@*/
#define CPG_MFS01_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7802133)  /*@bfbba@*/
#define CPG_MFS01_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7802134)  /*@bfbba@*/

#define CPG_MFS02_LIN_ECR	(CPG_MFS02_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7804130)  /*@bfbba@*/
#define CPG_MFS02_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7804131)  /*@bfbba@*/
#define CPG_MFS02_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7804132)  /*@bfbba@*/
#define CPG_MFS02_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7804133)  /*@bfbba@*/
#define CPG_MFS02_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7804134)  /*@bfbba@*/

#define CPG_MFS03_LIN_ECR	(CPG_MFS03_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7806130)  /*@bfbba@*/
#define CPG_MFS03_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7806131)  /*@bfbba@*/
#define CPG_MFS03_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7806132)  /*@bfbba@*/
#define CPG_MFS03_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7806133)  /*@bfbba@*/
#define CPG_MFS03_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7806134)  /*@bfbba@*/

#define CPG_MFS04_LIN_ECR	(CPG_MFS04_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7808130)  /*@bfbba@*/
#define CPG_MFS04_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7808131)  /*@bfbba@*/
#define CPG_MFS04_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7808132)  /*@bfbba@*/
#define CPG_MFS04_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7808133)  /*@bfbba@*/
#define CPG_MFS04_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7808134)  /*@bfbba@*/

#define CPG_MFS08_LIN_ECR	(CPG_MFS08_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C00130)  /*@bfbba@*/
#define CPG_MFS08_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C00131)  /*@bfbba@*/
#define CPG_MFS08_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C00132)  /*@bfbba@*/
#define CPG_MFS08_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7C00133)  /*@bfbba@*/
#define CPG_MFS08_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C00134)  /*@bfbba@*/

#define CPG_MFS09_LIN_ECR	(CPG_MFS09_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C02130)  /*@bfbba@*/
#define CPG_MFS09_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C02131)  /*@bfbba@*/
#define CPG_MFS09_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C02132)  /*@bfbba@*/
#define CPG_MFS09_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7C02133)  /*@bfbba@*/
#define CPG_MFS09_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C02134)  /*@bfbba@*/

#define CPG_MFS10_LIN_ECR	(CPG_MFS10_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C04130)  /*@bfbba@*/
#define CPG_MFS10_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C04131)  /*@bfbba@*/
#define CPG_MFS10_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C04132)  /*@bfbba@*/
#define CPG_MFS10_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7C04133)  /*@bfbba@*/
#define CPG_MFS10_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C04134)  /*@bfbba@*/

#define CPG_MFS11_LIN_ECR	(CPG_MFS11_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C06130)  /*@bfbba@*/
#define CPG_MFS11_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C06131)  /*@bfbba@*/
#define CPG_MFS11_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C06132)  /*@bfbba@*/
#define CPG_MFS11_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7C06133)  /*@bfbba@*/
#define CPG_MFS11_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C06134)  /*@bfbba@*/

#define CPG_MFS12_LIN_ECR	(CPG_MFS12_LIN.unECR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB7C08130)  /*@bfbba@*/
#define CPG_MFS12_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB7C08131)  /*@bfbba@*/
#define CPG_MFS12_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB7C08132)  /*@bfbba@*/
#define CPG_MFS12_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB7C08133)  /*@bfbba@*/
#define CPG_MFS12_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB7C08134)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_ecr_field{
    uint_io8_t		u1TXBLKEN:1;
    uint_io8_t		u1RXBLKEN:1;
    uint_io8_t		u1TEIE:1;
    uint_io8_t		u1REIE:1;
    uint_io8_t		u1EISEL:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_lin_ecr_field_t;

typedef union un_cpg_mfsn_lin_ecr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_ecr_field_t		stcField;
}un_cpg_mfsn_lin_ecr_t;

/* ESR */
#define CPG_MFS00_LIN_ESR	(CPG_MFS00_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7800138)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7800139)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780013A)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780013B)  /*@bfbba@*/

#define CPG_MFS01_LIN_ESR	(CPG_MFS01_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7802138)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7802139)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780213A)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780213B)  /*@bfbba@*/

#define CPG_MFS02_LIN_ESR	(CPG_MFS02_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7804138)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7804139)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780413A)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780413B)  /*@bfbba@*/

#define CPG_MFS03_LIN_ESR	(CPG_MFS03_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7806138)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7806139)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780613A)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780613B)  /*@bfbba@*/

#define CPG_MFS04_LIN_ESR	(CPG_MFS04_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7808138)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7808139)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB780813A)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB780813B)  /*@bfbba@*/

#define CPG_MFS08_LIN_ESR	(CPG_MFS08_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C00138)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C00139)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0013A)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0013B)  /*@bfbba@*/

#define CPG_MFS09_LIN_ESR	(CPG_MFS09_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C02138)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C02139)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0213A)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0213B)  /*@bfbba@*/

#define CPG_MFS10_LIN_ESR	(CPG_MFS10_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C04138)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C04139)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0413A)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0413B)  /*@bfbba@*/

#define CPG_MFS11_LIN_ESR	(CPG_MFS11_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C06138)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C06139)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0613A)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0613B)  /*@bfbba@*/

#define CPG_MFS12_LIN_ESR	(CPG_MFS12_LIN.unESR.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB7C08138)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB7C08139)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB7C0813A)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB7C0813B)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_esr_field{
    uint_io8_t		u1TBERR:1;
    uint_io8_t		u1RBERR:1;
    uint_io8_t		u1TXOVR:1;
    uint_io8_t		u1RXUDR:1;
    uint_io8_t		:4;
}stc_cpg_mfsn_lin_esr_field_t;

typedef union un_cpg_mfsn_lin_esr{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_esr_field_t		stcField;
}un_cpg_mfsn_lin_esr_t;

/* TBSIZE */
#define CPG_MFS00_LIN_TBSIZE	(CPG_MFS00_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_TBSIZE_TBSIZE	CPG_MFS00_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS01_LIN_TBSIZE	(CPG_MFS01_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_TBSIZE_TBSIZE	CPG_MFS01_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS02_LIN_TBSIZE	(CPG_MFS02_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_TBSIZE_TBSIZE	CPG_MFS02_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS03_LIN_TBSIZE	(CPG_MFS03_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_TBSIZE_TBSIZE	CPG_MFS03_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS04_LIN_TBSIZE	(CPG_MFS04_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_TBSIZE_TBSIZE	CPG_MFS04_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS08_LIN_TBSIZE	(CPG_MFS08_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_TBSIZE_TBSIZE	CPG_MFS08_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS09_LIN_TBSIZE	(CPG_MFS09_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_TBSIZE_TBSIZE	CPG_MFS09_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS10_LIN_TBSIZE	(CPG_MFS10_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_TBSIZE_TBSIZE	CPG_MFS10_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS11_LIN_TBSIZE	(CPG_MFS11_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_TBSIZE_TBSIZE	CPG_MFS11_LIN_TBSIZE  /*@bfrg@*/

#define CPG_MFS12_LIN_TBSIZE	(CPG_MFS12_LIN.unTBSIZE.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_TBSIZE_TBSIZE	CPG_MFS12_LIN_TBSIZE  /*@bfrg@*/

typedef union un_cpg_mfsn_lin_tbsize{
    uint_io8_t		u8Register;
}un_cpg_mfsn_lin_tbsize_t;

/* SMRC */
#define CPG_MFS00_LIN_SMRC	(CPG_MFS00_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7800160)  /*@bfbba@*/
#define CPG_MFS00_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7800163)  /*@bfbba@*/
#define CPG_MFS00_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7800164)  /*@bfbba@*/

#define CPG_MFS01_LIN_SMRC	(CPG_MFS01_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7802160)  /*@bfbba@*/
#define CPG_MFS01_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7802163)  /*@bfbba@*/
#define CPG_MFS01_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7802164)  /*@bfbba@*/

#define CPG_MFS02_LIN_SMRC	(CPG_MFS02_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7804160)  /*@bfbba@*/
#define CPG_MFS02_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7804163)  /*@bfbba@*/
#define CPG_MFS02_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7804164)  /*@bfbba@*/

#define CPG_MFS03_LIN_SMRC	(CPG_MFS03_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7806160)  /*@bfbba@*/
#define CPG_MFS03_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7806163)  /*@bfbba@*/
#define CPG_MFS03_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7806164)  /*@bfbba@*/

#define CPG_MFS04_LIN_SMRC	(CPG_MFS04_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7808160)  /*@bfbba@*/
#define CPG_MFS04_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7808163)  /*@bfbba@*/
#define CPG_MFS04_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7808164)  /*@bfbba@*/

#define CPG_MFS08_LIN_SMRC	(CPG_MFS08_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7C00160)  /*@bfbba@*/
#define CPG_MFS08_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7C00163)  /*@bfbba@*/
#define CPG_MFS08_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C00164)  /*@bfbba@*/

#define CPG_MFS09_LIN_SMRC	(CPG_MFS09_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7C02160)  /*@bfbba@*/
#define CPG_MFS09_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7C02163)  /*@bfbba@*/
#define CPG_MFS09_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C02164)  /*@bfbba@*/

#define CPG_MFS10_LIN_SMRC	(CPG_MFS10_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7C04160)  /*@bfbba@*/
#define CPG_MFS10_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7C04163)  /*@bfbba@*/
#define CPG_MFS10_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C04164)  /*@bfbba@*/

#define CPG_MFS11_LIN_SMRC	(CPG_MFS11_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7C06160)  /*@bfbba@*/
#define CPG_MFS11_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7C06163)  /*@bfbba@*/
#define CPG_MFS11_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C06164)  /*@bfbba@*/

#define CPG_MFS12_LIN_SMRC	(CPG_MFS12_LIN.unSMRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB7C08160)  /*@bfbba@*/
#define CPG_MFS12_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB7C08163)  /*@bfbba@*/
#define CPG_MFS12_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB7C08164)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_smrc_field{
    uint_io8_t		u1SOEC:1;
    uint_io8_t		:2;
    uint_io8_t		u1SBLC:1;
    uint_io8_t		u1WUCRC:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_lin_smrc_field_t;

typedef union un_cpg_mfsn_lin_smrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_smrc_field_t		stcField;
}un_cpg_mfsn_lin_smrc_t;

/* SCRC */
#define CPG_MFS00_LIN_SCRC	(CPG_MFS00_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7800168)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7800169)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB780016A)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB780016B)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB780016C)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB780016E)  /*@bfbba@*/

#define CPG_MFS01_LIN_SCRC	(CPG_MFS01_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7802168)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7802169)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB780216A)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB780216B)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB780216C)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB780216E)  /*@bfbba@*/

#define CPG_MFS02_LIN_SCRC	(CPG_MFS02_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7804168)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7804169)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB780416A)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB780416B)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB780416C)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB780416E)  /*@bfbba@*/

#define CPG_MFS03_LIN_SCRC	(CPG_MFS03_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7806168)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7806169)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB780616A)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB780616B)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB780616C)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB780616E)  /*@bfbba@*/

#define CPG_MFS04_LIN_SCRC	(CPG_MFS04_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7808168)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7808169)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB780816A)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB780816B)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB780816C)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB780816E)  /*@bfbba@*/

#define CPG_MFS08_LIN_SCRC	(CPG_MFS08_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7C00168)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7C00169)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0016A)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB7C0016B)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB7C0016C)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB7C0016E)  /*@bfbba@*/

#define CPG_MFS09_LIN_SCRC	(CPG_MFS09_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7C02168)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7C02169)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0216A)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB7C0216B)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB7C0216C)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB7C0216E)  /*@bfbba@*/

#define CPG_MFS10_LIN_SCRC	(CPG_MFS10_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7C04168)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7C04169)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0416A)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB7C0416B)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB7C0416C)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB7C0416E)  /*@bfbba@*/

#define CPG_MFS11_LIN_SCRC	(CPG_MFS11_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7C06168)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7C06169)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0616A)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB7C0616B)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB7C0616C)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB7C0616E)  /*@bfbba@*/

#define CPG_MFS12_LIN_SCRC	(CPG_MFS12_LIN.unSCRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB7C08168)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB7C08169)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB7C0816A)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB7C0816B)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB7C0816C)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB7C0816E)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_scrc_field{
    uint_io8_t		u1TXEC:1;
    uint_io8_t		u1RXEC:1;
    uint_io8_t		u1TBIEC:1;
    uint_io8_t		u1TIEC:1;
    uint_io8_t		u1RIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1MSC:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_scrc_field_t;

typedef union un_cpg_mfsn_lin_scrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_scrc_field_t		stcField;
}un_cpg_mfsn_lin_scrc_t;

/* ESCRC */
#define CPG_MFS00_LIN_ESCRC	(CPG_MFS00_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7800174)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7800176)  /*@bfbba@*/

#define CPG_MFS01_LIN_ESCRC	(CPG_MFS01_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7802174)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7802176)  /*@bfbba@*/

#define CPG_MFS02_LIN_ESCRC	(CPG_MFS02_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7804174)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7804176)  /*@bfbba@*/

#define CPG_MFS03_LIN_ESCRC	(CPG_MFS03_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7806174)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7806176)  /*@bfbba@*/

#define CPG_MFS04_LIN_ESCRC	(CPG_MFS04_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7808174)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7808176)  /*@bfbba@*/

#define CPG_MFS08_LIN_ESCRC	(CPG_MFS08_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7C00174)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7C00176)  /*@bfbba@*/

#define CPG_MFS09_LIN_ESCRC	(CPG_MFS09_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7C02174)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7C02176)  /*@bfbba@*/

#define CPG_MFS10_LIN_ESCRC	(CPG_MFS10_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7C04174)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7C04176)  /*@bfbba@*/

#define CPG_MFS11_LIN_ESCRC	(CPG_MFS11_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7C06174)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7C06176)  /*@bfbba@*/

#define CPG_MFS12_LIN_ESCRC	(CPG_MFS12_LIN.unESCRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB7C08174)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB7C08176)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_escrc_field{
    uint_io8_t		:4;
    uint_io8_t		u1LBIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1ESBLC:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_escrc_field_t;

typedef union un_cpg_mfsn_lin_escrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_escrc_field_t		stcField;
}un_cpg_mfsn_lin_escrc_t;

/* SSRC */
#define CPG_MFS00_LIN_SSRC	(CPG_MFS00_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB780017D)  /*@bfbba@*/

#define CPG_MFS01_LIN_SSRC	(CPG_MFS01_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB780217D)  /*@bfbba@*/

#define CPG_MFS02_LIN_SSRC	(CPG_MFS02_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB780417D)  /*@bfbba@*/

#define CPG_MFS03_LIN_SSRC	(CPG_MFS03_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB780617D)  /*@bfbba@*/

#define CPG_MFS04_LIN_SSRC	(CPG_MFS04_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB780817D)  /*@bfbba@*/

#define CPG_MFS08_LIN_SSRC	(CPG_MFS08_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB7C0017D)  /*@bfbba@*/

#define CPG_MFS09_LIN_SSRC	(CPG_MFS09_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB7C0217D)  /*@bfbba@*/

#define CPG_MFS10_LIN_SSRC	(CPG_MFS10_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB7C0417D)  /*@bfbba@*/

#define CPG_MFS11_LIN_SSRC	(CPG_MFS11_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB7C0617D)  /*@bfbba@*/

#define CPG_MFS12_LIN_SSRC	(CPG_MFS12_LIN.unSSRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB7C0817D)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_ssrc_field{
    uint_io8_t		:5;
    uint_io8_t		u1LBDC:1;
    uint_io8_t		:2;
}stc_cpg_mfsn_lin_ssrc_field_t;

typedef union un_cpg_mfsn_lin_ssrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_ssrc_field_t		stcField;
}un_cpg_mfsn_lin_ssrc_t;

/* SACSRC */
#define CPG_MFS00_LIN_SACSRC	(CPG_MFS00_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7800180)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7800185)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7800187)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7800188)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB780018B)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB780018C)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB780018D)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780018F)  /*@bfbba@*/

#define CPG_MFS01_LIN_SACSRC	(CPG_MFS01_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7802180)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7802185)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7802187)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7802188)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB780218B)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB780218C)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB780218D)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780218F)  /*@bfbba@*/

#define CPG_MFS02_LIN_SACSRC	(CPG_MFS02_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7804180)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7804185)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7804187)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7804188)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB780418B)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB780418C)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB780418D)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780418F)  /*@bfbba@*/

#define CPG_MFS03_LIN_SACSRC	(CPG_MFS03_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7806180)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7806185)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7806187)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7806188)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB780618B)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB780618C)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB780618D)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780618F)  /*@bfbba@*/

#define CPG_MFS04_LIN_SACSRC	(CPG_MFS04_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7808180)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7808185)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7808187)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7808188)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB780818B)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB780818C)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB780818D)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB780818F)  /*@bfbba@*/

#define CPG_MFS08_LIN_SACSRC	(CPG_MFS08_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C00180)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C00185)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C00187)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C00188)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB7C0018B)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB7C0018C)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB7C0018D)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0018F)  /*@bfbba@*/

#define CPG_MFS09_LIN_SACSRC	(CPG_MFS09_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C02180)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C02185)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C02187)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C02188)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB7C0218B)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB7C0218C)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB7C0218D)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0218F)  /*@bfbba@*/

#define CPG_MFS10_LIN_SACSRC	(CPG_MFS10_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C04180)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C04185)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C04187)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C04188)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB7C0418B)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB7C0418C)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB7C0418D)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0418F)  /*@bfbba@*/

#define CPG_MFS11_LIN_SACSRC	(CPG_MFS11_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C06180)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C06185)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C06187)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C06188)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB7C0618B)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB7C0618C)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB7C0618D)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0618F)  /*@bfbba@*/

#define CPG_MFS12_LIN_SACSRC	(CPG_MFS12_LIN.unSACSRC.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB7C08180)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB7C08185)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB7C08187)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB7C08188)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB7C0818B)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB7C0818C)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB7C0818D)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB7C0818F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_sacsrc_field{
    uint_io16_t		u1TMREC:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGEC:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTEC:1;
    uint_io16_t		u1TINTC:1;
    uint_io16_t		:2;
    uint_io16_t		u1AUTEC:1;
    uint_io16_t		u1SFDEC:1;
    uint_io16_t		u1SFDC:1;
    uint_io16_t		:1;
    uint_io16_t		u1STSTC:1;
}stc_cpg_mfsn_lin_sacsrc_field_t;

typedef union un_cpg_mfsn_lin_sacsrc{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_sacsrc_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_sacsrc_t;

/* LAMCRC */
#define CPG_MFS00_LIN_LAMCRC	(CPG_MFS00_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB78001B0)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB78001B1)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB78001B2)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMCRC	(CPG_MFS01_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB78021B0)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB78021B1)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB78021B2)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMCRC	(CPG_MFS02_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB78041B0)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB78041B1)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB78041B2)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMCRC	(CPG_MFS03_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB78061B0)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB78061B1)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB78061B2)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMCRC	(CPG_MFS04_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB78081B0)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB78081B1)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB78081B2)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMCRC	(CPG_MFS08_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB7C001B0)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB7C001B1)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB7C001B2)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMCRC	(CPG_MFS09_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB7C021B0)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB7C021B1)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB7C021B2)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMCRC	(CPG_MFS10_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB7C041B0)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB7C041B1)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB7C041B2)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMCRC	(CPG_MFS11_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB7C061B0)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB7C061B1)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB7C061B2)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMCRC	(CPG_MFS12_LIN.unLAMCRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB7C081B0)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB7C081B1)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB7C081B2)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamcrc_field{
    uint_io8_t		u1LAMENC:1;
    uint_io8_t		u1LIDENC:1;
    uint_io8_t		u1LCSTYPC:1;
    uint_io8_t		:5;
}stc_cpg_mfsn_lin_lamcrc_field_t;

typedef union un_cpg_mfsn_lin_lamcrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamcrc_field_t		stcField;
}un_cpg_mfsn_lin_lamcrc_t;

/* LAMSRC */
#define CPG_MFS00_LIN_LAMSRC	(CPG_MFS00_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB78001B8)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB78001BA)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMSRC	(CPG_MFS01_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB78021B8)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB78021BA)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMSRC	(CPG_MFS02_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB78041B8)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB78041BA)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMSRC	(CPG_MFS03_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB78061B8)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB78061BA)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMSRC	(CPG_MFS04_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB78081B8)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB78081BA)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMSRC	(CPG_MFS08_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB7C001B8)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB7C001BA)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMSRC	(CPG_MFS09_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB7C021B8)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB7C021BA)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMSRC	(CPG_MFS10_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB7C041B8)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB7C041BA)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMSRC	(CPG_MFS11_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB7C061B8)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB7C061BA)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMSRC	(CPG_MFS12_LIN.unLAMSRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB7C081B8)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB7C081BA)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamsrc_field{
    uint_io8_t		u1LAHCC:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCC:1;
    uint_io8_t		:5;
}stc_cpg_mfsn_lin_lamsrc_field_t;

typedef union un_cpg_mfsn_lin_lamsrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamsrc_field_t		stcField;
}un_cpg_mfsn_lin_lamsrc_t;

/* LAMIERC */
#define CPG_MFS00_LIN_LAMIERC	(CPG_MFS00_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB78001C8)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB78001CA)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB78001CB)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB78001CC)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB78001CD)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB78001CE)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMIERC	(CPG_MFS01_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB78021C8)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB78021CA)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB78021CB)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB78021CC)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB78021CD)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB78021CE)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMIERC	(CPG_MFS02_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB78041C8)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB78041CA)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB78041CB)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB78041CC)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB78041CD)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB78041CE)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMIERC	(CPG_MFS03_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB78061C8)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB78061CA)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB78061CB)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB78061CC)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB78061CD)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB78061CE)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMIERC	(CPG_MFS04_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB78081C8)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB78081CA)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB78081CB)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB78081CC)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB78081CD)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB78081CE)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMIERC	(CPG_MFS08_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB7C001C8)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB7C001CA)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB7C001CB)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB7C001CC)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB7C001CD)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB7C001CE)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMIERC	(CPG_MFS09_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB7C021C8)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB7C021CA)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB7C021CB)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB7C021CC)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB7C021CD)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB7C021CE)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMIERC	(CPG_MFS10_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB7C041C8)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB7C041CA)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB7C041CB)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB7C041CC)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB7C041CD)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB7C041CE)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMIERC	(CPG_MFS11_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB7C061C8)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB7C061CA)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB7C061CB)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB7C061CC)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB7C061CD)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB7C061CE)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMIERC	(CPG_MFS12_LIN.unLAMIERC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB7C081C8)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB7C081CA)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB7C081CB)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB7C081CC)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB7C081CD)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB7C081CE)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamierc_field{
    uint_io8_t		u1LAHCIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCIEC:1;
    uint_io8_t		u1LBSERIEC:1;
    uint_io8_t		u1LSFERIEC:1;
    uint_io8_t		u1LPTERIEC:1;
    uint_io8_t		u1LCSERIEC:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_lamierc_field_t;

typedef union un_cpg_mfsn_lin_lamierc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamierc_field_t		stcField;
}un_cpg_mfsn_lin_lamierc_t;

/* LAMESRC */
#define CPG_MFS00_LIN_LAMESRC	(CPG_MFS00_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB78001DB)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB78001DC)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB78001DD)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB78001DE)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMESRC	(CPG_MFS01_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB78021DB)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB78021DC)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB78021DD)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB78021DE)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMESRC	(CPG_MFS02_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB78041DB)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB78041DC)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB78041DD)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB78041DE)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMESRC	(CPG_MFS03_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB78061DB)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB78061DC)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB78061DD)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB78061DE)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMESRC	(CPG_MFS04_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB78081DB)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB78081DC)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB78081DD)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB78081DE)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMESRC	(CPG_MFS08_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB7C001DB)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB7C001DC)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB7C001DD)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB7C001DE)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMESRC	(CPG_MFS09_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB7C021DB)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB7C021DC)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB7C021DD)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB7C021DE)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMESRC	(CPG_MFS10_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB7C041DB)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB7C041DC)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB7C041DD)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB7C041DE)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMESRC	(CPG_MFS11_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB7C061DB)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB7C061DC)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB7C061DD)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB7C061DE)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMESRC	(CPG_MFS12_LIN.unLAMESRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB7C081DB)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB7C081DC)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB7C081DD)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB7C081DE)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamesrc_field{
    uint_io8_t		:3;
    uint_io8_t		u1LBSERC:1;
    uint_io8_t		u1LSFERC:1;
    uint_io8_t		u1LPTERC:1;
    uint_io8_t		u1LCSERC:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_lamesrc_field_t;

typedef union un_cpg_mfsn_lin_lamesrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamesrc_field_t		stcField;
}un_cpg_mfsn_lin_lamesrc_t;

/* FCR0C */
#define CPG_MFS00_LIN_FCR0C	(CPG_MFS00_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78001E0)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78001E1)  /*@bfbba@*/

#define CPG_MFS01_LIN_FCR0C	(CPG_MFS01_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78021E0)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78021E1)  /*@bfbba@*/

#define CPG_MFS02_LIN_FCR0C	(CPG_MFS02_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78041E0)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78041E1)  /*@bfbba@*/

#define CPG_MFS03_LIN_FCR0C	(CPG_MFS03_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78061E0)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78061E1)  /*@bfbba@*/

#define CPG_MFS04_LIN_FCR0C	(CPG_MFS04_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB78081E0)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB78081E1)  /*@bfbba@*/

#define CPG_MFS08_LIN_FCR0C	(CPG_MFS08_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C001E0)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C001E1)  /*@bfbba@*/

#define CPG_MFS09_LIN_FCR0C	(CPG_MFS09_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C021E0)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C021E1)  /*@bfbba@*/

#define CPG_MFS10_LIN_FCR0C	(CPG_MFS10_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C041E0)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C041E1)  /*@bfbba@*/

#define CPG_MFS11_LIN_FCR0C	(CPG_MFS11_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C061E0)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C061E1)  /*@bfbba@*/

#define CPG_MFS12_LIN_FCR0C	(CPG_MFS12_LIN.unFCR0C.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB7C081E0)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB7C081E1)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_fcr0c_field{
    uint_io8_t		u1FE1C:1;
    uint_io8_t		u1FE2C:1;
    uint_io8_t		:6;
}stc_cpg_mfsn_lin_fcr0c_field_t;

typedef union un_cpg_mfsn_lin_fcr0c{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_fcr0c_field_t		stcField;
}un_cpg_mfsn_lin_fcr0c_t;

/* FCR1C */
#define CPG_MFS00_LIN_FCR1C	(CPG_MFS00_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78001E8)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78001E9)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78001EA)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78001EB)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78001EC)  /*@bfbba@*/

#define CPG_MFS01_LIN_FCR1C	(CPG_MFS01_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78021E8)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78021E9)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78021EA)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78021EB)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78021EC)  /*@bfbba@*/

#define CPG_MFS02_LIN_FCR1C	(CPG_MFS02_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78041E8)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78041E9)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78041EA)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78041EB)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78041EC)  /*@bfbba@*/

#define CPG_MFS03_LIN_FCR1C	(CPG_MFS03_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78061E8)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78061E9)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78061EA)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78061EB)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78061EC)  /*@bfbba@*/

#define CPG_MFS04_LIN_FCR1C	(CPG_MFS04_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB78081E8)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB78081E9)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB78081EA)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB78081EB)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB78081EC)  /*@bfbba@*/

#define CPG_MFS08_LIN_FCR1C	(CPG_MFS08_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C001E8)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C001E9)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C001EA)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C001EB)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C001EC)  /*@bfbba@*/

#define CPG_MFS09_LIN_FCR1C	(CPG_MFS09_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C021E8)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C021E9)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C021EA)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C021EB)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C021EC)  /*@bfbba@*/

#define CPG_MFS10_LIN_FCR1C	(CPG_MFS10_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C041E8)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C041E9)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C041EA)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C041EB)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C041EC)  /*@bfbba@*/

#define CPG_MFS11_LIN_FCR1C	(CPG_MFS11_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C061E8)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C061E9)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C061EA)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C061EB)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C061EC)  /*@bfbba@*/

#define CPG_MFS12_LIN_FCR1C	(CPG_MFS12_LIN.unFCR1C.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB7C081E8)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB7C081E9)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB7C081EA)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB7C081EB)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB7C081EC)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_fcr1c_field{
    uint_io8_t		u1FSELC:1;
    uint_io8_t		u1FTIEC:1;
    uint_io8_t		u1FDRQC:1;
    uint_io8_t		u1FRIIEC:1;
    uint_io8_t		u1FLSTEC:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_lin_fcr1c_field_t;

typedef union un_cpg_mfsn_lin_fcr1c{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_fcr1c_field_t		stcField;
}un_cpg_mfsn_lin_fcr1c_t;

/* ESRC */
#define CPG_MFS00_LIN_ESRC	(CPG_MFS00_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7800218)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7800219)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780021A)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780021B)  /*@bfbba@*/

#define CPG_MFS01_LIN_ESRC	(CPG_MFS01_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7802218)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7802219)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780221A)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780221B)  /*@bfbba@*/

#define CPG_MFS02_LIN_ESRC	(CPG_MFS02_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7804218)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7804219)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780421A)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780421B)  /*@bfbba@*/

#define CPG_MFS03_LIN_ESRC	(CPG_MFS03_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7806218)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7806219)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780621A)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780621B)  /*@bfbba@*/

#define CPG_MFS04_LIN_ESRC	(CPG_MFS04_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7808218)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7808219)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB780821A)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB780821B)  /*@bfbba@*/

#define CPG_MFS08_LIN_ESRC	(CPG_MFS08_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C00218)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C00219)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0021A)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0021B)  /*@bfbba@*/

#define CPG_MFS09_LIN_ESRC	(CPG_MFS09_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C02218)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C02219)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0221A)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0221B)  /*@bfbba@*/

#define CPG_MFS10_LIN_ESRC	(CPG_MFS10_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C04218)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C04219)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0421A)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0421B)  /*@bfbba@*/

#define CPG_MFS11_LIN_ESRC	(CPG_MFS11_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C06218)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C06219)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0621A)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0621B)  /*@bfbba@*/

#define CPG_MFS12_LIN_ESRC	(CPG_MFS12_LIN.unESRC.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB7C08218)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB7C08219)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB7C0821A)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB7C0821B)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_esrc_field{
    uint_io8_t		u1TBERRC:1;
    uint_io8_t		u1RBERRC:1;
    uint_io8_t		u1TXOVRC:1;
    uint_io8_t		u1RXUDRC:1;
    uint_io8_t		:4;
}stc_cpg_mfsn_lin_esrc_field_t;

typedef union un_cpg_mfsn_lin_esrc{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_esrc_field_t		stcField;
}un_cpg_mfsn_lin_esrc_t;

/* SMRS */
#define CPG_MFS00_LIN_SMRS	(CPG_MFS00_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7800220)  /*@bfbba@*/
#define CPG_MFS00_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7800223)  /*@bfbba@*/
#define CPG_MFS00_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7800224)  /*@bfbba@*/

#define CPG_MFS01_LIN_SMRS	(CPG_MFS01_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7802220)  /*@bfbba@*/
#define CPG_MFS01_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7802223)  /*@bfbba@*/
#define CPG_MFS01_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7802224)  /*@bfbba@*/

#define CPG_MFS02_LIN_SMRS	(CPG_MFS02_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7804220)  /*@bfbba@*/
#define CPG_MFS02_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7804223)  /*@bfbba@*/
#define CPG_MFS02_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7804224)  /*@bfbba@*/

#define CPG_MFS03_LIN_SMRS	(CPG_MFS03_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7806220)  /*@bfbba@*/
#define CPG_MFS03_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7806223)  /*@bfbba@*/
#define CPG_MFS03_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7806224)  /*@bfbba@*/

#define CPG_MFS04_LIN_SMRS	(CPG_MFS04_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7808220)  /*@bfbba@*/
#define CPG_MFS04_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7808223)  /*@bfbba@*/
#define CPG_MFS04_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7808224)  /*@bfbba@*/

#define CPG_MFS08_LIN_SMRS	(CPG_MFS08_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7C00220)  /*@bfbba@*/
#define CPG_MFS08_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7C00223)  /*@bfbba@*/
#define CPG_MFS08_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C00224)  /*@bfbba@*/

#define CPG_MFS09_LIN_SMRS	(CPG_MFS09_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7C02220)  /*@bfbba@*/
#define CPG_MFS09_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7C02223)  /*@bfbba@*/
#define CPG_MFS09_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C02224)  /*@bfbba@*/

#define CPG_MFS10_LIN_SMRS	(CPG_MFS10_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7C04220)  /*@bfbba@*/
#define CPG_MFS10_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7C04223)  /*@bfbba@*/
#define CPG_MFS10_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C04224)  /*@bfbba@*/

#define CPG_MFS11_LIN_SMRS	(CPG_MFS11_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7C06220)  /*@bfbba@*/
#define CPG_MFS11_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7C06223)  /*@bfbba@*/
#define CPG_MFS11_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C06224)  /*@bfbba@*/

#define CPG_MFS12_LIN_SMRS	(CPG_MFS12_LIN.unSMRS.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB7C08220)  /*@bfbba@*/
#define CPG_MFS12_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB7C08223)  /*@bfbba@*/
#define CPG_MFS12_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB7C08224)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_smrs_field{
    uint_io8_t		u1SOES:1;
    uint_io8_t		:2;
    uint_io8_t		u1SBLS:1;
    uint_io8_t		u1WUCRS:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_lin_smrs_field_t;

typedef union un_cpg_mfsn_lin_smrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_smrs_field_t		stcField;
}un_cpg_mfsn_lin_smrs_t;

/* SCRS */
#define CPG_MFS00_LIN_SCRS	(CPG_MFS00_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7800228)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7800229)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB780022A)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB780022B)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB780022C)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB780022D)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB780022E)  /*@bfbba@*/
#define CPG_MFS00_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB780022F)  /*@bfbba@*/

#define CPG_MFS01_LIN_SCRS	(CPG_MFS01_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7802228)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7802229)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB780222A)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB780222B)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB780222C)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB780222D)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB780222E)  /*@bfbba@*/
#define CPG_MFS01_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB780222F)  /*@bfbba@*/

#define CPG_MFS02_LIN_SCRS	(CPG_MFS02_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7804228)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7804229)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB780422A)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB780422B)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB780422C)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB780422D)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB780422E)  /*@bfbba@*/
#define CPG_MFS02_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB780422F)  /*@bfbba@*/

#define CPG_MFS03_LIN_SCRS	(CPG_MFS03_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7806228)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7806229)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB780622A)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB780622B)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB780622C)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB780622D)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB780622E)  /*@bfbba@*/
#define CPG_MFS03_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB780622F)  /*@bfbba@*/

#define CPG_MFS04_LIN_SCRS	(CPG_MFS04_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7808228)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7808229)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB780822A)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB780822B)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB780822C)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB780822D)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB780822E)  /*@bfbba@*/
#define CPG_MFS04_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB780822F)  /*@bfbba@*/

#define CPG_MFS08_LIN_SCRS	(CPG_MFS08_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7C00228)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7C00229)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB7C0022A)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB7C0022B)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB7C0022C)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB7C0022D)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB7C0022E)  /*@bfbba@*/
#define CPG_MFS08_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB7C0022F)  /*@bfbba@*/

#define CPG_MFS09_LIN_SCRS	(CPG_MFS09_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7C02228)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7C02229)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB7C0222A)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB7C0222B)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB7C0222C)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB7C0222D)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB7C0222E)  /*@bfbba@*/
#define CPG_MFS09_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB7C0222F)  /*@bfbba@*/

#define CPG_MFS10_LIN_SCRS	(CPG_MFS10_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7C04228)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7C04229)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB7C0422A)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB7C0422B)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB7C0422C)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB7C0422D)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB7C0422E)  /*@bfbba@*/
#define CPG_MFS10_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB7C0422F)  /*@bfbba@*/

#define CPG_MFS11_LIN_SCRS	(CPG_MFS11_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7C06228)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7C06229)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB7C0622A)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB7C0622B)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB7C0622C)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB7C0622D)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB7C0622E)  /*@bfbba@*/
#define CPG_MFS11_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB7C0622F)  /*@bfbba@*/

#define CPG_MFS12_LIN_SCRS	(CPG_MFS12_LIN.unSCRS.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB7C08228)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB7C08229)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB7C0822A)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB7C0822B)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB7C0822C)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB7C0822D)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB7C0822E)  /*@bfbba@*/
#define CPG_MFS12_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB7C0822F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_scrs_field{
    uint_io8_t		u1TXES:1;
    uint_io8_t		u1RXES:1;
    uint_io8_t		u1TBIES:1;
    uint_io8_t		u1TIES:1;
    uint_io8_t		u1RIES:1;
    uint_io8_t		u1LBRS:1;
    uint_io8_t		u1MSS:1;
    uint_io8_t		u1UPCLS:1;
}stc_cpg_mfsn_lin_scrs_field_t;

typedef union un_cpg_mfsn_lin_scrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_scrs_field_t		stcField;
}un_cpg_mfsn_lin_scrs_t;

/* ESCRS */
#define CPG_MFS00_LIN_ESCRS	(CPG_MFS00_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7800234)  /*@bfbba@*/
#define CPG_MFS00_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7800236)  /*@bfbba@*/

#define CPG_MFS01_LIN_ESCRS	(CPG_MFS01_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7802234)  /*@bfbba@*/
#define CPG_MFS01_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7802236)  /*@bfbba@*/

#define CPG_MFS02_LIN_ESCRS	(CPG_MFS02_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7804234)  /*@bfbba@*/
#define CPG_MFS02_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7804236)  /*@bfbba@*/

#define CPG_MFS03_LIN_ESCRS	(CPG_MFS03_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7806234)  /*@bfbba@*/
#define CPG_MFS03_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7806236)  /*@bfbba@*/

#define CPG_MFS04_LIN_ESCRS	(CPG_MFS04_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7808234)  /*@bfbba@*/
#define CPG_MFS04_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7808236)  /*@bfbba@*/

#define CPG_MFS08_LIN_ESCRS	(CPG_MFS08_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7C00234)  /*@bfbba@*/
#define CPG_MFS08_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7C00236)  /*@bfbba@*/

#define CPG_MFS09_LIN_ESCRS	(CPG_MFS09_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7C02234)  /*@bfbba@*/
#define CPG_MFS09_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7C02236)  /*@bfbba@*/

#define CPG_MFS10_LIN_ESCRS	(CPG_MFS10_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7C04234)  /*@bfbba@*/
#define CPG_MFS10_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7C04236)  /*@bfbba@*/

#define CPG_MFS11_LIN_ESCRS	(CPG_MFS11_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7C06234)  /*@bfbba@*/
#define CPG_MFS11_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7C06236)  /*@bfbba@*/

#define CPG_MFS12_LIN_ESCRS	(CPG_MFS12_LIN.unESCRS.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB7C08234)  /*@bfbba@*/
#define CPG_MFS12_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB7C08236)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_escrs_field{
    uint_io8_t		:4;
    uint_io8_t		u1LBIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1ESBLS:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_escrs_field_t;

typedef union un_cpg_mfsn_lin_escrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_escrs_field_t		stcField;
}un_cpg_mfsn_lin_escrs_t;

/* SSRS */
#define CPG_MFS00_LIN_SSRS	(CPG_MFS00_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB780023F)  /*@bfbba@*/

#define CPG_MFS01_LIN_SSRS	(CPG_MFS01_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB780223F)  /*@bfbba@*/

#define CPG_MFS02_LIN_SSRS	(CPG_MFS02_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB780423F)  /*@bfbba@*/

#define CPG_MFS03_LIN_SSRS	(CPG_MFS03_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB780623F)  /*@bfbba@*/

#define CPG_MFS04_LIN_SSRS	(CPG_MFS04_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB780823F)  /*@bfbba@*/

#define CPG_MFS08_LIN_SSRS	(CPG_MFS08_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0023F)  /*@bfbba@*/

#define CPG_MFS09_LIN_SSRS	(CPG_MFS09_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0223F)  /*@bfbba@*/

#define CPG_MFS10_LIN_SSRS	(CPG_MFS10_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0423F)  /*@bfbba@*/

#define CPG_MFS11_LIN_SSRS	(CPG_MFS11_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0623F)  /*@bfbba@*/

#define CPG_MFS12_LIN_SSRS	(CPG_MFS12_LIN.unSSRS.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB7C0823F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_ssrs_field{
    uint_io8_t		:7;
    uint_io8_t		u1RECS:1;
}stc_cpg_mfsn_lin_ssrs_field_t;

typedef union un_cpg_mfsn_lin_ssrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_ssrs_field_t		stcField;
}un_cpg_mfsn_lin_ssrs_t;

/* SACSRS */
#define CPG_MFS00_LIN_SACSRS	(CPG_MFS00_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS00_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7800240)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7800245)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7800247)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB780024B)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB780024C)  /*@bfbba@*/
#define CPG_MFS00_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780024F)  /*@bfbba@*/

#define CPG_MFS01_LIN_SACSRS	(CPG_MFS01_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS01_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7802240)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7802245)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7802247)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB780224B)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB780224C)  /*@bfbba@*/
#define CPG_MFS01_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780224F)  /*@bfbba@*/

#define CPG_MFS02_LIN_SACSRS	(CPG_MFS02_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS02_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7804240)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7804245)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7804247)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB780424B)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB780424C)  /*@bfbba@*/
#define CPG_MFS02_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780424F)  /*@bfbba@*/

#define CPG_MFS03_LIN_SACSRS	(CPG_MFS03_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS03_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7806240)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7806245)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7806247)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB780624B)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB780624C)  /*@bfbba@*/
#define CPG_MFS03_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780624F)  /*@bfbba@*/

#define CPG_MFS04_LIN_SACSRS	(CPG_MFS04_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS04_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7808240)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7808245)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7808247)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB780824B)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB780824C)  /*@bfbba@*/
#define CPG_MFS04_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB780824F)  /*@bfbba@*/

#define CPG_MFS08_LIN_SACSRS	(CPG_MFS08_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS08_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C00240)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C00245)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C00247)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB7C0024B)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB7C0024C)  /*@bfbba@*/
#define CPG_MFS08_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0024F)  /*@bfbba@*/

#define CPG_MFS09_LIN_SACSRS	(CPG_MFS09_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS09_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C02240)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C02245)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C02247)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB7C0224B)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB7C0224C)  /*@bfbba@*/
#define CPG_MFS09_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0224F)  /*@bfbba@*/

#define CPG_MFS10_LIN_SACSRS	(CPG_MFS10_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS10_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C04240)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C04245)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C04247)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB7C0424B)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB7C0424C)  /*@bfbba@*/
#define CPG_MFS10_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0424F)  /*@bfbba@*/

#define CPG_MFS11_LIN_SACSRS	(CPG_MFS11_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS11_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C06240)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C06245)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C06247)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB7C0624B)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB7C0624C)  /*@bfbba@*/
#define CPG_MFS11_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0624F)  /*@bfbba@*/

#define CPG_MFS12_LIN_SACSRS	(CPG_MFS12_LIN.unSACSRS.u16Register)  /*@rg@*/
#define CPG_MFS12_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB7C08240)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB7C08245)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB7C08247)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB7C0824B)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB7C0824C)  /*@bfbba@*/
#define CPG_MFS12_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB7C0824F)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_sacsrs_field{
    uint_io16_t		u1TMRES:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGES:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTES:1;
    uint_io16_t		:3;
    uint_io16_t		u1AUTES:1;
    uint_io16_t		u1SFDES:1;
    uint_io16_t		:2;
    uint_io16_t		u1STSTS:1;
}stc_cpg_mfsn_lin_sacsrs_field_t;

typedef union un_cpg_mfsn_lin_sacsrs{
    uint_io16_t		u16Register;
    stc_cpg_mfsn_lin_sacsrs_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_cpg_mfsn_lin_sacsrs_t;

/* LAMCRS */
#define CPG_MFS00_LIN_LAMCRS	(CPG_MFS00_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7800270)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7800271)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7800272)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7800273)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMCRS	(CPG_MFS01_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7802270)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7802271)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7802272)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7802273)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMCRS	(CPG_MFS02_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7804270)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7804271)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7804272)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7804273)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMCRS	(CPG_MFS03_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7806270)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7806271)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7806272)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7806273)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMCRS	(CPG_MFS04_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7808270)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7808271)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7808272)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7808273)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMCRS	(CPG_MFS08_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7C00270)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7C00271)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7C00272)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7C00273)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMCRS	(CPG_MFS09_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7C02270)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7C02271)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7C02272)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7C02273)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMCRS	(CPG_MFS10_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7C04270)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7C04271)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7C04272)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7C04273)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMCRS	(CPG_MFS11_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7C06270)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7C06271)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7C06272)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7C06273)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMCRS	(CPG_MFS12_LIN.unLAMCRS.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB7C08270)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB7C08271)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB7C08272)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB7C08273)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamcrs_field{
    uint_io8_t		u1LAMENS:1;
    uint_io8_t		u1LIDENS:1;
    uint_io8_t		u1LCSTYPS:1;
    uint_io8_t		u1LTDRCLS:1;
    uint_io8_t		:4;
}stc_cpg_mfsn_lin_lamcrs_field_t;

typedef union un_cpg_mfsn_lin_lamcrs{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamcrs_field_t		stcField;
}un_cpg_mfsn_lin_lamcrs_t;

/* LAMIERS */
#define CPG_MFS00_LIN_LAMIERS	(CPG_MFS00_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7800288)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB780028A)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB780028B)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB780028C)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB780028D)  /*@bfbba@*/
#define CPG_MFS00_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB780028E)  /*@bfbba@*/

#define CPG_MFS01_LIN_LAMIERS	(CPG_MFS01_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7802288)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB780228A)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB780228B)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB780228C)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB780228D)  /*@bfbba@*/
#define CPG_MFS01_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB780228E)  /*@bfbba@*/

#define CPG_MFS02_LIN_LAMIERS	(CPG_MFS02_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7804288)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB780428A)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB780428B)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB780428C)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB780428D)  /*@bfbba@*/
#define CPG_MFS02_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB780428E)  /*@bfbba@*/

#define CPG_MFS03_LIN_LAMIERS	(CPG_MFS03_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7806288)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB780628A)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB780628B)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB780628C)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB780628D)  /*@bfbba@*/
#define CPG_MFS03_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB780628E)  /*@bfbba@*/

#define CPG_MFS04_LIN_LAMIERS	(CPG_MFS04_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7808288)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB780828A)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB780828B)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB780828C)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB780828D)  /*@bfbba@*/
#define CPG_MFS04_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB780828E)  /*@bfbba@*/

#define CPG_MFS08_LIN_LAMIERS	(CPG_MFS08_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7C00288)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB7C0028A)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB7C0028B)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB7C0028C)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB7C0028D)  /*@bfbba@*/
#define CPG_MFS08_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB7C0028E)  /*@bfbba@*/

#define CPG_MFS09_LIN_LAMIERS	(CPG_MFS09_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7C02288)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB7C0228A)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB7C0228B)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB7C0228C)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB7C0228D)  /*@bfbba@*/
#define CPG_MFS09_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB7C0228E)  /*@bfbba@*/

#define CPG_MFS10_LIN_LAMIERS	(CPG_MFS10_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7C04288)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB7C0428A)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB7C0428B)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB7C0428C)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB7C0428D)  /*@bfbba@*/
#define CPG_MFS10_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB7C0428E)  /*@bfbba@*/

#define CPG_MFS11_LIN_LAMIERS	(CPG_MFS11_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7C06288)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB7C0628A)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB7C0628B)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB7C0628C)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB7C0628D)  /*@bfbba@*/
#define CPG_MFS11_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB7C0628E)  /*@bfbba@*/

#define CPG_MFS12_LIN_LAMIERS	(CPG_MFS12_LIN.unLAMIERS.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB7C08288)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB7C0828A)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB7C0828B)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB7C0828C)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB7C0828D)  /*@bfbba@*/
#define CPG_MFS12_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB7C0828E)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_lamiers_field{
    uint_io8_t		u1LAHCIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCIES:1;
    uint_io8_t		u1LBSERIES:1;
    uint_io8_t		u1LSFERIES:1;
    uint_io8_t		u1LPTERIES:1;
    uint_io8_t		u1LCSERIES:1;
    uint_io8_t		:1;
}stc_cpg_mfsn_lin_lamiers_field_t;

typedef union un_cpg_mfsn_lin_lamiers{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_lamiers_field_t		stcField;
}un_cpg_mfsn_lin_lamiers_t;

/* FCR0S */
#define CPG_MFS00_LIN_FCR0S	(CPG_MFS00_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78002A0)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78002A1)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78002A2)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78002A3)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78002A4)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78002A5)  /*@bfbba@*/

#define CPG_MFS01_LIN_FCR0S	(CPG_MFS01_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78022A0)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78022A1)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78022A2)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78022A3)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78022A4)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78022A5)  /*@bfbba@*/

#define CPG_MFS02_LIN_FCR0S	(CPG_MFS02_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78042A0)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78042A1)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78042A2)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78042A3)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78042A4)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78042A5)  /*@bfbba@*/

#define CPG_MFS03_LIN_FCR0S	(CPG_MFS03_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78062A0)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78062A1)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78062A2)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78062A3)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78062A4)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78062A5)  /*@bfbba@*/

#define CPG_MFS04_LIN_FCR0S	(CPG_MFS04_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB78082A0)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB78082A1)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB78082A2)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB78082A3)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB78082A4)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB78082A5)  /*@bfbba@*/

#define CPG_MFS08_LIN_FCR0S	(CPG_MFS08_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C002A0)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C002A1)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C002A2)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C002A3)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C002A4)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C002A5)  /*@bfbba@*/

#define CPG_MFS09_LIN_FCR0S	(CPG_MFS09_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C022A0)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C022A1)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C022A2)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C022A3)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C022A4)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C022A5)  /*@bfbba@*/

#define CPG_MFS10_LIN_FCR0S	(CPG_MFS10_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C042A0)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C042A1)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C042A2)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C042A3)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C042A4)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C042A5)  /*@bfbba@*/

#define CPG_MFS11_LIN_FCR0S	(CPG_MFS11_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C062A0)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C062A1)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C062A2)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C062A3)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C062A4)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C062A5)  /*@bfbba@*/

#define CPG_MFS12_LIN_FCR0S	(CPG_MFS12_LIN.unFCR0S.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB7C082A0)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB7C082A1)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB7C082A2)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB7C082A3)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB7C082A4)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB7C082A5)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_fcr0s_field{
    uint_io8_t		u1FE1S:1;
    uint_io8_t		u1FE2S:1;
    uint_io8_t		u1FCL1S:1;
    uint_io8_t		u1FCL2S:1;
    uint_io8_t		u1FSETS:1;
    uint_io8_t		u1FLDS:1;
    uint_io8_t		:2;
}stc_cpg_mfsn_lin_fcr0s_field_t;

typedef union un_cpg_mfsn_lin_fcr0s{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_fcr0s_field_t		stcField;
}un_cpg_mfsn_lin_fcr0s_t;

/* FCR1S */
#define CPG_MFS00_LIN_FCR1S	(CPG_MFS00_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS00_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78002A8)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78002A9)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78002AB)  /*@bfbba@*/
#define CPG_MFS00_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78002AC)  /*@bfbba@*/

#define CPG_MFS01_LIN_FCR1S	(CPG_MFS01_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS01_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78022A8)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78022A9)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78022AB)  /*@bfbba@*/
#define CPG_MFS01_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78022AC)  /*@bfbba@*/

#define CPG_MFS02_LIN_FCR1S	(CPG_MFS02_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS02_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78042A8)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78042A9)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78042AB)  /*@bfbba@*/
#define CPG_MFS02_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78042AC)  /*@bfbba@*/

#define CPG_MFS03_LIN_FCR1S	(CPG_MFS03_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS03_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78062A8)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78062A9)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78062AB)  /*@bfbba@*/
#define CPG_MFS03_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78062AC)  /*@bfbba@*/

#define CPG_MFS04_LIN_FCR1S	(CPG_MFS04_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS04_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB78082A8)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB78082A9)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB78082AB)  /*@bfbba@*/
#define CPG_MFS04_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB78082AC)  /*@bfbba@*/

#define CPG_MFS08_LIN_FCR1S	(CPG_MFS08_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS08_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C002A8)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C002A9)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C002AB)  /*@bfbba@*/
#define CPG_MFS08_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C002AC)  /*@bfbba@*/

#define CPG_MFS09_LIN_FCR1S	(CPG_MFS09_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS09_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C022A8)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C022A9)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C022AB)  /*@bfbba@*/
#define CPG_MFS09_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C022AC)  /*@bfbba@*/

#define CPG_MFS10_LIN_FCR1S	(CPG_MFS10_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS10_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C042A8)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C042A9)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C042AB)  /*@bfbba@*/
#define CPG_MFS10_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C042AC)  /*@bfbba@*/

#define CPG_MFS11_LIN_FCR1S	(CPG_MFS11_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS11_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C062A8)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C062A9)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C062AB)  /*@bfbba@*/
#define CPG_MFS11_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C062AC)  /*@bfbba@*/

#define CPG_MFS12_LIN_FCR1S	(CPG_MFS12_LIN.unFCR1S.u8Register)  /*@rg@*/
#define CPG_MFS12_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB7C082A8)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB7C082A9)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB7C082AB)  /*@bfbba@*/
#define CPG_MFS12_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB7C082AC)  /*@bfbba@*/

typedef struct stc_cpg_mfsn_lin_fcr1s_field{
    uint_io8_t		u1FSELS:1;
    uint_io8_t		u1FTIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1FRIIES:1;
    uint_io8_t		u1FLSTES:1;
    uint_io8_t		:3;
}stc_cpg_mfsn_lin_fcr1s_field_t;

typedef union un_cpg_mfsn_lin_fcr1s{
    uint_io8_t		u8Register;
    stc_cpg_mfsn_lin_fcr1s_field_t		stcField;
}un_cpg_mfsn_lin_fcr1s_t;


typedef struct stc_cpg_mfsn_lin{
    un_cpg_mfsn_lin_smr_t	unSMR;	/* 0x00000000 */
    un_cpg_mfsn_lin_scr_t	unSCR;	/* 0x00000001 */
    un_cpg_mfsn_lin_escr_t	unESCR;	/* 0x00000002 */
    un_cpg_mfsn_lin_ssr_t	unSSR;	/* 0x00000003 */
    un_cpg_mfsn_lin_rdr_t	unRDR;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[3];	/* 0x00000005 */
    un_cpg_mfsn_lin_sacsr_t	unSACSR;	/* 0x00000008 */
    un_cpg_mfsn_lin_stmr_t	unSTMR;	/* 0x0000000A */
    un_cpg_mfsn_lin_stmcr_t	unSTMCR;	/* 0x0000000C */
    un_cpg_mfsn_lin_sfur_t	unSFUR;	/* 0x0000000E */
    un_cpg_mfsn_lin_sflr_t	unSFLR;	/* 0x00000010 */
    un_cpg_mfsn_lin_lamcr_t	unLAMCR;	/* 0x00000012 */
    un_cpg_mfsn_lin_lamsr_t	unLAMSR;	/* 0x00000013 */
    uint_io8_t	au8Reserved1[4];	/* 0x00000014 */
    un_cpg_mfsn_lin_lamrid_t	unLAMRID;	/* 0x00000018 */
    un_cpg_mfsn_lin_lamier_t	unLAMIER;	/* 0x00000019 */
    un_cpg_mfsn_lin_lamert_t	unLAMERT;	/* 0x0000001A */
    un_cpg_mfsn_lin_lamesr_t	unLAMESR;	/* 0x0000001B */
    un_cpg_mfsn_lin_bgr_t	unBGR;	/* 0x0000001C */
    uint_io8_t	au8Reserved2[2];	/* 0x0000001E */
    un_cpg_mfsn_lin_fcr0_t	unFCR0;	/* 0x00000020 */
    un_cpg_mfsn_lin_fcr1_t	unFCR1;	/* 0x00000021 */
    un_cpg_mfsn_lin_fbyte_t	unFBYTE;	/* 0x00000022 */
    un_cpg_mfsn_lin_fticr_t	unFTICR;	/* 0x00000024 */
    un_cpg_mfsn_lin_ecr_t	unECR;	/* 0x00000026 */
    un_cpg_mfsn_lin_esr_t	unESR;	/* 0x00000027 */
    un_cpg_mfsn_lin_tbsize_t	unTBSIZE;	/* 0x00000028 */
    uint_io8_t	au8Reserved3[3];	/* 0x00000029 */
    un_cpg_mfsn_lin_smrc_t	unSMRC;	/* 0x0000002C */
    un_cpg_mfsn_lin_scrc_t	unSCRC;	/* 0x0000002D */
    un_cpg_mfsn_lin_escrc_t	unESCRC;	/* 0x0000002E */
    un_cpg_mfsn_lin_ssrc_t	unSSRC;	/* 0x0000002F */
    un_cpg_mfsn_lin_sacsrc_t	unSACSRC;	/* 0x00000030 */
    uint_io8_t	au8Reserved4[4];	/* 0x00000032 */
    un_cpg_mfsn_lin_lamcrc_t	unLAMCRC;	/* 0x00000036 */
    un_cpg_mfsn_lin_lamsrc_t	unLAMSRC;	/* 0x00000037 */
    uint_io8_t	au8Reserved5[1];	/* 0x00000038 */
    un_cpg_mfsn_lin_lamierc_t	unLAMIERC;	/* 0x00000039 */
    uint_io8_t	au8Reserved6[1];	/* 0x0000003A */
    un_cpg_mfsn_lin_lamesrc_t	unLAMESRC;	/* 0x0000003B */
    un_cpg_mfsn_lin_fcr0c_t	unFCR0C;	/* 0x0000003C */
    un_cpg_mfsn_lin_fcr1c_t	unFCR1C;	/* 0x0000003D */
    uint_io8_t	au8Reserved7[5];	/* 0x0000003E */
    un_cpg_mfsn_lin_esrc_t	unESRC;	/* 0x00000043 */
    un_cpg_mfsn_lin_smrs_t	unSMRS;	/* 0x00000044 */
    un_cpg_mfsn_lin_scrs_t	unSCRS;	/* 0x00000045 */
    un_cpg_mfsn_lin_escrs_t	unESCRS;	/* 0x00000046 */
    un_cpg_mfsn_lin_ssrs_t	unSSRS;	/* 0x00000047 */
    un_cpg_mfsn_lin_sacsrs_t	unSACSRS;	/* 0x00000048 */
    uint_io8_t	au8Reserved8[4];	/* 0x0000004A */
    un_cpg_mfsn_lin_lamcrs_t	unLAMCRS;	/* 0x0000004E */
    uint_io8_t	au8Reserved9[2];	/* 0x0000004F */
    un_cpg_mfsn_lin_lamiers_t	unLAMIERS;	/* 0x00000051 */
    uint_io8_t	au8Reserved10[2];	/* 0x00000052 */
    un_cpg_mfsn_lin_fcr0s_t	unFCR0S;	/* 0x00000054 */
    un_cpg_mfsn_lin_fcr1s_t	unFCR1S;	/* 0x00000055 */
    uint_io8_t	au8Reserved11[938];	/* 0x00000056 */
}stc_cpg_mfsn_lin_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_cpg_mfsn_lin_t	stcCPG_MFS_LIN[10];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* MCG_MFS[16-17]_LIN base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define MCG_MFS16_LIN_1	stcMCG_MFS_LIN_1[0]
#define MCG_MFS17_LIN_1	stcMCG_MFS_LIN_1[1]
#else /* __IO_DEFINE */
#define MCG_MFS16_LIN_1	(*((volatile stc_mcg_mfsn_lin_1_t*)0xB06A8000))
#define MCG_MFS17_LIN_1	(*((volatile stc_mcg_mfsn_lin_1_t*)0xB06A8400))
#endif /* __IO_DEFINE */

/* SMR */
#define MCG_MFS16_LIN_SMR	(MCG_MFS16_LIN_1.unSMR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB0D40000)  /*@bfbba@*/
#define MCG_MFS16_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB0D40003)  /*@bfbba@*/
#define MCG_MFS16_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB0D40004)  /*@bfbba@*/
#define MCG_MFS16_LIN_SMR_MD	(MCG_MFS16_LIN_1.unSMR.stcField.u3MD)  /*@bf@*/

#define MCG_MFS17_LIN_SMR	(MCG_MFS17_LIN_1.unSMR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SMR_SOE	(*(volatile uint_io8_t*)0xB0D42000)  /*@bfbba@*/
#define MCG_MFS17_LIN_SMR_SBL	(*(volatile uint_io8_t*)0xB0D42003)  /*@bfbba@*/
#define MCG_MFS17_LIN_SMR_WUCR	(*(volatile uint_io8_t*)0xB0D42004)  /*@bfbba@*/
#define MCG_MFS17_LIN_SMR_MD	(MCG_MFS17_LIN_1.unSMR.stcField.u3MD)  /*@bf@*/

typedef struct stc_mcg_mfsn_lin_1_smr_field{
    uint_io8_t		u1SOE:1;
    uint_io8_t		:2;
    uint_io8_t		u1SBL:1;
    uint_io8_t		u1WUCR:1;
    uint_io8_t		u3MD:3;
}stc_mcg_mfsn_lin_1_smr_field_t;

typedef union un_mcg_mfsn_lin_1_smr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_smr_field_t		stcField;
}un_mcg_mfsn_lin_1_smr_t;

/* SCR */
#define MCG_MFS16_LIN_SCR	(MCG_MFS16_LIN_1.unSCR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB0D40008)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB0D40009)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB0D4000A)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB0D4000B)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB0D4000C)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB0D4000D)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB0D4000E)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB0D4000F)  /*@bfbba@*/

#define MCG_MFS17_LIN_SCR	(MCG_MFS17_LIN_1.unSCR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SCR_TXE	(*(volatile uint_io8_t*)0xB0D42008)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCR_RXE	(*(volatile uint_io8_t*)0xB0D42009)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCR_TBIE	(*(volatile uint_io8_t*)0xB0D4200A)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCR_TIE	(*(volatile uint_io8_t*)0xB0D4200B)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCR_RIE	(*(volatile uint_io8_t*)0xB0D4200C)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCR_LBR	(*(volatile uint_io8_t*)0xB0D4200D)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCR_MS	(*(volatile uint_io8_t*)0xB0D4200E)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCR_UPCL	(*(volatile uint_io8_t*)0xB0D4200F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_scr_field{
    uint_io8_t		u1TXE:1;
    uint_io8_t		u1RXE:1;
    uint_io8_t		u1TBIE:1;
    uint_io8_t		u1TIE:1;
    uint_io8_t		u1RIE:1;
    uint_io8_t		u1LBR:1;
    uint_io8_t		u1MS:1;
    uint_io8_t		u1UPCL:1;
}stc_mcg_mfsn_lin_1_scr_field_t;

typedef union un_mcg_mfsn_lin_1_scr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_scr_field_t		stcField;
}un_mcg_mfsn_lin_1_scr_t;

/* ESCR */
#define MCG_MFS16_LIN_ESCR	(MCG_MFS16_LIN_1.unESCR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_ESCR_DEL	(MCG_MFS16_LIN_1.unESCR.stcField.u2DEL)  /*@bf@*/
#define MCG_MFS16_LIN_ESCR_LBL1_0	(MCG_MFS16_LIN_1.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define MCG_MFS16_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB0D40014)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB0D40015)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB0D40016)  /*@bfbba@*/

#define MCG_MFS17_LIN_ESCR	(MCG_MFS17_LIN_1.unESCR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_ESCR_DEL	(MCG_MFS17_LIN_1.unESCR.stcField.u2DEL)  /*@bf@*/
#define MCG_MFS17_LIN_ESCR_LBL1_0	(MCG_MFS17_LIN_1.unESCR.stcField.u2LBL1_0)  /*@bf@*/
#define MCG_MFS17_LIN_ESCR_LBIE	(*(volatile uint_io8_t*)0xB0D42014)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESCR_LBL2	(*(volatile uint_io8_t*)0xB0D42015)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESCR_ESBL	(*(volatile uint_io8_t*)0xB0D42016)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_escr_field{
    uint_io8_t		u2DEL:2;
    uint_io8_t		u2LBL1_0:2;
    uint_io8_t		u1LBIE:1;
    uint_io8_t		u1LBL2:1;
    uint_io8_t		u1ESBL:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_escr_field_t;

typedef union un_mcg_mfsn_lin_1_escr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_escr_field_t		stcField;
}un_mcg_mfsn_lin_1_escr_t;

/* SSR */
#define MCG_MFS16_LIN_SSR	(MCG_MFS16_LIN_1.unSSR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB0D40018)  /*@bfbba@*/
#define MCG_MFS16_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB0D40019)  /*@bfbba@*/
#define MCG_MFS16_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB0D4001A)  /*@bfbba@*/
#define MCG_MFS16_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB0D4001B)  /*@bfbba@*/
#define MCG_MFS16_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB0D4001C)  /*@bfbba@*/
#define MCG_MFS16_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB0D4001D)  /*@bfbba@*/
#define MCG_MFS16_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB0D4001F)  /*@bfbba@*/

#define MCG_MFS17_LIN_SSR	(MCG_MFS17_LIN_1.unSSR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SSR_TBI	(*(volatile uint_io8_t*)0xB0D42018)  /*@bfbba@*/
#define MCG_MFS17_LIN_SSR_TDRE	(*(volatile uint_io8_t*)0xB0D42019)  /*@bfbba@*/
#define MCG_MFS17_LIN_SSR_RDRF	(*(volatile uint_io8_t*)0xB0D4201A)  /*@bfbba@*/
#define MCG_MFS17_LIN_SSR_ORE	(*(volatile uint_io8_t*)0xB0D4201B)  /*@bfbba@*/
#define MCG_MFS17_LIN_SSR_FRE	(*(volatile uint_io8_t*)0xB0D4201C)  /*@bfbba@*/
#define MCG_MFS17_LIN_SSR_LBD	(*(volatile uint_io8_t*)0xB0D4201D)  /*@bfbba@*/
#define MCG_MFS17_LIN_SSR_REC	(*(volatile uint_io8_t*)0xB0D4201F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_ssr_field{
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1ORE:1;
    uint_io8_t		u1FRE:1;
    uint_io8_t		u1LBD:1;
    uint_io8_t		:1;
    uint_io8_t		u1REC:1;
}stc_mcg_mfsn_lin_1_ssr_field_t;

typedef union un_mcg_mfsn_lin_1_ssr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_ssr_field_t		stcField;
}un_mcg_mfsn_lin_1_ssr_t;

/* RDR */
#define MCG_MFS16_LIN_RDR	(MCG_MFS16_LIN_1.unRDR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_TDR	(MCG_MFS16_LIN_RDR)  /*@rg2@*/
#define MCG_MFS16_LIN_RDR_D	MCG_MFS16_LIN_RDR  /*@bfrg@*/
#define MCG_MFS16_LIN_TDR_D	MCG_MFS16_LIN_RDR_D  /*@bf2@*/

#define MCG_MFS17_LIN_RDR	(MCG_MFS17_LIN_1.unRDR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_TDR	(MCG_MFS17_LIN_RDR)  /*@rg2@*/
#define MCG_MFS17_LIN_RDR_D	MCG_MFS17_LIN_RDR  /*@bfrg@*/
#define MCG_MFS17_LIN_TDR_D	MCG_MFS17_LIN_RDR_D  /*@bf2@*/

typedef union un_mcg_mfsn_lin_1_rdr{
    uint_io8_t		u8Register;
}un_mcg_mfsn_lin_1_rdr_t;

/* SACSR */
#define MCG_MFS16_LIN_SACSR	(MCG_MFS16_LIN_1.unSACSR.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB0D40040)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_TDIV	(MCG_MFS16_LIN_1.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define MCG_MFS16_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB0D40045)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB0D40047)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB0D40048)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_TRG	(MCG_MFS16_LIN_1.unSACSR.stcField.u2TRG)  /*@bf@*/
#define MCG_MFS16_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB0D4004B)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB0D4004C)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB0D4004D)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB0D4004E)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB0D4004F)  /*@bfbba@*/

#define MCG_MFS17_LIN_SACSR	(MCG_MFS17_LIN_1.unSACSR.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_SACSR_TMRE	(*(volatile uint_io8_t*)0xB0D42040)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_TDIV	(MCG_MFS17_LIN_1.unSACSR.stcField.u4TDIV)  /*@bf@*/
#define MCG_MFS17_LIN_SACSR_TRGE	(*(volatile uint_io8_t*)0xB0D42045)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_TINTE	(*(volatile uint_io8_t*)0xB0D42047)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_TINT	(*(volatile uint_io8_t*)0xB0D42048)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_TRG	(MCG_MFS17_LIN_1.unSACSR.stcField.u2TRG)  /*@bf@*/
#define MCG_MFS17_LIN_SACSR_AUTE	(*(volatile uint_io8_t*)0xB0D4204B)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_SFDE	(*(volatile uint_io8_t*)0xB0D4204C)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_SFD	(*(volatile uint_io8_t*)0xB0D4204D)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_BST	(*(volatile uint_io8_t*)0xB0D4204E)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSR_STST	(*(volatile uint_io8_t*)0xB0D4204F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_sacsr_field{
    uint_io16_t		u1TMRE:1;
    uint_io16_t		u4TDIV:4;
    uint_io16_t		u1TRGE:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTE:1;
    uint_io16_t		u1TINT:1;
    uint_io16_t		u2TRG:2;
    uint_io16_t		u1AUTE:1;
    uint_io16_t		u1SFDE:1;
    uint_io16_t		u1SFD:1;
    uint_io16_t		u1BST:1;
    uint_io16_t		u1STST:1;
}stc_mcg_mfsn_lin_1_sacsr_field_t;

typedef union un_mcg_mfsn_lin_1_sacsr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_sacsr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_sacsr_t;

/* STMR */
#define MCG_MFS16_LIN_STMR	(MCG_MFS16_LIN_1.unSTMR.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_STMR_TM	MCG_MFS16_LIN_STMR  /*@bfrg@*/

#define MCG_MFS17_LIN_STMR	(MCG_MFS17_LIN_1.unSTMR.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_STMR_TM	MCG_MFS17_LIN_STMR  /*@bfrg@*/

typedef union un_mcg_mfsn_lin_1_stmr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_stmr_t;

/* STMCR */
#define MCG_MFS16_LIN_STMCR	(MCG_MFS16_LIN_1.unSTMCR.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_STMCR_TC	MCG_MFS16_LIN_STMCR  /*@bfrg@*/

#define MCG_MFS17_LIN_STMCR	(MCG_MFS17_LIN_1.unSTMCR.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_STMCR_TC	MCG_MFS17_LIN_STMCR  /*@bfrg@*/

typedef union un_mcg_mfsn_lin_1_stmcr{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_stmcr_t;

/* SFUR */
#define MCG_MFS16_LIN_SFUR	(MCG_MFS16_LIN_1.unSFUR.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_SFUR_TU	(MCG_MFS16_LIN_1.unSFUR.stcField.u15TU)  /*@bf@*/

#define MCG_MFS17_LIN_SFUR	(MCG_MFS17_LIN_1.unSFUR.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_SFUR_TU	(MCG_MFS17_LIN_1.unSFUR.stcField.u15TU)  /*@bf@*/

typedef struct stc_mcg_mfsn_lin_1_sfur_field{
    uint_io16_t		u15TU:15;
    uint_io16_t		:1;
}stc_mcg_mfsn_lin_1_sfur_field_t;

typedef union un_mcg_mfsn_lin_1_sfur{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_sfur_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_sfur_t;

/* SFLR */
#define MCG_MFS16_LIN_SFLR	(MCG_MFS16_LIN_1.unSFLR.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_SFLR_TL	(MCG_MFS16_LIN_1.unSFLR.stcField.u15TL)  /*@bf@*/

#define MCG_MFS17_LIN_SFLR	(MCG_MFS17_LIN_1.unSFLR.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_SFLR_TL	(MCG_MFS17_LIN_1.unSFLR.stcField.u15TL)  /*@bf@*/

typedef struct stc_mcg_mfsn_lin_1_sflr_field{
    uint_io16_t		u15TL:15;
    uint_io16_t		:1;
}stc_mcg_mfsn_lin_1_sflr_field_t;

typedef union un_mcg_mfsn_lin_1_sflr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_sflr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_sflr_t;

/* LAMCR */
#define MCG_MFS16_LIN_LAMCR	(MCG_MFS16_LIN_1.unLAMCR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB0D40090)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB0D40091)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB0D40092)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB0D40093)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCR_LDL	(MCG_MFS16_LIN_1.unLAMCR.stcField.u4LDL)  /*@bf@*/

#define MCG_MFS17_LIN_LAMCR	(MCG_MFS17_LIN_1.unLAMCR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMCR_LAMEN	(*(volatile uint_io8_t*)0xB0D42090)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCR_LIDEN	(*(volatile uint_io8_t*)0xB0D42091)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCR_LCSTYP	(*(volatile uint_io8_t*)0xB0D42092)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCR_LTDRCL	(*(volatile uint_io8_t*)0xB0D42093)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCR_LDL	(MCG_MFS17_LIN_1.unLAMCR.stcField.u4LDL)  /*@bf@*/

typedef struct stc_mcg_mfsn_lin_1_lamcr_field{
    uint_io8_t		u1LAMEN:1;
    uint_io8_t		u1LIDEN:1;
    uint_io8_t		u1LCSTYP:1;
    uint_io8_t		u1LTDRCL:1;
    uint_io8_t		u4LDL:4;
}stc_mcg_mfsn_lin_1_lamcr_field_t;

typedef union un_mcg_mfsn_lin_1_lamcr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamcr_field_t		stcField;
}un_mcg_mfsn_lin_1_lamcr_t;

/* LAMSR */
#define MCG_MFS16_LIN_LAMSR	(MCG_MFS16_LIN_1.unLAMSR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB0D40098)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB0D4009A)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB0D4009B)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB0D4009C)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB0D4009D)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB0D4009E)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB0D4009F)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMSR	(MCG_MFS17_LIN_1.unLAMSR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMSR_LAHC	(*(volatile uint_io8_t*)0xB0D42098)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMSR_LCSC	(*(volatile uint_io8_t*)0xB0D4209A)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMSR_TBI	(*(volatile uint_io8_t*)0xB0D4209B)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMSR_TDRE	(*(volatile uint_io8_t*)0xB0D4209C)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMSR_RDRF	(*(volatile uint_io8_t*)0xB0D4209D)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMSR_SER	(*(volatile uint_io8_t*)0xB0D4209E)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMSR_LER	(*(volatile uint_io8_t*)0xB0D4209F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamsr_field{
    uint_io8_t		u1LAHC:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSC:1;
    uint_io8_t		u1TBI:1;
    uint_io8_t		u1TDRE:1;
    uint_io8_t		u1RDRF:1;
    uint_io8_t		u1SER:1;
    uint_io8_t		u1LER:1;
}stc_mcg_mfsn_lin_1_lamsr_field_t;

typedef union un_mcg_mfsn_lin_1_lamsr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamsr_field_t		stcField;
}un_mcg_mfsn_lin_1_lamsr_t;

/* LAMRID */
#define MCG_MFS16_LIN_LAMRID	(MCG_MFS16_LIN_1.unLAMRID.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMTID	(MCG_MFS16_LIN_LAMRID)  /*@rg2@*/
#define MCG_MFS16_LIN_LAMRID_LID	(MCG_MFS16_LIN_1.unLAMRID.stcField.u6LID)  /*@bf@*/
#define MCG_MFS16_LIN_LAMRID_P	(MCG_MFS16_LIN_1.unLAMRID.stcField.u2P)  /*@bf@*/
#define MCG_MFS16_LIN_LAMTID_LID	MCG_MFS16_LIN_LAMRID_LID  /*@bf2@*/

#define MCG_MFS17_LIN_LAMRID	(MCG_MFS17_LIN_1.unLAMRID.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMTID	(MCG_MFS17_LIN_LAMRID)  /*@rg2@*/
#define MCG_MFS17_LIN_LAMRID_LID	(MCG_MFS17_LIN_1.unLAMRID.stcField.u6LID)  /*@bf@*/
#define MCG_MFS17_LIN_LAMRID_P	(MCG_MFS17_LIN_1.unLAMRID.stcField.u2P)  /*@bf@*/
#define MCG_MFS17_LIN_LAMTID_LID	MCG_MFS17_LIN_LAMRID_LID  /*@bf2@*/

typedef struct stc_mcg_mfsn_lin_1_lamrid_field{
    uint_io8_t		u6LID:6;
    uint_io8_t		u2P:2;
}stc_mcg_mfsn_lin_1_lamrid_field_t;

typedef union un_mcg_mfsn_lin_1_lamrid{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamrid_field_t		stcField;
}un_mcg_mfsn_lin_1_lamrid_t;

/* LAMIER */
#define MCG_MFS16_LIN_LAMIER	(MCG_MFS16_LIN_1.unLAMIER.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB0D400C8)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB0D400CA)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB0D400CB)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB0D400CC)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB0D400CD)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB0D400CE)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMIER	(MCG_MFS17_LIN_1.unLAMIER.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMIER_LAHCIE	(*(volatile uint_io8_t*)0xB0D420C8)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIER_LCSCIE	(*(volatile uint_io8_t*)0xB0D420CA)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIER_LBSERIE	(*(volatile uint_io8_t*)0xB0D420CB)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIER_LSFERIE	(*(volatile uint_io8_t*)0xB0D420CC)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIER_LPTERIE	(*(volatile uint_io8_t*)0xB0D420CD)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIER_LCSERIE	(*(volatile uint_io8_t*)0xB0D420CE)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamier_field{
    uint_io8_t		u1LAHCIE:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCIE:1;
    uint_io8_t		u1LBSERIE:1;
    uint_io8_t		u1LSFERIE:1;
    uint_io8_t		u1LPTERIE:1;
    uint_io8_t		u1LCSERIE:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_lamier_field_t;

typedef union un_mcg_mfsn_lin_1_lamier{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamier_field_t		stcField;
}un_mcg_mfsn_lin_1_lamier_t;

/* LAMERT */
#define MCG_MFS16_LIN_LAMERT	(MCG_MFS16_LIN_1.unLAMERT.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB0D400D0)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB0D400D1)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB0D400D2)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB0D400D3)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB0D400D4)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMERT	(MCG_MFS17_LIN_1.unLAMERT.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMERT_FRET	(*(volatile uint_io8_t*)0xB0D420D0)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMERT_LBSERT	(*(volatile uint_io8_t*)0xB0D420D1)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMERT_LSFERT	(*(volatile uint_io8_t*)0xB0D420D2)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMERT_LPTERT	(*(volatile uint_io8_t*)0xB0D420D3)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMERT_LCSERT	(*(volatile uint_io8_t*)0xB0D420D4)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamert_field{
    uint_io8_t		u1FRET:1;
    uint_io8_t		u1LBSERT:1;
    uint_io8_t		u1LSFERT:1;
    uint_io8_t		u1LPTERT:1;
    uint_io8_t		u1LCSERT:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_lin_1_lamert_field_t;

typedef union un_mcg_mfsn_lin_1_lamert{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamert_field_t		stcField;
}un_mcg_mfsn_lin_1_lamert_t;

/* LAMESR */
#define MCG_MFS16_LIN_LAMESR	(MCG_MFS16_LIN_1.unLAMESR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB0D400DB)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB0D400DC)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB0D400DD)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB0D400DE)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMESR	(MCG_MFS17_LIN_1.unLAMESR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMESR_LBSER	(*(volatile uint_io8_t*)0xB0D420DB)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMESR_LSFER	(*(volatile uint_io8_t*)0xB0D420DC)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMESR_LPTER	(*(volatile uint_io8_t*)0xB0D420DD)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMESR_LCSER	(*(volatile uint_io8_t*)0xB0D420DE)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamesr_field{
    uint_io8_t		:3;
    uint_io8_t		u1LBSER:1;
    uint_io8_t		u1LSFER:1;
    uint_io8_t		u1LPTER:1;
    uint_io8_t		u1LCSER:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_lamesr_field_t;

typedef union un_mcg_mfsn_lin_1_lamesr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamesr_field_t		stcField;
}un_mcg_mfsn_lin_1_lamesr_t;

/* BGR */
#define MCG_MFS16_LIN_BGR	(MCG_MFS16_LIN_1.unBGR.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_BGR_BGR	(MCG_MFS16_LIN_1.unBGR.stcField.u15BGR)  /*@bf@*/
#define MCG_MFS16_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB0D400EF)  /*@bfbba@*/

#define MCG_MFS17_LIN_BGR	(MCG_MFS17_LIN_1.unBGR.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_BGR_BGR	(MCG_MFS17_LIN_1.unBGR.stcField.u15BGR)  /*@bf@*/
#define MCG_MFS17_LIN_BGR_EXT	(*(volatile uint_io8_t*)0xB0D420EF)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_bgr_field{
    uint_io16_t		u15BGR:15;
    uint_io16_t		u1EXT:1;
}stc_mcg_mfsn_lin_1_bgr_field_t;

typedef union un_mcg_mfsn_lin_1_bgr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_bgr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_bgr_t;

/* FCR0 */
#define MCG_MFS16_LIN_FCR0	(MCG_MFS16_LIN_1.unFCR0.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB0D40100)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB0D40101)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB0D40102)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB0D40103)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB0D40104)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB0D40105)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB0D40106)  /*@bfbba@*/

#define MCG_MFS17_LIN_FCR0	(MCG_MFS17_LIN_1.unFCR0.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_FCR0_FE1	(*(volatile uint_io8_t*)0xB0D42100)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0_FE2	(*(volatile uint_io8_t*)0xB0D42101)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0_FCL1	(*(volatile uint_io8_t*)0xB0D42102)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0_FCL2	(*(volatile uint_io8_t*)0xB0D42103)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0_FSET	(*(volatile uint_io8_t*)0xB0D42104)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0_FLD	(*(volatile uint_io8_t*)0xB0D42105)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0_FLST	(*(volatile uint_io8_t*)0xB0D42106)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_fcr0_field{
    uint_io8_t		u1FE1:1;
    uint_io8_t		u1FE2:1;
    uint_io8_t		u1FCL1:1;
    uint_io8_t		u1FCL2:1;
    uint_io8_t		u1FSET:1;
    uint_io8_t		u1FLD:1;
    uint_io8_t		u1FLST:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_fcr0_field_t;

typedef union un_mcg_mfsn_lin_1_fcr0{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_fcr0_field_t		stcField;
}un_mcg_mfsn_lin_1_fcr0_t;

/* FCR1 */
#define MCG_MFS16_LIN_FCR1	(MCG_MFS16_LIN_1.unFCR1.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB0D40108)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB0D40109)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB0D4010A)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB0D4010B)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB0D4010C)  /*@bfbba@*/

#define MCG_MFS17_LIN_FCR1	(MCG_MFS17_LIN_1.unFCR1.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_FCR1_FSEL	(*(volatile uint_io8_t*)0xB0D42108)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1_FTIE	(*(volatile uint_io8_t*)0xB0D42109)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1_FDRQ	(*(volatile uint_io8_t*)0xB0D4210A)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1_FRIIE	(*(volatile uint_io8_t*)0xB0D4210B)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1_FLSTE	(*(volatile uint_io8_t*)0xB0D4210C)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_fcr1_field{
    uint_io8_t		u1FSEL:1;
    uint_io8_t		u1FTIE:1;
    uint_io8_t		u1FDRQ:1;
    uint_io8_t		u1FRIIE:1;
    uint_io8_t		u1FLSTE:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_lin_1_fcr1_field_t;

typedef union un_mcg_mfsn_lin_1_fcr1{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_fcr1_field_t		stcField;
}un_mcg_mfsn_lin_1_fcr1_t;

/* FBYTE */
#define MCG_MFS16_LIN_FBYTE	(MCG_MFS16_LIN_1.unFBYTE.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_FBYTE_FBYTE1	(MCG_MFS16_LIN_1.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS16_LIN_FBYTE_FBYTE2	(MCG_MFS16_LIN_1.unFBYTE.au8Byte[1])  /*@bfbyte@*/

#define MCG_MFS17_LIN_FBYTE	(MCG_MFS17_LIN_1.unFBYTE.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_FBYTE_FBYTE1	(MCG_MFS17_LIN_1.unFBYTE.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS17_LIN_FBYTE_FBYTE2	(MCG_MFS17_LIN_1.unFBYTE.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_mcg_mfsn_lin_1_fbyte_field{
    uint_io16_t		u8FBYTE1:8;
    uint_io16_t		u8FBYTE2:8;
}stc_mcg_mfsn_lin_1_fbyte_field_t;

typedef union un_mcg_mfsn_lin_1_fbyte{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_fbyte_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_fbyte_t;

/* FTICR */
#define MCG_MFS16_LIN_FTICR	(MCG_MFS16_LIN_1.unFTICR.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_FTICR_FTICR1	(MCG_MFS16_LIN_1.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS16_LIN_FTICR_FTICR2	(MCG_MFS16_LIN_1.unFTICR.au8Byte[1])  /*@bfbyte@*/

#define MCG_MFS17_LIN_FTICR	(MCG_MFS17_LIN_1.unFTICR.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_FTICR_FTICR1	(MCG_MFS17_LIN_1.unFTICR.au8Byte[0])  /*@bfbyte@*/
#define MCG_MFS17_LIN_FTICR_FTICR2	(MCG_MFS17_LIN_1.unFTICR.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_mcg_mfsn_lin_1_fticr_field{
    uint_io16_t		u8FTICR1:8;
    uint_io16_t		u8FTICR2:8;
}stc_mcg_mfsn_lin_1_fticr_field_t;

typedef union un_mcg_mfsn_lin_1_fticr{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_fticr_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_fticr_t;

/* ECR */
#define MCG_MFS16_LIN_ECR	(MCG_MFS16_LIN_1.unECR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB0D40130)  /*@bfbba@*/
#define MCG_MFS16_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB0D40131)  /*@bfbba@*/
#define MCG_MFS16_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB0D40132)  /*@bfbba@*/
#define MCG_MFS16_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB0D40133)  /*@bfbba@*/
#define MCG_MFS16_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB0D40134)  /*@bfbba@*/

#define MCG_MFS17_LIN_ECR	(MCG_MFS17_LIN_1.unECR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_ECR_TXBLKEN	(*(volatile uint_io8_t*)0xB0D42130)  /*@bfbba@*/
#define MCG_MFS17_LIN_ECR_RXBLKEN	(*(volatile uint_io8_t*)0xB0D42131)  /*@bfbba@*/
#define MCG_MFS17_LIN_ECR_TEIE	(*(volatile uint_io8_t*)0xB0D42132)  /*@bfbba@*/
#define MCG_MFS17_LIN_ECR_REIE	(*(volatile uint_io8_t*)0xB0D42133)  /*@bfbba@*/
#define MCG_MFS17_LIN_ECR_EISEL	(*(volatile uint_io8_t*)0xB0D42134)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_ecr_field{
    uint_io8_t		u1TXBLKEN:1;
    uint_io8_t		u1RXBLKEN:1;
    uint_io8_t		u1TEIE:1;
    uint_io8_t		u1REIE:1;
    uint_io8_t		u1EISEL:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_lin_1_ecr_field_t;

typedef union un_mcg_mfsn_lin_1_ecr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_ecr_field_t		stcField;
}un_mcg_mfsn_lin_1_ecr_t;

/* ESR */
#define MCG_MFS16_LIN_ESR	(MCG_MFS16_LIN_1.unESR.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB0D40138)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB0D40139)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB0D4013A)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB0D4013B)  /*@bfbba@*/

#define MCG_MFS17_LIN_ESR	(MCG_MFS17_LIN_1.unESR.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_ESR_TBERR	(*(volatile uint_io8_t*)0xB0D42138)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESR_RBERR	(*(volatile uint_io8_t*)0xB0D42139)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESR_TXOVR	(*(volatile uint_io8_t*)0xB0D4213A)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESR_RXUDR	(*(volatile uint_io8_t*)0xB0D4213B)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_esr_field{
    uint_io8_t		u1TBERR:1;
    uint_io8_t		u1RBERR:1;
    uint_io8_t		u1TXOVR:1;
    uint_io8_t		u1RXUDR:1;
    uint_io8_t		:4;
}stc_mcg_mfsn_lin_1_esr_field_t;

typedef union un_mcg_mfsn_lin_1_esr{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_esr_field_t		stcField;
}un_mcg_mfsn_lin_1_esr_t;

/* TBSIZE */
#define MCG_MFS16_LIN_TBSIZE	(MCG_MFS16_LIN_1.unTBSIZE.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_TBSIZE_TBSIZE	MCG_MFS16_LIN_TBSIZE  /*@bfrg@*/

#define MCG_MFS17_LIN_TBSIZE	(MCG_MFS17_LIN_1.unTBSIZE.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_TBSIZE_TBSIZE	MCG_MFS17_LIN_TBSIZE  /*@bfrg@*/

typedef union un_mcg_mfsn_lin_1_tbsize{
    uint_io8_t		u8Register;
}un_mcg_mfsn_lin_1_tbsize_t;

/* SMRC */
#define MCG_MFS16_LIN_SMRC	(MCG_MFS16_LIN_1.unSMRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB0D40160)  /*@bfbba@*/
#define MCG_MFS16_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB0D40163)  /*@bfbba@*/
#define MCG_MFS16_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB0D40164)  /*@bfbba@*/

#define MCG_MFS17_LIN_SMRC	(MCG_MFS17_LIN_1.unSMRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SMRC_SOEC	(*(volatile uint_io8_t*)0xB0D42160)  /*@bfbba@*/
#define MCG_MFS17_LIN_SMRC_SBLC	(*(volatile uint_io8_t*)0xB0D42163)  /*@bfbba@*/
#define MCG_MFS17_LIN_SMRC_WUCRC	(*(volatile uint_io8_t*)0xB0D42164)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_smrc_field{
    uint_io8_t		u1SOEC:1;
    uint_io8_t		:2;
    uint_io8_t		u1SBLC:1;
    uint_io8_t		u1WUCRC:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_lin_1_smrc_field_t;

typedef union un_mcg_mfsn_lin_1_smrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_smrc_field_t		stcField;
}un_mcg_mfsn_lin_1_smrc_t;

/* SCRC */
#define MCG_MFS16_LIN_SCRC	(MCG_MFS16_LIN_1.unSCRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB0D40168)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB0D40169)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB0D4016A)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB0D4016B)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB0D4016C)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB0D4016E)  /*@bfbba@*/

#define MCG_MFS17_LIN_SCRC	(MCG_MFS17_LIN_1.unSCRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SCRC_TXEC	(*(volatile uint_io8_t*)0xB0D42168)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRC_RXEC	(*(volatile uint_io8_t*)0xB0D42169)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRC_TBIEC	(*(volatile uint_io8_t*)0xB0D4216A)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRC_TIEC	(*(volatile uint_io8_t*)0xB0D4216B)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRC_RIEC	(*(volatile uint_io8_t*)0xB0D4216C)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRC_MSC	(*(volatile uint_io8_t*)0xB0D4216E)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_scrc_field{
    uint_io8_t		u1TXEC:1;
    uint_io8_t		u1RXEC:1;
    uint_io8_t		u1TBIEC:1;
    uint_io8_t		u1TIEC:1;
    uint_io8_t		u1RIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1MSC:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_scrc_field_t;

typedef union un_mcg_mfsn_lin_1_scrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_scrc_field_t		stcField;
}un_mcg_mfsn_lin_1_scrc_t;

/* ESCRC */
#define MCG_MFS16_LIN_ESCRC	(MCG_MFS16_LIN_1.unESCRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB0D40174)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB0D40176)  /*@bfbba@*/

#define MCG_MFS17_LIN_ESCRC	(MCG_MFS17_LIN_1.unESCRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_ESCRC_LBIEC	(*(volatile uint_io8_t*)0xB0D42174)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESCRC_ESBLC	(*(volatile uint_io8_t*)0xB0D42176)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_escrc_field{
    uint_io8_t		:4;
    uint_io8_t		u1LBIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1ESBLC:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_escrc_field_t;

typedef union un_mcg_mfsn_lin_1_escrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_escrc_field_t		stcField;
}un_mcg_mfsn_lin_1_escrc_t;

/* SSRC */
#define MCG_MFS16_LIN_SSRC	(MCG_MFS16_LIN_1.unSSRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB0D4017D)  /*@bfbba@*/

#define MCG_MFS17_LIN_SSRC	(MCG_MFS17_LIN_1.unSSRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SSRC_LBDC	(*(volatile uint_io8_t*)0xB0D4217D)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_ssrc_field{
    uint_io8_t		:5;
    uint_io8_t		u1LBDC:1;
    uint_io8_t		:2;
}stc_mcg_mfsn_lin_1_ssrc_field_t;

typedef union un_mcg_mfsn_lin_1_ssrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_ssrc_field_t		stcField;
}un_mcg_mfsn_lin_1_ssrc_t;

/* SACSRC */
#define MCG_MFS16_LIN_SACSRC	(MCG_MFS16_LIN_1.unSACSRC.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB0D40180)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB0D40185)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB0D40187)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB0D40188)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB0D4018B)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB0D4018C)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB0D4018D)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB0D4018F)  /*@bfbba@*/

#define MCG_MFS17_LIN_SACSRC	(MCG_MFS17_LIN_1.unSACSRC.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_SACSRC_TMREC	(*(volatile uint_io8_t*)0xB0D42180)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRC_TRGEC	(*(volatile uint_io8_t*)0xB0D42185)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRC_TINTEC	(*(volatile uint_io8_t*)0xB0D42187)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRC_TINTC	(*(volatile uint_io8_t*)0xB0D42188)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRC_AUTEC	(*(volatile uint_io8_t*)0xB0D4218B)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRC_SFDEC	(*(volatile uint_io8_t*)0xB0D4218C)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRC_SFDC	(*(volatile uint_io8_t*)0xB0D4218D)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRC_STSTC	(*(volatile uint_io8_t*)0xB0D4218F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_sacsrc_field{
    uint_io16_t		u1TMREC:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGEC:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTEC:1;
    uint_io16_t		u1TINTC:1;
    uint_io16_t		:2;
    uint_io16_t		u1AUTEC:1;
    uint_io16_t		u1SFDEC:1;
    uint_io16_t		u1SFDC:1;
    uint_io16_t		:1;
    uint_io16_t		u1STSTC:1;
}stc_mcg_mfsn_lin_1_sacsrc_field_t;

typedef union un_mcg_mfsn_lin_1_sacsrc{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_sacsrc_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_sacsrc_t;

/* LAMCRC */
#define MCG_MFS16_LIN_LAMCRC	(MCG_MFS16_LIN_1.unLAMCRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB0D401B0)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB0D401B1)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB0D401B2)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMCRC	(MCG_MFS17_LIN_1.unLAMCRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMCRC_LAMENC	(*(volatile uint_io8_t*)0xB0D421B0)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCRC_LIDENC	(*(volatile uint_io8_t*)0xB0D421B1)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCRC_LCSTYPC	(*(volatile uint_io8_t*)0xB0D421B2)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamcrc_field{
    uint_io8_t		u1LAMENC:1;
    uint_io8_t		u1LIDENC:1;
    uint_io8_t		u1LCSTYPC:1;
    uint_io8_t		:5;
}stc_mcg_mfsn_lin_1_lamcrc_field_t;

typedef union un_mcg_mfsn_lin_1_lamcrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamcrc_field_t		stcField;
}un_mcg_mfsn_lin_1_lamcrc_t;

/* LAMSRC */
#define MCG_MFS16_LIN_LAMSRC	(MCG_MFS16_LIN_1.unLAMSRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB0D401B8)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB0D401BA)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMSRC	(MCG_MFS17_LIN_1.unLAMSRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMSRC_LAHCC	(*(volatile uint_io8_t*)0xB0D421B8)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMSRC_LCSCC	(*(volatile uint_io8_t*)0xB0D421BA)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamsrc_field{
    uint_io8_t		u1LAHCC:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCC:1;
    uint_io8_t		:5;
}stc_mcg_mfsn_lin_1_lamsrc_field_t;

typedef union un_mcg_mfsn_lin_1_lamsrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamsrc_field_t		stcField;
}un_mcg_mfsn_lin_1_lamsrc_t;

/* LAMIERC */
#define MCG_MFS16_LIN_LAMIERC	(MCG_MFS16_LIN_1.unLAMIERC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB0D401C8)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB0D401CA)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB0D401CB)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB0D401CC)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB0D401CD)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB0D401CE)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMIERC	(MCG_MFS17_LIN_1.unLAMIERC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMIERC_LAHCIEC	(*(volatile uint_io8_t*)0xB0D421C8)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERC_LCSCIEC	(*(volatile uint_io8_t*)0xB0D421CA)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERC_LBSERIEC	(*(volatile uint_io8_t*)0xB0D421CB)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERC_LSFERIEC	(*(volatile uint_io8_t*)0xB0D421CC)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERC_LPTERIEC	(*(volatile uint_io8_t*)0xB0D421CD)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERC_LCSERIEC	(*(volatile uint_io8_t*)0xB0D421CE)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamierc_field{
    uint_io8_t		u1LAHCIEC:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCIEC:1;
    uint_io8_t		u1LBSERIEC:1;
    uint_io8_t		u1LSFERIEC:1;
    uint_io8_t		u1LPTERIEC:1;
    uint_io8_t		u1LCSERIEC:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_lamierc_field_t;

typedef union un_mcg_mfsn_lin_1_lamierc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamierc_field_t		stcField;
}un_mcg_mfsn_lin_1_lamierc_t;

/* LAMESRC */
#define MCG_MFS16_LIN_LAMESRC	(MCG_MFS16_LIN_1.unLAMESRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB0D401DB)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB0D401DC)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB0D401DD)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB0D401DE)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMESRC	(MCG_MFS17_LIN_1.unLAMESRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMESRC_LBSERC	(*(volatile uint_io8_t*)0xB0D421DB)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMESRC_LSFERC	(*(volatile uint_io8_t*)0xB0D421DC)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMESRC_LPTERC	(*(volatile uint_io8_t*)0xB0D421DD)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMESRC_LCSERC	(*(volatile uint_io8_t*)0xB0D421DE)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamesrc_field{
    uint_io8_t		:3;
    uint_io8_t		u1LBSERC:1;
    uint_io8_t		u1LSFERC:1;
    uint_io8_t		u1LPTERC:1;
    uint_io8_t		u1LCSERC:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_lamesrc_field_t;

typedef union un_mcg_mfsn_lin_1_lamesrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamesrc_field_t		stcField;
}un_mcg_mfsn_lin_1_lamesrc_t;

/* FCR0C */
#define MCG_MFS16_LIN_FCR0C	(MCG_MFS16_LIN_1.unFCR0C.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB0D401E0)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB0D401E1)  /*@bfbba@*/

#define MCG_MFS17_LIN_FCR0C	(MCG_MFS17_LIN_1.unFCR0C.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_FCR0C_FE1C	(*(volatile uint_io8_t*)0xB0D421E0)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0C_FE2C	(*(volatile uint_io8_t*)0xB0D421E1)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_fcr0c_field{
    uint_io8_t		u1FE1C:1;
    uint_io8_t		u1FE2C:1;
    uint_io8_t		:6;
}stc_mcg_mfsn_lin_1_fcr0c_field_t;

typedef union un_mcg_mfsn_lin_1_fcr0c{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_fcr0c_field_t		stcField;
}un_mcg_mfsn_lin_1_fcr0c_t;

/* FCR1C */
#define MCG_MFS16_LIN_FCR1C	(MCG_MFS16_LIN_1.unFCR1C.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB0D401E8)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB0D401E9)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB0D401EA)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB0D401EB)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB0D401EC)  /*@bfbba@*/

#define MCG_MFS17_LIN_FCR1C	(MCG_MFS17_LIN_1.unFCR1C.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_FCR1C_FSELC	(*(volatile uint_io8_t*)0xB0D421E8)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1C_FTIEC	(*(volatile uint_io8_t*)0xB0D421E9)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1C_FDRQC	(*(volatile uint_io8_t*)0xB0D421EA)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1C_FRIIEC	(*(volatile uint_io8_t*)0xB0D421EB)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1C_FLSTEC	(*(volatile uint_io8_t*)0xB0D421EC)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_fcr1c_field{
    uint_io8_t		u1FSELC:1;
    uint_io8_t		u1FTIEC:1;
    uint_io8_t		u1FDRQC:1;
    uint_io8_t		u1FRIIEC:1;
    uint_io8_t		u1FLSTEC:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_lin_1_fcr1c_field_t;

typedef union un_mcg_mfsn_lin_1_fcr1c{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_fcr1c_field_t		stcField;
}un_mcg_mfsn_lin_1_fcr1c_t;

/* ESRC */
#define MCG_MFS16_LIN_ESRC	(MCG_MFS16_LIN_1.unESRC.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB0D40218)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB0D40219)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB0D4021A)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB0D4021B)  /*@bfbba@*/

#define MCG_MFS17_LIN_ESRC	(MCG_MFS17_LIN_1.unESRC.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_ESRC_TBERRC	(*(volatile uint_io8_t*)0xB0D42218)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESRC_RBERRC	(*(volatile uint_io8_t*)0xB0D42219)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESRC_TXOVRC	(*(volatile uint_io8_t*)0xB0D4221A)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESRC_RXUDRC	(*(volatile uint_io8_t*)0xB0D4221B)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_esrc_field{
    uint_io8_t		u1TBERRC:1;
    uint_io8_t		u1RBERRC:1;
    uint_io8_t		u1TXOVRC:1;
    uint_io8_t		u1RXUDRC:1;
    uint_io8_t		:4;
}stc_mcg_mfsn_lin_1_esrc_field_t;

typedef union un_mcg_mfsn_lin_1_esrc{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_esrc_field_t		stcField;
}un_mcg_mfsn_lin_1_esrc_t;

/* SMRS */
#define MCG_MFS16_LIN_SMRS	(MCG_MFS16_LIN_1.unSMRS.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB0D40220)  /*@bfbba@*/
#define MCG_MFS16_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB0D40223)  /*@bfbba@*/
#define MCG_MFS16_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB0D40224)  /*@bfbba@*/

#define MCG_MFS17_LIN_SMRS	(MCG_MFS17_LIN_1.unSMRS.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SMRS_SOES	(*(volatile uint_io8_t*)0xB0D42220)  /*@bfbba@*/
#define MCG_MFS17_LIN_SMRS_SBLS	(*(volatile uint_io8_t*)0xB0D42223)  /*@bfbba@*/
#define MCG_MFS17_LIN_SMRS_WUCRS	(*(volatile uint_io8_t*)0xB0D42224)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_smrs_field{
    uint_io8_t		u1SOES:1;
    uint_io8_t		:2;
    uint_io8_t		u1SBLS:1;
    uint_io8_t		u1WUCRS:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_lin_1_smrs_field_t;

typedef union un_mcg_mfsn_lin_1_smrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_smrs_field_t		stcField;
}un_mcg_mfsn_lin_1_smrs_t;

/* SCRS */
#define MCG_MFS16_LIN_SCRS	(MCG_MFS16_LIN_1.unSCRS.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB0D40228)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB0D40229)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB0D4022A)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB0D4022B)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB0D4022C)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB0D4022D)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB0D4022E)  /*@bfbba@*/
#define MCG_MFS16_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB0D4022F)  /*@bfbba@*/

#define MCG_MFS17_LIN_SCRS	(MCG_MFS17_LIN_1.unSCRS.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SCRS_TXES	(*(volatile uint_io8_t*)0xB0D42228)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRS_RXES	(*(volatile uint_io8_t*)0xB0D42229)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRS_TBIES	(*(volatile uint_io8_t*)0xB0D4222A)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRS_TIES	(*(volatile uint_io8_t*)0xB0D4222B)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRS_RIES	(*(volatile uint_io8_t*)0xB0D4222C)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRS_LBRS	(*(volatile uint_io8_t*)0xB0D4222D)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRS_MSS	(*(volatile uint_io8_t*)0xB0D4222E)  /*@bfbba@*/
#define MCG_MFS17_LIN_SCRS_UPCLS	(*(volatile uint_io8_t*)0xB0D4222F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_scrs_field{
    uint_io8_t		u1TXES:1;
    uint_io8_t		u1RXES:1;
    uint_io8_t		u1TBIES:1;
    uint_io8_t		u1TIES:1;
    uint_io8_t		u1RIES:1;
    uint_io8_t		u1LBRS:1;
    uint_io8_t		u1MSS:1;
    uint_io8_t		u1UPCLS:1;
}stc_mcg_mfsn_lin_1_scrs_field_t;

typedef union un_mcg_mfsn_lin_1_scrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_scrs_field_t		stcField;
}un_mcg_mfsn_lin_1_scrs_t;

/* ESCRS */
#define MCG_MFS16_LIN_ESCRS	(MCG_MFS16_LIN_1.unESCRS.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB0D40234)  /*@bfbba@*/
#define MCG_MFS16_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB0D40236)  /*@bfbba@*/

#define MCG_MFS17_LIN_ESCRS	(MCG_MFS17_LIN_1.unESCRS.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_ESCRS_LBIES	(*(volatile uint_io8_t*)0xB0D42234)  /*@bfbba@*/
#define MCG_MFS17_LIN_ESCRS_ESBLS	(*(volatile uint_io8_t*)0xB0D42236)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_escrs_field{
    uint_io8_t		:4;
    uint_io8_t		u1LBIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1ESBLS:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_escrs_field_t;

typedef union un_mcg_mfsn_lin_1_escrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_escrs_field_t		stcField;
}un_mcg_mfsn_lin_1_escrs_t;

/* SSRS */
#define MCG_MFS16_LIN_SSRS	(MCG_MFS16_LIN_1.unSSRS.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB0D4023F)  /*@bfbba@*/

#define MCG_MFS17_LIN_SSRS	(MCG_MFS17_LIN_1.unSSRS.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_SSRS_RECS	(*(volatile uint_io8_t*)0xB0D4223F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_ssrs_field{
    uint_io8_t		:7;
    uint_io8_t		u1RECS:1;
}stc_mcg_mfsn_lin_1_ssrs_field_t;

typedef union un_mcg_mfsn_lin_1_ssrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_ssrs_field_t		stcField;
}un_mcg_mfsn_lin_1_ssrs_t;

/* SACSRS */
#define MCG_MFS16_LIN_SACSRS	(MCG_MFS16_LIN_1.unSACSRS.u16Register)  /*@rg@*/
#define MCG_MFS16_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB0D40240)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB0D40245)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB0D40247)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB0D4024B)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB0D4024C)  /*@bfbba@*/
#define MCG_MFS16_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB0D4024F)  /*@bfbba@*/

#define MCG_MFS17_LIN_SACSRS	(MCG_MFS17_LIN_1.unSACSRS.u16Register)  /*@rg@*/
#define MCG_MFS17_LIN_SACSRS_TMRES	(*(volatile uint_io8_t*)0xB0D42240)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRS_TRGES	(*(volatile uint_io8_t*)0xB0D42245)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRS_TINTES	(*(volatile uint_io8_t*)0xB0D42247)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRS_AUTES	(*(volatile uint_io8_t*)0xB0D4224B)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRS_SFDES	(*(volatile uint_io8_t*)0xB0D4224C)  /*@bfbba@*/
#define MCG_MFS17_LIN_SACSRS_STSTS	(*(volatile uint_io8_t*)0xB0D4224F)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_sacsrs_field{
    uint_io16_t		u1TMRES:1;
    uint_io16_t		:4;
    uint_io16_t		u1TRGES:1;
    uint_io16_t		:1;
    uint_io16_t		u1TINTES:1;
    uint_io16_t		:3;
    uint_io16_t		u1AUTES:1;
    uint_io16_t		u1SFDES:1;
    uint_io16_t		:2;
    uint_io16_t		u1STSTS:1;
}stc_mcg_mfsn_lin_1_sacsrs_field_t;

typedef union un_mcg_mfsn_lin_1_sacsrs{
    uint_io16_t		u16Register;
    stc_mcg_mfsn_lin_1_sacsrs_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_mcg_mfsn_lin_1_sacsrs_t;

/* LAMCRS */
#define MCG_MFS16_LIN_LAMCRS	(MCG_MFS16_LIN_1.unLAMCRS.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB0D40270)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB0D40271)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB0D40272)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB0D40273)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMCRS	(MCG_MFS17_LIN_1.unLAMCRS.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMCRS_LAMENS	(*(volatile uint_io8_t*)0xB0D42270)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCRS_LIDENS	(*(volatile uint_io8_t*)0xB0D42271)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCRS_LCSTYPS	(*(volatile uint_io8_t*)0xB0D42272)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMCRS_LTDRCLS	(*(volatile uint_io8_t*)0xB0D42273)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamcrs_field{
    uint_io8_t		u1LAMENS:1;
    uint_io8_t		u1LIDENS:1;
    uint_io8_t		u1LCSTYPS:1;
    uint_io8_t		u1LTDRCLS:1;
    uint_io8_t		:4;
}stc_mcg_mfsn_lin_1_lamcrs_field_t;

typedef union un_mcg_mfsn_lin_1_lamcrs{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamcrs_field_t		stcField;
}un_mcg_mfsn_lin_1_lamcrs_t;

/* LAMIERS */
#define MCG_MFS16_LIN_LAMIERS	(MCG_MFS16_LIN_1.unLAMIERS.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB0D40288)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB0D4028A)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB0D4028B)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB0D4028C)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB0D4028D)  /*@bfbba@*/
#define MCG_MFS16_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB0D4028E)  /*@bfbba@*/

#define MCG_MFS17_LIN_LAMIERS	(MCG_MFS17_LIN_1.unLAMIERS.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_LAMIERS_LAHCIES	(*(volatile uint_io8_t*)0xB0D42288)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERS_LCSCIES	(*(volatile uint_io8_t*)0xB0D4228A)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERS_LBSERIES	(*(volatile uint_io8_t*)0xB0D4228B)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERS_LSFERIES	(*(volatile uint_io8_t*)0xB0D4228C)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERS_LPTERIES	(*(volatile uint_io8_t*)0xB0D4228D)  /*@bfbba@*/
#define MCG_MFS17_LIN_LAMIERS_LCSERIES	(*(volatile uint_io8_t*)0xB0D4228E)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_lamiers_field{
    uint_io8_t		u1LAHCIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1LCSCIES:1;
    uint_io8_t		u1LBSERIES:1;
    uint_io8_t		u1LSFERIES:1;
    uint_io8_t		u1LPTERIES:1;
    uint_io8_t		u1LCSERIES:1;
    uint_io8_t		:1;
}stc_mcg_mfsn_lin_1_lamiers_field_t;

typedef union un_mcg_mfsn_lin_1_lamiers{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_lamiers_field_t		stcField;
}un_mcg_mfsn_lin_1_lamiers_t;

/* FCR0S */
#define MCG_MFS16_LIN_FCR0S	(MCG_MFS16_LIN_1.unFCR0S.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB0D402A0)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB0D402A1)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB0D402A2)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB0D402A3)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB0D402A4)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB0D402A5)  /*@bfbba@*/

#define MCG_MFS17_LIN_FCR0S	(MCG_MFS17_LIN_1.unFCR0S.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_FCR0S_FE1S	(*(volatile uint_io8_t*)0xB0D422A0)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0S_FE2S	(*(volatile uint_io8_t*)0xB0D422A1)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0S_FCL1S	(*(volatile uint_io8_t*)0xB0D422A2)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0S_FCL2S	(*(volatile uint_io8_t*)0xB0D422A3)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0S_FSETS	(*(volatile uint_io8_t*)0xB0D422A4)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR0S_FLDS	(*(volatile uint_io8_t*)0xB0D422A5)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_fcr0s_field{
    uint_io8_t		u1FE1S:1;
    uint_io8_t		u1FE2S:1;
    uint_io8_t		u1FCL1S:1;
    uint_io8_t		u1FCL2S:1;
    uint_io8_t		u1FSETS:1;
    uint_io8_t		u1FLDS:1;
    uint_io8_t		:2;
}stc_mcg_mfsn_lin_1_fcr0s_field_t;

typedef union un_mcg_mfsn_lin_1_fcr0s{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_fcr0s_field_t		stcField;
}un_mcg_mfsn_lin_1_fcr0s_t;

/* FCR1S */
#define MCG_MFS16_LIN_FCR1S	(MCG_MFS16_LIN_1.unFCR1S.u8Register)  /*@rg@*/
#define MCG_MFS16_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB0D402A8)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB0D402A9)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB0D402AB)  /*@bfbba@*/
#define MCG_MFS16_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB0D402AC)  /*@bfbba@*/

#define MCG_MFS17_LIN_FCR1S	(MCG_MFS17_LIN_1.unFCR1S.u8Register)  /*@rg@*/
#define MCG_MFS17_LIN_FCR1S_FSELS	(*(volatile uint_io8_t*)0xB0D422A8)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1S_FTIES	(*(volatile uint_io8_t*)0xB0D422A9)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1S_FRIIES	(*(volatile uint_io8_t*)0xB0D422AB)  /*@bfbba@*/
#define MCG_MFS17_LIN_FCR1S_FLSTES	(*(volatile uint_io8_t*)0xB0D422AC)  /*@bfbba@*/

typedef struct stc_mcg_mfsn_lin_1_fcr1s_field{
    uint_io8_t		u1FSELS:1;
    uint_io8_t		u1FTIES:1;
    uint_io8_t		:1;
    uint_io8_t		u1FRIIES:1;
    uint_io8_t		u1FLSTES:1;
    uint_io8_t		:3;
}stc_mcg_mfsn_lin_1_fcr1s_field_t;

typedef union un_mcg_mfsn_lin_1_fcr1s{
    uint_io8_t		u8Register;
    stc_mcg_mfsn_lin_1_fcr1s_field_t		stcField;
}un_mcg_mfsn_lin_1_fcr1s_t;


typedef struct stc_mcg_mfsn_lin_1{
    un_mcg_mfsn_lin_1_smr_t	unSMR;	/* 0x00000000 */
    un_mcg_mfsn_lin_1_scr_t	unSCR;	/* 0x00000001 */
    un_mcg_mfsn_lin_1_escr_t	unESCR;	/* 0x00000002 */
    un_mcg_mfsn_lin_1_ssr_t	unSSR;	/* 0x00000003 */
    un_mcg_mfsn_lin_1_rdr_t	unRDR;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[3];	/* 0x00000005 */
    un_mcg_mfsn_lin_1_sacsr_t	unSACSR;	/* 0x00000008 */
    un_mcg_mfsn_lin_1_stmr_t	unSTMR;	/* 0x0000000A */
    un_mcg_mfsn_lin_1_stmcr_t	unSTMCR;	/* 0x0000000C */
    un_mcg_mfsn_lin_1_sfur_t	unSFUR;	/* 0x0000000E */
    un_mcg_mfsn_lin_1_sflr_t	unSFLR;	/* 0x00000010 */
    un_mcg_mfsn_lin_1_lamcr_t	unLAMCR;	/* 0x00000012 */
    un_mcg_mfsn_lin_1_lamsr_t	unLAMSR;	/* 0x00000013 */
    uint_io8_t	au8Reserved1[4];	/* 0x00000014 */
    un_mcg_mfsn_lin_1_lamrid_t	unLAMRID;	/* 0x00000018 */
    un_mcg_mfsn_lin_1_lamier_t	unLAMIER;	/* 0x00000019 */
    un_mcg_mfsn_lin_1_lamert_t	unLAMERT;	/* 0x0000001A */
    un_mcg_mfsn_lin_1_lamesr_t	unLAMESR;	/* 0x0000001B */
    un_mcg_mfsn_lin_1_bgr_t	unBGR;	/* 0x0000001C */
    uint_io8_t	au8Reserved2[2];	/* 0x0000001E */
    un_mcg_mfsn_lin_1_fcr0_t	unFCR0;	/* 0x00000020 */
    un_mcg_mfsn_lin_1_fcr1_t	unFCR1;	/* 0x00000021 */
    un_mcg_mfsn_lin_1_fbyte_t	unFBYTE;	/* 0x00000022 */
    un_mcg_mfsn_lin_1_fticr_t	unFTICR;	/* 0x00000024 */
    un_mcg_mfsn_lin_1_ecr_t	unECR;	/* 0x00000026 */
    un_mcg_mfsn_lin_1_esr_t	unESR;	/* 0x00000027 */
    un_mcg_mfsn_lin_1_tbsize_t	unTBSIZE;	/* 0x00000028 */
    uint_io8_t	au8Reserved3[3];	/* 0x00000029 */
    un_mcg_mfsn_lin_1_smrc_t	unSMRC;	/* 0x0000002C */
    un_mcg_mfsn_lin_1_scrc_t	unSCRC;	/* 0x0000002D */
    un_mcg_mfsn_lin_1_escrc_t	unESCRC;	/* 0x0000002E */
    un_mcg_mfsn_lin_1_ssrc_t	unSSRC;	/* 0x0000002F */
    un_mcg_mfsn_lin_1_sacsrc_t	unSACSRC;	/* 0x00000030 */
    uint_io8_t	au8Reserved4[4];	/* 0x00000032 */
    un_mcg_mfsn_lin_1_lamcrc_t	unLAMCRC;	/* 0x00000036 */
    un_mcg_mfsn_lin_1_lamsrc_t	unLAMSRC;	/* 0x00000037 */
    uint_io8_t	au8Reserved5[1];	/* 0x00000038 */
    un_mcg_mfsn_lin_1_lamierc_t	unLAMIERC;	/* 0x00000039 */
    uint_io8_t	au8Reserved6[1];	/* 0x0000003A */
    un_mcg_mfsn_lin_1_lamesrc_t	unLAMESRC;	/* 0x0000003B */
    un_mcg_mfsn_lin_1_fcr0c_t	unFCR0C;	/* 0x0000003C */
    un_mcg_mfsn_lin_1_fcr1c_t	unFCR1C;	/* 0x0000003D */
    uint_io8_t	au8Reserved7[5];	/* 0x0000003E */
    un_mcg_mfsn_lin_1_esrc_t	unESRC;	/* 0x00000043 */
    un_mcg_mfsn_lin_1_smrs_t	unSMRS;	/* 0x00000044 */
    un_mcg_mfsn_lin_1_scrs_t	unSCRS;	/* 0x00000045 */
    un_mcg_mfsn_lin_1_escrs_t	unESCRS;	/* 0x00000046 */
    un_mcg_mfsn_lin_1_ssrs_t	unSSRS;	/* 0x00000047 */
    un_mcg_mfsn_lin_1_sacsrs_t	unSACSRS;	/* 0x00000048 */
    uint_io8_t	au8Reserved8[4];	/* 0x0000004A */
    un_mcg_mfsn_lin_1_lamcrs_t	unLAMCRS;	/* 0x0000004E */
    uint_io8_t	au8Reserved9[2];	/* 0x0000004F */
    un_mcg_mfsn_lin_1_lamiers_t	unLAMIERS;	/* 0x00000051 */
    uint_io8_t	au8Reserved10[2];	/* 0x00000052 */
    un_mcg_mfsn_lin_1_fcr0s_t	unFCR0S;	/* 0x00000054 */
    un_mcg_mfsn_lin_1_fcr1s_t	unFCR1S;	/* 0x00000055 */
    uint_io8_t	au8Reserved11[938];	/* 0x00000056 */
}stc_mcg_mfsn_lin_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_mcg_mfsn_lin_1_t	stcMCG_MFS_LIN_1[2];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_MFS_LIN_H */
