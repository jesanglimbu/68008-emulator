#ifndef _MEMORY_H_
#define _MEMORY_H_

#include <stdint.h>

#define MEMORY_SIZE (1 << 20)

typedef struct memory memory_t;

void memory_init(memory_t *mem);

uint8_t memory_read_byte(memory_t *mem, uint32_t addr);
void memory_write_byte(memory_t *mem, uint32_t addr, uint8_t buf);

uint16_t memory_read_word(memory_t *mem, uint32_t addr);
void memory_write_word(memory_t *mem, uint32_t addr, uint8_t buf);

uint32_t memory_read_long(memory_t *mem, uint32_t addr);
void memory_write_long(memory_t *mem, uint32_t addr, uint8_t buf);

#endif
