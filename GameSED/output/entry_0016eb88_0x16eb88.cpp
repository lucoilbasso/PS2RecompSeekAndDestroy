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

// Function: entry_0016eb88
// Address: 0x16eb88 - 0x16ec08
void entry_0016eb88_0x16eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eb88_0x16eb88");
#endif

    ctx->pc = 0x16eb88u;

    // 0x16eb88: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
    ctx->pc = 0x16EB88u;
    {
        const bool branch_taken_0x16eb88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB88u;
        // 0x16eb8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb88) {
            ctx->pc = 0x16EC38u;
            return;
        }
    }
    ctx->pc = 0x16EB90u;
    // 0x16eb90: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x16eb90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16eb94: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16eb94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eb98: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16eb98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eb9c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16eb9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eba0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16eba0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16eba4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16eba4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16eba8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16eba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ebac: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ebacu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ebb0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ebb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ebb4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16ebb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ebb8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16ebb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ebbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ebbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ebc0: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ebc0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ebc4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ebc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ebc8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ebcc: 0xc78084fc  lwc1        $f0, -0x7B04($gp)
    ctx->pc = 0x16ebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ebd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ebd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ebd4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x16EBD4u;
    {
        const bool branch_taken_0x16ebd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBD4u;
        // 0x16ebd8: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebd4) {
            ctx->pc = 0x16EC18u;
            return;
        }
    }
    ctx->pc = 0x16EBDCu;
    // 0x16ebdc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x16ebdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ebe0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EBE0u;
    {
        const bool branch_taken_0x16ebe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBE0u;
        // 0x16ebe4: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebe0) {
            ctx->pc = 0x16EC08u;
            return;
        }
    }
    ctx->pc = 0x16EBE8u;
    // 0x16ebe8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16ebe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ebec: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16ebecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16ebf0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ebf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ebf4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ebf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ebf8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ebfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16EBFCu;
    {
        const bool branch_taken_0x16ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBFCu;
        // 0x16ec00: 0x26220280  addiu       $v0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebfc) {
            ctx->pc = 0x16EC20u;
            return;
        }
    }
    ctx->pc = 0x16EC04u;
    // 0x16ec04: 0x0  nop
    ctx->pc = 0x16ec04u;
    // NOP
    ctx->pc = 0x16ec08u;
}
