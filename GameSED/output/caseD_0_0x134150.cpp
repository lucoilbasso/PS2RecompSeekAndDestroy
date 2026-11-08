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

// Function: caseD_0
// Address: 0x134150 - 0x134158
void caseD_0_0x134150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x134150");
#endif

    ctx->pc = 0x134150u;

    // 0x134150: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x134150u;
    {
        const bool branch_taken_0x134150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134150u;
        // 0x134154: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134150) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x134158u;
}
