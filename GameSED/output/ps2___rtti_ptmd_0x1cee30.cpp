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

// Function: __rtti_ptmd
// Address: 0x1cee30 - 0x1cee4c
void ps2___rtti_ptmd_0x1cee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_ptmd_0x1cee30");
#endif

    ctx->pc = 0x1cee30u;

    // 0x1cee30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEE30u;
    {
        const bool branch_taken_0x1cee30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE30u;
        // 0x1cee34: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee30) {
            ctx->pc = 0x1CEE44u;
            goto label_1cee44;
        }
    }
    ctx->pc = 0x1CEE38u;
    // 0x1cee38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cee38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cee3c: 0x24420d28  addiu       $v0, $v0, 0xD28
    ctx->pc = 0x1cee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3368));
    // 0x1cee40: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cee40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1cee44:
    // 0x1cee44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE4Cu;
}
