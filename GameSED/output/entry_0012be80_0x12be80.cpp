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

// Function: entry_0012be80
// Address: 0x12be80 - 0x12be90
void entry_0012be80_0x12be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be80_0x12be80");
#endif

    switch (ctx->pc) {
        case 0x12be88u: goto label_12be88;
        default: break;
    }

    ctx->pc = 0x12be80u;

    // 0x12be80: 0xc04a282  jal         func_128A08
    ctx->pc = 0x12BE80u;
    SET_GPR_U32(ctx, 31, 0x12BE88u);
    ctx->pc = 0x128A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128A08u, 0x12BE80u, 0x12BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE88u;
label_12be88:
    // 0x12be88: 0xc04a532  jal         func_1294C8
    ctx->pc = 0x12BE88u;
    SET_GPR_U32(ctx, 31, 0x12BE90u);
    ctx->pc = 0x1294C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1294C8u, 0x12BE88u, 0x12BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE90u;
}
