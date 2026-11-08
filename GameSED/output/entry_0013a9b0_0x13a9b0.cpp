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

// Function: entry_0013a9b0
// Address: 0x13a9b0 - 0x13a9bc
void entry_0013a9b0_0x13a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a9b0_0x13a9b0");
#endif

    ctx->pc = 0x13a9b0u;

    // 0x13a9b0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x13a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a9b4: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A9B4u;
    SET_GPR_U32(ctx, 31, 0x13A9BCu);
    ctx->pc = 0x13A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9B4u;
    // 0x13a9b8: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7C8u, 0x13A9B4u, 0x13A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9BCu;
}
