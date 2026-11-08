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

// Function: caseD_4
// Address: 0x113db0 - 0x113db8
void caseD_4_0x113db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x113db0");
#endif

    ctx->pc = 0x113db0u;

    // 0x113db0: 0xc044f04  jal         func_113C10
    ctx->pc = 0x113DB0u;
    SET_GPR_U32(ctx, 31, 0x113DB8u);
    ctx->pc = 0x113DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DB0u;
    // 0x113db4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C10u, 0x113DB0u, 0x113DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DB8u;
}
