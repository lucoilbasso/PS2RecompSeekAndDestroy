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

// Function: ChangeRefPoint__6WcViewP9FVector32
// Address: 0x1dd7b0 - 0x1dd7d4
void ChangeRefPoint__6WcViewP9FVector32_0x1dd7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeRefPoint__6WcViewP9FVector32_0x1dd7b0");
#endif

    ctx->pc = 0x1dd7b0u;

    // 0x1dd7b0: 0x24820160  addiu       $v0, $a0, 0x160
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1dd7b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dd7b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd7b8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1dd7b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1dd7bc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dd7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd7c0: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1dd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1dd7c4: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1dd7c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dd7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dd7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7CCu;
        // 0x1dd7d0: 0xac830150  sw          $v1, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD7D4u;
}
