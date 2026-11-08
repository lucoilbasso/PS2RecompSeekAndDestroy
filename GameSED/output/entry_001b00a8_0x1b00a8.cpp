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

// Function: entry_001b00a8
// Address: 0x1b00a8 - 0x1b00cc
void entry_001b00a8_0x1b00a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b00a8_0x1b00a8");
#endif

    switch (ctx->pc) {
        case 0x1b00b0u: goto label_1b00b0;
        case 0x1b00c8u: goto label_1b00c8;
        default: break;
    }

    ctx->pc = 0x1b00a8u;

    // 0x1b00a8: 0xc06bc70  jal         func_1AF1C0
    ctx->pc = 0x1B00A8u;
    SET_GPR_U32(ctx, 31, 0x1B00B0u);
    ctx->pc = 0x1B00ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00A8u;
    // 0x1b00ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1C0u, 0x1B00A8u, 0x1B00B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00B0u;
label_1b00b0:
    // 0x1b00b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b00b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00b4: 0xf  sync
    ctx->pc = 0x1b00b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b00b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B00B8u;
    {
        const bool branch_taken_0x1b00b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00B8u;
        // 0x1b00bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00b8) {
            ctx->pc = 0x1B00CCu;
            return;
        }
    }
    ctx->pc = 0x1B00C0u;
    // 0x1b00c0: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B00C0u;
    SET_GPR_U32(ctx, 31, 0x1B00C8u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B00C0u, 0x1B00C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00C8u;
label_1b00c8:
    // 0x1b00c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b00c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b00ccu;
}
