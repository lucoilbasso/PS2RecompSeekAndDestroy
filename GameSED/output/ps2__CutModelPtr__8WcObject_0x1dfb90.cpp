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

// Function: _CutModelPtr__8WcObject
// Address: 0x1dfb90 - 0x1dfb98
void ps2__CutModelPtr__8WcObject_0x1dfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CutModelPtr__8WcObject_0x1dfb90");
#endif

    ctx->pc = 0x1dfb90u;

    // 0x1dfb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB90u;
        // 0x1dfb94: 0xac800158  sw          $zero, 0x158($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB98u;
}
