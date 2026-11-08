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

// Function: entry_00181e5c
// Address: 0x181e5c - 0x181ee0
void entry_00181e5c_0x181e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e5c_0x181e5c");
#endif

    ctx->pc = 0x181e5cu;

    // 0x181e5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181e60: 0x50620073  beql        $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x181E60u;
    {
        const bool branch_taken_0x181e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181e60) {
            ctx->pc = 0x181E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181E60u;
            // 0x181e64: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            return;
        }
    }
    ctx->pc = 0x181E68u;
    // 0x181e68: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x181E68u;
    {
        const bool branch_taken_0x181e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E68u;
        // 0x181e6c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e68) {
            ctx->pc = 0x1820C8u;
            return;
        }
    }
    ctx->pc = 0x181E70u;
    // 0x181e70: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x181e70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x181e74: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x181e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e78: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x181e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e7c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x181e7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181e80: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x181e80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x181e84: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x181e84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181e88: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x181e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181e8c: 0x4b0321be  vmulaz.x    $ACC, $vf4, $vf3z
    ctx->pc = 0x181e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181e90: 0x4b04194e  vmsubz.x    $vf5, $vf3, $vf4z
    ctx->pc = 0x181e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181e94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181e94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181e9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x181e9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x181ea0: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x181ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181ea4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x181EA4u;
    {
        const bool branch_taken_0x181ea4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EA4u;
        // 0x181ea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ea4) {
            ctx->pc = 0x181EE0u;
            return;
        }
    }
    ctx->pc = 0x181EACu;
    // 0x181eac: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x181eacu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x181eb0: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x181eb0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181eb4: 0x4bc231ec  vsub.xyz    $vf7, $vf6, $vf2
    ctx->pc = 0x181eb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181eb8: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181eb8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181ebc: 0x4b0339be  vmulaz.x    $ACC, $vf7, $vf3z
    ctx->pc = 0x181ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181ec0: 0x4b071a4e  vmsubz.x    $vf9, $vf3, $vf7z
    ctx->pc = 0x181ec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x181ec4: 0x4a4439bc  vmulax.z    $ACC, $vf7, $vf4x
    ctx->pc = 0x181ec4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x181ec8: 0x4a47228c  vmsubx.z    $vf10, $vf4, $vf7x
    ctx->pc = 0x181ec8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x181ecc: 0x4a0003bf  vwaitq
    ctx->pc = 0x181eccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181ed0: 0x4b004a1c  vmulq.x     $vf8, $vf9, $Q
    ctx->pc = 0x181ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181ed4: 0x4a40521c  vmulq.z     $vf8, $vf10, $Q
    ctx->pc = 0x181ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181ed8: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x181edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181ee0u;
}
