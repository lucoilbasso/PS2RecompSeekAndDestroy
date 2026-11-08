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

// Function: Cmd_SUB_Entry__FP15BsSCDEntControl
// Address: 0x1a9140 - 0x1a915c
void Cmd_SUB_Entry__FP15BsSCDEntControl_0x1a9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SUB_Entry__FP15BsSCDEntControl_0x1a9140");
#endif

    switch (ctx->pc) {
        case 0x1a9150u: goto label_1a9150;
        default: break;
    }

    ctx->pc = 0x1a9140u;

    // 0x1a9140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9148: 0xc06980a  jal         func_1A6028
    ctx->pc = 0x1A9148u;
    SET_GPR_U32(ctx, 31, 0x1A9150u);
    ctx->pc = 0x1A914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9148u;
    // 0x1a914c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6028u, 0x1A9148u, 0x1A9150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9150u;
label_1a9150:
    // 0x1a9150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9154: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9154u;
        // 0x1a9158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A915Cu;
}
