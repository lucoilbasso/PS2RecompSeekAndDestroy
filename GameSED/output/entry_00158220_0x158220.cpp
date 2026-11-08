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

// Function: entry_00158220
// Address: 0x158220 - 0x1582d0
void entry_00158220_0x158220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158220_0x158220");
#endif

    ctx->pc = 0x158220u;

    // 0x158220: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x158220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158224: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x158224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x158228: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x158228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15822c: 0xace20090  sw          $v0, 0x90($a3)
    ctx->pc = 0x15822cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 2));
    // 0x158230: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x158230u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x158234: 0xa0e30020  sb          $v1, 0x20($a3)
    ctx->pc = 0x158234u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x158238: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x158238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x15823c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x15823cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x158240: 0x25240150  addiu       $a0, $t1, 0x150
    ctx->pc = 0x158240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x158244: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158248: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15824c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x15824cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158250: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x158250u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x158254: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x158254u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158258: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158258u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15825c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x15825cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158260: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x158260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158264: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x158264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158268: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x158268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15826c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x15826cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158270: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x158270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158274: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x158274u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15827c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158284: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x158288: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x158288u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x15828c: 0xc78182fc  lwc1        $f1, -0x7D04($gp)
    ctx->pc = 0x15828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158294: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x158294u;
    {
        const bool branch_taken_0x158294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158294u;
        // 0x158298: 0x24e30070  addiu       $v1, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158294) {
            ctx->pc = 0x1582D0u;
            return;
        }
    }
    ctx->pc = 0x15829Cu;
    // 0x15829c: 0x24e20070  addiu       $v0, $a3, 0x70
    ctx->pc = 0x15829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x1582a0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1582a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1582a4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1582a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1582a8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1582a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1582ac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1582acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1582b0: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1582b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1582b4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1582b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1582b8: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1582b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1582bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1582bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1582c0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1582c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1582c4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1582c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1582c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1582C8u;
    {
        const bool branch_taken_0x1582c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1582CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582C8u;
        // 0x1582cc: 0x24e40080  addiu       $a0, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582c8) {
            ctx->pc = 0x1582DCu;
            return;
        }
    }
    ctx->pc = 0x1582D0u;
}
