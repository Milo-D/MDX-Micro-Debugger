/* Standard Output Messages */

#ifndef STDMSG_H
#define STDMSG_H

// C Headers
#include <inttypes.h>

#define INIT_SUCCESS "(mdx) DebugWindow successfully initialized.\n"
#define ILLEGAL_OPC "(mdx) Warning: Executing illegal opcode.\n"

#define JUMP_START "(mdx) Jumping to next Breakpoint...\n"
#define BREAK_REACHED "(mdx) <--- Breakpoint reached --->\n"
#define DELAY_ERR "(mdx) Invalid delay. Usage: jb <delay in ms>\n"

#define CYCLE_JUMP_START "(mdx) Jumping to desired Cycle...\n"
#define CYCLE_REACHED "(mdx) <--- Cycle reached --->\n"
#define CYCLE_ERR "(mdx) Invalid cycle. Usage: jc <cycle offset>\n"

#define CYCLE_ERR_JCB "(mdx) Invalid cycle. Usage: jcb <cycle offset>\n"

#define MEM_CELL_ERR "(mdx) Illegal memory cell.\n"
#define MEM_RANGE_ERR "(mdx) Literal length must be > 0.\n"
#define EEP_DECODE_ERR "(mdx) Could not decode EEPROM Hex File.\n"

#define NOT_AVAIL "(mdx) This command is currently unavailable.\n"

#define CC_FAILURE "(mdx) Could not create comment. Invalid address.\n"
#define CC_SUCCESS "(mdx) Successfully created comment.\n"
#define CC_TOO_LONG "(mdx) Could not create comment. Comment length must be < 32.\n"


extern char* sim_start(const char *file);

extern char* val_of(const char *cell, const char *value);
extern char* bit_val_of(const char *cell, const char *value);
extern char* val_of_eep(const char *addr, const char *range, const char *value);
extern char* val_of_data(const char *addr, const char *range, const char *value);

extern char* bp_set_success(const char *addr);
extern char* bp_set_failure(const char *addr);

extern char* bp_del_success(const char *addr);
extern char* bp_del_failure(const char *addr);

extern char* eep_success(const char *file);
extern char* file_err(const char *file);

extern char* get_cycles(const uint64_t cycles);
extern char* get_clock(const uint32_t clock);
extern char* get_time(const double time);

#endif
