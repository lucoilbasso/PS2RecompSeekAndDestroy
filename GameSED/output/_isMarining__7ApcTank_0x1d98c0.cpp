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

// Function: _isMarining__7ApcTank
// Address: 0x1d98c0 - 0x1d98d0
void _isMarining__7ApcTank_0x1d98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isMarining__7ApcTank_0x1d98c0");
#endif

    ctx->pc = 0x1d98c0u;

    // 0x1d98c0: 0x8c8203b0  lw          $v0, 0x3B0($a0)
    ctx->pc = 0x1d98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 944)));
    // 0x1d98c4: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x1d98c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x1d98c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D98C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98C8u;
        // 0x1d98cc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D98C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D98D0u;
}
