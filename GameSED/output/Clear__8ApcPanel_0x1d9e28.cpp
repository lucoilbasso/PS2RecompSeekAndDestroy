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

// Function: Clear__8ApcPanel
// Address: 0x1d9e28 - 0x1d9e34
void Clear__8ApcPanel_0x1d9e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8ApcPanel_0x1d9e28");
#endif

    ctx->pc = 0x1d9e28u;

    // 0x1d9e28: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x1d9e28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E2Cu;
        // 0x1d9e30: 0xa4800014  sh          $zero, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E34u;
}
