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

// Function: WFontInitLocal__FP6WcFontUi
// Address: 0x183ba0 - 0x183bbc
void WFontInitLocal__FP6WcFontUi_0x183ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFontInitLocal__FP6WcFontUi_0x183ba0");
#endif

    switch (ctx->pc) {
        case 0x183bb0u: goto label_183bb0;
        default: break;
    }

    ctx->pc = 0x183ba0u;

    // 0x183ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183ba8: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x183BA8u;
    SET_GPR_U32(ctx, 31, 0x183BB0u);
    ctx->pc = 0x183BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BA8u;
    // 0x183bac: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183BF0u, 0x183BA8u, 0x183BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BB0u;
label_183bb0:
    // 0x183bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x183BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BB4u;
        // 0x183bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183BBCu;
}
