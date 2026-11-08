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

// Function: entry_0012ae90
// Address: 0x12ae90 - 0x12aec4
void entry_0012ae90_0x12ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae90_0x12ae90");
#endif

    switch (ctx->pc) {
        case 0x12ae98u: goto label_12ae98;
        case 0x12aea0u: goto label_12aea0;
        default: break;
    }

    ctx->pc = 0x12ae90u;

    // 0x12ae90: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12AE90u;
    SET_GPR_U32(ctx, 31, 0x12AE98u);
    ctx->pc = 0x12AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE90u;
    // 0x12ae94: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12AE90u, 0x12AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE98u;
label_12ae98:
    // 0x12ae98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12AE98u;
    SET_GPR_U32(ctx, 31, 0x12AEA0u);
    ctx->pc = 0x12AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE98u;
    // 0x12ae9c: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12AE98u, 0x12AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEA0u;
label_12aea0:
    // 0x12aea0: 0x8e90008c  lw          $s0, 0x8C($s4)
    ctx->pc = 0x12aea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x12aea4: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x12aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x12aea8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12aeac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12aeb0: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x12aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x12aeb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12aeb8: 0xae85008c  sw          $a1, 0x8C($s4)
    ctx->pc = 0x12aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 5));
    // 0x12aebc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12AEBCu;
    SET_GPR_U32(ctx, 31, 0x12AEC4u);
    ctx->pc = 0x12AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEBCu;
    // 0x12aec0: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12AEBCu, 0x12AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEC4u;
}
