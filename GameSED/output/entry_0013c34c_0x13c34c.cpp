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

// Function: entry_0013c34c
// Address: 0x13c34c - 0x13c358
void entry_0013c34c_0x13c34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c34c_0x13c34c");
#endif

    switch (ctx->pc) {
        case 0x13c354u: goto label_13c354;
        default: break;
    }

    ctx->pc = 0x13c34cu;

    // 0x13c34c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x13C34Cu;
    SET_GPR_U32(ctx, 31, 0x13C354u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x13C34Cu, 0x13C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C354u;
label_13c354:
    // 0x13c354: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x13c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x13c358u;
}
