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

// Function: ApSCDEntGetParamWork__Fi
// Address: 0x1060c0 - 0x1060d8
void ApSCDEntGetParamWork__Fi_0x1060c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntGetParamWork__Fi_0x1060c0");
#endif

    ctx->pc = 0x1060c0u;

    // 0x1060c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1060c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1060c4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1060c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1060c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1060c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1060cc: 0x8c42ec00  lw          $v0, -0x1400($v0)
    ctx->pc = 0x1060ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962176)));
    // 0x1060d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1060D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1060D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1060D8u;
}
