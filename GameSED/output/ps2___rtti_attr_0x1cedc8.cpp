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

// Function: __rtti_attr
// Address: 0x1cedc8 - 0x1cedec
void ps2___rtti_attr_0x1cedc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_attr_0x1cedc8");
#endif

    ctx->pc = 0x1cedc8u;

    // 0x1cedc8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEDC8u;
    {
        const bool branch_taken_0x1cedc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDC8u;
        // 0x1cedcc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedc8) {
            ctx->pc = 0x1CEDE4u;
            goto label_1cede4;
        }
    }
    ctx->pc = 0x1CEDD0u;
    // 0x1cedd0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1cedd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1cedd4: 0x24420d88  addiu       $v0, $v0, 0xD88
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3464));
    // 0x1cedd8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ceddc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ceddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1cede0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1cede0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1cede4:
    // 0x1cede4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEDECu;
}
