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

// Function: _DrStatusCheck__9ApcGameDrUi
// Address: 0x1d7dc0 - 0x1d7dd0
void ps2__DrStatusCheck__9ApcGameDrUi_0x1d7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DrStatusCheck__9ApcGameDrUi_0x1d7dc0");
#endif

    ctx->pc = 0x1d7dc0u;

    // 0x1d7dc0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1d7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1d7dc4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d7dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d7dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DC8u;
        // 0x1d7dcc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7DD0u;
}
