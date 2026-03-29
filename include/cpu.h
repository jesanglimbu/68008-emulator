#ifndef _CPU_H
#define _CPU_H_

#include "memory.h"
#include <stdint.h>

#define NUM_DATA_REGS 8
#define NUM_ADDR_REGS 8

typedef struct cpu cpu_t;

void cpu_init(cpu_t *cpu);

void cpu_run(cpu_t *cpu);

#endif
