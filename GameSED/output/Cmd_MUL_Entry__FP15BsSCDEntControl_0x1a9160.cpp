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

// Function: Cmd_MUL_Entry__FP15BsSCDEntControl
// Address: 0x1a9160 - 0x1a917c
void Cmd_MUL_Entry__FP15BsSCDEntControl_0x1a9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MUL_Entry__FP15BsSCDEntControl_0x1a9160");
#endif

    switch (ctx->pc) {
        case 0x1a9170u: goto label_1a9170;
        default: break;
    }

    ctx->pc = 0x1a9160u;

    // 0x1a9160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9168: 0xc06980a  jal         func_1A6028
    ctx->pc = 0x1A9168u;
    SET_GPR_U32(ctx, 31, 0x1A9170u);
    ctx->pc = 0x1A916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9168u;
    // 0x1a916c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6028u, 0x1A9168u, 0x1A9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9170u;
label_1a9170:
    // 0x1a9170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9174: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9174u;
        // 0x1a9178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A917Cu;
}
