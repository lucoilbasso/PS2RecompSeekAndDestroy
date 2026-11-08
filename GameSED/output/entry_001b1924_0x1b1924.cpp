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

// Function: entry_001b1924
// Address: 0x1b1924 - 0x1b1934
void entry_001b1924_0x1b1924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1924_0x1b1924");
#endif

    ctx->pc = 0x1b1924u;

    // 0x1b1924: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1924u;
    {
        const bool branch_taken_0x1b1924 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1B1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1924u;
        // 0x1b1928: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1924) {
            ctx->pc = 0x1B1934u;
            return;
        }
    }
    ctx->pc = 0x1B192Cu;
    // 0x1b192c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B192Cu;
    SET_GPR_U32(ctx, 31, 0x1B1934u);
    ctx->pc = 0x1B1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B192Cu;
    // 0x1b1930: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B192Cu, 0x1B1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1934u;
}
