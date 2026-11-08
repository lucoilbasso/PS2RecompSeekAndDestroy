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

// Function: Clear__9ApcShadow
// Address: 0x1db348 - 0x1db358
void Clear__9ApcShadow_0x1db348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcShadow_0x1db348");
#endif

    ctx->pc = 0x1db348u;

    // 0x1db348: 0xac8001e8  sw          $zero, 0x1E8($a0)
    ctx->pc = 0x1db348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 0));
    // 0x1db34c: 0xac8001e0  sw          $zero, 0x1E0($a0)
    ctx->pc = 0x1db34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 0));
    // 0x1db350: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB350u;
        // 0x1db354: 0xac8001e4  sw          $zero, 0x1E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB358u;
}
