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

// Function: entry_00180a08
// Address: 0x180a08 - 0x180a80
void entry_00180a08_0x180a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180a08_0x180a08");
#endif

    ctx->pc = 0x180a08u;

    // 0x180a08: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x180A08u;
    {
        const bool branch_taken_0x180a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180a08) {
            ctx->pc = 0x180A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180A08u;
            // 0x180a0c: 0x97020002  lhu         $v0, 0x2($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180BD4u;
            return;
        }
    }
    ctx->pc = 0x180A10u;
    // 0x180a10: 0xc5a00028  lwc1        $f0, 0x28($t5)
    ctx->pc = 0x180a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a14: 0x95e20004  lhu         $v0, 0x4($t7)
    ctx->pc = 0x180a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x180a18: 0xe7200010  swc1        $f0, 0x10($t9)
    ctx->pc = 0x180a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 16), bits); }
    // 0x180a1c: 0x95e40006  lhu         $a0, 0x6($t7)
    ctx->pc = 0x180a1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 6)));
    // 0x180a20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180a24: 0x95e50008  lhu         $a1, 0x8($t7)
    ctx->pc = 0x180a24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x180a28: 0xc26021  addu        $t4, $a2, $v0
    ctx->pc = 0x180a28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x180a2c: 0x95e3000a  lhu         $v1, 0xA($t7)
    ctx->pc = 0x180a2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 10)));
    // 0x180a30: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x180a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180a34: 0xc5a0002c  lwc1        $f0, 0x2C($t5)
    ctx->pc = 0x180a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a38: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x180a38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180a3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180a40: 0xc45821  addu        $t3, $a2, $a0
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x180a44: 0xe7200014  swc1        $f0, 0x14($t9)
    ctx->pc = 0x180a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 20), bits); }
    // 0x180a48: 0xc55021  addu        $t2, $a2, $a1
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x180a4c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x180A4Cu;
    {
        const bool branch_taken_0x180a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A4Cu;
        // 0x180a50: 0x1034821  addu        $t1, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a4c) {
            ctx->pc = 0x180A80u;
            return;
        }
    }
    ctx->pc = 0x180A54u;
    // 0x180a54: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x180a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x180a58: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x180a58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180a5c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x180a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180a60: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x180a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180a64: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x180a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180a68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x180a68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x180a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x180a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180a74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x180a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180a78: 0x45030056  bc1tl       . + 4 + (0x56 << 2)
    ctx->pc = 0x180A78u;
    {
        const bool branch_taken_0x180a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180a78) {
            ctx->pc = 0x180A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180A78u;
            // 0x180a7c: 0x97020002  lhu         $v0, 0x2($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180BD4u;
            return;
        }
    }
    ctx->pc = 0x180A80u;
}
