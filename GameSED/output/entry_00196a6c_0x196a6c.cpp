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

// Function: entry_00196a6c
// Address: 0x196a6c - 0x196ad4
void entry_00196a6c_0x196a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196a6c_0x196a6c");
#endif

    ctx->pc = 0x196a6cu;

    // 0x196a6c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x196a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x196a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x196a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x196a74: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x196A74u;
    {
        const bool branch_taken_0x196a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196a74) {
            ctx->pc = 0x196AD4u;
            return;
        }
    }
    ctx->pc = 0x196A7Cu;
    // 0x196a7c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x196A7Cu;
    {
        const bool branch_taken_0x196a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a7c) {
            ctx->pc = 0x196AD4u;
            return;
        }
    }
    ctx->pc = 0x196A84u;
    // 0x196a84: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x196a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196a88: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x196a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x196a8c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x196a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x196a90: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x196a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x196a94: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x196a94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x196a98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x196a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x196a9c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x196a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x196aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196aa4: 0xc6800190  lwc1        $f0, 0x190($s4)
    ctx->pc = 0x196aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196aa8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x196aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x196aac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x196ab0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x196ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196ab4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x196AB4u;
    {
        const bool branch_taken_0x196ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AB4u;
        // 0x196ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ab4) {
            ctx->pc = 0x196B68u;
            return;
        }
    }
    ctx->pc = 0x196ABCu;
    // 0x196abc: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x196abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x196ac0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196AC0u;
    {
        const bool branch_taken_0x196ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ac0) {
            ctx->pc = 0x196AD4u;
            return;
        }
    }
    ctx->pc = 0x196AC8u;
    // 0x196ac8: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x196ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x196acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x196accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196ad0: 0xe64001c8  swc1        $f0, 0x1C8($s2)
    ctx->pc = 0x196ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 456), bits); }
    ctx->pc = 0x196ad4u;
}
