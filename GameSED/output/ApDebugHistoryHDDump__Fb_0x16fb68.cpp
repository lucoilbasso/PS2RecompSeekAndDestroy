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

// Function: ApDebugHistoryHDDump__Fb
// Address: 0x16fb68 - 0x16fb70
void ApDebugHistoryHDDump__Fb_0x16fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugHistoryHDDump__Fb_0x16fb68");
#endif

    ctx->pc = 0x16fb68u;

    // 0x16fb68: 0x3e00008  jr          $ra
    ctx->pc = 0x16FB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB68u;
        // 0x16fb6c: 0xaf848b6c  sw          $a0, -0x7494($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FB70u;
}
