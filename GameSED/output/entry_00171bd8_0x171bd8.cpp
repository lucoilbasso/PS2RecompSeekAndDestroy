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

// Function: entry_00171bd8
// Address: 0x171bd8 - 0x171be8
void entry_00171bd8_0x171bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171bd8_0x171bd8");
#endif

    switch (ctx->pc) {
        case 0x171be0u: goto label_171be0;
        default: break;
    }

    ctx->pc = 0x171bd8u;

    // 0x171bd8: 0xc05cf60  jal         func_173D80
    ctx->pc = 0x171BD8u;
    SET_GPR_U32(ctx, 31, 0x171BE0u);
    ctx->pc = 0x171BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BD8u;
    // 0x171bdc: 0x26a412a8  addiu       $a0, $s5, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D80u, 0x171BD8u, 0x171BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BE0u;
label_171be0:
    // 0x171be0: 0xc05c120  jal         func_170480
    ctx->pc = 0x171BE0u;
    SET_GPR_U32(ctx, 31, 0x171BE8u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x171BE0u, 0x171BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BE8u;
}
