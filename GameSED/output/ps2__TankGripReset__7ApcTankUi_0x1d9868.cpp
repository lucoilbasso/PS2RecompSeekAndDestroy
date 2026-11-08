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

// Function: _TankGripReset__7ApcTankUi
// Address: 0x1d9868 - 0x1d987c
void ps2__TankGripReset__7ApcTankUi_0x1d9868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TankGripReset__7ApcTankUi_0x1d9868");
#endif

    ctx->pc = 0x1d9868u;

    // 0x1d9868: 0x8c8203b0  lw          $v0, 0x3B0($a0)
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 944)));
    // 0x1d986c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1d986cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1d9870: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d9870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d9874: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9874u;
        // 0x1d9878: 0xac8203b0  sw          $v0, 0x3B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D987Cu;
}
