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

// Function: entry_0017c1a8
// Address: 0x17c1a8 - 0x17c1b0
void entry_0017c1a8_0x17c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c1a8_0x17c1a8");
#endif

    ctx->pc = 0x17c1a8u;

    // 0x17c1a8: 0xac24c05c  sw          $a0, -0x3FA4($at)
    ctx->pc = 0x17c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951004), GPR_U32(ctx, 4));
    // 0x17c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C1B4u;
}
