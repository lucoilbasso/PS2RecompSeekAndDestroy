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

// Function: _SetNPackage__9WcHitpolyi
// Address: 0x1dcb28 - 0x1dcb30
void ps2__SetNPackage__9WcHitpolyi_0x1dcb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetNPackage__9WcHitpolyi_0x1dcb28");
#endif

    ctx->pc = 0x1dcb28u;

    // 0x1dcb28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB28u;
        // 0x1dcb2c: 0xa4850022  sh          $a1, 0x22($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB30u;
}
