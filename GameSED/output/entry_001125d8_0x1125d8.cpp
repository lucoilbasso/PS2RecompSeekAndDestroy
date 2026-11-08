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

// Function: entry_001125d8
// Address: 0x1125d8 - 0x1125ec
void entry_001125d8_0x1125d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001125d8_0x1125d8");
#endif

    switch (ctx->pc) {
        case 0x1125e0u: goto label_1125e0;
        case 0x1125e8u: goto label_1125e8;
        default: break;
    }

    ctx->pc = 0x1125d8u;

    // 0x1125d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1125D8u;
    SET_GPR_U32(ctx, 31, 0x1125E0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1125D8u, 0x1125E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125E0u;
label_1125e0:
    // 0x1125e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1125E0u;
    SET_GPR_U32(ctx, 31, 0x1125E8u);
    ctx->pc = 0x1125E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125E0u;
    // 0x1125e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1125E0u, 0x1125E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125E8u;
label_1125e8:
    // 0x1125e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1125e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1125ecu;
}
