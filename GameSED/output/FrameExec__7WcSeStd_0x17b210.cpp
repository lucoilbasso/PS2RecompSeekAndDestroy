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

// Function: FrameExec__7WcSeStd
// Address: 0x17b210 - 0x17b2e8
void FrameExec__7WcSeStd_0x17b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FrameExec__7WcSeStd_0x17b210");
#endif

    switch (ctx->pc) {
        case 0x17b238u: goto label_17b238;
        case 0x17b244u: goto label_17b244;
        case 0x17b258u: goto label_17b258;
        case 0x17b270u: goto label_17b270;
        case 0x17b27cu: goto label_17b27c;
        case 0x17b294u: goto label_17b294;
        case 0x17b29cu: goto label_17b29c;
        case 0x17b2a8u: goto label_17b2a8;
        case 0x17b2bcu: goto label_17b2bc;
        case 0x17b2c4u: goto label_17b2c4;
        case 0x17b2ccu: goto label_17b2cc;
        default: break;
    }

    ctx->pc = 0x17b210u;

    // 0x17b210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b214: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17b218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b21c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17b220: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17b224: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17b228: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17b22c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17b22cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b230: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x17b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x17b234: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17b234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b238:
    // 0x17b238: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b23c: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17B23Cu;
    SET_GPR_U32(ctx, 31, 0x17B244u);
    ctx->pc = 0x17B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B23Cu;
    // 0x17b240: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17B23Cu, 0x17B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B244u;
label_17b244:
    // 0x17b244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b248: 0x1053000c  beq         $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x17B248u;
    {
        const bool branch_taken_0x17b248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x17B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B248u;
        // 0x17b24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b248) {
            ctx->pc = 0x17B27Cu;
            goto label_17b27c;
        }
    }
    ctx->pc = 0x17B250u;
    // 0x17b250: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17B250u;
    SET_GPR_U32(ctx, 31, 0x17B258u);
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17B250u, 0x17B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B258u;
label_17b258:
    // 0x17b258: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17b25c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B25Cu;
    {
        const bool branch_taken_0x17b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B25Cu;
        // 0x17b260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b25c) {
            ctx->pc = 0x17B274u;
            goto label_17b274;
        }
    }
    ctx->pc = 0x17B264u;
    // 0x17b264: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17b268: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17B268u;
    SET_GPR_U32(ctx, 31, 0x17B270u);
    ctx->pc = 0x17B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B268u;
    // 0x17b26c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17B268u, 0x17B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B270u;
label_17b270:
    // 0x17b270: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17b270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_17b274:
    // 0x17b274: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17B274u;
    SET_GPR_U32(ctx, 31, 0x17B27Cu);
    ctx->pc = 0x17B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B274u;
    // 0x17b278: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17B274u, 0x17B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B27Cu;
label_17b27c:
    // 0x17b27c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17b27cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17b280: 0x641ffed  bgez        $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17B280u;
    {
        const bool branch_taken_0x17b280 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B280u;
        // 0x17b284: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b280) {
            ctx->pc = 0x17B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b238;
        }
    }
    ctx->pc = 0x17B288u;
    // 0x17b288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b28c: 0xc05ed7c  jal         func_17B5F0
    ctx->pc = 0x17B28Cu;
    SET_GPR_U32(ctx, 31, 0x17B294u);
    ctx->pc = 0x17B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B28Cu;
    // 0x17b290: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B5F0u, 0x17B28Cu, 0x17B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B294u;
label_17b294:
    // 0x17b294: 0xc05ed42  jal         func_17B508
    ctx->pc = 0x17B294u;
    SET_GPR_U32(ctx, 31, 0x17B29Cu);
    ctx->pc = 0x17B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B294u;
    // 0x17b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B508u, 0x17B294u, 0x17B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B29Cu;
label_17b29c:
    // 0x17b29c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b2a0: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17B2A0u;
    SET_GPR_U32(ctx, 31, 0x17B2A8u);
    ctx->pc = 0x17B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2A0u;
    // 0x17b2a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17B2A0u, 0x17B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2A8u;
label_17b2a8:
    // 0x17b2a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b2ac: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B2ACu;
    {
        const bool branch_taken_0x17b2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b2ac) {
            ctx->pc = 0x17B2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B2ACu;
            // 0x17b2b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B2D0u;
            goto label_17b2d0;
        }
    }
    ctx->pc = 0x17B2B4u;
    // 0x17b2b4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17B2B4u;
    SET_GPR_U32(ctx, 31, 0x17B2BCu);
    ctx->pc = 0x17B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2B4u;
    // 0x17b2b8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17B2B4u, 0x17B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2BCu;
label_17b2bc:
    // 0x17b2bc: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17B2BCu;
    SET_GPR_U32(ctx, 31, 0x17B2C4u);
    ctx->pc = 0x17B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2BCu;
    // 0x17b2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17B2BCu, 0x17B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2C4u;
label_17b2c4:
    // 0x17b2c4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B2C4u;
    SET_GPR_U32(ctx, 31, 0x17B2CCu);
    ctx->pc = 0x17B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2C4u;
    // 0x17b2c8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B2C4u, 0x17B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2CCu;
label_17b2cc:
    // 0x17b2cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17b2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b2d0:
    // 0x17b2d0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17b2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17b2d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17b2d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b2d8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b2dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17b2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2E0u;
        // 0x17b2e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2E8u;
}
