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

// Function: entry_001b47a8
// Address: 0x1b47a8 - 0x1b47bc
void entry_001b47a8_0x1b47a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b47a8_0x1b47a8");
#endif

    switch (ctx->pc) {
        case 0x1b47b0u: goto label_1b47b0;
        case 0x1b47b8u: goto label_1b47b8;
        default: break;
    }

    ctx->pc = 0x1b47a8u;

    // 0x1b47a8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B47A8u;
    SET_GPR_U32(ctx, 31, 0x1B47B0u);
    ctx->pc = 0x1B47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47A8u;
    // 0x1b47ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B47A8u, 0x1B47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47B0u;
label_1b47b0:
    // 0x1b47b0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B47B0u;
    SET_GPR_U32(ctx, 31, 0x1B47B8u);
    ctx->pc = 0x1B47B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47B0u;
    // 0x1b47b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B47B0u, 0x1B47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47B8u;
label_1b47b8:
    // 0x1b47b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b47bcu;
}
