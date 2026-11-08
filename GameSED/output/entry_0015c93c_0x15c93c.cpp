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

// Function: entry_0015c93c
// Address: 0x15c93c - 0x15c954
void entry_0015c93c_0x15c93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c93c_0x15c93c");
#endif

    switch (ctx->pc) {
        case 0x15c944u: goto label_15c944;
        default: break;
    }

    ctx->pc = 0x15c93cu;

    // 0x15c93c: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x15C93Cu;
    SET_GPR_U32(ctx, 31, 0x15C944u);
    ctx->pc = 0x15C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C93Cu;
    // 0x15c940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x15C93Cu, 0x15C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C944u;
label_15c944:
    // 0x15c944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c94c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15C94Cu;
    SET_GPR_U32(ctx, 31, 0x15C954u);
    ctx->pc = 0x15C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C94Cu;
    // 0x15c950: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15C94Cu, 0x15C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C954u;
}
