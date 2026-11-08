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

// Function: entry_00118900
// Address: 0x118900 - 0x118908
void entry_00118900_0x118900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118900_0x118900");
#endif

    ctx->pc = 0x118900u;

    // 0x118900: 0xc04699a  jal         func_11A668
    ctx->pc = 0x118900u;
    SET_GPR_U32(ctx, 31, 0x118908u);
    ctx->pc = 0x118904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118900u;
    // 0x118904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A668u, 0x118900u, 0x118908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118908u;
}
