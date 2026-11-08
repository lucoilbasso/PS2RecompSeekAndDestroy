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

// Function: entry_001ac9fc
// Address: 0x1ac9fc - 0x1aca08
void entry_001ac9fc_0x1ac9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac9fc_0x1ac9fc");
#endif

    ctx->pc = 0x1ac9fcu;

    // 0x1ac9fc: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x1ac9fcu;
    ctx->vu0_fbrst = GPR_U32(ctx, 3) & 0x00000C0Cu;
    // 0x1aca00: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA08u;
}
