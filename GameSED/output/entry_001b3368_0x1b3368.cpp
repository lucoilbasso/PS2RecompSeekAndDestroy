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

// Function: entry_001b3368
// Address: 0x1b3368 - 0x1b338c
void entry_001b3368_0x1b3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3368_0x1b3368");
#endif

    switch (ctx->pc) {
        case 0x1b3374u: goto label_1b3374;
        case 0x1b3384u: goto label_1b3384;
        default: break;
    }

    ctx->pc = 0x1b3368u;

    // 0x1b3368: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b3368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b336c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B336Cu;
    SET_GPR_U32(ctx, 31, 0x1B3374u);
    ctx->pc = 0x1B3370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B336Cu;
    // 0x1b3370: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B336Cu, 0x1B3374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3374u;
label_1b3374:
    // 0x1b3374: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3374u;
    {
        const bool branch_taken_0x1b3374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3374u;
        // 0x1b3378: 0x32c28000  andi        $v0, $s6, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3374) {
            ctx->pc = 0x1B338Cu;
            return;
        }
    }
    ctx->pc = 0x1B337Cu;
    // 0x1b337c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B337Cu;
    SET_GPR_U32(ctx, 31, 0x1B3384u);
    ctx->pc = 0x1B3380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B337Cu;
    // 0x1b3380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B337Cu, 0x1B3384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3384u;
label_1b3384:
    // 0x1b3384: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B3384u;
    {
        const bool branch_taken_0x1b3384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3384u;
        // 0x1b3388: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3384) {
            ctx->pc = 0x1B33B8u;
            return;
        }
    }
    ctx->pc = 0x1B338Cu;
}
