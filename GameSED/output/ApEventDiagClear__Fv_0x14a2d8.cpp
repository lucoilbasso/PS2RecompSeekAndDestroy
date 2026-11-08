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

// Function: ApEventDiagClear__Fv
// Address: 0x14a2d8 - 0x14a2e4
void ApEventDiagClear__Fv_0x14a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventDiagClear__Fv_0x14a2d8");
#endif

    ctx->pc = 0x14a2d8u;

    // 0x14a2d8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14a2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2DCu;
        // 0x14a2e0: 0xac4043d0  sw          $zero, 0x43D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A2E4u;
}
