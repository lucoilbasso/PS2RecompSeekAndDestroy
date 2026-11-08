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

// Function: entry_001b9998
// Address: 0x1b9998 - 0x1b99a0
void entry_001b9998_0x1b9998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9998_0x1b9998");
#endif

    ctx->pc = 0x1b9998u;

    // 0x1b9998: 0xc06e612  jal         func_1B9848
    ctx->pc = 0x1B9998u;
    SET_GPR_U32(ctx, 31, 0x1B99A0u);
    ctx->pc = 0x1B999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9998u;
    // 0x1b999c: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9848u, 0x1B9998u, 0x1B99A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99A0u;
}
