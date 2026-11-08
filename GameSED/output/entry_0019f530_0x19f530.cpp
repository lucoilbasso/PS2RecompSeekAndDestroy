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

// Function: entry_0019f530
// Address: 0x19f530 - 0x19f538
void entry_0019f530_0x19f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f530_0x19f530");
#endif

    ctx->pc = 0x19f530u;

    // 0x19f530: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19F530u;
    SET_GPR_U32(ctx, 31, 0x19F538u);
    ctx->pc = 0x19F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F530u;
    // 0x19f534: 0x8f848e08  lw          $a0, -0x71F8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19F530u, 0x19F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F538u;
}
