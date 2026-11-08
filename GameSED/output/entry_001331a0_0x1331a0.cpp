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

// Function: entry_001331a0
// Address: 0x1331a0 - 0x1331b4
void entry_001331a0_0x1331a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001331a0_0x1331a0");
#endif

    switch (ctx->pc) {
        case 0x1331a8u: goto label_1331a8;
        default: break;
    }

    ctx->pc = 0x1331a0u;

    // 0x1331a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1331A0u;
    SET_GPR_U32(ctx, 31, 0x1331A8u);
    ctx->pc = 0x1331A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331A0u;
    // 0x1331a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1331A0u, 0x1331A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331A8u;
label_1331a8:
    // 0x1331a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1331a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331ac: 0xc05586e  jal         func_1561B8
    ctx->pc = 0x1331ACu;
    SET_GPR_U32(ctx, 31, 0x1331B4u);
    ctx->pc = 0x1331B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331ACu;
    // 0x1331b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561B8u, 0x1331ACu, 0x1331B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331B4u;
}
