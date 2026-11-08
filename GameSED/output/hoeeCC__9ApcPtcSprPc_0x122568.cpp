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

// Function: hoeeCC__9ApcPtcSprPc
// Address: 0x122568 - 0x122674
void hoeeCC__9ApcPtcSprPc_0x122568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hoeeCC__9ApcPtcSprPc_0x122568");
#endif

    switch (ctx->pc) {
        case 0x1225b0u: goto label_1225b0;
        case 0x1225c0u: goto label_1225c0;
        case 0x1225d0u: goto label_1225d0;
        case 0x1225f0u: goto label_1225f0;
        case 0x122600u: goto label_122600;
        case 0x122610u: goto label_122610;
        case 0x12263cu: goto label_12263c;
        case 0x12264cu: goto label_12264c;
        default: break;
    }

    ctx->pc = 0x122568u;

    // 0x122568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12256c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122574: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122578: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x122578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12257c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122580: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x122580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122584: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x122588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12258c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122590: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x122590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x122594: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x122594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x122598: 0x8e30015c  lw          $s0, 0x15C($s1)
    ctx->pc = 0x122598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x12259c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x12259Cu;
    {
        const bool branch_taken_0x12259c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12259Cu;
        // 0x1225a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12259c) {
            ctx->pc = 0x1225DCu;
            goto label_1225dc;
        }
    }
    ctx->pc = 0x1225A4u;
    // 0x1225a4: 0x3c160025  lui         $s6, 0x25
    ctx->pc = 0x1225a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
    // 0x1225a8: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1225ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1225acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1225b0:
    // 0x1225b0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1225B0u;
    {
        const bool branch_taken_0x1225b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1225B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225B0u;
        // 0x1225b4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225b0) {
            ctx->pc = 0x1225D0u;
            goto label_1225d0;
        }
    }
    ctx->pc = 0x1225B8u;
    // 0x1225b8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1225B8u;
    SET_GPR_U32(ctx, 31, 0x1225C0u);
    ctx->pc = 0x1225BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225B8u;
    // 0x1225bc: 0x26c45c28  addiu       $a0, $s6, 0x5C28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1225B8u, 0x1225C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225C0u;
label_1225c0:
    // 0x1225c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1225c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225c4: 0x26a55c38  addiu       $a1, $s5, 0x5C38
    ctx->pc = 0x1225c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 23608));
    // 0x1225c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1225C8u;
    SET_GPR_U32(ctx, 31, 0x1225D0u);
    ctx->pc = 0x1225CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225C8u;
    // 0x1225cc: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1225C8u, 0x1225D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225D0u;
label_1225d0:
    // 0x1225d0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1225d4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1225D4u;
    {
        const bool branch_taken_0x1225d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1225d4) {
            ctx->pc = 0x1225D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225D4u;
            // 0x1225d8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1225B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1225b0;
        }
    }
    ctx->pc = 0x1225DCu;
label_1225dc:
    // 0x1225dc: 0x8e300158  lw          $s0, 0x158($s1)
    ctx->pc = 0x1225dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1225e0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1225E0u;
    {
        const bool branch_taken_0x1225e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225e0) {
            ctx->pc = 0x1225E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225E0u;
            // 0x1225e4: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x1225E8u;
    // 0x1225e8: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1225e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1225ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1225ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1225f0:
    // 0x1225f0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1225F0u;
    {
        const bool branch_taken_0x1225f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1225F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225F0u;
        // 0x1225f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225f0) {
            ctx->pc = 0x122610u;
            goto label_122610;
        }
    }
    ctx->pc = 0x1225F8u;
    // 0x1225f8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1225F8u;
    SET_GPR_U32(ctx, 31, 0x122600u);
    ctx->pc = 0x1225FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225F8u;
    // 0x1225fc: 0x26a45c48  addiu       $a0, $s5, 0x5C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1225F8u, 0x122600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122600u;
label_122600:
    // 0x122600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122604: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x122604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122608: 0xc068186  jal         func_1A0618
    ctx->pc = 0x122608u;
    SET_GPR_U32(ctx, 31, 0x122610u);
    ctx->pc = 0x12260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122608u;
    // 0x12260c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x122608u, 0x122610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122610u;
label_122610:
    // 0x122610: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x122610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x122614: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x122614u;
    {
        const bool branch_taken_0x122614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x122614) {
            ctx->pc = 0x122618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122614u;
            // 0x122618: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1225F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1225f0;
        }
    }
    ctx->pc = 0x12261Cu;
    // 0x12261c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x12261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_122620:
    // 0x122620: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x122620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x122624: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122624u;
    {
        const bool branch_taken_0x122624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x122628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122624u;
        // 0x122628: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122624) {
            ctx->pc = 0x12264Cu;
            goto label_12264c;
        }
    }
    ctx->pc = 0x12262Cu;
    // 0x12262c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12262cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122630: 0x24845c58  addiu       $a0, $a0, 0x5C58
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23640));
    // 0x122634: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x122634u;
    SET_GPR_U32(ctx, 31, 0x12263Cu);
    ctx->pc = 0x122638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122634u;
    // 0x122638: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x122634u, 0x12263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12263Cu;
label_12263c:
    // 0x12263c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122640: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x122640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122644: 0xc068186  jal         func_1A0618
    ctx->pc = 0x122644u;
    SET_GPR_U32(ctx, 31, 0x12264Cu);
    ctx->pc = 0x122648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122644u;
    // 0x122648: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x122644u, 0x12264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12264Cu;
label_12264c:
    // 0x12264c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12264cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12265c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12265cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122660: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122664: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x122664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122668: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x122668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12266c: 0x3e00008  jr          $ra
    ctx->pc = 0x12266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12266Cu;
        // 0x122670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122674u;
}
