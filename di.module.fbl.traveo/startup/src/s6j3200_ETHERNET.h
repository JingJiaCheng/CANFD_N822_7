/* S6J3200 SERIES I/O REGISTER FILE V01L01R02
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_ETHERNET_H
#define __S6J3200_ETHERNET_H

#include "s6j3200io_basetypes.h"

/* ETHERNET0 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define ETHERNET0	stcETHERNET0
#else /* __IO_DEFINE */
#define ETHERNET0	(*((volatile stc_ethernet0_t*)0xB8000000))
#endif /* __IO_DEFINE */

/* network_control */
#define ETHERNET0_network_control	(ETHERNET0.unnetwork_control.u32Register)  /*@rg@*/
#define ETHERNET0_NETWORK_CONTROL	(ETHERNET0_network_control)  /*@rg2@*/

typedef union un_ethernet0_network_control{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_network_control_t;

/* network_configuration */
#define ETHERNET0_network_configuration	(ETHERNET0.unnetwork_configuration.u32Register)  /*@rg@*/
#define ETHERNET0_NETWORK_CONFIGURATION	(ETHERNET0_network_configuration)  /*@rg2@*/

typedef union un_ethernet0_network_configuration{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_network_configuration_t;

/* network_status */
#define ETHERNET0_network_status	(ETHERNET0.unnetwork_status.u32Register)  /*@rg@*/
#define ETHERNET0_NETWORK_STATUS	(ETHERNET0_network_status)  /*@rg2@*/

typedef union un_ethernet0_network_status{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_network_status_t;

/* dma_config */
#define ETHERNET0_dma_config	(ETHERNET0.undma_config.u32Register)  /*@rg@*/
#define ETHERNET0_DMA_CONFIG	(ETHERNET0_dma_config)  /*@rg2@*/

typedef union un_ethernet0_dma_config{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_dma_config_t;

/* transmit_status */
#define ETHERNET0_transmit_status	(ETHERNET0.untransmit_status.u32Register)  /*@rg@*/
#define ETHERNET0_TRANSMIT_STATUS	(ETHERNET0_transmit_status)  /*@rg2@*/

typedef union un_ethernet0_transmit_status{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_transmit_status_t;

/* receive_q_ptr */
#define ETHERNET0_receive_q_ptr	(ETHERNET0.unreceive_q_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_RECEIVE_Q_PTR	(ETHERNET0_receive_q_ptr)  /*@rg2@*/
#define ETHERNET0_receive_q_ptr_dma_rx_q_ptr	(ETHERNET0.unreceive_q_ptr.stcField.u30dma_rx_q_ptr)  /*@bf@*/
#define ETHERNET0_RECEIVE_Q_PTR_DMA_RX_Q_PTR	ETHERNET0_receive_q_ptr_dma_rx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_receive_q_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_rx_q_ptr:30;
}stc_ethernet0_receive_q_ptr_field_t;

typedef union un_ethernet0_receive_q_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_receive_q_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_receive_q_ptr_t;

/* transmit_q_ptr */
#define ETHERNET0_transmit_q_ptr	(ETHERNET0.untransmit_q_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_TRANSMIT_Q_PTR	(ETHERNET0_transmit_q_ptr)  /*@rg2@*/
#define ETHERNET0_transmit_q_ptr_dma_tx_q_ptr	(ETHERNET0.untransmit_q_ptr.stcField.u30dma_tx_q_ptr)  /*@bf@*/
#define ETHERNET0_TRANSMIT_Q_PTR_DMA_TX_Q_PTR	ETHERNET0_transmit_q_ptr_dma_tx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_transmit_q_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_tx_q_ptr:30;
}stc_ethernet0_transmit_q_ptr_field_t;

typedef union un_ethernet0_transmit_q_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_transmit_q_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_transmit_q_ptr_t;

/* receive_status */
#define ETHERNET0_receive_status	(ETHERNET0.unreceive_status.u32Register)  /*@rg@*/
#define ETHERNET0_RECEIVE_STATUS	(ETHERNET0_receive_status)  /*@rg2@*/

typedef union un_ethernet0_receive_status{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_receive_status_t;

/* int_status */
#define ETHERNET0_int_status	(ETHERNET0.unint_status.u32Register)  /*@rg@*/
#define ETHERNET0_INT_STATUS	(ETHERNET0_int_status)  /*@rg2@*/

typedef union un_ethernet0_int_status{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_status_t;

/* int_enable */
#define ETHERNET0_int_enable	(ETHERNET0.unint_enable.u32Register)  /*@rg@*/
#define ETHERNET0_INT_ENABLE	(ETHERNET0_int_enable)  /*@rg2@*/

typedef union un_ethernet0_int_enable{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_enable_t;

/* int_disable */
#define ETHERNET0_int_disable	(ETHERNET0.unint_disable.u32Register)  /*@rg@*/
#define ETHERNET0_INT_DISABLE	(ETHERNET0_int_disable)  /*@rg2@*/

typedef union un_ethernet0_int_disable{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_disable_t;

/* int_mask */
#define ETHERNET0_int_mask	(ETHERNET0.unint_mask.u32Register)  /*@rg@*/
#define ETHERNET0_INT_MASK	(ETHERNET0_int_mask)  /*@rg2@*/

typedef union un_ethernet0_int_mask{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_mask_t;

/* phy_management */
#define ETHERNET0_phy_management	(ETHERNET0.unphy_management.u32Register)  /*@rg@*/
#define ETHERNET0_PHY_MANAGEMENT	(ETHERNET0_phy_management)  /*@rg2@*/

typedef union un_ethernet0_phy_management{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_phy_management_t;

/* pause_time */
#define ETHERNET0_pause_time	(ETHERNET0.unpause_time.u32Register)  /*@rg@*/
#define ETHERNET0_PAUSE_TIME	(ETHERNET0_pause_time)  /*@rg2@*/

typedef union un_ethernet0_pause_time{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_pause_time_t;

/* tx_pause_quantum */
#define ETHERNET0_tx_pause_quantum	(ETHERNET0.untx_pause_quantum.u32Register)  /*@rg@*/
#define ETHERNET0_TX_PAUSE_QUANTUM	(ETHERNET0_tx_pause_quantum)  /*@rg2@*/

typedef union un_ethernet0_tx_pause_quantum{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_pause_quantum_t;

/* pbuf_txcutthru */
#define ETHERNET0_pbuf_txcutthru	(ETHERNET0.unpbuf_txcutthru.u32Register)  /*@rg@*/
#define ETHERNET0_PBUF_TXCUTTHRU	(ETHERNET0_pbuf_txcutthru)  /*@rg2@*/

typedef union un_ethernet0_pbuf_txcutthru{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_pbuf_txcutthru_t;

/* pbuf_rxcutthru */
#define ETHERNET0_pbuf_rxcutthru	(ETHERNET0.unpbuf_rxcutthru.u32Register)  /*@rg@*/
#define ETHERNET0_PBUF_RXCUTTHRU	(ETHERNET0_pbuf_rxcutthru)  /*@rg2@*/

typedef union un_ethernet0_pbuf_rxcutthru{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_pbuf_rxcutthru_t;

/* jumbo_max_length */
#define ETHERNET0_jumbo_max_length	(ETHERNET0.unjumbo_max_length.u32Register)  /*@rg@*/
#define ETHERNET0_JUMBO_MAX_LENGTH	(ETHERNET0_jumbo_max_length)  /*@rg2@*/

typedef union un_ethernet0_jumbo_max_length{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_jumbo_max_length_t;

/* axi_max_pipeline */
#define ETHERNET0_axi_max_pipeline	(ETHERNET0.unaxi_max_pipeline.u32Register)  /*@rg@*/
#define ETHERNET0_AXI_MAX_PIPELINE	(ETHERNET0_axi_max_pipeline)  /*@rg2@*/

typedef union un_ethernet0_axi_max_pipeline{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_axi_max_pipeline_t;

/* hash_bottom */
#define ETHERNET0_hash_bottom	(ETHERNET0.unhash_bottom.u32Register)  /*@rg@*/
#define ETHERNET0_HASH_BOTTOM	(ETHERNET0_hash_bottom)  /*@rg2@*/
#define ETHERNET0_hash_bottom_address	ETHERNET0_hash_bottom  /*@bfrg@*/
#define ETHERNET0_HASH_BOTTOM_ADDRESS	ETHERNET0_hash_bottom_address  /*@bf2@*/

typedef union un_ethernet0_hash_bottom{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_hash_bottom_t;

/* hash_top */
#define ETHERNET0_hash_top	(ETHERNET0.unhash_top.u32Register)  /*@rg@*/
#define ETHERNET0_HASH_TOP	(ETHERNET0_hash_top)  /*@rg2@*/
#define ETHERNET0_hash_top_address	ETHERNET0_hash_top  /*@bfrg@*/
#define ETHERNET0_HASH_TOP_ADDRESS	ETHERNET0_hash_top_address  /*@bf2@*/

typedef union un_ethernet0_hash_top{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_hash_top_t;

/* spec_add_bottom_[1-4] */
#define ETHERNET0_spec_add_bottom_1	(ETHERNET0.unspec_add_bottom_1.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_1	(ETHERNET0_spec_add_bottom_1)  /*@rg2@*/
#define ETHERNET0_spec_add_bottom_1_address	ETHERNET0_spec_add_bottom_1  /*@bfrg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_1_ADDRESS	ETHERNET0_spec_add_bottom_1_address  /*@bf2@*/

#define ETHERNET0_spec_add_bottom_2	(ETHERNET0.unspec_add_bottom_2.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_2	(ETHERNET0_spec_add_bottom_2)  /*@rg2@*/
#define ETHERNET0_spec_add_bottom_2_address	ETHERNET0_spec_add_bottom_2  /*@bfrg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_2_ADDRESS	ETHERNET0_spec_add_bottom_2_address  /*@bf2@*/

#define ETHERNET0_spec_add_bottom_3	(ETHERNET0.unspec_add_bottom_3.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_3	(ETHERNET0_spec_add_bottom_3)  /*@rg2@*/
#define ETHERNET0_spec_add_bottom_3_address	ETHERNET0_spec_add_bottom_3  /*@bfrg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_3_ADDRESS	ETHERNET0_spec_add_bottom_3_address  /*@bf2@*/

#define ETHERNET0_spec_add_bottom_4	(ETHERNET0.unspec_add_bottom_4.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_4	(ETHERNET0_spec_add_bottom_4)  /*@rg2@*/
#define ETHERNET0_spec_add_bottom_4_address	ETHERNET0_spec_add_bottom_4  /*@bfrg@*/
#define ETHERNET0_SPEC_ADD_BOTTOM_4_ADDRESS	ETHERNET0_spec_add_bottom_4_address  /*@bf2@*/

typedef union un_ethernet0_spec_add_bottom_n{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_spec_add_bottom_n_t;

/* spec_add_top_[1-4] */
#define ETHERNET0_spec_add_top_1	(ETHERNET0.unspec_add_top_1.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_TOP_1	(ETHERNET0_spec_add_top_1)  /*@rg2@*/

#define ETHERNET0_spec_add_top_2	(ETHERNET0.unspec_add_top_2.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_TOP_2	(ETHERNET0_spec_add_top_2)  /*@rg2@*/

#define ETHERNET0_spec_add_top_3	(ETHERNET0.unspec_add_top_3.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_TOP_3	(ETHERNET0_spec_add_top_3)  /*@rg2@*/

#define ETHERNET0_spec_add_top_4	(ETHERNET0.unspec_add_top_4.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_ADD_TOP_4	(ETHERNET0_spec_add_top_4)  /*@rg2@*/

typedef union un_ethernet0_spec_add_top_n{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_spec_add_top_n_t;

/* spec_type_[1-4] */
#define ETHERNET0_spec_type_1	(ETHERNET0.unspec_type_1.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_TYPE_1	(ETHERNET0_spec_type_1)  /*@rg2@*/

#define ETHERNET0_spec_type_2	(ETHERNET0.unspec_type_2.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_TYPE_2	(ETHERNET0_spec_type_2)  /*@rg2@*/

#define ETHERNET0_spec_type_3	(ETHERNET0.unspec_type_3.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_TYPE_3	(ETHERNET0_spec_type_3)  /*@rg2@*/

#define ETHERNET0_spec_type_4	(ETHERNET0.unspec_type_4.u32Register)  /*@rg@*/
#define ETHERNET0_SPEC_TYPE_4	(ETHERNET0_spec_type_4)  /*@rg2@*/

typedef union un_ethernet0_spec_type_n{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_spec_type_n_t;

/* stretch_ratio */
#define ETHERNET0_stretch_ratio	(ETHERNET0.unstretch_ratio.u32Register)  /*@rg@*/
#define ETHERNET0_STRETCH_RATIO	(ETHERNET0_stretch_ratio)  /*@rg2@*/

typedef union un_ethernet0_stretch_ratio{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_stretch_ratio_t;

/* stacked_vlan */
#define ETHERNET0_stacked_vlan	(ETHERNET0.unstacked_vlan.u32Register)  /*@rg@*/
#define ETHERNET0_STACKED_VLAN	(ETHERNET0_stacked_vlan)  /*@rg2@*/

typedef union un_ethernet0_stacked_vlan{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_stacked_vlan_t;

/* tx_pfc_pause */
#define ETHERNET0_tx_pfc_pause	(ETHERNET0.untx_pfc_pause.u32Register)  /*@rg@*/
#define ETHERNET0_TX_PFC_PAUSE	(ETHERNET0_tx_pfc_pause)  /*@rg2@*/

typedef union un_ethernet0_tx_pfc_pause{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_pfc_pause_t;

/* mask_add1_bottom */
#define ETHERNET0_mask_add1_bottom	(ETHERNET0.unmask_add1_bottom.u32Register)  /*@rg@*/
#define ETHERNET0_MASK_ADD1_BOTTOM	(ETHERNET0_mask_add1_bottom)  /*@rg2@*/
#define ETHERNET0_mask_add1_bottom_address_mask	ETHERNET0_mask_add1_bottom  /*@bfrg@*/
#define ETHERNET0_MASK_ADD1_BOTTOM_ADDRESS_MASK	ETHERNET0_mask_add1_bottom_address_mask  /*@bf2@*/

typedef union un_ethernet0_mask_add1_bottom{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_mask_add1_bottom_t;

/* mask_add1_top */
#define ETHERNET0_mask_add1_top	(ETHERNET0.unmask_add1_top.u32Register)  /*@rg@*/
#define ETHERNET0_MASK_ADD1_TOP	(ETHERNET0_mask_add1_top)  /*@rg2@*/

typedef union un_ethernet0_mask_add1_top{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_mask_add1_top_t;

/* dma_addr_or_mask */
#define ETHERNET0_dma_addr_or_mask	(ETHERNET0.undma_addr_or_mask.u32Register)  /*@rg@*/
#define ETHERNET0_DMA_ADDR_OR_MASK	(ETHERNET0_dma_addr_or_mask)  /*@rg2@*/

typedef union un_ethernet0_dma_addr_or_mask{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_dma_addr_or_mask_t;

/* rx_ptp_unicast */
#define ETHERNET0_rx_ptp_unicast	(ETHERNET0.unrx_ptp_unicast.u32Register)  /*@rg@*/
#define ETHERNET0_RX_PTP_UNICAST	(ETHERNET0_rx_ptp_unicast)  /*@rg2@*/
#define ETHERNET0_rx_ptp_unicast_address	ETHERNET0_rx_ptp_unicast  /*@bfrg@*/
#define ETHERNET0_RX_PTP_UNICAST_ADDRESS	ETHERNET0_rx_ptp_unicast_address  /*@bf2@*/

typedef union un_ethernet0_rx_ptp_unicast{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_ptp_unicast_t;

/* tx_ptp_unicast */
#define ETHERNET0_tx_ptp_unicast	(ETHERNET0.untx_ptp_unicast.u32Register)  /*@rg@*/
#define ETHERNET0_TX_PTP_UNICAST	(ETHERNET0_tx_ptp_unicast)  /*@rg2@*/
#define ETHERNET0_tx_ptp_unicast_address	ETHERNET0_tx_ptp_unicast  /*@bfrg@*/
#define ETHERNET0_TX_PTP_UNICAST_ADDRESS	ETHERNET0_tx_ptp_unicast_address  /*@bf2@*/

typedef union un_ethernet0_tx_ptp_unicast{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_ptp_unicast_t;

/* tsu_nsec_cmp */
#define ETHERNET0_tsu_nsec_cmp	(ETHERNET0.untsu_nsec_cmp.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_NSEC_CMP	(ETHERNET0_tsu_nsec_cmp)  /*@rg2@*/
#define ETHERNET0_tsu_nsec_cmp_comparison_value	(ETHERNET0.untsu_nsec_cmp.stcField.u22comparison_value)  /*@bf@*/
#define ETHERNET0_TSU_NSEC_CMP_COMPARISON_VALUE	ETHERNET0_tsu_nsec_cmp_comparison_value  /*@bf2@*/

typedef struct stc_ethernet0_tsu_nsec_cmp_field{
    uint_io32_t		u22comparison_value:22;
    uint_io32_t		:10;
}stc_ethernet0_tsu_nsec_cmp_field_t;

typedef union un_ethernet0_tsu_nsec_cmp{
    uint_io32_t		u32Register;
    stc_ethernet0_tsu_nsec_cmp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_nsec_cmp_t;

/* tsu_sec_cmp */
#define ETHERNET0_tsu_sec_cmp	(ETHERNET0.untsu_sec_cmp.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_SEC_CMP	(ETHERNET0_tsu_sec_cmp)  /*@rg2@*/
#define ETHERNET0_tsu_sec_cmp_comparison_value	ETHERNET0_tsu_sec_cmp  /*@bfrg@*/
#define ETHERNET0_TSU_SEC_CMP_COMPARISON_VALUE	ETHERNET0_tsu_sec_cmp_comparison_value  /*@bf2@*/

typedef union un_ethernet0_tsu_sec_cmp{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_sec_cmp_t;

/* tsu_msb_sec_cmp */
#define ETHERNET0_tsu_msb_sec_cmp	(ETHERNET0.untsu_msb_sec_cmp.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_MSB_SEC_CMP	(ETHERNET0_tsu_msb_sec_cmp)  /*@rg2@*/

typedef union un_ethernet0_tsu_msb_sec_cmp{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_msb_sec_cmp_t;

/* tsu_ptp_tx_msb_sec */
#define ETHERNET0_tsu_ptp_tx_msb_sec	(ETHERNET0.untsu_ptp_tx_msb_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PTP_TX_MSB_SEC	(ETHERNET0_tsu_ptp_tx_msb_sec)  /*@rg2@*/

typedef union un_ethernet0_tsu_ptp_tx_msb_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_ptp_tx_msb_sec_t;

/* tsu_ptp_rx_msb_sec */
#define ETHERNET0_tsu_ptp_rx_msb_sec	(ETHERNET0.untsu_ptp_rx_msb_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PTP_RX_MSB_SEC	(ETHERNET0_tsu_ptp_rx_msb_sec)  /*@rg2@*/

typedef union un_ethernet0_tsu_ptp_rx_msb_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_ptp_rx_msb_sec_t;

/* tsu_peer_tx_msb_sec */
#define ETHERNET0_tsu_peer_tx_msb_sec	(ETHERNET0.untsu_peer_tx_msb_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PEER_TX_MSB_SEC	(ETHERNET0_tsu_peer_tx_msb_sec)  /*@rg2@*/

typedef union un_ethernet0_tsu_peer_tx_msb_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_peer_tx_msb_sec_t;

/* tsu_peer_rx_msb_sec */
#define ETHERNET0_tsu_peer_rx_msb_sec	(ETHERNET0.untsu_peer_rx_msb_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PEER_RX_MSB_SEC	(ETHERNET0_tsu_peer_rx_msb_sec)  /*@rg2@*/

typedef union un_ethernet0_tsu_peer_rx_msb_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_peer_rx_msb_sec_t;

/* revision_reg */
#define ETHERNET0_revision_reg	(ETHERNET0.unrevision_reg.u32Register)  /*@rg@*/
#define ETHERNET0_REVISION_REG	(ETHERNET0_revision_reg)  /*@rg2@*/

typedef union un_ethernet0_revision_reg{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_revision_reg_t;

/* octets_txed_bottom */
#define ETHERNET0_octets_txed_bottom	(ETHERNET0.unoctets_txed_bottom.u32Register)  /*@rg@*/
#define ETHERNET0_OCTETS_TXED_BOTTOM	(ETHERNET0_octets_txed_bottom)  /*@rg2@*/
#define ETHERNET0_octets_txed_bottom_count	ETHERNET0_octets_txed_bottom  /*@bfrg@*/
#define ETHERNET0_OCTETS_TXED_BOTTOM_COUNT	ETHERNET0_octets_txed_bottom_count  /*@bf2@*/

typedef union un_ethernet0_octets_txed_bottom{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_octets_txed_bottom_t;

/* octets_txed_top */
#define ETHERNET0_octets_txed_top	(ETHERNET0.unoctets_txed_top.u32Register)  /*@rg@*/
#define ETHERNET0_OCTETS_TXED_TOP	(ETHERNET0_octets_txed_top)  /*@rg2@*/

typedef union un_ethernet0_octets_txed_top{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_octets_txed_top_t;

/* frames_txed_ok */
#define ETHERNET0_frames_txed_ok	(ETHERNET0.unframes_txed_ok.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_OK	(ETHERNET0_frames_txed_ok)  /*@rg2@*/
#define ETHERNET0_frames_txed_ok_count	ETHERNET0_frames_txed_ok  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_OK_COUNT	ETHERNET0_frames_txed_ok_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_ok{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_ok_t;

/* broadcast_txed */
#define ETHERNET0_broadcast_txed	(ETHERNET0.unbroadcast_txed.u32Register)  /*@rg@*/
#define ETHERNET0_BROADCAST_TXED	(ETHERNET0_broadcast_txed)  /*@rg2@*/
#define ETHERNET0_broadcast_txed_count	ETHERNET0_broadcast_txed  /*@bfrg@*/
#define ETHERNET0_BROADCAST_TXED_COUNT	ETHERNET0_broadcast_txed_count  /*@bf2@*/

typedef union un_ethernet0_broadcast_txed{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_broadcast_txed_t;

/* multicast_txed */
#define ETHERNET0_multicast_txed	(ETHERNET0.unmulticast_txed.u32Register)  /*@rg@*/
#define ETHERNET0_MULTICAST_TXED	(ETHERNET0_multicast_txed)  /*@rg2@*/
#define ETHERNET0_multicast_txed_count	ETHERNET0_multicast_txed  /*@bfrg@*/
#define ETHERNET0_MULTICAST_TXED_COUNT	ETHERNET0_multicast_txed_count  /*@bf2@*/

typedef union un_ethernet0_multicast_txed{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_multicast_txed_t;

/* pause_frames_txed */
#define ETHERNET0_pause_frames_txed	(ETHERNET0.unpause_frames_txed.u32Register)  /*@rg@*/
#define ETHERNET0_PAUSE_FRAMES_TXED	(ETHERNET0_pause_frames_txed)  /*@rg2@*/

typedef union un_ethernet0_pause_frames_txed{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_pause_frames_txed_t;

/* frames_txed_64 */
#define ETHERNET0_frames_txed_64	(ETHERNET0.unframes_txed_64.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_64	(ETHERNET0_frames_txed_64)  /*@rg2@*/
#define ETHERNET0_frames_txed_64_count	ETHERNET0_frames_txed_64  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_64_COUNT	ETHERNET0_frames_txed_64_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_64{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_64_t;

/* frames_txed_65 */
#define ETHERNET0_frames_txed_65	(ETHERNET0.unframes_txed_65.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_65	(ETHERNET0_frames_txed_65)  /*@rg2@*/
#define ETHERNET0_frames_txed_65_count	ETHERNET0_frames_txed_65  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_65_COUNT	ETHERNET0_frames_txed_65_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_65{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_65_t;

/* frames_txed_128 */
#define ETHERNET0_frames_txed_128	(ETHERNET0.unframes_txed_128.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_128	(ETHERNET0_frames_txed_128)  /*@rg2@*/
#define ETHERNET0_frames_txed_128_count	ETHERNET0_frames_txed_128  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_128_COUNT	ETHERNET0_frames_txed_128_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_128{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_128_t;

/* frames_txed_256 */
#define ETHERNET0_frames_txed_256	(ETHERNET0.unframes_txed_256.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_256	(ETHERNET0_frames_txed_256)  /*@rg2@*/
#define ETHERNET0_frames_txed_256_count	ETHERNET0_frames_txed_256  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_256_COUNT	ETHERNET0_frames_txed_256_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_256{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_256_t;

/* frames_txed_512 */
#define ETHERNET0_frames_txed_512	(ETHERNET0.unframes_txed_512.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_512	(ETHERNET0_frames_txed_512)  /*@rg2@*/
#define ETHERNET0_frames_txed_512_count	ETHERNET0_frames_txed_512  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_512_COUNT	ETHERNET0_frames_txed_512_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_512{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_512_t;

/* frames_txed_1024 */
#define ETHERNET0_frames_txed_1024	(ETHERNET0.unframes_txed_1024.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_1024	(ETHERNET0_frames_txed_1024)  /*@rg2@*/
#define ETHERNET0_frames_txed_1024_count	ETHERNET0_frames_txed_1024  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_1024_COUNT	ETHERNET0_frames_txed_1024_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_1024{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_1024_t;

/* frames_txed_1519 */
#define ETHERNET0_frames_txed_1519	(ETHERNET0.unframes_txed_1519.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_TXED_1519	(ETHERNET0_frames_txed_1519)  /*@rg2@*/
#define ETHERNET0_frames_txed_1519_count	ETHERNET0_frames_txed_1519  /*@bfrg@*/
#define ETHERNET0_FRAMES_TXED_1519_COUNT	ETHERNET0_frames_txed_1519_count  /*@bf2@*/

typedef union un_ethernet0_frames_txed_1519{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_txed_1519_t;

/* tx_underruns */
#define ETHERNET0_tx_underruns	(ETHERNET0.untx_underruns.u32Register)  /*@rg@*/
#define ETHERNET0_TX_UNDERRUNS	(ETHERNET0_tx_underruns)  /*@rg2@*/

typedef union un_ethernet0_tx_underruns{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_underruns_t;

/* single_collisions */
#define ETHERNET0_single_collisions	(ETHERNET0.unsingle_collisions.u32Register)  /*@rg@*/
#define ETHERNET0_SINGLE_COLLISIONS	(ETHERNET0_single_collisions)  /*@rg2@*/
#define ETHERNET0_single_collisions_count	(ETHERNET0.unsingle_collisions.stcField.u18count)  /*@bf@*/
#define ETHERNET0_SINGLE_COLLISIONS_COUNT	ETHERNET0_single_collisions_count  /*@bf2@*/

typedef struct stc_ethernet0_single_collisions_field{
    uint_io32_t		u18count:18;
    uint_io32_t		:14;
}stc_ethernet0_single_collisions_field_t;

typedef union un_ethernet0_single_collisions{
    uint_io32_t		u32Register;
    stc_ethernet0_single_collisions_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_single_collisions_t;

/* multiple_collisions */
#define ETHERNET0_multiple_collisions	(ETHERNET0.unmultiple_collisions.u32Register)  /*@rg@*/
#define ETHERNET0_MULTIPLE_COLLISIONS	(ETHERNET0_multiple_collisions)  /*@rg2@*/
#define ETHERNET0_multiple_collisions_count	(ETHERNET0.unmultiple_collisions.stcField.u18count)  /*@bf@*/
#define ETHERNET0_MULTIPLE_COLLISIONS_COUNT	ETHERNET0_multiple_collisions_count  /*@bf2@*/

typedef struct stc_ethernet0_multiple_collisions_field{
    uint_io32_t		u18count:18;
    uint_io32_t		:14;
}stc_ethernet0_multiple_collisions_field_t;

typedef union un_ethernet0_multiple_collisions{
    uint_io32_t		u32Register;
    stc_ethernet0_multiple_collisions_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_multiple_collisions_t;

/* excessive_collisions */
#define ETHERNET0_excessive_collisions	(ETHERNET0.unexcessive_collisions.u32Register)  /*@rg@*/
#define ETHERNET0_EXCESSIVE_COLLISIONS	(ETHERNET0_excessive_collisions)  /*@rg2@*/

typedef union un_ethernet0_excessive_collisions{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_excessive_collisions_t;

/* late_collisions */
#define ETHERNET0_late_collisions	(ETHERNET0.unlate_collisions.u32Register)  /*@rg@*/
#define ETHERNET0_LATE_COLLISIONS	(ETHERNET0_late_collisions)  /*@rg2@*/

typedef union un_ethernet0_late_collisions{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_late_collisions_t;

/* deferred_frames */
#define ETHERNET0_deferred_frames	(ETHERNET0.undeferred_frames.u32Register)  /*@rg@*/
#define ETHERNET0_DEFERRED_FRAMES	(ETHERNET0_deferred_frames)  /*@rg2@*/
#define ETHERNET0_deferred_frames_count	(ETHERNET0.undeferred_frames.stcField.u18count)  /*@bf@*/
#define ETHERNET0_DEFERRED_FRAMES_COUNT	ETHERNET0_deferred_frames_count  /*@bf2@*/

typedef struct stc_ethernet0_deferred_frames_field{
    uint_io32_t		u18count:18;
    uint_io32_t		:14;
}stc_ethernet0_deferred_frames_field_t;

typedef union un_ethernet0_deferred_frames{
    uint_io32_t		u32Register;
    stc_ethernet0_deferred_frames_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_deferred_frames_t;

/* crs_errors */
#define ETHERNET0_crs_errors	(ETHERNET0.uncrs_errors.u32Register)  /*@rg@*/
#define ETHERNET0_CRS_ERRORS	(ETHERNET0_crs_errors)  /*@rg2@*/

typedef union un_ethernet0_crs_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_crs_errors_t;

/* octets_rxed_bottom */
#define ETHERNET0_octets_rxed_bottom	(ETHERNET0.unoctets_rxed_bottom.u32Register)  /*@rg@*/
#define ETHERNET0_OCTETS_RXED_BOTTOM	(ETHERNET0_octets_rxed_bottom)  /*@rg2@*/
#define ETHERNET0_octets_rxed_bottom_count	ETHERNET0_octets_rxed_bottom  /*@bfrg@*/
#define ETHERNET0_OCTETS_RXED_BOTTOM_COUNT	ETHERNET0_octets_rxed_bottom_count  /*@bf2@*/

typedef union un_ethernet0_octets_rxed_bottom{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_octets_rxed_bottom_t;

/* octets_rxed_top */
#define ETHERNET0_octets_rxed_top	(ETHERNET0.unoctets_rxed_top.u32Register)  /*@rg@*/
#define ETHERNET0_OCTETS_RXED_TOP	(ETHERNET0_octets_rxed_top)  /*@rg2@*/

typedef union un_ethernet0_octets_rxed_top{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_octets_rxed_top_t;

/* frames_rxed_ok */
#define ETHERNET0_frames_rxed_ok	(ETHERNET0.unframes_rxed_ok.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_OK	(ETHERNET0_frames_rxed_ok)  /*@rg2@*/
#define ETHERNET0_frames_rxed_ok_count	ETHERNET0_frames_rxed_ok  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_OK_COUNT	ETHERNET0_frames_rxed_ok_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_ok{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_ok_t;

/* broadcast_rxed */
#define ETHERNET0_broadcast_rxed	(ETHERNET0.unbroadcast_rxed.u32Register)  /*@rg@*/
#define ETHERNET0_BROADCAST_RXED	(ETHERNET0_broadcast_rxed)  /*@rg2@*/
#define ETHERNET0_broadcast_rxed_count	ETHERNET0_broadcast_rxed  /*@bfrg@*/
#define ETHERNET0_BROADCAST_RXED_COUNT	ETHERNET0_broadcast_rxed_count  /*@bf2@*/

typedef union un_ethernet0_broadcast_rxed{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_broadcast_rxed_t;

/* multicast_rxed */
#define ETHERNET0_multicast_rxed	(ETHERNET0.unmulticast_rxed.u32Register)  /*@rg@*/
#define ETHERNET0_MULTICAST_RXED	(ETHERNET0_multicast_rxed)  /*@rg2@*/
#define ETHERNET0_multicast_rxed_count	ETHERNET0_multicast_rxed  /*@bfrg@*/
#define ETHERNET0_MULTICAST_RXED_COUNT	ETHERNET0_multicast_rxed_count  /*@bf2@*/

typedef union un_ethernet0_multicast_rxed{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_multicast_rxed_t;

/* pause_frames_rxed */
#define ETHERNET0_pause_frames_rxed	(ETHERNET0.unpause_frames_rxed.u32Register)  /*@rg@*/
#define ETHERNET0_PAUSE_FRAMES_RXED	(ETHERNET0_pause_frames_rxed)  /*@rg2@*/

typedef union un_ethernet0_pause_frames_rxed{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_pause_frames_rxed_t;

/* frames_rxed_64 */
#define ETHERNET0_frames_rxed_64	(ETHERNET0.unframes_rxed_64.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_64	(ETHERNET0_frames_rxed_64)  /*@rg2@*/
#define ETHERNET0_frames_rxed_64_count	ETHERNET0_frames_rxed_64  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_64_COUNT	ETHERNET0_frames_rxed_64_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_64{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_64_t;

/* frames_rxed_65 */
#define ETHERNET0_frames_rxed_65	(ETHERNET0.unframes_rxed_65.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_65	(ETHERNET0_frames_rxed_65)  /*@rg2@*/
#define ETHERNET0_frames_rxed_65_count	ETHERNET0_frames_rxed_65  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_65_COUNT	ETHERNET0_frames_rxed_65_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_65{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_65_t;

/* frames_rxed_128 */
#define ETHERNET0_frames_rxed_128	(ETHERNET0.unframes_rxed_128.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_128	(ETHERNET0_frames_rxed_128)  /*@rg2@*/
#define ETHERNET0_frames_rxed_128_count	ETHERNET0_frames_rxed_128  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_128_COUNT	ETHERNET0_frames_rxed_128_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_128{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_128_t;

/* frames_rxed_256 */
#define ETHERNET0_frames_rxed_256	(ETHERNET0.unframes_rxed_256.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_256	(ETHERNET0_frames_rxed_256)  /*@rg2@*/
#define ETHERNET0_frames_rxed_256_count	ETHERNET0_frames_rxed_256  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_256_COUNT	ETHERNET0_frames_rxed_256_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_256{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_256_t;

/* frames_rxed_512 */
#define ETHERNET0_frames_rxed_512	(ETHERNET0.unframes_rxed_512.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_512	(ETHERNET0_frames_rxed_512)  /*@rg2@*/
#define ETHERNET0_frames_rxed_512_count	ETHERNET0_frames_rxed_512  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_512_COUNT	ETHERNET0_frames_rxed_512_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_512{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_512_t;

/* frames_rxed_1024 */
#define ETHERNET0_frames_rxed_1024	(ETHERNET0.unframes_rxed_1024.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_1024	(ETHERNET0_frames_rxed_1024)  /*@rg2@*/
#define ETHERNET0_frames_rxed_1024_count	ETHERNET0_frames_rxed_1024  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_1024_COUNT	ETHERNET0_frames_rxed_1024_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_1024{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_1024_t;

/* frames_rxed_1519 */
#define ETHERNET0_frames_rxed_1519	(ETHERNET0.unframes_rxed_1519.u32Register)  /*@rg@*/
#define ETHERNET0_FRAMES_RXED_1519	(ETHERNET0_frames_rxed_1519)  /*@rg2@*/
#define ETHERNET0_frames_rxed_1519_count	ETHERNET0_frames_rxed_1519  /*@bfrg@*/
#define ETHERNET0_FRAMES_RXED_1519_COUNT	ETHERNET0_frames_rxed_1519_count  /*@bf2@*/

typedef union un_ethernet0_frames_rxed_1519{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_frames_rxed_1519_t;

/* undersized_frames */
#define ETHERNET0_undersized_frames	(ETHERNET0.unundersized_frames.u32Register)  /*@rg@*/
#define ETHERNET0_UNDERSIZED_FRAMES	(ETHERNET0_undersized_frames)  /*@rg2@*/

typedef union un_ethernet0_undersized_frames{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_undersized_frames_t;

/* excessive_rx_length */
#define ETHERNET0_excessive_rx_length	(ETHERNET0.unexcessive_rx_length.u32Register)  /*@rg@*/
#define ETHERNET0_EXCESSIVE_RX_LENGTH	(ETHERNET0_excessive_rx_length)  /*@rg2@*/

typedef union un_ethernet0_excessive_rx_length{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_excessive_rx_length_t;

/* rx_jabbers */
#define ETHERNET0_rx_jabbers	(ETHERNET0.unrx_jabbers.u32Register)  /*@rg@*/
#define ETHERNET0_RX_JABBERS	(ETHERNET0_rx_jabbers)  /*@rg2@*/

typedef union un_ethernet0_rx_jabbers{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_jabbers_t;

/* fcs_errors */
#define ETHERNET0_fcs_errors	(ETHERNET0.unfcs_errors.u32Register)  /*@rg@*/
#define ETHERNET0_FCS_ERRORS	(ETHERNET0_fcs_errors)  /*@rg2@*/

typedef union un_ethernet0_fcs_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_fcs_errors_t;

/* rx_length_errors */
#define ETHERNET0_rx_length_errors	(ETHERNET0.unrx_length_errors.u32Register)  /*@rg@*/
#define ETHERNET0_RX_LENGTH_ERRORS	(ETHERNET0_rx_length_errors)  /*@rg2@*/

typedef union un_ethernet0_rx_length_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_length_errors_t;

/* rx_symbol_errors */
#define ETHERNET0_rx_symbol_errors	(ETHERNET0.unrx_symbol_errors.u32Register)  /*@rg@*/
#define ETHERNET0_RX_SYMBOL_ERRORS	(ETHERNET0_rx_symbol_errors)  /*@rg2@*/

typedef union un_ethernet0_rx_symbol_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_symbol_errors_t;

/* alignment_errors */
#define ETHERNET0_alignment_errors	(ETHERNET0.unalignment_errors.u32Register)  /*@rg@*/
#define ETHERNET0_ALIGNMENT_ERRORS	(ETHERNET0_alignment_errors)  /*@rg2@*/

typedef union un_ethernet0_alignment_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_alignment_errors_t;

/* rx_resource_errors */
#define ETHERNET0_rx_resource_errors	(ETHERNET0.unrx_resource_errors.u32Register)  /*@rg@*/
#define ETHERNET0_RX_RESOURCE_ERRORS	(ETHERNET0_rx_resource_errors)  /*@rg2@*/
#define ETHERNET0_rx_resource_errors_count	(ETHERNET0.unrx_resource_errors.stcField.u18count)  /*@bf@*/
#define ETHERNET0_RX_RESOURCE_ERRORS_COUNT	ETHERNET0_rx_resource_errors_count  /*@bf2@*/

typedef struct stc_ethernet0_rx_resource_errors_field{
    uint_io32_t		u18count:18;
    uint_io32_t		:14;
}stc_ethernet0_rx_resource_errors_field_t;

typedef union un_ethernet0_rx_resource_errors{
    uint_io32_t		u32Register;
    stc_ethernet0_rx_resource_errors_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_resource_errors_t;

/* rx_overruns */
#define ETHERNET0_rx_overruns	(ETHERNET0.unrx_overruns.u32Register)  /*@rg@*/
#define ETHERNET0_RX_OVERRUNS	(ETHERNET0_rx_overruns)  /*@rg2@*/

typedef union un_ethernet0_rx_overruns{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_overruns_t;

/* rx_ip_ck_errors */
#define ETHERNET0_rx_ip_ck_errors	(ETHERNET0.unrx_ip_ck_errors.u32Register)  /*@rg@*/
#define ETHERNET0_RX_IP_CK_ERRORS	(ETHERNET0_rx_ip_ck_errors)  /*@rg2@*/

typedef union un_ethernet0_rx_ip_ck_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_ip_ck_errors_t;

/* rx_tcp_ck_errors */
#define ETHERNET0_rx_tcp_ck_errors	(ETHERNET0.unrx_tcp_ck_errors.u32Register)  /*@rg@*/
#define ETHERNET0_RX_TCP_CK_ERRORS	(ETHERNET0_rx_tcp_ck_errors)  /*@rg2@*/

typedef union un_ethernet0_rx_tcp_ck_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_tcp_ck_errors_t;

/* rx_udp_ck_errors */
#define ETHERNET0_rx_udp_ck_errors	(ETHERNET0.unrx_udp_ck_errors.u32Register)  /*@rg@*/
#define ETHERNET0_RX_UDP_CK_ERRORS	(ETHERNET0_rx_udp_ck_errors)  /*@rg2@*/

typedef union un_ethernet0_rx_udp_ck_errors{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_udp_ck_errors_t;

/* auto_flushed_pkts */
#define ETHERNET0_auto_flushed_pkts	(ETHERNET0.unauto_flushed_pkts.u32Register)  /*@rg@*/
#define ETHERNET0_AUTO_FLUSHED_PKTS	(ETHERNET0_auto_flushed_pkts)  /*@rg2@*/

typedef union un_ethernet0_auto_flushed_pkts{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_auto_flushed_pkts_t;

/* tsu_timer_incr_sub_nsec */
#define ETHERNET0_tsu_timer_incr_sub_nsec	(ETHERNET0.untsu_timer_incr_sub_nsec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_TIMER_INCR_SUB_NSEC	(ETHERNET0_tsu_timer_incr_sub_nsec)  /*@rg2@*/

typedef union un_ethernet0_tsu_timer_incr_sub_nsec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_timer_incr_sub_nsec_t;

/* tsu_timer_msb_sec */
#define ETHERNET0_tsu_timer_msb_sec	(ETHERNET0.untsu_timer_msb_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_TIMER_MSB_SEC	(ETHERNET0_tsu_timer_msb_sec)  /*@rg2@*/

typedef union un_ethernet0_tsu_timer_msb_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_timer_msb_sec_t;

/* tsu_timer_sec */
#define ETHERNET0_tsu_timer_sec	(ETHERNET0.untsu_timer_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_TIMER_SEC	(ETHERNET0_tsu_timer_sec)  /*@rg2@*/
#define ETHERNET0_tsu_timer_sec_timer	ETHERNET0_tsu_timer_sec  /*@bfrg@*/
#define ETHERNET0_TSU_TIMER_SEC_TIMER	ETHERNET0_tsu_timer_sec_timer  /*@bf2@*/

typedef union un_ethernet0_tsu_timer_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_timer_sec_t;

/* tsu_timer_nsec */
#define ETHERNET0_tsu_timer_nsec	(ETHERNET0.untsu_timer_nsec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_TIMER_NSEC	(ETHERNET0_tsu_timer_nsec)  /*@rg2@*/
#define ETHERNET0_tsu_timer_nsec_timer	(ETHERNET0.untsu_timer_nsec.stcField.u30timer)  /*@bf@*/
#define ETHERNET0_TSU_TIMER_NSEC_TIMER	ETHERNET0_tsu_timer_nsec_timer  /*@bf2@*/

typedef struct stc_ethernet0_tsu_timer_nsec_field{
    uint_io32_t		u30timer:30;
    uint_io32_t		:2;
}stc_ethernet0_tsu_timer_nsec_field_t;

typedef union un_ethernet0_tsu_timer_nsec{
    uint_io32_t		u32Register;
    stc_ethernet0_tsu_timer_nsec_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_timer_nsec_t;

/* tsu_timer_adjust */
#define ETHERNET0_tsu_timer_adjust	(ETHERNET0.untsu_timer_adjust.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_TIMER_ADJUST	(ETHERNET0_tsu_timer_adjust)  /*@rg2@*/
#define ETHERNET0_tsu_timer_adjust_increment_value	(ETHERNET0.untsu_timer_adjust.stcField.u30increment_value)  /*@bf@*/
#define ETHERNET0_TSU_TIMER_ADJUST_INCREMENT_VALUE	ETHERNET0_tsu_timer_adjust_increment_value  /*@bf2@*/

typedef struct stc_ethernet0_tsu_timer_adjust_field{
    uint_io32_t		u30increment_value:30;
    uint_io32_t		:2;
}stc_ethernet0_tsu_timer_adjust_field_t;

typedef union un_ethernet0_tsu_timer_adjust{
    uint_io32_t		u32Register;
    stc_ethernet0_tsu_timer_adjust_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_timer_adjust_t;

/* tsu_timer_incr */
#define ETHERNET0_tsu_timer_incr	(ETHERNET0.untsu_timer_incr.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_TIMER_INCR	(ETHERNET0_tsu_timer_incr)  /*@rg2@*/

typedef union un_ethernet0_tsu_timer_incr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_timer_incr_t;

/* tsu_ptp_tx_sec */
#define ETHERNET0_tsu_ptp_tx_sec	(ETHERNET0.untsu_ptp_tx_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PTP_TX_SEC	(ETHERNET0_tsu_ptp_tx_sec)  /*@rg2@*/
#define ETHERNET0_tsu_ptp_tx_sec_timer	ETHERNET0_tsu_ptp_tx_sec  /*@bfrg@*/
#define ETHERNET0_TSU_PTP_TX_SEC_TIMER	ETHERNET0_tsu_ptp_tx_sec_timer  /*@bf2@*/

typedef union un_ethernet0_tsu_ptp_tx_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_ptp_tx_sec_t;

/* tsu_ptp_tx_nsec */
#define ETHERNET0_tsu_ptp_tx_nsec	(ETHERNET0.untsu_ptp_tx_nsec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PTP_TX_NSEC	(ETHERNET0_tsu_ptp_tx_nsec)  /*@rg2@*/
#define ETHERNET0_tsu_ptp_tx_nsec_timer	(ETHERNET0.untsu_ptp_tx_nsec.stcField.u30timer)  /*@bf@*/
#define ETHERNET0_TSU_PTP_TX_NSEC_TIMER	ETHERNET0_tsu_ptp_tx_nsec_timer  /*@bf2@*/

typedef struct stc_ethernet0_tsu_ptp_tx_nsec_field{
    uint_io32_t		u30timer:30;
    uint_io32_t		:2;
}stc_ethernet0_tsu_ptp_tx_nsec_field_t;

typedef union un_ethernet0_tsu_ptp_tx_nsec{
    uint_io32_t		u32Register;
    stc_ethernet0_tsu_ptp_tx_nsec_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_ptp_tx_nsec_t;

/* tsu_ptp_rx_sec */
#define ETHERNET0_tsu_ptp_rx_sec	(ETHERNET0.untsu_ptp_rx_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PTP_RX_SEC	(ETHERNET0_tsu_ptp_rx_sec)  /*@rg2@*/
#define ETHERNET0_tsu_ptp_rx_sec_timer	ETHERNET0_tsu_ptp_rx_sec  /*@bfrg@*/
#define ETHERNET0_TSU_PTP_RX_SEC_TIMER	ETHERNET0_tsu_ptp_rx_sec_timer  /*@bf2@*/

typedef union un_ethernet0_tsu_ptp_rx_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_ptp_rx_sec_t;

/* tsu_ptp_rx_nsec */
#define ETHERNET0_tsu_ptp_rx_nsec	(ETHERNET0.untsu_ptp_rx_nsec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PTP_RX_NSEC	(ETHERNET0_tsu_ptp_rx_nsec)  /*@rg2@*/
#define ETHERNET0_tsu_ptp_rx_nsec_timer	(ETHERNET0.untsu_ptp_rx_nsec.stcField.u30timer)  /*@bf@*/
#define ETHERNET0_TSU_PTP_RX_NSEC_TIMER	ETHERNET0_tsu_ptp_rx_nsec_timer  /*@bf2@*/

typedef struct stc_ethernet0_tsu_ptp_rx_nsec_field{
    uint_io32_t		u30timer:30;
    uint_io32_t		:2;
}stc_ethernet0_tsu_ptp_rx_nsec_field_t;

typedef union un_ethernet0_tsu_ptp_rx_nsec{
    uint_io32_t		u32Register;
    stc_ethernet0_tsu_ptp_rx_nsec_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_ptp_rx_nsec_t;

/* tsu_peer_tx_sec */
#define ETHERNET0_tsu_peer_tx_sec	(ETHERNET0.untsu_peer_tx_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PEER_TX_SEC	(ETHERNET0_tsu_peer_tx_sec)  /*@rg2@*/
#define ETHERNET0_tsu_peer_tx_sec_timer	ETHERNET0_tsu_peer_tx_sec  /*@bfrg@*/
#define ETHERNET0_TSU_PEER_TX_SEC_TIMER	ETHERNET0_tsu_peer_tx_sec_timer  /*@bf2@*/

typedef union un_ethernet0_tsu_peer_tx_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_peer_tx_sec_t;

/* tsu_peer_tx_nsec */
#define ETHERNET0_tsu_peer_tx_nsec	(ETHERNET0.untsu_peer_tx_nsec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PEER_TX_NSEC	(ETHERNET0_tsu_peer_tx_nsec)  /*@rg2@*/
#define ETHERNET0_tsu_peer_tx_nsec_timer	(ETHERNET0.untsu_peer_tx_nsec.stcField.u30timer)  /*@bf@*/
#define ETHERNET0_TSU_PEER_TX_NSEC_TIMER	ETHERNET0_tsu_peer_tx_nsec_timer  /*@bf2@*/

typedef struct stc_ethernet0_tsu_peer_tx_nsec_field{
    uint_io32_t		u30timer:30;
    uint_io32_t		:2;
}stc_ethernet0_tsu_peer_tx_nsec_field_t;

typedef union un_ethernet0_tsu_peer_tx_nsec{
    uint_io32_t		u32Register;
    stc_ethernet0_tsu_peer_tx_nsec_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_peer_tx_nsec_t;

/* tsu_peer_rx_sec */
#define ETHERNET0_tsu_peer_rx_sec	(ETHERNET0.untsu_peer_rx_sec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PEER_RX_SEC	(ETHERNET0_tsu_peer_rx_sec)  /*@rg2@*/
#define ETHERNET0_tsu_peer_rx_sec_timer	ETHERNET0_tsu_peer_rx_sec  /*@bfrg@*/
#define ETHERNET0_TSU_PEER_RX_SEC_TIMER	ETHERNET0_tsu_peer_rx_sec_timer  /*@bf2@*/

typedef union un_ethernet0_tsu_peer_rx_sec{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_peer_rx_sec_t;

/* tsu_peer_rx_nsec */
#define ETHERNET0_tsu_peer_rx_nsec	(ETHERNET0.untsu_peer_rx_nsec.u32Register)  /*@rg@*/
#define ETHERNET0_TSU_PEER_RX_NSEC	(ETHERNET0_tsu_peer_rx_nsec)  /*@rg2@*/
#define ETHERNET0_tsu_peer_rx_nsec_timer	(ETHERNET0.untsu_peer_rx_nsec.stcField.u30timer)  /*@bf@*/
#define ETHERNET0_TSU_PEER_RX_NSEC_TIMER	ETHERNET0_tsu_peer_rx_nsec_timer  /*@bf2@*/

typedef struct stc_ethernet0_tsu_peer_rx_nsec_field{
    uint_io32_t		u30timer:30;
    uint_io32_t		:2;
}stc_ethernet0_tsu_peer_rx_nsec_field_t;

typedef union un_ethernet0_tsu_peer_rx_nsec{
    uint_io32_t		u32Register;
    stc_ethernet0_tsu_peer_rx_nsec_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tsu_peer_rx_nsec_t;

/* tx_pause_quantum1 */
#define ETHERNET0_tx_pause_quantum1	(ETHERNET0.untx_pause_quantum1.u32Register)  /*@rg@*/
#define ETHERNET0_TX_PAUSE_QUANTUM1	(ETHERNET0_tx_pause_quantum1)  /*@rg2@*/

typedef union un_ethernet0_tx_pause_quantum1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_pause_quantum1_t;

/* tx_pause_quantum2 */
#define ETHERNET0_tx_pause_quantum2	(ETHERNET0.untx_pause_quantum2.u32Register)  /*@rg@*/
#define ETHERNET0_TX_PAUSE_QUANTUM2	(ETHERNET0_tx_pause_quantum2)  /*@rg2@*/

typedef union un_ethernet0_tx_pause_quantum2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_pause_quantum2_t;

/* tx_pause_quantum3 */
#define ETHERNET0_tx_pause_quantum3	(ETHERNET0.untx_pause_quantum3.u32Register)  /*@rg@*/
#define ETHERNET0_TX_PAUSE_QUANTUM3	(ETHERNET0_tx_pause_quantum3)  /*@rg2@*/

typedef union un_ethernet0_tx_pause_quantum3{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_pause_quantum3_t;

/* rx_lpi */
#define ETHERNET0_rx_lpi	(ETHERNET0.unrx_lpi.u32Register)  /*@rg@*/
#define ETHERNET0_RX_LPI	(ETHERNET0_rx_lpi)  /*@rg2@*/

typedef union un_ethernet0_rx_lpi{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_lpi_t;

/* rx_lpi_time */
#define ETHERNET0_rx_lpi_time	(ETHERNET0.unrx_lpi_time.u32Register)  /*@rg@*/
#define ETHERNET0_RX_LPI_TIME	(ETHERNET0_rx_lpi_time)  /*@rg2@*/
#define ETHERNET0_rx_lpi_time_lpi_time	(ETHERNET0.unrx_lpi_time.stcField.u24lpi_time)  /*@bf@*/
#define ETHERNET0_RX_LPI_TIME_LPI_TIME	ETHERNET0_rx_lpi_time_lpi_time  /*@bf2@*/

typedef struct stc_ethernet0_rx_lpi_time_field{
    uint_io32_t		u24lpi_time:24;
    uint_io32_t		:8;
}stc_ethernet0_rx_lpi_time_field_t;

typedef union un_ethernet0_rx_lpi_time{
    uint_io32_t		u32Register;
    stc_ethernet0_rx_lpi_time_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_lpi_time_t;

/* tx_lpi */
#define ETHERNET0_tx_lpi	(ETHERNET0.untx_lpi.u32Register)  /*@rg@*/
#define ETHERNET0_TX_LPI	(ETHERNET0_tx_lpi)  /*@rg2@*/

typedef union un_ethernet0_tx_lpi{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_lpi_t;

/* tx_lpi_time */
#define ETHERNET0_tx_lpi_time	(ETHERNET0.untx_lpi_time.u32Register)  /*@rg@*/
#define ETHERNET0_TX_LPI_TIME	(ETHERNET0_tx_lpi_time)  /*@rg2@*/
#define ETHERNET0_tx_lpi_time_lpi_time	(ETHERNET0.untx_lpi_time.stcField.u24lpi_time)  /*@bf@*/
#define ETHERNET0_TX_LPI_TIME_LPI_TIME	ETHERNET0_tx_lpi_time_lpi_time  /*@bf2@*/

typedef struct stc_ethernet0_tx_lpi_time_field{
    uint_io32_t		u24lpi_time:24;
    uint_io32_t		:8;
}stc_ethernet0_tx_lpi_time_field_t;

typedef union un_ethernet0_tx_lpi_time{
    uint_io32_t		u32Register;
    stc_ethernet0_tx_lpi_time_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_lpi_time_t;

/* int_status_q[1-3] */
#define ETHERNET0_int_status_q1	(ETHERNET0.unint_status_q1.u32Register)  /*@rg@*/
#define ETHERNET0_INT_STATUS_Q1	(ETHERNET0_int_status_q1)  /*@rg2@*/

#define ETHERNET0_int_status_q2	(ETHERNET0.unint_status_q2.u32Register)  /*@rg@*/
#define ETHERNET0_INT_STATUS_Q2	(ETHERNET0_int_status_q2)  /*@rg2@*/

#define ETHERNET0_int_status_q3	(ETHERNET0.unint_status_q3.u32Register)  /*@rg@*/
#define ETHERNET0_INT_STATUS_Q3	(ETHERNET0_int_status_q3)  /*@rg2@*/

typedef union un_ethernet0_int_status_qn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_status_qn_t;

/* transmit_q1_ptr */
#define ETHERNET0_transmit_q1_ptr	(ETHERNET0.untransmit_q1_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_TRANSMIT_Q1_PTR	(ETHERNET0_transmit_q1_ptr)  /*@rg2@*/
#define ETHERNET0_transmit_q1_ptr_dma_tx_q_ptr	(ETHERNET0.untransmit_q1_ptr.stcField.u30dma_tx_q_ptr)  /*@bf@*/
#define ETHERNET0_TRANSMIT_Q1_PTR_DMA_TX_Q_PTR	ETHERNET0_transmit_q1_ptr_dma_tx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_transmit_q1_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_tx_q_ptr:30;
}stc_ethernet0_transmit_q1_ptr_field_t;

typedef union un_ethernet0_transmit_q1_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_transmit_q1_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_transmit_q1_ptr_t;

/* transmit_q2_ptr */
#define ETHERNET0_transmit_q2_ptr	(ETHERNET0.untransmit_q2_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_TRANSMIT_Q2_PTR	(ETHERNET0_transmit_q2_ptr)  /*@rg2@*/
#define ETHERNET0_transmit_q2_ptr_dma_tx_q_ptr	(ETHERNET0.untransmit_q2_ptr.stcField.u30dma_tx_q_ptr)  /*@bf@*/
#define ETHERNET0_TRANSMIT_Q2_PTR_DMA_TX_Q_PTR	ETHERNET0_transmit_q2_ptr_dma_tx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_transmit_q2_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_tx_q_ptr:30;
}stc_ethernet0_transmit_q2_ptr_field_t;

typedef union un_ethernet0_transmit_q2_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_transmit_q2_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_transmit_q2_ptr_t;

/* transmit_q3_ptr */
#define ETHERNET0_transmit_q3_ptr	(ETHERNET0.untransmit_q3_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_TRANSMIT_Q3_PTR	(ETHERNET0_transmit_q3_ptr)  /*@rg2@*/
#define ETHERNET0_transmit_q3_ptr_dma_tx_q_ptr	(ETHERNET0.untransmit_q3_ptr.stcField.u30dma_tx_q_ptr)  /*@bf@*/
#define ETHERNET0_TRANSMIT_Q3_PTR_DMA_TX_Q_PTR	ETHERNET0_transmit_q3_ptr_dma_tx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_transmit_q3_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_tx_q_ptr:30;
}stc_ethernet0_transmit_q3_ptr_field_t;

typedef union un_ethernet0_transmit_q3_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_transmit_q3_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_transmit_q3_ptr_t;

/* receive_q1_ptr */
#define ETHERNET0_receive_q1_ptr	(ETHERNET0.unreceive_q1_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_RECEIVE_Q1_PTR	(ETHERNET0_receive_q1_ptr)  /*@rg2@*/
#define ETHERNET0_receive_q1_ptr_dma_rx_q_ptr	(ETHERNET0.unreceive_q1_ptr.stcField.u30dma_rx_q_ptr)  /*@bf@*/
#define ETHERNET0_RECEIVE_Q1_PTR_DMA_RX_Q_PTR	ETHERNET0_receive_q1_ptr_dma_rx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_receive_q1_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_rx_q_ptr:30;
}stc_ethernet0_receive_q1_ptr_field_t;

typedef union un_ethernet0_receive_q1_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_receive_q1_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_receive_q1_ptr_t;

/* receive_q2_ptr */
#define ETHERNET0_receive_q2_ptr	(ETHERNET0.unreceive_q2_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_RECEIVE_Q2_PTR	(ETHERNET0_receive_q2_ptr)  /*@rg2@*/
#define ETHERNET0_receive_q2_ptr_dma_rx_q_ptr	(ETHERNET0.unreceive_q2_ptr.stcField.u30dma_rx_q_ptr)  /*@bf@*/
#define ETHERNET0_RECEIVE_Q2_PTR_DMA_RX_Q_PTR	ETHERNET0_receive_q2_ptr_dma_rx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_receive_q2_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_rx_q_ptr:30;
}stc_ethernet0_receive_q2_ptr_field_t;

typedef union un_ethernet0_receive_q2_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_receive_q2_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_receive_q2_ptr_t;

/* receive_q3_ptr */
#define ETHERNET0_receive_q3_ptr	(ETHERNET0.unreceive_q3_ptr.u32Register)  /*@rg@*/
#define ETHERNET0_RECEIVE_Q3_PTR	(ETHERNET0_receive_q3_ptr)  /*@rg2@*/
#define ETHERNET0_receive_q3_ptr_dma_rx_q_ptr	(ETHERNET0.unreceive_q3_ptr.stcField.u30dma_rx_q_ptr)  /*@bf@*/
#define ETHERNET0_RECEIVE_Q3_PTR_DMA_RX_Q_PTR	ETHERNET0_receive_q3_ptr_dma_rx_q_ptr  /*@bf2@*/

typedef struct stc_ethernet0_receive_q3_ptr_field{
    uint_io32_t		:2;
    uint_io32_t		u30dma_rx_q_ptr:30;
}stc_ethernet0_receive_q3_ptr_field_t;

typedef union un_ethernet0_receive_q3_ptr{
    uint_io32_t		u32Register;
    stc_ethernet0_receive_q3_ptr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_receive_q3_ptr_t;

/* rxbuf_size_q[1-3] */
#define ETHERNET0_rxbuf_size_q1	(ETHERNET0.unrxbuf_size_q1.u32Register)  /*@rg@*/
#define ETHERNET0_RXBUF_SIZE_Q1	(ETHERNET0_rxbuf_size_q1)  /*@rg2@*/

#define ETHERNET0_rxbuf_size_q2	(ETHERNET0.unrxbuf_size_q2.u32Register)  /*@rg@*/
#define ETHERNET0_RXBUF_SIZE_Q2	(ETHERNET0_rxbuf_size_q2)  /*@rg2@*/

#define ETHERNET0_rxbuf_size_q3	(ETHERNET0.unrxbuf_size_q3.u32Register)  /*@rg@*/
#define ETHERNET0_RXBUF_SIZE_Q3	(ETHERNET0_rxbuf_size_q3)  /*@rg2@*/

typedef union un_ethernet0_rxbuf_size_qn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rxbuf_size_qn_t;

/* cbs_control */
#define ETHERNET0_cbs_control	(ETHERNET0.uncbs_control.u32Register)  /*@rg@*/
#define ETHERNET0_CBS_CONTROL	(ETHERNET0_cbs_control)  /*@rg2@*/

typedef union un_ethernet0_cbs_control{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_cbs_control_t;

/* cbs_idleslope_q_a */
#define ETHERNET0_cbs_idleslope_q_a	(ETHERNET0.uncbs_idleslope_q_a.u32Register)  /*@rg@*/
#define ETHERNET0_CBS_IDLESLOPE_Q_A	(ETHERNET0_cbs_idleslope_q_a)  /*@rg2@*/
#define ETHERNET0_cbs_idleslope_q_a_idleslope_a	ETHERNET0_cbs_idleslope_q_a  /*@bfrg@*/
#define ETHERNET0_CBS_IDLESLOPE_Q_A_IDLESLOPE_A	ETHERNET0_cbs_idleslope_q_a_idleslope_a  /*@bf2@*/

typedef union un_ethernet0_cbs_idleslope_q_a{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_cbs_idleslope_q_a_t;

/* cbs_idleslope_q_b */
#define ETHERNET0_cbs_idleslope_q_b	(ETHERNET0.uncbs_idleslope_q_b.u32Register)  /*@rg@*/
#define ETHERNET0_CBS_IDLESLOPE_Q_B	(ETHERNET0_cbs_idleslope_q_b)  /*@rg2@*/
#define ETHERNET0_cbs_idleslope_q_b_idleslope_b	ETHERNET0_cbs_idleslope_q_b  /*@bfrg@*/
#define ETHERNET0_CBS_IDLESLOPE_Q_B_IDLESLOPE_B	ETHERNET0_cbs_idleslope_q_b_idleslope_b  /*@bf2@*/

typedef union un_ethernet0_cbs_idleslope_q_b{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_cbs_idleslope_q_b_t;

/* msb_buff_q_base_addr_reg */
#define ETHERNET0_msb_buff_q_base_addr_reg	(ETHERNET0.unmsb_buff_q_base_addr_reg.u32Register)  /*@rg@*/
#define ETHERNET0_MSB_BUFF_Q_BASE_ADDR_REG	(ETHERNET0_msb_buff_q_base_addr_reg)  /*@rg2@*/
#define ETHERNET0_msb_buff_q_base_addr_reg_msb_buff_q_base_addr	ETHERNET0_msb_buff_q_base_addr_reg  /*@bfrg@*/
#define ETHERNET0_MSB_BUFF_Q_BASE_ADDR_REG_MSB_BUFF_Q_BASE_ADDR	ETHERNET0_msb_buff_q_base_addr_reg_msb_buff_q_base_addr  /*@bf2@*/

typedef union un_ethernet0_msb_buff_q_base_addr_reg{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_msb_buff_q_base_addr_reg_t;

/* tx_bd_control */
#define ETHERNET0_tx_bd_control	(ETHERNET0.untx_bd_control.u32Register)  /*@rg@*/
#define ETHERNET0_TX_BD_CONTROL	(ETHERNET0_tx_bd_control)  /*@rg2@*/

typedef union un_ethernet0_tx_bd_control{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_tx_bd_control_t;

/* rx_bd_control */
#define ETHERNET0_rx_bd_control	(ETHERNET0.unrx_bd_control.u32Register)  /*@rg@*/
#define ETHERNET0_RX_BD_CONTROL	(ETHERNET0_rx_bd_control)  /*@rg2@*/

typedef union un_ethernet0_rx_bd_control{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_rx_bd_control_t;

/* screening_type_1_register_[0-15] */
#define ETHERNET0_screening_type_1_register_0	(ETHERNET0.unscreening_type_1_register_0.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_0	(ETHERNET0_screening_type_1_register_0)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_1	(ETHERNET0.unscreening_type_1_register_1.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_1	(ETHERNET0_screening_type_1_register_1)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_2	(ETHERNET0.unscreening_type_1_register_2.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_2	(ETHERNET0_screening_type_1_register_2)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_3	(ETHERNET0.unscreening_type_1_register_3.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_3	(ETHERNET0_screening_type_1_register_3)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_4	(ETHERNET0.unscreening_type_1_register_4.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_4	(ETHERNET0_screening_type_1_register_4)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_5	(ETHERNET0.unscreening_type_1_register_5.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_5	(ETHERNET0_screening_type_1_register_5)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_6	(ETHERNET0.unscreening_type_1_register_6.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_6	(ETHERNET0_screening_type_1_register_6)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_7	(ETHERNET0.unscreening_type_1_register_7.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_7	(ETHERNET0_screening_type_1_register_7)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_8	(ETHERNET0.unscreening_type_1_register_8.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_8	(ETHERNET0_screening_type_1_register_8)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_9	(ETHERNET0.unscreening_type_1_register_9.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_9	(ETHERNET0_screening_type_1_register_9)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_10	(ETHERNET0.unscreening_type_1_register_10.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_10	(ETHERNET0_screening_type_1_register_10)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_11	(ETHERNET0.unscreening_type_1_register_11.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_11	(ETHERNET0_screening_type_1_register_11)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_12	(ETHERNET0.unscreening_type_1_register_12.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_12	(ETHERNET0_screening_type_1_register_12)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_13	(ETHERNET0.unscreening_type_1_register_13.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_13	(ETHERNET0_screening_type_1_register_13)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_14	(ETHERNET0.unscreening_type_1_register_14.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_14	(ETHERNET0_screening_type_1_register_14)  /*@rg2@*/

#define ETHERNET0_screening_type_1_register_15	(ETHERNET0.unscreening_type_1_register_15.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_1_REGISTER_15	(ETHERNET0_screening_type_1_register_15)  /*@rg2@*/

typedef union un_ethernet0_screening_type_1_register_n{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_screening_type_1_register_n_t;

/* screening_type_2_register_[0-15] */
#define ETHERNET0_screening_type_2_register_0	(ETHERNET0.unscreening_type_2_register_0.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_0	(ETHERNET0_screening_type_2_register_0)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_1	(ETHERNET0.unscreening_type_2_register_1.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_1	(ETHERNET0_screening_type_2_register_1)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_2	(ETHERNET0.unscreening_type_2_register_2.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_2	(ETHERNET0_screening_type_2_register_2)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_3	(ETHERNET0.unscreening_type_2_register_3.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_3	(ETHERNET0_screening_type_2_register_3)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_4	(ETHERNET0.unscreening_type_2_register_4.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_4	(ETHERNET0_screening_type_2_register_4)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_5	(ETHERNET0.unscreening_type_2_register_5.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_5	(ETHERNET0_screening_type_2_register_5)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_6	(ETHERNET0.unscreening_type_2_register_6.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_6	(ETHERNET0_screening_type_2_register_6)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_7	(ETHERNET0.unscreening_type_2_register_7.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_7	(ETHERNET0_screening_type_2_register_7)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_8	(ETHERNET0.unscreening_type_2_register_8.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_8	(ETHERNET0_screening_type_2_register_8)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_9	(ETHERNET0.unscreening_type_2_register_9.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_9	(ETHERNET0_screening_type_2_register_9)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_10	(ETHERNET0.unscreening_type_2_register_10.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_10	(ETHERNET0_screening_type_2_register_10)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_11	(ETHERNET0.unscreening_type_2_register_11.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_11	(ETHERNET0_screening_type_2_register_11)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_12	(ETHERNET0.unscreening_type_2_register_12.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_12	(ETHERNET0_screening_type_2_register_12)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_13	(ETHERNET0.unscreening_type_2_register_13.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_13	(ETHERNET0_screening_type_2_register_13)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_14	(ETHERNET0.unscreening_type_2_register_14.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_14	(ETHERNET0_screening_type_2_register_14)  /*@rg2@*/

#define ETHERNET0_screening_type_2_register_15	(ETHERNET0.unscreening_type_2_register_15.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_REGISTER_15	(ETHERNET0_screening_type_2_register_15)  /*@rg2@*/

typedef union un_ethernet0_screening_type_2_register_n{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_screening_type_2_register_n_t;

/* int_enable_q[1-3] */
#define ETHERNET0_int_enable_q1	(ETHERNET0.unint_enable_q1.u32Register)  /*@rg@*/
#define ETHERNET0_INT_ENABLE_Q1	(ETHERNET0_int_enable_q1)  /*@rg2@*/

#define ETHERNET0_int_enable_q2	(ETHERNET0.unint_enable_q2.u32Register)  /*@rg@*/
#define ETHERNET0_INT_ENABLE_Q2	(ETHERNET0_int_enable_q2)  /*@rg2@*/

#define ETHERNET0_int_enable_q3	(ETHERNET0.unint_enable_q3.u32Register)  /*@rg@*/
#define ETHERNET0_INT_ENABLE_Q3	(ETHERNET0_int_enable_q3)  /*@rg2@*/

typedef union un_ethernet0_int_enable_qn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_enable_qn_t;

/* int_disable_q[1-3] */
#define ETHERNET0_int_disable_q1	(ETHERNET0.unint_disable_q1.u32Register)  /*@rg@*/
#define ETHERNET0_INT_DISABLE_Q1	(ETHERNET0_int_disable_q1)  /*@rg2@*/

#define ETHERNET0_int_disable_q2	(ETHERNET0.unint_disable_q2.u32Register)  /*@rg@*/
#define ETHERNET0_INT_DISABLE_Q2	(ETHERNET0_int_disable_q2)  /*@rg2@*/

#define ETHERNET0_int_disable_q3	(ETHERNET0.unint_disable_q3.u32Register)  /*@rg@*/
#define ETHERNET0_INT_DISABLE_Q3	(ETHERNET0_int_disable_q3)  /*@rg2@*/

typedef union un_ethernet0_int_disable_qn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_disable_qn_t;

/* int_mask_q[1-3] */
#define ETHERNET0_int_mask_q1	(ETHERNET0.unint_mask_q1.u32Register)  /*@rg@*/
#define ETHERNET0_INT_MASK_Q1	(ETHERNET0_int_mask_q1)  /*@rg2@*/

#define ETHERNET0_int_mask_q2	(ETHERNET0.unint_mask_q2.u32Register)  /*@rg@*/
#define ETHERNET0_INT_MASK_Q2	(ETHERNET0_int_mask_q2)  /*@rg2@*/

#define ETHERNET0_int_mask_q3	(ETHERNET0.unint_mask_q3.u32Register)  /*@rg@*/
#define ETHERNET0_INT_MASK_Q3	(ETHERNET0_int_mask_q3)  /*@rg2@*/

typedef union un_ethernet0_int_mask_qn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_int_mask_qn_t;

/* screening_type_2_ethertype_reg_[0-7] */
#define ETHERNET0_screening_type_2_ethertype_reg_0	(ETHERNET0.unscreening_type_2_ethertype_reg_0.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_0	(ETHERNET0_screening_type_2_ethertype_reg_0)  /*@rg2@*/

#define ETHERNET0_screening_type_2_ethertype_reg_1	(ETHERNET0.unscreening_type_2_ethertype_reg_1.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_1	(ETHERNET0_screening_type_2_ethertype_reg_1)  /*@rg2@*/

#define ETHERNET0_screening_type_2_ethertype_reg_2	(ETHERNET0.unscreening_type_2_ethertype_reg_2.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_2	(ETHERNET0_screening_type_2_ethertype_reg_2)  /*@rg2@*/

#define ETHERNET0_screening_type_2_ethertype_reg_3	(ETHERNET0.unscreening_type_2_ethertype_reg_3.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_3	(ETHERNET0_screening_type_2_ethertype_reg_3)  /*@rg2@*/

#define ETHERNET0_screening_type_2_ethertype_reg_4	(ETHERNET0.unscreening_type_2_ethertype_reg_4.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_4	(ETHERNET0_screening_type_2_ethertype_reg_4)  /*@rg2@*/

#define ETHERNET0_screening_type_2_ethertype_reg_5	(ETHERNET0.unscreening_type_2_ethertype_reg_5.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_5	(ETHERNET0_screening_type_2_ethertype_reg_5)  /*@rg2@*/

#define ETHERNET0_screening_type_2_ethertype_reg_6	(ETHERNET0.unscreening_type_2_ethertype_reg_6.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_6	(ETHERNET0_screening_type_2_ethertype_reg_6)  /*@rg2@*/

#define ETHERNET0_screening_type_2_ethertype_reg_7	(ETHERNET0.unscreening_type_2_ethertype_reg_7.u32Register)  /*@rg@*/
#define ETHERNET0_SCREENING_TYPE_2_ETHERTYPE_REG_7	(ETHERNET0_screening_type_2_ethertype_reg_7)  /*@rg2@*/

typedef union un_ethernet0_screening_type_2_ethertype_reg_n{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_screening_type_2_ethertype_reg_n_t;

/* type2_compare_0_word_0 */
#define ETHERNET0_type2_compare_0_word_0	(ETHERNET0.untype2_compare_0_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_0_WORD_0	(ETHERNET0_type2_compare_0_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_0_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_0_word_0_t;

/* type2_compare_0_word_1 */
#define ETHERNET0_type2_compare_0_word_1	(ETHERNET0.untype2_compare_0_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_0_WORD_1	(ETHERNET0_type2_compare_0_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_0_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_0_word_1_t;

/* type2_compare_1_word_0 */
#define ETHERNET0_type2_compare_1_word_0	(ETHERNET0.untype2_compare_1_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_1_WORD_0	(ETHERNET0_type2_compare_1_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_1_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_1_word_0_t;

/* type2_compare_1_word_1 */
#define ETHERNET0_type2_compare_1_word_1	(ETHERNET0.untype2_compare_1_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_1_WORD_1	(ETHERNET0_type2_compare_1_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_1_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_1_word_1_t;

/* type2_compare_2_word_0 */
#define ETHERNET0_type2_compare_2_word_0	(ETHERNET0.untype2_compare_2_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_2_WORD_0	(ETHERNET0_type2_compare_2_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_2_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_2_word_0_t;

/* type2_compare_2_word_1 */
#define ETHERNET0_type2_compare_2_word_1	(ETHERNET0.untype2_compare_2_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_2_WORD_1	(ETHERNET0_type2_compare_2_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_2_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_2_word_1_t;

/* type2_compare_3_word_0 */
#define ETHERNET0_type2_compare_3_word_0	(ETHERNET0.untype2_compare_3_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_3_WORD_0	(ETHERNET0_type2_compare_3_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_3_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_3_word_0_t;

/* type2_compare_3_word_1 */
#define ETHERNET0_type2_compare_3_word_1	(ETHERNET0.untype2_compare_3_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_3_WORD_1	(ETHERNET0_type2_compare_3_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_3_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_3_word_1_t;

/* type2_compare_4_word_0 */
#define ETHERNET0_type2_compare_4_word_0	(ETHERNET0.untype2_compare_4_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_4_WORD_0	(ETHERNET0_type2_compare_4_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_4_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_4_word_0_t;

/* type2_compare_4_word_1 */
#define ETHERNET0_type2_compare_4_word_1	(ETHERNET0.untype2_compare_4_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_4_WORD_1	(ETHERNET0_type2_compare_4_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_4_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_4_word_1_t;

/* type2_compare_5_word_0 */
#define ETHERNET0_type2_compare_5_word_0	(ETHERNET0.untype2_compare_5_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_5_WORD_0	(ETHERNET0_type2_compare_5_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_5_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_5_word_0_t;

/* type2_compare_5_word_1 */
#define ETHERNET0_type2_compare_5_word_1	(ETHERNET0.untype2_compare_5_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_5_WORD_1	(ETHERNET0_type2_compare_5_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_5_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_5_word_1_t;

/* type2_compare_6_word_0 */
#define ETHERNET0_type2_compare_6_word_0	(ETHERNET0.untype2_compare_6_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_6_WORD_0	(ETHERNET0_type2_compare_6_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_6_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_6_word_0_t;

/* type2_compare_6_word_1 */
#define ETHERNET0_type2_compare_6_word_1	(ETHERNET0.untype2_compare_6_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_6_WORD_1	(ETHERNET0_type2_compare_6_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_6_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_6_word_1_t;

/* type2_compare_7_word_0 */
#define ETHERNET0_type2_compare_7_word_0	(ETHERNET0.untype2_compare_7_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_7_WORD_0	(ETHERNET0_type2_compare_7_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_7_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_7_word_0_t;

/* type2_compare_7_word_1 */
#define ETHERNET0_type2_compare_7_word_1	(ETHERNET0.untype2_compare_7_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_7_WORD_1	(ETHERNET0_type2_compare_7_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_7_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_7_word_1_t;

/* type2_compare_8_word_0 */
#define ETHERNET0_type2_compare_8_word_0	(ETHERNET0.untype2_compare_8_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_8_WORD_0	(ETHERNET0_type2_compare_8_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_8_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_8_word_0_t;

/* type2_compare_8_word_1 */
#define ETHERNET0_type2_compare_8_word_1	(ETHERNET0.untype2_compare_8_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_8_WORD_1	(ETHERNET0_type2_compare_8_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_8_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_8_word_1_t;

/* type2_compare_9_word_0 */
#define ETHERNET0_type2_compare_9_word_0	(ETHERNET0.untype2_compare_9_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_9_WORD_0	(ETHERNET0_type2_compare_9_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_9_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_9_word_0_t;

/* type2_compare_9_word_1 */
#define ETHERNET0_type2_compare_9_word_1	(ETHERNET0.untype2_compare_9_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_9_WORD_1	(ETHERNET0_type2_compare_9_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_9_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_9_word_1_t;

/* type2_compare_10_word_0 */
#define ETHERNET0_type2_compare_10_word_0	(ETHERNET0.untype2_compare_10_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_10_WORD_0	(ETHERNET0_type2_compare_10_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_10_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_10_word_0_t;

/* type2_compare_10_word_1 */
#define ETHERNET0_type2_compare_10_word_1	(ETHERNET0.untype2_compare_10_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_10_WORD_1	(ETHERNET0_type2_compare_10_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_10_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_10_word_1_t;

/* type2_compare_11_word_0 */
#define ETHERNET0_type2_compare_11_word_0	(ETHERNET0.untype2_compare_11_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_11_WORD_0	(ETHERNET0_type2_compare_11_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_11_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_11_word_0_t;

/* type2_compare_11_word_1 */
#define ETHERNET0_type2_compare_11_word_1	(ETHERNET0.untype2_compare_11_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_11_WORD_1	(ETHERNET0_type2_compare_11_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_11_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_11_word_1_t;

/* type2_compare_12_word_0 */
#define ETHERNET0_type2_compare_12_word_0	(ETHERNET0.untype2_compare_12_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_12_WORD_0	(ETHERNET0_type2_compare_12_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_12_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_12_word_0_t;

/* type2_compare_12_word_1 */
#define ETHERNET0_type2_compare_12_word_1	(ETHERNET0.untype2_compare_12_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_12_WORD_1	(ETHERNET0_type2_compare_12_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_12_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_12_word_1_t;

/* type2_compare_13_word_0 */
#define ETHERNET0_type2_compare_13_word_0	(ETHERNET0.untype2_compare_13_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_13_WORD_0	(ETHERNET0_type2_compare_13_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_13_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_13_word_0_t;

/* type2_compare_13_word_1 */
#define ETHERNET0_type2_compare_13_word_1	(ETHERNET0.untype2_compare_13_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_13_WORD_1	(ETHERNET0_type2_compare_13_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_13_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_13_word_1_t;

/* type2_compare_14_word_0 */
#define ETHERNET0_type2_compare_14_word_0	(ETHERNET0.untype2_compare_14_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_14_WORD_0	(ETHERNET0_type2_compare_14_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_14_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_14_word_0_t;

/* type2_compare_14_word_1 */
#define ETHERNET0_type2_compare_14_word_1	(ETHERNET0.untype2_compare_14_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_14_WORD_1	(ETHERNET0_type2_compare_14_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_14_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_14_word_1_t;

/* type2_compare_15_word_0 */
#define ETHERNET0_type2_compare_15_word_0	(ETHERNET0.untype2_compare_15_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_15_WORD_0	(ETHERNET0_type2_compare_15_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_15_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_15_word_0_t;

/* type2_compare_15_word_1 */
#define ETHERNET0_type2_compare_15_word_1	(ETHERNET0.untype2_compare_15_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_15_WORD_1	(ETHERNET0_type2_compare_15_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_15_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_15_word_1_t;

/* type2_compare_16_word_0 */
#define ETHERNET0_type2_compare_16_word_0	(ETHERNET0.untype2_compare_16_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_16_WORD_0	(ETHERNET0_type2_compare_16_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_16_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_16_word_0_t;

/* type2_compare_16_word_1 */
#define ETHERNET0_type2_compare_16_word_1	(ETHERNET0.untype2_compare_16_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_16_WORD_1	(ETHERNET0_type2_compare_16_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_16_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_16_word_1_t;

/* type2_compare_17_word_0 */
#define ETHERNET0_type2_compare_17_word_0	(ETHERNET0.untype2_compare_17_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_17_WORD_0	(ETHERNET0_type2_compare_17_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_17_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_17_word_0_t;

/* type2_compare_17_word_1 */
#define ETHERNET0_type2_compare_17_word_1	(ETHERNET0.untype2_compare_17_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_17_WORD_1	(ETHERNET0_type2_compare_17_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_17_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_17_word_1_t;

/* type2_compare_18_word_0 */
#define ETHERNET0_type2_compare_18_word_0	(ETHERNET0.untype2_compare_18_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_18_WORD_0	(ETHERNET0_type2_compare_18_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_18_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_18_word_0_t;

/* type2_compare_18_word_1 */
#define ETHERNET0_type2_compare_18_word_1	(ETHERNET0.untype2_compare_18_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_18_WORD_1	(ETHERNET0_type2_compare_18_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_18_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_18_word_1_t;

/* type2_compare_19_word_0 */
#define ETHERNET0_type2_compare_19_word_0	(ETHERNET0.untype2_compare_19_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_19_WORD_0	(ETHERNET0_type2_compare_19_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_19_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_19_word_0_t;

/* type2_compare_19_word_1 */
#define ETHERNET0_type2_compare_19_word_1	(ETHERNET0.untype2_compare_19_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_19_WORD_1	(ETHERNET0_type2_compare_19_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_19_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_19_word_1_t;

/* type2_compare_20_word_0 */
#define ETHERNET0_type2_compare_20_word_0	(ETHERNET0.untype2_compare_20_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_20_WORD_0	(ETHERNET0_type2_compare_20_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_20_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_20_word_0_t;

/* type2_compare_20_word_1 */
#define ETHERNET0_type2_compare_20_word_1	(ETHERNET0.untype2_compare_20_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_20_WORD_1	(ETHERNET0_type2_compare_20_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_20_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_20_word_1_t;

/* type2_compare_21_word_0 */
#define ETHERNET0_type2_compare_21_word_0	(ETHERNET0.untype2_compare_21_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_21_WORD_0	(ETHERNET0_type2_compare_21_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_21_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_21_word_0_t;

/* type2_compare_21_word_1 */
#define ETHERNET0_type2_compare_21_word_1	(ETHERNET0.untype2_compare_21_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_21_WORD_1	(ETHERNET0_type2_compare_21_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_21_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_21_word_1_t;

/* type2_compare_22_word_0 */
#define ETHERNET0_type2_compare_22_word_0	(ETHERNET0.untype2_compare_22_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_22_WORD_0	(ETHERNET0_type2_compare_22_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_22_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_22_word_0_t;

/* type2_compare_22_word_1 */
#define ETHERNET0_type2_compare_22_word_1	(ETHERNET0.untype2_compare_22_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_22_WORD_1	(ETHERNET0_type2_compare_22_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_22_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_22_word_1_t;

/* type2_compare_23_word_0 */
#define ETHERNET0_type2_compare_23_word_0	(ETHERNET0.untype2_compare_23_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_23_WORD_0	(ETHERNET0_type2_compare_23_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_23_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_23_word_0_t;

/* type2_compare_23_word_1 */
#define ETHERNET0_type2_compare_23_word_1	(ETHERNET0.untype2_compare_23_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_23_WORD_1	(ETHERNET0_type2_compare_23_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_23_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_23_word_1_t;

/* type2_compare_24_word_0 */
#define ETHERNET0_type2_compare_24_word_0	(ETHERNET0.untype2_compare_24_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_24_WORD_0	(ETHERNET0_type2_compare_24_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_24_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_24_word_0_t;

/* type2_compare_24_word_1 */
#define ETHERNET0_type2_compare_24_word_1	(ETHERNET0.untype2_compare_24_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_24_WORD_1	(ETHERNET0_type2_compare_24_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_24_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_24_word_1_t;

/* type2_compare_25_word_0 */
#define ETHERNET0_type2_compare_25_word_0	(ETHERNET0.untype2_compare_25_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_25_WORD_0	(ETHERNET0_type2_compare_25_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_25_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_25_word_0_t;

/* type2_compare_25_word_1 */
#define ETHERNET0_type2_compare_25_word_1	(ETHERNET0.untype2_compare_25_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_25_WORD_1	(ETHERNET0_type2_compare_25_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_25_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_25_word_1_t;

/* type2_compare_26_word_0 */
#define ETHERNET0_type2_compare_26_word_0	(ETHERNET0.untype2_compare_26_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_26_WORD_0	(ETHERNET0_type2_compare_26_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_26_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_26_word_0_t;

/* type2_compare_26_word_1 */
#define ETHERNET0_type2_compare_26_word_1	(ETHERNET0.untype2_compare_26_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_26_WORD_1	(ETHERNET0_type2_compare_26_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_26_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_26_word_1_t;

/* type2_compare_27_word_0 */
#define ETHERNET0_type2_compare_27_word_0	(ETHERNET0.untype2_compare_27_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_27_WORD_0	(ETHERNET0_type2_compare_27_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_27_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_27_word_0_t;

/* type2_compare_27_word_1 */
#define ETHERNET0_type2_compare_27_word_1	(ETHERNET0.untype2_compare_27_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_27_WORD_1	(ETHERNET0_type2_compare_27_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_27_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_27_word_1_t;

/* type2_compare_28_word_0 */
#define ETHERNET0_type2_compare_28_word_0	(ETHERNET0.untype2_compare_28_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_28_WORD_0	(ETHERNET0_type2_compare_28_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_28_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_28_word_0_t;

/* type2_compare_28_word_1 */
#define ETHERNET0_type2_compare_28_word_1	(ETHERNET0.untype2_compare_28_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_28_WORD_1	(ETHERNET0_type2_compare_28_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_28_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_28_word_1_t;

/* type2_compare_29_word_0 */
#define ETHERNET0_type2_compare_29_word_0	(ETHERNET0.untype2_compare_29_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_29_WORD_0	(ETHERNET0_type2_compare_29_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_29_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_29_word_0_t;

/* type2_compare_29_word_1 */
#define ETHERNET0_type2_compare_29_word_1	(ETHERNET0.untype2_compare_29_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_29_WORD_1	(ETHERNET0_type2_compare_29_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_29_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_29_word_1_t;

/* type2_compare_30_word_0 */
#define ETHERNET0_type2_compare_30_word_0	(ETHERNET0.untype2_compare_30_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_30_WORD_0	(ETHERNET0_type2_compare_30_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_30_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_30_word_0_t;

/* type2_compare_30_word_1 */
#define ETHERNET0_type2_compare_30_word_1	(ETHERNET0.untype2_compare_30_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_30_WORD_1	(ETHERNET0_type2_compare_30_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_30_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_30_word_1_t;

/* type2_compare_31_word_0 */
#define ETHERNET0_type2_compare_31_word_0	(ETHERNET0.untype2_compare_31_word_0.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_31_WORD_0	(ETHERNET0_type2_compare_31_word_0)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_31_word_0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_31_word_0_t;

/* type2_compare_31_word_1 */
#define ETHERNET0_type2_compare_31_word_1	(ETHERNET0.untype2_compare_31_word_1.u32Register)  /*@rg@*/
#define ETHERNET0_TYPE2_COMPARE_31_WORD_1	(ETHERNET0_type2_compare_31_word_1)  /*@rg2@*/

typedef union un_ethernet0_type2_compare_31_word_1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_ethernet0_type2_compare_31_word_1_t;


typedef struct stc_ethernet0{
    un_ethernet0_network_control_t	unnetwork_control;	/* 0x00000000 */
    un_ethernet0_network_configuration_t	unnetwork_configuration;	/* 0x00000004 */
    un_ethernet0_network_status_t	unnetwork_status;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[4];	/* 0x0000000C */
    un_ethernet0_dma_config_t	undma_config;	/* 0x00000010 */
    un_ethernet0_transmit_status_t	untransmit_status;	/* 0x00000014 */
    un_ethernet0_receive_q_ptr_t	unreceive_q_ptr;	/* 0x00000018 */
    un_ethernet0_transmit_q_ptr_t	untransmit_q_ptr;	/* 0x0000001C */
    un_ethernet0_receive_status_t	unreceive_status;	/* 0x00000020 */
    un_ethernet0_int_status_t	unint_status;	/* 0x00000024 */
    un_ethernet0_int_enable_t	unint_enable;	/* 0x00000028 */
    un_ethernet0_int_disable_t	unint_disable;	/* 0x0000002C */
    un_ethernet0_int_mask_t	unint_mask;	/* 0x00000030 */
    un_ethernet0_phy_management_t	unphy_management;	/* 0x00000034 */
    un_ethernet0_pause_time_t	unpause_time;	/* 0x00000038 */
    un_ethernet0_tx_pause_quantum_t	untx_pause_quantum;	/* 0x0000003C */
    un_ethernet0_pbuf_txcutthru_t	unpbuf_txcutthru;	/* 0x00000040 */
    un_ethernet0_pbuf_rxcutthru_t	unpbuf_rxcutthru;	/* 0x00000044 */
    un_ethernet0_jumbo_max_length_t	unjumbo_max_length;	/* 0x00000048 */
    uint_io8_t	au8Reserved1[8];	/* 0x0000004C */
    un_ethernet0_axi_max_pipeline_t	unaxi_max_pipeline;	/* 0x00000054 */
    uint_io8_t	au8Reserved2[40];	/* 0x00000058 */
    un_ethernet0_hash_bottom_t	unhash_bottom;	/* 0x00000080 */
    un_ethernet0_hash_top_t	unhash_top;	/* 0x00000084 */
    un_ethernet0_spec_add_bottom_n_t	unspec_add_bottom_1;	/* 0x00000088 */
    un_ethernet0_spec_add_top_n_t	unspec_add_top_1;	/* 0x0000008C */
    un_ethernet0_spec_add_bottom_n_t	unspec_add_bottom_2;	/* 0x00000090 */
    un_ethernet0_spec_add_top_n_t	unspec_add_top_2;	/* 0x00000094 */
    un_ethernet0_spec_add_bottom_n_t	unspec_add_bottom_3;	/* 0x00000098 */
    un_ethernet0_spec_add_top_n_t	unspec_add_top_3;	/* 0x0000009C */
    un_ethernet0_spec_add_bottom_n_t	unspec_add_bottom_4;	/* 0x000000A0 */
    un_ethernet0_spec_add_top_n_t	unspec_add_top_4;	/* 0x000000A4 */
    un_ethernet0_spec_type_n_t	unspec_type_1;	/* 0x000000A8 */
    un_ethernet0_spec_type_n_t	unspec_type_2;	/* 0x000000AC */
    un_ethernet0_spec_type_n_t	unspec_type_3;	/* 0x000000B0 */
    un_ethernet0_spec_type_n_t	unspec_type_4;	/* 0x000000B4 */
    uint_io8_t	au8Reserved3[4];	/* 0x000000B8 */
    un_ethernet0_stretch_ratio_t	unstretch_ratio;	/* 0x000000BC */
    un_ethernet0_stacked_vlan_t	unstacked_vlan;	/* 0x000000C0 */
    un_ethernet0_tx_pfc_pause_t	untx_pfc_pause;	/* 0x000000C4 */
    un_ethernet0_mask_add1_bottom_t	unmask_add1_bottom;	/* 0x000000C8 */
    un_ethernet0_mask_add1_top_t	unmask_add1_top;	/* 0x000000CC */
    un_ethernet0_dma_addr_or_mask_t	undma_addr_or_mask;	/* 0x000000D0 */
    un_ethernet0_rx_ptp_unicast_t	unrx_ptp_unicast;	/* 0x000000D4 */
    un_ethernet0_tx_ptp_unicast_t	untx_ptp_unicast;	/* 0x000000D8 */
    un_ethernet0_tsu_nsec_cmp_t	untsu_nsec_cmp;	/* 0x000000DC */
    un_ethernet0_tsu_sec_cmp_t	untsu_sec_cmp;	/* 0x000000E0 */
    un_ethernet0_tsu_msb_sec_cmp_t	untsu_msb_sec_cmp;	/* 0x000000E4 */
    un_ethernet0_tsu_ptp_tx_msb_sec_t	untsu_ptp_tx_msb_sec;	/* 0x000000E8 */
    un_ethernet0_tsu_ptp_rx_msb_sec_t	untsu_ptp_rx_msb_sec;	/* 0x000000EC */
    un_ethernet0_tsu_peer_tx_msb_sec_t	untsu_peer_tx_msb_sec;	/* 0x000000F0 */
    un_ethernet0_tsu_peer_rx_msb_sec_t	untsu_peer_rx_msb_sec;	/* 0x000000F4 */
    uint_io8_t	au8Reserved4[4];	/* 0x000000F8 */
    un_ethernet0_revision_reg_t	unrevision_reg;	/* 0x000000FC */
    un_ethernet0_octets_txed_bottom_t	unoctets_txed_bottom;	/* 0x00000100 */
    un_ethernet0_octets_txed_top_t	unoctets_txed_top;	/* 0x00000104 */
    un_ethernet0_frames_txed_ok_t	unframes_txed_ok;	/* 0x00000108 */
    un_ethernet0_broadcast_txed_t	unbroadcast_txed;	/* 0x0000010C */
    un_ethernet0_multicast_txed_t	unmulticast_txed;	/* 0x00000110 */
    un_ethernet0_pause_frames_txed_t	unpause_frames_txed;	/* 0x00000114 */
    un_ethernet0_frames_txed_64_t	unframes_txed_64;	/* 0x00000118 */
    un_ethernet0_frames_txed_65_t	unframes_txed_65;	/* 0x0000011C */
    un_ethernet0_frames_txed_128_t	unframes_txed_128;	/* 0x00000120 */
    un_ethernet0_frames_txed_256_t	unframes_txed_256;	/* 0x00000124 */
    un_ethernet0_frames_txed_512_t	unframes_txed_512;	/* 0x00000128 */
    un_ethernet0_frames_txed_1024_t	unframes_txed_1024;	/* 0x0000012C */
    un_ethernet0_frames_txed_1519_t	unframes_txed_1519;	/* 0x00000130 */
    un_ethernet0_tx_underruns_t	untx_underruns;	/* 0x00000134 */
    un_ethernet0_single_collisions_t	unsingle_collisions;	/* 0x00000138 */
    un_ethernet0_multiple_collisions_t	unmultiple_collisions;	/* 0x0000013C */
    un_ethernet0_excessive_collisions_t	unexcessive_collisions;	/* 0x00000140 */
    un_ethernet0_late_collisions_t	unlate_collisions;	/* 0x00000144 */
    un_ethernet0_deferred_frames_t	undeferred_frames;	/* 0x00000148 */
    un_ethernet0_crs_errors_t	uncrs_errors;	/* 0x0000014C */
    un_ethernet0_octets_rxed_bottom_t	unoctets_rxed_bottom;	/* 0x00000150 */
    un_ethernet0_octets_rxed_top_t	unoctets_rxed_top;	/* 0x00000154 */
    un_ethernet0_frames_rxed_ok_t	unframes_rxed_ok;	/* 0x00000158 */
    un_ethernet0_broadcast_rxed_t	unbroadcast_rxed;	/* 0x0000015C */
    un_ethernet0_multicast_rxed_t	unmulticast_rxed;	/* 0x00000160 */
    un_ethernet0_pause_frames_rxed_t	unpause_frames_rxed;	/* 0x00000164 */
    un_ethernet0_frames_rxed_64_t	unframes_rxed_64;	/* 0x00000168 */
    un_ethernet0_frames_rxed_65_t	unframes_rxed_65;	/* 0x0000016C */
    un_ethernet0_frames_rxed_128_t	unframes_rxed_128;	/* 0x00000170 */
    un_ethernet0_frames_rxed_256_t	unframes_rxed_256;	/* 0x00000174 */
    un_ethernet0_frames_rxed_512_t	unframes_rxed_512;	/* 0x00000178 */
    un_ethernet0_frames_rxed_1024_t	unframes_rxed_1024;	/* 0x0000017C */
    un_ethernet0_frames_rxed_1519_t	unframes_rxed_1519;	/* 0x00000180 */
    un_ethernet0_undersized_frames_t	unundersized_frames;	/* 0x00000184 */
    un_ethernet0_excessive_rx_length_t	unexcessive_rx_length;	/* 0x00000188 */
    un_ethernet0_rx_jabbers_t	unrx_jabbers;	/* 0x0000018C */
    un_ethernet0_fcs_errors_t	unfcs_errors;	/* 0x00000190 */
    un_ethernet0_rx_length_errors_t	unrx_length_errors;	/* 0x00000194 */
    un_ethernet0_rx_symbol_errors_t	unrx_symbol_errors;	/* 0x00000198 */
    un_ethernet0_alignment_errors_t	unalignment_errors;	/* 0x0000019C */
    un_ethernet0_rx_resource_errors_t	unrx_resource_errors;	/* 0x000001A0 */
    un_ethernet0_rx_overruns_t	unrx_overruns;	/* 0x000001A4 */
    un_ethernet0_rx_ip_ck_errors_t	unrx_ip_ck_errors;	/* 0x000001A8 */
    un_ethernet0_rx_tcp_ck_errors_t	unrx_tcp_ck_errors;	/* 0x000001AC */
    un_ethernet0_rx_udp_ck_errors_t	unrx_udp_ck_errors;	/* 0x000001B0 */
    un_ethernet0_auto_flushed_pkts_t	unauto_flushed_pkts;	/* 0x000001B4 */
    uint_io8_t	au8Reserved5[4];	/* 0x000001B8 */
    un_ethernet0_tsu_timer_incr_sub_nsec_t	untsu_timer_incr_sub_nsec;	/* 0x000001BC */
    un_ethernet0_tsu_timer_msb_sec_t	untsu_timer_msb_sec;	/* 0x000001C0 */
    uint_io8_t	au8Reserved6[12];	/* 0x000001C4 */
    un_ethernet0_tsu_timer_sec_t	untsu_timer_sec;	/* 0x000001D0 */
    un_ethernet0_tsu_timer_nsec_t	untsu_timer_nsec;	/* 0x000001D4 */
    un_ethernet0_tsu_timer_adjust_t	untsu_timer_adjust;	/* 0x000001D8 */
    un_ethernet0_tsu_timer_incr_t	untsu_timer_incr;	/* 0x000001DC */
    un_ethernet0_tsu_ptp_tx_sec_t	untsu_ptp_tx_sec;	/* 0x000001E0 */
    un_ethernet0_tsu_ptp_tx_nsec_t	untsu_ptp_tx_nsec;	/* 0x000001E4 */
    un_ethernet0_tsu_ptp_rx_sec_t	untsu_ptp_rx_sec;	/* 0x000001E8 */
    un_ethernet0_tsu_ptp_rx_nsec_t	untsu_ptp_rx_nsec;	/* 0x000001EC */
    un_ethernet0_tsu_peer_tx_sec_t	untsu_peer_tx_sec;	/* 0x000001F0 */
    un_ethernet0_tsu_peer_tx_nsec_t	untsu_peer_tx_nsec;	/* 0x000001F4 */
    un_ethernet0_tsu_peer_rx_sec_t	untsu_peer_rx_sec;	/* 0x000001F8 */
    un_ethernet0_tsu_peer_rx_nsec_t	untsu_peer_rx_nsec;	/* 0x000001FC */
    uint_io8_t	au8Reserved7[96];	/* 0x00000200 */
    un_ethernet0_tx_pause_quantum1_t	untx_pause_quantum1;	/* 0x00000260 */
    un_ethernet0_tx_pause_quantum2_t	untx_pause_quantum2;	/* 0x00000264 */
    un_ethernet0_tx_pause_quantum3_t	untx_pause_quantum3;	/* 0x00000268 */
    uint_io8_t	au8Reserved8[4];	/* 0x0000026C */
    un_ethernet0_rx_lpi_t	unrx_lpi;	/* 0x00000270 */
    un_ethernet0_rx_lpi_time_t	unrx_lpi_time;	/* 0x00000274 */
    un_ethernet0_tx_lpi_t	untx_lpi;	/* 0x00000278 */
    un_ethernet0_tx_lpi_time_t	untx_lpi_time;	/* 0x0000027C */
    uint_io8_t	au8Reserved9[384];	/* 0x00000280 */
    un_ethernet0_int_status_qn_t	unint_status_q1;	/* 0x00000400 */
    un_ethernet0_int_status_qn_t	unint_status_q2;	/* 0x00000404 */
    un_ethernet0_int_status_qn_t	unint_status_q3;	/* 0x00000408 */
    uint_io8_t	au8Reserved10[52];	/* 0x0000040C */
    un_ethernet0_transmit_q1_ptr_t	untransmit_q1_ptr;	/* 0x00000440 */
    un_ethernet0_transmit_q2_ptr_t	untransmit_q2_ptr;	/* 0x00000444 */
    un_ethernet0_transmit_q3_ptr_t	untransmit_q3_ptr;	/* 0x00000448 */
    uint_io8_t	au8Reserved11[52];	/* 0x0000044C */
    un_ethernet0_receive_q1_ptr_t	unreceive_q1_ptr;	/* 0x00000480 */
    un_ethernet0_receive_q2_ptr_t	unreceive_q2_ptr;	/* 0x00000484 */
    un_ethernet0_receive_q3_ptr_t	unreceive_q3_ptr;	/* 0x00000488 */
    uint_io8_t	au8Reserved12[20];	/* 0x0000048C */
    un_ethernet0_rxbuf_size_qn_t	unrxbuf_size_q1;	/* 0x000004A0 */
    un_ethernet0_rxbuf_size_qn_t	unrxbuf_size_q2;	/* 0x000004A4 */
    un_ethernet0_rxbuf_size_qn_t	unrxbuf_size_q3;	/* 0x000004A8 */
    uint_io8_t	au8Reserved13[16];	/* 0x000004AC */
    un_ethernet0_cbs_control_t	uncbs_control;	/* 0x000004BC */
    un_ethernet0_cbs_idleslope_q_a_t	uncbs_idleslope_q_a;	/* 0x000004C0 */
    un_ethernet0_cbs_idleslope_q_b_t	uncbs_idleslope_q_b;	/* 0x000004C4 */
    un_ethernet0_msb_buff_q_base_addr_reg_t	unmsb_buff_q_base_addr_reg;	/* 0x000004C8 */
    un_ethernet0_tx_bd_control_t	untx_bd_control;	/* 0x000004CC */
    un_ethernet0_rx_bd_control_t	unrx_bd_control;	/* 0x000004D0 */
    uint_io8_t	au8Reserved14[44];	/* 0x000004D4 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_0;	/* 0x00000500 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_1;	/* 0x00000504 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_2;	/* 0x00000508 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_3;	/* 0x0000050C */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_4;	/* 0x00000510 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_5;	/* 0x00000514 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_6;	/* 0x00000518 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_7;	/* 0x0000051C */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_8;	/* 0x00000520 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_9;	/* 0x00000524 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_10;	/* 0x00000528 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_11;	/* 0x0000052C */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_12;	/* 0x00000530 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_13;	/* 0x00000534 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_14;	/* 0x00000538 */
    un_ethernet0_screening_type_1_register_n_t	unscreening_type_1_register_15;	/* 0x0000053C */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_0;	/* 0x00000540 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_1;	/* 0x00000544 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_2;	/* 0x00000548 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_3;	/* 0x0000054C */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_4;	/* 0x00000550 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_5;	/* 0x00000554 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_6;	/* 0x00000558 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_7;	/* 0x0000055C */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_8;	/* 0x00000560 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_9;	/* 0x00000564 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_10;	/* 0x00000568 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_11;	/* 0x0000056C */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_12;	/* 0x00000570 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_13;	/* 0x00000574 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_14;	/* 0x00000578 */
    un_ethernet0_screening_type_2_register_n_t	unscreening_type_2_register_15;	/* 0x0000057C */
    uint_io8_t	au8Reserved15[128];	/* 0x00000580 */
    un_ethernet0_int_enable_qn_t	unint_enable_q1;	/* 0x00000600 */
    un_ethernet0_int_enable_qn_t	unint_enable_q2;	/* 0x00000604 */
    un_ethernet0_int_enable_qn_t	unint_enable_q3;	/* 0x00000608 */
    uint_io8_t	au8Reserved16[20];	/* 0x0000060C */
    un_ethernet0_int_disable_qn_t	unint_disable_q1;	/* 0x00000620 */
    un_ethernet0_int_disable_qn_t	unint_disable_q2;	/* 0x00000624 */
    un_ethernet0_int_disable_qn_t	unint_disable_q3;	/* 0x00000628 */
    uint_io8_t	au8Reserved17[20];	/* 0x0000062C */
    un_ethernet0_int_mask_qn_t	unint_mask_q1;	/* 0x00000640 */
    un_ethernet0_int_mask_qn_t	unint_mask_q2;	/* 0x00000644 */
    un_ethernet0_int_mask_qn_t	unint_mask_q3;	/* 0x00000648 */
    uint_io8_t	au8Reserved18[148];	/* 0x0000064C */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_0;	/* 0x000006E0 */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_1;	/* 0x000006E4 */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_2;	/* 0x000006E8 */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_3;	/* 0x000006EC */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_4;	/* 0x000006F0 */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_5;	/* 0x000006F4 */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_6;	/* 0x000006F8 */
    un_ethernet0_screening_type_2_ethertype_reg_n_t	unscreening_type_2_ethertype_reg_7;	/* 0x000006FC */
    un_ethernet0_type2_compare_0_word_0_t	untype2_compare_0_word_0;	/* 0x00000700 */
    un_ethernet0_type2_compare_0_word_1_t	untype2_compare_0_word_1;	/* 0x00000704 */
    un_ethernet0_type2_compare_1_word_0_t	untype2_compare_1_word_0;	/* 0x00000708 */
    un_ethernet0_type2_compare_1_word_1_t	untype2_compare_1_word_1;	/* 0x0000070C */
    un_ethernet0_type2_compare_2_word_0_t	untype2_compare_2_word_0;	/* 0x00000710 */
    un_ethernet0_type2_compare_2_word_1_t	untype2_compare_2_word_1;	/* 0x00000714 */
    un_ethernet0_type2_compare_3_word_0_t	untype2_compare_3_word_0;	/* 0x00000718 */
    un_ethernet0_type2_compare_3_word_1_t	untype2_compare_3_word_1;	/* 0x0000071C */
    un_ethernet0_type2_compare_4_word_0_t	untype2_compare_4_word_0;	/* 0x00000720 */
    un_ethernet0_type2_compare_4_word_1_t	untype2_compare_4_word_1;	/* 0x00000724 */
    un_ethernet0_type2_compare_5_word_0_t	untype2_compare_5_word_0;	/* 0x00000728 */
    un_ethernet0_type2_compare_5_word_1_t	untype2_compare_5_word_1;	/* 0x0000072C */
    un_ethernet0_type2_compare_6_word_0_t	untype2_compare_6_word_0;	/* 0x00000730 */
    un_ethernet0_type2_compare_6_word_1_t	untype2_compare_6_word_1;	/* 0x00000734 */
    un_ethernet0_type2_compare_7_word_0_t	untype2_compare_7_word_0;	/* 0x00000738 */
    un_ethernet0_type2_compare_7_word_1_t	untype2_compare_7_word_1;	/* 0x0000073C */
    un_ethernet0_type2_compare_8_word_0_t	untype2_compare_8_word_0;	/* 0x00000740 */
    un_ethernet0_type2_compare_8_word_1_t	untype2_compare_8_word_1;	/* 0x00000744 */
    un_ethernet0_type2_compare_9_word_0_t	untype2_compare_9_word_0;	/* 0x00000748 */
    un_ethernet0_type2_compare_9_word_1_t	untype2_compare_9_word_1;	/* 0x0000074C */
    un_ethernet0_type2_compare_10_word_0_t	untype2_compare_10_word_0;	/* 0x00000750 */
    un_ethernet0_type2_compare_10_word_1_t	untype2_compare_10_word_1;	/* 0x00000754 */
    un_ethernet0_type2_compare_11_word_0_t	untype2_compare_11_word_0;	/* 0x00000758 */
    un_ethernet0_type2_compare_11_word_1_t	untype2_compare_11_word_1;	/* 0x0000075C */
    un_ethernet0_type2_compare_12_word_0_t	untype2_compare_12_word_0;	/* 0x00000760 */
    un_ethernet0_type2_compare_12_word_1_t	untype2_compare_12_word_1;	/* 0x00000764 */
    un_ethernet0_type2_compare_13_word_0_t	untype2_compare_13_word_0;	/* 0x00000768 */
    un_ethernet0_type2_compare_13_word_1_t	untype2_compare_13_word_1;	/* 0x0000076C */
    un_ethernet0_type2_compare_14_word_0_t	untype2_compare_14_word_0;	/* 0x00000770 */
    un_ethernet0_type2_compare_14_word_1_t	untype2_compare_14_word_1;	/* 0x00000774 */
    un_ethernet0_type2_compare_15_word_0_t	untype2_compare_15_word_0;	/* 0x00000778 */
    un_ethernet0_type2_compare_15_word_1_t	untype2_compare_15_word_1;	/* 0x0000077C */
    un_ethernet0_type2_compare_16_word_0_t	untype2_compare_16_word_0;	/* 0x00000780 */
    un_ethernet0_type2_compare_16_word_1_t	untype2_compare_16_word_1;	/* 0x00000784 */
    un_ethernet0_type2_compare_17_word_0_t	untype2_compare_17_word_0;	/* 0x00000788 */
    un_ethernet0_type2_compare_17_word_1_t	untype2_compare_17_word_1;	/* 0x0000078C */
    un_ethernet0_type2_compare_18_word_0_t	untype2_compare_18_word_0;	/* 0x00000790 */
    un_ethernet0_type2_compare_18_word_1_t	untype2_compare_18_word_1;	/* 0x00000794 */
    un_ethernet0_type2_compare_19_word_0_t	untype2_compare_19_word_0;	/* 0x00000798 */
    un_ethernet0_type2_compare_19_word_1_t	untype2_compare_19_word_1;	/* 0x0000079C */
    un_ethernet0_type2_compare_20_word_0_t	untype2_compare_20_word_0;	/* 0x000007A0 */
    un_ethernet0_type2_compare_20_word_1_t	untype2_compare_20_word_1;	/* 0x000007A4 */
    un_ethernet0_type2_compare_21_word_0_t	untype2_compare_21_word_0;	/* 0x000007A8 */
    un_ethernet0_type2_compare_21_word_1_t	untype2_compare_21_word_1;	/* 0x000007AC */
    un_ethernet0_type2_compare_22_word_0_t	untype2_compare_22_word_0;	/* 0x000007B0 */
    un_ethernet0_type2_compare_22_word_1_t	untype2_compare_22_word_1;	/* 0x000007B4 */
    un_ethernet0_type2_compare_23_word_0_t	untype2_compare_23_word_0;	/* 0x000007B8 */
    un_ethernet0_type2_compare_23_word_1_t	untype2_compare_23_word_1;	/* 0x000007BC */
    un_ethernet0_type2_compare_24_word_0_t	untype2_compare_24_word_0;	/* 0x000007C0 */
    un_ethernet0_type2_compare_24_word_1_t	untype2_compare_24_word_1;	/* 0x000007C4 */
    un_ethernet0_type2_compare_25_word_0_t	untype2_compare_25_word_0;	/* 0x000007C8 */
    un_ethernet0_type2_compare_25_word_1_t	untype2_compare_25_word_1;	/* 0x000007CC */
    un_ethernet0_type2_compare_26_word_0_t	untype2_compare_26_word_0;	/* 0x000007D0 */
    un_ethernet0_type2_compare_26_word_1_t	untype2_compare_26_word_1;	/* 0x000007D4 */
    un_ethernet0_type2_compare_27_word_0_t	untype2_compare_27_word_0;	/* 0x000007D8 */
    un_ethernet0_type2_compare_27_word_1_t	untype2_compare_27_word_1;	/* 0x000007DC */
    un_ethernet0_type2_compare_28_word_0_t	untype2_compare_28_word_0;	/* 0x000007E0 */
    un_ethernet0_type2_compare_28_word_1_t	untype2_compare_28_word_1;	/* 0x000007E4 */
    un_ethernet0_type2_compare_29_word_0_t	untype2_compare_29_word_0;	/* 0x000007E8 */
    un_ethernet0_type2_compare_29_word_1_t	untype2_compare_29_word_1;	/* 0x000007EC */
    un_ethernet0_type2_compare_30_word_0_t	untype2_compare_30_word_0;	/* 0x000007F0 */
    un_ethernet0_type2_compare_30_word_1_t	untype2_compare_30_word_1;	/* 0x000007F4 */
    un_ethernet0_type2_compare_31_word_0_t	untype2_compare_31_word_0;	/* 0x000007F8 */
    un_ethernet0_type2_compare_31_word_1_t	untype2_compare_31_word_1;	/* 0x000007FC */
}stc_ethernet0_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_ethernet0_t	stcETHERNET0;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 2048(0x800) bytes */


#endif /* __S6J3200_ETHERNET_H */
