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

// Function: ApGameDrSeqSetupThreadEntry__FP9ApcGameDri
// Address: 0x11b7e0 - 0x11b7e8
void ApGameDrSeqSetupThreadEntry__FP9ApcGameDri_0x11b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrSeqSetupThreadEntry__FP9ApcGameDri_0x11b7e0");
#endif

    ctx->pc = 0x11b7e0u;

    // 0x11b7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7E0u;
        // 0x11b7e4: 0xac8540ac  sw          $a1, 0x40AC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B7E8u;
}
