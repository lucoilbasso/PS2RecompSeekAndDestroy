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

// Function: _InqLightIndex__7WcWorldi
// Address: 0x1dd8f8 - 0x1dd90c
void ps2__InqLightIndex__7WcWorldi_0x1dd8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqLightIndex__7WcWorldi_0x1dd8f8");
#endif

    ctx->pc = 0x1dd8f8u;

    // 0x1dd8f8: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x1dd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x1dd8fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1dd8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dd900: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd904: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD904u;
        // 0x1dd908: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD90Cu;
}
