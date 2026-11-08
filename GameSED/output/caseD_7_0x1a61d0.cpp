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

// Function: caseD_7
// Address: 0x1a61d0 - 0x1a61d8
void caseD_7_0x1a61d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1a61d0");
#endif

    ctx->pc = 0x1a61d0u;

    // 0x1a61d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A61D0u;
    {
        const bool branch_taken_0x1a61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61D0u;
        // 0x1a61d4: 0x2051025  or          $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61d0) {
            ctx->pc = 0x1A61DCu;
            return;
        }
    }
    ctx->pc = 0x1A61D8u;
}
