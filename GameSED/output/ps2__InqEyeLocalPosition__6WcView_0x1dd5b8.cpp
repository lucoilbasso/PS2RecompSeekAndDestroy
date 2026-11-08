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

// Function: _InqEyeLocalPosition__6WcView
// Address: 0x1dd5b8 - 0x1dd5c0
void ps2__InqEyeLocalPosition__6WcView_0x1dd5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqEyeLocalPosition__6WcView_0x1dd5b8");
#endif

    ctx->pc = 0x1dd5b8u;

    // 0x1dd5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5B8u;
        // 0x1dd5bc: 0x248200d0  addiu       $v0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5C0u;
}
