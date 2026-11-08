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

// Function: entry_001aa8d0
// Address: 0x1aa8d0 - 0x1aa8d8
void entry_001aa8d0_0x1aa8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa8d0_0x1aa8d0");
#endif

    ctx->pc = 0x1aa8d0u;

    // 0x1aa8d0: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AA8D0u;
    SET_GPR_U32(ctx, 31, 0x1AA8D8u);
    ctx->pc = 0x1AA8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8D0u;
    // 0x1aa8d4: 0x248494c8  addiu       $a0, $a0, -0x6B38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AA8D0u, 0x1AA8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8D8u;
}
