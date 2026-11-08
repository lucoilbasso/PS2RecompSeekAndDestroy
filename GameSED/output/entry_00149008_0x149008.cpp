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

// Function: entry_00149008
// Address: 0x149008 - 0x149018
void entry_00149008_0x149008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149008_0x149008");
#endif

    ctx->pc = 0x149008u;

    // 0x149008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14900c: 0xaca40158  sw          $a0, 0x158($a1)
    ctx->pc = 0x14900cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 4));
    // 0x149010: 0x3e00008  jr          $ra
    ctx->pc = 0x149010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149010u;
        // 0x149014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149018u;
}
