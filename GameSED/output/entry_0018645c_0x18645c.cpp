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

// Function: entry_0018645c
// Address: 0x18645c - 0x18646c
void entry_0018645c_0x18645c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018645c_0x18645c");
#endif

    switch (ctx->pc) {
        case 0x186464u: goto label_186464;
        default: break;
    }

    ctx->pc = 0x18645cu;

    // 0x18645c: 0xc061906  jal         func_186418
    ctx->pc = 0x18645Cu;
    SET_GPR_U32(ctx, 31, 0x186464u);
    ctx->pc = 0x186460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18645Cu;
    // 0x186460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186418u, 0x18645Cu, 0x186464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186464u;
label_186464:
    // 0x186464: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x186464u;
    {
        const bool branch_taken_0x186464 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x186468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186464u;
        // 0x186468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186464) {
            ctx->pc = 0x186458u;
            return;
        }
    }
    ctx->pc = 0x18646Cu;
}
