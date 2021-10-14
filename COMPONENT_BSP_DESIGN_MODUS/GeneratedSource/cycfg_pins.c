/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5721
* mtb-pdl-cat2 1.4.0.5338
* personalities 5.0.0.0
* udd 3.0.0.1428
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation (an Infineon company) or
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
********************************************************************************/

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t CYBSP_CSD_ROW0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_ROW0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_ROW0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_ROW0_PORT_NUM,
        .channel_num = CYBSP_CSD_ROW0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_BTN1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_BTN1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_BTN1_PORT_NUM,
        .channel_num = CYBSP_CSD_BTN1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_BTN2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_BTN2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_BTN2_PORT_NUM,
        .channel_num = CYBSP_CSD_BTN2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_COL5_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_COL5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_COL5_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_COL5_PORT_NUM,
        .channel_num = CYBSP_CSD_COL5_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_COL6_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_COL6_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_COL6_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_COL6_PORT_NUM,
        .channel_num = CYBSP_CSD_COL6_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_ROW2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_CSD_ROW2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_ROW2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_ROW2_PORT_NUM,
        .channel_num = CYBSP_CSD_ROW2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_ROW3_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_CSD_ROW3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_ROW3_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_ROW3_PORT_NUM,
        .channel_num = CYBSP_CSD_ROW3_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_ROW4_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_ROW4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_ROW4_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_ROW4_PORT_NUM,
        .channel_num = CYBSP_CSD_ROW4_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_ROW5_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_ROW5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_ROW5_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_ROW5_PORT_NUM,
        .channel_num = CYBSP_CSD_ROW5_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_ROW6_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_ROW6_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_ROW6_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_ROW6_PORT_NUM,
        .channel_num = CYBSP_CSD_ROW6_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_ROW1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_ROW1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_ROW1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_ROW1_PORT_NUM,
        .channel_num = CYBSP_CSD_ROW1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_PROX_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_PROX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_PROX_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_PROX_PORT_NUM,
        .channel_num = CYBSP_CSD_PROX_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_COL0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_COL0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_COL0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_COL0_PORT_NUM,
        .channel_num = CYBSP_CSD_COL0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_COL1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_COL1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_COL1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_COL1_PORT_NUM,
        .channel_num = CYBSP_CSD_COL1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_COL2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_COL2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_COL2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_COL2_PORT_NUM,
        .channel_num = CYBSP_CSD_COL2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_COL3_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_COL3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_COL3_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_COL3_PORT_NUM,
        .channel_num = CYBSP_CSD_COL3_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_COL4_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_COL4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_COL4_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_COL4_PORT_NUM,
        .channel_num = CYBSP_CSD_COL4_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDIO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDIO_PORT_NUM,
        .channel_num = CYBSP_SWDIO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDCK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDCK_PORT_NUM,
        .channel_num = CYBSP_SWDCK_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN_TX_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSD_BTN_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSD_BTN_TX_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSD_BTN_TX_PORT_NUM,
        .channel_num = CYBSP_CSD_BTN_TX_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CMOD_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CMOD_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CMOD_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CMOD_PORT_NUM,
        .channel_num = CYBSP_CMOD_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CINTA_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CINTA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CINTA_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CINTA_PORT_NUM,
        .channel_num = CYBSP_CINTA_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CINTB_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CINTB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CINTB_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CINTB_PORT_NUM,
        .channel_num = CYBSP_CINTB_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_ROW0_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_BTN1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_BTN2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_COL5_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_COL6_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_ROW2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_ROW3_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_ROW4_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_ROW5_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_ROW6_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_ROW1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_PROX_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_COL0_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_COL1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_COL2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_COL3_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_COL4_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSD_BTN_TX_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CMOD_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CINTA_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CINTB_obj);
#endif //defined (CY_USING_HAL)
}
