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

// Function: SetStagePtr__9ApcCameraP8ApcField
// Address: 0x1d8970 - 0x1d8978
void SetStagePtr__9ApcCameraP8ApcField_0x1d8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStagePtr__9ApcCameraP8ApcField_0x1d8970");
#endif

    ctx->pc = 0x1d8970u;

    // 0x1d8970: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8970u;
        // 0x1d8974: 0xac8501d0  sw          $a1, 0x1D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8978u;
}
