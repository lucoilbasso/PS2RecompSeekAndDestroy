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

// Function: _InqVector__7WcLighti
// Address: 0x1ddf48 - 0x1ddf58
void ps2__InqVector__7WcLighti_0x1ddf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqVector__7WcLighti_0x1ddf48");
#endif

    ctx->pc = 0x1ddf48u;

    // 0x1ddf48: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ddf48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ddf4c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1ddf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ddf50: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF50u;
        // 0x1ddf54: 0x244201f0  addiu       $v0, $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF58u;
}
