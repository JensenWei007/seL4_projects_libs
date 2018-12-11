/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
#pragma once

#include <sel4/sel4.h>

#define SPSR_EL1 0x5
#define seL4_UnknownSyscall_ARG0 seL4_UnknownSyscall_X0

static inline void sel4arch_set_bootargs(seL4_UserContext *regs, seL4_Word pc,
                                        seL4_Word mach_type, seL4_Word atags)
{
    regs->x0 = atags;
    regs->pc = pc;
    regs->spsr = SPSR_EL1;
}

