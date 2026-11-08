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

// Function: entry_001dfa18
// Address: 0x1dfa18 - 0x1dfa20
void entry_001dfa18_0x1dfa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa18_0x1dfa18");
#endif

    ctx->pc = 0x1dfa18u;

    // 0x1dfa18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA18u;
        // 0x1dfa1c: 0xac80019c  sw          $zero, 0x19C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFA20u;
}
