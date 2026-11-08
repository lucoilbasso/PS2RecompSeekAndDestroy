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

// Function: Cmd_PANEL_ED_GAUGE_Entry__FP15BsSCDEntControl
// Address: 0x15ea50 - 0x15ec6c
void Cmd_PANEL_ED_GAUGE_Entry__FP15BsSCDEntControl_0x15ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_ED_GAUGE_Entry__FP15BsSCDEntControl_0x15ea50");
#endif

    switch (ctx->pc) {
        case 0x15ea8cu: goto label_15ea8c;
        case 0x15eab8u: goto label_15eab8;
        case 0x15eb10u: goto label_15eb10;
        case 0x15eb40u: goto label_15eb40;
        case 0x15eb50u: goto label_15eb50;
        case 0x15eb5cu: goto label_15eb5c;
        case 0x15eb7cu: goto label_15eb7c;
        case 0x15ebf0u: goto label_15ebf0;
        case 0x15ebfcu: goto label_15ebfc;
        default: break;
    }

    ctx->pc = 0x15ea50u;

    // 0x15ea50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ea54: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x15ea58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ea5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ea60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ea64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15ea68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ea6c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x15ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x15ea70: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x15EA70u;
    {
        const bool branch_taken_0x15ea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA70u;
        // 0x15ea74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea70) {
            ctx->pc = 0x15EC50u;
            goto label_15ec50;
        }
    }
    ctx->pc = 0x15EA78u;
    // 0x15ea78: 0x8c5101b0  lw          $s1, 0x1B0($v0)
    ctx->pc = 0x15ea78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x15ea7c: 0x52200075  beql        $s1, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x15EA7Cu;
    {
        const bool branch_taken_0x15ea7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea7c) {
            ctx->pc = 0x15EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EA7Cu;
            // 0x15ea80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EA84u;
    // 0x15ea84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EA84u;
    SET_GPR_U32(ctx, 31, 0x15EA8Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EA84u, 0x15EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA8Cu;
label_15ea8c:
    // 0x15ea8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15ea8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea90: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x15ea90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15ea94: 0x5040006f  beql        $v0, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x15EA94u;
    {
        const bool branch_taken_0x15ea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea94) {
            ctx->pc = 0x15EA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EA94u;
            // 0x15ea98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EA9Cu;
    // 0x15ea9c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x15ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15eaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eaa8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x15eaac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15eab0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EAB0u;
    SET_GPR_U32(ctx, 31, 0x15EAB8u);
    ctx->pc = 0x15EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAB0u;
    // 0x15eab4: 0x24510170  addiu       $s1, $v0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EAB0u, 0x15EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAB8u;
label_15eab8:
    // 0x15eab8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15eab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eac0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15EAC0u;
    {
        const bool branch_taken_0x15eac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC0u;
        // 0x15eac4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eac0) {
            ctx->pc = 0x15EB48u;
            goto label_15eb48;
        }
    }
    ctx->pc = 0x15EAC8u;
    // 0x15eac8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EAC8u;
    {
        const bool branch_taken_0x15eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eac8) {
            ctx->pc = 0x15EACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EAC8u;
            // 0x15eacc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EAE0u;
            goto label_15eae0;
        }
    }
    ctx->pc = 0x15EAD0u;
    // 0x15ead0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15EAD0u;
    {
        const bool branch_taken_0x15ead0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD0u;
        // 0x15ead4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ead0) {
            ctx->pc = 0x15EAF8u;
            goto label_15eaf8;
        }
    }
    ctx->pc = 0x15EAD8u;
    // 0x15ead8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x15EAD8u;
    {
        const bool branch_taken_0x15ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD8u;
        // 0x15eadc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ead8) {
            ctx->pc = 0x15EC58u;
            goto label_15ec58;
        }
    }
    ctx->pc = 0x15EAE0u;
label_15eae0:
    // 0x15eae0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x15EAE0u;
    {
        const bool branch_taken_0x15eae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE0u;
        // 0x15eae4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eae0) {
            ctx->pc = 0x15EBE8u;
            goto label_15ebe8;
        }
    }
    ctx->pc = 0x15EAE8u;
    // 0x15eae8: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x15EAE8u;
    {
        const bool branch_taken_0x15eae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE8u;
        // 0x15eaec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eae8) {
            ctx->pc = 0x15EC48u;
            goto label_15ec48;
        }
    }
    ctx->pc = 0x15EAF0u;
    // 0x15eaf0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x15EAF0u;
    {
        const bool branch_taken_0x15eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAF0u;
        // 0x15eaf4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eaf0) {
            ctx->pc = 0x15EC58u;
            goto label_15ec58;
        }
    }
    ctx->pc = 0x15EAF8u;
label_15eaf8:
    // 0x15eaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eafc: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x15eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x15eb00: 0x8c830204  lw          $v1, 0x204($a0)
    ctx->pc = 0x15eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x15eb04: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15EB04u;
    {
        const bool branch_taken_0x15eb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15eb04) {
            ctx->pc = 0x15EB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB04u;
            // 0x15eb08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EB38u;
            goto label_15eb38;
        }
    }
    ctx->pc = 0x15EB0Cu;
    // 0x15eb0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15eb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15eb10:
    // 0x15eb10: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x15eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x15eb14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15eb18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15eb1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15eb20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15eb24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EB24u;
    {
        const bool branch_taken_0x15eb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB24u;
        // 0x15eb28: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb24) {
            ctx->pc = 0x15EB38u;
            goto label_15eb38;
        }
    }
    ctx->pc = 0x15EB2Cu;
    // 0x15eb2c: 0x1445fff8  bne         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15EB2Cu;
    {
        const bool branch_taken_0x15eb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x15EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB2Cu;
        // 0x15eb30: 0xac820200  sw          $v0, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb2c) {
            ctx->pc = 0x15EB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eb10;
        }
    }
    ctx->pc = 0x15EB34u;
    // 0x15eb34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15eb34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eb38:
    // 0x15eb38: 0xc04171a  jal         func_105C68
    ctx->pc = 0x15EB38u;
    SET_GPR_U32(ctx, 31, 0x15EB40u);
    ctx->pc = 0x15EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB38u;
    // 0x15eb3c: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x15EB38u, 0x15EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB40u;
label_15eb40:
    // 0x15eb40: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x15EB40u;
    {
        const bool branch_taken_0x15eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB40u;
        // 0x15eb44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb40) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EB48u;
label_15eb48:
    // 0x15eb48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EB48u;
    SET_GPR_U32(ctx, 31, 0x15EB50u);
    ctx->pc = 0x15EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB48u;
    // 0x15eb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EB48u, 0x15EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB50u;
label_15eb50:
    // 0x15eb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb54: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EB54u;
    SET_GPR_U32(ctx, 31, 0x15EB5Cu);
    ctx->pc = 0x15EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB54u;
    // 0x15eb58: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EB54u, 0x15EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB5Cu;
label_15eb5c:
    // 0x15eb5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15eb5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb60: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15eb64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x15eb68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15eb6c: 0x5064000e  beql        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x15EB6Cu;
    {
        const bool branch_taken_0x15eb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15eb6c) {
            ctx->pc = 0x15EB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB6Cu;
            // 0x15eb70: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EBA8u;
            goto label_15eba8;
        }
    }
    ctx->pc = 0x15EB74u;
    // 0x15eb74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EB74u;
    SET_GPR_U32(ctx, 31, 0x15EB7Cu);
    ctx->pc = 0x15EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB74u;
    // 0x15eb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EB74u, 0x15EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB7Cu;
label_15eb7c:
    // 0x15eb7c: 0x131bc0  sll         $v1, $s3, 15
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 15));
    // 0x15eb80: 0x1223c0  sll         $a0, $s2, 15
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x15eb84: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15eb84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15eb88: 0x7082001a  div1        $zero, $a0, $v0
    ctx->pc = 0x15eb88u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x15eb8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15EB8Cu;
    {
        const bool branch_taken_0x15eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb8c) {
            ctx->pc = 0x15EB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB8Cu;
            // 0x15eb90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EB94u;
            goto label_15eb94;
        }
    }
    ctx->pc = 0x15EB94u;
label_15eb94:
    // 0x15eb94: 0x1812  mflo        $v1
    ctx->pc = 0x15eb94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x15eb98: 0x70002012  mflo1       $a0
    ctx->pc = 0x15eb98u;
    SET_GPR_U64(ctx, 4, ctx->lo1);
    // 0x15eb9c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x15eb9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eba0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15eba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eba4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
label_15eba8:
    // 0x15eba8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x15ebac: 0x8c64b830  lw          $a0, -0x47D0($v1)
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x15ebb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ebb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15ebb8: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x15ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15ebbc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x15ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x15ebc0: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x15ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x15ebc4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x15ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x15ebc8: 0x8e230204  lw          $v1, 0x204($s1)
    ctx->pc = 0x15ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x15ebcc: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15ebd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ebd4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15ebd8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15EBD8u;
    {
        const bool branch_taken_0x15ebd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBD8u;
        // 0x15ebdc: 0xae230204  sw          $v1, 0x204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebd8) {
            ctx->pc = 0x15EC50u;
            goto label_15ec50;
        }
    }
    ctx->pc = 0x15EBE0u;
    // 0x15ebe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15EBE0u;
    {
        const bool branch_taken_0x15ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBE0u;
        // 0x15ebe4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebe0) {
            ctx->pc = 0x15EC38u;
            goto label_15ec38;
        }
    }
    ctx->pc = 0x15EBE8u;
label_15ebe8:
    // 0x15ebe8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x15EBE8u;
    SET_GPR_U32(ctx, 31, 0x15EBF0u);
    ctx->pc = 0x15EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBE8u;
    // 0x15ebec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x15EBE8u, 0x15EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBF0u;
label_15ebf0:
    // 0x15ebf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebf4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x15EBF4u;
    SET_GPR_U32(ctx, 31, 0x15EBFCu);
    ctx->pc = 0x15EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBF4u;
    // 0x15ebf8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x15EBF4u, 0x15EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBFCu;
label_15ebfc:
    // 0x15ebfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ebfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec00: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x15ec04: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15ec08: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15EC08u;
    {
        const bool branch_taken_0x15ec08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC08u;
        // 0x15ec0c: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec08) {
            ctx->pc = 0x15EC50u;
            goto label_15ec50;
        }
    }
    ctx->pc = 0x15EC10u;
    // 0x15ec10: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15ec14: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x15ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15ec18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15ec1c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x15ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x15ec20: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15ec24: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15ec28: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15ec2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15ec30: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15ec34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15ec38:
    // 0x15ec38: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x15ec3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15EC3Cu;
    {
        const bool branch_taken_0x15ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC3Cu;
        // 0x15ec40: 0xae220200  sw          $v0, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec3c) {
            ctx->pc = 0x15EC50u;
            goto label_15ec50;
        }
    }
    ctx->pc = 0x15EC44u;
    // 0x15ec44: 0x0  nop
    ctx->pc = 0x15ec44u;
    // NOP
label_15ec48:
    // 0x15ec48: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x15ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x15ec4c: 0xae200204  sw          $zero, 0x204($s1)
    ctx->pc = 0x15ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 0));
label_15ec50:
    // 0x15ec50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15ec50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ec54:
    // 0x15ec54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15ec54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15ec58:
    // 0x15ec58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15ec58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ec5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15ec5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ec60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ec64: 0x3e00008  jr          $ra
    ctx->pc = 0x15EC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC64u;
        // 0x15ec68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EC6Cu;
}
