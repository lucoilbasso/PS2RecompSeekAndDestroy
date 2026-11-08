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

// Function: entry_00123c8c
// Address: 0x123c8c - 0x123ca4
void entry_00123c8c_0x123c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123c8c_0x123c8c");
#endif

    ctx->pc = 0x123c8cu;

    // 0x123c8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x123c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x123c90: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x123c94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x123C94u;
    {
        const bool branch_taken_0x123c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C94u;
        // 0x123c98: 0x24a50490  addiu       $a1, $a1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c94) {
            ctx->pc = 0x123C60u;
            return;
        }
    }
    ctx->pc = 0x123C9Cu;
    // 0x123c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x123C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123CA4u;
}
