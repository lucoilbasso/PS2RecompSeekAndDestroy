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

// Function: __rtti_array
// Address: 0x1cee50 - 0x1cee6c
void ps2___rtti_array_0x1cee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_array_0x1cee50");
#endif

    ctx->pc = 0x1cee50u;

    // 0x1cee50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEE50u;
    {
        const bool branch_taken_0x1cee50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE50u;
        // 0x1cee54: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee50) {
            ctx->pc = 0x1CEE64u;
            goto label_1cee64;
        }
    }
    ctx->pc = 0x1CEE58u;
    // 0x1cee58: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cee58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cee5c: 0x24420d10  addiu       $v0, $v0, 0xD10
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3344));
    // 0x1cee60: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cee60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1cee64:
    // 0x1cee64: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE6Cu;
}
