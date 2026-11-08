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

// Function: entry_00111600
// Address: 0x111600 - 0x111608
void entry_00111600_0x111600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111600_0x111600");
#endif

    ctx->pc = 0x111600u;

    // 0x111600: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x111600u;
    SET_GPR_U32(ctx, 31, 0x111608u);
    ctx->pc = 0x111604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111600u;
    // 0x111604: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x111600u, 0x111608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111608u;
}
