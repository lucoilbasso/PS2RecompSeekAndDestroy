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

// Function: SetCurrentPoint__8WcMulobjP12WMulobjPoint
// Address: 0x1e0988 - 0x1e0990
void SetCurrentPoint__8WcMulobjP12WMulobjPoint_0x1e0988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCurrentPoint__8WcMulobjP12WMulobjPoint_0x1e0988");
#endif

    ctx->pc = 0x1e0988u;

    // 0x1e0988: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0988u;
        // 0x1e098c: 0xac8501c4  sw          $a1, 0x1C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0990u;
}
