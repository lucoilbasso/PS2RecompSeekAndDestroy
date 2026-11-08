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

// Function: entry_00174ed0
// Address: 0x174ed0 - 0x174ed8
void entry_00174ed0_0x174ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174ed0_0x174ed0");
#endif

    ctx->pc = 0x174ed0u;

    // 0x174ed0: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x174ED0u;
    SET_GPR_U32(ctx, 31, 0x174ED8u);
    ctx->pc = 0x174ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174ED0u;
    // 0x174ed4: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x174ED0u, 0x174ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174ED8u;
}
