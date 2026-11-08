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

// Function: entry_0011426c
// Address: 0x11426c - 0x114274
void entry_0011426c_0x11426c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011426c_0x11426c");
#endif

    ctx->pc = 0x11426cu;

    // 0x11426c: 0x3e00008  jr          $ra
    ctx->pc = 0x11426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11426Cu;
        // 0x114270: 0xaf848928  sw          $a0, -0x76D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11426Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114274u;
}
