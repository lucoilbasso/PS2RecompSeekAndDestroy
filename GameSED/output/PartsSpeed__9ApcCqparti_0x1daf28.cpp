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

// Function: PartsSpeed__9ApcCqparti
// Address: 0x1daf28 - 0x1daf30
void PartsSpeed__9ApcCqparti_0x1daf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsSpeed__9ApcCqparti_0x1daf28");
#endif

    ctx->pc = 0x1daf28u;

    // 0x1daf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF28u;
        // 0x1daf2c: 0xac851244  sw          $a1, 0x1244($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAF30u;
}
