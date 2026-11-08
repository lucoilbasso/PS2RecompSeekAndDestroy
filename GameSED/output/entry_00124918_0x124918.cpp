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

// Function: entry_00124918
// Address: 0x124918 - 0x12494c
void entry_00124918_0x124918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124918_0x124918");
#endif

    switch (ctx->pc) {
        case 0x124920u: goto label_124920;
        case 0x124928u: goto label_124928;
        default: break;
    }

    ctx->pc = 0x124918u;

    // 0x124918: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124918u;
    SET_GPR_U32(ctx, 31, 0x124920u);
    ctx->pc = 0x12491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124918u;
    // 0x12491c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124918u, 0x124920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124920u;
label_124920:
    // 0x124920: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124920u;
    SET_GPR_U32(ctx, 31, 0x124928u);
    ctx->pc = 0x124924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124920u;
    // 0x124924: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124920u, 0x124928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124928u;
label_124928:
    // 0x124928: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x124928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x12492c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x124930: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x124934: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x124934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x124938: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x12493c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124940: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x124940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x124944: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x124944u;
    SET_GPR_U32(ctx, 31, 0x12494Cu);
    ctx->pc = 0x124948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124944u;
    // 0x124948: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x124944u, 0x12494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12494Cu;
}
