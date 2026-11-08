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

// Function: entry_0011ac94
// Address: 0x11ac94 - 0x11ac9c
void entry_0011ac94_0x11ac94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ac94_0x11ac94");
#endif

    ctx->pc = 0x11ac94u;

    // 0x11ac94: 0xc066546  jal         func_199518
    ctx->pc = 0x11AC94u;
    SET_GPR_U32(ctx, 31, 0x11AC9Cu);
    ctx->pc = 0x11AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC94u;
    // 0x11ac98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199518u, 0x11AC94u, 0x11AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC9Cu;
}
