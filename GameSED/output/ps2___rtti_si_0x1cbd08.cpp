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

// Function: __rtti_si
// Address: 0x1cbd08 - 0x1cbd28
void ps2___rtti_si_0x1cbd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_si_0x1cbd08");
#endif

    ctx->pc = 0x1cbd08u;

    // 0x1cbd08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBD08u;
    {
        const bool branch_taken_0x1cbd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD08u;
        // 0x1cbd0c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd08) {
            ctx->pc = 0x1CBD20u;
            goto label_1cbd20;
        }
    }
    ctx->pc = 0x1CBD10u;
    // 0x1cbd10: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1cbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1cbd14: 0x24420c18  addiu       $v0, $v0, 0xC18
    ctx->pc = 0x1cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3096));
    // 0x1cbd18: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cbd1c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1cbd20:
    // 0x1cbd20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBD28u;
}
