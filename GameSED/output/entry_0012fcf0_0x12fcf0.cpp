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

// Function: entry_0012fcf0
// Address: 0x12fcf0 - 0x12fcf8
void entry_0012fcf0_0x12fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fcf0_0x12fcf0");
#endif

    ctx->pc = 0x12fcf0u;

    // 0x12fcf0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12FCF0u;
    SET_GPR_U32(ctx, 31, 0x12FCF8u);
    ctx->pc = 0x12FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCF0u;
    // 0x12fcf4: 0x24846068  addiu       $a0, $a0, 0x6068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12FCF0u, 0x12FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCF8u;
}
