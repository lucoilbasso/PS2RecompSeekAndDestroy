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

// Function: entry_0015c84c
// Address: 0x15c84c - 0x15c864
void entry_0015c84c_0x15c84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c84c_0x15c84c");
#endif

    switch (ctx->pc) {
        case 0x15c854u: goto label_15c854;
        default: break;
    }

    ctx->pc = 0x15c84cu;

    // 0x15c84c: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x15C84Cu;
    SET_GPR_U32(ctx, 31, 0x15C854u);
    ctx->pc = 0x15C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C84Cu;
    // 0x15c850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x15C84Cu, 0x15C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C854u;
label_15c854:
    // 0x15c854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c85c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15C85Cu;
    SET_GPR_U32(ctx, 31, 0x15C864u);
    ctx->pc = 0x15C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C85Cu;
    // 0x15c860: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15C85Cu, 0x15C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C864u;
}
