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

// Function: BMemPMgrFinish__FP8BMemPool
// Address: 0x19ffb0 - 0x19ffd0
void BMemPMgrFinish__FP8BMemPool_0x19ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrFinish__FP8BMemPool_0x19ffb0");
#endif

    switch (ctx->pc) {
        case 0x19ffc4u: goto label_19ffc4;
        default: break;
    }

    ctx->pc = 0x19ffb0u;

    // 0x19ffb0: 0x8f848e08  lw          $a0, -0x71F8($gp)
    ctx->pc = 0x19ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    // 0x19ffb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ffb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ffb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ffbc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x19FFBCu;
    SET_GPR_U32(ctx, 31, 0x19FFC4u);
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x19FFBCu, 0x19FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFC4u;
label_19ffc4:
    // 0x19ffc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ffc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ffc8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFC8u;
        // 0x19ffcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FFD0u;
}
