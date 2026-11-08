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

// Function: entry_0011a250
// Address: 0x11a250 - 0x11a258
void entry_0011a250_0x11a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a250_0x11a250");
#endif

    ctx->pc = 0x11a250u;

    // 0x11a250: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x11A250u;
    SET_GPR_U32(ctx, 31, 0x11A258u);
    ctx->pc = 0x11A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A250u;
    // 0x11a254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x11A250u, 0x11A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A258u;
}
