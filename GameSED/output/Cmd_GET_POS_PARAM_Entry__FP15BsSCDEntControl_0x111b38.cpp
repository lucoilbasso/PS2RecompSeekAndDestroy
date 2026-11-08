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

// Function: Cmd_GET_POS_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x111b38 - 0x111c84
void Cmd_GET_POS_PARAM_Entry__FP15BsSCDEntControl_0x111b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_POS_PARAM_Entry__FP15BsSCDEntControl_0x111b38");
#endif

    switch (ctx->pc) {
        case 0x111b70u: goto label_111b70;
        case 0x111b80u: goto label_111b80;
        case 0x111b94u: goto label_111b94;
        case 0x111bfcu: goto label_111bfc;
        case 0x111c14u: goto label_111c14;
        case 0x111c30u: goto label_111c30;
        default: break;
    }

    ctx->pc = 0x111b38u;

    // 0x111b38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111b3c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x111b40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x111b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x111b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x111b4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x111b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111b50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x111b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x111b54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x111b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x111b58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111b5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x111b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x111b60: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x111B60u;
    {
        const bool branch_taken_0x111b60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x111B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B60u;
        // 0x111b64: 0x8c52b830  lw          $s2, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b60) {
            ctx->pc = 0x111B78u;
            goto label_111b78;
        }
    }
    ctx->pc = 0x111B68u;
    // 0x111b68: 0xc044678  jal         func_1119E0
    ctx->pc = 0x111B68u;
    SET_GPR_U32(ctx, 31, 0x111B70u);
    ctx->pc = 0x1119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1119E0u, 0x111B68u, 0x111B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B70u;
label_111b70:
    // 0x111b70: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x111B70u;
    {
        const bool branch_taken_0x111b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B70u;
        // 0x111b74: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b70) {
            ctx->pc = 0x111C6Cu;
            goto label_111c6c;
        }
    }
    ctx->pc = 0x111B78u;
label_111b78:
    // 0x111b78: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x111B78u;
    SET_GPR_U32(ctx, 31, 0x111B80u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x111B78u, 0x111B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B80u;
label_111b80:
    // 0x111b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b84: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x111b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x111b88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x111b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111B8Cu;
    SET_GPR_U32(ctx, 31, 0x111B94u);
    ctx->pc = 0x111B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B8Cu;
    // 0x111b90: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111B8Cu, 0x111B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B94u;
label_111b94:
    // 0x111b94: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x111b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x111b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x111b9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x111b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x111ba0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111ba4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x111ba8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x111bac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x111bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111bb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x111bb4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x111bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x111bb8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x111BB8u;
    {
        const bool branch_taken_0x111bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB8u;
        // 0x111bbc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bb8) {
            ctx->pc = 0x111C20u;
            goto label_111c20;
        }
    }
    ctx->pc = 0x111BC0u;
    // 0x111bc0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x111bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x111bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111bc8: 0x8c634060  lw          $v1, 0x4060($v1)
    ctx->pc = 0x111bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x111bcc: 0x600008  jr          $v1
    ctx->pc = 0x111BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111BD8u: goto label_111bd8;
            case 0x111BF0u: goto label_111bf0;
            case 0x111C08u: goto label_111c08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x111BD4u;
    // 0x111bd4: 0x0  nop
    ctx->pc = 0x111bd4u;
    // NOP
label_111bd8:
    // 0x111bd8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x111bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111bdc: 0x4be2117f  vftoi15.xyzw $vf2, $vf2
    ctx->pc = 0x111bdcu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111be0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x111be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x111be4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x111BE4u;
    {
        const bool branch_taken_0x111be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BE4u;
        // 0x111be8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111be4) {
            ctx->pc = 0x111C30u;
            goto label_111c30;
        }
    }
    ctx->pc = 0x111BECu;
    // 0x111bec: 0x0  nop
    ctx->pc = 0x111becu;
    // NOP
label_111bf0:
    // 0x111bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111bf4: 0xc0527d6  jal         func_149F58
    ctx->pc = 0x111BF4u;
    SET_GPR_U32(ctx, 31, 0x111BFCu);
    ctx->pc = 0x111BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BF4u;
    // 0x111bf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F58u, 0x111BF4u, 0x111BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BFCu;
label_111bfc:
    // 0x111bfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x111BFCu;
    {
        const bool branch_taken_0x111bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BFCu;
        // 0x111c00: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bfc) {
            ctx->pc = 0x111C30u;
            goto label_111c30;
        }
    }
    ctx->pc = 0x111C04u;
    // 0x111c04: 0x0  nop
    ctx->pc = 0x111c04u;
    // NOP
label_111c08:
    // 0x111c08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c0c: 0xc052810  jal         func_14A040
    ctx->pc = 0x111C0Cu;
    SET_GPR_U32(ctx, 31, 0x111C14u);
    ctx->pc = 0x111C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C0Cu;
    // 0x111c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A040u, 0x111C0Cu, 0x111C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C14u;
label_111c14:
    // 0x111c14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111C14u;
    {
        const bool branch_taken_0x111c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C14u;
        // 0x111c18: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c14) {
            ctx->pc = 0x111C30u;
            goto label_111c30;
        }
    }
    ctx->pc = 0x111C1Cu;
    // 0x111c1c: 0x0  nop
    ctx->pc = 0x111c1cu;
    // NOP
label_111c20:
    // 0x111c20: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x111c20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111c24: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x111c24u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111c28: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x111c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x111c2c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x111c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_111c30:
    // 0x111c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111c34: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111C34u;
    {
        const bool branch_taken_0x111c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x111C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C34u;
        // 0x111c38: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c34) {
            ctx->pc = 0x111C64u;
            goto label_111c64;
        }
    }
    ctx->pc = 0x111C3Cu;
    // 0x111c3c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x111c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x111c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111C40u;
    {
        const bool branch_taken_0x111c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C40u;
        // 0x111c44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c40) {
            ctx->pc = 0x111C58u;
            goto label_111c58;
        }
    }
    ctx->pc = 0x111C48u;
    // 0x111c48: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x111C48u;
    {
        const bool branch_taken_0x111c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c48) {
            ctx->pc = 0x111C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C48u;
            // 0x111c4c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C64u;
            goto label_111c64;
        }
    }
    ctx->pc = 0x111C50u;
    // 0x111c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111C50u;
    {
        const bool branch_taken_0x111c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C50u;
        // 0x111c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c50) {
            ctx->pc = 0x111C64u;
            goto label_111c64;
        }
    }
    ctx->pc = 0x111C58u;
label_111c58:
    // 0x111c58: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111C58u;
    {
        const bool branch_taken_0x111c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x111c58) {
            ctx->pc = 0x111C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C58u;
            // 0x111c5c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C64u;
            goto label_111c64;
        }
    }
    ctx->pc = 0x111C60u;
    // 0x111c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111c64:
    // 0x111c64: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x111c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x111c68: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_111c6c:
    // 0x111c6c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x111c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111c70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x111c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111c74: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x111c74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x111c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x111c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x111C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C7Cu;
        // 0x111c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C84u;
}
