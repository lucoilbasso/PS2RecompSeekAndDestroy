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

// Function: entry_001b911c
// Address: 0x1b911c - 0x1b912c
void entry_001b911c_0x1b911c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b911c_0x1b911c");
#endif

    switch (ctx->pc) {
        case 0x1b9124u: goto label_1b9124;
        default: break;
    }

    ctx->pc = 0x1b911cu;

    // 0x1b911c: 0xc06e3be  jal         func_1B8EF8
    ctx->pc = 0x1B911Cu;
    SET_GPR_U32(ctx, 31, 0x1B9124u);
    ctx->pc = 0x1B9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B911Cu;
    // 0x1b9120: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8EF8u, 0x1B911Cu, 0x1B9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9124u;
label_1b9124:
    // 0x1b9124: 0xa0500071  sb          $s0, 0x71($v0)
    ctx->pc = 0x1b9124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b9128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b912cu;
}
