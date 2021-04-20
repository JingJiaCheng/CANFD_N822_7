#if !defined(IVI_H)
#define IVI_H
/* ===========================================================================
//
//                     CONFIDENTIAL VISTEON CORPORATION
//
//  This is an unpublished work of authorship, which contains trade secrets,
//  created in 2006.  Visteon Corporation owns all rights to this work and
//  intends to maintain it in confidence to preserve its trade secret status.
//  Visteon Corporation reserves the right, under the copyright laws of the
//  United States or those of any other country that may have jurisdiction, to
//  protect this work as an unpublished work, in the event of an inadvertent
//  or deliberate unauthorized publication.  Visteon Corporation also reserves
//  its rights under all copyright laws to protect this work as a published
//  work, when appropriate.  Those having access to this work may not copy it,
//  use it, modify it or disclose the information contained in it without the
//  written authorization of Visteon Corporation.
//
// =========================================================================*/
/* ===========================================================================
//
//  Name:           CanIvi.h
//
//  Description:    CAN Ivi Layer
//
//  Organization:   Multiplex Core Technology
//
// =========================================================================*/


/* ===========================================================================
//  P U B L I C   M A C R O S
// =========================================================================*/
#define CANIVI_TXCONFIRMATION_ENABLE

#define IVI_CH0 (0U)
#define IVI_CH1 (1U)

//------------------------------------------------------------------------------
// Exported type
//
// typedef Expression tLAYCmpTypeName;
//------------------------------------------------------------------------------
#define cDATCdlTailleMaxMP5_Phone_TX_0x380      ((U8)8)
#define cDATCdlTailleMaxMP5_Audio_TX_0x381      ((U8)8)
#define cDATCdlTailleMaxMP5_0x382               ((U8)8)
#define cDATCdlTailleMaxMP5_PhoneNum_TX_0x383   ((U8)8)
#define cDATCdlTailleMaxMP5_Navi_TX_0x385       ((U8)8)

#define cDATCdlTaille_CH1IC_PhoneNum_0x376      	((U8)8UL)
#define cDATCdlTaille_CH1IC_0x377      				((U8)8UL)
#define cDATCdlTaille_CH1IC_0x386      				((U8)8UL)
#define cDATCdlTaille_CH1IC_Phone_RX_0x388      	((U8)8UL)
#define cDATCdlTaille_CH1IC_Audio_RX_0x389      	((U8)8UL)
#define cDATCdlTaille_CH1IC_0x38A      				((U8)8UL)
#define cDATCdlTaille_CH1IC_PhoneNum_RX_0x38B   	((U8)8UL)
#define cDATCdlTaille_CH1IC_PhoneNum_RX_0x38C   	((U8)8UL)

typedef unsigned char   U8;
typedef U8 tDATCdlD_UUTxHandle;
typedef U8 tDATCdlD_UURxHandle;


typedef struct
{
	U8 MP5_Phone_TX_0x380[cDATCdlTailleMaxMP5_Phone_TX_0x380];
	U8 MP5_Audio_TX_0x381[cDATCdlTailleMaxMP5_Audio_TX_0x381];
	U8 MP5_0x382[cDATCdlTailleMaxMP5_0x382];
	U8 MP5_PhoneNum_TX_0x383[cDATCdlTailleMaxMP5_PhoneNum_TX_0x383];
	U8 MP5_Navi_TX_0x385[cDATCdlTailleMaxMP5_Navi_TX_0x385];
} tDATCplpBuffersRx_CH1;


typedef struct
{
    U8 IC_PhoneNum_0x376    [cDATCdlTaille_CH1IC_PhoneNum_0x376];
    U8 IC_0x377      		[cDATCdlTaille_CH1IC_0x377];
    U8 IC_0x386      		[cDATCdlTaille_CH1IC_0x386];
	U8 IC_Phone_RX_0x388    [cDATCdlTaille_CH1IC_Phone_RX_0x388];
    U8 IC_Audio_RX_0x389   	[cDATCdlTaille_CH1IC_Audio_RX_0x389];
    U8 IC_0x38A      		[cDATCdlTaille_CH1IC_0x38A];
    U8 IC_PhoneNum_RX_0x38B [cDATCdlTaille_CH1IC_PhoneNum_RX_0x38B];
	U8 IC_PhoneNum_RX_0x38C [cDATCdlTaille_CH1IC_PhoneNum_RX_0x38C];
} tDATCdlBuffersUUTx_CH1;

extern tDATCplpBuffersRx_CH1   DATCplImageBuffersReception_CH1;

extern tDATCdlBuffersUUTx_CH1  DATCdlBuffersUUTx_CH1;



/*Index of Tx handles*/
#define cDATCdlD_UUTxHandle_CH1IC_PhoneNum_0x376      	((tDATCdlD_UUTxHandle)0UL)
#define cDATCdlD_UUTxHandle_CH1IC_0x377      			((tDATCdlD_UUTxHandle)1UL)
#define cDATCdlD_UUTxHandle_CH1IC_0x386      			((tDATCdlD_UUTxHandle)2UL)
#define cDATCdlD_UUTxHandle_CH1IC_Phone_RX_0x388      	((tDATCdlD_UUTxHandle)3UL)
#define cDATCdlD_UUTxHandle_CH1IC_Audio_RX_0x389      	((tDATCdlD_UUTxHandle)4UL)
#define cDATCdlD_UUTxHandle_CH1IC_0x38A      			((tDATCdlD_UUTxHandle)5UL)
#define cDATCdlD_UUTxHandle_CH1IC_PhoneNum_RX_0x38B     ((tDATCdlD_UUTxHandle)6UL)
#define cDATCdlD_UUTxHandle_CH1IC_PhoneNum_RX_0x38C     ((tDATCdlD_UUTxHandle)7UL)

#define cDATCdlD_UUTxHandle_CH1IC_MAX                   ((tDATCdlD_UUTxHandle)7UL)


//------------------------------------------------------------------------------
// Exported type
//------------------------------------------------------------------------------
//Tramsmiter  Message 

// IC_Phone_RX_0x388

#define IC_Phone_RX_0x388_Byte_1		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+0))
#define IC_Phone_RX_0x388_Byte_2		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+1))
#define IC_Phone_RX_0x388_Byte_3		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+2))
#define IC_Phone_RX_0x388_Byte_4		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+3))
#define IC_Phone_RX_0x388_Byte_5		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+4))
#define IC_Phone_RX_0x388_Byte_6		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+5))
#define IC_Phone_RX_0x388_Byte_7		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+6))
#define IC_Phone_RX_0x388_Byte_8		(*(DATCdlBuffersUUTx_CH1.IC_Phone_RX_0x388+7))


// IC_Audio_RX_0x389

#define IC_Audio_RX_0x389_Byte_1		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+0))
#define IC_Audio_RX_0x389_Byte_2		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+1))
#define IC_Audio_RX_0x389_Byte_3		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+2))
#define IC_Audio_RX_0x389_Byte_4		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+3))
#define IC_Audio_RX_0x389_Byte_5		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+4))
#define IC_Audio_RX_0x389_Byte_6		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+5))
#define IC_Audio_RX_0x389_Byte_7		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+6))
#define IC_Audio_RX_0x389_Byte_8		(*(DATCdlBuffersUUTx_CH1.IC_Audio_RX_0x389+7))

//IC_PhoneNum_RX_0x38B

#define IC_PhoneNum_RX_0x38B_Byte_1		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+0))
#define IC_PhoneNum_RX_0x38B_Byte_2		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+1))
#define IC_PhoneNum_RX_0x38B_Byte_3		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+2))
#define IC_PhoneNum_RX_0x38B_Byte_4		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+3))
#define IC_PhoneNum_RX_0x38B_Byte_5		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+4))
#define IC_PhoneNum_RX_0x38B_Byte_6		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+5))
#define IC_PhoneNum_RX_0x38B_Byte_7		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+6))
#define IC_PhoneNum_RX_0x38B_Byte_8		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38B+7))


//IC_PhoneNum_RX_0x38C

#define IC_PhoneNum_RX_0x38C_Byte_1		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+0))
#define IC_PhoneNum_RX_0x38C_Byte_2		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+1))
#define IC_PhoneNum_RX_0x38C_Byte_3		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+2))
#define IC_PhoneNum_RX_0x38C_Byte_4		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+3))
#define IC_PhoneNum_RX_0x38C_Byte_5		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+4))
#define IC_PhoneNum_RX_0x38C_Byte_6		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+5))
#define IC_PhoneNum_RX_0x38C_Byte_7		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+6))
#define IC_PhoneNum_RX_0x38C_Byte_8		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_RX_0x38C+7))


// IC_PhoneNum_0x376

#define IC_PhoneNum_0x376_Byte_1		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376))
#define IC_PhoneNum_0x376_Byte_2		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376+1))
#define IC_PhoneNum_0x376_Byte_3		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376+2))
#define IC_PhoneNum_0x376_Byte_4		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376+3))
#define IC_PhoneNum_0x376_Byte_5		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376+4))
#define IC_PhoneNum_0x376_Byte_6		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376+5))
#define IC_PhoneNum_0x376_Byte_7		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376+6))
#define IC_PhoneNum_0x376_Byte_8		(*(DATCdlBuffersUUTx_CH1.IC_PhoneNum_0x376+7))

//IC_0x377

#define IC_0x377_Byte_1		(*(DATCdlBuffersUUTx_CH1.IC_0x377))
#define IC_0x377_Byte_2		(*(DATCdlBuffersUUTx_CH1.IC_0x377+1))
#define IC_0x377_Byte_3		(*(DATCdlBuffersUUTx_CH1.IC_0x377+2))
#define IC_0x377_Byte_4		(*(DATCdlBuffersUUTx_CH1.IC_0x377+3))

typedef union{
	U8 Byte;
	struct{
		U8 _IC_LastItem  			:1;
		U8 _IC_NextItem  			:1;
		U8 _IC_BTphoneCalloptions  	:3;
		U8 					   		:1;
		U8 _IC_ScreenRequest		:2;
	}Bits;
}CAN1_377_4STR;

#define _CAN1_377_4						   (*(CAN1_377_4STR *)(DATCdlBuffersUUTx_CH1.IC_0x377+4))
#define IC_0x377_IC_LastItem              _CAN1_377_4.Bits._IC_LastItem
#define IC_0x377_IC_NextItem              _CAN1_377_4.Bits._IC_NextItem
#define IC_0x377_IC_BTphoneCalloptions    _CAN1_377_4.Bits._IC_BTphoneCalloptions
#define	IC_0x377_IC_ScreenRequest		  _CAN1_377_4.Bits._IC_ScreenRequest

typedef union{
	U8 Byte;
	struct{
		U8 					 :2;
		U8 _IC_AudioContro	 :2;
		U8 _IC_AudioRequest  :4;
	}Bits;
}CAN1_377_5STR;

#define _CAN1_377_5						   (*(CAN1_377_5STR *)(DATCdlBuffersUUTx_CH1.IC_0x377+5)) 
#define IC_0x377_IC_AudioRequest           _CAN1_377_5.Bits._IC_AudioRequest
#define IC_0x377_IC_AudioControl		   _CAN1_377_5.Bits._IC_AudioContro

#define IC_0x377_Byte_7		(*(DATCdlBuffersUUTx_CH1.IC_0x377+6))
#define IC_0x377_Byte_8		(*(DATCdlBuffersUUTx_CH1.IC_0x377+7))


//MP5_Phone_TX_0x380 Layout

#define MP5_Phone_TX_0x380_Byte_1		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380))
#define MP5_Phone_TX_0x380_Byte_2		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380+1))
#define MP5_Phone_TX_0x380_Byte_3		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380+2))
#define MP5_Phone_TX_0x380_Byte_4		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380+3))
#define MP5_Phone_TX_0x380_Byte_5		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380+4))
#define MP5_Phone_TX_0x380_Byte_6		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380+5))
#define MP5_Phone_TX_0x380_Byte_7		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380+6))
#define MP5_Phone_TX_0x380_Byte_8		(*(DATCplImageBuffersReception_CH1.MP5_Phone_TX_0x380+7))

//MP5_Audio_TX_0x381 Layout

#define MP5_Audio_TX_0x381_Byte_1		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381))
#define MP5_Audio_TX_0x381_Byte_2		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381+1))
#define MP5_Audio_TX_0x381_Byte_3		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381+2))
#define MP5_Audio_TX_0x381_Byte_4		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381+3))
#define MP5_Audio_TX_0x381_Byte_5		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381+4))
#define MP5_Audio_TX_0x381_Byte_6		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381+5))
#define MP5_Audio_TX_0x381_Byte_7		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381+6))
#define MP5_Audio_TX_0x381_Byte_8		(*(DATCplImageBuffersReception_CH1.MP5_Audio_TX_0x381+7))

//MP5_0x382 Layout

#define MP5_0x382_Byte_1				(*(DATCplImageBuffersReception_CH1.MP5_0x382))
#define MP5_0x382_Byte_2				(*(DATCplImageBuffersReception_CH1.MP5_0x382+1))
#define MP5_0x382_Byte_3				(*(DATCplImageBuffersReception_CH1.MP5_0x382+2))
#define MP5_0x382_Byte_4				(*(DATCplImageBuffersReception_CH1.MP5_0x382+3))
#define MP5_0x382_Byte_5				(*(DATCplImageBuffersReception_CH1.MP5_0x382+4))
#define MP5_0x382_Byte_6				(*(DATCplImageBuffersReception_CH1.MP5_0x382+5))
#define MP5_0x382_Byte_7				(*(DATCplImageBuffersReception_CH1.MP5_0x382+6))
#define MP5_0x382_Byte_8				(*(DATCplImageBuffersReception_CH1.MP5_0x382+7))

typedef union{
	U8 Byte;
	struct{
		U8 _MP5_AudioStatus			:1;
		U8 _MP5_EnergyFlow  		:4;
		U8 _MP5_SetMultiButton  	:1;
		U8 _MP5_BSDSoundSwitchSts  	:1;
		U8  						:1;
	}Bits;
}CAN1_382_0STR;

#define _CAN1_382_0						   (*(CAN1_382_0STR *)(DATCplImageBuffersReception_CH1.MP5_0x382+0))
#define MP5_0x382_MP5_EnergyFlow           _CAN1_382_0.Bits._MP5_EnergyFlow
#define MP5_0x382_MP5_SetMultiButton       _CAN1_382_0.Bits._MP5_SetMultiButton
#define MP5_0x382_MP5_BSDSoundSwitchSts    _CAN1_382_0.Bits._MP5_BSDSoundSwitchSts
#define MP5_0x382_MP5_AudioStatus		   _CAN1_382_0.Bits._MP5_AudioStatus

typedef union{
	U8 Byte;
	struct{
		U8 					:6;
		U8 _MP5_NavStatus	:2;
	}Bits;
}CAN1_382_1STR;

#define _CAN1_382_1						   (*(CAN1_382_1STR *)(DATCplImageBuffersReception_CH1.MP5_0x382+1))
#define MP5_0x382_MP5_NavStatus           _CAN1_382_1.Bits._MP5_NavStatus

//MP5_PhoneNum_TX_0x383 Layout

#define MP5_PhoneNum_TX_0x383_Byte_1		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383))
#define MP5_PhoneNum_TX_0x383_Byte_2		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383+1))
#define MP5_PhoneNum_TX_0x383_Byte_3		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383+2))
#define MP5_PhoneNum_TX_0x383_Byte_4		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383+3))
#define MP5_PhoneNum_TX_0x383_Byte_5		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383+4))
#define MP5_PhoneNum_TX_0x383_Byte_6		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383+5))
#define MP5_PhoneNum_TX_0x383_Byte_7		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383+6))
#define MP5_PhoneNum_TX_0x383_Byte_8		(*(DATCplImageBuffersReception_CH1.MP5_PhoneNum_TX_0x383+7))

//MP5_Navi_TX_0x385 Layout

#define MP5_Navi_TX_0x385_Byte_1		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385))
#define MP5_Navi_TX_0x385_Byte_2		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385+1))
#define MP5_Navi_TX_0x385_Byte_3		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385+2))
#define MP5_Navi_TX_0x385_Byte_4		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385+3))
#define MP5_Navi_TX_0x385_Byte_5		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385+4))
#define MP5_Navi_TX_0x385_Byte_6		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385+5))
#define MP5_Navi_TX_0x385_Byte_7		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385+6))
#define MP5_Navi_TX_0x385_Byte_8		(*(DATCplImageBuffersReception_CH1.MP5_Navi_TX_0x385+7))


#define mDATWriteU8BitNavDataReceiveResp_P1Default(v)  (IC_PhoneNum_RX_0x38C_Byte_1 = v)
#define mDATWriteU8BitNavDataReceiveResp_P2Default(v)  (IC_PhoneNum_RX_0x38C_Byte_2 = v)

#define cDATCdlD_UUTxHandleIC_Nav_RX_0x38C cDATCdlD_UUTxHandle_CH1IC_PhoneNum_RX_0x38C

#define mDATReadU8BitNavDataSendReq_P1Default() MP5_Navi_TX_0x385_Byte_1
#define mDATReadU8BitNavDataSendReq_P2Default() MP5_Navi_TX_0x385_Byte_2
#define mDATReadU8BitNavDataSendReq_P3Default() MP5_Navi_TX_0x385_Byte_3
#define mDATReadU8BitNavDataSendReq_P4Default() MP5_Navi_TX_0x385_Byte_4
#define mDATReadU8BitNavDataSendReq_P5Default() MP5_Navi_TX_0x385_Byte_5
#define mDATReadU8BitNavDataSendReq_P6Default() MP5_Navi_TX_0x385_Byte_6
#define mDATReadU8BitNavDataSendReq_P7Default() MP5_Navi_TX_0x385_Byte_7
#define mDATReadU8BitNavDataSendReq_P8Default() MP5_Navi_TX_0x385_Byte_8

/* ===========================================================================
//  P U B L I C   F U N C T I O N   P R O T O T Y P E S
// =========================================================================*/
extern void CanIvi_RxIndication(CAN_HWINST /*const*/ hwInst, CAN_UINT16 const canFrameHandle, CAN_RMD const * const pRmd);

extern void CanIvi_Transmit( const CAN_UINT8 ITxHandle);

extern void DATCilSendMessage(const CAN_UINT8 ITxHandle);

extern void DATCilSendMessage_CH1(const CAN_UINT8 ITxHandle);

#ifdef CANIVI_TXCONFIRMATION_ENABLE
extern void CanIvi_TxConfirmation( CAN_HWINST /*const*/ hwInst, CAN_RMD const * const pRmd );
#endif 

#endif /* IVI_H */


