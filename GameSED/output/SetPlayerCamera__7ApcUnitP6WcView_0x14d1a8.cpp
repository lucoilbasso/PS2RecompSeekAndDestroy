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

// Function: SetPlayerCamera__7ApcUnitP6WcView
// Address: 0x14d1a8 - 0x14d1b4
void SetPlayerCamera__7ApcUnitP6WcView_0x14d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPlayerCamera__7ApcUnitP6WcView_0x14d1a8");
#endif

    ctx->pc = 0x14d1a8u;

    // 0x14d1a8: 0x8c8201ac  lw          $v0, 0x1AC($a0)
    ctx->pc = 0x14d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x14d1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14D1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1ACu;
        // 0x14d1b0: 0xac450020  sw          $a1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D1B4u;
}
