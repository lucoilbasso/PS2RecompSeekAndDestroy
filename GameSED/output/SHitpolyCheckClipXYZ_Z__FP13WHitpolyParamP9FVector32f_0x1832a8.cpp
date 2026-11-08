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

// Function: SHitpolyCheckClipXYZ_Z__FP13WHitpolyParamP9FVector32f
// Address: 0x1832a8 - 0x1832fc
void SHitpolyCheckClipXYZ_Z__FP13WHitpolyParamP9FVector32f_0x1832a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SHitpolyCheckClipXYZ_Z__FP13WHitpolyParamP9FVector32f_0x1832a8");
#endif

    ctx->pc = 0x1832a8u;

    // 0x1832a8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1832a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1832ac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1832acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1832b0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1832b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1832b4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1832b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1832b8: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1832b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1832bc: 0x4b440844  vsubx.xz    $vf1, $vf1, $vf4x
    ctx->pc = 0x1832bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1832c0: 0x4b441080  vaddx.xz    $vf2, $vf2, $vf4x
    ctx->pc = 0x1832c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1832c4: 0x4a0002ff  vnop
    ctx->pc = 0x1832c4u;
    // NOP operation, no action needed for VU0
    // 0x1832c8: 0x4a0002ff  vnop
    ctx->pc = 0x1832c8u;
    // NOP operation, no action needed for VU0
    // 0x1832cc: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x1832ccu;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x1832d0: 0x4b41196c  vsub.xz     $vf5, $vf3, $vf1
    ctx->pc = 0x1832d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1832d4: 0x4b4311ac  vsub.xz     $vf6, $vf2, $vf3
    ctx->pc = 0x1832d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1832d8: 0x4a0002ff  vnop
    ctx->pc = 0x1832d8u;
    // NOP operation, no action needed for VU0
    // 0x1832dc: 0x4a0002ff  vnop
    ctx->pc = 0x1832dcu;
    // NOP operation, no action needed for VU0
    // 0x1832e0: 0x4a0002ff  vnop
    ctx->pc = 0x1832e0u;
    // NOP operation, no action needed for VU0
    // 0x1832e4: 0x4a0002ff  vnop
    ctx->pc = 0x1832e4u;
    // NOP operation, no action needed for VU0
    // 0x1832e8: 0x4a0002ff  vnop
    ctx->pc = 0x1832e8u;
    // NOP operation, no action needed for VU0
    // 0x1832ec: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x1832ecu;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x1832f0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1832f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1832f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1832F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1832F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832F4u;
        // 0x1832f8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1832FCu;
}
