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

// Function: __static_initialization_and_destruction_0
// Address: 0x131c50 - 0x131e04
void ps2___static_initialization_and_destruction_0_0x131c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___static_initialization_and_destruction_0_0x131c50");
#endif

    switch (ctx->pc) {
        case 0x131ca8u: goto label_131ca8;
        case 0x131de0u: goto label_131de0;
        default: break;
    }

    ctx->pc = 0x131c50u;

    // 0x131c50: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x131c50u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x131c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x131c58: 0x15e20068  bne         $t7, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x131C58u;
    {
        const bool branch_taken_0x131c58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x131C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C58u;
        // 0x131c5c: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c58) {
            ctx->pc = 0x131DFCu;
            goto label_131dfc;
        }
    }
    ctx->pc = 0x131C60u;
    // 0x131c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131c64: 0x15620037  bne         $t3, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x131C64u;
    {
        const bool branch_taken_0x131c64 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x131C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C64u;
        // 0x131c68: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c64) {
            ctx->pc = 0x131D44u;
            goto label_131d44;
        }
    }
    ctx->pc = 0x131C6Cu;
    // 0x131c6c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x131c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x131c70: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131c74: 0x244da318  addiu       $t5, $v0, -0x5CE8
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943512));
    // 0x131c78: 0x246ca338  addiu       $t4, $v1, -0x5CC8
    ctx->pc = 0x131c78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943544));
    // 0x131c7c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x131c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FA318u));
    // 0x131c80: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x131c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131c84: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x131c84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FA338u));
    // 0x131c88: 0x246794f0  addiu       $a3, $v1, -0x6B10
    ctx->pc = 0x131c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939888));
    // 0x131c8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x131c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x131c90: 0x2409002b  addiu       $t1, $zero, 0x2B
    ctx->pc = 0x131c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x131c94: 0x827006  srlv        $t6, $v0, $a0
    ctx->pc = 0x131c94u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x131c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x131c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c9c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x131c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131ca0: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x131ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x131ca4: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x131ca4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_131ca8:
    // 0x131ca8: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x131ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x131cac: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x131cacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cb0: 0xa4e00004  sh          $zero, 0x4($a3)
    ctx->pc = 0x131cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cb4: 0xa4e0001c  sh          $zero, 0x1C($a3)
    ctx->pc = 0x131cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cb8: 0xa4e0001e  sh          $zero, 0x1E($a3)
    ctx->pc = 0x131cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cbc: 0xa4ee0006  sh          $t6, 0x6($a3)
    ctx->pc = 0x131cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 14));
    // 0x131cc0: 0xa4e00002  sh          $zero, 0x2($a3)
    ctx->pc = 0x131cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cc4: 0x71001004  plzcw       $v0, $t0
    ctx->pc = 0x131cc4u;
    { uint64_t v = GPR_U64(ctx, 8); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x131cc8: 0x70021488  pextlw      $v0, $zero, $v0
    ctx->pc = 0x131cc8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x131ccc: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x131cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x131cd0: 0xa4e20018  sh          $v0, 0x18($a3)
    ctx->pc = 0x131cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x131cd4: 0x71001804  plzcw       $v1, $t0
    ctx->pc = 0x131cd4u;
    { uint64_t v = GPR_U64(ctx, 8); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x131cd8: 0x70031c88  pextlw      $v1, $zero, $v1
    ctx->pc = 0x131cd8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x131cdc: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x131cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x131ce0: 0xa4e00008  sh          $zero, 0x8($a3)
    ctx->pc = 0x131ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ce4: 0xa4e3001a  sh          $v1, 0x1A($a3)
    ctx->pc = 0x131ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x131ce8: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x131ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x131cec: 0xa4f9000a  sh          $t9, 0xA($a3)
    ctx->pc = 0x131cecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 25));
    // 0x131cf0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x131cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x131cf4: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x131cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cf8: 0xa4e00020  sh          $zero, 0x20($a3)
    ctx->pc = 0x131cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cfc: 0xa4e00022  sh          $zero, 0x22($a3)
    ctx->pc = 0x131cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x131d00: 0xfce00038  sd          $zero, 0x38($a3)
    ctx->pc = 0x131d00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 0));
    // 0x131d04: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x131d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x131d08: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x131d08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x131d0c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x131d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x131d10: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x131d10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x131d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131d18: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x131d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x131d1c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x131d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x131d20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x131d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131d24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131d2c: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x131d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x131d30: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x131d30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x131d34: 0xa4e00030  sh          $zero, 0x30($a3)
    ctx->pc = 0x131d34u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x131d38: 0x1538ffdb  bne         $t1, $t8, . + 4 + (-0x25 << 2)
    ctx->pc = 0x131D38u;
    {
        const bool branch_taken_0x131d38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 24));
        ctx->pc = 0x131D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D38u;
        // 0x131d3c: 0x24e70048  addiu       $a3, $a3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d38) {
            ctx->pc = 0x131CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131ca8;
        }
    }
    ctx->pc = 0x131D40u;
    // 0x131d40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x131d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_131d44:
    // 0x131d44: 0x15e2002d  bne         $t7, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x131D44u;
    {
        const bool branch_taken_0x131d44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        if (branch_taken_0x131d44) {
            ctx->pc = 0x131DFCu;
            goto label_131dfc;
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
            goto label_131db8;
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
label_131db8:
    // 0x131db8: 0x15600010  bnez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x131DB8u;
    {
        const bool branch_taken_0x131db8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x131db8) {
            ctx->pc = 0x131DFCu;
            goto label_131dfc;
        }
    }
    ctx->pc = 0x131DC0u;
    // 0x131dc0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x131dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x131dc4: 0x244294f0  addiu       $v0, $v0, -0x6B10
    ctx->pc = 0x131dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x131dc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x131DC8u;
    {
        const bool branch_taken_0x131dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dc8) {
            ctx->pc = 0x131DFCu;
            goto label_131dfc;
        }
    }
    ctx->pc = 0x131DD0u;
    // 0x131dd0: 0x24430c60  addiu       $v1, $v0, 0xC60
    ctx->pc = 0x131dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x131dd4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x131DD4u;
    {
        const bool branch_taken_0x131dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131dd4) {
            ctx->pc = 0x131DFCu;
            goto label_131dfc;
        }
    }
    ctx->pc = 0x131DDCu;
    // 0x131ddc: 0x2463ffb8  addiu       $v1, $v1, -0x48
    ctx->pc = 0x131ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
label_131de0:
    // 0x131de0: 0x0  nop
    ctx->pc = 0x131de0u;
    // NOP
    // 0x131de4: 0x0  nop
    ctx->pc = 0x131de4u;
    // NOP
    // 0x131de8: 0x0  nop
    ctx->pc = 0x131de8u;
    // NOP
    // 0x131dec: 0x0  nop
    ctx->pc = 0x131decu;
    // NOP
    // 0x131df0: 0x0  nop
    ctx->pc = 0x131df0u;
    // NOP
    // 0x131df4: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131DF4u;
    {
        const bool branch_taken_0x131df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x131df4) {
            ctx->pc = 0x131DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DF4u;
            // 0x131df8: 0x2463ffb8  addiu       $v1, $v1, -0x48 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131de0;
        }
    }
    ctx->pc = 0x131DFCu;
label_131dfc:
    // 0x131dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x131DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E04u;
}
