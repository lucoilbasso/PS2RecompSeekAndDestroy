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

// Function: FrameJobHandler__8ApcStage
// Address: 0x13af78 - 0x13af94
void FrameJobHandler__8ApcStage_0x13af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FrameJobHandler__8ApcStage_0x13af78");
#endif

    switch (ctx->pc) {
        case 0x13af88u: goto label_13af88;
        default: break;
    }

    ctx->pc = 0x13af78u;

    // 0x13af78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13af78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13af7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af80: 0xc046be0  jal         func_11AF80
    ctx->pc = 0x13AF80u;
    SET_GPR_U32(ctx, 31, 0x13AF88u);
    ctx->pc = 0x11AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF80u, 0x13AF80u, 0x13AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF88u;
label_13af88:
    // 0x13af88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af8c: 0x3e00008  jr          $ra
    ctx->pc = 0x13AF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF8Cu;
        // 0x13af90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AF94u;
}
