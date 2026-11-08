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

// Function: SheetStatusSet__7WcSheetUi
// Address: 0x1df580 - 0x1df590
void SheetStatusSet__7WcSheetUi_0x1df580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SheetStatusSet__7WcSheetUi_0x1df580");
#endif

    ctx->pc = 0x1df580u;

    // 0x1df580: 0x8c8201dc  lw          $v0, 0x1DC($a0)
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x1df584: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1df584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1df588: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF588u;
        // 0x1df58c: 0xac8201dc  sw          $v0, 0x1DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF590u;
}
