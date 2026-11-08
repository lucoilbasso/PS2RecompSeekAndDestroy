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

// Function: FreeWorkInit__10WcSequence
// Address: 0x1e0aa0 - 0x1e0aac
void FreeWorkInit__10WcSequence_0x1e0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeWorkInit__10WcSequence_0x1e0aa0");
#endif

    ctx->pc = 0x1e0aa0u;

    // 0x1e0aa0: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x1e0aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x1e0aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AA4u;
        // 0x1e0aa8: 0xac800070  sw          $zero, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0AACu;
}
