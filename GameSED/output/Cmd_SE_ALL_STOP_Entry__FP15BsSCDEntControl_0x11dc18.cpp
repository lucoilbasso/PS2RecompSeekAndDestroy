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

// Function: Cmd_SE_ALL_STOP_Entry__FP15BsSCDEntControl
// Address: 0x11dc18 - 0x11dc40
void Cmd_SE_ALL_STOP_Entry__FP15BsSCDEntControl_0x11dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_ALL_STOP_Entry__FP15BsSCDEntControl_0x11dc18");
#endif

    switch (ctx->pc) {
        case 0x11dc2cu: goto label_11dc2c;
        case 0x11dc34u: goto label_11dc34;
        default: break;
    }

    ctx->pc = 0x11dc18u;

    // 0x11dc18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dc1c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dc20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dc24: 0xc0477f2  jal         func_11DFC8
    ctx->pc = 0x11DC24u;
    SET_GPR_U32(ctx, 31, 0x11DC2Cu);
    ctx->pc = 0x11DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC24u;
    // 0x11dc28: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFC8u, 0x11DC24u, 0x11DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC2Cu;
label_11dc2c:
    // 0x11dc2c: 0xc052b2a  jal         func_14ACA8
    ctx->pc = 0x11DC2Cu;
    SET_GPR_U32(ctx, 31, 0x11DC34u);
    ctx->pc = 0x14ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA8u, 0x11DC2Cu, 0x11DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC34u;
label_11dc34:
    // 0x11dc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dc38: 0x3e00008  jr          $ra
    ctx->pc = 0x11DC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC38u;
        // 0x11dc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DC40u;
}
