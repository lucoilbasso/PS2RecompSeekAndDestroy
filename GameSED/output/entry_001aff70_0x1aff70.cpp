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

// Function: entry_001aff70
// Address: 0x1aff70 - 0x1aff94
void entry_001aff70_0x1aff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aff70_0x1aff70");
#endif

    switch (ctx->pc) {
        case 0x1aff78u: goto label_1aff78;
        case 0x1aff90u: goto label_1aff90;
        default: break;
    }

    ctx->pc = 0x1aff70u;

    // 0x1aff70: 0xc06bc6c  jal         func_1AF1B0
    ctx->pc = 0x1AFF70u;
    SET_GPR_U32(ctx, 31, 0x1AFF78u);
    ctx->pc = 0x1AFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF70u;
    // 0x1aff74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1B0u, 0x1AFF70u, 0x1AFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF78u;
label_1aff78:
    // 0x1aff78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aff78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff7c: 0xf  sync
    ctx->pc = 0x1aff7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1aff80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFF80u;
    {
        const bool branch_taken_0x1aff80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF80u;
        // 0x1aff84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff80) {
            ctx->pc = 0x1AFF94u;
            return;
        }
    }
    ctx->pc = 0x1AFF88u;
    // 0x1aff88: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1AFF88u;
    SET_GPR_U32(ctx, 31, 0x1AFF90u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1AFF88u, 0x1AFF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF90u;
label_1aff90:
    // 0x1aff90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aff90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aff94u;
}
