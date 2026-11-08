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

// Function: __rtti_ptmf
// Address: 0x1cee10 - 0x1cee2c
void ps2___rtti_ptmf_0x1cee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_ptmf_0x1cee10");
#endif

    ctx->pc = 0x1cee10u;

    // 0x1cee10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEE10u;
    {
        const bool branch_taken_0x1cee10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE10u;
        // 0x1cee14: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee10) {
            ctx->pc = 0x1CEE24u;
            goto label_1cee24;
        }
    }
    ctx->pc = 0x1CEE18u;
    // 0x1cee18: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cee18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cee1c: 0x24420d40  addiu       $v0, $v0, 0xD40
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3392));
    // 0x1cee20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cee20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1cee24:
    // 0x1cee24: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE2Cu;
}
