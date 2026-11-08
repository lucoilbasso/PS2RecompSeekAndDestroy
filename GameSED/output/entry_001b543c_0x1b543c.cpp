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

// Function: entry_001b543c
// Address: 0x1b543c - 0x1b5450
void entry_001b543c_0x1b543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b543c_0x1b543c");
#endif

    switch (ctx->pc) {
        case 0x1b5444u: goto label_1b5444;
        case 0x1b544cu: goto label_1b544c;
        default: break;
    }

    ctx->pc = 0x1b543cu;

    // 0x1b543c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B543Cu;
    SET_GPR_U32(ctx, 31, 0x1B5444u);
    ctx->pc = 0x1B5440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B543Cu;
    // 0x1b5440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B543Cu, 0x1B5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5444u;
label_1b5444:
    // 0x1b5444: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5444u;
    SET_GPR_U32(ctx, 31, 0x1B544Cu);
    ctx->pc = 0x1B5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5444u;
    // 0x1b5448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5444u, 0x1B544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B544Cu;
label_1b544c:
    // 0x1b544c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b5450u;
}
