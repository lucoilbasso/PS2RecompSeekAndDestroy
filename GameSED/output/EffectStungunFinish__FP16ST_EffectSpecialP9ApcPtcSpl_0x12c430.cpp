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

// Function: EffectStungunFinish__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x12c430 - 0x12c44c
void EffectStungunFinish__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectStungunFinish__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c430");
#endif

    ctx->pc = 0x12c430u;

    // 0x12c430: 0x8c8201f8  lw          $v0, 0x1F8($a0)
    ctx->pc = 0x12c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x12c434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C434u;
    {
        const bool branch_taken_0x12c434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c434) {
            ctx->pc = 0x12C444u;
            goto label_12c444;
        }
    }
    ctx->pc = 0x12C43Cu;
    // 0x12c43c: 0xac400484  sw          $zero, 0x484($v0)
    ctx->pc = 0x12c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 0));
    // 0x12c440: 0xac400480  sw          $zero, 0x480($v0)
    ctx->pc = 0x12c440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1152), GPR_U32(ctx, 0));
label_12c444:
    // 0x12c444: 0x3e00008  jr          $ra
    ctx->pc = 0x12C444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C44Cu;
}
