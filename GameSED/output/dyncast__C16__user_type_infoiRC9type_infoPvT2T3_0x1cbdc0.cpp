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

// Function: dyncast__C16__user_type_infoiRC9type_infoPvT2T3
// Address: 0x1cbdc0 - 0x1cbf08
void dyncast__C16__user_type_infoiRC9type_infoPvT2T3_0x1cbdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dyncast__C16__user_type_infoiRC9type_infoPvT2T3_0x1cbdc0");
#endif

    switch (ctx->pc) {
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbedcu: goto label_1cbedc;
        case 0x1cbee0u: goto label_1cbee0;
        case 0x1cbee4u: goto label_1cbee4;
        case 0x1cbee8u: goto label_1cbee8;
        case 0x1cbeecu: goto label_1cbeec;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef4u: goto label_1cbef4;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbefcu: goto label_1cbefc;
        case 0x1cbf00u: goto label_1cbf00;
        case 0x1cbf04u: goto label_1cbf04;
        default: break;
    }

    ctx->pc = 0x1cbdc0u;

label_1cbdc0:
    // 0x1cbdc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cbdc4:
    // 0x1cbdc4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1cbdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbdc8:
    // 0x1cbdc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cbdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1cbdcc:
    // 0x1cbdcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cbdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbdd0:
    // 0x1cbdd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cbdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1cbdd4:
    // 0x1cbdd4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1cbdd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1cbdd8:
    // 0x1cbdd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cbdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1cbddc:
    // 0x1cbddc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cbddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cbde0:
    // 0x1cbde0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cbde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1cbde4:
    // 0x1cbde4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1cbde4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cbde8:
    // 0x1cbde8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cbde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cbdec:
    // 0x1cbdec: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cbdf0:
    // 0x1cbdf0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cbdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cbdf4:
    // 0x1cbdf4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1cbdf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cbdf8:
    // 0x1cbdf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cbdfc:
    // 0x1cbdfc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1cbdfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe00:
    // 0x1cbe00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cbe04:
    // 0x1cbe04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1cbe04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe08:
    // 0x1cbe08: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1cbe0c:
    // 0x1cbe0c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cbe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1cbe10:
    // 0x1cbe10: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbe14:
    // 0x1cbe14: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1cbe14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe18:
    // 0x1cbe18: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1cbe1c:
    // 0x1cbe1c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cbe20:
    // 0x1cbe20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cbe24:
    // 0x1cbe24: 0x40f809  jalr        $v0
label_1cbe28:
    if (ctx->pc == 0x1CBE28u) {
        ctx->pc = 0x1CBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE24u;
        // 0x1cbe28: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE2Cu;
        goto label_1cbe2c;
    }
    ctx->pc = 0x1CBE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBE2Cu);
        ctx->pc = 0x1CBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE24u;
        // 0x1cbe28: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE24u, 0x1CBE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBE2Cu;
label_1cbe2c:
    // 0x1cbe2c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1cbe2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbe30:
    // 0x1cbe30: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
label_1cbe34:
    if (ctx->pc == 0x1CBE34u) {
        ctx->pc = 0x1CBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE30u;
        // 0x1cbe34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE38u;
        goto label_1cbe38;
    }
    ctx->pc = 0x1CBE30u;
    {
        const bool branch_taken_0x1cbe30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE30u;
        // 0x1cbe34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe30) {
            ctx->pc = 0x1CBEECu;
            goto label_1cbeec;
        }
    }
    ctx->pc = 0x1CBE38u;
label_1cbe38:
    // 0x1cbe38: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1cbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1cbe3c:
    // 0x1cbe3c: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x1cbe3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cbe40:
    // 0x1cbe40: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1cbe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1cbe44:
    // 0x1cbe44: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_1cbe48:
    if (ctx->pc == 0x1CBE48u) {
        ctx->pc = 0x1CBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE44u;
        // 0x1cbe48: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE4Cu;
        goto label_1cbe4c;
    }
    ctx->pc = 0x1CBE44u;
    {
        const bool branch_taken_0x1cbe44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE44u;
        // 0x1cbe48: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe44) {
            ctx->pc = 0x1CBEECu;
            goto label_1cbeec;
        }
    }
    ctx->pc = 0x1CBE4Cu;
label_1cbe4c:
    // 0x1cbe4c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1cbe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbe50:
    // 0x1cbe50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1cbe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cbe54:
    // 0x1cbe54: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1cbe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1cbe58:
    // 0x1cbe58: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x1cbe58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cbe5c:
    // 0x1cbe5c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1cbe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1cbe60:
    // 0x1cbe60: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
label_1cbe64:
    if (ctx->pc == 0x1CBE64u) {
        ctx->pc = 0x1CBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE60u;
        // 0x1cbe64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE68u;
        goto label_1cbe68;
    }
    ctx->pc = 0x1CBE60u;
    {
        const bool branch_taken_0x1cbe60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe60) {
            ctx->pc = 0x1CBE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBE60u;
            // 0x1cbe64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBEF0u;
            goto label_1cbef0;
        }
    }
    ctx->pc = 0x1CBE68u;
label_1cbe68:
    // 0x1cbe68: 0x30a30005  andi        $v1, $a1, 0x5
    ctx->pc = 0x1cbe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)5);
label_1cbe6c:
    // 0x1cbe6c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x1cbe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_1cbe70:
    // 0x1cbe70: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_1cbe74:
    if (ctx->pc == 0x1CBE74u) {
        ctx->pc = 0x1CBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE70u;
        // 0x1cbe74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE78u;
        goto label_1cbe78;
    }
    ctx->pc = 0x1CBE70u;
    {
        const bool branch_taken_0x1cbe70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE70u;
        // 0x1cbe74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe70) {
            ctx->pc = 0x1CBEECu;
            goto label_1cbeec;
        }
    }
    ctx->pc = 0x1CBE78u;
label_1cbe78:
    // 0x1cbe78: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
label_1cbe7c:
    if (ctx->pc == 0x1CBE7Cu) {
        ctx->pc = 0x1CBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE78u;
        // 0x1cbe7c: 0x28830006  slti        $v1, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE80u;
        goto label_1cbe80;
    }
    ctx->pc = 0x1CBE78u;
    {
        const bool branch_taken_0x1cbe78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE78u;
        // 0x1cbe7c: 0x28830006  slti        $v1, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe78) {
            ctx->pc = 0x1CBEDCu;
            goto label_1cbedc;
        }
    }
    ctx->pc = 0x1CBE80u;
label_1cbe80:
    // 0x1cbe80: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
label_1cbe84:
    if (ctx->pc == 0x1CBE84u) {
        ctx->pc = 0x1CBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE80u;
        // 0x1cbe84: 0x2271023  subu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE88u;
        goto label_1cbe88;
    }
    ctx->pc = 0x1CBE80u;
    {
        const bool branch_taken_0x1cbe80 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1CBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE80u;
        // 0x1cbe84: 0x2271023  subu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe80) {
            ctx->pc = 0x1CBEA0u;
            goto label_1cbea0;
        }
    }
    ctx->pc = 0x1CBE88u;
label_1cbe88:
    // 0x1cbe88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cbe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbe8c:
    // 0x1cbe8c: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1cbe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_1cbe90:
    // 0x1cbe90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cbe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cbe94:
    // 0x1cbe94: 0x1000000f  b           . + 4 + (0xF << 2)
label_1cbe98:
    if (ctx->pc == 0x1CBE98u) {
        ctx->pc = 0x1CBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE94u;
        // 0x1cbe98: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE9Cu;
        goto label_1cbe9c;
    }
    ctx->pc = 0x1CBE94u;
    {
        const bool branch_taken_0x1cbe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE94u;
        // 0x1cbe98: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe94) {
            ctx->pc = 0x1CBED4u;
            goto label_1cbed4;
        }
    }
    ctx->pc = 0x1CBE9Cu;
label_1cbe9c:
    // 0x1cbe9c: 0x0  nop
    ctx->pc = 0x1cbe9cu;
    // NOP
label_1cbea0:
    // 0x1cbea0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cbea4:
    // 0x1cbea4: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_1cbea8:
    if (ctx->pc == 0x1CBEA8u) {
        ctx->pc = 0x1CBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA4u;
        // 0x1cbea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEACu;
        goto label_1cbeac;
    }
    ctx->pc = 0x1CBEA4u;
    {
        const bool branch_taken_0x1cbea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA4u;
        // 0x1cbea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbea4) {
            ctx->pc = 0x1CBED4u;
            goto label_1cbed4;
        }
    }
    ctx->pc = 0x1CBEACu;
label_1cbeac:
    // 0x1cbeac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1cbeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1cbeb0:
    // 0x1cbeb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cbeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeb4:
    // 0x1cbeb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1cbeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeb8:
    // 0x1cbeb8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1cbeb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbebc:
    // 0x1cbebc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cbec0:
    // 0x1cbec0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbec4:
    // 0x1cbec4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cbec8:
    // 0x1cbec8: 0x40f809  jalr        $v0
label_1cbecc:
    if (ctx->pc == 0x1CBECCu) {
        ctx->pc = 0x1CBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEC8u;
        // 0x1cbecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBED0u;
        goto label_1cbed0;
    }
    ctx->pc = 0x1CBEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBED0u);
        ctx->pc = 0x1CBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEC8u;
        // 0x1cbecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBEC8u, 0x1CBED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBED0u;
label_1cbed0:
    // 0x1cbed0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbed4:
    // 0x1cbed4: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1cbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_1cbed8:
    // 0x1cbed8: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x1cbed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cbedc:
    // 0x1cbedc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbee0:
    // 0x1cbee0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1cbee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1cbee4:
    // 0x1cbee4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x1cbee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
label_1cbee8:
    // 0x1cbee8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1cbee8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1cbeec:
    // 0x1cbeec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cbeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbef0:
    // 0x1cbef0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cbef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cbef4:
    // 0x1cbef4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cbef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbef8:
    // 0x1cbef8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cbef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cbefc:
    // 0x1cbefc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cbefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cbf00:
    // 0x1cbf00: 0x3e00008  jr          $ra
label_1cbf04:
    if (ctx->pc == 0x1CBF04u) {
        ctx->pc = 0x1CBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF00u;
        // 0x1cbf04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF08u;
        goto label_fallthrough_0x1cbf00;
    }
    ctx->pc = 0x1CBF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF00u;
        // 0x1cbf04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cbf00:
    ctx->pc = 0x1CBF08u;
}
