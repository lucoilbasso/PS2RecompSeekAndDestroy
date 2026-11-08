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

// Function: mpegRestartDMA
// Address: 0x171cd0 - 0x171cf4
void mpegRestartDMA_0x171cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegRestartDMA_0x171cd0");
#endif

    switch (ctx->pc) {
        case 0x171ce4u: goto label_171ce4;
        default: break;
    }

    ctx->pc = 0x171cd0u;

    // 0x171cd0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x171cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x171cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171cdc: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x171CDCu;
    SET_GPR_U32(ctx, 31, 0x171CE4u);
    ctx->pc = 0x171CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CDCu;
    // 0x171ce0: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175740u, 0x171CDCu, 0x171CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CE4u;
label_171ce4:
    // 0x171ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171cec: 0x3e00008  jr          $ra
    ctx->pc = 0x171CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CECu;
        // 0x171cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171CF4u;
}
