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

// Function: entry_00147090
// Address: 0x147090 - 0x1470c4
void entry_00147090_0x147090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147090_0x147090");
#endif

    switch (ctx->pc) {
        case 0x147098u: goto label_147098;
        case 0x1470a0u: goto label_1470a0;
        default: break;
    }

    ctx->pc = 0x147090u;

    // 0x147090: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147090u;
    SET_GPR_U32(ctx, 31, 0x147098u);
    ctx->pc = 0x147094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147090u;
    // 0x147094: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147090u, 0x147098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147098u;
label_147098:
    // 0x147098: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147098u;
    SET_GPR_U32(ctx, 31, 0x1470A0u);
    ctx->pc = 0x14709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147098u;
    // 0x14709c: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147098u, 0x1470A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470A0u;
label_1470a0:
    // 0x1470a0: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x1470a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1470a4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1470a8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1470ac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1470acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1470b0: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x1470b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1470b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1470b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1470b8: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x1470b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x1470bc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1470BCu;
    SET_GPR_U32(ctx, 31, 0x1470C4u);
    ctx->pc = 0x1470C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470BCu;
    // 0x1470c0: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1470BCu, 0x1470C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470C4u;
}
