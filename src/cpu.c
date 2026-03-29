#include "cpu.h"

struct cpu {
	uint32_t data_reg[NUM_DATA_REGS];
	uint32_t addr_reg[NUM_ADDR_REGS];

	uint32_t pc;
	uint32_t mar;
	uint32_t mdr;

	uint16_t ir;
	uint16_t ccr;
};
