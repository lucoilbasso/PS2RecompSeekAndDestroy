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

// Function: entry_0013733c
// Address: 0x13733c - 0x137390
void entry_0013733c_0x13733c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013733c_0x13733c");
#endif

    ctx->pc = 0x13733cu;

    // 0x13733c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13733cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137340: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x137340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137344: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x137344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137348: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x137348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13734c: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13734cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x137350: 0x4a0003bf  vwaitq
    ctx->pc = 0x137350u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x137354: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x137354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137358: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x137358u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13735c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137364: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x137364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x137368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13736c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13736cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137370: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x137370u;
    {
        const bool branch_taken_0x137370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137370) {
            ctx->pc = 0x137390u;
            return;
        }
    }
    ctx->pc = 0x137378u;
    // 0x137378: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x13737c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13737cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137380: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x137380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137384: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x137384u;
    {
        const bool branch_taken_0x137384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137384) {
            ctx->pc = 0x1373A0u;
            return;
        }
    }
    ctx->pc = 0x13738Cu;
    // 0x13738c: 0x0  nop
    ctx->pc = 0x13738cu;
    // NOP
    ctx->pc = 0x137390u;
}
