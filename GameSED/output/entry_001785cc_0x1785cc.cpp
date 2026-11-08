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

// Function: entry_001785cc
// Address: 0x1785cc - 0x1785dc
void entry_001785cc_0x1785cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001785cc_0x1785cc");
#endif

    ctx->pc = 0x1785ccu;

    // 0x1785cc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1785ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1785d0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1785d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1785d4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1785D4u;
    SET_GPR_U32(ctx, 31, 0x1785DCu);
    ctx->pc = 0x1785D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1785D4u;
    // 0x1785d8: 0x8c641014  lw          $a0, 0x1014($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1785D4u, 0x1785DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785DCu;
}
