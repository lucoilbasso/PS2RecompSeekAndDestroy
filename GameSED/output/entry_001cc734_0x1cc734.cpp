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

// Function: entry_001cc734
// Address: 0x1cc734 - 0x1cc760
void entry_001cc734_0x1cc734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc734_0x1cc734");
#endif

    ctx->pc = 0x1cc734u;

    // 0x1cc734: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1cc734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc738: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x1cc738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x1cc73c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1cc73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1cc740: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC740u;
    {
        const bool branch_taken_0x1cc740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC740u;
        // 0x1cc744: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc740) {
            ctx->pc = 0x1CC760u;
            return;
        }
    }
    ctx->pc = 0x1CC748u;
    // 0x1cc748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc74c: 0x1620003e  bnez        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CC74Cu;
    {
        const bool branch_taken_0x1cc74c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC74Cu;
        // 0x1cc750: 0x90800a  movz        $s0, $a0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc74c) {
            ctx->pc = 0x1CC848u;
            return;
        }
    }
    ctx->pc = 0x1CC754u;
    // 0x1cc754: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1CC754u;
    {
        const bool branch_taken_0x1cc754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC754u;
        // 0x1cc758: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc754) {
            ctx->pc = 0x1CC848u;
            return;
        }
    }
    ctx->pc = 0x1CC75Cu;
    // 0x1cc75c: 0x0  nop
    ctx->pc = 0x1cc75cu;
    // NOP
    ctx->pc = 0x1cc760u;
}
