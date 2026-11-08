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

// Function: Cmd_VAR_POP_Entry__FP15BsSCDEntControl
// Address: 0x1060e8 - 0x106188
void Cmd_VAR_POP_Entry__FP15BsSCDEntControl_0x1060e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_VAR_POP_Entry__FP15BsSCDEntControl_0x1060e8");
#endif

    switch (ctx->pc) {
        case 0x10611cu: goto label_10611c;
        case 0x106138u: goto label_106138;
        case 0x106178u: goto label_106178;
        default: break;
    }

    ctx->pc = 0x1060e8u;

    // 0x1060e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1060e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1060ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1060ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1060f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1060f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1060f4: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x1060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
    // 0x1060f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1060f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1060fc: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x1060fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x106100: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106100u;
    {
        const bool branch_taken_0x106100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106100u;
        // 0x106104: 0x8c900024  lw          $s0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106100) {
            ctx->pc = 0x10611Cu;
            goto label_10611c;
        }
    }
    ctx->pc = 0x106108u;
    // 0x106108: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10610c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106110: 0x24a5d0a8  addiu       $a1, $a1, -0x2F58
    ctx->pc = 0x106110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955176));
    // 0x106114: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106114u;
    SET_GPR_U32(ctx, 31, 0x10611Cu);
    ctx->pc = 0x106118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106114u;
    // 0x106118: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106114u, 0x10611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10611Cu;
label_10611c:
    // 0x10611c: 0x8f8288a0  lw          $v0, -0x7760($gp)
    ctx->pc = 0x10611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x106120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106124: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x106124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x106128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10612c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10612Cu;
    {
        const bool branch_taken_0x10612c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x106130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10612Cu;
        // 0x106130: 0xaf8288a0  sw          $v0, -0x7760($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10612c) {
            ctx->pc = 0x106168u;
            goto label_106168;
        }
    }
    ctx->pc = 0x106134u;
    // 0x106134: 0x8f8488a0  lw          $a0, -0x7760($gp)
    ctx->pc = 0x106134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
label_106138:
    // 0x106138: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10613c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x106140: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x106140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10614c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x106150: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x106150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x106154: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x106154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x106158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10615c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10615cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106160: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x106160u;
    {
        const bool branch_taken_0x106160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106160) {
            ctx->pc = 0x106164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106160u;
            // 0x106164: 0x8f8488a0  lw          $a0, -0x7760($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106138;
        }
    }
    ctx->pc = 0x106168u;
label_106168:
    // 0x106168: 0x8f8288a0  lw          $v0, -0x7760($gp)
    ctx->pc = 0x106168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x10616c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10616cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106170: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x106170u;
    SET_GPR_U32(ctx, 31, 0x106178u);
    ctx->pc = 0x106174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106170u;
    // 0x106174: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x106170u, 0x106178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106178u;
label_106178:
    // 0x106178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10617c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106180: 0x3e00008  jr          $ra
    ctx->pc = 0x106180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106180u;
        // 0x106184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106188u;
}
