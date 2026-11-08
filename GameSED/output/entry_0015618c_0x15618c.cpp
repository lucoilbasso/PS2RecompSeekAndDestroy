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

// Function: entry_0015618c
// Address: 0x15618c - 0x156194
void entry_0015618c_0x15618c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015618c_0x15618c");
#endif

    ctx->pc = 0x15618cu;

    // 0x15618c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15618Cu;
    SET_GPR_U32(ctx, 31, 0x156194u);
    ctx->pc = 0x156190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15618Cu;
    // 0x156190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15618Cu, 0x156194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156194u;
}
