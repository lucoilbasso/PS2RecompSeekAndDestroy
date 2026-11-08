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

// Function: GetLastFloorNormal__8ApcRsc3D
// Address: 0x1d8de8 - 0x1d8df4
void GetLastFloorNormal__8ApcRsc3D_0x1d8de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLastFloorNormal__8ApcRsc3D_0x1d8de8");
#endif

    ctx->pc = 0x1d8de8u;

    // 0x1d8de8: 0x8c820328  lw          $v0, 0x328($a0)
    ctx->pc = 0x1d8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x1d8dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DECu;
        // 0x1d8df0: 0x24424030  addiu       $v0, $v0, 0x4030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DF4u;
}
