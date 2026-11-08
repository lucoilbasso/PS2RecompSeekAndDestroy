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

// Function: entry_001480e0
// Address: 0x1480e0 - 0x1480f4
void entry_001480e0_0x1480e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001480e0_0x1480e0");
#endif

    ctx->pc = 0x1480e0u;

    // 0x1480e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1480e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1480e4: 0x2d0821  addu        $at, $at, $t5
    ctx->pc = 0x1480e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 13)));
    // 0x1480e8: 0xac200210  sw          $zero, 0x210($at)
    ctx->pc = 0x1480e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 528), GPR_U32(ctx, 0));
    // 0x1480ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1480ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1480ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1480F4u;
}
