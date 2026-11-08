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

// Function: entry_0013a1e0
// Address: 0x13a1e0 - 0x13a274
void entry_0013a1e0_0x13a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a1e0_0x13a1e0");
#endif

    ctx->pc = 0x13a1e0u;

    // 0x13a1e0: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x13A1E0u;
    {
        const bool branch_taken_0x13a1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1E0u;
        // 0x13a1e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1e0) {
            ctx->pc = 0x13A2B8u;
            return;
        }
    }
    ctx->pc = 0x13A1E8u;
    // 0x13a1e8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13a1ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a1f0: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x13a1f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13a1f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a1f8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13a1f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a1fc: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13a1fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13a200: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13a200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a204: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13a204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a208: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13a208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a20c: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13a20cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13a210: 0x4a0003bf  vwaitq
    ctx->pc = 0x13a210u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13a214: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x13a214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a218: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13a218u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13a21c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13a21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13a220: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x13a220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x13a224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a228: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13a228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a22c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x13A22Cu;
    {
        const bool branch_taken_0x13a22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A22Cu;
        // 0x13a230: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a22c) {
            ctx->pc = 0x13A2B8u;
            return;
        }
    }
    ctx->pc = 0x13A234u;
    // 0x13a234: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x13a234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a238: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x13a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x13a23c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13a240: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13a244: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13A244u;
    {
        const bool branch_taken_0x13a244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a244) {
            ctx->pc = 0x13A248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A244u;
            // 0x13a248: 0xc4600090  lwc1        $f0, 0x90($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A284u;
            return;
        }
    }
    ctx->pc = 0x13A24Cu;
    // 0x13a24c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x13a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a254: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a258: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13A258u;
    {
        const bool branch_taken_0x13a258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A258u;
        // 0x13a25c: 0x8c620084  lw          $v0, 0x84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a258) {
            ctx->pc = 0x13A274u;
            return;
        }
    }
    ctx->pc = 0x13A260u;
    // 0x13a260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13a260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13a264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a268: 0x0  nop
    ctx->pc = 0x13a268u;
    // NOP
    // 0x13a26c: 0x0  nop
    ctx->pc = 0x13a26cu;
    // NOP
    // 0x13a270: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13a270u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    ctx->pc = 0x13a274u;
}
