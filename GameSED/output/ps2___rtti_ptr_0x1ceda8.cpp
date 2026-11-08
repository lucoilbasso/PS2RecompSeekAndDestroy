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

// Function: __rtti_ptr
// Address: 0x1ceda8 - 0x1cedc8
void ps2___rtti_ptr_0x1ceda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_ptr_0x1ceda8");
#endif

    ctx->pc = 0x1ceda8u;

    // 0x1ceda8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEDA8u;
    {
        const bool branch_taken_0x1ceda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDA8u;
        // 0x1cedac: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceda8) {
            ctx->pc = 0x1CEDC0u;
            goto label_1cedc0;
        }
    }
    ctx->pc = 0x1CEDB0u;
    // 0x1cedb0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1cedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1cedb4: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x1cedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x1cedb8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cedbc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1cedc0:
    // 0x1cedc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEDC8u;
}
