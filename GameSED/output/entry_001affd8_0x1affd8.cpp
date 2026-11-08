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

// Function: entry_001affd8
// Address: 0x1affd8 - 0x1afffc
void entry_001affd8_0x1affd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001affd8_0x1affd8");
#endif

    switch (ctx->pc) {
        case 0x1affe0u: goto label_1affe0;
        case 0x1afff8u: goto label_1afff8;
        default: break;
    }

    ctx->pc = 0x1affd8u;

    // 0x1affd8: 0xc06bc68  jal         func_1AF1A0
    ctx->pc = 0x1AFFD8u;
    SET_GPR_U32(ctx, 31, 0x1AFFE0u);
    ctx->pc = 0x1AFFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFD8u;
    // 0x1affdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1A0u, 0x1AFFD8u, 0x1AFFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFE0u;
label_1affe0:
    // 0x1affe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1affe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affe4: 0xf  sync
    ctx->pc = 0x1affe4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1affe8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFFE8u;
    {
        const bool branch_taken_0x1affe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affe8) {
            ctx->pc = 0x1AFFFCu;
            return;
        }
    }
    ctx->pc = 0x1AFFF0u;
    // 0x1afff0: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1AFFF0u;
    SET_GPR_U32(ctx, 31, 0x1AFFF8u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1AFFF0u, 0x1AFFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFF8u;
label_1afff8:
    // 0x1afff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1afff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1afffcu;
}
