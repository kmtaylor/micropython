/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_STM32F2XX_HAL_CONF_BASE_H
#define MICROPY_INCLUDED_STM32F2XX_HAL_CONF_BASE_H

// Enable various HAL modules
#define HAL_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_CRC_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_PCD_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_RTC_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_WWDG_MODULE_ENABLED

// Oscillator values in Hz
#define HSE_VALUE   (8000000)
#define HSI_VALUE   (16000000)
#define HSI48_VALUE (48000000)
#define LSI_VALUE   (37000)
#define LSE_VALUE   (32768)
#define MSI_VALUE   (2097000)

// Oscillator timeouts in ms
#define HSE_STARTUP_TIMEOUT   (100)
#define LSE_STARTUP_TIMEOUT   (5000)

// SysTick has the highest priority
#define TICK_INT_PRIORITY           (0x00)

// Miscellaneous HAL settings
#define DATA_CACHE_ENABLE           1
#define INSTRUCTION_CACHE_ENABLE    1
#define PREFETCH_ENABLE             1
#define USE_SPI_CRC                 0
#define USE_RTOS                    0

// Include various HAL modules for convenience
#include "stm32f2xx_hal_rcc.h"
#include "stm32f2xx_hal_gpio.h"
#include "stm32f2xx_hal_dma.h"
#include "stm32f2xx_hal_cortex.h"
#include "stm32f2xx_hal_adc.h"
#include "stm32f2xx_hal_crc.h"
#include "stm32f2xx_hal_dac.h"
#include "stm32f2xx_hal_flash.h"
#include "stm32f2xx_hal_i2c.h"
#include "stm32f2xx_hal_iwdg.h"
#include "stm32f2xx_hal_pcd.h"
#include "stm32f2xx_hal_pwr.h"
#include "stm32f2xx_hal_rtc.h"
#include "stm32f2xx_hal_spi.h"
#include "stm32f2xx_hal_tim.h"
#include "stm32f2xx_hal_uart.h"
#include "stm32f2xx_hal_usart.h"
#include "stm32f2xx_hal_wwdg.h"
#include "stm32f2xx_hal_exti.h"
#include "stm32f2xx_ll_adc.h"
#include "stm32f2xx_ll_pwr.h"
#include "stm32f2xx_ll_rtc.h"
#include "stm32f2xx_ll_usart.h"

// HAL parameter assertions are disabled
#define assert_param(expr) ((void)0)

#endif // MICROPY_INCLUDED_STM32F2XX_HAL_CONF_BASE_H
