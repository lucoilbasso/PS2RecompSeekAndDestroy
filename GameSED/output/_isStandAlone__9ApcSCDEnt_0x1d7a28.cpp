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

// Function: _isStandAlone__9ApcSCDEnt
// Address: 0x1d7a28 - 0x1d7a38
void _isStandAlone__9ApcSCDEnt_0x1d7a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isStandAlone__9ApcSCDEnt_0x1d7a28");
#endif

    ctx->pc = 0x1d7a28u;

    // 0x1d7a28: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1d7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d7a2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d7a2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d7a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A30u;
        // 0x1d7a34: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7A38u;
}
