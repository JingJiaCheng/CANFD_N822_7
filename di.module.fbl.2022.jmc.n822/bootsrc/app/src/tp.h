#ifndef VTP_HEADER
#define VTP_HEADER
/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2009.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/

/* ===========================================================================
**
**  Name:
**
**  Description:
**
**  Organization:   Multiplex Core Technology
**
** =========================================================================*/

/* ===========================================================================
**  I N C L U D E   F I L E S
** =========================================================================*/

#define VTP_HEADER_VERSION  0x0100u

/*******************************************************************************
================================================================================
 P U B L I C   T Y P E   D E F I N I T I O N S
================================================================================
*******************************************************************************/
typedef unsigned char   VTP_UINT8;
typedef unsigned char   VTP_BOOL;
typedef unsigned short  VTP_UINT16;
typedef unsigned int    VTP_UINT32;

typedef struct {
   VTP_UINT16  DataLength;
   VTP_UINT8   *Data;
   }VTP_SDU;

typedef struct {
   VTP_UINT32  MsgID;
   VTP_UINT8   Size;
   VTP_UINT8   Data[8];
   }VTP_PDU;


/*******************************************************************************
================================================================================
 P U B L I C   M A C R O S
================================================================================
*******************************************************************************/
#define VTP_TRUE                 (VTP_BOOL)1
#define VTP_FALSE                (VTP_BOOL)0
#define VTP_NOTOK                VTP_FALSE
#define VTP_OK                   VTP_TRUE
#define VTP_ERROR                (0xFFu)
#define VTP_SUCCESS              (0x01u)

/*******************************************************************************
================================================================================
 P U B L I C   F U N C T I O N S   P R O T O T Y P E S
================================================================================
*******************************************************************************/

extern void VTP_Init(void);
extern void      VTP_PeriodicTask(void);

extern VTP_PDU  VTP_TxMsg;
extern VTP_UINT8 VTP_Transmit(VTP_UINT8 * Msgptr, VTP_UINT16 length);
extern void VTP_TxConfirm(void);
extern void VTP_RxIndication(const VTP_PDU * Msgptr);
extern VTP_UINT8 VTP_ApplCB_RxStart(VTP_UINT32 msgid, VTP_UINT16 size);
extern void VTP_ApplCB_RxInProg(const VTP_UINT8 * msgptr,VTP_UINT8 size);
extern VTP_UINT8 VTP_Call_DllTransmit(void);
extern void VTP_ApplCB_RxIndication(VTP_UINT8 sts);
extern void VTP_ApplCB_TxConfirm(VTP_UINT8 sts);
extern void VTP_SetFC_Overflow(void);
extern VTP_UINT8 VTP_Rx_GetStatus(void);
extern VTP_UINT32 destination_address;

/*******************************************************************************
================================================================================
DATE           AUTHOR      VERSION  DESCRIPTION
================================================================================
12/Nov/2013     gmuthu       1      Initial Release.
================================================================================
*******************************************************************************/

#endif

