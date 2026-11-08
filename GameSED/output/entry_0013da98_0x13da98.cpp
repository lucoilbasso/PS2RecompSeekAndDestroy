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

// Function: entry_0013da98
// Address: 0x13da98 - 0x13dacc
void entry_0013da98_0x13da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013da98_0x13da98");
#endif

    switch (ctx->pc) {
        case 0x13daa0u: goto label_13daa0;
        case 0x13daa8u: goto label_13daa8;
        default: break;
    }

    ctx->pc = 0x13da98u;

    // 0x13da98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DA98u;
    SET_GPR_U32(ctx, 31, 0x13DAA0u);
    ctx->pc = 0x13DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA98u;
    // 0x13da9c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DA98u, 0x13DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAA0u;
label_13daa0:
    // 0x13daa0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DAA0u;
    SET_GPR_U32(ctx, 31, 0x13DAA8u);
    ctx->pc = 0x13DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAA0u;
    // 0x13daa4: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DAA0u, 0x13DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAA8u;
label_13daa8:
    // 0x13daa8: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13daac: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x13daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13dab0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13dab4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13dab8: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13dabc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13dac0: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x13dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x13dac4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DAC4u;
    SET_GPR_U32(ctx, 31, 0x13DACCu);
    ctx->pc = 0x13DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAC4u;
    // 0x13dac8: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DAC4u, 0x13DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DACCu;
}
