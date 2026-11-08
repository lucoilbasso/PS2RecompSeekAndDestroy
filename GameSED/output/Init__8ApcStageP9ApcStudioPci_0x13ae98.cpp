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

// Function: Init__8ApcStageP9ApcStudioPci
// Address: 0x13ae98 - 0x13af38
void Init__8ApcStageP9ApcStudioPci_0x13ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8ApcStageP9ApcStudioPci_0x13ae98");
#endif

    switch (ctx->pc) {
        case 0x13aec8u: goto label_13aec8;
        case 0x13aee8u: goto label_13aee8;
        case 0x13af00u: goto label_13af00;
        case 0x13af08u: goto label_13af08;
        case 0x13af10u: goto label_13af10;
        case 0x13af1cu: goto label_13af1c;
        default: break;
    }

    ctx->pc = 0x13ae98u;

    // 0x13ae98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ae9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ae9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aea0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13aea4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13aea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13aea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aeac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13aeb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13aeb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13aeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aeb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13aeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13aebc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13aec0: 0xc046b50  jal         func_11AD40
    ctx->pc = 0x13AEC0u;
    SET_GPR_U32(ctx, 31, 0x13AEC8u);
    ctx->pc = 0x13AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AEC0u;
    // 0x13aec4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD40u, 0x13AEC0u, 0x13AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEC8u;
label_13aec8:
    // 0x13aec8: 0x24020127  addiu       $v0, $zero, 0x127
    ctx->pc = 0x13aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x13aecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aed4: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x13AED4u;
    {
        const bool branch_taken_0x13aed4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AED4u;
        // 0x13aed8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aed4) {
            ctx->pc = 0x13AF14u;
            goto label_13af14;
        }
    }
    ctx->pc = 0x13AEDCu;
    // 0x13aedc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x13aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13aee0: 0xc04161e  jal         func_105878
    ctx->pc = 0x13AEE0u;
    SET_GPR_U32(ctx, 31, 0x13AEE8u);
    ctx->pc = 0x13AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AEE0u;
    // 0x13aee4: 0x8c510378  lw          $s1, 0x378($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 888)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105878u, 0x13AEE0u, 0x13AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEE8u;
label_13aee8:
    // 0x13aee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13aee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aeec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13aeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aef0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13aef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13aef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aef8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x13AEF8u;
    SET_GPR_U32(ctx, 31, 0x13AF00u);
    ctx->pc = 0x13AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AEF8u;
    // 0x13aefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x13AEF8u, 0x13AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF00u;
label_13af00:
    // 0x13af00: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13AF00u;
    SET_GPR_U32(ctx, 31, 0x13AF08u);
    ctx->pc = 0x13AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF00u;
    // 0x13af04: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13AF00u, 0x13AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF08u;
label_13af08:
    // 0x13af08: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13AF08u;
    SET_GPR_U32(ctx, 31, 0x13AF10u);
    ctx->pc = 0x13AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF08u;
    // 0x13af0c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13AF08u, 0x13AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF10u;
label_13af10:
    // 0x13af10: 0xae500088  sw          $s0, 0x88($s2)
    ctx->pc = 0x13af10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 16));
label_13af14:
    // 0x13af14: 0xc046bb2  jal         func_11AEC8
    ctx->pc = 0x13AF14u;
    SET_GPR_U32(ctx, 31, 0x13AF1Cu);
    ctx->pc = 0x13AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AF14u;
    // 0x13af18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AEC8u, 0x13AF14u, 0x13AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF1Cu;
label_13af1c:
    // 0x13af1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13af1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13af20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13af24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13af24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13af28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13af28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13af2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13af2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13af30: 0x3e00008  jr          $ra
    ctx->pc = 0x13AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF30u;
        // 0x13af34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AF38u;
}
