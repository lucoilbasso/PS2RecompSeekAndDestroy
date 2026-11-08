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

// Function: entry_001273a8
// Address: 0x1273a8 - 0x1273dc
void entry_001273a8_0x1273a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001273a8_0x1273a8");
#endif

    switch (ctx->pc) {
        case 0x1273b0u: goto label_1273b0;
        case 0x1273b8u: goto label_1273b8;
        default: break;
    }

    ctx->pc = 0x1273a8u;

    // 0x1273a8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1273A8u;
    SET_GPR_U32(ctx, 31, 0x1273B0u);
    ctx->pc = 0x1273ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273A8u;
    // 0x1273ac: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1273A8u, 0x1273B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273B0u;
label_1273b0:
    // 0x1273b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1273B0u;
    SET_GPR_U32(ctx, 31, 0x1273B8u);
    ctx->pc = 0x1273B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273B0u;
    // 0x1273b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1273B0u, 0x1273B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273B8u;
label_1273b8:
    // 0x1273b8: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x1273b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1273bc: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1273bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1273c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1273c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1273c4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1273c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1273c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1273c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1273cc: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x1273ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1273d0: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x1273d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x1273d4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1273D4u;
    SET_GPR_U32(ctx, 31, 0x1273DCu);
    ctx->pc = 0x1273D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273D4u;
    // 0x1273d8: 0xae25008c  sw          $a1, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1273D4u, 0x1273DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273DCu;
}
