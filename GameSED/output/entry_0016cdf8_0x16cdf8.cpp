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

// Function: entry_0016cdf8
// Address: 0x16cdf8 - 0x16ce78
void entry_0016cdf8_0x16cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cdf8_0x16cdf8");
#endif

    ctx->pc = 0x16cdf8u;

    // 0x16cdf8: 0x12a00040  beqz        $s5, . + 4 + (0x40 << 2)
    ctx->pc = 0x16CDF8u;
    {
        const bool branch_taken_0x16cdf8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDF8u;
        // 0x16cdfc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdf8) {
            ctx->pc = 0x16CEFCu;
            return;
        }
    }
    ctx->pc = 0x16CE00u;
    // 0x16ce00: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x16ce00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16ce04: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ce04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ce08: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ce08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ce0c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ce0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ce10: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ce10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16ce14: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ce14u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ce18: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ce18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ce1c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ce1cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ce20: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ce20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ce24: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16ce24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ce28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16ce28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ce2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ce30: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ce30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ce34: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ce34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ce38: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ce3c: 0xc7808488  lwc1        $f0, -0x7B78($gp)
    ctx->pc = 0x16ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ce40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ce40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ce44: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x16CE44u;
    {
        const bool branch_taken_0x16ce44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE44u;
        // 0x16ce48: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce44) {
            ctx->pc = 0x16CEE8u;
            return;
        }
    }
    ctx->pc = 0x16CE4Cu;
    // 0x16ce4c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x16ce4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ce50: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16CE50u;
    {
        const bool branch_taken_0x16ce50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ce50) {
            ctx->pc = 0x16CE78u;
            return;
        }
    }
    ctx->pc = 0x16CE58u;
    // 0x16ce58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ce58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ce5c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16ce5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16ce60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ce60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ce64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ce64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ce68: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ce6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16CE6Cu;
    {
        const bool branch_taken_0x16ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE6Cu;
        // 0x16ce70: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce6c) {
            ctx->pc = 0x16CE84u;
            return;
        }
    }
    ctx->pc = 0x16CE74u;
    // 0x16ce74: 0x0  nop
    ctx->pc = 0x16ce74u;
    // NOP
    ctx->pc = 0x16ce78u;
}
