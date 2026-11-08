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

// Function: entry_0011061c
// Address: 0x11061c - 0x110624
void entry_0011061c_0x11061c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011061c_0x11061c");
#endif

    ctx->pc = 0x11061cu;

    // 0x11061c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x11061Cu;
    SET_GPR_U32(ctx, 31, 0x110624u);
    ctx->pc = 0x110620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11061Cu;
    // 0x110620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x11061Cu, 0x110624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110624u;
}
