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

// Function: entry_001aa178
// Address: 0x1aa178 - 0x1aa18c
void entry_001aa178_0x1aa178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa178_0x1aa178");
#endif

    switch (ctx->pc) {
        case 0x1aa180u: goto label_1aa180;
        default: break;
    }

    ctx->pc = 0x1aa178u;

    // 0x1aa178: 0xc06a894  jal         func_1AA250
    ctx->pc = 0x1AA178u;
    SET_GPR_U32(ctx, 31, 0x1AA180u);
    ctx->pc = 0x1AA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA250u, 0x1AA178u, 0x1AA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA180u;
label_1aa180:
    // 0x1aa180: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1aa180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1aa184: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1aa188: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aa188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1aa18cu;
}
