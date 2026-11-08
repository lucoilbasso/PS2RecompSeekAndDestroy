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

// Function: GetLastSurfInfo__8ApcRsc3D
// Address: 0x1d8da8 - 0x1d8db4
void GetLastSurfInfo__8ApcRsc3D_0x1d8da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLastSurfInfo__8ApcRsc3D_0x1d8da8");
#endif

    ctx->pc = 0x1d8da8u;

    // 0x1d8da8: 0x8c820328  lw          $v0, 0x328($a0)
    ctx->pc = 0x1d8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x1d8dac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DACu;
        // 0x1d8db0: 0x24424020  addiu       $v0, $v0, 0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DB4u;
}
