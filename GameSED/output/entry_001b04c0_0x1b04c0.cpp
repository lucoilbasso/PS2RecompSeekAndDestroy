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

// Function: entry_001b04c0
// Address: 0x1b04c0 - 0x1b04cc
void entry_001b04c0_0x1b04c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b04c0_0x1b04c0");
#endif

    switch (ctx->pc) {
        case 0x1b04c8u: goto label_1b04c8;
        default: break;
    }

    ctx->pc = 0x1b04c0u;

    // 0x1b04c0: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B04C0u;
    SET_GPR_U32(ctx, 31, 0x1B04C8u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B04C0u, 0x1B04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04C8u;
label_1b04c8:
    // 0x1b04c8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1b04c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b04ccu;
}
