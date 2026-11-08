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

// Function: GetLastFloorRect__8ApcRsc3D
// Address: 0x1d8db8 - 0x1d8dc4
void GetLastFloorRect__8ApcRsc3D_0x1d8db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLastFloorRect__8ApcRsc3D_0x1d8db8");
#endif

    ctx->pc = 0x1d8db8u;

    // 0x1d8db8: 0x8c830328  lw          $v1, 0x328($a0)
    ctx->pc = 0x1d8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x1d8dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DBCu;
        // 0x1d8dc0: 0x8c624020  lw          $v0, 0x4020($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16416)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DC4u;
}
