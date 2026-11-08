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

// Function: PolyTypeBitSet__6WcPolyUi
// Address: 0x1df260 - 0x1df270
void PolyTypeBitSet__6WcPolyUi_0x1df260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PolyTypeBitSet__6WcPolyUi_0x1df260");
#endif

    ctx->pc = 0x1df260u;

    // 0x1df260: 0x94820158  lhu         $v0, 0x158($a0)
    ctx->pc = 0x1df260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1df264: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1df264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1df268: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF268u;
        // 0x1df26c: 0xa4820158  sh          $v0, 0x158($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 344), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF270u;
}
