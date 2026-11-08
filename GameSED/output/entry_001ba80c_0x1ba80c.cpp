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

// Function: entry_001ba80c
// Address: 0x1ba80c - 0x1ba818
void entry_001ba80c_0x1ba80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba80c_0x1ba80c");
#endif

    ctx->pc = 0x1ba80cu;

    // 0x1ba80c: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1ba80cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1ba810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA810u;
    {
        const bool branch_taken_0x1ba810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA810u;
        // 0x1ba814: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba810) {
            ctx->pc = 0x1BA820u;
            return;
        }
    }
    ctx->pc = 0x1BA818u;
}
