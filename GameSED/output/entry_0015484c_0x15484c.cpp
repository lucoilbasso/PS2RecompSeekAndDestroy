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

// Function: entry_0015484c
// Address: 0x15484c - 0x154870
void entry_0015484c_0x15484c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015484c_0x15484c");
#endif

    switch (ctx->pc) {
        case 0x154854u: goto label_154854;
        default: break;
    }

    ctx->pc = 0x15484cu;

    // 0x15484c: 0xc04171a  jal         func_105C68
    ctx->pc = 0x15484Cu;
    SET_GPR_U32(ctx, 31, 0x154854u);
    ctx->pc = 0x154850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15484Cu;
    // 0x154850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x15484Cu, 0x154854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154854u;
label_154854:
    // 0x154854: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x154854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x154858: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154858u;
    {
        const bool branch_taken_0x154858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154858u;
        // 0x15485c: 0x24646d58  addiu       $a0, $v1, 0x6D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154858) {
            ctx->pc = 0x154870u;
            return;
        }
    }
    ctx->pc = 0x154860u;
    // 0x154860: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x154864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154864u;
    {
        const bool branch_taken_0x154864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154864u;
        // 0x154868: 0x2446d390  addiu       $a2, $v0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154864) {
            ctx->pc = 0x154878u;
            return;
        }
    }
    ctx->pc = 0x15486Cu;
    // 0x15486c: 0x0  nop
    ctx->pc = 0x15486cu;
    // NOP
    ctx->pc = 0x154870u;
}
