/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_DMAA_H
#define __S6J3200_DMAA_H

#include "s6j3200io_basetypes.h"

/* DMAA0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define DMAA0	stcDMAA0
#else /* __IO_DEFINE */
#define DMAA0	(*((volatile stc_dmaa0_t*)0xB4714000))
#endif /* __IO_DEFINE */

/* ASR0 */
#define DMAA0_ASR0	(DMAA0.unASR0.u32Register)  /*@rg@*/
#define DMAA0_ASR0_HBUSREQ	(*(volatile uint_io8_t*)0xB70A0000)  /*@bfbba@*/

typedef struct stc_dmaa0_asr0_field{
    uint_io32_t		u1HBUSREQ:1;
    uint_io32_t		:31;
}stc_dmaa0_asr0_field_t;

typedef union un_dmaa0_asr0{
    uint_io32_t		u32Register;
    stc_dmaa0_asr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_asr0_t;

/* ASR1 */
#define DMAA0_ASR1	(DMAA0.unASR1.u32Register)  /*@rg@*/
#define DMAA0_ASR1_BC_WRITE	(DMAA0.unASR1.stcField.u6BC_WRITE)  /*@bf@*/
#define DMAA0_ASR1_BC_READ	(DMAA0.unASR1.stcField.u6BC_READ)  /*@bf@*/

typedef struct stc_dmaa0_asr1_field{
    uint_io32_t		u6BC_WRITE:6;
    uint_io32_t		:10;
    uint_io32_t		u6BC_READ:6;
    uint_io32_t		:10;
}stc_dmaa0_asr1_field_t;

typedef union un_dmaa0_asr1{
    uint_io32_t		u32Register;
    stc_dmaa0_asr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_asr1_t;

/* ASR2 */
#define DMAA0_ASR2	(DMAA0.unASR2.u32Register)  /*@rg@*/
#define DMAA0_ASR2_SELECTED	(DMAA0.unASR2.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_dmaa0_asr2_field{
    uint_io32_t		u16SELECTED:16;
    uint_io32_t		:16;
}stc_dmaa0_asr2_field_t;

typedef union un_dmaa0_asr2{
    uint_io32_t		u32Register;
    stc_dmaa0_asr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_asr2_t;

/* ASR3 */
#define DMAA0_ASR3	(DMAA0.unASR3.u32Register)  /*@rg@*/
#define DMAA0_ASR3_REQ0	(*(volatile uint_io8_t*)0xB70A0060)  /*@bfbba@*/
#define DMAA0_ASR3_REQ1	(*(volatile uint_io8_t*)0xB70A0061)  /*@bfbba@*/
#define DMAA0_ASR3_REQ2	(*(volatile uint_io8_t*)0xB70A0062)  /*@bfbba@*/
#define DMAA0_ASR3_REQ3	(*(volatile uint_io8_t*)0xB70A0063)  /*@bfbba@*/
#define DMAA0_ASR3_REQ4	(*(volatile uint_io8_t*)0xB70A0064)  /*@bfbba@*/
#define DMAA0_ASR3_REQ5	(*(volatile uint_io8_t*)0xB70A0065)  /*@bfbba@*/
#define DMAA0_ASR3_REQ6	(*(volatile uint_io8_t*)0xB70A0066)  /*@bfbba@*/
#define DMAA0_ASR3_REQ7	(*(volatile uint_io8_t*)0xB70A0067)  /*@bfbba@*/
#define DMAA0_ASR3_REQ8	(*(volatile uint_io8_t*)0xB70A0068)  /*@bfbba@*/
#define DMAA0_ASR3_REQ9	(*(volatile uint_io8_t*)0xB70A0069)  /*@bfbba@*/
#define DMAA0_ASR3_REQ10	(*(volatile uint_io8_t*)0xB70A006A)  /*@bfbba@*/
#define DMAA0_ASR3_REQ11	(*(volatile uint_io8_t*)0xB70A006B)  /*@bfbba@*/
#define DMAA0_ASR3_REQ12	(*(volatile uint_io8_t*)0xB70A006C)  /*@bfbba@*/
#define DMAA0_ASR3_REQ13	(*(volatile uint_io8_t*)0xB70A006D)  /*@bfbba@*/
#define DMAA0_ASR3_REQ14	(*(volatile uint_io8_t*)0xB70A006E)  /*@bfbba@*/
#define DMAA0_ASR3_REQ15	(*(volatile uint_io8_t*)0xB70A006F)  /*@bfbba@*/

typedef struct stc_dmaa0_asr3_field{
    uint_io32_t		u1REQ0:1;
    uint_io32_t		u1REQ1:1;
    uint_io32_t		u1REQ2:1;
    uint_io32_t		u1REQ3:1;
    uint_io32_t		u1REQ4:1;
    uint_io32_t		u1REQ5:1;
    uint_io32_t		u1REQ6:1;
    uint_io32_t		u1REQ7:1;
    uint_io32_t		u1REQ8:1;
    uint_io32_t		u1REQ9:1;
    uint_io32_t		u1REQ10:1;
    uint_io32_t		u1REQ11:1;
    uint_io32_t		u1REQ12:1;
    uint_io32_t		u1REQ13:1;
    uint_io32_t		u1REQ14:1;
    uint_io32_t		u1REQ15:1;
    uint_io32_t		:16;
}stc_dmaa0_asr3_field_t;

typedef union un_dmaa0_asr3{
    uint_io32_t		u32Register;
    stc_dmaa0_asr3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_asr3_t;

/* ASR[4-19] */
#define DMAA0_ASR4	(DMAA0.unASR4.u32Register)  /*@rg@*/
#define DMAA0_ASR4_TC_SHDW	(DMAA0.unASR4.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR5	(DMAA0.unASR5.u32Register)  /*@rg@*/
#define DMAA0_ASR5_TC_SHDW	(DMAA0.unASR5.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR6	(DMAA0.unASR6.u32Register)  /*@rg@*/
#define DMAA0_ASR6_TC_SHDW	(DMAA0.unASR6.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR7	(DMAA0.unASR7.u32Register)  /*@rg@*/
#define DMAA0_ASR7_TC_SHDW	(DMAA0.unASR7.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR8	(DMAA0.unASR8.u32Register)  /*@rg@*/
#define DMAA0_ASR8_TC_SHDW	(DMAA0.unASR8.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR9	(DMAA0.unASR9.u32Register)  /*@rg@*/
#define DMAA0_ASR9_TC_SHDW	(DMAA0.unASR9.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR10	(DMAA0.unASR10.u32Register)  /*@rg@*/
#define DMAA0_ASR10_TC_SHDW	(DMAA0.unASR10.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR11	(DMAA0.unASR11.u32Register)  /*@rg@*/
#define DMAA0_ASR11_TC_SHDW	(DMAA0.unASR11.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR12	(DMAA0.unASR12.u32Register)  /*@rg@*/
#define DMAA0_ASR12_TC_SHDW	(DMAA0.unASR12.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR13	(DMAA0.unASR13.u32Register)  /*@rg@*/
#define DMAA0_ASR13_TC_SHDW	(DMAA0.unASR13.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR14	(DMAA0.unASR14.u32Register)  /*@rg@*/
#define DMAA0_ASR14_TC_SHDW	(DMAA0.unASR14.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR15	(DMAA0.unASR15.u32Register)  /*@rg@*/
#define DMAA0_ASR15_TC_SHDW	(DMAA0.unASR15.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR16	(DMAA0.unASR16.u32Register)  /*@rg@*/
#define DMAA0_ASR16_TC_SHDW	(DMAA0.unASR16.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR17	(DMAA0.unASR17.u32Register)  /*@rg@*/
#define DMAA0_ASR17_TC_SHDW	(DMAA0.unASR17.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR18	(DMAA0.unASR18.u32Register)  /*@rg@*/
#define DMAA0_ASR18_TC_SHDW	(DMAA0.unASR18.stcField.u17TC_SHDW)  /*@bf@*/

#define DMAA0_ASR19	(DMAA0.unASR19.u32Register)  /*@rg@*/
#define DMAA0_ASR19_TC_SHDW	(DMAA0.unASR19.stcField.u17TC_SHDW)  /*@bf@*/

typedef struct stc_dmaa0_asrn_field{
    uint_io32_t		u17TC_SHDW:17;
    uint_io32_t		:15;
}stc_dmaa0_asrn_field_t;

typedef union un_dmaa0_asrn{
    uint_io32_t		u32Register;
    stc_dmaa0_asrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_asrn_t;

/* CMCHICRDB[0-7] */
#define DMAA0_CMCHICRDB0	(DMAA0.unCMCHICRDB0.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB0_CI	(DMAA0.unCMCHICRDB0.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB0_RLSLOT	(DMAA0.unCMCHICRDB0.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB0_RLESEL	(DMAA0.unCMCHICRDB0.stcField.u6RLESEL)  /*@bf@*/

#define DMAA0_CMCHICRDB1	(DMAA0.unCMCHICRDB1.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB1_CI	(DMAA0.unCMCHICRDB1.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB1_RLSLOT	(DMAA0.unCMCHICRDB1.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB1_RLESEL	(DMAA0.unCMCHICRDB1.stcField.u6RLESEL)  /*@bf@*/

#define DMAA0_CMCHICRDB2	(DMAA0.unCMCHICRDB2.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB2_CI	(DMAA0.unCMCHICRDB2.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB2_RLSLOT	(DMAA0.unCMCHICRDB2.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB2_RLESEL	(DMAA0.unCMCHICRDB2.stcField.u6RLESEL)  /*@bf@*/

#define DMAA0_CMCHICRDB3	(DMAA0.unCMCHICRDB3.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB3_CI	(DMAA0.unCMCHICRDB3.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB3_RLSLOT	(DMAA0.unCMCHICRDB3.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB3_RLESEL	(DMAA0.unCMCHICRDB3.stcField.u6RLESEL)  /*@bf@*/

#define DMAA0_CMCHICRDB4	(DMAA0.unCMCHICRDB4.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB4_CI	(DMAA0.unCMCHICRDB4.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB4_RLSLOT	(DMAA0.unCMCHICRDB4.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB4_RLESEL	(DMAA0.unCMCHICRDB4.stcField.u6RLESEL)  /*@bf@*/

#define DMAA0_CMCHICRDB5	(DMAA0.unCMCHICRDB5.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB5_CI	(DMAA0.unCMCHICRDB5.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB5_RLSLOT	(DMAA0.unCMCHICRDB5.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB5_RLESEL	(DMAA0.unCMCHICRDB5.stcField.u6RLESEL)  /*@bf@*/

#define DMAA0_CMCHICRDB6	(DMAA0.unCMCHICRDB6.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB6_CI	(DMAA0.unCMCHICRDB6.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB6_RLSLOT	(DMAA0.unCMCHICRDB6.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB6_RLESEL	(DMAA0.unCMCHICRDB6.stcField.u6RLESEL)  /*@bf@*/

#define DMAA0_CMCHICRDB7	(DMAA0.unCMCHICRDB7.u32Register)  /*@rg@*/
#define DMAA0_CMCHICRDB7_CI	(DMAA0.unCMCHICRDB7.stcField.u9CI)  /*@bf@*/
#define DMAA0_CMCHICRDB7_RLSLOT	(DMAA0.unCMCHICRDB7.stcField.u3RLSLOT)  /*@bf@*/
#define DMAA0_CMCHICRDB7_RLESEL	(DMAA0.unCMCHICRDB7.stcField.u6RLESEL)  /*@bf@*/

typedef struct stc_dmaa0_cmchicrdbn_field{
    uint_io32_t		u9CI:9;
    uint_io32_t		:7;
    uint_io32_t		u3RLSLOT:3;
    uint_io32_t		:5;
    uint_io32_t		u6RLESEL:6;
    uint_io32_t		:2;
}stc_dmaa0_cmchicrdbn_field_t;

typedef union un_dmaa0_cmchicrdbn{
    uint_io32_t		u32Register;
    stc_dmaa0_cmchicrdbn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_cmchicrdbn_t;

/* RTTSR */
#define DMAA0_RTTSR	(DMAA0.unRTTSR.u32Register)  /*@rg@*/
#define DMAA0_RTTSR_RLT0TS	(DMAA0.unRTTSR.stcField.u7RLT0TS)  /*@bf@*/
#define DMAA0_RTTSR_RLT1TS	(DMAA0.unRTTSR.stcField.u7RLT1TS)  /*@bf@*/
#define DMAA0_RTTSR_RLT2TS	(DMAA0.unRTTSR.stcField.u7RLT2TS)  /*@bf@*/
#define DMAA0_RTTSR_RLT3TS	(DMAA0.unRTTSR.stcField.u7RLT3TS)  /*@bf@*/

typedef struct stc_dmaa0_rttsr_field{
    uint_io32_t		u7RLT0TS:7;
    uint_io32_t		:1;
    uint_io32_t		u7RLT1TS:7;
    uint_io32_t		:1;
    uint_io32_t		u7RLT2TS:7;
    uint_io32_t		:1;
    uint_io32_t		u7RLT3TS:7;
    uint_io32_t		:1;
}stc_dmaa0_rttsr_field_t;

typedef union un_dmaa0_rttsr{
    uint_io32_t		u32Register;
    stc_dmaa0_rttsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_rttsr_t;

/* RTSSSR */
#define DMAA0_RTSSSR	(DMAA0.unRTSSSR.u32Register)  /*@rg@*/
#define DMAA0_RTSSSR_SSSR	(DMAA0.unRTSSSR.stcField.u4SSSR)  /*@bf@*/

typedef struct stc_dmaa0_rtsssr_field{
    uint_io32_t		u4SSSR:4;
    uint_io32_t		:28;
}stc_dmaa0_rtsssr_field_t;

typedef union un_dmaa0_rtsssr{
    uint_io32_t		u32Register;
    stc_dmaa0_rtsssr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_rtsssr_t;


typedef struct stc_dmaa0{
    un_dmaa0_asr0_t	unASR0;	/* 0x00000000 */
    un_dmaa0_asr1_t	unASR1;	/* 0x00000004 */
    un_dmaa0_asr2_t	unASR2;	/* 0x00000008 */
    un_dmaa0_asr3_t	unASR3;	/* 0x0000000C */
    un_dmaa0_asrn_t	unASR4;	/* 0x00000010 */
    un_dmaa0_asrn_t	unASR5;	/* 0x00000014 */
    un_dmaa0_asrn_t	unASR6;	/* 0x00000018 */
    un_dmaa0_asrn_t	unASR7;	/* 0x0000001C */
    un_dmaa0_asrn_t	unASR8;	/* 0x00000020 */
    un_dmaa0_asrn_t	unASR9;	/* 0x00000024 */
    un_dmaa0_asrn_t	unASR10;	/* 0x00000028 */
    un_dmaa0_asrn_t	unASR11;	/* 0x0000002C */
    un_dmaa0_asrn_t	unASR12;	/* 0x00000030 */
    un_dmaa0_asrn_t	unASR13;	/* 0x00000034 */
    un_dmaa0_asrn_t	unASR14;	/* 0x00000038 */
    un_dmaa0_asrn_t	unASR15;	/* 0x0000003C */
    un_dmaa0_asrn_t	unASR16;	/* 0x00000040 */
    un_dmaa0_asrn_t	unASR17;	/* 0x00000044 */
    un_dmaa0_asrn_t	unASR18;	/* 0x00000048 */
    un_dmaa0_asrn_t	unASR19;	/* 0x0000004C */
    uint_io8_t	au8Reserved0[48];	/* 0x00000050 */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB0;	/* 0x00000080 */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB1;	/* 0x00000084 */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB2;	/* 0x00000088 */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB3;	/* 0x0000008C */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB4;	/* 0x00000090 */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB5;	/* 0x00000094 */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB6;	/* 0x00000098 */
    un_dmaa0_cmchicrdbn_t	unCMCHICRDB7;	/* 0x0000009C */
    uint_io8_t	au8Reserved1[96];	/* 0x000000A0 */
    un_dmaa0_rttsr_t	unRTTSR;	/* 0x00000100 */
    uint_io8_t	au8Reserved2[28];	/* 0x00000104 */
    un_dmaa0_rtsssr_t	unRTSSSR;	/* 0x00000120 */
    uint_io8_t	au8Reserved3[1756];	/* 0x00000124 */
}stc_dmaa0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_dmaa0_t	stcDMAA0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 2048(0x800) bytes */


/* DMAA0_RLT[0-3] base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define DMAA0_RLT0_1	stcDMAA0_RLT_1[0]
#define DMAA0_RLT1_1	stcDMAA0_RLT_1[1]
#define DMAA0_RLT2_1	stcDMAA0_RLT_1[2]
#define DMAA0_RLT3_1	stcDMAA0_RLT_1[3]
#else /* __IO_DEFINE */
#define DMAA0_RLT0_1	(*((volatile stc_dmaa0_rltn_1_t*)0xB4714800))
#define DMAA0_RLT1_1	(*((volatile stc_dmaa0_rltn_1_t*)0xB4714820))
#define DMAA0_RLT2_1	(*((volatile stc_dmaa0_rltn_1_t*)0xB4714840))
#define DMAA0_RLT3_1	(*((volatile stc_dmaa0_rltn_1_t*)0xB4714860))
#endif /* __IO_DEFINE */

/* DMACFG */
#define DMAA0_RLT0_DMACFG	(DMAA0_RLT0_1.unDMACFG.u32Register)  /*@rg@*/
#define DMAA0_RLT0_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB70A4000)  /*@bfbba@*/

#define DMAA0_RLT1_DMACFG	(DMAA0_RLT1_1.unDMACFG.u32Register)  /*@rg@*/
#define DMAA0_RLT1_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB70A4100)  /*@bfbba@*/

#define DMAA0_RLT2_DMACFG	(DMAA0_RLT2_1.unDMACFG.u32Register)  /*@rg@*/
#define DMAA0_RLT2_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB70A4200)  /*@bfbba@*/

#define DMAA0_RLT3_DMACFG	(DMAA0_RLT3_1.unDMACFG.u32Register)  /*@rg@*/
#define DMAA0_RLT3_DMACFG_ENDMAUF	(*(volatile uint_io8_t*)0xB70A4300)  /*@bfbba@*/

typedef struct stc_dmaa0_rltn_1_dmacfg_field{
    uint_io32_t		u1ENDMAUF:1;
    uint_io32_t		:31;
}stc_dmaa0_rltn_1_dmacfg_field_t;

typedef union un_dmaa0_rltn_1_dmacfg{
    uint_io32_t		u32Register;
    stc_dmaa0_rltn_1_dmacfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_rltn_1_dmacfg_t;

/* TMCSR */
#define DMAA0_RLT0_TMCSR	(DMAA0_RLT0_1.unTMCSR.u32Register)  /*@rg@*/
#define DMAA0_RLT0_TMCSR_INTE	(*(volatile uint_io8_t*)0xB70A4043)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_RELD	(*(volatile uint_io8_t*)0xB70A4044)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB70A4045)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB70A4047)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_NFE	(*(volatile uint_io8_t*)0xB70A4048)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_CSL	(DMAA0_RLT0_1.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define DMAA0_RLT0_TMCSR_MOD	(DMAA0_RLT0_1.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define DMAA0_RLT0_TMCSR_UF	(*(volatile uint_io8_t*)0xB70A4050)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB70A4051)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_TRG	(*(volatile uint_io8_t*)0xB70A4052)  /*@bfbba@*/
#define DMAA0_RLT0_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB70A4058)  /*@bfbba@*/

#define DMAA0_RLT1_TMCSR	(DMAA0_RLT1_1.unTMCSR.u32Register)  /*@rg@*/
#define DMAA0_RLT1_TMCSR_INTE	(*(volatile uint_io8_t*)0xB70A4143)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_RELD	(*(volatile uint_io8_t*)0xB70A4144)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB70A4145)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB70A4147)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_NFE	(*(volatile uint_io8_t*)0xB70A4148)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_CSL	(DMAA0_RLT1_1.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define DMAA0_RLT1_TMCSR_MOD	(DMAA0_RLT1_1.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define DMAA0_RLT1_TMCSR_UF	(*(volatile uint_io8_t*)0xB70A4150)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB70A4151)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_TRG	(*(volatile uint_io8_t*)0xB70A4152)  /*@bfbba@*/
#define DMAA0_RLT1_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB70A4158)  /*@bfbba@*/

#define DMAA0_RLT2_TMCSR	(DMAA0_RLT2_1.unTMCSR.u32Register)  /*@rg@*/
#define DMAA0_RLT2_TMCSR_INTE	(*(volatile uint_io8_t*)0xB70A4243)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_RELD	(*(volatile uint_io8_t*)0xB70A4244)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB70A4245)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB70A4247)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_NFE	(*(volatile uint_io8_t*)0xB70A4248)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_CSL	(DMAA0_RLT2_1.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define DMAA0_RLT2_TMCSR_MOD	(DMAA0_RLT2_1.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define DMAA0_RLT2_TMCSR_UF	(*(volatile uint_io8_t*)0xB70A4250)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB70A4251)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_TRG	(*(volatile uint_io8_t*)0xB70A4252)  /*@bfbba@*/
#define DMAA0_RLT2_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB70A4258)  /*@bfbba@*/

#define DMAA0_RLT3_TMCSR	(DMAA0_RLT3_1.unTMCSR.u32Register)  /*@rg@*/
#define DMAA0_RLT3_TMCSR_INTE	(*(volatile uint_io8_t*)0xB70A4343)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_RELD	(*(volatile uint_io8_t*)0xB70A4344)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_OUTL	(*(volatile uint_io8_t*)0xB70A4345)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_DBGE	(*(volatile uint_io8_t*)0xB70A4347)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_NFE	(*(volatile uint_io8_t*)0xB70A4348)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_CSL	(DMAA0_RLT3_1.unTMCSR.stcField.u3CSL)  /*@bf@*/
#define DMAA0_RLT3_TMCSR_MOD	(DMAA0_RLT3_1.unTMCSR.stcField.u3MOD)  /*@bf@*/
#define DMAA0_RLT3_TMCSR_UF	(*(volatile uint_io8_t*)0xB70A4350)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_UFCLR	(*(volatile uint_io8_t*)0xB70A4351)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_TRG	(*(volatile uint_io8_t*)0xB70A4352)  /*@bfbba@*/
#define DMAA0_RLT3_TMCSR_CNTE	(*(volatile uint_io8_t*)0xB70A4358)  /*@bfbba@*/

typedef struct stc_dmaa0_rltn_1_tmcsr_field{
    uint_io32_t		:3;
    uint_io32_t		u1INTE:1;
    uint_io32_t		u1RELD:1;
    uint_io32_t		u1OUTL:1;
    uint_io32_t		:1;
    uint_io32_t		u1DBGE:1;
    uint_io32_t		u1NFE:1;
    uint_io32_t		:1;
    uint_io32_t		u3CSL:3;
    uint_io32_t		u3MOD:3;
    uint_io32_t		u1UF:1;
    uint_io32_t		u1UFCLR:1;
    uint_io32_t		u1TRG:1;
    uint_io32_t		:5;
    uint_io32_t		u1CNTE:1;
    uint_io32_t		:7;
}stc_dmaa0_rltn_1_tmcsr_field_t;

typedef union un_dmaa0_rltn_1_tmcsr{
    uint_io32_t		u32Register;
    stc_dmaa0_rltn_1_tmcsr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_rltn_1_tmcsr_t;

/* TMRLR */
#define DMAA0_RLT0_TMRLR	(DMAA0_RLT0_1.unTMRLR.u32Register)  /*@rg@*/
#define DMAA0_RLT0_TMRLR_TMRLR	DMAA0_RLT0_TMRLR  /*@bfrg@*/

#define DMAA0_RLT1_TMRLR	(DMAA0_RLT1_1.unTMRLR.u32Register)  /*@rg@*/
#define DMAA0_RLT1_TMRLR_TMRLR	DMAA0_RLT1_TMRLR  /*@bfrg@*/

#define DMAA0_RLT2_TMRLR	(DMAA0_RLT2_1.unTMRLR.u32Register)  /*@rg@*/
#define DMAA0_RLT2_TMRLR_TMRLR	DMAA0_RLT2_TMRLR  /*@bfrg@*/

#define DMAA0_RLT3_TMRLR	(DMAA0_RLT3_1.unTMRLR.u32Register)  /*@rg@*/
#define DMAA0_RLT3_TMRLR_TMRLR	DMAA0_RLT3_TMRLR  /*@bfrg@*/

typedef union un_dmaa0_rltn_1_tmrlr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_rltn_1_tmrlr_t;

/* TMR */
#define DMAA0_RLT0_TMR	(DMAA0_RLT0_1.unTMR.u32Register)  /*@rg@*/
#define DMAA0_RLT0_TMR_TMR	DMAA0_RLT0_TMR  /*@bfrg@*/

#define DMAA0_RLT1_TMR	(DMAA0_RLT1_1.unTMR.u32Register)  /*@rg@*/
#define DMAA0_RLT1_TMR_TMR	DMAA0_RLT1_TMR  /*@bfrg@*/

#define DMAA0_RLT2_TMR	(DMAA0_RLT2_1.unTMR.u32Register)  /*@rg@*/
#define DMAA0_RLT2_TMR_TMR	DMAA0_RLT2_TMR  /*@bfrg@*/

#define DMAA0_RLT3_TMR	(DMAA0_RLT3_1.unTMR.u32Register)  /*@rg@*/
#define DMAA0_RLT3_TMR_TMR	DMAA0_RLT3_TMR  /*@bfrg@*/

typedef union un_dmaa0_rltn_1_tmr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_dmaa0_rltn_1_tmr_t;


typedef struct stc_dmaa0_rltn_1{
    un_dmaa0_rltn_1_dmacfg_t	unDMACFG;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000004 */
    un_dmaa0_rltn_1_tmcsr_t	unTMCSR;	/* 0x00000008 */
    uint_io8_t	au8Reserved1[4];	/* 0x0000000C */
    un_dmaa0_rltn_1_tmrlr_t	unTMRLR;	/* 0x00000010 */
    un_dmaa0_rltn_1_tmr_t	unTMR;	/* 0x00000014 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000018 */
}stc_dmaa0_rltn_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_dmaa0_rltn_1_t	stcDMAA0_RLT_1[4];
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32(0x20) bytes */


#endif /* __S6J3200_DMAA_H */
