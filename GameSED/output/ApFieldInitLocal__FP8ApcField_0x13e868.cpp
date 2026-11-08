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

// Function: ApFieldInitLocal__FP8ApcField
// Address: 0x13e868 - 0x13e898
void ApFieldInitLocal__FP8ApcField_0x13e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldInitLocal__FP8ApcField_0x13e868");
#endif

    switch (ctx->pc) {
        case 0x13e880u: goto label_13e880;
        default: break;
    }

    ctx->pc = 0x13e868u;

    // 0x13e868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e870: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x13e874: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13e874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13e878: 0xc05237a  jal         func_148DE8
    ctx->pc = 0x13E878u;
    SET_GPR_U32(ctx, 31, 0x13E880u);
    ctx->pc = 0x13E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E878u;
    // 0x13e87c: 0xac8201e0  sw          $v0, 0x1E0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148DE8u, 0x13E878u, 0x13E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E880u;
label_13e880:
    // 0x13e880: 0xaf80912c  sw          $zero, -0x6ED4($gp)
    ctx->pc = 0x13e880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 0));
    // 0x13e884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e888: 0xaf809130  sw          $zero, -0x6ED0($gp)
    ctx->pc = 0x13e888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 0));
    // 0x13e88c: 0xaf809134  sw          $zero, -0x6ECC($gp)
    ctx->pc = 0x13e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 0));
    // 0x13e890: 0x3e00008  jr          $ra
    ctx->pc = 0x13E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E890u;
        // 0x13e894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E898u;
}
