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

// Function: entry_00106930
// Address: 0x106930 - 0x106938
void entry_00106930_0x106930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106930_0x106930");
#endif

    ctx->pc = 0x106930u;

    // 0x106930: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106930u;
    SET_GPR_U32(ctx, 31, 0x106938u);
    ctx->pc = 0x106934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106930u;
    // 0x106934: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106930u, 0x106938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106938u;
}
