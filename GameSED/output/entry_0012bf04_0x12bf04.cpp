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

// Function: entry_0012bf04
// Address: 0x12bf04 - 0x12bf10
void entry_0012bf04_0x12bf04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bf04_0x12bf04");
#endif

    ctx->pc = 0x12bf04u;

    // 0x12bf04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12BF04u;
    {
        const bool branch_taken_0x12bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF04u;
        // 0x12bf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf04) {
            ctx->pc = 0x12BF4Cu;
            return;
        }
    }
    ctx->pc = 0x12BF0Cu;
    // 0x12bf0c: 0x0  nop
    ctx->pc = 0x12bf0cu;
    // NOP
    ctx->pc = 0x12bf10u;
}
