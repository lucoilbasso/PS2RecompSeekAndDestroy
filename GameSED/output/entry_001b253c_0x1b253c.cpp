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

// Function: entry_001b253c
// Address: 0x1b253c - 0x1b255c
void entry_001b253c_0x1b253c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b253c_0x1b253c");
#endif

    switch (ctx->pc) {
        case 0x1b2544u: goto label_1b2544;
        default: break;
    }

    ctx->pc = 0x1b253cu;

    // 0x1b253c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1B253Cu;
    SET_GPR_U32(ctx, 31, 0x1B2544u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1B253Cu, 0x1B2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2544u;
label_1b2544:
    // 0x1b2544: 0x8e11b200  lw          $s1, -0x4E00($s0)
    ctx->pc = 0x1b2544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947328)));
    // 0x1b2548: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x1b2548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
    // 0x1b254c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B254Cu;
    {
        const bool branch_taken_0x1b254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B254Cu;
        // 0x1b2550: 0xae13b200  sw          $s3, -0x4E00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294947328), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b254c) {
            ctx->pc = 0x1B255Cu;
            return;
        }
    }
    ctx->pc = 0x1B2554u;
    // 0x1b2554: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B2554u;
    SET_GPR_U32(ctx, 31, 0x1B255Cu);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B2554u, 0x1B255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B255Cu;
}
