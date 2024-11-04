#define MICROPY_HW_BOARD_NAME       "NVUM"
#define MICROPY_HW_MCU_NAME         "STM32F207V"

#define MICROPY_QSTR_BYTES_IN_HASH  (0)

#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_ENABLE_RTC       (0)
// This board has an external 32kHz crystal
#define MICROPY_HW_RTC_USE_LSE      (0)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_ADC       (0)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_HAS_FLASH        (1)

#define MICROPY_PY_BUILTINS_COMPLEX (0)
#define MICROPY_PY_SOCKET           (0)
#define MICROPY_PY_NETWORK          (0)
#define MICROPY_PY_STM              (0)
#define MICROPY_PY_PYB_LEGACY       (0)
#define MICROPY_PY_HEAPQ            (0)
#define MICROPY_PY_FRAMEBUF         (0)
#define MICROPY_PY_PYB              (0)

// HSE is 8MHz, HSI is 16MHz CPU freq set to 32MHz
// Default source for the clock is HSI.
// For revisions of the board greater than C-01, HSE can be used as a
// clock source by removing the #define MICROPY_HW_CLK_USE_HSE line
#define MICROPY_HW_CLK_USE_HSI (1)

#define MICROPY_HW_CLK_PLLM (13)
#define MICROPY_HW_CLK_PLLN (195)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (5)

#define MICROPY_HW_FLASH_LATENCY FLASH_LATENCY_3

// USB config
#if MICROPY_HW_ENABLE_USB
#define MICROPY_HW_USB_FS (1)
#endif

#define MICROPY_BOARD_EARLY_INIT    nvum_early_init
void nvum_early_init(void);
