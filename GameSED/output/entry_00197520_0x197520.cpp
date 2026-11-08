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

// Function: entry_00197520
// Address: 0x197520 - 0x197530
void entry_00197520_0x197520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197520_0x197520");
#endif

    switch (ctx->pc) {
        case 0x197528u: goto label_197528;
        default: break;
    }

    ctx->pc = 0x197520u;

    // 0x197520: 0xc061422  jal         func_185088
    ctx->pc = 0x197520u;
    SET_GPR_U32(ctx, 31, 0x197528u);
    ctx->pc = 0x197524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197520u;
    // 0x197524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x197520u, 0x197528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197528u;
label_197528:
    // 0x197528: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x197528u;
    {
        const bool branch_taken_0x197528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197528u;
        // 0x19752c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197528) {
            ctx->pc = 0x1975B4u;
            return;
        }
    }
    ctx->pc = 0x197530u;
}
