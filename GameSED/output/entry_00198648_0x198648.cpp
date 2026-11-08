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

// Function: entry_00198648
// Address: 0x198648 - 0x19867c
void entry_00198648_0x198648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198648_0x198648");
#endif

    switch (ctx->pc) {
        case 0x198650u: goto label_198650;
        case 0x198658u: goto label_198658;
        default: break;
    }

    ctx->pc = 0x198648u;

    // 0x198648: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198648u;
    SET_GPR_U32(ctx, 31, 0x198650u);
    ctx->pc = 0x19864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198648u;
    // 0x19864c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198648u, 0x198650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198650u;
label_198650:
    // 0x198650: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198650u;
    SET_GPR_U32(ctx, 31, 0x198658u);
    ctx->pc = 0x198654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198650u;
    // 0x198654: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198650u, 0x198658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198658u;
label_198658:
    // 0x198658: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x19865c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x198660: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x198664: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x198664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x198668: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19866c: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x19866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x198670: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x198670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x198674: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198674u;
    SET_GPR_U32(ctx, 31, 0x19867Cu);
    ctx->pc = 0x198678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198674u;
    // 0x198678: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198674u, 0x19867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19867Cu;
}
