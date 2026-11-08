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

// Function: caseD_9
// Address: 0x154d18 - 0x154d90
void caseD_9_0x154d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x154d18");
#endif

    switch (ctx->pc) {
        case 0x154d28u: goto label_154d28;
        default: break;
    }

    ctx->pc = 0x154d18u;

    // 0x154d18: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x154d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d20: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x154D20u;
    SET_GPR_U32(ctx, 31, 0x154D28u);
    ctx->pc = 0x154D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D20u;
    // 0x154d24: 0x8c51b830  lw          $s1, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x154D20u, 0x154D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D28u;
label_154d28:
    // 0x154d28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154d2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x154d2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154d30: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x154D30u;
    {
        const bool branch_taken_0x154d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D30u;
        // 0x154d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d30) {
            ctx->pc = 0x154D90u;
            return;
        }
    }
    ctx->pc = 0x154D38u;
    // 0x154d38: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x154d38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154d3c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154d40: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154d44: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154d48: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x154d48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x154d4c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154d4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154d50: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x154d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154d54: 0x4a0003bf  vwaitq
    ctx->pc = 0x154d54u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154d58: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154d5c: 0xfa260000  sqc2        $vf6, 0x0($s1)
    ctx->pc = 0x154d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154d60: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x154d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154d64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x154d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x154d68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x154d68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x154d6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x154d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x154d70: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x154d70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x154d74: 0x26030820  addiu       $v1, $s0, 0x820
    ctx->pc = 0x154d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x154d78: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154d78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154d7c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x154d7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154d80: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x154d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x154d84: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154d84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x154d88: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x154D88u;
    {
        const bool branch_taken_0x154d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D88u;
        // 0x154d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d88) {
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x154D90u;
}
