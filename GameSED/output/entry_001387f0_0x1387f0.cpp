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

// Function: entry_001387f0
// Address: 0x1387f0 - 0x138880
void entry_001387f0_0x1387f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001387f0_0x1387f0");
#endif

    ctx->pc = 0x1387f0u;

    // 0x1387f0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1387f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1387f4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1387f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1387f8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1387f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1387fc: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1387fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138800: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x138800u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138804: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x138804u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x138808: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x138808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13880c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13880cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138810: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x138810u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x138814: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x138814u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138818: 0xf9660000  sqc2        $vf6, 0x0($t3)
    ctx->pc = 0x138818u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13881c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x13881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138820: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x138820u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x138824: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x138824u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138828: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x138828u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13882c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x13882cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138830: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x138830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138834: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x138834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138838: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x138838u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13883c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13883cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138840: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x138840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138844: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x138844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138848: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x138848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13884c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x13884Cu;
    {
        const bool branch_taken_0x13884c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13884Cu;
        // 0x138850: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13884c) {
            ctx->pc = 0x1388B8u;
            return;
        }
    }
    ctx->pc = 0x138854u;
    // 0x138854: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x138854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138858: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x138858u;
    {
        const bool branch_taken_0x138858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138858) {
            ctx->pc = 0x138880u;
            return;
        }
    }
    ctx->pc = 0x138860u;
    // 0x138860: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x138860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138864: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x138864u;
    {
        const bool branch_taken_0x138864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138864u;
        // 0x138868: 0x24c20020  addiu       $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138864) {
            ctx->pc = 0x138880u;
            return;
        }
    }
    ctx->pc = 0x13886Cu;
    // 0x13886c: 0xe4820408  swc1        $f2, 0x408($a0)
    ctx->pc = 0x13886cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1032), bits); }
    // 0x138870: 0xac820404  sw          $v0, 0x404($a0)
    ctx->pc = 0x138870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 2));
    // 0x138874: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x138874u;
    {
        const bool branch_taken_0x138874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138874u;
        // 0x138878: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138874) {
            ctx->pc = 0x1388E0u;
            return;
        }
    }
    ctx->pc = 0x13887Cu;
    // 0x13887c: 0x0  nop
    ctx->pc = 0x13887cu;
    // NOP
    ctx->pc = 0x138880u;
}
