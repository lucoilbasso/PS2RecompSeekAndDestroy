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

// Function: entry_001daad8
// Address: 0x1daad8 - 0x1daaf0
void entry_001daad8_0x1daad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daad8_0x1daad8");
#endif

    ctx->pc = 0x1daad8u;

    // 0x1daad8: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAAD8u;
    {
        const bool branch_taken_0x1daad8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1daad8) {
            ctx->pc = 0x1DAADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAAD8u;
            // 0x1daadc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAAF0u;
            return;
        }
    }
    ctx->pc = 0x1DAAE0u;
    // 0x1daae0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1daae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1daae4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1daae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1daae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAE8u;
        // 0x1daaec: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAAF0u;
}
