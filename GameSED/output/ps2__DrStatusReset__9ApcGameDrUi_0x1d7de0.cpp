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

// Function: _DrStatusReset__9ApcGameDrUi
// Address: 0x1d7de0 - 0x1d7df4
void ps2__DrStatusReset__9ApcGameDrUi_0x1d7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DrStatusReset__9ApcGameDrUi_0x1d7de0");
#endif

    ctx->pc = 0x1d7de0u;

    // 0x1d7de0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1d7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1d7de4: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1d7de4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1d7de8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d7de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d7dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DECu;
        // 0x1d7df0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7DF4u;
}
