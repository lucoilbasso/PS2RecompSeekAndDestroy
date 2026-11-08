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

// Function: EffectParamReset__Fv
// Address: 0x132668 - 0x132698
void EffectParamReset__Fv_0x132668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectParamReset__Fv_0x132668");
#endif

    ctx->pc = 0x132668u;

    // 0x132668: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x132668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13266c: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x13266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x132670: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x132670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x132674: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x132674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x132678: 0x8c4202f8  lw          $v0, 0x2F8($v0)
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x13267c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13267Cu;
    {
        const bool branch_taken_0x13267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13267Cu;
        // 0x132680: 0x24430160  addiu       $v1, $v0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13267c) {
            ctx->pc = 0x132690u;
            goto label_132690;
        }
    }
    ctx->pc = 0x132684u;
    // 0x132684: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x132684u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132688: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x132688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x13268c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x13268cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_132690:
    // 0x132690: 0x3e00008  jr          $ra
    ctx->pc = 0x132690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132698u;
}
