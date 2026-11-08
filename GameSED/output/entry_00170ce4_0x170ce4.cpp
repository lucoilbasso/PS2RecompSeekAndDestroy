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

// Function: entry_00170ce4
// Address: 0x170ce4 - 0x170cec
void entry_00170ce4_0x170ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170ce4_0x170ce4");
#endif

    ctx->pc = 0x170ce4u;

    // 0x170ce4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170CE4u;
    {
        const bool branch_taken_0x170ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CE4u;
        // 0x170ce8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ce4) {
            ctx->pc = 0x170D00u;
            return;
        }
    }
    ctx->pc = 0x170CECu;
}
