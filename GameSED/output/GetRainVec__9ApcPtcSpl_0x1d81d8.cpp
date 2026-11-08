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

// Function: GetRainVec__9ApcPtcSpl
// Address: 0x1d81d8 - 0x1d81e4
void GetRainVec__9ApcPtcSpl_0x1d81d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRainVec__9ApcPtcSpl_0x1d81d8");
#endif

    ctx->pc = 0x1d81d8u;

    // 0x1d81d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d81dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D81DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81DCu;
        // 0x1d81e0: 0x24420ad0  addiu       $v0, $v0, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D81DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D81E4u;
}
