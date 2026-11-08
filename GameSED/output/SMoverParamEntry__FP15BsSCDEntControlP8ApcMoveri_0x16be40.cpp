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

// Function: SMoverParamEntry__FP15BsSCDEntControlP8ApcMoveri
// Address: 0x16be40 - 0x16c0fc
void SMoverParamEntry__FP15BsSCDEntControlP8ApcMoveri_0x16be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SMoverParamEntry__FP15BsSCDEntControlP8ApcMoveri_0x16be40");
#endif

    switch (ctx->pc) {
        case 0x16bea4u: goto label_16bea4;
        case 0x16beb0u: goto label_16beb0;
        case 0x16bed8u: goto label_16bed8;
        case 0x16bfb8u: goto label_16bfb8;
        case 0x16bfd8u: goto label_16bfd8;
        case 0x16c020u: goto label_16c020;
        case 0x16c040u: goto label_16c040;
        case 0x16c070u: goto label_16c070;
        case 0x16c080u: goto label_16c080;
        case 0x16c0a0u: goto label_16c0a0;
        case 0x16c0c8u: goto label_16c0c8;
        default: break;
    }

    ctx->pc = 0x16be40u;

    // 0x16be40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16be40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16be44: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x16be44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16be48: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16be48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16be4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16be4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be50: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16be54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16be54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be58: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16be5c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x16be5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x16be60: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x16BE60u;
    {
        const bool branch_taken_0x16be60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE60u;
        // 0x16be64: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be60) {
            ctx->pc = 0x16C0E0u;
            goto label_16c0e0;
        }
    }
    ctx->pc = 0x16BE68u;
    // 0x16be68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16be68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16be6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x16be70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16be70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16be74: 0x8c6373f0  lw          $v1, 0x73F0($v1)
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29680)));
    // 0x16be78: 0x600008  jr          $v1
    ctx->pc = 0x16BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BE80u: goto label_16be80;
            case 0x16BFC0u: goto label_16bfc0;
            case 0x16C018u: goto label_16c018;
            case 0x16C068u: goto label_16c068;
            case 0x16C078u: goto label_16c078;
            case 0x16C0C0u: goto label_16c0c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16BE80u;
label_16be80:
    // 0x16be80: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x16be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16be84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16be88: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BE88u;
    {
        const bool branch_taken_0x16be88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE88u;
        // 0x16be8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be88) {
            ctx->pc = 0x16BE9Cu;
            goto label_16be9c;
        }
    }
    ctx->pc = 0x16BE90u;
    // 0x16be90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16be94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BE94u;
    {
        const bool branch_taken_0x16be94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16be94) {
            ctx->pc = 0x16BEA8u;
            goto label_16bea8;
        }
    }
    ctx->pc = 0x16BE9Cu;
label_16be9c:
    // 0x16be9c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16BE9Cu;
    SET_GPR_U32(ctx, 31, 0x16BEA4u);
    ctx->pc = 0x16BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE9Cu;
    // 0x16bea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16BE9Cu, 0x16BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEA4u;
label_16bea4:
    // 0x16bea4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16bea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bea8:
    // 0x16bea8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16BEA8u;
    SET_GPR_U32(ctx, 31, 0x16BEB0u);
    ctx->pc = 0x16BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BEA8u;
    // 0x16beac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16BEA8u, 0x16BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEB0u;
label_16beb0:
    // 0x16beb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16beb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16beb4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16beb8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16beb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16bebc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16BEBCu;
    {
        const bool branch_taken_0x16bebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEBCu;
        // 0x16bec0: 0x133140  sll         $a2, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bebc) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BEC4u;
    // 0x16bec4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x16bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16bec8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16becc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16beccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bed0: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x16BED0u;
    SET_GPR_U32(ctx, 31, 0x16BED8u);
    ctx->pc = 0x16BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BED0u;
    // 0x16bed4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x16BED0u, 0x16BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BED8u;
label_16bed8:
    // 0x16bed8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BED8u;
    {
        const bool branch_taken_0x16bed8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BED8u;
        // 0x16bedc: 0x8e430154  lw          $v1, 0x154($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bed8) {
            ctx->pc = 0x16BEE8u;
            goto label_16bee8;
        }
    }
    ctx->pc = 0x16BEE0u;
    // 0x16bee0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16BEE0u;
    {
        const bool branch_taken_0x16bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEE0u;
        // 0x16bee4: 0x8c6301b4  lw          $v1, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bee0) {
            ctx->pc = 0x16BF28u;
            goto label_16bf28;
        }
    }
    ctx->pc = 0x16BEE8u;
label_16bee8:
    // 0x16bee8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BEE8u;
    {
        const bool branch_taken_0x16bee8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x16BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEE8u;
        // 0x16beec: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bee8) {
            ctx->pc = 0x16BF00u;
            goto label_16bf00;
        }
    }
    ctx->pc = 0x16BEF0u;
    // 0x16bef0: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x16bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x16bef4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x16bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x16bef8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16BEF8u;
    {
        const bool branch_taken_0x16bef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEF8u;
        // 0x16befc: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bef8) {
            ctx->pc = 0x16BF28u;
            goto label_16bf28;
        }
    }
    ctx->pc = 0x16BF00u;
label_16bf00:
    // 0x16bf00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bf04: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16bf08: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BF08u;
    {
        const bool branch_taken_0x16bf08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF08u;
        // 0x16bf0c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf08) {
            ctx->pc = 0x16BF20u;
            goto label_16bf20;
        }
    }
    ctx->pc = 0x16BF10u;
    // 0x16bf10: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x16bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x16bf14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16BF14u;
    {
        const bool branch_taken_0x16bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF14u;
        // 0x16bf18: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf14) {
            ctx->pc = 0x16BF24u;
            goto label_16bf24;
        }
    }
    ctx->pc = 0x16BF1Cu;
    // 0x16bf1c: 0x0  nop
    ctx->pc = 0x16bf1cu;
    // NOP
label_16bf20:
    // 0x16bf20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bf24:
    // 0x16bf24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16bf24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bf28:
    // 0x16bf28: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x16bf2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bf30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16bf34: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x16bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x16bf38: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x16bf38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf3c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16bf3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16bf40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16bf44: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x16bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x16bf48: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x16BF48u;
    {
        const bool branch_taken_0x16bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF48u;
        // 0x16bf4c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf48) {
            ctx->pc = 0x16C0E0u;
            goto label_16c0e0;
        }
    }
    ctx->pc = 0x16BF50u;
label_16bf50:
    // 0x16bf50: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16bf54: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x16bf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x16bf58: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x16bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x16bf5c: 0x24c60160  addiu       $a2, $a2, 0x160
    ctx->pc = 0x16bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x16bf60: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x16bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16bf64: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x16bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x16bf68: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x16bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x16bf6c: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x16bf6cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16bf70: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16bf70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bf74: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16bf74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16bf78: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16bf78u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16bf7c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16bf7cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16bf80: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16bf80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bf84: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16bf84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bf88: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16bf88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bf8c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16bf8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16bf90: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x16bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16bf94: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x16bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x16bf98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x16bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bf9c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x16bfa0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x16bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16bfa4: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x16bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x16bfa8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x16bfa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16bfac: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16bfb0: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x16BFB0u;
    SET_GPR_U32(ctx, 31, 0x16BFB8u);
    ctx->pc = 0x16BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFB0u;
    // 0x16bfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x16BFB0u, 0x16BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFB8u;
label_16bfb8:
    // 0x16bfb8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x16BFB8u;
    {
        const bool branch_taken_0x16bfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFB8u;
        // 0x16bfbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfb8) {
            ctx->pc = 0x16C0E4u;
            goto label_16c0e4;
        }
    }
    ctx->pc = 0x16BFC0u;
label_16bfc0:
    // 0x16bfc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16bfc4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x16bfc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16bfc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BFC8u;
    {
        const bool branch_taken_0x16bfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFC8u;
        // 0x16bfcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfc8) {
            ctx->pc = 0x16BFDCu;
            goto label_16bfdc;
        }
    }
    ctx->pc = 0x16BFD0u;
    // 0x16bfd0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16BFD0u;
    SET_GPR_U32(ctx, 31, 0x16BFD8u);
    ctx->pc = 0x16BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFD0u;
    // 0x16bfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16BFD0u, 0x16BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFD8u;
label_16bfd8:
    // 0x16bfd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16bfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bfdc:
    // 0x16bfdc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x16bfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x16bfe0: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x16bfe4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x16bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x16bfe8: 0x24c6a430  addiu       $a2, $a2, -0x5BD0
    ctx->pc = 0x16bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943792));
    // 0x16bfec: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x16bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x16bff0: 0x8cc41400  lw          $a0, 0x1400($a2)
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16bff4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x16bff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bff8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x16bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x16bffc: 0x8cc31400  lw          $v1, 0x1400($a2)
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16c000: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16c004: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x16c004u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x16c008: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x16c008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x16c00c: 0x8cc21400  lw          $v0, 0x1400($a2)
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16c010: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16C010u;
    {
        const bool branch_taken_0x16c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C010u;
        // 0x16c014: 0xac440044  sw          $a0, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c010) {
            ctx->pc = 0x16C0E0u;
            goto label_16c0e0;
        }
    }
    ctx->pc = 0x16C018u;
label_16c018:
    // 0x16c018: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C018u;
    SET_GPR_U32(ctx, 31, 0x16C020u);
    ctx->pc = 0x16C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C018u;
    // 0x16c01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C018u, 0x16C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C020u;
label_16c020:
    // 0x16c020: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x16c020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x16c024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16c024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c028: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16c02c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c030: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C030u;
    {
        const bool branch_taken_0x16c030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16c030) {
            ctx->pc = 0x16C034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C030u;
            // 0x16c034: 0x111823  negu        $v1, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C044u;
            goto label_16c044;
        }
    }
    ctx->pc = 0x16C038u;
    // 0x16c038: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C038u;
    SET_GPR_U32(ctx, 31, 0x16C040u);
    ctx->pc = 0x16C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C038u;
    // 0x16c03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C038u, 0x16C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C040u;
label_16c040:
    // 0x16c040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16c040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c044:
    // 0x16c044: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x16c044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c048: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C048u;
    {
        const bool branch_taken_0x16c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c048) {
            ctx->pc = 0x16C04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C048u;
            // 0x16c04c: 0xae510208  sw          $s1, 0x208($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C060u;
            goto label_16c060;
        }
    }
    ctx->pc = 0x16C050u;
    // 0x16c050: 0xae430208  sw          $v1, 0x208($s2)
    ctx->pc = 0x16c050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 3));
    // 0x16c054: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16C054u;
    {
        const bool branch_taken_0x16c054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C054u;
        // 0x16c058: 0xae510204  sw          $s1, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c054) {
            ctx->pc = 0x16C0E0u;
            goto label_16c0e0;
        }
    }
    ctx->pc = 0x16C05Cu;
    // 0x16c05c: 0x0  nop
    ctx->pc = 0x16c05cu;
    // NOP
label_16c060:
    // 0x16c060: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16C060u;
    {
        const bool branch_taken_0x16c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C060u;
        // 0x16c064: 0xae430204  sw          $v1, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c060) {
            ctx->pc = 0x16C0E0u;
            goto label_16c0e0;
        }
    }
    ctx->pc = 0x16C068u;
label_16c068:
    // 0x16c068: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C068u;
    SET_GPR_U32(ctx, 31, 0x16C070u);
    ctx->pc = 0x16C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C068u;
    // 0x16c06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C068u, 0x16C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C070u;
label_16c070:
    // 0x16c070: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16C070u;
    {
        const bool branch_taken_0x16c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C070u;
        // 0x16c074: 0xae420210  sw          $v0, 0x210($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c070) {
            ctx->pc = 0x16C0E0u;
            goto label_16c0e0;
        }
    }
    ctx->pc = 0x16C078u;
label_16c078:
    // 0x16c078: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C078u;
    SET_GPR_U32(ctx, 31, 0x16C080u);
    ctx->pc = 0x16C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C078u;
    // 0x16c07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C078u, 0x16C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C080u;
label_16c080:
    // 0x16c080: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x16c080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x16c084: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16c084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c088: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16c088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16c08c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c090: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C090u;
    {
        const bool branch_taken_0x16c090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16c090) {
            ctx->pc = 0x16C094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C090u;
            // 0x16c094: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C0A0u;
            goto label_16c0a0;
        }
    }
    ctx->pc = 0x16C098u;
    // 0x16c098: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C098u;
    SET_GPR_U32(ctx, 31, 0x16C0A0u);
    ctx->pc = 0x16C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C098u;
    // 0x16c09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C098u, 0x16C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0A0u;
label_16c0a0:
    // 0x16c0a0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x16c0a0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c0a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16c0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16c0a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c0ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16c0b0: 0xe6400200  swc1        $f0, 0x200($s2)
    ctx->pc = 0x16c0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 512), bits); }
    // 0x16c0b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16C0B4u;
    {
        const bool branch_taken_0x16c0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0B4u;
        // 0x16c0b8: 0xe641020c  swc1        $f1, 0x20C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c0b4) {
            ctx->pc = 0x16C0E0u;
            goto label_16c0e0;
        }
    }
    ctx->pc = 0x16C0BCu;
    // 0x16c0bc: 0x0  nop
    ctx->pc = 0x16c0bcu;
    // NOP
label_16c0c0:
    // 0x16c0c0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C0C0u;
    SET_GPR_U32(ctx, 31, 0x16C0C8u);
    ctx->pc = 0x16C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0C0u;
    // 0x16c0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C0C0u, 0x16C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0C8u;
label_16c0c8:
    // 0x16c0c8: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x16c0cc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x16c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x16c0d0: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x16c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x16c0d4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x16c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x16c0d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16c0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16c0dc: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x16c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
label_16c0e0:
    // 0x16c0e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16c0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c0e4:
    // 0x16c0e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16c0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c0e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16c0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c0ec: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16c0ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16c0f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16c0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16C0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0F4u;
        // 0x16c0f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C0FCu;
}
