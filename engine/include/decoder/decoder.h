/* Instruction Decoder Header */

#ifndef VMCU_DECODER_H
#define VMCU_DECODER_H

// C Headers
#include <stdbool.h>
#include <inttypes.h>

typedef struct vmcu_plain vmcu_plain_t;
typedef struct vmcu_model vmcu_model_t;


extern int vmcu_decode_bytes(const uint32_t bytes, vmcu_plain_t *p, vmcu_model_t *mcu);
extern vmcu_plain_t* vmcu_decode_ihex(const char *hex_file, int32_t *size, vmcu_model_t *mcu);

#endif