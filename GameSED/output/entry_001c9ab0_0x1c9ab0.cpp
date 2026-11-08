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

// Function: entry_001c9ab0
// Address: 0x1c9ab0 - 0x1c9ac8
void entry_001c9ab0_0x1c9ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9ab0_0x1c9ab0");
#endif

    switch (ctx->pc) {
        case 0x1c9ab8u: goto label_1c9ab8;
        default: break;
    }

    ctx->pc = 0x1c9ab0u;

    // 0x1c9ab0: 0xc073438  jal         func_1CD0E0
    ctx->pc = 0x1C9AB0u;
    SET_GPR_U32(ctx, 31, 0x1C9AB8u);
    ctx->pc = 0x1CD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD0E0u, 0x1C9AB0u, 0x1C9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB8u;
label_1c9ab8:
    // 0x1c9ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9abc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c9abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ac0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C9AC0u;
    SET_GPR_U32(ctx, 31, 0x1C9AC8u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C9AC0u, 0x1C9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AC8u;
}
