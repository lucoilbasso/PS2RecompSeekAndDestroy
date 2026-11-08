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

// Function: entry_001373a8
// Address: 0x1373a8 - 0x137400
void entry_001373a8_0x1373a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001373a8_0x1373a8");
#endif

    ctx->pc = 0x1373a8u;

    // 0x1373a8: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x1373A8u;
    {
        const bool branch_taken_0x1373a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1373ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373A8u;
        // 0x1373ac: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373a8) {
            ctx->pc = 0x137400u;
            return;
        }
    }
    ctx->pc = 0x1373B0u;
    // 0x1373b0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1373b4: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1373b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1373b8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1373b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1373bc: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1373bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1373c0: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x1373c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1373c4: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x1373c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1373c8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1373c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1373cc: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1373ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1373d0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1373d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1373d4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1373d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1373d8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1373d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1373dc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1373dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1373e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1373e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1373e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1373e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1373e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1373e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1373ec: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1373ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1373f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1373F0u;
    {
        const bool branch_taken_0x1373f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1373f0) {
            ctx->pc = 0x137404u;
            return;
        }
    }
    ctx->pc = 0x1373F8u;
    // 0x1373f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1373f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1373fc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1373fcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    ctx->pc = 0x137400u;
}
