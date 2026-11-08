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

// Function: EffectChafInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x12c380 - 0x12c388
void EffectChafInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectChafInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c380");
#endif

    ctx->pc = 0x12c380u;

    // 0x12c380: 0x3e00008  jr          $ra
    ctx->pc = 0x12C380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C380u;
        // 0x12c384: 0xac8001b0  sw          $zero, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C388u;
}
