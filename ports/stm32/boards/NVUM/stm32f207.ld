/*
    GNU linker script for STM32F207
*/

/* Specify the memory areas */
MEMORY
{
    FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 256K
    FLASH_START (rx): ORIGIN = 0x08000000, LENGTH = 16K     /* sector 0, 16K */
    FLASH_FS (r)    : ORIGIN = 0x08004000, LENGTH = 32K     /* sectors 1-2  16K */
    FLASH_TEXT (rx) : ORIGIN = 0x0800C000, LENGTH = 208K    /* sectors 3-5 16K + 64K + 128K = 224K */
    RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 128K
}

/* produce a link error if there is not this amount of RAM for these sections */
_minimum_stack_size = 2K;
_minimum_heap_size = 16K;

/* Define the stack.  The stack is full descending so begins just above last byte of RAM,
   or bottom of FS cache.  Note that EABI requires the stack to be 8-byte aligned for a call. */

/* RAM extents for the garbage collector */
_ram_start = ORIGIN(RAM);
_ram_end = ORIGIN(RAM) + LENGTH(RAM);

_micropy_hw_internal_flash_storage_ram_cache_end = _ram_end;
_micropy_hw_internal_flash_storage_ram_cache_start = _micropy_hw_internal_flash_storage_ram_cache_end - 16K; /* fs cache = 16K */

_estack = _micropy_hw_internal_flash_storage_ram_cache_start - _estack_reserve;
_sstack = _estack - 6K; /* tunable */

_heap_start = _ebss; /* heap starts just after statically allocated memory */
_heap_end = _sstack;

_micropy_hw_internal_flash_storage_start = ORIGIN(FLASH_FS);
_micropy_hw_internal_flash_storage_end   = ORIGIN(FLASH_FS) + LENGTH(FLASH_FS);
