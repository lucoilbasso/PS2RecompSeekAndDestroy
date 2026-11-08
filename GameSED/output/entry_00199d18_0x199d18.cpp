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

// Function: entry_00199d18
// Address: 0x199d18 - 0x199d2c
void entry_00199d18_0x199d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d18_0x199d18");
#endif

    ctx->pc = 0x199d18u;

    // 0x199d18: 0x0  nop
    ctx->pc = 0x199d18u;
    // NOP
    // 0x199d1c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199D1Cu;
    {
        const bool branch_taken_0x199d1c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x199D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D1Cu;
        // 0x199d20: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d1c) {
            ctx->pc = 0x199D08u;
            return;
        }
    }
    ctx->pc = 0x199D24u;
    // 0x199d24: 0x3e00008  jr          $ra
    ctx->pc = 0x199D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199D2Cu;
}
