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

// Function: entry_001cb900
// Address: 0x1cb900 - 0x1cb920
void entry_001cb900_0x1cb900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb900_0x1cb900");
#endif

    switch (ctx->pc) {
        case 0x1cb908u: goto label_1cb908;
        default: break;
    }

    ctx->pc = 0x1cb900u;

label_1cb900:
    // 0x1cb900: 0xc072d50  jal         func_1CB540
    ctx->pc = 0x1CB900u;
    SET_GPR_U32(ctx, 31, 0x1CB908u);
    ctx->pc = 0x1CB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB900u;
    // 0x1cb904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB540u, 0x1CB900u, 0x1CB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB908u;
label_1cb908:
    // 0x1cb908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb90c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1cb90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1cb910: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB910u;
    {
        const bool branch_taken_0x1cb910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB910u;
        // 0x1cb914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb910) {
            ctx->pc = 0x1CB900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb900;
        }
    }
    ctx->pc = 0x1CB918u;
    // 0x1cb918: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1CB918u;
    {
        const bool branch_taken_0x1cb918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB918u;
        // 0x1cb91c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb918) {
            ctx->pc = 0x1CBA94u;
            return;
        }
    }
    ctx->pc = 0x1CB920u;
}
