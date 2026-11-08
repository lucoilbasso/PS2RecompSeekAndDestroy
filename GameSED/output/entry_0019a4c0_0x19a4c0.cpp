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

// Function: entry_0019a4c0
// Address: 0x19a4c0 - 0x19a544
void entry_0019a4c0_0x19a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a4c0_0x19a4c0");
#endif

    switch (ctx->pc) {
        case 0x19a4c8u: goto label_19a4c8;
        default: break;
    }

    ctx->pc = 0x19a4c0u;

    // 0x19a4c0: 0xc061422  jal         func_185088
    ctx->pc = 0x19A4C0u;
    SET_GPR_U32(ctx, 31, 0x19A4C8u);
    ctx->pc = 0x19A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4C0u;
    // 0x19a4c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x19A4C0u, 0x19A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4C8u;
label_19a4c8:
    // 0x19a4c8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x19a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x19a4cc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19a4ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a4d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19a4d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19a4d8: 0x2463ef50  addiu       $v1, $v1, -0x10B0
    ctx->pc = 0x19a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963024));
    // 0x19a4dc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19a4dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a4e0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x19a4e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(FAST_READ128(0x21EF50u));
    // 0x19a4e4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a4e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a4e8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a4ec: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19a4ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a4f0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19a4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19a4f4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19a4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19a4f8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x19a4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19a4fc: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19a4fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19a500: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x19a500u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19a504: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x19a504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19a508: 0x4a0003bf  vwaitq
    ctx->pc = 0x19a508u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19a50c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x19a50cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19a510: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x19a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19a514: 0xc7808d94  lwc1        $f0, -0x726C($gp)
    ctx->pc = 0x19a514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a518: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19a518u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19a51c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a51cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a520: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19a520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19a524: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19a524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19a528: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19a52c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a530: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x19a534: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x19a534u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a538: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x19a538u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a53c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a540: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x19a540u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x19a544u;
}
