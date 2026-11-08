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

// Function: EntityAllWarpStart__8WcEntityP8WcEntityP9FVector32
// Address: 0x186728 - 0x186734
void EntityAllWarpStart__8WcEntityP8WcEntityP9FVector32_0x186728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntityAllWarpStart__8WcEntityP8WcEntityP9FVector32_0x186728");
#endif

    ctx->pc = 0x186728u;

    // 0x186728: 0xaf848d5c  sw          $a0, -0x72A4($gp)
    ctx->pc = 0x186728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937948), GPR_U32(ctx, 4));
    // 0x18672c: 0x3e00008  jr          $ra
    ctx->pc = 0x18672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18672Cu;
        // 0x186730: 0xaf858d58  sw          $a1, -0x72A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937944), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186734u;
}
