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

// Function: entry_001186c8
// Address: 0x1186c8 - 0x1186d4
void entry_001186c8_0x1186c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186c8_0x1186c8");
#endif

    ctx->pc = 0x1186c8u;

    // 0x1186c8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1186cc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1186CCu;
    SET_GPR_U32(ctx, 31, 0x1186D4u);
    ctx->pc = 0x1186D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186CCu;
    // 0x1186d0: 0x248442c0  addiu       $a0, $a0, 0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1186CCu, 0x1186D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186D4u;
}
