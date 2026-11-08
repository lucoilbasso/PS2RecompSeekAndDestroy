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

// Function: ApCqtankSetTrackUV__FP11WStrobjCtrlii
// Address: 0x164aa0 - 0x164ac8
void ApCqtankSetTrackUV__FP11WStrobjCtrlii_0x164aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqtankSetTrackUV__FP11WStrobjCtrlii_0x164aa0");
#endif

    ctx->pc = 0x164aa0u;

    // 0x164aa0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x164aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x164aa4: 0x70c51488  pextlw      $v0, $a2, $a1
    ctx->pc = 0x164aa4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x164aa8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x164aa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x164aac: 0x4b84213f  vitof15.xy  $vf4, $vf4
    ctx->pc = 0x164aacu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164ab0: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x164ab0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164ab4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x164ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x164ab8: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x164ab8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 2), _MM_SHUFFLE(0,3,2,1)));
    // 0x164abc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x164abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x164ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x164AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164AC8u;
}
