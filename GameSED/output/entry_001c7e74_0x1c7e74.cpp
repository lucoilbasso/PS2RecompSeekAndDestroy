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

// Function: entry_001c7e74
// Address: 0x1c7e74 - 0x1c7e80
void entry_001c7e74_0x1c7e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7e74_0x1c7e74");
#endif

    ctx->pc = 0x1c7e74u;

    // 0x1c7e74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e78: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C7E78u;
    {
        const bool branch_taken_0x1c7e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E78u;
        // 0x1c7e7c: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e78) {
            ctx->pc = 0x1C7F34u;
            return;
        }
    }
    ctx->pc = 0x1C7E80u;
}
