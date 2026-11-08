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

// Function: SetWoya__9ApcEfeGenP8WcEntity
// Address: 0x1d8448 - 0x1d8450
void SetWoya__9ApcEfeGenP8WcEntity_0x1d8448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWoya__9ApcEfeGenP8WcEntity_0x1d8448");
#endif

    ctx->pc = 0x1d8448u;

    // 0x1d8448: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8448u;
        // 0x1d844c: 0xac850180  sw          $a1, 0x180($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8450u;
}
