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

// Function: entry_00190e48
// Address: 0x190e48 - 0x190e7c
void entry_00190e48_0x190e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e48_0x190e48");
#endif

    switch (ctx->pc) {
        case 0x190e50u: goto label_190e50;
        case 0x190e58u: goto label_190e58;
        default: break;
    }

    ctx->pc = 0x190e48u;

    // 0x190e48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190E48u;
    SET_GPR_U32(ctx, 31, 0x190E50u);
    ctx->pc = 0x190E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E48u;
    // 0x190e4c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190E48u, 0x190E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E50u;
label_190e50:
    // 0x190e50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190E50u;
    SET_GPR_U32(ctx, 31, 0x190E58u);
    ctx->pc = 0x190E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E50u;
    // 0x190e54: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190E50u, 0x190E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E58u;
label_190e58:
    // 0x190e58: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x190e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x190e5c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x190e60: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x190e64: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x190e68: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x190e6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190e70: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x190e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x190e74: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190E74u;
    SET_GPR_U32(ctx, 31, 0x190E7Cu);
    ctx->pc = 0x190E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E74u;
    // 0x190e78: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190E74u, 0x190E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E7Cu;
}
