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

// Function: Rsc3DConnect__9ApcSCDEntP8ApcRsc3D
// Address: 0x1d7ac8 - 0x1d7ad0
void Rsc3DConnect__9ApcSCDEntP8ApcRsc3D_0x1d7ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rsc3DConnect__9ApcSCDEntP8ApcRsc3D_0x1d7ac8");
#endif

    ctx->pc = 0x1d7ac8u;

    // 0x1d7ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AC8u;
        // 0x1d7acc: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7AD0u;
}
