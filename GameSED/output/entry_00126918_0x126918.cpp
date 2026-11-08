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

// Function: entry_00126918
// Address: 0x126918 - 0x12694c
void entry_00126918_0x126918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126918_0x126918");
#endif

    switch (ctx->pc) {
        case 0x126920u: goto label_126920;
        case 0x126928u: goto label_126928;
        default: break;
    }

    ctx->pc = 0x126918u;

    // 0x126918: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126918u;
    SET_GPR_U32(ctx, 31, 0x126920u);
    ctx->pc = 0x12691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126918u;
    // 0x12691c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126918u, 0x126920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126920u;
label_126920:
    // 0x126920: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126920u;
    SET_GPR_U32(ctx, 31, 0x126928u);
    ctx->pc = 0x126924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126920u;
    // 0x126924: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126920u, 0x126928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126928u;
label_126928:
    // 0x126928: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x126928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x12692c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x126930: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x126930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x126934: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x126934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x126938: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x126938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12693c: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x12693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x126940: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x126940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x126944: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x126944u;
    SET_GPR_U32(ctx, 31, 0x12694Cu);
    ctx->pc = 0x126948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126944u;
    // 0x126948: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x126944u, 0x12694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12694Cu;
}
