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

// Function: _InqCoordCtrl__8WcStrobji
// Address: 0x1e0368 - 0x1e0378
void ps2__InqCoordCtrl__8WcStrobji_0x1e0368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqCoordCtrl__8WcStrobji_0x1e0368");
#endif

    ctx->pc = 0x1e0368u;

    // 0x1e0368: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1e0368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1e036c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1e036cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1e0370: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0370u;
        // 0x1e0374: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0378u;
}
