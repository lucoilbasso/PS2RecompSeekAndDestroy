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

// Function: Clear__7WcCdMan
// Address: 0x1dc280 - 0x1dc28c
void Clear__7WcCdMan_0x1dc280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7WcCdMan_0x1dc280");
#endif

    ctx->pc = 0x1dc280u;

    // 0x1dc280: 0xac801040  sw          $zero, 0x1040($a0)
    ctx->pc = 0x1dc280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4160), GPR_U32(ctx, 0));
    // 0x1dc284: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC284u;
        // 0x1dc288: 0xac801044  sw          $zero, 0x1044($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC28Cu;
}
