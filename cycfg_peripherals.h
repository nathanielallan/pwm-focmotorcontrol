/*******************************************************************************
 * File Name: cycfg_peripherals.h
 *
 * Description:
 * Peripheral Hardware Block configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.70.0
 * device-db 4.35.0.9884
 * mtb-xmclib-cat3 4.7.0.5494
 *
 *******************************************************************************
 * Copyright 2026 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "xmc_ccu8.h"
#include "xmc_vadc.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define ccu8_0_ENABLED 1U
#define ccu8_0_NUM 0U
#define ccu8_0_HW CCU80
#define vadc_0_ENABLED 1U
#define vadc_0_HW VADC
#define vadc_0_SR0_INTERRUPT_HANDLER VADC0_C0_0_IRQHandler
#define vadc_0_SR1_INTERRUPT_HANDLER VADC0_C0_1_IRQHandler
#define vadc_0_SR2_INTERRUPT_HANDLER VADC0_C0_2_IRQHandler
#define vadc_0_SR3_INTERRUPT_HANDLER VADC0_C0_3_IRQHandler
#define vadc_0_SR0_IRQN VADC0_C0_0_IRQn
#define vadc_0_SR1_IRQN VADC0_C0_1_IRQn
#define vadc_0_SR2_IRQN VADC0_C0_2_IRQn
#define vadc_0_SR3_IRQN VADC0_C0_3_IRQn
#define ccu8_0_ch_0_ENABLED 1U
#define ccu8_0_ch_0_NUM 0U
#define ccu8_0_ch_0_HW CCU80_CC80
#define ccu8_0_ch_0_TICK_NS 42U
#define ccu8_0_ch_1_ENABLED 1U
#define ccu8_0_ch_1_NUM 1U
#define ccu8_0_ch_1_HW CCU80_CC81
#define ccu8_0_ch_1_TICK_NS 42U
#define ccu8_0_ch_2_ENABLED 1U
#define ccu8_0_ch_2_NUM 2U
#define ccu8_0_ch_2_HW CCU80_CC82
#define ccu8_0_ch_2_TICK_NS 42U
#define vadc_0_group_0_ENABLED 1U
#define vadc_0_group_0_HW VADC_G0
#define vadc_0_group_0_NUM 0U
#define vadc_0_group_0_SR0_INTERRUPT_HANDLER VADC0_G0_0_IRQHandler
#define vadc_0_group_0_SR1_INTERRUPT_HANDLER VADC0_G0_1_IRQHandler
#define vadc_0_group_0_SR2_INTERRUPT_HANDLER VADC0_G0_2_IRQHandler
#define vadc_0_group_0_SR3_INTERRUPT_HANDLER VADC0_G0_3_IRQHandler
#define vadc_0_group_0_SR0_IRQN VADC0_G0_0_IRQn
#define vadc_0_group_0_SR1_IRQN VADC0_G0_1_IRQn
#define vadc_0_group_0_SR2_IRQN VADC0_G0_2_IRQn
#define vadc_0_group_0_SR3_IRQN VADC0_G0_3_IRQn
#define vadc_0_group_0_ch_3_ENABLED 1U
#define vadc_0_group_0_ch_4_ENABLED 1U
#define vadc_0_group_0_ch_5_ENABLED 1U
#define vadc_0_group_0_ch_6_ENABLED 1U
#define vadc_0_group_0_ch_7_ENABLED 1U

extern XMC_VADC_GROUP_CONFIG_t vadc_0_group0_init_config;
extern const XMC_VADC_GLOBAL_CONFIG_t vadc_0_config;
extern const XMC_VADC_BACKGROUND_CONFIG_t vadc_0_background_scan_config;
extern const XMC_CCU8_SLICE_COMPARE_CONFIG_t ccu8_0_ch_0_compare_config;
extern const XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t ccu8_0_ch_0_dead_time_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_0_event0_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_0_event1_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_0_event2_config;
extern const XMC_CCU8_SLICE_COMPARE_CONFIG_t ccu8_0_ch_1_compare_config;
extern const XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t ccu8_0_ch_1_dead_time_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_1_event0_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_1_event1_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_1_event2_config;
extern const XMC_CCU8_SLICE_COMPARE_CONFIG_t ccu8_0_ch_2_compare_config;
extern const XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t ccu8_0_ch_2_dead_time_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_2_event0_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_2_event1_config;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_2_event2_config;
extern const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_3;
extern const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_4;
extern const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_5;
extern const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_6;
extern const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_7;
extern const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_3_config;
extern const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_4_config;
extern const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_5_config;
extern const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_6_config;
extern const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_7_config;
extern const XMC_VADC_QUEUE_CONFIG_t vadc_0_group_0_queue_config;
extern const XMC_VADC_GROUP_CLASS_t vadc_0_0_iclass_0;
extern const XMC_VADC_GROUP_CLASS_t vadc_0_0_iclass_1;
extern const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_3_config;
extern const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_4_config;
extern const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_5_config;
extern const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_6_config;
extern const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_7_config;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PERIPHERALS_H */
