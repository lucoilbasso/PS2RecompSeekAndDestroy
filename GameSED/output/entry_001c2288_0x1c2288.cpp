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

// Function: entry_001c2288
// Address: 0x1c2288 - 0x1c22a0
void entry_001c2288_0x1c2288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2288_0x1c2288");
#endif

    ctx->pc = 0x1c2288u;

    // 0x1c2288: 0x1073001a  beq         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C2288u;
    {
        const bool branch_taken_0x1c2288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2288u;
        // 0x1c228c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2288) {
            ctx->pc = 0x1C22F4u;
            return;
        }
    }
    ctx->pc = 0x1C2290u;
    // 0x1c2290: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2290u;
    {
        const bool branch_taken_0x1c2290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1c2290) {
            ctx->pc = 0x1C22B0u;
            return;
        }
    }
    ctx->pc = 0x1C2298u;
    // 0x1c2298: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C2298u;
    {
        const bool branch_taken_0x1c2298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2298) {
            ctx->pc = 0x1C2250u;
            return;
        }
    }
    ctx->pc = 0x1C22A0u;
}
