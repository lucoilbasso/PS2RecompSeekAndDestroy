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

// Function: entry_0013c83c
// Address: 0x13c83c - 0x13c864
void entry_0013c83c_0x13c83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c83c_0x13c83c");
#endif

    switch (ctx->pc) {
        case 0x13c854u: goto label_13c854;
        default: break;
    }

    ctx->pc = 0x13c83cu;

    // 0x13c83c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C83Cu;
    {
        const bool branch_taken_0x13c83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c83c) {
            ctx->pc = 0x13C864u;
            return;
        }
    }
    ctx->pc = 0x13C844u;
    // 0x13c844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c84c: 0xc04fb04  jal         func_13EC10
    ctx->pc = 0x13C84Cu;
    SET_GPR_U32(ctx, 31, 0x13C854u);
    ctx->pc = 0x13C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C84Cu;
    // 0x13c850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC10u, 0x13C84Cu, 0x13C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C854u;
label_13c854:
    // 0x13c854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c85c: 0xc04fb04  jal         func_13EC10
    ctx->pc = 0x13C85Cu;
    SET_GPR_U32(ctx, 31, 0x13C864u);
    ctx->pc = 0x13C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C85Cu;
    // 0x13c860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC10u, 0x13C85Cu, 0x13C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C864u;
}
