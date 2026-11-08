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

// Function: entry_001184f0
// Address: 0x1184f0 - 0x11850c
void entry_001184f0_0x1184f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001184f0_0x1184f0");
#endif

    ctx->pc = 0x1184f0u;

    // 0x1184f0: 0x0  nop
    ctx->pc = 0x1184f0u;
    // NOP
    // 0x1184f4: 0x0  nop
    ctx->pc = 0x1184f4u;
    // NOP
    // 0x1184f8: 0x0  nop
    ctx->pc = 0x1184f8u;
    // NOP
    // 0x1184fc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1184FCu;
    {
        const bool branch_taken_0x1184fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184FCu;
        // 0x118500: 0x2484fffe  addiu       $a0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184fc) {
            ctx->pc = 0x1184E8u;
            return;
        }
    }
    ctx->pc = 0x118504u;
    // 0x118504: 0x3e00008  jr          $ra
    ctx->pc = 0x118504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11850Cu;
}
