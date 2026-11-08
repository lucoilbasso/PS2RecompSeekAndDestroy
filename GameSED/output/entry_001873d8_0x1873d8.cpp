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

// Function: entry_001873d8
// Address: 0x1873d8 - 0x1873e0
void entry_001873d8_0x1873d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873d8_0x1873d8");
#endif

    ctx->pc = 0x1873d8u;

    // 0x1873d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1873D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873D8u;
        // 0x1873dc: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873E0u;
}
