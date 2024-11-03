MCU_SERIES = f2
CMSIS_MCU = STM32F207xx
AF_FILE = boards/NVUM/stm32f207_af.csv
LD_FILES = boards/NVUM/stm32f207.ld boards/common_ifs.ld

# MicroPython settings
MICROPY_VFS_FAT = 0
MICROPY_VFS_LFS1 = 1
MICROPY_VFS_LFS2 = 0
MICROPY_HW_ENABLE_ISR_UART_FLASH_FUNCS_IN_RAM = 1

# Don't include default frozen modules because MCU is tight on flash space
FROZEN_MANIFEST ?=

# LTO reduces final binary size, may be slower to build depending on gcc version and hardware
LTO ?= 1
