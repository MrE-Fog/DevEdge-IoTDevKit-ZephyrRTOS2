/*
 * Copyright (c) 2022 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_STM32G0_CLOCK_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_STM32G0_CLOCK_H_

/** Peripheral clock sources */

/** Bus clocks */
#define STM32_CLOCK_BUS_IOP     0x034
#define STM32_CLOCK_BUS_AHB1    0x038
#define STM32_CLOCK_BUS_APB2    0x03c
#define STM32_CLOCK_BUS_APB1    0x040

#define STM32_PERIPH_BUS_MIN	STM32_CLOCK_BUS_IOP
#define STM32_PERIPH_BUS_MAX	STM32_CLOCK_BUS_APB1

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_STM32G0_CLOCK_H_ */
