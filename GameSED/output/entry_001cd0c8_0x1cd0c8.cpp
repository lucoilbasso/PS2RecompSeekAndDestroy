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

// Function: entry_001cd0c8
// Address: 0x1cd0c8 - 0x1cd0d4
void entry_001cd0c8_0x1cd0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd0c8_0x1cd0c8");
#endif

    switch (ctx->pc) {
        case 0x1cd0d0u: goto label_1cd0d0;
        default: break;
    }

    ctx->pc = 0x1cd0c8u;

    // 0x1cd0c8: 0xc073400  jal         func_1CD000
    ctx->pc = 0x1CD0C8u;
    SET_GPR_U32(ctx, 31, 0x1CD0D0u);
    ctx->pc = 0x1CD000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD000u, 0x1CD0C8u, 0x1CD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0D0u;
label_1cd0d0:
    // 0x1cd0d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1cd0d4u;
}
