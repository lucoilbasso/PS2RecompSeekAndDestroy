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

// Function: ApRsc3DSelectResourceImage__FP8ApcRsc3Dii
// Address: 0x1450d8 - 0x1451d8
void ApRsc3DSelectResourceImage__FP8ApcRsc3Dii_0x1450d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DSelectResourceImage__FP8ApcRsc3Dii_0x1450d8");
#endif

    switch (ctx->pc) {
        case 0x145154u: goto label_145154;
        case 0x145170u: goto label_145170;
        case 0x145194u: goto label_145194;
        case 0x14519cu: goto label_14519c;
        case 0x1451a4u: goto label_1451a4;
        default: break;
    }

    ctx->pc = 0x1450d8u;

    // 0x1450d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1450d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1450dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1450dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1450e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1450e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1450e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1450e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1450e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1450ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1450ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1450f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1450f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1450f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1450f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1450fc: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1450fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145100: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145100u;
    {
        const bool branch_taken_0x145100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x145104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145100u;
        // 0x145104: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145100) {
            ctx->pc = 0x145140u;
            goto label_145140;
        }
    }
    ctx->pc = 0x145108u;
    // 0x145108: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x145108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14510c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14510Cu;
    {
        const bool branch_taken_0x14510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14510c) {
            ctx->pc = 0x145110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14510Cu;
            // 0x145110: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145128u;
            goto label_145128;
        }
    }
    ctx->pc = 0x145114u;
    // 0x145114: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x145114u;
    {
        const bool branch_taken_0x145114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145114u;
        // 0x145118: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145114) {
            ctx->pc = 0x145138u;
            goto label_145138;
        }
    }
    ctx->pc = 0x14511Cu;
    // 0x14511c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14511Cu;
    {
        const bool branch_taken_0x14511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14511Cu;
        // 0x145120: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14511c) {
            ctx->pc = 0x145148u;
            goto label_145148;
        }
    }
    ctx->pc = 0x145124u;
    // 0x145124: 0x0  nop
    ctx->pc = 0x145124u;
    // NOP
label_145128:
    // 0x145128: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145128u;
    {
        const bool branch_taken_0x145128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x145128) {
            ctx->pc = 0x14512Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145128u;
            // 0x14512c: 0x8e30005c  lw          $s0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145154u;
            goto label_145154;
        }
    }
    ctx->pc = 0x145130u;
    // 0x145130: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145130u;
    {
        const bool branch_taken_0x145130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145130u;
        // 0x145134: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145130) {
            ctx->pc = 0x145148u;
            goto label_145148;
        }
    }
    ctx->pc = 0x145138u;
label_145138:
    // 0x145138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145138u;
    {
        const bool branch_taken_0x145138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145138u;
        // 0x14513c: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145138) {
            ctx->pc = 0x145154u;
            goto label_145154;
        }
    }
    ctx->pc = 0x145140u;
label_145140:
    // 0x145140: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145140u;
    {
        const bool branch_taken_0x145140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145140u;
        // 0x145144: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145140) {
            ctx->pc = 0x145154u;
            goto label_145154;
        }
    }
    ctx->pc = 0x145148u;
label_145148:
    // 0x145148: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x145148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x14514c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14514Cu;
    SET_GPR_U32(ctx, 31, 0x145154u);
    ctx->pc = 0x145150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14514Cu;
    // 0x145150: 0x24a56a68  addiu       $a1, $a1, 0x6A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14514Cu, 0x145154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145154u;
label_145154:
    // 0x145154: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x145154u;
    {
        const bool branch_taken_0x145154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145154) {
            ctx->pc = 0x145158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145154u;
            // 0x145158: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145178u;
            goto label_145178;
        }
    }
    ctx->pc = 0x14515Cu;
    // 0x14515c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14515cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145164: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145168: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145168u;
    SET_GPR_U32(ctx, 31, 0x145170u);
    ctx->pc = 0x14516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145168u;
    // 0x14516c: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145168u, 0x145170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145170u;
label_145170:
    // 0x145170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145170u;
    {
        const bool branch_taken_0x145170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145170) {
            ctx->pc = 0x145194u;
            goto label_145194;
        }
    }
    ctx->pc = 0x145178u;
label_145178:
    // 0x145178: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x145178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14517c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14517Cu;
    {
        const bool branch_taken_0x14517c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14517Cu;
        // 0x145180: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14517c) {
            ctx->pc = 0x145194u;
            goto label_145194;
        }
    }
    ctx->pc = 0x145184u;
    // 0x145184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145188: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x14518c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14518Cu;
    SET_GPR_U32(ctx, 31, 0x145194u);
    ctx->pc = 0x145190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14518Cu;
    // 0x145190: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14518Cu, 0x145194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145194u;
label_145194:
    // 0x145194: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x145194u;
    SET_GPR_U32(ctx, 31, 0x14519Cu);
    ctx->pc = 0x145198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145194u;
    // 0x145198: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x145194u, 0x14519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14519Cu;
label_14519c:
    // 0x14519c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x14519Cu;
    SET_GPR_U32(ctx, 31, 0x1451A4u);
    ctx->pc = 0x1451A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14519Cu;
    // 0x1451a0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14519Cu, 0x1451A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451A4u;
label_1451a4:
    // 0x1451a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1451a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1451a8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1451a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1451ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1451acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1451b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1451b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1451b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1451b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1451b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1451bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1451bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1451c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1451c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1451c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1451c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1451c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1451cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1451ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1451D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451D0u;
        // 0x1451d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451D8u;
}
