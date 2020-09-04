/* MCU specific Defintion Header */

#ifndef MCUDEF_H
#define MCUDEF_H

#ifdef ATMEGA32

    #define SYSTEM "ATmega32"

    #define CLOCK 1000000u

    #define GPR_SIZE 32
    #define SREG_SIZE 8
    #define SFR_SIZE 64
    #define SRAM_SIZE 2048
    #define EEPROM_SIZE 1024
    #define FLASH_SIZE 16384    /* 16384 x 16-bit */
    #define SRAM_START 0x0060
    #define RAM_END 0x085f

    #define SPL 0x005d          /* using absolute SFR address */
    #define SPH 0x005e

    #define PC_BIT 16

    #define IF 7
    #define TF 6
    #define HF 5
    #define SF 4
    #define VF 3
    #define NF 2
    #define ZF 1
    #define CF 0

    #define XL 26
    #define XH 27
    #define YL 28
    #define YH 29
    #define ZL 30
    #define ZH 31

    extern const char *flags[SREG_SIZE];

#endif

#ifdef ATMEGA16


#endif

#ifdef ATMEGA8


#endif

#ifdef ATTINY45

    #define SYSTEM "ATtiny45"

    #define CLOCK 1000000u

    #define GPR_SIZE 32
    #define SREG_SIZE 8
    #define SFR_SIZE 64
    #define SRAM_SIZE 256
    #define EEPROM_SIZE 256
    #define FLASH_SIZE 2048
    #define SRAM_START 0x0060
    #define RAM_END 0x015f

    #define SPL 0x005d
    #define SPH 0x005e

    #define PC_BIT 16 

    #define IF 7
    #define TF 6
    #define HF 5
    #define SF 4
    #define VF 3
    #define NF 2
    #define ZF 1
    #define CF 0

    #define XL 26
    #define XH 27
    #define YL 28
    #define YH 29
    #define ZL 30
    #define ZH 31

    extern const char *flags[SREG_SIZE];

#endif

#endif