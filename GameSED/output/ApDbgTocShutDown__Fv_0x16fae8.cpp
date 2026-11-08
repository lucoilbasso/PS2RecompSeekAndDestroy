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

// Function: ApDbgTocShutDown__Fv
// Address: 0x16fae8 - 0x16faf0
void ApDbgTocShutDown__Fv_0x16fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDbgTocShutDown__Fv_0x16fae8");
#endif

    ctx->pc = 0x16fae8u;

    // 0x16fae8: 0x3e00008  jr          $ra
    ctx->pc = 0x16FAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAE8u;
        // 0x16faec: 0xaf808b70  sw          $zero, -0x7490($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FAF0u;
}
