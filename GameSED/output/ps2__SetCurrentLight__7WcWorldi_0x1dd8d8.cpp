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

// Function: _SetCurrentLight__7WcWorldi
// Address: 0x1dd8d8 - 0x1dd8f0
void ps2__SetCurrentLight__7WcWorldi_0x1dd8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetCurrentLight__7WcWorldi_0x1dd8d8");
#endif

    ctx->pc = 0x1dd8d8u;

    // 0x1dd8d8: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x1dd8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x1dd8dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1dd8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dd8e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1dd8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd8e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8E8u;
        // 0x1dd8ec: 0xac8301c0  sw          $v1, 0x1C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8F0u;
}
