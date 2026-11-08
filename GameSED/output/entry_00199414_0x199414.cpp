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

// Function: entry_00199414
// Address: 0x199414 - 0x199424
void entry_00199414_0x199414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199414_0x199414");
#endif

    ctx->pc = 0x199414u;

    // 0x199414: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199414u;
    {
        const bool branch_taken_0x199414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199414u;
        // 0x199418: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199414) {
            ctx->pc = 0x199424u;
            return;
        }
    }
    ctx->pc = 0x19941Cu;
    // 0x19941c: 0x16c0001a  bnez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x19941Cu;
    {
        const bool branch_taken_0x19941c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x19941c) {
            ctx->pc = 0x199488u;
            return;
        }
    }
    ctx->pc = 0x199424u;
}
