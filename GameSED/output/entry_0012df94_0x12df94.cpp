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

// Function: entry_0012df94
// Address: 0x12df94 - 0x12dfa0
void entry_0012df94_0x12df94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012df94_0x12df94");
#endif

    ctx->pc = 0x12df94u;

    // 0x12df94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12DF94u;
    {
        const bool branch_taken_0x12df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF94u;
        // 0x12df98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df94) {
            ctx->pc = 0x12DFD8u;
            return;
        }
    }
    ctx->pc = 0x12DF9Cu;
    // 0x12df9c: 0x0  nop
    ctx->pc = 0x12df9cu;
    // NOP
    ctx->pc = 0x12dfa0u;
}
