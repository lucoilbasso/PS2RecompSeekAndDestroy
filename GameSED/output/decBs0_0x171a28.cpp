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

// Function: decBs0
// Address: 0x171a28 - 0x171c50
void decBs0_0x171a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decBs0_0x171a28");
#endif

    switch (ctx->pc) {
        case 0x171a60u: goto label_171a60;
        case 0x171a68u: goto label_171a68;
        case 0x171a70u: goto label_171a70;
        case 0x171a84u: goto label_171a84;
        case 0x171a94u: goto label_171a94;
        case 0x171adcu: goto label_171adc;
        case 0x171b00u: goto label_171b00;
        case 0x171b24u: goto label_171b24;
        case 0x171b48u: goto label_171b48;
        case 0x171b78u: goto label_171b78;
        case 0x171bd0u: goto label_171bd0;
        case 0x171be0u: goto label_171be0;
        case 0x171be8u: goto label_171be8;
        case 0x171bf0u: goto label_171bf0;
        case 0x171c00u: goto label_171c00;
        case 0x171c18u: goto label_171c18;
        case 0x171c20u: goto label_171c20;
        default: break;
    }

    ctx->pc = 0x171a28u;

    // 0x171a28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x171a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x171a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x171a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x171a38: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x171a38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171a3c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x171a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x171a40: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x171a40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171a48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171a4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x171a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171a50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x171a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171a54: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x171a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x171a58: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x171A58u;
    {
        const bool branch_taken_0x171a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A58u;
        // 0x171a5c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a58) {
            ctx->pc = 0x171BE8u;
            goto label_171be8;
        }
    }
    ctx->pc = 0x171A60u;
label_171a60:
    // 0x171a60: 0xc05c120  jal         func_170480
    ctx->pc = 0x171A60u;
    SET_GPR_U32(ctx, 31, 0x171A68u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x171A60u, 0x171A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A68u;
label_171a68:
    // 0x171a68: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x171A68u;
    SET_GPR_U32(ctx, 31, 0x171A70u);
    ctx->pc = 0x171A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A68u;
    // 0x171a6c: 0x26a412a8  addiu       $a0, $s5, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x171A68u, 0x171A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A70u;
label_171a70:
    // 0x171a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x171a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a74: 0x1200fffa  beqz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x171A74u;
    {
        const bool branch_taken_0x171a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a74) {
            ctx->pc = 0x171A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171a60;
        }
    }
    ctx->pc = 0x171A7Cu;
    // 0x171a7c: 0xc05d510  jal         func_175440
    ctx->pc = 0x171A7Cu;
    SET_GPR_U32(ctx, 31, 0x171A84u);
    ctx->pc = 0x171A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A7Cu;
    // 0x171a80: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175440u, 0x171A7Cu, 0x171A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A84u;
label_171a84:
    // 0x171a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a8c: 0xc06f614  jal         func_1BD850
    ctx->pc = 0x171A8Cu;
    SET_GPR_U32(ctx, 31, 0x171A94u);
    ctx->pc = 0x171A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A8Cu;
    // 0x171a90: 0x240604b0  addiu       $a2, $zero, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD850u, 0x171A8Cu, 0x171A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A94u;
label_171a94:
    // 0x171a94: 0xde240020  ld          $a0, 0x20($s1)
    ctx->pc = 0x171a94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x171a98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x171a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x171aa0: 0x410fa  dsrl        $v0, $a0, 3
    ctx->pc = 0x171aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 3);
    // 0x171aa4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x171aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x171aa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x171aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x171aac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x171aacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x171ab0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171AB0u;
    {
        const bool branch_taken_0x171ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x171ab0) {
            ctx->pc = 0x171AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171AB0u;
            // 0x171ab4: 0xaf968bdc  sw          $s6, -0x7424($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171AC8u;
            goto label_171ac8;
        }
    }
    ctx->pc = 0x171AB8u;
    // 0x171ab8: 0x30830180  andi        $v1, $a0, 0x180
    ctx->pc = 0x171ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)384);
    // 0x171abc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171ac0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x171ac0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x171ac4: 0xaf828bdc  sw          $v0, -0x7424($gp)
    ctx->pc = 0x171ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 2));
label_171ac8:
    // 0x171ac8: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171AC8u;
    {
        const bool branch_taken_0x171ac8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x171ac8) {
            ctx->pc = 0x171ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171AC8u;
            // 0x171acc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171AE0u;
            goto label_171ae0;
        }
    }
    ctx->pc = 0x171AD0u;
    // 0x171ad0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x171ad4: 0xc05c246  jal         func_170918
    ctx->pc = 0x171AD4u;
    SET_GPR_U32(ctx, 31, 0x171ADCu);
    ctx->pc = 0x171AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AD4u;
    // 0x171ad8: 0x248476f0  addiu       $a0, $a0, 0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170918u, 0x171AD4u, 0x171ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ADCu;
label_171adc:
    // 0x171adc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_171ae0:
    // 0x171ae0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x171AE0u;
    {
        const bool branch_taken_0x171ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AE0u;
        // 0x171ae4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ae0) {
            ctx->pc = 0x171BD8u;
            goto label_171bd8;
        }
    }
    ctx->pc = 0x171AE8u;
    // 0x171ae8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x171ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171aec: 0x245012a8  addiu       $s0, $v0, 0x12A8
    ctx->pc = 0x171aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4776));
    // 0x171af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171af4: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x171af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x171af8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x171af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x171afc: 0x0  nop
    ctx->pc = 0x171afcu;
    // NOP
label_171b00:
    // 0x171b00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171b04: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x171b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b08: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x171b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x171b0c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x171b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x171b10: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b14: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x171b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171b18: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x171b1c: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171B1Cu;
    SET_GPR_U32(ctx, 31, 0x171B24u);
    ctx->pc = 0x171B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B1Cu;
    // 0x171b20: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171B1Cu, 0x171B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B24u;
label_171b24:
    // 0x171b24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x171b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171b28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x171b34: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b38: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x171b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171b3c: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x171b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x171b40: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171B40u;
    SET_GPR_U32(ctx, 31, 0x171B48u);
    ctx->pc = 0x171B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B40u;
    // 0x171b44: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171B40u, 0x171B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B48u;
label_171b48:
    // 0x171b48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x171b4c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x171b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171b54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x171b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x171b58: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b5c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x171b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x171b60: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x171b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171b64: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x171b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x171b68: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b6c: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x171b70: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171B70u;
    SET_GPR_U32(ctx, 31, 0x171B78u);
    ctx->pc = 0x171B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B70u;
    // 0x171b74: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171B70u, 0x171B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B78u;
label_171b78:
    // 0x171b78: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x171b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x171b7c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x171b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171b84: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b88: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x171b8c: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x171b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x171b90: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x171b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b94: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x171b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x171b98: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x171b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x171b9c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x171b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x171ba0: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x171ba4: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x171ba8: 0x26520044  addiu       $s2, $s2, 0x44
    ctx->pc = 0x171ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x171bac: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x171bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x171bb0: 0x34210800  ori         $at, $at, 0x800
    ctx->pc = 0x171bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2048);
    // 0x171bb4: 0x339821  addu        $s3, $at, $s3
    ctx->pc = 0x171bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 19)));
    // 0x171bb8: 0x24c301ff  addiu       $v1, $a2, 0x1FF
    ctx->pc = 0x171bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x171bbc: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x171bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x171bc0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x171bc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x171bc4: 0x63243  sra         $a2, $a2, 9
    ctx->pc = 0x171bc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 9));
    // 0x171bc8: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171BC8u;
    SET_GPR_U32(ctx, 31, 0x171BD0u);
    ctx->pc = 0x171BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BC8u;
    // 0x171bcc: 0x1263021  addu        $a2, $t1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171BC8u, 0x171BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BD0u;
label_171bd0:
    // 0x171bd0: 0x683ffcb  bgezl       $s4, . + 4 + (-0x35 << 2)
    ctx->pc = 0x171BD0u;
    {
        const bool branch_taken_0x171bd0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x171bd0) {
            ctx->pc = 0x171BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171BD0u;
            // 0x171bd4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171b00;
        }
    }
    ctx->pc = 0x171BD8u;
label_171bd8:
    // 0x171bd8: 0xc05cf60  jal         func_173D80
    ctx->pc = 0x171BD8u;
    SET_GPR_U32(ctx, 31, 0x171BE0u);
    ctx->pc = 0x171BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BD8u;
    // 0x171bdc: 0x26a412a8  addiu       $a0, $s5, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D80u, 0x171BD8u, 0x171BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BE0u;
label_171be0:
    // 0x171be0: 0xc05c120  jal         func_170480
    ctx->pc = 0x171BE0u;
    SET_GPR_U32(ctx, 31, 0x171BE8u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x171BE0u, 0x171BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BE8u;
label_171be8:
    // 0x171be8: 0xc06f648  jal         func_1BD920
    ctx->pc = 0x171BE8u;
    SET_GPR_U32(ctx, 31, 0x171BF0u);
    ctx->pc = 0x171BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BE8u;
    // 0x171bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD920u, 0x171BE8u, 0x171BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BF0u;
label_171bf0:
    // 0x171bf0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171BF0u;
    {
        const bool branch_taken_0x171bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171bf0) {
            ctx->pc = 0x171C18u;
            goto label_171c18;
        }
    }
    ctx->pc = 0x171BF8u;
    // 0x171bf8: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x171BF8u;
    SET_GPR_U32(ctx, 31, 0x171C00u);
    ctx->pc = 0x171BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BF8u;
    // 0x171bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x171BF8u, 0x171C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C00u;
label_171c00:
    // 0x171c00: 0x5456ff99  bnel        $v0, $s6, . + 4 + (-0x67 << 2)
    ctx->pc = 0x171C00u;
    {
        const bool branch_taken_0x171c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x171c00) {
            ctx->pc = 0x171C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171C00u;
            // 0x171c04: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171a68;
        }
    }
    ctx->pc = 0x171C08u;
    // 0x171c08: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x171c0c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x171c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171c10: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x171C10u;
    SET_GPR_U32(ctx, 31, 0x171C18u);
    ctx->pc = 0x171C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C10u;
    // 0x171c14: 0x248476d8  addiu       $a0, $a0, 0x76D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x171C10u, 0x171C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C18u;
label_171c18:
    // 0x171c18: 0xc06f650  jal         func_1BD940
    ctx->pc = 0x171C18u;
    SET_GPR_U32(ctx, 31, 0x171C20u);
    ctx->pc = 0x171C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C18u;
    // 0x171c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD940u, 0x171C18u, 0x171C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C20u;
label_171c20:
    // 0x171c20: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x171c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171c2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171c30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x171c30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171c34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x171c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171c38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x171c38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171c3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x171c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171c40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x171c40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x171c44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x171c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171c48: 0x3e00008  jr          $ra
    ctx->pc = 0x171C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C48u;
        // 0x171c4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C50u;
}
