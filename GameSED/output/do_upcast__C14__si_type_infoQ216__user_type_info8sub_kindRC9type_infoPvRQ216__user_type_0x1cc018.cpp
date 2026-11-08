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

// Function: do_upcast__C14__si_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result
// Address: 0x1cc018 - 0x1cc0c4
void do_upcast__C14__si_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result_0x1cc018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_upcast__C14__si_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result_0x1cc018");
#endif

    switch (ctx->pc) {
        case 0x1cc018u: goto label_1cc018;
        case 0x1cc01cu: goto label_1cc01c;
        case 0x1cc020u: goto label_1cc020;
        case 0x1cc024u: goto label_1cc024;
        case 0x1cc028u: goto label_1cc028;
        case 0x1cc02cu: goto label_1cc02c;
        case 0x1cc030u: goto label_1cc030;
        case 0x1cc034u: goto label_1cc034;
        case 0x1cc038u: goto label_1cc038;
        case 0x1cc03cu: goto label_1cc03c;
        case 0x1cc040u: goto label_1cc040;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc048u: goto label_1cc048;
        case 0x1cc04cu: goto label_1cc04c;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc054u: goto label_1cc054;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc05cu: goto label_1cc05c;
        case 0x1cc060u: goto label_1cc060;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc068u: goto label_1cc068;
        case 0x1cc06cu: goto label_1cc06c;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc074u: goto label_1cc074;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc080u: goto label_1cc080;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc088u: goto label_1cc088;
        case 0x1cc08cu: goto label_1cc08c;
        case 0x1cc090u: goto label_1cc090;
        case 0x1cc094u: goto label_1cc094;
        case 0x1cc098u: goto label_1cc098;
        case 0x1cc09cu: goto label_1cc09c;
        case 0x1cc0a0u: goto label_1cc0a0;
        case 0x1cc0a4u: goto label_1cc0a4;
        case 0x1cc0a8u: goto label_1cc0a8;
        case 0x1cc0acu: goto label_1cc0ac;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc0b4u: goto label_1cc0b4;
        case 0x1cc0b8u: goto label_1cc0b8;
        case 0x1cc0bcu: goto label_1cc0bc;
        case 0x1cc0c0u: goto label_1cc0c0;
        default: break;
    }

    ctx->pc = 0x1cc018u;

label_1cc018:
    // 0x1cc018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc01c:
    // 0x1cc01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cc020:
    // 0x1cc020: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cc020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc024:
    // 0x1cc024: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cc028:
    // 0x1cc028: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cc028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc02c:
    // 0x1cc02c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc030:
    // 0x1cc030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cc034:
    // 0x1cc034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cc038:
    // 0x1cc038: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1cc038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc03c:
    // 0x1cc03c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1cc040:
    // 0x1cc040: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cc040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc044:
    // 0x1cc044: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1cc048:
    // 0x1cc048: 0xc072f28  jal         func_1CBCA0
label_1cc04c:
    if (ctx->pc == 0x1CC04Cu) {
        ctx->pc = 0x1CC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC048u;
        // 0x1cc04c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC050u;
        goto label_1cc050;
    }
    ctx->pc = 0x1CC048u;
    SET_GPR_U32(ctx, 31, 0x1CC050u);
    ctx->pc = 0x1CC04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC048u;
    // 0x1cc04c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC048u, 0x1CC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC050u;
label_1cc050:
    // 0x1cc050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc054:
    // 0x1cc054: 0x32430006  andi        $v1, $s2, 0x6
    ctx->pc = 0x1cc054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
label_1cc058:
    // 0x1cc058: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc05c:
    // 0x1cc05c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x1cc05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_1cc060:
    // 0x1cc060: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cc060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc064:
    // 0x1cc064: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cc068:
    if (ctx->pc == 0x1CC068u) {
        ctx->pc = 0x1CC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC064u;
        // 0x1cc068: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC06Cu;
        goto label_1cc06c;
    }
    ctx->pc = 0x1CC064u;
    {
        const bool branch_taken_0x1cc064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC064u;
        // 0x1cc068: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc064) {
            ctx->pc = 0x1CC088u;
            goto label_1cc088;
        }
    }
    ctx->pc = 0x1CC06Cu;
label_1cc06c:
    // 0x1cc06c: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x1cc06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cc070:
    // 0x1cc070: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc074:
    // 0x1cc074: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x1cc074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_1cc078:
    // 0x1cc078: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1cc078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1cc07c:
    // 0x1cc07c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cc080:
    if (ctx->pc == 0x1CC080u) {
        ctx->pc = 0x1CC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC07Cu;
        // 0x1cc080: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC084u;
        goto label_1cc084;
    }
    ctx->pc = 0x1CC07Cu;
    {
        const bool branch_taken_0x1cc07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC07Cu;
        // 0x1cc080: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc07c) {
            ctx->pc = 0x1CC0A4u;
            goto label_1cc0a4;
        }
    }
    ctx->pc = 0x1CC084u;
label_1cc084:
    // 0x1cc084: 0x0  nop
    ctx->pc = 0x1cc084u;
    // NOP
label_1cc088:
    // 0x1cc088: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1cc08c:
    // 0x1cc08c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cc08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cc090:
    // 0x1cc090: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1cc094:
    // 0x1cc094: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc098:
    // 0x1cc098: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc09c:
    // 0x1cc09c: 0x40f809  jalr        $v0
label_1cc0a0:
    if (ctx->pc == 0x1CC0A0u) {
        ctx->pc = 0x1CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC09Cu;
        // 0x1cc0a0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0A4u;
        goto label_1cc0a4;
    }
    ctx->pc = 0x1CC09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC0A4u);
        ctx->pc = 0x1CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC09Cu;
        // 0x1cc0a0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC09Cu, 0x1CC0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC0A4u;
label_1cc0a4:
    // 0x1cc0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc0a8:
    // 0x1cc0a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc0ac:
    // 0x1cc0ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc0b0:
    // 0x1cc0b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc0b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc0b4:
    // 0x1cc0b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc0b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc0b8:
    // 0x1cc0b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cc0bc:
    // 0x1cc0bc: 0x3e00008  jr          $ra
label_1cc0c0:
    if (ctx->pc == 0x1CC0C0u) {
        ctx->pc = 0x1CC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0BCu;
        // 0x1cc0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0C4u;
        goto label_fallthrough_0x1cc0bc;
    }
    ctx->pc = 0x1CC0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0BCu;
        // 0x1cc0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cc0bc:
    ctx->pc = 0x1CC0C4u;
}
