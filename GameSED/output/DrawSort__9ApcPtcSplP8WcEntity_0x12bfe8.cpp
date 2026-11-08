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

// Function: DrawSort__9ApcPtcSplP8WcEntity
// Address: 0x12bfe8 - 0x12c000
void DrawSort__9ApcPtcSplP8WcEntity_0x12bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__9ApcPtcSplP8WcEntity_0x12bfe8");
#endif

    ctx->pc = 0x12bfe8u;

    // 0x12bfe8: 0x8ca2015c  lw          $v0, 0x15C($a1)
    ctx->pc = 0x12bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x12bfec: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x12bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x12bff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bff4: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x12bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x12bff8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFF8u;
        // 0x12bffc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C000u;
}
