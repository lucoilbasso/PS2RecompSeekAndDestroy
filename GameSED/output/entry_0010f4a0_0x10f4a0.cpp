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

// Function: entry_0010f4a0
// Address: 0x10f4a0 - 0x10f4ac
void entry_0010f4a0_0x10f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f4a0_0x10f4a0");
#endif

    switch (ctx->pc) {
        case 0x10f4a8u: goto label_10f4a8;
        default: break;
    }

    ctx->pc = 0x10f4a0u;

    // 0x10f4a0: 0xc0645d8  jal         func_191760
    ctx->pc = 0x10F4A0u;
    SET_GPR_U32(ctx, 31, 0x10F4A8u);
    ctx->pc = 0x191760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191760u, 0x10F4A0u, 0x10F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4A8u;
label_10f4a8:
    // 0x10f4a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x10f4acu;
}
