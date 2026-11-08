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

// Function: WPolySetPoint__FP6WcPolyiP9FVector32
// Address: 0x190328 - 0x190358
void WPolySetPoint__FP6WcPolyiP9FVector32_0x190328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolySetPoint__FP6WcPolyiP9FVector32_0x190328");
#endif

    ctx->pc = 0x190328u;

    // 0x190328: 0x9482015a  lhu         $v0, 0x15A($a0)
    ctx->pc = 0x190328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x19032c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x19032cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x190330: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x190330u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x190334: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190334u;
    {
        const bool branch_taken_0x190334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x190334) {
            ctx->pc = 0x190350u;
            goto label_190350;
        }
    }
    ctx->pc = 0x19033Cu;
    // 0x19033c: 0x8c8201c8  lw          $v0, 0x1C8($a0)
    ctx->pc = 0x19033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x190340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190344: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x190344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190348: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x190348u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19034c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19034cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_190350:
    // 0x190350: 0x3e00008  jr          $ra
    ctx->pc = 0x190350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190358u;
}
