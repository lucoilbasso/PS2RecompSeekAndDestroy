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

// Function: _InqLightPower__7WcLighti
// Address: 0x1ddf90 - 0x1ddfa0
void ps2__InqLightPower__7WcLighti_0x1ddf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqLightPower__7WcLighti_0x1ddf90");
#endif

    ctx->pc = 0x1ddf90u;

    // 0x1ddf90: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ddf90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ddf94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ddf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ddf98: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF98u;
        // 0x1ddf9c: 0xc480022c  lwc1        $f0, 0x22C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDFA0u;
}
