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

// Function: Move_Hold__8ApcMover
// Address: 0x1db658 - 0x1db664
void Move_Hold__8ApcMover_0x1db658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move_Hold__8ApcMover_0x1db658");
#endif

    ctx->pc = 0x1db658u;

    // 0x1db658: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1db658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1db65c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB65Cu;
        // 0x1db660: 0xac820260  sw          $v0, 0x260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB664u;
}
