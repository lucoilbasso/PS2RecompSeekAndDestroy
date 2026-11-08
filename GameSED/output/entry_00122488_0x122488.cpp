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

// Function: entry_00122488
// Address: 0x122488 - 0x1224a0
void entry_00122488_0x122488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122488_0x122488");
#endif

    ctx->pc = 0x122488u;

    // 0x122488: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x122488u;
    {
        const bool branch_taken_0x122488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122488u;
        // 0x12248c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122488) {
            ctx->pc = 0x122508u;
            return;
        }
    }
    ctx->pc = 0x122490u;
    // 0x122490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x122490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122494: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x122494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122498: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x122498u;
    {
        const bool branch_taken_0x122498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122498u;
        // 0x12249c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122498) {
            ctx->pc = 0x1224D0u;
            return;
        }
    }
    ctx->pc = 0x1224A0u;
}
