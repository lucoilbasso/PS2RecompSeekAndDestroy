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

// Function: entry_001a433c
// Address: 0x1a433c - 0x1a435c
void entry_001a433c_0x1a433c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a433c_0x1a433c");
#endif

    switch (ctx->pc) {
        case 0x1a4344u: goto label_1a4344;
        default: break;
    }

    ctx->pc = 0x1a433cu;

    // 0x1a433c: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x1A433Cu;
    SET_GPR_U32(ctx, 31, 0x1A4344u);
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x1A433Cu, 0x1A4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4344u;
label_1a4344:
    // 0x1a4344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4348: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4348u;
    {
        const bool branch_taken_0x1a4348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4348u;
        // 0x1a434c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4348) {
            ctx->pc = 0x1A4384u;
            return;
        }
    }
    ctx->pc = 0x1A4350u;
    // 0x1a4350: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4350u;
    {
        const bool branch_taken_0x1a4350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4350u;
        // 0x1a4354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4350) {
            ctx->pc = 0x1A435Cu;
            return;
        }
    }
    ctx->pc = 0x1A4358u;
    // 0x1a4358: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1a435cu;
}
