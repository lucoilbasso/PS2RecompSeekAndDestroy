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

// Function: entry_00103a90
// Address: 0x103a90 - 0x103a98
void entry_00103a90_0x103a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a90_0x103a90");
#endif

    ctx->pc = 0x103a90u;

    // 0x103a90: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A90u;
    SET_GPR_U32(ctx, 31, 0x103A98u);
    ctx->pc = 0x103A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A90u;
    // 0x103a94: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A90u, 0x103A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A98u;
}
