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

// Function: Clear__8WcDaemon
// Address: 0x1e0d10 - 0x1e0d2c
void Clear__8WcDaemon_0x1e0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8WcDaemon_0x1e0d10");
#endif

    ctx->pc = 0x1e0d10u;

    // 0x1e0d10: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x1e0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x1e0d14: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1e0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e0d18: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1e0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1e0d1c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1e0d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1e0d20: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1e0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e0d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D24u;
        // 0x1e0d28: 0xac800074  sw          $zero, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0D2Cu;
}
