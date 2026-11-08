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

// Function: Cmd_SE_PITCH_MOTION_Entry__FP15BsSCDEntControl
// Address: 0x11d418 - 0x11d4e4
void Cmd_SE_PITCH_MOTION_Entry__FP15BsSCDEntControl_0x11d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_PITCH_MOTION_Entry__FP15BsSCDEntControl_0x11d418");
#endif

    switch (ctx->pc) {
        case 0x11d438u: goto label_11d438;
        case 0x11d468u: goto label_11d468;
        case 0x11d498u: goto label_11d498;
        case 0x11d4a4u: goto label_11d4a4;
        case 0x11d4c8u: goto label_11d4c8;
        default: break;
    }

    ctx->pc = 0x11d418u;

    // 0x11d418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11d424: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11d428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d42c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d430: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D430u;
    SET_GPR_U32(ctx, 31, 0x11D438u);
    ctx->pc = 0x11D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D430u;
    // 0x11d434: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D430u, 0x11D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D438u;
label_11d438:
    // 0x11d438: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d43c: 0x2e42000d  sltiu       $v0, $s2, 0xD
    ctx->pc = 0x11d43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x11d440: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11D440u;
    {
        const bool branch_taken_0x11d440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D440u;
        // 0x11d444: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d440) {
            ctx->pc = 0x11D4C8u;
            goto label_11d4c8;
        }
    }
    ctx->pc = 0x11D448u;
    // 0x11d448: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d44c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x11d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11d450: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11d454: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x11d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x11d458: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x11D458u;
    {
        const bool branch_taken_0x11d458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d458) {
            ctx->pc = 0x11D45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D458u;
            // 0x11d45c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D4CCu;
            goto label_11d4cc;
        }
    }
    ctx->pc = 0x11D460u;
    // 0x11d460: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D460u;
    SET_GPR_U32(ctx, 31, 0x11D468u);
    ctx->pc = 0x11D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D460u;
    // 0x11d464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D460u, 0x11D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D468u;
label_11d468:
    // 0x11d468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d46c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d470: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x11d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x11d474: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d478: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D478u;
    {
        const bool branch_taken_0x11d478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x11D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D478u;
        // 0x11d47c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d478) {
            ctx->pc = 0x11D490u;
            goto label_11d490;
        }
    }
    ctx->pc = 0x11D480u;
    // 0x11d480: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d484: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x11d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11d488: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x11d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11d48c: 0x8c5101a8  lw          $s1, 0x1A8($v0)
    ctx->pc = 0x11d48cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
label_11d490:
    // 0x11d490: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D490u;
    SET_GPR_U32(ctx, 31, 0x11D498u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D490u, 0x11D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D498u;
label_11d498:
    // 0x11d498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d49c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D49Cu;
    SET_GPR_U32(ctx, 31, 0x11D4A4u);
    ctx->pc = 0x11D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D49Cu;
    // 0x11d4a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D49Cu, 0x11D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4A4u;
label_11d4a4:
    // 0x11d4a4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d4a8: 0x123140  sll         $a2, $s2, 5
    ctx->pc = 0x11d4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x11d4ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11d4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4b4: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x11d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11d4b8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11d4bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11d4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4c0: 0xc05ef2c  jal         func_17BCB0
    ctx->pc = 0x11D4C0u;
    SET_GPR_U32(ctx, 31, 0x11D4C8u);
    ctx->pc = 0x11D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4C0u;
    // 0x11d4c4: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCB0u, 0x11D4C0u, 0x11D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4C8u;
label_11d4c8:
    // 0x11d4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d4cc:
    // 0x11d4cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d4d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11d4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d4d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11d4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d4d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4DCu;
        // 0x11d4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D4E4u;
}
