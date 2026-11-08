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

// Function: Finish__8ApcField
// Address: 0x13af98 - 0x13b08c
void Finish__8ApcField_0x13af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8ApcField_0x13af98");
#endif

    switch (ctx->pc) {
        case 0x13af98u: goto label_13af98;
        case 0x13af9cu: goto label_13af9c;
        case 0x13afa0u: goto label_13afa0;
        case 0x13afa4u: goto label_13afa4;
        case 0x13afa8u: goto label_13afa8;
        case 0x13afacu: goto label_13afac;
        case 0x13afb0u: goto label_13afb0;
        case 0x13afb4u: goto label_13afb4;
        case 0x13afb8u: goto label_13afb8;
        case 0x13afbcu: goto label_13afbc;
        case 0x13afc0u: goto label_13afc0;
        case 0x13afc4u: goto label_13afc4;
        case 0x13afc8u: goto label_13afc8;
        case 0x13afccu: goto label_13afcc;
        case 0x13afd0u: goto label_13afd0;
        case 0x13afd4u: goto label_13afd4;
        case 0x13afd8u: goto label_13afd8;
        case 0x13afdcu: goto label_13afdc;
        case 0x13afe0u: goto label_13afe0;
        case 0x13afe4u: goto label_13afe4;
        case 0x13afe8u: goto label_13afe8;
        case 0x13afecu: goto label_13afec;
        case 0x13aff0u: goto label_13aff0;
        case 0x13aff4u: goto label_13aff4;
        case 0x13aff8u: goto label_13aff8;
        case 0x13affcu: goto label_13affc;
        case 0x13b000u: goto label_13b000;
        case 0x13b004u: goto label_13b004;
        case 0x13b008u: goto label_13b008;
        case 0x13b00cu: goto label_13b00c;
        case 0x13b010u: goto label_13b010;
        case 0x13b014u: goto label_13b014;
        case 0x13b018u: goto label_13b018;
        case 0x13b01cu: goto label_13b01c;
        case 0x13b020u: goto label_13b020;
        case 0x13b024u: goto label_13b024;
        case 0x13b028u: goto label_13b028;
        case 0x13b02cu: goto label_13b02c;
        case 0x13b030u: goto label_13b030;
        case 0x13b034u: goto label_13b034;
        case 0x13b038u: goto label_13b038;
        case 0x13b03cu: goto label_13b03c;
        case 0x13b040u: goto label_13b040;
        case 0x13b044u: goto label_13b044;
        case 0x13b048u: goto label_13b048;
        case 0x13b04cu: goto label_13b04c;
        case 0x13b050u: goto label_13b050;
        case 0x13b054u: goto label_13b054;
        case 0x13b058u: goto label_13b058;
        case 0x13b05cu: goto label_13b05c;
        case 0x13b060u: goto label_13b060;
        case 0x13b064u: goto label_13b064;
        case 0x13b068u: goto label_13b068;
        case 0x13b06cu: goto label_13b06c;
        case 0x13b070u: goto label_13b070;
        case 0x13b074u: goto label_13b074;
        case 0x13b078u: goto label_13b078;
        case 0x13b07cu: goto label_13b07c;
        case 0x13b080u: goto label_13b080;
        case 0x13b084u: goto label_13b084;
        case 0x13b088u: goto label_13b088;
        default: break;
    }

    ctx->pc = 0x13af98u;

label_13af98:
    // 0x13af98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13af98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13af9c:
    // 0x13af9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13afa0:
    // 0x13afa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13afa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13afa4:
    // 0x13afa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13afa8:
    // 0x13afa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13afac:
    // 0x13afac: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13afacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13afb0:
    // 0x13afb0: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13afb4:
    // 0x13afb4: 0x8cc60208  lw          $a2, 0x208($a2)
    ctx->pc = 0x13afb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
label_13afb8:
    // 0x13afb8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13afbc:
    if (ctx->pc == 0x13AFBCu) {
        ctx->pc = 0x13AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFB8u;
        // 0x13afbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFC0u;
        goto label_13afc0;
    }
    ctx->pc = 0x13AFB8u;
    {
        const bool branch_taken_0x13afb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFB8u;
        // 0x13afbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afb8) {
            ctx->pc = 0x13AFD8u;
            goto label_13afd8;
        }
    }
    ctx->pc = 0x13AFC0u;
label_13afc0:
    // 0x13afc0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13afc4:
    // 0x13afc4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13afc8:
    // 0x13afc8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13afc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13afcc:
    // 0x13afcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13afd0:
    // 0x13afd0: 0x60f809  jalr        $v1
label_13afd4:
    if (ctx->pc == 0x13AFD4u) {
        ctx->pc = 0x13AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFD0u;
        // 0x13afd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFD8u;
        goto label_13afd8;
    }
    ctx->pc = 0x13AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13AFD8u);
        ctx->pc = 0x13AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFD0u;
        // 0x13afd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFD0u, 0x13AFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13AFD8u;
label_13afd8:
    // 0x13afd8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13afdc:
    // 0x13afdc: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13afe0:
    // 0x13afe0: 0x8cc6020c  lw          $a2, 0x20C($a2)
    ctx->pc = 0x13afe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_13afe4:
    // 0x13afe4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13afe8:
    if (ctx->pc == 0x13AFE8u) {
        ctx->pc = 0x13AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFE4u;
        // 0x13afe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFECu;
        goto label_13afec;
    }
    ctx->pc = 0x13AFE4u;
    {
        const bool branch_taken_0x13afe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFE4u;
        // 0x13afe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afe4) {
            ctx->pc = 0x13B004u;
            goto label_13b004;
        }
    }
    ctx->pc = 0x13AFECu;
label_13afec:
    // 0x13afec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13aff0:
    // 0x13aff0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13aff4:
    // 0x13aff4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13aff8:
    // 0x13aff8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13affc:
    // 0x13affc: 0x60f809  jalr        $v1
label_13b000:
    if (ctx->pc == 0x13B000u) {
        ctx->pc = 0x13B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFFCu;
        // 0x13b000: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B004u;
        goto label_13b004;
    }
    ctx->pc = 0x13AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13B004u);
        ctx->pc = 0x13B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFFCu;
        // 0x13b000: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFFCu, 0x13B004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B004u;
label_13b004:
    // 0x13b004: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
label_13b008:
    // 0x13b008: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_13b00c:
    if (ctx->pc == 0x13B00Cu) {
        ctx->pc = 0x13B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B008u;
        // 0x13b00c: 0x8e220200  lw          $v0, 0x200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B010u;
        goto label_13b010;
    }
    ctx->pc = 0x13B008u;
    {
        const bool branch_taken_0x13b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b008) {
            ctx->pc = 0x13B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B008u;
            // 0x13b00c: 0x8e220200  lw          $v0, 0x200($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B030u;
            goto label_13b030;
        }
    }
    ctx->pc = 0x13B010u;
label_13b010:
    // 0x13b010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b014:
    // 0x13b014: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13b014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13b018:
    // 0x13b018: 0x262401fc  addiu       $a0, $s1, 0x1FC
    ctx->pc = 0x13b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 508));
label_13b01c:
    // 0x13b01c: 0xc068436  jal         func_1A10D8
label_13b020:
    if (ctx->pc == 0x13B020u) {
        ctx->pc = 0x13B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B01Cu;
        // 0x13b020: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B024u;
        goto label_13b024;
    }
    ctx->pc = 0x13B01Cu;
    SET_GPR_U32(ctx, 31, 0x13B024u);
    ctx->pc = 0x13B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B01Cu;
    // 0x13b020: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13B01Cu, 0x13B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B024u;
label_13b024:
    // 0x13b024: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
label_13b028:
    if (ctx->pc == 0x13B028u) {
        ctx->pc = 0x13B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B024u;
        // 0x13b028: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B02Cu;
        goto label_13b02c;
    }
    ctx->pc = 0x13B024u;
    {
        const bool branch_taken_0x13b024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b024) {
            ctx->pc = 0x13B028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B024u;
            // 0x13b028: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b018;
        }
    }
    ctx->pc = 0x13B02Cu;
label_13b02c:
    // 0x13b02c: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x13b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_13b030:
    // 0x13b030: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_13b034:
    if (ctx->pc == 0x13B034u) {
        ctx->pc = 0x13B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B030u;
        // 0x13b034: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B038u;
        goto label_13b038;
    }
    ctx->pc = 0x13B030u;
    {
        const bool branch_taken_0x13b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b030) {
            ctx->pc = 0x13B034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B030u;
            // 0x13b034: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B058u;
            goto label_13b058;
        }
    }
    ctx->pc = 0x13B038u;
label_13b038:
    // 0x13b038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b03c:
    // 0x13b03c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13b040:
    // 0x13b040: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x13b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_13b044:
    // 0x13b044: 0xc068436  jal         func_1A10D8
label_13b048:
    if (ctx->pc == 0x13B048u) {
        ctx->pc = 0x13B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B044u;
        // 0x13b048: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B04Cu;
        goto label_13b04c;
    }
    ctx->pc = 0x13B044u;
    SET_GPR_U32(ctx, 31, 0x13B04Cu);
    ctx->pc = 0x13B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B044u;
    // 0x13b048: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13B044u, 0x13B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B04Cu;
label_13b04c:
    // 0x13b04c: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
label_13b050:
    if (ctx->pc == 0x13B050u) {
        ctx->pc = 0x13B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B04Cu;
        // 0x13b050: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B054u;
        goto label_13b054;
    }
    ctx->pc = 0x13B04Cu;
    {
        const bool branch_taken_0x13b04c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b04c) {
            ctx->pc = 0x13B050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B04Cu;
            // 0x13b050: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b040;
        }
    }
    ctx->pc = 0x13B054u;
label_13b054:
    // 0x13b054: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
label_13b058:
    // 0x13b058: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13b05c:
    if (ctx->pc == 0x13B05Cu) {
        ctx->pc = 0x13B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B058u;
        // 0x13b05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B060u;
        goto label_13b060;
    }
    ctx->pc = 0x13B058u;
    {
        const bool branch_taken_0x13b058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b058) {
            ctx->pc = 0x13B05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B058u;
            // 0x13b05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B06Cu;
            goto label_13b06c;
        }
    }
    ctx->pc = 0x13B060u;
label_13b060:
    // 0x13b060: 0xc0684a0  jal         func_1A1280
label_13b064:
    if (ctx->pc == 0x13B064u) {
        ctx->pc = 0x13B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B060u;
        // 0x13b064: 0x26240204  addiu       $a0, $s1, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 516));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B068u;
        goto label_13b068;
    }
    ctx->pc = 0x13B060u;
    SET_GPR_U32(ctx, 31, 0x13B068u);
    ctx->pc = 0x13B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B060u;
    // 0x13b064: 0x26240204  addiu       $a0, $s1, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1280u, 0x13B060u, 0x13B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B068u;
label_13b068:
    // 0x13b068: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13b06c:
    // 0x13b06c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b070:
    // 0x13b070: 0xc043ff0  jal         func_10FFC0
label_13b074:
    if (ctx->pc == 0x13B074u) {
        ctx->pc = 0x13B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B070u;
        // 0x13b074: 0xae220204  sw          $v0, 0x204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B078u;
        goto label_13b078;
    }
    ctx->pc = 0x13B070u;
    SET_GPR_U32(ctx, 31, 0x13B078u);
    ctx->pc = 0x13B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B070u;
    // 0x13b074: 0xae220204  sw          $v0, 0x204($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFC0u, 0x13B070u, 0x13B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B078u;
label_13b078:
    // 0x13b078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b07c:
    // 0x13b07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13b080:
    // 0x13b080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13b084:
    // 0x13b084: 0x3e00008  jr          $ra
label_13b088:
    if (ctx->pc == 0x13B088u) {
        ctx->pc = 0x13B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B084u;
        // 0x13b088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B08Cu;
        goto label_fallthrough_0x13b084;
    }
    ctx->pc = 0x13B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B084u;
        // 0x13b088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b084:
    ctx->pc = 0x13B08Cu;
}
