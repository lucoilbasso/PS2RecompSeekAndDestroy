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

// Function: entry_00156b5c
// Address: 0x156b5c - 0x156b64
void entry_00156b5c_0x156b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b5c_0x156b5c");
#endif

    ctx->pc = 0x156b5cu;

    // 0x156b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x156B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B5Cu;
        // 0x156b60: 0xac4435e0  sw          $a0, 0x35E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 13792), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156B64u;
}
