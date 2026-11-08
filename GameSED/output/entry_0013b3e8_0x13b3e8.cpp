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

// Function: entry_0013b3e8
// Address: 0x13b3e8 - 0x13b3f0
void entry_0013b3e8_0x13b3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b3e8_0x13b3e8");
#endif

    ctx->pc = 0x13b3e8u;

    // 0x13b3e8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13B3E8u;
    SET_GPR_U32(ctx, 31, 0x13B3F0u);
    ctx->pc = 0x13B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3E8u;
    // 0x13b3ec: 0x24846868  addiu       $a0, $a0, 0x6868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13B3E8u, 0x13B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3F0u;
}
