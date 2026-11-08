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

// Function: entry_00102de0
// Address: 0x102de0 - 0x102de8
void entry_00102de0_0x102de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102de0_0x102de0");
#endif

    ctx->pc = 0x102de0u;

    // 0x102de0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102DE0u;
    {
        const bool branch_taken_0x102de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DE0u;
        // 0x102de4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102de0) {
            ctx->pc = 0x102E14u;
            return;
        }
    }
    ctx->pc = 0x102DE8u;
}
