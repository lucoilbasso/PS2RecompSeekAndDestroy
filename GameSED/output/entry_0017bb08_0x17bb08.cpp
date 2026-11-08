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

// Function: entry_0017bb08
// Address: 0x17bb08 - 0x17bb18
void entry_0017bb08_0x17bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb08_0x17bb08");
#endif

    ctx->pc = 0x17bb08u;

    // 0x17bb08: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BB08u;
    {
        const bool branch_taken_0x17bb08 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB08u;
        // 0x17bb0c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb08) {
            ctx->pc = 0x17BAF0u;
            return;
        }
    }
    ctx->pc = 0x17BB10u;
    // 0x17bb10: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB18u;
}
