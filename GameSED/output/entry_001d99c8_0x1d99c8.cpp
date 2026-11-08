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

// Function: entry_001d99c8
// Address: 0x1d99c8 - 0x1d99dc
void entry_001d99c8_0x1d99c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d99c8_0x1d99c8");
#endif

    ctx->pc = 0x1d99c8u;

    // 0x1d99c8: 0xac8208a0  sw          $v0, 0x8A0($a0)
    ctx->pc = 0x1d99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2208), GPR_U32(ctx, 2));
    // 0x1d99cc: 0x8c8208a0  lw          $v0, 0x8A0($a0)
    ctx->pc = 0x1d99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2208)));
    // 0x1d99d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d99d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D99D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99D4u;
        // 0x1d99d8: 0xac8308a4  sw          $v1, 0x8A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D99D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D99DCu;
}
