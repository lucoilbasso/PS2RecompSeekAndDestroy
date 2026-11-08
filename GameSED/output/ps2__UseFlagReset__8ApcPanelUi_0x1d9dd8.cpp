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

// Function: _UseFlagReset__8ApcPanelUi
// Address: 0x1d9dd8 - 0x1d9dec
void ps2__UseFlagReset__8ApcPanelUi_0x1d9dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__UseFlagReset__8ApcPanelUi_0x1d9dd8");
#endif

    ctx->pc = 0x1d9dd8u;

    // 0x1d9dd8: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x1d9dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d9ddc: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1d9ddcu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1d9de0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d9de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d9de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DE4u;
        // 0x1d9de8: 0xa4820014  sh          $v0, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9DECu;
}
