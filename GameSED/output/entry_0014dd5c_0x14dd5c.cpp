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

// Function: entry_0014dd5c
// Address: 0x14dd5c - 0x14dd70
void entry_0014dd5c_0x14dd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dd5c_0x14dd5c");
#endif

    ctx->pc = 0x14dd5cu;

    // 0x14dd5c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DD5Cu;
    {
        const bool branch_taken_0x14dd5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD5Cu;
        // 0x14dd60: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd5c) {
            ctx->pc = 0x14DD70u;
            return;
        }
    }
    ctx->pc = 0x14DD64u;
    // 0x14dd64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14DD64u;
    {
        const bool branch_taken_0x14dd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD64u;
        // 0x14dd68: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd64) {
            ctx->pc = 0x14DDA0u;
            return;
        }
    }
    ctx->pc = 0x14DD6Cu;
    // 0x14dd6c: 0x0  nop
    ctx->pc = 0x14dd6cu;
    // NOP
    ctx->pc = 0x14dd70u;
}
