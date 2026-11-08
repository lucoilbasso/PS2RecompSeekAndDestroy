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

// Function: entry_00180650
// Address: 0x180650 - 0x180658
void entry_00180650_0x180650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180650_0x180650");
#endif

    ctx->pc = 0x180650u;

    // 0x180650: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x180650u;
    {
        const bool branch_taken_0x180650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180650u;
        // 0x180654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180650) {
            ctx->pc = 0x1806E0u;
            return;
        }
    }
    ctx->pc = 0x180658u;
}
