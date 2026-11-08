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

// Function: entry_0013dd98
// Address: 0x13dd98 - 0x13ddcc
void entry_0013dd98_0x13dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd98_0x13dd98");
#endif

    switch (ctx->pc) {
        case 0x13dda0u: goto label_13dda0;
        case 0x13dda8u: goto label_13dda8;
        default: break;
    }

    ctx->pc = 0x13dd98u;

    // 0x13dd98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DD98u;
    SET_GPR_U32(ctx, 31, 0x13DDA0u);
    ctx->pc = 0x13DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD98u;
    // 0x13dd9c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DD98u, 0x13DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDA0u;
label_13dda0:
    // 0x13dda0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DDA0u;
    SET_GPR_U32(ctx, 31, 0x13DDA8u);
    ctx->pc = 0x13DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDA0u;
    // 0x13dda4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DDA0u, 0x13DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDA8u;
label_13dda8:
    // 0x13dda8: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x13dda8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x13ddac: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x13ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13ddb0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13ddb4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13ddb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ddbc: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x13ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x13ddc0: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x13ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    // 0x13ddc4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DDC4u;
    SET_GPR_U32(ctx, 31, 0x13DDCCu);
    ctx->pc = 0x13DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDC4u;
    // 0x13ddc8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DDC4u, 0x13DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDCCu;
}
