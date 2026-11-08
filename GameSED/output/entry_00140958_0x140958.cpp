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

// Function: entry_00140958
// Address: 0x140958 - 0x1409b8
void entry_00140958_0x140958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140958_0x140958");
#endif

    ctx->pc = 0x140958u;

    // 0x140958: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x140958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14095c: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x14095cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140960: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x140960u;
    {
        const bool branch_taken_0x140960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140960u;
        // 0x140964: 0x3c030026  lui         $v1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140960) {
            ctx->pc = 0x1409B8u;
            return;
        }
    }
    ctx->pc = 0x140968u;
    // 0x140968: 0x24632640  addiu       $v1, $v1, 0x2640
    ctx->pc = 0x140968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9792));
    // 0x14096c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x14096cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140970: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x140970u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140974: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x140974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x140978: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x140978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14097c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x14097cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x140980: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x140980u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x140984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x140988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14098c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x14098Cu;
    {
        const bool branch_taken_0x14098c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x140990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14098Cu;
        // 0x140990: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14098c) {
            ctx->pc = 0x1409BCu;
            return;
        }
    }
    ctx->pc = 0x140994u;
    // 0x140994: 0x0  nop
    ctx->pc = 0x140994u;
    // NOP
    // 0x140998: 0x0  nop
    ctx->pc = 0x140998u;
    // NOP
    // 0x14099c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x14099cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1409a0: 0xc66101a8  lwc1        $f1, 0x1A8($s3)
    ctx->pc = 0x1409a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1409a4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1409a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1409a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1409ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1409acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1409b0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x1409b0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x1409b4: 0xe66101a8  swc1        $f1, 0x1A8($s3)
    ctx->pc = 0x1409b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 424), bits); }
    ctx->pc = 0x1409b8u;
}
