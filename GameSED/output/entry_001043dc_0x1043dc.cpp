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

// Function: entry_001043dc
// Address: 0x1043dc - 0x1043e8
void entry_001043dc_0x1043dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043dc_0x1043dc");
#endif

    ctx->pc = 0x1043dcu;

    // 0x1043dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1043DCu;
    {
        const bool branch_taken_0x1043dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043DCu;
        // 0x1043e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043dc) {
            ctx->pc = 0x1043F0u;
            return;
        }
    }
    ctx->pc = 0x1043E4u;
    // 0x1043e4: 0x0  nop
    ctx->pc = 0x1043e4u;
    // NOP
    ctx->pc = 0x1043e8u;
}
