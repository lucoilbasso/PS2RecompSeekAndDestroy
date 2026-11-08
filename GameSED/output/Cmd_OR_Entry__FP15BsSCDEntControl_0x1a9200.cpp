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

// Function: Cmd_OR_Entry__FP15BsSCDEntControl
// Address: 0x1a9200 - 0x1a921c
void Cmd_OR_Entry__FP15BsSCDEntControl_0x1a9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OR_Entry__FP15BsSCDEntControl_0x1a9200");
#endif

    switch (ctx->pc) {
        case 0x1a9210u: goto label_1a9210;
        default: break;
    }

    ctx->pc = 0x1a9200u;

    // 0x1a9200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9208: 0xc06980a  jal         func_1A6028
    ctx->pc = 0x1A9208u;
    SET_GPR_U32(ctx, 31, 0x1A9210u);
    ctx->pc = 0x1A920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9208u;
    // 0x1a920c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6028u, 0x1A9208u, 0x1A9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9210u;
label_1a9210:
    // 0x1a9210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9214: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9214u;
        // 0x1a9218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A921Cu;
}
