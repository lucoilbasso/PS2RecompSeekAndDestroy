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

// Function: entry_001824c0
// Address: 0x1824c0 - 0x1824cc
void entry_001824c0_0x1824c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001824c0_0x1824c0");
#endif

    ctx->pc = 0x1824c0u;

    // 0x1824c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1824c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824c4: 0xc060650  jal         func_181940
    ctx->pc = 0x1824C4u;
    SET_GPR_U32(ctx, 31, 0x1824CCu);
    ctx->pc = 0x1824C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824C4u;
    // 0x1824c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x1824C4u, 0x1824CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824CCu;
}
