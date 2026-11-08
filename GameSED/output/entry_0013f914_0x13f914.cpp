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

// Function: entry_0013f914
// Address: 0x13f914 - 0x13f928
void entry_0013f914_0x13f914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f914_0x13f914");
#endif

    ctx->pc = 0x13f914u;

    // 0x13f914: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F914u;
    {
        const bool branch_taken_0x13f914 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F914u;
        // 0x13f918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f914) {
            ctx->pc = 0x13F928u;
            return;
        }
    }
    ctx->pc = 0x13F91Cu;
    // 0x13f91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f920: 0xc0618da  jal         func_186368
    ctx->pc = 0x13F920u;
    SET_GPR_U32(ctx, 31, 0x13F928u);
    ctx->pc = 0x13F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F920u;
    // 0x13f924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13F920u, 0x13F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F928u;
}
