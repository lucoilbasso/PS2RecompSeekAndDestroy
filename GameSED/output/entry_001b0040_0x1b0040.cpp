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

// Function: entry_001b0040
// Address: 0x1b0040 - 0x1b0064
void entry_001b0040_0x1b0040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0040_0x1b0040");
#endif

    switch (ctx->pc) {
        case 0x1b0048u: goto label_1b0048;
        case 0x1b0060u: goto label_1b0060;
        default: break;
    }

    ctx->pc = 0x1b0040u;

    // 0x1b0040: 0xc06bc74  jal         func_1AF1D0
    ctx->pc = 0x1B0040u;
    SET_GPR_U32(ctx, 31, 0x1B0048u);
    ctx->pc = 0x1B0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0040u;
    // 0x1b0044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1D0u, 0x1B0040u, 0x1B0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0048u;
label_1b0048:
    // 0x1b0048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b0048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b004c: 0xf  sync
    ctx->pc = 0x1b004cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b0050: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0050u;
    {
        const bool branch_taken_0x1b0050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0050u;
        // 0x1b0054: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0050) {
            ctx->pc = 0x1B0064u;
            return;
        }
    }
    ctx->pc = 0x1B0058u;
    // 0x1b0058: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B0058u;
    SET_GPR_U32(ctx, 31, 0x1B0060u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B0058u, 0x1B0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0060u;
label_1b0060:
    // 0x1b0060: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b0060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0064u;
}
