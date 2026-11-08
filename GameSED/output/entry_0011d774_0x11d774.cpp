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

// Function: entry_0011d774
// Address: 0x11d774 - 0x11d77c
void entry_0011d774_0x11d774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d774_0x11d774");
#endif

    ctx->pc = 0x11d774u;

    // 0x11d774: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x11D774u;
    SET_GPR_U32(ctx, 31, 0x11D77Cu);
    ctx->pc = 0x11D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D774u;
    // 0x11d778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x11D774u, 0x11D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D77Cu;
}
