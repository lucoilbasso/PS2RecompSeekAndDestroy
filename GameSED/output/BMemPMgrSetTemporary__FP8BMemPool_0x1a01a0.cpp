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

// Function: BMemPMgrSetTemporary__FP8BMemPool
// Address: 0x1a01a0 - 0x1a01a8
void BMemPMgrSetTemporary__FP8BMemPool_0x1a01a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrSetTemporary__FP8BMemPool_0x1a01a0");
#endif

    ctx->pc = 0x1a01a0u;

    // 0x1a01a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A01A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01A0u;
        // 0x1a01a4: 0xaf848de0  sw          $a0, -0x7220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A01A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A01A8u;
}
