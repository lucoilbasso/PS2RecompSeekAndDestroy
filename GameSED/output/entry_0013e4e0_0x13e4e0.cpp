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

// Function: entry_0013e4e0
// Address: 0x13e4e0 - 0x13e514
void entry_0013e4e0_0x13e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e4e0_0x13e4e0");
#endif

    switch (ctx->pc) {
        case 0x13e4e8u: goto label_13e4e8;
        case 0x13e4f0u: goto label_13e4f0;
        default: break;
    }

    ctx->pc = 0x13e4e0u;

    // 0x13e4e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E4E0u;
    SET_GPR_U32(ctx, 31, 0x13E4E8u);
    ctx->pc = 0x13E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4E0u;
    // 0x13e4e4: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E4E0u, 0x13E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4E8u;
label_13e4e8:
    // 0x13e4e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E4E8u;
    SET_GPR_U32(ctx, 31, 0x13E4F0u);
    ctx->pc = 0x13E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4E8u;
    // 0x13e4ec: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E4E8u, 0x13E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4F0u;
label_13e4f0:
    // 0x13e4f0: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x13e4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x13e4f4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13e4f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e4fc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13e500: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e504: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x13e504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x13e508: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x13e508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x13e50c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E50Cu;
    SET_GPR_U32(ctx, 31, 0x13E514u);
    ctx->pc = 0x13E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E50Cu;
    // 0x13e510: 0xae25008c  sw          $a1, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E50Cu, 0x13E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E514u;
}
