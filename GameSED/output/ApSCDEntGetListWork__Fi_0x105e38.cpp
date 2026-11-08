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

// Function: ApSCDEntGetListWork__Fi
// Address: 0x105e38 - 0x105e50
void ApSCDEntGetListWork__Fi_0x105e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntGetListWork__Fi_0x105e38");
#endif

    ctx->pc = 0x105e38u;

    // 0x105e38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x105e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x105e3c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x105e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x105e40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x105e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x105e44: 0x8c42dc00  lw          $v0, -0x2400($v0)
    ctx->pc = 0x105e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958080)));
    // 0x105e48: 0x3e00008  jr          $ra
    ctx->pc = 0x105E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105E50u;
}
