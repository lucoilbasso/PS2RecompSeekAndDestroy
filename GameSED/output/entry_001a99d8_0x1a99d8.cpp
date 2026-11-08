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

// Function: entry_001a99d8
// Address: 0x1a99d8 - 0x1a99e8
void entry_001a99d8_0x1a99d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a99d8_0x1a99d8");
#endif

    ctx->pc = 0x1a99d8u;

    // 0x1a99d8: 0xac8700b8  sw          $a3, 0xB8($a0)
    ctx->pc = 0x1a99d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 7));
    // 0x1a99dc: 0xac8700c8  sw          $a3, 0xC8($a0)
    ctx->pc = 0x1a99dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 7));
    // 0x1a99e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A99E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99E0u;
        // 0x1a99e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A99E8u;
}
