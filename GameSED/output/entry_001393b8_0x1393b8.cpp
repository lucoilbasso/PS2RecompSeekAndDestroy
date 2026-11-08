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

// Function: entry_001393b8
// Address: 0x1393b8 - 0x1393c0
void entry_001393b8_0x1393b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001393b8_0x1393b8");
#endif

    ctx->pc = 0x1393b8u;

    // 0x1393b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1393B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393B8u;
        // 0x1393bc: 0xaf858a20  sw          $a1, -0x75E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1393B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1393C0u;
}
