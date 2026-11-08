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

// Function: entry_0013a4d0
// Address: 0x13a4d0 - 0x13a4d8
void entry_0013a4d0_0x13a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a4d0_0x13a4d0");
#endif

    ctx->pc = 0x13a4d0u;

    // 0x13a4d0: 0xc0618da  jal         func_186368
    ctx->pc = 0x13A4D0u;
    SET_GPR_U32(ctx, 31, 0x13A4D8u);
    ctx->pc = 0x13A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4D0u;
    // 0x13a4d4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13A4D0u, 0x13A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4D8u;
}
