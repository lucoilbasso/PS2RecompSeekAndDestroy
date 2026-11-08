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

// Function: Cmd_STAGE_CLOSE_Entry__FP15BsSCDEntControl
// Address: 0x145a80 - 0x145aa8
void Cmd_STAGE_CLOSE_Entry__FP15BsSCDEntControl_0x145a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_CLOSE_Entry__FP15BsSCDEntControl_0x145a80");
#endif

    switch (ctx->pc) {
        case 0x145a9cu: goto label_145a9c;
        default: break;
    }

    ctx->pc = 0x145a80u;

    // 0x145a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x145a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145a8c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x145a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x145a90: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x145a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x145a94: 0xc060e88  jal         func_183A20
    ctx->pc = 0x145A94u;
    SET_GPR_U32(ctx, 31, 0x145A9Cu);
    ctx->pc = 0x145A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A94u;
    // 0x145a98: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x145A94u, 0x145A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A9Cu;
label_145a9c:
    // 0x145a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x145AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AA0u;
        // 0x145aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145AA8u;
}
