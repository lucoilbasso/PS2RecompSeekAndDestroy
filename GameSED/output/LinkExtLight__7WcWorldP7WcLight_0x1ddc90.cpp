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

// Function: LinkExtLight__7WcWorldP7WcLight
// Address: 0x1ddc90 - 0x1ddcb0
void LinkExtLight__7WcWorldP7WcLight_0x1ddc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkExtLight__7WcWorldP7WcLight_0x1ddc90");
#endif

    ctx->pc = 0x1ddc90u;

    // 0x1ddc90: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x1ddc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x1ddc94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDC94u;
    {
        const bool branch_taken_0x1ddc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc94) {
            ctx->pc = 0x1DDCA8u;
            goto label_1ddca8;
        }
    }
    ctx->pc = 0x1DDC9Cu;
    // 0x1ddc9c: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x1ddc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1ddca0: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x1ddca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
    // 0x1ddca4: 0xac650134  sw          $a1, 0x134($v1)
    ctx->pc = 0x1ddca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 5));
label_1ddca8:
    // 0x1ddca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDCB0u;
}
