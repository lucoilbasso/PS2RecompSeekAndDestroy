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

// Function: entry_00118d9c
// Address: 0x118d9c - 0x118da4
void entry_00118d9c_0x118d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118d9c_0x118d9c");
#endif

    ctx->pc = 0x118d9cu;

    // 0x118d9c: 0xc046370  jal         func_118DC0
    ctx->pc = 0x118D9Cu;
    SET_GPR_U32(ctx, 31, 0x118DA4u);
    ctx->pc = 0x118DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D9Cu;
    // 0x118da0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC0u, 0x118D9Cu, 0x118DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DA4u;
}
