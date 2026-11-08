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

// Function: entry_001b1934
// Address: 0x1b1934 - 0x1b1944
void entry_001b1934_0x1b1934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1934_0x1b1934");
#endif

    ctx->pc = 0x1b1934u;

    // 0x1b1934: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1934u;
    {
        const bool branch_taken_0x1b1934 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1B1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1934u;
        // 0x1b1938: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1934) {
            ctx->pc = 0x1B1944u;
            return;
        }
    }
    ctx->pc = 0x1B193Cu;
    // 0x1b193c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B193Cu;
    SET_GPR_U32(ctx, 31, 0x1B1944u);
    ctx->pc = 0x1B1940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B193Cu;
    // 0x1b1940: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B193Cu, 0x1B1944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1944u;
}
