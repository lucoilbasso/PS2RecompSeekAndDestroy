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

// Function: _Is_CtrlUnVisible__7ApcUnit
// Address: 0x1d8fc0 - 0x1d8fd0
void ps2__Is_CtrlUnVisible__7ApcUnit_0x1d8fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Is_CtrlUnVisible__7ApcUnit_0x1d8fc0");
#endif

    ctx->pc = 0x1d8fc0u;

    // 0x1d8fc0: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x1d8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x1d8fc4: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x1d8fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x1d8fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FC8u;
        // 0x1d8fcc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8FD0u;
}
