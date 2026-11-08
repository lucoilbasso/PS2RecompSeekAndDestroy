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

// Function: entry_00144860
// Address: 0x144860 - 0x144870
void entry_00144860_0x144860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144860_0x144860");
#endif

    switch (ctx->pc) {
        case 0x144868u: goto label_144868;
        default: break;
    }

    ctx->pc = 0x144860u;

    // 0x144860: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144860u;
    SET_GPR_U32(ctx, 31, 0x144868u);
    ctx->pc = 0x144864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144860u;
    // 0x144864: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144860u, 0x144868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144868u;
label_144868:
    // 0x144868: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x144868u;
    SET_GPR_U32(ctx, 31, 0x144870u);
    ctx->pc = 0x14486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144868u;
    // 0x14486c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x144868u, 0x144870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144870u;
}
