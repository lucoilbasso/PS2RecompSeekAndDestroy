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

// Function: WDmaWaitVPU1Exec__Fv
// Address: 0x1764a8 - 0x1764d0
void WDmaWaitVPU1Exec__Fv_0x1764a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WDmaWaitVPU1Exec__Fv_0x1764a8");
#endif

    ctx->pc = 0x1764a8u;

label_1764a8:
    // 0x1764a8: 0x0  nop
    ctx->pc = 0x1764a8u;
    // NOP
    // 0x1764ac: 0x0  nop
    ctx->pc = 0x1764acu;
    // NOP
    // 0x1764b0: 0x0  nop
    ctx->pc = 0x1764b0u;
    // NOP
    // 0x1764b4: 0x0  nop
    ctx->pc = 0x1764b4u;
    // NOP
    // 0x1764b8: 0x0  nop
    ctx->pc = 0x1764b8u;
    // NOP
    // 0x1764bc: 0x4901fffa  bc2t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1764BCu;
    {
        const bool branch_taken_0x1764bc = ((ctx->vu0_status & 0x1));
        if (branch_taken_0x1764bc) {
            ctx->pc = 0x1764A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1764a8;
        }
    }
    ctx->pc = 0x1764C4u;
    // 0x1764c4: 0x0  nop
    ctx->pc = 0x1764c4u;
    // NOP
    // 0x1764c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1764C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1764C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1764D0u;
}
