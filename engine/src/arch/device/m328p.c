/* ATmega328P Device Loader Implementation */

// Project Headers (engine utilites)
#include "engine/include/arch/device/m328p.h"
#include "engine/include/arch/enum/device.h"
#include "engine/include/arch/enum/device_core.h"
#include "engine/include/arch/enum/sfregister.h"
#include "engine/include/arch/model.h"

/* Forward Declaration of ATmega328P specific fields */

VMCU_SFREGISTER m328p_sfr_layout[167];
VMCU_VECT m328p_vtable_layout[26];

/* --- Extern --- */

void load_device_m328p(vmcu_model_t *model) {

    /* <----------------- GENERAL -----------------> */

    model->device                  = VMCU_M328P;
    model->core                    = VMCU_AVRep;

    /* <------------------ FLASH ------------------> */

    model->flash.size              = 0x4000;
    model->flash.start             = 0x0000;
    model->flash.end               = 0x3fff;

    /* <----------------- EEPROM ------------------> */

    model->eeprom.size             = 0x0400;
    model->eeprom.start            = 0x0000;
    model->eeprom.end              = 0x03ff;

    /* <------------------- DS --------------------> */

    model->ds.size                 = 0x0900;

    model->ds.registers.size       = 0x20;
    model->ds.registers.start      = 0x0000;
    model->ds.registers.end        = 0x001f;

    model->ds.internal_io.size     = 0x40;
    model->ds.internal_io.start    = 0x0020;
    model->ds.internal_io.end      = 0x5f;

    model->ds.external_io.size     = 0xa0;
    model->ds.external_io.start    = 0x0060;
    model->ds.external_io.end      = 0x00ff;

    model->ds.sram.size            = 0x0800;
    model->ds.sram.start           = 0x0100;
    model->ds.sram.end             = 0x08ff;

    /* <------------------ SFR --------------------> */

    model->sfr.section.size        = 0xa7;
    model->sfr.section.start       = 0x0020;
    model->sfr.section.end         = 0x00c6;

    model->sfr.layout              = m328p_sfr_layout;

    /* <-------------- Vectortable ----------------> */

    model->vtable.n_vect           = 26;

    model->vtable.dfl.size         = 0x33;
    model->vtable.dfl.start        = 0x0000;
    model->vtable.dfl.end          = 0x0032;

    model->vtable.layout           = m328p_vtable_layout;
    model->vtable.vector_32bit     = true;
}

/* --- ATmega328P specific fields --- */

VMCU_SFREGISTER m328p_sfr_layout[167] = {

    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_PINB,
    VMCU_DDRB,
    VMCU_PORTB,
    VMCU_PINC,
    VMCU_DDRC,
    VMCU_PORTC,
    VMCU_PIND,
    VMCU_DDRD,
    VMCU_PORTD,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_TIFR0,
    VMCU_TIFR1,
    VMCU_TIFR2,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_PCIFR,
    VMCU_EIFR,
    VMCU_EIMSK,
    VMCU_GPIOR0,
    VMCU_EECR,
    VMCU_EEDR,
    VMCU_EEARL,
    VMCU_EEARH,
    VMCU_GTCCR,
    VMCU_TCCR0A,
    VMCU_TCCR0B,
    VMCU_TCNT0,
    VMCU_OCR0A,
    VMCU_OCR0B,
    VMCU_RESERVED,
    VMCU_GPIOR1,
    VMCU_GPIOR2,
    VMCU_SPCR0,
    VMCU_SPSR0,
    VMCU_SPDR0,
    VMCU_RESERVED,
    VMCU_ACSR,
    VMCU_DWDR,
    VMCU_RESERVED,
    VMCU_SMCR,
    VMCU_MCUSR,
    VMCU_MCUCR,
    VMCU_RESERVED,
    VMCU_SPMCSR,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_SPL,
    VMCU_SPH,
    VMCU_SREG,
    VMCU_WDTCSR,
    VMCU_CLKPR,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_PRR,
    VMCU_RESERVED,
    VMCU_OSCCAL,
    VMCU_RESERVED,
    VMCU_PCICR,
    VMCU_EICRA,
    VMCU_RESERVED,
    VMCU_PCMSK0,
    VMCU_PCMSK1,
    VMCU_PCMSK2,
    VMCU_TIMSK0,
    VMCU_TIMSK1,
    VMCU_TIMSK2,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_ADCL,
    VMCU_ADCH,
    VMCU_ADCSRA,
    VMCU_ADCSRB,
    VMCU_ADMUX,
    VMCU_RESERVED,
    VMCU_DIDR0,
    VMCU_DIDR1,
    VMCU_TCCR1A,
    VMCU_TCCR1B,
    VMCU_TCCR1C,
    VMCU_RESERVED,
    VMCU_TCNT1L,
    VMCU_TCNT1H,
    VMCU_ICR1L,
    VMCU_ICR1H,
    VMCU_OCR1AL,
    VMCU_OCR1AH,
    VMCU_OCR1BL,
    VMCU_OCR1BH,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_TCCR2A,
    VMCU_TCCR2B,
    VMCU_TCNT2,
    VMCU_OCR2A,
    VMCU_OCR2B,
    VMCU_RESERVED,
    VMCU_ASSR,
    VMCU_RESERVED,
    VMCU_TWBR,
    VMCU_TWSR,
    VMCU_TWAR,
    VMCU_TWDR,
    VMCU_TWCR,
    VMCU_TWAMR,
    VMCU_RESERVED,
    VMCU_RESERVED,
    VMCU_UCSR0A,
    VMCU_UCSR0B,
    VMCU_UCSR0C,
    VMCU_RESERVED,
    VMCU_UBRR0L,
    VMCU_UBRR0H,
    VMCU_UDR0
};

VMCU_VECT m328p_vtable_layout[26] = {

    VMCU_VECT_RESET,
    VMCU_VECT_INT0,
    VMCU_VECT_INT1,
    VMCU_VECT_PCINT0,
    VMCU_VECT_PCINT1,
    VMCU_VECT_PCINT2,
    VMCU_VECT_WDT,
    VMCU_VECT_TIMER2_COMPA,
    VMCU_VECT_TIMER2_COMPB,
    VMCU_VECT_TIMER2_OVF,
    VMCU_VECT_TIMER1_CAPT,
    VMCU_VECT_TIMER1_COMPA,
    VMCU_VECT_TIMER1_COMPB,
    VMCU_VECT_TIMER1_OVF,
    VMCU_VECT_TIMER0_COMPA,
    VMCU_VECT_TIMER0_COMPB,
    VMCU_VECT_TIMER0_OVF,
    VMCU_VECT_SPI_STC,
    VMCU_VECT_USART_RX,
    VMCU_VECT_USART_UDRE,
    VMCU_VECT_USART_TX,
    VMCU_VECT_ADC,
    VMCU_VECT_EE_READY,
    VMCU_VECT_ANALOG_COMP,
    VMCU_VECT_TWI,
    VMCU_VECT_SPM_READY
};