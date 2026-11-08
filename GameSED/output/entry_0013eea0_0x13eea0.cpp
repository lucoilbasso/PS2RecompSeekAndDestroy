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

// Function: entry_0013eea0
// Address: 0x13eea0 - 0x13eeb4
void entry_0013eea0_0x13eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eea0_0x13eea0");
#endif

    ctx->pc = 0x13eea0u;

    // 0x13eea0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EEA0u;
    {
        const bool branch_taken_0x13eea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEA0u;
        // 0x13eea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eea0) {
            ctx->pc = 0x13EEB4u;
            return;
        }
    }
    ctx->pc = 0x13EEA8u;
    // 0x13eea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13eea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eeac: 0xc0618da  jal         func_186368
    ctx->pc = 0x13EEACu;
    SET_GPR_U32(ctx, 31, 0x13EEB4u);
    ctx->pc = 0x13EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEACu;
    // 0x13eeb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13EEACu, 0x13EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEB4u;
}
