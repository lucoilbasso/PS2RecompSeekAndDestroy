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

// Function: entry_001945d0
// Address: 0x1945d0 - 0x194604
void entry_001945d0_0x1945d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001945d0_0x1945d0");
#endif

    switch (ctx->pc) {
        case 0x1945d8u: goto label_1945d8;
        case 0x1945e0u: goto label_1945e0;
        default: break;
    }

    ctx->pc = 0x1945d0u;

    // 0x1945d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1945D0u;
    SET_GPR_U32(ctx, 31, 0x1945D8u);
    ctx->pc = 0x1945D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D0u;
    // 0x1945d4: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1945D0u, 0x1945D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945D8u;
label_1945d8:
    // 0x1945d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1945D8u;
    SET_GPR_U32(ctx, 31, 0x1945E0u);
    ctx->pc = 0x1945DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D8u;
    // 0x1945dc: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1945D8u, 0x1945E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945E0u;
label_1945e0:
    // 0x1945e0: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x1945e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x1945e4: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1945e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1945ec: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1945f0: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x1945f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1945f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1945f8: 0xaea5008c  sw          $a1, 0x8C($s5)
    ctx->pc = 0x1945f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 5));
    // 0x1945fc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1945FCu;
    SET_GPR_U32(ctx, 31, 0x194604u);
    ctx->pc = 0x194600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945FCu;
    // 0x194600: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1945FCu, 0x194604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194604u;
}
