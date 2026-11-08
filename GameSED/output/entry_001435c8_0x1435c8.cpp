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

// Function: entry_001435c8
// Address: 0x1435c8 - 0x1435e0
void entry_001435c8_0x1435c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001435c8_0x1435c8");
#endif

    ctx->pc = 0x1435c8u;

    // 0x1435c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1435c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1435cc: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1435ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1435d0: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1435D0u;
    {
        const bool branch_taken_0x1435d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1435d0) {
            ctx->pc = 0x1435D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1435D0u;
            // 0x1435d4: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143578u;
            return;
        }
    }
    ctx->pc = 0x1435D8u;
    // 0x1435d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1435D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1435D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1435E0u;
}
