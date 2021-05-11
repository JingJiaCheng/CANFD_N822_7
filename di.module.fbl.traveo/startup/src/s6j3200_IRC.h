/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_IRC_H
#define __S6J3200_IRC_H

#include "s6j3200io_basetypes.h"

/* IRC0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define IRC0	stcIRC0
#else /* __IO_DEFINE */
#define IRC0	(*((volatile stc_irc0_t*)0xB0400000))
#endif /* __IO_DEFINE */

/* NMIVAS */
#define IRC0_NMIVAS	(IRC0.unNMIVAS.u32Register)  /*@rg@*/
#define IRC0_NMIVAS_NMIVAS	IRC0_NMIVAS  /*@bfrg@*/

typedef union un_irc0_nmivas{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmivas_t;

/* NMIST */
#define IRC0_NMIST	(IRC0.unNMIST.u32Register)  /*@rg@*/
#define IRC0_NMIST_NMISN	(IRC0.unNMIST.stcField.u6NMISN)  /*@bf@*/
#define IRC0_NMIST_NMIPS	(IRC0.unNMIST.stcField.u4NMIPS)  /*@bf@*/

typedef struct stc_irc0_nmist_field{
    uint_io32_t		u6NMISN:6;
    uint_io32_t		:2;
    uint_io32_t		u4NMIPS:4;
    uint_io32_t		:20;
}stc_irc0_nmist_field_t;

typedef union un_irc0_nmist{
    uint_io32_t		u32Register;
    stc_irc0_nmist_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmist_t;

/* IRQVAS */
#define IRC0_IRQVAS	(IRC0.unIRQVAS.u32Register)  /*@rg@*/
#define IRC0_IRQVAS_IRQVAS	IRC0_IRQVAS  /*@bfrg@*/

typedef union un_irc0_irqvas{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqvas_t;

/* IRQST */
#define IRC0_IRQST	(IRC0.unIRQST.u32Register)  /*@rg@*/
#define IRC0_IRQST_IRQSN	(IRC0.unIRQST.stcField.u10IRQSN)  /*@bf@*/
#define IRC0_IRQST_IRQPS	(IRC0.unIRQST.stcField.u5IRQPS)  /*@bf@*/
#define IRC0_IRQST_nIRQ	(*(volatile uint_io8_t*)0xB1100078)  /*@bfbba@*/
#define IRC0_IRQST_NIRQ	IRC0_IRQST_nIRQ  /*@bf2@*/

typedef struct stc_irc0_irqst_field{
    uint_io32_t		u10IRQSN:10;
    uint_io32_t		:6;
    uint_io32_t		u5IRQPS:5;
    uint_io32_t		:3;
    uint_io32_t		u1nIRQ:1;
    uint_io32_t		:7;
}stc_irc0_irqst_field_t;

typedef union un_irc0_irqst{
    uint_io32_t		u32Register;
    stc_irc0_irqst_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqst_t;

/* NMIVA[0-31] */
#define IRC0_NMIVA0	(IRC0.unNMIVA0.u32Register)  /*@rg@*/
#define IRC0_NMIVA0_NMIVA	IRC0_NMIVA0  /*@bfrg@*/

#define IRC0_NMIVA1	(IRC0.unNMIVA1.u32Register)  /*@rg@*/
#define IRC0_NMIVA1_NMIVA	IRC0_NMIVA1  /*@bfrg@*/

#define IRC0_NMIVA2	(IRC0.unNMIVA2.u32Register)  /*@rg@*/
#define IRC0_NMIVA2_NMIVA	IRC0_NMIVA2  /*@bfrg@*/

#define IRC0_NMIVA3	(IRC0.unNMIVA3.u32Register)  /*@rg@*/
#define IRC0_NMIVA3_NMIVA	IRC0_NMIVA3  /*@bfrg@*/

#define IRC0_NMIVA4	(IRC0.unNMIVA4.u32Register)  /*@rg@*/
#define IRC0_NMIVA4_NMIVA	IRC0_NMIVA4  /*@bfrg@*/

#define IRC0_NMIVA5	(IRC0.unNMIVA5.u32Register)  /*@rg@*/
#define IRC0_NMIVA5_NMIVA	IRC0_NMIVA5  /*@bfrg@*/

#define IRC0_NMIVA6	(IRC0.unNMIVA6.u32Register)  /*@rg@*/
#define IRC0_NMIVA6_NMIVA	IRC0_NMIVA6  /*@bfrg@*/

#define IRC0_NMIVA7	(IRC0.unNMIVA7.u32Register)  /*@rg@*/
#define IRC0_NMIVA7_NMIVA	IRC0_NMIVA7  /*@bfrg@*/

#define IRC0_NMIVA8	(IRC0.unNMIVA8.u32Register)  /*@rg@*/
#define IRC0_NMIVA8_NMIVA	IRC0_NMIVA8  /*@bfrg@*/

#define IRC0_NMIVA9	(IRC0.unNMIVA9.u32Register)  /*@rg@*/
#define IRC0_NMIVA9_NMIVA	IRC0_NMIVA9  /*@bfrg@*/

#define IRC0_NMIVA10	(IRC0.unNMIVA10.u32Register)  /*@rg@*/
#define IRC0_NMIVA10_NMIVA	IRC0_NMIVA10  /*@bfrg@*/

#define IRC0_NMIVA11	(IRC0.unNMIVA11.u32Register)  /*@rg@*/
#define IRC0_NMIVA11_NMIVA	IRC0_NMIVA11  /*@bfrg@*/

#define IRC0_NMIVA12	(IRC0.unNMIVA12.u32Register)  /*@rg@*/
#define IRC0_NMIVA12_NMIVA	IRC0_NMIVA12  /*@bfrg@*/

#define IRC0_NMIVA13	(IRC0.unNMIVA13.u32Register)  /*@rg@*/
#define IRC0_NMIVA13_NMIVA	IRC0_NMIVA13  /*@bfrg@*/

#define IRC0_NMIVA14	(IRC0.unNMIVA14.u32Register)  /*@rg@*/
#define IRC0_NMIVA14_NMIVA	IRC0_NMIVA14  /*@bfrg@*/

#define IRC0_NMIVA15	(IRC0.unNMIVA15.u32Register)  /*@rg@*/
#define IRC0_NMIVA15_NMIVA	IRC0_NMIVA15  /*@bfrg@*/

#define IRC0_NMIVA16	(IRC0.unNMIVA16.u32Register)  /*@rg@*/
#define IRC0_NMIVA16_NMIVA	IRC0_NMIVA16  /*@bfrg@*/

#define IRC0_NMIVA17	(IRC0.unNMIVA17.u32Register)  /*@rg@*/
#define IRC0_NMIVA17_NMIVA	IRC0_NMIVA17  /*@bfrg@*/

#define IRC0_NMIVA18	(IRC0.unNMIVA18.u32Register)  /*@rg@*/
#define IRC0_NMIVA18_NMIVA	IRC0_NMIVA18  /*@bfrg@*/

#define IRC0_NMIVA19	(IRC0.unNMIVA19.u32Register)  /*@rg@*/
#define IRC0_NMIVA19_NMIVA	IRC0_NMIVA19  /*@bfrg@*/

#define IRC0_NMIVA20	(IRC0.unNMIVA20.u32Register)  /*@rg@*/
#define IRC0_NMIVA20_NMIVA	IRC0_NMIVA20  /*@bfrg@*/

#define IRC0_NMIVA21	(IRC0.unNMIVA21.u32Register)  /*@rg@*/
#define IRC0_NMIVA21_NMIVA	IRC0_NMIVA21  /*@bfrg@*/

#define IRC0_NMIVA22	(IRC0.unNMIVA22.u32Register)  /*@rg@*/
#define IRC0_NMIVA22_NMIVA	IRC0_NMIVA22  /*@bfrg@*/

#define IRC0_NMIVA23	(IRC0.unNMIVA23.u32Register)  /*@rg@*/
#define IRC0_NMIVA23_NMIVA	IRC0_NMIVA23  /*@bfrg@*/

#define IRC0_NMIVA24	(IRC0.unNMIVA24.u32Register)  /*@rg@*/
#define IRC0_NMIVA24_NMIVA	IRC0_NMIVA24  /*@bfrg@*/

#define IRC0_NMIVA25	(IRC0.unNMIVA25.u32Register)  /*@rg@*/
#define IRC0_NMIVA25_NMIVA	IRC0_NMIVA25  /*@bfrg@*/

#define IRC0_NMIVA26	(IRC0.unNMIVA26.u32Register)  /*@rg@*/
#define IRC0_NMIVA26_NMIVA	IRC0_NMIVA26  /*@bfrg@*/

#define IRC0_NMIVA27	(IRC0.unNMIVA27.u32Register)  /*@rg@*/
#define IRC0_NMIVA27_NMIVA	IRC0_NMIVA27  /*@bfrg@*/

#define IRC0_NMIVA28	(IRC0.unNMIVA28.u32Register)  /*@rg@*/
#define IRC0_NMIVA28_NMIVA	IRC0_NMIVA28  /*@bfrg@*/

#define IRC0_NMIVA29	(IRC0.unNMIVA29.u32Register)  /*@rg@*/
#define IRC0_NMIVA29_NMIVA	IRC0_NMIVA29  /*@bfrg@*/

#define IRC0_NMIVA30	(IRC0.unNMIVA30.u32Register)  /*@rg@*/
#define IRC0_NMIVA30_NMIVA	IRC0_NMIVA30  /*@bfrg@*/

#define IRC0_NMIVA31	(IRC0.unNMIVA31.u32Register)  /*@rg@*/
#define IRC0_NMIVA31_NMIVA	IRC0_NMIVA31  /*@bfrg@*/

typedef union un_irc0_nmivan{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmivan_t;

/* IRQVA[0-511] */
#define IRC0_IRQVA0	(IRC0.unIRQVA0.u32Register)  /*@rg@*/
#define IRC0_IRQVA0_IRQVA	IRC0_IRQVA0  /*@bfrg@*/

#define IRC0_IRQVA1	(IRC0.unIRQVA1.u32Register)  /*@rg@*/
#define IRC0_IRQVA1_IRQVA	IRC0_IRQVA1  /*@bfrg@*/

#define IRC0_IRQVA2	(IRC0.unIRQVA2.u32Register)  /*@rg@*/
#define IRC0_IRQVA2_IRQVA	IRC0_IRQVA2  /*@bfrg@*/

#define IRC0_IRQVA3	(IRC0.unIRQVA3.u32Register)  /*@rg@*/
#define IRC0_IRQVA3_IRQVA	IRC0_IRQVA3  /*@bfrg@*/

#define IRC0_IRQVA4	(IRC0.unIRQVA4.u32Register)  /*@rg@*/
#define IRC0_IRQVA4_IRQVA	IRC0_IRQVA4  /*@bfrg@*/

#define IRC0_IRQVA5	(IRC0.unIRQVA5.u32Register)  /*@rg@*/
#define IRC0_IRQVA5_IRQVA	IRC0_IRQVA5  /*@bfrg@*/

#define IRC0_IRQVA6	(IRC0.unIRQVA6.u32Register)  /*@rg@*/
#define IRC0_IRQVA6_IRQVA	IRC0_IRQVA6  /*@bfrg@*/

#define IRC0_IRQVA7	(IRC0.unIRQVA7.u32Register)  /*@rg@*/
#define IRC0_IRQVA7_IRQVA	IRC0_IRQVA7  /*@bfrg@*/

#define IRC0_IRQVA8	(IRC0.unIRQVA8.u32Register)  /*@rg@*/
#define IRC0_IRQVA8_IRQVA	IRC0_IRQVA8  /*@bfrg@*/

#define IRC0_IRQVA9	(IRC0.unIRQVA9.u32Register)  /*@rg@*/
#define IRC0_IRQVA9_IRQVA	IRC0_IRQVA9  /*@bfrg@*/

#define IRC0_IRQVA10	(IRC0.unIRQVA10.u32Register)  /*@rg@*/
#define IRC0_IRQVA10_IRQVA	IRC0_IRQVA10  /*@bfrg@*/

#define IRC0_IRQVA11	(IRC0.unIRQVA11.u32Register)  /*@rg@*/
#define IRC0_IRQVA11_IRQVA	IRC0_IRQVA11  /*@bfrg@*/

#define IRC0_IRQVA12	(IRC0.unIRQVA12.u32Register)  /*@rg@*/
#define IRC0_IRQVA12_IRQVA	IRC0_IRQVA12  /*@bfrg@*/

#define IRC0_IRQVA13	(IRC0.unIRQVA13.u32Register)  /*@rg@*/
#define IRC0_IRQVA13_IRQVA	IRC0_IRQVA13  /*@bfrg@*/

#define IRC0_IRQVA14	(IRC0.unIRQVA14.u32Register)  /*@rg@*/
#define IRC0_IRQVA14_IRQVA	IRC0_IRQVA14  /*@bfrg@*/

#define IRC0_IRQVA15	(IRC0.unIRQVA15.u32Register)  /*@rg@*/
#define IRC0_IRQVA15_IRQVA	IRC0_IRQVA15  /*@bfrg@*/

#define IRC0_IRQVA16	(IRC0.unIRQVA16.u32Register)  /*@rg@*/
#define IRC0_IRQVA16_IRQVA	IRC0_IRQVA16  /*@bfrg@*/

#define IRC0_IRQVA17	(IRC0.unIRQVA17.u32Register)  /*@rg@*/
#define IRC0_IRQVA17_IRQVA	IRC0_IRQVA17  /*@bfrg@*/

#define IRC0_IRQVA18	(IRC0.unIRQVA18.u32Register)  /*@rg@*/
#define IRC0_IRQVA18_IRQVA	IRC0_IRQVA18  /*@bfrg@*/

#define IRC0_IRQVA19	(IRC0.unIRQVA19.u32Register)  /*@rg@*/
#define IRC0_IRQVA19_IRQVA	IRC0_IRQVA19  /*@bfrg@*/

#define IRC0_IRQVA20	(IRC0.unIRQVA20.u32Register)  /*@rg@*/
#define IRC0_IRQVA20_IRQVA	IRC0_IRQVA20  /*@bfrg@*/

#define IRC0_IRQVA21	(IRC0.unIRQVA21.u32Register)  /*@rg@*/
#define IRC0_IRQVA21_IRQVA	IRC0_IRQVA21  /*@bfrg@*/

#define IRC0_IRQVA22	(IRC0.unIRQVA22.u32Register)  /*@rg@*/
#define IRC0_IRQVA22_IRQVA	IRC0_IRQVA22  /*@bfrg@*/

#define IRC0_IRQVA23	(IRC0.unIRQVA23.u32Register)  /*@rg@*/
#define IRC0_IRQVA23_IRQVA	IRC0_IRQVA23  /*@bfrg@*/

#define IRC0_IRQVA24	(IRC0.unIRQVA24.u32Register)  /*@rg@*/
#define IRC0_IRQVA24_IRQVA	IRC0_IRQVA24  /*@bfrg@*/

#define IRC0_IRQVA25	(IRC0.unIRQVA25.u32Register)  /*@rg@*/
#define IRC0_IRQVA25_IRQVA	IRC0_IRQVA25  /*@bfrg@*/

#define IRC0_IRQVA26	(IRC0.unIRQVA26.u32Register)  /*@rg@*/
#define IRC0_IRQVA26_IRQVA	IRC0_IRQVA26  /*@bfrg@*/

#define IRC0_IRQVA27	(IRC0.unIRQVA27.u32Register)  /*@rg@*/
#define IRC0_IRQVA27_IRQVA	IRC0_IRQVA27  /*@bfrg@*/

#define IRC0_IRQVA28	(IRC0.unIRQVA28.u32Register)  /*@rg@*/
#define IRC0_IRQVA28_IRQVA	IRC0_IRQVA28  /*@bfrg@*/

#define IRC0_IRQVA29	(IRC0.unIRQVA29.u32Register)  /*@rg@*/
#define IRC0_IRQVA29_IRQVA	IRC0_IRQVA29  /*@bfrg@*/

#define IRC0_IRQVA30	(IRC0.unIRQVA30.u32Register)  /*@rg@*/
#define IRC0_IRQVA30_IRQVA	IRC0_IRQVA30  /*@bfrg@*/

#define IRC0_IRQVA31	(IRC0.unIRQVA31.u32Register)  /*@rg@*/
#define IRC0_IRQVA31_IRQVA	IRC0_IRQVA31  /*@bfrg@*/

#define IRC0_IRQVA32	(IRC0.unIRQVA32.u32Register)  /*@rg@*/
#define IRC0_IRQVA32_IRQVA	IRC0_IRQVA32  /*@bfrg@*/

#define IRC0_IRQVA33	(IRC0.unIRQVA33.u32Register)  /*@rg@*/
#define IRC0_IRQVA33_IRQVA	IRC0_IRQVA33  /*@bfrg@*/

#define IRC0_IRQVA34	(IRC0.unIRQVA34.u32Register)  /*@rg@*/
#define IRC0_IRQVA34_IRQVA	IRC0_IRQVA34  /*@bfrg@*/

#define IRC0_IRQVA35	(IRC0.unIRQVA35.u32Register)  /*@rg@*/
#define IRC0_IRQVA35_IRQVA	IRC0_IRQVA35  /*@bfrg@*/

#define IRC0_IRQVA36	(IRC0.unIRQVA36.u32Register)  /*@rg@*/
#define IRC0_IRQVA36_IRQVA	IRC0_IRQVA36  /*@bfrg@*/

#define IRC0_IRQVA37	(IRC0.unIRQVA37.u32Register)  /*@rg@*/
#define IRC0_IRQVA37_IRQVA	IRC0_IRQVA37  /*@bfrg@*/

#define IRC0_IRQVA38	(IRC0.unIRQVA38.u32Register)  /*@rg@*/
#define IRC0_IRQVA38_IRQVA	IRC0_IRQVA38  /*@bfrg@*/

#define IRC0_IRQVA39	(IRC0.unIRQVA39.u32Register)  /*@rg@*/
#define IRC0_IRQVA39_IRQVA	IRC0_IRQVA39  /*@bfrg@*/

#define IRC0_IRQVA40	(IRC0.unIRQVA40.u32Register)  /*@rg@*/
#define IRC0_IRQVA40_IRQVA	IRC0_IRQVA40  /*@bfrg@*/

#define IRC0_IRQVA41	(IRC0.unIRQVA41.u32Register)  /*@rg@*/
#define IRC0_IRQVA41_IRQVA	IRC0_IRQVA41  /*@bfrg@*/

#define IRC0_IRQVA42	(IRC0.unIRQVA42.u32Register)  /*@rg@*/
#define IRC0_IRQVA42_IRQVA	IRC0_IRQVA42  /*@bfrg@*/

#define IRC0_IRQVA43	(IRC0.unIRQVA43.u32Register)  /*@rg@*/
#define IRC0_IRQVA43_IRQVA	IRC0_IRQVA43  /*@bfrg@*/

#define IRC0_IRQVA44	(IRC0.unIRQVA44.u32Register)  /*@rg@*/
#define IRC0_IRQVA44_IRQVA	IRC0_IRQVA44  /*@bfrg@*/

#define IRC0_IRQVA45	(IRC0.unIRQVA45.u32Register)  /*@rg@*/
#define IRC0_IRQVA45_IRQVA	IRC0_IRQVA45  /*@bfrg@*/

#define IRC0_IRQVA46	(IRC0.unIRQVA46.u32Register)  /*@rg@*/
#define IRC0_IRQVA46_IRQVA	IRC0_IRQVA46  /*@bfrg@*/

#define IRC0_IRQVA47	(IRC0.unIRQVA47.u32Register)  /*@rg@*/
#define IRC0_IRQVA47_IRQVA	IRC0_IRQVA47  /*@bfrg@*/

#define IRC0_IRQVA48	(IRC0.unIRQVA48.u32Register)  /*@rg@*/
#define IRC0_IRQVA48_IRQVA	IRC0_IRQVA48  /*@bfrg@*/

#define IRC0_IRQVA49	(IRC0.unIRQVA49.u32Register)  /*@rg@*/
#define IRC0_IRQVA49_IRQVA	IRC0_IRQVA49  /*@bfrg@*/

#define IRC0_IRQVA50	(IRC0.unIRQVA50.u32Register)  /*@rg@*/
#define IRC0_IRQVA50_IRQVA	IRC0_IRQVA50  /*@bfrg@*/

#define IRC0_IRQVA51	(IRC0.unIRQVA51.u32Register)  /*@rg@*/
#define IRC0_IRQVA51_IRQVA	IRC0_IRQVA51  /*@bfrg@*/

#define IRC0_IRQVA52	(IRC0.unIRQVA52.u32Register)  /*@rg@*/
#define IRC0_IRQVA52_IRQVA	IRC0_IRQVA52  /*@bfrg@*/

#define IRC0_IRQVA53	(IRC0.unIRQVA53.u32Register)  /*@rg@*/
#define IRC0_IRQVA53_IRQVA	IRC0_IRQVA53  /*@bfrg@*/

#define IRC0_IRQVA54	(IRC0.unIRQVA54.u32Register)  /*@rg@*/
#define IRC0_IRQVA54_IRQVA	IRC0_IRQVA54  /*@bfrg@*/

#define IRC0_IRQVA55	(IRC0.unIRQVA55.u32Register)  /*@rg@*/
#define IRC0_IRQVA55_IRQVA	IRC0_IRQVA55  /*@bfrg@*/

#define IRC0_IRQVA56	(IRC0.unIRQVA56.u32Register)  /*@rg@*/
#define IRC0_IRQVA56_IRQVA	IRC0_IRQVA56  /*@bfrg@*/

#define IRC0_IRQVA57	(IRC0.unIRQVA57.u32Register)  /*@rg@*/
#define IRC0_IRQVA57_IRQVA	IRC0_IRQVA57  /*@bfrg@*/

#define IRC0_IRQVA58	(IRC0.unIRQVA58.u32Register)  /*@rg@*/
#define IRC0_IRQVA58_IRQVA	IRC0_IRQVA58  /*@bfrg@*/

#define IRC0_IRQVA59	(IRC0.unIRQVA59.u32Register)  /*@rg@*/
#define IRC0_IRQVA59_IRQVA	IRC0_IRQVA59  /*@bfrg@*/

#define IRC0_IRQVA60	(IRC0.unIRQVA60.u32Register)  /*@rg@*/
#define IRC0_IRQVA60_IRQVA	IRC0_IRQVA60  /*@bfrg@*/

#define IRC0_IRQVA61	(IRC0.unIRQVA61.u32Register)  /*@rg@*/
#define IRC0_IRQVA61_IRQVA	IRC0_IRQVA61  /*@bfrg@*/

#define IRC0_IRQVA62	(IRC0.unIRQVA62.u32Register)  /*@rg@*/
#define IRC0_IRQVA62_IRQVA	IRC0_IRQVA62  /*@bfrg@*/

#define IRC0_IRQVA63	(IRC0.unIRQVA63.u32Register)  /*@rg@*/
#define IRC0_IRQVA63_IRQVA	IRC0_IRQVA63  /*@bfrg@*/

#define IRC0_IRQVA64	(IRC0.unIRQVA64.u32Register)  /*@rg@*/
#define IRC0_IRQVA64_IRQVA	IRC0_IRQVA64  /*@bfrg@*/

#define IRC0_IRQVA65	(IRC0.unIRQVA65.u32Register)  /*@rg@*/
#define IRC0_IRQVA65_IRQVA	IRC0_IRQVA65  /*@bfrg@*/

#define IRC0_IRQVA66	(IRC0.unIRQVA66.u32Register)  /*@rg@*/
#define IRC0_IRQVA66_IRQVA	IRC0_IRQVA66  /*@bfrg@*/

#define IRC0_IRQVA67	(IRC0.unIRQVA67.u32Register)  /*@rg@*/
#define IRC0_IRQVA67_IRQVA	IRC0_IRQVA67  /*@bfrg@*/

#define IRC0_IRQVA68	(IRC0.unIRQVA68.u32Register)  /*@rg@*/
#define IRC0_IRQVA68_IRQVA	IRC0_IRQVA68  /*@bfrg@*/

#define IRC0_IRQVA69	(IRC0.unIRQVA69.u32Register)  /*@rg@*/
#define IRC0_IRQVA69_IRQVA	IRC0_IRQVA69  /*@bfrg@*/

#define IRC0_IRQVA70	(IRC0.unIRQVA70.u32Register)  /*@rg@*/
#define IRC0_IRQVA70_IRQVA	IRC0_IRQVA70  /*@bfrg@*/

#define IRC0_IRQVA71	(IRC0.unIRQVA71.u32Register)  /*@rg@*/
#define IRC0_IRQVA71_IRQVA	IRC0_IRQVA71  /*@bfrg@*/

#define IRC0_IRQVA72	(IRC0.unIRQVA72.u32Register)  /*@rg@*/
#define IRC0_IRQVA72_IRQVA	IRC0_IRQVA72  /*@bfrg@*/

#define IRC0_IRQVA73	(IRC0.unIRQVA73.u32Register)  /*@rg@*/
#define IRC0_IRQVA73_IRQVA	IRC0_IRQVA73  /*@bfrg@*/

#define IRC0_IRQVA74	(IRC0.unIRQVA74.u32Register)  /*@rg@*/
#define IRC0_IRQVA74_IRQVA	IRC0_IRQVA74  /*@bfrg@*/

#define IRC0_IRQVA75	(IRC0.unIRQVA75.u32Register)  /*@rg@*/
#define IRC0_IRQVA75_IRQVA	IRC0_IRQVA75  /*@bfrg@*/

#define IRC0_IRQVA76	(IRC0.unIRQVA76.u32Register)  /*@rg@*/
#define IRC0_IRQVA76_IRQVA	IRC0_IRQVA76  /*@bfrg@*/

#define IRC0_IRQVA77	(IRC0.unIRQVA77.u32Register)  /*@rg@*/
#define IRC0_IRQVA77_IRQVA	IRC0_IRQVA77  /*@bfrg@*/

#define IRC0_IRQVA78	(IRC0.unIRQVA78.u32Register)  /*@rg@*/
#define IRC0_IRQVA78_IRQVA	IRC0_IRQVA78  /*@bfrg@*/

#define IRC0_IRQVA79	(IRC0.unIRQVA79.u32Register)  /*@rg@*/
#define IRC0_IRQVA79_IRQVA	IRC0_IRQVA79  /*@bfrg@*/

#define IRC0_IRQVA80	(IRC0.unIRQVA80.u32Register)  /*@rg@*/
#define IRC0_IRQVA80_IRQVA	IRC0_IRQVA80  /*@bfrg@*/

#define IRC0_IRQVA81	(IRC0.unIRQVA81.u32Register)  /*@rg@*/
#define IRC0_IRQVA81_IRQVA	IRC0_IRQVA81  /*@bfrg@*/

#define IRC0_IRQVA82	(IRC0.unIRQVA82.u32Register)  /*@rg@*/
#define IRC0_IRQVA82_IRQVA	IRC0_IRQVA82  /*@bfrg@*/

#define IRC0_IRQVA83	(IRC0.unIRQVA83.u32Register)  /*@rg@*/
#define IRC0_IRQVA83_IRQVA	IRC0_IRQVA83  /*@bfrg@*/

#define IRC0_IRQVA84	(IRC0.unIRQVA84.u32Register)  /*@rg@*/
#define IRC0_IRQVA84_IRQVA	IRC0_IRQVA84  /*@bfrg@*/

#define IRC0_IRQVA85	(IRC0.unIRQVA85.u32Register)  /*@rg@*/
#define IRC0_IRQVA85_IRQVA	IRC0_IRQVA85  /*@bfrg@*/

#define IRC0_IRQVA86	(IRC0.unIRQVA86.u32Register)  /*@rg@*/
#define IRC0_IRQVA86_IRQVA	IRC0_IRQVA86  /*@bfrg@*/

#define IRC0_IRQVA87	(IRC0.unIRQVA87.u32Register)  /*@rg@*/
#define IRC0_IRQVA87_IRQVA	IRC0_IRQVA87  /*@bfrg@*/

#define IRC0_IRQVA88	(IRC0.unIRQVA88.u32Register)  /*@rg@*/
#define IRC0_IRQVA88_IRQVA	IRC0_IRQVA88  /*@bfrg@*/

#define IRC0_IRQVA89	(IRC0.unIRQVA89.u32Register)  /*@rg@*/
#define IRC0_IRQVA89_IRQVA	IRC0_IRQVA89  /*@bfrg@*/

#define IRC0_IRQVA90	(IRC0.unIRQVA90.u32Register)  /*@rg@*/
#define IRC0_IRQVA90_IRQVA	IRC0_IRQVA90  /*@bfrg@*/

#define IRC0_IRQVA91	(IRC0.unIRQVA91.u32Register)  /*@rg@*/
#define IRC0_IRQVA91_IRQVA	IRC0_IRQVA91  /*@bfrg@*/

#define IRC0_IRQVA92	(IRC0.unIRQVA92.u32Register)  /*@rg@*/
#define IRC0_IRQVA92_IRQVA	IRC0_IRQVA92  /*@bfrg@*/

#define IRC0_IRQVA93	(IRC0.unIRQVA93.u32Register)  /*@rg@*/
#define IRC0_IRQVA93_IRQVA	IRC0_IRQVA93  /*@bfrg@*/

#define IRC0_IRQVA94	(IRC0.unIRQVA94.u32Register)  /*@rg@*/
#define IRC0_IRQVA94_IRQVA	IRC0_IRQVA94  /*@bfrg@*/

#define IRC0_IRQVA95	(IRC0.unIRQVA95.u32Register)  /*@rg@*/
#define IRC0_IRQVA95_IRQVA	IRC0_IRQVA95  /*@bfrg@*/

#define IRC0_IRQVA96	(IRC0.unIRQVA96.u32Register)  /*@rg@*/
#define IRC0_IRQVA96_IRQVA	IRC0_IRQVA96  /*@bfrg@*/

#define IRC0_IRQVA97	(IRC0.unIRQVA97.u32Register)  /*@rg@*/
#define IRC0_IRQVA97_IRQVA	IRC0_IRQVA97  /*@bfrg@*/

#define IRC0_IRQVA98	(IRC0.unIRQVA98.u32Register)  /*@rg@*/
#define IRC0_IRQVA98_IRQVA	IRC0_IRQVA98  /*@bfrg@*/

#define IRC0_IRQVA99	(IRC0.unIRQVA99.u32Register)  /*@rg@*/
#define IRC0_IRQVA99_IRQVA	IRC0_IRQVA99  /*@bfrg@*/

#define IRC0_IRQVA100	(IRC0.unIRQVA100.u32Register)  /*@rg@*/
#define IRC0_IRQVA100_IRQVA	IRC0_IRQVA100  /*@bfrg@*/

#define IRC0_IRQVA101	(IRC0.unIRQVA101.u32Register)  /*@rg@*/
#define IRC0_IRQVA101_IRQVA	IRC0_IRQVA101  /*@bfrg@*/

#define IRC0_IRQVA102	(IRC0.unIRQVA102.u32Register)  /*@rg@*/
#define IRC0_IRQVA102_IRQVA	IRC0_IRQVA102  /*@bfrg@*/

#define IRC0_IRQVA103	(IRC0.unIRQVA103.u32Register)  /*@rg@*/
#define IRC0_IRQVA103_IRQVA	IRC0_IRQVA103  /*@bfrg@*/

#define IRC0_IRQVA104	(IRC0.unIRQVA104.u32Register)  /*@rg@*/
#define IRC0_IRQVA104_IRQVA	IRC0_IRQVA104  /*@bfrg@*/

#define IRC0_IRQVA105	(IRC0.unIRQVA105.u32Register)  /*@rg@*/
#define IRC0_IRQVA105_IRQVA	IRC0_IRQVA105  /*@bfrg@*/

#define IRC0_IRQVA106	(IRC0.unIRQVA106.u32Register)  /*@rg@*/
#define IRC0_IRQVA106_IRQVA	IRC0_IRQVA106  /*@bfrg@*/

#define IRC0_IRQVA107	(IRC0.unIRQVA107.u32Register)  /*@rg@*/
#define IRC0_IRQVA107_IRQVA	IRC0_IRQVA107  /*@bfrg@*/

#define IRC0_IRQVA108	(IRC0.unIRQVA108.u32Register)  /*@rg@*/
#define IRC0_IRQVA108_IRQVA	IRC0_IRQVA108  /*@bfrg@*/

#define IRC0_IRQVA109	(IRC0.unIRQVA109.u32Register)  /*@rg@*/
#define IRC0_IRQVA109_IRQVA	IRC0_IRQVA109  /*@bfrg@*/

#define IRC0_IRQVA110	(IRC0.unIRQVA110.u32Register)  /*@rg@*/
#define IRC0_IRQVA110_IRQVA	IRC0_IRQVA110  /*@bfrg@*/

#define IRC0_IRQVA111	(IRC0.unIRQVA111.u32Register)  /*@rg@*/
#define IRC0_IRQVA111_IRQVA	IRC0_IRQVA111  /*@bfrg@*/

#define IRC0_IRQVA112	(IRC0.unIRQVA112.u32Register)  /*@rg@*/
#define IRC0_IRQVA112_IRQVA	IRC0_IRQVA112  /*@bfrg@*/

#define IRC0_IRQVA113	(IRC0.unIRQVA113.u32Register)  /*@rg@*/
#define IRC0_IRQVA113_IRQVA	IRC0_IRQVA113  /*@bfrg@*/

#define IRC0_IRQVA114	(IRC0.unIRQVA114.u32Register)  /*@rg@*/
#define IRC0_IRQVA114_IRQVA	IRC0_IRQVA114  /*@bfrg@*/

#define IRC0_IRQVA115	(IRC0.unIRQVA115.u32Register)  /*@rg@*/
#define IRC0_IRQVA115_IRQVA	IRC0_IRQVA115  /*@bfrg@*/

#define IRC0_IRQVA116	(IRC0.unIRQVA116.u32Register)  /*@rg@*/
#define IRC0_IRQVA116_IRQVA	IRC0_IRQVA116  /*@bfrg@*/

#define IRC0_IRQVA117	(IRC0.unIRQVA117.u32Register)  /*@rg@*/
#define IRC0_IRQVA117_IRQVA	IRC0_IRQVA117  /*@bfrg@*/

#define IRC0_IRQVA118	(IRC0.unIRQVA118.u32Register)  /*@rg@*/
#define IRC0_IRQVA118_IRQVA	IRC0_IRQVA118  /*@bfrg@*/

#define IRC0_IRQVA119	(IRC0.unIRQVA119.u32Register)  /*@rg@*/
#define IRC0_IRQVA119_IRQVA	IRC0_IRQVA119  /*@bfrg@*/

#define IRC0_IRQVA120	(IRC0.unIRQVA120.u32Register)  /*@rg@*/
#define IRC0_IRQVA120_IRQVA	IRC0_IRQVA120  /*@bfrg@*/

#define IRC0_IRQVA121	(IRC0.unIRQVA121.u32Register)  /*@rg@*/
#define IRC0_IRQVA121_IRQVA	IRC0_IRQVA121  /*@bfrg@*/

#define IRC0_IRQVA122	(IRC0.unIRQVA122.u32Register)  /*@rg@*/
#define IRC0_IRQVA122_IRQVA	IRC0_IRQVA122  /*@bfrg@*/

#define IRC0_IRQVA123	(IRC0.unIRQVA123.u32Register)  /*@rg@*/
#define IRC0_IRQVA123_IRQVA	IRC0_IRQVA123  /*@bfrg@*/

#define IRC0_IRQVA124	(IRC0.unIRQVA124.u32Register)  /*@rg@*/
#define IRC0_IRQVA124_IRQVA	IRC0_IRQVA124  /*@bfrg@*/

#define IRC0_IRQVA125	(IRC0.unIRQVA125.u32Register)  /*@rg@*/
#define IRC0_IRQVA125_IRQVA	IRC0_IRQVA125  /*@bfrg@*/

#define IRC0_IRQVA126	(IRC0.unIRQVA126.u32Register)  /*@rg@*/
#define IRC0_IRQVA126_IRQVA	IRC0_IRQVA126  /*@bfrg@*/

#define IRC0_IRQVA127	(IRC0.unIRQVA127.u32Register)  /*@rg@*/
#define IRC0_IRQVA127_IRQVA	IRC0_IRQVA127  /*@bfrg@*/

#define IRC0_IRQVA128	(IRC0.unIRQVA128.u32Register)  /*@rg@*/
#define IRC0_IRQVA128_IRQVA	IRC0_IRQVA128  /*@bfrg@*/

#define IRC0_IRQVA129	(IRC0.unIRQVA129.u32Register)  /*@rg@*/
#define IRC0_IRQVA129_IRQVA	IRC0_IRQVA129  /*@bfrg@*/

#define IRC0_IRQVA130	(IRC0.unIRQVA130.u32Register)  /*@rg@*/
#define IRC0_IRQVA130_IRQVA	IRC0_IRQVA130  /*@bfrg@*/

#define IRC0_IRQVA131	(IRC0.unIRQVA131.u32Register)  /*@rg@*/
#define IRC0_IRQVA131_IRQVA	IRC0_IRQVA131  /*@bfrg@*/

#define IRC0_IRQVA132	(IRC0.unIRQVA132.u32Register)  /*@rg@*/
#define IRC0_IRQVA132_IRQVA	IRC0_IRQVA132  /*@bfrg@*/

#define IRC0_IRQVA133	(IRC0.unIRQVA133.u32Register)  /*@rg@*/
#define IRC0_IRQVA133_IRQVA	IRC0_IRQVA133  /*@bfrg@*/

#define IRC0_IRQVA134	(IRC0.unIRQVA134.u32Register)  /*@rg@*/
#define IRC0_IRQVA134_IRQVA	IRC0_IRQVA134  /*@bfrg@*/

#define IRC0_IRQVA135	(IRC0.unIRQVA135.u32Register)  /*@rg@*/
#define IRC0_IRQVA135_IRQVA	IRC0_IRQVA135  /*@bfrg@*/

#define IRC0_IRQVA136	(IRC0.unIRQVA136.u32Register)  /*@rg@*/
#define IRC0_IRQVA136_IRQVA	IRC0_IRQVA136  /*@bfrg@*/

#define IRC0_IRQVA137	(IRC0.unIRQVA137.u32Register)  /*@rg@*/
#define IRC0_IRQVA137_IRQVA	IRC0_IRQVA137  /*@bfrg@*/

#define IRC0_IRQVA138	(IRC0.unIRQVA138.u32Register)  /*@rg@*/
#define IRC0_IRQVA138_IRQVA	IRC0_IRQVA138  /*@bfrg@*/

#define IRC0_IRQVA139	(IRC0.unIRQVA139.u32Register)  /*@rg@*/
#define IRC0_IRQVA139_IRQVA	IRC0_IRQVA139  /*@bfrg@*/

#define IRC0_IRQVA140	(IRC0.unIRQVA140.u32Register)  /*@rg@*/
#define IRC0_IRQVA140_IRQVA	IRC0_IRQVA140  /*@bfrg@*/

#define IRC0_IRQVA141	(IRC0.unIRQVA141.u32Register)  /*@rg@*/
#define IRC0_IRQVA141_IRQVA	IRC0_IRQVA141  /*@bfrg@*/

#define IRC0_IRQVA142	(IRC0.unIRQVA142.u32Register)  /*@rg@*/
#define IRC0_IRQVA142_IRQVA	IRC0_IRQVA142  /*@bfrg@*/

#define IRC0_IRQVA143	(IRC0.unIRQVA143.u32Register)  /*@rg@*/
#define IRC0_IRQVA143_IRQVA	IRC0_IRQVA143  /*@bfrg@*/

#define IRC0_IRQVA144	(IRC0.unIRQVA144.u32Register)  /*@rg@*/
#define IRC0_IRQVA144_IRQVA	IRC0_IRQVA144  /*@bfrg@*/

#define IRC0_IRQVA145	(IRC0.unIRQVA145.u32Register)  /*@rg@*/
#define IRC0_IRQVA145_IRQVA	IRC0_IRQVA145  /*@bfrg@*/

#define IRC0_IRQVA146	(IRC0.unIRQVA146.u32Register)  /*@rg@*/
#define IRC0_IRQVA146_IRQVA	IRC0_IRQVA146  /*@bfrg@*/

#define IRC0_IRQVA147	(IRC0.unIRQVA147.u32Register)  /*@rg@*/
#define IRC0_IRQVA147_IRQVA	IRC0_IRQVA147  /*@bfrg@*/

#define IRC0_IRQVA148	(IRC0.unIRQVA148.u32Register)  /*@rg@*/
#define IRC0_IRQVA148_IRQVA	IRC0_IRQVA148  /*@bfrg@*/

#define IRC0_IRQVA149	(IRC0.unIRQVA149.u32Register)  /*@rg@*/
#define IRC0_IRQVA149_IRQVA	IRC0_IRQVA149  /*@bfrg@*/

#define IRC0_IRQVA150	(IRC0.unIRQVA150.u32Register)  /*@rg@*/
#define IRC0_IRQVA150_IRQVA	IRC0_IRQVA150  /*@bfrg@*/

#define IRC0_IRQVA151	(IRC0.unIRQVA151.u32Register)  /*@rg@*/
#define IRC0_IRQVA151_IRQVA	IRC0_IRQVA151  /*@bfrg@*/

#define IRC0_IRQVA152	(IRC0.unIRQVA152.u32Register)  /*@rg@*/
#define IRC0_IRQVA152_IRQVA	IRC0_IRQVA152  /*@bfrg@*/

#define IRC0_IRQVA153	(IRC0.unIRQVA153.u32Register)  /*@rg@*/
#define IRC0_IRQVA153_IRQVA	IRC0_IRQVA153  /*@bfrg@*/

#define IRC0_IRQVA154	(IRC0.unIRQVA154.u32Register)  /*@rg@*/
#define IRC0_IRQVA154_IRQVA	IRC0_IRQVA154  /*@bfrg@*/

#define IRC0_IRQVA155	(IRC0.unIRQVA155.u32Register)  /*@rg@*/
#define IRC0_IRQVA155_IRQVA	IRC0_IRQVA155  /*@bfrg@*/

#define IRC0_IRQVA156	(IRC0.unIRQVA156.u32Register)  /*@rg@*/
#define IRC0_IRQVA156_IRQVA	IRC0_IRQVA156  /*@bfrg@*/

#define IRC0_IRQVA157	(IRC0.unIRQVA157.u32Register)  /*@rg@*/
#define IRC0_IRQVA157_IRQVA	IRC0_IRQVA157  /*@bfrg@*/

#define IRC0_IRQVA158	(IRC0.unIRQVA158.u32Register)  /*@rg@*/
#define IRC0_IRQVA158_IRQVA	IRC0_IRQVA158  /*@bfrg@*/

#define IRC0_IRQVA159	(IRC0.unIRQVA159.u32Register)  /*@rg@*/
#define IRC0_IRQVA159_IRQVA	IRC0_IRQVA159  /*@bfrg@*/

#define IRC0_IRQVA160	(IRC0.unIRQVA160.u32Register)  /*@rg@*/
#define IRC0_IRQVA160_IRQVA	IRC0_IRQVA160  /*@bfrg@*/

#define IRC0_IRQVA161	(IRC0.unIRQVA161.u32Register)  /*@rg@*/
#define IRC0_IRQVA161_IRQVA	IRC0_IRQVA161  /*@bfrg@*/

#define IRC0_IRQVA162	(IRC0.unIRQVA162.u32Register)  /*@rg@*/
#define IRC0_IRQVA162_IRQVA	IRC0_IRQVA162  /*@bfrg@*/

#define IRC0_IRQVA163	(IRC0.unIRQVA163.u32Register)  /*@rg@*/
#define IRC0_IRQVA163_IRQVA	IRC0_IRQVA163  /*@bfrg@*/

#define IRC0_IRQVA164	(IRC0.unIRQVA164.u32Register)  /*@rg@*/
#define IRC0_IRQVA164_IRQVA	IRC0_IRQVA164  /*@bfrg@*/

#define IRC0_IRQVA165	(IRC0.unIRQVA165.u32Register)  /*@rg@*/
#define IRC0_IRQVA165_IRQVA	IRC0_IRQVA165  /*@bfrg@*/

#define IRC0_IRQVA166	(IRC0.unIRQVA166.u32Register)  /*@rg@*/
#define IRC0_IRQVA166_IRQVA	IRC0_IRQVA166  /*@bfrg@*/

#define IRC0_IRQVA167	(IRC0.unIRQVA167.u32Register)  /*@rg@*/
#define IRC0_IRQVA167_IRQVA	IRC0_IRQVA167  /*@bfrg@*/

#define IRC0_IRQVA168	(IRC0.unIRQVA168.u32Register)  /*@rg@*/
#define IRC0_IRQVA168_IRQVA	IRC0_IRQVA168  /*@bfrg@*/

#define IRC0_IRQVA169	(IRC0.unIRQVA169.u32Register)  /*@rg@*/
#define IRC0_IRQVA169_IRQVA	IRC0_IRQVA169  /*@bfrg@*/

#define IRC0_IRQVA170	(IRC0.unIRQVA170.u32Register)  /*@rg@*/
#define IRC0_IRQVA170_IRQVA	IRC0_IRQVA170  /*@bfrg@*/

#define IRC0_IRQVA171	(IRC0.unIRQVA171.u32Register)  /*@rg@*/
#define IRC0_IRQVA171_IRQVA	IRC0_IRQVA171  /*@bfrg@*/

#define IRC0_IRQVA172	(IRC0.unIRQVA172.u32Register)  /*@rg@*/
#define IRC0_IRQVA172_IRQVA	IRC0_IRQVA172  /*@bfrg@*/

#define IRC0_IRQVA173	(IRC0.unIRQVA173.u32Register)  /*@rg@*/
#define IRC0_IRQVA173_IRQVA	IRC0_IRQVA173  /*@bfrg@*/

#define IRC0_IRQVA174	(IRC0.unIRQVA174.u32Register)  /*@rg@*/
#define IRC0_IRQVA174_IRQVA	IRC0_IRQVA174  /*@bfrg@*/

#define IRC0_IRQVA175	(IRC0.unIRQVA175.u32Register)  /*@rg@*/
#define IRC0_IRQVA175_IRQVA	IRC0_IRQVA175  /*@bfrg@*/

#define IRC0_IRQVA176	(IRC0.unIRQVA176.u32Register)  /*@rg@*/
#define IRC0_IRQVA176_IRQVA	IRC0_IRQVA176  /*@bfrg@*/

#define IRC0_IRQVA177	(IRC0.unIRQVA177.u32Register)  /*@rg@*/
#define IRC0_IRQVA177_IRQVA	IRC0_IRQVA177  /*@bfrg@*/

#define IRC0_IRQVA178	(IRC0.unIRQVA178.u32Register)  /*@rg@*/
#define IRC0_IRQVA178_IRQVA	IRC0_IRQVA178  /*@bfrg@*/

#define IRC0_IRQVA179	(IRC0.unIRQVA179.u32Register)  /*@rg@*/
#define IRC0_IRQVA179_IRQVA	IRC0_IRQVA179  /*@bfrg@*/

#define IRC0_IRQVA180	(IRC0.unIRQVA180.u32Register)  /*@rg@*/
#define IRC0_IRQVA180_IRQVA	IRC0_IRQVA180  /*@bfrg@*/

#define IRC0_IRQVA181	(IRC0.unIRQVA181.u32Register)  /*@rg@*/
#define IRC0_IRQVA181_IRQVA	IRC0_IRQVA181  /*@bfrg@*/

#define IRC0_IRQVA182	(IRC0.unIRQVA182.u32Register)  /*@rg@*/
#define IRC0_IRQVA182_IRQVA	IRC0_IRQVA182  /*@bfrg@*/

#define IRC0_IRQVA183	(IRC0.unIRQVA183.u32Register)  /*@rg@*/
#define IRC0_IRQVA183_IRQVA	IRC0_IRQVA183  /*@bfrg@*/

#define IRC0_IRQVA184	(IRC0.unIRQVA184.u32Register)  /*@rg@*/
#define IRC0_IRQVA184_IRQVA	IRC0_IRQVA184  /*@bfrg@*/

#define IRC0_IRQVA185	(IRC0.unIRQVA185.u32Register)  /*@rg@*/
#define IRC0_IRQVA185_IRQVA	IRC0_IRQVA185  /*@bfrg@*/

#define IRC0_IRQVA186	(IRC0.unIRQVA186.u32Register)  /*@rg@*/
#define IRC0_IRQVA186_IRQVA	IRC0_IRQVA186  /*@bfrg@*/

#define IRC0_IRQVA187	(IRC0.unIRQVA187.u32Register)  /*@rg@*/
#define IRC0_IRQVA187_IRQVA	IRC0_IRQVA187  /*@bfrg@*/

#define IRC0_IRQVA188	(IRC0.unIRQVA188.u32Register)  /*@rg@*/
#define IRC0_IRQVA188_IRQVA	IRC0_IRQVA188  /*@bfrg@*/

#define IRC0_IRQVA189	(IRC0.unIRQVA189.u32Register)  /*@rg@*/
#define IRC0_IRQVA189_IRQVA	IRC0_IRQVA189  /*@bfrg@*/

#define IRC0_IRQVA190	(IRC0.unIRQVA190.u32Register)  /*@rg@*/
#define IRC0_IRQVA190_IRQVA	IRC0_IRQVA190  /*@bfrg@*/

#define IRC0_IRQVA191	(IRC0.unIRQVA191.u32Register)  /*@rg@*/
#define IRC0_IRQVA191_IRQVA	IRC0_IRQVA191  /*@bfrg@*/

#define IRC0_IRQVA192	(IRC0.unIRQVA192.u32Register)  /*@rg@*/
#define IRC0_IRQVA192_IRQVA	IRC0_IRQVA192  /*@bfrg@*/

#define IRC0_IRQVA193	(IRC0.unIRQVA193.u32Register)  /*@rg@*/
#define IRC0_IRQVA193_IRQVA	IRC0_IRQVA193  /*@bfrg@*/

#define IRC0_IRQVA194	(IRC0.unIRQVA194.u32Register)  /*@rg@*/
#define IRC0_IRQVA194_IRQVA	IRC0_IRQVA194  /*@bfrg@*/

#define IRC0_IRQVA195	(IRC0.unIRQVA195.u32Register)  /*@rg@*/
#define IRC0_IRQVA195_IRQVA	IRC0_IRQVA195  /*@bfrg@*/

#define IRC0_IRQVA196	(IRC0.unIRQVA196.u32Register)  /*@rg@*/
#define IRC0_IRQVA196_IRQVA	IRC0_IRQVA196  /*@bfrg@*/

#define IRC0_IRQVA197	(IRC0.unIRQVA197.u32Register)  /*@rg@*/
#define IRC0_IRQVA197_IRQVA	IRC0_IRQVA197  /*@bfrg@*/

#define IRC0_IRQVA198	(IRC0.unIRQVA198.u32Register)  /*@rg@*/
#define IRC0_IRQVA198_IRQVA	IRC0_IRQVA198  /*@bfrg@*/

#define IRC0_IRQVA199	(IRC0.unIRQVA199.u32Register)  /*@rg@*/
#define IRC0_IRQVA199_IRQVA	IRC0_IRQVA199  /*@bfrg@*/

#define IRC0_IRQVA200	(IRC0.unIRQVA200.u32Register)  /*@rg@*/
#define IRC0_IRQVA200_IRQVA	IRC0_IRQVA200  /*@bfrg@*/

#define IRC0_IRQVA201	(IRC0.unIRQVA201.u32Register)  /*@rg@*/
#define IRC0_IRQVA201_IRQVA	IRC0_IRQVA201  /*@bfrg@*/

#define IRC0_IRQVA202	(IRC0.unIRQVA202.u32Register)  /*@rg@*/
#define IRC0_IRQVA202_IRQVA	IRC0_IRQVA202  /*@bfrg@*/

#define IRC0_IRQVA203	(IRC0.unIRQVA203.u32Register)  /*@rg@*/
#define IRC0_IRQVA203_IRQVA	IRC0_IRQVA203  /*@bfrg@*/

#define IRC0_IRQVA204	(IRC0.unIRQVA204.u32Register)  /*@rg@*/
#define IRC0_IRQVA204_IRQVA	IRC0_IRQVA204  /*@bfrg@*/

#define IRC0_IRQVA205	(IRC0.unIRQVA205.u32Register)  /*@rg@*/
#define IRC0_IRQVA205_IRQVA	IRC0_IRQVA205  /*@bfrg@*/

#define IRC0_IRQVA206	(IRC0.unIRQVA206.u32Register)  /*@rg@*/
#define IRC0_IRQVA206_IRQVA	IRC0_IRQVA206  /*@bfrg@*/

#define IRC0_IRQVA207	(IRC0.unIRQVA207.u32Register)  /*@rg@*/
#define IRC0_IRQVA207_IRQVA	IRC0_IRQVA207  /*@bfrg@*/

#define IRC0_IRQVA208	(IRC0.unIRQVA208.u32Register)  /*@rg@*/
#define IRC0_IRQVA208_IRQVA	IRC0_IRQVA208  /*@bfrg@*/

#define IRC0_IRQVA209	(IRC0.unIRQVA209.u32Register)  /*@rg@*/
#define IRC0_IRQVA209_IRQVA	IRC0_IRQVA209  /*@bfrg@*/

#define IRC0_IRQVA210	(IRC0.unIRQVA210.u32Register)  /*@rg@*/
#define IRC0_IRQVA210_IRQVA	IRC0_IRQVA210  /*@bfrg@*/

#define IRC0_IRQVA211	(IRC0.unIRQVA211.u32Register)  /*@rg@*/
#define IRC0_IRQVA211_IRQVA	IRC0_IRQVA211  /*@bfrg@*/

#define IRC0_IRQVA212	(IRC0.unIRQVA212.u32Register)  /*@rg@*/
#define IRC0_IRQVA212_IRQVA	IRC0_IRQVA212  /*@bfrg@*/

#define IRC0_IRQVA213	(IRC0.unIRQVA213.u32Register)  /*@rg@*/
#define IRC0_IRQVA213_IRQVA	IRC0_IRQVA213  /*@bfrg@*/

#define IRC0_IRQVA214	(IRC0.unIRQVA214.u32Register)  /*@rg@*/
#define IRC0_IRQVA214_IRQVA	IRC0_IRQVA214  /*@bfrg@*/

#define IRC0_IRQVA215	(IRC0.unIRQVA215.u32Register)  /*@rg@*/
#define IRC0_IRQVA215_IRQVA	IRC0_IRQVA215  /*@bfrg@*/

#define IRC0_IRQVA216	(IRC0.unIRQVA216.u32Register)  /*@rg@*/
#define IRC0_IRQVA216_IRQVA	IRC0_IRQVA216  /*@bfrg@*/

#define IRC0_IRQVA217	(IRC0.unIRQVA217.u32Register)  /*@rg@*/
#define IRC0_IRQVA217_IRQVA	IRC0_IRQVA217  /*@bfrg@*/

#define IRC0_IRQVA218	(IRC0.unIRQVA218.u32Register)  /*@rg@*/
#define IRC0_IRQVA218_IRQVA	IRC0_IRQVA218  /*@bfrg@*/

#define IRC0_IRQVA219	(IRC0.unIRQVA219.u32Register)  /*@rg@*/
#define IRC0_IRQVA219_IRQVA	IRC0_IRQVA219  /*@bfrg@*/

#define IRC0_IRQVA220	(IRC0.unIRQVA220.u32Register)  /*@rg@*/
#define IRC0_IRQVA220_IRQVA	IRC0_IRQVA220  /*@bfrg@*/

#define IRC0_IRQVA221	(IRC0.unIRQVA221.u32Register)  /*@rg@*/
#define IRC0_IRQVA221_IRQVA	IRC0_IRQVA221  /*@bfrg@*/

#define IRC0_IRQVA222	(IRC0.unIRQVA222.u32Register)  /*@rg@*/
#define IRC0_IRQVA222_IRQVA	IRC0_IRQVA222  /*@bfrg@*/

#define IRC0_IRQVA223	(IRC0.unIRQVA223.u32Register)  /*@rg@*/
#define IRC0_IRQVA223_IRQVA	IRC0_IRQVA223  /*@bfrg@*/

#define IRC0_IRQVA224	(IRC0.unIRQVA224.u32Register)  /*@rg@*/
#define IRC0_IRQVA224_IRQVA	IRC0_IRQVA224  /*@bfrg@*/

#define IRC0_IRQVA225	(IRC0.unIRQVA225.u32Register)  /*@rg@*/
#define IRC0_IRQVA225_IRQVA	IRC0_IRQVA225  /*@bfrg@*/

#define IRC0_IRQVA226	(IRC0.unIRQVA226.u32Register)  /*@rg@*/
#define IRC0_IRQVA226_IRQVA	IRC0_IRQVA226  /*@bfrg@*/

#define IRC0_IRQVA227	(IRC0.unIRQVA227.u32Register)  /*@rg@*/
#define IRC0_IRQVA227_IRQVA	IRC0_IRQVA227  /*@bfrg@*/

#define IRC0_IRQVA228	(IRC0.unIRQVA228.u32Register)  /*@rg@*/
#define IRC0_IRQVA228_IRQVA	IRC0_IRQVA228  /*@bfrg@*/

#define IRC0_IRQVA229	(IRC0.unIRQVA229.u32Register)  /*@rg@*/
#define IRC0_IRQVA229_IRQVA	IRC0_IRQVA229  /*@bfrg@*/

#define IRC0_IRQVA230	(IRC0.unIRQVA230.u32Register)  /*@rg@*/
#define IRC0_IRQVA230_IRQVA	IRC0_IRQVA230  /*@bfrg@*/

#define IRC0_IRQVA231	(IRC0.unIRQVA231.u32Register)  /*@rg@*/
#define IRC0_IRQVA231_IRQVA	IRC0_IRQVA231  /*@bfrg@*/

#define IRC0_IRQVA232	(IRC0.unIRQVA232.u32Register)  /*@rg@*/
#define IRC0_IRQVA232_IRQVA	IRC0_IRQVA232  /*@bfrg@*/

#define IRC0_IRQVA233	(IRC0.unIRQVA233.u32Register)  /*@rg@*/
#define IRC0_IRQVA233_IRQVA	IRC0_IRQVA233  /*@bfrg@*/

#define IRC0_IRQVA234	(IRC0.unIRQVA234.u32Register)  /*@rg@*/
#define IRC0_IRQVA234_IRQVA	IRC0_IRQVA234  /*@bfrg@*/

#define IRC0_IRQVA235	(IRC0.unIRQVA235.u32Register)  /*@rg@*/
#define IRC0_IRQVA235_IRQVA	IRC0_IRQVA235  /*@bfrg@*/

#define IRC0_IRQVA236	(IRC0.unIRQVA236.u32Register)  /*@rg@*/
#define IRC0_IRQVA236_IRQVA	IRC0_IRQVA236  /*@bfrg@*/

#define IRC0_IRQVA237	(IRC0.unIRQVA237.u32Register)  /*@rg@*/
#define IRC0_IRQVA237_IRQVA	IRC0_IRQVA237  /*@bfrg@*/

#define IRC0_IRQVA238	(IRC0.unIRQVA238.u32Register)  /*@rg@*/
#define IRC0_IRQVA238_IRQVA	IRC0_IRQVA238  /*@bfrg@*/

#define IRC0_IRQVA239	(IRC0.unIRQVA239.u32Register)  /*@rg@*/
#define IRC0_IRQVA239_IRQVA	IRC0_IRQVA239  /*@bfrg@*/

#define IRC0_IRQVA240	(IRC0.unIRQVA240.u32Register)  /*@rg@*/
#define IRC0_IRQVA240_IRQVA	IRC0_IRQVA240  /*@bfrg@*/

#define IRC0_IRQVA241	(IRC0.unIRQVA241.u32Register)  /*@rg@*/
#define IRC0_IRQVA241_IRQVA	IRC0_IRQVA241  /*@bfrg@*/

#define IRC0_IRQVA242	(IRC0.unIRQVA242.u32Register)  /*@rg@*/
#define IRC0_IRQVA242_IRQVA	IRC0_IRQVA242  /*@bfrg@*/

#define IRC0_IRQVA243	(IRC0.unIRQVA243.u32Register)  /*@rg@*/
#define IRC0_IRQVA243_IRQVA	IRC0_IRQVA243  /*@bfrg@*/

#define IRC0_IRQVA244	(IRC0.unIRQVA244.u32Register)  /*@rg@*/
#define IRC0_IRQVA244_IRQVA	IRC0_IRQVA244  /*@bfrg@*/

#define IRC0_IRQVA245	(IRC0.unIRQVA245.u32Register)  /*@rg@*/
#define IRC0_IRQVA245_IRQVA	IRC0_IRQVA245  /*@bfrg@*/

#define IRC0_IRQVA246	(IRC0.unIRQVA246.u32Register)  /*@rg@*/
#define IRC0_IRQVA246_IRQVA	IRC0_IRQVA246  /*@bfrg@*/

#define IRC0_IRQVA247	(IRC0.unIRQVA247.u32Register)  /*@rg@*/
#define IRC0_IRQVA247_IRQVA	IRC0_IRQVA247  /*@bfrg@*/

#define IRC0_IRQVA248	(IRC0.unIRQVA248.u32Register)  /*@rg@*/
#define IRC0_IRQVA248_IRQVA	IRC0_IRQVA248  /*@bfrg@*/

#define IRC0_IRQVA249	(IRC0.unIRQVA249.u32Register)  /*@rg@*/
#define IRC0_IRQVA249_IRQVA	IRC0_IRQVA249  /*@bfrg@*/

#define IRC0_IRQVA250	(IRC0.unIRQVA250.u32Register)  /*@rg@*/
#define IRC0_IRQVA250_IRQVA	IRC0_IRQVA250  /*@bfrg@*/

#define IRC0_IRQVA251	(IRC0.unIRQVA251.u32Register)  /*@rg@*/
#define IRC0_IRQVA251_IRQVA	IRC0_IRQVA251  /*@bfrg@*/

#define IRC0_IRQVA252	(IRC0.unIRQVA252.u32Register)  /*@rg@*/
#define IRC0_IRQVA252_IRQVA	IRC0_IRQVA252  /*@bfrg@*/

#define IRC0_IRQVA253	(IRC0.unIRQVA253.u32Register)  /*@rg@*/
#define IRC0_IRQVA253_IRQVA	IRC0_IRQVA253  /*@bfrg@*/

#define IRC0_IRQVA254	(IRC0.unIRQVA254.u32Register)  /*@rg@*/
#define IRC0_IRQVA254_IRQVA	IRC0_IRQVA254  /*@bfrg@*/

#define IRC0_IRQVA255	(IRC0.unIRQVA255.u32Register)  /*@rg@*/
#define IRC0_IRQVA255_IRQVA	IRC0_IRQVA255  /*@bfrg@*/

#define IRC0_IRQVA256	(IRC0.unIRQVA256.u32Register)  /*@rg@*/
#define IRC0_IRQVA256_IRQVA	IRC0_IRQVA256  /*@bfrg@*/

#define IRC0_IRQVA257	(IRC0.unIRQVA257.u32Register)  /*@rg@*/
#define IRC0_IRQVA257_IRQVA	IRC0_IRQVA257  /*@bfrg@*/

#define IRC0_IRQVA258	(IRC0.unIRQVA258.u32Register)  /*@rg@*/
#define IRC0_IRQVA258_IRQVA	IRC0_IRQVA258  /*@bfrg@*/

#define IRC0_IRQVA259	(IRC0.unIRQVA259.u32Register)  /*@rg@*/
#define IRC0_IRQVA259_IRQVA	IRC0_IRQVA259  /*@bfrg@*/

#define IRC0_IRQVA260	(IRC0.unIRQVA260.u32Register)  /*@rg@*/
#define IRC0_IRQVA260_IRQVA	IRC0_IRQVA260  /*@bfrg@*/

#define IRC0_IRQVA261	(IRC0.unIRQVA261.u32Register)  /*@rg@*/
#define IRC0_IRQVA261_IRQVA	IRC0_IRQVA261  /*@bfrg@*/

#define IRC0_IRQVA262	(IRC0.unIRQVA262.u32Register)  /*@rg@*/
#define IRC0_IRQVA262_IRQVA	IRC0_IRQVA262  /*@bfrg@*/

#define IRC0_IRQVA263	(IRC0.unIRQVA263.u32Register)  /*@rg@*/
#define IRC0_IRQVA263_IRQVA	IRC0_IRQVA263  /*@bfrg@*/

#define IRC0_IRQVA264	(IRC0.unIRQVA264.u32Register)  /*@rg@*/
#define IRC0_IRQVA264_IRQVA	IRC0_IRQVA264  /*@bfrg@*/

#define IRC0_IRQVA265	(IRC0.unIRQVA265.u32Register)  /*@rg@*/
#define IRC0_IRQVA265_IRQVA	IRC0_IRQVA265  /*@bfrg@*/

#define IRC0_IRQVA266	(IRC0.unIRQVA266.u32Register)  /*@rg@*/
#define IRC0_IRQVA266_IRQVA	IRC0_IRQVA266  /*@bfrg@*/

#define IRC0_IRQVA267	(IRC0.unIRQVA267.u32Register)  /*@rg@*/
#define IRC0_IRQVA267_IRQVA	IRC0_IRQVA267  /*@bfrg@*/

#define IRC0_IRQVA268	(IRC0.unIRQVA268.u32Register)  /*@rg@*/
#define IRC0_IRQVA268_IRQVA	IRC0_IRQVA268  /*@bfrg@*/

#define IRC0_IRQVA269	(IRC0.unIRQVA269.u32Register)  /*@rg@*/
#define IRC0_IRQVA269_IRQVA	IRC0_IRQVA269  /*@bfrg@*/

#define IRC0_IRQVA270	(IRC0.unIRQVA270.u32Register)  /*@rg@*/
#define IRC0_IRQVA270_IRQVA	IRC0_IRQVA270  /*@bfrg@*/

#define IRC0_IRQVA271	(IRC0.unIRQVA271.u32Register)  /*@rg@*/
#define IRC0_IRQVA271_IRQVA	IRC0_IRQVA271  /*@bfrg@*/

#define IRC0_IRQVA272	(IRC0.unIRQVA272.u32Register)  /*@rg@*/
#define IRC0_IRQVA272_IRQVA	IRC0_IRQVA272  /*@bfrg@*/

#define IRC0_IRQVA273	(IRC0.unIRQVA273.u32Register)  /*@rg@*/
#define IRC0_IRQVA273_IRQVA	IRC0_IRQVA273  /*@bfrg@*/

#define IRC0_IRQVA274	(IRC0.unIRQVA274.u32Register)  /*@rg@*/
#define IRC0_IRQVA274_IRQVA	IRC0_IRQVA274  /*@bfrg@*/

#define IRC0_IRQVA275	(IRC0.unIRQVA275.u32Register)  /*@rg@*/
#define IRC0_IRQVA275_IRQVA	IRC0_IRQVA275  /*@bfrg@*/

#define IRC0_IRQVA276	(IRC0.unIRQVA276.u32Register)  /*@rg@*/
#define IRC0_IRQVA276_IRQVA	IRC0_IRQVA276  /*@bfrg@*/

#define IRC0_IRQVA277	(IRC0.unIRQVA277.u32Register)  /*@rg@*/
#define IRC0_IRQVA277_IRQVA	IRC0_IRQVA277  /*@bfrg@*/

#define IRC0_IRQVA278	(IRC0.unIRQVA278.u32Register)  /*@rg@*/
#define IRC0_IRQVA278_IRQVA	IRC0_IRQVA278  /*@bfrg@*/

#define IRC0_IRQVA279	(IRC0.unIRQVA279.u32Register)  /*@rg@*/
#define IRC0_IRQVA279_IRQVA	IRC0_IRQVA279  /*@bfrg@*/

#define IRC0_IRQVA280	(IRC0.unIRQVA280.u32Register)  /*@rg@*/
#define IRC0_IRQVA280_IRQVA	IRC0_IRQVA280  /*@bfrg@*/

#define IRC0_IRQVA281	(IRC0.unIRQVA281.u32Register)  /*@rg@*/
#define IRC0_IRQVA281_IRQVA	IRC0_IRQVA281  /*@bfrg@*/

#define IRC0_IRQVA282	(IRC0.unIRQVA282.u32Register)  /*@rg@*/
#define IRC0_IRQVA282_IRQVA	IRC0_IRQVA282  /*@bfrg@*/

#define IRC0_IRQVA283	(IRC0.unIRQVA283.u32Register)  /*@rg@*/
#define IRC0_IRQVA283_IRQVA	IRC0_IRQVA283  /*@bfrg@*/

#define IRC0_IRQVA284	(IRC0.unIRQVA284.u32Register)  /*@rg@*/
#define IRC0_IRQVA284_IRQVA	IRC0_IRQVA284  /*@bfrg@*/

#define IRC0_IRQVA285	(IRC0.unIRQVA285.u32Register)  /*@rg@*/
#define IRC0_IRQVA285_IRQVA	IRC0_IRQVA285  /*@bfrg@*/

#define IRC0_IRQVA286	(IRC0.unIRQVA286.u32Register)  /*@rg@*/
#define IRC0_IRQVA286_IRQVA	IRC0_IRQVA286  /*@bfrg@*/

#define IRC0_IRQVA287	(IRC0.unIRQVA287.u32Register)  /*@rg@*/
#define IRC0_IRQVA287_IRQVA	IRC0_IRQVA287  /*@bfrg@*/

#define IRC0_IRQVA288	(IRC0.unIRQVA288.u32Register)  /*@rg@*/
#define IRC0_IRQVA288_IRQVA	IRC0_IRQVA288  /*@bfrg@*/

#define IRC0_IRQVA289	(IRC0.unIRQVA289.u32Register)  /*@rg@*/
#define IRC0_IRQVA289_IRQVA	IRC0_IRQVA289  /*@bfrg@*/

#define IRC0_IRQVA290	(IRC0.unIRQVA290.u32Register)  /*@rg@*/
#define IRC0_IRQVA290_IRQVA	IRC0_IRQVA290  /*@bfrg@*/

#define IRC0_IRQVA291	(IRC0.unIRQVA291.u32Register)  /*@rg@*/
#define IRC0_IRQVA291_IRQVA	IRC0_IRQVA291  /*@bfrg@*/

#define IRC0_IRQVA292	(IRC0.unIRQVA292.u32Register)  /*@rg@*/
#define IRC0_IRQVA292_IRQVA	IRC0_IRQVA292  /*@bfrg@*/

#define IRC0_IRQVA293	(IRC0.unIRQVA293.u32Register)  /*@rg@*/
#define IRC0_IRQVA293_IRQVA	IRC0_IRQVA293  /*@bfrg@*/

#define IRC0_IRQVA294	(IRC0.unIRQVA294.u32Register)  /*@rg@*/
#define IRC0_IRQVA294_IRQVA	IRC0_IRQVA294  /*@bfrg@*/

#define IRC0_IRQVA295	(IRC0.unIRQVA295.u32Register)  /*@rg@*/
#define IRC0_IRQVA295_IRQVA	IRC0_IRQVA295  /*@bfrg@*/

#define IRC0_IRQVA296	(IRC0.unIRQVA296.u32Register)  /*@rg@*/
#define IRC0_IRQVA296_IRQVA	IRC0_IRQVA296  /*@bfrg@*/

#define IRC0_IRQVA297	(IRC0.unIRQVA297.u32Register)  /*@rg@*/
#define IRC0_IRQVA297_IRQVA	IRC0_IRQVA297  /*@bfrg@*/

#define IRC0_IRQVA298	(IRC0.unIRQVA298.u32Register)  /*@rg@*/
#define IRC0_IRQVA298_IRQVA	IRC0_IRQVA298  /*@bfrg@*/

#define IRC0_IRQVA299	(IRC0.unIRQVA299.u32Register)  /*@rg@*/
#define IRC0_IRQVA299_IRQVA	IRC0_IRQVA299  /*@bfrg@*/

#define IRC0_IRQVA300	(IRC0.unIRQVA300.u32Register)  /*@rg@*/
#define IRC0_IRQVA300_IRQVA	IRC0_IRQVA300  /*@bfrg@*/

#define IRC0_IRQVA301	(IRC0.unIRQVA301.u32Register)  /*@rg@*/
#define IRC0_IRQVA301_IRQVA	IRC0_IRQVA301  /*@bfrg@*/

#define IRC0_IRQVA302	(IRC0.unIRQVA302.u32Register)  /*@rg@*/
#define IRC0_IRQVA302_IRQVA	IRC0_IRQVA302  /*@bfrg@*/

#define IRC0_IRQVA303	(IRC0.unIRQVA303.u32Register)  /*@rg@*/
#define IRC0_IRQVA303_IRQVA	IRC0_IRQVA303  /*@bfrg@*/

#define IRC0_IRQVA304	(IRC0.unIRQVA304.u32Register)  /*@rg@*/
#define IRC0_IRQVA304_IRQVA	IRC0_IRQVA304  /*@bfrg@*/

#define IRC0_IRQVA305	(IRC0.unIRQVA305.u32Register)  /*@rg@*/
#define IRC0_IRQVA305_IRQVA	IRC0_IRQVA305  /*@bfrg@*/

#define IRC0_IRQVA306	(IRC0.unIRQVA306.u32Register)  /*@rg@*/
#define IRC0_IRQVA306_IRQVA	IRC0_IRQVA306  /*@bfrg@*/

#define IRC0_IRQVA307	(IRC0.unIRQVA307.u32Register)  /*@rg@*/
#define IRC0_IRQVA307_IRQVA	IRC0_IRQVA307  /*@bfrg@*/

#define IRC0_IRQVA308	(IRC0.unIRQVA308.u32Register)  /*@rg@*/
#define IRC0_IRQVA308_IRQVA	IRC0_IRQVA308  /*@bfrg@*/

#define IRC0_IRQVA309	(IRC0.unIRQVA309.u32Register)  /*@rg@*/
#define IRC0_IRQVA309_IRQVA	IRC0_IRQVA309  /*@bfrg@*/

#define IRC0_IRQVA310	(IRC0.unIRQVA310.u32Register)  /*@rg@*/
#define IRC0_IRQVA310_IRQVA	IRC0_IRQVA310  /*@bfrg@*/

#define IRC0_IRQVA311	(IRC0.unIRQVA311.u32Register)  /*@rg@*/
#define IRC0_IRQVA311_IRQVA	IRC0_IRQVA311  /*@bfrg@*/

#define IRC0_IRQVA312	(IRC0.unIRQVA312.u32Register)  /*@rg@*/
#define IRC0_IRQVA312_IRQVA	IRC0_IRQVA312  /*@bfrg@*/

#define IRC0_IRQVA313	(IRC0.unIRQVA313.u32Register)  /*@rg@*/
#define IRC0_IRQVA313_IRQVA	IRC0_IRQVA313  /*@bfrg@*/

#define IRC0_IRQVA314	(IRC0.unIRQVA314.u32Register)  /*@rg@*/
#define IRC0_IRQVA314_IRQVA	IRC0_IRQVA314  /*@bfrg@*/

#define IRC0_IRQVA315	(IRC0.unIRQVA315.u32Register)  /*@rg@*/
#define IRC0_IRQVA315_IRQVA	IRC0_IRQVA315  /*@bfrg@*/

#define IRC0_IRQVA316	(IRC0.unIRQVA316.u32Register)  /*@rg@*/
#define IRC0_IRQVA316_IRQVA	IRC0_IRQVA316  /*@bfrg@*/

#define IRC0_IRQVA317	(IRC0.unIRQVA317.u32Register)  /*@rg@*/
#define IRC0_IRQVA317_IRQVA	IRC0_IRQVA317  /*@bfrg@*/

#define IRC0_IRQVA318	(IRC0.unIRQVA318.u32Register)  /*@rg@*/
#define IRC0_IRQVA318_IRQVA	IRC0_IRQVA318  /*@bfrg@*/

#define IRC0_IRQVA319	(IRC0.unIRQVA319.u32Register)  /*@rg@*/
#define IRC0_IRQVA319_IRQVA	IRC0_IRQVA319  /*@bfrg@*/

#define IRC0_IRQVA320	(IRC0.unIRQVA320.u32Register)  /*@rg@*/
#define IRC0_IRQVA320_IRQVA	IRC0_IRQVA320  /*@bfrg@*/

#define IRC0_IRQVA321	(IRC0.unIRQVA321.u32Register)  /*@rg@*/
#define IRC0_IRQVA321_IRQVA	IRC0_IRQVA321  /*@bfrg@*/

#define IRC0_IRQVA322	(IRC0.unIRQVA322.u32Register)  /*@rg@*/
#define IRC0_IRQVA322_IRQVA	IRC0_IRQVA322  /*@bfrg@*/

#define IRC0_IRQVA323	(IRC0.unIRQVA323.u32Register)  /*@rg@*/
#define IRC0_IRQVA323_IRQVA	IRC0_IRQVA323  /*@bfrg@*/

#define IRC0_IRQVA324	(IRC0.unIRQVA324.u32Register)  /*@rg@*/
#define IRC0_IRQVA324_IRQVA	IRC0_IRQVA324  /*@bfrg@*/

#define IRC0_IRQVA325	(IRC0.unIRQVA325.u32Register)  /*@rg@*/
#define IRC0_IRQVA325_IRQVA	IRC0_IRQVA325  /*@bfrg@*/

#define IRC0_IRQVA326	(IRC0.unIRQVA326.u32Register)  /*@rg@*/
#define IRC0_IRQVA326_IRQVA	IRC0_IRQVA326  /*@bfrg@*/

#define IRC0_IRQVA327	(IRC0.unIRQVA327.u32Register)  /*@rg@*/
#define IRC0_IRQVA327_IRQVA	IRC0_IRQVA327  /*@bfrg@*/

#define IRC0_IRQVA328	(IRC0.unIRQVA328.u32Register)  /*@rg@*/
#define IRC0_IRQVA328_IRQVA	IRC0_IRQVA328  /*@bfrg@*/

#define IRC0_IRQVA329	(IRC0.unIRQVA329.u32Register)  /*@rg@*/
#define IRC0_IRQVA329_IRQVA	IRC0_IRQVA329  /*@bfrg@*/

#define IRC0_IRQVA330	(IRC0.unIRQVA330.u32Register)  /*@rg@*/
#define IRC0_IRQVA330_IRQVA	IRC0_IRQVA330  /*@bfrg@*/

#define IRC0_IRQVA331	(IRC0.unIRQVA331.u32Register)  /*@rg@*/
#define IRC0_IRQVA331_IRQVA	IRC0_IRQVA331  /*@bfrg@*/

#define IRC0_IRQVA332	(IRC0.unIRQVA332.u32Register)  /*@rg@*/
#define IRC0_IRQVA332_IRQVA	IRC0_IRQVA332  /*@bfrg@*/

#define IRC0_IRQVA333	(IRC0.unIRQVA333.u32Register)  /*@rg@*/
#define IRC0_IRQVA333_IRQVA	IRC0_IRQVA333  /*@bfrg@*/

#define IRC0_IRQVA334	(IRC0.unIRQVA334.u32Register)  /*@rg@*/
#define IRC0_IRQVA334_IRQVA	IRC0_IRQVA334  /*@bfrg@*/

#define IRC0_IRQVA335	(IRC0.unIRQVA335.u32Register)  /*@rg@*/
#define IRC0_IRQVA335_IRQVA	IRC0_IRQVA335  /*@bfrg@*/

#define IRC0_IRQVA336	(IRC0.unIRQVA336.u32Register)  /*@rg@*/
#define IRC0_IRQVA336_IRQVA	IRC0_IRQVA336  /*@bfrg@*/

#define IRC0_IRQVA337	(IRC0.unIRQVA337.u32Register)  /*@rg@*/
#define IRC0_IRQVA337_IRQVA	IRC0_IRQVA337  /*@bfrg@*/

#define IRC0_IRQVA338	(IRC0.unIRQVA338.u32Register)  /*@rg@*/
#define IRC0_IRQVA338_IRQVA	IRC0_IRQVA338  /*@bfrg@*/

#define IRC0_IRQVA339	(IRC0.unIRQVA339.u32Register)  /*@rg@*/
#define IRC0_IRQVA339_IRQVA	IRC0_IRQVA339  /*@bfrg@*/

#define IRC0_IRQVA340	(IRC0.unIRQVA340.u32Register)  /*@rg@*/
#define IRC0_IRQVA340_IRQVA	IRC0_IRQVA340  /*@bfrg@*/

#define IRC0_IRQVA341	(IRC0.unIRQVA341.u32Register)  /*@rg@*/
#define IRC0_IRQVA341_IRQVA	IRC0_IRQVA341  /*@bfrg@*/

#define IRC0_IRQVA342	(IRC0.unIRQVA342.u32Register)  /*@rg@*/
#define IRC0_IRQVA342_IRQVA	IRC0_IRQVA342  /*@bfrg@*/

#define IRC0_IRQVA343	(IRC0.unIRQVA343.u32Register)  /*@rg@*/
#define IRC0_IRQVA343_IRQVA	IRC0_IRQVA343  /*@bfrg@*/

#define IRC0_IRQVA344	(IRC0.unIRQVA344.u32Register)  /*@rg@*/
#define IRC0_IRQVA344_IRQVA	IRC0_IRQVA344  /*@bfrg@*/

#define IRC0_IRQVA345	(IRC0.unIRQVA345.u32Register)  /*@rg@*/
#define IRC0_IRQVA345_IRQVA	IRC0_IRQVA345  /*@bfrg@*/

#define IRC0_IRQVA346	(IRC0.unIRQVA346.u32Register)  /*@rg@*/
#define IRC0_IRQVA346_IRQVA	IRC0_IRQVA346  /*@bfrg@*/

#define IRC0_IRQVA347	(IRC0.unIRQVA347.u32Register)  /*@rg@*/
#define IRC0_IRQVA347_IRQVA	IRC0_IRQVA347  /*@bfrg@*/

#define IRC0_IRQVA348	(IRC0.unIRQVA348.u32Register)  /*@rg@*/
#define IRC0_IRQVA348_IRQVA	IRC0_IRQVA348  /*@bfrg@*/

#define IRC0_IRQVA349	(IRC0.unIRQVA349.u32Register)  /*@rg@*/
#define IRC0_IRQVA349_IRQVA	IRC0_IRQVA349  /*@bfrg@*/

#define IRC0_IRQVA350	(IRC0.unIRQVA350.u32Register)  /*@rg@*/
#define IRC0_IRQVA350_IRQVA	IRC0_IRQVA350  /*@bfrg@*/

#define IRC0_IRQVA351	(IRC0.unIRQVA351.u32Register)  /*@rg@*/
#define IRC0_IRQVA351_IRQVA	IRC0_IRQVA351  /*@bfrg@*/

#define IRC0_IRQVA352	(IRC0.unIRQVA352.u32Register)  /*@rg@*/
#define IRC0_IRQVA352_IRQVA	IRC0_IRQVA352  /*@bfrg@*/

#define IRC0_IRQVA353	(IRC0.unIRQVA353.u32Register)  /*@rg@*/
#define IRC0_IRQVA353_IRQVA	IRC0_IRQVA353  /*@bfrg@*/

#define IRC0_IRQVA354	(IRC0.unIRQVA354.u32Register)  /*@rg@*/
#define IRC0_IRQVA354_IRQVA	IRC0_IRQVA354  /*@bfrg@*/

#define IRC0_IRQVA355	(IRC0.unIRQVA355.u32Register)  /*@rg@*/
#define IRC0_IRQVA355_IRQVA	IRC0_IRQVA355  /*@bfrg@*/

#define IRC0_IRQVA356	(IRC0.unIRQVA356.u32Register)  /*@rg@*/
#define IRC0_IRQVA356_IRQVA	IRC0_IRQVA356  /*@bfrg@*/

#define IRC0_IRQVA357	(IRC0.unIRQVA357.u32Register)  /*@rg@*/
#define IRC0_IRQVA357_IRQVA	IRC0_IRQVA357  /*@bfrg@*/

#define IRC0_IRQVA358	(IRC0.unIRQVA358.u32Register)  /*@rg@*/
#define IRC0_IRQVA358_IRQVA	IRC0_IRQVA358  /*@bfrg@*/

#define IRC0_IRQVA359	(IRC0.unIRQVA359.u32Register)  /*@rg@*/
#define IRC0_IRQVA359_IRQVA	IRC0_IRQVA359  /*@bfrg@*/

#define IRC0_IRQVA360	(IRC0.unIRQVA360.u32Register)  /*@rg@*/
#define IRC0_IRQVA360_IRQVA	IRC0_IRQVA360  /*@bfrg@*/

#define IRC0_IRQVA361	(IRC0.unIRQVA361.u32Register)  /*@rg@*/
#define IRC0_IRQVA361_IRQVA	IRC0_IRQVA361  /*@bfrg@*/

#define IRC0_IRQVA362	(IRC0.unIRQVA362.u32Register)  /*@rg@*/
#define IRC0_IRQVA362_IRQVA	IRC0_IRQVA362  /*@bfrg@*/

#define IRC0_IRQVA363	(IRC0.unIRQVA363.u32Register)  /*@rg@*/
#define IRC0_IRQVA363_IRQVA	IRC0_IRQVA363  /*@bfrg@*/

#define IRC0_IRQVA364	(IRC0.unIRQVA364.u32Register)  /*@rg@*/
#define IRC0_IRQVA364_IRQVA	IRC0_IRQVA364  /*@bfrg@*/

#define IRC0_IRQVA365	(IRC0.unIRQVA365.u32Register)  /*@rg@*/
#define IRC0_IRQVA365_IRQVA	IRC0_IRQVA365  /*@bfrg@*/

#define IRC0_IRQVA366	(IRC0.unIRQVA366.u32Register)  /*@rg@*/
#define IRC0_IRQVA366_IRQVA	IRC0_IRQVA366  /*@bfrg@*/

#define IRC0_IRQVA367	(IRC0.unIRQVA367.u32Register)  /*@rg@*/
#define IRC0_IRQVA367_IRQVA	IRC0_IRQVA367  /*@bfrg@*/

#define IRC0_IRQVA368	(IRC0.unIRQVA368.u32Register)  /*@rg@*/
#define IRC0_IRQVA368_IRQVA	IRC0_IRQVA368  /*@bfrg@*/

#define IRC0_IRQVA369	(IRC0.unIRQVA369.u32Register)  /*@rg@*/
#define IRC0_IRQVA369_IRQVA	IRC0_IRQVA369  /*@bfrg@*/

#define IRC0_IRQVA370	(IRC0.unIRQVA370.u32Register)  /*@rg@*/
#define IRC0_IRQVA370_IRQVA	IRC0_IRQVA370  /*@bfrg@*/

#define IRC0_IRQVA371	(IRC0.unIRQVA371.u32Register)  /*@rg@*/
#define IRC0_IRQVA371_IRQVA	IRC0_IRQVA371  /*@bfrg@*/

#define IRC0_IRQVA372	(IRC0.unIRQVA372.u32Register)  /*@rg@*/
#define IRC0_IRQVA372_IRQVA	IRC0_IRQVA372  /*@bfrg@*/

#define IRC0_IRQVA373	(IRC0.unIRQVA373.u32Register)  /*@rg@*/
#define IRC0_IRQVA373_IRQVA	IRC0_IRQVA373  /*@bfrg@*/

#define IRC0_IRQVA374	(IRC0.unIRQVA374.u32Register)  /*@rg@*/
#define IRC0_IRQVA374_IRQVA	IRC0_IRQVA374  /*@bfrg@*/

#define IRC0_IRQVA375	(IRC0.unIRQVA375.u32Register)  /*@rg@*/
#define IRC0_IRQVA375_IRQVA	IRC0_IRQVA375  /*@bfrg@*/

#define IRC0_IRQVA376	(IRC0.unIRQVA376.u32Register)  /*@rg@*/
#define IRC0_IRQVA376_IRQVA	IRC0_IRQVA376  /*@bfrg@*/

#define IRC0_IRQVA377	(IRC0.unIRQVA377.u32Register)  /*@rg@*/
#define IRC0_IRQVA377_IRQVA	IRC0_IRQVA377  /*@bfrg@*/

#define IRC0_IRQVA378	(IRC0.unIRQVA378.u32Register)  /*@rg@*/
#define IRC0_IRQVA378_IRQVA	IRC0_IRQVA378  /*@bfrg@*/

#define IRC0_IRQVA379	(IRC0.unIRQVA379.u32Register)  /*@rg@*/
#define IRC0_IRQVA379_IRQVA	IRC0_IRQVA379  /*@bfrg@*/

#define IRC0_IRQVA380	(IRC0.unIRQVA380.u32Register)  /*@rg@*/
#define IRC0_IRQVA380_IRQVA	IRC0_IRQVA380  /*@bfrg@*/

#define IRC0_IRQVA381	(IRC0.unIRQVA381.u32Register)  /*@rg@*/
#define IRC0_IRQVA381_IRQVA	IRC0_IRQVA381  /*@bfrg@*/

#define IRC0_IRQVA382	(IRC0.unIRQVA382.u32Register)  /*@rg@*/
#define IRC0_IRQVA382_IRQVA	IRC0_IRQVA382  /*@bfrg@*/

#define IRC0_IRQVA383	(IRC0.unIRQVA383.u32Register)  /*@rg@*/
#define IRC0_IRQVA383_IRQVA	IRC0_IRQVA383  /*@bfrg@*/

#define IRC0_IRQVA384	(IRC0.unIRQVA384.u32Register)  /*@rg@*/
#define IRC0_IRQVA384_IRQVA	IRC0_IRQVA384  /*@bfrg@*/

#define IRC0_IRQVA385	(IRC0.unIRQVA385.u32Register)  /*@rg@*/
#define IRC0_IRQVA385_IRQVA	IRC0_IRQVA385  /*@bfrg@*/

#define IRC0_IRQVA386	(IRC0.unIRQVA386.u32Register)  /*@rg@*/
#define IRC0_IRQVA386_IRQVA	IRC0_IRQVA386  /*@bfrg@*/

#define IRC0_IRQVA387	(IRC0.unIRQVA387.u32Register)  /*@rg@*/
#define IRC0_IRQVA387_IRQVA	IRC0_IRQVA387  /*@bfrg@*/

#define IRC0_IRQVA388	(IRC0.unIRQVA388.u32Register)  /*@rg@*/
#define IRC0_IRQVA388_IRQVA	IRC0_IRQVA388  /*@bfrg@*/

#define IRC0_IRQVA389	(IRC0.unIRQVA389.u32Register)  /*@rg@*/
#define IRC0_IRQVA389_IRQVA	IRC0_IRQVA389  /*@bfrg@*/

#define IRC0_IRQVA390	(IRC0.unIRQVA390.u32Register)  /*@rg@*/
#define IRC0_IRQVA390_IRQVA	IRC0_IRQVA390  /*@bfrg@*/

#define IRC0_IRQVA391	(IRC0.unIRQVA391.u32Register)  /*@rg@*/
#define IRC0_IRQVA391_IRQVA	IRC0_IRQVA391  /*@bfrg@*/

#define IRC0_IRQVA392	(IRC0.unIRQVA392.u32Register)  /*@rg@*/
#define IRC0_IRQVA392_IRQVA	IRC0_IRQVA392  /*@bfrg@*/

#define IRC0_IRQVA393	(IRC0.unIRQVA393.u32Register)  /*@rg@*/
#define IRC0_IRQVA393_IRQVA	IRC0_IRQVA393  /*@bfrg@*/

#define IRC0_IRQVA394	(IRC0.unIRQVA394.u32Register)  /*@rg@*/
#define IRC0_IRQVA394_IRQVA	IRC0_IRQVA394  /*@bfrg@*/

#define IRC0_IRQVA395	(IRC0.unIRQVA395.u32Register)  /*@rg@*/
#define IRC0_IRQVA395_IRQVA	IRC0_IRQVA395  /*@bfrg@*/

#define IRC0_IRQVA396	(IRC0.unIRQVA396.u32Register)  /*@rg@*/
#define IRC0_IRQVA396_IRQVA	IRC0_IRQVA396  /*@bfrg@*/

#define IRC0_IRQVA397	(IRC0.unIRQVA397.u32Register)  /*@rg@*/
#define IRC0_IRQVA397_IRQVA	IRC0_IRQVA397  /*@bfrg@*/

#define IRC0_IRQVA398	(IRC0.unIRQVA398.u32Register)  /*@rg@*/
#define IRC0_IRQVA398_IRQVA	IRC0_IRQVA398  /*@bfrg@*/

#define IRC0_IRQVA399	(IRC0.unIRQVA399.u32Register)  /*@rg@*/
#define IRC0_IRQVA399_IRQVA	IRC0_IRQVA399  /*@bfrg@*/

#define IRC0_IRQVA400	(IRC0.unIRQVA400.u32Register)  /*@rg@*/
#define IRC0_IRQVA400_IRQVA	IRC0_IRQVA400  /*@bfrg@*/

#define IRC0_IRQVA401	(IRC0.unIRQVA401.u32Register)  /*@rg@*/
#define IRC0_IRQVA401_IRQVA	IRC0_IRQVA401  /*@bfrg@*/

#define IRC0_IRQVA402	(IRC0.unIRQVA402.u32Register)  /*@rg@*/
#define IRC0_IRQVA402_IRQVA	IRC0_IRQVA402  /*@bfrg@*/

#define IRC0_IRQVA403	(IRC0.unIRQVA403.u32Register)  /*@rg@*/
#define IRC0_IRQVA403_IRQVA	IRC0_IRQVA403  /*@bfrg@*/

#define IRC0_IRQVA404	(IRC0.unIRQVA404.u32Register)  /*@rg@*/
#define IRC0_IRQVA404_IRQVA	IRC0_IRQVA404  /*@bfrg@*/

#define IRC0_IRQVA405	(IRC0.unIRQVA405.u32Register)  /*@rg@*/
#define IRC0_IRQVA405_IRQVA	IRC0_IRQVA405  /*@bfrg@*/

#define IRC0_IRQVA406	(IRC0.unIRQVA406.u32Register)  /*@rg@*/
#define IRC0_IRQVA406_IRQVA	IRC0_IRQVA406  /*@bfrg@*/

#define IRC0_IRQVA407	(IRC0.unIRQVA407.u32Register)  /*@rg@*/
#define IRC0_IRQVA407_IRQVA	IRC0_IRQVA407  /*@bfrg@*/

#define IRC0_IRQVA408	(IRC0.unIRQVA408.u32Register)  /*@rg@*/
#define IRC0_IRQVA408_IRQVA	IRC0_IRQVA408  /*@bfrg@*/

#define IRC0_IRQVA409	(IRC0.unIRQVA409.u32Register)  /*@rg@*/
#define IRC0_IRQVA409_IRQVA	IRC0_IRQVA409  /*@bfrg@*/

#define IRC0_IRQVA410	(IRC0.unIRQVA410.u32Register)  /*@rg@*/
#define IRC0_IRQVA410_IRQVA	IRC0_IRQVA410  /*@bfrg@*/

#define IRC0_IRQVA411	(IRC0.unIRQVA411.u32Register)  /*@rg@*/
#define IRC0_IRQVA411_IRQVA	IRC0_IRQVA411  /*@bfrg@*/

#define IRC0_IRQVA412	(IRC0.unIRQVA412.u32Register)  /*@rg@*/
#define IRC0_IRQVA412_IRQVA	IRC0_IRQVA412  /*@bfrg@*/

#define IRC0_IRQVA413	(IRC0.unIRQVA413.u32Register)  /*@rg@*/
#define IRC0_IRQVA413_IRQVA	IRC0_IRQVA413  /*@bfrg@*/

#define IRC0_IRQVA414	(IRC0.unIRQVA414.u32Register)  /*@rg@*/
#define IRC0_IRQVA414_IRQVA	IRC0_IRQVA414  /*@bfrg@*/

#define IRC0_IRQVA415	(IRC0.unIRQVA415.u32Register)  /*@rg@*/
#define IRC0_IRQVA415_IRQVA	IRC0_IRQVA415  /*@bfrg@*/

#define IRC0_IRQVA416	(IRC0.unIRQVA416.u32Register)  /*@rg@*/
#define IRC0_IRQVA416_IRQVA	IRC0_IRQVA416  /*@bfrg@*/

#define IRC0_IRQVA417	(IRC0.unIRQVA417.u32Register)  /*@rg@*/
#define IRC0_IRQVA417_IRQVA	IRC0_IRQVA417  /*@bfrg@*/

#define IRC0_IRQVA418	(IRC0.unIRQVA418.u32Register)  /*@rg@*/
#define IRC0_IRQVA418_IRQVA	IRC0_IRQVA418  /*@bfrg@*/

#define IRC0_IRQVA419	(IRC0.unIRQVA419.u32Register)  /*@rg@*/
#define IRC0_IRQVA419_IRQVA	IRC0_IRQVA419  /*@bfrg@*/

#define IRC0_IRQVA420	(IRC0.unIRQVA420.u32Register)  /*@rg@*/
#define IRC0_IRQVA420_IRQVA	IRC0_IRQVA420  /*@bfrg@*/

#define IRC0_IRQVA421	(IRC0.unIRQVA421.u32Register)  /*@rg@*/
#define IRC0_IRQVA421_IRQVA	IRC0_IRQVA421  /*@bfrg@*/

#define IRC0_IRQVA422	(IRC0.unIRQVA422.u32Register)  /*@rg@*/
#define IRC0_IRQVA422_IRQVA	IRC0_IRQVA422  /*@bfrg@*/

#define IRC0_IRQVA423	(IRC0.unIRQVA423.u32Register)  /*@rg@*/
#define IRC0_IRQVA423_IRQVA	IRC0_IRQVA423  /*@bfrg@*/

#define IRC0_IRQVA424	(IRC0.unIRQVA424.u32Register)  /*@rg@*/
#define IRC0_IRQVA424_IRQVA	IRC0_IRQVA424  /*@bfrg@*/

#define IRC0_IRQVA425	(IRC0.unIRQVA425.u32Register)  /*@rg@*/
#define IRC0_IRQVA425_IRQVA	IRC0_IRQVA425  /*@bfrg@*/

#define IRC0_IRQVA426	(IRC0.unIRQVA426.u32Register)  /*@rg@*/
#define IRC0_IRQVA426_IRQVA	IRC0_IRQVA426  /*@bfrg@*/

#define IRC0_IRQVA427	(IRC0.unIRQVA427.u32Register)  /*@rg@*/
#define IRC0_IRQVA427_IRQVA	IRC0_IRQVA427  /*@bfrg@*/

#define IRC0_IRQVA428	(IRC0.unIRQVA428.u32Register)  /*@rg@*/
#define IRC0_IRQVA428_IRQVA	IRC0_IRQVA428  /*@bfrg@*/

#define IRC0_IRQVA429	(IRC0.unIRQVA429.u32Register)  /*@rg@*/
#define IRC0_IRQVA429_IRQVA	IRC0_IRQVA429  /*@bfrg@*/

#define IRC0_IRQVA430	(IRC0.unIRQVA430.u32Register)  /*@rg@*/
#define IRC0_IRQVA430_IRQVA	IRC0_IRQVA430  /*@bfrg@*/

#define IRC0_IRQVA431	(IRC0.unIRQVA431.u32Register)  /*@rg@*/
#define IRC0_IRQVA431_IRQVA	IRC0_IRQVA431  /*@bfrg@*/

#define IRC0_IRQVA432	(IRC0.unIRQVA432.u32Register)  /*@rg@*/
#define IRC0_IRQVA432_IRQVA	IRC0_IRQVA432  /*@bfrg@*/

#define IRC0_IRQVA433	(IRC0.unIRQVA433.u32Register)  /*@rg@*/
#define IRC0_IRQVA433_IRQVA	IRC0_IRQVA433  /*@bfrg@*/

#define IRC0_IRQVA434	(IRC0.unIRQVA434.u32Register)  /*@rg@*/
#define IRC0_IRQVA434_IRQVA	IRC0_IRQVA434  /*@bfrg@*/

#define IRC0_IRQVA435	(IRC0.unIRQVA435.u32Register)  /*@rg@*/
#define IRC0_IRQVA435_IRQVA	IRC0_IRQVA435  /*@bfrg@*/

#define IRC0_IRQVA436	(IRC0.unIRQVA436.u32Register)  /*@rg@*/
#define IRC0_IRQVA436_IRQVA	IRC0_IRQVA436  /*@bfrg@*/

#define IRC0_IRQVA437	(IRC0.unIRQVA437.u32Register)  /*@rg@*/
#define IRC0_IRQVA437_IRQVA	IRC0_IRQVA437  /*@bfrg@*/

#define IRC0_IRQVA438	(IRC0.unIRQVA438.u32Register)  /*@rg@*/
#define IRC0_IRQVA438_IRQVA	IRC0_IRQVA438  /*@bfrg@*/

#define IRC0_IRQVA439	(IRC0.unIRQVA439.u32Register)  /*@rg@*/
#define IRC0_IRQVA439_IRQVA	IRC0_IRQVA439  /*@bfrg@*/

#define IRC0_IRQVA440	(IRC0.unIRQVA440.u32Register)  /*@rg@*/
#define IRC0_IRQVA440_IRQVA	IRC0_IRQVA440  /*@bfrg@*/

#define IRC0_IRQVA441	(IRC0.unIRQVA441.u32Register)  /*@rg@*/
#define IRC0_IRQVA441_IRQVA	IRC0_IRQVA441  /*@bfrg@*/

#define IRC0_IRQVA442	(IRC0.unIRQVA442.u32Register)  /*@rg@*/
#define IRC0_IRQVA442_IRQVA	IRC0_IRQVA442  /*@bfrg@*/

#define IRC0_IRQVA443	(IRC0.unIRQVA443.u32Register)  /*@rg@*/
#define IRC0_IRQVA443_IRQVA	IRC0_IRQVA443  /*@bfrg@*/

#define IRC0_IRQVA444	(IRC0.unIRQVA444.u32Register)  /*@rg@*/
#define IRC0_IRQVA444_IRQVA	IRC0_IRQVA444  /*@bfrg@*/

#define IRC0_IRQVA445	(IRC0.unIRQVA445.u32Register)  /*@rg@*/
#define IRC0_IRQVA445_IRQVA	IRC0_IRQVA445  /*@bfrg@*/

#define IRC0_IRQVA446	(IRC0.unIRQVA446.u32Register)  /*@rg@*/
#define IRC0_IRQVA446_IRQVA	IRC0_IRQVA446  /*@bfrg@*/

#define IRC0_IRQVA447	(IRC0.unIRQVA447.u32Register)  /*@rg@*/
#define IRC0_IRQVA447_IRQVA	IRC0_IRQVA447  /*@bfrg@*/

#define IRC0_IRQVA448	(IRC0.unIRQVA448.u32Register)  /*@rg@*/
#define IRC0_IRQVA448_IRQVA	IRC0_IRQVA448  /*@bfrg@*/

#define IRC0_IRQVA449	(IRC0.unIRQVA449.u32Register)  /*@rg@*/
#define IRC0_IRQVA449_IRQVA	IRC0_IRQVA449  /*@bfrg@*/

#define IRC0_IRQVA450	(IRC0.unIRQVA450.u32Register)  /*@rg@*/
#define IRC0_IRQVA450_IRQVA	IRC0_IRQVA450  /*@bfrg@*/

#define IRC0_IRQVA451	(IRC0.unIRQVA451.u32Register)  /*@rg@*/
#define IRC0_IRQVA451_IRQVA	IRC0_IRQVA451  /*@bfrg@*/

#define IRC0_IRQVA452	(IRC0.unIRQVA452.u32Register)  /*@rg@*/
#define IRC0_IRQVA452_IRQVA	IRC0_IRQVA452  /*@bfrg@*/

#define IRC0_IRQVA453	(IRC0.unIRQVA453.u32Register)  /*@rg@*/
#define IRC0_IRQVA453_IRQVA	IRC0_IRQVA453  /*@bfrg@*/

#define IRC0_IRQVA454	(IRC0.unIRQVA454.u32Register)  /*@rg@*/
#define IRC0_IRQVA454_IRQVA	IRC0_IRQVA454  /*@bfrg@*/

#define IRC0_IRQVA455	(IRC0.unIRQVA455.u32Register)  /*@rg@*/
#define IRC0_IRQVA455_IRQVA	IRC0_IRQVA455  /*@bfrg@*/

#define IRC0_IRQVA456	(IRC0.unIRQVA456.u32Register)  /*@rg@*/
#define IRC0_IRQVA456_IRQVA	IRC0_IRQVA456  /*@bfrg@*/

#define IRC0_IRQVA457	(IRC0.unIRQVA457.u32Register)  /*@rg@*/
#define IRC0_IRQVA457_IRQVA	IRC0_IRQVA457  /*@bfrg@*/

#define IRC0_IRQVA458	(IRC0.unIRQVA458.u32Register)  /*@rg@*/
#define IRC0_IRQVA458_IRQVA	IRC0_IRQVA458  /*@bfrg@*/

#define IRC0_IRQVA459	(IRC0.unIRQVA459.u32Register)  /*@rg@*/
#define IRC0_IRQVA459_IRQVA	IRC0_IRQVA459  /*@bfrg@*/

#define IRC0_IRQVA460	(IRC0.unIRQVA460.u32Register)  /*@rg@*/
#define IRC0_IRQVA460_IRQVA	IRC0_IRQVA460  /*@bfrg@*/

#define IRC0_IRQVA461	(IRC0.unIRQVA461.u32Register)  /*@rg@*/
#define IRC0_IRQVA461_IRQVA	IRC0_IRQVA461  /*@bfrg@*/

#define IRC0_IRQVA462	(IRC0.unIRQVA462.u32Register)  /*@rg@*/
#define IRC0_IRQVA462_IRQVA	IRC0_IRQVA462  /*@bfrg@*/

#define IRC0_IRQVA463	(IRC0.unIRQVA463.u32Register)  /*@rg@*/
#define IRC0_IRQVA463_IRQVA	IRC0_IRQVA463  /*@bfrg@*/

#define IRC0_IRQVA464	(IRC0.unIRQVA464.u32Register)  /*@rg@*/
#define IRC0_IRQVA464_IRQVA	IRC0_IRQVA464  /*@bfrg@*/

#define IRC0_IRQVA465	(IRC0.unIRQVA465.u32Register)  /*@rg@*/
#define IRC0_IRQVA465_IRQVA	IRC0_IRQVA465  /*@bfrg@*/

#define IRC0_IRQVA466	(IRC0.unIRQVA466.u32Register)  /*@rg@*/
#define IRC0_IRQVA466_IRQVA	IRC0_IRQVA466  /*@bfrg@*/

#define IRC0_IRQVA467	(IRC0.unIRQVA467.u32Register)  /*@rg@*/
#define IRC0_IRQVA467_IRQVA	IRC0_IRQVA467  /*@bfrg@*/

#define IRC0_IRQVA468	(IRC0.unIRQVA468.u32Register)  /*@rg@*/
#define IRC0_IRQVA468_IRQVA	IRC0_IRQVA468  /*@bfrg@*/

#define IRC0_IRQVA469	(IRC0.unIRQVA469.u32Register)  /*@rg@*/
#define IRC0_IRQVA469_IRQVA	IRC0_IRQVA469  /*@bfrg@*/

#define IRC0_IRQVA470	(IRC0.unIRQVA470.u32Register)  /*@rg@*/
#define IRC0_IRQVA470_IRQVA	IRC0_IRQVA470  /*@bfrg@*/

#define IRC0_IRQVA471	(IRC0.unIRQVA471.u32Register)  /*@rg@*/
#define IRC0_IRQVA471_IRQVA	IRC0_IRQVA471  /*@bfrg@*/

#define IRC0_IRQVA472	(IRC0.unIRQVA472.u32Register)  /*@rg@*/
#define IRC0_IRQVA472_IRQVA	IRC0_IRQVA472  /*@bfrg@*/

#define IRC0_IRQVA473	(IRC0.unIRQVA473.u32Register)  /*@rg@*/
#define IRC0_IRQVA473_IRQVA	IRC0_IRQVA473  /*@bfrg@*/

#define IRC0_IRQVA474	(IRC0.unIRQVA474.u32Register)  /*@rg@*/
#define IRC0_IRQVA474_IRQVA	IRC0_IRQVA474  /*@bfrg@*/

#define IRC0_IRQVA475	(IRC0.unIRQVA475.u32Register)  /*@rg@*/
#define IRC0_IRQVA475_IRQVA	IRC0_IRQVA475  /*@bfrg@*/

#define IRC0_IRQVA476	(IRC0.unIRQVA476.u32Register)  /*@rg@*/
#define IRC0_IRQVA476_IRQVA	IRC0_IRQVA476  /*@bfrg@*/

#define IRC0_IRQVA477	(IRC0.unIRQVA477.u32Register)  /*@rg@*/
#define IRC0_IRQVA477_IRQVA	IRC0_IRQVA477  /*@bfrg@*/

#define IRC0_IRQVA478	(IRC0.unIRQVA478.u32Register)  /*@rg@*/
#define IRC0_IRQVA478_IRQVA	IRC0_IRQVA478  /*@bfrg@*/

#define IRC0_IRQVA479	(IRC0.unIRQVA479.u32Register)  /*@rg@*/
#define IRC0_IRQVA479_IRQVA	IRC0_IRQVA479  /*@bfrg@*/

#define IRC0_IRQVA480	(IRC0.unIRQVA480.u32Register)  /*@rg@*/
#define IRC0_IRQVA480_IRQVA	IRC0_IRQVA480  /*@bfrg@*/

#define IRC0_IRQVA481	(IRC0.unIRQVA481.u32Register)  /*@rg@*/
#define IRC0_IRQVA481_IRQVA	IRC0_IRQVA481  /*@bfrg@*/

#define IRC0_IRQVA482	(IRC0.unIRQVA482.u32Register)  /*@rg@*/
#define IRC0_IRQVA482_IRQVA	IRC0_IRQVA482  /*@bfrg@*/

#define IRC0_IRQVA483	(IRC0.unIRQVA483.u32Register)  /*@rg@*/
#define IRC0_IRQVA483_IRQVA	IRC0_IRQVA483  /*@bfrg@*/

#define IRC0_IRQVA484	(IRC0.unIRQVA484.u32Register)  /*@rg@*/
#define IRC0_IRQVA484_IRQVA	IRC0_IRQVA484  /*@bfrg@*/

#define IRC0_IRQVA485	(IRC0.unIRQVA485.u32Register)  /*@rg@*/
#define IRC0_IRQVA485_IRQVA	IRC0_IRQVA485  /*@bfrg@*/

#define IRC0_IRQVA486	(IRC0.unIRQVA486.u32Register)  /*@rg@*/
#define IRC0_IRQVA486_IRQVA	IRC0_IRQVA486  /*@bfrg@*/

#define IRC0_IRQVA487	(IRC0.unIRQVA487.u32Register)  /*@rg@*/
#define IRC0_IRQVA487_IRQVA	IRC0_IRQVA487  /*@bfrg@*/

#define IRC0_IRQVA488	(IRC0.unIRQVA488.u32Register)  /*@rg@*/
#define IRC0_IRQVA488_IRQVA	IRC0_IRQVA488  /*@bfrg@*/

#define IRC0_IRQVA489	(IRC0.unIRQVA489.u32Register)  /*@rg@*/
#define IRC0_IRQVA489_IRQVA	IRC0_IRQVA489  /*@bfrg@*/

#define IRC0_IRQVA490	(IRC0.unIRQVA490.u32Register)  /*@rg@*/
#define IRC0_IRQVA490_IRQVA	IRC0_IRQVA490  /*@bfrg@*/

#define IRC0_IRQVA491	(IRC0.unIRQVA491.u32Register)  /*@rg@*/
#define IRC0_IRQVA491_IRQVA	IRC0_IRQVA491  /*@bfrg@*/

#define IRC0_IRQVA492	(IRC0.unIRQVA492.u32Register)  /*@rg@*/
#define IRC0_IRQVA492_IRQVA	IRC0_IRQVA492  /*@bfrg@*/

#define IRC0_IRQVA493	(IRC0.unIRQVA493.u32Register)  /*@rg@*/
#define IRC0_IRQVA493_IRQVA	IRC0_IRQVA493  /*@bfrg@*/

#define IRC0_IRQVA494	(IRC0.unIRQVA494.u32Register)  /*@rg@*/
#define IRC0_IRQVA494_IRQVA	IRC0_IRQVA494  /*@bfrg@*/

#define IRC0_IRQVA495	(IRC0.unIRQVA495.u32Register)  /*@rg@*/
#define IRC0_IRQVA495_IRQVA	IRC0_IRQVA495  /*@bfrg@*/

#define IRC0_IRQVA496	(IRC0.unIRQVA496.u32Register)  /*@rg@*/
#define IRC0_IRQVA496_IRQVA	IRC0_IRQVA496  /*@bfrg@*/

#define IRC0_IRQVA497	(IRC0.unIRQVA497.u32Register)  /*@rg@*/
#define IRC0_IRQVA497_IRQVA	IRC0_IRQVA497  /*@bfrg@*/

#define IRC0_IRQVA498	(IRC0.unIRQVA498.u32Register)  /*@rg@*/
#define IRC0_IRQVA498_IRQVA	IRC0_IRQVA498  /*@bfrg@*/

#define IRC0_IRQVA499	(IRC0.unIRQVA499.u32Register)  /*@rg@*/
#define IRC0_IRQVA499_IRQVA	IRC0_IRQVA499  /*@bfrg@*/

#define IRC0_IRQVA500	(IRC0.unIRQVA500.u32Register)  /*@rg@*/
#define IRC0_IRQVA500_IRQVA	IRC0_IRQVA500  /*@bfrg@*/

#define IRC0_IRQVA501	(IRC0.unIRQVA501.u32Register)  /*@rg@*/
#define IRC0_IRQVA501_IRQVA	IRC0_IRQVA501  /*@bfrg@*/

#define IRC0_IRQVA502	(IRC0.unIRQVA502.u32Register)  /*@rg@*/
#define IRC0_IRQVA502_IRQVA	IRC0_IRQVA502  /*@bfrg@*/

#define IRC0_IRQVA503	(IRC0.unIRQVA503.u32Register)  /*@rg@*/
#define IRC0_IRQVA503_IRQVA	IRC0_IRQVA503  /*@bfrg@*/

#define IRC0_IRQVA504	(IRC0.unIRQVA504.u32Register)  /*@rg@*/
#define IRC0_IRQVA504_IRQVA	IRC0_IRQVA504  /*@bfrg@*/

#define IRC0_IRQVA505	(IRC0.unIRQVA505.u32Register)  /*@rg@*/
#define IRC0_IRQVA505_IRQVA	IRC0_IRQVA505  /*@bfrg@*/

#define IRC0_IRQVA506	(IRC0.unIRQVA506.u32Register)  /*@rg@*/
#define IRC0_IRQVA506_IRQVA	IRC0_IRQVA506  /*@bfrg@*/

#define IRC0_IRQVA507	(IRC0.unIRQVA507.u32Register)  /*@rg@*/
#define IRC0_IRQVA507_IRQVA	IRC0_IRQVA507  /*@bfrg@*/

#define IRC0_IRQVA508	(IRC0.unIRQVA508.u32Register)  /*@rg@*/
#define IRC0_IRQVA508_IRQVA	IRC0_IRQVA508  /*@bfrg@*/

#define IRC0_IRQVA509	(IRC0.unIRQVA509.u32Register)  /*@rg@*/
#define IRC0_IRQVA509_IRQVA	IRC0_IRQVA509  /*@bfrg@*/

#define IRC0_IRQVA510	(IRC0.unIRQVA510.u32Register)  /*@rg@*/
#define IRC0_IRQVA510_IRQVA	IRC0_IRQVA510  /*@bfrg@*/

#define IRC0_IRQVA511	(IRC0.unIRQVA511.u32Register)  /*@rg@*/
#define IRC0_IRQVA511_IRQVA	IRC0_IRQVA511  /*@bfrg@*/

typedef union un_irc0_irqvan{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqvan_t;

/* NMIPL0 */
#define IRC0_NMIPL0	(IRC0.unNMIPL0.u32Register)  /*@rg@*/
#define IRC0_NMIPL0_NMIPL0	(IRC0.unNMIPL0.stcField.u4NMIPL0)  /*@bf@*/
#define IRC0_NMIPL0_NMIPL1	(IRC0.unNMIPL0.stcField.u4NMIPL1)  /*@bf@*/
#define IRC0_NMIPL0_NMIPL2	(IRC0.unNMIPL0.stcField.u4NMIPL2)  /*@bf@*/
#define IRC0_NMIPL0_NMIPL3	(IRC0.unNMIPL0.stcField.u4NMIPL3)  /*@bf@*/

typedef struct stc_irc0_nmipl0_field{
    uint_io32_t		u4NMIPL0:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL1:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL2:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL3:4;
    uint_io32_t		:4;
}stc_irc0_nmipl0_field_t;

typedef union un_irc0_nmipl0{
    uint_io32_t		u32Register;
    stc_irc0_nmipl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl0_t;

/* NMIPL1 */
#define IRC0_NMIPL1	(IRC0.unNMIPL1.u32Register)  /*@rg@*/
#define IRC0_NMIPL1_NMIPL4	(IRC0.unNMIPL1.stcField.u4NMIPL4)  /*@bf@*/
#define IRC0_NMIPL1_NMIPL5	(IRC0.unNMIPL1.stcField.u4NMIPL5)  /*@bf@*/
#define IRC0_NMIPL1_NMIPL6	(IRC0.unNMIPL1.stcField.u4NMIPL6)  /*@bf@*/
#define IRC0_NMIPL1_NMIPL7	(IRC0.unNMIPL1.stcField.u4NMIPL7)  /*@bf@*/

typedef struct stc_irc0_nmipl1_field{
    uint_io32_t		u4NMIPL4:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL5:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL6:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL7:4;
    uint_io32_t		:4;
}stc_irc0_nmipl1_field_t;

typedef union un_irc0_nmipl1{
    uint_io32_t		u32Register;
    stc_irc0_nmipl1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl1_t;

/* NMIPL2 */
#define IRC0_NMIPL2	(IRC0.unNMIPL2.u32Register)  /*@rg@*/
#define IRC0_NMIPL2_NMIPL8	(IRC0.unNMIPL2.stcField.u4NMIPL8)  /*@bf@*/
#define IRC0_NMIPL2_NMIPL9	(IRC0.unNMIPL2.stcField.u4NMIPL9)  /*@bf@*/
#define IRC0_NMIPL2_NMIPL10	(IRC0.unNMIPL2.stcField.u4NMIPL10)  /*@bf@*/
#define IRC0_NMIPL2_NMIPL11	(IRC0.unNMIPL2.stcField.u4NMIPL11)  /*@bf@*/

typedef struct stc_irc0_nmipl2_field{
    uint_io32_t		u4NMIPL8:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL9:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL10:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL11:4;
    uint_io32_t		:4;
}stc_irc0_nmipl2_field_t;

typedef union un_irc0_nmipl2{
    uint_io32_t		u32Register;
    stc_irc0_nmipl2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl2_t;

/* NMIPL3 */
#define IRC0_NMIPL3	(IRC0.unNMIPL3.u32Register)  /*@rg@*/
#define IRC0_NMIPL3_NMIPL12	(IRC0.unNMIPL3.stcField.u4NMIPL12)  /*@bf@*/
#define IRC0_NMIPL3_NMIPL13	(IRC0.unNMIPL3.stcField.u4NMIPL13)  /*@bf@*/
#define IRC0_NMIPL3_NMIPL14	(IRC0.unNMIPL3.stcField.u4NMIPL14)  /*@bf@*/
#define IRC0_NMIPL3_NMIPL15	(IRC0.unNMIPL3.stcField.u4NMIPL15)  /*@bf@*/

typedef struct stc_irc0_nmipl3_field{
    uint_io32_t		u4NMIPL12:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL13:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL14:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL15:4;
    uint_io32_t		:4;
}stc_irc0_nmipl3_field_t;

typedef union un_irc0_nmipl3{
    uint_io32_t		u32Register;
    stc_irc0_nmipl3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl3_t;

/* NMIPL4 */
#define IRC0_NMIPL4	(IRC0.unNMIPL4.u32Register)  /*@rg@*/
#define IRC0_NMIPL4_NMIPL16	(IRC0.unNMIPL4.stcField.u4NMIPL16)  /*@bf@*/
#define IRC0_NMIPL4_NMIPL17	(IRC0.unNMIPL4.stcField.u4NMIPL17)  /*@bf@*/
#define IRC0_NMIPL4_NMIPL18	(IRC0.unNMIPL4.stcField.u4NMIPL18)  /*@bf@*/
#define IRC0_NMIPL4_NMIPL19	(IRC0.unNMIPL4.stcField.u4NMIPL19)  /*@bf@*/

typedef struct stc_irc0_nmipl4_field{
    uint_io32_t		u4NMIPL16:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL17:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL18:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL19:4;
    uint_io32_t		:4;
}stc_irc0_nmipl4_field_t;

typedef union un_irc0_nmipl4{
    uint_io32_t		u32Register;
    stc_irc0_nmipl4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl4_t;

/* NMIPL5 */
#define IRC0_NMIPL5	(IRC0.unNMIPL5.u32Register)  /*@rg@*/
#define IRC0_NMIPL5_NMIPL20	(IRC0.unNMIPL5.stcField.u4NMIPL20)  /*@bf@*/
#define IRC0_NMIPL5_NMIPL21	(IRC0.unNMIPL5.stcField.u4NMIPL21)  /*@bf@*/
#define IRC0_NMIPL5_NMIPL22	(IRC0.unNMIPL5.stcField.u4NMIPL22)  /*@bf@*/
#define IRC0_NMIPL5_NMIPL23	(IRC0.unNMIPL5.stcField.u4NMIPL23)  /*@bf@*/

typedef struct stc_irc0_nmipl5_field{
    uint_io32_t		u4NMIPL20:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL21:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL22:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL23:4;
    uint_io32_t		:4;
}stc_irc0_nmipl5_field_t;

typedef union un_irc0_nmipl5{
    uint_io32_t		u32Register;
    stc_irc0_nmipl5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl5_t;

/* NMIPL6 */
#define IRC0_NMIPL6	(IRC0.unNMIPL6.u32Register)  /*@rg@*/
#define IRC0_NMIPL6_NMIPL24	(IRC0.unNMIPL6.stcField.u4NMIPL24)  /*@bf@*/
#define IRC0_NMIPL6_NMIPL25	(IRC0.unNMIPL6.stcField.u4NMIPL25)  /*@bf@*/
#define IRC0_NMIPL6_NMIPL26	(IRC0.unNMIPL6.stcField.u4NMIPL26)  /*@bf@*/
#define IRC0_NMIPL6_NMIPL27	(IRC0.unNMIPL6.stcField.u4NMIPL27)  /*@bf@*/

typedef struct stc_irc0_nmipl6_field{
    uint_io32_t		u4NMIPL24:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL25:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL26:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL27:4;
    uint_io32_t		:4;
}stc_irc0_nmipl6_field_t;

typedef union un_irc0_nmipl6{
    uint_io32_t		u32Register;
    stc_irc0_nmipl6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl6_t;

/* NMIPL7 */
#define IRC0_NMIPL7	(IRC0.unNMIPL7.u32Register)  /*@rg@*/
#define IRC0_NMIPL7_NMIPL28	(IRC0.unNMIPL7.stcField.u4NMIPL28)  /*@bf@*/
#define IRC0_NMIPL7_NMIPL29	(IRC0.unNMIPL7.stcField.u4NMIPL29)  /*@bf@*/
#define IRC0_NMIPL7_NMIPL30	(IRC0.unNMIPL7.stcField.u4NMIPL30)  /*@bf@*/
#define IRC0_NMIPL7_NMIPL31	(IRC0.unNMIPL7.stcField.u4NMIPL31)  /*@bf@*/

typedef struct stc_irc0_nmipl7_field{
    uint_io32_t		u4NMIPL28:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL29:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL30:4;
    uint_io32_t		:4;
    uint_io32_t		u4NMIPL31:4;
    uint_io32_t		:4;
}stc_irc0_nmipl7_field_t;

typedef union un_irc0_nmipl7{
    uint_io32_t		u32Register;
    stc_irc0_nmipl7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmipl7_t;

/* IRQPL0 */
#define IRC0_IRQPL0	(IRC0.unIRQPL0.u32Register)  /*@rg@*/
#define IRC0_IRQPL0_IRQPL0	(IRC0.unIRQPL0.stcField.u5IRQPL0)  /*@bf@*/
#define IRC0_IRQPL0_IRQPL1	(IRC0.unIRQPL0.stcField.u5IRQPL1)  /*@bf@*/
#define IRC0_IRQPL0_IRQPL2	(IRC0.unIRQPL0.stcField.u5IRQPL2)  /*@bf@*/
#define IRC0_IRQPL0_IRQPL3	(IRC0.unIRQPL0.stcField.u5IRQPL3)  /*@bf@*/

typedef struct stc_irc0_irqpl0_field{
    uint_io32_t		u5IRQPL0:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL1:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL2:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL3:5;
    uint_io32_t		:3;
}stc_irc0_irqpl0_field_t;

typedef union un_irc0_irqpl0{
    uint_io32_t		u32Register;
    stc_irc0_irqpl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl0_t;

/* IRQPL1 */
#define IRC0_IRQPL1	(IRC0.unIRQPL1.u32Register)  /*@rg@*/
#define IRC0_IRQPL1_IRQPL4	(IRC0.unIRQPL1.stcField.u5IRQPL4)  /*@bf@*/
#define IRC0_IRQPL1_IRQPL5	(IRC0.unIRQPL1.stcField.u5IRQPL5)  /*@bf@*/
#define IRC0_IRQPL1_IRQPL6	(IRC0.unIRQPL1.stcField.u5IRQPL6)  /*@bf@*/
#define IRC0_IRQPL1_IRQPL7	(IRC0.unIRQPL1.stcField.u5IRQPL7)  /*@bf@*/

typedef struct stc_irc0_irqpl1_field{
    uint_io32_t		u5IRQPL4:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL5:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL6:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL7:5;
    uint_io32_t		:3;
}stc_irc0_irqpl1_field_t;

typedef union un_irc0_irqpl1{
    uint_io32_t		u32Register;
    stc_irc0_irqpl1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl1_t;

/* IRQPL2 */
#define IRC0_IRQPL2	(IRC0.unIRQPL2.u32Register)  /*@rg@*/
#define IRC0_IRQPL2_IRQPL8	(IRC0.unIRQPL2.stcField.u5IRQPL8)  /*@bf@*/
#define IRC0_IRQPL2_IRQPL9	(IRC0.unIRQPL2.stcField.u5IRQPL9)  /*@bf@*/
#define IRC0_IRQPL2_IRQPL10	(IRC0.unIRQPL2.stcField.u5IRQPL10)  /*@bf@*/
#define IRC0_IRQPL2_IRQPL11	(IRC0.unIRQPL2.stcField.u5IRQPL11)  /*@bf@*/

typedef struct stc_irc0_irqpl2_field{
    uint_io32_t		u5IRQPL8:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL9:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL10:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL11:5;
    uint_io32_t		:3;
}stc_irc0_irqpl2_field_t;

typedef union un_irc0_irqpl2{
    uint_io32_t		u32Register;
    stc_irc0_irqpl2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl2_t;

/* IRQPL3 */
#define IRC0_IRQPL3	(IRC0.unIRQPL3.u32Register)  /*@rg@*/
#define IRC0_IRQPL3_IRQPL12	(IRC0.unIRQPL3.stcField.u5IRQPL12)  /*@bf@*/
#define IRC0_IRQPL3_IRQPL13	(IRC0.unIRQPL3.stcField.u5IRQPL13)  /*@bf@*/
#define IRC0_IRQPL3_IRQPL14	(IRC0.unIRQPL3.stcField.u5IRQPL14)  /*@bf@*/
#define IRC0_IRQPL3_IRQPL15	(IRC0.unIRQPL3.stcField.u5IRQPL15)  /*@bf@*/

typedef struct stc_irc0_irqpl3_field{
    uint_io32_t		u5IRQPL12:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL13:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL14:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL15:5;
    uint_io32_t		:3;
}stc_irc0_irqpl3_field_t;

typedef union un_irc0_irqpl3{
    uint_io32_t		u32Register;
    stc_irc0_irqpl3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl3_t;

/* IRQPL4 */
#define IRC0_IRQPL4	(IRC0.unIRQPL4.u32Register)  /*@rg@*/
#define IRC0_IRQPL4_IRQPL16	(IRC0.unIRQPL4.stcField.u5IRQPL16)  /*@bf@*/
#define IRC0_IRQPL4_IRQPL17	(IRC0.unIRQPL4.stcField.u5IRQPL17)  /*@bf@*/
#define IRC0_IRQPL4_IRQPL18	(IRC0.unIRQPL4.stcField.u5IRQPL18)  /*@bf@*/
#define IRC0_IRQPL4_IRQPL19	(IRC0.unIRQPL4.stcField.u5IRQPL19)  /*@bf@*/

typedef struct stc_irc0_irqpl4_field{
    uint_io32_t		u5IRQPL16:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL17:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL18:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL19:5;
    uint_io32_t		:3;
}stc_irc0_irqpl4_field_t;

typedef union un_irc0_irqpl4{
    uint_io32_t		u32Register;
    stc_irc0_irqpl4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl4_t;

/* IRQPL5 */
#define IRC0_IRQPL5	(IRC0.unIRQPL5.u32Register)  /*@rg@*/
#define IRC0_IRQPL5_IRQPL20	(IRC0.unIRQPL5.stcField.u5IRQPL20)  /*@bf@*/
#define IRC0_IRQPL5_IRQPL21	(IRC0.unIRQPL5.stcField.u5IRQPL21)  /*@bf@*/
#define IRC0_IRQPL5_IRQPL22	(IRC0.unIRQPL5.stcField.u5IRQPL22)  /*@bf@*/
#define IRC0_IRQPL5_IRQPL23	(IRC0.unIRQPL5.stcField.u5IRQPL23)  /*@bf@*/

typedef struct stc_irc0_irqpl5_field{
    uint_io32_t		u5IRQPL20:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL21:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL22:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL23:5;
    uint_io32_t		:3;
}stc_irc0_irqpl5_field_t;

typedef union un_irc0_irqpl5{
    uint_io32_t		u32Register;
    stc_irc0_irqpl5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl5_t;

/* IRQPL6 */
#define IRC0_IRQPL6	(IRC0.unIRQPL6.u32Register)  /*@rg@*/
#define IRC0_IRQPL6_IRQPL24	(IRC0.unIRQPL6.stcField.u5IRQPL24)  /*@bf@*/
#define IRC0_IRQPL6_IRQPL25	(IRC0.unIRQPL6.stcField.u5IRQPL25)  /*@bf@*/
#define IRC0_IRQPL6_IRQPL26	(IRC0.unIRQPL6.stcField.u5IRQPL26)  /*@bf@*/
#define IRC0_IRQPL6_IRQPL27	(IRC0.unIRQPL6.stcField.u5IRQPL27)  /*@bf@*/

typedef struct stc_irc0_irqpl6_field{
    uint_io32_t		u5IRQPL24:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL25:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL26:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL27:5;
    uint_io32_t		:3;
}stc_irc0_irqpl6_field_t;

typedef union un_irc0_irqpl6{
    uint_io32_t		u32Register;
    stc_irc0_irqpl6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl6_t;

/* IRQPL7 */
#define IRC0_IRQPL7	(IRC0.unIRQPL7.u32Register)  /*@rg@*/
#define IRC0_IRQPL7_IRQPL28	(IRC0.unIRQPL7.stcField.u5IRQPL28)  /*@bf@*/
#define IRC0_IRQPL7_IRQPL29	(IRC0.unIRQPL7.stcField.u5IRQPL29)  /*@bf@*/
#define IRC0_IRQPL7_IRQPL30	(IRC0.unIRQPL7.stcField.u5IRQPL30)  /*@bf@*/
#define IRC0_IRQPL7_IRQPL31	(IRC0.unIRQPL7.stcField.u5IRQPL31)  /*@bf@*/

typedef struct stc_irc0_irqpl7_field{
    uint_io32_t		u5IRQPL28:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL29:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL30:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL31:5;
    uint_io32_t		:3;
}stc_irc0_irqpl7_field_t;

typedef union un_irc0_irqpl7{
    uint_io32_t		u32Register;
    stc_irc0_irqpl7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl7_t;

/* IRQPL8 */
#define IRC0_IRQPL8	(IRC0.unIRQPL8.u32Register)  /*@rg@*/
#define IRC0_IRQPL8_IRQPL32	(IRC0.unIRQPL8.stcField.u5IRQPL32)  /*@bf@*/
#define IRC0_IRQPL8_IRQPL33	(IRC0.unIRQPL8.stcField.u5IRQPL33)  /*@bf@*/
#define IRC0_IRQPL8_IRQPL34	(IRC0.unIRQPL8.stcField.u5IRQPL34)  /*@bf@*/
#define IRC0_IRQPL8_IRQPL35	(IRC0.unIRQPL8.stcField.u5IRQPL35)  /*@bf@*/

typedef struct stc_irc0_irqpl8_field{
    uint_io32_t		u5IRQPL32:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL33:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL34:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL35:5;
    uint_io32_t		:3;
}stc_irc0_irqpl8_field_t;

typedef union un_irc0_irqpl8{
    uint_io32_t		u32Register;
    stc_irc0_irqpl8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl8_t;

/* IRQPL9 */
#define IRC0_IRQPL9	(IRC0.unIRQPL9.u32Register)  /*@rg@*/
#define IRC0_IRQPL9_IRQPL36	(IRC0.unIRQPL9.stcField.u5IRQPL36)  /*@bf@*/
#define IRC0_IRQPL9_IRQPL37	(IRC0.unIRQPL9.stcField.u5IRQPL37)  /*@bf@*/
#define IRC0_IRQPL9_IRQPL38	(IRC0.unIRQPL9.stcField.u5IRQPL38)  /*@bf@*/
#define IRC0_IRQPL9_IRQPL39	(IRC0.unIRQPL9.stcField.u5IRQPL39)  /*@bf@*/

typedef struct stc_irc0_irqpl9_field{
    uint_io32_t		u5IRQPL36:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL37:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL38:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL39:5;
    uint_io32_t		:3;
}stc_irc0_irqpl9_field_t;

typedef union un_irc0_irqpl9{
    uint_io32_t		u32Register;
    stc_irc0_irqpl9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl9_t;

/* IRQPL10 */
#define IRC0_IRQPL10	(IRC0.unIRQPL10.u32Register)  /*@rg@*/
#define IRC0_IRQPL10_IRQPL40	(IRC0.unIRQPL10.stcField.u5IRQPL40)  /*@bf@*/
#define IRC0_IRQPL10_IRQPL41	(IRC0.unIRQPL10.stcField.u5IRQPL41)  /*@bf@*/
#define IRC0_IRQPL10_IRQPL42	(IRC0.unIRQPL10.stcField.u5IRQPL42)  /*@bf@*/
#define IRC0_IRQPL10_IRQPL43	(IRC0.unIRQPL10.stcField.u5IRQPL43)  /*@bf@*/

typedef struct stc_irc0_irqpl10_field{
    uint_io32_t		u5IRQPL40:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL41:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL42:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL43:5;
    uint_io32_t		:3;
}stc_irc0_irqpl10_field_t;

typedef union un_irc0_irqpl10{
    uint_io32_t		u32Register;
    stc_irc0_irqpl10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl10_t;

/* IRQPL11 */
#define IRC0_IRQPL11	(IRC0.unIRQPL11.u32Register)  /*@rg@*/
#define IRC0_IRQPL11_IRQPL44	(IRC0.unIRQPL11.stcField.u5IRQPL44)  /*@bf@*/
#define IRC0_IRQPL11_IRQPL45	(IRC0.unIRQPL11.stcField.u5IRQPL45)  /*@bf@*/
#define IRC0_IRQPL11_IRQPL46	(IRC0.unIRQPL11.stcField.u5IRQPL46)  /*@bf@*/
#define IRC0_IRQPL11_IRQPL47	(IRC0.unIRQPL11.stcField.u5IRQPL47)  /*@bf@*/

typedef struct stc_irc0_irqpl11_field{
    uint_io32_t		u5IRQPL44:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL45:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL46:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL47:5;
    uint_io32_t		:3;
}stc_irc0_irqpl11_field_t;

typedef union un_irc0_irqpl11{
    uint_io32_t		u32Register;
    stc_irc0_irqpl11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl11_t;

/* IRQPL12 */
#define IRC0_IRQPL12	(IRC0.unIRQPL12.u32Register)  /*@rg@*/
#define IRC0_IRQPL12_IRQPL48	(IRC0.unIRQPL12.stcField.u5IRQPL48)  /*@bf@*/
#define IRC0_IRQPL12_IRQPL49	(IRC0.unIRQPL12.stcField.u5IRQPL49)  /*@bf@*/
#define IRC0_IRQPL12_IRQPL50	(IRC0.unIRQPL12.stcField.u5IRQPL50)  /*@bf@*/
#define IRC0_IRQPL12_IRQPL51	(IRC0.unIRQPL12.stcField.u5IRQPL51)  /*@bf@*/

typedef struct stc_irc0_irqpl12_field{
    uint_io32_t		u5IRQPL48:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL49:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL50:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL51:5;
    uint_io32_t		:3;
}stc_irc0_irqpl12_field_t;

typedef union un_irc0_irqpl12{
    uint_io32_t		u32Register;
    stc_irc0_irqpl12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl12_t;

/* IRQPL13 */
#define IRC0_IRQPL13	(IRC0.unIRQPL13.u32Register)  /*@rg@*/
#define IRC0_IRQPL13_IRQPL52	(IRC0.unIRQPL13.stcField.u5IRQPL52)  /*@bf@*/
#define IRC0_IRQPL13_IRQPL53	(IRC0.unIRQPL13.stcField.u5IRQPL53)  /*@bf@*/
#define IRC0_IRQPL13_IRQPL54	(IRC0.unIRQPL13.stcField.u5IRQPL54)  /*@bf@*/
#define IRC0_IRQPL13_IRQPL55	(IRC0.unIRQPL13.stcField.u5IRQPL55)  /*@bf@*/

typedef struct stc_irc0_irqpl13_field{
    uint_io32_t		u5IRQPL52:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL53:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL54:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL55:5;
    uint_io32_t		:3;
}stc_irc0_irqpl13_field_t;

typedef union un_irc0_irqpl13{
    uint_io32_t		u32Register;
    stc_irc0_irqpl13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl13_t;

/* IRQPL14 */
#define IRC0_IRQPL14	(IRC0.unIRQPL14.u32Register)  /*@rg@*/
#define IRC0_IRQPL14_IRQPL56	(IRC0.unIRQPL14.stcField.u5IRQPL56)  /*@bf@*/
#define IRC0_IRQPL14_IRQPL57	(IRC0.unIRQPL14.stcField.u5IRQPL57)  /*@bf@*/
#define IRC0_IRQPL14_IRQPL58	(IRC0.unIRQPL14.stcField.u5IRQPL58)  /*@bf@*/
#define IRC0_IRQPL14_IRQPL59	(IRC0.unIRQPL14.stcField.u5IRQPL59)  /*@bf@*/

typedef struct stc_irc0_irqpl14_field{
    uint_io32_t		u5IRQPL56:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL57:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL58:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL59:5;
    uint_io32_t		:3;
}stc_irc0_irqpl14_field_t;

typedef union un_irc0_irqpl14{
    uint_io32_t		u32Register;
    stc_irc0_irqpl14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl14_t;

/* IRQPL15 */
#define IRC0_IRQPL15	(IRC0.unIRQPL15.u32Register)  /*@rg@*/
#define IRC0_IRQPL15_IRQPL60	(IRC0.unIRQPL15.stcField.u5IRQPL60)  /*@bf@*/
#define IRC0_IRQPL15_IRQPL61	(IRC0.unIRQPL15.stcField.u5IRQPL61)  /*@bf@*/
#define IRC0_IRQPL15_IRQPL62	(IRC0.unIRQPL15.stcField.u5IRQPL62)  /*@bf@*/
#define IRC0_IRQPL15_IRQPL63	(IRC0.unIRQPL15.stcField.u5IRQPL63)  /*@bf@*/

typedef struct stc_irc0_irqpl15_field{
    uint_io32_t		u5IRQPL60:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL61:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL62:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL63:5;
    uint_io32_t		:3;
}stc_irc0_irqpl15_field_t;

typedef union un_irc0_irqpl15{
    uint_io32_t		u32Register;
    stc_irc0_irqpl15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl15_t;

/* IRQPL16 */
#define IRC0_IRQPL16	(IRC0.unIRQPL16.u32Register)  /*@rg@*/
#define IRC0_IRQPL16_IRQPL64	(IRC0.unIRQPL16.stcField.u5IRQPL64)  /*@bf@*/
#define IRC0_IRQPL16_IRQPL65	(IRC0.unIRQPL16.stcField.u5IRQPL65)  /*@bf@*/
#define IRC0_IRQPL16_IRQPL66	(IRC0.unIRQPL16.stcField.u5IRQPL66)  /*@bf@*/
#define IRC0_IRQPL16_IRQPL67	(IRC0.unIRQPL16.stcField.u5IRQPL67)  /*@bf@*/

typedef struct stc_irc0_irqpl16_field{
    uint_io32_t		u5IRQPL64:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL65:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL66:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL67:5;
    uint_io32_t		:3;
}stc_irc0_irqpl16_field_t;

typedef union un_irc0_irqpl16{
    uint_io32_t		u32Register;
    stc_irc0_irqpl16_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl16_t;

/* IRQPL17 */
#define IRC0_IRQPL17	(IRC0.unIRQPL17.u32Register)  /*@rg@*/
#define IRC0_IRQPL17_IRQPL68	(IRC0.unIRQPL17.stcField.u5IRQPL68)  /*@bf@*/
#define IRC0_IRQPL17_IRQPL69	(IRC0.unIRQPL17.stcField.u5IRQPL69)  /*@bf@*/
#define IRC0_IRQPL17_IRQPL70	(IRC0.unIRQPL17.stcField.u5IRQPL70)  /*@bf@*/
#define IRC0_IRQPL17_IRQPL71	(IRC0.unIRQPL17.stcField.u5IRQPL71)  /*@bf@*/

typedef struct stc_irc0_irqpl17_field{
    uint_io32_t		u5IRQPL68:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL69:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL70:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL71:5;
    uint_io32_t		:3;
}stc_irc0_irqpl17_field_t;

typedef union un_irc0_irqpl17{
    uint_io32_t		u32Register;
    stc_irc0_irqpl17_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl17_t;

/* IRQPL18 */
#define IRC0_IRQPL18	(IRC0.unIRQPL18.u32Register)  /*@rg@*/
#define IRC0_IRQPL18_IRQPL72	(IRC0.unIRQPL18.stcField.u5IRQPL72)  /*@bf@*/
#define IRC0_IRQPL18_IRQPL73	(IRC0.unIRQPL18.stcField.u5IRQPL73)  /*@bf@*/
#define IRC0_IRQPL18_IRQPL74	(IRC0.unIRQPL18.stcField.u5IRQPL74)  /*@bf@*/
#define IRC0_IRQPL18_IRQPL75	(IRC0.unIRQPL18.stcField.u5IRQPL75)  /*@bf@*/

typedef struct stc_irc0_irqpl18_field{
    uint_io32_t		u5IRQPL72:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL73:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL74:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL75:5;
    uint_io32_t		:3;
}stc_irc0_irqpl18_field_t;

typedef union un_irc0_irqpl18{
    uint_io32_t		u32Register;
    stc_irc0_irqpl18_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl18_t;

/* IRQPL19 */
#define IRC0_IRQPL19	(IRC0.unIRQPL19.u32Register)  /*@rg@*/
#define IRC0_IRQPL19_IRQPL76	(IRC0.unIRQPL19.stcField.u5IRQPL76)  /*@bf@*/
#define IRC0_IRQPL19_IRQPL77	(IRC0.unIRQPL19.stcField.u5IRQPL77)  /*@bf@*/
#define IRC0_IRQPL19_IRQPL78	(IRC0.unIRQPL19.stcField.u5IRQPL78)  /*@bf@*/
#define IRC0_IRQPL19_IRQPL79	(IRC0.unIRQPL19.stcField.u5IRQPL79)  /*@bf@*/

typedef struct stc_irc0_irqpl19_field{
    uint_io32_t		u5IRQPL76:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL77:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL78:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL79:5;
    uint_io32_t		:3;
}stc_irc0_irqpl19_field_t;

typedef union un_irc0_irqpl19{
    uint_io32_t		u32Register;
    stc_irc0_irqpl19_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl19_t;

/* IRQPL20 */
#define IRC0_IRQPL20	(IRC0.unIRQPL20.u32Register)  /*@rg@*/
#define IRC0_IRQPL20_IRQPL80	(IRC0.unIRQPL20.stcField.u5IRQPL80)  /*@bf@*/
#define IRC0_IRQPL20_IRQPL81	(IRC0.unIRQPL20.stcField.u5IRQPL81)  /*@bf@*/
#define IRC0_IRQPL20_IRQPL82	(IRC0.unIRQPL20.stcField.u5IRQPL82)  /*@bf@*/
#define IRC0_IRQPL20_IRQPL83	(IRC0.unIRQPL20.stcField.u5IRQPL83)  /*@bf@*/

typedef struct stc_irc0_irqpl20_field{
    uint_io32_t		u5IRQPL80:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL81:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL82:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL83:5;
    uint_io32_t		:3;
}stc_irc0_irqpl20_field_t;

typedef union un_irc0_irqpl20{
    uint_io32_t		u32Register;
    stc_irc0_irqpl20_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl20_t;

/* IRQPL21 */
#define IRC0_IRQPL21	(IRC0.unIRQPL21.u32Register)  /*@rg@*/
#define IRC0_IRQPL21_IRQPL84	(IRC0.unIRQPL21.stcField.u5IRQPL84)  /*@bf@*/
#define IRC0_IRQPL21_IRQPL85	(IRC0.unIRQPL21.stcField.u5IRQPL85)  /*@bf@*/
#define IRC0_IRQPL21_IRQPL86	(IRC0.unIRQPL21.stcField.u5IRQPL86)  /*@bf@*/
#define IRC0_IRQPL21_IRQPL87	(IRC0.unIRQPL21.stcField.u5IRQPL87)  /*@bf@*/

typedef struct stc_irc0_irqpl21_field{
    uint_io32_t		u5IRQPL84:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL85:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL86:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL87:5;
    uint_io32_t		:3;
}stc_irc0_irqpl21_field_t;

typedef union un_irc0_irqpl21{
    uint_io32_t		u32Register;
    stc_irc0_irqpl21_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl21_t;

/* IRQPL22 */
#define IRC0_IRQPL22	(IRC0.unIRQPL22.u32Register)  /*@rg@*/
#define IRC0_IRQPL22_IRQPL88	(IRC0.unIRQPL22.stcField.u5IRQPL88)  /*@bf@*/
#define IRC0_IRQPL22_IRQPL89	(IRC0.unIRQPL22.stcField.u5IRQPL89)  /*@bf@*/
#define IRC0_IRQPL22_IRQPL90	(IRC0.unIRQPL22.stcField.u5IRQPL90)  /*@bf@*/
#define IRC0_IRQPL22_IRQPL91	(IRC0.unIRQPL22.stcField.u5IRQPL91)  /*@bf@*/

typedef struct stc_irc0_irqpl22_field{
    uint_io32_t		u5IRQPL88:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL89:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL90:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL91:5;
    uint_io32_t		:3;
}stc_irc0_irqpl22_field_t;

typedef union un_irc0_irqpl22{
    uint_io32_t		u32Register;
    stc_irc0_irqpl22_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl22_t;

/* IRQPL23 */
#define IRC0_IRQPL23	(IRC0.unIRQPL23.u32Register)  /*@rg@*/
#define IRC0_IRQPL23_IRQPL92	(IRC0.unIRQPL23.stcField.u5IRQPL92)  /*@bf@*/
#define IRC0_IRQPL23_IRQPL93	(IRC0.unIRQPL23.stcField.u5IRQPL93)  /*@bf@*/
#define IRC0_IRQPL23_IRQPL94	(IRC0.unIRQPL23.stcField.u5IRQPL94)  /*@bf@*/
#define IRC0_IRQPL23_IRQPL95	(IRC0.unIRQPL23.stcField.u5IRQPL95)  /*@bf@*/

typedef struct stc_irc0_irqpl23_field{
    uint_io32_t		u5IRQPL92:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL93:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL94:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL95:5;
    uint_io32_t		:3;
}stc_irc0_irqpl23_field_t;

typedef union un_irc0_irqpl23{
    uint_io32_t		u32Register;
    stc_irc0_irqpl23_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl23_t;

/* IRQPL24 */
#define IRC0_IRQPL24	(IRC0.unIRQPL24.u32Register)  /*@rg@*/
#define IRC0_IRQPL24_IRQPL96	(IRC0.unIRQPL24.stcField.u5IRQPL96)  /*@bf@*/
#define IRC0_IRQPL24_IRQPL97	(IRC0.unIRQPL24.stcField.u5IRQPL97)  /*@bf@*/
#define IRC0_IRQPL24_IRQPL98	(IRC0.unIRQPL24.stcField.u5IRQPL98)  /*@bf@*/
#define IRC0_IRQPL24_IRQPL99	(IRC0.unIRQPL24.stcField.u5IRQPL99)  /*@bf@*/

typedef struct stc_irc0_irqpl24_field{
    uint_io32_t		u5IRQPL96:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL97:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL98:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL99:5;
    uint_io32_t		:3;
}stc_irc0_irqpl24_field_t;

typedef union un_irc0_irqpl24{
    uint_io32_t		u32Register;
    stc_irc0_irqpl24_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl24_t;

/* IRQPL25 */
#define IRC0_IRQPL25	(IRC0.unIRQPL25.u32Register)  /*@rg@*/
#define IRC0_IRQPL25_IRQPL100	(IRC0.unIRQPL25.stcField.u5IRQPL100)  /*@bf@*/
#define IRC0_IRQPL25_IRQPL101	(IRC0.unIRQPL25.stcField.u5IRQPL101)  /*@bf@*/
#define IRC0_IRQPL25_IRQPL102	(IRC0.unIRQPL25.stcField.u5IRQPL102)  /*@bf@*/
#define IRC0_IRQPL25_IRQPL103	(IRC0.unIRQPL25.stcField.u5IRQPL103)  /*@bf@*/

typedef struct stc_irc0_irqpl25_field{
    uint_io32_t		u5IRQPL100:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL101:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL102:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL103:5;
    uint_io32_t		:3;
}stc_irc0_irqpl25_field_t;

typedef union un_irc0_irqpl25{
    uint_io32_t		u32Register;
    stc_irc0_irqpl25_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl25_t;

/* IRQPL26 */
#define IRC0_IRQPL26	(IRC0.unIRQPL26.u32Register)  /*@rg@*/
#define IRC0_IRQPL26_IRQPL104	(IRC0.unIRQPL26.stcField.u5IRQPL104)  /*@bf@*/
#define IRC0_IRQPL26_IRQPL105	(IRC0.unIRQPL26.stcField.u5IRQPL105)  /*@bf@*/
#define IRC0_IRQPL26_IRQPL106	(IRC0.unIRQPL26.stcField.u5IRQPL106)  /*@bf@*/
#define IRC0_IRQPL26_IRQPL107	(IRC0.unIRQPL26.stcField.u5IRQPL107)  /*@bf@*/

typedef struct stc_irc0_irqpl26_field{
    uint_io32_t		u5IRQPL104:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL105:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL106:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL107:5;
    uint_io32_t		:3;
}stc_irc0_irqpl26_field_t;

typedef union un_irc0_irqpl26{
    uint_io32_t		u32Register;
    stc_irc0_irqpl26_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl26_t;

/* IRQPL27 */
#define IRC0_IRQPL27	(IRC0.unIRQPL27.u32Register)  /*@rg@*/
#define IRC0_IRQPL27_IRQPL108	(IRC0.unIRQPL27.stcField.u5IRQPL108)  /*@bf@*/
#define IRC0_IRQPL27_IRQPL109	(IRC0.unIRQPL27.stcField.u5IRQPL109)  /*@bf@*/
#define IRC0_IRQPL27_IRQPL110	(IRC0.unIRQPL27.stcField.u5IRQPL110)  /*@bf@*/
#define IRC0_IRQPL27_IRQPL111	(IRC0.unIRQPL27.stcField.u5IRQPL111)  /*@bf@*/

typedef struct stc_irc0_irqpl27_field{
    uint_io32_t		u5IRQPL108:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL109:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL110:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL111:5;
    uint_io32_t		:3;
}stc_irc0_irqpl27_field_t;

typedef union un_irc0_irqpl27{
    uint_io32_t		u32Register;
    stc_irc0_irqpl27_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl27_t;

/* IRQPL28 */
#define IRC0_IRQPL28	(IRC0.unIRQPL28.u32Register)  /*@rg@*/
#define IRC0_IRQPL28_IRQPL112	(IRC0.unIRQPL28.stcField.u5IRQPL112)  /*@bf@*/
#define IRC0_IRQPL28_IRQPL113	(IRC0.unIRQPL28.stcField.u5IRQPL113)  /*@bf@*/
#define IRC0_IRQPL28_IRQPL114	(IRC0.unIRQPL28.stcField.u5IRQPL114)  /*@bf@*/
#define IRC0_IRQPL28_IRQPL115	(IRC0.unIRQPL28.stcField.u5IRQPL115)  /*@bf@*/

typedef struct stc_irc0_irqpl28_field{
    uint_io32_t		u5IRQPL112:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL113:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL114:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL115:5;
    uint_io32_t		:3;
}stc_irc0_irqpl28_field_t;

typedef union un_irc0_irqpl28{
    uint_io32_t		u32Register;
    stc_irc0_irqpl28_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl28_t;

/* IRQPL29 */
#define IRC0_IRQPL29	(IRC0.unIRQPL29.u32Register)  /*@rg@*/
#define IRC0_IRQPL29_IRQPL116	(IRC0.unIRQPL29.stcField.u5IRQPL116)  /*@bf@*/
#define IRC0_IRQPL29_IRQPL117	(IRC0.unIRQPL29.stcField.u5IRQPL117)  /*@bf@*/
#define IRC0_IRQPL29_IRQPL118	(IRC0.unIRQPL29.stcField.u5IRQPL118)  /*@bf@*/
#define IRC0_IRQPL29_IRQPL119	(IRC0.unIRQPL29.stcField.u5IRQPL119)  /*@bf@*/

typedef struct stc_irc0_irqpl29_field{
    uint_io32_t		u5IRQPL116:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL117:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL118:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL119:5;
    uint_io32_t		:3;
}stc_irc0_irqpl29_field_t;

typedef union un_irc0_irqpl29{
    uint_io32_t		u32Register;
    stc_irc0_irqpl29_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl29_t;

/* IRQPL30 */
#define IRC0_IRQPL30	(IRC0.unIRQPL30.u32Register)  /*@rg@*/
#define IRC0_IRQPL30_IRQPL120	(IRC0.unIRQPL30.stcField.u5IRQPL120)  /*@bf@*/
#define IRC0_IRQPL30_IRQPL121	(IRC0.unIRQPL30.stcField.u5IRQPL121)  /*@bf@*/
#define IRC0_IRQPL30_IRQPL122	(IRC0.unIRQPL30.stcField.u5IRQPL122)  /*@bf@*/
#define IRC0_IRQPL30_IRQPL123	(IRC0.unIRQPL30.stcField.u5IRQPL123)  /*@bf@*/

typedef struct stc_irc0_irqpl30_field{
    uint_io32_t		u5IRQPL120:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL121:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL122:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL123:5;
    uint_io32_t		:3;
}stc_irc0_irqpl30_field_t;

typedef union un_irc0_irqpl30{
    uint_io32_t		u32Register;
    stc_irc0_irqpl30_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl30_t;

/* IRQPL31 */
#define IRC0_IRQPL31	(IRC0.unIRQPL31.u32Register)  /*@rg@*/
#define IRC0_IRQPL31_IRQPL124	(IRC0.unIRQPL31.stcField.u5IRQPL124)  /*@bf@*/
#define IRC0_IRQPL31_IRQPL125	(IRC0.unIRQPL31.stcField.u5IRQPL125)  /*@bf@*/
#define IRC0_IRQPL31_IRQPL126	(IRC0.unIRQPL31.stcField.u5IRQPL126)  /*@bf@*/
#define IRC0_IRQPL31_IRQPL127	(IRC0.unIRQPL31.stcField.u5IRQPL127)  /*@bf@*/

typedef struct stc_irc0_irqpl31_field{
    uint_io32_t		u5IRQPL124:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL125:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL126:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL127:5;
    uint_io32_t		:3;
}stc_irc0_irqpl31_field_t;

typedef union un_irc0_irqpl31{
    uint_io32_t		u32Register;
    stc_irc0_irqpl31_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl31_t;

/* IRQPL32 */
#define IRC0_IRQPL32	(IRC0.unIRQPL32.u32Register)  /*@rg@*/
#define IRC0_IRQPL32_IRQPL128	(IRC0.unIRQPL32.stcField.u5IRQPL128)  /*@bf@*/
#define IRC0_IRQPL32_IRQPL129	(IRC0.unIRQPL32.stcField.u5IRQPL129)  /*@bf@*/
#define IRC0_IRQPL32_IRQPL130	(IRC0.unIRQPL32.stcField.u5IRQPL130)  /*@bf@*/
#define IRC0_IRQPL32_IRQPL131	(IRC0.unIRQPL32.stcField.u5IRQPL131)  /*@bf@*/

typedef struct stc_irc0_irqpl32_field{
    uint_io32_t		u5IRQPL128:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL129:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL130:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL131:5;
    uint_io32_t		:3;
}stc_irc0_irqpl32_field_t;

typedef union un_irc0_irqpl32{
    uint_io32_t		u32Register;
    stc_irc0_irqpl32_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl32_t;

/* IRQPL33 */
#define IRC0_IRQPL33	(IRC0.unIRQPL33.u32Register)  /*@rg@*/
#define IRC0_IRQPL33_IRQPL132	(IRC0.unIRQPL33.stcField.u5IRQPL132)  /*@bf@*/
#define IRC0_IRQPL33_IRQPL133	(IRC0.unIRQPL33.stcField.u5IRQPL133)  /*@bf@*/
#define IRC0_IRQPL33_IRQPL134	(IRC0.unIRQPL33.stcField.u5IRQPL134)  /*@bf@*/
#define IRC0_IRQPL33_IRQPL135	(IRC0.unIRQPL33.stcField.u5IRQPL135)  /*@bf@*/

typedef struct stc_irc0_irqpl33_field{
    uint_io32_t		u5IRQPL132:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL133:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL134:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL135:5;
    uint_io32_t		:3;
}stc_irc0_irqpl33_field_t;

typedef union un_irc0_irqpl33{
    uint_io32_t		u32Register;
    stc_irc0_irqpl33_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl33_t;

/* IRQPL34 */
#define IRC0_IRQPL34	(IRC0.unIRQPL34.u32Register)  /*@rg@*/
#define IRC0_IRQPL34_IRQPL136	(IRC0.unIRQPL34.stcField.u5IRQPL136)  /*@bf@*/
#define IRC0_IRQPL34_IRQPL137	(IRC0.unIRQPL34.stcField.u5IRQPL137)  /*@bf@*/
#define IRC0_IRQPL34_IRQPL138	(IRC0.unIRQPL34.stcField.u5IRQPL138)  /*@bf@*/
#define IRC0_IRQPL34_IRQPL139	(IRC0.unIRQPL34.stcField.u5IRQPL139)  /*@bf@*/

typedef struct stc_irc0_irqpl34_field{
    uint_io32_t		u5IRQPL136:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL137:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL138:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL139:5;
    uint_io32_t		:3;
}stc_irc0_irqpl34_field_t;

typedef union un_irc0_irqpl34{
    uint_io32_t		u32Register;
    stc_irc0_irqpl34_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl34_t;

/* IRQPL35 */
#define IRC0_IRQPL35	(IRC0.unIRQPL35.u32Register)  /*@rg@*/
#define IRC0_IRQPL35_IRQPL140	(IRC0.unIRQPL35.stcField.u5IRQPL140)  /*@bf@*/
#define IRC0_IRQPL35_IRQPL141	(IRC0.unIRQPL35.stcField.u5IRQPL141)  /*@bf@*/
#define IRC0_IRQPL35_IRQPL142	(IRC0.unIRQPL35.stcField.u5IRQPL142)  /*@bf@*/
#define IRC0_IRQPL35_IRQPL143	(IRC0.unIRQPL35.stcField.u5IRQPL143)  /*@bf@*/

typedef struct stc_irc0_irqpl35_field{
    uint_io32_t		u5IRQPL140:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL141:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL142:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL143:5;
    uint_io32_t		:3;
}stc_irc0_irqpl35_field_t;

typedef union un_irc0_irqpl35{
    uint_io32_t		u32Register;
    stc_irc0_irqpl35_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl35_t;

/* IRQPL36 */
#define IRC0_IRQPL36	(IRC0.unIRQPL36.u32Register)  /*@rg@*/
#define IRC0_IRQPL36_IRQPL144	(IRC0.unIRQPL36.stcField.u5IRQPL144)  /*@bf@*/
#define IRC0_IRQPL36_IRQPL145	(IRC0.unIRQPL36.stcField.u5IRQPL145)  /*@bf@*/
#define IRC0_IRQPL36_IRQPL146	(IRC0.unIRQPL36.stcField.u5IRQPL146)  /*@bf@*/
#define IRC0_IRQPL36_IRQPL147	(IRC0.unIRQPL36.stcField.u5IRQPL147)  /*@bf@*/

typedef struct stc_irc0_irqpl36_field{
    uint_io32_t		u5IRQPL144:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL145:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL146:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL147:5;
    uint_io32_t		:3;
}stc_irc0_irqpl36_field_t;

typedef union un_irc0_irqpl36{
    uint_io32_t		u32Register;
    stc_irc0_irqpl36_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl36_t;

/* IRQPL37 */
#define IRC0_IRQPL37	(IRC0.unIRQPL37.u32Register)  /*@rg@*/
#define IRC0_IRQPL37_IRQPL148	(IRC0.unIRQPL37.stcField.u5IRQPL148)  /*@bf@*/
#define IRC0_IRQPL37_IRQPL149	(IRC0.unIRQPL37.stcField.u5IRQPL149)  /*@bf@*/
#define IRC0_IRQPL37_IRQPL150	(IRC0.unIRQPL37.stcField.u5IRQPL150)  /*@bf@*/
#define IRC0_IRQPL37_IRQPL151	(IRC0.unIRQPL37.stcField.u5IRQPL151)  /*@bf@*/

typedef struct stc_irc0_irqpl37_field{
    uint_io32_t		u5IRQPL148:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL149:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL150:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL151:5;
    uint_io32_t		:3;
}stc_irc0_irqpl37_field_t;

typedef union un_irc0_irqpl37{
    uint_io32_t		u32Register;
    stc_irc0_irqpl37_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl37_t;

/* IRQPL38 */
#define IRC0_IRQPL38	(IRC0.unIRQPL38.u32Register)  /*@rg@*/
#define IRC0_IRQPL38_IRQPL152	(IRC0.unIRQPL38.stcField.u5IRQPL152)  /*@bf@*/
#define IRC0_IRQPL38_IRQPL153	(IRC0.unIRQPL38.stcField.u5IRQPL153)  /*@bf@*/
#define IRC0_IRQPL38_IRQPL154	(IRC0.unIRQPL38.stcField.u5IRQPL154)  /*@bf@*/
#define IRC0_IRQPL38_IRQPL155	(IRC0.unIRQPL38.stcField.u5IRQPL155)  /*@bf@*/

typedef struct stc_irc0_irqpl38_field{
    uint_io32_t		u5IRQPL152:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL153:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL154:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL155:5;
    uint_io32_t		:3;
}stc_irc0_irqpl38_field_t;

typedef union un_irc0_irqpl38{
    uint_io32_t		u32Register;
    stc_irc0_irqpl38_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl38_t;

/* IRQPL39 */
#define IRC0_IRQPL39	(IRC0.unIRQPL39.u32Register)  /*@rg@*/
#define IRC0_IRQPL39_IRQPL156	(IRC0.unIRQPL39.stcField.u5IRQPL156)  /*@bf@*/
#define IRC0_IRQPL39_IRQPL157	(IRC0.unIRQPL39.stcField.u5IRQPL157)  /*@bf@*/
#define IRC0_IRQPL39_IRQPL158	(IRC0.unIRQPL39.stcField.u5IRQPL158)  /*@bf@*/
#define IRC0_IRQPL39_IRQPL159	(IRC0.unIRQPL39.stcField.u5IRQPL159)  /*@bf@*/

typedef struct stc_irc0_irqpl39_field{
    uint_io32_t		u5IRQPL156:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL157:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL158:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL159:5;
    uint_io32_t		:3;
}stc_irc0_irqpl39_field_t;

typedef union un_irc0_irqpl39{
    uint_io32_t		u32Register;
    stc_irc0_irqpl39_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl39_t;

/* IRQPL40 */
#define IRC0_IRQPL40	(IRC0.unIRQPL40.u32Register)  /*@rg@*/
#define IRC0_IRQPL40_IRQPL160	(IRC0.unIRQPL40.stcField.u5IRQPL160)  /*@bf@*/
#define IRC0_IRQPL40_IRQPL161	(IRC0.unIRQPL40.stcField.u5IRQPL161)  /*@bf@*/
#define IRC0_IRQPL40_IRQPL162	(IRC0.unIRQPL40.stcField.u5IRQPL162)  /*@bf@*/
#define IRC0_IRQPL40_IRQPL163	(IRC0.unIRQPL40.stcField.u5IRQPL163)  /*@bf@*/

typedef struct stc_irc0_irqpl40_field{
    uint_io32_t		u5IRQPL160:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL161:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL162:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL163:5;
    uint_io32_t		:3;
}stc_irc0_irqpl40_field_t;

typedef union un_irc0_irqpl40{
    uint_io32_t		u32Register;
    stc_irc0_irqpl40_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl40_t;

/* IRQPL41 */
#define IRC0_IRQPL41	(IRC0.unIRQPL41.u32Register)  /*@rg@*/
#define IRC0_IRQPL41_IRQPL164	(IRC0.unIRQPL41.stcField.u5IRQPL164)  /*@bf@*/
#define IRC0_IRQPL41_IRQPL165	(IRC0.unIRQPL41.stcField.u5IRQPL165)  /*@bf@*/
#define IRC0_IRQPL41_IRQPL166	(IRC0.unIRQPL41.stcField.u5IRQPL166)  /*@bf@*/
#define IRC0_IRQPL41_IRQPL167	(IRC0.unIRQPL41.stcField.u5IRQPL167)  /*@bf@*/

typedef struct stc_irc0_irqpl41_field{
    uint_io32_t		u5IRQPL164:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL165:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL166:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL167:5;
    uint_io32_t		:3;
}stc_irc0_irqpl41_field_t;

typedef union un_irc0_irqpl41{
    uint_io32_t		u32Register;
    stc_irc0_irqpl41_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl41_t;

/* IRQPL42 */
#define IRC0_IRQPL42	(IRC0.unIRQPL42.u32Register)  /*@rg@*/
#define IRC0_IRQPL42_IRQPL168	(IRC0.unIRQPL42.stcField.u5IRQPL168)  /*@bf@*/
#define IRC0_IRQPL42_IRQPL169	(IRC0.unIRQPL42.stcField.u5IRQPL169)  /*@bf@*/
#define IRC0_IRQPL42_IRQPL170	(IRC0.unIRQPL42.stcField.u5IRQPL170)  /*@bf@*/
#define IRC0_IRQPL42_IRQPL171	(IRC0.unIRQPL42.stcField.u5IRQPL171)  /*@bf@*/

typedef struct stc_irc0_irqpl42_field{
    uint_io32_t		u5IRQPL168:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL169:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL170:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL171:5;
    uint_io32_t		:3;
}stc_irc0_irqpl42_field_t;

typedef union un_irc0_irqpl42{
    uint_io32_t		u32Register;
    stc_irc0_irqpl42_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl42_t;

/* IRQPL43 */
#define IRC0_IRQPL43	(IRC0.unIRQPL43.u32Register)  /*@rg@*/
#define IRC0_IRQPL43_IRQPL172	(IRC0.unIRQPL43.stcField.u5IRQPL172)  /*@bf@*/
#define IRC0_IRQPL43_IRQPL173	(IRC0.unIRQPL43.stcField.u5IRQPL173)  /*@bf@*/
#define IRC0_IRQPL43_IRQPL174	(IRC0.unIRQPL43.stcField.u5IRQPL174)  /*@bf@*/
#define IRC0_IRQPL43_IRQPL175	(IRC0.unIRQPL43.stcField.u5IRQPL175)  /*@bf@*/

typedef struct stc_irc0_irqpl43_field{
    uint_io32_t		u5IRQPL172:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL173:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL174:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL175:5;
    uint_io32_t		:3;
}stc_irc0_irqpl43_field_t;

typedef union un_irc0_irqpl43{
    uint_io32_t		u32Register;
    stc_irc0_irqpl43_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl43_t;

/* IRQPL44 */
#define IRC0_IRQPL44	(IRC0.unIRQPL44.u32Register)  /*@rg@*/
#define IRC0_IRQPL44_IRQPL176	(IRC0.unIRQPL44.stcField.u5IRQPL176)  /*@bf@*/
#define IRC0_IRQPL44_IRQPL177	(IRC0.unIRQPL44.stcField.u5IRQPL177)  /*@bf@*/
#define IRC0_IRQPL44_IRQPL178	(IRC0.unIRQPL44.stcField.u5IRQPL178)  /*@bf@*/
#define IRC0_IRQPL44_IRQPL179	(IRC0.unIRQPL44.stcField.u5IRQPL179)  /*@bf@*/

typedef struct stc_irc0_irqpl44_field{
    uint_io32_t		u5IRQPL176:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL177:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL178:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL179:5;
    uint_io32_t		:3;
}stc_irc0_irqpl44_field_t;

typedef union un_irc0_irqpl44{
    uint_io32_t		u32Register;
    stc_irc0_irqpl44_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl44_t;

/* IRQPL45 */
#define IRC0_IRQPL45	(IRC0.unIRQPL45.u32Register)  /*@rg@*/
#define IRC0_IRQPL45_IRQPL180	(IRC0.unIRQPL45.stcField.u5IRQPL180)  /*@bf@*/
#define IRC0_IRQPL45_IRQPL181	(IRC0.unIRQPL45.stcField.u5IRQPL181)  /*@bf@*/
#define IRC0_IRQPL45_IRQPL182	(IRC0.unIRQPL45.stcField.u5IRQPL182)  /*@bf@*/
#define IRC0_IRQPL45_IRQPL183	(IRC0.unIRQPL45.stcField.u5IRQPL183)  /*@bf@*/

typedef struct stc_irc0_irqpl45_field{
    uint_io32_t		u5IRQPL180:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL181:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL182:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL183:5;
    uint_io32_t		:3;
}stc_irc0_irqpl45_field_t;

typedef union un_irc0_irqpl45{
    uint_io32_t		u32Register;
    stc_irc0_irqpl45_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl45_t;

/* IRQPL46 */
#define IRC0_IRQPL46	(IRC0.unIRQPL46.u32Register)  /*@rg@*/
#define IRC0_IRQPL46_IRQPL184	(IRC0.unIRQPL46.stcField.u5IRQPL184)  /*@bf@*/
#define IRC0_IRQPL46_IRQPL185	(IRC0.unIRQPL46.stcField.u5IRQPL185)  /*@bf@*/
#define IRC0_IRQPL46_IRQPL186	(IRC0.unIRQPL46.stcField.u5IRQPL186)  /*@bf@*/
#define IRC0_IRQPL46_IRQPL187	(IRC0.unIRQPL46.stcField.u5IRQPL187)  /*@bf@*/

typedef struct stc_irc0_irqpl46_field{
    uint_io32_t		u5IRQPL184:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL185:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL186:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL187:5;
    uint_io32_t		:3;
}stc_irc0_irqpl46_field_t;

typedef union un_irc0_irqpl46{
    uint_io32_t		u32Register;
    stc_irc0_irqpl46_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl46_t;

/* IRQPL47 */
#define IRC0_IRQPL47	(IRC0.unIRQPL47.u32Register)  /*@rg@*/
#define IRC0_IRQPL47_IRQPL188	(IRC0.unIRQPL47.stcField.u5IRQPL188)  /*@bf@*/
#define IRC0_IRQPL47_IRQPL189	(IRC0.unIRQPL47.stcField.u5IRQPL189)  /*@bf@*/
#define IRC0_IRQPL47_IRQPL190	(IRC0.unIRQPL47.stcField.u5IRQPL190)  /*@bf@*/
#define IRC0_IRQPL47_IRQPL191	(IRC0.unIRQPL47.stcField.u5IRQPL191)  /*@bf@*/

typedef struct stc_irc0_irqpl47_field{
    uint_io32_t		u5IRQPL188:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL189:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL190:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL191:5;
    uint_io32_t		:3;
}stc_irc0_irqpl47_field_t;

typedef union un_irc0_irqpl47{
    uint_io32_t		u32Register;
    stc_irc0_irqpl47_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl47_t;

/* IRQPL48 */
#define IRC0_IRQPL48	(IRC0.unIRQPL48.u32Register)  /*@rg@*/
#define IRC0_IRQPL48_IRQPL192	(IRC0.unIRQPL48.stcField.u5IRQPL192)  /*@bf@*/
#define IRC0_IRQPL48_IRQPL193	(IRC0.unIRQPL48.stcField.u5IRQPL193)  /*@bf@*/
#define IRC0_IRQPL48_IRQPL194	(IRC0.unIRQPL48.stcField.u5IRQPL194)  /*@bf@*/
#define IRC0_IRQPL48_IRQPL195	(IRC0.unIRQPL48.stcField.u5IRQPL195)  /*@bf@*/

typedef struct stc_irc0_irqpl48_field{
    uint_io32_t		u5IRQPL192:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL193:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL194:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL195:5;
    uint_io32_t		:3;
}stc_irc0_irqpl48_field_t;

typedef union un_irc0_irqpl48{
    uint_io32_t		u32Register;
    stc_irc0_irqpl48_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl48_t;

/* IRQPL49 */
#define IRC0_IRQPL49	(IRC0.unIRQPL49.u32Register)  /*@rg@*/
#define IRC0_IRQPL49_IRQPL196	(IRC0.unIRQPL49.stcField.u5IRQPL196)  /*@bf@*/
#define IRC0_IRQPL49_IRQPL197	(IRC0.unIRQPL49.stcField.u5IRQPL197)  /*@bf@*/
#define IRC0_IRQPL49_IRQPL198	(IRC0.unIRQPL49.stcField.u5IRQPL198)  /*@bf@*/
#define IRC0_IRQPL49_IRQPL199	(IRC0.unIRQPL49.stcField.u5IRQPL199)  /*@bf@*/

typedef struct stc_irc0_irqpl49_field{
    uint_io32_t		u5IRQPL196:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL197:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL198:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL199:5;
    uint_io32_t		:3;
}stc_irc0_irqpl49_field_t;

typedef union un_irc0_irqpl49{
    uint_io32_t		u32Register;
    stc_irc0_irqpl49_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl49_t;

/* IRQPL50 */
#define IRC0_IRQPL50	(IRC0.unIRQPL50.u32Register)  /*@rg@*/
#define IRC0_IRQPL50_IRQPL200	(IRC0.unIRQPL50.stcField.u5IRQPL200)  /*@bf@*/
#define IRC0_IRQPL50_IRQPL201	(IRC0.unIRQPL50.stcField.u5IRQPL201)  /*@bf@*/
#define IRC0_IRQPL50_IRQPL202	(IRC0.unIRQPL50.stcField.u5IRQPL202)  /*@bf@*/
#define IRC0_IRQPL50_IRQPL203	(IRC0.unIRQPL50.stcField.u5IRQPL203)  /*@bf@*/

typedef struct stc_irc0_irqpl50_field{
    uint_io32_t		u5IRQPL200:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL201:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL202:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL203:5;
    uint_io32_t		:3;
}stc_irc0_irqpl50_field_t;

typedef union un_irc0_irqpl50{
    uint_io32_t		u32Register;
    stc_irc0_irqpl50_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl50_t;

/* IRQPL51 */
#define IRC0_IRQPL51	(IRC0.unIRQPL51.u32Register)  /*@rg@*/
#define IRC0_IRQPL51_IRQPL204	(IRC0.unIRQPL51.stcField.u5IRQPL204)  /*@bf@*/
#define IRC0_IRQPL51_IRQPL205	(IRC0.unIRQPL51.stcField.u5IRQPL205)  /*@bf@*/
#define IRC0_IRQPL51_IRQPL206	(IRC0.unIRQPL51.stcField.u5IRQPL206)  /*@bf@*/
#define IRC0_IRQPL51_IRQPL207	(IRC0.unIRQPL51.stcField.u5IRQPL207)  /*@bf@*/

typedef struct stc_irc0_irqpl51_field{
    uint_io32_t		u5IRQPL204:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL205:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL206:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL207:5;
    uint_io32_t		:3;
}stc_irc0_irqpl51_field_t;

typedef union un_irc0_irqpl51{
    uint_io32_t		u32Register;
    stc_irc0_irqpl51_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl51_t;

/* IRQPL52 */
#define IRC0_IRQPL52	(IRC0.unIRQPL52.u32Register)  /*@rg@*/
#define IRC0_IRQPL52_IRQPL208	(IRC0.unIRQPL52.stcField.u5IRQPL208)  /*@bf@*/
#define IRC0_IRQPL52_IRQPL209	(IRC0.unIRQPL52.stcField.u5IRQPL209)  /*@bf@*/
#define IRC0_IRQPL52_IRQPL210	(IRC0.unIRQPL52.stcField.u5IRQPL210)  /*@bf@*/
#define IRC0_IRQPL52_IRQPL211	(IRC0.unIRQPL52.stcField.u5IRQPL211)  /*@bf@*/

typedef struct stc_irc0_irqpl52_field{
    uint_io32_t		u5IRQPL208:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL209:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL210:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL211:5;
    uint_io32_t		:3;
}stc_irc0_irqpl52_field_t;

typedef union un_irc0_irqpl52{
    uint_io32_t		u32Register;
    stc_irc0_irqpl52_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl52_t;

/* IRQPL53 */
#define IRC0_IRQPL53	(IRC0.unIRQPL53.u32Register)  /*@rg@*/
#define IRC0_IRQPL53_IRQPL212	(IRC0.unIRQPL53.stcField.u5IRQPL212)  /*@bf@*/
#define IRC0_IRQPL53_IRQPL213	(IRC0.unIRQPL53.stcField.u5IRQPL213)  /*@bf@*/
#define IRC0_IRQPL53_IRQPL214	(IRC0.unIRQPL53.stcField.u5IRQPL214)  /*@bf@*/
#define IRC0_IRQPL53_IRQPL215	(IRC0.unIRQPL53.stcField.u5IRQPL215)  /*@bf@*/

typedef struct stc_irc0_irqpl53_field{
    uint_io32_t		u5IRQPL212:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL213:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL214:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL215:5;
    uint_io32_t		:3;
}stc_irc0_irqpl53_field_t;

typedef union un_irc0_irqpl53{
    uint_io32_t		u32Register;
    stc_irc0_irqpl53_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl53_t;

/* IRQPL54 */
#define IRC0_IRQPL54	(IRC0.unIRQPL54.u32Register)  /*@rg@*/
#define IRC0_IRQPL54_IRQPL216	(IRC0.unIRQPL54.stcField.u5IRQPL216)  /*@bf@*/
#define IRC0_IRQPL54_IRQPL217	(IRC0.unIRQPL54.stcField.u5IRQPL217)  /*@bf@*/
#define IRC0_IRQPL54_IRQPL218	(IRC0.unIRQPL54.stcField.u5IRQPL218)  /*@bf@*/
#define IRC0_IRQPL54_IRQPL219	(IRC0.unIRQPL54.stcField.u5IRQPL219)  /*@bf@*/

typedef struct stc_irc0_irqpl54_field{
    uint_io32_t		u5IRQPL216:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL217:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL218:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL219:5;
    uint_io32_t		:3;
}stc_irc0_irqpl54_field_t;

typedef union un_irc0_irqpl54{
    uint_io32_t		u32Register;
    stc_irc0_irqpl54_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl54_t;

/* IRQPL55 */
#define IRC0_IRQPL55	(IRC0.unIRQPL55.u32Register)  /*@rg@*/
#define IRC0_IRQPL55_IRQPL220	(IRC0.unIRQPL55.stcField.u5IRQPL220)  /*@bf@*/
#define IRC0_IRQPL55_IRQPL221	(IRC0.unIRQPL55.stcField.u5IRQPL221)  /*@bf@*/
#define IRC0_IRQPL55_IRQPL222	(IRC0.unIRQPL55.stcField.u5IRQPL222)  /*@bf@*/
#define IRC0_IRQPL55_IRQPL223	(IRC0.unIRQPL55.stcField.u5IRQPL223)  /*@bf@*/

typedef struct stc_irc0_irqpl55_field{
    uint_io32_t		u5IRQPL220:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL221:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL222:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL223:5;
    uint_io32_t		:3;
}stc_irc0_irqpl55_field_t;

typedef union un_irc0_irqpl55{
    uint_io32_t		u32Register;
    stc_irc0_irqpl55_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl55_t;

/* IRQPL56 */
#define IRC0_IRQPL56	(IRC0.unIRQPL56.u32Register)  /*@rg@*/
#define IRC0_IRQPL56_IRQPL224	(IRC0.unIRQPL56.stcField.u5IRQPL224)  /*@bf@*/
#define IRC0_IRQPL56_IRQPL225	(IRC0.unIRQPL56.stcField.u5IRQPL225)  /*@bf@*/
#define IRC0_IRQPL56_IRQPL226	(IRC0.unIRQPL56.stcField.u5IRQPL226)  /*@bf@*/
#define IRC0_IRQPL56_IRQPL227	(IRC0.unIRQPL56.stcField.u5IRQPL227)  /*@bf@*/

typedef struct stc_irc0_irqpl56_field{
    uint_io32_t		u5IRQPL224:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL225:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL226:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL227:5;
    uint_io32_t		:3;
}stc_irc0_irqpl56_field_t;

typedef union un_irc0_irqpl56{
    uint_io32_t		u32Register;
    stc_irc0_irqpl56_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl56_t;

/* IRQPL57 */
#define IRC0_IRQPL57	(IRC0.unIRQPL57.u32Register)  /*@rg@*/
#define IRC0_IRQPL57_IRQPL228	(IRC0.unIRQPL57.stcField.u5IRQPL228)  /*@bf@*/
#define IRC0_IRQPL57_IRQPL229	(IRC0.unIRQPL57.stcField.u5IRQPL229)  /*@bf@*/
#define IRC0_IRQPL57_IRQPL230	(IRC0.unIRQPL57.stcField.u5IRQPL230)  /*@bf@*/
#define IRC0_IRQPL57_IRQPL231	(IRC0.unIRQPL57.stcField.u5IRQPL231)  /*@bf@*/

typedef struct stc_irc0_irqpl57_field{
    uint_io32_t		u5IRQPL228:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL229:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL230:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL231:5;
    uint_io32_t		:3;
}stc_irc0_irqpl57_field_t;

typedef union un_irc0_irqpl57{
    uint_io32_t		u32Register;
    stc_irc0_irqpl57_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl57_t;

/* IRQPL58 */
#define IRC0_IRQPL58	(IRC0.unIRQPL58.u32Register)  /*@rg@*/
#define IRC0_IRQPL58_IRQPL232	(IRC0.unIRQPL58.stcField.u5IRQPL232)  /*@bf@*/
#define IRC0_IRQPL58_IRQPL233	(IRC0.unIRQPL58.stcField.u5IRQPL233)  /*@bf@*/
#define IRC0_IRQPL58_IRQPL234	(IRC0.unIRQPL58.stcField.u5IRQPL234)  /*@bf@*/
#define IRC0_IRQPL58_IRQPL235	(IRC0.unIRQPL58.stcField.u5IRQPL235)  /*@bf@*/

typedef struct stc_irc0_irqpl58_field{
    uint_io32_t		u5IRQPL232:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL233:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL234:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL235:5;
    uint_io32_t		:3;
}stc_irc0_irqpl58_field_t;

typedef union un_irc0_irqpl58{
    uint_io32_t		u32Register;
    stc_irc0_irqpl58_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl58_t;

/* IRQPL59 */
#define IRC0_IRQPL59	(IRC0.unIRQPL59.u32Register)  /*@rg@*/
#define IRC0_IRQPL59_IRQPL236	(IRC0.unIRQPL59.stcField.u5IRQPL236)  /*@bf@*/
#define IRC0_IRQPL59_IRQPL237	(IRC0.unIRQPL59.stcField.u5IRQPL237)  /*@bf@*/
#define IRC0_IRQPL59_IRQPL238	(IRC0.unIRQPL59.stcField.u5IRQPL238)  /*@bf@*/
#define IRC0_IRQPL59_IRQPL239	(IRC0.unIRQPL59.stcField.u5IRQPL239)  /*@bf@*/

typedef struct stc_irc0_irqpl59_field{
    uint_io32_t		u5IRQPL236:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL237:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL238:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL239:5;
    uint_io32_t		:3;
}stc_irc0_irqpl59_field_t;

typedef union un_irc0_irqpl59{
    uint_io32_t		u32Register;
    stc_irc0_irqpl59_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl59_t;

/* IRQPL60 */
#define IRC0_IRQPL60	(IRC0.unIRQPL60.u32Register)  /*@rg@*/
#define IRC0_IRQPL60_IRQPL240	(IRC0.unIRQPL60.stcField.u5IRQPL240)  /*@bf@*/
#define IRC0_IRQPL60_IRQPL241	(IRC0.unIRQPL60.stcField.u5IRQPL241)  /*@bf@*/
#define IRC0_IRQPL60_IRQPL242	(IRC0.unIRQPL60.stcField.u5IRQPL242)  /*@bf@*/
#define IRC0_IRQPL60_IRQPL243	(IRC0.unIRQPL60.stcField.u5IRQPL243)  /*@bf@*/

typedef struct stc_irc0_irqpl60_field{
    uint_io32_t		u5IRQPL240:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL241:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL242:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL243:5;
    uint_io32_t		:3;
}stc_irc0_irqpl60_field_t;

typedef union un_irc0_irqpl60{
    uint_io32_t		u32Register;
    stc_irc0_irqpl60_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl60_t;

/* IRQPL61 */
#define IRC0_IRQPL61	(IRC0.unIRQPL61.u32Register)  /*@rg@*/
#define IRC0_IRQPL61_IRQPL244	(IRC0.unIRQPL61.stcField.u5IRQPL244)  /*@bf@*/
#define IRC0_IRQPL61_IRQPL245	(IRC0.unIRQPL61.stcField.u5IRQPL245)  /*@bf@*/
#define IRC0_IRQPL61_IRQPL246	(IRC0.unIRQPL61.stcField.u5IRQPL246)  /*@bf@*/
#define IRC0_IRQPL61_IRQPL247	(IRC0.unIRQPL61.stcField.u5IRQPL247)  /*@bf@*/

typedef struct stc_irc0_irqpl61_field{
    uint_io32_t		u5IRQPL244:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL245:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL246:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL247:5;
    uint_io32_t		:3;
}stc_irc0_irqpl61_field_t;

typedef union un_irc0_irqpl61{
    uint_io32_t		u32Register;
    stc_irc0_irqpl61_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl61_t;

/* IRQPL62 */
#define IRC0_IRQPL62	(IRC0.unIRQPL62.u32Register)  /*@rg@*/
#define IRC0_IRQPL62_IRQPL248	(IRC0.unIRQPL62.stcField.u5IRQPL248)  /*@bf@*/
#define IRC0_IRQPL62_IRQPL249	(IRC0.unIRQPL62.stcField.u5IRQPL249)  /*@bf@*/
#define IRC0_IRQPL62_IRQPL250	(IRC0.unIRQPL62.stcField.u5IRQPL250)  /*@bf@*/
#define IRC0_IRQPL62_IRQPL251	(IRC0.unIRQPL62.stcField.u5IRQPL251)  /*@bf@*/

typedef struct stc_irc0_irqpl62_field{
    uint_io32_t		u5IRQPL248:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL249:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL250:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL251:5;
    uint_io32_t		:3;
}stc_irc0_irqpl62_field_t;

typedef union un_irc0_irqpl62{
    uint_io32_t		u32Register;
    stc_irc0_irqpl62_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl62_t;

/* IRQPL63 */
#define IRC0_IRQPL63	(IRC0.unIRQPL63.u32Register)  /*@rg@*/
#define IRC0_IRQPL63_IRQPL252	(IRC0.unIRQPL63.stcField.u5IRQPL252)  /*@bf@*/
#define IRC0_IRQPL63_IRQPL253	(IRC0.unIRQPL63.stcField.u5IRQPL253)  /*@bf@*/
#define IRC0_IRQPL63_IRQPL254	(IRC0.unIRQPL63.stcField.u5IRQPL254)  /*@bf@*/
#define IRC0_IRQPL63_IRQPL255	(IRC0.unIRQPL63.stcField.u5IRQPL255)  /*@bf@*/

typedef struct stc_irc0_irqpl63_field{
    uint_io32_t		u5IRQPL252:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL253:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL254:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL255:5;
    uint_io32_t		:3;
}stc_irc0_irqpl63_field_t;

typedef union un_irc0_irqpl63{
    uint_io32_t		u32Register;
    stc_irc0_irqpl63_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl63_t;

/* IRQPL64 */
#define IRC0_IRQPL64	(IRC0.unIRQPL64.u32Register)  /*@rg@*/
#define IRC0_IRQPL64_IRQPL256	(IRC0.unIRQPL64.stcField.u5IRQPL256)  /*@bf@*/
#define IRC0_IRQPL64_IRQPL257	(IRC0.unIRQPL64.stcField.u5IRQPL257)  /*@bf@*/
#define IRC0_IRQPL64_IRQPL258	(IRC0.unIRQPL64.stcField.u5IRQPL258)  /*@bf@*/
#define IRC0_IRQPL64_IRQPL259	(IRC0.unIRQPL64.stcField.u5IRQPL259)  /*@bf@*/

typedef struct stc_irc0_irqpl64_field{
    uint_io32_t		u5IRQPL256:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL257:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL258:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL259:5;
    uint_io32_t		:3;
}stc_irc0_irqpl64_field_t;

typedef union un_irc0_irqpl64{
    uint_io32_t		u32Register;
    stc_irc0_irqpl64_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl64_t;

/* IRQPL65 */
#define IRC0_IRQPL65	(IRC0.unIRQPL65.u32Register)  /*@rg@*/
#define IRC0_IRQPL65_IRQPL260	(IRC0.unIRQPL65.stcField.u5IRQPL260)  /*@bf@*/
#define IRC0_IRQPL65_IRQPL261	(IRC0.unIRQPL65.stcField.u5IRQPL261)  /*@bf@*/
#define IRC0_IRQPL65_IRQPL262	(IRC0.unIRQPL65.stcField.u5IRQPL262)  /*@bf@*/
#define IRC0_IRQPL65_IRQPL263	(IRC0.unIRQPL65.stcField.u5IRQPL263)  /*@bf@*/

typedef struct stc_irc0_irqpl65_field{
    uint_io32_t		u5IRQPL260:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL261:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL262:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL263:5;
    uint_io32_t		:3;
}stc_irc0_irqpl65_field_t;

typedef union un_irc0_irqpl65{
    uint_io32_t		u32Register;
    stc_irc0_irqpl65_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl65_t;

/* IRQPL66 */
#define IRC0_IRQPL66	(IRC0.unIRQPL66.u32Register)  /*@rg@*/
#define IRC0_IRQPL66_IRQPL264	(IRC0.unIRQPL66.stcField.u5IRQPL264)  /*@bf@*/
#define IRC0_IRQPL66_IRQPL265	(IRC0.unIRQPL66.stcField.u5IRQPL265)  /*@bf@*/
#define IRC0_IRQPL66_IRQPL266	(IRC0.unIRQPL66.stcField.u5IRQPL266)  /*@bf@*/
#define IRC0_IRQPL66_IRQPL267	(IRC0.unIRQPL66.stcField.u5IRQPL267)  /*@bf@*/

typedef struct stc_irc0_irqpl66_field{
    uint_io32_t		u5IRQPL264:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL265:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL266:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL267:5;
    uint_io32_t		:3;
}stc_irc0_irqpl66_field_t;

typedef union un_irc0_irqpl66{
    uint_io32_t		u32Register;
    stc_irc0_irqpl66_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl66_t;

/* IRQPL67 */
#define IRC0_IRQPL67	(IRC0.unIRQPL67.u32Register)  /*@rg@*/
#define IRC0_IRQPL67_IRQPL268	(IRC0.unIRQPL67.stcField.u5IRQPL268)  /*@bf@*/
#define IRC0_IRQPL67_IRQPL269	(IRC0.unIRQPL67.stcField.u5IRQPL269)  /*@bf@*/
#define IRC0_IRQPL67_IRQPL270	(IRC0.unIRQPL67.stcField.u5IRQPL270)  /*@bf@*/
#define IRC0_IRQPL67_IRQPL271	(IRC0.unIRQPL67.stcField.u5IRQPL271)  /*@bf@*/

typedef struct stc_irc0_irqpl67_field{
    uint_io32_t		u5IRQPL268:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL269:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL270:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL271:5;
    uint_io32_t		:3;
}stc_irc0_irqpl67_field_t;

typedef union un_irc0_irqpl67{
    uint_io32_t		u32Register;
    stc_irc0_irqpl67_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl67_t;

/* IRQPL68 */
#define IRC0_IRQPL68	(IRC0.unIRQPL68.u32Register)  /*@rg@*/
#define IRC0_IRQPL68_IRQPL272	(IRC0.unIRQPL68.stcField.u5IRQPL272)  /*@bf@*/
#define IRC0_IRQPL68_IRQPL273	(IRC0.unIRQPL68.stcField.u5IRQPL273)  /*@bf@*/
#define IRC0_IRQPL68_IRQPL274	(IRC0.unIRQPL68.stcField.u5IRQPL274)  /*@bf@*/
#define IRC0_IRQPL68_IRQPL275	(IRC0.unIRQPL68.stcField.u5IRQPL275)  /*@bf@*/

typedef struct stc_irc0_irqpl68_field{
    uint_io32_t		u5IRQPL272:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL273:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL274:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL275:5;
    uint_io32_t		:3;
}stc_irc0_irqpl68_field_t;

typedef union un_irc0_irqpl68{
    uint_io32_t		u32Register;
    stc_irc0_irqpl68_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl68_t;

/* IRQPL69 */
#define IRC0_IRQPL69	(IRC0.unIRQPL69.u32Register)  /*@rg@*/
#define IRC0_IRQPL69_IRQPL276	(IRC0.unIRQPL69.stcField.u5IRQPL276)  /*@bf@*/
#define IRC0_IRQPL69_IRQPL277	(IRC0.unIRQPL69.stcField.u5IRQPL277)  /*@bf@*/
#define IRC0_IRQPL69_IRQPL278	(IRC0.unIRQPL69.stcField.u5IRQPL278)  /*@bf@*/
#define IRC0_IRQPL69_IRQPL279	(IRC0.unIRQPL69.stcField.u5IRQPL279)  /*@bf@*/

typedef struct stc_irc0_irqpl69_field{
    uint_io32_t		u5IRQPL276:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL277:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL278:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL279:5;
    uint_io32_t		:3;
}stc_irc0_irqpl69_field_t;

typedef union un_irc0_irqpl69{
    uint_io32_t		u32Register;
    stc_irc0_irqpl69_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl69_t;

/* IRQPL70 */
#define IRC0_IRQPL70	(IRC0.unIRQPL70.u32Register)  /*@rg@*/
#define IRC0_IRQPL70_IRQPL280	(IRC0.unIRQPL70.stcField.u5IRQPL280)  /*@bf@*/
#define IRC0_IRQPL70_IRQPL281	(IRC0.unIRQPL70.stcField.u5IRQPL281)  /*@bf@*/
#define IRC0_IRQPL70_IRQPL282	(IRC0.unIRQPL70.stcField.u5IRQPL282)  /*@bf@*/
#define IRC0_IRQPL70_IRQPL283	(IRC0.unIRQPL70.stcField.u5IRQPL283)  /*@bf@*/

typedef struct stc_irc0_irqpl70_field{
    uint_io32_t		u5IRQPL280:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL281:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL282:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL283:5;
    uint_io32_t		:3;
}stc_irc0_irqpl70_field_t;

typedef union un_irc0_irqpl70{
    uint_io32_t		u32Register;
    stc_irc0_irqpl70_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl70_t;

/* IRQPL71 */
#define IRC0_IRQPL71	(IRC0.unIRQPL71.u32Register)  /*@rg@*/
#define IRC0_IRQPL71_IRQPL284	(IRC0.unIRQPL71.stcField.u5IRQPL284)  /*@bf@*/
#define IRC0_IRQPL71_IRQPL285	(IRC0.unIRQPL71.stcField.u5IRQPL285)  /*@bf@*/
#define IRC0_IRQPL71_IRQPL286	(IRC0.unIRQPL71.stcField.u5IRQPL286)  /*@bf@*/
#define IRC0_IRQPL71_IRQPL287	(IRC0.unIRQPL71.stcField.u5IRQPL287)  /*@bf@*/

typedef struct stc_irc0_irqpl71_field{
    uint_io32_t		u5IRQPL284:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL285:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL286:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL287:5;
    uint_io32_t		:3;
}stc_irc0_irqpl71_field_t;

typedef union un_irc0_irqpl71{
    uint_io32_t		u32Register;
    stc_irc0_irqpl71_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl71_t;

/* IRQPL72 */
#define IRC0_IRQPL72	(IRC0.unIRQPL72.u32Register)  /*@rg@*/
#define IRC0_IRQPL72_IRQPL288	(IRC0.unIRQPL72.stcField.u5IRQPL288)  /*@bf@*/
#define IRC0_IRQPL72_IRQPL289	(IRC0.unIRQPL72.stcField.u5IRQPL289)  /*@bf@*/
#define IRC0_IRQPL72_IRQPL290	(IRC0.unIRQPL72.stcField.u5IRQPL290)  /*@bf@*/
#define IRC0_IRQPL72_IRQPL291	(IRC0.unIRQPL72.stcField.u5IRQPL291)  /*@bf@*/

typedef struct stc_irc0_irqpl72_field{
    uint_io32_t		u5IRQPL288:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL289:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL290:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL291:5;
    uint_io32_t		:3;
}stc_irc0_irqpl72_field_t;

typedef union un_irc0_irqpl72{
    uint_io32_t		u32Register;
    stc_irc0_irqpl72_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl72_t;

/* IRQPL73 */
#define IRC0_IRQPL73	(IRC0.unIRQPL73.u32Register)  /*@rg@*/
#define IRC0_IRQPL73_IRQPL292	(IRC0.unIRQPL73.stcField.u5IRQPL292)  /*@bf@*/
#define IRC0_IRQPL73_IRQPL293	(IRC0.unIRQPL73.stcField.u5IRQPL293)  /*@bf@*/
#define IRC0_IRQPL73_IRQPL294	(IRC0.unIRQPL73.stcField.u5IRQPL294)  /*@bf@*/
#define IRC0_IRQPL73_IRQPL295	(IRC0.unIRQPL73.stcField.u5IRQPL295)  /*@bf@*/

typedef struct stc_irc0_irqpl73_field{
    uint_io32_t		u5IRQPL292:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL293:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL294:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL295:5;
    uint_io32_t		:3;
}stc_irc0_irqpl73_field_t;

typedef union un_irc0_irqpl73{
    uint_io32_t		u32Register;
    stc_irc0_irqpl73_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl73_t;

/* IRQPL74 */
#define IRC0_IRQPL74	(IRC0.unIRQPL74.u32Register)  /*@rg@*/
#define IRC0_IRQPL74_IRQPL296	(IRC0.unIRQPL74.stcField.u5IRQPL296)  /*@bf@*/
#define IRC0_IRQPL74_IRQPL297	(IRC0.unIRQPL74.stcField.u5IRQPL297)  /*@bf@*/
#define IRC0_IRQPL74_IRQPL298	(IRC0.unIRQPL74.stcField.u5IRQPL298)  /*@bf@*/
#define IRC0_IRQPL74_IRQPL299	(IRC0.unIRQPL74.stcField.u5IRQPL299)  /*@bf@*/

typedef struct stc_irc0_irqpl74_field{
    uint_io32_t		u5IRQPL296:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL297:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL298:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL299:5;
    uint_io32_t		:3;
}stc_irc0_irqpl74_field_t;

typedef union un_irc0_irqpl74{
    uint_io32_t		u32Register;
    stc_irc0_irqpl74_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl74_t;

/* IRQPL75 */
#define IRC0_IRQPL75	(IRC0.unIRQPL75.u32Register)  /*@rg@*/
#define IRC0_IRQPL75_IRQPL300	(IRC0.unIRQPL75.stcField.u5IRQPL300)  /*@bf@*/
#define IRC0_IRQPL75_IRQPL301	(IRC0.unIRQPL75.stcField.u5IRQPL301)  /*@bf@*/
#define IRC0_IRQPL75_IRQPL302	(IRC0.unIRQPL75.stcField.u5IRQPL302)  /*@bf@*/
#define IRC0_IRQPL75_IRQPL303	(IRC0.unIRQPL75.stcField.u5IRQPL303)  /*@bf@*/

typedef struct stc_irc0_irqpl75_field{
    uint_io32_t		u5IRQPL300:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL301:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL302:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL303:5;
    uint_io32_t		:3;
}stc_irc0_irqpl75_field_t;

typedef union un_irc0_irqpl75{
    uint_io32_t		u32Register;
    stc_irc0_irqpl75_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl75_t;

/* IRQPL76 */
#define IRC0_IRQPL76	(IRC0.unIRQPL76.u32Register)  /*@rg@*/
#define IRC0_IRQPL76_IRQPL304	(IRC0.unIRQPL76.stcField.u5IRQPL304)  /*@bf@*/
#define IRC0_IRQPL76_IRQPL305	(IRC0.unIRQPL76.stcField.u5IRQPL305)  /*@bf@*/
#define IRC0_IRQPL76_IRQPL306	(IRC0.unIRQPL76.stcField.u5IRQPL306)  /*@bf@*/
#define IRC0_IRQPL76_IRQPL307	(IRC0.unIRQPL76.stcField.u5IRQPL307)  /*@bf@*/

typedef struct stc_irc0_irqpl76_field{
    uint_io32_t		u5IRQPL304:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL305:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL306:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL307:5;
    uint_io32_t		:3;
}stc_irc0_irqpl76_field_t;

typedef union un_irc0_irqpl76{
    uint_io32_t		u32Register;
    stc_irc0_irqpl76_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl76_t;

/* IRQPL77 */
#define IRC0_IRQPL77	(IRC0.unIRQPL77.u32Register)  /*@rg@*/
#define IRC0_IRQPL77_IRQPL308	(IRC0.unIRQPL77.stcField.u5IRQPL308)  /*@bf@*/
#define IRC0_IRQPL77_IRQPL309	(IRC0.unIRQPL77.stcField.u5IRQPL309)  /*@bf@*/
#define IRC0_IRQPL77_IRQPL310	(IRC0.unIRQPL77.stcField.u5IRQPL310)  /*@bf@*/
#define IRC0_IRQPL77_IRQPL311	(IRC0.unIRQPL77.stcField.u5IRQPL311)  /*@bf@*/

typedef struct stc_irc0_irqpl77_field{
    uint_io32_t		u5IRQPL308:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL309:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL310:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL311:5;
    uint_io32_t		:3;
}stc_irc0_irqpl77_field_t;

typedef union un_irc0_irqpl77{
    uint_io32_t		u32Register;
    stc_irc0_irqpl77_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl77_t;

/* IRQPL78 */
#define IRC0_IRQPL78	(IRC0.unIRQPL78.u32Register)  /*@rg@*/
#define IRC0_IRQPL78_IRQPL312	(IRC0.unIRQPL78.stcField.u5IRQPL312)  /*@bf@*/
#define IRC0_IRQPL78_IRQPL313	(IRC0.unIRQPL78.stcField.u5IRQPL313)  /*@bf@*/
#define IRC0_IRQPL78_IRQPL314	(IRC0.unIRQPL78.stcField.u5IRQPL314)  /*@bf@*/
#define IRC0_IRQPL78_IRQPL315	(IRC0.unIRQPL78.stcField.u5IRQPL315)  /*@bf@*/

typedef struct stc_irc0_irqpl78_field{
    uint_io32_t		u5IRQPL312:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL313:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL314:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL315:5;
    uint_io32_t		:3;
}stc_irc0_irqpl78_field_t;

typedef union un_irc0_irqpl78{
    uint_io32_t		u32Register;
    stc_irc0_irqpl78_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl78_t;

/* IRQPL79 */
#define IRC0_IRQPL79	(IRC0.unIRQPL79.u32Register)  /*@rg@*/
#define IRC0_IRQPL79_IRQPL316	(IRC0.unIRQPL79.stcField.u5IRQPL316)  /*@bf@*/
#define IRC0_IRQPL79_IRQPL317	(IRC0.unIRQPL79.stcField.u5IRQPL317)  /*@bf@*/
#define IRC0_IRQPL79_IRQPL318	(IRC0.unIRQPL79.stcField.u5IRQPL318)  /*@bf@*/
#define IRC0_IRQPL79_IRQPL319	(IRC0.unIRQPL79.stcField.u5IRQPL319)  /*@bf@*/

typedef struct stc_irc0_irqpl79_field{
    uint_io32_t		u5IRQPL316:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL317:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL318:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL319:5;
    uint_io32_t		:3;
}stc_irc0_irqpl79_field_t;

typedef union un_irc0_irqpl79{
    uint_io32_t		u32Register;
    stc_irc0_irqpl79_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl79_t;

/* IRQPL80 */
#define IRC0_IRQPL80	(IRC0.unIRQPL80.u32Register)  /*@rg@*/
#define IRC0_IRQPL80_IRQPL320	(IRC0.unIRQPL80.stcField.u5IRQPL320)  /*@bf@*/
#define IRC0_IRQPL80_IRQPL321	(IRC0.unIRQPL80.stcField.u5IRQPL321)  /*@bf@*/
#define IRC0_IRQPL80_IRQPL322	(IRC0.unIRQPL80.stcField.u5IRQPL322)  /*@bf@*/
#define IRC0_IRQPL80_IRQPL323	(IRC0.unIRQPL80.stcField.u5IRQPL323)  /*@bf@*/

typedef struct stc_irc0_irqpl80_field{
    uint_io32_t		u5IRQPL320:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL321:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL322:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL323:5;
    uint_io32_t		:3;
}stc_irc0_irqpl80_field_t;

typedef union un_irc0_irqpl80{
    uint_io32_t		u32Register;
    stc_irc0_irqpl80_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl80_t;

/* IRQPL81 */
#define IRC0_IRQPL81	(IRC0.unIRQPL81.u32Register)  /*@rg@*/
#define IRC0_IRQPL81_IRQPL324	(IRC0.unIRQPL81.stcField.u5IRQPL324)  /*@bf@*/
#define IRC0_IRQPL81_IRQPL325	(IRC0.unIRQPL81.stcField.u5IRQPL325)  /*@bf@*/
#define IRC0_IRQPL81_IRQPL326	(IRC0.unIRQPL81.stcField.u5IRQPL326)  /*@bf@*/
#define IRC0_IRQPL81_IRQPL327	(IRC0.unIRQPL81.stcField.u5IRQPL327)  /*@bf@*/

typedef struct stc_irc0_irqpl81_field{
    uint_io32_t		u5IRQPL324:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL325:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL326:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL327:5;
    uint_io32_t		:3;
}stc_irc0_irqpl81_field_t;

typedef union un_irc0_irqpl81{
    uint_io32_t		u32Register;
    stc_irc0_irqpl81_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl81_t;

/* IRQPL82 */
#define IRC0_IRQPL82	(IRC0.unIRQPL82.u32Register)  /*@rg@*/
#define IRC0_IRQPL82_IRQPL328	(IRC0.unIRQPL82.stcField.u5IRQPL328)  /*@bf@*/
#define IRC0_IRQPL82_IRQPL329	(IRC0.unIRQPL82.stcField.u5IRQPL329)  /*@bf@*/
#define IRC0_IRQPL82_IRQPL330	(IRC0.unIRQPL82.stcField.u5IRQPL330)  /*@bf@*/
#define IRC0_IRQPL82_IRQPL331	(IRC0.unIRQPL82.stcField.u5IRQPL331)  /*@bf@*/

typedef struct stc_irc0_irqpl82_field{
    uint_io32_t		u5IRQPL328:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL329:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL330:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL331:5;
    uint_io32_t		:3;
}stc_irc0_irqpl82_field_t;

typedef union un_irc0_irqpl82{
    uint_io32_t		u32Register;
    stc_irc0_irqpl82_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl82_t;

/* IRQPL83 */
#define IRC0_IRQPL83	(IRC0.unIRQPL83.u32Register)  /*@rg@*/
#define IRC0_IRQPL83_IRQPL332	(IRC0.unIRQPL83.stcField.u5IRQPL332)  /*@bf@*/
#define IRC0_IRQPL83_IRQPL333	(IRC0.unIRQPL83.stcField.u5IRQPL333)  /*@bf@*/
#define IRC0_IRQPL83_IRQPL334	(IRC0.unIRQPL83.stcField.u5IRQPL334)  /*@bf@*/
#define IRC0_IRQPL83_IRQPL335	(IRC0.unIRQPL83.stcField.u5IRQPL335)  /*@bf@*/

typedef struct stc_irc0_irqpl83_field{
    uint_io32_t		u5IRQPL332:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL333:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL334:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL335:5;
    uint_io32_t		:3;
}stc_irc0_irqpl83_field_t;

typedef union un_irc0_irqpl83{
    uint_io32_t		u32Register;
    stc_irc0_irqpl83_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl83_t;

/* IRQPL84 */
#define IRC0_IRQPL84	(IRC0.unIRQPL84.u32Register)  /*@rg@*/
#define IRC0_IRQPL84_IRQPL336	(IRC0.unIRQPL84.stcField.u5IRQPL336)  /*@bf@*/
#define IRC0_IRQPL84_IRQPL337	(IRC0.unIRQPL84.stcField.u5IRQPL337)  /*@bf@*/
#define IRC0_IRQPL84_IRQPL338	(IRC0.unIRQPL84.stcField.u5IRQPL338)  /*@bf@*/
#define IRC0_IRQPL84_IRQPL339	(IRC0.unIRQPL84.stcField.u5IRQPL339)  /*@bf@*/

typedef struct stc_irc0_irqpl84_field{
    uint_io32_t		u5IRQPL336:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL337:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL338:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL339:5;
    uint_io32_t		:3;
}stc_irc0_irqpl84_field_t;

typedef union un_irc0_irqpl84{
    uint_io32_t		u32Register;
    stc_irc0_irqpl84_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl84_t;

/* IRQPL85 */
#define IRC0_IRQPL85	(IRC0.unIRQPL85.u32Register)  /*@rg@*/
#define IRC0_IRQPL85_IRQPL340	(IRC0.unIRQPL85.stcField.u5IRQPL340)  /*@bf@*/
#define IRC0_IRQPL85_IRQPL341	(IRC0.unIRQPL85.stcField.u5IRQPL341)  /*@bf@*/
#define IRC0_IRQPL85_IRQPL342	(IRC0.unIRQPL85.stcField.u5IRQPL342)  /*@bf@*/
#define IRC0_IRQPL85_IRQPL343	(IRC0.unIRQPL85.stcField.u5IRQPL343)  /*@bf@*/

typedef struct stc_irc0_irqpl85_field{
    uint_io32_t		u5IRQPL340:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL341:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL342:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL343:5;
    uint_io32_t		:3;
}stc_irc0_irqpl85_field_t;

typedef union un_irc0_irqpl85{
    uint_io32_t		u32Register;
    stc_irc0_irqpl85_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl85_t;

/* IRQPL86 */
#define IRC0_IRQPL86	(IRC0.unIRQPL86.u32Register)  /*@rg@*/
#define IRC0_IRQPL86_IRQPL344	(IRC0.unIRQPL86.stcField.u5IRQPL344)  /*@bf@*/
#define IRC0_IRQPL86_IRQPL345	(IRC0.unIRQPL86.stcField.u5IRQPL345)  /*@bf@*/
#define IRC0_IRQPL86_IRQPL346	(IRC0.unIRQPL86.stcField.u5IRQPL346)  /*@bf@*/
#define IRC0_IRQPL86_IRQPL347	(IRC0.unIRQPL86.stcField.u5IRQPL347)  /*@bf@*/

typedef struct stc_irc0_irqpl86_field{
    uint_io32_t		u5IRQPL344:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL345:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL346:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL347:5;
    uint_io32_t		:3;
}stc_irc0_irqpl86_field_t;

typedef union un_irc0_irqpl86{
    uint_io32_t		u32Register;
    stc_irc0_irqpl86_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl86_t;

/* IRQPL87 */
#define IRC0_IRQPL87	(IRC0.unIRQPL87.u32Register)  /*@rg@*/
#define IRC0_IRQPL87_IRQPL348	(IRC0.unIRQPL87.stcField.u5IRQPL348)  /*@bf@*/
#define IRC0_IRQPL87_IRQPL349	(IRC0.unIRQPL87.stcField.u5IRQPL349)  /*@bf@*/
#define IRC0_IRQPL87_IRQPL350	(IRC0.unIRQPL87.stcField.u5IRQPL350)  /*@bf@*/
#define IRC0_IRQPL87_IRQPL351	(IRC0.unIRQPL87.stcField.u5IRQPL351)  /*@bf@*/

typedef struct stc_irc0_irqpl87_field{
    uint_io32_t		u5IRQPL348:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL349:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL350:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL351:5;
    uint_io32_t		:3;
}stc_irc0_irqpl87_field_t;

typedef union un_irc0_irqpl87{
    uint_io32_t		u32Register;
    stc_irc0_irqpl87_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl87_t;

/* IRQPL88 */
#define IRC0_IRQPL88	(IRC0.unIRQPL88.u32Register)  /*@rg@*/
#define IRC0_IRQPL88_IRQPL352	(IRC0.unIRQPL88.stcField.u5IRQPL352)  /*@bf@*/
#define IRC0_IRQPL88_IRQPL353	(IRC0.unIRQPL88.stcField.u5IRQPL353)  /*@bf@*/
#define IRC0_IRQPL88_IRQPL354	(IRC0.unIRQPL88.stcField.u5IRQPL354)  /*@bf@*/
#define IRC0_IRQPL88_IRQPL355	(IRC0.unIRQPL88.stcField.u5IRQPL355)  /*@bf@*/

typedef struct stc_irc0_irqpl88_field{
    uint_io32_t		u5IRQPL352:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL353:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL354:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL355:5;
    uint_io32_t		:3;
}stc_irc0_irqpl88_field_t;

typedef union un_irc0_irqpl88{
    uint_io32_t		u32Register;
    stc_irc0_irqpl88_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl88_t;

/* IRQPL89 */
#define IRC0_IRQPL89	(IRC0.unIRQPL89.u32Register)  /*@rg@*/
#define IRC0_IRQPL89_IRQPL356	(IRC0.unIRQPL89.stcField.u5IRQPL356)  /*@bf@*/
#define IRC0_IRQPL89_IRQPL357	(IRC0.unIRQPL89.stcField.u5IRQPL357)  /*@bf@*/
#define IRC0_IRQPL89_IRQPL358	(IRC0.unIRQPL89.stcField.u5IRQPL358)  /*@bf@*/
#define IRC0_IRQPL89_IRQPL359	(IRC0.unIRQPL89.stcField.u5IRQPL359)  /*@bf@*/

typedef struct stc_irc0_irqpl89_field{
    uint_io32_t		u5IRQPL356:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL357:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL358:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL359:5;
    uint_io32_t		:3;
}stc_irc0_irqpl89_field_t;

typedef union un_irc0_irqpl89{
    uint_io32_t		u32Register;
    stc_irc0_irqpl89_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl89_t;

/* IRQPL90 */
#define IRC0_IRQPL90	(IRC0.unIRQPL90.u32Register)  /*@rg@*/
#define IRC0_IRQPL90_IRQPL360	(IRC0.unIRQPL90.stcField.u5IRQPL360)  /*@bf@*/
#define IRC0_IRQPL90_IRQPL361	(IRC0.unIRQPL90.stcField.u5IRQPL361)  /*@bf@*/
#define IRC0_IRQPL90_IRQPL362	(IRC0.unIRQPL90.stcField.u5IRQPL362)  /*@bf@*/
#define IRC0_IRQPL90_IRQPL363	(IRC0.unIRQPL90.stcField.u5IRQPL363)  /*@bf@*/

typedef struct stc_irc0_irqpl90_field{
    uint_io32_t		u5IRQPL360:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL361:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL362:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL363:5;
    uint_io32_t		:3;
}stc_irc0_irqpl90_field_t;

typedef union un_irc0_irqpl90{
    uint_io32_t		u32Register;
    stc_irc0_irqpl90_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl90_t;

/* IRQPL91 */
#define IRC0_IRQPL91	(IRC0.unIRQPL91.u32Register)  /*@rg@*/
#define IRC0_IRQPL91_IRQPL364	(IRC0.unIRQPL91.stcField.u5IRQPL364)  /*@bf@*/
#define IRC0_IRQPL91_IRQPL365	(IRC0.unIRQPL91.stcField.u5IRQPL365)  /*@bf@*/
#define IRC0_IRQPL91_IRQPL366	(IRC0.unIRQPL91.stcField.u5IRQPL366)  /*@bf@*/
#define IRC0_IRQPL91_IRQPL367	(IRC0.unIRQPL91.stcField.u5IRQPL367)  /*@bf@*/

typedef struct stc_irc0_irqpl91_field{
    uint_io32_t		u5IRQPL364:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL365:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL366:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL367:5;
    uint_io32_t		:3;
}stc_irc0_irqpl91_field_t;

typedef union un_irc0_irqpl91{
    uint_io32_t		u32Register;
    stc_irc0_irqpl91_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl91_t;

/* IRQPL92 */
#define IRC0_IRQPL92	(IRC0.unIRQPL92.u32Register)  /*@rg@*/
#define IRC0_IRQPL92_IRQPL368	(IRC0.unIRQPL92.stcField.u5IRQPL368)  /*@bf@*/
#define IRC0_IRQPL92_IRQPL369	(IRC0.unIRQPL92.stcField.u5IRQPL369)  /*@bf@*/
#define IRC0_IRQPL92_IRQPL370	(IRC0.unIRQPL92.stcField.u5IRQPL370)  /*@bf@*/
#define IRC0_IRQPL92_IRQPL371	(IRC0.unIRQPL92.stcField.u5IRQPL371)  /*@bf@*/

typedef struct stc_irc0_irqpl92_field{
    uint_io32_t		u5IRQPL368:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL369:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL370:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL371:5;
    uint_io32_t		:3;
}stc_irc0_irqpl92_field_t;

typedef union un_irc0_irqpl92{
    uint_io32_t		u32Register;
    stc_irc0_irqpl92_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl92_t;

/* IRQPL93 */
#define IRC0_IRQPL93	(IRC0.unIRQPL93.u32Register)  /*@rg@*/
#define IRC0_IRQPL93_IRQPL372	(IRC0.unIRQPL93.stcField.u5IRQPL372)  /*@bf@*/
#define IRC0_IRQPL93_IRQPL373	(IRC0.unIRQPL93.stcField.u5IRQPL373)  /*@bf@*/
#define IRC0_IRQPL93_IRQPL374	(IRC0.unIRQPL93.stcField.u5IRQPL374)  /*@bf@*/
#define IRC0_IRQPL93_IRQPL375	(IRC0.unIRQPL93.stcField.u5IRQPL375)  /*@bf@*/

typedef struct stc_irc0_irqpl93_field{
    uint_io32_t		u5IRQPL372:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL373:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL374:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL375:5;
    uint_io32_t		:3;
}stc_irc0_irqpl93_field_t;

typedef union un_irc0_irqpl93{
    uint_io32_t		u32Register;
    stc_irc0_irqpl93_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl93_t;

/* IRQPL94 */
#define IRC0_IRQPL94	(IRC0.unIRQPL94.u32Register)  /*@rg@*/
#define IRC0_IRQPL94_IRQPL376	(IRC0.unIRQPL94.stcField.u5IRQPL376)  /*@bf@*/
#define IRC0_IRQPL94_IRQPL377	(IRC0.unIRQPL94.stcField.u5IRQPL377)  /*@bf@*/
#define IRC0_IRQPL94_IRQPL378	(IRC0.unIRQPL94.stcField.u5IRQPL378)  /*@bf@*/
#define IRC0_IRQPL94_IRQPL379	(IRC0.unIRQPL94.stcField.u5IRQPL379)  /*@bf@*/

typedef struct stc_irc0_irqpl94_field{
    uint_io32_t		u5IRQPL376:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL377:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL378:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL379:5;
    uint_io32_t		:3;
}stc_irc0_irqpl94_field_t;

typedef union un_irc0_irqpl94{
    uint_io32_t		u32Register;
    stc_irc0_irqpl94_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl94_t;

/* IRQPL95 */
#define IRC0_IRQPL95	(IRC0.unIRQPL95.u32Register)  /*@rg@*/
#define IRC0_IRQPL95_IRQPL380	(IRC0.unIRQPL95.stcField.u5IRQPL380)  /*@bf@*/
#define IRC0_IRQPL95_IRQPL381	(IRC0.unIRQPL95.stcField.u5IRQPL381)  /*@bf@*/
#define IRC0_IRQPL95_IRQPL382	(IRC0.unIRQPL95.stcField.u5IRQPL382)  /*@bf@*/
#define IRC0_IRQPL95_IRQPL383	(IRC0.unIRQPL95.stcField.u5IRQPL383)  /*@bf@*/

typedef struct stc_irc0_irqpl95_field{
    uint_io32_t		u5IRQPL380:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL381:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL382:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL383:5;
    uint_io32_t		:3;
}stc_irc0_irqpl95_field_t;

typedef union un_irc0_irqpl95{
    uint_io32_t		u32Register;
    stc_irc0_irqpl95_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl95_t;

/* IRQPL96 */
#define IRC0_IRQPL96	(IRC0.unIRQPL96.u32Register)  /*@rg@*/
#define IRC0_IRQPL96_IRQPL384	(IRC0.unIRQPL96.stcField.u5IRQPL384)  /*@bf@*/
#define IRC0_IRQPL96_IRQPL385	(IRC0.unIRQPL96.stcField.u5IRQPL385)  /*@bf@*/
#define IRC0_IRQPL96_IRQPL386	(IRC0.unIRQPL96.stcField.u5IRQPL386)  /*@bf@*/
#define IRC0_IRQPL96_IRQPL387	(IRC0.unIRQPL96.stcField.u5IRQPL387)  /*@bf@*/

typedef struct stc_irc0_irqpl96_field{
    uint_io32_t		u5IRQPL384:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL385:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL386:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL387:5;
    uint_io32_t		:3;
}stc_irc0_irqpl96_field_t;

typedef union un_irc0_irqpl96{
    uint_io32_t		u32Register;
    stc_irc0_irqpl96_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl96_t;

/* IRQPL97 */
#define IRC0_IRQPL97	(IRC0.unIRQPL97.u32Register)  /*@rg@*/
#define IRC0_IRQPL97_IRQPL388	(IRC0.unIRQPL97.stcField.u5IRQPL388)  /*@bf@*/
#define IRC0_IRQPL97_IRQPL389	(IRC0.unIRQPL97.stcField.u5IRQPL389)  /*@bf@*/
#define IRC0_IRQPL97_IRQPL390	(IRC0.unIRQPL97.stcField.u5IRQPL390)  /*@bf@*/
#define IRC0_IRQPL97_IRQPL391	(IRC0.unIRQPL97.stcField.u5IRQPL391)  /*@bf@*/

typedef struct stc_irc0_irqpl97_field{
    uint_io32_t		u5IRQPL388:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL389:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL390:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL391:5;
    uint_io32_t		:3;
}stc_irc0_irqpl97_field_t;

typedef union un_irc0_irqpl97{
    uint_io32_t		u32Register;
    stc_irc0_irqpl97_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl97_t;

/* IRQPL98 */
#define IRC0_IRQPL98	(IRC0.unIRQPL98.u32Register)  /*@rg@*/
#define IRC0_IRQPL98_IRQPL392	(IRC0.unIRQPL98.stcField.u5IRQPL392)  /*@bf@*/
#define IRC0_IRQPL98_IRQPL393	(IRC0.unIRQPL98.stcField.u5IRQPL393)  /*@bf@*/
#define IRC0_IRQPL98_IRQPL394	(IRC0.unIRQPL98.stcField.u5IRQPL394)  /*@bf@*/
#define IRC0_IRQPL98_IRQPL395	(IRC0.unIRQPL98.stcField.u5IRQPL395)  /*@bf@*/

typedef struct stc_irc0_irqpl98_field{
    uint_io32_t		u5IRQPL392:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL393:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL394:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL395:5;
    uint_io32_t		:3;
}stc_irc0_irqpl98_field_t;

typedef union un_irc0_irqpl98{
    uint_io32_t		u32Register;
    stc_irc0_irqpl98_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl98_t;

/* IRQPL99 */
#define IRC0_IRQPL99	(IRC0.unIRQPL99.u32Register)  /*@rg@*/
#define IRC0_IRQPL99_IRQPL396	(IRC0.unIRQPL99.stcField.u5IRQPL396)  /*@bf@*/
#define IRC0_IRQPL99_IRQPL397	(IRC0.unIRQPL99.stcField.u5IRQPL397)  /*@bf@*/
#define IRC0_IRQPL99_IRQPL398	(IRC0.unIRQPL99.stcField.u5IRQPL398)  /*@bf@*/
#define IRC0_IRQPL99_IRQPL399	(IRC0.unIRQPL99.stcField.u5IRQPL399)  /*@bf@*/

typedef struct stc_irc0_irqpl99_field{
    uint_io32_t		u5IRQPL396:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL397:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL398:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL399:5;
    uint_io32_t		:3;
}stc_irc0_irqpl99_field_t;

typedef union un_irc0_irqpl99{
    uint_io32_t		u32Register;
    stc_irc0_irqpl99_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl99_t;

/* IRQPL100 */
#define IRC0_IRQPL100	(IRC0.unIRQPL100.u32Register)  /*@rg@*/
#define IRC0_IRQPL100_IRQPL400	(IRC0.unIRQPL100.stcField.u5IRQPL400)  /*@bf@*/
#define IRC0_IRQPL100_IRQPL401	(IRC0.unIRQPL100.stcField.u5IRQPL401)  /*@bf@*/
#define IRC0_IRQPL100_IRQPL402	(IRC0.unIRQPL100.stcField.u5IRQPL402)  /*@bf@*/
#define IRC0_IRQPL100_IRQPL403	(IRC0.unIRQPL100.stcField.u5IRQPL403)  /*@bf@*/

typedef struct stc_irc0_irqpl100_field{
    uint_io32_t		u5IRQPL400:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL401:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL402:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL403:5;
    uint_io32_t		:3;
}stc_irc0_irqpl100_field_t;

typedef union un_irc0_irqpl100{
    uint_io32_t		u32Register;
    stc_irc0_irqpl100_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl100_t;

/* IRQPL101 */
#define IRC0_IRQPL101	(IRC0.unIRQPL101.u32Register)  /*@rg@*/
#define IRC0_IRQPL101_IRQPL404	(IRC0.unIRQPL101.stcField.u5IRQPL404)  /*@bf@*/
#define IRC0_IRQPL101_IRQPL405	(IRC0.unIRQPL101.stcField.u5IRQPL405)  /*@bf@*/
#define IRC0_IRQPL101_IRQPL406	(IRC0.unIRQPL101.stcField.u5IRQPL406)  /*@bf@*/
#define IRC0_IRQPL101_IRQPL407	(IRC0.unIRQPL101.stcField.u5IRQPL407)  /*@bf@*/

typedef struct stc_irc0_irqpl101_field{
    uint_io32_t		u5IRQPL404:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL405:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL406:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL407:5;
    uint_io32_t		:3;
}stc_irc0_irqpl101_field_t;

typedef union un_irc0_irqpl101{
    uint_io32_t		u32Register;
    stc_irc0_irqpl101_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl101_t;

/* IRQPL102 */
#define IRC0_IRQPL102	(IRC0.unIRQPL102.u32Register)  /*@rg@*/
#define IRC0_IRQPL102_IRQPL408	(IRC0.unIRQPL102.stcField.u5IRQPL408)  /*@bf@*/
#define IRC0_IRQPL102_IRQPL409	(IRC0.unIRQPL102.stcField.u5IRQPL409)  /*@bf@*/
#define IRC0_IRQPL102_IRQPL410	(IRC0.unIRQPL102.stcField.u5IRQPL410)  /*@bf@*/
#define IRC0_IRQPL102_IRQPL411	(IRC0.unIRQPL102.stcField.u5IRQPL411)  /*@bf@*/

typedef struct stc_irc0_irqpl102_field{
    uint_io32_t		u5IRQPL408:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL409:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL410:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL411:5;
    uint_io32_t		:3;
}stc_irc0_irqpl102_field_t;

typedef union un_irc0_irqpl102{
    uint_io32_t		u32Register;
    stc_irc0_irqpl102_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl102_t;

/* IRQPL103 */
#define IRC0_IRQPL103	(IRC0.unIRQPL103.u32Register)  /*@rg@*/
#define IRC0_IRQPL103_IRQPL412	(IRC0.unIRQPL103.stcField.u5IRQPL412)  /*@bf@*/
#define IRC0_IRQPL103_IRQPL413	(IRC0.unIRQPL103.stcField.u5IRQPL413)  /*@bf@*/
#define IRC0_IRQPL103_IRQPL414	(IRC0.unIRQPL103.stcField.u5IRQPL414)  /*@bf@*/
#define IRC0_IRQPL103_IRQPL415	(IRC0.unIRQPL103.stcField.u5IRQPL415)  /*@bf@*/

typedef struct stc_irc0_irqpl103_field{
    uint_io32_t		u5IRQPL412:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL413:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL414:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL415:5;
    uint_io32_t		:3;
}stc_irc0_irqpl103_field_t;

typedef union un_irc0_irqpl103{
    uint_io32_t		u32Register;
    stc_irc0_irqpl103_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl103_t;

/* IRQPL104 */
#define IRC0_IRQPL104	(IRC0.unIRQPL104.u32Register)  /*@rg@*/
#define IRC0_IRQPL104_IRQPL416	(IRC0.unIRQPL104.stcField.u5IRQPL416)  /*@bf@*/
#define IRC0_IRQPL104_IRQPL417	(IRC0.unIRQPL104.stcField.u5IRQPL417)  /*@bf@*/
#define IRC0_IRQPL104_IRQPL418	(IRC0.unIRQPL104.stcField.u5IRQPL418)  /*@bf@*/
#define IRC0_IRQPL104_IRQPL419	(IRC0.unIRQPL104.stcField.u5IRQPL419)  /*@bf@*/

typedef struct stc_irc0_irqpl104_field{
    uint_io32_t		u5IRQPL416:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL417:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL418:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL419:5;
    uint_io32_t		:3;
}stc_irc0_irqpl104_field_t;

typedef union un_irc0_irqpl104{
    uint_io32_t		u32Register;
    stc_irc0_irqpl104_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl104_t;

/* IRQPL105 */
#define IRC0_IRQPL105	(IRC0.unIRQPL105.u32Register)  /*@rg@*/
#define IRC0_IRQPL105_IRQPL420	(IRC0.unIRQPL105.stcField.u5IRQPL420)  /*@bf@*/
#define IRC0_IRQPL105_IRQPL421	(IRC0.unIRQPL105.stcField.u5IRQPL421)  /*@bf@*/
#define IRC0_IRQPL105_IRQPL422	(IRC0.unIRQPL105.stcField.u5IRQPL422)  /*@bf@*/
#define IRC0_IRQPL105_IRQPL423	(IRC0.unIRQPL105.stcField.u5IRQPL423)  /*@bf@*/

typedef struct stc_irc0_irqpl105_field{
    uint_io32_t		u5IRQPL420:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL421:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL422:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL423:5;
    uint_io32_t		:3;
}stc_irc0_irqpl105_field_t;

typedef union un_irc0_irqpl105{
    uint_io32_t		u32Register;
    stc_irc0_irqpl105_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl105_t;

/* IRQPL106 */
#define IRC0_IRQPL106	(IRC0.unIRQPL106.u32Register)  /*@rg@*/
#define IRC0_IRQPL106_IRQPL424	(IRC0.unIRQPL106.stcField.u5IRQPL424)  /*@bf@*/
#define IRC0_IRQPL106_IRQPL425	(IRC0.unIRQPL106.stcField.u5IRQPL425)  /*@bf@*/
#define IRC0_IRQPL106_IRQPL426	(IRC0.unIRQPL106.stcField.u5IRQPL426)  /*@bf@*/
#define IRC0_IRQPL106_IRQPL427	(IRC0.unIRQPL106.stcField.u5IRQPL427)  /*@bf@*/

typedef struct stc_irc0_irqpl106_field{
    uint_io32_t		u5IRQPL424:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL425:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL426:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL427:5;
    uint_io32_t		:3;
}stc_irc0_irqpl106_field_t;

typedef union un_irc0_irqpl106{
    uint_io32_t		u32Register;
    stc_irc0_irqpl106_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl106_t;

/* IRQPL107 */
#define IRC0_IRQPL107	(IRC0.unIRQPL107.u32Register)  /*@rg@*/
#define IRC0_IRQPL107_IRQPL428	(IRC0.unIRQPL107.stcField.u5IRQPL428)  /*@bf@*/
#define IRC0_IRQPL107_IRQPL429	(IRC0.unIRQPL107.stcField.u5IRQPL429)  /*@bf@*/
#define IRC0_IRQPL107_IRQPL430	(IRC0.unIRQPL107.stcField.u5IRQPL430)  /*@bf@*/
#define IRC0_IRQPL107_IRQPL431	(IRC0.unIRQPL107.stcField.u5IRQPL431)  /*@bf@*/

typedef struct stc_irc0_irqpl107_field{
    uint_io32_t		u5IRQPL428:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL429:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL430:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL431:5;
    uint_io32_t		:3;
}stc_irc0_irqpl107_field_t;

typedef union un_irc0_irqpl107{
    uint_io32_t		u32Register;
    stc_irc0_irqpl107_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl107_t;

/* IRQPL108 */
#define IRC0_IRQPL108	(IRC0.unIRQPL108.u32Register)  /*@rg@*/
#define IRC0_IRQPL108_IRQPL432	(IRC0.unIRQPL108.stcField.u5IRQPL432)  /*@bf@*/
#define IRC0_IRQPL108_IRQPL433	(IRC0.unIRQPL108.stcField.u5IRQPL433)  /*@bf@*/
#define IRC0_IRQPL108_IRQPL434	(IRC0.unIRQPL108.stcField.u5IRQPL434)  /*@bf@*/
#define IRC0_IRQPL108_IRQPL435	(IRC0.unIRQPL108.stcField.u5IRQPL435)  /*@bf@*/

typedef struct stc_irc0_irqpl108_field{
    uint_io32_t		u5IRQPL432:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL433:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL434:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL435:5;
    uint_io32_t		:3;
}stc_irc0_irqpl108_field_t;

typedef union un_irc0_irqpl108{
    uint_io32_t		u32Register;
    stc_irc0_irqpl108_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl108_t;

/* IRQPL109 */
#define IRC0_IRQPL109	(IRC0.unIRQPL109.u32Register)  /*@rg@*/
#define IRC0_IRQPL109_IRQPL436	(IRC0.unIRQPL109.stcField.u5IRQPL436)  /*@bf@*/
#define IRC0_IRQPL109_IRQPL437	(IRC0.unIRQPL109.stcField.u5IRQPL437)  /*@bf@*/
#define IRC0_IRQPL109_IRQPL438	(IRC0.unIRQPL109.stcField.u5IRQPL438)  /*@bf@*/
#define IRC0_IRQPL109_IRQPL439	(IRC0.unIRQPL109.stcField.u5IRQPL439)  /*@bf@*/

typedef struct stc_irc0_irqpl109_field{
    uint_io32_t		u5IRQPL436:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL437:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL438:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL439:5;
    uint_io32_t		:3;
}stc_irc0_irqpl109_field_t;

typedef union un_irc0_irqpl109{
    uint_io32_t		u32Register;
    stc_irc0_irqpl109_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl109_t;

/* IRQPL110 */
#define IRC0_IRQPL110	(IRC0.unIRQPL110.u32Register)  /*@rg@*/
#define IRC0_IRQPL110_IRQPL440	(IRC0.unIRQPL110.stcField.u5IRQPL440)  /*@bf@*/
#define IRC0_IRQPL110_IRQPL441	(IRC0.unIRQPL110.stcField.u5IRQPL441)  /*@bf@*/
#define IRC0_IRQPL110_IRQPL442	(IRC0.unIRQPL110.stcField.u5IRQPL442)  /*@bf@*/
#define IRC0_IRQPL110_IRQPL443	(IRC0.unIRQPL110.stcField.u5IRQPL443)  /*@bf@*/

typedef struct stc_irc0_irqpl110_field{
    uint_io32_t		u5IRQPL440:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL441:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL442:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL443:5;
    uint_io32_t		:3;
}stc_irc0_irqpl110_field_t;

typedef union un_irc0_irqpl110{
    uint_io32_t		u32Register;
    stc_irc0_irqpl110_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl110_t;

/* IRQPL111 */
#define IRC0_IRQPL111	(IRC0.unIRQPL111.u32Register)  /*@rg@*/
#define IRC0_IRQPL111_IRQPL444	(IRC0.unIRQPL111.stcField.u5IRQPL444)  /*@bf@*/
#define IRC0_IRQPL111_IRQPL445	(IRC0.unIRQPL111.stcField.u5IRQPL445)  /*@bf@*/
#define IRC0_IRQPL111_IRQPL446	(IRC0.unIRQPL111.stcField.u5IRQPL446)  /*@bf@*/
#define IRC0_IRQPL111_IRQPL447	(IRC0.unIRQPL111.stcField.u5IRQPL447)  /*@bf@*/

typedef struct stc_irc0_irqpl111_field{
    uint_io32_t		u5IRQPL444:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL445:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL446:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL447:5;
    uint_io32_t		:3;
}stc_irc0_irqpl111_field_t;

typedef union un_irc0_irqpl111{
    uint_io32_t		u32Register;
    stc_irc0_irqpl111_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl111_t;

/* IRQPL112 */
#define IRC0_IRQPL112	(IRC0.unIRQPL112.u32Register)  /*@rg@*/
#define IRC0_IRQPL112_IRQPL448	(IRC0.unIRQPL112.stcField.u5IRQPL448)  /*@bf@*/
#define IRC0_IRQPL112_IRQPL449	(IRC0.unIRQPL112.stcField.u5IRQPL449)  /*@bf@*/
#define IRC0_IRQPL112_IRQPL450	(IRC0.unIRQPL112.stcField.u5IRQPL450)  /*@bf@*/
#define IRC0_IRQPL112_IRQPL451	(IRC0.unIRQPL112.stcField.u5IRQPL451)  /*@bf@*/

typedef struct stc_irc0_irqpl112_field{
    uint_io32_t		u5IRQPL448:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL449:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL450:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL451:5;
    uint_io32_t		:3;
}stc_irc0_irqpl112_field_t;

typedef union un_irc0_irqpl112{
    uint_io32_t		u32Register;
    stc_irc0_irqpl112_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl112_t;

/* IRQPL113 */
#define IRC0_IRQPL113	(IRC0.unIRQPL113.u32Register)  /*@rg@*/
#define IRC0_IRQPL113_IRQPL452	(IRC0.unIRQPL113.stcField.u5IRQPL452)  /*@bf@*/
#define IRC0_IRQPL113_IRQPL453	(IRC0.unIRQPL113.stcField.u5IRQPL453)  /*@bf@*/
#define IRC0_IRQPL113_IRQPL454	(IRC0.unIRQPL113.stcField.u5IRQPL454)  /*@bf@*/
#define IRC0_IRQPL113_IRQPL455	(IRC0.unIRQPL113.stcField.u5IRQPL455)  /*@bf@*/

typedef struct stc_irc0_irqpl113_field{
    uint_io32_t		u5IRQPL452:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL453:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL454:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL455:5;
    uint_io32_t		:3;
}stc_irc0_irqpl113_field_t;

typedef union un_irc0_irqpl113{
    uint_io32_t		u32Register;
    stc_irc0_irqpl113_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl113_t;

/* IRQPL114 */
#define IRC0_IRQPL114	(IRC0.unIRQPL114.u32Register)  /*@rg@*/
#define IRC0_IRQPL114_IRQPL456	(IRC0.unIRQPL114.stcField.u5IRQPL456)  /*@bf@*/
#define IRC0_IRQPL114_IRQPL457	(IRC0.unIRQPL114.stcField.u5IRQPL457)  /*@bf@*/
#define IRC0_IRQPL114_IRQPL458	(IRC0.unIRQPL114.stcField.u5IRQPL458)  /*@bf@*/
#define IRC0_IRQPL114_IRQPL459	(IRC0.unIRQPL114.stcField.u5IRQPL459)  /*@bf@*/

typedef struct stc_irc0_irqpl114_field{
    uint_io32_t		u5IRQPL456:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL457:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL458:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL459:5;
    uint_io32_t		:3;
}stc_irc0_irqpl114_field_t;

typedef union un_irc0_irqpl114{
    uint_io32_t		u32Register;
    stc_irc0_irqpl114_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl114_t;

/* IRQPL115 */
#define IRC0_IRQPL115	(IRC0.unIRQPL115.u32Register)  /*@rg@*/
#define IRC0_IRQPL115_IRQPL460	(IRC0.unIRQPL115.stcField.u5IRQPL460)  /*@bf@*/
#define IRC0_IRQPL115_IRQPL461	(IRC0.unIRQPL115.stcField.u5IRQPL461)  /*@bf@*/
#define IRC0_IRQPL115_IRQPL462	(IRC0.unIRQPL115.stcField.u5IRQPL462)  /*@bf@*/
#define IRC0_IRQPL115_IRQPL463	(IRC0.unIRQPL115.stcField.u5IRQPL463)  /*@bf@*/

typedef struct stc_irc0_irqpl115_field{
    uint_io32_t		u5IRQPL460:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL461:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL462:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL463:5;
    uint_io32_t		:3;
}stc_irc0_irqpl115_field_t;

typedef union un_irc0_irqpl115{
    uint_io32_t		u32Register;
    stc_irc0_irqpl115_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl115_t;

/* IRQPL116 */
#define IRC0_IRQPL116	(IRC0.unIRQPL116.u32Register)  /*@rg@*/
#define IRC0_IRQPL116_IRQPL464	(IRC0.unIRQPL116.stcField.u5IRQPL464)  /*@bf@*/
#define IRC0_IRQPL116_IRQPL465	(IRC0.unIRQPL116.stcField.u5IRQPL465)  /*@bf@*/
#define IRC0_IRQPL116_IRQPL466	(IRC0.unIRQPL116.stcField.u5IRQPL466)  /*@bf@*/
#define IRC0_IRQPL116_IRQPL467	(IRC0.unIRQPL116.stcField.u5IRQPL467)  /*@bf@*/

typedef struct stc_irc0_irqpl116_field{
    uint_io32_t		u5IRQPL464:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL465:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL466:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL467:5;
    uint_io32_t		:3;
}stc_irc0_irqpl116_field_t;

typedef union un_irc0_irqpl116{
    uint_io32_t		u32Register;
    stc_irc0_irqpl116_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl116_t;

/* IRQPL117 */
#define IRC0_IRQPL117	(IRC0.unIRQPL117.u32Register)  /*@rg@*/
#define IRC0_IRQPL117_IRQPL468	(IRC0.unIRQPL117.stcField.u5IRQPL468)  /*@bf@*/
#define IRC0_IRQPL117_IRQPL469	(IRC0.unIRQPL117.stcField.u5IRQPL469)  /*@bf@*/
#define IRC0_IRQPL117_IRQPL470	(IRC0.unIRQPL117.stcField.u5IRQPL470)  /*@bf@*/
#define IRC0_IRQPL117_IRQPL471	(IRC0.unIRQPL117.stcField.u5IRQPL471)  /*@bf@*/

typedef struct stc_irc0_irqpl117_field{
    uint_io32_t		u5IRQPL468:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL469:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL470:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL471:5;
    uint_io32_t		:3;
}stc_irc0_irqpl117_field_t;

typedef union un_irc0_irqpl117{
    uint_io32_t		u32Register;
    stc_irc0_irqpl117_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl117_t;

/* IRQPL118 */
#define IRC0_IRQPL118	(IRC0.unIRQPL118.u32Register)  /*@rg@*/
#define IRC0_IRQPL118_IRQPL472	(IRC0.unIRQPL118.stcField.u5IRQPL472)  /*@bf@*/
#define IRC0_IRQPL118_IRQPL473	(IRC0.unIRQPL118.stcField.u5IRQPL473)  /*@bf@*/
#define IRC0_IRQPL118_IRQPL474	(IRC0.unIRQPL118.stcField.u5IRQPL474)  /*@bf@*/
#define IRC0_IRQPL118_IRQPL475	(IRC0.unIRQPL118.stcField.u5IRQPL475)  /*@bf@*/

typedef struct stc_irc0_irqpl118_field{
    uint_io32_t		u5IRQPL472:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL473:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL474:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL475:5;
    uint_io32_t		:3;
}stc_irc0_irqpl118_field_t;

typedef union un_irc0_irqpl118{
    uint_io32_t		u32Register;
    stc_irc0_irqpl118_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl118_t;

/* IRQPL119 */
#define IRC0_IRQPL119	(IRC0.unIRQPL119.u32Register)  /*@rg@*/
#define IRC0_IRQPL119_IRQPL476	(IRC0.unIRQPL119.stcField.u5IRQPL476)  /*@bf@*/
#define IRC0_IRQPL119_IRQPL477	(IRC0.unIRQPL119.stcField.u5IRQPL477)  /*@bf@*/
#define IRC0_IRQPL119_IRQPL478	(IRC0.unIRQPL119.stcField.u5IRQPL478)  /*@bf@*/
#define IRC0_IRQPL119_IRQPL479	(IRC0.unIRQPL119.stcField.u5IRQPL479)  /*@bf@*/

typedef struct stc_irc0_irqpl119_field{
    uint_io32_t		u5IRQPL476:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL477:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL478:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL479:5;
    uint_io32_t		:3;
}stc_irc0_irqpl119_field_t;

typedef union un_irc0_irqpl119{
    uint_io32_t		u32Register;
    stc_irc0_irqpl119_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl119_t;

/* IRQPL120 */
#define IRC0_IRQPL120	(IRC0.unIRQPL120.u32Register)  /*@rg@*/
#define IRC0_IRQPL120_IRQPL480	(IRC0.unIRQPL120.stcField.u5IRQPL480)  /*@bf@*/
#define IRC0_IRQPL120_IRQPL481	(IRC0.unIRQPL120.stcField.u5IRQPL481)  /*@bf@*/
#define IRC0_IRQPL120_IRQPL482	(IRC0.unIRQPL120.stcField.u5IRQPL482)  /*@bf@*/
#define IRC0_IRQPL120_IRQPL483	(IRC0.unIRQPL120.stcField.u5IRQPL483)  /*@bf@*/

typedef struct stc_irc0_irqpl120_field{
    uint_io32_t		u5IRQPL480:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL481:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL482:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL483:5;
    uint_io32_t		:3;
}stc_irc0_irqpl120_field_t;

typedef union un_irc0_irqpl120{
    uint_io32_t		u32Register;
    stc_irc0_irqpl120_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl120_t;

/* IRQPL121 */
#define IRC0_IRQPL121	(IRC0.unIRQPL121.u32Register)  /*@rg@*/
#define IRC0_IRQPL121_IRQPL484	(IRC0.unIRQPL121.stcField.u5IRQPL484)  /*@bf@*/
#define IRC0_IRQPL121_IRQPL485	(IRC0.unIRQPL121.stcField.u5IRQPL485)  /*@bf@*/
#define IRC0_IRQPL121_IRQPL486	(IRC0.unIRQPL121.stcField.u5IRQPL486)  /*@bf@*/
#define IRC0_IRQPL121_IRQPL487	(IRC0.unIRQPL121.stcField.u5IRQPL487)  /*@bf@*/

typedef struct stc_irc0_irqpl121_field{
    uint_io32_t		u5IRQPL484:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL485:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL486:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL487:5;
    uint_io32_t		:3;
}stc_irc0_irqpl121_field_t;

typedef union un_irc0_irqpl121{
    uint_io32_t		u32Register;
    stc_irc0_irqpl121_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl121_t;

/* IRQPL122 */
#define IRC0_IRQPL122	(IRC0.unIRQPL122.u32Register)  /*@rg@*/
#define IRC0_IRQPL122_IRQPL488	(IRC0.unIRQPL122.stcField.u5IRQPL488)  /*@bf@*/
#define IRC0_IRQPL122_IRQPL489	(IRC0.unIRQPL122.stcField.u5IRQPL489)  /*@bf@*/
#define IRC0_IRQPL122_IRQPL490	(IRC0.unIRQPL122.stcField.u5IRQPL490)  /*@bf@*/
#define IRC0_IRQPL122_IRQPL491	(IRC0.unIRQPL122.stcField.u5IRQPL491)  /*@bf@*/

typedef struct stc_irc0_irqpl122_field{
    uint_io32_t		u5IRQPL488:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL489:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL490:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL491:5;
    uint_io32_t		:3;
}stc_irc0_irqpl122_field_t;

typedef union un_irc0_irqpl122{
    uint_io32_t		u32Register;
    stc_irc0_irqpl122_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl122_t;

/* IRQPL123 */
#define IRC0_IRQPL123	(IRC0.unIRQPL123.u32Register)  /*@rg@*/
#define IRC0_IRQPL123_IRQPL492	(IRC0.unIRQPL123.stcField.u5IRQPL492)  /*@bf@*/
#define IRC0_IRQPL123_IRQPL493	(IRC0.unIRQPL123.stcField.u5IRQPL493)  /*@bf@*/
#define IRC0_IRQPL123_IRQPL494	(IRC0.unIRQPL123.stcField.u5IRQPL494)  /*@bf@*/
#define IRC0_IRQPL123_IRQPL495	(IRC0.unIRQPL123.stcField.u5IRQPL495)  /*@bf@*/

typedef struct stc_irc0_irqpl123_field{
    uint_io32_t		u5IRQPL492:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL493:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL494:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL495:5;
    uint_io32_t		:3;
}stc_irc0_irqpl123_field_t;

typedef union un_irc0_irqpl123{
    uint_io32_t		u32Register;
    stc_irc0_irqpl123_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl123_t;

/* IRQPL124 */
#define IRC0_IRQPL124	(IRC0.unIRQPL124.u32Register)  /*@rg@*/
#define IRC0_IRQPL124_IRQPL496	(IRC0.unIRQPL124.stcField.u5IRQPL496)  /*@bf@*/
#define IRC0_IRQPL124_IRQPL497	(IRC0.unIRQPL124.stcField.u5IRQPL497)  /*@bf@*/
#define IRC0_IRQPL124_IRQPL498	(IRC0.unIRQPL124.stcField.u5IRQPL498)  /*@bf@*/
#define IRC0_IRQPL124_IRQPL499	(IRC0.unIRQPL124.stcField.u5IRQPL499)  /*@bf@*/

typedef struct stc_irc0_irqpl124_field{
    uint_io32_t		u5IRQPL496:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL497:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL498:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL499:5;
    uint_io32_t		:3;
}stc_irc0_irqpl124_field_t;

typedef union un_irc0_irqpl124{
    uint_io32_t		u32Register;
    stc_irc0_irqpl124_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl124_t;

/* IRQPL125 */
#define IRC0_IRQPL125	(IRC0.unIRQPL125.u32Register)  /*@rg@*/
#define IRC0_IRQPL125_IRQPL500	(IRC0.unIRQPL125.stcField.u5IRQPL500)  /*@bf@*/
#define IRC0_IRQPL125_IRQPL501	(IRC0.unIRQPL125.stcField.u5IRQPL501)  /*@bf@*/
#define IRC0_IRQPL125_IRQPL502	(IRC0.unIRQPL125.stcField.u5IRQPL502)  /*@bf@*/
#define IRC0_IRQPL125_IRQPL503	(IRC0.unIRQPL125.stcField.u5IRQPL503)  /*@bf@*/

typedef struct stc_irc0_irqpl125_field{
    uint_io32_t		u5IRQPL500:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL501:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL502:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL503:5;
    uint_io32_t		:3;
}stc_irc0_irqpl125_field_t;

typedef union un_irc0_irqpl125{
    uint_io32_t		u32Register;
    stc_irc0_irqpl125_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl125_t;

/* IRQPL126 */
#define IRC0_IRQPL126	(IRC0.unIRQPL126.u32Register)  /*@rg@*/
#define IRC0_IRQPL126_IRQPL504	(IRC0.unIRQPL126.stcField.u5IRQPL504)  /*@bf@*/
#define IRC0_IRQPL126_IRQPL505	(IRC0.unIRQPL126.stcField.u5IRQPL505)  /*@bf@*/
#define IRC0_IRQPL126_IRQPL506	(IRC0.unIRQPL126.stcField.u5IRQPL506)  /*@bf@*/
#define IRC0_IRQPL126_IRQPL507	(IRC0.unIRQPL126.stcField.u5IRQPL507)  /*@bf@*/

typedef struct stc_irc0_irqpl126_field{
    uint_io32_t		u5IRQPL504:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL505:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL506:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL507:5;
    uint_io32_t		:3;
}stc_irc0_irqpl126_field_t;

typedef union un_irc0_irqpl126{
    uint_io32_t		u32Register;
    stc_irc0_irqpl126_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl126_t;

/* IRQPL127 */
#define IRC0_IRQPL127	(IRC0.unIRQPL127.u32Register)  /*@rg@*/
#define IRC0_IRQPL127_IRQPL508	(IRC0.unIRQPL127.stcField.u5IRQPL508)  /*@bf@*/
#define IRC0_IRQPL127_IRQPL509	(IRC0.unIRQPL127.stcField.u5IRQPL509)  /*@bf@*/
#define IRC0_IRQPL127_IRQPL510	(IRC0.unIRQPL127.stcField.u5IRQPL510)  /*@bf@*/
#define IRC0_IRQPL127_IRQPL511	(IRC0.unIRQPL127.stcField.u5IRQPL511)  /*@bf@*/

typedef struct stc_irc0_irqpl127_field{
    uint_io32_t		u5IRQPL508:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL509:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL510:5;
    uint_io32_t		:3;
    uint_io32_t		u5IRQPL511:5;
    uint_io32_t		:3;
}stc_irc0_irqpl127_field_t;

typedef union un_irc0_irqpl127{
    uint_io32_t		u32Register;
    stc_irc0_irqpl127_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqpl127_t;

/* NMIS */
#define IRC0_NMIS	(IRC0.unNMIS.u32Register)  /*@rg@*/
#define IRC0_NMIS_NMIS0	(*(volatile uint_io8_t*)0xB1105580)  /*@bfbba@*/
#define IRC0_NMIS_NMIS1	(*(volatile uint_io8_t*)0xB1105581)  /*@bfbba@*/
#define IRC0_NMIS_NMIS2	(*(volatile uint_io8_t*)0xB1105582)  /*@bfbba@*/
#define IRC0_NMIS_NMIS3	(*(volatile uint_io8_t*)0xB1105583)  /*@bfbba@*/
#define IRC0_NMIS_NMIS4	(*(volatile uint_io8_t*)0xB1105584)  /*@bfbba@*/
#define IRC0_NMIS_NMIS5	(*(volatile uint_io8_t*)0xB1105585)  /*@bfbba@*/
#define IRC0_NMIS_NMIS6	(*(volatile uint_io8_t*)0xB1105586)  /*@bfbba@*/
#define IRC0_NMIS_NMIS7	(*(volatile uint_io8_t*)0xB1105587)  /*@bfbba@*/
#define IRC0_NMIS_NMIS8	(*(volatile uint_io8_t*)0xB1105588)  /*@bfbba@*/
#define IRC0_NMIS_NMIS9	(*(volatile uint_io8_t*)0xB1105589)  /*@bfbba@*/
#define IRC0_NMIS_NMIS10	(*(volatile uint_io8_t*)0xB110558A)  /*@bfbba@*/
#define IRC0_NMIS_NMIS11	(*(volatile uint_io8_t*)0xB110558B)  /*@bfbba@*/
#define IRC0_NMIS_NMIS12	(*(volatile uint_io8_t*)0xB110558C)  /*@bfbba@*/
#define IRC0_NMIS_NMIS13	(*(volatile uint_io8_t*)0xB110558D)  /*@bfbba@*/
#define IRC0_NMIS_NMIS14	(*(volatile uint_io8_t*)0xB110558E)  /*@bfbba@*/
#define IRC0_NMIS_NMIS15	(*(volatile uint_io8_t*)0xB110558F)  /*@bfbba@*/
#define IRC0_NMIS_NMIS16	(*(volatile uint_io8_t*)0xB1105590)  /*@bfbba@*/
#define IRC0_NMIS_NMIS17	(*(volatile uint_io8_t*)0xB1105591)  /*@bfbba@*/
#define IRC0_NMIS_NMIS18	(*(volatile uint_io8_t*)0xB1105592)  /*@bfbba@*/
#define IRC0_NMIS_NMIS19	(*(volatile uint_io8_t*)0xB1105593)  /*@bfbba@*/
#define IRC0_NMIS_NMIS20	(*(volatile uint_io8_t*)0xB1105594)  /*@bfbba@*/
#define IRC0_NMIS_NMIS21	(*(volatile uint_io8_t*)0xB1105595)  /*@bfbba@*/
#define IRC0_NMIS_NMIS22	(*(volatile uint_io8_t*)0xB1105596)  /*@bfbba@*/
#define IRC0_NMIS_NMIS23	(*(volatile uint_io8_t*)0xB1105597)  /*@bfbba@*/
#define IRC0_NMIS_NMIS24	(*(volatile uint_io8_t*)0xB1105598)  /*@bfbba@*/
#define IRC0_NMIS_NMIS25	(*(volatile uint_io8_t*)0xB1105599)  /*@bfbba@*/
#define IRC0_NMIS_NMIS26	(*(volatile uint_io8_t*)0xB110559A)  /*@bfbba@*/
#define IRC0_NMIS_NMIS27	(*(volatile uint_io8_t*)0xB110559B)  /*@bfbba@*/
#define IRC0_NMIS_NMIS28	(*(volatile uint_io8_t*)0xB110559C)  /*@bfbba@*/
#define IRC0_NMIS_NMIS29	(*(volatile uint_io8_t*)0xB110559D)  /*@bfbba@*/
#define IRC0_NMIS_NMIS30	(*(volatile uint_io8_t*)0xB110559E)  /*@bfbba@*/
#define IRC0_NMIS_NMIS31	(*(volatile uint_io8_t*)0xB110559F)  /*@bfbba@*/

typedef struct stc_irc0_nmis_field{
    uint_io32_t		u1NMIS0:1;
    uint_io32_t		u1NMIS1:1;
    uint_io32_t		u1NMIS2:1;
    uint_io32_t		u1NMIS3:1;
    uint_io32_t		u1NMIS4:1;
    uint_io32_t		u1NMIS5:1;
    uint_io32_t		u1NMIS6:1;
    uint_io32_t		u1NMIS7:1;
    uint_io32_t		u1NMIS8:1;
    uint_io32_t		u1NMIS9:1;
    uint_io32_t		u1NMIS10:1;
    uint_io32_t		u1NMIS11:1;
    uint_io32_t		u1NMIS12:1;
    uint_io32_t		u1NMIS13:1;
    uint_io32_t		u1NMIS14:1;
    uint_io32_t		u1NMIS15:1;
    uint_io32_t		u1NMIS16:1;
    uint_io32_t		u1NMIS17:1;
    uint_io32_t		u1NMIS18:1;
    uint_io32_t		u1NMIS19:1;
    uint_io32_t		u1NMIS20:1;
    uint_io32_t		u1NMIS21:1;
    uint_io32_t		u1NMIS22:1;
    uint_io32_t		u1NMIS23:1;
    uint_io32_t		u1NMIS24:1;
    uint_io32_t		u1NMIS25:1;
    uint_io32_t		u1NMIS26:1;
    uint_io32_t		u1NMIS27:1;
    uint_io32_t		u1NMIS28:1;
    uint_io32_t		u1NMIS29:1;
    uint_io32_t		u1NMIS30:1;
    uint_io32_t		u1NMIS31:1;
}stc_irc0_nmis_field_t;

typedef union un_irc0_nmis{
    uint_io32_t		u32Register;
    stc_irc0_nmis_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmis_t;

/* NMIR */
#define IRC0_NMIR	(IRC0.unNMIR.u32Register)  /*@rg@*/
#define IRC0_NMIR_NMIR0	(*(volatile uint_io8_t*)0xB11055A0)  /*@bfbba@*/
#define IRC0_NMIR_NMIR1	(*(volatile uint_io8_t*)0xB11055A1)  /*@bfbba@*/
#define IRC0_NMIR_NMIR2	(*(volatile uint_io8_t*)0xB11055A2)  /*@bfbba@*/
#define IRC0_NMIR_NMIR3	(*(volatile uint_io8_t*)0xB11055A3)  /*@bfbba@*/
#define IRC0_NMIR_NMIR4	(*(volatile uint_io8_t*)0xB11055A4)  /*@bfbba@*/
#define IRC0_NMIR_NMIR5	(*(volatile uint_io8_t*)0xB11055A5)  /*@bfbba@*/
#define IRC0_NMIR_NMIR6	(*(volatile uint_io8_t*)0xB11055A6)  /*@bfbba@*/
#define IRC0_NMIR_NMIR7	(*(volatile uint_io8_t*)0xB11055A7)  /*@bfbba@*/
#define IRC0_NMIR_NMIR8	(*(volatile uint_io8_t*)0xB11055A8)  /*@bfbba@*/
#define IRC0_NMIR_NMIR9	(*(volatile uint_io8_t*)0xB11055A9)  /*@bfbba@*/
#define IRC0_NMIR_NMIR10	(*(volatile uint_io8_t*)0xB11055AA)  /*@bfbba@*/
#define IRC0_NMIR_NMIR11	(*(volatile uint_io8_t*)0xB11055AB)  /*@bfbba@*/
#define IRC0_NMIR_NMIR12	(*(volatile uint_io8_t*)0xB11055AC)  /*@bfbba@*/
#define IRC0_NMIR_NMIR13	(*(volatile uint_io8_t*)0xB11055AD)  /*@bfbba@*/
#define IRC0_NMIR_NMIR14	(*(volatile uint_io8_t*)0xB11055AE)  /*@bfbba@*/
#define IRC0_NMIR_NMIR15	(*(volatile uint_io8_t*)0xB11055AF)  /*@bfbba@*/
#define IRC0_NMIR_NMIR16	(*(volatile uint_io8_t*)0xB11055B0)  /*@bfbba@*/
#define IRC0_NMIR_NMIR17	(*(volatile uint_io8_t*)0xB11055B1)  /*@bfbba@*/
#define IRC0_NMIR_NMIR18	(*(volatile uint_io8_t*)0xB11055B2)  /*@bfbba@*/
#define IRC0_NMIR_NMIR19	(*(volatile uint_io8_t*)0xB11055B3)  /*@bfbba@*/
#define IRC0_NMIR_NMIR20	(*(volatile uint_io8_t*)0xB11055B4)  /*@bfbba@*/
#define IRC0_NMIR_NMIR21	(*(volatile uint_io8_t*)0xB11055B5)  /*@bfbba@*/
#define IRC0_NMIR_NMIR22	(*(volatile uint_io8_t*)0xB11055B6)  /*@bfbba@*/
#define IRC0_NMIR_NMIR23	(*(volatile uint_io8_t*)0xB11055B7)  /*@bfbba@*/
#define IRC0_NMIR_NMIR24	(*(volatile uint_io8_t*)0xB11055B8)  /*@bfbba@*/
#define IRC0_NMIR_NMIR25	(*(volatile uint_io8_t*)0xB11055B9)  /*@bfbba@*/
#define IRC0_NMIR_NMIR26	(*(volatile uint_io8_t*)0xB11055BA)  /*@bfbba@*/
#define IRC0_NMIR_NMIR27	(*(volatile uint_io8_t*)0xB11055BB)  /*@bfbba@*/
#define IRC0_NMIR_NMIR28	(*(volatile uint_io8_t*)0xB11055BC)  /*@bfbba@*/
#define IRC0_NMIR_NMIR29	(*(volatile uint_io8_t*)0xB11055BD)  /*@bfbba@*/
#define IRC0_NMIR_NMIR30	(*(volatile uint_io8_t*)0xB11055BE)  /*@bfbba@*/
#define IRC0_NMIR_NMIR31	(*(volatile uint_io8_t*)0xB11055BF)  /*@bfbba@*/

typedef struct stc_irc0_nmir_field{
    uint_io32_t		u1NMIR0:1;
    uint_io32_t		u1NMIR1:1;
    uint_io32_t		u1NMIR2:1;
    uint_io32_t		u1NMIR3:1;
    uint_io32_t		u1NMIR4:1;
    uint_io32_t		u1NMIR5:1;
    uint_io32_t		u1NMIR6:1;
    uint_io32_t		u1NMIR7:1;
    uint_io32_t		u1NMIR8:1;
    uint_io32_t		u1NMIR9:1;
    uint_io32_t		u1NMIR10:1;
    uint_io32_t		u1NMIR11:1;
    uint_io32_t		u1NMIR12:1;
    uint_io32_t		u1NMIR13:1;
    uint_io32_t		u1NMIR14:1;
    uint_io32_t		u1NMIR15:1;
    uint_io32_t		u1NMIR16:1;
    uint_io32_t		u1NMIR17:1;
    uint_io32_t		u1NMIR18:1;
    uint_io32_t		u1NMIR19:1;
    uint_io32_t		u1NMIR20:1;
    uint_io32_t		u1NMIR21:1;
    uint_io32_t		u1NMIR22:1;
    uint_io32_t		u1NMIR23:1;
    uint_io32_t		u1NMIR24:1;
    uint_io32_t		u1NMIR25:1;
    uint_io32_t		u1NMIR26:1;
    uint_io32_t		u1NMIR27:1;
    uint_io32_t		u1NMIR28:1;
    uint_io32_t		u1NMIR29:1;
    uint_io32_t		u1NMIR30:1;
    uint_io32_t		u1NMIR31:1;
}stc_irc0_nmir_field_t;

typedef union un_irc0_nmir{
    uint_io32_t		u32Register;
    stc_irc0_nmir_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmir_t;

/* NMISIS */
#define IRC0_NMISIS	(IRC0.unNMISIS.u32Register)  /*@rg@*/
#define IRC0_NMISIS_NMISIS0	(*(volatile uint_io8_t*)0xB11055C0)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS1	(*(volatile uint_io8_t*)0xB11055C1)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS2	(*(volatile uint_io8_t*)0xB11055C2)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS3	(*(volatile uint_io8_t*)0xB11055C3)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS4	(*(volatile uint_io8_t*)0xB11055C4)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS5	(*(volatile uint_io8_t*)0xB11055C5)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS6	(*(volatile uint_io8_t*)0xB11055C6)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS7	(*(volatile uint_io8_t*)0xB11055C7)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS8	(*(volatile uint_io8_t*)0xB11055C8)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS9	(*(volatile uint_io8_t*)0xB11055C9)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS10	(*(volatile uint_io8_t*)0xB11055CA)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS11	(*(volatile uint_io8_t*)0xB11055CB)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS12	(*(volatile uint_io8_t*)0xB11055CC)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS13	(*(volatile uint_io8_t*)0xB11055CD)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS14	(*(volatile uint_io8_t*)0xB11055CE)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS15	(*(volatile uint_io8_t*)0xB11055CF)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS16	(*(volatile uint_io8_t*)0xB11055D0)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS17	(*(volatile uint_io8_t*)0xB11055D1)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS18	(*(volatile uint_io8_t*)0xB11055D2)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS19	(*(volatile uint_io8_t*)0xB11055D3)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS20	(*(volatile uint_io8_t*)0xB11055D4)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS21	(*(volatile uint_io8_t*)0xB11055D5)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS22	(*(volatile uint_io8_t*)0xB11055D6)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS23	(*(volatile uint_io8_t*)0xB11055D7)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS24	(*(volatile uint_io8_t*)0xB11055D8)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS25	(*(volatile uint_io8_t*)0xB11055D9)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS26	(*(volatile uint_io8_t*)0xB11055DA)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS27	(*(volatile uint_io8_t*)0xB11055DB)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS28	(*(volatile uint_io8_t*)0xB11055DC)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS29	(*(volatile uint_io8_t*)0xB11055DD)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS30	(*(volatile uint_io8_t*)0xB11055DE)  /*@bfbba@*/
#define IRC0_NMISIS_NMISIS31	(*(volatile uint_io8_t*)0xB11055DF)  /*@bfbba@*/

typedef struct stc_irc0_nmisis_field{
    uint_io32_t		u1NMISIS0:1;
    uint_io32_t		u1NMISIS1:1;
    uint_io32_t		u1NMISIS2:1;
    uint_io32_t		u1NMISIS3:1;
    uint_io32_t		u1NMISIS4:1;
    uint_io32_t		u1NMISIS5:1;
    uint_io32_t		u1NMISIS6:1;
    uint_io32_t		u1NMISIS7:1;
    uint_io32_t		u1NMISIS8:1;
    uint_io32_t		u1NMISIS9:1;
    uint_io32_t		u1NMISIS10:1;
    uint_io32_t		u1NMISIS11:1;
    uint_io32_t		u1NMISIS12:1;
    uint_io32_t		u1NMISIS13:1;
    uint_io32_t		u1NMISIS14:1;
    uint_io32_t		u1NMISIS15:1;
    uint_io32_t		u1NMISIS16:1;
    uint_io32_t		u1NMISIS17:1;
    uint_io32_t		u1NMISIS18:1;
    uint_io32_t		u1NMISIS19:1;
    uint_io32_t		u1NMISIS20:1;
    uint_io32_t		u1NMISIS21:1;
    uint_io32_t		u1NMISIS22:1;
    uint_io32_t		u1NMISIS23:1;
    uint_io32_t		u1NMISIS24:1;
    uint_io32_t		u1NMISIS25:1;
    uint_io32_t		u1NMISIS26:1;
    uint_io32_t		u1NMISIS27:1;
    uint_io32_t		u1NMISIS28:1;
    uint_io32_t		u1NMISIS29:1;
    uint_io32_t		u1NMISIS30:1;
    uint_io32_t		u1NMISIS31:1;
}stc_irc0_nmisis_field_t;

typedef union un_irc0_nmisis{
    uint_io32_t		u32Register;
    stc_irc0_nmisis_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmisis_t;

/* IRQS0 */
#define IRC0_IRQS0	(IRC0.unIRQS0.u32Register)  /*@rg@*/
#define IRC0_IRQS0_IRQS0	(*(volatile uint_io8_t*)0xB1105600)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS1	(*(volatile uint_io8_t*)0xB1105601)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS2	(*(volatile uint_io8_t*)0xB1105602)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS3	(*(volatile uint_io8_t*)0xB1105603)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS4	(*(volatile uint_io8_t*)0xB1105604)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS5	(*(volatile uint_io8_t*)0xB1105605)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS6	(*(volatile uint_io8_t*)0xB1105606)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS7	(*(volatile uint_io8_t*)0xB1105607)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS8	(*(volatile uint_io8_t*)0xB1105608)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS9	(*(volatile uint_io8_t*)0xB1105609)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS10	(*(volatile uint_io8_t*)0xB110560A)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS11	(*(volatile uint_io8_t*)0xB110560B)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS12	(*(volatile uint_io8_t*)0xB110560C)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS13	(*(volatile uint_io8_t*)0xB110560D)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS14	(*(volatile uint_io8_t*)0xB110560E)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS15	(*(volatile uint_io8_t*)0xB110560F)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS16	(*(volatile uint_io8_t*)0xB1105610)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS17	(*(volatile uint_io8_t*)0xB1105611)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS18	(*(volatile uint_io8_t*)0xB1105612)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS19	(*(volatile uint_io8_t*)0xB1105613)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS20	(*(volatile uint_io8_t*)0xB1105614)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS21	(*(volatile uint_io8_t*)0xB1105615)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS22	(*(volatile uint_io8_t*)0xB1105616)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS23	(*(volatile uint_io8_t*)0xB1105617)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS24	(*(volatile uint_io8_t*)0xB1105618)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS25	(*(volatile uint_io8_t*)0xB1105619)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS26	(*(volatile uint_io8_t*)0xB110561A)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS27	(*(volatile uint_io8_t*)0xB110561B)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS28	(*(volatile uint_io8_t*)0xB110561C)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS29	(*(volatile uint_io8_t*)0xB110561D)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS30	(*(volatile uint_io8_t*)0xB110561E)  /*@bfbba@*/
#define IRC0_IRQS0_IRQS31	(*(volatile uint_io8_t*)0xB110561F)  /*@bfbba@*/

typedef struct stc_irc0_irqs0_field{
    uint_io32_t		u1IRQS0:1;
    uint_io32_t		u1IRQS1:1;
    uint_io32_t		u1IRQS2:1;
    uint_io32_t		u1IRQS3:1;
    uint_io32_t		u1IRQS4:1;
    uint_io32_t		u1IRQS5:1;
    uint_io32_t		u1IRQS6:1;
    uint_io32_t		u1IRQS7:1;
    uint_io32_t		u1IRQS8:1;
    uint_io32_t		u1IRQS9:1;
    uint_io32_t		u1IRQS10:1;
    uint_io32_t		u1IRQS11:1;
    uint_io32_t		u1IRQS12:1;
    uint_io32_t		u1IRQS13:1;
    uint_io32_t		u1IRQS14:1;
    uint_io32_t		u1IRQS15:1;
    uint_io32_t		u1IRQS16:1;
    uint_io32_t		u1IRQS17:1;
    uint_io32_t		u1IRQS18:1;
    uint_io32_t		u1IRQS19:1;
    uint_io32_t		u1IRQS20:1;
    uint_io32_t		u1IRQS21:1;
    uint_io32_t		u1IRQS22:1;
    uint_io32_t		u1IRQS23:1;
    uint_io32_t		u1IRQS24:1;
    uint_io32_t		u1IRQS25:1;
    uint_io32_t		u1IRQS26:1;
    uint_io32_t		u1IRQS27:1;
    uint_io32_t		u1IRQS28:1;
    uint_io32_t		u1IRQS29:1;
    uint_io32_t		u1IRQS30:1;
    uint_io32_t		u1IRQS31:1;
}stc_irc0_irqs0_field_t;

typedef union un_irc0_irqs0{
    uint_io32_t		u32Register;
    stc_irc0_irqs0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs0_t;

/* IRQS1 */
#define IRC0_IRQS1	(IRC0.unIRQS1.u32Register)  /*@rg@*/
#define IRC0_IRQS1_IRQS32	(*(volatile uint_io8_t*)0xB1105620)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS33	(*(volatile uint_io8_t*)0xB1105621)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS34	(*(volatile uint_io8_t*)0xB1105622)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS35	(*(volatile uint_io8_t*)0xB1105623)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS36	(*(volatile uint_io8_t*)0xB1105624)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS37	(*(volatile uint_io8_t*)0xB1105625)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS38	(*(volatile uint_io8_t*)0xB1105626)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS39	(*(volatile uint_io8_t*)0xB1105627)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS40	(*(volatile uint_io8_t*)0xB1105628)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS41	(*(volatile uint_io8_t*)0xB1105629)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS42	(*(volatile uint_io8_t*)0xB110562A)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS43	(*(volatile uint_io8_t*)0xB110562B)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS44	(*(volatile uint_io8_t*)0xB110562C)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS45	(*(volatile uint_io8_t*)0xB110562D)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS46	(*(volatile uint_io8_t*)0xB110562E)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS47	(*(volatile uint_io8_t*)0xB110562F)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS48	(*(volatile uint_io8_t*)0xB1105630)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS49	(*(volatile uint_io8_t*)0xB1105631)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS50	(*(volatile uint_io8_t*)0xB1105632)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS51	(*(volatile uint_io8_t*)0xB1105633)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS52	(*(volatile uint_io8_t*)0xB1105634)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS53	(*(volatile uint_io8_t*)0xB1105635)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS54	(*(volatile uint_io8_t*)0xB1105636)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS55	(*(volatile uint_io8_t*)0xB1105637)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS56	(*(volatile uint_io8_t*)0xB1105638)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS57	(*(volatile uint_io8_t*)0xB1105639)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS58	(*(volatile uint_io8_t*)0xB110563A)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS59	(*(volatile uint_io8_t*)0xB110563B)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS60	(*(volatile uint_io8_t*)0xB110563C)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS61	(*(volatile uint_io8_t*)0xB110563D)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS62	(*(volatile uint_io8_t*)0xB110563E)  /*@bfbba@*/
#define IRC0_IRQS1_IRQS63	(*(volatile uint_io8_t*)0xB110563F)  /*@bfbba@*/

typedef struct stc_irc0_irqs1_field{
    uint_io32_t		u1IRQS32:1;
    uint_io32_t		u1IRQS33:1;
    uint_io32_t		u1IRQS34:1;
    uint_io32_t		u1IRQS35:1;
    uint_io32_t		u1IRQS36:1;
    uint_io32_t		u1IRQS37:1;
    uint_io32_t		u1IRQS38:1;
    uint_io32_t		u1IRQS39:1;
    uint_io32_t		u1IRQS40:1;
    uint_io32_t		u1IRQS41:1;
    uint_io32_t		u1IRQS42:1;
    uint_io32_t		u1IRQS43:1;
    uint_io32_t		u1IRQS44:1;
    uint_io32_t		u1IRQS45:1;
    uint_io32_t		u1IRQS46:1;
    uint_io32_t		u1IRQS47:1;
    uint_io32_t		u1IRQS48:1;
    uint_io32_t		u1IRQS49:1;
    uint_io32_t		u1IRQS50:1;
    uint_io32_t		u1IRQS51:1;
    uint_io32_t		u1IRQS52:1;
    uint_io32_t		u1IRQS53:1;
    uint_io32_t		u1IRQS54:1;
    uint_io32_t		u1IRQS55:1;
    uint_io32_t		u1IRQS56:1;
    uint_io32_t		u1IRQS57:1;
    uint_io32_t		u1IRQS58:1;
    uint_io32_t		u1IRQS59:1;
    uint_io32_t		u1IRQS60:1;
    uint_io32_t		u1IRQS61:1;
    uint_io32_t		u1IRQS62:1;
    uint_io32_t		u1IRQS63:1;
}stc_irc0_irqs1_field_t;

typedef union un_irc0_irqs1{
    uint_io32_t		u32Register;
    stc_irc0_irqs1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs1_t;

/* IRQS2 */
#define IRC0_IRQS2	(IRC0.unIRQS2.u32Register)  /*@rg@*/
#define IRC0_IRQS2_IRQS64	(*(volatile uint_io8_t*)0xB1105640)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS65	(*(volatile uint_io8_t*)0xB1105641)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS66	(*(volatile uint_io8_t*)0xB1105642)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS67	(*(volatile uint_io8_t*)0xB1105643)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS68	(*(volatile uint_io8_t*)0xB1105644)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS69	(*(volatile uint_io8_t*)0xB1105645)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS70	(*(volatile uint_io8_t*)0xB1105646)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS71	(*(volatile uint_io8_t*)0xB1105647)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS72	(*(volatile uint_io8_t*)0xB1105648)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS73	(*(volatile uint_io8_t*)0xB1105649)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS74	(*(volatile uint_io8_t*)0xB110564A)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS75	(*(volatile uint_io8_t*)0xB110564B)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS76	(*(volatile uint_io8_t*)0xB110564C)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS77	(*(volatile uint_io8_t*)0xB110564D)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS78	(*(volatile uint_io8_t*)0xB110564E)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS79	(*(volatile uint_io8_t*)0xB110564F)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS80	(*(volatile uint_io8_t*)0xB1105650)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS81	(*(volatile uint_io8_t*)0xB1105651)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS82	(*(volatile uint_io8_t*)0xB1105652)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS83	(*(volatile uint_io8_t*)0xB1105653)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS84	(*(volatile uint_io8_t*)0xB1105654)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS85	(*(volatile uint_io8_t*)0xB1105655)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS86	(*(volatile uint_io8_t*)0xB1105656)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS87	(*(volatile uint_io8_t*)0xB1105657)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS88	(*(volatile uint_io8_t*)0xB1105658)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS89	(*(volatile uint_io8_t*)0xB1105659)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS90	(*(volatile uint_io8_t*)0xB110565A)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS91	(*(volatile uint_io8_t*)0xB110565B)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS92	(*(volatile uint_io8_t*)0xB110565C)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS93	(*(volatile uint_io8_t*)0xB110565D)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS94	(*(volatile uint_io8_t*)0xB110565E)  /*@bfbba@*/
#define IRC0_IRQS2_IRQS95	(*(volatile uint_io8_t*)0xB110565F)  /*@bfbba@*/

typedef struct stc_irc0_irqs2_field{
    uint_io32_t		u1IRQS64:1;
    uint_io32_t		u1IRQS65:1;
    uint_io32_t		u1IRQS66:1;
    uint_io32_t		u1IRQS67:1;
    uint_io32_t		u1IRQS68:1;
    uint_io32_t		u1IRQS69:1;
    uint_io32_t		u1IRQS70:1;
    uint_io32_t		u1IRQS71:1;
    uint_io32_t		u1IRQS72:1;
    uint_io32_t		u1IRQS73:1;
    uint_io32_t		u1IRQS74:1;
    uint_io32_t		u1IRQS75:1;
    uint_io32_t		u1IRQS76:1;
    uint_io32_t		u1IRQS77:1;
    uint_io32_t		u1IRQS78:1;
    uint_io32_t		u1IRQS79:1;
    uint_io32_t		u1IRQS80:1;
    uint_io32_t		u1IRQS81:1;
    uint_io32_t		u1IRQS82:1;
    uint_io32_t		u1IRQS83:1;
    uint_io32_t		u1IRQS84:1;
    uint_io32_t		u1IRQS85:1;
    uint_io32_t		u1IRQS86:1;
    uint_io32_t		u1IRQS87:1;
    uint_io32_t		u1IRQS88:1;
    uint_io32_t		u1IRQS89:1;
    uint_io32_t		u1IRQS90:1;
    uint_io32_t		u1IRQS91:1;
    uint_io32_t		u1IRQS92:1;
    uint_io32_t		u1IRQS93:1;
    uint_io32_t		u1IRQS94:1;
    uint_io32_t		u1IRQS95:1;
}stc_irc0_irqs2_field_t;

typedef union un_irc0_irqs2{
    uint_io32_t		u32Register;
    stc_irc0_irqs2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs2_t;

/* IRQS3 */
#define IRC0_IRQS3	(IRC0.unIRQS3.u32Register)  /*@rg@*/
#define IRC0_IRQS3_IRQS96	(*(volatile uint_io8_t*)0xB1105660)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS97	(*(volatile uint_io8_t*)0xB1105661)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS98	(*(volatile uint_io8_t*)0xB1105662)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS99	(*(volatile uint_io8_t*)0xB1105663)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS100	(*(volatile uint_io8_t*)0xB1105664)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS101	(*(volatile uint_io8_t*)0xB1105665)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS102	(*(volatile uint_io8_t*)0xB1105666)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS103	(*(volatile uint_io8_t*)0xB1105667)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS104	(*(volatile uint_io8_t*)0xB1105668)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS105	(*(volatile uint_io8_t*)0xB1105669)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS106	(*(volatile uint_io8_t*)0xB110566A)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS107	(*(volatile uint_io8_t*)0xB110566B)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS108	(*(volatile uint_io8_t*)0xB110566C)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS109	(*(volatile uint_io8_t*)0xB110566D)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS110	(*(volatile uint_io8_t*)0xB110566E)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS111	(*(volatile uint_io8_t*)0xB110566F)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS112	(*(volatile uint_io8_t*)0xB1105670)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS113	(*(volatile uint_io8_t*)0xB1105671)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS114	(*(volatile uint_io8_t*)0xB1105672)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS115	(*(volatile uint_io8_t*)0xB1105673)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS116	(*(volatile uint_io8_t*)0xB1105674)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS117	(*(volatile uint_io8_t*)0xB1105675)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS118	(*(volatile uint_io8_t*)0xB1105676)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS119	(*(volatile uint_io8_t*)0xB1105677)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS120	(*(volatile uint_io8_t*)0xB1105678)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS121	(*(volatile uint_io8_t*)0xB1105679)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS122	(*(volatile uint_io8_t*)0xB110567A)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS123	(*(volatile uint_io8_t*)0xB110567B)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS124	(*(volatile uint_io8_t*)0xB110567C)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS125	(*(volatile uint_io8_t*)0xB110567D)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS126	(*(volatile uint_io8_t*)0xB110567E)  /*@bfbba@*/
#define IRC0_IRQS3_IRQS127	(*(volatile uint_io8_t*)0xB110567F)  /*@bfbba@*/

typedef struct stc_irc0_irqs3_field{
    uint_io32_t		u1IRQS96:1;
    uint_io32_t		u1IRQS97:1;
    uint_io32_t		u1IRQS98:1;
    uint_io32_t		u1IRQS99:1;
    uint_io32_t		u1IRQS100:1;
    uint_io32_t		u1IRQS101:1;
    uint_io32_t		u1IRQS102:1;
    uint_io32_t		u1IRQS103:1;
    uint_io32_t		u1IRQS104:1;
    uint_io32_t		u1IRQS105:1;
    uint_io32_t		u1IRQS106:1;
    uint_io32_t		u1IRQS107:1;
    uint_io32_t		u1IRQS108:1;
    uint_io32_t		u1IRQS109:1;
    uint_io32_t		u1IRQS110:1;
    uint_io32_t		u1IRQS111:1;
    uint_io32_t		u1IRQS112:1;
    uint_io32_t		u1IRQS113:1;
    uint_io32_t		u1IRQS114:1;
    uint_io32_t		u1IRQS115:1;
    uint_io32_t		u1IRQS116:1;
    uint_io32_t		u1IRQS117:1;
    uint_io32_t		u1IRQS118:1;
    uint_io32_t		u1IRQS119:1;
    uint_io32_t		u1IRQS120:1;
    uint_io32_t		u1IRQS121:1;
    uint_io32_t		u1IRQS122:1;
    uint_io32_t		u1IRQS123:1;
    uint_io32_t		u1IRQS124:1;
    uint_io32_t		u1IRQS125:1;
    uint_io32_t		u1IRQS126:1;
    uint_io32_t		u1IRQS127:1;
}stc_irc0_irqs3_field_t;

typedef union un_irc0_irqs3{
    uint_io32_t		u32Register;
    stc_irc0_irqs3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs3_t;

/* IRQS4 */
#define IRC0_IRQS4	(IRC0.unIRQS4.u32Register)  /*@rg@*/
#define IRC0_IRQS4_IRQS128	(*(volatile uint_io8_t*)0xB1105680)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS129	(*(volatile uint_io8_t*)0xB1105681)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS130	(*(volatile uint_io8_t*)0xB1105682)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS131	(*(volatile uint_io8_t*)0xB1105683)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS132	(*(volatile uint_io8_t*)0xB1105684)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS133	(*(volatile uint_io8_t*)0xB1105685)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS134	(*(volatile uint_io8_t*)0xB1105686)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS135	(*(volatile uint_io8_t*)0xB1105687)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS136	(*(volatile uint_io8_t*)0xB1105688)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS137	(*(volatile uint_io8_t*)0xB1105689)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS138	(*(volatile uint_io8_t*)0xB110568A)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS139	(*(volatile uint_io8_t*)0xB110568B)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS140	(*(volatile uint_io8_t*)0xB110568C)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS141	(*(volatile uint_io8_t*)0xB110568D)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS142	(*(volatile uint_io8_t*)0xB110568E)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS143	(*(volatile uint_io8_t*)0xB110568F)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS144	(*(volatile uint_io8_t*)0xB1105690)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS145	(*(volatile uint_io8_t*)0xB1105691)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS146	(*(volatile uint_io8_t*)0xB1105692)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS147	(*(volatile uint_io8_t*)0xB1105693)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS148	(*(volatile uint_io8_t*)0xB1105694)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS149	(*(volatile uint_io8_t*)0xB1105695)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS150	(*(volatile uint_io8_t*)0xB1105696)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS151	(*(volatile uint_io8_t*)0xB1105697)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS152	(*(volatile uint_io8_t*)0xB1105698)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS153	(*(volatile uint_io8_t*)0xB1105699)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS154	(*(volatile uint_io8_t*)0xB110569A)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS155	(*(volatile uint_io8_t*)0xB110569B)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS156	(*(volatile uint_io8_t*)0xB110569C)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS157	(*(volatile uint_io8_t*)0xB110569D)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS158	(*(volatile uint_io8_t*)0xB110569E)  /*@bfbba@*/
#define IRC0_IRQS4_IRQS159	(*(volatile uint_io8_t*)0xB110569F)  /*@bfbba@*/

typedef struct stc_irc0_irqs4_field{
    uint_io32_t		u1IRQS128:1;
    uint_io32_t		u1IRQS129:1;
    uint_io32_t		u1IRQS130:1;
    uint_io32_t		u1IRQS131:1;
    uint_io32_t		u1IRQS132:1;
    uint_io32_t		u1IRQS133:1;
    uint_io32_t		u1IRQS134:1;
    uint_io32_t		u1IRQS135:1;
    uint_io32_t		u1IRQS136:1;
    uint_io32_t		u1IRQS137:1;
    uint_io32_t		u1IRQS138:1;
    uint_io32_t		u1IRQS139:1;
    uint_io32_t		u1IRQS140:1;
    uint_io32_t		u1IRQS141:1;
    uint_io32_t		u1IRQS142:1;
    uint_io32_t		u1IRQS143:1;
    uint_io32_t		u1IRQS144:1;
    uint_io32_t		u1IRQS145:1;
    uint_io32_t		u1IRQS146:1;
    uint_io32_t		u1IRQS147:1;
    uint_io32_t		u1IRQS148:1;
    uint_io32_t		u1IRQS149:1;
    uint_io32_t		u1IRQS150:1;
    uint_io32_t		u1IRQS151:1;
    uint_io32_t		u1IRQS152:1;
    uint_io32_t		u1IRQS153:1;
    uint_io32_t		u1IRQS154:1;
    uint_io32_t		u1IRQS155:1;
    uint_io32_t		u1IRQS156:1;
    uint_io32_t		u1IRQS157:1;
    uint_io32_t		u1IRQS158:1;
    uint_io32_t		u1IRQS159:1;
}stc_irc0_irqs4_field_t;

typedef union un_irc0_irqs4{
    uint_io32_t		u32Register;
    stc_irc0_irqs4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs4_t;

/* IRQS5 */
#define IRC0_IRQS5	(IRC0.unIRQS5.u32Register)  /*@rg@*/
#define IRC0_IRQS5_IRQS160	(*(volatile uint_io8_t*)0xB11056A0)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS161	(*(volatile uint_io8_t*)0xB11056A1)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS162	(*(volatile uint_io8_t*)0xB11056A2)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS163	(*(volatile uint_io8_t*)0xB11056A3)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS164	(*(volatile uint_io8_t*)0xB11056A4)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS165	(*(volatile uint_io8_t*)0xB11056A5)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS166	(*(volatile uint_io8_t*)0xB11056A6)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS167	(*(volatile uint_io8_t*)0xB11056A7)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS168	(*(volatile uint_io8_t*)0xB11056A8)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS169	(*(volatile uint_io8_t*)0xB11056A9)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS170	(*(volatile uint_io8_t*)0xB11056AA)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS171	(*(volatile uint_io8_t*)0xB11056AB)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS172	(*(volatile uint_io8_t*)0xB11056AC)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS173	(*(volatile uint_io8_t*)0xB11056AD)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS174	(*(volatile uint_io8_t*)0xB11056AE)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS175	(*(volatile uint_io8_t*)0xB11056AF)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS176	(*(volatile uint_io8_t*)0xB11056B0)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS177	(*(volatile uint_io8_t*)0xB11056B1)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS178	(*(volatile uint_io8_t*)0xB11056B2)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS179	(*(volatile uint_io8_t*)0xB11056B3)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS180	(*(volatile uint_io8_t*)0xB11056B4)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS181	(*(volatile uint_io8_t*)0xB11056B5)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS182	(*(volatile uint_io8_t*)0xB11056B6)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS183	(*(volatile uint_io8_t*)0xB11056B7)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS184	(*(volatile uint_io8_t*)0xB11056B8)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS185	(*(volatile uint_io8_t*)0xB11056B9)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS186	(*(volatile uint_io8_t*)0xB11056BA)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS187	(*(volatile uint_io8_t*)0xB11056BB)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS188	(*(volatile uint_io8_t*)0xB11056BC)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS189	(*(volatile uint_io8_t*)0xB11056BD)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS190	(*(volatile uint_io8_t*)0xB11056BE)  /*@bfbba@*/
#define IRC0_IRQS5_IRQS191	(*(volatile uint_io8_t*)0xB11056BF)  /*@bfbba@*/

typedef struct stc_irc0_irqs5_field{
    uint_io32_t		u1IRQS160:1;
    uint_io32_t		u1IRQS161:1;
    uint_io32_t		u1IRQS162:1;
    uint_io32_t		u1IRQS163:1;
    uint_io32_t		u1IRQS164:1;
    uint_io32_t		u1IRQS165:1;
    uint_io32_t		u1IRQS166:1;
    uint_io32_t		u1IRQS167:1;
    uint_io32_t		u1IRQS168:1;
    uint_io32_t		u1IRQS169:1;
    uint_io32_t		u1IRQS170:1;
    uint_io32_t		u1IRQS171:1;
    uint_io32_t		u1IRQS172:1;
    uint_io32_t		u1IRQS173:1;
    uint_io32_t		u1IRQS174:1;
    uint_io32_t		u1IRQS175:1;
    uint_io32_t		u1IRQS176:1;
    uint_io32_t		u1IRQS177:1;
    uint_io32_t		u1IRQS178:1;
    uint_io32_t		u1IRQS179:1;
    uint_io32_t		u1IRQS180:1;
    uint_io32_t		u1IRQS181:1;
    uint_io32_t		u1IRQS182:1;
    uint_io32_t		u1IRQS183:1;
    uint_io32_t		u1IRQS184:1;
    uint_io32_t		u1IRQS185:1;
    uint_io32_t		u1IRQS186:1;
    uint_io32_t		u1IRQS187:1;
    uint_io32_t		u1IRQS188:1;
    uint_io32_t		u1IRQS189:1;
    uint_io32_t		u1IRQS190:1;
    uint_io32_t		u1IRQS191:1;
}stc_irc0_irqs5_field_t;

typedef union un_irc0_irqs5{
    uint_io32_t		u32Register;
    stc_irc0_irqs5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs5_t;

/* IRQS6 */
#define IRC0_IRQS6	(IRC0.unIRQS6.u32Register)  /*@rg@*/
#define IRC0_IRQS6_IRQS192	(*(volatile uint_io8_t*)0xB11056C0)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS193	(*(volatile uint_io8_t*)0xB11056C1)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS194	(*(volatile uint_io8_t*)0xB11056C2)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS195	(*(volatile uint_io8_t*)0xB11056C3)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS196	(*(volatile uint_io8_t*)0xB11056C4)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS197	(*(volatile uint_io8_t*)0xB11056C5)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS198	(*(volatile uint_io8_t*)0xB11056C6)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS199	(*(volatile uint_io8_t*)0xB11056C7)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS200	(*(volatile uint_io8_t*)0xB11056C8)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS201	(*(volatile uint_io8_t*)0xB11056C9)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS202	(*(volatile uint_io8_t*)0xB11056CA)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS203	(*(volatile uint_io8_t*)0xB11056CB)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS204	(*(volatile uint_io8_t*)0xB11056CC)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS205	(*(volatile uint_io8_t*)0xB11056CD)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS206	(*(volatile uint_io8_t*)0xB11056CE)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS207	(*(volatile uint_io8_t*)0xB11056CF)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS208	(*(volatile uint_io8_t*)0xB11056D0)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS209	(*(volatile uint_io8_t*)0xB11056D1)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS210	(*(volatile uint_io8_t*)0xB11056D2)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS211	(*(volatile uint_io8_t*)0xB11056D3)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS212	(*(volatile uint_io8_t*)0xB11056D4)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS213	(*(volatile uint_io8_t*)0xB11056D5)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS214	(*(volatile uint_io8_t*)0xB11056D6)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS215	(*(volatile uint_io8_t*)0xB11056D7)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS216	(*(volatile uint_io8_t*)0xB11056D8)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS217	(*(volatile uint_io8_t*)0xB11056D9)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS218	(*(volatile uint_io8_t*)0xB11056DA)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS219	(*(volatile uint_io8_t*)0xB11056DB)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS220	(*(volatile uint_io8_t*)0xB11056DC)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS221	(*(volatile uint_io8_t*)0xB11056DD)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS222	(*(volatile uint_io8_t*)0xB11056DE)  /*@bfbba@*/
#define IRC0_IRQS6_IRQS223	(*(volatile uint_io8_t*)0xB11056DF)  /*@bfbba@*/

typedef struct stc_irc0_irqs6_field{
    uint_io32_t		u1IRQS192:1;
    uint_io32_t		u1IRQS193:1;
    uint_io32_t		u1IRQS194:1;
    uint_io32_t		u1IRQS195:1;
    uint_io32_t		u1IRQS196:1;
    uint_io32_t		u1IRQS197:1;
    uint_io32_t		u1IRQS198:1;
    uint_io32_t		u1IRQS199:1;
    uint_io32_t		u1IRQS200:1;
    uint_io32_t		u1IRQS201:1;
    uint_io32_t		u1IRQS202:1;
    uint_io32_t		u1IRQS203:1;
    uint_io32_t		u1IRQS204:1;
    uint_io32_t		u1IRQS205:1;
    uint_io32_t		u1IRQS206:1;
    uint_io32_t		u1IRQS207:1;
    uint_io32_t		u1IRQS208:1;
    uint_io32_t		u1IRQS209:1;
    uint_io32_t		u1IRQS210:1;
    uint_io32_t		u1IRQS211:1;
    uint_io32_t		u1IRQS212:1;
    uint_io32_t		u1IRQS213:1;
    uint_io32_t		u1IRQS214:1;
    uint_io32_t		u1IRQS215:1;
    uint_io32_t		u1IRQS216:1;
    uint_io32_t		u1IRQS217:1;
    uint_io32_t		u1IRQS218:1;
    uint_io32_t		u1IRQS219:1;
    uint_io32_t		u1IRQS220:1;
    uint_io32_t		u1IRQS221:1;
    uint_io32_t		u1IRQS222:1;
    uint_io32_t		u1IRQS223:1;
}stc_irc0_irqs6_field_t;

typedef union un_irc0_irqs6{
    uint_io32_t		u32Register;
    stc_irc0_irqs6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs6_t;

/* IRQS7 */
#define IRC0_IRQS7	(IRC0.unIRQS7.u32Register)  /*@rg@*/
#define IRC0_IRQS7_IRQS224	(*(volatile uint_io8_t*)0xB11056E0)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS225	(*(volatile uint_io8_t*)0xB11056E1)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS226	(*(volatile uint_io8_t*)0xB11056E2)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS227	(*(volatile uint_io8_t*)0xB11056E3)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS228	(*(volatile uint_io8_t*)0xB11056E4)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS229	(*(volatile uint_io8_t*)0xB11056E5)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS230	(*(volatile uint_io8_t*)0xB11056E6)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS231	(*(volatile uint_io8_t*)0xB11056E7)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS232	(*(volatile uint_io8_t*)0xB11056E8)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS233	(*(volatile uint_io8_t*)0xB11056E9)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS234	(*(volatile uint_io8_t*)0xB11056EA)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS235	(*(volatile uint_io8_t*)0xB11056EB)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS236	(*(volatile uint_io8_t*)0xB11056EC)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS237	(*(volatile uint_io8_t*)0xB11056ED)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS238	(*(volatile uint_io8_t*)0xB11056EE)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS239	(*(volatile uint_io8_t*)0xB11056EF)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS240	(*(volatile uint_io8_t*)0xB11056F0)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS241	(*(volatile uint_io8_t*)0xB11056F1)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS242	(*(volatile uint_io8_t*)0xB11056F2)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS243	(*(volatile uint_io8_t*)0xB11056F3)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS244	(*(volatile uint_io8_t*)0xB11056F4)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS245	(*(volatile uint_io8_t*)0xB11056F5)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS246	(*(volatile uint_io8_t*)0xB11056F6)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS247	(*(volatile uint_io8_t*)0xB11056F7)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS248	(*(volatile uint_io8_t*)0xB11056F8)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS249	(*(volatile uint_io8_t*)0xB11056F9)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS250	(*(volatile uint_io8_t*)0xB11056FA)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS251	(*(volatile uint_io8_t*)0xB11056FB)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS252	(*(volatile uint_io8_t*)0xB11056FC)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS253	(*(volatile uint_io8_t*)0xB11056FD)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS254	(*(volatile uint_io8_t*)0xB11056FE)  /*@bfbba@*/
#define IRC0_IRQS7_IRQS255	(*(volatile uint_io8_t*)0xB11056FF)  /*@bfbba@*/

typedef struct stc_irc0_irqs7_field{
    uint_io32_t		u1IRQS224:1;
    uint_io32_t		u1IRQS225:1;
    uint_io32_t		u1IRQS226:1;
    uint_io32_t		u1IRQS227:1;
    uint_io32_t		u1IRQS228:1;
    uint_io32_t		u1IRQS229:1;
    uint_io32_t		u1IRQS230:1;
    uint_io32_t		u1IRQS231:1;
    uint_io32_t		u1IRQS232:1;
    uint_io32_t		u1IRQS233:1;
    uint_io32_t		u1IRQS234:1;
    uint_io32_t		u1IRQS235:1;
    uint_io32_t		u1IRQS236:1;
    uint_io32_t		u1IRQS237:1;
    uint_io32_t		u1IRQS238:1;
    uint_io32_t		u1IRQS239:1;
    uint_io32_t		u1IRQS240:1;
    uint_io32_t		u1IRQS241:1;
    uint_io32_t		u1IRQS242:1;
    uint_io32_t		u1IRQS243:1;
    uint_io32_t		u1IRQS244:1;
    uint_io32_t		u1IRQS245:1;
    uint_io32_t		u1IRQS246:1;
    uint_io32_t		u1IRQS247:1;
    uint_io32_t		u1IRQS248:1;
    uint_io32_t		u1IRQS249:1;
    uint_io32_t		u1IRQS250:1;
    uint_io32_t		u1IRQS251:1;
    uint_io32_t		u1IRQS252:1;
    uint_io32_t		u1IRQS253:1;
    uint_io32_t		u1IRQS254:1;
    uint_io32_t		u1IRQS255:1;
}stc_irc0_irqs7_field_t;

typedef union un_irc0_irqs7{
    uint_io32_t		u32Register;
    stc_irc0_irqs7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs7_t;

/* IRQS8 */
#define IRC0_IRQS8	(IRC0.unIRQS8.u32Register)  /*@rg@*/
#define IRC0_IRQS8_IRQS256	(*(volatile uint_io8_t*)0xB1105700)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS257	(*(volatile uint_io8_t*)0xB1105701)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS258	(*(volatile uint_io8_t*)0xB1105702)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS259	(*(volatile uint_io8_t*)0xB1105703)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS260	(*(volatile uint_io8_t*)0xB1105704)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS261	(*(volatile uint_io8_t*)0xB1105705)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS262	(*(volatile uint_io8_t*)0xB1105706)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS263	(*(volatile uint_io8_t*)0xB1105707)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS264	(*(volatile uint_io8_t*)0xB1105708)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS265	(*(volatile uint_io8_t*)0xB1105709)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS266	(*(volatile uint_io8_t*)0xB110570A)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS267	(*(volatile uint_io8_t*)0xB110570B)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS268	(*(volatile uint_io8_t*)0xB110570C)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS269	(*(volatile uint_io8_t*)0xB110570D)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS270	(*(volatile uint_io8_t*)0xB110570E)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS271	(*(volatile uint_io8_t*)0xB110570F)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS272	(*(volatile uint_io8_t*)0xB1105710)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS273	(*(volatile uint_io8_t*)0xB1105711)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS274	(*(volatile uint_io8_t*)0xB1105712)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS275	(*(volatile uint_io8_t*)0xB1105713)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS276	(*(volatile uint_io8_t*)0xB1105714)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS277	(*(volatile uint_io8_t*)0xB1105715)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS278	(*(volatile uint_io8_t*)0xB1105716)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS279	(*(volatile uint_io8_t*)0xB1105717)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS280	(*(volatile uint_io8_t*)0xB1105718)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS281	(*(volatile uint_io8_t*)0xB1105719)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS282	(*(volatile uint_io8_t*)0xB110571A)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS283	(*(volatile uint_io8_t*)0xB110571B)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS284	(*(volatile uint_io8_t*)0xB110571C)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS285	(*(volatile uint_io8_t*)0xB110571D)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS286	(*(volatile uint_io8_t*)0xB110571E)  /*@bfbba@*/
#define IRC0_IRQS8_IRQS287	(*(volatile uint_io8_t*)0xB110571F)  /*@bfbba@*/

typedef struct stc_irc0_irqs8_field{
    uint_io32_t		u1IRQS256:1;
    uint_io32_t		u1IRQS257:1;
    uint_io32_t		u1IRQS258:1;
    uint_io32_t		u1IRQS259:1;
    uint_io32_t		u1IRQS260:1;
    uint_io32_t		u1IRQS261:1;
    uint_io32_t		u1IRQS262:1;
    uint_io32_t		u1IRQS263:1;
    uint_io32_t		u1IRQS264:1;
    uint_io32_t		u1IRQS265:1;
    uint_io32_t		u1IRQS266:1;
    uint_io32_t		u1IRQS267:1;
    uint_io32_t		u1IRQS268:1;
    uint_io32_t		u1IRQS269:1;
    uint_io32_t		u1IRQS270:1;
    uint_io32_t		u1IRQS271:1;
    uint_io32_t		u1IRQS272:1;
    uint_io32_t		u1IRQS273:1;
    uint_io32_t		u1IRQS274:1;
    uint_io32_t		u1IRQS275:1;
    uint_io32_t		u1IRQS276:1;
    uint_io32_t		u1IRQS277:1;
    uint_io32_t		u1IRQS278:1;
    uint_io32_t		u1IRQS279:1;
    uint_io32_t		u1IRQS280:1;
    uint_io32_t		u1IRQS281:1;
    uint_io32_t		u1IRQS282:1;
    uint_io32_t		u1IRQS283:1;
    uint_io32_t		u1IRQS284:1;
    uint_io32_t		u1IRQS285:1;
    uint_io32_t		u1IRQS286:1;
    uint_io32_t		u1IRQS287:1;
}stc_irc0_irqs8_field_t;

typedef union un_irc0_irqs8{
    uint_io32_t		u32Register;
    stc_irc0_irqs8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs8_t;

/* IRQS9 */
#define IRC0_IRQS9	(IRC0.unIRQS9.u32Register)  /*@rg@*/
#define IRC0_IRQS9_IRQS288	(*(volatile uint_io8_t*)0xB1105720)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS289	(*(volatile uint_io8_t*)0xB1105721)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS290	(*(volatile uint_io8_t*)0xB1105722)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS291	(*(volatile uint_io8_t*)0xB1105723)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS292	(*(volatile uint_io8_t*)0xB1105724)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS293	(*(volatile uint_io8_t*)0xB1105725)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS294	(*(volatile uint_io8_t*)0xB1105726)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS295	(*(volatile uint_io8_t*)0xB1105727)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS296	(*(volatile uint_io8_t*)0xB1105728)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS297	(*(volatile uint_io8_t*)0xB1105729)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS298	(*(volatile uint_io8_t*)0xB110572A)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS299	(*(volatile uint_io8_t*)0xB110572B)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS300	(*(volatile uint_io8_t*)0xB110572C)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS301	(*(volatile uint_io8_t*)0xB110572D)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS302	(*(volatile uint_io8_t*)0xB110572E)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS303	(*(volatile uint_io8_t*)0xB110572F)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS304	(*(volatile uint_io8_t*)0xB1105730)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS305	(*(volatile uint_io8_t*)0xB1105731)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS306	(*(volatile uint_io8_t*)0xB1105732)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS307	(*(volatile uint_io8_t*)0xB1105733)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS308	(*(volatile uint_io8_t*)0xB1105734)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS309	(*(volatile uint_io8_t*)0xB1105735)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS310	(*(volatile uint_io8_t*)0xB1105736)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS311	(*(volatile uint_io8_t*)0xB1105737)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS312	(*(volatile uint_io8_t*)0xB1105738)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS313	(*(volatile uint_io8_t*)0xB1105739)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS314	(*(volatile uint_io8_t*)0xB110573A)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS315	(*(volatile uint_io8_t*)0xB110573B)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS316	(*(volatile uint_io8_t*)0xB110573C)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS317	(*(volatile uint_io8_t*)0xB110573D)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS318	(*(volatile uint_io8_t*)0xB110573E)  /*@bfbba@*/
#define IRC0_IRQS9_IRQS319	(*(volatile uint_io8_t*)0xB110573F)  /*@bfbba@*/

typedef struct stc_irc0_irqs9_field{
    uint_io32_t		u1IRQS288:1;
    uint_io32_t		u1IRQS289:1;
    uint_io32_t		u1IRQS290:1;
    uint_io32_t		u1IRQS291:1;
    uint_io32_t		u1IRQS292:1;
    uint_io32_t		u1IRQS293:1;
    uint_io32_t		u1IRQS294:1;
    uint_io32_t		u1IRQS295:1;
    uint_io32_t		u1IRQS296:1;
    uint_io32_t		u1IRQS297:1;
    uint_io32_t		u1IRQS298:1;
    uint_io32_t		u1IRQS299:1;
    uint_io32_t		u1IRQS300:1;
    uint_io32_t		u1IRQS301:1;
    uint_io32_t		u1IRQS302:1;
    uint_io32_t		u1IRQS303:1;
    uint_io32_t		u1IRQS304:1;
    uint_io32_t		u1IRQS305:1;
    uint_io32_t		u1IRQS306:1;
    uint_io32_t		u1IRQS307:1;
    uint_io32_t		u1IRQS308:1;
    uint_io32_t		u1IRQS309:1;
    uint_io32_t		u1IRQS310:1;
    uint_io32_t		u1IRQS311:1;
    uint_io32_t		u1IRQS312:1;
    uint_io32_t		u1IRQS313:1;
    uint_io32_t		u1IRQS314:1;
    uint_io32_t		u1IRQS315:1;
    uint_io32_t		u1IRQS316:1;
    uint_io32_t		u1IRQS317:1;
    uint_io32_t		u1IRQS318:1;
    uint_io32_t		u1IRQS319:1;
}stc_irc0_irqs9_field_t;

typedef union un_irc0_irqs9{
    uint_io32_t		u32Register;
    stc_irc0_irqs9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs9_t;

/* IRQS10 */
#define IRC0_IRQS10	(IRC0.unIRQS10.u32Register)  /*@rg@*/
#define IRC0_IRQS10_IRQS320	(*(volatile uint_io8_t*)0xB1105740)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS321	(*(volatile uint_io8_t*)0xB1105741)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS322	(*(volatile uint_io8_t*)0xB1105742)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS323	(*(volatile uint_io8_t*)0xB1105743)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS324	(*(volatile uint_io8_t*)0xB1105744)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS325	(*(volatile uint_io8_t*)0xB1105745)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS326	(*(volatile uint_io8_t*)0xB1105746)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS327	(*(volatile uint_io8_t*)0xB1105747)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS328	(*(volatile uint_io8_t*)0xB1105748)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS329	(*(volatile uint_io8_t*)0xB1105749)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS330	(*(volatile uint_io8_t*)0xB110574A)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS331	(*(volatile uint_io8_t*)0xB110574B)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS332	(*(volatile uint_io8_t*)0xB110574C)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS333	(*(volatile uint_io8_t*)0xB110574D)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS334	(*(volatile uint_io8_t*)0xB110574E)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS335	(*(volatile uint_io8_t*)0xB110574F)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS336	(*(volatile uint_io8_t*)0xB1105750)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS337	(*(volatile uint_io8_t*)0xB1105751)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS338	(*(volatile uint_io8_t*)0xB1105752)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS339	(*(volatile uint_io8_t*)0xB1105753)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS340	(*(volatile uint_io8_t*)0xB1105754)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS341	(*(volatile uint_io8_t*)0xB1105755)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS342	(*(volatile uint_io8_t*)0xB1105756)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS343	(*(volatile uint_io8_t*)0xB1105757)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS344	(*(volatile uint_io8_t*)0xB1105758)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS345	(*(volatile uint_io8_t*)0xB1105759)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS346	(*(volatile uint_io8_t*)0xB110575A)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS347	(*(volatile uint_io8_t*)0xB110575B)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS348	(*(volatile uint_io8_t*)0xB110575C)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS349	(*(volatile uint_io8_t*)0xB110575D)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS350	(*(volatile uint_io8_t*)0xB110575E)  /*@bfbba@*/
#define IRC0_IRQS10_IRQS351	(*(volatile uint_io8_t*)0xB110575F)  /*@bfbba@*/

typedef struct stc_irc0_irqs10_field{
    uint_io32_t		u1IRQS320:1;
    uint_io32_t		u1IRQS321:1;
    uint_io32_t		u1IRQS322:1;
    uint_io32_t		u1IRQS323:1;
    uint_io32_t		u1IRQS324:1;
    uint_io32_t		u1IRQS325:1;
    uint_io32_t		u1IRQS326:1;
    uint_io32_t		u1IRQS327:1;
    uint_io32_t		u1IRQS328:1;
    uint_io32_t		u1IRQS329:1;
    uint_io32_t		u1IRQS330:1;
    uint_io32_t		u1IRQS331:1;
    uint_io32_t		u1IRQS332:1;
    uint_io32_t		u1IRQS333:1;
    uint_io32_t		u1IRQS334:1;
    uint_io32_t		u1IRQS335:1;
    uint_io32_t		u1IRQS336:1;
    uint_io32_t		u1IRQS337:1;
    uint_io32_t		u1IRQS338:1;
    uint_io32_t		u1IRQS339:1;
    uint_io32_t		u1IRQS340:1;
    uint_io32_t		u1IRQS341:1;
    uint_io32_t		u1IRQS342:1;
    uint_io32_t		u1IRQS343:1;
    uint_io32_t		u1IRQS344:1;
    uint_io32_t		u1IRQS345:1;
    uint_io32_t		u1IRQS346:1;
    uint_io32_t		u1IRQS347:1;
    uint_io32_t		u1IRQS348:1;
    uint_io32_t		u1IRQS349:1;
    uint_io32_t		u1IRQS350:1;
    uint_io32_t		u1IRQS351:1;
}stc_irc0_irqs10_field_t;

typedef union un_irc0_irqs10{
    uint_io32_t		u32Register;
    stc_irc0_irqs10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs10_t;

/* IRQS11 */
#define IRC0_IRQS11	(IRC0.unIRQS11.u32Register)  /*@rg@*/
#define IRC0_IRQS11_IRQS352	(*(volatile uint_io8_t*)0xB1105760)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS353	(*(volatile uint_io8_t*)0xB1105761)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS354	(*(volatile uint_io8_t*)0xB1105762)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS355	(*(volatile uint_io8_t*)0xB1105763)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS356	(*(volatile uint_io8_t*)0xB1105764)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS357	(*(volatile uint_io8_t*)0xB1105765)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS358	(*(volatile uint_io8_t*)0xB1105766)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS359	(*(volatile uint_io8_t*)0xB1105767)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS360	(*(volatile uint_io8_t*)0xB1105768)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS361	(*(volatile uint_io8_t*)0xB1105769)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS362	(*(volatile uint_io8_t*)0xB110576A)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS363	(*(volatile uint_io8_t*)0xB110576B)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS364	(*(volatile uint_io8_t*)0xB110576C)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS365	(*(volatile uint_io8_t*)0xB110576D)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS366	(*(volatile uint_io8_t*)0xB110576E)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS367	(*(volatile uint_io8_t*)0xB110576F)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS368	(*(volatile uint_io8_t*)0xB1105770)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS369	(*(volatile uint_io8_t*)0xB1105771)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS370	(*(volatile uint_io8_t*)0xB1105772)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS371	(*(volatile uint_io8_t*)0xB1105773)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS372	(*(volatile uint_io8_t*)0xB1105774)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS373	(*(volatile uint_io8_t*)0xB1105775)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS374	(*(volatile uint_io8_t*)0xB1105776)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS375	(*(volatile uint_io8_t*)0xB1105777)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS376	(*(volatile uint_io8_t*)0xB1105778)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS377	(*(volatile uint_io8_t*)0xB1105779)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS378	(*(volatile uint_io8_t*)0xB110577A)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS379	(*(volatile uint_io8_t*)0xB110577B)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS380	(*(volatile uint_io8_t*)0xB110577C)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS381	(*(volatile uint_io8_t*)0xB110577D)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS382	(*(volatile uint_io8_t*)0xB110577E)  /*@bfbba@*/
#define IRC0_IRQS11_IRQS383	(*(volatile uint_io8_t*)0xB110577F)  /*@bfbba@*/

typedef struct stc_irc0_irqs11_field{
    uint_io32_t		u1IRQS352:1;
    uint_io32_t		u1IRQS353:1;
    uint_io32_t		u1IRQS354:1;
    uint_io32_t		u1IRQS355:1;
    uint_io32_t		u1IRQS356:1;
    uint_io32_t		u1IRQS357:1;
    uint_io32_t		u1IRQS358:1;
    uint_io32_t		u1IRQS359:1;
    uint_io32_t		u1IRQS360:1;
    uint_io32_t		u1IRQS361:1;
    uint_io32_t		u1IRQS362:1;
    uint_io32_t		u1IRQS363:1;
    uint_io32_t		u1IRQS364:1;
    uint_io32_t		u1IRQS365:1;
    uint_io32_t		u1IRQS366:1;
    uint_io32_t		u1IRQS367:1;
    uint_io32_t		u1IRQS368:1;
    uint_io32_t		u1IRQS369:1;
    uint_io32_t		u1IRQS370:1;
    uint_io32_t		u1IRQS371:1;
    uint_io32_t		u1IRQS372:1;
    uint_io32_t		u1IRQS373:1;
    uint_io32_t		u1IRQS374:1;
    uint_io32_t		u1IRQS375:1;
    uint_io32_t		u1IRQS376:1;
    uint_io32_t		u1IRQS377:1;
    uint_io32_t		u1IRQS378:1;
    uint_io32_t		u1IRQS379:1;
    uint_io32_t		u1IRQS380:1;
    uint_io32_t		u1IRQS381:1;
    uint_io32_t		u1IRQS382:1;
    uint_io32_t		u1IRQS383:1;
}stc_irc0_irqs11_field_t;

typedef union un_irc0_irqs11{
    uint_io32_t		u32Register;
    stc_irc0_irqs11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs11_t;

/* IRQS12 */
#define IRC0_IRQS12	(IRC0.unIRQS12.u32Register)  /*@rg@*/
#define IRC0_IRQS12_IRQS384	(*(volatile uint_io8_t*)0xB1105780)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS385	(*(volatile uint_io8_t*)0xB1105781)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS386	(*(volatile uint_io8_t*)0xB1105782)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS387	(*(volatile uint_io8_t*)0xB1105783)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS388	(*(volatile uint_io8_t*)0xB1105784)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS389	(*(volatile uint_io8_t*)0xB1105785)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS390	(*(volatile uint_io8_t*)0xB1105786)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS391	(*(volatile uint_io8_t*)0xB1105787)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS392	(*(volatile uint_io8_t*)0xB1105788)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS393	(*(volatile uint_io8_t*)0xB1105789)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS394	(*(volatile uint_io8_t*)0xB110578A)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS395	(*(volatile uint_io8_t*)0xB110578B)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS396	(*(volatile uint_io8_t*)0xB110578C)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS397	(*(volatile uint_io8_t*)0xB110578D)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS398	(*(volatile uint_io8_t*)0xB110578E)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS399	(*(volatile uint_io8_t*)0xB110578F)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS400	(*(volatile uint_io8_t*)0xB1105790)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS401	(*(volatile uint_io8_t*)0xB1105791)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS402	(*(volatile uint_io8_t*)0xB1105792)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS403	(*(volatile uint_io8_t*)0xB1105793)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS404	(*(volatile uint_io8_t*)0xB1105794)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS405	(*(volatile uint_io8_t*)0xB1105795)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS406	(*(volatile uint_io8_t*)0xB1105796)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS407	(*(volatile uint_io8_t*)0xB1105797)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS408	(*(volatile uint_io8_t*)0xB1105798)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS409	(*(volatile uint_io8_t*)0xB1105799)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS410	(*(volatile uint_io8_t*)0xB110579A)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS411	(*(volatile uint_io8_t*)0xB110579B)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS412	(*(volatile uint_io8_t*)0xB110579C)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS413	(*(volatile uint_io8_t*)0xB110579D)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS414	(*(volatile uint_io8_t*)0xB110579E)  /*@bfbba@*/
#define IRC0_IRQS12_IRQS415	(*(volatile uint_io8_t*)0xB110579F)  /*@bfbba@*/

typedef struct stc_irc0_irqs12_field{
    uint_io32_t		u1IRQS384:1;
    uint_io32_t		u1IRQS385:1;
    uint_io32_t		u1IRQS386:1;
    uint_io32_t		u1IRQS387:1;
    uint_io32_t		u1IRQS388:1;
    uint_io32_t		u1IRQS389:1;
    uint_io32_t		u1IRQS390:1;
    uint_io32_t		u1IRQS391:1;
    uint_io32_t		u1IRQS392:1;
    uint_io32_t		u1IRQS393:1;
    uint_io32_t		u1IRQS394:1;
    uint_io32_t		u1IRQS395:1;
    uint_io32_t		u1IRQS396:1;
    uint_io32_t		u1IRQS397:1;
    uint_io32_t		u1IRQS398:1;
    uint_io32_t		u1IRQS399:1;
    uint_io32_t		u1IRQS400:1;
    uint_io32_t		u1IRQS401:1;
    uint_io32_t		u1IRQS402:1;
    uint_io32_t		u1IRQS403:1;
    uint_io32_t		u1IRQS404:1;
    uint_io32_t		u1IRQS405:1;
    uint_io32_t		u1IRQS406:1;
    uint_io32_t		u1IRQS407:1;
    uint_io32_t		u1IRQS408:1;
    uint_io32_t		u1IRQS409:1;
    uint_io32_t		u1IRQS410:1;
    uint_io32_t		u1IRQS411:1;
    uint_io32_t		u1IRQS412:1;
    uint_io32_t		u1IRQS413:1;
    uint_io32_t		u1IRQS414:1;
    uint_io32_t		u1IRQS415:1;
}stc_irc0_irqs12_field_t;

typedef union un_irc0_irqs12{
    uint_io32_t		u32Register;
    stc_irc0_irqs12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs12_t;

/* IRQS13 */
#define IRC0_IRQS13	(IRC0.unIRQS13.u32Register)  /*@rg@*/
#define IRC0_IRQS13_IRQS416	(*(volatile uint_io8_t*)0xB11057A0)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS417	(*(volatile uint_io8_t*)0xB11057A1)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS418	(*(volatile uint_io8_t*)0xB11057A2)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS419	(*(volatile uint_io8_t*)0xB11057A3)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS420	(*(volatile uint_io8_t*)0xB11057A4)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS421	(*(volatile uint_io8_t*)0xB11057A5)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS422	(*(volatile uint_io8_t*)0xB11057A6)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS423	(*(volatile uint_io8_t*)0xB11057A7)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS424	(*(volatile uint_io8_t*)0xB11057A8)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS425	(*(volatile uint_io8_t*)0xB11057A9)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS426	(*(volatile uint_io8_t*)0xB11057AA)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS427	(*(volatile uint_io8_t*)0xB11057AB)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS428	(*(volatile uint_io8_t*)0xB11057AC)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS429	(*(volatile uint_io8_t*)0xB11057AD)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS430	(*(volatile uint_io8_t*)0xB11057AE)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS431	(*(volatile uint_io8_t*)0xB11057AF)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS432	(*(volatile uint_io8_t*)0xB11057B0)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS433	(*(volatile uint_io8_t*)0xB11057B1)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS434	(*(volatile uint_io8_t*)0xB11057B2)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS435	(*(volatile uint_io8_t*)0xB11057B3)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS436	(*(volatile uint_io8_t*)0xB11057B4)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS437	(*(volatile uint_io8_t*)0xB11057B5)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS438	(*(volatile uint_io8_t*)0xB11057B6)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS439	(*(volatile uint_io8_t*)0xB11057B7)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS440	(*(volatile uint_io8_t*)0xB11057B8)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS441	(*(volatile uint_io8_t*)0xB11057B9)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS442	(*(volatile uint_io8_t*)0xB11057BA)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS443	(*(volatile uint_io8_t*)0xB11057BB)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS444	(*(volatile uint_io8_t*)0xB11057BC)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS445	(*(volatile uint_io8_t*)0xB11057BD)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS446	(*(volatile uint_io8_t*)0xB11057BE)  /*@bfbba@*/
#define IRC0_IRQS13_IRQS447	(*(volatile uint_io8_t*)0xB11057BF)  /*@bfbba@*/

typedef struct stc_irc0_irqs13_field{
    uint_io32_t		u1IRQS416:1;
    uint_io32_t		u1IRQS417:1;
    uint_io32_t		u1IRQS418:1;
    uint_io32_t		u1IRQS419:1;
    uint_io32_t		u1IRQS420:1;
    uint_io32_t		u1IRQS421:1;
    uint_io32_t		u1IRQS422:1;
    uint_io32_t		u1IRQS423:1;
    uint_io32_t		u1IRQS424:1;
    uint_io32_t		u1IRQS425:1;
    uint_io32_t		u1IRQS426:1;
    uint_io32_t		u1IRQS427:1;
    uint_io32_t		u1IRQS428:1;
    uint_io32_t		u1IRQS429:1;
    uint_io32_t		u1IRQS430:1;
    uint_io32_t		u1IRQS431:1;
    uint_io32_t		u1IRQS432:1;
    uint_io32_t		u1IRQS433:1;
    uint_io32_t		u1IRQS434:1;
    uint_io32_t		u1IRQS435:1;
    uint_io32_t		u1IRQS436:1;
    uint_io32_t		u1IRQS437:1;
    uint_io32_t		u1IRQS438:1;
    uint_io32_t		u1IRQS439:1;
    uint_io32_t		u1IRQS440:1;
    uint_io32_t		u1IRQS441:1;
    uint_io32_t		u1IRQS442:1;
    uint_io32_t		u1IRQS443:1;
    uint_io32_t		u1IRQS444:1;
    uint_io32_t		u1IRQS445:1;
    uint_io32_t		u1IRQS446:1;
    uint_io32_t		u1IRQS447:1;
}stc_irc0_irqs13_field_t;

typedef union un_irc0_irqs13{
    uint_io32_t		u32Register;
    stc_irc0_irqs13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs13_t;

/* IRQS14 */
#define IRC0_IRQS14	(IRC0.unIRQS14.u32Register)  /*@rg@*/
#define IRC0_IRQS14_IRQS448	(*(volatile uint_io8_t*)0xB11057C0)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS449	(*(volatile uint_io8_t*)0xB11057C1)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS450	(*(volatile uint_io8_t*)0xB11057C2)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS451	(*(volatile uint_io8_t*)0xB11057C3)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS452	(*(volatile uint_io8_t*)0xB11057C4)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS453	(*(volatile uint_io8_t*)0xB11057C5)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS454	(*(volatile uint_io8_t*)0xB11057C6)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS455	(*(volatile uint_io8_t*)0xB11057C7)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS456	(*(volatile uint_io8_t*)0xB11057C8)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS457	(*(volatile uint_io8_t*)0xB11057C9)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS458	(*(volatile uint_io8_t*)0xB11057CA)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS459	(*(volatile uint_io8_t*)0xB11057CB)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS460	(*(volatile uint_io8_t*)0xB11057CC)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS461	(*(volatile uint_io8_t*)0xB11057CD)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS462	(*(volatile uint_io8_t*)0xB11057CE)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS463	(*(volatile uint_io8_t*)0xB11057CF)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS464	(*(volatile uint_io8_t*)0xB11057D0)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS465	(*(volatile uint_io8_t*)0xB11057D1)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS466	(*(volatile uint_io8_t*)0xB11057D2)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS467	(*(volatile uint_io8_t*)0xB11057D3)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS468	(*(volatile uint_io8_t*)0xB11057D4)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS469	(*(volatile uint_io8_t*)0xB11057D5)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS470	(*(volatile uint_io8_t*)0xB11057D6)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS471	(*(volatile uint_io8_t*)0xB11057D7)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS472	(*(volatile uint_io8_t*)0xB11057D8)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS473	(*(volatile uint_io8_t*)0xB11057D9)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS474	(*(volatile uint_io8_t*)0xB11057DA)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS475	(*(volatile uint_io8_t*)0xB11057DB)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS476	(*(volatile uint_io8_t*)0xB11057DC)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS477	(*(volatile uint_io8_t*)0xB11057DD)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS478	(*(volatile uint_io8_t*)0xB11057DE)  /*@bfbba@*/
#define IRC0_IRQS14_IRQS479	(*(volatile uint_io8_t*)0xB11057DF)  /*@bfbba@*/

typedef struct stc_irc0_irqs14_field{
    uint_io32_t		u1IRQS448:1;
    uint_io32_t		u1IRQS449:1;
    uint_io32_t		u1IRQS450:1;
    uint_io32_t		u1IRQS451:1;
    uint_io32_t		u1IRQS452:1;
    uint_io32_t		u1IRQS453:1;
    uint_io32_t		u1IRQS454:1;
    uint_io32_t		u1IRQS455:1;
    uint_io32_t		u1IRQS456:1;
    uint_io32_t		u1IRQS457:1;
    uint_io32_t		u1IRQS458:1;
    uint_io32_t		u1IRQS459:1;
    uint_io32_t		u1IRQS460:1;
    uint_io32_t		u1IRQS461:1;
    uint_io32_t		u1IRQS462:1;
    uint_io32_t		u1IRQS463:1;
    uint_io32_t		u1IRQS464:1;
    uint_io32_t		u1IRQS465:1;
    uint_io32_t		u1IRQS466:1;
    uint_io32_t		u1IRQS467:1;
    uint_io32_t		u1IRQS468:1;
    uint_io32_t		u1IRQS469:1;
    uint_io32_t		u1IRQS470:1;
    uint_io32_t		u1IRQS471:1;
    uint_io32_t		u1IRQS472:1;
    uint_io32_t		u1IRQS473:1;
    uint_io32_t		u1IRQS474:1;
    uint_io32_t		u1IRQS475:1;
    uint_io32_t		u1IRQS476:1;
    uint_io32_t		u1IRQS477:1;
    uint_io32_t		u1IRQS478:1;
    uint_io32_t		u1IRQS479:1;
}stc_irc0_irqs14_field_t;

typedef union un_irc0_irqs14{
    uint_io32_t		u32Register;
    stc_irc0_irqs14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs14_t;

/* IRQS15 */
#define IRC0_IRQS15	(IRC0.unIRQS15.u32Register)  /*@rg@*/
#define IRC0_IRQS15_IRQS480	(*(volatile uint_io8_t*)0xB11057E0)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS481	(*(volatile uint_io8_t*)0xB11057E1)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS482	(*(volatile uint_io8_t*)0xB11057E2)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS483	(*(volatile uint_io8_t*)0xB11057E3)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS484	(*(volatile uint_io8_t*)0xB11057E4)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS485	(*(volatile uint_io8_t*)0xB11057E5)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS486	(*(volatile uint_io8_t*)0xB11057E6)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS487	(*(volatile uint_io8_t*)0xB11057E7)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS488	(*(volatile uint_io8_t*)0xB11057E8)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS489	(*(volatile uint_io8_t*)0xB11057E9)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS490	(*(volatile uint_io8_t*)0xB11057EA)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS491	(*(volatile uint_io8_t*)0xB11057EB)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS492	(*(volatile uint_io8_t*)0xB11057EC)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS493	(*(volatile uint_io8_t*)0xB11057ED)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS494	(*(volatile uint_io8_t*)0xB11057EE)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS495	(*(volatile uint_io8_t*)0xB11057EF)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS496	(*(volatile uint_io8_t*)0xB11057F0)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS497	(*(volatile uint_io8_t*)0xB11057F1)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS498	(*(volatile uint_io8_t*)0xB11057F2)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS499	(*(volatile uint_io8_t*)0xB11057F3)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS500	(*(volatile uint_io8_t*)0xB11057F4)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS501	(*(volatile uint_io8_t*)0xB11057F5)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS502	(*(volatile uint_io8_t*)0xB11057F6)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS503	(*(volatile uint_io8_t*)0xB11057F7)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS504	(*(volatile uint_io8_t*)0xB11057F8)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS505	(*(volatile uint_io8_t*)0xB11057F9)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS506	(*(volatile uint_io8_t*)0xB11057FA)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS507	(*(volatile uint_io8_t*)0xB11057FB)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS508	(*(volatile uint_io8_t*)0xB11057FC)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS509	(*(volatile uint_io8_t*)0xB11057FD)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS510	(*(volatile uint_io8_t*)0xB11057FE)  /*@bfbba@*/
#define IRC0_IRQS15_IRQS511	(*(volatile uint_io8_t*)0xB11057FF)  /*@bfbba@*/

typedef struct stc_irc0_irqs15_field{
    uint_io32_t		u1IRQS480:1;
    uint_io32_t		u1IRQS481:1;
    uint_io32_t		u1IRQS482:1;
    uint_io32_t		u1IRQS483:1;
    uint_io32_t		u1IRQS484:1;
    uint_io32_t		u1IRQS485:1;
    uint_io32_t		u1IRQS486:1;
    uint_io32_t		u1IRQS487:1;
    uint_io32_t		u1IRQS488:1;
    uint_io32_t		u1IRQS489:1;
    uint_io32_t		u1IRQS490:1;
    uint_io32_t		u1IRQS491:1;
    uint_io32_t		u1IRQS492:1;
    uint_io32_t		u1IRQS493:1;
    uint_io32_t		u1IRQS494:1;
    uint_io32_t		u1IRQS495:1;
    uint_io32_t		u1IRQS496:1;
    uint_io32_t		u1IRQS497:1;
    uint_io32_t		u1IRQS498:1;
    uint_io32_t		u1IRQS499:1;
    uint_io32_t		u1IRQS500:1;
    uint_io32_t		u1IRQS501:1;
    uint_io32_t		u1IRQS502:1;
    uint_io32_t		u1IRQS503:1;
    uint_io32_t		u1IRQS504:1;
    uint_io32_t		u1IRQS505:1;
    uint_io32_t		u1IRQS506:1;
    uint_io32_t		u1IRQS507:1;
    uint_io32_t		u1IRQS508:1;
    uint_io32_t		u1IRQS509:1;
    uint_io32_t		u1IRQS510:1;
    uint_io32_t		u1IRQS511:1;
}stc_irc0_irqs15_field_t;

typedef union un_irc0_irqs15{
    uint_io32_t		u32Register;
    stc_irc0_irqs15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqs15_t;

/* IRQR0 */
#define IRC0_IRQR0	(IRC0.unIRQR0.u32Register)  /*@rg@*/
#define IRC0_IRQR0_IRQR0	(*(volatile uint_io8_t*)0xB1105800)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR1	(*(volatile uint_io8_t*)0xB1105801)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR2	(*(volatile uint_io8_t*)0xB1105802)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR3	(*(volatile uint_io8_t*)0xB1105803)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR4	(*(volatile uint_io8_t*)0xB1105804)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR5	(*(volatile uint_io8_t*)0xB1105805)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR6	(*(volatile uint_io8_t*)0xB1105806)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR7	(*(volatile uint_io8_t*)0xB1105807)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR8	(*(volatile uint_io8_t*)0xB1105808)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR9	(*(volatile uint_io8_t*)0xB1105809)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR10	(*(volatile uint_io8_t*)0xB110580A)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR11	(*(volatile uint_io8_t*)0xB110580B)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR12	(*(volatile uint_io8_t*)0xB110580C)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR13	(*(volatile uint_io8_t*)0xB110580D)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR14	(*(volatile uint_io8_t*)0xB110580E)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR15	(*(volatile uint_io8_t*)0xB110580F)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR16	(*(volatile uint_io8_t*)0xB1105810)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR17	(*(volatile uint_io8_t*)0xB1105811)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR18	(*(volatile uint_io8_t*)0xB1105812)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR19	(*(volatile uint_io8_t*)0xB1105813)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR20	(*(volatile uint_io8_t*)0xB1105814)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR21	(*(volatile uint_io8_t*)0xB1105815)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR22	(*(volatile uint_io8_t*)0xB1105816)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR23	(*(volatile uint_io8_t*)0xB1105817)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR24	(*(volatile uint_io8_t*)0xB1105818)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR25	(*(volatile uint_io8_t*)0xB1105819)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR26	(*(volatile uint_io8_t*)0xB110581A)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR27	(*(volatile uint_io8_t*)0xB110581B)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR28	(*(volatile uint_io8_t*)0xB110581C)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR29	(*(volatile uint_io8_t*)0xB110581D)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR30	(*(volatile uint_io8_t*)0xB110581E)  /*@bfbba@*/
#define IRC0_IRQR0_IRQR31	(*(volatile uint_io8_t*)0xB110581F)  /*@bfbba@*/

typedef struct stc_irc0_irqr0_field{
    uint_io32_t		u1IRQR0:1;
    uint_io32_t		u1IRQR1:1;
    uint_io32_t		u1IRQR2:1;
    uint_io32_t		u1IRQR3:1;
    uint_io32_t		u1IRQR4:1;
    uint_io32_t		u1IRQR5:1;
    uint_io32_t		u1IRQR6:1;
    uint_io32_t		u1IRQR7:1;
    uint_io32_t		u1IRQR8:1;
    uint_io32_t		u1IRQR9:1;
    uint_io32_t		u1IRQR10:1;
    uint_io32_t		u1IRQR11:1;
    uint_io32_t		u1IRQR12:1;
    uint_io32_t		u1IRQR13:1;
    uint_io32_t		u1IRQR14:1;
    uint_io32_t		u1IRQR15:1;
    uint_io32_t		u1IRQR16:1;
    uint_io32_t		u1IRQR17:1;
    uint_io32_t		u1IRQR18:1;
    uint_io32_t		u1IRQR19:1;
    uint_io32_t		u1IRQR20:1;
    uint_io32_t		u1IRQR21:1;
    uint_io32_t		u1IRQR22:1;
    uint_io32_t		u1IRQR23:1;
    uint_io32_t		u1IRQR24:1;
    uint_io32_t		u1IRQR25:1;
    uint_io32_t		u1IRQR26:1;
    uint_io32_t		u1IRQR27:1;
    uint_io32_t		u1IRQR28:1;
    uint_io32_t		u1IRQR29:1;
    uint_io32_t		u1IRQR30:1;
    uint_io32_t		u1IRQR31:1;
}stc_irc0_irqr0_field_t;

typedef union un_irc0_irqr0{
    uint_io32_t		u32Register;
    stc_irc0_irqr0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr0_t;

/* IRQR1 */
#define IRC0_IRQR1	(IRC0.unIRQR1.u32Register)  /*@rg@*/
#define IRC0_IRQR1_IRQR32	(*(volatile uint_io8_t*)0xB1105820)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR33	(*(volatile uint_io8_t*)0xB1105821)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR34	(*(volatile uint_io8_t*)0xB1105822)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR35	(*(volatile uint_io8_t*)0xB1105823)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR36	(*(volatile uint_io8_t*)0xB1105824)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR37	(*(volatile uint_io8_t*)0xB1105825)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR38	(*(volatile uint_io8_t*)0xB1105826)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR39	(*(volatile uint_io8_t*)0xB1105827)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR40	(*(volatile uint_io8_t*)0xB1105828)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR41	(*(volatile uint_io8_t*)0xB1105829)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR42	(*(volatile uint_io8_t*)0xB110582A)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR43	(*(volatile uint_io8_t*)0xB110582B)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR44	(*(volatile uint_io8_t*)0xB110582C)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR45	(*(volatile uint_io8_t*)0xB110582D)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR46	(*(volatile uint_io8_t*)0xB110582E)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR47	(*(volatile uint_io8_t*)0xB110582F)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR48	(*(volatile uint_io8_t*)0xB1105830)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR49	(*(volatile uint_io8_t*)0xB1105831)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR50	(*(volatile uint_io8_t*)0xB1105832)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR51	(*(volatile uint_io8_t*)0xB1105833)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR52	(*(volatile uint_io8_t*)0xB1105834)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR53	(*(volatile uint_io8_t*)0xB1105835)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR54	(*(volatile uint_io8_t*)0xB1105836)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR55	(*(volatile uint_io8_t*)0xB1105837)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR56	(*(volatile uint_io8_t*)0xB1105838)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR57	(*(volatile uint_io8_t*)0xB1105839)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR58	(*(volatile uint_io8_t*)0xB110583A)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR59	(*(volatile uint_io8_t*)0xB110583B)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR60	(*(volatile uint_io8_t*)0xB110583C)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR61	(*(volatile uint_io8_t*)0xB110583D)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR62	(*(volatile uint_io8_t*)0xB110583E)  /*@bfbba@*/
#define IRC0_IRQR1_IRQR63	(*(volatile uint_io8_t*)0xB110583F)  /*@bfbba@*/

typedef struct stc_irc0_irqr1_field{
    uint_io32_t		u1IRQR32:1;
    uint_io32_t		u1IRQR33:1;
    uint_io32_t		u1IRQR34:1;
    uint_io32_t		u1IRQR35:1;
    uint_io32_t		u1IRQR36:1;
    uint_io32_t		u1IRQR37:1;
    uint_io32_t		u1IRQR38:1;
    uint_io32_t		u1IRQR39:1;
    uint_io32_t		u1IRQR40:1;
    uint_io32_t		u1IRQR41:1;
    uint_io32_t		u1IRQR42:1;
    uint_io32_t		u1IRQR43:1;
    uint_io32_t		u1IRQR44:1;
    uint_io32_t		u1IRQR45:1;
    uint_io32_t		u1IRQR46:1;
    uint_io32_t		u1IRQR47:1;
    uint_io32_t		u1IRQR48:1;
    uint_io32_t		u1IRQR49:1;
    uint_io32_t		u1IRQR50:1;
    uint_io32_t		u1IRQR51:1;
    uint_io32_t		u1IRQR52:1;
    uint_io32_t		u1IRQR53:1;
    uint_io32_t		u1IRQR54:1;
    uint_io32_t		u1IRQR55:1;
    uint_io32_t		u1IRQR56:1;
    uint_io32_t		u1IRQR57:1;
    uint_io32_t		u1IRQR58:1;
    uint_io32_t		u1IRQR59:1;
    uint_io32_t		u1IRQR60:1;
    uint_io32_t		u1IRQR61:1;
    uint_io32_t		u1IRQR62:1;
    uint_io32_t		u1IRQR63:1;
}stc_irc0_irqr1_field_t;

typedef union un_irc0_irqr1{
    uint_io32_t		u32Register;
    stc_irc0_irqr1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr1_t;

/* IRQR2 */
#define IRC0_IRQR2	(IRC0.unIRQR2.u32Register)  /*@rg@*/
#define IRC0_IRQR2_IRQR64	(*(volatile uint_io8_t*)0xB1105840)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR65	(*(volatile uint_io8_t*)0xB1105841)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR66	(*(volatile uint_io8_t*)0xB1105842)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR67	(*(volatile uint_io8_t*)0xB1105843)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR68	(*(volatile uint_io8_t*)0xB1105844)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR69	(*(volatile uint_io8_t*)0xB1105845)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR70	(*(volatile uint_io8_t*)0xB1105846)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR71	(*(volatile uint_io8_t*)0xB1105847)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR72	(*(volatile uint_io8_t*)0xB1105848)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR73	(*(volatile uint_io8_t*)0xB1105849)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR74	(*(volatile uint_io8_t*)0xB110584A)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR75	(*(volatile uint_io8_t*)0xB110584B)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR76	(*(volatile uint_io8_t*)0xB110584C)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR77	(*(volatile uint_io8_t*)0xB110584D)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR78	(*(volatile uint_io8_t*)0xB110584E)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR79	(*(volatile uint_io8_t*)0xB110584F)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR80	(*(volatile uint_io8_t*)0xB1105850)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR81	(*(volatile uint_io8_t*)0xB1105851)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR82	(*(volatile uint_io8_t*)0xB1105852)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR83	(*(volatile uint_io8_t*)0xB1105853)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR84	(*(volatile uint_io8_t*)0xB1105854)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR85	(*(volatile uint_io8_t*)0xB1105855)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR86	(*(volatile uint_io8_t*)0xB1105856)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR87	(*(volatile uint_io8_t*)0xB1105857)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR88	(*(volatile uint_io8_t*)0xB1105858)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR89	(*(volatile uint_io8_t*)0xB1105859)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR90	(*(volatile uint_io8_t*)0xB110585A)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR91	(*(volatile uint_io8_t*)0xB110585B)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR92	(*(volatile uint_io8_t*)0xB110585C)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR93	(*(volatile uint_io8_t*)0xB110585D)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR94	(*(volatile uint_io8_t*)0xB110585E)  /*@bfbba@*/
#define IRC0_IRQR2_IRQR95	(*(volatile uint_io8_t*)0xB110585F)  /*@bfbba@*/

typedef struct stc_irc0_irqr2_field{
    uint_io32_t		u1IRQR64:1;
    uint_io32_t		u1IRQR65:1;
    uint_io32_t		u1IRQR66:1;
    uint_io32_t		u1IRQR67:1;
    uint_io32_t		u1IRQR68:1;
    uint_io32_t		u1IRQR69:1;
    uint_io32_t		u1IRQR70:1;
    uint_io32_t		u1IRQR71:1;
    uint_io32_t		u1IRQR72:1;
    uint_io32_t		u1IRQR73:1;
    uint_io32_t		u1IRQR74:1;
    uint_io32_t		u1IRQR75:1;
    uint_io32_t		u1IRQR76:1;
    uint_io32_t		u1IRQR77:1;
    uint_io32_t		u1IRQR78:1;
    uint_io32_t		u1IRQR79:1;
    uint_io32_t		u1IRQR80:1;
    uint_io32_t		u1IRQR81:1;
    uint_io32_t		u1IRQR82:1;
    uint_io32_t		u1IRQR83:1;
    uint_io32_t		u1IRQR84:1;
    uint_io32_t		u1IRQR85:1;
    uint_io32_t		u1IRQR86:1;
    uint_io32_t		u1IRQR87:1;
    uint_io32_t		u1IRQR88:1;
    uint_io32_t		u1IRQR89:1;
    uint_io32_t		u1IRQR90:1;
    uint_io32_t		u1IRQR91:1;
    uint_io32_t		u1IRQR92:1;
    uint_io32_t		u1IRQR93:1;
    uint_io32_t		u1IRQR94:1;
    uint_io32_t		u1IRQR95:1;
}stc_irc0_irqr2_field_t;

typedef union un_irc0_irqr2{
    uint_io32_t		u32Register;
    stc_irc0_irqr2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr2_t;

/* IRQR3 */
#define IRC0_IRQR3	(IRC0.unIRQR3.u32Register)  /*@rg@*/
#define IRC0_IRQR3_IRQR96	(*(volatile uint_io8_t*)0xB1105860)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR97	(*(volatile uint_io8_t*)0xB1105861)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR98	(*(volatile uint_io8_t*)0xB1105862)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR99	(*(volatile uint_io8_t*)0xB1105863)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR100	(*(volatile uint_io8_t*)0xB1105864)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR101	(*(volatile uint_io8_t*)0xB1105865)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR102	(*(volatile uint_io8_t*)0xB1105866)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR103	(*(volatile uint_io8_t*)0xB1105867)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR104	(*(volatile uint_io8_t*)0xB1105868)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR105	(*(volatile uint_io8_t*)0xB1105869)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR106	(*(volatile uint_io8_t*)0xB110586A)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR107	(*(volatile uint_io8_t*)0xB110586B)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR108	(*(volatile uint_io8_t*)0xB110586C)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR109	(*(volatile uint_io8_t*)0xB110586D)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR110	(*(volatile uint_io8_t*)0xB110586E)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR111	(*(volatile uint_io8_t*)0xB110586F)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR112	(*(volatile uint_io8_t*)0xB1105870)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR113	(*(volatile uint_io8_t*)0xB1105871)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR114	(*(volatile uint_io8_t*)0xB1105872)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR115	(*(volatile uint_io8_t*)0xB1105873)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR116	(*(volatile uint_io8_t*)0xB1105874)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR117	(*(volatile uint_io8_t*)0xB1105875)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR118	(*(volatile uint_io8_t*)0xB1105876)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR119	(*(volatile uint_io8_t*)0xB1105877)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR120	(*(volatile uint_io8_t*)0xB1105878)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR121	(*(volatile uint_io8_t*)0xB1105879)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR122	(*(volatile uint_io8_t*)0xB110587A)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR123	(*(volatile uint_io8_t*)0xB110587B)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR124	(*(volatile uint_io8_t*)0xB110587C)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR125	(*(volatile uint_io8_t*)0xB110587D)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR126	(*(volatile uint_io8_t*)0xB110587E)  /*@bfbba@*/
#define IRC0_IRQR3_IRQR127	(*(volatile uint_io8_t*)0xB110587F)  /*@bfbba@*/

typedef struct stc_irc0_irqr3_field{
    uint_io32_t		u1IRQR96:1;
    uint_io32_t		u1IRQR97:1;
    uint_io32_t		u1IRQR98:1;
    uint_io32_t		u1IRQR99:1;
    uint_io32_t		u1IRQR100:1;
    uint_io32_t		u1IRQR101:1;
    uint_io32_t		u1IRQR102:1;
    uint_io32_t		u1IRQR103:1;
    uint_io32_t		u1IRQR104:1;
    uint_io32_t		u1IRQR105:1;
    uint_io32_t		u1IRQR106:1;
    uint_io32_t		u1IRQR107:1;
    uint_io32_t		u1IRQR108:1;
    uint_io32_t		u1IRQR109:1;
    uint_io32_t		u1IRQR110:1;
    uint_io32_t		u1IRQR111:1;
    uint_io32_t		u1IRQR112:1;
    uint_io32_t		u1IRQR113:1;
    uint_io32_t		u1IRQR114:1;
    uint_io32_t		u1IRQR115:1;
    uint_io32_t		u1IRQR116:1;
    uint_io32_t		u1IRQR117:1;
    uint_io32_t		u1IRQR118:1;
    uint_io32_t		u1IRQR119:1;
    uint_io32_t		u1IRQR120:1;
    uint_io32_t		u1IRQR121:1;
    uint_io32_t		u1IRQR122:1;
    uint_io32_t		u1IRQR123:1;
    uint_io32_t		u1IRQR124:1;
    uint_io32_t		u1IRQR125:1;
    uint_io32_t		u1IRQR126:1;
    uint_io32_t		u1IRQR127:1;
}stc_irc0_irqr3_field_t;

typedef union un_irc0_irqr3{
    uint_io32_t		u32Register;
    stc_irc0_irqr3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr3_t;

/* IRQR4 */
#define IRC0_IRQR4	(IRC0.unIRQR4.u32Register)  /*@rg@*/
#define IRC0_IRQR4_IRQR128	(*(volatile uint_io8_t*)0xB1105880)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR129	(*(volatile uint_io8_t*)0xB1105881)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR130	(*(volatile uint_io8_t*)0xB1105882)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR131	(*(volatile uint_io8_t*)0xB1105883)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR132	(*(volatile uint_io8_t*)0xB1105884)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR133	(*(volatile uint_io8_t*)0xB1105885)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR134	(*(volatile uint_io8_t*)0xB1105886)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR135	(*(volatile uint_io8_t*)0xB1105887)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR136	(*(volatile uint_io8_t*)0xB1105888)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR137	(*(volatile uint_io8_t*)0xB1105889)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR138	(*(volatile uint_io8_t*)0xB110588A)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR139	(*(volatile uint_io8_t*)0xB110588B)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR140	(*(volatile uint_io8_t*)0xB110588C)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR141	(*(volatile uint_io8_t*)0xB110588D)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR142	(*(volatile uint_io8_t*)0xB110588E)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR143	(*(volatile uint_io8_t*)0xB110588F)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR144	(*(volatile uint_io8_t*)0xB1105890)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR145	(*(volatile uint_io8_t*)0xB1105891)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR146	(*(volatile uint_io8_t*)0xB1105892)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR147	(*(volatile uint_io8_t*)0xB1105893)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR148	(*(volatile uint_io8_t*)0xB1105894)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR149	(*(volatile uint_io8_t*)0xB1105895)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR150	(*(volatile uint_io8_t*)0xB1105896)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR151	(*(volatile uint_io8_t*)0xB1105897)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR152	(*(volatile uint_io8_t*)0xB1105898)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR153	(*(volatile uint_io8_t*)0xB1105899)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR154	(*(volatile uint_io8_t*)0xB110589A)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR155	(*(volatile uint_io8_t*)0xB110589B)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR156	(*(volatile uint_io8_t*)0xB110589C)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR157	(*(volatile uint_io8_t*)0xB110589D)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR158	(*(volatile uint_io8_t*)0xB110589E)  /*@bfbba@*/
#define IRC0_IRQR4_IRQR159	(*(volatile uint_io8_t*)0xB110589F)  /*@bfbba@*/

typedef struct stc_irc0_irqr4_field{
    uint_io32_t		u1IRQR128:1;
    uint_io32_t		u1IRQR129:1;
    uint_io32_t		u1IRQR130:1;
    uint_io32_t		u1IRQR131:1;
    uint_io32_t		u1IRQR132:1;
    uint_io32_t		u1IRQR133:1;
    uint_io32_t		u1IRQR134:1;
    uint_io32_t		u1IRQR135:1;
    uint_io32_t		u1IRQR136:1;
    uint_io32_t		u1IRQR137:1;
    uint_io32_t		u1IRQR138:1;
    uint_io32_t		u1IRQR139:1;
    uint_io32_t		u1IRQR140:1;
    uint_io32_t		u1IRQR141:1;
    uint_io32_t		u1IRQR142:1;
    uint_io32_t		u1IRQR143:1;
    uint_io32_t		u1IRQR144:1;
    uint_io32_t		u1IRQR145:1;
    uint_io32_t		u1IRQR146:1;
    uint_io32_t		u1IRQR147:1;
    uint_io32_t		u1IRQR148:1;
    uint_io32_t		u1IRQR149:1;
    uint_io32_t		u1IRQR150:1;
    uint_io32_t		u1IRQR151:1;
    uint_io32_t		u1IRQR152:1;
    uint_io32_t		u1IRQR153:1;
    uint_io32_t		u1IRQR154:1;
    uint_io32_t		u1IRQR155:1;
    uint_io32_t		u1IRQR156:1;
    uint_io32_t		u1IRQR157:1;
    uint_io32_t		u1IRQR158:1;
    uint_io32_t		u1IRQR159:1;
}stc_irc0_irqr4_field_t;

typedef union un_irc0_irqr4{
    uint_io32_t		u32Register;
    stc_irc0_irqr4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr4_t;

/* IRQR5 */
#define IRC0_IRQR5	(IRC0.unIRQR5.u32Register)  /*@rg@*/
#define IRC0_IRQR5_IRQR160	(*(volatile uint_io8_t*)0xB11058A0)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR161	(*(volatile uint_io8_t*)0xB11058A1)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR162	(*(volatile uint_io8_t*)0xB11058A2)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR163	(*(volatile uint_io8_t*)0xB11058A3)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR164	(*(volatile uint_io8_t*)0xB11058A4)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR165	(*(volatile uint_io8_t*)0xB11058A5)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR166	(*(volatile uint_io8_t*)0xB11058A6)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR167	(*(volatile uint_io8_t*)0xB11058A7)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR168	(*(volatile uint_io8_t*)0xB11058A8)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR169	(*(volatile uint_io8_t*)0xB11058A9)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR170	(*(volatile uint_io8_t*)0xB11058AA)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR171	(*(volatile uint_io8_t*)0xB11058AB)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR172	(*(volatile uint_io8_t*)0xB11058AC)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR173	(*(volatile uint_io8_t*)0xB11058AD)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR174	(*(volatile uint_io8_t*)0xB11058AE)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR175	(*(volatile uint_io8_t*)0xB11058AF)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR176	(*(volatile uint_io8_t*)0xB11058B0)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR177	(*(volatile uint_io8_t*)0xB11058B1)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR178	(*(volatile uint_io8_t*)0xB11058B2)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR179	(*(volatile uint_io8_t*)0xB11058B3)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR180	(*(volatile uint_io8_t*)0xB11058B4)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR181	(*(volatile uint_io8_t*)0xB11058B5)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR182	(*(volatile uint_io8_t*)0xB11058B6)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR183	(*(volatile uint_io8_t*)0xB11058B7)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR184	(*(volatile uint_io8_t*)0xB11058B8)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR185	(*(volatile uint_io8_t*)0xB11058B9)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR186	(*(volatile uint_io8_t*)0xB11058BA)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR187	(*(volatile uint_io8_t*)0xB11058BB)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR188	(*(volatile uint_io8_t*)0xB11058BC)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR189	(*(volatile uint_io8_t*)0xB11058BD)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR190	(*(volatile uint_io8_t*)0xB11058BE)  /*@bfbba@*/
#define IRC0_IRQR5_IRQR191	(*(volatile uint_io8_t*)0xB11058BF)  /*@bfbba@*/

typedef struct stc_irc0_irqr5_field{
    uint_io32_t		u1IRQR160:1;
    uint_io32_t		u1IRQR161:1;
    uint_io32_t		u1IRQR162:1;
    uint_io32_t		u1IRQR163:1;
    uint_io32_t		u1IRQR164:1;
    uint_io32_t		u1IRQR165:1;
    uint_io32_t		u1IRQR166:1;
    uint_io32_t		u1IRQR167:1;
    uint_io32_t		u1IRQR168:1;
    uint_io32_t		u1IRQR169:1;
    uint_io32_t		u1IRQR170:1;
    uint_io32_t		u1IRQR171:1;
    uint_io32_t		u1IRQR172:1;
    uint_io32_t		u1IRQR173:1;
    uint_io32_t		u1IRQR174:1;
    uint_io32_t		u1IRQR175:1;
    uint_io32_t		u1IRQR176:1;
    uint_io32_t		u1IRQR177:1;
    uint_io32_t		u1IRQR178:1;
    uint_io32_t		u1IRQR179:1;
    uint_io32_t		u1IRQR180:1;
    uint_io32_t		u1IRQR181:1;
    uint_io32_t		u1IRQR182:1;
    uint_io32_t		u1IRQR183:1;
    uint_io32_t		u1IRQR184:1;
    uint_io32_t		u1IRQR185:1;
    uint_io32_t		u1IRQR186:1;
    uint_io32_t		u1IRQR187:1;
    uint_io32_t		u1IRQR188:1;
    uint_io32_t		u1IRQR189:1;
    uint_io32_t		u1IRQR190:1;
    uint_io32_t		u1IRQR191:1;
}stc_irc0_irqr5_field_t;

typedef union un_irc0_irqr5{
    uint_io32_t		u32Register;
    stc_irc0_irqr5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr5_t;

/* IRQR6 */
#define IRC0_IRQR6	(IRC0.unIRQR6.u32Register)  /*@rg@*/
#define IRC0_IRQR6_IRQR192	(*(volatile uint_io8_t*)0xB11058C0)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR193	(*(volatile uint_io8_t*)0xB11058C1)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR194	(*(volatile uint_io8_t*)0xB11058C2)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR195	(*(volatile uint_io8_t*)0xB11058C3)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR196	(*(volatile uint_io8_t*)0xB11058C4)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR197	(*(volatile uint_io8_t*)0xB11058C5)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR198	(*(volatile uint_io8_t*)0xB11058C6)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR199	(*(volatile uint_io8_t*)0xB11058C7)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR200	(*(volatile uint_io8_t*)0xB11058C8)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR201	(*(volatile uint_io8_t*)0xB11058C9)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR202	(*(volatile uint_io8_t*)0xB11058CA)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR203	(*(volatile uint_io8_t*)0xB11058CB)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR204	(*(volatile uint_io8_t*)0xB11058CC)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR205	(*(volatile uint_io8_t*)0xB11058CD)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR206	(*(volatile uint_io8_t*)0xB11058CE)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR207	(*(volatile uint_io8_t*)0xB11058CF)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR208	(*(volatile uint_io8_t*)0xB11058D0)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR209	(*(volatile uint_io8_t*)0xB11058D1)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR210	(*(volatile uint_io8_t*)0xB11058D2)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR211	(*(volatile uint_io8_t*)0xB11058D3)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR212	(*(volatile uint_io8_t*)0xB11058D4)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR213	(*(volatile uint_io8_t*)0xB11058D5)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR214	(*(volatile uint_io8_t*)0xB11058D6)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR215	(*(volatile uint_io8_t*)0xB11058D7)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR216	(*(volatile uint_io8_t*)0xB11058D8)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR217	(*(volatile uint_io8_t*)0xB11058D9)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR218	(*(volatile uint_io8_t*)0xB11058DA)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR219	(*(volatile uint_io8_t*)0xB11058DB)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR220	(*(volatile uint_io8_t*)0xB11058DC)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR221	(*(volatile uint_io8_t*)0xB11058DD)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR222	(*(volatile uint_io8_t*)0xB11058DE)  /*@bfbba@*/
#define IRC0_IRQR6_IRQR223	(*(volatile uint_io8_t*)0xB11058DF)  /*@bfbba@*/

typedef struct stc_irc0_irqr6_field{
    uint_io32_t		u1IRQR192:1;
    uint_io32_t		u1IRQR193:1;
    uint_io32_t		u1IRQR194:1;
    uint_io32_t		u1IRQR195:1;
    uint_io32_t		u1IRQR196:1;
    uint_io32_t		u1IRQR197:1;
    uint_io32_t		u1IRQR198:1;
    uint_io32_t		u1IRQR199:1;
    uint_io32_t		u1IRQR200:1;
    uint_io32_t		u1IRQR201:1;
    uint_io32_t		u1IRQR202:1;
    uint_io32_t		u1IRQR203:1;
    uint_io32_t		u1IRQR204:1;
    uint_io32_t		u1IRQR205:1;
    uint_io32_t		u1IRQR206:1;
    uint_io32_t		u1IRQR207:1;
    uint_io32_t		u1IRQR208:1;
    uint_io32_t		u1IRQR209:1;
    uint_io32_t		u1IRQR210:1;
    uint_io32_t		u1IRQR211:1;
    uint_io32_t		u1IRQR212:1;
    uint_io32_t		u1IRQR213:1;
    uint_io32_t		u1IRQR214:1;
    uint_io32_t		u1IRQR215:1;
    uint_io32_t		u1IRQR216:1;
    uint_io32_t		u1IRQR217:1;
    uint_io32_t		u1IRQR218:1;
    uint_io32_t		u1IRQR219:1;
    uint_io32_t		u1IRQR220:1;
    uint_io32_t		u1IRQR221:1;
    uint_io32_t		u1IRQR222:1;
    uint_io32_t		u1IRQR223:1;
}stc_irc0_irqr6_field_t;

typedef union un_irc0_irqr6{
    uint_io32_t		u32Register;
    stc_irc0_irqr6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr6_t;

/* IRQR7 */
#define IRC0_IRQR7	(IRC0.unIRQR7.u32Register)  /*@rg@*/
#define IRC0_IRQR7_IRQR224	(*(volatile uint_io8_t*)0xB11058E0)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR225	(*(volatile uint_io8_t*)0xB11058E1)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR226	(*(volatile uint_io8_t*)0xB11058E2)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR227	(*(volatile uint_io8_t*)0xB11058E3)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR228	(*(volatile uint_io8_t*)0xB11058E4)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR229	(*(volatile uint_io8_t*)0xB11058E5)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR230	(*(volatile uint_io8_t*)0xB11058E6)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR231	(*(volatile uint_io8_t*)0xB11058E7)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR232	(*(volatile uint_io8_t*)0xB11058E8)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR233	(*(volatile uint_io8_t*)0xB11058E9)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR234	(*(volatile uint_io8_t*)0xB11058EA)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR235	(*(volatile uint_io8_t*)0xB11058EB)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR236	(*(volatile uint_io8_t*)0xB11058EC)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR237	(*(volatile uint_io8_t*)0xB11058ED)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR238	(*(volatile uint_io8_t*)0xB11058EE)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR239	(*(volatile uint_io8_t*)0xB11058EF)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR240	(*(volatile uint_io8_t*)0xB11058F0)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR241	(*(volatile uint_io8_t*)0xB11058F1)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR242	(*(volatile uint_io8_t*)0xB11058F2)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR243	(*(volatile uint_io8_t*)0xB11058F3)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR244	(*(volatile uint_io8_t*)0xB11058F4)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR245	(*(volatile uint_io8_t*)0xB11058F5)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR246	(*(volatile uint_io8_t*)0xB11058F6)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR247	(*(volatile uint_io8_t*)0xB11058F7)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR248	(*(volatile uint_io8_t*)0xB11058F8)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR249	(*(volatile uint_io8_t*)0xB11058F9)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR250	(*(volatile uint_io8_t*)0xB11058FA)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR251	(*(volatile uint_io8_t*)0xB11058FB)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR252	(*(volatile uint_io8_t*)0xB11058FC)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR253	(*(volatile uint_io8_t*)0xB11058FD)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR254	(*(volatile uint_io8_t*)0xB11058FE)  /*@bfbba@*/
#define IRC0_IRQR7_IRQR255	(*(volatile uint_io8_t*)0xB11058FF)  /*@bfbba@*/

typedef struct stc_irc0_irqr7_field{
    uint_io32_t		u1IRQR224:1;
    uint_io32_t		u1IRQR225:1;
    uint_io32_t		u1IRQR226:1;
    uint_io32_t		u1IRQR227:1;
    uint_io32_t		u1IRQR228:1;
    uint_io32_t		u1IRQR229:1;
    uint_io32_t		u1IRQR230:1;
    uint_io32_t		u1IRQR231:1;
    uint_io32_t		u1IRQR232:1;
    uint_io32_t		u1IRQR233:1;
    uint_io32_t		u1IRQR234:1;
    uint_io32_t		u1IRQR235:1;
    uint_io32_t		u1IRQR236:1;
    uint_io32_t		u1IRQR237:1;
    uint_io32_t		u1IRQR238:1;
    uint_io32_t		u1IRQR239:1;
    uint_io32_t		u1IRQR240:1;
    uint_io32_t		u1IRQR241:1;
    uint_io32_t		u1IRQR242:1;
    uint_io32_t		u1IRQR243:1;
    uint_io32_t		u1IRQR244:1;
    uint_io32_t		u1IRQR245:1;
    uint_io32_t		u1IRQR246:1;
    uint_io32_t		u1IRQR247:1;
    uint_io32_t		u1IRQR248:1;
    uint_io32_t		u1IRQR249:1;
    uint_io32_t		u1IRQR250:1;
    uint_io32_t		u1IRQR251:1;
    uint_io32_t		u1IRQR252:1;
    uint_io32_t		u1IRQR253:1;
    uint_io32_t		u1IRQR254:1;
    uint_io32_t		u1IRQR255:1;
}stc_irc0_irqr7_field_t;

typedef union un_irc0_irqr7{
    uint_io32_t		u32Register;
    stc_irc0_irqr7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr7_t;

/* IRQR8 */
#define IRC0_IRQR8	(IRC0.unIRQR8.u32Register)  /*@rg@*/
#define IRC0_IRQR8_IRQR256	(*(volatile uint_io8_t*)0xB1105900)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR257	(*(volatile uint_io8_t*)0xB1105901)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR258	(*(volatile uint_io8_t*)0xB1105902)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR259	(*(volatile uint_io8_t*)0xB1105903)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR260	(*(volatile uint_io8_t*)0xB1105904)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR261	(*(volatile uint_io8_t*)0xB1105905)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR262	(*(volatile uint_io8_t*)0xB1105906)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR263	(*(volatile uint_io8_t*)0xB1105907)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR264	(*(volatile uint_io8_t*)0xB1105908)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR265	(*(volatile uint_io8_t*)0xB1105909)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR266	(*(volatile uint_io8_t*)0xB110590A)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR267	(*(volatile uint_io8_t*)0xB110590B)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR268	(*(volatile uint_io8_t*)0xB110590C)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR269	(*(volatile uint_io8_t*)0xB110590D)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR270	(*(volatile uint_io8_t*)0xB110590E)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR271	(*(volatile uint_io8_t*)0xB110590F)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR272	(*(volatile uint_io8_t*)0xB1105910)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR273	(*(volatile uint_io8_t*)0xB1105911)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR274	(*(volatile uint_io8_t*)0xB1105912)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR275	(*(volatile uint_io8_t*)0xB1105913)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR276	(*(volatile uint_io8_t*)0xB1105914)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR277	(*(volatile uint_io8_t*)0xB1105915)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR278	(*(volatile uint_io8_t*)0xB1105916)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR279	(*(volatile uint_io8_t*)0xB1105917)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR280	(*(volatile uint_io8_t*)0xB1105918)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR281	(*(volatile uint_io8_t*)0xB1105919)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR282	(*(volatile uint_io8_t*)0xB110591A)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR283	(*(volatile uint_io8_t*)0xB110591B)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR284	(*(volatile uint_io8_t*)0xB110591C)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR285	(*(volatile uint_io8_t*)0xB110591D)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR286	(*(volatile uint_io8_t*)0xB110591E)  /*@bfbba@*/
#define IRC0_IRQR8_IRQR287	(*(volatile uint_io8_t*)0xB110591F)  /*@bfbba@*/

typedef struct stc_irc0_irqr8_field{
    uint_io32_t		u1IRQR256:1;
    uint_io32_t		u1IRQR257:1;
    uint_io32_t		u1IRQR258:1;
    uint_io32_t		u1IRQR259:1;
    uint_io32_t		u1IRQR260:1;
    uint_io32_t		u1IRQR261:1;
    uint_io32_t		u1IRQR262:1;
    uint_io32_t		u1IRQR263:1;
    uint_io32_t		u1IRQR264:1;
    uint_io32_t		u1IRQR265:1;
    uint_io32_t		u1IRQR266:1;
    uint_io32_t		u1IRQR267:1;
    uint_io32_t		u1IRQR268:1;
    uint_io32_t		u1IRQR269:1;
    uint_io32_t		u1IRQR270:1;
    uint_io32_t		u1IRQR271:1;
    uint_io32_t		u1IRQR272:1;
    uint_io32_t		u1IRQR273:1;
    uint_io32_t		u1IRQR274:1;
    uint_io32_t		u1IRQR275:1;
    uint_io32_t		u1IRQR276:1;
    uint_io32_t		u1IRQR277:1;
    uint_io32_t		u1IRQR278:1;
    uint_io32_t		u1IRQR279:1;
    uint_io32_t		u1IRQR280:1;
    uint_io32_t		u1IRQR281:1;
    uint_io32_t		u1IRQR282:1;
    uint_io32_t		u1IRQR283:1;
    uint_io32_t		u1IRQR284:1;
    uint_io32_t		u1IRQR285:1;
    uint_io32_t		u1IRQR286:1;
    uint_io32_t		u1IRQR287:1;
}stc_irc0_irqr8_field_t;

typedef union un_irc0_irqr8{
    uint_io32_t		u32Register;
    stc_irc0_irqr8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr8_t;

/* IRQR9 */
#define IRC0_IRQR9	(IRC0.unIRQR9.u32Register)  /*@rg@*/
#define IRC0_IRQR9_IRQR288	(*(volatile uint_io8_t*)0xB1105920)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR289	(*(volatile uint_io8_t*)0xB1105921)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR290	(*(volatile uint_io8_t*)0xB1105922)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR291	(*(volatile uint_io8_t*)0xB1105923)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR292	(*(volatile uint_io8_t*)0xB1105924)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR293	(*(volatile uint_io8_t*)0xB1105925)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR294	(*(volatile uint_io8_t*)0xB1105926)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR295	(*(volatile uint_io8_t*)0xB1105927)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR296	(*(volatile uint_io8_t*)0xB1105928)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR297	(*(volatile uint_io8_t*)0xB1105929)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR298	(*(volatile uint_io8_t*)0xB110592A)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR299	(*(volatile uint_io8_t*)0xB110592B)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR300	(*(volatile uint_io8_t*)0xB110592C)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR301	(*(volatile uint_io8_t*)0xB110592D)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR302	(*(volatile uint_io8_t*)0xB110592E)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR303	(*(volatile uint_io8_t*)0xB110592F)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR304	(*(volatile uint_io8_t*)0xB1105930)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR305	(*(volatile uint_io8_t*)0xB1105931)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR306	(*(volatile uint_io8_t*)0xB1105932)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR307	(*(volatile uint_io8_t*)0xB1105933)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR308	(*(volatile uint_io8_t*)0xB1105934)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR309	(*(volatile uint_io8_t*)0xB1105935)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR310	(*(volatile uint_io8_t*)0xB1105936)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR311	(*(volatile uint_io8_t*)0xB1105937)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR312	(*(volatile uint_io8_t*)0xB1105938)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR313	(*(volatile uint_io8_t*)0xB1105939)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR314	(*(volatile uint_io8_t*)0xB110593A)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR315	(*(volatile uint_io8_t*)0xB110593B)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR316	(*(volatile uint_io8_t*)0xB110593C)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR317	(*(volatile uint_io8_t*)0xB110593D)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR318	(*(volatile uint_io8_t*)0xB110593E)  /*@bfbba@*/
#define IRC0_IRQR9_IRQR319	(*(volatile uint_io8_t*)0xB110593F)  /*@bfbba@*/

typedef struct stc_irc0_irqr9_field{
    uint_io32_t		u1IRQR288:1;
    uint_io32_t		u1IRQR289:1;
    uint_io32_t		u1IRQR290:1;
    uint_io32_t		u1IRQR291:1;
    uint_io32_t		u1IRQR292:1;
    uint_io32_t		u1IRQR293:1;
    uint_io32_t		u1IRQR294:1;
    uint_io32_t		u1IRQR295:1;
    uint_io32_t		u1IRQR296:1;
    uint_io32_t		u1IRQR297:1;
    uint_io32_t		u1IRQR298:1;
    uint_io32_t		u1IRQR299:1;
    uint_io32_t		u1IRQR300:1;
    uint_io32_t		u1IRQR301:1;
    uint_io32_t		u1IRQR302:1;
    uint_io32_t		u1IRQR303:1;
    uint_io32_t		u1IRQR304:1;
    uint_io32_t		u1IRQR305:1;
    uint_io32_t		u1IRQR306:1;
    uint_io32_t		u1IRQR307:1;
    uint_io32_t		u1IRQR308:1;
    uint_io32_t		u1IRQR309:1;
    uint_io32_t		u1IRQR310:1;
    uint_io32_t		u1IRQR311:1;
    uint_io32_t		u1IRQR312:1;
    uint_io32_t		u1IRQR313:1;
    uint_io32_t		u1IRQR314:1;
    uint_io32_t		u1IRQR315:1;
    uint_io32_t		u1IRQR316:1;
    uint_io32_t		u1IRQR317:1;
    uint_io32_t		u1IRQR318:1;
    uint_io32_t		u1IRQR319:1;
}stc_irc0_irqr9_field_t;

typedef union un_irc0_irqr9{
    uint_io32_t		u32Register;
    stc_irc0_irqr9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr9_t;

/* IRQR10 */
#define IRC0_IRQR10	(IRC0.unIRQR10.u32Register)  /*@rg@*/
#define IRC0_IRQR10_IRQR320	(*(volatile uint_io8_t*)0xB1105940)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR321	(*(volatile uint_io8_t*)0xB1105941)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR322	(*(volatile uint_io8_t*)0xB1105942)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR323	(*(volatile uint_io8_t*)0xB1105943)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR324	(*(volatile uint_io8_t*)0xB1105944)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR325	(*(volatile uint_io8_t*)0xB1105945)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR326	(*(volatile uint_io8_t*)0xB1105946)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR327	(*(volatile uint_io8_t*)0xB1105947)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR328	(*(volatile uint_io8_t*)0xB1105948)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR329	(*(volatile uint_io8_t*)0xB1105949)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR330	(*(volatile uint_io8_t*)0xB110594A)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR331	(*(volatile uint_io8_t*)0xB110594B)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR332	(*(volatile uint_io8_t*)0xB110594C)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR333	(*(volatile uint_io8_t*)0xB110594D)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR334	(*(volatile uint_io8_t*)0xB110594E)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR335	(*(volatile uint_io8_t*)0xB110594F)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR336	(*(volatile uint_io8_t*)0xB1105950)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR337	(*(volatile uint_io8_t*)0xB1105951)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR338	(*(volatile uint_io8_t*)0xB1105952)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR339	(*(volatile uint_io8_t*)0xB1105953)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR340	(*(volatile uint_io8_t*)0xB1105954)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR341	(*(volatile uint_io8_t*)0xB1105955)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR342	(*(volatile uint_io8_t*)0xB1105956)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR343	(*(volatile uint_io8_t*)0xB1105957)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR344	(*(volatile uint_io8_t*)0xB1105958)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR345	(*(volatile uint_io8_t*)0xB1105959)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR346	(*(volatile uint_io8_t*)0xB110595A)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR347	(*(volatile uint_io8_t*)0xB110595B)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR348	(*(volatile uint_io8_t*)0xB110595C)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR349	(*(volatile uint_io8_t*)0xB110595D)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR350	(*(volatile uint_io8_t*)0xB110595E)  /*@bfbba@*/
#define IRC0_IRQR10_IRQR351	(*(volatile uint_io8_t*)0xB110595F)  /*@bfbba@*/

typedef struct stc_irc0_irqr10_field{
    uint_io32_t		u1IRQR320:1;
    uint_io32_t		u1IRQR321:1;
    uint_io32_t		u1IRQR322:1;
    uint_io32_t		u1IRQR323:1;
    uint_io32_t		u1IRQR324:1;
    uint_io32_t		u1IRQR325:1;
    uint_io32_t		u1IRQR326:1;
    uint_io32_t		u1IRQR327:1;
    uint_io32_t		u1IRQR328:1;
    uint_io32_t		u1IRQR329:1;
    uint_io32_t		u1IRQR330:1;
    uint_io32_t		u1IRQR331:1;
    uint_io32_t		u1IRQR332:1;
    uint_io32_t		u1IRQR333:1;
    uint_io32_t		u1IRQR334:1;
    uint_io32_t		u1IRQR335:1;
    uint_io32_t		u1IRQR336:1;
    uint_io32_t		u1IRQR337:1;
    uint_io32_t		u1IRQR338:1;
    uint_io32_t		u1IRQR339:1;
    uint_io32_t		u1IRQR340:1;
    uint_io32_t		u1IRQR341:1;
    uint_io32_t		u1IRQR342:1;
    uint_io32_t		u1IRQR343:1;
    uint_io32_t		u1IRQR344:1;
    uint_io32_t		u1IRQR345:1;
    uint_io32_t		u1IRQR346:1;
    uint_io32_t		u1IRQR347:1;
    uint_io32_t		u1IRQR348:1;
    uint_io32_t		u1IRQR349:1;
    uint_io32_t		u1IRQR350:1;
    uint_io32_t		u1IRQR351:1;
}stc_irc0_irqr10_field_t;

typedef union un_irc0_irqr10{
    uint_io32_t		u32Register;
    stc_irc0_irqr10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr10_t;

/* IRQR11 */
#define IRC0_IRQR11	(IRC0.unIRQR11.u32Register)  /*@rg@*/
#define IRC0_IRQR11_IRQR352	(*(volatile uint_io8_t*)0xB1105960)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR353	(*(volatile uint_io8_t*)0xB1105961)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR354	(*(volatile uint_io8_t*)0xB1105962)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR355	(*(volatile uint_io8_t*)0xB1105963)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR356	(*(volatile uint_io8_t*)0xB1105964)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR357	(*(volatile uint_io8_t*)0xB1105965)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR358	(*(volatile uint_io8_t*)0xB1105966)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR359	(*(volatile uint_io8_t*)0xB1105967)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR360	(*(volatile uint_io8_t*)0xB1105968)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR361	(*(volatile uint_io8_t*)0xB1105969)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR362	(*(volatile uint_io8_t*)0xB110596A)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR363	(*(volatile uint_io8_t*)0xB110596B)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR364	(*(volatile uint_io8_t*)0xB110596C)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR365	(*(volatile uint_io8_t*)0xB110596D)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR366	(*(volatile uint_io8_t*)0xB110596E)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR367	(*(volatile uint_io8_t*)0xB110596F)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR368	(*(volatile uint_io8_t*)0xB1105970)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR369	(*(volatile uint_io8_t*)0xB1105971)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR370	(*(volatile uint_io8_t*)0xB1105972)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR371	(*(volatile uint_io8_t*)0xB1105973)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR372	(*(volatile uint_io8_t*)0xB1105974)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR373	(*(volatile uint_io8_t*)0xB1105975)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR374	(*(volatile uint_io8_t*)0xB1105976)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR375	(*(volatile uint_io8_t*)0xB1105977)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR376	(*(volatile uint_io8_t*)0xB1105978)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR377	(*(volatile uint_io8_t*)0xB1105979)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR378	(*(volatile uint_io8_t*)0xB110597A)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR379	(*(volatile uint_io8_t*)0xB110597B)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR380	(*(volatile uint_io8_t*)0xB110597C)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR381	(*(volatile uint_io8_t*)0xB110597D)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR382	(*(volatile uint_io8_t*)0xB110597E)  /*@bfbba@*/
#define IRC0_IRQR11_IRQR383	(*(volatile uint_io8_t*)0xB110597F)  /*@bfbba@*/

typedef struct stc_irc0_irqr11_field{
    uint_io32_t		u1IRQR352:1;
    uint_io32_t		u1IRQR353:1;
    uint_io32_t		u1IRQR354:1;
    uint_io32_t		u1IRQR355:1;
    uint_io32_t		u1IRQR356:1;
    uint_io32_t		u1IRQR357:1;
    uint_io32_t		u1IRQR358:1;
    uint_io32_t		u1IRQR359:1;
    uint_io32_t		u1IRQR360:1;
    uint_io32_t		u1IRQR361:1;
    uint_io32_t		u1IRQR362:1;
    uint_io32_t		u1IRQR363:1;
    uint_io32_t		u1IRQR364:1;
    uint_io32_t		u1IRQR365:1;
    uint_io32_t		u1IRQR366:1;
    uint_io32_t		u1IRQR367:1;
    uint_io32_t		u1IRQR368:1;
    uint_io32_t		u1IRQR369:1;
    uint_io32_t		u1IRQR370:1;
    uint_io32_t		u1IRQR371:1;
    uint_io32_t		u1IRQR372:1;
    uint_io32_t		u1IRQR373:1;
    uint_io32_t		u1IRQR374:1;
    uint_io32_t		u1IRQR375:1;
    uint_io32_t		u1IRQR376:1;
    uint_io32_t		u1IRQR377:1;
    uint_io32_t		u1IRQR378:1;
    uint_io32_t		u1IRQR379:1;
    uint_io32_t		u1IRQR380:1;
    uint_io32_t		u1IRQR381:1;
    uint_io32_t		u1IRQR382:1;
    uint_io32_t		u1IRQR383:1;
}stc_irc0_irqr11_field_t;

typedef union un_irc0_irqr11{
    uint_io32_t		u32Register;
    stc_irc0_irqr11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr11_t;

/* IRQR12 */
#define IRC0_IRQR12	(IRC0.unIRQR12.u32Register)  /*@rg@*/
#define IRC0_IRQR12_IRQR384	(*(volatile uint_io8_t*)0xB1105980)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR385	(*(volatile uint_io8_t*)0xB1105981)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR386	(*(volatile uint_io8_t*)0xB1105982)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR387	(*(volatile uint_io8_t*)0xB1105983)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR388	(*(volatile uint_io8_t*)0xB1105984)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR389	(*(volatile uint_io8_t*)0xB1105985)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR390	(*(volatile uint_io8_t*)0xB1105986)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR391	(*(volatile uint_io8_t*)0xB1105987)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR392	(*(volatile uint_io8_t*)0xB1105988)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR393	(*(volatile uint_io8_t*)0xB1105989)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR394	(*(volatile uint_io8_t*)0xB110598A)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR395	(*(volatile uint_io8_t*)0xB110598B)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR396	(*(volatile uint_io8_t*)0xB110598C)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR397	(*(volatile uint_io8_t*)0xB110598D)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR398	(*(volatile uint_io8_t*)0xB110598E)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR399	(*(volatile uint_io8_t*)0xB110598F)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR400	(*(volatile uint_io8_t*)0xB1105990)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR401	(*(volatile uint_io8_t*)0xB1105991)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR402	(*(volatile uint_io8_t*)0xB1105992)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR403	(*(volatile uint_io8_t*)0xB1105993)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR404	(*(volatile uint_io8_t*)0xB1105994)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR405	(*(volatile uint_io8_t*)0xB1105995)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR406	(*(volatile uint_io8_t*)0xB1105996)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR407	(*(volatile uint_io8_t*)0xB1105997)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR408	(*(volatile uint_io8_t*)0xB1105998)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR409	(*(volatile uint_io8_t*)0xB1105999)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR410	(*(volatile uint_io8_t*)0xB110599A)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR411	(*(volatile uint_io8_t*)0xB110599B)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR412	(*(volatile uint_io8_t*)0xB110599C)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR413	(*(volatile uint_io8_t*)0xB110599D)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR414	(*(volatile uint_io8_t*)0xB110599E)  /*@bfbba@*/
#define IRC0_IRQR12_IRQR415	(*(volatile uint_io8_t*)0xB110599F)  /*@bfbba@*/

typedef struct stc_irc0_irqr12_field{
    uint_io32_t		u1IRQR384:1;
    uint_io32_t		u1IRQR385:1;
    uint_io32_t		u1IRQR386:1;
    uint_io32_t		u1IRQR387:1;
    uint_io32_t		u1IRQR388:1;
    uint_io32_t		u1IRQR389:1;
    uint_io32_t		u1IRQR390:1;
    uint_io32_t		u1IRQR391:1;
    uint_io32_t		u1IRQR392:1;
    uint_io32_t		u1IRQR393:1;
    uint_io32_t		u1IRQR394:1;
    uint_io32_t		u1IRQR395:1;
    uint_io32_t		u1IRQR396:1;
    uint_io32_t		u1IRQR397:1;
    uint_io32_t		u1IRQR398:1;
    uint_io32_t		u1IRQR399:1;
    uint_io32_t		u1IRQR400:1;
    uint_io32_t		u1IRQR401:1;
    uint_io32_t		u1IRQR402:1;
    uint_io32_t		u1IRQR403:1;
    uint_io32_t		u1IRQR404:1;
    uint_io32_t		u1IRQR405:1;
    uint_io32_t		u1IRQR406:1;
    uint_io32_t		u1IRQR407:1;
    uint_io32_t		u1IRQR408:1;
    uint_io32_t		u1IRQR409:1;
    uint_io32_t		u1IRQR410:1;
    uint_io32_t		u1IRQR411:1;
    uint_io32_t		u1IRQR412:1;
    uint_io32_t		u1IRQR413:1;
    uint_io32_t		u1IRQR414:1;
    uint_io32_t		u1IRQR415:1;
}stc_irc0_irqr12_field_t;

typedef union un_irc0_irqr12{
    uint_io32_t		u32Register;
    stc_irc0_irqr12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr12_t;

/* IRQR13 */
#define IRC0_IRQR13	(IRC0.unIRQR13.u32Register)  /*@rg@*/
#define IRC0_IRQR13_IRQR416	(*(volatile uint_io8_t*)0xB11059A0)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR417	(*(volatile uint_io8_t*)0xB11059A1)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR418	(*(volatile uint_io8_t*)0xB11059A2)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR419	(*(volatile uint_io8_t*)0xB11059A3)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR420	(*(volatile uint_io8_t*)0xB11059A4)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR421	(*(volatile uint_io8_t*)0xB11059A5)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR422	(*(volatile uint_io8_t*)0xB11059A6)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR423	(*(volatile uint_io8_t*)0xB11059A7)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR424	(*(volatile uint_io8_t*)0xB11059A8)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR425	(*(volatile uint_io8_t*)0xB11059A9)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR426	(*(volatile uint_io8_t*)0xB11059AA)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR427	(*(volatile uint_io8_t*)0xB11059AB)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR428	(*(volatile uint_io8_t*)0xB11059AC)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR429	(*(volatile uint_io8_t*)0xB11059AD)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR430	(*(volatile uint_io8_t*)0xB11059AE)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR431	(*(volatile uint_io8_t*)0xB11059AF)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR432	(*(volatile uint_io8_t*)0xB11059B0)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR433	(*(volatile uint_io8_t*)0xB11059B1)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR434	(*(volatile uint_io8_t*)0xB11059B2)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR435	(*(volatile uint_io8_t*)0xB11059B3)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR436	(*(volatile uint_io8_t*)0xB11059B4)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR437	(*(volatile uint_io8_t*)0xB11059B5)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR438	(*(volatile uint_io8_t*)0xB11059B6)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR439	(*(volatile uint_io8_t*)0xB11059B7)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR440	(*(volatile uint_io8_t*)0xB11059B8)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR441	(*(volatile uint_io8_t*)0xB11059B9)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR442	(*(volatile uint_io8_t*)0xB11059BA)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR443	(*(volatile uint_io8_t*)0xB11059BB)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR444	(*(volatile uint_io8_t*)0xB11059BC)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR445	(*(volatile uint_io8_t*)0xB11059BD)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR446	(*(volatile uint_io8_t*)0xB11059BE)  /*@bfbba@*/
#define IRC0_IRQR13_IRQR447	(*(volatile uint_io8_t*)0xB11059BF)  /*@bfbba@*/

typedef struct stc_irc0_irqr13_field{
    uint_io32_t		u1IRQR416:1;
    uint_io32_t		u1IRQR417:1;
    uint_io32_t		u1IRQR418:1;
    uint_io32_t		u1IRQR419:1;
    uint_io32_t		u1IRQR420:1;
    uint_io32_t		u1IRQR421:1;
    uint_io32_t		u1IRQR422:1;
    uint_io32_t		u1IRQR423:1;
    uint_io32_t		u1IRQR424:1;
    uint_io32_t		u1IRQR425:1;
    uint_io32_t		u1IRQR426:1;
    uint_io32_t		u1IRQR427:1;
    uint_io32_t		u1IRQR428:1;
    uint_io32_t		u1IRQR429:1;
    uint_io32_t		u1IRQR430:1;
    uint_io32_t		u1IRQR431:1;
    uint_io32_t		u1IRQR432:1;
    uint_io32_t		u1IRQR433:1;
    uint_io32_t		u1IRQR434:1;
    uint_io32_t		u1IRQR435:1;
    uint_io32_t		u1IRQR436:1;
    uint_io32_t		u1IRQR437:1;
    uint_io32_t		u1IRQR438:1;
    uint_io32_t		u1IRQR439:1;
    uint_io32_t		u1IRQR440:1;
    uint_io32_t		u1IRQR441:1;
    uint_io32_t		u1IRQR442:1;
    uint_io32_t		u1IRQR443:1;
    uint_io32_t		u1IRQR444:1;
    uint_io32_t		u1IRQR445:1;
    uint_io32_t		u1IRQR446:1;
    uint_io32_t		u1IRQR447:1;
}stc_irc0_irqr13_field_t;

typedef union un_irc0_irqr13{
    uint_io32_t		u32Register;
    stc_irc0_irqr13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr13_t;

/* IRQR14 */
#define IRC0_IRQR14	(IRC0.unIRQR14.u32Register)  /*@rg@*/
#define IRC0_IRQR14_IRQR448	(*(volatile uint_io8_t*)0xB11059C0)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR449	(*(volatile uint_io8_t*)0xB11059C1)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR450	(*(volatile uint_io8_t*)0xB11059C2)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR451	(*(volatile uint_io8_t*)0xB11059C3)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR452	(*(volatile uint_io8_t*)0xB11059C4)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR453	(*(volatile uint_io8_t*)0xB11059C5)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR454	(*(volatile uint_io8_t*)0xB11059C6)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR455	(*(volatile uint_io8_t*)0xB11059C7)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR456	(*(volatile uint_io8_t*)0xB11059C8)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR457	(*(volatile uint_io8_t*)0xB11059C9)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR458	(*(volatile uint_io8_t*)0xB11059CA)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR459	(*(volatile uint_io8_t*)0xB11059CB)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR460	(*(volatile uint_io8_t*)0xB11059CC)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR461	(*(volatile uint_io8_t*)0xB11059CD)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR462	(*(volatile uint_io8_t*)0xB11059CE)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR463	(*(volatile uint_io8_t*)0xB11059CF)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR464	(*(volatile uint_io8_t*)0xB11059D0)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR465	(*(volatile uint_io8_t*)0xB11059D1)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR466	(*(volatile uint_io8_t*)0xB11059D2)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR467	(*(volatile uint_io8_t*)0xB11059D3)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR468	(*(volatile uint_io8_t*)0xB11059D4)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR469	(*(volatile uint_io8_t*)0xB11059D5)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR470	(*(volatile uint_io8_t*)0xB11059D6)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR471	(*(volatile uint_io8_t*)0xB11059D7)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR472	(*(volatile uint_io8_t*)0xB11059D8)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR473	(*(volatile uint_io8_t*)0xB11059D9)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR474	(*(volatile uint_io8_t*)0xB11059DA)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR475	(*(volatile uint_io8_t*)0xB11059DB)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR476	(*(volatile uint_io8_t*)0xB11059DC)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR477	(*(volatile uint_io8_t*)0xB11059DD)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR478	(*(volatile uint_io8_t*)0xB11059DE)  /*@bfbba@*/
#define IRC0_IRQR14_IRQR479	(*(volatile uint_io8_t*)0xB11059DF)  /*@bfbba@*/

typedef struct stc_irc0_irqr14_field{
    uint_io32_t		u1IRQR448:1;
    uint_io32_t		u1IRQR449:1;
    uint_io32_t		u1IRQR450:1;
    uint_io32_t		u1IRQR451:1;
    uint_io32_t		u1IRQR452:1;
    uint_io32_t		u1IRQR453:1;
    uint_io32_t		u1IRQR454:1;
    uint_io32_t		u1IRQR455:1;
    uint_io32_t		u1IRQR456:1;
    uint_io32_t		u1IRQR457:1;
    uint_io32_t		u1IRQR458:1;
    uint_io32_t		u1IRQR459:1;
    uint_io32_t		u1IRQR460:1;
    uint_io32_t		u1IRQR461:1;
    uint_io32_t		u1IRQR462:1;
    uint_io32_t		u1IRQR463:1;
    uint_io32_t		u1IRQR464:1;
    uint_io32_t		u1IRQR465:1;
    uint_io32_t		u1IRQR466:1;
    uint_io32_t		u1IRQR467:1;
    uint_io32_t		u1IRQR468:1;
    uint_io32_t		u1IRQR469:1;
    uint_io32_t		u1IRQR470:1;
    uint_io32_t		u1IRQR471:1;
    uint_io32_t		u1IRQR472:1;
    uint_io32_t		u1IRQR473:1;
    uint_io32_t		u1IRQR474:1;
    uint_io32_t		u1IRQR475:1;
    uint_io32_t		u1IRQR476:1;
    uint_io32_t		u1IRQR477:1;
    uint_io32_t		u1IRQR478:1;
    uint_io32_t		u1IRQR479:1;
}stc_irc0_irqr14_field_t;

typedef union un_irc0_irqr14{
    uint_io32_t		u32Register;
    stc_irc0_irqr14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr14_t;

/* IRQR15 */
#define IRC0_IRQR15	(IRC0.unIRQR15.u32Register)  /*@rg@*/
#define IRC0_IRQR15_IRQR480	(*(volatile uint_io8_t*)0xB11059E0)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR481	(*(volatile uint_io8_t*)0xB11059E1)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR482	(*(volatile uint_io8_t*)0xB11059E2)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR483	(*(volatile uint_io8_t*)0xB11059E3)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR484	(*(volatile uint_io8_t*)0xB11059E4)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR485	(*(volatile uint_io8_t*)0xB11059E5)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR486	(*(volatile uint_io8_t*)0xB11059E6)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR487	(*(volatile uint_io8_t*)0xB11059E7)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR488	(*(volatile uint_io8_t*)0xB11059E8)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR489	(*(volatile uint_io8_t*)0xB11059E9)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR490	(*(volatile uint_io8_t*)0xB11059EA)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR491	(*(volatile uint_io8_t*)0xB11059EB)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR492	(*(volatile uint_io8_t*)0xB11059EC)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR493	(*(volatile uint_io8_t*)0xB11059ED)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR494	(*(volatile uint_io8_t*)0xB11059EE)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR495	(*(volatile uint_io8_t*)0xB11059EF)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR496	(*(volatile uint_io8_t*)0xB11059F0)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR497	(*(volatile uint_io8_t*)0xB11059F1)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR498	(*(volatile uint_io8_t*)0xB11059F2)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR499	(*(volatile uint_io8_t*)0xB11059F3)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR500	(*(volatile uint_io8_t*)0xB11059F4)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR501	(*(volatile uint_io8_t*)0xB11059F5)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR502	(*(volatile uint_io8_t*)0xB11059F6)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR503	(*(volatile uint_io8_t*)0xB11059F7)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR504	(*(volatile uint_io8_t*)0xB11059F8)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR505	(*(volatile uint_io8_t*)0xB11059F9)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR506	(*(volatile uint_io8_t*)0xB11059FA)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR507	(*(volatile uint_io8_t*)0xB11059FB)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR508	(*(volatile uint_io8_t*)0xB11059FC)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR509	(*(volatile uint_io8_t*)0xB11059FD)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR510	(*(volatile uint_io8_t*)0xB11059FE)  /*@bfbba@*/
#define IRC0_IRQR15_IRQR511	(*(volatile uint_io8_t*)0xB11059FF)  /*@bfbba@*/

typedef struct stc_irc0_irqr15_field{
    uint_io32_t		u1IRQR480:1;
    uint_io32_t		u1IRQR481:1;
    uint_io32_t		u1IRQR482:1;
    uint_io32_t		u1IRQR483:1;
    uint_io32_t		u1IRQR484:1;
    uint_io32_t		u1IRQR485:1;
    uint_io32_t		u1IRQR486:1;
    uint_io32_t		u1IRQR487:1;
    uint_io32_t		u1IRQR488:1;
    uint_io32_t		u1IRQR489:1;
    uint_io32_t		u1IRQR490:1;
    uint_io32_t		u1IRQR491:1;
    uint_io32_t		u1IRQR492:1;
    uint_io32_t		u1IRQR493:1;
    uint_io32_t		u1IRQR494:1;
    uint_io32_t		u1IRQR495:1;
    uint_io32_t		u1IRQR496:1;
    uint_io32_t		u1IRQR497:1;
    uint_io32_t		u1IRQR498:1;
    uint_io32_t		u1IRQR499:1;
    uint_io32_t		u1IRQR500:1;
    uint_io32_t		u1IRQR501:1;
    uint_io32_t		u1IRQR502:1;
    uint_io32_t		u1IRQR503:1;
    uint_io32_t		u1IRQR504:1;
    uint_io32_t		u1IRQR505:1;
    uint_io32_t		u1IRQR506:1;
    uint_io32_t		u1IRQR507:1;
    uint_io32_t		u1IRQR508:1;
    uint_io32_t		u1IRQR509:1;
    uint_io32_t		u1IRQR510:1;
    uint_io32_t		u1IRQR511:1;
}stc_irc0_irqr15_field_t;

typedef union un_irc0_irqr15{
    uint_io32_t		u32Register;
    stc_irc0_irqr15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqr15_t;

/* IRQSIS0 */
#define IRC0_IRQSIS0	(IRC0.unIRQSIS0.u32Register)  /*@rg@*/
#define IRC0_IRQSIS0_IRQSIS0	(*(volatile uint_io8_t*)0xB1105A00)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS1	(*(volatile uint_io8_t*)0xB1105A01)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS2	(*(volatile uint_io8_t*)0xB1105A02)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS3	(*(volatile uint_io8_t*)0xB1105A03)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS4	(*(volatile uint_io8_t*)0xB1105A04)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS5	(*(volatile uint_io8_t*)0xB1105A05)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS6	(*(volatile uint_io8_t*)0xB1105A06)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS7	(*(volatile uint_io8_t*)0xB1105A07)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS8	(*(volatile uint_io8_t*)0xB1105A08)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS9	(*(volatile uint_io8_t*)0xB1105A09)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS10	(*(volatile uint_io8_t*)0xB1105A0A)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS11	(*(volatile uint_io8_t*)0xB1105A0B)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS12	(*(volatile uint_io8_t*)0xB1105A0C)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS13	(*(volatile uint_io8_t*)0xB1105A0D)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS14	(*(volatile uint_io8_t*)0xB1105A0E)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS15	(*(volatile uint_io8_t*)0xB1105A0F)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS16	(*(volatile uint_io8_t*)0xB1105A10)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS17	(*(volatile uint_io8_t*)0xB1105A11)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS18	(*(volatile uint_io8_t*)0xB1105A12)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS19	(*(volatile uint_io8_t*)0xB1105A13)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS20	(*(volatile uint_io8_t*)0xB1105A14)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS21	(*(volatile uint_io8_t*)0xB1105A15)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS22	(*(volatile uint_io8_t*)0xB1105A16)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS23	(*(volatile uint_io8_t*)0xB1105A17)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS24	(*(volatile uint_io8_t*)0xB1105A18)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS25	(*(volatile uint_io8_t*)0xB1105A19)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS26	(*(volatile uint_io8_t*)0xB1105A1A)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS27	(*(volatile uint_io8_t*)0xB1105A1B)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS28	(*(volatile uint_io8_t*)0xB1105A1C)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS29	(*(volatile uint_io8_t*)0xB1105A1D)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS30	(*(volatile uint_io8_t*)0xB1105A1E)  /*@bfbba@*/
#define IRC0_IRQSIS0_IRQSIS31	(*(volatile uint_io8_t*)0xB1105A1F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis0_field{
    uint_io32_t		u1IRQSIS0:1;
    uint_io32_t		u1IRQSIS1:1;
    uint_io32_t		u1IRQSIS2:1;
    uint_io32_t		u1IRQSIS3:1;
    uint_io32_t		u1IRQSIS4:1;
    uint_io32_t		u1IRQSIS5:1;
    uint_io32_t		u1IRQSIS6:1;
    uint_io32_t		u1IRQSIS7:1;
    uint_io32_t		u1IRQSIS8:1;
    uint_io32_t		u1IRQSIS9:1;
    uint_io32_t		u1IRQSIS10:1;
    uint_io32_t		u1IRQSIS11:1;
    uint_io32_t		u1IRQSIS12:1;
    uint_io32_t		u1IRQSIS13:1;
    uint_io32_t		u1IRQSIS14:1;
    uint_io32_t		u1IRQSIS15:1;
    uint_io32_t		u1IRQSIS16:1;
    uint_io32_t		u1IRQSIS17:1;
    uint_io32_t		u1IRQSIS18:1;
    uint_io32_t		u1IRQSIS19:1;
    uint_io32_t		u1IRQSIS20:1;
    uint_io32_t		u1IRQSIS21:1;
    uint_io32_t		u1IRQSIS22:1;
    uint_io32_t		u1IRQSIS23:1;
    uint_io32_t		u1IRQSIS24:1;
    uint_io32_t		u1IRQSIS25:1;
    uint_io32_t		u1IRQSIS26:1;
    uint_io32_t		u1IRQSIS27:1;
    uint_io32_t		u1IRQSIS28:1;
    uint_io32_t		u1IRQSIS29:1;
    uint_io32_t		u1IRQSIS30:1;
    uint_io32_t		u1IRQSIS31:1;
}stc_irc0_irqsis0_field_t;

typedef union un_irc0_irqsis0{
    uint_io32_t		u32Register;
    stc_irc0_irqsis0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis0_t;

/* IRQSIS1 */
#define IRC0_IRQSIS1	(IRC0.unIRQSIS1.u32Register)  /*@rg@*/
#define IRC0_IRQSIS1_IRQSIS32	(*(volatile uint_io8_t*)0xB1105A20)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS33	(*(volatile uint_io8_t*)0xB1105A21)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS34	(*(volatile uint_io8_t*)0xB1105A22)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS35	(*(volatile uint_io8_t*)0xB1105A23)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS36	(*(volatile uint_io8_t*)0xB1105A24)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS37	(*(volatile uint_io8_t*)0xB1105A25)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS38	(*(volatile uint_io8_t*)0xB1105A26)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS39	(*(volatile uint_io8_t*)0xB1105A27)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS40	(*(volatile uint_io8_t*)0xB1105A28)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS41	(*(volatile uint_io8_t*)0xB1105A29)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS42	(*(volatile uint_io8_t*)0xB1105A2A)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS43	(*(volatile uint_io8_t*)0xB1105A2B)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS44	(*(volatile uint_io8_t*)0xB1105A2C)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS45	(*(volatile uint_io8_t*)0xB1105A2D)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS46	(*(volatile uint_io8_t*)0xB1105A2E)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS47	(*(volatile uint_io8_t*)0xB1105A2F)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS48	(*(volatile uint_io8_t*)0xB1105A30)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS49	(*(volatile uint_io8_t*)0xB1105A31)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS50	(*(volatile uint_io8_t*)0xB1105A32)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS51	(*(volatile uint_io8_t*)0xB1105A33)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS52	(*(volatile uint_io8_t*)0xB1105A34)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS53	(*(volatile uint_io8_t*)0xB1105A35)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS54	(*(volatile uint_io8_t*)0xB1105A36)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS55	(*(volatile uint_io8_t*)0xB1105A37)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS56	(*(volatile uint_io8_t*)0xB1105A38)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS57	(*(volatile uint_io8_t*)0xB1105A39)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS58	(*(volatile uint_io8_t*)0xB1105A3A)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS59	(*(volatile uint_io8_t*)0xB1105A3B)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS60	(*(volatile uint_io8_t*)0xB1105A3C)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS61	(*(volatile uint_io8_t*)0xB1105A3D)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS62	(*(volatile uint_io8_t*)0xB1105A3E)  /*@bfbba@*/
#define IRC0_IRQSIS1_IRQSIS63	(*(volatile uint_io8_t*)0xB1105A3F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis1_field{
    uint_io32_t		u1IRQSIS32:1;
    uint_io32_t		u1IRQSIS33:1;
    uint_io32_t		u1IRQSIS34:1;
    uint_io32_t		u1IRQSIS35:1;
    uint_io32_t		u1IRQSIS36:1;
    uint_io32_t		u1IRQSIS37:1;
    uint_io32_t		u1IRQSIS38:1;
    uint_io32_t		u1IRQSIS39:1;
    uint_io32_t		u1IRQSIS40:1;
    uint_io32_t		u1IRQSIS41:1;
    uint_io32_t		u1IRQSIS42:1;
    uint_io32_t		u1IRQSIS43:1;
    uint_io32_t		u1IRQSIS44:1;
    uint_io32_t		u1IRQSIS45:1;
    uint_io32_t		u1IRQSIS46:1;
    uint_io32_t		u1IRQSIS47:1;
    uint_io32_t		u1IRQSIS48:1;
    uint_io32_t		u1IRQSIS49:1;
    uint_io32_t		u1IRQSIS50:1;
    uint_io32_t		u1IRQSIS51:1;
    uint_io32_t		u1IRQSIS52:1;
    uint_io32_t		u1IRQSIS53:1;
    uint_io32_t		u1IRQSIS54:1;
    uint_io32_t		u1IRQSIS55:1;
    uint_io32_t		u1IRQSIS56:1;
    uint_io32_t		u1IRQSIS57:1;
    uint_io32_t		u1IRQSIS58:1;
    uint_io32_t		u1IRQSIS59:1;
    uint_io32_t		u1IRQSIS60:1;
    uint_io32_t		u1IRQSIS61:1;
    uint_io32_t		u1IRQSIS62:1;
    uint_io32_t		u1IRQSIS63:1;
}stc_irc0_irqsis1_field_t;

typedef union un_irc0_irqsis1{
    uint_io32_t		u32Register;
    stc_irc0_irqsis1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis1_t;

/* IRQSIS2 */
#define IRC0_IRQSIS2	(IRC0.unIRQSIS2.u32Register)  /*@rg@*/
#define IRC0_IRQSIS2_IRQSIS64	(*(volatile uint_io8_t*)0xB1105A40)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS65	(*(volatile uint_io8_t*)0xB1105A41)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS66	(*(volatile uint_io8_t*)0xB1105A42)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS67	(*(volatile uint_io8_t*)0xB1105A43)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS68	(*(volatile uint_io8_t*)0xB1105A44)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS69	(*(volatile uint_io8_t*)0xB1105A45)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS70	(*(volatile uint_io8_t*)0xB1105A46)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS71	(*(volatile uint_io8_t*)0xB1105A47)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS72	(*(volatile uint_io8_t*)0xB1105A48)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS73	(*(volatile uint_io8_t*)0xB1105A49)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS74	(*(volatile uint_io8_t*)0xB1105A4A)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS75	(*(volatile uint_io8_t*)0xB1105A4B)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS76	(*(volatile uint_io8_t*)0xB1105A4C)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS77	(*(volatile uint_io8_t*)0xB1105A4D)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS78	(*(volatile uint_io8_t*)0xB1105A4E)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS79	(*(volatile uint_io8_t*)0xB1105A4F)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS80	(*(volatile uint_io8_t*)0xB1105A50)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS81	(*(volatile uint_io8_t*)0xB1105A51)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS82	(*(volatile uint_io8_t*)0xB1105A52)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS83	(*(volatile uint_io8_t*)0xB1105A53)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS84	(*(volatile uint_io8_t*)0xB1105A54)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS85	(*(volatile uint_io8_t*)0xB1105A55)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS86	(*(volatile uint_io8_t*)0xB1105A56)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS87	(*(volatile uint_io8_t*)0xB1105A57)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS88	(*(volatile uint_io8_t*)0xB1105A58)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS89	(*(volatile uint_io8_t*)0xB1105A59)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS90	(*(volatile uint_io8_t*)0xB1105A5A)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS91	(*(volatile uint_io8_t*)0xB1105A5B)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS92	(*(volatile uint_io8_t*)0xB1105A5C)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS93	(*(volatile uint_io8_t*)0xB1105A5D)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS94	(*(volatile uint_io8_t*)0xB1105A5E)  /*@bfbba@*/
#define IRC0_IRQSIS2_IRQSIS95	(*(volatile uint_io8_t*)0xB1105A5F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis2_field{
    uint_io32_t		u1IRQSIS64:1;
    uint_io32_t		u1IRQSIS65:1;
    uint_io32_t		u1IRQSIS66:1;
    uint_io32_t		u1IRQSIS67:1;
    uint_io32_t		u1IRQSIS68:1;
    uint_io32_t		u1IRQSIS69:1;
    uint_io32_t		u1IRQSIS70:1;
    uint_io32_t		u1IRQSIS71:1;
    uint_io32_t		u1IRQSIS72:1;
    uint_io32_t		u1IRQSIS73:1;
    uint_io32_t		u1IRQSIS74:1;
    uint_io32_t		u1IRQSIS75:1;
    uint_io32_t		u1IRQSIS76:1;
    uint_io32_t		u1IRQSIS77:1;
    uint_io32_t		u1IRQSIS78:1;
    uint_io32_t		u1IRQSIS79:1;
    uint_io32_t		u1IRQSIS80:1;
    uint_io32_t		u1IRQSIS81:1;
    uint_io32_t		u1IRQSIS82:1;
    uint_io32_t		u1IRQSIS83:1;
    uint_io32_t		u1IRQSIS84:1;
    uint_io32_t		u1IRQSIS85:1;
    uint_io32_t		u1IRQSIS86:1;
    uint_io32_t		u1IRQSIS87:1;
    uint_io32_t		u1IRQSIS88:1;
    uint_io32_t		u1IRQSIS89:1;
    uint_io32_t		u1IRQSIS90:1;
    uint_io32_t		u1IRQSIS91:1;
    uint_io32_t		u1IRQSIS92:1;
    uint_io32_t		u1IRQSIS93:1;
    uint_io32_t		u1IRQSIS94:1;
    uint_io32_t		u1IRQSIS95:1;
}stc_irc0_irqsis2_field_t;

typedef union un_irc0_irqsis2{
    uint_io32_t		u32Register;
    stc_irc0_irqsis2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis2_t;

/* IRQSIS3 */
#define IRC0_IRQSIS3	(IRC0.unIRQSIS3.u32Register)  /*@rg@*/
#define IRC0_IRQSIS3_IRQSIS96	(*(volatile uint_io8_t*)0xB1105A60)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS97	(*(volatile uint_io8_t*)0xB1105A61)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS98	(*(volatile uint_io8_t*)0xB1105A62)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS99	(*(volatile uint_io8_t*)0xB1105A63)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS100	(*(volatile uint_io8_t*)0xB1105A64)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS101	(*(volatile uint_io8_t*)0xB1105A65)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS102	(*(volatile uint_io8_t*)0xB1105A66)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS103	(*(volatile uint_io8_t*)0xB1105A67)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS104	(*(volatile uint_io8_t*)0xB1105A68)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS105	(*(volatile uint_io8_t*)0xB1105A69)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS106	(*(volatile uint_io8_t*)0xB1105A6A)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS107	(*(volatile uint_io8_t*)0xB1105A6B)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS108	(*(volatile uint_io8_t*)0xB1105A6C)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS109	(*(volatile uint_io8_t*)0xB1105A6D)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS110	(*(volatile uint_io8_t*)0xB1105A6E)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS111	(*(volatile uint_io8_t*)0xB1105A6F)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS112	(*(volatile uint_io8_t*)0xB1105A70)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS113	(*(volatile uint_io8_t*)0xB1105A71)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS114	(*(volatile uint_io8_t*)0xB1105A72)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS115	(*(volatile uint_io8_t*)0xB1105A73)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS116	(*(volatile uint_io8_t*)0xB1105A74)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS117	(*(volatile uint_io8_t*)0xB1105A75)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS118	(*(volatile uint_io8_t*)0xB1105A76)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS119	(*(volatile uint_io8_t*)0xB1105A77)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS120	(*(volatile uint_io8_t*)0xB1105A78)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS121	(*(volatile uint_io8_t*)0xB1105A79)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS122	(*(volatile uint_io8_t*)0xB1105A7A)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS123	(*(volatile uint_io8_t*)0xB1105A7B)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS124	(*(volatile uint_io8_t*)0xB1105A7C)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS125	(*(volatile uint_io8_t*)0xB1105A7D)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS126	(*(volatile uint_io8_t*)0xB1105A7E)  /*@bfbba@*/
#define IRC0_IRQSIS3_IRQSIS127	(*(volatile uint_io8_t*)0xB1105A7F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis3_field{
    uint_io32_t		u1IRQSIS96:1;
    uint_io32_t		u1IRQSIS97:1;
    uint_io32_t		u1IRQSIS98:1;
    uint_io32_t		u1IRQSIS99:1;
    uint_io32_t		u1IRQSIS100:1;
    uint_io32_t		u1IRQSIS101:1;
    uint_io32_t		u1IRQSIS102:1;
    uint_io32_t		u1IRQSIS103:1;
    uint_io32_t		u1IRQSIS104:1;
    uint_io32_t		u1IRQSIS105:1;
    uint_io32_t		u1IRQSIS106:1;
    uint_io32_t		u1IRQSIS107:1;
    uint_io32_t		u1IRQSIS108:1;
    uint_io32_t		u1IRQSIS109:1;
    uint_io32_t		u1IRQSIS110:1;
    uint_io32_t		u1IRQSIS111:1;
    uint_io32_t		u1IRQSIS112:1;
    uint_io32_t		u1IRQSIS113:1;
    uint_io32_t		u1IRQSIS114:1;
    uint_io32_t		u1IRQSIS115:1;
    uint_io32_t		u1IRQSIS116:1;
    uint_io32_t		u1IRQSIS117:1;
    uint_io32_t		u1IRQSIS118:1;
    uint_io32_t		u1IRQSIS119:1;
    uint_io32_t		u1IRQSIS120:1;
    uint_io32_t		u1IRQSIS121:1;
    uint_io32_t		u1IRQSIS122:1;
    uint_io32_t		u1IRQSIS123:1;
    uint_io32_t		u1IRQSIS124:1;
    uint_io32_t		u1IRQSIS125:1;
    uint_io32_t		u1IRQSIS126:1;
    uint_io32_t		u1IRQSIS127:1;
}stc_irc0_irqsis3_field_t;

typedef union un_irc0_irqsis3{
    uint_io32_t		u32Register;
    stc_irc0_irqsis3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis3_t;

/* IRQSIS4 */
#define IRC0_IRQSIS4	(IRC0.unIRQSIS4.u32Register)  /*@rg@*/
#define IRC0_IRQSIS4_IRQSIS128	(*(volatile uint_io8_t*)0xB1105A80)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS129	(*(volatile uint_io8_t*)0xB1105A81)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS130	(*(volatile uint_io8_t*)0xB1105A82)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS131	(*(volatile uint_io8_t*)0xB1105A83)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS132	(*(volatile uint_io8_t*)0xB1105A84)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS133	(*(volatile uint_io8_t*)0xB1105A85)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS134	(*(volatile uint_io8_t*)0xB1105A86)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS135	(*(volatile uint_io8_t*)0xB1105A87)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS136	(*(volatile uint_io8_t*)0xB1105A88)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS137	(*(volatile uint_io8_t*)0xB1105A89)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS138	(*(volatile uint_io8_t*)0xB1105A8A)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS139	(*(volatile uint_io8_t*)0xB1105A8B)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS140	(*(volatile uint_io8_t*)0xB1105A8C)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS141	(*(volatile uint_io8_t*)0xB1105A8D)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS142	(*(volatile uint_io8_t*)0xB1105A8E)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS143	(*(volatile uint_io8_t*)0xB1105A8F)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS144	(*(volatile uint_io8_t*)0xB1105A90)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS145	(*(volatile uint_io8_t*)0xB1105A91)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS146	(*(volatile uint_io8_t*)0xB1105A92)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS147	(*(volatile uint_io8_t*)0xB1105A93)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS148	(*(volatile uint_io8_t*)0xB1105A94)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS149	(*(volatile uint_io8_t*)0xB1105A95)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS150	(*(volatile uint_io8_t*)0xB1105A96)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS151	(*(volatile uint_io8_t*)0xB1105A97)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS152	(*(volatile uint_io8_t*)0xB1105A98)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS153	(*(volatile uint_io8_t*)0xB1105A99)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS154	(*(volatile uint_io8_t*)0xB1105A9A)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS155	(*(volatile uint_io8_t*)0xB1105A9B)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS156	(*(volatile uint_io8_t*)0xB1105A9C)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS157	(*(volatile uint_io8_t*)0xB1105A9D)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS158	(*(volatile uint_io8_t*)0xB1105A9E)  /*@bfbba@*/
#define IRC0_IRQSIS4_IRQSIS159	(*(volatile uint_io8_t*)0xB1105A9F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis4_field{
    uint_io32_t		u1IRQSIS128:1;
    uint_io32_t		u1IRQSIS129:1;
    uint_io32_t		u1IRQSIS130:1;
    uint_io32_t		u1IRQSIS131:1;
    uint_io32_t		u1IRQSIS132:1;
    uint_io32_t		u1IRQSIS133:1;
    uint_io32_t		u1IRQSIS134:1;
    uint_io32_t		u1IRQSIS135:1;
    uint_io32_t		u1IRQSIS136:1;
    uint_io32_t		u1IRQSIS137:1;
    uint_io32_t		u1IRQSIS138:1;
    uint_io32_t		u1IRQSIS139:1;
    uint_io32_t		u1IRQSIS140:1;
    uint_io32_t		u1IRQSIS141:1;
    uint_io32_t		u1IRQSIS142:1;
    uint_io32_t		u1IRQSIS143:1;
    uint_io32_t		u1IRQSIS144:1;
    uint_io32_t		u1IRQSIS145:1;
    uint_io32_t		u1IRQSIS146:1;
    uint_io32_t		u1IRQSIS147:1;
    uint_io32_t		u1IRQSIS148:1;
    uint_io32_t		u1IRQSIS149:1;
    uint_io32_t		u1IRQSIS150:1;
    uint_io32_t		u1IRQSIS151:1;
    uint_io32_t		u1IRQSIS152:1;
    uint_io32_t		u1IRQSIS153:1;
    uint_io32_t		u1IRQSIS154:1;
    uint_io32_t		u1IRQSIS155:1;
    uint_io32_t		u1IRQSIS156:1;
    uint_io32_t		u1IRQSIS157:1;
    uint_io32_t		u1IRQSIS158:1;
    uint_io32_t		u1IRQSIS159:1;
}stc_irc0_irqsis4_field_t;

typedef union un_irc0_irqsis4{
    uint_io32_t		u32Register;
    stc_irc0_irqsis4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis4_t;

/* IRQSIS5 */
#define IRC0_IRQSIS5	(IRC0.unIRQSIS5.u32Register)  /*@rg@*/
#define IRC0_IRQSIS5_IRQSIS160	(*(volatile uint_io8_t*)0xB1105AA0)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS161	(*(volatile uint_io8_t*)0xB1105AA1)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS162	(*(volatile uint_io8_t*)0xB1105AA2)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS163	(*(volatile uint_io8_t*)0xB1105AA3)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS164	(*(volatile uint_io8_t*)0xB1105AA4)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS165	(*(volatile uint_io8_t*)0xB1105AA5)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS166	(*(volatile uint_io8_t*)0xB1105AA6)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS167	(*(volatile uint_io8_t*)0xB1105AA7)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS168	(*(volatile uint_io8_t*)0xB1105AA8)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS169	(*(volatile uint_io8_t*)0xB1105AA9)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS170	(*(volatile uint_io8_t*)0xB1105AAA)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS171	(*(volatile uint_io8_t*)0xB1105AAB)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS172	(*(volatile uint_io8_t*)0xB1105AAC)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS173	(*(volatile uint_io8_t*)0xB1105AAD)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS174	(*(volatile uint_io8_t*)0xB1105AAE)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS175	(*(volatile uint_io8_t*)0xB1105AAF)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS176	(*(volatile uint_io8_t*)0xB1105AB0)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS177	(*(volatile uint_io8_t*)0xB1105AB1)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS178	(*(volatile uint_io8_t*)0xB1105AB2)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS179	(*(volatile uint_io8_t*)0xB1105AB3)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS180	(*(volatile uint_io8_t*)0xB1105AB4)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS181	(*(volatile uint_io8_t*)0xB1105AB5)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS182	(*(volatile uint_io8_t*)0xB1105AB6)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS183	(*(volatile uint_io8_t*)0xB1105AB7)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS184	(*(volatile uint_io8_t*)0xB1105AB8)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS185	(*(volatile uint_io8_t*)0xB1105AB9)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS186	(*(volatile uint_io8_t*)0xB1105ABA)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS187	(*(volatile uint_io8_t*)0xB1105ABB)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS188	(*(volatile uint_io8_t*)0xB1105ABC)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS189	(*(volatile uint_io8_t*)0xB1105ABD)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS190	(*(volatile uint_io8_t*)0xB1105ABE)  /*@bfbba@*/
#define IRC0_IRQSIS5_IRQSIS191	(*(volatile uint_io8_t*)0xB1105ABF)  /*@bfbba@*/

typedef struct stc_irc0_irqsis5_field{
    uint_io32_t		u1IRQSIS160:1;
    uint_io32_t		u1IRQSIS161:1;
    uint_io32_t		u1IRQSIS162:1;
    uint_io32_t		u1IRQSIS163:1;
    uint_io32_t		u1IRQSIS164:1;
    uint_io32_t		u1IRQSIS165:1;
    uint_io32_t		u1IRQSIS166:1;
    uint_io32_t		u1IRQSIS167:1;
    uint_io32_t		u1IRQSIS168:1;
    uint_io32_t		u1IRQSIS169:1;
    uint_io32_t		u1IRQSIS170:1;
    uint_io32_t		u1IRQSIS171:1;
    uint_io32_t		u1IRQSIS172:1;
    uint_io32_t		u1IRQSIS173:1;
    uint_io32_t		u1IRQSIS174:1;
    uint_io32_t		u1IRQSIS175:1;
    uint_io32_t		u1IRQSIS176:1;
    uint_io32_t		u1IRQSIS177:1;
    uint_io32_t		u1IRQSIS178:1;
    uint_io32_t		u1IRQSIS179:1;
    uint_io32_t		u1IRQSIS180:1;
    uint_io32_t		u1IRQSIS181:1;
    uint_io32_t		u1IRQSIS182:1;
    uint_io32_t		u1IRQSIS183:1;
    uint_io32_t		u1IRQSIS184:1;
    uint_io32_t		u1IRQSIS185:1;
    uint_io32_t		u1IRQSIS186:1;
    uint_io32_t		u1IRQSIS187:1;
    uint_io32_t		u1IRQSIS188:1;
    uint_io32_t		u1IRQSIS189:1;
    uint_io32_t		u1IRQSIS190:1;
    uint_io32_t		u1IRQSIS191:1;
}stc_irc0_irqsis5_field_t;

typedef union un_irc0_irqsis5{
    uint_io32_t		u32Register;
    stc_irc0_irqsis5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis5_t;

/* IRQSIS6 */
#define IRC0_IRQSIS6	(IRC0.unIRQSIS6.u32Register)  /*@rg@*/
#define IRC0_IRQSIS6_IRQSIS192	(*(volatile uint_io8_t*)0xB1105AC0)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS193	(*(volatile uint_io8_t*)0xB1105AC1)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS194	(*(volatile uint_io8_t*)0xB1105AC2)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS195	(*(volatile uint_io8_t*)0xB1105AC3)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS196	(*(volatile uint_io8_t*)0xB1105AC4)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS197	(*(volatile uint_io8_t*)0xB1105AC5)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS198	(*(volatile uint_io8_t*)0xB1105AC6)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS199	(*(volatile uint_io8_t*)0xB1105AC7)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS200	(*(volatile uint_io8_t*)0xB1105AC8)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS201	(*(volatile uint_io8_t*)0xB1105AC9)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS202	(*(volatile uint_io8_t*)0xB1105ACA)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS203	(*(volatile uint_io8_t*)0xB1105ACB)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS204	(*(volatile uint_io8_t*)0xB1105ACC)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS205	(*(volatile uint_io8_t*)0xB1105ACD)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS206	(*(volatile uint_io8_t*)0xB1105ACE)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS207	(*(volatile uint_io8_t*)0xB1105ACF)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS208	(*(volatile uint_io8_t*)0xB1105AD0)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS209	(*(volatile uint_io8_t*)0xB1105AD1)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS210	(*(volatile uint_io8_t*)0xB1105AD2)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS211	(*(volatile uint_io8_t*)0xB1105AD3)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS212	(*(volatile uint_io8_t*)0xB1105AD4)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS213	(*(volatile uint_io8_t*)0xB1105AD5)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS214	(*(volatile uint_io8_t*)0xB1105AD6)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS215	(*(volatile uint_io8_t*)0xB1105AD7)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS216	(*(volatile uint_io8_t*)0xB1105AD8)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS217	(*(volatile uint_io8_t*)0xB1105AD9)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS218	(*(volatile uint_io8_t*)0xB1105ADA)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS219	(*(volatile uint_io8_t*)0xB1105ADB)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS220	(*(volatile uint_io8_t*)0xB1105ADC)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS221	(*(volatile uint_io8_t*)0xB1105ADD)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS222	(*(volatile uint_io8_t*)0xB1105ADE)  /*@bfbba@*/
#define IRC0_IRQSIS6_IRQSIS223	(*(volatile uint_io8_t*)0xB1105ADF)  /*@bfbba@*/

typedef struct stc_irc0_irqsis6_field{
    uint_io32_t		u1IRQSIS192:1;
    uint_io32_t		u1IRQSIS193:1;
    uint_io32_t		u1IRQSIS194:1;
    uint_io32_t		u1IRQSIS195:1;
    uint_io32_t		u1IRQSIS196:1;
    uint_io32_t		u1IRQSIS197:1;
    uint_io32_t		u1IRQSIS198:1;
    uint_io32_t		u1IRQSIS199:1;
    uint_io32_t		u1IRQSIS200:1;
    uint_io32_t		u1IRQSIS201:1;
    uint_io32_t		u1IRQSIS202:1;
    uint_io32_t		u1IRQSIS203:1;
    uint_io32_t		u1IRQSIS204:1;
    uint_io32_t		u1IRQSIS205:1;
    uint_io32_t		u1IRQSIS206:1;
    uint_io32_t		u1IRQSIS207:1;
    uint_io32_t		u1IRQSIS208:1;
    uint_io32_t		u1IRQSIS209:1;
    uint_io32_t		u1IRQSIS210:1;
    uint_io32_t		u1IRQSIS211:1;
    uint_io32_t		u1IRQSIS212:1;
    uint_io32_t		u1IRQSIS213:1;
    uint_io32_t		u1IRQSIS214:1;
    uint_io32_t		u1IRQSIS215:1;
    uint_io32_t		u1IRQSIS216:1;
    uint_io32_t		u1IRQSIS217:1;
    uint_io32_t		u1IRQSIS218:1;
    uint_io32_t		u1IRQSIS219:1;
    uint_io32_t		u1IRQSIS220:1;
    uint_io32_t		u1IRQSIS221:1;
    uint_io32_t		u1IRQSIS222:1;
    uint_io32_t		u1IRQSIS223:1;
}stc_irc0_irqsis6_field_t;

typedef union un_irc0_irqsis6{
    uint_io32_t		u32Register;
    stc_irc0_irqsis6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis6_t;

/* IRQSIS7 */
#define IRC0_IRQSIS7	(IRC0.unIRQSIS7.u32Register)  /*@rg@*/
#define IRC0_IRQSIS7_IRQSIS224	(*(volatile uint_io8_t*)0xB1105AE0)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS225	(*(volatile uint_io8_t*)0xB1105AE1)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS226	(*(volatile uint_io8_t*)0xB1105AE2)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS227	(*(volatile uint_io8_t*)0xB1105AE3)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS228	(*(volatile uint_io8_t*)0xB1105AE4)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS229	(*(volatile uint_io8_t*)0xB1105AE5)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS230	(*(volatile uint_io8_t*)0xB1105AE6)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS231	(*(volatile uint_io8_t*)0xB1105AE7)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS232	(*(volatile uint_io8_t*)0xB1105AE8)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS233	(*(volatile uint_io8_t*)0xB1105AE9)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS234	(*(volatile uint_io8_t*)0xB1105AEA)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS235	(*(volatile uint_io8_t*)0xB1105AEB)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS236	(*(volatile uint_io8_t*)0xB1105AEC)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS237	(*(volatile uint_io8_t*)0xB1105AED)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS238	(*(volatile uint_io8_t*)0xB1105AEE)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS239	(*(volatile uint_io8_t*)0xB1105AEF)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS240	(*(volatile uint_io8_t*)0xB1105AF0)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS241	(*(volatile uint_io8_t*)0xB1105AF1)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS242	(*(volatile uint_io8_t*)0xB1105AF2)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS243	(*(volatile uint_io8_t*)0xB1105AF3)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS244	(*(volatile uint_io8_t*)0xB1105AF4)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS245	(*(volatile uint_io8_t*)0xB1105AF5)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS246	(*(volatile uint_io8_t*)0xB1105AF6)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS247	(*(volatile uint_io8_t*)0xB1105AF7)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS248	(*(volatile uint_io8_t*)0xB1105AF8)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS249	(*(volatile uint_io8_t*)0xB1105AF9)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS250	(*(volatile uint_io8_t*)0xB1105AFA)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS251	(*(volatile uint_io8_t*)0xB1105AFB)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS252	(*(volatile uint_io8_t*)0xB1105AFC)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS253	(*(volatile uint_io8_t*)0xB1105AFD)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS254	(*(volatile uint_io8_t*)0xB1105AFE)  /*@bfbba@*/
#define IRC0_IRQSIS7_IRQSIS255	(*(volatile uint_io8_t*)0xB1105AFF)  /*@bfbba@*/

typedef struct stc_irc0_irqsis7_field{
    uint_io32_t		u1IRQSIS224:1;
    uint_io32_t		u1IRQSIS225:1;
    uint_io32_t		u1IRQSIS226:1;
    uint_io32_t		u1IRQSIS227:1;
    uint_io32_t		u1IRQSIS228:1;
    uint_io32_t		u1IRQSIS229:1;
    uint_io32_t		u1IRQSIS230:1;
    uint_io32_t		u1IRQSIS231:1;
    uint_io32_t		u1IRQSIS232:1;
    uint_io32_t		u1IRQSIS233:1;
    uint_io32_t		u1IRQSIS234:1;
    uint_io32_t		u1IRQSIS235:1;
    uint_io32_t		u1IRQSIS236:1;
    uint_io32_t		u1IRQSIS237:1;
    uint_io32_t		u1IRQSIS238:1;
    uint_io32_t		u1IRQSIS239:1;
    uint_io32_t		u1IRQSIS240:1;
    uint_io32_t		u1IRQSIS241:1;
    uint_io32_t		u1IRQSIS242:1;
    uint_io32_t		u1IRQSIS243:1;
    uint_io32_t		u1IRQSIS244:1;
    uint_io32_t		u1IRQSIS245:1;
    uint_io32_t		u1IRQSIS246:1;
    uint_io32_t		u1IRQSIS247:1;
    uint_io32_t		u1IRQSIS248:1;
    uint_io32_t		u1IRQSIS249:1;
    uint_io32_t		u1IRQSIS250:1;
    uint_io32_t		u1IRQSIS251:1;
    uint_io32_t		u1IRQSIS252:1;
    uint_io32_t		u1IRQSIS253:1;
    uint_io32_t		u1IRQSIS254:1;
    uint_io32_t		u1IRQSIS255:1;
}stc_irc0_irqsis7_field_t;

typedef union un_irc0_irqsis7{
    uint_io32_t		u32Register;
    stc_irc0_irqsis7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis7_t;

/* IRQSIS8 */
#define IRC0_IRQSIS8	(IRC0.unIRQSIS8.u32Register)  /*@rg@*/
#define IRC0_IRQSIS8_IRQSIS256	(*(volatile uint_io8_t*)0xB1105B00)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS257	(*(volatile uint_io8_t*)0xB1105B01)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS258	(*(volatile uint_io8_t*)0xB1105B02)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS259	(*(volatile uint_io8_t*)0xB1105B03)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS260	(*(volatile uint_io8_t*)0xB1105B04)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS261	(*(volatile uint_io8_t*)0xB1105B05)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS262	(*(volatile uint_io8_t*)0xB1105B06)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS263	(*(volatile uint_io8_t*)0xB1105B07)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS264	(*(volatile uint_io8_t*)0xB1105B08)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS265	(*(volatile uint_io8_t*)0xB1105B09)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS266	(*(volatile uint_io8_t*)0xB1105B0A)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS267	(*(volatile uint_io8_t*)0xB1105B0B)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS268	(*(volatile uint_io8_t*)0xB1105B0C)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS269	(*(volatile uint_io8_t*)0xB1105B0D)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS270	(*(volatile uint_io8_t*)0xB1105B0E)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS271	(*(volatile uint_io8_t*)0xB1105B0F)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS272	(*(volatile uint_io8_t*)0xB1105B10)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS273	(*(volatile uint_io8_t*)0xB1105B11)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS274	(*(volatile uint_io8_t*)0xB1105B12)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS275	(*(volatile uint_io8_t*)0xB1105B13)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS276	(*(volatile uint_io8_t*)0xB1105B14)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS277	(*(volatile uint_io8_t*)0xB1105B15)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS278	(*(volatile uint_io8_t*)0xB1105B16)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS279	(*(volatile uint_io8_t*)0xB1105B17)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS280	(*(volatile uint_io8_t*)0xB1105B18)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS281	(*(volatile uint_io8_t*)0xB1105B19)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS282	(*(volatile uint_io8_t*)0xB1105B1A)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS283	(*(volatile uint_io8_t*)0xB1105B1B)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS284	(*(volatile uint_io8_t*)0xB1105B1C)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS285	(*(volatile uint_io8_t*)0xB1105B1D)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS286	(*(volatile uint_io8_t*)0xB1105B1E)  /*@bfbba@*/
#define IRC0_IRQSIS8_IRQSIS287	(*(volatile uint_io8_t*)0xB1105B1F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis8_field{
    uint_io32_t		u1IRQSIS256:1;
    uint_io32_t		u1IRQSIS257:1;
    uint_io32_t		u1IRQSIS258:1;
    uint_io32_t		u1IRQSIS259:1;
    uint_io32_t		u1IRQSIS260:1;
    uint_io32_t		u1IRQSIS261:1;
    uint_io32_t		u1IRQSIS262:1;
    uint_io32_t		u1IRQSIS263:1;
    uint_io32_t		u1IRQSIS264:1;
    uint_io32_t		u1IRQSIS265:1;
    uint_io32_t		u1IRQSIS266:1;
    uint_io32_t		u1IRQSIS267:1;
    uint_io32_t		u1IRQSIS268:1;
    uint_io32_t		u1IRQSIS269:1;
    uint_io32_t		u1IRQSIS270:1;
    uint_io32_t		u1IRQSIS271:1;
    uint_io32_t		u1IRQSIS272:1;
    uint_io32_t		u1IRQSIS273:1;
    uint_io32_t		u1IRQSIS274:1;
    uint_io32_t		u1IRQSIS275:1;
    uint_io32_t		u1IRQSIS276:1;
    uint_io32_t		u1IRQSIS277:1;
    uint_io32_t		u1IRQSIS278:1;
    uint_io32_t		u1IRQSIS279:1;
    uint_io32_t		u1IRQSIS280:1;
    uint_io32_t		u1IRQSIS281:1;
    uint_io32_t		u1IRQSIS282:1;
    uint_io32_t		u1IRQSIS283:1;
    uint_io32_t		u1IRQSIS284:1;
    uint_io32_t		u1IRQSIS285:1;
    uint_io32_t		u1IRQSIS286:1;
    uint_io32_t		u1IRQSIS287:1;
}stc_irc0_irqsis8_field_t;

typedef union un_irc0_irqsis8{
    uint_io32_t		u32Register;
    stc_irc0_irqsis8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis8_t;

/* IRQSIS9 */
#define IRC0_IRQSIS9	(IRC0.unIRQSIS9.u32Register)  /*@rg@*/
#define IRC0_IRQSIS9_IRQSIS288	(*(volatile uint_io8_t*)0xB1105B20)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS289	(*(volatile uint_io8_t*)0xB1105B21)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS290	(*(volatile uint_io8_t*)0xB1105B22)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS291	(*(volatile uint_io8_t*)0xB1105B23)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS292	(*(volatile uint_io8_t*)0xB1105B24)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS293	(*(volatile uint_io8_t*)0xB1105B25)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS294	(*(volatile uint_io8_t*)0xB1105B26)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS295	(*(volatile uint_io8_t*)0xB1105B27)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS296	(*(volatile uint_io8_t*)0xB1105B28)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS297	(*(volatile uint_io8_t*)0xB1105B29)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS298	(*(volatile uint_io8_t*)0xB1105B2A)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS299	(*(volatile uint_io8_t*)0xB1105B2B)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS300	(*(volatile uint_io8_t*)0xB1105B2C)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS301	(*(volatile uint_io8_t*)0xB1105B2D)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS302	(*(volatile uint_io8_t*)0xB1105B2E)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS303	(*(volatile uint_io8_t*)0xB1105B2F)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS304	(*(volatile uint_io8_t*)0xB1105B30)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS305	(*(volatile uint_io8_t*)0xB1105B31)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS306	(*(volatile uint_io8_t*)0xB1105B32)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS307	(*(volatile uint_io8_t*)0xB1105B33)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS308	(*(volatile uint_io8_t*)0xB1105B34)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS309	(*(volatile uint_io8_t*)0xB1105B35)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS310	(*(volatile uint_io8_t*)0xB1105B36)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS311	(*(volatile uint_io8_t*)0xB1105B37)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS312	(*(volatile uint_io8_t*)0xB1105B38)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS313	(*(volatile uint_io8_t*)0xB1105B39)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS314	(*(volatile uint_io8_t*)0xB1105B3A)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS315	(*(volatile uint_io8_t*)0xB1105B3B)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS316	(*(volatile uint_io8_t*)0xB1105B3C)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS317	(*(volatile uint_io8_t*)0xB1105B3D)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS318	(*(volatile uint_io8_t*)0xB1105B3E)  /*@bfbba@*/
#define IRC0_IRQSIS9_IRQSIS319	(*(volatile uint_io8_t*)0xB1105B3F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis9_field{
    uint_io32_t		u1IRQSIS288:1;
    uint_io32_t		u1IRQSIS289:1;
    uint_io32_t		u1IRQSIS290:1;
    uint_io32_t		u1IRQSIS291:1;
    uint_io32_t		u1IRQSIS292:1;
    uint_io32_t		u1IRQSIS293:1;
    uint_io32_t		u1IRQSIS294:1;
    uint_io32_t		u1IRQSIS295:1;
    uint_io32_t		u1IRQSIS296:1;
    uint_io32_t		u1IRQSIS297:1;
    uint_io32_t		u1IRQSIS298:1;
    uint_io32_t		u1IRQSIS299:1;
    uint_io32_t		u1IRQSIS300:1;
    uint_io32_t		u1IRQSIS301:1;
    uint_io32_t		u1IRQSIS302:1;
    uint_io32_t		u1IRQSIS303:1;
    uint_io32_t		u1IRQSIS304:1;
    uint_io32_t		u1IRQSIS305:1;
    uint_io32_t		u1IRQSIS306:1;
    uint_io32_t		u1IRQSIS307:1;
    uint_io32_t		u1IRQSIS308:1;
    uint_io32_t		u1IRQSIS309:1;
    uint_io32_t		u1IRQSIS310:1;
    uint_io32_t		u1IRQSIS311:1;
    uint_io32_t		u1IRQSIS312:1;
    uint_io32_t		u1IRQSIS313:1;
    uint_io32_t		u1IRQSIS314:1;
    uint_io32_t		u1IRQSIS315:1;
    uint_io32_t		u1IRQSIS316:1;
    uint_io32_t		u1IRQSIS317:1;
    uint_io32_t		u1IRQSIS318:1;
    uint_io32_t		u1IRQSIS319:1;
}stc_irc0_irqsis9_field_t;

typedef union un_irc0_irqsis9{
    uint_io32_t		u32Register;
    stc_irc0_irqsis9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis9_t;

/* IRQSIS10 */
#define IRC0_IRQSIS10	(IRC0.unIRQSIS10.u32Register)  /*@rg@*/
#define IRC0_IRQSIS10_IRQSIS320	(*(volatile uint_io8_t*)0xB1105B40)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS321	(*(volatile uint_io8_t*)0xB1105B41)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS322	(*(volatile uint_io8_t*)0xB1105B42)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS323	(*(volatile uint_io8_t*)0xB1105B43)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS324	(*(volatile uint_io8_t*)0xB1105B44)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS325	(*(volatile uint_io8_t*)0xB1105B45)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS326	(*(volatile uint_io8_t*)0xB1105B46)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS327	(*(volatile uint_io8_t*)0xB1105B47)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS328	(*(volatile uint_io8_t*)0xB1105B48)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS329	(*(volatile uint_io8_t*)0xB1105B49)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS330	(*(volatile uint_io8_t*)0xB1105B4A)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS331	(*(volatile uint_io8_t*)0xB1105B4B)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS332	(*(volatile uint_io8_t*)0xB1105B4C)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS333	(*(volatile uint_io8_t*)0xB1105B4D)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS334	(*(volatile uint_io8_t*)0xB1105B4E)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS335	(*(volatile uint_io8_t*)0xB1105B4F)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS336	(*(volatile uint_io8_t*)0xB1105B50)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS337	(*(volatile uint_io8_t*)0xB1105B51)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS338	(*(volatile uint_io8_t*)0xB1105B52)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS339	(*(volatile uint_io8_t*)0xB1105B53)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS340	(*(volatile uint_io8_t*)0xB1105B54)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS341	(*(volatile uint_io8_t*)0xB1105B55)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS342	(*(volatile uint_io8_t*)0xB1105B56)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS343	(*(volatile uint_io8_t*)0xB1105B57)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS344	(*(volatile uint_io8_t*)0xB1105B58)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS345	(*(volatile uint_io8_t*)0xB1105B59)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS346	(*(volatile uint_io8_t*)0xB1105B5A)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS347	(*(volatile uint_io8_t*)0xB1105B5B)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS348	(*(volatile uint_io8_t*)0xB1105B5C)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS349	(*(volatile uint_io8_t*)0xB1105B5D)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS350	(*(volatile uint_io8_t*)0xB1105B5E)  /*@bfbba@*/
#define IRC0_IRQSIS10_IRQSIS351	(*(volatile uint_io8_t*)0xB1105B5F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis10_field{
    uint_io32_t		u1IRQSIS320:1;
    uint_io32_t		u1IRQSIS321:1;
    uint_io32_t		u1IRQSIS322:1;
    uint_io32_t		u1IRQSIS323:1;
    uint_io32_t		u1IRQSIS324:1;
    uint_io32_t		u1IRQSIS325:1;
    uint_io32_t		u1IRQSIS326:1;
    uint_io32_t		u1IRQSIS327:1;
    uint_io32_t		u1IRQSIS328:1;
    uint_io32_t		u1IRQSIS329:1;
    uint_io32_t		u1IRQSIS330:1;
    uint_io32_t		u1IRQSIS331:1;
    uint_io32_t		u1IRQSIS332:1;
    uint_io32_t		u1IRQSIS333:1;
    uint_io32_t		u1IRQSIS334:1;
    uint_io32_t		u1IRQSIS335:1;
    uint_io32_t		u1IRQSIS336:1;
    uint_io32_t		u1IRQSIS337:1;
    uint_io32_t		u1IRQSIS338:1;
    uint_io32_t		u1IRQSIS339:1;
    uint_io32_t		u1IRQSIS340:1;
    uint_io32_t		u1IRQSIS341:1;
    uint_io32_t		u1IRQSIS342:1;
    uint_io32_t		u1IRQSIS343:1;
    uint_io32_t		u1IRQSIS344:1;
    uint_io32_t		u1IRQSIS345:1;
    uint_io32_t		u1IRQSIS346:1;
    uint_io32_t		u1IRQSIS347:1;
    uint_io32_t		u1IRQSIS348:1;
    uint_io32_t		u1IRQSIS349:1;
    uint_io32_t		u1IRQSIS350:1;
    uint_io32_t		u1IRQSIS351:1;
}stc_irc0_irqsis10_field_t;

typedef union un_irc0_irqsis10{
    uint_io32_t		u32Register;
    stc_irc0_irqsis10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis10_t;

/* IRQSIS11 */
#define IRC0_IRQSIS11	(IRC0.unIRQSIS11.u32Register)  /*@rg@*/
#define IRC0_IRQSIS11_IRQSIS352	(*(volatile uint_io8_t*)0xB1105B60)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS353	(*(volatile uint_io8_t*)0xB1105B61)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS354	(*(volatile uint_io8_t*)0xB1105B62)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS355	(*(volatile uint_io8_t*)0xB1105B63)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS356	(*(volatile uint_io8_t*)0xB1105B64)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS357	(*(volatile uint_io8_t*)0xB1105B65)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS358	(*(volatile uint_io8_t*)0xB1105B66)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS359	(*(volatile uint_io8_t*)0xB1105B67)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS360	(*(volatile uint_io8_t*)0xB1105B68)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS361	(*(volatile uint_io8_t*)0xB1105B69)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS362	(*(volatile uint_io8_t*)0xB1105B6A)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS363	(*(volatile uint_io8_t*)0xB1105B6B)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS364	(*(volatile uint_io8_t*)0xB1105B6C)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS365	(*(volatile uint_io8_t*)0xB1105B6D)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS366	(*(volatile uint_io8_t*)0xB1105B6E)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS367	(*(volatile uint_io8_t*)0xB1105B6F)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS368	(*(volatile uint_io8_t*)0xB1105B70)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS369	(*(volatile uint_io8_t*)0xB1105B71)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS370	(*(volatile uint_io8_t*)0xB1105B72)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS371	(*(volatile uint_io8_t*)0xB1105B73)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS372	(*(volatile uint_io8_t*)0xB1105B74)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS373	(*(volatile uint_io8_t*)0xB1105B75)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS374	(*(volatile uint_io8_t*)0xB1105B76)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS375	(*(volatile uint_io8_t*)0xB1105B77)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS376	(*(volatile uint_io8_t*)0xB1105B78)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS377	(*(volatile uint_io8_t*)0xB1105B79)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS378	(*(volatile uint_io8_t*)0xB1105B7A)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS379	(*(volatile uint_io8_t*)0xB1105B7B)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS380	(*(volatile uint_io8_t*)0xB1105B7C)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS381	(*(volatile uint_io8_t*)0xB1105B7D)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS382	(*(volatile uint_io8_t*)0xB1105B7E)  /*@bfbba@*/
#define IRC0_IRQSIS11_IRQSIS383	(*(volatile uint_io8_t*)0xB1105B7F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis11_field{
    uint_io32_t		u1IRQSIS352:1;
    uint_io32_t		u1IRQSIS353:1;
    uint_io32_t		u1IRQSIS354:1;
    uint_io32_t		u1IRQSIS355:1;
    uint_io32_t		u1IRQSIS356:1;
    uint_io32_t		u1IRQSIS357:1;
    uint_io32_t		u1IRQSIS358:1;
    uint_io32_t		u1IRQSIS359:1;
    uint_io32_t		u1IRQSIS360:1;
    uint_io32_t		u1IRQSIS361:1;
    uint_io32_t		u1IRQSIS362:1;
    uint_io32_t		u1IRQSIS363:1;
    uint_io32_t		u1IRQSIS364:1;
    uint_io32_t		u1IRQSIS365:1;
    uint_io32_t		u1IRQSIS366:1;
    uint_io32_t		u1IRQSIS367:1;
    uint_io32_t		u1IRQSIS368:1;
    uint_io32_t		u1IRQSIS369:1;
    uint_io32_t		u1IRQSIS370:1;
    uint_io32_t		u1IRQSIS371:1;
    uint_io32_t		u1IRQSIS372:1;
    uint_io32_t		u1IRQSIS373:1;
    uint_io32_t		u1IRQSIS374:1;
    uint_io32_t		u1IRQSIS375:1;
    uint_io32_t		u1IRQSIS376:1;
    uint_io32_t		u1IRQSIS377:1;
    uint_io32_t		u1IRQSIS378:1;
    uint_io32_t		u1IRQSIS379:1;
    uint_io32_t		u1IRQSIS380:1;
    uint_io32_t		u1IRQSIS381:1;
    uint_io32_t		u1IRQSIS382:1;
    uint_io32_t		u1IRQSIS383:1;
}stc_irc0_irqsis11_field_t;

typedef union un_irc0_irqsis11{
    uint_io32_t		u32Register;
    stc_irc0_irqsis11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis11_t;

/* IRQSIS12 */
#define IRC0_IRQSIS12	(IRC0.unIRQSIS12.u32Register)  /*@rg@*/
#define IRC0_IRQSIS12_IRQSIS384	(*(volatile uint_io8_t*)0xB1105B80)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS385	(*(volatile uint_io8_t*)0xB1105B81)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS386	(*(volatile uint_io8_t*)0xB1105B82)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS387	(*(volatile uint_io8_t*)0xB1105B83)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS388	(*(volatile uint_io8_t*)0xB1105B84)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS389	(*(volatile uint_io8_t*)0xB1105B85)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS390	(*(volatile uint_io8_t*)0xB1105B86)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS391	(*(volatile uint_io8_t*)0xB1105B87)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS392	(*(volatile uint_io8_t*)0xB1105B88)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS393	(*(volatile uint_io8_t*)0xB1105B89)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS394	(*(volatile uint_io8_t*)0xB1105B8A)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS395	(*(volatile uint_io8_t*)0xB1105B8B)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS396	(*(volatile uint_io8_t*)0xB1105B8C)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS397	(*(volatile uint_io8_t*)0xB1105B8D)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS398	(*(volatile uint_io8_t*)0xB1105B8E)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS399	(*(volatile uint_io8_t*)0xB1105B8F)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS400	(*(volatile uint_io8_t*)0xB1105B90)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS401	(*(volatile uint_io8_t*)0xB1105B91)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS402	(*(volatile uint_io8_t*)0xB1105B92)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS403	(*(volatile uint_io8_t*)0xB1105B93)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS404	(*(volatile uint_io8_t*)0xB1105B94)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS405	(*(volatile uint_io8_t*)0xB1105B95)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS406	(*(volatile uint_io8_t*)0xB1105B96)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS407	(*(volatile uint_io8_t*)0xB1105B97)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS408	(*(volatile uint_io8_t*)0xB1105B98)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS409	(*(volatile uint_io8_t*)0xB1105B99)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS410	(*(volatile uint_io8_t*)0xB1105B9A)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS411	(*(volatile uint_io8_t*)0xB1105B9B)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS412	(*(volatile uint_io8_t*)0xB1105B9C)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS413	(*(volatile uint_io8_t*)0xB1105B9D)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS414	(*(volatile uint_io8_t*)0xB1105B9E)  /*@bfbba@*/
#define IRC0_IRQSIS12_IRQSIS415	(*(volatile uint_io8_t*)0xB1105B9F)  /*@bfbba@*/

typedef struct stc_irc0_irqsis12_field{
    uint_io32_t		u1IRQSIS384:1;
    uint_io32_t		u1IRQSIS385:1;
    uint_io32_t		u1IRQSIS386:1;
    uint_io32_t		u1IRQSIS387:1;
    uint_io32_t		u1IRQSIS388:1;
    uint_io32_t		u1IRQSIS389:1;
    uint_io32_t		u1IRQSIS390:1;
    uint_io32_t		u1IRQSIS391:1;
    uint_io32_t		u1IRQSIS392:1;
    uint_io32_t		u1IRQSIS393:1;
    uint_io32_t		u1IRQSIS394:1;
    uint_io32_t		u1IRQSIS395:1;
    uint_io32_t		u1IRQSIS396:1;
    uint_io32_t		u1IRQSIS397:1;
    uint_io32_t		u1IRQSIS398:1;
    uint_io32_t		u1IRQSIS399:1;
    uint_io32_t		u1IRQSIS400:1;
    uint_io32_t		u1IRQSIS401:1;
    uint_io32_t		u1IRQSIS402:1;
    uint_io32_t		u1IRQSIS403:1;
    uint_io32_t		u1IRQSIS404:1;
    uint_io32_t		u1IRQSIS405:1;
    uint_io32_t		u1IRQSIS406:1;
    uint_io32_t		u1IRQSIS407:1;
    uint_io32_t		u1IRQSIS408:1;
    uint_io32_t		u1IRQSIS409:1;
    uint_io32_t		u1IRQSIS410:1;
    uint_io32_t		u1IRQSIS411:1;
    uint_io32_t		u1IRQSIS412:1;
    uint_io32_t		u1IRQSIS413:1;
    uint_io32_t		u1IRQSIS414:1;
    uint_io32_t		u1IRQSIS415:1;
}stc_irc0_irqsis12_field_t;

typedef union un_irc0_irqsis12{
    uint_io32_t		u32Register;
    stc_irc0_irqsis12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis12_t;

/* IRQSIS13 */
#define IRC0_IRQSIS13	(IRC0.unIRQSIS13.u32Register)  /*@rg@*/
#define IRC0_IRQSIS13_IRQSIS416	(*(volatile uint_io8_t*)0xB1105BA0)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS417	(*(volatile uint_io8_t*)0xB1105BA1)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS418	(*(volatile uint_io8_t*)0xB1105BA2)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS419	(*(volatile uint_io8_t*)0xB1105BA3)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS420	(*(volatile uint_io8_t*)0xB1105BA4)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS421	(*(volatile uint_io8_t*)0xB1105BA5)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS422	(*(volatile uint_io8_t*)0xB1105BA6)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS423	(*(volatile uint_io8_t*)0xB1105BA7)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS424	(*(volatile uint_io8_t*)0xB1105BA8)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS425	(*(volatile uint_io8_t*)0xB1105BA9)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS426	(*(volatile uint_io8_t*)0xB1105BAA)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS427	(*(volatile uint_io8_t*)0xB1105BAB)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS428	(*(volatile uint_io8_t*)0xB1105BAC)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS429	(*(volatile uint_io8_t*)0xB1105BAD)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS430	(*(volatile uint_io8_t*)0xB1105BAE)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS431	(*(volatile uint_io8_t*)0xB1105BAF)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS432	(*(volatile uint_io8_t*)0xB1105BB0)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS433	(*(volatile uint_io8_t*)0xB1105BB1)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS434	(*(volatile uint_io8_t*)0xB1105BB2)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS435	(*(volatile uint_io8_t*)0xB1105BB3)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS436	(*(volatile uint_io8_t*)0xB1105BB4)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS437	(*(volatile uint_io8_t*)0xB1105BB5)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS438	(*(volatile uint_io8_t*)0xB1105BB6)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS439	(*(volatile uint_io8_t*)0xB1105BB7)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS440	(*(volatile uint_io8_t*)0xB1105BB8)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS441	(*(volatile uint_io8_t*)0xB1105BB9)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS442	(*(volatile uint_io8_t*)0xB1105BBA)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS443	(*(volatile uint_io8_t*)0xB1105BBB)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS444	(*(volatile uint_io8_t*)0xB1105BBC)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS445	(*(volatile uint_io8_t*)0xB1105BBD)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS446	(*(volatile uint_io8_t*)0xB1105BBE)  /*@bfbba@*/
#define IRC0_IRQSIS13_IRQSIS447	(*(volatile uint_io8_t*)0xB1105BBF)  /*@bfbba@*/

typedef struct stc_irc0_irqsis13_field{
    uint_io32_t		u1IRQSIS416:1;
    uint_io32_t		u1IRQSIS417:1;
    uint_io32_t		u1IRQSIS418:1;
    uint_io32_t		u1IRQSIS419:1;
    uint_io32_t		u1IRQSIS420:1;
    uint_io32_t		u1IRQSIS421:1;
    uint_io32_t		u1IRQSIS422:1;
    uint_io32_t		u1IRQSIS423:1;
    uint_io32_t		u1IRQSIS424:1;
    uint_io32_t		u1IRQSIS425:1;
    uint_io32_t		u1IRQSIS426:1;
    uint_io32_t		u1IRQSIS427:1;
    uint_io32_t		u1IRQSIS428:1;
    uint_io32_t		u1IRQSIS429:1;
    uint_io32_t		u1IRQSIS430:1;
    uint_io32_t		u1IRQSIS431:1;
    uint_io32_t		u1IRQSIS432:1;
    uint_io32_t		u1IRQSIS433:1;
    uint_io32_t		u1IRQSIS434:1;
    uint_io32_t		u1IRQSIS435:1;
    uint_io32_t		u1IRQSIS436:1;
    uint_io32_t		u1IRQSIS437:1;
    uint_io32_t		u1IRQSIS438:1;
    uint_io32_t		u1IRQSIS439:1;
    uint_io32_t		u1IRQSIS440:1;
    uint_io32_t		u1IRQSIS441:1;
    uint_io32_t		u1IRQSIS442:1;
    uint_io32_t		u1IRQSIS443:1;
    uint_io32_t		u1IRQSIS444:1;
    uint_io32_t		u1IRQSIS445:1;
    uint_io32_t		u1IRQSIS446:1;
    uint_io32_t		u1IRQSIS447:1;
}stc_irc0_irqsis13_field_t;

typedef union un_irc0_irqsis13{
    uint_io32_t		u32Register;
    stc_irc0_irqsis13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis13_t;

/* IRQSIS14 */
#define IRC0_IRQSIS14	(IRC0.unIRQSIS14.u32Register)  /*@rg@*/
#define IRC0_IRQSIS14_IRQSIS448	(*(volatile uint_io8_t*)0xB1105BC0)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS449	(*(volatile uint_io8_t*)0xB1105BC1)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS450	(*(volatile uint_io8_t*)0xB1105BC2)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS451	(*(volatile uint_io8_t*)0xB1105BC3)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS452	(*(volatile uint_io8_t*)0xB1105BC4)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS453	(*(volatile uint_io8_t*)0xB1105BC5)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS454	(*(volatile uint_io8_t*)0xB1105BC6)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS455	(*(volatile uint_io8_t*)0xB1105BC7)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS456	(*(volatile uint_io8_t*)0xB1105BC8)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS457	(*(volatile uint_io8_t*)0xB1105BC9)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS458	(*(volatile uint_io8_t*)0xB1105BCA)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS459	(*(volatile uint_io8_t*)0xB1105BCB)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS460	(*(volatile uint_io8_t*)0xB1105BCC)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS461	(*(volatile uint_io8_t*)0xB1105BCD)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS462	(*(volatile uint_io8_t*)0xB1105BCE)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS463	(*(volatile uint_io8_t*)0xB1105BCF)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS464	(*(volatile uint_io8_t*)0xB1105BD0)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS465	(*(volatile uint_io8_t*)0xB1105BD1)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS466	(*(volatile uint_io8_t*)0xB1105BD2)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS467	(*(volatile uint_io8_t*)0xB1105BD3)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS468	(*(volatile uint_io8_t*)0xB1105BD4)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS469	(*(volatile uint_io8_t*)0xB1105BD5)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS470	(*(volatile uint_io8_t*)0xB1105BD6)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS471	(*(volatile uint_io8_t*)0xB1105BD7)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS472	(*(volatile uint_io8_t*)0xB1105BD8)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS473	(*(volatile uint_io8_t*)0xB1105BD9)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS474	(*(volatile uint_io8_t*)0xB1105BDA)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS475	(*(volatile uint_io8_t*)0xB1105BDB)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS476	(*(volatile uint_io8_t*)0xB1105BDC)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS477	(*(volatile uint_io8_t*)0xB1105BDD)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS478	(*(volatile uint_io8_t*)0xB1105BDE)  /*@bfbba@*/
#define IRC0_IRQSIS14_IRQSIS479	(*(volatile uint_io8_t*)0xB1105BDF)  /*@bfbba@*/

typedef struct stc_irc0_irqsis14_field{
    uint_io32_t		u1IRQSIS448:1;
    uint_io32_t		u1IRQSIS449:1;
    uint_io32_t		u1IRQSIS450:1;
    uint_io32_t		u1IRQSIS451:1;
    uint_io32_t		u1IRQSIS452:1;
    uint_io32_t		u1IRQSIS453:1;
    uint_io32_t		u1IRQSIS454:1;
    uint_io32_t		u1IRQSIS455:1;
    uint_io32_t		u1IRQSIS456:1;
    uint_io32_t		u1IRQSIS457:1;
    uint_io32_t		u1IRQSIS458:1;
    uint_io32_t		u1IRQSIS459:1;
    uint_io32_t		u1IRQSIS460:1;
    uint_io32_t		u1IRQSIS461:1;
    uint_io32_t		u1IRQSIS462:1;
    uint_io32_t		u1IRQSIS463:1;
    uint_io32_t		u1IRQSIS464:1;
    uint_io32_t		u1IRQSIS465:1;
    uint_io32_t		u1IRQSIS466:1;
    uint_io32_t		u1IRQSIS467:1;
    uint_io32_t		u1IRQSIS468:1;
    uint_io32_t		u1IRQSIS469:1;
    uint_io32_t		u1IRQSIS470:1;
    uint_io32_t		u1IRQSIS471:1;
    uint_io32_t		u1IRQSIS472:1;
    uint_io32_t		u1IRQSIS473:1;
    uint_io32_t		u1IRQSIS474:1;
    uint_io32_t		u1IRQSIS475:1;
    uint_io32_t		u1IRQSIS476:1;
    uint_io32_t		u1IRQSIS477:1;
    uint_io32_t		u1IRQSIS478:1;
    uint_io32_t		u1IRQSIS479:1;
}stc_irc0_irqsis14_field_t;

typedef union un_irc0_irqsis14{
    uint_io32_t		u32Register;
    stc_irc0_irqsis14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis14_t;

/* IRQSIS15 */
#define IRC0_IRQSIS15	(IRC0.unIRQSIS15.u32Register)  /*@rg@*/
#define IRC0_IRQSIS15_IRQSIS480	(*(volatile uint_io8_t*)0xB1105BE0)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS481	(*(volatile uint_io8_t*)0xB1105BE1)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS482	(*(volatile uint_io8_t*)0xB1105BE2)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS483	(*(volatile uint_io8_t*)0xB1105BE3)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS484	(*(volatile uint_io8_t*)0xB1105BE4)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS485	(*(volatile uint_io8_t*)0xB1105BE5)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS486	(*(volatile uint_io8_t*)0xB1105BE6)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS487	(*(volatile uint_io8_t*)0xB1105BE7)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS488	(*(volatile uint_io8_t*)0xB1105BE8)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS489	(*(volatile uint_io8_t*)0xB1105BE9)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS490	(*(volatile uint_io8_t*)0xB1105BEA)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS491	(*(volatile uint_io8_t*)0xB1105BEB)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS492	(*(volatile uint_io8_t*)0xB1105BEC)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS493	(*(volatile uint_io8_t*)0xB1105BED)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS494	(*(volatile uint_io8_t*)0xB1105BEE)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS495	(*(volatile uint_io8_t*)0xB1105BEF)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS496	(*(volatile uint_io8_t*)0xB1105BF0)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS497	(*(volatile uint_io8_t*)0xB1105BF1)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS498	(*(volatile uint_io8_t*)0xB1105BF2)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS499	(*(volatile uint_io8_t*)0xB1105BF3)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS500	(*(volatile uint_io8_t*)0xB1105BF4)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS501	(*(volatile uint_io8_t*)0xB1105BF5)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS502	(*(volatile uint_io8_t*)0xB1105BF6)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS503	(*(volatile uint_io8_t*)0xB1105BF7)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS504	(*(volatile uint_io8_t*)0xB1105BF8)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS505	(*(volatile uint_io8_t*)0xB1105BF9)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS506	(*(volatile uint_io8_t*)0xB1105BFA)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS507	(*(volatile uint_io8_t*)0xB1105BFB)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS508	(*(volatile uint_io8_t*)0xB1105BFC)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS509	(*(volatile uint_io8_t*)0xB1105BFD)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS510	(*(volatile uint_io8_t*)0xB1105BFE)  /*@bfbba@*/
#define IRC0_IRQSIS15_IRQSIS511	(*(volatile uint_io8_t*)0xB1105BFF)  /*@bfbba@*/

typedef struct stc_irc0_irqsis15_field{
    uint_io32_t		u1IRQSIS480:1;
    uint_io32_t		u1IRQSIS481:1;
    uint_io32_t		u1IRQSIS482:1;
    uint_io32_t		u1IRQSIS483:1;
    uint_io32_t		u1IRQSIS484:1;
    uint_io32_t		u1IRQSIS485:1;
    uint_io32_t		u1IRQSIS486:1;
    uint_io32_t		u1IRQSIS487:1;
    uint_io32_t		u1IRQSIS488:1;
    uint_io32_t		u1IRQSIS489:1;
    uint_io32_t		u1IRQSIS490:1;
    uint_io32_t		u1IRQSIS491:1;
    uint_io32_t		u1IRQSIS492:1;
    uint_io32_t		u1IRQSIS493:1;
    uint_io32_t		u1IRQSIS494:1;
    uint_io32_t		u1IRQSIS495:1;
    uint_io32_t		u1IRQSIS496:1;
    uint_io32_t		u1IRQSIS497:1;
    uint_io32_t		u1IRQSIS498:1;
    uint_io32_t		u1IRQSIS499:1;
    uint_io32_t		u1IRQSIS500:1;
    uint_io32_t		u1IRQSIS501:1;
    uint_io32_t		u1IRQSIS502:1;
    uint_io32_t		u1IRQSIS503:1;
    uint_io32_t		u1IRQSIS504:1;
    uint_io32_t		u1IRQSIS505:1;
    uint_io32_t		u1IRQSIS506:1;
    uint_io32_t		u1IRQSIS507:1;
    uint_io32_t		u1IRQSIS508:1;
    uint_io32_t		u1IRQSIS509:1;
    uint_io32_t		u1IRQSIS510:1;
    uint_io32_t		u1IRQSIS511:1;
}stc_irc0_irqsis15_field_t;

typedef union un_irc0_irqsis15{
    uint_io32_t		u32Register;
    stc_irc0_irqsis15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqsis15_t;

/* IRQCES0 */
#define IRC0_IRQCES0	(IRC0.unIRQCES0.u32Register)  /*@rg@*/
#define IRC0_IRQCES0_IRQCES0	(*(volatile uint_io8_t*)0xB1105C00)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES1	(*(volatile uint_io8_t*)0xB1105C01)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES2	(*(volatile uint_io8_t*)0xB1105C02)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES3	(*(volatile uint_io8_t*)0xB1105C03)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES4	(*(volatile uint_io8_t*)0xB1105C04)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES5	(*(volatile uint_io8_t*)0xB1105C05)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES6	(*(volatile uint_io8_t*)0xB1105C06)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES7	(*(volatile uint_io8_t*)0xB1105C07)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES8	(*(volatile uint_io8_t*)0xB1105C08)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES9	(*(volatile uint_io8_t*)0xB1105C09)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES10	(*(volatile uint_io8_t*)0xB1105C0A)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES11	(*(volatile uint_io8_t*)0xB1105C0B)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES12	(*(volatile uint_io8_t*)0xB1105C0C)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES13	(*(volatile uint_io8_t*)0xB1105C0D)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES14	(*(volatile uint_io8_t*)0xB1105C0E)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES15	(*(volatile uint_io8_t*)0xB1105C0F)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES16	(*(volatile uint_io8_t*)0xB1105C10)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES17	(*(volatile uint_io8_t*)0xB1105C11)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES18	(*(volatile uint_io8_t*)0xB1105C12)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES19	(*(volatile uint_io8_t*)0xB1105C13)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES20	(*(volatile uint_io8_t*)0xB1105C14)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES21	(*(volatile uint_io8_t*)0xB1105C15)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES22	(*(volatile uint_io8_t*)0xB1105C16)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES23	(*(volatile uint_io8_t*)0xB1105C17)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES24	(*(volatile uint_io8_t*)0xB1105C18)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES25	(*(volatile uint_io8_t*)0xB1105C19)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES26	(*(volatile uint_io8_t*)0xB1105C1A)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES27	(*(volatile uint_io8_t*)0xB1105C1B)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES28	(*(volatile uint_io8_t*)0xB1105C1C)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES29	(*(volatile uint_io8_t*)0xB1105C1D)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES30	(*(volatile uint_io8_t*)0xB1105C1E)  /*@bfbba@*/
#define IRC0_IRQCES0_IRQCES31	(*(volatile uint_io8_t*)0xB1105C1F)  /*@bfbba@*/

typedef struct stc_irc0_irqces0_field{
    uint_io32_t		u1IRQCES0:1;
    uint_io32_t		u1IRQCES1:1;
    uint_io32_t		u1IRQCES2:1;
    uint_io32_t		u1IRQCES3:1;
    uint_io32_t		u1IRQCES4:1;
    uint_io32_t		u1IRQCES5:1;
    uint_io32_t		u1IRQCES6:1;
    uint_io32_t		u1IRQCES7:1;
    uint_io32_t		u1IRQCES8:1;
    uint_io32_t		u1IRQCES9:1;
    uint_io32_t		u1IRQCES10:1;
    uint_io32_t		u1IRQCES11:1;
    uint_io32_t		u1IRQCES12:1;
    uint_io32_t		u1IRQCES13:1;
    uint_io32_t		u1IRQCES14:1;
    uint_io32_t		u1IRQCES15:1;
    uint_io32_t		u1IRQCES16:1;
    uint_io32_t		u1IRQCES17:1;
    uint_io32_t		u1IRQCES18:1;
    uint_io32_t		u1IRQCES19:1;
    uint_io32_t		u1IRQCES20:1;
    uint_io32_t		u1IRQCES21:1;
    uint_io32_t		u1IRQCES22:1;
    uint_io32_t		u1IRQCES23:1;
    uint_io32_t		u1IRQCES24:1;
    uint_io32_t		u1IRQCES25:1;
    uint_io32_t		u1IRQCES26:1;
    uint_io32_t		u1IRQCES27:1;
    uint_io32_t		u1IRQCES28:1;
    uint_io32_t		u1IRQCES29:1;
    uint_io32_t		u1IRQCES30:1;
    uint_io32_t		u1IRQCES31:1;
}stc_irc0_irqces0_field_t;

typedef union un_irc0_irqces0{
    uint_io32_t		u32Register;
    stc_irc0_irqces0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces0_t;

/* IRQCES1 */
#define IRC0_IRQCES1	(IRC0.unIRQCES1.u32Register)  /*@rg@*/
#define IRC0_IRQCES1_IRQCES32	(*(volatile uint_io8_t*)0xB1105C20)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES33	(*(volatile uint_io8_t*)0xB1105C21)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES34	(*(volatile uint_io8_t*)0xB1105C22)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES35	(*(volatile uint_io8_t*)0xB1105C23)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES36	(*(volatile uint_io8_t*)0xB1105C24)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES37	(*(volatile uint_io8_t*)0xB1105C25)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES38	(*(volatile uint_io8_t*)0xB1105C26)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES39	(*(volatile uint_io8_t*)0xB1105C27)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES40	(*(volatile uint_io8_t*)0xB1105C28)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES41	(*(volatile uint_io8_t*)0xB1105C29)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES42	(*(volatile uint_io8_t*)0xB1105C2A)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES43	(*(volatile uint_io8_t*)0xB1105C2B)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES44	(*(volatile uint_io8_t*)0xB1105C2C)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES45	(*(volatile uint_io8_t*)0xB1105C2D)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES46	(*(volatile uint_io8_t*)0xB1105C2E)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES47	(*(volatile uint_io8_t*)0xB1105C2F)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES48	(*(volatile uint_io8_t*)0xB1105C30)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES49	(*(volatile uint_io8_t*)0xB1105C31)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES50	(*(volatile uint_io8_t*)0xB1105C32)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES51	(*(volatile uint_io8_t*)0xB1105C33)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES52	(*(volatile uint_io8_t*)0xB1105C34)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES53	(*(volatile uint_io8_t*)0xB1105C35)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES54	(*(volatile uint_io8_t*)0xB1105C36)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES55	(*(volatile uint_io8_t*)0xB1105C37)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES56	(*(volatile uint_io8_t*)0xB1105C38)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES57	(*(volatile uint_io8_t*)0xB1105C39)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES58	(*(volatile uint_io8_t*)0xB1105C3A)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES59	(*(volatile uint_io8_t*)0xB1105C3B)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES60	(*(volatile uint_io8_t*)0xB1105C3C)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES61	(*(volatile uint_io8_t*)0xB1105C3D)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES62	(*(volatile uint_io8_t*)0xB1105C3E)  /*@bfbba@*/
#define IRC0_IRQCES1_IRQCES63	(*(volatile uint_io8_t*)0xB1105C3F)  /*@bfbba@*/

typedef struct stc_irc0_irqces1_field{
    uint_io32_t		u1IRQCES32:1;
    uint_io32_t		u1IRQCES33:1;
    uint_io32_t		u1IRQCES34:1;
    uint_io32_t		u1IRQCES35:1;
    uint_io32_t		u1IRQCES36:1;
    uint_io32_t		u1IRQCES37:1;
    uint_io32_t		u1IRQCES38:1;
    uint_io32_t		u1IRQCES39:1;
    uint_io32_t		u1IRQCES40:1;
    uint_io32_t		u1IRQCES41:1;
    uint_io32_t		u1IRQCES42:1;
    uint_io32_t		u1IRQCES43:1;
    uint_io32_t		u1IRQCES44:1;
    uint_io32_t		u1IRQCES45:1;
    uint_io32_t		u1IRQCES46:1;
    uint_io32_t		u1IRQCES47:1;
    uint_io32_t		u1IRQCES48:1;
    uint_io32_t		u1IRQCES49:1;
    uint_io32_t		u1IRQCES50:1;
    uint_io32_t		u1IRQCES51:1;
    uint_io32_t		u1IRQCES52:1;
    uint_io32_t		u1IRQCES53:1;
    uint_io32_t		u1IRQCES54:1;
    uint_io32_t		u1IRQCES55:1;
    uint_io32_t		u1IRQCES56:1;
    uint_io32_t		u1IRQCES57:1;
    uint_io32_t		u1IRQCES58:1;
    uint_io32_t		u1IRQCES59:1;
    uint_io32_t		u1IRQCES60:1;
    uint_io32_t		u1IRQCES61:1;
    uint_io32_t		u1IRQCES62:1;
    uint_io32_t		u1IRQCES63:1;
}stc_irc0_irqces1_field_t;

typedef union un_irc0_irqces1{
    uint_io32_t		u32Register;
    stc_irc0_irqces1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces1_t;

/* IRQCES2 */
#define IRC0_IRQCES2	(IRC0.unIRQCES2.u32Register)  /*@rg@*/
#define IRC0_IRQCES2_IRQCES64	(*(volatile uint_io8_t*)0xB1105C40)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES65	(*(volatile uint_io8_t*)0xB1105C41)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES66	(*(volatile uint_io8_t*)0xB1105C42)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES67	(*(volatile uint_io8_t*)0xB1105C43)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES68	(*(volatile uint_io8_t*)0xB1105C44)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES69	(*(volatile uint_io8_t*)0xB1105C45)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES70	(*(volatile uint_io8_t*)0xB1105C46)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES71	(*(volatile uint_io8_t*)0xB1105C47)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES72	(*(volatile uint_io8_t*)0xB1105C48)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES73	(*(volatile uint_io8_t*)0xB1105C49)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES74	(*(volatile uint_io8_t*)0xB1105C4A)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES75	(*(volatile uint_io8_t*)0xB1105C4B)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES76	(*(volatile uint_io8_t*)0xB1105C4C)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES77	(*(volatile uint_io8_t*)0xB1105C4D)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES78	(*(volatile uint_io8_t*)0xB1105C4E)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES79	(*(volatile uint_io8_t*)0xB1105C4F)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES80	(*(volatile uint_io8_t*)0xB1105C50)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES81	(*(volatile uint_io8_t*)0xB1105C51)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES82	(*(volatile uint_io8_t*)0xB1105C52)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES83	(*(volatile uint_io8_t*)0xB1105C53)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES84	(*(volatile uint_io8_t*)0xB1105C54)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES85	(*(volatile uint_io8_t*)0xB1105C55)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES86	(*(volatile uint_io8_t*)0xB1105C56)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES87	(*(volatile uint_io8_t*)0xB1105C57)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES88	(*(volatile uint_io8_t*)0xB1105C58)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES89	(*(volatile uint_io8_t*)0xB1105C59)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES90	(*(volatile uint_io8_t*)0xB1105C5A)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES91	(*(volatile uint_io8_t*)0xB1105C5B)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES92	(*(volatile uint_io8_t*)0xB1105C5C)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES93	(*(volatile uint_io8_t*)0xB1105C5D)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES94	(*(volatile uint_io8_t*)0xB1105C5E)  /*@bfbba@*/
#define IRC0_IRQCES2_IRQCES95	(*(volatile uint_io8_t*)0xB1105C5F)  /*@bfbba@*/

typedef struct stc_irc0_irqces2_field{
    uint_io32_t		u1IRQCES64:1;
    uint_io32_t		u1IRQCES65:1;
    uint_io32_t		u1IRQCES66:1;
    uint_io32_t		u1IRQCES67:1;
    uint_io32_t		u1IRQCES68:1;
    uint_io32_t		u1IRQCES69:1;
    uint_io32_t		u1IRQCES70:1;
    uint_io32_t		u1IRQCES71:1;
    uint_io32_t		u1IRQCES72:1;
    uint_io32_t		u1IRQCES73:1;
    uint_io32_t		u1IRQCES74:1;
    uint_io32_t		u1IRQCES75:1;
    uint_io32_t		u1IRQCES76:1;
    uint_io32_t		u1IRQCES77:1;
    uint_io32_t		u1IRQCES78:1;
    uint_io32_t		u1IRQCES79:1;
    uint_io32_t		u1IRQCES80:1;
    uint_io32_t		u1IRQCES81:1;
    uint_io32_t		u1IRQCES82:1;
    uint_io32_t		u1IRQCES83:1;
    uint_io32_t		u1IRQCES84:1;
    uint_io32_t		u1IRQCES85:1;
    uint_io32_t		u1IRQCES86:1;
    uint_io32_t		u1IRQCES87:1;
    uint_io32_t		u1IRQCES88:1;
    uint_io32_t		u1IRQCES89:1;
    uint_io32_t		u1IRQCES90:1;
    uint_io32_t		u1IRQCES91:1;
    uint_io32_t		u1IRQCES92:1;
    uint_io32_t		u1IRQCES93:1;
    uint_io32_t		u1IRQCES94:1;
    uint_io32_t		u1IRQCES95:1;
}stc_irc0_irqces2_field_t;

typedef union un_irc0_irqces2{
    uint_io32_t		u32Register;
    stc_irc0_irqces2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces2_t;

/* IRQCES3 */
#define IRC0_IRQCES3	(IRC0.unIRQCES3.u32Register)  /*@rg@*/
#define IRC0_IRQCES3_IRQCES96	(*(volatile uint_io8_t*)0xB1105C60)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES97	(*(volatile uint_io8_t*)0xB1105C61)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES98	(*(volatile uint_io8_t*)0xB1105C62)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES99	(*(volatile uint_io8_t*)0xB1105C63)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES100	(*(volatile uint_io8_t*)0xB1105C64)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES101	(*(volatile uint_io8_t*)0xB1105C65)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES102	(*(volatile uint_io8_t*)0xB1105C66)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES103	(*(volatile uint_io8_t*)0xB1105C67)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES104	(*(volatile uint_io8_t*)0xB1105C68)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES105	(*(volatile uint_io8_t*)0xB1105C69)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES106	(*(volatile uint_io8_t*)0xB1105C6A)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES107	(*(volatile uint_io8_t*)0xB1105C6B)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES108	(*(volatile uint_io8_t*)0xB1105C6C)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES109	(*(volatile uint_io8_t*)0xB1105C6D)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES110	(*(volatile uint_io8_t*)0xB1105C6E)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES111	(*(volatile uint_io8_t*)0xB1105C6F)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES112	(*(volatile uint_io8_t*)0xB1105C70)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES113	(*(volatile uint_io8_t*)0xB1105C71)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES114	(*(volatile uint_io8_t*)0xB1105C72)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES115	(*(volatile uint_io8_t*)0xB1105C73)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES116	(*(volatile uint_io8_t*)0xB1105C74)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES117	(*(volatile uint_io8_t*)0xB1105C75)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES118	(*(volatile uint_io8_t*)0xB1105C76)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES119	(*(volatile uint_io8_t*)0xB1105C77)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES120	(*(volatile uint_io8_t*)0xB1105C78)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES121	(*(volatile uint_io8_t*)0xB1105C79)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES122	(*(volatile uint_io8_t*)0xB1105C7A)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES123	(*(volatile uint_io8_t*)0xB1105C7B)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES124	(*(volatile uint_io8_t*)0xB1105C7C)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES125	(*(volatile uint_io8_t*)0xB1105C7D)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES126	(*(volatile uint_io8_t*)0xB1105C7E)  /*@bfbba@*/
#define IRC0_IRQCES3_IRQCES127	(*(volatile uint_io8_t*)0xB1105C7F)  /*@bfbba@*/

typedef struct stc_irc0_irqces3_field{
    uint_io32_t		u1IRQCES96:1;
    uint_io32_t		u1IRQCES97:1;
    uint_io32_t		u1IRQCES98:1;
    uint_io32_t		u1IRQCES99:1;
    uint_io32_t		u1IRQCES100:1;
    uint_io32_t		u1IRQCES101:1;
    uint_io32_t		u1IRQCES102:1;
    uint_io32_t		u1IRQCES103:1;
    uint_io32_t		u1IRQCES104:1;
    uint_io32_t		u1IRQCES105:1;
    uint_io32_t		u1IRQCES106:1;
    uint_io32_t		u1IRQCES107:1;
    uint_io32_t		u1IRQCES108:1;
    uint_io32_t		u1IRQCES109:1;
    uint_io32_t		u1IRQCES110:1;
    uint_io32_t		u1IRQCES111:1;
    uint_io32_t		u1IRQCES112:1;
    uint_io32_t		u1IRQCES113:1;
    uint_io32_t		u1IRQCES114:1;
    uint_io32_t		u1IRQCES115:1;
    uint_io32_t		u1IRQCES116:1;
    uint_io32_t		u1IRQCES117:1;
    uint_io32_t		u1IRQCES118:1;
    uint_io32_t		u1IRQCES119:1;
    uint_io32_t		u1IRQCES120:1;
    uint_io32_t		u1IRQCES121:1;
    uint_io32_t		u1IRQCES122:1;
    uint_io32_t		u1IRQCES123:1;
    uint_io32_t		u1IRQCES124:1;
    uint_io32_t		u1IRQCES125:1;
    uint_io32_t		u1IRQCES126:1;
    uint_io32_t		u1IRQCES127:1;
}stc_irc0_irqces3_field_t;

typedef union un_irc0_irqces3{
    uint_io32_t		u32Register;
    stc_irc0_irqces3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces3_t;

/* IRQCES4 */
#define IRC0_IRQCES4	(IRC0.unIRQCES4.u32Register)  /*@rg@*/
#define IRC0_IRQCES4_IRQCES128	(*(volatile uint_io8_t*)0xB1105C80)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES129	(*(volatile uint_io8_t*)0xB1105C81)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES130	(*(volatile uint_io8_t*)0xB1105C82)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES131	(*(volatile uint_io8_t*)0xB1105C83)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES132	(*(volatile uint_io8_t*)0xB1105C84)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES133	(*(volatile uint_io8_t*)0xB1105C85)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES134	(*(volatile uint_io8_t*)0xB1105C86)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES135	(*(volatile uint_io8_t*)0xB1105C87)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES136	(*(volatile uint_io8_t*)0xB1105C88)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES137	(*(volatile uint_io8_t*)0xB1105C89)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES138	(*(volatile uint_io8_t*)0xB1105C8A)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES139	(*(volatile uint_io8_t*)0xB1105C8B)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES140	(*(volatile uint_io8_t*)0xB1105C8C)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES141	(*(volatile uint_io8_t*)0xB1105C8D)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES142	(*(volatile uint_io8_t*)0xB1105C8E)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES143	(*(volatile uint_io8_t*)0xB1105C8F)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES144	(*(volatile uint_io8_t*)0xB1105C90)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES145	(*(volatile uint_io8_t*)0xB1105C91)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES146	(*(volatile uint_io8_t*)0xB1105C92)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES147	(*(volatile uint_io8_t*)0xB1105C93)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES148	(*(volatile uint_io8_t*)0xB1105C94)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES149	(*(volatile uint_io8_t*)0xB1105C95)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES150	(*(volatile uint_io8_t*)0xB1105C96)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES151	(*(volatile uint_io8_t*)0xB1105C97)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES152	(*(volatile uint_io8_t*)0xB1105C98)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES153	(*(volatile uint_io8_t*)0xB1105C99)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES154	(*(volatile uint_io8_t*)0xB1105C9A)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES155	(*(volatile uint_io8_t*)0xB1105C9B)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES156	(*(volatile uint_io8_t*)0xB1105C9C)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES157	(*(volatile uint_io8_t*)0xB1105C9D)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES158	(*(volatile uint_io8_t*)0xB1105C9E)  /*@bfbba@*/
#define IRC0_IRQCES4_IRQCES159	(*(volatile uint_io8_t*)0xB1105C9F)  /*@bfbba@*/

typedef struct stc_irc0_irqces4_field{
    uint_io32_t		u1IRQCES128:1;
    uint_io32_t		u1IRQCES129:1;
    uint_io32_t		u1IRQCES130:1;
    uint_io32_t		u1IRQCES131:1;
    uint_io32_t		u1IRQCES132:1;
    uint_io32_t		u1IRQCES133:1;
    uint_io32_t		u1IRQCES134:1;
    uint_io32_t		u1IRQCES135:1;
    uint_io32_t		u1IRQCES136:1;
    uint_io32_t		u1IRQCES137:1;
    uint_io32_t		u1IRQCES138:1;
    uint_io32_t		u1IRQCES139:1;
    uint_io32_t		u1IRQCES140:1;
    uint_io32_t		u1IRQCES141:1;
    uint_io32_t		u1IRQCES142:1;
    uint_io32_t		u1IRQCES143:1;
    uint_io32_t		u1IRQCES144:1;
    uint_io32_t		u1IRQCES145:1;
    uint_io32_t		u1IRQCES146:1;
    uint_io32_t		u1IRQCES147:1;
    uint_io32_t		u1IRQCES148:1;
    uint_io32_t		u1IRQCES149:1;
    uint_io32_t		u1IRQCES150:1;
    uint_io32_t		u1IRQCES151:1;
    uint_io32_t		u1IRQCES152:1;
    uint_io32_t		u1IRQCES153:1;
    uint_io32_t		u1IRQCES154:1;
    uint_io32_t		u1IRQCES155:1;
    uint_io32_t		u1IRQCES156:1;
    uint_io32_t		u1IRQCES157:1;
    uint_io32_t		u1IRQCES158:1;
    uint_io32_t		u1IRQCES159:1;
}stc_irc0_irqces4_field_t;

typedef union un_irc0_irqces4{
    uint_io32_t		u32Register;
    stc_irc0_irqces4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces4_t;

/* IRQCES5 */
#define IRC0_IRQCES5	(IRC0.unIRQCES5.u32Register)  /*@rg@*/
#define IRC0_IRQCES5_IRQCES160	(*(volatile uint_io8_t*)0xB1105CA0)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES161	(*(volatile uint_io8_t*)0xB1105CA1)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES162	(*(volatile uint_io8_t*)0xB1105CA2)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES163	(*(volatile uint_io8_t*)0xB1105CA3)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES164	(*(volatile uint_io8_t*)0xB1105CA4)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES165	(*(volatile uint_io8_t*)0xB1105CA5)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES166	(*(volatile uint_io8_t*)0xB1105CA6)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES167	(*(volatile uint_io8_t*)0xB1105CA7)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES168	(*(volatile uint_io8_t*)0xB1105CA8)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES169	(*(volatile uint_io8_t*)0xB1105CA9)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES170	(*(volatile uint_io8_t*)0xB1105CAA)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES171	(*(volatile uint_io8_t*)0xB1105CAB)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES172	(*(volatile uint_io8_t*)0xB1105CAC)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES173	(*(volatile uint_io8_t*)0xB1105CAD)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES174	(*(volatile uint_io8_t*)0xB1105CAE)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES175	(*(volatile uint_io8_t*)0xB1105CAF)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES176	(*(volatile uint_io8_t*)0xB1105CB0)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES177	(*(volatile uint_io8_t*)0xB1105CB1)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES178	(*(volatile uint_io8_t*)0xB1105CB2)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES179	(*(volatile uint_io8_t*)0xB1105CB3)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES180	(*(volatile uint_io8_t*)0xB1105CB4)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES181	(*(volatile uint_io8_t*)0xB1105CB5)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES182	(*(volatile uint_io8_t*)0xB1105CB6)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES183	(*(volatile uint_io8_t*)0xB1105CB7)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES184	(*(volatile uint_io8_t*)0xB1105CB8)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES185	(*(volatile uint_io8_t*)0xB1105CB9)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES186	(*(volatile uint_io8_t*)0xB1105CBA)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES187	(*(volatile uint_io8_t*)0xB1105CBB)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES188	(*(volatile uint_io8_t*)0xB1105CBC)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES189	(*(volatile uint_io8_t*)0xB1105CBD)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES190	(*(volatile uint_io8_t*)0xB1105CBE)  /*@bfbba@*/
#define IRC0_IRQCES5_IRQCES191	(*(volatile uint_io8_t*)0xB1105CBF)  /*@bfbba@*/

typedef struct stc_irc0_irqces5_field{
    uint_io32_t		u1IRQCES160:1;
    uint_io32_t		u1IRQCES161:1;
    uint_io32_t		u1IRQCES162:1;
    uint_io32_t		u1IRQCES163:1;
    uint_io32_t		u1IRQCES164:1;
    uint_io32_t		u1IRQCES165:1;
    uint_io32_t		u1IRQCES166:1;
    uint_io32_t		u1IRQCES167:1;
    uint_io32_t		u1IRQCES168:1;
    uint_io32_t		u1IRQCES169:1;
    uint_io32_t		u1IRQCES170:1;
    uint_io32_t		u1IRQCES171:1;
    uint_io32_t		u1IRQCES172:1;
    uint_io32_t		u1IRQCES173:1;
    uint_io32_t		u1IRQCES174:1;
    uint_io32_t		u1IRQCES175:1;
    uint_io32_t		u1IRQCES176:1;
    uint_io32_t		u1IRQCES177:1;
    uint_io32_t		u1IRQCES178:1;
    uint_io32_t		u1IRQCES179:1;
    uint_io32_t		u1IRQCES180:1;
    uint_io32_t		u1IRQCES181:1;
    uint_io32_t		u1IRQCES182:1;
    uint_io32_t		u1IRQCES183:1;
    uint_io32_t		u1IRQCES184:1;
    uint_io32_t		u1IRQCES185:1;
    uint_io32_t		u1IRQCES186:1;
    uint_io32_t		u1IRQCES187:1;
    uint_io32_t		u1IRQCES188:1;
    uint_io32_t		u1IRQCES189:1;
    uint_io32_t		u1IRQCES190:1;
    uint_io32_t		u1IRQCES191:1;
}stc_irc0_irqces5_field_t;

typedef union un_irc0_irqces5{
    uint_io32_t		u32Register;
    stc_irc0_irqces5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces5_t;

/* IRQCES6 */
#define IRC0_IRQCES6	(IRC0.unIRQCES6.u32Register)  /*@rg@*/
#define IRC0_IRQCES6_IRQCES192	(*(volatile uint_io8_t*)0xB1105CC0)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES193	(*(volatile uint_io8_t*)0xB1105CC1)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES194	(*(volatile uint_io8_t*)0xB1105CC2)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES195	(*(volatile uint_io8_t*)0xB1105CC3)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES196	(*(volatile uint_io8_t*)0xB1105CC4)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES197	(*(volatile uint_io8_t*)0xB1105CC5)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES198	(*(volatile uint_io8_t*)0xB1105CC6)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES199	(*(volatile uint_io8_t*)0xB1105CC7)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES200	(*(volatile uint_io8_t*)0xB1105CC8)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES201	(*(volatile uint_io8_t*)0xB1105CC9)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES202	(*(volatile uint_io8_t*)0xB1105CCA)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES203	(*(volatile uint_io8_t*)0xB1105CCB)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES204	(*(volatile uint_io8_t*)0xB1105CCC)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES205	(*(volatile uint_io8_t*)0xB1105CCD)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES206	(*(volatile uint_io8_t*)0xB1105CCE)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES207	(*(volatile uint_io8_t*)0xB1105CCF)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES208	(*(volatile uint_io8_t*)0xB1105CD0)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES209	(*(volatile uint_io8_t*)0xB1105CD1)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES210	(*(volatile uint_io8_t*)0xB1105CD2)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES211	(*(volatile uint_io8_t*)0xB1105CD3)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES212	(*(volatile uint_io8_t*)0xB1105CD4)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES213	(*(volatile uint_io8_t*)0xB1105CD5)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES214	(*(volatile uint_io8_t*)0xB1105CD6)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES215	(*(volatile uint_io8_t*)0xB1105CD7)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES216	(*(volatile uint_io8_t*)0xB1105CD8)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES217	(*(volatile uint_io8_t*)0xB1105CD9)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES218	(*(volatile uint_io8_t*)0xB1105CDA)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES219	(*(volatile uint_io8_t*)0xB1105CDB)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES220	(*(volatile uint_io8_t*)0xB1105CDC)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES221	(*(volatile uint_io8_t*)0xB1105CDD)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES222	(*(volatile uint_io8_t*)0xB1105CDE)  /*@bfbba@*/
#define IRC0_IRQCES6_IRQCES223	(*(volatile uint_io8_t*)0xB1105CDF)  /*@bfbba@*/

typedef struct stc_irc0_irqces6_field{
    uint_io32_t		u1IRQCES192:1;
    uint_io32_t		u1IRQCES193:1;
    uint_io32_t		u1IRQCES194:1;
    uint_io32_t		u1IRQCES195:1;
    uint_io32_t		u1IRQCES196:1;
    uint_io32_t		u1IRQCES197:1;
    uint_io32_t		u1IRQCES198:1;
    uint_io32_t		u1IRQCES199:1;
    uint_io32_t		u1IRQCES200:1;
    uint_io32_t		u1IRQCES201:1;
    uint_io32_t		u1IRQCES202:1;
    uint_io32_t		u1IRQCES203:1;
    uint_io32_t		u1IRQCES204:1;
    uint_io32_t		u1IRQCES205:1;
    uint_io32_t		u1IRQCES206:1;
    uint_io32_t		u1IRQCES207:1;
    uint_io32_t		u1IRQCES208:1;
    uint_io32_t		u1IRQCES209:1;
    uint_io32_t		u1IRQCES210:1;
    uint_io32_t		u1IRQCES211:1;
    uint_io32_t		u1IRQCES212:1;
    uint_io32_t		u1IRQCES213:1;
    uint_io32_t		u1IRQCES214:1;
    uint_io32_t		u1IRQCES215:1;
    uint_io32_t		u1IRQCES216:1;
    uint_io32_t		u1IRQCES217:1;
    uint_io32_t		u1IRQCES218:1;
    uint_io32_t		u1IRQCES219:1;
    uint_io32_t		u1IRQCES220:1;
    uint_io32_t		u1IRQCES221:1;
    uint_io32_t		u1IRQCES222:1;
    uint_io32_t		u1IRQCES223:1;
}stc_irc0_irqces6_field_t;

typedef union un_irc0_irqces6{
    uint_io32_t		u32Register;
    stc_irc0_irqces6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces6_t;

/* IRQCES7 */
#define IRC0_IRQCES7	(IRC0.unIRQCES7.u32Register)  /*@rg@*/
#define IRC0_IRQCES7_IRQCES224	(*(volatile uint_io8_t*)0xB1105CE0)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES225	(*(volatile uint_io8_t*)0xB1105CE1)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES226	(*(volatile uint_io8_t*)0xB1105CE2)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES227	(*(volatile uint_io8_t*)0xB1105CE3)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES228	(*(volatile uint_io8_t*)0xB1105CE4)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES229	(*(volatile uint_io8_t*)0xB1105CE5)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES230	(*(volatile uint_io8_t*)0xB1105CE6)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES231	(*(volatile uint_io8_t*)0xB1105CE7)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES232	(*(volatile uint_io8_t*)0xB1105CE8)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES233	(*(volatile uint_io8_t*)0xB1105CE9)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES234	(*(volatile uint_io8_t*)0xB1105CEA)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES235	(*(volatile uint_io8_t*)0xB1105CEB)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES236	(*(volatile uint_io8_t*)0xB1105CEC)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES237	(*(volatile uint_io8_t*)0xB1105CED)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES238	(*(volatile uint_io8_t*)0xB1105CEE)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES239	(*(volatile uint_io8_t*)0xB1105CEF)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES240	(*(volatile uint_io8_t*)0xB1105CF0)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES241	(*(volatile uint_io8_t*)0xB1105CF1)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES242	(*(volatile uint_io8_t*)0xB1105CF2)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES243	(*(volatile uint_io8_t*)0xB1105CF3)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES244	(*(volatile uint_io8_t*)0xB1105CF4)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES245	(*(volatile uint_io8_t*)0xB1105CF5)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES246	(*(volatile uint_io8_t*)0xB1105CF6)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES247	(*(volatile uint_io8_t*)0xB1105CF7)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES248	(*(volatile uint_io8_t*)0xB1105CF8)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES249	(*(volatile uint_io8_t*)0xB1105CF9)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES250	(*(volatile uint_io8_t*)0xB1105CFA)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES251	(*(volatile uint_io8_t*)0xB1105CFB)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES252	(*(volatile uint_io8_t*)0xB1105CFC)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES253	(*(volatile uint_io8_t*)0xB1105CFD)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES254	(*(volatile uint_io8_t*)0xB1105CFE)  /*@bfbba@*/
#define IRC0_IRQCES7_IRQCES255	(*(volatile uint_io8_t*)0xB1105CFF)  /*@bfbba@*/

typedef struct stc_irc0_irqces7_field{
    uint_io32_t		u1IRQCES224:1;
    uint_io32_t		u1IRQCES225:1;
    uint_io32_t		u1IRQCES226:1;
    uint_io32_t		u1IRQCES227:1;
    uint_io32_t		u1IRQCES228:1;
    uint_io32_t		u1IRQCES229:1;
    uint_io32_t		u1IRQCES230:1;
    uint_io32_t		u1IRQCES231:1;
    uint_io32_t		u1IRQCES232:1;
    uint_io32_t		u1IRQCES233:1;
    uint_io32_t		u1IRQCES234:1;
    uint_io32_t		u1IRQCES235:1;
    uint_io32_t		u1IRQCES236:1;
    uint_io32_t		u1IRQCES237:1;
    uint_io32_t		u1IRQCES238:1;
    uint_io32_t		u1IRQCES239:1;
    uint_io32_t		u1IRQCES240:1;
    uint_io32_t		u1IRQCES241:1;
    uint_io32_t		u1IRQCES242:1;
    uint_io32_t		u1IRQCES243:1;
    uint_io32_t		u1IRQCES244:1;
    uint_io32_t		u1IRQCES245:1;
    uint_io32_t		u1IRQCES246:1;
    uint_io32_t		u1IRQCES247:1;
    uint_io32_t		u1IRQCES248:1;
    uint_io32_t		u1IRQCES249:1;
    uint_io32_t		u1IRQCES250:1;
    uint_io32_t		u1IRQCES251:1;
    uint_io32_t		u1IRQCES252:1;
    uint_io32_t		u1IRQCES253:1;
    uint_io32_t		u1IRQCES254:1;
    uint_io32_t		u1IRQCES255:1;
}stc_irc0_irqces7_field_t;

typedef union un_irc0_irqces7{
    uint_io32_t		u32Register;
    stc_irc0_irqces7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces7_t;

/* IRQCES8 */
#define IRC0_IRQCES8	(IRC0.unIRQCES8.u32Register)  /*@rg@*/
#define IRC0_IRQCES8_IRQCES256	(*(volatile uint_io8_t*)0xB1105D00)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES257	(*(volatile uint_io8_t*)0xB1105D01)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES258	(*(volatile uint_io8_t*)0xB1105D02)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES259	(*(volatile uint_io8_t*)0xB1105D03)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES260	(*(volatile uint_io8_t*)0xB1105D04)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES261	(*(volatile uint_io8_t*)0xB1105D05)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES262	(*(volatile uint_io8_t*)0xB1105D06)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES263	(*(volatile uint_io8_t*)0xB1105D07)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES264	(*(volatile uint_io8_t*)0xB1105D08)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES265	(*(volatile uint_io8_t*)0xB1105D09)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES266	(*(volatile uint_io8_t*)0xB1105D0A)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES267	(*(volatile uint_io8_t*)0xB1105D0B)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES268	(*(volatile uint_io8_t*)0xB1105D0C)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES269	(*(volatile uint_io8_t*)0xB1105D0D)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES270	(*(volatile uint_io8_t*)0xB1105D0E)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES271	(*(volatile uint_io8_t*)0xB1105D0F)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES272	(*(volatile uint_io8_t*)0xB1105D10)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES273	(*(volatile uint_io8_t*)0xB1105D11)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES274	(*(volatile uint_io8_t*)0xB1105D12)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES275	(*(volatile uint_io8_t*)0xB1105D13)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES276	(*(volatile uint_io8_t*)0xB1105D14)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES277	(*(volatile uint_io8_t*)0xB1105D15)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES278	(*(volatile uint_io8_t*)0xB1105D16)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES279	(*(volatile uint_io8_t*)0xB1105D17)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES280	(*(volatile uint_io8_t*)0xB1105D18)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES281	(*(volatile uint_io8_t*)0xB1105D19)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES282	(*(volatile uint_io8_t*)0xB1105D1A)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES283	(*(volatile uint_io8_t*)0xB1105D1B)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES284	(*(volatile uint_io8_t*)0xB1105D1C)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES285	(*(volatile uint_io8_t*)0xB1105D1D)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES286	(*(volatile uint_io8_t*)0xB1105D1E)  /*@bfbba@*/
#define IRC0_IRQCES8_IRQCES287	(*(volatile uint_io8_t*)0xB1105D1F)  /*@bfbba@*/

typedef struct stc_irc0_irqces8_field{
    uint_io32_t		u1IRQCES256:1;
    uint_io32_t		u1IRQCES257:1;
    uint_io32_t		u1IRQCES258:1;
    uint_io32_t		u1IRQCES259:1;
    uint_io32_t		u1IRQCES260:1;
    uint_io32_t		u1IRQCES261:1;
    uint_io32_t		u1IRQCES262:1;
    uint_io32_t		u1IRQCES263:1;
    uint_io32_t		u1IRQCES264:1;
    uint_io32_t		u1IRQCES265:1;
    uint_io32_t		u1IRQCES266:1;
    uint_io32_t		u1IRQCES267:1;
    uint_io32_t		u1IRQCES268:1;
    uint_io32_t		u1IRQCES269:1;
    uint_io32_t		u1IRQCES270:1;
    uint_io32_t		u1IRQCES271:1;
    uint_io32_t		u1IRQCES272:1;
    uint_io32_t		u1IRQCES273:1;
    uint_io32_t		u1IRQCES274:1;
    uint_io32_t		u1IRQCES275:1;
    uint_io32_t		u1IRQCES276:1;
    uint_io32_t		u1IRQCES277:1;
    uint_io32_t		u1IRQCES278:1;
    uint_io32_t		u1IRQCES279:1;
    uint_io32_t		u1IRQCES280:1;
    uint_io32_t		u1IRQCES281:1;
    uint_io32_t		u1IRQCES282:1;
    uint_io32_t		u1IRQCES283:1;
    uint_io32_t		u1IRQCES284:1;
    uint_io32_t		u1IRQCES285:1;
    uint_io32_t		u1IRQCES286:1;
    uint_io32_t		u1IRQCES287:1;
}stc_irc0_irqces8_field_t;

typedef union un_irc0_irqces8{
    uint_io32_t		u32Register;
    stc_irc0_irqces8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces8_t;

/* IRQCES9 */
#define IRC0_IRQCES9	(IRC0.unIRQCES9.u32Register)  /*@rg@*/
#define IRC0_IRQCES9_IRQCES288	(*(volatile uint_io8_t*)0xB1105D20)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES289	(*(volatile uint_io8_t*)0xB1105D21)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES290	(*(volatile uint_io8_t*)0xB1105D22)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES291	(*(volatile uint_io8_t*)0xB1105D23)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES292	(*(volatile uint_io8_t*)0xB1105D24)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES293	(*(volatile uint_io8_t*)0xB1105D25)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES294	(*(volatile uint_io8_t*)0xB1105D26)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES295	(*(volatile uint_io8_t*)0xB1105D27)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES296	(*(volatile uint_io8_t*)0xB1105D28)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES297	(*(volatile uint_io8_t*)0xB1105D29)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES298	(*(volatile uint_io8_t*)0xB1105D2A)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES299	(*(volatile uint_io8_t*)0xB1105D2B)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES300	(*(volatile uint_io8_t*)0xB1105D2C)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES301	(*(volatile uint_io8_t*)0xB1105D2D)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES302	(*(volatile uint_io8_t*)0xB1105D2E)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES303	(*(volatile uint_io8_t*)0xB1105D2F)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES304	(*(volatile uint_io8_t*)0xB1105D30)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES305	(*(volatile uint_io8_t*)0xB1105D31)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES306	(*(volatile uint_io8_t*)0xB1105D32)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES307	(*(volatile uint_io8_t*)0xB1105D33)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES308	(*(volatile uint_io8_t*)0xB1105D34)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES309	(*(volatile uint_io8_t*)0xB1105D35)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES310	(*(volatile uint_io8_t*)0xB1105D36)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES311	(*(volatile uint_io8_t*)0xB1105D37)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES312	(*(volatile uint_io8_t*)0xB1105D38)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES313	(*(volatile uint_io8_t*)0xB1105D39)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES314	(*(volatile uint_io8_t*)0xB1105D3A)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES315	(*(volatile uint_io8_t*)0xB1105D3B)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES316	(*(volatile uint_io8_t*)0xB1105D3C)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES317	(*(volatile uint_io8_t*)0xB1105D3D)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES318	(*(volatile uint_io8_t*)0xB1105D3E)  /*@bfbba@*/
#define IRC0_IRQCES9_IRQCES319	(*(volatile uint_io8_t*)0xB1105D3F)  /*@bfbba@*/

typedef struct stc_irc0_irqces9_field{
    uint_io32_t		u1IRQCES288:1;
    uint_io32_t		u1IRQCES289:1;
    uint_io32_t		u1IRQCES290:1;
    uint_io32_t		u1IRQCES291:1;
    uint_io32_t		u1IRQCES292:1;
    uint_io32_t		u1IRQCES293:1;
    uint_io32_t		u1IRQCES294:1;
    uint_io32_t		u1IRQCES295:1;
    uint_io32_t		u1IRQCES296:1;
    uint_io32_t		u1IRQCES297:1;
    uint_io32_t		u1IRQCES298:1;
    uint_io32_t		u1IRQCES299:1;
    uint_io32_t		u1IRQCES300:1;
    uint_io32_t		u1IRQCES301:1;
    uint_io32_t		u1IRQCES302:1;
    uint_io32_t		u1IRQCES303:1;
    uint_io32_t		u1IRQCES304:1;
    uint_io32_t		u1IRQCES305:1;
    uint_io32_t		u1IRQCES306:1;
    uint_io32_t		u1IRQCES307:1;
    uint_io32_t		u1IRQCES308:1;
    uint_io32_t		u1IRQCES309:1;
    uint_io32_t		u1IRQCES310:1;
    uint_io32_t		u1IRQCES311:1;
    uint_io32_t		u1IRQCES312:1;
    uint_io32_t		u1IRQCES313:1;
    uint_io32_t		u1IRQCES314:1;
    uint_io32_t		u1IRQCES315:1;
    uint_io32_t		u1IRQCES316:1;
    uint_io32_t		u1IRQCES317:1;
    uint_io32_t		u1IRQCES318:1;
    uint_io32_t		u1IRQCES319:1;
}stc_irc0_irqces9_field_t;

typedef union un_irc0_irqces9{
    uint_io32_t		u32Register;
    stc_irc0_irqces9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces9_t;

/* IRQCES10 */
#define IRC0_IRQCES10	(IRC0.unIRQCES10.u32Register)  /*@rg@*/
#define IRC0_IRQCES10_IRQCES320	(*(volatile uint_io8_t*)0xB1105D40)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES321	(*(volatile uint_io8_t*)0xB1105D41)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES322	(*(volatile uint_io8_t*)0xB1105D42)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES323	(*(volatile uint_io8_t*)0xB1105D43)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES324	(*(volatile uint_io8_t*)0xB1105D44)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES325	(*(volatile uint_io8_t*)0xB1105D45)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES326	(*(volatile uint_io8_t*)0xB1105D46)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES327	(*(volatile uint_io8_t*)0xB1105D47)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES328	(*(volatile uint_io8_t*)0xB1105D48)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES329	(*(volatile uint_io8_t*)0xB1105D49)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES330	(*(volatile uint_io8_t*)0xB1105D4A)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES331	(*(volatile uint_io8_t*)0xB1105D4B)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES332	(*(volatile uint_io8_t*)0xB1105D4C)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES333	(*(volatile uint_io8_t*)0xB1105D4D)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES334	(*(volatile uint_io8_t*)0xB1105D4E)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES335	(*(volatile uint_io8_t*)0xB1105D4F)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES336	(*(volatile uint_io8_t*)0xB1105D50)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES337	(*(volatile uint_io8_t*)0xB1105D51)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES338	(*(volatile uint_io8_t*)0xB1105D52)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES339	(*(volatile uint_io8_t*)0xB1105D53)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES340	(*(volatile uint_io8_t*)0xB1105D54)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES341	(*(volatile uint_io8_t*)0xB1105D55)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES342	(*(volatile uint_io8_t*)0xB1105D56)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES343	(*(volatile uint_io8_t*)0xB1105D57)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES344	(*(volatile uint_io8_t*)0xB1105D58)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES345	(*(volatile uint_io8_t*)0xB1105D59)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES346	(*(volatile uint_io8_t*)0xB1105D5A)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES347	(*(volatile uint_io8_t*)0xB1105D5B)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES348	(*(volatile uint_io8_t*)0xB1105D5C)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES349	(*(volatile uint_io8_t*)0xB1105D5D)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES350	(*(volatile uint_io8_t*)0xB1105D5E)  /*@bfbba@*/
#define IRC0_IRQCES10_IRQCES351	(*(volatile uint_io8_t*)0xB1105D5F)  /*@bfbba@*/

typedef struct stc_irc0_irqces10_field{
    uint_io32_t		u1IRQCES320:1;
    uint_io32_t		u1IRQCES321:1;
    uint_io32_t		u1IRQCES322:1;
    uint_io32_t		u1IRQCES323:1;
    uint_io32_t		u1IRQCES324:1;
    uint_io32_t		u1IRQCES325:1;
    uint_io32_t		u1IRQCES326:1;
    uint_io32_t		u1IRQCES327:1;
    uint_io32_t		u1IRQCES328:1;
    uint_io32_t		u1IRQCES329:1;
    uint_io32_t		u1IRQCES330:1;
    uint_io32_t		u1IRQCES331:1;
    uint_io32_t		u1IRQCES332:1;
    uint_io32_t		u1IRQCES333:1;
    uint_io32_t		u1IRQCES334:1;
    uint_io32_t		u1IRQCES335:1;
    uint_io32_t		u1IRQCES336:1;
    uint_io32_t		u1IRQCES337:1;
    uint_io32_t		u1IRQCES338:1;
    uint_io32_t		u1IRQCES339:1;
    uint_io32_t		u1IRQCES340:1;
    uint_io32_t		u1IRQCES341:1;
    uint_io32_t		u1IRQCES342:1;
    uint_io32_t		u1IRQCES343:1;
    uint_io32_t		u1IRQCES344:1;
    uint_io32_t		u1IRQCES345:1;
    uint_io32_t		u1IRQCES346:1;
    uint_io32_t		u1IRQCES347:1;
    uint_io32_t		u1IRQCES348:1;
    uint_io32_t		u1IRQCES349:1;
    uint_io32_t		u1IRQCES350:1;
    uint_io32_t		u1IRQCES351:1;
}stc_irc0_irqces10_field_t;

typedef union un_irc0_irqces10{
    uint_io32_t		u32Register;
    stc_irc0_irqces10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces10_t;

/* IRQCES11 */
#define IRC0_IRQCES11	(IRC0.unIRQCES11.u32Register)  /*@rg@*/
#define IRC0_IRQCES11_IRQCES352	(*(volatile uint_io8_t*)0xB1105D60)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES353	(*(volatile uint_io8_t*)0xB1105D61)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES354	(*(volatile uint_io8_t*)0xB1105D62)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES355	(*(volatile uint_io8_t*)0xB1105D63)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES356	(*(volatile uint_io8_t*)0xB1105D64)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES357	(*(volatile uint_io8_t*)0xB1105D65)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES358	(*(volatile uint_io8_t*)0xB1105D66)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES359	(*(volatile uint_io8_t*)0xB1105D67)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES360	(*(volatile uint_io8_t*)0xB1105D68)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES361	(*(volatile uint_io8_t*)0xB1105D69)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES362	(*(volatile uint_io8_t*)0xB1105D6A)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES363	(*(volatile uint_io8_t*)0xB1105D6B)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES364	(*(volatile uint_io8_t*)0xB1105D6C)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES365	(*(volatile uint_io8_t*)0xB1105D6D)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES366	(*(volatile uint_io8_t*)0xB1105D6E)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES367	(*(volatile uint_io8_t*)0xB1105D6F)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES368	(*(volatile uint_io8_t*)0xB1105D70)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES369	(*(volatile uint_io8_t*)0xB1105D71)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES370	(*(volatile uint_io8_t*)0xB1105D72)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES371	(*(volatile uint_io8_t*)0xB1105D73)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES372	(*(volatile uint_io8_t*)0xB1105D74)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES373	(*(volatile uint_io8_t*)0xB1105D75)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES374	(*(volatile uint_io8_t*)0xB1105D76)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES375	(*(volatile uint_io8_t*)0xB1105D77)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES376	(*(volatile uint_io8_t*)0xB1105D78)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES377	(*(volatile uint_io8_t*)0xB1105D79)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES378	(*(volatile uint_io8_t*)0xB1105D7A)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES379	(*(volatile uint_io8_t*)0xB1105D7B)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES380	(*(volatile uint_io8_t*)0xB1105D7C)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES381	(*(volatile uint_io8_t*)0xB1105D7D)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES382	(*(volatile uint_io8_t*)0xB1105D7E)  /*@bfbba@*/
#define IRC0_IRQCES11_IRQCES383	(*(volatile uint_io8_t*)0xB1105D7F)  /*@bfbba@*/

typedef struct stc_irc0_irqces11_field{
    uint_io32_t		u1IRQCES352:1;
    uint_io32_t		u1IRQCES353:1;
    uint_io32_t		u1IRQCES354:1;
    uint_io32_t		u1IRQCES355:1;
    uint_io32_t		u1IRQCES356:1;
    uint_io32_t		u1IRQCES357:1;
    uint_io32_t		u1IRQCES358:1;
    uint_io32_t		u1IRQCES359:1;
    uint_io32_t		u1IRQCES360:1;
    uint_io32_t		u1IRQCES361:1;
    uint_io32_t		u1IRQCES362:1;
    uint_io32_t		u1IRQCES363:1;
    uint_io32_t		u1IRQCES364:1;
    uint_io32_t		u1IRQCES365:1;
    uint_io32_t		u1IRQCES366:1;
    uint_io32_t		u1IRQCES367:1;
    uint_io32_t		u1IRQCES368:1;
    uint_io32_t		u1IRQCES369:1;
    uint_io32_t		u1IRQCES370:1;
    uint_io32_t		u1IRQCES371:1;
    uint_io32_t		u1IRQCES372:1;
    uint_io32_t		u1IRQCES373:1;
    uint_io32_t		u1IRQCES374:1;
    uint_io32_t		u1IRQCES375:1;
    uint_io32_t		u1IRQCES376:1;
    uint_io32_t		u1IRQCES377:1;
    uint_io32_t		u1IRQCES378:1;
    uint_io32_t		u1IRQCES379:1;
    uint_io32_t		u1IRQCES380:1;
    uint_io32_t		u1IRQCES381:1;
    uint_io32_t		u1IRQCES382:1;
    uint_io32_t		u1IRQCES383:1;
}stc_irc0_irqces11_field_t;

typedef union un_irc0_irqces11{
    uint_io32_t		u32Register;
    stc_irc0_irqces11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces11_t;

/* IRQCES12 */
#define IRC0_IRQCES12	(IRC0.unIRQCES12.u32Register)  /*@rg@*/
#define IRC0_IRQCES12_IRQCES384	(*(volatile uint_io8_t*)0xB1105D80)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES385	(*(volatile uint_io8_t*)0xB1105D81)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES386	(*(volatile uint_io8_t*)0xB1105D82)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES387	(*(volatile uint_io8_t*)0xB1105D83)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES388	(*(volatile uint_io8_t*)0xB1105D84)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES389	(*(volatile uint_io8_t*)0xB1105D85)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES390	(*(volatile uint_io8_t*)0xB1105D86)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES391	(*(volatile uint_io8_t*)0xB1105D87)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES392	(*(volatile uint_io8_t*)0xB1105D88)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES393	(*(volatile uint_io8_t*)0xB1105D89)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES394	(*(volatile uint_io8_t*)0xB1105D8A)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES395	(*(volatile uint_io8_t*)0xB1105D8B)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES396	(*(volatile uint_io8_t*)0xB1105D8C)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES397	(*(volatile uint_io8_t*)0xB1105D8D)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES398	(*(volatile uint_io8_t*)0xB1105D8E)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES399	(*(volatile uint_io8_t*)0xB1105D8F)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES400	(*(volatile uint_io8_t*)0xB1105D90)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES401	(*(volatile uint_io8_t*)0xB1105D91)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES402	(*(volatile uint_io8_t*)0xB1105D92)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES403	(*(volatile uint_io8_t*)0xB1105D93)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES404	(*(volatile uint_io8_t*)0xB1105D94)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES405	(*(volatile uint_io8_t*)0xB1105D95)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES406	(*(volatile uint_io8_t*)0xB1105D96)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES407	(*(volatile uint_io8_t*)0xB1105D97)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES408	(*(volatile uint_io8_t*)0xB1105D98)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES409	(*(volatile uint_io8_t*)0xB1105D99)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES410	(*(volatile uint_io8_t*)0xB1105D9A)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES411	(*(volatile uint_io8_t*)0xB1105D9B)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES412	(*(volatile uint_io8_t*)0xB1105D9C)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES413	(*(volatile uint_io8_t*)0xB1105D9D)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES414	(*(volatile uint_io8_t*)0xB1105D9E)  /*@bfbba@*/
#define IRC0_IRQCES12_IRQCES415	(*(volatile uint_io8_t*)0xB1105D9F)  /*@bfbba@*/

typedef struct stc_irc0_irqces12_field{
    uint_io32_t		u1IRQCES384:1;
    uint_io32_t		u1IRQCES385:1;
    uint_io32_t		u1IRQCES386:1;
    uint_io32_t		u1IRQCES387:1;
    uint_io32_t		u1IRQCES388:1;
    uint_io32_t		u1IRQCES389:1;
    uint_io32_t		u1IRQCES390:1;
    uint_io32_t		u1IRQCES391:1;
    uint_io32_t		u1IRQCES392:1;
    uint_io32_t		u1IRQCES393:1;
    uint_io32_t		u1IRQCES394:1;
    uint_io32_t		u1IRQCES395:1;
    uint_io32_t		u1IRQCES396:1;
    uint_io32_t		u1IRQCES397:1;
    uint_io32_t		u1IRQCES398:1;
    uint_io32_t		u1IRQCES399:1;
    uint_io32_t		u1IRQCES400:1;
    uint_io32_t		u1IRQCES401:1;
    uint_io32_t		u1IRQCES402:1;
    uint_io32_t		u1IRQCES403:1;
    uint_io32_t		u1IRQCES404:1;
    uint_io32_t		u1IRQCES405:1;
    uint_io32_t		u1IRQCES406:1;
    uint_io32_t		u1IRQCES407:1;
    uint_io32_t		u1IRQCES408:1;
    uint_io32_t		u1IRQCES409:1;
    uint_io32_t		u1IRQCES410:1;
    uint_io32_t		u1IRQCES411:1;
    uint_io32_t		u1IRQCES412:1;
    uint_io32_t		u1IRQCES413:1;
    uint_io32_t		u1IRQCES414:1;
    uint_io32_t		u1IRQCES415:1;
}stc_irc0_irqces12_field_t;

typedef union un_irc0_irqces12{
    uint_io32_t		u32Register;
    stc_irc0_irqces12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces12_t;

/* IRQCES13 */
#define IRC0_IRQCES13	(IRC0.unIRQCES13.u32Register)  /*@rg@*/
#define IRC0_IRQCES13_IRQCES416	(*(volatile uint_io8_t*)0xB1105DA0)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES417	(*(volatile uint_io8_t*)0xB1105DA1)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES418	(*(volatile uint_io8_t*)0xB1105DA2)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES419	(*(volatile uint_io8_t*)0xB1105DA3)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES420	(*(volatile uint_io8_t*)0xB1105DA4)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES421	(*(volatile uint_io8_t*)0xB1105DA5)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES422	(*(volatile uint_io8_t*)0xB1105DA6)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES423	(*(volatile uint_io8_t*)0xB1105DA7)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES424	(*(volatile uint_io8_t*)0xB1105DA8)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES425	(*(volatile uint_io8_t*)0xB1105DA9)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES426	(*(volatile uint_io8_t*)0xB1105DAA)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES427	(*(volatile uint_io8_t*)0xB1105DAB)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES428	(*(volatile uint_io8_t*)0xB1105DAC)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES429	(*(volatile uint_io8_t*)0xB1105DAD)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES430	(*(volatile uint_io8_t*)0xB1105DAE)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES431	(*(volatile uint_io8_t*)0xB1105DAF)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES432	(*(volatile uint_io8_t*)0xB1105DB0)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES433	(*(volatile uint_io8_t*)0xB1105DB1)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES434	(*(volatile uint_io8_t*)0xB1105DB2)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES435	(*(volatile uint_io8_t*)0xB1105DB3)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES436	(*(volatile uint_io8_t*)0xB1105DB4)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES437	(*(volatile uint_io8_t*)0xB1105DB5)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES438	(*(volatile uint_io8_t*)0xB1105DB6)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES439	(*(volatile uint_io8_t*)0xB1105DB7)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES440	(*(volatile uint_io8_t*)0xB1105DB8)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES441	(*(volatile uint_io8_t*)0xB1105DB9)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES442	(*(volatile uint_io8_t*)0xB1105DBA)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES443	(*(volatile uint_io8_t*)0xB1105DBB)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES444	(*(volatile uint_io8_t*)0xB1105DBC)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES445	(*(volatile uint_io8_t*)0xB1105DBD)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES446	(*(volatile uint_io8_t*)0xB1105DBE)  /*@bfbba@*/
#define IRC0_IRQCES13_IRQCES447	(*(volatile uint_io8_t*)0xB1105DBF)  /*@bfbba@*/

typedef struct stc_irc0_irqces13_field{
    uint_io32_t		u1IRQCES416:1;
    uint_io32_t		u1IRQCES417:1;
    uint_io32_t		u1IRQCES418:1;
    uint_io32_t		u1IRQCES419:1;
    uint_io32_t		u1IRQCES420:1;
    uint_io32_t		u1IRQCES421:1;
    uint_io32_t		u1IRQCES422:1;
    uint_io32_t		u1IRQCES423:1;
    uint_io32_t		u1IRQCES424:1;
    uint_io32_t		u1IRQCES425:1;
    uint_io32_t		u1IRQCES426:1;
    uint_io32_t		u1IRQCES427:1;
    uint_io32_t		u1IRQCES428:1;
    uint_io32_t		u1IRQCES429:1;
    uint_io32_t		u1IRQCES430:1;
    uint_io32_t		u1IRQCES431:1;
    uint_io32_t		u1IRQCES432:1;
    uint_io32_t		u1IRQCES433:1;
    uint_io32_t		u1IRQCES434:1;
    uint_io32_t		u1IRQCES435:1;
    uint_io32_t		u1IRQCES436:1;
    uint_io32_t		u1IRQCES437:1;
    uint_io32_t		u1IRQCES438:1;
    uint_io32_t		u1IRQCES439:1;
    uint_io32_t		u1IRQCES440:1;
    uint_io32_t		u1IRQCES441:1;
    uint_io32_t		u1IRQCES442:1;
    uint_io32_t		u1IRQCES443:1;
    uint_io32_t		u1IRQCES444:1;
    uint_io32_t		u1IRQCES445:1;
    uint_io32_t		u1IRQCES446:1;
    uint_io32_t		u1IRQCES447:1;
}stc_irc0_irqces13_field_t;

typedef union un_irc0_irqces13{
    uint_io32_t		u32Register;
    stc_irc0_irqces13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces13_t;

/* IRQCES14 */
#define IRC0_IRQCES14	(IRC0.unIRQCES14.u32Register)  /*@rg@*/
#define IRC0_IRQCES14_IRQCES448	(*(volatile uint_io8_t*)0xB1105DC0)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES449	(*(volatile uint_io8_t*)0xB1105DC1)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES450	(*(volatile uint_io8_t*)0xB1105DC2)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES451	(*(volatile uint_io8_t*)0xB1105DC3)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES452	(*(volatile uint_io8_t*)0xB1105DC4)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES453	(*(volatile uint_io8_t*)0xB1105DC5)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES454	(*(volatile uint_io8_t*)0xB1105DC6)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES455	(*(volatile uint_io8_t*)0xB1105DC7)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES456	(*(volatile uint_io8_t*)0xB1105DC8)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES457	(*(volatile uint_io8_t*)0xB1105DC9)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES458	(*(volatile uint_io8_t*)0xB1105DCA)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES459	(*(volatile uint_io8_t*)0xB1105DCB)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES460	(*(volatile uint_io8_t*)0xB1105DCC)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES461	(*(volatile uint_io8_t*)0xB1105DCD)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES462	(*(volatile uint_io8_t*)0xB1105DCE)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES463	(*(volatile uint_io8_t*)0xB1105DCF)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES464	(*(volatile uint_io8_t*)0xB1105DD0)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES465	(*(volatile uint_io8_t*)0xB1105DD1)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES466	(*(volatile uint_io8_t*)0xB1105DD2)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES467	(*(volatile uint_io8_t*)0xB1105DD3)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES468	(*(volatile uint_io8_t*)0xB1105DD4)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES469	(*(volatile uint_io8_t*)0xB1105DD5)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES470	(*(volatile uint_io8_t*)0xB1105DD6)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES471	(*(volatile uint_io8_t*)0xB1105DD7)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES472	(*(volatile uint_io8_t*)0xB1105DD8)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES473	(*(volatile uint_io8_t*)0xB1105DD9)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES474	(*(volatile uint_io8_t*)0xB1105DDA)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES475	(*(volatile uint_io8_t*)0xB1105DDB)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES476	(*(volatile uint_io8_t*)0xB1105DDC)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES477	(*(volatile uint_io8_t*)0xB1105DDD)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES478	(*(volatile uint_io8_t*)0xB1105DDE)  /*@bfbba@*/
#define IRC0_IRQCES14_IRQCES479	(*(volatile uint_io8_t*)0xB1105DDF)  /*@bfbba@*/

typedef struct stc_irc0_irqces14_field{
    uint_io32_t		u1IRQCES448:1;
    uint_io32_t		u1IRQCES449:1;
    uint_io32_t		u1IRQCES450:1;
    uint_io32_t		u1IRQCES451:1;
    uint_io32_t		u1IRQCES452:1;
    uint_io32_t		u1IRQCES453:1;
    uint_io32_t		u1IRQCES454:1;
    uint_io32_t		u1IRQCES455:1;
    uint_io32_t		u1IRQCES456:1;
    uint_io32_t		u1IRQCES457:1;
    uint_io32_t		u1IRQCES458:1;
    uint_io32_t		u1IRQCES459:1;
    uint_io32_t		u1IRQCES460:1;
    uint_io32_t		u1IRQCES461:1;
    uint_io32_t		u1IRQCES462:1;
    uint_io32_t		u1IRQCES463:1;
    uint_io32_t		u1IRQCES464:1;
    uint_io32_t		u1IRQCES465:1;
    uint_io32_t		u1IRQCES466:1;
    uint_io32_t		u1IRQCES467:1;
    uint_io32_t		u1IRQCES468:1;
    uint_io32_t		u1IRQCES469:1;
    uint_io32_t		u1IRQCES470:1;
    uint_io32_t		u1IRQCES471:1;
    uint_io32_t		u1IRQCES472:1;
    uint_io32_t		u1IRQCES473:1;
    uint_io32_t		u1IRQCES474:1;
    uint_io32_t		u1IRQCES475:1;
    uint_io32_t		u1IRQCES476:1;
    uint_io32_t		u1IRQCES477:1;
    uint_io32_t		u1IRQCES478:1;
    uint_io32_t		u1IRQCES479:1;
}stc_irc0_irqces14_field_t;

typedef union un_irc0_irqces14{
    uint_io32_t		u32Register;
    stc_irc0_irqces14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces14_t;

/* IRQCES15 */
#define IRC0_IRQCES15	(IRC0.unIRQCES15.u32Register)  /*@rg@*/
#define IRC0_IRQCES15_IRQCES480	(*(volatile uint_io8_t*)0xB1105DE0)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES481	(*(volatile uint_io8_t*)0xB1105DE1)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES482	(*(volatile uint_io8_t*)0xB1105DE2)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES483	(*(volatile uint_io8_t*)0xB1105DE3)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES484	(*(volatile uint_io8_t*)0xB1105DE4)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES485	(*(volatile uint_io8_t*)0xB1105DE5)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES486	(*(volatile uint_io8_t*)0xB1105DE6)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES487	(*(volatile uint_io8_t*)0xB1105DE7)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES488	(*(volatile uint_io8_t*)0xB1105DE8)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES489	(*(volatile uint_io8_t*)0xB1105DE9)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES490	(*(volatile uint_io8_t*)0xB1105DEA)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES491	(*(volatile uint_io8_t*)0xB1105DEB)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES492	(*(volatile uint_io8_t*)0xB1105DEC)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES493	(*(volatile uint_io8_t*)0xB1105DED)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES494	(*(volatile uint_io8_t*)0xB1105DEE)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES495	(*(volatile uint_io8_t*)0xB1105DEF)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES496	(*(volatile uint_io8_t*)0xB1105DF0)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES497	(*(volatile uint_io8_t*)0xB1105DF1)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES498	(*(volatile uint_io8_t*)0xB1105DF2)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES499	(*(volatile uint_io8_t*)0xB1105DF3)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES500	(*(volatile uint_io8_t*)0xB1105DF4)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES501	(*(volatile uint_io8_t*)0xB1105DF5)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES502	(*(volatile uint_io8_t*)0xB1105DF6)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES503	(*(volatile uint_io8_t*)0xB1105DF7)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES504	(*(volatile uint_io8_t*)0xB1105DF8)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES505	(*(volatile uint_io8_t*)0xB1105DF9)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES506	(*(volatile uint_io8_t*)0xB1105DFA)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES507	(*(volatile uint_io8_t*)0xB1105DFB)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES508	(*(volatile uint_io8_t*)0xB1105DFC)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES509	(*(volatile uint_io8_t*)0xB1105DFD)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES510	(*(volatile uint_io8_t*)0xB1105DFE)  /*@bfbba@*/
#define IRC0_IRQCES15_IRQCES511	(*(volatile uint_io8_t*)0xB1105DFF)  /*@bfbba@*/

typedef struct stc_irc0_irqces15_field{
    uint_io32_t		u1IRQCES480:1;
    uint_io32_t		u1IRQCES481:1;
    uint_io32_t		u1IRQCES482:1;
    uint_io32_t		u1IRQCES483:1;
    uint_io32_t		u1IRQCES484:1;
    uint_io32_t		u1IRQCES485:1;
    uint_io32_t		u1IRQCES486:1;
    uint_io32_t		u1IRQCES487:1;
    uint_io32_t		u1IRQCES488:1;
    uint_io32_t		u1IRQCES489:1;
    uint_io32_t		u1IRQCES490:1;
    uint_io32_t		u1IRQCES491:1;
    uint_io32_t		u1IRQCES492:1;
    uint_io32_t		u1IRQCES493:1;
    uint_io32_t		u1IRQCES494:1;
    uint_io32_t		u1IRQCES495:1;
    uint_io32_t		u1IRQCES496:1;
    uint_io32_t		u1IRQCES497:1;
    uint_io32_t		u1IRQCES498:1;
    uint_io32_t		u1IRQCES499:1;
    uint_io32_t		u1IRQCES500:1;
    uint_io32_t		u1IRQCES501:1;
    uint_io32_t		u1IRQCES502:1;
    uint_io32_t		u1IRQCES503:1;
    uint_io32_t		u1IRQCES504:1;
    uint_io32_t		u1IRQCES505:1;
    uint_io32_t		u1IRQCES506:1;
    uint_io32_t		u1IRQCES507:1;
    uint_io32_t		u1IRQCES508:1;
    uint_io32_t		u1IRQCES509:1;
    uint_io32_t		u1IRQCES510:1;
    uint_io32_t		u1IRQCES511:1;
}stc_irc0_irqces15_field_t;

typedef union un_irc0_irqces15{
    uint_io32_t		u32Register;
    stc_irc0_irqces15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqces15_t;

/* IRQCEC0 */
#define IRC0_IRQCEC0	(IRC0.unIRQCEC0.u32Register)  /*@rg@*/
#define IRC0_IRQCEC0_IRQCEC0	(*(volatile uint_io8_t*)0xB1105E00)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC1	(*(volatile uint_io8_t*)0xB1105E01)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC2	(*(volatile uint_io8_t*)0xB1105E02)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC3	(*(volatile uint_io8_t*)0xB1105E03)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC4	(*(volatile uint_io8_t*)0xB1105E04)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC5	(*(volatile uint_io8_t*)0xB1105E05)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC6	(*(volatile uint_io8_t*)0xB1105E06)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC7	(*(volatile uint_io8_t*)0xB1105E07)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC8	(*(volatile uint_io8_t*)0xB1105E08)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC9	(*(volatile uint_io8_t*)0xB1105E09)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC10	(*(volatile uint_io8_t*)0xB1105E0A)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC11	(*(volatile uint_io8_t*)0xB1105E0B)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC12	(*(volatile uint_io8_t*)0xB1105E0C)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC13	(*(volatile uint_io8_t*)0xB1105E0D)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC14	(*(volatile uint_io8_t*)0xB1105E0E)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC15	(*(volatile uint_io8_t*)0xB1105E0F)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC16	(*(volatile uint_io8_t*)0xB1105E10)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC17	(*(volatile uint_io8_t*)0xB1105E11)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC18	(*(volatile uint_io8_t*)0xB1105E12)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC19	(*(volatile uint_io8_t*)0xB1105E13)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC20	(*(volatile uint_io8_t*)0xB1105E14)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC21	(*(volatile uint_io8_t*)0xB1105E15)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC22	(*(volatile uint_io8_t*)0xB1105E16)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC23	(*(volatile uint_io8_t*)0xB1105E17)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC24	(*(volatile uint_io8_t*)0xB1105E18)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC25	(*(volatile uint_io8_t*)0xB1105E19)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC26	(*(volatile uint_io8_t*)0xB1105E1A)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC27	(*(volatile uint_io8_t*)0xB1105E1B)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC28	(*(volatile uint_io8_t*)0xB1105E1C)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC29	(*(volatile uint_io8_t*)0xB1105E1D)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC30	(*(volatile uint_io8_t*)0xB1105E1E)  /*@bfbba@*/
#define IRC0_IRQCEC0_IRQCEC31	(*(volatile uint_io8_t*)0xB1105E1F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec0_field{
    uint_io32_t		u1IRQCEC0:1;
    uint_io32_t		u1IRQCEC1:1;
    uint_io32_t		u1IRQCEC2:1;
    uint_io32_t		u1IRQCEC3:1;
    uint_io32_t		u1IRQCEC4:1;
    uint_io32_t		u1IRQCEC5:1;
    uint_io32_t		u1IRQCEC6:1;
    uint_io32_t		u1IRQCEC7:1;
    uint_io32_t		u1IRQCEC8:1;
    uint_io32_t		u1IRQCEC9:1;
    uint_io32_t		u1IRQCEC10:1;
    uint_io32_t		u1IRQCEC11:1;
    uint_io32_t		u1IRQCEC12:1;
    uint_io32_t		u1IRQCEC13:1;
    uint_io32_t		u1IRQCEC14:1;
    uint_io32_t		u1IRQCEC15:1;
    uint_io32_t		u1IRQCEC16:1;
    uint_io32_t		u1IRQCEC17:1;
    uint_io32_t		u1IRQCEC18:1;
    uint_io32_t		u1IRQCEC19:1;
    uint_io32_t		u1IRQCEC20:1;
    uint_io32_t		u1IRQCEC21:1;
    uint_io32_t		u1IRQCEC22:1;
    uint_io32_t		u1IRQCEC23:1;
    uint_io32_t		u1IRQCEC24:1;
    uint_io32_t		u1IRQCEC25:1;
    uint_io32_t		u1IRQCEC26:1;
    uint_io32_t		u1IRQCEC27:1;
    uint_io32_t		u1IRQCEC28:1;
    uint_io32_t		u1IRQCEC29:1;
    uint_io32_t		u1IRQCEC30:1;
    uint_io32_t		u1IRQCEC31:1;
}stc_irc0_irqcec0_field_t;

typedef union un_irc0_irqcec0{
    uint_io32_t		u32Register;
    stc_irc0_irqcec0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec0_t;

/* IRQCEC1 */
#define IRC0_IRQCEC1	(IRC0.unIRQCEC1.u32Register)  /*@rg@*/
#define IRC0_IRQCEC1_IRQCEC32	(*(volatile uint_io8_t*)0xB1105E20)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC33	(*(volatile uint_io8_t*)0xB1105E21)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC34	(*(volatile uint_io8_t*)0xB1105E22)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC35	(*(volatile uint_io8_t*)0xB1105E23)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC36	(*(volatile uint_io8_t*)0xB1105E24)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC37	(*(volatile uint_io8_t*)0xB1105E25)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC38	(*(volatile uint_io8_t*)0xB1105E26)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC39	(*(volatile uint_io8_t*)0xB1105E27)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC40	(*(volatile uint_io8_t*)0xB1105E28)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC41	(*(volatile uint_io8_t*)0xB1105E29)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC42	(*(volatile uint_io8_t*)0xB1105E2A)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC43	(*(volatile uint_io8_t*)0xB1105E2B)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC44	(*(volatile uint_io8_t*)0xB1105E2C)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC45	(*(volatile uint_io8_t*)0xB1105E2D)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC46	(*(volatile uint_io8_t*)0xB1105E2E)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC47	(*(volatile uint_io8_t*)0xB1105E2F)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC48	(*(volatile uint_io8_t*)0xB1105E30)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC49	(*(volatile uint_io8_t*)0xB1105E31)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC50	(*(volatile uint_io8_t*)0xB1105E32)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC51	(*(volatile uint_io8_t*)0xB1105E33)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC52	(*(volatile uint_io8_t*)0xB1105E34)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC53	(*(volatile uint_io8_t*)0xB1105E35)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC54	(*(volatile uint_io8_t*)0xB1105E36)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC55	(*(volatile uint_io8_t*)0xB1105E37)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC56	(*(volatile uint_io8_t*)0xB1105E38)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC57	(*(volatile uint_io8_t*)0xB1105E39)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC58	(*(volatile uint_io8_t*)0xB1105E3A)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC59	(*(volatile uint_io8_t*)0xB1105E3B)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC60	(*(volatile uint_io8_t*)0xB1105E3C)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC61	(*(volatile uint_io8_t*)0xB1105E3D)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC62	(*(volatile uint_io8_t*)0xB1105E3E)  /*@bfbba@*/
#define IRC0_IRQCEC1_IRQCEC63	(*(volatile uint_io8_t*)0xB1105E3F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec1_field{
    uint_io32_t		u1IRQCEC32:1;
    uint_io32_t		u1IRQCEC33:1;
    uint_io32_t		u1IRQCEC34:1;
    uint_io32_t		u1IRQCEC35:1;
    uint_io32_t		u1IRQCEC36:1;
    uint_io32_t		u1IRQCEC37:1;
    uint_io32_t		u1IRQCEC38:1;
    uint_io32_t		u1IRQCEC39:1;
    uint_io32_t		u1IRQCEC40:1;
    uint_io32_t		u1IRQCEC41:1;
    uint_io32_t		u1IRQCEC42:1;
    uint_io32_t		u1IRQCEC43:1;
    uint_io32_t		u1IRQCEC44:1;
    uint_io32_t		u1IRQCEC45:1;
    uint_io32_t		u1IRQCEC46:1;
    uint_io32_t		u1IRQCEC47:1;
    uint_io32_t		u1IRQCEC48:1;
    uint_io32_t		u1IRQCEC49:1;
    uint_io32_t		u1IRQCEC50:1;
    uint_io32_t		u1IRQCEC51:1;
    uint_io32_t		u1IRQCEC52:1;
    uint_io32_t		u1IRQCEC53:1;
    uint_io32_t		u1IRQCEC54:1;
    uint_io32_t		u1IRQCEC55:1;
    uint_io32_t		u1IRQCEC56:1;
    uint_io32_t		u1IRQCEC57:1;
    uint_io32_t		u1IRQCEC58:1;
    uint_io32_t		u1IRQCEC59:1;
    uint_io32_t		u1IRQCEC60:1;
    uint_io32_t		u1IRQCEC61:1;
    uint_io32_t		u1IRQCEC62:1;
    uint_io32_t		u1IRQCEC63:1;
}stc_irc0_irqcec1_field_t;

typedef union un_irc0_irqcec1{
    uint_io32_t		u32Register;
    stc_irc0_irqcec1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec1_t;

/* IRQCEC2 */
#define IRC0_IRQCEC2	(IRC0.unIRQCEC2.u32Register)  /*@rg@*/
#define IRC0_IRQCEC2_IRQCEC64	(*(volatile uint_io8_t*)0xB1105E40)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC65	(*(volatile uint_io8_t*)0xB1105E41)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC66	(*(volatile uint_io8_t*)0xB1105E42)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC67	(*(volatile uint_io8_t*)0xB1105E43)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC68	(*(volatile uint_io8_t*)0xB1105E44)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC69	(*(volatile uint_io8_t*)0xB1105E45)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC70	(*(volatile uint_io8_t*)0xB1105E46)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC71	(*(volatile uint_io8_t*)0xB1105E47)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC72	(*(volatile uint_io8_t*)0xB1105E48)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC73	(*(volatile uint_io8_t*)0xB1105E49)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC74	(*(volatile uint_io8_t*)0xB1105E4A)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC75	(*(volatile uint_io8_t*)0xB1105E4B)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC76	(*(volatile uint_io8_t*)0xB1105E4C)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC77	(*(volatile uint_io8_t*)0xB1105E4D)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC78	(*(volatile uint_io8_t*)0xB1105E4E)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC79	(*(volatile uint_io8_t*)0xB1105E4F)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC80	(*(volatile uint_io8_t*)0xB1105E50)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC81	(*(volatile uint_io8_t*)0xB1105E51)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC82	(*(volatile uint_io8_t*)0xB1105E52)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC83	(*(volatile uint_io8_t*)0xB1105E53)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC84	(*(volatile uint_io8_t*)0xB1105E54)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC85	(*(volatile uint_io8_t*)0xB1105E55)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC86	(*(volatile uint_io8_t*)0xB1105E56)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC87	(*(volatile uint_io8_t*)0xB1105E57)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC88	(*(volatile uint_io8_t*)0xB1105E58)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC89	(*(volatile uint_io8_t*)0xB1105E59)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC90	(*(volatile uint_io8_t*)0xB1105E5A)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC91	(*(volatile uint_io8_t*)0xB1105E5B)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC92	(*(volatile uint_io8_t*)0xB1105E5C)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC93	(*(volatile uint_io8_t*)0xB1105E5D)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC94	(*(volatile uint_io8_t*)0xB1105E5E)  /*@bfbba@*/
#define IRC0_IRQCEC2_IRQCEC95	(*(volatile uint_io8_t*)0xB1105E5F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec2_field{
    uint_io32_t		u1IRQCEC64:1;
    uint_io32_t		u1IRQCEC65:1;
    uint_io32_t		u1IRQCEC66:1;
    uint_io32_t		u1IRQCEC67:1;
    uint_io32_t		u1IRQCEC68:1;
    uint_io32_t		u1IRQCEC69:1;
    uint_io32_t		u1IRQCEC70:1;
    uint_io32_t		u1IRQCEC71:1;
    uint_io32_t		u1IRQCEC72:1;
    uint_io32_t		u1IRQCEC73:1;
    uint_io32_t		u1IRQCEC74:1;
    uint_io32_t		u1IRQCEC75:1;
    uint_io32_t		u1IRQCEC76:1;
    uint_io32_t		u1IRQCEC77:1;
    uint_io32_t		u1IRQCEC78:1;
    uint_io32_t		u1IRQCEC79:1;
    uint_io32_t		u1IRQCEC80:1;
    uint_io32_t		u1IRQCEC81:1;
    uint_io32_t		u1IRQCEC82:1;
    uint_io32_t		u1IRQCEC83:1;
    uint_io32_t		u1IRQCEC84:1;
    uint_io32_t		u1IRQCEC85:1;
    uint_io32_t		u1IRQCEC86:1;
    uint_io32_t		u1IRQCEC87:1;
    uint_io32_t		u1IRQCEC88:1;
    uint_io32_t		u1IRQCEC89:1;
    uint_io32_t		u1IRQCEC90:1;
    uint_io32_t		u1IRQCEC91:1;
    uint_io32_t		u1IRQCEC92:1;
    uint_io32_t		u1IRQCEC93:1;
    uint_io32_t		u1IRQCEC94:1;
    uint_io32_t		u1IRQCEC95:1;
}stc_irc0_irqcec2_field_t;

typedef union un_irc0_irqcec2{
    uint_io32_t		u32Register;
    stc_irc0_irqcec2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec2_t;

/* IRQCEC3 */
#define IRC0_IRQCEC3	(IRC0.unIRQCEC3.u32Register)  /*@rg@*/
#define IRC0_IRQCEC3_IRQCEC96	(*(volatile uint_io8_t*)0xB1105E60)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC97	(*(volatile uint_io8_t*)0xB1105E61)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC98	(*(volatile uint_io8_t*)0xB1105E62)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC99	(*(volatile uint_io8_t*)0xB1105E63)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC100	(*(volatile uint_io8_t*)0xB1105E64)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC101	(*(volatile uint_io8_t*)0xB1105E65)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC102	(*(volatile uint_io8_t*)0xB1105E66)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC103	(*(volatile uint_io8_t*)0xB1105E67)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC104	(*(volatile uint_io8_t*)0xB1105E68)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC105	(*(volatile uint_io8_t*)0xB1105E69)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC106	(*(volatile uint_io8_t*)0xB1105E6A)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC107	(*(volatile uint_io8_t*)0xB1105E6B)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC108	(*(volatile uint_io8_t*)0xB1105E6C)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC109	(*(volatile uint_io8_t*)0xB1105E6D)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC110	(*(volatile uint_io8_t*)0xB1105E6E)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC111	(*(volatile uint_io8_t*)0xB1105E6F)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC112	(*(volatile uint_io8_t*)0xB1105E70)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC113	(*(volatile uint_io8_t*)0xB1105E71)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC114	(*(volatile uint_io8_t*)0xB1105E72)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC115	(*(volatile uint_io8_t*)0xB1105E73)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC116	(*(volatile uint_io8_t*)0xB1105E74)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC117	(*(volatile uint_io8_t*)0xB1105E75)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC118	(*(volatile uint_io8_t*)0xB1105E76)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC119	(*(volatile uint_io8_t*)0xB1105E77)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC120	(*(volatile uint_io8_t*)0xB1105E78)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC121	(*(volatile uint_io8_t*)0xB1105E79)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC122	(*(volatile uint_io8_t*)0xB1105E7A)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC123	(*(volatile uint_io8_t*)0xB1105E7B)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC124	(*(volatile uint_io8_t*)0xB1105E7C)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC125	(*(volatile uint_io8_t*)0xB1105E7D)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC126	(*(volatile uint_io8_t*)0xB1105E7E)  /*@bfbba@*/
#define IRC0_IRQCEC3_IRQCEC127	(*(volatile uint_io8_t*)0xB1105E7F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec3_field{
    uint_io32_t		u1IRQCEC96:1;
    uint_io32_t		u1IRQCEC97:1;
    uint_io32_t		u1IRQCEC98:1;
    uint_io32_t		u1IRQCEC99:1;
    uint_io32_t		u1IRQCEC100:1;
    uint_io32_t		u1IRQCEC101:1;
    uint_io32_t		u1IRQCEC102:1;
    uint_io32_t		u1IRQCEC103:1;
    uint_io32_t		u1IRQCEC104:1;
    uint_io32_t		u1IRQCEC105:1;
    uint_io32_t		u1IRQCEC106:1;
    uint_io32_t		u1IRQCEC107:1;
    uint_io32_t		u1IRQCEC108:1;
    uint_io32_t		u1IRQCEC109:1;
    uint_io32_t		u1IRQCEC110:1;
    uint_io32_t		u1IRQCEC111:1;
    uint_io32_t		u1IRQCEC112:1;
    uint_io32_t		u1IRQCEC113:1;
    uint_io32_t		u1IRQCEC114:1;
    uint_io32_t		u1IRQCEC115:1;
    uint_io32_t		u1IRQCEC116:1;
    uint_io32_t		u1IRQCEC117:1;
    uint_io32_t		u1IRQCEC118:1;
    uint_io32_t		u1IRQCEC119:1;
    uint_io32_t		u1IRQCEC120:1;
    uint_io32_t		u1IRQCEC121:1;
    uint_io32_t		u1IRQCEC122:1;
    uint_io32_t		u1IRQCEC123:1;
    uint_io32_t		u1IRQCEC124:1;
    uint_io32_t		u1IRQCEC125:1;
    uint_io32_t		u1IRQCEC126:1;
    uint_io32_t		u1IRQCEC127:1;
}stc_irc0_irqcec3_field_t;

typedef union un_irc0_irqcec3{
    uint_io32_t		u32Register;
    stc_irc0_irqcec3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec3_t;

/* IRQCEC4 */
#define IRC0_IRQCEC4	(IRC0.unIRQCEC4.u32Register)  /*@rg@*/
#define IRC0_IRQCEC4_IRQCEC128	(*(volatile uint_io8_t*)0xB1105E80)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC129	(*(volatile uint_io8_t*)0xB1105E81)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC130	(*(volatile uint_io8_t*)0xB1105E82)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC131	(*(volatile uint_io8_t*)0xB1105E83)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC132	(*(volatile uint_io8_t*)0xB1105E84)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC133	(*(volatile uint_io8_t*)0xB1105E85)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC134	(*(volatile uint_io8_t*)0xB1105E86)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC135	(*(volatile uint_io8_t*)0xB1105E87)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC136	(*(volatile uint_io8_t*)0xB1105E88)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC137	(*(volatile uint_io8_t*)0xB1105E89)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC138	(*(volatile uint_io8_t*)0xB1105E8A)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC139	(*(volatile uint_io8_t*)0xB1105E8B)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC140	(*(volatile uint_io8_t*)0xB1105E8C)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC141	(*(volatile uint_io8_t*)0xB1105E8D)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC142	(*(volatile uint_io8_t*)0xB1105E8E)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC143	(*(volatile uint_io8_t*)0xB1105E8F)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC144	(*(volatile uint_io8_t*)0xB1105E90)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC145	(*(volatile uint_io8_t*)0xB1105E91)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC146	(*(volatile uint_io8_t*)0xB1105E92)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC147	(*(volatile uint_io8_t*)0xB1105E93)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC148	(*(volatile uint_io8_t*)0xB1105E94)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC149	(*(volatile uint_io8_t*)0xB1105E95)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC150	(*(volatile uint_io8_t*)0xB1105E96)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC151	(*(volatile uint_io8_t*)0xB1105E97)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC152	(*(volatile uint_io8_t*)0xB1105E98)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC153	(*(volatile uint_io8_t*)0xB1105E99)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC154	(*(volatile uint_io8_t*)0xB1105E9A)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC155	(*(volatile uint_io8_t*)0xB1105E9B)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC156	(*(volatile uint_io8_t*)0xB1105E9C)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC157	(*(volatile uint_io8_t*)0xB1105E9D)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC158	(*(volatile uint_io8_t*)0xB1105E9E)  /*@bfbba@*/
#define IRC0_IRQCEC4_IRQCEC159	(*(volatile uint_io8_t*)0xB1105E9F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec4_field{
    uint_io32_t		u1IRQCEC128:1;
    uint_io32_t		u1IRQCEC129:1;
    uint_io32_t		u1IRQCEC130:1;
    uint_io32_t		u1IRQCEC131:1;
    uint_io32_t		u1IRQCEC132:1;
    uint_io32_t		u1IRQCEC133:1;
    uint_io32_t		u1IRQCEC134:1;
    uint_io32_t		u1IRQCEC135:1;
    uint_io32_t		u1IRQCEC136:1;
    uint_io32_t		u1IRQCEC137:1;
    uint_io32_t		u1IRQCEC138:1;
    uint_io32_t		u1IRQCEC139:1;
    uint_io32_t		u1IRQCEC140:1;
    uint_io32_t		u1IRQCEC141:1;
    uint_io32_t		u1IRQCEC142:1;
    uint_io32_t		u1IRQCEC143:1;
    uint_io32_t		u1IRQCEC144:1;
    uint_io32_t		u1IRQCEC145:1;
    uint_io32_t		u1IRQCEC146:1;
    uint_io32_t		u1IRQCEC147:1;
    uint_io32_t		u1IRQCEC148:1;
    uint_io32_t		u1IRQCEC149:1;
    uint_io32_t		u1IRQCEC150:1;
    uint_io32_t		u1IRQCEC151:1;
    uint_io32_t		u1IRQCEC152:1;
    uint_io32_t		u1IRQCEC153:1;
    uint_io32_t		u1IRQCEC154:1;
    uint_io32_t		u1IRQCEC155:1;
    uint_io32_t		u1IRQCEC156:1;
    uint_io32_t		u1IRQCEC157:1;
    uint_io32_t		u1IRQCEC158:1;
    uint_io32_t		u1IRQCEC159:1;
}stc_irc0_irqcec4_field_t;

typedef union un_irc0_irqcec4{
    uint_io32_t		u32Register;
    stc_irc0_irqcec4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec4_t;

/* IRQCEC5 */
#define IRC0_IRQCEC5	(IRC0.unIRQCEC5.u32Register)  /*@rg@*/
#define IRC0_IRQCEC5_IRQCEC160	(*(volatile uint_io8_t*)0xB1105EA0)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC161	(*(volatile uint_io8_t*)0xB1105EA1)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC162	(*(volatile uint_io8_t*)0xB1105EA2)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC163	(*(volatile uint_io8_t*)0xB1105EA3)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC164	(*(volatile uint_io8_t*)0xB1105EA4)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC165	(*(volatile uint_io8_t*)0xB1105EA5)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC166	(*(volatile uint_io8_t*)0xB1105EA6)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC167	(*(volatile uint_io8_t*)0xB1105EA7)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC168	(*(volatile uint_io8_t*)0xB1105EA8)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC169	(*(volatile uint_io8_t*)0xB1105EA9)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC170	(*(volatile uint_io8_t*)0xB1105EAA)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC171	(*(volatile uint_io8_t*)0xB1105EAB)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC172	(*(volatile uint_io8_t*)0xB1105EAC)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC173	(*(volatile uint_io8_t*)0xB1105EAD)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC174	(*(volatile uint_io8_t*)0xB1105EAE)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC175	(*(volatile uint_io8_t*)0xB1105EAF)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC176	(*(volatile uint_io8_t*)0xB1105EB0)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC177	(*(volatile uint_io8_t*)0xB1105EB1)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC178	(*(volatile uint_io8_t*)0xB1105EB2)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC179	(*(volatile uint_io8_t*)0xB1105EB3)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC180	(*(volatile uint_io8_t*)0xB1105EB4)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC181	(*(volatile uint_io8_t*)0xB1105EB5)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC182	(*(volatile uint_io8_t*)0xB1105EB6)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC183	(*(volatile uint_io8_t*)0xB1105EB7)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC184	(*(volatile uint_io8_t*)0xB1105EB8)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC185	(*(volatile uint_io8_t*)0xB1105EB9)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC186	(*(volatile uint_io8_t*)0xB1105EBA)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC187	(*(volatile uint_io8_t*)0xB1105EBB)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC188	(*(volatile uint_io8_t*)0xB1105EBC)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC189	(*(volatile uint_io8_t*)0xB1105EBD)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC190	(*(volatile uint_io8_t*)0xB1105EBE)  /*@bfbba@*/
#define IRC0_IRQCEC5_IRQCEC191	(*(volatile uint_io8_t*)0xB1105EBF)  /*@bfbba@*/

typedef struct stc_irc0_irqcec5_field{
    uint_io32_t		u1IRQCEC160:1;
    uint_io32_t		u1IRQCEC161:1;
    uint_io32_t		u1IRQCEC162:1;
    uint_io32_t		u1IRQCEC163:1;
    uint_io32_t		u1IRQCEC164:1;
    uint_io32_t		u1IRQCEC165:1;
    uint_io32_t		u1IRQCEC166:1;
    uint_io32_t		u1IRQCEC167:1;
    uint_io32_t		u1IRQCEC168:1;
    uint_io32_t		u1IRQCEC169:1;
    uint_io32_t		u1IRQCEC170:1;
    uint_io32_t		u1IRQCEC171:1;
    uint_io32_t		u1IRQCEC172:1;
    uint_io32_t		u1IRQCEC173:1;
    uint_io32_t		u1IRQCEC174:1;
    uint_io32_t		u1IRQCEC175:1;
    uint_io32_t		u1IRQCEC176:1;
    uint_io32_t		u1IRQCEC177:1;
    uint_io32_t		u1IRQCEC178:1;
    uint_io32_t		u1IRQCEC179:1;
    uint_io32_t		u1IRQCEC180:1;
    uint_io32_t		u1IRQCEC181:1;
    uint_io32_t		u1IRQCEC182:1;
    uint_io32_t		u1IRQCEC183:1;
    uint_io32_t		u1IRQCEC184:1;
    uint_io32_t		u1IRQCEC185:1;
    uint_io32_t		u1IRQCEC186:1;
    uint_io32_t		u1IRQCEC187:1;
    uint_io32_t		u1IRQCEC188:1;
    uint_io32_t		u1IRQCEC189:1;
    uint_io32_t		u1IRQCEC190:1;
    uint_io32_t		u1IRQCEC191:1;
}stc_irc0_irqcec5_field_t;

typedef union un_irc0_irqcec5{
    uint_io32_t		u32Register;
    stc_irc0_irqcec5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec5_t;

/* IRQCEC6 */
#define IRC0_IRQCEC6	(IRC0.unIRQCEC6.u32Register)  /*@rg@*/
#define IRC0_IRQCEC6_IRQCEC192	(*(volatile uint_io8_t*)0xB1105EC0)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC193	(*(volatile uint_io8_t*)0xB1105EC1)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC194	(*(volatile uint_io8_t*)0xB1105EC2)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC195	(*(volatile uint_io8_t*)0xB1105EC3)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC196	(*(volatile uint_io8_t*)0xB1105EC4)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC197	(*(volatile uint_io8_t*)0xB1105EC5)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC198	(*(volatile uint_io8_t*)0xB1105EC6)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC199	(*(volatile uint_io8_t*)0xB1105EC7)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC200	(*(volatile uint_io8_t*)0xB1105EC8)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC201	(*(volatile uint_io8_t*)0xB1105EC9)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC202	(*(volatile uint_io8_t*)0xB1105ECA)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC203	(*(volatile uint_io8_t*)0xB1105ECB)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC204	(*(volatile uint_io8_t*)0xB1105ECC)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC205	(*(volatile uint_io8_t*)0xB1105ECD)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC206	(*(volatile uint_io8_t*)0xB1105ECE)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC207	(*(volatile uint_io8_t*)0xB1105ECF)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC208	(*(volatile uint_io8_t*)0xB1105ED0)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC209	(*(volatile uint_io8_t*)0xB1105ED1)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC210	(*(volatile uint_io8_t*)0xB1105ED2)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC211	(*(volatile uint_io8_t*)0xB1105ED3)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC212	(*(volatile uint_io8_t*)0xB1105ED4)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC213	(*(volatile uint_io8_t*)0xB1105ED5)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC214	(*(volatile uint_io8_t*)0xB1105ED6)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC215	(*(volatile uint_io8_t*)0xB1105ED7)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC216	(*(volatile uint_io8_t*)0xB1105ED8)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC217	(*(volatile uint_io8_t*)0xB1105ED9)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC218	(*(volatile uint_io8_t*)0xB1105EDA)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC219	(*(volatile uint_io8_t*)0xB1105EDB)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC220	(*(volatile uint_io8_t*)0xB1105EDC)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC221	(*(volatile uint_io8_t*)0xB1105EDD)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC222	(*(volatile uint_io8_t*)0xB1105EDE)  /*@bfbba@*/
#define IRC0_IRQCEC6_IRQCEC223	(*(volatile uint_io8_t*)0xB1105EDF)  /*@bfbba@*/

typedef struct stc_irc0_irqcec6_field{
    uint_io32_t		u1IRQCEC192:1;
    uint_io32_t		u1IRQCEC193:1;
    uint_io32_t		u1IRQCEC194:1;
    uint_io32_t		u1IRQCEC195:1;
    uint_io32_t		u1IRQCEC196:1;
    uint_io32_t		u1IRQCEC197:1;
    uint_io32_t		u1IRQCEC198:1;
    uint_io32_t		u1IRQCEC199:1;
    uint_io32_t		u1IRQCEC200:1;
    uint_io32_t		u1IRQCEC201:1;
    uint_io32_t		u1IRQCEC202:1;
    uint_io32_t		u1IRQCEC203:1;
    uint_io32_t		u1IRQCEC204:1;
    uint_io32_t		u1IRQCEC205:1;
    uint_io32_t		u1IRQCEC206:1;
    uint_io32_t		u1IRQCEC207:1;
    uint_io32_t		u1IRQCEC208:1;
    uint_io32_t		u1IRQCEC209:1;
    uint_io32_t		u1IRQCEC210:1;
    uint_io32_t		u1IRQCEC211:1;
    uint_io32_t		u1IRQCEC212:1;
    uint_io32_t		u1IRQCEC213:1;
    uint_io32_t		u1IRQCEC214:1;
    uint_io32_t		u1IRQCEC215:1;
    uint_io32_t		u1IRQCEC216:1;
    uint_io32_t		u1IRQCEC217:1;
    uint_io32_t		u1IRQCEC218:1;
    uint_io32_t		u1IRQCEC219:1;
    uint_io32_t		u1IRQCEC220:1;
    uint_io32_t		u1IRQCEC221:1;
    uint_io32_t		u1IRQCEC222:1;
    uint_io32_t		u1IRQCEC223:1;
}stc_irc0_irqcec6_field_t;

typedef union un_irc0_irqcec6{
    uint_io32_t		u32Register;
    stc_irc0_irqcec6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec6_t;

/* IRQCEC7 */
#define IRC0_IRQCEC7	(IRC0.unIRQCEC7.u32Register)  /*@rg@*/
#define IRC0_IRQCEC7_IRQCEC224	(*(volatile uint_io8_t*)0xB1105EE0)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC225	(*(volatile uint_io8_t*)0xB1105EE1)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC226	(*(volatile uint_io8_t*)0xB1105EE2)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC227	(*(volatile uint_io8_t*)0xB1105EE3)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC228	(*(volatile uint_io8_t*)0xB1105EE4)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC229	(*(volatile uint_io8_t*)0xB1105EE5)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC230	(*(volatile uint_io8_t*)0xB1105EE6)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC231	(*(volatile uint_io8_t*)0xB1105EE7)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC232	(*(volatile uint_io8_t*)0xB1105EE8)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC233	(*(volatile uint_io8_t*)0xB1105EE9)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC234	(*(volatile uint_io8_t*)0xB1105EEA)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC235	(*(volatile uint_io8_t*)0xB1105EEB)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC236	(*(volatile uint_io8_t*)0xB1105EEC)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC237	(*(volatile uint_io8_t*)0xB1105EED)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC238	(*(volatile uint_io8_t*)0xB1105EEE)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC239	(*(volatile uint_io8_t*)0xB1105EEF)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC240	(*(volatile uint_io8_t*)0xB1105EF0)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC241	(*(volatile uint_io8_t*)0xB1105EF1)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC242	(*(volatile uint_io8_t*)0xB1105EF2)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC243	(*(volatile uint_io8_t*)0xB1105EF3)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC244	(*(volatile uint_io8_t*)0xB1105EF4)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC245	(*(volatile uint_io8_t*)0xB1105EF5)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC246	(*(volatile uint_io8_t*)0xB1105EF6)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC247	(*(volatile uint_io8_t*)0xB1105EF7)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC248	(*(volatile uint_io8_t*)0xB1105EF8)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC249	(*(volatile uint_io8_t*)0xB1105EF9)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC250	(*(volatile uint_io8_t*)0xB1105EFA)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC251	(*(volatile uint_io8_t*)0xB1105EFB)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC252	(*(volatile uint_io8_t*)0xB1105EFC)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC253	(*(volatile uint_io8_t*)0xB1105EFD)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC254	(*(volatile uint_io8_t*)0xB1105EFE)  /*@bfbba@*/
#define IRC0_IRQCEC7_IRQCEC255	(*(volatile uint_io8_t*)0xB1105EFF)  /*@bfbba@*/

typedef struct stc_irc0_irqcec7_field{
    uint_io32_t		u1IRQCEC224:1;
    uint_io32_t		u1IRQCEC225:1;
    uint_io32_t		u1IRQCEC226:1;
    uint_io32_t		u1IRQCEC227:1;
    uint_io32_t		u1IRQCEC228:1;
    uint_io32_t		u1IRQCEC229:1;
    uint_io32_t		u1IRQCEC230:1;
    uint_io32_t		u1IRQCEC231:1;
    uint_io32_t		u1IRQCEC232:1;
    uint_io32_t		u1IRQCEC233:1;
    uint_io32_t		u1IRQCEC234:1;
    uint_io32_t		u1IRQCEC235:1;
    uint_io32_t		u1IRQCEC236:1;
    uint_io32_t		u1IRQCEC237:1;
    uint_io32_t		u1IRQCEC238:1;
    uint_io32_t		u1IRQCEC239:1;
    uint_io32_t		u1IRQCEC240:1;
    uint_io32_t		u1IRQCEC241:1;
    uint_io32_t		u1IRQCEC242:1;
    uint_io32_t		u1IRQCEC243:1;
    uint_io32_t		u1IRQCEC244:1;
    uint_io32_t		u1IRQCEC245:1;
    uint_io32_t		u1IRQCEC246:1;
    uint_io32_t		u1IRQCEC247:1;
    uint_io32_t		u1IRQCEC248:1;
    uint_io32_t		u1IRQCEC249:1;
    uint_io32_t		u1IRQCEC250:1;
    uint_io32_t		u1IRQCEC251:1;
    uint_io32_t		u1IRQCEC252:1;
    uint_io32_t		u1IRQCEC253:1;
    uint_io32_t		u1IRQCEC254:1;
    uint_io32_t		u1IRQCEC255:1;
}stc_irc0_irqcec7_field_t;

typedef union un_irc0_irqcec7{
    uint_io32_t		u32Register;
    stc_irc0_irqcec7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec7_t;

/* IRQCEC8 */
#define IRC0_IRQCEC8	(IRC0.unIRQCEC8.u32Register)  /*@rg@*/
#define IRC0_IRQCEC8_IRQCEC256	(*(volatile uint_io8_t*)0xB1105F00)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC257	(*(volatile uint_io8_t*)0xB1105F01)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC258	(*(volatile uint_io8_t*)0xB1105F02)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC259	(*(volatile uint_io8_t*)0xB1105F03)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC260	(*(volatile uint_io8_t*)0xB1105F04)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC261	(*(volatile uint_io8_t*)0xB1105F05)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC262	(*(volatile uint_io8_t*)0xB1105F06)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC263	(*(volatile uint_io8_t*)0xB1105F07)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC264	(*(volatile uint_io8_t*)0xB1105F08)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC265	(*(volatile uint_io8_t*)0xB1105F09)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC266	(*(volatile uint_io8_t*)0xB1105F0A)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC267	(*(volatile uint_io8_t*)0xB1105F0B)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC268	(*(volatile uint_io8_t*)0xB1105F0C)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC269	(*(volatile uint_io8_t*)0xB1105F0D)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC270	(*(volatile uint_io8_t*)0xB1105F0E)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC271	(*(volatile uint_io8_t*)0xB1105F0F)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC272	(*(volatile uint_io8_t*)0xB1105F10)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC273	(*(volatile uint_io8_t*)0xB1105F11)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC274	(*(volatile uint_io8_t*)0xB1105F12)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC275	(*(volatile uint_io8_t*)0xB1105F13)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC276	(*(volatile uint_io8_t*)0xB1105F14)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC277	(*(volatile uint_io8_t*)0xB1105F15)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC278	(*(volatile uint_io8_t*)0xB1105F16)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC279	(*(volatile uint_io8_t*)0xB1105F17)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC280	(*(volatile uint_io8_t*)0xB1105F18)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC281	(*(volatile uint_io8_t*)0xB1105F19)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC282	(*(volatile uint_io8_t*)0xB1105F1A)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC283	(*(volatile uint_io8_t*)0xB1105F1B)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC284	(*(volatile uint_io8_t*)0xB1105F1C)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC285	(*(volatile uint_io8_t*)0xB1105F1D)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC286	(*(volatile uint_io8_t*)0xB1105F1E)  /*@bfbba@*/
#define IRC0_IRQCEC8_IRQCEC287	(*(volatile uint_io8_t*)0xB1105F1F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec8_field{
    uint_io32_t		u1IRQCEC256:1;
    uint_io32_t		u1IRQCEC257:1;
    uint_io32_t		u1IRQCEC258:1;
    uint_io32_t		u1IRQCEC259:1;
    uint_io32_t		u1IRQCEC260:1;
    uint_io32_t		u1IRQCEC261:1;
    uint_io32_t		u1IRQCEC262:1;
    uint_io32_t		u1IRQCEC263:1;
    uint_io32_t		u1IRQCEC264:1;
    uint_io32_t		u1IRQCEC265:1;
    uint_io32_t		u1IRQCEC266:1;
    uint_io32_t		u1IRQCEC267:1;
    uint_io32_t		u1IRQCEC268:1;
    uint_io32_t		u1IRQCEC269:1;
    uint_io32_t		u1IRQCEC270:1;
    uint_io32_t		u1IRQCEC271:1;
    uint_io32_t		u1IRQCEC272:1;
    uint_io32_t		u1IRQCEC273:1;
    uint_io32_t		u1IRQCEC274:1;
    uint_io32_t		u1IRQCEC275:1;
    uint_io32_t		u1IRQCEC276:1;
    uint_io32_t		u1IRQCEC277:1;
    uint_io32_t		u1IRQCEC278:1;
    uint_io32_t		u1IRQCEC279:1;
    uint_io32_t		u1IRQCEC280:1;
    uint_io32_t		u1IRQCEC281:1;
    uint_io32_t		u1IRQCEC282:1;
    uint_io32_t		u1IRQCEC283:1;
    uint_io32_t		u1IRQCEC284:1;
    uint_io32_t		u1IRQCEC285:1;
    uint_io32_t		u1IRQCEC286:1;
    uint_io32_t		u1IRQCEC287:1;
}stc_irc0_irqcec8_field_t;

typedef union un_irc0_irqcec8{
    uint_io32_t		u32Register;
    stc_irc0_irqcec8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec8_t;

/* IRQCEC9 */
#define IRC0_IRQCEC9	(IRC0.unIRQCEC9.u32Register)  /*@rg@*/
#define IRC0_IRQCEC9_IRQCEC288	(*(volatile uint_io8_t*)0xB1105F20)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC289	(*(volatile uint_io8_t*)0xB1105F21)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC290	(*(volatile uint_io8_t*)0xB1105F22)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC291	(*(volatile uint_io8_t*)0xB1105F23)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC292	(*(volatile uint_io8_t*)0xB1105F24)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC293	(*(volatile uint_io8_t*)0xB1105F25)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC294	(*(volatile uint_io8_t*)0xB1105F26)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC295	(*(volatile uint_io8_t*)0xB1105F27)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC296	(*(volatile uint_io8_t*)0xB1105F28)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC297	(*(volatile uint_io8_t*)0xB1105F29)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC298	(*(volatile uint_io8_t*)0xB1105F2A)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC299	(*(volatile uint_io8_t*)0xB1105F2B)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC300	(*(volatile uint_io8_t*)0xB1105F2C)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC301	(*(volatile uint_io8_t*)0xB1105F2D)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC302	(*(volatile uint_io8_t*)0xB1105F2E)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC303	(*(volatile uint_io8_t*)0xB1105F2F)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC304	(*(volatile uint_io8_t*)0xB1105F30)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC305	(*(volatile uint_io8_t*)0xB1105F31)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC306	(*(volatile uint_io8_t*)0xB1105F32)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC307	(*(volatile uint_io8_t*)0xB1105F33)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC308	(*(volatile uint_io8_t*)0xB1105F34)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC309	(*(volatile uint_io8_t*)0xB1105F35)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC310	(*(volatile uint_io8_t*)0xB1105F36)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC311	(*(volatile uint_io8_t*)0xB1105F37)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC312	(*(volatile uint_io8_t*)0xB1105F38)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC313	(*(volatile uint_io8_t*)0xB1105F39)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC314	(*(volatile uint_io8_t*)0xB1105F3A)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC315	(*(volatile uint_io8_t*)0xB1105F3B)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC316	(*(volatile uint_io8_t*)0xB1105F3C)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC317	(*(volatile uint_io8_t*)0xB1105F3D)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC318	(*(volatile uint_io8_t*)0xB1105F3E)  /*@bfbba@*/
#define IRC0_IRQCEC9_IRQCEC319	(*(volatile uint_io8_t*)0xB1105F3F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec9_field{
    uint_io32_t		u1IRQCEC288:1;
    uint_io32_t		u1IRQCEC289:1;
    uint_io32_t		u1IRQCEC290:1;
    uint_io32_t		u1IRQCEC291:1;
    uint_io32_t		u1IRQCEC292:1;
    uint_io32_t		u1IRQCEC293:1;
    uint_io32_t		u1IRQCEC294:1;
    uint_io32_t		u1IRQCEC295:1;
    uint_io32_t		u1IRQCEC296:1;
    uint_io32_t		u1IRQCEC297:1;
    uint_io32_t		u1IRQCEC298:1;
    uint_io32_t		u1IRQCEC299:1;
    uint_io32_t		u1IRQCEC300:1;
    uint_io32_t		u1IRQCEC301:1;
    uint_io32_t		u1IRQCEC302:1;
    uint_io32_t		u1IRQCEC303:1;
    uint_io32_t		u1IRQCEC304:1;
    uint_io32_t		u1IRQCEC305:1;
    uint_io32_t		u1IRQCEC306:1;
    uint_io32_t		u1IRQCEC307:1;
    uint_io32_t		u1IRQCEC308:1;
    uint_io32_t		u1IRQCEC309:1;
    uint_io32_t		u1IRQCEC310:1;
    uint_io32_t		u1IRQCEC311:1;
    uint_io32_t		u1IRQCEC312:1;
    uint_io32_t		u1IRQCEC313:1;
    uint_io32_t		u1IRQCEC314:1;
    uint_io32_t		u1IRQCEC315:1;
    uint_io32_t		u1IRQCEC316:1;
    uint_io32_t		u1IRQCEC317:1;
    uint_io32_t		u1IRQCEC318:1;
    uint_io32_t		u1IRQCEC319:1;
}stc_irc0_irqcec9_field_t;

typedef union un_irc0_irqcec9{
    uint_io32_t		u32Register;
    stc_irc0_irqcec9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec9_t;

/* IRQCEC10 */
#define IRC0_IRQCEC10	(IRC0.unIRQCEC10.u32Register)  /*@rg@*/
#define IRC0_IRQCEC10_IRQCEC320	(*(volatile uint_io8_t*)0xB1105F40)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC321	(*(volatile uint_io8_t*)0xB1105F41)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC322	(*(volatile uint_io8_t*)0xB1105F42)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC323	(*(volatile uint_io8_t*)0xB1105F43)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC324	(*(volatile uint_io8_t*)0xB1105F44)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC325	(*(volatile uint_io8_t*)0xB1105F45)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC326	(*(volatile uint_io8_t*)0xB1105F46)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC327	(*(volatile uint_io8_t*)0xB1105F47)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC328	(*(volatile uint_io8_t*)0xB1105F48)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC329	(*(volatile uint_io8_t*)0xB1105F49)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC330	(*(volatile uint_io8_t*)0xB1105F4A)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC331	(*(volatile uint_io8_t*)0xB1105F4B)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC332	(*(volatile uint_io8_t*)0xB1105F4C)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC333	(*(volatile uint_io8_t*)0xB1105F4D)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC334	(*(volatile uint_io8_t*)0xB1105F4E)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC335	(*(volatile uint_io8_t*)0xB1105F4F)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC336	(*(volatile uint_io8_t*)0xB1105F50)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC337	(*(volatile uint_io8_t*)0xB1105F51)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC338	(*(volatile uint_io8_t*)0xB1105F52)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC339	(*(volatile uint_io8_t*)0xB1105F53)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC340	(*(volatile uint_io8_t*)0xB1105F54)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC341	(*(volatile uint_io8_t*)0xB1105F55)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC342	(*(volatile uint_io8_t*)0xB1105F56)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC343	(*(volatile uint_io8_t*)0xB1105F57)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC344	(*(volatile uint_io8_t*)0xB1105F58)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC345	(*(volatile uint_io8_t*)0xB1105F59)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC346	(*(volatile uint_io8_t*)0xB1105F5A)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC347	(*(volatile uint_io8_t*)0xB1105F5B)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC348	(*(volatile uint_io8_t*)0xB1105F5C)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC349	(*(volatile uint_io8_t*)0xB1105F5D)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC350	(*(volatile uint_io8_t*)0xB1105F5E)  /*@bfbba@*/
#define IRC0_IRQCEC10_IRQCEC351	(*(volatile uint_io8_t*)0xB1105F5F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec10_field{
    uint_io32_t		u1IRQCEC320:1;
    uint_io32_t		u1IRQCEC321:1;
    uint_io32_t		u1IRQCEC322:1;
    uint_io32_t		u1IRQCEC323:1;
    uint_io32_t		u1IRQCEC324:1;
    uint_io32_t		u1IRQCEC325:1;
    uint_io32_t		u1IRQCEC326:1;
    uint_io32_t		u1IRQCEC327:1;
    uint_io32_t		u1IRQCEC328:1;
    uint_io32_t		u1IRQCEC329:1;
    uint_io32_t		u1IRQCEC330:1;
    uint_io32_t		u1IRQCEC331:1;
    uint_io32_t		u1IRQCEC332:1;
    uint_io32_t		u1IRQCEC333:1;
    uint_io32_t		u1IRQCEC334:1;
    uint_io32_t		u1IRQCEC335:1;
    uint_io32_t		u1IRQCEC336:1;
    uint_io32_t		u1IRQCEC337:1;
    uint_io32_t		u1IRQCEC338:1;
    uint_io32_t		u1IRQCEC339:1;
    uint_io32_t		u1IRQCEC340:1;
    uint_io32_t		u1IRQCEC341:1;
    uint_io32_t		u1IRQCEC342:1;
    uint_io32_t		u1IRQCEC343:1;
    uint_io32_t		u1IRQCEC344:1;
    uint_io32_t		u1IRQCEC345:1;
    uint_io32_t		u1IRQCEC346:1;
    uint_io32_t		u1IRQCEC347:1;
    uint_io32_t		u1IRQCEC348:1;
    uint_io32_t		u1IRQCEC349:1;
    uint_io32_t		u1IRQCEC350:1;
    uint_io32_t		u1IRQCEC351:1;
}stc_irc0_irqcec10_field_t;

typedef union un_irc0_irqcec10{
    uint_io32_t		u32Register;
    stc_irc0_irqcec10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec10_t;

/* IRQCEC11 */
#define IRC0_IRQCEC11	(IRC0.unIRQCEC11.u32Register)  /*@rg@*/
#define IRC0_IRQCEC11_IRQCEC352	(*(volatile uint_io8_t*)0xB1105F60)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC353	(*(volatile uint_io8_t*)0xB1105F61)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC354	(*(volatile uint_io8_t*)0xB1105F62)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC355	(*(volatile uint_io8_t*)0xB1105F63)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC356	(*(volatile uint_io8_t*)0xB1105F64)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC357	(*(volatile uint_io8_t*)0xB1105F65)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC358	(*(volatile uint_io8_t*)0xB1105F66)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC359	(*(volatile uint_io8_t*)0xB1105F67)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC360	(*(volatile uint_io8_t*)0xB1105F68)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC361	(*(volatile uint_io8_t*)0xB1105F69)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC362	(*(volatile uint_io8_t*)0xB1105F6A)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC363	(*(volatile uint_io8_t*)0xB1105F6B)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC364	(*(volatile uint_io8_t*)0xB1105F6C)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC365	(*(volatile uint_io8_t*)0xB1105F6D)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC366	(*(volatile uint_io8_t*)0xB1105F6E)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC367	(*(volatile uint_io8_t*)0xB1105F6F)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC368	(*(volatile uint_io8_t*)0xB1105F70)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC369	(*(volatile uint_io8_t*)0xB1105F71)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC370	(*(volatile uint_io8_t*)0xB1105F72)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC371	(*(volatile uint_io8_t*)0xB1105F73)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC372	(*(volatile uint_io8_t*)0xB1105F74)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC373	(*(volatile uint_io8_t*)0xB1105F75)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC374	(*(volatile uint_io8_t*)0xB1105F76)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC375	(*(volatile uint_io8_t*)0xB1105F77)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC376	(*(volatile uint_io8_t*)0xB1105F78)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC377	(*(volatile uint_io8_t*)0xB1105F79)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC378	(*(volatile uint_io8_t*)0xB1105F7A)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC379	(*(volatile uint_io8_t*)0xB1105F7B)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC380	(*(volatile uint_io8_t*)0xB1105F7C)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC381	(*(volatile uint_io8_t*)0xB1105F7D)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC382	(*(volatile uint_io8_t*)0xB1105F7E)  /*@bfbba@*/
#define IRC0_IRQCEC11_IRQCEC383	(*(volatile uint_io8_t*)0xB1105F7F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec11_field{
    uint_io32_t		u1IRQCEC352:1;
    uint_io32_t		u1IRQCEC353:1;
    uint_io32_t		u1IRQCEC354:1;
    uint_io32_t		u1IRQCEC355:1;
    uint_io32_t		u1IRQCEC356:1;
    uint_io32_t		u1IRQCEC357:1;
    uint_io32_t		u1IRQCEC358:1;
    uint_io32_t		u1IRQCEC359:1;
    uint_io32_t		u1IRQCEC360:1;
    uint_io32_t		u1IRQCEC361:1;
    uint_io32_t		u1IRQCEC362:1;
    uint_io32_t		u1IRQCEC363:1;
    uint_io32_t		u1IRQCEC364:1;
    uint_io32_t		u1IRQCEC365:1;
    uint_io32_t		u1IRQCEC366:1;
    uint_io32_t		u1IRQCEC367:1;
    uint_io32_t		u1IRQCEC368:1;
    uint_io32_t		u1IRQCEC369:1;
    uint_io32_t		u1IRQCEC370:1;
    uint_io32_t		u1IRQCEC371:1;
    uint_io32_t		u1IRQCEC372:1;
    uint_io32_t		u1IRQCEC373:1;
    uint_io32_t		u1IRQCEC374:1;
    uint_io32_t		u1IRQCEC375:1;
    uint_io32_t		u1IRQCEC376:1;
    uint_io32_t		u1IRQCEC377:1;
    uint_io32_t		u1IRQCEC378:1;
    uint_io32_t		u1IRQCEC379:1;
    uint_io32_t		u1IRQCEC380:1;
    uint_io32_t		u1IRQCEC381:1;
    uint_io32_t		u1IRQCEC382:1;
    uint_io32_t		u1IRQCEC383:1;
}stc_irc0_irqcec11_field_t;

typedef union un_irc0_irqcec11{
    uint_io32_t		u32Register;
    stc_irc0_irqcec11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec11_t;

/* IRQCEC12 */
#define IRC0_IRQCEC12	(IRC0.unIRQCEC12.u32Register)  /*@rg@*/
#define IRC0_IRQCEC12_IRQCEC384	(*(volatile uint_io8_t*)0xB1105F80)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC385	(*(volatile uint_io8_t*)0xB1105F81)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC386	(*(volatile uint_io8_t*)0xB1105F82)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC387	(*(volatile uint_io8_t*)0xB1105F83)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC388	(*(volatile uint_io8_t*)0xB1105F84)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC389	(*(volatile uint_io8_t*)0xB1105F85)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC390	(*(volatile uint_io8_t*)0xB1105F86)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC391	(*(volatile uint_io8_t*)0xB1105F87)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC392	(*(volatile uint_io8_t*)0xB1105F88)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC393	(*(volatile uint_io8_t*)0xB1105F89)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC394	(*(volatile uint_io8_t*)0xB1105F8A)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC395	(*(volatile uint_io8_t*)0xB1105F8B)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC396	(*(volatile uint_io8_t*)0xB1105F8C)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC397	(*(volatile uint_io8_t*)0xB1105F8D)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC398	(*(volatile uint_io8_t*)0xB1105F8E)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC399	(*(volatile uint_io8_t*)0xB1105F8F)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC400	(*(volatile uint_io8_t*)0xB1105F90)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC401	(*(volatile uint_io8_t*)0xB1105F91)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC402	(*(volatile uint_io8_t*)0xB1105F92)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC403	(*(volatile uint_io8_t*)0xB1105F93)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC404	(*(volatile uint_io8_t*)0xB1105F94)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC405	(*(volatile uint_io8_t*)0xB1105F95)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC406	(*(volatile uint_io8_t*)0xB1105F96)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC407	(*(volatile uint_io8_t*)0xB1105F97)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC408	(*(volatile uint_io8_t*)0xB1105F98)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC409	(*(volatile uint_io8_t*)0xB1105F99)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC410	(*(volatile uint_io8_t*)0xB1105F9A)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC411	(*(volatile uint_io8_t*)0xB1105F9B)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC412	(*(volatile uint_io8_t*)0xB1105F9C)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC413	(*(volatile uint_io8_t*)0xB1105F9D)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC414	(*(volatile uint_io8_t*)0xB1105F9E)  /*@bfbba@*/
#define IRC0_IRQCEC12_IRQCEC415	(*(volatile uint_io8_t*)0xB1105F9F)  /*@bfbba@*/

typedef struct stc_irc0_irqcec12_field{
    uint_io32_t		u1IRQCEC384:1;
    uint_io32_t		u1IRQCEC385:1;
    uint_io32_t		u1IRQCEC386:1;
    uint_io32_t		u1IRQCEC387:1;
    uint_io32_t		u1IRQCEC388:1;
    uint_io32_t		u1IRQCEC389:1;
    uint_io32_t		u1IRQCEC390:1;
    uint_io32_t		u1IRQCEC391:1;
    uint_io32_t		u1IRQCEC392:1;
    uint_io32_t		u1IRQCEC393:1;
    uint_io32_t		u1IRQCEC394:1;
    uint_io32_t		u1IRQCEC395:1;
    uint_io32_t		u1IRQCEC396:1;
    uint_io32_t		u1IRQCEC397:1;
    uint_io32_t		u1IRQCEC398:1;
    uint_io32_t		u1IRQCEC399:1;
    uint_io32_t		u1IRQCEC400:1;
    uint_io32_t		u1IRQCEC401:1;
    uint_io32_t		u1IRQCEC402:1;
    uint_io32_t		u1IRQCEC403:1;
    uint_io32_t		u1IRQCEC404:1;
    uint_io32_t		u1IRQCEC405:1;
    uint_io32_t		u1IRQCEC406:1;
    uint_io32_t		u1IRQCEC407:1;
    uint_io32_t		u1IRQCEC408:1;
    uint_io32_t		u1IRQCEC409:1;
    uint_io32_t		u1IRQCEC410:1;
    uint_io32_t		u1IRQCEC411:1;
    uint_io32_t		u1IRQCEC412:1;
    uint_io32_t		u1IRQCEC413:1;
    uint_io32_t		u1IRQCEC414:1;
    uint_io32_t		u1IRQCEC415:1;
}stc_irc0_irqcec12_field_t;

typedef union un_irc0_irqcec12{
    uint_io32_t		u32Register;
    stc_irc0_irqcec12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec12_t;

/* IRQCEC13 */
#define IRC0_IRQCEC13	(IRC0.unIRQCEC13.u32Register)  /*@rg@*/
#define IRC0_IRQCEC13_IRQCEC416	(*(volatile uint_io8_t*)0xB1105FA0)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC417	(*(volatile uint_io8_t*)0xB1105FA1)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC418	(*(volatile uint_io8_t*)0xB1105FA2)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC419	(*(volatile uint_io8_t*)0xB1105FA3)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC420	(*(volatile uint_io8_t*)0xB1105FA4)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC421	(*(volatile uint_io8_t*)0xB1105FA5)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC422	(*(volatile uint_io8_t*)0xB1105FA6)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC423	(*(volatile uint_io8_t*)0xB1105FA7)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC424	(*(volatile uint_io8_t*)0xB1105FA8)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC425	(*(volatile uint_io8_t*)0xB1105FA9)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC426	(*(volatile uint_io8_t*)0xB1105FAA)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC427	(*(volatile uint_io8_t*)0xB1105FAB)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC428	(*(volatile uint_io8_t*)0xB1105FAC)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC429	(*(volatile uint_io8_t*)0xB1105FAD)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC430	(*(volatile uint_io8_t*)0xB1105FAE)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC431	(*(volatile uint_io8_t*)0xB1105FAF)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC432	(*(volatile uint_io8_t*)0xB1105FB0)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC433	(*(volatile uint_io8_t*)0xB1105FB1)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC434	(*(volatile uint_io8_t*)0xB1105FB2)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC435	(*(volatile uint_io8_t*)0xB1105FB3)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC436	(*(volatile uint_io8_t*)0xB1105FB4)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC437	(*(volatile uint_io8_t*)0xB1105FB5)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC438	(*(volatile uint_io8_t*)0xB1105FB6)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC439	(*(volatile uint_io8_t*)0xB1105FB7)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC440	(*(volatile uint_io8_t*)0xB1105FB8)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC441	(*(volatile uint_io8_t*)0xB1105FB9)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC442	(*(volatile uint_io8_t*)0xB1105FBA)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC443	(*(volatile uint_io8_t*)0xB1105FBB)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC444	(*(volatile uint_io8_t*)0xB1105FBC)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC445	(*(volatile uint_io8_t*)0xB1105FBD)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC446	(*(volatile uint_io8_t*)0xB1105FBE)  /*@bfbba@*/
#define IRC0_IRQCEC13_IRQCEC447	(*(volatile uint_io8_t*)0xB1105FBF)  /*@bfbba@*/

typedef struct stc_irc0_irqcec13_field{
    uint_io32_t		u1IRQCEC416:1;
    uint_io32_t		u1IRQCEC417:1;
    uint_io32_t		u1IRQCEC418:1;
    uint_io32_t		u1IRQCEC419:1;
    uint_io32_t		u1IRQCEC420:1;
    uint_io32_t		u1IRQCEC421:1;
    uint_io32_t		u1IRQCEC422:1;
    uint_io32_t		u1IRQCEC423:1;
    uint_io32_t		u1IRQCEC424:1;
    uint_io32_t		u1IRQCEC425:1;
    uint_io32_t		u1IRQCEC426:1;
    uint_io32_t		u1IRQCEC427:1;
    uint_io32_t		u1IRQCEC428:1;
    uint_io32_t		u1IRQCEC429:1;
    uint_io32_t		u1IRQCEC430:1;
    uint_io32_t		u1IRQCEC431:1;
    uint_io32_t		u1IRQCEC432:1;
    uint_io32_t		u1IRQCEC433:1;
    uint_io32_t		u1IRQCEC434:1;
    uint_io32_t		u1IRQCEC435:1;
    uint_io32_t		u1IRQCEC436:1;
    uint_io32_t		u1IRQCEC437:1;
    uint_io32_t		u1IRQCEC438:1;
    uint_io32_t		u1IRQCEC439:1;
    uint_io32_t		u1IRQCEC440:1;
    uint_io32_t		u1IRQCEC441:1;
    uint_io32_t		u1IRQCEC442:1;
    uint_io32_t		u1IRQCEC443:1;
    uint_io32_t		u1IRQCEC444:1;
    uint_io32_t		u1IRQCEC445:1;
    uint_io32_t		u1IRQCEC446:1;
    uint_io32_t		u1IRQCEC447:1;
}stc_irc0_irqcec13_field_t;

typedef union un_irc0_irqcec13{
    uint_io32_t		u32Register;
    stc_irc0_irqcec13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec13_t;

/* IRQCEC14 */
#define IRC0_IRQCEC14	(IRC0.unIRQCEC14.u32Register)  /*@rg@*/
#define IRC0_IRQCEC14_IRQCEC448	(*(volatile uint_io8_t*)0xB1105FC0)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC449	(*(volatile uint_io8_t*)0xB1105FC1)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC450	(*(volatile uint_io8_t*)0xB1105FC2)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC451	(*(volatile uint_io8_t*)0xB1105FC3)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC452	(*(volatile uint_io8_t*)0xB1105FC4)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC453	(*(volatile uint_io8_t*)0xB1105FC5)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC454	(*(volatile uint_io8_t*)0xB1105FC6)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC455	(*(volatile uint_io8_t*)0xB1105FC7)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC456	(*(volatile uint_io8_t*)0xB1105FC8)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC457	(*(volatile uint_io8_t*)0xB1105FC9)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC458	(*(volatile uint_io8_t*)0xB1105FCA)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC459	(*(volatile uint_io8_t*)0xB1105FCB)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC460	(*(volatile uint_io8_t*)0xB1105FCC)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC461	(*(volatile uint_io8_t*)0xB1105FCD)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC462	(*(volatile uint_io8_t*)0xB1105FCE)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC463	(*(volatile uint_io8_t*)0xB1105FCF)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC464	(*(volatile uint_io8_t*)0xB1105FD0)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC465	(*(volatile uint_io8_t*)0xB1105FD1)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC466	(*(volatile uint_io8_t*)0xB1105FD2)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC467	(*(volatile uint_io8_t*)0xB1105FD3)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC468	(*(volatile uint_io8_t*)0xB1105FD4)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC469	(*(volatile uint_io8_t*)0xB1105FD5)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC470	(*(volatile uint_io8_t*)0xB1105FD6)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC471	(*(volatile uint_io8_t*)0xB1105FD7)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC472	(*(volatile uint_io8_t*)0xB1105FD8)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC473	(*(volatile uint_io8_t*)0xB1105FD9)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC474	(*(volatile uint_io8_t*)0xB1105FDA)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC475	(*(volatile uint_io8_t*)0xB1105FDB)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC476	(*(volatile uint_io8_t*)0xB1105FDC)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC477	(*(volatile uint_io8_t*)0xB1105FDD)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC478	(*(volatile uint_io8_t*)0xB1105FDE)  /*@bfbba@*/
#define IRC0_IRQCEC14_IRQCEC479	(*(volatile uint_io8_t*)0xB1105FDF)  /*@bfbba@*/

typedef struct stc_irc0_irqcec14_field{
    uint_io32_t		u1IRQCEC448:1;
    uint_io32_t		u1IRQCEC449:1;
    uint_io32_t		u1IRQCEC450:1;
    uint_io32_t		u1IRQCEC451:1;
    uint_io32_t		u1IRQCEC452:1;
    uint_io32_t		u1IRQCEC453:1;
    uint_io32_t		u1IRQCEC454:1;
    uint_io32_t		u1IRQCEC455:1;
    uint_io32_t		u1IRQCEC456:1;
    uint_io32_t		u1IRQCEC457:1;
    uint_io32_t		u1IRQCEC458:1;
    uint_io32_t		u1IRQCEC459:1;
    uint_io32_t		u1IRQCEC460:1;
    uint_io32_t		u1IRQCEC461:1;
    uint_io32_t		u1IRQCEC462:1;
    uint_io32_t		u1IRQCEC463:1;
    uint_io32_t		u1IRQCEC464:1;
    uint_io32_t		u1IRQCEC465:1;
    uint_io32_t		u1IRQCEC466:1;
    uint_io32_t		u1IRQCEC467:1;
    uint_io32_t		u1IRQCEC468:1;
    uint_io32_t		u1IRQCEC469:1;
    uint_io32_t		u1IRQCEC470:1;
    uint_io32_t		u1IRQCEC471:1;
    uint_io32_t		u1IRQCEC472:1;
    uint_io32_t		u1IRQCEC473:1;
    uint_io32_t		u1IRQCEC474:1;
    uint_io32_t		u1IRQCEC475:1;
    uint_io32_t		u1IRQCEC476:1;
    uint_io32_t		u1IRQCEC477:1;
    uint_io32_t		u1IRQCEC478:1;
    uint_io32_t		u1IRQCEC479:1;
}stc_irc0_irqcec14_field_t;

typedef union un_irc0_irqcec14{
    uint_io32_t		u32Register;
    stc_irc0_irqcec14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec14_t;

/* IRQCEC15 */
#define IRC0_IRQCEC15	(IRC0.unIRQCEC15.u32Register)  /*@rg@*/
#define IRC0_IRQCEC15_IRQCEC480	(*(volatile uint_io8_t*)0xB1105FE0)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC481	(*(volatile uint_io8_t*)0xB1105FE1)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC482	(*(volatile uint_io8_t*)0xB1105FE2)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC483	(*(volatile uint_io8_t*)0xB1105FE3)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC484	(*(volatile uint_io8_t*)0xB1105FE4)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC485	(*(volatile uint_io8_t*)0xB1105FE5)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC486	(*(volatile uint_io8_t*)0xB1105FE6)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC487	(*(volatile uint_io8_t*)0xB1105FE7)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC488	(*(volatile uint_io8_t*)0xB1105FE8)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC489	(*(volatile uint_io8_t*)0xB1105FE9)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC490	(*(volatile uint_io8_t*)0xB1105FEA)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC491	(*(volatile uint_io8_t*)0xB1105FEB)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC492	(*(volatile uint_io8_t*)0xB1105FEC)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC493	(*(volatile uint_io8_t*)0xB1105FED)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC494	(*(volatile uint_io8_t*)0xB1105FEE)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC495	(*(volatile uint_io8_t*)0xB1105FEF)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC496	(*(volatile uint_io8_t*)0xB1105FF0)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC497	(*(volatile uint_io8_t*)0xB1105FF1)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC498	(*(volatile uint_io8_t*)0xB1105FF2)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC499	(*(volatile uint_io8_t*)0xB1105FF3)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC500	(*(volatile uint_io8_t*)0xB1105FF4)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC501	(*(volatile uint_io8_t*)0xB1105FF5)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC502	(*(volatile uint_io8_t*)0xB1105FF6)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC503	(*(volatile uint_io8_t*)0xB1105FF7)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC504	(*(volatile uint_io8_t*)0xB1105FF8)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC505	(*(volatile uint_io8_t*)0xB1105FF9)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC506	(*(volatile uint_io8_t*)0xB1105FFA)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC507	(*(volatile uint_io8_t*)0xB1105FFB)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC508	(*(volatile uint_io8_t*)0xB1105FFC)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC509	(*(volatile uint_io8_t*)0xB1105FFD)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC510	(*(volatile uint_io8_t*)0xB1105FFE)  /*@bfbba@*/
#define IRC0_IRQCEC15_IRQCEC511	(*(volatile uint_io8_t*)0xB1105FFF)  /*@bfbba@*/

typedef struct stc_irc0_irqcec15_field{
    uint_io32_t		u1IRQCEC480:1;
    uint_io32_t		u1IRQCEC481:1;
    uint_io32_t		u1IRQCEC482:1;
    uint_io32_t		u1IRQCEC483:1;
    uint_io32_t		u1IRQCEC484:1;
    uint_io32_t		u1IRQCEC485:1;
    uint_io32_t		u1IRQCEC486:1;
    uint_io32_t		u1IRQCEC487:1;
    uint_io32_t		u1IRQCEC488:1;
    uint_io32_t		u1IRQCEC489:1;
    uint_io32_t		u1IRQCEC490:1;
    uint_io32_t		u1IRQCEC491:1;
    uint_io32_t		u1IRQCEC492:1;
    uint_io32_t		u1IRQCEC493:1;
    uint_io32_t		u1IRQCEC494:1;
    uint_io32_t		u1IRQCEC495:1;
    uint_io32_t		u1IRQCEC496:1;
    uint_io32_t		u1IRQCEC497:1;
    uint_io32_t		u1IRQCEC498:1;
    uint_io32_t		u1IRQCEC499:1;
    uint_io32_t		u1IRQCEC500:1;
    uint_io32_t		u1IRQCEC501:1;
    uint_io32_t		u1IRQCEC502:1;
    uint_io32_t		u1IRQCEC503:1;
    uint_io32_t		u1IRQCEC504:1;
    uint_io32_t		u1IRQCEC505:1;
    uint_io32_t		u1IRQCEC506:1;
    uint_io32_t		u1IRQCEC507:1;
    uint_io32_t		u1IRQCEC508:1;
    uint_io32_t		u1IRQCEC509:1;
    uint_io32_t		u1IRQCEC510:1;
    uint_io32_t		u1IRQCEC511:1;
}stc_irc0_irqcec15_field_t;

typedef union un_irc0_irqcec15{
    uint_io32_t		u32Register;
    stc_irc0_irqcec15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqcec15_t;

/* IRQCE0 */
#define IRC0_IRQCE0	(IRC0.unIRQCE0.u32Register)  /*@rg@*/
#define IRC0_IRQCE0_IRQCE0	(*(volatile uint_io8_t*)0xB1106000)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE1	(*(volatile uint_io8_t*)0xB1106001)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE2	(*(volatile uint_io8_t*)0xB1106002)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE3	(*(volatile uint_io8_t*)0xB1106003)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE4	(*(volatile uint_io8_t*)0xB1106004)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE5	(*(volatile uint_io8_t*)0xB1106005)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE6	(*(volatile uint_io8_t*)0xB1106006)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE7	(*(volatile uint_io8_t*)0xB1106007)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE8	(*(volatile uint_io8_t*)0xB1106008)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE9	(*(volatile uint_io8_t*)0xB1106009)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE10	(*(volatile uint_io8_t*)0xB110600A)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE11	(*(volatile uint_io8_t*)0xB110600B)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE12	(*(volatile uint_io8_t*)0xB110600C)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE13	(*(volatile uint_io8_t*)0xB110600D)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE14	(*(volatile uint_io8_t*)0xB110600E)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE15	(*(volatile uint_io8_t*)0xB110600F)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE16	(*(volatile uint_io8_t*)0xB1106010)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE17	(*(volatile uint_io8_t*)0xB1106011)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE18	(*(volatile uint_io8_t*)0xB1106012)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE19	(*(volatile uint_io8_t*)0xB1106013)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE20	(*(volatile uint_io8_t*)0xB1106014)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE21	(*(volatile uint_io8_t*)0xB1106015)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE22	(*(volatile uint_io8_t*)0xB1106016)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE23	(*(volatile uint_io8_t*)0xB1106017)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE24	(*(volatile uint_io8_t*)0xB1106018)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE25	(*(volatile uint_io8_t*)0xB1106019)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE26	(*(volatile uint_io8_t*)0xB110601A)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE27	(*(volatile uint_io8_t*)0xB110601B)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE28	(*(volatile uint_io8_t*)0xB110601C)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE29	(*(volatile uint_io8_t*)0xB110601D)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE30	(*(volatile uint_io8_t*)0xB110601E)  /*@bfbba@*/
#define IRC0_IRQCE0_IRQCE31	(*(volatile uint_io8_t*)0xB110601F)  /*@bfbba@*/

typedef struct stc_irc0_irqce0_field{
    uint_io32_t		u1IRQCE0:1;
    uint_io32_t		u1IRQCE1:1;
    uint_io32_t		u1IRQCE2:1;
    uint_io32_t		u1IRQCE3:1;
    uint_io32_t		u1IRQCE4:1;
    uint_io32_t		u1IRQCE5:1;
    uint_io32_t		u1IRQCE6:1;
    uint_io32_t		u1IRQCE7:1;
    uint_io32_t		u1IRQCE8:1;
    uint_io32_t		u1IRQCE9:1;
    uint_io32_t		u1IRQCE10:1;
    uint_io32_t		u1IRQCE11:1;
    uint_io32_t		u1IRQCE12:1;
    uint_io32_t		u1IRQCE13:1;
    uint_io32_t		u1IRQCE14:1;
    uint_io32_t		u1IRQCE15:1;
    uint_io32_t		u1IRQCE16:1;
    uint_io32_t		u1IRQCE17:1;
    uint_io32_t		u1IRQCE18:1;
    uint_io32_t		u1IRQCE19:1;
    uint_io32_t		u1IRQCE20:1;
    uint_io32_t		u1IRQCE21:1;
    uint_io32_t		u1IRQCE22:1;
    uint_io32_t		u1IRQCE23:1;
    uint_io32_t		u1IRQCE24:1;
    uint_io32_t		u1IRQCE25:1;
    uint_io32_t		u1IRQCE26:1;
    uint_io32_t		u1IRQCE27:1;
    uint_io32_t		u1IRQCE28:1;
    uint_io32_t		u1IRQCE29:1;
    uint_io32_t		u1IRQCE30:1;
    uint_io32_t		u1IRQCE31:1;
}stc_irc0_irqce0_field_t;

typedef union un_irc0_irqce0{
    uint_io32_t		u32Register;
    stc_irc0_irqce0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce0_t;

/* IRQCE1 */
#define IRC0_IRQCE1	(IRC0.unIRQCE1.u32Register)  /*@rg@*/
#define IRC0_IRQCE1_IRQCE32	(*(volatile uint_io8_t*)0xB1106020)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE33	(*(volatile uint_io8_t*)0xB1106021)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE34	(*(volatile uint_io8_t*)0xB1106022)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE35	(*(volatile uint_io8_t*)0xB1106023)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE36	(*(volatile uint_io8_t*)0xB1106024)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE37	(*(volatile uint_io8_t*)0xB1106025)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE38	(*(volatile uint_io8_t*)0xB1106026)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE39	(*(volatile uint_io8_t*)0xB1106027)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE40	(*(volatile uint_io8_t*)0xB1106028)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE41	(*(volatile uint_io8_t*)0xB1106029)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE42	(*(volatile uint_io8_t*)0xB110602A)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE43	(*(volatile uint_io8_t*)0xB110602B)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE44	(*(volatile uint_io8_t*)0xB110602C)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE45	(*(volatile uint_io8_t*)0xB110602D)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE46	(*(volatile uint_io8_t*)0xB110602E)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE47	(*(volatile uint_io8_t*)0xB110602F)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE48	(*(volatile uint_io8_t*)0xB1106030)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE49	(*(volatile uint_io8_t*)0xB1106031)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE50	(*(volatile uint_io8_t*)0xB1106032)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE51	(*(volatile uint_io8_t*)0xB1106033)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE52	(*(volatile uint_io8_t*)0xB1106034)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE53	(*(volatile uint_io8_t*)0xB1106035)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE54	(*(volatile uint_io8_t*)0xB1106036)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE55	(*(volatile uint_io8_t*)0xB1106037)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE56	(*(volatile uint_io8_t*)0xB1106038)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE57	(*(volatile uint_io8_t*)0xB1106039)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE58	(*(volatile uint_io8_t*)0xB110603A)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE59	(*(volatile uint_io8_t*)0xB110603B)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE60	(*(volatile uint_io8_t*)0xB110603C)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE61	(*(volatile uint_io8_t*)0xB110603D)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE62	(*(volatile uint_io8_t*)0xB110603E)  /*@bfbba@*/
#define IRC0_IRQCE1_IRQCE63	(*(volatile uint_io8_t*)0xB110603F)  /*@bfbba@*/

typedef struct stc_irc0_irqce1_field{
    uint_io32_t		u1IRQCE32:1;
    uint_io32_t		u1IRQCE33:1;
    uint_io32_t		u1IRQCE34:1;
    uint_io32_t		u1IRQCE35:1;
    uint_io32_t		u1IRQCE36:1;
    uint_io32_t		u1IRQCE37:1;
    uint_io32_t		u1IRQCE38:1;
    uint_io32_t		u1IRQCE39:1;
    uint_io32_t		u1IRQCE40:1;
    uint_io32_t		u1IRQCE41:1;
    uint_io32_t		u1IRQCE42:1;
    uint_io32_t		u1IRQCE43:1;
    uint_io32_t		u1IRQCE44:1;
    uint_io32_t		u1IRQCE45:1;
    uint_io32_t		u1IRQCE46:1;
    uint_io32_t		u1IRQCE47:1;
    uint_io32_t		u1IRQCE48:1;
    uint_io32_t		u1IRQCE49:1;
    uint_io32_t		u1IRQCE50:1;
    uint_io32_t		u1IRQCE51:1;
    uint_io32_t		u1IRQCE52:1;
    uint_io32_t		u1IRQCE53:1;
    uint_io32_t		u1IRQCE54:1;
    uint_io32_t		u1IRQCE55:1;
    uint_io32_t		u1IRQCE56:1;
    uint_io32_t		u1IRQCE57:1;
    uint_io32_t		u1IRQCE58:1;
    uint_io32_t		u1IRQCE59:1;
    uint_io32_t		u1IRQCE60:1;
    uint_io32_t		u1IRQCE61:1;
    uint_io32_t		u1IRQCE62:1;
    uint_io32_t		u1IRQCE63:1;
}stc_irc0_irqce1_field_t;

typedef union un_irc0_irqce1{
    uint_io32_t		u32Register;
    stc_irc0_irqce1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce1_t;

/* IRQCE2 */
#define IRC0_IRQCE2	(IRC0.unIRQCE2.u32Register)  /*@rg@*/
#define IRC0_IRQCE2_IRQCE64	(*(volatile uint_io8_t*)0xB1106040)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE65	(*(volatile uint_io8_t*)0xB1106041)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE66	(*(volatile uint_io8_t*)0xB1106042)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE67	(*(volatile uint_io8_t*)0xB1106043)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE68	(*(volatile uint_io8_t*)0xB1106044)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE69	(*(volatile uint_io8_t*)0xB1106045)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE70	(*(volatile uint_io8_t*)0xB1106046)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE71	(*(volatile uint_io8_t*)0xB1106047)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE72	(*(volatile uint_io8_t*)0xB1106048)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE73	(*(volatile uint_io8_t*)0xB1106049)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE74	(*(volatile uint_io8_t*)0xB110604A)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE75	(*(volatile uint_io8_t*)0xB110604B)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE76	(*(volatile uint_io8_t*)0xB110604C)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE77	(*(volatile uint_io8_t*)0xB110604D)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE78	(*(volatile uint_io8_t*)0xB110604E)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE79	(*(volatile uint_io8_t*)0xB110604F)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE80	(*(volatile uint_io8_t*)0xB1106050)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE81	(*(volatile uint_io8_t*)0xB1106051)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE82	(*(volatile uint_io8_t*)0xB1106052)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE83	(*(volatile uint_io8_t*)0xB1106053)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE84	(*(volatile uint_io8_t*)0xB1106054)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE85	(*(volatile uint_io8_t*)0xB1106055)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE86	(*(volatile uint_io8_t*)0xB1106056)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE87	(*(volatile uint_io8_t*)0xB1106057)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE88	(*(volatile uint_io8_t*)0xB1106058)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE89	(*(volatile uint_io8_t*)0xB1106059)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE90	(*(volatile uint_io8_t*)0xB110605A)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE91	(*(volatile uint_io8_t*)0xB110605B)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE92	(*(volatile uint_io8_t*)0xB110605C)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE93	(*(volatile uint_io8_t*)0xB110605D)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE94	(*(volatile uint_io8_t*)0xB110605E)  /*@bfbba@*/
#define IRC0_IRQCE2_IRQCE95	(*(volatile uint_io8_t*)0xB110605F)  /*@bfbba@*/

typedef struct stc_irc0_irqce2_field{
    uint_io32_t		u1IRQCE64:1;
    uint_io32_t		u1IRQCE65:1;
    uint_io32_t		u1IRQCE66:1;
    uint_io32_t		u1IRQCE67:1;
    uint_io32_t		u1IRQCE68:1;
    uint_io32_t		u1IRQCE69:1;
    uint_io32_t		u1IRQCE70:1;
    uint_io32_t		u1IRQCE71:1;
    uint_io32_t		u1IRQCE72:1;
    uint_io32_t		u1IRQCE73:1;
    uint_io32_t		u1IRQCE74:1;
    uint_io32_t		u1IRQCE75:1;
    uint_io32_t		u1IRQCE76:1;
    uint_io32_t		u1IRQCE77:1;
    uint_io32_t		u1IRQCE78:1;
    uint_io32_t		u1IRQCE79:1;
    uint_io32_t		u1IRQCE80:1;
    uint_io32_t		u1IRQCE81:1;
    uint_io32_t		u1IRQCE82:1;
    uint_io32_t		u1IRQCE83:1;
    uint_io32_t		u1IRQCE84:1;
    uint_io32_t		u1IRQCE85:1;
    uint_io32_t		u1IRQCE86:1;
    uint_io32_t		u1IRQCE87:1;
    uint_io32_t		u1IRQCE88:1;
    uint_io32_t		u1IRQCE89:1;
    uint_io32_t		u1IRQCE90:1;
    uint_io32_t		u1IRQCE91:1;
    uint_io32_t		u1IRQCE92:1;
    uint_io32_t		u1IRQCE93:1;
    uint_io32_t		u1IRQCE94:1;
    uint_io32_t		u1IRQCE95:1;
}stc_irc0_irqce2_field_t;

typedef union un_irc0_irqce2{
    uint_io32_t		u32Register;
    stc_irc0_irqce2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce2_t;

/* IRQCE3 */
#define IRC0_IRQCE3	(IRC0.unIRQCE3.u32Register)  /*@rg@*/
#define IRC0_IRQCE3_IRQCE96	(*(volatile uint_io8_t*)0xB1106060)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE97	(*(volatile uint_io8_t*)0xB1106061)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE98	(*(volatile uint_io8_t*)0xB1106062)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE99	(*(volatile uint_io8_t*)0xB1106063)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE100	(*(volatile uint_io8_t*)0xB1106064)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE101	(*(volatile uint_io8_t*)0xB1106065)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE102	(*(volatile uint_io8_t*)0xB1106066)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE103	(*(volatile uint_io8_t*)0xB1106067)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE104	(*(volatile uint_io8_t*)0xB1106068)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE105	(*(volatile uint_io8_t*)0xB1106069)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE106	(*(volatile uint_io8_t*)0xB110606A)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE107	(*(volatile uint_io8_t*)0xB110606B)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE108	(*(volatile uint_io8_t*)0xB110606C)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE109	(*(volatile uint_io8_t*)0xB110606D)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE110	(*(volatile uint_io8_t*)0xB110606E)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE111	(*(volatile uint_io8_t*)0xB110606F)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE112	(*(volatile uint_io8_t*)0xB1106070)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE113	(*(volatile uint_io8_t*)0xB1106071)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE114	(*(volatile uint_io8_t*)0xB1106072)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE115	(*(volatile uint_io8_t*)0xB1106073)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE116	(*(volatile uint_io8_t*)0xB1106074)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE117	(*(volatile uint_io8_t*)0xB1106075)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE118	(*(volatile uint_io8_t*)0xB1106076)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE119	(*(volatile uint_io8_t*)0xB1106077)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE120	(*(volatile uint_io8_t*)0xB1106078)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE121	(*(volatile uint_io8_t*)0xB1106079)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE122	(*(volatile uint_io8_t*)0xB110607A)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE123	(*(volatile uint_io8_t*)0xB110607B)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE124	(*(volatile uint_io8_t*)0xB110607C)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE125	(*(volatile uint_io8_t*)0xB110607D)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE126	(*(volatile uint_io8_t*)0xB110607E)  /*@bfbba@*/
#define IRC0_IRQCE3_IRQCE127	(*(volatile uint_io8_t*)0xB110607F)  /*@bfbba@*/

typedef struct stc_irc0_irqce3_field{
    uint_io32_t		u1IRQCE96:1;
    uint_io32_t		u1IRQCE97:1;
    uint_io32_t		u1IRQCE98:1;
    uint_io32_t		u1IRQCE99:1;
    uint_io32_t		u1IRQCE100:1;
    uint_io32_t		u1IRQCE101:1;
    uint_io32_t		u1IRQCE102:1;
    uint_io32_t		u1IRQCE103:1;
    uint_io32_t		u1IRQCE104:1;
    uint_io32_t		u1IRQCE105:1;
    uint_io32_t		u1IRQCE106:1;
    uint_io32_t		u1IRQCE107:1;
    uint_io32_t		u1IRQCE108:1;
    uint_io32_t		u1IRQCE109:1;
    uint_io32_t		u1IRQCE110:1;
    uint_io32_t		u1IRQCE111:1;
    uint_io32_t		u1IRQCE112:1;
    uint_io32_t		u1IRQCE113:1;
    uint_io32_t		u1IRQCE114:1;
    uint_io32_t		u1IRQCE115:1;
    uint_io32_t		u1IRQCE116:1;
    uint_io32_t		u1IRQCE117:1;
    uint_io32_t		u1IRQCE118:1;
    uint_io32_t		u1IRQCE119:1;
    uint_io32_t		u1IRQCE120:1;
    uint_io32_t		u1IRQCE121:1;
    uint_io32_t		u1IRQCE122:1;
    uint_io32_t		u1IRQCE123:1;
    uint_io32_t		u1IRQCE124:1;
    uint_io32_t		u1IRQCE125:1;
    uint_io32_t		u1IRQCE126:1;
    uint_io32_t		u1IRQCE127:1;
}stc_irc0_irqce3_field_t;

typedef union un_irc0_irqce3{
    uint_io32_t		u32Register;
    stc_irc0_irqce3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce3_t;

/* IRQCE4 */
#define IRC0_IRQCE4	(IRC0.unIRQCE4.u32Register)  /*@rg@*/
#define IRC0_IRQCE4_IRQCE128	(*(volatile uint_io8_t*)0xB1106080)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE129	(*(volatile uint_io8_t*)0xB1106081)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE130	(*(volatile uint_io8_t*)0xB1106082)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE131	(*(volatile uint_io8_t*)0xB1106083)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE132	(*(volatile uint_io8_t*)0xB1106084)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE133	(*(volatile uint_io8_t*)0xB1106085)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE134	(*(volatile uint_io8_t*)0xB1106086)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE135	(*(volatile uint_io8_t*)0xB1106087)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE136	(*(volatile uint_io8_t*)0xB1106088)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE137	(*(volatile uint_io8_t*)0xB1106089)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE138	(*(volatile uint_io8_t*)0xB110608A)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE139	(*(volatile uint_io8_t*)0xB110608B)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE140	(*(volatile uint_io8_t*)0xB110608C)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE141	(*(volatile uint_io8_t*)0xB110608D)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE142	(*(volatile uint_io8_t*)0xB110608E)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE143	(*(volatile uint_io8_t*)0xB110608F)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE144	(*(volatile uint_io8_t*)0xB1106090)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE145	(*(volatile uint_io8_t*)0xB1106091)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE146	(*(volatile uint_io8_t*)0xB1106092)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE147	(*(volatile uint_io8_t*)0xB1106093)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE148	(*(volatile uint_io8_t*)0xB1106094)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE149	(*(volatile uint_io8_t*)0xB1106095)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE150	(*(volatile uint_io8_t*)0xB1106096)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE151	(*(volatile uint_io8_t*)0xB1106097)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE152	(*(volatile uint_io8_t*)0xB1106098)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE153	(*(volatile uint_io8_t*)0xB1106099)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE154	(*(volatile uint_io8_t*)0xB110609A)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE155	(*(volatile uint_io8_t*)0xB110609B)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE156	(*(volatile uint_io8_t*)0xB110609C)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE157	(*(volatile uint_io8_t*)0xB110609D)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE158	(*(volatile uint_io8_t*)0xB110609E)  /*@bfbba@*/
#define IRC0_IRQCE4_IRQCE159	(*(volatile uint_io8_t*)0xB110609F)  /*@bfbba@*/

typedef struct stc_irc0_irqce4_field{
    uint_io32_t		u1IRQCE128:1;
    uint_io32_t		u1IRQCE129:1;
    uint_io32_t		u1IRQCE130:1;
    uint_io32_t		u1IRQCE131:1;
    uint_io32_t		u1IRQCE132:1;
    uint_io32_t		u1IRQCE133:1;
    uint_io32_t		u1IRQCE134:1;
    uint_io32_t		u1IRQCE135:1;
    uint_io32_t		u1IRQCE136:1;
    uint_io32_t		u1IRQCE137:1;
    uint_io32_t		u1IRQCE138:1;
    uint_io32_t		u1IRQCE139:1;
    uint_io32_t		u1IRQCE140:1;
    uint_io32_t		u1IRQCE141:1;
    uint_io32_t		u1IRQCE142:1;
    uint_io32_t		u1IRQCE143:1;
    uint_io32_t		u1IRQCE144:1;
    uint_io32_t		u1IRQCE145:1;
    uint_io32_t		u1IRQCE146:1;
    uint_io32_t		u1IRQCE147:1;
    uint_io32_t		u1IRQCE148:1;
    uint_io32_t		u1IRQCE149:1;
    uint_io32_t		u1IRQCE150:1;
    uint_io32_t		u1IRQCE151:1;
    uint_io32_t		u1IRQCE152:1;
    uint_io32_t		u1IRQCE153:1;
    uint_io32_t		u1IRQCE154:1;
    uint_io32_t		u1IRQCE155:1;
    uint_io32_t		u1IRQCE156:1;
    uint_io32_t		u1IRQCE157:1;
    uint_io32_t		u1IRQCE158:1;
    uint_io32_t		u1IRQCE159:1;
}stc_irc0_irqce4_field_t;

typedef union un_irc0_irqce4{
    uint_io32_t		u32Register;
    stc_irc0_irqce4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce4_t;

/* IRQCE5 */
#define IRC0_IRQCE5	(IRC0.unIRQCE5.u32Register)  /*@rg@*/
#define IRC0_IRQCE5_IRQCE160	(*(volatile uint_io8_t*)0xB11060A0)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE161	(*(volatile uint_io8_t*)0xB11060A1)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE162	(*(volatile uint_io8_t*)0xB11060A2)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE163	(*(volatile uint_io8_t*)0xB11060A3)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE164	(*(volatile uint_io8_t*)0xB11060A4)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE165	(*(volatile uint_io8_t*)0xB11060A5)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE166	(*(volatile uint_io8_t*)0xB11060A6)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE167	(*(volatile uint_io8_t*)0xB11060A7)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE168	(*(volatile uint_io8_t*)0xB11060A8)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE169	(*(volatile uint_io8_t*)0xB11060A9)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE170	(*(volatile uint_io8_t*)0xB11060AA)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE171	(*(volatile uint_io8_t*)0xB11060AB)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE172	(*(volatile uint_io8_t*)0xB11060AC)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE173	(*(volatile uint_io8_t*)0xB11060AD)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE174	(*(volatile uint_io8_t*)0xB11060AE)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE175	(*(volatile uint_io8_t*)0xB11060AF)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE176	(*(volatile uint_io8_t*)0xB11060B0)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE177	(*(volatile uint_io8_t*)0xB11060B1)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE178	(*(volatile uint_io8_t*)0xB11060B2)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE179	(*(volatile uint_io8_t*)0xB11060B3)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE180	(*(volatile uint_io8_t*)0xB11060B4)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE181	(*(volatile uint_io8_t*)0xB11060B5)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE182	(*(volatile uint_io8_t*)0xB11060B6)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE183	(*(volatile uint_io8_t*)0xB11060B7)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE184	(*(volatile uint_io8_t*)0xB11060B8)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE185	(*(volatile uint_io8_t*)0xB11060B9)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE186	(*(volatile uint_io8_t*)0xB11060BA)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE187	(*(volatile uint_io8_t*)0xB11060BB)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE188	(*(volatile uint_io8_t*)0xB11060BC)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE189	(*(volatile uint_io8_t*)0xB11060BD)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE190	(*(volatile uint_io8_t*)0xB11060BE)  /*@bfbba@*/
#define IRC0_IRQCE5_IRQCE191	(*(volatile uint_io8_t*)0xB11060BF)  /*@bfbba@*/

typedef struct stc_irc0_irqce5_field{
    uint_io32_t		u1IRQCE160:1;
    uint_io32_t		u1IRQCE161:1;
    uint_io32_t		u1IRQCE162:1;
    uint_io32_t		u1IRQCE163:1;
    uint_io32_t		u1IRQCE164:1;
    uint_io32_t		u1IRQCE165:1;
    uint_io32_t		u1IRQCE166:1;
    uint_io32_t		u1IRQCE167:1;
    uint_io32_t		u1IRQCE168:1;
    uint_io32_t		u1IRQCE169:1;
    uint_io32_t		u1IRQCE170:1;
    uint_io32_t		u1IRQCE171:1;
    uint_io32_t		u1IRQCE172:1;
    uint_io32_t		u1IRQCE173:1;
    uint_io32_t		u1IRQCE174:1;
    uint_io32_t		u1IRQCE175:1;
    uint_io32_t		u1IRQCE176:1;
    uint_io32_t		u1IRQCE177:1;
    uint_io32_t		u1IRQCE178:1;
    uint_io32_t		u1IRQCE179:1;
    uint_io32_t		u1IRQCE180:1;
    uint_io32_t		u1IRQCE181:1;
    uint_io32_t		u1IRQCE182:1;
    uint_io32_t		u1IRQCE183:1;
    uint_io32_t		u1IRQCE184:1;
    uint_io32_t		u1IRQCE185:1;
    uint_io32_t		u1IRQCE186:1;
    uint_io32_t		u1IRQCE187:1;
    uint_io32_t		u1IRQCE188:1;
    uint_io32_t		u1IRQCE189:1;
    uint_io32_t		u1IRQCE190:1;
    uint_io32_t		u1IRQCE191:1;
}stc_irc0_irqce5_field_t;

typedef union un_irc0_irqce5{
    uint_io32_t		u32Register;
    stc_irc0_irqce5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce5_t;

/* IRQCE6 */
#define IRC0_IRQCE6	(IRC0.unIRQCE6.u32Register)  /*@rg@*/
#define IRC0_IRQCE6_IRQCE192	(*(volatile uint_io8_t*)0xB11060C0)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE193	(*(volatile uint_io8_t*)0xB11060C1)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE194	(*(volatile uint_io8_t*)0xB11060C2)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE195	(*(volatile uint_io8_t*)0xB11060C3)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE196	(*(volatile uint_io8_t*)0xB11060C4)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE197	(*(volatile uint_io8_t*)0xB11060C5)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE198	(*(volatile uint_io8_t*)0xB11060C6)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE199	(*(volatile uint_io8_t*)0xB11060C7)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE200	(*(volatile uint_io8_t*)0xB11060C8)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE201	(*(volatile uint_io8_t*)0xB11060C9)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE202	(*(volatile uint_io8_t*)0xB11060CA)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE203	(*(volatile uint_io8_t*)0xB11060CB)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE204	(*(volatile uint_io8_t*)0xB11060CC)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE205	(*(volatile uint_io8_t*)0xB11060CD)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE206	(*(volatile uint_io8_t*)0xB11060CE)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE207	(*(volatile uint_io8_t*)0xB11060CF)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE208	(*(volatile uint_io8_t*)0xB11060D0)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE209	(*(volatile uint_io8_t*)0xB11060D1)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE210	(*(volatile uint_io8_t*)0xB11060D2)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE211	(*(volatile uint_io8_t*)0xB11060D3)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE212	(*(volatile uint_io8_t*)0xB11060D4)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE213	(*(volatile uint_io8_t*)0xB11060D5)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE214	(*(volatile uint_io8_t*)0xB11060D6)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE215	(*(volatile uint_io8_t*)0xB11060D7)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE216	(*(volatile uint_io8_t*)0xB11060D8)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE217	(*(volatile uint_io8_t*)0xB11060D9)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE218	(*(volatile uint_io8_t*)0xB11060DA)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE219	(*(volatile uint_io8_t*)0xB11060DB)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE220	(*(volatile uint_io8_t*)0xB11060DC)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE221	(*(volatile uint_io8_t*)0xB11060DD)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE222	(*(volatile uint_io8_t*)0xB11060DE)  /*@bfbba@*/
#define IRC0_IRQCE6_IRQCE223	(*(volatile uint_io8_t*)0xB11060DF)  /*@bfbba@*/

typedef struct stc_irc0_irqce6_field{
    uint_io32_t		u1IRQCE192:1;
    uint_io32_t		u1IRQCE193:1;
    uint_io32_t		u1IRQCE194:1;
    uint_io32_t		u1IRQCE195:1;
    uint_io32_t		u1IRQCE196:1;
    uint_io32_t		u1IRQCE197:1;
    uint_io32_t		u1IRQCE198:1;
    uint_io32_t		u1IRQCE199:1;
    uint_io32_t		u1IRQCE200:1;
    uint_io32_t		u1IRQCE201:1;
    uint_io32_t		u1IRQCE202:1;
    uint_io32_t		u1IRQCE203:1;
    uint_io32_t		u1IRQCE204:1;
    uint_io32_t		u1IRQCE205:1;
    uint_io32_t		u1IRQCE206:1;
    uint_io32_t		u1IRQCE207:1;
    uint_io32_t		u1IRQCE208:1;
    uint_io32_t		u1IRQCE209:1;
    uint_io32_t		u1IRQCE210:1;
    uint_io32_t		u1IRQCE211:1;
    uint_io32_t		u1IRQCE212:1;
    uint_io32_t		u1IRQCE213:1;
    uint_io32_t		u1IRQCE214:1;
    uint_io32_t		u1IRQCE215:1;
    uint_io32_t		u1IRQCE216:1;
    uint_io32_t		u1IRQCE217:1;
    uint_io32_t		u1IRQCE218:1;
    uint_io32_t		u1IRQCE219:1;
    uint_io32_t		u1IRQCE220:1;
    uint_io32_t		u1IRQCE221:1;
    uint_io32_t		u1IRQCE222:1;
    uint_io32_t		u1IRQCE223:1;
}stc_irc0_irqce6_field_t;

typedef union un_irc0_irqce6{
    uint_io32_t		u32Register;
    stc_irc0_irqce6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce6_t;

/* IRQCE7 */
#define IRC0_IRQCE7	(IRC0.unIRQCE7.u32Register)  /*@rg@*/
#define IRC0_IRQCE7_IRQCE224	(*(volatile uint_io8_t*)0xB11060E0)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE225	(*(volatile uint_io8_t*)0xB11060E1)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE226	(*(volatile uint_io8_t*)0xB11060E2)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE227	(*(volatile uint_io8_t*)0xB11060E3)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE228	(*(volatile uint_io8_t*)0xB11060E4)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE229	(*(volatile uint_io8_t*)0xB11060E5)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE230	(*(volatile uint_io8_t*)0xB11060E6)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE231	(*(volatile uint_io8_t*)0xB11060E7)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE232	(*(volatile uint_io8_t*)0xB11060E8)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE233	(*(volatile uint_io8_t*)0xB11060E9)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE234	(*(volatile uint_io8_t*)0xB11060EA)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE235	(*(volatile uint_io8_t*)0xB11060EB)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE236	(*(volatile uint_io8_t*)0xB11060EC)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE237	(*(volatile uint_io8_t*)0xB11060ED)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE238	(*(volatile uint_io8_t*)0xB11060EE)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE239	(*(volatile uint_io8_t*)0xB11060EF)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE240	(*(volatile uint_io8_t*)0xB11060F0)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE241	(*(volatile uint_io8_t*)0xB11060F1)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE242	(*(volatile uint_io8_t*)0xB11060F2)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE243	(*(volatile uint_io8_t*)0xB11060F3)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE244	(*(volatile uint_io8_t*)0xB11060F4)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE245	(*(volatile uint_io8_t*)0xB11060F5)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE246	(*(volatile uint_io8_t*)0xB11060F6)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE247	(*(volatile uint_io8_t*)0xB11060F7)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE248	(*(volatile uint_io8_t*)0xB11060F8)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE249	(*(volatile uint_io8_t*)0xB11060F9)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE250	(*(volatile uint_io8_t*)0xB11060FA)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE251	(*(volatile uint_io8_t*)0xB11060FB)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE252	(*(volatile uint_io8_t*)0xB11060FC)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE253	(*(volatile uint_io8_t*)0xB11060FD)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE254	(*(volatile uint_io8_t*)0xB11060FE)  /*@bfbba@*/
#define IRC0_IRQCE7_IRQCE255	(*(volatile uint_io8_t*)0xB11060FF)  /*@bfbba@*/

typedef struct stc_irc0_irqce7_field{
    uint_io32_t		u1IRQCE224:1;
    uint_io32_t		u1IRQCE225:1;
    uint_io32_t		u1IRQCE226:1;
    uint_io32_t		u1IRQCE227:1;
    uint_io32_t		u1IRQCE228:1;
    uint_io32_t		u1IRQCE229:1;
    uint_io32_t		u1IRQCE230:1;
    uint_io32_t		u1IRQCE231:1;
    uint_io32_t		u1IRQCE232:1;
    uint_io32_t		u1IRQCE233:1;
    uint_io32_t		u1IRQCE234:1;
    uint_io32_t		u1IRQCE235:1;
    uint_io32_t		u1IRQCE236:1;
    uint_io32_t		u1IRQCE237:1;
    uint_io32_t		u1IRQCE238:1;
    uint_io32_t		u1IRQCE239:1;
    uint_io32_t		u1IRQCE240:1;
    uint_io32_t		u1IRQCE241:1;
    uint_io32_t		u1IRQCE242:1;
    uint_io32_t		u1IRQCE243:1;
    uint_io32_t		u1IRQCE244:1;
    uint_io32_t		u1IRQCE245:1;
    uint_io32_t		u1IRQCE246:1;
    uint_io32_t		u1IRQCE247:1;
    uint_io32_t		u1IRQCE248:1;
    uint_io32_t		u1IRQCE249:1;
    uint_io32_t		u1IRQCE250:1;
    uint_io32_t		u1IRQCE251:1;
    uint_io32_t		u1IRQCE252:1;
    uint_io32_t		u1IRQCE253:1;
    uint_io32_t		u1IRQCE254:1;
    uint_io32_t		u1IRQCE255:1;
}stc_irc0_irqce7_field_t;

typedef union un_irc0_irqce7{
    uint_io32_t		u32Register;
    stc_irc0_irqce7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce7_t;

/* IRQCE8 */
#define IRC0_IRQCE8	(IRC0.unIRQCE8.u32Register)  /*@rg@*/
#define IRC0_IRQCE8_IRQCE256	(*(volatile uint_io8_t*)0xB1106100)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE257	(*(volatile uint_io8_t*)0xB1106101)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE258	(*(volatile uint_io8_t*)0xB1106102)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE259	(*(volatile uint_io8_t*)0xB1106103)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE260	(*(volatile uint_io8_t*)0xB1106104)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE261	(*(volatile uint_io8_t*)0xB1106105)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE262	(*(volatile uint_io8_t*)0xB1106106)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE263	(*(volatile uint_io8_t*)0xB1106107)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE264	(*(volatile uint_io8_t*)0xB1106108)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE265	(*(volatile uint_io8_t*)0xB1106109)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE266	(*(volatile uint_io8_t*)0xB110610A)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE267	(*(volatile uint_io8_t*)0xB110610B)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE268	(*(volatile uint_io8_t*)0xB110610C)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE269	(*(volatile uint_io8_t*)0xB110610D)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE270	(*(volatile uint_io8_t*)0xB110610E)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE271	(*(volatile uint_io8_t*)0xB110610F)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE272	(*(volatile uint_io8_t*)0xB1106110)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE273	(*(volatile uint_io8_t*)0xB1106111)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE274	(*(volatile uint_io8_t*)0xB1106112)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE275	(*(volatile uint_io8_t*)0xB1106113)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE276	(*(volatile uint_io8_t*)0xB1106114)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE277	(*(volatile uint_io8_t*)0xB1106115)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE278	(*(volatile uint_io8_t*)0xB1106116)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE279	(*(volatile uint_io8_t*)0xB1106117)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE280	(*(volatile uint_io8_t*)0xB1106118)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE281	(*(volatile uint_io8_t*)0xB1106119)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE282	(*(volatile uint_io8_t*)0xB110611A)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE283	(*(volatile uint_io8_t*)0xB110611B)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE284	(*(volatile uint_io8_t*)0xB110611C)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE285	(*(volatile uint_io8_t*)0xB110611D)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE286	(*(volatile uint_io8_t*)0xB110611E)  /*@bfbba@*/
#define IRC0_IRQCE8_IRQCE287	(*(volatile uint_io8_t*)0xB110611F)  /*@bfbba@*/

typedef struct stc_irc0_irqce8_field{
    uint_io32_t		u1IRQCE256:1;
    uint_io32_t		u1IRQCE257:1;
    uint_io32_t		u1IRQCE258:1;
    uint_io32_t		u1IRQCE259:1;
    uint_io32_t		u1IRQCE260:1;
    uint_io32_t		u1IRQCE261:1;
    uint_io32_t		u1IRQCE262:1;
    uint_io32_t		u1IRQCE263:1;
    uint_io32_t		u1IRQCE264:1;
    uint_io32_t		u1IRQCE265:1;
    uint_io32_t		u1IRQCE266:1;
    uint_io32_t		u1IRQCE267:1;
    uint_io32_t		u1IRQCE268:1;
    uint_io32_t		u1IRQCE269:1;
    uint_io32_t		u1IRQCE270:1;
    uint_io32_t		u1IRQCE271:1;
    uint_io32_t		u1IRQCE272:1;
    uint_io32_t		u1IRQCE273:1;
    uint_io32_t		u1IRQCE274:1;
    uint_io32_t		u1IRQCE275:1;
    uint_io32_t		u1IRQCE276:1;
    uint_io32_t		u1IRQCE277:1;
    uint_io32_t		u1IRQCE278:1;
    uint_io32_t		u1IRQCE279:1;
    uint_io32_t		u1IRQCE280:1;
    uint_io32_t		u1IRQCE281:1;
    uint_io32_t		u1IRQCE282:1;
    uint_io32_t		u1IRQCE283:1;
    uint_io32_t		u1IRQCE284:1;
    uint_io32_t		u1IRQCE285:1;
    uint_io32_t		u1IRQCE286:1;
    uint_io32_t		u1IRQCE287:1;
}stc_irc0_irqce8_field_t;

typedef union un_irc0_irqce8{
    uint_io32_t		u32Register;
    stc_irc0_irqce8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce8_t;

/* IRQCE9 */
#define IRC0_IRQCE9	(IRC0.unIRQCE9.u32Register)  /*@rg@*/
#define IRC0_IRQCE9_IRQCE288	(*(volatile uint_io8_t*)0xB1106120)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE289	(*(volatile uint_io8_t*)0xB1106121)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE290	(*(volatile uint_io8_t*)0xB1106122)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE291	(*(volatile uint_io8_t*)0xB1106123)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE292	(*(volatile uint_io8_t*)0xB1106124)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE293	(*(volatile uint_io8_t*)0xB1106125)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE294	(*(volatile uint_io8_t*)0xB1106126)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE295	(*(volatile uint_io8_t*)0xB1106127)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE296	(*(volatile uint_io8_t*)0xB1106128)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE297	(*(volatile uint_io8_t*)0xB1106129)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE298	(*(volatile uint_io8_t*)0xB110612A)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE299	(*(volatile uint_io8_t*)0xB110612B)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE300	(*(volatile uint_io8_t*)0xB110612C)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE301	(*(volatile uint_io8_t*)0xB110612D)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE302	(*(volatile uint_io8_t*)0xB110612E)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE303	(*(volatile uint_io8_t*)0xB110612F)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE304	(*(volatile uint_io8_t*)0xB1106130)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE305	(*(volatile uint_io8_t*)0xB1106131)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE306	(*(volatile uint_io8_t*)0xB1106132)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE307	(*(volatile uint_io8_t*)0xB1106133)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE308	(*(volatile uint_io8_t*)0xB1106134)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE309	(*(volatile uint_io8_t*)0xB1106135)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE310	(*(volatile uint_io8_t*)0xB1106136)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE311	(*(volatile uint_io8_t*)0xB1106137)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE312	(*(volatile uint_io8_t*)0xB1106138)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE313	(*(volatile uint_io8_t*)0xB1106139)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE314	(*(volatile uint_io8_t*)0xB110613A)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE315	(*(volatile uint_io8_t*)0xB110613B)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE316	(*(volatile uint_io8_t*)0xB110613C)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE317	(*(volatile uint_io8_t*)0xB110613D)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE318	(*(volatile uint_io8_t*)0xB110613E)  /*@bfbba@*/
#define IRC0_IRQCE9_IRQCE319	(*(volatile uint_io8_t*)0xB110613F)  /*@bfbba@*/

typedef struct stc_irc0_irqce9_field{
    uint_io32_t		u1IRQCE288:1;
    uint_io32_t		u1IRQCE289:1;
    uint_io32_t		u1IRQCE290:1;
    uint_io32_t		u1IRQCE291:1;
    uint_io32_t		u1IRQCE292:1;
    uint_io32_t		u1IRQCE293:1;
    uint_io32_t		u1IRQCE294:1;
    uint_io32_t		u1IRQCE295:1;
    uint_io32_t		u1IRQCE296:1;
    uint_io32_t		u1IRQCE297:1;
    uint_io32_t		u1IRQCE298:1;
    uint_io32_t		u1IRQCE299:1;
    uint_io32_t		u1IRQCE300:1;
    uint_io32_t		u1IRQCE301:1;
    uint_io32_t		u1IRQCE302:1;
    uint_io32_t		u1IRQCE303:1;
    uint_io32_t		u1IRQCE304:1;
    uint_io32_t		u1IRQCE305:1;
    uint_io32_t		u1IRQCE306:1;
    uint_io32_t		u1IRQCE307:1;
    uint_io32_t		u1IRQCE308:1;
    uint_io32_t		u1IRQCE309:1;
    uint_io32_t		u1IRQCE310:1;
    uint_io32_t		u1IRQCE311:1;
    uint_io32_t		u1IRQCE312:1;
    uint_io32_t		u1IRQCE313:1;
    uint_io32_t		u1IRQCE314:1;
    uint_io32_t		u1IRQCE315:1;
    uint_io32_t		u1IRQCE316:1;
    uint_io32_t		u1IRQCE317:1;
    uint_io32_t		u1IRQCE318:1;
    uint_io32_t		u1IRQCE319:1;
}stc_irc0_irqce9_field_t;

typedef union un_irc0_irqce9{
    uint_io32_t		u32Register;
    stc_irc0_irqce9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce9_t;

/* IRQCE10 */
#define IRC0_IRQCE10	(IRC0.unIRQCE10.u32Register)  /*@rg@*/
#define IRC0_IRQCE10_IRQCE320	(*(volatile uint_io8_t*)0xB1106140)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE321	(*(volatile uint_io8_t*)0xB1106141)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE322	(*(volatile uint_io8_t*)0xB1106142)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE323	(*(volatile uint_io8_t*)0xB1106143)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE324	(*(volatile uint_io8_t*)0xB1106144)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE325	(*(volatile uint_io8_t*)0xB1106145)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE326	(*(volatile uint_io8_t*)0xB1106146)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE327	(*(volatile uint_io8_t*)0xB1106147)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE328	(*(volatile uint_io8_t*)0xB1106148)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE329	(*(volatile uint_io8_t*)0xB1106149)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE330	(*(volatile uint_io8_t*)0xB110614A)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE331	(*(volatile uint_io8_t*)0xB110614B)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE332	(*(volatile uint_io8_t*)0xB110614C)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE333	(*(volatile uint_io8_t*)0xB110614D)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE334	(*(volatile uint_io8_t*)0xB110614E)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE335	(*(volatile uint_io8_t*)0xB110614F)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE336	(*(volatile uint_io8_t*)0xB1106150)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE337	(*(volatile uint_io8_t*)0xB1106151)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE338	(*(volatile uint_io8_t*)0xB1106152)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE339	(*(volatile uint_io8_t*)0xB1106153)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE340	(*(volatile uint_io8_t*)0xB1106154)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE341	(*(volatile uint_io8_t*)0xB1106155)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE342	(*(volatile uint_io8_t*)0xB1106156)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE343	(*(volatile uint_io8_t*)0xB1106157)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE344	(*(volatile uint_io8_t*)0xB1106158)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE345	(*(volatile uint_io8_t*)0xB1106159)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE346	(*(volatile uint_io8_t*)0xB110615A)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE347	(*(volatile uint_io8_t*)0xB110615B)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE348	(*(volatile uint_io8_t*)0xB110615C)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE349	(*(volatile uint_io8_t*)0xB110615D)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE350	(*(volatile uint_io8_t*)0xB110615E)  /*@bfbba@*/
#define IRC0_IRQCE10_IRQCE351	(*(volatile uint_io8_t*)0xB110615F)  /*@bfbba@*/

typedef struct stc_irc0_irqce10_field{
    uint_io32_t		u1IRQCE320:1;
    uint_io32_t		u1IRQCE321:1;
    uint_io32_t		u1IRQCE322:1;
    uint_io32_t		u1IRQCE323:1;
    uint_io32_t		u1IRQCE324:1;
    uint_io32_t		u1IRQCE325:1;
    uint_io32_t		u1IRQCE326:1;
    uint_io32_t		u1IRQCE327:1;
    uint_io32_t		u1IRQCE328:1;
    uint_io32_t		u1IRQCE329:1;
    uint_io32_t		u1IRQCE330:1;
    uint_io32_t		u1IRQCE331:1;
    uint_io32_t		u1IRQCE332:1;
    uint_io32_t		u1IRQCE333:1;
    uint_io32_t		u1IRQCE334:1;
    uint_io32_t		u1IRQCE335:1;
    uint_io32_t		u1IRQCE336:1;
    uint_io32_t		u1IRQCE337:1;
    uint_io32_t		u1IRQCE338:1;
    uint_io32_t		u1IRQCE339:1;
    uint_io32_t		u1IRQCE340:1;
    uint_io32_t		u1IRQCE341:1;
    uint_io32_t		u1IRQCE342:1;
    uint_io32_t		u1IRQCE343:1;
    uint_io32_t		u1IRQCE344:1;
    uint_io32_t		u1IRQCE345:1;
    uint_io32_t		u1IRQCE346:1;
    uint_io32_t		u1IRQCE347:1;
    uint_io32_t		u1IRQCE348:1;
    uint_io32_t		u1IRQCE349:1;
    uint_io32_t		u1IRQCE350:1;
    uint_io32_t		u1IRQCE351:1;
}stc_irc0_irqce10_field_t;

typedef union un_irc0_irqce10{
    uint_io32_t		u32Register;
    stc_irc0_irqce10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce10_t;

/* IRQCE11 */
#define IRC0_IRQCE11	(IRC0.unIRQCE11.u32Register)  /*@rg@*/
#define IRC0_IRQCE11_IRQCE352	(*(volatile uint_io8_t*)0xB1106160)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE353	(*(volatile uint_io8_t*)0xB1106161)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE354	(*(volatile uint_io8_t*)0xB1106162)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE355	(*(volatile uint_io8_t*)0xB1106163)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE356	(*(volatile uint_io8_t*)0xB1106164)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE357	(*(volatile uint_io8_t*)0xB1106165)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE358	(*(volatile uint_io8_t*)0xB1106166)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE359	(*(volatile uint_io8_t*)0xB1106167)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE360	(*(volatile uint_io8_t*)0xB1106168)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE361	(*(volatile uint_io8_t*)0xB1106169)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE362	(*(volatile uint_io8_t*)0xB110616A)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE363	(*(volatile uint_io8_t*)0xB110616B)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE364	(*(volatile uint_io8_t*)0xB110616C)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE365	(*(volatile uint_io8_t*)0xB110616D)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE366	(*(volatile uint_io8_t*)0xB110616E)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE367	(*(volatile uint_io8_t*)0xB110616F)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE368	(*(volatile uint_io8_t*)0xB1106170)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE369	(*(volatile uint_io8_t*)0xB1106171)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE370	(*(volatile uint_io8_t*)0xB1106172)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE371	(*(volatile uint_io8_t*)0xB1106173)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE372	(*(volatile uint_io8_t*)0xB1106174)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE373	(*(volatile uint_io8_t*)0xB1106175)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE374	(*(volatile uint_io8_t*)0xB1106176)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE375	(*(volatile uint_io8_t*)0xB1106177)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE376	(*(volatile uint_io8_t*)0xB1106178)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE377	(*(volatile uint_io8_t*)0xB1106179)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE378	(*(volatile uint_io8_t*)0xB110617A)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE379	(*(volatile uint_io8_t*)0xB110617B)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE380	(*(volatile uint_io8_t*)0xB110617C)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE381	(*(volatile uint_io8_t*)0xB110617D)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE382	(*(volatile uint_io8_t*)0xB110617E)  /*@bfbba@*/
#define IRC0_IRQCE11_IRQCE383	(*(volatile uint_io8_t*)0xB110617F)  /*@bfbba@*/

typedef struct stc_irc0_irqce11_field{
    uint_io32_t		u1IRQCE352:1;
    uint_io32_t		u1IRQCE353:1;
    uint_io32_t		u1IRQCE354:1;
    uint_io32_t		u1IRQCE355:1;
    uint_io32_t		u1IRQCE356:1;
    uint_io32_t		u1IRQCE357:1;
    uint_io32_t		u1IRQCE358:1;
    uint_io32_t		u1IRQCE359:1;
    uint_io32_t		u1IRQCE360:1;
    uint_io32_t		u1IRQCE361:1;
    uint_io32_t		u1IRQCE362:1;
    uint_io32_t		u1IRQCE363:1;
    uint_io32_t		u1IRQCE364:1;
    uint_io32_t		u1IRQCE365:1;
    uint_io32_t		u1IRQCE366:1;
    uint_io32_t		u1IRQCE367:1;
    uint_io32_t		u1IRQCE368:1;
    uint_io32_t		u1IRQCE369:1;
    uint_io32_t		u1IRQCE370:1;
    uint_io32_t		u1IRQCE371:1;
    uint_io32_t		u1IRQCE372:1;
    uint_io32_t		u1IRQCE373:1;
    uint_io32_t		u1IRQCE374:1;
    uint_io32_t		u1IRQCE375:1;
    uint_io32_t		u1IRQCE376:1;
    uint_io32_t		u1IRQCE377:1;
    uint_io32_t		u1IRQCE378:1;
    uint_io32_t		u1IRQCE379:1;
    uint_io32_t		u1IRQCE380:1;
    uint_io32_t		u1IRQCE381:1;
    uint_io32_t		u1IRQCE382:1;
    uint_io32_t		u1IRQCE383:1;
}stc_irc0_irqce11_field_t;

typedef union un_irc0_irqce11{
    uint_io32_t		u32Register;
    stc_irc0_irqce11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce11_t;

/* IRQCE12 */
#define IRC0_IRQCE12	(IRC0.unIRQCE12.u32Register)  /*@rg@*/
#define IRC0_IRQCE12_IRQCE384	(*(volatile uint_io8_t*)0xB1106180)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE385	(*(volatile uint_io8_t*)0xB1106181)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE386	(*(volatile uint_io8_t*)0xB1106182)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE387	(*(volatile uint_io8_t*)0xB1106183)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE388	(*(volatile uint_io8_t*)0xB1106184)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE389	(*(volatile uint_io8_t*)0xB1106185)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE390	(*(volatile uint_io8_t*)0xB1106186)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE391	(*(volatile uint_io8_t*)0xB1106187)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE392	(*(volatile uint_io8_t*)0xB1106188)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE393	(*(volatile uint_io8_t*)0xB1106189)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE394	(*(volatile uint_io8_t*)0xB110618A)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE395	(*(volatile uint_io8_t*)0xB110618B)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE396	(*(volatile uint_io8_t*)0xB110618C)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE397	(*(volatile uint_io8_t*)0xB110618D)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE398	(*(volatile uint_io8_t*)0xB110618E)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE399	(*(volatile uint_io8_t*)0xB110618F)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE400	(*(volatile uint_io8_t*)0xB1106190)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE401	(*(volatile uint_io8_t*)0xB1106191)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE402	(*(volatile uint_io8_t*)0xB1106192)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE403	(*(volatile uint_io8_t*)0xB1106193)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE404	(*(volatile uint_io8_t*)0xB1106194)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE405	(*(volatile uint_io8_t*)0xB1106195)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE406	(*(volatile uint_io8_t*)0xB1106196)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE407	(*(volatile uint_io8_t*)0xB1106197)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE408	(*(volatile uint_io8_t*)0xB1106198)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE409	(*(volatile uint_io8_t*)0xB1106199)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE410	(*(volatile uint_io8_t*)0xB110619A)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE411	(*(volatile uint_io8_t*)0xB110619B)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE412	(*(volatile uint_io8_t*)0xB110619C)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE413	(*(volatile uint_io8_t*)0xB110619D)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE414	(*(volatile uint_io8_t*)0xB110619E)  /*@bfbba@*/
#define IRC0_IRQCE12_IRQCE415	(*(volatile uint_io8_t*)0xB110619F)  /*@bfbba@*/

typedef struct stc_irc0_irqce12_field{
    uint_io32_t		u1IRQCE384:1;
    uint_io32_t		u1IRQCE385:1;
    uint_io32_t		u1IRQCE386:1;
    uint_io32_t		u1IRQCE387:1;
    uint_io32_t		u1IRQCE388:1;
    uint_io32_t		u1IRQCE389:1;
    uint_io32_t		u1IRQCE390:1;
    uint_io32_t		u1IRQCE391:1;
    uint_io32_t		u1IRQCE392:1;
    uint_io32_t		u1IRQCE393:1;
    uint_io32_t		u1IRQCE394:1;
    uint_io32_t		u1IRQCE395:1;
    uint_io32_t		u1IRQCE396:1;
    uint_io32_t		u1IRQCE397:1;
    uint_io32_t		u1IRQCE398:1;
    uint_io32_t		u1IRQCE399:1;
    uint_io32_t		u1IRQCE400:1;
    uint_io32_t		u1IRQCE401:1;
    uint_io32_t		u1IRQCE402:1;
    uint_io32_t		u1IRQCE403:1;
    uint_io32_t		u1IRQCE404:1;
    uint_io32_t		u1IRQCE405:1;
    uint_io32_t		u1IRQCE406:1;
    uint_io32_t		u1IRQCE407:1;
    uint_io32_t		u1IRQCE408:1;
    uint_io32_t		u1IRQCE409:1;
    uint_io32_t		u1IRQCE410:1;
    uint_io32_t		u1IRQCE411:1;
    uint_io32_t		u1IRQCE412:1;
    uint_io32_t		u1IRQCE413:1;
    uint_io32_t		u1IRQCE414:1;
    uint_io32_t		u1IRQCE415:1;
}stc_irc0_irqce12_field_t;

typedef union un_irc0_irqce12{
    uint_io32_t		u32Register;
    stc_irc0_irqce12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce12_t;

/* IRQCE13 */
#define IRC0_IRQCE13	(IRC0.unIRQCE13.u32Register)  /*@rg@*/
#define IRC0_IRQCE13_IRQCE416	(*(volatile uint_io8_t*)0xB11061A0)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE417	(*(volatile uint_io8_t*)0xB11061A1)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE418	(*(volatile uint_io8_t*)0xB11061A2)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE419	(*(volatile uint_io8_t*)0xB11061A3)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE420	(*(volatile uint_io8_t*)0xB11061A4)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE421	(*(volatile uint_io8_t*)0xB11061A5)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE422	(*(volatile uint_io8_t*)0xB11061A6)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE423	(*(volatile uint_io8_t*)0xB11061A7)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE424	(*(volatile uint_io8_t*)0xB11061A8)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE425	(*(volatile uint_io8_t*)0xB11061A9)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE426	(*(volatile uint_io8_t*)0xB11061AA)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE427	(*(volatile uint_io8_t*)0xB11061AB)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE428	(*(volatile uint_io8_t*)0xB11061AC)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE429	(*(volatile uint_io8_t*)0xB11061AD)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE430	(*(volatile uint_io8_t*)0xB11061AE)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE431	(*(volatile uint_io8_t*)0xB11061AF)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE432	(*(volatile uint_io8_t*)0xB11061B0)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE433	(*(volatile uint_io8_t*)0xB11061B1)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE434	(*(volatile uint_io8_t*)0xB11061B2)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE435	(*(volatile uint_io8_t*)0xB11061B3)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE436	(*(volatile uint_io8_t*)0xB11061B4)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE437	(*(volatile uint_io8_t*)0xB11061B5)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE438	(*(volatile uint_io8_t*)0xB11061B6)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE439	(*(volatile uint_io8_t*)0xB11061B7)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE440	(*(volatile uint_io8_t*)0xB11061B8)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE441	(*(volatile uint_io8_t*)0xB11061B9)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE442	(*(volatile uint_io8_t*)0xB11061BA)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE443	(*(volatile uint_io8_t*)0xB11061BB)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE444	(*(volatile uint_io8_t*)0xB11061BC)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE445	(*(volatile uint_io8_t*)0xB11061BD)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE446	(*(volatile uint_io8_t*)0xB11061BE)  /*@bfbba@*/
#define IRC0_IRQCE13_IRQCE447	(*(volatile uint_io8_t*)0xB11061BF)  /*@bfbba@*/

typedef struct stc_irc0_irqce13_field{
    uint_io32_t		u1IRQCE416:1;
    uint_io32_t		u1IRQCE417:1;
    uint_io32_t		u1IRQCE418:1;
    uint_io32_t		u1IRQCE419:1;
    uint_io32_t		u1IRQCE420:1;
    uint_io32_t		u1IRQCE421:1;
    uint_io32_t		u1IRQCE422:1;
    uint_io32_t		u1IRQCE423:1;
    uint_io32_t		u1IRQCE424:1;
    uint_io32_t		u1IRQCE425:1;
    uint_io32_t		u1IRQCE426:1;
    uint_io32_t		u1IRQCE427:1;
    uint_io32_t		u1IRQCE428:1;
    uint_io32_t		u1IRQCE429:1;
    uint_io32_t		u1IRQCE430:1;
    uint_io32_t		u1IRQCE431:1;
    uint_io32_t		u1IRQCE432:1;
    uint_io32_t		u1IRQCE433:1;
    uint_io32_t		u1IRQCE434:1;
    uint_io32_t		u1IRQCE435:1;
    uint_io32_t		u1IRQCE436:1;
    uint_io32_t		u1IRQCE437:1;
    uint_io32_t		u1IRQCE438:1;
    uint_io32_t		u1IRQCE439:1;
    uint_io32_t		u1IRQCE440:1;
    uint_io32_t		u1IRQCE441:1;
    uint_io32_t		u1IRQCE442:1;
    uint_io32_t		u1IRQCE443:1;
    uint_io32_t		u1IRQCE444:1;
    uint_io32_t		u1IRQCE445:1;
    uint_io32_t		u1IRQCE446:1;
    uint_io32_t		u1IRQCE447:1;
}stc_irc0_irqce13_field_t;

typedef union un_irc0_irqce13{
    uint_io32_t		u32Register;
    stc_irc0_irqce13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce13_t;

/* IRQCE14 */
#define IRC0_IRQCE14	(IRC0.unIRQCE14.u32Register)  /*@rg@*/
#define IRC0_IRQCE14_IRQCE448	(*(volatile uint_io8_t*)0xB11061C0)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE449	(*(volatile uint_io8_t*)0xB11061C1)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE450	(*(volatile uint_io8_t*)0xB11061C2)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE451	(*(volatile uint_io8_t*)0xB11061C3)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE452	(*(volatile uint_io8_t*)0xB11061C4)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE453	(*(volatile uint_io8_t*)0xB11061C5)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE454	(*(volatile uint_io8_t*)0xB11061C6)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE455	(*(volatile uint_io8_t*)0xB11061C7)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE456	(*(volatile uint_io8_t*)0xB11061C8)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE457	(*(volatile uint_io8_t*)0xB11061C9)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE458	(*(volatile uint_io8_t*)0xB11061CA)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE459	(*(volatile uint_io8_t*)0xB11061CB)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE460	(*(volatile uint_io8_t*)0xB11061CC)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE461	(*(volatile uint_io8_t*)0xB11061CD)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE462	(*(volatile uint_io8_t*)0xB11061CE)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE463	(*(volatile uint_io8_t*)0xB11061CF)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE464	(*(volatile uint_io8_t*)0xB11061D0)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE465	(*(volatile uint_io8_t*)0xB11061D1)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE466	(*(volatile uint_io8_t*)0xB11061D2)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE467	(*(volatile uint_io8_t*)0xB11061D3)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE468	(*(volatile uint_io8_t*)0xB11061D4)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE469	(*(volatile uint_io8_t*)0xB11061D5)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE470	(*(volatile uint_io8_t*)0xB11061D6)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE471	(*(volatile uint_io8_t*)0xB11061D7)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE472	(*(volatile uint_io8_t*)0xB11061D8)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE473	(*(volatile uint_io8_t*)0xB11061D9)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE474	(*(volatile uint_io8_t*)0xB11061DA)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE475	(*(volatile uint_io8_t*)0xB11061DB)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE476	(*(volatile uint_io8_t*)0xB11061DC)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE477	(*(volatile uint_io8_t*)0xB11061DD)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE478	(*(volatile uint_io8_t*)0xB11061DE)  /*@bfbba@*/
#define IRC0_IRQCE14_IRQCE479	(*(volatile uint_io8_t*)0xB11061DF)  /*@bfbba@*/

typedef struct stc_irc0_irqce14_field{
    uint_io32_t		u1IRQCE448:1;
    uint_io32_t		u1IRQCE449:1;
    uint_io32_t		u1IRQCE450:1;
    uint_io32_t		u1IRQCE451:1;
    uint_io32_t		u1IRQCE452:1;
    uint_io32_t		u1IRQCE453:1;
    uint_io32_t		u1IRQCE454:1;
    uint_io32_t		u1IRQCE455:1;
    uint_io32_t		u1IRQCE456:1;
    uint_io32_t		u1IRQCE457:1;
    uint_io32_t		u1IRQCE458:1;
    uint_io32_t		u1IRQCE459:1;
    uint_io32_t		u1IRQCE460:1;
    uint_io32_t		u1IRQCE461:1;
    uint_io32_t		u1IRQCE462:1;
    uint_io32_t		u1IRQCE463:1;
    uint_io32_t		u1IRQCE464:1;
    uint_io32_t		u1IRQCE465:1;
    uint_io32_t		u1IRQCE466:1;
    uint_io32_t		u1IRQCE467:1;
    uint_io32_t		u1IRQCE468:1;
    uint_io32_t		u1IRQCE469:1;
    uint_io32_t		u1IRQCE470:1;
    uint_io32_t		u1IRQCE471:1;
    uint_io32_t		u1IRQCE472:1;
    uint_io32_t		u1IRQCE473:1;
    uint_io32_t		u1IRQCE474:1;
    uint_io32_t		u1IRQCE475:1;
    uint_io32_t		u1IRQCE476:1;
    uint_io32_t		u1IRQCE477:1;
    uint_io32_t		u1IRQCE478:1;
    uint_io32_t		u1IRQCE479:1;
}stc_irc0_irqce14_field_t;

typedef union un_irc0_irqce14{
    uint_io32_t		u32Register;
    stc_irc0_irqce14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce14_t;

/* IRQCE15 */
#define IRC0_IRQCE15	(IRC0.unIRQCE15.u32Register)  /*@rg@*/
#define IRC0_IRQCE15_IRQCE480	(*(volatile uint_io8_t*)0xB11061E0)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE481	(*(volatile uint_io8_t*)0xB11061E1)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE482	(*(volatile uint_io8_t*)0xB11061E2)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE483	(*(volatile uint_io8_t*)0xB11061E3)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE484	(*(volatile uint_io8_t*)0xB11061E4)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE485	(*(volatile uint_io8_t*)0xB11061E5)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE486	(*(volatile uint_io8_t*)0xB11061E6)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE487	(*(volatile uint_io8_t*)0xB11061E7)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE488	(*(volatile uint_io8_t*)0xB11061E8)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE489	(*(volatile uint_io8_t*)0xB11061E9)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE490	(*(volatile uint_io8_t*)0xB11061EA)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE491	(*(volatile uint_io8_t*)0xB11061EB)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE492	(*(volatile uint_io8_t*)0xB11061EC)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE493	(*(volatile uint_io8_t*)0xB11061ED)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE494	(*(volatile uint_io8_t*)0xB11061EE)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE495	(*(volatile uint_io8_t*)0xB11061EF)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE496	(*(volatile uint_io8_t*)0xB11061F0)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE497	(*(volatile uint_io8_t*)0xB11061F1)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE498	(*(volatile uint_io8_t*)0xB11061F2)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE499	(*(volatile uint_io8_t*)0xB11061F3)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE500	(*(volatile uint_io8_t*)0xB11061F4)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE501	(*(volatile uint_io8_t*)0xB11061F5)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE502	(*(volatile uint_io8_t*)0xB11061F6)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE503	(*(volatile uint_io8_t*)0xB11061F7)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE504	(*(volatile uint_io8_t*)0xB11061F8)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE505	(*(volatile uint_io8_t*)0xB11061F9)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE506	(*(volatile uint_io8_t*)0xB11061FA)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE507	(*(volatile uint_io8_t*)0xB11061FB)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE508	(*(volatile uint_io8_t*)0xB11061FC)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE509	(*(volatile uint_io8_t*)0xB11061FD)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE510	(*(volatile uint_io8_t*)0xB11061FE)  /*@bfbba@*/
#define IRC0_IRQCE15_IRQCE511	(*(volatile uint_io8_t*)0xB11061FF)  /*@bfbba@*/

typedef struct stc_irc0_irqce15_field{
    uint_io32_t		u1IRQCE480:1;
    uint_io32_t		u1IRQCE481:1;
    uint_io32_t		u1IRQCE482:1;
    uint_io32_t		u1IRQCE483:1;
    uint_io32_t		u1IRQCE484:1;
    uint_io32_t		u1IRQCE485:1;
    uint_io32_t		u1IRQCE486:1;
    uint_io32_t		u1IRQCE487:1;
    uint_io32_t		u1IRQCE488:1;
    uint_io32_t		u1IRQCE489:1;
    uint_io32_t		u1IRQCE490:1;
    uint_io32_t		u1IRQCE491:1;
    uint_io32_t		u1IRQCE492:1;
    uint_io32_t		u1IRQCE493:1;
    uint_io32_t		u1IRQCE494:1;
    uint_io32_t		u1IRQCE495:1;
    uint_io32_t		u1IRQCE496:1;
    uint_io32_t		u1IRQCE497:1;
    uint_io32_t		u1IRQCE498:1;
    uint_io32_t		u1IRQCE499:1;
    uint_io32_t		u1IRQCE500:1;
    uint_io32_t		u1IRQCE501:1;
    uint_io32_t		u1IRQCE502:1;
    uint_io32_t		u1IRQCE503:1;
    uint_io32_t		u1IRQCE504:1;
    uint_io32_t		u1IRQCE505:1;
    uint_io32_t		u1IRQCE506:1;
    uint_io32_t		u1IRQCE507:1;
    uint_io32_t		u1IRQCE508:1;
    uint_io32_t		u1IRQCE509:1;
    uint_io32_t		u1IRQCE510:1;
    uint_io32_t		u1IRQCE511:1;
}stc_irc0_irqce15_field_t;

typedef union un_irc0_irqce15{
    uint_io32_t		u32Register;
    stc_irc0_irqce15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqce15_t;

/* NMIHC */
#define IRC0_NMIHC	(IRC0.unNMIHC.u32Register)  /*@rg@*/
#define IRC0_NMIHC_NMIHCN	(IRC0.unNMIHC.stcField.u5NMIHCN)  /*@bf@*/

typedef struct stc_irc0_nmihc_field{
    uint_io32_t		u5NMIHCN:5;
    uint_io32_t		:27;
}stc_irc0_nmihc_field_t;

typedef union un_irc0_nmihc{
    uint_io32_t		u32Register;
    stc_irc0_nmihc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmihc_t;

/* NMIHS */
#define IRC0_NMIHS	(IRC0.unNMIHS.u32Register)  /*@rg@*/
#define IRC0_NMIHS_NMIHS0	(*(volatile uint_io8_t*)0xB1106220)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS1	(*(volatile uint_io8_t*)0xB1106221)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS2	(*(volatile uint_io8_t*)0xB1106222)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS3	(*(volatile uint_io8_t*)0xB1106223)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS4	(*(volatile uint_io8_t*)0xB1106224)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS5	(*(volatile uint_io8_t*)0xB1106225)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS6	(*(volatile uint_io8_t*)0xB1106226)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS7	(*(volatile uint_io8_t*)0xB1106227)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS8	(*(volatile uint_io8_t*)0xB1106228)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS9	(*(volatile uint_io8_t*)0xB1106229)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS10	(*(volatile uint_io8_t*)0xB110622A)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS11	(*(volatile uint_io8_t*)0xB110622B)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS12	(*(volatile uint_io8_t*)0xB110622C)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS13	(*(volatile uint_io8_t*)0xB110622D)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS14	(*(volatile uint_io8_t*)0xB110622E)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS15	(*(volatile uint_io8_t*)0xB110622F)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS16	(*(volatile uint_io8_t*)0xB1106230)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS17	(*(volatile uint_io8_t*)0xB1106231)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS18	(*(volatile uint_io8_t*)0xB1106232)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS19	(*(volatile uint_io8_t*)0xB1106233)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS20	(*(volatile uint_io8_t*)0xB1106234)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS21	(*(volatile uint_io8_t*)0xB1106235)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS22	(*(volatile uint_io8_t*)0xB1106236)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS23	(*(volatile uint_io8_t*)0xB1106237)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS24	(*(volatile uint_io8_t*)0xB1106238)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS25	(*(volatile uint_io8_t*)0xB1106239)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS26	(*(volatile uint_io8_t*)0xB110623A)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS27	(*(volatile uint_io8_t*)0xB110623B)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS28	(*(volatile uint_io8_t*)0xB110623C)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS29	(*(volatile uint_io8_t*)0xB110623D)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS30	(*(volatile uint_io8_t*)0xB110623E)  /*@bfbba@*/
#define IRC0_NMIHS_NMIHS31	(*(volatile uint_io8_t*)0xB110623F)  /*@bfbba@*/

typedef struct stc_irc0_nmihs_field{
    uint_io32_t		u1NMIHS0:1;
    uint_io32_t		u1NMIHS1:1;
    uint_io32_t		u1NMIHS2:1;
    uint_io32_t		u1NMIHS3:1;
    uint_io32_t		u1NMIHS4:1;
    uint_io32_t		u1NMIHS5:1;
    uint_io32_t		u1NMIHS6:1;
    uint_io32_t		u1NMIHS7:1;
    uint_io32_t		u1NMIHS8:1;
    uint_io32_t		u1NMIHS9:1;
    uint_io32_t		u1NMIHS10:1;
    uint_io32_t		u1NMIHS11:1;
    uint_io32_t		u1NMIHS12:1;
    uint_io32_t		u1NMIHS13:1;
    uint_io32_t		u1NMIHS14:1;
    uint_io32_t		u1NMIHS15:1;
    uint_io32_t		u1NMIHS16:1;
    uint_io32_t		u1NMIHS17:1;
    uint_io32_t		u1NMIHS18:1;
    uint_io32_t		u1NMIHS19:1;
    uint_io32_t		u1NMIHS20:1;
    uint_io32_t		u1NMIHS21:1;
    uint_io32_t		u1NMIHS22:1;
    uint_io32_t		u1NMIHS23:1;
    uint_io32_t		u1NMIHS24:1;
    uint_io32_t		u1NMIHS25:1;
    uint_io32_t		u1NMIHS26:1;
    uint_io32_t		u1NMIHS27:1;
    uint_io32_t		u1NMIHS28:1;
    uint_io32_t		u1NMIHS29:1;
    uint_io32_t		u1NMIHS30:1;
    uint_io32_t		u1NMIHS31:1;
}stc_irc0_nmihs_field_t;

typedef union un_irc0_nmihs{
    uint_io32_t		u32Register;
    stc_irc0_nmihs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmihs_t;

/* IRQHC */
#define IRC0_IRQHC	(IRC0.unIRQHC.u32Register)  /*@rg@*/
#define IRC0_IRQHC_IRQHCN	(IRC0.unIRQHC.stcField.u9IRQHCN)  /*@bf@*/

typedef struct stc_irc0_irqhc_field{
    uint_io32_t		u9IRQHCN:9;
    uint_io32_t		:23;
}stc_irc0_irqhc_field_t;

typedef union un_irc0_irqhc{
    uint_io32_t		u32Register;
    stc_irc0_irqhc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhc_t;

/* IRQHS0 */
#define IRC0_IRQHS0	(IRC0.unIRQHS0.u32Register)  /*@rg@*/
#define IRC0_IRQHS0_IRQHS0	(*(volatile uint_io8_t*)0xB1106280)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS1	(*(volatile uint_io8_t*)0xB1106281)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS2	(*(volatile uint_io8_t*)0xB1106282)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS3	(*(volatile uint_io8_t*)0xB1106283)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS4	(*(volatile uint_io8_t*)0xB1106284)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS5	(*(volatile uint_io8_t*)0xB1106285)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS6	(*(volatile uint_io8_t*)0xB1106286)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS7	(*(volatile uint_io8_t*)0xB1106287)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS8	(*(volatile uint_io8_t*)0xB1106288)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS9	(*(volatile uint_io8_t*)0xB1106289)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS10	(*(volatile uint_io8_t*)0xB110628A)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS11	(*(volatile uint_io8_t*)0xB110628B)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS12	(*(volatile uint_io8_t*)0xB110628C)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS13	(*(volatile uint_io8_t*)0xB110628D)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS14	(*(volatile uint_io8_t*)0xB110628E)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS15	(*(volatile uint_io8_t*)0xB110628F)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS16	(*(volatile uint_io8_t*)0xB1106290)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS17	(*(volatile uint_io8_t*)0xB1106291)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS18	(*(volatile uint_io8_t*)0xB1106292)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS19	(*(volatile uint_io8_t*)0xB1106293)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS20	(*(volatile uint_io8_t*)0xB1106294)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS21	(*(volatile uint_io8_t*)0xB1106295)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS22	(*(volatile uint_io8_t*)0xB1106296)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS23	(*(volatile uint_io8_t*)0xB1106297)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS24	(*(volatile uint_io8_t*)0xB1106298)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS25	(*(volatile uint_io8_t*)0xB1106299)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS26	(*(volatile uint_io8_t*)0xB110629A)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS27	(*(volatile uint_io8_t*)0xB110629B)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS28	(*(volatile uint_io8_t*)0xB110629C)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS29	(*(volatile uint_io8_t*)0xB110629D)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS30	(*(volatile uint_io8_t*)0xB110629E)  /*@bfbba@*/
#define IRC0_IRQHS0_IRQHS31	(*(volatile uint_io8_t*)0xB110629F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs0_field{
    uint_io32_t		u1IRQHS0:1;
    uint_io32_t		u1IRQHS1:1;
    uint_io32_t		u1IRQHS2:1;
    uint_io32_t		u1IRQHS3:1;
    uint_io32_t		u1IRQHS4:1;
    uint_io32_t		u1IRQHS5:1;
    uint_io32_t		u1IRQHS6:1;
    uint_io32_t		u1IRQHS7:1;
    uint_io32_t		u1IRQHS8:1;
    uint_io32_t		u1IRQHS9:1;
    uint_io32_t		u1IRQHS10:1;
    uint_io32_t		u1IRQHS11:1;
    uint_io32_t		u1IRQHS12:1;
    uint_io32_t		u1IRQHS13:1;
    uint_io32_t		u1IRQHS14:1;
    uint_io32_t		u1IRQHS15:1;
    uint_io32_t		u1IRQHS16:1;
    uint_io32_t		u1IRQHS17:1;
    uint_io32_t		u1IRQHS18:1;
    uint_io32_t		u1IRQHS19:1;
    uint_io32_t		u1IRQHS20:1;
    uint_io32_t		u1IRQHS21:1;
    uint_io32_t		u1IRQHS22:1;
    uint_io32_t		u1IRQHS23:1;
    uint_io32_t		u1IRQHS24:1;
    uint_io32_t		u1IRQHS25:1;
    uint_io32_t		u1IRQHS26:1;
    uint_io32_t		u1IRQHS27:1;
    uint_io32_t		u1IRQHS28:1;
    uint_io32_t		u1IRQHS29:1;
    uint_io32_t		u1IRQHS30:1;
    uint_io32_t		u1IRQHS31:1;
}stc_irc0_irqhs0_field_t;

typedef union un_irc0_irqhs0{
    uint_io32_t		u32Register;
    stc_irc0_irqhs0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs0_t;

/* IRQHS1 */
#define IRC0_IRQHS1	(IRC0.unIRQHS1.u32Register)  /*@rg@*/
#define IRC0_IRQHS1_IRQHS32	(*(volatile uint_io8_t*)0xB11062A0)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS33	(*(volatile uint_io8_t*)0xB11062A1)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS34	(*(volatile uint_io8_t*)0xB11062A2)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS35	(*(volatile uint_io8_t*)0xB11062A3)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS36	(*(volatile uint_io8_t*)0xB11062A4)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS37	(*(volatile uint_io8_t*)0xB11062A5)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS38	(*(volatile uint_io8_t*)0xB11062A6)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS39	(*(volatile uint_io8_t*)0xB11062A7)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS40	(*(volatile uint_io8_t*)0xB11062A8)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS41	(*(volatile uint_io8_t*)0xB11062A9)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS42	(*(volatile uint_io8_t*)0xB11062AA)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS43	(*(volatile uint_io8_t*)0xB11062AB)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS44	(*(volatile uint_io8_t*)0xB11062AC)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS45	(*(volatile uint_io8_t*)0xB11062AD)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS46	(*(volatile uint_io8_t*)0xB11062AE)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS47	(*(volatile uint_io8_t*)0xB11062AF)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS48	(*(volatile uint_io8_t*)0xB11062B0)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS49	(*(volatile uint_io8_t*)0xB11062B1)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS50	(*(volatile uint_io8_t*)0xB11062B2)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS51	(*(volatile uint_io8_t*)0xB11062B3)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS52	(*(volatile uint_io8_t*)0xB11062B4)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS53	(*(volatile uint_io8_t*)0xB11062B5)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS54	(*(volatile uint_io8_t*)0xB11062B6)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS55	(*(volatile uint_io8_t*)0xB11062B7)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS56	(*(volatile uint_io8_t*)0xB11062B8)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS57	(*(volatile uint_io8_t*)0xB11062B9)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS58	(*(volatile uint_io8_t*)0xB11062BA)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS59	(*(volatile uint_io8_t*)0xB11062BB)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS60	(*(volatile uint_io8_t*)0xB11062BC)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS61	(*(volatile uint_io8_t*)0xB11062BD)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS62	(*(volatile uint_io8_t*)0xB11062BE)  /*@bfbba@*/
#define IRC0_IRQHS1_IRQHS63	(*(volatile uint_io8_t*)0xB11062BF)  /*@bfbba@*/

typedef struct stc_irc0_irqhs1_field{
    uint_io32_t		u1IRQHS32:1;
    uint_io32_t		u1IRQHS33:1;
    uint_io32_t		u1IRQHS34:1;
    uint_io32_t		u1IRQHS35:1;
    uint_io32_t		u1IRQHS36:1;
    uint_io32_t		u1IRQHS37:1;
    uint_io32_t		u1IRQHS38:1;
    uint_io32_t		u1IRQHS39:1;
    uint_io32_t		u1IRQHS40:1;
    uint_io32_t		u1IRQHS41:1;
    uint_io32_t		u1IRQHS42:1;
    uint_io32_t		u1IRQHS43:1;
    uint_io32_t		u1IRQHS44:1;
    uint_io32_t		u1IRQHS45:1;
    uint_io32_t		u1IRQHS46:1;
    uint_io32_t		u1IRQHS47:1;
    uint_io32_t		u1IRQHS48:1;
    uint_io32_t		u1IRQHS49:1;
    uint_io32_t		u1IRQHS50:1;
    uint_io32_t		u1IRQHS51:1;
    uint_io32_t		u1IRQHS52:1;
    uint_io32_t		u1IRQHS53:1;
    uint_io32_t		u1IRQHS54:1;
    uint_io32_t		u1IRQHS55:1;
    uint_io32_t		u1IRQHS56:1;
    uint_io32_t		u1IRQHS57:1;
    uint_io32_t		u1IRQHS58:1;
    uint_io32_t		u1IRQHS59:1;
    uint_io32_t		u1IRQHS60:1;
    uint_io32_t		u1IRQHS61:1;
    uint_io32_t		u1IRQHS62:1;
    uint_io32_t		u1IRQHS63:1;
}stc_irc0_irqhs1_field_t;

typedef union un_irc0_irqhs1{
    uint_io32_t		u32Register;
    stc_irc0_irqhs1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs1_t;

/* IRQHS2 */
#define IRC0_IRQHS2	(IRC0.unIRQHS2.u32Register)  /*@rg@*/
#define IRC0_IRQHS2_IRQHS64	(*(volatile uint_io8_t*)0xB11062C0)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS65	(*(volatile uint_io8_t*)0xB11062C1)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS66	(*(volatile uint_io8_t*)0xB11062C2)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS67	(*(volatile uint_io8_t*)0xB11062C3)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS68	(*(volatile uint_io8_t*)0xB11062C4)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS69	(*(volatile uint_io8_t*)0xB11062C5)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS70	(*(volatile uint_io8_t*)0xB11062C6)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS71	(*(volatile uint_io8_t*)0xB11062C7)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS72	(*(volatile uint_io8_t*)0xB11062C8)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS73	(*(volatile uint_io8_t*)0xB11062C9)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS74	(*(volatile uint_io8_t*)0xB11062CA)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS75	(*(volatile uint_io8_t*)0xB11062CB)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS76	(*(volatile uint_io8_t*)0xB11062CC)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS77	(*(volatile uint_io8_t*)0xB11062CD)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS78	(*(volatile uint_io8_t*)0xB11062CE)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS79	(*(volatile uint_io8_t*)0xB11062CF)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS80	(*(volatile uint_io8_t*)0xB11062D0)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS81	(*(volatile uint_io8_t*)0xB11062D1)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS82	(*(volatile uint_io8_t*)0xB11062D2)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS83	(*(volatile uint_io8_t*)0xB11062D3)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS84	(*(volatile uint_io8_t*)0xB11062D4)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS85	(*(volatile uint_io8_t*)0xB11062D5)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS86	(*(volatile uint_io8_t*)0xB11062D6)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS87	(*(volatile uint_io8_t*)0xB11062D7)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS88	(*(volatile uint_io8_t*)0xB11062D8)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS89	(*(volatile uint_io8_t*)0xB11062D9)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS90	(*(volatile uint_io8_t*)0xB11062DA)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS91	(*(volatile uint_io8_t*)0xB11062DB)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS92	(*(volatile uint_io8_t*)0xB11062DC)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS93	(*(volatile uint_io8_t*)0xB11062DD)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS94	(*(volatile uint_io8_t*)0xB11062DE)  /*@bfbba@*/
#define IRC0_IRQHS2_IRQHS95	(*(volatile uint_io8_t*)0xB11062DF)  /*@bfbba@*/

typedef struct stc_irc0_irqhs2_field{
    uint_io32_t		u1IRQHS64:1;
    uint_io32_t		u1IRQHS65:1;
    uint_io32_t		u1IRQHS66:1;
    uint_io32_t		u1IRQHS67:1;
    uint_io32_t		u1IRQHS68:1;
    uint_io32_t		u1IRQHS69:1;
    uint_io32_t		u1IRQHS70:1;
    uint_io32_t		u1IRQHS71:1;
    uint_io32_t		u1IRQHS72:1;
    uint_io32_t		u1IRQHS73:1;
    uint_io32_t		u1IRQHS74:1;
    uint_io32_t		u1IRQHS75:1;
    uint_io32_t		u1IRQHS76:1;
    uint_io32_t		u1IRQHS77:1;
    uint_io32_t		u1IRQHS78:1;
    uint_io32_t		u1IRQHS79:1;
    uint_io32_t		u1IRQHS80:1;
    uint_io32_t		u1IRQHS81:1;
    uint_io32_t		u1IRQHS82:1;
    uint_io32_t		u1IRQHS83:1;
    uint_io32_t		u1IRQHS84:1;
    uint_io32_t		u1IRQHS85:1;
    uint_io32_t		u1IRQHS86:1;
    uint_io32_t		u1IRQHS87:1;
    uint_io32_t		u1IRQHS88:1;
    uint_io32_t		u1IRQHS89:1;
    uint_io32_t		u1IRQHS90:1;
    uint_io32_t		u1IRQHS91:1;
    uint_io32_t		u1IRQHS92:1;
    uint_io32_t		u1IRQHS93:1;
    uint_io32_t		u1IRQHS94:1;
    uint_io32_t		u1IRQHS95:1;
}stc_irc0_irqhs2_field_t;

typedef union un_irc0_irqhs2{
    uint_io32_t		u32Register;
    stc_irc0_irqhs2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs2_t;

/* IRQHS3 */
#define IRC0_IRQHS3	(IRC0.unIRQHS3.u32Register)  /*@rg@*/
#define IRC0_IRQHS3_IRQHS96	(*(volatile uint_io8_t*)0xB11062E0)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS97	(*(volatile uint_io8_t*)0xB11062E1)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS98	(*(volatile uint_io8_t*)0xB11062E2)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS99	(*(volatile uint_io8_t*)0xB11062E3)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS100	(*(volatile uint_io8_t*)0xB11062E4)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS101	(*(volatile uint_io8_t*)0xB11062E5)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS102	(*(volatile uint_io8_t*)0xB11062E6)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS103	(*(volatile uint_io8_t*)0xB11062E7)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS104	(*(volatile uint_io8_t*)0xB11062E8)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS105	(*(volatile uint_io8_t*)0xB11062E9)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS106	(*(volatile uint_io8_t*)0xB11062EA)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS107	(*(volatile uint_io8_t*)0xB11062EB)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS108	(*(volatile uint_io8_t*)0xB11062EC)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS109	(*(volatile uint_io8_t*)0xB11062ED)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS110	(*(volatile uint_io8_t*)0xB11062EE)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS111	(*(volatile uint_io8_t*)0xB11062EF)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS112	(*(volatile uint_io8_t*)0xB11062F0)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS113	(*(volatile uint_io8_t*)0xB11062F1)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS114	(*(volatile uint_io8_t*)0xB11062F2)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS115	(*(volatile uint_io8_t*)0xB11062F3)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS116	(*(volatile uint_io8_t*)0xB11062F4)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS117	(*(volatile uint_io8_t*)0xB11062F5)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS118	(*(volatile uint_io8_t*)0xB11062F6)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS119	(*(volatile uint_io8_t*)0xB11062F7)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS120	(*(volatile uint_io8_t*)0xB11062F8)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS121	(*(volatile uint_io8_t*)0xB11062F9)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS122	(*(volatile uint_io8_t*)0xB11062FA)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS123	(*(volatile uint_io8_t*)0xB11062FB)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS124	(*(volatile uint_io8_t*)0xB11062FC)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS125	(*(volatile uint_io8_t*)0xB11062FD)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS126	(*(volatile uint_io8_t*)0xB11062FE)  /*@bfbba@*/
#define IRC0_IRQHS3_IRQHS127	(*(volatile uint_io8_t*)0xB11062FF)  /*@bfbba@*/

typedef struct stc_irc0_irqhs3_field{
    uint_io32_t		u1IRQHS96:1;
    uint_io32_t		u1IRQHS97:1;
    uint_io32_t		u1IRQHS98:1;
    uint_io32_t		u1IRQHS99:1;
    uint_io32_t		u1IRQHS100:1;
    uint_io32_t		u1IRQHS101:1;
    uint_io32_t		u1IRQHS102:1;
    uint_io32_t		u1IRQHS103:1;
    uint_io32_t		u1IRQHS104:1;
    uint_io32_t		u1IRQHS105:1;
    uint_io32_t		u1IRQHS106:1;
    uint_io32_t		u1IRQHS107:1;
    uint_io32_t		u1IRQHS108:1;
    uint_io32_t		u1IRQHS109:1;
    uint_io32_t		u1IRQHS110:1;
    uint_io32_t		u1IRQHS111:1;
    uint_io32_t		u1IRQHS112:1;
    uint_io32_t		u1IRQHS113:1;
    uint_io32_t		u1IRQHS114:1;
    uint_io32_t		u1IRQHS115:1;
    uint_io32_t		u1IRQHS116:1;
    uint_io32_t		u1IRQHS117:1;
    uint_io32_t		u1IRQHS118:1;
    uint_io32_t		u1IRQHS119:1;
    uint_io32_t		u1IRQHS120:1;
    uint_io32_t		u1IRQHS121:1;
    uint_io32_t		u1IRQHS122:1;
    uint_io32_t		u1IRQHS123:1;
    uint_io32_t		u1IRQHS124:1;
    uint_io32_t		u1IRQHS125:1;
    uint_io32_t		u1IRQHS126:1;
    uint_io32_t		u1IRQHS127:1;
}stc_irc0_irqhs3_field_t;

typedef union un_irc0_irqhs3{
    uint_io32_t		u32Register;
    stc_irc0_irqhs3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs3_t;

/* IRQHS4 */
#define IRC0_IRQHS4	(IRC0.unIRQHS4.u32Register)  /*@rg@*/
#define IRC0_IRQHS4_IRQHS128	(*(volatile uint_io8_t*)0xB1106300)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS129	(*(volatile uint_io8_t*)0xB1106301)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS130	(*(volatile uint_io8_t*)0xB1106302)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS131	(*(volatile uint_io8_t*)0xB1106303)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS132	(*(volatile uint_io8_t*)0xB1106304)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS133	(*(volatile uint_io8_t*)0xB1106305)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS134	(*(volatile uint_io8_t*)0xB1106306)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS135	(*(volatile uint_io8_t*)0xB1106307)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS136	(*(volatile uint_io8_t*)0xB1106308)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS137	(*(volatile uint_io8_t*)0xB1106309)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS138	(*(volatile uint_io8_t*)0xB110630A)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS139	(*(volatile uint_io8_t*)0xB110630B)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS140	(*(volatile uint_io8_t*)0xB110630C)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS141	(*(volatile uint_io8_t*)0xB110630D)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS142	(*(volatile uint_io8_t*)0xB110630E)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS143	(*(volatile uint_io8_t*)0xB110630F)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS144	(*(volatile uint_io8_t*)0xB1106310)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS145	(*(volatile uint_io8_t*)0xB1106311)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS146	(*(volatile uint_io8_t*)0xB1106312)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS147	(*(volatile uint_io8_t*)0xB1106313)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS148	(*(volatile uint_io8_t*)0xB1106314)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS149	(*(volatile uint_io8_t*)0xB1106315)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS150	(*(volatile uint_io8_t*)0xB1106316)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS151	(*(volatile uint_io8_t*)0xB1106317)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS152	(*(volatile uint_io8_t*)0xB1106318)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS153	(*(volatile uint_io8_t*)0xB1106319)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS154	(*(volatile uint_io8_t*)0xB110631A)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS155	(*(volatile uint_io8_t*)0xB110631B)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS156	(*(volatile uint_io8_t*)0xB110631C)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS157	(*(volatile uint_io8_t*)0xB110631D)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS158	(*(volatile uint_io8_t*)0xB110631E)  /*@bfbba@*/
#define IRC0_IRQHS4_IRQHS159	(*(volatile uint_io8_t*)0xB110631F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs4_field{
    uint_io32_t		u1IRQHS128:1;
    uint_io32_t		u1IRQHS129:1;
    uint_io32_t		u1IRQHS130:1;
    uint_io32_t		u1IRQHS131:1;
    uint_io32_t		u1IRQHS132:1;
    uint_io32_t		u1IRQHS133:1;
    uint_io32_t		u1IRQHS134:1;
    uint_io32_t		u1IRQHS135:1;
    uint_io32_t		u1IRQHS136:1;
    uint_io32_t		u1IRQHS137:1;
    uint_io32_t		u1IRQHS138:1;
    uint_io32_t		u1IRQHS139:1;
    uint_io32_t		u1IRQHS140:1;
    uint_io32_t		u1IRQHS141:1;
    uint_io32_t		u1IRQHS142:1;
    uint_io32_t		u1IRQHS143:1;
    uint_io32_t		u1IRQHS144:1;
    uint_io32_t		u1IRQHS145:1;
    uint_io32_t		u1IRQHS146:1;
    uint_io32_t		u1IRQHS147:1;
    uint_io32_t		u1IRQHS148:1;
    uint_io32_t		u1IRQHS149:1;
    uint_io32_t		u1IRQHS150:1;
    uint_io32_t		u1IRQHS151:1;
    uint_io32_t		u1IRQHS152:1;
    uint_io32_t		u1IRQHS153:1;
    uint_io32_t		u1IRQHS154:1;
    uint_io32_t		u1IRQHS155:1;
    uint_io32_t		u1IRQHS156:1;
    uint_io32_t		u1IRQHS157:1;
    uint_io32_t		u1IRQHS158:1;
    uint_io32_t		u1IRQHS159:1;
}stc_irc0_irqhs4_field_t;

typedef union un_irc0_irqhs4{
    uint_io32_t		u32Register;
    stc_irc0_irqhs4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs4_t;

/* IRQHS5 */
#define IRC0_IRQHS5	(IRC0.unIRQHS5.u32Register)  /*@rg@*/
#define IRC0_IRQHS5_IRQHS160	(*(volatile uint_io8_t*)0xB1106320)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS161	(*(volatile uint_io8_t*)0xB1106321)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS162	(*(volatile uint_io8_t*)0xB1106322)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS163	(*(volatile uint_io8_t*)0xB1106323)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS164	(*(volatile uint_io8_t*)0xB1106324)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS165	(*(volatile uint_io8_t*)0xB1106325)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS166	(*(volatile uint_io8_t*)0xB1106326)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS167	(*(volatile uint_io8_t*)0xB1106327)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS168	(*(volatile uint_io8_t*)0xB1106328)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS169	(*(volatile uint_io8_t*)0xB1106329)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS170	(*(volatile uint_io8_t*)0xB110632A)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS171	(*(volatile uint_io8_t*)0xB110632B)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS172	(*(volatile uint_io8_t*)0xB110632C)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS173	(*(volatile uint_io8_t*)0xB110632D)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS174	(*(volatile uint_io8_t*)0xB110632E)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS175	(*(volatile uint_io8_t*)0xB110632F)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS176	(*(volatile uint_io8_t*)0xB1106330)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS177	(*(volatile uint_io8_t*)0xB1106331)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS178	(*(volatile uint_io8_t*)0xB1106332)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS179	(*(volatile uint_io8_t*)0xB1106333)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS180	(*(volatile uint_io8_t*)0xB1106334)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS181	(*(volatile uint_io8_t*)0xB1106335)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS182	(*(volatile uint_io8_t*)0xB1106336)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS183	(*(volatile uint_io8_t*)0xB1106337)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS184	(*(volatile uint_io8_t*)0xB1106338)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS185	(*(volatile uint_io8_t*)0xB1106339)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS186	(*(volatile uint_io8_t*)0xB110633A)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS187	(*(volatile uint_io8_t*)0xB110633B)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS188	(*(volatile uint_io8_t*)0xB110633C)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS189	(*(volatile uint_io8_t*)0xB110633D)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS190	(*(volatile uint_io8_t*)0xB110633E)  /*@bfbba@*/
#define IRC0_IRQHS5_IRQHS191	(*(volatile uint_io8_t*)0xB110633F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs5_field{
    uint_io32_t		u1IRQHS160:1;
    uint_io32_t		u1IRQHS161:1;
    uint_io32_t		u1IRQHS162:1;
    uint_io32_t		u1IRQHS163:1;
    uint_io32_t		u1IRQHS164:1;
    uint_io32_t		u1IRQHS165:1;
    uint_io32_t		u1IRQHS166:1;
    uint_io32_t		u1IRQHS167:1;
    uint_io32_t		u1IRQHS168:1;
    uint_io32_t		u1IRQHS169:1;
    uint_io32_t		u1IRQHS170:1;
    uint_io32_t		u1IRQHS171:1;
    uint_io32_t		u1IRQHS172:1;
    uint_io32_t		u1IRQHS173:1;
    uint_io32_t		u1IRQHS174:1;
    uint_io32_t		u1IRQHS175:1;
    uint_io32_t		u1IRQHS176:1;
    uint_io32_t		u1IRQHS177:1;
    uint_io32_t		u1IRQHS178:1;
    uint_io32_t		u1IRQHS179:1;
    uint_io32_t		u1IRQHS180:1;
    uint_io32_t		u1IRQHS181:1;
    uint_io32_t		u1IRQHS182:1;
    uint_io32_t		u1IRQHS183:1;
    uint_io32_t		u1IRQHS184:1;
    uint_io32_t		u1IRQHS185:1;
    uint_io32_t		u1IRQHS186:1;
    uint_io32_t		u1IRQHS187:1;
    uint_io32_t		u1IRQHS188:1;
    uint_io32_t		u1IRQHS189:1;
    uint_io32_t		u1IRQHS190:1;
    uint_io32_t		u1IRQHS191:1;
}stc_irc0_irqhs5_field_t;

typedef union un_irc0_irqhs5{
    uint_io32_t		u32Register;
    stc_irc0_irqhs5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs5_t;

/* IRQHS6 */
#define IRC0_IRQHS6	(IRC0.unIRQHS6.u32Register)  /*@rg@*/
#define IRC0_IRQHS6_IRQHS192	(*(volatile uint_io8_t*)0xB1106340)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS193	(*(volatile uint_io8_t*)0xB1106341)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS194	(*(volatile uint_io8_t*)0xB1106342)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS195	(*(volatile uint_io8_t*)0xB1106343)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS196	(*(volatile uint_io8_t*)0xB1106344)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS197	(*(volatile uint_io8_t*)0xB1106345)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS198	(*(volatile uint_io8_t*)0xB1106346)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS199	(*(volatile uint_io8_t*)0xB1106347)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS200	(*(volatile uint_io8_t*)0xB1106348)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS201	(*(volatile uint_io8_t*)0xB1106349)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS202	(*(volatile uint_io8_t*)0xB110634A)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS203	(*(volatile uint_io8_t*)0xB110634B)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS204	(*(volatile uint_io8_t*)0xB110634C)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS205	(*(volatile uint_io8_t*)0xB110634D)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS206	(*(volatile uint_io8_t*)0xB110634E)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS207	(*(volatile uint_io8_t*)0xB110634F)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS208	(*(volatile uint_io8_t*)0xB1106350)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS209	(*(volatile uint_io8_t*)0xB1106351)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS210	(*(volatile uint_io8_t*)0xB1106352)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS211	(*(volatile uint_io8_t*)0xB1106353)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS212	(*(volatile uint_io8_t*)0xB1106354)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS213	(*(volatile uint_io8_t*)0xB1106355)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS214	(*(volatile uint_io8_t*)0xB1106356)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS215	(*(volatile uint_io8_t*)0xB1106357)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS216	(*(volatile uint_io8_t*)0xB1106358)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS217	(*(volatile uint_io8_t*)0xB1106359)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS218	(*(volatile uint_io8_t*)0xB110635A)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS219	(*(volatile uint_io8_t*)0xB110635B)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS220	(*(volatile uint_io8_t*)0xB110635C)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS221	(*(volatile uint_io8_t*)0xB110635D)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS222	(*(volatile uint_io8_t*)0xB110635E)  /*@bfbba@*/
#define IRC0_IRQHS6_IRQHS223	(*(volatile uint_io8_t*)0xB110635F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs6_field{
    uint_io32_t		u1IRQHS192:1;
    uint_io32_t		u1IRQHS193:1;
    uint_io32_t		u1IRQHS194:1;
    uint_io32_t		u1IRQHS195:1;
    uint_io32_t		u1IRQHS196:1;
    uint_io32_t		u1IRQHS197:1;
    uint_io32_t		u1IRQHS198:1;
    uint_io32_t		u1IRQHS199:1;
    uint_io32_t		u1IRQHS200:1;
    uint_io32_t		u1IRQHS201:1;
    uint_io32_t		u1IRQHS202:1;
    uint_io32_t		u1IRQHS203:1;
    uint_io32_t		u1IRQHS204:1;
    uint_io32_t		u1IRQHS205:1;
    uint_io32_t		u1IRQHS206:1;
    uint_io32_t		u1IRQHS207:1;
    uint_io32_t		u1IRQHS208:1;
    uint_io32_t		u1IRQHS209:1;
    uint_io32_t		u1IRQHS210:1;
    uint_io32_t		u1IRQHS211:1;
    uint_io32_t		u1IRQHS212:1;
    uint_io32_t		u1IRQHS213:1;
    uint_io32_t		u1IRQHS214:1;
    uint_io32_t		u1IRQHS215:1;
    uint_io32_t		u1IRQHS216:1;
    uint_io32_t		u1IRQHS217:1;
    uint_io32_t		u1IRQHS218:1;
    uint_io32_t		u1IRQHS219:1;
    uint_io32_t		u1IRQHS220:1;
    uint_io32_t		u1IRQHS221:1;
    uint_io32_t		u1IRQHS222:1;
    uint_io32_t		u1IRQHS223:1;
}stc_irc0_irqhs6_field_t;

typedef union un_irc0_irqhs6{
    uint_io32_t		u32Register;
    stc_irc0_irqhs6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs6_t;

/* IRQHS7 */
#define IRC0_IRQHS7	(IRC0.unIRQHS7.u32Register)  /*@rg@*/
#define IRC0_IRQHS7_IRQHS224	(*(volatile uint_io8_t*)0xB1106360)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS225	(*(volatile uint_io8_t*)0xB1106361)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS226	(*(volatile uint_io8_t*)0xB1106362)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS227	(*(volatile uint_io8_t*)0xB1106363)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS228	(*(volatile uint_io8_t*)0xB1106364)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS229	(*(volatile uint_io8_t*)0xB1106365)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS230	(*(volatile uint_io8_t*)0xB1106366)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS231	(*(volatile uint_io8_t*)0xB1106367)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS232	(*(volatile uint_io8_t*)0xB1106368)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS233	(*(volatile uint_io8_t*)0xB1106369)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS234	(*(volatile uint_io8_t*)0xB110636A)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS235	(*(volatile uint_io8_t*)0xB110636B)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS236	(*(volatile uint_io8_t*)0xB110636C)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS237	(*(volatile uint_io8_t*)0xB110636D)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS238	(*(volatile uint_io8_t*)0xB110636E)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS239	(*(volatile uint_io8_t*)0xB110636F)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS240	(*(volatile uint_io8_t*)0xB1106370)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS241	(*(volatile uint_io8_t*)0xB1106371)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS242	(*(volatile uint_io8_t*)0xB1106372)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS243	(*(volatile uint_io8_t*)0xB1106373)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS244	(*(volatile uint_io8_t*)0xB1106374)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS245	(*(volatile uint_io8_t*)0xB1106375)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS246	(*(volatile uint_io8_t*)0xB1106376)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS247	(*(volatile uint_io8_t*)0xB1106377)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS248	(*(volatile uint_io8_t*)0xB1106378)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS249	(*(volatile uint_io8_t*)0xB1106379)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS250	(*(volatile uint_io8_t*)0xB110637A)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS251	(*(volatile uint_io8_t*)0xB110637B)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS252	(*(volatile uint_io8_t*)0xB110637C)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS253	(*(volatile uint_io8_t*)0xB110637D)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS254	(*(volatile uint_io8_t*)0xB110637E)  /*@bfbba@*/
#define IRC0_IRQHS7_IRQHS255	(*(volatile uint_io8_t*)0xB110637F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs7_field{
    uint_io32_t		u1IRQHS224:1;
    uint_io32_t		u1IRQHS225:1;
    uint_io32_t		u1IRQHS226:1;
    uint_io32_t		u1IRQHS227:1;
    uint_io32_t		u1IRQHS228:1;
    uint_io32_t		u1IRQHS229:1;
    uint_io32_t		u1IRQHS230:1;
    uint_io32_t		u1IRQHS231:1;
    uint_io32_t		u1IRQHS232:1;
    uint_io32_t		u1IRQHS233:1;
    uint_io32_t		u1IRQHS234:1;
    uint_io32_t		u1IRQHS235:1;
    uint_io32_t		u1IRQHS236:1;
    uint_io32_t		u1IRQHS237:1;
    uint_io32_t		u1IRQHS238:1;
    uint_io32_t		u1IRQHS239:1;
    uint_io32_t		u1IRQHS240:1;
    uint_io32_t		u1IRQHS241:1;
    uint_io32_t		u1IRQHS242:1;
    uint_io32_t		u1IRQHS243:1;
    uint_io32_t		u1IRQHS244:1;
    uint_io32_t		u1IRQHS245:1;
    uint_io32_t		u1IRQHS246:1;
    uint_io32_t		u1IRQHS247:1;
    uint_io32_t		u1IRQHS248:1;
    uint_io32_t		u1IRQHS249:1;
    uint_io32_t		u1IRQHS250:1;
    uint_io32_t		u1IRQHS251:1;
    uint_io32_t		u1IRQHS252:1;
    uint_io32_t		u1IRQHS253:1;
    uint_io32_t		u1IRQHS254:1;
    uint_io32_t		u1IRQHS255:1;
}stc_irc0_irqhs7_field_t;

typedef union un_irc0_irqhs7{
    uint_io32_t		u32Register;
    stc_irc0_irqhs7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs7_t;

/* IRQHS8 */
#define IRC0_IRQHS8	(IRC0.unIRQHS8.u32Register)  /*@rg@*/
#define IRC0_IRQHS8_IRQHS256	(*(volatile uint_io8_t*)0xB1106380)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS257	(*(volatile uint_io8_t*)0xB1106381)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS258	(*(volatile uint_io8_t*)0xB1106382)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS259	(*(volatile uint_io8_t*)0xB1106383)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS260	(*(volatile uint_io8_t*)0xB1106384)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS261	(*(volatile uint_io8_t*)0xB1106385)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS262	(*(volatile uint_io8_t*)0xB1106386)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS263	(*(volatile uint_io8_t*)0xB1106387)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS264	(*(volatile uint_io8_t*)0xB1106388)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS265	(*(volatile uint_io8_t*)0xB1106389)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS266	(*(volatile uint_io8_t*)0xB110638A)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS267	(*(volatile uint_io8_t*)0xB110638B)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS268	(*(volatile uint_io8_t*)0xB110638C)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS269	(*(volatile uint_io8_t*)0xB110638D)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS270	(*(volatile uint_io8_t*)0xB110638E)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS271	(*(volatile uint_io8_t*)0xB110638F)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS272	(*(volatile uint_io8_t*)0xB1106390)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS273	(*(volatile uint_io8_t*)0xB1106391)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS274	(*(volatile uint_io8_t*)0xB1106392)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS275	(*(volatile uint_io8_t*)0xB1106393)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS276	(*(volatile uint_io8_t*)0xB1106394)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS277	(*(volatile uint_io8_t*)0xB1106395)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS278	(*(volatile uint_io8_t*)0xB1106396)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS279	(*(volatile uint_io8_t*)0xB1106397)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS280	(*(volatile uint_io8_t*)0xB1106398)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS281	(*(volatile uint_io8_t*)0xB1106399)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS282	(*(volatile uint_io8_t*)0xB110639A)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS283	(*(volatile uint_io8_t*)0xB110639B)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS284	(*(volatile uint_io8_t*)0xB110639C)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS285	(*(volatile uint_io8_t*)0xB110639D)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS286	(*(volatile uint_io8_t*)0xB110639E)  /*@bfbba@*/
#define IRC0_IRQHS8_IRQHS287	(*(volatile uint_io8_t*)0xB110639F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs8_field{
    uint_io32_t		u1IRQHS256:1;
    uint_io32_t		u1IRQHS257:1;
    uint_io32_t		u1IRQHS258:1;
    uint_io32_t		u1IRQHS259:1;
    uint_io32_t		u1IRQHS260:1;
    uint_io32_t		u1IRQHS261:1;
    uint_io32_t		u1IRQHS262:1;
    uint_io32_t		u1IRQHS263:1;
    uint_io32_t		u1IRQHS264:1;
    uint_io32_t		u1IRQHS265:1;
    uint_io32_t		u1IRQHS266:1;
    uint_io32_t		u1IRQHS267:1;
    uint_io32_t		u1IRQHS268:1;
    uint_io32_t		u1IRQHS269:1;
    uint_io32_t		u1IRQHS270:1;
    uint_io32_t		u1IRQHS271:1;
    uint_io32_t		u1IRQHS272:1;
    uint_io32_t		u1IRQHS273:1;
    uint_io32_t		u1IRQHS274:1;
    uint_io32_t		u1IRQHS275:1;
    uint_io32_t		u1IRQHS276:1;
    uint_io32_t		u1IRQHS277:1;
    uint_io32_t		u1IRQHS278:1;
    uint_io32_t		u1IRQHS279:1;
    uint_io32_t		u1IRQHS280:1;
    uint_io32_t		u1IRQHS281:1;
    uint_io32_t		u1IRQHS282:1;
    uint_io32_t		u1IRQHS283:1;
    uint_io32_t		u1IRQHS284:1;
    uint_io32_t		u1IRQHS285:1;
    uint_io32_t		u1IRQHS286:1;
    uint_io32_t		u1IRQHS287:1;
}stc_irc0_irqhs8_field_t;

typedef union un_irc0_irqhs8{
    uint_io32_t		u32Register;
    stc_irc0_irqhs8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs8_t;

/* IRQHS9 */
#define IRC0_IRQHS9	(IRC0.unIRQHS9.u32Register)  /*@rg@*/
#define IRC0_IRQHS9_IRQHS288	(*(volatile uint_io8_t*)0xB11063A0)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS289	(*(volatile uint_io8_t*)0xB11063A1)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS290	(*(volatile uint_io8_t*)0xB11063A2)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS291	(*(volatile uint_io8_t*)0xB11063A3)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS292	(*(volatile uint_io8_t*)0xB11063A4)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS293	(*(volatile uint_io8_t*)0xB11063A5)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS294	(*(volatile uint_io8_t*)0xB11063A6)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS295	(*(volatile uint_io8_t*)0xB11063A7)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS296	(*(volatile uint_io8_t*)0xB11063A8)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS297	(*(volatile uint_io8_t*)0xB11063A9)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS298	(*(volatile uint_io8_t*)0xB11063AA)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS299	(*(volatile uint_io8_t*)0xB11063AB)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS300	(*(volatile uint_io8_t*)0xB11063AC)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS301	(*(volatile uint_io8_t*)0xB11063AD)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS302	(*(volatile uint_io8_t*)0xB11063AE)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS303	(*(volatile uint_io8_t*)0xB11063AF)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS304	(*(volatile uint_io8_t*)0xB11063B0)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS305	(*(volatile uint_io8_t*)0xB11063B1)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS306	(*(volatile uint_io8_t*)0xB11063B2)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS307	(*(volatile uint_io8_t*)0xB11063B3)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS308	(*(volatile uint_io8_t*)0xB11063B4)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS309	(*(volatile uint_io8_t*)0xB11063B5)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS310	(*(volatile uint_io8_t*)0xB11063B6)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS311	(*(volatile uint_io8_t*)0xB11063B7)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS312	(*(volatile uint_io8_t*)0xB11063B8)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS313	(*(volatile uint_io8_t*)0xB11063B9)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS314	(*(volatile uint_io8_t*)0xB11063BA)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS315	(*(volatile uint_io8_t*)0xB11063BB)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS316	(*(volatile uint_io8_t*)0xB11063BC)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS317	(*(volatile uint_io8_t*)0xB11063BD)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS318	(*(volatile uint_io8_t*)0xB11063BE)  /*@bfbba@*/
#define IRC0_IRQHS9_IRQHS319	(*(volatile uint_io8_t*)0xB11063BF)  /*@bfbba@*/

typedef struct stc_irc0_irqhs9_field{
    uint_io32_t		u1IRQHS288:1;
    uint_io32_t		u1IRQHS289:1;
    uint_io32_t		u1IRQHS290:1;
    uint_io32_t		u1IRQHS291:1;
    uint_io32_t		u1IRQHS292:1;
    uint_io32_t		u1IRQHS293:1;
    uint_io32_t		u1IRQHS294:1;
    uint_io32_t		u1IRQHS295:1;
    uint_io32_t		u1IRQHS296:1;
    uint_io32_t		u1IRQHS297:1;
    uint_io32_t		u1IRQHS298:1;
    uint_io32_t		u1IRQHS299:1;
    uint_io32_t		u1IRQHS300:1;
    uint_io32_t		u1IRQHS301:1;
    uint_io32_t		u1IRQHS302:1;
    uint_io32_t		u1IRQHS303:1;
    uint_io32_t		u1IRQHS304:1;
    uint_io32_t		u1IRQHS305:1;
    uint_io32_t		u1IRQHS306:1;
    uint_io32_t		u1IRQHS307:1;
    uint_io32_t		u1IRQHS308:1;
    uint_io32_t		u1IRQHS309:1;
    uint_io32_t		u1IRQHS310:1;
    uint_io32_t		u1IRQHS311:1;
    uint_io32_t		u1IRQHS312:1;
    uint_io32_t		u1IRQHS313:1;
    uint_io32_t		u1IRQHS314:1;
    uint_io32_t		u1IRQHS315:1;
    uint_io32_t		u1IRQHS316:1;
    uint_io32_t		u1IRQHS317:1;
    uint_io32_t		u1IRQHS318:1;
    uint_io32_t		u1IRQHS319:1;
}stc_irc0_irqhs9_field_t;

typedef union un_irc0_irqhs9{
    uint_io32_t		u32Register;
    stc_irc0_irqhs9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs9_t;

/* IRQHS10 */
#define IRC0_IRQHS10	(IRC0.unIRQHS10.u32Register)  /*@rg@*/
#define IRC0_IRQHS10_IRQHS320	(*(volatile uint_io8_t*)0xB11063C0)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS321	(*(volatile uint_io8_t*)0xB11063C1)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS322	(*(volatile uint_io8_t*)0xB11063C2)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS323	(*(volatile uint_io8_t*)0xB11063C3)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS324	(*(volatile uint_io8_t*)0xB11063C4)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS325	(*(volatile uint_io8_t*)0xB11063C5)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS326	(*(volatile uint_io8_t*)0xB11063C6)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS327	(*(volatile uint_io8_t*)0xB11063C7)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS328	(*(volatile uint_io8_t*)0xB11063C8)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS329	(*(volatile uint_io8_t*)0xB11063C9)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS330	(*(volatile uint_io8_t*)0xB11063CA)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS331	(*(volatile uint_io8_t*)0xB11063CB)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS332	(*(volatile uint_io8_t*)0xB11063CC)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS333	(*(volatile uint_io8_t*)0xB11063CD)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS334	(*(volatile uint_io8_t*)0xB11063CE)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS335	(*(volatile uint_io8_t*)0xB11063CF)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS336	(*(volatile uint_io8_t*)0xB11063D0)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS337	(*(volatile uint_io8_t*)0xB11063D1)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS338	(*(volatile uint_io8_t*)0xB11063D2)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS339	(*(volatile uint_io8_t*)0xB11063D3)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS340	(*(volatile uint_io8_t*)0xB11063D4)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS341	(*(volatile uint_io8_t*)0xB11063D5)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS342	(*(volatile uint_io8_t*)0xB11063D6)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS343	(*(volatile uint_io8_t*)0xB11063D7)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS344	(*(volatile uint_io8_t*)0xB11063D8)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS345	(*(volatile uint_io8_t*)0xB11063D9)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS346	(*(volatile uint_io8_t*)0xB11063DA)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS347	(*(volatile uint_io8_t*)0xB11063DB)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS348	(*(volatile uint_io8_t*)0xB11063DC)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS349	(*(volatile uint_io8_t*)0xB11063DD)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS350	(*(volatile uint_io8_t*)0xB11063DE)  /*@bfbba@*/
#define IRC0_IRQHS10_IRQHS351	(*(volatile uint_io8_t*)0xB11063DF)  /*@bfbba@*/

typedef struct stc_irc0_irqhs10_field{
    uint_io32_t		u1IRQHS320:1;
    uint_io32_t		u1IRQHS321:1;
    uint_io32_t		u1IRQHS322:1;
    uint_io32_t		u1IRQHS323:1;
    uint_io32_t		u1IRQHS324:1;
    uint_io32_t		u1IRQHS325:1;
    uint_io32_t		u1IRQHS326:1;
    uint_io32_t		u1IRQHS327:1;
    uint_io32_t		u1IRQHS328:1;
    uint_io32_t		u1IRQHS329:1;
    uint_io32_t		u1IRQHS330:1;
    uint_io32_t		u1IRQHS331:1;
    uint_io32_t		u1IRQHS332:1;
    uint_io32_t		u1IRQHS333:1;
    uint_io32_t		u1IRQHS334:1;
    uint_io32_t		u1IRQHS335:1;
    uint_io32_t		u1IRQHS336:1;
    uint_io32_t		u1IRQHS337:1;
    uint_io32_t		u1IRQHS338:1;
    uint_io32_t		u1IRQHS339:1;
    uint_io32_t		u1IRQHS340:1;
    uint_io32_t		u1IRQHS341:1;
    uint_io32_t		u1IRQHS342:1;
    uint_io32_t		u1IRQHS343:1;
    uint_io32_t		u1IRQHS344:1;
    uint_io32_t		u1IRQHS345:1;
    uint_io32_t		u1IRQHS346:1;
    uint_io32_t		u1IRQHS347:1;
    uint_io32_t		u1IRQHS348:1;
    uint_io32_t		u1IRQHS349:1;
    uint_io32_t		u1IRQHS350:1;
    uint_io32_t		u1IRQHS351:1;
}stc_irc0_irqhs10_field_t;

typedef union un_irc0_irqhs10{
    uint_io32_t		u32Register;
    stc_irc0_irqhs10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs10_t;

/* IRQHS11 */
#define IRC0_IRQHS11	(IRC0.unIRQHS11.u32Register)  /*@rg@*/
#define IRC0_IRQHS11_IRQHS352	(*(volatile uint_io8_t*)0xB11063E0)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS353	(*(volatile uint_io8_t*)0xB11063E1)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS354	(*(volatile uint_io8_t*)0xB11063E2)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS355	(*(volatile uint_io8_t*)0xB11063E3)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS356	(*(volatile uint_io8_t*)0xB11063E4)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS357	(*(volatile uint_io8_t*)0xB11063E5)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS358	(*(volatile uint_io8_t*)0xB11063E6)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS359	(*(volatile uint_io8_t*)0xB11063E7)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS360	(*(volatile uint_io8_t*)0xB11063E8)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS361	(*(volatile uint_io8_t*)0xB11063E9)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS362	(*(volatile uint_io8_t*)0xB11063EA)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS363	(*(volatile uint_io8_t*)0xB11063EB)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS364	(*(volatile uint_io8_t*)0xB11063EC)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS365	(*(volatile uint_io8_t*)0xB11063ED)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS366	(*(volatile uint_io8_t*)0xB11063EE)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS367	(*(volatile uint_io8_t*)0xB11063EF)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS368	(*(volatile uint_io8_t*)0xB11063F0)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS369	(*(volatile uint_io8_t*)0xB11063F1)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS370	(*(volatile uint_io8_t*)0xB11063F2)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS371	(*(volatile uint_io8_t*)0xB11063F3)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS372	(*(volatile uint_io8_t*)0xB11063F4)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS373	(*(volatile uint_io8_t*)0xB11063F5)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS374	(*(volatile uint_io8_t*)0xB11063F6)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS375	(*(volatile uint_io8_t*)0xB11063F7)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS376	(*(volatile uint_io8_t*)0xB11063F8)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS377	(*(volatile uint_io8_t*)0xB11063F9)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS378	(*(volatile uint_io8_t*)0xB11063FA)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS379	(*(volatile uint_io8_t*)0xB11063FB)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS380	(*(volatile uint_io8_t*)0xB11063FC)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS381	(*(volatile uint_io8_t*)0xB11063FD)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS382	(*(volatile uint_io8_t*)0xB11063FE)  /*@bfbba@*/
#define IRC0_IRQHS11_IRQHS383	(*(volatile uint_io8_t*)0xB11063FF)  /*@bfbba@*/

typedef struct stc_irc0_irqhs11_field{
    uint_io32_t		u1IRQHS352:1;
    uint_io32_t		u1IRQHS353:1;
    uint_io32_t		u1IRQHS354:1;
    uint_io32_t		u1IRQHS355:1;
    uint_io32_t		u1IRQHS356:1;
    uint_io32_t		u1IRQHS357:1;
    uint_io32_t		u1IRQHS358:1;
    uint_io32_t		u1IRQHS359:1;
    uint_io32_t		u1IRQHS360:1;
    uint_io32_t		u1IRQHS361:1;
    uint_io32_t		u1IRQHS362:1;
    uint_io32_t		u1IRQHS363:1;
    uint_io32_t		u1IRQHS364:1;
    uint_io32_t		u1IRQHS365:1;
    uint_io32_t		u1IRQHS366:1;
    uint_io32_t		u1IRQHS367:1;
    uint_io32_t		u1IRQHS368:1;
    uint_io32_t		u1IRQHS369:1;
    uint_io32_t		u1IRQHS370:1;
    uint_io32_t		u1IRQHS371:1;
    uint_io32_t		u1IRQHS372:1;
    uint_io32_t		u1IRQHS373:1;
    uint_io32_t		u1IRQHS374:1;
    uint_io32_t		u1IRQHS375:1;
    uint_io32_t		u1IRQHS376:1;
    uint_io32_t		u1IRQHS377:1;
    uint_io32_t		u1IRQHS378:1;
    uint_io32_t		u1IRQHS379:1;
    uint_io32_t		u1IRQHS380:1;
    uint_io32_t		u1IRQHS381:1;
    uint_io32_t		u1IRQHS382:1;
    uint_io32_t		u1IRQHS383:1;
}stc_irc0_irqhs11_field_t;

typedef union un_irc0_irqhs11{
    uint_io32_t		u32Register;
    stc_irc0_irqhs11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs11_t;

/* IRQHS12 */
#define IRC0_IRQHS12	(IRC0.unIRQHS12.u32Register)  /*@rg@*/
#define IRC0_IRQHS12_IRQHS384	(*(volatile uint_io8_t*)0xB1106400)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS385	(*(volatile uint_io8_t*)0xB1106401)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS386	(*(volatile uint_io8_t*)0xB1106402)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS387	(*(volatile uint_io8_t*)0xB1106403)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS388	(*(volatile uint_io8_t*)0xB1106404)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS389	(*(volatile uint_io8_t*)0xB1106405)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS390	(*(volatile uint_io8_t*)0xB1106406)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS391	(*(volatile uint_io8_t*)0xB1106407)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS392	(*(volatile uint_io8_t*)0xB1106408)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS393	(*(volatile uint_io8_t*)0xB1106409)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS394	(*(volatile uint_io8_t*)0xB110640A)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS395	(*(volatile uint_io8_t*)0xB110640B)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS396	(*(volatile uint_io8_t*)0xB110640C)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS397	(*(volatile uint_io8_t*)0xB110640D)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS398	(*(volatile uint_io8_t*)0xB110640E)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS399	(*(volatile uint_io8_t*)0xB110640F)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS400	(*(volatile uint_io8_t*)0xB1106410)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS401	(*(volatile uint_io8_t*)0xB1106411)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS402	(*(volatile uint_io8_t*)0xB1106412)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS403	(*(volatile uint_io8_t*)0xB1106413)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS404	(*(volatile uint_io8_t*)0xB1106414)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS405	(*(volatile uint_io8_t*)0xB1106415)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS406	(*(volatile uint_io8_t*)0xB1106416)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS407	(*(volatile uint_io8_t*)0xB1106417)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS408	(*(volatile uint_io8_t*)0xB1106418)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS409	(*(volatile uint_io8_t*)0xB1106419)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS410	(*(volatile uint_io8_t*)0xB110641A)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS411	(*(volatile uint_io8_t*)0xB110641B)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS412	(*(volatile uint_io8_t*)0xB110641C)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS413	(*(volatile uint_io8_t*)0xB110641D)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS414	(*(volatile uint_io8_t*)0xB110641E)  /*@bfbba@*/
#define IRC0_IRQHS12_IRQHS415	(*(volatile uint_io8_t*)0xB110641F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs12_field{
    uint_io32_t		u1IRQHS384:1;
    uint_io32_t		u1IRQHS385:1;
    uint_io32_t		u1IRQHS386:1;
    uint_io32_t		u1IRQHS387:1;
    uint_io32_t		u1IRQHS388:1;
    uint_io32_t		u1IRQHS389:1;
    uint_io32_t		u1IRQHS390:1;
    uint_io32_t		u1IRQHS391:1;
    uint_io32_t		u1IRQHS392:1;
    uint_io32_t		u1IRQHS393:1;
    uint_io32_t		u1IRQHS394:1;
    uint_io32_t		u1IRQHS395:1;
    uint_io32_t		u1IRQHS396:1;
    uint_io32_t		u1IRQHS397:1;
    uint_io32_t		u1IRQHS398:1;
    uint_io32_t		u1IRQHS399:1;
    uint_io32_t		u1IRQHS400:1;
    uint_io32_t		u1IRQHS401:1;
    uint_io32_t		u1IRQHS402:1;
    uint_io32_t		u1IRQHS403:1;
    uint_io32_t		u1IRQHS404:1;
    uint_io32_t		u1IRQHS405:1;
    uint_io32_t		u1IRQHS406:1;
    uint_io32_t		u1IRQHS407:1;
    uint_io32_t		u1IRQHS408:1;
    uint_io32_t		u1IRQHS409:1;
    uint_io32_t		u1IRQHS410:1;
    uint_io32_t		u1IRQHS411:1;
    uint_io32_t		u1IRQHS412:1;
    uint_io32_t		u1IRQHS413:1;
    uint_io32_t		u1IRQHS414:1;
    uint_io32_t		u1IRQHS415:1;
}stc_irc0_irqhs12_field_t;

typedef union un_irc0_irqhs12{
    uint_io32_t		u32Register;
    stc_irc0_irqhs12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs12_t;

/* IRQHS13 */
#define IRC0_IRQHS13	(IRC0.unIRQHS13.u32Register)  /*@rg@*/
#define IRC0_IRQHS13_IRQHS416	(*(volatile uint_io8_t*)0xB1106420)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS417	(*(volatile uint_io8_t*)0xB1106421)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS418	(*(volatile uint_io8_t*)0xB1106422)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS419	(*(volatile uint_io8_t*)0xB1106423)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS420	(*(volatile uint_io8_t*)0xB1106424)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS421	(*(volatile uint_io8_t*)0xB1106425)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS422	(*(volatile uint_io8_t*)0xB1106426)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS423	(*(volatile uint_io8_t*)0xB1106427)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS424	(*(volatile uint_io8_t*)0xB1106428)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS425	(*(volatile uint_io8_t*)0xB1106429)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS426	(*(volatile uint_io8_t*)0xB110642A)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS427	(*(volatile uint_io8_t*)0xB110642B)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS428	(*(volatile uint_io8_t*)0xB110642C)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS429	(*(volatile uint_io8_t*)0xB110642D)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS430	(*(volatile uint_io8_t*)0xB110642E)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS431	(*(volatile uint_io8_t*)0xB110642F)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS432	(*(volatile uint_io8_t*)0xB1106430)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS433	(*(volatile uint_io8_t*)0xB1106431)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS434	(*(volatile uint_io8_t*)0xB1106432)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS435	(*(volatile uint_io8_t*)0xB1106433)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS436	(*(volatile uint_io8_t*)0xB1106434)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS437	(*(volatile uint_io8_t*)0xB1106435)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS438	(*(volatile uint_io8_t*)0xB1106436)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS439	(*(volatile uint_io8_t*)0xB1106437)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS440	(*(volatile uint_io8_t*)0xB1106438)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS441	(*(volatile uint_io8_t*)0xB1106439)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS442	(*(volatile uint_io8_t*)0xB110643A)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS443	(*(volatile uint_io8_t*)0xB110643B)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS444	(*(volatile uint_io8_t*)0xB110643C)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS445	(*(volatile uint_io8_t*)0xB110643D)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS446	(*(volatile uint_io8_t*)0xB110643E)  /*@bfbba@*/
#define IRC0_IRQHS13_IRQHS447	(*(volatile uint_io8_t*)0xB110643F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs13_field{
    uint_io32_t		u1IRQHS416:1;
    uint_io32_t		u1IRQHS417:1;
    uint_io32_t		u1IRQHS418:1;
    uint_io32_t		u1IRQHS419:1;
    uint_io32_t		u1IRQHS420:1;
    uint_io32_t		u1IRQHS421:1;
    uint_io32_t		u1IRQHS422:1;
    uint_io32_t		u1IRQHS423:1;
    uint_io32_t		u1IRQHS424:1;
    uint_io32_t		u1IRQHS425:1;
    uint_io32_t		u1IRQHS426:1;
    uint_io32_t		u1IRQHS427:1;
    uint_io32_t		u1IRQHS428:1;
    uint_io32_t		u1IRQHS429:1;
    uint_io32_t		u1IRQHS430:1;
    uint_io32_t		u1IRQHS431:1;
    uint_io32_t		u1IRQHS432:1;
    uint_io32_t		u1IRQHS433:1;
    uint_io32_t		u1IRQHS434:1;
    uint_io32_t		u1IRQHS435:1;
    uint_io32_t		u1IRQHS436:1;
    uint_io32_t		u1IRQHS437:1;
    uint_io32_t		u1IRQHS438:1;
    uint_io32_t		u1IRQHS439:1;
    uint_io32_t		u1IRQHS440:1;
    uint_io32_t		u1IRQHS441:1;
    uint_io32_t		u1IRQHS442:1;
    uint_io32_t		u1IRQHS443:1;
    uint_io32_t		u1IRQHS444:1;
    uint_io32_t		u1IRQHS445:1;
    uint_io32_t		u1IRQHS446:1;
    uint_io32_t		u1IRQHS447:1;
}stc_irc0_irqhs13_field_t;

typedef union un_irc0_irqhs13{
    uint_io32_t		u32Register;
    stc_irc0_irqhs13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs13_t;

/* IRQHS14 */
#define IRC0_IRQHS14	(IRC0.unIRQHS14.u32Register)  /*@rg@*/
#define IRC0_IRQHS14_IRQHS448	(*(volatile uint_io8_t*)0xB1106440)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS449	(*(volatile uint_io8_t*)0xB1106441)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS450	(*(volatile uint_io8_t*)0xB1106442)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS451	(*(volatile uint_io8_t*)0xB1106443)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS452	(*(volatile uint_io8_t*)0xB1106444)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS453	(*(volatile uint_io8_t*)0xB1106445)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS454	(*(volatile uint_io8_t*)0xB1106446)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS455	(*(volatile uint_io8_t*)0xB1106447)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS456	(*(volatile uint_io8_t*)0xB1106448)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS457	(*(volatile uint_io8_t*)0xB1106449)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS458	(*(volatile uint_io8_t*)0xB110644A)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS459	(*(volatile uint_io8_t*)0xB110644B)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS460	(*(volatile uint_io8_t*)0xB110644C)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS461	(*(volatile uint_io8_t*)0xB110644D)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS462	(*(volatile uint_io8_t*)0xB110644E)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS463	(*(volatile uint_io8_t*)0xB110644F)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS464	(*(volatile uint_io8_t*)0xB1106450)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS465	(*(volatile uint_io8_t*)0xB1106451)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS466	(*(volatile uint_io8_t*)0xB1106452)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS467	(*(volatile uint_io8_t*)0xB1106453)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS468	(*(volatile uint_io8_t*)0xB1106454)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS469	(*(volatile uint_io8_t*)0xB1106455)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS470	(*(volatile uint_io8_t*)0xB1106456)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS471	(*(volatile uint_io8_t*)0xB1106457)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS472	(*(volatile uint_io8_t*)0xB1106458)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS473	(*(volatile uint_io8_t*)0xB1106459)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS474	(*(volatile uint_io8_t*)0xB110645A)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS475	(*(volatile uint_io8_t*)0xB110645B)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS476	(*(volatile uint_io8_t*)0xB110645C)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS477	(*(volatile uint_io8_t*)0xB110645D)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS478	(*(volatile uint_io8_t*)0xB110645E)  /*@bfbba@*/
#define IRC0_IRQHS14_IRQHS479	(*(volatile uint_io8_t*)0xB110645F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs14_field{
    uint_io32_t		u1IRQHS448:1;
    uint_io32_t		u1IRQHS449:1;
    uint_io32_t		u1IRQHS450:1;
    uint_io32_t		u1IRQHS451:1;
    uint_io32_t		u1IRQHS452:1;
    uint_io32_t		u1IRQHS453:1;
    uint_io32_t		u1IRQHS454:1;
    uint_io32_t		u1IRQHS455:1;
    uint_io32_t		u1IRQHS456:1;
    uint_io32_t		u1IRQHS457:1;
    uint_io32_t		u1IRQHS458:1;
    uint_io32_t		u1IRQHS459:1;
    uint_io32_t		u1IRQHS460:1;
    uint_io32_t		u1IRQHS461:1;
    uint_io32_t		u1IRQHS462:1;
    uint_io32_t		u1IRQHS463:1;
    uint_io32_t		u1IRQHS464:1;
    uint_io32_t		u1IRQHS465:1;
    uint_io32_t		u1IRQHS466:1;
    uint_io32_t		u1IRQHS467:1;
    uint_io32_t		u1IRQHS468:1;
    uint_io32_t		u1IRQHS469:1;
    uint_io32_t		u1IRQHS470:1;
    uint_io32_t		u1IRQHS471:1;
    uint_io32_t		u1IRQHS472:1;
    uint_io32_t		u1IRQHS473:1;
    uint_io32_t		u1IRQHS474:1;
    uint_io32_t		u1IRQHS475:1;
    uint_io32_t		u1IRQHS476:1;
    uint_io32_t		u1IRQHS477:1;
    uint_io32_t		u1IRQHS478:1;
    uint_io32_t		u1IRQHS479:1;
}stc_irc0_irqhs14_field_t;

typedef union un_irc0_irqhs14{
    uint_io32_t		u32Register;
    stc_irc0_irqhs14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs14_t;

/* IRQHS15 */
#define IRC0_IRQHS15	(IRC0.unIRQHS15.u32Register)  /*@rg@*/
#define IRC0_IRQHS15_IRQHS480	(*(volatile uint_io8_t*)0xB1106460)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS481	(*(volatile uint_io8_t*)0xB1106461)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS482	(*(volatile uint_io8_t*)0xB1106462)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS483	(*(volatile uint_io8_t*)0xB1106463)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS484	(*(volatile uint_io8_t*)0xB1106464)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS485	(*(volatile uint_io8_t*)0xB1106465)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS486	(*(volatile uint_io8_t*)0xB1106466)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS487	(*(volatile uint_io8_t*)0xB1106467)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS488	(*(volatile uint_io8_t*)0xB1106468)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS489	(*(volatile uint_io8_t*)0xB1106469)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS490	(*(volatile uint_io8_t*)0xB110646A)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS491	(*(volatile uint_io8_t*)0xB110646B)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS492	(*(volatile uint_io8_t*)0xB110646C)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS493	(*(volatile uint_io8_t*)0xB110646D)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS494	(*(volatile uint_io8_t*)0xB110646E)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS495	(*(volatile uint_io8_t*)0xB110646F)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS496	(*(volatile uint_io8_t*)0xB1106470)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS497	(*(volatile uint_io8_t*)0xB1106471)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS498	(*(volatile uint_io8_t*)0xB1106472)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS499	(*(volatile uint_io8_t*)0xB1106473)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS500	(*(volatile uint_io8_t*)0xB1106474)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS501	(*(volatile uint_io8_t*)0xB1106475)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS502	(*(volatile uint_io8_t*)0xB1106476)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS503	(*(volatile uint_io8_t*)0xB1106477)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS504	(*(volatile uint_io8_t*)0xB1106478)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS505	(*(volatile uint_io8_t*)0xB1106479)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS506	(*(volatile uint_io8_t*)0xB110647A)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS507	(*(volatile uint_io8_t*)0xB110647B)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS508	(*(volatile uint_io8_t*)0xB110647C)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS509	(*(volatile uint_io8_t*)0xB110647D)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS510	(*(volatile uint_io8_t*)0xB110647E)  /*@bfbba@*/
#define IRC0_IRQHS15_IRQHS511	(*(volatile uint_io8_t*)0xB110647F)  /*@bfbba@*/

typedef struct stc_irc0_irqhs15_field{
    uint_io32_t		u1IRQHS480:1;
    uint_io32_t		u1IRQHS481:1;
    uint_io32_t		u1IRQHS482:1;
    uint_io32_t		u1IRQHS483:1;
    uint_io32_t		u1IRQHS484:1;
    uint_io32_t		u1IRQHS485:1;
    uint_io32_t		u1IRQHS486:1;
    uint_io32_t		u1IRQHS487:1;
    uint_io32_t		u1IRQHS488:1;
    uint_io32_t		u1IRQHS489:1;
    uint_io32_t		u1IRQHS490:1;
    uint_io32_t		u1IRQHS491:1;
    uint_io32_t		u1IRQHS492:1;
    uint_io32_t		u1IRQHS493:1;
    uint_io32_t		u1IRQHS494:1;
    uint_io32_t		u1IRQHS495:1;
    uint_io32_t		u1IRQHS496:1;
    uint_io32_t		u1IRQHS497:1;
    uint_io32_t		u1IRQHS498:1;
    uint_io32_t		u1IRQHS499:1;
    uint_io32_t		u1IRQHS500:1;
    uint_io32_t		u1IRQHS501:1;
    uint_io32_t		u1IRQHS502:1;
    uint_io32_t		u1IRQHS503:1;
    uint_io32_t		u1IRQHS504:1;
    uint_io32_t		u1IRQHS505:1;
    uint_io32_t		u1IRQHS506:1;
    uint_io32_t		u1IRQHS507:1;
    uint_io32_t		u1IRQHS508:1;
    uint_io32_t		u1IRQHS509:1;
    uint_io32_t		u1IRQHS510:1;
    uint_io32_t		u1IRQHS511:1;
}stc_irc0_irqhs15_field_t;

typedef union un_irc0_irqhs15{
    uint_io32_t		u32Register;
    stc_irc0_irqhs15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqhs15_t;

/* IRQPLM */
#define IRC0_IRQPLM	(IRC0.unIRQPLM.u32Register)  /*@rg@*/
#define IRC0_IRQPLM_IRQPLM	(IRC0.unIRQPLM.stcField.u6IRQPLM)  /*@bf@*/

typedef struct stc_irc0_irqplm_field{
    uint_io32_t		u6IRQPLM:6;
    uint_io32_t		:26;
}stc_irc0_irqplm_field_t;

typedef union un_irc0_irqplm{
    uint_io32_t		u32Register;
    stc_irc0_irqplm_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqplm_t;

/* CSR */
#define IRC0_CSR	(IRC0.unCSR.u32Register)  /*@rg@*/
#define IRC0_CSR_IRQEN	(*(volatile uint_io8_t*)0xB11064C0)  /*@bfbba@*/
#define IRC0_CSR_LST	(*(volatile uint_io8_t*)0xB11064D0)  /*@bfbba@*/

typedef struct stc_irc0_csr_field{
    uint_io32_t		u1IRQEN:1;
    uint_io32_t		:15;
    uint_io32_t		u1LST:1;
    uint_io32_t		:15;
}stc_irc0_csr_field_t;

typedef union un_irc0_csr{
    uint_io32_t		u32Register;
    stc_irc0_csr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_csr_t;

/* NMIRS */
#define IRC0_NMIRS	(IRC0.unNMIRS.u32Register)  /*@rg@*/
#define IRC0_NMIRS_NMIRS0	(*(volatile uint_io8_t*)0xB1106540)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS1	(*(volatile uint_io8_t*)0xB1106541)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS2	(*(volatile uint_io8_t*)0xB1106542)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS3	(*(volatile uint_io8_t*)0xB1106543)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS4	(*(volatile uint_io8_t*)0xB1106544)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS5	(*(volatile uint_io8_t*)0xB1106545)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS6	(*(volatile uint_io8_t*)0xB1106546)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS7	(*(volatile uint_io8_t*)0xB1106547)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS8	(*(volatile uint_io8_t*)0xB1106548)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS9	(*(volatile uint_io8_t*)0xB1106549)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS10	(*(volatile uint_io8_t*)0xB110654A)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS11	(*(volatile uint_io8_t*)0xB110654B)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS12	(*(volatile uint_io8_t*)0xB110654C)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS13	(*(volatile uint_io8_t*)0xB110654D)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS14	(*(volatile uint_io8_t*)0xB110654E)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS15	(*(volatile uint_io8_t*)0xB110654F)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS16	(*(volatile uint_io8_t*)0xB1106550)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS17	(*(volatile uint_io8_t*)0xB1106551)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS18	(*(volatile uint_io8_t*)0xB1106552)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS19	(*(volatile uint_io8_t*)0xB1106553)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS20	(*(volatile uint_io8_t*)0xB1106554)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS21	(*(volatile uint_io8_t*)0xB1106555)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS22	(*(volatile uint_io8_t*)0xB1106556)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS23	(*(volatile uint_io8_t*)0xB1106557)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS24	(*(volatile uint_io8_t*)0xB1106558)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS25	(*(volatile uint_io8_t*)0xB1106559)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS26	(*(volatile uint_io8_t*)0xB110655A)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS27	(*(volatile uint_io8_t*)0xB110655B)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS28	(*(volatile uint_io8_t*)0xB110655C)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS29	(*(volatile uint_io8_t*)0xB110655D)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS30	(*(volatile uint_io8_t*)0xB110655E)  /*@bfbba@*/
#define IRC0_NMIRS_NMIRS31	(*(volatile uint_io8_t*)0xB110655F)  /*@bfbba@*/

typedef struct stc_irc0_nmirs_field{
    uint_io32_t		u1NMIRS0:1;
    uint_io32_t		u1NMIRS1:1;
    uint_io32_t		u1NMIRS2:1;
    uint_io32_t		u1NMIRS3:1;
    uint_io32_t		u1NMIRS4:1;
    uint_io32_t		u1NMIRS5:1;
    uint_io32_t		u1NMIRS6:1;
    uint_io32_t		u1NMIRS7:1;
    uint_io32_t		u1NMIRS8:1;
    uint_io32_t		u1NMIRS9:1;
    uint_io32_t		u1NMIRS10:1;
    uint_io32_t		u1NMIRS11:1;
    uint_io32_t		u1NMIRS12:1;
    uint_io32_t		u1NMIRS13:1;
    uint_io32_t		u1NMIRS14:1;
    uint_io32_t		u1NMIRS15:1;
    uint_io32_t		u1NMIRS16:1;
    uint_io32_t		u1NMIRS17:1;
    uint_io32_t		u1NMIRS18:1;
    uint_io32_t		u1NMIRS19:1;
    uint_io32_t		u1NMIRS20:1;
    uint_io32_t		u1NMIRS21:1;
    uint_io32_t		u1NMIRS22:1;
    uint_io32_t		u1NMIRS23:1;
    uint_io32_t		u1NMIRS24:1;
    uint_io32_t		u1NMIRS25:1;
    uint_io32_t		u1NMIRS26:1;
    uint_io32_t		u1NMIRS27:1;
    uint_io32_t		u1NMIRS28:1;
    uint_io32_t		u1NMIRS29:1;
    uint_io32_t		u1NMIRS30:1;
    uint_io32_t		u1NMIRS31:1;
}stc_irc0_nmirs_field_t;

typedef union un_irc0_nmirs{
    uint_io32_t		u32Register;
    stc_irc0_nmirs_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmirs_t;

/* NMIPS */
#define IRC0_NMIPS	(IRC0.unNMIPS.u32Register)  /*@rg@*/
#define IRC0_NMIPS_NMIPS0	(*(volatile uint_io8_t*)0xB1106560)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS1	(*(volatile uint_io8_t*)0xB1106561)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS2	(*(volatile uint_io8_t*)0xB1106562)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS3	(*(volatile uint_io8_t*)0xB1106563)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS4	(*(volatile uint_io8_t*)0xB1106564)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS5	(*(volatile uint_io8_t*)0xB1106565)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS6	(*(volatile uint_io8_t*)0xB1106566)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS7	(*(volatile uint_io8_t*)0xB1106567)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS8	(*(volatile uint_io8_t*)0xB1106568)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS9	(*(volatile uint_io8_t*)0xB1106569)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS10	(*(volatile uint_io8_t*)0xB110656A)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS11	(*(volatile uint_io8_t*)0xB110656B)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS12	(*(volatile uint_io8_t*)0xB110656C)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS13	(*(volatile uint_io8_t*)0xB110656D)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS14	(*(volatile uint_io8_t*)0xB110656E)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS15	(*(volatile uint_io8_t*)0xB110656F)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS16	(*(volatile uint_io8_t*)0xB1106570)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS17	(*(volatile uint_io8_t*)0xB1106571)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS18	(*(volatile uint_io8_t*)0xB1106572)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS19	(*(volatile uint_io8_t*)0xB1106573)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS20	(*(volatile uint_io8_t*)0xB1106574)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS21	(*(volatile uint_io8_t*)0xB1106575)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS22	(*(volatile uint_io8_t*)0xB1106576)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS23	(*(volatile uint_io8_t*)0xB1106577)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS24	(*(volatile uint_io8_t*)0xB1106578)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS25	(*(volatile uint_io8_t*)0xB1106579)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS26	(*(volatile uint_io8_t*)0xB110657A)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS27	(*(volatile uint_io8_t*)0xB110657B)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS28	(*(volatile uint_io8_t*)0xB110657C)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS29	(*(volatile uint_io8_t*)0xB110657D)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS30	(*(volatile uint_io8_t*)0xB110657E)  /*@bfbba@*/
#define IRC0_NMIPS_NMIPS31	(*(volatile uint_io8_t*)0xB110657F)  /*@bfbba@*/

typedef struct stc_irc0_nmips_field{
    uint_io32_t		u1NMIPS0:1;
    uint_io32_t		u1NMIPS1:1;
    uint_io32_t		u1NMIPS2:1;
    uint_io32_t		u1NMIPS3:1;
    uint_io32_t		u1NMIPS4:1;
    uint_io32_t		u1NMIPS5:1;
    uint_io32_t		u1NMIPS6:1;
    uint_io32_t		u1NMIPS7:1;
    uint_io32_t		u1NMIPS8:1;
    uint_io32_t		u1NMIPS9:1;
    uint_io32_t		u1NMIPS10:1;
    uint_io32_t		u1NMIPS11:1;
    uint_io32_t		u1NMIPS12:1;
    uint_io32_t		u1NMIPS13:1;
    uint_io32_t		u1NMIPS14:1;
    uint_io32_t		u1NMIPS15:1;
    uint_io32_t		u1NMIPS16:1;
    uint_io32_t		u1NMIPS17:1;
    uint_io32_t		u1NMIPS18:1;
    uint_io32_t		u1NMIPS19:1;
    uint_io32_t		u1NMIPS20:1;
    uint_io32_t		u1NMIPS21:1;
    uint_io32_t		u1NMIPS22:1;
    uint_io32_t		u1NMIPS23:1;
    uint_io32_t		u1NMIPS24:1;
    uint_io32_t		u1NMIPS25:1;
    uint_io32_t		u1NMIPS26:1;
    uint_io32_t		u1NMIPS27:1;
    uint_io32_t		u1NMIPS28:1;
    uint_io32_t		u1NMIPS29:1;
    uint_io32_t		u1NMIPS30:1;
    uint_io32_t		u1NMIPS31:1;
}stc_irc0_nmips_field_t;

typedef union un_irc0_nmips{
    uint_io32_t		u32Register;
    stc_irc0_nmips_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_nmips_t;

/* IRQRS0 */
#define IRC0_IRQRS0	(IRC0.unIRQRS0.u32Register)  /*@rg@*/
#define IRC0_IRQRS0_IRQRS0	(*(volatile uint_io8_t*)0xB1106580)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS1	(*(volatile uint_io8_t*)0xB1106581)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS2	(*(volatile uint_io8_t*)0xB1106582)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS3	(*(volatile uint_io8_t*)0xB1106583)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS4	(*(volatile uint_io8_t*)0xB1106584)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS5	(*(volatile uint_io8_t*)0xB1106585)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS6	(*(volatile uint_io8_t*)0xB1106586)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS7	(*(volatile uint_io8_t*)0xB1106587)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS8	(*(volatile uint_io8_t*)0xB1106588)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS9	(*(volatile uint_io8_t*)0xB1106589)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS10	(*(volatile uint_io8_t*)0xB110658A)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS11	(*(volatile uint_io8_t*)0xB110658B)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS12	(*(volatile uint_io8_t*)0xB110658C)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS13	(*(volatile uint_io8_t*)0xB110658D)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS14	(*(volatile uint_io8_t*)0xB110658E)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS15	(*(volatile uint_io8_t*)0xB110658F)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS16	(*(volatile uint_io8_t*)0xB1106590)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS17	(*(volatile uint_io8_t*)0xB1106591)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS18	(*(volatile uint_io8_t*)0xB1106592)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS19	(*(volatile uint_io8_t*)0xB1106593)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS20	(*(volatile uint_io8_t*)0xB1106594)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS21	(*(volatile uint_io8_t*)0xB1106595)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS22	(*(volatile uint_io8_t*)0xB1106596)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS23	(*(volatile uint_io8_t*)0xB1106597)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS24	(*(volatile uint_io8_t*)0xB1106598)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS25	(*(volatile uint_io8_t*)0xB1106599)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS26	(*(volatile uint_io8_t*)0xB110659A)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS27	(*(volatile uint_io8_t*)0xB110659B)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS28	(*(volatile uint_io8_t*)0xB110659C)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS29	(*(volatile uint_io8_t*)0xB110659D)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS30	(*(volatile uint_io8_t*)0xB110659E)  /*@bfbba@*/
#define IRC0_IRQRS0_IRQRS31	(*(volatile uint_io8_t*)0xB110659F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs0_field{
    uint_io32_t		u1IRQRS0:1;
    uint_io32_t		u1IRQRS1:1;
    uint_io32_t		u1IRQRS2:1;
    uint_io32_t		u1IRQRS3:1;
    uint_io32_t		u1IRQRS4:1;
    uint_io32_t		u1IRQRS5:1;
    uint_io32_t		u1IRQRS6:1;
    uint_io32_t		u1IRQRS7:1;
    uint_io32_t		u1IRQRS8:1;
    uint_io32_t		u1IRQRS9:1;
    uint_io32_t		u1IRQRS10:1;
    uint_io32_t		u1IRQRS11:1;
    uint_io32_t		u1IRQRS12:1;
    uint_io32_t		u1IRQRS13:1;
    uint_io32_t		u1IRQRS14:1;
    uint_io32_t		u1IRQRS15:1;
    uint_io32_t		u1IRQRS16:1;
    uint_io32_t		u1IRQRS17:1;
    uint_io32_t		u1IRQRS18:1;
    uint_io32_t		u1IRQRS19:1;
    uint_io32_t		u1IRQRS20:1;
    uint_io32_t		u1IRQRS21:1;
    uint_io32_t		u1IRQRS22:1;
    uint_io32_t		u1IRQRS23:1;
    uint_io32_t		u1IRQRS24:1;
    uint_io32_t		u1IRQRS25:1;
    uint_io32_t		u1IRQRS26:1;
    uint_io32_t		u1IRQRS27:1;
    uint_io32_t		u1IRQRS28:1;
    uint_io32_t		u1IRQRS29:1;
    uint_io32_t		u1IRQRS30:1;
    uint_io32_t		u1IRQRS31:1;
}stc_irc0_irqrs0_field_t;

typedef union un_irc0_irqrs0{
    uint_io32_t		u32Register;
    stc_irc0_irqrs0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs0_t;

/* IRQRS1 */
#define IRC0_IRQRS1	(IRC0.unIRQRS1.u32Register)  /*@rg@*/
#define IRC0_IRQRS1_IRQRS32	(*(volatile uint_io8_t*)0xB11065A0)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS33	(*(volatile uint_io8_t*)0xB11065A1)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS34	(*(volatile uint_io8_t*)0xB11065A2)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS35	(*(volatile uint_io8_t*)0xB11065A3)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS36	(*(volatile uint_io8_t*)0xB11065A4)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS37	(*(volatile uint_io8_t*)0xB11065A5)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS38	(*(volatile uint_io8_t*)0xB11065A6)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS39	(*(volatile uint_io8_t*)0xB11065A7)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS40	(*(volatile uint_io8_t*)0xB11065A8)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS41	(*(volatile uint_io8_t*)0xB11065A9)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS42	(*(volatile uint_io8_t*)0xB11065AA)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS43	(*(volatile uint_io8_t*)0xB11065AB)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS44	(*(volatile uint_io8_t*)0xB11065AC)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS45	(*(volatile uint_io8_t*)0xB11065AD)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS46	(*(volatile uint_io8_t*)0xB11065AE)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS47	(*(volatile uint_io8_t*)0xB11065AF)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS48	(*(volatile uint_io8_t*)0xB11065B0)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS49	(*(volatile uint_io8_t*)0xB11065B1)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS50	(*(volatile uint_io8_t*)0xB11065B2)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS51	(*(volatile uint_io8_t*)0xB11065B3)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS52	(*(volatile uint_io8_t*)0xB11065B4)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS53	(*(volatile uint_io8_t*)0xB11065B5)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS54	(*(volatile uint_io8_t*)0xB11065B6)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS55	(*(volatile uint_io8_t*)0xB11065B7)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS56	(*(volatile uint_io8_t*)0xB11065B8)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS57	(*(volatile uint_io8_t*)0xB11065B9)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS58	(*(volatile uint_io8_t*)0xB11065BA)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS59	(*(volatile uint_io8_t*)0xB11065BB)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS60	(*(volatile uint_io8_t*)0xB11065BC)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS61	(*(volatile uint_io8_t*)0xB11065BD)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS62	(*(volatile uint_io8_t*)0xB11065BE)  /*@bfbba@*/
#define IRC0_IRQRS1_IRQRS63	(*(volatile uint_io8_t*)0xB11065BF)  /*@bfbba@*/

typedef struct stc_irc0_irqrs1_field{
    uint_io32_t		u1IRQRS32:1;
    uint_io32_t		u1IRQRS33:1;
    uint_io32_t		u1IRQRS34:1;
    uint_io32_t		u1IRQRS35:1;
    uint_io32_t		u1IRQRS36:1;
    uint_io32_t		u1IRQRS37:1;
    uint_io32_t		u1IRQRS38:1;
    uint_io32_t		u1IRQRS39:1;
    uint_io32_t		u1IRQRS40:1;
    uint_io32_t		u1IRQRS41:1;
    uint_io32_t		u1IRQRS42:1;
    uint_io32_t		u1IRQRS43:1;
    uint_io32_t		u1IRQRS44:1;
    uint_io32_t		u1IRQRS45:1;
    uint_io32_t		u1IRQRS46:1;
    uint_io32_t		u1IRQRS47:1;
    uint_io32_t		u1IRQRS48:1;
    uint_io32_t		u1IRQRS49:1;
    uint_io32_t		u1IRQRS50:1;
    uint_io32_t		u1IRQRS51:1;
    uint_io32_t		u1IRQRS52:1;
    uint_io32_t		u1IRQRS53:1;
    uint_io32_t		u1IRQRS54:1;
    uint_io32_t		u1IRQRS55:1;
    uint_io32_t		u1IRQRS56:1;
    uint_io32_t		u1IRQRS57:1;
    uint_io32_t		u1IRQRS58:1;
    uint_io32_t		u1IRQRS59:1;
    uint_io32_t		u1IRQRS60:1;
    uint_io32_t		u1IRQRS61:1;
    uint_io32_t		u1IRQRS62:1;
    uint_io32_t		u1IRQRS63:1;
}stc_irc0_irqrs1_field_t;

typedef union un_irc0_irqrs1{
    uint_io32_t		u32Register;
    stc_irc0_irqrs1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs1_t;

/* IRQRS2 */
#define IRC0_IRQRS2	(IRC0.unIRQRS2.u32Register)  /*@rg@*/
#define IRC0_IRQRS2_IRQRS64	(*(volatile uint_io8_t*)0xB11065C0)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS65	(*(volatile uint_io8_t*)0xB11065C1)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS66	(*(volatile uint_io8_t*)0xB11065C2)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS67	(*(volatile uint_io8_t*)0xB11065C3)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS68	(*(volatile uint_io8_t*)0xB11065C4)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS69	(*(volatile uint_io8_t*)0xB11065C5)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS70	(*(volatile uint_io8_t*)0xB11065C6)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS71	(*(volatile uint_io8_t*)0xB11065C7)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS72	(*(volatile uint_io8_t*)0xB11065C8)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS73	(*(volatile uint_io8_t*)0xB11065C9)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS74	(*(volatile uint_io8_t*)0xB11065CA)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS75	(*(volatile uint_io8_t*)0xB11065CB)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS76	(*(volatile uint_io8_t*)0xB11065CC)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS77	(*(volatile uint_io8_t*)0xB11065CD)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS78	(*(volatile uint_io8_t*)0xB11065CE)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS79	(*(volatile uint_io8_t*)0xB11065CF)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS80	(*(volatile uint_io8_t*)0xB11065D0)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS81	(*(volatile uint_io8_t*)0xB11065D1)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS82	(*(volatile uint_io8_t*)0xB11065D2)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS83	(*(volatile uint_io8_t*)0xB11065D3)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS84	(*(volatile uint_io8_t*)0xB11065D4)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS85	(*(volatile uint_io8_t*)0xB11065D5)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS86	(*(volatile uint_io8_t*)0xB11065D6)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS87	(*(volatile uint_io8_t*)0xB11065D7)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS88	(*(volatile uint_io8_t*)0xB11065D8)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS89	(*(volatile uint_io8_t*)0xB11065D9)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS90	(*(volatile uint_io8_t*)0xB11065DA)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS91	(*(volatile uint_io8_t*)0xB11065DB)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS92	(*(volatile uint_io8_t*)0xB11065DC)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS93	(*(volatile uint_io8_t*)0xB11065DD)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS94	(*(volatile uint_io8_t*)0xB11065DE)  /*@bfbba@*/
#define IRC0_IRQRS2_IRQRS95	(*(volatile uint_io8_t*)0xB11065DF)  /*@bfbba@*/

typedef struct stc_irc0_irqrs2_field{
    uint_io32_t		u1IRQRS64:1;
    uint_io32_t		u1IRQRS65:1;
    uint_io32_t		u1IRQRS66:1;
    uint_io32_t		u1IRQRS67:1;
    uint_io32_t		u1IRQRS68:1;
    uint_io32_t		u1IRQRS69:1;
    uint_io32_t		u1IRQRS70:1;
    uint_io32_t		u1IRQRS71:1;
    uint_io32_t		u1IRQRS72:1;
    uint_io32_t		u1IRQRS73:1;
    uint_io32_t		u1IRQRS74:1;
    uint_io32_t		u1IRQRS75:1;
    uint_io32_t		u1IRQRS76:1;
    uint_io32_t		u1IRQRS77:1;
    uint_io32_t		u1IRQRS78:1;
    uint_io32_t		u1IRQRS79:1;
    uint_io32_t		u1IRQRS80:1;
    uint_io32_t		u1IRQRS81:1;
    uint_io32_t		u1IRQRS82:1;
    uint_io32_t		u1IRQRS83:1;
    uint_io32_t		u1IRQRS84:1;
    uint_io32_t		u1IRQRS85:1;
    uint_io32_t		u1IRQRS86:1;
    uint_io32_t		u1IRQRS87:1;
    uint_io32_t		u1IRQRS88:1;
    uint_io32_t		u1IRQRS89:1;
    uint_io32_t		u1IRQRS90:1;
    uint_io32_t		u1IRQRS91:1;
    uint_io32_t		u1IRQRS92:1;
    uint_io32_t		u1IRQRS93:1;
    uint_io32_t		u1IRQRS94:1;
    uint_io32_t		u1IRQRS95:1;
}stc_irc0_irqrs2_field_t;

typedef union un_irc0_irqrs2{
    uint_io32_t		u32Register;
    stc_irc0_irqrs2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs2_t;

/* IRQRS3 */
#define IRC0_IRQRS3	(IRC0.unIRQRS3.u32Register)  /*@rg@*/
#define IRC0_IRQRS3_IRQRS96	(*(volatile uint_io8_t*)0xB11065E0)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS97	(*(volatile uint_io8_t*)0xB11065E1)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS98	(*(volatile uint_io8_t*)0xB11065E2)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS99	(*(volatile uint_io8_t*)0xB11065E3)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS100	(*(volatile uint_io8_t*)0xB11065E4)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS101	(*(volatile uint_io8_t*)0xB11065E5)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS102	(*(volatile uint_io8_t*)0xB11065E6)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS103	(*(volatile uint_io8_t*)0xB11065E7)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS104	(*(volatile uint_io8_t*)0xB11065E8)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS105	(*(volatile uint_io8_t*)0xB11065E9)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS106	(*(volatile uint_io8_t*)0xB11065EA)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS107	(*(volatile uint_io8_t*)0xB11065EB)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS108	(*(volatile uint_io8_t*)0xB11065EC)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS109	(*(volatile uint_io8_t*)0xB11065ED)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS110	(*(volatile uint_io8_t*)0xB11065EE)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS111	(*(volatile uint_io8_t*)0xB11065EF)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS112	(*(volatile uint_io8_t*)0xB11065F0)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS113	(*(volatile uint_io8_t*)0xB11065F1)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS114	(*(volatile uint_io8_t*)0xB11065F2)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS115	(*(volatile uint_io8_t*)0xB11065F3)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS116	(*(volatile uint_io8_t*)0xB11065F4)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS117	(*(volatile uint_io8_t*)0xB11065F5)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS118	(*(volatile uint_io8_t*)0xB11065F6)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS119	(*(volatile uint_io8_t*)0xB11065F7)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS120	(*(volatile uint_io8_t*)0xB11065F8)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS121	(*(volatile uint_io8_t*)0xB11065F9)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS122	(*(volatile uint_io8_t*)0xB11065FA)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS123	(*(volatile uint_io8_t*)0xB11065FB)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS124	(*(volatile uint_io8_t*)0xB11065FC)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS125	(*(volatile uint_io8_t*)0xB11065FD)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS126	(*(volatile uint_io8_t*)0xB11065FE)  /*@bfbba@*/
#define IRC0_IRQRS3_IRQRS127	(*(volatile uint_io8_t*)0xB11065FF)  /*@bfbba@*/

typedef struct stc_irc0_irqrs3_field{
    uint_io32_t		u1IRQRS96:1;
    uint_io32_t		u1IRQRS97:1;
    uint_io32_t		u1IRQRS98:1;
    uint_io32_t		u1IRQRS99:1;
    uint_io32_t		u1IRQRS100:1;
    uint_io32_t		u1IRQRS101:1;
    uint_io32_t		u1IRQRS102:1;
    uint_io32_t		u1IRQRS103:1;
    uint_io32_t		u1IRQRS104:1;
    uint_io32_t		u1IRQRS105:1;
    uint_io32_t		u1IRQRS106:1;
    uint_io32_t		u1IRQRS107:1;
    uint_io32_t		u1IRQRS108:1;
    uint_io32_t		u1IRQRS109:1;
    uint_io32_t		u1IRQRS110:1;
    uint_io32_t		u1IRQRS111:1;
    uint_io32_t		u1IRQRS112:1;
    uint_io32_t		u1IRQRS113:1;
    uint_io32_t		u1IRQRS114:1;
    uint_io32_t		u1IRQRS115:1;
    uint_io32_t		u1IRQRS116:1;
    uint_io32_t		u1IRQRS117:1;
    uint_io32_t		u1IRQRS118:1;
    uint_io32_t		u1IRQRS119:1;
    uint_io32_t		u1IRQRS120:1;
    uint_io32_t		u1IRQRS121:1;
    uint_io32_t		u1IRQRS122:1;
    uint_io32_t		u1IRQRS123:1;
    uint_io32_t		u1IRQRS124:1;
    uint_io32_t		u1IRQRS125:1;
    uint_io32_t		u1IRQRS126:1;
    uint_io32_t		u1IRQRS127:1;
}stc_irc0_irqrs3_field_t;

typedef union un_irc0_irqrs3{
    uint_io32_t		u32Register;
    stc_irc0_irqrs3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs3_t;

/* IRQRS4 */
#define IRC0_IRQRS4	(IRC0.unIRQRS4.u32Register)  /*@rg@*/
#define IRC0_IRQRS4_IRQRS128	(*(volatile uint_io8_t*)0xB1106600)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS129	(*(volatile uint_io8_t*)0xB1106601)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS130	(*(volatile uint_io8_t*)0xB1106602)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS131	(*(volatile uint_io8_t*)0xB1106603)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS132	(*(volatile uint_io8_t*)0xB1106604)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS133	(*(volatile uint_io8_t*)0xB1106605)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS134	(*(volatile uint_io8_t*)0xB1106606)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS135	(*(volatile uint_io8_t*)0xB1106607)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS136	(*(volatile uint_io8_t*)0xB1106608)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS137	(*(volatile uint_io8_t*)0xB1106609)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS138	(*(volatile uint_io8_t*)0xB110660A)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS139	(*(volatile uint_io8_t*)0xB110660B)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS140	(*(volatile uint_io8_t*)0xB110660C)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS141	(*(volatile uint_io8_t*)0xB110660D)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS142	(*(volatile uint_io8_t*)0xB110660E)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS143	(*(volatile uint_io8_t*)0xB110660F)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS144	(*(volatile uint_io8_t*)0xB1106610)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS145	(*(volatile uint_io8_t*)0xB1106611)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS146	(*(volatile uint_io8_t*)0xB1106612)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS147	(*(volatile uint_io8_t*)0xB1106613)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS148	(*(volatile uint_io8_t*)0xB1106614)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS149	(*(volatile uint_io8_t*)0xB1106615)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS150	(*(volatile uint_io8_t*)0xB1106616)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS151	(*(volatile uint_io8_t*)0xB1106617)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS152	(*(volatile uint_io8_t*)0xB1106618)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS153	(*(volatile uint_io8_t*)0xB1106619)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS154	(*(volatile uint_io8_t*)0xB110661A)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS155	(*(volatile uint_io8_t*)0xB110661B)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS156	(*(volatile uint_io8_t*)0xB110661C)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS157	(*(volatile uint_io8_t*)0xB110661D)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS158	(*(volatile uint_io8_t*)0xB110661E)  /*@bfbba@*/
#define IRC0_IRQRS4_IRQRS159	(*(volatile uint_io8_t*)0xB110661F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs4_field{
    uint_io32_t		u1IRQRS128:1;
    uint_io32_t		u1IRQRS129:1;
    uint_io32_t		u1IRQRS130:1;
    uint_io32_t		u1IRQRS131:1;
    uint_io32_t		u1IRQRS132:1;
    uint_io32_t		u1IRQRS133:1;
    uint_io32_t		u1IRQRS134:1;
    uint_io32_t		u1IRQRS135:1;
    uint_io32_t		u1IRQRS136:1;
    uint_io32_t		u1IRQRS137:1;
    uint_io32_t		u1IRQRS138:1;
    uint_io32_t		u1IRQRS139:1;
    uint_io32_t		u1IRQRS140:1;
    uint_io32_t		u1IRQRS141:1;
    uint_io32_t		u1IRQRS142:1;
    uint_io32_t		u1IRQRS143:1;
    uint_io32_t		u1IRQRS144:1;
    uint_io32_t		u1IRQRS145:1;
    uint_io32_t		u1IRQRS146:1;
    uint_io32_t		u1IRQRS147:1;
    uint_io32_t		u1IRQRS148:1;
    uint_io32_t		u1IRQRS149:1;
    uint_io32_t		u1IRQRS150:1;
    uint_io32_t		u1IRQRS151:1;
    uint_io32_t		u1IRQRS152:1;
    uint_io32_t		u1IRQRS153:1;
    uint_io32_t		u1IRQRS154:1;
    uint_io32_t		u1IRQRS155:1;
    uint_io32_t		u1IRQRS156:1;
    uint_io32_t		u1IRQRS157:1;
    uint_io32_t		u1IRQRS158:1;
    uint_io32_t		u1IRQRS159:1;
}stc_irc0_irqrs4_field_t;

typedef union un_irc0_irqrs4{
    uint_io32_t		u32Register;
    stc_irc0_irqrs4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs4_t;

/* IRQRS5 */
#define IRC0_IRQRS5	(IRC0.unIRQRS5.u32Register)  /*@rg@*/
#define IRC0_IRQRS5_IRQRS160	(*(volatile uint_io8_t*)0xB1106620)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS161	(*(volatile uint_io8_t*)0xB1106621)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS162	(*(volatile uint_io8_t*)0xB1106622)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS163	(*(volatile uint_io8_t*)0xB1106623)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS164	(*(volatile uint_io8_t*)0xB1106624)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS165	(*(volatile uint_io8_t*)0xB1106625)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS166	(*(volatile uint_io8_t*)0xB1106626)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS167	(*(volatile uint_io8_t*)0xB1106627)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS168	(*(volatile uint_io8_t*)0xB1106628)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS169	(*(volatile uint_io8_t*)0xB1106629)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS170	(*(volatile uint_io8_t*)0xB110662A)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS171	(*(volatile uint_io8_t*)0xB110662B)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS172	(*(volatile uint_io8_t*)0xB110662C)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS173	(*(volatile uint_io8_t*)0xB110662D)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS174	(*(volatile uint_io8_t*)0xB110662E)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS175	(*(volatile uint_io8_t*)0xB110662F)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS176	(*(volatile uint_io8_t*)0xB1106630)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS177	(*(volatile uint_io8_t*)0xB1106631)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS178	(*(volatile uint_io8_t*)0xB1106632)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS179	(*(volatile uint_io8_t*)0xB1106633)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS180	(*(volatile uint_io8_t*)0xB1106634)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS181	(*(volatile uint_io8_t*)0xB1106635)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS182	(*(volatile uint_io8_t*)0xB1106636)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS183	(*(volatile uint_io8_t*)0xB1106637)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS184	(*(volatile uint_io8_t*)0xB1106638)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS185	(*(volatile uint_io8_t*)0xB1106639)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS186	(*(volatile uint_io8_t*)0xB110663A)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS187	(*(volatile uint_io8_t*)0xB110663B)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS188	(*(volatile uint_io8_t*)0xB110663C)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS189	(*(volatile uint_io8_t*)0xB110663D)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS190	(*(volatile uint_io8_t*)0xB110663E)  /*@bfbba@*/
#define IRC0_IRQRS5_IRQRS191	(*(volatile uint_io8_t*)0xB110663F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs5_field{
    uint_io32_t		u1IRQRS160:1;
    uint_io32_t		u1IRQRS161:1;
    uint_io32_t		u1IRQRS162:1;
    uint_io32_t		u1IRQRS163:1;
    uint_io32_t		u1IRQRS164:1;
    uint_io32_t		u1IRQRS165:1;
    uint_io32_t		u1IRQRS166:1;
    uint_io32_t		u1IRQRS167:1;
    uint_io32_t		u1IRQRS168:1;
    uint_io32_t		u1IRQRS169:1;
    uint_io32_t		u1IRQRS170:1;
    uint_io32_t		u1IRQRS171:1;
    uint_io32_t		u1IRQRS172:1;
    uint_io32_t		u1IRQRS173:1;
    uint_io32_t		u1IRQRS174:1;
    uint_io32_t		u1IRQRS175:1;
    uint_io32_t		u1IRQRS176:1;
    uint_io32_t		u1IRQRS177:1;
    uint_io32_t		u1IRQRS178:1;
    uint_io32_t		u1IRQRS179:1;
    uint_io32_t		u1IRQRS180:1;
    uint_io32_t		u1IRQRS181:1;
    uint_io32_t		u1IRQRS182:1;
    uint_io32_t		u1IRQRS183:1;
    uint_io32_t		u1IRQRS184:1;
    uint_io32_t		u1IRQRS185:1;
    uint_io32_t		u1IRQRS186:1;
    uint_io32_t		u1IRQRS187:1;
    uint_io32_t		u1IRQRS188:1;
    uint_io32_t		u1IRQRS189:1;
    uint_io32_t		u1IRQRS190:1;
    uint_io32_t		u1IRQRS191:1;
}stc_irc0_irqrs5_field_t;

typedef union un_irc0_irqrs5{
    uint_io32_t		u32Register;
    stc_irc0_irqrs5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs5_t;

/* IRQRS6 */
#define IRC0_IRQRS6	(IRC0.unIRQRS6.u32Register)  /*@rg@*/
#define IRC0_IRQRS6_IRQRS192	(*(volatile uint_io8_t*)0xB1106640)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS193	(*(volatile uint_io8_t*)0xB1106641)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS194	(*(volatile uint_io8_t*)0xB1106642)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS195	(*(volatile uint_io8_t*)0xB1106643)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS196	(*(volatile uint_io8_t*)0xB1106644)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS197	(*(volatile uint_io8_t*)0xB1106645)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS198	(*(volatile uint_io8_t*)0xB1106646)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS199	(*(volatile uint_io8_t*)0xB1106647)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS200	(*(volatile uint_io8_t*)0xB1106648)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS201	(*(volatile uint_io8_t*)0xB1106649)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS202	(*(volatile uint_io8_t*)0xB110664A)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS203	(*(volatile uint_io8_t*)0xB110664B)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS204	(*(volatile uint_io8_t*)0xB110664C)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS205	(*(volatile uint_io8_t*)0xB110664D)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS206	(*(volatile uint_io8_t*)0xB110664E)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS207	(*(volatile uint_io8_t*)0xB110664F)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS208	(*(volatile uint_io8_t*)0xB1106650)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS209	(*(volatile uint_io8_t*)0xB1106651)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS210	(*(volatile uint_io8_t*)0xB1106652)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS211	(*(volatile uint_io8_t*)0xB1106653)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS212	(*(volatile uint_io8_t*)0xB1106654)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS213	(*(volatile uint_io8_t*)0xB1106655)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS214	(*(volatile uint_io8_t*)0xB1106656)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS215	(*(volatile uint_io8_t*)0xB1106657)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS216	(*(volatile uint_io8_t*)0xB1106658)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS217	(*(volatile uint_io8_t*)0xB1106659)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS218	(*(volatile uint_io8_t*)0xB110665A)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS219	(*(volatile uint_io8_t*)0xB110665B)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS220	(*(volatile uint_io8_t*)0xB110665C)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS221	(*(volatile uint_io8_t*)0xB110665D)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS222	(*(volatile uint_io8_t*)0xB110665E)  /*@bfbba@*/
#define IRC0_IRQRS6_IRQRS223	(*(volatile uint_io8_t*)0xB110665F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs6_field{
    uint_io32_t		u1IRQRS192:1;
    uint_io32_t		u1IRQRS193:1;
    uint_io32_t		u1IRQRS194:1;
    uint_io32_t		u1IRQRS195:1;
    uint_io32_t		u1IRQRS196:1;
    uint_io32_t		u1IRQRS197:1;
    uint_io32_t		u1IRQRS198:1;
    uint_io32_t		u1IRQRS199:1;
    uint_io32_t		u1IRQRS200:1;
    uint_io32_t		u1IRQRS201:1;
    uint_io32_t		u1IRQRS202:1;
    uint_io32_t		u1IRQRS203:1;
    uint_io32_t		u1IRQRS204:1;
    uint_io32_t		u1IRQRS205:1;
    uint_io32_t		u1IRQRS206:1;
    uint_io32_t		u1IRQRS207:1;
    uint_io32_t		u1IRQRS208:1;
    uint_io32_t		u1IRQRS209:1;
    uint_io32_t		u1IRQRS210:1;
    uint_io32_t		u1IRQRS211:1;
    uint_io32_t		u1IRQRS212:1;
    uint_io32_t		u1IRQRS213:1;
    uint_io32_t		u1IRQRS214:1;
    uint_io32_t		u1IRQRS215:1;
    uint_io32_t		u1IRQRS216:1;
    uint_io32_t		u1IRQRS217:1;
    uint_io32_t		u1IRQRS218:1;
    uint_io32_t		u1IRQRS219:1;
    uint_io32_t		u1IRQRS220:1;
    uint_io32_t		u1IRQRS221:1;
    uint_io32_t		u1IRQRS222:1;
    uint_io32_t		u1IRQRS223:1;
}stc_irc0_irqrs6_field_t;

typedef union un_irc0_irqrs6{
    uint_io32_t		u32Register;
    stc_irc0_irqrs6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs6_t;

/* IRQRS7 */
#define IRC0_IRQRS7	(IRC0.unIRQRS7.u32Register)  /*@rg@*/
#define IRC0_IRQRS7_IRQRS224	(*(volatile uint_io8_t*)0xB1106660)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS225	(*(volatile uint_io8_t*)0xB1106661)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS226	(*(volatile uint_io8_t*)0xB1106662)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS227	(*(volatile uint_io8_t*)0xB1106663)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS228	(*(volatile uint_io8_t*)0xB1106664)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS229	(*(volatile uint_io8_t*)0xB1106665)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS230	(*(volatile uint_io8_t*)0xB1106666)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS231	(*(volatile uint_io8_t*)0xB1106667)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS232	(*(volatile uint_io8_t*)0xB1106668)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS233	(*(volatile uint_io8_t*)0xB1106669)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS234	(*(volatile uint_io8_t*)0xB110666A)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS235	(*(volatile uint_io8_t*)0xB110666B)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS236	(*(volatile uint_io8_t*)0xB110666C)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS237	(*(volatile uint_io8_t*)0xB110666D)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS238	(*(volatile uint_io8_t*)0xB110666E)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS239	(*(volatile uint_io8_t*)0xB110666F)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS240	(*(volatile uint_io8_t*)0xB1106670)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS241	(*(volatile uint_io8_t*)0xB1106671)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS242	(*(volatile uint_io8_t*)0xB1106672)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS243	(*(volatile uint_io8_t*)0xB1106673)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS244	(*(volatile uint_io8_t*)0xB1106674)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS245	(*(volatile uint_io8_t*)0xB1106675)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS246	(*(volatile uint_io8_t*)0xB1106676)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS247	(*(volatile uint_io8_t*)0xB1106677)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS248	(*(volatile uint_io8_t*)0xB1106678)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS249	(*(volatile uint_io8_t*)0xB1106679)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS250	(*(volatile uint_io8_t*)0xB110667A)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS251	(*(volatile uint_io8_t*)0xB110667B)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS252	(*(volatile uint_io8_t*)0xB110667C)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS253	(*(volatile uint_io8_t*)0xB110667D)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS254	(*(volatile uint_io8_t*)0xB110667E)  /*@bfbba@*/
#define IRC0_IRQRS7_IRQRS255	(*(volatile uint_io8_t*)0xB110667F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs7_field{
    uint_io32_t		u1IRQRS224:1;
    uint_io32_t		u1IRQRS225:1;
    uint_io32_t		u1IRQRS226:1;
    uint_io32_t		u1IRQRS227:1;
    uint_io32_t		u1IRQRS228:1;
    uint_io32_t		u1IRQRS229:1;
    uint_io32_t		u1IRQRS230:1;
    uint_io32_t		u1IRQRS231:1;
    uint_io32_t		u1IRQRS232:1;
    uint_io32_t		u1IRQRS233:1;
    uint_io32_t		u1IRQRS234:1;
    uint_io32_t		u1IRQRS235:1;
    uint_io32_t		u1IRQRS236:1;
    uint_io32_t		u1IRQRS237:1;
    uint_io32_t		u1IRQRS238:1;
    uint_io32_t		u1IRQRS239:1;
    uint_io32_t		u1IRQRS240:1;
    uint_io32_t		u1IRQRS241:1;
    uint_io32_t		u1IRQRS242:1;
    uint_io32_t		u1IRQRS243:1;
    uint_io32_t		u1IRQRS244:1;
    uint_io32_t		u1IRQRS245:1;
    uint_io32_t		u1IRQRS246:1;
    uint_io32_t		u1IRQRS247:1;
    uint_io32_t		u1IRQRS248:1;
    uint_io32_t		u1IRQRS249:1;
    uint_io32_t		u1IRQRS250:1;
    uint_io32_t		u1IRQRS251:1;
    uint_io32_t		u1IRQRS252:1;
    uint_io32_t		u1IRQRS253:1;
    uint_io32_t		u1IRQRS254:1;
    uint_io32_t		u1IRQRS255:1;
}stc_irc0_irqrs7_field_t;

typedef union un_irc0_irqrs7{
    uint_io32_t		u32Register;
    stc_irc0_irqrs7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs7_t;

/* IRQRS8 */
#define IRC0_IRQRS8	(IRC0.unIRQRS8.u32Register)  /*@rg@*/
#define IRC0_IRQRS8_IRQRS256	(*(volatile uint_io8_t*)0xB1106680)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS257	(*(volatile uint_io8_t*)0xB1106681)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS258	(*(volatile uint_io8_t*)0xB1106682)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS259	(*(volatile uint_io8_t*)0xB1106683)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS260	(*(volatile uint_io8_t*)0xB1106684)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS261	(*(volatile uint_io8_t*)0xB1106685)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS262	(*(volatile uint_io8_t*)0xB1106686)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS263	(*(volatile uint_io8_t*)0xB1106687)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS264	(*(volatile uint_io8_t*)0xB1106688)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS265	(*(volatile uint_io8_t*)0xB1106689)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS266	(*(volatile uint_io8_t*)0xB110668A)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS267	(*(volatile uint_io8_t*)0xB110668B)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS268	(*(volatile uint_io8_t*)0xB110668C)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS269	(*(volatile uint_io8_t*)0xB110668D)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS270	(*(volatile uint_io8_t*)0xB110668E)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS271	(*(volatile uint_io8_t*)0xB110668F)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS272	(*(volatile uint_io8_t*)0xB1106690)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS273	(*(volatile uint_io8_t*)0xB1106691)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS274	(*(volatile uint_io8_t*)0xB1106692)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS275	(*(volatile uint_io8_t*)0xB1106693)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS276	(*(volatile uint_io8_t*)0xB1106694)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS277	(*(volatile uint_io8_t*)0xB1106695)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS278	(*(volatile uint_io8_t*)0xB1106696)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS279	(*(volatile uint_io8_t*)0xB1106697)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS280	(*(volatile uint_io8_t*)0xB1106698)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS281	(*(volatile uint_io8_t*)0xB1106699)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS282	(*(volatile uint_io8_t*)0xB110669A)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS283	(*(volatile uint_io8_t*)0xB110669B)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS284	(*(volatile uint_io8_t*)0xB110669C)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS285	(*(volatile uint_io8_t*)0xB110669D)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS286	(*(volatile uint_io8_t*)0xB110669E)  /*@bfbba@*/
#define IRC0_IRQRS8_IRQRS287	(*(volatile uint_io8_t*)0xB110669F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs8_field{
    uint_io32_t		u1IRQRS256:1;
    uint_io32_t		u1IRQRS257:1;
    uint_io32_t		u1IRQRS258:1;
    uint_io32_t		u1IRQRS259:1;
    uint_io32_t		u1IRQRS260:1;
    uint_io32_t		u1IRQRS261:1;
    uint_io32_t		u1IRQRS262:1;
    uint_io32_t		u1IRQRS263:1;
    uint_io32_t		u1IRQRS264:1;
    uint_io32_t		u1IRQRS265:1;
    uint_io32_t		u1IRQRS266:1;
    uint_io32_t		u1IRQRS267:1;
    uint_io32_t		u1IRQRS268:1;
    uint_io32_t		u1IRQRS269:1;
    uint_io32_t		u1IRQRS270:1;
    uint_io32_t		u1IRQRS271:1;
    uint_io32_t		u1IRQRS272:1;
    uint_io32_t		u1IRQRS273:1;
    uint_io32_t		u1IRQRS274:1;
    uint_io32_t		u1IRQRS275:1;
    uint_io32_t		u1IRQRS276:1;
    uint_io32_t		u1IRQRS277:1;
    uint_io32_t		u1IRQRS278:1;
    uint_io32_t		u1IRQRS279:1;
    uint_io32_t		u1IRQRS280:1;
    uint_io32_t		u1IRQRS281:1;
    uint_io32_t		u1IRQRS282:1;
    uint_io32_t		u1IRQRS283:1;
    uint_io32_t		u1IRQRS284:1;
    uint_io32_t		u1IRQRS285:1;
    uint_io32_t		u1IRQRS286:1;
    uint_io32_t		u1IRQRS287:1;
}stc_irc0_irqrs8_field_t;

typedef union un_irc0_irqrs8{
    uint_io32_t		u32Register;
    stc_irc0_irqrs8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs8_t;

/* IRQRS9 */
#define IRC0_IRQRS9	(IRC0.unIRQRS9.u32Register)  /*@rg@*/
#define IRC0_IRQRS9_IRQRS288	(*(volatile uint_io8_t*)0xB11066A0)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS289	(*(volatile uint_io8_t*)0xB11066A1)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS290	(*(volatile uint_io8_t*)0xB11066A2)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS291	(*(volatile uint_io8_t*)0xB11066A3)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS292	(*(volatile uint_io8_t*)0xB11066A4)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS293	(*(volatile uint_io8_t*)0xB11066A5)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS294	(*(volatile uint_io8_t*)0xB11066A6)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS295	(*(volatile uint_io8_t*)0xB11066A7)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS296	(*(volatile uint_io8_t*)0xB11066A8)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS297	(*(volatile uint_io8_t*)0xB11066A9)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS298	(*(volatile uint_io8_t*)0xB11066AA)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS299	(*(volatile uint_io8_t*)0xB11066AB)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS300	(*(volatile uint_io8_t*)0xB11066AC)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS301	(*(volatile uint_io8_t*)0xB11066AD)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS302	(*(volatile uint_io8_t*)0xB11066AE)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS303	(*(volatile uint_io8_t*)0xB11066AF)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS304	(*(volatile uint_io8_t*)0xB11066B0)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS305	(*(volatile uint_io8_t*)0xB11066B1)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS306	(*(volatile uint_io8_t*)0xB11066B2)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS307	(*(volatile uint_io8_t*)0xB11066B3)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS308	(*(volatile uint_io8_t*)0xB11066B4)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS309	(*(volatile uint_io8_t*)0xB11066B5)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS310	(*(volatile uint_io8_t*)0xB11066B6)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS311	(*(volatile uint_io8_t*)0xB11066B7)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS312	(*(volatile uint_io8_t*)0xB11066B8)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS313	(*(volatile uint_io8_t*)0xB11066B9)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS314	(*(volatile uint_io8_t*)0xB11066BA)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS315	(*(volatile uint_io8_t*)0xB11066BB)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS316	(*(volatile uint_io8_t*)0xB11066BC)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS317	(*(volatile uint_io8_t*)0xB11066BD)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS318	(*(volatile uint_io8_t*)0xB11066BE)  /*@bfbba@*/
#define IRC0_IRQRS9_IRQRS319	(*(volatile uint_io8_t*)0xB11066BF)  /*@bfbba@*/

typedef struct stc_irc0_irqrs9_field{
    uint_io32_t		u1IRQRS288:1;
    uint_io32_t		u1IRQRS289:1;
    uint_io32_t		u1IRQRS290:1;
    uint_io32_t		u1IRQRS291:1;
    uint_io32_t		u1IRQRS292:1;
    uint_io32_t		u1IRQRS293:1;
    uint_io32_t		u1IRQRS294:1;
    uint_io32_t		u1IRQRS295:1;
    uint_io32_t		u1IRQRS296:1;
    uint_io32_t		u1IRQRS297:1;
    uint_io32_t		u1IRQRS298:1;
    uint_io32_t		u1IRQRS299:1;
    uint_io32_t		u1IRQRS300:1;
    uint_io32_t		u1IRQRS301:1;
    uint_io32_t		u1IRQRS302:1;
    uint_io32_t		u1IRQRS303:1;
    uint_io32_t		u1IRQRS304:1;
    uint_io32_t		u1IRQRS305:1;
    uint_io32_t		u1IRQRS306:1;
    uint_io32_t		u1IRQRS307:1;
    uint_io32_t		u1IRQRS308:1;
    uint_io32_t		u1IRQRS309:1;
    uint_io32_t		u1IRQRS310:1;
    uint_io32_t		u1IRQRS311:1;
    uint_io32_t		u1IRQRS312:1;
    uint_io32_t		u1IRQRS313:1;
    uint_io32_t		u1IRQRS314:1;
    uint_io32_t		u1IRQRS315:1;
    uint_io32_t		u1IRQRS316:1;
    uint_io32_t		u1IRQRS317:1;
    uint_io32_t		u1IRQRS318:1;
    uint_io32_t		u1IRQRS319:1;
}stc_irc0_irqrs9_field_t;

typedef union un_irc0_irqrs9{
    uint_io32_t		u32Register;
    stc_irc0_irqrs9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs9_t;

/* IRQRS10 */
#define IRC0_IRQRS10	(IRC0.unIRQRS10.u32Register)  /*@rg@*/
#define IRC0_IRQRS10_IRQRS320	(*(volatile uint_io8_t*)0xB11066C0)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS321	(*(volatile uint_io8_t*)0xB11066C1)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS322	(*(volatile uint_io8_t*)0xB11066C2)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS323	(*(volatile uint_io8_t*)0xB11066C3)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS324	(*(volatile uint_io8_t*)0xB11066C4)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS325	(*(volatile uint_io8_t*)0xB11066C5)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS326	(*(volatile uint_io8_t*)0xB11066C6)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS327	(*(volatile uint_io8_t*)0xB11066C7)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS328	(*(volatile uint_io8_t*)0xB11066C8)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS329	(*(volatile uint_io8_t*)0xB11066C9)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS330	(*(volatile uint_io8_t*)0xB11066CA)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS331	(*(volatile uint_io8_t*)0xB11066CB)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS332	(*(volatile uint_io8_t*)0xB11066CC)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS333	(*(volatile uint_io8_t*)0xB11066CD)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS334	(*(volatile uint_io8_t*)0xB11066CE)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS335	(*(volatile uint_io8_t*)0xB11066CF)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS336	(*(volatile uint_io8_t*)0xB11066D0)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS337	(*(volatile uint_io8_t*)0xB11066D1)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS338	(*(volatile uint_io8_t*)0xB11066D2)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS339	(*(volatile uint_io8_t*)0xB11066D3)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS340	(*(volatile uint_io8_t*)0xB11066D4)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS341	(*(volatile uint_io8_t*)0xB11066D5)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS342	(*(volatile uint_io8_t*)0xB11066D6)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS343	(*(volatile uint_io8_t*)0xB11066D7)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS344	(*(volatile uint_io8_t*)0xB11066D8)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS345	(*(volatile uint_io8_t*)0xB11066D9)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS346	(*(volatile uint_io8_t*)0xB11066DA)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS347	(*(volatile uint_io8_t*)0xB11066DB)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS348	(*(volatile uint_io8_t*)0xB11066DC)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS349	(*(volatile uint_io8_t*)0xB11066DD)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS350	(*(volatile uint_io8_t*)0xB11066DE)  /*@bfbba@*/
#define IRC0_IRQRS10_IRQRS351	(*(volatile uint_io8_t*)0xB11066DF)  /*@bfbba@*/

typedef struct stc_irc0_irqrs10_field{
    uint_io32_t		u1IRQRS320:1;
    uint_io32_t		u1IRQRS321:1;
    uint_io32_t		u1IRQRS322:1;
    uint_io32_t		u1IRQRS323:1;
    uint_io32_t		u1IRQRS324:1;
    uint_io32_t		u1IRQRS325:1;
    uint_io32_t		u1IRQRS326:1;
    uint_io32_t		u1IRQRS327:1;
    uint_io32_t		u1IRQRS328:1;
    uint_io32_t		u1IRQRS329:1;
    uint_io32_t		u1IRQRS330:1;
    uint_io32_t		u1IRQRS331:1;
    uint_io32_t		u1IRQRS332:1;
    uint_io32_t		u1IRQRS333:1;
    uint_io32_t		u1IRQRS334:1;
    uint_io32_t		u1IRQRS335:1;
    uint_io32_t		u1IRQRS336:1;
    uint_io32_t		u1IRQRS337:1;
    uint_io32_t		u1IRQRS338:1;
    uint_io32_t		u1IRQRS339:1;
    uint_io32_t		u1IRQRS340:1;
    uint_io32_t		u1IRQRS341:1;
    uint_io32_t		u1IRQRS342:1;
    uint_io32_t		u1IRQRS343:1;
    uint_io32_t		u1IRQRS344:1;
    uint_io32_t		u1IRQRS345:1;
    uint_io32_t		u1IRQRS346:1;
    uint_io32_t		u1IRQRS347:1;
    uint_io32_t		u1IRQRS348:1;
    uint_io32_t		u1IRQRS349:1;
    uint_io32_t		u1IRQRS350:1;
    uint_io32_t		u1IRQRS351:1;
}stc_irc0_irqrs10_field_t;

typedef union un_irc0_irqrs10{
    uint_io32_t		u32Register;
    stc_irc0_irqrs10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs10_t;

/* IRQRS11 */
#define IRC0_IRQRS11	(IRC0.unIRQRS11.u32Register)  /*@rg@*/
#define IRC0_IRQRS11_IRQRS352	(*(volatile uint_io8_t*)0xB11066E0)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS353	(*(volatile uint_io8_t*)0xB11066E1)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS354	(*(volatile uint_io8_t*)0xB11066E2)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS355	(*(volatile uint_io8_t*)0xB11066E3)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS356	(*(volatile uint_io8_t*)0xB11066E4)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS357	(*(volatile uint_io8_t*)0xB11066E5)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS358	(*(volatile uint_io8_t*)0xB11066E6)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS359	(*(volatile uint_io8_t*)0xB11066E7)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS360	(*(volatile uint_io8_t*)0xB11066E8)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS361	(*(volatile uint_io8_t*)0xB11066E9)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS362	(*(volatile uint_io8_t*)0xB11066EA)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS363	(*(volatile uint_io8_t*)0xB11066EB)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS364	(*(volatile uint_io8_t*)0xB11066EC)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS365	(*(volatile uint_io8_t*)0xB11066ED)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS366	(*(volatile uint_io8_t*)0xB11066EE)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS367	(*(volatile uint_io8_t*)0xB11066EF)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS368	(*(volatile uint_io8_t*)0xB11066F0)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS369	(*(volatile uint_io8_t*)0xB11066F1)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS370	(*(volatile uint_io8_t*)0xB11066F2)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS371	(*(volatile uint_io8_t*)0xB11066F3)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS372	(*(volatile uint_io8_t*)0xB11066F4)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS373	(*(volatile uint_io8_t*)0xB11066F5)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS374	(*(volatile uint_io8_t*)0xB11066F6)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS375	(*(volatile uint_io8_t*)0xB11066F7)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS376	(*(volatile uint_io8_t*)0xB11066F8)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS377	(*(volatile uint_io8_t*)0xB11066F9)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS378	(*(volatile uint_io8_t*)0xB11066FA)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS379	(*(volatile uint_io8_t*)0xB11066FB)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS380	(*(volatile uint_io8_t*)0xB11066FC)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS381	(*(volatile uint_io8_t*)0xB11066FD)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS382	(*(volatile uint_io8_t*)0xB11066FE)  /*@bfbba@*/
#define IRC0_IRQRS11_IRQRS383	(*(volatile uint_io8_t*)0xB11066FF)  /*@bfbba@*/

typedef struct stc_irc0_irqrs11_field{
    uint_io32_t		u1IRQRS352:1;
    uint_io32_t		u1IRQRS353:1;
    uint_io32_t		u1IRQRS354:1;
    uint_io32_t		u1IRQRS355:1;
    uint_io32_t		u1IRQRS356:1;
    uint_io32_t		u1IRQRS357:1;
    uint_io32_t		u1IRQRS358:1;
    uint_io32_t		u1IRQRS359:1;
    uint_io32_t		u1IRQRS360:1;
    uint_io32_t		u1IRQRS361:1;
    uint_io32_t		u1IRQRS362:1;
    uint_io32_t		u1IRQRS363:1;
    uint_io32_t		u1IRQRS364:1;
    uint_io32_t		u1IRQRS365:1;
    uint_io32_t		u1IRQRS366:1;
    uint_io32_t		u1IRQRS367:1;
    uint_io32_t		u1IRQRS368:1;
    uint_io32_t		u1IRQRS369:1;
    uint_io32_t		u1IRQRS370:1;
    uint_io32_t		u1IRQRS371:1;
    uint_io32_t		u1IRQRS372:1;
    uint_io32_t		u1IRQRS373:1;
    uint_io32_t		u1IRQRS374:1;
    uint_io32_t		u1IRQRS375:1;
    uint_io32_t		u1IRQRS376:1;
    uint_io32_t		u1IRQRS377:1;
    uint_io32_t		u1IRQRS378:1;
    uint_io32_t		u1IRQRS379:1;
    uint_io32_t		u1IRQRS380:1;
    uint_io32_t		u1IRQRS381:1;
    uint_io32_t		u1IRQRS382:1;
    uint_io32_t		u1IRQRS383:1;
}stc_irc0_irqrs11_field_t;

typedef union un_irc0_irqrs11{
    uint_io32_t		u32Register;
    stc_irc0_irqrs11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs11_t;

/* IRQRS12 */
#define IRC0_IRQRS12	(IRC0.unIRQRS12.u32Register)  /*@rg@*/
#define IRC0_IRQRS12_IRQRS384	(*(volatile uint_io8_t*)0xB1106700)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS385	(*(volatile uint_io8_t*)0xB1106701)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS386	(*(volatile uint_io8_t*)0xB1106702)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS387	(*(volatile uint_io8_t*)0xB1106703)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS388	(*(volatile uint_io8_t*)0xB1106704)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS389	(*(volatile uint_io8_t*)0xB1106705)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS390	(*(volatile uint_io8_t*)0xB1106706)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS391	(*(volatile uint_io8_t*)0xB1106707)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS392	(*(volatile uint_io8_t*)0xB1106708)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS393	(*(volatile uint_io8_t*)0xB1106709)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS394	(*(volatile uint_io8_t*)0xB110670A)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS395	(*(volatile uint_io8_t*)0xB110670B)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS396	(*(volatile uint_io8_t*)0xB110670C)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS397	(*(volatile uint_io8_t*)0xB110670D)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS398	(*(volatile uint_io8_t*)0xB110670E)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS399	(*(volatile uint_io8_t*)0xB110670F)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS400	(*(volatile uint_io8_t*)0xB1106710)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS401	(*(volatile uint_io8_t*)0xB1106711)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS402	(*(volatile uint_io8_t*)0xB1106712)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS403	(*(volatile uint_io8_t*)0xB1106713)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS404	(*(volatile uint_io8_t*)0xB1106714)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS405	(*(volatile uint_io8_t*)0xB1106715)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS406	(*(volatile uint_io8_t*)0xB1106716)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS407	(*(volatile uint_io8_t*)0xB1106717)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS408	(*(volatile uint_io8_t*)0xB1106718)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS409	(*(volatile uint_io8_t*)0xB1106719)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS410	(*(volatile uint_io8_t*)0xB110671A)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS411	(*(volatile uint_io8_t*)0xB110671B)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS412	(*(volatile uint_io8_t*)0xB110671C)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS413	(*(volatile uint_io8_t*)0xB110671D)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS414	(*(volatile uint_io8_t*)0xB110671E)  /*@bfbba@*/
#define IRC0_IRQRS12_IRQRS415	(*(volatile uint_io8_t*)0xB110671F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs12_field{
    uint_io32_t		u1IRQRS384:1;
    uint_io32_t		u1IRQRS385:1;
    uint_io32_t		u1IRQRS386:1;
    uint_io32_t		u1IRQRS387:1;
    uint_io32_t		u1IRQRS388:1;
    uint_io32_t		u1IRQRS389:1;
    uint_io32_t		u1IRQRS390:1;
    uint_io32_t		u1IRQRS391:1;
    uint_io32_t		u1IRQRS392:1;
    uint_io32_t		u1IRQRS393:1;
    uint_io32_t		u1IRQRS394:1;
    uint_io32_t		u1IRQRS395:1;
    uint_io32_t		u1IRQRS396:1;
    uint_io32_t		u1IRQRS397:1;
    uint_io32_t		u1IRQRS398:1;
    uint_io32_t		u1IRQRS399:1;
    uint_io32_t		u1IRQRS400:1;
    uint_io32_t		u1IRQRS401:1;
    uint_io32_t		u1IRQRS402:1;
    uint_io32_t		u1IRQRS403:1;
    uint_io32_t		u1IRQRS404:1;
    uint_io32_t		u1IRQRS405:1;
    uint_io32_t		u1IRQRS406:1;
    uint_io32_t		u1IRQRS407:1;
    uint_io32_t		u1IRQRS408:1;
    uint_io32_t		u1IRQRS409:1;
    uint_io32_t		u1IRQRS410:1;
    uint_io32_t		u1IRQRS411:1;
    uint_io32_t		u1IRQRS412:1;
    uint_io32_t		u1IRQRS413:1;
    uint_io32_t		u1IRQRS414:1;
    uint_io32_t		u1IRQRS415:1;
}stc_irc0_irqrs12_field_t;

typedef union un_irc0_irqrs12{
    uint_io32_t		u32Register;
    stc_irc0_irqrs12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs12_t;

/* IRQRS13 */
#define IRC0_IRQRS13	(IRC0.unIRQRS13.u32Register)  /*@rg@*/
#define IRC0_IRQRS13_IRQRS416	(*(volatile uint_io8_t*)0xB1106720)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS417	(*(volatile uint_io8_t*)0xB1106721)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS418	(*(volatile uint_io8_t*)0xB1106722)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS419	(*(volatile uint_io8_t*)0xB1106723)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS420	(*(volatile uint_io8_t*)0xB1106724)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS421	(*(volatile uint_io8_t*)0xB1106725)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS422	(*(volatile uint_io8_t*)0xB1106726)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS423	(*(volatile uint_io8_t*)0xB1106727)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS424	(*(volatile uint_io8_t*)0xB1106728)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS425	(*(volatile uint_io8_t*)0xB1106729)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS426	(*(volatile uint_io8_t*)0xB110672A)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS427	(*(volatile uint_io8_t*)0xB110672B)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS428	(*(volatile uint_io8_t*)0xB110672C)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS429	(*(volatile uint_io8_t*)0xB110672D)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS430	(*(volatile uint_io8_t*)0xB110672E)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS431	(*(volatile uint_io8_t*)0xB110672F)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS432	(*(volatile uint_io8_t*)0xB1106730)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS433	(*(volatile uint_io8_t*)0xB1106731)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS434	(*(volatile uint_io8_t*)0xB1106732)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS435	(*(volatile uint_io8_t*)0xB1106733)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS436	(*(volatile uint_io8_t*)0xB1106734)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS437	(*(volatile uint_io8_t*)0xB1106735)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS438	(*(volatile uint_io8_t*)0xB1106736)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS439	(*(volatile uint_io8_t*)0xB1106737)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS440	(*(volatile uint_io8_t*)0xB1106738)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS441	(*(volatile uint_io8_t*)0xB1106739)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS442	(*(volatile uint_io8_t*)0xB110673A)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS443	(*(volatile uint_io8_t*)0xB110673B)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS444	(*(volatile uint_io8_t*)0xB110673C)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS445	(*(volatile uint_io8_t*)0xB110673D)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS446	(*(volatile uint_io8_t*)0xB110673E)  /*@bfbba@*/
#define IRC0_IRQRS13_IRQRS447	(*(volatile uint_io8_t*)0xB110673F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs13_field{
    uint_io32_t		u1IRQRS416:1;
    uint_io32_t		u1IRQRS417:1;
    uint_io32_t		u1IRQRS418:1;
    uint_io32_t		u1IRQRS419:1;
    uint_io32_t		u1IRQRS420:1;
    uint_io32_t		u1IRQRS421:1;
    uint_io32_t		u1IRQRS422:1;
    uint_io32_t		u1IRQRS423:1;
    uint_io32_t		u1IRQRS424:1;
    uint_io32_t		u1IRQRS425:1;
    uint_io32_t		u1IRQRS426:1;
    uint_io32_t		u1IRQRS427:1;
    uint_io32_t		u1IRQRS428:1;
    uint_io32_t		u1IRQRS429:1;
    uint_io32_t		u1IRQRS430:1;
    uint_io32_t		u1IRQRS431:1;
    uint_io32_t		u1IRQRS432:1;
    uint_io32_t		u1IRQRS433:1;
    uint_io32_t		u1IRQRS434:1;
    uint_io32_t		u1IRQRS435:1;
    uint_io32_t		u1IRQRS436:1;
    uint_io32_t		u1IRQRS437:1;
    uint_io32_t		u1IRQRS438:1;
    uint_io32_t		u1IRQRS439:1;
    uint_io32_t		u1IRQRS440:1;
    uint_io32_t		u1IRQRS441:1;
    uint_io32_t		u1IRQRS442:1;
    uint_io32_t		u1IRQRS443:1;
    uint_io32_t		u1IRQRS444:1;
    uint_io32_t		u1IRQRS445:1;
    uint_io32_t		u1IRQRS446:1;
    uint_io32_t		u1IRQRS447:1;
}stc_irc0_irqrs13_field_t;

typedef union un_irc0_irqrs13{
    uint_io32_t		u32Register;
    stc_irc0_irqrs13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs13_t;

/* IRQRS14 */
#define IRC0_IRQRS14	(IRC0.unIRQRS14.u32Register)  /*@rg@*/
#define IRC0_IRQRS14_IRQRS448	(*(volatile uint_io8_t*)0xB1106740)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS449	(*(volatile uint_io8_t*)0xB1106741)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS450	(*(volatile uint_io8_t*)0xB1106742)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS451	(*(volatile uint_io8_t*)0xB1106743)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS452	(*(volatile uint_io8_t*)0xB1106744)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS453	(*(volatile uint_io8_t*)0xB1106745)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS454	(*(volatile uint_io8_t*)0xB1106746)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS455	(*(volatile uint_io8_t*)0xB1106747)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS456	(*(volatile uint_io8_t*)0xB1106748)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS457	(*(volatile uint_io8_t*)0xB1106749)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS458	(*(volatile uint_io8_t*)0xB110674A)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS459	(*(volatile uint_io8_t*)0xB110674B)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS460	(*(volatile uint_io8_t*)0xB110674C)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS461	(*(volatile uint_io8_t*)0xB110674D)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS462	(*(volatile uint_io8_t*)0xB110674E)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS463	(*(volatile uint_io8_t*)0xB110674F)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS464	(*(volatile uint_io8_t*)0xB1106750)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS465	(*(volatile uint_io8_t*)0xB1106751)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS466	(*(volatile uint_io8_t*)0xB1106752)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS467	(*(volatile uint_io8_t*)0xB1106753)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS468	(*(volatile uint_io8_t*)0xB1106754)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS469	(*(volatile uint_io8_t*)0xB1106755)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS470	(*(volatile uint_io8_t*)0xB1106756)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS471	(*(volatile uint_io8_t*)0xB1106757)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS472	(*(volatile uint_io8_t*)0xB1106758)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS473	(*(volatile uint_io8_t*)0xB1106759)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS474	(*(volatile uint_io8_t*)0xB110675A)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS475	(*(volatile uint_io8_t*)0xB110675B)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS476	(*(volatile uint_io8_t*)0xB110675C)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS477	(*(volatile uint_io8_t*)0xB110675D)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS478	(*(volatile uint_io8_t*)0xB110675E)  /*@bfbba@*/
#define IRC0_IRQRS14_IRQRS479	(*(volatile uint_io8_t*)0xB110675F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs14_field{
    uint_io32_t		u1IRQRS448:1;
    uint_io32_t		u1IRQRS449:1;
    uint_io32_t		u1IRQRS450:1;
    uint_io32_t		u1IRQRS451:1;
    uint_io32_t		u1IRQRS452:1;
    uint_io32_t		u1IRQRS453:1;
    uint_io32_t		u1IRQRS454:1;
    uint_io32_t		u1IRQRS455:1;
    uint_io32_t		u1IRQRS456:1;
    uint_io32_t		u1IRQRS457:1;
    uint_io32_t		u1IRQRS458:1;
    uint_io32_t		u1IRQRS459:1;
    uint_io32_t		u1IRQRS460:1;
    uint_io32_t		u1IRQRS461:1;
    uint_io32_t		u1IRQRS462:1;
    uint_io32_t		u1IRQRS463:1;
    uint_io32_t		u1IRQRS464:1;
    uint_io32_t		u1IRQRS465:1;
    uint_io32_t		u1IRQRS466:1;
    uint_io32_t		u1IRQRS467:1;
    uint_io32_t		u1IRQRS468:1;
    uint_io32_t		u1IRQRS469:1;
    uint_io32_t		u1IRQRS470:1;
    uint_io32_t		u1IRQRS471:1;
    uint_io32_t		u1IRQRS472:1;
    uint_io32_t		u1IRQRS473:1;
    uint_io32_t		u1IRQRS474:1;
    uint_io32_t		u1IRQRS475:1;
    uint_io32_t		u1IRQRS476:1;
    uint_io32_t		u1IRQRS477:1;
    uint_io32_t		u1IRQRS478:1;
    uint_io32_t		u1IRQRS479:1;
}stc_irc0_irqrs14_field_t;

typedef union un_irc0_irqrs14{
    uint_io32_t		u32Register;
    stc_irc0_irqrs14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs14_t;

/* IRQRS15 */
#define IRC0_IRQRS15	(IRC0.unIRQRS15.u32Register)  /*@rg@*/
#define IRC0_IRQRS15_IRQRS480	(*(volatile uint_io8_t*)0xB1106760)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS481	(*(volatile uint_io8_t*)0xB1106761)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS482	(*(volatile uint_io8_t*)0xB1106762)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS483	(*(volatile uint_io8_t*)0xB1106763)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS484	(*(volatile uint_io8_t*)0xB1106764)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS485	(*(volatile uint_io8_t*)0xB1106765)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS486	(*(volatile uint_io8_t*)0xB1106766)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS487	(*(volatile uint_io8_t*)0xB1106767)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS488	(*(volatile uint_io8_t*)0xB1106768)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS489	(*(volatile uint_io8_t*)0xB1106769)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS490	(*(volatile uint_io8_t*)0xB110676A)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS491	(*(volatile uint_io8_t*)0xB110676B)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS492	(*(volatile uint_io8_t*)0xB110676C)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS493	(*(volatile uint_io8_t*)0xB110676D)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS494	(*(volatile uint_io8_t*)0xB110676E)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS495	(*(volatile uint_io8_t*)0xB110676F)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS496	(*(volatile uint_io8_t*)0xB1106770)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS497	(*(volatile uint_io8_t*)0xB1106771)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS498	(*(volatile uint_io8_t*)0xB1106772)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS499	(*(volatile uint_io8_t*)0xB1106773)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS500	(*(volatile uint_io8_t*)0xB1106774)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS501	(*(volatile uint_io8_t*)0xB1106775)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS502	(*(volatile uint_io8_t*)0xB1106776)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS503	(*(volatile uint_io8_t*)0xB1106777)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS504	(*(volatile uint_io8_t*)0xB1106778)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS505	(*(volatile uint_io8_t*)0xB1106779)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS506	(*(volatile uint_io8_t*)0xB110677A)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS507	(*(volatile uint_io8_t*)0xB110677B)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS508	(*(volatile uint_io8_t*)0xB110677C)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS509	(*(volatile uint_io8_t*)0xB110677D)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS510	(*(volatile uint_io8_t*)0xB110677E)  /*@bfbba@*/
#define IRC0_IRQRS15_IRQRS511	(*(volatile uint_io8_t*)0xB110677F)  /*@bfbba@*/

typedef struct stc_irc0_irqrs15_field{
    uint_io32_t		u1IRQRS480:1;
    uint_io32_t		u1IRQRS481:1;
    uint_io32_t		u1IRQRS482:1;
    uint_io32_t		u1IRQRS483:1;
    uint_io32_t		u1IRQRS484:1;
    uint_io32_t		u1IRQRS485:1;
    uint_io32_t		u1IRQRS486:1;
    uint_io32_t		u1IRQRS487:1;
    uint_io32_t		u1IRQRS488:1;
    uint_io32_t		u1IRQRS489:1;
    uint_io32_t		u1IRQRS490:1;
    uint_io32_t		u1IRQRS491:1;
    uint_io32_t		u1IRQRS492:1;
    uint_io32_t		u1IRQRS493:1;
    uint_io32_t		u1IRQRS494:1;
    uint_io32_t		u1IRQRS495:1;
    uint_io32_t		u1IRQRS496:1;
    uint_io32_t		u1IRQRS497:1;
    uint_io32_t		u1IRQRS498:1;
    uint_io32_t		u1IRQRS499:1;
    uint_io32_t		u1IRQRS500:1;
    uint_io32_t		u1IRQRS501:1;
    uint_io32_t		u1IRQRS502:1;
    uint_io32_t		u1IRQRS503:1;
    uint_io32_t		u1IRQRS504:1;
    uint_io32_t		u1IRQRS505:1;
    uint_io32_t		u1IRQRS506:1;
    uint_io32_t		u1IRQRS507:1;
    uint_io32_t		u1IRQRS508:1;
    uint_io32_t		u1IRQRS509:1;
    uint_io32_t		u1IRQRS510:1;
    uint_io32_t		u1IRQRS511:1;
}stc_irc0_irqrs15_field_t;

typedef union un_irc0_irqrs15{
    uint_io32_t		u32Register;
    stc_irc0_irqrs15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqrs15_t;

/* IRQPS0 */
#define IRC0_IRQPS0	(IRC0.unIRQPS0.u32Register)  /*@rg@*/
#define IRC0_IRQPS0_IRQPS0	(*(volatile uint_io8_t*)0xB1106780)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS1	(*(volatile uint_io8_t*)0xB1106781)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS2	(*(volatile uint_io8_t*)0xB1106782)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS3	(*(volatile uint_io8_t*)0xB1106783)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS4	(*(volatile uint_io8_t*)0xB1106784)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS5	(*(volatile uint_io8_t*)0xB1106785)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS6	(*(volatile uint_io8_t*)0xB1106786)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS7	(*(volatile uint_io8_t*)0xB1106787)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS8	(*(volatile uint_io8_t*)0xB1106788)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS9	(*(volatile uint_io8_t*)0xB1106789)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS10	(*(volatile uint_io8_t*)0xB110678A)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS11	(*(volatile uint_io8_t*)0xB110678B)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS12	(*(volatile uint_io8_t*)0xB110678C)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS13	(*(volatile uint_io8_t*)0xB110678D)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS14	(*(volatile uint_io8_t*)0xB110678E)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS15	(*(volatile uint_io8_t*)0xB110678F)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS16	(*(volatile uint_io8_t*)0xB1106790)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS17	(*(volatile uint_io8_t*)0xB1106791)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS18	(*(volatile uint_io8_t*)0xB1106792)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS19	(*(volatile uint_io8_t*)0xB1106793)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS20	(*(volatile uint_io8_t*)0xB1106794)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS21	(*(volatile uint_io8_t*)0xB1106795)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS22	(*(volatile uint_io8_t*)0xB1106796)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS23	(*(volatile uint_io8_t*)0xB1106797)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS24	(*(volatile uint_io8_t*)0xB1106798)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS25	(*(volatile uint_io8_t*)0xB1106799)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS26	(*(volatile uint_io8_t*)0xB110679A)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS27	(*(volatile uint_io8_t*)0xB110679B)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS28	(*(volatile uint_io8_t*)0xB110679C)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS29	(*(volatile uint_io8_t*)0xB110679D)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS30	(*(volatile uint_io8_t*)0xB110679E)  /*@bfbba@*/
#define IRC0_IRQPS0_IRQPS31	(*(volatile uint_io8_t*)0xB110679F)  /*@bfbba@*/

typedef struct stc_irc0_irqps0_field{
    uint_io32_t		u1IRQPS0:1;
    uint_io32_t		u1IRQPS1:1;
    uint_io32_t		u1IRQPS2:1;
    uint_io32_t		u1IRQPS3:1;
    uint_io32_t		u1IRQPS4:1;
    uint_io32_t		u1IRQPS5:1;
    uint_io32_t		u1IRQPS6:1;
    uint_io32_t		u1IRQPS7:1;
    uint_io32_t		u1IRQPS8:1;
    uint_io32_t		u1IRQPS9:1;
    uint_io32_t		u1IRQPS10:1;
    uint_io32_t		u1IRQPS11:1;
    uint_io32_t		u1IRQPS12:1;
    uint_io32_t		u1IRQPS13:1;
    uint_io32_t		u1IRQPS14:1;
    uint_io32_t		u1IRQPS15:1;
    uint_io32_t		u1IRQPS16:1;
    uint_io32_t		u1IRQPS17:1;
    uint_io32_t		u1IRQPS18:1;
    uint_io32_t		u1IRQPS19:1;
    uint_io32_t		u1IRQPS20:1;
    uint_io32_t		u1IRQPS21:1;
    uint_io32_t		u1IRQPS22:1;
    uint_io32_t		u1IRQPS23:1;
    uint_io32_t		u1IRQPS24:1;
    uint_io32_t		u1IRQPS25:1;
    uint_io32_t		u1IRQPS26:1;
    uint_io32_t		u1IRQPS27:1;
    uint_io32_t		u1IRQPS28:1;
    uint_io32_t		u1IRQPS29:1;
    uint_io32_t		u1IRQPS30:1;
    uint_io32_t		u1IRQPS31:1;
}stc_irc0_irqps0_field_t;

typedef union un_irc0_irqps0{
    uint_io32_t		u32Register;
    stc_irc0_irqps0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps0_t;

/* IRQPS1 */
#define IRC0_IRQPS1	(IRC0.unIRQPS1.u32Register)  /*@rg@*/
#define IRC0_IRQPS1_IRQPS32	(*(volatile uint_io8_t*)0xB11067A0)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS33	(*(volatile uint_io8_t*)0xB11067A1)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS34	(*(volatile uint_io8_t*)0xB11067A2)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS35	(*(volatile uint_io8_t*)0xB11067A3)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS36	(*(volatile uint_io8_t*)0xB11067A4)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS37	(*(volatile uint_io8_t*)0xB11067A5)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS38	(*(volatile uint_io8_t*)0xB11067A6)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS39	(*(volatile uint_io8_t*)0xB11067A7)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS40	(*(volatile uint_io8_t*)0xB11067A8)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS41	(*(volatile uint_io8_t*)0xB11067A9)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS42	(*(volatile uint_io8_t*)0xB11067AA)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS43	(*(volatile uint_io8_t*)0xB11067AB)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS44	(*(volatile uint_io8_t*)0xB11067AC)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS45	(*(volatile uint_io8_t*)0xB11067AD)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS46	(*(volatile uint_io8_t*)0xB11067AE)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS47	(*(volatile uint_io8_t*)0xB11067AF)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS48	(*(volatile uint_io8_t*)0xB11067B0)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS49	(*(volatile uint_io8_t*)0xB11067B1)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS50	(*(volatile uint_io8_t*)0xB11067B2)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS51	(*(volatile uint_io8_t*)0xB11067B3)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS52	(*(volatile uint_io8_t*)0xB11067B4)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS53	(*(volatile uint_io8_t*)0xB11067B5)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS54	(*(volatile uint_io8_t*)0xB11067B6)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS55	(*(volatile uint_io8_t*)0xB11067B7)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS56	(*(volatile uint_io8_t*)0xB11067B8)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS57	(*(volatile uint_io8_t*)0xB11067B9)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS58	(*(volatile uint_io8_t*)0xB11067BA)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS59	(*(volatile uint_io8_t*)0xB11067BB)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS60	(*(volatile uint_io8_t*)0xB11067BC)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS61	(*(volatile uint_io8_t*)0xB11067BD)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS62	(*(volatile uint_io8_t*)0xB11067BE)  /*@bfbba@*/
#define IRC0_IRQPS1_IRQPS63	(*(volatile uint_io8_t*)0xB11067BF)  /*@bfbba@*/

typedef struct stc_irc0_irqps1_field{
    uint_io32_t		u1IRQPS32:1;
    uint_io32_t		u1IRQPS33:1;
    uint_io32_t		u1IRQPS34:1;
    uint_io32_t		u1IRQPS35:1;
    uint_io32_t		u1IRQPS36:1;
    uint_io32_t		u1IRQPS37:1;
    uint_io32_t		u1IRQPS38:1;
    uint_io32_t		u1IRQPS39:1;
    uint_io32_t		u1IRQPS40:1;
    uint_io32_t		u1IRQPS41:1;
    uint_io32_t		u1IRQPS42:1;
    uint_io32_t		u1IRQPS43:1;
    uint_io32_t		u1IRQPS44:1;
    uint_io32_t		u1IRQPS45:1;
    uint_io32_t		u1IRQPS46:1;
    uint_io32_t		u1IRQPS47:1;
    uint_io32_t		u1IRQPS48:1;
    uint_io32_t		u1IRQPS49:1;
    uint_io32_t		u1IRQPS50:1;
    uint_io32_t		u1IRQPS51:1;
    uint_io32_t		u1IRQPS52:1;
    uint_io32_t		u1IRQPS53:1;
    uint_io32_t		u1IRQPS54:1;
    uint_io32_t		u1IRQPS55:1;
    uint_io32_t		u1IRQPS56:1;
    uint_io32_t		u1IRQPS57:1;
    uint_io32_t		u1IRQPS58:1;
    uint_io32_t		u1IRQPS59:1;
    uint_io32_t		u1IRQPS60:1;
    uint_io32_t		u1IRQPS61:1;
    uint_io32_t		u1IRQPS62:1;
    uint_io32_t		u1IRQPS63:1;
}stc_irc0_irqps1_field_t;

typedef union un_irc0_irqps1{
    uint_io32_t		u32Register;
    stc_irc0_irqps1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps1_t;

/* IRQPS2 */
#define IRC0_IRQPS2	(IRC0.unIRQPS2.u32Register)  /*@rg@*/
#define IRC0_IRQPS2_IRQPS64	(*(volatile uint_io8_t*)0xB11067C0)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS65	(*(volatile uint_io8_t*)0xB11067C1)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS66	(*(volatile uint_io8_t*)0xB11067C2)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS67	(*(volatile uint_io8_t*)0xB11067C3)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS68	(*(volatile uint_io8_t*)0xB11067C4)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS69	(*(volatile uint_io8_t*)0xB11067C5)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS70	(*(volatile uint_io8_t*)0xB11067C6)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS71	(*(volatile uint_io8_t*)0xB11067C7)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS72	(*(volatile uint_io8_t*)0xB11067C8)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS73	(*(volatile uint_io8_t*)0xB11067C9)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS74	(*(volatile uint_io8_t*)0xB11067CA)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS75	(*(volatile uint_io8_t*)0xB11067CB)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS76	(*(volatile uint_io8_t*)0xB11067CC)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS77	(*(volatile uint_io8_t*)0xB11067CD)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS78	(*(volatile uint_io8_t*)0xB11067CE)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS79	(*(volatile uint_io8_t*)0xB11067CF)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS80	(*(volatile uint_io8_t*)0xB11067D0)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS81	(*(volatile uint_io8_t*)0xB11067D1)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS82	(*(volatile uint_io8_t*)0xB11067D2)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS83	(*(volatile uint_io8_t*)0xB11067D3)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS84	(*(volatile uint_io8_t*)0xB11067D4)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS85	(*(volatile uint_io8_t*)0xB11067D5)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS86	(*(volatile uint_io8_t*)0xB11067D6)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS87	(*(volatile uint_io8_t*)0xB11067D7)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS88	(*(volatile uint_io8_t*)0xB11067D8)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS89	(*(volatile uint_io8_t*)0xB11067D9)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS90	(*(volatile uint_io8_t*)0xB11067DA)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS91	(*(volatile uint_io8_t*)0xB11067DB)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS92	(*(volatile uint_io8_t*)0xB11067DC)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS93	(*(volatile uint_io8_t*)0xB11067DD)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS94	(*(volatile uint_io8_t*)0xB11067DE)  /*@bfbba@*/
#define IRC0_IRQPS2_IRQPS95	(*(volatile uint_io8_t*)0xB11067DF)  /*@bfbba@*/

typedef struct stc_irc0_irqps2_field{
    uint_io32_t		u1IRQPS64:1;
    uint_io32_t		u1IRQPS65:1;
    uint_io32_t		u1IRQPS66:1;
    uint_io32_t		u1IRQPS67:1;
    uint_io32_t		u1IRQPS68:1;
    uint_io32_t		u1IRQPS69:1;
    uint_io32_t		u1IRQPS70:1;
    uint_io32_t		u1IRQPS71:1;
    uint_io32_t		u1IRQPS72:1;
    uint_io32_t		u1IRQPS73:1;
    uint_io32_t		u1IRQPS74:1;
    uint_io32_t		u1IRQPS75:1;
    uint_io32_t		u1IRQPS76:1;
    uint_io32_t		u1IRQPS77:1;
    uint_io32_t		u1IRQPS78:1;
    uint_io32_t		u1IRQPS79:1;
    uint_io32_t		u1IRQPS80:1;
    uint_io32_t		u1IRQPS81:1;
    uint_io32_t		u1IRQPS82:1;
    uint_io32_t		u1IRQPS83:1;
    uint_io32_t		u1IRQPS84:1;
    uint_io32_t		u1IRQPS85:1;
    uint_io32_t		u1IRQPS86:1;
    uint_io32_t		u1IRQPS87:1;
    uint_io32_t		u1IRQPS88:1;
    uint_io32_t		u1IRQPS89:1;
    uint_io32_t		u1IRQPS90:1;
    uint_io32_t		u1IRQPS91:1;
    uint_io32_t		u1IRQPS92:1;
    uint_io32_t		u1IRQPS93:1;
    uint_io32_t		u1IRQPS94:1;
    uint_io32_t		u1IRQPS95:1;
}stc_irc0_irqps2_field_t;

typedef union un_irc0_irqps2{
    uint_io32_t		u32Register;
    stc_irc0_irqps2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps2_t;

/* IRQPS3 */
#define IRC0_IRQPS3	(IRC0.unIRQPS3.u32Register)  /*@rg@*/
#define IRC0_IRQPS3_IRQPS96	(*(volatile uint_io8_t*)0xB11067E0)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS97	(*(volatile uint_io8_t*)0xB11067E1)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS98	(*(volatile uint_io8_t*)0xB11067E2)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS99	(*(volatile uint_io8_t*)0xB11067E3)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS100	(*(volatile uint_io8_t*)0xB11067E4)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS101	(*(volatile uint_io8_t*)0xB11067E5)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS102	(*(volatile uint_io8_t*)0xB11067E6)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS103	(*(volatile uint_io8_t*)0xB11067E7)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS104	(*(volatile uint_io8_t*)0xB11067E8)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS105	(*(volatile uint_io8_t*)0xB11067E9)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS106	(*(volatile uint_io8_t*)0xB11067EA)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS107	(*(volatile uint_io8_t*)0xB11067EB)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS108	(*(volatile uint_io8_t*)0xB11067EC)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS109	(*(volatile uint_io8_t*)0xB11067ED)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS110	(*(volatile uint_io8_t*)0xB11067EE)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS111	(*(volatile uint_io8_t*)0xB11067EF)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS112	(*(volatile uint_io8_t*)0xB11067F0)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS113	(*(volatile uint_io8_t*)0xB11067F1)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS114	(*(volatile uint_io8_t*)0xB11067F2)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS115	(*(volatile uint_io8_t*)0xB11067F3)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS116	(*(volatile uint_io8_t*)0xB11067F4)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS117	(*(volatile uint_io8_t*)0xB11067F5)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS118	(*(volatile uint_io8_t*)0xB11067F6)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS119	(*(volatile uint_io8_t*)0xB11067F7)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS120	(*(volatile uint_io8_t*)0xB11067F8)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS121	(*(volatile uint_io8_t*)0xB11067F9)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS122	(*(volatile uint_io8_t*)0xB11067FA)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS123	(*(volatile uint_io8_t*)0xB11067FB)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS124	(*(volatile uint_io8_t*)0xB11067FC)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS125	(*(volatile uint_io8_t*)0xB11067FD)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS126	(*(volatile uint_io8_t*)0xB11067FE)  /*@bfbba@*/
#define IRC0_IRQPS3_IRQPS127	(*(volatile uint_io8_t*)0xB11067FF)  /*@bfbba@*/

typedef struct stc_irc0_irqps3_field{
    uint_io32_t		u1IRQPS96:1;
    uint_io32_t		u1IRQPS97:1;
    uint_io32_t		u1IRQPS98:1;
    uint_io32_t		u1IRQPS99:1;
    uint_io32_t		u1IRQPS100:1;
    uint_io32_t		u1IRQPS101:1;
    uint_io32_t		u1IRQPS102:1;
    uint_io32_t		u1IRQPS103:1;
    uint_io32_t		u1IRQPS104:1;
    uint_io32_t		u1IRQPS105:1;
    uint_io32_t		u1IRQPS106:1;
    uint_io32_t		u1IRQPS107:1;
    uint_io32_t		u1IRQPS108:1;
    uint_io32_t		u1IRQPS109:1;
    uint_io32_t		u1IRQPS110:1;
    uint_io32_t		u1IRQPS111:1;
    uint_io32_t		u1IRQPS112:1;
    uint_io32_t		u1IRQPS113:1;
    uint_io32_t		u1IRQPS114:1;
    uint_io32_t		u1IRQPS115:1;
    uint_io32_t		u1IRQPS116:1;
    uint_io32_t		u1IRQPS117:1;
    uint_io32_t		u1IRQPS118:1;
    uint_io32_t		u1IRQPS119:1;
    uint_io32_t		u1IRQPS120:1;
    uint_io32_t		u1IRQPS121:1;
    uint_io32_t		u1IRQPS122:1;
    uint_io32_t		u1IRQPS123:1;
    uint_io32_t		u1IRQPS124:1;
    uint_io32_t		u1IRQPS125:1;
    uint_io32_t		u1IRQPS126:1;
    uint_io32_t		u1IRQPS127:1;
}stc_irc0_irqps3_field_t;

typedef union un_irc0_irqps3{
    uint_io32_t		u32Register;
    stc_irc0_irqps3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps3_t;

/* IRQPS4 */
#define IRC0_IRQPS4	(IRC0.unIRQPS4.u32Register)  /*@rg@*/
#define IRC0_IRQPS4_IRQPS128	(*(volatile uint_io8_t*)0xB1106800)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS129	(*(volatile uint_io8_t*)0xB1106801)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS130	(*(volatile uint_io8_t*)0xB1106802)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS131	(*(volatile uint_io8_t*)0xB1106803)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS132	(*(volatile uint_io8_t*)0xB1106804)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS133	(*(volatile uint_io8_t*)0xB1106805)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS134	(*(volatile uint_io8_t*)0xB1106806)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS135	(*(volatile uint_io8_t*)0xB1106807)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS136	(*(volatile uint_io8_t*)0xB1106808)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS137	(*(volatile uint_io8_t*)0xB1106809)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS138	(*(volatile uint_io8_t*)0xB110680A)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS139	(*(volatile uint_io8_t*)0xB110680B)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS140	(*(volatile uint_io8_t*)0xB110680C)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS141	(*(volatile uint_io8_t*)0xB110680D)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS142	(*(volatile uint_io8_t*)0xB110680E)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS143	(*(volatile uint_io8_t*)0xB110680F)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS144	(*(volatile uint_io8_t*)0xB1106810)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS145	(*(volatile uint_io8_t*)0xB1106811)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS146	(*(volatile uint_io8_t*)0xB1106812)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS147	(*(volatile uint_io8_t*)0xB1106813)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS148	(*(volatile uint_io8_t*)0xB1106814)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS149	(*(volatile uint_io8_t*)0xB1106815)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS150	(*(volatile uint_io8_t*)0xB1106816)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS151	(*(volatile uint_io8_t*)0xB1106817)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS152	(*(volatile uint_io8_t*)0xB1106818)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS153	(*(volatile uint_io8_t*)0xB1106819)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS154	(*(volatile uint_io8_t*)0xB110681A)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS155	(*(volatile uint_io8_t*)0xB110681B)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS156	(*(volatile uint_io8_t*)0xB110681C)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS157	(*(volatile uint_io8_t*)0xB110681D)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS158	(*(volatile uint_io8_t*)0xB110681E)  /*@bfbba@*/
#define IRC0_IRQPS4_IRQPS159	(*(volatile uint_io8_t*)0xB110681F)  /*@bfbba@*/

typedef struct stc_irc0_irqps4_field{
    uint_io32_t		u1IRQPS128:1;
    uint_io32_t		u1IRQPS129:1;
    uint_io32_t		u1IRQPS130:1;
    uint_io32_t		u1IRQPS131:1;
    uint_io32_t		u1IRQPS132:1;
    uint_io32_t		u1IRQPS133:1;
    uint_io32_t		u1IRQPS134:1;
    uint_io32_t		u1IRQPS135:1;
    uint_io32_t		u1IRQPS136:1;
    uint_io32_t		u1IRQPS137:1;
    uint_io32_t		u1IRQPS138:1;
    uint_io32_t		u1IRQPS139:1;
    uint_io32_t		u1IRQPS140:1;
    uint_io32_t		u1IRQPS141:1;
    uint_io32_t		u1IRQPS142:1;
    uint_io32_t		u1IRQPS143:1;
    uint_io32_t		u1IRQPS144:1;
    uint_io32_t		u1IRQPS145:1;
    uint_io32_t		u1IRQPS146:1;
    uint_io32_t		u1IRQPS147:1;
    uint_io32_t		u1IRQPS148:1;
    uint_io32_t		u1IRQPS149:1;
    uint_io32_t		u1IRQPS150:1;
    uint_io32_t		u1IRQPS151:1;
    uint_io32_t		u1IRQPS152:1;
    uint_io32_t		u1IRQPS153:1;
    uint_io32_t		u1IRQPS154:1;
    uint_io32_t		u1IRQPS155:1;
    uint_io32_t		u1IRQPS156:1;
    uint_io32_t		u1IRQPS157:1;
    uint_io32_t		u1IRQPS158:1;
    uint_io32_t		u1IRQPS159:1;
}stc_irc0_irqps4_field_t;

typedef union un_irc0_irqps4{
    uint_io32_t		u32Register;
    stc_irc0_irqps4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps4_t;

/* IRQPS5 */
#define IRC0_IRQPS5	(IRC0.unIRQPS5.u32Register)  /*@rg@*/
#define IRC0_IRQPS5_IRQPS160	(*(volatile uint_io8_t*)0xB1106820)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS161	(*(volatile uint_io8_t*)0xB1106821)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS162	(*(volatile uint_io8_t*)0xB1106822)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS163	(*(volatile uint_io8_t*)0xB1106823)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS164	(*(volatile uint_io8_t*)0xB1106824)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS165	(*(volatile uint_io8_t*)0xB1106825)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS166	(*(volatile uint_io8_t*)0xB1106826)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS167	(*(volatile uint_io8_t*)0xB1106827)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS168	(*(volatile uint_io8_t*)0xB1106828)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS169	(*(volatile uint_io8_t*)0xB1106829)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS170	(*(volatile uint_io8_t*)0xB110682A)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS171	(*(volatile uint_io8_t*)0xB110682B)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS172	(*(volatile uint_io8_t*)0xB110682C)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS173	(*(volatile uint_io8_t*)0xB110682D)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS174	(*(volatile uint_io8_t*)0xB110682E)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS175	(*(volatile uint_io8_t*)0xB110682F)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS176	(*(volatile uint_io8_t*)0xB1106830)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS177	(*(volatile uint_io8_t*)0xB1106831)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS178	(*(volatile uint_io8_t*)0xB1106832)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS179	(*(volatile uint_io8_t*)0xB1106833)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS180	(*(volatile uint_io8_t*)0xB1106834)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS181	(*(volatile uint_io8_t*)0xB1106835)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS182	(*(volatile uint_io8_t*)0xB1106836)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS183	(*(volatile uint_io8_t*)0xB1106837)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS184	(*(volatile uint_io8_t*)0xB1106838)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS185	(*(volatile uint_io8_t*)0xB1106839)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS186	(*(volatile uint_io8_t*)0xB110683A)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS187	(*(volatile uint_io8_t*)0xB110683B)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS188	(*(volatile uint_io8_t*)0xB110683C)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS189	(*(volatile uint_io8_t*)0xB110683D)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS190	(*(volatile uint_io8_t*)0xB110683E)  /*@bfbba@*/
#define IRC0_IRQPS5_IRQPS191	(*(volatile uint_io8_t*)0xB110683F)  /*@bfbba@*/

typedef struct stc_irc0_irqps5_field{
    uint_io32_t		u1IRQPS160:1;
    uint_io32_t		u1IRQPS161:1;
    uint_io32_t		u1IRQPS162:1;
    uint_io32_t		u1IRQPS163:1;
    uint_io32_t		u1IRQPS164:1;
    uint_io32_t		u1IRQPS165:1;
    uint_io32_t		u1IRQPS166:1;
    uint_io32_t		u1IRQPS167:1;
    uint_io32_t		u1IRQPS168:1;
    uint_io32_t		u1IRQPS169:1;
    uint_io32_t		u1IRQPS170:1;
    uint_io32_t		u1IRQPS171:1;
    uint_io32_t		u1IRQPS172:1;
    uint_io32_t		u1IRQPS173:1;
    uint_io32_t		u1IRQPS174:1;
    uint_io32_t		u1IRQPS175:1;
    uint_io32_t		u1IRQPS176:1;
    uint_io32_t		u1IRQPS177:1;
    uint_io32_t		u1IRQPS178:1;
    uint_io32_t		u1IRQPS179:1;
    uint_io32_t		u1IRQPS180:1;
    uint_io32_t		u1IRQPS181:1;
    uint_io32_t		u1IRQPS182:1;
    uint_io32_t		u1IRQPS183:1;
    uint_io32_t		u1IRQPS184:1;
    uint_io32_t		u1IRQPS185:1;
    uint_io32_t		u1IRQPS186:1;
    uint_io32_t		u1IRQPS187:1;
    uint_io32_t		u1IRQPS188:1;
    uint_io32_t		u1IRQPS189:1;
    uint_io32_t		u1IRQPS190:1;
    uint_io32_t		u1IRQPS191:1;
}stc_irc0_irqps5_field_t;

typedef union un_irc0_irqps5{
    uint_io32_t		u32Register;
    stc_irc0_irqps5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps5_t;

/* IRQPS6 */
#define IRC0_IRQPS6	(IRC0.unIRQPS6.u32Register)  /*@rg@*/
#define IRC0_IRQPS6_IRQPS192	(*(volatile uint_io8_t*)0xB1106840)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS193	(*(volatile uint_io8_t*)0xB1106841)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS194	(*(volatile uint_io8_t*)0xB1106842)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS195	(*(volatile uint_io8_t*)0xB1106843)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS196	(*(volatile uint_io8_t*)0xB1106844)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS197	(*(volatile uint_io8_t*)0xB1106845)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS198	(*(volatile uint_io8_t*)0xB1106846)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS199	(*(volatile uint_io8_t*)0xB1106847)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS200	(*(volatile uint_io8_t*)0xB1106848)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS201	(*(volatile uint_io8_t*)0xB1106849)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS202	(*(volatile uint_io8_t*)0xB110684A)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS203	(*(volatile uint_io8_t*)0xB110684B)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS204	(*(volatile uint_io8_t*)0xB110684C)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS205	(*(volatile uint_io8_t*)0xB110684D)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS206	(*(volatile uint_io8_t*)0xB110684E)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS207	(*(volatile uint_io8_t*)0xB110684F)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS208	(*(volatile uint_io8_t*)0xB1106850)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS209	(*(volatile uint_io8_t*)0xB1106851)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS210	(*(volatile uint_io8_t*)0xB1106852)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS211	(*(volatile uint_io8_t*)0xB1106853)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS212	(*(volatile uint_io8_t*)0xB1106854)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS213	(*(volatile uint_io8_t*)0xB1106855)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS214	(*(volatile uint_io8_t*)0xB1106856)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS215	(*(volatile uint_io8_t*)0xB1106857)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS216	(*(volatile uint_io8_t*)0xB1106858)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS217	(*(volatile uint_io8_t*)0xB1106859)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS218	(*(volatile uint_io8_t*)0xB110685A)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS219	(*(volatile uint_io8_t*)0xB110685B)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS220	(*(volatile uint_io8_t*)0xB110685C)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS221	(*(volatile uint_io8_t*)0xB110685D)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS222	(*(volatile uint_io8_t*)0xB110685E)  /*@bfbba@*/
#define IRC0_IRQPS6_IRQPS223	(*(volatile uint_io8_t*)0xB110685F)  /*@bfbba@*/

typedef struct stc_irc0_irqps6_field{
    uint_io32_t		u1IRQPS192:1;
    uint_io32_t		u1IRQPS193:1;
    uint_io32_t		u1IRQPS194:1;
    uint_io32_t		u1IRQPS195:1;
    uint_io32_t		u1IRQPS196:1;
    uint_io32_t		u1IRQPS197:1;
    uint_io32_t		u1IRQPS198:1;
    uint_io32_t		u1IRQPS199:1;
    uint_io32_t		u1IRQPS200:1;
    uint_io32_t		u1IRQPS201:1;
    uint_io32_t		u1IRQPS202:1;
    uint_io32_t		u1IRQPS203:1;
    uint_io32_t		u1IRQPS204:1;
    uint_io32_t		u1IRQPS205:1;
    uint_io32_t		u1IRQPS206:1;
    uint_io32_t		u1IRQPS207:1;
    uint_io32_t		u1IRQPS208:1;
    uint_io32_t		u1IRQPS209:1;
    uint_io32_t		u1IRQPS210:1;
    uint_io32_t		u1IRQPS211:1;
    uint_io32_t		u1IRQPS212:1;
    uint_io32_t		u1IRQPS213:1;
    uint_io32_t		u1IRQPS214:1;
    uint_io32_t		u1IRQPS215:1;
    uint_io32_t		u1IRQPS216:1;
    uint_io32_t		u1IRQPS217:1;
    uint_io32_t		u1IRQPS218:1;
    uint_io32_t		u1IRQPS219:1;
    uint_io32_t		u1IRQPS220:1;
    uint_io32_t		u1IRQPS221:1;
    uint_io32_t		u1IRQPS222:1;
    uint_io32_t		u1IRQPS223:1;
}stc_irc0_irqps6_field_t;

typedef union un_irc0_irqps6{
    uint_io32_t		u32Register;
    stc_irc0_irqps6_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps6_t;

/* IRQPS7 */
#define IRC0_IRQPS7	(IRC0.unIRQPS7.u32Register)  /*@rg@*/
#define IRC0_IRQPS7_IRQPS224	(*(volatile uint_io8_t*)0xB1106860)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS225	(*(volatile uint_io8_t*)0xB1106861)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS226	(*(volatile uint_io8_t*)0xB1106862)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS227	(*(volatile uint_io8_t*)0xB1106863)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS228	(*(volatile uint_io8_t*)0xB1106864)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS229	(*(volatile uint_io8_t*)0xB1106865)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS230	(*(volatile uint_io8_t*)0xB1106866)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS231	(*(volatile uint_io8_t*)0xB1106867)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS232	(*(volatile uint_io8_t*)0xB1106868)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS233	(*(volatile uint_io8_t*)0xB1106869)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS234	(*(volatile uint_io8_t*)0xB110686A)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS235	(*(volatile uint_io8_t*)0xB110686B)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS236	(*(volatile uint_io8_t*)0xB110686C)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS237	(*(volatile uint_io8_t*)0xB110686D)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS238	(*(volatile uint_io8_t*)0xB110686E)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS239	(*(volatile uint_io8_t*)0xB110686F)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS240	(*(volatile uint_io8_t*)0xB1106870)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS241	(*(volatile uint_io8_t*)0xB1106871)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS242	(*(volatile uint_io8_t*)0xB1106872)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS243	(*(volatile uint_io8_t*)0xB1106873)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS244	(*(volatile uint_io8_t*)0xB1106874)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS245	(*(volatile uint_io8_t*)0xB1106875)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS246	(*(volatile uint_io8_t*)0xB1106876)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS247	(*(volatile uint_io8_t*)0xB1106877)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS248	(*(volatile uint_io8_t*)0xB1106878)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS249	(*(volatile uint_io8_t*)0xB1106879)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS250	(*(volatile uint_io8_t*)0xB110687A)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS251	(*(volatile uint_io8_t*)0xB110687B)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS252	(*(volatile uint_io8_t*)0xB110687C)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS253	(*(volatile uint_io8_t*)0xB110687D)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS254	(*(volatile uint_io8_t*)0xB110687E)  /*@bfbba@*/
#define IRC0_IRQPS7_IRQPS255	(*(volatile uint_io8_t*)0xB110687F)  /*@bfbba@*/

typedef struct stc_irc0_irqps7_field{
    uint_io32_t		u1IRQPS224:1;
    uint_io32_t		u1IRQPS225:1;
    uint_io32_t		u1IRQPS226:1;
    uint_io32_t		u1IRQPS227:1;
    uint_io32_t		u1IRQPS228:1;
    uint_io32_t		u1IRQPS229:1;
    uint_io32_t		u1IRQPS230:1;
    uint_io32_t		u1IRQPS231:1;
    uint_io32_t		u1IRQPS232:1;
    uint_io32_t		u1IRQPS233:1;
    uint_io32_t		u1IRQPS234:1;
    uint_io32_t		u1IRQPS235:1;
    uint_io32_t		u1IRQPS236:1;
    uint_io32_t		u1IRQPS237:1;
    uint_io32_t		u1IRQPS238:1;
    uint_io32_t		u1IRQPS239:1;
    uint_io32_t		u1IRQPS240:1;
    uint_io32_t		u1IRQPS241:1;
    uint_io32_t		u1IRQPS242:1;
    uint_io32_t		u1IRQPS243:1;
    uint_io32_t		u1IRQPS244:1;
    uint_io32_t		u1IRQPS245:1;
    uint_io32_t		u1IRQPS246:1;
    uint_io32_t		u1IRQPS247:1;
    uint_io32_t		u1IRQPS248:1;
    uint_io32_t		u1IRQPS249:1;
    uint_io32_t		u1IRQPS250:1;
    uint_io32_t		u1IRQPS251:1;
    uint_io32_t		u1IRQPS252:1;
    uint_io32_t		u1IRQPS253:1;
    uint_io32_t		u1IRQPS254:1;
    uint_io32_t		u1IRQPS255:1;
}stc_irc0_irqps7_field_t;

typedef union un_irc0_irqps7{
    uint_io32_t		u32Register;
    stc_irc0_irqps7_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps7_t;

/* IRQPS8 */
#define IRC0_IRQPS8	(IRC0.unIRQPS8.u32Register)  /*@rg@*/
#define IRC0_IRQPS8_IRQPS256	(*(volatile uint_io8_t*)0xB1106880)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS257	(*(volatile uint_io8_t*)0xB1106881)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS258	(*(volatile uint_io8_t*)0xB1106882)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS259	(*(volatile uint_io8_t*)0xB1106883)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS260	(*(volatile uint_io8_t*)0xB1106884)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS261	(*(volatile uint_io8_t*)0xB1106885)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS262	(*(volatile uint_io8_t*)0xB1106886)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS263	(*(volatile uint_io8_t*)0xB1106887)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS264	(*(volatile uint_io8_t*)0xB1106888)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS265	(*(volatile uint_io8_t*)0xB1106889)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS266	(*(volatile uint_io8_t*)0xB110688A)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS267	(*(volatile uint_io8_t*)0xB110688B)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS268	(*(volatile uint_io8_t*)0xB110688C)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS269	(*(volatile uint_io8_t*)0xB110688D)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS270	(*(volatile uint_io8_t*)0xB110688E)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS271	(*(volatile uint_io8_t*)0xB110688F)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS272	(*(volatile uint_io8_t*)0xB1106890)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS273	(*(volatile uint_io8_t*)0xB1106891)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS274	(*(volatile uint_io8_t*)0xB1106892)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS275	(*(volatile uint_io8_t*)0xB1106893)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS276	(*(volatile uint_io8_t*)0xB1106894)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS277	(*(volatile uint_io8_t*)0xB1106895)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS278	(*(volatile uint_io8_t*)0xB1106896)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS279	(*(volatile uint_io8_t*)0xB1106897)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS280	(*(volatile uint_io8_t*)0xB1106898)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS281	(*(volatile uint_io8_t*)0xB1106899)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS282	(*(volatile uint_io8_t*)0xB110689A)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS283	(*(volatile uint_io8_t*)0xB110689B)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS284	(*(volatile uint_io8_t*)0xB110689C)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS285	(*(volatile uint_io8_t*)0xB110689D)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS286	(*(volatile uint_io8_t*)0xB110689E)  /*@bfbba@*/
#define IRC0_IRQPS8_IRQPS287	(*(volatile uint_io8_t*)0xB110689F)  /*@bfbba@*/

typedef struct stc_irc0_irqps8_field{
    uint_io32_t		u1IRQPS256:1;
    uint_io32_t		u1IRQPS257:1;
    uint_io32_t		u1IRQPS258:1;
    uint_io32_t		u1IRQPS259:1;
    uint_io32_t		u1IRQPS260:1;
    uint_io32_t		u1IRQPS261:1;
    uint_io32_t		u1IRQPS262:1;
    uint_io32_t		u1IRQPS263:1;
    uint_io32_t		u1IRQPS264:1;
    uint_io32_t		u1IRQPS265:1;
    uint_io32_t		u1IRQPS266:1;
    uint_io32_t		u1IRQPS267:1;
    uint_io32_t		u1IRQPS268:1;
    uint_io32_t		u1IRQPS269:1;
    uint_io32_t		u1IRQPS270:1;
    uint_io32_t		u1IRQPS271:1;
    uint_io32_t		u1IRQPS272:1;
    uint_io32_t		u1IRQPS273:1;
    uint_io32_t		u1IRQPS274:1;
    uint_io32_t		u1IRQPS275:1;
    uint_io32_t		u1IRQPS276:1;
    uint_io32_t		u1IRQPS277:1;
    uint_io32_t		u1IRQPS278:1;
    uint_io32_t		u1IRQPS279:1;
    uint_io32_t		u1IRQPS280:1;
    uint_io32_t		u1IRQPS281:1;
    uint_io32_t		u1IRQPS282:1;
    uint_io32_t		u1IRQPS283:1;
    uint_io32_t		u1IRQPS284:1;
    uint_io32_t		u1IRQPS285:1;
    uint_io32_t		u1IRQPS286:1;
    uint_io32_t		u1IRQPS287:1;
}stc_irc0_irqps8_field_t;

typedef union un_irc0_irqps8{
    uint_io32_t		u32Register;
    stc_irc0_irqps8_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps8_t;

/* IRQPS9 */
#define IRC0_IRQPS9	(IRC0.unIRQPS9.u32Register)  /*@rg@*/
#define IRC0_IRQPS9_IRQPS288	(*(volatile uint_io8_t*)0xB11068A0)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS289	(*(volatile uint_io8_t*)0xB11068A1)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS290	(*(volatile uint_io8_t*)0xB11068A2)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS291	(*(volatile uint_io8_t*)0xB11068A3)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS292	(*(volatile uint_io8_t*)0xB11068A4)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS293	(*(volatile uint_io8_t*)0xB11068A5)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS294	(*(volatile uint_io8_t*)0xB11068A6)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS295	(*(volatile uint_io8_t*)0xB11068A7)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS296	(*(volatile uint_io8_t*)0xB11068A8)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS297	(*(volatile uint_io8_t*)0xB11068A9)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS298	(*(volatile uint_io8_t*)0xB11068AA)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS299	(*(volatile uint_io8_t*)0xB11068AB)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS300	(*(volatile uint_io8_t*)0xB11068AC)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS301	(*(volatile uint_io8_t*)0xB11068AD)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS302	(*(volatile uint_io8_t*)0xB11068AE)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS303	(*(volatile uint_io8_t*)0xB11068AF)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS304	(*(volatile uint_io8_t*)0xB11068B0)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS305	(*(volatile uint_io8_t*)0xB11068B1)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS306	(*(volatile uint_io8_t*)0xB11068B2)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS307	(*(volatile uint_io8_t*)0xB11068B3)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS308	(*(volatile uint_io8_t*)0xB11068B4)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS309	(*(volatile uint_io8_t*)0xB11068B5)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS310	(*(volatile uint_io8_t*)0xB11068B6)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS311	(*(volatile uint_io8_t*)0xB11068B7)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS312	(*(volatile uint_io8_t*)0xB11068B8)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS313	(*(volatile uint_io8_t*)0xB11068B9)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS314	(*(volatile uint_io8_t*)0xB11068BA)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS315	(*(volatile uint_io8_t*)0xB11068BB)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS316	(*(volatile uint_io8_t*)0xB11068BC)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS317	(*(volatile uint_io8_t*)0xB11068BD)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS318	(*(volatile uint_io8_t*)0xB11068BE)  /*@bfbba@*/
#define IRC0_IRQPS9_IRQPS319	(*(volatile uint_io8_t*)0xB11068BF)  /*@bfbba@*/

typedef struct stc_irc0_irqps9_field{
    uint_io32_t		u1IRQPS288:1;
    uint_io32_t		u1IRQPS289:1;
    uint_io32_t		u1IRQPS290:1;
    uint_io32_t		u1IRQPS291:1;
    uint_io32_t		u1IRQPS292:1;
    uint_io32_t		u1IRQPS293:1;
    uint_io32_t		u1IRQPS294:1;
    uint_io32_t		u1IRQPS295:1;
    uint_io32_t		u1IRQPS296:1;
    uint_io32_t		u1IRQPS297:1;
    uint_io32_t		u1IRQPS298:1;
    uint_io32_t		u1IRQPS299:1;
    uint_io32_t		u1IRQPS300:1;
    uint_io32_t		u1IRQPS301:1;
    uint_io32_t		u1IRQPS302:1;
    uint_io32_t		u1IRQPS303:1;
    uint_io32_t		u1IRQPS304:1;
    uint_io32_t		u1IRQPS305:1;
    uint_io32_t		u1IRQPS306:1;
    uint_io32_t		u1IRQPS307:1;
    uint_io32_t		u1IRQPS308:1;
    uint_io32_t		u1IRQPS309:1;
    uint_io32_t		u1IRQPS310:1;
    uint_io32_t		u1IRQPS311:1;
    uint_io32_t		u1IRQPS312:1;
    uint_io32_t		u1IRQPS313:1;
    uint_io32_t		u1IRQPS314:1;
    uint_io32_t		u1IRQPS315:1;
    uint_io32_t		u1IRQPS316:1;
    uint_io32_t		u1IRQPS317:1;
    uint_io32_t		u1IRQPS318:1;
    uint_io32_t		u1IRQPS319:1;
}stc_irc0_irqps9_field_t;

typedef union un_irc0_irqps9{
    uint_io32_t		u32Register;
    stc_irc0_irqps9_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps9_t;

/* IRQPS10 */
#define IRC0_IRQPS10	(IRC0.unIRQPS10.u32Register)  /*@rg@*/
#define IRC0_IRQPS10_IRQPS320	(*(volatile uint_io8_t*)0xB11068C0)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS321	(*(volatile uint_io8_t*)0xB11068C1)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS322	(*(volatile uint_io8_t*)0xB11068C2)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS323	(*(volatile uint_io8_t*)0xB11068C3)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS324	(*(volatile uint_io8_t*)0xB11068C4)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS325	(*(volatile uint_io8_t*)0xB11068C5)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS326	(*(volatile uint_io8_t*)0xB11068C6)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS327	(*(volatile uint_io8_t*)0xB11068C7)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS328	(*(volatile uint_io8_t*)0xB11068C8)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS329	(*(volatile uint_io8_t*)0xB11068C9)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS330	(*(volatile uint_io8_t*)0xB11068CA)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS331	(*(volatile uint_io8_t*)0xB11068CB)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS332	(*(volatile uint_io8_t*)0xB11068CC)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS333	(*(volatile uint_io8_t*)0xB11068CD)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS334	(*(volatile uint_io8_t*)0xB11068CE)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS335	(*(volatile uint_io8_t*)0xB11068CF)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS336	(*(volatile uint_io8_t*)0xB11068D0)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS337	(*(volatile uint_io8_t*)0xB11068D1)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS338	(*(volatile uint_io8_t*)0xB11068D2)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS339	(*(volatile uint_io8_t*)0xB11068D3)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS340	(*(volatile uint_io8_t*)0xB11068D4)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS341	(*(volatile uint_io8_t*)0xB11068D5)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS342	(*(volatile uint_io8_t*)0xB11068D6)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS343	(*(volatile uint_io8_t*)0xB11068D7)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS344	(*(volatile uint_io8_t*)0xB11068D8)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS345	(*(volatile uint_io8_t*)0xB11068D9)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS346	(*(volatile uint_io8_t*)0xB11068DA)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS347	(*(volatile uint_io8_t*)0xB11068DB)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS348	(*(volatile uint_io8_t*)0xB11068DC)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS349	(*(volatile uint_io8_t*)0xB11068DD)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS350	(*(volatile uint_io8_t*)0xB11068DE)  /*@bfbba@*/
#define IRC0_IRQPS10_IRQPS351	(*(volatile uint_io8_t*)0xB11068DF)  /*@bfbba@*/

typedef struct stc_irc0_irqps10_field{
    uint_io32_t		u1IRQPS320:1;
    uint_io32_t		u1IRQPS321:1;
    uint_io32_t		u1IRQPS322:1;
    uint_io32_t		u1IRQPS323:1;
    uint_io32_t		u1IRQPS324:1;
    uint_io32_t		u1IRQPS325:1;
    uint_io32_t		u1IRQPS326:1;
    uint_io32_t		u1IRQPS327:1;
    uint_io32_t		u1IRQPS328:1;
    uint_io32_t		u1IRQPS329:1;
    uint_io32_t		u1IRQPS330:1;
    uint_io32_t		u1IRQPS331:1;
    uint_io32_t		u1IRQPS332:1;
    uint_io32_t		u1IRQPS333:1;
    uint_io32_t		u1IRQPS334:1;
    uint_io32_t		u1IRQPS335:1;
    uint_io32_t		u1IRQPS336:1;
    uint_io32_t		u1IRQPS337:1;
    uint_io32_t		u1IRQPS338:1;
    uint_io32_t		u1IRQPS339:1;
    uint_io32_t		u1IRQPS340:1;
    uint_io32_t		u1IRQPS341:1;
    uint_io32_t		u1IRQPS342:1;
    uint_io32_t		u1IRQPS343:1;
    uint_io32_t		u1IRQPS344:1;
    uint_io32_t		u1IRQPS345:1;
    uint_io32_t		u1IRQPS346:1;
    uint_io32_t		u1IRQPS347:1;
    uint_io32_t		u1IRQPS348:1;
    uint_io32_t		u1IRQPS349:1;
    uint_io32_t		u1IRQPS350:1;
    uint_io32_t		u1IRQPS351:1;
}stc_irc0_irqps10_field_t;

typedef union un_irc0_irqps10{
    uint_io32_t		u32Register;
    stc_irc0_irqps10_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps10_t;

/* IRQPS11 */
#define IRC0_IRQPS11	(IRC0.unIRQPS11.u32Register)  /*@rg@*/
#define IRC0_IRQPS11_IRQPS352	(*(volatile uint_io8_t*)0xB11068E0)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS353	(*(volatile uint_io8_t*)0xB11068E1)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS354	(*(volatile uint_io8_t*)0xB11068E2)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS355	(*(volatile uint_io8_t*)0xB11068E3)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS356	(*(volatile uint_io8_t*)0xB11068E4)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS357	(*(volatile uint_io8_t*)0xB11068E5)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS358	(*(volatile uint_io8_t*)0xB11068E6)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS359	(*(volatile uint_io8_t*)0xB11068E7)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS360	(*(volatile uint_io8_t*)0xB11068E8)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS361	(*(volatile uint_io8_t*)0xB11068E9)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS362	(*(volatile uint_io8_t*)0xB11068EA)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS363	(*(volatile uint_io8_t*)0xB11068EB)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS364	(*(volatile uint_io8_t*)0xB11068EC)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS365	(*(volatile uint_io8_t*)0xB11068ED)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS366	(*(volatile uint_io8_t*)0xB11068EE)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS367	(*(volatile uint_io8_t*)0xB11068EF)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS368	(*(volatile uint_io8_t*)0xB11068F0)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS369	(*(volatile uint_io8_t*)0xB11068F1)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS370	(*(volatile uint_io8_t*)0xB11068F2)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS371	(*(volatile uint_io8_t*)0xB11068F3)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS372	(*(volatile uint_io8_t*)0xB11068F4)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS373	(*(volatile uint_io8_t*)0xB11068F5)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS374	(*(volatile uint_io8_t*)0xB11068F6)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS375	(*(volatile uint_io8_t*)0xB11068F7)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS376	(*(volatile uint_io8_t*)0xB11068F8)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS377	(*(volatile uint_io8_t*)0xB11068F9)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS378	(*(volatile uint_io8_t*)0xB11068FA)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS379	(*(volatile uint_io8_t*)0xB11068FB)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS380	(*(volatile uint_io8_t*)0xB11068FC)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS381	(*(volatile uint_io8_t*)0xB11068FD)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS382	(*(volatile uint_io8_t*)0xB11068FE)  /*@bfbba@*/
#define IRC0_IRQPS11_IRQPS383	(*(volatile uint_io8_t*)0xB11068FF)  /*@bfbba@*/

typedef struct stc_irc0_irqps11_field{
    uint_io32_t		u1IRQPS352:1;
    uint_io32_t		u1IRQPS353:1;
    uint_io32_t		u1IRQPS354:1;
    uint_io32_t		u1IRQPS355:1;
    uint_io32_t		u1IRQPS356:1;
    uint_io32_t		u1IRQPS357:1;
    uint_io32_t		u1IRQPS358:1;
    uint_io32_t		u1IRQPS359:1;
    uint_io32_t		u1IRQPS360:1;
    uint_io32_t		u1IRQPS361:1;
    uint_io32_t		u1IRQPS362:1;
    uint_io32_t		u1IRQPS363:1;
    uint_io32_t		u1IRQPS364:1;
    uint_io32_t		u1IRQPS365:1;
    uint_io32_t		u1IRQPS366:1;
    uint_io32_t		u1IRQPS367:1;
    uint_io32_t		u1IRQPS368:1;
    uint_io32_t		u1IRQPS369:1;
    uint_io32_t		u1IRQPS370:1;
    uint_io32_t		u1IRQPS371:1;
    uint_io32_t		u1IRQPS372:1;
    uint_io32_t		u1IRQPS373:1;
    uint_io32_t		u1IRQPS374:1;
    uint_io32_t		u1IRQPS375:1;
    uint_io32_t		u1IRQPS376:1;
    uint_io32_t		u1IRQPS377:1;
    uint_io32_t		u1IRQPS378:1;
    uint_io32_t		u1IRQPS379:1;
    uint_io32_t		u1IRQPS380:1;
    uint_io32_t		u1IRQPS381:1;
    uint_io32_t		u1IRQPS382:1;
    uint_io32_t		u1IRQPS383:1;
}stc_irc0_irqps11_field_t;

typedef union un_irc0_irqps11{
    uint_io32_t		u32Register;
    stc_irc0_irqps11_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps11_t;

/* IRQPS12 */
#define IRC0_IRQPS12	(IRC0.unIRQPS12.u32Register)  /*@rg@*/
#define IRC0_IRQPS12_IRQPS384	(*(volatile uint_io8_t*)0xB1106900)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS385	(*(volatile uint_io8_t*)0xB1106901)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS386	(*(volatile uint_io8_t*)0xB1106902)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS387	(*(volatile uint_io8_t*)0xB1106903)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS388	(*(volatile uint_io8_t*)0xB1106904)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS389	(*(volatile uint_io8_t*)0xB1106905)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS390	(*(volatile uint_io8_t*)0xB1106906)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS391	(*(volatile uint_io8_t*)0xB1106907)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS392	(*(volatile uint_io8_t*)0xB1106908)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS393	(*(volatile uint_io8_t*)0xB1106909)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS394	(*(volatile uint_io8_t*)0xB110690A)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS395	(*(volatile uint_io8_t*)0xB110690B)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS396	(*(volatile uint_io8_t*)0xB110690C)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS397	(*(volatile uint_io8_t*)0xB110690D)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS398	(*(volatile uint_io8_t*)0xB110690E)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS399	(*(volatile uint_io8_t*)0xB110690F)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS400	(*(volatile uint_io8_t*)0xB1106910)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS401	(*(volatile uint_io8_t*)0xB1106911)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS402	(*(volatile uint_io8_t*)0xB1106912)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS403	(*(volatile uint_io8_t*)0xB1106913)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS404	(*(volatile uint_io8_t*)0xB1106914)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS405	(*(volatile uint_io8_t*)0xB1106915)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS406	(*(volatile uint_io8_t*)0xB1106916)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS407	(*(volatile uint_io8_t*)0xB1106917)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS408	(*(volatile uint_io8_t*)0xB1106918)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS409	(*(volatile uint_io8_t*)0xB1106919)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS410	(*(volatile uint_io8_t*)0xB110691A)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS411	(*(volatile uint_io8_t*)0xB110691B)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS412	(*(volatile uint_io8_t*)0xB110691C)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS413	(*(volatile uint_io8_t*)0xB110691D)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS414	(*(volatile uint_io8_t*)0xB110691E)  /*@bfbba@*/
#define IRC0_IRQPS12_IRQPS415	(*(volatile uint_io8_t*)0xB110691F)  /*@bfbba@*/

typedef struct stc_irc0_irqps12_field{
    uint_io32_t		u1IRQPS384:1;
    uint_io32_t		u1IRQPS385:1;
    uint_io32_t		u1IRQPS386:1;
    uint_io32_t		u1IRQPS387:1;
    uint_io32_t		u1IRQPS388:1;
    uint_io32_t		u1IRQPS389:1;
    uint_io32_t		u1IRQPS390:1;
    uint_io32_t		u1IRQPS391:1;
    uint_io32_t		u1IRQPS392:1;
    uint_io32_t		u1IRQPS393:1;
    uint_io32_t		u1IRQPS394:1;
    uint_io32_t		u1IRQPS395:1;
    uint_io32_t		u1IRQPS396:1;
    uint_io32_t		u1IRQPS397:1;
    uint_io32_t		u1IRQPS398:1;
    uint_io32_t		u1IRQPS399:1;
    uint_io32_t		u1IRQPS400:1;
    uint_io32_t		u1IRQPS401:1;
    uint_io32_t		u1IRQPS402:1;
    uint_io32_t		u1IRQPS403:1;
    uint_io32_t		u1IRQPS404:1;
    uint_io32_t		u1IRQPS405:1;
    uint_io32_t		u1IRQPS406:1;
    uint_io32_t		u1IRQPS407:1;
    uint_io32_t		u1IRQPS408:1;
    uint_io32_t		u1IRQPS409:1;
    uint_io32_t		u1IRQPS410:1;
    uint_io32_t		u1IRQPS411:1;
    uint_io32_t		u1IRQPS412:1;
    uint_io32_t		u1IRQPS413:1;
    uint_io32_t		u1IRQPS414:1;
    uint_io32_t		u1IRQPS415:1;
}stc_irc0_irqps12_field_t;

typedef union un_irc0_irqps12{
    uint_io32_t		u32Register;
    stc_irc0_irqps12_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps12_t;

/* IRQPS13 */
#define IRC0_IRQPS13	(IRC0.unIRQPS13.u32Register)  /*@rg@*/
#define IRC0_IRQPS13_IRQPS416	(*(volatile uint_io8_t*)0xB1106920)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS417	(*(volatile uint_io8_t*)0xB1106921)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS418	(*(volatile uint_io8_t*)0xB1106922)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS419	(*(volatile uint_io8_t*)0xB1106923)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS420	(*(volatile uint_io8_t*)0xB1106924)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS421	(*(volatile uint_io8_t*)0xB1106925)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS422	(*(volatile uint_io8_t*)0xB1106926)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS423	(*(volatile uint_io8_t*)0xB1106927)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS424	(*(volatile uint_io8_t*)0xB1106928)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS425	(*(volatile uint_io8_t*)0xB1106929)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS426	(*(volatile uint_io8_t*)0xB110692A)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS427	(*(volatile uint_io8_t*)0xB110692B)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS428	(*(volatile uint_io8_t*)0xB110692C)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS429	(*(volatile uint_io8_t*)0xB110692D)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS430	(*(volatile uint_io8_t*)0xB110692E)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS431	(*(volatile uint_io8_t*)0xB110692F)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS432	(*(volatile uint_io8_t*)0xB1106930)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS433	(*(volatile uint_io8_t*)0xB1106931)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS434	(*(volatile uint_io8_t*)0xB1106932)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS435	(*(volatile uint_io8_t*)0xB1106933)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS436	(*(volatile uint_io8_t*)0xB1106934)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS437	(*(volatile uint_io8_t*)0xB1106935)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS438	(*(volatile uint_io8_t*)0xB1106936)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS439	(*(volatile uint_io8_t*)0xB1106937)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS440	(*(volatile uint_io8_t*)0xB1106938)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS441	(*(volatile uint_io8_t*)0xB1106939)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS442	(*(volatile uint_io8_t*)0xB110693A)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS443	(*(volatile uint_io8_t*)0xB110693B)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS444	(*(volatile uint_io8_t*)0xB110693C)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS445	(*(volatile uint_io8_t*)0xB110693D)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS446	(*(volatile uint_io8_t*)0xB110693E)  /*@bfbba@*/
#define IRC0_IRQPS13_IRQPS447	(*(volatile uint_io8_t*)0xB110693F)  /*@bfbba@*/

typedef struct stc_irc0_irqps13_field{
    uint_io32_t		u1IRQPS416:1;
    uint_io32_t		u1IRQPS417:1;
    uint_io32_t		u1IRQPS418:1;
    uint_io32_t		u1IRQPS419:1;
    uint_io32_t		u1IRQPS420:1;
    uint_io32_t		u1IRQPS421:1;
    uint_io32_t		u1IRQPS422:1;
    uint_io32_t		u1IRQPS423:1;
    uint_io32_t		u1IRQPS424:1;
    uint_io32_t		u1IRQPS425:1;
    uint_io32_t		u1IRQPS426:1;
    uint_io32_t		u1IRQPS427:1;
    uint_io32_t		u1IRQPS428:1;
    uint_io32_t		u1IRQPS429:1;
    uint_io32_t		u1IRQPS430:1;
    uint_io32_t		u1IRQPS431:1;
    uint_io32_t		u1IRQPS432:1;
    uint_io32_t		u1IRQPS433:1;
    uint_io32_t		u1IRQPS434:1;
    uint_io32_t		u1IRQPS435:1;
    uint_io32_t		u1IRQPS436:1;
    uint_io32_t		u1IRQPS437:1;
    uint_io32_t		u1IRQPS438:1;
    uint_io32_t		u1IRQPS439:1;
    uint_io32_t		u1IRQPS440:1;
    uint_io32_t		u1IRQPS441:1;
    uint_io32_t		u1IRQPS442:1;
    uint_io32_t		u1IRQPS443:1;
    uint_io32_t		u1IRQPS444:1;
    uint_io32_t		u1IRQPS445:1;
    uint_io32_t		u1IRQPS446:1;
    uint_io32_t		u1IRQPS447:1;
}stc_irc0_irqps13_field_t;

typedef union un_irc0_irqps13{
    uint_io32_t		u32Register;
    stc_irc0_irqps13_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps13_t;

/* IRQPS14 */
#define IRC0_IRQPS14	(IRC0.unIRQPS14.u32Register)  /*@rg@*/
#define IRC0_IRQPS14_IRQPS448	(*(volatile uint_io8_t*)0xB1106940)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS449	(*(volatile uint_io8_t*)0xB1106941)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS450	(*(volatile uint_io8_t*)0xB1106942)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS451	(*(volatile uint_io8_t*)0xB1106943)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS452	(*(volatile uint_io8_t*)0xB1106944)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS453	(*(volatile uint_io8_t*)0xB1106945)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS454	(*(volatile uint_io8_t*)0xB1106946)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS455	(*(volatile uint_io8_t*)0xB1106947)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS456	(*(volatile uint_io8_t*)0xB1106948)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS457	(*(volatile uint_io8_t*)0xB1106949)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS458	(*(volatile uint_io8_t*)0xB110694A)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS459	(*(volatile uint_io8_t*)0xB110694B)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS460	(*(volatile uint_io8_t*)0xB110694C)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS461	(*(volatile uint_io8_t*)0xB110694D)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS462	(*(volatile uint_io8_t*)0xB110694E)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS463	(*(volatile uint_io8_t*)0xB110694F)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS464	(*(volatile uint_io8_t*)0xB1106950)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS465	(*(volatile uint_io8_t*)0xB1106951)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS466	(*(volatile uint_io8_t*)0xB1106952)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS467	(*(volatile uint_io8_t*)0xB1106953)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS468	(*(volatile uint_io8_t*)0xB1106954)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS469	(*(volatile uint_io8_t*)0xB1106955)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS470	(*(volatile uint_io8_t*)0xB1106956)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS471	(*(volatile uint_io8_t*)0xB1106957)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS472	(*(volatile uint_io8_t*)0xB1106958)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS473	(*(volatile uint_io8_t*)0xB1106959)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS474	(*(volatile uint_io8_t*)0xB110695A)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS475	(*(volatile uint_io8_t*)0xB110695B)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS476	(*(volatile uint_io8_t*)0xB110695C)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS477	(*(volatile uint_io8_t*)0xB110695D)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS478	(*(volatile uint_io8_t*)0xB110695E)  /*@bfbba@*/
#define IRC0_IRQPS14_IRQPS479	(*(volatile uint_io8_t*)0xB110695F)  /*@bfbba@*/

typedef struct stc_irc0_irqps14_field{
    uint_io32_t		u1IRQPS448:1;
    uint_io32_t		u1IRQPS449:1;
    uint_io32_t		u1IRQPS450:1;
    uint_io32_t		u1IRQPS451:1;
    uint_io32_t		u1IRQPS452:1;
    uint_io32_t		u1IRQPS453:1;
    uint_io32_t		u1IRQPS454:1;
    uint_io32_t		u1IRQPS455:1;
    uint_io32_t		u1IRQPS456:1;
    uint_io32_t		u1IRQPS457:1;
    uint_io32_t		u1IRQPS458:1;
    uint_io32_t		u1IRQPS459:1;
    uint_io32_t		u1IRQPS460:1;
    uint_io32_t		u1IRQPS461:1;
    uint_io32_t		u1IRQPS462:1;
    uint_io32_t		u1IRQPS463:1;
    uint_io32_t		u1IRQPS464:1;
    uint_io32_t		u1IRQPS465:1;
    uint_io32_t		u1IRQPS466:1;
    uint_io32_t		u1IRQPS467:1;
    uint_io32_t		u1IRQPS468:1;
    uint_io32_t		u1IRQPS469:1;
    uint_io32_t		u1IRQPS470:1;
    uint_io32_t		u1IRQPS471:1;
    uint_io32_t		u1IRQPS472:1;
    uint_io32_t		u1IRQPS473:1;
    uint_io32_t		u1IRQPS474:1;
    uint_io32_t		u1IRQPS475:1;
    uint_io32_t		u1IRQPS476:1;
    uint_io32_t		u1IRQPS477:1;
    uint_io32_t		u1IRQPS478:1;
    uint_io32_t		u1IRQPS479:1;
}stc_irc0_irqps14_field_t;

typedef union un_irc0_irqps14{
    uint_io32_t		u32Register;
    stc_irc0_irqps14_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps14_t;

/* IRQPS15 */
#define IRC0_IRQPS15	(IRC0.unIRQPS15.u32Register)  /*@rg@*/
#define IRC0_IRQPS15_IRQPS480	(*(volatile uint_io8_t*)0xB1106960)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS481	(*(volatile uint_io8_t*)0xB1106961)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS482	(*(volatile uint_io8_t*)0xB1106962)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS483	(*(volatile uint_io8_t*)0xB1106963)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS484	(*(volatile uint_io8_t*)0xB1106964)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS485	(*(volatile uint_io8_t*)0xB1106965)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS486	(*(volatile uint_io8_t*)0xB1106966)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS487	(*(volatile uint_io8_t*)0xB1106967)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS488	(*(volatile uint_io8_t*)0xB1106968)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS489	(*(volatile uint_io8_t*)0xB1106969)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS490	(*(volatile uint_io8_t*)0xB110696A)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS491	(*(volatile uint_io8_t*)0xB110696B)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS492	(*(volatile uint_io8_t*)0xB110696C)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS493	(*(volatile uint_io8_t*)0xB110696D)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS494	(*(volatile uint_io8_t*)0xB110696E)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS495	(*(volatile uint_io8_t*)0xB110696F)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS496	(*(volatile uint_io8_t*)0xB1106970)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS497	(*(volatile uint_io8_t*)0xB1106971)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS498	(*(volatile uint_io8_t*)0xB1106972)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS499	(*(volatile uint_io8_t*)0xB1106973)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS500	(*(volatile uint_io8_t*)0xB1106974)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS501	(*(volatile uint_io8_t*)0xB1106975)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS502	(*(volatile uint_io8_t*)0xB1106976)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS503	(*(volatile uint_io8_t*)0xB1106977)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS504	(*(volatile uint_io8_t*)0xB1106978)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS505	(*(volatile uint_io8_t*)0xB1106979)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS506	(*(volatile uint_io8_t*)0xB110697A)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS507	(*(volatile uint_io8_t*)0xB110697B)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS508	(*(volatile uint_io8_t*)0xB110697C)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS509	(*(volatile uint_io8_t*)0xB110697D)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS510	(*(volatile uint_io8_t*)0xB110697E)  /*@bfbba@*/
#define IRC0_IRQPS15_IRQPS511	(*(volatile uint_io8_t*)0xB110697F)  /*@bfbba@*/

typedef struct stc_irc0_irqps15_field{
    uint_io32_t		u1IRQPS480:1;
    uint_io32_t		u1IRQPS481:1;
    uint_io32_t		u1IRQPS482:1;
    uint_io32_t		u1IRQPS483:1;
    uint_io32_t		u1IRQPS484:1;
    uint_io32_t		u1IRQPS485:1;
    uint_io32_t		u1IRQPS486:1;
    uint_io32_t		u1IRQPS487:1;
    uint_io32_t		u1IRQPS488:1;
    uint_io32_t		u1IRQPS489:1;
    uint_io32_t		u1IRQPS490:1;
    uint_io32_t		u1IRQPS491:1;
    uint_io32_t		u1IRQPS492:1;
    uint_io32_t		u1IRQPS493:1;
    uint_io32_t		u1IRQPS494:1;
    uint_io32_t		u1IRQPS495:1;
    uint_io32_t		u1IRQPS496:1;
    uint_io32_t		u1IRQPS497:1;
    uint_io32_t		u1IRQPS498:1;
    uint_io32_t		u1IRQPS499:1;
    uint_io32_t		u1IRQPS500:1;
    uint_io32_t		u1IRQPS501:1;
    uint_io32_t		u1IRQPS502:1;
    uint_io32_t		u1IRQPS503:1;
    uint_io32_t		u1IRQPS504:1;
    uint_io32_t		u1IRQPS505:1;
    uint_io32_t		u1IRQPS506:1;
    uint_io32_t		u1IRQPS507:1;
    uint_io32_t		u1IRQPS508:1;
    uint_io32_t		u1IRQPS509:1;
    uint_io32_t		u1IRQPS510:1;
    uint_io32_t		u1IRQPS511:1;
}stc_irc0_irqps15_field_t;

typedef union un_irc0_irqps15{
    uint_io32_t		u32Register;
    stc_irc0_irqps15_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqps15_t;

/* UNLOCK */
#define IRC0_UNLOCK	(IRC0.unUNLOCK.u32Register)  /*@rg@*/
#define IRC0_UNLOCK_UNLOCK	IRC0_UNLOCK  /*@bfrg@*/

typedef union un_irc0_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_unlock_t;

/* IRQEEVA */
#define IRC0_IRQEEVA	(IRC0.unIRQEEVA.u32Register)  /*@rg@*/
#define IRC0_IRQEEVA_IRQVA	IRC0_IRQEEVA  /*@bfrg@*/

typedef union un_irc0_irqeeva{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_irqeeva_t;

/* EEI */
#define IRC0_EEI	(IRC0.unEEI.u32Register)  /*@rg@*/
#define IRC0_EEI_EENC	(*(volatile uint_io8_t*)0xB1106A00)  /*@bfbba@*/
#define IRC0_EEI_EENS	(*(volatile uint_io8_t*)0xB1106A08)  /*@bfbba@*/
#define IRC0_EEI_EEIC	(*(volatile uint_io8_t*)0xB1106A10)  /*@bfbba@*/
#define IRC0_EEI_EEIS	(*(volatile uint_io8_t*)0xB1106A18)  /*@bfbba@*/

typedef struct stc_irc0_eei_field{
    uint_io32_t		u1EENC:1;
    uint_io32_t		:7;
    uint_io32_t		u1EENS:1;
    uint_io32_t		:7;
    uint_io32_t		u1EEIC:1;
    uint_io32_t		:7;
    uint_io32_t		u1EEIS:1;
    uint_io32_t		:7;
}stc_irc0_eei_field_t;

typedef union un_irc0_eei{
    uint_io32_t		u32Register;
    stc_irc0_eei_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_eei_t;

/* EAN */
#define IRC0_EAN	(IRC0.unEAN.u32Register)  /*@rg@*/
#define IRC0_EAN_EAN	(IRC0.unEAN.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_irc0_ean_field{
    uint_io32_t		u8EAN:8;
    uint_io32_t		:24;
}stc_irc0_ean_field_t;

typedef union un_irc0_ean{
    uint_io32_t		u32Register;
    stc_irc0_ean_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_ean_t;

/* ET */
#define IRC0_ET	(IRC0.unET.u32Register)  /*@rg@*/
#define IRC0_ET_ET	(*(volatile uint_io8_t*)0xB1106A40)  /*@bfbba@*/

typedef struct stc_irc0_et_field{
    uint_io32_t		u1ET:1;
    uint_io32_t		:31;
}stc_irc0_et_field_t;

typedef union un_irc0_et{
    uint_io32_t		u32Register;
    stc_irc0_et_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_et_t;

/* EEB[0/1] */
#define IRC0_EEB0	(IRC0.unEEB0.u32Register)  /*@rg@*/
#define IRC0_EEB0_EEB	(IRC0.unEEB0.stcField.u30EEB)  /*@bf@*/

#define IRC0_EEB1	(IRC0.unEEB1.u32Register)  /*@rg@*/
#define IRC0_EEB1_EEB	(IRC0.unEEB1.stcField.u30EEB)  /*@bf@*/

typedef struct stc_irc0_eebn_field{
    uint_io32_t		:2;
    uint_io32_t		u30EEB:30;
}stc_irc0_eebn_field_t;

typedef union un_irc0_eebn{
    uint_io32_t		u32Register;
    stc_irc0_eebn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_eebn_t;

/* EEB2 */
#define IRC0_EEB2	(IRC0.unEEB2.u32Register)  /*@rg@*/
#define IRC0_EEB2_EEBE	(IRC0.unEEB2.stcField.u7EEBE)  /*@bf@*/
#define IRC0_EEB2_EEBO	(IRC0.unEEB2.stcField.u7EEBO)  /*@bf@*/

typedef struct stc_irc0_eeb2_field{
    uint_io32_t		u7EEBE:7;
    uint_io32_t		:1;
    uint_io32_t		u7EEBO:7;
    uint_io32_t		:17;
}stc_irc0_eeb2_field_t;

typedef union un_irc0_eeb2{
    uint_io32_t		u32Register;
    stc_irc0_eeb2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_eeb2_t;


typedef struct stc_irc0{
    un_irc0_nmivas_t	unNMIVAS;	/* 0x00000000 */
    un_irc0_nmist_t	unNMIST;	/* 0x00000004 */
    un_irc0_irqvas_t	unIRQVAS;	/* 0x00000008 */
    un_irc0_irqst_t	unIRQST;	/* 0x0000000C */
    un_irc0_nmivan_t	unNMIVA0;	/* 0x00000010 */
    un_irc0_nmivan_t	unNMIVA1;	/* 0x00000014 */
    un_irc0_nmivan_t	unNMIVA2;	/* 0x00000018 */
    un_irc0_nmivan_t	unNMIVA3;	/* 0x0000001C */
    un_irc0_nmivan_t	unNMIVA4;	/* 0x00000020 */
    un_irc0_nmivan_t	unNMIVA5;	/* 0x00000024 */
    un_irc0_nmivan_t	unNMIVA6;	/* 0x00000028 */
    un_irc0_nmivan_t	unNMIVA7;	/* 0x0000002C */
    un_irc0_nmivan_t	unNMIVA8;	/* 0x00000030 */
    un_irc0_nmivan_t	unNMIVA9;	/* 0x00000034 */
    un_irc0_nmivan_t	unNMIVA10;	/* 0x00000038 */
    un_irc0_nmivan_t	unNMIVA11;	/* 0x0000003C */
    un_irc0_nmivan_t	unNMIVA12;	/* 0x00000040 */
    un_irc0_nmivan_t	unNMIVA13;	/* 0x00000044 */
    un_irc0_nmivan_t	unNMIVA14;	/* 0x00000048 */
    un_irc0_nmivan_t	unNMIVA15;	/* 0x0000004C */
    un_irc0_nmivan_t	unNMIVA16;	/* 0x00000050 */
    un_irc0_nmivan_t	unNMIVA17;	/* 0x00000054 */
    un_irc0_nmivan_t	unNMIVA18;	/* 0x00000058 */
    un_irc0_nmivan_t	unNMIVA19;	/* 0x0000005C */
    un_irc0_nmivan_t	unNMIVA20;	/* 0x00000060 */
    un_irc0_nmivan_t	unNMIVA21;	/* 0x00000064 */
    un_irc0_nmivan_t	unNMIVA22;	/* 0x00000068 */
    un_irc0_nmivan_t	unNMIVA23;	/* 0x0000006C */
    un_irc0_nmivan_t	unNMIVA24;	/* 0x00000070 */
    un_irc0_nmivan_t	unNMIVA25;	/* 0x00000074 */
    un_irc0_nmivan_t	unNMIVA26;	/* 0x00000078 */
    un_irc0_nmivan_t	unNMIVA27;	/* 0x0000007C */
    un_irc0_nmivan_t	unNMIVA28;	/* 0x00000080 */
    un_irc0_nmivan_t	unNMIVA29;	/* 0x00000084 */
    un_irc0_nmivan_t	unNMIVA30;	/* 0x00000088 */
    un_irc0_nmivan_t	unNMIVA31;	/* 0x0000008C */
    un_irc0_irqvan_t	unIRQVA0;	/* 0x00000090 */
    un_irc0_irqvan_t	unIRQVA1;	/* 0x00000094 */
    un_irc0_irqvan_t	unIRQVA2;	/* 0x00000098 */
    un_irc0_irqvan_t	unIRQVA3;	/* 0x0000009C */
    un_irc0_irqvan_t	unIRQVA4;	/* 0x000000A0 */
    un_irc0_irqvan_t	unIRQVA5;	/* 0x000000A4 */
    un_irc0_irqvan_t	unIRQVA6;	/* 0x000000A8 */
    un_irc0_irqvan_t	unIRQVA7;	/* 0x000000AC */
    un_irc0_irqvan_t	unIRQVA8;	/* 0x000000B0 */
    un_irc0_irqvan_t	unIRQVA9;	/* 0x000000B4 */
    un_irc0_irqvan_t	unIRQVA10;	/* 0x000000B8 */
    un_irc0_irqvan_t	unIRQVA11;	/* 0x000000BC */
    un_irc0_irqvan_t	unIRQVA12;	/* 0x000000C0 */
    un_irc0_irqvan_t	unIRQVA13;	/* 0x000000C4 */
    un_irc0_irqvan_t	unIRQVA14;	/* 0x000000C8 */
    un_irc0_irqvan_t	unIRQVA15;	/* 0x000000CC */
    un_irc0_irqvan_t	unIRQVA16;	/* 0x000000D0 */
    un_irc0_irqvan_t	unIRQVA17;	/* 0x000000D4 */
    un_irc0_irqvan_t	unIRQVA18;	/* 0x000000D8 */
    un_irc0_irqvan_t	unIRQVA19;	/* 0x000000DC */
    un_irc0_irqvan_t	unIRQVA20;	/* 0x000000E0 */
    un_irc0_irqvan_t	unIRQVA21;	/* 0x000000E4 */
    un_irc0_irqvan_t	unIRQVA22;	/* 0x000000E8 */
    un_irc0_irqvan_t	unIRQVA23;	/* 0x000000EC */
    un_irc0_irqvan_t	unIRQVA24;	/* 0x000000F0 */
    un_irc0_irqvan_t	unIRQVA25;	/* 0x000000F4 */
    un_irc0_irqvan_t	unIRQVA26;	/* 0x000000F8 */
    un_irc0_irqvan_t	unIRQVA27;	/* 0x000000FC */
    un_irc0_irqvan_t	unIRQVA28;	/* 0x00000100 */
    un_irc0_irqvan_t	unIRQVA29;	/* 0x00000104 */
    un_irc0_irqvan_t	unIRQVA30;	/* 0x00000108 */
    un_irc0_irqvan_t	unIRQVA31;	/* 0x0000010C */
    un_irc0_irqvan_t	unIRQVA32;	/* 0x00000110 */
    un_irc0_irqvan_t	unIRQVA33;	/* 0x00000114 */
    un_irc0_irqvan_t	unIRQVA34;	/* 0x00000118 */
    un_irc0_irqvan_t	unIRQVA35;	/* 0x0000011C */
    un_irc0_irqvan_t	unIRQVA36;	/* 0x00000120 */
    un_irc0_irqvan_t	unIRQVA37;	/* 0x00000124 */
    un_irc0_irqvan_t	unIRQVA38;	/* 0x00000128 */
    un_irc0_irqvan_t	unIRQVA39;	/* 0x0000012C */
    un_irc0_irqvan_t	unIRQVA40;	/* 0x00000130 */
    un_irc0_irqvan_t	unIRQVA41;	/* 0x00000134 */
    un_irc0_irqvan_t	unIRQVA42;	/* 0x00000138 */
    un_irc0_irqvan_t	unIRQVA43;	/* 0x0000013C */
    un_irc0_irqvan_t	unIRQVA44;	/* 0x00000140 */
    un_irc0_irqvan_t	unIRQVA45;	/* 0x00000144 */
    un_irc0_irqvan_t	unIRQVA46;	/* 0x00000148 */
    un_irc0_irqvan_t	unIRQVA47;	/* 0x0000014C */
    un_irc0_irqvan_t	unIRQVA48;	/* 0x00000150 */
    un_irc0_irqvan_t	unIRQVA49;	/* 0x00000154 */
    un_irc0_irqvan_t	unIRQVA50;	/* 0x00000158 */
    un_irc0_irqvan_t	unIRQVA51;	/* 0x0000015C */
    un_irc0_irqvan_t	unIRQVA52;	/* 0x00000160 */
    un_irc0_irqvan_t	unIRQVA53;	/* 0x00000164 */
    un_irc0_irqvan_t	unIRQVA54;	/* 0x00000168 */
    un_irc0_irqvan_t	unIRQVA55;	/* 0x0000016C */
    un_irc0_irqvan_t	unIRQVA56;	/* 0x00000170 */
    un_irc0_irqvan_t	unIRQVA57;	/* 0x00000174 */
    un_irc0_irqvan_t	unIRQVA58;	/* 0x00000178 */
    un_irc0_irqvan_t	unIRQVA59;	/* 0x0000017C */
    un_irc0_irqvan_t	unIRQVA60;	/* 0x00000180 */
    un_irc0_irqvan_t	unIRQVA61;	/* 0x00000184 */
    un_irc0_irqvan_t	unIRQVA62;	/* 0x00000188 */
    un_irc0_irqvan_t	unIRQVA63;	/* 0x0000018C */
    un_irc0_irqvan_t	unIRQVA64;	/* 0x00000190 */
    un_irc0_irqvan_t	unIRQVA65;	/* 0x00000194 */
    un_irc0_irqvan_t	unIRQVA66;	/* 0x00000198 */
    un_irc0_irqvan_t	unIRQVA67;	/* 0x0000019C */
    un_irc0_irqvan_t	unIRQVA68;	/* 0x000001A0 */
    un_irc0_irqvan_t	unIRQVA69;	/* 0x000001A4 */
    un_irc0_irqvan_t	unIRQVA70;	/* 0x000001A8 */
    un_irc0_irqvan_t	unIRQVA71;	/* 0x000001AC */
    un_irc0_irqvan_t	unIRQVA72;	/* 0x000001B0 */
    un_irc0_irqvan_t	unIRQVA73;	/* 0x000001B4 */
    un_irc0_irqvan_t	unIRQVA74;	/* 0x000001B8 */
    un_irc0_irqvan_t	unIRQVA75;	/* 0x000001BC */
    un_irc0_irqvan_t	unIRQVA76;	/* 0x000001C0 */
    un_irc0_irqvan_t	unIRQVA77;	/* 0x000001C4 */
    un_irc0_irqvan_t	unIRQVA78;	/* 0x000001C8 */
    un_irc0_irqvan_t	unIRQVA79;	/* 0x000001CC */
    un_irc0_irqvan_t	unIRQVA80;	/* 0x000001D0 */
    un_irc0_irqvan_t	unIRQVA81;	/* 0x000001D4 */
    un_irc0_irqvan_t	unIRQVA82;	/* 0x000001D8 */
    un_irc0_irqvan_t	unIRQVA83;	/* 0x000001DC */
    un_irc0_irqvan_t	unIRQVA84;	/* 0x000001E0 */
    un_irc0_irqvan_t	unIRQVA85;	/* 0x000001E4 */
    un_irc0_irqvan_t	unIRQVA86;	/* 0x000001E8 */
    un_irc0_irqvan_t	unIRQVA87;	/* 0x000001EC */
    un_irc0_irqvan_t	unIRQVA88;	/* 0x000001F0 */
    un_irc0_irqvan_t	unIRQVA89;	/* 0x000001F4 */
    un_irc0_irqvan_t	unIRQVA90;	/* 0x000001F8 */
    un_irc0_irqvan_t	unIRQVA91;	/* 0x000001FC */
    un_irc0_irqvan_t	unIRQVA92;	/* 0x00000200 */
    un_irc0_irqvan_t	unIRQVA93;	/* 0x00000204 */
    un_irc0_irqvan_t	unIRQVA94;	/* 0x00000208 */
    un_irc0_irqvan_t	unIRQVA95;	/* 0x0000020C */
    un_irc0_irqvan_t	unIRQVA96;	/* 0x00000210 */
    un_irc0_irqvan_t	unIRQVA97;	/* 0x00000214 */
    un_irc0_irqvan_t	unIRQVA98;	/* 0x00000218 */
    un_irc0_irqvan_t	unIRQVA99;	/* 0x0000021C */
    un_irc0_irqvan_t	unIRQVA100;	/* 0x00000220 */
    un_irc0_irqvan_t	unIRQVA101;	/* 0x00000224 */
    un_irc0_irqvan_t	unIRQVA102;	/* 0x00000228 */
    un_irc0_irqvan_t	unIRQVA103;	/* 0x0000022C */
    un_irc0_irqvan_t	unIRQVA104;	/* 0x00000230 */
    un_irc0_irqvan_t	unIRQVA105;	/* 0x00000234 */
    un_irc0_irqvan_t	unIRQVA106;	/* 0x00000238 */
    un_irc0_irqvan_t	unIRQVA107;	/* 0x0000023C */
    un_irc0_irqvan_t	unIRQVA108;	/* 0x00000240 */
    un_irc0_irqvan_t	unIRQVA109;	/* 0x00000244 */
    un_irc0_irqvan_t	unIRQVA110;	/* 0x00000248 */
    un_irc0_irqvan_t	unIRQVA111;	/* 0x0000024C */
    un_irc0_irqvan_t	unIRQVA112;	/* 0x00000250 */
    un_irc0_irqvan_t	unIRQVA113;	/* 0x00000254 */
    un_irc0_irqvan_t	unIRQVA114;	/* 0x00000258 */
    un_irc0_irqvan_t	unIRQVA115;	/* 0x0000025C */
    un_irc0_irqvan_t	unIRQVA116;	/* 0x00000260 */
    un_irc0_irqvan_t	unIRQVA117;	/* 0x00000264 */
    un_irc0_irqvan_t	unIRQVA118;	/* 0x00000268 */
    un_irc0_irqvan_t	unIRQVA119;	/* 0x0000026C */
    un_irc0_irqvan_t	unIRQVA120;	/* 0x00000270 */
    un_irc0_irqvan_t	unIRQVA121;	/* 0x00000274 */
    un_irc0_irqvan_t	unIRQVA122;	/* 0x00000278 */
    un_irc0_irqvan_t	unIRQVA123;	/* 0x0000027C */
    un_irc0_irqvan_t	unIRQVA124;	/* 0x00000280 */
    un_irc0_irqvan_t	unIRQVA125;	/* 0x00000284 */
    un_irc0_irqvan_t	unIRQVA126;	/* 0x00000288 */
    un_irc0_irqvan_t	unIRQVA127;	/* 0x0000028C */
    un_irc0_irqvan_t	unIRQVA128;	/* 0x00000290 */
    un_irc0_irqvan_t	unIRQVA129;	/* 0x00000294 */
    un_irc0_irqvan_t	unIRQVA130;	/* 0x00000298 */
    un_irc0_irqvan_t	unIRQVA131;	/* 0x0000029C */
    un_irc0_irqvan_t	unIRQVA132;	/* 0x000002A0 */
    un_irc0_irqvan_t	unIRQVA133;	/* 0x000002A4 */
    un_irc0_irqvan_t	unIRQVA134;	/* 0x000002A8 */
    un_irc0_irqvan_t	unIRQVA135;	/* 0x000002AC */
    un_irc0_irqvan_t	unIRQVA136;	/* 0x000002B0 */
    un_irc0_irqvan_t	unIRQVA137;	/* 0x000002B4 */
    un_irc0_irqvan_t	unIRQVA138;	/* 0x000002B8 */
    un_irc0_irqvan_t	unIRQVA139;	/* 0x000002BC */
    un_irc0_irqvan_t	unIRQVA140;	/* 0x000002C0 */
    un_irc0_irqvan_t	unIRQVA141;	/* 0x000002C4 */
    un_irc0_irqvan_t	unIRQVA142;	/* 0x000002C8 */
    un_irc0_irqvan_t	unIRQVA143;	/* 0x000002CC */
    un_irc0_irqvan_t	unIRQVA144;	/* 0x000002D0 */
    un_irc0_irqvan_t	unIRQVA145;	/* 0x000002D4 */
    un_irc0_irqvan_t	unIRQVA146;	/* 0x000002D8 */
    un_irc0_irqvan_t	unIRQVA147;	/* 0x000002DC */
    un_irc0_irqvan_t	unIRQVA148;	/* 0x000002E0 */
    un_irc0_irqvan_t	unIRQVA149;	/* 0x000002E4 */
    un_irc0_irqvan_t	unIRQVA150;	/* 0x000002E8 */
    un_irc0_irqvan_t	unIRQVA151;	/* 0x000002EC */
    un_irc0_irqvan_t	unIRQVA152;	/* 0x000002F0 */
    un_irc0_irqvan_t	unIRQVA153;	/* 0x000002F4 */
    un_irc0_irqvan_t	unIRQVA154;	/* 0x000002F8 */
    un_irc0_irqvan_t	unIRQVA155;	/* 0x000002FC */
    un_irc0_irqvan_t	unIRQVA156;	/* 0x00000300 */
    un_irc0_irqvan_t	unIRQVA157;	/* 0x00000304 */
    un_irc0_irqvan_t	unIRQVA158;	/* 0x00000308 */
    un_irc0_irqvan_t	unIRQVA159;	/* 0x0000030C */
    un_irc0_irqvan_t	unIRQVA160;	/* 0x00000310 */
    un_irc0_irqvan_t	unIRQVA161;	/* 0x00000314 */
    un_irc0_irqvan_t	unIRQVA162;	/* 0x00000318 */
    un_irc0_irqvan_t	unIRQVA163;	/* 0x0000031C */
    un_irc0_irqvan_t	unIRQVA164;	/* 0x00000320 */
    un_irc0_irqvan_t	unIRQVA165;	/* 0x00000324 */
    un_irc0_irqvan_t	unIRQVA166;	/* 0x00000328 */
    un_irc0_irqvan_t	unIRQVA167;	/* 0x0000032C */
    un_irc0_irqvan_t	unIRQVA168;	/* 0x00000330 */
    un_irc0_irqvan_t	unIRQVA169;	/* 0x00000334 */
    un_irc0_irqvan_t	unIRQVA170;	/* 0x00000338 */
    un_irc0_irqvan_t	unIRQVA171;	/* 0x0000033C */
    un_irc0_irqvan_t	unIRQVA172;	/* 0x00000340 */
    un_irc0_irqvan_t	unIRQVA173;	/* 0x00000344 */
    un_irc0_irqvan_t	unIRQVA174;	/* 0x00000348 */
    un_irc0_irqvan_t	unIRQVA175;	/* 0x0000034C */
    un_irc0_irqvan_t	unIRQVA176;	/* 0x00000350 */
    un_irc0_irqvan_t	unIRQVA177;	/* 0x00000354 */
    un_irc0_irqvan_t	unIRQVA178;	/* 0x00000358 */
    un_irc0_irqvan_t	unIRQVA179;	/* 0x0000035C */
    un_irc0_irqvan_t	unIRQVA180;	/* 0x00000360 */
    un_irc0_irqvan_t	unIRQVA181;	/* 0x00000364 */
    un_irc0_irqvan_t	unIRQVA182;	/* 0x00000368 */
    un_irc0_irqvan_t	unIRQVA183;	/* 0x0000036C */
    un_irc0_irqvan_t	unIRQVA184;	/* 0x00000370 */
    un_irc0_irqvan_t	unIRQVA185;	/* 0x00000374 */
    un_irc0_irqvan_t	unIRQVA186;	/* 0x00000378 */
    un_irc0_irqvan_t	unIRQVA187;	/* 0x0000037C */
    un_irc0_irqvan_t	unIRQVA188;	/* 0x00000380 */
    un_irc0_irqvan_t	unIRQVA189;	/* 0x00000384 */
    un_irc0_irqvan_t	unIRQVA190;	/* 0x00000388 */
    un_irc0_irqvan_t	unIRQVA191;	/* 0x0000038C */
    un_irc0_irqvan_t	unIRQVA192;	/* 0x00000390 */
    un_irc0_irqvan_t	unIRQVA193;	/* 0x00000394 */
    un_irc0_irqvan_t	unIRQVA194;	/* 0x00000398 */
    un_irc0_irqvan_t	unIRQVA195;	/* 0x0000039C */
    un_irc0_irqvan_t	unIRQVA196;	/* 0x000003A0 */
    un_irc0_irqvan_t	unIRQVA197;	/* 0x000003A4 */
    un_irc0_irqvan_t	unIRQVA198;	/* 0x000003A8 */
    un_irc0_irqvan_t	unIRQVA199;	/* 0x000003AC */
    un_irc0_irqvan_t	unIRQVA200;	/* 0x000003B0 */
    un_irc0_irqvan_t	unIRQVA201;	/* 0x000003B4 */
    un_irc0_irqvan_t	unIRQVA202;	/* 0x000003B8 */
    un_irc0_irqvan_t	unIRQVA203;	/* 0x000003BC */
    un_irc0_irqvan_t	unIRQVA204;	/* 0x000003C0 */
    un_irc0_irqvan_t	unIRQVA205;	/* 0x000003C4 */
    un_irc0_irqvan_t	unIRQVA206;	/* 0x000003C8 */
    un_irc0_irqvan_t	unIRQVA207;	/* 0x000003CC */
    un_irc0_irqvan_t	unIRQVA208;	/* 0x000003D0 */
    un_irc0_irqvan_t	unIRQVA209;	/* 0x000003D4 */
    un_irc0_irqvan_t	unIRQVA210;	/* 0x000003D8 */
    un_irc0_irqvan_t	unIRQVA211;	/* 0x000003DC */
    un_irc0_irqvan_t	unIRQVA212;	/* 0x000003E0 */
    un_irc0_irqvan_t	unIRQVA213;	/* 0x000003E4 */
    un_irc0_irqvan_t	unIRQVA214;	/* 0x000003E8 */
    un_irc0_irqvan_t	unIRQVA215;	/* 0x000003EC */
    un_irc0_irqvan_t	unIRQVA216;	/* 0x000003F0 */
    un_irc0_irqvan_t	unIRQVA217;	/* 0x000003F4 */
    un_irc0_irqvan_t	unIRQVA218;	/* 0x000003F8 */
    un_irc0_irqvan_t	unIRQVA219;	/* 0x000003FC */
    un_irc0_irqvan_t	unIRQVA220;	/* 0x00000400 */
    un_irc0_irqvan_t	unIRQVA221;	/* 0x00000404 */
    un_irc0_irqvan_t	unIRQVA222;	/* 0x00000408 */
    un_irc0_irqvan_t	unIRQVA223;	/* 0x0000040C */
    un_irc0_irqvan_t	unIRQVA224;	/* 0x00000410 */
    un_irc0_irqvan_t	unIRQVA225;	/* 0x00000414 */
    un_irc0_irqvan_t	unIRQVA226;	/* 0x00000418 */
    un_irc0_irqvan_t	unIRQVA227;	/* 0x0000041C */
    un_irc0_irqvan_t	unIRQVA228;	/* 0x00000420 */
    un_irc0_irqvan_t	unIRQVA229;	/* 0x00000424 */
    un_irc0_irqvan_t	unIRQVA230;	/* 0x00000428 */
    un_irc0_irqvan_t	unIRQVA231;	/* 0x0000042C */
    un_irc0_irqvan_t	unIRQVA232;	/* 0x00000430 */
    un_irc0_irqvan_t	unIRQVA233;	/* 0x00000434 */
    un_irc0_irqvan_t	unIRQVA234;	/* 0x00000438 */
    un_irc0_irqvan_t	unIRQVA235;	/* 0x0000043C */
    un_irc0_irqvan_t	unIRQVA236;	/* 0x00000440 */
    un_irc0_irqvan_t	unIRQVA237;	/* 0x00000444 */
    un_irc0_irqvan_t	unIRQVA238;	/* 0x00000448 */
    un_irc0_irqvan_t	unIRQVA239;	/* 0x0000044C */
    un_irc0_irqvan_t	unIRQVA240;	/* 0x00000450 */
    un_irc0_irqvan_t	unIRQVA241;	/* 0x00000454 */
    un_irc0_irqvan_t	unIRQVA242;	/* 0x00000458 */
    un_irc0_irqvan_t	unIRQVA243;	/* 0x0000045C */
    un_irc0_irqvan_t	unIRQVA244;	/* 0x00000460 */
    un_irc0_irqvan_t	unIRQVA245;	/* 0x00000464 */
    un_irc0_irqvan_t	unIRQVA246;	/* 0x00000468 */
    un_irc0_irqvan_t	unIRQVA247;	/* 0x0000046C */
    un_irc0_irqvan_t	unIRQVA248;	/* 0x00000470 */
    un_irc0_irqvan_t	unIRQVA249;	/* 0x00000474 */
    un_irc0_irqvan_t	unIRQVA250;	/* 0x00000478 */
    un_irc0_irqvan_t	unIRQVA251;	/* 0x0000047C */
    un_irc0_irqvan_t	unIRQVA252;	/* 0x00000480 */
    un_irc0_irqvan_t	unIRQVA253;	/* 0x00000484 */
    un_irc0_irqvan_t	unIRQVA254;	/* 0x00000488 */
    un_irc0_irqvan_t	unIRQVA255;	/* 0x0000048C */
    un_irc0_irqvan_t	unIRQVA256;	/* 0x00000490 */
    un_irc0_irqvan_t	unIRQVA257;	/* 0x00000494 */
    un_irc0_irqvan_t	unIRQVA258;	/* 0x00000498 */
    un_irc0_irqvan_t	unIRQVA259;	/* 0x0000049C */
    un_irc0_irqvan_t	unIRQVA260;	/* 0x000004A0 */
    un_irc0_irqvan_t	unIRQVA261;	/* 0x000004A4 */
    un_irc0_irqvan_t	unIRQVA262;	/* 0x000004A8 */
    un_irc0_irqvan_t	unIRQVA263;	/* 0x000004AC */
    un_irc0_irqvan_t	unIRQVA264;	/* 0x000004B0 */
    un_irc0_irqvan_t	unIRQVA265;	/* 0x000004B4 */
    un_irc0_irqvan_t	unIRQVA266;	/* 0x000004B8 */
    un_irc0_irqvan_t	unIRQVA267;	/* 0x000004BC */
    un_irc0_irqvan_t	unIRQVA268;	/* 0x000004C0 */
    un_irc0_irqvan_t	unIRQVA269;	/* 0x000004C4 */
    un_irc0_irqvan_t	unIRQVA270;	/* 0x000004C8 */
    un_irc0_irqvan_t	unIRQVA271;	/* 0x000004CC */
    un_irc0_irqvan_t	unIRQVA272;	/* 0x000004D0 */
    un_irc0_irqvan_t	unIRQVA273;	/* 0x000004D4 */
    un_irc0_irqvan_t	unIRQVA274;	/* 0x000004D8 */
    un_irc0_irqvan_t	unIRQVA275;	/* 0x000004DC */
    un_irc0_irqvan_t	unIRQVA276;	/* 0x000004E0 */
    un_irc0_irqvan_t	unIRQVA277;	/* 0x000004E4 */
    un_irc0_irqvan_t	unIRQVA278;	/* 0x000004E8 */
    un_irc0_irqvan_t	unIRQVA279;	/* 0x000004EC */
    un_irc0_irqvan_t	unIRQVA280;	/* 0x000004F0 */
    un_irc0_irqvan_t	unIRQVA281;	/* 0x000004F4 */
    un_irc0_irqvan_t	unIRQVA282;	/* 0x000004F8 */
    un_irc0_irqvan_t	unIRQVA283;	/* 0x000004FC */
    un_irc0_irqvan_t	unIRQVA284;	/* 0x00000500 */
    un_irc0_irqvan_t	unIRQVA285;	/* 0x00000504 */
    un_irc0_irqvan_t	unIRQVA286;	/* 0x00000508 */
    un_irc0_irqvan_t	unIRQVA287;	/* 0x0000050C */
    un_irc0_irqvan_t	unIRQVA288;	/* 0x00000510 */
    un_irc0_irqvan_t	unIRQVA289;	/* 0x00000514 */
    un_irc0_irqvan_t	unIRQVA290;	/* 0x00000518 */
    un_irc0_irqvan_t	unIRQVA291;	/* 0x0000051C */
    un_irc0_irqvan_t	unIRQVA292;	/* 0x00000520 */
    un_irc0_irqvan_t	unIRQVA293;	/* 0x00000524 */
    un_irc0_irqvan_t	unIRQVA294;	/* 0x00000528 */
    un_irc0_irqvan_t	unIRQVA295;	/* 0x0000052C */
    un_irc0_irqvan_t	unIRQVA296;	/* 0x00000530 */
    un_irc0_irqvan_t	unIRQVA297;	/* 0x00000534 */
    un_irc0_irqvan_t	unIRQVA298;	/* 0x00000538 */
    un_irc0_irqvan_t	unIRQVA299;	/* 0x0000053C */
    un_irc0_irqvan_t	unIRQVA300;	/* 0x00000540 */
    un_irc0_irqvan_t	unIRQVA301;	/* 0x00000544 */
    un_irc0_irqvan_t	unIRQVA302;	/* 0x00000548 */
    un_irc0_irqvan_t	unIRQVA303;	/* 0x0000054C */
    un_irc0_irqvan_t	unIRQVA304;	/* 0x00000550 */
    un_irc0_irqvan_t	unIRQVA305;	/* 0x00000554 */
    un_irc0_irqvan_t	unIRQVA306;	/* 0x00000558 */
    un_irc0_irqvan_t	unIRQVA307;	/* 0x0000055C */
    un_irc0_irqvan_t	unIRQVA308;	/* 0x00000560 */
    un_irc0_irqvan_t	unIRQVA309;	/* 0x00000564 */
    un_irc0_irqvan_t	unIRQVA310;	/* 0x00000568 */
    un_irc0_irqvan_t	unIRQVA311;	/* 0x0000056C */
    un_irc0_irqvan_t	unIRQVA312;	/* 0x00000570 */
    un_irc0_irqvan_t	unIRQVA313;	/* 0x00000574 */
    un_irc0_irqvan_t	unIRQVA314;	/* 0x00000578 */
    un_irc0_irqvan_t	unIRQVA315;	/* 0x0000057C */
    un_irc0_irqvan_t	unIRQVA316;	/* 0x00000580 */
    un_irc0_irqvan_t	unIRQVA317;	/* 0x00000584 */
    un_irc0_irqvan_t	unIRQVA318;	/* 0x00000588 */
    un_irc0_irqvan_t	unIRQVA319;	/* 0x0000058C */
    un_irc0_irqvan_t	unIRQVA320;	/* 0x00000590 */
    un_irc0_irqvan_t	unIRQVA321;	/* 0x00000594 */
    un_irc0_irqvan_t	unIRQVA322;	/* 0x00000598 */
    un_irc0_irqvan_t	unIRQVA323;	/* 0x0000059C */
    un_irc0_irqvan_t	unIRQVA324;	/* 0x000005A0 */
    un_irc0_irqvan_t	unIRQVA325;	/* 0x000005A4 */
    un_irc0_irqvan_t	unIRQVA326;	/* 0x000005A8 */
    un_irc0_irqvan_t	unIRQVA327;	/* 0x000005AC */
    un_irc0_irqvan_t	unIRQVA328;	/* 0x000005B0 */
    un_irc0_irqvan_t	unIRQVA329;	/* 0x000005B4 */
    un_irc0_irqvan_t	unIRQVA330;	/* 0x000005B8 */
    un_irc0_irqvan_t	unIRQVA331;	/* 0x000005BC */
    un_irc0_irqvan_t	unIRQVA332;	/* 0x000005C0 */
    un_irc0_irqvan_t	unIRQVA333;	/* 0x000005C4 */
    un_irc0_irqvan_t	unIRQVA334;	/* 0x000005C8 */
    un_irc0_irqvan_t	unIRQVA335;	/* 0x000005CC */
    un_irc0_irqvan_t	unIRQVA336;	/* 0x000005D0 */
    un_irc0_irqvan_t	unIRQVA337;	/* 0x000005D4 */
    un_irc0_irqvan_t	unIRQVA338;	/* 0x000005D8 */
    un_irc0_irqvan_t	unIRQVA339;	/* 0x000005DC */
    un_irc0_irqvan_t	unIRQVA340;	/* 0x000005E0 */
    un_irc0_irqvan_t	unIRQVA341;	/* 0x000005E4 */
    un_irc0_irqvan_t	unIRQVA342;	/* 0x000005E8 */
    un_irc0_irqvan_t	unIRQVA343;	/* 0x000005EC */
    un_irc0_irqvan_t	unIRQVA344;	/* 0x000005F0 */
    un_irc0_irqvan_t	unIRQVA345;	/* 0x000005F4 */
    un_irc0_irqvan_t	unIRQVA346;	/* 0x000005F8 */
    un_irc0_irqvan_t	unIRQVA347;	/* 0x000005FC */
    un_irc0_irqvan_t	unIRQVA348;	/* 0x00000600 */
    un_irc0_irqvan_t	unIRQVA349;	/* 0x00000604 */
    un_irc0_irqvan_t	unIRQVA350;	/* 0x00000608 */
    un_irc0_irqvan_t	unIRQVA351;	/* 0x0000060C */
    un_irc0_irqvan_t	unIRQVA352;	/* 0x00000610 */
    un_irc0_irqvan_t	unIRQVA353;	/* 0x00000614 */
    un_irc0_irqvan_t	unIRQVA354;	/* 0x00000618 */
    un_irc0_irqvan_t	unIRQVA355;	/* 0x0000061C */
    un_irc0_irqvan_t	unIRQVA356;	/* 0x00000620 */
    un_irc0_irqvan_t	unIRQVA357;	/* 0x00000624 */
    un_irc0_irqvan_t	unIRQVA358;	/* 0x00000628 */
    un_irc0_irqvan_t	unIRQVA359;	/* 0x0000062C */
    un_irc0_irqvan_t	unIRQVA360;	/* 0x00000630 */
    un_irc0_irqvan_t	unIRQVA361;	/* 0x00000634 */
    un_irc0_irqvan_t	unIRQVA362;	/* 0x00000638 */
    un_irc0_irqvan_t	unIRQVA363;	/* 0x0000063C */
    un_irc0_irqvan_t	unIRQVA364;	/* 0x00000640 */
    un_irc0_irqvan_t	unIRQVA365;	/* 0x00000644 */
    un_irc0_irqvan_t	unIRQVA366;	/* 0x00000648 */
    un_irc0_irqvan_t	unIRQVA367;	/* 0x0000064C */
    un_irc0_irqvan_t	unIRQVA368;	/* 0x00000650 */
    un_irc0_irqvan_t	unIRQVA369;	/* 0x00000654 */
    un_irc0_irqvan_t	unIRQVA370;	/* 0x00000658 */
    un_irc0_irqvan_t	unIRQVA371;	/* 0x0000065C */
    un_irc0_irqvan_t	unIRQVA372;	/* 0x00000660 */
    un_irc0_irqvan_t	unIRQVA373;	/* 0x00000664 */
    un_irc0_irqvan_t	unIRQVA374;	/* 0x00000668 */
    un_irc0_irqvan_t	unIRQVA375;	/* 0x0000066C */
    un_irc0_irqvan_t	unIRQVA376;	/* 0x00000670 */
    un_irc0_irqvan_t	unIRQVA377;	/* 0x00000674 */
    un_irc0_irqvan_t	unIRQVA378;	/* 0x00000678 */
    un_irc0_irqvan_t	unIRQVA379;	/* 0x0000067C */
    un_irc0_irqvan_t	unIRQVA380;	/* 0x00000680 */
    un_irc0_irqvan_t	unIRQVA381;	/* 0x00000684 */
    un_irc0_irqvan_t	unIRQVA382;	/* 0x00000688 */
    un_irc0_irqvan_t	unIRQVA383;	/* 0x0000068C */
    un_irc0_irqvan_t	unIRQVA384;	/* 0x00000690 */
    un_irc0_irqvan_t	unIRQVA385;	/* 0x00000694 */
    un_irc0_irqvan_t	unIRQVA386;	/* 0x00000698 */
    un_irc0_irqvan_t	unIRQVA387;	/* 0x0000069C */
    un_irc0_irqvan_t	unIRQVA388;	/* 0x000006A0 */
    un_irc0_irqvan_t	unIRQVA389;	/* 0x000006A4 */
    un_irc0_irqvan_t	unIRQVA390;	/* 0x000006A8 */
    un_irc0_irqvan_t	unIRQVA391;	/* 0x000006AC */
    un_irc0_irqvan_t	unIRQVA392;	/* 0x000006B0 */
    un_irc0_irqvan_t	unIRQVA393;	/* 0x000006B4 */
    un_irc0_irqvan_t	unIRQVA394;	/* 0x000006B8 */
    un_irc0_irqvan_t	unIRQVA395;	/* 0x000006BC */
    un_irc0_irqvan_t	unIRQVA396;	/* 0x000006C0 */
    un_irc0_irqvan_t	unIRQVA397;	/* 0x000006C4 */
    un_irc0_irqvan_t	unIRQVA398;	/* 0x000006C8 */
    un_irc0_irqvan_t	unIRQVA399;	/* 0x000006CC */
    un_irc0_irqvan_t	unIRQVA400;	/* 0x000006D0 */
    un_irc0_irqvan_t	unIRQVA401;	/* 0x000006D4 */
    un_irc0_irqvan_t	unIRQVA402;	/* 0x000006D8 */
    un_irc0_irqvan_t	unIRQVA403;	/* 0x000006DC */
    un_irc0_irqvan_t	unIRQVA404;	/* 0x000006E0 */
    un_irc0_irqvan_t	unIRQVA405;	/* 0x000006E4 */
    un_irc0_irqvan_t	unIRQVA406;	/* 0x000006E8 */
    un_irc0_irqvan_t	unIRQVA407;	/* 0x000006EC */
    un_irc0_irqvan_t	unIRQVA408;	/* 0x000006F0 */
    un_irc0_irqvan_t	unIRQVA409;	/* 0x000006F4 */
    un_irc0_irqvan_t	unIRQVA410;	/* 0x000006F8 */
    un_irc0_irqvan_t	unIRQVA411;	/* 0x000006FC */
    un_irc0_irqvan_t	unIRQVA412;	/* 0x00000700 */
    un_irc0_irqvan_t	unIRQVA413;	/* 0x00000704 */
    un_irc0_irqvan_t	unIRQVA414;	/* 0x00000708 */
    un_irc0_irqvan_t	unIRQVA415;	/* 0x0000070C */
    un_irc0_irqvan_t	unIRQVA416;	/* 0x00000710 */
    un_irc0_irqvan_t	unIRQVA417;	/* 0x00000714 */
    un_irc0_irqvan_t	unIRQVA418;	/* 0x00000718 */
    un_irc0_irqvan_t	unIRQVA419;	/* 0x0000071C */
    un_irc0_irqvan_t	unIRQVA420;	/* 0x00000720 */
    un_irc0_irqvan_t	unIRQVA421;	/* 0x00000724 */
    un_irc0_irqvan_t	unIRQVA422;	/* 0x00000728 */
    un_irc0_irqvan_t	unIRQVA423;	/* 0x0000072C */
    un_irc0_irqvan_t	unIRQVA424;	/* 0x00000730 */
    un_irc0_irqvan_t	unIRQVA425;	/* 0x00000734 */
    un_irc0_irqvan_t	unIRQVA426;	/* 0x00000738 */
    un_irc0_irqvan_t	unIRQVA427;	/* 0x0000073C */
    un_irc0_irqvan_t	unIRQVA428;	/* 0x00000740 */
    un_irc0_irqvan_t	unIRQVA429;	/* 0x00000744 */
    un_irc0_irqvan_t	unIRQVA430;	/* 0x00000748 */
    un_irc0_irqvan_t	unIRQVA431;	/* 0x0000074C */
    un_irc0_irqvan_t	unIRQVA432;	/* 0x00000750 */
    un_irc0_irqvan_t	unIRQVA433;	/* 0x00000754 */
    un_irc0_irqvan_t	unIRQVA434;	/* 0x00000758 */
    un_irc0_irqvan_t	unIRQVA435;	/* 0x0000075C */
    un_irc0_irqvan_t	unIRQVA436;	/* 0x00000760 */
    un_irc0_irqvan_t	unIRQVA437;	/* 0x00000764 */
    un_irc0_irqvan_t	unIRQVA438;	/* 0x00000768 */
    un_irc0_irqvan_t	unIRQVA439;	/* 0x0000076C */
    un_irc0_irqvan_t	unIRQVA440;	/* 0x00000770 */
    un_irc0_irqvan_t	unIRQVA441;	/* 0x00000774 */
    un_irc0_irqvan_t	unIRQVA442;	/* 0x00000778 */
    un_irc0_irqvan_t	unIRQVA443;	/* 0x0000077C */
    un_irc0_irqvan_t	unIRQVA444;	/* 0x00000780 */
    un_irc0_irqvan_t	unIRQVA445;	/* 0x00000784 */
    un_irc0_irqvan_t	unIRQVA446;	/* 0x00000788 */
    un_irc0_irqvan_t	unIRQVA447;	/* 0x0000078C */
    un_irc0_irqvan_t	unIRQVA448;	/* 0x00000790 */
    un_irc0_irqvan_t	unIRQVA449;	/* 0x00000794 */
    un_irc0_irqvan_t	unIRQVA450;	/* 0x00000798 */
    un_irc0_irqvan_t	unIRQVA451;	/* 0x0000079C */
    un_irc0_irqvan_t	unIRQVA452;	/* 0x000007A0 */
    un_irc0_irqvan_t	unIRQVA453;	/* 0x000007A4 */
    un_irc0_irqvan_t	unIRQVA454;	/* 0x000007A8 */
    un_irc0_irqvan_t	unIRQVA455;	/* 0x000007AC */
    un_irc0_irqvan_t	unIRQVA456;	/* 0x000007B0 */
    un_irc0_irqvan_t	unIRQVA457;	/* 0x000007B4 */
    un_irc0_irqvan_t	unIRQVA458;	/* 0x000007B8 */
    un_irc0_irqvan_t	unIRQVA459;	/* 0x000007BC */
    un_irc0_irqvan_t	unIRQVA460;	/* 0x000007C0 */
    un_irc0_irqvan_t	unIRQVA461;	/* 0x000007C4 */
    un_irc0_irqvan_t	unIRQVA462;	/* 0x000007C8 */
    un_irc0_irqvan_t	unIRQVA463;	/* 0x000007CC */
    un_irc0_irqvan_t	unIRQVA464;	/* 0x000007D0 */
    un_irc0_irqvan_t	unIRQVA465;	/* 0x000007D4 */
    un_irc0_irqvan_t	unIRQVA466;	/* 0x000007D8 */
    un_irc0_irqvan_t	unIRQVA467;	/* 0x000007DC */
    un_irc0_irqvan_t	unIRQVA468;	/* 0x000007E0 */
    un_irc0_irqvan_t	unIRQVA469;	/* 0x000007E4 */
    un_irc0_irqvan_t	unIRQVA470;	/* 0x000007E8 */
    un_irc0_irqvan_t	unIRQVA471;	/* 0x000007EC */
    un_irc0_irqvan_t	unIRQVA472;	/* 0x000007F0 */
    un_irc0_irqvan_t	unIRQVA473;	/* 0x000007F4 */
    un_irc0_irqvan_t	unIRQVA474;	/* 0x000007F8 */
    un_irc0_irqvan_t	unIRQVA475;	/* 0x000007FC */
    un_irc0_irqvan_t	unIRQVA476;	/* 0x00000800 */
    un_irc0_irqvan_t	unIRQVA477;	/* 0x00000804 */
    un_irc0_irqvan_t	unIRQVA478;	/* 0x00000808 */
    un_irc0_irqvan_t	unIRQVA479;	/* 0x0000080C */
    un_irc0_irqvan_t	unIRQVA480;	/* 0x00000810 */
    un_irc0_irqvan_t	unIRQVA481;	/* 0x00000814 */
    un_irc0_irqvan_t	unIRQVA482;	/* 0x00000818 */
    un_irc0_irqvan_t	unIRQVA483;	/* 0x0000081C */
    un_irc0_irqvan_t	unIRQVA484;	/* 0x00000820 */
    un_irc0_irqvan_t	unIRQVA485;	/* 0x00000824 */
    un_irc0_irqvan_t	unIRQVA486;	/* 0x00000828 */
    un_irc0_irqvan_t	unIRQVA487;	/* 0x0000082C */
    un_irc0_irqvan_t	unIRQVA488;	/* 0x00000830 */
    un_irc0_irqvan_t	unIRQVA489;	/* 0x00000834 */
    un_irc0_irqvan_t	unIRQVA490;	/* 0x00000838 */
    un_irc0_irqvan_t	unIRQVA491;	/* 0x0000083C */
    un_irc0_irqvan_t	unIRQVA492;	/* 0x00000840 */
    un_irc0_irqvan_t	unIRQVA493;	/* 0x00000844 */
    un_irc0_irqvan_t	unIRQVA494;	/* 0x00000848 */
    un_irc0_irqvan_t	unIRQVA495;	/* 0x0000084C */
    un_irc0_irqvan_t	unIRQVA496;	/* 0x00000850 */
    un_irc0_irqvan_t	unIRQVA497;	/* 0x00000854 */
    un_irc0_irqvan_t	unIRQVA498;	/* 0x00000858 */
    un_irc0_irqvan_t	unIRQVA499;	/* 0x0000085C */
    un_irc0_irqvan_t	unIRQVA500;	/* 0x00000860 */
    un_irc0_irqvan_t	unIRQVA501;	/* 0x00000864 */
    un_irc0_irqvan_t	unIRQVA502;	/* 0x00000868 */
    un_irc0_irqvan_t	unIRQVA503;	/* 0x0000086C */
    un_irc0_irqvan_t	unIRQVA504;	/* 0x00000870 */
    un_irc0_irqvan_t	unIRQVA505;	/* 0x00000874 */
    un_irc0_irqvan_t	unIRQVA506;	/* 0x00000878 */
    un_irc0_irqvan_t	unIRQVA507;	/* 0x0000087C */
    un_irc0_irqvan_t	unIRQVA508;	/* 0x00000880 */
    un_irc0_irqvan_t	unIRQVA509;	/* 0x00000884 */
    un_irc0_irqvan_t	unIRQVA510;	/* 0x00000888 */
    un_irc0_irqvan_t	unIRQVA511;	/* 0x0000088C */
    un_irc0_nmipl0_t	unNMIPL0;	/* 0x00000890 */
    un_irc0_nmipl1_t	unNMIPL1;	/* 0x00000894 */
    un_irc0_nmipl2_t	unNMIPL2;	/* 0x00000898 */
    un_irc0_nmipl3_t	unNMIPL3;	/* 0x0000089C */
    un_irc0_nmipl4_t	unNMIPL4;	/* 0x000008A0 */
    un_irc0_nmipl5_t	unNMIPL5;	/* 0x000008A4 */
    un_irc0_nmipl6_t	unNMIPL6;	/* 0x000008A8 */
    un_irc0_nmipl7_t	unNMIPL7;	/* 0x000008AC */
    un_irc0_irqpl0_t	unIRQPL0;	/* 0x000008B0 */
    un_irc0_irqpl1_t	unIRQPL1;	/* 0x000008B4 */
    un_irc0_irqpl2_t	unIRQPL2;	/* 0x000008B8 */
    un_irc0_irqpl3_t	unIRQPL3;	/* 0x000008BC */
    un_irc0_irqpl4_t	unIRQPL4;	/* 0x000008C0 */
    un_irc0_irqpl5_t	unIRQPL5;	/* 0x000008C4 */
    un_irc0_irqpl6_t	unIRQPL6;	/* 0x000008C8 */
    un_irc0_irqpl7_t	unIRQPL7;	/* 0x000008CC */
    un_irc0_irqpl8_t	unIRQPL8;	/* 0x000008D0 */
    un_irc0_irqpl9_t	unIRQPL9;	/* 0x000008D4 */
    un_irc0_irqpl10_t	unIRQPL10;	/* 0x000008D8 */
    un_irc0_irqpl11_t	unIRQPL11;	/* 0x000008DC */
    un_irc0_irqpl12_t	unIRQPL12;	/* 0x000008E0 */
    un_irc0_irqpl13_t	unIRQPL13;	/* 0x000008E4 */
    un_irc0_irqpl14_t	unIRQPL14;	/* 0x000008E8 */
    un_irc0_irqpl15_t	unIRQPL15;	/* 0x000008EC */
    un_irc0_irqpl16_t	unIRQPL16;	/* 0x000008F0 */
    un_irc0_irqpl17_t	unIRQPL17;	/* 0x000008F4 */
    un_irc0_irqpl18_t	unIRQPL18;	/* 0x000008F8 */
    un_irc0_irqpl19_t	unIRQPL19;	/* 0x000008FC */
    un_irc0_irqpl20_t	unIRQPL20;	/* 0x00000900 */
    un_irc0_irqpl21_t	unIRQPL21;	/* 0x00000904 */
    un_irc0_irqpl22_t	unIRQPL22;	/* 0x00000908 */
    un_irc0_irqpl23_t	unIRQPL23;	/* 0x0000090C */
    un_irc0_irqpl24_t	unIRQPL24;	/* 0x00000910 */
    un_irc0_irqpl25_t	unIRQPL25;	/* 0x00000914 */
    un_irc0_irqpl26_t	unIRQPL26;	/* 0x00000918 */
    un_irc0_irqpl27_t	unIRQPL27;	/* 0x0000091C */
    un_irc0_irqpl28_t	unIRQPL28;	/* 0x00000920 */
    un_irc0_irqpl29_t	unIRQPL29;	/* 0x00000924 */
    un_irc0_irqpl30_t	unIRQPL30;	/* 0x00000928 */
    un_irc0_irqpl31_t	unIRQPL31;	/* 0x0000092C */
    un_irc0_irqpl32_t	unIRQPL32;	/* 0x00000930 */
    un_irc0_irqpl33_t	unIRQPL33;	/* 0x00000934 */
    un_irc0_irqpl34_t	unIRQPL34;	/* 0x00000938 */
    un_irc0_irqpl35_t	unIRQPL35;	/* 0x0000093C */
    un_irc0_irqpl36_t	unIRQPL36;	/* 0x00000940 */
    un_irc0_irqpl37_t	unIRQPL37;	/* 0x00000944 */
    un_irc0_irqpl38_t	unIRQPL38;	/* 0x00000948 */
    un_irc0_irqpl39_t	unIRQPL39;	/* 0x0000094C */
    un_irc0_irqpl40_t	unIRQPL40;	/* 0x00000950 */
    un_irc0_irqpl41_t	unIRQPL41;	/* 0x00000954 */
    un_irc0_irqpl42_t	unIRQPL42;	/* 0x00000958 */
    un_irc0_irqpl43_t	unIRQPL43;	/* 0x0000095C */
    un_irc0_irqpl44_t	unIRQPL44;	/* 0x00000960 */
    un_irc0_irqpl45_t	unIRQPL45;	/* 0x00000964 */
    un_irc0_irqpl46_t	unIRQPL46;	/* 0x00000968 */
    un_irc0_irqpl47_t	unIRQPL47;	/* 0x0000096C */
    un_irc0_irqpl48_t	unIRQPL48;	/* 0x00000970 */
    un_irc0_irqpl49_t	unIRQPL49;	/* 0x00000974 */
    un_irc0_irqpl50_t	unIRQPL50;	/* 0x00000978 */
    un_irc0_irqpl51_t	unIRQPL51;	/* 0x0000097C */
    un_irc0_irqpl52_t	unIRQPL52;	/* 0x00000980 */
    un_irc0_irqpl53_t	unIRQPL53;	/* 0x00000984 */
    un_irc0_irqpl54_t	unIRQPL54;	/* 0x00000988 */
    un_irc0_irqpl55_t	unIRQPL55;	/* 0x0000098C */
    un_irc0_irqpl56_t	unIRQPL56;	/* 0x00000990 */
    un_irc0_irqpl57_t	unIRQPL57;	/* 0x00000994 */
    un_irc0_irqpl58_t	unIRQPL58;	/* 0x00000998 */
    un_irc0_irqpl59_t	unIRQPL59;	/* 0x0000099C */
    un_irc0_irqpl60_t	unIRQPL60;	/* 0x000009A0 */
    un_irc0_irqpl61_t	unIRQPL61;	/* 0x000009A4 */
    un_irc0_irqpl62_t	unIRQPL62;	/* 0x000009A8 */
    un_irc0_irqpl63_t	unIRQPL63;	/* 0x000009AC */
    un_irc0_irqpl64_t	unIRQPL64;	/* 0x000009B0 */
    un_irc0_irqpl65_t	unIRQPL65;	/* 0x000009B4 */
    un_irc0_irqpl66_t	unIRQPL66;	/* 0x000009B8 */
    un_irc0_irqpl67_t	unIRQPL67;	/* 0x000009BC */
    un_irc0_irqpl68_t	unIRQPL68;	/* 0x000009C0 */
    un_irc0_irqpl69_t	unIRQPL69;	/* 0x000009C4 */
    un_irc0_irqpl70_t	unIRQPL70;	/* 0x000009C8 */
    un_irc0_irqpl71_t	unIRQPL71;	/* 0x000009CC */
    un_irc0_irqpl72_t	unIRQPL72;	/* 0x000009D0 */
    un_irc0_irqpl73_t	unIRQPL73;	/* 0x000009D4 */
    un_irc0_irqpl74_t	unIRQPL74;	/* 0x000009D8 */
    un_irc0_irqpl75_t	unIRQPL75;	/* 0x000009DC */
    un_irc0_irqpl76_t	unIRQPL76;	/* 0x000009E0 */
    un_irc0_irqpl77_t	unIRQPL77;	/* 0x000009E4 */
    un_irc0_irqpl78_t	unIRQPL78;	/* 0x000009E8 */
    un_irc0_irqpl79_t	unIRQPL79;	/* 0x000009EC */
    un_irc0_irqpl80_t	unIRQPL80;	/* 0x000009F0 */
    un_irc0_irqpl81_t	unIRQPL81;	/* 0x000009F4 */
    un_irc0_irqpl82_t	unIRQPL82;	/* 0x000009F8 */
    un_irc0_irqpl83_t	unIRQPL83;	/* 0x000009FC */
    un_irc0_irqpl84_t	unIRQPL84;	/* 0x00000A00 */
    un_irc0_irqpl85_t	unIRQPL85;	/* 0x00000A04 */
    un_irc0_irqpl86_t	unIRQPL86;	/* 0x00000A08 */
    un_irc0_irqpl87_t	unIRQPL87;	/* 0x00000A0C */
    un_irc0_irqpl88_t	unIRQPL88;	/* 0x00000A10 */
    un_irc0_irqpl89_t	unIRQPL89;	/* 0x00000A14 */
    un_irc0_irqpl90_t	unIRQPL90;	/* 0x00000A18 */
    un_irc0_irqpl91_t	unIRQPL91;	/* 0x00000A1C */
    un_irc0_irqpl92_t	unIRQPL92;	/* 0x00000A20 */
    un_irc0_irqpl93_t	unIRQPL93;	/* 0x00000A24 */
    un_irc0_irqpl94_t	unIRQPL94;	/* 0x00000A28 */
    un_irc0_irqpl95_t	unIRQPL95;	/* 0x00000A2C */
    un_irc0_irqpl96_t	unIRQPL96;	/* 0x00000A30 */
    un_irc0_irqpl97_t	unIRQPL97;	/* 0x00000A34 */
    un_irc0_irqpl98_t	unIRQPL98;	/* 0x00000A38 */
    un_irc0_irqpl99_t	unIRQPL99;	/* 0x00000A3C */
    un_irc0_irqpl100_t	unIRQPL100;	/* 0x00000A40 */
    un_irc0_irqpl101_t	unIRQPL101;	/* 0x00000A44 */
    un_irc0_irqpl102_t	unIRQPL102;	/* 0x00000A48 */
    un_irc0_irqpl103_t	unIRQPL103;	/* 0x00000A4C */
    un_irc0_irqpl104_t	unIRQPL104;	/* 0x00000A50 */
    un_irc0_irqpl105_t	unIRQPL105;	/* 0x00000A54 */
    un_irc0_irqpl106_t	unIRQPL106;	/* 0x00000A58 */
    un_irc0_irqpl107_t	unIRQPL107;	/* 0x00000A5C */
    un_irc0_irqpl108_t	unIRQPL108;	/* 0x00000A60 */
    un_irc0_irqpl109_t	unIRQPL109;	/* 0x00000A64 */
    un_irc0_irqpl110_t	unIRQPL110;	/* 0x00000A68 */
    un_irc0_irqpl111_t	unIRQPL111;	/* 0x00000A6C */
    un_irc0_irqpl112_t	unIRQPL112;	/* 0x00000A70 */
    un_irc0_irqpl113_t	unIRQPL113;	/* 0x00000A74 */
    un_irc0_irqpl114_t	unIRQPL114;	/* 0x00000A78 */
    un_irc0_irqpl115_t	unIRQPL115;	/* 0x00000A7C */
    un_irc0_irqpl116_t	unIRQPL116;	/* 0x00000A80 */
    un_irc0_irqpl117_t	unIRQPL117;	/* 0x00000A84 */
    un_irc0_irqpl118_t	unIRQPL118;	/* 0x00000A88 */
    un_irc0_irqpl119_t	unIRQPL119;	/* 0x00000A8C */
    un_irc0_irqpl120_t	unIRQPL120;	/* 0x00000A90 */
    un_irc0_irqpl121_t	unIRQPL121;	/* 0x00000A94 */
    un_irc0_irqpl122_t	unIRQPL122;	/* 0x00000A98 */
    un_irc0_irqpl123_t	unIRQPL123;	/* 0x00000A9C */
    un_irc0_irqpl124_t	unIRQPL124;	/* 0x00000AA0 */
    un_irc0_irqpl125_t	unIRQPL125;	/* 0x00000AA4 */
    un_irc0_irqpl126_t	unIRQPL126;	/* 0x00000AA8 */
    un_irc0_irqpl127_t	unIRQPL127;	/* 0x00000AAC */
    un_irc0_nmis_t	unNMIS;	/* 0x00000AB0 */
    un_irc0_nmir_t	unNMIR;	/* 0x00000AB4 */
    un_irc0_nmisis_t	unNMISIS;	/* 0x00000AB8 */
    uint_io8_t	au8Reserved0[4];	/* 0x00000ABC */
    un_irc0_irqs0_t	unIRQS0;	/* 0x00000AC0 */
    un_irc0_irqs1_t	unIRQS1;	/* 0x00000AC4 */
    un_irc0_irqs2_t	unIRQS2;	/* 0x00000AC8 */
    un_irc0_irqs3_t	unIRQS3;	/* 0x00000ACC */
    un_irc0_irqs4_t	unIRQS4;	/* 0x00000AD0 */
    un_irc0_irqs5_t	unIRQS5;	/* 0x00000AD4 */
    un_irc0_irqs6_t	unIRQS6;	/* 0x00000AD8 */
    un_irc0_irqs7_t	unIRQS7;	/* 0x00000ADC */
    un_irc0_irqs8_t	unIRQS8;	/* 0x00000AE0 */
    un_irc0_irqs9_t	unIRQS9;	/* 0x00000AE4 */
    un_irc0_irqs10_t	unIRQS10;	/* 0x00000AE8 */
    un_irc0_irqs11_t	unIRQS11;	/* 0x00000AEC */
    un_irc0_irqs12_t	unIRQS12;	/* 0x00000AF0 */
    un_irc0_irqs13_t	unIRQS13;	/* 0x00000AF4 */
    un_irc0_irqs14_t	unIRQS14;	/* 0x00000AF8 */
    un_irc0_irqs15_t	unIRQS15;	/* 0x00000AFC */
    un_irc0_irqr0_t	unIRQR0;	/* 0x00000B00 */
    un_irc0_irqr1_t	unIRQR1;	/* 0x00000B04 */
    un_irc0_irqr2_t	unIRQR2;	/* 0x00000B08 */
    un_irc0_irqr3_t	unIRQR3;	/* 0x00000B0C */
    un_irc0_irqr4_t	unIRQR4;	/* 0x00000B10 */
    un_irc0_irqr5_t	unIRQR5;	/* 0x00000B14 */
    un_irc0_irqr6_t	unIRQR6;	/* 0x00000B18 */
    un_irc0_irqr7_t	unIRQR7;	/* 0x00000B1C */
    un_irc0_irqr8_t	unIRQR8;	/* 0x00000B20 */
    un_irc0_irqr9_t	unIRQR9;	/* 0x00000B24 */
    un_irc0_irqr10_t	unIRQR10;	/* 0x00000B28 */
    un_irc0_irqr11_t	unIRQR11;	/* 0x00000B2C */
    un_irc0_irqr12_t	unIRQR12;	/* 0x00000B30 */
    un_irc0_irqr13_t	unIRQR13;	/* 0x00000B34 */
    un_irc0_irqr14_t	unIRQR14;	/* 0x00000B38 */
    un_irc0_irqr15_t	unIRQR15;	/* 0x00000B3C */
    un_irc0_irqsis0_t	unIRQSIS0;	/* 0x00000B40 */
    un_irc0_irqsis1_t	unIRQSIS1;	/* 0x00000B44 */
    un_irc0_irqsis2_t	unIRQSIS2;	/* 0x00000B48 */
    un_irc0_irqsis3_t	unIRQSIS3;	/* 0x00000B4C */
    un_irc0_irqsis4_t	unIRQSIS4;	/* 0x00000B50 */
    un_irc0_irqsis5_t	unIRQSIS5;	/* 0x00000B54 */
    un_irc0_irqsis6_t	unIRQSIS6;	/* 0x00000B58 */
    un_irc0_irqsis7_t	unIRQSIS7;	/* 0x00000B5C */
    un_irc0_irqsis8_t	unIRQSIS8;	/* 0x00000B60 */
    un_irc0_irqsis9_t	unIRQSIS9;	/* 0x00000B64 */
    un_irc0_irqsis10_t	unIRQSIS10;	/* 0x00000B68 */
    un_irc0_irqsis11_t	unIRQSIS11;	/* 0x00000B6C */
    un_irc0_irqsis12_t	unIRQSIS12;	/* 0x00000B70 */
    un_irc0_irqsis13_t	unIRQSIS13;	/* 0x00000B74 */
    un_irc0_irqsis14_t	unIRQSIS14;	/* 0x00000B78 */
    un_irc0_irqsis15_t	unIRQSIS15;	/* 0x00000B7C */
    un_irc0_irqces0_t	unIRQCES0;	/* 0x00000B80 */
    un_irc0_irqces1_t	unIRQCES1;	/* 0x00000B84 */
    un_irc0_irqces2_t	unIRQCES2;	/* 0x00000B88 */
    un_irc0_irqces3_t	unIRQCES3;	/* 0x00000B8C */
    un_irc0_irqces4_t	unIRQCES4;	/* 0x00000B90 */
    un_irc0_irqces5_t	unIRQCES5;	/* 0x00000B94 */
    un_irc0_irqces6_t	unIRQCES6;	/* 0x00000B98 */
    un_irc0_irqces7_t	unIRQCES7;	/* 0x00000B9C */
    un_irc0_irqces8_t	unIRQCES8;	/* 0x00000BA0 */
    un_irc0_irqces9_t	unIRQCES9;	/* 0x00000BA4 */
    un_irc0_irqces10_t	unIRQCES10;	/* 0x00000BA8 */
    un_irc0_irqces11_t	unIRQCES11;	/* 0x00000BAC */
    un_irc0_irqces12_t	unIRQCES12;	/* 0x00000BB0 */
    un_irc0_irqces13_t	unIRQCES13;	/* 0x00000BB4 */
    un_irc0_irqces14_t	unIRQCES14;	/* 0x00000BB8 */
    un_irc0_irqces15_t	unIRQCES15;	/* 0x00000BBC */
    un_irc0_irqcec0_t	unIRQCEC0;	/* 0x00000BC0 */
    un_irc0_irqcec1_t	unIRQCEC1;	/* 0x00000BC4 */
    un_irc0_irqcec2_t	unIRQCEC2;	/* 0x00000BC8 */
    un_irc0_irqcec3_t	unIRQCEC3;	/* 0x00000BCC */
    un_irc0_irqcec4_t	unIRQCEC4;	/* 0x00000BD0 */
    un_irc0_irqcec5_t	unIRQCEC5;	/* 0x00000BD4 */
    un_irc0_irqcec6_t	unIRQCEC6;	/* 0x00000BD8 */
    un_irc0_irqcec7_t	unIRQCEC7;	/* 0x00000BDC */
    un_irc0_irqcec8_t	unIRQCEC8;	/* 0x00000BE0 */
    un_irc0_irqcec9_t	unIRQCEC9;	/* 0x00000BE4 */
    un_irc0_irqcec10_t	unIRQCEC10;	/* 0x00000BE8 */
    un_irc0_irqcec11_t	unIRQCEC11;	/* 0x00000BEC */
    un_irc0_irqcec12_t	unIRQCEC12;	/* 0x00000BF0 */
    un_irc0_irqcec13_t	unIRQCEC13;	/* 0x00000BF4 */
    un_irc0_irqcec14_t	unIRQCEC14;	/* 0x00000BF8 */
    un_irc0_irqcec15_t	unIRQCEC15;	/* 0x00000BFC */
    un_irc0_irqce0_t	unIRQCE0;	/* 0x00000C00 */
    un_irc0_irqce1_t	unIRQCE1;	/* 0x00000C04 */
    un_irc0_irqce2_t	unIRQCE2;	/* 0x00000C08 */
    un_irc0_irqce3_t	unIRQCE3;	/* 0x00000C0C */
    un_irc0_irqce4_t	unIRQCE4;	/* 0x00000C10 */
    un_irc0_irqce5_t	unIRQCE5;	/* 0x00000C14 */
    un_irc0_irqce6_t	unIRQCE6;	/* 0x00000C18 */
    un_irc0_irqce7_t	unIRQCE7;	/* 0x00000C1C */
    un_irc0_irqce8_t	unIRQCE8;	/* 0x00000C20 */
    un_irc0_irqce9_t	unIRQCE9;	/* 0x00000C24 */
    un_irc0_irqce10_t	unIRQCE10;	/* 0x00000C28 */
    un_irc0_irqce11_t	unIRQCE11;	/* 0x00000C2C */
    un_irc0_irqce12_t	unIRQCE12;	/* 0x00000C30 */
    un_irc0_irqce13_t	unIRQCE13;	/* 0x00000C34 */
    un_irc0_irqce14_t	unIRQCE14;	/* 0x00000C38 */
    un_irc0_irqce15_t	unIRQCE15;	/* 0x00000C3C */
    un_irc0_nmihc_t	unNMIHC;	/* 0x00000C40 */
    un_irc0_nmihs_t	unNMIHS;	/* 0x00000C44 */
    un_irc0_irqhc_t	unIRQHC;	/* 0x00000C48 */
    uint_io8_t	au8Reserved1[4];	/* 0x00000C4C */
    un_irc0_irqhs0_t	unIRQHS0;	/* 0x00000C50 */
    un_irc0_irqhs1_t	unIRQHS1;	/* 0x00000C54 */
    un_irc0_irqhs2_t	unIRQHS2;	/* 0x00000C58 */
    un_irc0_irqhs3_t	unIRQHS3;	/* 0x00000C5C */
    un_irc0_irqhs4_t	unIRQHS4;	/* 0x00000C60 */
    un_irc0_irqhs5_t	unIRQHS5;	/* 0x00000C64 */
    un_irc0_irqhs6_t	unIRQHS6;	/* 0x00000C68 */
    un_irc0_irqhs7_t	unIRQHS7;	/* 0x00000C6C */
    un_irc0_irqhs8_t	unIRQHS8;	/* 0x00000C70 */
    un_irc0_irqhs9_t	unIRQHS9;	/* 0x00000C74 */
    un_irc0_irqhs10_t	unIRQHS10;	/* 0x00000C78 */
    un_irc0_irqhs11_t	unIRQHS11;	/* 0x00000C7C */
    un_irc0_irqhs12_t	unIRQHS12;	/* 0x00000C80 */
    un_irc0_irqhs13_t	unIRQHS13;	/* 0x00000C84 */
    un_irc0_irqhs14_t	unIRQHS14;	/* 0x00000C88 */
    un_irc0_irqhs15_t	unIRQHS15;	/* 0x00000C8C */
    un_irc0_irqplm_t	unIRQPLM;	/* 0x00000C90 */
    uint_io8_t	au8Reserved2[4];	/* 0x00000C94 */
    un_irc0_csr_t	unCSR;	/* 0x00000C98 */
    uint_io8_t	au8Reserved3[12];	/* 0x00000C9C */
    un_irc0_nmirs_t	unNMIRS;	/* 0x00000CA8 */
    un_irc0_nmips_t	unNMIPS;	/* 0x00000CAC */
    un_irc0_irqrs0_t	unIRQRS0;	/* 0x00000CB0 */
    un_irc0_irqrs1_t	unIRQRS1;	/* 0x00000CB4 */
    un_irc0_irqrs2_t	unIRQRS2;	/* 0x00000CB8 */
    un_irc0_irqrs3_t	unIRQRS3;	/* 0x00000CBC */
    un_irc0_irqrs4_t	unIRQRS4;	/* 0x00000CC0 */
    un_irc0_irqrs5_t	unIRQRS5;	/* 0x00000CC4 */
    un_irc0_irqrs6_t	unIRQRS6;	/* 0x00000CC8 */
    un_irc0_irqrs7_t	unIRQRS7;	/* 0x00000CCC */
    un_irc0_irqrs8_t	unIRQRS8;	/* 0x00000CD0 */
    un_irc0_irqrs9_t	unIRQRS9;	/* 0x00000CD4 */
    un_irc0_irqrs10_t	unIRQRS10;	/* 0x00000CD8 */
    un_irc0_irqrs11_t	unIRQRS11;	/* 0x00000CDC */
    un_irc0_irqrs12_t	unIRQRS12;	/* 0x00000CE0 */
    un_irc0_irqrs13_t	unIRQRS13;	/* 0x00000CE4 */
    un_irc0_irqrs14_t	unIRQRS14;	/* 0x00000CE8 */
    un_irc0_irqrs15_t	unIRQRS15;	/* 0x00000CEC */
    un_irc0_irqps0_t	unIRQPS0;	/* 0x00000CF0 */
    un_irc0_irqps1_t	unIRQPS1;	/* 0x00000CF4 */
    un_irc0_irqps2_t	unIRQPS2;	/* 0x00000CF8 */
    un_irc0_irqps3_t	unIRQPS3;	/* 0x00000CFC */
    un_irc0_irqps4_t	unIRQPS4;	/* 0x00000D00 */
    un_irc0_irqps5_t	unIRQPS5;	/* 0x00000D04 */
    un_irc0_irqps6_t	unIRQPS6;	/* 0x00000D08 */
    un_irc0_irqps7_t	unIRQPS7;	/* 0x00000D0C */
    un_irc0_irqps8_t	unIRQPS8;	/* 0x00000D10 */
    un_irc0_irqps9_t	unIRQPS9;	/* 0x00000D14 */
    un_irc0_irqps10_t	unIRQPS10;	/* 0x00000D18 */
    un_irc0_irqps11_t	unIRQPS11;	/* 0x00000D1C */
    un_irc0_irqps12_t	unIRQPS12;	/* 0x00000D20 */
    un_irc0_irqps13_t	unIRQPS13;	/* 0x00000D24 */
    un_irc0_irqps14_t	unIRQPS14;	/* 0x00000D28 */
    un_irc0_irqps15_t	unIRQPS15;	/* 0x00000D2C */
    un_irc0_unlock_t	unUNLOCK;	/* 0x00000D30 */
    uint_io8_t	au8Reserved4[8];	/* 0x00000D34 */
    un_irc0_irqeeva_t	unIRQEEVA;	/* 0x00000D3C */
    un_irc0_eei_t	unEEI;	/* 0x00000D40 */
    un_irc0_ean_t	unEAN;	/* 0x00000D44 */
    un_irc0_et_t	unET;	/* 0x00000D48 */
    un_irc0_eebn_t	unEEB0;	/* 0x00000D4C */
    un_irc0_eebn_t	unEEB1;	/* 0x00000D50 */
    un_irc0_eeb2_t	unEEB2;	/* 0x00000D54 */
    uint_io8_t	au8Reserved5[29352];	/* 0x00000D58 */
}stc_irc0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_irc0_t	stcIRC0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


/* IRC0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define IRC0_1	stcIRC0_1
#else /* __IO_DEFINE */
#define IRC0_1	(*((volatile stc_irc0_1_t*)0xFFFEE000))
#endif /* __IO_DEFINE */

/* NMIVASBR */
#define IRC0_NMIVASBR	(IRC0_1.unNMIVASBR.u32Register)  /*@rg@*/
#define IRC0_NMIVASBR_NMIVAS	IRC0_NMIVASBR  /*@bfrg@*/

typedef union un_irc0_1_nmivasbr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc0_1_nmivasbr_t;


typedef struct stc_irc0_1{
    uint_io8_t	au8Reserved0[1020];	/* 0x00000000 */
    un_irc0_1_nmivasbr_t	unNMIVASBR;	/* 0x000003FC */
}stc_irc0_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_irc0_1_t	stcIRC0_1;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* IRC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define IRC_2	stcIRC_2
#else /* __IO_DEFINE */
#define IRC_2	(*((volatile stc_irc_2_t*)0xFFFEF800))
#endif /* __IO_DEFINE */

/* NMIVASBR */
#define IRC_NMIVASBR	(IRC_2.unNMIVASBR.u32Register)  /*@rg@*/
#define IRC_NMIVASBR_NMIVAS	IRC_NMIVASBR  /*@bfrg@*/

typedef union un_irc_2_nmivasbr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_irc_2_nmivasbr_t;


typedef struct stc_irc_2{
    uint_io8_t	au8Reserved0[1020];	/* 0x00000000 */
    un_irc_2_nmivasbr_t	unNMIVASBR;	/* 0x000003FC */
}stc_irc_2_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_irc_2_t	stcIRC_2;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_IRC_H */
