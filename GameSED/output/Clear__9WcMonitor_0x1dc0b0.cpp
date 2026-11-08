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

// Function: Clear__9WcMonitor
// Address: 0x1dc0b0 - 0x1dc0c4
void Clear__9WcMonitor_0x1dc0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9WcMonitor_0x1dc0b0");
#endif

    ctx->pc = 0x1dc0b0u;

    // 0x1dc0b0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1dc0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1dc0b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1dc0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1dc0b8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1dc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1dc0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0BCu;
        // 0x1dc0c0: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC0C4u;
}
