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

// Function: entry_00109860
// Address: 0x109860 - 0x109868
void entry_00109860_0x109860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109860_0x109860");
#endif

    ctx->pc = 0x109860u;

    // 0x109860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x109860u;
    {
        const bool branch_taken_0x109860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109860u;
        // 0x109864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109860) {
            ctx->pc = 0x109874u;
            return;
        }
    }
    ctx->pc = 0x109868u;
}
