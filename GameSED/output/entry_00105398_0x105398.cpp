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

// Function: entry_00105398
// Address: 0x105398 - 0x1053a8
void entry_00105398_0x105398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105398_0x105398");
#endif

    switch (ctx->pc) {
        case 0x1053a0u: goto label_1053a0;
        default: break;
    }

    ctx->pc = 0x105398u;

    // 0x105398: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x105398u;
    SET_GPR_U32(ctx, 31, 0x1053A0u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x105398u, 0x1053A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1053A0u;
label_1053a0:
    // 0x1053a0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1053a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1053a4: 0x8c640154  lw          $a0, 0x154($v1)
    ctx->pc = 0x1053a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    ctx->pc = 0x1053a8u;
}
