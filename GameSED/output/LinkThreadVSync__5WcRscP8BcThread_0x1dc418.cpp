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

// Function: LinkThreadVSync__5WcRscP8BcThread
// Address: 0x1dc418 - 0x1dc42c
void LinkThreadVSync__5WcRscP8BcThread_0x1dc418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkThreadVSync__5WcRscP8BcThread_0x1dc418");
#endif

    ctx->pc = 0x1dc418u;

    // 0x1dc418: 0x24840158  addiu       $a0, $a0, 0x158
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x1dc41c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc420: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1dc420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1dc424: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC424u;
        // 0x1dc428: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC42Cu;
}
