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

// Function: entry_00103b88
// Address: 0x103b88 - 0x103b90
void entry_00103b88_0x103b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103b88_0x103b88");
#endif

    ctx->pc = 0x103b88u;

    // 0x103b88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x103B88u;
    SET_GPR_U32(ctx, 31, 0x103B90u);
    ctx->pc = 0x103B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B88u;
    // 0x103b8c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x103B88u, 0x103B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B90u;
}
