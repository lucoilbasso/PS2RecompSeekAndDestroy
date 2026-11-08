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

// Function: entry_001cdfa0
// Address: 0x1cdfa0 - 0x1cdfa8
void entry_001cdfa0_0x1cdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdfa0_0x1cdfa0");
#endif

    ctx->pc = 0x1cdfa0u;

    // 0x1cdfa0: 0xc0736ac  jal         func_1CDAB0
    ctx->pc = 0x1CDFA0u;
    SET_GPR_U32(ctx, 31, 0x1CDFA8u);
    ctx->pc = 0x1CDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFA0u;
    // 0x1cdfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAB0u, 0x1CDFA0u, 0x1CDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFA8u;
}
