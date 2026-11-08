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

// Function: ViewStatusSet__6WcViewUi
// Address: 0x1dd630 - 0x1dd640
void ViewStatusSet__6WcViewUi_0x1dd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ViewStatusSet__6WcViewUi_0x1dd630");
#endif

    ctx->pc = 0x1dd630u;

    // 0x1dd630: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1dd634: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1dd634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1dd638: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD638u;
        // 0x1dd63c: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD640u;
}
