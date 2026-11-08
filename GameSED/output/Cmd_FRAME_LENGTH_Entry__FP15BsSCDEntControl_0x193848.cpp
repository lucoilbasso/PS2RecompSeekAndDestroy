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

// Function: Cmd_FRAME_LENGTH_Entry__FP15BsSCDEntControl
// Address: 0x193848 - 0x1938b0
void Cmd_FRAME_LENGTH_Entry__FP15BsSCDEntControl_0x193848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FRAME_LENGTH_Entry__FP15BsSCDEntControl_0x193848");
#endif

    switch (ctx->pc) {
        case 0x193878u: goto label_193878;
        case 0x193880u: goto label_193880;
        case 0x19388cu: goto label_19388c;
        default: break;
    }

    ctx->pc = 0x193848u;

    // 0x193848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19384c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19384cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19385c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x193860: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x193860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193864: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x193864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x193868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19386c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x193870: 0xc04110c  jal         func_104430
    ctx->pc = 0x193870u;
    SET_GPR_U32(ctx, 31, 0x193878u);
    ctx->pc = 0x193874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193870u;
    // 0x193874: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x193870u, 0x193878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193878u;
label_193878:
    // 0x193878: 0x24500238  addiu       $s0, $v0, 0x238
    ctx->pc = 0x193878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    // 0x19387c: 0x0  nop
    ctx->pc = 0x19387cu;
    // NOP
label_193880:
    // 0x193880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193884: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x193884u;
    SET_GPR_U32(ctx, 31, 0x19388Cu);
    ctx->pc = 0x193888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193884u;
    // 0x193888: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x193884u, 0x19388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19388Cu;
label_19388c:
    // 0x19388c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19388cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x193890: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x193890u;
    {
        const bool branch_taken_0x193890 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x193894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193890u;
        // 0x193894: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193890) {
            ctx->pc = 0x193880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193880;
        }
    }
    ctx->pc = 0x193898u;
    // 0x193898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19389c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19389cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1938a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1938a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1938a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1938a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1938a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1938A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1938ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938A8u;
        // 0x1938ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1938A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1938B0u;
}
