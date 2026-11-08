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

// Function: entry_00159c70
// Address: 0x159c70 - 0x159d40
void entry_00159c70_0x159c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159c70_0x159c70");
#endif

    ctx->pc = 0x159c70u;

    // 0x159c70: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x159c70u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x159c74: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x159c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159c78: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x159c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c7c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x159c80: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x159c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x159c84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x159c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x159c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x159c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159c90: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x159c90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x159c94: 0x24e50400  addiu       $a1, $a3, 0x400
    ctx->pc = 0x159c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x159c98: 0xa0c30020  sb          $v1, 0x20($a2)
    ctx->pc = 0x159c98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x159c9c: 0x24e30150  addiu       $v1, $a3, 0x150
    ctx->pc = 0x159c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
    // 0x159ca0: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x159ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
    // 0x159ca4: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x159ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x159ca8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x159ca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159cac: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x159cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x159cb0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159cb4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x159cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x159cb8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x159cb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x159cbc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x159cbcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x159cc0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x159cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x159cc4: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x159cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159cc8: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x159cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159ccc: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x159cccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159cd0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159cd4: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x159cd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x159cd8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x159cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x159cdc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x159cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x159ce0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x159ce0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159cec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159cf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159cf4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x159cf4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x159cf8: 0xc7818314  lwc1        $f1, -0x7CEC($gp)
    ctx->pc = 0x159cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159d00: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x159D00u;
    {
        const bool branch_taken_0x159d00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D00u;
        // 0x159d04: 0x24c30070  addiu       $v1, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d00) {
            ctx->pc = 0x159D40u;
            return;
        }
    }
    ctx->pc = 0x159D08u;
    // 0x159d08: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x159d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x159d0c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159d0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159d10: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x159d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159d14: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x159d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159d18: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159d1c: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x159d1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x159d20: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x159d20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159d24: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x159d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159d28: 0x4a0003bf  vwaitq
    ctx->pc = 0x159d28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159d2c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x159d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159d30: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x159d30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159d34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159D34u;
    {
        const bool branch_taken_0x159d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D34u;
        // 0x159d38: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d34) {
            ctx->pc = 0x159D4Cu;
            return;
        }
    }
    ctx->pc = 0x159D3Cu;
    // 0x159d3c: 0x0  nop
    ctx->pc = 0x159d3cu;
    // NOP
    ctx->pc = 0x159d40u;
}
