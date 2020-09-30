/* MCU specific Defintion Header */

#ifndef MCUDEF_H
#define MCUDEF_H

#ifdef ATMEGA32

    #define SYSTEM "ATmega32"

    #define CLOCK 1000000U

    #define GPR_SIZE 32
    #define SREG_SIZE 8
    #define SFR_SIZE 64
    #define SRAM_SIZE 2048
    #define EEPROM_SIZE 1024
    #define FLASH_SIZE 16384    /* 16384 x 16-bit */

    #define SFR_START 0x0020
    #define SFR_END 0x005f

    #define SRAM_START 0x0060
    #define RAM_END 0x085f

    #define SPL 0x005d          /* using absolute SFR address */
    #define SPH 0x005e          /* using absolute SFR address */

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
    extern const char *sfreg[SFR_SIZE];

    /* Timer (General) */

    #define TIMSK 0x0039
    #define TIFR  0x0038

    #define CSX_MASK 0x07

    /* Timer0 (8-bit) */

    #define TCNT0 0x0032
    #define TCCR0 0x0033
    #define OCR0  0x003C

    #define TOV0 0
    #define OCF0 1

    /* Timer2 (8-bit) */

    #define TCNT2 0x0024
    #define TCCR2 0x0025
    #define OCR2  0x0023

    #define TOV2 6
    #define OCF2 7

    /* ISR Vector Table */

    #define NVECT 21

    #define RST_VECT  0x0000
    #define INT0_VECT 0x0002
    #define INT1_VECT 0x0004
    #define INT2_VECT 0x0006
    #define OC2_VECT  0x0008
    #define OVF2_VECT 0x000a
    #define ICP1_VECT 0x000c
    #define OC1A_VECT 0x000e
    #define OC1B_VECT 0x0010
    #define OVF1_VECT 0x0012
    #define OC0_VECT  0x0014
    #define OVF0_VECT 0x0016
    #define SPI_VECT  0x0018
    #define URXC_VECT 0x001a
    #define UDRE_VECT 0x001c
    #define UTXC_VECT 0x001e
    #define ADCC_VECT 0x0020
    #define ERDY_VECT 0x0022
    #define ACI_VECT  0x0024
    #define TWI_VECT  0x0026
    #define SPMR_VECT 0x0028

#endif

#ifdef ATMEGA16

/* currently not supported */

#endif

#ifdef ATMEGA8

/* currently not supported */

#endif

#ifdef ATTINY45

    /* Warning: experimental Architecture */

    #define SYSTEM "ATtiny45"

    #define CLOCK 1000000U

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
