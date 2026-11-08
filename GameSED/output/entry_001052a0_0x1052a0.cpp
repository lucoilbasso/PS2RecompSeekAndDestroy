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

// Function: entry_001052a0
// Address: 0x1052a0 - 0x1052b4
void entry_001052a0_0x1052a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001052a0_0x1052a0");
#endif

    switch (ctx->pc) {
        case 0x1052a8u: goto label_1052a8;
        default: break;
    }

    ctx->pc = 0x1052a0u;

    // 0x1052a0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1052A0u;
    SET_GPR_U32(ctx, 31, 0x1052A8u);
    ctx->pc = 0x1052A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1052A0u;
    // 0x1052a4: 0x2484d130  addiu       $a0, $a0, -0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1052A0u, 0x1052A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052A8u;
label_1052a8:
    // 0x1052a8: 0x8f8488a8  lw          $a0, -0x7758($gp)
    ctx->pc = 0x1052a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    // 0x1052ac: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1052ACu;
    SET_GPR_U32(ctx, 31, 0x1052B4u);
    ctx->pc = 0x1052B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1052ACu;
    // 0x1052b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1052ACu, 0x1052B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052B4u;
}
