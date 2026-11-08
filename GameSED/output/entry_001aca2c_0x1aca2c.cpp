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

// Function: entry_001aca2c
// Address: 0x1aca2c - 0x1aca38
void entry_001aca2c_0x1aca2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aca2c_0x1aca2c");
#endif

    ctx->pc = 0x1aca2cu;

    // 0x1aca2c: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x1aca2cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 3) & 0x00000C0Cu;
    // 0x1aca30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA38u;
}
