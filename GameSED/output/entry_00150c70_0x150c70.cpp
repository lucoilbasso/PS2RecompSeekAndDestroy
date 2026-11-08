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

// Function: entry_00150c70
// Address: 0x150c70 - 0x150d40
void entry_00150c70_0x150c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c70_0x150c70");
#endif

    switch (ctx->pc) {
        case 0x150c84u: goto label_150c84;
        case 0x150cfcu: goto label_150cfc;
        default: break;
    }

    ctx->pc = 0x150c70u;

    // 0x150c70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150c74: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x150C74u;
    {
        const bool branch_taken_0x150c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C74u;
        // 0x150c78: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c74) {
            ctx->pc = 0x150D68u;
            return;
        }
    }
    ctx->pc = 0x150C7Cu;
    // 0x150c7c: 0xc067a02  jal         func_19E808
    ctx->pc = 0x150C7Cu;
    SET_GPR_U32(ctx, 31, 0x150C84u);
    ctx->pc = 0x150C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C7Cu;
    // 0x150c80: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x150C7Cu, 0x150C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C84u;
label_150c84:
    // 0x150c84: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x150c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c8c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x150c90: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x150c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x150c94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150c98: 0x24474000  addiu       $a3, $v0, 0x4000
    ctx->pc = 0x150c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x150c9c: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x150ca0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x150ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x150ca4: 0x30e77fff  andi        $a3, $a3, 0x7FFF
    ctx->pc = 0x150ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x150ca8: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x150cac: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x150cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150cb4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150cbc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x150cc0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x150cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150cc4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cc8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x150cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x150ccc: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x150cccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x150cd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x150cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x150cd4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x150cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x150cd8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x150cd8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x150cdc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x150cdcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x150ce0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x150ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x150ce4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x150ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x150ce8: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150cec: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x150cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x150cf0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x150cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150cf4: 0xc0449ae  jal         func_1126B8
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x150CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CF4u;
    // 0x150cf8: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126B8u, 0x150CF4u, 0x150CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x150d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150d04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x150d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150d08: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x150D08u;
    {
        const bool branch_taken_0x150d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D08u;
        // 0x150d0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d08) {
            ctx->pc = 0x150D40u;
            return;
        }
    }
    ctx->pc = 0x150D10u;
    // 0x150d10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150d14: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x150d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x150d18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150d1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150d20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x150d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x150d24: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x150d24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150d28: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x150d28u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150d2c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x150d2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150d30: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x150d34: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x150d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150d38: 0x706418e8  pminw       $v1, $v1, $a0
    ctx->pc = 0x150d38u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x150d3c: 0x32000  sll         $a0, $v1, 0
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x150d40u;
}
