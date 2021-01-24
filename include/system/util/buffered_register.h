/* Double Buffered Register Header */

#ifndef BUFFERED_REGISTER_H
#define BUFFERED_REGISTER_H

// C Headers
#include <inttypes.h>

/*
 * This structure implements a double-buffered register,
 * commonly used in Timers.
 *
 * If a register is double-buffered, following steps
 * are mandatory:
 *
 * 1.) Declare an instance of buffered_register_t
 *
 * ex.      buffered_register_t buffered_ocr;
 *
 * 2.) Initialize buffered_register_t with an address
 * to the actual register, a comparison register and
 * its update condition.
 *
 * ex.      buffered_register_t buffered_ocr;
 *
 *          buffered_ocr.reg = &ocr0a;
 *          buffered_ocr.cmp_with = &tcnt0;
 *          buffered_ocr.condition = TOP;
 *
 * 3.) Any further write access to the actual register
 * should use the buffered_register_write() function instead.
 * This functions writes the value to register's buffer.
 *
 * ex.      void timer8_write_ocr(timer8_t *this, const int8_t value) {
 *
 *              if(NON_PWM_MODE) {
 *
 *                  this->ocr = value;
 *                  return;
 *              }
 *
 *              buffered_register_write(&buffered_ocr, value);
 *          }
 *
 * 4.) The buffered_register_update() function writes its
 * buffer to the actual register if a certain condition
 * (buffered_register.condition) is met.
 *
 * ex.      void timer8_tick_fast_pwm(timer8_t *this, irq_t *irq) {
 *
 *              [...]
 *              buffered_register_update(&buffered_ocr);
 *              [...]
 *          }
 *
 * */

enum { REGISTER_WRITTEN, REGISTER_NOT_WRITTEN };

typedef struct _buffered_register {

    int8_t *reg;            /* Actual Register */
    int8_t buffer;          /* Double Buffer of actual Register */

    int8_t *cmp_with;       /* Comparison Register */
    int8_t condition;       /* Update Condition */

} buffered_register_t;

extern void buffered_register_write(struct _buffered_register *this, const int8_t value);
extern int buffered_register_update(struct _buffered_register *this);

#endif