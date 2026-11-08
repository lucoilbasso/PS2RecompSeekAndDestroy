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

// Function: entry_001dd800
// Address: 0x1dd800 - 0x1dd814
void entry_001dd800_0x1dd800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd800_0x1dd800");
#endif

    ctx->pc = 0x1dd800u;

    // 0x1dd800: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD800u;
    {
        const bool branch_taken_0x1dd800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD800u;
        // 0x1dd804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd800) {
            ctx->pc = 0x1DD814u;
            return;
        }
    }
    ctx->pc = 0x1DD808u;
    // 0x1dd808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd80c: 0xc0618da  jal         func_186368
    ctx->pc = 0x1DD80Cu;
    SET_GPR_U32(ctx, 31, 0x1DD814u);
    ctx->pc = 0x1DD810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD80Cu;
    // 0x1dd810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1DD80Cu, 0x1DD814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD814u;
}
