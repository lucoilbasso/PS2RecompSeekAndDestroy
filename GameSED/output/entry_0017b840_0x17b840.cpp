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

// Function: entry_0017b840
// Address: 0x17b840 - 0x17b854
void entry_0017b840_0x17b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b840_0x17b840");
#endif

    ctx->pc = 0x17b840u;

    // 0x17b840: 0x0  nop
    ctx->pc = 0x17b840u;
    // NOP
    // 0x17b844: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B844u;
    {
        const bool branch_taken_0x17b844 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B844u;
        // 0x17b848: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b844) {
            ctx->pc = 0x17B828u;
            return;
        }
    }
    ctx->pc = 0x17B84Cu;
    // 0x17b84c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B854u;
}
