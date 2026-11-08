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

// Function: entry_001ace38
// Address: 0x1ace38 - 0x1ace48
void entry_001ace38_0x1ace38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ace38_0x1ace38");
#endif

    ctx->pc = 0x1ace38u;

    // 0x1ace38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE38u;
    {
        const bool branch_taken_0x1ace38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE38u;
        // 0x1ace3c: 0x30843000  andi        $a0, $a0, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace38) {
            ctx->pc = 0x1ACE48u;
            return;
        }
    }
    ctx->pc = 0x1ACE40u;
    // 0x1ace40: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE40u;
        // 0x1ace44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE48u;
}
