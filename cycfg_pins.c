/*******************************************************************************
 * File Name: cycfg_pins.c
 *
 * Description:
 * Pin configuration
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

#include "cycfg_pins.h"

const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_0_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_0_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_1_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_1_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_2_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_2_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_3_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_3_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_4_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_4_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t ioss_0_port_0_pin_5_config =
{
    .mode = (XMC_GPIO_MODE_t)ioss_0_port_0_pin_5_MODE,
    .output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};

void init_cycfg_pins(void)
{
    XMC_GPIO_Init(ioss_0_port_0_pin_0_PORT, ioss_0_port_0_pin_0_PIN, &ioss_0_port_0_pin_0_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_0_PORT, ioss_0_port_0_pin_0_PIN, ioss_0_port_0_pin_0_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_1_PORT, ioss_0_port_0_pin_1_PIN, &ioss_0_port_0_pin_1_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_1_PORT, ioss_0_port_0_pin_1_PIN, ioss_0_port_0_pin_1_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_2_PORT, ioss_0_port_0_pin_2_PIN, &ioss_0_port_0_pin_2_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_2_PORT, ioss_0_port_0_pin_2_PIN, ioss_0_port_0_pin_2_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_3_PORT, ioss_0_port_0_pin_3_PIN, &ioss_0_port_0_pin_3_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_3_PORT, ioss_0_port_0_pin_3_PIN, ioss_0_port_0_pin_3_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_4_PORT, ioss_0_port_0_pin_4_PIN, &ioss_0_port_0_pin_4_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_4_PORT, ioss_0_port_0_pin_4_PIN, ioss_0_port_0_pin_4_HWO);
    XMC_GPIO_Init(ioss_0_port_0_pin_5_PORT, ioss_0_port_0_pin_5_PIN, &ioss_0_port_0_pin_5_config);
    XMC_GPIO_SetHardwareControl(ioss_0_port_0_pin_5_PORT, ioss_0_port_0_pin_5_PIN, ioss_0_port_0_pin_5_HWO);
}
