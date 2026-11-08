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

// Function: _UseFlagCheck__8ApcPanelUi
// Address: 0x1d9db8 - 0x1d9dc8
void ps2__UseFlagCheck__8ApcPanelUi_0x1d9db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__UseFlagCheck__8ApcPanelUi_0x1d9db8");
#endif

    ctx->pc = 0x1d9db8u;

    // 0x1d9db8: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x1d9db8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d9dbc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d9dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d9dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DC0u;
        // 0x1d9dc4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9DC8u;
}
