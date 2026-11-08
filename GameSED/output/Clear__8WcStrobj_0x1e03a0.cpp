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

// Function: Clear__8WcStrobj
// Address: 0x1e03a0 - 0x1e03b0
void Clear__8WcStrobj_0x1e03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8WcStrobj_0x1e03a0");
#endif

    ctx->pc = 0x1e03a0u;

    // 0x1e03a0: 0xac8001bc  sw          $zero, 0x1BC($a0)
    ctx->pc = 0x1e03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 0));
    // 0x1e03a4: 0xac8001b0  sw          $zero, 0x1B0($a0)
    ctx->pc = 0x1e03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    // 0x1e03a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E03A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03A8u;
        // 0x1e03ac: 0xac8001b4  sw          $zero, 0x1B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E03A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E03B0u;
}
