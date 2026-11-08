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

// Function: caseD_5
// Address: 0x1a61b8 - 0x1a61c0
void caseD_5_0x1a61b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a61b8");
#endif

    ctx->pc = 0x1a61b8u;

    // 0x1a61b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A61B8u;
    {
        const bool branch_taken_0x1a61b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61B8u;
        // 0x1a61bc: 0x2051024  and         $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61b8) {
            ctx->pc = 0x1A61DCu;
            return;
        }
    }
    ctx->pc = 0x1A61C0u;
}
