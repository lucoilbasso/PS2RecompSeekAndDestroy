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

// Function: entry_00110378
// Address: 0x110378 - 0x110388
void entry_00110378_0x110378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110378_0x110378");
#endif

    ctx->pc = 0x110378u;

    // 0x110378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11037c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110380: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x110380u;
    SET_GPR_U32(ctx, 31, 0x110388u);
    ctx->pc = 0x110384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110380u;
    // 0x110384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x110380u, 0x110388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110388u;
}
