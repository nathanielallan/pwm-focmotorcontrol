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

XMC_VADC_GROUP_CONFIG_t vadc_0_group0_init_config =
{
    .emux_config.starting_external_channel = (uint32_t) 0,
    .emux_config.connected_channel = (uint32_t) 0,
    .emux_config.emux_mode = XMC_VADC_GROUP_EMUXMODE_SWCTRL,
    .emux_config.emux_coding = XMC_VADC_GROUP_EMUXCODE_BINARY,
    .emux_config.stce_usage = (uint32_t) 0,
    .boundary0 = (uint32_t) 0,
    .boundary1 = (uint32_t) 0,
    .arbitration_round_length = (uint32_t) 0,
    .arbiter_mode = (uint32_t) XMC_VADC_GROUP_ARBMODE_ALWAYS,
};
const XMC_VADC_GLOBAL_CONFIG_t vadc_0_config =
{
    .boundary0 = 0U,
    .boundary1 = 0U,
    .clock_config.analog_clock_divider = 1U,
    .clock_config.msb_conversion_clock = 0U,
    .clock_config.arbiter_clock_divider = 0U,
    .class0.sample_time_std_conv = (uint32_t) 0,
    .class0.conversion_mode_standard = XMC_VADC_CONVMODE_12BIT,
    .class0.sampling_phase_emux_channel = (uint32_t) 0,
    .class0.conversion_mode_emux = XMC_VADC_CONVMODE_12BIT,
    .class1.sample_time_std_conv = (uint32_t) 0,
    .class1.conversion_mode_standard = XMC_VADC_CONVMODE_12BIT,
    .class1.sampling_phase_emux_channel = (uint32_t) 0,
    .class1.conversion_mode_emux = XMC_VADC_CONVMODE_12BIT,
    .data_reduction_control = 0U,
    .wait_for_read_mode = 0U,
    .event_gen_enable = 0U,
    .disable_sleep_mode_control = 0U,
};
const XMC_VADC_BACKGROUND_CONFIG_t vadc_0_background_scan_config =
{
    .conv_start_mode = (uint32_t) XMC_VADC_STARTMODE_WFS,
    .req_src_priority = (uint32_t) XMC_VADC_GROUP_RS_PRIORITY_0,
    .src_specific_result_reg = (uint32_t) 0,
    .trigger_signal = (uint32_t) XMC_VADC_REQ_TR_A,
    .trigger_edge = (uint32_t) XMC_VADC_TRIGGER_EDGE_NONE,
    .gate_signal = (uint32_t) XMC_VADC_REQ_GT_A,
    .timer_mode = (uint32_t) false,
    .external_trigger = (uint32_t) false,
    .req_src_interrupt = (uint32_t) false,
    .enable_auto_scan = (uint32_t) false,
    .load_mode = (uint32_t) XMC_VADC_SCAN_LOAD_OVERWRITE,
};
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
const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_3 =
{
    .channel_num = (uint8_t)3,
    .refill_needed = (uint32_t)true,
    .generate_interrupt = (uint32_t)false,
    .external_trigger = (uint32_t)true,
};
const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_4 =
{
    .channel_num = (uint8_t)4,
    .refill_needed = (uint32_t)true,
    .generate_interrupt = (uint32_t)false,
    .external_trigger = (uint32_t)true,
};
const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_5 =
{
    .channel_num = (uint8_t)5,
    .refill_needed = (uint32_t)true,
    .generate_interrupt = (uint32_t)false,
    .external_trigger = (uint32_t)true,
};
const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_6 =
{
    .channel_num = (uint8_t)7,
    .refill_needed = (uint32_t)true,
    .generate_interrupt = (uint32_t)false,
    .external_trigger = (uint32_t)true,
};
const XMC_VADC_QUEUE_ENTRY_t vadc_0_group_0_queue_entries_7 =
{
    .channel_num = (uint8_t)6,
    .refill_needed = (uint32_t)true,
    .generate_interrupt = (uint32_t)false,
    .external_trigger = (uint32_t)true,
};
const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_3_config =
{
    .data_reduction_control = (uint32_t) 0,
    .post_processing_mode = (uint32_t) XMC_VADC_DMM_REDUCTION_MODE,
    .wait_for_read_mode = (uint32_t) false,
    .part_of_fifo = (uint32_t) false,
    .event_gen_enable = false,
};
const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_4_config =
{
    .data_reduction_control = (uint32_t) 0,
    .post_processing_mode = (uint32_t) XMC_VADC_DMM_REDUCTION_MODE,
    .wait_for_read_mode = (uint32_t) false,
    .part_of_fifo = (uint32_t) false,
    .event_gen_enable = false,
};
const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_5_config =
{
    .data_reduction_control = (uint32_t) 0,
    .post_processing_mode = (uint32_t) XMC_VADC_DMM_REDUCTION_MODE,
    .wait_for_read_mode = (uint32_t) false,
    .part_of_fifo = (uint32_t) false,
    .event_gen_enable = false,
};
const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_6_config =
{
    .data_reduction_control = (uint32_t) 0,
    .post_processing_mode = (uint32_t) XMC_VADC_DMM_REDUCTION_MODE,
    .wait_for_read_mode = (uint32_t) false,
    .part_of_fifo = (uint32_t) false,
    .event_gen_enable = false,
};
const XMC_VADC_RESULT_CONFIG_t vadc_0_group_0_result_7_config =
{
    .data_reduction_control = (uint32_t) 0,
    .post_processing_mode = (uint32_t) XMC_VADC_DMM_REDUCTION_MODE,
    .wait_for_read_mode = (uint32_t) false,
    .part_of_fifo = (uint32_t) false,
    .event_gen_enable = false,
};
const XMC_VADC_QUEUE_CONFIG_t vadc_0_group_0_queue_config =
{
    .conv_start_mode = (uint32_t) XMC_VADC_STARTMODE_WFS,
    .req_src_priority = (uint32_t) XMC_VADC_GROUP_RS_PRIORITY_0,
    .src_specific_result_reg = (uint32_t) 0,
    .trigger_edge = (uint32_t) XMC_VADC_TRIGGER_EDGE_NONE,
    .timer_mode = (uint32_t) false,
    .external_trigger = (uint32_t) false,
};
const XMC_VADC_GROUP_CLASS_t vadc_0_0_iclass_0 =
{
    .sample_time_std_conv = (uint32_t) 0,
    .conversion_mode_standard = XMC_VADC_CONVMODE_12BIT,
    .sampling_phase_emux_channel = (uint32_t) 0,
    .conversion_mode_emux = XMC_VADC_CONVMODE_12BIT,
};
const XMC_VADC_GROUP_CLASS_t vadc_0_0_iclass_1 =
{
    .sample_time_std_conv = (uint32_t) 0,
    .conversion_mode_standard = XMC_VADC_CONVMODE_12BIT,
    .sampling_phase_emux_channel = (uint32_t) 0,
    .conversion_mode_emux = XMC_VADC_CONVMODE_12BIT,
};
const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_3_config =
{
    .input_class = (uint32_t) XMC_VADC_CHANNEL_CONV_GROUP_CLASS0,
    .lower_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .upper_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .event_gen_criteria = (uint32_t) XMC_VADC_CHANNEL_EVGEN_NEVER,
    .sync_conversion = (uint32_t) false,
    .alternate_reference = (uint32_t) XMC_VADC_CHANNEL_REF_INTREF,
    .result_reg_number = (uint32_t) 3,
    .use_global_result = (uint32_t) 0,
    .result_alignment = (uint32_t) XMC_VADC_RESULT_ALIGN_LEFT,
    .broken_wire_detect_channel = (uint32_t) XMC_VADC_CHANNEL_BWDCH_VAGND,
    .broken_wire_detect = (uint32_t) false,
    .channel_priority = (bool) false,
    .alias_channel = (int8_t) XMC_VADC_CHANNEL_ALIAS_DISABLED,
};
const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_4_config =
{
    .input_class = (uint32_t) XMC_VADC_CHANNEL_CONV_GROUP_CLASS0,
    .lower_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .upper_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .event_gen_criteria = (uint32_t) XMC_VADC_CHANNEL_EVGEN_NEVER,
    .sync_conversion = (uint32_t) false,
    .alternate_reference = (uint32_t) XMC_VADC_CHANNEL_REF_INTREF,
    .result_reg_number = (uint32_t) 4,
    .use_global_result = (uint32_t) 0,
    .result_alignment = (uint32_t) XMC_VADC_RESULT_ALIGN_LEFT,
    .broken_wire_detect_channel = (uint32_t) XMC_VADC_CHANNEL_BWDCH_VAGND,
    .broken_wire_detect = (uint32_t) false,
    .channel_priority = (bool) false,
    .alias_channel = (int8_t) XMC_VADC_CHANNEL_ALIAS_DISABLED,
};
const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_5_config =
{
    .input_class = (uint32_t) XMC_VADC_CHANNEL_CONV_GROUP_CLASS0,
    .lower_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .upper_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .event_gen_criteria = (uint32_t) XMC_VADC_CHANNEL_EVGEN_NEVER,
    .sync_conversion = (uint32_t) false,
    .alternate_reference = (uint32_t) XMC_VADC_CHANNEL_REF_INTREF,
    .result_reg_number = (uint32_t) 5,
    .use_global_result = (uint32_t) 0,
    .result_alignment = (uint32_t) XMC_VADC_RESULT_ALIGN_LEFT,
    .broken_wire_detect_channel = (uint32_t) XMC_VADC_CHANNEL_BWDCH_VAGND,
    .broken_wire_detect = (uint32_t) false,
    .channel_priority = (bool) false,
    .alias_channel = (int8_t) XMC_VADC_CHANNEL_ALIAS_DISABLED,
};
const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_6_config =
{
    .input_class = (uint32_t) XMC_VADC_CHANNEL_CONV_GROUP_CLASS0,
    .lower_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .upper_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .event_gen_criteria = (uint32_t) XMC_VADC_CHANNEL_EVGEN_NEVER,
    .sync_conversion = (uint32_t) false,
    .alternate_reference = (uint32_t) XMC_VADC_CHANNEL_REF_INTREF,
    .result_reg_number = (uint32_t) 6,
    .use_global_result = (uint32_t) 0,
    .result_alignment = (uint32_t) XMC_VADC_RESULT_ALIGN_LEFT,
    .broken_wire_detect_channel = (uint32_t) XMC_VADC_CHANNEL_BWDCH_VAGND,
    .broken_wire_detect = (uint32_t) false,
    .channel_priority = (bool) false,
    .alias_channel = (int8_t) XMC_VADC_CHANNEL_ALIAS_DISABLED,
};
const XMC_VADC_CHANNEL_CONFIG_t vadc_0_group_0_ch_7_config =
{
    .input_class = (uint32_t) XMC_VADC_CHANNEL_CONV_GROUP_CLASS0,
    .lower_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .upper_boundary_select = (uint32_t) XMC_VADC_CHANNEL_BOUNDARY_GROUP_BOUND0,
    .event_gen_criteria = (uint32_t) XMC_VADC_CHANNEL_EVGEN_NEVER,
    .sync_conversion = (uint32_t) false,
    .alternate_reference = (uint32_t) XMC_VADC_CHANNEL_REF_INTREF,
    .result_reg_number = (uint32_t) 7,
    .use_global_result = (uint32_t) 0,
    .result_alignment = (uint32_t) XMC_VADC_RESULT_ALIGN_LEFT,
    .broken_wire_detect_channel = (uint32_t) XMC_VADC_CHANNEL_BWDCH_VAGND,
    .broken_wire_detect = (uint32_t) false,
    .channel_priority = (bool) false,
    .alias_channel = (int8_t) XMC_VADC_CHANNEL_ALIAS_DISABLED,
};

void init_cycfg_peripherals(void)
{
    XMC_CCU8_Init(ccu8_0_HW, XMC_CCU8_SLICE_MCMS_ACTION_TRANSFER_PR_CR);
    XMC_CCU8_StartPrescaler(ccu8_0_HW);
    /* Update group input classes configuration. */
    vadc_0_group0_init_config.class0 = vadc_0_0_iclass_0;
    vadc_0_group0_init_config.class1 = vadc_0_0_iclass_1;
    /* Global configuration. */
    XMC_VADC_GLOBAL_Init(vadc_0_HW, &vadc_0_config);
    XMC_VADC_GROUP_Init(vadc_0_group_0_HW, &vadc_0_group0_init_config);
    XMC_VADC_GROUP_SetPowerMode(vadc_0_group_0_HW, (XMC_VADC_GROUP_POWERMODE_t) XMC_VADC_GROUP_POWERMODE_NORMAL);
    XMC_VADC_GLOBAL_DisablePostCalibration(vadc_0_HW, 0U);
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
    /* Request source initializations. */
    XMC_VADC_GROUP_QueueSetGatingMode(vadc_0_group_0_HW, (XMC_VADC_GATEMODE_t) XMC_VADC_GATEMODE_BLOCK);
    XMC_VADC_GROUP_QueueSetReqSrcEventInterruptNode(vadc_0_group_0_HW, (XMC_VADC_SR_t) XMC_VADC_SR_GROUP_SR0);
    XMC_VADC_GROUP_QueueSetReqSrcEventInterruptNode(vadc_0_group_0_HW, (XMC_VADC_SR_t) XMC_VADC_SR_GROUP_SR1);
    XMC_VADC_GROUP_QueueSetReqSrcEventInterruptNode(vadc_0_group_0_HW, (XMC_VADC_SR_t) XMC_VADC_SR_GROUP_SR2);
    XMC_VADC_GROUP_QueueSetReqSrcEventInterruptNode(vadc_0_group_0_HW, (XMC_VADC_SR_t) XMC_VADC_SR_GROUP_SR3);
    XMC_VADC_GROUP_QueueDisableArbitrationSlot(vadc_0_group_0_HW);
    XMC_VADC_GROUP_QueueInit(vadc_0_group_0_HW, &vadc_0_group_0_queue_config);
    
    /* RESULT init. */
    XMC_VADC_GROUP_ResultInit(vadc_0_group_0_HW, (uint32_t)3, &vadc_0_group_0_result_3_config);
    XMC_VADC_GROUP_ResultInit(vadc_0_group_0_HW, (uint32_t)4, &vadc_0_group_0_result_4_config);
    XMC_VADC_GROUP_ResultInit(vadc_0_group_0_HW, (uint32_t)5, &vadc_0_group_0_result_5_config);
    XMC_VADC_GROUP_ResultInit(vadc_0_group_0_HW, (uint32_t)6, &vadc_0_group_0_result_6_config);
    XMC_VADC_GROUP_ResultInit(vadc_0_group_0_HW, (uint32_t)7, &vadc_0_group_0_result_7_config);
    
    /* Insert channels into the background request sources. */
    XMC_VADC_GROUP_QueueInsertChannel(vadc_0_group_0_HW, vadc_0_group_0_queue_entries_3);
    XMC_VADC_GROUP_QueueInsertChannel(vadc_0_group_0_HW, vadc_0_group_0_queue_entries_4);
    XMC_VADC_GROUP_QueueInsertChannel(vadc_0_group_0_HW, vadc_0_group_0_queue_entries_5);
    XMC_VADC_GROUP_QueueInsertChannel(vadc_0_group_0_HW, vadc_0_group_0_queue_entries_6);
    XMC_VADC_GROUP_QueueInsertChannel(vadc_0_group_0_HW, vadc_0_group_0_queue_entries_7);
    /* Channel init. */
    XMC_VADC_GROUP_ChannelInit(vadc_0_group_0_HW, (uint32_t)3, &vadc_0_group_0_ch_3_config);
    /* Channel init. */
    XMC_VADC_GROUP_ChannelInit(vadc_0_group_0_HW, (uint32_t)4, &vadc_0_group_0_ch_4_config);
    /* Channel init. */
    XMC_VADC_GROUP_ChannelInit(vadc_0_group_0_HW, (uint32_t)5, &vadc_0_group_0_ch_5_config);
    /* Channel init. */
    XMC_VADC_GROUP_ChannelInit(vadc_0_group_0_HW, (uint32_t)6, &vadc_0_group_0_ch_6_config);
    /* Channel init. */
    XMC_VADC_GROUP_ChannelInit(vadc_0_group_0_HW, (uint32_t)7, &vadc_0_group_0_ch_7_config);
}
