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

// Function: Finish__7WcModel
// Address: 0x17ea50 - 0x17eb38
void Finish__7WcModel_0x17ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcModel_0x17ea50");
#endif

    switch (ctx->pc) {
        case 0x17ea88u: goto label_17ea88;
        case 0x17ea9cu: goto label_17ea9c;
        case 0x17eac4u: goto label_17eac4;
        case 0x17ead8u: goto label_17ead8;
        case 0x17eaecu: goto label_17eaec;
        case 0x17eb00u: goto label_17eb00;
        case 0x17eb14u: goto label_17eb14;
        case 0x17eb1cu: goto label_17eb1c;
        default: break;
    }

    ctx->pc = 0x17ea50u;

    // 0x17ea50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ea54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ea58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ea5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17ea5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ea64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17ea64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ea6c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x17ea6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ea74: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x17ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17ea78: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17EA78u;
    {
        const bool branch_taken_0x17ea78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA78u;
        // 0x17ea7c: 0x8e700024  lw          $s0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea78) {
            ctx->pc = 0x17EAB0u;
            goto label_17eab0;
        }
    }
    ctx->pc = 0x17EA80u;
    // 0x17ea80: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17ea84: 0x0  nop
    ctx->pc = 0x17ea84u;
    // NOP
label_17ea88:
    // 0x17ea88: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x17ea88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17ea8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EA8Cu;
    {
        const bool branch_taken_0x17ea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA8Cu;
        // 0x17ea90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea8c) {
            ctx->pc = 0x17EA9Cu;
            goto label_17ea9c;
        }
    }
    ctx->pc = 0x17EA94u;
    // 0x17ea94: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EA94u;
    SET_GPR_U32(ctx, 31, 0x17EA9Cu);
    ctx->pc = 0x17EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA94u;
    // 0x17ea98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EA94u, 0x17EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA9Cu;
label_17ea9c:
    // 0x17ea9c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x17ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17eaa0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17eaa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17eaa4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17eaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17eaa8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17EAA8u;
    {
        const bool branch_taken_0x17eaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eaa8) {
            ctx->pc = 0x17EAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAA8u;
            // 0x17eaac: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ea88;
        }
    }
    ctx->pc = 0x17EAB0u;
label_17eab0:
    // 0x17eab0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x17eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17eab4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EAB4u;
    {
        const bool branch_taken_0x17eab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eab4) {
            ctx->pc = 0x17EAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAB4u;
            // 0x17eab8: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EAC8u;
            goto label_17eac8;
        }
    }
    ctx->pc = 0x17EABCu;
    // 0x17eabc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EABCu;
    SET_GPR_U32(ctx, 31, 0x17EAC4u);
    ctx->pc = 0x17EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EABCu;
    // 0x17eac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EABCu, 0x17EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAC4u;
label_17eac4:
    // 0x17eac4: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x17eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_17eac8:
    // 0x17eac8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EAC8u;
    {
        const bool branch_taken_0x17eac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eac8) {
            ctx->pc = 0x17EACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAC8u;
            // 0x17eacc: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EADCu;
            goto label_17eadc;
        }
    }
    ctx->pc = 0x17EAD0u;
    // 0x17ead0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EAD0u;
    SET_GPR_U32(ctx, 31, 0x17EAD8u);
    ctx->pc = 0x17EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAD0u;
    // 0x17ead4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EAD0u, 0x17EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAD8u;
label_17ead8:
    // 0x17ead8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_17eadc:
    // 0x17eadc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EADCu;
    {
        const bool branch_taken_0x17eadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eadc) {
            ctx->pc = 0x17EAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EADCu;
            // 0x17eae0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EAF0u;
            goto label_17eaf0;
        }
    }
    ctx->pc = 0x17EAE4u;
    // 0x17eae4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EAE4u;
    SET_GPR_U32(ctx, 31, 0x17EAECu);
    ctx->pc = 0x17EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAE4u;
    // 0x17eae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EAE4u, 0x17EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAECu;
label_17eaec:
    // 0x17eaec: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x17eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_17eaf0:
    // 0x17eaf0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EAF0u;
    {
        const bool branch_taken_0x17eaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eaf0) {
            ctx->pc = 0x17EAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAF0u;
            // 0x17eaf4: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EB04u;
            goto label_17eb04;
        }
    }
    ctx->pc = 0x17EAF8u;
    // 0x17eaf8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EAF8u;
    SET_GPR_U32(ctx, 31, 0x17EB00u);
    ctx->pc = 0x17EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAF8u;
    // 0x17eafc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EAF8u, 0x17EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB00u;
label_17eb00:
    // 0x17eb00: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x17eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_17eb04:
    // 0x17eb04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EB04u;
    {
        const bool branch_taken_0x17eb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb04) {
            ctx->pc = 0x17EB14u;
            goto label_17eb14;
        }
    }
    ctx->pc = 0x17EB0Cu;
    // 0x17eb0c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EB0Cu;
    SET_GPR_U32(ctx, 31, 0x17EB14u);
    ctx->pc = 0x17EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB0Cu;
    // 0x17eb10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EB0Cu, 0x17EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB14u;
label_17eb14:
    // 0x17eb14: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x17EB14u;
    SET_GPR_U32(ctx, 31, 0x17EB1Cu);
    ctx->pc = 0x17EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB14u;
    // 0x17eb18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x17EB14u, 0x17EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB1Cu;
label_17eb1c:
    // 0x17eb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17eb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17eb20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17eb24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17eb24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17eb28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eb2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17eb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x17EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB30u;
        // 0x17eb34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EB38u;
}
