//
// Created by jesang on 8/3/26.
//

#include <stdio.h>
#include "cpu.h"
#include "memory.h"

int main() {
    CPU cpu;
    cpu_init(&cpu);
    cpu_print_registers(&cpu);
}