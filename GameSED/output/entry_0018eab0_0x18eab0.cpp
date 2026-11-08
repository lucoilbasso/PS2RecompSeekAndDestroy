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

// Function: entry_0018eab0
// Address: 0x18eab0 - 0x18eab8
void entry_0018eab0_0x18eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eab0_0x18eab0");
#endif

    ctx->pc = 0x18eab0u;

    // 0x18eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x18EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAB0u;
        // 0x18eab4: 0xa4a60246  sh          $a2, 0x246($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 582), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EAB8u;
}
