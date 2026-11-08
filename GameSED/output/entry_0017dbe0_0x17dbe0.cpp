#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017dbe0
// Address: 0x17dbe0 - 0x17dc30
void entry_0017dbe0_0x17dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dbe0_0x17dbe0");
#endif

    ctx->pc = 0x17dbe0u;

    // 0x17dbe0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17dbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17dbe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17dbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbe8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17dbec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17dbf0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17dbf4: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x17dbf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17dbf8: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x17dbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17dbfc: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x17dbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17dc00: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x17dc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dc04: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x17dc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dc08: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DC08u;
    {
        const bool branch_taken_0x17dc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC08u;
        // 0x17dc0c: 0x8e110024  lw          $s1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc08) {
            ctx->pc = 0x17DC30u;
            return;
        }
    }
    ctx->pc = 0x17DC10u;
    // 0x17dc10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17dc14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dc18: 0xa7a20014  sh          $v0, 0x14($sp)
    ctx->pc = 0x17dc18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dc1c: 0xa7a30016  sh          $v1, 0x16($sp)
    ctx->pc = 0x17dc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dc20: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x17dc20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dc24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17DC24u;
    {
        const bool branch_taken_0x17dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC24u;
        // 0x17dc28: 0xa7a00012  sh          $zero, 0x12($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc24) {
            ctx->pc = 0x17DC40u;
            return;
        }
    }
    ctx->pc = 0x17DC2Cu;
    // 0x17dc2c: 0x0  nop
    ctx->pc = 0x17dc2cu;
    // NOP
    ctx->pc = 0x17dc30u;
}
