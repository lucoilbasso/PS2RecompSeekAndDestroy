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

// Function: entry_00189b90
// Address: 0x189b90 - 0x189bc4
void entry_00189b90_0x189b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b90_0x189b90");
#endif

    switch (ctx->pc) {
        case 0x189b98u: goto label_189b98;
        case 0x189ba0u: goto label_189ba0;
        default: break;
    }

    ctx->pc = 0x189b90u;

    // 0x189b90: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189B90u;
    SET_GPR_U32(ctx, 31, 0x189B98u);
    ctx->pc = 0x189B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B90u;
    // 0x189b94: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189B90u, 0x189B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B98u;
label_189b98:
    // 0x189b98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189B98u;
    SET_GPR_U32(ctx, 31, 0x189BA0u);
    ctx->pc = 0x189B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B98u;
    // 0x189b9c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189B98u, 0x189BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BA0u;
label_189ba0:
    // 0x189ba0: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x189ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x189ba4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x189ba8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x189ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189bac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x189bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x189bb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189bb4: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x189bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x189bb8: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x189bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    // 0x189bbc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189BBCu;
    SET_GPR_U32(ctx, 31, 0x189BC4u);
    ctx->pc = 0x189BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BBCu;
    // 0x189bc0: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189BBCu, 0x189BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BC4u;
}
