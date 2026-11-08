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

// Function: Cmd_PATH_Entry__FP15BsSCDEntControl
// Address: 0x105a78 - 0x105a98
void Cmd_PATH_Entry__FP15BsSCDEntControl_0x105a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PATH_Entry__FP15BsSCDEntControl_0x105a78");
#endif

    switch (ctx->pc) {
        case 0x105a8cu: goto label_105a8c;
        default: break;
    }

    ctx->pc = 0x105a78u;

    // 0x105a78: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x105a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x105a7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105a84: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x105A84u;
    SET_GPR_U32(ctx, 31, 0x105A8Cu);
    ctx->pc = 0x105A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105A84u;
    // 0x105a88: 0x24a5f180  addiu       $a1, $a1, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x105A84u, 0x105A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A8Cu;
label_105a8c:
    // 0x105a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105a90: 0x3e00008  jr          $ra
    ctx->pc = 0x105A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A90u;
        // 0x105a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A98u;
}
