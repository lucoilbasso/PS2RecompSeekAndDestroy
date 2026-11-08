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

// Function: Clear__10WcSequence
// Address: 0x1e09e8 - 0x1e09f8
void Clear__10WcSequence_0x1e09e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__10WcSequence_0x1e09e8");
#endif

    ctx->pc = 0x1e09e8u;

    // 0x1e09e8: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x1e09e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x1e09ec: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1e09ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e09f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E09F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09F0u;
        // 0x1e09f4: 0xac800078  sw          $zero, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E09F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E09F8u;
}
