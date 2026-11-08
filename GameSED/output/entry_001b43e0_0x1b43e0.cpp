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

// Function: entry_001b43e0
// Address: 0x1b43e0 - 0x1b43f4
void entry_001b43e0_0x1b43e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b43e0_0x1b43e0");
#endif

    switch (ctx->pc) {
        case 0x1b43e8u: goto label_1b43e8;
        case 0x1b43f0u: goto label_1b43f0;
        default: break;
    }

    ctx->pc = 0x1b43e0u;

    // 0x1b43e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B43E0u;
    SET_GPR_U32(ctx, 31, 0x1B43E8u);
    ctx->pc = 0x1B43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43E0u;
    // 0x1b43e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B43E0u, 0x1B43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43E8u;
label_1b43e8:
    // 0x1b43e8: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B43E8u;
    SET_GPR_U32(ctx, 31, 0x1B43F0u);
    ctx->pc = 0x1B43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43E8u;
    // 0x1b43ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B43E8u, 0x1B43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43F0u;
label_1b43f0:
    // 0x1b43f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b43f4u;
}
