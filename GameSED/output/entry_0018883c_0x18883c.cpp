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

// Function: entry_0018883c
// Address: 0x18883c - 0x188844
void entry_0018883c_0x18883c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018883c_0x18883c");
#endif

    ctx->pc = 0x18883cu;

    // 0x18883c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18883Cu;
    SET_GPR_U32(ctx, 31, 0x188844u);
    ctx->pc = 0x188840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18883Cu;
    // 0x188840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18883Cu, 0x188844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188844u;
}
