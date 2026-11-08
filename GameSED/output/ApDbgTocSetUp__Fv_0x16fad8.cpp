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

// Function: ApDbgTocSetUp__Fv
// Address: 0x16fad8 - 0x16fae4
void ApDbgTocSetUp__Fv_0x16fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDbgTocSetUp__Fv_0x16fad8");
#endif

    ctx->pc = 0x16fad8u;

    // 0x16fad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x16FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FADCu;
        // 0x16fae0: 0xaf828b70  sw          $v0, -0x7490($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FAE4u;
}
