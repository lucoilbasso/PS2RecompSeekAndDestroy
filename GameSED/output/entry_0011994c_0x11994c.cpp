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

// Function: entry_0011994c
// Address: 0x11994c - 0x119960
void entry_0011994c_0x11994c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011994c_0x11994c");
#endif

    switch (ctx->pc) {
        case 0x11995cu: goto label_11995c;
        default: break;
    }

    ctx->pc = 0x11994cu;

    // 0x11994c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11994Cu;
    {
        const bool branch_taken_0x11994c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x119950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11994Cu;
        // 0x119950: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11994c) {
            ctx->pc = 0x119960u;
            return;
        }
    }
    ctx->pc = 0x119954u;
    // 0x119954: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119954u;
    SET_GPR_U32(ctx, 31, 0x11995Cu);
    ctx->pc = 0x119958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119954u;
    // 0x119958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119954u, 0x11995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11995Cu;
label_11995c:
    // 0x11995c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11995cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119960u;
}
