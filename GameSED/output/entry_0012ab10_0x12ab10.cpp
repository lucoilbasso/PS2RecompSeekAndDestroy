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

// Function: entry_0012ab10
// Address: 0x12ab10 - 0x12abe0
void entry_0012ab10_0x12ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ab10_0x12ab10");
#endif

    ctx->pc = 0x12ab10u;

    // 0x12ab10: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x12ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ab14: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x12ab14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ab18: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x12AB18u;
    {
        const bool branch_taken_0x12ab18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x24e3fff0  addiu       $v1, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab18) {
            ctx->pc = 0x12ABE0u;
            return;
        }
    }
    ctx->pc = 0x12AB20u;
    // 0x12ab20: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12ab20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ab24: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12ab28: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12ab28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab2c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x12ab2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ab30: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ab30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12ab34: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ab38: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12ab3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12ab40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12ab40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12ab44: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12ab44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ab48: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ab4c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x12ab4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ab50: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x12ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x12ab54: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x12ab54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12ab58: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12ab58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab5c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ab5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12ab60: 0xf9220000  sqc2        $vf2, 0x0($t1)
    ctx->pc = 0x12ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ab64: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x12ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ab68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab6c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12ab6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12ab70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12ab70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12ab74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12ab74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ab78: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ab7c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x12ab7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12ab80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12ab84: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12ab84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ab88: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12ab88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab8c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ab8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12ab90: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ab94: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12ab94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ab98: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12ab9c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12aba0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12aba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12aba4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12aba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12aba8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12aba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12abac: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12abacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12abb0: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x12abb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12abb4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12abb8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12abb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12abbc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12abbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12abc0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12abc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12abc4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12abc8: 0x24e30240  addiu       $v1, $a3, 0x240
    ctx->pc = 0x12abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
    // 0x12abcc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12abccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12abd0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12abd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12ABD4u;
    {
        const bool branch_taken_0x12abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABD4u;
        // 0x12abd8: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abd4) {
            ctx->pc = 0x12ABF8u;
            return;
        }
    }
    ctx->pc = 0x12ABDCu;
    // 0x12abdc: 0x0  nop
    ctx->pc = 0x12abdcu;
    // NOP
    ctx->pc = 0x12abe0u;
}
