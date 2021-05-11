#if !defined (CAN_DEFS_H)
#define CAN_DEFS_H
/* ==============================================================================*/
/*                              Copyright Statement                              */
/*                                                                               */
/*                        CONFIDENTIAL VISTEON CORPORATION                       */
/*                                                                               */
/*    This is an unpublished work of authorship, which contains trade secrets,   */
/*    created in 2007. Visteon Corporation owns all rights to this work and      */
/*    intends to maintain it in confidence to preserve its trade secret          */
/*    status. Visteon Corporation reserves the right, under the copyright laws   */
/*    of the United States or those of any other country that may have           */
/*    jurisdiction, to protect this work as an unpublished work, in the event    */
/*    of an inadvertent or deliberate unauthorized publication. Visteon          */
/*    Corporation also reserves its rights under all copyright laws to protect   */
/*    this work as a published work, when appropriate. Those having access to    */
/*    this work may not copy it, use it, modify it or disclose the information   */
/*    contained in it without the written authorization of Visteon Corporation.  */
/*                                                                               */
/*===============================================================================*/

/* =========================================================================*/
/*                                                                          */
/*  Name:           can_defs.h                                              */
/*                                                                          */
/*  Description:    Common CAN Definitions                                  */
/*                                                                          */
/*  Organization:   Multiplex Core Technology                               */
/*                                                                          */
/*==========================================================================*/

/* =========================================================================*/
/*  I N C L U D E   F I L E S                                               */
/* =========================================================================*/
#include "can_type.h"

/* =========================================================================*/
/*  B I T   F I E L D   D E F I N I T I O N S                               */
/* =========================================================================*/

#if !defined B_1000000000000000
#define B_1000000000000000      (0x8000u)
#endif

#if !defined B_0100000000000000
#define B_0100000000000000      (0x4000u)
#endif

#if !defined B_0010000000000000
#define B_0010000000000000      (0x2000u)
#endif

#if !defined B_0001000000000000
#define B_0001000000000000      (0x1000u)
#endif

#if !defined B_0000100000000000
#define B_0000100000000000      (0x0800u)
#endif

#if !defined B_0000010000000000
#define B_0000010000000000      (0x0400u)
#endif

#if !defined B_0000001000000000
#define B_0000001000000000      (0x0200u)
#endif

#if !defined B_0000000100000000
#define B_0000000100000000      (0x0100u)
#endif


#if !defined B_0000000010000000
#define B_0000000010000000      (0x0080u)
#endif

#if !defined B_0000000001000000
#define B_0000000001000000      (0x0040u)
#endif

#if !defined B_0000000000100000
#define B_0000000000100000      (0x0020u)
#endif

#if !defined B_0000000000010000
#define B_0000000000010000      (0x0010u)
#endif

#if !defined B_0000000000001000
#define B_0000000000001000      (0x0008u)
#endif

#if !defined B_0000000000000100
#define B_0000000000000100      (0x0004u)
#endif

#if !defined B_0000000000000010
#define B_0000000000000010      (0x0002u)
#endif

#if !defined B_0000000000000001
#define B_0000000000000001      (0x0001u)
#endif

#if !defined B_0000000000000000
#define B_0000000000000000      (0x0000u)
#endif


#if !defined B_10000000
#define B_10000000              (0x80u)
#endif

#if !defined B_01000000
#define B_01000000              (0x40u)
#endif

#if !defined B_00100000
#define B_00100000              (0x20u)
#endif

#if !defined B_00010000
#define B_00010000              (0x10u)
#endif

#if !defined B_00001000
#define B_00001000              (0x08u)
#endif

#if !defined B_00000100
#define B_00000100              (0x04u)
#endif

#if !defined B_00000010
#define B_00000010              (0x02u)
#endif

#if !defined B_00000001
#define B_00000001              (0x01u)
#endif

#if !defined B_00000000
#define B_00000000              (0x00u)
#endif

#if !defined BIT31
#define BIT31                   (0x80000000u)
#endif

#if !defined BIT30
#define BIT30                   (0x40000000u)
#endif

#if !defined BIT29
#define BIT29                   (0x20000000u)
#endif

#if !defined BIT28
#define BIT28                   (0x10000000u)
#endif

#if !defined BIT27
#define BIT27                   (0x08000000u)
#endif

#if !defined BIT26
#define BIT26                   (0x04000000u)
#endif

#if !defined BIT25
#define BIT25                   (0x02000000u)
#endif

#if !defined BIT24
#define BIT24                   (0x01000000u)
#endif

#if !defined BIT23
#define BIT23                   (0x00800000u)
#endif

#if !defined BIT22
#define BIT22                   (0x00400000u)
#endif

#if !defined BIT21
#define BIT21                   (0x00200000u)
#endif

#if !defined BIT20
#define BIT20                   (0x00100000u)
#endif

#if !defined BIT19
#define BIT19                   (0x00080000u)
#endif

#if !defined BIT18
#define BIT18                   (0x00040000u)
#endif

#if !defined BIT17
#define BIT17                   (0x00020000u)
#endif

#if !defined BIT16
#define BIT16                   (0x00010000u)
#endif

#if !defined BIT15
#define BIT15                   (0x00008000u)
#endif

#if !defined BIT14
#define BIT14                   (0x00004000u)
#endif

#if !defined BIT13
#define BIT13                   (0x00002000u)
#endif

#if !defined BIT12
#define BIT12                   (0x00001000u)
#endif

#if !defined BIT11
#define BIT11                   (0x00000800u)
#endif

#if !defined BIT10
#define BIT10                   (0x00000400u)
#endif

#if !defined BIT9
#define BIT9                    (0x00000200u)
#endif

#if !defined BIT8
#define BIT8                    (0x00000100u)
#endif

#if !defined BIT7
#define BIT7                    (0x00000080u)
#endif

#if !defined BIT6
#define BIT6                    (0x00000040u)
#endif

#if !defined BIT5
#define BIT5                    (0x00000020u)
#endif

#if !defined BIT4
#define BIT4                    (0x00000010u)
#endif

#if !defined BIT3
#define BIT3                    (0x00000008u)
#endif

#if !defined BIT2
#define BIT2                    (0x00000004u)
#endif

#if !defined BIT1
#define BIT1                    (0x00000002u)
#endif

#if !defined BIT0
#define BIT0                    (0x00000001u)
#endif

/* =========================================================================*/
/*                                                                          */
/* Description:     CAN Status Byte Type Definition                         */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_STATUS;

/* =========================================================================*/
/*                                                                          */
/* Description:     Driver Layer Status Bit Field Definitions               */
/*                                                                          */
/* =========================================================================*/

#define CANB_DRV_TX_SUSPEND                 (0x02u)
#define CANB_DRV_RX_SUSPEND                 (0x01u)

/* =========================================================================*/
/*                                                                          */
/* Description:     Driver Layer Error Status Bit Field Definitions         */
/*                                                                          */
/* =========================================================================*/

#define CANB_DRV_TMDQ_ERROR                 (0x20u)
#define CANB_DRV_TMDQ_OVERRUN               (0x10u)
#define CANB_DRV_TXQ_ERROR                  (0x08u)
#define CANB_DRV_TXQ_OVERRUN                (0x04u)
#define CANB_DRV_RXQ_ERROR                  (0x02u)
#define CANB_DRV_RXQ_OVERRUN                (0x01u)

#define CANB_DRV_ERRORS (CANB_DRV_TXQ_ERROR     | \
                         CANB_DRV_TXQ_OVERRUN   | \
                         CANB_DRV_RXQ_ERROR     | \
                         CANB_DRV_RXQ_OVERRUN)

/* =========================================================================*/
/*                                                                          */
/* Description:     Hardware Layer Status Bit Field Definitions             */
/*                                                                          */
/* =========================================================================*/

#define CANB_HW_POWERDOWN                   (0x80u)
#define CANB_HW_SLEEP                       (0x40u)
#define CANB_HW_BUS_ACTIVE                  (0x20u)
#define CANB_HW_INTERRUPTS_ENABLED          (0x10u)
#define CANB_HW_LOOPBACK                    (0x08u)
#define CANB_HW_SILENTMODE                  (0x04u)
#define CANB_HW_INITOK                      (0x02u)
#define CANB_HW_ONLINE                      (0x01u)

/* =========================================================================*/
/*                                                                          */
/* Description:     Hardware Layer Error Status Bit Field Definitions       */
/*                                                                          */
/* =========================================================================*/

#define CANB_HW_TX_OVERRUN                  (0x10u)
#define CANB_HW_RX_OVERRUN                  (0x08u)
#define CANB_HW_ERROR_WARNING               (0x04u)
#define CANB_HW_ERROR_PASSIVE               (0x02u)
#define CANB_HW_BUSOFF                      (0x01u)

/* =============================================================================*/
/*                                                                              */
/* Description:     Hardware Configuration Bit Field Definitions                */
/*                                                                              */
/*                  Note that some CAN controllers such as the Motorola Star12  */
/*                  MSCAN generate interrupts when the transmit buffer is       */
/*                  empty, therefore the interrupt cannot be enabled until      */
/*                  the transmit message has been loaded.                       */
/*                                                                              */
/* =============================================================================*/
#define CANB_HW_BOFF_IE                     (0x40u)
#define CANB_HW_TXPRI_MODE                  (0x20u)
#define CANB_HW_ERROR_IE                    (0x10u)
#define CANB_HW_WAKE_IE                     (0x08u)
#define CANB_HW_RXOVR_IE                    (0x04u)
#define CANB_HW_RX_IE                       (0x02u)
#define CANB_HW_TX_IE                       (0x01u)

/* =========================================================================*/
/*                                                                          */
/* Description:     COMSTAT Bit Field Definitions                           */
/*                                                                          */
/*                  This 16 bit word is a concatenation of various CAN      */
/*                  driver layer and status bits defined above.             */
/*                                                                          */
/* =========================================================================*/
#define CANB_COMST_TX_SUSPEND               ((CAN_UINT16) 0x8000u)
#define CANB_COMST_RX_SUSPEND               ((CAN_UINT16) 0x4000u)
#define CANB_COMST_TMDQ_ERROR               ((CAN_UINT16) 0x2000u)
#define CANB_COMST_TMDQ_OVERRUN             ((CAN_UINT16) 0x1000u)
#define CANB_COMST_TXQ_ERROR                ((CAN_UINT16) 0x0800u)
#define CANB_COMST_TXQ_OVERRUN              ((CAN_UINT16) 0x0400u)
#define CANB_COMST_RXQ_ERROR                ((CAN_UINT16) 0x0200u)
#define CANB_COMST_RXQ_OVERRUN              ((CAN_UINT16) 0x0100u)

#define CANB_COMST_RX_OVERRUN               ((CAN_UINT16) 0x0080u)
#define CANB_COMST_ERROR_WARNING            ((CAN_UINT16) 0x0040u)
#define CANB_COMST_ERROR_PASSIVE            ((CAN_UINT16) 0x0020u)
#define CANB_COMST_BUSOFF                   ((CAN_UINT16) 0x0010u)
#define CANB_COMST_SLEEP                    ((CAN_UINT16) 0x0008u)
#define CANB_COMST_TXPRI_MODE               ((CAN_UINT16) 0x0004u)
#define CANB_COMST_INTERRUPTS_ENABLED       ((CAN_UINT16) 0x0002u)
#define CANB_COMST_ONLINE                   ((CAN_UINT16) 0x0001u)

/* =========================================================================*/
/*                                                                          */
/* Description:     CAN Message Data Length                                 */
/*                                                                          */
/* =========================================================================*/
#define CAN_MAX_DATA_LENGTH     (8u)

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_IDENT                                               */
/*                                                                          */
/* Description:     Type definition for CAN identifier                      */
/*                                                                          */
/* Note: I8[0] is the MSB, I8[3] is the LSB                                 */
/*       I16[0] is the MSW, I16[1] is the LSW                               */
/*                                                                          */
/* =========================================================================*/
typedef union tagCAN_IDENT
{
    CAN_UINT32 I32;
    CAN_UINT16 I16 [2];
    CAN_UINT8  I8  [4];

} CAN_IDENT, *PCAN_IDENT;


/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_RMD                                                 */
/*                                                                          */
/* Description:     Type definition for CAN message receive record.         */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_UINT8    Size;                          /* CAN message data length */
    CAN_IDENT    Identifier;                    /* CAN message identifier  */
    CAN_UINT8    Data [CAN_MAX_DATA_LENGTH];    /* CAN message data        */
    CAN_UINT8    Qualifiers;                    /* Receive Qualifiers      */
    CAN_UINT8    Vector;                        /* CAN message vector ID   */

} CAN_RMD;

/* CAN Receive Message Qualifiers Bit Values */
#define CANB_RX_EXTENDED        (0x01u)
#define CANB_RX_REMOTE          (0x02u)

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_TMH                                                 */
/*                                                                          */
/* Description:     CAN transmit message handle.                            */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT16 CAN_TMH; 

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_TMD                                                 */
/*                                                                          */
/* Description:     CAN message descriptor type definition.                 */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_UINT8           Size;           /* CAN message data length  */
    CAN_IDENT           Identifier;     /* CAN message identifier   */
    CAN_UINT8 const *   pData;          /* Pointer to Data          */
    CAN_UINT8           Options;        /* CAN message options      */
    CAN_TMH             MsgHandle;      /* Transmit Message Hangle  */

} CAN_TMD;

/* CAN Transmit Message Options Bit Values */
#define CANB_TX_STD_DATA		0x00u
#define CANB_TX_EXTENDED        0x01u
#define CANB_TX_REMOTE          0x02u
#define CANB_TX_QUEUED_TMD      0x04u
#define CANB_REMOTE_DATA_UPDATE     0x08u  
#define CANB_TX_REMOTE_DATA         0x10u 
#define CANB_TX_PAD_DATA            0x20u 

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_QTMD                                                */
/*                                                                          */
/* Description:     CAN queued TMD data structure definition                */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_TMD     canTmd;                         /* CAN TMD  */
    CAN_UINT8   canData [CAN_MAX_DATA_LENGTH];  /* CAN Data */
            
} CAN_QTMD;

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_QSTATUS                                             */
/*                                                                          */
/* Description:     Structure Containing Queue Status Variables             */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_UINT8 nxtIn;  
    CAN_UINT8 nxtOut; 
    CAN_UINT8 qNum;        
                
} CAN_QSTATUS;

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_TXQ_INFO                                            */
/*                                                                          */
/* Description:     Structure Containing Info About Transmit Queue          */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_TMD const * * const pptmd;      /* Start of Transmit Queue  */
    CAN_QSTATUS     * const ptxqStatus; /* Status Variables Pointer */
    CAN_UINT8         const txqSize;    /* Transmit Queue Size      */      
                
} CAN_TXQ_INFO;

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_TMDQ_INFO                                           */
/*                                                                          */
/* Description:     Structure Containing Info About TMD Queue               */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_QTMD    * const ptmd;        /* Start of TMD Queue       */
    CAN_QSTATUS * const ptmdqStatus; /* Status Variables Pointer */
    CAN_UINT8     const tmdqSize;    /* TMD Queue Size           */      
                
} CAN_TMDQ_INFO;

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_RXQ_INFO                                            */
/*                                                                          */
/* Description:     Structure Containing Info About TMD Queue               */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_RMD     * const prxq;       /* Start of Rx Queue        */
    CAN_QSTATUS * const prxqStatus; /* Status Variables Pointer */
    CAN_UINT8     const rxqSize;    /* Rx Queue Size            */      
                
} CAN_RXQ_INFO;

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_QINFO_PTRS                                          */
/*                                                                          */
/* Description:     Structure Containing Pointers to Driver Queue Info      */
/*                                                                          */
/* =========================================================================*/
typedef struct
{
    CAN_TXQ_INFO  const * const ptxqInfo;   /* TxQ  Info Pointer */
    CAN_TMDQ_INFO const * const ptmdqInfo;  /* TmdQ Info Pointer */
    CAN_RXQ_INFO  const * const prxqInfo;   /* RxQ  Info Pointer */      
                
} CAN_QINFO_PTRS;


/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_HMV                                                 */
/*                                                                          */
/* Description:     CAN Buffer Vector Number/Mode Handle                    */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_HWINST;



/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_HMV                                                 */
/*                                                                          */
/* Description:     CAN Buffer Vector Number/Mode Handle                    */
/*                                                                          */
/* =========================================================================*/
typedef CAN_SINT8 CAN_HMV;

#define CANH_MV_GPTX                    (-2)
#define CANH_MV_SWQ                     (-1)
#define CANH_MV_0                       ( 0)
#define CANH_MV_1                       ( 1)
#define CANH_MV_2                       ( 2)
#define CANH_MV_3                       ( 3)
#define CANH_MV_4                       ( 4)
#define CANH_MV_5                       ( 5)
#define CANH_MV_6                       ( 6)
#define CANH_MV_7                       ( 7)
#define CANH_MV_8                       ( 8)
#define CANH_MV_9                       ( 9)
#define CANH_MV_10                      (10)
#define CANH_MV_11                      (11)
#define CANH_MV_12                      (12)
#define CANH_MV_13                      (13)
#define CANH_MV_14                      (14)
#define CANH_MV_15                      (15)
#define CANH_MV_16                      (16)
#define CANH_MV_17                      (17)
#define CANH_MV_18                      (18)
#define CANH_MV_19                      (19)
#define CANH_MV_20                      (20)
#define CANH_MV_21                      (21)
#define CANH_MV_22                      (22)
#define CANH_MV_23                      (23)
#define CANH_MV_24                      (24)
#define CANH_MV_25                      (25)
#define CANH_MV_26                      (26)
#define CANH_MV_27                      (27)
#define CANH_MV_28                      (28)
#define CANH_MV_29                      (29)
#define CANH_MV_30                      (30)
#define CANH_MV_31                      (31)
#define CANH_MV_32                      (32)
#define CANH_MV_33                      (33)
#define CANH_MV_34                      (34)
#define CANH_MV_35                      (35)
#define CANH_MV_36                      (36)
#define CANH_MV_37                      (37)
#define CANH_MV_38                      (38)
#define CANH_MV_39                      (39)
#define CANH_MV_40                      (40)
#define CANH_MV_41                      (41)
#define CANH_MV_42                      (42)
#define CANH_MV_43                      (43)
#define CANH_MV_44                      (44)
#define CANH_MV_45                      (45)
#define CANH_MV_46                      (46)
#define CANH_MV_47                      (47)
#define CANH_MV_48                      (48)
#define CANH_MV_49                      (49)
#define CANH_MV_50                      (50)
#define CANH_MV_51                      (51)
#define CANH_MV_52                      (52)
#define CANH_MV_53                      (53)
#define CANH_MV_54                      (54)
#define CANH_MV_55                      (55)
#define CANH_MV_56                      (56)
#define CANH_MV_57                      (57)
#define CANH_MV_58                      (58)
#define CANH_MV_59                      (59)
#define CANH_MV_60                      (60)
#define CANH_MV_61                      (61)
#define CANH_MV_62                      (62)
#define CANH_MV_63                      (63)
#define CANH_MV_64                      (64)
#define CANH_MV_ALL                     (64)

/* =========================================================================*/
/*                                                                          */
/* Type name:     CAN_SERVICE                                               */
/*                                                                          */
/* Description:   CAN Service Requests                                      */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_SERVICE;

#define CANSV_ONLINE                    ( 0)
#define CANSV_OFFLINE                   ( 1)
#define CANSV_POWER_DOWN                ( 2)
#define CANSV_SLEEP                     ( 3)
#define CANSV_WAKEUP                    ( 4)
#define CANSV_BUS_IS_ACTIVE             ( 5)
#define CANSV_BUS_IS_SLEEPING           ( 6)
#define CANSV_HW_IS_SLEEPING            ( 7)
#define CANSV_TX_IS_PENDING             ( 8)
#define CANSV_TX_FLUSH                  ( 9)
#define CANSV_RX_FLUSH                  (10)
#define CANSV_SUSPEND_ALL               (11)
#define CANSV_SUSPEND_TX                (12)
#define CANSV_SUSPEND_RX                (13)
#define CANSV_RESUME_ALL                (14)
#define CANSV_RESUME_TX                 (15)
#define CANSV_RESUME_RX                 (16)
#define CANSV_ENABLE_RX_INTERRUPT       (17)
#define CANSV_DISABLE_RX_INTERRUPT      (18)
#define CANSV_ENABLE_INTERRUPTS         (19)
#define CANSV_DISABLE_INTERRUPTS        (20)
#define CANSV_ENABLE_TXPRIORITY_MODE    (21)
#define CANSV_DISABLE_TXPRIORITY_MODE   (22)
#define CANSV_ENABLE_LOOPBACK           (23)
#define CANSV_DISABLE_LOOPBACK          (24)
#define CANSV_ENABLE_SILENTMODE         (25)
#define CANSV_DISABLE_SILENTMODE        (26)
#define CANSV_ENABLE_AUTOTX             (27)
#define CANSV_DISABLE_AUTOTX            (28)
#define CANSV_ENABLE_TX_INTERRUPT       (29)
#define CANSV_DISABLE_TX_INTERRUPT      (30)

/* =========================================================================*/
/*                                                                          */
/* Type name:      CAN_OM                                                   */
/*                                                                          */
/* Description:    Operational Mode Requests                                */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_OM;

#define CANH_OM_ONLINE                  ( 0u)
#define CANH_OM_OFFLINE                 ( 1u)
#define CANH_OM_POWER_DOWN              ( 2u)
#define CANH_OM_SLEEP                   ( 3u)
#define CANH_OM_WAKEUP                  ( 4u)
#define CANH_OM_SUSPEND_ALL             ( 5u)
#define CANH_OM_SUSPEND_TX              ( 6u)
#define CANH_OM_SUSPEND_RX              ( 7u)
#define CANH_OM_RESUME_ALL              ( 8u)
#define CANH_OM_RESUME_TX               ( 9u)
#define CANH_OM_RESUME_RX               (10u)
#define CANH_OM_ENABLE_INTERRUPTS       (11u)
#define CANH_OM_DISABLE_INTERRUPTS      (12u)
#define CANH_OM_ENABLE_RX_INTERRUPT     (13u)
#define CANH_OM_DISABLE_RX_INTERRUPT    (14u)
#define CANH_OM_ENABLE_LOOPBACK         (15u)
#define CANH_OM_DISABLE_LOOPBACK        (16u)
#define CANH_OM_ENABLE_SILENTMODE       (17u)
#define CANH_OM_DISABLE_SILENTMODE      (18u)

/* =========================================================================*/
/*                                                                          */
/* Type name:      CAN_IM                                                   */
/*                                                                          */
/* Description:    Initialization Mode Requests                             */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_IM;

#define CANIM_COLD_INIT                 (0u)
#define CANIM_WARM_INIT                 (1u)
#define CANIM_VERIFY                    (2u)

/* =========================================================================*/
/*                                                                          */
/* Type name:      CAN_GET_COMSTATUS_MODE                                   */
/*                                                                          */
/* Description:    CAN Get Communiation Status Modes                        */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_GET_COMSTATUS_MODE;

#define CAN_COMSTATUS                   (0u)
#define CAN_CLEAR_COMSTATUS             (1u)

/* =========================================================================*/
/*                                                                          */
/* Type name:      CAN_GET_STATUS_MODE                                      */
/*                                                                          */
/* Description:    CAN Get Status Modes                                     */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_GET_STATUS_MODE;

#define CAN_DRVR_STATUS                 (0x0u)
#define CAN_DRVR_ERROR_STATUS           (0x1u)
#define CAN_HW_STATUS                   (0x2u)
#define CAN_HW_ERROR_STATUS             (0x3u)
#define CAN_HW_CFG_STATUS               (0x4u)
#define CAN_CLEAR_DRVR_ERROR_STATUS     (0x5u)
#define CAN_CLEAR_HW_ERROR_STATUS       (0x6u)

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_RC                                                  */
/*                                                                          */
/* Description:     Return Codes                                            */
/*                                                                          */
/* =========================================================================*/
typedef CAN_SINT8 CAN_RC;

#define CANRC_OK                        ( 1)
#define CANRC_SUCCESS                   ( 1)
#define CANRC_TRUE                      ( 1)
#define CANRC_FALSE                     ( 0)
#define CANRC_NULL                      ( 0)
#define CANRC_FAIL                      ( 0)
#define CANRC_EMPTY                     ( 0)
#define CANRC_ERROR                     (-1)
#define CANRC_INVALID_PARM              (-2)
#define CANRC_INVALID_HANDLE            (-3)
#define CANRC_NULL_PTR                  (-4)
#define CANRC_INVALID_SERVICE           (-5)
#define CANRC_NOT_AVAILABLE             (-6)
#define CANRC_RX_OVERRUN                (-7)
#define CANRC_TXQ_OVERRUN               (-8)
#define CANRC_TMDQ_OVERRUN              (-9)

/* =========================================================================*/
/*                                                                          */
/* Type name:       CAN_EXCEPTION                                           */
/*                                                                          */
/* Description:     CAN Errors                                              */
/*                                                                          */
/* =========================================================================*/
typedef CAN_UINT8 CAN_EXCEPTION;

#define CANEX_BUSOFF                    ( 0u)
#define CANEX_RX_OVERRUN                ( 1u)
#define CANEX_RXQ_OVERRUN               ( 2u)
#define CANEX_TXQ_ERROR                 ( 3u)
#define CANEX_TMDQ_ERROR                ( 4u)
#define CANEX_RXQ_ERROR                 ( 5u)
#define CANEX_TX_ERROR_PASSIVE          ( 6u)
#define CANEX_RX_ERROR_PASSIVE          ( 7u)
#define CANEX_ERROR_PASSIVE             ( 8u)
#define CANEX_TX_ERROR_WARNING          ( 9u)
#define CANEX_RX_ERROR_WARNING          (10u)
#define CANEX_ERROR_WARNING             (11u)

/* =========================================================================*/
/*                                                                          */
/* Description:     CAN Controller ID (For MCU's With Multiple Controllers) */
/*                                                                          */
/* =========================================================================*/
#define CAN_CONTROLLER_0                (0u)
#define CAN_CONTROLLER_1                (1u)
#define CAN_CONTROLLER_2                (2u)
#define CAN_CONTROLLER_3                (3u)
#define CAN_CONTROLLER_4                (4u)
#define CAN_CONTROLLER_5                (5u)
#define CAN_CONTROLLER_6                (6u)
#define CAN_CONTROLLER_7                (7u)
#define CAN_CONTROLLER_8                (8u)
#define CAN_CONTROLLER_9                (9u)

/* =========================================================================*/
/*                                                                          */
/* Description:     Disable/Enable Macros for Configuration Options         */
/*                                                                          */
/* =========================================================================*/
#define CAN_DISABLE                     (0x0u)
#define CAN_ENABLE                      (0x1u)


/* =========================================================================*/
/*                                                                          */
/* Description:     CAN Message Types                                       */
/*                                                                          */
/* =========================================================================*/
#define CAN_DATA_MSG                    (0u)
#define CAN_RMT_MSG                     (1u)

/* =========================================================================*/
/*                                                                          */
/* Description:     CAN Controller Types                                    */
/*                                                                          */
/* =========================================================================*/
#define CAN_BASIC_CONTROLLER            (0u)
#define CAN_FULL_CONTROLLER             (1u)

/* =========================================================================*/
/*                                                                          */
/* Description:     CAN Error Detection Level                               */
/*                                                                          */
/* =========================================================================*/
#define CAN_NO_ERROR_DETECTION          (0x0u)
#define CAN_BUSOFF                      (0x1u)
#define CAN_ERROR_PASSIVE               (0x2u)
#define CAN_ERROR_WARNING               (0x3u)

/* =========================================================================*/
/*                                                                          */
/* Description:     Buffer Direction for Full CAN Mailboxes                 */
/*                                                                          */
/* =========================================================================*/
#define CAN_BUFDIR_TRANSMIT             (0x0u)
#define CAN_BUFDIR_RECEIVE              (0x1u)

/* =========================================================================*/
/*                                                                          */
/* Description:     Clock Source selection                                  */
/*                                                                          */
/* =========================================================================*/
#define CAN_CLK_SOURCE_CRIN             (0x0u)
#define CAN_CLK_SOURCE_SYSCLK           (0x1u)

/* =========================================================================*/
/*                                                                          */
/* Description:     CAN General Purpose Bit Numbers                         */
/*                                                                          */
/*                  Defined to Address QAC Squawks about Magic Numbers      */
/*                                                                          */
/* =========================================================================*/
#define CAN_GPNUM_1         (1)
#define CAN_GPNUM_2         (2)
#define CAN_GPNUM_3         (3)
#define CAN_GPNUM_4         (4)
#define CAN_GPNUM_5         (5)
#define CAN_GPNUM_6         (6)
#define CAN_GPNUM_7         (7)
#define CAN_GPNUM_8         (8)
#define CAN_GPNUM_9         (9)
#define CAN_GPNUM_10        (10)
#define CAN_GPNUM_11        (11)
#define CAN_GPNUM_12        (12)
#define CAN_GPNUM_13        (13)
#define CAN_GPNUM_14        (14)
#define CAN_GPNUM_15        (15)
#define CAN_GPNUM_16        (16)

#define CAN_8BITS           (8)
#define CAN_16BITS          (16)
#define CAN_HEX_0F          (0x0Fu)
#define CAN_HEX_F0          (0xF0u)
#define CAN_HEX_FF          (0xFFu)
#define CAN_HEX_FFFF        (0xFFFFu)

/* ===========================================================================*/
/*  F U N C T I O N   M I M I C K I N G   M A C R O   D E F I N I T I O N S   */
/* ===========================================================================*/

/* Extract a Nibble from a Byte */
#define CAN_LSNIBBLE(w)                    (((CAN_UINT8)(w)) & (0x0Fu))
#define CAN_MSNIBBLE(w)                    ((CAN_UINT8)((CAN_UINT16)(w) >> 8))

/* Extract a Byte from a Word */
#define CAN_LSBYTE(w)                      ((CAN_UINT8)(w))
#define CAN_MSBYTE(w)                      ((CAN_UINT8)((CAN_UINT16)(w) >> 8))

/* Extract a Word from a Long Word */
#define CAN_LSWORD(l)                      ((CAN_UINT16)(l))
#define CAN_MSWORD(l)                      ((CAN_UINT16)((CAN_UINT32)(l) >> 16))

#define CAN_LSHIFT(value, cnt)             ((CAN_UINT32)(value) << (cnt))

#define CAN_MASK8_COMPLEMENT(mask)         ((CAN_UINT8) (CAN_HEX_FF ^ (mask)))

#define CAN_MASK16_COMPLEMENT(mask)        ((CAN_UINT16) (CAN_HEX_FFFF ^ (mask)))

#define mCanIgnoreParameter(p1)            ((void)(!(p1)))



#endif /* CAN_DEFS_H =======================================================*/

/*****************************************************************************
C L E A R C A S E    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date       By         Reason For Change
------------------------------------------------------------------------------
Clearcase Rev 1.0
14-Aug-07           kkalais1        Initial version. 

20-Aug-07 Rev 1.1   kkalais1        #define added for BIT32 - BIT16

Clearcase Rev 1.2
13-May-10           ksenthi2        Modified to support MPC560x and muti instance. 

******************************************************************************/

/* End of file ***************************************************************/







