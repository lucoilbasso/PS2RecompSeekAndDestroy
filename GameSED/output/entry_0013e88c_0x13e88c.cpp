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

// Function: entry_0013e88c
// Address: 0x13e88c - 0x13e898
void entry_0013e88c_0x13e88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e88c_0x13e88c");
#endif

    ctx->pc = 0x13e88cu;

    // 0x13e88c: 0xaf809134  sw          $zero, -0x6ECC($gp)
    ctx->pc = 0x13e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 0));
    // 0x13e890: 0x3e00008  jr          $ra
    ctx->pc = 0x13E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E890u;
        // 0x13e894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E898u;
}
