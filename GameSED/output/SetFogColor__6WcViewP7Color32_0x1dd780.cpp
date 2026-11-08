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

// Function: SetFogColor__6WcViewP7Color32
// Address: 0x1dd780 - 0x1dd78c
void SetFogColor__6WcViewP7Color32_0x1dd780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFogColor__6WcViewP7Color32_0x1dd780");
#endif

    ctx->pc = 0x1dd780u;

    // 0x1dd780: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dd780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd784: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD784u;
        // 0x1dd788: 0xac820178  sw          $v0, 0x178($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD78Cu;
}
