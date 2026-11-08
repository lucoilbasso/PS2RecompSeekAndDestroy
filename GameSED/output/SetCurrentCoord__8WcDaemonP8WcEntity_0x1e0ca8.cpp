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

// Function: SetCurrentCoord__8WcDaemonP8WcEntity
// Address: 0x1e0ca8 - 0x1e0cb0
void SetCurrentCoord__8WcDaemonP8WcEntity_0x1e0ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCurrentCoord__8WcDaemonP8WcEntity_0x1e0ca8");
#endif

    ctx->pc = 0x1e0ca8u;

    // 0x1e0ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA8u;
        // 0x1e0cac: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0CB0u;
}
