/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_RIC_H
#define __S6J3200_RIC_H

#include "s6j3200io_basetypes.h"

/* RIC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define RIC	stcRIC
#else /* __IO_DEFINE */
#define RIC	(*((volatile stc_ric_t*)0xB4748000))
#endif /* __IO_DEFINE */

/* RESIN[0-2047] */
#define RIC_RESIN0	(RIC.unRESIN0.u16Register)  /*@rg@*/
#define RIC_RESIN0_RESSEL	(RIC.unRESIN0.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN0_PORTSEL	(RIC.unRESIN0.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1	(RIC.unRESIN1.u16Register)  /*@rg@*/
#define RIC_RESIN1_RESSEL	(RIC.unRESIN1.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1_PORTSEL	(RIC.unRESIN1.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2	(RIC.unRESIN2.u16Register)  /*@rg@*/
#define RIC_RESIN2_RESSEL	(RIC.unRESIN2.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2_PORTSEL	(RIC.unRESIN2.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN3	(RIC.unRESIN3.u16Register)  /*@rg@*/
#define RIC_RESIN3_RESSEL	(RIC.unRESIN3.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN3_PORTSEL	(RIC.unRESIN3.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN4	(RIC.unRESIN4.u16Register)  /*@rg@*/
#define RIC_RESIN4_RESSEL	(RIC.unRESIN4.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN4_PORTSEL	(RIC.unRESIN4.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN5	(RIC.unRESIN5.u16Register)  /*@rg@*/
#define RIC_RESIN5_RESSEL	(RIC.unRESIN5.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN5_PORTSEL	(RIC.unRESIN5.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN6	(RIC.unRESIN6.u16Register)  /*@rg@*/
#define RIC_RESIN6_RESSEL	(RIC.unRESIN6.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN6_PORTSEL	(RIC.unRESIN6.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN7	(RIC.unRESIN7.u16Register)  /*@rg@*/
#define RIC_RESIN7_RESSEL	(RIC.unRESIN7.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN7_PORTSEL	(RIC.unRESIN7.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN8	(RIC.unRESIN8.u16Register)  /*@rg@*/
#define RIC_RESIN8_RESSEL	(RIC.unRESIN8.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN8_PORTSEL	(RIC.unRESIN8.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN9	(RIC.unRESIN9.u16Register)  /*@rg@*/
#define RIC_RESIN9_RESSEL	(RIC.unRESIN9.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN9_PORTSEL	(RIC.unRESIN9.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN10	(RIC.unRESIN10.u16Register)  /*@rg@*/
#define RIC_RESIN10_RESSEL	(RIC.unRESIN10.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN10_PORTSEL	(RIC.unRESIN10.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN11	(RIC.unRESIN11.u16Register)  /*@rg@*/
#define RIC_RESIN11_RESSEL	(RIC.unRESIN11.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN11_PORTSEL	(RIC.unRESIN11.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN12	(RIC.unRESIN12.u16Register)  /*@rg@*/
#define RIC_RESIN12_RESSEL	(RIC.unRESIN12.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN12_PORTSEL	(RIC.unRESIN12.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN13	(RIC.unRESIN13.u16Register)  /*@rg@*/
#define RIC_RESIN13_RESSEL	(RIC.unRESIN13.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN13_PORTSEL	(RIC.unRESIN13.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN14	(RIC.unRESIN14.u16Register)  /*@rg@*/
#define RIC_RESIN14_RESSEL	(RIC.unRESIN14.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN14_PORTSEL	(RIC.unRESIN14.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN15	(RIC.unRESIN15.u16Register)  /*@rg@*/
#define RIC_RESIN15_RESSEL	(RIC.unRESIN15.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN15_PORTSEL	(RIC.unRESIN15.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN16	(RIC.unRESIN16.u16Register)  /*@rg@*/
#define RIC_RESIN16_RESSEL	(RIC.unRESIN16.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN16_PORTSEL	(RIC.unRESIN16.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN17	(RIC.unRESIN17.u16Register)  /*@rg@*/
#define RIC_RESIN17_RESSEL	(RIC.unRESIN17.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN17_PORTSEL	(RIC.unRESIN17.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN18	(RIC.unRESIN18.u16Register)  /*@rg@*/
#define RIC_RESIN18_RESSEL	(RIC.unRESIN18.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN18_PORTSEL	(RIC.unRESIN18.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN19	(RIC.unRESIN19.u16Register)  /*@rg@*/
#define RIC_RESIN19_RESSEL	(RIC.unRESIN19.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN19_PORTSEL	(RIC.unRESIN19.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN20	(RIC.unRESIN20.u16Register)  /*@rg@*/
#define RIC_RESIN20_RESSEL	(RIC.unRESIN20.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN20_PORTSEL	(RIC.unRESIN20.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN21	(RIC.unRESIN21.u16Register)  /*@rg@*/
#define RIC_RESIN21_RESSEL	(RIC.unRESIN21.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN21_PORTSEL	(RIC.unRESIN21.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN22	(RIC.unRESIN22.u16Register)  /*@rg@*/
#define RIC_RESIN22_RESSEL	(RIC.unRESIN22.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN22_PORTSEL	(RIC.unRESIN22.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN23	(RIC.unRESIN23.u16Register)  /*@rg@*/
#define RIC_RESIN23_RESSEL	(RIC.unRESIN23.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN23_PORTSEL	(RIC.unRESIN23.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN24	(RIC.unRESIN24.u16Register)  /*@rg@*/
#define RIC_RESIN24_RESSEL	(RIC.unRESIN24.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN24_PORTSEL	(RIC.unRESIN24.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN25	(RIC.unRESIN25.u16Register)  /*@rg@*/
#define RIC_RESIN25_RESSEL	(RIC.unRESIN25.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN25_PORTSEL	(RIC.unRESIN25.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN26	(RIC.unRESIN26.u16Register)  /*@rg@*/
#define RIC_RESIN26_RESSEL	(RIC.unRESIN26.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN26_PORTSEL	(RIC.unRESIN26.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN27	(RIC.unRESIN27.u16Register)  /*@rg@*/
#define RIC_RESIN27_RESSEL	(RIC.unRESIN27.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN27_PORTSEL	(RIC.unRESIN27.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN28	(RIC.unRESIN28.u16Register)  /*@rg@*/
#define RIC_RESIN28_RESSEL	(RIC.unRESIN28.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN28_PORTSEL	(RIC.unRESIN28.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN29	(RIC.unRESIN29.u16Register)  /*@rg@*/
#define RIC_RESIN29_RESSEL	(RIC.unRESIN29.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN29_PORTSEL	(RIC.unRESIN29.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN30	(RIC.unRESIN30.u16Register)  /*@rg@*/
#define RIC_RESIN30_RESSEL	(RIC.unRESIN30.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN30_PORTSEL	(RIC.unRESIN30.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN31	(RIC.unRESIN31.u16Register)  /*@rg@*/
#define RIC_RESIN31_RESSEL	(RIC.unRESIN31.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN31_PORTSEL	(RIC.unRESIN31.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN32	(RIC.unRESIN32.u16Register)  /*@rg@*/
#define RIC_RESIN32_RESSEL	(RIC.unRESIN32.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN32_PORTSEL	(RIC.unRESIN32.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN33	(RIC.unRESIN33.u16Register)  /*@rg@*/
#define RIC_RESIN33_RESSEL	(RIC.unRESIN33.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN33_PORTSEL	(RIC.unRESIN33.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN34	(RIC.unRESIN34.u16Register)  /*@rg@*/
#define RIC_RESIN34_RESSEL	(RIC.unRESIN34.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN34_PORTSEL	(RIC.unRESIN34.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN35	(RIC.unRESIN35.u16Register)  /*@rg@*/
#define RIC_RESIN35_RESSEL	(RIC.unRESIN35.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN35_PORTSEL	(RIC.unRESIN35.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN36	(RIC.unRESIN36.u16Register)  /*@rg@*/
#define RIC_RESIN36_RESSEL	(RIC.unRESIN36.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN36_PORTSEL	(RIC.unRESIN36.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN37	(RIC.unRESIN37.u16Register)  /*@rg@*/
#define RIC_RESIN37_RESSEL	(RIC.unRESIN37.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN37_PORTSEL	(RIC.unRESIN37.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN38	(RIC.unRESIN38.u16Register)  /*@rg@*/
#define RIC_RESIN38_RESSEL	(RIC.unRESIN38.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN38_PORTSEL	(RIC.unRESIN38.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN39	(RIC.unRESIN39.u16Register)  /*@rg@*/
#define RIC_RESIN39_RESSEL	(RIC.unRESIN39.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN39_PORTSEL	(RIC.unRESIN39.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN40	(RIC.unRESIN40.u16Register)  /*@rg@*/
#define RIC_RESIN40_RESSEL	(RIC.unRESIN40.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN40_PORTSEL	(RIC.unRESIN40.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN41	(RIC.unRESIN41.u16Register)  /*@rg@*/
#define RIC_RESIN41_RESSEL	(RIC.unRESIN41.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN41_PORTSEL	(RIC.unRESIN41.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN42	(RIC.unRESIN42.u16Register)  /*@rg@*/
#define RIC_RESIN42_RESSEL	(RIC.unRESIN42.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN42_PORTSEL	(RIC.unRESIN42.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN43	(RIC.unRESIN43.u16Register)  /*@rg@*/
#define RIC_RESIN43_RESSEL	(RIC.unRESIN43.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN43_PORTSEL	(RIC.unRESIN43.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN44	(RIC.unRESIN44.u16Register)  /*@rg@*/
#define RIC_RESIN44_RESSEL	(RIC.unRESIN44.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN44_PORTSEL	(RIC.unRESIN44.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN45	(RIC.unRESIN45.u16Register)  /*@rg@*/
#define RIC_RESIN45_RESSEL	(RIC.unRESIN45.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN45_PORTSEL	(RIC.unRESIN45.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN46	(RIC.unRESIN46.u16Register)  /*@rg@*/
#define RIC_RESIN46_RESSEL	(RIC.unRESIN46.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN46_PORTSEL	(RIC.unRESIN46.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN47	(RIC.unRESIN47.u16Register)  /*@rg@*/
#define RIC_RESIN47_RESSEL	(RIC.unRESIN47.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN47_PORTSEL	(RIC.unRESIN47.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN48	(RIC.unRESIN48.u16Register)  /*@rg@*/
#define RIC_RESIN48_RESSEL	(RIC.unRESIN48.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN48_PORTSEL	(RIC.unRESIN48.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN49	(RIC.unRESIN49.u16Register)  /*@rg@*/
#define RIC_RESIN49_RESSEL	(RIC.unRESIN49.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN49_PORTSEL	(RIC.unRESIN49.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN50	(RIC.unRESIN50.u16Register)  /*@rg@*/
#define RIC_RESIN50_RESSEL	(RIC.unRESIN50.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN50_PORTSEL	(RIC.unRESIN50.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN51	(RIC.unRESIN51.u16Register)  /*@rg@*/
#define RIC_RESIN51_RESSEL	(RIC.unRESIN51.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN51_PORTSEL	(RIC.unRESIN51.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN52	(RIC.unRESIN52.u16Register)  /*@rg@*/
#define RIC_RESIN52_RESSEL	(RIC.unRESIN52.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN52_PORTSEL	(RIC.unRESIN52.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN53	(RIC.unRESIN53.u16Register)  /*@rg@*/
#define RIC_RESIN53_RESSEL	(RIC.unRESIN53.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN53_PORTSEL	(RIC.unRESIN53.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN54	(RIC.unRESIN54.u16Register)  /*@rg@*/
#define RIC_RESIN54_RESSEL	(RIC.unRESIN54.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN54_PORTSEL	(RIC.unRESIN54.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN55	(RIC.unRESIN55.u16Register)  /*@rg@*/
#define RIC_RESIN55_RESSEL	(RIC.unRESIN55.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN55_PORTSEL	(RIC.unRESIN55.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN56	(RIC.unRESIN56.u16Register)  /*@rg@*/
#define RIC_RESIN56_RESSEL	(RIC.unRESIN56.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN56_PORTSEL	(RIC.unRESIN56.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN57	(RIC.unRESIN57.u16Register)  /*@rg@*/
#define RIC_RESIN57_RESSEL	(RIC.unRESIN57.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN57_PORTSEL	(RIC.unRESIN57.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN58	(RIC.unRESIN58.u16Register)  /*@rg@*/
#define RIC_RESIN58_RESSEL	(RIC.unRESIN58.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN58_PORTSEL	(RIC.unRESIN58.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN59	(RIC.unRESIN59.u16Register)  /*@rg@*/
#define RIC_RESIN59_RESSEL	(RIC.unRESIN59.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN59_PORTSEL	(RIC.unRESIN59.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN60	(RIC.unRESIN60.u16Register)  /*@rg@*/
#define RIC_RESIN60_RESSEL	(RIC.unRESIN60.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN60_PORTSEL	(RIC.unRESIN60.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN61	(RIC.unRESIN61.u16Register)  /*@rg@*/
#define RIC_RESIN61_RESSEL	(RIC.unRESIN61.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN61_PORTSEL	(RIC.unRESIN61.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN62	(RIC.unRESIN62.u16Register)  /*@rg@*/
#define RIC_RESIN62_RESSEL	(RIC.unRESIN62.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN62_PORTSEL	(RIC.unRESIN62.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN63	(RIC.unRESIN63.u16Register)  /*@rg@*/
#define RIC_RESIN63_RESSEL	(RIC.unRESIN63.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN63_PORTSEL	(RIC.unRESIN63.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN64	(RIC.unRESIN64.u16Register)  /*@rg@*/
#define RIC_RESIN64_RESSEL	(RIC.unRESIN64.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN64_PORTSEL	(RIC.unRESIN64.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN65	(RIC.unRESIN65.u16Register)  /*@rg@*/
#define RIC_RESIN65_RESSEL	(RIC.unRESIN65.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN65_PORTSEL	(RIC.unRESIN65.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN66	(RIC.unRESIN66.u16Register)  /*@rg@*/
#define RIC_RESIN66_RESSEL	(RIC.unRESIN66.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN66_PORTSEL	(RIC.unRESIN66.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN67	(RIC.unRESIN67.u16Register)  /*@rg@*/
#define RIC_RESIN67_RESSEL	(RIC.unRESIN67.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN67_PORTSEL	(RIC.unRESIN67.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN68	(RIC.unRESIN68.u16Register)  /*@rg@*/
#define RIC_RESIN68_RESSEL	(RIC.unRESIN68.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN68_PORTSEL	(RIC.unRESIN68.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN69	(RIC.unRESIN69.u16Register)  /*@rg@*/
#define RIC_RESIN69_RESSEL	(RIC.unRESIN69.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN69_PORTSEL	(RIC.unRESIN69.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN70	(RIC.unRESIN70.u16Register)  /*@rg@*/
#define RIC_RESIN70_RESSEL	(RIC.unRESIN70.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN70_PORTSEL	(RIC.unRESIN70.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN71	(RIC.unRESIN71.u16Register)  /*@rg@*/
#define RIC_RESIN71_RESSEL	(RIC.unRESIN71.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN71_PORTSEL	(RIC.unRESIN71.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN72	(RIC.unRESIN72.u16Register)  /*@rg@*/
#define RIC_RESIN72_RESSEL	(RIC.unRESIN72.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN72_PORTSEL	(RIC.unRESIN72.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN73	(RIC.unRESIN73.u16Register)  /*@rg@*/
#define RIC_RESIN73_RESSEL	(RIC.unRESIN73.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN73_PORTSEL	(RIC.unRESIN73.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN74	(RIC.unRESIN74.u16Register)  /*@rg@*/
#define RIC_RESIN74_RESSEL	(RIC.unRESIN74.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN74_PORTSEL	(RIC.unRESIN74.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN75	(RIC.unRESIN75.u16Register)  /*@rg@*/
#define RIC_RESIN75_RESSEL	(RIC.unRESIN75.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN75_PORTSEL	(RIC.unRESIN75.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN76	(RIC.unRESIN76.u16Register)  /*@rg@*/
#define RIC_RESIN76_RESSEL	(RIC.unRESIN76.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN76_PORTSEL	(RIC.unRESIN76.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN77	(RIC.unRESIN77.u16Register)  /*@rg@*/
#define RIC_RESIN77_RESSEL	(RIC.unRESIN77.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN77_PORTSEL	(RIC.unRESIN77.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN78	(RIC.unRESIN78.u16Register)  /*@rg@*/
#define RIC_RESIN78_RESSEL	(RIC.unRESIN78.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN78_PORTSEL	(RIC.unRESIN78.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN79	(RIC.unRESIN79.u16Register)  /*@rg@*/
#define RIC_RESIN79_RESSEL	(RIC.unRESIN79.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN79_PORTSEL	(RIC.unRESIN79.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN80	(RIC.unRESIN80.u16Register)  /*@rg@*/
#define RIC_RESIN80_RESSEL	(RIC.unRESIN80.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN80_PORTSEL	(RIC.unRESIN80.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN81	(RIC.unRESIN81.u16Register)  /*@rg@*/
#define RIC_RESIN81_RESSEL	(RIC.unRESIN81.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN81_PORTSEL	(RIC.unRESIN81.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN82	(RIC.unRESIN82.u16Register)  /*@rg@*/
#define RIC_RESIN82_RESSEL	(RIC.unRESIN82.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN82_PORTSEL	(RIC.unRESIN82.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN83	(RIC.unRESIN83.u16Register)  /*@rg@*/
#define RIC_RESIN83_RESSEL	(RIC.unRESIN83.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN83_PORTSEL	(RIC.unRESIN83.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN84	(RIC.unRESIN84.u16Register)  /*@rg@*/
#define RIC_RESIN84_RESSEL	(RIC.unRESIN84.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN84_PORTSEL	(RIC.unRESIN84.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN85	(RIC.unRESIN85.u16Register)  /*@rg@*/
#define RIC_RESIN85_RESSEL	(RIC.unRESIN85.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN85_PORTSEL	(RIC.unRESIN85.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN86	(RIC.unRESIN86.u16Register)  /*@rg@*/
#define RIC_RESIN86_RESSEL	(RIC.unRESIN86.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN86_PORTSEL	(RIC.unRESIN86.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN87	(RIC.unRESIN87.u16Register)  /*@rg@*/
#define RIC_RESIN87_RESSEL	(RIC.unRESIN87.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN87_PORTSEL	(RIC.unRESIN87.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN88	(RIC.unRESIN88.u16Register)  /*@rg@*/
#define RIC_RESIN88_RESSEL	(RIC.unRESIN88.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN88_PORTSEL	(RIC.unRESIN88.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN89	(RIC.unRESIN89.u16Register)  /*@rg@*/
#define RIC_RESIN89_RESSEL	(RIC.unRESIN89.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN89_PORTSEL	(RIC.unRESIN89.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN90	(RIC.unRESIN90.u16Register)  /*@rg@*/
#define RIC_RESIN90_RESSEL	(RIC.unRESIN90.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN90_PORTSEL	(RIC.unRESIN90.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN91	(RIC.unRESIN91.u16Register)  /*@rg@*/
#define RIC_RESIN91_RESSEL	(RIC.unRESIN91.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN91_PORTSEL	(RIC.unRESIN91.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN92	(RIC.unRESIN92.u16Register)  /*@rg@*/
#define RIC_RESIN92_RESSEL	(RIC.unRESIN92.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN92_PORTSEL	(RIC.unRESIN92.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN93	(RIC.unRESIN93.u16Register)  /*@rg@*/
#define RIC_RESIN93_RESSEL	(RIC.unRESIN93.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN93_PORTSEL	(RIC.unRESIN93.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN94	(RIC.unRESIN94.u16Register)  /*@rg@*/
#define RIC_RESIN94_RESSEL	(RIC.unRESIN94.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN94_PORTSEL	(RIC.unRESIN94.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN95	(RIC.unRESIN95.u16Register)  /*@rg@*/
#define RIC_RESIN95_RESSEL	(RIC.unRESIN95.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN95_PORTSEL	(RIC.unRESIN95.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN96	(RIC.unRESIN96.u16Register)  /*@rg@*/
#define RIC_RESIN96_RESSEL	(RIC.unRESIN96.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN96_PORTSEL	(RIC.unRESIN96.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN97	(RIC.unRESIN97.u16Register)  /*@rg@*/
#define RIC_RESIN97_RESSEL	(RIC.unRESIN97.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN97_PORTSEL	(RIC.unRESIN97.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN98	(RIC.unRESIN98.u16Register)  /*@rg@*/
#define RIC_RESIN98_RESSEL	(RIC.unRESIN98.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN98_PORTSEL	(RIC.unRESIN98.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN99	(RIC.unRESIN99.u16Register)  /*@rg@*/
#define RIC_RESIN99_RESSEL	(RIC.unRESIN99.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN99_PORTSEL	(RIC.unRESIN99.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN100	(RIC.unRESIN100.u16Register)  /*@rg@*/
#define RIC_RESIN100_RESSEL	(RIC.unRESIN100.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN100_PORTSEL	(RIC.unRESIN100.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN101	(RIC.unRESIN101.u16Register)  /*@rg@*/
#define RIC_RESIN101_RESSEL	(RIC.unRESIN101.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN101_PORTSEL	(RIC.unRESIN101.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN102	(RIC.unRESIN102.u16Register)  /*@rg@*/
#define RIC_RESIN102_RESSEL	(RIC.unRESIN102.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN102_PORTSEL	(RIC.unRESIN102.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN103	(RIC.unRESIN103.u16Register)  /*@rg@*/
#define RIC_RESIN103_RESSEL	(RIC.unRESIN103.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN103_PORTSEL	(RIC.unRESIN103.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN104	(RIC.unRESIN104.u16Register)  /*@rg@*/
#define RIC_RESIN104_RESSEL	(RIC.unRESIN104.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN104_PORTSEL	(RIC.unRESIN104.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN105	(RIC.unRESIN105.u16Register)  /*@rg@*/
#define RIC_RESIN105_RESSEL	(RIC.unRESIN105.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN105_PORTSEL	(RIC.unRESIN105.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN106	(RIC.unRESIN106.u16Register)  /*@rg@*/
#define RIC_RESIN106_RESSEL	(RIC.unRESIN106.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN106_PORTSEL	(RIC.unRESIN106.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN107	(RIC.unRESIN107.u16Register)  /*@rg@*/
#define RIC_RESIN107_RESSEL	(RIC.unRESIN107.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN107_PORTSEL	(RIC.unRESIN107.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN108	(RIC.unRESIN108.u16Register)  /*@rg@*/
#define RIC_RESIN108_RESSEL	(RIC.unRESIN108.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN108_PORTSEL	(RIC.unRESIN108.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN109	(RIC.unRESIN109.u16Register)  /*@rg@*/
#define RIC_RESIN109_RESSEL	(RIC.unRESIN109.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN109_PORTSEL	(RIC.unRESIN109.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN110	(RIC.unRESIN110.u16Register)  /*@rg@*/
#define RIC_RESIN110_RESSEL	(RIC.unRESIN110.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN110_PORTSEL	(RIC.unRESIN110.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN111	(RIC.unRESIN111.u16Register)  /*@rg@*/
#define RIC_RESIN111_RESSEL	(RIC.unRESIN111.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN111_PORTSEL	(RIC.unRESIN111.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN112	(RIC.unRESIN112.u16Register)  /*@rg@*/
#define RIC_RESIN112_RESSEL	(RIC.unRESIN112.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN112_PORTSEL	(RIC.unRESIN112.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN113	(RIC.unRESIN113.u16Register)  /*@rg@*/
#define RIC_RESIN113_RESSEL	(RIC.unRESIN113.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN113_PORTSEL	(RIC.unRESIN113.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN114	(RIC.unRESIN114.u16Register)  /*@rg@*/
#define RIC_RESIN114_RESSEL	(RIC.unRESIN114.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN114_PORTSEL	(RIC.unRESIN114.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN115	(RIC.unRESIN115.u16Register)  /*@rg@*/
#define RIC_RESIN115_RESSEL	(RIC.unRESIN115.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN115_PORTSEL	(RIC.unRESIN115.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN116	(RIC.unRESIN116.u16Register)  /*@rg@*/
#define RIC_RESIN116_RESSEL	(RIC.unRESIN116.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN116_PORTSEL	(RIC.unRESIN116.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN117	(RIC.unRESIN117.u16Register)  /*@rg@*/
#define RIC_RESIN117_RESSEL	(RIC.unRESIN117.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN117_PORTSEL	(RIC.unRESIN117.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN118	(RIC.unRESIN118.u16Register)  /*@rg@*/
#define RIC_RESIN118_RESSEL	(RIC.unRESIN118.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN118_PORTSEL	(RIC.unRESIN118.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN119	(RIC.unRESIN119.u16Register)  /*@rg@*/
#define RIC_RESIN119_RESSEL	(RIC.unRESIN119.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN119_PORTSEL	(RIC.unRESIN119.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN120	(RIC.unRESIN120.u16Register)  /*@rg@*/
#define RIC_RESIN120_RESSEL	(RIC.unRESIN120.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN120_PORTSEL	(RIC.unRESIN120.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN121	(RIC.unRESIN121.u16Register)  /*@rg@*/
#define RIC_RESIN121_RESSEL	(RIC.unRESIN121.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN121_PORTSEL	(RIC.unRESIN121.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN122	(RIC.unRESIN122.u16Register)  /*@rg@*/
#define RIC_RESIN122_RESSEL	(RIC.unRESIN122.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN122_PORTSEL	(RIC.unRESIN122.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN123	(RIC.unRESIN123.u16Register)  /*@rg@*/
#define RIC_RESIN123_RESSEL	(RIC.unRESIN123.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN123_PORTSEL	(RIC.unRESIN123.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN124	(RIC.unRESIN124.u16Register)  /*@rg@*/
#define RIC_RESIN124_RESSEL	(RIC.unRESIN124.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN124_PORTSEL	(RIC.unRESIN124.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN125	(RIC.unRESIN125.u16Register)  /*@rg@*/
#define RIC_RESIN125_RESSEL	(RIC.unRESIN125.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN125_PORTSEL	(RIC.unRESIN125.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN126	(RIC.unRESIN126.u16Register)  /*@rg@*/
#define RIC_RESIN126_RESSEL	(RIC.unRESIN126.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN126_PORTSEL	(RIC.unRESIN126.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN127	(RIC.unRESIN127.u16Register)  /*@rg@*/
#define RIC_RESIN127_RESSEL	(RIC.unRESIN127.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN127_PORTSEL	(RIC.unRESIN127.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN128	(RIC.unRESIN128.u16Register)  /*@rg@*/
#define RIC_RESIN128_RESSEL	(RIC.unRESIN128.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN128_PORTSEL	(RIC.unRESIN128.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN129	(RIC.unRESIN129.u16Register)  /*@rg@*/
#define RIC_RESIN129_RESSEL	(RIC.unRESIN129.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN129_PORTSEL	(RIC.unRESIN129.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN130	(RIC.unRESIN130.u16Register)  /*@rg@*/
#define RIC_RESIN130_RESSEL	(RIC.unRESIN130.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN130_PORTSEL	(RIC.unRESIN130.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN131	(RIC.unRESIN131.u16Register)  /*@rg@*/
#define RIC_RESIN131_RESSEL	(RIC.unRESIN131.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN131_PORTSEL	(RIC.unRESIN131.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN132	(RIC.unRESIN132.u16Register)  /*@rg@*/
#define RIC_RESIN132_RESSEL	(RIC.unRESIN132.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN132_PORTSEL	(RIC.unRESIN132.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN133	(RIC.unRESIN133.u16Register)  /*@rg@*/
#define RIC_RESIN133_RESSEL	(RIC.unRESIN133.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN133_PORTSEL	(RIC.unRESIN133.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN134	(RIC.unRESIN134.u16Register)  /*@rg@*/
#define RIC_RESIN134_RESSEL	(RIC.unRESIN134.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN134_PORTSEL	(RIC.unRESIN134.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN135	(RIC.unRESIN135.u16Register)  /*@rg@*/
#define RIC_RESIN135_RESSEL	(RIC.unRESIN135.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN135_PORTSEL	(RIC.unRESIN135.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN136	(RIC.unRESIN136.u16Register)  /*@rg@*/
#define RIC_RESIN136_RESSEL	(RIC.unRESIN136.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN136_PORTSEL	(RIC.unRESIN136.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN137	(RIC.unRESIN137.u16Register)  /*@rg@*/
#define RIC_RESIN137_RESSEL	(RIC.unRESIN137.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN137_PORTSEL	(RIC.unRESIN137.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN138	(RIC.unRESIN138.u16Register)  /*@rg@*/
#define RIC_RESIN138_RESSEL	(RIC.unRESIN138.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN138_PORTSEL	(RIC.unRESIN138.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN139	(RIC.unRESIN139.u16Register)  /*@rg@*/
#define RIC_RESIN139_RESSEL	(RIC.unRESIN139.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN139_PORTSEL	(RIC.unRESIN139.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN140	(RIC.unRESIN140.u16Register)  /*@rg@*/
#define RIC_RESIN140_RESSEL	(RIC.unRESIN140.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN140_PORTSEL	(RIC.unRESIN140.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN141	(RIC.unRESIN141.u16Register)  /*@rg@*/
#define RIC_RESIN141_RESSEL	(RIC.unRESIN141.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN141_PORTSEL	(RIC.unRESIN141.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN142	(RIC.unRESIN142.u16Register)  /*@rg@*/
#define RIC_RESIN142_RESSEL	(RIC.unRESIN142.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN142_PORTSEL	(RIC.unRESIN142.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN143	(RIC.unRESIN143.u16Register)  /*@rg@*/
#define RIC_RESIN143_RESSEL	(RIC.unRESIN143.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN143_PORTSEL	(RIC.unRESIN143.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN144	(RIC.unRESIN144.u16Register)  /*@rg@*/
#define RIC_RESIN144_RESSEL	(RIC.unRESIN144.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN144_PORTSEL	(RIC.unRESIN144.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN145	(RIC.unRESIN145.u16Register)  /*@rg@*/
#define RIC_RESIN145_RESSEL	(RIC.unRESIN145.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN145_PORTSEL	(RIC.unRESIN145.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN146	(RIC.unRESIN146.u16Register)  /*@rg@*/
#define RIC_RESIN146_RESSEL	(RIC.unRESIN146.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN146_PORTSEL	(RIC.unRESIN146.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN147	(RIC.unRESIN147.u16Register)  /*@rg@*/
#define RIC_RESIN147_RESSEL	(RIC.unRESIN147.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN147_PORTSEL	(RIC.unRESIN147.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN148	(RIC.unRESIN148.u16Register)  /*@rg@*/
#define RIC_RESIN148_RESSEL	(RIC.unRESIN148.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN148_PORTSEL	(RIC.unRESIN148.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN149	(RIC.unRESIN149.u16Register)  /*@rg@*/
#define RIC_RESIN149_RESSEL	(RIC.unRESIN149.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN149_PORTSEL	(RIC.unRESIN149.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN150	(RIC.unRESIN150.u16Register)  /*@rg@*/
#define RIC_RESIN150_RESSEL	(RIC.unRESIN150.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN150_PORTSEL	(RIC.unRESIN150.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN151	(RIC.unRESIN151.u16Register)  /*@rg@*/
#define RIC_RESIN151_RESSEL	(RIC.unRESIN151.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN151_PORTSEL	(RIC.unRESIN151.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN152	(RIC.unRESIN152.u16Register)  /*@rg@*/
#define RIC_RESIN152_RESSEL	(RIC.unRESIN152.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN152_PORTSEL	(RIC.unRESIN152.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN153	(RIC.unRESIN153.u16Register)  /*@rg@*/
#define RIC_RESIN153_RESSEL	(RIC.unRESIN153.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN153_PORTSEL	(RIC.unRESIN153.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN154	(RIC.unRESIN154.u16Register)  /*@rg@*/
#define RIC_RESIN154_RESSEL	(RIC.unRESIN154.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN154_PORTSEL	(RIC.unRESIN154.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN155	(RIC.unRESIN155.u16Register)  /*@rg@*/
#define RIC_RESIN155_RESSEL	(RIC.unRESIN155.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN155_PORTSEL	(RIC.unRESIN155.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN156	(RIC.unRESIN156.u16Register)  /*@rg@*/
#define RIC_RESIN156_RESSEL	(RIC.unRESIN156.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN156_PORTSEL	(RIC.unRESIN156.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN157	(RIC.unRESIN157.u16Register)  /*@rg@*/
#define RIC_RESIN157_RESSEL	(RIC.unRESIN157.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN157_PORTSEL	(RIC.unRESIN157.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN158	(RIC.unRESIN158.u16Register)  /*@rg@*/
#define RIC_RESIN158_RESSEL	(RIC.unRESIN158.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN158_PORTSEL	(RIC.unRESIN158.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN159	(RIC.unRESIN159.u16Register)  /*@rg@*/
#define RIC_RESIN159_RESSEL	(RIC.unRESIN159.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN159_PORTSEL	(RIC.unRESIN159.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN160	(RIC.unRESIN160.u16Register)  /*@rg@*/
#define RIC_RESIN160_RESSEL	(RIC.unRESIN160.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN160_PORTSEL	(RIC.unRESIN160.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN161	(RIC.unRESIN161.u16Register)  /*@rg@*/
#define RIC_RESIN161_RESSEL	(RIC.unRESIN161.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN161_PORTSEL	(RIC.unRESIN161.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN162	(RIC.unRESIN162.u16Register)  /*@rg@*/
#define RIC_RESIN162_RESSEL	(RIC.unRESIN162.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN162_PORTSEL	(RIC.unRESIN162.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN163	(RIC.unRESIN163.u16Register)  /*@rg@*/
#define RIC_RESIN163_RESSEL	(RIC.unRESIN163.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN163_PORTSEL	(RIC.unRESIN163.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN164	(RIC.unRESIN164.u16Register)  /*@rg@*/
#define RIC_RESIN164_RESSEL	(RIC.unRESIN164.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN164_PORTSEL	(RIC.unRESIN164.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN165	(RIC.unRESIN165.u16Register)  /*@rg@*/
#define RIC_RESIN165_RESSEL	(RIC.unRESIN165.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN165_PORTSEL	(RIC.unRESIN165.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN166	(RIC.unRESIN166.u16Register)  /*@rg@*/
#define RIC_RESIN166_RESSEL	(RIC.unRESIN166.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN166_PORTSEL	(RIC.unRESIN166.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN167	(RIC.unRESIN167.u16Register)  /*@rg@*/
#define RIC_RESIN167_RESSEL	(RIC.unRESIN167.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN167_PORTSEL	(RIC.unRESIN167.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN168	(RIC.unRESIN168.u16Register)  /*@rg@*/
#define RIC_RESIN168_RESSEL	(RIC.unRESIN168.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN168_PORTSEL	(RIC.unRESIN168.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN169	(RIC.unRESIN169.u16Register)  /*@rg@*/
#define RIC_RESIN169_RESSEL	(RIC.unRESIN169.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN169_PORTSEL	(RIC.unRESIN169.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN170	(RIC.unRESIN170.u16Register)  /*@rg@*/
#define RIC_RESIN170_RESSEL	(RIC.unRESIN170.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN170_PORTSEL	(RIC.unRESIN170.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN171	(RIC.unRESIN171.u16Register)  /*@rg@*/
#define RIC_RESIN171_RESSEL	(RIC.unRESIN171.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN171_PORTSEL	(RIC.unRESIN171.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN172	(RIC.unRESIN172.u16Register)  /*@rg@*/
#define RIC_RESIN172_RESSEL	(RIC.unRESIN172.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN172_PORTSEL	(RIC.unRESIN172.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN173	(RIC.unRESIN173.u16Register)  /*@rg@*/
#define RIC_RESIN173_RESSEL	(RIC.unRESIN173.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN173_PORTSEL	(RIC.unRESIN173.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN174	(RIC.unRESIN174.u16Register)  /*@rg@*/
#define RIC_RESIN174_RESSEL	(RIC.unRESIN174.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN174_PORTSEL	(RIC.unRESIN174.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN175	(RIC.unRESIN175.u16Register)  /*@rg@*/
#define RIC_RESIN175_RESSEL	(RIC.unRESIN175.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN175_PORTSEL	(RIC.unRESIN175.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN176	(RIC.unRESIN176.u16Register)  /*@rg@*/
#define RIC_RESIN176_RESSEL	(RIC.unRESIN176.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN176_PORTSEL	(RIC.unRESIN176.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN177	(RIC.unRESIN177.u16Register)  /*@rg@*/
#define RIC_RESIN177_RESSEL	(RIC.unRESIN177.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN177_PORTSEL	(RIC.unRESIN177.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN178	(RIC.unRESIN178.u16Register)  /*@rg@*/
#define RIC_RESIN178_RESSEL	(RIC.unRESIN178.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN178_PORTSEL	(RIC.unRESIN178.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN179	(RIC.unRESIN179.u16Register)  /*@rg@*/
#define RIC_RESIN179_RESSEL	(RIC.unRESIN179.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN179_PORTSEL	(RIC.unRESIN179.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN180	(RIC.unRESIN180.u16Register)  /*@rg@*/
#define RIC_RESIN180_RESSEL	(RIC.unRESIN180.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN180_PORTSEL	(RIC.unRESIN180.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN181	(RIC.unRESIN181.u16Register)  /*@rg@*/
#define RIC_RESIN181_RESSEL	(RIC.unRESIN181.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN181_PORTSEL	(RIC.unRESIN181.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN182	(RIC.unRESIN182.u16Register)  /*@rg@*/
#define RIC_RESIN182_RESSEL	(RIC.unRESIN182.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN182_PORTSEL	(RIC.unRESIN182.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN183	(RIC.unRESIN183.u16Register)  /*@rg@*/
#define RIC_RESIN183_RESSEL	(RIC.unRESIN183.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN183_PORTSEL	(RIC.unRESIN183.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN184	(RIC.unRESIN184.u16Register)  /*@rg@*/
#define RIC_RESIN184_RESSEL	(RIC.unRESIN184.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN184_PORTSEL	(RIC.unRESIN184.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN185	(RIC.unRESIN185.u16Register)  /*@rg@*/
#define RIC_RESIN185_RESSEL	(RIC.unRESIN185.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN185_PORTSEL	(RIC.unRESIN185.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN186	(RIC.unRESIN186.u16Register)  /*@rg@*/
#define RIC_RESIN186_RESSEL	(RIC.unRESIN186.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN186_PORTSEL	(RIC.unRESIN186.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN187	(RIC.unRESIN187.u16Register)  /*@rg@*/
#define RIC_RESIN187_RESSEL	(RIC.unRESIN187.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN187_PORTSEL	(RIC.unRESIN187.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN188	(RIC.unRESIN188.u16Register)  /*@rg@*/
#define RIC_RESIN188_RESSEL	(RIC.unRESIN188.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN188_PORTSEL	(RIC.unRESIN188.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN189	(RIC.unRESIN189.u16Register)  /*@rg@*/
#define RIC_RESIN189_RESSEL	(RIC.unRESIN189.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN189_PORTSEL	(RIC.unRESIN189.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN190	(RIC.unRESIN190.u16Register)  /*@rg@*/
#define RIC_RESIN190_RESSEL	(RIC.unRESIN190.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN190_PORTSEL	(RIC.unRESIN190.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN191	(RIC.unRESIN191.u16Register)  /*@rg@*/
#define RIC_RESIN191_RESSEL	(RIC.unRESIN191.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN191_PORTSEL	(RIC.unRESIN191.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN192	(RIC.unRESIN192.u16Register)  /*@rg@*/
#define RIC_RESIN192_RESSEL	(RIC.unRESIN192.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN192_PORTSEL	(RIC.unRESIN192.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN193	(RIC.unRESIN193.u16Register)  /*@rg@*/
#define RIC_RESIN193_RESSEL	(RIC.unRESIN193.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN193_PORTSEL	(RIC.unRESIN193.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN194	(RIC.unRESIN194.u16Register)  /*@rg@*/
#define RIC_RESIN194_RESSEL	(RIC.unRESIN194.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN194_PORTSEL	(RIC.unRESIN194.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN195	(RIC.unRESIN195.u16Register)  /*@rg@*/
#define RIC_RESIN195_RESSEL	(RIC.unRESIN195.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN195_PORTSEL	(RIC.unRESIN195.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN196	(RIC.unRESIN196.u16Register)  /*@rg@*/
#define RIC_RESIN196_RESSEL	(RIC.unRESIN196.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN196_PORTSEL	(RIC.unRESIN196.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN197	(RIC.unRESIN197.u16Register)  /*@rg@*/
#define RIC_RESIN197_RESSEL	(RIC.unRESIN197.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN197_PORTSEL	(RIC.unRESIN197.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN198	(RIC.unRESIN198.u16Register)  /*@rg@*/
#define RIC_RESIN198_RESSEL	(RIC.unRESIN198.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN198_PORTSEL	(RIC.unRESIN198.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN199	(RIC.unRESIN199.u16Register)  /*@rg@*/
#define RIC_RESIN199_RESSEL	(RIC.unRESIN199.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN199_PORTSEL	(RIC.unRESIN199.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN200	(RIC.unRESIN200.u16Register)  /*@rg@*/
#define RIC_RESIN200_RESSEL	(RIC.unRESIN200.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN200_PORTSEL	(RIC.unRESIN200.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN201	(RIC.unRESIN201.u16Register)  /*@rg@*/
#define RIC_RESIN201_RESSEL	(RIC.unRESIN201.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN201_PORTSEL	(RIC.unRESIN201.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN202	(RIC.unRESIN202.u16Register)  /*@rg@*/
#define RIC_RESIN202_RESSEL	(RIC.unRESIN202.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN202_PORTSEL	(RIC.unRESIN202.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN203	(RIC.unRESIN203.u16Register)  /*@rg@*/
#define RIC_RESIN203_RESSEL	(RIC.unRESIN203.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN203_PORTSEL	(RIC.unRESIN203.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN204	(RIC.unRESIN204.u16Register)  /*@rg@*/
#define RIC_RESIN204_RESSEL	(RIC.unRESIN204.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN204_PORTSEL	(RIC.unRESIN204.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN205	(RIC.unRESIN205.u16Register)  /*@rg@*/
#define RIC_RESIN205_RESSEL	(RIC.unRESIN205.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN205_PORTSEL	(RIC.unRESIN205.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN206	(RIC.unRESIN206.u16Register)  /*@rg@*/
#define RIC_RESIN206_RESSEL	(RIC.unRESIN206.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN206_PORTSEL	(RIC.unRESIN206.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN207	(RIC.unRESIN207.u16Register)  /*@rg@*/
#define RIC_RESIN207_RESSEL	(RIC.unRESIN207.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN207_PORTSEL	(RIC.unRESIN207.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN208	(RIC.unRESIN208.u16Register)  /*@rg@*/
#define RIC_RESIN208_RESSEL	(RIC.unRESIN208.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN208_PORTSEL	(RIC.unRESIN208.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN209	(RIC.unRESIN209.u16Register)  /*@rg@*/
#define RIC_RESIN209_RESSEL	(RIC.unRESIN209.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN209_PORTSEL	(RIC.unRESIN209.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN210	(RIC.unRESIN210.u16Register)  /*@rg@*/
#define RIC_RESIN210_RESSEL	(RIC.unRESIN210.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN210_PORTSEL	(RIC.unRESIN210.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN211	(RIC.unRESIN211.u16Register)  /*@rg@*/
#define RIC_RESIN211_RESSEL	(RIC.unRESIN211.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN211_PORTSEL	(RIC.unRESIN211.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN212	(RIC.unRESIN212.u16Register)  /*@rg@*/
#define RIC_RESIN212_RESSEL	(RIC.unRESIN212.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN212_PORTSEL	(RIC.unRESIN212.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN213	(RIC.unRESIN213.u16Register)  /*@rg@*/
#define RIC_RESIN213_RESSEL	(RIC.unRESIN213.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN213_PORTSEL	(RIC.unRESIN213.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN214	(RIC.unRESIN214.u16Register)  /*@rg@*/
#define RIC_RESIN214_RESSEL	(RIC.unRESIN214.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN214_PORTSEL	(RIC.unRESIN214.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN215	(RIC.unRESIN215.u16Register)  /*@rg@*/
#define RIC_RESIN215_RESSEL	(RIC.unRESIN215.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN215_PORTSEL	(RIC.unRESIN215.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN216	(RIC.unRESIN216.u16Register)  /*@rg@*/
#define RIC_RESIN216_RESSEL	(RIC.unRESIN216.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN216_PORTSEL	(RIC.unRESIN216.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN217	(RIC.unRESIN217.u16Register)  /*@rg@*/
#define RIC_RESIN217_RESSEL	(RIC.unRESIN217.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN217_PORTSEL	(RIC.unRESIN217.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN218	(RIC.unRESIN218.u16Register)  /*@rg@*/
#define RIC_RESIN218_RESSEL	(RIC.unRESIN218.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN218_PORTSEL	(RIC.unRESIN218.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN219	(RIC.unRESIN219.u16Register)  /*@rg@*/
#define RIC_RESIN219_RESSEL	(RIC.unRESIN219.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN219_PORTSEL	(RIC.unRESIN219.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN220	(RIC.unRESIN220.u16Register)  /*@rg@*/
#define RIC_RESIN220_RESSEL	(RIC.unRESIN220.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN220_PORTSEL	(RIC.unRESIN220.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN221	(RIC.unRESIN221.u16Register)  /*@rg@*/
#define RIC_RESIN221_RESSEL	(RIC.unRESIN221.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN221_PORTSEL	(RIC.unRESIN221.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN222	(RIC.unRESIN222.u16Register)  /*@rg@*/
#define RIC_RESIN222_RESSEL	(RIC.unRESIN222.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN222_PORTSEL	(RIC.unRESIN222.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN223	(RIC.unRESIN223.u16Register)  /*@rg@*/
#define RIC_RESIN223_RESSEL	(RIC.unRESIN223.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN223_PORTSEL	(RIC.unRESIN223.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN224	(RIC.unRESIN224.u16Register)  /*@rg@*/
#define RIC_RESIN224_RESSEL	(RIC.unRESIN224.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN224_PORTSEL	(RIC.unRESIN224.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN225	(RIC.unRESIN225.u16Register)  /*@rg@*/
#define RIC_RESIN225_RESSEL	(RIC.unRESIN225.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN225_PORTSEL	(RIC.unRESIN225.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN226	(RIC.unRESIN226.u16Register)  /*@rg@*/
#define RIC_RESIN226_RESSEL	(RIC.unRESIN226.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN226_PORTSEL	(RIC.unRESIN226.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN227	(RIC.unRESIN227.u16Register)  /*@rg@*/
#define RIC_RESIN227_RESSEL	(RIC.unRESIN227.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN227_PORTSEL	(RIC.unRESIN227.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN228	(RIC.unRESIN228.u16Register)  /*@rg@*/
#define RIC_RESIN228_RESSEL	(RIC.unRESIN228.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN228_PORTSEL	(RIC.unRESIN228.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN229	(RIC.unRESIN229.u16Register)  /*@rg@*/
#define RIC_RESIN229_RESSEL	(RIC.unRESIN229.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN229_PORTSEL	(RIC.unRESIN229.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN230	(RIC.unRESIN230.u16Register)  /*@rg@*/
#define RIC_RESIN230_RESSEL	(RIC.unRESIN230.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN230_PORTSEL	(RIC.unRESIN230.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN231	(RIC.unRESIN231.u16Register)  /*@rg@*/
#define RIC_RESIN231_RESSEL	(RIC.unRESIN231.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN231_PORTSEL	(RIC.unRESIN231.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN232	(RIC.unRESIN232.u16Register)  /*@rg@*/
#define RIC_RESIN232_RESSEL	(RIC.unRESIN232.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN232_PORTSEL	(RIC.unRESIN232.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN233	(RIC.unRESIN233.u16Register)  /*@rg@*/
#define RIC_RESIN233_RESSEL	(RIC.unRESIN233.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN233_PORTSEL	(RIC.unRESIN233.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN234	(RIC.unRESIN234.u16Register)  /*@rg@*/
#define RIC_RESIN234_RESSEL	(RIC.unRESIN234.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN234_PORTSEL	(RIC.unRESIN234.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN235	(RIC.unRESIN235.u16Register)  /*@rg@*/
#define RIC_RESIN235_RESSEL	(RIC.unRESIN235.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN235_PORTSEL	(RIC.unRESIN235.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN236	(RIC.unRESIN236.u16Register)  /*@rg@*/
#define RIC_RESIN236_RESSEL	(RIC.unRESIN236.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN236_PORTSEL	(RIC.unRESIN236.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN237	(RIC.unRESIN237.u16Register)  /*@rg@*/
#define RIC_RESIN237_RESSEL	(RIC.unRESIN237.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN237_PORTSEL	(RIC.unRESIN237.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN238	(RIC.unRESIN238.u16Register)  /*@rg@*/
#define RIC_RESIN238_RESSEL	(RIC.unRESIN238.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN238_PORTSEL	(RIC.unRESIN238.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN239	(RIC.unRESIN239.u16Register)  /*@rg@*/
#define RIC_RESIN239_RESSEL	(RIC.unRESIN239.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN239_PORTSEL	(RIC.unRESIN239.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN240	(RIC.unRESIN240.u16Register)  /*@rg@*/
#define RIC_RESIN240_RESSEL	(RIC.unRESIN240.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN240_PORTSEL	(RIC.unRESIN240.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN241	(RIC.unRESIN241.u16Register)  /*@rg@*/
#define RIC_RESIN241_RESSEL	(RIC.unRESIN241.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN241_PORTSEL	(RIC.unRESIN241.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN242	(RIC.unRESIN242.u16Register)  /*@rg@*/
#define RIC_RESIN242_RESSEL	(RIC.unRESIN242.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN242_PORTSEL	(RIC.unRESIN242.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN243	(RIC.unRESIN243.u16Register)  /*@rg@*/
#define RIC_RESIN243_RESSEL	(RIC.unRESIN243.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN243_PORTSEL	(RIC.unRESIN243.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN244	(RIC.unRESIN244.u16Register)  /*@rg@*/
#define RIC_RESIN244_RESSEL	(RIC.unRESIN244.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN244_PORTSEL	(RIC.unRESIN244.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN245	(RIC.unRESIN245.u16Register)  /*@rg@*/
#define RIC_RESIN245_RESSEL	(RIC.unRESIN245.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN245_PORTSEL	(RIC.unRESIN245.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN246	(RIC.unRESIN246.u16Register)  /*@rg@*/
#define RIC_RESIN246_RESSEL	(RIC.unRESIN246.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN246_PORTSEL	(RIC.unRESIN246.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN247	(RIC.unRESIN247.u16Register)  /*@rg@*/
#define RIC_RESIN247_RESSEL	(RIC.unRESIN247.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN247_PORTSEL	(RIC.unRESIN247.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN248	(RIC.unRESIN248.u16Register)  /*@rg@*/
#define RIC_RESIN248_RESSEL	(RIC.unRESIN248.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN248_PORTSEL	(RIC.unRESIN248.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN249	(RIC.unRESIN249.u16Register)  /*@rg@*/
#define RIC_RESIN249_RESSEL	(RIC.unRESIN249.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN249_PORTSEL	(RIC.unRESIN249.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN250	(RIC.unRESIN250.u16Register)  /*@rg@*/
#define RIC_RESIN250_RESSEL	(RIC.unRESIN250.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN250_PORTSEL	(RIC.unRESIN250.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN251	(RIC.unRESIN251.u16Register)  /*@rg@*/
#define RIC_RESIN251_RESSEL	(RIC.unRESIN251.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN251_PORTSEL	(RIC.unRESIN251.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN252	(RIC.unRESIN252.u16Register)  /*@rg@*/
#define RIC_RESIN252_RESSEL	(RIC.unRESIN252.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN252_PORTSEL	(RIC.unRESIN252.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN253	(RIC.unRESIN253.u16Register)  /*@rg@*/
#define RIC_RESIN253_RESSEL	(RIC.unRESIN253.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN253_PORTSEL	(RIC.unRESIN253.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN254	(RIC.unRESIN254.u16Register)  /*@rg@*/
#define RIC_RESIN254_RESSEL	(RIC.unRESIN254.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN254_PORTSEL	(RIC.unRESIN254.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN255	(RIC.unRESIN255.u16Register)  /*@rg@*/
#define RIC_RESIN255_RESSEL	(RIC.unRESIN255.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN255_PORTSEL	(RIC.unRESIN255.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN256	(RIC.unRESIN256.u16Register)  /*@rg@*/
#define RIC_RESIN256_RESSEL	(RIC.unRESIN256.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN256_PORTSEL	(RIC.unRESIN256.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN257	(RIC.unRESIN257.u16Register)  /*@rg@*/
#define RIC_RESIN257_RESSEL	(RIC.unRESIN257.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN257_PORTSEL	(RIC.unRESIN257.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN258	(RIC.unRESIN258.u16Register)  /*@rg@*/
#define RIC_RESIN258_RESSEL	(RIC.unRESIN258.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN258_PORTSEL	(RIC.unRESIN258.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN259	(RIC.unRESIN259.u16Register)  /*@rg@*/
#define RIC_RESIN259_RESSEL	(RIC.unRESIN259.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN259_PORTSEL	(RIC.unRESIN259.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN260	(RIC.unRESIN260.u16Register)  /*@rg@*/
#define RIC_RESIN260_RESSEL	(RIC.unRESIN260.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN260_PORTSEL	(RIC.unRESIN260.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN261	(RIC.unRESIN261.u16Register)  /*@rg@*/
#define RIC_RESIN261_RESSEL	(RIC.unRESIN261.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN261_PORTSEL	(RIC.unRESIN261.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN262	(RIC.unRESIN262.u16Register)  /*@rg@*/
#define RIC_RESIN262_RESSEL	(RIC.unRESIN262.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN262_PORTSEL	(RIC.unRESIN262.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN263	(RIC.unRESIN263.u16Register)  /*@rg@*/
#define RIC_RESIN263_RESSEL	(RIC.unRESIN263.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN263_PORTSEL	(RIC.unRESIN263.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN264	(RIC.unRESIN264.u16Register)  /*@rg@*/
#define RIC_RESIN264_RESSEL	(RIC.unRESIN264.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN264_PORTSEL	(RIC.unRESIN264.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN265	(RIC.unRESIN265.u16Register)  /*@rg@*/
#define RIC_RESIN265_RESSEL	(RIC.unRESIN265.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN265_PORTSEL	(RIC.unRESIN265.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN266	(RIC.unRESIN266.u16Register)  /*@rg@*/
#define RIC_RESIN266_RESSEL	(RIC.unRESIN266.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN266_PORTSEL	(RIC.unRESIN266.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN267	(RIC.unRESIN267.u16Register)  /*@rg@*/
#define RIC_RESIN267_RESSEL	(RIC.unRESIN267.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN267_PORTSEL	(RIC.unRESIN267.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN268	(RIC.unRESIN268.u16Register)  /*@rg@*/
#define RIC_RESIN268_RESSEL	(RIC.unRESIN268.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN268_PORTSEL	(RIC.unRESIN268.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN269	(RIC.unRESIN269.u16Register)  /*@rg@*/
#define RIC_RESIN269_RESSEL	(RIC.unRESIN269.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN269_PORTSEL	(RIC.unRESIN269.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN270	(RIC.unRESIN270.u16Register)  /*@rg@*/
#define RIC_RESIN270_RESSEL	(RIC.unRESIN270.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN270_PORTSEL	(RIC.unRESIN270.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN271	(RIC.unRESIN271.u16Register)  /*@rg@*/
#define RIC_RESIN271_RESSEL	(RIC.unRESIN271.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN271_PORTSEL	(RIC.unRESIN271.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN272	(RIC.unRESIN272.u16Register)  /*@rg@*/
#define RIC_RESIN272_RESSEL	(RIC.unRESIN272.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN272_PORTSEL	(RIC.unRESIN272.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN273	(RIC.unRESIN273.u16Register)  /*@rg@*/
#define RIC_RESIN273_RESSEL	(RIC.unRESIN273.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN273_PORTSEL	(RIC.unRESIN273.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN274	(RIC.unRESIN274.u16Register)  /*@rg@*/
#define RIC_RESIN274_RESSEL	(RIC.unRESIN274.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN274_PORTSEL	(RIC.unRESIN274.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN275	(RIC.unRESIN275.u16Register)  /*@rg@*/
#define RIC_RESIN275_RESSEL	(RIC.unRESIN275.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN275_PORTSEL	(RIC.unRESIN275.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN276	(RIC.unRESIN276.u16Register)  /*@rg@*/
#define RIC_RESIN276_RESSEL	(RIC.unRESIN276.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN276_PORTSEL	(RIC.unRESIN276.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN277	(RIC.unRESIN277.u16Register)  /*@rg@*/
#define RIC_RESIN277_RESSEL	(RIC.unRESIN277.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN277_PORTSEL	(RIC.unRESIN277.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN278	(RIC.unRESIN278.u16Register)  /*@rg@*/
#define RIC_RESIN278_RESSEL	(RIC.unRESIN278.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN278_PORTSEL	(RIC.unRESIN278.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN279	(RIC.unRESIN279.u16Register)  /*@rg@*/
#define RIC_RESIN279_RESSEL	(RIC.unRESIN279.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN279_PORTSEL	(RIC.unRESIN279.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN280	(RIC.unRESIN280.u16Register)  /*@rg@*/
#define RIC_RESIN280_RESSEL	(RIC.unRESIN280.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN280_PORTSEL	(RIC.unRESIN280.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN281	(RIC.unRESIN281.u16Register)  /*@rg@*/
#define RIC_RESIN281_RESSEL	(RIC.unRESIN281.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN281_PORTSEL	(RIC.unRESIN281.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN282	(RIC.unRESIN282.u16Register)  /*@rg@*/
#define RIC_RESIN282_RESSEL	(RIC.unRESIN282.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN282_PORTSEL	(RIC.unRESIN282.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN283	(RIC.unRESIN283.u16Register)  /*@rg@*/
#define RIC_RESIN283_RESSEL	(RIC.unRESIN283.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN283_PORTSEL	(RIC.unRESIN283.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN284	(RIC.unRESIN284.u16Register)  /*@rg@*/
#define RIC_RESIN284_RESSEL	(RIC.unRESIN284.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN284_PORTSEL	(RIC.unRESIN284.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN285	(RIC.unRESIN285.u16Register)  /*@rg@*/
#define RIC_RESIN285_RESSEL	(RIC.unRESIN285.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN285_PORTSEL	(RIC.unRESIN285.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN286	(RIC.unRESIN286.u16Register)  /*@rg@*/
#define RIC_RESIN286_RESSEL	(RIC.unRESIN286.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN286_PORTSEL	(RIC.unRESIN286.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN287	(RIC.unRESIN287.u16Register)  /*@rg@*/
#define RIC_RESIN287_RESSEL	(RIC.unRESIN287.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN287_PORTSEL	(RIC.unRESIN287.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN288	(RIC.unRESIN288.u16Register)  /*@rg@*/
#define RIC_RESIN288_RESSEL	(RIC.unRESIN288.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN288_PORTSEL	(RIC.unRESIN288.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN289	(RIC.unRESIN289.u16Register)  /*@rg@*/
#define RIC_RESIN289_RESSEL	(RIC.unRESIN289.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN289_PORTSEL	(RIC.unRESIN289.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN290	(RIC.unRESIN290.u16Register)  /*@rg@*/
#define RIC_RESIN290_RESSEL	(RIC.unRESIN290.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN290_PORTSEL	(RIC.unRESIN290.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN291	(RIC.unRESIN291.u16Register)  /*@rg@*/
#define RIC_RESIN291_RESSEL	(RIC.unRESIN291.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN291_PORTSEL	(RIC.unRESIN291.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN292	(RIC.unRESIN292.u16Register)  /*@rg@*/
#define RIC_RESIN292_RESSEL	(RIC.unRESIN292.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN292_PORTSEL	(RIC.unRESIN292.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN293	(RIC.unRESIN293.u16Register)  /*@rg@*/
#define RIC_RESIN293_RESSEL	(RIC.unRESIN293.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN293_PORTSEL	(RIC.unRESIN293.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN294	(RIC.unRESIN294.u16Register)  /*@rg@*/
#define RIC_RESIN294_RESSEL	(RIC.unRESIN294.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN294_PORTSEL	(RIC.unRESIN294.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN295	(RIC.unRESIN295.u16Register)  /*@rg@*/
#define RIC_RESIN295_RESSEL	(RIC.unRESIN295.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN295_PORTSEL	(RIC.unRESIN295.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN296	(RIC.unRESIN296.u16Register)  /*@rg@*/
#define RIC_RESIN296_RESSEL	(RIC.unRESIN296.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN296_PORTSEL	(RIC.unRESIN296.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN297	(RIC.unRESIN297.u16Register)  /*@rg@*/
#define RIC_RESIN297_RESSEL	(RIC.unRESIN297.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN297_PORTSEL	(RIC.unRESIN297.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN298	(RIC.unRESIN298.u16Register)  /*@rg@*/
#define RIC_RESIN298_RESSEL	(RIC.unRESIN298.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN298_PORTSEL	(RIC.unRESIN298.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN299	(RIC.unRESIN299.u16Register)  /*@rg@*/
#define RIC_RESIN299_RESSEL	(RIC.unRESIN299.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN299_PORTSEL	(RIC.unRESIN299.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN300	(RIC.unRESIN300.u16Register)  /*@rg@*/
#define RIC_RESIN300_RESSEL	(RIC.unRESIN300.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN300_PORTSEL	(RIC.unRESIN300.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN301	(RIC.unRESIN301.u16Register)  /*@rg@*/
#define RIC_RESIN301_RESSEL	(RIC.unRESIN301.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN301_PORTSEL	(RIC.unRESIN301.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN302	(RIC.unRESIN302.u16Register)  /*@rg@*/
#define RIC_RESIN302_RESSEL	(RIC.unRESIN302.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN302_PORTSEL	(RIC.unRESIN302.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN303	(RIC.unRESIN303.u16Register)  /*@rg@*/
#define RIC_RESIN303_RESSEL	(RIC.unRESIN303.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN303_PORTSEL	(RIC.unRESIN303.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN304	(RIC.unRESIN304.u16Register)  /*@rg@*/
#define RIC_RESIN304_RESSEL	(RIC.unRESIN304.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN304_PORTSEL	(RIC.unRESIN304.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN305	(RIC.unRESIN305.u16Register)  /*@rg@*/
#define RIC_RESIN305_RESSEL	(RIC.unRESIN305.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN305_PORTSEL	(RIC.unRESIN305.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN306	(RIC.unRESIN306.u16Register)  /*@rg@*/
#define RIC_RESIN306_RESSEL	(RIC.unRESIN306.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN306_PORTSEL	(RIC.unRESIN306.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN307	(RIC.unRESIN307.u16Register)  /*@rg@*/
#define RIC_RESIN307_RESSEL	(RIC.unRESIN307.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN307_PORTSEL	(RIC.unRESIN307.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN308	(RIC.unRESIN308.u16Register)  /*@rg@*/
#define RIC_RESIN308_RESSEL	(RIC.unRESIN308.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN308_PORTSEL	(RIC.unRESIN308.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN309	(RIC.unRESIN309.u16Register)  /*@rg@*/
#define RIC_RESIN309_RESSEL	(RIC.unRESIN309.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN309_PORTSEL	(RIC.unRESIN309.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN310	(RIC.unRESIN310.u16Register)  /*@rg@*/
#define RIC_RESIN310_RESSEL	(RIC.unRESIN310.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN310_PORTSEL	(RIC.unRESIN310.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN311	(RIC.unRESIN311.u16Register)  /*@rg@*/
#define RIC_RESIN311_RESSEL	(RIC.unRESIN311.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN311_PORTSEL	(RIC.unRESIN311.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN312	(RIC.unRESIN312.u16Register)  /*@rg@*/
#define RIC_RESIN312_RESSEL	(RIC.unRESIN312.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN312_PORTSEL	(RIC.unRESIN312.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN313	(RIC.unRESIN313.u16Register)  /*@rg@*/
#define RIC_RESIN313_RESSEL	(RIC.unRESIN313.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN313_PORTSEL	(RIC.unRESIN313.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN314	(RIC.unRESIN314.u16Register)  /*@rg@*/
#define RIC_RESIN314_RESSEL	(RIC.unRESIN314.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN314_PORTSEL	(RIC.unRESIN314.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN315	(RIC.unRESIN315.u16Register)  /*@rg@*/
#define RIC_RESIN315_RESSEL	(RIC.unRESIN315.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN315_PORTSEL	(RIC.unRESIN315.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN316	(RIC.unRESIN316.u16Register)  /*@rg@*/
#define RIC_RESIN316_RESSEL	(RIC.unRESIN316.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN316_PORTSEL	(RIC.unRESIN316.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN317	(RIC.unRESIN317.u16Register)  /*@rg@*/
#define RIC_RESIN317_RESSEL	(RIC.unRESIN317.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN317_PORTSEL	(RIC.unRESIN317.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN318	(RIC.unRESIN318.u16Register)  /*@rg@*/
#define RIC_RESIN318_RESSEL	(RIC.unRESIN318.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN318_PORTSEL	(RIC.unRESIN318.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN319	(RIC.unRESIN319.u16Register)  /*@rg@*/
#define RIC_RESIN319_RESSEL	(RIC.unRESIN319.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN319_PORTSEL	(RIC.unRESIN319.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN320	(RIC.unRESIN320.u16Register)  /*@rg@*/
#define RIC_RESIN320_RESSEL	(RIC.unRESIN320.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN320_PORTSEL	(RIC.unRESIN320.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN321	(RIC.unRESIN321.u16Register)  /*@rg@*/
#define RIC_RESIN321_RESSEL	(RIC.unRESIN321.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN321_PORTSEL	(RIC.unRESIN321.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN322	(RIC.unRESIN322.u16Register)  /*@rg@*/
#define RIC_RESIN322_RESSEL	(RIC.unRESIN322.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN322_PORTSEL	(RIC.unRESIN322.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN323	(RIC.unRESIN323.u16Register)  /*@rg@*/
#define RIC_RESIN323_RESSEL	(RIC.unRESIN323.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN323_PORTSEL	(RIC.unRESIN323.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN324	(RIC.unRESIN324.u16Register)  /*@rg@*/
#define RIC_RESIN324_RESSEL	(RIC.unRESIN324.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN324_PORTSEL	(RIC.unRESIN324.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN325	(RIC.unRESIN325.u16Register)  /*@rg@*/
#define RIC_RESIN325_RESSEL	(RIC.unRESIN325.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN325_PORTSEL	(RIC.unRESIN325.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN326	(RIC.unRESIN326.u16Register)  /*@rg@*/
#define RIC_RESIN326_RESSEL	(RIC.unRESIN326.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN326_PORTSEL	(RIC.unRESIN326.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN327	(RIC.unRESIN327.u16Register)  /*@rg@*/
#define RIC_RESIN327_RESSEL	(RIC.unRESIN327.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN327_PORTSEL	(RIC.unRESIN327.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN328	(RIC.unRESIN328.u16Register)  /*@rg@*/
#define RIC_RESIN328_RESSEL	(RIC.unRESIN328.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN328_PORTSEL	(RIC.unRESIN328.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN329	(RIC.unRESIN329.u16Register)  /*@rg@*/
#define RIC_RESIN329_RESSEL	(RIC.unRESIN329.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN329_PORTSEL	(RIC.unRESIN329.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN330	(RIC.unRESIN330.u16Register)  /*@rg@*/
#define RIC_RESIN330_RESSEL	(RIC.unRESIN330.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN330_PORTSEL	(RIC.unRESIN330.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN331	(RIC.unRESIN331.u16Register)  /*@rg@*/
#define RIC_RESIN331_RESSEL	(RIC.unRESIN331.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN331_PORTSEL	(RIC.unRESIN331.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN332	(RIC.unRESIN332.u16Register)  /*@rg@*/
#define RIC_RESIN332_RESSEL	(RIC.unRESIN332.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN332_PORTSEL	(RIC.unRESIN332.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN333	(RIC.unRESIN333.u16Register)  /*@rg@*/
#define RIC_RESIN333_RESSEL	(RIC.unRESIN333.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN333_PORTSEL	(RIC.unRESIN333.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN334	(RIC.unRESIN334.u16Register)  /*@rg@*/
#define RIC_RESIN334_RESSEL	(RIC.unRESIN334.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN334_PORTSEL	(RIC.unRESIN334.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN335	(RIC.unRESIN335.u16Register)  /*@rg@*/
#define RIC_RESIN335_RESSEL	(RIC.unRESIN335.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN335_PORTSEL	(RIC.unRESIN335.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN336	(RIC.unRESIN336.u16Register)  /*@rg@*/
#define RIC_RESIN336_RESSEL	(RIC.unRESIN336.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN336_PORTSEL	(RIC.unRESIN336.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN337	(RIC.unRESIN337.u16Register)  /*@rg@*/
#define RIC_RESIN337_RESSEL	(RIC.unRESIN337.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN337_PORTSEL	(RIC.unRESIN337.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN338	(RIC.unRESIN338.u16Register)  /*@rg@*/
#define RIC_RESIN338_RESSEL	(RIC.unRESIN338.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN338_PORTSEL	(RIC.unRESIN338.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN339	(RIC.unRESIN339.u16Register)  /*@rg@*/
#define RIC_RESIN339_RESSEL	(RIC.unRESIN339.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN339_PORTSEL	(RIC.unRESIN339.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN340	(RIC.unRESIN340.u16Register)  /*@rg@*/
#define RIC_RESIN340_RESSEL	(RIC.unRESIN340.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN340_PORTSEL	(RIC.unRESIN340.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN341	(RIC.unRESIN341.u16Register)  /*@rg@*/
#define RIC_RESIN341_RESSEL	(RIC.unRESIN341.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN341_PORTSEL	(RIC.unRESIN341.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN342	(RIC.unRESIN342.u16Register)  /*@rg@*/
#define RIC_RESIN342_RESSEL	(RIC.unRESIN342.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN342_PORTSEL	(RIC.unRESIN342.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN343	(RIC.unRESIN343.u16Register)  /*@rg@*/
#define RIC_RESIN343_RESSEL	(RIC.unRESIN343.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN343_PORTSEL	(RIC.unRESIN343.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN344	(RIC.unRESIN344.u16Register)  /*@rg@*/
#define RIC_RESIN344_RESSEL	(RIC.unRESIN344.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN344_PORTSEL	(RIC.unRESIN344.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN345	(RIC.unRESIN345.u16Register)  /*@rg@*/
#define RIC_RESIN345_RESSEL	(RIC.unRESIN345.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN345_PORTSEL	(RIC.unRESIN345.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN346	(RIC.unRESIN346.u16Register)  /*@rg@*/
#define RIC_RESIN346_RESSEL	(RIC.unRESIN346.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN346_PORTSEL	(RIC.unRESIN346.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN347	(RIC.unRESIN347.u16Register)  /*@rg@*/
#define RIC_RESIN347_RESSEL	(RIC.unRESIN347.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN347_PORTSEL	(RIC.unRESIN347.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN348	(RIC.unRESIN348.u16Register)  /*@rg@*/
#define RIC_RESIN348_RESSEL	(RIC.unRESIN348.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN348_PORTSEL	(RIC.unRESIN348.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN349	(RIC.unRESIN349.u16Register)  /*@rg@*/
#define RIC_RESIN349_RESSEL	(RIC.unRESIN349.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN349_PORTSEL	(RIC.unRESIN349.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN350	(RIC.unRESIN350.u16Register)  /*@rg@*/
#define RIC_RESIN350_RESSEL	(RIC.unRESIN350.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN350_PORTSEL	(RIC.unRESIN350.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN351	(RIC.unRESIN351.u16Register)  /*@rg@*/
#define RIC_RESIN351_RESSEL	(RIC.unRESIN351.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN351_PORTSEL	(RIC.unRESIN351.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN352	(RIC.unRESIN352.u16Register)  /*@rg@*/
#define RIC_RESIN352_RESSEL	(RIC.unRESIN352.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN352_PORTSEL	(RIC.unRESIN352.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN353	(RIC.unRESIN353.u16Register)  /*@rg@*/
#define RIC_RESIN353_RESSEL	(RIC.unRESIN353.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN353_PORTSEL	(RIC.unRESIN353.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN354	(RIC.unRESIN354.u16Register)  /*@rg@*/
#define RIC_RESIN354_RESSEL	(RIC.unRESIN354.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN354_PORTSEL	(RIC.unRESIN354.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN355	(RIC.unRESIN355.u16Register)  /*@rg@*/
#define RIC_RESIN355_RESSEL	(RIC.unRESIN355.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN355_PORTSEL	(RIC.unRESIN355.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN356	(RIC.unRESIN356.u16Register)  /*@rg@*/
#define RIC_RESIN356_RESSEL	(RIC.unRESIN356.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN356_PORTSEL	(RIC.unRESIN356.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN357	(RIC.unRESIN357.u16Register)  /*@rg@*/
#define RIC_RESIN357_RESSEL	(RIC.unRESIN357.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN357_PORTSEL	(RIC.unRESIN357.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN358	(RIC.unRESIN358.u16Register)  /*@rg@*/
#define RIC_RESIN358_RESSEL	(RIC.unRESIN358.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN358_PORTSEL	(RIC.unRESIN358.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN359	(RIC.unRESIN359.u16Register)  /*@rg@*/
#define RIC_RESIN359_RESSEL	(RIC.unRESIN359.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN359_PORTSEL	(RIC.unRESIN359.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN360	(RIC.unRESIN360.u16Register)  /*@rg@*/
#define RIC_RESIN360_RESSEL	(RIC.unRESIN360.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN360_PORTSEL	(RIC.unRESIN360.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN361	(RIC.unRESIN361.u16Register)  /*@rg@*/
#define RIC_RESIN361_RESSEL	(RIC.unRESIN361.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN361_PORTSEL	(RIC.unRESIN361.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN362	(RIC.unRESIN362.u16Register)  /*@rg@*/
#define RIC_RESIN362_RESSEL	(RIC.unRESIN362.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN362_PORTSEL	(RIC.unRESIN362.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN363	(RIC.unRESIN363.u16Register)  /*@rg@*/
#define RIC_RESIN363_RESSEL	(RIC.unRESIN363.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN363_PORTSEL	(RIC.unRESIN363.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN364	(RIC.unRESIN364.u16Register)  /*@rg@*/
#define RIC_RESIN364_RESSEL	(RIC.unRESIN364.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN364_PORTSEL	(RIC.unRESIN364.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN365	(RIC.unRESIN365.u16Register)  /*@rg@*/
#define RIC_RESIN365_RESSEL	(RIC.unRESIN365.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN365_PORTSEL	(RIC.unRESIN365.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN366	(RIC.unRESIN366.u16Register)  /*@rg@*/
#define RIC_RESIN366_RESSEL	(RIC.unRESIN366.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN366_PORTSEL	(RIC.unRESIN366.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN367	(RIC.unRESIN367.u16Register)  /*@rg@*/
#define RIC_RESIN367_RESSEL	(RIC.unRESIN367.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN367_PORTSEL	(RIC.unRESIN367.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN368	(RIC.unRESIN368.u16Register)  /*@rg@*/
#define RIC_RESIN368_RESSEL	(RIC.unRESIN368.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN368_PORTSEL	(RIC.unRESIN368.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN369	(RIC.unRESIN369.u16Register)  /*@rg@*/
#define RIC_RESIN369_RESSEL	(RIC.unRESIN369.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN369_PORTSEL	(RIC.unRESIN369.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN370	(RIC.unRESIN370.u16Register)  /*@rg@*/
#define RIC_RESIN370_RESSEL	(RIC.unRESIN370.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN370_PORTSEL	(RIC.unRESIN370.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN371	(RIC.unRESIN371.u16Register)  /*@rg@*/
#define RIC_RESIN371_RESSEL	(RIC.unRESIN371.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN371_PORTSEL	(RIC.unRESIN371.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN372	(RIC.unRESIN372.u16Register)  /*@rg@*/
#define RIC_RESIN372_RESSEL	(RIC.unRESIN372.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN372_PORTSEL	(RIC.unRESIN372.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN373	(RIC.unRESIN373.u16Register)  /*@rg@*/
#define RIC_RESIN373_RESSEL	(RIC.unRESIN373.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN373_PORTSEL	(RIC.unRESIN373.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN374	(RIC.unRESIN374.u16Register)  /*@rg@*/
#define RIC_RESIN374_RESSEL	(RIC.unRESIN374.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN374_PORTSEL	(RIC.unRESIN374.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN375	(RIC.unRESIN375.u16Register)  /*@rg@*/
#define RIC_RESIN375_RESSEL	(RIC.unRESIN375.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN375_PORTSEL	(RIC.unRESIN375.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN376	(RIC.unRESIN376.u16Register)  /*@rg@*/
#define RIC_RESIN376_RESSEL	(RIC.unRESIN376.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN376_PORTSEL	(RIC.unRESIN376.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN377	(RIC.unRESIN377.u16Register)  /*@rg@*/
#define RIC_RESIN377_RESSEL	(RIC.unRESIN377.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN377_PORTSEL	(RIC.unRESIN377.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN378	(RIC.unRESIN378.u16Register)  /*@rg@*/
#define RIC_RESIN378_RESSEL	(RIC.unRESIN378.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN378_PORTSEL	(RIC.unRESIN378.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN379	(RIC.unRESIN379.u16Register)  /*@rg@*/
#define RIC_RESIN379_RESSEL	(RIC.unRESIN379.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN379_PORTSEL	(RIC.unRESIN379.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN380	(RIC.unRESIN380.u16Register)  /*@rg@*/
#define RIC_RESIN380_RESSEL	(RIC.unRESIN380.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN380_PORTSEL	(RIC.unRESIN380.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN381	(RIC.unRESIN381.u16Register)  /*@rg@*/
#define RIC_RESIN381_RESSEL	(RIC.unRESIN381.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN381_PORTSEL	(RIC.unRESIN381.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN382	(RIC.unRESIN382.u16Register)  /*@rg@*/
#define RIC_RESIN382_RESSEL	(RIC.unRESIN382.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN382_PORTSEL	(RIC.unRESIN382.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN383	(RIC.unRESIN383.u16Register)  /*@rg@*/
#define RIC_RESIN383_RESSEL	(RIC.unRESIN383.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN383_PORTSEL	(RIC.unRESIN383.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN384	(RIC.unRESIN384.u16Register)  /*@rg@*/
#define RIC_RESIN384_RESSEL	(RIC.unRESIN384.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN384_PORTSEL	(RIC.unRESIN384.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN385	(RIC.unRESIN385.u16Register)  /*@rg@*/
#define RIC_RESIN385_RESSEL	(RIC.unRESIN385.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN385_PORTSEL	(RIC.unRESIN385.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN386	(RIC.unRESIN386.u16Register)  /*@rg@*/
#define RIC_RESIN386_RESSEL	(RIC.unRESIN386.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN386_PORTSEL	(RIC.unRESIN386.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN387	(RIC.unRESIN387.u16Register)  /*@rg@*/
#define RIC_RESIN387_RESSEL	(RIC.unRESIN387.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN387_PORTSEL	(RIC.unRESIN387.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN388	(RIC.unRESIN388.u16Register)  /*@rg@*/
#define RIC_RESIN388_RESSEL	(RIC.unRESIN388.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN388_PORTSEL	(RIC.unRESIN388.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN389	(RIC.unRESIN389.u16Register)  /*@rg@*/
#define RIC_RESIN389_RESSEL	(RIC.unRESIN389.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN389_PORTSEL	(RIC.unRESIN389.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN390	(RIC.unRESIN390.u16Register)  /*@rg@*/
#define RIC_RESIN390_RESSEL	(RIC.unRESIN390.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN390_PORTSEL	(RIC.unRESIN390.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN391	(RIC.unRESIN391.u16Register)  /*@rg@*/
#define RIC_RESIN391_RESSEL	(RIC.unRESIN391.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN391_PORTSEL	(RIC.unRESIN391.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN392	(RIC.unRESIN392.u16Register)  /*@rg@*/
#define RIC_RESIN392_RESSEL	(RIC.unRESIN392.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN392_PORTSEL	(RIC.unRESIN392.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN393	(RIC.unRESIN393.u16Register)  /*@rg@*/
#define RIC_RESIN393_RESSEL	(RIC.unRESIN393.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN393_PORTSEL	(RIC.unRESIN393.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN394	(RIC.unRESIN394.u16Register)  /*@rg@*/
#define RIC_RESIN394_RESSEL	(RIC.unRESIN394.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN394_PORTSEL	(RIC.unRESIN394.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN395	(RIC.unRESIN395.u16Register)  /*@rg@*/
#define RIC_RESIN395_RESSEL	(RIC.unRESIN395.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN395_PORTSEL	(RIC.unRESIN395.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN396	(RIC.unRESIN396.u16Register)  /*@rg@*/
#define RIC_RESIN396_RESSEL	(RIC.unRESIN396.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN396_PORTSEL	(RIC.unRESIN396.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN397	(RIC.unRESIN397.u16Register)  /*@rg@*/
#define RIC_RESIN397_RESSEL	(RIC.unRESIN397.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN397_PORTSEL	(RIC.unRESIN397.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN398	(RIC.unRESIN398.u16Register)  /*@rg@*/
#define RIC_RESIN398_RESSEL	(RIC.unRESIN398.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN398_PORTSEL	(RIC.unRESIN398.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN399	(RIC.unRESIN399.u16Register)  /*@rg@*/
#define RIC_RESIN399_RESSEL	(RIC.unRESIN399.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN399_PORTSEL	(RIC.unRESIN399.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN400	(RIC.unRESIN400.u16Register)  /*@rg@*/
#define RIC_RESIN400_RESSEL	(RIC.unRESIN400.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN400_PORTSEL	(RIC.unRESIN400.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN401	(RIC.unRESIN401.u16Register)  /*@rg@*/
#define RIC_RESIN401_RESSEL	(RIC.unRESIN401.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN401_PORTSEL	(RIC.unRESIN401.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN402	(RIC.unRESIN402.u16Register)  /*@rg@*/
#define RIC_RESIN402_RESSEL	(RIC.unRESIN402.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN402_PORTSEL	(RIC.unRESIN402.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN403	(RIC.unRESIN403.u16Register)  /*@rg@*/
#define RIC_RESIN403_RESSEL	(RIC.unRESIN403.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN403_PORTSEL	(RIC.unRESIN403.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN404	(RIC.unRESIN404.u16Register)  /*@rg@*/
#define RIC_RESIN404_RESSEL	(RIC.unRESIN404.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN404_PORTSEL	(RIC.unRESIN404.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN405	(RIC.unRESIN405.u16Register)  /*@rg@*/
#define RIC_RESIN405_RESSEL	(RIC.unRESIN405.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN405_PORTSEL	(RIC.unRESIN405.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN406	(RIC.unRESIN406.u16Register)  /*@rg@*/
#define RIC_RESIN406_RESSEL	(RIC.unRESIN406.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN406_PORTSEL	(RIC.unRESIN406.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN407	(RIC.unRESIN407.u16Register)  /*@rg@*/
#define RIC_RESIN407_RESSEL	(RIC.unRESIN407.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN407_PORTSEL	(RIC.unRESIN407.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN408	(RIC.unRESIN408.u16Register)  /*@rg@*/
#define RIC_RESIN408_RESSEL	(RIC.unRESIN408.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN408_PORTSEL	(RIC.unRESIN408.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN409	(RIC.unRESIN409.u16Register)  /*@rg@*/
#define RIC_RESIN409_RESSEL	(RIC.unRESIN409.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN409_PORTSEL	(RIC.unRESIN409.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN410	(RIC.unRESIN410.u16Register)  /*@rg@*/
#define RIC_RESIN410_RESSEL	(RIC.unRESIN410.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN410_PORTSEL	(RIC.unRESIN410.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN411	(RIC.unRESIN411.u16Register)  /*@rg@*/
#define RIC_RESIN411_RESSEL	(RIC.unRESIN411.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN411_PORTSEL	(RIC.unRESIN411.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN412	(RIC.unRESIN412.u16Register)  /*@rg@*/
#define RIC_RESIN412_RESSEL	(RIC.unRESIN412.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN412_PORTSEL	(RIC.unRESIN412.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN413	(RIC.unRESIN413.u16Register)  /*@rg@*/
#define RIC_RESIN413_RESSEL	(RIC.unRESIN413.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN413_PORTSEL	(RIC.unRESIN413.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN414	(RIC.unRESIN414.u16Register)  /*@rg@*/
#define RIC_RESIN414_RESSEL	(RIC.unRESIN414.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN414_PORTSEL	(RIC.unRESIN414.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN415	(RIC.unRESIN415.u16Register)  /*@rg@*/
#define RIC_RESIN415_RESSEL	(RIC.unRESIN415.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN415_PORTSEL	(RIC.unRESIN415.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN416	(RIC.unRESIN416.u16Register)  /*@rg@*/
#define RIC_RESIN416_RESSEL	(RIC.unRESIN416.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN416_PORTSEL	(RIC.unRESIN416.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN417	(RIC.unRESIN417.u16Register)  /*@rg@*/
#define RIC_RESIN417_RESSEL	(RIC.unRESIN417.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN417_PORTSEL	(RIC.unRESIN417.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN418	(RIC.unRESIN418.u16Register)  /*@rg@*/
#define RIC_RESIN418_RESSEL	(RIC.unRESIN418.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN418_PORTSEL	(RIC.unRESIN418.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN419	(RIC.unRESIN419.u16Register)  /*@rg@*/
#define RIC_RESIN419_RESSEL	(RIC.unRESIN419.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN419_PORTSEL	(RIC.unRESIN419.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN420	(RIC.unRESIN420.u16Register)  /*@rg@*/
#define RIC_RESIN420_RESSEL	(RIC.unRESIN420.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN420_PORTSEL	(RIC.unRESIN420.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN421	(RIC.unRESIN421.u16Register)  /*@rg@*/
#define RIC_RESIN421_RESSEL	(RIC.unRESIN421.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN421_PORTSEL	(RIC.unRESIN421.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN422	(RIC.unRESIN422.u16Register)  /*@rg@*/
#define RIC_RESIN422_RESSEL	(RIC.unRESIN422.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN422_PORTSEL	(RIC.unRESIN422.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN423	(RIC.unRESIN423.u16Register)  /*@rg@*/
#define RIC_RESIN423_RESSEL	(RIC.unRESIN423.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN423_PORTSEL	(RIC.unRESIN423.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN424	(RIC.unRESIN424.u16Register)  /*@rg@*/
#define RIC_RESIN424_RESSEL	(RIC.unRESIN424.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN424_PORTSEL	(RIC.unRESIN424.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN425	(RIC.unRESIN425.u16Register)  /*@rg@*/
#define RIC_RESIN425_RESSEL	(RIC.unRESIN425.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN425_PORTSEL	(RIC.unRESIN425.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN426	(RIC.unRESIN426.u16Register)  /*@rg@*/
#define RIC_RESIN426_RESSEL	(RIC.unRESIN426.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN426_PORTSEL	(RIC.unRESIN426.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN427	(RIC.unRESIN427.u16Register)  /*@rg@*/
#define RIC_RESIN427_RESSEL	(RIC.unRESIN427.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN427_PORTSEL	(RIC.unRESIN427.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN428	(RIC.unRESIN428.u16Register)  /*@rg@*/
#define RIC_RESIN428_RESSEL	(RIC.unRESIN428.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN428_PORTSEL	(RIC.unRESIN428.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN429	(RIC.unRESIN429.u16Register)  /*@rg@*/
#define RIC_RESIN429_RESSEL	(RIC.unRESIN429.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN429_PORTSEL	(RIC.unRESIN429.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN430	(RIC.unRESIN430.u16Register)  /*@rg@*/
#define RIC_RESIN430_RESSEL	(RIC.unRESIN430.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN430_PORTSEL	(RIC.unRESIN430.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN431	(RIC.unRESIN431.u16Register)  /*@rg@*/
#define RIC_RESIN431_RESSEL	(RIC.unRESIN431.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN431_PORTSEL	(RIC.unRESIN431.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN432	(RIC.unRESIN432.u16Register)  /*@rg@*/
#define RIC_RESIN432_RESSEL	(RIC.unRESIN432.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN432_PORTSEL	(RIC.unRESIN432.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN433	(RIC.unRESIN433.u16Register)  /*@rg@*/
#define RIC_RESIN433_RESSEL	(RIC.unRESIN433.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN433_PORTSEL	(RIC.unRESIN433.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN434	(RIC.unRESIN434.u16Register)  /*@rg@*/
#define RIC_RESIN434_RESSEL	(RIC.unRESIN434.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN434_PORTSEL	(RIC.unRESIN434.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN435	(RIC.unRESIN435.u16Register)  /*@rg@*/
#define RIC_RESIN435_RESSEL	(RIC.unRESIN435.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN435_PORTSEL	(RIC.unRESIN435.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN436	(RIC.unRESIN436.u16Register)  /*@rg@*/
#define RIC_RESIN436_RESSEL	(RIC.unRESIN436.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN436_PORTSEL	(RIC.unRESIN436.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN437	(RIC.unRESIN437.u16Register)  /*@rg@*/
#define RIC_RESIN437_RESSEL	(RIC.unRESIN437.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN437_PORTSEL	(RIC.unRESIN437.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN438	(RIC.unRESIN438.u16Register)  /*@rg@*/
#define RIC_RESIN438_RESSEL	(RIC.unRESIN438.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN438_PORTSEL	(RIC.unRESIN438.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN439	(RIC.unRESIN439.u16Register)  /*@rg@*/
#define RIC_RESIN439_RESSEL	(RIC.unRESIN439.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN439_PORTSEL	(RIC.unRESIN439.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN440	(RIC.unRESIN440.u16Register)  /*@rg@*/
#define RIC_RESIN440_RESSEL	(RIC.unRESIN440.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN440_PORTSEL	(RIC.unRESIN440.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN441	(RIC.unRESIN441.u16Register)  /*@rg@*/
#define RIC_RESIN441_RESSEL	(RIC.unRESIN441.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN441_PORTSEL	(RIC.unRESIN441.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN442	(RIC.unRESIN442.u16Register)  /*@rg@*/
#define RIC_RESIN442_RESSEL	(RIC.unRESIN442.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN442_PORTSEL	(RIC.unRESIN442.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN443	(RIC.unRESIN443.u16Register)  /*@rg@*/
#define RIC_RESIN443_RESSEL	(RIC.unRESIN443.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN443_PORTSEL	(RIC.unRESIN443.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN444	(RIC.unRESIN444.u16Register)  /*@rg@*/
#define RIC_RESIN444_RESSEL	(RIC.unRESIN444.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN444_PORTSEL	(RIC.unRESIN444.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN445	(RIC.unRESIN445.u16Register)  /*@rg@*/
#define RIC_RESIN445_RESSEL	(RIC.unRESIN445.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN445_PORTSEL	(RIC.unRESIN445.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN446	(RIC.unRESIN446.u16Register)  /*@rg@*/
#define RIC_RESIN446_RESSEL	(RIC.unRESIN446.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN446_PORTSEL	(RIC.unRESIN446.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN447	(RIC.unRESIN447.u16Register)  /*@rg@*/
#define RIC_RESIN447_RESSEL	(RIC.unRESIN447.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN447_PORTSEL	(RIC.unRESIN447.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN448	(RIC.unRESIN448.u16Register)  /*@rg@*/
#define RIC_RESIN448_RESSEL	(RIC.unRESIN448.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN448_PORTSEL	(RIC.unRESIN448.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN449	(RIC.unRESIN449.u16Register)  /*@rg@*/
#define RIC_RESIN449_RESSEL	(RIC.unRESIN449.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN449_PORTSEL	(RIC.unRESIN449.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN450	(RIC.unRESIN450.u16Register)  /*@rg@*/
#define RIC_RESIN450_RESSEL	(RIC.unRESIN450.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN450_PORTSEL	(RIC.unRESIN450.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN451	(RIC.unRESIN451.u16Register)  /*@rg@*/
#define RIC_RESIN451_RESSEL	(RIC.unRESIN451.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN451_PORTSEL	(RIC.unRESIN451.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN452	(RIC.unRESIN452.u16Register)  /*@rg@*/
#define RIC_RESIN452_RESSEL	(RIC.unRESIN452.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN452_PORTSEL	(RIC.unRESIN452.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN453	(RIC.unRESIN453.u16Register)  /*@rg@*/
#define RIC_RESIN453_RESSEL	(RIC.unRESIN453.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN453_PORTSEL	(RIC.unRESIN453.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN454	(RIC.unRESIN454.u16Register)  /*@rg@*/
#define RIC_RESIN454_RESSEL	(RIC.unRESIN454.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN454_PORTSEL	(RIC.unRESIN454.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN455	(RIC.unRESIN455.u16Register)  /*@rg@*/
#define RIC_RESIN455_RESSEL	(RIC.unRESIN455.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN455_PORTSEL	(RIC.unRESIN455.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN456	(RIC.unRESIN456.u16Register)  /*@rg@*/
#define RIC_RESIN456_RESSEL	(RIC.unRESIN456.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN456_PORTSEL	(RIC.unRESIN456.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN457	(RIC.unRESIN457.u16Register)  /*@rg@*/
#define RIC_RESIN457_RESSEL	(RIC.unRESIN457.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN457_PORTSEL	(RIC.unRESIN457.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN458	(RIC.unRESIN458.u16Register)  /*@rg@*/
#define RIC_RESIN458_RESSEL	(RIC.unRESIN458.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN458_PORTSEL	(RIC.unRESIN458.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN459	(RIC.unRESIN459.u16Register)  /*@rg@*/
#define RIC_RESIN459_RESSEL	(RIC.unRESIN459.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN459_PORTSEL	(RIC.unRESIN459.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN460	(RIC.unRESIN460.u16Register)  /*@rg@*/
#define RIC_RESIN460_RESSEL	(RIC.unRESIN460.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN460_PORTSEL	(RIC.unRESIN460.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN461	(RIC.unRESIN461.u16Register)  /*@rg@*/
#define RIC_RESIN461_RESSEL	(RIC.unRESIN461.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN461_PORTSEL	(RIC.unRESIN461.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN462	(RIC.unRESIN462.u16Register)  /*@rg@*/
#define RIC_RESIN462_RESSEL	(RIC.unRESIN462.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN462_PORTSEL	(RIC.unRESIN462.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN463	(RIC.unRESIN463.u16Register)  /*@rg@*/
#define RIC_RESIN463_RESSEL	(RIC.unRESIN463.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN463_PORTSEL	(RIC.unRESIN463.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN464	(RIC.unRESIN464.u16Register)  /*@rg@*/
#define RIC_RESIN464_RESSEL	(RIC.unRESIN464.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN464_PORTSEL	(RIC.unRESIN464.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN465	(RIC.unRESIN465.u16Register)  /*@rg@*/
#define RIC_RESIN465_RESSEL	(RIC.unRESIN465.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN465_PORTSEL	(RIC.unRESIN465.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN466	(RIC.unRESIN466.u16Register)  /*@rg@*/
#define RIC_RESIN466_RESSEL	(RIC.unRESIN466.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN466_PORTSEL	(RIC.unRESIN466.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN467	(RIC.unRESIN467.u16Register)  /*@rg@*/
#define RIC_RESIN467_RESSEL	(RIC.unRESIN467.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN467_PORTSEL	(RIC.unRESIN467.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN468	(RIC.unRESIN468.u16Register)  /*@rg@*/
#define RIC_RESIN468_RESSEL	(RIC.unRESIN468.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN468_PORTSEL	(RIC.unRESIN468.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN469	(RIC.unRESIN469.u16Register)  /*@rg@*/
#define RIC_RESIN469_RESSEL	(RIC.unRESIN469.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN469_PORTSEL	(RIC.unRESIN469.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN470	(RIC.unRESIN470.u16Register)  /*@rg@*/
#define RIC_RESIN470_RESSEL	(RIC.unRESIN470.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN470_PORTSEL	(RIC.unRESIN470.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN471	(RIC.unRESIN471.u16Register)  /*@rg@*/
#define RIC_RESIN471_RESSEL	(RIC.unRESIN471.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN471_PORTSEL	(RIC.unRESIN471.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN472	(RIC.unRESIN472.u16Register)  /*@rg@*/
#define RIC_RESIN472_RESSEL	(RIC.unRESIN472.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN472_PORTSEL	(RIC.unRESIN472.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN473	(RIC.unRESIN473.u16Register)  /*@rg@*/
#define RIC_RESIN473_RESSEL	(RIC.unRESIN473.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN473_PORTSEL	(RIC.unRESIN473.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN474	(RIC.unRESIN474.u16Register)  /*@rg@*/
#define RIC_RESIN474_RESSEL	(RIC.unRESIN474.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN474_PORTSEL	(RIC.unRESIN474.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN475	(RIC.unRESIN475.u16Register)  /*@rg@*/
#define RIC_RESIN475_RESSEL	(RIC.unRESIN475.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN475_PORTSEL	(RIC.unRESIN475.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN476	(RIC.unRESIN476.u16Register)  /*@rg@*/
#define RIC_RESIN476_RESSEL	(RIC.unRESIN476.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN476_PORTSEL	(RIC.unRESIN476.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN477	(RIC.unRESIN477.u16Register)  /*@rg@*/
#define RIC_RESIN477_RESSEL	(RIC.unRESIN477.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN477_PORTSEL	(RIC.unRESIN477.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN478	(RIC.unRESIN478.u16Register)  /*@rg@*/
#define RIC_RESIN478_RESSEL	(RIC.unRESIN478.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN478_PORTSEL	(RIC.unRESIN478.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN479	(RIC.unRESIN479.u16Register)  /*@rg@*/
#define RIC_RESIN479_RESSEL	(RIC.unRESIN479.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN479_PORTSEL	(RIC.unRESIN479.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN480	(RIC.unRESIN480.u16Register)  /*@rg@*/
#define RIC_RESIN480_RESSEL	(RIC.unRESIN480.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN480_PORTSEL	(RIC.unRESIN480.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN481	(RIC.unRESIN481.u16Register)  /*@rg@*/
#define RIC_RESIN481_RESSEL	(RIC.unRESIN481.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN481_PORTSEL	(RIC.unRESIN481.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN482	(RIC.unRESIN482.u16Register)  /*@rg@*/
#define RIC_RESIN482_RESSEL	(RIC.unRESIN482.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN482_PORTSEL	(RIC.unRESIN482.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN483	(RIC.unRESIN483.u16Register)  /*@rg@*/
#define RIC_RESIN483_RESSEL	(RIC.unRESIN483.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN483_PORTSEL	(RIC.unRESIN483.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN484	(RIC.unRESIN484.u16Register)  /*@rg@*/
#define RIC_RESIN484_RESSEL	(RIC.unRESIN484.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN484_PORTSEL	(RIC.unRESIN484.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN485	(RIC.unRESIN485.u16Register)  /*@rg@*/
#define RIC_RESIN485_RESSEL	(RIC.unRESIN485.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN485_PORTSEL	(RIC.unRESIN485.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN486	(RIC.unRESIN486.u16Register)  /*@rg@*/
#define RIC_RESIN486_RESSEL	(RIC.unRESIN486.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN486_PORTSEL	(RIC.unRESIN486.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN487	(RIC.unRESIN487.u16Register)  /*@rg@*/
#define RIC_RESIN487_RESSEL	(RIC.unRESIN487.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN487_PORTSEL	(RIC.unRESIN487.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN488	(RIC.unRESIN488.u16Register)  /*@rg@*/
#define RIC_RESIN488_RESSEL	(RIC.unRESIN488.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN488_PORTSEL	(RIC.unRESIN488.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN489	(RIC.unRESIN489.u16Register)  /*@rg@*/
#define RIC_RESIN489_RESSEL	(RIC.unRESIN489.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN489_PORTSEL	(RIC.unRESIN489.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN490	(RIC.unRESIN490.u16Register)  /*@rg@*/
#define RIC_RESIN490_RESSEL	(RIC.unRESIN490.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN490_PORTSEL	(RIC.unRESIN490.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN491	(RIC.unRESIN491.u16Register)  /*@rg@*/
#define RIC_RESIN491_RESSEL	(RIC.unRESIN491.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN491_PORTSEL	(RIC.unRESIN491.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN492	(RIC.unRESIN492.u16Register)  /*@rg@*/
#define RIC_RESIN492_RESSEL	(RIC.unRESIN492.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN492_PORTSEL	(RIC.unRESIN492.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN493	(RIC.unRESIN493.u16Register)  /*@rg@*/
#define RIC_RESIN493_RESSEL	(RIC.unRESIN493.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN493_PORTSEL	(RIC.unRESIN493.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN494	(RIC.unRESIN494.u16Register)  /*@rg@*/
#define RIC_RESIN494_RESSEL	(RIC.unRESIN494.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN494_PORTSEL	(RIC.unRESIN494.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN495	(RIC.unRESIN495.u16Register)  /*@rg@*/
#define RIC_RESIN495_RESSEL	(RIC.unRESIN495.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN495_PORTSEL	(RIC.unRESIN495.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN496	(RIC.unRESIN496.u16Register)  /*@rg@*/
#define RIC_RESIN496_RESSEL	(RIC.unRESIN496.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN496_PORTSEL	(RIC.unRESIN496.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN497	(RIC.unRESIN497.u16Register)  /*@rg@*/
#define RIC_RESIN497_RESSEL	(RIC.unRESIN497.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN497_PORTSEL	(RIC.unRESIN497.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN498	(RIC.unRESIN498.u16Register)  /*@rg@*/
#define RIC_RESIN498_RESSEL	(RIC.unRESIN498.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN498_PORTSEL	(RIC.unRESIN498.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN499	(RIC.unRESIN499.u16Register)  /*@rg@*/
#define RIC_RESIN499_RESSEL	(RIC.unRESIN499.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN499_PORTSEL	(RIC.unRESIN499.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN500	(RIC.unRESIN500.u16Register)  /*@rg@*/
#define RIC_RESIN500_RESSEL	(RIC.unRESIN500.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN500_PORTSEL	(RIC.unRESIN500.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN501	(RIC.unRESIN501.u16Register)  /*@rg@*/
#define RIC_RESIN501_RESSEL	(RIC.unRESIN501.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN501_PORTSEL	(RIC.unRESIN501.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN502	(RIC.unRESIN502.u16Register)  /*@rg@*/
#define RIC_RESIN502_RESSEL	(RIC.unRESIN502.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN502_PORTSEL	(RIC.unRESIN502.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN503	(RIC.unRESIN503.u16Register)  /*@rg@*/
#define RIC_RESIN503_RESSEL	(RIC.unRESIN503.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN503_PORTSEL	(RIC.unRESIN503.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN504	(RIC.unRESIN504.u16Register)  /*@rg@*/
#define RIC_RESIN504_RESSEL	(RIC.unRESIN504.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN504_PORTSEL	(RIC.unRESIN504.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN505	(RIC.unRESIN505.u16Register)  /*@rg@*/
#define RIC_RESIN505_RESSEL	(RIC.unRESIN505.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN505_PORTSEL	(RIC.unRESIN505.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN506	(RIC.unRESIN506.u16Register)  /*@rg@*/
#define RIC_RESIN506_RESSEL	(RIC.unRESIN506.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN506_PORTSEL	(RIC.unRESIN506.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN507	(RIC.unRESIN507.u16Register)  /*@rg@*/
#define RIC_RESIN507_RESSEL	(RIC.unRESIN507.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN507_PORTSEL	(RIC.unRESIN507.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN508	(RIC.unRESIN508.u16Register)  /*@rg@*/
#define RIC_RESIN508_RESSEL	(RIC.unRESIN508.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN508_PORTSEL	(RIC.unRESIN508.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN509	(RIC.unRESIN509.u16Register)  /*@rg@*/
#define RIC_RESIN509_RESSEL	(RIC.unRESIN509.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN509_PORTSEL	(RIC.unRESIN509.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN510	(RIC.unRESIN510.u16Register)  /*@rg@*/
#define RIC_RESIN510_RESSEL	(RIC.unRESIN510.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN510_PORTSEL	(RIC.unRESIN510.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN511	(RIC.unRESIN511.u16Register)  /*@rg@*/
#define RIC_RESIN511_RESSEL	(RIC.unRESIN511.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN511_PORTSEL	(RIC.unRESIN511.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN512	(RIC.unRESIN512.u16Register)  /*@rg@*/
#define RIC_RESIN512_RESSEL	(RIC.unRESIN512.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN512_PORTSEL	(RIC.unRESIN512.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN513	(RIC.unRESIN513.u16Register)  /*@rg@*/
#define RIC_RESIN513_RESSEL	(RIC.unRESIN513.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN513_PORTSEL	(RIC.unRESIN513.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN514	(RIC.unRESIN514.u16Register)  /*@rg@*/
#define RIC_RESIN514_RESSEL	(RIC.unRESIN514.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN514_PORTSEL	(RIC.unRESIN514.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN515	(RIC.unRESIN515.u16Register)  /*@rg@*/
#define RIC_RESIN515_RESSEL	(RIC.unRESIN515.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN515_PORTSEL	(RIC.unRESIN515.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN516	(RIC.unRESIN516.u16Register)  /*@rg@*/
#define RIC_RESIN516_RESSEL	(RIC.unRESIN516.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN516_PORTSEL	(RIC.unRESIN516.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN517	(RIC.unRESIN517.u16Register)  /*@rg@*/
#define RIC_RESIN517_RESSEL	(RIC.unRESIN517.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN517_PORTSEL	(RIC.unRESIN517.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN518	(RIC.unRESIN518.u16Register)  /*@rg@*/
#define RIC_RESIN518_RESSEL	(RIC.unRESIN518.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN518_PORTSEL	(RIC.unRESIN518.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN519	(RIC.unRESIN519.u16Register)  /*@rg@*/
#define RIC_RESIN519_RESSEL	(RIC.unRESIN519.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN519_PORTSEL	(RIC.unRESIN519.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN520	(RIC.unRESIN520.u16Register)  /*@rg@*/
#define RIC_RESIN520_RESSEL	(RIC.unRESIN520.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN520_PORTSEL	(RIC.unRESIN520.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN521	(RIC.unRESIN521.u16Register)  /*@rg@*/
#define RIC_RESIN521_RESSEL	(RIC.unRESIN521.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN521_PORTSEL	(RIC.unRESIN521.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN522	(RIC.unRESIN522.u16Register)  /*@rg@*/
#define RIC_RESIN522_RESSEL	(RIC.unRESIN522.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN522_PORTSEL	(RIC.unRESIN522.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN523	(RIC.unRESIN523.u16Register)  /*@rg@*/
#define RIC_RESIN523_RESSEL	(RIC.unRESIN523.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN523_PORTSEL	(RIC.unRESIN523.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN524	(RIC.unRESIN524.u16Register)  /*@rg@*/
#define RIC_RESIN524_RESSEL	(RIC.unRESIN524.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN524_PORTSEL	(RIC.unRESIN524.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN525	(RIC.unRESIN525.u16Register)  /*@rg@*/
#define RIC_RESIN525_RESSEL	(RIC.unRESIN525.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN525_PORTSEL	(RIC.unRESIN525.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN526	(RIC.unRESIN526.u16Register)  /*@rg@*/
#define RIC_RESIN526_RESSEL	(RIC.unRESIN526.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN526_PORTSEL	(RIC.unRESIN526.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN527	(RIC.unRESIN527.u16Register)  /*@rg@*/
#define RIC_RESIN527_RESSEL	(RIC.unRESIN527.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN527_PORTSEL	(RIC.unRESIN527.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN528	(RIC.unRESIN528.u16Register)  /*@rg@*/
#define RIC_RESIN528_RESSEL	(RIC.unRESIN528.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN528_PORTSEL	(RIC.unRESIN528.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN529	(RIC.unRESIN529.u16Register)  /*@rg@*/
#define RIC_RESIN529_RESSEL	(RIC.unRESIN529.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN529_PORTSEL	(RIC.unRESIN529.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN530	(RIC.unRESIN530.u16Register)  /*@rg@*/
#define RIC_RESIN530_RESSEL	(RIC.unRESIN530.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN530_PORTSEL	(RIC.unRESIN530.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN531	(RIC.unRESIN531.u16Register)  /*@rg@*/
#define RIC_RESIN531_RESSEL	(RIC.unRESIN531.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN531_PORTSEL	(RIC.unRESIN531.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN532	(RIC.unRESIN532.u16Register)  /*@rg@*/
#define RIC_RESIN532_RESSEL	(RIC.unRESIN532.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN532_PORTSEL	(RIC.unRESIN532.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN533	(RIC.unRESIN533.u16Register)  /*@rg@*/
#define RIC_RESIN533_RESSEL	(RIC.unRESIN533.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN533_PORTSEL	(RIC.unRESIN533.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN534	(RIC.unRESIN534.u16Register)  /*@rg@*/
#define RIC_RESIN534_RESSEL	(RIC.unRESIN534.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN534_PORTSEL	(RIC.unRESIN534.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN535	(RIC.unRESIN535.u16Register)  /*@rg@*/
#define RIC_RESIN535_RESSEL	(RIC.unRESIN535.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN535_PORTSEL	(RIC.unRESIN535.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN536	(RIC.unRESIN536.u16Register)  /*@rg@*/
#define RIC_RESIN536_RESSEL	(RIC.unRESIN536.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN536_PORTSEL	(RIC.unRESIN536.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN537	(RIC.unRESIN537.u16Register)  /*@rg@*/
#define RIC_RESIN537_RESSEL	(RIC.unRESIN537.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN537_PORTSEL	(RIC.unRESIN537.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN538	(RIC.unRESIN538.u16Register)  /*@rg@*/
#define RIC_RESIN538_RESSEL	(RIC.unRESIN538.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN538_PORTSEL	(RIC.unRESIN538.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN539	(RIC.unRESIN539.u16Register)  /*@rg@*/
#define RIC_RESIN539_RESSEL	(RIC.unRESIN539.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN539_PORTSEL	(RIC.unRESIN539.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN540	(RIC.unRESIN540.u16Register)  /*@rg@*/
#define RIC_RESIN540_RESSEL	(RIC.unRESIN540.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN540_PORTSEL	(RIC.unRESIN540.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN541	(RIC.unRESIN541.u16Register)  /*@rg@*/
#define RIC_RESIN541_RESSEL	(RIC.unRESIN541.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN541_PORTSEL	(RIC.unRESIN541.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN542	(RIC.unRESIN542.u16Register)  /*@rg@*/
#define RIC_RESIN542_RESSEL	(RIC.unRESIN542.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN542_PORTSEL	(RIC.unRESIN542.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN543	(RIC.unRESIN543.u16Register)  /*@rg@*/
#define RIC_RESIN543_RESSEL	(RIC.unRESIN543.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN543_PORTSEL	(RIC.unRESIN543.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN544	(RIC.unRESIN544.u16Register)  /*@rg@*/
#define RIC_RESIN544_RESSEL	(RIC.unRESIN544.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN544_PORTSEL	(RIC.unRESIN544.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN545	(RIC.unRESIN545.u16Register)  /*@rg@*/
#define RIC_RESIN545_RESSEL	(RIC.unRESIN545.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN545_PORTSEL	(RIC.unRESIN545.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN546	(RIC.unRESIN546.u16Register)  /*@rg@*/
#define RIC_RESIN546_RESSEL	(RIC.unRESIN546.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN546_PORTSEL	(RIC.unRESIN546.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN547	(RIC.unRESIN547.u16Register)  /*@rg@*/
#define RIC_RESIN547_RESSEL	(RIC.unRESIN547.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN547_PORTSEL	(RIC.unRESIN547.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN548	(RIC.unRESIN548.u16Register)  /*@rg@*/
#define RIC_RESIN548_RESSEL	(RIC.unRESIN548.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN548_PORTSEL	(RIC.unRESIN548.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN549	(RIC.unRESIN549.u16Register)  /*@rg@*/
#define RIC_RESIN549_RESSEL	(RIC.unRESIN549.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN549_PORTSEL	(RIC.unRESIN549.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN550	(RIC.unRESIN550.u16Register)  /*@rg@*/
#define RIC_RESIN550_RESSEL	(RIC.unRESIN550.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN550_PORTSEL	(RIC.unRESIN550.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN551	(RIC.unRESIN551.u16Register)  /*@rg@*/
#define RIC_RESIN551_RESSEL	(RIC.unRESIN551.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN551_PORTSEL	(RIC.unRESIN551.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN552	(RIC.unRESIN552.u16Register)  /*@rg@*/
#define RIC_RESIN552_RESSEL	(RIC.unRESIN552.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN552_PORTSEL	(RIC.unRESIN552.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN553	(RIC.unRESIN553.u16Register)  /*@rg@*/
#define RIC_RESIN553_RESSEL	(RIC.unRESIN553.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN553_PORTSEL	(RIC.unRESIN553.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN554	(RIC.unRESIN554.u16Register)  /*@rg@*/
#define RIC_RESIN554_RESSEL	(RIC.unRESIN554.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN554_PORTSEL	(RIC.unRESIN554.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN555	(RIC.unRESIN555.u16Register)  /*@rg@*/
#define RIC_RESIN555_RESSEL	(RIC.unRESIN555.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN555_PORTSEL	(RIC.unRESIN555.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN556	(RIC.unRESIN556.u16Register)  /*@rg@*/
#define RIC_RESIN556_RESSEL	(RIC.unRESIN556.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN556_PORTSEL	(RIC.unRESIN556.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN557	(RIC.unRESIN557.u16Register)  /*@rg@*/
#define RIC_RESIN557_RESSEL	(RIC.unRESIN557.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN557_PORTSEL	(RIC.unRESIN557.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN558	(RIC.unRESIN558.u16Register)  /*@rg@*/
#define RIC_RESIN558_RESSEL	(RIC.unRESIN558.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN558_PORTSEL	(RIC.unRESIN558.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN559	(RIC.unRESIN559.u16Register)  /*@rg@*/
#define RIC_RESIN559_RESSEL	(RIC.unRESIN559.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN559_PORTSEL	(RIC.unRESIN559.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN560	(RIC.unRESIN560.u16Register)  /*@rg@*/
#define RIC_RESIN560_RESSEL	(RIC.unRESIN560.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN560_PORTSEL	(RIC.unRESIN560.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN561	(RIC.unRESIN561.u16Register)  /*@rg@*/
#define RIC_RESIN561_RESSEL	(RIC.unRESIN561.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN561_PORTSEL	(RIC.unRESIN561.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN562	(RIC.unRESIN562.u16Register)  /*@rg@*/
#define RIC_RESIN562_RESSEL	(RIC.unRESIN562.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN562_PORTSEL	(RIC.unRESIN562.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN563	(RIC.unRESIN563.u16Register)  /*@rg@*/
#define RIC_RESIN563_RESSEL	(RIC.unRESIN563.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN563_PORTSEL	(RIC.unRESIN563.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN564	(RIC.unRESIN564.u16Register)  /*@rg@*/
#define RIC_RESIN564_RESSEL	(RIC.unRESIN564.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN564_PORTSEL	(RIC.unRESIN564.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN565	(RIC.unRESIN565.u16Register)  /*@rg@*/
#define RIC_RESIN565_RESSEL	(RIC.unRESIN565.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN565_PORTSEL	(RIC.unRESIN565.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN566	(RIC.unRESIN566.u16Register)  /*@rg@*/
#define RIC_RESIN566_RESSEL	(RIC.unRESIN566.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN566_PORTSEL	(RIC.unRESIN566.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN567	(RIC.unRESIN567.u16Register)  /*@rg@*/
#define RIC_RESIN567_RESSEL	(RIC.unRESIN567.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN567_PORTSEL	(RIC.unRESIN567.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN568	(RIC.unRESIN568.u16Register)  /*@rg@*/
#define RIC_RESIN568_RESSEL	(RIC.unRESIN568.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN568_PORTSEL	(RIC.unRESIN568.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN569	(RIC.unRESIN569.u16Register)  /*@rg@*/
#define RIC_RESIN569_RESSEL	(RIC.unRESIN569.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN569_PORTSEL	(RIC.unRESIN569.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN570	(RIC.unRESIN570.u16Register)  /*@rg@*/
#define RIC_RESIN570_RESSEL	(RIC.unRESIN570.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN570_PORTSEL	(RIC.unRESIN570.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN571	(RIC.unRESIN571.u16Register)  /*@rg@*/
#define RIC_RESIN571_RESSEL	(RIC.unRESIN571.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN571_PORTSEL	(RIC.unRESIN571.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN572	(RIC.unRESIN572.u16Register)  /*@rg@*/
#define RIC_RESIN572_RESSEL	(RIC.unRESIN572.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN572_PORTSEL	(RIC.unRESIN572.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN573	(RIC.unRESIN573.u16Register)  /*@rg@*/
#define RIC_RESIN573_RESSEL	(RIC.unRESIN573.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN573_PORTSEL	(RIC.unRESIN573.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN574	(RIC.unRESIN574.u16Register)  /*@rg@*/
#define RIC_RESIN574_RESSEL	(RIC.unRESIN574.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN574_PORTSEL	(RIC.unRESIN574.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN575	(RIC.unRESIN575.u16Register)  /*@rg@*/
#define RIC_RESIN575_RESSEL	(RIC.unRESIN575.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN575_PORTSEL	(RIC.unRESIN575.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN576	(RIC.unRESIN576.u16Register)  /*@rg@*/
#define RIC_RESIN576_RESSEL	(RIC.unRESIN576.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN576_PORTSEL	(RIC.unRESIN576.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN577	(RIC.unRESIN577.u16Register)  /*@rg@*/
#define RIC_RESIN577_RESSEL	(RIC.unRESIN577.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN577_PORTSEL	(RIC.unRESIN577.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN578	(RIC.unRESIN578.u16Register)  /*@rg@*/
#define RIC_RESIN578_RESSEL	(RIC.unRESIN578.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN578_PORTSEL	(RIC.unRESIN578.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN579	(RIC.unRESIN579.u16Register)  /*@rg@*/
#define RIC_RESIN579_RESSEL	(RIC.unRESIN579.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN579_PORTSEL	(RIC.unRESIN579.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN580	(RIC.unRESIN580.u16Register)  /*@rg@*/
#define RIC_RESIN580_RESSEL	(RIC.unRESIN580.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN580_PORTSEL	(RIC.unRESIN580.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN581	(RIC.unRESIN581.u16Register)  /*@rg@*/
#define RIC_RESIN581_RESSEL	(RIC.unRESIN581.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN581_PORTSEL	(RIC.unRESIN581.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN582	(RIC.unRESIN582.u16Register)  /*@rg@*/
#define RIC_RESIN582_RESSEL	(RIC.unRESIN582.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN582_PORTSEL	(RIC.unRESIN582.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN583	(RIC.unRESIN583.u16Register)  /*@rg@*/
#define RIC_RESIN583_RESSEL	(RIC.unRESIN583.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN583_PORTSEL	(RIC.unRESIN583.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN584	(RIC.unRESIN584.u16Register)  /*@rg@*/
#define RIC_RESIN584_RESSEL	(RIC.unRESIN584.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN584_PORTSEL	(RIC.unRESIN584.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN585	(RIC.unRESIN585.u16Register)  /*@rg@*/
#define RIC_RESIN585_RESSEL	(RIC.unRESIN585.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN585_PORTSEL	(RIC.unRESIN585.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN586	(RIC.unRESIN586.u16Register)  /*@rg@*/
#define RIC_RESIN586_RESSEL	(RIC.unRESIN586.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN586_PORTSEL	(RIC.unRESIN586.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN587	(RIC.unRESIN587.u16Register)  /*@rg@*/
#define RIC_RESIN587_RESSEL	(RIC.unRESIN587.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN587_PORTSEL	(RIC.unRESIN587.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN588	(RIC.unRESIN588.u16Register)  /*@rg@*/
#define RIC_RESIN588_RESSEL	(RIC.unRESIN588.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN588_PORTSEL	(RIC.unRESIN588.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN589	(RIC.unRESIN589.u16Register)  /*@rg@*/
#define RIC_RESIN589_RESSEL	(RIC.unRESIN589.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN589_PORTSEL	(RIC.unRESIN589.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN590	(RIC.unRESIN590.u16Register)  /*@rg@*/
#define RIC_RESIN590_RESSEL	(RIC.unRESIN590.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN590_PORTSEL	(RIC.unRESIN590.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN591	(RIC.unRESIN591.u16Register)  /*@rg@*/
#define RIC_RESIN591_RESSEL	(RIC.unRESIN591.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN591_PORTSEL	(RIC.unRESIN591.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN592	(RIC.unRESIN592.u16Register)  /*@rg@*/
#define RIC_RESIN592_RESSEL	(RIC.unRESIN592.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN592_PORTSEL	(RIC.unRESIN592.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN593	(RIC.unRESIN593.u16Register)  /*@rg@*/
#define RIC_RESIN593_RESSEL	(RIC.unRESIN593.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN593_PORTSEL	(RIC.unRESIN593.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN594	(RIC.unRESIN594.u16Register)  /*@rg@*/
#define RIC_RESIN594_RESSEL	(RIC.unRESIN594.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN594_PORTSEL	(RIC.unRESIN594.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN595	(RIC.unRESIN595.u16Register)  /*@rg@*/
#define RIC_RESIN595_RESSEL	(RIC.unRESIN595.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN595_PORTSEL	(RIC.unRESIN595.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN596	(RIC.unRESIN596.u16Register)  /*@rg@*/
#define RIC_RESIN596_RESSEL	(RIC.unRESIN596.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN596_PORTSEL	(RIC.unRESIN596.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN597	(RIC.unRESIN597.u16Register)  /*@rg@*/
#define RIC_RESIN597_RESSEL	(RIC.unRESIN597.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN597_PORTSEL	(RIC.unRESIN597.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN598	(RIC.unRESIN598.u16Register)  /*@rg@*/
#define RIC_RESIN598_RESSEL	(RIC.unRESIN598.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN598_PORTSEL	(RIC.unRESIN598.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN599	(RIC.unRESIN599.u16Register)  /*@rg@*/
#define RIC_RESIN599_RESSEL	(RIC.unRESIN599.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN599_PORTSEL	(RIC.unRESIN599.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN600	(RIC.unRESIN600.u16Register)  /*@rg@*/
#define RIC_RESIN600_RESSEL	(RIC.unRESIN600.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN600_PORTSEL	(RIC.unRESIN600.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN601	(RIC.unRESIN601.u16Register)  /*@rg@*/
#define RIC_RESIN601_RESSEL	(RIC.unRESIN601.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN601_PORTSEL	(RIC.unRESIN601.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN602	(RIC.unRESIN602.u16Register)  /*@rg@*/
#define RIC_RESIN602_RESSEL	(RIC.unRESIN602.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN602_PORTSEL	(RIC.unRESIN602.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN603	(RIC.unRESIN603.u16Register)  /*@rg@*/
#define RIC_RESIN603_RESSEL	(RIC.unRESIN603.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN603_PORTSEL	(RIC.unRESIN603.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN604	(RIC.unRESIN604.u16Register)  /*@rg@*/
#define RIC_RESIN604_RESSEL	(RIC.unRESIN604.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN604_PORTSEL	(RIC.unRESIN604.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN605	(RIC.unRESIN605.u16Register)  /*@rg@*/
#define RIC_RESIN605_RESSEL	(RIC.unRESIN605.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN605_PORTSEL	(RIC.unRESIN605.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN606	(RIC.unRESIN606.u16Register)  /*@rg@*/
#define RIC_RESIN606_RESSEL	(RIC.unRESIN606.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN606_PORTSEL	(RIC.unRESIN606.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN607	(RIC.unRESIN607.u16Register)  /*@rg@*/
#define RIC_RESIN607_RESSEL	(RIC.unRESIN607.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN607_PORTSEL	(RIC.unRESIN607.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN608	(RIC.unRESIN608.u16Register)  /*@rg@*/
#define RIC_RESIN608_RESSEL	(RIC.unRESIN608.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN608_PORTSEL	(RIC.unRESIN608.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN609	(RIC.unRESIN609.u16Register)  /*@rg@*/
#define RIC_RESIN609_RESSEL	(RIC.unRESIN609.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN609_PORTSEL	(RIC.unRESIN609.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN610	(RIC.unRESIN610.u16Register)  /*@rg@*/
#define RIC_RESIN610_RESSEL	(RIC.unRESIN610.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN610_PORTSEL	(RIC.unRESIN610.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN611	(RIC.unRESIN611.u16Register)  /*@rg@*/
#define RIC_RESIN611_RESSEL	(RIC.unRESIN611.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN611_PORTSEL	(RIC.unRESIN611.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN612	(RIC.unRESIN612.u16Register)  /*@rg@*/
#define RIC_RESIN612_RESSEL	(RIC.unRESIN612.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN612_PORTSEL	(RIC.unRESIN612.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN613	(RIC.unRESIN613.u16Register)  /*@rg@*/
#define RIC_RESIN613_RESSEL	(RIC.unRESIN613.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN613_PORTSEL	(RIC.unRESIN613.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN614	(RIC.unRESIN614.u16Register)  /*@rg@*/
#define RIC_RESIN614_RESSEL	(RIC.unRESIN614.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN614_PORTSEL	(RIC.unRESIN614.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN615	(RIC.unRESIN615.u16Register)  /*@rg@*/
#define RIC_RESIN615_RESSEL	(RIC.unRESIN615.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN615_PORTSEL	(RIC.unRESIN615.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN616	(RIC.unRESIN616.u16Register)  /*@rg@*/
#define RIC_RESIN616_RESSEL	(RIC.unRESIN616.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN616_PORTSEL	(RIC.unRESIN616.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN617	(RIC.unRESIN617.u16Register)  /*@rg@*/
#define RIC_RESIN617_RESSEL	(RIC.unRESIN617.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN617_PORTSEL	(RIC.unRESIN617.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN618	(RIC.unRESIN618.u16Register)  /*@rg@*/
#define RIC_RESIN618_RESSEL	(RIC.unRESIN618.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN618_PORTSEL	(RIC.unRESIN618.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN619	(RIC.unRESIN619.u16Register)  /*@rg@*/
#define RIC_RESIN619_RESSEL	(RIC.unRESIN619.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN619_PORTSEL	(RIC.unRESIN619.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN620	(RIC.unRESIN620.u16Register)  /*@rg@*/
#define RIC_RESIN620_RESSEL	(RIC.unRESIN620.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN620_PORTSEL	(RIC.unRESIN620.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN621	(RIC.unRESIN621.u16Register)  /*@rg@*/
#define RIC_RESIN621_RESSEL	(RIC.unRESIN621.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN621_PORTSEL	(RIC.unRESIN621.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN622	(RIC.unRESIN622.u16Register)  /*@rg@*/
#define RIC_RESIN622_RESSEL	(RIC.unRESIN622.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN622_PORTSEL	(RIC.unRESIN622.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN623	(RIC.unRESIN623.u16Register)  /*@rg@*/
#define RIC_RESIN623_RESSEL	(RIC.unRESIN623.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN623_PORTSEL	(RIC.unRESIN623.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN624	(RIC.unRESIN624.u16Register)  /*@rg@*/
#define RIC_RESIN624_RESSEL	(RIC.unRESIN624.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN624_PORTSEL	(RIC.unRESIN624.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN625	(RIC.unRESIN625.u16Register)  /*@rg@*/
#define RIC_RESIN625_RESSEL	(RIC.unRESIN625.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN625_PORTSEL	(RIC.unRESIN625.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN626	(RIC.unRESIN626.u16Register)  /*@rg@*/
#define RIC_RESIN626_RESSEL	(RIC.unRESIN626.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN626_PORTSEL	(RIC.unRESIN626.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN627	(RIC.unRESIN627.u16Register)  /*@rg@*/
#define RIC_RESIN627_RESSEL	(RIC.unRESIN627.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN627_PORTSEL	(RIC.unRESIN627.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN628	(RIC.unRESIN628.u16Register)  /*@rg@*/
#define RIC_RESIN628_RESSEL	(RIC.unRESIN628.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN628_PORTSEL	(RIC.unRESIN628.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN629	(RIC.unRESIN629.u16Register)  /*@rg@*/
#define RIC_RESIN629_RESSEL	(RIC.unRESIN629.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN629_PORTSEL	(RIC.unRESIN629.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN630	(RIC.unRESIN630.u16Register)  /*@rg@*/
#define RIC_RESIN630_RESSEL	(RIC.unRESIN630.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN630_PORTSEL	(RIC.unRESIN630.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN631	(RIC.unRESIN631.u16Register)  /*@rg@*/
#define RIC_RESIN631_RESSEL	(RIC.unRESIN631.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN631_PORTSEL	(RIC.unRESIN631.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN632	(RIC.unRESIN632.u16Register)  /*@rg@*/
#define RIC_RESIN632_RESSEL	(RIC.unRESIN632.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN632_PORTSEL	(RIC.unRESIN632.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN633	(RIC.unRESIN633.u16Register)  /*@rg@*/
#define RIC_RESIN633_RESSEL	(RIC.unRESIN633.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN633_PORTSEL	(RIC.unRESIN633.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN634	(RIC.unRESIN634.u16Register)  /*@rg@*/
#define RIC_RESIN634_RESSEL	(RIC.unRESIN634.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN634_PORTSEL	(RIC.unRESIN634.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN635	(RIC.unRESIN635.u16Register)  /*@rg@*/
#define RIC_RESIN635_RESSEL	(RIC.unRESIN635.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN635_PORTSEL	(RIC.unRESIN635.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN636	(RIC.unRESIN636.u16Register)  /*@rg@*/
#define RIC_RESIN636_RESSEL	(RIC.unRESIN636.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN636_PORTSEL	(RIC.unRESIN636.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN637	(RIC.unRESIN637.u16Register)  /*@rg@*/
#define RIC_RESIN637_RESSEL	(RIC.unRESIN637.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN637_PORTSEL	(RIC.unRESIN637.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN638	(RIC.unRESIN638.u16Register)  /*@rg@*/
#define RIC_RESIN638_RESSEL	(RIC.unRESIN638.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN638_PORTSEL	(RIC.unRESIN638.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN639	(RIC.unRESIN639.u16Register)  /*@rg@*/
#define RIC_RESIN639_RESSEL	(RIC.unRESIN639.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN639_PORTSEL	(RIC.unRESIN639.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN640	(RIC.unRESIN640.u16Register)  /*@rg@*/
#define RIC_RESIN640_RESSEL	(RIC.unRESIN640.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN640_PORTSEL	(RIC.unRESIN640.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN641	(RIC.unRESIN641.u16Register)  /*@rg@*/
#define RIC_RESIN641_RESSEL	(RIC.unRESIN641.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN641_PORTSEL	(RIC.unRESIN641.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN642	(RIC.unRESIN642.u16Register)  /*@rg@*/
#define RIC_RESIN642_RESSEL	(RIC.unRESIN642.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN642_PORTSEL	(RIC.unRESIN642.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN643	(RIC.unRESIN643.u16Register)  /*@rg@*/
#define RIC_RESIN643_RESSEL	(RIC.unRESIN643.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN643_PORTSEL	(RIC.unRESIN643.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN644	(RIC.unRESIN644.u16Register)  /*@rg@*/
#define RIC_RESIN644_RESSEL	(RIC.unRESIN644.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN644_PORTSEL	(RIC.unRESIN644.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN645	(RIC.unRESIN645.u16Register)  /*@rg@*/
#define RIC_RESIN645_RESSEL	(RIC.unRESIN645.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN645_PORTSEL	(RIC.unRESIN645.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN646	(RIC.unRESIN646.u16Register)  /*@rg@*/
#define RIC_RESIN646_RESSEL	(RIC.unRESIN646.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN646_PORTSEL	(RIC.unRESIN646.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN647	(RIC.unRESIN647.u16Register)  /*@rg@*/
#define RIC_RESIN647_RESSEL	(RIC.unRESIN647.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN647_PORTSEL	(RIC.unRESIN647.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN648	(RIC.unRESIN648.u16Register)  /*@rg@*/
#define RIC_RESIN648_RESSEL	(RIC.unRESIN648.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN648_PORTSEL	(RIC.unRESIN648.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN649	(RIC.unRESIN649.u16Register)  /*@rg@*/
#define RIC_RESIN649_RESSEL	(RIC.unRESIN649.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN649_PORTSEL	(RIC.unRESIN649.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN650	(RIC.unRESIN650.u16Register)  /*@rg@*/
#define RIC_RESIN650_RESSEL	(RIC.unRESIN650.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN650_PORTSEL	(RIC.unRESIN650.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN651	(RIC.unRESIN651.u16Register)  /*@rg@*/
#define RIC_RESIN651_RESSEL	(RIC.unRESIN651.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN651_PORTSEL	(RIC.unRESIN651.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN652	(RIC.unRESIN652.u16Register)  /*@rg@*/
#define RIC_RESIN652_RESSEL	(RIC.unRESIN652.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN652_PORTSEL	(RIC.unRESIN652.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN653	(RIC.unRESIN653.u16Register)  /*@rg@*/
#define RIC_RESIN653_RESSEL	(RIC.unRESIN653.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN653_PORTSEL	(RIC.unRESIN653.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN654	(RIC.unRESIN654.u16Register)  /*@rg@*/
#define RIC_RESIN654_RESSEL	(RIC.unRESIN654.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN654_PORTSEL	(RIC.unRESIN654.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN655	(RIC.unRESIN655.u16Register)  /*@rg@*/
#define RIC_RESIN655_RESSEL	(RIC.unRESIN655.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN655_PORTSEL	(RIC.unRESIN655.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN656	(RIC.unRESIN656.u16Register)  /*@rg@*/
#define RIC_RESIN656_RESSEL	(RIC.unRESIN656.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN656_PORTSEL	(RIC.unRESIN656.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN657	(RIC.unRESIN657.u16Register)  /*@rg@*/
#define RIC_RESIN657_RESSEL	(RIC.unRESIN657.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN657_PORTSEL	(RIC.unRESIN657.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN658	(RIC.unRESIN658.u16Register)  /*@rg@*/
#define RIC_RESIN658_RESSEL	(RIC.unRESIN658.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN658_PORTSEL	(RIC.unRESIN658.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN659	(RIC.unRESIN659.u16Register)  /*@rg@*/
#define RIC_RESIN659_RESSEL	(RIC.unRESIN659.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN659_PORTSEL	(RIC.unRESIN659.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN660	(RIC.unRESIN660.u16Register)  /*@rg@*/
#define RIC_RESIN660_RESSEL	(RIC.unRESIN660.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN660_PORTSEL	(RIC.unRESIN660.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN661	(RIC.unRESIN661.u16Register)  /*@rg@*/
#define RIC_RESIN661_RESSEL	(RIC.unRESIN661.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN661_PORTSEL	(RIC.unRESIN661.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN662	(RIC.unRESIN662.u16Register)  /*@rg@*/
#define RIC_RESIN662_RESSEL	(RIC.unRESIN662.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN662_PORTSEL	(RIC.unRESIN662.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN663	(RIC.unRESIN663.u16Register)  /*@rg@*/
#define RIC_RESIN663_RESSEL	(RIC.unRESIN663.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN663_PORTSEL	(RIC.unRESIN663.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN664	(RIC.unRESIN664.u16Register)  /*@rg@*/
#define RIC_RESIN664_RESSEL	(RIC.unRESIN664.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN664_PORTSEL	(RIC.unRESIN664.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN665	(RIC.unRESIN665.u16Register)  /*@rg@*/
#define RIC_RESIN665_RESSEL	(RIC.unRESIN665.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN665_PORTSEL	(RIC.unRESIN665.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN666	(RIC.unRESIN666.u16Register)  /*@rg@*/
#define RIC_RESIN666_RESSEL	(RIC.unRESIN666.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN666_PORTSEL	(RIC.unRESIN666.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN667	(RIC.unRESIN667.u16Register)  /*@rg@*/
#define RIC_RESIN667_RESSEL	(RIC.unRESIN667.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN667_PORTSEL	(RIC.unRESIN667.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN668	(RIC.unRESIN668.u16Register)  /*@rg@*/
#define RIC_RESIN668_RESSEL	(RIC.unRESIN668.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN668_PORTSEL	(RIC.unRESIN668.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN669	(RIC.unRESIN669.u16Register)  /*@rg@*/
#define RIC_RESIN669_RESSEL	(RIC.unRESIN669.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN669_PORTSEL	(RIC.unRESIN669.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN670	(RIC.unRESIN670.u16Register)  /*@rg@*/
#define RIC_RESIN670_RESSEL	(RIC.unRESIN670.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN670_PORTSEL	(RIC.unRESIN670.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN671	(RIC.unRESIN671.u16Register)  /*@rg@*/
#define RIC_RESIN671_RESSEL	(RIC.unRESIN671.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN671_PORTSEL	(RIC.unRESIN671.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN672	(RIC.unRESIN672.u16Register)  /*@rg@*/
#define RIC_RESIN672_RESSEL	(RIC.unRESIN672.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN672_PORTSEL	(RIC.unRESIN672.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN673	(RIC.unRESIN673.u16Register)  /*@rg@*/
#define RIC_RESIN673_RESSEL	(RIC.unRESIN673.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN673_PORTSEL	(RIC.unRESIN673.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN674	(RIC.unRESIN674.u16Register)  /*@rg@*/
#define RIC_RESIN674_RESSEL	(RIC.unRESIN674.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN674_PORTSEL	(RIC.unRESIN674.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN675	(RIC.unRESIN675.u16Register)  /*@rg@*/
#define RIC_RESIN675_RESSEL	(RIC.unRESIN675.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN675_PORTSEL	(RIC.unRESIN675.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN676	(RIC.unRESIN676.u16Register)  /*@rg@*/
#define RIC_RESIN676_RESSEL	(RIC.unRESIN676.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN676_PORTSEL	(RIC.unRESIN676.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN677	(RIC.unRESIN677.u16Register)  /*@rg@*/
#define RIC_RESIN677_RESSEL	(RIC.unRESIN677.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN677_PORTSEL	(RIC.unRESIN677.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN678	(RIC.unRESIN678.u16Register)  /*@rg@*/
#define RIC_RESIN678_RESSEL	(RIC.unRESIN678.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN678_PORTSEL	(RIC.unRESIN678.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN679	(RIC.unRESIN679.u16Register)  /*@rg@*/
#define RIC_RESIN679_RESSEL	(RIC.unRESIN679.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN679_PORTSEL	(RIC.unRESIN679.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN680	(RIC.unRESIN680.u16Register)  /*@rg@*/
#define RIC_RESIN680_RESSEL	(RIC.unRESIN680.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN680_PORTSEL	(RIC.unRESIN680.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN681	(RIC.unRESIN681.u16Register)  /*@rg@*/
#define RIC_RESIN681_RESSEL	(RIC.unRESIN681.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN681_PORTSEL	(RIC.unRESIN681.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN682	(RIC.unRESIN682.u16Register)  /*@rg@*/
#define RIC_RESIN682_RESSEL	(RIC.unRESIN682.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN682_PORTSEL	(RIC.unRESIN682.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN683	(RIC.unRESIN683.u16Register)  /*@rg@*/
#define RIC_RESIN683_RESSEL	(RIC.unRESIN683.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN683_PORTSEL	(RIC.unRESIN683.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN684	(RIC.unRESIN684.u16Register)  /*@rg@*/
#define RIC_RESIN684_RESSEL	(RIC.unRESIN684.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN684_PORTSEL	(RIC.unRESIN684.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN685	(RIC.unRESIN685.u16Register)  /*@rg@*/
#define RIC_RESIN685_RESSEL	(RIC.unRESIN685.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN685_PORTSEL	(RIC.unRESIN685.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN686	(RIC.unRESIN686.u16Register)  /*@rg@*/
#define RIC_RESIN686_RESSEL	(RIC.unRESIN686.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN686_PORTSEL	(RIC.unRESIN686.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN687	(RIC.unRESIN687.u16Register)  /*@rg@*/
#define RIC_RESIN687_RESSEL	(RIC.unRESIN687.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN687_PORTSEL	(RIC.unRESIN687.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN688	(RIC.unRESIN688.u16Register)  /*@rg@*/
#define RIC_RESIN688_RESSEL	(RIC.unRESIN688.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN688_PORTSEL	(RIC.unRESIN688.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN689	(RIC.unRESIN689.u16Register)  /*@rg@*/
#define RIC_RESIN689_RESSEL	(RIC.unRESIN689.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN689_PORTSEL	(RIC.unRESIN689.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN690	(RIC.unRESIN690.u16Register)  /*@rg@*/
#define RIC_RESIN690_RESSEL	(RIC.unRESIN690.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN690_PORTSEL	(RIC.unRESIN690.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN691	(RIC.unRESIN691.u16Register)  /*@rg@*/
#define RIC_RESIN691_RESSEL	(RIC.unRESIN691.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN691_PORTSEL	(RIC.unRESIN691.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN692	(RIC.unRESIN692.u16Register)  /*@rg@*/
#define RIC_RESIN692_RESSEL	(RIC.unRESIN692.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN692_PORTSEL	(RIC.unRESIN692.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN693	(RIC.unRESIN693.u16Register)  /*@rg@*/
#define RIC_RESIN693_RESSEL	(RIC.unRESIN693.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN693_PORTSEL	(RIC.unRESIN693.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN694	(RIC.unRESIN694.u16Register)  /*@rg@*/
#define RIC_RESIN694_RESSEL	(RIC.unRESIN694.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN694_PORTSEL	(RIC.unRESIN694.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN695	(RIC.unRESIN695.u16Register)  /*@rg@*/
#define RIC_RESIN695_RESSEL	(RIC.unRESIN695.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN695_PORTSEL	(RIC.unRESIN695.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN696	(RIC.unRESIN696.u16Register)  /*@rg@*/
#define RIC_RESIN696_RESSEL	(RIC.unRESIN696.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN696_PORTSEL	(RIC.unRESIN696.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN697	(RIC.unRESIN697.u16Register)  /*@rg@*/
#define RIC_RESIN697_RESSEL	(RIC.unRESIN697.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN697_PORTSEL	(RIC.unRESIN697.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN698	(RIC.unRESIN698.u16Register)  /*@rg@*/
#define RIC_RESIN698_RESSEL	(RIC.unRESIN698.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN698_PORTSEL	(RIC.unRESIN698.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN699	(RIC.unRESIN699.u16Register)  /*@rg@*/
#define RIC_RESIN699_RESSEL	(RIC.unRESIN699.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN699_PORTSEL	(RIC.unRESIN699.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN700	(RIC.unRESIN700.u16Register)  /*@rg@*/
#define RIC_RESIN700_RESSEL	(RIC.unRESIN700.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN700_PORTSEL	(RIC.unRESIN700.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN701	(RIC.unRESIN701.u16Register)  /*@rg@*/
#define RIC_RESIN701_RESSEL	(RIC.unRESIN701.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN701_PORTSEL	(RIC.unRESIN701.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN702	(RIC.unRESIN702.u16Register)  /*@rg@*/
#define RIC_RESIN702_RESSEL	(RIC.unRESIN702.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN702_PORTSEL	(RIC.unRESIN702.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN703	(RIC.unRESIN703.u16Register)  /*@rg@*/
#define RIC_RESIN703_RESSEL	(RIC.unRESIN703.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN703_PORTSEL	(RIC.unRESIN703.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN704	(RIC.unRESIN704.u16Register)  /*@rg@*/
#define RIC_RESIN704_RESSEL	(RIC.unRESIN704.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN704_PORTSEL	(RIC.unRESIN704.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN705	(RIC.unRESIN705.u16Register)  /*@rg@*/
#define RIC_RESIN705_RESSEL	(RIC.unRESIN705.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN705_PORTSEL	(RIC.unRESIN705.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN706	(RIC.unRESIN706.u16Register)  /*@rg@*/
#define RIC_RESIN706_RESSEL	(RIC.unRESIN706.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN706_PORTSEL	(RIC.unRESIN706.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN707	(RIC.unRESIN707.u16Register)  /*@rg@*/
#define RIC_RESIN707_RESSEL	(RIC.unRESIN707.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN707_PORTSEL	(RIC.unRESIN707.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN708	(RIC.unRESIN708.u16Register)  /*@rg@*/
#define RIC_RESIN708_RESSEL	(RIC.unRESIN708.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN708_PORTSEL	(RIC.unRESIN708.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN709	(RIC.unRESIN709.u16Register)  /*@rg@*/
#define RIC_RESIN709_RESSEL	(RIC.unRESIN709.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN709_PORTSEL	(RIC.unRESIN709.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN710	(RIC.unRESIN710.u16Register)  /*@rg@*/
#define RIC_RESIN710_RESSEL	(RIC.unRESIN710.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN710_PORTSEL	(RIC.unRESIN710.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN711	(RIC.unRESIN711.u16Register)  /*@rg@*/
#define RIC_RESIN711_RESSEL	(RIC.unRESIN711.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN711_PORTSEL	(RIC.unRESIN711.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN712	(RIC.unRESIN712.u16Register)  /*@rg@*/
#define RIC_RESIN712_RESSEL	(RIC.unRESIN712.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN712_PORTSEL	(RIC.unRESIN712.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN713	(RIC.unRESIN713.u16Register)  /*@rg@*/
#define RIC_RESIN713_RESSEL	(RIC.unRESIN713.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN713_PORTSEL	(RIC.unRESIN713.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN714	(RIC.unRESIN714.u16Register)  /*@rg@*/
#define RIC_RESIN714_RESSEL	(RIC.unRESIN714.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN714_PORTSEL	(RIC.unRESIN714.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN715	(RIC.unRESIN715.u16Register)  /*@rg@*/
#define RIC_RESIN715_RESSEL	(RIC.unRESIN715.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN715_PORTSEL	(RIC.unRESIN715.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN716	(RIC.unRESIN716.u16Register)  /*@rg@*/
#define RIC_RESIN716_RESSEL	(RIC.unRESIN716.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN716_PORTSEL	(RIC.unRESIN716.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN717	(RIC.unRESIN717.u16Register)  /*@rg@*/
#define RIC_RESIN717_RESSEL	(RIC.unRESIN717.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN717_PORTSEL	(RIC.unRESIN717.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN718	(RIC.unRESIN718.u16Register)  /*@rg@*/
#define RIC_RESIN718_RESSEL	(RIC.unRESIN718.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN718_PORTSEL	(RIC.unRESIN718.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN719	(RIC.unRESIN719.u16Register)  /*@rg@*/
#define RIC_RESIN719_RESSEL	(RIC.unRESIN719.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN719_PORTSEL	(RIC.unRESIN719.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN720	(RIC.unRESIN720.u16Register)  /*@rg@*/
#define RIC_RESIN720_RESSEL	(RIC.unRESIN720.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN720_PORTSEL	(RIC.unRESIN720.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN721	(RIC.unRESIN721.u16Register)  /*@rg@*/
#define RIC_RESIN721_RESSEL	(RIC.unRESIN721.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN721_PORTSEL	(RIC.unRESIN721.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN722	(RIC.unRESIN722.u16Register)  /*@rg@*/
#define RIC_RESIN722_RESSEL	(RIC.unRESIN722.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN722_PORTSEL	(RIC.unRESIN722.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN723	(RIC.unRESIN723.u16Register)  /*@rg@*/
#define RIC_RESIN723_RESSEL	(RIC.unRESIN723.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN723_PORTSEL	(RIC.unRESIN723.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN724	(RIC.unRESIN724.u16Register)  /*@rg@*/
#define RIC_RESIN724_RESSEL	(RIC.unRESIN724.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN724_PORTSEL	(RIC.unRESIN724.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN725	(RIC.unRESIN725.u16Register)  /*@rg@*/
#define RIC_RESIN725_RESSEL	(RIC.unRESIN725.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN725_PORTSEL	(RIC.unRESIN725.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN726	(RIC.unRESIN726.u16Register)  /*@rg@*/
#define RIC_RESIN726_RESSEL	(RIC.unRESIN726.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN726_PORTSEL	(RIC.unRESIN726.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN727	(RIC.unRESIN727.u16Register)  /*@rg@*/
#define RIC_RESIN727_RESSEL	(RIC.unRESIN727.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN727_PORTSEL	(RIC.unRESIN727.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN728	(RIC.unRESIN728.u16Register)  /*@rg@*/
#define RIC_RESIN728_RESSEL	(RIC.unRESIN728.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN728_PORTSEL	(RIC.unRESIN728.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN729	(RIC.unRESIN729.u16Register)  /*@rg@*/
#define RIC_RESIN729_RESSEL	(RIC.unRESIN729.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN729_PORTSEL	(RIC.unRESIN729.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN730	(RIC.unRESIN730.u16Register)  /*@rg@*/
#define RIC_RESIN730_RESSEL	(RIC.unRESIN730.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN730_PORTSEL	(RIC.unRESIN730.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN731	(RIC.unRESIN731.u16Register)  /*@rg@*/
#define RIC_RESIN731_RESSEL	(RIC.unRESIN731.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN731_PORTSEL	(RIC.unRESIN731.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN732	(RIC.unRESIN732.u16Register)  /*@rg@*/
#define RIC_RESIN732_RESSEL	(RIC.unRESIN732.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN732_PORTSEL	(RIC.unRESIN732.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN733	(RIC.unRESIN733.u16Register)  /*@rg@*/
#define RIC_RESIN733_RESSEL	(RIC.unRESIN733.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN733_PORTSEL	(RIC.unRESIN733.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN734	(RIC.unRESIN734.u16Register)  /*@rg@*/
#define RIC_RESIN734_RESSEL	(RIC.unRESIN734.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN734_PORTSEL	(RIC.unRESIN734.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN735	(RIC.unRESIN735.u16Register)  /*@rg@*/
#define RIC_RESIN735_RESSEL	(RIC.unRESIN735.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN735_PORTSEL	(RIC.unRESIN735.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN736	(RIC.unRESIN736.u16Register)  /*@rg@*/
#define RIC_RESIN736_RESSEL	(RIC.unRESIN736.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN736_PORTSEL	(RIC.unRESIN736.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN737	(RIC.unRESIN737.u16Register)  /*@rg@*/
#define RIC_RESIN737_RESSEL	(RIC.unRESIN737.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN737_PORTSEL	(RIC.unRESIN737.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN738	(RIC.unRESIN738.u16Register)  /*@rg@*/
#define RIC_RESIN738_RESSEL	(RIC.unRESIN738.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN738_PORTSEL	(RIC.unRESIN738.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN739	(RIC.unRESIN739.u16Register)  /*@rg@*/
#define RIC_RESIN739_RESSEL	(RIC.unRESIN739.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN739_PORTSEL	(RIC.unRESIN739.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN740	(RIC.unRESIN740.u16Register)  /*@rg@*/
#define RIC_RESIN740_RESSEL	(RIC.unRESIN740.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN740_PORTSEL	(RIC.unRESIN740.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN741	(RIC.unRESIN741.u16Register)  /*@rg@*/
#define RIC_RESIN741_RESSEL	(RIC.unRESIN741.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN741_PORTSEL	(RIC.unRESIN741.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN742	(RIC.unRESIN742.u16Register)  /*@rg@*/
#define RIC_RESIN742_RESSEL	(RIC.unRESIN742.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN742_PORTSEL	(RIC.unRESIN742.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN743	(RIC.unRESIN743.u16Register)  /*@rg@*/
#define RIC_RESIN743_RESSEL	(RIC.unRESIN743.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN743_PORTSEL	(RIC.unRESIN743.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN744	(RIC.unRESIN744.u16Register)  /*@rg@*/
#define RIC_RESIN744_RESSEL	(RIC.unRESIN744.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN744_PORTSEL	(RIC.unRESIN744.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN745	(RIC.unRESIN745.u16Register)  /*@rg@*/
#define RIC_RESIN745_RESSEL	(RIC.unRESIN745.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN745_PORTSEL	(RIC.unRESIN745.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN746	(RIC.unRESIN746.u16Register)  /*@rg@*/
#define RIC_RESIN746_RESSEL	(RIC.unRESIN746.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN746_PORTSEL	(RIC.unRESIN746.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN747	(RIC.unRESIN747.u16Register)  /*@rg@*/
#define RIC_RESIN747_RESSEL	(RIC.unRESIN747.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN747_PORTSEL	(RIC.unRESIN747.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN748	(RIC.unRESIN748.u16Register)  /*@rg@*/
#define RIC_RESIN748_RESSEL	(RIC.unRESIN748.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN748_PORTSEL	(RIC.unRESIN748.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN749	(RIC.unRESIN749.u16Register)  /*@rg@*/
#define RIC_RESIN749_RESSEL	(RIC.unRESIN749.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN749_PORTSEL	(RIC.unRESIN749.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN750	(RIC.unRESIN750.u16Register)  /*@rg@*/
#define RIC_RESIN750_RESSEL	(RIC.unRESIN750.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN750_PORTSEL	(RIC.unRESIN750.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN751	(RIC.unRESIN751.u16Register)  /*@rg@*/
#define RIC_RESIN751_RESSEL	(RIC.unRESIN751.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN751_PORTSEL	(RIC.unRESIN751.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN752	(RIC.unRESIN752.u16Register)  /*@rg@*/
#define RIC_RESIN752_RESSEL	(RIC.unRESIN752.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN752_PORTSEL	(RIC.unRESIN752.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN753	(RIC.unRESIN753.u16Register)  /*@rg@*/
#define RIC_RESIN753_RESSEL	(RIC.unRESIN753.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN753_PORTSEL	(RIC.unRESIN753.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN754	(RIC.unRESIN754.u16Register)  /*@rg@*/
#define RIC_RESIN754_RESSEL	(RIC.unRESIN754.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN754_PORTSEL	(RIC.unRESIN754.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN755	(RIC.unRESIN755.u16Register)  /*@rg@*/
#define RIC_RESIN755_RESSEL	(RIC.unRESIN755.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN755_PORTSEL	(RIC.unRESIN755.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN756	(RIC.unRESIN756.u16Register)  /*@rg@*/
#define RIC_RESIN756_RESSEL	(RIC.unRESIN756.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN756_PORTSEL	(RIC.unRESIN756.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN757	(RIC.unRESIN757.u16Register)  /*@rg@*/
#define RIC_RESIN757_RESSEL	(RIC.unRESIN757.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN757_PORTSEL	(RIC.unRESIN757.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN758	(RIC.unRESIN758.u16Register)  /*@rg@*/
#define RIC_RESIN758_RESSEL	(RIC.unRESIN758.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN758_PORTSEL	(RIC.unRESIN758.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN759	(RIC.unRESIN759.u16Register)  /*@rg@*/
#define RIC_RESIN759_RESSEL	(RIC.unRESIN759.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN759_PORTSEL	(RIC.unRESIN759.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN760	(RIC.unRESIN760.u16Register)  /*@rg@*/
#define RIC_RESIN760_RESSEL	(RIC.unRESIN760.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN760_PORTSEL	(RIC.unRESIN760.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN761	(RIC.unRESIN761.u16Register)  /*@rg@*/
#define RIC_RESIN761_RESSEL	(RIC.unRESIN761.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN761_PORTSEL	(RIC.unRESIN761.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN762	(RIC.unRESIN762.u16Register)  /*@rg@*/
#define RIC_RESIN762_RESSEL	(RIC.unRESIN762.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN762_PORTSEL	(RIC.unRESIN762.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN763	(RIC.unRESIN763.u16Register)  /*@rg@*/
#define RIC_RESIN763_RESSEL	(RIC.unRESIN763.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN763_PORTSEL	(RIC.unRESIN763.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN764	(RIC.unRESIN764.u16Register)  /*@rg@*/
#define RIC_RESIN764_RESSEL	(RIC.unRESIN764.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN764_PORTSEL	(RIC.unRESIN764.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN765	(RIC.unRESIN765.u16Register)  /*@rg@*/
#define RIC_RESIN765_RESSEL	(RIC.unRESIN765.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN765_PORTSEL	(RIC.unRESIN765.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN766	(RIC.unRESIN766.u16Register)  /*@rg@*/
#define RIC_RESIN766_RESSEL	(RIC.unRESIN766.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN766_PORTSEL	(RIC.unRESIN766.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN767	(RIC.unRESIN767.u16Register)  /*@rg@*/
#define RIC_RESIN767_RESSEL	(RIC.unRESIN767.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN767_PORTSEL	(RIC.unRESIN767.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN768	(RIC.unRESIN768.u16Register)  /*@rg@*/
#define RIC_RESIN768_RESSEL	(RIC.unRESIN768.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN768_PORTSEL	(RIC.unRESIN768.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN769	(RIC.unRESIN769.u16Register)  /*@rg@*/
#define RIC_RESIN769_RESSEL	(RIC.unRESIN769.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN769_PORTSEL	(RIC.unRESIN769.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN770	(RIC.unRESIN770.u16Register)  /*@rg@*/
#define RIC_RESIN770_RESSEL	(RIC.unRESIN770.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN770_PORTSEL	(RIC.unRESIN770.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN771	(RIC.unRESIN771.u16Register)  /*@rg@*/
#define RIC_RESIN771_RESSEL	(RIC.unRESIN771.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN771_PORTSEL	(RIC.unRESIN771.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN772	(RIC.unRESIN772.u16Register)  /*@rg@*/
#define RIC_RESIN772_RESSEL	(RIC.unRESIN772.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN772_PORTSEL	(RIC.unRESIN772.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN773	(RIC.unRESIN773.u16Register)  /*@rg@*/
#define RIC_RESIN773_RESSEL	(RIC.unRESIN773.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN773_PORTSEL	(RIC.unRESIN773.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN774	(RIC.unRESIN774.u16Register)  /*@rg@*/
#define RIC_RESIN774_RESSEL	(RIC.unRESIN774.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN774_PORTSEL	(RIC.unRESIN774.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN775	(RIC.unRESIN775.u16Register)  /*@rg@*/
#define RIC_RESIN775_RESSEL	(RIC.unRESIN775.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN775_PORTSEL	(RIC.unRESIN775.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN776	(RIC.unRESIN776.u16Register)  /*@rg@*/
#define RIC_RESIN776_RESSEL	(RIC.unRESIN776.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN776_PORTSEL	(RIC.unRESIN776.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN777	(RIC.unRESIN777.u16Register)  /*@rg@*/
#define RIC_RESIN777_RESSEL	(RIC.unRESIN777.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN777_PORTSEL	(RIC.unRESIN777.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN778	(RIC.unRESIN778.u16Register)  /*@rg@*/
#define RIC_RESIN778_RESSEL	(RIC.unRESIN778.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN778_PORTSEL	(RIC.unRESIN778.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN779	(RIC.unRESIN779.u16Register)  /*@rg@*/
#define RIC_RESIN779_RESSEL	(RIC.unRESIN779.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN779_PORTSEL	(RIC.unRESIN779.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN780	(RIC.unRESIN780.u16Register)  /*@rg@*/
#define RIC_RESIN780_RESSEL	(RIC.unRESIN780.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN780_PORTSEL	(RIC.unRESIN780.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN781	(RIC.unRESIN781.u16Register)  /*@rg@*/
#define RIC_RESIN781_RESSEL	(RIC.unRESIN781.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN781_PORTSEL	(RIC.unRESIN781.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN782	(RIC.unRESIN782.u16Register)  /*@rg@*/
#define RIC_RESIN782_RESSEL	(RIC.unRESIN782.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN782_PORTSEL	(RIC.unRESIN782.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN783	(RIC.unRESIN783.u16Register)  /*@rg@*/
#define RIC_RESIN783_RESSEL	(RIC.unRESIN783.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN783_PORTSEL	(RIC.unRESIN783.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN784	(RIC.unRESIN784.u16Register)  /*@rg@*/
#define RIC_RESIN784_RESSEL	(RIC.unRESIN784.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN784_PORTSEL	(RIC.unRESIN784.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN785	(RIC.unRESIN785.u16Register)  /*@rg@*/
#define RIC_RESIN785_RESSEL	(RIC.unRESIN785.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN785_PORTSEL	(RIC.unRESIN785.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN786	(RIC.unRESIN786.u16Register)  /*@rg@*/
#define RIC_RESIN786_RESSEL	(RIC.unRESIN786.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN786_PORTSEL	(RIC.unRESIN786.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN787	(RIC.unRESIN787.u16Register)  /*@rg@*/
#define RIC_RESIN787_RESSEL	(RIC.unRESIN787.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN787_PORTSEL	(RIC.unRESIN787.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN788	(RIC.unRESIN788.u16Register)  /*@rg@*/
#define RIC_RESIN788_RESSEL	(RIC.unRESIN788.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN788_PORTSEL	(RIC.unRESIN788.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN789	(RIC.unRESIN789.u16Register)  /*@rg@*/
#define RIC_RESIN789_RESSEL	(RIC.unRESIN789.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN789_PORTSEL	(RIC.unRESIN789.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN790	(RIC.unRESIN790.u16Register)  /*@rg@*/
#define RIC_RESIN790_RESSEL	(RIC.unRESIN790.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN790_PORTSEL	(RIC.unRESIN790.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN791	(RIC.unRESIN791.u16Register)  /*@rg@*/
#define RIC_RESIN791_RESSEL	(RIC.unRESIN791.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN791_PORTSEL	(RIC.unRESIN791.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN792	(RIC.unRESIN792.u16Register)  /*@rg@*/
#define RIC_RESIN792_RESSEL	(RIC.unRESIN792.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN792_PORTSEL	(RIC.unRESIN792.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN793	(RIC.unRESIN793.u16Register)  /*@rg@*/
#define RIC_RESIN793_RESSEL	(RIC.unRESIN793.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN793_PORTSEL	(RIC.unRESIN793.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN794	(RIC.unRESIN794.u16Register)  /*@rg@*/
#define RIC_RESIN794_RESSEL	(RIC.unRESIN794.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN794_PORTSEL	(RIC.unRESIN794.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN795	(RIC.unRESIN795.u16Register)  /*@rg@*/
#define RIC_RESIN795_RESSEL	(RIC.unRESIN795.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN795_PORTSEL	(RIC.unRESIN795.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN796	(RIC.unRESIN796.u16Register)  /*@rg@*/
#define RIC_RESIN796_RESSEL	(RIC.unRESIN796.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN796_PORTSEL	(RIC.unRESIN796.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN797	(RIC.unRESIN797.u16Register)  /*@rg@*/
#define RIC_RESIN797_RESSEL	(RIC.unRESIN797.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN797_PORTSEL	(RIC.unRESIN797.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN798	(RIC.unRESIN798.u16Register)  /*@rg@*/
#define RIC_RESIN798_RESSEL	(RIC.unRESIN798.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN798_PORTSEL	(RIC.unRESIN798.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN799	(RIC.unRESIN799.u16Register)  /*@rg@*/
#define RIC_RESIN799_RESSEL	(RIC.unRESIN799.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN799_PORTSEL	(RIC.unRESIN799.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN800	(RIC.unRESIN800.u16Register)  /*@rg@*/
#define RIC_RESIN800_RESSEL	(RIC.unRESIN800.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN800_PORTSEL	(RIC.unRESIN800.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN801	(RIC.unRESIN801.u16Register)  /*@rg@*/
#define RIC_RESIN801_RESSEL	(RIC.unRESIN801.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN801_PORTSEL	(RIC.unRESIN801.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN802	(RIC.unRESIN802.u16Register)  /*@rg@*/
#define RIC_RESIN802_RESSEL	(RIC.unRESIN802.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN802_PORTSEL	(RIC.unRESIN802.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN803	(RIC.unRESIN803.u16Register)  /*@rg@*/
#define RIC_RESIN803_RESSEL	(RIC.unRESIN803.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN803_PORTSEL	(RIC.unRESIN803.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN804	(RIC.unRESIN804.u16Register)  /*@rg@*/
#define RIC_RESIN804_RESSEL	(RIC.unRESIN804.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN804_PORTSEL	(RIC.unRESIN804.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN805	(RIC.unRESIN805.u16Register)  /*@rg@*/
#define RIC_RESIN805_RESSEL	(RIC.unRESIN805.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN805_PORTSEL	(RIC.unRESIN805.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN806	(RIC.unRESIN806.u16Register)  /*@rg@*/
#define RIC_RESIN806_RESSEL	(RIC.unRESIN806.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN806_PORTSEL	(RIC.unRESIN806.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN807	(RIC.unRESIN807.u16Register)  /*@rg@*/
#define RIC_RESIN807_RESSEL	(RIC.unRESIN807.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN807_PORTSEL	(RIC.unRESIN807.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN808	(RIC.unRESIN808.u16Register)  /*@rg@*/
#define RIC_RESIN808_RESSEL	(RIC.unRESIN808.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN808_PORTSEL	(RIC.unRESIN808.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN809	(RIC.unRESIN809.u16Register)  /*@rg@*/
#define RIC_RESIN809_RESSEL	(RIC.unRESIN809.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN809_PORTSEL	(RIC.unRESIN809.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN810	(RIC.unRESIN810.u16Register)  /*@rg@*/
#define RIC_RESIN810_RESSEL	(RIC.unRESIN810.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN810_PORTSEL	(RIC.unRESIN810.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN811	(RIC.unRESIN811.u16Register)  /*@rg@*/
#define RIC_RESIN811_RESSEL	(RIC.unRESIN811.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN811_PORTSEL	(RIC.unRESIN811.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN812	(RIC.unRESIN812.u16Register)  /*@rg@*/
#define RIC_RESIN812_RESSEL	(RIC.unRESIN812.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN812_PORTSEL	(RIC.unRESIN812.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN813	(RIC.unRESIN813.u16Register)  /*@rg@*/
#define RIC_RESIN813_RESSEL	(RIC.unRESIN813.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN813_PORTSEL	(RIC.unRESIN813.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN814	(RIC.unRESIN814.u16Register)  /*@rg@*/
#define RIC_RESIN814_RESSEL	(RIC.unRESIN814.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN814_PORTSEL	(RIC.unRESIN814.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN815	(RIC.unRESIN815.u16Register)  /*@rg@*/
#define RIC_RESIN815_RESSEL	(RIC.unRESIN815.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN815_PORTSEL	(RIC.unRESIN815.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN816	(RIC.unRESIN816.u16Register)  /*@rg@*/
#define RIC_RESIN816_RESSEL	(RIC.unRESIN816.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN816_PORTSEL	(RIC.unRESIN816.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN817	(RIC.unRESIN817.u16Register)  /*@rg@*/
#define RIC_RESIN817_RESSEL	(RIC.unRESIN817.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN817_PORTSEL	(RIC.unRESIN817.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN818	(RIC.unRESIN818.u16Register)  /*@rg@*/
#define RIC_RESIN818_RESSEL	(RIC.unRESIN818.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN818_PORTSEL	(RIC.unRESIN818.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN819	(RIC.unRESIN819.u16Register)  /*@rg@*/
#define RIC_RESIN819_RESSEL	(RIC.unRESIN819.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN819_PORTSEL	(RIC.unRESIN819.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN820	(RIC.unRESIN820.u16Register)  /*@rg@*/
#define RIC_RESIN820_RESSEL	(RIC.unRESIN820.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN820_PORTSEL	(RIC.unRESIN820.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN821	(RIC.unRESIN821.u16Register)  /*@rg@*/
#define RIC_RESIN821_RESSEL	(RIC.unRESIN821.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN821_PORTSEL	(RIC.unRESIN821.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN822	(RIC.unRESIN822.u16Register)  /*@rg@*/
#define RIC_RESIN822_RESSEL	(RIC.unRESIN822.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN822_PORTSEL	(RIC.unRESIN822.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN823	(RIC.unRESIN823.u16Register)  /*@rg@*/
#define RIC_RESIN823_RESSEL	(RIC.unRESIN823.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN823_PORTSEL	(RIC.unRESIN823.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN824	(RIC.unRESIN824.u16Register)  /*@rg@*/
#define RIC_RESIN824_RESSEL	(RIC.unRESIN824.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN824_PORTSEL	(RIC.unRESIN824.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN825	(RIC.unRESIN825.u16Register)  /*@rg@*/
#define RIC_RESIN825_RESSEL	(RIC.unRESIN825.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN825_PORTSEL	(RIC.unRESIN825.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN826	(RIC.unRESIN826.u16Register)  /*@rg@*/
#define RIC_RESIN826_RESSEL	(RIC.unRESIN826.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN826_PORTSEL	(RIC.unRESIN826.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN827	(RIC.unRESIN827.u16Register)  /*@rg@*/
#define RIC_RESIN827_RESSEL	(RIC.unRESIN827.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN827_PORTSEL	(RIC.unRESIN827.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN828	(RIC.unRESIN828.u16Register)  /*@rg@*/
#define RIC_RESIN828_RESSEL	(RIC.unRESIN828.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN828_PORTSEL	(RIC.unRESIN828.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN829	(RIC.unRESIN829.u16Register)  /*@rg@*/
#define RIC_RESIN829_RESSEL	(RIC.unRESIN829.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN829_PORTSEL	(RIC.unRESIN829.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN830	(RIC.unRESIN830.u16Register)  /*@rg@*/
#define RIC_RESIN830_RESSEL	(RIC.unRESIN830.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN830_PORTSEL	(RIC.unRESIN830.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN831	(RIC.unRESIN831.u16Register)  /*@rg@*/
#define RIC_RESIN831_RESSEL	(RIC.unRESIN831.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN831_PORTSEL	(RIC.unRESIN831.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN832	(RIC.unRESIN832.u16Register)  /*@rg@*/
#define RIC_RESIN832_RESSEL	(RIC.unRESIN832.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN832_PORTSEL	(RIC.unRESIN832.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN833	(RIC.unRESIN833.u16Register)  /*@rg@*/
#define RIC_RESIN833_RESSEL	(RIC.unRESIN833.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN833_PORTSEL	(RIC.unRESIN833.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN834	(RIC.unRESIN834.u16Register)  /*@rg@*/
#define RIC_RESIN834_RESSEL	(RIC.unRESIN834.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN834_PORTSEL	(RIC.unRESIN834.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN835	(RIC.unRESIN835.u16Register)  /*@rg@*/
#define RIC_RESIN835_RESSEL	(RIC.unRESIN835.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN835_PORTSEL	(RIC.unRESIN835.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN836	(RIC.unRESIN836.u16Register)  /*@rg@*/
#define RIC_RESIN836_RESSEL	(RIC.unRESIN836.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN836_PORTSEL	(RIC.unRESIN836.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN837	(RIC.unRESIN837.u16Register)  /*@rg@*/
#define RIC_RESIN837_RESSEL	(RIC.unRESIN837.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN837_PORTSEL	(RIC.unRESIN837.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN838	(RIC.unRESIN838.u16Register)  /*@rg@*/
#define RIC_RESIN838_RESSEL	(RIC.unRESIN838.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN838_PORTSEL	(RIC.unRESIN838.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN839	(RIC.unRESIN839.u16Register)  /*@rg@*/
#define RIC_RESIN839_RESSEL	(RIC.unRESIN839.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN839_PORTSEL	(RIC.unRESIN839.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN840	(RIC.unRESIN840.u16Register)  /*@rg@*/
#define RIC_RESIN840_RESSEL	(RIC.unRESIN840.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN840_PORTSEL	(RIC.unRESIN840.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN841	(RIC.unRESIN841.u16Register)  /*@rg@*/
#define RIC_RESIN841_RESSEL	(RIC.unRESIN841.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN841_PORTSEL	(RIC.unRESIN841.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN842	(RIC.unRESIN842.u16Register)  /*@rg@*/
#define RIC_RESIN842_RESSEL	(RIC.unRESIN842.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN842_PORTSEL	(RIC.unRESIN842.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN843	(RIC.unRESIN843.u16Register)  /*@rg@*/
#define RIC_RESIN843_RESSEL	(RIC.unRESIN843.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN843_PORTSEL	(RIC.unRESIN843.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN844	(RIC.unRESIN844.u16Register)  /*@rg@*/
#define RIC_RESIN844_RESSEL	(RIC.unRESIN844.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN844_PORTSEL	(RIC.unRESIN844.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN845	(RIC.unRESIN845.u16Register)  /*@rg@*/
#define RIC_RESIN845_RESSEL	(RIC.unRESIN845.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN845_PORTSEL	(RIC.unRESIN845.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN846	(RIC.unRESIN846.u16Register)  /*@rg@*/
#define RIC_RESIN846_RESSEL	(RIC.unRESIN846.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN846_PORTSEL	(RIC.unRESIN846.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN847	(RIC.unRESIN847.u16Register)  /*@rg@*/
#define RIC_RESIN847_RESSEL	(RIC.unRESIN847.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN847_PORTSEL	(RIC.unRESIN847.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN848	(RIC.unRESIN848.u16Register)  /*@rg@*/
#define RIC_RESIN848_RESSEL	(RIC.unRESIN848.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN848_PORTSEL	(RIC.unRESIN848.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN849	(RIC.unRESIN849.u16Register)  /*@rg@*/
#define RIC_RESIN849_RESSEL	(RIC.unRESIN849.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN849_PORTSEL	(RIC.unRESIN849.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN850	(RIC.unRESIN850.u16Register)  /*@rg@*/
#define RIC_RESIN850_RESSEL	(RIC.unRESIN850.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN850_PORTSEL	(RIC.unRESIN850.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN851	(RIC.unRESIN851.u16Register)  /*@rg@*/
#define RIC_RESIN851_RESSEL	(RIC.unRESIN851.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN851_PORTSEL	(RIC.unRESIN851.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN852	(RIC.unRESIN852.u16Register)  /*@rg@*/
#define RIC_RESIN852_RESSEL	(RIC.unRESIN852.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN852_PORTSEL	(RIC.unRESIN852.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN853	(RIC.unRESIN853.u16Register)  /*@rg@*/
#define RIC_RESIN853_RESSEL	(RIC.unRESIN853.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN853_PORTSEL	(RIC.unRESIN853.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN854	(RIC.unRESIN854.u16Register)  /*@rg@*/
#define RIC_RESIN854_RESSEL	(RIC.unRESIN854.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN854_PORTSEL	(RIC.unRESIN854.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN855	(RIC.unRESIN855.u16Register)  /*@rg@*/
#define RIC_RESIN855_RESSEL	(RIC.unRESIN855.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN855_PORTSEL	(RIC.unRESIN855.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN856	(RIC.unRESIN856.u16Register)  /*@rg@*/
#define RIC_RESIN856_RESSEL	(RIC.unRESIN856.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN856_PORTSEL	(RIC.unRESIN856.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN857	(RIC.unRESIN857.u16Register)  /*@rg@*/
#define RIC_RESIN857_RESSEL	(RIC.unRESIN857.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN857_PORTSEL	(RIC.unRESIN857.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN858	(RIC.unRESIN858.u16Register)  /*@rg@*/
#define RIC_RESIN858_RESSEL	(RIC.unRESIN858.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN858_PORTSEL	(RIC.unRESIN858.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN859	(RIC.unRESIN859.u16Register)  /*@rg@*/
#define RIC_RESIN859_RESSEL	(RIC.unRESIN859.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN859_PORTSEL	(RIC.unRESIN859.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN860	(RIC.unRESIN860.u16Register)  /*@rg@*/
#define RIC_RESIN860_RESSEL	(RIC.unRESIN860.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN860_PORTSEL	(RIC.unRESIN860.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN861	(RIC.unRESIN861.u16Register)  /*@rg@*/
#define RIC_RESIN861_RESSEL	(RIC.unRESIN861.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN861_PORTSEL	(RIC.unRESIN861.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN862	(RIC.unRESIN862.u16Register)  /*@rg@*/
#define RIC_RESIN862_RESSEL	(RIC.unRESIN862.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN862_PORTSEL	(RIC.unRESIN862.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN863	(RIC.unRESIN863.u16Register)  /*@rg@*/
#define RIC_RESIN863_RESSEL	(RIC.unRESIN863.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN863_PORTSEL	(RIC.unRESIN863.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN864	(RIC.unRESIN864.u16Register)  /*@rg@*/
#define RIC_RESIN864_RESSEL	(RIC.unRESIN864.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN864_PORTSEL	(RIC.unRESIN864.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN865	(RIC.unRESIN865.u16Register)  /*@rg@*/
#define RIC_RESIN865_RESSEL	(RIC.unRESIN865.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN865_PORTSEL	(RIC.unRESIN865.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN866	(RIC.unRESIN866.u16Register)  /*@rg@*/
#define RIC_RESIN866_RESSEL	(RIC.unRESIN866.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN866_PORTSEL	(RIC.unRESIN866.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN867	(RIC.unRESIN867.u16Register)  /*@rg@*/
#define RIC_RESIN867_RESSEL	(RIC.unRESIN867.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN867_PORTSEL	(RIC.unRESIN867.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN868	(RIC.unRESIN868.u16Register)  /*@rg@*/
#define RIC_RESIN868_RESSEL	(RIC.unRESIN868.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN868_PORTSEL	(RIC.unRESIN868.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN869	(RIC.unRESIN869.u16Register)  /*@rg@*/
#define RIC_RESIN869_RESSEL	(RIC.unRESIN869.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN869_PORTSEL	(RIC.unRESIN869.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN870	(RIC.unRESIN870.u16Register)  /*@rg@*/
#define RIC_RESIN870_RESSEL	(RIC.unRESIN870.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN870_PORTSEL	(RIC.unRESIN870.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN871	(RIC.unRESIN871.u16Register)  /*@rg@*/
#define RIC_RESIN871_RESSEL	(RIC.unRESIN871.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN871_PORTSEL	(RIC.unRESIN871.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN872	(RIC.unRESIN872.u16Register)  /*@rg@*/
#define RIC_RESIN872_RESSEL	(RIC.unRESIN872.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN872_PORTSEL	(RIC.unRESIN872.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN873	(RIC.unRESIN873.u16Register)  /*@rg@*/
#define RIC_RESIN873_RESSEL	(RIC.unRESIN873.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN873_PORTSEL	(RIC.unRESIN873.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN874	(RIC.unRESIN874.u16Register)  /*@rg@*/
#define RIC_RESIN874_RESSEL	(RIC.unRESIN874.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN874_PORTSEL	(RIC.unRESIN874.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN875	(RIC.unRESIN875.u16Register)  /*@rg@*/
#define RIC_RESIN875_RESSEL	(RIC.unRESIN875.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN875_PORTSEL	(RIC.unRESIN875.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN876	(RIC.unRESIN876.u16Register)  /*@rg@*/
#define RIC_RESIN876_RESSEL	(RIC.unRESIN876.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN876_PORTSEL	(RIC.unRESIN876.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN877	(RIC.unRESIN877.u16Register)  /*@rg@*/
#define RIC_RESIN877_RESSEL	(RIC.unRESIN877.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN877_PORTSEL	(RIC.unRESIN877.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN878	(RIC.unRESIN878.u16Register)  /*@rg@*/
#define RIC_RESIN878_RESSEL	(RIC.unRESIN878.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN878_PORTSEL	(RIC.unRESIN878.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN879	(RIC.unRESIN879.u16Register)  /*@rg@*/
#define RIC_RESIN879_RESSEL	(RIC.unRESIN879.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN879_PORTSEL	(RIC.unRESIN879.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN880	(RIC.unRESIN880.u16Register)  /*@rg@*/
#define RIC_RESIN880_RESSEL	(RIC.unRESIN880.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN880_PORTSEL	(RIC.unRESIN880.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN881	(RIC.unRESIN881.u16Register)  /*@rg@*/
#define RIC_RESIN881_RESSEL	(RIC.unRESIN881.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN881_PORTSEL	(RIC.unRESIN881.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN882	(RIC.unRESIN882.u16Register)  /*@rg@*/
#define RIC_RESIN882_RESSEL	(RIC.unRESIN882.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN882_PORTSEL	(RIC.unRESIN882.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN883	(RIC.unRESIN883.u16Register)  /*@rg@*/
#define RIC_RESIN883_RESSEL	(RIC.unRESIN883.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN883_PORTSEL	(RIC.unRESIN883.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN884	(RIC.unRESIN884.u16Register)  /*@rg@*/
#define RIC_RESIN884_RESSEL	(RIC.unRESIN884.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN884_PORTSEL	(RIC.unRESIN884.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN885	(RIC.unRESIN885.u16Register)  /*@rg@*/
#define RIC_RESIN885_RESSEL	(RIC.unRESIN885.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN885_PORTSEL	(RIC.unRESIN885.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN886	(RIC.unRESIN886.u16Register)  /*@rg@*/
#define RIC_RESIN886_RESSEL	(RIC.unRESIN886.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN886_PORTSEL	(RIC.unRESIN886.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN887	(RIC.unRESIN887.u16Register)  /*@rg@*/
#define RIC_RESIN887_RESSEL	(RIC.unRESIN887.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN887_PORTSEL	(RIC.unRESIN887.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN888	(RIC.unRESIN888.u16Register)  /*@rg@*/
#define RIC_RESIN888_RESSEL	(RIC.unRESIN888.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN888_PORTSEL	(RIC.unRESIN888.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN889	(RIC.unRESIN889.u16Register)  /*@rg@*/
#define RIC_RESIN889_RESSEL	(RIC.unRESIN889.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN889_PORTSEL	(RIC.unRESIN889.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN890	(RIC.unRESIN890.u16Register)  /*@rg@*/
#define RIC_RESIN890_RESSEL	(RIC.unRESIN890.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN890_PORTSEL	(RIC.unRESIN890.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN891	(RIC.unRESIN891.u16Register)  /*@rg@*/
#define RIC_RESIN891_RESSEL	(RIC.unRESIN891.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN891_PORTSEL	(RIC.unRESIN891.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN892	(RIC.unRESIN892.u16Register)  /*@rg@*/
#define RIC_RESIN892_RESSEL	(RIC.unRESIN892.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN892_PORTSEL	(RIC.unRESIN892.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN893	(RIC.unRESIN893.u16Register)  /*@rg@*/
#define RIC_RESIN893_RESSEL	(RIC.unRESIN893.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN893_PORTSEL	(RIC.unRESIN893.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN894	(RIC.unRESIN894.u16Register)  /*@rg@*/
#define RIC_RESIN894_RESSEL	(RIC.unRESIN894.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN894_PORTSEL	(RIC.unRESIN894.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN895	(RIC.unRESIN895.u16Register)  /*@rg@*/
#define RIC_RESIN895_RESSEL	(RIC.unRESIN895.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN895_PORTSEL	(RIC.unRESIN895.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN896	(RIC.unRESIN896.u16Register)  /*@rg@*/
#define RIC_RESIN896_RESSEL	(RIC.unRESIN896.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN896_PORTSEL	(RIC.unRESIN896.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN897	(RIC.unRESIN897.u16Register)  /*@rg@*/
#define RIC_RESIN897_RESSEL	(RIC.unRESIN897.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN897_PORTSEL	(RIC.unRESIN897.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN898	(RIC.unRESIN898.u16Register)  /*@rg@*/
#define RIC_RESIN898_RESSEL	(RIC.unRESIN898.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN898_PORTSEL	(RIC.unRESIN898.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN899	(RIC.unRESIN899.u16Register)  /*@rg@*/
#define RIC_RESIN899_RESSEL	(RIC.unRESIN899.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN899_PORTSEL	(RIC.unRESIN899.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN900	(RIC.unRESIN900.u16Register)  /*@rg@*/
#define RIC_RESIN900_RESSEL	(RIC.unRESIN900.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN900_PORTSEL	(RIC.unRESIN900.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN901	(RIC.unRESIN901.u16Register)  /*@rg@*/
#define RIC_RESIN901_RESSEL	(RIC.unRESIN901.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN901_PORTSEL	(RIC.unRESIN901.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN902	(RIC.unRESIN902.u16Register)  /*@rg@*/
#define RIC_RESIN902_RESSEL	(RIC.unRESIN902.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN902_PORTSEL	(RIC.unRESIN902.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN903	(RIC.unRESIN903.u16Register)  /*@rg@*/
#define RIC_RESIN903_RESSEL	(RIC.unRESIN903.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN903_PORTSEL	(RIC.unRESIN903.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN904	(RIC.unRESIN904.u16Register)  /*@rg@*/
#define RIC_RESIN904_RESSEL	(RIC.unRESIN904.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN904_PORTSEL	(RIC.unRESIN904.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN905	(RIC.unRESIN905.u16Register)  /*@rg@*/
#define RIC_RESIN905_RESSEL	(RIC.unRESIN905.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN905_PORTSEL	(RIC.unRESIN905.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN906	(RIC.unRESIN906.u16Register)  /*@rg@*/
#define RIC_RESIN906_RESSEL	(RIC.unRESIN906.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN906_PORTSEL	(RIC.unRESIN906.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN907	(RIC.unRESIN907.u16Register)  /*@rg@*/
#define RIC_RESIN907_RESSEL	(RIC.unRESIN907.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN907_PORTSEL	(RIC.unRESIN907.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN908	(RIC.unRESIN908.u16Register)  /*@rg@*/
#define RIC_RESIN908_RESSEL	(RIC.unRESIN908.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN908_PORTSEL	(RIC.unRESIN908.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN909	(RIC.unRESIN909.u16Register)  /*@rg@*/
#define RIC_RESIN909_RESSEL	(RIC.unRESIN909.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN909_PORTSEL	(RIC.unRESIN909.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN910	(RIC.unRESIN910.u16Register)  /*@rg@*/
#define RIC_RESIN910_RESSEL	(RIC.unRESIN910.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN910_PORTSEL	(RIC.unRESIN910.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN911	(RIC.unRESIN911.u16Register)  /*@rg@*/
#define RIC_RESIN911_RESSEL	(RIC.unRESIN911.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN911_PORTSEL	(RIC.unRESIN911.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN912	(RIC.unRESIN912.u16Register)  /*@rg@*/
#define RIC_RESIN912_RESSEL	(RIC.unRESIN912.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN912_PORTSEL	(RIC.unRESIN912.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN913	(RIC.unRESIN913.u16Register)  /*@rg@*/
#define RIC_RESIN913_RESSEL	(RIC.unRESIN913.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN913_PORTSEL	(RIC.unRESIN913.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN914	(RIC.unRESIN914.u16Register)  /*@rg@*/
#define RIC_RESIN914_RESSEL	(RIC.unRESIN914.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN914_PORTSEL	(RIC.unRESIN914.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN915	(RIC.unRESIN915.u16Register)  /*@rg@*/
#define RIC_RESIN915_RESSEL	(RIC.unRESIN915.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN915_PORTSEL	(RIC.unRESIN915.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN916	(RIC.unRESIN916.u16Register)  /*@rg@*/
#define RIC_RESIN916_RESSEL	(RIC.unRESIN916.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN916_PORTSEL	(RIC.unRESIN916.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN917	(RIC.unRESIN917.u16Register)  /*@rg@*/
#define RIC_RESIN917_RESSEL	(RIC.unRESIN917.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN917_PORTSEL	(RIC.unRESIN917.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN918	(RIC.unRESIN918.u16Register)  /*@rg@*/
#define RIC_RESIN918_RESSEL	(RIC.unRESIN918.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN918_PORTSEL	(RIC.unRESIN918.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN919	(RIC.unRESIN919.u16Register)  /*@rg@*/
#define RIC_RESIN919_RESSEL	(RIC.unRESIN919.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN919_PORTSEL	(RIC.unRESIN919.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN920	(RIC.unRESIN920.u16Register)  /*@rg@*/
#define RIC_RESIN920_RESSEL	(RIC.unRESIN920.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN920_PORTSEL	(RIC.unRESIN920.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN921	(RIC.unRESIN921.u16Register)  /*@rg@*/
#define RIC_RESIN921_RESSEL	(RIC.unRESIN921.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN921_PORTSEL	(RIC.unRESIN921.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN922	(RIC.unRESIN922.u16Register)  /*@rg@*/
#define RIC_RESIN922_RESSEL	(RIC.unRESIN922.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN922_PORTSEL	(RIC.unRESIN922.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN923	(RIC.unRESIN923.u16Register)  /*@rg@*/
#define RIC_RESIN923_RESSEL	(RIC.unRESIN923.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN923_PORTSEL	(RIC.unRESIN923.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN924	(RIC.unRESIN924.u16Register)  /*@rg@*/
#define RIC_RESIN924_RESSEL	(RIC.unRESIN924.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN924_PORTSEL	(RIC.unRESIN924.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN925	(RIC.unRESIN925.u16Register)  /*@rg@*/
#define RIC_RESIN925_RESSEL	(RIC.unRESIN925.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN925_PORTSEL	(RIC.unRESIN925.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN926	(RIC.unRESIN926.u16Register)  /*@rg@*/
#define RIC_RESIN926_RESSEL	(RIC.unRESIN926.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN926_PORTSEL	(RIC.unRESIN926.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN927	(RIC.unRESIN927.u16Register)  /*@rg@*/
#define RIC_RESIN927_RESSEL	(RIC.unRESIN927.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN927_PORTSEL	(RIC.unRESIN927.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN928	(RIC.unRESIN928.u16Register)  /*@rg@*/
#define RIC_RESIN928_RESSEL	(RIC.unRESIN928.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN928_PORTSEL	(RIC.unRESIN928.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN929	(RIC.unRESIN929.u16Register)  /*@rg@*/
#define RIC_RESIN929_RESSEL	(RIC.unRESIN929.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN929_PORTSEL	(RIC.unRESIN929.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN930	(RIC.unRESIN930.u16Register)  /*@rg@*/
#define RIC_RESIN930_RESSEL	(RIC.unRESIN930.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN930_PORTSEL	(RIC.unRESIN930.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN931	(RIC.unRESIN931.u16Register)  /*@rg@*/
#define RIC_RESIN931_RESSEL	(RIC.unRESIN931.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN931_PORTSEL	(RIC.unRESIN931.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN932	(RIC.unRESIN932.u16Register)  /*@rg@*/
#define RIC_RESIN932_RESSEL	(RIC.unRESIN932.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN932_PORTSEL	(RIC.unRESIN932.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN933	(RIC.unRESIN933.u16Register)  /*@rg@*/
#define RIC_RESIN933_RESSEL	(RIC.unRESIN933.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN933_PORTSEL	(RIC.unRESIN933.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN934	(RIC.unRESIN934.u16Register)  /*@rg@*/
#define RIC_RESIN934_RESSEL	(RIC.unRESIN934.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN934_PORTSEL	(RIC.unRESIN934.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN935	(RIC.unRESIN935.u16Register)  /*@rg@*/
#define RIC_RESIN935_RESSEL	(RIC.unRESIN935.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN935_PORTSEL	(RIC.unRESIN935.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN936	(RIC.unRESIN936.u16Register)  /*@rg@*/
#define RIC_RESIN936_RESSEL	(RIC.unRESIN936.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN936_PORTSEL	(RIC.unRESIN936.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN937	(RIC.unRESIN937.u16Register)  /*@rg@*/
#define RIC_RESIN937_RESSEL	(RIC.unRESIN937.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN937_PORTSEL	(RIC.unRESIN937.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN938	(RIC.unRESIN938.u16Register)  /*@rg@*/
#define RIC_RESIN938_RESSEL	(RIC.unRESIN938.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN938_PORTSEL	(RIC.unRESIN938.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN939	(RIC.unRESIN939.u16Register)  /*@rg@*/
#define RIC_RESIN939_RESSEL	(RIC.unRESIN939.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN939_PORTSEL	(RIC.unRESIN939.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN940	(RIC.unRESIN940.u16Register)  /*@rg@*/
#define RIC_RESIN940_RESSEL	(RIC.unRESIN940.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN940_PORTSEL	(RIC.unRESIN940.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN941	(RIC.unRESIN941.u16Register)  /*@rg@*/
#define RIC_RESIN941_RESSEL	(RIC.unRESIN941.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN941_PORTSEL	(RIC.unRESIN941.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN942	(RIC.unRESIN942.u16Register)  /*@rg@*/
#define RIC_RESIN942_RESSEL	(RIC.unRESIN942.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN942_PORTSEL	(RIC.unRESIN942.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN943	(RIC.unRESIN943.u16Register)  /*@rg@*/
#define RIC_RESIN943_RESSEL	(RIC.unRESIN943.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN943_PORTSEL	(RIC.unRESIN943.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN944	(RIC.unRESIN944.u16Register)  /*@rg@*/
#define RIC_RESIN944_RESSEL	(RIC.unRESIN944.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN944_PORTSEL	(RIC.unRESIN944.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN945	(RIC.unRESIN945.u16Register)  /*@rg@*/
#define RIC_RESIN945_RESSEL	(RIC.unRESIN945.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN945_PORTSEL	(RIC.unRESIN945.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN946	(RIC.unRESIN946.u16Register)  /*@rg@*/
#define RIC_RESIN946_RESSEL	(RIC.unRESIN946.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN946_PORTSEL	(RIC.unRESIN946.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN947	(RIC.unRESIN947.u16Register)  /*@rg@*/
#define RIC_RESIN947_RESSEL	(RIC.unRESIN947.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN947_PORTSEL	(RIC.unRESIN947.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN948	(RIC.unRESIN948.u16Register)  /*@rg@*/
#define RIC_RESIN948_RESSEL	(RIC.unRESIN948.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN948_PORTSEL	(RIC.unRESIN948.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN949	(RIC.unRESIN949.u16Register)  /*@rg@*/
#define RIC_RESIN949_RESSEL	(RIC.unRESIN949.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN949_PORTSEL	(RIC.unRESIN949.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN950	(RIC.unRESIN950.u16Register)  /*@rg@*/
#define RIC_RESIN950_RESSEL	(RIC.unRESIN950.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN950_PORTSEL	(RIC.unRESIN950.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN951	(RIC.unRESIN951.u16Register)  /*@rg@*/
#define RIC_RESIN951_RESSEL	(RIC.unRESIN951.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN951_PORTSEL	(RIC.unRESIN951.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN952	(RIC.unRESIN952.u16Register)  /*@rg@*/
#define RIC_RESIN952_RESSEL	(RIC.unRESIN952.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN952_PORTSEL	(RIC.unRESIN952.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN953	(RIC.unRESIN953.u16Register)  /*@rg@*/
#define RIC_RESIN953_RESSEL	(RIC.unRESIN953.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN953_PORTSEL	(RIC.unRESIN953.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN954	(RIC.unRESIN954.u16Register)  /*@rg@*/
#define RIC_RESIN954_RESSEL	(RIC.unRESIN954.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN954_PORTSEL	(RIC.unRESIN954.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN955	(RIC.unRESIN955.u16Register)  /*@rg@*/
#define RIC_RESIN955_RESSEL	(RIC.unRESIN955.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN955_PORTSEL	(RIC.unRESIN955.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN956	(RIC.unRESIN956.u16Register)  /*@rg@*/
#define RIC_RESIN956_RESSEL	(RIC.unRESIN956.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN956_PORTSEL	(RIC.unRESIN956.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN957	(RIC.unRESIN957.u16Register)  /*@rg@*/
#define RIC_RESIN957_RESSEL	(RIC.unRESIN957.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN957_PORTSEL	(RIC.unRESIN957.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN958	(RIC.unRESIN958.u16Register)  /*@rg@*/
#define RIC_RESIN958_RESSEL	(RIC.unRESIN958.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN958_PORTSEL	(RIC.unRESIN958.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN959	(RIC.unRESIN959.u16Register)  /*@rg@*/
#define RIC_RESIN959_RESSEL	(RIC.unRESIN959.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN959_PORTSEL	(RIC.unRESIN959.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN960	(RIC.unRESIN960.u16Register)  /*@rg@*/
#define RIC_RESIN960_RESSEL	(RIC.unRESIN960.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN960_PORTSEL	(RIC.unRESIN960.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN961	(RIC.unRESIN961.u16Register)  /*@rg@*/
#define RIC_RESIN961_RESSEL	(RIC.unRESIN961.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN961_PORTSEL	(RIC.unRESIN961.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN962	(RIC.unRESIN962.u16Register)  /*@rg@*/
#define RIC_RESIN962_RESSEL	(RIC.unRESIN962.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN962_PORTSEL	(RIC.unRESIN962.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN963	(RIC.unRESIN963.u16Register)  /*@rg@*/
#define RIC_RESIN963_RESSEL	(RIC.unRESIN963.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN963_PORTSEL	(RIC.unRESIN963.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN964	(RIC.unRESIN964.u16Register)  /*@rg@*/
#define RIC_RESIN964_RESSEL	(RIC.unRESIN964.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN964_PORTSEL	(RIC.unRESIN964.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN965	(RIC.unRESIN965.u16Register)  /*@rg@*/
#define RIC_RESIN965_RESSEL	(RIC.unRESIN965.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN965_PORTSEL	(RIC.unRESIN965.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN966	(RIC.unRESIN966.u16Register)  /*@rg@*/
#define RIC_RESIN966_RESSEL	(RIC.unRESIN966.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN966_PORTSEL	(RIC.unRESIN966.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN967	(RIC.unRESIN967.u16Register)  /*@rg@*/
#define RIC_RESIN967_RESSEL	(RIC.unRESIN967.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN967_PORTSEL	(RIC.unRESIN967.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN968	(RIC.unRESIN968.u16Register)  /*@rg@*/
#define RIC_RESIN968_RESSEL	(RIC.unRESIN968.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN968_PORTSEL	(RIC.unRESIN968.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN969	(RIC.unRESIN969.u16Register)  /*@rg@*/
#define RIC_RESIN969_RESSEL	(RIC.unRESIN969.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN969_PORTSEL	(RIC.unRESIN969.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN970	(RIC.unRESIN970.u16Register)  /*@rg@*/
#define RIC_RESIN970_RESSEL	(RIC.unRESIN970.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN970_PORTSEL	(RIC.unRESIN970.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN971	(RIC.unRESIN971.u16Register)  /*@rg@*/
#define RIC_RESIN971_RESSEL	(RIC.unRESIN971.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN971_PORTSEL	(RIC.unRESIN971.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN972	(RIC.unRESIN972.u16Register)  /*@rg@*/
#define RIC_RESIN972_RESSEL	(RIC.unRESIN972.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN972_PORTSEL	(RIC.unRESIN972.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN973	(RIC.unRESIN973.u16Register)  /*@rg@*/
#define RIC_RESIN973_RESSEL	(RIC.unRESIN973.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN973_PORTSEL	(RIC.unRESIN973.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN974	(RIC.unRESIN974.u16Register)  /*@rg@*/
#define RIC_RESIN974_RESSEL	(RIC.unRESIN974.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN974_PORTSEL	(RIC.unRESIN974.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN975	(RIC.unRESIN975.u16Register)  /*@rg@*/
#define RIC_RESIN975_RESSEL	(RIC.unRESIN975.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN975_PORTSEL	(RIC.unRESIN975.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN976	(RIC.unRESIN976.u16Register)  /*@rg@*/
#define RIC_RESIN976_RESSEL	(RIC.unRESIN976.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN976_PORTSEL	(RIC.unRESIN976.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN977	(RIC.unRESIN977.u16Register)  /*@rg@*/
#define RIC_RESIN977_RESSEL	(RIC.unRESIN977.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN977_PORTSEL	(RIC.unRESIN977.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN978	(RIC.unRESIN978.u16Register)  /*@rg@*/
#define RIC_RESIN978_RESSEL	(RIC.unRESIN978.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN978_PORTSEL	(RIC.unRESIN978.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN979	(RIC.unRESIN979.u16Register)  /*@rg@*/
#define RIC_RESIN979_RESSEL	(RIC.unRESIN979.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN979_PORTSEL	(RIC.unRESIN979.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN980	(RIC.unRESIN980.u16Register)  /*@rg@*/
#define RIC_RESIN980_RESSEL	(RIC.unRESIN980.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN980_PORTSEL	(RIC.unRESIN980.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN981	(RIC.unRESIN981.u16Register)  /*@rg@*/
#define RIC_RESIN981_RESSEL	(RIC.unRESIN981.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN981_PORTSEL	(RIC.unRESIN981.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN982	(RIC.unRESIN982.u16Register)  /*@rg@*/
#define RIC_RESIN982_RESSEL	(RIC.unRESIN982.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN982_PORTSEL	(RIC.unRESIN982.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN983	(RIC.unRESIN983.u16Register)  /*@rg@*/
#define RIC_RESIN983_RESSEL	(RIC.unRESIN983.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN983_PORTSEL	(RIC.unRESIN983.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN984	(RIC.unRESIN984.u16Register)  /*@rg@*/
#define RIC_RESIN984_RESSEL	(RIC.unRESIN984.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN984_PORTSEL	(RIC.unRESIN984.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN985	(RIC.unRESIN985.u16Register)  /*@rg@*/
#define RIC_RESIN985_RESSEL	(RIC.unRESIN985.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN985_PORTSEL	(RIC.unRESIN985.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN986	(RIC.unRESIN986.u16Register)  /*@rg@*/
#define RIC_RESIN986_RESSEL	(RIC.unRESIN986.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN986_PORTSEL	(RIC.unRESIN986.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN987	(RIC.unRESIN987.u16Register)  /*@rg@*/
#define RIC_RESIN987_RESSEL	(RIC.unRESIN987.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN987_PORTSEL	(RIC.unRESIN987.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN988	(RIC.unRESIN988.u16Register)  /*@rg@*/
#define RIC_RESIN988_RESSEL	(RIC.unRESIN988.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN988_PORTSEL	(RIC.unRESIN988.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN989	(RIC.unRESIN989.u16Register)  /*@rg@*/
#define RIC_RESIN989_RESSEL	(RIC.unRESIN989.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN989_PORTSEL	(RIC.unRESIN989.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN990	(RIC.unRESIN990.u16Register)  /*@rg@*/
#define RIC_RESIN990_RESSEL	(RIC.unRESIN990.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN990_PORTSEL	(RIC.unRESIN990.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN991	(RIC.unRESIN991.u16Register)  /*@rg@*/
#define RIC_RESIN991_RESSEL	(RIC.unRESIN991.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN991_PORTSEL	(RIC.unRESIN991.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN992	(RIC.unRESIN992.u16Register)  /*@rg@*/
#define RIC_RESIN992_RESSEL	(RIC.unRESIN992.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN992_PORTSEL	(RIC.unRESIN992.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN993	(RIC.unRESIN993.u16Register)  /*@rg@*/
#define RIC_RESIN993_RESSEL	(RIC.unRESIN993.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN993_PORTSEL	(RIC.unRESIN993.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN994	(RIC.unRESIN994.u16Register)  /*@rg@*/
#define RIC_RESIN994_RESSEL	(RIC.unRESIN994.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN994_PORTSEL	(RIC.unRESIN994.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN995	(RIC.unRESIN995.u16Register)  /*@rg@*/
#define RIC_RESIN995_RESSEL	(RIC.unRESIN995.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN995_PORTSEL	(RIC.unRESIN995.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN996	(RIC.unRESIN996.u16Register)  /*@rg@*/
#define RIC_RESIN996_RESSEL	(RIC.unRESIN996.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN996_PORTSEL	(RIC.unRESIN996.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN997	(RIC.unRESIN997.u16Register)  /*@rg@*/
#define RIC_RESIN997_RESSEL	(RIC.unRESIN997.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN997_PORTSEL	(RIC.unRESIN997.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN998	(RIC.unRESIN998.u16Register)  /*@rg@*/
#define RIC_RESIN998_RESSEL	(RIC.unRESIN998.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN998_PORTSEL	(RIC.unRESIN998.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN999	(RIC.unRESIN999.u16Register)  /*@rg@*/
#define RIC_RESIN999_RESSEL	(RIC.unRESIN999.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN999_PORTSEL	(RIC.unRESIN999.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1000	(RIC.unRESIN1000.u16Register)  /*@rg@*/
#define RIC_RESIN1000_RESSEL	(RIC.unRESIN1000.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1000_PORTSEL	(RIC.unRESIN1000.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1001	(RIC.unRESIN1001.u16Register)  /*@rg@*/
#define RIC_RESIN1001_RESSEL	(RIC.unRESIN1001.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1001_PORTSEL	(RIC.unRESIN1001.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1002	(RIC.unRESIN1002.u16Register)  /*@rg@*/
#define RIC_RESIN1002_RESSEL	(RIC.unRESIN1002.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1002_PORTSEL	(RIC.unRESIN1002.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1003	(RIC.unRESIN1003.u16Register)  /*@rg@*/
#define RIC_RESIN1003_RESSEL	(RIC.unRESIN1003.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1003_PORTSEL	(RIC.unRESIN1003.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1004	(RIC.unRESIN1004.u16Register)  /*@rg@*/
#define RIC_RESIN1004_RESSEL	(RIC.unRESIN1004.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1004_PORTSEL	(RIC.unRESIN1004.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1005	(RIC.unRESIN1005.u16Register)  /*@rg@*/
#define RIC_RESIN1005_RESSEL	(RIC.unRESIN1005.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1005_PORTSEL	(RIC.unRESIN1005.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1006	(RIC.unRESIN1006.u16Register)  /*@rg@*/
#define RIC_RESIN1006_RESSEL	(RIC.unRESIN1006.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1006_PORTSEL	(RIC.unRESIN1006.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1007	(RIC.unRESIN1007.u16Register)  /*@rg@*/
#define RIC_RESIN1007_RESSEL	(RIC.unRESIN1007.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1007_PORTSEL	(RIC.unRESIN1007.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1008	(RIC.unRESIN1008.u16Register)  /*@rg@*/
#define RIC_RESIN1008_RESSEL	(RIC.unRESIN1008.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1008_PORTSEL	(RIC.unRESIN1008.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1009	(RIC.unRESIN1009.u16Register)  /*@rg@*/
#define RIC_RESIN1009_RESSEL	(RIC.unRESIN1009.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1009_PORTSEL	(RIC.unRESIN1009.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1010	(RIC.unRESIN1010.u16Register)  /*@rg@*/
#define RIC_RESIN1010_RESSEL	(RIC.unRESIN1010.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1010_PORTSEL	(RIC.unRESIN1010.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1011	(RIC.unRESIN1011.u16Register)  /*@rg@*/
#define RIC_RESIN1011_RESSEL	(RIC.unRESIN1011.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1011_PORTSEL	(RIC.unRESIN1011.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1012	(RIC.unRESIN1012.u16Register)  /*@rg@*/
#define RIC_RESIN1012_RESSEL	(RIC.unRESIN1012.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1012_PORTSEL	(RIC.unRESIN1012.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1013	(RIC.unRESIN1013.u16Register)  /*@rg@*/
#define RIC_RESIN1013_RESSEL	(RIC.unRESIN1013.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1013_PORTSEL	(RIC.unRESIN1013.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1014	(RIC.unRESIN1014.u16Register)  /*@rg@*/
#define RIC_RESIN1014_RESSEL	(RIC.unRESIN1014.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1014_PORTSEL	(RIC.unRESIN1014.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1015	(RIC.unRESIN1015.u16Register)  /*@rg@*/
#define RIC_RESIN1015_RESSEL	(RIC.unRESIN1015.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1015_PORTSEL	(RIC.unRESIN1015.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1016	(RIC.unRESIN1016.u16Register)  /*@rg@*/
#define RIC_RESIN1016_RESSEL	(RIC.unRESIN1016.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1016_PORTSEL	(RIC.unRESIN1016.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1017	(RIC.unRESIN1017.u16Register)  /*@rg@*/
#define RIC_RESIN1017_RESSEL	(RIC.unRESIN1017.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1017_PORTSEL	(RIC.unRESIN1017.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1018	(RIC.unRESIN1018.u16Register)  /*@rg@*/
#define RIC_RESIN1018_RESSEL	(RIC.unRESIN1018.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1018_PORTSEL	(RIC.unRESIN1018.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1019	(RIC.unRESIN1019.u16Register)  /*@rg@*/
#define RIC_RESIN1019_RESSEL	(RIC.unRESIN1019.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1019_PORTSEL	(RIC.unRESIN1019.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1020	(RIC.unRESIN1020.u16Register)  /*@rg@*/
#define RIC_RESIN1020_RESSEL	(RIC.unRESIN1020.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1020_PORTSEL	(RIC.unRESIN1020.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1021	(RIC.unRESIN1021.u16Register)  /*@rg@*/
#define RIC_RESIN1021_RESSEL	(RIC.unRESIN1021.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1021_PORTSEL	(RIC.unRESIN1021.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1022	(RIC.unRESIN1022.u16Register)  /*@rg@*/
#define RIC_RESIN1022_RESSEL	(RIC.unRESIN1022.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1022_PORTSEL	(RIC.unRESIN1022.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1023	(RIC.unRESIN1023.u16Register)  /*@rg@*/
#define RIC_RESIN1023_RESSEL	(RIC.unRESIN1023.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1023_PORTSEL	(RIC.unRESIN1023.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1024	(RIC.unRESIN1024.u16Register)  /*@rg@*/
#define RIC_RESIN1024_RESSEL	(RIC.unRESIN1024.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1024_PORTSEL	(RIC.unRESIN1024.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1025	(RIC.unRESIN1025.u16Register)  /*@rg@*/
#define RIC_RESIN1025_RESSEL	(RIC.unRESIN1025.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1025_PORTSEL	(RIC.unRESIN1025.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1026	(RIC.unRESIN1026.u16Register)  /*@rg@*/
#define RIC_RESIN1026_RESSEL	(RIC.unRESIN1026.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1026_PORTSEL	(RIC.unRESIN1026.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1027	(RIC.unRESIN1027.u16Register)  /*@rg@*/
#define RIC_RESIN1027_RESSEL	(RIC.unRESIN1027.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1027_PORTSEL	(RIC.unRESIN1027.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1028	(RIC.unRESIN1028.u16Register)  /*@rg@*/
#define RIC_RESIN1028_RESSEL	(RIC.unRESIN1028.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1028_PORTSEL	(RIC.unRESIN1028.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1029	(RIC.unRESIN1029.u16Register)  /*@rg@*/
#define RIC_RESIN1029_RESSEL	(RIC.unRESIN1029.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1029_PORTSEL	(RIC.unRESIN1029.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1030	(RIC.unRESIN1030.u16Register)  /*@rg@*/
#define RIC_RESIN1030_RESSEL	(RIC.unRESIN1030.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1030_PORTSEL	(RIC.unRESIN1030.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1031	(RIC.unRESIN1031.u16Register)  /*@rg@*/
#define RIC_RESIN1031_RESSEL	(RIC.unRESIN1031.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1031_PORTSEL	(RIC.unRESIN1031.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1032	(RIC.unRESIN1032.u16Register)  /*@rg@*/
#define RIC_RESIN1032_RESSEL	(RIC.unRESIN1032.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1032_PORTSEL	(RIC.unRESIN1032.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1033	(RIC.unRESIN1033.u16Register)  /*@rg@*/
#define RIC_RESIN1033_RESSEL	(RIC.unRESIN1033.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1033_PORTSEL	(RIC.unRESIN1033.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1034	(RIC.unRESIN1034.u16Register)  /*@rg@*/
#define RIC_RESIN1034_RESSEL	(RIC.unRESIN1034.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1034_PORTSEL	(RIC.unRESIN1034.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1035	(RIC.unRESIN1035.u16Register)  /*@rg@*/
#define RIC_RESIN1035_RESSEL	(RIC.unRESIN1035.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1035_PORTSEL	(RIC.unRESIN1035.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1036	(RIC.unRESIN1036.u16Register)  /*@rg@*/
#define RIC_RESIN1036_RESSEL	(RIC.unRESIN1036.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1036_PORTSEL	(RIC.unRESIN1036.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1037	(RIC.unRESIN1037.u16Register)  /*@rg@*/
#define RIC_RESIN1037_RESSEL	(RIC.unRESIN1037.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1037_PORTSEL	(RIC.unRESIN1037.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1038	(RIC.unRESIN1038.u16Register)  /*@rg@*/
#define RIC_RESIN1038_RESSEL	(RIC.unRESIN1038.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1038_PORTSEL	(RIC.unRESIN1038.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1039	(RIC.unRESIN1039.u16Register)  /*@rg@*/
#define RIC_RESIN1039_RESSEL	(RIC.unRESIN1039.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1039_PORTSEL	(RIC.unRESIN1039.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1040	(RIC.unRESIN1040.u16Register)  /*@rg@*/
#define RIC_RESIN1040_RESSEL	(RIC.unRESIN1040.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1040_PORTSEL	(RIC.unRESIN1040.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1041	(RIC.unRESIN1041.u16Register)  /*@rg@*/
#define RIC_RESIN1041_RESSEL	(RIC.unRESIN1041.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1041_PORTSEL	(RIC.unRESIN1041.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1042	(RIC.unRESIN1042.u16Register)  /*@rg@*/
#define RIC_RESIN1042_RESSEL	(RIC.unRESIN1042.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1042_PORTSEL	(RIC.unRESIN1042.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1043	(RIC.unRESIN1043.u16Register)  /*@rg@*/
#define RIC_RESIN1043_RESSEL	(RIC.unRESIN1043.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1043_PORTSEL	(RIC.unRESIN1043.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1044	(RIC.unRESIN1044.u16Register)  /*@rg@*/
#define RIC_RESIN1044_RESSEL	(RIC.unRESIN1044.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1044_PORTSEL	(RIC.unRESIN1044.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1045	(RIC.unRESIN1045.u16Register)  /*@rg@*/
#define RIC_RESIN1045_RESSEL	(RIC.unRESIN1045.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1045_PORTSEL	(RIC.unRESIN1045.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1046	(RIC.unRESIN1046.u16Register)  /*@rg@*/
#define RIC_RESIN1046_RESSEL	(RIC.unRESIN1046.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1046_PORTSEL	(RIC.unRESIN1046.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1047	(RIC.unRESIN1047.u16Register)  /*@rg@*/
#define RIC_RESIN1047_RESSEL	(RIC.unRESIN1047.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1047_PORTSEL	(RIC.unRESIN1047.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1048	(RIC.unRESIN1048.u16Register)  /*@rg@*/
#define RIC_RESIN1048_RESSEL	(RIC.unRESIN1048.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1048_PORTSEL	(RIC.unRESIN1048.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1049	(RIC.unRESIN1049.u16Register)  /*@rg@*/
#define RIC_RESIN1049_RESSEL	(RIC.unRESIN1049.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1049_PORTSEL	(RIC.unRESIN1049.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1050	(RIC.unRESIN1050.u16Register)  /*@rg@*/
#define RIC_RESIN1050_RESSEL	(RIC.unRESIN1050.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1050_PORTSEL	(RIC.unRESIN1050.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1051	(RIC.unRESIN1051.u16Register)  /*@rg@*/
#define RIC_RESIN1051_RESSEL	(RIC.unRESIN1051.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1051_PORTSEL	(RIC.unRESIN1051.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1052	(RIC.unRESIN1052.u16Register)  /*@rg@*/
#define RIC_RESIN1052_RESSEL	(RIC.unRESIN1052.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1052_PORTSEL	(RIC.unRESIN1052.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1053	(RIC.unRESIN1053.u16Register)  /*@rg@*/
#define RIC_RESIN1053_RESSEL	(RIC.unRESIN1053.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1053_PORTSEL	(RIC.unRESIN1053.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1054	(RIC.unRESIN1054.u16Register)  /*@rg@*/
#define RIC_RESIN1054_RESSEL	(RIC.unRESIN1054.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1054_PORTSEL	(RIC.unRESIN1054.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1055	(RIC.unRESIN1055.u16Register)  /*@rg@*/
#define RIC_RESIN1055_RESSEL	(RIC.unRESIN1055.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1055_PORTSEL	(RIC.unRESIN1055.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1056	(RIC.unRESIN1056.u16Register)  /*@rg@*/
#define RIC_RESIN1056_RESSEL	(RIC.unRESIN1056.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1056_PORTSEL	(RIC.unRESIN1056.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1057	(RIC.unRESIN1057.u16Register)  /*@rg@*/
#define RIC_RESIN1057_RESSEL	(RIC.unRESIN1057.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1057_PORTSEL	(RIC.unRESIN1057.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1058	(RIC.unRESIN1058.u16Register)  /*@rg@*/
#define RIC_RESIN1058_RESSEL	(RIC.unRESIN1058.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1058_PORTSEL	(RIC.unRESIN1058.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1059	(RIC.unRESIN1059.u16Register)  /*@rg@*/
#define RIC_RESIN1059_RESSEL	(RIC.unRESIN1059.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1059_PORTSEL	(RIC.unRESIN1059.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1060	(RIC.unRESIN1060.u16Register)  /*@rg@*/
#define RIC_RESIN1060_RESSEL	(RIC.unRESIN1060.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1060_PORTSEL	(RIC.unRESIN1060.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1061	(RIC.unRESIN1061.u16Register)  /*@rg@*/
#define RIC_RESIN1061_RESSEL	(RIC.unRESIN1061.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1061_PORTSEL	(RIC.unRESIN1061.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1062	(RIC.unRESIN1062.u16Register)  /*@rg@*/
#define RIC_RESIN1062_RESSEL	(RIC.unRESIN1062.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1062_PORTSEL	(RIC.unRESIN1062.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1063	(RIC.unRESIN1063.u16Register)  /*@rg@*/
#define RIC_RESIN1063_RESSEL	(RIC.unRESIN1063.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1063_PORTSEL	(RIC.unRESIN1063.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1064	(RIC.unRESIN1064.u16Register)  /*@rg@*/
#define RIC_RESIN1064_RESSEL	(RIC.unRESIN1064.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1064_PORTSEL	(RIC.unRESIN1064.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1065	(RIC.unRESIN1065.u16Register)  /*@rg@*/
#define RIC_RESIN1065_RESSEL	(RIC.unRESIN1065.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1065_PORTSEL	(RIC.unRESIN1065.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1066	(RIC.unRESIN1066.u16Register)  /*@rg@*/
#define RIC_RESIN1066_RESSEL	(RIC.unRESIN1066.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1066_PORTSEL	(RIC.unRESIN1066.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1067	(RIC.unRESIN1067.u16Register)  /*@rg@*/
#define RIC_RESIN1067_RESSEL	(RIC.unRESIN1067.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1067_PORTSEL	(RIC.unRESIN1067.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1068	(RIC.unRESIN1068.u16Register)  /*@rg@*/
#define RIC_RESIN1068_RESSEL	(RIC.unRESIN1068.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1068_PORTSEL	(RIC.unRESIN1068.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1069	(RIC.unRESIN1069.u16Register)  /*@rg@*/
#define RIC_RESIN1069_RESSEL	(RIC.unRESIN1069.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1069_PORTSEL	(RIC.unRESIN1069.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1070	(RIC.unRESIN1070.u16Register)  /*@rg@*/
#define RIC_RESIN1070_RESSEL	(RIC.unRESIN1070.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1070_PORTSEL	(RIC.unRESIN1070.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1071	(RIC.unRESIN1071.u16Register)  /*@rg@*/
#define RIC_RESIN1071_RESSEL	(RIC.unRESIN1071.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1071_PORTSEL	(RIC.unRESIN1071.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1072	(RIC.unRESIN1072.u16Register)  /*@rg@*/
#define RIC_RESIN1072_RESSEL	(RIC.unRESIN1072.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1072_PORTSEL	(RIC.unRESIN1072.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1073	(RIC.unRESIN1073.u16Register)  /*@rg@*/
#define RIC_RESIN1073_RESSEL	(RIC.unRESIN1073.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1073_PORTSEL	(RIC.unRESIN1073.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1074	(RIC.unRESIN1074.u16Register)  /*@rg@*/
#define RIC_RESIN1074_RESSEL	(RIC.unRESIN1074.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1074_PORTSEL	(RIC.unRESIN1074.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1075	(RIC.unRESIN1075.u16Register)  /*@rg@*/
#define RIC_RESIN1075_RESSEL	(RIC.unRESIN1075.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1075_PORTSEL	(RIC.unRESIN1075.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1076	(RIC.unRESIN1076.u16Register)  /*@rg@*/
#define RIC_RESIN1076_RESSEL	(RIC.unRESIN1076.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1076_PORTSEL	(RIC.unRESIN1076.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1077	(RIC.unRESIN1077.u16Register)  /*@rg@*/
#define RIC_RESIN1077_RESSEL	(RIC.unRESIN1077.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1077_PORTSEL	(RIC.unRESIN1077.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1078	(RIC.unRESIN1078.u16Register)  /*@rg@*/
#define RIC_RESIN1078_RESSEL	(RIC.unRESIN1078.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1078_PORTSEL	(RIC.unRESIN1078.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1079	(RIC.unRESIN1079.u16Register)  /*@rg@*/
#define RIC_RESIN1079_RESSEL	(RIC.unRESIN1079.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1079_PORTSEL	(RIC.unRESIN1079.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1080	(RIC.unRESIN1080.u16Register)  /*@rg@*/
#define RIC_RESIN1080_RESSEL	(RIC.unRESIN1080.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1080_PORTSEL	(RIC.unRESIN1080.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1081	(RIC.unRESIN1081.u16Register)  /*@rg@*/
#define RIC_RESIN1081_RESSEL	(RIC.unRESIN1081.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1081_PORTSEL	(RIC.unRESIN1081.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1082	(RIC.unRESIN1082.u16Register)  /*@rg@*/
#define RIC_RESIN1082_RESSEL	(RIC.unRESIN1082.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1082_PORTSEL	(RIC.unRESIN1082.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1083	(RIC.unRESIN1083.u16Register)  /*@rg@*/
#define RIC_RESIN1083_RESSEL	(RIC.unRESIN1083.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1083_PORTSEL	(RIC.unRESIN1083.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1084	(RIC.unRESIN1084.u16Register)  /*@rg@*/
#define RIC_RESIN1084_RESSEL	(RIC.unRESIN1084.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1084_PORTSEL	(RIC.unRESIN1084.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1085	(RIC.unRESIN1085.u16Register)  /*@rg@*/
#define RIC_RESIN1085_RESSEL	(RIC.unRESIN1085.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1085_PORTSEL	(RIC.unRESIN1085.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1086	(RIC.unRESIN1086.u16Register)  /*@rg@*/
#define RIC_RESIN1086_RESSEL	(RIC.unRESIN1086.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1086_PORTSEL	(RIC.unRESIN1086.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1087	(RIC.unRESIN1087.u16Register)  /*@rg@*/
#define RIC_RESIN1087_RESSEL	(RIC.unRESIN1087.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1087_PORTSEL	(RIC.unRESIN1087.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1088	(RIC.unRESIN1088.u16Register)  /*@rg@*/
#define RIC_RESIN1088_RESSEL	(RIC.unRESIN1088.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1088_PORTSEL	(RIC.unRESIN1088.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1089	(RIC.unRESIN1089.u16Register)  /*@rg@*/
#define RIC_RESIN1089_RESSEL	(RIC.unRESIN1089.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1089_PORTSEL	(RIC.unRESIN1089.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1090	(RIC.unRESIN1090.u16Register)  /*@rg@*/
#define RIC_RESIN1090_RESSEL	(RIC.unRESIN1090.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1090_PORTSEL	(RIC.unRESIN1090.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1091	(RIC.unRESIN1091.u16Register)  /*@rg@*/
#define RIC_RESIN1091_RESSEL	(RIC.unRESIN1091.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1091_PORTSEL	(RIC.unRESIN1091.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1092	(RIC.unRESIN1092.u16Register)  /*@rg@*/
#define RIC_RESIN1092_RESSEL	(RIC.unRESIN1092.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1092_PORTSEL	(RIC.unRESIN1092.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1093	(RIC.unRESIN1093.u16Register)  /*@rg@*/
#define RIC_RESIN1093_RESSEL	(RIC.unRESIN1093.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1093_PORTSEL	(RIC.unRESIN1093.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1094	(RIC.unRESIN1094.u16Register)  /*@rg@*/
#define RIC_RESIN1094_RESSEL	(RIC.unRESIN1094.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1094_PORTSEL	(RIC.unRESIN1094.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1095	(RIC.unRESIN1095.u16Register)  /*@rg@*/
#define RIC_RESIN1095_RESSEL	(RIC.unRESIN1095.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1095_PORTSEL	(RIC.unRESIN1095.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1096	(RIC.unRESIN1096.u16Register)  /*@rg@*/
#define RIC_RESIN1096_RESSEL	(RIC.unRESIN1096.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1096_PORTSEL	(RIC.unRESIN1096.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1097	(RIC.unRESIN1097.u16Register)  /*@rg@*/
#define RIC_RESIN1097_RESSEL	(RIC.unRESIN1097.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1097_PORTSEL	(RIC.unRESIN1097.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1098	(RIC.unRESIN1098.u16Register)  /*@rg@*/
#define RIC_RESIN1098_RESSEL	(RIC.unRESIN1098.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1098_PORTSEL	(RIC.unRESIN1098.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1099	(RIC.unRESIN1099.u16Register)  /*@rg@*/
#define RIC_RESIN1099_RESSEL	(RIC.unRESIN1099.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1099_PORTSEL	(RIC.unRESIN1099.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1100	(RIC.unRESIN1100.u16Register)  /*@rg@*/
#define RIC_RESIN1100_RESSEL	(RIC.unRESIN1100.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1100_PORTSEL	(RIC.unRESIN1100.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1101	(RIC.unRESIN1101.u16Register)  /*@rg@*/
#define RIC_RESIN1101_RESSEL	(RIC.unRESIN1101.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1101_PORTSEL	(RIC.unRESIN1101.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1102	(RIC.unRESIN1102.u16Register)  /*@rg@*/
#define RIC_RESIN1102_RESSEL	(RIC.unRESIN1102.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1102_PORTSEL	(RIC.unRESIN1102.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1103	(RIC.unRESIN1103.u16Register)  /*@rg@*/
#define RIC_RESIN1103_RESSEL	(RIC.unRESIN1103.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1103_PORTSEL	(RIC.unRESIN1103.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1104	(RIC.unRESIN1104.u16Register)  /*@rg@*/
#define RIC_RESIN1104_RESSEL	(RIC.unRESIN1104.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1104_PORTSEL	(RIC.unRESIN1104.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1105	(RIC.unRESIN1105.u16Register)  /*@rg@*/
#define RIC_RESIN1105_RESSEL	(RIC.unRESIN1105.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1105_PORTSEL	(RIC.unRESIN1105.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1106	(RIC.unRESIN1106.u16Register)  /*@rg@*/
#define RIC_RESIN1106_RESSEL	(RIC.unRESIN1106.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1106_PORTSEL	(RIC.unRESIN1106.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1107	(RIC.unRESIN1107.u16Register)  /*@rg@*/
#define RIC_RESIN1107_RESSEL	(RIC.unRESIN1107.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1107_PORTSEL	(RIC.unRESIN1107.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1108	(RIC.unRESIN1108.u16Register)  /*@rg@*/
#define RIC_RESIN1108_RESSEL	(RIC.unRESIN1108.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1108_PORTSEL	(RIC.unRESIN1108.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1109	(RIC.unRESIN1109.u16Register)  /*@rg@*/
#define RIC_RESIN1109_RESSEL	(RIC.unRESIN1109.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1109_PORTSEL	(RIC.unRESIN1109.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1110	(RIC.unRESIN1110.u16Register)  /*@rg@*/
#define RIC_RESIN1110_RESSEL	(RIC.unRESIN1110.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1110_PORTSEL	(RIC.unRESIN1110.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1111	(RIC.unRESIN1111.u16Register)  /*@rg@*/
#define RIC_RESIN1111_RESSEL	(RIC.unRESIN1111.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1111_PORTSEL	(RIC.unRESIN1111.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1112	(RIC.unRESIN1112.u16Register)  /*@rg@*/
#define RIC_RESIN1112_RESSEL	(RIC.unRESIN1112.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1112_PORTSEL	(RIC.unRESIN1112.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1113	(RIC.unRESIN1113.u16Register)  /*@rg@*/
#define RIC_RESIN1113_RESSEL	(RIC.unRESIN1113.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1113_PORTSEL	(RIC.unRESIN1113.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1114	(RIC.unRESIN1114.u16Register)  /*@rg@*/
#define RIC_RESIN1114_RESSEL	(RIC.unRESIN1114.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1114_PORTSEL	(RIC.unRESIN1114.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1115	(RIC.unRESIN1115.u16Register)  /*@rg@*/
#define RIC_RESIN1115_RESSEL	(RIC.unRESIN1115.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1115_PORTSEL	(RIC.unRESIN1115.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1116	(RIC.unRESIN1116.u16Register)  /*@rg@*/
#define RIC_RESIN1116_RESSEL	(RIC.unRESIN1116.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1116_PORTSEL	(RIC.unRESIN1116.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1117	(RIC.unRESIN1117.u16Register)  /*@rg@*/
#define RIC_RESIN1117_RESSEL	(RIC.unRESIN1117.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1117_PORTSEL	(RIC.unRESIN1117.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1118	(RIC.unRESIN1118.u16Register)  /*@rg@*/
#define RIC_RESIN1118_RESSEL	(RIC.unRESIN1118.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1118_PORTSEL	(RIC.unRESIN1118.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1119	(RIC.unRESIN1119.u16Register)  /*@rg@*/
#define RIC_RESIN1119_RESSEL	(RIC.unRESIN1119.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1119_PORTSEL	(RIC.unRESIN1119.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1120	(RIC.unRESIN1120.u16Register)  /*@rg@*/
#define RIC_RESIN1120_RESSEL	(RIC.unRESIN1120.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1120_PORTSEL	(RIC.unRESIN1120.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1121	(RIC.unRESIN1121.u16Register)  /*@rg@*/
#define RIC_RESIN1121_RESSEL	(RIC.unRESIN1121.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1121_PORTSEL	(RIC.unRESIN1121.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1122	(RIC.unRESIN1122.u16Register)  /*@rg@*/
#define RIC_RESIN1122_RESSEL	(RIC.unRESIN1122.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1122_PORTSEL	(RIC.unRESIN1122.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1123	(RIC.unRESIN1123.u16Register)  /*@rg@*/
#define RIC_RESIN1123_RESSEL	(RIC.unRESIN1123.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1123_PORTSEL	(RIC.unRESIN1123.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1124	(RIC.unRESIN1124.u16Register)  /*@rg@*/
#define RIC_RESIN1124_RESSEL	(RIC.unRESIN1124.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1124_PORTSEL	(RIC.unRESIN1124.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1125	(RIC.unRESIN1125.u16Register)  /*@rg@*/
#define RIC_RESIN1125_RESSEL	(RIC.unRESIN1125.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1125_PORTSEL	(RIC.unRESIN1125.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1126	(RIC.unRESIN1126.u16Register)  /*@rg@*/
#define RIC_RESIN1126_RESSEL	(RIC.unRESIN1126.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1126_PORTSEL	(RIC.unRESIN1126.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1127	(RIC.unRESIN1127.u16Register)  /*@rg@*/
#define RIC_RESIN1127_RESSEL	(RIC.unRESIN1127.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1127_PORTSEL	(RIC.unRESIN1127.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1128	(RIC.unRESIN1128.u16Register)  /*@rg@*/
#define RIC_RESIN1128_RESSEL	(RIC.unRESIN1128.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1128_PORTSEL	(RIC.unRESIN1128.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1129	(RIC.unRESIN1129.u16Register)  /*@rg@*/
#define RIC_RESIN1129_RESSEL	(RIC.unRESIN1129.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1129_PORTSEL	(RIC.unRESIN1129.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1130	(RIC.unRESIN1130.u16Register)  /*@rg@*/
#define RIC_RESIN1130_RESSEL	(RIC.unRESIN1130.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1130_PORTSEL	(RIC.unRESIN1130.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1131	(RIC.unRESIN1131.u16Register)  /*@rg@*/
#define RIC_RESIN1131_RESSEL	(RIC.unRESIN1131.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1131_PORTSEL	(RIC.unRESIN1131.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1132	(RIC.unRESIN1132.u16Register)  /*@rg@*/
#define RIC_RESIN1132_RESSEL	(RIC.unRESIN1132.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1132_PORTSEL	(RIC.unRESIN1132.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1133	(RIC.unRESIN1133.u16Register)  /*@rg@*/
#define RIC_RESIN1133_RESSEL	(RIC.unRESIN1133.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1133_PORTSEL	(RIC.unRESIN1133.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1134	(RIC.unRESIN1134.u16Register)  /*@rg@*/
#define RIC_RESIN1134_RESSEL	(RIC.unRESIN1134.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1134_PORTSEL	(RIC.unRESIN1134.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1135	(RIC.unRESIN1135.u16Register)  /*@rg@*/
#define RIC_RESIN1135_RESSEL	(RIC.unRESIN1135.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1135_PORTSEL	(RIC.unRESIN1135.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1136	(RIC.unRESIN1136.u16Register)  /*@rg@*/
#define RIC_RESIN1136_RESSEL	(RIC.unRESIN1136.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1136_PORTSEL	(RIC.unRESIN1136.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1137	(RIC.unRESIN1137.u16Register)  /*@rg@*/
#define RIC_RESIN1137_RESSEL	(RIC.unRESIN1137.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1137_PORTSEL	(RIC.unRESIN1137.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1138	(RIC.unRESIN1138.u16Register)  /*@rg@*/
#define RIC_RESIN1138_RESSEL	(RIC.unRESIN1138.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1138_PORTSEL	(RIC.unRESIN1138.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1139	(RIC.unRESIN1139.u16Register)  /*@rg@*/
#define RIC_RESIN1139_RESSEL	(RIC.unRESIN1139.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1139_PORTSEL	(RIC.unRESIN1139.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1140	(RIC.unRESIN1140.u16Register)  /*@rg@*/
#define RIC_RESIN1140_RESSEL	(RIC.unRESIN1140.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1140_PORTSEL	(RIC.unRESIN1140.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1141	(RIC.unRESIN1141.u16Register)  /*@rg@*/
#define RIC_RESIN1141_RESSEL	(RIC.unRESIN1141.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1141_PORTSEL	(RIC.unRESIN1141.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1142	(RIC.unRESIN1142.u16Register)  /*@rg@*/
#define RIC_RESIN1142_RESSEL	(RIC.unRESIN1142.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1142_PORTSEL	(RIC.unRESIN1142.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1143	(RIC.unRESIN1143.u16Register)  /*@rg@*/
#define RIC_RESIN1143_RESSEL	(RIC.unRESIN1143.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1143_PORTSEL	(RIC.unRESIN1143.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1144	(RIC.unRESIN1144.u16Register)  /*@rg@*/
#define RIC_RESIN1144_RESSEL	(RIC.unRESIN1144.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1144_PORTSEL	(RIC.unRESIN1144.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1145	(RIC.unRESIN1145.u16Register)  /*@rg@*/
#define RIC_RESIN1145_RESSEL	(RIC.unRESIN1145.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1145_PORTSEL	(RIC.unRESIN1145.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1146	(RIC.unRESIN1146.u16Register)  /*@rg@*/
#define RIC_RESIN1146_RESSEL	(RIC.unRESIN1146.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1146_PORTSEL	(RIC.unRESIN1146.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1147	(RIC.unRESIN1147.u16Register)  /*@rg@*/
#define RIC_RESIN1147_RESSEL	(RIC.unRESIN1147.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1147_PORTSEL	(RIC.unRESIN1147.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1148	(RIC.unRESIN1148.u16Register)  /*@rg@*/
#define RIC_RESIN1148_RESSEL	(RIC.unRESIN1148.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1148_PORTSEL	(RIC.unRESIN1148.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1149	(RIC.unRESIN1149.u16Register)  /*@rg@*/
#define RIC_RESIN1149_RESSEL	(RIC.unRESIN1149.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1149_PORTSEL	(RIC.unRESIN1149.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1150	(RIC.unRESIN1150.u16Register)  /*@rg@*/
#define RIC_RESIN1150_RESSEL	(RIC.unRESIN1150.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1150_PORTSEL	(RIC.unRESIN1150.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1151	(RIC.unRESIN1151.u16Register)  /*@rg@*/
#define RIC_RESIN1151_RESSEL	(RIC.unRESIN1151.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1151_PORTSEL	(RIC.unRESIN1151.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1152	(RIC.unRESIN1152.u16Register)  /*@rg@*/
#define RIC_RESIN1152_RESSEL	(RIC.unRESIN1152.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1152_PORTSEL	(RIC.unRESIN1152.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1153	(RIC.unRESIN1153.u16Register)  /*@rg@*/
#define RIC_RESIN1153_RESSEL	(RIC.unRESIN1153.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1153_PORTSEL	(RIC.unRESIN1153.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1154	(RIC.unRESIN1154.u16Register)  /*@rg@*/
#define RIC_RESIN1154_RESSEL	(RIC.unRESIN1154.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1154_PORTSEL	(RIC.unRESIN1154.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1155	(RIC.unRESIN1155.u16Register)  /*@rg@*/
#define RIC_RESIN1155_RESSEL	(RIC.unRESIN1155.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1155_PORTSEL	(RIC.unRESIN1155.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1156	(RIC.unRESIN1156.u16Register)  /*@rg@*/
#define RIC_RESIN1156_RESSEL	(RIC.unRESIN1156.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1156_PORTSEL	(RIC.unRESIN1156.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1157	(RIC.unRESIN1157.u16Register)  /*@rg@*/
#define RIC_RESIN1157_RESSEL	(RIC.unRESIN1157.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1157_PORTSEL	(RIC.unRESIN1157.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1158	(RIC.unRESIN1158.u16Register)  /*@rg@*/
#define RIC_RESIN1158_RESSEL	(RIC.unRESIN1158.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1158_PORTSEL	(RIC.unRESIN1158.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1159	(RIC.unRESIN1159.u16Register)  /*@rg@*/
#define RIC_RESIN1159_RESSEL	(RIC.unRESIN1159.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1159_PORTSEL	(RIC.unRESIN1159.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1160	(RIC.unRESIN1160.u16Register)  /*@rg@*/
#define RIC_RESIN1160_RESSEL	(RIC.unRESIN1160.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1160_PORTSEL	(RIC.unRESIN1160.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1161	(RIC.unRESIN1161.u16Register)  /*@rg@*/
#define RIC_RESIN1161_RESSEL	(RIC.unRESIN1161.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1161_PORTSEL	(RIC.unRESIN1161.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1162	(RIC.unRESIN1162.u16Register)  /*@rg@*/
#define RIC_RESIN1162_RESSEL	(RIC.unRESIN1162.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1162_PORTSEL	(RIC.unRESIN1162.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1163	(RIC.unRESIN1163.u16Register)  /*@rg@*/
#define RIC_RESIN1163_RESSEL	(RIC.unRESIN1163.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1163_PORTSEL	(RIC.unRESIN1163.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1164	(RIC.unRESIN1164.u16Register)  /*@rg@*/
#define RIC_RESIN1164_RESSEL	(RIC.unRESIN1164.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1164_PORTSEL	(RIC.unRESIN1164.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1165	(RIC.unRESIN1165.u16Register)  /*@rg@*/
#define RIC_RESIN1165_RESSEL	(RIC.unRESIN1165.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1165_PORTSEL	(RIC.unRESIN1165.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1166	(RIC.unRESIN1166.u16Register)  /*@rg@*/
#define RIC_RESIN1166_RESSEL	(RIC.unRESIN1166.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1166_PORTSEL	(RIC.unRESIN1166.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1167	(RIC.unRESIN1167.u16Register)  /*@rg@*/
#define RIC_RESIN1167_RESSEL	(RIC.unRESIN1167.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1167_PORTSEL	(RIC.unRESIN1167.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1168	(RIC.unRESIN1168.u16Register)  /*@rg@*/
#define RIC_RESIN1168_RESSEL	(RIC.unRESIN1168.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1168_PORTSEL	(RIC.unRESIN1168.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1169	(RIC.unRESIN1169.u16Register)  /*@rg@*/
#define RIC_RESIN1169_RESSEL	(RIC.unRESIN1169.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1169_PORTSEL	(RIC.unRESIN1169.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1170	(RIC.unRESIN1170.u16Register)  /*@rg@*/
#define RIC_RESIN1170_RESSEL	(RIC.unRESIN1170.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1170_PORTSEL	(RIC.unRESIN1170.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1171	(RIC.unRESIN1171.u16Register)  /*@rg@*/
#define RIC_RESIN1171_RESSEL	(RIC.unRESIN1171.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1171_PORTSEL	(RIC.unRESIN1171.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1172	(RIC.unRESIN1172.u16Register)  /*@rg@*/
#define RIC_RESIN1172_RESSEL	(RIC.unRESIN1172.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1172_PORTSEL	(RIC.unRESIN1172.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1173	(RIC.unRESIN1173.u16Register)  /*@rg@*/
#define RIC_RESIN1173_RESSEL	(RIC.unRESIN1173.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1173_PORTSEL	(RIC.unRESIN1173.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1174	(RIC.unRESIN1174.u16Register)  /*@rg@*/
#define RIC_RESIN1174_RESSEL	(RIC.unRESIN1174.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1174_PORTSEL	(RIC.unRESIN1174.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1175	(RIC.unRESIN1175.u16Register)  /*@rg@*/
#define RIC_RESIN1175_RESSEL	(RIC.unRESIN1175.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1175_PORTSEL	(RIC.unRESIN1175.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1176	(RIC.unRESIN1176.u16Register)  /*@rg@*/
#define RIC_RESIN1176_RESSEL	(RIC.unRESIN1176.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1176_PORTSEL	(RIC.unRESIN1176.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1177	(RIC.unRESIN1177.u16Register)  /*@rg@*/
#define RIC_RESIN1177_RESSEL	(RIC.unRESIN1177.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1177_PORTSEL	(RIC.unRESIN1177.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1178	(RIC.unRESIN1178.u16Register)  /*@rg@*/
#define RIC_RESIN1178_RESSEL	(RIC.unRESIN1178.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1178_PORTSEL	(RIC.unRESIN1178.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1179	(RIC.unRESIN1179.u16Register)  /*@rg@*/
#define RIC_RESIN1179_RESSEL	(RIC.unRESIN1179.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1179_PORTSEL	(RIC.unRESIN1179.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1180	(RIC.unRESIN1180.u16Register)  /*@rg@*/
#define RIC_RESIN1180_RESSEL	(RIC.unRESIN1180.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1180_PORTSEL	(RIC.unRESIN1180.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1181	(RIC.unRESIN1181.u16Register)  /*@rg@*/
#define RIC_RESIN1181_RESSEL	(RIC.unRESIN1181.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1181_PORTSEL	(RIC.unRESIN1181.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1182	(RIC.unRESIN1182.u16Register)  /*@rg@*/
#define RIC_RESIN1182_RESSEL	(RIC.unRESIN1182.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1182_PORTSEL	(RIC.unRESIN1182.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1183	(RIC.unRESIN1183.u16Register)  /*@rg@*/
#define RIC_RESIN1183_RESSEL	(RIC.unRESIN1183.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1183_PORTSEL	(RIC.unRESIN1183.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1184	(RIC.unRESIN1184.u16Register)  /*@rg@*/
#define RIC_RESIN1184_RESSEL	(RIC.unRESIN1184.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1184_PORTSEL	(RIC.unRESIN1184.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1185	(RIC.unRESIN1185.u16Register)  /*@rg@*/
#define RIC_RESIN1185_RESSEL	(RIC.unRESIN1185.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1185_PORTSEL	(RIC.unRESIN1185.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1186	(RIC.unRESIN1186.u16Register)  /*@rg@*/
#define RIC_RESIN1186_RESSEL	(RIC.unRESIN1186.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1186_PORTSEL	(RIC.unRESIN1186.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1187	(RIC.unRESIN1187.u16Register)  /*@rg@*/
#define RIC_RESIN1187_RESSEL	(RIC.unRESIN1187.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1187_PORTSEL	(RIC.unRESIN1187.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1188	(RIC.unRESIN1188.u16Register)  /*@rg@*/
#define RIC_RESIN1188_RESSEL	(RIC.unRESIN1188.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1188_PORTSEL	(RIC.unRESIN1188.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1189	(RIC.unRESIN1189.u16Register)  /*@rg@*/
#define RIC_RESIN1189_RESSEL	(RIC.unRESIN1189.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1189_PORTSEL	(RIC.unRESIN1189.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1190	(RIC.unRESIN1190.u16Register)  /*@rg@*/
#define RIC_RESIN1190_RESSEL	(RIC.unRESIN1190.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1190_PORTSEL	(RIC.unRESIN1190.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1191	(RIC.unRESIN1191.u16Register)  /*@rg@*/
#define RIC_RESIN1191_RESSEL	(RIC.unRESIN1191.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1191_PORTSEL	(RIC.unRESIN1191.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1192	(RIC.unRESIN1192.u16Register)  /*@rg@*/
#define RIC_RESIN1192_RESSEL	(RIC.unRESIN1192.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1192_PORTSEL	(RIC.unRESIN1192.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1193	(RIC.unRESIN1193.u16Register)  /*@rg@*/
#define RIC_RESIN1193_RESSEL	(RIC.unRESIN1193.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1193_PORTSEL	(RIC.unRESIN1193.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1194	(RIC.unRESIN1194.u16Register)  /*@rg@*/
#define RIC_RESIN1194_RESSEL	(RIC.unRESIN1194.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1194_PORTSEL	(RIC.unRESIN1194.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1195	(RIC.unRESIN1195.u16Register)  /*@rg@*/
#define RIC_RESIN1195_RESSEL	(RIC.unRESIN1195.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1195_PORTSEL	(RIC.unRESIN1195.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1196	(RIC.unRESIN1196.u16Register)  /*@rg@*/
#define RIC_RESIN1196_RESSEL	(RIC.unRESIN1196.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1196_PORTSEL	(RIC.unRESIN1196.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1197	(RIC.unRESIN1197.u16Register)  /*@rg@*/
#define RIC_RESIN1197_RESSEL	(RIC.unRESIN1197.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1197_PORTSEL	(RIC.unRESIN1197.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1198	(RIC.unRESIN1198.u16Register)  /*@rg@*/
#define RIC_RESIN1198_RESSEL	(RIC.unRESIN1198.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1198_PORTSEL	(RIC.unRESIN1198.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1199	(RIC.unRESIN1199.u16Register)  /*@rg@*/
#define RIC_RESIN1199_RESSEL	(RIC.unRESIN1199.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1199_PORTSEL	(RIC.unRESIN1199.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1200	(RIC.unRESIN1200.u16Register)  /*@rg@*/
#define RIC_RESIN1200_RESSEL	(RIC.unRESIN1200.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1200_PORTSEL	(RIC.unRESIN1200.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1201	(RIC.unRESIN1201.u16Register)  /*@rg@*/
#define RIC_RESIN1201_RESSEL	(RIC.unRESIN1201.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1201_PORTSEL	(RIC.unRESIN1201.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1202	(RIC.unRESIN1202.u16Register)  /*@rg@*/
#define RIC_RESIN1202_RESSEL	(RIC.unRESIN1202.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1202_PORTSEL	(RIC.unRESIN1202.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1203	(RIC.unRESIN1203.u16Register)  /*@rg@*/
#define RIC_RESIN1203_RESSEL	(RIC.unRESIN1203.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1203_PORTSEL	(RIC.unRESIN1203.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1204	(RIC.unRESIN1204.u16Register)  /*@rg@*/
#define RIC_RESIN1204_RESSEL	(RIC.unRESIN1204.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1204_PORTSEL	(RIC.unRESIN1204.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1205	(RIC.unRESIN1205.u16Register)  /*@rg@*/
#define RIC_RESIN1205_RESSEL	(RIC.unRESIN1205.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1205_PORTSEL	(RIC.unRESIN1205.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1206	(RIC.unRESIN1206.u16Register)  /*@rg@*/
#define RIC_RESIN1206_RESSEL	(RIC.unRESIN1206.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1206_PORTSEL	(RIC.unRESIN1206.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1207	(RIC.unRESIN1207.u16Register)  /*@rg@*/
#define RIC_RESIN1207_RESSEL	(RIC.unRESIN1207.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1207_PORTSEL	(RIC.unRESIN1207.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1208	(RIC.unRESIN1208.u16Register)  /*@rg@*/
#define RIC_RESIN1208_RESSEL	(RIC.unRESIN1208.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1208_PORTSEL	(RIC.unRESIN1208.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1209	(RIC.unRESIN1209.u16Register)  /*@rg@*/
#define RIC_RESIN1209_RESSEL	(RIC.unRESIN1209.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1209_PORTSEL	(RIC.unRESIN1209.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1210	(RIC.unRESIN1210.u16Register)  /*@rg@*/
#define RIC_RESIN1210_RESSEL	(RIC.unRESIN1210.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1210_PORTSEL	(RIC.unRESIN1210.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1211	(RIC.unRESIN1211.u16Register)  /*@rg@*/
#define RIC_RESIN1211_RESSEL	(RIC.unRESIN1211.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1211_PORTSEL	(RIC.unRESIN1211.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1212	(RIC.unRESIN1212.u16Register)  /*@rg@*/
#define RIC_RESIN1212_RESSEL	(RIC.unRESIN1212.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1212_PORTSEL	(RIC.unRESIN1212.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1213	(RIC.unRESIN1213.u16Register)  /*@rg@*/
#define RIC_RESIN1213_RESSEL	(RIC.unRESIN1213.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1213_PORTSEL	(RIC.unRESIN1213.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1214	(RIC.unRESIN1214.u16Register)  /*@rg@*/
#define RIC_RESIN1214_RESSEL	(RIC.unRESIN1214.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1214_PORTSEL	(RIC.unRESIN1214.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1215	(RIC.unRESIN1215.u16Register)  /*@rg@*/
#define RIC_RESIN1215_RESSEL	(RIC.unRESIN1215.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1215_PORTSEL	(RIC.unRESIN1215.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1216	(RIC.unRESIN1216.u16Register)  /*@rg@*/
#define RIC_RESIN1216_RESSEL	(RIC.unRESIN1216.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1216_PORTSEL	(RIC.unRESIN1216.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1217	(RIC.unRESIN1217.u16Register)  /*@rg@*/
#define RIC_RESIN1217_RESSEL	(RIC.unRESIN1217.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1217_PORTSEL	(RIC.unRESIN1217.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1218	(RIC.unRESIN1218.u16Register)  /*@rg@*/
#define RIC_RESIN1218_RESSEL	(RIC.unRESIN1218.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1218_PORTSEL	(RIC.unRESIN1218.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1219	(RIC.unRESIN1219.u16Register)  /*@rg@*/
#define RIC_RESIN1219_RESSEL	(RIC.unRESIN1219.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1219_PORTSEL	(RIC.unRESIN1219.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1220	(RIC.unRESIN1220.u16Register)  /*@rg@*/
#define RIC_RESIN1220_RESSEL	(RIC.unRESIN1220.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1220_PORTSEL	(RIC.unRESIN1220.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1221	(RIC.unRESIN1221.u16Register)  /*@rg@*/
#define RIC_RESIN1221_RESSEL	(RIC.unRESIN1221.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1221_PORTSEL	(RIC.unRESIN1221.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1222	(RIC.unRESIN1222.u16Register)  /*@rg@*/
#define RIC_RESIN1222_RESSEL	(RIC.unRESIN1222.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1222_PORTSEL	(RIC.unRESIN1222.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1223	(RIC.unRESIN1223.u16Register)  /*@rg@*/
#define RIC_RESIN1223_RESSEL	(RIC.unRESIN1223.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1223_PORTSEL	(RIC.unRESIN1223.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1224	(RIC.unRESIN1224.u16Register)  /*@rg@*/
#define RIC_RESIN1224_RESSEL	(RIC.unRESIN1224.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1224_PORTSEL	(RIC.unRESIN1224.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1225	(RIC.unRESIN1225.u16Register)  /*@rg@*/
#define RIC_RESIN1225_RESSEL	(RIC.unRESIN1225.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1225_PORTSEL	(RIC.unRESIN1225.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1226	(RIC.unRESIN1226.u16Register)  /*@rg@*/
#define RIC_RESIN1226_RESSEL	(RIC.unRESIN1226.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1226_PORTSEL	(RIC.unRESIN1226.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1227	(RIC.unRESIN1227.u16Register)  /*@rg@*/
#define RIC_RESIN1227_RESSEL	(RIC.unRESIN1227.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1227_PORTSEL	(RIC.unRESIN1227.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1228	(RIC.unRESIN1228.u16Register)  /*@rg@*/
#define RIC_RESIN1228_RESSEL	(RIC.unRESIN1228.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1228_PORTSEL	(RIC.unRESIN1228.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1229	(RIC.unRESIN1229.u16Register)  /*@rg@*/
#define RIC_RESIN1229_RESSEL	(RIC.unRESIN1229.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1229_PORTSEL	(RIC.unRESIN1229.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1230	(RIC.unRESIN1230.u16Register)  /*@rg@*/
#define RIC_RESIN1230_RESSEL	(RIC.unRESIN1230.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1230_PORTSEL	(RIC.unRESIN1230.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1231	(RIC.unRESIN1231.u16Register)  /*@rg@*/
#define RIC_RESIN1231_RESSEL	(RIC.unRESIN1231.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1231_PORTSEL	(RIC.unRESIN1231.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1232	(RIC.unRESIN1232.u16Register)  /*@rg@*/
#define RIC_RESIN1232_RESSEL	(RIC.unRESIN1232.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1232_PORTSEL	(RIC.unRESIN1232.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1233	(RIC.unRESIN1233.u16Register)  /*@rg@*/
#define RIC_RESIN1233_RESSEL	(RIC.unRESIN1233.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1233_PORTSEL	(RIC.unRESIN1233.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1234	(RIC.unRESIN1234.u16Register)  /*@rg@*/
#define RIC_RESIN1234_RESSEL	(RIC.unRESIN1234.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1234_PORTSEL	(RIC.unRESIN1234.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1235	(RIC.unRESIN1235.u16Register)  /*@rg@*/
#define RIC_RESIN1235_RESSEL	(RIC.unRESIN1235.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1235_PORTSEL	(RIC.unRESIN1235.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1236	(RIC.unRESIN1236.u16Register)  /*@rg@*/
#define RIC_RESIN1236_RESSEL	(RIC.unRESIN1236.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1236_PORTSEL	(RIC.unRESIN1236.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1237	(RIC.unRESIN1237.u16Register)  /*@rg@*/
#define RIC_RESIN1237_RESSEL	(RIC.unRESIN1237.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1237_PORTSEL	(RIC.unRESIN1237.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1238	(RIC.unRESIN1238.u16Register)  /*@rg@*/
#define RIC_RESIN1238_RESSEL	(RIC.unRESIN1238.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1238_PORTSEL	(RIC.unRESIN1238.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1239	(RIC.unRESIN1239.u16Register)  /*@rg@*/
#define RIC_RESIN1239_RESSEL	(RIC.unRESIN1239.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1239_PORTSEL	(RIC.unRESIN1239.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1240	(RIC.unRESIN1240.u16Register)  /*@rg@*/
#define RIC_RESIN1240_RESSEL	(RIC.unRESIN1240.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1240_PORTSEL	(RIC.unRESIN1240.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1241	(RIC.unRESIN1241.u16Register)  /*@rg@*/
#define RIC_RESIN1241_RESSEL	(RIC.unRESIN1241.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1241_PORTSEL	(RIC.unRESIN1241.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1242	(RIC.unRESIN1242.u16Register)  /*@rg@*/
#define RIC_RESIN1242_RESSEL	(RIC.unRESIN1242.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1242_PORTSEL	(RIC.unRESIN1242.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1243	(RIC.unRESIN1243.u16Register)  /*@rg@*/
#define RIC_RESIN1243_RESSEL	(RIC.unRESIN1243.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1243_PORTSEL	(RIC.unRESIN1243.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1244	(RIC.unRESIN1244.u16Register)  /*@rg@*/
#define RIC_RESIN1244_RESSEL	(RIC.unRESIN1244.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1244_PORTSEL	(RIC.unRESIN1244.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1245	(RIC.unRESIN1245.u16Register)  /*@rg@*/
#define RIC_RESIN1245_RESSEL	(RIC.unRESIN1245.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1245_PORTSEL	(RIC.unRESIN1245.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1246	(RIC.unRESIN1246.u16Register)  /*@rg@*/
#define RIC_RESIN1246_RESSEL	(RIC.unRESIN1246.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1246_PORTSEL	(RIC.unRESIN1246.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1247	(RIC.unRESIN1247.u16Register)  /*@rg@*/
#define RIC_RESIN1247_RESSEL	(RIC.unRESIN1247.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1247_PORTSEL	(RIC.unRESIN1247.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1248	(RIC.unRESIN1248.u16Register)  /*@rg@*/
#define RIC_RESIN1248_RESSEL	(RIC.unRESIN1248.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1248_PORTSEL	(RIC.unRESIN1248.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1249	(RIC.unRESIN1249.u16Register)  /*@rg@*/
#define RIC_RESIN1249_RESSEL	(RIC.unRESIN1249.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1249_PORTSEL	(RIC.unRESIN1249.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1250	(RIC.unRESIN1250.u16Register)  /*@rg@*/
#define RIC_RESIN1250_RESSEL	(RIC.unRESIN1250.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1250_PORTSEL	(RIC.unRESIN1250.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1251	(RIC.unRESIN1251.u16Register)  /*@rg@*/
#define RIC_RESIN1251_RESSEL	(RIC.unRESIN1251.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1251_PORTSEL	(RIC.unRESIN1251.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1252	(RIC.unRESIN1252.u16Register)  /*@rg@*/
#define RIC_RESIN1252_RESSEL	(RIC.unRESIN1252.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1252_PORTSEL	(RIC.unRESIN1252.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1253	(RIC.unRESIN1253.u16Register)  /*@rg@*/
#define RIC_RESIN1253_RESSEL	(RIC.unRESIN1253.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1253_PORTSEL	(RIC.unRESIN1253.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1254	(RIC.unRESIN1254.u16Register)  /*@rg@*/
#define RIC_RESIN1254_RESSEL	(RIC.unRESIN1254.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1254_PORTSEL	(RIC.unRESIN1254.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1255	(RIC.unRESIN1255.u16Register)  /*@rg@*/
#define RIC_RESIN1255_RESSEL	(RIC.unRESIN1255.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1255_PORTSEL	(RIC.unRESIN1255.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1256	(RIC.unRESIN1256.u16Register)  /*@rg@*/
#define RIC_RESIN1256_RESSEL	(RIC.unRESIN1256.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1256_PORTSEL	(RIC.unRESIN1256.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1257	(RIC.unRESIN1257.u16Register)  /*@rg@*/
#define RIC_RESIN1257_RESSEL	(RIC.unRESIN1257.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1257_PORTSEL	(RIC.unRESIN1257.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1258	(RIC.unRESIN1258.u16Register)  /*@rg@*/
#define RIC_RESIN1258_RESSEL	(RIC.unRESIN1258.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1258_PORTSEL	(RIC.unRESIN1258.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1259	(RIC.unRESIN1259.u16Register)  /*@rg@*/
#define RIC_RESIN1259_RESSEL	(RIC.unRESIN1259.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1259_PORTSEL	(RIC.unRESIN1259.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1260	(RIC.unRESIN1260.u16Register)  /*@rg@*/
#define RIC_RESIN1260_RESSEL	(RIC.unRESIN1260.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1260_PORTSEL	(RIC.unRESIN1260.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1261	(RIC.unRESIN1261.u16Register)  /*@rg@*/
#define RIC_RESIN1261_RESSEL	(RIC.unRESIN1261.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1261_PORTSEL	(RIC.unRESIN1261.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1262	(RIC.unRESIN1262.u16Register)  /*@rg@*/
#define RIC_RESIN1262_RESSEL	(RIC.unRESIN1262.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1262_PORTSEL	(RIC.unRESIN1262.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1263	(RIC.unRESIN1263.u16Register)  /*@rg@*/
#define RIC_RESIN1263_RESSEL	(RIC.unRESIN1263.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1263_PORTSEL	(RIC.unRESIN1263.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1264	(RIC.unRESIN1264.u16Register)  /*@rg@*/
#define RIC_RESIN1264_RESSEL	(RIC.unRESIN1264.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1264_PORTSEL	(RIC.unRESIN1264.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1265	(RIC.unRESIN1265.u16Register)  /*@rg@*/
#define RIC_RESIN1265_RESSEL	(RIC.unRESIN1265.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1265_PORTSEL	(RIC.unRESIN1265.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1266	(RIC.unRESIN1266.u16Register)  /*@rg@*/
#define RIC_RESIN1266_RESSEL	(RIC.unRESIN1266.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1266_PORTSEL	(RIC.unRESIN1266.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1267	(RIC.unRESIN1267.u16Register)  /*@rg@*/
#define RIC_RESIN1267_RESSEL	(RIC.unRESIN1267.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1267_PORTSEL	(RIC.unRESIN1267.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1268	(RIC.unRESIN1268.u16Register)  /*@rg@*/
#define RIC_RESIN1268_RESSEL	(RIC.unRESIN1268.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1268_PORTSEL	(RIC.unRESIN1268.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1269	(RIC.unRESIN1269.u16Register)  /*@rg@*/
#define RIC_RESIN1269_RESSEL	(RIC.unRESIN1269.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1269_PORTSEL	(RIC.unRESIN1269.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1270	(RIC.unRESIN1270.u16Register)  /*@rg@*/
#define RIC_RESIN1270_RESSEL	(RIC.unRESIN1270.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1270_PORTSEL	(RIC.unRESIN1270.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1271	(RIC.unRESIN1271.u16Register)  /*@rg@*/
#define RIC_RESIN1271_RESSEL	(RIC.unRESIN1271.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1271_PORTSEL	(RIC.unRESIN1271.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1272	(RIC.unRESIN1272.u16Register)  /*@rg@*/
#define RIC_RESIN1272_RESSEL	(RIC.unRESIN1272.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1272_PORTSEL	(RIC.unRESIN1272.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1273	(RIC.unRESIN1273.u16Register)  /*@rg@*/
#define RIC_RESIN1273_RESSEL	(RIC.unRESIN1273.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1273_PORTSEL	(RIC.unRESIN1273.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1274	(RIC.unRESIN1274.u16Register)  /*@rg@*/
#define RIC_RESIN1274_RESSEL	(RIC.unRESIN1274.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1274_PORTSEL	(RIC.unRESIN1274.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1275	(RIC.unRESIN1275.u16Register)  /*@rg@*/
#define RIC_RESIN1275_RESSEL	(RIC.unRESIN1275.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1275_PORTSEL	(RIC.unRESIN1275.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1276	(RIC.unRESIN1276.u16Register)  /*@rg@*/
#define RIC_RESIN1276_RESSEL	(RIC.unRESIN1276.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1276_PORTSEL	(RIC.unRESIN1276.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1277	(RIC.unRESIN1277.u16Register)  /*@rg@*/
#define RIC_RESIN1277_RESSEL	(RIC.unRESIN1277.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1277_PORTSEL	(RIC.unRESIN1277.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1278	(RIC.unRESIN1278.u16Register)  /*@rg@*/
#define RIC_RESIN1278_RESSEL	(RIC.unRESIN1278.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1278_PORTSEL	(RIC.unRESIN1278.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1279	(RIC.unRESIN1279.u16Register)  /*@rg@*/
#define RIC_RESIN1279_RESSEL	(RIC.unRESIN1279.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1279_PORTSEL	(RIC.unRESIN1279.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1280	(RIC.unRESIN1280.u16Register)  /*@rg@*/
#define RIC_RESIN1280_RESSEL	(RIC.unRESIN1280.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1280_PORTSEL	(RIC.unRESIN1280.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1281	(RIC.unRESIN1281.u16Register)  /*@rg@*/
#define RIC_RESIN1281_RESSEL	(RIC.unRESIN1281.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1281_PORTSEL	(RIC.unRESIN1281.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1282	(RIC.unRESIN1282.u16Register)  /*@rg@*/
#define RIC_RESIN1282_RESSEL	(RIC.unRESIN1282.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1282_PORTSEL	(RIC.unRESIN1282.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1283	(RIC.unRESIN1283.u16Register)  /*@rg@*/
#define RIC_RESIN1283_RESSEL	(RIC.unRESIN1283.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1283_PORTSEL	(RIC.unRESIN1283.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1284	(RIC.unRESIN1284.u16Register)  /*@rg@*/
#define RIC_RESIN1284_RESSEL	(RIC.unRESIN1284.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1284_PORTSEL	(RIC.unRESIN1284.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1285	(RIC.unRESIN1285.u16Register)  /*@rg@*/
#define RIC_RESIN1285_RESSEL	(RIC.unRESIN1285.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1285_PORTSEL	(RIC.unRESIN1285.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1286	(RIC.unRESIN1286.u16Register)  /*@rg@*/
#define RIC_RESIN1286_RESSEL	(RIC.unRESIN1286.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1286_PORTSEL	(RIC.unRESIN1286.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1287	(RIC.unRESIN1287.u16Register)  /*@rg@*/
#define RIC_RESIN1287_RESSEL	(RIC.unRESIN1287.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1287_PORTSEL	(RIC.unRESIN1287.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1288	(RIC.unRESIN1288.u16Register)  /*@rg@*/
#define RIC_RESIN1288_RESSEL	(RIC.unRESIN1288.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1288_PORTSEL	(RIC.unRESIN1288.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1289	(RIC.unRESIN1289.u16Register)  /*@rg@*/
#define RIC_RESIN1289_RESSEL	(RIC.unRESIN1289.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1289_PORTSEL	(RIC.unRESIN1289.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1290	(RIC.unRESIN1290.u16Register)  /*@rg@*/
#define RIC_RESIN1290_RESSEL	(RIC.unRESIN1290.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1290_PORTSEL	(RIC.unRESIN1290.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1291	(RIC.unRESIN1291.u16Register)  /*@rg@*/
#define RIC_RESIN1291_RESSEL	(RIC.unRESIN1291.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1291_PORTSEL	(RIC.unRESIN1291.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1292	(RIC.unRESIN1292.u16Register)  /*@rg@*/
#define RIC_RESIN1292_RESSEL	(RIC.unRESIN1292.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1292_PORTSEL	(RIC.unRESIN1292.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1293	(RIC.unRESIN1293.u16Register)  /*@rg@*/
#define RIC_RESIN1293_RESSEL	(RIC.unRESIN1293.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1293_PORTSEL	(RIC.unRESIN1293.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1294	(RIC.unRESIN1294.u16Register)  /*@rg@*/
#define RIC_RESIN1294_RESSEL	(RIC.unRESIN1294.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1294_PORTSEL	(RIC.unRESIN1294.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1295	(RIC.unRESIN1295.u16Register)  /*@rg@*/
#define RIC_RESIN1295_RESSEL	(RIC.unRESIN1295.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1295_PORTSEL	(RIC.unRESIN1295.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1296	(RIC.unRESIN1296.u16Register)  /*@rg@*/
#define RIC_RESIN1296_RESSEL	(RIC.unRESIN1296.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1296_PORTSEL	(RIC.unRESIN1296.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1297	(RIC.unRESIN1297.u16Register)  /*@rg@*/
#define RIC_RESIN1297_RESSEL	(RIC.unRESIN1297.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1297_PORTSEL	(RIC.unRESIN1297.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1298	(RIC.unRESIN1298.u16Register)  /*@rg@*/
#define RIC_RESIN1298_RESSEL	(RIC.unRESIN1298.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1298_PORTSEL	(RIC.unRESIN1298.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1299	(RIC.unRESIN1299.u16Register)  /*@rg@*/
#define RIC_RESIN1299_RESSEL	(RIC.unRESIN1299.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1299_PORTSEL	(RIC.unRESIN1299.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1300	(RIC.unRESIN1300.u16Register)  /*@rg@*/
#define RIC_RESIN1300_RESSEL	(RIC.unRESIN1300.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1300_PORTSEL	(RIC.unRESIN1300.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1301	(RIC.unRESIN1301.u16Register)  /*@rg@*/
#define RIC_RESIN1301_RESSEL	(RIC.unRESIN1301.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1301_PORTSEL	(RIC.unRESIN1301.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1302	(RIC.unRESIN1302.u16Register)  /*@rg@*/
#define RIC_RESIN1302_RESSEL	(RIC.unRESIN1302.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1302_PORTSEL	(RIC.unRESIN1302.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1303	(RIC.unRESIN1303.u16Register)  /*@rg@*/
#define RIC_RESIN1303_RESSEL	(RIC.unRESIN1303.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1303_PORTSEL	(RIC.unRESIN1303.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1304	(RIC.unRESIN1304.u16Register)  /*@rg@*/
#define RIC_RESIN1304_RESSEL	(RIC.unRESIN1304.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1304_PORTSEL	(RIC.unRESIN1304.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1305	(RIC.unRESIN1305.u16Register)  /*@rg@*/
#define RIC_RESIN1305_RESSEL	(RIC.unRESIN1305.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1305_PORTSEL	(RIC.unRESIN1305.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1306	(RIC.unRESIN1306.u16Register)  /*@rg@*/
#define RIC_RESIN1306_RESSEL	(RIC.unRESIN1306.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1306_PORTSEL	(RIC.unRESIN1306.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1307	(RIC.unRESIN1307.u16Register)  /*@rg@*/
#define RIC_RESIN1307_RESSEL	(RIC.unRESIN1307.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1307_PORTSEL	(RIC.unRESIN1307.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1308	(RIC.unRESIN1308.u16Register)  /*@rg@*/
#define RIC_RESIN1308_RESSEL	(RIC.unRESIN1308.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1308_PORTSEL	(RIC.unRESIN1308.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1309	(RIC.unRESIN1309.u16Register)  /*@rg@*/
#define RIC_RESIN1309_RESSEL	(RIC.unRESIN1309.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1309_PORTSEL	(RIC.unRESIN1309.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1310	(RIC.unRESIN1310.u16Register)  /*@rg@*/
#define RIC_RESIN1310_RESSEL	(RIC.unRESIN1310.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1310_PORTSEL	(RIC.unRESIN1310.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1311	(RIC.unRESIN1311.u16Register)  /*@rg@*/
#define RIC_RESIN1311_RESSEL	(RIC.unRESIN1311.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1311_PORTSEL	(RIC.unRESIN1311.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1312	(RIC.unRESIN1312.u16Register)  /*@rg@*/
#define RIC_RESIN1312_RESSEL	(RIC.unRESIN1312.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1312_PORTSEL	(RIC.unRESIN1312.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1313	(RIC.unRESIN1313.u16Register)  /*@rg@*/
#define RIC_RESIN1313_RESSEL	(RIC.unRESIN1313.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1313_PORTSEL	(RIC.unRESIN1313.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1314	(RIC.unRESIN1314.u16Register)  /*@rg@*/
#define RIC_RESIN1314_RESSEL	(RIC.unRESIN1314.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1314_PORTSEL	(RIC.unRESIN1314.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1315	(RIC.unRESIN1315.u16Register)  /*@rg@*/
#define RIC_RESIN1315_RESSEL	(RIC.unRESIN1315.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1315_PORTSEL	(RIC.unRESIN1315.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1316	(RIC.unRESIN1316.u16Register)  /*@rg@*/
#define RIC_RESIN1316_RESSEL	(RIC.unRESIN1316.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1316_PORTSEL	(RIC.unRESIN1316.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1317	(RIC.unRESIN1317.u16Register)  /*@rg@*/
#define RIC_RESIN1317_RESSEL	(RIC.unRESIN1317.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1317_PORTSEL	(RIC.unRESIN1317.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1318	(RIC.unRESIN1318.u16Register)  /*@rg@*/
#define RIC_RESIN1318_RESSEL	(RIC.unRESIN1318.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1318_PORTSEL	(RIC.unRESIN1318.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1319	(RIC.unRESIN1319.u16Register)  /*@rg@*/
#define RIC_RESIN1319_RESSEL	(RIC.unRESIN1319.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1319_PORTSEL	(RIC.unRESIN1319.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1320	(RIC.unRESIN1320.u16Register)  /*@rg@*/
#define RIC_RESIN1320_RESSEL	(RIC.unRESIN1320.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1320_PORTSEL	(RIC.unRESIN1320.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1321	(RIC.unRESIN1321.u16Register)  /*@rg@*/
#define RIC_RESIN1321_RESSEL	(RIC.unRESIN1321.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1321_PORTSEL	(RIC.unRESIN1321.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1322	(RIC.unRESIN1322.u16Register)  /*@rg@*/
#define RIC_RESIN1322_RESSEL	(RIC.unRESIN1322.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1322_PORTSEL	(RIC.unRESIN1322.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1323	(RIC.unRESIN1323.u16Register)  /*@rg@*/
#define RIC_RESIN1323_RESSEL	(RIC.unRESIN1323.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1323_PORTSEL	(RIC.unRESIN1323.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1324	(RIC.unRESIN1324.u16Register)  /*@rg@*/
#define RIC_RESIN1324_RESSEL	(RIC.unRESIN1324.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1324_PORTSEL	(RIC.unRESIN1324.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1325	(RIC.unRESIN1325.u16Register)  /*@rg@*/
#define RIC_RESIN1325_RESSEL	(RIC.unRESIN1325.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1325_PORTSEL	(RIC.unRESIN1325.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1326	(RIC.unRESIN1326.u16Register)  /*@rg@*/
#define RIC_RESIN1326_RESSEL	(RIC.unRESIN1326.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1326_PORTSEL	(RIC.unRESIN1326.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1327	(RIC.unRESIN1327.u16Register)  /*@rg@*/
#define RIC_RESIN1327_RESSEL	(RIC.unRESIN1327.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1327_PORTSEL	(RIC.unRESIN1327.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1328	(RIC.unRESIN1328.u16Register)  /*@rg@*/
#define RIC_RESIN1328_RESSEL	(RIC.unRESIN1328.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1328_PORTSEL	(RIC.unRESIN1328.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1329	(RIC.unRESIN1329.u16Register)  /*@rg@*/
#define RIC_RESIN1329_RESSEL	(RIC.unRESIN1329.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1329_PORTSEL	(RIC.unRESIN1329.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1330	(RIC.unRESIN1330.u16Register)  /*@rg@*/
#define RIC_RESIN1330_RESSEL	(RIC.unRESIN1330.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1330_PORTSEL	(RIC.unRESIN1330.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1331	(RIC.unRESIN1331.u16Register)  /*@rg@*/
#define RIC_RESIN1331_RESSEL	(RIC.unRESIN1331.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1331_PORTSEL	(RIC.unRESIN1331.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1332	(RIC.unRESIN1332.u16Register)  /*@rg@*/
#define RIC_RESIN1332_RESSEL	(RIC.unRESIN1332.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1332_PORTSEL	(RIC.unRESIN1332.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1333	(RIC.unRESIN1333.u16Register)  /*@rg@*/
#define RIC_RESIN1333_RESSEL	(RIC.unRESIN1333.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1333_PORTSEL	(RIC.unRESIN1333.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1334	(RIC.unRESIN1334.u16Register)  /*@rg@*/
#define RIC_RESIN1334_RESSEL	(RIC.unRESIN1334.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1334_PORTSEL	(RIC.unRESIN1334.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1335	(RIC.unRESIN1335.u16Register)  /*@rg@*/
#define RIC_RESIN1335_RESSEL	(RIC.unRESIN1335.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1335_PORTSEL	(RIC.unRESIN1335.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1336	(RIC.unRESIN1336.u16Register)  /*@rg@*/
#define RIC_RESIN1336_RESSEL	(RIC.unRESIN1336.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1336_PORTSEL	(RIC.unRESIN1336.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1337	(RIC.unRESIN1337.u16Register)  /*@rg@*/
#define RIC_RESIN1337_RESSEL	(RIC.unRESIN1337.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1337_PORTSEL	(RIC.unRESIN1337.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1338	(RIC.unRESIN1338.u16Register)  /*@rg@*/
#define RIC_RESIN1338_RESSEL	(RIC.unRESIN1338.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1338_PORTSEL	(RIC.unRESIN1338.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1339	(RIC.unRESIN1339.u16Register)  /*@rg@*/
#define RIC_RESIN1339_RESSEL	(RIC.unRESIN1339.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1339_PORTSEL	(RIC.unRESIN1339.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1340	(RIC.unRESIN1340.u16Register)  /*@rg@*/
#define RIC_RESIN1340_RESSEL	(RIC.unRESIN1340.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1340_PORTSEL	(RIC.unRESIN1340.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1341	(RIC.unRESIN1341.u16Register)  /*@rg@*/
#define RIC_RESIN1341_RESSEL	(RIC.unRESIN1341.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1341_PORTSEL	(RIC.unRESIN1341.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1342	(RIC.unRESIN1342.u16Register)  /*@rg@*/
#define RIC_RESIN1342_RESSEL	(RIC.unRESIN1342.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1342_PORTSEL	(RIC.unRESIN1342.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1343	(RIC.unRESIN1343.u16Register)  /*@rg@*/
#define RIC_RESIN1343_RESSEL	(RIC.unRESIN1343.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1343_PORTSEL	(RIC.unRESIN1343.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1344	(RIC.unRESIN1344.u16Register)  /*@rg@*/
#define RIC_RESIN1344_RESSEL	(RIC.unRESIN1344.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1344_PORTSEL	(RIC.unRESIN1344.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1345	(RIC.unRESIN1345.u16Register)  /*@rg@*/
#define RIC_RESIN1345_RESSEL	(RIC.unRESIN1345.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1345_PORTSEL	(RIC.unRESIN1345.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1346	(RIC.unRESIN1346.u16Register)  /*@rg@*/
#define RIC_RESIN1346_RESSEL	(RIC.unRESIN1346.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1346_PORTSEL	(RIC.unRESIN1346.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1347	(RIC.unRESIN1347.u16Register)  /*@rg@*/
#define RIC_RESIN1347_RESSEL	(RIC.unRESIN1347.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1347_PORTSEL	(RIC.unRESIN1347.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1348	(RIC.unRESIN1348.u16Register)  /*@rg@*/
#define RIC_RESIN1348_RESSEL	(RIC.unRESIN1348.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1348_PORTSEL	(RIC.unRESIN1348.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1349	(RIC.unRESIN1349.u16Register)  /*@rg@*/
#define RIC_RESIN1349_RESSEL	(RIC.unRESIN1349.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1349_PORTSEL	(RIC.unRESIN1349.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1350	(RIC.unRESIN1350.u16Register)  /*@rg@*/
#define RIC_RESIN1350_RESSEL	(RIC.unRESIN1350.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1350_PORTSEL	(RIC.unRESIN1350.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1351	(RIC.unRESIN1351.u16Register)  /*@rg@*/
#define RIC_RESIN1351_RESSEL	(RIC.unRESIN1351.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1351_PORTSEL	(RIC.unRESIN1351.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1352	(RIC.unRESIN1352.u16Register)  /*@rg@*/
#define RIC_RESIN1352_RESSEL	(RIC.unRESIN1352.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1352_PORTSEL	(RIC.unRESIN1352.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1353	(RIC.unRESIN1353.u16Register)  /*@rg@*/
#define RIC_RESIN1353_RESSEL	(RIC.unRESIN1353.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1353_PORTSEL	(RIC.unRESIN1353.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1354	(RIC.unRESIN1354.u16Register)  /*@rg@*/
#define RIC_RESIN1354_RESSEL	(RIC.unRESIN1354.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1354_PORTSEL	(RIC.unRESIN1354.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1355	(RIC.unRESIN1355.u16Register)  /*@rg@*/
#define RIC_RESIN1355_RESSEL	(RIC.unRESIN1355.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1355_PORTSEL	(RIC.unRESIN1355.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1356	(RIC.unRESIN1356.u16Register)  /*@rg@*/
#define RIC_RESIN1356_RESSEL	(RIC.unRESIN1356.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1356_PORTSEL	(RIC.unRESIN1356.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1357	(RIC.unRESIN1357.u16Register)  /*@rg@*/
#define RIC_RESIN1357_RESSEL	(RIC.unRESIN1357.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1357_PORTSEL	(RIC.unRESIN1357.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1358	(RIC.unRESIN1358.u16Register)  /*@rg@*/
#define RIC_RESIN1358_RESSEL	(RIC.unRESIN1358.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1358_PORTSEL	(RIC.unRESIN1358.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1359	(RIC.unRESIN1359.u16Register)  /*@rg@*/
#define RIC_RESIN1359_RESSEL	(RIC.unRESIN1359.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1359_PORTSEL	(RIC.unRESIN1359.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1360	(RIC.unRESIN1360.u16Register)  /*@rg@*/
#define RIC_RESIN1360_RESSEL	(RIC.unRESIN1360.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1360_PORTSEL	(RIC.unRESIN1360.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1361	(RIC.unRESIN1361.u16Register)  /*@rg@*/
#define RIC_RESIN1361_RESSEL	(RIC.unRESIN1361.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1361_PORTSEL	(RIC.unRESIN1361.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1362	(RIC.unRESIN1362.u16Register)  /*@rg@*/
#define RIC_RESIN1362_RESSEL	(RIC.unRESIN1362.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1362_PORTSEL	(RIC.unRESIN1362.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1363	(RIC.unRESIN1363.u16Register)  /*@rg@*/
#define RIC_RESIN1363_RESSEL	(RIC.unRESIN1363.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1363_PORTSEL	(RIC.unRESIN1363.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1364	(RIC.unRESIN1364.u16Register)  /*@rg@*/
#define RIC_RESIN1364_RESSEL	(RIC.unRESIN1364.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1364_PORTSEL	(RIC.unRESIN1364.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1365	(RIC.unRESIN1365.u16Register)  /*@rg@*/
#define RIC_RESIN1365_RESSEL	(RIC.unRESIN1365.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1365_PORTSEL	(RIC.unRESIN1365.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1366	(RIC.unRESIN1366.u16Register)  /*@rg@*/
#define RIC_RESIN1366_RESSEL	(RIC.unRESIN1366.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1366_PORTSEL	(RIC.unRESIN1366.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1367	(RIC.unRESIN1367.u16Register)  /*@rg@*/
#define RIC_RESIN1367_RESSEL	(RIC.unRESIN1367.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1367_PORTSEL	(RIC.unRESIN1367.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1368	(RIC.unRESIN1368.u16Register)  /*@rg@*/
#define RIC_RESIN1368_RESSEL	(RIC.unRESIN1368.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1368_PORTSEL	(RIC.unRESIN1368.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1369	(RIC.unRESIN1369.u16Register)  /*@rg@*/
#define RIC_RESIN1369_RESSEL	(RIC.unRESIN1369.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1369_PORTSEL	(RIC.unRESIN1369.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1370	(RIC.unRESIN1370.u16Register)  /*@rg@*/
#define RIC_RESIN1370_RESSEL	(RIC.unRESIN1370.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1370_PORTSEL	(RIC.unRESIN1370.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1371	(RIC.unRESIN1371.u16Register)  /*@rg@*/
#define RIC_RESIN1371_RESSEL	(RIC.unRESIN1371.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1371_PORTSEL	(RIC.unRESIN1371.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1372	(RIC.unRESIN1372.u16Register)  /*@rg@*/
#define RIC_RESIN1372_RESSEL	(RIC.unRESIN1372.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1372_PORTSEL	(RIC.unRESIN1372.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1373	(RIC.unRESIN1373.u16Register)  /*@rg@*/
#define RIC_RESIN1373_RESSEL	(RIC.unRESIN1373.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1373_PORTSEL	(RIC.unRESIN1373.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1374	(RIC.unRESIN1374.u16Register)  /*@rg@*/
#define RIC_RESIN1374_RESSEL	(RIC.unRESIN1374.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1374_PORTSEL	(RIC.unRESIN1374.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1375	(RIC.unRESIN1375.u16Register)  /*@rg@*/
#define RIC_RESIN1375_RESSEL	(RIC.unRESIN1375.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1375_PORTSEL	(RIC.unRESIN1375.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1376	(RIC.unRESIN1376.u16Register)  /*@rg@*/
#define RIC_RESIN1376_RESSEL	(RIC.unRESIN1376.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1376_PORTSEL	(RIC.unRESIN1376.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1377	(RIC.unRESIN1377.u16Register)  /*@rg@*/
#define RIC_RESIN1377_RESSEL	(RIC.unRESIN1377.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1377_PORTSEL	(RIC.unRESIN1377.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1378	(RIC.unRESIN1378.u16Register)  /*@rg@*/
#define RIC_RESIN1378_RESSEL	(RIC.unRESIN1378.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1378_PORTSEL	(RIC.unRESIN1378.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1379	(RIC.unRESIN1379.u16Register)  /*@rg@*/
#define RIC_RESIN1379_RESSEL	(RIC.unRESIN1379.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1379_PORTSEL	(RIC.unRESIN1379.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1380	(RIC.unRESIN1380.u16Register)  /*@rg@*/
#define RIC_RESIN1380_RESSEL	(RIC.unRESIN1380.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1380_PORTSEL	(RIC.unRESIN1380.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1381	(RIC.unRESIN1381.u16Register)  /*@rg@*/
#define RIC_RESIN1381_RESSEL	(RIC.unRESIN1381.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1381_PORTSEL	(RIC.unRESIN1381.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1382	(RIC.unRESIN1382.u16Register)  /*@rg@*/
#define RIC_RESIN1382_RESSEL	(RIC.unRESIN1382.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1382_PORTSEL	(RIC.unRESIN1382.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1383	(RIC.unRESIN1383.u16Register)  /*@rg@*/
#define RIC_RESIN1383_RESSEL	(RIC.unRESIN1383.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1383_PORTSEL	(RIC.unRESIN1383.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1384	(RIC.unRESIN1384.u16Register)  /*@rg@*/
#define RIC_RESIN1384_RESSEL	(RIC.unRESIN1384.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1384_PORTSEL	(RIC.unRESIN1384.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1385	(RIC.unRESIN1385.u16Register)  /*@rg@*/
#define RIC_RESIN1385_RESSEL	(RIC.unRESIN1385.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1385_PORTSEL	(RIC.unRESIN1385.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1386	(RIC.unRESIN1386.u16Register)  /*@rg@*/
#define RIC_RESIN1386_RESSEL	(RIC.unRESIN1386.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1386_PORTSEL	(RIC.unRESIN1386.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1387	(RIC.unRESIN1387.u16Register)  /*@rg@*/
#define RIC_RESIN1387_RESSEL	(RIC.unRESIN1387.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1387_PORTSEL	(RIC.unRESIN1387.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1388	(RIC.unRESIN1388.u16Register)  /*@rg@*/
#define RIC_RESIN1388_RESSEL	(RIC.unRESIN1388.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1388_PORTSEL	(RIC.unRESIN1388.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1389	(RIC.unRESIN1389.u16Register)  /*@rg@*/
#define RIC_RESIN1389_RESSEL	(RIC.unRESIN1389.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1389_PORTSEL	(RIC.unRESIN1389.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1390	(RIC.unRESIN1390.u16Register)  /*@rg@*/
#define RIC_RESIN1390_RESSEL	(RIC.unRESIN1390.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1390_PORTSEL	(RIC.unRESIN1390.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1391	(RIC.unRESIN1391.u16Register)  /*@rg@*/
#define RIC_RESIN1391_RESSEL	(RIC.unRESIN1391.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1391_PORTSEL	(RIC.unRESIN1391.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1392	(RIC.unRESIN1392.u16Register)  /*@rg@*/
#define RIC_RESIN1392_RESSEL	(RIC.unRESIN1392.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1392_PORTSEL	(RIC.unRESIN1392.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1393	(RIC.unRESIN1393.u16Register)  /*@rg@*/
#define RIC_RESIN1393_RESSEL	(RIC.unRESIN1393.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1393_PORTSEL	(RIC.unRESIN1393.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1394	(RIC.unRESIN1394.u16Register)  /*@rg@*/
#define RIC_RESIN1394_RESSEL	(RIC.unRESIN1394.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1394_PORTSEL	(RIC.unRESIN1394.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1395	(RIC.unRESIN1395.u16Register)  /*@rg@*/
#define RIC_RESIN1395_RESSEL	(RIC.unRESIN1395.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1395_PORTSEL	(RIC.unRESIN1395.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1396	(RIC.unRESIN1396.u16Register)  /*@rg@*/
#define RIC_RESIN1396_RESSEL	(RIC.unRESIN1396.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1396_PORTSEL	(RIC.unRESIN1396.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1397	(RIC.unRESIN1397.u16Register)  /*@rg@*/
#define RIC_RESIN1397_RESSEL	(RIC.unRESIN1397.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1397_PORTSEL	(RIC.unRESIN1397.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1398	(RIC.unRESIN1398.u16Register)  /*@rg@*/
#define RIC_RESIN1398_RESSEL	(RIC.unRESIN1398.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1398_PORTSEL	(RIC.unRESIN1398.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1399	(RIC.unRESIN1399.u16Register)  /*@rg@*/
#define RIC_RESIN1399_RESSEL	(RIC.unRESIN1399.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1399_PORTSEL	(RIC.unRESIN1399.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1400	(RIC.unRESIN1400.u16Register)  /*@rg@*/
#define RIC_RESIN1400_RESSEL	(RIC.unRESIN1400.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1400_PORTSEL	(RIC.unRESIN1400.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1401	(RIC.unRESIN1401.u16Register)  /*@rg@*/
#define RIC_RESIN1401_RESSEL	(RIC.unRESIN1401.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1401_PORTSEL	(RIC.unRESIN1401.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1402	(RIC.unRESIN1402.u16Register)  /*@rg@*/
#define RIC_RESIN1402_RESSEL	(RIC.unRESIN1402.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1402_PORTSEL	(RIC.unRESIN1402.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1403	(RIC.unRESIN1403.u16Register)  /*@rg@*/
#define RIC_RESIN1403_RESSEL	(RIC.unRESIN1403.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1403_PORTSEL	(RIC.unRESIN1403.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1404	(RIC.unRESIN1404.u16Register)  /*@rg@*/
#define RIC_RESIN1404_RESSEL	(RIC.unRESIN1404.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1404_PORTSEL	(RIC.unRESIN1404.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1405	(RIC.unRESIN1405.u16Register)  /*@rg@*/
#define RIC_RESIN1405_RESSEL	(RIC.unRESIN1405.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1405_PORTSEL	(RIC.unRESIN1405.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1406	(RIC.unRESIN1406.u16Register)  /*@rg@*/
#define RIC_RESIN1406_RESSEL	(RIC.unRESIN1406.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1406_PORTSEL	(RIC.unRESIN1406.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1407	(RIC.unRESIN1407.u16Register)  /*@rg@*/
#define RIC_RESIN1407_RESSEL	(RIC.unRESIN1407.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1407_PORTSEL	(RIC.unRESIN1407.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1408	(RIC.unRESIN1408.u16Register)  /*@rg@*/
#define RIC_RESIN1408_RESSEL	(RIC.unRESIN1408.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1408_PORTSEL	(RIC.unRESIN1408.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1409	(RIC.unRESIN1409.u16Register)  /*@rg@*/
#define RIC_RESIN1409_RESSEL	(RIC.unRESIN1409.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1409_PORTSEL	(RIC.unRESIN1409.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1410	(RIC.unRESIN1410.u16Register)  /*@rg@*/
#define RIC_RESIN1410_RESSEL	(RIC.unRESIN1410.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1410_PORTSEL	(RIC.unRESIN1410.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1411	(RIC.unRESIN1411.u16Register)  /*@rg@*/
#define RIC_RESIN1411_RESSEL	(RIC.unRESIN1411.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1411_PORTSEL	(RIC.unRESIN1411.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1412	(RIC.unRESIN1412.u16Register)  /*@rg@*/
#define RIC_RESIN1412_RESSEL	(RIC.unRESIN1412.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1412_PORTSEL	(RIC.unRESIN1412.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1413	(RIC.unRESIN1413.u16Register)  /*@rg@*/
#define RIC_RESIN1413_RESSEL	(RIC.unRESIN1413.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1413_PORTSEL	(RIC.unRESIN1413.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1414	(RIC.unRESIN1414.u16Register)  /*@rg@*/
#define RIC_RESIN1414_RESSEL	(RIC.unRESIN1414.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1414_PORTSEL	(RIC.unRESIN1414.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1415	(RIC.unRESIN1415.u16Register)  /*@rg@*/
#define RIC_RESIN1415_RESSEL	(RIC.unRESIN1415.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1415_PORTSEL	(RIC.unRESIN1415.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1416	(RIC.unRESIN1416.u16Register)  /*@rg@*/
#define RIC_RESIN1416_RESSEL	(RIC.unRESIN1416.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1416_PORTSEL	(RIC.unRESIN1416.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1417	(RIC.unRESIN1417.u16Register)  /*@rg@*/
#define RIC_RESIN1417_RESSEL	(RIC.unRESIN1417.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1417_PORTSEL	(RIC.unRESIN1417.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1418	(RIC.unRESIN1418.u16Register)  /*@rg@*/
#define RIC_RESIN1418_RESSEL	(RIC.unRESIN1418.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1418_PORTSEL	(RIC.unRESIN1418.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1419	(RIC.unRESIN1419.u16Register)  /*@rg@*/
#define RIC_RESIN1419_RESSEL	(RIC.unRESIN1419.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1419_PORTSEL	(RIC.unRESIN1419.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1420	(RIC.unRESIN1420.u16Register)  /*@rg@*/
#define RIC_RESIN1420_RESSEL	(RIC.unRESIN1420.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1420_PORTSEL	(RIC.unRESIN1420.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1421	(RIC.unRESIN1421.u16Register)  /*@rg@*/
#define RIC_RESIN1421_RESSEL	(RIC.unRESIN1421.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1421_PORTSEL	(RIC.unRESIN1421.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1422	(RIC.unRESIN1422.u16Register)  /*@rg@*/
#define RIC_RESIN1422_RESSEL	(RIC.unRESIN1422.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1422_PORTSEL	(RIC.unRESIN1422.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1423	(RIC.unRESIN1423.u16Register)  /*@rg@*/
#define RIC_RESIN1423_RESSEL	(RIC.unRESIN1423.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1423_PORTSEL	(RIC.unRESIN1423.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1424	(RIC.unRESIN1424.u16Register)  /*@rg@*/
#define RIC_RESIN1424_RESSEL	(RIC.unRESIN1424.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1424_PORTSEL	(RIC.unRESIN1424.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1425	(RIC.unRESIN1425.u16Register)  /*@rg@*/
#define RIC_RESIN1425_RESSEL	(RIC.unRESIN1425.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1425_PORTSEL	(RIC.unRESIN1425.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1426	(RIC.unRESIN1426.u16Register)  /*@rg@*/
#define RIC_RESIN1426_RESSEL	(RIC.unRESIN1426.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1426_PORTSEL	(RIC.unRESIN1426.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1427	(RIC.unRESIN1427.u16Register)  /*@rg@*/
#define RIC_RESIN1427_RESSEL	(RIC.unRESIN1427.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1427_PORTSEL	(RIC.unRESIN1427.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1428	(RIC.unRESIN1428.u16Register)  /*@rg@*/
#define RIC_RESIN1428_RESSEL	(RIC.unRESIN1428.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1428_PORTSEL	(RIC.unRESIN1428.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1429	(RIC.unRESIN1429.u16Register)  /*@rg@*/
#define RIC_RESIN1429_RESSEL	(RIC.unRESIN1429.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1429_PORTSEL	(RIC.unRESIN1429.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1430	(RIC.unRESIN1430.u16Register)  /*@rg@*/
#define RIC_RESIN1430_RESSEL	(RIC.unRESIN1430.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1430_PORTSEL	(RIC.unRESIN1430.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1431	(RIC.unRESIN1431.u16Register)  /*@rg@*/
#define RIC_RESIN1431_RESSEL	(RIC.unRESIN1431.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1431_PORTSEL	(RIC.unRESIN1431.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1432	(RIC.unRESIN1432.u16Register)  /*@rg@*/
#define RIC_RESIN1432_RESSEL	(RIC.unRESIN1432.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1432_PORTSEL	(RIC.unRESIN1432.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1433	(RIC.unRESIN1433.u16Register)  /*@rg@*/
#define RIC_RESIN1433_RESSEL	(RIC.unRESIN1433.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1433_PORTSEL	(RIC.unRESIN1433.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1434	(RIC.unRESIN1434.u16Register)  /*@rg@*/
#define RIC_RESIN1434_RESSEL	(RIC.unRESIN1434.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1434_PORTSEL	(RIC.unRESIN1434.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1435	(RIC.unRESIN1435.u16Register)  /*@rg@*/
#define RIC_RESIN1435_RESSEL	(RIC.unRESIN1435.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1435_PORTSEL	(RIC.unRESIN1435.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1436	(RIC.unRESIN1436.u16Register)  /*@rg@*/
#define RIC_RESIN1436_RESSEL	(RIC.unRESIN1436.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1436_PORTSEL	(RIC.unRESIN1436.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1437	(RIC.unRESIN1437.u16Register)  /*@rg@*/
#define RIC_RESIN1437_RESSEL	(RIC.unRESIN1437.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1437_PORTSEL	(RIC.unRESIN1437.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1438	(RIC.unRESIN1438.u16Register)  /*@rg@*/
#define RIC_RESIN1438_RESSEL	(RIC.unRESIN1438.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1438_PORTSEL	(RIC.unRESIN1438.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1439	(RIC.unRESIN1439.u16Register)  /*@rg@*/
#define RIC_RESIN1439_RESSEL	(RIC.unRESIN1439.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1439_PORTSEL	(RIC.unRESIN1439.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1440	(RIC.unRESIN1440.u16Register)  /*@rg@*/
#define RIC_RESIN1440_RESSEL	(RIC.unRESIN1440.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1440_PORTSEL	(RIC.unRESIN1440.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1441	(RIC.unRESIN1441.u16Register)  /*@rg@*/
#define RIC_RESIN1441_RESSEL	(RIC.unRESIN1441.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1441_PORTSEL	(RIC.unRESIN1441.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1442	(RIC.unRESIN1442.u16Register)  /*@rg@*/
#define RIC_RESIN1442_RESSEL	(RIC.unRESIN1442.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1442_PORTSEL	(RIC.unRESIN1442.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1443	(RIC.unRESIN1443.u16Register)  /*@rg@*/
#define RIC_RESIN1443_RESSEL	(RIC.unRESIN1443.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1443_PORTSEL	(RIC.unRESIN1443.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1444	(RIC.unRESIN1444.u16Register)  /*@rg@*/
#define RIC_RESIN1444_RESSEL	(RIC.unRESIN1444.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1444_PORTSEL	(RIC.unRESIN1444.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1445	(RIC.unRESIN1445.u16Register)  /*@rg@*/
#define RIC_RESIN1445_RESSEL	(RIC.unRESIN1445.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1445_PORTSEL	(RIC.unRESIN1445.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1446	(RIC.unRESIN1446.u16Register)  /*@rg@*/
#define RIC_RESIN1446_RESSEL	(RIC.unRESIN1446.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1446_PORTSEL	(RIC.unRESIN1446.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1447	(RIC.unRESIN1447.u16Register)  /*@rg@*/
#define RIC_RESIN1447_RESSEL	(RIC.unRESIN1447.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1447_PORTSEL	(RIC.unRESIN1447.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1448	(RIC.unRESIN1448.u16Register)  /*@rg@*/
#define RIC_RESIN1448_RESSEL	(RIC.unRESIN1448.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1448_PORTSEL	(RIC.unRESIN1448.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1449	(RIC.unRESIN1449.u16Register)  /*@rg@*/
#define RIC_RESIN1449_RESSEL	(RIC.unRESIN1449.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1449_PORTSEL	(RIC.unRESIN1449.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1450	(RIC.unRESIN1450.u16Register)  /*@rg@*/
#define RIC_RESIN1450_RESSEL	(RIC.unRESIN1450.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1450_PORTSEL	(RIC.unRESIN1450.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1451	(RIC.unRESIN1451.u16Register)  /*@rg@*/
#define RIC_RESIN1451_RESSEL	(RIC.unRESIN1451.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1451_PORTSEL	(RIC.unRESIN1451.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1452	(RIC.unRESIN1452.u16Register)  /*@rg@*/
#define RIC_RESIN1452_RESSEL	(RIC.unRESIN1452.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1452_PORTSEL	(RIC.unRESIN1452.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1453	(RIC.unRESIN1453.u16Register)  /*@rg@*/
#define RIC_RESIN1453_RESSEL	(RIC.unRESIN1453.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1453_PORTSEL	(RIC.unRESIN1453.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1454	(RIC.unRESIN1454.u16Register)  /*@rg@*/
#define RIC_RESIN1454_RESSEL	(RIC.unRESIN1454.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1454_PORTSEL	(RIC.unRESIN1454.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1455	(RIC.unRESIN1455.u16Register)  /*@rg@*/
#define RIC_RESIN1455_RESSEL	(RIC.unRESIN1455.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1455_PORTSEL	(RIC.unRESIN1455.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1456	(RIC.unRESIN1456.u16Register)  /*@rg@*/
#define RIC_RESIN1456_RESSEL	(RIC.unRESIN1456.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1456_PORTSEL	(RIC.unRESIN1456.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1457	(RIC.unRESIN1457.u16Register)  /*@rg@*/
#define RIC_RESIN1457_RESSEL	(RIC.unRESIN1457.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1457_PORTSEL	(RIC.unRESIN1457.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1458	(RIC.unRESIN1458.u16Register)  /*@rg@*/
#define RIC_RESIN1458_RESSEL	(RIC.unRESIN1458.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1458_PORTSEL	(RIC.unRESIN1458.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1459	(RIC.unRESIN1459.u16Register)  /*@rg@*/
#define RIC_RESIN1459_RESSEL	(RIC.unRESIN1459.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1459_PORTSEL	(RIC.unRESIN1459.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1460	(RIC.unRESIN1460.u16Register)  /*@rg@*/
#define RIC_RESIN1460_RESSEL	(RIC.unRESIN1460.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1460_PORTSEL	(RIC.unRESIN1460.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1461	(RIC.unRESIN1461.u16Register)  /*@rg@*/
#define RIC_RESIN1461_RESSEL	(RIC.unRESIN1461.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1461_PORTSEL	(RIC.unRESIN1461.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1462	(RIC.unRESIN1462.u16Register)  /*@rg@*/
#define RIC_RESIN1462_RESSEL	(RIC.unRESIN1462.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1462_PORTSEL	(RIC.unRESIN1462.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1463	(RIC.unRESIN1463.u16Register)  /*@rg@*/
#define RIC_RESIN1463_RESSEL	(RIC.unRESIN1463.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1463_PORTSEL	(RIC.unRESIN1463.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1464	(RIC.unRESIN1464.u16Register)  /*@rg@*/
#define RIC_RESIN1464_RESSEL	(RIC.unRESIN1464.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1464_PORTSEL	(RIC.unRESIN1464.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1465	(RIC.unRESIN1465.u16Register)  /*@rg@*/
#define RIC_RESIN1465_RESSEL	(RIC.unRESIN1465.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1465_PORTSEL	(RIC.unRESIN1465.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1466	(RIC.unRESIN1466.u16Register)  /*@rg@*/
#define RIC_RESIN1466_RESSEL	(RIC.unRESIN1466.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1466_PORTSEL	(RIC.unRESIN1466.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1467	(RIC.unRESIN1467.u16Register)  /*@rg@*/
#define RIC_RESIN1467_RESSEL	(RIC.unRESIN1467.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1467_PORTSEL	(RIC.unRESIN1467.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1468	(RIC.unRESIN1468.u16Register)  /*@rg@*/
#define RIC_RESIN1468_RESSEL	(RIC.unRESIN1468.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1468_PORTSEL	(RIC.unRESIN1468.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1469	(RIC.unRESIN1469.u16Register)  /*@rg@*/
#define RIC_RESIN1469_RESSEL	(RIC.unRESIN1469.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1469_PORTSEL	(RIC.unRESIN1469.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1470	(RIC.unRESIN1470.u16Register)  /*@rg@*/
#define RIC_RESIN1470_RESSEL	(RIC.unRESIN1470.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1470_PORTSEL	(RIC.unRESIN1470.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1471	(RIC.unRESIN1471.u16Register)  /*@rg@*/
#define RIC_RESIN1471_RESSEL	(RIC.unRESIN1471.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1471_PORTSEL	(RIC.unRESIN1471.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1472	(RIC.unRESIN1472.u16Register)  /*@rg@*/
#define RIC_RESIN1472_RESSEL	(RIC.unRESIN1472.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1472_PORTSEL	(RIC.unRESIN1472.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1473	(RIC.unRESIN1473.u16Register)  /*@rg@*/
#define RIC_RESIN1473_RESSEL	(RIC.unRESIN1473.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1473_PORTSEL	(RIC.unRESIN1473.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1474	(RIC.unRESIN1474.u16Register)  /*@rg@*/
#define RIC_RESIN1474_RESSEL	(RIC.unRESIN1474.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1474_PORTSEL	(RIC.unRESIN1474.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1475	(RIC.unRESIN1475.u16Register)  /*@rg@*/
#define RIC_RESIN1475_RESSEL	(RIC.unRESIN1475.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1475_PORTSEL	(RIC.unRESIN1475.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1476	(RIC.unRESIN1476.u16Register)  /*@rg@*/
#define RIC_RESIN1476_RESSEL	(RIC.unRESIN1476.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1476_PORTSEL	(RIC.unRESIN1476.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1477	(RIC.unRESIN1477.u16Register)  /*@rg@*/
#define RIC_RESIN1477_RESSEL	(RIC.unRESIN1477.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1477_PORTSEL	(RIC.unRESIN1477.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1478	(RIC.unRESIN1478.u16Register)  /*@rg@*/
#define RIC_RESIN1478_RESSEL	(RIC.unRESIN1478.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1478_PORTSEL	(RIC.unRESIN1478.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1479	(RIC.unRESIN1479.u16Register)  /*@rg@*/
#define RIC_RESIN1479_RESSEL	(RIC.unRESIN1479.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1479_PORTSEL	(RIC.unRESIN1479.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1480	(RIC.unRESIN1480.u16Register)  /*@rg@*/
#define RIC_RESIN1480_RESSEL	(RIC.unRESIN1480.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1480_PORTSEL	(RIC.unRESIN1480.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1481	(RIC.unRESIN1481.u16Register)  /*@rg@*/
#define RIC_RESIN1481_RESSEL	(RIC.unRESIN1481.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1481_PORTSEL	(RIC.unRESIN1481.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1482	(RIC.unRESIN1482.u16Register)  /*@rg@*/
#define RIC_RESIN1482_RESSEL	(RIC.unRESIN1482.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1482_PORTSEL	(RIC.unRESIN1482.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1483	(RIC.unRESIN1483.u16Register)  /*@rg@*/
#define RIC_RESIN1483_RESSEL	(RIC.unRESIN1483.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1483_PORTSEL	(RIC.unRESIN1483.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1484	(RIC.unRESIN1484.u16Register)  /*@rg@*/
#define RIC_RESIN1484_RESSEL	(RIC.unRESIN1484.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1484_PORTSEL	(RIC.unRESIN1484.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1485	(RIC.unRESIN1485.u16Register)  /*@rg@*/
#define RIC_RESIN1485_RESSEL	(RIC.unRESIN1485.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1485_PORTSEL	(RIC.unRESIN1485.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1486	(RIC.unRESIN1486.u16Register)  /*@rg@*/
#define RIC_RESIN1486_RESSEL	(RIC.unRESIN1486.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1486_PORTSEL	(RIC.unRESIN1486.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1487	(RIC.unRESIN1487.u16Register)  /*@rg@*/
#define RIC_RESIN1487_RESSEL	(RIC.unRESIN1487.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1487_PORTSEL	(RIC.unRESIN1487.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1488	(RIC.unRESIN1488.u16Register)  /*@rg@*/
#define RIC_RESIN1488_RESSEL	(RIC.unRESIN1488.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1488_PORTSEL	(RIC.unRESIN1488.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1489	(RIC.unRESIN1489.u16Register)  /*@rg@*/
#define RIC_RESIN1489_RESSEL	(RIC.unRESIN1489.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1489_PORTSEL	(RIC.unRESIN1489.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1490	(RIC.unRESIN1490.u16Register)  /*@rg@*/
#define RIC_RESIN1490_RESSEL	(RIC.unRESIN1490.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1490_PORTSEL	(RIC.unRESIN1490.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1491	(RIC.unRESIN1491.u16Register)  /*@rg@*/
#define RIC_RESIN1491_RESSEL	(RIC.unRESIN1491.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1491_PORTSEL	(RIC.unRESIN1491.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1492	(RIC.unRESIN1492.u16Register)  /*@rg@*/
#define RIC_RESIN1492_RESSEL	(RIC.unRESIN1492.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1492_PORTSEL	(RIC.unRESIN1492.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1493	(RIC.unRESIN1493.u16Register)  /*@rg@*/
#define RIC_RESIN1493_RESSEL	(RIC.unRESIN1493.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1493_PORTSEL	(RIC.unRESIN1493.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1494	(RIC.unRESIN1494.u16Register)  /*@rg@*/
#define RIC_RESIN1494_RESSEL	(RIC.unRESIN1494.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1494_PORTSEL	(RIC.unRESIN1494.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1495	(RIC.unRESIN1495.u16Register)  /*@rg@*/
#define RIC_RESIN1495_RESSEL	(RIC.unRESIN1495.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1495_PORTSEL	(RIC.unRESIN1495.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1496	(RIC.unRESIN1496.u16Register)  /*@rg@*/
#define RIC_RESIN1496_RESSEL	(RIC.unRESIN1496.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1496_PORTSEL	(RIC.unRESIN1496.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1497	(RIC.unRESIN1497.u16Register)  /*@rg@*/
#define RIC_RESIN1497_RESSEL	(RIC.unRESIN1497.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1497_PORTSEL	(RIC.unRESIN1497.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1498	(RIC.unRESIN1498.u16Register)  /*@rg@*/
#define RIC_RESIN1498_RESSEL	(RIC.unRESIN1498.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1498_PORTSEL	(RIC.unRESIN1498.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1499	(RIC.unRESIN1499.u16Register)  /*@rg@*/
#define RIC_RESIN1499_RESSEL	(RIC.unRESIN1499.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1499_PORTSEL	(RIC.unRESIN1499.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1500	(RIC.unRESIN1500.u16Register)  /*@rg@*/
#define RIC_RESIN1500_RESSEL	(RIC.unRESIN1500.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1500_PORTSEL	(RIC.unRESIN1500.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1501	(RIC.unRESIN1501.u16Register)  /*@rg@*/
#define RIC_RESIN1501_RESSEL	(RIC.unRESIN1501.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1501_PORTSEL	(RIC.unRESIN1501.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1502	(RIC.unRESIN1502.u16Register)  /*@rg@*/
#define RIC_RESIN1502_RESSEL	(RIC.unRESIN1502.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1502_PORTSEL	(RIC.unRESIN1502.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1503	(RIC.unRESIN1503.u16Register)  /*@rg@*/
#define RIC_RESIN1503_RESSEL	(RIC.unRESIN1503.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1503_PORTSEL	(RIC.unRESIN1503.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1504	(RIC.unRESIN1504.u16Register)  /*@rg@*/
#define RIC_RESIN1504_RESSEL	(RIC.unRESIN1504.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1504_PORTSEL	(RIC.unRESIN1504.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1505	(RIC.unRESIN1505.u16Register)  /*@rg@*/
#define RIC_RESIN1505_RESSEL	(RIC.unRESIN1505.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1505_PORTSEL	(RIC.unRESIN1505.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1506	(RIC.unRESIN1506.u16Register)  /*@rg@*/
#define RIC_RESIN1506_RESSEL	(RIC.unRESIN1506.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1506_PORTSEL	(RIC.unRESIN1506.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1507	(RIC.unRESIN1507.u16Register)  /*@rg@*/
#define RIC_RESIN1507_RESSEL	(RIC.unRESIN1507.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1507_PORTSEL	(RIC.unRESIN1507.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1508	(RIC.unRESIN1508.u16Register)  /*@rg@*/
#define RIC_RESIN1508_RESSEL	(RIC.unRESIN1508.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1508_PORTSEL	(RIC.unRESIN1508.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1509	(RIC.unRESIN1509.u16Register)  /*@rg@*/
#define RIC_RESIN1509_RESSEL	(RIC.unRESIN1509.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1509_PORTSEL	(RIC.unRESIN1509.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1510	(RIC.unRESIN1510.u16Register)  /*@rg@*/
#define RIC_RESIN1510_RESSEL	(RIC.unRESIN1510.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1510_PORTSEL	(RIC.unRESIN1510.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1511	(RIC.unRESIN1511.u16Register)  /*@rg@*/
#define RIC_RESIN1511_RESSEL	(RIC.unRESIN1511.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1511_PORTSEL	(RIC.unRESIN1511.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1512	(RIC.unRESIN1512.u16Register)  /*@rg@*/
#define RIC_RESIN1512_RESSEL	(RIC.unRESIN1512.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1512_PORTSEL	(RIC.unRESIN1512.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1513	(RIC.unRESIN1513.u16Register)  /*@rg@*/
#define RIC_RESIN1513_RESSEL	(RIC.unRESIN1513.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1513_PORTSEL	(RIC.unRESIN1513.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1514	(RIC.unRESIN1514.u16Register)  /*@rg@*/
#define RIC_RESIN1514_RESSEL	(RIC.unRESIN1514.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1514_PORTSEL	(RIC.unRESIN1514.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1515	(RIC.unRESIN1515.u16Register)  /*@rg@*/
#define RIC_RESIN1515_RESSEL	(RIC.unRESIN1515.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1515_PORTSEL	(RIC.unRESIN1515.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1516	(RIC.unRESIN1516.u16Register)  /*@rg@*/
#define RIC_RESIN1516_RESSEL	(RIC.unRESIN1516.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1516_PORTSEL	(RIC.unRESIN1516.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1517	(RIC.unRESIN1517.u16Register)  /*@rg@*/
#define RIC_RESIN1517_RESSEL	(RIC.unRESIN1517.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1517_PORTSEL	(RIC.unRESIN1517.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1518	(RIC.unRESIN1518.u16Register)  /*@rg@*/
#define RIC_RESIN1518_RESSEL	(RIC.unRESIN1518.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1518_PORTSEL	(RIC.unRESIN1518.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1519	(RIC.unRESIN1519.u16Register)  /*@rg@*/
#define RIC_RESIN1519_RESSEL	(RIC.unRESIN1519.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1519_PORTSEL	(RIC.unRESIN1519.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1520	(RIC.unRESIN1520.u16Register)  /*@rg@*/
#define RIC_RESIN1520_RESSEL	(RIC.unRESIN1520.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1520_PORTSEL	(RIC.unRESIN1520.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1521	(RIC.unRESIN1521.u16Register)  /*@rg@*/
#define RIC_RESIN1521_RESSEL	(RIC.unRESIN1521.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1521_PORTSEL	(RIC.unRESIN1521.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1522	(RIC.unRESIN1522.u16Register)  /*@rg@*/
#define RIC_RESIN1522_RESSEL	(RIC.unRESIN1522.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1522_PORTSEL	(RIC.unRESIN1522.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1523	(RIC.unRESIN1523.u16Register)  /*@rg@*/
#define RIC_RESIN1523_RESSEL	(RIC.unRESIN1523.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1523_PORTSEL	(RIC.unRESIN1523.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1524	(RIC.unRESIN1524.u16Register)  /*@rg@*/
#define RIC_RESIN1524_RESSEL	(RIC.unRESIN1524.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1524_PORTSEL	(RIC.unRESIN1524.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1525	(RIC.unRESIN1525.u16Register)  /*@rg@*/
#define RIC_RESIN1525_RESSEL	(RIC.unRESIN1525.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1525_PORTSEL	(RIC.unRESIN1525.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1526	(RIC.unRESIN1526.u16Register)  /*@rg@*/
#define RIC_RESIN1526_RESSEL	(RIC.unRESIN1526.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1526_PORTSEL	(RIC.unRESIN1526.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1527	(RIC.unRESIN1527.u16Register)  /*@rg@*/
#define RIC_RESIN1527_RESSEL	(RIC.unRESIN1527.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1527_PORTSEL	(RIC.unRESIN1527.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1528	(RIC.unRESIN1528.u16Register)  /*@rg@*/
#define RIC_RESIN1528_RESSEL	(RIC.unRESIN1528.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1528_PORTSEL	(RIC.unRESIN1528.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1529	(RIC.unRESIN1529.u16Register)  /*@rg@*/
#define RIC_RESIN1529_RESSEL	(RIC.unRESIN1529.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1529_PORTSEL	(RIC.unRESIN1529.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1530	(RIC.unRESIN1530.u16Register)  /*@rg@*/
#define RIC_RESIN1530_RESSEL	(RIC.unRESIN1530.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1530_PORTSEL	(RIC.unRESIN1530.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1531	(RIC.unRESIN1531.u16Register)  /*@rg@*/
#define RIC_RESIN1531_RESSEL	(RIC.unRESIN1531.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1531_PORTSEL	(RIC.unRESIN1531.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1532	(RIC.unRESIN1532.u16Register)  /*@rg@*/
#define RIC_RESIN1532_RESSEL	(RIC.unRESIN1532.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1532_PORTSEL	(RIC.unRESIN1532.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1533	(RIC.unRESIN1533.u16Register)  /*@rg@*/
#define RIC_RESIN1533_RESSEL	(RIC.unRESIN1533.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1533_PORTSEL	(RIC.unRESIN1533.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1534	(RIC.unRESIN1534.u16Register)  /*@rg@*/
#define RIC_RESIN1534_RESSEL	(RIC.unRESIN1534.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1534_PORTSEL	(RIC.unRESIN1534.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1535	(RIC.unRESIN1535.u16Register)  /*@rg@*/
#define RIC_RESIN1535_RESSEL	(RIC.unRESIN1535.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1535_PORTSEL	(RIC.unRESIN1535.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1536	(RIC.unRESIN1536.u16Register)  /*@rg@*/
#define RIC_RESIN1536_RESSEL	(RIC.unRESIN1536.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1536_PORTSEL	(RIC.unRESIN1536.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1537	(RIC.unRESIN1537.u16Register)  /*@rg@*/
#define RIC_RESIN1537_RESSEL	(RIC.unRESIN1537.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1537_PORTSEL	(RIC.unRESIN1537.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1538	(RIC.unRESIN1538.u16Register)  /*@rg@*/
#define RIC_RESIN1538_RESSEL	(RIC.unRESIN1538.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1538_PORTSEL	(RIC.unRESIN1538.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1539	(RIC.unRESIN1539.u16Register)  /*@rg@*/
#define RIC_RESIN1539_RESSEL	(RIC.unRESIN1539.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1539_PORTSEL	(RIC.unRESIN1539.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1540	(RIC.unRESIN1540.u16Register)  /*@rg@*/
#define RIC_RESIN1540_RESSEL	(RIC.unRESIN1540.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1540_PORTSEL	(RIC.unRESIN1540.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1541	(RIC.unRESIN1541.u16Register)  /*@rg@*/
#define RIC_RESIN1541_RESSEL	(RIC.unRESIN1541.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1541_PORTSEL	(RIC.unRESIN1541.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1542	(RIC.unRESIN1542.u16Register)  /*@rg@*/
#define RIC_RESIN1542_RESSEL	(RIC.unRESIN1542.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1542_PORTSEL	(RIC.unRESIN1542.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1543	(RIC.unRESIN1543.u16Register)  /*@rg@*/
#define RIC_RESIN1543_RESSEL	(RIC.unRESIN1543.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1543_PORTSEL	(RIC.unRESIN1543.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1544	(RIC.unRESIN1544.u16Register)  /*@rg@*/
#define RIC_RESIN1544_RESSEL	(RIC.unRESIN1544.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1544_PORTSEL	(RIC.unRESIN1544.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1545	(RIC.unRESIN1545.u16Register)  /*@rg@*/
#define RIC_RESIN1545_RESSEL	(RIC.unRESIN1545.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1545_PORTSEL	(RIC.unRESIN1545.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1546	(RIC.unRESIN1546.u16Register)  /*@rg@*/
#define RIC_RESIN1546_RESSEL	(RIC.unRESIN1546.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1546_PORTSEL	(RIC.unRESIN1546.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1547	(RIC.unRESIN1547.u16Register)  /*@rg@*/
#define RIC_RESIN1547_RESSEL	(RIC.unRESIN1547.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1547_PORTSEL	(RIC.unRESIN1547.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1548	(RIC.unRESIN1548.u16Register)  /*@rg@*/
#define RIC_RESIN1548_RESSEL	(RIC.unRESIN1548.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1548_PORTSEL	(RIC.unRESIN1548.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1549	(RIC.unRESIN1549.u16Register)  /*@rg@*/
#define RIC_RESIN1549_RESSEL	(RIC.unRESIN1549.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1549_PORTSEL	(RIC.unRESIN1549.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1550	(RIC.unRESIN1550.u16Register)  /*@rg@*/
#define RIC_RESIN1550_RESSEL	(RIC.unRESIN1550.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1550_PORTSEL	(RIC.unRESIN1550.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1551	(RIC.unRESIN1551.u16Register)  /*@rg@*/
#define RIC_RESIN1551_RESSEL	(RIC.unRESIN1551.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1551_PORTSEL	(RIC.unRESIN1551.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1552	(RIC.unRESIN1552.u16Register)  /*@rg@*/
#define RIC_RESIN1552_RESSEL	(RIC.unRESIN1552.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1552_PORTSEL	(RIC.unRESIN1552.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1553	(RIC.unRESIN1553.u16Register)  /*@rg@*/
#define RIC_RESIN1553_RESSEL	(RIC.unRESIN1553.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1553_PORTSEL	(RIC.unRESIN1553.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1554	(RIC.unRESIN1554.u16Register)  /*@rg@*/
#define RIC_RESIN1554_RESSEL	(RIC.unRESIN1554.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1554_PORTSEL	(RIC.unRESIN1554.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1555	(RIC.unRESIN1555.u16Register)  /*@rg@*/
#define RIC_RESIN1555_RESSEL	(RIC.unRESIN1555.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1555_PORTSEL	(RIC.unRESIN1555.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1556	(RIC.unRESIN1556.u16Register)  /*@rg@*/
#define RIC_RESIN1556_RESSEL	(RIC.unRESIN1556.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1556_PORTSEL	(RIC.unRESIN1556.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1557	(RIC.unRESIN1557.u16Register)  /*@rg@*/
#define RIC_RESIN1557_RESSEL	(RIC.unRESIN1557.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1557_PORTSEL	(RIC.unRESIN1557.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1558	(RIC.unRESIN1558.u16Register)  /*@rg@*/
#define RIC_RESIN1558_RESSEL	(RIC.unRESIN1558.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1558_PORTSEL	(RIC.unRESIN1558.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1559	(RIC.unRESIN1559.u16Register)  /*@rg@*/
#define RIC_RESIN1559_RESSEL	(RIC.unRESIN1559.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1559_PORTSEL	(RIC.unRESIN1559.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1560	(RIC.unRESIN1560.u16Register)  /*@rg@*/
#define RIC_RESIN1560_RESSEL	(RIC.unRESIN1560.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1560_PORTSEL	(RIC.unRESIN1560.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1561	(RIC.unRESIN1561.u16Register)  /*@rg@*/
#define RIC_RESIN1561_RESSEL	(RIC.unRESIN1561.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1561_PORTSEL	(RIC.unRESIN1561.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1562	(RIC.unRESIN1562.u16Register)  /*@rg@*/
#define RIC_RESIN1562_RESSEL	(RIC.unRESIN1562.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1562_PORTSEL	(RIC.unRESIN1562.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1563	(RIC.unRESIN1563.u16Register)  /*@rg@*/
#define RIC_RESIN1563_RESSEL	(RIC.unRESIN1563.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1563_PORTSEL	(RIC.unRESIN1563.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1564	(RIC.unRESIN1564.u16Register)  /*@rg@*/
#define RIC_RESIN1564_RESSEL	(RIC.unRESIN1564.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1564_PORTSEL	(RIC.unRESIN1564.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1565	(RIC.unRESIN1565.u16Register)  /*@rg@*/
#define RIC_RESIN1565_RESSEL	(RIC.unRESIN1565.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1565_PORTSEL	(RIC.unRESIN1565.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1566	(RIC.unRESIN1566.u16Register)  /*@rg@*/
#define RIC_RESIN1566_RESSEL	(RIC.unRESIN1566.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1566_PORTSEL	(RIC.unRESIN1566.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1567	(RIC.unRESIN1567.u16Register)  /*@rg@*/
#define RIC_RESIN1567_RESSEL	(RIC.unRESIN1567.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1567_PORTSEL	(RIC.unRESIN1567.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1568	(RIC.unRESIN1568.u16Register)  /*@rg@*/
#define RIC_RESIN1568_RESSEL	(RIC.unRESIN1568.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1568_PORTSEL	(RIC.unRESIN1568.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1569	(RIC.unRESIN1569.u16Register)  /*@rg@*/
#define RIC_RESIN1569_RESSEL	(RIC.unRESIN1569.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1569_PORTSEL	(RIC.unRESIN1569.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1570	(RIC.unRESIN1570.u16Register)  /*@rg@*/
#define RIC_RESIN1570_RESSEL	(RIC.unRESIN1570.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1570_PORTSEL	(RIC.unRESIN1570.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1571	(RIC.unRESIN1571.u16Register)  /*@rg@*/
#define RIC_RESIN1571_RESSEL	(RIC.unRESIN1571.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1571_PORTSEL	(RIC.unRESIN1571.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1572	(RIC.unRESIN1572.u16Register)  /*@rg@*/
#define RIC_RESIN1572_RESSEL	(RIC.unRESIN1572.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1572_PORTSEL	(RIC.unRESIN1572.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1573	(RIC.unRESIN1573.u16Register)  /*@rg@*/
#define RIC_RESIN1573_RESSEL	(RIC.unRESIN1573.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1573_PORTSEL	(RIC.unRESIN1573.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1574	(RIC.unRESIN1574.u16Register)  /*@rg@*/
#define RIC_RESIN1574_RESSEL	(RIC.unRESIN1574.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1574_PORTSEL	(RIC.unRESIN1574.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1575	(RIC.unRESIN1575.u16Register)  /*@rg@*/
#define RIC_RESIN1575_RESSEL	(RIC.unRESIN1575.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1575_PORTSEL	(RIC.unRESIN1575.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1576	(RIC.unRESIN1576.u16Register)  /*@rg@*/
#define RIC_RESIN1576_RESSEL	(RIC.unRESIN1576.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1576_PORTSEL	(RIC.unRESIN1576.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1577	(RIC.unRESIN1577.u16Register)  /*@rg@*/
#define RIC_RESIN1577_RESSEL	(RIC.unRESIN1577.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1577_PORTSEL	(RIC.unRESIN1577.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1578	(RIC.unRESIN1578.u16Register)  /*@rg@*/
#define RIC_RESIN1578_RESSEL	(RIC.unRESIN1578.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1578_PORTSEL	(RIC.unRESIN1578.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1579	(RIC.unRESIN1579.u16Register)  /*@rg@*/
#define RIC_RESIN1579_RESSEL	(RIC.unRESIN1579.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1579_PORTSEL	(RIC.unRESIN1579.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1580	(RIC.unRESIN1580.u16Register)  /*@rg@*/
#define RIC_RESIN1580_RESSEL	(RIC.unRESIN1580.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1580_PORTSEL	(RIC.unRESIN1580.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1581	(RIC.unRESIN1581.u16Register)  /*@rg@*/
#define RIC_RESIN1581_RESSEL	(RIC.unRESIN1581.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1581_PORTSEL	(RIC.unRESIN1581.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1582	(RIC.unRESIN1582.u16Register)  /*@rg@*/
#define RIC_RESIN1582_RESSEL	(RIC.unRESIN1582.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1582_PORTSEL	(RIC.unRESIN1582.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1583	(RIC.unRESIN1583.u16Register)  /*@rg@*/
#define RIC_RESIN1583_RESSEL	(RIC.unRESIN1583.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1583_PORTSEL	(RIC.unRESIN1583.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1584	(RIC.unRESIN1584.u16Register)  /*@rg@*/
#define RIC_RESIN1584_RESSEL	(RIC.unRESIN1584.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1584_PORTSEL	(RIC.unRESIN1584.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1585	(RIC.unRESIN1585.u16Register)  /*@rg@*/
#define RIC_RESIN1585_RESSEL	(RIC.unRESIN1585.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1585_PORTSEL	(RIC.unRESIN1585.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1586	(RIC.unRESIN1586.u16Register)  /*@rg@*/
#define RIC_RESIN1586_RESSEL	(RIC.unRESIN1586.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1586_PORTSEL	(RIC.unRESIN1586.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1587	(RIC.unRESIN1587.u16Register)  /*@rg@*/
#define RIC_RESIN1587_RESSEL	(RIC.unRESIN1587.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1587_PORTSEL	(RIC.unRESIN1587.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1588	(RIC.unRESIN1588.u16Register)  /*@rg@*/
#define RIC_RESIN1588_RESSEL	(RIC.unRESIN1588.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1588_PORTSEL	(RIC.unRESIN1588.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1589	(RIC.unRESIN1589.u16Register)  /*@rg@*/
#define RIC_RESIN1589_RESSEL	(RIC.unRESIN1589.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1589_PORTSEL	(RIC.unRESIN1589.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1590	(RIC.unRESIN1590.u16Register)  /*@rg@*/
#define RIC_RESIN1590_RESSEL	(RIC.unRESIN1590.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1590_PORTSEL	(RIC.unRESIN1590.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1591	(RIC.unRESIN1591.u16Register)  /*@rg@*/
#define RIC_RESIN1591_RESSEL	(RIC.unRESIN1591.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1591_PORTSEL	(RIC.unRESIN1591.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1592	(RIC.unRESIN1592.u16Register)  /*@rg@*/
#define RIC_RESIN1592_RESSEL	(RIC.unRESIN1592.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1592_PORTSEL	(RIC.unRESIN1592.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1593	(RIC.unRESIN1593.u16Register)  /*@rg@*/
#define RIC_RESIN1593_RESSEL	(RIC.unRESIN1593.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1593_PORTSEL	(RIC.unRESIN1593.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1594	(RIC.unRESIN1594.u16Register)  /*@rg@*/
#define RIC_RESIN1594_RESSEL	(RIC.unRESIN1594.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1594_PORTSEL	(RIC.unRESIN1594.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1595	(RIC.unRESIN1595.u16Register)  /*@rg@*/
#define RIC_RESIN1595_RESSEL	(RIC.unRESIN1595.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1595_PORTSEL	(RIC.unRESIN1595.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1596	(RIC.unRESIN1596.u16Register)  /*@rg@*/
#define RIC_RESIN1596_RESSEL	(RIC.unRESIN1596.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1596_PORTSEL	(RIC.unRESIN1596.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1597	(RIC.unRESIN1597.u16Register)  /*@rg@*/
#define RIC_RESIN1597_RESSEL	(RIC.unRESIN1597.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1597_PORTSEL	(RIC.unRESIN1597.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1598	(RIC.unRESIN1598.u16Register)  /*@rg@*/
#define RIC_RESIN1598_RESSEL	(RIC.unRESIN1598.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1598_PORTSEL	(RIC.unRESIN1598.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1599	(RIC.unRESIN1599.u16Register)  /*@rg@*/
#define RIC_RESIN1599_RESSEL	(RIC.unRESIN1599.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1599_PORTSEL	(RIC.unRESIN1599.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1600	(RIC.unRESIN1600.u16Register)  /*@rg@*/
#define RIC_RESIN1600_RESSEL	(RIC.unRESIN1600.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1600_PORTSEL	(RIC.unRESIN1600.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1601	(RIC.unRESIN1601.u16Register)  /*@rg@*/
#define RIC_RESIN1601_RESSEL	(RIC.unRESIN1601.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1601_PORTSEL	(RIC.unRESIN1601.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1602	(RIC.unRESIN1602.u16Register)  /*@rg@*/
#define RIC_RESIN1602_RESSEL	(RIC.unRESIN1602.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1602_PORTSEL	(RIC.unRESIN1602.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1603	(RIC.unRESIN1603.u16Register)  /*@rg@*/
#define RIC_RESIN1603_RESSEL	(RIC.unRESIN1603.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1603_PORTSEL	(RIC.unRESIN1603.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1604	(RIC.unRESIN1604.u16Register)  /*@rg@*/
#define RIC_RESIN1604_RESSEL	(RIC.unRESIN1604.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1604_PORTSEL	(RIC.unRESIN1604.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1605	(RIC.unRESIN1605.u16Register)  /*@rg@*/
#define RIC_RESIN1605_RESSEL	(RIC.unRESIN1605.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1605_PORTSEL	(RIC.unRESIN1605.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1606	(RIC.unRESIN1606.u16Register)  /*@rg@*/
#define RIC_RESIN1606_RESSEL	(RIC.unRESIN1606.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1606_PORTSEL	(RIC.unRESIN1606.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1607	(RIC.unRESIN1607.u16Register)  /*@rg@*/
#define RIC_RESIN1607_RESSEL	(RIC.unRESIN1607.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1607_PORTSEL	(RIC.unRESIN1607.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1608	(RIC.unRESIN1608.u16Register)  /*@rg@*/
#define RIC_RESIN1608_RESSEL	(RIC.unRESIN1608.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1608_PORTSEL	(RIC.unRESIN1608.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1609	(RIC.unRESIN1609.u16Register)  /*@rg@*/
#define RIC_RESIN1609_RESSEL	(RIC.unRESIN1609.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1609_PORTSEL	(RIC.unRESIN1609.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1610	(RIC.unRESIN1610.u16Register)  /*@rg@*/
#define RIC_RESIN1610_RESSEL	(RIC.unRESIN1610.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1610_PORTSEL	(RIC.unRESIN1610.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1611	(RIC.unRESIN1611.u16Register)  /*@rg@*/
#define RIC_RESIN1611_RESSEL	(RIC.unRESIN1611.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1611_PORTSEL	(RIC.unRESIN1611.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1612	(RIC.unRESIN1612.u16Register)  /*@rg@*/
#define RIC_RESIN1612_RESSEL	(RIC.unRESIN1612.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1612_PORTSEL	(RIC.unRESIN1612.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1613	(RIC.unRESIN1613.u16Register)  /*@rg@*/
#define RIC_RESIN1613_RESSEL	(RIC.unRESIN1613.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1613_PORTSEL	(RIC.unRESIN1613.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1614	(RIC.unRESIN1614.u16Register)  /*@rg@*/
#define RIC_RESIN1614_RESSEL	(RIC.unRESIN1614.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1614_PORTSEL	(RIC.unRESIN1614.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1615	(RIC.unRESIN1615.u16Register)  /*@rg@*/
#define RIC_RESIN1615_RESSEL	(RIC.unRESIN1615.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1615_PORTSEL	(RIC.unRESIN1615.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1616	(RIC.unRESIN1616.u16Register)  /*@rg@*/
#define RIC_RESIN1616_RESSEL	(RIC.unRESIN1616.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1616_PORTSEL	(RIC.unRESIN1616.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1617	(RIC.unRESIN1617.u16Register)  /*@rg@*/
#define RIC_RESIN1617_RESSEL	(RIC.unRESIN1617.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1617_PORTSEL	(RIC.unRESIN1617.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1618	(RIC.unRESIN1618.u16Register)  /*@rg@*/
#define RIC_RESIN1618_RESSEL	(RIC.unRESIN1618.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1618_PORTSEL	(RIC.unRESIN1618.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1619	(RIC.unRESIN1619.u16Register)  /*@rg@*/
#define RIC_RESIN1619_RESSEL	(RIC.unRESIN1619.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1619_PORTSEL	(RIC.unRESIN1619.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1620	(RIC.unRESIN1620.u16Register)  /*@rg@*/
#define RIC_RESIN1620_RESSEL	(RIC.unRESIN1620.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1620_PORTSEL	(RIC.unRESIN1620.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1621	(RIC.unRESIN1621.u16Register)  /*@rg@*/
#define RIC_RESIN1621_RESSEL	(RIC.unRESIN1621.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1621_PORTSEL	(RIC.unRESIN1621.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1622	(RIC.unRESIN1622.u16Register)  /*@rg@*/
#define RIC_RESIN1622_RESSEL	(RIC.unRESIN1622.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1622_PORTSEL	(RIC.unRESIN1622.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1623	(RIC.unRESIN1623.u16Register)  /*@rg@*/
#define RIC_RESIN1623_RESSEL	(RIC.unRESIN1623.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1623_PORTSEL	(RIC.unRESIN1623.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1624	(RIC.unRESIN1624.u16Register)  /*@rg@*/
#define RIC_RESIN1624_RESSEL	(RIC.unRESIN1624.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1624_PORTSEL	(RIC.unRESIN1624.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1625	(RIC.unRESIN1625.u16Register)  /*@rg@*/
#define RIC_RESIN1625_RESSEL	(RIC.unRESIN1625.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1625_PORTSEL	(RIC.unRESIN1625.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1626	(RIC.unRESIN1626.u16Register)  /*@rg@*/
#define RIC_RESIN1626_RESSEL	(RIC.unRESIN1626.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1626_PORTSEL	(RIC.unRESIN1626.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1627	(RIC.unRESIN1627.u16Register)  /*@rg@*/
#define RIC_RESIN1627_RESSEL	(RIC.unRESIN1627.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1627_PORTSEL	(RIC.unRESIN1627.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1628	(RIC.unRESIN1628.u16Register)  /*@rg@*/
#define RIC_RESIN1628_RESSEL	(RIC.unRESIN1628.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1628_PORTSEL	(RIC.unRESIN1628.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1629	(RIC.unRESIN1629.u16Register)  /*@rg@*/
#define RIC_RESIN1629_RESSEL	(RIC.unRESIN1629.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1629_PORTSEL	(RIC.unRESIN1629.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1630	(RIC.unRESIN1630.u16Register)  /*@rg@*/
#define RIC_RESIN1630_RESSEL	(RIC.unRESIN1630.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1630_PORTSEL	(RIC.unRESIN1630.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1631	(RIC.unRESIN1631.u16Register)  /*@rg@*/
#define RIC_RESIN1631_RESSEL	(RIC.unRESIN1631.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1631_PORTSEL	(RIC.unRESIN1631.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1632	(RIC.unRESIN1632.u16Register)  /*@rg@*/
#define RIC_RESIN1632_RESSEL	(RIC.unRESIN1632.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1632_PORTSEL	(RIC.unRESIN1632.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1633	(RIC.unRESIN1633.u16Register)  /*@rg@*/
#define RIC_RESIN1633_RESSEL	(RIC.unRESIN1633.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1633_PORTSEL	(RIC.unRESIN1633.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1634	(RIC.unRESIN1634.u16Register)  /*@rg@*/
#define RIC_RESIN1634_RESSEL	(RIC.unRESIN1634.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1634_PORTSEL	(RIC.unRESIN1634.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1635	(RIC.unRESIN1635.u16Register)  /*@rg@*/
#define RIC_RESIN1635_RESSEL	(RIC.unRESIN1635.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1635_PORTSEL	(RIC.unRESIN1635.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1636	(RIC.unRESIN1636.u16Register)  /*@rg@*/
#define RIC_RESIN1636_RESSEL	(RIC.unRESIN1636.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1636_PORTSEL	(RIC.unRESIN1636.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1637	(RIC.unRESIN1637.u16Register)  /*@rg@*/
#define RIC_RESIN1637_RESSEL	(RIC.unRESIN1637.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1637_PORTSEL	(RIC.unRESIN1637.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1638	(RIC.unRESIN1638.u16Register)  /*@rg@*/
#define RIC_RESIN1638_RESSEL	(RIC.unRESIN1638.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1638_PORTSEL	(RIC.unRESIN1638.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1639	(RIC.unRESIN1639.u16Register)  /*@rg@*/
#define RIC_RESIN1639_RESSEL	(RIC.unRESIN1639.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1639_PORTSEL	(RIC.unRESIN1639.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1640	(RIC.unRESIN1640.u16Register)  /*@rg@*/
#define RIC_RESIN1640_RESSEL	(RIC.unRESIN1640.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1640_PORTSEL	(RIC.unRESIN1640.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1641	(RIC.unRESIN1641.u16Register)  /*@rg@*/
#define RIC_RESIN1641_RESSEL	(RIC.unRESIN1641.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1641_PORTSEL	(RIC.unRESIN1641.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1642	(RIC.unRESIN1642.u16Register)  /*@rg@*/
#define RIC_RESIN1642_RESSEL	(RIC.unRESIN1642.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1642_PORTSEL	(RIC.unRESIN1642.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1643	(RIC.unRESIN1643.u16Register)  /*@rg@*/
#define RIC_RESIN1643_RESSEL	(RIC.unRESIN1643.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1643_PORTSEL	(RIC.unRESIN1643.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1644	(RIC.unRESIN1644.u16Register)  /*@rg@*/
#define RIC_RESIN1644_RESSEL	(RIC.unRESIN1644.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1644_PORTSEL	(RIC.unRESIN1644.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1645	(RIC.unRESIN1645.u16Register)  /*@rg@*/
#define RIC_RESIN1645_RESSEL	(RIC.unRESIN1645.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1645_PORTSEL	(RIC.unRESIN1645.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1646	(RIC.unRESIN1646.u16Register)  /*@rg@*/
#define RIC_RESIN1646_RESSEL	(RIC.unRESIN1646.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1646_PORTSEL	(RIC.unRESIN1646.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1647	(RIC.unRESIN1647.u16Register)  /*@rg@*/
#define RIC_RESIN1647_RESSEL	(RIC.unRESIN1647.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1647_PORTSEL	(RIC.unRESIN1647.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1648	(RIC.unRESIN1648.u16Register)  /*@rg@*/
#define RIC_RESIN1648_RESSEL	(RIC.unRESIN1648.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1648_PORTSEL	(RIC.unRESIN1648.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1649	(RIC.unRESIN1649.u16Register)  /*@rg@*/
#define RIC_RESIN1649_RESSEL	(RIC.unRESIN1649.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1649_PORTSEL	(RIC.unRESIN1649.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1650	(RIC.unRESIN1650.u16Register)  /*@rg@*/
#define RIC_RESIN1650_RESSEL	(RIC.unRESIN1650.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1650_PORTSEL	(RIC.unRESIN1650.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1651	(RIC.unRESIN1651.u16Register)  /*@rg@*/
#define RIC_RESIN1651_RESSEL	(RIC.unRESIN1651.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1651_PORTSEL	(RIC.unRESIN1651.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1652	(RIC.unRESIN1652.u16Register)  /*@rg@*/
#define RIC_RESIN1652_RESSEL	(RIC.unRESIN1652.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1652_PORTSEL	(RIC.unRESIN1652.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1653	(RIC.unRESIN1653.u16Register)  /*@rg@*/
#define RIC_RESIN1653_RESSEL	(RIC.unRESIN1653.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1653_PORTSEL	(RIC.unRESIN1653.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1654	(RIC.unRESIN1654.u16Register)  /*@rg@*/
#define RIC_RESIN1654_RESSEL	(RIC.unRESIN1654.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1654_PORTSEL	(RIC.unRESIN1654.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1655	(RIC.unRESIN1655.u16Register)  /*@rg@*/
#define RIC_RESIN1655_RESSEL	(RIC.unRESIN1655.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1655_PORTSEL	(RIC.unRESIN1655.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1656	(RIC.unRESIN1656.u16Register)  /*@rg@*/
#define RIC_RESIN1656_RESSEL	(RIC.unRESIN1656.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1656_PORTSEL	(RIC.unRESIN1656.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1657	(RIC.unRESIN1657.u16Register)  /*@rg@*/
#define RIC_RESIN1657_RESSEL	(RIC.unRESIN1657.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1657_PORTSEL	(RIC.unRESIN1657.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1658	(RIC.unRESIN1658.u16Register)  /*@rg@*/
#define RIC_RESIN1658_RESSEL	(RIC.unRESIN1658.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1658_PORTSEL	(RIC.unRESIN1658.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1659	(RIC.unRESIN1659.u16Register)  /*@rg@*/
#define RIC_RESIN1659_RESSEL	(RIC.unRESIN1659.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1659_PORTSEL	(RIC.unRESIN1659.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1660	(RIC.unRESIN1660.u16Register)  /*@rg@*/
#define RIC_RESIN1660_RESSEL	(RIC.unRESIN1660.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1660_PORTSEL	(RIC.unRESIN1660.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1661	(RIC.unRESIN1661.u16Register)  /*@rg@*/
#define RIC_RESIN1661_RESSEL	(RIC.unRESIN1661.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1661_PORTSEL	(RIC.unRESIN1661.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1662	(RIC.unRESIN1662.u16Register)  /*@rg@*/
#define RIC_RESIN1662_RESSEL	(RIC.unRESIN1662.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1662_PORTSEL	(RIC.unRESIN1662.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1663	(RIC.unRESIN1663.u16Register)  /*@rg@*/
#define RIC_RESIN1663_RESSEL	(RIC.unRESIN1663.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1663_PORTSEL	(RIC.unRESIN1663.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1664	(RIC.unRESIN1664.u16Register)  /*@rg@*/
#define RIC_RESIN1664_RESSEL	(RIC.unRESIN1664.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1664_PORTSEL	(RIC.unRESIN1664.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1665	(RIC.unRESIN1665.u16Register)  /*@rg@*/
#define RIC_RESIN1665_RESSEL	(RIC.unRESIN1665.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1665_PORTSEL	(RIC.unRESIN1665.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1666	(RIC.unRESIN1666.u16Register)  /*@rg@*/
#define RIC_RESIN1666_RESSEL	(RIC.unRESIN1666.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1666_PORTSEL	(RIC.unRESIN1666.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1667	(RIC.unRESIN1667.u16Register)  /*@rg@*/
#define RIC_RESIN1667_RESSEL	(RIC.unRESIN1667.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1667_PORTSEL	(RIC.unRESIN1667.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1668	(RIC.unRESIN1668.u16Register)  /*@rg@*/
#define RIC_RESIN1668_RESSEL	(RIC.unRESIN1668.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1668_PORTSEL	(RIC.unRESIN1668.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1669	(RIC.unRESIN1669.u16Register)  /*@rg@*/
#define RIC_RESIN1669_RESSEL	(RIC.unRESIN1669.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1669_PORTSEL	(RIC.unRESIN1669.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1670	(RIC.unRESIN1670.u16Register)  /*@rg@*/
#define RIC_RESIN1670_RESSEL	(RIC.unRESIN1670.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1670_PORTSEL	(RIC.unRESIN1670.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1671	(RIC.unRESIN1671.u16Register)  /*@rg@*/
#define RIC_RESIN1671_RESSEL	(RIC.unRESIN1671.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1671_PORTSEL	(RIC.unRESIN1671.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1672	(RIC.unRESIN1672.u16Register)  /*@rg@*/
#define RIC_RESIN1672_RESSEL	(RIC.unRESIN1672.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1672_PORTSEL	(RIC.unRESIN1672.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1673	(RIC.unRESIN1673.u16Register)  /*@rg@*/
#define RIC_RESIN1673_RESSEL	(RIC.unRESIN1673.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1673_PORTSEL	(RIC.unRESIN1673.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1674	(RIC.unRESIN1674.u16Register)  /*@rg@*/
#define RIC_RESIN1674_RESSEL	(RIC.unRESIN1674.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1674_PORTSEL	(RIC.unRESIN1674.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1675	(RIC.unRESIN1675.u16Register)  /*@rg@*/
#define RIC_RESIN1675_RESSEL	(RIC.unRESIN1675.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1675_PORTSEL	(RIC.unRESIN1675.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1676	(RIC.unRESIN1676.u16Register)  /*@rg@*/
#define RIC_RESIN1676_RESSEL	(RIC.unRESIN1676.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1676_PORTSEL	(RIC.unRESIN1676.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1677	(RIC.unRESIN1677.u16Register)  /*@rg@*/
#define RIC_RESIN1677_RESSEL	(RIC.unRESIN1677.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1677_PORTSEL	(RIC.unRESIN1677.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1678	(RIC.unRESIN1678.u16Register)  /*@rg@*/
#define RIC_RESIN1678_RESSEL	(RIC.unRESIN1678.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1678_PORTSEL	(RIC.unRESIN1678.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1679	(RIC.unRESIN1679.u16Register)  /*@rg@*/
#define RIC_RESIN1679_RESSEL	(RIC.unRESIN1679.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1679_PORTSEL	(RIC.unRESIN1679.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1680	(RIC.unRESIN1680.u16Register)  /*@rg@*/
#define RIC_RESIN1680_RESSEL	(RIC.unRESIN1680.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1680_PORTSEL	(RIC.unRESIN1680.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1681	(RIC.unRESIN1681.u16Register)  /*@rg@*/
#define RIC_RESIN1681_RESSEL	(RIC.unRESIN1681.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1681_PORTSEL	(RIC.unRESIN1681.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1682	(RIC.unRESIN1682.u16Register)  /*@rg@*/
#define RIC_RESIN1682_RESSEL	(RIC.unRESIN1682.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1682_PORTSEL	(RIC.unRESIN1682.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1683	(RIC.unRESIN1683.u16Register)  /*@rg@*/
#define RIC_RESIN1683_RESSEL	(RIC.unRESIN1683.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1683_PORTSEL	(RIC.unRESIN1683.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1684	(RIC.unRESIN1684.u16Register)  /*@rg@*/
#define RIC_RESIN1684_RESSEL	(RIC.unRESIN1684.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1684_PORTSEL	(RIC.unRESIN1684.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1685	(RIC.unRESIN1685.u16Register)  /*@rg@*/
#define RIC_RESIN1685_RESSEL	(RIC.unRESIN1685.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1685_PORTSEL	(RIC.unRESIN1685.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1686	(RIC.unRESIN1686.u16Register)  /*@rg@*/
#define RIC_RESIN1686_RESSEL	(RIC.unRESIN1686.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1686_PORTSEL	(RIC.unRESIN1686.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1687	(RIC.unRESIN1687.u16Register)  /*@rg@*/
#define RIC_RESIN1687_RESSEL	(RIC.unRESIN1687.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1687_PORTSEL	(RIC.unRESIN1687.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1688	(RIC.unRESIN1688.u16Register)  /*@rg@*/
#define RIC_RESIN1688_RESSEL	(RIC.unRESIN1688.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1688_PORTSEL	(RIC.unRESIN1688.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1689	(RIC.unRESIN1689.u16Register)  /*@rg@*/
#define RIC_RESIN1689_RESSEL	(RIC.unRESIN1689.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1689_PORTSEL	(RIC.unRESIN1689.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1690	(RIC.unRESIN1690.u16Register)  /*@rg@*/
#define RIC_RESIN1690_RESSEL	(RIC.unRESIN1690.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1690_PORTSEL	(RIC.unRESIN1690.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1691	(RIC.unRESIN1691.u16Register)  /*@rg@*/
#define RIC_RESIN1691_RESSEL	(RIC.unRESIN1691.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1691_PORTSEL	(RIC.unRESIN1691.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1692	(RIC.unRESIN1692.u16Register)  /*@rg@*/
#define RIC_RESIN1692_RESSEL	(RIC.unRESIN1692.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1692_PORTSEL	(RIC.unRESIN1692.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1693	(RIC.unRESIN1693.u16Register)  /*@rg@*/
#define RIC_RESIN1693_RESSEL	(RIC.unRESIN1693.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1693_PORTSEL	(RIC.unRESIN1693.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1694	(RIC.unRESIN1694.u16Register)  /*@rg@*/
#define RIC_RESIN1694_RESSEL	(RIC.unRESIN1694.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1694_PORTSEL	(RIC.unRESIN1694.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1695	(RIC.unRESIN1695.u16Register)  /*@rg@*/
#define RIC_RESIN1695_RESSEL	(RIC.unRESIN1695.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1695_PORTSEL	(RIC.unRESIN1695.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1696	(RIC.unRESIN1696.u16Register)  /*@rg@*/
#define RIC_RESIN1696_RESSEL	(RIC.unRESIN1696.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1696_PORTSEL	(RIC.unRESIN1696.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1697	(RIC.unRESIN1697.u16Register)  /*@rg@*/
#define RIC_RESIN1697_RESSEL	(RIC.unRESIN1697.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1697_PORTSEL	(RIC.unRESIN1697.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1698	(RIC.unRESIN1698.u16Register)  /*@rg@*/
#define RIC_RESIN1698_RESSEL	(RIC.unRESIN1698.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1698_PORTSEL	(RIC.unRESIN1698.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1699	(RIC.unRESIN1699.u16Register)  /*@rg@*/
#define RIC_RESIN1699_RESSEL	(RIC.unRESIN1699.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1699_PORTSEL	(RIC.unRESIN1699.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1700	(RIC.unRESIN1700.u16Register)  /*@rg@*/
#define RIC_RESIN1700_RESSEL	(RIC.unRESIN1700.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1700_PORTSEL	(RIC.unRESIN1700.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1701	(RIC.unRESIN1701.u16Register)  /*@rg@*/
#define RIC_RESIN1701_RESSEL	(RIC.unRESIN1701.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1701_PORTSEL	(RIC.unRESIN1701.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1702	(RIC.unRESIN1702.u16Register)  /*@rg@*/
#define RIC_RESIN1702_RESSEL	(RIC.unRESIN1702.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1702_PORTSEL	(RIC.unRESIN1702.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1703	(RIC.unRESIN1703.u16Register)  /*@rg@*/
#define RIC_RESIN1703_RESSEL	(RIC.unRESIN1703.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1703_PORTSEL	(RIC.unRESIN1703.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1704	(RIC.unRESIN1704.u16Register)  /*@rg@*/
#define RIC_RESIN1704_RESSEL	(RIC.unRESIN1704.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1704_PORTSEL	(RIC.unRESIN1704.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1705	(RIC.unRESIN1705.u16Register)  /*@rg@*/
#define RIC_RESIN1705_RESSEL	(RIC.unRESIN1705.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1705_PORTSEL	(RIC.unRESIN1705.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1706	(RIC.unRESIN1706.u16Register)  /*@rg@*/
#define RIC_RESIN1706_RESSEL	(RIC.unRESIN1706.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1706_PORTSEL	(RIC.unRESIN1706.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1707	(RIC.unRESIN1707.u16Register)  /*@rg@*/
#define RIC_RESIN1707_RESSEL	(RIC.unRESIN1707.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1707_PORTSEL	(RIC.unRESIN1707.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1708	(RIC.unRESIN1708.u16Register)  /*@rg@*/
#define RIC_RESIN1708_RESSEL	(RIC.unRESIN1708.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1708_PORTSEL	(RIC.unRESIN1708.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1709	(RIC.unRESIN1709.u16Register)  /*@rg@*/
#define RIC_RESIN1709_RESSEL	(RIC.unRESIN1709.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1709_PORTSEL	(RIC.unRESIN1709.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1710	(RIC.unRESIN1710.u16Register)  /*@rg@*/
#define RIC_RESIN1710_RESSEL	(RIC.unRESIN1710.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1710_PORTSEL	(RIC.unRESIN1710.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1711	(RIC.unRESIN1711.u16Register)  /*@rg@*/
#define RIC_RESIN1711_RESSEL	(RIC.unRESIN1711.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1711_PORTSEL	(RIC.unRESIN1711.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1712	(RIC.unRESIN1712.u16Register)  /*@rg@*/
#define RIC_RESIN1712_RESSEL	(RIC.unRESIN1712.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1712_PORTSEL	(RIC.unRESIN1712.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1713	(RIC.unRESIN1713.u16Register)  /*@rg@*/
#define RIC_RESIN1713_RESSEL	(RIC.unRESIN1713.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1713_PORTSEL	(RIC.unRESIN1713.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1714	(RIC.unRESIN1714.u16Register)  /*@rg@*/
#define RIC_RESIN1714_RESSEL	(RIC.unRESIN1714.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1714_PORTSEL	(RIC.unRESIN1714.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1715	(RIC.unRESIN1715.u16Register)  /*@rg@*/
#define RIC_RESIN1715_RESSEL	(RIC.unRESIN1715.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1715_PORTSEL	(RIC.unRESIN1715.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1716	(RIC.unRESIN1716.u16Register)  /*@rg@*/
#define RIC_RESIN1716_RESSEL	(RIC.unRESIN1716.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1716_PORTSEL	(RIC.unRESIN1716.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1717	(RIC.unRESIN1717.u16Register)  /*@rg@*/
#define RIC_RESIN1717_RESSEL	(RIC.unRESIN1717.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1717_PORTSEL	(RIC.unRESIN1717.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1718	(RIC.unRESIN1718.u16Register)  /*@rg@*/
#define RIC_RESIN1718_RESSEL	(RIC.unRESIN1718.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1718_PORTSEL	(RIC.unRESIN1718.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1719	(RIC.unRESIN1719.u16Register)  /*@rg@*/
#define RIC_RESIN1719_RESSEL	(RIC.unRESIN1719.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1719_PORTSEL	(RIC.unRESIN1719.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1720	(RIC.unRESIN1720.u16Register)  /*@rg@*/
#define RIC_RESIN1720_RESSEL	(RIC.unRESIN1720.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1720_PORTSEL	(RIC.unRESIN1720.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1721	(RIC.unRESIN1721.u16Register)  /*@rg@*/
#define RIC_RESIN1721_RESSEL	(RIC.unRESIN1721.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1721_PORTSEL	(RIC.unRESIN1721.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1722	(RIC.unRESIN1722.u16Register)  /*@rg@*/
#define RIC_RESIN1722_RESSEL	(RIC.unRESIN1722.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1722_PORTSEL	(RIC.unRESIN1722.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1723	(RIC.unRESIN1723.u16Register)  /*@rg@*/
#define RIC_RESIN1723_RESSEL	(RIC.unRESIN1723.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1723_PORTSEL	(RIC.unRESIN1723.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1724	(RIC.unRESIN1724.u16Register)  /*@rg@*/
#define RIC_RESIN1724_RESSEL	(RIC.unRESIN1724.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1724_PORTSEL	(RIC.unRESIN1724.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1725	(RIC.unRESIN1725.u16Register)  /*@rg@*/
#define RIC_RESIN1725_RESSEL	(RIC.unRESIN1725.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1725_PORTSEL	(RIC.unRESIN1725.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1726	(RIC.unRESIN1726.u16Register)  /*@rg@*/
#define RIC_RESIN1726_RESSEL	(RIC.unRESIN1726.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1726_PORTSEL	(RIC.unRESIN1726.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1727	(RIC.unRESIN1727.u16Register)  /*@rg@*/
#define RIC_RESIN1727_RESSEL	(RIC.unRESIN1727.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1727_PORTSEL	(RIC.unRESIN1727.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1728	(RIC.unRESIN1728.u16Register)  /*@rg@*/
#define RIC_RESIN1728_RESSEL	(RIC.unRESIN1728.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1728_PORTSEL	(RIC.unRESIN1728.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1729	(RIC.unRESIN1729.u16Register)  /*@rg@*/
#define RIC_RESIN1729_RESSEL	(RIC.unRESIN1729.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1729_PORTSEL	(RIC.unRESIN1729.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1730	(RIC.unRESIN1730.u16Register)  /*@rg@*/
#define RIC_RESIN1730_RESSEL	(RIC.unRESIN1730.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1730_PORTSEL	(RIC.unRESIN1730.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1731	(RIC.unRESIN1731.u16Register)  /*@rg@*/
#define RIC_RESIN1731_RESSEL	(RIC.unRESIN1731.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1731_PORTSEL	(RIC.unRESIN1731.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1732	(RIC.unRESIN1732.u16Register)  /*@rg@*/
#define RIC_RESIN1732_RESSEL	(RIC.unRESIN1732.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1732_PORTSEL	(RIC.unRESIN1732.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1733	(RIC.unRESIN1733.u16Register)  /*@rg@*/
#define RIC_RESIN1733_RESSEL	(RIC.unRESIN1733.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1733_PORTSEL	(RIC.unRESIN1733.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1734	(RIC.unRESIN1734.u16Register)  /*@rg@*/
#define RIC_RESIN1734_RESSEL	(RIC.unRESIN1734.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1734_PORTSEL	(RIC.unRESIN1734.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1735	(RIC.unRESIN1735.u16Register)  /*@rg@*/
#define RIC_RESIN1735_RESSEL	(RIC.unRESIN1735.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1735_PORTSEL	(RIC.unRESIN1735.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1736	(RIC.unRESIN1736.u16Register)  /*@rg@*/
#define RIC_RESIN1736_RESSEL	(RIC.unRESIN1736.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1736_PORTSEL	(RIC.unRESIN1736.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1737	(RIC.unRESIN1737.u16Register)  /*@rg@*/
#define RIC_RESIN1737_RESSEL	(RIC.unRESIN1737.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1737_PORTSEL	(RIC.unRESIN1737.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1738	(RIC.unRESIN1738.u16Register)  /*@rg@*/
#define RIC_RESIN1738_RESSEL	(RIC.unRESIN1738.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1738_PORTSEL	(RIC.unRESIN1738.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1739	(RIC.unRESIN1739.u16Register)  /*@rg@*/
#define RIC_RESIN1739_RESSEL	(RIC.unRESIN1739.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1739_PORTSEL	(RIC.unRESIN1739.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1740	(RIC.unRESIN1740.u16Register)  /*@rg@*/
#define RIC_RESIN1740_RESSEL	(RIC.unRESIN1740.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1740_PORTSEL	(RIC.unRESIN1740.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1741	(RIC.unRESIN1741.u16Register)  /*@rg@*/
#define RIC_RESIN1741_RESSEL	(RIC.unRESIN1741.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1741_PORTSEL	(RIC.unRESIN1741.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1742	(RIC.unRESIN1742.u16Register)  /*@rg@*/
#define RIC_RESIN1742_RESSEL	(RIC.unRESIN1742.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1742_PORTSEL	(RIC.unRESIN1742.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1743	(RIC.unRESIN1743.u16Register)  /*@rg@*/
#define RIC_RESIN1743_RESSEL	(RIC.unRESIN1743.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1743_PORTSEL	(RIC.unRESIN1743.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1744	(RIC.unRESIN1744.u16Register)  /*@rg@*/
#define RIC_RESIN1744_RESSEL	(RIC.unRESIN1744.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1744_PORTSEL	(RIC.unRESIN1744.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1745	(RIC.unRESIN1745.u16Register)  /*@rg@*/
#define RIC_RESIN1745_RESSEL	(RIC.unRESIN1745.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1745_PORTSEL	(RIC.unRESIN1745.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1746	(RIC.unRESIN1746.u16Register)  /*@rg@*/
#define RIC_RESIN1746_RESSEL	(RIC.unRESIN1746.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1746_PORTSEL	(RIC.unRESIN1746.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1747	(RIC.unRESIN1747.u16Register)  /*@rg@*/
#define RIC_RESIN1747_RESSEL	(RIC.unRESIN1747.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1747_PORTSEL	(RIC.unRESIN1747.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1748	(RIC.unRESIN1748.u16Register)  /*@rg@*/
#define RIC_RESIN1748_RESSEL	(RIC.unRESIN1748.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1748_PORTSEL	(RIC.unRESIN1748.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1749	(RIC.unRESIN1749.u16Register)  /*@rg@*/
#define RIC_RESIN1749_RESSEL	(RIC.unRESIN1749.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1749_PORTSEL	(RIC.unRESIN1749.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1750	(RIC.unRESIN1750.u16Register)  /*@rg@*/
#define RIC_RESIN1750_RESSEL	(RIC.unRESIN1750.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1750_PORTSEL	(RIC.unRESIN1750.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1751	(RIC.unRESIN1751.u16Register)  /*@rg@*/
#define RIC_RESIN1751_RESSEL	(RIC.unRESIN1751.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1751_PORTSEL	(RIC.unRESIN1751.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1752	(RIC.unRESIN1752.u16Register)  /*@rg@*/
#define RIC_RESIN1752_RESSEL	(RIC.unRESIN1752.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1752_PORTSEL	(RIC.unRESIN1752.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1753	(RIC.unRESIN1753.u16Register)  /*@rg@*/
#define RIC_RESIN1753_RESSEL	(RIC.unRESIN1753.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1753_PORTSEL	(RIC.unRESIN1753.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1754	(RIC.unRESIN1754.u16Register)  /*@rg@*/
#define RIC_RESIN1754_RESSEL	(RIC.unRESIN1754.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1754_PORTSEL	(RIC.unRESIN1754.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1755	(RIC.unRESIN1755.u16Register)  /*@rg@*/
#define RIC_RESIN1755_RESSEL	(RIC.unRESIN1755.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1755_PORTSEL	(RIC.unRESIN1755.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1756	(RIC.unRESIN1756.u16Register)  /*@rg@*/
#define RIC_RESIN1756_RESSEL	(RIC.unRESIN1756.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1756_PORTSEL	(RIC.unRESIN1756.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1757	(RIC.unRESIN1757.u16Register)  /*@rg@*/
#define RIC_RESIN1757_RESSEL	(RIC.unRESIN1757.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1757_PORTSEL	(RIC.unRESIN1757.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1758	(RIC.unRESIN1758.u16Register)  /*@rg@*/
#define RIC_RESIN1758_RESSEL	(RIC.unRESIN1758.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1758_PORTSEL	(RIC.unRESIN1758.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1759	(RIC.unRESIN1759.u16Register)  /*@rg@*/
#define RIC_RESIN1759_RESSEL	(RIC.unRESIN1759.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1759_PORTSEL	(RIC.unRESIN1759.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1760	(RIC.unRESIN1760.u16Register)  /*@rg@*/
#define RIC_RESIN1760_RESSEL	(RIC.unRESIN1760.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1760_PORTSEL	(RIC.unRESIN1760.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1761	(RIC.unRESIN1761.u16Register)  /*@rg@*/
#define RIC_RESIN1761_RESSEL	(RIC.unRESIN1761.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1761_PORTSEL	(RIC.unRESIN1761.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1762	(RIC.unRESIN1762.u16Register)  /*@rg@*/
#define RIC_RESIN1762_RESSEL	(RIC.unRESIN1762.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1762_PORTSEL	(RIC.unRESIN1762.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1763	(RIC.unRESIN1763.u16Register)  /*@rg@*/
#define RIC_RESIN1763_RESSEL	(RIC.unRESIN1763.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1763_PORTSEL	(RIC.unRESIN1763.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1764	(RIC.unRESIN1764.u16Register)  /*@rg@*/
#define RIC_RESIN1764_RESSEL	(RIC.unRESIN1764.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1764_PORTSEL	(RIC.unRESIN1764.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1765	(RIC.unRESIN1765.u16Register)  /*@rg@*/
#define RIC_RESIN1765_RESSEL	(RIC.unRESIN1765.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1765_PORTSEL	(RIC.unRESIN1765.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1766	(RIC.unRESIN1766.u16Register)  /*@rg@*/
#define RIC_RESIN1766_RESSEL	(RIC.unRESIN1766.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1766_PORTSEL	(RIC.unRESIN1766.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1767	(RIC.unRESIN1767.u16Register)  /*@rg@*/
#define RIC_RESIN1767_RESSEL	(RIC.unRESIN1767.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1767_PORTSEL	(RIC.unRESIN1767.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1768	(RIC.unRESIN1768.u16Register)  /*@rg@*/
#define RIC_RESIN1768_RESSEL	(RIC.unRESIN1768.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1768_PORTSEL	(RIC.unRESIN1768.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1769	(RIC.unRESIN1769.u16Register)  /*@rg@*/
#define RIC_RESIN1769_RESSEL	(RIC.unRESIN1769.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1769_PORTSEL	(RIC.unRESIN1769.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1770	(RIC.unRESIN1770.u16Register)  /*@rg@*/
#define RIC_RESIN1770_RESSEL	(RIC.unRESIN1770.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1770_PORTSEL	(RIC.unRESIN1770.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1771	(RIC.unRESIN1771.u16Register)  /*@rg@*/
#define RIC_RESIN1771_RESSEL	(RIC.unRESIN1771.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1771_PORTSEL	(RIC.unRESIN1771.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1772	(RIC.unRESIN1772.u16Register)  /*@rg@*/
#define RIC_RESIN1772_RESSEL	(RIC.unRESIN1772.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1772_PORTSEL	(RIC.unRESIN1772.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1773	(RIC.unRESIN1773.u16Register)  /*@rg@*/
#define RIC_RESIN1773_RESSEL	(RIC.unRESIN1773.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1773_PORTSEL	(RIC.unRESIN1773.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1774	(RIC.unRESIN1774.u16Register)  /*@rg@*/
#define RIC_RESIN1774_RESSEL	(RIC.unRESIN1774.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1774_PORTSEL	(RIC.unRESIN1774.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1775	(RIC.unRESIN1775.u16Register)  /*@rg@*/
#define RIC_RESIN1775_RESSEL	(RIC.unRESIN1775.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1775_PORTSEL	(RIC.unRESIN1775.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1776	(RIC.unRESIN1776.u16Register)  /*@rg@*/
#define RIC_RESIN1776_RESSEL	(RIC.unRESIN1776.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1776_PORTSEL	(RIC.unRESIN1776.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1777	(RIC.unRESIN1777.u16Register)  /*@rg@*/
#define RIC_RESIN1777_RESSEL	(RIC.unRESIN1777.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1777_PORTSEL	(RIC.unRESIN1777.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1778	(RIC.unRESIN1778.u16Register)  /*@rg@*/
#define RIC_RESIN1778_RESSEL	(RIC.unRESIN1778.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1778_PORTSEL	(RIC.unRESIN1778.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1779	(RIC.unRESIN1779.u16Register)  /*@rg@*/
#define RIC_RESIN1779_RESSEL	(RIC.unRESIN1779.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1779_PORTSEL	(RIC.unRESIN1779.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1780	(RIC.unRESIN1780.u16Register)  /*@rg@*/
#define RIC_RESIN1780_RESSEL	(RIC.unRESIN1780.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1780_PORTSEL	(RIC.unRESIN1780.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1781	(RIC.unRESIN1781.u16Register)  /*@rg@*/
#define RIC_RESIN1781_RESSEL	(RIC.unRESIN1781.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1781_PORTSEL	(RIC.unRESIN1781.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1782	(RIC.unRESIN1782.u16Register)  /*@rg@*/
#define RIC_RESIN1782_RESSEL	(RIC.unRESIN1782.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1782_PORTSEL	(RIC.unRESIN1782.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1783	(RIC.unRESIN1783.u16Register)  /*@rg@*/
#define RIC_RESIN1783_RESSEL	(RIC.unRESIN1783.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1783_PORTSEL	(RIC.unRESIN1783.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1784	(RIC.unRESIN1784.u16Register)  /*@rg@*/
#define RIC_RESIN1784_RESSEL	(RIC.unRESIN1784.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1784_PORTSEL	(RIC.unRESIN1784.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1785	(RIC.unRESIN1785.u16Register)  /*@rg@*/
#define RIC_RESIN1785_RESSEL	(RIC.unRESIN1785.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1785_PORTSEL	(RIC.unRESIN1785.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1786	(RIC.unRESIN1786.u16Register)  /*@rg@*/
#define RIC_RESIN1786_RESSEL	(RIC.unRESIN1786.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1786_PORTSEL	(RIC.unRESIN1786.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1787	(RIC.unRESIN1787.u16Register)  /*@rg@*/
#define RIC_RESIN1787_RESSEL	(RIC.unRESIN1787.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1787_PORTSEL	(RIC.unRESIN1787.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1788	(RIC.unRESIN1788.u16Register)  /*@rg@*/
#define RIC_RESIN1788_RESSEL	(RIC.unRESIN1788.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1788_PORTSEL	(RIC.unRESIN1788.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1789	(RIC.unRESIN1789.u16Register)  /*@rg@*/
#define RIC_RESIN1789_RESSEL	(RIC.unRESIN1789.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1789_PORTSEL	(RIC.unRESIN1789.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1790	(RIC.unRESIN1790.u16Register)  /*@rg@*/
#define RIC_RESIN1790_RESSEL	(RIC.unRESIN1790.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1790_PORTSEL	(RIC.unRESIN1790.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1791	(RIC.unRESIN1791.u16Register)  /*@rg@*/
#define RIC_RESIN1791_RESSEL	(RIC.unRESIN1791.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1791_PORTSEL	(RIC.unRESIN1791.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1792	(RIC.unRESIN1792.u16Register)  /*@rg@*/
#define RIC_RESIN1792_RESSEL	(RIC.unRESIN1792.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1792_PORTSEL	(RIC.unRESIN1792.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1793	(RIC.unRESIN1793.u16Register)  /*@rg@*/
#define RIC_RESIN1793_RESSEL	(RIC.unRESIN1793.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1793_PORTSEL	(RIC.unRESIN1793.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1794	(RIC.unRESIN1794.u16Register)  /*@rg@*/
#define RIC_RESIN1794_RESSEL	(RIC.unRESIN1794.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1794_PORTSEL	(RIC.unRESIN1794.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1795	(RIC.unRESIN1795.u16Register)  /*@rg@*/
#define RIC_RESIN1795_RESSEL	(RIC.unRESIN1795.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1795_PORTSEL	(RIC.unRESIN1795.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1796	(RIC.unRESIN1796.u16Register)  /*@rg@*/
#define RIC_RESIN1796_RESSEL	(RIC.unRESIN1796.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1796_PORTSEL	(RIC.unRESIN1796.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1797	(RIC.unRESIN1797.u16Register)  /*@rg@*/
#define RIC_RESIN1797_RESSEL	(RIC.unRESIN1797.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1797_PORTSEL	(RIC.unRESIN1797.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1798	(RIC.unRESIN1798.u16Register)  /*@rg@*/
#define RIC_RESIN1798_RESSEL	(RIC.unRESIN1798.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1798_PORTSEL	(RIC.unRESIN1798.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1799	(RIC.unRESIN1799.u16Register)  /*@rg@*/
#define RIC_RESIN1799_RESSEL	(RIC.unRESIN1799.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1799_PORTSEL	(RIC.unRESIN1799.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1800	(RIC.unRESIN1800.u16Register)  /*@rg@*/
#define RIC_RESIN1800_RESSEL	(RIC.unRESIN1800.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1800_PORTSEL	(RIC.unRESIN1800.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1801	(RIC.unRESIN1801.u16Register)  /*@rg@*/
#define RIC_RESIN1801_RESSEL	(RIC.unRESIN1801.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1801_PORTSEL	(RIC.unRESIN1801.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1802	(RIC.unRESIN1802.u16Register)  /*@rg@*/
#define RIC_RESIN1802_RESSEL	(RIC.unRESIN1802.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1802_PORTSEL	(RIC.unRESIN1802.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1803	(RIC.unRESIN1803.u16Register)  /*@rg@*/
#define RIC_RESIN1803_RESSEL	(RIC.unRESIN1803.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1803_PORTSEL	(RIC.unRESIN1803.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1804	(RIC.unRESIN1804.u16Register)  /*@rg@*/
#define RIC_RESIN1804_RESSEL	(RIC.unRESIN1804.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1804_PORTSEL	(RIC.unRESIN1804.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1805	(RIC.unRESIN1805.u16Register)  /*@rg@*/
#define RIC_RESIN1805_RESSEL	(RIC.unRESIN1805.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1805_PORTSEL	(RIC.unRESIN1805.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1806	(RIC.unRESIN1806.u16Register)  /*@rg@*/
#define RIC_RESIN1806_RESSEL	(RIC.unRESIN1806.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1806_PORTSEL	(RIC.unRESIN1806.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1807	(RIC.unRESIN1807.u16Register)  /*@rg@*/
#define RIC_RESIN1807_RESSEL	(RIC.unRESIN1807.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1807_PORTSEL	(RIC.unRESIN1807.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1808	(RIC.unRESIN1808.u16Register)  /*@rg@*/
#define RIC_RESIN1808_RESSEL	(RIC.unRESIN1808.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1808_PORTSEL	(RIC.unRESIN1808.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1809	(RIC.unRESIN1809.u16Register)  /*@rg@*/
#define RIC_RESIN1809_RESSEL	(RIC.unRESIN1809.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1809_PORTSEL	(RIC.unRESIN1809.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1810	(RIC.unRESIN1810.u16Register)  /*@rg@*/
#define RIC_RESIN1810_RESSEL	(RIC.unRESIN1810.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1810_PORTSEL	(RIC.unRESIN1810.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1811	(RIC.unRESIN1811.u16Register)  /*@rg@*/
#define RIC_RESIN1811_RESSEL	(RIC.unRESIN1811.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1811_PORTSEL	(RIC.unRESIN1811.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1812	(RIC.unRESIN1812.u16Register)  /*@rg@*/
#define RIC_RESIN1812_RESSEL	(RIC.unRESIN1812.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1812_PORTSEL	(RIC.unRESIN1812.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1813	(RIC.unRESIN1813.u16Register)  /*@rg@*/
#define RIC_RESIN1813_RESSEL	(RIC.unRESIN1813.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1813_PORTSEL	(RIC.unRESIN1813.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1814	(RIC.unRESIN1814.u16Register)  /*@rg@*/
#define RIC_RESIN1814_RESSEL	(RIC.unRESIN1814.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1814_PORTSEL	(RIC.unRESIN1814.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1815	(RIC.unRESIN1815.u16Register)  /*@rg@*/
#define RIC_RESIN1815_RESSEL	(RIC.unRESIN1815.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1815_PORTSEL	(RIC.unRESIN1815.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1816	(RIC.unRESIN1816.u16Register)  /*@rg@*/
#define RIC_RESIN1816_RESSEL	(RIC.unRESIN1816.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1816_PORTSEL	(RIC.unRESIN1816.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1817	(RIC.unRESIN1817.u16Register)  /*@rg@*/
#define RIC_RESIN1817_RESSEL	(RIC.unRESIN1817.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1817_PORTSEL	(RIC.unRESIN1817.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1818	(RIC.unRESIN1818.u16Register)  /*@rg@*/
#define RIC_RESIN1818_RESSEL	(RIC.unRESIN1818.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1818_PORTSEL	(RIC.unRESIN1818.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1819	(RIC.unRESIN1819.u16Register)  /*@rg@*/
#define RIC_RESIN1819_RESSEL	(RIC.unRESIN1819.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1819_PORTSEL	(RIC.unRESIN1819.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1820	(RIC.unRESIN1820.u16Register)  /*@rg@*/
#define RIC_RESIN1820_RESSEL	(RIC.unRESIN1820.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1820_PORTSEL	(RIC.unRESIN1820.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1821	(RIC.unRESIN1821.u16Register)  /*@rg@*/
#define RIC_RESIN1821_RESSEL	(RIC.unRESIN1821.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1821_PORTSEL	(RIC.unRESIN1821.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1822	(RIC.unRESIN1822.u16Register)  /*@rg@*/
#define RIC_RESIN1822_RESSEL	(RIC.unRESIN1822.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1822_PORTSEL	(RIC.unRESIN1822.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1823	(RIC.unRESIN1823.u16Register)  /*@rg@*/
#define RIC_RESIN1823_RESSEL	(RIC.unRESIN1823.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1823_PORTSEL	(RIC.unRESIN1823.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1824	(RIC.unRESIN1824.u16Register)  /*@rg@*/
#define RIC_RESIN1824_RESSEL	(RIC.unRESIN1824.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1824_PORTSEL	(RIC.unRESIN1824.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1825	(RIC.unRESIN1825.u16Register)  /*@rg@*/
#define RIC_RESIN1825_RESSEL	(RIC.unRESIN1825.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1825_PORTSEL	(RIC.unRESIN1825.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1826	(RIC.unRESIN1826.u16Register)  /*@rg@*/
#define RIC_RESIN1826_RESSEL	(RIC.unRESIN1826.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1826_PORTSEL	(RIC.unRESIN1826.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1827	(RIC.unRESIN1827.u16Register)  /*@rg@*/
#define RIC_RESIN1827_RESSEL	(RIC.unRESIN1827.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1827_PORTSEL	(RIC.unRESIN1827.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1828	(RIC.unRESIN1828.u16Register)  /*@rg@*/
#define RIC_RESIN1828_RESSEL	(RIC.unRESIN1828.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1828_PORTSEL	(RIC.unRESIN1828.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1829	(RIC.unRESIN1829.u16Register)  /*@rg@*/
#define RIC_RESIN1829_RESSEL	(RIC.unRESIN1829.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1829_PORTSEL	(RIC.unRESIN1829.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1830	(RIC.unRESIN1830.u16Register)  /*@rg@*/
#define RIC_RESIN1830_RESSEL	(RIC.unRESIN1830.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1830_PORTSEL	(RIC.unRESIN1830.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1831	(RIC.unRESIN1831.u16Register)  /*@rg@*/
#define RIC_RESIN1831_RESSEL	(RIC.unRESIN1831.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1831_PORTSEL	(RIC.unRESIN1831.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1832	(RIC.unRESIN1832.u16Register)  /*@rg@*/
#define RIC_RESIN1832_RESSEL	(RIC.unRESIN1832.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1832_PORTSEL	(RIC.unRESIN1832.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1833	(RIC.unRESIN1833.u16Register)  /*@rg@*/
#define RIC_RESIN1833_RESSEL	(RIC.unRESIN1833.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1833_PORTSEL	(RIC.unRESIN1833.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1834	(RIC.unRESIN1834.u16Register)  /*@rg@*/
#define RIC_RESIN1834_RESSEL	(RIC.unRESIN1834.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1834_PORTSEL	(RIC.unRESIN1834.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1835	(RIC.unRESIN1835.u16Register)  /*@rg@*/
#define RIC_RESIN1835_RESSEL	(RIC.unRESIN1835.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1835_PORTSEL	(RIC.unRESIN1835.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1836	(RIC.unRESIN1836.u16Register)  /*@rg@*/
#define RIC_RESIN1836_RESSEL	(RIC.unRESIN1836.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1836_PORTSEL	(RIC.unRESIN1836.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1837	(RIC.unRESIN1837.u16Register)  /*@rg@*/
#define RIC_RESIN1837_RESSEL	(RIC.unRESIN1837.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1837_PORTSEL	(RIC.unRESIN1837.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1838	(RIC.unRESIN1838.u16Register)  /*@rg@*/
#define RIC_RESIN1838_RESSEL	(RIC.unRESIN1838.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1838_PORTSEL	(RIC.unRESIN1838.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1839	(RIC.unRESIN1839.u16Register)  /*@rg@*/
#define RIC_RESIN1839_RESSEL	(RIC.unRESIN1839.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1839_PORTSEL	(RIC.unRESIN1839.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1840	(RIC.unRESIN1840.u16Register)  /*@rg@*/
#define RIC_RESIN1840_RESSEL	(RIC.unRESIN1840.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1840_PORTSEL	(RIC.unRESIN1840.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1841	(RIC.unRESIN1841.u16Register)  /*@rg@*/
#define RIC_RESIN1841_RESSEL	(RIC.unRESIN1841.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1841_PORTSEL	(RIC.unRESIN1841.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1842	(RIC.unRESIN1842.u16Register)  /*@rg@*/
#define RIC_RESIN1842_RESSEL	(RIC.unRESIN1842.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1842_PORTSEL	(RIC.unRESIN1842.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1843	(RIC.unRESIN1843.u16Register)  /*@rg@*/
#define RIC_RESIN1843_RESSEL	(RIC.unRESIN1843.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1843_PORTSEL	(RIC.unRESIN1843.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1844	(RIC.unRESIN1844.u16Register)  /*@rg@*/
#define RIC_RESIN1844_RESSEL	(RIC.unRESIN1844.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1844_PORTSEL	(RIC.unRESIN1844.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1845	(RIC.unRESIN1845.u16Register)  /*@rg@*/
#define RIC_RESIN1845_RESSEL	(RIC.unRESIN1845.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1845_PORTSEL	(RIC.unRESIN1845.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1846	(RIC.unRESIN1846.u16Register)  /*@rg@*/
#define RIC_RESIN1846_RESSEL	(RIC.unRESIN1846.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1846_PORTSEL	(RIC.unRESIN1846.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1847	(RIC.unRESIN1847.u16Register)  /*@rg@*/
#define RIC_RESIN1847_RESSEL	(RIC.unRESIN1847.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1847_PORTSEL	(RIC.unRESIN1847.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1848	(RIC.unRESIN1848.u16Register)  /*@rg@*/
#define RIC_RESIN1848_RESSEL	(RIC.unRESIN1848.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1848_PORTSEL	(RIC.unRESIN1848.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1849	(RIC.unRESIN1849.u16Register)  /*@rg@*/
#define RIC_RESIN1849_RESSEL	(RIC.unRESIN1849.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1849_PORTSEL	(RIC.unRESIN1849.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1850	(RIC.unRESIN1850.u16Register)  /*@rg@*/
#define RIC_RESIN1850_RESSEL	(RIC.unRESIN1850.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1850_PORTSEL	(RIC.unRESIN1850.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1851	(RIC.unRESIN1851.u16Register)  /*@rg@*/
#define RIC_RESIN1851_RESSEL	(RIC.unRESIN1851.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1851_PORTSEL	(RIC.unRESIN1851.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1852	(RIC.unRESIN1852.u16Register)  /*@rg@*/
#define RIC_RESIN1852_RESSEL	(RIC.unRESIN1852.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1852_PORTSEL	(RIC.unRESIN1852.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1853	(RIC.unRESIN1853.u16Register)  /*@rg@*/
#define RIC_RESIN1853_RESSEL	(RIC.unRESIN1853.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1853_PORTSEL	(RIC.unRESIN1853.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1854	(RIC.unRESIN1854.u16Register)  /*@rg@*/
#define RIC_RESIN1854_RESSEL	(RIC.unRESIN1854.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1854_PORTSEL	(RIC.unRESIN1854.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1855	(RIC.unRESIN1855.u16Register)  /*@rg@*/
#define RIC_RESIN1855_RESSEL	(RIC.unRESIN1855.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1855_PORTSEL	(RIC.unRESIN1855.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1856	(RIC.unRESIN1856.u16Register)  /*@rg@*/
#define RIC_RESIN1856_RESSEL	(RIC.unRESIN1856.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1856_PORTSEL	(RIC.unRESIN1856.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1857	(RIC.unRESIN1857.u16Register)  /*@rg@*/
#define RIC_RESIN1857_RESSEL	(RIC.unRESIN1857.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1857_PORTSEL	(RIC.unRESIN1857.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1858	(RIC.unRESIN1858.u16Register)  /*@rg@*/
#define RIC_RESIN1858_RESSEL	(RIC.unRESIN1858.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1858_PORTSEL	(RIC.unRESIN1858.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1859	(RIC.unRESIN1859.u16Register)  /*@rg@*/
#define RIC_RESIN1859_RESSEL	(RIC.unRESIN1859.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1859_PORTSEL	(RIC.unRESIN1859.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1860	(RIC.unRESIN1860.u16Register)  /*@rg@*/
#define RIC_RESIN1860_RESSEL	(RIC.unRESIN1860.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1860_PORTSEL	(RIC.unRESIN1860.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1861	(RIC.unRESIN1861.u16Register)  /*@rg@*/
#define RIC_RESIN1861_RESSEL	(RIC.unRESIN1861.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1861_PORTSEL	(RIC.unRESIN1861.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1862	(RIC.unRESIN1862.u16Register)  /*@rg@*/
#define RIC_RESIN1862_RESSEL	(RIC.unRESIN1862.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1862_PORTSEL	(RIC.unRESIN1862.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1863	(RIC.unRESIN1863.u16Register)  /*@rg@*/
#define RIC_RESIN1863_RESSEL	(RIC.unRESIN1863.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1863_PORTSEL	(RIC.unRESIN1863.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1864	(RIC.unRESIN1864.u16Register)  /*@rg@*/
#define RIC_RESIN1864_RESSEL	(RIC.unRESIN1864.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1864_PORTSEL	(RIC.unRESIN1864.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1865	(RIC.unRESIN1865.u16Register)  /*@rg@*/
#define RIC_RESIN1865_RESSEL	(RIC.unRESIN1865.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1865_PORTSEL	(RIC.unRESIN1865.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1866	(RIC.unRESIN1866.u16Register)  /*@rg@*/
#define RIC_RESIN1866_RESSEL	(RIC.unRESIN1866.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1866_PORTSEL	(RIC.unRESIN1866.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1867	(RIC.unRESIN1867.u16Register)  /*@rg@*/
#define RIC_RESIN1867_RESSEL	(RIC.unRESIN1867.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1867_PORTSEL	(RIC.unRESIN1867.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1868	(RIC.unRESIN1868.u16Register)  /*@rg@*/
#define RIC_RESIN1868_RESSEL	(RIC.unRESIN1868.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1868_PORTSEL	(RIC.unRESIN1868.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1869	(RIC.unRESIN1869.u16Register)  /*@rg@*/
#define RIC_RESIN1869_RESSEL	(RIC.unRESIN1869.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1869_PORTSEL	(RIC.unRESIN1869.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1870	(RIC.unRESIN1870.u16Register)  /*@rg@*/
#define RIC_RESIN1870_RESSEL	(RIC.unRESIN1870.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1870_PORTSEL	(RIC.unRESIN1870.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1871	(RIC.unRESIN1871.u16Register)  /*@rg@*/
#define RIC_RESIN1871_RESSEL	(RIC.unRESIN1871.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1871_PORTSEL	(RIC.unRESIN1871.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1872	(RIC.unRESIN1872.u16Register)  /*@rg@*/
#define RIC_RESIN1872_RESSEL	(RIC.unRESIN1872.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1872_PORTSEL	(RIC.unRESIN1872.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1873	(RIC.unRESIN1873.u16Register)  /*@rg@*/
#define RIC_RESIN1873_RESSEL	(RIC.unRESIN1873.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1873_PORTSEL	(RIC.unRESIN1873.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1874	(RIC.unRESIN1874.u16Register)  /*@rg@*/
#define RIC_RESIN1874_RESSEL	(RIC.unRESIN1874.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1874_PORTSEL	(RIC.unRESIN1874.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1875	(RIC.unRESIN1875.u16Register)  /*@rg@*/
#define RIC_RESIN1875_RESSEL	(RIC.unRESIN1875.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1875_PORTSEL	(RIC.unRESIN1875.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1876	(RIC.unRESIN1876.u16Register)  /*@rg@*/
#define RIC_RESIN1876_RESSEL	(RIC.unRESIN1876.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1876_PORTSEL	(RIC.unRESIN1876.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1877	(RIC.unRESIN1877.u16Register)  /*@rg@*/
#define RIC_RESIN1877_RESSEL	(RIC.unRESIN1877.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1877_PORTSEL	(RIC.unRESIN1877.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1878	(RIC.unRESIN1878.u16Register)  /*@rg@*/
#define RIC_RESIN1878_RESSEL	(RIC.unRESIN1878.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1878_PORTSEL	(RIC.unRESIN1878.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1879	(RIC.unRESIN1879.u16Register)  /*@rg@*/
#define RIC_RESIN1879_RESSEL	(RIC.unRESIN1879.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1879_PORTSEL	(RIC.unRESIN1879.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1880	(RIC.unRESIN1880.u16Register)  /*@rg@*/
#define RIC_RESIN1880_RESSEL	(RIC.unRESIN1880.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1880_PORTSEL	(RIC.unRESIN1880.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1881	(RIC.unRESIN1881.u16Register)  /*@rg@*/
#define RIC_RESIN1881_RESSEL	(RIC.unRESIN1881.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1881_PORTSEL	(RIC.unRESIN1881.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1882	(RIC.unRESIN1882.u16Register)  /*@rg@*/
#define RIC_RESIN1882_RESSEL	(RIC.unRESIN1882.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1882_PORTSEL	(RIC.unRESIN1882.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1883	(RIC.unRESIN1883.u16Register)  /*@rg@*/
#define RIC_RESIN1883_RESSEL	(RIC.unRESIN1883.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1883_PORTSEL	(RIC.unRESIN1883.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1884	(RIC.unRESIN1884.u16Register)  /*@rg@*/
#define RIC_RESIN1884_RESSEL	(RIC.unRESIN1884.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1884_PORTSEL	(RIC.unRESIN1884.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1885	(RIC.unRESIN1885.u16Register)  /*@rg@*/
#define RIC_RESIN1885_RESSEL	(RIC.unRESIN1885.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1885_PORTSEL	(RIC.unRESIN1885.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1886	(RIC.unRESIN1886.u16Register)  /*@rg@*/
#define RIC_RESIN1886_RESSEL	(RIC.unRESIN1886.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1886_PORTSEL	(RIC.unRESIN1886.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1887	(RIC.unRESIN1887.u16Register)  /*@rg@*/
#define RIC_RESIN1887_RESSEL	(RIC.unRESIN1887.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1887_PORTSEL	(RIC.unRESIN1887.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1888	(RIC.unRESIN1888.u16Register)  /*@rg@*/
#define RIC_RESIN1888_RESSEL	(RIC.unRESIN1888.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1888_PORTSEL	(RIC.unRESIN1888.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1889	(RIC.unRESIN1889.u16Register)  /*@rg@*/
#define RIC_RESIN1889_RESSEL	(RIC.unRESIN1889.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1889_PORTSEL	(RIC.unRESIN1889.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1890	(RIC.unRESIN1890.u16Register)  /*@rg@*/
#define RIC_RESIN1890_RESSEL	(RIC.unRESIN1890.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1890_PORTSEL	(RIC.unRESIN1890.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1891	(RIC.unRESIN1891.u16Register)  /*@rg@*/
#define RIC_RESIN1891_RESSEL	(RIC.unRESIN1891.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1891_PORTSEL	(RIC.unRESIN1891.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1892	(RIC.unRESIN1892.u16Register)  /*@rg@*/
#define RIC_RESIN1892_RESSEL	(RIC.unRESIN1892.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1892_PORTSEL	(RIC.unRESIN1892.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1893	(RIC.unRESIN1893.u16Register)  /*@rg@*/
#define RIC_RESIN1893_RESSEL	(RIC.unRESIN1893.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1893_PORTSEL	(RIC.unRESIN1893.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1894	(RIC.unRESIN1894.u16Register)  /*@rg@*/
#define RIC_RESIN1894_RESSEL	(RIC.unRESIN1894.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1894_PORTSEL	(RIC.unRESIN1894.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1895	(RIC.unRESIN1895.u16Register)  /*@rg@*/
#define RIC_RESIN1895_RESSEL	(RIC.unRESIN1895.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1895_PORTSEL	(RIC.unRESIN1895.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1896	(RIC.unRESIN1896.u16Register)  /*@rg@*/
#define RIC_RESIN1896_RESSEL	(RIC.unRESIN1896.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1896_PORTSEL	(RIC.unRESIN1896.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1897	(RIC.unRESIN1897.u16Register)  /*@rg@*/
#define RIC_RESIN1897_RESSEL	(RIC.unRESIN1897.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1897_PORTSEL	(RIC.unRESIN1897.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1898	(RIC.unRESIN1898.u16Register)  /*@rg@*/
#define RIC_RESIN1898_RESSEL	(RIC.unRESIN1898.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1898_PORTSEL	(RIC.unRESIN1898.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1899	(RIC.unRESIN1899.u16Register)  /*@rg@*/
#define RIC_RESIN1899_RESSEL	(RIC.unRESIN1899.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1899_PORTSEL	(RIC.unRESIN1899.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1900	(RIC.unRESIN1900.u16Register)  /*@rg@*/
#define RIC_RESIN1900_RESSEL	(RIC.unRESIN1900.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1900_PORTSEL	(RIC.unRESIN1900.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1901	(RIC.unRESIN1901.u16Register)  /*@rg@*/
#define RIC_RESIN1901_RESSEL	(RIC.unRESIN1901.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1901_PORTSEL	(RIC.unRESIN1901.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1902	(RIC.unRESIN1902.u16Register)  /*@rg@*/
#define RIC_RESIN1902_RESSEL	(RIC.unRESIN1902.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1902_PORTSEL	(RIC.unRESIN1902.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1903	(RIC.unRESIN1903.u16Register)  /*@rg@*/
#define RIC_RESIN1903_RESSEL	(RIC.unRESIN1903.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1903_PORTSEL	(RIC.unRESIN1903.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1904	(RIC.unRESIN1904.u16Register)  /*@rg@*/
#define RIC_RESIN1904_RESSEL	(RIC.unRESIN1904.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1904_PORTSEL	(RIC.unRESIN1904.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1905	(RIC.unRESIN1905.u16Register)  /*@rg@*/
#define RIC_RESIN1905_RESSEL	(RIC.unRESIN1905.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1905_PORTSEL	(RIC.unRESIN1905.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1906	(RIC.unRESIN1906.u16Register)  /*@rg@*/
#define RIC_RESIN1906_RESSEL	(RIC.unRESIN1906.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1906_PORTSEL	(RIC.unRESIN1906.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1907	(RIC.unRESIN1907.u16Register)  /*@rg@*/
#define RIC_RESIN1907_RESSEL	(RIC.unRESIN1907.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1907_PORTSEL	(RIC.unRESIN1907.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1908	(RIC.unRESIN1908.u16Register)  /*@rg@*/
#define RIC_RESIN1908_RESSEL	(RIC.unRESIN1908.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1908_PORTSEL	(RIC.unRESIN1908.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1909	(RIC.unRESIN1909.u16Register)  /*@rg@*/
#define RIC_RESIN1909_RESSEL	(RIC.unRESIN1909.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1909_PORTSEL	(RIC.unRESIN1909.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1910	(RIC.unRESIN1910.u16Register)  /*@rg@*/
#define RIC_RESIN1910_RESSEL	(RIC.unRESIN1910.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1910_PORTSEL	(RIC.unRESIN1910.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1911	(RIC.unRESIN1911.u16Register)  /*@rg@*/
#define RIC_RESIN1911_RESSEL	(RIC.unRESIN1911.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1911_PORTSEL	(RIC.unRESIN1911.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1912	(RIC.unRESIN1912.u16Register)  /*@rg@*/
#define RIC_RESIN1912_RESSEL	(RIC.unRESIN1912.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1912_PORTSEL	(RIC.unRESIN1912.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1913	(RIC.unRESIN1913.u16Register)  /*@rg@*/
#define RIC_RESIN1913_RESSEL	(RIC.unRESIN1913.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1913_PORTSEL	(RIC.unRESIN1913.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1914	(RIC.unRESIN1914.u16Register)  /*@rg@*/
#define RIC_RESIN1914_RESSEL	(RIC.unRESIN1914.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1914_PORTSEL	(RIC.unRESIN1914.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1915	(RIC.unRESIN1915.u16Register)  /*@rg@*/
#define RIC_RESIN1915_RESSEL	(RIC.unRESIN1915.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1915_PORTSEL	(RIC.unRESIN1915.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1916	(RIC.unRESIN1916.u16Register)  /*@rg@*/
#define RIC_RESIN1916_RESSEL	(RIC.unRESIN1916.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1916_PORTSEL	(RIC.unRESIN1916.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1917	(RIC.unRESIN1917.u16Register)  /*@rg@*/
#define RIC_RESIN1917_RESSEL	(RIC.unRESIN1917.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1917_PORTSEL	(RIC.unRESIN1917.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1918	(RIC.unRESIN1918.u16Register)  /*@rg@*/
#define RIC_RESIN1918_RESSEL	(RIC.unRESIN1918.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1918_PORTSEL	(RIC.unRESIN1918.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1919	(RIC.unRESIN1919.u16Register)  /*@rg@*/
#define RIC_RESIN1919_RESSEL	(RIC.unRESIN1919.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1919_PORTSEL	(RIC.unRESIN1919.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1920	(RIC.unRESIN1920.u16Register)  /*@rg@*/
#define RIC_RESIN1920_RESSEL	(RIC.unRESIN1920.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1920_PORTSEL	(RIC.unRESIN1920.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1921	(RIC.unRESIN1921.u16Register)  /*@rg@*/
#define RIC_RESIN1921_RESSEL	(RIC.unRESIN1921.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1921_PORTSEL	(RIC.unRESIN1921.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1922	(RIC.unRESIN1922.u16Register)  /*@rg@*/
#define RIC_RESIN1922_RESSEL	(RIC.unRESIN1922.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1922_PORTSEL	(RIC.unRESIN1922.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1923	(RIC.unRESIN1923.u16Register)  /*@rg@*/
#define RIC_RESIN1923_RESSEL	(RIC.unRESIN1923.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1923_PORTSEL	(RIC.unRESIN1923.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1924	(RIC.unRESIN1924.u16Register)  /*@rg@*/
#define RIC_RESIN1924_RESSEL	(RIC.unRESIN1924.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1924_PORTSEL	(RIC.unRESIN1924.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1925	(RIC.unRESIN1925.u16Register)  /*@rg@*/
#define RIC_RESIN1925_RESSEL	(RIC.unRESIN1925.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1925_PORTSEL	(RIC.unRESIN1925.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1926	(RIC.unRESIN1926.u16Register)  /*@rg@*/
#define RIC_RESIN1926_RESSEL	(RIC.unRESIN1926.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1926_PORTSEL	(RIC.unRESIN1926.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1927	(RIC.unRESIN1927.u16Register)  /*@rg@*/
#define RIC_RESIN1927_RESSEL	(RIC.unRESIN1927.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1927_PORTSEL	(RIC.unRESIN1927.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1928	(RIC.unRESIN1928.u16Register)  /*@rg@*/
#define RIC_RESIN1928_RESSEL	(RIC.unRESIN1928.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1928_PORTSEL	(RIC.unRESIN1928.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1929	(RIC.unRESIN1929.u16Register)  /*@rg@*/
#define RIC_RESIN1929_RESSEL	(RIC.unRESIN1929.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1929_PORTSEL	(RIC.unRESIN1929.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1930	(RIC.unRESIN1930.u16Register)  /*@rg@*/
#define RIC_RESIN1930_RESSEL	(RIC.unRESIN1930.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1930_PORTSEL	(RIC.unRESIN1930.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1931	(RIC.unRESIN1931.u16Register)  /*@rg@*/
#define RIC_RESIN1931_RESSEL	(RIC.unRESIN1931.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1931_PORTSEL	(RIC.unRESIN1931.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1932	(RIC.unRESIN1932.u16Register)  /*@rg@*/
#define RIC_RESIN1932_RESSEL	(RIC.unRESIN1932.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1932_PORTSEL	(RIC.unRESIN1932.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1933	(RIC.unRESIN1933.u16Register)  /*@rg@*/
#define RIC_RESIN1933_RESSEL	(RIC.unRESIN1933.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1933_PORTSEL	(RIC.unRESIN1933.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1934	(RIC.unRESIN1934.u16Register)  /*@rg@*/
#define RIC_RESIN1934_RESSEL	(RIC.unRESIN1934.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1934_PORTSEL	(RIC.unRESIN1934.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1935	(RIC.unRESIN1935.u16Register)  /*@rg@*/
#define RIC_RESIN1935_RESSEL	(RIC.unRESIN1935.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1935_PORTSEL	(RIC.unRESIN1935.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1936	(RIC.unRESIN1936.u16Register)  /*@rg@*/
#define RIC_RESIN1936_RESSEL	(RIC.unRESIN1936.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1936_PORTSEL	(RIC.unRESIN1936.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1937	(RIC.unRESIN1937.u16Register)  /*@rg@*/
#define RIC_RESIN1937_RESSEL	(RIC.unRESIN1937.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1937_PORTSEL	(RIC.unRESIN1937.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1938	(RIC.unRESIN1938.u16Register)  /*@rg@*/
#define RIC_RESIN1938_RESSEL	(RIC.unRESIN1938.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1938_PORTSEL	(RIC.unRESIN1938.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1939	(RIC.unRESIN1939.u16Register)  /*@rg@*/
#define RIC_RESIN1939_RESSEL	(RIC.unRESIN1939.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1939_PORTSEL	(RIC.unRESIN1939.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1940	(RIC.unRESIN1940.u16Register)  /*@rg@*/
#define RIC_RESIN1940_RESSEL	(RIC.unRESIN1940.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1940_PORTSEL	(RIC.unRESIN1940.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1941	(RIC.unRESIN1941.u16Register)  /*@rg@*/
#define RIC_RESIN1941_RESSEL	(RIC.unRESIN1941.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1941_PORTSEL	(RIC.unRESIN1941.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1942	(RIC.unRESIN1942.u16Register)  /*@rg@*/
#define RIC_RESIN1942_RESSEL	(RIC.unRESIN1942.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1942_PORTSEL	(RIC.unRESIN1942.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1943	(RIC.unRESIN1943.u16Register)  /*@rg@*/
#define RIC_RESIN1943_RESSEL	(RIC.unRESIN1943.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1943_PORTSEL	(RIC.unRESIN1943.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1944	(RIC.unRESIN1944.u16Register)  /*@rg@*/
#define RIC_RESIN1944_RESSEL	(RIC.unRESIN1944.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1944_PORTSEL	(RIC.unRESIN1944.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1945	(RIC.unRESIN1945.u16Register)  /*@rg@*/
#define RIC_RESIN1945_RESSEL	(RIC.unRESIN1945.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1945_PORTSEL	(RIC.unRESIN1945.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1946	(RIC.unRESIN1946.u16Register)  /*@rg@*/
#define RIC_RESIN1946_RESSEL	(RIC.unRESIN1946.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1946_PORTSEL	(RIC.unRESIN1946.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1947	(RIC.unRESIN1947.u16Register)  /*@rg@*/
#define RIC_RESIN1947_RESSEL	(RIC.unRESIN1947.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1947_PORTSEL	(RIC.unRESIN1947.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1948	(RIC.unRESIN1948.u16Register)  /*@rg@*/
#define RIC_RESIN1948_RESSEL	(RIC.unRESIN1948.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1948_PORTSEL	(RIC.unRESIN1948.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1949	(RIC.unRESIN1949.u16Register)  /*@rg@*/
#define RIC_RESIN1949_RESSEL	(RIC.unRESIN1949.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1949_PORTSEL	(RIC.unRESIN1949.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1950	(RIC.unRESIN1950.u16Register)  /*@rg@*/
#define RIC_RESIN1950_RESSEL	(RIC.unRESIN1950.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1950_PORTSEL	(RIC.unRESIN1950.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1951	(RIC.unRESIN1951.u16Register)  /*@rg@*/
#define RIC_RESIN1951_RESSEL	(RIC.unRESIN1951.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1951_PORTSEL	(RIC.unRESIN1951.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1952	(RIC.unRESIN1952.u16Register)  /*@rg@*/
#define RIC_RESIN1952_RESSEL	(RIC.unRESIN1952.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1952_PORTSEL	(RIC.unRESIN1952.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1953	(RIC.unRESIN1953.u16Register)  /*@rg@*/
#define RIC_RESIN1953_RESSEL	(RIC.unRESIN1953.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1953_PORTSEL	(RIC.unRESIN1953.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1954	(RIC.unRESIN1954.u16Register)  /*@rg@*/
#define RIC_RESIN1954_RESSEL	(RIC.unRESIN1954.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1954_PORTSEL	(RIC.unRESIN1954.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1955	(RIC.unRESIN1955.u16Register)  /*@rg@*/
#define RIC_RESIN1955_RESSEL	(RIC.unRESIN1955.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1955_PORTSEL	(RIC.unRESIN1955.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1956	(RIC.unRESIN1956.u16Register)  /*@rg@*/
#define RIC_RESIN1956_RESSEL	(RIC.unRESIN1956.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1956_PORTSEL	(RIC.unRESIN1956.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1957	(RIC.unRESIN1957.u16Register)  /*@rg@*/
#define RIC_RESIN1957_RESSEL	(RIC.unRESIN1957.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1957_PORTSEL	(RIC.unRESIN1957.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1958	(RIC.unRESIN1958.u16Register)  /*@rg@*/
#define RIC_RESIN1958_RESSEL	(RIC.unRESIN1958.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1958_PORTSEL	(RIC.unRESIN1958.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1959	(RIC.unRESIN1959.u16Register)  /*@rg@*/
#define RIC_RESIN1959_RESSEL	(RIC.unRESIN1959.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1959_PORTSEL	(RIC.unRESIN1959.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1960	(RIC.unRESIN1960.u16Register)  /*@rg@*/
#define RIC_RESIN1960_RESSEL	(RIC.unRESIN1960.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1960_PORTSEL	(RIC.unRESIN1960.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1961	(RIC.unRESIN1961.u16Register)  /*@rg@*/
#define RIC_RESIN1961_RESSEL	(RIC.unRESIN1961.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1961_PORTSEL	(RIC.unRESIN1961.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1962	(RIC.unRESIN1962.u16Register)  /*@rg@*/
#define RIC_RESIN1962_RESSEL	(RIC.unRESIN1962.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1962_PORTSEL	(RIC.unRESIN1962.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1963	(RIC.unRESIN1963.u16Register)  /*@rg@*/
#define RIC_RESIN1963_RESSEL	(RIC.unRESIN1963.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1963_PORTSEL	(RIC.unRESIN1963.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1964	(RIC.unRESIN1964.u16Register)  /*@rg@*/
#define RIC_RESIN1964_RESSEL	(RIC.unRESIN1964.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1964_PORTSEL	(RIC.unRESIN1964.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1965	(RIC.unRESIN1965.u16Register)  /*@rg@*/
#define RIC_RESIN1965_RESSEL	(RIC.unRESIN1965.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1965_PORTSEL	(RIC.unRESIN1965.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1966	(RIC.unRESIN1966.u16Register)  /*@rg@*/
#define RIC_RESIN1966_RESSEL	(RIC.unRESIN1966.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1966_PORTSEL	(RIC.unRESIN1966.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1967	(RIC.unRESIN1967.u16Register)  /*@rg@*/
#define RIC_RESIN1967_RESSEL	(RIC.unRESIN1967.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1967_PORTSEL	(RIC.unRESIN1967.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1968	(RIC.unRESIN1968.u16Register)  /*@rg@*/
#define RIC_RESIN1968_RESSEL	(RIC.unRESIN1968.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1968_PORTSEL	(RIC.unRESIN1968.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1969	(RIC.unRESIN1969.u16Register)  /*@rg@*/
#define RIC_RESIN1969_RESSEL	(RIC.unRESIN1969.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1969_PORTSEL	(RIC.unRESIN1969.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1970	(RIC.unRESIN1970.u16Register)  /*@rg@*/
#define RIC_RESIN1970_RESSEL	(RIC.unRESIN1970.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1970_PORTSEL	(RIC.unRESIN1970.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1971	(RIC.unRESIN1971.u16Register)  /*@rg@*/
#define RIC_RESIN1971_RESSEL	(RIC.unRESIN1971.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1971_PORTSEL	(RIC.unRESIN1971.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1972	(RIC.unRESIN1972.u16Register)  /*@rg@*/
#define RIC_RESIN1972_RESSEL	(RIC.unRESIN1972.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1972_PORTSEL	(RIC.unRESIN1972.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1973	(RIC.unRESIN1973.u16Register)  /*@rg@*/
#define RIC_RESIN1973_RESSEL	(RIC.unRESIN1973.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1973_PORTSEL	(RIC.unRESIN1973.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1974	(RIC.unRESIN1974.u16Register)  /*@rg@*/
#define RIC_RESIN1974_RESSEL	(RIC.unRESIN1974.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1974_PORTSEL	(RIC.unRESIN1974.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1975	(RIC.unRESIN1975.u16Register)  /*@rg@*/
#define RIC_RESIN1975_RESSEL	(RIC.unRESIN1975.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1975_PORTSEL	(RIC.unRESIN1975.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1976	(RIC.unRESIN1976.u16Register)  /*@rg@*/
#define RIC_RESIN1976_RESSEL	(RIC.unRESIN1976.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1976_PORTSEL	(RIC.unRESIN1976.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1977	(RIC.unRESIN1977.u16Register)  /*@rg@*/
#define RIC_RESIN1977_RESSEL	(RIC.unRESIN1977.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1977_PORTSEL	(RIC.unRESIN1977.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1978	(RIC.unRESIN1978.u16Register)  /*@rg@*/
#define RIC_RESIN1978_RESSEL	(RIC.unRESIN1978.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1978_PORTSEL	(RIC.unRESIN1978.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1979	(RIC.unRESIN1979.u16Register)  /*@rg@*/
#define RIC_RESIN1979_RESSEL	(RIC.unRESIN1979.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1979_PORTSEL	(RIC.unRESIN1979.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1980	(RIC.unRESIN1980.u16Register)  /*@rg@*/
#define RIC_RESIN1980_RESSEL	(RIC.unRESIN1980.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1980_PORTSEL	(RIC.unRESIN1980.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1981	(RIC.unRESIN1981.u16Register)  /*@rg@*/
#define RIC_RESIN1981_RESSEL	(RIC.unRESIN1981.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1981_PORTSEL	(RIC.unRESIN1981.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1982	(RIC.unRESIN1982.u16Register)  /*@rg@*/
#define RIC_RESIN1982_RESSEL	(RIC.unRESIN1982.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1982_PORTSEL	(RIC.unRESIN1982.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1983	(RIC.unRESIN1983.u16Register)  /*@rg@*/
#define RIC_RESIN1983_RESSEL	(RIC.unRESIN1983.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1983_PORTSEL	(RIC.unRESIN1983.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1984	(RIC.unRESIN1984.u16Register)  /*@rg@*/
#define RIC_RESIN1984_RESSEL	(RIC.unRESIN1984.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1984_PORTSEL	(RIC.unRESIN1984.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1985	(RIC.unRESIN1985.u16Register)  /*@rg@*/
#define RIC_RESIN1985_RESSEL	(RIC.unRESIN1985.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1985_PORTSEL	(RIC.unRESIN1985.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1986	(RIC.unRESIN1986.u16Register)  /*@rg@*/
#define RIC_RESIN1986_RESSEL	(RIC.unRESIN1986.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1986_PORTSEL	(RIC.unRESIN1986.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1987	(RIC.unRESIN1987.u16Register)  /*@rg@*/
#define RIC_RESIN1987_RESSEL	(RIC.unRESIN1987.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1987_PORTSEL	(RIC.unRESIN1987.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1988	(RIC.unRESIN1988.u16Register)  /*@rg@*/
#define RIC_RESIN1988_RESSEL	(RIC.unRESIN1988.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1988_PORTSEL	(RIC.unRESIN1988.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1989	(RIC.unRESIN1989.u16Register)  /*@rg@*/
#define RIC_RESIN1989_RESSEL	(RIC.unRESIN1989.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1989_PORTSEL	(RIC.unRESIN1989.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1990	(RIC.unRESIN1990.u16Register)  /*@rg@*/
#define RIC_RESIN1990_RESSEL	(RIC.unRESIN1990.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1990_PORTSEL	(RIC.unRESIN1990.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1991	(RIC.unRESIN1991.u16Register)  /*@rg@*/
#define RIC_RESIN1991_RESSEL	(RIC.unRESIN1991.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1991_PORTSEL	(RIC.unRESIN1991.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1992	(RIC.unRESIN1992.u16Register)  /*@rg@*/
#define RIC_RESIN1992_RESSEL	(RIC.unRESIN1992.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1992_PORTSEL	(RIC.unRESIN1992.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1993	(RIC.unRESIN1993.u16Register)  /*@rg@*/
#define RIC_RESIN1993_RESSEL	(RIC.unRESIN1993.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1993_PORTSEL	(RIC.unRESIN1993.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1994	(RIC.unRESIN1994.u16Register)  /*@rg@*/
#define RIC_RESIN1994_RESSEL	(RIC.unRESIN1994.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1994_PORTSEL	(RIC.unRESIN1994.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1995	(RIC.unRESIN1995.u16Register)  /*@rg@*/
#define RIC_RESIN1995_RESSEL	(RIC.unRESIN1995.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1995_PORTSEL	(RIC.unRESIN1995.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1996	(RIC.unRESIN1996.u16Register)  /*@rg@*/
#define RIC_RESIN1996_RESSEL	(RIC.unRESIN1996.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1996_PORTSEL	(RIC.unRESIN1996.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1997	(RIC.unRESIN1997.u16Register)  /*@rg@*/
#define RIC_RESIN1997_RESSEL	(RIC.unRESIN1997.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1997_PORTSEL	(RIC.unRESIN1997.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1998	(RIC.unRESIN1998.u16Register)  /*@rg@*/
#define RIC_RESIN1998_RESSEL	(RIC.unRESIN1998.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1998_PORTSEL	(RIC.unRESIN1998.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN1999	(RIC.unRESIN1999.u16Register)  /*@rg@*/
#define RIC_RESIN1999_RESSEL	(RIC.unRESIN1999.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN1999_PORTSEL	(RIC.unRESIN1999.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2000	(RIC.unRESIN2000.u16Register)  /*@rg@*/
#define RIC_RESIN2000_RESSEL	(RIC.unRESIN2000.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2000_PORTSEL	(RIC.unRESIN2000.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2001	(RIC.unRESIN2001.u16Register)  /*@rg@*/
#define RIC_RESIN2001_RESSEL	(RIC.unRESIN2001.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2001_PORTSEL	(RIC.unRESIN2001.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2002	(RIC.unRESIN2002.u16Register)  /*@rg@*/
#define RIC_RESIN2002_RESSEL	(RIC.unRESIN2002.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2002_PORTSEL	(RIC.unRESIN2002.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2003	(RIC.unRESIN2003.u16Register)  /*@rg@*/
#define RIC_RESIN2003_RESSEL	(RIC.unRESIN2003.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2003_PORTSEL	(RIC.unRESIN2003.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2004	(RIC.unRESIN2004.u16Register)  /*@rg@*/
#define RIC_RESIN2004_RESSEL	(RIC.unRESIN2004.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2004_PORTSEL	(RIC.unRESIN2004.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2005	(RIC.unRESIN2005.u16Register)  /*@rg@*/
#define RIC_RESIN2005_RESSEL	(RIC.unRESIN2005.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2005_PORTSEL	(RIC.unRESIN2005.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2006	(RIC.unRESIN2006.u16Register)  /*@rg@*/
#define RIC_RESIN2006_RESSEL	(RIC.unRESIN2006.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2006_PORTSEL	(RIC.unRESIN2006.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2007	(RIC.unRESIN2007.u16Register)  /*@rg@*/
#define RIC_RESIN2007_RESSEL	(RIC.unRESIN2007.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2007_PORTSEL	(RIC.unRESIN2007.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2008	(RIC.unRESIN2008.u16Register)  /*@rg@*/
#define RIC_RESIN2008_RESSEL	(RIC.unRESIN2008.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2008_PORTSEL	(RIC.unRESIN2008.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2009	(RIC.unRESIN2009.u16Register)  /*@rg@*/
#define RIC_RESIN2009_RESSEL	(RIC.unRESIN2009.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2009_PORTSEL	(RIC.unRESIN2009.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2010	(RIC.unRESIN2010.u16Register)  /*@rg@*/
#define RIC_RESIN2010_RESSEL	(RIC.unRESIN2010.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2010_PORTSEL	(RIC.unRESIN2010.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2011	(RIC.unRESIN2011.u16Register)  /*@rg@*/
#define RIC_RESIN2011_RESSEL	(RIC.unRESIN2011.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2011_PORTSEL	(RIC.unRESIN2011.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2012	(RIC.unRESIN2012.u16Register)  /*@rg@*/
#define RIC_RESIN2012_RESSEL	(RIC.unRESIN2012.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2012_PORTSEL	(RIC.unRESIN2012.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2013	(RIC.unRESIN2013.u16Register)  /*@rg@*/
#define RIC_RESIN2013_RESSEL	(RIC.unRESIN2013.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2013_PORTSEL	(RIC.unRESIN2013.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2014	(RIC.unRESIN2014.u16Register)  /*@rg@*/
#define RIC_RESIN2014_RESSEL	(RIC.unRESIN2014.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2014_PORTSEL	(RIC.unRESIN2014.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2015	(RIC.unRESIN2015.u16Register)  /*@rg@*/
#define RIC_RESIN2015_RESSEL	(RIC.unRESIN2015.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2015_PORTSEL	(RIC.unRESIN2015.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2016	(RIC.unRESIN2016.u16Register)  /*@rg@*/
#define RIC_RESIN2016_RESSEL	(RIC.unRESIN2016.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2016_PORTSEL	(RIC.unRESIN2016.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2017	(RIC.unRESIN2017.u16Register)  /*@rg@*/
#define RIC_RESIN2017_RESSEL	(RIC.unRESIN2017.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2017_PORTSEL	(RIC.unRESIN2017.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2018	(RIC.unRESIN2018.u16Register)  /*@rg@*/
#define RIC_RESIN2018_RESSEL	(RIC.unRESIN2018.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2018_PORTSEL	(RIC.unRESIN2018.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2019	(RIC.unRESIN2019.u16Register)  /*@rg@*/
#define RIC_RESIN2019_RESSEL	(RIC.unRESIN2019.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2019_PORTSEL	(RIC.unRESIN2019.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2020	(RIC.unRESIN2020.u16Register)  /*@rg@*/
#define RIC_RESIN2020_RESSEL	(RIC.unRESIN2020.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2020_PORTSEL	(RIC.unRESIN2020.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2021	(RIC.unRESIN2021.u16Register)  /*@rg@*/
#define RIC_RESIN2021_RESSEL	(RIC.unRESIN2021.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2021_PORTSEL	(RIC.unRESIN2021.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2022	(RIC.unRESIN2022.u16Register)  /*@rg@*/
#define RIC_RESIN2022_RESSEL	(RIC.unRESIN2022.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2022_PORTSEL	(RIC.unRESIN2022.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2023	(RIC.unRESIN2023.u16Register)  /*@rg@*/
#define RIC_RESIN2023_RESSEL	(RIC.unRESIN2023.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2023_PORTSEL	(RIC.unRESIN2023.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2024	(RIC.unRESIN2024.u16Register)  /*@rg@*/
#define RIC_RESIN2024_RESSEL	(RIC.unRESIN2024.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2024_PORTSEL	(RIC.unRESIN2024.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2025	(RIC.unRESIN2025.u16Register)  /*@rg@*/
#define RIC_RESIN2025_RESSEL	(RIC.unRESIN2025.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2025_PORTSEL	(RIC.unRESIN2025.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2026	(RIC.unRESIN2026.u16Register)  /*@rg@*/
#define RIC_RESIN2026_RESSEL	(RIC.unRESIN2026.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2026_PORTSEL	(RIC.unRESIN2026.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2027	(RIC.unRESIN2027.u16Register)  /*@rg@*/
#define RIC_RESIN2027_RESSEL	(RIC.unRESIN2027.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2027_PORTSEL	(RIC.unRESIN2027.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2028	(RIC.unRESIN2028.u16Register)  /*@rg@*/
#define RIC_RESIN2028_RESSEL	(RIC.unRESIN2028.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2028_PORTSEL	(RIC.unRESIN2028.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2029	(RIC.unRESIN2029.u16Register)  /*@rg@*/
#define RIC_RESIN2029_RESSEL	(RIC.unRESIN2029.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2029_PORTSEL	(RIC.unRESIN2029.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2030	(RIC.unRESIN2030.u16Register)  /*@rg@*/
#define RIC_RESIN2030_RESSEL	(RIC.unRESIN2030.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2030_PORTSEL	(RIC.unRESIN2030.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2031	(RIC.unRESIN2031.u16Register)  /*@rg@*/
#define RIC_RESIN2031_RESSEL	(RIC.unRESIN2031.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2031_PORTSEL	(RIC.unRESIN2031.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2032	(RIC.unRESIN2032.u16Register)  /*@rg@*/
#define RIC_RESIN2032_RESSEL	(RIC.unRESIN2032.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2032_PORTSEL	(RIC.unRESIN2032.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2033	(RIC.unRESIN2033.u16Register)  /*@rg@*/
#define RIC_RESIN2033_RESSEL	(RIC.unRESIN2033.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2033_PORTSEL	(RIC.unRESIN2033.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2034	(RIC.unRESIN2034.u16Register)  /*@rg@*/
#define RIC_RESIN2034_RESSEL	(RIC.unRESIN2034.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2034_PORTSEL	(RIC.unRESIN2034.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2035	(RIC.unRESIN2035.u16Register)  /*@rg@*/
#define RIC_RESIN2035_RESSEL	(RIC.unRESIN2035.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2035_PORTSEL	(RIC.unRESIN2035.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2036	(RIC.unRESIN2036.u16Register)  /*@rg@*/
#define RIC_RESIN2036_RESSEL	(RIC.unRESIN2036.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2036_PORTSEL	(RIC.unRESIN2036.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2037	(RIC.unRESIN2037.u16Register)  /*@rg@*/
#define RIC_RESIN2037_RESSEL	(RIC.unRESIN2037.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2037_PORTSEL	(RIC.unRESIN2037.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2038	(RIC.unRESIN2038.u16Register)  /*@rg@*/
#define RIC_RESIN2038_RESSEL	(RIC.unRESIN2038.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2038_PORTSEL	(RIC.unRESIN2038.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2039	(RIC.unRESIN2039.u16Register)  /*@rg@*/
#define RIC_RESIN2039_RESSEL	(RIC.unRESIN2039.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2039_PORTSEL	(RIC.unRESIN2039.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2040	(RIC.unRESIN2040.u16Register)  /*@rg@*/
#define RIC_RESIN2040_RESSEL	(RIC.unRESIN2040.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2040_PORTSEL	(RIC.unRESIN2040.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2041	(RIC.unRESIN2041.u16Register)  /*@rg@*/
#define RIC_RESIN2041_RESSEL	(RIC.unRESIN2041.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2041_PORTSEL	(RIC.unRESIN2041.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2042	(RIC.unRESIN2042.u16Register)  /*@rg@*/
#define RIC_RESIN2042_RESSEL	(RIC.unRESIN2042.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2042_PORTSEL	(RIC.unRESIN2042.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2043	(RIC.unRESIN2043.u16Register)  /*@rg@*/
#define RIC_RESIN2043_RESSEL	(RIC.unRESIN2043.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2043_PORTSEL	(RIC.unRESIN2043.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2044	(RIC.unRESIN2044.u16Register)  /*@rg@*/
#define RIC_RESIN2044_RESSEL	(RIC.unRESIN2044.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2044_PORTSEL	(RIC.unRESIN2044.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2045	(RIC.unRESIN2045.u16Register)  /*@rg@*/
#define RIC_RESIN2045_RESSEL	(RIC.unRESIN2045.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2045_PORTSEL	(RIC.unRESIN2045.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2046	(RIC.unRESIN2046.u16Register)  /*@rg@*/
#define RIC_RESIN2046_RESSEL	(RIC.unRESIN2046.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2046_PORTSEL	(RIC.unRESIN2046.stcField.u4PORTSEL)  /*@bf@*/

#define RIC_RESIN2047	(RIC.unRESIN2047.u16Register)  /*@rg@*/
#define RIC_RESIN2047_RESSEL	(RIC.unRESIN2047.stcField.u4RESSEL)  /*@bf@*/
#define RIC_RESIN2047_PORTSEL	(RIC.unRESIN2047.stcField.u4PORTSEL)  /*@bf@*/

typedef struct stc_ric_resinn_field{
    uint_io16_t		u4RESSEL:4;
    uint_io16_t		:4;
    uint_io16_t		u4PORTSEL:4;
    uint_io16_t		:4;
}stc_ric_resinn_field_t;

typedef union un_ric_resinn{
    uint_io16_t		u16Register;
    stc_ric_resinn_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_ric_resinn_t;

/* KEYCDR */
#define RIC_KEYCDR	(RIC.unKEYCDR.u32Register)  /*@rg@*/

typedef union un_ric_keycdr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ric_keycdr_t;


typedef struct stc_ric{
    un_ric_resinn_t	unRESIN0;	/* 0x00000000 */
    un_ric_resinn_t	unRESIN1;	/* 0x00000002 */
    un_ric_resinn_t	unRESIN2;	/* 0x00000004 */
    un_ric_resinn_t	unRESIN3;	/* 0x00000006 */
    un_ric_resinn_t	unRESIN4;	/* 0x00000008 */
    un_ric_resinn_t	unRESIN5;	/* 0x0000000A */
    un_ric_resinn_t	unRESIN6;	/* 0x0000000C */
    un_ric_resinn_t	unRESIN7;	/* 0x0000000E */
    un_ric_resinn_t	unRESIN8;	/* 0x00000010 */
    un_ric_resinn_t	unRESIN9;	/* 0x00000012 */
    un_ric_resinn_t	unRESIN10;	/* 0x00000014 */
    un_ric_resinn_t	unRESIN11;	/* 0x00000016 */
    un_ric_resinn_t	unRESIN12;	/* 0x00000018 */
    un_ric_resinn_t	unRESIN13;	/* 0x0000001A */
    un_ric_resinn_t	unRESIN14;	/* 0x0000001C */
    un_ric_resinn_t	unRESIN15;	/* 0x0000001E */
    un_ric_resinn_t	unRESIN16;	/* 0x00000020 */
    un_ric_resinn_t	unRESIN17;	/* 0x00000022 */
    un_ric_resinn_t	unRESIN18;	/* 0x00000024 */
    un_ric_resinn_t	unRESIN19;	/* 0x00000026 */
    un_ric_resinn_t	unRESIN20;	/* 0x00000028 */
    un_ric_resinn_t	unRESIN21;	/* 0x0000002A */
    un_ric_resinn_t	unRESIN22;	/* 0x0000002C */
    un_ric_resinn_t	unRESIN23;	/* 0x0000002E */
    un_ric_resinn_t	unRESIN24;	/* 0x00000030 */
    un_ric_resinn_t	unRESIN25;	/* 0x00000032 */
    un_ric_resinn_t	unRESIN26;	/* 0x00000034 */
    un_ric_resinn_t	unRESIN27;	/* 0x00000036 */
    un_ric_resinn_t	unRESIN28;	/* 0x00000038 */
    un_ric_resinn_t	unRESIN29;	/* 0x0000003A */
    un_ric_resinn_t	unRESIN30;	/* 0x0000003C */
    un_ric_resinn_t	unRESIN31;	/* 0x0000003E */
    un_ric_resinn_t	unRESIN32;	/* 0x00000040 */
    un_ric_resinn_t	unRESIN33;	/* 0x00000042 */
    un_ric_resinn_t	unRESIN34;	/* 0x00000044 */
    un_ric_resinn_t	unRESIN35;	/* 0x00000046 */
    un_ric_resinn_t	unRESIN36;	/* 0x00000048 */
    un_ric_resinn_t	unRESIN37;	/* 0x0000004A */
    un_ric_resinn_t	unRESIN38;	/* 0x0000004C */
    un_ric_resinn_t	unRESIN39;	/* 0x0000004E */
    un_ric_resinn_t	unRESIN40;	/* 0x00000050 */
    un_ric_resinn_t	unRESIN41;	/* 0x00000052 */
    un_ric_resinn_t	unRESIN42;	/* 0x00000054 */
    un_ric_resinn_t	unRESIN43;	/* 0x00000056 */
    un_ric_resinn_t	unRESIN44;	/* 0x00000058 */
    un_ric_resinn_t	unRESIN45;	/* 0x0000005A */
    un_ric_resinn_t	unRESIN46;	/* 0x0000005C */
    un_ric_resinn_t	unRESIN47;	/* 0x0000005E */
    un_ric_resinn_t	unRESIN48;	/* 0x00000060 */
    un_ric_resinn_t	unRESIN49;	/* 0x00000062 */
    un_ric_resinn_t	unRESIN50;	/* 0x00000064 */
    un_ric_resinn_t	unRESIN51;	/* 0x00000066 */
    un_ric_resinn_t	unRESIN52;	/* 0x00000068 */
    un_ric_resinn_t	unRESIN53;	/* 0x0000006A */
    un_ric_resinn_t	unRESIN54;	/* 0x0000006C */
    un_ric_resinn_t	unRESIN55;	/* 0x0000006E */
    un_ric_resinn_t	unRESIN56;	/* 0x00000070 */
    un_ric_resinn_t	unRESIN57;	/* 0x00000072 */
    un_ric_resinn_t	unRESIN58;	/* 0x00000074 */
    un_ric_resinn_t	unRESIN59;	/* 0x00000076 */
    un_ric_resinn_t	unRESIN60;	/* 0x00000078 */
    un_ric_resinn_t	unRESIN61;	/* 0x0000007A */
    un_ric_resinn_t	unRESIN62;	/* 0x0000007C */
    un_ric_resinn_t	unRESIN63;	/* 0x0000007E */
    un_ric_resinn_t	unRESIN64;	/* 0x00000080 */
    un_ric_resinn_t	unRESIN65;	/* 0x00000082 */
    un_ric_resinn_t	unRESIN66;	/* 0x00000084 */
    un_ric_resinn_t	unRESIN67;	/* 0x00000086 */
    un_ric_resinn_t	unRESIN68;	/* 0x00000088 */
    un_ric_resinn_t	unRESIN69;	/* 0x0000008A */
    un_ric_resinn_t	unRESIN70;	/* 0x0000008C */
    un_ric_resinn_t	unRESIN71;	/* 0x0000008E */
    un_ric_resinn_t	unRESIN72;	/* 0x00000090 */
    un_ric_resinn_t	unRESIN73;	/* 0x00000092 */
    un_ric_resinn_t	unRESIN74;	/* 0x00000094 */
    un_ric_resinn_t	unRESIN75;	/* 0x00000096 */
    un_ric_resinn_t	unRESIN76;	/* 0x00000098 */
    un_ric_resinn_t	unRESIN77;	/* 0x0000009A */
    un_ric_resinn_t	unRESIN78;	/* 0x0000009C */
    un_ric_resinn_t	unRESIN79;	/* 0x0000009E */
    un_ric_resinn_t	unRESIN80;	/* 0x000000A0 */
    un_ric_resinn_t	unRESIN81;	/* 0x000000A2 */
    un_ric_resinn_t	unRESIN82;	/* 0x000000A4 */
    un_ric_resinn_t	unRESIN83;	/* 0x000000A6 */
    un_ric_resinn_t	unRESIN84;	/* 0x000000A8 */
    un_ric_resinn_t	unRESIN85;	/* 0x000000AA */
    un_ric_resinn_t	unRESIN86;	/* 0x000000AC */
    un_ric_resinn_t	unRESIN87;	/* 0x000000AE */
    un_ric_resinn_t	unRESIN88;	/* 0x000000B0 */
    un_ric_resinn_t	unRESIN89;	/* 0x000000B2 */
    un_ric_resinn_t	unRESIN90;	/* 0x000000B4 */
    un_ric_resinn_t	unRESIN91;	/* 0x000000B6 */
    un_ric_resinn_t	unRESIN92;	/* 0x000000B8 */
    un_ric_resinn_t	unRESIN93;	/* 0x000000BA */
    un_ric_resinn_t	unRESIN94;	/* 0x000000BC */
    un_ric_resinn_t	unRESIN95;	/* 0x000000BE */
    un_ric_resinn_t	unRESIN96;	/* 0x000000C0 */
    un_ric_resinn_t	unRESIN97;	/* 0x000000C2 */
    un_ric_resinn_t	unRESIN98;	/* 0x000000C4 */
    un_ric_resinn_t	unRESIN99;	/* 0x000000C6 */
    un_ric_resinn_t	unRESIN100;	/* 0x000000C8 */
    un_ric_resinn_t	unRESIN101;	/* 0x000000CA */
    un_ric_resinn_t	unRESIN102;	/* 0x000000CC */
    un_ric_resinn_t	unRESIN103;	/* 0x000000CE */
    un_ric_resinn_t	unRESIN104;	/* 0x000000D0 */
    un_ric_resinn_t	unRESIN105;	/* 0x000000D2 */
    un_ric_resinn_t	unRESIN106;	/* 0x000000D4 */
    un_ric_resinn_t	unRESIN107;	/* 0x000000D6 */
    un_ric_resinn_t	unRESIN108;	/* 0x000000D8 */
    un_ric_resinn_t	unRESIN109;	/* 0x000000DA */
    un_ric_resinn_t	unRESIN110;	/* 0x000000DC */
    un_ric_resinn_t	unRESIN111;	/* 0x000000DE */
    un_ric_resinn_t	unRESIN112;	/* 0x000000E0 */
    un_ric_resinn_t	unRESIN113;	/* 0x000000E2 */
    un_ric_resinn_t	unRESIN114;	/* 0x000000E4 */
    un_ric_resinn_t	unRESIN115;	/* 0x000000E6 */
    un_ric_resinn_t	unRESIN116;	/* 0x000000E8 */
    un_ric_resinn_t	unRESIN117;	/* 0x000000EA */
    un_ric_resinn_t	unRESIN118;	/* 0x000000EC */
    un_ric_resinn_t	unRESIN119;	/* 0x000000EE */
    un_ric_resinn_t	unRESIN120;	/* 0x000000F0 */
    un_ric_resinn_t	unRESIN121;	/* 0x000000F2 */
    un_ric_resinn_t	unRESIN122;	/* 0x000000F4 */
    un_ric_resinn_t	unRESIN123;	/* 0x000000F6 */
    un_ric_resinn_t	unRESIN124;	/* 0x000000F8 */
    un_ric_resinn_t	unRESIN125;	/* 0x000000FA */
    un_ric_resinn_t	unRESIN126;	/* 0x000000FC */
    un_ric_resinn_t	unRESIN127;	/* 0x000000FE */
    un_ric_resinn_t	unRESIN128;	/* 0x00000100 */
    un_ric_resinn_t	unRESIN129;	/* 0x00000102 */
    un_ric_resinn_t	unRESIN130;	/* 0x00000104 */
    un_ric_resinn_t	unRESIN131;	/* 0x00000106 */
    un_ric_resinn_t	unRESIN132;	/* 0x00000108 */
    un_ric_resinn_t	unRESIN133;	/* 0x0000010A */
    un_ric_resinn_t	unRESIN134;	/* 0x0000010C */
    un_ric_resinn_t	unRESIN135;	/* 0x0000010E */
    un_ric_resinn_t	unRESIN136;	/* 0x00000110 */
    un_ric_resinn_t	unRESIN137;	/* 0x00000112 */
    un_ric_resinn_t	unRESIN138;	/* 0x00000114 */
    un_ric_resinn_t	unRESIN139;	/* 0x00000116 */
    un_ric_resinn_t	unRESIN140;	/* 0x00000118 */
    un_ric_resinn_t	unRESIN141;	/* 0x0000011A */
    un_ric_resinn_t	unRESIN142;	/* 0x0000011C */
    un_ric_resinn_t	unRESIN143;	/* 0x0000011E */
    un_ric_resinn_t	unRESIN144;	/* 0x00000120 */
    un_ric_resinn_t	unRESIN145;	/* 0x00000122 */
    un_ric_resinn_t	unRESIN146;	/* 0x00000124 */
    un_ric_resinn_t	unRESIN147;	/* 0x00000126 */
    un_ric_resinn_t	unRESIN148;	/* 0x00000128 */
    un_ric_resinn_t	unRESIN149;	/* 0x0000012A */
    un_ric_resinn_t	unRESIN150;	/* 0x0000012C */
    un_ric_resinn_t	unRESIN151;	/* 0x0000012E */
    un_ric_resinn_t	unRESIN152;	/* 0x00000130 */
    un_ric_resinn_t	unRESIN153;	/* 0x00000132 */
    un_ric_resinn_t	unRESIN154;	/* 0x00000134 */
    un_ric_resinn_t	unRESIN155;	/* 0x00000136 */
    un_ric_resinn_t	unRESIN156;	/* 0x00000138 */
    un_ric_resinn_t	unRESIN157;	/* 0x0000013A */
    un_ric_resinn_t	unRESIN158;	/* 0x0000013C */
    un_ric_resinn_t	unRESIN159;	/* 0x0000013E */
    un_ric_resinn_t	unRESIN160;	/* 0x00000140 */
    un_ric_resinn_t	unRESIN161;	/* 0x00000142 */
    un_ric_resinn_t	unRESIN162;	/* 0x00000144 */
    un_ric_resinn_t	unRESIN163;	/* 0x00000146 */
    un_ric_resinn_t	unRESIN164;	/* 0x00000148 */
    un_ric_resinn_t	unRESIN165;	/* 0x0000014A */
    un_ric_resinn_t	unRESIN166;	/* 0x0000014C */
    un_ric_resinn_t	unRESIN167;	/* 0x0000014E */
    un_ric_resinn_t	unRESIN168;	/* 0x00000150 */
    un_ric_resinn_t	unRESIN169;	/* 0x00000152 */
    un_ric_resinn_t	unRESIN170;	/* 0x00000154 */
    un_ric_resinn_t	unRESIN171;	/* 0x00000156 */
    un_ric_resinn_t	unRESIN172;	/* 0x00000158 */
    un_ric_resinn_t	unRESIN173;	/* 0x0000015A */
    un_ric_resinn_t	unRESIN174;	/* 0x0000015C */
    un_ric_resinn_t	unRESIN175;	/* 0x0000015E */
    un_ric_resinn_t	unRESIN176;	/* 0x00000160 */
    un_ric_resinn_t	unRESIN177;	/* 0x00000162 */
    un_ric_resinn_t	unRESIN178;	/* 0x00000164 */
    un_ric_resinn_t	unRESIN179;	/* 0x00000166 */
    un_ric_resinn_t	unRESIN180;	/* 0x00000168 */
    un_ric_resinn_t	unRESIN181;	/* 0x0000016A */
    un_ric_resinn_t	unRESIN182;	/* 0x0000016C */
    un_ric_resinn_t	unRESIN183;	/* 0x0000016E */
    un_ric_resinn_t	unRESIN184;	/* 0x00000170 */
    un_ric_resinn_t	unRESIN185;	/* 0x00000172 */
    un_ric_resinn_t	unRESIN186;	/* 0x00000174 */
    un_ric_resinn_t	unRESIN187;	/* 0x00000176 */
    un_ric_resinn_t	unRESIN188;	/* 0x00000178 */
    un_ric_resinn_t	unRESIN189;	/* 0x0000017A */
    un_ric_resinn_t	unRESIN190;	/* 0x0000017C */
    un_ric_resinn_t	unRESIN191;	/* 0x0000017E */
    un_ric_resinn_t	unRESIN192;	/* 0x00000180 */
    un_ric_resinn_t	unRESIN193;	/* 0x00000182 */
    un_ric_resinn_t	unRESIN194;	/* 0x00000184 */
    un_ric_resinn_t	unRESIN195;	/* 0x00000186 */
    un_ric_resinn_t	unRESIN196;	/* 0x00000188 */
    un_ric_resinn_t	unRESIN197;	/* 0x0000018A */
    un_ric_resinn_t	unRESIN198;	/* 0x0000018C */
    un_ric_resinn_t	unRESIN199;	/* 0x0000018E */
    un_ric_resinn_t	unRESIN200;	/* 0x00000190 */
    un_ric_resinn_t	unRESIN201;	/* 0x00000192 */
    un_ric_resinn_t	unRESIN202;	/* 0x00000194 */
    un_ric_resinn_t	unRESIN203;	/* 0x00000196 */
    un_ric_resinn_t	unRESIN204;	/* 0x00000198 */
    un_ric_resinn_t	unRESIN205;	/* 0x0000019A */
    un_ric_resinn_t	unRESIN206;	/* 0x0000019C */
    un_ric_resinn_t	unRESIN207;	/* 0x0000019E */
    un_ric_resinn_t	unRESIN208;	/* 0x000001A0 */
    un_ric_resinn_t	unRESIN209;	/* 0x000001A2 */
    un_ric_resinn_t	unRESIN210;	/* 0x000001A4 */
    un_ric_resinn_t	unRESIN211;	/* 0x000001A6 */
    un_ric_resinn_t	unRESIN212;	/* 0x000001A8 */
    un_ric_resinn_t	unRESIN213;	/* 0x000001AA */
    un_ric_resinn_t	unRESIN214;	/* 0x000001AC */
    un_ric_resinn_t	unRESIN215;	/* 0x000001AE */
    un_ric_resinn_t	unRESIN216;	/* 0x000001B0 */
    un_ric_resinn_t	unRESIN217;	/* 0x000001B2 */
    un_ric_resinn_t	unRESIN218;	/* 0x000001B4 */
    un_ric_resinn_t	unRESIN219;	/* 0x000001B6 */
    un_ric_resinn_t	unRESIN220;	/* 0x000001B8 */
    un_ric_resinn_t	unRESIN221;	/* 0x000001BA */
    un_ric_resinn_t	unRESIN222;	/* 0x000001BC */
    un_ric_resinn_t	unRESIN223;	/* 0x000001BE */
    un_ric_resinn_t	unRESIN224;	/* 0x000001C0 */
    un_ric_resinn_t	unRESIN225;	/* 0x000001C2 */
    un_ric_resinn_t	unRESIN226;	/* 0x000001C4 */
    un_ric_resinn_t	unRESIN227;	/* 0x000001C6 */
    un_ric_resinn_t	unRESIN228;	/* 0x000001C8 */
    un_ric_resinn_t	unRESIN229;	/* 0x000001CA */
    un_ric_resinn_t	unRESIN230;	/* 0x000001CC */
    un_ric_resinn_t	unRESIN231;	/* 0x000001CE */
    un_ric_resinn_t	unRESIN232;	/* 0x000001D0 */
    un_ric_resinn_t	unRESIN233;	/* 0x000001D2 */
    un_ric_resinn_t	unRESIN234;	/* 0x000001D4 */
    un_ric_resinn_t	unRESIN235;	/* 0x000001D6 */
    un_ric_resinn_t	unRESIN236;	/* 0x000001D8 */
    un_ric_resinn_t	unRESIN237;	/* 0x000001DA */
    un_ric_resinn_t	unRESIN238;	/* 0x000001DC */
    un_ric_resinn_t	unRESIN239;	/* 0x000001DE */
    un_ric_resinn_t	unRESIN240;	/* 0x000001E0 */
    un_ric_resinn_t	unRESIN241;	/* 0x000001E2 */
    un_ric_resinn_t	unRESIN242;	/* 0x000001E4 */
    un_ric_resinn_t	unRESIN243;	/* 0x000001E6 */
    un_ric_resinn_t	unRESIN244;	/* 0x000001E8 */
    un_ric_resinn_t	unRESIN245;	/* 0x000001EA */
    un_ric_resinn_t	unRESIN246;	/* 0x000001EC */
    un_ric_resinn_t	unRESIN247;	/* 0x000001EE */
    un_ric_resinn_t	unRESIN248;	/* 0x000001F0 */
    un_ric_resinn_t	unRESIN249;	/* 0x000001F2 */
    un_ric_resinn_t	unRESIN250;	/* 0x000001F4 */
    un_ric_resinn_t	unRESIN251;	/* 0x000001F6 */
    un_ric_resinn_t	unRESIN252;	/* 0x000001F8 */
    un_ric_resinn_t	unRESIN253;	/* 0x000001FA */
    un_ric_resinn_t	unRESIN254;	/* 0x000001FC */
    un_ric_resinn_t	unRESIN255;	/* 0x000001FE */
    un_ric_resinn_t	unRESIN256;	/* 0x00000200 */
    un_ric_resinn_t	unRESIN257;	/* 0x00000202 */
    un_ric_resinn_t	unRESIN258;	/* 0x00000204 */
    un_ric_resinn_t	unRESIN259;	/* 0x00000206 */
    un_ric_resinn_t	unRESIN260;	/* 0x00000208 */
    un_ric_resinn_t	unRESIN261;	/* 0x0000020A */
    un_ric_resinn_t	unRESIN262;	/* 0x0000020C */
    un_ric_resinn_t	unRESIN263;	/* 0x0000020E */
    un_ric_resinn_t	unRESIN264;	/* 0x00000210 */
    un_ric_resinn_t	unRESIN265;	/* 0x00000212 */
    un_ric_resinn_t	unRESIN266;	/* 0x00000214 */
    un_ric_resinn_t	unRESIN267;	/* 0x00000216 */
    un_ric_resinn_t	unRESIN268;	/* 0x00000218 */
    un_ric_resinn_t	unRESIN269;	/* 0x0000021A */
    un_ric_resinn_t	unRESIN270;	/* 0x0000021C */
    un_ric_resinn_t	unRESIN271;	/* 0x0000021E */
    un_ric_resinn_t	unRESIN272;	/* 0x00000220 */
    un_ric_resinn_t	unRESIN273;	/* 0x00000222 */
    un_ric_resinn_t	unRESIN274;	/* 0x00000224 */
    un_ric_resinn_t	unRESIN275;	/* 0x00000226 */
    un_ric_resinn_t	unRESIN276;	/* 0x00000228 */
    un_ric_resinn_t	unRESIN277;	/* 0x0000022A */
    un_ric_resinn_t	unRESIN278;	/* 0x0000022C */
    un_ric_resinn_t	unRESIN279;	/* 0x0000022E */
    un_ric_resinn_t	unRESIN280;	/* 0x00000230 */
    un_ric_resinn_t	unRESIN281;	/* 0x00000232 */
    un_ric_resinn_t	unRESIN282;	/* 0x00000234 */
    un_ric_resinn_t	unRESIN283;	/* 0x00000236 */
    un_ric_resinn_t	unRESIN284;	/* 0x00000238 */
    un_ric_resinn_t	unRESIN285;	/* 0x0000023A */
    un_ric_resinn_t	unRESIN286;	/* 0x0000023C */
    un_ric_resinn_t	unRESIN287;	/* 0x0000023E */
    un_ric_resinn_t	unRESIN288;	/* 0x00000240 */
    un_ric_resinn_t	unRESIN289;	/* 0x00000242 */
    un_ric_resinn_t	unRESIN290;	/* 0x00000244 */
    un_ric_resinn_t	unRESIN291;	/* 0x00000246 */
    un_ric_resinn_t	unRESIN292;	/* 0x00000248 */
    un_ric_resinn_t	unRESIN293;	/* 0x0000024A */
    un_ric_resinn_t	unRESIN294;	/* 0x0000024C */
    un_ric_resinn_t	unRESIN295;	/* 0x0000024E */
    un_ric_resinn_t	unRESIN296;	/* 0x00000250 */
    un_ric_resinn_t	unRESIN297;	/* 0x00000252 */
    un_ric_resinn_t	unRESIN298;	/* 0x00000254 */
    un_ric_resinn_t	unRESIN299;	/* 0x00000256 */
    un_ric_resinn_t	unRESIN300;	/* 0x00000258 */
    un_ric_resinn_t	unRESIN301;	/* 0x0000025A */
    un_ric_resinn_t	unRESIN302;	/* 0x0000025C */
    un_ric_resinn_t	unRESIN303;	/* 0x0000025E */
    un_ric_resinn_t	unRESIN304;	/* 0x00000260 */
    un_ric_resinn_t	unRESIN305;	/* 0x00000262 */
    un_ric_resinn_t	unRESIN306;	/* 0x00000264 */
    un_ric_resinn_t	unRESIN307;	/* 0x00000266 */
    un_ric_resinn_t	unRESIN308;	/* 0x00000268 */
    un_ric_resinn_t	unRESIN309;	/* 0x0000026A */
    un_ric_resinn_t	unRESIN310;	/* 0x0000026C */
    un_ric_resinn_t	unRESIN311;	/* 0x0000026E */
    un_ric_resinn_t	unRESIN312;	/* 0x00000270 */
    un_ric_resinn_t	unRESIN313;	/* 0x00000272 */
    un_ric_resinn_t	unRESIN314;	/* 0x00000274 */
    un_ric_resinn_t	unRESIN315;	/* 0x00000276 */
    un_ric_resinn_t	unRESIN316;	/* 0x00000278 */
    un_ric_resinn_t	unRESIN317;	/* 0x0000027A */
    un_ric_resinn_t	unRESIN318;	/* 0x0000027C */
    un_ric_resinn_t	unRESIN319;	/* 0x0000027E */
    un_ric_resinn_t	unRESIN320;	/* 0x00000280 */
    un_ric_resinn_t	unRESIN321;	/* 0x00000282 */
    un_ric_resinn_t	unRESIN322;	/* 0x00000284 */
    un_ric_resinn_t	unRESIN323;	/* 0x00000286 */
    un_ric_resinn_t	unRESIN324;	/* 0x00000288 */
    un_ric_resinn_t	unRESIN325;	/* 0x0000028A */
    un_ric_resinn_t	unRESIN326;	/* 0x0000028C */
    un_ric_resinn_t	unRESIN327;	/* 0x0000028E */
    un_ric_resinn_t	unRESIN328;	/* 0x00000290 */
    un_ric_resinn_t	unRESIN329;	/* 0x00000292 */
    un_ric_resinn_t	unRESIN330;	/* 0x00000294 */
    un_ric_resinn_t	unRESIN331;	/* 0x00000296 */
    un_ric_resinn_t	unRESIN332;	/* 0x00000298 */
    un_ric_resinn_t	unRESIN333;	/* 0x0000029A */
    un_ric_resinn_t	unRESIN334;	/* 0x0000029C */
    un_ric_resinn_t	unRESIN335;	/* 0x0000029E */
    un_ric_resinn_t	unRESIN336;	/* 0x000002A0 */
    un_ric_resinn_t	unRESIN337;	/* 0x000002A2 */
    un_ric_resinn_t	unRESIN338;	/* 0x000002A4 */
    un_ric_resinn_t	unRESIN339;	/* 0x000002A6 */
    un_ric_resinn_t	unRESIN340;	/* 0x000002A8 */
    un_ric_resinn_t	unRESIN341;	/* 0x000002AA */
    un_ric_resinn_t	unRESIN342;	/* 0x000002AC */
    un_ric_resinn_t	unRESIN343;	/* 0x000002AE */
    un_ric_resinn_t	unRESIN344;	/* 0x000002B0 */
    un_ric_resinn_t	unRESIN345;	/* 0x000002B2 */
    un_ric_resinn_t	unRESIN346;	/* 0x000002B4 */
    un_ric_resinn_t	unRESIN347;	/* 0x000002B6 */
    un_ric_resinn_t	unRESIN348;	/* 0x000002B8 */
    un_ric_resinn_t	unRESIN349;	/* 0x000002BA */
    un_ric_resinn_t	unRESIN350;	/* 0x000002BC */
    un_ric_resinn_t	unRESIN351;	/* 0x000002BE */
    un_ric_resinn_t	unRESIN352;	/* 0x000002C0 */
    un_ric_resinn_t	unRESIN353;	/* 0x000002C2 */
    un_ric_resinn_t	unRESIN354;	/* 0x000002C4 */
    un_ric_resinn_t	unRESIN355;	/* 0x000002C6 */
    un_ric_resinn_t	unRESIN356;	/* 0x000002C8 */
    un_ric_resinn_t	unRESIN357;	/* 0x000002CA */
    un_ric_resinn_t	unRESIN358;	/* 0x000002CC */
    un_ric_resinn_t	unRESIN359;	/* 0x000002CE */
    un_ric_resinn_t	unRESIN360;	/* 0x000002D0 */
    un_ric_resinn_t	unRESIN361;	/* 0x000002D2 */
    un_ric_resinn_t	unRESIN362;	/* 0x000002D4 */
    un_ric_resinn_t	unRESIN363;	/* 0x000002D6 */
    un_ric_resinn_t	unRESIN364;	/* 0x000002D8 */
    un_ric_resinn_t	unRESIN365;	/* 0x000002DA */
    un_ric_resinn_t	unRESIN366;	/* 0x000002DC */
    un_ric_resinn_t	unRESIN367;	/* 0x000002DE */
    un_ric_resinn_t	unRESIN368;	/* 0x000002E0 */
    un_ric_resinn_t	unRESIN369;	/* 0x000002E2 */
    un_ric_resinn_t	unRESIN370;	/* 0x000002E4 */
    un_ric_resinn_t	unRESIN371;	/* 0x000002E6 */
    un_ric_resinn_t	unRESIN372;	/* 0x000002E8 */
    un_ric_resinn_t	unRESIN373;	/* 0x000002EA */
    un_ric_resinn_t	unRESIN374;	/* 0x000002EC */
    un_ric_resinn_t	unRESIN375;	/* 0x000002EE */
    un_ric_resinn_t	unRESIN376;	/* 0x000002F0 */
    un_ric_resinn_t	unRESIN377;	/* 0x000002F2 */
    un_ric_resinn_t	unRESIN378;	/* 0x000002F4 */
    un_ric_resinn_t	unRESIN379;	/* 0x000002F6 */
    un_ric_resinn_t	unRESIN380;	/* 0x000002F8 */
    un_ric_resinn_t	unRESIN381;	/* 0x000002FA */
    un_ric_resinn_t	unRESIN382;	/* 0x000002FC */
    un_ric_resinn_t	unRESIN383;	/* 0x000002FE */
    un_ric_resinn_t	unRESIN384;	/* 0x00000300 */
    un_ric_resinn_t	unRESIN385;	/* 0x00000302 */
    un_ric_resinn_t	unRESIN386;	/* 0x00000304 */
    un_ric_resinn_t	unRESIN387;	/* 0x00000306 */
    un_ric_resinn_t	unRESIN388;	/* 0x00000308 */
    un_ric_resinn_t	unRESIN389;	/* 0x0000030A */
    un_ric_resinn_t	unRESIN390;	/* 0x0000030C */
    un_ric_resinn_t	unRESIN391;	/* 0x0000030E */
    un_ric_resinn_t	unRESIN392;	/* 0x00000310 */
    un_ric_resinn_t	unRESIN393;	/* 0x00000312 */
    un_ric_resinn_t	unRESIN394;	/* 0x00000314 */
    un_ric_resinn_t	unRESIN395;	/* 0x00000316 */
    un_ric_resinn_t	unRESIN396;	/* 0x00000318 */
    un_ric_resinn_t	unRESIN397;	/* 0x0000031A */
    un_ric_resinn_t	unRESIN398;	/* 0x0000031C */
    un_ric_resinn_t	unRESIN399;	/* 0x0000031E */
    un_ric_resinn_t	unRESIN400;	/* 0x00000320 */
    un_ric_resinn_t	unRESIN401;	/* 0x00000322 */
    un_ric_resinn_t	unRESIN402;	/* 0x00000324 */
    un_ric_resinn_t	unRESIN403;	/* 0x00000326 */
    un_ric_resinn_t	unRESIN404;	/* 0x00000328 */
    un_ric_resinn_t	unRESIN405;	/* 0x0000032A */
    un_ric_resinn_t	unRESIN406;	/* 0x0000032C */
    un_ric_resinn_t	unRESIN407;	/* 0x0000032E */
    un_ric_resinn_t	unRESIN408;	/* 0x00000330 */
    un_ric_resinn_t	unRESIN409;	/* 0x00000332 */
    un_ric_resinn_t	unRESIN410;	/* 0x00000334 */
    un_ric_resinn_t	unRESIN411;	/* 0x00000336 */
    un_ric_resinn_t	unRESIN412;	/* 0x00000338 */
    un_ric_resinn_t	unRESIN413;	/* 0x0000033A */
    un_ric_resinn_t	unRESIN414;	/* 0x0000033C */
    un_ric_resinn_t	unRESIN415;	/* 0x0000033E */
    un_ric_resinn_t	unRESIN416;	/* 0x00000340 */
    un_ric_resinn_t	unRESIN417;	/* 0x00000342 */
    un_ric_resinn_t	unRESIN418;	/* 0x00000344 */
    un_ric_resinn_t	unRESIN419;	/* 0x00000346 */
    un_ric_resinn_t	unRESIN420;	/* 0x00000348 */
    un_ric_resinn_t	unRESIN421;	/* 0x0000034A */
    un_ric_resinn_t	unRESIN422;	/* 0x0000034C */
    un_ric_resinn_t	unRESIN423;	/* 0x0000034E */
    un_ric_resinn_t	unRESIN424;	/* 0x00000350 */
    un_ric_resinn_t	unRESIN425;	/* 0x00000352 */
    un_ric_resinn_t	unRESIN426;	/* 0x00000354 */
    un_ric_resinn_t	unRESIN427;	/* 0x00000356 */
    un_ric_resinn_t	unRESIN428;	/* 0x00000358 */
    un_ric_resinn_t	unRESIN429;	/* 0x0000035A */
    un_ric_resinn_t	unRESIN430;	/* 0x0000035C */
    un_ric_resinn_t	unRESIN431;	/* 0x0000035E */
    un_ric_resinn_t	unRESIN432;	/* 0x00000360 */
    un_ric_resinn_t	unRESIN433;	/* 0x00000362 */
    un_ric_resinn_t	unRESIN434;	/* 0x00000364 */
    un_ric_resinn_t	unRESIN435;	/* 0x00000366 */
    un_ric_resinn_t	unRESIN436;	/* 0x00000368 */
    un_ric_resinn_t	unRESIN437;	/* 0x0000036A */
    un_ric_resinn_t	unRESIN438;	/* 0x0000036C */
    un_ric_resinn_t	unRESIN439;	/* 0x0000036E */
    un_ric_resinn_t	unRESIN440;	/* 0x00000370 */
    un_ric_resinn_t	unRESIN441;	/* 0x00000372 */
    un_ric_resinn_t	unRESIN442;	/* 0x00000374 */
    un_ric_resinn_t	unRESIN443;	/* 0x00000376 */
    un_ric_resinn_t	unRESIN444;	/* 0x00000378 */
    un_ric_resinn_t	unRESIN445;	/* 0x0000037A */
    un_ric_resinn_t	unRESIN446;	/* 0x0000037C */
    un_ric_resinn_t	unRESIN447;	/* 0x0000037E */
    un_ric_resinn_t	unRESIN448;	/* 0x00000380 */
    un_ric_resinn_t	unRESIN449;	/* 0x00000382 */
    un_ric_resinn_t	unRESIN450;	/* 0x00000384 */
    un_ric_resinn_t	unRESIN451;	/* 0x00000386 */
    un_ric_resinn_t	unRESIN452;	/* 0x00000388 */
    un_ric_resinn_t	unRESIN453;	/* 0x0000038A */
    un_ric_resinn_t	unRESIN454;	/* 0x0000038C */
    un_ric_resinn_t	unRESIN455;	/* 0x0000038E */
    un_ric_resinn_t	unRESIN456;	/* 0x00000390 */
    un_ric_resinn_t	unRESIN457;	/* 0x00000392 */
    un_ric_resinn_t	unRESIN458;	/* 0x00000394 */
    un_ric_resinn_t	unRESIN459;	/* 0x00000396 */
    un_ric_resinn_t	unRESIN460;	/* 0x00000398 */
    un_ric_resinn_t	unRESIN461;	/* 0x0000039A */
    un_ric_resinn_t	unRESIN462;	/* 0x0000039C */
    un_ric_resinn_t	unRESIN463;	/* 0x0000039E */
    un_ric_resinn_t	unRESIN464;	/* 0x000003A0 */
    un_ric_resinn_t	unRESIN465;	/* 0x000003A2 */
    un_ric_resinn_t	unRESIN466;	/* 0x000003A4 */
    un_ric_resinn_t	unRESIN467;	/* 0x000003A6 */
    un_ric_resinn_t	unRESIN468;	/* 0x000003A8 */
    un_ric_resinn_t	unRESIN469;	/* 0x000003AA */
    un_ric_resinn_t	unRESIN470;	/* 0x000003AC */
    un_ric_resinn_t	unRESIN471;	/* 0x000003AE */
    un_ric_resinn_t	unRESIN472;	/* 0x000003B0 */
    un_ric_resinn_t	unRESIN473;	/* 0x000003B2 */
    un_ric_resinn_t	unRESIN474;	/* 0x000003B4 */
    un_ric_resinn_t	unRESIN475;	/* 0x000003B6 */
    un_ric_resinn_t	unRESIN476;	/* 0x000003B8 */
    un_ric_resinn_t	unRESIN477;	/* 0x000003BA */
    un_ric_resinn_t	unRESIN478;	/* 0x000003BC */
    un_ric_resinn_t	unRESIN479;	/* 0x000003BE */
    un_ric_resinn_t	unRESIN480;	/* 0x000003C0 */
    un_ric_resinn_t	unRESIN481;	/* 0x000003C2 */
    un_ric_resinn_t	unRESIN482;	/* 0x000003C4 */
    un_ric_resinn_t	unRESIN483;	/* 0x000003C6 */
    un_ric_resinn_t	unRESIN484;	/* 0x000003C8 */
    un_ric_resinn_t	unRESIN485;	/* 0x000003CA */
    un_ric_resinn_t	unRESIN486;	/* 0x000003CC */
    un_ric_resinn_t	unRESIN487;	/* 0x000003CE */
    un_ric_resinn_t	unRESIN488;	/* 0x000003D0 */
    un_ric_resinn_t	unRESIN489;	/* 0x000003D2 */
    un_ric_resinn_t	unRESIN490;	/* 0x000003D4 */
    un_ric_resinn_t	unRESIN491;	/* 0x000003D6 */
    un_ric_resinn_t	unRESIN492;	/* 0x000003D8 */
    un_ric_resinn_t	unRESIN493;	/* 0x000003DA */
    un_ric_resinn_t	unRESIN494;	/* 0x000003DC */
    un_ric_resinn_t	unRESIN495;	/* 0x000003DE */
    un_ric_resinn_t	unRESIN496;	/* 0x000003E0 */
    un_ric_resinn_t	unRESIN497;	/* 0x000003E2 */
    un_ric_resinn_t	unRESIN498;	/* 0x000003E4 */
    un_ric_resinn_t	unRESIN499;	/* 0x000003E6 */
    un_ric_resinn_t	unRESIN500;	/* 0x000003E8 */
    un_ric_resinn_t	unRESIN501;	/* 0x000003EA */
    un_ric_resinn_t	unRESIN502;	/* 0x000003EC */
    un_ric_resinn_t	unRESIN503;	/* 0x000003EE */
    un_ric_resinn_t	unRESIN504;	/* 0x000003F0 */
    un_ric_resinn_t	unRESIN505;	/* 0x000003F2 */
    un_ric_resinn_t	unRESIN506;	/* 0x000003F4 */
    un_ric_resinn_t	unRESIN507;	/* 0x000003F6 */
    un_ric_resinn_t	unRESIN508;	/* 0x000003F8 */
    un_ric_resinn_t	unRESIN509;	/* 0x000003FA */
    un_ric_resinn_t	unRESIN510;	/* 0x000003FC */
    un_ric_resinn_t	unRESIN511;	/* 0x000003FE */
    un_ric_resinn_t	unRESIN512;	/* 0x00000400 */
    un_ric_resinn_t	unRESIN513;	/* 0x00000402 */
    un_ric_resinn_t	unRESIN514;	/* 0x00000404 */
    un_ric_resinn_t	unRESIN515;	/* 0x00000406 */
    un_ric_resinn_t	unRESIN516;	/* 0x00000408 */
    un_ric_resinn_t	unRESIN517;	/* 0x0000040A */
    un_ric_resinn_t	unRESIN518;	/* 0x0000040C */
    un_ric_resinn_t	unRESIN519;	/* 0x0000040E */
    un_ric_resinn_t	unRESIN520;	/* 0x00000410 */
    un_ric_resinn_t	unRESIN521;	/* 0x00000412 */
    un_ric_resinn_t	unRESIN522;	/* 0x00000414 */
    un_ric_resinn_t	unRESIN523;	/* 0x00000416 */
    un_ric_resinn_t	unRESIN524;	/* 0x00000418 */
    un_ric_resinn_t	unRESIN525;	/* 0x0000041A */
    un_ric_resinn_t	unRESIN526;	/* 0x0000041C */
    un_ric_resinn_t	unRESIN527;	/* 0x0000041E */
    un_ric_resinn_t	unRESIN528;	/* 0x00000420 */
    un_ric_resinn_t	unRESIN529;	/* 0x00000422 */
    un_ric_resinn_t	unRESIN530;	/* 0x00000424 */
    un_ric_resinn_t	unRESIN531;	/* 0x00000426 */
    un_ric_resinn_t	unRESIN532;	/* 0x00000428 */
    un_ric_resinn_t	unRESIN533;	/* 0x0000042A */
    un_ric_resinn_t	unRESIN534;	/* 0x0000042C */
    un_ric_resinn_t	unRESIN535;	/* 0x0000042E */
    un_ric_resinn_t	unRESIN536;	/* 0x00000430 */
    un_ric_resinn_t	unRESIN537;	/* 0x00000432 */
    un_ric_resinn_t	unRESIN538;	/* 0x00000434 */
    un_ric_resinn_t	unRESIN539;	/* 0x00000436 */
    un_ric_resinn_t	unRESIN540;	/* 0x00000438 */
    un_ric_resinn_t	unRESIN541;	/* 0x0000043A */
    un_ric_resinn_t	unRESIN542;	/* 0x0000043C */
    un_ric_resinn_t	unRESIN543;	/* 0x0000043E */
    un_ric_resinn_t	unRESIN544;	/* 0x00000440 */
    un_ric_resinn_t	unRESIN545;	/* 0x00000442 */
    un_ric_resinn_t	unRESIN546;	/* 0x00000444 */
    un_ric_resinn_t	unRESIN547;	/* 0x00000446 */
    un_ric_resinn_t	unRESIN548;	/* 0x00000448 */
    un_ric_resinn_t	unRESIN549;	/* 0x0000044A */
    un_ric_resinn_t	unRESIN550;	/* 0x0000044C */
    un_ric_resinn_t	unRESIN551;	/* 0x0000044E */
    un_ric_resinn_t	unRESIN552;	/* 0x00000450 */
    un_ric_resinn_t	unRESIN553;	/* 0x00000452 */
    un_ric_resinn_t	unRESIN554;	/* 0x00000454 */
    un_ric_resinn_t	unRESIN555;	/* 0x00000456 */
    un_ric_resinn_t	unRESIN556;	/* 0x00000458 */
    un_ric_resinn_t	unRESIN557;	/* 0x0000045A */
    un_ric_resinn_t	unRESIN558;	/* 0x0000045C */
    un_ric_resinn_t	unRESIN559;	/* 0x0000045E */
    un_ric_resinn_t	unRESIN560;	/* 0x00000460 */
    un_ric_resinn_t	unRESIN561;	/* 0x00000462 */
    un_ric_resinn_t	unRESIN562;	/* 0x00000464 */
    un_ric_resinn_t	unRESIN563;	/* 0x00000466 */
    un_ric_resinn_t	unRESIN564;	/* 0x00000468 */
    un_ric_resinn_t	unRESIN565;	/* 0x0000046A */
    un_ric_resinn_t	unRESIN566;	/* 0x0000046C */
    un_ric_resinn_t	unRESIN567;	/* 0x0000046E */
    un_ric_resinn_t	unRESIN568;	/* 0x00000470 */
    un_ric_resinn_t	unRESIN569;	/* 0x00000472 */
    un_ric_resinn_t	unRESIN570;	/* 0x00000474 */
    un_ric_resinn_t	unRESIN571;	/* 0x00000476 */
    un_ric_resinn_t	unRESIN572;	/* 0x00000478 */
    un_ric_resinn_t	unRESIN573;	/* 0x0000047A */
    un_ric_resinn_t	unRESIN574;	/* 0x0000047C */
    un_ric_resinn_t	unRESIN575;	/* 0x0000047E */
    un_ric_resinn_t	unRESIN576;	/* 0x00000480 */
    un_ric_resinn_t	unRESIN577;	/* 0x00000482 */
    un_ric_resinn_t	unRESIN578;	/* 0x00000484 */
    un_ric_resinn_t	unRESIN579;	/* 0x00000486 */
    un_ric_resinn_t	unRESIN580;	/* 0x00000488 */
    un_ric_resinn_t	unRESIN581;	/* 0x0000048A */
    un_ric_resinn_t	unRESIN582;	/* 0x0000048C */
    un_ric_resinn_t	unRESIN583;	/* 0x0000048E */
    un_ric_resinn_t	unRESIN584;	/* 0x00000490 */
    un_ric_resinn_t	unRESIN585;	/* 0x00000492 */
    un_ric_resinn_t	unRESIN586;	/* 0x00000494 */
    un_ric_resinn_t	unRESIN587;	/* 0x00000496 */
    un_ric_resinn_t	unRESIN588;	/* 0x00000498 */
    un_ric_resinn_t	unRESIN589;	/* 0x0000049A */
    un_ric_resinn_t	unRESIN590;	/* 0x0000049C */
    un_ric_resinn_t	unRESIN591;	/* 0x0000049E */
    un_ric_resinn_t	unRESIN592;	/* 0x000004A0 */
    un_ric_resinn_t	unRESIN593;	/* 0x000004A2 */
    un_ric_resinn_t	unRESIN594;	/* 0x000004A4 */
    un_ric_resinn_t	unRESIN595;	/* 0x000004A6 */
    un_ric_resinn_t	unRESIN596;	/* 0x000004A8 */
    un_ric_resinn_t	unRESIN597;	/* 0x000004AA */
    un_ric_resinn_t	unRESIN598;	/* 0x000004AC */
    un_ric_resinn_t	unRESIN599;	/* 0x000004AE */
    un_ric_resinn_t	unRESIN600;	/* 0x000004B0 */
    un_ric_resinn_t	unRESIN601;	/* 0x000004B2 */
    un_ric_resinn_t	unRESIN602;	/* 0x000004B4 */
    un_ric_resinn_t	unRESIN603;	/* 0x000004B6 */
    un_ric_resinn_t	unRESIN604;	/* 0x000004B8 */
    un_ric_resinn_t	unRESIN605;	/* 0x000004BA */
    un_ric_resinn_t	unRESIN606;	/* 0x000004BC */
    un_ric_resinn_t	unRESIN607;	/* 0x000004BE */
    un_ric_resinn_t	unRESIN608;	/* 0x000004C0 */
    un_ric_resinn_t	unRESIN609;	/* 0x000004C2 */
    un_ric_resinn_t	unRESIN610;	/* 0x000004C4 */
    un_ric_resinn_t	unRESIN611;	/* 0x000004C6 */
    un_ric_resinn_t	unRESIN612;	/* 0x000004C8 */
    un_ric_resinn_t	unRESIN613;	/* 0x000004CA */
    un_ric_resinn_t	unRESIN614;	/* 0x000004CC */
    un_ric_resinn_t	unRESIN615;	/* 0x000004CE */
    un_ric_resinn_t	unRESIN616;	/* 0x000004D0 */
    un_ric_resinn_t	unRESIN617;	/* 0x000004D2 */
    un_ric_resinn_t	unRESIN618;	/* 0x000004D4 */
    un_ric_resinn_t	unRESIN619;	/* 0x000004D6 */
    un_ric_resinn_t	unRESIN620;	/* 0x000004D8 */
    un_ric_resinn_t	unRESIN621;	/* 0x000004DA */
    un_ric_resinn_t	unRESIN622;	/* 0x000004DC */
    un_ric_resinn_t	unRESIN623;	/* 0x000004DE */
    un_ric_resinn_t	unRESIN624;	/* 0x000004E0 */
    un_ric_resinn_t	unRESIN625;	/* 0x000004E2 */
    un_ric_resinn_t	unRESIN626;	/* 0x000004E4 */
    un_ric_resinn_t	unRESIN627;	/* 0x000004E6 */
    un_ric_resinn_t	unRESIN628;	/* 0x000004E8 */
    un_ric_resinn_t	unRESIN629;	/* 0x000004EA */
    un_ric_resinn_t	unRESIN630;	/* 0x000004EC */
    un_ric_resinn_t	unRESIN631;	/* 0x000004EE */
    un_ric_resinn_t	unRESIN632;	/* 0x000004F0 */
    un_ric_resinn_t	unRESIN633;	/* 0x000004F2 */
    un_ric_resinn_t	unRESIN634;	/* 0x000004F4 */
    un_ric_resinn_t	unRESIN635;	/* 0x000004F6 */
    un_ric_resinn_t	unRESIN636;	/* 0x000004F8 */
    un_ric_resinn_t	unRESIN637;	/* 0x000004FA */
    un_ric_resinn_t	unRESIN638;	/* 0x000004FC */
    un_ric_resinn_t	unRESIN639;	/* 0x000004FE */
    un_ric_resinn_t	unRESIN640;	/* 0x00000500 */
    un_ric_resinn_t	unRESIN641;	/* 0x00000502 */
    un_ric_resinn_t	unRESIN642;	/* 0x00000504 */
    un_ric_resinn_t	unRESIN643;	/* 0x00000506 */
    un_ric_resinn_t	unRESIN644;	/* 0x00000508 */
    un_ric_resinn_t	unRESIN645;	/* 0x0000050A */
    un_ric_resinn_t	unRESIN646;	/* 0x0000050C */
    un_ric_resinn_t	unRESIN647;	/* 0x0000050E */
    un_ric_resinn_t	unRESIN648;	/* 0x00000510 */
    un_ric_resinn_t	unRESIN649;	/* 0x00000512 */
    un_ric_resinn_t	unRESIN650;	/* 0x00000514 */
    un_ric_resinn_t	unRESIN651;	/* 0x00000516 */
    un_ric_resinn_t	unRESIN652;	/* 0x00000518 */
    un_ric_resinn_t	unRESIN653;	/* 0x0000051A */
    un_ric_resinn_t	unRESIN654;	/* 0x0000051C */
    un_ric_resinn_t	unRESIN655;	/* 0x0000051E */
    un_ric_resinn_t	unRESIN656;	/* 0x00000520 */
    un_ric_resinn_t	unRESIN657;	/* 0x00000522 */
    un_ric_resinn_t	unRESIN658;	/* 0x00000524 */
    un_ric_resinn_t	unRESIN659;	/* 0x00000526 */
    un_ric_resinn_t	unRESIN660;	/* 0x00000528 */
    un_ric_resinn_t	unRESIN661;	/* 0x0000052A */
    un_ric_resinn_t	unRESIN662;	/* 0x0000052C */
    un_ric_resinn_t	unRESIN663;	/* 0x0000052E */
    un_ric_resinn_t	unRESIN664;	/* 0x00000530 */
    un_ric_resinn_t	unRESIN665;	/* 0x00000532 */
    un_ric_resinn_t	unRESIN666;	/* 0x00000534 */
    un_ric_resinn_t	unRESIN667;	/* 0x00000536 */
    un_ric_resinn_t	unRESIN668;	/* 0x00000538 */
    un_ric_resinn_t	unRESIN669;	/* 0x0000053A */
    un_ric_resinn_t	unRESIN670;	/* 0x0000053C */
    un_ric_resinn_t	unRESIN671;	/* 0x0000053E */
    un_ric_resinn_t	unRESIN672;	/* 0x00000540 */
    un_ric_resinn_t	unRESIN673;	/* 0x00000542 */
    un_ric_resinn_t	unRESIN674;	/* 0x00000544 */
    un_ric_resinn_t	unRESIN675;	/* 0x00000546 */
    un_ric_resinn_t	unRESIN676;	/* 0x00000548 */
    un_ric_resinn_t	unRESIN677;	/* 0x0000054A */
    un_ric_resinn_t	unRESIN678;	/* 0x0000054C */
    un_ric_resinn_t	unRESIN679;	/* 0x0000054E */
    un_ric_resinn_t	unRESIN680;	/* 0x00000550 */
    un_ric_resinn_t	unRESIN681;	/* 0x00000552 */
    un_ric_resinn_t	unRESIN682;	/* 0x00000554 */
    un_ric_resinn_t	unRESIN683;	/* 0x00000556 */
    un_ric_resinn_t	unRESIN684;	/* 0x00000558 */
    un_ric_resinn_t	unRESIN685;	/* 0x0000055A */
    un_ric_resinn_t	unRESIN686;	/* 0x0000055C */
    un_ric_resinn_t	unRESIN687;	/* 0x0000055E */
    un_ric_resinn_t	unRESIN688;	/* 0x00000560 */
    un_ric_resinn_t	unRESIN689;	/* 0x00000562 */
    un_ric_resinn_t	unRESIN690;	/* 0x00000564 */
    un_ric_resinn_t	unRESIN691;	/* 0x00000566 */
    un_ric_resinn_t	unRESIN692;	/* 0x00000568 */
    un_ric_resinn_t	unRESIN693;	/* 0x0000056A */
    un_ric_resinn_t	unRESIN694;	/* 0x0000056C */
    un_ric_resinn_t	unRESIN695;	/* 0x0000056E */
    un_ric_resinn_t	unRESIN696;	/* 0x00000570 */
    un_ric_resinn_t	unRESIN697;	/* 0x00000572 */
    un_ric_resinn_t	unRESIN698;	/* 0x00000574 */
    un_ric_resinn_t	unRESIN699;	/* 0x00000576 */
    un_ric_resinn_t	unRESIN700;	/* 0x00000578 */
    un_ric_resinn_t	unRESIN701;	/* 0x0000057A */
    un_ric_resinn_t	unRESIN702;	/* 0x0000057C */
    un_ric_resinn_t	unRESIN703;	/* 0x0000057E */
    un_ric_resinn_t	unRESIN704;	/* 0x00000580 */
    un_ric_resinn_t	unRESIN705;	/* 0x00000582 */
    un_ric_resinn_t	unRESIN706;	/* 0x00000584 */
    un_ric_resinn_t	unRESIN707;	/* 0x00000586 */
    un_ric_resinn_t	unRESIN708;	/* 0x00000588 */
    un_ric_resinn_t	unRESIN709;	/* 0x0000058A */
    un_ric_resinn_t	unRESIN710;	/* 0x0000058C */
    un_ric_resinn_t	unRESIN711;	/* 0x0000058E */
    un_ric_resinn_t	unRESIN712;	/* 0x00000590 */
    un_ric_resinn_t	unRESIN713;	/* 0x00000592 */
    un_ric_resinn_t	unRESIN714;	/* 0x00000594 */
    un_ric_resinn_t	unRESIN715;	/* 0x00000596 */
    un_ric_resinn_t	unRESIN716;	/* 0x00000598 */
    un_ric_resinn_t	unRESIN717;	/* 0x0000059A */
    un_ric_resinn_t	unRESIN718;	/* 0x0000059C */
    un_ric_resinn_t	unRESIN719;	/* 0x0000059E */
    un_ric_resinn_t	unRESIN720;	/* 0x000005A0 */
    un_ric_resinn_t	unRESIN721;	/* 0x000005A2 */
    un_ric_resinn_t	unRESIN722;	/* 0x000005A4 */
    un_ric_resinn_t	unRESIN723;	/* 0x000005A6 */
    un_ric_resinn_t	unRESIN724;	/* 0x000005A8 */
    un_ric_resinn_t	unRESIN725;	/* 0x000005AA */
    un_ric_resinn_t	unRESIN726;	/* 0x000005AC */
    un_ric_resinn_t	unRESIN727;	/* 0x000005AE */
    un_ric_resinn_t	unRESIN728;	/* 0x000005B0 */
    un_ric_resinn_t	unRESIN729;	/* 0x000005B2 */
    un_ric_resinn_t	unRESIN730;	/* 0x000005B4 */
    un_ric_resinn_t	unRESIN731;	/* 0x000005B6 */
    un_ric_resinn_t	unRESIN732;	/* 0x000005B8 */
    un_ric_resinn_t	unRESIN733;	/* 0x000005BA */
    un_ric_resinn_t	unRESIN734;	/* 0x000005BC */
    un_ric_resinn_t	unRESIN735;	/* 0x000005BE */
    un_ric_resinn_t	unRESIN736;	/* 0x000005C0 */
    un_ric_resinn_t	unRESIN737;	/* 0x000005C2 */
    un_ric_resinn_t	unRESIN738;	/* 0x000005C4 */
    un_ric_resinn_t	unRESIN739;	/* 0x000005C6 */
    un_ric_resinn_t	unRESIN740;	/* 0x000005C8 */
    un_ric_resinn_t	unRESIN741;	/* 0x000005CA */
    un_ric_resinn_t	unRESIN742;	/* 0x000005CC */
    un_ric_resinn_t	unRESIN743;	/* 0x000005CE */
    un_ric_resinn_t	unRESIN744;	/* 0x000005D0 */
    un_ric_resinn_t	unRESIN745;	/* 0x000005D2 */
    un_ric_resinn_t	unRESIN746;	/* 0x000005D4 */
    un_ric_resinn_t	unRESIN747;	/* 0x000005D6 */
    un_ric_resinn_t	unRESIN748;	/* 0x000005D8 */
    un_ric_resinn_t	unRESIN749;	/* 0x000005DA */
    un_ric_resinn_t	unRESIN750;	/* 0x000005DC */
    un_ric_resinn_t	unRESIN751;	/* 0x000005DE */
    un_ric_resinn_t	unRESIN752;	/* 0x000005E0 */
    un_ric_resinn_t	unRESIN753;	/* 0x000005E2 */
    un_ric_resinn_t	unRESIN754;	/* 0x000005E4 */
    un_ric_resinn_t	unRESIN755;	/* 0x000005E6 */
    un_ric_resinn_t	unRESIN756;	/* 0x000005E8 */
    un_ric_resinn_t	unRESIN757;	/* 0x000005EA */
    un_ric_resinn_t	unRESIN758;	/* 0x000005EC */
    un_ric_resinn_t	unRESIN759;	/* 0x000005EE */
    un_ric_resinn_t	unRESIN760;	/* 0x000005F0 */
    un_ric_resinn_t	unRESIN761;	/* 0x000005F2 */
    un_ric_resinn_t	unRESIN762;	/* 0x000005F4 */
    un_ric_resinn_t	unRESIN763;	/* 0x000005F6 */
    un_ric_resinn_t	unRESIN764;	/* 0x000005F8 */
    un_ric_resinn_t	unRESIN765;	/* 0x000005FA */
    un_ric_resinn_t	unRESIN766;	/* 0x000005FC */
    un_ric_resinn_t	unRESIN767;	/* 0x000005FE */
    un_ric_resinn_t	unRESIN768;	/* 0x00000600 */
    un_ric_resinn_t	unRESIN769;	/* 0x00000602 */
    un_ric_resinn_t	unRESIN770;	/* 0x00000604 */
    un_ric_resinn_t	unRESIN771;	/* 0x00000606 */
    un_ric_resinn_t	unRESIN772;	/* 0x00000608 */
    un_ric_resinn_t	unRESIN773;	/* 0x0000060A */
    un_ric_resinn_t	unRESIN774;	/* 0x0000060C */
    un_ric_resinn_t	unRESIN775;	/* 0x0000060E */
    un_ric_resinn_t	unRESIN776;	/* 0x00000610 */
    un_ric_resinn_t	unRESIN777;	/* 0x00000612 */
    un_ric_resinn_t	unRESIN778;	/* 0x00000614 */
    un_ric_resinn_t	unRESIN779;	/* 0x00000616 */
    un_ric_resinn_t	unRESIN780;	/* 0x00000618 */
    un_ric_resinn_t	unRESIN781;	/* 0x0000061A */
    un_ric_resinn_t	unRESIN782;	/* 0x0000061C */
    un_ric_resinn_t	unRESIN783;	/* 0x0000061E */
    un_ric_resinn_t	unRESIN784;	/* 0x00000620 */
    un_ric_resinn_t	unRESIN785;	/* 0x00000622 */
    un_ric_resinn_t	unRESIN786;	/* 0x00000624 */
    un_ric_resinn_t	unRESIN787;	/* 0x00000626 */
    un_ric_resinn_t	unRESIN788;	/* 0x00000628 */
    un_ric_resinn_t	unRESIN789;	/* 0x0000062A */
    un_ric_resinn_t	unRESIN790;	/* 0x0000062C */
    un_ric_resinn_t	unRESIN791;	/* 0x0000062E */
    un_ric_resinn_t	unRESIN792;	/* 0x00000630 */
    un_ric_resinn_t	unRESIN793;	/* 0x00000632 */
    un_ric_resinn_t	unRESIN794;	/* 0x00000634 */
    un_ric_resinn_t	unRESIN795;	/* 0x00000636 */
    un_ric_resinn_t	unRESIN796;	/* 0x00000638 */
    un_ric_resinn_t	unRESIN797;	/* 0x0000063A */
    un_ric_resinn_t	unRESIN798;	/* 0x0000063C */
    un_ric_resinn_t	unRESIN799;	/* 0x0000063E */
    un_ric_resinn_t	unRESIN800;	/* 0x00000640 */
    un_ric_resinn_t	unRESIN801;	/* 0x00000642 */
    un_ric_resinn_t	unRESIN802;	/* 0x00000644 */
    un_ric_resinn_t	unRESIN803;	/* 0x00000646 */
    un_ric_resinn_t	unRESIN804;	/* 0x00000648 */
    un_ric_resinn_t	unRESIN805;	/* 0x0000064A */
    un_ric_resinn_t	unRESIN806;	/* 0x0000064C */
    un_ric_resinn_t	unRESIN807;	/* 0x0000064E */
    un_ric_resinn_t	unRESIN808;	/* 0x00000650 */
    un_ric_resinn_t	unRESIN809;	/* 0x00000652 */
    un_ric_resinn_t	unRESIN810;	/* 0x00000654 */
    un_ric_resinn_t	unRESIN811;	/* 0x00000656 */
    un_ric_resinn_t	unRESIN812;	/* 0x00000658 */
    un_ric_resinn_t	unRESIN813;	/* 0x0000065A */
    un_ric_resinn_t	unRESIN814;	/* 0x0000065C */
    un_ric_resinn_t	unRESIN815;	/* 0x0000065E */
    un_ric_resinn_t	unRESIN816;	/* 0x00000660 */
    un_ric_resinn_t	unRESIN817;	/* 0x00000662 */
    un_ric_resinn_t	unRESIN818;	/* 0x00000664 */
    un_ric_resinn_t	unRESIN819;	/* 0x00000666 */
    un_ric_resinn_t	unRESIN820;	/* 0x00000668 */
    un_ric_resinn_t	unRESIN821;	/* 0x0000066A */
    un_ric_resinn_t	unRESIN822;	/* 0x0000066C */
    un_ric_resinn_t	unRESIN823;	/* 0x0000066E */
    un_ric_resinn_t	unRESIN824;	/* 0x00000670 */
    un_ric_resinn_t	unRESIN825;	/* 0x00000672 */
    un_ric_resinn_t	unRESIN826;	/* 0x00000674 */
    un_ric_resinn_t	unRESIN827;	/* 0x00000676 */
    un_ric_resinn_t	unRESIN828;	/* 0x00000678 */
    un_ric_resinn_t	unRESIN829;	/* 0x0000067A */
    un_ric_resinn_t	unRESIN830;	/* 0x0000067C */
    un_ric_resinn_t	unRESIN831;	/* 0x0000067E */
    un_ric_resinn_t	unRESIN832;	/* 0x00000680 */
    un_ric_resinn_t	unRESIN833;	/* 0x00000682 */
    un_ric_resinn_t	unRESIN834;	/* 0x00000684 */
    un_ric_resinn_t	unRESIN835;	/* 0x00000686 */
    un_ric_resinn_t	unRESIN836;	/* 0x00000688 */
    un_ric_resinn_t	unRESIN837;	/* 0x0000068A */
    un_ric_resinn_t	unRESIN838;	/* 0x0000068C */
    un_ric_resinn_t	unRESIN839;	/* 0x0000068E */
    un_ric_resinn_t	unRESIN840;	/* 0x00000690 */
    un_ric_resinn_t	unRESIN841;	/* 0x00000692 */
    un_ric_resinn_t	unRESIN842;	/* 0x00000694 */
    un_ric_resinn_t	unRESIN843;	/* 0x00000696 */
    un_ric_resinn_t	unRESIN844;	/* 0x00000698 */
    un_ric_resinn_t	unRESIN845;	/* 0x0000069A */
    un_ric_resinn_t	unRESIN846;	/* 0x0000069C */
    un_ric_resinn_t	unRESIN847;	/* 0x0000069E */
    un_ric_resinn_t	unRESIN848;	/* 0x000006A0 */
    un_ric_resinn_t	unRESIN849;	/* 0x000006A2 */
    un_ric_resinn_t	unRESIN850;	/* 0x000006A4 */
    un_ric_resinn_t	unRESIN851;	/* 0x000006A6 */
    un_ric_resinn_t	unRESIN852;	/* 0x000006A8 */
    un_ric_resinn_t	unRESIN853;	/* 0x000006AA */
    un_ric_resinn_t	unRESIN854;	/* 0x000006AC */
    un_ric_resinn_t	unRESIN855;	/* 0x000006AE */
    un_ric_resinn_t	unRESIN856;	/* 0x000006B0 */
    un_ric_resinn_t	unRESIN857;	/* 0x000006B2 */
    un_ric_resinn_t	unRESIN858;	/* 0x000006B4 */
    un_ric_resinn_t	unRESIN859;	/* 0x000006B6 */
    un_ric_resinn_t	unRESIN860;	/* 0x000006B8 */
    un_ric_resinn_t	unRESIN861;	/* 0x000006BA */
    un_ric_resinn_t	unRESIN862;	/* 0x000006BC */
    un_ric_resinn_t	unRESIN863;	/* 0x000006BE */
    un_ric_resinn_t	unRESIN864;	/* 0x000006C0 */
    un_ric_resinn_t	unRESIN865;	/* 0x000006C2 */
    un_ric_resinn_t	unRESIN866;	/* 0x000006C4 */
    un_ric_resinn_t	unRESIN867;	/* 0x000006C6 */
    un_ric_resinn_t	unRESIN868;	/* 0x000006C8 */
    un_ric_resinn_t	unRESIN869;	/* 0x000006CA */
    un_ric_resinn_t	unRESIN870;	/* 0x000006CC */
    un_ric_resinn_t	unRESIN871;	/* 0x000006CE */
    un_ric_resinn_t	unRESIN872;	/* 0x000006D0 */
    un_ric_resinn_t	unRESIN873;	/* 0x000006D2 */
    un_ric_resinn_t	unRESIN874;	/* 0x000006D4 */
    un_ric_resinn_t	unRESIN875;	/* 0x000006D6 */
    un_ric_resinn_t	unRESIN876;	/* 0x000006D8 */
    un_ric_resinn_t	unRESIN877;	/* 0x000006DA */
    un_ric_resinn_t	unRESIN878;	/* 0x000006DC */
    un_ric_resinn_t	unRESIN879;	/* 0x000006DE */
    un_ric_resinn_t	unRESIN880;	/* 0x000006E0 */
    un_ric_resinn_t	unRESIN881;	/* 0x000006E2 */
    un_ric_resinn_t	unRESIN882;	/* 0x000006E4 */
    un_ric_resinn_t	unRESIN883;	/* 0x000006E6 */
    un_ric_resinn_t	unRESIN884;	/* 0x000006E8 */
    un_ric_resinn_t	unRESIN885;	/* 0x000006EA */
    un_ric_resinn_t	unRESIN886;	/* 0x000006EC */
    un_ric_resinn_t	unRESIN887;	/* 0x000006EE */
    un_ric_resinn_t	unRESIN888;	/* 0x000006F0 */
    un_ric_resinn_t	unRESIN889;	/* 0x000006F2 */
    un_ric_resinn_t	unRESIN890;	/* 0x000006F4 */
    un_ric_resinn_t	unRESIN891;	/* 0x000006F6 */
    un_ric_resinn_t	unRESIN892;	/* 0x000006F8 */
    un_ric_resinn_t	unRESIN893;	/* 0x000006FA */
    un_ric_resinn_t	unRESIN894;	/* 0x000006FC */
    un_ric_resinn_t	unRESIN895;	/* 0x000006FE */
    un_ric_resinn_t	unRESIN896;	/* 0x00000700 */
    un_ric_resinn_t	unRESIN897;	/* 0x00000702 */
    un_ric_resinn_t	unRESIN898;	/* 0x00000704 */
    un_ric_resinn_t	unRESIN899;	/* 0x00000706 */
    un_ric_resinn_t	unRESIN900;	/* 0x00000708 */
    un_ric_resinn_t	unRESIN901;	/* 0x0000070A */
    un_ric_resinn_t	unRESIN902;	/* 0x0000070C */
    un_ric_resinn_t	unRESIN903;	/* 0x0000070E */
    un_ric_resinn_t	unRESIN904;	/* 0x00000710 */
    un_ric_resinn_t	unRESIN905;	/* 0x00000712 */
    un_ric_resinn_t	unRESIN906;	/* 0x00000714 */
    un_ric_resinn_t	unRESIN907;	/* 0x00000716 */
    un_ric_resinn_t	unRESIN908;	/* 0x00000718 */
    un_ric_resinn_t	unRESIN909;	/* 0x0000071A */
    un_ric_resinn_t	unRESIN910;	/* 0x0000071C */
    un_ric_resinn_t	unRESIN911;	/* 0x0000071E */
    un_ric_resinn_t	unRESIN912;	/* 0x00000720 */
    un_ric_resinn_t	unRESIN913;	/* 0x00000722 */
    un_ric_resinn_t	unRESIN914;	/* 0x00000724 */
    un_ric_resinn_t	unRESIN915;	/* 0x00000726 */
    un_ric_resinn_t	unRESIN916;	/* 0x00000728 */
    un_ric_resinn_t	unRESIN917;	/* 0x0000072A */
    un_ric_resinn_t	unRESIN918;	/* 0x0000072C */
    un_ric_resinn_t	unRESIN919;	/* 0x0000072E */
    un_ric_resinn_t	unRESIN920;	/* 0x00000730 */
    un_ric_resinn_t	unRESIN921;	/* 0x00000732 */
    un_ric_resinn_t	unRESIN922;	/* 0x00000734 */
    un_ric_resinn_t	unRESIN923;	/* 0x00000736 */
    un_ric_resinn_t	unRESIN924;	/* 0x00000738 */
    un_ric_resinn_t	unRESIN925;	/* 0x0000073A */
    un_ric_resinn_t	unRESIN926;	/* 0x0000073C */
    un_ric_resinn_t	unRESIN927;	/* 0x0000073E */
    un_ric_resinn_t	unRESIN928;	/* 0x00000740 */
    un_ric_resinn_t	unRESIN929;	/* 0x00000742 */
    un_ric_resinn_t	unRESIN930;	/* 0x00000744 */
    un_ric_resinn_t	unRESIN931;	/* 0x00000746 */
    un_ric_resinn_t	unRESIN932;	/* 0x00000748 */
    un_ric_resinn_t	unRESIN933;	/* 0x0000074A */
    un_ric_resinn_t	unRESIN934;	/* 0x0000074C */
    un_ric_resinn_t	unRESIN935;	/* 0x0000074E */
    un_ric_resinn_t	unRESIN936;	/* 0x00000750 */
    un_ric_resinn_t	unRESIN937;	/* 0x00000752 */
    un_ric_resinn_t	unRESIN938;	/* 0x00000754 */
    un_ric_resinn_t	unRESIN939;	/* 0x00000756 */
    un_ric_resinn_t	unRESIN940;	/* 0x00000758 */
    un_ric_resinn_t	unRESIN941;	/* 0x0000075A */
    un_ric_resinn_t	unRESIN942;	/* 0x0000075C */
    un_ric_resinn_t	unRESIN943;	/* 0x0000075E */
    un_ric_resinn_t	unRESIN944;	/* 0x00000760 */
    un_ric_resinn_t	unRESIN945;	/* 0x00000762 */
    un_ric_resinn_t	unRESIN946;	/* 0x00000764 */
    un_ric_resinn_t	unRESIN947;	/* 0x00000766 */
    un_ric_resinn_t	unRESIN948;	/* 0x00000768 */
    un_ric_resinn_t	unRESIN949;	/* 0x0000076A */
    un_ric_resinn_t	unRESIN950;	/* 0x0000076C */
    un_ric_resinn_t	unRESIN951;	/* 0x0000076E */
    un_ric_resinn_t	unRESIN952;	/* 0x00000770 */
    un_ric_resinn_t	unRESIN953;	/* 0x00000772 */
    un_ric_resinn_t	unRESIN954;	/* 0x00000774 */
    un_ric_resinn_t	unRESIN955;	/* 0x00000776 */
    un_ric_resinn_t	unRESIN956;	/* 0x00000778 */
    un_ric_resinn_t	unRESIN957;	/* 0x0000077A */
    un_ric_resinn_t	unRESIN958;	/* 0x0000077C */
    un_ric_resinn_t	unRESIN959;	/* 0x0000077E */
    un_ric_resinn_t	unRESIN960;	/* 0x00000780 */
    un_ric_resinn_t	unRESIN961;	/* 0x00000782 */
    un_ric_resinn_t	unRESIN962;	/* 0x00000784 */
    un_ric_resinn_t	unRESIN963;	/* 0x00000786 */
    un_ric_resinn_t	unRESIN964;	/* 0x00000788 */
    un_ric_resinn_t	unRESIN965;	/* 0x0000078A */
    un_ric_resinn_t	unRESIN966;	/* 0x0000078C */
    un_ric_resinn_t	unRESIN967;	/* 0x0000078E */
    un_ric_resinn_t	unRESIN968;	/* 0x00000790 */
    un_ric_resinn_t	unRESIN969;	/* 0x00000792 */
    un_ric_resinn_t	unRESIN970;	/* 0x00000794 */
    un_ric_resinn_t	unRESIN971;	/* 0x00000796 */
    un_ric_resinn_t	unRESIN972;	/* 0x00000798 */
    un_ric_resinn_t	unRESIN973;	/* 0x0000079A */
    un_ric_resinn_t	unRESIN974;	/* 0x0000079C */
    un_ric_resinn_t	unRESIN975;	/* 0x0000079E */
    un_ric_resinn_t	unRESIN976;	/* 0x000007A0 */
    un_ric_resinn_t	unRESIN977;	/* 0x000007A2 */
    un_ric_resinn_t	unRESIN978;	/* 0x000007A4 */
    un_ric_resinn_t	unRESIN979;	/* 0x000007A6 */
    un_ric_resinn_t	unRESIN980;	/* 0x000007A8 */
    un_ric_resinn_t	unRESIN981;	/* 0x000007AA */
    un_ric_resinn_t	unRESIN982;	/* 0x000007AC */
    un_ric_resinn_t	unRESIN983;	/* 0x000007AE */
    un_ric_resinn_t	unRESIN984;	/* 0x000007B0 */
    un_ric_resinn_t	unRESIN985;	/* 0x000007B2 */
    un_ric_resinn_t	unRESIN986;	/* 0x000007B4 */
    un_ric_resinn_t	unRESIN987;	/* 0x000007B6 */
    un_ric_resinn_t	unRESIN988;	/* 0x000007B8 */
    un_ric_resinn_t	unRESIN989;	/* 0x000007BA */
    un_ric_resinn_t	unRESIN990;	/* 0x000007BC */
    un_ric_resinn_t	unRESIN991;	/* 0x000007BE */
    un_ric_resinn_t	unRESIN992;	/* 0x000007C0 */
    un_ric_resinn_t	unRESIN993;	/* 0x000007C2 */
    un_ric_resinn_t	unRESIN994;	/* 0x000007C4 */
    un_ric_resinn_t	unRESIN995;	/* 0x000007C6 */
    un_ric_resinn_t	unRESIN996;	/* 0x000007C8 */
    un_ric_resinn_t	unRESIN997;	/* 0x000007CA */
    un_ric_resinn_t	unRESIN998;	/* 0x000007CC */
    un_ric_resinn_t	unRESIN999;	/* 0x000007CE */
    un_ric_resinn_t	unRESIN1000;	/* 0x000007D0 */
    un_ric_resinn_t	unRESIN1001;	/* 0x000007D2 */
    un_ric_resinn_t	unRESIN1002;	/* 0x000007D4 */
    un_ric_resinn_t	unRESIN1003;	/* 0x000007D6 */
    un_ric_resinn_t	unRESIN1004;	/* 0x000007D8 */
    un_ric_resinn_t	unRESIN1005;	/* 0x000007DA */
    un_ric_resinn_t	unRESIN1006;	/* 0x000007DC */
    un_ric_resinn_t	unRESIN1007;	/* 0x000007DE */
    un_ric_resinn_t	unRESIN1008;	/* 0x000007E0 */
    un_ric_resinn_t	unRESIN1009;	/* 0x000007E2 */
    un_ric_resinn_t	unRESIN1010;	/* 0x000007E4 */
    un_ric_resinn_t	unRESIN1011;	/* 0x000007E6 */
    un_ric_resinn_t	unRESIN1012;	/* 0x000007E8 */
    un_ric_resinn_t	unRESIN1013;	/* 0x000007EA */
    un_ric_resinn_t	unRESIN1014;	/* 0x000007EC */
    un_ric_resinn_t	unRESIN1015;	/* 0x000007EE */
    un_ric_resinn_t	unRESIN1016;	/* 0x000007F0 */
    un_ric_resinn_t	unRESIN1017;	/* 0x000007F2 */
    un_ric_resinn_t	unRESIN1018;	/* 0x000007F4 */
    un_ric_resinn_t	unRESIN1019;	/* 0x000007F6 */
    un_ric_resinn_t	unRESIN1020;	/* 0x000007F8 */
    un_ric_resinn_t	unRESIN1021;	/* 0x000007FA */
    un_ric_resinn_t	unRESIN1022;	/* 0x000007FC */
    un_ric_resinn_t	unRESIN1023;	/* 0x000007FE */
    un_ric_resinn_t	unRESIN1024;	/* 0x00000800 */
    un_ric_resinn_t	unRESIN1025;	/* 0x00000802 */
    un_ric_resinn_t	unRESIN1026;	/* 0x00000804 */
    un_ric_resinn_t	unRESIN1027;	/* 0x00000806 */
    un_ric_resinn_t	unRESIN1028;	/* 0x00000808 */
    un_ric_resinn_t	unRESIN1029;	/* 0x0000080A */
    un_ric_resinn_t	unRESIN1030;	/* 0x0000080C */
    un_ric_resinn_t	unRESIN1031;	/* 0x0000080E */
    un_ric_resinn_t	unRESIN1032;	/* 0x00000810 */
    un_ric_resinn_t	unRESIN1033;	/* 0x00000812 */
    un_ric_resinn_t	unRESIN1034;	/* 0x00000814 */
    un_ric_resinn_t	unRESIN1035;	/* 0x00000816 */
    un_ric_resinn_t	unRESIN1036;	/* 0x00000818 */
    un_ric_resinn_t	unRESIN1037;	/* 0x0000081A */
    un_ric_resinn_t	unRESIN1038;	/* 0x0000081C */
    un_ric_resinn_t	unRESIN1039;	/* 0x0000081E */
    un_ric_resinn_t	unRESIN1040;	/* 0x00000820 */
    un_ric_resinn_t	unRESIN1041;	/* 0x00000822 */
    un_ric_resinn_t	unRESIN1042;	/* 0x00000824 */
    un_ric_resinn_t	unRESIN1043;	/* 0x00000826 */
    un_ric_resinn_t	unRESIN1044;	/* 0x00000828 */
    un_ric_resinn_t	unRESIN1045;	/* 0x0000082A */
    un_ric_resinn_t	unRESIN1046;	/* 0x0000082C */
    un_ric_resinn_t	unRESIN1047;	/* 0x0000082E */
    un_ric_resinn_t	unRESIN1048;	/* 0x00000830 */
    un_ric_resinn_t	unRESIN1049;	/* 0x00000832 */
    un_ric_resinn_t	unRESIN1050;	/* 0x00000834 */
    un_ric_resinn_t	unRESIN1051;	/* 0x00000836 */
    un_ric_resinn_t	unRESIN1052;	/* 0x00000838 */
    un_ric_resinn_t	unRESIN1053;	/* 0x0000083A */
    un_ric_resinn_t	unRESIN1054;	/* 0x0000083C */
    un_ric_resinn_t	unRESIN1055;	/* 0x0000083E */
    un_ric_resinn_t	unRESIN1056;	/* 0x00000840 */
    un_ric_resinn_t	unRESIN1057;	/* 0x00000842 */
    un_ric_resinn_t	unRESIN1058;	/* 0x00000844 */
    un_ric_resinn_t	unRESIN1059;	/* 0x00000846 */
    un_ric_resinn_t	unRESIN1060;	/* 0x00000848 */
    un_ric_resinn_t	unRESIN1061;	/* 0x0000084A */
    un_ric_resinn_t	unRESIN1062;	/* 0x0000084C */
    un_ric_resinn_t	unRESIN1063;	/* 0x0000084E */
    un_ric_resinn_t	unRESIN1064;	/* 0x00000850 */
    un_ric_resinn_t	unRESIN1065;	/* 0x00000852 */
    un_ric_resinn_t	unRESIN1066;	/* 0x00000854 */
    un_ric_resinn_t	unRESIN1067;	/* 0x00000856 */
    un_ric_resinn_t	unRESIN1068;	/* 0x00000858 */
    un_ric_resinn_t	unRESIN1069;	/* 0x0000085A */
    un_ric_resinn_t	unRESIN1070;	/* 0x0000085C */
    un_ric_resinn_t	unRESIN1071;	/* 0x0000085E */
    un_ric_resinn_t	unRESIN1072;	/* 0x00000860 */
    un_ric_resinn_t	unRESIN1073;	/* 0x00000862 */
    un_ric_resinn_t	unRESIN1074;	/* 0x00000864 */
    un_ric_resinn_t	unRESIN1075;	/* 0x00000866 */
    un_ric_resinn_t	unRESIN1076;	/* 0x00000868 */
    un_ric_resinn_t	unRESIN1077;	/* 0x0000086A */
    un_ric_resinn_t	unRESIN1078;	/* 0x0000086C */
    un_ric_resinn_t	unRESIN1079;	/* 0x0000086E */
    un_ric_resinn_t	unRESIN1080;	/* 0x00000870 */
    un_ric_resinn_t	unRESIN1081;	/* 0x00000872 */
    un_ric_resinn_t	unRESIN1082;	/* 0x00000874 */
    un_ric_resinn_t	unRESIN1083;	/* 0x00000876 */
    un_ric_resinn_t	unRESIN1084;	/* 0x00000878 */
    un_ric_resinn_t	unRESIN1085;	/* 0x0000087A */
    un_ric_resinn_t	unRESIN1086;	/* 0x0000087C */
    un_ric_resinn_t	unRESIN1087;	/* 0x0000087E */
    un_ric_resinn_t	unRESIN1088;	/* 0x00000880 */
    un_ric_resinn_t	unRESIN1089;	/* 0x00000882 */
    un_ric_resinn_t	unRESIN1090;	/* 0x00000884 */
    un_ric_resinn_t	unRESIN1091;	/* 0x00000886 */
    un_ric_resinn_t	unRESIN1092;	/* 0x00000888 */
    un_ric_resinn_t	unRESIN1093;	/* 0x0000088A */
    un_ric_resinn_t	unRESIN1094;	/* 0x0000088C */
    un_ric_resinn_t	unRESIN1095;	/* 0x0000088E */
    un_ric_resinn_t	unRESIN1096;	/* 0x00000890 */
    un_ric_resinn_t	unRESIN1097;	/* 0x00000892 */
    un_ric_resinn_t	unRESIN1098;	/* 0x00000894 */
    un_ric_resinn_t	unRESIN1099;	/* 0x00000896 */
    un_ric_resinn_t	unRESIN1100;	/* 0x00000898 */
    un_ric_resinn_t	unRESIN1101;	/* 0x0000089A */
    un_ric_resinn_t	unRESIN1102;	/* 0x0000089C */
    un_ric_resinn_t	unRESIN1103;	/* 0x0000089E */
    un_ric_resinn_t	unRESIN1104;	/* 0x000008A0 */
    un_ric_resinn_t	unRESIN1105;	/* 0x000008A2 */
    un_ric_resinn_t	unRESIN1106;	/* 0x000008A4 */
    un_ric_resinn_t	unRESIN1107;	/* 0x000008A6 */
    un_ric_resinn_t	unRESIN1108;	/* 0x000008A8 */
    un_ric_resinn_t	unRESIN1109;	/* 0x000008AA */
    un_ric_resinn_t	unRESIN1110;	/* 0x000008AC */
    un_ric_resinn_t	unRESIN1111;	/* 0x000008AE */
    un_ric_resinn_t	unRESIN1112;	/* 0x000008B0 */
    un_ric_resinn_t	unRESIN1113;	/* 0x000008B2 */
    un_ric_resinn_t	unRESIN1114;	/* 0x000008B4 */
    un_ric_resinn_t	unRESIN1115;	/* 0x000008B6 */
    un_ric_resinn_t	unRESIN1116;	/* 0x000008B8 */
    un_ric_resinn_t	unRESIN1117;	/* 0x000008BA */
    un_ric_resinn_t	unRESIN1118;	/* 0x000008BC */
    un_ric_resinn_t	unRESIN1119;	/* 0x000008BE */
    un_ric_resinn_t	unRESIN1120;	/* 0x000008C0 */
    un_ric_resinn_t	unRESIN1121;	/* 0x000008C2 */
    un_ric_resinn_t	unRESIN1122;	/* 0x000008C4 */
    un_ric_resinn_t	unRESIN1123;	/* 0x000008C6 */
    un_ric_resinn_t	unRESIN1124;	/* 0x000008C8 */
    un_ric_resinn_t	unRESIN1125;	/* 0x000008CA */
    un_ric_resinn_t	unRESIN1126;	/* 0x000008CC */
    un_ric_resinn_t	unRESIN1127;	/* 0x000008CE */
    un_ric_resinn_t	unRESIN1128;	/* 0x000008D0 */
    un_ric_resinn_t	unRESIN1129;	/* 0x000008D2 */
    un_ric_resinn_t	unRESIN1130;	/* 0x000008D4 */
    un_ric_resinn_t	unRESIN1131;	/* 0x000008D6 */
    un_ric_resinn_t	unRESIN1132;	/* 0x000008D8 */
    un_ric_resinn_t	unRESIN1133;	/* 0x000008DA */
    un_ric_resinn_t	unRESIN1134;	/* 0x000008DC */
    un_ric_resinn_t	unRESIN1135;	/* 0x000008DE */
    un_ric_resinn_t	unRESIN1136;	/* 0x000008E0 */
    un_ric_resinn_t	unRESIN1137;	/* 0x000008E2 */
    un_ric_resinn_t	unRESIN1138;	/* 0x000008E4 */
    un_ric_resinn_t	unRESIN1139;	/* 0x000008E6 */
    un_ric_resinn_t	unRESIN1140;	/* 0x000008E8 */
    un_ric_resinn_t	unRESIN1141;	/* 0x000008EA */
    un_ric_resinn_t	unRESIN1142;	/* 0x000008EC */
    un_ric_resinn_t	unRESIN1143;	/* 0x000008EE */
    un_ric_resinn_t	unRESIN1144;	/* 0x000008F0 */
    un_ric_resinn_t	unRESIN1145;	/* 0x000008F2 */
    un_ric_resinn_t	unRESIN1146;	/* 0x000008F4 */
    un_ric_resinn_t	unRESIN1147;	/* 0x000008F6 */
    un_ric_resinn_t	unRESIN1148;	/* 0x000008F8 */
    un_ric_resinn_t	unRESIN1149;	/* 0x000008FA */
    un_ric_resinn_t	unRESIN1150;	/* 0x000008FC */
    un_ric_resinn_t	unRESIN1151;	/* 0x000008FE */
    un_ric_resinn_t	unRESIN1152;	/* 0x00000900 */
    un_ric_resinn_t	unRESIN1153;	/* 0x00000902 */
    un_ric_resinn_t	unRESIN1154;	/* 0x00000904 */
    un_ric_resinn_t	unRESIN1155;	/* 0x00000906 */
    un_ric_resinn_t	unRESIN1156;	/* 0x00000908 */
    un_ric_resinn_t	unRESIN1157;	/* 0x0000090A */
    un_ric_resinn_t	unRESIN1158;	/* 0x0000090C */
    un_ric_resinn_t	unRESIN1159;	/* 0x0000090E */
    un_ric_resinn_t	unRESIN1160;	/* 0x00000910 */
    un_ric_resinn_t	unRESIN1161;	/* 0x00000912 */
    un_ric_resinn_t	unRESIN1162;	/* 0x00000914 */
    un_ric_resinn_t	unRESIN1163;	/* 0x00000916 */
    un_ric_resinn_t	unRESIN1164;	/* 0x00000918 */
    un_ric_resinn_t	unRESIN1165;	/* 0x0000091A */
    un_ric_resinn_t	unRESIN1166;	/* 0x0000091C */
    un_ric_resinn_t	unRESIN1167;	/* 0x0000091E */
    un_ric_resinn_t	unRESIN1168;	/* 0x00000920 */
    un_ric_resinn_t	unRESIN1169;	/* 0x00000922 */
    un_ric_resinn_t	unRESIN1170;	/* 0x00000924 */
    un_ric_resinn_t	unRESIN1171;	/* 0x00000926 */
    un_ric_resinn_t	unRESIN1172;	/* 0x00000928 */
    un_ric_resinn_t	unRESIN1173;	/* 0x0000092A */
    un_ric_resinn_t	unRESIN1174;	/* 0x0000092C */
    un_ric_resinn_t	unRESIN1175;	/* 0x0000092E */
    un_ric_resinn_t	unRESIN1176;	/* 0x00000930 */
    un_ric_resinn_t	unRESIN1177;	/* 0x00000932 */
    un_ric_resinn_t	unRESIN1178;	/* 0x00000934 */
    un_ric_resinn_t	unRESIN1179;	/* 0x00000936 */
    un_ric_resinn_t	unRESIN1180;	/* 0x00000938 */
    un_ric_resinn_t	unRESIN1181;	/* 0x0000093A */
    un_ric_resinn_t	unRESIN1182;	/* 0x0000093C */
    un_ric_resinn_t	unRESIN1183;	/* 0x0000093E */
    un_ric_resinn_t	unRESIN1184;	/* 0x00000940 */
    un_ric_resinn_t	unRESIN1185;	/* 0x00000942 */
    un_ric_resinn_t	unRESIN1186;	/* 0x00000944 */
    un_ric_resinn_t	unRESIN1187;	/* 0x00000946 */
    un_ric_resinn_t	unRESIN1188;	/* 0x00000948 */
    un_ric_resinn_t	unRESIN1189;	/* 0x0000094A */
    un_ric_resinn_t	unRESIN1190;	/* 0x0000094C */
    un_ric_resinn_t	unRESIN1191;	/* 0x0000094E */
    un_ric_resinn_t	unRESIN1192;	/* 0x00000950 */
    un_ric_resinn_t	unRESIN1193;	/* 0x00000952 */
    un_ric_resinn_t	unRESIN1194;	/* 0x00000954 */
    un_ric_resinn_t	unRESIN1195;	/* 0x00000956 */
    un_ric_resinn_t	unRESIN1196;	/* 0x00000958 */
    un_ric_resinn_t	unRESIN1197;	/* 0x0000095A */
    un_ric_resinn_t	unRESIN1198;	/* 0x0000095C */
    un_ric_resinn_t	unRESIN1199;	/* 0x0000095E */
    un_ric_resinn_t	unRESIN1200;	/* 0x00000960 */
    un_ric_resinn_t	unRESIN1201;	/* 0x00000962 */
    un_ric_resinn_t	unRESIN1202;	/* 0x00000964 */
    un_ric_resinn_t	unRESIN1203;	/* 0x00000966 */
    un_ric_resinn_t	unRESIN1204;	/* 0x00000968 */
    un_ric_resinn_t	unRESIN1205;	/* 0x0000096A */
    un_ric_resinn_t	unRESIN1206;	/* 0x0000096C */
    un_ric_resinn_t	unRESIN1207;	/* 0x0000096E */
    un_ric_resinn_t	unRESIN1208;	/* 0x00000970 */
    un_ric_resinn_t	unRESIN1209;	/* 0x00000972 */
    un_ric_resinn_t	unRESIN1210;	/* 0x00000974 */
    un_ric_resinn_t	unRESIN1211;	/* 0x00000976 */
    un_ric_resinn_t	unRESIN1212;	/* 0x00000978 */
    un_ric_resinn_t	unRESIN1213;	/* 0x0000097A */
    un_ric_resinn_t	unRESIN1214;	/* 0x0000097C */
    un_ric_resinn_t	unRESIN1215;	/* 0x0000097E */
    un_ric_resinn_t	unRESIN1216;	/* 0x00000980 */
    un_ric_resinn_t	unRESIN1217;	/* 0x00000982 */
    un_ric_resinn_t	unRESIN1218;	/* 0x00000984 */
    un_ric_resinn_t	unRESIN1219;	/* 0x00000986 */
    un_ric_resinn_t	unRESIN1220;	/* 0x00000988 */
    un_ric_resinn_t	unRESIN1221;	/* 0x0000098A */
    un_ric_resinn_t	unRESIN1222;	/* 0x0000098C */
    un_ric_resinn_t	unRESIN1223;	/* 0x0000098E */
    un_ric_resinn_t	unRESIN1224;	/* 0x00000990 */
    un_ric_resinn_t	unRESIN1225;	/* 0x00000992 */
    un_ric_resinn_t	unRESIN1226;	/* 0x00000994 */
    un_ric_resinn_t	unRESIN1227;	/* 0x00000996 */
    un_ric_resinn_t	unRESIN1228;	/* 0x00000998 */
    un_ric_resinn_t	unRESIN1229;	/* 0x0000099A */
    un_ric_resinn_t	unRESIN1230;	/* 0x0000099C */
    un_ric_resinn_t	unRESIN1231;	/* 0x0000099E */
    un_ric_resinn_t	unRESIN1232;	/* 0x000009A0 */
    un_ric_resinn_t	unRESIN1233;	/* 0x000009A2 */
    un_ric_resinn_t	unRESIN1234;	/* 0x000009A4 */
    un_ric_resinn_t	unRESIN1235;	/* 0x000009A6 */
    un_ric_resinn_t	unRESIN1236;	/* 0x000009A8 */
    un_ric_resinn_t	unRESIN1237;	/* 0x000009AA */
    un_ric_resinn_t	unRESIN1238;	/* 0x000009AC */
    un_ric_resinn_t	unRESIN1239;	/* 0x000009AE */
    un_ric_resinn_t	unRESIN1240;	/* 0x000009B0 */
    un_ric_resinn_t	unRESIN1241;	/* 0x000009B2 */
    un_ric_resinn_t	unRESIN1242;	/* 0x000009B4 */
    un_ric_resinn_t	unRESIN1243;	/* 0x000009B6 */
    un_ric_resinn_t	unRESIN1244;	/* 0x000009B8 */
    un_ric_resinn_t	unRESIN1245;	/* 0x000009BA */
    un_ric_resinn_t	unRESIN1246;	/* 0x000009BC */
    un_ric_resinn_t	unRESIN1247;	/* 0x000009BE */
    un_ric_resinn_t	unRESIN1248;	/* 0x000009C0 */
    un_ric_resinn_t	unRESIN1249;	/* 0x000009C2 */
    un_ric_resinn_t	unRESIN1250;	/* 0x000009C4 */
    un_ric_resinn_t	unRESIN1251;	/* 0x000009C6 */
    un_ric_resinn_t	unRESIN1252;	/* 0x000009C8 */
    un_ric_resinn_t	unRESIN1253;	/* 0x000009CA */
    un_ric_resinn_t	unRESIN1254;	/* 0x000009CC */
    un_ric_resinn_t	unRESIN1255;	/* 0x000009CE */
    un_ric_resinn_t	unRESIN1256;	/* 0x000009D0 */
    un_ric_resinn_t	unRESIN1257;	/* 0x000009D2 */
    un_ric_resinn_t	unRESIN1258;	/* 0x000009D4 */
    un_ric_resinn_t	unRESIN1259;	/* 0x000009D6 */
    un_ric_resinn_t	unRESIN1260;	/* 0x000009D8 */
    un_ric_resinn_t	unRESIN1261;	/* 0x000009DA */
    un_ric_resinn_t	unRESIN1262;	/* 0x000009DC */
    un_ric_resinn_t	unRESIN1263;	/* 0x000009DE */
    un_ric_resinn_t	unRESIN1264;	/* 0x000009E0 */
    un_ric_resinn_t	unRESIN1265;	/* 0x000009E2 */
    un_ric_resinn_t	unRESIN1266;	/* 0x000009E4 */
    un_ric_resinn_t	unRESIN1267;	/* 0x000009E6 */
    un_ric_resinn_t	unRESIN1268;	/* 0x000009E8 */
    un_ric_resinn_t	unRESIN1269;	/* 0x000009EA */
    un_ric_resinn_t	unRESIN1270;	/* 0x000009EC */
    un_ric_resinn_t	unRESIN1271;	/* 0x000009EE */
    un_ric_resinn_t	unRESIN1272;	/* 0x000009F0 */
    un_ric_resinn_t	unRESIN1273;	/* 0x000009F2 */
    un_ric_resinn_t	unRESIN1274;	/* 0x000009F4 */
    un_ric_resinn_t	unRESIN1275;	/* 0x000009F6 */
    un_ric_resinn_t	unRESIN1276;	/* 0x000009F8 */
    un_ric_resinn_t	unRESIN1277;	/* 0x000009FA */
    un_ric_resinn_t	unRESIN1278;	/* 0x000009FC */
    un_ric_resinn_t	unRESIN1279;	/* 0x000009FE */
    un_ric_resinn_t	unRESIN1280;	/* 0x00000A00 */
    un_ric_resinn_t	unRESIN1281;	/* 0x00000A02 */
    un_ric_resinn_t	unRESIN1282;	/* 0x00000A04 */
    un_ric_resinn_t	unRESIN1283;	/* 0x00000A06 */
    un_ric_resinn_t	unRESIN1284;	/* 0x00000A08 */
    un_ric_resinn_t	unRESIN1285;	/* 0x00000A0A */
    un_ric_resinn_t	unRESIN1286;	/* 0x00000A0C */
    un_ric_resinn_t	unRESIN1287;	/* 0x00000A0E */
    un_ric_resinn_t	unRESIN1288;	/* 0x00000A10 */
    un_ric_resinn_t	unRESIN1289;	/* 0x00000A12 */
    un_ric_resinn_t	unRESIN1290;	/* 0x00000A14 */
    un_ric_resinn_t	unRESIN1291;	/* 0x00000A16 */
    un_ric_resinn_t	unRESIN1292;	/* 0x00000A18 */
    un_ric_resinn_t	unRESIN1293;	/* 0x00000A1A */
    un_ric_resinn_t	unRESIN1294;	/* 0x00000A1C */
    un_ric_resinn_t	unRESIN1295;	/* 0x00000A1E */
    un_ric_resinn_t	unRESIN1296;	/* 0x00000A20 */
    un_ric_resinn_t	unRESIN1297;	/* 0x00000A22 */
    un_ric_resinn_t	unRESIN1298;	/* 0x00000A24 */
    un_ric_resinn_t	unRESIN1299;	/* 0x00000A26 */
    un_ric_resinn_t	unRESIN1300;	/* 0x00000A28 */
    un_ric_resinn_t	unRESIN1301;	/* 0x00000A2A */
    un_ric_resinn_t	unRESIN1302;	/* 0x00000A2C */
    un_ric_resinn_t	unRESIN1303;	/* 0x00000A2E */
    un_ric_resinn_t	unRESIN1304;	/* 0x00000A30 */
    un_ric_resinn_t	unRESIN1305;	/* 0x00000A32 */
    un_ric_resinn_t	unRESIN1306;	/* 0x00000A34 */
    un_ric_resinn_t	unRESIN1307;	/* 0x00000A36 */
    un_ric_resinn_t	unRESIN1308;	/* 0x00000A38 */
    un_ric_resinn_t	unRESIN1309;	/* 0x00000A3A */
    un_ric_resinn_t	unRESIN1310;	/* 0x00000A3C */
    un_ric_resinn_t	unRESIN1311;	/* 0x00000A3E */
    un_ric_resinn_t	unRESIN1312;	/* 0x00000A40 */
    un_ric_resinn_t	unRESIN1313;	/* 0x00000A42 */
    un_ric_resinn_t	unRESIN1314;	/* 0x00000A44 */
    un_ric_resinn_t	unRESIN1315;	/* 0x00000A46 */
    un_ric_resinn_t	unRESIN1316;	/* 0x00000A48 */
    un_ric_resinn_t	unRESIN1317;	/* 0x00000A4A */
    un_ric_resinn_t	unRESIN1318;	/* 0x00000A4C */
    un_ric_resinn_t	unRESIN1319;	/* 0x00000A4E */
    un_ric_resinn_t	unRESIN1320;	/* 0x00000A50 */
    un_ric_resinn_t	unRESIN1321;	/* 0x00000A52 */
    un_ric_resinn_t	unRESIN1322;	/* 0x00000A54 */
    un_ric_resinn_t	unRESIN1323;	/* 0x00000A56 */
    un_ric_resinn_t	unRESIN1324;	/* 0x00000A58 */
    un_ric_resinn_t	unRESIN1325;	/* 0x00000A5A */
    un_ric_resinn_t	unRESIN1326;	/* 0x00000A5C */
    un_ric_resinn_t	unRESIN1327;	/* 0x00000A5E */
    un_ric_resinn_t	unRESIN1328;	/* 0x00000A60 */
    un_ric_resinn_t	unRESIN1329;	/* 0x00000A62 */
    un_ric_resinn_t	unRESIN1330;	/* 0x00000A64 */
    un_ric_resinn_t	unRESIN1331;	/* 0x00000A66 */
    un_ric_resinn_t	unRESIN1332;	/* 0x00000A68 */
    un_ric_resinn_t	unRESIN1333;	/* 0x00000A6A */
    un_ric_resinn_t	unRESIN1334;	/* 0x00000A6C */
    un_ric_resinn_t	unRESIN1335;	/* 0x00000A6E */
    un_ric_resinn_t	unRESIN1336;	/* 0x00000A70 */
    un_ric_resinn_t	unRESIN1337;	/* 0x00000A72 */
    un_ric_resinn_t	unRESIN1338;	/* 0x00000A74 */
    un_ric_resinn_t	unRESIN1339;	/* 0x00000A76 */
    un_ric_resinn_t	unRESIN1340;	/* 0x00000A78 */
    un_ric_resinn_t	unRESIN1341;	/* 0x00000A7A */
    un_ric_resinn_t	unRESIN1342;	/* 0x00000A7C */
    un_ric_resinn_t	unRESIN1343;	/* 0x00000A7E */
    un_ric_resinn_t	unRESIN1344;	/* 0x00000A80 */
    un_ric_resinn_t	unRESIN1345;	/* 0x00000A82 */
    un_ric_resinn_t	unRESIN1346;	/* 0x00000A84 */
    un_ric_resinn_t	unRESIN1347;	/* 0x00000A86 */
    un_ric_resinn_t	unRESIN1348;	/* 0x00000A88 */
    un_ric_resinn_t	unRESIN1349;	/* 0x00000A8A */
    un_ric_resinn_t	unRESIN1350;	/* 0x00000A8C */
    un_ric_resinn_t	unRESIN1351;	/* 0x00000A8E */
    un_ric_resinn_t	unRESIN1352;	/* 0x00000A90 */
    un_ric_resinn_t	unRESIN1353;	/* 0x00000A92 */
    un_ric_resinn_t	unRESIN1354;	/* 0x00000A94 */
    un_ric_resinn_t	unRESIN1355;	/* 0x00000A96 */
    un_ric_resinn_t	unRESIN1356;	/* 0x00000A98 */
    un_ric_resinn_t	unRESIN1357;	/* 0x00000A9A */
    un_ric_resinn_t	unRESIN1358;	/* 0x00000A9C */
    un_ric_resinn_t	unRESIN1359;	/* 0x00000A9E */
    un_ric_resinn_t	unRESIN1360;	/* 0x00000AA0 */
    un_ric_resinn_t	unRESIN1361;	/* 0x00000AA2 */
    un_ric_resinn_t	unRESIN1362;	/* 0x00000AA4 */
    un_ric_resinn_t	unRESIN1363;	/* 0x00000AA6 */
    un_ric_resinn_t	unRESIN1364;	/* 0x00000AA8 */
    un_ric_resinn_t	unRESIN1365;	/* 0x00000AAA */
    un_ric_resinn_t	unRESIN1366;	/* 0x00000AAC */
    un_ric_resinn_t	unRESIN1367;	/* 0x00000AAE */
    un_ric_resinn_t	unRESIN1368;	/* 0x00000AB0 */
    un_ric_resinn_t	unRESIN1369;	/* 0x00000AB2 */
    un_ric_resinn_t	unRESIN1370;	/* 0x00000AB4 */
    un_ric_resinn_t	unRESIN1371;	/* 0x00000AB6 */
    un_ric_resinn_t	unRESIN1372;	/* 0x00000AB8 */
    un_ric_resinn_t	unRESIN1373;	/* 0x00000ABA */
    un_ric_resinn_t	unRESIN1374;	/* 0x00000ABC */
    un_ric_resinn_t	unRESIN1375;	/* 0x00000ABE */
    un_ric_resinn_t	unRESIN1376;	/* 0x00000AC0 */
    un_ric_resinn_t	unRESIN1377;	/* 0x00000AC2 */
    un_ric_resinn_t	unRESIN1378;	/* 0x00000AC4 */
    un_ric_resinn_t	unRESIN1379;	/* 0x00000AC6 */
    un_ric_resinn_t	unRESIN1380;	/* 0x00000AC8 */
    un_ric_resinn_t	unRESIN1381;	/* 0x00000ACA */
    un_ric_resinn_t	unRESIN1382;	/* 0x00000ACC */
    un_ric_resinn_t	unRESIN1383;	/* 0x00000ACE */
    un_ric_resinn_t	unRESIN1384;	/* 0x00000AD0 */
    un_ric_resinn_t	unRESIN1385;	/* 0x00000AD2 */
    un_ric_resinn_t	unRESIN1386;	/* 0x00000AD4 */
    un_ric_resinn_t	unRESIN1387;	/* 0x00000AD6 */
    un_ric_resinn_t	unRESIN1388;	/* 0x00000AD8 */
    un_ric_resinn_t	unRESIN1389;	/* 0x00000ADA */
    un_ric_resinn_t	unRESIN1390;	/* 0x00000ADC */
    un_ric_resinn_t	unRESIN1391;	/* 0x00000ADE */
    un_ric_resinn_t	unRESIN1392;	/* 0x00000AE0 */
    un_ric_resinn_t	unRESIN1393;	/* 0x00000AE2 */
    un_ric_resinn_t	unRESIN1394;	/* 0x00000AE4 */
    un_ric_resinn_t	unRESIN1395;	/* 0x00000AE6 */
    un_ric_resinn_t	unRESIN1396;	/* 0x00000AE8 */
    un_ric_resinn_t	unRESIN1397;	/* 0x00000AEA */
    un_ric_resinn_t	unRESIN1398;	/* 0x00000AEC */
    un_ric_resinn_t	unRESIN1399;	/* 0x00000AEE */
    un_ric_resinn_t	unRESIN1400;	/* 0x00000AF0 */
    un_ric_resinn_t	unRESIN1401;	/* 0x00000AF2 */
    un_ric_resinn_t	unRESIN1402;	/* 0x00000AF4 */
    un_ric_resinn_t	unRESIN1403;	/* 0x00000AF6 */
    un_ric_resinn_t	unRESIN1404;	/* 0x00000AF8 */
    un_ric_resinn_t	unRESIN1405;	/* 0x00000AFA */
    un_ric_resinn_t	unRESIN1406;	/* 0x00000AFC */
    un_ric_resinn_t	unRESIN1407;	/* 0x00000AFE */
    un_ric_resinn_t	unRESIN1408;	/* 0x00000B00 */
    un_ric_resinn_t	unRESIN1409;	/* 0x00000B02 */
    un_ric_resinn_t	unRESIN1410;	/* 0x00000B04 */
    un_ric_resinn_t	unRESIN1411;	/* 0x00000B06 */
    un_ric_resinn_t	unRESIN1412;	/* 0x00000B08 */
    un_ric_resinn_t	unRESIN1413;	/* 0x00000B0A */
    un_ric_resinn_t	unRESIN1414;	/* 0x00000B0C */
    un_ric_resinn_t	unRESIN1415;	/* 0x00000B0E */
    un_ric_resinn_t	unRESIN1416;	/* 0x00000B10 */
    un_ric_resinn_t	unRESIN1417;	/* 0x00000B12 */
    un_ric_resinn_t	unRESIN1418;	/* 0x00000B14 */
    un_ric_resinn_t	unRESIN1419;	/* 0x00000B16 */
    un_ric_resinn_t	unRESIN1420;	/* 0x00000B18 */
    un_ric_resinn_t	unRESIN1421;	/* 0x00000B1A */
    un_ric_resinn_t	unRESIN1422;	/* 0x00000B1C */
    un_ric_resinn_t	unRESIN1423;	/* 0x00000B1E */
    un_ric_resinn_t	unRESIN1424;	/* 0x00000B20 */
    un_ric_resinn_t	unRESIN1425;	/* 0x00000B22 */
    un_ric_resinn_t	unRESIN1426;	/* 0x00000B24 */
    un_ric_resinn_t	unRESIN1427;	/* 0x00000B26 */
    un_ric_resinn_t	unRESIN1428;	/* 0x00000B28 */
    un_ric_resinn_t	unRESIN1429;	/* 0x00000B2A */
    un_ric_resinn_t	unRESIN1430;	/* 0x00000B2C */
    un_ric_resinn_t	unRESIN1431;	/* 0x00000B2E */
    un_ric_resinn_t	unRESIN1432;	/* 0x00000B30 */
    un_ric_resinn_t	unRESIN1433;	/* 0x00000B32 */
    un_ric_resinn_t	unRESIN1434;	/* 0x00000B34 */
    un_ric_resinn_t	unRESIN1435;	/* 0x00000B36 */
    un_ric_resinn_t	unRESIN1436;	/* 0x00000B38 */
    un_ric_resinn_t	unRESIN1437;	/* 0x00000B3A */
    un_ric_resinn_t	unRESIN1438;	/* 0x00000B3C */
    un_ric_resinn_t	unRESIN1439;	/* 0x00000B3E */
    un_ric_resinn_t	unRESIN1440;	/* 0x00000B40 */
    un_ric_resinn_t	unRESIN1441;	/* 0x00000B42 */
    un_ric_resinn_t	unRESIN1442;	/* 0x00000B44 */
    un_ric_resinn_t	unRESIN1443;	/* 0x00000B46 */
    un_ric_resinn_t	unRESIN1444;	/* 0x00000B48 */
    un_ric_resinn_t	unRESIN1445;	/* 0x00000B4A */
    un_ric_resinn_t	unRESIN1446;	/* 0x00000B4C */
    un_ric_resinn_t	unRESIN1447;	/* 0x00000B4E */
    un_ric_resinn_t	unRESIN1448;	/* 0x00000B50 */
    un_ric_resinn_t	unRESIN1449;	/* 0x00000B52 */
    un_ric_resinn_t	unRESIN1450;	/* 0x00000B54 */
    un_ric_resinn_t	unRESIN1451;	/* 0x00000B56 */
    un_ric_resinn_t	unRESIN1452;	/* 0x00000B58 */
    un_ric_resinn_t	unRESIN1453;	/* 0x00000B5A */
    un_ric_resinn_t	unRESIN1454;	/* 0x00000B5C */
    un_ric_resinn_t	unRESIN1455;	/* 0x00000B5E */
    un_ric_resinn_t	unRESIN1456;	/* 0x00000B60 */
    un_ric_resinn_t	unRESIN1457;	/* 0x00000B62 */
    un_ric_resinn_t	unRESIN1458;	/* 0x00000B64 */
    un_ric_resinn_t	unRESIN1459;	/* 0x00000B66 */
    un_ric_resinn_t	unRESIN1460;	/* 0x00000B68 */
    un_ric_resinn_t	unRESIN1461;	/* 0x00000B6A */
    un_ric_resinn_t	unRESIN1462;	/* 0x00000B6C */
    un_ric_resinn_t	unRESIN1463;	/* 0x00000B6E */
    un_ric_resinn_t	unRESIN1464;	/* 0x00000B70 */
    un_ric_resinn_t	unRESIN1465;	/* 0x00000B72 */
    un_ric_resinn_t	unRESIN1466;	/* 0x00000B74 */
    un_ric_resinn_t	unRESIN1467;	/* 0x00000B76 */
    un_ric_resinn_t	unRESIN1468;	/* 0x00000B78 */
    un_ric_resinn_t	unRESIN1469;	/* 0x00000B7A */
    un_ric_resinn_t	unRESIN1470;	/* 0x00000B7C */
    un_ric_resinn_t	unRESIN1471;	/* 0x00000B7E */
    un_ric_resinn_t	unRESIN1472;	/* 0x00000B80 */
    un_ric_resinn_t	unRESIN1473;	/* 0x00000B82 */
    un_ric_resinn_t	unRESIN1474;	/* 0x00000B84 */
    un_ric_resinn_t	unRESIN1475;	/* 0x00000B86 */
    un_ric_resinn_t	unRESIN1476;	/* 0x00000B88 */
    un_ric_resinn_t	unRESIN1477;	/* 0x00000B8A */
    un_ric_resinn_t	unRESIN1478;	/* 0x00000B8C */
    un_ric_resinn_t	unRESIN1479;	/* 0x00000B8E */
    un_ric_resinn_t	unRESIN1480;	/* 0x00000B90 */
    un_ric_resinn_t	unRESIN1481;	/* 0x00000B92 */
    un_ric_resinn_t	unRESIN1482;	/* 0x00000B94 */
    un_ric_resinn_t	unRESIN1483;	/* 0x00000B96 */
    un_ric_resinn_t	unRESIN1484;	/* 0x00000B98 */
    un_ric_resinn_t	unRESIN1485;	/* 0x00000B9A */
    un_ric_resinn_t	unRESIN1486;	/* 0x00000B9C */
    un_ric_resinn_t	unRESIN1487;	/* 0x00000B9E */
    un_ric_resinn_t	unRESIN1488;	/* 0x00000BA0 */
    un_ric_resinn_t	unRESIN1489;	/* 0x00000BA2 */
    un_ric_resinn_t	unRESIN1490;	/* 0x00000BA4 */
    un_ric_resinn_t	unRESIN1491;	/* 0x00000BA6 */
    un_ric_resinn_t	unRESIN1492;	/* 0x00000BA8 */
    un_ric_resinn_t	unRESIN1493;	/* 0x00000BAA */
    un_ric_resinn_t	unRESIN1494;	/* 0x00000BAC */
    un_ric_resinn_t	unRESIN1495;	/* 0x00000BAE */
    un_ric_resinn_t	unRESIN1496;	/* 0x00000BB0 */
    un_ric_resinn_t	unRESIN1497;	/* 0x00000BB2 */
    un_ric_resinn_t	unRESIN1498;	/* 0x00000BB4 */
    un_ric_resinn_t	unRESIN1499;	/* 0x00000BB6 */
    un_ric_resinn_t	unRESIN1500;	/* 0x00000BB8 */
    un_ric_resinn_t	unRESIN1501;	/* 0x00000BBA */
    un_ric_resinn_t	unRESIN1502;	/* 0x00000BBC */
    un_ric_resinn_t	unRESIN1503;	/* 0x00000BBE */
    un_ric_resinn_t	unRESIN1504;	/* 0x00000BC0 */
    un_ric_resinn_t	unRESIN1505;	/* 0x00000BC2 */
    un_ric_resinn_t	unRESIN1506;	/* 0x00000BC4 */
    un_ric_resinn_t	unRESIN1507;	/* 0x00000BC6 */
    un_ric_resinn_t	unRESIN1508;	/* 0x00000BC8 */
    un_ric_resinn_t	unRESIN1509;	/* 0x00000BCA */
    un_ric_resinn_t	unRESIN1510;	/* 0x00000BCC */
    un_ric_resinn_t	unRESIN1511;	/* 0x00000BCE */
    un_ric_resinn_t	unRESIN1512;	/* 0x00000BD0 */
    un_ric_resinn_t	unRESIN1513;	/* 0x00000BD2 */
    un_ric_resinn_t	unRESIN1514;	/* 0x00000BD4 */
    un_ric_resinn_t	unRESIN1515;	/* 0x00000BD6 */
    un_ric_resinn_t	unRESIN1516;	/* 0x00000BD8 */
    un_ric_resinn_t	unRESIN1517;	/* 0x00000BDA */
    un_ric_resinn_t	unRESIN1518;	/* 0x00000BDC */
    un_ric_resinn_t	unRESIN1519;	/* 0x00000BDE */
    un_ric_resinn_t	unRESIN1520;	/* 0x00000BE0 */
    un_ric_resinn_t	unRESIN1521;	/* 0x00000BE2 */
    un_ric_resinn_t	unRESIN1522;	/* 0x00000BE4 */
    un_ric_resinn_t	unRESIN1523;	/* 0x00000BE6 */
    un_ric_resinn_t	unRESIN1524;	/* 0x00000BE8 */
    un_ric_resinn_t	unRESIN1525;	/* 0x00000BEA */
    un_ric_resinn_t	unRESIN1526;	/* 0x00000BEC */
    un_ric_resinn_t	unRESIN1527;	/* 0x00000BEE */
    un_ric_resinn_t	unRESIN1528;	/* 0x00000BF0 */
    un_ric_resinn_t	unRESIN1529;	/* 0x00000BF2 */
    un_ric_resinn_t	unRESIN1530;	/* 0x00000BF4 */
    un_ric_resinn_t	unRESIN1531;	/* 0x00000BF6 */
    un_ric_resinn_t	unRESIN1532;	/* 0x00000BF8 */
    un_ric_resinn_t	unRESIN1533;	/* 0x00000BFA */
    un_ric_resinn_t	unRESIN1534;	/* 0x00000BFC */
    un_ric_resinn_t	unRESIN1535;	/* 0x00000BFE */
    un_ric_resinn_t	unRESIN1536;	/* 0x00000C00 */
    un_ric_resinn_t	unRESIN1537;	/* 0x00000C02 */
    un_ric_resinn_t	unRESIN1538;	/* 0x00000C04 */
    un_ric_resinn_t	unRESIN1539;	/* 0x00000C06 */
    un_ric_resinn_t	unRESIN1540;	/* 0x00000C08 */
    un_ric_resinn_t	unRESIN1541;	/* 0x00000C0A */
    un_ric_resinn_t	unRESIN1542;	/* 0x00000C0C */
    un_ric_resinn_t	unRESIN1543;	/* 0x00000C0E */
    un_ric_resinn_t	unRESIN1544;	/* 0x00000C10 */
    un_ric_resinn_t	unRESIN1545;	/* 0x00000C12 */
    un_ric_resinn_t	unRESIN1546;	/* 0x00000C14 */
    un_ric_resinn_t	unRESIN1547;	/* 0x00000C16 */
    un_ric_resinn_t	unRESIN1548;	/* 0x00000C18 */
    un_ric_resinn_t	unRESIN1549;	/* 0x00000C1A */
    un_ric_resinn_t	unRESIN1550;	/* 0x00000C1C */
    un_ric_resinn_t	unRESIN1551;	/* 0x00000C1E */
    un_ric_resinn_t	unRESIN1552;	/* 0x00000C20 */
    un_ric_resinn_t	unRESIN1553;	/* 0x00000C22 */
    un_ric_resinn_t	unRESIN1554;	/* 0x00000C24 */
    un_ric_resinn_t	unRESIN1555;	/* 0x00000C26 */
    un_ric_resinn_t	unRESIN1556;	/* 0x00000C28 */
    un_ric_resinn_t	unRESIN1557;	/* 0x00000C2A */
    un_ric_resinn_t	unRESIN1558;	/* 0x00000C2C */
    un_ric_resinn_t	unRESIN1559;	/* 0x00000C2E */
    un_ric_resinn_t	unRESIN1560;	/* 0x00000C30 */
    un_ric_resinn_t	unRESIN1561;	/* 0x00000C32 */
    un_ric_resinn_t	unRESIN1562;	/* 0x00000C34 */
    un_ric_resinn_t	unRESIN1563;	/* 0x00000C36 */
    un_ric_resinn_t	unRESIN1564;	/* 0x00000C38 */
    un_ric_resinn_t	unRESIN1565;	/* 0x00000C3A */
    un_ric_resinn_t	unRESIN1566;	/* 0x00000C3C */
    un_ric_resinn_t	unRESIN1567;	/* 0x00000C3E */
    un_ric_resinn_t	unRESIN1568;	/* 0x00000C40 */
    un_ric_resinn_t	unRESIN1569;	/* 0x00000C42 */
    un_ric_resinn_t	unRESIN1570;	/* 0x00000C44 */
    un_ric_resinn_t	unRESIN1571;	/* 0x00000C46 */
    un_ric_resinn_t	unRESIN1572;	/* 0x00000C48 */
    un_ric_resinn_t	unRESIN1573;	/* 0x00000C4A */
    un_ric_resinn_t	unRESIN1574;	/* 0x00000C4C */
    un_ric_resinn_t	unRESIN1575;	/* 0x00000C4E */
    un_ric_resinn_t	unRESIN1576;	/* 0x00000C50 */
    un_ric_resinn_t	unRESIN1577;	/* 0x00000C52 */
    un_ric_resinn_t	unRESIN1578;	/* 0x00000C54 */
    un_ric_resinn_t	unRESIN1579;	/* 0x00000C56 */
    un_ric_resinn_t	unRESIN1580;	/* 0x00000C58 */
    un_ric_resinn_t	unRESIN1581;	/* 0x00000C5A */
    un_ric_resinn_t	unRESIN1582;	/* 0x00000C5C */
    un_ric_resinn_t	unRESIN1583;	/* 0x00000C5E */
    un_ric_resinn_t	unRESIN1584;	/* 0x00000C60 */
    un_ric_resinn_t	unRESIN1585;	/* 0x00000C62 */
    un_ric_resinn_t	unRESIN1586;	/* 0x00000C64 */
    un_ric_resinn_t	unRESIN1587;	/* 0x00000C66 */
    un_ric_resinn_t	unRESIN1588;	/* 0x00000C68 */
    un_ric_resinn_t	unRESIN1589;	/* 0x00000C6A */
    un_ric_resinn_t	unRESIN1590;	/* 0x00000C6C */
    un_ric_resinn_t	unRESIN1591;	/* 0x00000C6E */
    un_ric_resinn_t	unRESIN1592;	/* 0x00000C70 */
    un_ric_resinn_t	unRESIN1593;	/* 0x00000C72 */
    un_ric_resinn_t	unRESIN1594;	/* 0x00000C74 */
    un_ric_resinn_t	unRESIN1595;	/* 0x00000C76 */
    un_ric_resinn_t	unRESIN1596;	/* 0x00000C78 */
    un_ric_resinn_t	unRESIN1597;	/* 0x00000C7A */
    un_ric_resinn_t	unRESIN1598;	/* 0x00000C7C */
    un_ric_resinn_t	unRESIN1599;	/* 0x00000C7E */
    un_ric_resinn_t	unRESIN1600;	/* 0x00000C80 */
    un_ric_resinn_t	unRESIN1601;	/* 0x00000C82 */
    un_ric_resinn_t	unRESIN1602;	/* 0x00000C84 */
    un_ric_resinn_t	unRESIN1603;	/* 0x00000C86 */
    un_ric_resinn_t	unRESIN1604;	/* 0x00000C88 */
    un_ric_resinn_t	unRESIN1605;	/* 0x00000C8A */
    un_ric_resinn_t	unRESIN1606;	/* 0x00000C8C */
    un_ric_resinn_t	unRESIN1607;	/* 0x00000C8E */
    un_ric_resinn_t	unRESIN1608;	/* 0x00000C90 */
    un_ric_resinn_t	unRESIN1609;	/* 0x00000C92 */
    un_ric_resinn_t	unRESIN1610;	/* 0x00000C94 */
    un_ric_resinn_t	unRESIN1611;	/* 0x00000C96 */
    un_ric_resinn_t	unRESIN1612;	/* 0x00000C98 */
    un_ric_resinn_t	unRESIN1613;	/* 0x00000C9A */
    un_ric_resinn_t	unRESIN1614;	/* 0x00000C9C */
    un_ric_resinn_t	unRESIN1615;	/* 0x00000C9E */
    un_ric_resinn_t	unRESIN1616;	/* 0x00000CA0 */
    un_ric_resinn_t	unRESIN1617;	/* 0x00000CA2 */
    un_ric_resinn_t	unRESIN1618;	/* 0x00000CA4 */
    un_ric_resinn_t	unRESIN1619;	/* 0x00000CA6 */
    un_ric_resinn_t	unRESIN1620;	/* 0x00000CA8 */
    un_ric_resinn_t	unRESIN1621;	/* 0x00000CAA */
    un_ric_resinn_t	unRESIN1622;	/* 0x00000CAC */
    un_ric_resinn_t	unRESIN1623;	/* 0x00000CAE */
    un_ric_resinn_t	unRESIN1624;	/* 0x00000CB0 */
    un_ric_resinn_t	unRESIN1625;	/* 0x00000CB2 */
    un_ric_resinn_t	unRESIN1626;	/* 0x00000CB4 */
    un_ric_resinn_t	unRESIN1627;	/* 0x00000CB6 */
    un_ric_resinn_t	unRESIN1628;	/* 0x00000CB8 */
    un_ric_resinn_t	unRESIN1629;	/* 0x00000CBA */
    un_ric_resinn_t	unRESIN1630;	/* 0x00000CBC */
    un_ric_resinn_t	unRESIN1631;	/* 0x00000CBE */
    un_ric_resinn_t	unRESIN1632;	/* 0x00000CC0 */
    un_ric_resinn_t	unRESIN1633;	/* 0x00000CC2 */
    un_ric_resinn_t	unRESIN1634;	/* 0x00000CC4 */
    un_ric_resinn_t	unRESIN1635;	/* 0x00000CC6 */
    un_ric_resinn_t	unRESIN1636;	/* 0x00000CC8 */
    un_ric_resinn_t	unRESIN1637;	/* 0x00000CCA */
    un_ric_resinn_t	unRESIN1638;	/* 0x00000CCC */
    un_ric_resinn_t	unRESIN1639;	/* 0x00000CCE */
    un_ric_resinn_t	unRESIN1640;	/* 0x00000CD0 */
    un_ric_resinn_t	unRESIN1641;	/* 0x00000CD2 */
    un_ric_resinn_t	unRESIN1642;	/* 0x00000CD4 */
    un_ric_resinn_t	unRESIN1643;	/* 0x00000CD6 */
    un_ric_resinn_t	unRESIN1644;	/* 0x00000CD8 */
    un_ric_resinn_t	unRESIN1645;	/* 0x00000CDA */
    un_ric_resinn_t	unRESIN1646;	/* 0x00000CDC */
    un_ric_resinn_t	unRESIN1647;	/* 0x00000CDE */
    un_ric_resinn_t	unRESIN1648;	/* 0x00000CE0 */
    un_ric_resinn_t	unRESIN1649;	/* 0x00000CE2 */
    un_ric_resinn_t	unRESIN1650;	/* 0x00000CE4 */
    un_ric_resinn_t	unRESIN1651;	/* 0x00000CE6 */
    un_ric_resinn_t	unRESIN1652;	/* 0x00000CE8 */
    un_ric_resinn_t	unRESIN1653;	/* 0x00000CEA */
    un_ric_resinn_t	unRESIN1654;	/* 0x00000CEC */
    un_ric_resinn_t	unRESIN1655;	/* 0x00000CEE */
    un_ric_resinn_t	unRESIN1656;	/* 0x00000CF0 */
    un_ric_resinn_t	unRESIN1657;	/* 0x00000CF2 */
    un_ric_resinn_t	unRESIN1658;	/* 0x00000CF4 */
    un_ric_resinn_t	unRESIN1659;	/* 0x00000CF6 */
    un_ric_resinn_t	unRESIN1660;	/* 0x00000CF8 */
    un_ric_resinn_t	unRESIN1661;	/* 0x00000CFA */
    un_ric_resinn_t	unRESIN1662;	/* 0x00000CFC */
    un_ric_resinn_t	unRESIN1663;	/* 0x00000CFE */
    un_ric_resinn_t	unRESIN1664;	/* 0x00000D00 */
    un_ric_resinn_t	unRESIN1665;	/* 0x00000D02 */
    un_ric_resinn_t	unRESIN1666;	/* 0x00000D04 */
    un_ric_resinn_t	unRESIN1667;	/* 0x00000D06 */
    un_ric_resinn_t	unRESIN1668;	/* 0x00000D08 */
    un_ric_resinn_t	unRESIN1669;	/* 0x00000D0A */
    un_ric_resinn_t	unRESIN1670;	/* 0x00000D0C */
    un_ric_resinn_t	unRESIN1671;	/* 0x00000D0E */
    un_ric_resinn_t	unRESIN1672;	/* 0x00000D10 */
    un_ric_resinn_t	unRESIN1673;	/* 0x00000D12 */
    un_ric_resinn_t	unRESIN1674;	/* 0x00000D14 */
    un_ric_resinn_t	unRESIN1675;	/* 0x00000D16 */
    un_ric_resinn_t	unRESIN1676;	/* 0x00000D18 */
    un_ric_resinn_t	unRESIN1677;	/* 0x00000D1A */
    un_ric_resinn_t	unRESIN1678;	/* 0x00000D1C */
    un_ric_resinn_t	unRESIN1679;	/* 0x00000D1E */
    un_ric_resinn_t	unRESIN1680;	/* 0x00000D20 */
    un_ric_resinn_t	unRESIN1681;	/* 0x00000D22 */
    un_ric_resinn_t	unRESIN1682;	/* 0x00000D24 */
    un_ric_resinn_t	unRESIN1683;	/* 0x00000D26 */
    un_ric_resinn_t	unRESIN1684;	/* 0x00000D28 */
    un_ric_resinn_t	unRESIN1685;	/* 0x00000D2A */
    un_ric_resinn_t	unRESIN1686;	/* 0x00000D2C */
    un_ric_resinn_t	unRESIN1687;	/* 0x00000D2E */
    un_ric_resinn_t	unRESIN1688;	/* 0x00000D30 */
    un_ric_resinn_t	unRESIN1689;	/* 0x00000D32 */
    un_ric_resinn_t	unRESIN1690;	/* 0x00000D34 */
    un_ric_resinn_t	unRESIN1691;	/* 0x00000D36 */
    un_ric_resinn_t	unRESIN1692;	/* 0x00000D38 */
    un_ric_resinn_t	unRESIN1693;	/* 0x00000D3A */
    un_ric_resinn_t	unRESIN1694;	/* 0x00000D3C */
    un_ric_resinn_t	unRESIN1695;	/* 0x00000D3E */
    un_ric_resinn_t	unRESIN1696;	/* 0x00000D40 */
    un_ric_resinn_t	unRESIN1697;	/* 0x00000D42 */
    un_ric_resinn_t	unRESIN1698;	/* 0x00000D44 */
    un_ric_resinn_t	unRESIN1699;	/* 0x00000D46 */
    un_ric_resinn_t	unRESIN1700;	/* 0x00000D48 */
    un_ric_resinn_t	unRESIN1701;	/* 0x00000D4A */
    un_ric_resinn_t	unRESIN1702;	/* 0x00000D4C */
    un_ric_resinn_t	unRESIN1703;	/* 0x00000D4E */
    un_ric_resinn_t	unRESIN1704;	/* 0x00000D50 */
    un_ric_resinn_t	unRESIN1705;	/* 0x00000D52 */
    un_ric_resinn_t	unRESIN1706;	/* 0x00000D54 */
    un_ric_resinn_t	unRESIN1707;	/* 0x00000D56 */
    un_ric_resinn_t	unRESIN1708;	/* 0x00000D58 */
    un_ric_resinn_t	unRESIN1709;	/* 0x00000D5A */
    un_ric_resinn_t	unRESIN1710;	/* 0x00000D5C */
    un_ric_resinn_t	unRESIN1711;	/* 0x00000D5E */
    un_ric_resinn_t	unRESIN1712;	/* 0x00000D60 */
    un_ric_resinn_t	unRESIN1713;	/* 0x00000D62 */
    un_ric_resinn_t	unRESIN1714;	/* 0x00000D64 */
    un_ric_resinn_t	unRESIN1715;	/* 0x00000D66 */
    un_ric_resinn_t	unRESIN1716;	/* 0x00000D68 */
    un_ric_resinn_t	unRESIN1717;	/* 0x00000D6A */
    un_ric_resinn_t	unRESIN1718;	/* 0x00000D6C */
    un_ric_resinn_t	unRESIN1719;	/* 0x00000D6E */
    un_ric_resinn_t	unRESIN1720;	/* 0x00000D70 */
    un_ric_resinn_t	unRESIN1721;	/* 0x00000D72 */
    un_ric_resinn_t	unRESIN1722;	/* 0x00000D74 */
    un_ric_resinn_t	unRESIN1723;	/* 0x00000D76 */
    un_ric_resinn_t	unRESIN1724;	/* 0x00000D78 */
    un_ric_resinn_t	unRESIN1725;	/* 0x00000D7A */
    un_ric_resinn_t	unRESIN1726;	/* 0x00000D7C */
    un_ric_resinn_t	unRESIN1727;	/* 0x00000D7E */
    un_ric_resinn_t	unRESIN1728;	/* 0x00000D80 */
    un_ric_resinn_t	unRESIN1729;	/* 0x00000D82 */
    un_ric_resinn_t	unRESIN1730;	/* 0x00000D84 */
    un_ric_resinn_t	unRESIN1731;	/* 0x00000D86 */
    un_ric_resinn_t	unRESIN1732;	/* 0x00000D88 */
    un_ric_resinn_t	unRESIN1733;	/* 0x00000D8A */
    un_ric_resinn_t	unRESIN1734;	/* 0x00000D8C */
    un_ric_resinn_t	unRESIN1735;	/* 0x00000D8E */
    un_ric_resinn_t	unRESIN1736;	/* 0x00000D90 */
    un_ric_resinn_t	unRESIN1737;	/* 0x00000D92 */
    un_ric_resinn_t	unRESIN1738;	/* 0x00000D94 */
    un_ric_resinn_t	unRESIN1739;	/* 0x00000D96 */
    un_ric_resinn_t	unRESIN1740;	/* 0x00000D98 */
    un_ric_resinn_t	unRESIN1741;	/* 0x00000D9A */
    un_ric_resinn_t	unRESIN1742;	/* 0x00000D9C */
    un_ric_resinn_t	unRESIN1743;	/* 0x00000D9E */
    un_ric_resinn_t	unRESIN1744;	/* 0x00000DA0 */
    un_ric_resinn_t	unRESIN1745;	/* 0x00000DA2 */
    un_ric_resinn_t	unRESIN1746;	/* 0x00000DA4 */
    un_ric_resinn_t	unRESIN1747;	/* 0x00000DA6 */
    un_ric_resinn_t	unRESIN1748;	/* 0x00000DA8 */
    un_ric_resinn_t	unRESIN1749;	/* 0x00000DAA */
    un_ric_resinn_t	unRESIN1750;	/* 0x00000DAC */
    un_ric_resinn_t	unRESIN1751;	/* 0x00000DAE */
    un_ric_resinn_t	unRESIN1752;	/* 0x00000DB0 */
    un_ric_resinn_t	unRESIN1753;	/* 0x00000DB2 */
    un_ric_resinn_t	unRESIN1754;	/* 0x00000DB4 */
    un_ric_resinn_t	unRESIN1755;	/* 0x00000DB6 */
    un_ric_resinn_t	unRESIN1756;	/* 0x00000DB8 */
    un_ric_resinn_t	unRESIN1757;	/* 0x00000DBA */
    un_ric_resinn_t	unRESIN1758;	/* 0x00000DBC */
    un_ric_resinn_t	unRESIN1759;	/* 0x00000DBE */
    un_ric_resinn_t	unRESIN1760;	/* 0x00000DC0 */
    un_ric_resinn_t	unRESIN1761;	/* 0x00000DC2 */
    un_ric_resinn_t	unRESIN1762;	/* 0x00000DC4 */
    un_ric_resinn_t	unRESIN1763;	/* 0x00000DC6 */
    un_ric_resinn_t	unRESIN1764;	/* 0x00000DC8 */
    un_ric_resinn_t	unRESIN1765;	/* 0x00000DCA */
    un_ric_resinn_t	unRESIN1766;	/* 0x00000DCC */
    un_ric_resinn_t	unRESIN1767;	/* 0x00000DCE */
    un_ric_resinn_t	unRESIN1768;	/* 0x00000DD0 */
    un_ric_resinn_t	unRESIN1769;	/* 0x00000DD2 */
    un_ric_resinn_t	unRESIN1770;	/* 0x00000DD4 */
    un_ric_resinn_t	unRESIN1771;	/* 0x00000DD6 */
    un_ric_resinn_t	unRESIN1772;	/* 0x00000DD8 */
    un_ric_resinn_t	unRESIN1773;	/* 0x00000DDA */
    un_ric_resinn_t	unRESIN1774;	/* 0x00000DDC */
    un_ric_resinn_t	unRESIN1775;	/* 0x00000DDE */
    un_ric_resinn_t	unRESIN1776;	/* 0x00000DE0 */
    un_ric_resinn_t	unRESIN1777;	/* 0x00000DE2 */
    un_ric_resinn_t	unRESIN1778;	/* 0x00000DE4 */
    un_ric_resinn_t	unRESIN1779;	/* 0x00000DE6 */
    un_ric_resinn_t	unRESIN1780;	/* 0x00000DE8 */
    un_ric_resinn_t	unRESIN1781;	/* 0x00000DEA */
    un_ric_resinn_t	unRESIN1782;	/* 0x00000DEC */
    un_ric_resinn_t	unRESIN1783;	/* 0x00000DEE */
    un_ric_resinn_t	unRESIN1784;	/* 0x00000DF0 */
    un_ric_resinn_t	unRESIN1785;	/* 0x00000DF2 */
    un_ric_resinn_t	unRESIN1786;	/* 0x00000DF4 */
    un_ric_resinn_t	unRESIN1787;	/* 0x00000DF6 */
    un_ric_resinn_t	unRESIN1788;	/* 0x00000DF8 */
    un_ric_resinn_t	unRESIN1789;	/* 0x00000DFA */
    un_ric_resinn_t	unRESIN1790;	/* 0x00000DFC */
    un_ric_resinn_t	unRESIN1791;	/* 0x00000DFE */
    un_ric_resinn_t	unRESIN1792;	/* 0x00000E00 */
    un_ric_resinn_t	unRESIN1793;	/* 0x00000E02 */
    un_ric_resinn_t	unRESIN1794;	/* 0x00000E04 */
    un_ric_resinn_t	unRESIN1795;	/* 0x00000E06 */
    un_ric_resinn_t	unRESIN1796;	/* 0x00000E08 */
    un_ric_resinn_t	unRESIN1797;	/* 0x00000E0A */
    un_ric_resinn_t	unRESIN1798;	/* 0x00000E0C */
    un_ric_resinn_t	unRESIN1799;	/* 0x00000E0E */
    un_ric_resinn_t	unRESIN1800;	/* 0x00000E10 */
    un_ric_resinn_t	unRESIN1801;	/* 0x00000E12 */
    un_ric_resinn_t	unRESIN1802;	/* 0x00000E14 */
    un_ric_resinn_t	unRESIN1803;	/* 0x00000E16 */
    un_ric_resinn_t	unRESIN1804;	/* 0x00000E18 */
    un_ric_resinn_t	unRESIN1805;	/* 0x00000E1A */
    un_ric_resinn_t	unRESIN1806;	/* 0x00000E1C */
    un_ric_resinn_t	unRESIN1807;	/* 0x00000E1E */
    un_ric_resinn_t	unRESIN1808;	/* 0x00000E20 */
    un_ric_resinn_t	unRESIN1809;	/* 0x00000E22 */
    un_ric_resinn_t	unRESIN1810;	/* 0x00000E24 */
    un_ric_resinn_t	unRESIN1811;	/* 0x00000E26 */
    un_ric_resinn_t	unRESIN1812;	/* 0x00000E28 */
    un_ric_resinn_t	unRESIN1813;	/* 0x00000E2A */
    un_ric_resinn_t	unRESIN1814;	/* 0x00000E2C */
    un_ric_resinn_t	unRESIN1815;	/* 0x00000E2E */
    un_ric_resinn_t	unRESIN1816;	/* 0x00000E30 */
    un_ric_resinn_t	unRESIN1817;	/* 0x00000E32 */
    un_ric_resinn_t	unRESIN1818;	/* 0x00000E34 */
    un_ric_resinn_t	unRESIN1819;	/* 0x00000E36 */
    un_ric_resinn_t	unRESIN1820;	/* 0x00000E38 */
    un_ric_resinn_t	unRESIN1821;	/* 0x00000E3A */
    un_ric_resinn_t	unRESIN1822;	/* 0x00000E3C */
    un_ric_resinn_t	unRESIN1823;	/* 0x00000E3E */
    un_ric_resinn_t	unRESIN1824;	/* 0x00000E40 */
    un_ric_resinn_t	unRESIN1825;	/* 0x00000E42 */
    un_ric_resinn_t	unRESIN1826;	/* 0x00000E44 */
    un_ric_resinn_t	unRESIN1827;	/* 0x00000E46 */
    un_ric_resinn_t	unRESIN1828;	/* 0x00000E48 */
    un_ric_resinn_t	unRESIN1829;	/* 0x00000E4A */
    un_ric_resinn_t	unRESIN1830;	/* 0x00000E4C */
    un_ric_resinn_t	unRESIN1831;	/* 0x00000E4E */
    un_ric_resinn_t	unRESIN1832;	/* 0x00000E50 */
    un_ric_resinn_t	unRESIN1833;	/* 0x00000E52 */
    un_ric_resinn_t	unRESIN1834;	/* 0x00000E54 */
    un_ric_resinn_t	unRESIN1835;	/* 0x00000E56 */
    un_ric_resinn_t	unRESIN1836;	/* 0x00000E58 */
    un_ric_resinn_t	unRESIN1837;	/* 0x00000E5A */
    un_ric_resinn_t	unRESIN1838;	/* 0x00000E5C */
    un_ric_resinn_t	unRESIN1839;	/* 0x00000E5E */
    un_ric_resinn_t	unRESIN1840;	/* 0x00000E60 */
    un_ric_resinn_t	unRESIN1841;	/* 0x00000E62 */
    un_ric_resinn_t	unRESIN1842;	/* 0x00000E64 */
    un_ric_resinn_t	unRESIN1843;	/* 0x00000E66 */
    un_ric_resinn_t	unRESIN1844;	/* 0x00000E68 */
    un_ric_resinn_t	unRESIN1845;	/* 0x00000E6A */
    un_ric_resinn_t	unRESIN1846;	/* 0x00000E6C */
    un_ric_resinn_t	unRESIN1847;	/* 0x00000E6E */
    un_ric_resinn_t	unRESIN1848;	/* 0x00000E70 */
    un_ric_resinn_t	unRESIN1849;	/* 0x00000E72 */
    un_ric_resinn_t	unRESIN1850;	/* 0x00000E74 */
    un_ric_resinn_t	unRESIN1851;	/* 0x00000E76 */
    un_ric_resinn_t	unRESIN1852;	/* 0x00000E78 */
    un_ric_resinn_t	unRESIN1853;	/* 0x00000E7A */
    un_ric_resinn_t	unRESIN1854;	/* 0x00000E7C */
    un_ric_resinn_t	unRESIN1855;	/* 0x00000E7E */
    un_ric_resinn_t	unRESIN1856;	/* 0x00000E80 */
    un_ric_resinn_t	unRESIN1857;	/* 0x00000E82 */
    un_ric_resinn_t	unRESIN1858;	/* 0x00000E84 */
    un_ric_resinn_t	unRESIN1859;	/* 0x00000E86 */
    un_ric_resinn_t	unRESIN1860;	/* 0x00000E88 */
    un_ric_resinn_t	unRESIN1861;	/* 0x00000E8A */
    un_ric_resinn_t	unRESIN1862;	/* 0x00000E8C */
    un_ric_resinn_t	unRESIN1863;	/* 0x00000E8E */
    un_ric_resinn_t	unRESIN1864;	/* 0x00000E90 */
    un_ric_resinn_t	unRESIN1865;	/* 0x00000E92 */
    un_ric_resinn_t	unRESIN1866;	/* 0x00000E94 */
    un_ric_resinn_t	unRESIN1867;	/* 0x00000E96 */
    un_ric_resinn_t	unRESIN1868;	/* 0x00000E98 */
    un_ric_resinn_t	unRESIN1869;	/* 0x00000E9A */
    un_ric_resinn_t	unRESIN1870;	/* 0x00000E9C */
    un_ric_resinn_t	unRESIN1871;	/* 0x00000E9E */
    un_ric_resinn_t	unRESIN1872;	/* 0x00000EA0 */
    un_ric_resinn_t	unRESIN1873;	/* 0x00000EA2 */
    un_ric_resinn_t	unRESIN1874;	/* 0x00000EA4 */
    un_ric_resinn_t	unRESIN1875;	/* 0x00000EA6 */
    un_ric_resinn_t	unRESIN1876;	/* 0x00000EA8 */
    un_ric_resinn_t	unRESIN1877;	/* 0x00000EAA */
    un_ric_resinn_t	unRESIN1878;	/* 0x00000EAC */
    un_ric_resinn_t	unRESIN1879;	/* 0x00000EAE */
    un_ric_resinn_t	unRESIN1880;	/* 0x00000EB0 */
    un_ric_resinn_t	unRESIN1881;	/* 0x00000EB2 */
    un_ric_resinn_t	unRESIN1882;	/* 0x00000EB4 */
    un_ric_resinn_t	unRESIN1883;	/* 0x00000EB6 */
    un_ric_resinn_t	unRESIN1884;	/* 0x00000EB8 */
    un_ric_resinn_t	unRESIN1885;	/* 0x00000EBA */
    un_ric_resinn_t	unRESIN1886;	/* 0x00000EBC */
    un_ric_resinn_t	unRESIN1887;	/* 0x00000EBE */
    un_ric_resinn_t	unRESIN1888;	/* 0x00000EC0 */
    un_ric_resinn_t	unRESIN1889;	/* 0x00000EC2 */
    un_ric_resinn_t	unRESIN1890;	/* 0x00000EC4 */
    un_ric_resinn_t	unRESIN1891;	/* 0x00000EC6 */
    un_ric_resinn_t	unRESIN1892;	/* 0x00000EC8 */
    un_ric_resinn_t	unRESIN1893;	/* 0x00000ECA */
    un_ric_resinn_t	unRESIN1894;	/* 0x00000ECC */
    un_ric_resinn_t	unRESIN1895;	/* 0x00000ECE */
    un_ric_resinn_t	unRESIN1896;	/* 0x00000ED0 */
    un_ric_resinn_t	unRESIN1897;	/* 0x00000ED2 */
    un_ric_resinn_t	unRESIN1898;	/* 0x00000ED4 */
    un_ric_resinn_t	unRESIN1899;	/* 0x00000ED6 */
    un_ric_resinn_t	unRESIN1900;	/* 0x00000ED8 */
    un_ric_resinn_t	unRESIN1901;	/* 0x00000EDA */
    un_ric_resinn_t	unRESIN1902;	/* 0x00000EDC */
    un_ric_resinn_t	unRESIN1903;	/* 0x00000EDE */
    un_ric_resinn_t	unRESIN1904;	/* 0x00000EE0 */
    un_ric_resinn_t	unRESIN1905;	/* 0x00000EE2 */
    un_ric_resinn_t	unRESIN1906;	/* 0x00000EE4 */
    un_ric_resinn_t	unRESIN1907;	/* 0x00000EE6 */
    un_ric_resinn_t	unRESIN1908;	/* 0x00000EE8 */
    un_ric_resinn_t	unRESIN1909;	/* 0x00000EEA */
    un_ric_resinn_t	unRESIN1910;	/* 0x00000EEC */
    un_ric_resinn_t	unRESIN1911;	/* 0x00000EEE */
    un_ric_resinn_t	unRESIN1912;	/* 0x00000EF0 */
    un_ric_resinn_t	unRESIN1913;	/* 0x00000EF2 */
    un_ric_resinn_t	unRESIN1914;	/* 0x00000EF4 */
    un_ric_resinn_t	unRESIN1915;	/* 0x00000EF6 */
    un_ric_resinn_t	unRESIN1916;	/* 0x00000EF8 */
    un_ric_resinn_t	unRESIN1917;	/* 0x00000EFA */
    un_ric_resinn_t	unRESIN1918;	/* 0x00000EFC */
    un_ric_resinn_t	unRESIN1919;	/* 0x00000EFE */
    un_ric_resinn_t	unRESIN1920;	/* 0x00000F00 */
    un_ric_resinn_t	unRESIN1921;	/* 0x00000F02 */
    un_ric_resinn_t	unRESIN1922;	/* 0x00000F04 */
    un_ric_resinn_t	unRESIN1923;	/* 0x00000F06 */
    un_ric_resinn_t	unRESIN1924;	/* 0x00000F08 */
    un_ric_resinn_t	unRESIN1925;	/* 0x00000F0A */
    un_ric_resinn_t	unRESIN1926;	/* 0x00000F0C */
    un_ric_resinn_t	unRESIN1927;	/* 0x00000F0E */
    un_ric_resinn_t	unRESIN1928;	/* 0x00000F10 */
    un_ric_resinn_t	unRESIN1929;	/* 0x00000F12 */
    un_ric_resinn_t	unRESIN1930;	/* 0x00000F14 */
    un_ric_resinn_t	unRESIN1931;	/* 0x00000F16 */
    un_ric_resinn_t	unRESIN1932;	/* 0x00000F18 */
    un_ric_resinn_t	unRESIN1933;	/* 0x00000F1A */
    un_ric_resinn_t	unRESIN1934;	/* 0x00000F1C */
    un_ric_resinn_t	unRESIN1935;	/* 0x00000F1E */
    un_ric_resinn_t	unRESIN1936;	/* 0x00000F20 */
    un_ric_resinn_t	unRESIN1937;	/* 0x00000F22 */
    un_ric_resinn_t	unRESIN1938;	/* 0x00000F24 */
    un_ric_resinn_t	unRESIN1939;	/* 0x00000F26 */
    un_ric_resinn_t	unRESIN1940;	/* 0x00000F28 */
    un_ric_resinn_t	unRESIN1941;	/* 0x00000F2A */
    un_ric_resinn_t	unRESIN1942;	/* 0x00000F2C */
    un_ric_resinn_t	unRESIN1943;	/* 0x00000F2E */
    un_ric_resinn_t	unRESIN1944;	/* 0x00000F30 */
    un_ric_resinn_t	unRESIN1945;	/* 0x00000F32 */
    un_ric_resinn_t	unRESIN1946;	/* 0x00000F34 */
    un_ric_resinn_t	unRESIN1947;	/* 0x00000F36 */
    un_ric_resinn_t	unRESIN1948;	/* 0x00000F38 */
    un_ric_resinn_t	unRESIN1949;	/* 0x00000F3A */
    un_ric_resinn_t	unRESIN1950;	/* 0x00000F3C */
    un_ric_resinn_t	unRESIN1951;	/* 0x00000F3E */
    un_ric_resinn_t	unRESIN1952;	/* 0x00000F40 */
    un_ric_resinn_t	unRESIN1953;	/* 0x00000F42 */
    un_ric_resinn_t	unRESIN1954;	/* 0x00000F44 */
    un_ric_resinn_t	unRESIN1955;	/* 0x00000F46 */
    un_ric_resinn_t	unRESIN1956;	/* 0x00000F48 */
    un_ric_resinn_t	unRESIN1957;	/* 0x00000F4A */
    un_ric_resinn_t	unRESIN1958;	/* 0x00000F4C */
    un_ric_resinn_t	unRESIN1959;	/* 0x00000F4E */
    un_ric_resinn_t	unRESIN1960;	/* 0x00000F50 */
    un_ric_resinn_t	unRESIN1961;	/* 0x00000F52 */
    un_ric_resinn_t	unRESIN1962;	/* 0x00000F54 */
    un_ric_resinn_t	unRESIN1963;	/* 0x00000F56 */
    un_ric_resinn_t	unRESIN1964;	/* 0x00000F58 */
    un_ric_resinn_t	unRESIN1965;	/* 0x00000F5A */
    un_ric_resinn_t	unRESIN1966;	/* 0x00000F5C */
    un_ric_resinn_t	unRESIN1967;	/* 0x00000F5E */
    un_ric_resinn_t	unRESIN1968;	/* 0x00000F60 */
    un_ric_resinn_t	unRESIN1969;	/* 0x00000F62 */
    un_ric_resinn_t	unRESIN1970;	/* 0x00000F64 */
    un_ric_resinn_t	unRESIN1971;	/* 0x00000F66 */
    un_ric_resinn_t	unRESIN1972;	/* 0x00000F68 */
    un_ric_resinn_t	unRESIN1973;	/* 0x00000F6A */
    un_ric_resinn_t	unRESIN1974;	/* 0x00000F6C */
    un_ric_resinn_t	unRESIN1975;	/* 0x00000F6E */
    un_ric_resinn_t	unRESIN1976;	/* 0x00000F70 */
    un_ric_resinn_t	unRESIN1977;	/* 0x00000F72 */
    un_ric_resinn_t	unRESIN1978;	/* 0x00000F74 */
    un_ric_resinn_t	unRESIN1979;	/* 0x00000F76 */
    un_ric_resinn_t	unRESIN1980;	/* 0x00000F78 */
    un_ric_resinn_t	unRESIN1981;	/* 0x00000F7A */
    un_ric_resinn_t	unRESIN1982;	/* 0x00000F7C */
    un_ric_resinn_t	unRESIN1983;	/* 0x00000F7E */
    un_ric_resinn_t	unRESIN1984;	/* 0x00000F80 */
    un_ric_resinn_t	unRESIN1985;	/* 0x00000F82 */
    un_ric_resinn_t	unRESIN1986;	/* 0x00000F84 */
    un_ric_resinn_t	unRESIN1987;	/* 0x00000F86 */
    un_ric_resinn_t	unRESIN1988;	/* 0x00000F88 */
    un_ric_resinn_t	unRESIN1989;	/* 0x00000F8A */
    un_ric_resinn_t	unRESIN1990;	/* 0x00000F8C */
    un_ric_resinn_t	unRESIN1991;	/* 0x00000F8E */
    un_ric_resinn_t	unRESIN1992;	/* 0x00000F90 */
    un_ric_resinn_t	unRESIN1993;	/* 0x00000F92 */
    un_ric_resinn_t	unRESIN1994;	/* 0x00000F94 */
    un_ric_resinn_t	unRESIN1995;	/* 0x00000F96 */
    un_ric_resinn_t	unRESIN1996;	/* 0x00000F98 */
    un_ric_resinn_t	unRESIN1997;	/* 0x00000F9A */
    un_ric_resinn_t	unRESIN1998;	/* 0x00000F9C */
    un_ric_resinn_t	unRESIN1999;	/* 0x00000F9E */
    un_ric_resinn_t	unRESIN2000;	/* 0x00000FA0 */
    un_ric_resinn_t	unRESIN2001;	/* 0x00000FA2 */
    un_ric_resinn_t	unRESIN2002;	/* 0x00000FA4 */
    un_ric_resinn_t	unRESIN2003;	/* 0x00000FA6 */
    un_ric_resinn_t	unRESIN2004;	/* 0x00000FA8 */
    un_ric_resinn_t	unRESIN2005;	/* 0x00000FAA */
    un_ric_resinn_t	unRESIN2006;	/* 0x00000FAC */
    un_ric_resinn_t	unRESIN2007;	/* 0x00000FAE */
    un_ric_resinn_t	unRESIN2008;	/* 0x00000FB0 */
    un_ric_resinn_t	unRESIN2009;	/* 0x00000FB2 */
    un_ric_resinn_t	unRESIN2010;	/* 0x00000FB4 */
    un_ric_resinn_t	unRESIN2011;	/* 0x00000FB6 */
    un_ric_resinn_t	unRESIN2012;	/* 0x00000FB8 */
    un_ric_resinn_t	unRESIN2013;	/* 0x00000FBA */
    un_ric_resinn_t	unRESIN2014;	/* 0x00000FBC */
    un_ric_resinn_t	unRESIN2015;	/* 0x00000FBE */
    un_ric_resinn_t	unRESIN2016;	/* 0x00000FC0 */
    un_ric_resinn_t	unRESIN2017;	/* 0x00000FC2 */
    un_ric_resinn_t	unRESIN2018;	/* 0x00000FC4 */
    un_ric_resinn_t	unRESIN2019;	/* 0x00000FC6 */
    un_ric_resinn_t	unRESIN2020;	/* 0x00000FC8 */
    un_ric_resinn_t	unRESIN2021;	/* 0x00000FCA */
    un_ric_resinn_t	unRESIN2022;	/* 0x00000FCC */
    un_ric_resinn_t	unRESIN2023;	/* 0x00000FCE */
    un_ric_resinn_t	unRESIN2024;	/* 0x00000FD0 */
    un_ric_resinn_t	unRESIN2025;	/* 0x00000FD2 */
    un_ric_resinn_t	unRESIN2026;	/* 0x00000FD4 */
    un_ric_resinn_t	unRESIN2027;	/* 0x00000FD6 */
    un_ric_resinn_t	unRESIN2028;	/* 0x00000FD8 */
    un_ric_resinn_t	unRESIN2029;	/* 0x00000FDA */
    un_ric_resinn_t	unRESIN2030;	/* 0x00000FDC */
    un_ric_resinn_t	unRESIN2031;	/* 0x00000FDE */
    un_ric_resinn_t	unRESIN2032;	/* 0x00000FE0 */
    un_ric_resinn_t	unRESIN2033;	/* 0x00000FE2 */
    un_ric_resinn_t	unRESIN2034;	/* 0x00000FE4 */
    un_ric_resinn_t	unRESIN2035;	/* 0x00000FE6 */
    un_ric_resinn_t	unRESIN2036;	/* 0x00000FE8 */
    un_ric_resinn_t	unRESIN2037;	/* 0x00000FEA */
    un_ric_resinn_t	unRESIN2038;	/* 0x00000FEC */
    un_ric_resinn_t	unRESIN2039;	/* 0x00000FEE */
    un_ric_resinn_t	unRESIN2040;	/* 0x00000FF0 */
    un_ric_resinn_t	unRESIN2041;	/* 0x00000FF2 */
    un_ric_resinn_t	unRESIN2042;	/* 0x00000FF4 */
    un_ric_resinn_t	unRESIN2043;	/* 0x00000FF6 */
    un_ric_resinn_t	unRESIN2044;	/* 0x00000FF8 */
    un_ric_resinn_t	unRESIN2045;	/* 0x00000FFA */
    un_ric_resinn_t	unRESIN2046;	/* 0x00000FFC */
    un_ric_resinn_t	unRESIN2047;	/* 0x00000FFE */
    uint_io8_t	au8Reserved0[1024];	/* 0x00001000 */
    un_ric_keycdr_t	unKEYCDR;	/* 0x00001400 */
    uint_io8_t	au8Reserved1[27644];	/* 0x00001404 */
}stc_ric_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_ric_t	stcRIC;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 32768(0x8000) bytes */


#endif /* __S6J3200_RIC_H */
