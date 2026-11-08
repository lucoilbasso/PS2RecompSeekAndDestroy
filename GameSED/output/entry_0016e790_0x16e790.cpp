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

// Function: entry_0016e790
// Address: 0x16e790 - 0x16e854
void entry_0016e790_0x16e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e790_0x16e790");
#endif

    ctx->pc = 0x16e790u;

    // 0x16e790: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x16E790u;
    {
        const bool branch_taken_0x16e790 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E790u;
        // 0x16e794: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e790) {
            ctx->pc = 0x16E854u;
            return;
        }
    }
    ctx->pc = 0x16E798u;
    // 0x16e798: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x16e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16e79c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x16e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x16e7a0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16e7a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16e7a4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x16e7a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16e7a8: 0x70431048  psubw       $v0, $v0, $v1
    ctx->pc = 0x16e7a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16e7ac: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x16e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x16e7b0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16e7b4: 0x8e260210  lw          $a2, 0x210($s1)
    ctx->pc = 0x16e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e7b8: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x16e7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x16e7bc: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x16e7bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16e7c0: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x16e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x16e7c4: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x16e7c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x16e7c8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16e7cc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x16e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x16e7d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16e7d4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x16e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16e7d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e7dc: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x16e7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x16e7e0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x16e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16e7e4: 0x28694000  slti        $t1, $v1, 0x4000
    ctx->pc = 0x16e7e4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16e7e8: 0x24668000  addiu       $a2, $v1, -0x8000
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x16e7ec: 0x28474000  slti        $a3, $v0, 0x4000
    ctx->pc = 0x16e7ecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16e7f0: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x16e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x16e7f4: 0xc9180a  movz        $v1, $a2, $t1
    ctx->pc = 0x16e7f4u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x16e7f8: 0x87100a  movz        $v0, $a0, $a3
    ctx->pc = 0x16e7f8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x16e7fc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x16e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x16e800: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x16e800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x16e804: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x16e804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16e808: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x16e808u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x16e80c: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x16e80cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x16e810: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x16e810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x16e814: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x16e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16e818: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16e818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x16e81c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x16e81cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16e820: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16e820u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e824: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16e824u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16e828: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x16e828u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16e82c: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x16e830: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16e830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e834: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16e834u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e838: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16e838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16e83c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16e840: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16e844: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e848: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16e848u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e84c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16e84cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e850: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e850u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x16e854u;
}
