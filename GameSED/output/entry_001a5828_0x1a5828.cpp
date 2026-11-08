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

// Function: entry_001a5828
// Address: 0x1a5828 - 0x1a5830
void entry_001a5828_0x1a5828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5828_0x1a5828");
#endif

    ctx->pc = 0x1a5828u;

    // 0x1a5828: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A5828u;
    SET_GPR_U32(ctx, 31, 0x1A5830u);
    ctx->pc = 0x1A582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5828u;
    // 0x1a582c: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A5828u, 0x1A5830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5830u;
}
