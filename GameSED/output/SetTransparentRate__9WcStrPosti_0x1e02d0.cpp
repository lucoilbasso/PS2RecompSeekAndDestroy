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

// Function: SetTransparentRate__9WcStrPosti
// Address: 0x1e02d0 - 0x1e02d8
void SetTransparentRate__9WcStrPosti_0x1e02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTransparentRate__9WcStrPosti_0x1e02d0");
#endif

    ctx->pc = 0x1e02d0u;

    // 0x1e02d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E02D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02D0u;
        // 0x1e02d4: 0xa085015b  sb          $a1, 0x15B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 347), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E02D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E02D8u;
}
