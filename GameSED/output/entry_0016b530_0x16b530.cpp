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

// Function: entry_0016b530
// Address: 0x16b530 - 0x16b538
void entry_0016b530_0x16b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b530_0x16b530");
#endif

    ctx->pc = 0x16b530u;

    // 0x16b530: 0xc05acbc  jal         func_16B2F0
    ctx->pc = 0x16B530u;
    SET_GPR_U32(ctx, 31, 0x16B538u);
    ctx->pc = 0x16B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B530u;
    // 0x16b534: 0x8e0501e0  lw          $a1, 0x1E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B2F0u, 0x16B530u, 0x16B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B538u;
}
