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

// Function: entry_0011b39c
// Address: 0x11b39c - 0x11b3a4
void entry_0011b39c_0x11b39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b39c_0x11b39c");
#endif

    ctx->pc = 0x11b39cu;

    // 0x11b39c: 0xc04126e  jal         func_1049B8
    ctx->pc = 0x11B39Cu;
    SET_GPR_U32(ctx, 31, 0x11B3A4u);
    ctx->pc = 0x11B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B39Cu;
    // 0x11b3a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1049B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1049B8u, 0x11B39Cu, 0x11B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3A4u;
}
