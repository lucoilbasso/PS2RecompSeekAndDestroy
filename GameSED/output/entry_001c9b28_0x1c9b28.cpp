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

// Function: entry_001c9b28
// Address: 0x1c9b28 - 0x1c9b3c
void entry_001c9b28_0x1c9b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9b28_0x1c9b28");
#endif

    switch (ctx->pc) {
        case 0x1c9b30u: goto label_1c9b30;
        default: break;
    }

    ctx->pc = 0x1c9b28u;

    // 0x1c9b28: 0xc07298e  jal         func_1CA638
    ctx->pc = 0x1C9B28u;
    SET_GPR_U32(ctx, 31, 0x1C9B30u);
    ctx->pc = 0x1CA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA638u, 0x1C9B28u, 0x1C9B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B30u;
label_1c9b30:
    // 0x1c9b30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9b34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c9b38: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1c9b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x1c9b3cu;
}
