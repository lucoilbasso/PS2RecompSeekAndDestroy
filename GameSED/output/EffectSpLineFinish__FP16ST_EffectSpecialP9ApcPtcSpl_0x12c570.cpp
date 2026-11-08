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

// Function: EffectSpLineFinish__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x12c570 - 0x12c58c
void EffectSpLineFinish__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSpLineFinish__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c570");
#endif

    ctx->pc = 0x12c570u;

    // 0x12c570: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x12c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x12c574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C574u;
    {
        const bool branch_taken_0x12c574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c574) {
            ctx->pc = 0x12C584u;
            goto label_12c584;
        }
    }
    ctx->pc = 0x12C57Cu;
    // 0x12c57c: 0xac400484  sw          $zero, 0x484($v0)
    ctx->pc = 0x12c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 0));
    // 0x12c580: 0xac400480  sw          $zero, 0x480($v0)
    ctx->pc = 0x12c580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1152), GPR_U32(ctx, 0));
label_12c584:
    // 0x12c584: 0x3e00008  jr          $ra
    ctx->pc = 0x12C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C58Cu;
}
