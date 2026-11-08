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

// Function: DrawSort__9ApcEfeGenP8WcEntity
// Address: 0x132210 - 0x132228
void DrawSort__9ApcEfeGenP8WcEntity_0x132210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__9ApcEfeGenP8WcEntity_0x132210");
#endif

    ctx->pc = 0x132210u;

    // 0x132210: 0x8ca2015c  lw          $v0, 0x15C($a1)
    ctx->pc = 0x132210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x132214: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x132214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x132218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x132218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13221c: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x13221cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x132220: 0x3e00008  jr          $ra
    ctx->pc = 0x132220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132220u;
        // 0x132224: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132228u;
}
