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

// Function: entry_001ace28
// Address: 0x1ace28 - 0x1ace38
void entry_001ace28_0x1ace28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ace28_0x1ace28");
#endif

    ctx->pc = 0x1ace28u;

    // 0x1ace28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE28u;
    {
        const bool branch_taken_0x1ace28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE28u;
        // 0x1ace2c: 0x3082000c  andi        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace28) {
            ctx->pc = 0x1ACE38u;
            return;
        }
    }
    ctx->pc = 0x1ACE30u;
    // 0x1ace30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE30u;
        // 0x1ace34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE38u;
}
