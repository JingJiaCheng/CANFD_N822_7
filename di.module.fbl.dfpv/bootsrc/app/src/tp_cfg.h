#ifndef TP_CFG_H
#define TP_CFG_H

#include "udsdiag_cfg.h"
#include "fbl_app.h"
#include "udsdiag.h"

/* ===========================================================================
  
                       CONFIDENTIAL VISTEON CORPORATION
  
    This is an unpublished work of authorship, which contains trade secrets,
    created in 2016.  Visteon Corporation owns all rights to this work and
    intends to maintain it in confidence to preserve its trade secret status.
    Visteon Corporation reserves the right, under the copyright laws of the
    United States or those of any other country that may have jurisdiction, to
    protect this work as an unpublished work, in the event of an inadvertent
    or deliberate unauthorized publication.  Visteon Corporation also reserves
    its rights under all copyright laws to protect this work as a published
    work, when appropriate.  Those having access to this work may not copy it,
    use it, modify it or disclose the information contained in it without the
    written authorization of Visteon Corporation.
  
   =========================================================================*/
#define VTP_CFG_VERSION         (0x0100u)
/* ===========================================================================
  
    Name:           tp_cfg.h
  
    Description:    Configuration Input File for TP
  
    Organization:   Network Subsystem
  
   =========================================================================*/

/* ===========================================================================
  
   Name:            VTP_UDS_SUPPORT
  
   Description:     This parameter specifies the upper layer for the TP
  
   Template:        #define VTP_UDS_SUPPORT
  
   Assumptions:     
  
   =========================================================================*/
#define VTP_UDS_SUPPORT
/* ===========================================================================
  
   Name:            VTP_CAN_CHANNEL
  
   Description:     This parameter specifies the diag channel associated with the which CAN channel
  
   Template:        #define VTP_CAN_CHANNEL  (0u)
  
   Assumptions:     
  
   =========================================================================*/
#define VTP_CAN_CHANNEL      (1u)
/* ===========================================================================
  
   Name:            VTP_NUM_CHANNEL_COUNT
  
   Description:     This parameter specifies the number of TP channels
                    used by the Application
  
   Template:        #define VTP_NUM_CHANNEL_COUNT  (3u)
  
   Assumptions:
  
   =========================================================================*/
#define VTP_NUM_CHANNEL_COUNT  (1u)

/* ===========================================================================
  
   Name:            VTP_PERIODICITY
  
   Description:     This parameter specifies the TP periodic task schedule time
                    in msec.This parameter defines the STmin for all TP channel
  
   Template:       #define VTP_PERIODICITY          (5u)
  
   =========================================================================*/
#define VTP_PERIODICITY          (2u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_RESPONSE_ID
  
   Description:     This paramter specifies the TP Tx ID associated with 
                    the TP channel XXX
  
   Templates:       #define VTP_DIAG_RESPONSE_ID                 (0xXXXu)
  
   =========================================================================*/
/* The CAN Id for Diag RESPONSE from ECU */

#define VTP_DIAG_RESPONSE_ID			(0x00000768u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_REQUEST_ID
  
   Description:     This paramter specifies the TP Rx ID associated with 
                    the TP channel XXX
  
   Templates:       #define VTP_DIAG_REQUEST_ID                 XXXXu
  
   =========================================================================*/
/* The CAN Id for Diag Request from tool */

#define VTP_DIAG_PHYS_REQUEST_ID			(0x00000760u)

#define VTP_DIAG_FUNC_REQUEST_ID            (0x000007DFu)

/* ===========================================================================
  
   Name(s):         VTP_XXX_MAX_WAIT_CNT
  
   Description:     This paramter specifies the Number of successive 
                    FC with Wait Status accepted during data transfer.
  
   Templates:       #define VTP_DIAG_MAX_WAIT_CNT          (2u)
  
   =========================================================================*/
#define VTP_DIAG_MAX_WAIT_CNT               (0x00u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_BLOCKSIZE
  
   Description:     The block size of TP frame during Transmission.
                    Block size zero mentions no BS used by TP
  
   Templates:       #define VTP_DIAG_BLOCKSIZE          (0x00u)
  
   =========================================================================*/

#define VTP_DIAG_BLOCKSIZE                  (0x00u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_STMIN
  
   Description:     The STmin of TP frame during Reception.
                    Block size zero mentions no BS used by TP
  
   Templates:       #define VTP_DIAG_STMIN          (0x00u)
  
   =========================================================================*/

#define VTP_DIAG_STMIN                      (0u)//(1u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_TX_CF_TIME_INMSEC
  
   Description:     Time out value for transmit Consecutive Frame for 
                    the TP channel XXX
  
   Templates:       #define VTP_DIAG_TX_CF_TIME_INMSEC          (35u)
  
   =========================================================================*/

#define VTP_DIAG_TX_CF_TIME_INMSEC           (1000u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_WAIT_FC_TIME_INMSEC
  
   Description:     Time out value for waiting for FLow Control Frame for 
                    the TP channel XXX
  
   Templates:       #define VTP_DIAG_WAIT_FC_TIME_INMSEC        (150u)
  
   =========================================================================*/
#define VTP_DIAG_WAIT_FC_TIME_INMSEC         (1000u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_WAIT_CF_TIME_INMSEC
  
   Description:     Time out value for waiting for Consecutive Frame for 
                    the TP channel XXX
  
   Templates:       #define VTP_DIAG_WAIT_CF_TIME_INMSEC        (150u)
  
   =========================================================================*/

#define VTP_DIAG_WAIT_CF_TIME_INMSEC            (1000u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_WAIT_CF_TIME_INMSEC
  
   Description:     Time out value for waiting for Confirmation to Txed message
                    for TP channel XXX
  
   Templates:       #define VTP_DIAG_TX_WAIT_CONF_TIME_INMSEC        (70u)
  
   =========================================================================*/

#define VTP_DIAG_TX_WAIT_CONF_TIME_INMSEC       (1000u)

/* ===========================================================================
  
   Name(s):         VTP_XXX_MESSAGE_HANDLE
  
   Description:     The CAN Transmit message handle to be used.
  
   Templates:       #define VTP_DIAG_MESSAGE_HANDLE             (0x01u)
  
   =========================================================================*/
/* Number of IL Message handles + 1 */

#define VTP_DIAG_MESSAGE_HANDLE             (0x00u)


#define   TP_TIME_IN_TASK_TICS( tMs )  ((CAN_UINT16) (((tMs)/VTP_PERIODICITY)))

/* ===========================================================================
  
   Name(s):         VTPMC_RESPONSE_ID
  
   Description:     This paramter specifies the TP Tx ID associated with 
                    all the TP channels. This list should hold the TP Tx IDs 
                    of all the channels in the order of Connections
  
   =========================================================================*/

#define VTPMC_RESPONSE_ID               \
        VTP_DIAG_RESPONSE_ID

/* ===========================================================================
  
   Name(s):         VTPMC_REQUEST_ID
  
   Description:     This paramter specifies the TP RX ID associated with 
                    all the TP channels. This list should hold the TP RX IDs 
                    of all the channels in the order of Connections
  
   =========================================================================*/

#define VTPMC_REQUEST_ID          \
        VTP_DIAG_PHYS_REQUEST_ID

/* ===========================================================================
  
   Name(s):         VTPMC_MESSAGE_HANDLE
  
   Description:     This paramter specifies the CAN Transmit Message Handle 
                    associated with all the TP channels. 
                    This list should hold the CAN Transmit Message Handle 
                    of all the channels in the order of Connections
  
   =========================================================================*/

#define VTPMC_MESSAGE_HANDLE          \
        VTP_DIAG_MESSAGE_HANDLE

/* ===========================================================================
  
   Name(s):         VTPMC_MAX_WAIT_CNT
  
   Description:     This paramter specifies the Number of successive 
                    FC with Wait Status accepted during data transfer for 
                    all the channels.
                    This list should hold the Max wair count parameter 
                    of all the channels in the order of Connections
  
   =========================================================================*/

#define VTPMC_MAX_WAIT_CNT          \
        VTP_DIAG_MAX_WAIT_CNT

/* ===========================================================================
  
   Name(s):         VTPMC_BLOCKSIZE
  
   Description:     The block size of TP frame during Transmission.
                    Block size zero mentions no BS used by TP.
                    This list should hold the Block size parameter 
                    of all the channels in the order of Connections
  
   =========================================================================*/
#define VTPMC_BLOCKSIZE           \
        VTP_DIAG_BLOCKSIZE

/* ===========================================================================
  
   Name(s):         VTPMC_STMIN
  
   Description:     The STmin of TP frame during Reception.
                    Block size zero mentions no BS used by TP
  
   =========================================================================*/
#define VTPMC_STMIN           \
        VTP_DIAG_STMIN

/* ===========================================================================
  
   Name(s):         VTPMC_TX_CF_TIMECNT
  
   Description:     Time out value for transmit Consecutive Frame time Count 
                    value for all the TP channels
                    This list should hold the Consecutive frame wait count
                     parameter of all the channels in the order of Connections
  
   =========================================================================*/
#define VTPMC_TX_CF_TIMECNT                                     \
        TP_TIME_IN_TASK_TICS(VTP_DIAG_TX_CF_TIME_INMSEC)

/* ===========================================================================
  
   Name(s):         VTPMC_WAIT_FC_TIMECNT
  
   Description:     Time out value for Flow Control wait  time Count 
                    value for all the TP channels
                    This list should hold Flow Control wait count
                    parameter of all the channels in the order of Connections
  
   =========================================================================*/

#define VTPMC_WAIT_FC_TIMECNT                                     \
        TP_TIME_IN_TASK_TICS(VTP_DIAG_WAIT_FC_TIME_INMSEC)

/* ===========================================================================
  
   Name(s):         VTPMC_WAIT_CF_TIMECNT
  
   Description:     Time out value for Consecutive Frame wait  time Count 
                    value for all the TP channels
                    This list should hold Consecutive Frame wait count
                    parameter of all the channels in the order of Connections
  
   =========================================================================*/
#define VTPMC_WAIT_CF_TIMECNT                                     \
        TP_TIME_IN_TASK_TICS(VTP_DIAG_WAIT_CF_TIME_INMSEC)

/* ===========================================================================
  
   Name(s):         VTPMC_TX_WAIT_CONF_TIMECNT
  
   Description:     Time out value for Tx Confirmation wait time Count 
                    value for all the TP channels
                    This list should hold Tx Confirmation wait time count
                    parameter of all the channels in the order of Connections
  
   =========================================================================*/

#define VTPMC_TX_WAIT_CONF_TIMECNT                                   \
        TP_TIME_IN_TASK_TICS(VTP_DIAG_TX_WAIT_CONF_TIME_INMSEC)

#define VTP_DIAG_ID_MASK                0xFFFFFFFFu
#define VTP_DIAG_DEST_MASK              0xFFFFFFFFu
#define VTP_DIAG_PHY_ID_MASK            0xFFFFFFFFu
#define VTP_DIAG_PHY_PF                 VTP_DIAG_PHYS_REQUEST_ID
#define VTP_DIAG_FUNC_PF                VTP_DIAG_FUNC_REQUEST_ID
#define VTP_RESPONSE_ID                 VTP_DIAG_RESPONSE_ID
#define VTP_TX_WAIT_CONF_TIME_INMSEC    VTP_DIAG_TX_WAIT_CONF_TIME_INMSEC
#define VTP_TX_CF_TIME_INMSEC           VTP_DIAG_TX_CF_TIME_INMSEC
#define VTP_WAIT_FC_TIME_INMSEC         VTP_DIAG_WAIT_FC_TIME_INMSEC
#define VTP_WAIT_CF_TIME_INMSEC         VTP_DIAG_WAIT_CF_TIME_INMSEC
#define VTP_MAX_WAIT_CNT                VTP_DIAG_MAX_WAIT_CNT
#define VTP_BLOCKSIZE                   VTP_DIAG_BLOCKSIZE
#define VTP_STMIN                       VTP_DIAG_STMIN
#define VTP_MESSAGE_HANDLE              VTP_DIAG_MESSAGE_HANDLE

#ifdef VTP_UDS_SUPPORT
#define ApplTpRxPhysIndication(datLen)   	(udsdiag_physicalreqind(datLen))
#define ApplTpRxFuncIndication(datLen)   	(udsdiag_functionalreqind(datLen))
#define ApplTpRxErrorIndication(errNo)    	(udsdiag_rxerrorind(errNo))
#define ApplTpTxConfirmation(state)       	(udsdiag_confirmation(state))
#define ApplTpRxGetPhysBuffer(datLen)    	(udsdiag_physicalgetbuffer(datLen))
#define ApplTpRxGetFuncBuffer(datLen)    	(udsdiag_functionalgetbuffer(datLen))
#define ApplTpTxErrorIndication(errNo)   	(udsdiag_txerrorind(errNo))
#define ApplCheckBusyNRCIndication         	udsdiag_CheckBusyNRC
#define ApplRestartTimer()                	(udsdiag_restarttimer())

extern void udsdiag_physicalreqind(udsdiagu16 dataLen);
extern void udsdiag_functionalreqind(udsdiagu16 dataLength);
extern void udsdiag_rxerrorind(udsdiagu8 state);
extern udsdiagu8* udsdiag_physicalgetbuffer(udsdiagu16 dataLength);
extern udsdiagu8* udsdiag_functionalgetbuffer (udsdiagu16 dataLength);
extern void udsdiag_confirmation(udsdiagu8 state);
extern void udsdiag_txerrorind(udsdiagu8 state);
extern void udsdiag_restarttimer(void);
#endif

#endif

/* End of File =============================================================*/


