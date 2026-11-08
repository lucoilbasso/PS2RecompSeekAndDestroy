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

// Function: SpecialClassCreate__9ApcPtcSplUi
// Address: 0x12bdf8 - 0x12beb4
void SpecialClassCreate__9ApcPtcSplUi_0x12bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpecialClassCreate__9ApcPtcSplUi_0x12bdf8");
#endif

    switch (ctx->pc) {
        case 0x12bdf8u: goto label_12bdf8;
        case 0x12bdfcu: goto label_12bdfc;
        case 0x12be00u: goto label_12be00;
        case 0x12be04u: goto label_12be04;
        case 0x12be08u: goto label_12be08;
        case 0x12be0cu: goto label_12be0c;
        case 0x12be10u: goto label_12be10;
        case 0x12be14u: goto label_12be14;
        case 0x12be18u: goto label_12be18;
        case 0x12be1cu: goto label_12be1c;
        case 0x12be20u: goto label_12be20;
        case 0x12be24u: goto label_12be24;
        case 0x12be28u: goto label_12be28;
        case 0x12be2cu: goto label_12be2c;
        case 0x12be30u: goto label_12be30;
        case 0x12be34u: goto label_12be34;
        case 0x12be38u: goto label_12be38;
        case 0x12be3cu: goto label_12be3c;
        case 0x12be40u: goto label_12be40;
        case 0x12be44u: goto label_12be44;
        case 0x12be48u: goto label_12be48;
        case 0x12be4cu: goto label_12be4c;
        case 0x12be50u: goto label_12be50;
        case 0x12be54u: goto label_12be54;
        case 0x12be58u: goto label_12be58;
        case 0x12be5cu: goto label_12be5c;
        case 0x12be60u: goto label_12be60;
        case 0x12be64u: goto label_12be64;
        case 0x12be68u: goto label_12be68;
        case 0x12be6cu: goto label_12be6c;
        case 0x12be70u: goto label_12be70;
        case 0x12be74u: goto label_12be74;
        case 0x12be78u: goto label_12be78;
        case 0x12be7cu: goto label_12be7c;
        case 0x12be80u: goto label_12be80;
        case 0x12be84u: goto label_12be84;
        case 0x12be88u: goto label_12be88;
        case 0x12be8cu: goto label_12be8c;
        case 0x12be90u: goto label_12be90;
        case 0x12be94u: goto label_12be94;
        case 0x12be98u: goto label_12be98;
        case 0x12be9cu: goto label_12be9c;
        case 0x12bea0u: goto label_12bea0;
        case 0x12bea4u: goto label_12bea4;
        case 0x12bea8u: goto label_12bea8;
        case 0x12beacu: goto label_12beac;
        case 0x12beb0u: goto label_12beb0;
        default: break;
    }

    ctx->pc = 0x12bdf8u;

label_12bdf8:
    // 0x12bdf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12bdfc:
    // 0x12bdfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12be00:
    // 0x12be00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12be00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12be04:
    // 0x12be04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12be08:
    // 0x12be08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12be08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12be0c:
    // 0x12be0c: 0xc0682b2  jal         func_1A0AC8
label_12be10:
    if (ctx->pc == 0x12BE10u) {
        ctx->pc = 0x12BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE0Cu;
        // 0x12be10: 0x240402f6  addiu       $a0, $zero, 0x2F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 758));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE14u;
        goto label_12be14;
    }
    ctx->pc = 0x12BE0Cu;
    SET_GPR_U32(ctx, 31, 0x12BE14u);
    ctx->pc = 0x12BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE0Cu;
    // 0x12be10: 0x240402f6  addiu       $a0, $zero, 0x2F6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 758));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x12BE0Cu, 0x12BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE14u;
label_12be14:
    // 0x12be14: 0xc0682b6  jal         func_1A0AD8
label_12be18:
    if (ctx->pc == 0x12BE18u) {
        ctx->pc = 0x12BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE14u;
        // 0x12be18: 0x3404e590  ori         $a0, $zero, 0xE590 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE1Cu;
        goto label_12be1c;
    }
    ctx->pc = 0x12BE14u;
    SET_GPR_U32(ctx, 31, 0x12BE1Cu);
    ctx->pc = 0x12BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE14u;
    // 0x12be18: 0x3404e590  ori         $a0, $zero, 0xE590 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x12BE14u, 0x12BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE1Cu;
label_12be1c:
    // 0x12be1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12be1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12be20:
    // 0x12be20: 0xc048f0e  jal         func_123C38
label_12be24:
    if (ctx->pc == 0x12BE24u) {
        ctx->pc = 0x12BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE20u;
        // 0x12be24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE28u;
        goto label_12be28;
    }
    ctx->pc = 0x12BE20u;
    SET_GPR_U32(ctx, 31, 0x12BE28u);
    ctx->pc = 0x12BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE20u;
    // 0x12be24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C38u, 0x12BE20u, 0x12BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE28u;
label_12be28:
    // 0x12be28: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12be28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_12be2c:
    // 0x12be2c: 0x24a55ce0  addiu       $a1, $a1, 0x5CE0
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23776));
label_12be30:
    // 0x12be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12be34:
    // 0x12be34: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_12be38:
    if (ctx->pc == 0x12BE38u) {
        ctx->pc = 0x12BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE34u;
        // 0x12be38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE3Cu;
        goto label_12be3c;
    }
    ctx->pc = 0x12BE34u;
    {
        const bool branch_taken_0x12be34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE34u;
        // 0x12be38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be34) {
            ctx->pc = 0x12BE50u;
            goto label_12be50;
        }
    }
    ctx->pc = 0x12BE3Cu;
label_12be3c:
    // 0x12be3c: 0xc068186  jal         func_1A0618
label_12be40:
    if (ctx->pc == 0x12BE40u) {
        ctx->pc = 0x12BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE3Cu;
        // 0x12be40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE44u;
        goto label_12be44;
    }
    ctx->pc = 0x12BE3Cu;
    SET_GPR_U32(ctx, 31, 0x12BE44u);
    ctx->pc = 0x12BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE3Cu;
    // 0x12be40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12BE3Cu, 0x12BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE44u;
label_12be44:
    // 0x12be44: 0x10000016  b           . + 4 + (0x16 << 2)
label_12be48:
    if (ctx->pc == 0x12BE48u) {
        ctx->pc = 0x12BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE44u;
        // 0x12be48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE4Cu;
        goto label_12be4c;
    }
    ctx->pc = 0x12BE44u;
    {
        const bool branch_taken_0x12be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE44u;
        // 0x12be48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be44) {
            ctx->pc = 0x12BEA0u;
            goto label_12bea0;
        }
    }
    ctx->pc = 0x12BE4Cu;
label_12be4c:
    // 0x12be4c: 0x0  nop
    ctx->pc = 0x12be4cu;
    // NOP
label_12be50:
    // 0x12be50: 0xc048f2a  jal         func_123CA8
label_12be54:
    if (ctx->pc == 0x12BE54u) {
        ctx->pc = 0x12BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE50u;
        // 0x12be54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE58u;
        goto label_12be58;
    }
    ctx->pc = 0x12BE50u;
    SET_GPR_U32(ctx, 31, 0x12BE58u);
    ctx->pc = 0x12BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE50u;
    // 0x12be54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CA8u, 0x12BE50u, 0x12BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE58u;
label_12be58:
    // 0x12be58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_12be5c:
    if (ctx->pc == 0x12BE5Cu) {
        ctx->pc = 0x12BE60u;
        goto label_12be60;
    }
    ctx->pc = 0x12BE58u;
    {
        const bool branch_taken_0x12be58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12be58) {
            ctx->pc = 0x12BE80u;
            goto label_12be80;
        }
    }
    ctx->pc = 0x12BE60u;
label_12be60:
    // 0x12be60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12be64:
    // 0x12be64: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x12be64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_12be68:
    // 0x12be68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12be6c:
    // 0x12be6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12be70:
    // 0x12be70: 0x60f809  jalr        $v1
label_12be74:
    if (ctx->pc == 0x12BE74u) {
        ctx->pc = 0x12BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE70u;
        // 0x12be74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE78u;
        goto label_12be78;
    }
    ctx->pc = 0x12BE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12BE78u);
        ctx->pc = 0x12BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE70u;
        // 0x12be74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BE70u, 0x12BE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12BE78u;
label_12be78:
    // 0x12be78: 0x10000009  b           . + 4 + (0x9 << 2)
label_12be7c:
    if (ctx->pc == 0x12BE7Cu) {
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE80u;
        goto label_12be80;
    }
    ctx->pc = 0x12BE78u;
    {
        const bool branch_taken_0x12be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be78) {
            ctx->pc = 0x12BEA0u;
            goto label_12bea0;
        }
    }
    ctx->pc = 0x12BE80u;
label_12be80:
    // 0x12be80: 0xc04a282  jal         func_128A08
label_12be84:
    if (ctx->pc == 0x12BE84u) {
        ctx->pc = 0x12BE88u;
        goto label_12be88;
    }
    ctx->pc = 0x12BE80u;
    SET_GPR_U32(ctx, 31, 0x12BE88u);
    ctx->pc = 0x128A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128A08u, 0x12BE80u, 0x12BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE88u;
label_12be88:
    // 0x12be88: 0xc04a532  jal         func_1294C8
label_12be8c:
    if (ctx->pc == 0x12BE8Cu) {
        ctx->pc = 0x12BE90u;
        goto label_12be90;
    }
    ctx->pc = 0x12BE88u;
    SET_GPR_U32(ctx, 31, 0x12BE90u);
    ctx->pc = 0x1294C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1294C8u, 0x12BE88u, 0x12BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE90u;
label_12be90:
    // 0x12be90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12be94:
    // 0x12be94: 0xc06825c  jal         func_1A0970
label_12be98:
    if (ctx->pc == 0x12BE98u) {
        ctx->pc = 0x12BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE94u;
        // 0x12be98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE9Cu;
        goto label_12be9c;
    }
    ctx->pc = 0x12BE94u;
    SET_GPR_U32(ctx, 31, 0x12BE9Cu);
    ctx->pc = 0x12BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE94u;
    // 0x12be98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x12BE94u, 0x12BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE9Cu;
label_12be9c:
    // 0x12be9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12be9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12bea0:
    // 0x12bea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12bea4:
    // 0x12bea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12bea8:
    // 0x12bea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12beac:
    // 0x12beac: 0x3e00008  jr          $ra
label_12beb0:
    if (ctx->pc == 0x12BEB0u) {
        ctx->pc = 0x12BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEACu;
        // 0x12beb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEB4u;
        goto label_fallthrough_0x12beac;
    }
    ctx->pc = 0x12BEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEACu;
        // 0x12beb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12beac:
    ctx->pc = 0x12BEB4u;
}
