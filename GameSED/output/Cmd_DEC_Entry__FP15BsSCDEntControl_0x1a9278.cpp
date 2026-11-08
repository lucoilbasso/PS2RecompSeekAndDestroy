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

// Function: Cmd_DEC_Entry__FP15BsSCDEntControl
// Address: 0x1a9278 - 0x1a92b0
void Cmd_DEC_Entry__FP15BsSCDEntControl_0x1a9278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DEC_Entry__FP15BsSCDEntControl_0x1a9278");
#endif

    switch (ctx->pc) {
        case 0x1a9298u: goto label_1a9298;
        default: break;
    }

    ctx->pc = 0x1a9278u;

    // 0x1a9278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a927c: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1a9280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9288: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a928c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9290: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A9290u;
    SET_GPR_U32(ctx, 31, 0x1A9298u);
    ctx->pc = 0x1A9294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9290u;
    // 0x1a9294: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A9290u, 0x1A9298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9298u;
label_1a9298:
    // 0x1a9298: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a929c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a929cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a92a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a92a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a92a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a92a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A92A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92A8u;
        // 0x1a92ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A92B0u;
}
