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

// Function: DrawSort__9ApcPtcLinP8WcEntity
// Address: 0x12e048 - 0x12e060
void DrawSort__9ApcPtcLinP8WcEntity_0x12e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__9ApcPtcLinP8WcEntity_0x12e048");
#endif

    ctx->pc = 0x12e048u;

    // 0x12e048: 0x8ca2015c  lw          $v0, 0x15C($a1)
    ctx->pc = 0x12e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x12e04c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x12e050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e054: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x12e054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x12e058: 0x3e00008  jr          $ra
    ctx->pc = 0x12E058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E058u;
        // 0x12e05c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E060u;
}
