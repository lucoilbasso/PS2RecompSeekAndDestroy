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

// Function: entry_0011b694
// Address: 0x11b694 - 0x11b69c
void entry_0011b694_0x11b694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b694_0x11b694");
#endif

    ctx->pc = 0x11b694u;

    // 0x11b694: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x11B694u;
    SET_GPR_U32(ctx, 31, 0x11B69Cu);
    ctx->pc = 0x11B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B694u;
    // 0x11b698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x11B694u, 0x11B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B69Cu;
}
