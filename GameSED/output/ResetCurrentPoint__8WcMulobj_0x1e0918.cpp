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

// Function: ResetCurrentPoint__8WcMulobj
// Address: 0x1e0918 - 0x1e0924
void ResetCurrentPoint__8WcMulobj_0x1e0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetCurrentPoint__8WcMulobj_0x1e0918");
#endif

    ctx->pc = 0x1e0918u;

    // 0x1e0918: 0x8c8201b0  lw          $v0, 0x1B0($a0)
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1e091c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E091Cu;
        // 0x1e0920: 0xac8201c4  sw          $v0, 0x1C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E091Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0924u;
}
