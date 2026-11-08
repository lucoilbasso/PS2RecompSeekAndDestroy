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

// Function: PostedSuper__8WcEntityP8WcEntity
// Address: 0x186180 - 0x186190
void PostedSuper__8WcEntityP8WcEntity_0x186180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PostedSuper__8WcEntityP8WcEntity_0x186180");
#endif

    ctx->pc = 0x186180u;

    // 0x186180: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x186180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x186184: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x186184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x186188: 0x3e00008  jr          $ra
    ctx->pc = 0x186188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186188u;
        // 0x18618c: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186190u;
}
