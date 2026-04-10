/*******************************************************************************
 * File Name: cycfg_peripherals.c
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

#include "cycfg_peripherals.h"

const XMC_CCU8_SLICE_COMPARE_CONFIG_t ccu8_0_ch_0_compare_config =
{
    .timer_mode = XMC_CCU8_SLICE_TIMER_COUNT_MODE_CA,
    .monoshot = XMC_CCU8_SLICE_TIMER_REPEAT_MODE_REPEAT,
    .shadow_xfer_clear = 0,
    .dither_timer_period = 0,
    .dither_duty_cycle = 0,
    .prescaler_mode = XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,
    .mcm_ch1_enable = 0,
    .mcm_ch2_enable = 0,
    .slice_status = XMC_CCU8_SLICE_STATUS_CHANNEL_1_AND_2,
    .passive_level_out0 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out1 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out2 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out3 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .asymmetric_pwm = 0,
    .invert_out0 = false,
    .invert_out1 = false,
    .invert_out2 = false,
    .invert_out3 = false,
    .prescaler_initval = XMC_CCU8_SLICE_PRESCALER_1,
    .float_limit = XMC_CCU8_SLICE_PRESCALER_32768,
    .dither_limit = 0U,
    .timer_concatenation = 0,
};
const XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t ccu8_0_ch_0_dead_time_config =
{
    .enable_dead_time_channel1 = true,
    .enable_dead_time_channel2 = true,
    .channel1_st_path = true,
    .channel2_st_path = true,
    .channel1_inv_st_path = true,
    .channel2_inv_st_path = true,
    .div = XMC_CCU8_SLICE_DTC_DIV_1,
    .channel1_st_rising_edge_counter = 4,
    .channel2_st_rising_edge_counter = 4,
    .channel1_st_falling_edge_counter = 4,
    .channel2_st_falling_edge_counter = 4,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_0_event0_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_0_event1_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_0_event2_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_COMPARE_CONFIG_t ccu8_0_ch_1_compare_config =
{
    .timer_mode = XMC_CCU8_SLICE_TIMER_COUNT_MODE_CA,
    .monoshot = XMC_CCU8_SLICE_TIMER_REPEAT_MODE_REPEAT,
    .shadow_xfer_clear = 0,
    .dither_timer_period = 0,
    .dither_duty_cycle = 0,
    .prescaler_mode = XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,
    .mcm_ch1_enable = 0,
    .mcm_ch2_enable = 0,
    .slice_status = XMC_CCU8_SLICE_STATUS_CHANNEL_1_AND_2,
    .passive_level_out0 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out1 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out2 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out3 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .asymmetric_pwm = 0,
    .invert_out0 = false,
    .invert_out1 = false,
    .invert_out2 = false,
    .invert_out3 = false,
    .prescaler_initval = XMC_CCU8_SLICE_PRESCALER_1,
    .float_limit = XMC_CCU8_SLICE_PRESCALER_32768,
    .dither_limit = 0U,
    .timer_concatenation = 0,
};
const XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t ccu8_0_ch_1_dead_time_config =
{
    .enable_dead_time_channel1 = true,
    .enable_dead_time_channel2 = true,
    .channel1_st_path = true,
    .channel2_st_path = true,
    .channel1_inv_st_path = true,
    .channel2_inv_st_path = true,
    .div = XMC_CCU8_SLICE_DTC_DIV_1,
    .channel1_st_rising_edge_counter = 4,
    .channel2_st_rising_edge_counter = 4,
    .channel1_st_falling_edge_counter = 4,
    .channel2_st_falling_edge_counter = 4,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_1_event0_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_1_event1_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_1_event2_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_COMPARE_CONFIG_t ccu8_0_ch_2_compare_config =
{
    .timer_mode = XMC_CCU8_SLICE_TIMER_COUNT_MODE_CA,
    .monoshot = XMC_CCU8_SLICE_TIMER_REPEAT_MODE_REPEAT,
    .shadow_xfer_clear = 0,
    .dither_timer_period = 0,
    .dither_duty_cycle = 0,
    .prescaler_mode = XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,
    .mcm_ch1_enable = 0,
    .mcm_ch2_enable = 0,
    .slice_status = XMC_CCU8_SLICE_STATUS_CHANNEL_1_AND_2,
    .passive_level_out0 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out1 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out2 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .passive_level_out3 = XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW,
    .asymmetric_pwm = 0,
    .invert_out0 = false,
    .invert_out1 = false,
    .invert_out2 = false,
    .invert_out3 = false,
    .prescaler_initval = XMC_CCU8_SLICE_PRESCALER_1,
    .float_limit = XMC_CCU8_SLICE_PRESCALER_32768,
    .dither_limit = 0U,
    .timer_concatenation = 0,
};
const XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t ccu8_0_ch_2_dead_time_config =
{
    .enable_dead_time_channel1 = true,
    .enable_dead_time_channel2 = true,
    .channel1_st_path = true,
    .channel2_st_path = true,
    .channel1_inv_st_path = true,
    .channel2_inv_st_path = true,
    .div = XMC_CCU8_SLICE_DTC_DIV_1,
    .channel1_st_rising_edge_counter = 4,
    .channel2_st_rising_edge_counter = 4,
    .channel1_st_falling_edge_counter = 4,
    .channel2_st_falling_edge_counter = 4,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_2_event0_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_2_event1_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};
const XMC_CCU8_SLICE_EVENT_CONFIG_t ccu8_0_ch_2_event2_config =
{
    .edge = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
    .level = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
};

void init_cycfg_peripherals(void)
{
    XMC_CCU8_Init(ccu8_0_HW, XMC_CCU8_SLICE_MCMS_ACTION_TRANSFER_PR_CR);
    XMC_CCU8_StartPrescaler(ccu8_0_HW);
    
    XMC_CCU8_SLICE_CompareInit(ccu8_0_ch_0_HW, &ccu8_0_ch_0_compare_config);
    XMC_CCU8_SLICE_SetTimerCompareMatchChannel1(ccu8_0_ch_0_HW, 12000U);
    XMC_CCU8_SLICE_SetTimerCompareMatchChannel2(ccu8_0_ch_0_HW, 0U);
    XMC_CCU8_SLICE_SetTimerPeriodMatch(ccu8_0_ch_0_HW, 24000U);
    XMC_CCU8_SetMultiChannelShadowTransferMode(ccu8_0_HW, XMC_CCU8_MULTI_CHANNEL_SHADOW_TRANSFER_SW_MCSS_SLICE0);
    XMC_CCU8_EnableShadowTransfer(ccu8_0_HW,XMC_CCU8_SHADOW_TRANSFER_SLICE_0 |XMC_CCU8_SHADOW_TRANSFER_DITHER_SLICE_0 |XMC_CCU8_SHADOW_TRANSFER_PRESCALER_SLICE_0 );
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_0_HW, XMC_CCU8_SLICE_EVENT_0, &ccu8_0_ch_0_event0_config);
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_0_HW, XMC_CCU8_SLICE_EVENT_1, &ccu8_0_ch_0_event1_config);
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_0_HW, XMC_CCU8_SLICE_EVENT_2, &ccu8_0_ch_0_event2_config);
    XMC_CCU8_EnableClock(ccu8_0_HW, ccu8_0_ch_0_NUM);
    XMC_CCU8_SLICE_DeadTimeInit(ccu8_0_ch_0_HW, &ccu8_0_ch_0_dead_time_config);
    XMC_CCU8_SLICE_SetTimerValue(ccu8_0_ch_0_HW, 0U);
    XMC_CCU8_SLICE_StartTimer(ccu8_0_ch_0_HW);
    XMC_CCU8_SLICE_CompareInit(ccu8_0_ch_1_HW, &ccu8_0_ch_1_compare_config);
    XMC_CCU8_SLICE_SetTimerCompareMatchChannel1(ccu8_0_ch_1_HW, 12000U);
    XMC_CCU8_SLICE_SetTimerCompareMatchChannel2(ccu8_0_ch_1_HW, 0U);
    XMC_CCU8_SLICE_SetTimerPeriodMatch(ccu8_0_ch_1_HW, 24000U);
    XMC_CCU8_SetMultiChannelShadowTransferMode(ccu8_0_HW, XMC_CCU8_MULTI_CHANNEL_SHADOW_TRANSFER_SW_MCSS_SLICE1);
    XMC_CCU8_EnableShadowTransfer(ccu8_0_HW,XMC_CCU8_SHADOW_TRANSFER_SLICE_1 |XMC_CCU8_SHADOW_TRANSFER_DITHER_SLICE_1 |XMC_CCU8_SHADOW_TRANSFER_PRESCALER_SLICE_1 );
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_1_HW, XMC_CCU8_SLICE_EVENT_0, &ccu8_0_ch_1_event0_config);
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_1_HW, XMC_CCU8_SLICE_EVENT_1, &ccu8_0_ch_1_event1_config);
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_1_HW, XMC_CCU8_SLICE_EVENT_2, &ccu8_0_ch_1_event2_config);
    XMC_CCU8_EnableClock(ccu8_0_HW, ccu8_0_ch_1_NUM);
    XMC_CCU8_SLICE_DeadTimeInit(ccu8_0_ch_1_HW, &ccu8_0_ch_1_dead_time_config);
    XMC_CCU8_SLICE_SetTimerValue(ccu8_0_ch_1_HW, 0U);
    XMC_CCU8_SLICE_StartTimer(ccu8_0_ch_1_HW);
    XMC_CCU8_SLICE_CompareInit(ccu8_0_ch_2_HW, &ccu8_0_ch_2_compare_config);
    XMC_CCU8_SLICE_SetTimerCompareMatchChannel1(ccu8_0_ch_2_HW, 12000U);
    XMC_CCU8_SLICE_SetTimerCompareMatchChannel2(ccu8_0_ch_2_HW, 0U);
    XMC_CCU8_SLICE_SetTimerPeriodMatch(ccu8_0_ch_2_HW, 24000U);
    XMC_CCU8_SetMultiChannelShadowTransferMode(ccu8_0_HW, XMC_CCU8_MULTI_CHANNEL_SHADOW_TRANSFER_SW_MCSS_SLICE2);
    XMC_CCU8_EnableShadowTransfer(ccu8_0_HW,XMC_CCU8_SHADOW_TRANSFER_SLICE_2 |XMC_CCU8_SHADOW_TRANSFER_DITHER_SLICE_2 |XMC_CCU8_SHADOW_TRANSFER_PRESCALER_SLICE_2 );
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_2_HW, XMC_CCU8_SLICE_EVENT_0, &ccu8_0_ch_2_event0_config);
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_2_HW, XMC_CCU8_SLICE_EVENT_1, &ccu8_0_ch_2_event1_config);
    XMC_CCU8_SLICE_ConfigureEvent(ccu8_0_ch_2_HW, XMC_CCU8_SLICE_EVENT_2, &ccu8_0_ch_2_event2_config);
    XMC_CCU8_EnableClock(ccu8_0_HW, ccu8_0_ch_2_NUM);
    XMC_CCU8_SLICE_DeadTimeInit(ccu8_0_ch_2_HW, &ccu8_0_ch_2_dead_time_config);
    XMC_CCU8_SLICE_SetTimerValue(ccu8_0_ch_2_HW, 0U);
    XMC_CCU8_SLICE_StartTimer(ccu8_0_ch_2_HW);
    }
