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

// Function: entry_0016f3a0
// Address: 0x16f3a0 - 0x16f3a8
void entry_0016f3a0_0x16f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f3a0_0x16f3a0");
#endif

    ctx->pc = 0x16f3a0u;

    // 0x16f3a0: 0xc05bdbc  jal         func_16F6F0
    ctx->pc = 0x16F3A0u;
    SET_GPR_U32(ctx, 31, 0x16F3A8u);
    ctx->pc = 0x16F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3A0u;
    // 0x16f3a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F6F0u, 0x16F3A0u, 0x16F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3A8u;
}
