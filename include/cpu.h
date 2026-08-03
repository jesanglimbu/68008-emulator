#ifndef _CPU_H_
#define _CPU_H_

#include "memory.h"

#define NUM_DATA_REGS 8
#define NUM_ADDR_REGS 8

typedef struct {
    uint32_t data_reg[NUM_DATA_REGS];
    uint32_t addr_reg[NUM_ADDR_REGS];

    uint16_t ccr;
    uint16_t alu;

    uint32_t pc;
    uint32_t mar;
    uint32_t mdr;
    uint32_t ir;
} CPU;

void cpu_init(CPU *cpu);

void cpu_print_registers(CPU *cpu);

#endif
