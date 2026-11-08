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

// Function: entry_0016ca08
// Address: 0x16ca08 - 0x16cacc
void entry_0016ca08_0x16ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ca08_0x16ca08");
#endif

    ctx->pc = 0x16ca08u;

    // 0x16ca08: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x16CA08u;
    {
        const bool branch_taken_0x16ca08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA08u;
        // 0x16ca0c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca08) {
            ctx->pc = 0x16CACCu;
            return;
        }
    }
    ctx->pc = 0x16CA10u;
    // 0x16ca10: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x16ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16ca14: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x16ca18: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16ca18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16ca1c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x16ca1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ca20: 0x70431048  psubw       $v0, $v0, $v1
    ctx->pc = 0x16ca20u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16ca24: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x16ca24u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x16ca28: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x16ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16ca2c: 0x8e260210  lw          $a2, 0x210($s1)
    ctx->pc = 0x16ca2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16ca30: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x16ca30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x16ca34: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x16ca34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16ca38: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x16ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x16ca3c: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x16ca3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x16ca40: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x16ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16ca44: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x16ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x16ca48: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16ca4c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x16ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16ca50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ca54: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x16ca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x16ca58: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x16ca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16ca5c: 0x28694000  slti        $t1, $v1, 0x4000
    ctx->pc = 0x16ca5cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16ca60: 0x24668000  addiu       $a2, $v1, -0x8000
    ctx->pc = 0x16ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x16ca64: 0x28474000  slti        $a3, $v0, 0x4000
    ctx->pc = 0x16ca64u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16ca68: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x16ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x16ca6c: 0xc9180a  movz        $v1, $a2, $t1
    ctx->pc = 0x16ca6cu;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x16ca70: 0x87100a  movz        $v0, $a0, $a3
    ctx->pc = 0x16ca70u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x16ca74: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x16ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x16ca78: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x16ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x16ca7c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x16ca7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16ca80: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x16ca80u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x16ca84: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x16ca84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x16ca88: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x16ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x16ca8c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x16ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16ca90: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x16ca94: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x16ca94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16ca98: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16ca98u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ca9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16ca9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16caa0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x16caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16caa4: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x16caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x16caa8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16caa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16caac: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16caacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cab0: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16cab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16cab4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16cab4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16cab8: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x16cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16cabc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16cabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cac0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16cac0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cac4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16cac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cac8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x16caccu;
}
