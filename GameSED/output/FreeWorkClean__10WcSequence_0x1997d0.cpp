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

// Function: FreeWorkClean__10WcSequence
// Address: 0x1997d0 - 0x199880
void FreeWorkClean__10WcSequence_0x1997d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeWorkClean__10WcSequence_0x1997d0");
#endif

    switch (ctx->pc) {
        case 0x1997d0u: goto label_1997d0;
        case 0x1997d4u: goto label_1997d4;
        case 0x1997d8u: goto label_1997d8;
        case 0x1997dcu: goto label_1997dc;
        case 0x1997e0u: goto label_1997e0;
        case 0x1997e4u: goto label_1997e4;
        case 0x1997e8u: goto label_1997e8;
        case 0x1997ecu: goto label_1997ec;
        case 0x1997f0u: goto label_1997f0;
        case 0x1997f4u: goto label_1997f4;
        case 0x1997f8u: goto label_1997f8;
        case 0x1997fcu: goto label_1997fc;
        case 0x199800u: goto label_199800;
        case 0x199804u: goto label_199804;
        case 0x199808u: goto label_199808;
        case 0x19980cu: goto label_19980c;
        case 0x199810u: goto label_199810;
        case 0x199814u: goto label_199814;
        case 0x199818u: goto label_199818;
        case 0x19981cu: goto label_19981c;
        case 0x199820u: goto label_199820;
        case 0x199824u: goto label_199824;
        case 0x199828u: goto label_199828;
        case 0x19982cu: goto label_19982c;
        case 0x199830u: goto label_199830;
        case 0x199834u: goto label_199834;
        case 0x199838u: goto label_199838;
        case 0x19983cu: goto label_19983c;
        case 0x199840u: goto label_199840;
        case 0x199844u: goto label_199844;
        case 0x199848u: goto label_199848;
        case 0x19984cu: goto label_19984c;
        case 0x199850u: goto label_199850;
        case 0x199854u: goto label_199854;
        case 0x199858u: goto label_199858;
        case 0x19985cu: goto label_19985c;
        case 0x199860u: goto label_199860;
        case 0x199864u: goto label_199864;
        case 0x199868u: goto label_199868;
        case 0x19986cu: goto label_19986c;
        case 0x199870u: goto label_199870;
        case 0x199874u: goto label_199874;
        case 0x199878u: goto label_199878;
        case 0x19987cu: goto label_19987c;
        default: break;
    }

    ctx->pc = 0x1997d0u;

label_1997d0:
    // 0x1997d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1997d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1997d4:
    // 0x1997d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1997d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1997d8:
    // 0x1997d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1997d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1997dc:
    // 0x1997dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1997dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1997e0:
    // 0x1997e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1997e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1997e4:
    // 0x1997e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1997e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1997e8:
    // 0x1997e8: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_1997ec:
    // 0x1997ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1997f0:
    if (ctx->pc == 0x1997F0u) {
        ctx->pc = 0x1997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ECu;
        // 0x1997f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997F4u;
        goto label_1997f4;
    }
    ctx->pc = 0x1997ECu;
    {
        const bool branch_taken_0x1997ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ECu;
        // 0x1997f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ec) {
            ctx->pc = 0x199830u;
            goto label_199830;
        }
    }
    ctx->pc = 0x1997F4u;
label_1997f4:
    // 0x1997f4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1997f8:
    // 0x1997f8: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x1997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_1997fc:
    // 0x1997fc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_199800:
    // 0x199800: 0xc068436  jal         func_1A10D8
label_199804:
    if (ctx->pc == 0x199804u) {
        ctx->pc = 0x199804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199800u;
        // 0x199804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199808u;
        goto label_199808;
    }
    ctx->pc = 0x199800u;
    SET_GPR_U32(ctx, 31, 0x199808u);
    ctx->pc = 0x199804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199800u;
    // 0x199804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x199800u, 0x199808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199808u;
label_199808:
    // 0x199808: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19980c:
    // 0x19980c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199810:
    // 0x199810: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x199810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_199814:
    // 0x199814: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x199814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_199818:
    // 0x199818: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x199818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19981c:
    // 0x19981c: 0x60f809  jalr        $v1
label_199820:
    if (ctx->pc == 0x199820u) {
        ctx->pc = 0x199820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19981Cu;
        // 0x199820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199824u;
        goto label_199824;
    }
    ctx->pc = 0x19981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x199824u);
        ctx->pc = 0x199820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19981Cu;
        // 0x199820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19981Cu, 0x199824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199824u;
label_199824:
    // 0x199824: 0x5620fff4  bnel        $s1, $zero, . + 4 + (-0xC << 2)
label_199828:
    if (ctx->pc == 0x199828u) {
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19982Cu;
        goto label_19982c;
    }
    ctx->pc = 0x199824u;
    {
        const bool branch_taken_0x199824 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x199824) {
            ctx->pc = 0x199828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199824u;
            // 0x199828: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1997F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1997f8;
        }
    }
    ctx->pc = 0x19982Cu;
label_19982c:
    // 0x19982c: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x19982cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_199830:
    // 0x199830: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_199834:
    // 0x199834: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_199838:
    if (ctx->pc == 0x199838u) {
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199834u;
        // 0x199838: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19983Cu;
        goto label_19983c;
    }
    ctx->pc = 0x199834u;
    {
        const bool branch_taken_0x199834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199834u;
        // 0x199838: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199834) {
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x19983Cu;
label_19983c:
    // 0x19983c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x19983cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_199840:
    // 0x199840: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_199844:
    // 0x199844: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x199844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_199848:
    // 0x199848: 0xc068436  jal         func_1A10D8
label_19984c:
    if (ctx->pc == 0x19984Cu) {
        ctx->pc = 0x19984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199848u;
        // 0x19984c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199850u;
        goto label_199850;
    }
    ctx->pc = 0x199848u;
    SET_GPR_U32(ctx, 31, 0x199850u);
    ctx->pc = 0x19984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199848u;
    // 0x19984c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x199848u, 0x199850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199850u;
label_199850:
    // 0x199850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199854:
    // 0x199854: 0xc067f04  jal         func_19FC10
label_199858:
    if (ctx->pc == 0x199858u) {
        ctx->pc = 0x199858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199854u;
        // 0x199858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19985Cu;
        goto label_19985c;
    }
    ctx->pc = 0x199854u;
    SET_GPR_U32(ctx, 31, 0x19985Cu);
    ctx->pc = 0x199858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199854u;
    // 0x199858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199854u, 0x19985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19985Cu;
label_19985c:
    // 0x19985c: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
label_199860:
    if (ctx->pc == 0x199860u) {
        ctx->pc = 0x199860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19985Cu;
        // 0x199860: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199864u;
        goto label_199864;
    }
    ctx->pc = 0x19985Cu;
    {
        const bool branch_taken_0x19985c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x19985c) {
            ctx->pc = 0x199860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19985Cu;
            // 0x199860: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199840;
        }
    }
    ctx->pc = 0x199864u;
label_199864:
    // 0x199864: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x199864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_199868:
    // 0x199868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19986c:
    // 0x19986c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19986cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199870:
    // 0x199870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199874:
    // 0x199874: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x199874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_199878:
    // 0x199878: 0x3e00008  jr          $ra
label_19987c:
    if (ctx->pc == 0x19987Cu) {
        ctx->pc = 0x19987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199878u;
        // 0x19987c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199880u;
        goto label_fallthrough_0x199878;
    }
    ctx->pc = 0x199878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199878u;
        // 0x19987c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199878:
    ctx->pc = 0x199880u;
}
