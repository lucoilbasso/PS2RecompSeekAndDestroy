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

// Function: entry_001c4918
// Address: 0x1c4918 - 0x1c4928
void entry_001c4918_0x1c4918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4918_0x1c4918");
#endif

    switch (ctx->pc) {
        case 0x1c4920u: goto label_1c4920;
        default: break;
    }

    ctx->pc = 0x1c4918u;

label_1c4918:
    // 0x1c4918: 0xc06be00  jal         func_1AF800
    ctx->pc = 0x1C4918u;
    SET_GPR_U32(ctx, 31, 0x1C4920u);
    ctx->pc = 0x1C491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4918u;
    // 0x1c491c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF800u, 0x1C4918u, 0x1C4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4920u;
label_1c4920:
    // 0x1c4920: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C4920u;
    {
        const bool branch_taken_0x1c4920 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4920u;
        // 0x1c4924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4920) {
            ctx->pc = 0x1C4918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4918;
        }
    }
    ctx->pc = 0x1C4928u;
}
