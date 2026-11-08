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

// Function: Clear__7WcBoard
// Address: 0x1df450 - 0x1df460
void Clear__7WcBoard_0x1df450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7WcBoard_0x1df450");
#endif

    ctx->pc = 0x1df450u;

    // 0x1df450: 0xac800274  sw          $zero, 0x274($a0)
    ctx->pc = 0x1df450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 0));
    // 0x1df454: 0xac800270  sw          $zero, 0x270($a0)
    ctx->pc = 0x1df454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 0));
    // 0x1df458: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF458u;
        // 0x1df45c: 0xac800278  sw          $zero, 0x278($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF460u;
}
