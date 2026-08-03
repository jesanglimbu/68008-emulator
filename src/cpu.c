#include "cpu.h"
#include <stdio.h>

void cpu_init(CPU *cpu) {
	cpu->ccr = 0;
	cpu->ir = 0;
	cpu->mar = 0;
	cpu->mdr = 0;
	cpu->pc = 0;
	cpu->alu = 0;

	for (int i = 0; i < NUM_DATA_REGS; i++) {
		cpu->data_reg[i] = 0;
	}

	for (int i = 0; i < NUM_ADDR_REGS; i++) {
		cpu->addr_reg[i] = 0;
	}
}

void cpu_print_registers(CPU *cpu) {
	printf("PC: %x\n", cpu->pc);
	printf("MAR: %x\n", cpu->mar);
	printf("MDR: %x\n", cpu->mdr);
	printf("IR: %x\n", cpu->ir);
	printf("CCR: %x\n", cpu->ccr);
	printf("------------------\n");
	printf("Data registers\n");
	for (int i = 0; i < NUM_DATA_REGS; i++) {
		printf("D%x %x\n", i, cpu->data_reg[i]);
	}
	printf("-------------\n");
	printf("Address registers\n");
	for (int i = 0; i < NUM_ADDR_REGS; i++) {
		printf("A%x %x\n", i, cpu->addr_reg[i]);
	}
}