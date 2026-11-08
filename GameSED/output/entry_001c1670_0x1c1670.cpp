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

// Function: entry_001c1670
// Address: 0x1c1670 - 0x1c1680
void entry_001c1670_0x1c1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1670_0x1c1670");
#endif

    ctx->pc = 0x1c1670u;

    // 0x1c1670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1670u;
    {
        const bool branch_taken_0x1c1670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1670u;
        // 0x1c1674: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1670) {
            ctx->pc = 0x1C1680u;
            return;
        }
    }
    ctx->pc = 0x1C1678u;
    // 0x1c1678: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C1678u;
    {
        const bool branch_taken_0x1c1678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1678u;
        // 0x1c167c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1678) {
            ctx->pc = 0x1C1738u;
            return;
        }
    }
    ctx->pc = 0x1C1680u;
}
