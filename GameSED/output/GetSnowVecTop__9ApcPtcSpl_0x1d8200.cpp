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

// Function: GetSnowVecTop__9ApcPtcSpl
// Address: 0x1d8200 - 0x1d820c
void GetSnowVecTop__9ApcPtcSpl_0x1d8200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSnowVecTop__9ApcPtcSpl_0x1d8200");
#endif

    ctx->pc = 0x1d8200u;

    // 0x1d8200: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d8200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d8204: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8204u;
        // 0x1d8208: 0x24420b70  addiu       $v0, $v0, 0xB70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D820Cu;
}
