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

// Function: entry_00181268
// Address: 0x181268 - 0x1812f0
void entry_00181268_0x181268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181268_0x181268");
#endif

    ctx->pc = 0x181268u;

    // 0x181268: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x181268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18126c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x18126cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181270: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x181270u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x181274: 0x4a421946  vsubz.z     $vf5, $vf3, $vf2z
    ctx->pc = 0x181274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181278: 0x4b6503bc  vdiv        $Q, $vf0w, $vf5z
    ctx->pc = 0x181278u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18127c: 0x4b03119a  vmulz.x     $vf6, $vf2, $vf3z
    ctx->pc = 0x18127cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x181280: 0x4b0219da  vmulz.x     $vf7, $vf3, $vf2z
    ctx->pc = 0x181280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181284: 0x4b073284  vsubx.x     $vf10, $vf6, $vf7x
    ctx->pc = 0x181284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x181288: 0x4a83121a  vmulz.y     $vf8, $vf2, $vf3z
    ctx->pc = 0x181288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18128c: 0x4a821a5a  vmulz.y     $vf9, $vf3, $vf2z
    ctx->pc = 0x18128cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x181290: 0x4a8942c5  vsuby.y     $vf11, $vf8, $vf9y
    ctx->pc = 0x181290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x181294: 0x4a0003bf  vwaitq
    ctx->pc = 0x181294u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181298: 0x4b00511c  vmulq.x     $vf4, $vf10, $Q
    ctx->pc = 0x181298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18129c: 0x4a80591c  vmulq.y     $vf4, $vf11, $Q
    ctx->pc = 0x18129cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1812a0: 0xf9640000  sqc2        $vf4, 0x0($t3)
    ctx->pc = 0x1812a0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1812a4: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x1812a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1812a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1812ac: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x1812acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1812b0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1812b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812b4: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1812B4u;
    {
        const bool branch_taken_0x1812b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812b4) {
            ctx->pc = 0x1812B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812B4u;
            // 0x1812b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x1812BCu;
    // 0x1812bc: 0xc782856c  lwc1        $f2, -0x7A94($gp)
    ctx->pc = 0x1812bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1812c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1812c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812c4: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1812C4u;
    {
        const bool branch_taken_0x1812c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812c4) {
            ctx->pc = 0x1812C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812C4u;
            // 0x1812c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x1812CCu;
    // 0x1812cc: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x1812ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812d0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1812d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812d4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x1812D4u;
    {
        const bool branch_taken_0x1812d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812d4) {
            ctx->pc = 0x1812D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812D4u;
            // 0x1812d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x1812DCu;
    // 0x1812dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1812dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812e0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1812E0u;
    {
        const bool branch_taken_0x1812e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812e0) {
            ctx->pc = 0x1812E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812E0u;
            // 0x1812e4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1812F0u;
            return;
        }
    }
    ctx->pc = 0x1812E8u;
    // 0x1812e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1812E8u;
    {
        const bool branch_taken_0x1812e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1812ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812E8u;
        // 0x1812ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812e8) {
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x1812F0u;
}
