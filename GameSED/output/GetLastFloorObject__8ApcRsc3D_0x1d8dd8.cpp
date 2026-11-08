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

// Function: GetLastFloorObject__8ApcRsc3D
// Address: 0x1d8dd8 - 0x1d8de4
void GetLastFloorObject__8ApcRsc3D_0x1d8dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLastFloorObject__8ApcRsc3D_0x1d8dd8");
#endif

    ctx->pc = 0x1d8dd8u;

    // 0x1d8dd8: 0x8c830328  lw          $v1, 0x328($a0)
    ctx->pc = 0x1d8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x1d8ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DDCu;
        // 0x1d8de0: 0x8c624028  lw          $v0, 0x4028($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DE4u;
}
