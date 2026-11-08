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

// Function: entry_001a8a90
// Address: 0x1a8a90 - 0x1a8aa0
void entry_001a8a90_0x1a8a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8a90_0x1a8a90");
#endif

    switch (ctx->pc) {
        case 0x1a8a98u: goto label_1a8a98;
        default: break;
    }

    ctx->pc = 0x1a8a90u;

    // 0x1a8a90: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8A90u;
    SET_GPR_U32(ctx, 31, 0x1A8A98u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8A90u, 0x1A8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A98u;
label_1a8a98:
    // 0x1a8a98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8A98u;
    {
        const bool branch_taken_0x1a8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A98u;
        // 0x1a8a9c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a98) {
            ctx->pc = 0x1A8AA4u;
            return;
        }
    }
    ctx->pc = 0x1A8AA0u;
}
