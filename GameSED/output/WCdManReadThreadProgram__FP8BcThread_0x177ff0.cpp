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

// Function: WCdManReadThreadProgram__FP8BcThread
// Address: 0x177ff0 - 0x178120
void WCdManReadThreadProgram__FP8BcThread_0x177ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManReadThreadProgram__FP8BcThread_0x177ff0");
#endif

    switch (ctx->pc) {
        case 0x178028u: goto label_178028;
        case 0x178040u: goto label_178040;
        case 0x178050u: goto label_178050;
        case 0x17805cu: goto label_17805c;
        case 0x178084u: goto label_178084;
        case 0x1780a4u: goto label_1780a4;
        case 0x1780d8u: goto label_1780d8;
        case 0x1780e0u: goto label_1780e0;
        case 0x1780e8u: goto label_1780e8;
        case 0x178100u: goto label_178100;
        default: break;
    }

    ctx->pc = 0x177ff0u;

    // 0x177ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177ff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177ffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178000: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178004: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178008: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x178008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17800c: 0x4a000  sll         $s4, $a0, 0
    ctx->pc = 0x17800cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x178010: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178014: 0x8e930018  lw          $s3, 0x18($s4)
    ctx->pc = 0x178014u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x178018: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17801c: 0x26721020  addiu       $s2, $s3, 0x1020
    ctx->pc = 0x17801cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4128));
    // 0x178020: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x178020u;
    SET_GPR_U32(ctx, 31, 0x178028u);
    ctx->pc = 0x178024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178020u;
    // 0x178024: 0x8e241010  lw          $a0, 0x1010($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178020u, 0x178028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178028u;
label_178028:
    // 0x178028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17802c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178030: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178030u;
    {
        const bool branch_taken_0x178030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178030u;
        // 0x178034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178030) {
            ctx->pc = 0x178048u;
            goto label_178048;
        }
    }
    ctx->pc = 0x178038u;
    // 0x178038: 0xc05e19a  jal         func_178668
    ctx->pc = 0x178038u;
    SET_GPR_U32(ctx, 31, 0x178040u);
    ctx->pc = 0x178668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178668u, 0x178038u, 0x178040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178040u;
label_178040:
    // 0x178040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178040u;
    {
        const bool branch_taken_0x178040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178040u;
        // 0x178044: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178040) {
            ctx->pc = 0x178054u;
            goto label_178054;
        }
    }
    ctx->pc = 0x178048u;
label_178048:
    // 0x178048: 0xc05e1f8  jal         func_1787E0
    ctx->pc = 0x178048u;
    SET_GPR_U32(ctx, 31, 0x178050u);
    ctx->pc = 0x17804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178048u;
    // 0x17804c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1787E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1787E0u, 0x178048u, 0x178050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178050u;
label_178050:
    // 0x178050: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x178050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_178054:
    // 0x178054: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x178054u;
    SET_GPR_U32(ctx, 31, 0x17805Cu);
    ctx->pc = 0x178058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178054u;
    // 0x178058: 0x24847960  addiu       $a0, $a0, 0x7960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x178054u, 0x17805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17805Cu;
label_17805c:
    // 0x17805c: 0x24054020  addiu       $a1, $zero, 0x4020
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16416));
    // 0x178060: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x178060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x178064: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x178064u;
    {
        const bool branch_taken_0x178064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178064u;
        // 0x178068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178064) {
            ctx->pc = 0x1780E0u;
            goto label_1780e0;
        }
    }
    ctx->pc = 0x17806Cu;
    // 0x17806c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178070: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178074: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x178074u;
    {
        const bool branch_taken_0x178074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178074) {
            ctx->pc = 0x178078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178074u;
            // 0x178078: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17807Cu;
            goto label_17807c;
        }
    }
    ctx->pc = 0x17807Cu;
label_17807c:
    // 0x17807c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17807Cu;
    SET_GPR_U32(ctx, 31, 0x178084u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17807Cu, 0x178084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178084u;
label_178084:
    // 0x178084: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x178084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x178088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17808c: 0x24a57978  addiu       $a1, $a1, 0x7978
    ctx->pc = 0x17808cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31096));
    // 0x178090: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178090u;
    {
        const bool branch_taken_0x178090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x178094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178090u;
        // 0x178094: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178090) {
            ctx->pc = 0x1780A4u;
            goto label_1780a4;
        }
    }
    ctx->pc = 0x178098u;
    // 0x178098: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17809c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17809Cu;
    SET_GPR_U32(ctx, 31, 0x1780A4u);
    ctx->pc = 0x1780A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17809Cu;
    // 0x1780a0: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17809Cu, 0x1780A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780A4u;
label_1780a4:
    // 0x1780a4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1780a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1780a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780ac: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1780acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1780b0: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x1780b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x1780b4: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x1780b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1780b8: 0x24880020  addiu       $t0, $a0, 0x20
    ctx->pc = 0x1780b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1780bc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1780bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1780c0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1780c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780c4: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x1780c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1780c8: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x1780c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1780cc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1780ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1780d0: 0xc068620  jal         func_1A1880
    ctx->pc = 0x1780D0u;
    SET_GPR_U32(ctx, 31, 0x1780D8u);
    ctx->pc = 0x1780D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780D0u;
    // 0x1780d4: 0x24c68620  addiu       $a2, $a2, -0x79E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1880u, 0x1780D0u, 0x1780D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780D8u;
label_1780d8:
    // 0x1780d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1780D8u;
    SET_GPR_U32(ctx, 31, 0x1780E0u);
    ctx->pc = 0x1780DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780D8u;
    // 0x1780dc: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1780D8u, 0x1780E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780E0u;
label_1780e0:
    // 0x1780e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1780E0u;
    SET_GPR_U32(ctx, 31, 0x1780E8u);
    ctx->pc = 0x1780E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780E0u;
    // 0x1780e4: 0x8e241010  lw          $a0, 0x1010($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1780E0u, 0x1780E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780E8u;
label_1780e8:
    // 0x1780e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1780e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780ec: 0x8e221044  lw          $v0, 0x1044($s1)
    ctx->pc = 0x1780ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4164)));
    // 0x1780f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1780f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1780f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1780f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1780f8: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x1780F8u;
    SET_GPR_U32(ctx, 31, 0x178100u);
    ctx->pc = 0x1780FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780F8u;
    // 0x1780fc: 0xae221044  sw          $v0, 0x1044($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x1780F8u, 0x178100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178100u;
label_178100:
    // 0x178100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17810c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17810cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178110: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178114: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x178114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178118: 0x3e00008  jr          $ra
    ctx->pc = 0x178118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178118u;
        // 0x17811c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178120u;
}
