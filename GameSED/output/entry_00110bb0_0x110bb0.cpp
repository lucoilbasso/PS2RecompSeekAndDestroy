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

// Function: entry_00110bb0
// Address: 0x110bb0 - 0x110bbc
void entry_00110bb0_0x110bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110bb0_0x110bb0");
#endif

    switch (ctx->pc) {
        case 0x110bb8u: goto label_110bb8;
        default: break;
    }

    ctx->pc = 0x110bb0u;

    // 0x110bb0: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x110BB0u;
    SET_GPR_U32(ctx, 31, 0x110BB8u);
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x110BB0u, 0x110BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BB8u;
label_110bb8:
    // 0x110bb8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x110bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x110bbcu;
}
