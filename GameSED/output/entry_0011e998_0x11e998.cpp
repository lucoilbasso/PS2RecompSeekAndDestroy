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

// Function: entry_0011e998
// Address: 0x11e998 - 0x11e9a8
void entry_0011e998_0x11e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e998_0x11e998");
#endif

    ctx->pc = 0x11e998u;

    // 0x11e998: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x11e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e99c: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x11e99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x11e9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9A0u;
        // 0x11e9a4: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E9A8u;
}
