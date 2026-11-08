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

// Function: entry_001db144
// Address: 0x1db144 - 0x1db15c
void entry_001db144_0x1db144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db144_0x1db144");
#endif

    ctx->pc = 0x1db144u;

    // 0x1db144: 0x0  nop
    ctx->pc = 0x1db144u;
    // NOP
    // 0x1db148: 0x0  nop
    ctx->pc = 0x1db148u;
    // NOP
    // 0x1db14c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DB14Cu;
    {
        const bool branch_taken_0x1db14c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB14Cu;
        // 0x1db150: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db14c) {
            ctx->pc = 0x1DB130u;
            return;
        }
    }
    ctx->pc = 0x1DB154u;
    // 0x1db154: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB15Cu;
}
