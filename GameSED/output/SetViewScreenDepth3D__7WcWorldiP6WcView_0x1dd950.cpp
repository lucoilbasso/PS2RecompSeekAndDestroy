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

// Function: SetViewScreenDepth3D__7WcWorldiP6WcView
// Address: 0x1dd950 - 0x1dd964
void SetViewScreenDepth3D__7WcWorldiP6WcView_0x1dd950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewScreenDepth3D__7WcWorldiP6WcView_0x1dd950");
#endif

    ctx->pc = 0x1dd950u;

    // 0x1dd950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd954: 0xac850158  sw          $a1, 0x158($a0)
    ctx->pc = 0x1dd954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
    // 0x1dd958: 0xac860164  sw          $a2, 0x164($a0)
    ctx->pc = 0x1dd958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 6));
    // 0x1dd95c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD95Cu;
        // 0x1dd960: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD964u;
}
