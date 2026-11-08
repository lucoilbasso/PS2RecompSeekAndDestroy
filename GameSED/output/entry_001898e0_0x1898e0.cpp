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

// Function: entry_001898e0
// Address: 0x1898e0 - 0x189914
void entry_001898e0_0x1898e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001898e0_0x1898e0");
#endif

    switch (ctx->pc) {
        case 0x1898e8u: goto label_1898e8;
        case 0x1898f0u: goto label_1898f0;
        default: break;
    }

    ctx->pc = 0x1898e0u;

    // 0x1898e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1898E0u;
    SET_GPR_U32(ctx, 31, 0x1898E8u);
    ctx->pc = 0x1898E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898E0u;
    // 0x1898e4: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1898E0u, 0x1898E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898E8u;
label_1898e8:
    // 0x1898e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1898E8u;
    SET_GPR_U32(ctx, 31, 0x1898F0u);
    ctx->pc = 0x1898ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898E8u;
    // 0x1898ec: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1898E8u, 0x1898F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898F0u;
label_1898f0:
    // 0x1898f0: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x1898f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1898f4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1898f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1898f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1898f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1898fc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1898fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x189900: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x189904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189908: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x189908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x18990c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18990Cu;
    SET_GPR_U32(ctx, 31, 0x189914u);
    ctx->pc = 0x189910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18990Cu;
    // 0x189910: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18990Cu, 0x189914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189914u;
}
