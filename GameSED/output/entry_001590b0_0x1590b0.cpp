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

// Function: entry_001590b0
// Address: 0x1590b0 - 0x1590b8
void entry_001590b0_0x1590b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001590b0_0x1590b0");
#endif

    ctx->pc = 0x1590b0u;

    // 0x1590b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1590B0u;
    {
        const bool branch_taken_0x1590b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590B0u;
        // 0x1590b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590b0) {
            ctx->pc = 0x1590C0u;
            return;
        }
    }
    ctx->pc = 0x1590B8u;
}
