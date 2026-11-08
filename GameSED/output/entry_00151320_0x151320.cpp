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

// Function: entry_00151320
// Address: 0x151320 - 0x151390
void entry_00151320_0x151320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151320_0x151320");
#endif

    ctx->pc = 0x151320u;

    // 0x151320: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x151320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151324: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x151324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x151328: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x151328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15132c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x15132cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x151330: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x151330u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x151334: 0x4a0003bf  vwaitq
    ctx->pc = 0x151334u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x151338: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x151338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15133c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x15133cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x151340: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x151340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x151344: 0xc6000664  lwc1        $f0, 0x664($s0)
    ctx->pc = 0x151344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151348: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x151348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15134c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x15134cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x151350: 0x46020068  max.s       $f1, $f0, $f2
    ctx->pc = 0x151350u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[2]);
    // 0x151354: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x151354u;
    {
        const bool branch_taken_0x151354 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x151358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151354u;
        // 0x151358: 0x92020575  lbu         $v0, 0x575($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151354) {
            ctx->pc = 0x151390u;
            return;
        }
    }
    ctx->pc = 0x15135Cu;
    // 0x15135c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x151360: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151364: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x151368: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x151368u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x15136c: 0xc4209868  lwc1        $f0, -0x6798($at)
    ctx->pc = 0x15136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151370: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151374: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x151374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x151378: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x151378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15137c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x15137Cu;
    {
        const bool branch_taken_0x15137c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15137Cu;
        // 0x151380: 0xe6010410  swc1        $f1, 0x410($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15137c) {
            ctx->pc = 0x1513C8u;
            return;
        }
    }
    ctx->pc = 0x151384u;
    // 0x151384: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x151388: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x151388u;
    {
        const bool branch_taken_0x151388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151388u;
        // 0x15138c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151388) {
            ctx->pc = 0x1513C4u;
            return;
        }
    }
    ctx->pc = 0x151390u;
}
