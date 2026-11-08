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

// Function: entry_00188960
// Address: 0x188960 - 0x18897c
void entry_00188960_0x188960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188960_0x188960");
#endif

    ctx->pc = 0x188960u;

    // 0x188960: 0x0  nop
    ctx->pc = 0x188960u;
    // NOP
    // 0x188964: 0x0  nop
    ctx->pc = 0x188964u;
    // NOP
    // 0x188968: 0x0  nop
    ctx->pc = 0x188968u;
    // NOP
    // 0x18896c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18896Cu;
    {
        const bool branch_taken_0x18896c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18896c) {
            ctx->pc = 0x188958u;
            return;
        }
    }
    ctx->pc = 0x188974u;
    // 0x188974: 0x3e00008  jr          $ra
    ctx->pc = 0x188974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18897Cu;
}
