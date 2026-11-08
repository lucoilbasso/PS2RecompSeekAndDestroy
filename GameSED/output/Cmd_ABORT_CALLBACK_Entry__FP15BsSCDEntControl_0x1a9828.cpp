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

// Function: Cmd_ABORT_CALLBACK_Entry__FP15BsSCDEntControl
// Address: 0x1a9828 - 0x1a983c
void Cmd_ABORT_CALLBACK_Entry__FP15BsSCDEntControl_0x1a9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ABORT_CALLBACK_Entry__FP15BsSCDEntControl_0x1a9828");
#endif

    ctx->pc = 0x1a9828u;

    // 0x1a9828: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1a9828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1a982c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a9830: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a9830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a9834: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9834u;
        // 0x1a9838: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A983Cu;
}
