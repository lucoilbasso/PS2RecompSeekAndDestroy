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

// Function: entry_001a8500
// Address: 0x1a8500 - 0x1a850c
void entry_001a8500_0x1a8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8500_0x1a8500");
#endif

    ctx->pc = 0x1a8500u;

    // 0x1a8500: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a8500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8504: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A8504u;
    SET_GPR_U32(ctx, 31, 0x1A850Cu);
    ctx->pc = 0x1A8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8504u;
    // 0x1a8508: 0x2484d940  addiu       $a0, $a0, -0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A8504u, 0x1A850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A850Cu;
}
