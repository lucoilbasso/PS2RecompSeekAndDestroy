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

// Function: Clear__7ApcWpon
// Address: 0x1d9b38 - 0x1d9b50
void Clear__7ApcWpon_0x1d9b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7ApcWpon_0x1d9b38");
#endif

    ctx->pc = 0x1d9b38u;

    // 0x1d9b38: 0xac800270  sw          $zero, 0x270($a0)
    ctx->pc = 0x1d9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 0));
    // 0x1d9b3c: 0xac80026c  sw          $zero, 0x26C($a0)
    ctx->pc = 0x1d9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 0));
    // 0x1d9b40: 0xac800260  sw          $zero, 0x260($a0)
    ctx->pc = 0x1d9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
    // 0x1d9b44: 0xa4800266  sh          $zero, 0x266($a0)
    ctx->pc = 0x1d9b44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 614), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B48u;
        // 0x1d9b4c: 0xac800268  sw          $zero, 0x268($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9B50u;
}
