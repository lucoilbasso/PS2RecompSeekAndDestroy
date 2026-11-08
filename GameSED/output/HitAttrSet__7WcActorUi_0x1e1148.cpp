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

// Function: HitAttrSet__7WcActorUi
// Address: 0x1e1148 - 0x1e1158
void HitAttrSet__7WcActorUi_0x1e1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitAttrSet__7WcActorUi_0x1e1148");
#endif

    ctx->pc = 0x1e1148u;

    // 0x1e1148: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x1e1148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x1e114c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e1150: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1150u;
        // 0x1e1154: 0xac8200d4  sw          $v0, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1158u;
}
