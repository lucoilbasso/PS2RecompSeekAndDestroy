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

// Function: entry_00131d44
// Address: 0x131d44 - 0x131db8
void entry_00131d44_0x131d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131d44_0x131d44");
#endif

    ctx->pc = 0x131d44u;

    // 0x131d44: 0x15e2002d  bne         $t7, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x131D44u;
    {
        const bool branch_taken_0x131d44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        if (branch_taken_0x131d44) {
            ctx->pc = 0x131DFCu;
            return;
        }
    }
    ctx->pc = 0x131D4Cu;
    // 0x131d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d50: 0x15620019  bne         $t3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x131D50u;
    {
        const bool branch_taken_0x131d50 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x131D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D50u;
        // 0x131d54: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d50) {
            ctx->pc = 0x131DB8u;
            return;
        }
    }
    ctx->pc = 0x131D58u;
    // 0x131d58: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x131d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x131d5c: 0x2463a260  addiu       $v1, $v1, -0x5DA0
    ctx->pc = 0x131d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943328));
    // 0x131d60: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x131d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x131d64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131d68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x131d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x131d6c: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x131d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x131d70: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131d74: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x131d74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x131d78: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x131d78u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x131d7c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x131d7cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x131d80: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x131d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x131d84: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x131d84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x131d88: 0x2466000c  addiu       $a2, $v1, 0xC
    ctx->pc = 0x131d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x131d8c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x131d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x131d90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131d90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131d94: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x131d94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x131d98: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x131d98u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x131d9c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x131d9cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x131da0: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x131da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x131da4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x131da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x131da8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x131da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x131dac: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x131dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x131db0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x131db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x131db4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x131db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x131db8u;
}
