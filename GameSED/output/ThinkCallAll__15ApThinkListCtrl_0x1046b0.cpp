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

// Function: ThinkCallAll__15ApThinkListCtrl
// Address: 0x1046b0 - 0x10471c
void ThinkCallAll__15ApThinkListCtrl_0x1046b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThinkCallAll__15ApThinkListCtrl_0x1046b0");
#endif

    switch (ctx->pc) {
        case 0x1046b0u: goto label_1046b0;
        case 0x1046b4u: goto label_1046b4;
        case 0x1046b8u: goto label_1046b8;
        case 0x1046bcu: goto label_1046bc;
        case 0x1046c0u: goto label_1046c0;
        case 0x1046c4u: goto label_1046c4;
        case 0x1046c8u: goto label_1046c8;
        case 0x1046ccu: goto label_1046cc;
        case 0x1046d0u: goto label_1046d0;
        case 0x1046d4u: goto label_1046d4;
        case 0x1046d8u: goto label_1046d8;
        case 0x1046dcu: goto label_1046dc;
        case 0x1046e0u: goto label_1046e0;
        case 0x1046e4u: goto label_1046e4;
        case 0x1046e8u: goto label_1046e8;
        case 0x1046ecu: goto label_1046ec;
        case 0x1046f0u: goto label_1046f0;
        case 0x1046f4u: goto label_1046f4;
        case 0x1046f8u: goto label_1046f8;
        case 0x1046fcu: goto label_1046fc;
        case 0x104700u: goto label_104700;
        case 0x104704u: goto label_104704;
        case 0x104708u: goto label_104708;
        case 0x10470cu: goto label_10470c;
        case 0x104710u: goto label_104710;
        case 0x104714u: goto label_104714;
        case 0x104718u: goto label_104718;
        default: break;
    }

    ctx->pc = 0x1046b0u;

label_1046b0:
    // 0x1046b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1046b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1046b4:
    // 0x1046b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1046b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1046b8:
    // 0x1046b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1046b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1046bc:
    // 0x1046bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1046bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1046c0:
    // 0x1046c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1046c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1046c4:
    // 0x1046c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1046c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1046c8:
    // 0x1046c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1046c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1046cc:
    // 0x1046cc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_1046d0:
    if (ctx->pc == 0x1046D0u) {
        ctx->pc = 0x1046D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046CCu;
        // 0x1046d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046D4u;
        goto label_1046d4;
    }
    ctx->pc = 0x1046CCu;
    {
        const bool branch_taken_0x1046cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1046cc) {
            ctx->pc = 0x1046D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1046CCu;
            // 0x1046d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10470Cu;
            goto label_10470c;
        }
    }
    ctx->pc = 0x1046D4u;
label_1046d4:
    // 0x1046d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1046d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1046d8:
    // 0x1046d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1046d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1046dc:
    // 0x1046dc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1046e0:
    // 0x1046e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1046e4:
    if (ctx->pc == 0x1046E4u) {
        ctx->pc = 0x1046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E0u;
        // 0x1046e4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046E8u;
        goto label_1046e8;
    }
    ctx->pc = 0x1046E0u;
    {
        const bool branch_taken_0x1046e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E0u;
        // 0x1046e4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046e0) {
            ctx->pc = 0x104700u;
            goto label_104700;
        }
    }
    ctx->pc = 0x1046E8u;
label_1046e8:
    // 0x1046e8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1046e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1046ec:
    // 0x1046ec: 0x40f809  jalr        $v0
label_1046f0:
    if (ctx->pc == 0x1046F0u) {
        ctx->pc = 0x1046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046ECu;
        // 0x1046f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046F4u;
        goto label_1046f4;
    }
    ctx->pc = 0x1046ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1046F4u);
        ctx->pc = 0x1046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046ECu;
        // 0x1046f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046ECu, 0x1046F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1046F4u;
label_1046f4:
    // 0x1046f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1046f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1046f8:
    // 0x1046f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1046f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1046fc:
    // 0x1046fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1046fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_104700:
    // 0x104700: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_104704:
    if (ctx->pc == 0x104704u) {
        ctx->pc = 0x104704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104700u;
        // 0x104704: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104708u;
        goto label_104708;
    }
    ctx->pc = 0x104700u;
    {
        const bool branch_taken_0x104700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x104700) {
            ctx->pc = 0x104704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104700u;
            // 0x104704: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1046D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1046d8;
        }
    }
    ctx->pc = 0x104708u;
label_104708:
    // 0x104708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10470c:
    // 0x10470c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10470cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_104710:
    // 0x104710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x104710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_104714:
    // 0x104714: 0x3e00008  jr          $ra
label_104718:
    if (ctx->pc == 0x104718u) {
        ctx->pc = 0x104718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104714u;
        // 0x104718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10471Cu;
        goto label_fallthrough_0x104714;
    }
    ctx->pc = 0x104714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104714u;
        // 0x104718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x104714:
    ctx->pc = 0x10471Cu;
}
