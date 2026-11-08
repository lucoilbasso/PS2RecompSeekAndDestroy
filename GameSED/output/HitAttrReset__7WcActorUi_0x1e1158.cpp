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

// Function: HitAttrReset__7WcActorUi
// Address: 0x1e1158 - 0x1e116c
void HitAttrReset__7WcActorUi_0x1e1158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitAttrReset__7WcActorUi_0x1e1158");
#endif

    ctx->pc = 0x1e1158u;

    // 0x1e1158: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x1e1158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x1e115c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1e115cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1e1160: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e1160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e1164: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1164u;
        // 0x1e1168: 0xac8200d4  sw          $v0, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E116Cu;
}
