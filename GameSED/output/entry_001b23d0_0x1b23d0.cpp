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

// Function: entry_001b23d0
// Address: 0x1b23d0 - 0x1b23d8
void entry_001b23d0_0x1b23d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b23d0_0x1b23d0");
#endif

    ctx->pc = 0x1b23d0u;

    // 0x1b23d0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B23D0u;
    SET_GPR_U32(ctx, 31, 0x1B23D8u);
    ctx->pc = 0x1B23D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23D0u;
    // 0x1b23d4: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B23D0u, 0x1B23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23D8u;
}
