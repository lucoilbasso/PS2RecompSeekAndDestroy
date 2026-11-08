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

// Function: entry_001b1270
// Address: 0x1b1270 - 0x1b127c
void entry_001b1270_0x1b1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1270_0x1b1270");
#endif

    switch (ctx->pc) {
        case 0x1b1278u: goto label_1b1278;
        default: break;
    }

    ctx->pc = 0x1b1270u;

    // 0x1b1270: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1270u;
    SET_GPR_U32(ctx, 31, 0x1B1278u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1270u, 0x1B1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1278u;
label_1b1278:
    // 0x1b1278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b127cu;
}
