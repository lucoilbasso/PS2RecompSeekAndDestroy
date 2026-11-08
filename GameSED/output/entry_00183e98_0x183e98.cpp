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

// Function: entry_00183e98
// Address: 0x183e98 - 0x183eb0
void entry_00183e98_0x183e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183e98_0x183e98");
#endif

    ctx->pc = 0x183e98u;

    // 0x183e98: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x183e9c: 0x1085000a  beq         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x183E9Cu;
    {
        const bool branch_taken_0x183e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x183EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E9Cu;
        // 0x183ea0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e9c) {
            ctx->pc = 0x183EC8u;
            return;
        }
    }
    ctx->pc = 0x183EA4u;
    // 0x183ea4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183ea8: 0x10890007  beq         $a0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x183EA8u;
    {
        const bool branch_taken_0x183ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x183EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EA8u;
        // 0x183eac: 0xc8182a  slt         $v1, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ea8) {
            ctx->pc = 0x183EC8u;
            return;
        }
    }
    ctx->pc = 0x183EB0u;
}
