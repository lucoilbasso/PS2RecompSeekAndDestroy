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

// Function: Cmd_CLEAR_STAGE_Entry__FP15BsSCDEntControl
// Address: 0x145ba0 - 0x145bc0
void Cmd_CLEAR_STAGE_Entry__FP15BsSCDEntControl_0x145ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CLEAR_STAGE_Entry__FP15BsSCDEntControl_0x145ba0");
#endif

    switch (ctx->pc) {
        case 0x145bb4u: goto label_145bb4;
        default: break;
    }

    ctx->pc = 0x145ba0u;

    // 0x145ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145ba8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x145ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x145bac: 0xc050f7e  jal         func_143DF8
    ctx->pc = 0x145BACu;
    SET_GPR_U32(ctx, 31, 0x145BB4u);
    ctx->pc = 0x145BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145BACu;
    // 0x145bb0: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143DF8u, 0x145BACu, 0x145BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BB4u;
label_145bb4:
    // 0x145bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x145BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BB8u;
        // 0x145bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145BC0u;
}
