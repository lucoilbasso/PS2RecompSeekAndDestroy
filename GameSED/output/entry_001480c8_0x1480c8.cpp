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

// Function: entry_001480c8
// Address: 0x1480c8 - 0x1480e0
void entry_001480c8_0x1480c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001480c8_0x1480c8");
#endif

    ctx->pc = 0x1480c8u;

    // 0x1480c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1480c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1480cc: 0x2d0821  addu        $at, $at, $t5
    ctx->pc = 0x1480ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 13)));
    // 0x1480d0: 0xac250210  sw          $a1, 0x210($at)
    ctx->pc = 0x1480d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 528), GPR_U32(ctx, 5));
    // 0x1480d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1480D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1480D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1480DCu;
    // 0x1480dc: 0x0  nop
    ctx->pc = 0x1480dcu;
    // NOP
    ctx->pc = 0x1480e0u;
}
