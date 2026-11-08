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

// Function: Move_Stop__8ApcMover
// Address: 0x1db5c8 - 0x1db5d0
void Move_Stop__8ApcMover_0x1db5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move_Stop__8ApcMover_0x1db5c8");
#endif

    ctx->pc = 0x1db5c8u;

    // 0x1db5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5C8u;
        // 0x1db5cc: 0xac800260  sw          $zero, 0x260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB5D0u;
}
