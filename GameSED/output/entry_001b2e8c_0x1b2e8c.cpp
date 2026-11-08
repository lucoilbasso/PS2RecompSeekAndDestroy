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

// Function: entry_001b2e8c
// Address: 0x1b2e8c - 0x1b2ea0
void entry_001b2e8c_0x1b2e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2e8c_0x1b2e8c");
#endif

    switch (ctx->pc) {
        case 0x1b2e94u: goto label_1b2e94;
        case 0x1b2e9cu: goto label_1b2e9c;
        default: break;
    }

    ctx->pc = 0x1b2e8cu;

    // 0x1b2e8c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E94u);
    ctx->pc = 0x1B2E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E8Cu;
    // 0x1b2e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2E8Cu, 0x1B2E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E94u;
label_1b2e94:
    // 0x1b2e94: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2E94u;
    SET_GPR_U32(ctx, 31, 0x1B2E9Cu);
    ctx->pc = 0x1B2E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E94u;
    // 0x1b2e98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2E94u, 0x1B2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E9Cu;
label_1b2e9c:
    // 0x1b2e9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b2ea0u;
}
