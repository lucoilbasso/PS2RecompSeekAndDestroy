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

// Function: Clear__6WcPoly
// Address: 0x1df288 - 0x1df2a0
void Clear__6WcPoly_0x1df288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__6WcPoly_0x1df288");
#endif

    ctx->pc = 0x1df288u;

    // 0x1df288: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x1df288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x1df28c: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x1df28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
    // 0x1df290: 0xac8001cc  sw          $zero, 0x1CC($a0)
    ctx->pc = 0x1df290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 0));
    // 0x1df294: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x1df294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x1df298: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF298u;
        // 0x1df29c: 0xac8001d4  sw          $zero, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF2A0u;
}
