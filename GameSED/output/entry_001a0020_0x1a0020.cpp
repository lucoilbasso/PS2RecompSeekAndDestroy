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

// Function: entry_001a0020
// Address: 0x1a0020 - 0x1a0028
void entry_001a0020_0x1a0020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0020_0x1a0020");
#endif

    ctx->pc = 0x1a0020u;

    // 0x1a0020: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0020u;
        // 0x1a0024: 0xac45fff0  sw          $a1, -0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0028u;
}
