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

// Function: entry_001193d8
// Address: 0x1193d8 - 0x1193e0
void entry_001193d8_0x1193d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001193d8_0x1193d8");
#endif

    ctx->pc = 0x1193d8u;

    // 0x1193d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1193D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1193DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193D8u;
        // 0x1193dc: 0xaf80896c  sw          $zero, -0x7694($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193E0u;
}
