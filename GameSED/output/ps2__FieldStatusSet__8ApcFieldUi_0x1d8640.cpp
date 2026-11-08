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

// Function: _FieldStatusSet__8ApcFieldUi
// Address: 0x1d8640 - 0x1d8650
void ps2__FieldStatusSet__8ApcFieldUi_0x1d8640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FieldStatusSet__8ApcFieldUi_0x1d8640");
#endif

    ctx->pc = 0x1d8640u;

    // 0x1d8640: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d8644: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1d8644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d8648: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8648u;
        // 0x1d864c: 0xac8201e0  sw          $v0, 0x1E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8650u;
}
