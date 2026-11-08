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

// Function: ApFieldObjectClip__FP8WcEntityP8ApcRsc3DP16ApFieldBlockCtrlP6WcViewf
// Address: 0x13b990 - 0x13bb08
void ApFieldObjectClip__FP8WcEntityP8ApcRsc3DP16ApFieldBlockCtrlP6WcViewf_0x13b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldObjectClip__FP8WcEntityP8ApcRsc3DP16ApFieldBlockCtrlP6WcViewf_0x13b990");
#endif

    switch (ctx->pc) {
        case 0x13b9d8u: goto label_13b9d8;
        case 0x13ba70u: goto label_13ba70;
        case 0x13ba84u: goto label_13ba84;
        default: break;
    }

    ctx->pc = 0x13b990u;

    // 0x13b990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b994: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13b998: 0x249300d0  addiu       $s3, $a0, 0xD0
    ctx->pc = 0x13b998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x13b99c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13b9a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13b9a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13b9a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13b9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13b9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13b9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13b9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13b9bc: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x13b9bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13b9c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13b9c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x13b9c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13b9c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13b9cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13b9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13b9d0: 0xc051774  jal         func_145DD0
    ctx->pc = 0x13B9D0u;
    SET_GPR_U32(ctx, 31, 0x13B9D8u);
    ctx->pc = 0x13B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9D0u;
    // 0x13b9d4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145DD0u, 0x13B9D0u, 0x13B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9D8u;
label_13b9d8:
    // 0x13b9d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x13b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13b9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b9e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b9e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x13b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13b9ec: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13b9f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13b9f4: 0x704610c8  pmaxw       $v0, $v0, $a2
    ctx->pc = 0x13b9f4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x13b9f8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x13b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x13b9fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ba00: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x13ba00u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x13ba04: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x13ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x13ba08: 0x70a628c8  pmaxw       $a1, $a1, $a2
    ctx->pc = 0x13ba08u;
    SET_GPR_VEC(ctx, 5, PS2_PMAXW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x13ba0c: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x13ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x13ba10: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x13ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x13ba14: 0x70a428e8  pminw       $a1, $a1, $a0
    ctx->pc = 0x13ba14u;
    SET_GPR_VEC(ctx, 5, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13ba18: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x13ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x13ba1c: 0x706618c8  pmaxw       $v1, $v1, $a2
    ctx->pc = 0x13ba1cu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x13ba20: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x13ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13ba24: 0x706418e8  pminw       $v1, $v1, $a0
    ctx->pc = 0x13ba24u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13ba28: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x13ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13ba2c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x13ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x13ba30: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13ba34: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13ba34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ba38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ba3c: 0x24941140  addiu       $s4, $a0, 0x1140
    ctx->pc = 0x13ba3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4416));
    // 0x13ba40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13ba44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13ba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ba4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13ba4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ba54: 0xe28021  addu        $s0, $a3, $v0
    ctx->pc = 0x13ba54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13ba58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ba5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13ba5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13ba60: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BA60u;
    {
        const bool branch_taken_0x13ba60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA60u;
        // 0x13ba64: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba60) {
            ctx->pc = 0x13BA84u;
            goto label_13ba84;
        }
    }
    ctx->pc = 0x13BA68u;
    // 0x13ba68: 0xc050d58  jal         func_143560
    ctx->pc = 0x13BA68u;
    SET_GPR_U32(ctx, 31, 0x13BA70u);
    ctx->pc = 0x13BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA68u;
    // 0x13ba6c: 0x8ea50230  lw          $a1, 0x230($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143560u, 0x13BA68u, 0x13BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA70u;
label_13ba70:
    // 0x13ba70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13ba78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba7c: 0xc0516fe  jal         func_145BF8
    ctx->pc = 0x13BA7Cu;
    SET_GPR_U32(ctx, 31, 0x13BA84u);
    ctx->pc = 0x13BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA7Cu;
    // 0x13ba80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF8u, 0x13BA7Cu, 0x13BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA84u;
label_13ba84:
    // 0x13ba84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13ba88: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13ba88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13ba8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13ba90: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BA90u;
    {
        const bool branch_taken_0x13ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA90u;
        // 0x13ba94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba90) {
            ctx->pc = 0x13BAE0u;
            goto label_13bae0;
        }
    }
    ctx->pc = 0x13BA98u;
    // 0x13ba98: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x13ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13ba9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA9Cu;
    {
        const bool branch_taken_0x13ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba9c) {
            ctx->pc = 0x13BAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BA9Cu;
            // 0x13baa0: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BAACu;
            goto label_13baac;
        }
    }
    ctx->pc = 0x13BAA4u;
    // 0x13baa4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x13baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13baa8: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_13baac:
    // 0x13baac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x13baacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13bab0: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x13bab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13bab4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13bab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13bab8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13bab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13babc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13babcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13bac0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13bac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13bac4: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13bac4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13bac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13bac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13bacc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x13baccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x13bad0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bad4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BAD4u;
    {
        const bool branch_taken_0x13bad4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAD4u;
        // 0x13bad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bad4) {
            ctx->pc = 0x13BAE0u;
            goto label_13bae0;
        }
    }
    ctx->pc = 0x13BADCu;
    // 0x13badc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13badcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bae0:
    // 0x13bae0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13bae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bae4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13bae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13bae8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13bae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13baec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13baecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13baf0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13baf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13baf4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13baf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13baf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bafc: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x13bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13bb00: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB00u;
        // 0x13bb04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BB08u;
}
